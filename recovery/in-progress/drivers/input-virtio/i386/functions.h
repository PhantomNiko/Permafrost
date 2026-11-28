/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_10000d68(void);
uint recovered_10000d7e(void *api);
void recovered_1000108a(void);
undefined4 recovered_100010a3(void);
void recovered_1000244c(void);
void recovered_1000248d(char *param_1);
bool recovered_100024ac(undefined4 *param_1);
uint recovered_1000254e(void);
uint recovered_10002586(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10002703(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out);
char * recovered_10002767(void);
undefined4 recovered_10002a00(int param_1,undefined4 param_2,int param_3);
void recovered_10002a4c(int *api,uint device,void *data,uint length);
undefined4 recovered_10002a7e(void);
bool recovered_10002aa5(void);
undefined4 recovered_10002af6(undefined4 param_1,undefined4 *param_2);
void recovered_10002b44(char *param_1);
void recovered_10002b8a(void *device);
undefined4 recovered_10002c17(undefined1 param_1,undefined1 param_2,undefined4 param_3);
int recovered_10002c64(void);
undefined4 recovered_10002c85(uint param_1,uint param_2,uint param_3,int *param_4);
undefined4 recovered_10002e4b(undefined4 param_1,int param_2);
bool recovered_10002e81(void);
undefined4 recovered_10002f2d(void);
undefined4 recovered_10002f54(void);
undefined4 recovered_10002f7b(undefined4 *param_1);
void recovered_10002fc9(void);
undefined4 recovered_10002ff1(undefined4 param_1,int param_2);
undefined4 recovered_10003057(void);
undefined4 recovered_100030a1(undefined4 param_1,undefined1 *param_2,uint *param_3);
uint recovered_10003276(void *data,uint size,int *minimum,uint *range);
uint recovered_100032e8(void *bytes);
void recovered_1000331a(uint param_1,int param_2);
void recovered_1000336c(uint param_1);
void recovered_100033d3(undefined1 param_1);
char * recovered_10003401(void);
void recovered_1000346a(void);
void recovered_10003495(void);
uint recovered_10003bd4(int value,int minimum,uint range);
undefined4 recovered_10003c1d(void);
undefined8 recovered_10003c4e(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003c90(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003cd4(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
