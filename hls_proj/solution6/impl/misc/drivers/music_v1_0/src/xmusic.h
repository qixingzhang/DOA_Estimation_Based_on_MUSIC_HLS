// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XMUSIC_H
#define XMUSIC_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xmusic_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XMusic_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XMusic;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMusic_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMusic_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMusic_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMusic_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XMusic_Initialize(XMusic *InstancePtr, u16 DeviceId);
XMusic_Config* XMusic_LookupConfig(u16 DeviceId);
int XMusic_CfgInitialize(XMusic *InstancePtr, XMusic_Config *ConfigPtr);
#else
int XMusic_Initialize(XMusic *InstancePtr, const char* InstanceName);
int XMusic_Release(XMusic *InstancePtr);
#endif

void XMusic_Start(XMusic *InstancePtr);
u32 XMusic_IsDone(XMusic *InstancePtr);
u32 XMusic_IsIdle(XMusic *InstancePtr);
u32 XMusic_IsReady(XMusic *InstancePtr);
void XMusic_EnableAutoRestart(XMusic *InstancePtr);
void XMusic_DisableAutoRestart(XMusic *InstancePtr);
u32 XMusic_Get_return(XMusic *InstancePtr);

void XMusic_Set_data_re(XMusic *InstancePtr, u32 Data);
u32 XMusic_Get_data_re(XMusic *InstancePtr);
void XMusic_Set_data_im(XMusic *InstancePtr, u32 Data);
u32 XMusic_Get_data_im(XMusic *InstancePtr);

void XMusic_InterruptGlobalEnable(XMusic *InstancePtr);
void XMusic_InterruptGlobalDisable(XMusic *InstancePtr);
void XMusic_InterruptEnable(XMusic *InstancePtr, u32 Mask);
void XMusic_InterruptDisable(XMusic *InstancePtr, u32 Mask);
void XMusic_InterruptClear(XMusic *InstancePtr, u32 Mask);
u32 XMusic_InterruptGetEnabled(XMusic *InstancePtr);
u32 XMusic_InterruptGetStatus(XMusic *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
