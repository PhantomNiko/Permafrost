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
void * recovered_10000b98(void);
uint recovered_10000ba8(void *api);
void recovered_10000f24(undefined1 *param_1,int param_2);
undefined4 recovered_10000f48(int *param_1,byte *param_2);
void recovered_10001da8(int *param_1,undefined4 param_2);
void recovered_10001de8(int *param_1);
undefined4 recovered_10001e78(int *param_1,int *param_2,int param_3,int param_4);
void recovered_10001f3c(uint param_1,uint param_2,undefined1 *param_3,uint param_4);
void recovered_10001f58(uint param_1,uint param_2,undefined1 *param_3,uint param_4);
bool recovered_10001f74(uint param_1);
undefined4 recovered_1000208c(uint param_1,int param_2);
undefined4 recovered_10002194(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10002358(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
void recovered_100023cc(undefined1 *param_1,uint param_2,char *param_3);
void recovered_100023e0(int *param_1,undefined4 *param_2);
void recovered_10002594(int param_1,uint param_2,int param_3);
void recovered_10002644(int param_1,uint param_2,char *param_3);
undefined4
recovered_10002698(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
int recovered_10002708(int param_1);
bool recovered_10002730(int *param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_100027d0(int *param_1,int param_2,int param_3);
void recovered_100027ec(int *param_1);
undefined4 recovered_10002828(int *param_1,int param_2,int param_3,uint param_4);
undefined4 recovered_100028c0(int *param_1,undefined4 param_2);
void recovered_10002920(int *param_1,undefined4 param_2);
void recovered_10002960(int *param_1,int *param_2);
void recovered_100029a8(int *param_1,undefined4 param_2);
undefined4
recovered_100029e8(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined2 param_6,
                  int param_7);
uint recovered_10002ae4(int *param_1,int param_2,int *param_3);
undefined4
recovered_10002b68(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                  undefined4 param_6);
void recovered_10002be4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10002c2c(int param_1,int param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5);
bool recovered_10002ca4(int *param_1,undefined4 *param_2,int param_3,int param_4,uint param_5,
                       undefined4 *param_6);
void recovered_10002f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5);
bool recovered_10002fcc(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void recovered_10003090(int param_1,uint param_2,undefined1 param_3);
void recovered_100030cc(int param_1,uint param_2,uint param_3,int param_4);
undefined4
recovered_1000312c(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5);
void recovered_10003430(int param_1);
bool recovered_10003464(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,int param_7,int param_8);
undefined4 recovered_100035c8(undefined4 *param_1);
uint recovered_10003748(uint param_1,uint param_2);
uint recovered_10003798(uint param_1,uint param_2);
uint recovered_100037d0(uint param_1,uint param_2);
uint recovered_10003840(uint param_1,uint param_2);
undefined8 recovered_100038a8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000398c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a0c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003b2c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003be8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003c70(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003cbc(float param_1);
void recovered_10003ccc(float param_1);
double recovered_10003cdc(uint param_1,uint param_2);
double recovered_10003d24(uint param_1,uint param_2);
float recovered_10003d4c(uint param_1,uint param_2);
float recovered_10003d68(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
