/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void * recovered_100003aa(void);
uint recovered_100003c0(void *api);
undefined4 recovered_1000060b(void);
void recovered_10001d9f(void);
void recovered_10001de0(void *data,uint bytes);
bool recovered_10001df9(uint param_1);
undefined4 recovered_10001eb0(uint param_1,undefined4 *param_2,int param_3,int param_4);
void recovered_10001f56(undefined4 param_1,undefined4 param_2,int param_3,uint param_4);
void recovered_10001f7c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4);
undefined4 recovered_10001fa2(uint param_1,int param_2);
void recovered_100020a0(char *param_1);
uint recovered_100020bf(int *api,uint bus,uint slot,uint function,void *out);
uint recovered_1000223c(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out);
void recovered_100022a0(void);
void recovered_100022cb(uint param_1);
void recovered_10002332(char *param_1);
uint recovered_10002378(void);
bool recovered_1000239f(void);
uint recovered_1000250f(void *device,void *data,uint bytes,uint *low,uint *high);
void recovered_10002562(int *api,uint device,void *data,uint bytes);
void recovered_10002594(int *api);
uint recovered_100025bc(int *api,uint base,uint offset,uint value);
bool recovered_100025e3(void);
uint recovered_10002634(int *api,uint base,uint offset,void *out);
uint recovered_10002682(int *api,uint base,uint offset,void *out);
undefined4 recovered_100026b8(int param_1,undefined4 *param_2);
void recovered_10002706(void *device);
uint recovered_100027fc(int *api,byte *device,uint index,int span,void *out);
undefined4 recovered_100029af(void);
undefined4 recovered_10002bc3(undefined1 param_1,undefined1 param_2,undefined4 param_3);
uint recovered_10002c10(void *device,uint value);
void recovered_10002c64(void);
uint recovered_10002d4b(int *api,uint delay);
uint recovered_10002d79(void *device);
uint recovered_10002dec(void *device,uint value);
uint recovered_10002e42(void *device);
uint recovered_10002ef1(void *device,uint command);
uint recovered_10002f33(void *device,uint mask,uint errors);
uint recovered_10002fac(void *device,uint offset,uint width,void *out);
uint recovered_1000302a(void *device);
uint recovered_1000309a(int *api,uint base,uint offset,uint value);
uint recovered_100030c1(int *api,uint port,uint width,uint value);
uint recovered_10003103(int *api,uint address,uint width,uint value);
uint recovered_1000314d(int *api,uint port,uint width,void *out);
uint recovered_10003193(void *device,uint offset,uint width,uint value);
int recovered_100031ff(void);
undefined4 recovered_10003220(uint param_1,uint param_2,uint param_3,int *param_4);
bool recovered_1000326f(void);
uint recovered_10003303(void);
uint recovered_1000332a(int *api,uint address,uint width,void *out);
void recovered_10003390(undefined1 param_1);
void recovered_100033be(uint param_1,int param_2);
void recovered_10003410(void *device);
uint recovered_10003435(void *device,uint operation,uint sector,void *data,uint sectors);
void recovered_100038de(void *data,uint low,uint high);
void recovered_10003919(void *dest,void *data,uint bytes);
void recovered_1000393a(void *descriptor,uint low,uint high,uint bytes,uint flags,uint next);
uint recovered_10003990(void *data);
undefined4 recovered_100039c2(int param_1,uint param_2,int param_3);
uint recovered_10003b98(void *device,uint sector,void *data,int writing);
void recovered_10003d4b(int param_1);
undefined8 recovered_10003dcd(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003e0f(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003e53(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
