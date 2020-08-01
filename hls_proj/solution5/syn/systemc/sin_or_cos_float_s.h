// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sin_or_cos_float_s_HH_
#define _sin_or_cos_float_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scaled_fixed2ieee_1.h"
#include "music_mux_83_1_1_1.h"
#include "music_mux_164_1_1_1.h"
#include "music_mul_mul_15nhbi.h"
#include "music_mul_mul_15nibs.h"
#include "sin_or_cos_float_dEe.h"
#include "sin_or_cos_float_eOg.h"
#include "sin_or_cos_float_fYi.h"
#include "sin_or_cos_float_g8j.h"

namespace ap_rtl {

struct sin_or_cos_float_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > t_in;
    sc_in< sc_logic > do_cos;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const0;


    // Module declarations
    sin_or_cos_float_s(sc_module_name name);
    SC_HAS_PROCESS(sin_or_cos_float_s);

    ~sin_or_cos_float_s();

    sc_trace_file* mVcdFile;

    sin_or_cos_float_dEe* ref_4oPi_table_100_V_U;
    sin_or_cos_float_eOg* second_order_float_2_U;
    sin_or_cos_float_fYi* second_order_float_3_U;
    sin_or_cos_float_g8j* second_order_float_s_U;
    scaled_fixed2ieee_1* grp_scaled_fixed2ieee_1_fu_218;
    music_mux_83_1_1_1<1,1,1,1,1,1,1,1,1,1,3,1>* music_mux_83_1_1_1_U5;
    music_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* music_mux_164_1_1_1_U6;
    music_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* music_mux_164_1_1_1_U7;
    music_mul_mul_15nhbi<1,1,15,15,30>* music_mul_mul_15nhbi_U8;
    music_mul_mul_15nibs<1,1,15,15,30>* music_mul_mul_15nibs_U9;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > ref_4oPi_table_100_V_address0;
    sc_signal< sc_logic > ref_4oPi_table_100_V_ce0;
    sc_signal< sc_lv<100> > ref_4oPi_table_100_V_q0;
    sc_signal< sc_lv<8> > second_order_float_2_address0;
    sc_signal< sc_logic > second_order_float_2_ce0;
    sc_signal< sc_lv<30> > second_order_float_2_q0;
    sc_signal< sc_lv<8> > second_order_float_3_address0;
    sc_signal< sc_logic > second_order_float_3_ce0;
    sc_signal< sc_lv<23> > second_order_float_3_q0;
    sc_signal< sc_lv<8> > second_order_float_s_address0;
    sc_signal< sc_logic > second_order_float_s_ce0;
    sc_signal< sc_lv<15> > second_order_float_s_q0;
    sc_signal< sc_lv<1> > p_Result_s_reg_995;
    sc_signal< sc_lv<8> > tmp_V_fu_236_p4;
    sc_signal< sc_lv<8> > tmp_V_reg_1001;
    sc_signal< sc_lv<23> > tmp_V_1_fu_246_p1;
    sc_signal< sc_lv<23> > tmp_V_1_reg_1008;
    sc_signal< sc_lv<1> > closepath_fu_250_p2;
    sc_signal< sc_lv<1> > closepath_reg_1014;
    sc_signal< sc_lv<4> > trunc_ln601_fu_285_p1;
    sc_signal< sc_lv<4> > trunc_ln601_reg_1025;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > p_Val2_24_fu_361_p3;
    sc_signal< sc_lv<3> > p_Val2_24_reg_1036;
    sc_signal< sc_lv<29> > Mx_V_fu_444_p4;
    sc_signal< sc_lv<29> > Mx_V_reg_1041;
    sc_signal< sc_lv<8> > Ex_V_fu_458_p2;
    sc_signal< sc_lv<8> > Ex_V_reg_1046;
    sc_signal< sc_lv<1> > tmp_s_fu_526_p10;
    sc_signal< sc_lv<1> > tmp_s_reg_1051;
    sc_signal< sc_lv<22> > B_V_fu_558_p1;
    sc_signal< sc_lv<22> > B_V_reg_1057;
    sc_signal< sc_lv<15> > B_trunc_V_reg_1062;
    sc_signal< sc_lv<1> > xor_ln25_fu_572_p2;
    sc_signal< sc_lv<1> > xor_ln25_reg_1067;
    sc_signal< sc_lv<1> > icmp_ln833_fu_599_p2;
    sc_signal< sc_lv<1> > icmp_ln833_reg_1087;
    sc_signal< sc_lv<1> > icmp_ln833_1_fu_604_p2;
    sc_signal< sc_lv<1> > icmp_ln833_1_reg_1093;
    sc_signal< sc_lv<1> > icmp_ln833_2_fu_609_p2;
    sc_signal< sc_lv<1> > icmp_ln833_2_reg_1099;
    sc_signal< sc_lv<1> > cos_basis_fu_619_p3;
    sc_signal< sc_lv<1> > cos_basis_reg_1107;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<29> > result_V_reg_1112;
    sc_signal< sc_lv<9> > ret_V_fu_758_p2;
    sc_signal< sc_lv<9> > ret_V_reg_1117;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_start;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_done;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_idle;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_ready;
    sc_signal< sc_lv<32> > grp_scaled_fixed2ieee_1_fu_218_ap_return;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln498_1_fu_280_p1;
    sc_signal< sc_lv<64> > zext_ln498_fu_592_p1;
    sc_signal< sc_lv<32> > p_Val2_s_fu_224_p1;
    sc_signal< sc_lv<8> > add_ln114_1_fu_256_p2;
    sc_signal< sc_lv<8> > addr_V_fu_262_p3;
    sc_signal< sc_lv<4> > tmp_1_fu_270_p4;
    sc_signal< sc_lv<8> > add_ln114_fu_289_p2;
    sc_signal< sc_lv<100> > zext_ln744_fu_308_p1;
    sc_signal< sc_lv<100> > r_V_9_fu_311_p2;
    sc_signal< sc_lv<80> > Med_V_fu_317_p4;
    sc_signal< sc_lv<24> > p_Result_15_fu_301_p3;
    sc_signal< sc_lv<80> > ret_V_7_fu_335_p0;
    sc_signal< sc_lv<24> > ret_V_7_fu_335_p1;
    sc_signal< sc_lv<104> > ret_V_7_fu_335_p2;
    sc_signal< sc_lv<3> > trunc_ln_i_fu_351_p4;
    sc_signal< sc_lv<58> > p_Val2_23_fu_341_p4;
    sc_signal< sc_lv<1> > trunc_ln745_fu_368_p1;
    sc_signal< sc_lv<58> > Mx_bits_V_1_fu_372_p2;
    sc_signal< sc_lv<58> > p_Val2_7_fu_378_p3;
    sc_signal< sc_lv<29> > p_Result_i_i_fu_386_p4;
    sc_signal< sc_lv<30> > p_Result_16_fu_396_p3;
    sc_signal< sc_lv<30> > p_Result_8_fu_404_p4;
    sc_signal< sc_lv<32> > p_Result_17_fu_414_p3;
    sc_signal< sc_lv<32> > val_assign_fu_422_p3;
    sc_signal< sc_lv<5> > Mx_zeros_V_fu_430_p1;
    sc_signal< sc_lv<58> > zext_ln1253_fu_434_p1;
    sc_signal< sc_lv<58> > r_V_10_fu_438_p2;
    sc_signal< sc_lv<8> > select_ln482_fu_294_p3;
    sc_signal< sc_lv<8> > zext_ln655_fu_454_p1;
    sc_signal< sc_lv<9> > sext_ln1334_fu_464_p1;
    sc_signal< sc_lv<1> > isNeg_fu_468_p3;
    sc_signal< sc_lv<9> > sub_ln1311_fu_476_p2;
    sc_signal< sc_lv<9> > ush_fu_482_p3;
    sc_signal< sc_lv<29> > sext_ln1311_1_fu_494_p1;
    sc_signal< sc_lv<29> > lshr_ln1287_fu_502_p2;
    sc_signal< sc_lv<32> > zext_ln1287_fu_498_p1;
    sc_signal< sc_lv<32> > sext_ln1311_fu_490_p1;
    sc_signal< sc_lv<32> > zext_ln1287_1_fu_508_p1;
    sc_signal< sc_lv<32> > shl_ln1253_fu_512_p2;
    sc_signal< sc_lv<32> > select_ln1310_fu_518_p3;
    sc_signal< sc_lv<1> > xor_ln25_fu_572_p0;
    sc_signal< sc_lv<1> > sin_basis_fu_578_p2;
    sc_signal< sc_lv<7> > p_Result_i_fu_548_p4;
    sc_signal< sc_lv<8> > p_Result_18_fu_584_p3;
    sc_signal< sc_lv<1> > cos_basis_fu_619_p0;
    sc_signal< sc_lv<1> > xor_ln271_fu_614_p2;
    sc_signal< sc_lv<30> > r_V_11_fu_981_p2;
    sc_signal< sc_lv<23> > r_V_12_fu_668_p0;
    sc_signal< sc_lv<22> > r_V_12_fu_668_p1;
    sc_signal< sc_lv<45> > r_V_12_fu_668_p2;
    sc_signal< sc_lv<15> > B_squared_V_fu_642_p4;
    sc_signal< sc_lv<30> > r_V_13_fu_988_p2;
    sc_signal< sc_lv<29> > t1_V_fu_651_p4;
    sc_signal< sc_lv<22> > trunc_ln1_fu_674_p4;
    sc_signal< sc_lv<14> > trunc_ln662_2_fu_692_p4;
    sc_signal< sc_lv<23> > sext_ln657_fu_705_p1;
    sc_signal< sc_lv<23> > sext_ln1146_fu_709_p1;
    sc_signal< sc_lv<23> > add_ln1146_fu_713_p2;
    sc_signal< sc_lv<30> > sext_ln1146_1_fu_719_p1;
    sc_signal< sc_lv<30> > lhs_V_fu_701_p1;
    sc_signal< sc_lv<30> > ret_V_4_fu_723_p2;
    sc_signal< sc_lv<29> > select_ln272_1_fu_632_p3;
    sc_signal< sc_lv<30> > r_V_14_fu_737_p0;
    sc_signal< sc_lv<29> > r_V_14_fu_737_p1;
    sc_signal< sc_lv<58> > r_V_14_fu_737_p2;
    sc_signal< sc_lv<8> > select_ln272_fu_625_p3;
    sc_signal< sc_lv<9> > rhs_V_fu_754_p1;
    sc_signal< sc_lv<32> > p_Val2_19_fu_765_p1;
    sc_signal< sc_lv<4> > p_Result_20_fu_791_p3;
    sc_signal< sc_lv<1> > tmp_fu_797_p18;
    sc_signal< sc_lv<1> > tmp_2_fu_835_p18;
    sc_signal< sc_lv<1> > select_ln307_fu_888_p0;
    sc_signal< sc_lv<1> > select_ln271_fu_873_p3;
    sc_signal< sc_lv<1> > or_ln311_fu_900_p2;
    sc_signal< sc_lv<1> > xor_ln311_fu_895_p2;
    sc_signal< sc_lv<1> > p_Result_19_fu_769_p3;
    sc_signal< sc_lv<8> > tmp_V_2_fu_777_p4;
    sc_signal< sc_lv<1> > and_ln300_fu_880_p2;
    sc_signal< sc_lv<1> > and_ln307_fu_884_p2;
    sc_signal< sc_lv<1> > select_ln311_fu_905_p3;
    sc_signal< sc_lv<8> > select_ln307_fu_888_p3;
    sc_signal< sc_lv<8> > select_ln311_1_fu_913_p3;
    sc_signal< sc_lv<1> > and_ln300_1_fu_936_p2;
    sc_signal< sc_lv<1> > xor_ln300_fu_940_p2;
    sc_signal< sc_lv<1> > or_ln300_fu_954_p2;
    sc_signal< sc_lv<23> > select_ln300_2_fu_946_p3;
    sc_signal< sc_lv<23> > tmp_V_3_fu_787_p1;
    sc_signal< sc_lv<1> > p_Repl2_3_fu_920_p3;
    sc_signal< sc_lv<8> > ret_V_5_fu_928_p3;
    sc_signal< sc_lv<23> > ret_V_6_fu_959_p3;
    sc_signal< sc_lv<32> > p_Result_21_fu_967_p4;
    sc_signal< sc_lv<15> > r_V_11_fu_981_p0;
    sc_signal< sc_lv<30> > r_V_fu_639_p1;
    sc_signal< sc_lv<15> > r_V_11_fu_981_p1;
    sc_signal< sc_lv<15> > r_V_13_fu_988_p0;
    sc_signal< sc_lv<32> > bitcast_ln348_fu_977_p1;
    sc_signal< sc_lv<32> > ap_return_preg;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_lv<45> > r_V_12_fu_668_p10;
    sc_signal< sc_lv<30> > r_V_13_fu_988_p00;
    sc_signal< sc_lv<58> > r_V_14_fu_737_p10;
    sc_signal< sc_lv<104> > ret_V_7_fu_335_p00;
    sc_signal< sc_lv<104> > ret_V_7_fu_335_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_7E;
    static const sc_lv<8> ap_const_lv8_C2;
    static const sc_lv<8> ap_const_lv8_3F;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_83;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<58> ap_const_lv58_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<29> ap_const_lv29_1FFFFFFF;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<23> ap_const_lv23_7FFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_B_V_fu_558_p1();
    void thread_B_squared_V_fu_642_p4();
    void thread_Ex_V_fu_458_p2();
    void thread_Med_V_fu_317_p4();
    void thread_Mx_V_fu_444_p4();
    void thread_Mx_bits_V_1_fu_372_p2();
    void thread_Mx_zeros_V_fu_430_p1();
    void thread_add_ln1146_fu_713_p2();
    void thread_add_ln114_1_fu_256_p2();
    void thread_add_ln114_fu_289_p2();
    void thread_addr_V_fu_262_p3();
    void thread_and_ln300_1_fu_936_p2();
    void thread_and_ln300_fu_880_p2();
    void thread_and_ln307_fu_884_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln348_fu_977_p1();
    void thread_closepath_fu_250_p2();
    void thread_cos_basis_fu_619_p0();
    void thread_cos_basis_fu_619_p3();
    void thread_grp_scaled_fixed2ieee_1_fu_218_ap_start();
    void thread_icmp_ln833_1_fu_604_p2();
    void thread_icmp_ln833_2_fu_609_p2();
    void thread_icmp_ln833_fu_599_p2();
    void thread_isNeg_fu_468_p3();
    void thread_lhs_V_fu_701_p1();
    void thread_lshr_ln1287_fu_502_p2();
    void thread_or_ln300_fu_954_p2();
    void thread_or_ln311_fu_900_p2();
    void thread_p_Repl2_3_fu_920_p3();
    void thread_p_Result_15_fu_301_p3();
    void thread_p_Result_16_fu_396_p3();
    void thread_p_Result_17_fu_414_p3();
    void thread_p_Result_18_fu_584_p3();
    void thread_p_Result_19_fu_769_p3();
    void thread_p_Result_20_fu_791_p3();
    void thread_p_Result_21_fu_967_p4();
    void thread_p_Result_8_fu_404_p4();
    void thread_p_Result_i_fu_548_p4();
    void thread_p_Result_i_i_fu_386_p4();
    void thread_p_Val2_19_fu_765_p1();
    void thread_p_Val2_23_fu_341_p4();
    void thread_p_Val2_24_fu_361_p3();
    void thread_p_Val2_7_fu_378_p3();
    void thread_p_Val2_s_fu_224_p1();
    void thread_r_V_10_fu_438_p2();
    void thread_r_V_11_fu_981_p0();
    void thread_r_V_11_fu_981_p1();
    void thread_r_V_12_fu_668_p0();
    void thread_r_V_12_fu_668_p1();
    void thread_r_V_12_fu_668_p10();
    void thread_r_V_12_fu_668_p2();
    void thread_r_V_13_fu_988_p0();
    void thread_r_V_13_fu_988_p00();
    void thread_r_V_14_fu_737_p0();
    void thread_r_V_14_fu_737_p1();
    void thread_r_V_14_fu_737_p10();
    void thread_r_V_14_fu_737_p2();
    void thread_r_V_9_fu_311_p2();
    void thread_r_V_fu_639_p1();
    void thread_ref_4oPi_table_100_V_address0();
    void thread_ref_4oPi_table_100_V_ce0();
    void thread_ret_V_4_fu_723_p2();
    void thread_ret_V_5_fu_928_p3();
    void thread_ret_V_6_fu_959_p3();
    void thread_ret_V_7_fu_335_p0();
    void thread_ret_V_7_fu_335_p00();
    void thread_ret_V_7_fu_335_p1();
    void thread_ret_V_7_fu_335_p10();
    void thread_ret_V_7_fu_335_p2();
    void thread_ret_V_fu_758_p2();
    void thread_rhs_V_fu_754_p1();
    void thread_second_order_float_2_address0();
    void thread_second_order_float_2_ce0();
    void thread_second_order_float_3_address0();
    void thread_second_order_float_3_ce0();
    void thread_second_order_float_s_address0();
    void thread_second_order_float_s_ce0();
    void thread_select_ln1310_fu_518_p3();
    void thread_select_ln271_fu_873_p3();
    void thread_select_ln272_1_fu_632_p3();
    void thread_select_ln272_fu_625_p3();
    void thread_select_ln300_2_fu_946_p3();
    void thread_select_ln307_fu_888_p0();
    void thread_select_ln307_fu_888_p3();
    void thread_select_ln311_1_fu_913_p3();
    void thread_select_ln311_fu_905_p3();
    void thread_select_ln482_fu_294_p3();
    void thread_sext_ln1146_1_fu_719_p1();
    void thread_sext_ln1146_fu_709_p1();
    void thread_sext_ln1311_1_fu_494_p1();
    void thread_sext_ln1311_fu_490_p1();
    void thread_sext_ln1334_fu_464_p1();
    void thread_sext_ln657_fu_705_p1();
    void thread_shl_ln1253_fu_512_p2();
    void thread_sin_basis_fu_578_p2();
    void thread_sub_ln1311_fu_476_p2();
    void thread_t1_V_fu_651_p4();
    void thread_tmp_1_fu_270_p4();
    void thread_tmp_V_1_fu_246_p1();
    void thread_tmp_V_2_fu_777_p4();
    void thread_tmp_V_3_fu_787_p1();
    void thread_tmp_V_fu_236_p4();
    void thread_trunc_ln1_fu_674_p4();
    void thread_trunc_ln601_fu_285_p1();
    void thread_trunc_ln662_2_fu_692_p4();
    void thread_trunc_ln745_fu_368_p1();
    void thread_trunc_ln_i_fu_351_p4();
    void thread_ush_fu_482_p3();
    void thread_val_assign_fu_422_p3();
    void thread_xor_ln25_fu_572_p0();
    void thread_xor_ln25_fu_572_p2();
    void thread_xor_ln271_fu_614_p2();
    void thread_xor_ln300_fu_940_p2();
    void thread_xor_ln311_fu_895_p2();
    void thread_zext_ln1253_fu_434_p1();
    void thread_zext_ln1287_1_fu_508_p1();
    void thread_zext_ln1287_fu_498_p1();
    void thread_zext_ln498_1_fu_280_p1();
    void thread_zext_ln498_fu_592_p1();
    void thread_zext_ln655_fu_454_p1();
    void thread_zext_ln744_fu_308_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif