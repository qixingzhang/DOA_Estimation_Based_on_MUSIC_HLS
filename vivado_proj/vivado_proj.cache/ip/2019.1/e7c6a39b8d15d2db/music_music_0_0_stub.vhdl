-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Fri Jul 31 02:51:04 2020
-- Host        : DESKTOP-2L4T92T running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ music_music_0_0_stub.vhdl
-- Design      : music_music_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    X_ce0 : out STD_LOGIC;
    Xj_f_re_ce0 : out STD_LOGIC;
    Xj_f_re_we0 : out STD_LOGIC;
    Xj_f_im_ce0 : out STD_LOGIC;
    Xj_f_im_we0 : out STD_LOGIC;
    P_sm_ce0 : out STD_LOGIC;
    P_sm_we0 : out STD_LOGIC;
    s_axi_AXILiteS_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_AWVALID : in STD_LOGIC;
    s_axi_AXILiteS_AWREADY : out STD_LOGIC;
    s_axi_AXILiteS_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_WVALID : in STD_LOGIC;
    s_axi_AXILiteS_WREADY : out STD_LOGIC;
    s_axi_AXILiteS_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_BVALID : out STD_LOGIC;
    s_axi_AXILiteS_BREADY : in STD_LOGIC;
    s_axi_AXILiteS_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_ARVALID : in STD_LOGIC;
    s_axi_AXILiteS_ARREADY : out STD_LOGIC;
    s_axi_AXILiteS_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_RVALID : out STD_LOGIC;
    s_axi_AXILiteS_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    X_address0 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    X_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    Xj_f_re_address0 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Xj_f_re_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Xj_f_re_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    Xj_f_im_address0 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Xj_f_im_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Xj_f_im_q0 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    P_sm_address0 : out STD_LOGIC_VECTOR ( 8 downto 0 );
    P_sm_d0 : out STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "X_ce0,Xj_f_re_ce0,Xj_f_re_we0,Xj_f_im_ce0,Xj_f_im_we0,P_sm_ce0,P_sm_we0,s_axi_AXILiteS_AWADDR[3:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[3:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,interrupt,X_address0[15:0],X_q0[31:0],Xj_f_re_address0[15:0],Xj_f_re_d0[31:0],Xj_f_re_q0[31:0],Xj_f_im_address0[15:0],Xj_f_im_d0[31:0],Xj_f_im_q0[31:0],P_sm_address0[8:0],P_sm_d0[31:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "music,Vivado 2019.1";
begin
end;
