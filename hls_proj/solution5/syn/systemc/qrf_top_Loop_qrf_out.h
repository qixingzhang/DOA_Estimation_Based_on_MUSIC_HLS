// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _qrf_top_Loop_qrf_out_HH_
#define _qrf_top_Loop_qrf_out_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct qrf_top_Loop_qrf_out : public sc_module {
    // Port declarations 35
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > R_M_real_address0;
    sc_out< sc_logic > R_M_real_ce0;
    sc_out< sc_logic > R_M_real_we0;
    sc_out< sc_lv<32> > R_M_real_d0;
    sc_out< sc_lv<4> > Ri_M_real_address0;
    sc_out< sc_logic > Ri_M_real_ce0;
    sc_in< sc_lv<32> > Ri_M_real_q0;
    sc_out< sc_lv<4> > R_M_imag_address0;
    sc_out< sc_logic > R_M_imag_ce0;
    sc_out< sc_logic > R_M_imag_we0;
    sc_out< sc_lv<32> > R_M_imag_d0;
    sc_out< sc_lv<4> > Ri_M_imag_address0;
    sc_out< sc_logic > Ri_M_imag_ce0;
    sc_in< sc_lv<32> > Ri_M_imag_q0;
    sc_out< sc_lv<4> > Qi_M_real_address0;
    sc_out< sc_logic > Qi_M_real_ce0;
    sc_in< sc_lv<32> > Qi_M_real_q0;
    sc_out< sc_lv<4> > Qi_M_imag_address0;
    sc_out< sc_logic > Qi_M_imag_ce0;
    sc_in< sc_lv<32> > Qi_M_imag_q0;
    sc_out< sc_lv<4> > Q_M_real_address0;
    sc_out< sc_logic > Q_M_real_ce0;
    sc_out< sc_logic > Q_M_real_we0;
    sc_out< sc_lv<32> > Q_M_real_d0;
    sc_out< sc_lv<4> > Q_M_imag_address0;
    sc_out< sc_logic > Q_M_imag_ce0;
    sc_out< sc_logic > Q_M_imag_we0;
    sc_out< sc_lv<32> > Q_M_imag_d0;


    // Module declarations
    qrf_top_Loop_qrf_out(sc_module_name name);
    SC_HAS_PROCESS(qrf_top_Loop_qrf_out);

    ~qrf_top_Loop_qrf_out();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > c15_0_i_reg_175;
    sc_signal< sc_lv<3> > c16_0_i_reg_186;
    sc_signal< sc_lv<1> > icmp_ln532_fu_197_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > r_fu_203_p2;
    sc_signal< sc_lv<3> > r_reg_326;
    sc_signal< sc_lv<6> > zext_ln545_fu_209_p1;
    sc_signal< sc_lv<6> > zext_ln545_reg_331;
    sc_signal< sc_lv<6> > zext_ln533_fu_221_p1;
    sc_signal< sc_lv<6> > zext_ln533_reg_336;
    sc_signal< sc_lv<1> > icmp_ln533_fu_225_p2;
    sc_signal< sc_lv<1> > icmp_ln533_reg_342;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<3> > c_fu_231_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > tmp_2_fu_252_p3;
    sc_signal< sc_lv<5> > tmp_2_reg_361;
    sc_signal< sc_lv<1> > icmp_ln541_fu_289_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state6_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<3> > c_1_fu_295_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<1> > icmp_ln543_fu_301_p2;
    sc_signal< sc_lv<1> > icmp_ln543_reg_375;
    sc_signal< sc_lv<64> > zext_ln545_2_fu_316_p1;
    sc_signal< sc_lv<64> > zext_ln545_2_reg_379;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state6;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<3> > r14_0_i_reg_163;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<64> > zext_ln538_1_fu_246_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln538_3_fu_268_p1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<5> > tmp_fu_213_p3;
    sc_signal< sc_lv<6> > zext_ln538_fu_237_p1;
    sc_signal< sc_lv<6> > add_ln538_fu_241_p2;
    sc_signal< sc_lv<6> > zext_ln538_2_fu_260_p1;
    sc_signal< sc_lv<6> > add_ln538_1_fu_263_p2;
    sc_signal< sc_lv<32> > bitcast_ln155_fu_274_p1;
    sc_signal< sc_lv<32> > xor_ln155_fu_278_p2;
    sc_signal< sc_lv<6> > zext_ln545_1_fu_307_p1;
    sc_signal< sc_lv<6> > add_ln545_fu_311_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_pp1_stage0;
    static const sc_lv<6> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_80000000;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Q_M_imag_address0();
    void thread_Q_M_imag_ce0();
    void thread_Q_M_imag_d0();
    void thread_Q_M_imag_we0();
    void thread_Q_M_real_address0();
    void thread_Q_M_real_ce0();
    void thread_Q_M_real_d0();
    void thread_Q_M_real_we0();
    void thread_Qi_M_imag_address0();
    void thread_Qi_M_imag_ce0();
    void thread_Qi_M_real_address0();
    void thread_Qi_M_real_ce0();
    void thread_R_M_imag_address0();
    void thread_R_M_imag_ce0();
    void thread_R_M_imag_d0();
    void thread_R_M_imag_we0();
    void thread_R_M_real_address0();
    void thread_R_M_real_ce0();
    void thread_R_M_real_d0();
    void thread_R_M_real_we0();
    void thread_Ri_M_imag_address0();
    void thread_Ri_M_imag_ce0();
    void thread_Ri_M_real_address0();
    void thread_Ri_M_real_ce0();
    void thread_add_ln538_1_fu_263_p2();
    void thread_add_ln538_fu_241_p2();
    void thread_add_ln545_fu_311_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state6_pp1_stage0_iter0();
    void thread_ap_block_state7_pp1_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_condition_pp1_exit_iter0_state6();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_ready();
    void thread_bitcast_ln155_fu_274_p1();
    void thread_c_1_fu_295_p2();
    void thread_c_fu_231_p2();
    void thread_icmp_ln532_fu_197_p2();
    void thread_icmp_ln533_fu_225_p2();
    void thread_icmp_ln541_fu_289_p2();
    void thread_icmp_ln543_fu_301_p2();
    void thread_r_fu_203_p2();
    void thread_tmp_2_fu_252_p3();
    void thread_tmp_fu_213_p3();
    void thread_xor_ln155_fu_278_p2();
    void thread_zext_ln533_fu_221_p1();
    void thread_zext_ln538_1_fu_246_p1();
    void thread_zext_ln538_2_fu_260_p1();
    void thread_zext_ln538_3_fu_268_p1();
    void thread_zext_ln538_fu_237_p1();
    void thread_zext_ln545_1_fu_307_p1();
    void thread_zext_ln545_2_fu_316_p1();
    void thread_zext_ln545_fu_209_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
