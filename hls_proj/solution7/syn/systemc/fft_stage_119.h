// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fft_stage_119_HH_
#define _fft_stage_119_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "music_faddfsub_32bkb.h"
#include "music_fsub_32ns_3cud.h"
#include "music_fadd_32ns_3dEe.h"
#include "music_fmul_32ns_3eOg.h"
#include "fft_stage_119_W_rfYi.h"
#include "fft_stage_119_W_ig8j.h"

namespace ap_rtl {

struct fft_stage_119 : public sc_module {
    // Port declarations 35
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > X_R_address0;
    sc_out< sc_logic > X_R_ce0;
    sc_in< sc_lv<32> > X_R_q0;
    sc_out< sc_lv<10> > X_R_address1;
    sc_out< sc_logic > X_R_ce1;
    sc_in< sc_lv<32> > X_R_q1;
    sc_out< sc_lv<10> > X_I_address0;
    sc_out< sc_logic > X_I_ce0;
    sc_in< sc_lv<32> > X_I_q0;
    sc_out< sc_lv<10> > X_I_address1;
    sc_out< sc_logic > X_I_ce1;
    sc_in< sc_lv<32> > X_I_q1;
    sc_out< sc_lv<10> > Out_R_address0;
    sc_out< sc_logic > Out_R_ce0;
    sc_out< sc_logic > Out_R_we0;
    sc_out< sc_lv<32> > Out_R_d0;
    sc_out< sc_lv<10> > Out_R_address1;
    sc_out< sc_logic > Out_R_ce1;
    sc_out< sc_logic > Out_R_we1;
    sc_out< sc_lv<32> > Out_R_d1;
    sc_out< sc_lv<10> > Out_I_address0;
    sc_out< sc_logic > Out_I_ce0;
    sc_out< sc_logic > Out_I_we0;
    sc_out< sc_lv<32> > Out_I_d0;
    sc_out< sc_lv<10> > Out_I_address1;
    sc_out< sc_logic > Out_I_ce1;
    sc_out< sc_logic > Out_I_we1;
    sc_out< sc_lv<32> > Out_I_d1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    fft_stage_119(sc_module_name name);
    SC_HAS_PROCESS(fft_stage_119);

    ~fft_stage_119();

    sc_trace_file* mVcdFile;

    fft_stage_119_W_rfYi* W_real42_U;
    fft_stage_119_W_ig8j* W_imag33_U;
    music_faddfsub_32bkb<1,5,32,32,32>* music_faddfsub_32bkb_U17;
    music_fsub_32ns_3cud<1,5,32,32,32>* music_fsub_32ns_3cud_U18;
    music_fadd_32ns_3dEe<1,5,32,32,32>* music_fadd_32ns_3dEe_U19;
    music_fmul_32ns_3eOg<1,4,32,32,32>* music_fmul_32ns_3eOg_U20;
    music_fmul_32ns_3eOg<1,4,32,32,32>* music_fmul_32ns_3eOg_U21;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > W_real42_address0;
    sc_signal< sc_logic > W_real42_ce0;
    sc_signal< sc_lv<32> > W_real42_q0;
    sc_signal< sc_lv<9> > W_imag33_address0;
    sc_signal< sc_logic > W_imag33_ce0;
    sc_signal< sc_lv<32> > W_imag33_q0;
    sc_signal< sc_lv<10> > indvar_flatten_reg_188;
    sc_signal< sc_lv<2> > j_0_reg_199;
    sc_signal< sc_lv<9> > t_0_reg_210;
    sc_signal< sc_lv<32> > grp_fu_225_p2;
    sc_signal< sc_lv<32> > reg_241;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state7_pp0_stage1_iter2;
    sc_signal< bool > ap_block_state9_pp0_stage1_iter3;
    sc_signal< bool > ap_block_state11_pp0_stage1_iter4;
    sc_signal< bool > ap_block_state13_pp0_stage1_iter5;
    sc_signal< bool > ap_block_state15_pp0_stage1_iter6;
    sc_signal< bool > ap_block_state17_pp0_stage1_iter7;
    sc_signal< bool > ap_block_state19_pp0_stage1_iter8;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter7_reg;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter8;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > grp_fu_229_p2;
    sc_signal< sc_lv<32> > reg_247;
    sc_signal< sc_lv<1> > icmp_ln181_fu_265_p2;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln181_reg_364_pp0_iter8_reg;
    sc_signal< sc_lv<10> > add_ln181_fu_271_p2;
    sc_signal< sc_lv<10> > add_ln181_reg_368;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<9> > select_ln181_fu_289_p3;
    sc_signal< sc_lv<9> > select_ln181_reg_373;
    sc_signal< sc_lv<2> > select_ln181_21_fu_323_p3;
    sc_signal< sc_lv<2> > select_ln181_21_reg_388;
    sc_signal< sc_lv<10> > i_fu_335_p3;
    sc_signal< sc_lv<10> > i_reg_393;
    sc_signal< sc_lv<10> > i_reg_393_pp0_iter1_reg;
    sc_signal< sc_lv<10> > i_reg_393_pp0_iter2_reg;
    sc_signal< sc_lv<10> > i_reg_393_pp0_iter3_reg;
    sc_signal< sc_lv<64> > zext_ln194_fu_349_p1;
    sc_signal< sc_lv<64> > zext_ln194_reg_398;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter3_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter4_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter5_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter6_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter7_reg;
    sc_signal< sc_lv<64> > zext_ln194_reg_398_pp0_iter8_reg;
    sc_signal< sc_lv<32> > W_real42_load_reg_414;
    sc_signal< sc_lv<32> > W_imag33_load_reg_419;
    sc_signal< sc_lv<32> > X_R_load_reg_424;
    sc_signal< sc_lv<32> > X_I_load_reg_430;
    sc_signal< sc_lv<9> > t_fu_355_p2;
    sc_signal< sc_lv<9> > t_reg_436;
    sc_signal< sc_lv<32> > grp_fu_233_p2;
    sc_signal< sc_lv<32> > tmp_reg_441;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<32> > grp_fu_237_p2;
    sc_signal< sc_lv<32> > tmp_1_reg_446;
    sc_signal< sc_lv<32> > tmp_2_reg_451;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<32> > tmp_3_reg_456;
    sc_signal< sc_lv<64> > zext_ln196_fu_360_p1;
    sc_signal< sc_lv<64> > zext_ln196_reg_461;
    sc_signal< sc_lv<64> > zext_ln196_reg_461_pp0_iter5_reg;
    sc_signal< sc_lv<64> > zext_ln196_reg_461_pp0_iter6_reg;
    sc_signal< sc_lv<64> > zext_ln196_reg_461_pp0_iter7_reg;
    sc_signal< sc_lv<64> > zext_ln196_reg_461_pp0_iter8_reg;
    sc_signal< sc_lv<32> > X_R_load_1_reg_473;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<32> > grp_fu_221_p2;
    sc_signal< sc_lv<32> > temp_R_reg_479;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<32> > temp_I_reg_490;
    sc_signal< sc_lv<32> > X_I_load_1_reg_496;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_lv<10> > ap_phi_mux_indvar_flatten_phi_fu_192_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_j_0_phi_fu_203_p4;
    sc_signal< sc_lv<9> > ap_phi_mux_t_0_phi_fu_214_p4;
    sc_signal< sc_lv<64> > zext_ln181_fu_317_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<32> > grp_fu_221_p0;
    sc_signal< sc_lv<32> > grp_fu_221_p1;
    sc_signal< sc_lv<32> > grp_fu_225_p0;
    sc_signal< sc_lv<32> > grp_fu_225_p1;
    sc_signal< sc_lv<32> > grp_fu_229_p0;
    sc_signal< sc_lv<32> > grp_fu_229_p1;
    sc_signal< sc_lv<32> > grp_fu_233_p0;
    sc_signal< sc_lv<32> > grp_fu_237_p0;
    sc_signal< sc_lv<1> > trunc_ln190_fu_253_p1;
    sc_signal< sc_lv<1> > icmp_ln184_fu_283_p2;
    sc_signal< sc_lv<2> > j_fu_277_p2;
    sc_signal< sc_lv<1> > trunc_ln190_8_fu_297_p1;
    sc_signal< sc_lv<9> > k_mid1_fu_301_p3;
    sc_signal< sc_lv<9> > k_fu_257_p3;
    sc_signal< sc_lv<9> > select_ln181_20_fu_309_p3;
    sc_signal< sc_lv<8> > trunc_ln187_fu_331_p1;
    sc_signal< sc_lv<10> > i_lower_fu_343_p2;
    sc_signal< sc_lv<2> > grp_fu_221_opcode;
    sc_signal< bool > ap_block_pp0_stage1_00001;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_509;
    sc_signal< bool > ap_condition_513;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage1;
    static const sc_lv<4> ap_ST_fsm_state20;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Out_I_address0();
    void thread_Out_I_address1();
    void thread_Out_I_ce0();
    void thread_Out_I_ce1();
    void thread_Out_I_d0();
    void thread_Out_I_d1();
    void thread_Out_I_we0();
    void thread_Out_I_we1();
    void thread_Out_R_address0();
    void thread_Out_R_address1();
    void thread_Out_R_ce0();
    void thread_Out_R_ce1();
    void thread_Out_R_d0();
    void thread_Out_R_d1();
    void thread_Out_R_we0();
    void thread_Out_R_we1();
    void thread_W_imag33_address0();
    void thread_W_imag33_ce0();
    void thread_W_real42_address0();
    void thread_W_real42_ce0();
    void thread_X_I_address0();
    void thread_X_I_address1();
    void thread_X_I_ce0();
    void thread_X_I_ce1();
    void thread_X_R_address0();
    void thread_X_R_address1();
    void thread_X_R_ce0();
    void thread_X_R_ce1();
    void thread_add_ln181_fu_271_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state20();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_00001();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter4();
    void thread_ap_block_state11_pp0_stage1_iter4();
    void thread_ap_block_state12_pp0_stage0_iter5();
    void thread_ap_block_state13_pp0_stage1_iter5();
    void thread_ap_block_state14_pp0_stage0_iter6();
    void thread_ap_block_state15_pp0_stage1_iter6();
    void thread_ap_block_state16_pp0_stage0_iter7();
    void thread_ap_block_state17_pp0_stage1_iter7();
    void thread_ap_block_state18_pp0_stage0_iter8();
    void thread_ap_block_state19_pp0_stage1_iter8();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage1_iter1();
    void thread_ap_block_state6_pp0_stage0_iter2();
    void thread_ap_block_state7_pp0_stage1_iter2();
    void thread_ap_block_state8_pp0_stage0_iter3();
    void thread_ap_block_state9_pp0_stage1_iter3();
    void thread_ap_condition_509();
    void thread_ap_condition_513();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_192_p4();
    void thread_ap_phi_mux_j_0_phi_fu_203_p4();
    void thread_ap_phi_mux_t_0_phi_fu_214_p4();
    void thread_ap_ready();
    void thread_grp_fu_221_opcode();
    void thread_grp_fu_221_p0();
    void thread_grp_fu_221_p1();
    void thread_grp_fu_225_p0();
    void thread_grp_fu_225_p1();
    void thread_grp_fu_229_p0();
    void thread_grp_fu_229_p1();
    void thread_grp_fu_233_p0();
    void thread_grp_fu_237_p0();
    void thread_i_fu_335_p3();
    void thread_i_lower_fu_343_p2();
    void thread_icmp_ln181_fu_265_p2();
    void thread_icmp_ln184_fu_283_p2();
    void thread_j_fu_277_p2();
    void thread_k_fu_257_p3();
    void thread_k_mid1_fu_301_p3();
    void thread_select_ln181_20_fu_309_p3();
    void thread_select_ln181_21_fu_323_p3();
    void thread_select_ln181_fu_289_p3();
    void thread_t_fu_355_p2();
    void thread_trunc_ln187_fu_331_p1();
    void thread_trunc_ln190_8_fu_297_p1();
    void thread_trunc_ln190_fu_253_p1();
    void thread_zext_ln181_fu_317_p1();
    void thread_zext_ln194_fu_349_p1();
    void thread_zext_ln196_fu_360_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
