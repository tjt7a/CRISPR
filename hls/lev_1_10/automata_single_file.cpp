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
	static ap_uint<1> state_0_match_13_0_enable = 0;
	static ap_uint<1> state_0_match_14_1_enable = 0;
	static ap_uint<1> state_0_match_16_3_enable = 0;
	static ap_uint<1> state_0_match_17_4_enable = 0;
	static ap_uint<1> state_0_match_18_5_enable = 0;
	static ap_uint<1> state_0_match_7_1_enable = 0;
	static ap_uint<1> state_0_mismatch_11_10_enable = 0;
	static ap_uint<1> state_0_match_18_10_enable = 0;
	static ap_uint<1> state_0_mismatch_6_2_enable = 0;
	static ap_uint<1> state_0_match_12_5_enable = 0;
	static ap_uint<1> state_0_match_11_5_enable = 0;
	static ap_uint<1> state_0_match_12_6_enable = 0;
	static ap_uint<1> state_0_match_12_10_enable = 0;
	static ap_uint<1> state_0_match_16_7_enable = 0;
	static ap_uint<1> state_0_match_6_0_enable = 0;
	static ap_uint<1> state_0_match_14_8_enable = 0;
	static ap_uint<1> state_0_mismatch_19_9_enable = 0;
	static ap_uint<1> state_0_match_17_9_enable = 0;
	static ap_uint<1> state_0_mismatch_6_1_enable = 0;
	static ap_uint<1> state_0_match_12_8_enable = 0;
	static ap_uint<1> state_0_match_9_4_enable = 0;
	static ap_uint<1> state_0_match_8_3_enable = 0;
	static ap_uint<1> state_0_match_15_8_enable = 0;
	static ap_uint<1> state_0_mismatch_9_4_enable = 0;
	static ap_uint<1> state_0_match_20_8_enable = 0;
	static ap_uint<1> state_0_mismatch_13_3_enable = 0;
	static ap_uint<1> state_0_match_7_2_enable = 0;
	static ap_uint<1> state_0_match_6_1_enable = 0;
	static ap_uint<1> state_0_match_5_3_enable = 0;
	static ap_uint<1> state_0_mismatch_8_3_enable = 0;
	static ap_uint<1> state_0_mismatch_14_3_enable = 0;
	static ap_uint<1> state_0_match_10_5_enable = 0;
	static ap_uint<1> state_0_mismatch_11_6_enable = 0;
	static ap_uint<1> state_0_match_5_1_enable = 0;
	static ap_uint<1> state_0_mismatch_12_6_enable = 0;
	static ap_uint<1> state_0_mismatch_10_7_enable = 0;
	static ap_uint<1> state_0_mismatch_12_7_enable = 0;
	static ap_uint<1> state_0_mismatch_8_4_enable = 0;
	static ap_uint<1> state_0_mismatch_7_3_enable = 0;
	static ap_uint<1> state_0_mismatch_10_6_enable = 0;
	static ap_uint<1> state_0_match_21_8_enable = 0;
	static ap_uint<1> state_0_match_8_4_enable = 0;
	static ap_uint<1> state_0_mismatch_9_5_enable = 0;
	static ap_uint<1> state_0_match_9_6_enable = 0;
	static ap_uint<1> state_0_match_6_2_enable = 0;
	static ap_uint<1> state_0_match_16_9_enable = 0;
	static ap_uint<1> state_0_mismatch_12_9_enable = 0;
	static ap_uint<1> state_0_match_16_10_enable = 0;
	static ap_uint<1> state_0_match_11_7_enable = 0;
	static ap_uint<1> state_0_mismatch_16_8_enable = 0;
	static ap_uint<1> state_0_match_18_6_enable = 0;
	static ap_uint<1> state_0_mismatch_13_9_enable = 0;
	static ap_uint<1> state_0_match_10_0_enable = 0;
	static ap_uint<1> state_0_mismatch_9_6_enable = 0;
	static ap_uint<1> state_0_mismatch_14_10_enable = 0;
	static ap_uint<1> state_0_match_12_4_enable = 0;
	static ap_uint<1> state_0_match_13_9_enable = 0;
	static ap_uint<1> state_0_mismatch_14_9_enable = 0;
	static ap_uint<1> state_0_match_7_0_enable = 0;
	static ap_uint<1> state_0_mismatch_9_8_enable = 0;
	static ap_uint<1> state_0_mismatch_17_5_enable = 0;
	static ap_uint<1> state_0_mismatch_13_7_enable = 0;
	static ap_uint<1> state_0_mismatch_5_1_enable = 0;
	static ap_uint<1> state_0_match_5_2_enable = 0;
	static ap_uint<1> state_0_match_5_0_enable = 0;
	static ap_uint<1> state_0_match_8_5_enable = 0;
	static ap_uint<1> state_0_mismatch_8_7_enable = 0;
	static ap_uint<1> state_0_mismatch_7_1_enable = 0;
	static ap_uint<1> state_0_mismatch_6_5_enable = 0;
	static ap_uint<1> state_0_match_15_7_enable = 0;
	static ap_uint<1> state_0_match_9_5_enable = 0;
	static ap_uint<1> state_0_mismatch_7_4_enable = 0;
	static ap_uint<1> state_0_match_3_0_enable = 0;
	static ap_uint<1> state_0_match_12_3_enable = 0;
	static ap_uint<1> state_0_mismatch_8_5_enable = 0;
	static ap_uint<1> state_0_match_6_3_enable = 0;
	static ap_uint<1> state_0_mismatch_5_2_enable = 0;
	static ap_uint<1> state_0_mismatch_2_1_enable = 0;
	static ap_uint<1> state_0_mismatch_18_7_enable = 0;
	static ap_uint<1> state_0_match_13_10_enable = 0;
	static ap_uint<1> state_0_match_13_7_enable = 0;
	static ap_uint<1> state_0_mismatch_12_1_enable = 0;
	static ap_uint<1> state_0_mismatch_16_10_enable = 0;
	static ap_uint<1> state_0_match_15_6_enable = 0;
	static ap_uint<1> state_0_match_21_10_enable = 0;
	static ap_uint<1> state_0_match_4_1_enable = 0;
	static ap_uint<1> state_0_mismatch_12_5_enable = 0;
	static ap_uint<1> state_0_match_15_3_enable = 0;
	static ap_uint<1> state_0_mismatch_13_10_enable = 0;
	static ap_uint<1> state_0_mismatch_12_10_enable = 0;
	static ap_uint<1> state_0_match_8_2_enable = 0;
	static ap_uint<1> state_0_match_17_7_enable = 0;
	static ap_uint<1> state_0_mismatch_10_4_enable = 0;
	static ap_uint<1> state_0_mismatch_14_6_enable = 0;
	static ap_uint<1> state_0_mismatch_13_2_enable = 0;
	static ap_uint<1> state_0_match_8_6_enable = 0;
	static ap_uint<1> state_0_match_14_9_enable = 0;
	static ap_uint<1> state_0_match_17_10_enable = 0;
	static ap_uint<1> state_0_mismatch_10_9_enable = 0;
	static ap_uint<1> state_0_match_4_3_enable = 1;
	static ap_uint<1> state_0_match_8_7_enable = 1;
	static ap_uint<1> state_0_match_11_9_enable = 0;
	static ap_uint<1> state_0_match_20_9_enable = 0;
	static ap_uint<1> state_0_match_11_1_enable = 0;
	static ap_uint<1> state_0_mismatch_15_10_enable = 0;
	static ap_uint<1> state_0_mismatch_8_6_enable = 0;
	static ap_uint<1> state_0_mismatch_7_6_enable = 0;
	static ap_uint<1> state_0_match_17_5_enable = 0;
	static ap_uint<1> state_0_mismatch_12_3_enable = 0;
	static ap_uint<1> state_0_match_13_8_enable = 0;
	static ap_uint<1> state_0_mismatch_19_7_enable = 0;
	static ap_uint<1> state_0_mismatch_10_2_enable = 0;
	static ap_uint<1> state_0_match_12_9_enable = 0;
	static ap_uint<1> state_0_match_1_0_enable = 1;
	static ap_uint<1> state_0_match_9_1_enable = 0;
	static ap_uint<1> state_0_match_9_8_enable = 1;
	static ap_uint<1> state_0_mismatch_13_8_enable = 0;
	static ap_uint<1> state_0_mismatch_11_7_enable = 0;
	static ap_uint<1> state_0_mismatch_7_5_enable = 0;
	static ap_uint<1> state_0_mismatch_14_4_enable = 0;
	static ap_uint<1> state_0_match_10_9_enable = 1;
	static ap_uint<1> state_0_match_10_8_enable = 0;
	static ap_uint<1> state_0_mismatch_5_4_enable = 0;
	static ap_uint<1> state_0_match_2_1_enable = 1;
	static ap_uint<1> state_0_mismatch_9_7_enable = 0;
	static ap_uint<1> state_0_mismatch_8_1_enable = 0;
	static ap_uint<1> state_0_mismatch_14_8_enable = 0;
	static ap_uint<1> state_0_match_15_9_enable = 0;
	static ap_uint<1> state_0_mismatch_15_5_enable = 0;
	static ap_uint<1> state_0_match_19_6_enable = 0;
	static ap_uint<1> state_0_match_2_0_enable = 0;
	static ap_uint<1> state_0_mismatch_15_8_enable = 0;
	static ap_uint<1> state_0_match_10_4_enable = 0;
	static ap_uint<1> state_0_match_3_2_enable = 1;
	static ap_uint<1> state_0_match_12_2_enable = 0;
	static ap_uint<1> state_0_match_5_4_enable = 1;
	static ap_uint<1> state_0_mismatch_12_8_enable = 0;
	static ap_uint<1> state_0_match_19_10_enable = 0;
	static ap_uint<1> state_0_match_15_10_enable = 0;
	static ap_uint<1> state_0_match_14_10_enable = 0;
	static ap_uint<1> state_0_match_11_6_enable = 0;
	static ap_uint<1> state_0_match_23_10_enable = 0;
	static ap_uint<1> state_0_match_4_2_enable = 0;
	static ap_uint<1> state_0_match_13_4_enable = 0;
	static ap_uint<1> state_0_mismatch_4_3_enable = 0;
	static ap_uint<1> state_0_match_20_7_enable = 0;
	static ap_uint<1> state_0_mismatch_11_5_enable = 0;
	static ap_uint<1> state_0_match_9_7_enable = 0;
	static ap_uint<1> state_0_mismatch_11_1_enable = 0;
	static ap_uint<1> state_0_mismatch_6_3_enable = 0;
	static ap_uint<1> state_0_mismatch_5_3_enable = 0;
	static ap_uint<1> state_0_mismatch_3_1_enable = 0;
	static ap_uint<1> state_0_match_14_6_enable = 0;
	static ap_uint<1> state_0_match_17_8_enable = 0;
	static ap_uint<1> state_0_mismatch_4_2_enable = 0;
	static ap_uint<1> state_0_mismatch_10_1_enable = 0;
	static ap_uint<1> state_0_match_9_3_enable = 0;
	static ap_uint<1> state_0_mismatch_6_4_enable = 0;
	static ap_uint<1> state_0_mismatch_4_1_enable = 0;
	static ap_uint<1> state_0_match_15_4_enable = 0;
	static ap_uint<1> state_0_mismatch_20_8_enable = 0;
	static ap_uint<1> state_0_match_19_7_enable = 0;
	static ap_uint<1> state_0_match_4_0_enable = 0;
	static ap_uint<1> state_0_mismatch_11_8_enable = 0;
	static ap_uint<1> state_0_match_7_5_enable = 0;
	static ap_uint<1> state_0_match_3_1_enable = 0;
	static ap_uint<1> state_0_match_15_2_enable = 0;
	static ap_uint<1> state_0_match_10_7_enable = 0;
	static ap_uint<1> state_0_mismatch_15_3_enable = 0;
	static ap_uint<1> state_0_match_7_6_enable = 1;
	static ap_uint<1> state_0_match_7_4_enable = 0;
	static ap_uint<1> state_0_mismatch_17_10_enable = 0;
	static ap_uint<1> state_0_mismatch_8_2_enable = 0;
	static ap_uint<1> state_0_mismatch_9_3_enable = 0;
	static ap_uint<1> state_0_mismatch_16_9_enable = 0;
	static ap_uint<1> state_0_match_22_9_enable = 0;
	static ap_uint<1> state_0_match_11_3_enable = 0;
	static ap_uint<1> state_0_mismatch_3_2_enable = 0;
	static ap_uint<1> state_0_match_11_0_enable = 0;
	static ap_uint<1> state_0_match_14_7_enable = 0;
	static ap_uint<1> state_0_match_16_8_enable = 0;
	static ap_uint<1> state_0_match_12_1_enable = 0;
	static ap_uint<1> state_0_mismatch_14_7_enable = 0;
	static ap_uint<1> state_0_match_13_6_enable = 0;
	static ap_uint<1> state_0_mismatch_13_6_enable = 0;
	static ap_uint<1> state_0_match_11_4_enable = 0;
	static ap_uint<1> state_0_mismatch_15_9_enable = 0;
	static ap_uint<1> state_0_match_10_3_enable = 0;
	static ap_uint<1> state_0_match_18_9_enable = 0;
	static ap_uint<1> state_0_mismatch_16_7_enable = 0;
	static ap_uint<1> state_0_match_8_1_enable = 0;
	static ap_uint<1> state_0_match_18_8_enable = 0;
	static ap_uint<1> state_0_match_9_2_enable = 0;
	static ap_uint<1> state_0_mismatch_10_3_enable = 0;
	static ap_uint<1> state_0_match_10_6_enable = 0;
	static ap_uint<1> state_0_mismatch_18_10_enable = 0;
	static ap_uint<1> state_0_mismatch_9_2_enable = 0;
	static ap_uint<1> state_0_mismatch_17_9_enable = 0;
	static ap_uint<1> state_0_mismatch_15_7_enable = 0;
	static ap_uint<1> state_0_mismatch_11_4_enable = 0;
	static ap_uint<1> state_0_mismatch_21_9_enable = 0;
	static ap_uint<1> state_0_match_13_5_enable = 0;
	static ap_uint<1> state_0_mismatch_13_5_enable = 0;
	static ap_uint<1> state_0_mismatch_7_2_enable = 0;
	static ap_uint<1> state_0_mismatch_12_4_enable = 0;
	static ap_uint<1> state_0_mismatch_11_3_enable = 0;
	static ap_uint<1> state_0_match_10_2_enable = 0;
	static ap_uint<1> state_0_match_19_9_enable = 0;
	static ap_uint<1> state_0_mismatch_11_9_enable = 0;
	static ap_uint<1> state_0_match_8_0_enable = 0;
	static ap_uint<1> state_0_mismatch_19_10_enable = 0;
	static ap_uint<1> state_0_mismatch_9_1_enable = 0;
	static ap_uint<1> state_0_mismatch_18_9_enable = 0;
	static ap_uint<1> state_0_mismatch_17_8_enable = 0;
	static ap_uint<1> state_0_mismatch_19_8_enable = 0;
	static ap_uint<1> state_0_mismatch_15_6_enable = 0;
	static ap_uint<1> state_0_mismatch_13_4_enable = 0;
	static ap_uint<1> state_0_match_19_8_enable = 0;
	static ap_uint<1> state_0_match_7_3_enable = 0;
	static ap_uint<1> state_0_match_14_5_enable = 0;
	static ap_uint<1> state_0_match_11_8_enable = 0;
	static ap_uint<1> state_0_mismatch_14_5_enable = 0;
	static ap_uint<1> state_0_match_11_2_enable = 0;
	static ap_uint<1> state_0_mismatch_11_2_enable = 0;
	static ap_uint<1> state_0_match_10_1_enable = 0;
	static ap_uint<1> state_0_match_9_0_enable = 0;
	static ap_uint<1> state_0_mismatch_18_8_enable = 0;
	static ap_uint<1> state_0_match_14_4_enable = 0;
	static ap_uint<1> state_0_mismatch_17_7_enable = 0;
	static ap_uint<1> state_0_match_16_6_enable = 0;
	static ap_uint<1> state_0_mismatch_16_6_enable = 0;
	static ap_uint<1> state_0_mismatch_12_2_enable = 0;
	static ap_uint<1> state_0_match_6_5_enable = 1;
	static ap_uint<1> state_0_match_15_5_enable = 0;
	static ap_uint<1> state_0_mismatch_15_4_enable = 0;
	static ap_uint<1> state_0_match_21_9_enable = 0;
	static ap_uint<1> state_0_match_22_10_enable = 0;
	static ap_uint<1> state_0_mismatch_21_10_enable = 0;
	static ap_uint<1> state_0_mismatch_20_9_enable = 0;
	static ap_uint<1> state_0_match_18_7_enable = 0;
	static ap_uint<1> state_0_match_12_7_enable = 0;
	static ap_uint<1> state_0_match_13_3_enable = 0;
	static ap_uint<1> state_0_match_17_6_enable = 0;
	static ap_uint<1> state_0_mismatch_17_6_enable = 0;
	static ap_uint<1> state_0_match_16_5_enable = 0;
	static ap_uint<1> state_0_mismatch_16_5_enable = 0;
	static ap_uint<1> state_0_match_6_4_enable = 0;
	static ap_uint<1> state_0_match_20_10_enable = 0;
	static ap_uint<1> state_0_mismatch_14_2_enable = 0;
	static ap_uint<1> state_0_match_14_3_enable = 0;
	static ap_uint<1> state_0_mismatch_20_10_enable = 0;
	static ap_uint<1> state_0_match_13_2_enable = 0;
	static ap_uint<1> state_0_mismatch_22_10_enable = 0;
	static ap_uint<1> state_0_mismatch_10_5_enable = 0;
	static ap_uint<1> state_0_mismatch_18_6_enable = 0;
	static ap_uint<1> state_0_match_16_4_enable = 0;
	static ap_uint<1> state_0_mismatch_10_8_enable = 0;
	static ap_uint<1> state_0_mismatch_16_4_enable = 0;
	static ap_uint<1> state_0_match_14_2_enable = 0;
	static ap_uint<1> state_0_match_13_1_enable = 0;
	static ap_uint<1> state_0_mismatch_13_1_enable = 0;
	static ap_uint<1> state_0_match_11_10_enable = 1;
	static ap_uint<1> state_0_match_12_0_enable = 0;
	 // State Logic
	ap_uint<1> ste_0_match_13_0 = (state_0_match_13_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_14_1 = (state_0_match_14_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_16_3 = (state_0_match_16_3_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_17_4 = (state_0_match_17_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_18_5 = (state_0_match_18_5_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_7_1 = (state_0_match_7_1_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_11_10 = (state_0_mismatch_11_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_18_10 = (state_0_match_18_10_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_6_2 = (state_0_mismatch_6_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_5 = (state_0_match_12_5_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_5 = (state_0_match_11_5_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_12_6 = (state_0_match_12_6_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_10 = (state_0_match_12_10_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_16_7 = (state_0_match_16_7_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_6_0 = (state_0_match_6_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_14_8 = (state_0_match_14_8_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_19_9 = (state_0_mismatch_19_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_17_9 = (state_0_match_17_9_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_6_1 = (state_0_mismatch_6_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_8 = (state_0_match_12_8_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_9_4 = (state_0_match_9_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_8_3 = (state_0_match_8_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_15_8 = (state_0_match_15_8_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_9_4 = (state_0_mismatch_9_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_20_8 = (state_0_match_20_8_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_13_3 = (state_0_mismatch_13_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_2 = (state_0_match_7_2_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_6_1 = (state_0_match_6_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_5_3 = (state_0_match_5_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_8_3 = (state_0_mismatch_8_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_14_3 = (state_0_mismatch_14_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_5 = (state_0_match_10_5_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_11_6 = (state_0_mismatch_11_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_5_1 = (state_0_match_5_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_6 = (state_0_mismatch_12_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_7 = (state_0_mismatch_10_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_12_7 = (state_0_mismatch_12_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_4 = (state_0_mismatch_8_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_3 = (state_0_mismatch_7_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_6 = (state_0_mismatch_10_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_21_8 = (state_0_match_21_8_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_8_4 = (state_0_match_8_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_9_5 = (state_0_mismatch_9_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_6 = (state_0_match_9_6_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_6_2 = (state_0_match_6_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_16_9 = (state_0_match_16_9_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_12_9 = (state_0_mismatch_12_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_10 = (state_0_match_16_10_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_11_7 = (state_0_match_11_7_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_16_8 = (state_0_mismatch_16_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_18_6 = (state_0_match_18_6_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_13_9 = (state_0_mismatch_13_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_0 = (state_0_match_10_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_9_6 = (state_0_mismatch_9_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_14_10 = (state_0_mismatch_14_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_4 = (state_0_match_12_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_9 = (state_0_match_13_9_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_14_9 = (state_0_mismatch_14_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_0 = (state_0_match_7_0_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_9_8 = (state_0_mismatch_9_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_17_5 = (state_0_mismatch_17_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_13_7 = (state_0_mismatch_13_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_5_1 = (state_0_mismatch_5_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_5_2 = (state_0_match_5_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_5_0 = (state_0_match_5_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_8_5 = (state_0_match_8_5_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_8_7 = (state_0_mismatch_8_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_1 = (state_0_mismatch_7_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_6_5 = (state_0_mismatch_6_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_7 = (state_0_match_15_7_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_9_5 = (state_0_match_9_5_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_7_4 = (state_0_mismatch_7_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_3_0 = (state_0_match_3_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_3 = (state_0_match_12_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_8_5 = (state_0_mismatch_8_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_3 = (state_0_match_6_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_5_2 = (state_0_mismatch_5_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_2_1 = (state_0_mismatch_2_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_7 = (state_0_mismatch_18_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_10 = (state_0_match_13_10_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_7 = (state_0_match_13_7_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_1 = (state_0_mismatch_12_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_16_10 = (state_0_mismatch_16_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_6 = (state_0_match_15_6_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_21_10 = (state_0_match_21_10_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_4_1 = (state_0_match_4_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_5 = (state_0_mismatch_12_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_3 = (state_0_match_15_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_13_10 = (state_0_mismatch_13_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_12_10 = (state_0_mismatch_12_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_2 = (state_0_match_8_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_17_7 = (state_0_match_17_7_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_10_4 = (state_0_mismatch_10_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_14_6 = (state_0_mismatch_14_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_13_2 = (state_0_mismatch_13_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_6 = (state_0_match_8_6_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_14_9 = (state_0_match_14_9_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_17_10 = (state_0_match_17_10_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_10_9 = (state_0_mismatch_10_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_4_3 = (state_0_match_4_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_8_7 = (state_0_match_8_7_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_11_9 = (state_0_match_11_9_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_20_9 = (state_0_match_20_9_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_11_1 = (state_0_match_11_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_15_10 = (state_0_mismatch_15_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_6 = (state_0_mismatch_8_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_6 = (state_0_mismatch_7_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_17_5 = (state_0_match_17_5_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_3 = (state_0_mismatch_12_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_8 = (state_0_match_13_8_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_19_7 = (state_0_mismatch_19_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_2 = (state_0_mismatch_10_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_9 = (state_0_match_12_9_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_1_0 = (state_0_match_1_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_9_1 = (state_0_match_9_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_9_8 = (state_0_match_9_8_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_13_8 = (state_0_mismatch_13_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_11_7 = (state_0_mismatch_11_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_5 = (state_0_mismatch_7_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_14_4 = (state_0_mismatch_14_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_9 = (state_0_match_10_9_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_10_8 = (state_0_match_10_8_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_5_4 = (state_0_mismatch_5_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_2_1 = (state_0_match_2_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_9_7 = (state_0_mismatch_9_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_1 = (state_0_mismatch_8_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_14_8 = (state_0_mismatch_14_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_9 = (state_0_match_15_9_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_15_5 = (state_0_mismatch_15_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_6 = (state_0_match_19_6_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_2_0 = (state_0_match_2_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_15_8 = (state_0_mismatch_15_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_4 = (state_0_match_10_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_3_2 = (state_0_match_3_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_2 = (state_0_match_12_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_5_4 = (state_0_match_5_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_8 = (state_0_mismatch_12_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_10 = (state_0_match_19_10_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_15_10 = (state_0_match_15_10_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_14_10 = (state_0_match_14_10_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_6 = (state_0_match_11_6_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_23_10 = (state_0_match_23_10_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_4_2 = (state_0_match_4_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_4 = (state_0_match_13_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_4_3 = (state_0_mismatch_4_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_20_7 = (state_0_match_20_7_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_11_5 = (state_0_mismatch_11_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_7 = (state_0_match_9_7_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_11_1 = (state_0_mismatch_11_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_6_3 = (state_0_mismatch_6_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_5_3 = (state_0_mismatch_5_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_3_1 = (state_0_mismatch_3_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_6 = (state_0_match_14_6_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_17_8 = (state_0_match_17_8_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_4_2 = (state_0_mismatch_4_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_1 = (state_0_mismatch_10_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_3 = (state_0_match_9_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_6_4 = (state_0_mismatch_6_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_4_1 = (state_0_mismatch_4_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_4 = (state_0_match_15_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_20_8 = (state_0_mismatch_20_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_7 = (state_0_match_19_7_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_4_0 = (state_0_match_4_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_11_8 = (state_0_mismatch_11_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_5 = (state_0_match_7_5_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_3_1 = (state_0_match_3_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_15_2 = (state_0_match_15_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_10_7 = (state_0_match_10_7_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_15_3 = (state_0_mismatch_15_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_6 = (state_0_match_7_6_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_7_4 = (state_0_match_7_4_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_17_10 = (state_0_mismatch_17_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_2 = (state_0_mismatch_8_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_9_3 = (state_0_mismatch_9_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_16_9 = (state_0_mismatch_16_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_22_9 = (state_0_match_22_9_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_11_3 = (state_0_match_11_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_3_2 = (state_0_mismatch_3_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_11_0 = (state_0_match_11_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_14_7 = (state_0_match_14_7_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_16_8 = (state_0_match_16_8_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_12_1 = (state_0_match_12_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_14_7 = (state_0_mismatch_14_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_6 = (state_0_match_13_6_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_13_6 = (state_0_mismatch_13_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_11_4 = (state_0_match_11_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_15_9 = (state_0_mismatch_15_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_3 = (state_0_match_10_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_18_9 = (state_0_match_18_9_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_16_7 = (state_0_mismatch_16_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_1 = (state_0_match_8_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_18_8 = (state_0_match_18_8_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_9_2 = (state_0_match_9_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_10_3 = (state_0_mismatch_10_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_6 = (state_0_match_10_6_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_18_10 = (state_0_mismatch_18_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_9_2 = (state_0_mismatch_9_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_17_9 = (state_0_mismatch_17_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_15_7 = (state_0_mismatch_15_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_11_4 = (state_0_mismatch_11_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_21_9 = (state_0_mismatch_21_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_5 = (state_0_match_13_5_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_13_5 = (state_0_mismatch_13_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_2 = (state_0_mismatch_7_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_12_4 = (state_0_mismatch_12_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_11_3 = (state_0_mismatch_11_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_2 = (state_0_match_10_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_19_9 = (state_0_match_19_9_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_11_9 = (state_0_mismatch_11_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_0 = (state_0_match_8_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_19_10 = (state_0_mismatch_19_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_9_1 = (state_0_mismatch_9_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_9 = (state_0_mismatch_18_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_17_8 = (state_0_mismatch_17_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_19_8 = (state_0_mismatch_19_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_15_6 = (state_0_mismatch_15_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_13_4 = (state_0_mismatch_13_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_8 = (state_0_match_19_8_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_7_3 = (state_0_match_7_3_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_14_5 = (state_0_match_14_5_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_8 = (state_0_match_11_8_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_14_5 = (state_0_mismatch_14_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_11_2 = (state_0_match_11_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_11_2 = (state_0_mismatch_11_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_1 = (state_0_match_10_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_9_0 = (state_0_match_9_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_18_8 = (state_0_mismatch_18_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_4 = (state_0_match_14_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_17_7 = (state_0_mismatch_17_7_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_6 = (state_0_match_16_6_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_16_6 = (state_0_mismatch_16_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_12_2 = (state_0_mismatch_12_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_5 = (state_0_match_6_5_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_15_5 = (state_0_match_15_5_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_15_4 = (state_0_mismatch_15_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_21_9 = (state_0_match_21_9_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_22_10 = (state_0_match_22_10_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_21_10 = (state_0_mismatch_21_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_20_9 = (state_0_mismatch_20_9_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_18_7 = (state_0_match_18_7_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_12_7 = (state_0_match_12_7_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_3 = (state_0_match_13_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_17_6 = (state_0_match_17_6_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_17_6 = (state_0_mismatch_17_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_5 = (state_0_match_16_5_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_16_5 = (state_0_mismatch_16_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_4 = (state_0_match_6_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_20_10 = (state_0_match_20_10_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_14_2 = (state_0_mismatch_14_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_3 = (state_0_match_14_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_20_10 = (state_0_mismatch_20_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_2 = (state_0_match_13_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_22_10 = (state_0_mismatch_22_10_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_5 = (state_0_mismatch_10_5_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_6 = (state_0_mismatch_18_6_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_4 = (state_0_match_16_4_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_10_8 = (state_0_mismatch_10_8_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_16_4 = (state_0_mismatch_16_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_2 = (state_0_match_14_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_1 = (state_0_match_13_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_13_1 = (state_0_mismatch_13_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_11_10 = (state_0_match_11_10_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_12_0 = (state_0_match_12_0_enable) &&
		((input_r == 67));

	// Edges
	input_r = input;
	state_0_match_13_0_enable = (ste_0_match_12_0);
	state_0_match_14_1_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_mismatch_13_1);
	state_0_match_16_3_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3);
	state_0_match_17_4_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4);
	state_0_match_18_5_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5);
	state_0_match_7_1_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_mismatch_6_1);
	state_0_mismatch_11_10_enable = (ste_0_match_10_9 || ste_0_match_11_9 || ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_8 || ste_0_mismatch_10_9 || ste_0_mismatch_11_9 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_8);
	state_0_match_18_10_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_8 || ste_0_match_16_9 || ste_0_match_17_10 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_8 || ste_0_mismatch_16_9 || ste_0_mismatch_17_10 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_6_2_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_1 || ste_0_mismatch_5_1 || ste_0_mismatch_6_1);
	state_0_match_12_5_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_11_5_enable = (ste_0_match_10_5 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_12_6_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_12_10_enable = (ste_0_match_10_9 || ste_0_match_11_10 || ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_8 || ste_0_mismatch_10_9 || ste_0_mismatch_11_10 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_8);
	state_0_match_16_7_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_9_1);
	state_0_match_6_0_enable = (ste_0_match_5_0);
	state_0_match_14_8_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_8 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_8 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_19_9_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_8 || ste_0_match_19_8 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_8 || ste_0_mismatch_19_8);
	state_0_match_17_9_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_8 || ste_0_match_16_9 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_8 || ste_0_mismatch_16_9 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_6_1_enable = (ste_0_match_5_0 || ste_0_match_6_0);
	state_0_match_12_8_enable = (ste_0_match_10_7 || ste_0_match_11_8 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_8 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_match_9_4_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4);
	state_0_match_8_3_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3);
	state_0_match_15_8_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_8 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_8 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_9_4_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_3 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_3);
	state_0_match_20_8_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_8 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_8);
	state_0_mismatch_13_3_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_2 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_2);
	state_0_match_7_2_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2);
	state_0_match_6_1_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_mismatch_5_1);
	state_0_match_5_3_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3);
	state_0_mismatch_8_3_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_2 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_2);
	state_0_mismatch_14_3_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_2 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_2);
	state_0_match_10_5_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_mismatch_11_6_enable = (ste_0_match_10_5 || ste_0_match_11_5 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_5 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_5_1_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_mismatch_4_1);
	state_0_mismatch_12_6_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_5 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_5 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_10_7_enable = (ste_0_match_10_6 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_6 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_mismatch_12_7_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_6 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_6 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_8_4_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_3 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_3);
	state_0_mismatch_7_3_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_2 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_2);
	state_0_mismatch_10_6_enable = (ste_0_match_10_5 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_5 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_21_8_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_match_20_8 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7 || ste_0_mismatch_20_8);
	state_0_match_8_4_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4);
	state_0_mismatch_9_5_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_4 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_4);
	state_0_match_9_6_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6);
	state_0_match_6_2_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2);
	state_0_match_16_9_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_8 || ste_0_match_15_9 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_8 || ste_0_mismatch_15_9 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_12_9_enable = (ste_0_match_10_7 || ste_0_match_11_8 || ste_0_match_12_8 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_8 || ste_0_mismatch_12_8 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_match_16_10_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_8 || ste_0_match_14_9 || ste_0_match_15_10 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_8 || ste_0_mismatch_14_9 || ste_0_mismatch_15_10 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_11_7_enable = (ste_0_match_10_7 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_mismatch_16_8_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_7 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_7 || ste_0_mismatch_9_1);
	state_0_match_18_6_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6);
	state_0_mismatch_13_9_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_8 || ste_0_match_13_8 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_8 || ste_0_mismatch_13_8 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_10_0_enable = (ste_0_match_9_0);
	state_0_mismatch_9_6_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_5 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_5);
	state_0_mismatch_14_10_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_8 || ste_0_match_13_9 || ste_0_match_14_9 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_8 || ste_0_mismatch_13_9 || ste_0_mismatch_14_9 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_12_4_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_13_9_enable = (ste_0_match_10_7 || ste_0_match_11_8 || ste_0_match_12_9 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_8 || ste_0_mismatch_12_9 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_mismatch_14_9_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_8 || ste_0_match_14_8 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_8 || ste_0_mismatch_14_8 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_7_0_enable = (ste_0_match_6_0);
	state_0_mismatch_9_8_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_7 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_7);
	state_0_mismatch_17_5_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4);
	state_0_mismatch_13_7_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_6 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_6 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_5_1_enable = (ste_0_match_4_0 || ste_0_match_5_0);
	state_0_match_5_2_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2);
	state_0_match_5_0_enable = (ste_0_match_4_0);
	state_0_match_8_5_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5);
	state_0_mismatch_8_7_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_6 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_6);
	state_0_mismatch_7_1_enable = (ste_0_match_6_0 || ste_0_match_7_0);
	state_0_mismatch_6_5_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_4 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_4);
	state_0_match_15_7_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_9_5_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5);
	state_0_mismatch_7_4_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_3 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_3);
	state_0_match_3_0_enable = (ste_0_match_2_0);
	state_0_match_12_3_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_9_1);
	state_0_mismatch_8_5_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_4 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_4);
	state_0_match_6_3_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3);
	state_0_mismatch_5_2_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_1 || ste_0_mismatch_4_1 || ste_0_mismatch_5_1);
	state_0_mismatch_2_1_enable = (ste_0_match_1_0 || ste_0_match_2_0);
	state_0_mismatch_18_7_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_6 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_6);
	state_0_match_13_10_enable = (ste_0_match_10_8 || ste_0_match_11_9 || ste_0_match_12_10 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_8 || ste_0_mismatch_11_9 || ste_0_mismatch_12_10 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_match_13_7_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_12_1_enable = (ste_0_match_11_0 || ste_0_match_12_0);
	state_0_mismatch_16_10_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_8 || ste_0_match_15_9 || ste_0_match_16_9 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_8 || ste_0_mismatch_15_9 || ste_0_mismatch_16_9 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_15_6_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_9_1);
	state_0_match_21_10_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_8 || ste_0_match_19_9 || ste_0_match_20_10 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_8 || ste_0_mismatch_19_9 || ste_0_mismatch_20_10);
	state_0_match_4_1_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_mismatch_3_1);
	state_0_mismatch_12_5_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_4 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_4 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_15_3_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3);
	state_0_mismatch_13_10_enable = (ste_0_match_10_7 || ste_0_match_11_8 || ste_0_match_12_9 || ste_0_match_13_9 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_8 || ste_0_mismatch_12_9 || ste_0_mismatch_13_9 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_mismatch_12_10_enable = (ste_0_match_10_8 || ste_0_match_11_9 || ste_0_match_12_9 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_8 || ste_0_mismatch_11_9 || ste_0_mismatch_12_9 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_match_8_2_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2);
	state_0_match_17_7_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7);
	state_0_mismatch_10_4_enable = (ste_0_match_10_3 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_3 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_14_6_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_5 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_5 || ste_0_mismatch_9_1);
	state_0_mismatch_13_2_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_1 || ste_0_mismatch_12_1 || ste_0_mismatch_13_1);
	state_0_match_8_6_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6);
	state_0_match_14_9_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_8 || ste_0_match_13_9 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_8 || ste_0_mismatch_13_9 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_17_10_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_8 || ste_0_match_15_9 || ste_0_match_16_10 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_8 || ste_0_mismatch_15_9 || ste_0_mismatch_16_10 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_10_9_enable = (ste_0_match_10_8 || ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_8 || ste_0_mismatch_10_8 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_8);
	state_0_match_4_3_enable = start_state;
	state_0_match_8_7_enable = start_state;
	state_0_match_11_9_enable = (ste_0_match_10_9 || ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_8 || ste_0_mismatch_10_9 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_8);
	state_0_match_20_9_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_8 || ste_0_match_19_9 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_8 || ste_0_mismatch_19_9);
	state_0_match_11_1_enable = (ste_0_match_10_1 || ste_0_match_9_0 || ste_0_mismatch_10_1);
	state_0_mismatch_15_10_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_8 || ste_0_match_14_9 || ste_0_match_15_9 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_8 || ste_0_mismatch_14_9 || ste_0_mismatch_15_9 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_8_6_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_5 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_5);
	state_0_mismatch_7_6_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_5 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_5);
	state_0_match_17_5_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5);
	state_0_mismatch_12_3_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_2 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_2);
	state_0_match_13_8_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_8 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_8 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_mismatch_19_7_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6);
	state_0_mismatch_10_2_enable = (ste_0_match_10_1 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_1 || ste_0_mismatch_9_1);
	state_0_match_12_9_enable = (ste_0_match_10_8 || ste_0_match_11_9 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_8 || ste_0_mismatch_11_9 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_match_1_0_enable = start_state;
	state_0_match_9_1_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_mismatch_8_1);
	state_0_match_9_8_enable = start_state;
	state_0_mismatch_13_8_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_7 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_7 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_11_7_enable = (ste_0_match_10_6 || ste_0_match_11_6 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_6 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_mismatch_7_5_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_4 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_4);
	state_0_mismatch_14_4_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_3 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_3);
	state_0_match_10_9_enable = start_state;
	state_0_match_10_8_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_match_9_8 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7 || ste_0_mismatch_9_8);
	state_0_mismatch_5_4_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_3 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_3);
	state_0_match_2_1_enable = start_state;
	state_0_mismatch_9_7_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_6 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_6);
	state_0_mismatch_8_1_enable = (ste_0_match_7_0 || ste_0_match_8_0);
	state_0_mismatch_14_8_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_7 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_7 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_15_9_enable = (ste_0_match_10_5 || ste_0_match_11_6 || ste_0_match_12_7 || ste_0_match_13_8 || ste_0_match_14_9 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_5 || ste_0_mismatch_11_6 || ste_0_mismatch_12_7 || ste_0_mismatch_13_8 || ste_0_mismatch_14_9 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_15_5_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_4 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_4);
	state_0_match_19_6_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6);
	state_0_match_2_0_enable = (ste_0_match_1_0);
	state_0_mismatch_15_8_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_7 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_7 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_10_4_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_3_2_enable = start_state;
	state_0_match_12_2_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2);
	state_0_match_5_4_enable = start_state;
	state_0_mismatch_12_8_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_7 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_7 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_19_10_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_8 || ste_0_match_17_9 || ste_0_match_18_10 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_8 || ste_0_mismatch_17_9 || ste_0_mismatch_18_10 || ste_0_mismatch_9_1);
	state_0_match_15_10_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_12_8 || ste_0_match_13_9 || ste_0_match_14_10 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_12_8 || ste_0_mismatch_13_9 || ste_0_mismatch_14_10 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_14_10_enable = (ste_0_match_10_7 || ste_0_match_11_8 || ste_0_match_12_9 || ste_0_match_13_10 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_8 || ste_0_mismatch_12_9 || ste_0_mismatch_13_10 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_match_11_6_enable = (ste_0_match_10_6 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_23_10_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_match_20_8 || ste_0_match_21_9 || ste_0_match_22_10 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7 || ste_0_mismatch_20_8 || ste_0_mismatch_21_9 || ste_0_mismatch_22_10);
	state_0_match_4_2_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2);
	state_0_match_13_4_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_9_1);
	state_0_mismatch_4_3_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_2 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_2);
	state_0_match_20_7_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7);
	state_0_mismatch_11_5_enable = (ste_0_match_10_4 || ste_0_match_11_4 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_4 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_9_7_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_match_7_6 || ste_0_match_8_7 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5 || ste_0_mismatch_7_6 || ste_0_mismatch_8_7);
	state_0_mismatch_11_1_enable = (ste_0_match_10_0 || ste_0_match_11_0);
	state_0_mismatch_6_3_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_2 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_2);
	state_0_mismatch_5_3_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_2 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_2);
	state_0_mismatch_3_1_enable = (ste_0_match_2_0 || ste_0_match_3_0);
	state_0_match_14_6_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_17_8_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_8 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_8 || ste_0_mismatch_9_1);
	state_0_mismatch_4_2_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_1 || ste_0_mismatch_3_1 || ste_0_mismatch_4_1);
	state_0_mismatch_10_1_enable = (ste_0_match_10_0 || ste_0_match_9_0);
	state_0_match_9_3_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3);
	state_0_mismatch_6_4_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_3 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_3);
	state_0_mismatch_4_1_enable = (ste_0_match_3_0 || ste_0_match_4_0);
	state_0_match_15_4_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4);
	state_0_mismatch_20_8_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7);
	state_0_match_19_7_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7);
	state_0_match_4_0_enable = (ste_0_match_3_0);
	state_0_mismatch_11_8_enable = (ste_0_match_10_7 || ste_0_match_11_7 || ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_10_7 || ste_0_mismatch_11_7 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_match_7_5_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_match_6_5 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4 || ste_0_mismatch_6_5);
	state_0_match_3_1_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_mismatch_2_1);
	state_0_match_15_2_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2);
	state_0_match_10_7_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_mismatch_15_3_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2);
	state_0_match_7_6_enable = start_state;
	state_0_match_7_4_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4);
	state_0_mismatch_17_10_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_8 || ste_0_match_16_9 || ste_0_match_17_9 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_8 || ste_0_mismatch_16_9 || ste_0_mismatch_17_9 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_8_2_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_1 || ste_0_mismatch_7_1 || ste_0_mismatch_8_1);
	state_0_mismatch_9_3_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_2 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_2);
	state_0_mismatch_16_9_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_8 || ste_0_match_16_8 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_8 || ste_0_mismatch_16_8 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_22_9_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_match_20_8 || ste_0_match_21_9 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7 || ste_0_mismatch_20_8 || ste_0_mismatch_21_9);
	state_0_match_11_3_enable = (ste_0_match_10_3 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_3_2_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_1 || ste_0_mismatch_2_1 || ste_0_mismatch_3_1);
	state_0_match_11_0_enable = (ste_0_match_10_0);
	state_0_match_14_7_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_16_8_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_7 || ste_0_match_15_8 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_7 || ste_0_mismatch_15_8 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_12_1_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_mismatch_11_1);
	state_0_mismatch_14_7_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_6 || ste_0_match_14_6 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_6 || ste_0_mismatch_14_6 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_13_6_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_13_6_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_13_5 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_13_5 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_11_4_enable = (ste_0_match_10_4 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_15_9_enable = (ste_0_match_10_4 || ste_0_match_11_5 || ste_0_match_12_6 || ste_0_match_13_7 || ste_0_match_14_8 || ste_0_match_15_8 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_11_5 || ste_0_mismatch_12_6 || ste_0_mismatch_13_7 || ste_0_mismatch_14_8 || ste_0_mismatch_15_8 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_10_3_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_match_18_9_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_8 || ste_0_match_17_9 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_8 || ste_0_mismatch_17_9 || ste_0_mismatch_9_1);
	state_0_mismatch_16_7_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_6 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_6);
	state_0_match_8_1_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_mismatch_7_1);
	state_0_match_18_8_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_8 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_8);
	state_0_match_9_2_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2);
	state_0_mismatch_10_3_enable = (ste_0_match_10_2 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_2 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_10_6_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_match_8_5 || ste_0_match_9_6 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4 || ste_0_mismatch_8_5 || ste_0_mismatch_9_6);
	state_0_mismatch_18_10_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_8 || ste_0_match_17_9 || ste_0_match_18_9 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_8 || ste_0_mismatch_17_9 || ste_0_mismatch_18_9 || ste_0_mismatch_9_1);
	state_0_mismatch_9_2_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_1 || ste_0_mismatch_8_1 || ste_0_mismatch_9_1);
	state_0_mismatch_17_9_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_7 || ste_0_match_16_8 || ste_0_match_17_8 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_7 || ste_0_mismatch_16_8 || ste_0_mismatch_17_8 || ste_0_mismatch_9_1);
	state_0_mismatch_15_7_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_14_6 || ste_0_match_15_6 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_14_6 || ste_0_mismatch_15_6 || ste_0_mismatch_9_1);
	state_0_mismatch_11_4_enable = (ste_0_match_10_3 || ste_0_match_11_3 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_3 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_21_9_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_match_20_8 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7 || ste_0_mismatch_20_8);
	state_0_match_13_5_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_12_5 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_12_5 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_13_5_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_4 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_4 || ste_0_mismatch_9_1);
	state_0_mismatch_7_2_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_1 || ste_0_mismatch_6_1 || ste_0_mismatch_7_1);
	state_0_mismatch_12_4_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_3 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_3 || ste_0_mismatch_9_1);
	state_0_mismatch_11_3_enable = (ste_0_match_10_2 || ste_0_match_11_2 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_2 || ste_0_mismatch_9_1);
	state_0_match_10_2_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_19_9_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_8 || ste_0_match_18_9 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_8 || ste_0_mismatch_18_9);
	state_0_mismatch_11_9_enable = (ste_0_match_10_8 || ste_0_match_11_8 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_8 || ste_0_mismatch_11_8 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_match_8_0_enable = (ste_0_match_7_0);
	state_0_mismatch_19_10_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_8 || ste_0_match_18_9 || ste_0_match_19_9 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_8 || ste_0_mismatch_18_9 || ste_0_mismatch_19_9);
	state_0_mismatch_9_1_enable = (ste_0_match_8_0 || ste_0_match_9_0);
	state_0_mismatch_18_9_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_8 || ste_0_match_18_8 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_8 || ste_0_mismatch_18_8);
	state_0_mismatch_17_8_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_7 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_7);
	state_0_mismatch_19_8_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_7 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_7);
	state_0_mismatch_15_6_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_5 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_5);
	state_0_mismatch_13_4_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_3 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_3);
	state_0_match_19_8_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_8 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_8);
	state_0_match_7_3_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3);
	state_0_match_14_5_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_13_5 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_13_5 || ste_0_mismatch_9_1);
	state_0_match_11_8_enable = (ste_0_match_10_8 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_8 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_mismatch_14_5_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_4 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_4);
	state_0_match_11_2_enable = (ste_0_match_10_2 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_9_1);
	state_0_mismatch_11_2_enable = (ste_0_match_10_1 || ste_0_match_11_1 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_1);
	state_0_match_10_1_enable = (ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_9_1);
	state_0_match_9_0_enable = (ste_0_match_8_0);
	state_0_mismatch_18_8_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_7 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_7);
	state_0_match_14_4_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4);
	state_0_mismatch_17_7_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_6 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_6);
	state_0_match_16_6_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6);
	state_0_mismatch_16_6_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_5 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_5);
	state_0_mismatch_12_2_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_1 || ste_0_mismatch_11_1 || ste_0_mismatch_12_1);
	state_0_match_6_5_enable = start_state;
	state_0_match_15_5_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5);
	state_0_mismatch_15_4_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_3 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_3);
	state_0_match_21_9_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_8 || ste_0_match_20_9 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_8 || ste_0_mismatch_20_9);
	state_0_match_22_10_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_8 || ste_0_match_20_9 || ste_0_match_21_10 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_8 || ste_0_mismatch_20_9 || ste_0_mismatch_21_10);
	state_0_mismatch_21_10_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_8 || ste_0_match_20_9 || ste_0_match_21_9 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_8 || ste_0_mismatch_20_9 || ste_0_mismatch_21_9);
	state_0_mismatch_20_9_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_6 || ste_0_match_18_7 || ste_0_match_19_8 || ste_0_match_20_8 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_6 || ste_0_mismatch_18_7 || ste_0_mismatch_19_8 || ste_0_mismatch_20_8);
	state_0_match_18_7_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7);
	state_0_match_12_7_enable = (ste_0_match_10_6 || ste_0_match_11_7 || ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_match_9_5 || ste_0_mismatch_10_6 || ste_0_mismatch_11_7 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4 || ste_0_mismatch_9_5);
	state_0_match_13_3_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3);
	state_0_match_17_6_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6);
	state_0_mismatch_17_6_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_5 || ste_0_match_17_5 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_5 || ste_0_mismatch_17_5);
	state_0_match_16_5_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5);
	state_0_mismatch_16_5_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_match_16_4 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4 || ste_0_mismatch_16_4);
	state_0_match_6_4_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4);
	state_0_match_20_10_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_14_5 || ste_0_match_15_6 || ste_0_match_16_7 || ste_0_match_17_8 || ste_0_match_18_9 || ste_0_match_19_10 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4 || ste_0_mismatch_14_5 || ste_0_mismatch_15_6 || ste_0_mismatch_16_7 || ste_0_mismatch_17_8 || ste_0_mismatch_18_9 || ste_0_mismatch_19_10);
	state_0_mismatch_14_2_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_mismatch_13_1);
	state_0_match_14_3_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3);
	state_0_mismatch_20_10_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_match_15_5 || ste_0_match_16_6 || ste_0_match_17_7 || ste_0_match_18_8 || ste_0_match_19_9 || ste_0_match_20_9 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4 || ste_0_mismatch_15_5 || ste_0_mismatch_16_6 || ste_0_mismatch_17_7 || ste_0_mismatch_18_8 || ste_0_mismatch_19_9 || ste_0_mismatch_20_9);
	state_0_match_13_2_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2);
	state_0_mismatch_22_10_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_match_18_6 || ste_0_match_19_7 || ste_0_match_20_8 || ste_0_match_21_9 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5 || ste_0_mismatch_18_6 || ste_0_mismatch_19_7 || ste_0_mismatch_20_8 || ste_0_mismatch_21_9);
	state_0_mismatch_10_5_enable = (ste_0_match_10_4 || ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_10_4 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_mismatch_18_6_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_match_17_5 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4 || ste_0_mismatch_17_5);
	state_0_match_16_4_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4);
	state_0_mismatch_10_8_enable = (ste_0_match_10_7 || ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_match_7_5 || ste_0_match_8_6 || ste_0_match_9_7 || ste_0_mismatch_10_7 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4 || ste_0_mismatch_7_5 || ste_0_mismatch_8_6 || ste_0_mismatch_9_7);
	state_0_mismatch_16_4_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3);
	state_0_match_14_2_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2);
	state_0_match_13_1_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_mismatch_12_1);
	state_0_mismatch_13_1_enable = (ste_0_match_12_0);
	state_0_match_11_10_enable = start_state;
	state_0_match_12_0_enable = (ste_0_match_11_0);
	return (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_16_3 || ste_0_match_17_4 || ste_0_match_18_5 || ste_0_match_21_8 || ste_0_match_19_6 || ste_0_match_23_10 || ste_0_match_20_7 || ste_0_match_15_2 || ste_0_match_22_9);
}

