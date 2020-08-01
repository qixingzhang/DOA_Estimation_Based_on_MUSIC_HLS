// (c) Copyright 1995-2020 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:music:1.0
// IP Revision: 2008011758

(* X_CORE_INFO = "music,Vivado 2019.1" *)
(* CHECK_LICENSE_TYPE = "music_music_0_24,music,{}" *)
(* CORE_GENERATION_INFO = "music_music_0_24,music,{x_ipProduct=Vivado 2019.1,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=music,x_ipVersion=1.0,x_ipCoreRevision=2008011758,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_AXILITES_ADDR_WIDTH=6,C_S_AXI_AXILITES_DATA_WIDTH=32,C_M_AXI_DATA_ID_WIDTH=1,C_M_AXI_DATA_ADDR_WIDTH=32,C_M_AXI_DATA_DATA_WIDTH=32,C_M_AXI_DATA_AWUSER_WIDTH=1,C_M_AXI_DATA_ARUSER_WIDTH=1,C_M_AXI_DATA_WUSER_WIDTH=1,C_M_AXI_DATA_RUSER_WIDTH=1,C_M_AXI_DATA_BUSER_WIDTH=1,C_M_AXI_DATA_USER_VALUE=0x00000000\
,C_M_AXI_DATA_PROT_VALUE=000,C_M_AXI_DATA_CACHE_VALUE=0011}" *)
(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module music_music_0_24 (
  s_axi_AXILiteS_AWADDR,
  s_axi_AXILiteS_AWVALID,
  s_axi_AXILiteS_AWREADY,
  s_axi_AXILiteS_WDATA,
  s_axi_AXILiteS_WSTRB,
  s_axi_AXILiteS_WVALID,
  s_axi_AXILiteS_WREADY,
  s_axi_AXILiteS_BRESP,
  s_axi_AXILiteS_BVALID,
  s_axi_AXILiteS_BREADY,
  s_axi_AXILiteS_ARADDR,
  s_axi_AXILiteS_ARVALID,
  s_axi_AXILiteS_ARREADY,
  s_axi_AXILiteS_RDATA,
  s_axi_AXILiteS_RRESP,
  s_axi_AXILiteS_RVALID,
  s_axi_AXILiteS_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  m_axi_data_AWADDR,
  m_axi_data_AWLEN,
  m_axi_data_AWSIZE,
  m_axi_data_AWBURST,
  m_axi_data_AWLOCK,
  m_axi_data_AWREGION,
  m_axi_data_AWCACHE,
  m_axi_data_AWPROT,
  m_axi_data_AWQOS,
  m_axi_data_AWVALID,
  m_axi_data_AWREADY,
  m_axi_data_WDATA,
  m_axi_data_WSTRB,
  m_axi_data_WLAST,
  m_axi_data_WVALID,
  m_axi_data_WREADY,
  m_axi_data_BRESP,
  m_axi_data_BVALID,
  m_axi_data_BREADY,
  m_axi_data_ARADDR,
  m_axi_data_ARLEN,
  m_axi_data_ARSIZE,
  m_axi_data_ARBURST,
  m_axi_data_ARLOCK,
  m_axi_data_ARREGION,
  m_axi_data_ARCACHE,
  m_axi_data_ARPROT,
  m_axi_data_ARQOS,
  m_axi_data_ARVALID,
  m_axi_data_ARREADY,
  m_axi_data_RDATA,
  m_axi_data_RRESP,
  m_axi_data_RLAST,
  m_axi_data_RVALID,
  m_axi_data_RREADY,
  P_sm_TVALID,
  P_sm_TREADY,
  P_sm_TDATA,
  P_sm_TLAST,
  P_sm_TUSER
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWADDR" *)
input wire [5 : 0] s_axi_AXILiteS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWVALID" *)
input wire s_axi_AXILiteS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWREADY" *)
output wire s_axi_AXILiteS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WDATA" *)
input wire [31 : 0] s_axi_AXILiteS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WSTRB" *)
input wire [3 : 0] s_axi_AXILiteS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WVALID" *)
input wire s_axi_AXILiteS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WREADY" *)
output wire s_axi_AXILiteS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BRESP" *)
output wire [1 : 0] s_axi_AXILiteS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BVALID" *)
output wire s_axi_AXILiteS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BREADY" *)
input wire s_axi_AXILiteS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARADDR" *)
input wire [5 : 0] s_axi_AXILiteS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARVALID" *)
input wire s_axi_AXILiteS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARREADY" *)
output wire s_axi_AXILiteS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RDATA" *)
output wire [31 : 0] s_axi_AXILiteS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RRESP" *)
output wire [1 : 0] s_axi_AXILiteS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RVALID" *)
output wire s_axi_AXILiteS_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_AXILiteS, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 50000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN music_processing_system7_0_2_FCLK_CLK0, NUM_READ_TH\
READS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RREADY" *)
input wire s_axi_AXILiteS_RREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_AXILiteS:m_axi_data:P_sm, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 50000000, PHASE 0.000, CLK_DOMAIN music_processing_system7_0_2_FCLK_CLK0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWADDR" *)
output wire [31 : 0] m_axi_data_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWLEN" *)
output wire [7 : 0] m_axi_data_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWSIZE" *)
output wire [2 : 0] m_axi_data_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWBURST" *)
output wire [1 : 0] m_axi_data_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWLOCK" *)
output wire [1 : 0] m_axi_data_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWREGION" *)
output wire [3 : 0] m_axi_data_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWCACHE" *)
output wire [3 : 0] m_axi_data_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWPROT" *)
output wire [2 : 0] m_axi_data_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWQOS" *)
output wire [3 : 0] m_axi_data_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWVALID" *)
output wire m_axi_data_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data AWREADY" *)
input wire m_axi_data_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data WDATA" *)
output wire [31 : 0] m_axi_data_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data WSTRB" *)
output wire [3 : 0] m_axi_data_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data WLAST" *)
output wire m_axi_data_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data WVALID" *)
output wire m_axi_data_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data WREADY" *)
input wire m_axi_data_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data BRESP" *)
input wire [1 : 0] m_axi_data_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data BVALID" *)
input wire m_axi_data_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data BREADY" *)
output wire m_axi_data_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARADDR" *)
output wire [31 : 0] m_axi_data_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARLEN" *)
output wire [7 : 0] m_axi_data_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARSIZE" *)
output wire [2 : 0] m_axi_data_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARBURST" *)
output wire [1 : 0] m_axi_data_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARLOCK" *)
output wire [1 : 0] m_axi_data_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARREGION" *)
output wire [3 : 0] m_axi_data_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARCACHE" *)
output wire [3 : 0] m_axi_data_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARPROT" *)
output wire [2 : 0] m_axi_data_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARQOS" *)
output wire [3 : 0] m_axi_data_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARVALID" *)
output wire m_axi_data_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data ARREADY" *)
input wire m_axi_data_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data RDATA" *)
input wire [31 : 0] m_axi_data_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data RRESP" *)
input wire [1 : 0] m_axi_data_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data RLAST" *)
input wire m_axi_data_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data RVALID" *)
input wire m_axi_data_RVALID;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axi_data, ADDR_WIDTH 32, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 16, NUM_WRITE_OUTSTANDING 16, MAX_READ_BURST_LENGTH 16, MAX_WRITE_BURST_LENGTH 16, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, SUPPORTS_NARROW_BURST 0, DATA_WIDTH 32, FREQ_HZ 50000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, PHASE 0.000, CLK_DOMAIN m\
usic_processing_system7_0_2_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_data RREADY" *)
output wire m_axi_data_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 P_sm TVALID" *)
output wire P_sm_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 P_sm TREADY" *)
input wire P_sm_TREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 P_sm TDATA" *)
output wire [31 : 0] P_sm_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 P_sm TLAST" *)
output wire [0 : 0] P_sm_TLAST;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME P_sm, TDATA_NUM_BYTES 4, TUSER_WIDTH 1, TDEST_WIDTH 0, TID_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 1, FREQ_HZ 50000000, PHASE 0.000, CLK_DOMAIN music_processing_system7_0_2_FCLK_CLK0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 P_sm TUSER" *)
output wire [0 : 0] P_sm_TUSER;

  music #(
    .C_S_AXI_AXILITES_ADDR_WIDTH(6),
    .C_S_AXI_AXILITES_DATA_WIDTH(32),
    .C_M_AXI_DATA_ID_WIDTH(1),
    .C_M_AXI_DATA_ADDR_WIDTH(32),
    .C_M_AXI_DATA_DATA_WIDTH(32),
    .C_M_AXI_DATA_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_WUSER_WIDTH(1),
    .C_M_AXI_DATA_RUSER_WIDTH(1),
    .C_M_AXI_DATA_BUSER_WIDTH(1),
    .C_M_AXI_DATA_USER_VALUE('H00000000),
    .C_M_AXI_DATA_PROT_VALUE('B000),
    .C_M_AXI_DATA_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_AXILiteS_AWADDR(s_axi_AXILiteS_AWADDR),
    .s_axi_AXILiteS_AWVALID(s_axi_AXILiteS_AWVALID),
    .s_axi_AXILiteS_AWREADY(s_axi_AXILiteS_AWREADY),
    .s_axi_AXILiteS_WDATA(s_axi_AXILiteS_WDATA),
    .s_axi_AXILiteS_WSTRB(s_axi_AXILiteS_WSTRB),
    .s_axi_AXILiteS_WVALID(s_axi_AXILiteS_WVALID),
    .s_axi_AXILiteS_WREADY(s_axi_AXILiteS_WREADY),
    .s_axi_AXILiteS_BRESP(s_axi_AXILiteS_BRESP),
    .s_axi_AXILiteS_BVALID(s_axi_AXILiteS_BVALID),
    .s_axi_AXILiteS_BREADY(s_axi_AXILiteS_BREADY),
    .s_axi_AXILiteS_ARADDR(s_axi_AXILiteS_ARADDR),
    .s_axi_AXILiteS_ARVALID(s_axi_AXILiteS_ARVALID),
    .s_axi_AXILiteS_ARREADY(s_axi_AXILiteS_ARREADY),
    .s_axi_AXILiteS_RDATA(s_axi_AXILiteS_RDATA),
    .s_axi_AXILiteS_RRESP(s_axi_AXILiteS_RRESP),
    .s_axi_AXILiteS_RVALID(s_axi_AXILiteS_RVALID),
    .s_axi_AXILiteS_RREADY(s_axi_AXILiteS_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_data_AWID(),
    .m_axi_data_AWADDR(m_axi_data_AWADDR),
    .m_axi_data_AWLEN(m_axi_data_AWLEN),
    .m_axi_data_AWSIZE(m_axi_data_AWSIZE),
    .m_axi_data_AWBURST(m_axi_data_AWBURST),
    .m_axi_data_AWLOCK(m_axi_data_AWLOCK),
    .m_axi_data_AWREGION(m_axi_data_AWREGION),
    .m_axi_data_AWCACHE(m_axi_data_AWCACHE),
    .m_axi_data_AWPROT(m_axi_data_AWPROT),
    .m_axi_data_AWQOS(m_axi_data_AWQOS),
    .m_axi_data_AWUSER(),
    .m_axi_data_AWVALID(m_axi_data_AWVALID),
    .m_axi_data_AWREADY(m_axi_data_AWREADY),
    .m_axi_data_WID(),
    .m_axi_data_WDATA(m_axi_data_WDATA),
    .m_axi_data_WSTRB(m_axi_data_WSTRB),
    .m_axi_data_WLAST(m_axi_data_WLAST),
    .m_axi_data_WUSER(),
    .m_axi_data_WVALID(m_axi_data_WVALID),
    .m_axi_data_WREADY(m_axi_data_WREADY),
    .m_axi_data_BID(1'B0),
    .m_axi_data_BRESP(m_axi_data_BRESP),
    .m_axi_data_BUSER(1'B0),
    .m_axi_data_BVALID(m_axi_data_BVALID),
    .m_axi_data_BREADY(m_axi_data_BREADY),
    .m_axi_data_ARID(),
    .m_axi_data_ARADDR(m_axi_data_ARADDR),
    .m_axi_data_ARLEN(m_axi_data_ARLEN),
    .m_axi_data_ARSIZE(m_axi_data_ARSIZE),
    .m_axi_data_ARBURST(m_axi_data_ARBURST),
    .m_axi_data_ARLOCK(m_axi_data_ARLOCK),
    .m_axi_data_ARREGION(m_axi_data_ARREGION),
    .m_axi_data_ARCACHE(m_axi_data_ARCACHE),
    .m_axi_data_ARPROT(m_axi_data_ARPROT),
    .m_axi_data_ARQOS(m_axi_data_ARQOS),
    .m_axi_data_ARUSER(),
    .m_axi_data_ARVALID(m_axi_data_ARVALID),
    .m_axi_data_ARREADY(m_axi_data_ARREADY),
    .m_axi_data_RID(1'B0),
    .m_axi_data_RDATA(m_axi_data_RDATA),
    .m_axi_data_RRESP(m_axi_data_RRESP),
    .m_axi_data_RLAST(m_axi_data_RLAST),
    .m_axi_data_RUSER(1'B0),
    .m_axi_data_RVALID(m_axi_data_RVALID),
    .m_axi_data_RREADY(m_axi_data_RREADY),
    .P_sm_TVALID(P_sm_TVALID),
    .P_sm_TREADY(P_sm_TREADY),
    .P_sm_TDATA(P_sm_TDATA),
    .P_sm_TLAST(P_sm_TLAST),
    .P_sm_TUSER(P_sm_TUSER)
  );
endmodule
