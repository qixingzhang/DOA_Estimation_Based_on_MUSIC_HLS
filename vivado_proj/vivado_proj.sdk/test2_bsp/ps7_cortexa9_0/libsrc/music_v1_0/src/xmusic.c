// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xmusic.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMusic_CfgInitialize(XMusic *InstancePtr, XMusic_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMusic_Start(XMusic *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL) & 0x80;
    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMusic_IsDone(XMusic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMusic_IsIdle(XMusic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMusic_IsReady(XMusic *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMusic_EnableAutoRestart(XMusic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XMusic_DisableAutoRestart(XMusic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_AP_CTRL, 0);
}

void XMusic_InterruptGlobalEnable(XMusic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_GIE, 1);
}

void XMusic_InterruptGlobalDisable(XMusic *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_GIE, 0);
}

void XMusic_InterruptEnable(XMusic *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_IER);
    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_IER, Register | Mask);
}

void XMusic_InterruptDisable(XMusic *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_IER);
    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_IER, Register & (~Mask));
}

void XMusic_InterruptClear(XMusic *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMusic_WriteReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_ISR, Mask);
}

u32 XMusic_InterruptGetEnabled(XMusic *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_IER);
}

u32 XMusic_InterruptGetStatus(XMusic *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMusic_ReadReg(InstancePtr->Axilites_BaseAddress, XMUSIC_AXILITES_ADDR_ISR);
}

