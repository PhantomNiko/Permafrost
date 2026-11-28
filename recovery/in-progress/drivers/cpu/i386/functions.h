/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_10000b1d(void);
uint recovered_10000b33(void *api);
void recovered_10000d77(void *data,uint bytes);
void recovered_10000d90(void *dest,uint capacity,void *text);
void recovered_10000daf(void *dest,uint number);
void recovered_10000e12(void *dest,uint capacity,void *text);
uint recovered_10000e58(void *text);
undefined8 recovered_10000e79(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000ebb(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10000eff(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
