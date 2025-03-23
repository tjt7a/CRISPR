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
    // Read settings
    std::string binaryFile = argv[1];
    int device_index = 0;

    if (argc != 3)
    {
        std::cout << "Usage: " << argv[0] << " <XCLBIN File> <INPUT File>" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Open the device" << device_index << std::endl;
    auto device = xrt::device(device_index);
    std::cout << "Load the xclbin " << binaryFile << std::endl;
    auto uuid = device.load_xclbin(binaryFile);

    std::string input_filename = argv[2];

    size_t input_buffer_size = 1 << 22; // For now, lets do chunks of 2MB each
    char *in_buffer = new char[input_buffer_size]();
    std::vector<Match> results;

    std::streampos fsize = 0;
    std::ifstream file(input_filename, std::ios::binary);
    fsize = file.tellg();
    file.seekg(0, std::ios::end);
    fsize = file.tellg() - fsize;
    file.seekg(0, std::ios::beg);

    std::cout << "Input filename: " << input_filename << ", file size: " << input_data_size << std::endl;

    int offset = 0; 
    int loops = fsize / input_buffer_size;
    int last_chunk = fsize % input_buffer_size;

    xrt::kernel krnl = xrt::kernel(device, uuid, "krnl_automata");
    xrt::bo bo_in;
    xrt::bo bo_out;
    xrt::bo bo_num_out;
    uint32_t *bo_in_map;
    uint32_t *bo_out_map;
    uint32_t *bo_num_out_map;

    std::cout << "Allocation time!" << std::endl << std::flush;
    bo_in = xrt::bo(device, input_buffer_size, krnl.group_id(0));
    bo_out = xrt::bo(device, input_buffer_size, krnl.group_id(0));

    std::cout << "Creating maps for input and output" << std::endl;
    bo_in_map = bo_in.map<uint32_t *>();
    bo_out_map = bo_out.map<uint32_t *>();
    bo_num_out_map = bo_num_out.map<uint32_t *>();


    for(int i = 0; i < loops; i++){

	    int loop_input_size = (i < loops) ? input_buffer_size : last_chunk;

	    printf("Reading in %d bytes of the file\n", loop_input_size);
	    file.read(in_buffer, loop_input_size);
	    Input *input = reinterpret_cast<Input*>(in_buffer);
	    Match *output = new Match[output_buffer_size]();
	    std::memcpy(bo_in_map, input, loop_input_size);
	    std::memcpy(bo_out_map, output, loop_input_size);

	    size_t input_size = loop_input_size / 4;

	    std::cout << "Starting Timer" << std::endl;
	    bo_in.sync(XCL_BO_SYNC_BO_TO_DEVICE);
	    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
	    auto run = krnl(bo_in, bo_out, input_size);
	    run.wait();
	    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
	   bo_out.sync(XCL_BO_SYNC_BO_FROM_DEVICE);
	    

    }



    for (int j = 0; j < num_results; j++)
    {
        output_data.push_back(bo_out_map[j]);
    }

    double duration = std::chrono::duration<double, std::milli>(end_time - start_time).count();

    std::cout << "Automata Processing Time: " << duration << " ms" << std::endl
              << std::flush;
    std::cout << "Throughput: " << (input_data_size / 1000) / (duration) << " MB/s" << std::endl;

    for (int j = 0; j < num_results; j++)
    {
        uint32_t result = output_data[j];
        uint32_t counter = (uint32_t)(result >> 2);
        uint32_t report_bits = (uint32_t)(result & 0x3);
        if (report_bits != 0)
            std::cout << counter - 1 << " : " << report_bits << std::endl;
    }

    return 0;
}
