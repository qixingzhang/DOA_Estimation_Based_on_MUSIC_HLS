-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity bit_reverse235 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    X_R_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    X_R_ce0 : OUT STD_LOGIC;
    X_R_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    X_I_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    X_I_ce0 : OUT STD_LOGIC;
    X_I_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    OUT_R_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    OUT_R_ce0 : OUT STD_LOGIC;
    OUT_R_we0 : OUT STD_LOGIC;
    OUT_R_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    OUT_I_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    OUT_I_ce0 : OUT STD_LOGIC;
    OUT_I_we0 : OUT STD_LOGIC;
    OUT_I_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of bit_reverse235 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv11_400 : STD_LOGIC_VECTOR (10 downto 0) := "10000000000";
    constant ap_const_lv11_1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_const_lv4_A : STD_LOGIC_VECTOR (3 downto 0) := "1010";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal trunc_ln108_fu_167_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln108_fu_171_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln108_reg_253 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_15_fu_181_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal i_15_reg_261 : STD_LOGIC_VECTOR (10 downto 0);
    signal i_fu_193_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal rev_fu_207_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln110_fu_187_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln112_fu_225_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal icmp_ln125_fu_229_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln125_reg_284 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln128_fu_234_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln128_reg_288 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal input_assign_reg_124 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal reversed_reg_136 : STD_LOGIC_VECTOR (31 downto 0);
    signal icmp_ln123_fu_175_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_0_i_reg_147 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_0_i_reg_158 : STD_LOGIC_VECTOR (9 downto 0);
    signal zext_ln127_fu_240_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal trunc_ln111_fu_199_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal trunc_ln110_fu_203_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal input_assign_1_fu_215_p4 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




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


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((icmp_ln123_fu_175_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    i_0_i_reg_147_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln123_fu_175_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_0_i_reg_147 <= ap_const_lv4_0;
            elsif (((icmp_ln110_fu_187_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_i_reg_147 <= i_fu_193_p2;
            end if; 
        end if;
    end process;

    input_assign_reg_124_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                input_assign_reg_124 <= i_15_reg_261;
            elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                input_assign_reg_124 <= ap_const_lv11_0;
            end if; 
        end if;
    end process;

    p_0_i_reg_158_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln123_fu_175_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                p_0_i_reg_158 <= trunc_ln108_fu_167_p1;
            elsif (((icmp_ln110_fu_187_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                p_0_i_reg_158 <= zext_ln112_fu_225_p1;
            end if; 
        end if;
    end process;

    reversed_reg_136_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln123_fu_175_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                reversed_reg_136 <= ap_const_lv32_0;
            elsif (((icmp_ln110_fu_187_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                reversed_reg_136 <= rev_fu_207_p3;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_15_reg_261 <= i_15_fu_181_p2;
                    zext_ln108_reg_253(10 downto 0) <= zext_ln108_fu_171_p1(10 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln110_fu_187_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                icmp_ln125_reg_284 <= icmp_ln125_fu_229_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln125_fu_229_p2 = ap_const_lv1_0) and (icmp_ln110_fu_187_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    zext_ln128_reg_288(31 downto 0) <= zext_ln128_fu_234_p1(31 downto 0);
            end if;
        end if;
    end process;
    zext_ln108_reg_253(31 downto 11) <= "000000000000000000000";
    zext_ln128_reg_288(63 downto 32) <= "00000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state3, icmp_ln110_fu_187_p2, icmp_ln125_fu_229_p2, icmp_ln123_fu_175_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln123_fu_175_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln125_fu_229_p2 = ap_const_lv1_1) and (icmp_ln110_fu_187_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                elsif (((icmp_ln125_fu_229_p2 = ap_const_lv1_0) and (icmp_ln110_fu_187_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;

    OUT_I_address0_assign_proc : process(zext_ln128_reg_288, ap_CS_fsm_state4, ap_CS_fsm_state5, zext_ln127_fu_240_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            OUT_I_address0 <= zext_ln128_reg_288(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            OUT_I_address0 <= zext_ln127_fu_240_p1(10 - 1 downto 0);
        else 
            OUT_I_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    OUT_I_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            OUT_I_ce0 <= ap_const_logic_1;
        else 
            OUT_I_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    OUT_I_d0 <= X_I_q0;

    OUT_I_we0_assign_proc : process(icmp_ln125_reg_284, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or ((icmp_ln125_reg_284 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            OUT_I_we0 <= ap_const_logic_1;
        else 
            OUT_I_we0 <= ap_const_logic_0;
        end if; 
    end process;


    OUT_R_address0_assign_proc : process(zext_ln128_reg_288, ap_CS_fsm_state4, ap_CS_fsm_state5, zext_ln127_fu_240_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            OUT_R_address0 <= zext_ln128_reg_288(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            OUT_R_address0 <= zext_ln127_fu_240_p1(10 - 1 downto 0);
        else 
            OUT_R_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    OUT_R_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            OUT_R_ce0 <= ap_const_logic_1;
        else 
            OUT_R_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    OUT_R_d0 <= X_R_q0;

    OUT_R_we0_assign_proc : process(icmp_ln125_reg_284, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or ((icmp_ln125_reg_284 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            OUT_R_we0 <= ap_const_logic_1;
        else 
            OUT_R_we0 <= ap_const_logic_0;
        end if; 
    end process;


    X_I_address0_assign_proc : process(ap_CS_fsm_state3, zext_ln128_fu_234_p1, ap_CS_fsm_state4, zext_ln127_fu_240_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            X_I_address0 <= zext_ln127_fu_240_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            X_I_address0 <= zext_ln128_fu_234_p1(10 - 1 downto 0);
        else 
            X_I_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    X_I_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            X_I_ce0 <= ap_const_logic_1;
        else 
            X_I_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    X_R_address0_assign_proc : process(ap_CS_fsm_state3, zext_ln128_fu_234_p1, ap_CS_fsm_state4, zext_ln127_fu_240_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            X_R_address0 <= zext_ln127_fu_240_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            X_R_address0 <= zext_ln128_fu_234_p1(10 - 1 downto 0);
        else 
            X_R_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    X_R_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            X_R_ce0 <= ap_const_logic_1;
        else 
            X_R_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state2, icmp_ln123_fu_175_p2)
    begin
        if (((icmp_ln123_fu_175_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln123_fu_175_p2)
    begin
        if (((icmp_ln123_fu_175_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_15_fu_181_p2 <= std_logic_vector(unsigned(ap_const_lv11_1) + unsigned(input_assign_reg_124));
    i_fu_193_p2 <= std_logic_vector(unsigned(i_0_i_reg_147) + unsigned(ap_const_lv4_1));
    icmp_ln110_fu_187_p2 <= "1" when (i_0_i_reg_147 = ap_const_lv4_A) else "0";
    icmp_ln123_fu_175_p2 <= "1" when (input_assign_reg_124 = ap_const_lv11_400) else "0";
    icmp_ln125_fu_229_p2 <= "1" when (unsigned(zext_ln108_reg_253) > unsigned(reversed_reg_136)) else "0";
    input_assign_1_fu_215_p4 <= p_0_i_reg_158(9 downto 1);
    rev_fu_207_p3 <= (trunc_ln111_fu_199_p1 & trunc_ln110_fu_203_p1);
    trunc_ln108_fu_167_p1 <= input_assign_reg_124(10 - 1 downto 0);
    trunc_ln110_fu_203_p1 <= p_0_i_reg_158(1 - 1 downto 0);
    trunc_ln111_fu_199_p1 <= reversed_reg_136(31 - 1 downto 0);
    zext_ln108_fu_171_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(input_assign_reg_124),32));
    zext_ln112_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(input_assign_1_fu_215_p4),10));
    zext_ln127_fu_240_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(input_assign_reg_124),64));
    zext_ln128_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(reversed_reg_136),64));
end behav;
