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
void * recovered_10001410(void);
uint recovered_10001420(void *api);
void recovered_10001c68(undefined1 *param_1,int param_2);
undefined4 recovered_10001c80(int *param_1,int param_2);
bool recovered_10001cc8(int param_1);
void recovered_10001d6c(int *param_1,undefined4 param_2);
void recovered_10001dac(void);
uint recovered_10001e54(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined4 *param_5);
undefined4 recovered_10001f24(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10002154(undefined1 *param_1,uint param_2,char *param_3);
undefined4 recovered_10002168(int param_1,uint param_2);
undefined4
recovered_100025dc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char *param_6,char *param_7,char *param_8,char *param_9);
undefined4 recovered_100026d8(undefined4 *param_1);
undefined4 recovered_10002888(uint *param_1);
undefined4 recovered_100029fc(undefined4 *param_1);
void recovered_10002b14(int param_1,int param_2);
void recovered_10002bbc(int param_1,uint param_2,char *param_3);
void recovered_10002c10(void);
void recovered_10002c44(int *param_1);
undefined4
recovered_10002c80(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6);
bool recovered_10002db0(int *param_1);
int recovered_10002e34(int *param_1,undefined4 param_2,int param_3);
void recovered_10002e64(uint *param_1,uint param_2);
undefined8 recovered_10002e74(int *param_1,int *param_2,int param_3,int param_4);
void recovered_10002ea8(int param_1,undefined1 param_2);
int recovered_10002ee4(int param_1);
uint recovered_10002f10(uint param_1,uint param_2);
uint recovered_10002f60(uint param_1,uint param_2);
uint recovered_10002f98(uint param_1,uint param_2);
uint recovered_10003008(uint param_1,uint param_2);
undefined8 recovered_10003070(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003154(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100031d4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100032f4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100033b0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003438(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003484(float param_1);
void recovered_10003494(float param_1);
double recovered_100034a4(uint param_1,uint param_2);
double recovered_100034ec(uint param_1,uint param_2);
float recovered_10003514(uint param_1,uint param_2);
float recovered_10003530(uint param_1,uint param_2);
void *recovered_10003570(void *dest,const void *source,size_t bytes);

/* Original analysis identifiers for manual recovery units. */
