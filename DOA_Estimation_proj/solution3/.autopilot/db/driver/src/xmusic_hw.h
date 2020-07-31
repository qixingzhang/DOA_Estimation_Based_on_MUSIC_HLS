// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x010 : Data signal of ap_return
//         bit 31~0 - ap_return[31:0] (Read)
// 0x018 : Data signal of data_re
//         bit 31~0 - data_re[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of data_im
//         bit 31~0 - data_im[31:0] (Read/Write)
// 0x024 : reserved
// 0x800 ~
// 0xfff : Memory 'P_sm' (361 * 32b)
//         Word n : bit [31:0] - P_sm[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XMUSIC_AXILITES_ADDR_AP_CTRL      0x000
#define XMUSIC_AXILITES_ADDR_GIE          0x004
#define XMUSIC_AXILITES_ADDR_IER          0x008
#define XMUSIC_AXILITES_ADDR_ISR          0x00c
#define XMUSIC_AXILITES_ADDR_AP_RETURN    0x010
#define XMUSIC_AXILITES_BITS_AP_RETURN    32
#define XMUSIC_AXILITES_ADDR_DATA_RE_DATA 0x018
#define XMUSIC_AXILITES_BITS_DATA_RE_DATA 32
#define XMUSIC_AXILITES_ADDR_DATA_IM_DATA 0x020
#define XMUSIC_AXILITES_BITS_DATA_IM_DATA 32
#define XMUSIC_AXILITES_ADDR_P_SM_BASE    0x800
#define XMUSIC_AXILITES_ADDR_P_SM_HIGH    0xfff
#define XMUSIC_AXILITES_WIDTH_P_SM        32
#define XMUSIC_AXILITES_DEPTH_P_SM        361

