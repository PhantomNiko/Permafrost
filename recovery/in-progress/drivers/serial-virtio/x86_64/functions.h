/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_10000380(void);
uint recovered_1000038d(void *api);
void recovered_100004cc(long param_1,byte *param_2);
uint recovered_100006c0(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_1000083c(int *api,uint bus,uint slot,uint function,uint offset,void *out);
char * recovered_10000882(long param_1);
void recovered_10000b4c(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_10000b60(long param_1,ulong param_2,char *param_3);
void recovered_10000bb4(long param_1,ulong param_2,uint param_3,int param_4);
void recovered_10000c11(long param_1,ulong param_2,ulong param_3);
long recovered_10000c88(long param_1);
void recovered_10000ca8(long param_1,ulong param_2,undefined1 param_3);
char * recovered_10000ce2(int param_1);

/* Original analysis identifiers for manual recovery units. */
