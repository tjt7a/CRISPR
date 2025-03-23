/**
 * Copyright (C) 2019-2022 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#include <iostream>
#include <cstring>
#include <chrono>
#include <thread>
#include "util.h"
#include "../krnl_automata.hpp"
#include <stdlib.h>
#include <fstream>
#include <vector>

// XRT includes
#include "experimental/xrt_bo.h"
#include "experimental/xrt_device.h"
#include "experimental/xrt_kernel.h"

int main(int argc, char **argv)
{

    // We're expecting 2 arguments XCLBIN and INPUT
    if (argc != 3)
    {
        std::cout << "Usage: " << argv[0] << " <XCLBIN File> <INPUT File>" << std::endl;
        return EXIT_FAILURE;
    }

    // Read xlcbin argument 
    std::string binaryFile = argv[1];
    int device_index = 0;

    // Load the xclbin
    std::cout << "Open the device" << device_index << std::endl;
    auto device = xrt::device(device_index);
    std::cout << "Load the xclbin " << binaryFile << std::endl;
    auto uuid = device.load_xclbin(binaryFile);

    // Grab the input filename
    std::string input_filename = argv[2];

    // For now, lets set the input size to 2MB
    size_t input_buffer_size = 1 << 22; // For now, lets do chunks of 2MB each
    char *in_buffer = new char[input_buffer_size]();

    // This servers as a host-side match buffer for multiple kernel calls
    std::vector<Match> results;

    // Scan through the file to get the input file size
    std::streampos fsize = 0;
    std::ifstream file(input_filename, std::ios::binary);
    fsize = file.tellg();
    file.seekg(0, std::ios::end);
    fsize = file.tellg() - fsize;
    file.seekg(0, std::ios::beg);
    std::cout << "Input filename: " << input_filename << ", file size: " << fsize << std::endl;

    // Use offset to compute location of matches
    int offset = 0; 

    // Number of loops is the number of kernel calls
    int loops = (fsize % input_buffer_size == 0) ? (fsize / input_buffer_size) : (1 + (fsize / input_buffer_size));

    // Don't know if the input size will be a multiple of input_buffer, so extras
    int last_chunk = fsize % input_buffer_size;

    // Load the kernel and instantiate input and output buffers
    xrt::kernel krnl = xrt::kernel(device, uuid, "krnl_automata");
    xrt::bo bo_in;
    xrt::bo bo_out;
    xrt::bo bo_num_out;
    Input *bo_in_map;
    Match *bo_out_map;

    // Allocate input and output buffer to the same size (for now)
    std::cout << "Allocation time!" << std::endl << std::flush;
    bo_in = xrt::bo(device, input_buffer_size, krnl.group_id(0));
    bo_out = xrt::bo(device, input_buffer_size, krnl.group_id(0));

    // Use the maps to write into the buffers
    std::cout << "Creating maps for input and output" << std::endl;
    bo_in_map = bo_in.map<Input *>();
    bo_out_map = bo_out.map<Match *>();
    std::cout << "Time to start the clock" << std::endl;

    // Start the clock
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();

    // TODO, set this to the correct number of iterations; it may be loops or loops + 1
    for(int i = 0; i < loops; i++){

	    // Grab the input buffer size
	    int loop_input_size = (i < loops) ? input_buffer_size : last_chunk;
	    int output_buffer_size = loop_input_size;
	    printf("Reading in %d bytes of the file\n", loop_input_size);

	    // Read the chunk size from the file; this might not be very efficient
	    file.read(in_buffer, loop_input_size);

	    // Cast the byte array to an Input array; may be inefficient
	    Input *input = reinterpret_cast<Input*>(in_buffer);

	    // Instantiate a new output buffer; may be inefficient
	    Match *output = new Match[output_buffer_size]();

	    // memcpy into the maps
	    std::memcpy(bo_in_map, input, loop_input_size);
	    std::memcpy(bo_out_map, output, loop_input_size);

	    // Compute the number of Inputs
	    size_t input_size = loop_input_size / 4;

	    // Send input and output to FPGA
	    bo_in.sync(XCL_BO_SYNC_BO_TO_DEVICE);
	    // Run Kernel
	    auto run = krnl(bo_in, bo_out, input_size);
	    // Wait on response
	    run.wait();
	    // Send results back
	    bo_out.sync(XCL_BO_SYNC_BO_FROM_DEVICE);

	   // Copy the results to results vector
	   int j = 0;
	   while(true){
		Match out = output[j];
		int pos = out.pos.to_int();
		int ridPlusOne = out.ridPlusOne.to_int();
		if(ridPlusOne != 0){
			out.pos += offset;
			results.push_back(out);
		}
		else{
			break;
		}
		j += 1;
	   }
	   offset += loop_input_size;
	   delete output;
    }
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();


    double duration = std::chrono::duration<double, std::milli>(end_time - start_time).count();

    std::cout << "Automata Processing Time: " << duration << " ms" << std::endl
              << std::flush;
    std::cout << "Throughput: " << (offset / 1000) / (duration) << " MB/s" << std::endl;

    for (int i = 0; i < results.size(); i++)
    {
	    Match ri = results[i];
	    int pos = ri.pos.to_int();
	    int ridPlusOne = ri.ridPlusOne.to_int();
	    std::cout << i << ": rid+1:" << ridPlusOne << " pos:" << pos << std::endl;
    }

    return 0;
}
