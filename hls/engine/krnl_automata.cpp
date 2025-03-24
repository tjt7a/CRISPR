/**
 * Copyright (C) 2022 Xilinx, Inc
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

#include "krnl_automata.hpp"

// Read Data from Global Memory and write into Stream inStream
static void read_input(Input *in, hls::stream<Symbol> &inStream, int num_input)
{
    Symbol symbol;
// Auto-pipeline is going to apply pipeline to this loop
    for (int i = 0; i < num_input; i++)
    {

        Input temp = in[i];
        for (int j = 0; j < 4; j++)
        {
#pragma HLS pipeline II = 1
            symbol.symbol = temp.symbols[j];
	    symbol.last = ((i == (num_input - 1)) && j == 3) ? 1 : 0;

            // Blocking write command to inStream
            inStream << symbol;
        }
    }
}

// Read Input data from inStream and write the result into outStream
static void compute_automata(hls::stream<Symbol> &inStream,
                             hls::stream<Match> &outStream)
{
// Auto-pipeline is going to apply pipeline to this loop
    //for (ap_uint<30> counter = 0; counter < num_input * 4; counter++)
    ap_uint<30> counter = 0;

    Symbol symbol;
    Match match;
    while(1){
#pragma HLS pipeline II = 1
        // Blocking read command from inStream, concatenate with counter
        // and Blocking write command to outStream
        bool valid = inStream.read_nb(symbol);
	
	if(valid){
		UBYTE input_symbol = symbol.symbol;
        
		match.last = (symbol.last == 1);
        	match.ridPlusOne = automata(input_symbol);
        	match.pos = counter;
        	
		outStream << match;
		counter += 1;
	}
    }
}

// Read result from outStream and write the result to Global Memory
static void write_result(Match *out, hls::stream<Match> &outStream)
{
// Auto-pipeline is going to apply pipeline to this loop
    int next_index = 0;
    Match packet;

    //for (int i = 0; i < num_input * 4; i++)
    while(1){
#pragma HLS pipeline II = 1
        // Blocking read command to inStream
        bool valid = outStream.read_nb(packet);

	if(valid){
        	// // If we have a report bit
        	if (packet.ridPlusOne){
            		//printf("!Found something interesting at %d, writing out\n", packet.pos.to_int());
            		out[next_index++] = packet;
        	}

		if(packet.last){
			//printf("Got the last packet!; returning");
			return;
		}
	}
    }
}

extern "C"
{
    /*
        Automata Matching Kernel Implementation using dataflow
        Arguments:
            in   (input)  --> Input Vector
            out  (output) --> Output Vector
            vSize (input)  --> Size of Vector in Integer
    */
    void krnl_automata(Input *in, Match *out, int num_input)
    {
#pragma HLS INTERFACE mode = m_axi depth = 1024 port = in bundle = gmem0
#pragma HLS INTERFACE mode = m_axi depth = 1024 port = out bundle = gmem1
#pragma HLS INTERFACE ap_ctrl_chain port = return

hls_thread_local hls::stream<Symbol, 16> inStream("input_stream");
hls_thread_local hls::stream<Match, 16> outStream("output_stream");

#pragma HLS dataflow

        // dataflow pragma instruct compiler to run following three APIs in parallel
        read_input(in, inStream, num_input);
        hls_thread_local hls::task t1(compute_automata, inStream, outStream);
        write_result(out, outStream);
    }
}
