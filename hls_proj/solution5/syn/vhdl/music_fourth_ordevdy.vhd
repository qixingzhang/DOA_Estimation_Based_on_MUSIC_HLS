-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity music_fourth_ordevdy_rom is 
    generic(
             DWIDTH     : integer := 33; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 256
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of music_fourth_ordevdy_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000000000000000000000001011110", 
    1 => "000000100000011110000011110110111", 
    2 => "000001000000111100000010011011101", 
    3 => "000001100001011001110110111011100", 
    4 => "000010000001110111011100100010110", 
    5 => "000010100010010100101101111110000", 
    6 => "000011000010110001100110100000101", 
    7 => "000011100011001110000001000001101", 
    8 => "000100000011101001111000011001101", 
    9 => "000100100100000101000111110100001", 
    10 => "000101000100011111101010001000100", 
    11 => "000101100100111001011010010001101", 
    12 => "000110000101010010010011100011010", 
    13 => "000110100101101010010000110101101", 
    14 => "000111000110000001001100111111101", 
    15 => "000111100110010111000011001111001", 
    16 => "001000000110101011101110010100011", 
    17 => "001000100110111111001001100110100", 
    18 => "001001000111010001001111110011010", 
    19 => "001001100111100001111100000001110", 
    20 => "001010000111110001001001011100001", 
    21 => "001010100111111110110010110111010", 
    22 => "001011001000001010110011011011110", 
    23 => "001011101000010101000110010001001", 
    24 => "001100001000011101100110001110111", 
    25 => "001100101000100100001110100011001", 
    26 => "001101001000101000111010000101111", 
    27 => "001101101000101011100011111001101", 
    28 => "001110001000101100000111001111010", 
    29 => "001110101000101010011111001101011", 
    30 => "001111001000100110100110011010101", 
    31 => "001111101000100000011000100011010", 
    32 => "010000001000010111110000001110010", 
    33 => "010000101000001100101000110001001", 
    34 => "010001000111111110111101001011101", 
    35 => "010001100111101110101000100010110", 
    36 => "010010000111011011100101111100101", 
    37 => "010010100111000101110000110001010", 
    38 => "010011000110101101000011110010010", 
    39 => "010011100110010001011010001010000", 
    40 => "010100000101110010101111001111000", 
    41 => "010100100101010000111101111100010", 
    42 => "010101000100101100000001011100100", 
    43 => "010101100100000011110101001110000", 
    44 => "010110000011011000010011111010011", 
    45 => "010110100010101001011001000111110", 
    46 => "010111000001110110111111101011100", 
    47 => "010111100001000001000011000111011", 
    48 => "011000000000000111011110011010111", 
    49 => "011000011111001010001100110101010", 
    50 => "011000111110001001001001100111101", 
    51 => "011001011101000100001111111001011", 
    52 => "011001111011111011011010111001000", 
    53 => "011010011010101110100110000000101", 
    54 => "011010111001011101101100010011100", 
    55 => "011011011000001000101001001010011", 
    56 => "011011110110101111010111110100000", 
    57 => "011100010101010001110011100001100", 
    58 => "011100110011101111110111101100111", 
    59 => "011101010010001001011111011101000", 
    60 => "011101110000011110100110010110000", 
    61 => "011110001110101111000111010100110", 
    62 => "011110101100111010111110000111000", 
    63 => "011111001011000010000101101101110", 
    64 => "011111101001000100011001110101101", 
    65 => "100000000111000001110101100111000", 
    66 => "100000100100111010010100011101101", 
    67 => "100001000010101101110001101101110", 
    68 => "100001100000011100001000111101010", 
    69 => "100001111110000101010101100001010", 
    70 => "100010011011101001010010101110011", 
    71 => "100010111001000111111100010000110", 
    72 => "100011010110100001001101001000100", 
    73 => "100011110011110101000001011010111", 
    74 => "100100010001000011010100000001001", 
    75 => "100100101110001100000000110100010", 
    76 => "100101001011001111000011001110000", 
    77 => "100101101000001100010110100111101", 
    78 => "100110000101000011110110101011010", 
    79 => "100110100001110101011110111111101", 
    80 => "100110111110100001001010111001001", 
    81 => "100111011011000110110110001101000", 
    82 => "100111110111100110011100011010111", 
    83 => "101000010011111111111001001010010", 
    84 => "101000110000010011000111111101010", 
    85 => "101001001100100000000100101011110", 
    86 => "101001101000100110101010101011000", 
    87 => "101010000100100110110101110100001", 
    88 => "101010100000100000100001101100101", 
    89 => "101010111100010011101010000000011", 
    90 => "101011011000000000001010100011101", 
    91 => "101011110011100101111110111101010", 
    92 => "101100001111000101000011001001111", 
    93 => "101100101010011101010010100101001", 
    94 => "101101000101101110101001010011100", 
    95 => "101101100000111001000010111100000", 
    96 => "101101111011111100011011011010001", 
    97 => "101110010110111000101110100111101", 
    98 => "101110110001101101111000001001110", 
    99 => "101111001100011011110100000110010", 
    100 => "101111100111000010011110001001010", 
    101 => "110000000001100001110010011000001", 
    102 => "110000011011111001101100101001011", 
    103 => "110000110110001010001000110101001", 
    104 => "110001010000010011000011000000110", 
    105 => "110001101010010100010111000000110", 
    106 => "110010000100001110000000111010110", 
    107 => "110010011101111111111100100111010", 
    108 => "110010110111101010000110001001110", 
    109 => "110011010001001100011001110101100", 
    110 => "110011101010100110110011011001001", 
    111 => "110100000011111001001111000101010", 
    112 => "110100011101000011101000110010001", 
    113 => "110100110110000101111100111010001", 
    114 => "110101001111000000000111100111000", 
    115 => "110101100111110010000100101001101", 
    116 => "110110000000011011110000101100111", 
    117 => "110110011000111101000111100110110", 
    118 => "110110110001010110000101101111111", 
    119 => "110111001001100110100111010001000", 
    120 => "110111100001101110101000100011001", 
    121 => "110111111001101110000101101110111", 
    122 => "111000010001100100111011001011000", 
    123 => "111000101001010011000101010101101", 
    124 => "111001000000111000100000010100111", 
    125 => "111001011000010101001000101110001", 
    126 => "111001101111101000111010101100010", 
    127 => "111010000110110011110010110010000", 
    128 => "000000000000000000000000000001101", 
    129 => "000000000101000110011010111100100", 
    130 => "000000001010001100110101001111010", 
    131 => "000000001111010011001110100000000", 
    132 => "000000010100011001100110000100000", 
    133 => "000000011001011111111011010111001", 
    134 => "000000011110100110001101110010000", 
    135 => "000000100011101100011100111101100", 
    136 => "000000101000110010101000000011100", 
    137 => "000000101101111000101110110011101", 
    138 => "000000110010111110110000011100000", 
    139 => "000000111000000100101100100001111", 
    140 => "000000111101001010100010010001110", 
    141 => "000001000010010000010001011011111", 
    142 => "000001000111010101111001001111111", 
    143 => "000001001100011011011001001010110", 
    144 => "000001010001100000110000101100010", 
    145 => "000001010110100101111111010001000", 
    146 => "000001011011101011000100010010110", 
    147 => "000001100000101111111111010000010", 
    148 => "000001100101110100101111011110000", 
    149 => "000001101010111001010100100011111", 
    150 => "000001101111111101101101110101101", 
    151 => "000001110101000001111010101011100", 
    152 => "000001111010000101111010110110011", 
    153 => "000001111111001001101101011101100", 
    154 => "000010000100001101010010001000111", 
    155 => "000010001001010000101000000100000", 
    156 => "000010001110010011101111000010000", 
    157 => "000010010011010110100110010100110", 
    158 => "000010011000011001001101011000100", 
    159 => "000010011101011011100011100101110", 
    160 => "000010100010011101101000100100011", 
    161 => "000010100111011111011011100111000", 
    162 => "000010101100100000111100000111100", 
    163 => "000010110001100010001001101111000", 
    164 => "000010110110100011000011110010011", 
    165 => "000010111011100011101001110111001", 
    166 => "000011000000100011111011001010011", 
    167 => "000011000101100011110111001111001", 
    168 => "000011001010100011011101100100100", 
    169 => "000011001111100010101101101001110", 
    170 => "000011010100100001100110111101001", 
    171 => "000011011001100000001000101010011", 
    172 => "000011011110011110010010100110101", 
    173 => "000011100011011100000100000100101", 
    174 => "000011101000011001011100011001000", 
    175 => "000011101101010110011011001000011", 
    176 => "000011110010010010111111111000001", 
    177 => "000011110111001111001001110111100", 
    178 => "000011111100001010111000101001011", 
    179 => "000100000001000110001011101011100", 
    180 => "000100000110000001000010011010111", 
    181 => "000100001010111011011100011001010", 
    182 => "000100001111110101011000111101001", 
    183 => "000100010100101110110111100100111", 
    184 => "000100011001100111110111110001000", 
    185 => "000100011110100000011000111111100", 
    186 => "000100100011011000011010101101011", 
    187 => "000100101000001111111100010100011", 
    188 => "000100101101000110111101010101011", 
    189 => "000100110001111101011101011010100", 
    190 => "000100110110110011011011100111110", 
    191 => "000100111011101000110111110100011", 
    192 => "000101000000011101110001010000001", 
    193 => "000101000101010010000111010101001", 
    194 => "000101001010000101111001101100100", 
    195 => "000101001110111001000111110111100", 
    196 => "000101010011101011110001000010111", 
    197 => "000101011000011101110101000110001", 
    198 => "000101011101001111010011000000010", 
    199 => "000101100010000000001010110000001", 
    200 => "000101100110110000011011011000010", 
    201 => "000101101011100000000100110000110", 
    202 => "000101110000001111000110001001001", 
    203 => "000101110100111101011110111110010", 
    204 => "000101111001101011001110110111011", 
    205 => "000101111110011000010101010000111", 
    206 => "000110000011000100110001101101000", 
    207 => "000110000111110000100011011110000", 
    208 => "000110001100011011101010001101111", 
    209 => "000110010001000110000101100010101", 
    210 => "000110010101101111110100110001010", 
    211 => "000110011010011000110111010011010", 
    212 => "000110011111000001001100101111000", 
    213 => "000110100011101000110100101111000", 
    214 => "000110101000001111101110100111101", 
    215 => "000110101100110101111001110111010", 
    216 => "000110110001011011010101111111001", 
    217 => "000110110110000000000010100010110", 
    218 => "000110111010100011111111000100100", 
    219 => "000110111111000111001010111101100", 
    220 => "000111000011101001100101101111011", 
    221 => "000111001000001011001110111110100", 
    222 => "000111001100101100000110000101111", 
    223 => "000111010001001100001010101101011", 
    224 => "000111010101101011011100001110001", 
    225 => "000111011010001001111010010010010", 
    226 => "000111011110100111100100010000011", 
    227 => "000111100011000100011001101001010", 
    228 => "000111100111100000011010000111011", 
    229 => "000111101011111011100101000111010", 
    230 => "000111110000010101111010000101100", 
    231 => "000111110100101111011000101001101", 
    232 => "000111111001001000000000010010101", 
    233 => "000111111101011111110000100000000", 
    234 => "001000000001110110101000111100100", 
    235 => "001000000110001100101000111111001", 
    236 => "001000001010100001110000001101011", 
    237 => "001000001110110101111110001100000", 
    238 => "001000010011001001010010010101111", 
    239 => "001000010111011011101100010100101", 
    240 => "001000011011101101001011101011100", 
    241 => "001000011111111101101111110101111", 
    242 => "001000100100001101011000010100110", 
    243 => "001000101000011100000100110011001", 
    244 => "001000101100101001110100110001011", 
    245 => "001000110000110110100111101101101", 
    246 => "001000110101000010011101011000100", 
    247 => "001000111001001101010100111011100", 
    248 => "001000111101010111001110010110011", 
    249 => "001001000001100000001000110100111", 
    250 => "001001000101101000000100000100100", 
    251 => "001001001001101110111111110010000", 
    252 => "001001001101110100111011010100101", 
    253 => "001001010001111001110110010100101", 
    254 => "001001010101111101110000010010100", 
    255 => "001001011010000000101000110110100" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity music_fourth_ordevdy is
    generic (
        DataWidth : INTEGER := 33;
        AddressRange : INTEGER := 256;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of music_fourth_ordevdy is
    component music_fourth_ordevdy_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    music_fourth_ordevdy_rom_U :  component music_fourth_ordevdy_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


