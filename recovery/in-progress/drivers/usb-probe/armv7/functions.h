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
void * recovered_10002c50(void);
uint recovered_10002c60(void *api);
void recovered_10002dd8(int *api,void *device);
undefined4 recovered_10002fd0(int *api,uint bus,uint slot,uint function,undefined1 *out);
uint recovered_10003170(int *api,uint bus,uint slot,uint function,uint offset,void *out);
int recovered_100031e8(int param_1);
void recovered_10003550(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10003564(int param_1,uint param_2,char *param_3);
void recovered_100035b8(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10003618(int param_1,uint param_2,int param_3);
int recovered_100036c8(int param_1);
void recovered_100036f0(int param_1,uint param_2,undefined1 param_3);
int recovered_1000372c(int param_1);
uint recovered_100037c0(uint param_1,uint param_2);
uint recovered_10003810(uint param_1,uint param_2);
uint recovered_10003848(uint param_1,uint param_2);
uint recovered_100038b8(uint param_1,uint param_2);
undefined8 recovered_10003920(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a04(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a84(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003ba4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003c60(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003ce8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003d34(float param_1);
void recovered_10003d44(float param_1);
double recovered_10003d54(uint param_1,uint param_2);
double recovered_10003d9c(uint param_1,uint param_2);
float recovered_10003dc4(uint param_1,uint param_2);
float recovered_10003de0(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
