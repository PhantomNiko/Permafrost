/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_100003a4(void);
uint recovered_100003ba(void *api);
void recovered_10000509(int *api,void *device);
uint recovered_10000703(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_10000866(int *api,uint bus,uint slot,uint function,uint offset,void *out);
void * recovered_100008c9(void *device);
void recovered_10000b5c(void *dest,uint capacity,void *text);
void recovered_10000b7b(void *dest,uint capacity,void *text);
void recovered_10000bc1(void *dest,uint capacity,uint value,uint digits);
void recovered_10000c13(void *dest,uint capacity,uint value);
uint recovered_10000c7a(void *text);
void recovered_10000c9b(void *dest,uint capacity,uint character);
void * recovered_10000cc9(uint interface);
undefined8 recovered_10000d32(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000d74(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000db8(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
