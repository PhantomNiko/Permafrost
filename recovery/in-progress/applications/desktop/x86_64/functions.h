/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
char *strstr(const char *,const char *);
unsigned long strlen(const char *);
static inline void pf_app_scrollbars_layout(unsigned long long a,unsigned long long b,void *vertical,void *horizontal,void *output){union {unsigned long long q[2];TerrorUIRect r;} u={{a,b}};terror_ui_scrollbars_layout(u.r,vertical,horizontal,output);}
#define thunk_memcmp memcmp
#define thunk_memcpy memcpy
#define thunk_memset memset
#define thunk_snprintf snprintf
#define thunk_strchr strchr
#define thunk_strcmp strcmp
#define thunk_strlen strlen
#define thunk_strncmp strncmp
#define thunk_strstr strstr
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_terror_ui_reload_colours terror_ui_reload_colours
#define thunk_terror_ui_scrollbar_value_from_point terror_ui_scrollbar_value_from_point
#define thunk_pf_app_scrollbars_layout pf_app_scrollbars_layout
#define thunk_terror_ui_window_configure terror_ui_window_configure
#define thunk_terror_ui_window_list terror_ui_window_list
#define thunk_terror_ui_window_menu_command terror_ui_window_menu_command
#define thunk_terror_ui_window_pointer_event terror_ui_window_pointer_event
#define thunk_terror_ui_window_request_close terror_ui_window_request_close
#define thunk_terror_ui_window_set_content_size terror_ui_window_set_content_size
extern uint8_t pf_module_state[];
char * recovered_10000630(void);
int recovered_10000640(void);
ulong recovered_10006e30(char *param_1);
void recovered_10007940(undefined1 *param_1);
void recovered_10007a40(void);
void recovered_10008c90(void);
void recovered_10008ce0(byte *param_1,ulong param_2);
ulong recovered_10009200(void);
ulong recovered_100094d0(int param_1,char *param_2,undefined4 param_3,byte param_4);
ulong recovered_10009640(byte *param_1,int param_2,byte param_3);
void recovered_10009b30(void);
uint recovered_10009bf0(byte param_1);
void recovered_10009f40(void);
void recovered_1000a210(undefined4 param_1);
void recovered_1000a290(long param_1);
void recovered_1000a430(char *param_1);
long * recovered_1000a6e0(void);
uint128 recovered_1000aa70(void);
uint128 recovered_1000ab70(long param_1);
void recovered_1000ad00(uint param_1,char param_2);
void recovered_1000b430(long param_1);
uint128 recovered_1000eae0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4);
void recovered_1000eb70(long param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000eef0(ulong param_1,undefined8 param_2);
ulong recovered_1000f220(char *param_1,ulong param_2,undefined8 param_3);
undefined8 recovered_1000f550(uint param_1,uint param_2);
undefined8 recovered_1000f630(byte *param_1,uint *param_2);
void recovered_1000f6b0(long param_1,char param_2);
void recovered_1000f910(void);
uint128 recovered_1000ffc0(void);
uint128 recovered_10010080(void);
void recovered_10010290(long param_1,void *param_2);
undefined8 recovered_100103d0(long param_1,int param_2,uint *param_3);
undefined8 recovered_100105d0(void);
undefined8 recovered_10010ad0(void);
bool recovered_10010b20(void);
void recovered_10010c20(long *param_1);
undefined8 recovered_10010c90(long param_1);
undefined8 recovered_100113b0(int param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 recovered_10011ab0(long param_1,ulong param_2,ulong *param_3,char *param_4);
undefined8 recovered_10011b40(long param_1,ulong param_2,ulong *param_3,uint param_4);
undefined8 recovered_10011c00(int param_1,char *param_2);
undefined8 recovered_10011f70(undefined8 param_1,char *param_2,void *param_3,uint param_4);
void recovered_10012000(char *param_1,ulong param_2,char *param_3);
void recovered_10012090(char *param_1,ulong param_2,uint param_3);
void recovered_100121b0(char *param_1,undefined1 *param_2,ulong param_3);
undefined8 recovered_100122b0(undefined8 param_1,char *param_2,undefined4 *param_3);
undefined8 recovered_100123b0(undefined8 param_1,char *param_2);
undefined8 recovered_10012440(void);
undefined8 recovered_100126d0(undefined8 param_1);
void recovered_10012840(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
void recovered_10012a90(char *param_1,byte *param_2);
ulong recovered_100134d0(byte *param_1,int *param_2);
undefined8 recovered_10013a50(byte *param_1,undefined1 *param_2);
undefined1 * recovered_10013e40(undefined1 *param_1);
undefined8 recovered_10013f60(long param_1,long param_2);
undefined8 recovered_10013fd0(byte *param_1,char *param_2);
bool recovered_10014060(byte *param_1);
bool recovered_100146e0(char *param_1,long param_2);
undefined8 recovered_100147d0(undefined8 param_1,char *param_2,uint *param_3);
void recovered_100149f0(char *param_1,char *param_2);
char * recovered_10014bf0(char *param_1);
long recovered_10014c80(int param_1);
ulong recovered_10014e00(void);
bool recovered_10014f10(undefined1 *param_1,undefined1 *param_2);
void recovered_10014fe0(long param_1,uint param_2,undefined4 param_3);
int recovered_100153c0(char *param_1);
ulong recovered_100155b0(void);
void recovered_100156c0(void *param_1);
void recovered_10015820(void *param_1,char param_2);
ulong recovered_10015bd0(long param_1,long *param_2);
void recovered_10016070(long *param_1);
undefined8 recovered_10016140(void);
undefined8 recovered_10016350(void *param_1,long *param_2,undefined8 *param_3,int *param_4);
undefined8 recovered_10016c40(undefined8 *param_1,char *param_2,uint *param_3);
undefined8 recovered_10016de0(void);
ulong recovered_10016e30(long param_1,uint param_2);
void recovered_10016f70(undefined8 *param_1,uint param_2);
ulong recovered_10017260(long param_1,undefined8 *param_2,long param_3,int param_4,char param_5);
undefined8 recovered_10017f70(void);
undefined8 recovered_10019220(void);
void recovered_10019270(void);
void recovered_10019910(void);
void recovered_10019ae0(void);
void recovered_1001a300(byte *param_1,byte param_2);
void recovered_1001b2b0(void);
void recovered_1001b460(void);
void recovered_1001b5a0(void);
void recovered_1001bb20(void);
void recovered_1001bc50(void);
void recovered_1001c1c0(void);
void recovered_1001c2c0(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5);
void recovered_1001c4a0(long *param_1,int param_2,int param_3,ulong param_4,uint param_5);
void recovered_1001c660(uint param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_1001cba0(uint param_1,int param_2,int param_3,byte *param_4,uint param_5);
long * recovered_1001cd10(char *param_1,int param_2);
void recovered_1001d6e0(uint param_1,uint param_2,uint param_3,byte param_4);
void recovered_1001d8e0(uint param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
void recovered_1001db70(uint param_1,int param_2,byte *param_3,uint param_4,uint param_5,
                       uint param_6);
undefined8
recovered_1001de60(byte *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
uint recovered_1001e320(uint param_1,int param_2,long *param_3);
byte recovered_1001e470(long param_1);
long * recovered_1001e5b0(char *param_1,uint param_2,undefined4 param_3);
undefined8 recovered_1001eef0(byte *param_1);
ulong recovered_1001f160(long param_1,char *param_2,char *param_3);
long * recovered_1001f4d0(undefined1 *param_1,int param_2);
void recovered_1001f600(char *param_1,char *param_2,char *param_3);
uint128 recovered_1001f770(long param_1);
void recovered_1001fc20(undefined8 param_1,ulong param_2,byte param_3);
void recovered_1001fe60(undefined8 param_1,undefined8 param_2,long param_3,char param_4);
undefined4
recovered_100201a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void recovered_10020220(undefined8 param_1,uint param_2,int param_3);
void recovered_10020650(byte *param_1);
void recovered_10021670(undefined8 param_1,undefined8 param_2,uint param_3);
ulong recovered_10022030(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void recovered_10022100(ulong param_1,ulong param_2,int param_3,uint param_4);
undefined8
recovered_100231e0(ulong param_1,undefined8 param_2,ulong *param_3,long *param_4,int param_5);
uint recovered_10023570(long param_1,undefined8 param_2,int param_3,uint param_4);
uint128 recovered_100236a0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4);
uint recovered_10023710(int *param_1,uint param_2,uint param_3);
void recovered_10023a10(long param_1,uint param_2,int param_3,uint param_4,uint param_5,
                       undefined1 *param_6);
uint recovered_10023bd0(long param_1,int param_2,int param_3,uint param_4,uint param_5,ulong param_6
                       );
void recovered_10023ce0(long param_1);
void recovered_10024590(byte *param_1);
ulong recovered_100272f0(undefined8 param_1,char *param_2,int param_3,undefined1 *param_4,
                        ulong param_5);
ulong recovered_10027520(long param_1,int param_2);
void recovered_100276a0(uint param_1,int param_2,undefined8 *param_3,char param_4,byte param_5);
void recovered_10027fa0(ulong *param_1);
ulong * recovered_10028270(ulong param_1,ulong param_2);
uint128 recovered_10028630(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6);
void recovered_10028810(undefined8 param_1,ulong param_2,int param_3,byte param_4);
void recovered_10028a10(byte *param_1,byte *param_2,uint param_3,byte param_4,int param_5);
void recovered_10028bd0(uint param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_10029030(char *param_1,uint param_2);
void recovered_10029400(char *param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
void recovered_100295a0(ulong param_1,char *param_2,ulong param_3);
void recovered_10029780(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4);
void recovered_100298c0(uint param_1,char *param_2,char *param_3,char *param_4);
void recovered_10029990(char *param_1,ulong param_2,ulong param_3);
void recovered_10029ab0(char *param_1,char *param_2,uint param_3);
void recovered_10029bf0(long param_1);
void recovered_10029cf0(ulong param_1);
uint128 recovered_1002a160(long param_1);
uint128 recovered_1002a200(long param_1);
uint128 recovered_1002a470(long param_1);
void recovered_1002a500(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                       byte param_5);
void recovered_1002a820(void);
void recovered_1002a980(undefined8 *param_1,uint param_2,int param_3,int param_4);
int recovered_1002ab80(undefined8 *param_1,uint param_2,ulong param_3,int param_4);
void recovered_1002b350(long *param_1,undefined8 param_2,ulong param_3,char param_4,
                       undefined8 param_5,undefined8 param_6);
void recovered_1002b8d0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                       int param_6);
uint128 recovered_1002bb90(void);
void recovered_1002bc10(int param_1);
void recovered_1002c620(ulong param_1,ulong param_2,uint param_3,int param_4,int param_5);
uint128 recovered_1002cc60(void);
void recovered_1002ce20(uint param_1,int param_2,int param_3,byte *param_4,uint param_5);
ulong recovered_1002cfb0(ulong param_1,uint *param_2);
void recovered_1002d210(char *param_1,ulong param_2,ulong param_3);
ulong recovered_1002d740(void);
ulong recovered_1002d880(ulong param_1);
undefined8 recovered_1002da80(long param_1,uint *param_2,long *param_3);
void recovered_1002de30(uint param_1,uint param_2,uint param_3,undefined *UNRECOVERED_JUMPTABLE,
                       undefined8 param_5);
void recovered_1002e0a0(long *param_1,uint param_2,uint param_3);
void recovered_1002e800(long *param_1,uint param_2,uint param_3);
void recovered_1002e8d0(long *param_1,uint param_2,uint param_3);
undefined8 recovered_1002ecf0(uint param_1);
undefined8 recovered_1002eec0(long param_1,char *param_2);
void recovered_1002f080(uint param_1);
ulong recovered_1002f1e0(uint param_1,uint param_2,undefined8 param_3,char *param_4,char *param_5);
void recovered_1002f480(uint param_1);
ulong recovered_1002f500(undefined8 *param_1);
ulong recovered_1002f740(char *param_1);
void recovered_1002fc10(void);
void recovered_1002fd20(long param_1);
undefined8 recovered_100301d0(void);
void recovered_10030220(uint param_1,uint param_2);
ulong recovered_10030f20(char *param_1,ulong param_2,ulong param_3,undefined1 *param_4,int param_5,
                        int param_6);
ulong recovered_10031d70(uint param_1,uint param_2);
void recovered_10032600(uint param_1);
undefined8 recovered_100326b0(int param_1,int param_2);
int recovered_10032770(int param_1,int param_2);
ulong recovered_10032a00(int param_1,int param_2);
undefined4 recovered_10032a80(byte *param_1,int param_2);
void recovered_10032bb0(byte *param_1,long param_2,uint param_3);
void recovered_10033320(ulong param_1);
void recovered_10033400(int param_1);
bool recovered_10033520(char *param_1,int param_2,int param_3);
void recovered_10033640(uint param_1,undefined4 param_2,undefined4 param_3);
undefined8 recovered_100336c0(uint param_1,int param_2,int param_3);
ulong recovered_10033d00(long param_1,int param_2,int param_3);
void recovered_10033db0(char *param_1);
undefined8 recovered_10033e00(uint param_1,int param_2,int param_3);
int recovered_100343c0(long param_1,int param_2,int param_3);
void recovered_100344e0(long param_1);
bool recovered_10034580(char *param_1,int param_2,undefined1 *param_3);
void recovered_10034670(char *param_1);
undefined8
recovered_10034fe0(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,uint *param_5,
                  undefined1 *param_6,int param_7,int param_8);
void recovered_10035140(char *param_1,uint param_2,int param_3);
void recovered_100352d0(long param_1,byte param_2,char *param_3);
char * recovered_100357e0(uint param_1,byte *param_2,uint param_3,byte *param_4,char param_5);
void recovered_10035f90(undefined1 *param_1,int param_2);
void recovered_100361b0(uint param_1);
void recovered_10036460(void);
void recovered_10036be0(uint param_1);
void recovered_10036c80(int param_1);
void recovered_10036de0(void);
void recovered_10036e80(void);
void recovered_10036ed0(long param_1);
void recovered_100372b0(long param_1,uint param_2,byte param_3);
void recovered_10037420(char *param_1,long param_2);
void recovered_10037b60(char *param_1,int param_2);
void recovered_10037d30(char *param_1,int param_2,undefined1 param_3);
void recovered_10037f90(undefined1 *param_1,int param_2);
void recovered_10038110(long param_1);
void recovered_10038230(void);
void recovered_100383b0(char *param_1,int param_2);
void recovered_10038670(long param_1,undefined4 param_2);
undefined8 recovered_10038b50(undefined8 param_1,char *param_2);
void recovered_10038be0(int param_1);
void recovered_10038f00(long param_1,uint param_2,uint param_3);
void recovered_100394c0(long param_1,undefined4 param_2,char *param_3,undefined4 param_4);
void recovered_10039620(long param_1);
void recovered_10039680(long param_1);
void recovered_100397e0(long param_1);
undefined4 recovered_10039af0(void);
void recovered_10039b70(long param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                       byte *param_5,int param_6,char param_7);
undefined8 recovered_10039dc0(long param_1);
ulong recovered_10039f70(char *param_1,ulong param_2,char *param_3);
void recovered_1003a100(byte *param_1,uint param_2);
ulong recovered_1003a360(byte *param_1,int param_2);
undefined1 * recovered_1003a750(char *param_1,byte param_2);
char * recovered_1003aa80(undefined4 param_1,char *param_2,byte param_3,long *param_4);
char * recovered_1003be80(long param_1,ulong param_2,long *param_3);
undefined8 recovered_1003c5c0(char *param_1,ulong param_2,ulong param_3,ulong *param_4);
bool recovered_1003c620(char *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5);
char * recovered_1003c920(uint param_1,char *param_2,byte param_3,void *param_4,ulong param_5);
long recovered_1003d120(long param_1,ulong param_2,byte param_3);
undefined8 recovered_1003d410(long param_1,ulong param_2);
undefined8 recovered_1003d5f0(long *param_1,void *param_2,ulong param_3);
char * recovered_1003d700(int param_1,char *param_2,char param_3);
void recovered_1003d990(long param_1,ulong param_2,long param_3,long param_4,long param_5,
                       char param_6);
char * recovered_1003db20(char *param_1,long param_2,ulong param_3,char param_4);
void recovered_1003dec0(uint param_1);
undefined8 recovered_1003df80(long param_1,undefined4 *param_2,undefined4 *param_3);
ulong recovered_1003e1b0(uint param_1,byte *param_2,uint param_3,byte *param_4,byte param_5);
void recovered_1003e500(void);
undefined1 recovered_1003e550(long param_1,int param_2,char *param_3);
undefined8 recovered_1003e740(undefined8 param_1,char *param_2,char *param_3);
ulong recovered_1003e7d0(uint param_1,byte *param_2,uint param_3,byte *param_4,uint param_5);
bool recovered_1003eb50(undefined1 *param_1,undefined1 *param_2);
bool recovered_1003ec20(int param_1,char *param_2);
undefined8 recovered_1003f180(char *param_1,char *param_2);
void recovered_1003f2b0(void);
ulong recovered_1003f410(long *param_1,ulong *param_2,ulong *param_3,undefined4 param_4,
                        char *param_5);
ulong recovered_1003f640(long param_1,long *param_2);
void recovered_1003f830(undefined4 param_1,undefined4 param_2);
void recovered_1003f9a0(undefined4 param_1,undefined4 param_2);
void recovered_1003fa40(uint param_1,undefined4 param_2,undefined4 param_3);
void recovered_1003fc60(byte *param_1,uint param_2);
bool recovered_10040250(byte *param_1);
ulong recovered_10040360(char *param_1,uint param_2,char *param_3);
int recovered_10040620(long param_1,int param_2,int param_3);
void recovered_100407d0(long param_1,uint param_2);
void recovered_10040950(long param_1,int param_2);
ulong recovered_10040b20(long param_1,long param_2,int param_3);
ulong recovered_100410a0(int param_1,int param_2);
void recovered_10041320(uint param_1,int param_2,int param_3);
ulong recovered_10041390(long param_1,long param_2);
void recovered_100414e0(char *param_1,uint param_2,int param_3,int param_4);
void recovered_10041690(char *param_1,uint param_2);
void recovered_10041b30(char *param_1);
void recovered_10041f70(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4);
void recovered_10042480(long param_1,char *param_2,char *param_3);
undefined8 recovered_100426e0(void);
undefined8
recovered_100429e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  long *param_7);
ulong recovered_10042d90(char *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                        undefined8 param_5,uint param_6,ulong param_7,undefined8 param_8);
void recovered_100443d0(ulong param_1,undefined8 param_2);
void recovered_10044570(ulong param_1,undefined8 param_2);
uint128 recovered_10044710(undefined8 param_1,undefined8 param_2,ulong param_3);
uint128 recovered_10044890(long param_1,ulong param_2,ulong param_3);
uint128 recovered_10044b80(void);
uint recovered_10044c30(void);
uint128 recovered_10044cd0(void);
void recovered_100451d0(int param_1);
void recovered_10045270(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4);
void recovered_100453f0(long param_1,ulong param_2,undefined8 param_3);
void recovered_10045510(long *param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
