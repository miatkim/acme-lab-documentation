-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity softmax_latency_array_array_softmax_config13_s_exp_table11_rom is 
    generic(
             DWIDTH     : integer := 18; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1024
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of softmax_latency_array_array_softmax_config13_s_exp_table11_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000000010000000000", 1 => "000000010001000010", 
    2 => "000000010010001000", 3 => "000000010011010011", 
    4 => "000000010100100010", 5 => "000000010101110111", 
    6 => "000000010111010001", 7 => "000000011000110010", 
    8 => "000000011010011000", 9 => "000000011100000101", 
    10 => "000000011101111001", 11 => "000000011111110100", 
    12 => "000000100001110111", 13 => "000000100100000011", 
    14 => "000000100110011000", 15 => "000000101000110110", 
    16 => "000000101011011111", 17 => "000000101110010011", 
    18 => "000000110001010010", 19 => "000000110100011101", 
    20 => "000000110111110110", 21 => "000000111011011100", 
    22 => "000000111111010001", 23 => "000001000011010111", 
    24 => "000001000111101101", 25 => "000001001100010101", 
    26 => "000001010001010000", 27 => "000001010110011111", 
    28 => "000001011100000100", 29 => "000001100010000000", 
    30 => "000001101000010101", 31 => "000001101111000011", 
    32 => "000001110110001110", 33 => "000001111101110110", 
    34 => "000010000101111101", 35 => "000010001110100110", 
    36 => "000010010111110011", 37 => "000010100001100110", 
    38 => "000010101100000001", 39 => "000010110111000111", 
    40 => "000011000010111010", 41 => "000011001111011111", 
    42 => "000011011100110111", 43 => "000011101011000111", 
    44 => "000011111010010010", 45 => "000100001010011011", 
    46 => "000100011011100110", 47 => "000100101101111001", 
    48 => "000101000001010111", 49 => "000101010110000110", 
    50 => "000101101100001010", 51 => "000110000011101001", 
    52 => "000110011100101001", 53 => "000110110111010000", 
    54 => "000111010011100101", 55 => "000111110001101111", 
    56 => "001000010001110110", 57 => "001000110100000001", 
    58 => "001001011000011001", 59 => "001001111111000111", 
    60 => "001010101000010101", 61 => "001011010100001101", 
    62 => "001100000010111011", 63 => "001100110100101001", 
    64 => "001101101001100100", 65 => "001110100001111010", 
    66 => "001111011101111000", 67 => "010000011101101110", 
    68 => "010001100001101011", 69 => "010010101010000001", 
    70 => "010011110111000010", 71 => "010101001001000000", 
    72 => "010110100000010001", 73 => "010111111101001010", 
    74 => "011001100000000010", 75 => "011011001001010011", 
    76 => "011100111001010110", 77 => "011110110000100111", 
    78 => "100000101111100101", 79 => "100010110110101111", 
    80 => "100101000110100111", 81 => "100111011111110000", 
    82 => "101010000010110010", 83 => "101100110000010100", 
    84 => "101111101001000011", 85 => "110010101101101101", 
    86 => "110101111111000010", 87 => "111001011101110111", 
    88 => "111101001011000100", 89 => "000001000111100100", 
    90 => "000101010100010110", 91 => "001001110010011110", 
    92 => "001110100011000011", 93 => "010011100111010001", 
    94 => "011001000000011001", 95 => "011110101111110001", 
    96 => "100100110110110111", 97 => "101011010111001010", 
    98 => "110010010010010100", 99 => "111001101010000011", 
    100 => "000001100000001101", 101 => "001001110110101111", 
    102 => "010010101111110001", 103 => "011100001101011110", 
    104 => "100110010010010001", 105 => "110001000000101000", 
    106 => "111100011011010001", 107 => "001000100101000001", 
    108 => "010101100000111100", 109 => "100011010010010000", 
    110 => "110001111100011010", 111 => "000001100011000100", 
    112 => "010010001010001000", 113 => "100011110101110000", 
    114 => "110110101010010111", 115 => "001010101100101011", 
    116 => "100000000001101011", 117 => "110110101110101101", 
    118 => "001110111001011110", 119 => "101000100111111110", 
    120 => "000100000000101011", 121 => "100001001010011010", 
    122 => "000000001100011111", 123 => "100001001110101001", 
    124 => "000100011001001010", 125 => "101001110100110100", 
    126 => "010001101010111110", 127 => "111100000101100111", 
    128 => "101001001111010101", 129 => "011001010011011010", 
    130 => "001100011101111000", 131 => "000010111011100011", 
    132 => "111100111010000000", 133 => "111010100111110010", 
    134 => "111100010100010010", 135 => "000010001111111110", 
    136 => "001100101100010011", 137 => "011011111011111010", 
    138 => "110000010010100110", 139 => "001010000101011111", 
    140 => "101001101011000000", 141 => "001111011011000101", 
    142 => "111011101111001001", 143 => "101111000010010010", 
    144 => "101001110001010110", 145 => "101100011011000000", 
    146 => "110111011111111101", 147 => "001011100010111101", 
    148 => "101001001001000011", 149 => "010000111001101001", 
    150 => "000011011110101100", 151 => "000001100100110101", 
    152 => "001011111011101000", 153 => "100011010101101100", 
    154 => "001000101000110111", 155 => "111100101110100000", 
    156 => "000000100011101010", 157 => "010101001001010100", 
    158 => "111011100100100110", 159 => "110100111111001100", 
    160 => "000010100111011100", 161 => "100101110000110100", 
    162 => "011111110100000110", 163 => "110010001111110110", 
    164 => "011110101000101010", 165 => "100110101001110000", 
    166 => "001100000101000110", 167 => "010000110100001000", 
    168 => "110110111000000100", 169 => "000000011010011100", 
    170 => "101111101101101100", 171 => "000111001101110000", 
    172 => "001001100000011100", 173 => "111001010110100000", 
    174 => "011001101011111100", 175 => "101101101000110100", 
    176 => "111000100010010000", 177 => "111101111011000100", 
    178 => "000001100100101000", 179 => "000111100000000000", 
    180 => "010011111110110000", 181 => "101011100100000000", 
    182 => "010011000101110000", 183 => "001111101110001000", 
    184 => "100110111100011000", 185 => "011110100110010000", 
    186 => "111100111010000000", 187 => "001000011111001000", 
    188 => "001000011001000000", 189 => "000100000111100000", 
    190 => "000011101001100000", 191 => "001111011111110000", 
    192 => "110000101100110000", 193 => "110000111001010000", 
    194 => "011010010101100000", 195 => "110111111100000000", 
    196 => "010101010100100000", 197 => "111110110110110000", 
    198 => "000001101101010000", 199 => "101011111000110000", 
    200 => "001100010100100000", 201 => "110010111001000000", 
    202 => "110000011111100000", 203 => "010111001001000000", 
    204 => "111001111110100000", 205 => "101101011001100000", 
    206 => "000111000111000000", 207 => "011110001110100000", 
    208 => "001011010110100000", 209 => "101000101001100000", 
    210 => "010010000001000000", 211 => "100101000111000000", 
    212 => "000001100001000000", 213 => "001000110111000000", 
    214 => "011110111011000000", 215 => "101001110100000000", 
    216 => "010010000110000000", 217 => "000010111011000000", 
    218 => "101010010000000000", 219 => "111001000001000000", 
    220 => "100011010011000000", 221 => "100000100000000000", 
    222 => "101011101000000000", 223 => "000011100010000000", 
    224 => "101011000100000000", 225 => "101001011010000000", 
    226 => "001010010010000000", 227 => "011110011010000000", 
    228 => "111011101000000000", 229 => "111101010010000000", 
    230 => "000100101110000000", 231 => "111001100000000000", 
    232 => "001001110100000000", 233 => "101011000100000000", 
    234 => "011010001000000000", 235 => "011100000100000000", 
    236 => "111110010100000000", 237 => "010111101000000000", 
    238 => "001000011100000000", 239 => "111011011000000000", 
    240 => "100110010100000000", 241 => "001010110000000000", 
    242 => "110110100000000000", 243 => "000100111100000000", 
    244 => "011111011000000000", 245 => "111110010000000000", 
    246 => "101010000000000000", 247 => "111100010000000000", 
    248 => "100000101000000000", 249 => "010110000000000000", 
    250 => "110000001000000000", 251 => "011000011000000000", 
    252 => "001111100000000000", 253 => "101111001000000000", 
    254 => "101011010000000000", 255 => "010100001000000000", 
    256 => "010111110000000000", 257 => "000011110000000000", 
    258 => "001000100000000000", 259 => "111001110000000000", 
    260 => "010010000000000000", 261 => "110100010000000000", 
    262 => "101111110000000000", 263 => "000001010000000000", 
    264 => "010111110000000000", 265 => "010110100000000000", 
    266 => "011000000000000000", 267 => "110011000000000000", 
    268 => "111110000000000000", 269 => "010010000000000000", 
    270 => "001111100000000000", 271 => "100101100000000000", 
    272 => "010010000000000000", 273 => "101011100000000000", 
    274 => "100011000000000000", 275 => "001100100000000000", 
    276 => "100101100000000000", 277 => "011000100000000000", 
    278 => "001000000000000000", 279 => "010101000000000000", 
    280 => "100100000000000000", 281 => "101100000000000000", 
    282 => "111000000000000000", 283 => "111001000000000000", 
    284 => "001001000000000000", 285 => "111011000000000000", 
    286 => "100100000000000000", 287 => "101010000000000000", 
    288 => "010000000000000000", 289 => "000100000000000000", 
    290 => "110000000000000000", 291 => "000100000000000000", 
    292 => "010100000000000000", 293 => "011010000000000000", 
    294 => "011000000000000000", 295 => "100110000000000000", 
    296 => "000010000000000000", 297 => "111000000000000000", 
    298 => "101010000000000000", 299 => "110110000000000000", 
    300 to 301=> "001100000000000000", 302 => "110000000000000000", 
    303 to 304=> "100000000000000000", 305 => "110100000000000000", 
    306 => "001000000000000000", 307 => "100000000000000000", 
    308 => "000000000000000000", 309 => "101000000000000000", 
    310 => "111000000000000000", 311 => "000000000000000000", 
    312 => "101000000000000000", 313 => "000000000000000000", 
    314 => "100000000000000000", 315 => "110000000000000000", 
    316 => "000000000000000000", 317 => "100000000000000000", 
    318 => "011000000000000000", 319 => "101000000000000000", 
    320 => "100000000000000000", 321 => "111000000000000000", 
    322 to 323=> "010000000000000000", 324 => "110000000000000000", 
    325 => "010000000000000000", 326 => "100000000000000000", 
    327 => "110000000000000000", 328 => "000000000000000000", 
    329 => "100000000000000000", 330 => "000000000000000000", 
    331 => "100000000000000000", 332 => "110000000000000000", 
    333 => "100000000000000000", 334 to 337=> "000000000000000000", 
    338 to 339=> "100000000000000000", 340 to 341=> "000000000000000000", 
    342 to 343=> "100000000000000000", 344 to 913=> "000000000000000000", 
    914 to 924=> "000000000000000001", 925 to 930=> "000000000000000010", 
    931 to 935=> "000000000000000011", 936 to 938=> "000000000000000100", 
    939 to 941=> "000000000000000101", 942 to 944=> "000000000000000110", 
    945 to 946=> "000000000000000111", 947 to 948=> "000000000000001000", 
    949 => "000000000000001001", 950 to 951=> "000000000000001010", 
    952 => "000000000000001011", 953 to 954=> "000000000000001100", 
    955 => "000000000000001101", 956 => "000000000000001110", 
    957 => "000000000000001111", 958 => "000000000000010000", 
    959 => "000000000000010001", 960 => "000000000000010010", 
    961 => "000000000000010011", 962 => "000000000000010101", 
    963 => "000000000000010110", 964 => "000000000000011000", 
    965 => "000000000000011001", 966 => "000000000000011011", 
    967 => "000000000000011101", 968 => "000000000000011110", 
    969 => "000000000000100000", 970 => "000000000000100011", 
    971 => "000000000000100101", 972 => "000000000000100111", 
    973 => "000000000000101010", 974 => "000000000000101100", 
    975 => "000000000000101111", 976 => "000000000000110010", 
    977 => "000000000000110110", 978 => "000000000000111001", 
    979 => "000000000000111101", 980 => "000000000001000001", 
    981 => "000000000001000101", 982 => "000000000001001010", 
    983 => "000000000001001110", 984 => "000000000001010100", 
    985 => "000000000001011001", 986 => "000000000001011111", 
    987 => "000000000001100101", 988 => "000000000001101011", 
    989 => "000000000001110010", 990 => "000000000001111010", 
    991 => "000000000010000010", 992 => "000000000010001010", 
    993 => "000000000010010011", 994 => "000000000010011101", 
    995 => "000000000010100111", 996 => "000000000010110001", 
    997 => "000000000010111101", 998 => "000000000011001001", 
    999 => "000000000011010110", 1000 => "000000000011100100", 
    1001 => "000000000011110011", 1002 => "000000000100000010", 
    1003 => "000000000100010011", 1004 => "000000000100100101", 
    1005 => "000000000100111000", 1006 => "000000000101001100", 
    1007 => "000000000101100001", 1008 => "000000000101111000", 
    1009 => "000000000110010001", 1010 => "000000000110101010", 
    1011 => "000000000111000110", 1012 => "000000000111100011", 
    1013 => "000000001000000010", 1014 => "000000001000100100", 
    1015 => "000000001001000111", 1016 => "000000001001101101", 
    1017 => "000000001010010101", 1018 => "000000001010111111", 
    1019 => "000000001011101101", 1020 => "000000001100011101", 
    1021 => "000000001101010000", 1022 => "000000001110000111", 
    1023 => "000000001111000001" );


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

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity softmax_latency_array_array_softmax_config13_s_exp_table11 is
    generic (
        DataWidth : INTEGER := 18;
        AddressRange : INTEGER := 1024;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of softmax_latency_array_array_softmax_config13_s_exp_table11 is
    component softmax_latency_array_array_softmax_config13_s_exp_table11_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    softmax_latency_array_array_softmax_config13_s_exp_table11_rom_U :  component softmax_latency_array_array_softmax_config13_s_exp_table11_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


