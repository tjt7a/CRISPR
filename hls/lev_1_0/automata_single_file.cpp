////////////////////////////////////////
//  Copyright goes here
//  This HLS was emitted by VASim
////////////////////////////////////////

#include "automata.hpp"

ap_uint<1> automata_0(uint8_t input) {
	#pragma HLS INLINE OFF
	#pragma HLS pipeline II=1

	//States
	static uint8_t input_r = 0;
	static const ap_uint<1> start_state = 1;
	static ap_uint<1> state_0_match_23_0_enable = 0;
	static ap_uint<1> state_0_match_21_0_enable = 0;
	static ap_uint<1> state_0_match_19_0_enable = 0;
	static ap_uint<1> state_0_match_22_0_enable = 0;
	static ap_uint<1> state_0_match_18_0_enable = 0;
	static ap_uint<1> state_0_match_16_0_enable = 0;
	static ap_uint<1> state_0_match_15_0_enable = 0;
	static ap_uint<1> state_0_match_12_0_enable = 0;
	static ap_uint<1> state_0_match_2_0_enable = 0;
	static ap_uint<1> state_0_match_20_0_enable = 0;
	static ap_uint<1> state_0_match_17_0_enable = 0;
	static ap_uint<1> state_0_match_13_0_enable = 0;
	static ap_uint<1> state_0_match_4_0_enable = 0;
	static ap_uint<1> state_0_match_14_0_enable = 0;
	static ap_uint<1> state_0_match_5_0_enable = 0;
	static ap_uint<1> state_0_match_11_0_enable = 0;
	static ap_uint<1> state_0_match_3_0_enable = 0;
	static ap_uint<1> state_0_match_6_0_enable = 0;
	static ap_uint<1> state_0_match_8_0_enable = 0;
	static ap_uint<1> state_0_match_7_0_enable = 0;
	static ap_uint<1> state_0_match_1_0_enable = 1;
	static ap_uint<1> state_0_match_9_0_enable = 0;
	static ap_uint<1> state_0_match_10_0_enable = 0;
	 // State Logic
	ap_uint<1> ste_0_match_23_0 = (state_0_match_23_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_21_0 = (state_0_match_21_0_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_19_0 = (state_0_match_19_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_22_0 = (state_0_match_22_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_18_0 = (state_0_match_18_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_16_0 = (state_0_match_16_0_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_15_0 = (state_0_match_15_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_0 = (state_0_match_12_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_2_0 = (state_0_match_2_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_20_0 = (state_0_match_20_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_17_0 = (state_0_match_17_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_0 = (state_0_match_13_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_4_0 = (state_0_match_4_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_14_0 = (state_0_match_14_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_5_0 = (state_0_match_5_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_0 = (state_0_match_11_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_3_0 = (state_0_match_3_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_6_0 = (state_0_match_6_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_8_0 = (state_0_match_8_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_7_0 = (state_0_match_7_0_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_1_0 = (state_0_match_1_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_9_0 = (state_0_match_9_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_10_0 = (state_0_match_10_0_enable) &&
		((input_r == 71));

	// Edges
	input_r = input;
	state_0_match_23_0_enable = (ste_0_match_22_0);
	state_0_match_21_0_enable = (ste_0_match_20_0);
	state_0_match_19_0_enable = (ste_0_match_18_0);
	state_0_match_22_0_enable = (ste_0_match_21_0);
	state_0_match_18_0_enable = (ste_0_match_17_0);
	state_0_match_16_0_enable = (ste_0_match_15_0);
	state_0_match_15_0_enable = (ste_0_match_14_0);
	state_0_match_12_0_enable = (ste_0_match_11_0);
	state_0_match_2_0_enable = (ste_0_match_1_0);
	state_0_match_20_0_enable = (ste_0_match_19_0);
	state_0_match_17_0_enable = (ste_0_match_16_0);
	state_0_match_13_0_enable = (ste_0_match_12_0);
	state_0_match_4_0_enable = (ste_0_match_3_0);
	state_0_match_14_0_enable = (ste_0_match_13_0);
	state_0_match_5_0_enable = (ste_0_match_4_0);
	state_0_match_11_0_enable = (ste_0_match_10_0);
	state_0_match_3_0_enable = (ste_0_match_2_0);
	state_0_match_6_0_enable = (ste_0_match_5_0);
	state_0_match_8_0_enable = (ste_0_match_7_0);
	state_0_match_7_0_enable = (ste_0_match_6_0);
	state_0_match_1_0_enable = start_state;
	state_0_match_9_0_enable = (ste_0_match_8_0);
	state_0_match_10_0_enable = (ste_0_match_9_0);
	return (ste_0_match_23_0);
}

