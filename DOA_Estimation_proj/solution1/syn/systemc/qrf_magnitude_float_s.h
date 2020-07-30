// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _qrf_magnitude_float_s_HH_
#define _qrf_magnitude_float_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "music_fadd_32ns_3ocq.h"
#include "music_fmul_32ns_3jbC.h"
#include "music_fdiv_32ns_3ncg.h"
#include "music_fcmp_32ns_3pcA.h"
#include "music_fsqrt_32ns_qcK.h"

namespace ap_rtl {

struct qrf_magnitude_float_s : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<32> > a_M_real;
    sc_in< sc_lv<32> > a_M_imag;
    sc_in< sc_lv<32> > b_M_real;
    sc_in< sc_lv<32> > b_M_imag;
    sc_out< sc_lv<32> > ap_return;
    sc_in< sc_logic > ap_ce;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;
    sc_signal< sc_lv<5> > ap_var_for_const3;


    // Module declarations
    qrf_magnitude_float_s(sc_module_name name);
    SC_HAS_PROCESS(qrf_magnitude_float_s);

    ~qrf_magnitude_float_s();

    sc_trace_file* mVcdFile;

    music_fadd_32ns_3ocq<1,5,32,32,32>* music_fadd_32ns_3ocq_U52;
    music_fadd_32ns_3ocq<1,5,32,32,32>* music_fadd_32ns_3ocq_U53;
    music_fadd_32ns_3ocq<1,5,32,32,32>* music_fadd_32ns_3ocq_U54;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U55;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U56;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U57;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U58;
    music_fdiv_32ns_3ncg<1,16,32,32,32>* music_fdiv_32ns_3ncg_U59;
    music_fdiv_32ns_3ncg<1,16,32,32,32>* music_fdiv_32ns_3ncg_U60;
    music_fdiv_32ns_3ncg<1,16,32,32,32>* music_fdiv_32ns_3ncg_U61;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U62;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U63;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U64;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U65;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U66;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U67;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U68;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U69;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U70;
    music_fcmp_32ns_3pcA<1,2,32,32,1>* music_fcmp_32ns_3pcA_U71;
    music_fsqrt_32ns_qcK<1,12,32,32,32>* music_fsqrt_32ns_qcK_U72;
    sc_signal< sc_lv<32> > d1_4_fu_175_p1;
    sc_signal< sc_lv<32> > d1_4_reg_605;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter29;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter30;
    sc_signal< bool > ap_block_state32_pp0_stage0_iter31;
    sc_signal< bool > ap_block_state33_pp0_stage0_iter32;
    sc_signal< bool > ap_block_state34_pp0_stage0_iter33;
    sc_signal< bool > ap_block_state35_pp0_stage0_iter34;
    sc_signal< bool > ap_block_state36_pp0_stage0_iter35;
    sc_signal< bool > ap_block_state37_pp0_stage0_iter36;
    sc_signal< bool > ap_block_state38_pp0_stage0_iter37;
    sc_signal< bool > ap_block_state39_pp0_stage0_iter38;
    sc_signal< bool > ap_block_state40_pp0_stage0_iter39;
    sc_signal< bool > ap_block_state41_pp0_stage0_iter40;
    sc_signal< bool > ap_block_state42_pp0_stage0_iter41;
    sc_signal< bool > ap_block_state43_pp0_stage0_iter42;
    sc_signal< bool > ap_block_state44_pp0_stage0_iter43;
    sc_signal< bool > ap_block_state45_pp0_stage0_iter44;
    sc_signal< bool > ap_block_state46_pp0_stage0_iter45;
    sc_signal< bool > ap_block_state47_pp0_stage0_iter46;
    sc_signal< bool > ap_block_state48_pp0_stage0_iter47;
    sc_signal< bool > ap_block_state49_pp0_stage0_iter48;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > d1_4_reg_605_pp0_iter1_reg;
    sc_signal< sc_lv<32> > d2_4_fu_204_p1;
    sc_signal< sc_lv<32> > d2_4_reg_617;
    sc_signal< sc_lv<32> > d2_4_reg_617_pp0_iter1_reg;
    sc_signal< sc_lv<32> > largest_4_fu_233_p1;
    sc_signal< sc_lv<32> > largest_4_reg_629;
    sc_signal< sc_lv<32> > largest_4_reg_629_pp0_iter1_reg;
    sc_signal< sc_lv<32> > d3_fu_262_p1;
    sc_signal< sc_lv<32> > d3_reg_642;
    sc_signal< sc_lv<32> > d3_reg_642_pp0_iter1_reg;
    sc_signal< sc_lv<1> > or_ln179_fu_301_p2;
    sc_signal< sc_lv<1> > or_ln179_reg_653;
    sc_signal< sc_lv<1> > or_ln179_1_fu_319_p2;
    sc_signal< sc_lv<1> > or_ln179_1_reg_660;
    sc_signal< sc_lv<1> > or_ln179_2_fu_347_p2;
    sc_signal< sc_lv<1> > or_ln179_2_reg_667;
    sc_signal< sc_lv<1> > or_ln179_3_fu_375_p2;
    sc_signal< sc_lv<1> > or_ln179_3_reg_674;
    sc_signal< sc_lv<1> > and_ln179_1_fu_417_p2;
    sc_signal< sc_lv<1> > and_ln179_1_reg_681;
    sc_signal< sc_lv<1> > and_ln189_1_fu_477_p2;
    sc_signal< sc_lv<1> > and_ln189_1_reg_689;
    sc_signal< sc_lv<1> > and_ln184_7_fu_501_p2;
    sc_signal< sc_lv<1> > and_ln184_7_reg_695;
    sc_signal< sc_lv<32> > d1_3_fu_522_p3;
    sc_signal< sc_lv<32> > d1_3_reg_703;
    sc_signal< sc_lv<32> > d2_3_fu_533_p3;
    sc_signal< sc_lv<32> > d2_3_reg_708;
    sc_signal< sc_lv<32> > d3_3_fu_545_p3;
    sc_signal< sc_lv<32> > d3_3_reg_713;
    sc_signal< sc_lv<32> > largest_3_fu_557_p3;
    sc_signal< sc_lv<32> > largest_3_reg_718;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter3_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter4_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter5_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter6_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter7_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter8_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter9_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter10_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter11_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter12_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter13_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter14_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter15_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter16_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter17_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter18_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter19_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter20_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter21_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter22_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter23_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter24_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter25_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter26_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter27_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter28_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter29_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter30_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter31_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter32_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter33_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter34_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter35_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter36_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter37_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter38_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter39_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter40_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter41_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter42_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter43_reg;
    sc_signal< sc_lv<32> > largest_3_reg_718_pp0_iter44_reg;
    sc_signal< sc_lv<1> > and_ln201_fu_599_p2;
    sc_signal< sc_lv<1> > and_ln201_reg_728;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter4_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter5_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter6_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter7_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter8_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter9_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter10_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter11_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter12_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter13_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter14_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter15_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter16_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter17_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter18_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter19_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter20_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter21_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter22_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter23_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter24_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter25_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter26_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter27_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter28_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter29_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter30_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter31_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter32_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter33_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter34_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter35_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter36_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter37_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter38_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter39_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter40_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter41_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter42_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter43_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter44_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter45_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter46_reg;
    sc_signal< sc_lv<1> > and_ln201_reg_728_pp0_iter47_reg;
    sc_signal< sc_lv<32> > grp_fu_97_p2;
    sc_signal< sc_lv<32> > x1_reg_732;
    sc_signal< sc_lv<32> > grp_fu_101_p2;
    sc_signal< sc_lv<32> > x2_reg_738;
    sc_signal< sc_lv<32> > grp_fu_105_p2;
    sc_signal< sc_lv<32> > x3_reg_744;
    sc_signal< sc_lv<32> > grp_fu_80_p2;
    sc_signal< sc_lv<32> > x1_sqd_reg_750;
    sc_signal< sc_lv<32> > grp_fu_84_p2;
    sc_signal< sc_lv<32> > x2_sqd_reg_755;
    sc_signal< sc_lv<32> > grp_fu_88_p2;
    sc_signal< sc_lv<32> > x3_sqd_reg_760;
    sc_signal< sc_lv<32> > grp_fu_67_p2;
    sc_signal< sc_lv<32> > s1_reg_765;
    sc_signal< sc_lv<32> > grp_fu_72_p2;
    sc_signal< sc_lv<32> > s2_reg_770;
    sc_signal< sc_lv<32> > grp_fu_76_p2;
    sc_signal< sc_lv<32> > s3_reg_775;
    sc_signal< sc_lv<32> > grp_fu_150_p2;
    sc_signal< sc_lv<32> > tmp_i_i_reg_780;
    sc_signal< sc_lv<32> > ap_phi_mux_p_0_phi_fu_60_p4;
    sc_signal< sc_lv<32> > grp_fu_92_p2;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter48_p_0_reg_56;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter0_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter1_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter3_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter4_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter5_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter6_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter7_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter8_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter9_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter10_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter11_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter12_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter13_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter15_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter16_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter17_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter18_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter19_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter20_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter21_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter22_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter23_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter24_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter25_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter26_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter27_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter28_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter29_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter30_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter31_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter32_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter33_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter34_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter35_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter36_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter37_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter38_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter39_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter40_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter41_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter42_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter43_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter44_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter45_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter46_p_0_reg_56;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter47_p_0_reg_56;
    sc_signal< sc_lv<32> > grp_fu_145_p0;
    sc_signal< sc_lv<32> > p_Val2_s_fu_155_p1;
    sc_signal< sc_lv<31> > trunc_ln368_fu_159_p1;
    sc_signal< sc_lv<32> > p_Result_s_fu_167_p3;
    sc_signal< sc_lv<32> > p_Val2_64_fu_184_p1;
    sc_signal< sc_lv<31> > trunc_ln368_1_fu_188_p1;
    sc_signal< sc_lv<32> > p_Result_48_fu_196_p3;
    sc_signal< sc_lv<32> > p_Val2_65_fu_213_p1;
    sc_signal< sc_lv<31> > trunc_ln368_2_fu_217_p1;
    sc_signal< sc_lv<32> > p_Result_49_fu_225_p3;
    sc_signal< sc_lv<32> > p_Val2_66_fu_242_p1;
    sc_signal< sc_lv<31> > trunc_ln368_3_fu_246_p1;
    sc_signal< sc_lv<32> > p_Result_50_fu_254_p3;
    sc_signal< sc_lv<8> > tmp_1_fu_269_p4;
    sc_signal< sc_lv<23> > trunc_ln189_fu_163_p1;
    sc_signal< sc_lv<1> > icmp_ln179_1_fu_295_p2;
    sc_signal< sc_lv<1> > icmp_ln179_fu_289_p2;
    sc_signal< sc_lv<8> > tmp_2_fu_279_p4;
    sc_signal< sc_lv<23> > trunc_ln189_1_fu_192_p1;
    sc_signal< sc_lv<1> > icmp_ln179_3_fu_313_p2;
    sc_signal< sc_lv<1> > icmp_ln179_2_fu_307_p2;
    sc_signal< sc_lv<8> > tmp_4_fu_325_p4;
    sc_signal< sc_lv<23> > trunc_ln189_2_fu_221_p1;
    sc_signal< sc_lv<1> > icmp_ln179_5_fu_341_p2;
    sc_signal< sc_lv<1> > icmp_ln179_4_fu_335_p2;
    sc_signal< sc_lv<8> > tmp_6_fu_353_p4;
    sc_signal< sc_lv<23> > trunc_ln189_3_fu_250_p1;
    sc_signal< sc_lv<1> > icmp_ln179_7_fu_369_p2;
    sc_signal< sc_lv<1> > icmp_ln179_6_fu_363_p2;
    sc_signal< sc_lv<1> > and_ln179_fu_381_p2;
    sc_signal< sc_lv<1> > grp_fu_109_p2;
    sc_signal< sc_lv<1> > and_ln179_3_fu_391_p2;
    sc_signal< sc_lv<1> > grp_fu_113_p2;
    sc_signal< sc_lv<1> > and_ln179_5_fu_401_p2;
    sc_signal< sc_lv<1> > grp_fu_117_p2;
    sc_signal< sc_lv<1> > and_ln179_4_fu_395_p2;
    sc_signal< sc_lv<1> > and_ln179_6_fu_405_p2;
    sc_signal< sc_lv<1> > and_ln179_7_fu_411_p2;
    sc_signal< sc_lv<1> > and_ln179_2_fu_385_p2;
    sc_signal< sc_lv<1> > grp_fu_121_p2;
    sc_signal< sc_lv<1> > and_ln184_1_fu_429_p2;
    sc_signal< sc_lv<1> > grp_fu_125_p2;
    sc_signal< sc_lv<1> > and_ln184_3_fu_439_p2;
    sc_signal< sc_lv<1> > grp_fu_129_p2;
    sc_signal< sc_lv<1> > grp_fu_133_p2;
    sc_signal< sc_lv<1> > grp_fu_137_p2;
    sc_signal< sc_lv<1> > and_ln189_3_fu_461_p2;
    sc_signal< sc_lv<1> > grp_fu_141_p2;
    sc_signal< sc_lv<1> > and_ln189_2_fu_455_p2;
    sc_signal< sc_lv<1> > and_ln189_4_fu_465_p2;
    sc_signal< sc_lv<1> > and_ln189_5_fu_471_p2;
    sc_signal< sc_lv<1> > and_ln189_fu_449_p2;
    sc_signal< sc_lv<1> > and_ln184_2_fu_433_p2;
    sc_signal< sc_lv<1> > and_ln184_4_fu_443_p2;
    sc_signal< sc_lv<1> > and_ln184_fu_423_p2;
    sc_signal< sc_lv<1> > xor_ln179_fu_483_p2;
    sc_signal< sc_lv<1> > and_ln184_6_fu_495_p2;
    sc_signal< sc_lv<1> > and_ln184_5_fu_489_p2;
    sc_signal< sc_lv<32> > d1_fu_517_p3;
    sc_signal< sc_lv<32> > d2_fu_528_p3;
    sc_signal< sc_lv<32> > d3_1_fu_507_p3;
    sc_signal< sc_lv<32> > d3_2_fu_539_p3;
    sc_signal< sc_lv<32> > largest_1_fu_512_p3;
    sc_signal< sc_lv<32> > largest_2_fu_551_p3;
    sc_signal< sc_lv<32> > bitcast_ln201_fu_564_p1;
    sc_signal< sc_lv<8> > tmp_14_fu_567_p4;
    sc_signal< sc_lv<23> > trunc_ln201_fu_577_p1;
    sc_signal< sc_lv<1> > icmp_ln201_1_fu_587_p2;
    sc_signal< sc_lv<1> > icmp_ln201_fu_581_p2;
    sc_signal< sc_lv<1> > or_ln201_fu_593_p2;
    sc_signal< sc_lv<1> > grp_fu_145_p2;
    sc_signal< sc_logic > grp_fu_67_ce;
    sc_signal< sc_logic > grp_fu_72_ce;
    sc_signal< sc_logic > grp_fu_76_ce;
    sc_signal< sc_logic > grp_fu_80_ce;
    sc_signal< sc_logic > grp_fu_84_ce;
    sc_signal< sc_logic > grp_fu_88_ce;
    sc_signal< sc_logic > grp_fu_92_ce;
    sc_signal< sc_logic > grp_fu_97_ce;
    sc_signal< sc_logic > grp_fu_101_ce;
    sc_signal< sc_logic > grp_fu_105_ce;
    sc_signal< sc_logic > grp_fu_109_ce;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< sc_logic > grp_fu_113_ce;
    sc_signal< sc_logic > grp_fu_117_ce;
    sc_signal< sc_logic > grp_fu_121_ce;
    sc_signal< sc_logic > grp_fu_125_ce;
    sc_signal< sc_logic > grp_fu_129_ce;
    sc_signal< sc_logic > grp_fu_133_ce;
    sc_signal< sc_logic > grp_fu_137_ce;
    sc_signal< sc_logic > grp_fu_141_ce;
    sc_signal< sc_logic > grp_fu_145_ce;
    sc_signal< sc_logic > grp_fu_150_ce;
    sc_signal< sc_lv<32> > a_M_real_int_reg;
    sc_signal< sc_lv<32> > a_M_imag_int_reg;
    sc_signal< sc_lv<32> > b_M_real_int_reg;
    sc_signal< sc_lv<32> > b_M_imag_int_reg;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<5> ap_const_lv5_1;
    // Thread declarations
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_and_ln179_1_fu_417_p2();
    void thread_and_ln179_2_fu_385_p2();
    void thread_and_ln179_3_fu_391_p2();
    void thread_and_ln179_4_fu_395_p2();
    void thread_and_ln179_5_fu_401_p2();
    void thread_and_ln179_6_fu_405_p2();
    void thread_and_ln179_7_fu_411_p2();
    void thread_and_ln179_fu_381_p2();
    void thread_and_ln184_1_fu_429_p2();
    void thread_and_ln184_2_fu_433_p2();
    void thread_and_ln184_3_fu_439_p2();
    void thread_and_ln184_4_fu_443_p2();
    void thread_and_ln184_5_fu_489_p2();
    void thread_and_ln184_6_fu_495_p2();
    void thread_and_ln184_7_fu_501_p2();
    void thread_and_ln184_fu_423_p2();
    void thread_and_ln189_1_fu_477_p2();
    void thread_and_ln189_2_fu_455_p2();
    void thread_and_ln189_3_fu_461_p2();
    void thread_and_ln189_4_fu_465_p2();
    void thread_and_ln189_5_fu_471_p2();
    void thread_and_ln189_fu_449_p2();
    void thread_and_ln201_fu_599_p2();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state10_pp0_stage0_iter9();
    void thread_ap_block_state11_pp0_stage0_iter10();
    void thread_ap_block_state12_pp0_stage0_iter11();
    void thread_ap_block_state13_pp0_stage0_iter12();
    void thread_ap_block_state14_pp0_stage0_iter13();
    void thread_ap_block_state15_pp0_stage0_iter14();
    void thread_ap_block_state16_pp0_stage0_iter15();
    void thread_ap_block_state17_pp0_stage0_iter16();
    void thread_ap_block_state18_pp0_stage0_iter17();
    void thread_ap_block_state19_pp0_stage0_iter18();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state20_pp0_stage0_iter19();
    void thread_ap_block_state21_pp0_stage0_iter20();
    void thread_ap_block_state22_pp0_stage0_iter21();
    void thread_ap_block_state23_pp0_stage0_iter22();
    void thread_ap_block_state24_pp0_stage0_iter23();
    void thread_ap_block_state25_pp0_stage0_iter24();
    void thread_ap_block_state26_pp0_stage0_iter25();
    void thread_ap_block_state27_pp0_stage0_iter26();
    void thread_ap_block_state28_pp0_stage0_iter27();
    void thread_ap_block_state29_pp0_stage0_iter28();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state30_pp0_stage0_iter29();
    void thread_ap_block_state31_pp0_stage0_iter30();
    void thread_ap_block_state32_pp0_stage0_iter31();
    void thread_ap_block_state33_pp0_stage0_iter32();
    void thread_ap_block_state34_pp0_stage0_iter33();
    void thread_ap_block_state35_pp0_stage0_iter34();
    void thread_ap_block_state36_pp0_stage0_iter35();
    void thread_ap_block_state37_pp0_stage0_iter36();
    void thread_ap_block_state38_pp0_stage0_iter37();
    void thread_ap_block_state39_pp0_stage0_iter38();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state40_pp0_stage0_iter39();
    void thread_ap_block_state41_pp0_stage0_iter40();
    void thread_ap_block_state42_pp0_stage0_iter41();
    void thread_ap_block_state43_pp0_stage0_iter42();
    void thread_ap_block_state44_pp0_stage0_iter43();
    void thread_ap_block_state45_pp0_stage0_iter44();
    void thread_ap_block_state46_pp0_stage0_iter45();
    void thread_ap_block_state47_pp0_stage0_iter46();
    void thread_ap_block_state48_pp0_stage0_iter47();
    void thread_ap_block_state49_pp0_stage0_iter48();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_block_state6_pp0_stage0_iter5();
    void thread_ap_block_state7_pp0_stage0_iter6();
    void thread_ap_block_state8_pp0_stage0_iter7();
    void thread_ap_block_state9_pp0_stage0_iter8();
    void thread_ap_phi_mux_p_0_phi_fu_60_p4();
    void thread_ap_phi_reg_pp0_iter0_p_0_reg_56();
    void thread_ap_return();
    void thread_bitcast_ln201_fu_564_p1();
    void thread_d1_3_fu_522_p3();
    void thread_d1_4_fu_175_p1();
    void thread_d1_fu_517_p3();
    void thread_d2_3_fu_533_p3();
    void thread_d2_4_fu_204_p1();
    void thread_d2_fu_528_p3();
    void thread_d3_1_fu_507_p3();
    void thread_d3_2_fu_539_p3();
    void thread_d3_3_fu_545_p3();
    void thread_d3_fu_262_p1();
    void thread_grp_fu_101_ce();
    void thread_grp_fu_105_ce();
    void thread_grp_fu_109_ce();
    void thread_grp_fu_113_ce();
    void thread_grp_fu_117_ce();
    void thread_grp_fu_121_ce();
    void thread_grp_fu_125_ce();
    void thread_grp_fu_129_ce();
    void thread_grp_fu_133_ce();
    void thread_grp_fu_137_ce();
    void thread_grp_fu_141_ce();
    void thread_grp_fu_145_ce();
    void thread_grp_fu_145_p0();
    void thread_grp_fu_150_ce();
    void thread_grp_fu_67_ce();
    void thread_grp_fu_72_ce();
    void thread_grp_fu_76_ce();
    void thread_grp_fu_80_ce();
    void thread_grp_fu_84_ce();
    void thread_grp_fu_88_ce();
    void thread_grp_fu_92_ce();
    void thread_grp_fu_97_ce();
    void thread_icmp_ln179_1_fu_295_p2();
    void thread_icmp_ln179_2_fu_307_p2();
    void thread_icmp_ln179_3_fu_313_p2();
    void thread_icmp_ln179_4_fu_335_p2();
    void thread_icmp_ln179_5_fu_341_p2();
    void thread_icmp_ln179_6_fu_363_p2();
    void thread_icmp_ln179_7_fu_369_p2();
    void thread_icmp_ln179_fu_289_p2();
    void thread_icmp_ln201_1_fu_587_p2();
    void thread_icmp_ln201_fu_581_p2();
    void thread_largest_1_fu_512_p3();
    void thread_largest_2_fu_551_p3();
    void thread_largest_3_fu_557_p3();
    void thread_largest_4_fu_233_p1();
    void thread_or_ln179_1_fu_319_p2();
    void thread_or_ln179_2_fu_347_p2();
    void thread_or_ln179_3_fu_375_p2();
    void thread_or_ln179_fu_301_p2();
    void thread_or_ln201_fu_593_p2();
    void thread_p_Result_48_fu_196_p3();
    void thread_p_Result_49_fu_225_p3();
    void thread_p_Result_50_fu_254_p3();
    void thread_p_Result_s_fu_167_p3();
    void thread_p_Val2_64_fu_184_p1();
    void thread_p_Val2_65_fu_213_p1();
    void thread_p_Val2_66_fu_242_p1();
    void thread_p_Val2_s_fu_155_p1();
    void thread_tmp_14_fu_567_p4();
    void thread_tmp_1_fu_269_p4();
    void thread_tmp_2_fu_279_p4();
    void thread_tmp_4_fu_325_p4();
    void thread_tmp_6_fu_353_p4();
    void thread_trunc_ln189_1_fu_192_p1();
    void thread_trunc_ln189_2_fu_221_p1();
    void thread_trunc_ln189_3_fu_250_p1();
    void thread_trunc_ln189_fu_163_p1();
    void thread_trunc_ln201_fu_577_p1();
    void thread_trunc_ln368_1_fu_188_p1();
    void thread_trunc_ln368_2_fu_217_p1();
    void thread_trunc_ln368_3_fu_246_p1();
    void thread_trunc_ln368_fu_159_p1();
    void thread_xor_ln179_fu_483_p2();
};

}

using namespace ap_rtl;

#endif