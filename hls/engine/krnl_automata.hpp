/*
 * Copyright 2021 Xilinx, Inc.
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

#ifndef _KRNL_AUTOMATA_H_
#define _KRNL_AUTOMATA_H_

// Includes
#include <iostream>
#include <ap_int.h>
#include <hls_stream.h>
#include "automata.hpp"
#include "hls_task.h"

const int size = 1000;

typedef ap_uint<1> U1BIT; // 2-bit generic
typedef ap_uint<30> U30BIT; // 30-bit generic
typedef uint8_t UBYTE;  // a byte

struct Input {
	UBYTE symbols[4]; // Array of 4 8-bit symbols
};

struct Symbol {
	UBYTE symbol;
	UBYTE last;
};

// We want to keep this to a power of 2
struct Match {
	U1BIT ridPlusOne; // MATCH STATE ID + 1; 0 means invalid
	U1BIT last;
	U30BIT pos;		//  Detection position up to 1 billion
};

extern "C" {
	void krnl_automata(Input* input, Match* output, int num_input);
}

#endif
