/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_10000380(void);
uint recovered_1000038d(void *api);
void recovered_100004cc(int *api,void *device);
uint recovered_100006b6(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10000832(int *api,uint bus,uint slot,uint function,uint offset,void *out);
char * recovered_10000878(long param_1);
void recovered_10000b30(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_10000b44(long param_1,ulong param_2,char *param_3);
void recovered_10000b98(long param_1,ulong param_2,uint param_3,int param_4);
void recovered_10000bf5(long param_1,ulong param_2,ulong param_3);
long recovered_10000c6c(long param_1);
void recovered_10000c8c(long param_1,ulong param_2,undefined1 param_3);
char * recovered_10000cc6(int param_1);

/* Original analysis identifiers for manual recovery units. */
