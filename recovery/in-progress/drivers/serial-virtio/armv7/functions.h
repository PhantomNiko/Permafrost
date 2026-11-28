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
void * recovered_10002c30(void);
uint recovered_10002c40(void *api);
void recovered_10002db8(int param_1,byte *param_2);
undefined4 recovered_10002fbc(int *api,uint bus,uint slot,uint function,undefined1 *out);
uint recovered_1000315c(int *api,uint bus,uint slot,uint function,uint offset,void *out);
int recovered_100031d4(int param_1);
void recovered_10003548(undefined1 *param_1,uint param_2,char *param_3);
void recovered_1000355c(int param_1,uint param_2,char *param_3);
void recovered_100035b0(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10003610(int param_1,uint param_2,int param_3);
int recovered_100036c0(int param_1);
void recovered_100036e8(int param_1,uint param_2,undefined1 param_3);
int recovered_10003724(int param_1);
uint recovered_100037b8(uint param_1,uint param_2);
uint recovered_10003808(uint param_1,uint param_2);
uint recovered_10003840(uint param_1,uint param_2);
uint recovered_100038b0(uint param_1,uint param_2);
undefined8 recovered_10003918(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100039fc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a7c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003b9c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003c58(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003ce0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003d2c(float param_1);
void recovered_10003d3c(float param_1);
double recovered_10003d4c(uint param_1,uint param_2);
double recovered_10003d94(uint param_1,uint param_2);
float recovered_10003dbc(uint param_1,uint param_2);
float recovered_10003dd8(uint param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
