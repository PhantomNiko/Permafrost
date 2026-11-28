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
void * recovered_10000ca8(void);
uint recovered_10000cb8(void *api);
void recovered_10000fe8(undefined1 *param_1,int param_2);
void recovered_1000100c(byte *param_1);
void recovered_1000206c(void);
undefined4 recovered_100020f0(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4);
void recovered_10002188(uint param_1,uint param_2,int param_3,uint param_4);
void recovered_100021a4(uint param_1,uint param_2,int param_3,uint param_4);
undefined4 recovered_100021c0(uint param_1);
undefined4 recovered_10002248(uint param_1,int param_2,undefined4 param_3,uint param_4);
undefined4 recovered_10002350(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10002514(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
undefined4
recovered_10002588(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6);
void recovered_100025fc(byte *param_1);
void recovered_10002650(int param_1,char *param_2);
void recovered_10002734(int *param_1);
void recovered_100027a0(int *param_1,undefined4 param_2);
undefined4 recovered_100027e0(int *param_1,uint param_2);
undefined4 recovered_10002880(int *param_1,int param_2,int *param_3,int *param_4);
void recovered_1000296c(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_100029ac(int *param_1,uint param_2,undefined4 param_3,uint param_4);
undefined4 recovered_10002af0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_10002b5c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool recovered_10002bc0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                       int *param_7);
undefined4 recovered_10002d98(int *param_1);
undefined4 recovered_10002e48(int *param_1,undefined4 param_2,uint param_3,uint param_4);
void recovered_10002ec0(int *param_1);
undefined4 recovered_10002efc(int *param_1,uint param_2,int param_3);
uint recovered_10002fc4(int param_1,uint param_2,uint param_3);
void recovered_10003024(undefined1 *param_1,uint param_2,char *param_3);
void recovered_1000303c(int param_1,uint param_2,char *param_3);
void recovered_10003090(int param_1,uint param_2,int param_3);
void recovered_10003140(int param_1,uint param_2,uint param_3,int param_4);
int recovered_100031a0(int param_1);
void recovered_100031c8(int param_1,uint param_2,undefined1 param_3);
undefined4 recovered_10003204(uint param_1,uint param_2,int param_3,uint param_4,int param_5);
void recovered_1000359c(int param_1);
undefined4 recovered_100035d0(undefined4 *param_1);
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
void *recovered_10003dd0(void *dest,const void *source,size_t bytes);

/* Original analysis identifiers for manual recovery units. */
