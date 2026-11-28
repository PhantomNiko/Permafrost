/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "cpu.h"
#include "arm64-recovery.h"
extern uint8_t pf_module_state[];
void * recovered_10000610(void);
uint recovered_1000061c(void *api);
void recovered_10000be4(undefined1 *param_1,long param_2);
undefined8 recovered_10000bf8(int *param_1);
void recovered_10000c30(void);
undefined8
recovered_10000d64(undefined4 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,char *param_7,char *param_8,char *param_9);
undefined8 recovered_10000e74(undefined8 *param_1);
undefined8 recovered_10000f5c(uint *param_1);
undefined8 recovered_10001064(undefined8 *param_1);
bool recovered_10001110(uint *param_1);
void recovered_100011c0(int *param_1,undefined8 param_2);
undefined8 recovered_100011f8(undefined8 param_1,long param_2);
undefined8 recovered_1000121c(long param_1);
undefined8
recovered_1000164c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
void recovered_1000169c(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_100016ac(long param_1,ulong param_2,char *param_3);
void recovered_10001704(long param_1,uint param_2);
void recovered_100017a8(long param_1,undefined1 param_2);
void recovered_100017e4(long param_1,uint param_2);
long recovered_10001840(long param_1);
void recovered_1000185c(undefined8 param_1);
void recovered_100018a0(void);
void recovered_100018d0(undefined1 *param_1,undefined1 *param_2,long param_3);
void *recovered_10001970(void *dest,const void *source,size_t bytes);

/* Original analysis identifiers for manual recovery units. */
