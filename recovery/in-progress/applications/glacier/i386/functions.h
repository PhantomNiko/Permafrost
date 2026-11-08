/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
extern uint8_t pf_module_state[];

/* Original analysis identifiers for manual recovery units. */
#define longdouble long double
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
#define FUN_1001a7c2 snprintf
#define recovered_1001a7c2 snprintf
uint winter_js_execute_basic(char *script,char *output,uint capacity,char *status,uint status_capacity, uint flags);
byte * winter_js_execute_browser_event(byte *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5, int param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10, uint param_11);
undefined * winter_js_version(void);
int winter_tls_client_handshake(void *context,char *error,ulong capacity);
void winter_tls_client_init(void *context,void *io,char *hostname);
int winter_tls_read(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity);
int winter_tls_write(void *context,void *data,ulong size,char *error,ulong capacity);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
char *strstr(const char *,const char *);
int memcmp(const void *,const void *,unsigned long);
typedef uint64_t uint5;
unsigned long long __udivdi3(unsigned long long,unsigned long long);
static inline uint64_t pf_app_udivdi3(uint64_t a,uint32_t low,uint32_t high){return __udivdi3(a,(uint64_t)low|((uint64_t)high<<32));}
extern uint8_t pf_module_state[];
int recovered_10000fc0(void);
void recovered_10002c00(void *in_ECX);
void recovered_10002c50(int in_ECX);
void recovered_10002e20(void *in_ECX);
void recovered_10002f30(int in_ECX,byte *in_EDX);
undefined4 recovered_10003100(int in_ECX);
int recovered_100032d0(void);
void recovered_10003320(int in_ECX,int in_EDX);
void recovered_100047d0(int in_EDX);
void recovered_10006920(int in_ECX,int in_EDX,byte *param_3);
void recovered_100079f0(int in_ECX);
void recovered_10007b60(char *in_ECX,int in_EDX,int param_3);
void recovered_10007bb0(byte *in_ECX,undefined1 *in_EDX,int param_3,undefined1 *param_4);
bool recovered_10007c80(byte *in_ECX,byte *in_EDX);
void recovered_10007ce0(char *in_ECX,char *in_EDX,undefined1 *param_3);
int recovered_10007ed0(int in_ECX,byte *in_EDX);
void recovered_10007f40(int in_ECX,byte *in_EDX,char *param_3);
char * recovered_100082e0(char *in_ECX,char *in_EDX);
undefined4
recovered_10008360(int in_EDX,char *param_2,undefined1 *param_3,uint param_4,char *param_5);
bool recovered_100086e0(char *in_ECX);
void recovered_10008930(char *in_ECX,char *in_EDX,int param_3);
undefined4 recovered_10008b30(byte *in_ECX,char *in_EDX,char *param_3);
undefined4 recovered_10009080(int in_ECX,undefined4 *in_EDX,char *param_3);
void recovered_10009110(char *in_ECX,undefined1 *in_EDX);
void recovered_100091b0(char *in_ECX,char *in_EDX,char *param_3);
undefined4 recovered_10009250(char *in_ECX,int *in_EDX,char *param_3);
void recovered_10009350(byte *in_ECX);
undefined4
recovered_10009430(int in_ECX,int in_EDX,undefined1 *param_3,uint param_4,ulong *param_5,
                  undefined1 *param_6,char *param_7,ulong param_8);
undefined4 recovered_100097b0(byte *in_ECX,undefined1 *in_EDX,char *param_3,ulong param_4);
undefined4 recovered_10009ae0(char *in_ECX,char *in_EDX,ulong param_3);
undefined4 recovered_10009e80(char *in_ECX,uint *in_EDX);
undefined4 recovered_1000a010(int in_ECX,byte *in_EDX,uint *param_3,char *param_4,ulong param_5);
undefined4 recovered_1000a460(int in_ECX,uint in_EDX,char *param_3,char *param_4,ulong param_5);
undefined4
recovered_1000a7f0(undefined4 in_ECX,int in_EDX,uint param_3,ushort param_4,void *param_5,
                  int param_6,char *param_7,int param_8,undefined1 *param_9,uint param_10,
                  uint *param_11,char *param_12,ulong param_13,undefined *param_14,
                  undefined4 param_15);
undefined4
recovered_1000ac00(int in_ECX,uint in_EDX,ushort param_3,void *param_4,char *param_5,
                  undefined1 *param_6,uint param_7,uint *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined4 param_12);
int recovered_1000ae70(int in_ECX);
undefined4 recovered_1000aec0(byte *in_ECX);
undefined4
recovered_1000b0e0(int in_ECX,uint in_EDX,int param_3,int param_4,int *param_5,char *param_6,
                  ulong param_7);
void recovered_1000b320(char *in_ECX,undefined1 *in_EDX);
bool recovered_1000b470(int in_ECX,int in_EDX,uint param_3,uint param_4);
undefined4 recovered_1000b610(int in_ECX,undefined4 in_EDX,uint *param_3);
bool recovered_1000ba20(int in_ECX,void *in_EDX,uint param_3,uint param_4,undefined2 param_5,
                       undefined2 param_6,void *param_7,uint param_8);
void recovered_1000bba0(undefined1 *in_ECX,int in_EDX,ushort param_3,byte param_4,uint param_5,
                       uint param_6);
undefined4 recovered_1000bcb0(ushort *in_ECX,uint in_EDX,ushort param_3,uint *param_4,char *param_5);
undefined4
recovered_1000bec0(int *in_ECX,int in_EDX,uint param_3,ushort param_4,void *param_5,char *param_6,
                  ulong param_7);
undefined4 recovered_1000c1a0(int param_1,int param_2,uint param_3,char *param_4,ulong param_5);
undefined4 recovered_1000c270(int param_1,void *param_2,uint param_3,char *param_4,ulong param_5);
undefined1 recovered_1000c2b0(int *param_1,undefined1 *param_2,int param_3);
bool recovered_1000c410(int param_1,byte *param_2,int param_3,char param_4,char *param_5,
                       ulong param_6);
bool recovered_1000c760(int in_ECX,void *in_EDX,uint param_3,undefined2 param_4,undefined2 param_5,
                       undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,
                       ushort param_10);
undefined4
recovered_1000ca00(int in_ECX,int in_EDX,uint param_3,uint param_4,ushort param_5,ushort param_6,
                  uint *param_7,uint *param_8,undefined1 *param_9,int *param_10,short *param_11);
undefined4 recovered_1000cb60(int *in_ECX,char *in_EDX,ulong param_3);
void recovered_1000cf30(int *in_ECX);
undefined4 recovered_1000cf80(int *in_ECX,void *in_EDX,uint param_3,char *param_4,ulong param_5);
void recovered_1000d080(char *in_ECX);
uint recovered_1000d0d0(char *in_ECX,void *in_EDX,uint param_3);
undefined4 recovered_1000d120(char *in_ECX,char *in_EDX,undefined1 *param_3);
undefined4 recovered_1000d2c0(char *in_ECX,char *in_EDX,undefined1 *param_3);
undefined4 recovered_1000d4d0(byte *in_ECX,undefined4 *in_EDX);
undefined4 recovered_1000d8d0(byte *in_ECX);
void recovered_1000dd60(int in_ECX,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,undefined1 param_8);
char * recovered_1000de30(int in_ECX,byte *in_EDX);
undefined4 recovered_1000e430(int in_ECX,char *in_EDX,char *param_3);
void recovered_1000e730(int in_ECX,int *in_EDX,int *param_3,int *param_4,byte *param_5,int param_6,
                       int param_7);
void recovered_1000eba0(int in_ECX,int *in_EDX,byte *param_3,int param_4,int param_5);
void recovered_1000f090(int in_ECX,char *in_EDX,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7);
undefined4 recovered_1000f380(byte *in_ECX);
void recovered_1000f8d0(int in_ECX,undefined4 *in_EDX);
bool recovered_1000f990(int in_ECX,char *in_EDX,byte *param_3);
void recovered_10010290(char *in_ECX,char *in_EDX);
undefined4 recovered_10010450(byte *in_ECX,char *in_EDX);
void recovered_10010540(int in_ECX,int in_EDX,undefined4 *in_stack_00000004);
undefined4 recovered_100105d0(char *in_ECX,undefined4 in_EDX);
undefined4 recovered_10010940(int in_ECX,char *in_EDX,undefined4 param_3);
void recovered_10010a50(int in_ECX,byte *in_EDX_00,int param_3,char *param_4,int param_5);
void recovered_100114c0(int in_ECX,char *in_EDX,char *param_3,int param_4,int param_5,int param_6,
                       int *param_7);
void recovered_10011790(int in_EDX,undefined4 *param_2,char *param_3,int param_4);
void recovered_10011f30(int in_ECX,undefined1 *in_EDX,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
void recovered_10012030(int in_ECX,char *in_EDX,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,char param_7,int param_8,int *param_9);
undefined4 recovered_100122e0(char *in_ECX,char *in_EDX);
void recovered_100123d0(int in_ECX,char *in_EDX,char *param_3,undefined1 *param_4,undefined4 param_5
                       ,int param_6,int *param_7);
void recovered_100125a0(char *in_ECX,char *in_EDX,char *param_3);
undefined4 recovered_10012880(byte *in_ECX);
char * recovered_10012c50(int in_ECX,byte *in_EDX);
bool recovered_10012d10(char *in_ECX,char *in_EDX,byte *param_3,undefined1 *param_4);
undefined4 recovered_10012e00(uint in_ECX,uint in_EDX);
undefined4 recovered_10012e40(char *in_ECX,char *in_EDX,byte *param_3);
undefined4 recovered_10012f60(int in_ECX,char *in_EDX);
void recovered_10012ff0(int in_ECX,int *in_EDX,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,int param_8);
byte * recovered_10013110(byte *in_ECX,byte *in_EDX,byte *param_3);
void recovered_10013710(int in_ECX,int *in_EDX,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,int param_8);
uint recovered_100138b0(char *in_ECX,uint in_EDX);
byte * recovered_100139f0(byte *in_ECX,byte *in_EDX,char *param_3);
void recovered_10013ae0(int in_ECX,int in_EDX,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7);
undefined4 recovered_10013c60(byte *in_ECX);
undefined4 recovered_10013dc0(byte *in_ECX,undefined1 *in_EDX);
bool recovered_10013e90(int in_ECX);
void recovered_10013f20(int in_ECX,int in_EDX,byte *param_3,char *param_4);
void recovered_10014340(int in_ECX,int in_EDX,char *param_3);
void recovered_10014410(int in_ECX);
void recovered_10014710(int in_ECX,int in_EDX,int param_3,int param_4);
void recovered_10014790(void *in_ECX,int in_EDX);
bool recovered_10014870(int in_ECX);
undefined4 recovered_10014900(int in_ECX,void **in_EDX,void **param_3);
bool recovered_10014a40(char *in_ECX,byte *in_EDX);
void recovered_10014ad0(char *in_ECX,byte *in_EDX,ulong param_3);
undefined1 recovered_10014ca0(int *param_1);
void recovered_10015180(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100151a0(undefined4 *param_1,int param_2,uint param_3);
int recovered_10015250(char *in_ECX);
undefined4
recovered_100153a0(int in_ECX,byte *in_EDX,char *param_3,undefined *param_4,undefined *param_5,
                  undefined4 param_6);
undefined4 recovered_10015e10(byte *in_ECX,char *in_EDX);
undefined4 recovered_100161b0(void **in_ECX,void **in_EDX);
void recovered_100162e0(char *in_ECX);
void recovered_10016330(void *in_ECX_00,int in_EDX,char *param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                       undefined1 param_9,byte *param_10);
void recovered_10016820(int *param_1,uint param_2,uint param_3);
void recovered_10016bb0(int *param_1,void *param_2,uint param_3,uint param_4);
void recovered_10016f20(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,uint param_6);
void recovered_10017450(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6);
void recovered_10017750(int in_ECX,int in_EDX,char *param_3,int param_4,int param_5);
void recovered_10017890(int in_ECX,int in_EDX);
void recovered_10017c40(undefined4 *in_ECX,int in_EDX);
void recovered_10017ce0(int in_ECX);
void recovered_10018390(int in_ECX,int *in_EDX,uint param_3,int param_4,uint param_5,uint param_6);
void recovered_100186a0(int in_ECX,int in_EDX);
void recovered_10018fe0(int in_ECX,int in_EDX,uint param_3,uint param_4);
void recovered_10019400(int in_ECX,int *in_EDX,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10019700(int in_ECX);
void recovered_10019830(int in_ECX);
void recovered_10019960(int in_ECX);
undefined4 recovered_10019a60(char *in_ECX,int in_EDX);
void recovered_10019c50(int in_ECX);
void recovered_10019cd0(int in_ECX,int in_EDX_00,int param_3);
undefined4 recovered_1001a100(int in_ECX,int in_EDX,char *param_3);
void recovered_1001a590(char *in_ECX,byte *in_EDX);
void recovered_1001a6a0(int in_ECX,int in_EDX_00);

/* Original analysis identifiers for manual recovery units. */
