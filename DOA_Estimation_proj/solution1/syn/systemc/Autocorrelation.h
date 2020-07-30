// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Autocorrelation_HH_
#define _Autocorrelation_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "music_faddfsub_32ibs.h"
#include "music_fmul_32ns_3jbC.h"
#include "music_fdiv_32ns_3ncg.h"

namespace ap_rtl {

struct Autocorrelation : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > X_M_real_address0;
    sc_out< sc_logic > X_M_real_ce0;
    sc_in< sc_lv<32> > X_M_real_q0;
    sc_out< sc_lv<6> > X_M_real_address1;
    sc_out< sc_logic > X_M_real_ce1;
    sc_in< sc_lv<32> > X_M_real_q1;
    sc_out< sc_lv<6> > X_M_imag_address0;
    sc_out< sc_logic > X_M_imag_ce0;
    sc_in< sc_lv<32> > X_M_imag_q0;
    sc_out< sc_lv<6> > X_M_imag_address1;
    sc_out< sc_logic > X_M_imag_ce1;
    sc_in< sc_lv<32> > X_M_imag_q1;
    sc_out< sc_lv<4> > Rx_M_real_address0;
    sc_out< sc_logic > Rx_M_real_ce0;
    sc_out< sc_logic > Rx_M_real_we0;
    sc_out< sc_lv<32> > Rx_M_real_d0;
    sc_out< sc_lv<4> > Rx_M_imag_address0;
    sc_out< sc_logic > Rx_M_imag_ce0;
    sc_out< sc_logic > Rx_M_imag_we0;
    sc_out< sc_lv<32> > Rx_M_imag_d0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    Autocorrelation(sc_module_name name);
    SC_HAS_PROCESS(Autocorrelation);

    ~Autocorrelation();

    sc_trace_file* mVcdFile;

    music_faddfsub_32ibs<1,5,32,32,32>* music_faddfsub_32ibs_U39;
    music_faddfsub_32ibs<1,5,32,32,32>* music_faddfsub_32ibs_U40;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U41;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U42;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U43;
    music_fmul_32ns_3jbC<1,4,32,32,32>* music_fmul_32ns_3jbC_U44;
    music_fdiv_32ns_3ncg<1,16,32,32,32>* music_fdiv_32ns_3ncg_U45;
    music_fdiv_32ns_3ncg<1,16,32,32,32>* music_fdiv_32ns_3ncg_U46;
    sc_signal< sc_lv<43> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > grp_fu_183_p2;
    sc_signal< sc_lv<32> > reg_219;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > grp_fu_189_p2;
    sc_signal< sc_lv<32> > reg_224;
    sc_signal< sc_lv<32> > grp_fu_195_p2;
    sc_signal< sc_lv<32> > reg_229;
    sc_signal< sc_lv<32> > grp_fu_201_p2;
    sc_signal< sc_lv<32> > reg_234;
    sc_signal< sc_lv<32> > grp_fu_173_p2;
    sc_signal< sc_lv<32> > reg_239;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<32> > grp_fu_177_p2;
    sc_signal< sc_lv<32> > reg_245;
    sc_signal< sc_lv<3> > x_fu_257_p2;
    sc_signal< sc_lv<3> > x_reg_374;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > zext_ln104_fu_263_p1;
    sc_signal< sc_lv<7> > zext_ln104_reg_379;
    sc_signal< sc_lv<1> > icmp_ln98_fu_251_p2;
    sc_signal< sc_lv<6> > zext_ln99_fu_275_p1;
    sc_signal< sc_lv<6> > zext_ln99_reg_384;
    sc_signal< sc_lv<3> > y_fu_285_p2;
    sc_signal< sc_lv<3> > y_reg_392;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<7> > zext_ln104_1_fu_291_p1;
    sc_signal< sc_lv<7> > zext_ln104_1_reg_397;
    sc_signal< sc_lv<1> > icmp_ln99_fu_279_p2;
    sc_signal< sc_lv<4> > Rx_M_real_addr11_reg_402;
    sc_signal< sc_lv<4> > Rx_M_imag_addr_reg_407;
    sc_signal< sc_lv<4> > l_fu_316_p2;
    sc_signal< sc_lv<4> > l_reg_415;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln101_fu_310_p2;
    sc_signal< sc_lv<32> > p_t_real_reg_440;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > X_M_imag_load_reg_446;
    sc_signal< sc_lv<32> > p_r_M_real_16_reg_451;
    sc_signal< sc_lv<32> > p_r_M_imag_15_reg_457;
    sc_signal< sc_lv<32> > p_t_imag_fu_365_p1;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<3> > x_0_reg_116;
    sc_signal< sc_lv<3> > y_0_reg_127;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_lv<32> > p_r_M_imag_reg_138;
    sc_signal< sc_lv<32> > p_r_M_real_reg_150;
    sc_signal< sc_lv<4> > l_0_reg_162;
    sc_signal< sc_lv<64> > zext_ln104_3_fu_304_p1;
    sc_signal< sc_lv<64> > zext_ln102_1_fu_339_p1;
    sc_signal< sc_lv<64> > zext_ln102_2_fu_350_p1;
    sc_signal< sc_lv<32> > grp_fu_207_p2;
    sc_signal< sc_lv<32> > grp_fu_213_p2;
    sc_signal< sc_lv<32> > grp_fu_173_p0;
    sc_signal< sc_lv<32> > grp_fu_173_p1;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > grp_fu_177_p0;
    sc_signal< sc_lv<32> > grp_fu_177_p1;
    sc_signal< sc_lv<32> > grp_fu_183_p0;
    sc_signal< sc_lv<32> > grp_fu_183_p1;
    sc_signal< sc_lv<32> > grp_fu_189_p0;
    sc_signal< sc_lv<32> > grp_fu_189_p1;
    sc_signal< sc_lv<32> > grp_fu_195_p0;
    sc_signal< sc_lv<32> > grp_fu_195_p1;
    sc_signal< sc_lv<32> > grp_fu_201_p0;
    sc_signal< sc_lv<32> > grp_fu_201_p1;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<5> > tmp_fu_267_p3;
    sc_signal< sc_lv<6> > zext_ln104_2_fu_295_p1;
    sc_signal< sc_lv<6> > add_ln104_fu_299_p2;
    sc_signal< sc_lv<6> > tmp_s_fu_322_p3;
    sc_signal< sc_lv<7> > zext_ln102_fu_330_p1;
    sc_signal< sc_lv<7> > add_ln102_fu_334_p2;
    sc_signal< sc_lv<7> > add_ln102_1_fu_345_p2;
    sc_signal< sc_lv<32> > bitcast_ln667_fu_356_p1;
    sc_signal< sc_lv<32> > xor_ln667_fu_359_p2;
    sc_signal< sc_lv<2> > grp_fu_173_opcode;
    sc_signal< sc_lv<2> > grp_fu_177_opcode;
    sc_signal< sc_lv<43> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<43> ap_ST_fsm_state1;
    static const sc_lv<43> ap_ST_fsm_state2;
    static const sc_lv<43> ap_ST_fsm_state3;
    static const sc_lv<43> ap_ST_fsm_state4;
    static const sc_lv<43> ap_ST_fsm_state5;
    static const sc_lv<43> ap_ST_fsm_state6;
    static const sc_lv<43> ap_ST_fsm_state7;
    static const sc_lv<43> ap_ST_fsm_state8;
    static const sc_lv<43> ap_ST_fsm_state9;
    static const sc_lv<43> ap_ST_fsm_state10;
    static const sc_lv<43> ap_ST_fsm_state11;
    static const sc_lv<43> ap_ST_fsm_state12;
    static const sc_lv<43> ap_ST_fsm_state13;
    static const sc_lv<43> ap_ST_fsm_state14;
    static const sc_lv<43> ap_ST_fsm_state15;
    static const sc_lv<43> ap_ST_fsm_state16;
    static const sc_lv<43> ap_ST_fsm_state17;
    static const sc_lv<43> ap_ST_fsm_state18;
    static const sc_lv<43> ap_ST_fsm_state19;
    static const sc_lv<43> ap_ST_fsm_state20;
    static const sc_lv<43> ap_ST_fsm_state21;
    static const sc_lv<43> ap_ST_fsm_state22;
    static const sc_lv<43> ap_ST_fsm_state23;
    static const sc_lv<43> ap_ST_fsm_state24;
    static const sc_lv<43> ap_ST_fsm_state25;
    static const sc_lv<43> ap_ST_fsm_state26;
    static const sc_lv<43> ap_ST_fsm_state27;
    static const sc_lv<43> ap_ST_fsm_state28;
    static const sc_lv<43> ap_ST_fsm_state29;
    static const sc_lv<43> ap_ST_fsm_state30;
    static const sc_lv<43> ap_ST_fsm_state31;
    static const sc_lv<43> ap_ST_fsm_state32;
    static const sc_lv<43> ap_ST_fsm_state33;
    static const sc_lv<43> ap_ST_fsm_state34;
    static const sc_lv<43> ap_ST_fsm_state35;
    static const sc_lv<43> ap_ST_fsm_state36;
    static const sc_lv<43> ap_ST_fsm_state37;
    static const sc_lv<43> ap_ST_fsm_state38;
    static const sc_lv<43> ap_ST_fsm_state39;
    static const sc_lv<43> ap_ST_fsm_state40;
    static const sc_lv<43> ap_ST_fsm_state41;
    static const sc_lv<43> ap_ST_fsm_state42;
    static const sc_lv<43> ap_ST_fsm_state43;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_41200000;
    static const sc_lv<32> ap_const_lv32_42C80000;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_80000000;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_Rx_M_imag_address0();
    void thread_Rx_M_imag_ce0();
    void thread_Rx_M_imag_d0();
    void thread_Rx_M_imag_we0();
    void thread_Rx_M_real_address0();
    void thread_Rx_M_real_ce0();
    void thread_Rx_M_real_d0();
    void thread_Rx_M_real_we0();
    void thread_X_M_imag_address0();
    void thread_X_M_imag_address1();
    void thread_X_M_imag_ce0();
    void thread_X_M_imag_ce1();
    void thread_X_M_real_address0();
    void thread_X_M_real_address1();
    void thread_X_M_real_ce0();
    void thread_X_M_real_ce1();
    void thread_add_ln102_1_fu_345_p2();
    void thread_add_ln102_fu_334_p2();
    void thread_add_ln104_fu_299_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bitcast_ln667_fu_356_p1();
    void thread_grp_fu_173_opcode();
    void thread_grp_fu_173_p0();
    void thread_grp_fu_173_p1();
    void thread_grp_fu_177_opcode();
    void thread_grp_fu_177_p0();
    void thread_grp_fu_177_p1();
    void thread_grp_fu_183_p0();
    void thread_grp_fu_183_p1();
    void thread_grp_fu_189_p0();
    void thread_grp_fu_189_p1();
    void thread_grp_fu_195_p0();
    void thread_grp_fu_195_p1();
    void thread_grp_fu_201_p0();
    void thread_grp_fu_201_p1();
    void thread_icmp_ln101_fu_310_p2();
    void thread_icmp_ln98_fu_251_p2();
    void thread_icmp_ln99_fu_279_p2();
    void thread_l_fu_316_p2();
    void thread_p_t_imag_fu_365_p1();
    void thread_tmp_fu_267_p3();
    void thread_tmp_s_fu_322_p3();
    void thread_x_fu_257_p2();
    void thread_xor_ln667_fu_359_p2();
    void thread_y_fu_285_p2();
    void thread_zext_ln102_1_fu_339_p1();
    void thread_zext_ln102_2_fu_350_p1();
    void thread_zext_ln102_fu_330_p1();
    void thread_zext_ln104_1_fu_291_p1();
    void thread_zext_ln104_2_fu_295_p1();
    void thread_zext_ln104_3_fu_304_p1();
    void thread_zext_ln104_fu_263_p1();
    void thread_zext_ln99_fu_275_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
