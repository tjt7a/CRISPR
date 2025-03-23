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
	static ap_uint<1> state_0_match_19_0_enable = 0;
	static ap_uint<1> state_0_mismatch_20_2_enable = 0;
	static ap_uint<1> state_0_mismatch_22_4_enable = 0;
	static ap_uint<1> state_0_match_22_3_enable = 0;
	static ap_uint<1> state_0_match_23_4_enable = 0;
	static ap_uint<1> state_0_match_19_1_enable = 0;
	static ap_uint<1> state_0_match_20_2_enable = 0;
	static ap_uint<1> state_0_mismatch_19_2_enable = 0;
	static ap_uint<1> state_0_match_21_3_enable = 0;
	static ap_uint<1> state_0_match_22_4_enable = 0;
	static ap_uint<1> state_0_mismatch_21_3_enable = 0;
	static ap_uint<1> state_0_match_19_2_enable = 0;
	static ap_uint<1> state_0_match_20_1_enable = 0;
	static ap_uint<1> state_0_mismatch_17_1_enable = 0;
	static ap_uint<1> state_0_mismatch_19_3_enable = 0;
	static ap_uint<1> state_0_mismatch_20_4_enable = 0;
	static ap_uint<1> state_0_match_16_0_enable = 0;
	static ap_uint<1> state_0_mismatch_17_2_enable = 0;
	static ap_uint<1> state_0_mismatch_18_3_enable = 0;
	static ap_uint<1> state_0_mismatch_19_4_enable = 0;
	static ap_uint<1> state_0_match_19_3_enable = 0;
	static ap_uint<1> state_0_match_18_2_enable = 0;
	static ap_uint<1> state_0_match_20_4_enable = 0;
	static ap_uint<1> state_0_match_16_1_enable = 0;
	static ap_uint<1> state_0_match_17_2_enable = 0;
	static ap_uint<1> state_0_mismatch_15_1_enable = 0;
	static ap_uint<1> state_0_mismatch_8_2_enable = 0;
	static ap_uint<1> state_0_mismatch_9_2_enable = 0;
	static ap_uint<1> state_0_mismatch_16_1_enable = 0;
	static ap_uint<1> state_0_match_8_1_enable = 0;
	static ap_uint<1> state_0_match_3_0_enable = 0;
	static ap_uint<1> state_0_match_13_0_enable = 0;
	static ap_uint<1> state_0_match_10_0_enable = 0;
	static ap_uint<1> state_0_mismatch_8_3_enable = 0;
	static ap_uint<1> state_0_mismatch_7_2_enable = 0;
	static ap_uint<1> state_0_match_7_2_enable = 0;
	static ap_uint<1> state_0_mismatch_3_1_enable = 0;
	static ap_uint<1> state_0_mismatch_6_2_enable = 0;
	static ap_uint<1> state_0_match_6_2_enable = 0;
	static ap_uint<1> state_0_mismatch_15_3_enable = 0;
	static ap_uint<1> state_0_match_10_3_enable = 0;
	static ap_uint<1> state_0_mismatch_16_2_enable = 0;
	static ap_uint<1> state_0_mismatch_8_4_enable = 0;
	static ap_uint<1> state_0_match_12_1_enable = 0;
	static ap_uint<1> state_0_match_14_1_enable = 0;
	static ap_uint<1> state_0_mismatch_18_1_enable = 0;
	static ap_uint<1> state_0_mismatch_18_2_enable = 0;
	static ap_uint<1> state_0_match_9_4_enable = 0;
	static ap_uint<1> state_0_mismatch_6_3_enable = 0;
	static ap_uint<1> state_0_match_4_0_enable = 0;
	static ap_uint<1> state_0_mismatch_5_2_enable = 0;
	static ap_uint<1> state_0_match_4_1_enable = 0;
	static ap_uint<1> state_0_match_18_0_enable = 0;
	static ap_uint<1> state_0_mismatch_13_2_enable = 0;
	static ap_uint<1> state_0_mismatch_10_4_enable = 0;
	static ap_uint<1> state_0_mismatch_10_2_enable = 0;
	static ap_uint<1> state_0_mismatch_5_4_enable = 0;
	static ap_uint<1> state_0_mismatch_6_4_enable = 0;
	static ap_uint<1> state_0_match_10_1_enable = 0;
	static ap_uint<1> state_0_mismatch_4_3_enable = 0;
	static ap_uint<1> state_0_match_13_3_enable = 0;
	static ap_uint<1> state_0_mismatch_12_3_enable = 0;
	static ap_uint<1> state_0_mismatch_7_1_enable = 0;
	static ap_uint<1> state_0_mismatch_13_1_enable = 0;
	static ap_uint<1> state_0_mismatch_15_2_enable = 0;
	static ap_uint<1> state_0_match_21_4_enable = 0;
	static ap_uint<1> state_0_match_6_3_enable = 0;
	static ap_uint<1> state_0_mismatch_5_1_enable = 0;
	static ap_uint<1> state_0_match_5_0_enable = 0;
	static ap_uint<1> state_0_match_5_2_enable = 0;
	static ap_uint<1> state_0_match_10_2_enable = 0;
	static ap_uint<1> state_0_mismatch_7_4_enable = 0;
	static ap_uint<1> state_0_match_12_3_enable = 0;
	static ap_uint<1> state_0_match_12_0_enable = 0;
	static ap_uint<1> state_0_match_8_4_enable = 0;
	static ap_uint<1> state_0_match_8_2_enable = 0;
	static ap_uint<1> state_0_mismatch_13_3_enable = 0;
	static ap_uint<1> state_0_match_3_1_enable = 0;
	static ap_uint<1> state_0_match_21_2_enable = 0;
	static ap_uint<1> state_0_mismatch_2_1_enable = 0;
	static ap_uint<1> state_0_mismatch_13_4_enable = 0;
	static ap_uint<1> state_0_match_16_3_enable = 0;
	static ap_uint<1> state_0_match_7_4_enable = 0;
	static ap_uint<1> state_0_mismatch_14_4_enable = 0;
	static ap_uint<1> state_0_match_18_1_enable = 0;
	static ap_uint<1> state_0_match_17_4_enable = 0;
	static ap_uint<1> state_0_match_6_0_enable = 0;
	static ap_uint<1> state_0_mismatch_10_3_enable = 0;
	static ap_uint<1> state_0_mismatch_12_4_enable = 0;
	static ap_uint<1> state_0_mismatch_3_2_enable = 0;
	static ap_uint<1> state_0_match_6_1_enable = 0;
	static ap_uint<1> state_0_match_5_3_enable = 0;
	static ap_uint<1> state_0_mismatch_14_3_enable = 0;
	static ap_uint<1> state_0_match_7_0_enable = 0;
	static ap_uint<1> state_0_match_2_0_enable = 0;
	static ap_uint<1> state_0_match_17_0_enable = 0;
	static ap_uint<1> state_0_match_1_0_enable = 1;
	static ap_uint<1> state_0_match_9_3_enable = 0;
	static ap_uint<1> state_0_match_7_1_enable = 0;
	static ap_uint<1> state_0_mismatch_7_3_enable = 0;
	static ap_uint<1> state_0_match_15_3_enable = 0;
	static ap_uint<1> state_0_mismatch_9_3_enable = 0;
	static ap_uint<1> state_0_match_8_3_enable = 0;
	static ap_uint<1> state_0_match_4_2_enable = 0;
	static ap_uint<1> state_0_match_13_4_enable = 0;
	static ap_uint<1> state_0_mismatch_11_1_enable = 0;
	static ap_uint<1> state_0_mismatch_17_4_enable = 0;
	static ap_uint<1> state_0_match_9_0_enable = 0;
	static ap_uint<1> state_0_match_11_1_enable = 0;
	static ap_uint<1> state_0_match_16_4_enable = 0;
	static ap_uint<1> state_0_match_7_3_enable = 0;
	static ap_uint<1> state_0_match_20_3_enable = 0;
	static ap_uint<1> state_0_match_15_1_enable = 0;
	static ap_uint<1> state_0_match_8_0_enable = 0;
	static ap_uint<1> state_0_match_5_4_enable = 1;
	static ap_uint<1> state_0_match_17_1_enable = 0;
	static ap_uint<1> state_0_match_18_4_enable = 0;
	static ap_uint<1> state_0_match_5_1_enable = 0;
	static ap_uint<1> state_0_match_4_3_enable = 1;
	static ap_uint<1> state_0_mismatch_5_3_enable = 0;
	static ap_uint<1> state_0_mismatch_6_1_enable = 0;
	static ap_uint<1> state_0_match_12_4_enable = 0;
	static ap_uint<1> state_0_match_11_3_enable = 0;
	static ap_uint<1> state_0_mismatch_11_4_enable = 0;
	static ap_uint<1> state_0_mismatch_9_4_enable = 0;
	static ap_uint<1> state_0_match_6_4_enable = 0;
	static ap_uint<1> state_0_match_9_1_enable = 0;
	static ap_uint<1> state_0_match_2_1_enable = 1;
	static ap_uint<1> state_0_mismatch_8_1_enable = 0;
	static ap_uint<1> state_0_mismatch_11_3_enable = 0;
	static ap_uint<1> state_0_match_11_2_enable = 0;
	static ap_uint<1> state_0_mismatch_9_1_enable = 0;
	static ap_uint<1> state_0_mismatch_20_3_enable = 0;
	static ap_uint<1> state_0_match_14_4_enable = 0;
	static ap_uint<1> state_0_match_11_4_enable = 0;
	static ap_uint<1> state_0_mismatch_11_2_enable = 0;
	static ap_uint<1> state_0_match_14_2_enable = 0;
	static ap_uint<1> state_0_match_10_4_enable = 0;
	static ap_uint<1> state_0_match_3_2_enable = 1;
	static ap_uint<1> state_0_match_12_2_enable = 0;
	static ap_uint<1> state_0_mismatch_14_2_enable = 0;
	static ap_uint<1> state_0_mismatch_4_2_enable = 0;
	static ap_uint<1> state_0_mismatch_10_1_enable = 0;
	static ap_uint<1> state_0_mismatch_19_1_enable = 0;
	static ap_uint<1> state_0_mismatch_4_1_enable = 0;
	static ap_uint<1> state_0_match_15_4_enable = 0;
	static ap_uint<1> state_0_match_14_3_enable = 0;
	static ap_uint<1> state_0_mismatch_12_2_enable = 0;
	static ap_uint<1> state_0_match_13_2_enable = 0;
	static ap_uint<1> state_0_match_15_0_enable = 0;
	static ap_uint<1> state_0_match_11_0_enable = 0;
	static ap_uint<1> state_0_mismatch_12_1_enable = 0;
	static ap_uint<1> state_0_match_13_1_enable = 0;
	static ap_uint<1> state_0_match_15_2_enable = 0;
	static ap_uint<1> state_0_mismatch_16_4_enable = 0;
	static ap_uint<1> state_0_match_17_3_enable = 0;
	static ap_uint<1> state_0_mismatch_14_1_enable = 0;
	static ap_uint<1> state_0_match_9_2_enable = 0;
	static ap_uint<1> state_0_match_16_2_enable = 0;
	static ap_uint<1> state_0_mismatch_15_4_enable = 0;
	static ap_uint<1> state_0_match_14_0_enable = 0;
	static ap_uint<1> state_0_match_19_4_enable = 0;
	static ap_uint<1> state_0_mismatch_16_3_enable = 0;
	static ap_uint<1> state_0_match_18_3_enable = 0;
	static ap_uint<1> state_0_mismatch_21_4_enable = 0;
	static ap_uint<1> state_0_mismatch_18_4_enable = 0;
	static ap_uint<1> state_0_mismatch_17_3_enable = 0;
	 // State Logic
	ap_uint<1> ste_0_match_19_0 = (state_0_match_19_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_20_2 = (state_0_mismatch_20_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_22_4 = (state_0_mismatch_22_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_22_3 = (state_0_match_22_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_23_4 = (state_0_match_23_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_19_1 = (state_0_match_19_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_20_2 = (state_0_match_20_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_19_2 = (state_0_mismatch_19_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_21_3 = (state_0_match_21_3_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_22_4 = (state_0_match_22_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_21_3 = (state_0_mismatch_21_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_2 = (state_0_match_19_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_20_1 = (state_0_match_20_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_17_1 = (state_0_mismatch_17_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_19_3 = (state_0_mismatch_19_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_20_4 = (state_0_mismatch_20_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_0 = (state_0_match_16_0_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_17_2 = (state_0_mismatch_17_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_3 = (state_0_mismatch_18_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_19_4 = (state_0_mismatch_19_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_19_3 = (state_0_match_19_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_18_2 = (state_0_match_18_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_20_4 = (state_0_match_20_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_16_1 = (state_0_match_16_1_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_17_2 = (state_0_match_17_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_15_1 = (state_0_mismatch_15_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_2 = (state_0_mismatch_8_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_9_2 = (state_0_mismatch_9_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_16_1 = (state_0_mismatch_16_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_1 = (state_0_match_8_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_3_0 = (state_0_match_3_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_0 = (state_0_match_13_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_10_0 = (state_0_match_10_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_8_3 = (state_0_mismatch_8_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_2 = (state_0_mismatch_7_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_2 = (state_0_match_7_2_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_3_1 = (state_0_mismatch_3_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_6_2 = (state_0_mismatch_6_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_2 = (state_0_match_6_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_15_3 = (state_0_mismatch_15_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_3 = (state_0_match_10_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_16_2 = (state_0_mismatch_16_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_8_4 = (state_0_mismatch_8_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_1 = (state_0_match_12_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_14_1 = (state_0_match_14_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_18_1 = (state_0_mismatch_18_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_2 = (state_0_mismatch_18_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_4 = (state_0_match_9_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_6_3 = (state_0_mismatch_6_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_4_0 = (state_0_match_4_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_5_2 = (state_0_mismatch_5_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_4_1 = (state_0_match_4_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_18_0 = (state_0_match_18_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_13_2 = (state_0_mismatch_13_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_4 = (state_0_mismatch_10_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_2 = (state_0_mismatch_10_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_5_4 = (state_0_mismatch_5_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_6_4 = (state_0_mismatch_6_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_10_1 = (state_0_match_10_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_4_3 = (state_0_mismatch_4_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_3 = (state_0_match_13_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_3 = (state_0_mismatch_12_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_7_1 = (state_0_mismatch_7_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_13_1 = (state_0_mismatch_13_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_15_2 = (state_0_mismatch_15_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_21_4 = (state_0_match_21_4_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_match_6_3 = (state_0_match_6_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_5_1 = (state_0_mismatch_5_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_5_0 = (state_0_match_5_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_5_2 = (state_0_match_5_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_10_2 = (state_0_match_10_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_7_4 = (state_0_mismatch_7_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_3 = (state_0_match_12_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_0 = (state_0_match_12_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_8_4 = (state_0_match_8_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_8_2 = (state_0_match_8_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_13_3 = (state_0_mismatch_13_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_3_1 = (state_0_match_3_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_21_2 = (state_0_match_21_2_enable) &&
		((input_r == 65)|| (input_r == 67)|| (input_r == 71)|| (input_r == 84));

	ap_uint<1> ste_0_mismatch_2_1 = (state_0_mismatch_2_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_13_4 = (state_0_mismatch_13_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_16_3 = (state_0_match_16_3_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_7_4 = (state_0_match_7_4_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_14_4 = (state_0_mismatch_14_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_18_1 = (state_0_match_18_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_17_4 = (state_0_match_17_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_6_0 = (state_0_match_6_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_10_3 = (state_0_mismatch_10_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_12_4 = (state_0_mismatch_12_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_3_2 = (state_0_mismatch_3_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_1 = (state_0_match_6_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_5_3 = (state_0_match_5_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_14_3 = (state_0_mismatch_14_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_7_0 = (state_0_match_7_0_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_2_0 = (state_0_match_2_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_17_0 = (state_0_match_17_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_1_0 = (state_0_match_1_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_9_3 = (state_0_match_9_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_7_1 = (state_0_match_7_1_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_7_3 = (state_0_mismatch_7_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_3 = (state_0_match_15_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_9_3 = (state_0_mismatch_9_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_8_3 = (state_0_match_8_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_4_2 = (state_0_match_4_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_13_4 = (state_0_match_13_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_11_1 = (state_0_mismatch_11_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_17_4 = (state_0_mismatch_17_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_0 = (state_0_match_9_0_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_11_1 = (state_0_match_11_1_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_16_4 = (state_0_match_16_4_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_7_3 = (state_0_match_7_3_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_match_20_3 = (state_0_match_20_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_15_1 = (state_0_match_15_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_8_0 = (state_0_match_8_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_5_4 = (state_0_match_5_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_17_1 = (state_0_match_17_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_18_4 = (state_0_match_18_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_5_1 = (state_0_match_5_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_4_3 = (state_0_match_4_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_5_3 = (state_0_mismatch_5_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_6_1 = (state_0_mismatch_6_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_12_4 = (state_0_match_12_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_3 = (state_0_match_11_3_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_11_4 = (state_0_mismatch_11_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_9_4 = (state_0_mismatch_9_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_6_4 = (state_0_match_6_4_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_9_1 = (state_0_match_9_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_2_1 = (state_0_match_2_1_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_8_1 = (state_0_mismatch_8_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_11_3 = (state_0_mismatch_11_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_11_2 = (state_0_match_11_2_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_9_1 = (state_0_mismatch_9_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_20_3 = (state_0_mismatch_20_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_4 = (state_0_match_14_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_4 = (state_0_match_11_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_11_2 = (state_0_mismatch_11_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_2 = (state_0_match_14_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_10_4 = (state_0_match_10_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_match_3_2 = (state_0_match_3_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_12_2 = (state_0_match_12_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_14_2 = (state_0_mismatch_14_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_4_2 = (state_0_mismatch_4_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_10_1 = (state_0_mismatch_10_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_19_1 = (state_0_mismatch_19_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_4_1 = (state_0_mismatch_4_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_15_4 = (state_0_match_15_4_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_14_3 = (state_0_match_14_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_12_2 = (state_0_mismatch_12_2_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_2 = (state_0_match_13_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_15_0 = (state_0_match_15_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_11_0 = (state_0_match_11_0_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_12_1 = (state_0_mismatch_12_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_13_1 = (state_0_match_13_1_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_15_2 = (state_0_match_15_2_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_16_4 = (state_0_mismatch_16_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_17_3 = (state_0_match_17_3_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_mismatch_14_1 = (state_0_mismatch_14_1_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_9_2 = (state_0_match_9_2_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_match_16_2 = (state_0_match_16_2_enable) &&
		((input_r == 65));

	ap_uint<1> ste_0_mismatch_15_4 = (state_0_mismatch_15_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_14_0 = (state_0_match_14_0_enable) &&
		((input_r == 67));

	ap_uint<1> ste_0_match_19_4 = (state_0_match_19_4_enable) &&
		((input_r == 71));

	ap_uint<1> ste_0_mismatch_16_3 = (state_0_mismatch_16_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_match_18_3 = (state_0_match_18_3_enable) &&
		((input_r == 84));

	ap_uint<1> ste_0_mismatch_21_4 = (state_0_mismatch_21_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_18_4 = (state_0_mismatch_18_4_enable) &&
		((input_r >= 0  && input_r <= 255));

	ap_uint<1> ste_0_mismatch_17_3 = (state_0_mismatch_17_3_enable) &&
		((input_r >= 0  && input_r <= 255));

	// Edges
	input_r = input;
	state_0_match_19_0_enable = (ste_0_match_18_0);
	state_0_mismatch_20_2_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_mismatch_19_1);
	state_0_mismatch_22_4_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_match_20_2 || ste_0_match_21_3 || ste_0_mismatch_19_1 || ste_0_mismatch_20_2 || ste_0_mismatch_21_3);
	state_0_match_22_3_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_match_20_2 || ste_0_match_21_3 || ste_0_mismatch_19_1 || ste_0_mismatch_20_2 || ste_0_mismatch_21_3);
	state_0_match_23_4_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_match_20_2 || ste_0_match_21_3 || ste_0_match_22_4 || ste_0_mismatch_19_1 || ste_0_mismatch_20_2 || ste_0_mismatch_21_3 || ste_0_mismatch_22_4);
	state_0_match_19_1_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_mismatch_18_1);
	state_0_match_20_2_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_2 || ste_0_mismatch_18_1 || ste_0_mismatch_19_2);
	state_0_mismatch_19_2_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_1 || ste_0_mismatch_18_1 || ste_0_mismatch_19_1);
	state_0_match_21_3_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_2 || ste_0_match_20_3 || ste_0_mismatch_18_1 || ste_0_mismatch_19_2 || ste_0_mismatch_20_3);
	state_0_match_22_4_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_2 || ste_0_match_20_3 || ste_0_match_21_4 || ste_0_mismatch_18_1 || ste_0_mismatch_19_2 || ste_0_mismatch_20_3 || ste_0_mismatch_21_4);
	state_0_mismatch_21_3_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_match_20_2 || ste_0_mismatch_19_1 || ste_0_mismatch_20_2);
	state_0_match_19_2_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_2 || ste_0_mismatch_17_1 || ste_0_mismatch_18_2);
	state_0_match_20_1_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_mismatch_19_1);
	state_0_mismatch_17_1_enable = (ste_0_match_16_0 || ste_0_match_17_0);
	state_0_mismatch_19_3_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_2 || ste_0_match_19_2 || ste_0_mismatch_17_1 || ste_0_mismatch_18_2 || ste_0_mismatch_19_2);
	state_0_mismatch_20_4_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_2 || ste_0_match_19_3 || ste_0_match_20_3 || ste_0_mismatch_17_1 || ste_0_mismatch_18_2 || ste_0_mismatch_19_3 || ste_0_mismatch_20_3);
	state_0_match_16_0_enable = (ste_0_match_15_0);
	state_0_mismatch_17_2_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_1 || ste_0_mismatch_16_1 || ste_0_mismatch_17_1);
	state_0_mismatch_18_3_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_2 || ste_0_match_18_2 || ste_0_mismatch_16_1 || ste_0_mismatch_17_2 || ste_0_mismatch_18_2);
	state_0_mismatch_19_4_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_2 || ste_0_match_18_3 || ste_0_match_19_3 || ste_0_mismatch_16_1 || ste_0_mismatch_17_2 || ste_0_mismatch_18_3 || ste_0_mismatch_19_3);
	state_0_match_19_3_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_2 || ste_0_match_18_3 || ste_0_mismatch_16_1 || ste_0_mismatch_17_2 || ste_0_mismatch_18_3);
	state_0_match_18_2_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_2 || ste_0_mismatch_16_1 || ste_0_mismatch_17_2);
	state_0_match_20_4_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_match_17_2 || ste_0_match_18_3 || ste_0_match_19_4 || ste_0_mismatch_16_1 || ste_0_mismatch_17_2 || ste_0_mismatch_18_3 || ste_0_mismatch_19_4);
	state_0_match_16_1_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_mismatch_15_1);
	state_0_match_17_2_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_2 || ste_0_mismatch_15_1 || ste_0_mismatch_16_2);
	state_0_mismatch_15_1_enable = (ste_0_match_14_0 || ste_0_match_15_0);
	state_0_mismatch_8_2_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_1 || ste_0_mismatch_7_1 || ste_0_mismatch_8_1);
	state_0_mismatch_9_2_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_1 || ste_0_mismatch_8_1 || ste_0_mismatch_9_1);
	state_0_mismatch_16_1_enable = (ste_0_match_15_0 || ste_0_match_16_0);
	state_0_match_8_1_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_mismatch_7_1);
	state_0_match_3_0_enable = (ste_0_match_2_0);
	state_0_match_13_0_enable = (ste_0_match_12_0);
	state_0_match_10_0_enable = (ste_0_match_9_0);
	state_0_mismatch_8_3_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_2 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_2);
	state_0_mismatch_7_2_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_1 || ste_0_mismatch_6_1 || ste_0_mismatch_7_1);
	state_0_match_7_2_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2);
	state_0_mismatch_3_1_enable = (ste_0_match_2_0 || ste_0_match_3_0);
	state_0_mismatch_6_2_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_1 || ste_0_mismatch_5_1 || ste_0_mismatch_6_1);
	state_0_match_6_2_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2);
	state_0_mismatch_15_3_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_2 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_2);
	state_0_match_10_3_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_16_2_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_1 || ste_0_mismatch_15_1 || ste_0_mismatch_16_1);
	state_0_mismatch_8_4_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_3 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_3);
	state_0_match_12_1_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_mismatch_11_1);
	state_0_match_14_1_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_mismatch_13_1);
	state_0_mismatch_18_1_enable = (ste_0_match_17_0 || ste_0_match_18_0);
	state_0_mismatch_18_2_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_1 || ste_0_mismatch_17_1 || ste_0_mismatch_18_1);
	state_0_match_9_4_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_match_8_4 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3 || ste_0_mismatch_8_4);
	state_0_mismatch_6_3_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_2 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_2);
	state_0_match_4_0_enable = (ste_0_match_3_0);
	state_0_mismatch_5_2_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_1 || ste_0_mismatch_4_1 || ste_0_mismatch_5_1);
	state_0_match_4_1_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_mismatch_3_1);
	state_0_match_18_0_enable = (ste_0_match_17_0);
	state_0_mismatch_13_2_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_1 || ste_0_mismatch_12_1 || ste_0_mismatch_13_1);
	state_0_mismatch_10_4_enable = (ste_0_match_10_3 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_3 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_10_2_enable = (ste_0_match_10_1 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_1 || ste_0_mismatch_9_1);
	state_0_mismatch_5_4_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_3 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_3);
	state_0_mismatch_6_4_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_3 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_3);
	state_0_match_10_1_enable = (ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_9_1);
	state_0_mismatch_4_3_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_2 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_2);
	state_0_match_13_3_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3);
	state_0_mismatch_12_3_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_2 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_2);
	state_0_mismatch_7_1_enable = (ste_0_match_6_0 || ste_0_match_7_0);
	state_0_mismatch_13_1_enable = (ste_0_match_12_0 || ste_0_match_13_0);
	state_0_mismatch_15_2_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_1 || ste_0_mismatch_14_1 || ste_0_mismatch_15_1);
	state_0_match_21_4_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_2 || ste_0_match_19_3 || ste_0_match_20_4 || ste_0_mismatch_17_1 || ste_0_mismatch_18_2 || ste_0_mismatch_19_3 || ste_0_mismatch_20_4);
	state_0_match_6_3_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3);
	state_0_mismatch_5_1_enable = (ste_0_match_4_0 || ste_0_match_5_0);
	state_0_match_5_0_enable = (ste_0_match_4_0);
	state_0_match_5_2_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2);
	state_0_match_10_2_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_7_4_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_3 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_3);
	state_0_match_12_3_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_9_1);
	state_0_match_12_0_enable = (ste_0_match_11_0);
	state_0_match_8_4_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_match_7_4 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3 || ste_0_mismatch_7_4);
	state_0_match_8_2_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2);
	state_0_mismatch_13_3_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_2 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_2);
	state_0_match_3_1_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_mismatch_2_1);
	state_0_match_21_2_enable = (ste_0_match_18_0 || ste_0_match_19_1 || ste_0_match_20_2 || ste_0_mismatch_19_1 || ste_0_mismatch_20_2);
	state_0_mismatch_2_1_enable = (ste_0_match_1_0 || ste_0_match_2_0);
	state_0_mismatch_13_4_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_3 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_3);
	state_0_match_16_3_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3);
	state_0_match_7_4_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_3 || ste_0_match_6_4 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_3 || ste_0_mismatch_6_4);
	state_0_mismatch_14_4_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_3 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_3);
	state_0_match_18_1_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_mismatch_17_1);
	state_0_match_17_4_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_4 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_4);
	state_0_match_6_0_enable = (ste_0_match_5_0);
	state_0_mismatch_10_3_enable = (ste_0_match_10_2 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_2 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_12_4_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_3 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_3 || ste_0_mismatch_9_1);
	state_0_mismatch_3_2_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_1 || ste_0_mismatch_2_1 || ste_0_mismatch_3_1);
	state_0_match_6_1_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_mismatch_5_1);
	state_0_match_5_3_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3);
	state_0_mismatch_14_3_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_2 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_2);
	state_0_match_7_0_enable = (ste_0_match_6_0);
	state_0_match_2_0_enable = (ste_0_match_1_0);
	state_0_match_17_0_enable = (ste_0_match_16_0);
	state_0_match_1_0_enable = start_state;
	state_0_match_9_3_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3);
	state_0_match_7_1_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_mismatch_6_1);
	state_0_mismatch_7_3_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_2 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_2);
	state_0_match_15_3_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3);
	state_0_mismatch_9_3_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_2 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_2);
	state_0_match_8_3_enable = (ste_0_match_4_0 || ste_0_match_5_1 || ste_0_match_6_2 || ste_0_match_7_3 || ste_0_mismatch_5_1 || ste_0_mismatch_6_2 || ste_0_mismatch_7_3);
	state_0_match_4_2_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2);
	state_0_match_13_4_enable = (ste_0_match_10_2 || ste_0_match_11_3 || ste_0_match_12_4 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_3 || ste_0_mismatch_12_4 || ste_0_mismatch_9_1);
	state_0_mismatch_11_1_enable = (ste_0_match_10_0 || ste_0_match_11_0);
	state_0_mismatch_17_4_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_2 || ste_0_match_16_3 || ste_0_match_17_3 || ste_0_mismatch_14_1 || ste_0_mismatch_15_2 || ste_0_mismatch_16_3 || ste_0_mismatch_17_3);
	state_0_match_9_0_enable = (ste_0_match_8_0);
	state_0_match_11_1_enable = (ste_0_match_10_1 || ste_0_match_9_0 || ste_0_mismatch_10_1);
	state_0_match_16_4_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_4 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_4);
	state_0_match_7_3_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_match_5_2 || ste_0_match_6_3 || ste_0_mismatch_4_1 || ste_0_mismatch_5_2 || ste_0_mismatch_6_3);
	state_0_match_20_3_enable = (ste_0_match_16_0 || ste_0_match_17_1 || ste_0_match_18_2 || ste_0_match_19_3 || ste_0_mismatch_17_1 || ste_0_mismatch_18_2 || ste_0_mismatch_19_3);
	state_0_match_15_1_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_mismatch_14_1);
	state_0_match_8_0_enable = (ste_0_match_7_0);
	state_0_match_5_4_enable = start_state;
	state_0_match_17_1_enable = (ste_0_match_15_0 || ste_0_match_16_1 || ste_0_mismatch_16_1);
	state_0_match_18_4_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_2 || ste_0_match_16_3 || ste_0_match_17_4 || ste_0_mismatch_14_1 || ste_0_mismatch_15_2 || ste_0_mismatch_16_3 || ste_0_mismatch_17_4);
	state_0_match_5_1_enable = (ste_0_match_3_0 || ste_0_match_4_1 || ste_0_mismatch_4_1);
	state_0_match_4_3_enable = start_state;
	state_0_mismatch_5_3_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_2 || ste_0_match_5_2 || ste_0_mismatch_3_1 || ste_0_mismatch_4_2 || ste_0_mismatch_5_2);
	state_0_mismatch_6_1_enable = (ste_0_match_5_0 || ste_0_match_6_0);
	state_0_match_12_4_enable = (ste_0_match_10_3 || ste_0_match_11_4 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_4 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_match_11_3_enable = (ste_0_match_10_3 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_11_4_enable = (ste_0_match_10_3 || ste_0_match_11_3 || ste_0_match_7_0 || ste_0_match_8_1 || ste_0_match_9_2 || ste_0_mismatch_10_3 || ste_0_mismatch_11_3 || ste_0_mismatch_8_1 || ste_0_mismatch_9_2);
	state_0_mismatch_9_4_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_3 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_3);
	state_0_match_6_4_enable = (ste_0_match_1_0 || ste_0_match_2_1 || ste_0_match_3_2 || ste_0_match_4_3 || ste_0_match_5_4 || ste_0_mismatch_2_1 || ste_0_mismatch_3_2 || ste_0_mismatch_4_3 || ste_0_mismatch_5_4);
	state_0_match_9_1_enable = (ste_0_match_7_0 || ste_0_match_8_1 || ste_0_mismatch_8_1);
	state_0_match_2_1_enable = start_state;
	state_0_mismatch_8_1_enable = (ste_0_match_7_0 || ste_0_match_8_0);
	state_0_mismatch_11_3_enable = (ste_0_match_10_2 || ste_0_match_11_2 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_11_2 || ste_0_mismatch_9_1);
	state_0_match_11_2_enable = (ste_0_match_10_2 || ste_0_match_8_0 || ste_0_match_9_1 || ste_0_mismatch_10_2 || ste_0_mismatch_9_1);
	state_0_mismatch_9_1_enable = (ste_0_match_8_0 || ste_0_match_9_0);
	state_0_mismatch_20_3_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_2 || ste_0_match_20_2 || ste_0_mismatch_18_1 || ste_0_mismatch_19_2 || ste_0_mismatch_20_2);
	state_0_match_14_4_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_12_3 || ste_0_match_13_4 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2 || ste_0_mismatch_12_3 || ste_0_mismatch_13_4);
	state_0_match_11_4_enable = (ste_0_match_10_4 || ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_match_9_3 || ste_0_mismatch_10_4 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2 || ste_0_mismatch_9_3);
	state_0_mismatch_11_2_enable = (ste_0_match_10_1 || ste_0_match_11_1 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_1);
	state_0_match_14_2_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2);
	state_0_match_10_4_enable = (ste_0_match_5_0 || ste_0_match_6_1 || ste_0_match_7_2 || ste_0_match_8_3 || ste_0_match_9_4 || ste_0_mismatch_6_1 || ste_0_mismatch_7_2 || ste_0_mismatch_8_3 || ste_0_mismatch_9_4);
	state_0_match_3_2_enable = start_state;
	state_0_match_12_2_enable = (ste_0_match_10_1 || ste_0_match_11_2 || ste_0_match_9_0 || ste_0_mismatch_10_1 || ste_0_mismatch_11_2);
	state_0_mismatch_14_2_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_1 || ste_0_mismatch_13_1 || ste_0_mismatch_14_1);
	state_0_mismatch_4_2_enable = (ste_0_match_2_0 || ste_0_match_3_1 || ste_0_match_4_1 || ste_0_mismatch_3_1 || ste_0_mismatch_4_1);
	state_0_mismatch_10_1_enable = (ste_0_match_10_0 || ste_0_match_9_0);
	state_0_mismatch_19_1_enable = (ste_0_match_18_0);
	state_0_mismatch_4_1_enable = (ste_0_match_3_0 || ste_0_match_4_0);
	state_0_match_15_4_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_match_14_4 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3 || ste_0_mismatch_14_4);
	state_0_match_14_3_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_match_13_3 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2 || ste_0_mismatch_13_3);
	state_0_mismatch_12_2_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_1 || ste_0_mismatch_11_1 || ste_0_mismatch_12_1);
	state_0_match_13_2_enable = (ste_0_match_10_0 || ste_0_match_11_1 || ste_0_match_12_2 || ste_0_mismatch_11_1 || ste_0_mismatch_12_2);
	state_0_match_15_0_enable = (ste_0_match_14_0);
	state_0_match_11_0_enable = (ste_0_match_10_0);
	state_0_mismatch_12_1_enable = (ste_0_match_11_0 || ste_0_match_12_0);
	state_0_match_13_1_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_mismatch_12_1);
	state_0_match_15_2_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2);
	state_0_mismatch_16_4_enable = (ste_0_match_12_0 || ste_0_match_13_1 || ste_0_match_14_2 || ste_0_match_15_3 || ste_0_match_16_3 || ste_0_mismatch_13_1 || ste_0_mismatch_14_2 || ste_0_mismatch_15_3 || ste_0_mismatch_16_3);
	state_0_match_17_3_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_2 || ste_0_match_16_3 || ste_0_mismatch_14_1 || ste_0_mismatch_15_2 || ste_0_mismatch_16_3);
	state_0_mismatch_14_1_enable = (ste_0_match_13_0 || ste_0_match_14_0);
	state_0_match_9_2_enable = (ste_0_match_6_0 || ste_0_match_7_1 || ste_0_match_8_2 || ste_0_mismatch_7_1 || ste_0_mismatch_8_2);
	state_0_match_16_2_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_2 || ste_0_mismatch_14_1 || ste_0_mismatch_15_2);
	state_0_mismatch_15_4_enable = (ste_0_match_11_0 || ste_0_match_12_1 || ste_0_match_13_2 || ste_0_match_14_3 || ste_0_match_15_3 || ste_0_mismatch_12_1 || ste_0_mismatch_13_2 || ste_0_mismatch_14_3 || ste_0_mismatch_15_3);
	state_0_match_14_0_enable = (ste_0_match_13_0);
	state_0_match_19_4_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_2 || ste_0_match_17_3 || ste_0_match_18_4 || ste_0_mismatch_15_1 || ste_0_mismatch_16_2 || ste_0_mismatch_17_3 || ste_0_mismatch_18_4);
	state_0_mismatch_16_3_enable = (ste_0_match_13_0 || ste_0_match_14_1 || ste_0_match_15_2 || ste_0_match_16_2 || ste_0_mismatch_14_1 || ste_0_mismatch_15_2 || ste_0_mismatch_16_2);
	state_0_match_18_3_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_2 || ste_0_match_17_3 || ste_0_mismatch_15_1 || ste_0_mismatch_16_2 || ste_0_mismatch_17_3);
	state_0_mismatch_21_4_enable = (ste_0_match_17_0 || ste_0_match_18_1 || ste_0_match_19_2 || ste_0_match_20_3 || ste_0_match_21_3 || ste_0_mismatch_18_1 || ste_0_mismatch_19_2 || ste_0_mismatch_20_3 || ste_0_mismatch_21_3);
	state_0_mismatch_18_4_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_2 || ste_0_match_17_3 || ste_0_match_18_3 || ste_0_mismatch_15_1 || ste_0_mismatch_16_2 || ste_0_mismatch_17_3 || ste_0_mismatch_18_3);
	state_0_mismatch_17_3_enable = (ste_0_match_14_0 || ste_0_match_15_1 || ste_0_match_16_2 || ste_0_match_17_2 || ste_0_mismatch_15_1 || ste_0_mismatch_16_2 || ste_0_mismatch_17_2);
	return (ste_0_match_19_0 || ste_0_match_22_3 || ste_0_match_23_4 || ste_0_match_20_1 || ste_0_match_21_2);
}

