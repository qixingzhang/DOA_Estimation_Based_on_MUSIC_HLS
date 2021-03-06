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
#include "music_mul_80ns_24Zio.h"
#include "music_mux_83_1_1_1.h"
#include "music_mux_164_1_1_1.h"
#include "music_mul_mul_15n0iy.h"
#include "music_mul_mul_15n1iI.h"
#include "sin_or_cos_float_VhK.h"
#include "sin_or_cos_float_WhU.h"
#include "sin_or_cos_float_Xh4.h"
#include "sin_or_cos_float_Yie.h"

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
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const2;


    // Module declarations
    sin_or_cos_float_s(sc_module_name name);
    SC_HAS_PROCESS(sin_or_cos_float_s);

    ~sin_or_cos_float_s();

    sc_trace_file* mVcdFile;

    sin_or_cos_float_VhK* ref_4oPi_table_100_V_U;
    sin_or_cos_float_WhU* second_order_float_2_U;
    sin_or_cos_float_Xh4* second_order_float_3_U;
    sin_or_cos_float_Yie* second_order_float_s_U;
    scaled_fixed2ieee_1* grp_scaled_fixed2ieee_1_fu_218;
    music_mul_80ns_24Zio<1,5,80,24,104>* music_mul_80ns_24Zio_U215;
    music_mux_83_1_1_1<1,1,1,1,1,1,1,1,1,1,3,1>* music_mux_83_1_1_1_U216;
    music_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* music_mux_164_1_1_1_U217;
    music_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* music_mux_164_1_1_1_U218;
    music_mul_mul_15n0iy<1,1,15,15,30>* music_mul_mul_15n0iy_U219;
    music_mul_mul_15n1iI<1,1,15,15,30>* music_mul_mul_15n1iI_U220;
    sc_signal< sc_lv<17> > ap_CS_fsm;
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
    sc_signal< sc_lv<1> > p_Result_s_reg_968;
    sc_signal< sc_lv<8> > tmp_V_fu_236_p4;
    sc_signal< sc_lv<8> > tmp_V_reg_974;
    sc_signal< sc_lv<23> > tmp_V_1_fu_246_p1;
    sc_signal< sc_lv<23> > tmp_V_1_reg_981;
    sc_signal< sc_lv<1> > closepath_fu_250_p2;
    sc_signal< sc_lv<1> > closepath_reg_987;
    sc_signal< sc_lv<4> > trunc_ln601_fu_285_p1;
    sc_signal< sc_lv<4> > trunc_ln601_reg_998;
    sc_signal< sc_lv<80> > Med_V_reg_1003;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln833_1_fu_328_p2;
    sc_signal< sc_lv<1> > icmp_ln833_1_reg_1018;
    sc_signal< sc_lv<58> > p_Val2_23_reg_1024;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > trunc_ln_i_reg_1030;
    sc_signal< sc_lv<3> > p_Val2_24_fu_353_p3;
    sc_signal< sc_lv<3> > p_Val2_24_reg_1035;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<58> > p_Val2_7_fu_368_p3;
    sc_signal< sc_lv<58> > p_Val2_7_reg_1041;
    sc_signal< sc_lv<5> > Mx_zeros_V_fu_419_p1;
    sc_signal< sc_lv<5> > Mx_zeros_V_reg_1046;
    sc_signal< sc_lv<29> > Mx_V_reg_1052;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > Ex_V_fu_456_p2;
    sc_signal< sc_lv<8> > Ex_V_reg_1059;
    sc_signal< sc_lv<1> > isNeg_fu_466_p3;
    sc_signal< sc_lv<1> > isNeg_reg_1064;
    sc_signal< sc_lv<9> > ush_fu_480_p3;
    sc_signal< sc_lv<9> > ush_reg_1069;
    sc_signal< sc_lv<1> > icmp_ln833_fu_488_p2;
    sc_signal< sc_lv<1> > icmp_ln833_reg_1075;
    sc_signal< sc_lv<1> > icmp_ln833_2_fu_493_p2;
    sc_signal< sc_lv<1> > icmp_ln833_2_reg_1081;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_s_fu_529_p10;
    sc_signal< sc_lv<1> > tmp_s_reg_1095;
    sc_signal< sc_lv<22> > B_V_fu_560_p1;
    sc_signal< sc_lv<22> > B_V_reg_1101;
    sc_signal< sc_lv<15> > B_trunc_V_reg_1106;
    sc_signal< sc_lv<1> > xor_ln25_fu_574_p2;
    sc_signal< sc_lv<1> > xor_ln25_reg_1111;
    sc_signal< sc_lv<15> > B_squared_V_reg_1131;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<29> > t1_V_reg_1136;
    sc_signal< sc_lv<23> > second_order_float_6_reg_1141;
    sc_signal< sc_lv<15> > second_order_float_8_reg_1146;
    sc_signal< sc_lv<22> > trunc_ln1_reg_1151;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<14> > trunc_ln662_2_reg_1156;
    sc_signal< sc_lv<1> > cos_basis_fu_665_p3;
    sc_signal< sc_lv<1> > cos_basis_reg_1161;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<29> > select_ln272_1_fu_671_p3;
    sc_signal< sc_lv<29> > select_ln272_1_reg_1167;
    sc_signal< sc_lv<30> > ret_V_4_fu_697_p2;
    sc_signal< sc_lv<30> > ret_V_4_reg_1172;
    sc_signal< sc_lv<29> > result_V_reg_1177;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<9> > ret_V_fu_735_p2;
    sc_signal< sc_lv<9> > ret_V_reg_1182;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > and_ln300_fu_857_p2;
    sc_signal< sc_lv<1> > and_ln300_reg_1187;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_ready;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_done;
    sc_signal< sc_lv<1> > select_ln311_fu_878_p3;
    sc_signal< sc_lv<1> > select_ln311_reg_1192;
    sc_signal< sc_lv<8> > ret_V_5_fu_893_p3;
    sc_signal< sc_lv<8> > ret_V_5_reg_1197;
    sc_signal< sc_lv<23> > ret_V_6_fu_924_p3;
    sc_signal< sc_lv<23> > ret_V_6_reg_1202;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_start;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_idle;
    sc_signal< sc_lv<32> > grp_scaled_fixed2ieee_1_fu_218_ap_return;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_1_fu_218_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln498_1_fu_280_p1;
    sc_signal< sc_lv<64> > zext_ln498_fu_594_p1;
    sc_signal< sc_lv<32> > p_Val2_s_fu_224_p1;
    sc_signal< sc_lv<8> > add_ln114_1_fu_256_p2;
    sc_signal< sc_lv<8> > addr_V_fu_262_p3;
    sc_signal< sc_lv<4> > tmp_1_fu_270_p4;
    sc_signal< sc_lv<100> > zext_ln744_fu_289_p1;
    sc_signal< sc_lv<100> > r_V_9_fu_292_p2;
    sc_signal< sc_lv<24> > p_Result_15_fu_308_p3;
    sc_signal< sc_lv<80> > grp_fu_322_p0;
    sc_signal< sc_lv<24> > grp_fu_322_p1;
    sc_signal< sc_lv<104> > grp_fu_322_p2;
    sc_signal< sc_lv<1> > trunc_ln745_fu_359_p1;
    sc_signal< sc_lv<58> > Mx_bits_V_1_fu_363_p2;
    sc_signal< sc_lv<29> > p_Result_i_i_fu_375_p4;
    sc_signal< sc_lv<30> > p_Result_16_fu_385_p3;
    sc_signal< sc_lv<30> > p_Result_8_fu_393_p4;
    sc_signal< sc_lv<32> > p_Result_17_fu_403_p3;
    sc_signal< sc_lv<32> > val_assign_fu_411_p3;
    sc_signal< sc_lv<8> > add_ln114_fu_423_p2;
    sc_signal< sc_lv<58> > zext_ln1253_fu_435_p1;
    sc_signal< sc_lv<58> > r_V_10_fu_438_p2;
    sc_signal< sc_lv<8> > select_ln482_fu_428_p3;
    sc_signal< sc_lv<8> > zext_ln655_fu_453_p1;
    sc_signal< sc_lv<9> > sext_ln1334_fu_462_p1;
    sc_signal< sc_lv<9> > sub_ln1311_fu_474_p2;
    sc_signal< sc_lv<29> > sext_ln1311_1_fu_501_p1;
    sc_signal< sc_lv<29> > lshr_ln1287_fu_507_p2;
    sc_signal< sc_lv<32> > zext_ln1287_fu_504_p1;
    sc_signal< sc_lv<32> > sext_ln1311_fu_498_p1;
    sc_signal< sc_lv<32> > zext_ln1287_1_fu_512_p1;
    sc_signal< sc_lv<32> > shl_ln1253_fu_516_p2;
    sc_signal< sc_lv<32> > select_ln1310_fu_522_p3;
    sc_signal< sc_lv<1> > xor_ln25_fu_574_p0;
    sc_signal< sc_lv<1> > sin_basis_fu_580_p2;
    sc_signal< sc_lv<7> > p_Result_i_fu_550_p4;
    sc_signal< sc_lv<8> > p_Result_18_fu_586_p3;
    sc_signal< sc_lv<30> > r_V_11_fu_954_p2;
    sc_signal< sc_lv<23> > r_V_12_fu_629_p0;
    sc_signal< sc_lv<22> > r_V_12_fu_629_p1;
    sc_signal< sc_lv<45> > r_V_12_fu_629_p2;
    sc_signal< sc_lv<30> > r_V_13_fu_961_p2;
    sc_signal< sc_lv<1> > cos_basis_fu_665_p0;
    sc_signal< sc_lv<1> > xor_ln271_fu_660_p2;
    sc_signal< sc_lv<23> > sext_ln657_fu_681_p1;
    sc_signal< sc_lv<23> > sext_ln1146_fu_684_p1;
    sc_signal< sc_lv<23> > add_ln1146_fu_687_p2;
    sc_signal< sc_lv<30> > sext_ln1146_1_fu_693_p1;
    sc_signal< sc_lv<30> > lhs_V_fu_678_p1;
    sc_signal< sc_lv<30> > r_V_14_fu_709_p0;
    sc_signal< sc_lv<29> > r_V_14_fu_709_p1;
    sc_signal< sc_lv<58> > r_V_14_fu_709_p2;
    sc_signal< sc_lv<8> > select_ln272_fu_725_p3;
    sc_signal< sc_lv<9> > rhs_V_fu_731_p1;
    sc_signal< sc_lv<32> > p_Val2_19_fu_742_p1;
    sc_signal< sc_lv<4> > p_Result_20_fu_768_p3;
    sc_signal< sc_lv<1> > tmp_fu_774_p18;
    sc_signal< sc_lv<1> > tmp_2_fu_812_p18;
    sc_signal< sc_lv<1> > select_ln307_fu_861_p0;
    sc_signal< sc_lv<1> > select_ln271_fu_850_p3;
    sc_signal< sc_lv<1> > or_ln311_fu_873_p2;
    sc_signal< sc_lv<1> > xor_ln311_fu_868_p2;
    sc_signal< sc_lv<1> > p_Result_19_fu_746_p3;
    sc_signal< sc_lv<8> > tmp_V_2_fu_754_p4;
    sc_signal< sc_lv<8> > select_ln307_fu_861_p3;
    sc_signal< sc_lv<8> > select_ln311_1_fu_886_p3;
    sc_signal< sc_lv<1> > and_ln300_1_fu_901_p2;
    sc_signal< sc_lv<1> > xor_ln300_fu_905_p2;
    sc_signal< sc_lv<1> > or_ln300_fu_919_p2;
    sc_signal< sc_lv<23> > select_ln300_2_fu_911_p3;
    sc_signal< sc_lv<23> > tmp_V_3_fu_764_p1;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<1> > and_ln307_fu_932_p2;
    sc_signal< sc_lv<1> > p_Repl2_3_fu_936_p3;
    sc_signal< sc_lv<32> > p_Result_21_fu_942_p4;
    sc_signal< sc_lv<15> > r_V_11_fu_954_p0;
    sc_signal< sc_lv<30> > r_V_fu_601_p1;
    sc_signal< sc_lv<15> > r_V_11_fu_954_p1;
    sc_signal< sc_lv<15> > r_V_13_fu_961_p0;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< sc_lv<104> > grp_fu_322_p00;
    sc_signal< sc_lv<104> > grp_fu_322_p10;
    sc_signal< sc_lv<45> > r_V_12_fu_629_p10;
    sc_signal< sc_lv<30> > r_V_13_fu_961_p00;
    sc_signal< sc_lv<58> > r_V_14_fu_709_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_state2;
    static const sc_lv<17> ap_ST_fsm_state3;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_state7;
    static const sc_lv<17> ap_ST_fsm_state8;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_state12;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_7E;
    static const sc_lv<8> ap_const_lv8_C2;
    static const sc_lv<8> ap_const_lv8_3F;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_63;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<58> ap_const_lv58_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<8> ap_const_lv8_83;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<29> ap_const_lv29_1FFFFFFF;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<23> ap_const_lv23_7FFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_B_V_fu_560_p1();
    void thread_Ex_V_fu_456_p2();
    void thread_Mx_bits_V_1_fu_363_p2();
    void thread_Mx_zeros_V_fu_419_p1();
    void thread_add_ln1146_fu_687_p2();
    void thread_add_ln114_1_fu_256_p2();
    void thread_add_ln114_fu_423_p2();
    void thread_addr_V_fu_262_p3();
    void thread_and_ln300_1_fu_901_p2();
    void thread_and_ln300_fu_857_p2();
    void thread_and_ln307_fu_932_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_closepath_fu_250_p2();
    void thread_cos_basis_fu_665_p0();
    void thread_cos_basis_fu_665_p3();
    void thread_grp_fu_322_p0();
    void thread_grp_fu_322_p00();
    void thread_grp_fu_322_p1();
    void thread_grp_fu_322_p10();
    void thread_grp_scaled_fixed2ieee_1_fu_218_ap_start();
    void thread_icmp_ln833_1_fu_328_p2();
    void thread_icmp_ln833_2_fu_493_p2();
    void thread_icmp_ln833_fu_488_p2();
    void thread_isNeg_fu_466_p3();
    void thread_lhs_V_fu_678_p1();
    void thread_lshr_ln1287_fu_507_p2();
    void thread_or_ln300_fu_919_p2();
    void thread_or_ln311_fu_873_p2();
    void thread_p_Repl2_3_fu_936_p3();
    void thread_p_Result_15_fu_308_p3();
    void thread_p_Result_16_fu_385_p3();
    void thread_p_Result_17_fu_403_p3();
    void thread_p_Result_18_fu_586_p3();
    void thread_p_Result_19_fu_746_p3();
    void thread_p_Result_20_fu_768_p3();
    void thread_p_Result_21_fu_942_p4();
    void thread_p_Result_8_fu_393_p4();
    void thread_p_Result_i_fu_550_p4();
    void thread_p_Result_i_i_fu_375_p4();
    void thread_p_Val2_19_fu_742_p1();
    void thread_p_Val2_24_fu_353_p3();
    void thread_p_Val2_7_fu_368_p3();
    void thread_p_Val2_s_fu_224_p1();
    void thread_r_V_10_fu_438_p2();
    void thread_r_V_11_fu_954_p0();
    void thread_r_V_11_fu_954_p1();
    void thread_r_V_12_fu_629_p0();
    void thread_r_V_12_fu_629_p1();
    void thread_r_V_12_fu_629_p10();
    void thread_r_V_12_fu_629_p2();
    void thread_r_V_13_fu_961_p0();
    void thread_r_V_13_fu_961_p00();
    void thread_r_V_14_fu_709_p0();
    void thread_r_V_14_fu_709_p1();
    void thread_r_V_14_fu_709_p10();
    void thread_r_V_14_fu_709_p2();
    void thread_r_V_9_fu_292_p2();
    void thread_r_V_fu_601_p1();
    void thread_ref_4oPi_table_100_V_address0();
    void thread_ref_4oPi_table_100_V_ce0();
    void thread_ret_V_4_fu_697_p2();
    void thread_ret_V_5_fu_893_p3();
    void thread_ret_V_6_fu_924_p3();
    void thread_ret_V_fu_735_p2();
    void thread_rhs_V_fu_731_p1();
    void thread_second_order_float_2_address0();
    void thread_second_order_float_2_ce0();
    void thread_second_order_float_3_address0();
    void thread_second_order_float_3_ce0();
    void thread_second_order_float_s_address0();
    void thread_second_order_float_s_ce0();
    void thread_select_ln1310_fu_522_p3();
    void thread_select_ln271_fu_850_p3();
    void thread_select_ln272_1_fu_671_p3();
    void thread_select_ln272_fu_725_p3();
    void thread_select_ln300_2_fu_911_p3();
    void thread_select_ln307_fu_861_p0();
    void thread_select_ln307_fu_861_p3();
    void thread_select_ln311_1_fu_886_p3();
    void thread_select_ln311_fu_878_p3();
    void thread_select_ln482_fu_428_p3();
    void thread_sext_ln1146_1_fu_693_p1();
    void thread_sext_ln1146_fu_684_p1();
    void thread_sext_ln1311_1_fu_501_p1();
    void thread_sext_ln1311_fu_498_p1();
    void thread_sext_ln1334_fu_462_p1();
    void thread_sext_ln657_fu_681_p1();
    void thread_shl_ln1253_fu_516_p2();
    void thread_sin_basis_fu_580_p2();
    void thread_sub_ln1311_fu_474_p2();
    void thread_tmp_1_fu_270_p4();
    void thread_tmp_V_1_fu_246_p1();
    void thread_tmp_V_2_fu_754_p4();
    void thread_tmp_V_3_fu_764_p1();
    void thread_tmp_V_fu_236_p4();
    void thread_trunc_ln601_fu_285_p1();
    void thread_trunc_ln745_fu_359_p1();
    void thread_ush_fu_480_p3();
    void thread_val_assign_fu_411_p3();
    void thread_xor_ln25_fu_574_p0();
    void thread_xor_ln25_fu_574_p2();
    void thread_xor_ln271_fu_660_p2();
    void thread_xor_ln300_fu_905_p2();
    void thread_xor_ln311_fu_868_p2();
    void thread_zext_ln1253_fu_435_p1();
    void thread_zext_ln1287_1_fu_512_p1();
    void thread_zext_ln1287_fu_504_p1();
    void thread_zext_ln498_1_fu_280_p1();
    void thread_zext_ln498_fu_594_p1();
    void thread_zext_ln655_fu_453_p1();
    void thread_zext_ln744_fu_289_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
