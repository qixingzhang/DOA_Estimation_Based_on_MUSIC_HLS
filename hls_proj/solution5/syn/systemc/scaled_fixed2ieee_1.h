// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _scaled_fixed2ieee_1_HH_
#define _scaled_fixed2ieee_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scaled_fixed2ieeebkb.h"
#include "scaled_fixed2ieeecud.h"

namespace ap_rtl {

struct scaled_fixed2ieee_1 : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<29> > in_V;
    sc_in< sc_lv<9> > prescale;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    scaled_fixed2ieee_1(sc_module_name name);
    SC_HAS_PROCESS(scaled_fixed2ieee_1);

    ~scaled_fixed2ieee_1();

    sc_trace_file* mVcdFile;

    scaled_fixed2ieeebkb* out_bits_V_U;
    scaled_fixed2ieeecud* c_U;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > i_fu_272_p2;
    sc_signal< sc_lv<2> > i_reg_483;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln307_fu_278_p1;
    sc_signal< sc_lv<64> > zext_ln307_reg_488;
    sc_signal< sc_lv<1> > icmp_ln306_fu_266_p2;
    sc_signal< sc_lv<28> > trunc_ln313_fu_302_p1;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln313_fu_306_p2;
    sc_signal< sc_lv<1> > icmp_ln313_reg_503;
    sc_signal< sc_lv<2> > i_1_fu_312_p2;
    sc_signal< sc_lv<2> > i_1_reg_507;
    sc_signal< sc_lv<32> > shift_fu_323_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<29> > r_V_fu_376_p1;
    sc_signal< sc_lv<1> > out_bits_V_address0;
    sc_signal< sc_logic > out_bits_V_ce0;
    sc_signal< sc_logic > out_bits_V_we0;
    sc_signal< sc_lv<32> > out_bits_V_d0;
    sc_signal< sc_lv<32> > out_bits_V_q0;
    sc_signal< sc_lv<1> > out_bits_V_address1;
    sc_signal< sc_logic > out_bits_V_ce1;
    sc_signal< sc_logic > out_bits_V_we1;
    sc_signal< sc_lv<32> > out_bits_V_d1;
    sc_signal< sc_lv<1> > c_address0;
    sc_signal< sc_logic > c_ce0;
    sc_signal< sc_logic > c_we0;
    sc_signal< sc_lv<32> > c_d0;
    sc_signal< sc_lv<32> > c_q0;
    sc_signal< sc_lv<2> > i1_0_reg_147;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<29> > p_0107_0_reg_158;
    sc_signal< sc_lv<1> > icmp_ln316_fu_385_p2;
    sc_signal< sc_lv<32> > shift_0_reg_168;
    sc_signal< sc_lv<2> > i2_0_reg_180;
    sc_signal< sc_lv<28> > ap_phi_mux_p_Val2_s_phi_fu_194_p4;
    sc_signal< sc_lv<28> > p_Val2_s_reg_191;
    sc_signal< sc_lv<28> > trunc_ln1287_fu_380_p1;
    sc_signal< sc_lv<32> > ap_phi_mux_shift_1_phi_fu_203_p4;
    sc_signal< sc_lv<32> > shift_1_reg_200;
    sc_signal< sc_lv<64> > zext_ln314_fu_318_p1;
    sc_signal< sc_lv<16> > p_Result_1_fu_210_p4;
    sc_signal< sc_lv<17> > tmp_3_fu_220_p3;
    sc_signal< sc_lv<13> > trunc_ln566_fu_241_p1;
    sc_signal< sc_lv<14> > tmp_4_fu_245_p3;
    sc_signal< sc_lv<32> > p_Result_s_fu_283_p4;
    sc_signal< sc_lv<1> > isNeg_fu_330_p3;
    sc_signal< sc_lv<32> > sub_ln1311_fu_338_p2;
    sc_signal< sc_lv<32> > zext_ln1287_fu_352_p1;
    sc_signal< sc_lv<32> > ush_fu_344_p3;
    sc_signal< sc_lv<32> > lshr_ln1287_fu_356_p2;
    sc_signal< sc_lv<32> > shl_ln1253_fu_362_p2;
    sc_signal< sc_lv<32> > select_ln1310_fu_368_p3;
    sc_signal< sc_lv<9> > sub_ln324_fu_391_p2;
    sc_signal< sc_lv<32> > sext_ln324_fu_396_p1;
    sc_signal< sc_lv<32> > newexp_fu_400_p2;
    sc_signal< sc_lv<1> > tmp_fu_406_p3;
    sc_signal< sc_lv<1> > icmp_ln1452_fu_414_p2;
    sc_signal< sc_lv<1> > or_ln330_fu_419_p2;
    sc_signal< sc_lv<23> > phitmp1_fu_429_p4;
    sc_signal< sc_lv<8> > empty_fu_425_p1;
    sc_signal< sc_lv<8> > out_exp_V_fu_447_p3;
    sc_signal< sc_lv<23> > significand_V_fu_439_p3;
    sc_signal< sc_lv<32> > p_Result_22_fu_455_p4;
    sc_signal< sc_lv<32> > bitcast_ln348_fu_465_p1;
    sc_signal< sc_lv<32> > ap_return_preg;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<9> ap_const_lv9_7F;
    static const sc_lv<29> ap_const_lv29_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_p_Val2_s_phi_fu_194_p4();
    void thread_ap_phi_mux_shift_1_phi_fu_203_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln348_fu_465_p1();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_c_d0();
    void thread_c_we0();
    void thread_empty_fu_425_p1();
    void thread_i_1_fu_312_p2();
    void thread_i_fu_272_p2();
    void thread_icmp_ln1452_fu_414_p2();
    void thread_icmp_ln306_fu_266_p2();
    void thread_icmp_ln313_fu_306_p2();
    void thread_icmp_ln316_fu_385_p2();
    void thread_isNeg_fu_330_p3();
    void thread_lshr_ln1287_fu_356_p2();
    void thread_newexp_fu_400_p2();
    void thread_or_ln330_fu_419_p2();
    void thread_out_bits_V_address0();
    void thread_out_bits_V_address1();
    void thread_out_bits_V_ce0();
    void thread_out_bits_V_ce1();
    void thread_out_bits_V_d0();
    void thread_out_bits_V_d1();
    void thread_out_bits_V_we0();
    void thread_out_bits_V_we1();
    void thread_out_exp_V_fu_447_p3();
    void thread_p_Result_1_fu_210_p4();
    void thread_p_Result_22_fu_455_p4();
    void thread_p_Result_s_fu_283_p4();
    void thread_phitmp1_fu_429_p4();
    void thread_r_V_fu_376_p1();
    void thread_select_ln1310_fu_368_p3();
    void thread_sext_ln324_fu_396_p1();
    void thread_shift_fu_323_p2();
    void thread_shl_ln1253_fu_362_p2();
    void thread_significand_V_fu_439_p3();
    void thread_sub_ln1311_fu_338_p2();
    void thread_sub_ln324_fu_391_p2();
    void thread_tmp_3_fu_220_p3();
    void thread_tmp_4_fu_245_p3();
    void thread_tmp_fu_406_p3();
    void thread_trunc_ln1287_fu_380_p1();
    void thread_trunc_ln313_fu_302_p1();
    void thread_trunc_ln566_fu_241_p1();
    void thread_ush_fu_344_p3();
    void thread_zext_ln1287_fu_352_p1();
    void thread_zext_ln307_fu_278_p1();
    void thread_zext_ln314_fu_318_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
