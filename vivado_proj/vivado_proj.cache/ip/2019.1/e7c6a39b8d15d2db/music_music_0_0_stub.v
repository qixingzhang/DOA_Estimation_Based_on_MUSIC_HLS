// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Fri Jul 31 02:51:04 2020
// Host        : DESKTOP-2L4T92T running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ music_music_0_0_stub.v
// Design      : music_music_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "music,Vivado 2019.1" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(X_ce0, Xj_f_re_ce0, Xj_f_re_we0, Xj_f_im_ce0, 
  Xj_f_im_we0, P_sm_ce0, P_sm_we0, s_axi_AXILiteS_AWADDR, s_axi_AXILiteS_AWVALID, 
  s_axi_AXILiteS_AWREADY, s_axi_AXILiteS_WDATA, s_axi_AXILiteS_WSTRB, 
  s_axi_AXILiteS_WVALID, s_axi_AXILiteS_WREADY, s_axi_AXILiteS_BRESP, 
  s_axi_AXILiteS_BVALID, s_axi_AXILiteS_BREADY, s_axi_AXILiteS_ARADDR, 
  s_axi_AXILiteS_ARVALID, s_axi_AXILiteS_ARREADY, s_axi_AXILiteS_RDATA, 
  s_axi_AXILiteS_RRESP, s_axi_AXILiteS_RVALID, s_axi_AXILiteS_RREADY, ap_clk, ap_rst_n, 
  interrupt, X_address0, X_q0, Xj_f_re_address0, Xj_f_re_d0, Xj_f_re_q0, Xj_f_im_address0, 
  Xj_f_im_d0, Xj_f_im_q0, P_sm_address0, P_sm_d0)
/* synthesis syn_black_box black_box_pad_pin="X_ce0,Xj_f_re_ce0,Xj_f_re_we0,Xj_f_im_ce0,Xj_f_im_we0,P_sm_ce0,P_sm_we0,s_axi_AXILiteS_AWADDR[3:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[3:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,interrupt,X_address0[15:0],X_q0[31:0],Xj_f_re_address0[15:0],Xj_f_re_d0[31:0],Xj_f_re_q0[31:0],Xj_f_im_address0[15:0],Xj_f_im_d0[31:0],Xj_f_im_q0[31:0],P_sm_address0[8:0],P_sm_d0[31:0]" */;
  output X_ce0;
  output Xj_f_re_ce0;
  output Xj_f_re_we0;
  output Xj_f_im_ce0;
  output Xj_f_im_we0;
  output P_sm_ce0;
  output P_sm_we0;
  input [3:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_AWVALID;
  output s_axi_AXILiteS_AWREADY;
  input [31:0]s_axi_AXILiteS_WDATA;
  input [3:0]s_axi_AXILiteS_WSTRB;
  input s_axi_AXILiteS_WVALID;
  output s_axi_AXILiteS_WREADY;
  output [1:0]s_axi_AXILiteS_BRESP;
  output s_axi_AXILiteS_BVALID;
  input s_axi_AXILiteS_BREADY;
  input [3:0]s_axi_AXILiteS_ARADDR;
  input s_axi_AXILiteS_ARVALID;
  output s_axi_AXILiteS_ARREADY;
  output [31:0]s_axi_AXILiteS_RDATA;
  output [1:0]s_axi_AXILiteS_RRESP;
  output s_axi_AXILiteS_RVALID;
  input s_axi_AXILiteS_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [15:0]X_address0;
  input [31:0]X_q0;
  output [15:0]Xj_f_re_address0;
  output [31:0]Xj_f_re_d0;
  input [31:0]Xj_f_re_q0;
  output [15:0]Xj_f_im_address0;
  output [31:0]Xj_f_im_d0;
  input [31:0]Xj_f_im_q0;
  output [8:0]P_sm_address0;
  output [31:0]P_sm_d0;
endmodule