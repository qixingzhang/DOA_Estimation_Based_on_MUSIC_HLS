// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _music_HH_
#define _music_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "fft_streaming.h"
#include "music_temp_array.h"
#include "music_FFT_Buffer_re.h"
#include "music_FFT_out_re.h"
#include "music_AXILiteS_s_axi.h"
#include "music_data_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_DATA_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_DATA_ID_WIDTH = 1,
         unsigned int C_M_AXI_DATA_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_DATA_DATA_WIDTH = 32,
         unsigned int C_M_AXI_DATA_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_DATA_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_DATA_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_DATA_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct music : public sc_module {
    // Port declarations 70
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > m_axi_data_AWVALID;
    sc_in< sc_logic > m_axi_data_AWREADY;
    sc_out< sc_uint<C_M_AXI_DATA_ADDR_WIDTH> > m_axi_data_AWADDR;
    sc_out< sc_uint<C_M_AXI_DATA_ID_WIDTH> > m_axi_data_AWID;
    sc_out< sc_lv<8> > m_axi_data_AWLEN;
    sc_out< sc_lv<3> > m_axi_data_AWSIZE;
    sc_out< sc_lv<2> > m_axi_data_AWBURST;
    sc_out< sc_lv<2> > m_axi_data_AWLOCK;
    sc_out< sc_lv<4> > m_axi_data_AWCACHE;
    sc_out< sc_lv<3> > m_axi_data_AWPROT;
    sc_out< sc_lv<4> > m_axi_data_AWQOS;
    sc_out< sc_lv<4> > m_axi_data_AWREGION;
    sc_out< sc_uint<C_M_AXI_DATA_AWUSER_WIDTH> > m_axi_data_AWUSER;
    sc_out< sc_logic > m_axi_data_WVALID;
    sc_in< sc_logic > m_axi_data_WREADY;
    sc_out< sc_uint<C_M_AXI_DATA_DATA_WIDTH> > m_axi_data_WDATA;
    sc_out< sc_uint<C_M_AXI_DATA_DATA_WIDTH/8> > m_axi_data_WSTRB;
    sc_out< sc_logic > m_axi_data_WLAST;
    sc_out< sc_uint<C_M_AXI_DATA_ID_WIDTH> > m_axi_data_WID;
    sc_out< sc_uint<C_M_AXI_DATA_WUSER_WIDTH> > m_axi_data_WUSER;
    sc_out< sc_logic > m_axi_data_ARVALID;
    sc_in< sc_logic > m_axi_data_ARREADY;
    sc_out< sc_uint<C_M_AXI_DATA_ADDR_WIDTH> > m_axi_data_ARADDR;
    sc_out< sc_uint<C_M_AXI_DATA_ID_WIDTH> > m_axi_data_ARID;
    sc_out< sc_lv<8> > m_axi_data_ARLEN;
    sc_out< sc_lv<3> > m_axi_data_ARSIZE;
    sc_out< sc_lv<2> > m_axi_data_ARBURST;
    sc_out< sc_lv<2> > m_axi_data_ARLOCK;
    sc_out< sc_lv<4> > m_axi_data_ARCACHE;
    sc_out< sc_lv<3> > m_axi_data_ARPROT;
    sc_out< sc_lv<4> > m_axi_data_ARQOS;
    sc_out< sc_lv<4> > m_axi_data_ARREGION;
    sc_out< sc_uint<C_M_AXI_DATA_ARUSER_WIDTH> > m_axi_data_ARUSER;
    sc_in< sc_logic > m_axi_data_RVALID;
    sc_out< sc_logic > m_axi_data_RREADY;
    sc_in< sc_uint<C_M_AXI_DATA_DATA_WIDTH> > m_axi_data_RDATA;
    sc_in< sc_logic > m_axi_data_RLAST;
    sc_in< sc_uint<C_M_AXI_DATA_ID_WIDTH> > m_axi_data_RID;
    sc_in< sc_uint<C_M_AXI_DATA_RUSER_WIDTH> > m_axi_data_RUSER;
    sc_in< sc_lv<2> > m_axi_data_RRESP;
    sc_in< sc_logic > m_axi_data_BVALID;
    sc_out< sc_logic > m_axi_data_BREADY;
    sc_in< sc_lv<2> > m_axi_data_BRESP;
    sc_in< sc_uint<C_M_AXI_DATA_ID_WIDTH> > m_axi_data_BID;
    sc_in< sc_uint<C_M_AXI_DATA_BUSER_WIDTH> > m_axi_data_BUSER;
    sc_out< sc_lv<32> > P_sm_TDATA;
    sc_out< sc_logic > P_sm_TVALID;
    sc_in< sc_logic > P_sm_TREADY;
    sc_out< sc_lv<1> > P_sm_TUSER;
    sc_out< sc_lv<1> > P_sm_TLAST;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const7;
    sc_signal< sc_lv<32> > ap_var_for_const9;
    sc_signal< sc_lv<1> > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const5;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const6;
    sc_signal< sc_lv<3> > ap_var_for_const4;
    sc_signal< sc_lv<4> > ap_var_for_const8;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    music(sc_module_name name);
    SC_HAS_PROCESS(music);

    ~music();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    music_temp_array* temp_array_U;
    music_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* music_AXILiteS_s_axi_U;
    music_data_m_axi<0,32,32,5,16,16,16,16,C_M_AXI_DATA_ID_WIDTH,C_M_AXI_DATA_ADDR_WIDTH,C_M_AXI_DATA_DATA_WIDTH,C_M_AXI_DATA_AWUSER_WIDTH,C_M_AXI_DATA_ARUSER_WIDTH,C_M_AXI_DATA_WUSER_WIDTH,C_M_AXI_DATA_RUSER_WIDTH,C_M_AXI_DATA_BUSER_WIDTH,C_M_AXI_DATA_USER_VALUE,C_M_AXI_DATA_PROT_VALUE,C_M_AXI_DATA_CACHE_VALUE>* music_data_m_axi_U;
    music_FFT_Buffer_re* FFT_Buffer_re_U;
    music_FFT_Buffer_re* FFT_Buffer_im_U;
    music_FFT_out_re* FFT_out_re_U;
    music_FFT_out_re* FFT_out_im_U;
    fft_streaming* grp_fft_streaming_fu_368;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<26> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > data_re;
    sc_signal< sc_lv<32> > data_im;
    sc_signal< sc_lv<32> > P_sm_data_1_data_out;
    sc_signal< sc_logic > P_sm_data_1_vld_in;
    sc_signal< sc_logic > P_sm_data_1_vld_out;
    sc_signal< sc_logic > P_sm_data_1_ack_in;
    sc_signal< sc_logic > P_sm_data_1_ack_out;
    sc_signal< sc_lv<32> > P_sm_data_1_payload_A;
    sc_signal< sc_lv<32> > P_sm_data_1_payload_B;
    sc_signal< sc_logic > P_sm_data_1_sel_rd;
    sc_signal< sc_logic > P_sm_data_1_sel_wr;
    sc_signal< sc_logic > P_sm_data_1_sel;
    sc_signal< sc_logic > P_sm_data_1_load_A;
    sc_signal< sc_logic > P_sm_data_1_load_B;
    sc_signal< sc_lv<2> > P_sm_data_1_state;
    sc_signal< sc_logic > P_sm_data_1_state_cmp_full;
    sc_signal< sc_lv<1> > P_sm_user_V_1_data_out;
    sc_signal< sc_logic > P_sm_user_V_1_vld_in;
    sc_signal< sc_logic > P_sm_user_V_1_vld_out;
    sc_signal< sc_logic > P_sm_user_V_1_ack_in;
    sc_signal< sc_logic > P_sm_user_V_1_ack_out;
    sc_signal< sc_lv<1> > P_sm_user_V_1_payload_A;
    sc_signal< sc_lv<1> > P_sm_user_V_1_payload_B;
    sc_signal< sc_logic > P_sm_user_V_1_sel_rd;
    sc_signal< sc_logic > P_sm_user_V_1_sel_wr;
    sc_signal< sc_logic > P_sm_user_V_1_sel;
    sc_signal< sc_logic > P_sm_user_V_1_load_A;
    sc_signal< sc_logic > P_sm_user_V_1_load_B;
    sc_signal< sc_lv<2> > P_sm_user_V_1_state;
    sc_signal< sc_logic > P_sm_user_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > P_sm_last_V_1_data_out;
    sc_signal< sc_logic > P_sm_last_V_1_vld_in;
    sc_signal< sc_logic > P_sm_last_V_1_vld_out;
    sc_signal< sc_logic > P_sm_last_V_1_ack_in;
    sc_signal< sc_logic > P_sm_last_V_1_ack_out;
    sc_signal< sc_lv<1> > P_sm_last_V_1_payload_A;
    sc_signal< sc_lv<1> > P_sm_last_V_1_payload_B;
    sc_signal< sc_logic > P_sm_last_V_1_sel_rd;
    sc_signal< sc_logic > P_sm_last_V_1_sel_wr;
    sc_signal< sc_logic > P_sm_last_V_1_sel;
    sc_signal< sc_logic > P_sm_last_V_1_load_A;
    sc_signal< sc_logic > P_sm_last_V_1_load_B;
    sc_signal< sc_lv<2> > P_sm_last_V_1_state;
    sc_signal< sc_logic > P_sm_last_V_1_state_cmp_full;
    sc_signal< sc_lv<9> > temp_array_address0;
    sc_signal< sc_logic > temp_array_ce0;
    sc_signal< sc_lv<32> > temp_array_q0;
    sc_signal< sc_logic > data_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > data_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > data_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > data_blk_n_W;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > data_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > P_sm_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > data_AWVALID;
    sc_signal< sc_logic > data_AWREADY;
    sc_signal< sc_lv<32> > data_AWADDR;
    sc_signal< sc_logic > data_WVALID;
    sc_signal< sc_logic > data_WREADY;
    sc_signal< sc_lv<32> > data_WDATA;
    sc_signal< sc_logic > data_ARVALID;
    sc_signal< sc_logic > data_ARREADY;
    sc_signal< sc_lv<32> > data_ARADDR;
    sc_signal< sc_logic > data_RVALID;
    sc_signal< sc_logic > data_RREADY;
    sc_signal< sc_lv<32> > data_RDATA;
    sc_signal< sc_logic > data_RLAST;
    sc_signal< sc_lv<1> > data_RID;
    sc_signal< sc_lv<1> > data_RUSER;
    sc_signal< sc_lv<2> > data_RRESP;
    sc_signal< sc_logic > data_BVALID;
    sc_signal< sc_logic > data_BREADY;
    sc_signal< sc_lv<2> > data_BRESP;
    sc_signal< sc_lv<1> > data_BID;
    sc_signal< sc_lv<1> > data_BUSER;
    sc_signal< sc_lv<31> > p_cast6_fu_422_p1;
    sc_signal< sc_lv<31> > p_cast6_reg_646;
    sc_signal< sc_lv<31> > p_cast_fu_436_p1;
    sc_signal< sc_lv<31> > p_cast_reg_651;
    sc_signal< sc_lv<4> > l_fu_446_p2;
    sc_signal< sc_lv<4> > l_reg_660;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<14> > shl_ln_fu_452_p3;
    sc_signal< sc_lv<14> > shl_ln_reg_665;
    sc_signal< sc_lv<1> > icmp_ln303_fu_440_p2;
    sc_signal< sc_lv<3> > n_fu_466_p2;
    sc_signal< sc_lv<3> > n_reg_674;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<17> > zext_ln305_1_fu_472_p1;
    sc_signal< sc_lv<17> > zext_ln305_1_reg_679;
    sc_signal< sc_lv<1> > icmp_ln304_fu_460_p2;
    sc_signal< sc_lv<11> > j_fu_486_p2;
    sc_signal< sc_lv<11> > j_reg_688;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<31> > add_ln306_2_fu_518_p2;
    sc_signal< sc_lv<31> > add_ln306_2_reg_693;
    sc_signal< sc_lv<1> > icmp_ln305_fu_480_p2;
    sc_signal< sc_lv<32> > data_addr_read_reg_704;
    sc_signal< sc_lv<11> > j_1_fu_549_p2;
    sc_signal< sc_lv<11> > j_1_reg_712;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > icmp_ln310_fu_543_p2;
    sc_signal< sc_lv<31> > add_ln311_2_fu_587_p2;
    sc_signal< sc_lv<31> > add_ln311_2_reg_722;
    sc_signal< sc_lv<31> > add_ln312_fu_592_p2;
    sc_signal< sc_lv<31> > add_ln312_reg_727;
    sc_signal< sc_lv<32> > FFT_out_re_q0;
    sc_signal< sc_lv<32> > FFT_out_re_load_reg_737;
    sc_signal< sc_lv<32> > FFT_out_im_q0;
    sc_signal< sc_lv<32> > FFT_out_im_load_reg_748;
    sc_signal< bool > ap_block_state17_io;
    sc_signal< sc_lv<9> > i_fu_623_p2;
    sc_signal< sc_lv<9> > i_reg_762;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< bool > ap_block_state24;
    sc_signal< sc_lv<1> > icmp_ln382_fu_617_p2;
    sc_signal< sc_lv<1> > icmp_ln384_fu_634_p2;
    sc_signal< sc_lv<1> > icmp_ln384_reg_772;
    sc_signal< sc_lv<1> > icmp_ln385_fu_640_p2;
    sc_signal< sc_lv<1> > icmp_ln385_reg_777;
    sc_signal< sc_lv<10> > FFT_Buffer_re_address0;
    sc_signal< sc_logic > FFT_Buffer_re_ce0;
    sc_signal< sc_logic > FFT_Buffer_re_we0;
    sc_signal< sc_lv<32> > FFT_Buffer_re_q0;
    sc_signal< sc_lv<10> > FFT_Buffer_im_address0;
    sc_signal< sc_logic > FFT_Buffer_im_ce0;
    sc_signal< sc_logic > FFT_Buffer_im_we0;
    sc_signal< sc_lv<32> > FFT_Buffer_im_q0;
    sc_signal< sc_lv<10> > FFT_out_re_address0;
    sc_signal< sc_logic > FFT_out_re_ce0;
    sc_signal< sc_logic > FFT_out_re_we0;
    sc_signal< sc_logic > FFT_out_re_ce1;
    sc_signal< sc_logic > FFT_out_re_we1;
    sc_signal< sc_lv<10> > FFT_out_im_address0;
    sc_signal< sc_logic > FFT_out_im_ce0;
    sc_signal< sc_logic > FFT_out_im_we0;
    sc_signal< sc_logic > FFT_out_im_ce1;
    sc_signal< sc_logic > FFT_out_im_we1;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_X_R_address0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_R_ce0;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_X_R_d0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_R_we0;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_X_R_address1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_R_ce1;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_X_R_d1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_R_we1;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_X_I_address0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_I_ce0;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_X_I_d0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_I_we0;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_X_I_address1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_I_ce1;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_X_I_d1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_X_I_we1;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_OUT_R_address0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_R_ce0;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_OUT_R_d0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_R_we0;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_OUT_R_address1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_R_ce1;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_OUT_R_d1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_R_we1;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_OUT_I_address0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_I_ce0;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_OUT_I_d0;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_I_we0;
    sc_signal< sc_lv<10> > grp_fft_streaming_fu_368_OUT_I_address1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_I_ce1;
    sc_signal< sc_lv<32> > grp_fft_streaming_fu_368_OUT_I_d1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_OUT_I_we1;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_start;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_done;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_ready;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_idle;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_continue;
    sc_signal< sc_lv<4> > l_0_reg_312;
    sc_signal< sc_lv<3> > n_0_reg_323;
    sc_signal< sc_lv<11> > j_0_reg_334;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<11> > j24_0_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_sync_grp_fft_streaming_fu_368_ap_ready;
    sc_signal< sc_logic > ap_sync_grp_fft_streaming_fu_368_ap_done;
    sc_signal< bool > ap_block_state14_on_subcall_done;
    sc_signal< sc_lv<9> > p_06_rec_reg_357;
    sc_signal< sc_logic > grp_fft_streaming_fu_368_ap_start_reg;
    sc_signal< sc_logic > ap_sync_reg_grp_fft_streaming_fu_368_ap_ready;
    sc_signal< sc_logic > ap_sync_reg_grp_fft_streaming_fu_368_ap_done;
    sc_signal< sc_lv<64> > zext_ln306_2_fu_533_p1;
    sc_signal< sc_lv<64> > zext_ln311_fu_555_p1;
    sc_signal< sc_lv<64> > zext_ln383_fu_629_p1;
    sc_signal< sc_lv<64> > zext_ln306_3_fu_523_p1;
    sc_signal< sc_lv<64> > zext_ln311_3_fu_597_p1;
    sc_signal< sc_lv<64> > zext_ln312_fu_607_p1;
    sc_signal< sc_lv<30> > tmp_2_fu_412_p4;
    sc_signal< sc_lv<30> > tmp_3_fu_426_p4;
    sc_signal< sc_lv<14> > zext_ln305_fu_476_p1;
    sc_signal< sc_lv<14> > add_ln306_fu_492_p2;
    sc_signal< sc_lv<16> > tmp_fu_497_p3;
    sc_signal< sc_lv<17> > zext_ln306_fu_505_p1;
    sc_signal< sc_lv<17> > add_ln306_1_fu_509_p2;
    sc_signal< sc_lv<31> > zext_ln306_1_fu_514_p1;
    sc_signal< sc_lv<14> > zext_ln310_fu_539_p1;
    sc_signal< sc_lv<14> > add_ln311_fu_561_p2;
    sc_signal< sc_lv<16> > tmp_1_fu_566_p3;
    sc_signal< sc_lv<17> > zext_ln311_1_fu_574_p1;
    sc_signal< sc_lv<17> > add_ln311_1_fu_578_p2;
    sc_signal< sc_lv<31> > zext_ln311_2_fu_583_p1;
    sc_signal< sc_lv<26> > ap_NS_fsm;
    sc_signal< sc_lv<32> > ap_return;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<26> ap_ST_fsm_state1;
    static const sc_lv<26> ap_ST_fsm_state2;
    static const sc_lv<26> ap_ST_fsm_state3;
    static const sc_lv<26> ap_ST_fsm_state4;
    static const sc_lv<26> ap_ST_fsm_state5;
    static const sc_lv<26> ap_ST_fsm_state6;
    static const sc_lv<26> ap_ST_fsm_state7;
    static const sc_lv<26> ap_ST_fsm_state8;
    static const sc_lv<26> ap_ST_fsm_state9;
    static const sc_lv<26> ap_ST_fsm_state10;
    static const sc_lv<26> ap_ST_fsm_state11;
    static const sc_lv<26> ap_ST_fsm_state12;
    static const sc_lv<26> ap_ST_fsm_state13;
    static const sc_lv<26> ap_ST_fsm_state14;
    static const sc_lv<26> ap_ST_fsm_state15;
    static const sc_lv<26> ap_ST_fsm_state16;
    static const sc_lv<26> ap_ST_fsm_state17;
    static const sc_lv<26> ap_ST_fsm_state18;
    static const sc_lv<26> ap_ST_fsm_state19;
    static const sc_lv<26> ap_ST_fsm_state20;
    static const sc_lv<26> ap_ST_fsm_state21;
    static const sc_lv<26> ap_ST_fsm_state22;
    static const sc_lv<26> ap_ST_fsm_state23;
    static const sc_lv<26> ap_ST_fsm_state24;
    static const sc_lv<26> ap_ST_fsm_state25;
    static const sc_lv<26> ap_ST_fsm_state26;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_DATA_USER_VALUE;
    static const int C_M_AXI_DATA_PROT_VALUE;
    static const int C_M_AXI_DATA_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_E;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<9> ap_const_lv9_169;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<9> ap_const_lv9_168;
    static const sc_lv<32> ap_const_lv32_B0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const9();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const8();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_FFT_Buffer_im_address0();
    void thread_FFT_Buffer_im_ce0();
    void thread_FFT_Buffer_im_we0();
    void thread_FFT_Buffer_re_address0();
    void thread_FFT_Buffer_re_ce0();
    void thread_FFT_Buffer_re_we0();
    void thread_FFT_out_im_address0();
    void thread_FFT_out_im_ce0();
    void thread_FFT_out_im_ce1();
    void thread_FFT_out_im_we0();
    void thread_FFT_out_im_we1();
    void thread_FFT_out_re_address0();
    void thread_FFT_out_re_ce0();
    void thread_FFT_out_re_ce1();
    void thread_FFT_out_re_we0();
    void thread_FFT_out_re_we1();
    void thread_P_sm_TDATA();
    void thread_P_sm_TDATA_blk_n();
    void thread_P_sm_TLAST();
    void thread_P_sm_TUSER();
    void thread_P_sm_TVALID();
    void thread_P_sm_data_1_ack_in();
    void thread_P_sm_data_1_ack_out();
    void thread_P_sm_data_1_data_out();
    void thread_P_sm_data_1_load_A();
    void thread_P_sm_data_1_load_B();
    void thread_P_sm_data_1_sel();
    void thread_P_sm_data_1_state_cmp_full();
    void thread_P_sm_data_1_vld_in();
    void thread_P_sm_data_1_vld_out();
    void thread_P_sm_last_V_1_ack_in();
    void thread_P_sm_last_V_1_ack_out();
    void thread_P_sm_last_V_1_data_out();
    void thread_P_sm_last_V_1_load_A();
    void thread_P_sm_last_V_1_load_B();
    void thread_P_sm_last_V_1_sel();
    void thread_P_sm_last_V_1_state_cmp_full();
    void thread_P_sm_last_V_1_vld_in();
    void thread_P_sm_last_V_1_vld_out();
    void thread_P_sm_user_V_1_ack_in();
    void thread_P_sm_user_V_1_ack_out();
    void thread_P_sm_user_V_1_data_out();
    void thread_P_sm_user_V_1_load_A();
    void thread_P_sm_user_V_1_load_B();
    void thread_P_sm_user_V_1_sel();
    void thread_P_sm_user_V_1_state_cmp_full();
    void thread_P_sm_user_V_1_vld_in();
    void thread_P_sm_user_V_1_vld_out();
    void thread_add_ln306_1_fu_509_p2();
    void thread_add_ln306_2_fu_518_p2();
    void thread_add_ln306_fu_492_p2();
    void thread_add_ln311_1_fu_578_p2();
    void thread_add_ln311_2_fu_587_p2();
    void thread_add_ln311_fu_561_p2();
    void thread_add_ln312_fu_592_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_state14_on_subcall_done();
    void thread_ap_block_state17_io();
    void thread_ap_block_state24();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_grp_fft_streaming_fu_368_ap_done();
    void thread_ap_sync_grp_fft_streaming_fu_368_ap_ready();
    void thread_data_ARADDR();
    void thread_data_ARVALID();
    void thread_data_AWADDR();
    void thread_data_AWVALID();
    void thread_data_BREADY();
    void thread_data_RREADY();
    void thread_data_WDATA();
    void thread_data_WVALID();
    void thread_data_blk_n_AR();
    void thread_data_blk_n_AW();
    void thread_data_blk_n_B();
    void thread_data_blk_n_R();
    void thread_data_blk_n_W();
    void thread_grp_fft_streaming_fu_368_ap_continue();
    void thread_grp_fft_streaming_fu_368_ap_start();
    void thread_i_fu_623_p2();
    void thread_icmp_ln303_fu_440_p2();
    void thread_icmp_ln304_fu_460_p2();
    void thread_icmp_ln305_fu_480_p2();
    void thread_icmp_ln310_fu_543_p2();
    void thread_icmp_ln382_fu_617_p2();
    void thread_icmp_ln384_fu_634_p2();
    void thread_icmp_ln385_fu_640_p2();
    void thread_j_1_fu_549_p2();
    void thread_j_fu_486_p2();
    void thread_l_fu_446_p2();
    void thread_n_fu_466_p2();
    void thread_p_cast6_fu_422_p1();
    void thread_p_cast_fu_436_p1();
    void thread_shl_ln_fu_452_p3();
    void thread_temp_array_address0();
    void thread_temp_array_ce0();
    void thread_tmp_1_fu_566_p3();
    void thread_tmp_2_fu_412_p4();
    void thread_tmp_3_fu_426_p4();
    void thread_tmp_fu_497_p3();
    void thread_zext_ln305_1_fu_472_p1();
    void thread_zext_ln305_fu_476_p1();
    void thread_zext_ln306_1_fu_514_p1();
    void thread_zext_ln306_2_fu_533_p1();
    void thread_zext_ln306_3_fu_523_p1();
    void thread_zext_ln306_fu_505_p1();
    void thread_zext_ln310_fu_539_p1();
    void thread_zext_ln311_1_fu_574_p1();
    void thread_zext_ln311_2_fu_583_p1();
    void thread_zext_ln311_3_fu_597_p1();
    void thread_zext_ln311_fu_555_p1();
    void thread_zext_ln312_fu_607_p1();
    void thread_zext_ln383_fu_629_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
