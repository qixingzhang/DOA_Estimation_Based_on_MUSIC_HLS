// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmusic.h"

extern XMusic_Config XMusic_ConfigTable[];

XMusic_Config *XMusic_LookupConfig(u16 DeviceId) {
	XMusic_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMUSIC_NUM_INSTANCES; Index++) {
		if (XMusic_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMusic_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMusic_Initialize(XMusic *InstancePtr, u16 DeviceId) {
	XMusic_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMusic_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMusic_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

