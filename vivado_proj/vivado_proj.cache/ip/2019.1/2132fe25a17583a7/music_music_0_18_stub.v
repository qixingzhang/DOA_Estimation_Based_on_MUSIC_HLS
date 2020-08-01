// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Sat Aug  1 08:35:50 2020
// Host        : DESKTOP-2L4T92T running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ music_music_0_18_stub.v
// Design      : music_music_0_18
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "music,Vivado 2019.1" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_AXILiteS_AWADDR, 
  s_axi_AXILiteS_AWVALID, s_axi_AXILiteS_AWREADY, s_axi_AXILiteS_WDATA, 
  s_axi_AXILiteS_WSTRB, s_axi_AXILiteS_WVALID, s_axi_AXILiteS_WREADY, 
  s_axi_AXILiteS_BRESP, s_axi_AXILiteS_BVALID, s_axi_AXILiteS_BREADY, 
  s_axi_AXILiteS_ARADDR, s_axi_AXILiteS_ARVALID, s_axi_AXILiteS_ARREADY, 
  s_axi_AXILiteS_RDATA, s_axi_AXILiteS_RRESP, s_axi_AXILiteS_RVALID, 
  s_axi_AXILiteS_RREADY, ap_clk, ap_rst_n, interrupt, m_axi_data_AWADDR, m_axi_data_AWLEN, 
  m_axi_data_AWSIZE, m_axi_data_AWBURST, m_axi_data_AWLOCK, m_axi_data_AWREGION, 
  m_axi_data_AWCACHE, m_axi_data_AWPROT, m_axi_data_AWQOS, m_axi_data_AWVALID, 
  m_axi_data_AWREADY, m_axi_data_WDATA, m_axi_data_WSTRB, m_axi_data_WLAST, 
  m_axi_data_WVALID, m_axi_data_WREADY, m_axi_data_BRESP, m_axi_data_BVALID, 
  m_axi_data_BREADY, m_axi_data_ARADDR, m_axi_data_ARLEN, m_axi_data_ARSIZE, 
  m_axi_data_ARBURST, m_axi_data_ARLOCK, m_axi_data_ARREGION, m_axi_data_ARCACHE, 
  m_axi_data_ARPROT, m_axi_data_ARQOS, m_axi_data_ARVALID, m_axi_data_ARREADY, 
  m_axi_data_RDATA, m_axi_data_RRESP, m_axi_data_RLAST, m_axi_data_RVALID, 
  m_axi_data_RREADY, P_sm_TVALID, P_sm_TREADY, P_sm_TDATA, P_sm_TLAST, P_sm_TUSER)
/* synthesis syn_black_box black_box_pad_pin="s_axi_AXILiteS_AWADDR[5:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[5:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_data_AWADDR[31:0],m_axi_data_AWLEN[7:0],m_axi_data_AWSIZE[2:0],m_axi_data_AWBURST[1:0],m_axi_data_AWLOCK[1:0],m_axi_data_AWREGION[3:0],m_axi_data_AWCACHE[3:0],m_axi_data_AWPROT[2:0],m_axi_data_AWQOS[3:0],m_axi_data_AWVALID,m_axi_data_AWREADY,m_axi_data_WDATA[31:0],m_axi_data_WSTRB[3:0],m_axi_data_WLAST,m_axi_data_WVALID,m_axi_data_WREADY,m_axi_data_BRESP[1:0],m_axi_data_BVALID,m_axi_data_BREADY,m_axi_data_ARADDR[31:0],m_axi_data_ARLEN[7:0],m_axi_data_ARSIZE[2:0],m_axi_data_ARBURST[1:0],m_axi_data_ARLOCK[1:0],m_axi_data_ARREGION[3:0],m_axi_data_ARCACHE[3:0],m_axi_data_ARPROT[2:0],m_axi_data_ARQOS[3:0],m_axi_data_ARVALID,m_axi_data_ARREADY,m_axi_data_RDATA[31:0],m_axi_data_RRESP[1:0],m_axi_data_RLAST,m_axi_data_RVALID,m_axi_data_RREADY,P_sm_TVALID,P_sm_TREADY,P_sm_TDATA[31:0],P_sm_TLAST[0:0],P_sm_TUSER[0:0]" */;
  input [5:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_AWVALID;
  output s_axi_AXILiteS_AWREADY;
  input [31:0]s_axi_AXILiteS_WDATA;
  input [3:0]s_axi_AXILiteS_WSTRB;
  input s_axi_AXILiteS_WVALID;
  output s_axi_AXILiteS_WREADY;
  output [1:0]s_axi_AXILiteS_BRESP;
  output s_axi_AXILiteS_BVALID;
  input s_axi_AXILiteS_BREADY;
  input [5:0]s_axi_AXILiteS_ARADDR;
  input s_axi_AXILiteS_ARVALID;
  output s_axi_AXILiteS_ARREADY;
  output [31:0]s_axi_AXILiteS_RDATA;
  output [1:0]s_axi_AXILiteS_RRESP;
  output s_axi_AXILiteS_RVALID;
  input s_axi_AXILiteS_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [31:0]m_axi_data_AWADDR;
  output [7:0]m_axi_data_AWLEN;
  output [2:0]m_axi_data_AWSIZE;
  output [1:0]m_axi_data_AWBURST;
  output [1:0]m_axi_data_AWLOCK;
  output [3:0]m_axi_data_AWREGION;
  output [3:0]m_axi_data_AWCACHE;
  output [2:0]m_axi_data_AWPROT;
  output [3:0]m_axi_data_AWQOS;
  output m_axi_data_AWVALID;
  input m_axi_data_AWREADY;
  output [31:0]m_axi_data_WDATA;
  output [3:0]m_axi_data_WSTRB;
  output m_axi_data_WLAST;
  output m_axi_data_WVALID;
  input m_axi_data_WREADY;
  input [1:0]m_axi_data_BRESP;
  input m_axi_data_BVALID;
  output m_axi_data_BREADY;
  output [31:0]m_axi_data_ARADDR;
  output [7:0]m_axi_data_ARLEN;
  output [2:0]m_axi_data_ARSIZE;
  output [1:0]m_axi_data_ARBURST;
  output [1:0]m_axi_data_ARLOCK;
  output [3:0]m_axi_data_ARREGION;
  output [3:0]m_axi_data_ARCACHE;
  output [2:0]m_axi_data_ARPROT;
  output [3:0]m_axi_data_ARQOS;
  output m_axi_data_ARVALID;
  input m_axi_data_ARREADY;
  input [31:0]m_axi_data_RDATA;
  input [1:0]m_axi_data_RRESP;
  input m_axi_data_RLAST;
  input m_axi_data_RVALID;
  output m_axi_data_RREADY;
  output P_sm_TVALID;
  input P_sm_TREADY;
  output [31:0]P_sm_TDATA;
  output [0:0]P_sm_TLAST;
  output [0:0]P_sm_TUSER;
endmodule
