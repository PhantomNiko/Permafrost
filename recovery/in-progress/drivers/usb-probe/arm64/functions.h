/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "cpu.h"
#include "arm64-recovery.h"
extern uint8_t pf_module_state[];
void * recovered_100003e0(void);
uint recovered_100003ec(void *api);
void recovered_10000530(int *api,void *device);
uint recovered_100006a4(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_100007f0(int *api,uint bus,uint slot,uint function,uint offset,void *out);
char * recovered_10000840(long param_1);
void recovered_10000ae4(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_10000af4(long param_1,ulong param_2,char *param_3);
void recovered_10000b4c(long param_1,ulong param_2,uint param_3,int param_4);
void recovered_10000bc4(long param_1,ulong param_2,uint param_3);
long recovered_10000c74(long param_1);
void recovered_10000c90(long param_1,ulong param_2,undefined1 param_3);
char * recovered_10000cd0(int param_1);

/* Original analysis identifiers for manual recovery units. */
