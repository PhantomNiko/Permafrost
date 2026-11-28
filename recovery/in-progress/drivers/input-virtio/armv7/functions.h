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
void * recovered_10004440(void);
uint recovered_10004450(void *api);
void recovered_10004798(undefined1 *param_1,int param_2);
undefined4 recovered_100047bc(int *param_1,byte *param_2);
void recovered_10005b2c(void);
void recovered_10005b7c(undefined1 *param_1,uint param_2,char *param_3);
bool recovered_10005b90(undefined8 *param_1);
uint recovered_10005c0c(void);
undefined4 recovered_10005c48(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10005e0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
int recovered_10005e80(int param_1);
undefined4
recovered_100061f4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6);
void recovered_1000626c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_100062b4(int *param_1,int param_2,int param_3,undefined4 param_4);
bool recovered_100062cc(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
bool recovered_10006314(int *param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_10006360(int param_1,uint param_2,char *param_3);
void recovered_100063b4(int *param_1);
undefined4
recovered_10006454(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5);
int recovered_100064c4(int param_1);
uint recovered_100064ec(int *api,byte *device,uint index,uint offset,uint length,int *output);
void recovered_100066f4(int *param_1,int param_2,int param_3,int param_4);
bool recovered_10006710(int *param_1,int param_2);
void recovered_100067f4(int *param_1,int param_2,int param_3,undefined4 param_4);
void recovered_1000680c(int *param_1,int param_2,int param_3,undefined4 param_4);
bool recovered_10006824(int *param_1,int param_2,undefined4 *param_3);
void recovered_10006870(int *param_1);
undefined4 recovered_100068ac(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_10006918(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4
recovered_1000697c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  int *param_5);
undefined8 recovered_10006b7c(undefined4 *param_1,uint param_2,uint *param_3,int *param_4);
undefined4 recovered_10006bf8(undefined4 *param_1);
void recovered_10006c20(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10006c80(int param_1,uint param_2,int param_3);
void recovered_10006d30(int param_1,uint param_2,undefined1 param_3);
int recovered_10006d6c(int param_1);
void recovered_10006dfc(void);
void recovered_10006e3c(void);
uint recovered_10007648(uint param_1,uint param_2,uint param_3);
undefined4 recovered_10007694(void);
uint recovered_100076d8(uint param_1,uint param_2);
uint recovered_10007728(uint param_1,uint param_2);
uint recovered_10007760(uint param_1,uint param_2);
uint recovered_100077d0(uint param_1,uint param_2);
undefined8 recovered_10007838(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000791c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000799c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007abc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007b78(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007c00(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007c4c(float param_1);
void recovered_10007c5c(float param_1);
double recovered_10007c6c(uint param_1,uint param_2);
double recovered_10007cb4(uint param_1,uint param_2);
float recovered_10007cdc(uint param_1,uint param_2);
float recovered_10007cf8(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
