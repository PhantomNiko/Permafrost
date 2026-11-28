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
void * recovered_10004028(void);
uint recovered_10004038(void *api);
void recovered_10004928(undefined1 *param_1,int param_2);
void recovered_1000494c(int *param_1,byte *param_2);
void recovered_10005964(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4);
void recovered_10005ad8(void);
undefined4 recovered_10005b20(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10005e74(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10005e88(int param_1,uint param_2,int param_3);
void recovered_10005f38(int param_1,uint param_2,char *param_3);
undefined4 recovered_10005f8c(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10006150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
bool recovered_100061c4(int *param_1,byte *param_2,int param_3);
uint recovered_1000637c(int *api,byte *device,uint index,int span,int *output);
void recovered_1000654c(undefined2 *param_1);
void recovered_100065c4(void);
undefined4
recovered_10006660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
int recovered_100066d0(int param_1);
bool recovered_100066f8(int *param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_10006744(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_1000675c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_100067c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_1000682c(int *param_1,undefined4 param_2);
bool recovered_10006874(int *param_1,int param_2);
void recovered_10006930(int *param_1,int param_2,undefined4 param_3);
void recovered_1000694c(int *param_1);
void recovered_10006988(int *param_1,int param_2,int param_3,int param_4);
void recovered_100069a4(int *param_1,undefined4 param_2);
undefined4
recovered_100069e4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
bool recovered_10006a5c(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
void recovered_10006aa4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool recovered_10006aec(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                       int *param_6);
void recovered_10006b50(int *param_1,int param_2,int param_3,undefined4 param_4);
bool recovered_10006b68(int *param_1,int param_2,undefined4 *param_3);
void recovered_10006bb4(undefined4 param_1);
bool recovered_10006be0(undefined4 param_1,uint param_2,uint *param_3);
undefined4 recovered_10006fd0(undefined4 *param_1);
void recovered_10006ff8(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000703c(int param_1,uint param_2,undefined1 param_3);
void recovered_10007078(int param_1,uint param_2,uint param_3,int param_4);
undefined4 recovered_100070d8(int param_1,uint param_2);
undefined4
recovered_1000754c(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6);
bool recovered_1000767c(int *param_1);
int recovered_10007700(int *param_1,undefined4 param_2,int param_3);
void recovered_10007730(uint *param_1,uint param_2);
undefined8 recovered_10007740(int *param_1,int *param_2,int param_3,int param_4);
uint recovered_10007778(uint param_1,uint param_2);
uint recovered_100077c8(uint param_1,uint param_2);
uint recovered_10007800(uint param_1,uint param_2);
uint recovered_10007870(uint param_1,uint param_2);
undefined8 recovered_100078d8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100079bc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007a3c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007b5c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007c18(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007ca0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007cec(float param_1);
void recovered_10007cfc(float param_1);
double recovered_10007d0c(uint param_1,uint param_2);
double recovered_10007d54(uint param_1,uint param_2);
float recovered_10007d7c(uint param_1,uint param_2);
float recovered_10007d98(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
