/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "cpu.h"
#include "arm_exclusive.h"
#include "armv7-recovery.h"
#include "neon.h"
extern uint8_t pf_module_state[];
void * recovered_100008f8(void);
uint recovered_10000908(void *api);
void recovered_10000ae8(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10000afc(int *param_1,byte *param_2,uint *param_3);
void recovered_1000217c(int param_1,uint param_2,char *param_3);
int recovered_100021d0(int param_1);
undefined4 recovered_100021f8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_100023bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
bool recovered_10002430(int param_1);
void recovered_1000246c(undefined1 *param_1,int param_2);
void recovered_10002490(int *param_1,int param_2,int param_3,int param_4);
bool recovered_100024ac(int *param_1,int param_2,int param_3,undefined4 *param_4);
uint recovered_100024f8(int *param_1,int param_2,uint param_3);
void recovered_10002548(int param_1,uint param_2,int param_3);
undefined4 recovered_100025f8(undefined1 *param_1,uint param_2,uint *param_3);
undefined4 recovered_100027ac(undefined1 *param_1,int param_2);
void recovered_100029f8(void);
undefined4
recovered_10002a78(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
uint recovered_10002ae8(int *api,byte *device,uint index,uint offset,uint length,int *output);
bool recovered_10002cf0(int *param_1,int param_2);
void recovered_10002dac(int *param_1,int param_2,undefined4 param_3);
void recovered_10002dc8(int *param_1,int param_2,int param_3,undefined4 param_4);
bool recovered_10002de0(int *param_1,int param_2,undefined4 *param_3);
void recovered_10002e2c(int *param_1);
uint recovered_10002e68(int *api,uint base,uint offset,uint value);
void recovered_10002e80(int *param_1,undefined4 param_2);
undefined4 recovered_10002ec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10002f24(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4
recovered_10002f90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
void recovered_10003008(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000304c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4
recovered_10003094(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined2 *param_11);
bool recovered_10003474(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
void recovered_100034bc(int param_1,uint param_2,uint param_3,int param_4);
void recovered_1000351c(int param_1,uint param_2,undefined1 param_3);
int recovered_10003558(int param_1);
void recovered_100035e8(void);
undefined4 recovered_10003624(undefined4 *param_1);
undefined4 recovered_1000364c(int param_1);
void recovered_1000372c(undefined1 *param_1,undefined1 *param_2,int param_3);
uint recovered_10003758(uint param_1,uint param_2);
uint recovered_100037a8(uint param_1,uint param_2);
uint recovered_100037e0(uint param_1,uint param_2);
uint recovered_10003850(uint param_1,uint param_2);
undefined8 recovered_100038b8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000399c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a1c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003b3c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003bf8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003c80(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003ccc(float param_1);
void recovered_10003cdc(float param_1);
double recovered_10003cec(uint param_1,uint param_2);
double recovered_10003d34(uint param_1,uint param_2);
float recovered_10003d5c(uint param_1,uint param_2);
float recovered_10003d78(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
