/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_1000038c(void);
uint recovered_100003a2(void *api);
void recovered_100004f1(int *api,void *device);
uint recovered_100006f5(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10000858(int *api,uint bus,uint slot,uint function,uint offset,void *out);
void * recovered_100008bb(void *device);
void recovered_10000b54(void *dest,uint capacity,void *text);
void recovered_10000b73(void *dest,uint capacity,void *text);
void recovered_10000bb9(void *dest,uint capacity,uint value,uint digits);
void recovered_10000c0b(void *dest,uint capacity,uint value);
uint recovered_10000c72(void *text);
void recovered_10000c93(void *dest,uint capacity,uint character);
void * recovered_10000cc1(uint interface);
undefined8 recovered_10000d2a(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000d6c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000db0(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
