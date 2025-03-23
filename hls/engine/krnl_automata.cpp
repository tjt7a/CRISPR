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
static void read_input(Input *in, hls::stream<UBYTE> &inStream, int num_input)
{
// Auto-pipeline is going to apply pipeline to this loop
mem_rd:
    for (int i = 0; i < num_input; i++)
    {
#pragma HLS LOOP_TRIPCOUNT min = size max = size

        Input temp = in[i];
        for (int j = 0; j < 4; j++)
        {
#pragma HLS LOOP_TRIPCOUNT min = 4 max = 4
#pragma HLS pipeline II = 1

            UBYTE symbol = temp.symbols[j];
            // Blocking write command to inStream
            inStream << symbol;
        }
    }
}

// Read Input data from inStream and write the result into outStream
static void compute_automata(hls::stream<UBYTE> &inStream,
                             hls::stream<Match> &outStream,
                             int num_input)
{
// Auto-pipeline is going to apply pipeline to this loop
execute:
    for (ap_uint<30> counter = 0; counter < num_input * 4; counter++)
    {
#pragma HLS LOOP_TRIPCOUNT min = size * 4 max = size * 4
#pragma HLS pipeline II = 1
        // Blocking read command from inStream, concatenate with counter
        // and Blocking write command to outStream
        UBYTE symbol = inStream.read();
        Match match;
        match.ridPlusOne = ap_uint<2>(automata(symbol));
        match.pos = counter;
        outStream << match;
    }
}

// Read result from outStream and write the result to Global Memory
static void write_result(Match *out, hls::stream<Match> &outStream, int num_input)
{
// Auto-pipeline is going to apply pipeline to this loop
mem_wr:
    int next_index = 0;

    for (int i = 0; i < num_input * 4; i++)
    {
#pragma HLS LOOP_TRIPCOUNT min = size * 4 max = size * 4
#pragma HLS pipeline II = 1
        // Blocking read command to inStream
        Match packet = outStream.read();

        // // If we have a report bit
        if ((packet.ridPlusOne & 0x3) != 0)
        {
            //printf("!Found something interesting at %d, writing out\n", packet.pos.to_int());
            out[next_index++] = packet;
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
        static hls::stream<UBYTE> inStream("input_stream");
        static hls::stream<Match> outStream("output_stream");

#pragma HLS INTERFACE m_axi depth = 1<<22 port = in offset = slave
#pragma HLS INTERFACE m_axi depth = 1<<22 port = out offset = slave
#pragma HLS INTERFACE s_axilite depth = 1 port = num_input bundle = CTRL
#pragma HLS aggregate variable=out compact=bit

#pragma HLS dataflow

        // dataflow pragma instruct compiler to run following three APIs in parallel
        read_input(in, inStream, num_input);
        compute_automata(inStream, outStream, num_input);
        write_result(out, outStream, num_input);
    }
}
