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
void * recovered_10000d98(void);
uint recovered_10000da8(void *api);
void recovered_10001018(undefined1 *param_1,int param_2);
void recovered_1000103c(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10001050(int *param_1,byte *param_2,int *param_3);
undefined4 recovered_100022fc(undefined1 *param_1,uint param_2);
void recovered_10002728(void);
void recovered_1000277c(int param_1,uint param_2,char *param_3);
int recovered_100027d0(int param_1);
undefined4 recovered_100027f8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_100029bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
int recovered_10002a30(int param_1);
uint recovered_10002da4(byte *param_1);
undefined4
recovered_10002dcc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
undefined4
recovered_10002e3c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
uint recovered_10002eb4(int *api,uint base,uint offset,uint value);
bool recovered_10002ecc(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
void recovered_10002f14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool recovered_10002f5c(int *param_1,int param_2,int param_3,undefined4 *param_4);
uint recovered_10002fa8(int *api,byte *device,uint index,uint offset,uint length,int *output);
void recovered_100031b0(int *param_1,int param_2,int param_3,int param_4);
bool recovered_100031cc(int *param_1,int param_2);
void recovered_10003284(int *param_1,int param_2,undefined4 param_3);
void recovered_100032a0(int *param_1,int param_2,int param_3,undefined4 param_4);
bool recovered_100032b8(int *param_1,int param_2,undefined4 *param_3);
void recovered_10003304(int *param_1);
undefined4 recovered_10003340(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100033ac(int *param_1);
undefined4 recovered_100033ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10003450(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_1000349c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100034ec(int param_1,uint param_2,uint param_3,int param_4);
void recovered_1000354c(int param_1,uint param_2,int param_3);
void recovered_100035fc(int param_1,uint param_2,undefined1 param_3);
int recovered_10003638(int param_1);
undefined4 recovered_100036c8(undefined4 *param_1);
void recovered_100036f0(void);
uint recovered_10003770(uint param_1,uint param_2);
uint recovered_100037c0(uint param_1,uint param_2);
uint recovered_100037f8(uint param_1,uint param_2);
uint recovered_10003868(uint param_1,uint param_2);
undefined8 recovered_100038d0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100039b4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a34(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003b54(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003c10(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003c98(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003ce4(float param_1);
void recovered_10003cf4(float param_1);
double recovered_10003d04(uint param_1,uint param_2);
double recovered_10003d4c(uint param_1,uint param_2);
float recovered_10003d74(uint param_1,uint param_2);
float recovered_10003d90(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
