/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
#define SUB87(a,b) (((uint64_t)(a)>>((b)*8))&0xffffffffffffffULL)
extern uint8_t pf_module_state[];
int recovered_100005f0(void);
char recovered_10002e10(char *param_1);
void recovered_10003870(undefined1 *param_1);
void recovered_10003990(void);
ulong recovered_10003ea0(int param_1,char *param_2,undefined4 param_3,char param_4);
void recovered_100041c0(char *param_1,int param_2);
int recovered_10004540(void);
void recovered_10004810(void);
void recovered_100048a0(long param_1);
void recovered_100049e0(char *param_1,undefined1 in_XMM3 [16],undefined1 in_XMM6 [16],
                       undefined1 in_XMM7 [16]);
uint128 recovered_10005770(long param_1);
void recovered_10005880(long param_1);
uint128 recovered_10009cf0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4);
uint128 recovered_10009d80(void);
uint128 recovered_10009eb0(long param_1,undefined8 param_2,int param_3,int param_4);
void recovered_10009f60(ulong param_1,undefined8 param_2);
uint128 recovered_1000a100(void);
void recovered_1000a570(ulong param_1,undefined8 param_2);
ulong recovered_1000a710(char *param_1,ulong param_2,undefined8 param_3,undefined1 in_XMM3 [16],
                        undefined1 in_XMM6 [16],undefined1 in_XMM7 [16]);
undefined8 recovered_1000a8a0(ulong param_1,undefined8 param_2);
undefined8 recovered_1000aa00(long param_1);
void recovered_1000ac60(undefined8 *param_1);
ulong recovered_1000acd0(int param_1);
uint recovered_1000c0f0(int param_1,char *param_2,void *param_3);
undefined1 * recovered_1000c180(undefined1 *param_1);
undefined8 recovered_1000c2a0(long param_1,long param_2);
undefined8 recovered_1000c310(byte *param_1,char *param_2);
undefined8 recovered_1000c3b0(int param_1);
void recovered_1000c5f0(long param_1,uint param_2,char param_3,char *param_4,uint param_5);
void recovered_1000c9f0(char *param_1,int param_2);
long recovered_1000cbb0(undefined8 *param_1);
void recovered_1000cff0(long param_1);
void recovered_1000d820(uint param_1);
uint recovered_1000d930(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5);
void recovered_1000d9d0(void);
void recovered_1000de50(void);
void recovered_1000e110(void);
void recovered_1000e200(void);
void recovered_1000e5b0(char *param_1,char param_2);
void recovered_1000f5d0(void);
void recovered_1000f6e0(void);
void recovered_1000f940(void);
void recovered_1000fa10(void);
long * recovered_1000fb00(char *param_1,int param_2);
void recovered_1000fef0(long *param_1,int param_2,int param_3,ulong param_4,uint param_5);
void recovered_100100b0(uint param_1,uint param_2,uint param_3,byte param_4);
void recovered_100101e0(int param_1,int param_2,char *param_3,uint param_4,uint param_5,uint param_6
                       );
uint recovered_10010420(int param_1,int param_2,long *param_3);
void recovered_10010570(uint param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_10010a40(int param_1,undefined8 param_2,ulong param_3,char *param_4,ulong param_5);
void recovered_10010b10(uint param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
byte recovered_10010d70(long param_1);
bool recovered_10010e60(char *param_1,long param_2);
long * recovered_10010f50(char *param_1,int param_2);
undefined8 recovered_10011700(byte *param_1);
char * recovered_10011970(char *param_1);
void recovered_10011a00(char *param_1,char *param_2,char *param_3);
void recovered_10011b30(ulong param_1,uint param_2,int param_3);
void recovered_10011f80(undefined *param_1);
undefined8 recovered_10015350(ulong param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4);
void recovered_10015590(long param_1);
void recovered_10015f00(int param_1,int param_2,char *param_3,int param_4);
void recovered_100164d0(char *param_1,ulong param_2,uint param_3);
void recovered_100165f0(ulong param_1,ulong param_2,int param_3);
void recovered_100167b0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10016c10(char *param_1,char *param_2,char *param_3,ulong param_4);
void recovered_10016d80(ulong param_1,char *param_2,ulong param_3);
uint recovered_10016f60(char *param_1,uint param_2);
void recovered_10017250(char *param_1,ulong param_2,ulong param_3);
void recovered_10017370(char *param_1,char *param_2,int param_3);
void recovered_100174b0(long param_1);
undefined8 recovered_100175b0(long param_1);
uint128 recovered_10017700(long param_1);
uint128 recovered_10017910(char *param_1);
void recovered_10017960(undefined8 param_1,long param_2);
ulong recovered_10018260(void);
uint recovered_100183a0(long param_1,uint param_2,uint param_3,uint param_4);
void recovered_10018530(long param_1);
void recovered_100189e0(int param_1,undefined4 param_2);
long recovered_100191f0(int param_1,int param_2);
void recovered_10019380(uint param_1);
void recovered_100194a0(char *param_1);
void recovered_100194f0(uint param_1);
void recovered_10019560(int param_1);
void recovered_10019670(uint param_1);
undefined8 recovered_100196c0(uint param_1,int param_2,int param_3);
long recovered_10019de0(long param_1,int param_2,int param_3);
undefined8 recovered_10019e70(uint param_1,int param_2,int param_3);
int recovered_1001a110(long param_1,int param_2,int param_3);
void recovered_1001a2a0(char *param_1,undefined1 *param_2);
void recovered_1001a380(byte *param_1,long param_2,int param_3);
void recovered_1001aa70(void);
void recovered_1001ab50(int param_1);
void recovered_1001ac60(char *param_1,long param_2);
void recovered_1001b350(int param_1);
void recovered_1001b510(int param_1);
void recovered_1001b640(int param_1);
void recovered_1001b8d0(int param_1,undefined1 param_2);
void recovered_1001b9b0(int param_1);
void recovered_1001bae0(int param_1);
void recovered_1001bb70(long param_1,undefined4 param_2);
void recovered_1001c080(long param_1,uint param_2,undefined1 param_3);
void recovered_1001c1c0(long param_1);
void recovered_1001c560(undefined4 param_1,uint param_2,undefined8 param_3,char *param_4,
                       char *param_5);
void recovered_1001c6c0(int param_1,char *param_2);
void recovered_1001c750(char *param_1,int param_2,char *param_3);
bool recovered_1001c870(int param_1);
undefined8 recovered_1001cdc0(char *param_1,char *param_2);
bool recovered_1001cef0(byte *param_1);
void recovered_1001d450(long param_1,uint param_2,int param_3,undefined1 param_4);
void recovered_1001d610(void);
void recovered_1001d8e0(int param_1,char *param_2,char *param_3);
void recovered_1001d970(undefined4 param_1,char *param_2,undefined4 param_3);
void recovered_1001da00(void);
void recovered_1001df60(char *param_1,undefined4 param_2);
void recovered_1001e110(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,
                       undefined4 param_5,int param_6);
void recovered_1001e360(byte *param_1,int param_2);
void recovered_1001e9a0(uint param_1,char param_2);
int recovered_1001ece0(long param_1,int param_2,int param_3);
void recovered_1001ee90(long param_1,uint param_2);
void recovered_1001f010(long param_1,int param_2);
ulong recovered_1001f160(ulong param_1,uint *param_2);
undefined8 recovered_1001f3c0(uint year,uint month,uint day,uint hour,uint minute,uint second,long *output);
void recovered_1001f770(char *param_1);
void recovered_1001fbd0(long param_1,uint *param_2,ulong param_3,undefined8 param_4,
                       undefined1 in_XMM3 [16],undefined1 in_XMM6 [16],undefined1 in_XMM7 [16]);
void recovered_10020240(long param_1,long param_2,ulong param_3,undefined8 param_4);
void recovered_10020460(long param_1,ulong param_2,undefined8 param_3);
void recovered_10020580(int param_1);

/* Original analysis identifiers for manual recovery units. */
