-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fft_stage_119_W_ig8j_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 9; 
             MEM_SIZE    : integer := 512
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fft_stage_119_W_ig8j_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10000000000000000000000000000000", 
    1 => "10111011110010010000111110001000", 
    2 => "10111100010010010000111010010000", 
    3 => "10111100100101101100100110110110", 
    4 => "10111100110010010000101010110000", 
    5 => "10111100111110110100100110111010", 
    6 => "10111101000101101100001100101100", 
    7 => "10111101001011111110000000000111", 
    8 => "10111101010010001111101100110000", 
    9 => "10111101011000100001010001101001", 
    10 => "10111101011110110010101101110100", 
    11 => "10111101100010100010000000001010", 
    12 => "10111101100101101010100100000101", 
    13 => "10111101101000110011000010001100", 
    14 => "10111101101011111011011010000000", 
    15 => "10111101101111000011101011000011", 
    16 => "10111101110010001011110100110110", 
    17 => "10111101110101010011110110111001", 
    18 => "10111101111000011011110000101110", 
    19 => "10111101111011100011100001110110", 
    20 => "10111101111110101011001001110011", 
    21 => "10111110000000111001010100000010", 
    22 => "10111110000010011100111110000110", 
    23 => "10111110000100000000100010110111", 
    24 => "10111110000101100100000010000011", 
    25 => "10111110000111000111011011011110", 
    26 => "10111110001000101010101110110110", 
    27 => "10111110001010001101111011111100", 
    28 => "10111110001011110001000010100010", 
    29 => "10111110001101010100000010011000", 
    30 => "10111110001110110110111011001111", 
    31 => "10111110010000011001101100110111", 
    32 => "10111110010001111100010111000010", 
    33 => "10111110010011011110111001100000", 
    34 => "10111110010101000001010100000001", 
    35 => "10111110010110100011100110010111", 
    36 => "10111110011000000101110000010011", 
    37 => "10111110011001100111110001100110", 
    38 => "10111110011011001001101001111111", 
    39 => "10111110011100101011011001010001", 
    40 => "10111110011110001100111111001100", 
    41 => "10111110011111101110011011100001", 
    42 => "10111110100000100111110111000000", 
    43 => "10111110100001011000011011001110", 
    44 => "10111110100010001000111010010011", 
    45 => "10111110100010111001010100000111", 
    46 => "10111110100011101001101000100010", 
    47 => "10111110100100011001110111011101", 
    48 => "10111110100101001010000000110001", 
    49 => "10111110100101111010000100010111", 
    50 => "10111110100110101010000010000110", 
    51 => "10111110100111011001111001111000", 
    52 => "10111110101000001001101011100101", 
    53 => "10111110101000111001010111000101", 
    54 => "10111110101001101000111100010010", 
    55 => "10111110101010011000011011000100", 
    56 => "10111110101011000111110011010100", 
    57 => "10111110101011110111000100111010", 
    58 => "10111110101100100110001111101111", 
    59 => "10111110101101010101010011101100", 
    60 => "10111110101110000100010000101010", 
    61 => "10111110101110110011000110100000", 
    62 => "10111110101111100001110101001010", 
    63 => "10111110110000010000011100011110", 
    64 => "10111110110000111110111100010101", 
    65 => "10111110110001101101010100101001", 
    66 => "10111110110010011011100101010011", 
    67 => "10111110110011001001101110001011", 
    68 => "10111110110011110111101111001010", 
    69 => "10111110110100100101101000001001", 
    70 => "10111110110101010011011001000001", 
    71 => "10111110110110000001000001101011", 
    72 => "10111110110110101110100010000000", 
    73 => "10111110110111011011111001111001", 
    74 => "10111110111000001001001001001111", 
    75 => "10111110111000110110001111111010", 
    76 => "10111110111001100011001101110101", 
    77 => "10111110111010010000000010110111", 
    78 => "10111110111010111100101110111011", 
    79 => "10111110111011101001010001111001", 
    80 => "10111110111100010101101011101010", 
    81 => "10111110111101000001111100000111", 
    82 => "10111110111101101110000011001011", 
    83 => "10111110111110011010000000101101", 
    84 => "10111110111111000101110100100111", 
    85 => "10111110111111110001011110110010", 
    86 => "10111111000000001110011111100100", 
    87 => "10111111000000100100001010110001", 
    88 => "10111111000000111001110000111101", 
    89 => "10111111000001001111010010000100", 
    90 => "10111111000001100100101110000010", 
    91 => "10111111000001111010000100110110", 
    92 => "10111111000010001111010110011011", 
    93 => "10111111000010100100100010101101", 
    94 => "10111111000010111001101001101011", 
    95 => "10111111000011001110101011010000", 
    96 => "10111111000011100011100111011010", 
    97 => "10111111000011111000011110000100", 
    98 => "10111111000100001101001111001101", 
    99 => "10111111000100100001111010110000", 
    100 => "10111111000100110110100000101010", 
    101 => "10111111000101001011000000111001", 
    102 => "10111111000101011111011011011001", 
    103 => "10111111000101110011110000000111", 
    104 => "10111111000110000111111111000000", 
    105 => "10111111000110011100001000000000", 
    106 => "10111111000110110000001011000110", 
    107 => "10111111000111000100001000001100", 
    108 => "10111111000111010111111111010001", 
    109 => "10111111000111101011110000010010", 
    110 => "10111111000111111111011011001011", 
    111 => "10111111001000010010111111111001", 
    112 => "10111111001000100110011110011001", 
    113 => "10111111001000111001110110101001", 
    114 => "10111111001001001101001000100101", 
    115 => "10111111001001100000010100001010", 
    116 => "10111111001001110011011001010110", 
    117 => "10111111001010000110011000000101", 
    118 => "10111111001010011001010000010101", 
    119 => "10111111001010101100000010000010", 
    120 => "10111111001010111110101101001010", 
    121 => "10111111001011010001010001101001", 
    122 => "10111111001011100011101111011110", 
    123 => "10111111001011110110000110100101", 
    124 => "10111111001100001000010110111011", 
    125 => "10111111001100011010100000011101", 
    126 => "10111111001100101100100011001001", 
    127 => "10111111001100111110011110111100", 
    128 => "10111111001101010000010011110011", 
    129 => "10111111001101100010000001101100", 
    130 => "10111111001101110011101000100011", 
    131 => "10111111001110000101001000010110", 
    132 => "10111111001110010110100001000010", 
    133 => "10111111001110100111110010100100", 
    134 => "10111111001110111000111100111011", 
    135 => "10111111001111001010000000000011", 
    136 => "10111111001111011010111011111001", 
    137 => "10111111001111101011110000011011", 
    138 => "10111111001111111100011101100111", 
    139 => "10111111010000001101000011011010", 
    140 => "10111111010000011101100001110000", 
    141 => "10111111010000101101111000101001", 
    142 => "10111111010000111110001000000000", 
    143 => "10111111010001001110001111110101", 
    144 => "10111111010001011110010000000011", 
    145 => "10111111010001101110001000101010", 
    146 => "10111111010001111101111001100101", 
    147 => "10111111010010001101100010110011", 
    148 => "10111111010010011101000100010010", 
    149 => "10111111010010101100011101111111", 
    150 => "10111111010010111011101111111000", 
    151 => "10111111010011001010111001111001", 
    152 => "10111111010011011001111100000010", 
    153 => "10111111010011101000110110010000", 
    154 => "10111111010011110111101000011111", 
    155 => "10111111010100000110010010101111", 
    156 => "10111111010100010100110100111101", 
    157 => "10111111010100100011001111000110", 
    158 => "10111111010100110001100001001001", 
    159 => "10111111010100111111101011000011", 
    160 => "10111111010101001101101100110001", 
    161 => "10111111010101011011100110010011", 
    162 => "10111111010101101001010111100101", 
    163 => "10111111010101110111000000100110", 
    164 => "10111111010110000100100001010011", 
    165 => "10111111010110010001111001101010", 
    166 => "10111111010110011111001001101010", 
    167 => "10111111010110101100010001010000", 
    168 => "10111111010110111001010000011010", 
    169 => "10111111010111000110000111000111", 
    170 => "10111111010111010010110101010011", 
    171 => "10111111010111011111011010111110", 
    172 => "10111111010111101011111000000101", 
    173 => "10111111010111111000001100100111", 
    174 => "10111111011000000100011000100001", 
    175 => "10111111011000010000011011110010", 
    176 => "10111111011000011100010110011000", 
    177 => "10111111011000101000001000010000", 
    178 => "10111111011000110011110001011010", 
    179 => "10111111011000111111010001110011", 
    180 => "10111111011001001010101001011001", 
    181 => "10111111011001010101111000001011", 
    182 => "10111111011001100000111110001000", 
    183 => "10111111011001101011111011001100", 
    184 => "10111111011001110110101111011000", 
    185 => "10111111011010000001011010101000", 
    186 => "10111111011010001011111100111100", 
    187 => "10111111011010010110010110010001", 
    188 => "10111111011010100000100110100111", 
    189 => "10111111011010101010101101111011", 
    190 => "10111111011010110100101100001100", 
    191 => "10111111011010111110100001011000", 
    192 => "10111111011011001000001101011110", 
    193 => "10111111011011010001110000011101", 
    194 => "10111111011011011011001010010011", 
    195 => "10111111011011100100011010111110", 
    196 => "10111111011011101101100010011110", 
    197 => "10111111011011110110100000110000", 
    198 => "10111111011011111111010101110011", 
    199 => "10111111011100001000000001100110", 
    200 => "10111111011100010000100100001000", 
    201 => "10111111011100011000111101010111", 
    202 => "10111111011100100001001101010010", 
    203 => "10111111011100101001010011111000", 
    204 => "10111111011100110001010001000111", 
    205 => "10111111011100111001000100111111", 
    206 => "10111111011101000000101111011101", 
    207 => "10111111011101001000010000100010", 
    208 => "10111111011101001111101000001011", 
    209 => "10111111011101010110110110010111", 
    210 => "10111111011101011101111011000110", 
    211 => "10111111011101100100110110010111", 
    212 => "10111111011101101011101000000111", 
    213 => "10111111011101110010010000010111", 
    214 => "10111111011101111000101111000101", 
    215 => "10111111011101111111000100010000", 
    216 => "10111111011110000101001111111000", 
    217 => "10111111011110001011010001111011", 
    218 => "10111111011110010001001010011000", 
    219 => "10111111011110010110111001001110", 
    220 => "10111111011110011100011110011101", 
    221 => "10111111011110100001111010000100", 
    222 => "10111111011110100111001100000010", 
    223 => "10111111011110101100010100010110", 
    224 => "10111111011110110001010010111110", 
    225 => "10111111011110110110000111111100", 
    226 => "10111111011110111010110011001101", 
    227 => "10111111011110111111010100110001", 
    228 => "10111111011111000011101100101000", 
    229 => "10111111011111000111111010110000", 
    230 => "10111111011111001011111111001001", 
    231 => "10111111011111001111111001110011", 
    232 => "10111111011111010011101010101100", 
    233 => "10111111011111010111010001110100", 
    234 => "10111111011111011010101111001100", 
    235 => "10111111011111011110000010110001", 
    236 => "10111111011111100001001100100100", 
    237 => "10111111011111100100001100100011", 
    238 => "10111111011111100111000010110000", 
    239 => "10111111011111101001101111001001", 
    240 => "10111111011111101100010001101101", 
    241 => "10111111011111101110101010011101", 
    242 => "10111111011111110000111001011000", 
    243 => "10111111011111110010111110011101", 
    244 => "10111111011111110100111001101101", 
    245 => "10111111011111110110101011000111", 
    246 => "10111111011111111000010010101011", 
    247 => "10111111011111111001110000011000", 
    248 => "10111111011111111011000100001111", 
    249 => "10111111011111111100001110001111", 
    250 => "10111111011111111101001110010111", 
    251 => "10111111011111111110000100101001", 
    252 => "10111111011111111110110001000011", 
    253 => "10111111011111111111010011100110", 
    254 => "10111111011111111111101100010001", 
    255 => "10111111011111111111111011000100", 
    256 => "10111111100000000000000000000000", 
    257 => "10111111011111111111111011000100", 
    258 => "10111111011111111111101100010001", 
    259 => "10111111011111111111010011100110", 
    260 => "10111111011111111110110001000011", 
    261 => "10111111011111111110000100101001", 
    262 => "10111111011111111101001110010111", 
    263 => "10111111011111111100001110001111", 
    264 => "10111111011111111011000100001111", 
    265 => "10111111011111111001110000011000", 
    266 => "10111111011111111000010010101011", 
    267 => "10111111011111110110101011000111", 
    268 => "10111111011111110100111001101101", 
    269 => "10111111011111110010111110011101", 
    270 => "10111111011111110000111001011000", 
    271 => "10111111011111101110101010011101", 
    272 => "10111111011111101100010001101101", 
    273 => "10111111011111101001101111001001", 
    274 => "10111111011111100111000010110000", 
    275 => "10111111011111100100001100100011", 
    276 => "10111111011111100001001100100100", 
    277 => "10111111011111011110000010110001", 
    278 => "10111111011111011010101111001100", 
    279 => "10111111011111010111010001110100", 
    280 => "10111111011111010011101010101100", 
    281 => "10111111011111001111111001110011", 
    282 => "10111111011111001011111111001001", 
    283 => "10111111011111000111111010110000", 
    284 => "10111111011111000011101100101000", 
    285 => "10111111011110111111010100110001", 
    286 => "10111111011110111010110011001101", 
    287 => "10111111011110110110000111111100", 
    288 => "10111111011110110001010010111110", 
    289 => "10111111011110101100010100010110", 
    290 => "10111111011110100111001100000010", 
    291 => "10111111011110100001111010000100", 
    292 => "10111111011110011100011110011101", 
    293 => "10111111011110010110111001001110", 
    294 => "10111111011110010001001010011000", 
    295 => "10111111011110001011010001111011", 
    296 => "10111111011110000101001111111000", 
    297 => "10111111011101111111000100010000", 
    298 => "10111111011101111000101111000101", 
    299 => "10111111011101110010010000010111", 
    300 => "10111111011101101011101000000111", 
    301 => "10111111011101100100110110010111", 
    302 => "10111111011101011101111011000110", 
    303 => "10111111011101010110110110010111", 
    304 => "10111111011101001111101000001011", 
    305 => "10111111011101001000010000100010", 
    306 => "10111111011101000000101111011101", 
    307 => "10111111011100111001000100111111", 
    308 => "10111111011100110001010001000111", 
    309 => "10111111011100101001010011111000", 
    310 => "10111111011100100001001101010010", 
    311 => "10111111011100011000111101010111", 
    312 => "10111111011100010000100100001000", 
    313 => "10111111011100001000000001100110", 
    314 => "10111111011011111111010101110011", 
    315 => "10111111011011110110100000110000", 
    316 => "10111111011011101101100010011110", 
    317 => "10111111011011100100011010111110", 
    318 => "10111111011011011011001010010011", 
    319 => "10111111011011010001110000011101", 
    320 => "10111111011011001000001101011110", 
    321 => "10111111011010111110100001011000", 
    322 => "10111111011010110100101100001100", 
    323 => "10111111011010101010101101111011", 
    324 => "10111111011010100000100110100111", 
    325 => "10111111011010010110010110010001", 
    326 => "10111111011010001011111100111100", 
    327 => "10111111011010000001011010101000", 
    328 => "10111111011001110110101111011000", 
    329 => "10111111011001101011111011001100", 
    330 => "10111111011001100000111110001000", 
    331 => "10111111011001010101111000001011", 
    332 => "10111111011001001010101001011001", 
    333 => "10111111011000111111010001110011", 
    334 => "10111111011000110011110001011010", 
    335 => "10111111011000101000001000010000", 
    336 => "10111111011000011100010110011000", 
    337 => "10111111011000010000011011110010", 
    338 => "10111111011000000100011000100001", 
    339 => "10111111010111111000001100100111", 
    340 => "10111111010111101011111000000101", 
    341 => "10111111010111011111011010111110", 
    342 => "10111111010111010010110101010011", 
    343 => "10111111010111000110000111000111", 
    344 => "10111111010110111001010000011010", 
    345 => "10111111010110101100010001010000", 
    346 => "10111111010110011111001001101010", 
    347 => "10111111010110010001111001101010", 
    348 => "10111111010110000100100001010011", 
    349 => "10111111010101110111000000100110", 
    350 => "10111111010101101001010111100101", 
    351 => "10111111010101011011100110010011", 
    352 => "10111111010101001101101100110001", 
    353 => "10111111010100111111101011000011", 
    354 => "10111111010100110001100001001001", 
    355 => "10111111010100100011001111000110", 
    356 => "10111111010100010100110100111101", 
    357 => "10111111010100000110010010101111", 
    358 => "10111111010011110111101000011111", 
    359 => "10111111010011101000110110010000", 
    360 => "10111111010011011001111100000010", 
    361 => "10111111010011001010111001111001", 
    362 => "10111111010010111011101111111000", 
    363 => "10111111010010101100011101111111", 
    364 => "10111111010010011101000100010010", 
    365 => "10111111010010001101100010110011", 
    366 => "10111111010001111101111001100101", 
    367 => "10111111010001101110001000101010", 
    368 => "10111111010001011110010000000011", 
    369 => "10111111010001001110001111110101", 
    370 => "10111111010000111110001000000000", 
    371 => "10111111010000101101111000101001", 
    372 => "10111111010000011101100001110000", 
    373 => "10111111010000001101000011011010", 
    374 => "10111111001111111100011101100111", 
    375 => "10111111001111101011110000011011", 
    376 => "10111111001111011010111011111001", 
    377 => "10111111001111001010000000000011", 
    378 => "10111111001110111000111100111011", 
    379 => "10111111001110100111110010100100", 
    380 => "10111111001110010110100001000010", 
    381 => "10111111001110000101001000010110", 
    382 => "10111111001101110011101000100011", 
    383 => "10111111001101100010000001101100", 
    384 => "10111111001101010000010011110011", 
    385 => "10111111001100111110011110111100", 
    386 => "10111111001100101100100011001001", 
    387 => "10111111001100011010100000011101", 
    388 => "10111111001100001000010110111011", 
    389 => "10111111001011110110000110100101", 
    390 => "10111111001011100011101111011110", 
    391 => "10111111001011010001010001101001", 
    392 => "10111111001010111110101101001010", 
    393 => "10111111001010101100000010000010", 
    394 => "10111111001010011001010000010101", 
    395 => "10111111001010000110011000000101", 
    396 => "10111111001001110011011001010110", 
    397 => "10111111001001100000010100001010", 
    398 => "10111111001001001101001000100101", 
    399 => "10111111001000111001110110101001", 
    400 => "10111111001000100110011110011001", 
    401 => "10111111001000010010111111111001", 
    402 => "10111111000111111111011011001011", 
    403 => "10111111000111101011110000010010", 
    404 => "10111111000111010111111111010001", 
    405 => "10111111000111000100001000001100", 
    406 => "10111111000110110000001011000110", 
    407 => "10111111000110011100001000000000", 
    408 => "10111111000110000111111111000000", 
    409 => "10111111000101110011110000000111", 
    410 => "10111111000101011111011011011001", 
    411 => "10111111000101001011000000111001", 
    412 => "10111111000100110110100000101010", 
    413 => "10111111000100100001111010110000", 
    414 => "10111111000100001101001111001101", 
    415 => "10111111000011111000011110000100", 
    416 => "10111111000011100011100111011010", 
    417 => "10111111000011001110101011010000", 
    418 => "10111111000010111001101001101011", 
    419 => "10111111000010100100100010101101", 
    420 => "10111111000010001111010110011011", 
    421 => "10111111000001111010000100110110", 
    422 => "10111111000001100100101110000010", 
    423 => "10111111000001001111010010000100", 
    424 => "10111111000000111001110000111101", 
    425 => "10111111000000100100001010110001", 
    426 => "10111111000000001110011111100100", 
    427 => "10111110111111110001011110110010", 
    428 => "10111110111111000101110100100111", 
    429 => "10111110111110011010000000101101", 
    430 => "10111110111101101110000011001011", 
    431 => "10111110111101000001111100000111", 
    432 => "10111110111100010101101011101010", 
    433 => "10111110111011101001010001111001", 
    434 => "10111110111010111100101110111011", 
    435 => "10111110111010010000000010110111", 
    436 => "10111110111001100011001101110101", 
    437 => "10111110111000110110001111111010", 
    438 => "10111110111000001001001001001111", 
    439 => "10111110110111011011111001111001", 
    440 => "10111110110110101110100010000000", 
    441 => "10111110110110000001000001101011", 
    442 => "10111110110101010011011001000001", 
    443 => "10111110110100100101101000001001", 
    444 => "10111110110011110111101111001010", 
    445 => "10111110110011001001101110001011", 
    446 => "10111110110010011011100101010011", 
    447 => "10111110110001101101010100101001", 
    448 => "10111110110000111110111100010101", 
    449 => "10111110110000010000011100011110", 
    450 => "10111110101111100001110101001010", 
    451 => "10111110101110110011000110100000", 
    452 => "10111110101110000100010000101010", 
    453 => "10111110101101010101010011101100", 
    454 => "10111110101100100110001111101111", 
    455 => "10111110101011110111000100111010", 
    456 => "10111110101011000111110011010100", 
    457 => "10111110101010011000011011000100", 
    458 => "10111110101001101000111100010010", 
    459 => "10111110101000111001010111000101", 
    460 => "10111110101000001001101011100101", 
    461 => "10111110100111011001111001111000", 
    462 => "10111110100110101010000010000110", 
    463 => "10111110100101111010000100010111", 
    464 => "10111110100101001010000000110001", 
    465 => "10111110100100011001110111011101", 
    466 => "10111110100011101001101000100010", 
    467 => "10111110100010111001010100000111", 
    468 => "10111110100010001000111010010011", 
    469 => "10111110100001011000011011001110", 
    470 => "10111110100000100111110111000000", 
    471 => "10111110011111101110011011100001", 
    472 => "10111110011110001100111111001100", 
    473 => "10111110011100101011011001010001", 
    474 => "10111110011011001001101001111111", 
    475 => "10111110011001100111110001100110", 
    476 => "10111110011000000101110000010011", 
    477 => "10111110010110100011100110010111", 
    478 => "10111110010101000001010100000001", 
    479 => "10111110010011011110111001100000", 
    480 => "10111110010001111100010111000010", 
    481 => "10111110010000011001101100110111", 
    482 => "10111110001110110110111011001111", 
    483 => "10111110001101010100000010011000", 
    484 => "10111110001011110001000010100010", 
    485 => "10111110001010001101111011111100", 
    486 => "10111110001000101010101110110110", 
    487 => "10111110000111000111011011011110", 
    488 => "10111110000101100100000010000011", 
    489 => "10111110000100000000100010110111", 
    490 => "10111110000010011100111110000110", 
    491 => "10111110000000111001010100000010", 
    492 => "10111101111110101011001001110011", 
    493 => "10111101111011100011100001110110", 
    494 => "10111101111000011011110000101110", 
    495 => "10111101110101010011110110111001", 
    496 => "10111101110010001011110100110110", 
    497 => "10111101101111000011101011000011", 
    498 => "10111101101011111011011010000000", 
    499 => "10111101101000110011000010001100", 
    500 => "10111101100101101010100100000101", 
    501 => "10111101100010100010000000001010", 
    502 => "10111101011110110010101101110100", 
    503 => "10111101011000100001010001101001", 
    504 => "10111101010010001111101100110000", 
    505 => "10111101001011111110000000000111", 
    506 => "10111101000101101100001100101100", 
    507 => "10111100111110110100100110111010", 
    508 => "10111100110010010000101010110000", 
    509 => "10111100100101101100100110110110", 
    510 => "10111100010010010000111010010000", 
    511 => "10111011110010010000111110001000" );


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

entity fft_stage_119_W_ig8j is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 512;
        AddressWidth : INTEGER := 9);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of fft_stage_119_W_ig8j is
    component fft_stage_119_W_ig8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    fft_stage_119_W_ig8j_rom_U :  component fft_stage_119_W_ig8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

