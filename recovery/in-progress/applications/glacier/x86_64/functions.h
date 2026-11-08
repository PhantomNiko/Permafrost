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
#define FUN_1001df25 snprintf
#define recovered_1001df25 snprintf
#define pf_varargs_1001df25__4_ recovered_1001df25
#define pf_varargs_1001df25__4__8_ recovered_1001df25
#define pf_varargs_1001df25__4__8__8__8__8__8_ recovered_1001df25
#define pf_varargs_1001df25__8_ recovered_1001df25
#define pf_varargs_1001df25__8__4_ recovered_1001df25
#define pf_varargs_1001df25__8__4__4_ recovered_1001df25
#define pf_varargs_1001df25__8__8_ recovered_1001df25
#define pf_varargs_1001df25__8__8__8_ recovered_1001df25
#define pf_varargs_1001df25__8__8__8__8_ recovered_1001df25
#define pf_varargs_1001df25___ recovered_1001df25
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
typedef uint64_t uint5;
#define FUN_1001df43 strstr
#define FUN_1001df7f winter_js_execute_basic
char *strstr(const char *,const char *);
unsigned int winter_js_execute_basic(char *,char *,unsigned int,char *,unsigned int,unsigned int);
#define FUN_1001df0d memcmp
#define FUN_1001df13 memcpy
#define FUN_1001df19 memmove
#define FUN_1001df1f memset
#define FUN_1001df2b strchr
#define FUN_1001df31 strcmp
#define FUN_1001df37 strlen
#define FUN_1001df3d strncmp
#define FUN_1001df49 terror_ui_window_close
#define FUN_1001df4f terror_ui_window_info_requests_close
#define FUN_1001df55 terror_ui_window_open
#define FUN_1001df5b terror_ui_window_pointer_state
#define FUN_1001df61 terror_ui_window_present
#define FUN_1001df67 terror_ui_window_query
#define FUN_1001df6d terror_ui_window_set_menus
#define FUN_1001df73 terror_ui_window_spec
#define FUN_1001df79 terror_ui_window_sync_buffer
uint winter_js_execute_basic(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags);
#define FUN_1001df85 winter_js_execute_browser_event
uint winter_js_execute_browser_event(char *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                       uint param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10,
                       uint param_11);
#define FUN_1001df8b winter_js_version
undefined * winter_js_version(void);
#define FUN_1001df91 winter_tls_client_handshake
int winter_tls_client_handshake(void *context,char *error,ulong capacity);
#define FUN_1001df97 winter_tls_client_init
void winter_tls_client_init(void *context,void *io,char *hostname);
#define FUN_1001df9d winter_tls_read
int winter_tls_read(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity);
#define FUN_1001dfa3 winter_tls_write
int winter_tls_write(void *context,void *data,ulong size,char *error,ulong capacity);
int memcmp(const void *,const void *,unsigned long);
extern uint8_t pf_module_state[];
int recovered_10000600(void);
void recovered_10002370(void *param_1);
void recovered_100023c0(long param_1);
void recovered_100025b0(void *param_1);
void recovered_100026e0(ulong param_1,byte *param_2);
undefined8 recovered_100028e0(long param_1);
int recovered_10002ac0(void);
void recovered_10002b10(long param_1,long param_2);
void recovered_100042b0(long param_1,long param_2);
void recovered_100068b0(ulong param_1,long param_2,byte *param_3);
void recovered_10007bf0(long param_1);
void recovered_10007d70(char *param_1,long param_2,long param_3);
bool recovered_10007de0(byte *param_1,byte *param_2);
void recovered_10007e50(char *param_1,char *param_2,char *param_3,ulong param_4);
undefined8 recovered_10008090(long param_1,byte *param_2);
void recovered_10008100(long param_1,byte *param_2,char *param_3);
char * recovered_10008580(char *param_1,char *param_2);
ulong recovered_10008630(long param_1,long param_2,char *param_3,undefined1 *param_4,ulong param_5,
                        char *param_6);
char * recovered_10008a30(char *param_1);
void recovered_10008d20(char *param_1,char *param_2,long param_3);
ulong recovered_10008f40(byte *param_1,byte *param_2,char *param_3);
undefined8 recovered_100095a0(long param_1,uint *param_2,byte *param_3);
void recovered_10009640(char *param_1,undefined1 *param_2);
void recovered_100096f0(char *param_1,char *param_2,char *param_3);
undefined4 recovered_100097d0(char *param_1,int *param_2,byte *param_3);
void recovered_100098f0(byte *param_1);
ulong recovered_100099d0(long param_1,byte *param_2,undefined1 *param_3,ulong param_4,ulong *param_5
                        ,undefined1 *param_6,char *param_7,ulong param_8);
ulong recovered_10009dd0(byte *param_1,undefined1 *param_2,char *param_3,ulong param_4);
ulong recovered_1000a1a0(char *param_1,char *param_2,ulong param_3);
undefined8 recovered_1000a500(byte *param_1,uint *param_2);
undefined8 recovered_1000a6b0(long param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5);
ulong recovered_1000ab90(long param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
ulong recovered_1000afb0(undefined8 param_1,long param_2,uint param_3,ushort param_4,void *param_5,
                        undefined *param_6,char *param_7,char *param_8,undefined1 *param_9,
                        ulong param_10,ulong *param_11,char *param_12,ulong param_13,
                        undefined *param_14,undefined8 param_15);
ulong recovered_1000b450(long param_1,uint param_2,ushort param_3,void *param_4,char *param_5,
                        undefined1 *param_6,ulong param_7,ulong *param_8,char *param_9,
                        ulong param_10,undefined *param_11,undefined8 param_12);
long recovered_1000b760(long param_1);
ulong recovered_1000b7b0(byte *param_1);
undefined8
recovered_1000ba10(long param_1,ulong param_2,long param_3,long param_4,long *param_5,char *param_6,
                  ulong param_7);
void recovered_1000bc90(char *param_1,undefined1 *param_2);
undefined8 recovered_1000be80(long param_1,int param_2,uint param_3,uint param_4);
ulong recovered_1000c030(long param_1,undefined4 param_2,uint *param_3);
undefined8
recovered_1000c450(long param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,void *param_7,ushort param_8);
void recovered_1000c5e0(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       uint param_6);
bool recovered_1000c6f0(ushort *param_1,uint param_2,ushort param_3,uint *param_4,char *param_5);
undefined8
recovered_1000c8e0(long *param_1,long param_2,uint param_3,ushort param_4,void *param_5,
                  char *param_6,ulong param_7);
undefined8 recovered_1000cbe0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
ulong recovered_1000ccd0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
ulong recovered_1000ccf0(long *param_1,long param_2,ulong param_3);
ulong recovered_1000cef0(long param_1,byte *param_2,long param_3,char param_4,char *param_5,
                        ulong param_6);
undefined8
recovered_1000d310(long param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,uint param_10);
undefined8
recovered_1000d650(long param_1,long param_2,uint param_3,uint param_4,ushort param_5,ushort param_6
                  ,uint *param_7,uint *param_8,undefined1 *param_9,long *param_10,short *param_11);
ulong recovered_1000d7b0(undefined8 *param_1,char *param_2,ulong param_3);
void recovered_1000dbf0(undefined8 *param_1);
ulong recovered_1000dc30(undefined8 *param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
void recovered_1000dd70(char *param_1);
uint recovered_1000ddc0(char *param_1,void *param_2,uint param_3);
undefined8 recovered_1000de10(char *param_1,char *param_2,undefined1 *param_3);
ulong recovered_1000dfe0(char *param_1,char *param_2,char *param_3,long param_4);
undefined8 recovered_1000e250(byte *param_1,uint *param_2);
undefined8 recovered_1000e660(byte *param_1);
void recovered_1000ec60(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7);
char * recovered_1000ed40(long param_1,byte *param_2);
ulong recovered_1000f560(long param_1,char *param_2,char *param_3);
void recovered_1000f9a0(long param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       long param_6,uint param_7);
void recovered_1000ff40(long param_1,int *param_2,byte *param_3,long param_4,uint param_5);
void recovered_10010530(long param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7);
undefined8 recovered_100108c0(byte *param_1);
void recovered_10010fa0(long param_1,undefined4 *param_2);
ulong recovered_10011060(long param_1,long param_2,byte *param_3);
void recovered_10011b60(long param_1,byte *param_2);
undefined8 recovered_10011ea0(byte *param_1,char *param_2);
void recovered_10011fb0(long param_1,long param_2,uint *param_3);
undefined4 recovered_10012050(char *param_1,undefined4 param_2);
undefined4 recovered_10012480(long param_1,char *param_2,undefined4 param_3);
void recovered_10012590(long param_1,byte *param_2,long param_3,char *param_4,long param_5);
void recovered_10013250(long param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6
                       ,int *param_7);
void recovered_100135b0(long param_1,long param_2,undefined4 *param_3,char *param_4,int param_5);
void recovered_10013ee0(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
void recovered_10013ff0(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,char param_7,int param_8,int *param_9);
ulong recovered_100142a0(char *param_1,char *param_2);
void recovered_100143d0(long param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7);
void recovered_100145c0(char *param_1,char *param_2,char *param_3);
undefined8 recovered_100148f0(byte *param_1);
char * recovered_10014d90(long param_1,char *param_2);
bool recovered_10014e80(char *param_1,char *param_2,byte *param_3,undefined1 *param_4);
ulong recovered_10015050(long param_1,long param_2,byte *param_3);
undefined8 recovered_100151b0(long param_1,long param_2);
void recovered_10015250(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8);
byte * recovered_10015400(byte *param_1,byte *param_2,byte *param_3);
void recovered_10015c50(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8);
uint recovered_10015e00(char *param_1,uint param_2);
byte * recovered_10015f30(byte *param_1,byte *param_2,char *param_3);
void recovered_10016060(long param_1,int param_2,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7);
undefined8 recovered_10016210(byte *param_1);
bool recovered_100163e0(long param_1);
void recovered_100164a0(long param_1,long param_2,byte *param_3,char *param_4);
void recovered_100169b0(long param_1,long param_2,char *param_3);
void recovered_10016aa0(long param_1);
void recovered_10016e00(long param_1,long param_2,char *param_3,char *param_4);
void recovered_10016e90(ulong param_1,long param_2);
bool recovered_10016f90(long param_1);
undefined8 recovered_10017050(long param_1,undefined8 param_2,char *param_3);
bool recovered_100171b0(char *param_1,byte *param_2);
void recovered_10017260(char *param_1,byte *param_2,ulong param_3);
undefined1 recovered_100174e0(long *param_1);
void recovered_10017a10(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10017a30(undefined8 *param_1,char *param_2,ulong param_3);
long recovered_10017b10(char *param_1);
ulong recovered_10017c90(long param_1,byte *param_2,char *param_3,undefined *param_4,
                        undefined *param_5,undefined8 param_6);
undefined8 recovered_10018890(byte *param_1,char *param_2);
undefined8 recovered_10018d00(int param_1,char *param_2);
void recovered_10018e50(char *param_1);
void recovered_10018ea0(ulong param_1,long param_2,char *param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6,undefined1 param_7,byte *param_8);
void recovered_10019420(long *param_1,ulong param_2,ulong param_3);
void recovered_10019880(long *param_1,void *param_2,ulong param_3,ulong param_4);
void recovered_10019c30(long param_1,ulong param_2,undefined8 param_3,uint param_4);
void recovered_1001a280(long param_1,uint param_2,uint param_3,char *param_4,uint param_5,
                       uint param_6);
void recovered_1001a5d0(long param_1,long param_2,char *param_3,long param_4,long param_5);
void recovered_1001a750(long param_1,long param_2);
uint128 recovered_1001abb0(long param_1);
void recovered_1001ac60(long param_1);
void recovered_1001b510(long param_1,long *param_2,long param_3,ulong param_4);
void recovered_1001b8d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
void recovered_1001c4a0(long param_1,long param_2,ulong param_3);
void recovered_1001c940(long param_1,long *param_2,undefined8 param_3,ulong param_4);
void recovered_1001ccf0(long param_1);
void recovered_1001ce40(long param_1);
void recovered_1001cfa0(long param_1);
undefined8 recovered_1001d0c0(char *param_1,long param_2);
void recovered_1001d300(long param_1);
void recovered_1001d390(long param_1,long param_2,uint param_3);
ulong recovered_1001d840(long param_1,long param_2,char *param_3);
void recovered_1001dcb0(char *param_1,byte *param_2);
void recovered_1001dde0(long param_1,int param_2);

/* Original analysis identifiers for manual recovery units. */
