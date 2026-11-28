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
void * recovered_10001618(void);
uint recovered_10001628(void *api);
void recovered_1000190c(undefined1 *param_1,int param_2);
void recovered_10001930(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10001944(int *param_1,byte *param_2,int *param_3);
bool recovered_100022c4(int param_1,uint param_2,int param_3,int param_4,int param_5);
bool recovered_100026e0(void);
void recovered_1000270c(undefined4 param_1,uint param_2);
void recovered_100027ac(int param_1,uint param_2,char *param_3);
int recovered_10002800(int param_1);
undefined4 recovered_10002828(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_100029ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
int recovered_10002a60(int param_1);
bool recovered_10002dc8(int *param_1,int param_2,int param_3,undefined4 *param_4);
uint recovered_10002e14(int *api,uint base,uint offset,uint value);
bool recovered_10002e2c(uint param_1);
void recovered_10002ecc(int *param_1,undefined4 param_2);
void recovered_10002f0c(uint param_1,uint param_2,undefined4 *param_3);
void recovered_10002f1c(uint param_1,uint param_2,uint param_3);
void recovered_10002f38(uint param_1,uint param_2,uint param_3);
uint recovered_10002f54(uint stream);
undefined4
recovered_10002ff0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
undefined4 recovered_10003060(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_100030cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool recovered_10003130(int *param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 recovered_1000317c(uint param_1,uint param_2,uint param_3,undefined4 *param_4);
bool recovered_10003328(int param_1,uint param_2,uint param_3);
uint recovered_100033c8(int *api,uint base,uint offset,uint value);
void recovered_100033e0(void);
void recovered_1000347c(int param_1,uint param_2,uint param_3,int param_4);
void recovered_100034dc(int param_1,uint param_2,int param_3);
void recovered_1000358c(int param_1,uint param_2,undefined1 param_3);
int recovered_100035c8(int param_1);
void recovered_10003658(void);
undefined4
recovered_10003694(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
void recovered_1000370c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint recovered_10003754(int *api,uint base,uint offset,uint value);
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
