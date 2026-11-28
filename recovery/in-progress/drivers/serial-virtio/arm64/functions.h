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
void recovered_10000530(long param_1,byte *param_2);
uint recovered_100006b0(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_100007fc(int *api,uint bus,uint slot,uint function,uint offset,void *out);
char * recovered_1000084c(long param_1);
void recovered_10000af4(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_10000b04(long param_1,ulong param_2,char *param_3);
void recovered_10000b5c(long param_1,ulong param_2,uint param_3,int param_4);
void recovered_10000bd4(long param_1,ulong param_2,uint param_3);
long recovered_10000c84(long param_1);
void recovered_10000ca0(long param_1,ulong param_2,undefined1 param_3);
char * recovered_10000ce0(int param_1);

/* Original analysis identifiers for manual recovery units. */
