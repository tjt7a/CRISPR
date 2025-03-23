////////////////////////////////////////
//  Copyright goes here
//  This HLS was emitted by VASim
////////////////////////////////////////

#include "automata.hpp"

ap_uint<1> automata(uint8_t input){
        #pragma HLS INLINE OFF
	#pragma HLS pipeline II=1

        ap_uint<1> report = automata_0(input);
        
        return report;
}
