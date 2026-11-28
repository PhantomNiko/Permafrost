/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_10000660(void);
uint recovered_10000676(void *api);
void recovered_100008bb(void *data,uint size);
void recovered_100008d4(char *param_1);
void recovered_100008f3(int *param_1);
undefined4 recovered_10001bb6(undefined1 *param_1,uint param_2);
void recovered_10001f48(void);
void recovered_10001f9f(char *param_1);
int recovered_10001fe5(void);
uint recovered_10002006(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10002183(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out);
char * recovered_100021e7(void);
uint recovered_10002480(void);
undefined4 recovered_100024af(undefined1 param_1,undefined1 param_2,undefined4 param_3);
uint recovered_100024fc(int *api,uint device,void *data,uint size,uint *low,uint *high);
uint recovered_10002548(int *api,uint base,uint offset,uint value);
bool recovered_1000256f(void);
void recovered_100025c0(int *api,uint device,void *data,uint size);
undefined4 recovered_100025f2(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_10002640(uint param_1,uint param_2,uint param_3,int *param_4);
undefined4 recovered_10002806(undefined4 param_1,int param_2);
bool recovered_1000283c(void);
uint recovered_100028c9(void);
uint recovered_100028f0(void);
undefined4 recovered_10002917(undefined4 *param_1);
void recovered_10002965(int *api);
undefined4 recovered_1000298d(undefined4 param_1,int param_2);
void recovered_100029f3(int *api);
uint recovered_10002a22(int *api,uint address,uint width,uint value);
uint recovered_10002a6c(int *api,uint port,uint width,uint value);
undefined4 recovered_10002aa4(undefined4 param_1,int param_2);
void recovered_10002aee(uint param_1,int param_2);
void recovered_10002b40(uint param_1);
void recovered_10002ba7(undefined1 param_1);
char * recovered_10002bd5(void);
uint recovered_10002c3e(void *data);
void recovered_10002c70(void);
undefined8 recovered_10002ceb(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002d2d(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002d71(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
