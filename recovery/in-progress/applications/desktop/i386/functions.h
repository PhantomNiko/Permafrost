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
static inline void pf_app_scrollbars_layout(int a,int b,int c,int d,void *vertical,void *horizontal,void *output){TerrorUIRect r={a,b,c,d};terror_ui_scrollbars_layout(r,vertical,horizontal,output);}
#define thunk___divdi3 __divdi3
#define thunk___udivdi3 __udivdi3
#define thunk___umoddi3 __umoddi3
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
long long __divdi3(long long,long long);
unsigned long long __udivdi3(unsigned long long,unsigned long long);
unsigned long long __umoddi3(unsigned long long,unsigned long long);
extern uint8_t pf_module_state[];
char * recovered_10000b90(void);
int recovered_10000bb0(int argc,char **argv);
char recovered_10007c70(char *reg_ecx);
void recovered_10008660(undefined1 *reg_ecx);
void recovered_10008750(void);
void recovered_100099a0(void *reg_ecx);
void recovered_100099f0(char *path,int device);
int recovered_10009e50(void);
uint recovered_1000a130(int reg_ecx,char *reg_edx,undefined4 param_3,byte param_4);
uint recovered_1000a2a0(byte *reg_ecx,int reg_edx,byte param_3);
void recovered_1000a6c0(void);
uint recovered_1000a790(void);
void recovered_1000aac0(void);
void recovered_1000aca0(undefined4 reg_ecx);
void recovered_1000ad20(int reg_ecx);
void recovered_1000af40(char *reg_ecx);
int recovered_1000b250(void);
void recovered_1000b5d0(int *reg_ecx);
void recovered_1000b710(int *reg_ecx,int reg_edx);
void recovered_1000b920(int reg_ecx);
void recovered_1000bfd0(int reg_ecx);
void recovered_1000f940(int reg_ecx,uint reg_edx,byte param_3,byte param_4);
undefined4 recovered_1000fcc0(int reg_ecx,int reg_edx,int param_3,int param_4);
undefined4 recovered_10010030(char *reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5);
undefined4 recovered_100103d0(uint reg_ecx,uint reg_edx);
undefined4 recovered_100104e0(byte *reg_ecx,uint *reg_edx);
void recovered_10010570(int reg_ecx);
void recovered_10010940(void);
int * recovered_10011050(int *reg_ecx);
void recovered_100112b0(int reg_ecx,void *reg_edx);
undefined4 recovered_10011430(int reg_ecx,int reg_edx,uint *param_3);
undefined4 recovered_10011610(void);
void * recovered_10011b10(ulong reg_ecx);
bool recovered_10011b60(void);
void recovered_10011c00(undefined4 *reg_ecx);
undefined4 recovered_10011c80(int reg_ecx);
undefined4 recovered_10012340(int reg_ecx,undefined1 *reg_edx,undefined1 *param_3);
undefined4 recovered_10012a10(int reg_ecx,uint reg_edx,uint *param_3,char *param_4);
undefined4 recovered_10012aa0(int reg_ecx,uint reg_edx,uint *param_3,uint param_4);
undefined4 recovered_10012b50(char *reg_ecx,char *reg_edx);
undefined4 recovered_10012e80(int reg_ecx,char *reg_edx);
void recovered_10012f20(char *reg_ecx,uint reg_edx,char *param_3);
void recovered_10012fa0(char *reg_ecx,uint reg_edx,uint param_3);
void recovered_10013090(char *reg_ecx,undefined1 *reg_edx,uint param_3);
uint recovered_10013170(int reg_ecx,char *reg_edx,undefined4 *param_3);
undefined4 recovered_10013260(int reg_ecx,char *reg_edx);
undefined4 recovered_100132f0(void);
undefined4 recovered_100135d0(int reg_ecx);
void recovered_10013730(int reg_edx,uint param_2,undefined1 *param_3);
void recovered_10013950(char *reg_ecx,byte *reg_edx);
bool recovered_10014360(byte *reg_ecx,int *reg_edx);
undefined4 recovered_100147d0(byte *reg_ecx,undefined1 *reg_edx);
char * recovered_10014ac0(char *text);
undefined4 recovered_10014bb0(int reg_ecx,int reg_edx);
undefined4 recovered_10014c20(byte *reg_ecx,char *reg_edx);
bool recovered_10014cc0(byte *reg_ecx);
undefined4 recovered_100151c0(char *reg_ecx,int reg_edx);
undefined4 recovered_100152a0(uint *reg_ecx,uint *reg_edx,uint *param_3);
void recovered_10015490(char *reg_ecx,char *reg_edx);
char * recovered_10015650(char *reg_ecx);
undefined4 recovered_100156d0(int reg_ecx);
uint recovered_10015830(void);
undefined4 recovered_10015950(undefined1 *reg_ecx,undefined1 *reg_edx);
void recovered_10015a20(int reg_ecx,uint reg_edx,char param_3);
int recovered_10015d70(char *reg_ecx);
uint recovered_10015ee0(void);
void recovered_10016000(void);
void recovered_10016180(void *reg_ecx);
undefined4 recovered_10016520(int reg_ecx,int *reg_edx);
void recovered_100169d0(undefined4 *reg_ecx);
undefined4 recovered_10016a90(void);
undefined4 recovered_10016c90(void *reg_ecx,int *reg_edx,undefined4 *param_3,uint *param_4);
undefined4 recovered_100174a0(undefined4 *reg_ecx,char *reg_edx,uint *param_3);
undefined4 recovered_10017630(void);
bool recovered_10017690(int reg_ecx,uint reg_edx);
void recovered_100177c0(undefined4 *reg_ecx,uint reg_edx);
undefined4 recovered_10017ad0(uint reg_ecx,undefined4 *reg_edx,int param_3,int param_4,char param_5);
undefined4 recovered_100188d0(void);
uint recovered_1001a1e0(char *reg_ecx,char *reg_edx);
void recovered_1001a230(void);
void recovered_1001a880(void);
void recovered_1001aa70(void);
void recovered_1001b1d0(char *reg_ecx);
void recovered_1001c370(void);
void recovered_1001c530(void);
void recovered_1001c670(void);
void recovered_1001cc10(void);
void recovered_1001cd80(void);
void recovered_1001d4d0(void);
void recovered_1001d5f0(uint reg_ecx,uint reg_edx,uint param_3,uint param_4,undefined4 param_5);
void recovered_1001d7e0(int *reg_ecx,int param_2,uint param_3,uint param_4);
void recovered_1001d980(int reg_ecx,int reg_edx,int param_3,int param_4,uint param_5);
void recovered_1001dcc0(int param_1,char *param_2,undefined4 param_3);
undefined4 * recovered_1001de40(char *reg_ecx,char *reg_edx);
void recovered_1001e730(uint reg_ecx,uint reg_edx,uint param_3,byte param_4);
uint recovered_1001e920(uint reg_ecx,uint reg_edx,int param_3,int param_4,uint3 param_5,byte param_6
                       );
void recovered_1001eb50(int reg_ecx,int reg_edx,char *param_3,uint param_4,uint param_5,uint param_6
                       );
undefined4
recovered_1001edf0(byte *reg_ecx,uint reg_edx,uint param_3,undefined4 param_4,undefined4 *param_5);
uint recovered_1001f330(int *param_1);
byte recovered_1001f4c0(int reg_ecx);
undefined4 * recovered_1001f5f0(char *reg_ecx,int reg_edx,char param_3);
undefined4 recovered_1001fea0(byte *reg_ecx);
char * recovered_10020090(int reg_ecx,char *reg_edx,char *param_3);
int * recovered_100203a0(undefined1 *reg_ecx,int reg_edx);
void recovered_100204b0(char *reg_ecx,char *reg_edx,char *param_3);
void recovered_10020600(undefined4 *reg_ecx,int reg_edx);
void recovered_10020ae0(uint param_1,uint param_2,byte param_3);
void recovered_10020d20(int reg_ecx,int reg_edx,uint param_3,uint param_4,void *param_5,char param_6
                       );
void recovered_10021010(int reg_ecx,int reg_edx,int param_3,int param_4,uint3 param_5,int param_6);
void recovered_10021430(int reg_ecx);
void recovered_10022460(int reg_ecx,int reg_edx,uint param_3,uint param_4,uint3 param_5);
int recovered_10022b30(int reg_ecx,int reg_edx,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10022c10(int reg_ecx,int reg_edx,uint param_3,uint param_4,int param_5,uint param_6);
undefined4
recovered_10023fb0(int reg_ecx,int reg_edx,int param_3,int param_4,int *param_5,int *param_6,
                  int param_7);
uint recovered_10024340(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,uint param_6);
uint recovered_10024460(int *reg_ecx,uint reg_edx,uint param_3);
void recovered_10024800(int reg_ecx,int reg_edx,int param_3,uint param_4,uint param_5,
                       undefined1 *param_6);
void recovered_100249e0(int reg_ecx);
void recovered_10025370(int reg_ecx);
uint recovered_10028ac0(char *reg_edx,int param_2,undefined1 *param_3,uint param_4);
void recovered_10028cb0(uint *reg_ecx,int reg_edx,int param_3);
void recovered_10028e50(int reg_ecx,int reg_edx,int param_3,char param_4,char param_5);
void recovered_100295e0(int *reg_ecx);
int * recovered_100299b0(int reg_ecx,int reg_edx,int param_3,int param_4);
void recovered_10029d40(int *reg_ecx,int reg_edx,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9,char param_10,char param_11);
void recovered_10029ef0(int param_1,int param_2,int param_3,char param_4);
uint recovered_1002a160(byte *reg_ecx,ushort *reg_edx,uint param_3,byte param_4,char param_5);
void recovered_1002a320(uint reg_ecx,uint reg_edx,uint param_3,uint param_4);
uint recovered_1002a670(char *reg_ecx,uint reg_edx);
void recovered_1002a9d0(char *reg_ecx,char *reg_edx,char *param_3,char *param_4,uint param_5);
void recovered_1002ab50(uint reg_ecx,uint reg_edx,char *param_3,uint param_4);
void recovered_1002adc0(int param_1,int param_2,char *param_3,char param_4);
void recovered_1002af10(uint reg_ecx,char *reg_edx,char *param_3,char *param_4);
void recovered_1002afe0(char *reg_ecx,uint reg_edx,uint param_3,uint param_4);
void recovered_1002b130(char *reg_ecx,char *reg_edx,int param_3);
void recovered_1002b270(int reg_ecx);
void recovered_1002bb10(int *reg_ecx,int reg_edx);
void recovered_1002bb90(int *reg_ecx,int reg_edx);
void recovered_1002bda0(int reg_edx,int param_2,int param_3,int param_4,int param_5,char param_6);
void recovered_1002c0c0(void);
void recovered_1002c1b0(undefined4 *reg_ecx,int reg_edx,int param_3,int param_4);
int recovered_1002c400(int *reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5);
void recovered_1002cb90(int *reg_ecx,int reg_edx,int param_3,uint param_4,uint param_5,char param_6,
                       int param_7,int param_8,int param_9,int param_10);
void recovered_1002d120(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,
                       undefined4 param_6,undefined4 param_7,char param_8);
void recovered_1002d420(undefined4 *reg_ecx);
void recovered_1002d4b0(int reg_ecx);
void recovered_1002de00(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,int param_6,
                       int param_7);
void recovered_1002e640(int param_1,char *param_2,undefined4 param_3);
void recovered_1002e7a0(int reg_ecx,undefined4 reg_edx,int *param_3);
void recovered_1002ea70(char *reg_ecx,int reg_edx,int param_3,uint param_4,uint param_5);
undefined4 recovered_1002f060(void);
undefined4 recovered_1002f190(int reg_ecx);
undefined4 recovered_1002f380(int reg_ecx,uint *reg_edx,int *param_3);
void recovered_1002f750(uint reg_ecx,uint reg_edx,uint param_3,undefined *param_4,undefined4 param_5
                       );
void recovered_1002fa20(int *param_1,uint param_2,uint param_3);
void recovered_1002fdd0(int *param_1,uint param_2,uint param_3);
void recovered_1002fe90(int *param_1,uint param_2,uint param_3);
undefined4 recovered_10030240(uint reg_ecx);
undefined4 recovered_100304c0(int reg_ecx,char *reg_edx);
void recovered_10030680(int reg_ecx);
int recovered_100307a0(uint reg_ecx,int reg_edx,undefined4 param_3,char *param_4,char *param_5);
void recovered_10030a30(int reg_ecx);
int recovered_10030ab0(undefined4 *reg_ecx);
bool recovered_10030dc0(char *reg_ecx);
void recovered_100312d0(void);
void recovered_100313b0(int reg_ecx);
undefined4 recovered_10031830(void);
void recovered_10031880(int reg_ecx,uint reg_edx);
undefined1
recovered_10032610(char *reg_ecx,int reg_edx,int param_3,uint param_4,uint param_5,
                  undefined1 *param_6,int param_7,int param_8);
undefined4 recovered_100336c0(uint reg_ecx,uint reg_edx);
void recovered_10034030(int reg_ecx);
undefined4 recovered_100340d0(int reg_ecx,int reg_edx);
int recovered_10034190(int reg_ecx,int reg_edx);
uint recovered_10034450(int reg_ecx,int reg_edx);
undefined4 recovered_100344c0(int reg_edx);
void recovered_100345f0(byte *reg_ecx,int reg_edx,byte *param_3);
void recovered_10034d10(int reg_ecx);
void recovered_10034e10(int reg_ecx);
bool recovered_10034ea0(char *reg_ecx,int reg_edx,int param_3);
void recovered_10034f90(int reg_ecx,undefined4 reg_edx,undefined4 param_3);
undefined4 recovered_10035010(int reg_ecx,int reg_edx,int param_3);
int recovered_10035700(int reg_ecx,int reg_edx,int param_3);
void recovered_100357d0(char *reg_ecx);
undefined4 recovered_10035820(int reg_ecx,int reg_edx,int param_3);
int recovered_10035e00(int reg_ecx,int reg_edx,int param_3);
void recovered_10035f00(void);
bool recovered_10035fa0(char *reg_ecx,int reg_edx,undefined1 *param_3);
void recovered_100360a0(char *reg_ecx);
void recovered_10036a90(char *reg_ecx,char param_2);
void recovered_10036c10(int reg_ecx,char *param_2);
char * recovered_10037070(int reg_ecx,int param_2,char *param_3,char param_4);
void recovered_10037840(undefined1 *reg_ecx,int reg_edx);
void recovered_10037a00(uint reg_ecx);
void recovered_10037cb0(void);
void recovered_10038320(int reg_ecx);
void recovered_100383d0(int reg_ecx);
void recovered_100384f0(void);
void recovered_100385c0(void);
void recovered_10038610(int reg_ecx);
void recovered_10038a00(int reg_ecx,uint reg_edx,byte param_3);
void recovered_10038b60(char *reg_ecx,int reg_edx);
void recovered_100390c0(void **reg_ecx,void **reg_edx);
void recovered_100392c0(char *reg_ecx,int reg_edx,undefined1 param_3);
void recovered_100394e0(undefined1 *reg_ecx,int reg_edx);
void recovered_10039640(int reg_ecx);
void recovered_10039750(void);
void recovered_100398a0(char *reg_ecx,int reg_edx);
void recovered_10039b50(int reg_ecx,undefined4 reg_edx);
undefined4 recovered_10039fb0(int reg_ecx,char *reg_edx);
void recovered_1003a040(int reg_ecx);
void recovered_1003a350(int reg_ecx,int reg_edx,uint param_3);
void recovered_1003a900(int reg_ecx,undefined4 reg_edx,char *param_3,undefined4 param_4);
void recovered_1003aa40(int reg_ecx);
void recovered_1003aaa0(int reg_ecx);
void recovered_1003ac10(int reg_ecx);
undefined4 recovered_1003af10(void);
void recovered_1003af90(int reg_ecx,undefined4 reg_edx,undefined4 param_3,byte *param_4,
                       byte *param_5,int param_6,char param_7);
uint recovered_1003b190(int reg_ecx);
bool recovered_1003b320(char *reg_ecx,uint reg_edx,char *param_3);
void recovered_1003b4c0(char *reg_ecx,undefined4 reg_edx);
uint recovered_1003b700(byte *reg_ecx);
undefined1 * recovered_1003b9e0(char *reg_ecx);
char * recovered_1003bce0(undefined4 reg_ecx,char *reg_edx,byte param_3,int *param_4);
char * recovered_1003cd80(int reg_ecx,uint reg_edx,int *param_3);
undefined4 recovered_1003d4b0(char *reg_ecx,uint reg_edx,uint param_3,int *param_4);
bool recovered_1003d510(char *reg_ecx,uint reg_edx,int param_3,uint param_4,uint *param_5);
char * recovered_1003d840(char *reg_ecx,byte param_2,void *param_3,uint param_4);
int recovered_1003e0e0(int reg_ecx,uint reg_edx,byte param_3);
undefined4 recovered_1003e420(int reg_ecx,uint reg_edx);
undefined4 * recovered_1003e640(undefined4 reg_ecx,void *reg_edx,void *param_3);
undefined4 recovered_1003e730(int *reg_ecx,void *reg_edx,uint param_3);
char * recovered_1003e810(int reg_ecx,char *reg_edx,char param_3);
void recovered_1003ea90(char *reg_ecx,int reg_edx,int param_3,int param_4,int param_5,char param_6);
char * recovered_1003ebc0(char *reg_ecx,int reg_edx,uint param_3,byte param_4);
void recovered_1003f000(int reg_ecx);
uint recovered_1003f0d0(int reg_ecx,uint *reg_edx,uint *param_3);
undefined4 recovered_1003f3f0(char *reg_ecx,char *reg_edx,uint param_3,char *param_4,byte param_5);
void recovered_1003f6e0(void);
undefined1 recovered_1003f730(int reg_ecx,int reg_edx,char *param_3);
undefined4 recovered_1003f940(int reg_ecx,char *reg_edx);
bool recovered_1003f9e0(uint reg_ecx,char *reg_edx,uint param_3,char *param_4,uint param_5);
bool recovered_1003fd60(undefined1 *reg_ecx,undefined1 *reg_edx);
bool recovered_1003fe10(int reg_ecx,char *reg_edx);
undefined4 recovered_10040340(char *reg_ecx,char *reg_edx);
void recovered_10040480(void);
undefined4
recovered_100405b0(int *reg_ecx,uint *reg_edx,uint *param_3,undefined4 param_4,char *param_5);
undefined4 recovered_100407c0(int reg_ecx,int *reg_edx);
void recovered_100409a0(undefined4 reg_ecx,undefined4 reg_edx);
void recovered_10040b30(undefined4 reg_ecx,undefined4 reg_edx);
void recovered_10040c00(int reg_ecx,undefined4 reg_edx,undefined4 param_3);
void recovered_10040e50(byte *reg_ecx,byte *reg_edx);
bool recovered_100412b0(byte *reg_ecx);
bool recovered_100413d0(char *param_1);
int recovered_10041680(int reg_ecx,int reg_edx,int param_3);
void recovered_100417f0(int reg_ecx,uint reg_edx);
void recovered_10041960(int reg_ecx,uint reg_edx);
uint recovered_10041bc0(int reg_ecx,int reg_edx,int param_3);
int recovered_10042000(int reg_ecx,int reg_edx);
void recovered_100422b0(uint reg_ecx,int reg_edx,int param_3);
int recovered_10042320(int reg_ecx,int reg_edx);
void recovered_10042470(int reg_ecx,uint reg_edx,uint param_3,uint param_4);
void recovered_10042660(char *reg_ecx,uint reg_edx);
void recovered_10042ab0(char *reg_ecx);
void recovered_10042f00(int reg_ecx,uint reg_edx,undefined4 param_3,undefined4 param_4);
void recovered_100433a0(int reg_ecx,char *reg_edx,char *param_3);
undefined4 recovered_10043580(void);
undefined4
recovered_10043840(uint reg_ecx,uint reg_edx,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong *param_7);
undefined4
recovered_10043a40(uint reg_edx,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7,int param_8,uint param_9,uint param_10,int param_11,int param_12,
                  uint param_13);
void recovered_100454a0(int reg_ecx,int reg_edx,int param_3,int param_4);
void recovered_10045610(int reg_ecx,int reg_edx,int param_3,int param_4);
bool recovered_10045790(int reg_ecx,int reg_edx,int param_3,int param_4);
void recovered_10045930(int *reg_ecx,int reg_edx,int param_3,int param_4,int param_5,int param_6);
void recovered_10045c50(uint *reg_ecx);
uint recovered_10045f30(void);
undefined4 * recovered_10046250(undefined4 *reg_ecx);
void recovered_10046670(int reg_ecx);
void recovered_10046720(int reg_ecx,int param_2,int param_3,int param_4,int param_5);
void recovered_100468a0(int reg_ecx,uint reg_edx,int param_3,int param_4,int param_5);
void recovered_100469a0(int *param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
