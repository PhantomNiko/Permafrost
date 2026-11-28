/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_100010fc(void);
uint recovered_10001112(void *api);
void recovered_100012cf(char *param_1);
void recovered_100012ee(int *param_1);
void recovered_10002988(char *param_1);
int recovered_100029ce(void);
uint recovered_100029ef(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10002b6c(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out);
bool recovered_10002bd0(void);
void recovered_10002c02(void *data,uint size);
undefined4 recovered_10002c1b(undefined4 param_1,int param_2);
undefined4 recovered_10002c51(undefined4 param_1,undefined4 *param_2);
uint recovered_10002c9f(int *api,void *queue,uint index);
void recovered_10002ce0(uint param_1);
undefined4 recovered_10002d47(int param_1,uint param_2,uint *param_3);
undefined4 recovered_10002ed7(int param_1,int param_2);
void recovered_100030ed(void);
undefined4 recovered_1000317c(undefined1 param_1,undefined1 param_2,undefined4 param_3);
undefined4 recovered_100031c9(uint param_1,uint param_2,uint param_3,int *param_4);
bool recovered_1000338f(void);
uint recovered_1000341f(void);
uint recovered_10003446(void);
undefined4 recovered_1000346d(undefined4 *param_1);
void recovered_100034bb(int *api);
uint recovered_100034e3(int *api,uint base,uint offset,uint value);
uint recovered_1000350a(int *api,uint delay);
uint recovered_10003535(int *api,uint address,uint width,uint value);
undefined4 recovered_1000357f(undefined4 param_1,int param_2);
undefined4 recovered_100035e5(int param_1,undefined4 param_2,int param_3);
void recovered_10003631(void *data,uint low,uint high);
void recovered_1000366c(int *api,uint device,void *data,uint size);
undefined4
recovered_1000369e(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                  int param_7,uint param_8,undefined2 *param_9);
bool recovered_10003a33(void);
void recovered_10003a84(uint param_1,int param_2);
void recovered_10003ad6(undefined1 param_1);
char * recovered_10003b04(void);
void recovered_10003b6d(void);
uint recovered_10003b98(void *data);
uint recovered_10003bca(uint descriptor);
void recovered_10003c9d(void *dest,void *data,uint size);
undefined8 recovered_10003ccc(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003d0e(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003d52(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
