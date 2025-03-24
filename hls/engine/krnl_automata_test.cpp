/*
 * Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
 * Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "krnl_automata.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <vector>

int main()
{

  size_t input_buffer_size = 1 << 22; // For now, read 2 MB at a time
  char *in_buffer = new char[input_buffer_size]();

  // Vector to keep track of Matches across kernel calls
  std::vector<Match> results;

  std::streampos fsize = 0;
  std::ifstream file("/home/tjt7a/src/CRISPR/hls/engine/input/chr1.txt", std::ios::binary);
  fsize = file.tellg();
  file.seekg(0, std::ios::end);
  fsize = file.tellg() - fsize;
  file.seekg(0, std::ios::beg);
  std::cout << "Input file size: " << fsize << std::endl;

  int offset = 0;
  int loops = 2;//fsize / input_buffer_size;
  int last_chunk = fsize % input_buffer_size;
  
  // Call kernel (loops + 1) many times
  for(int i = 0; i < loops; i++){

	int loop_input_size = (i < loops) ? input_buffer_size : last_chunk;

	printf("Reading in %d bytes of the file\n", loop_input_size);
  	file.read(in_buffer, loop_input_size);
  	Input *input = reinterpret_cast<Input*>(in_buffer);

  	size_t input_size = loop_input_size / 4;
  	size_t output_buffer_size = loop_input_size;

  	Match *output = new Match[output_buffer_size]();  
  	std::cout << "Running Kernel" << std::endl << std::flush;
  	krnl_automata(input, output, input_size);

  	std::cout << "Done with Kernel" << std::endl << std::flush;

	/*std::cout << "Print first 5 outputs out" << std::endl;
	for(int k = 0; k < 5; k++){
		Match out = output[k];
		int pos = out.pos.to_int();
		int ridPlusOne = out.ridPlusOne.to_int();
		std::cout << "pos:" << pos << ", ridPlusOne:" << ridPlusOne << std::endl;
	}*/

	int j = 0;
	// Collecting results
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

  for(int i = 0; i < results.size(); i++){
    Match ri = results[i];
    int pos = ri.pos.to_int();
    int ridPlusOne = ri.ridPlusOne.to_int();
    printf("%d: rid+1:%d pos:%d\n", i, ridPlusOne, pos);
  }

  std::cout << "Test passed.\n";
  return EXIT_SUCCESS;
}
