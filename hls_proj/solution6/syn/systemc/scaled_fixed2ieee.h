// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _scaled_fixed2ieee_HH_
#define _scaled_fixed2ieee_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scaled_fixed2ieeeShg.h"
#include "scaled_fixed2ieee_c.h"

namespace ap_rtl {

struct scaled_fixed2ieee : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<63> > in_V;
    sc_in< sc_lv<12> > prescale;
    sc_out< sc_lv<64> > ap_return;


    // Module declarations
    scaled_fixed2ieee(sc_module_name name);
    SC_HAS_PROCESS(scaled_fixed2ieee);

    ~scaled_fixed2ieee();

    sc_trace_file* mVcdFile;

    scaled_fixed2ieeeShg* out_bits_V_U;
    scaled_fixed2ieee_c* c_U;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > i_fu_242_p2;
    sc_signal< sc_lv<2> > i_reg_595;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > sub_ln566_3_fu_329_p2;
    sc_signal< sc_lv<6> > sub_ln566_3_reg_600;
    sc_signal< sc_lv<1> > icmp_ln423_fu_236_p2;
    sc_signal< sc_lv<63> > lshr_ln566_fu_339_p2;
    sc_signal< sc_lv<63> > lshr_ln566_reg_605;
    sc_signal< sc_lv<2> > out_bits_V_addr_1_reg_610;
    sc_signal< sc_lv<3> > i_2_fu_402_p2;
    sc_signal< sc_lv<3> > i_2_reg_618;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln435_fu_408_p1;
    sc_signal< sc_lv<64> > zext_ln435_reg_623;
    sc_signal< sc_lv<1> > icmp_ln434_fu_396_p2;
    sc_signal< sc_lv<1> > icmp_ln441_fu_432_p2;
    sc_signal< sc_lv<1> > icmp_ln441_reg_633;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > i_3_fu_438_p2;
    sc_signal< sc_lv<3> > i_3_reg_637;
    sc_signal< sc_lv<32> > c_q0;
    sc_signal< sc_lv<32> > c_load_reg_647;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > isNeg_reg_654;
    sc_signal< sc_lv<32> > sub_ln1311_fu_457_p2;
    sc_signal< sc_lv<32> > sub_ln1311_reg_660;
    sc_signal< sc_lv<32> > shift_fu_463_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<63> > r_V_17_fu_489_p3;
    sc_signal< sc_lv<1> > icmp_ln1452_fu_501_p2;
    sc_signal< sc_lv<1> > icmp_ln1452_reg_680;
    sc_signal< sc_lv<1> > icmp_ln444_fu_496_p2;
    sc_signal< sc_lv<2> > out_bits_V_address0;
    sc_signal< sc_logic > out_bits_V_ce0;
    sc_signal< sc_lv<4> > out_bits_V_we0;
    sc_signal< sc_lv<32> > out_bits_V_d0;
    sc_signal< sc_lv<32> > out_bits_V_q0;
    sc_signal< sc_lv<2> > c_address0;
    sc_signal< sc_logic > c_ce0;
    sc_signal< sc_logic > c_we0;
    sc_signal< sc_lv<32> > c_d0;
    sc_signal< sc_lv<2> > i_0_reg_161;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > i1_0_reg_172;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<63> > p_0119_0_reg_183;
    sc_signal< sc_lv<32> > shift_0_reg_193;
    sc_signal< sc_lv<3> > i2_0_reg_205;
    sc_signal< sc_lv<63> > p_Val2_5_in_reg_216;
    sc_signal< sc_lv<32> > shift_1_reg_226;
    sc_signal< sc_lv<64> > zext_ln424_fu_248_p1;
    sc_signal< sc_lv<64> > zext_ln442_fu_444_p1;
    sc_signal< sc_lv<32> > tmp_fu_348_p3;
    sc_signal< sc_lv<32> > p_Result_2_fu_383_p5;
    sc_signal< sc_lv<6> > shl_ln_fu_253_p3;
    sc_signal< sc_lv<6> > sub_ln425_fu_267_p2;
    sc_signal< sc_lv<6> > sub_ln424_fu_261_p2;
    sc_signal< sc_lv<1> > icmp_ln566_fu_273_p2;
    sc_signal< sc_lv<6> > sub_ln566_fu_288_p2;
    sc_signal< sc_lv<6> > sub_ln566_2_fu_300_p2;
    sc_signal< sc_lv<63> > tmp_6_fu_279_p4;
    sc_signal< sc_lv<6> > sub_ln566_1_fu_294_p2;
    sc_signal< sc_lv<6> > select_ln566_fu_306_p3;
    sc_signal< sc_lv<6> > select_ln566_2_fu_321_p3;
    sc_signal< sc_lv<63> > select_ln566_1_fu_314_p3;
    sc_signal< sc_lv<63> > zext_ln566_fu_335_p1;
    sc_signal< sc_lv<15> > trunc_ln566_fu_345_p1;
    sc_signal< sc_lv<63> > zext_ln566_1_fu_357_p1;
    sc_signal< sc_lv<63> > lshr_ln566_1_fu_360_p2;
    sc_signal< sc_lv<63> > p_Result_s_fu_366_p2;
    sc_signal< sc_lv<16> > trunc_ln169_fu_371_p1;
    sc_signal< sc_lv<17> > tmp_2_fu_375_p3;
    sc_signal< sc_lv<32> > p_Result_23_fu_413_p4;
    sc_signal< sc_lv<32> > ush_fu_468_p3;
    sc_signal< sc_lv<63> > zext_ln1287_fu_473_p1;
    sc_signal< sc_lv<63> > r_V_fu_477_p2;
    sc_signal< sc_lv<63> > r_V_15_fu_483_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<12> > sub_ln452_fu_506_p2;
    sc_signal< sc_lv<32> > sext_ln452_fu_511_p1;
    sc_signal< sc_lv<32> > newexp_fu_515_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_521_p3;
    sc_signal< sc_lv<1> > or_ln453_fu_529_p2;
    sc_signal< sc_lv<52> > phitmp1_fu_538_p4;
    sc_signal< sc_lv<11> > empty_64_fu_534_p1;
    sc_signal< sc_lv<11> > out_exp_V_fu_556_p3;
    sc_signal< sc_lv<52> > significand_V_fu_548_p3;
    sc_signal< sc_lv<64> > p_Result_24_fu_564_p4;
    sc_signal< sc_lv<64> > bitcast_ln512_fu_574_p1;
    sc_signal< sc_lv<64> > ap_return_preg;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<6> ap_const_lv6_3E;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<17> ap_const_lv17_10000;
    static const sc_lv<63> ap_const_lv63_7FFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<12> ap_const_lv12_3FF;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln512_fu_574_p1();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_c_d0();
    void thread_c_we0();
    void thread_empty_64_fu_534_p1();
    void thread_i_2_fu_402_p2();
    void thread_i_3_fu_438_p2();
    void thread_i_fu_242_p2();
    void thread_icmp_ln1452_fu_501_p2();
    void thread_icmp_ln423_fu_236_p2();
    void thread_icmp_ln434_fu_396_p2();
    void thread_icmp_ln441_fu_432_p2();
    void thread_icmp_ln444_fu_496_p2();
    void thread_icmp_ln566_fu_273_p2();
    void thread_lshr_ln566_1_fu_360_p2();
    void thread_lshr_ln566_fu_339_p2();
    void thread_newexp_fu_515_p2();
    void thread_or_ln453_fu_529_p2();
    void thread_out_bits_V_address0();
    void thread_out_bits_V_ce0();
    void thread_out_bits_V_d0();
    void thread_out_bits_V_we0();
    void thread_out_exp_V_fu_556_p3();
    void thread_p_Result_23_fu_413_p4();
    void thread_p_Result_24_fu_564_p4();
    void thread_p_Result_2_fu_383_p5();
    void thread_p_Result_s_fu_366_p2();
    void thread_phitmp1_fu_538_p4();
    void thread_r_V_15_fu_483_p2();
    void thread_r_V_17_fu_489_p3();
    void thread_r_V_fu_477_p2();
    void thread_select_ln566_1_fu_314_p3();
    void thread_select_ln566_2_fu_321_p3();
    void thread_select_ln566_fu_306_p3();
    void thread_sext_ln452_fu_511_p1();
    void thread_shift_fu_463_p2();
    void thread_shl_ln_fu_253_p3();
    void thread_significand_V_fu_548_p3();
    void thread_sub_ln1311_fu_457_p2();
    void thread_sub_ln424_fu_261_p2();
    void thread_sub_ln425_fu_267_p2();
    void thread_sub_ln452_fu_506_p2();
    void thread_sub_ln566_1_fu_294_p2();
    void thread_sub_ln566_2_fu_300_p2();
    void thread_sub_ln566_3_fu_329_p2();
    void thread_sub_ln566_fu_288_p2();
    void thread_tmp_2_fu_375_p3();
    void thread_tmp_6_fu_279_p4();
    void thread_tmp_8_fu_521_p3();
    void thread_tmp_fu_348_p3();
    void thread_trunc_ln169_fu_371_p1();
    void thread_trunc_ln566_fu_345_p1();
    void thread_ush_fu_468_p3();
    void thread_zext_ln1287_fu_473_p1();
    void thread_zext_ln424_fu_248_p1();
    void thread_zext_ln435_fu_408_p1();
    void thread_zext_ln442_fu_444_p1();
    void thread_zext_ln566_1_fu_357_p1();
    void thread_zext_ln566_fu_335_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
