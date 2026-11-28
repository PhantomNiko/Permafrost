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
void * recovered_10001d08(void);
uint recovered_10001d18(void *api);
void recovered_10001ef8(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10001f0c(int *param_1,byte *param_2,int *param_3);
void recovered_10002acc(int param_1,uint param_2,char *param_3);
int recovered_10002b20(int param_1);
undefined4 recovered_10002b48(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10002d0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
void recovered_10002d80(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10002de0(int param_1,uint param_2,int param_3);
void recovered_10002e90(void);
void recovered_10002ff4(undefined1 *param_1,int param_2);
bool recovered_10003018(int param_1,undefined4 *param_2);
undefined4 recovered_100030c8(int param_1,undefined4 param_2);
undefined4
recovered_10003148(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
void recovered_100031b8(int *param_1,undefined4 param_2);
undefined4
recovered_100031f8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
void recovered_10003270(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100032b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100032fc(int param_1,int param_2,int param_3);
void recovered_1000338c(int param_1,uint param_2,undefined1 param_3);
void recovered_100033c8(int *param_1);
undefined4 recovered_10003404(undefined1 *param_1,uint param_2,uint *param_3);
undefined4 recovered_10003634(undefined1 *param_1,int param_2);
void recovered_100037ec(void);
uint recovered_10003828(void);
void recovered_1000388c(undefined1 *param_1,undefined1 *param_2,int param_3);
uint recovered_100038b8(uint param_1,uint param_2);
uint recovered_10003908(uint param_1,uint param_2);
uint recovered_10003940(uint param_1,uint param_2);
uint recovered_100039b0(uint param_1,uint param_2);
undefined8 recovered_10003a18(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003afc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003b7c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003c9c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003d58(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003de0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003e2c(float param_1);
void recovered_10003e3c(float param_1);
double recovered_10003e4c(uint param_1,uint param_2);
double recovered_10003e94(uint param_1,uint param_2);
float recovered_10003ebc(uint param_1,uint param_2);
float recovered_10003ed8(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
