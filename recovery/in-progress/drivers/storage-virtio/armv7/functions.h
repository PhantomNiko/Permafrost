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
void * recovered_100039c8(void);
uint recovered_100039d8(void *api);
undefined4 recovered_10003c94(int *param_1,byte *param_2);
void recovered_10005448(void);
void recovered_100054a0(undefined1 *param_1,int param_2);
bool recovered_100054c4(uint param_1);
undefined4 recovered_100055b0(uint param_1,undefined4 *param_2,uint param_3,int param_4);
void recovered_10005674(uint param_1,uint param_2,undefined1 *param_3,uint param_4);
void recovered_10005690(uint param_1,uint param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_100056ac(uint param_1,int param_2);
void recovered_100057c0(undefined1 *param_1,uint param_2,char *param_3);
undefined4 recovered_100057d4(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10005998(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
void recovered_10005a0c(int *param_1,undefined4 param_2);
void recovered_10005a4c(int param_1,uint param_2,int param_3);
void recovered_10005afc(int param_1,uint param_2,char *param_3);
uint recovered_10005b50(byte *param_1);
bool recovered_10005b70(int *param_1,byte *param_2,int param_3);
uint recovered_10005d24(void *device,void *data,uint bytes,uint *low,uint *high);
void recovered_10005d9c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10005de4(int *param_1);
uint recovered_10005e20(int *api,uint base,uint offset,uint value);
bool recovered_10005e38(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
bool recovered_10005e80(int *param_1,int param_2,int param_3,undefined4 *param_4);
uint recovered_10005ecc(int *api,uint base,uint offset,void *out);
bool recovered_10005ee8(int *param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_10005f34(undefined4 *param_1);
uint recovered_10006028(int *api,byte *device,uint index,int span,int *output);
undefined4 recovered_100061f0(int *param_1,int *param_2);
undefined4
recovered_10006490(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
uint recovered_10006500(void *device,uint mask);
void recovered_10006540(undefined4 *param_1,uint param_2);
undefined4 recovered_10006620(int *param_1,undefined4 param_2);
bool recovered_10006664(undefined4 *param_1);
undefined4 recovered_100066f4(int *param_1,uint param_2);
bool recovered_1000675c(undefined4 *param_1);
undefined4 recovered_10006820(int *param_1,uint param_2);
undefined4 recovered_10006870(undefined4 *param_1,uint param_2,uint param_3);
uint recovered_10006918(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 recovered_1000698c(undefined4 *param_1);
uint recovered_10006a2c(int *api,uint base,uint offset,uint value);
undefined4 recovered_10006a44(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006a94(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006af8(int *param_1,int param_2,undefined4 param_3,int param_4);
uint recovered_10006b50(void *device,uint offset,uint width,uint value);
int recovered_10006bb0(int param_1);
bool recovered_10006bd8(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                       int *param_6);
bool recovered_10006c3c(int *param_1,int param_2);
void recovered_10006cfc(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_10006d14(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10006d80(int param_1,uint param_2,undefined1 param_3);
void recovered_10006dbc(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10006e1c(int param_1);
bool recovered_10006e50(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 *param_4,
                       int param_5);
void recovered_10007320(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007364(undefined1 *param_1,undefined1 *param_2,int param_3);
void recovered_1000737c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6);
undefined4 recovered_100073d0(undefined4 *param_1);
undefined4
recovered_100073f8(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5);
int recovered_100075f0(int *param_1,uint param_2,int param_3,int param_4);
void recovered_100077b0(int *param_1,int param_2,int param_3);
uint recovered_10007858(uint param_1,uint param_2);
uint recovered_100078a8(uint param_1,uint param_2);
uint recovered_100078e0(uint param_1,uint param_2);
uint recovered_10007950(uint param_1,uint param_2);
undefined8 recovered_100079b8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007a9c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007b1c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007c3c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007cf8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007d80(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007dcc(float param_1);
void recovered_10007ddc(float param_1);
double recovered_10007dec(uint param_1,uint param_2);
double recovered_10007e34(uint param_1,uint param_2);
float recovered_10007e5c(uint param_1,uint param_2);
float recovered_10007e78(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
