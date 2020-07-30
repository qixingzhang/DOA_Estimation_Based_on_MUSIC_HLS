-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity sort_eigval is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    eigval_0_read : IN STD_LOGIC_VECTOR (31 downto 0);
    eigval_1_read : IN STD_LOGIC_VECTOR (31 downto 0);
    eigval_2_read : IN STD_LOGIC_VECTOR (31 downto 0);
    eigval_3_read : IN STD_LOGIC_VECTOR (31 downto 0);
    sort_index_0_read : IN STD_LOGIC_VECTOR (31 downto 0);
    sort_index_1_read : IN STD_LOGIC_VECTOR (31 downto 0);
    sort_index_2_read : IN STD_LOGIC_VECTOR (31 downto 0);
    sort_index_3_read : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of sort_eigval is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (6 downto 0) := "0000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (6 downto 0) := "0000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (6 downto 0) := "0001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (6 downto 0) := "0010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (6 downto 0) := "0100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (6 downto 0) := "1000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv5_2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_264_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal sort_index_3_1_fu_274_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln81_fu_258_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sort_index_2_1_fu_288_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_1_1_fu_302_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_0_1_fu_316_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln85_fu_330_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal i_1_fu_340_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_1_reg_726 : STD_LOGIC_VECTOR (1 downto 0);
    signal j_2_fu_374_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_2_reg_731 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_1_fu_408_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_reg_740 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln86_fu_380_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_fu_442_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_reg_746 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln92_fu_452_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln92_reg_752 : STD_LOGIC_VECTOR (1 downto 0);
    signal temp_fu_456_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_reg_760 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln87_fu_504_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_reg_768 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal icmp_ln87_1_fu_510_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_1_reg_773 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_2_fu_516_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_2_reg_778 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_3_fu_522_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln87_3_reg_783 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_548_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal sort_index_3_3_fu_555_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal sort_index_2_4_fu_607_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_1_4_fu_619_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_0_4_fu_632_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_0_0_reg_110 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_1_0_reg_120 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_2_0_reg_130 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_3_0_reg_140 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_0_reg_150 : STD_LOGIC_VECTOR (2 downto 0);
    signal sort_index_0_2_reg_161 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_1_2_reg_172 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_2_2_reg_183 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_3_2_reg_194 : STD_LOGIC_VECTOR (31 downto 0);
    signal flag_reg_205 : STD_LOGIC_VECTOR (1 downto 0);
    signal flag_0_reg_217 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln84_fu_334_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_0_in_reg_227 : STD_LOGIC_VECTOR (31 downto 0);
    signal phi_ln93_reg_236 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln81_fu_254_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln82_fu_270_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_fu_390_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_fu_390_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_fu_408_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln86_fu_370_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_2_fu_424_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_2_fu_424_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_fu_442_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal temp_fu_456_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal bitcast_ln87_fu_470_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcast_ln87_1_fu_487_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_4_fu_473_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln87_3_fu_483_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_5_fu_490_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln87_4_fu_500_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal or_ln87_fu_528_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln87_1_fu_532_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln87_fu_536_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_250_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln87_1_fu_542_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sort_index_2_3_fu_568_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_1_3_fu_581_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sort_index_0_3_fu_594_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_return_0_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_return_1_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_return_2_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_return_3_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (6 downto 0);

    component music_fcmp_32ns_3pcA IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        opcode : IN STD_LOGIC_VECTOR (4 downto 0);
        dout : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;


    component music_mux_42_32_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    music_fcmp_32ns_3pcA_U171 : component music_fcmp_32ns_3pcA
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 1)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_1_reg_740,
        din1 => tmp_3_reg_746,
        ce => ap_const_logic_1,
        opcode => ap_const_lv5_2,
        dout => grp_fu_250_p2);

    music_mux_42_32_1_1_U172 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_3_0_reg_140,
        din1 => sort_index_3_0_reg_140,
        din2 => sort_index_3_0_reg_140,
        din3 => zext_ln81_fu_254_p1,
        din4 => trunc_ln82_fu_270_p1,
        dout => sort_index_3_1_fu_274_p6);

    music_mux_42_32_1_1_U173 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_2_0_reg_130,
        din1 => sort_index_2_0_reg_130,
        din2 => zext_ln81_fu_254_p1,
        din3 => sort_index_2_0_reg_130,
        din4 => trunc_ln82_fu_270_p1,
        dout => sort_index_2_1_fu_288_p6);

    music_mux_42_32_1_1_U174 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_1_0_reg_120,
        din1 => zext_ln81_fu_254_p1,
        din2 => sort_index_1_0_reg_120,
        din3 => sort_index_1_0_reg_120,
        din4 => trunc_ln82_fu_270_p1,
        dout => sort_index_1_1_fu_302_p6);

    music_mux_42_32_1_1_U175 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => zext_ln81_fu_254_p1,
        din1 => sort_index_0_0_reg_110,
        din2 => sort_index_0_0_reg_110,
        din3 => sort_index_0_0_reg_110,
        din4 => trunc_ln82_fu_270_p1,
        dout => sort_index_0_1_fu_316_p6);

    music_mux_42_32_1_1_U176 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_0_2_reg_161,
        din1 => sort_index_1_2_reg_172,
        din2 => sort_index_2_2_reg_183,
        din3 => sort_index_3_2_reg_194,
        din4 => tmp_fu_390_p5,
        dout => tmp_fu_390_p6);

    music_mux_42_32_1_1_U177 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => eigval_0_read,
        din1 => eigval_1_read,
        din2 => eigval_2_read,
        din3 => eigval_3_read,
        din4 => tmp_1_fu_408_p5,
        dout => tmp_1_fu_408_p6);

    music_mux_42_32_1_1_U178 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_0_2_reg_161,
        din1 => sort_index_1_2_reg_172,
        din2 => sort_index_2_2_reg_183,
        din3 => sort_index_3_2_reg_194,
        din4 => tmp_2_fu_424_p5,
        dout => tmp_2_fu_424_p6);

    music_mux_42_32_1_1_U179 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => eigval_0_read,
        din1 => eigval_1_read,
        din2 => eigval_2_read,
        din3 => eigval_3_read,
        din4 => tmp_3_fu_442_p5,
        dout => tmp_3_fu_442_p6);

    music_mux_42_32_1_1_U180 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_0_2_reg_161,
        din1 => sort_index_1_2_reg_172,
        din2 => sort_index_2_2_reg_183,
        din3 => sort_index_3_2_reg_194,
        din4 => temp_fu_456_p5,
        dout => temp_fu_456_p6);

    music_mux_42_32_1_1_U181 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_3_2_reg_194,
        din1 => sort_index_3_2_reg_194,
        din2 => sort_index_3_2_reg_194,
        din3 => phi_ln93_reg_236,
        din4 => trunc_ln92_reg_752,
        dout => sort_index_3_3_fu_555_p6);

    music_mux_42_32_1_1_U182 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_2_2_reg_183,
        din1 => sort_index_2_2_reg_183,
        din2 => phi_ln93_reg_236,
        din3 => sort_index_2_2_reg_183,
        din4 => trunc_ln92_reg_752,
        dout => sort_index_2_3_fu_568_p6);

    music_mux_42_32_1_1_U183 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_1_2_reg_172,
        din1 => phi_ln93_reg_236,
        din2 => sort_index_1_2_reg_172,
        din3 => sort_index_1_2_reg_172,
        din4 => trunc_ln92_reg_752,
        dout => sort_index_1_3_fu_581_p6);

    music_mux_42_32_1_1_U184 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => phi_ln93_reg_236,
        din1 => sort_index_0_2_reg_161,
        din2 => sort_index_0_2_reg_161,
        din3 => sort_index_0_2_reg_161,
        din4 => trunc_ln92_reg_752,
        dout => sort_index_0_3_fu_594_p6);

    music_mux_42_32_1_1_U185 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_2_3_fu_568_p6,
        din1 => sort_index_2_3_fu_568_p6,
        din2 => temp_reg_760,
        din3 => temp_reg_760,
        din4 => flag_reg_205,
        dout => sort_index_2_4_fu_607_p6);

    music_mux_42_32_1_1_U186 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => sort_index_1_3_fu_581_p6,
        din1 => temp_reg_760,
        din2 => sort_index_1_3_fu_581_p6,
        din3 => sort_index_1_3_fu_581_p6,
        din4 => flag_reg_205,
        dout => sort_index_1_4_fu_619_p6);

    music_mux_42_32_1_1_U187 : component music_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => temp_reg_760,
        din1 => sort_index_0_3_fu_594_p6,
        din2 => sort_index_0_3_fu_594_p6,
        din3 => sort_index_0_3_fu_594_p6,
        din4 => flag_reg_205,
        dout => sort_index_0_4_fu_632_p6);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_return_0_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_0_preg <= ap_const_lv32_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
                    ap_return_0_preg <= sort_index_0_2_reg_161;
                end if; 
            end if;
        end if;
    end process;


    ap_return_1_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_1_preg <= ap_const_lv32_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
                    ap_return_1_preg <= sort_index_1_2_reg_172;
                end if; 
            end if;
        end if;
    end process;


    ap_return_2_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_2_preg <= ap_const_lv32_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
                    ap_return_2_preg <= sort_index_2_2_reg_183;
                end if; 
            end if;
        end if;
    end process;


    ap_return_3_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_3_preg <= ap_const_lv32_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
                    ap_return_3_preg <= sort_index_3_2_reg_194;
                end if; 
            end if;
        end if;
    end process;


    flag_0_reg_217_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln84_fu_334_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                flag_0_reg_217 <= zext_ln85_fu_330_p1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                flag_0_reg_217 <= j_fu_548_p3;
            end if; 
        end if;
    end process;

    flag_reg_205_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                flag_reg_205 <= ap_const_lv2_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                flag_reg_205 <= i_1_reg_726;
            end if; 
        end if;
    end process;

    i_0_reg_150_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_0_reg_150 <= i_fu_264_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_150 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    j_0_in_reg_227_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln84_fu_334_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                j_0_in_reg_227 <= zext_ln85_fu_330_p1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                j_0_in_reg_227 <= j_2_reg_731;
            end if; 
        end if;
    end process;

    phi_ln93_reg_236_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln86_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                if ((flag_reg_205 = ap_const_lv2_0)) then 
                    phi_ln93_reg_236 <= sort_index_0_2_reg_161;
                elsif ((not((flag_reg_205 = ap_const_lv2_0)) and not((flag_reg_205 = ap_const_lv2_1)))) then 
                    phi_ln93_reg_236 <= sort_index_2_2_reg_183;
                elsif ((flag_reg_205 = ap_const_lv2_1)) then 
                    phi_ln93_reg_236 <= sort_index_1_2_reg_172;
                end if;
            end if; 
        end if;
    end process;

    sort_index_0_0_reg_110_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_0_0_reg_110 <= sort_index_0_1_fu_316_p6;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                sort_index_0_0_reg_110 <= sort_index_0_read;
            end if; 
        end if;
    end process;

    sort_index_0_2_reg_161_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_0_2_reg_161 <= sort_index_0_0_reg_110;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                sort_index_0_2_reg_161 <= sort_index_0_4_fu_632_p6;
            end if; 
        end if;
    end process;

    sort_index_1_0_reg_120_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_1_0_reg_120 <= sort_index_1_1_fu_302_p6;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                sort_index_1_0_reg_120 <= sort_index_1_read;
            end if; 
        end if;
    end process;

    sort_index_1_2_reg_172_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_1_2_reg_172 <= sort_index_1_0_reg_120;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                sort_index_1_2_reg_172 <= sort_index_1_4_fu_619_p6;
            end if; 
        end if;
    end process;

    sort_index_2_0_reg_130_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_2_0_reg_130 <= sort_index_2_1_fu_288_p6;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                sort_index_2_0_reg_130 <= sort_index_2_read;
            end if; 
        end if;
    end process;

    sort_index_2_2_reg_183_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_2_2_reg_183 <= sort_index_2_0_reg_130;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                sort_index_2_2_reg_183 <= sort_index_2_4_fu_607_p6;
            end if; 
        end if;
    end process;

    sort_index_3_0_reg_140_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_3_0_reg_140 <= sort_index_3_1_fu_274_p6;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                sort_index_3_0_reg_140 <= sort_index_3_read;
            end if; 
        end if;
    end process;

    sort_index_3_2_reg_194_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                sort_index_3_2_reg_194 <= sort_index_3_0_reg_140;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                sort_index_3_2_reg_194 <= sort_index_3_3_fu_555_p6;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                i_1_reg_726 <= i_1_fu_340_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                icmp_ln87_1_reg_773 <= icmp_ln87_1_fu_510_p2;
                icmp_ln87_2_reg_778 <= icmp_ln87_2_fu_516_p2;
                icmp_ln87_3_reg_783 <= icmp_ln87_3_fu_522_p2;
                icmp_ln87_reg_768 <= icmp_ln87_fu_504_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                j_2_reg_731 <= j_2_fu_374_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln86_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                temp_reg_760 <= temp_fu_456_p6;
                trunc_ln92_reg_752 <= trunc_ln92_fu_452_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln86_fu_380_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                tmp_1_reg_740 <= tmp_1_fu_408_p6;
                tmp_3_reg_746 <= tmp_3_fu_442_p6;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln81_fu_258_p2, ap_CS_fsm_state3, ap_CS_fsm_state4, icmp_ln86_fu_380_p2, icmp_ln84_fu_334_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln81_fu_258_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln86_fu_380_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXXXXX";
        end case;
    end process;
    and_ln87_1_fu_542_p2 <= (grp_fu_250_p2 and and_ln87_fu_536_p2);
    and_ln87_fu_536_p2 <= (or_ln87_fu_528_p2 and or_ln87_1_fu_532_p2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state3, icmp_ln84_fu_334_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state3, icmp_ln84_fu_334_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_0_assign_proc : process(ap_CS_fsm_state3, sort_index_0_2_reg_161, icmp_ln84_fu_334_p2, ap_return_0_preg)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
            ap_return_0 <= sort_index_0_2_reg_161;
        else 
            ap_return_0 <= ap_return_0_preg;
        end if; 
    end process;


    ap_return_1_assign_proc : process(ap_CS_fsm_state3, sort_index_1_2_reg_172, icmp_ln84_fu_334_p2, ap_return_1_preg)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
            ap_return_1 <= sort_index_1_2_reg_172;
        else 
            ap_return_1 <= ap_return_1_preg;
        end if; 
    end process;


    ap_return_2_assign_proc : process(ap_CS_fsm_state3, sort_index_2_2_reg_183, icmp_ln84_fu_334_p2, ap_return_2_preg)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
            ap_return_2 <= sort_index_2_2_reg_183;
        else 
            ap_return_2 <= ap_return_2_preg;
        end if; 
    end process;


    ap_return_3_assign_proc : process(ap_CS_fsm_state3, sort_index_3_2_reg_194, icmp_ln84_fu_334_p2, ap_return_3_preg)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (icmp_ln84_fu_334_p2 = ap_const_lv1_1))) then 
            ap_return_3 <= sort_index_3_2_reg_194;
        else 
            ap_return_3 <= ap_return_3_preg;
        end if; 
    end process;

    bitcast_ln87_1_fu_487_p1 <= tmp_3_reg_746;
    bitcast_ln87_fu_470_p1 <= tmp_1_reg_740;
    i_1_fu_340_p2 <= std_logic_vector(unsigned(flag_reg_205) + unsigned(ap_const_lv2_1));
    i_fu_264_p2 <= std_logic_vector(unsigned(i_0_reg_150) + unsigned(ap_const_lv3_1));
    icmp_ln81_fu_258_p2 <= "1" when (i_0_reg_150 = ap_const_lv3_4) else "0";
    icmp_ln84_fu_334_p2 <= "1" when (flag_reg_205 = ap_const_lv2_3) else "0";
    icmp_ln86_fu_380_p2 <= "1" when (j_0_in_reg_227 = ap_const_lv32_3) else "0";
    icmp_ln87_1_fu_510_p2 <= "1" when (trunc_ln87_3_fu_483_p1 = ap_const_lv23_0) else "0";
    icmp_ln87_2_fu_516_p2 <= "0" when (tmp_5_fu_490_p4 = ap_const_lv8_FF) else "1";
    icmp_ln87_3_fu_522_p2 <= "1" when (trunc_ln87_4_fu_500_p1 = ap_const_lv23_0) else "0";
    icmp_ln87_fu_504_p2 <= "0" when (tmp_4_fu_473_p4 = ap_const_lv8_FF) else "1";
    j_2_fu_374_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(j_0_in_reg_227));
    j_fu_548_p3 <= 
        j_2_reg_731 when (and_ln87_1_fu_542_p2(0) = '1') else 
        flag_0_reg_217;
    or_ln87_1_fu_532_p2 <= (icmp_ln87_3_reg_783 or icmp_ln87_2_reg_778);
    or_ln87_fu_528_p2 <= (icmp_ln87_reg_768 or icmp_ln87_1_reg_773);
    temp_fu_456_p5 <= flag_0_reg_217(2 - 1 downto 0);
    tmp_1_fu_408_p5 <= tmp_fu_390_p6(2 - 1 downto 0);
    tmp_2_fu_424_p5 <= std_logic_vector(unsigned(ap_const_lv2_1) + unsigned(trunc_ln86_fu_370_p1));
    tmp_3_fu_442_p5 <= tmp_2_fu_424_p6(2 - 1 downto 0);
    tmp_4_fu_473_p4 <= bitcast_ln87_fu_470_p1(30 downto 23);
    tmp_5_fu_490_p4 <= bitcast_ln87_1_fu_487_p1(30 downto 23);
    tmp_fu_390_p5 <= flag_0_reg_217(2 - 1 downto 0);
    trunc_ln82_fu_270_p1 <= i_0_reg_150(2 - 1 downto 0);
    trunc_ln86_fu_370_p1 <= j_0_in_reg_227(2 - 1 downto 0);
    trunc_ln87_3_fu_483_p1 <= bitcast_ln87_fu_470_p1(23 - 1 downto 0);
    trunc_ln87_4_fu_500_p1 <= bitcast_ln87_1_fu_487_p1(23 - 1 downto 0);
    trunc_ln92_fu_452_p1 <= flag_0_reg_217(2 - 1 downto 0);
    zext_ln81_fu_254_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_150),32));
    zext_ln85_fu_330_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(flag_reg_205),32));
end behav;
