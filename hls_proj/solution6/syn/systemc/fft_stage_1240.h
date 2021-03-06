// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fft_stage_1240_HH_
#define _fft_stage_1240_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "music_fsub_32ns_3bkb.h"
#include "music_fadd_32ns_3cud.h"
#include "music_fmul_32ns_3dEe.h"
#include "fft_stage_1237_W_eOg.h"
#include "fft_stage_1237_W_fYi.h"

namespace ap_rtl {

struct fft_stage_1240 : public sc_module {
    // Port declarations 35
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > X_R_4_address0;
    sc_out< sc_logic > X_R_4_ce0;
    sc_in< sc_lv<32> > X_R_4_q0;
    sc_out< sc_lv<10> > X_R_4_address1;
    sc_out< sc_logic > X_R_4_ce1;
    sc_in< sc_lv<32> > X_R_4_q1;
    sc_out< sc_lv<10> > X_I_4_address0;
    sc_out< sc_logic > X_I_4_ce0;
    sc_in< sc_lv<32> > X_I_4_q0;
    sc_out< sc_lv<10> > X_I_4_address1;
    sc_out< sc_logic > X_I_4_ce1;
    sc_in< sc_lv<32> > X_I_4_q1;
    sc_out< sc_lv<10> > Out_R_5_address0;
    sc_out< sc_logic > Out_R_5_ce0;
    sc_out< sc_logic > Out_R_5_we0;
    sc_out< sc_lv<32> > Out_R_5_d0;
    sc_out< sc_lv<10> > Out_R_5_address1;
    sc_out< sc_logic > Out_R_5_ce1;
    sc_out< sc_logic > Out_R_5_we1;
    sc_out< sc_lv<32> > Out_R_5_d1;
    sc_out< sc_lv<10> > Out_I_5_address0;
    sc_out< sc_logic > Out_I_5_ce0;
    sc_out< sc_logic > Out_I_5_we0;
    sc_out< sc_lv<32> > Out_I_5_d0;
    sc_out< sc_lv<10> > Out_I_5_address1;
    sc_out< sc_logic > Out_I_5_ce1;
    sc_out< sc_logic > Out_I_5_we1;
    sc_out< sc_lv<32> > Out_I_5_d1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    fft_stage_1240(sc_module_name name);
    SC_HAS_PROCESS(fft_stage_1240);

    ~fft_stage_1240();

    sc_trace_file* mVcdFile;

    fft_stage_1237_W_eOg* W_real274_U;
    fft_stage_1237_W_fYi* W_imag266_U;
    music_fsub_32ns_3bkb<1,5,32,32,32>* music_fsub_32ns_3bkb_U64;
    music_fadd_32ns_3cud<1,5,32,32,32>* music_fadd_32ns_3cud_U65;
    music_fsub_32ns_3bkb<1,5,32,32,32>* music_fsub_32ns_3bkb_U66;
    music_fsub_32ns_3bkb<1,5,32,32,32>* music_fsub_32ns_3bkb_U67;
    music_fadd_32ns_3cud<1,5,32,32,32>* music_fadd_32ns_3cud_U68;
    music_fadd_32ns_3cud<1,5,32,32,32>* music_fadd_32ns_3cud_U69;
    music_fmul_32ns_3dEe<1,4,32,32,32>* music_fmul_32ns_3dEe_U70;
    music_fmul_32ns_3dEe<1,4,32,32,32>* music_fmul_32ns_3dEe_U71;
    music_fmul_32ns_3dEe<1,4,32,32,32>* music_fmul_32ns_3dEe_U72;
    music_fmul_32ns_3dEe<1,4,32,32,32>* music_fmul_32ns_3dEe_U73;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > W_real274_address0;
    sc_signal< sc_logic > W_real274_ce0;
    sc_signal< sc_lv<32> > W_real274_q0;
    sc_signal< sc_lv<9> > W_imag266_address0;
    sc_signal< sc_logic > W_imag266_ce0;
    sc_signal< sc_lv<32> > W_imag266_q0;
    sc_signal< sc_lv<10> > indvar_flatten_reg_186;
    sc_signal< sc_lv<5> > j_0_reg_197;
    sc_signal< sc_lv<6> > t_0_reg_208;
    sc_signal< sc_lv<1> > icmp_ln145_fu_271_p2;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter16;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter6_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter7_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter8_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter9_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter10_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter11_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter12_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter13_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter14_reg;
    sc_signal< sc_lv<1> > icmp_ln145_reg_372_pp0_iter15_reg;
    sc_signal< sc_lv<10> > add_ln145_fu_277_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > select_ln145_12_fu_329_p3;
    sc_signal< sc_lv<5> > select_ln145_12_reg_391;
    sc_signal< sc_lv<10> > i_fu_341_p3;
    sc_signal< sc_lv<10> > i_reg_396;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter1_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter2_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter3_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter4_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter5_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter6_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter7_reg;
    sc_signal< sc_lv<10> > i_reg_396_pp0_iter8_reg;
    sc_signal< sc_lv<64> > zext_ln156_fu_355_p1;
    sc_signal< sc_lv<64> > zext_ln156_reg_401;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter3_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter4_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter5_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter6_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter7_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter8_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter9_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter10_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter11_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter12_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter13_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter14_reg;
    sc_signal< sc_lv<64> > zext_ln156_reg_401_pp0_iter15_reg;
    sc_signal< sc_lv<6> > t_fu_361_p2;
    sc_signal< sc_lv<32> > W_real274_load_reg_422;
    sc_signal< sc_lv<32> > W_imag266_load_reg_428;
    sc_signal< sc_lv<32> > X_R_4_load_reg_434;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > X_I_4_load_reg_440;
    sc_signal< sc_lv<32> > grp_fu_243_p2;
    sc_signal< sc_lv<32> > tmp_reg_446;
    sc_signal< sc_lv<32> > grp_fu_247_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_451;
    sc_signal< sc_lv<32> > grp_fu_251_p2;
    sc_signal< sc_lv<32> > tmp_62_reg_456;
    sc_signal< sc_lv<32> > grp_fu_255_p2;
    sc_signal< sc_lv<32> > tmp_63_reg_461;
    sc_signal< sc_lv<64> > zext_ln158_fu_367_p1;
    sc_signal< sc_lv<64> > zext_ln158_reg_466;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter10_reg;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter11_reg;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter12_reg;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter13_reg;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter14_reg;
    sc_signal< sc_lv<64> > zext_ln158_reg_466_pp0_iter15_reg;
    sc_signal< sc_lv<32> > grp_fu_219_p2;
    sc_signal< sc_lv<32> > temp_R_reg_482;
    sc_signal< sc_lv<32> > grp_fu_223_p2;
    sc_signal< sc_lv<32> > temp_I_reg_488;
    sc_signal< sc_lv<32> > X_R_4_load_1_reg_494;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_lv<32> > X_I_4_load_1_reg_500;
    sc_signal< sc_lv<32> > grp_fu_227_p2;
    sc_signal< sc_lv<32> > tmp_64_reg_506;
    sc_signal< sc_lv<32> > grp_fu_231_p2;
    sc_signal< sc_lv<32> > tmp_65_reg_511;
    sc_signal< sc_lv<32> > grp_fu_235_p2;
    sc_signal< sc_lv<32> > tmp_66_reg_516;
    sc_signal< sc_lv<32> > grp_fu_239_p2;
    sc_signal< sc_lv<32> > tmp_67_reg_521;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_lv<5> > ap_phi_mux_j_0_phi_fu_201_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln145_fu_323_p1;
    sc_signal< sc_lv<4> > trunc_ln152_fu_259_p1;
    sc_signal< sc_lv<1> > icmp_ln148_fu_289_p2;
    sc_signal< sc_lv<5> > j_fu_283_p2;
    sc_signal< sc_lv<4> > trunc_ln152_5_fu_303_p1;
    sc_signal< sc_lv<9> > k_mid1_fu_307_p3;
    sc_signal< sc_lv<9> > k_fu_263_p3;
    sc_signal< sc_lv<9> > select_ln145_11_fu_315_p3;
    sc_signal< sc_lv<6> > select_ln145_fu_295_p3;
    sc_signal< sc_lv<5> > trunc_ln149_fu_337_p1;
    sc_signal< sc_lv<10> > i_lower_fu_349_p2;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state19;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<10> ap_const_lv10_10;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Out_I_5_address0();
    void thread_Out_I_5_address1();
    void thread_Out_I_5_ce0();
    void thread_Out_I_5_ce1();
    void thread_Out_I_5_d0();
    void thread_Out_I_5_d1();
    void thread_Out_I_5_we0();
    void thread_Out_I_5_we1();
    void thread_Out_R_5_address0();
    void thread_Out_R_5_address1();
    void thread_Out_R_5_ce0();
    void thread_Out_R_5_ce1();
    void thread_Out_R_5_d0();
    void thread_Out_R_5_d1();
    void thread_Out_R_5_we0();
    void thread_Out_R_5_we1();
    void thread_W_imag266_address0();
    void thread_W_imag266_ce0();
    void thread_W_real274_address0();
    void thread_W_real274_ce0();
    void thread_X_I_4_address0();
    void thread_X_I_4_address1();
    void thread_X_I_4_ce0();
    void thread_X_I_4_ce1();
    void thread_X_R_4_address0();
    void thread_X_R_4_address1();
    void thread_X_R_4_ce0();
    void thread_X_R_4_ce1();
    void thread_add_ln145_fu_277_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state19();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter8();
    void thread_ap_block_state11_pp0_stage0_iter9();
    void thread_ap_block_state12_pp0_stage0_iter10();
    void thread_ap_block_state13_pp0_stage0_iter11();
    void thread_ap_block_state14_pp0_stage0_iter12();
    void thread_ap_block_state15_pp0_stage0_iter13();
    void thread_ap_block_state16_pp0_stage0_iter14();
    void thread_ap_block_state17_pp0_stage0_iter15();
    void thread_ap_block_state18_pp0_stage0_iter16();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_j_0_phi_fu_201_p4();
    void thread_ap_ready();
    void thread_i_fu_341_p3();
    void thread_i_lower_fu_349_p2();
    void thread_icmp_ln145_fu_271_p2();
    void thread_icmp_ln148_fu_289_p2();
    void thread_j_fu_283_p2();
    void thread_k_fu_263_p3();
    void thread_k_mid1_fu_307_p3();
    void thread_select_ln145_11_fu_315_p3();
    void thread_select_ln145_12_fu_329_p3();
    void thread_select_ln145_fu_295_p3();
    void thread_t_fu_361_p2();
    void thread_trunc_ln149_fu_337_p1();
    void thread_trunc_ln152_5_fu_303_p1();
    void thread_trunc_ln152_fu_259_p1();
    void thread_zext_ln145_fu_323_p1();
    void thread_zext_ln156_fu_355_p1();
    void thread_zext_ln158_fu_367_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
