/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
#include <permafrost/terror_ui.h>
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
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
long long __divdi3(long long a,long long b);
unsigned long long __udivdi3(unsigned long long a,unsigned long long b);
unsigned long long __umoddi3(unsigned long long a,unsigned long long b);
int __divsi3(int a,int b);
unsigned int __udivsi3(unsigned int a,unsigned int b);
long long __fixdfdi(double value);
unsigned long long __fixunsdfdi(double value);
double __floatdidf(long long value);
double __floatundidf(unsigned long long value);
int winter_tls_client_handshake(void *context,char *error,ulong capacity);
void winter_tls_client_init(void *context,void *io,char *hostname);
int winter_tls_read(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity);
int winter_tls_write(void *context,void *data,ulong size,char *error,ulong capacity);
static inline unsigned char pf_app_scrollbar_capture(void *snapshot,void *window,int a,int b,int c,int d){TerrorUIRect r={a,b,c,d};return terror_ui_scrollbar_capture(snapshot,window,r);}
static inline unsigned int pf_app_window_present_rect(void *window,int a,int b,int c,int d){TerrorUIRect r={a,b,c,d};return terror_ui_window_present_rect(window,r);}
void __bzero(void *p,unsigned long size);
void * memchr(const void *p,int c,unsigned long size);
char * strcpy(char *dst,const char *src);
unsigned long strcspn(const char *src,const char *reject);
#define UINT_280800 (*(uint32_t *)(uintptr_t)0x280800U)
#define UINT_280804 (*(uint32_t *)(uintptr_t)0x280804U)
#define UINT_280808 (*(uint32_t *)(uintptr_t)0x280808U)
#define UINT_28080c (*(uint32_t *)(uintptr_t)0x28080cU)
#define UINT_280810 (*(uint32_t *)(uintptr_t)0x280810U)
#define UINT_280814 (*(uint32_t *)(uintptr_t)0x280814U)
#define UINT_280818 (*(uint32_t *)(uintptr_t)0x280818U)
#define UINT_28081c (*(uint32_t *)(uintptr_t)0x28081cU)
#define UINT_280820 (*(uint32_t *)(uintptr_t)0x280820U)
#define UINT_280824 (*(uint32_t *)(uintptr_t)0x280824U)
#define UINT_280828 (*(uint32_t *)(uintptr_t)0x280828U)
#define UINT_28082c (*(uint32_t *)(uintptr_t)0x28082cU)
#define UINT_280830 (*(uint32_t *)(uintptr_t)0x280830U)
#define UINT_280834 (*(uint32_t *)(uintptr_t)0x280834U)
#define UINT_280838 (*(uint32_t *)(uintptr_t)0x280838U)
#define UINT_28083c (*(uint32_t *)(uintptr_t)0x28083cU)
#define UINT_280840 (*(uint32_t *)(uintptr_t)0x280840U)
#define UINT_280844 (*(uint32_t *)(uintptr_t)0x280844U)
#define UINT_280848 (*(uint32_t *)(uintptr_t)0x280848U)
#define UINT_28084c (*(uint32_t *)(uintptr_t)0x28084cU)
#define UINT_280850 (*(uint32_t *)(uintptr_t)0x280850U)
#define UINT_280854 (*(uint32_t *)(uintptr_t)0x280854U)
#define UINT_280858 (*(uint32_t *)(uintptr_t)0x280858U)
#define UINT_28085c (*(uint32_t *)(uintptr_t)0x28085cU)
#define UINT_280860 (*(uint32_t *)(uintptr_t)0x280860U)
#define UINT_280864 (*(uint32_t *)(uintptr_t)0x280864U)
#define UINT_280868 (*(uint32_t *)(uintptr_t)0x280868U)
#define UINT_28086c (*(uint32_t *)(uintptr_t)0x28086cU)
#define UINT_280870 (*(uint32_t *)(uintptr_t)0x280870U)
#define UINT_280874 (*(uint32_t *)(uintptr_t)0x280874U)
#define UINT_280878 (*(uint32_t *)(uintptr_t)0x280878U)
#define UINT_28087c (*(uint32_t *)(uintptr_t)0x28087cU)
#define UINT_280880 (*(uint32_t *)(uintptr_t)0x280880U)
#define UINT_280884 (*(uint32_t *)(uintptr_t)0x280884U)
#define UINT_280888 (*(uint32_t *)(uintptr_t)0x280888U)
#define UINT_28088c (*(uint32_t *)(uintptr_t)0x28088cU)
#define UINT_280890 (*(uint32_t *)(uintptr_t)0x280890U)
#define UINT_280894 (*(uint32_t *)(uintptr_t)0x280894U)
#define UINT_280898 (*(uint32_t *)(uintptr_t)0x280898U)
#define UINT_28089c (*(uint32_t *)(uintptr_t)0x28089cU)
#define UINT_2808a0 (*(uint32_t *)(uintptr_t)0x2808a0U)
#define UINT_2808a4 (*(uint32_t *)(uintptr_t)0x2808a4U)
#define UINT_2808a8 (*(uint32_t *)(uintptr_t)0x2808a8U)
#define UINT_2808ac (*(uint32_t *)(uintptr_t)0x2808acU)
#define UINT_2808b0 (*(uint32_t *)(uintptr_t)0x2808b0U)
#define UINT_2808b4 (*(uint32_t *)(uintptr_t)0x2808b4U)
#define UINT_2808b8 (*(uint32_t *)(uintptr_t)0x2808b8U)
#define UINT_2808bc (*(uint32_t *)(uintptr_t)0x2808bcU)
#define UINT_2808c0 (*(uint32_t *)(uintptr_t)0x2808c0U)
#define UINT_2808c4 (*(uint32_t *)(uintptr_t)0x2808c4U)
#define UINT_2808c8 (*(uint32_t *)(uintptr_t)0x2808c8U)
#define UINT_2808cc (*(uint32_t *)(uintptr_t)0x2808ccU)
#define UINT_2808d0 (*(uint32_t *)(uintptr_t)0x2808d0U)
#define UINT_2808d4 (*(uint32_t *)(uintptr_t)0x2808d4U)
#define UINT_2808d8 (*(uint32_t *)(uintptr_t)0x2808d8U)
#define UINT_2808dc (*(uint32_t *)(uintptr_t)0x2808dcU)
#define UINT_2808e0 (*(uint32_t *)(uintptr_t)0x2808e0U)
#define UINT_2808e4 (*(uint32_t *)(uintptr_t)0x2808e4U)
#define UINT_2808e8 (*(uint32_t *)(uintptr_t)0x2808e8U)
#define UINT_2808ec (*(uint32_t *)(uintptr_t)0x2808ecU)
#define UINT_2808f0 (*(uint32_t *)(uintptr_t)0x2808f0U)
#define UINT_2808f4 (*(uint32_t *)(uintptr_t)0x2808f4U)
#define UINT_2808f8 (*(uint32_t *)(uintptr_t)0x2808f8U)
#define UINT_2808fc (*(uint32_t *)(uintptr_t)0x2808fcU)
#define UINT_280900 (*(uint32_t *)(uintptr_t)0x280900U)
#define UINT_280904 (*(uint32_t *)(uintptr_t)0x280904U)
#define UINT_280908 (*(uint32_t *)(uintptr_t)0x280908U)
#define UINT_28090c (*(uint32_t *)(uintptr_t)0x28090cU)
#define UINT_280910 (*(uint32_t *)(uintptr_t)0x280910U)
#define UINT_280914 (*(uint32_t *)(uintptr_t)0x280914U)
#define UINT_280918 (*(uint32_t *)(uintptr_t)0x280918U)
#define UINT_28091c (*(uint32_t *)(uintptr_t)0x28091cU)
#define UINT_280920 (*(uint32_t *)(uintptr_t)0x280920U)
#define UINT_280924 (*(uint32_t *)(uintptr_t)0x280924U)
#define UINT_280928 (*(uint32_t *)(uintptr_t)0x280928U)
#define UINT_28092c (*(uint32_t *)(uintptr_t)0x28092cU)
#define UINT_280930 (*(uint32_t *)(uintptr_t)0x280930U)
#define UINT_280934 (*(uint32_t *)(uintptr_t)0x280934U)
#define UINT_280938 (*(uint32_t *)(uintptr_t)0x280938U)
#define UINT_28093c (*(uint32_t *)(uintptr_t)0x28093cU)
#define UINT_280940 (*(uint32_t *)(uintptr_t)0x280940U)
#define UINT_280944 (*(uint32_t *)(uintptr_t)0x280944U)
#define UINT_280948 (*(uint32_t *)(uintptr_t)0x280948U)
#define UINT_28094c (*(uint32_t *)(uintptr_t)0x28094cU)
#define UINT_280950 (*(uint32_t *)(uintptr_t)0x280950U)
#define UINT_280954 (*(uint32_t *)(uintptr_t)0x280954U)
#define UINT_280958 (*(uint32_t *)(uintptr_t)0x280958U)
#define UINT_28095c (*(uint32_t *)(uintptr_t)0x28095cU)
#define UINT_280960 (*(uint32_t *)(uintptr_t)0x280960U)
#define UINT_280964 (*(uint32_t *)(uintptr_t)0x280964U)
#define UINT_280968 (*(uint32_t *)(uintptr_t)0x280968U)
#define UINT_28096c (*(uint32_t *)(uintptr_t)0x28096cU)
#define UINT_280970 (*(uint32_t *)(uintptr_t)0x280970U)
#define UINT_280974 (*(uint32_t *)(uintptr_t)0x280974U)
#define UINT_280978 (*(uint32_t *)(uintptr_t)0x280978U)
#define UINT_28097c (*(uint32_t *)(uintptr_t)0x28097cU)
#define UINT_280980 (*(uint32_t *)(uintptr_t)0x280980U)
#define UINT_280984 (*(uint32_t *)(uintptr_t)0x280984U)
#define UINT_280988 (*(uint32_t *)(uintptr_t)0x280988U)
#define UINT_28098c (*(uint32_t *)(uintptr_t)0x28098cU)
#define UINT_280990 (*(uint32_t *)(uintptr_t)0x280990U)
#define UINT_280994 (*(uint32_t *)(uintptr_t)0x280994U)
#define UINT_280998 (*(uint32_t *)(uintptr_t)0x280998U)
#define UINT_28099c (*(uint32_t *)(uintptr_t)0x28099cU)
#define UINT_2809a0 (*(uint32_t *)(uintptr_t)0x2809a0U)
#define UINT_2809a4 (*(uint32_t *)(uintptr_t)0x2809a4U)
#define UINT_2809a8 (*(uint32_t *)(uintptr_t)0x2809a8U)
#define UINT_2809ac (*(uint32_t *)(uintptr_t)0x2809acU)
#define UINT_2809b0 (*(uint32_t *)(uintptr_t)0x2809b0U)
#define UINT_2809b4 (*(uint32_t *)(uintptr_t)0x2809b4U)
#define UINT_2809b8 (*(uint32_t *)(uintptr_t)0x2809b8U)
#define UINT_2809bc (*(uint32_t *)(uintptr_t)0x2809bcU)
#define UINT_2809c0 (*(uint32_t *)(uintptr_t)0x2809c0U)
#define UINT_2809c4 (*(uint32_t *)(uintptr_t)0x2809c4U)
#define UINT_2809c8 (*(uint32_t *)(uintptr_t)0x2809c8U)
#define UINT_2809cc (*(uint32_t *)(uintptr_t)0x2809ccU)
#define UINT_2809d0 (*(uint32_t *)(uintptr_t)0x2809d0U)
#define UINT_2809d4 (*(uint32_t *)(uintptr_t)0x2809d4U)
#define UINT_2809d8 (*(uint32_t *)(uintptr_t)0x2809d8U)
#define UINT_2809dc (*(uint32_t *)(uintptr_t)0x2809dcU)
#define UINT_2809e0 (*(uint32_t *)(uintptr_t)0x2809e0U)
#define UINT_2809e4 (*(uint32_t *)(uintptr_t)0x2809e4U)
#define UINT_2809e8 (*(uint32_t *)(uintptr_t)0x2809e8U)
#define UINT_2809ec (*(uint32_t *)(uintptr_t)0x2809ecU)
#define UINT_2809f0 (*(uint32_t *)(uintptr_t)0x2809f0U)
#define UINT_2809f4 (*(uint32_t *)(uintptr_t)0x2809f4U)
#define UINT_2809f8 (*(uint32_t *)(uintptr_t)0x2809f8U)
#define UINT_2809fc (*(uint32_t *)(uintptr_t)0x2809fcU)
#define UINT_280a00 (*(uint32_t *)(uintptr_t)0x280a00U)
#define UINT_280a04 (*(uint32_t *)(uintptr_t)0x280a04U)
#define UINT_280a08 (*(uint32_t *)(uintptr_t)0x280a08U)
#define UINT_280a0c (*(uint32_t *)(uintptr_t)0x280a0cU)
#define UINT_280a10 (*(uint32_t *)(uintptr_t)0x280a10U)
#define UINT_280a14 (*(uint32_t *)(uintptr_t)0x280a14U)
#define UINT_280a18 (*(uint32_t *)(uintptr_t)0x280a18U)
#define UINT_280a1c (*(uint32_t *)(uintptr_t)0x280a1cU)
#define UINT_280a20 (*(uint32_t *)(uintptr_t)0x280a20U)
#define UINT_280a24 (*(uint32_t *)(uintptr_t)0x280a24U)
#define UINT_280a28 (*(uint32_t *)(uintptr_t)0x280a28U)
#define UINT_280a2c (*(uint32_t *)(uintptr_t)0x280a2cU)
#define UINT_280a30 (*(uint32_t *)(uintptr_t)0x280a30U)
#define UINT_280a34 (*(uint32_t *)(uintptr_t)0x280a34U)
#define UINT_280a38 (*(uint32_t *)(uintptr_t)0x280a38U)
#define UINT_280a3c (*(uint32_t *)(uintptr_t)0x280a3cU)
#define UINT_280a40 (*(uint32_t *)(uintptr_t)0x280a40U)
#define UINT_280a44 (*(uint32_t *)(uintptr_t)0x280a44U)
#define UINT_280a48 (*(uint32_t *)(uintptr_t)0x280a48U)
#define UINT_280a4c (*(uint32_t *)(uintptr_t)0x280a4cU)
#define UINT_280a50 (*(uint32_t *)(uintptr_t)0x280a50U)
#define UINT_280a54 (*(uint32_t *)(uintptr_t)0x280a54U)
#define UINT_280a58 (*(uint32_t *)(uintptr_t)0x280a58U)
#define UINT_280a5c (*(uint32_t *)(uintptr_t)0x280a5cU)
void *memmove(void *,const void *,unsigned long);
#ifndef ABS
#define ABS(value) __builtin_fabs(value)
#endif
#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
extern uint8_t pf_module_state[];
int recovered_100011f0(void);
void * recovered_10008090(void);
void recovered_100080e0(void);
void recovered_10008130(void);
void recovered_10008310(void);
void recovered_1000afa0(void);
void recovered_1000b500(void);
undefined4 recovered_1000b910(void);
int recovered_1000ba70(void);
void recovered_1000bac0(void);
void recovered_1000ddc0(void);
void recovered_1000df50(byte *param_1);
void recovered_1000f1f0(void);
void recovered_1000f840(void);
void recovered_1000f970(void);
void recovered_1000fa20(void);
void recovered_1000faf0(void);
void recovered_1000fc10(void);
void recovered_1000fc90(void);
void recovered_1000fd40(void);
void recovered_1001b5e0(void);
void recovered_1001b690(int param_1);
void recovered_1001b6f0(int param_1,uint param_2);
char * recovered_1001b760(void);
void recovered_1001b800(int param_1,undefined1 *param_2);
bool recovered_1001ba40(void);
void recovered_1001bab0(undefined1 *param_1,uint param_2);
undefined4 recovered_1001bbd0(void);
void recovered_1001bc50(undefined1 *param_1);
void recovered_1001c0c0(void);
uint recovered_1001e030(char *param_1,undefined1 *param_2,uint *param_3,byte *param_4,char *param_5,
                       int param_6);
undefined4 recovered_1001e3b0(undefined *param_1,uint param_2,int param_3);
char * recovered_1001e5f0(void);
void recovered_1001e6a0(int param_1,uint param_2,byte param_3);
uint recovered_1001e8b0(char *param_1,undefined1 *param_2,int param_3,uint *param_4,char *param_5,
                       ulong param_6);
byte recovered_1001ed20(int param_1);
void recovered_1001eef0(void);
byte recovered_1001f100(void);
void recovered_1001f3c0(void);
void recovered_1001fdb0(void);
int recovered_1001ff90(void);
longdouble recovered_100200f0(void);
void recovered_100201b0(void);
void recovered_10020380(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5);
undefined4 recovered_10020880(void);
undefined4
recovered_100208d0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5
                  ,undefined4 param_6);
void recovered_100209a0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4);
void recovered_10020a00(undefined4 *param_1,int param_2);
undefined4 * recovered_10020cd0(undefined4 *param_1,int param_2);
void recovered_10020d70(void);
void recovered_10020db0(undefined4 *param_1,int param_2);
undefined4 * recovered_10020fa0(undefined4 *param_1,int param_2);
undefined4 recovered_100210e0(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4);
undefined4
recovered_100216b0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5
                  ,undefined4 param_6);
undefined4 * recovered_10021750(undefined4 *param_1);
undefined4 * recovered_100217e0(undefined4 *param_1);
void recovered_10021840(undefined1 param_1);
void recovered_100218c0(undefined4 *param_1);
void recovered_100218f0(uint *param_1,uint param_2);
int * recovered_10021a90(int *param_1,int param_2,undefined8 param_3);
uint * recovered_10021c70(uint *param_1,int param_2);
void recovered_10021fe0(int param_1,int param_2,undefined4 param_3,uint param_4);
void recovered_100220c0(char *param_1,undefined4 param_2,undefined4 param_3);
undefined4 *
recovered_10022190(undefined4 *param_1,int param_2,uint param_3,int *param_4,int param_5,
                  int *param_6,int param_7,int param_8);
void recovered_10022960(void);
int * recovered_10022c40(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                        int *param_6,int param_7,uint param_8);
void recovered_10022e50(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
undefined4 *
recovered_10023050(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,uint param_7);
undefined4 *
recovered_100233f0(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
uint * recovered_10024190(uint *param_1,int param_2,uint param_3,int *param_4,uint param_5,
                         uint *param_6,uint param_7,uint param_8);
undefined4 *
recovered_10025360(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,uint *param_6,uint param_7);
void recovered_10025980(void);
undefined4 * recovered_10025db0(undefined4 *param_1,int param_2);
void recovered_10026180(void);
void recovered_10026400(void);
void recovered_10026910(void);
void recovered_10026f00(void);
void recovered_10028160(void);
void recovered_100284e0(void);
void recovered_100287e0(void);
void recovered_10028a30(void);
void recovered_10028cf0(void);
void recovered_10028e50(void);
void recovered_100290e0(uint param_1,int *param_2,undefined4 param_3);
void recovered_10029cd0(void);
void recovered_1002aa10(void);
void recovered_1002af00(void);
void recovered_1002afc0(void);
void recovered_1002b890(void);
uint * recovered_1002c100(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 *
recovered_1002c200(uint param_1,uint param_2,uint *param_3,int param_4,uint param_5,uint *param_6,
                  int param_7);
uint * recovered_1002cd80(char param_1);
uint * recovered_1002cec0(void);
void recovered_1002cf30(int param_1,undefined8 param_2,int param_3);
void recovered_1002d310(char *param_1,char *param_2);
uint * recovered_1002d630(double param_1);
void recovered_1002e100(int param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,
                       int param_6,int *param_7,uint param_8,char param_9);
undefined4 * recovered_1002e9d0(int param_1,uint param_2,int *param_3);
void recovered_1002fb60(char *param_1);
void recovered_1002fbf0(int param_1,uint param_2,int param_3,int param_4,int *param_5,uint param_6);
void recovered_1002ff20(int param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,
                       uint param_6,int *param_7,undefined4 param_8);
void recovered_100304a0(int param_1,int param_2,int param_3);
int * recovered_10030740(uint param_1,int param_2,int param_3,int *param_4,uint param_5);
void recovered_10031100(undefined1 *param_1,char param_2);
void recovered_10031250(int *param_1,char *param_2);
void recovered_100312d0(int param_1,char *param_2,uint *param_3);
void recovered_10031390(int param_1);
undefined4 recovered_10031450(void);
undefined4 *
recovered_10031500(uint param_1,int *param_2,undefined4 param_3,int param_4,uint param_5,int param_6
                  ,int param_7);
uint recovered_100318b0(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,int param_7,int *param_8,int param_9,
                       byte param_10);
uint recovered_10031f60(int param_1,int *param_2);
uint recovered_100322e0(uint param_1,int *param_2,undefined4 param_3,byte param_4);
uint recovered_10032860(int *param_1,int *param_2,byte param_3);
int recovered_10033340(int param_1,int *param_2,undefined4 param_3);
undefined4 recovered_10033ba0(void);
uint recovered_10033c00(int param_1);
uint recovered_10033e90(void);
uint recovered_10033f40(void);
void recovered_10034000(byte *param_1);
void recovered_10034360(int *param_1,int param_2);
uint recovered_10034520(int param_1,int *param_2,undefined4 param_3);
bool recovered_10034590(int param_1,double param_2,int param_3,double param_4);
undefined4 recovered_10034720(int param_1,int *param_2,undefined4 param_3);
undefined4 recovered_10034b60(void);
undefined4 * recovered_10034c60(int param_1,int *param_2,undefined4 param_3,uint *param_4);
uint recovered_100355f0(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,char param_5
                       );
int recovered_10035bb0(void);
undefined4 recovered_10035c00(void);
int * recovered_10035ca0(void);
void recovered_10035d20(int *param_1);
bool recovered_10035ed0(void);
int * recovered_10035f30(void);
undefined4 * recovered_100360d0(char param_1);
void recovered_10036170(int *param_1,int *param_2,int *param_3,uint param_4);
void recovered_100365e0(char *param_1,undefined1 param_2);
int * recovered_10036670(int param_1,int *param_2,int param_3,uint param_4);
uint recovered_10036b70(int param_1,int *param_2,undefined4 param_3);
bool recovered_10036c70(int param_1,int param_2);
undefined4 recovered_10036e60(double param_1);
longdouble recovered_10036f30(int param_1,undefined4 param_2,undefined4 param_3);
longdouble recovered_100374b0(double param_1);
uint recovered_10037580(undefined8 param_1,undefined8 param_2);
longdouble recovered_10037810(double param_1);
undefined4 recovered_100378d0(void);
longdouble recovered_10037950(void);
undefined4 recovered_10037f70(void);
undefined8 recovered_10038070(void);
void recovered_10038290(void);
undefined8 recovered_100382e0(uint param_1,int *param_2,undefined4 param_3);
undefined4 recovered_10038410(int param_1,int *param_2);
longdouble recovered_10038570(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100385c0(int param_1,undefined8 param_2,byte param_3);
void recovered_10038720(undefined4 param_1,int param_2,undefined1 param_3,undefined1 param_4);
void recovered_10038800(void);
void recovered_1003cd80(undefined4 param_1);
void recovered_1003ce20(int param_1,int param_2);
void recovered_1003d230(int param_1,int *param_2,int param_3);
void recovered_1003d5f0(int param_1,int param_2);
byte recovered_1003d760(undefined4 *param_1);
void recovered_1003d860(undefined4 *param_1,int param_2);
uint recovered_1003da60(void);
void recovered_1003dab0(void);
undefined4 * recovered_1003dcb0(int *param_1,char *param_2);
void recovered_1003e0d0(int *param_1,char *param_2);
undefined4 *
recovered_100406d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void recovered_10040a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,char param_6);
void recovered_10040a90(int param_1);
void recovered_10040b70(char *param_1,uint param_2,int *param_3,undefined4 param_4,byte param_5);
uint * recovered_10041670(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100416f0(int *param_1,uint *param_2,uint param_3,int *param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                       char param_10);
void recovered_100417f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100418e0(int param_1);
void recovered_10041ae0(int param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
                       uint param_6,int *param_7,int param_8,uint param_9,byte param_10,int param_11
                       ,undefined4 param_12,undefined4 param_13);
void recovered_10041c90(void);
int recovered_10041cc0(void);
void recovered_10041d50(int *param_1,char *param_2,uint param_3,int *param_4,undefined4 param_5);
void recovered_10041f80(int param_1,int *param_2,int param_3);
void recovered_10042130(uint param_1,int *param_2,undefined4 param_3);
void recovered_10042530(int param_1,uint *param_2,int param_3,int *param_4,undefined4 param_5);
void recovered_10042600(undefined1 *param_1,byte param_2,undefined1 param_3);
uint recovered_10042780(uint param_1,int *param_2,uint param_3,char param_4);
uint recovered_10042920(int *param_1);
void recovered_10042fe0(int param_1,undefined4 param_2,uint param_3,int *param_4,int param_5,
                       uint param_6,int *param_7,int param_8,undefined4 param_9,char param_10,
                       int param_11,undefined4 param_12,undefined4 param_13);
int * recovered_10043190(void);
bool recovered_10043280(int param_1,double param_2,int param_3,double param_4);
void recovered_100435a0(int param_1,undefined4 param_2,undefined4 param_3,byte param_4);
int * recovered_100436f0(int *param_1,byte param_2,undefined1 param_3);
void recovered_10043920(int param_1,undefined4 param_2);
void recovered_10043a30(uint *param_1);
void recovered_10043b90(uint *param_1);
undefined4 * recovered_10043ca0(int param_1,int param_2);
void recovered_10044190(int param_1,uint param_2,uint *param_3);
void recovered_10044a90(undefined4 param_1,uint param_2,int *param_3,undefined4 param_4);
undefined4 recovered_10044cd0(void);
int recovered_10044d30(int param_1,byte param_2);
void recovered_10044f00(uint *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                       undefined1 param_6);
undefined4 recovered_10045190(int *param_1,uint param_2,undefined8 param_3,undefined4 param_4);
undefined4 recovered_100460c0(uint param_1,int *param_2,undefined4 param_3);
undefined4
recovered_100461b0(int param_1,undefined8 param_2,int param_3,uint *param_4,undefined4 param_5);
void recovered_10046330(int param_1,int *param_2,undefined4 param_3,uint *param_4);
void recovered_10046480(uint param_1,undefined4 param_2,undefined4 param_3);
void recovered_100465c0(undefined1 *param_1);
bool recovered_100467d0(void);
undefined4 *
recovered_10046950(uint param_1,int *param_2,undefined4 param_3,int param_4,uint *param_5,
                  int param_6);
void recovered_10046d80(double param_1,double param_2);
longdouble recovered_10047590(ulonglong param_1);
longdouble recovered_100475f0(undefined8 param_1,undefined8 param_2);
longdouble recovered_10047690(double param_1);
undefined8 recovered_100478a0(undefined8 param_1);
longdouble recovered_10047940(double param_1);
void recovered_10047bd0(double param_1,double param_2,double param_3,double param_4);
longdouble recovered_10047c60(double param_1);
longdouble recovered_10047e10(double param_1);
undefined1 recovered_10048010(int param_1,int param_2);
undefined4 * recovered_10048140(undefined4 *param_1,int param_2);
uint * recovered_100482b0(uint *param_1,int param_2);
void recovered_100495b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       undefined4 param_5,undefined4 param_6);
void recovered_100499a0(int param_1);
uint * recovered_100499f0(double param_1);
void recovered_1004aae0(uint *param_1,char param_2);
undefined4 *
recovered_1004b110(uint param_1,int *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
                  undefined4 param_7);
undefined4 *
recovered_1004c420(undefined4 param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,
                  undefined4 param_6,undefined4 param_7);
uint * recovered_1004cbd0(uint *param_1,int param_2);
undefined4 * recovered_1004cf30(uint param_1,int *param_2,int param_3,uint *param_4);
undefined4 * recovered_1004d380(uint param_1,int *param_2,int param_3,uint *param_4);
void recovered_1004d750(uint *param_1,int *param_2,uint param_3);
undefined4 recovered_1004ddc0(uint param_1,int *param_2,undefined4 param_3);
int * recovered_1004df50(uint param_1,int *param_2,int param_3,uint *param_4);
void recovered_1004e160(uint param_1,int *param_2,undefined4 param_3,uint param_4);
undefined4 * recovered_1004e390(uint param_1,int *param_2,undefined4 param_3,uint *param_4);
undefined4 recovered_1004ed40(uint *param_1,uint param_2,int *param_3);
bool recovered_1004ef80(uint *param_1,int *param_2,uint param_3,char param_4);
undefined4 recovered_10050420(void *param_1,undefined4 param_2);
void recovered_100505e0(uint param_1);
undefined4 * recovered_10050710(int *param_1);
int recovered_10050950(void);
void recovered_10051910(void);
undefined4 * recovered_100519a0(undefined4 *param_1,byte param_2);
undefined4 recovered_10051e40(void);
int recovered_10051f80(void);
uint * recovered_10052780(void);
undefined4 recovered_10052960(uint *param_1);
undefined4 * recovered_10052a40(undefined4 *param_1,int param_2);
undefined4 * recovered_100531b0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10053400(undefined4 *param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5,
                  uint *param_6,uint param_7,int param_8);
void recovered_10053c10(void);
void recovered_10054700(void);
void recovered_10054910(void);
void recovered_10054b40(uint param_1);
undefined4 recovered_10054bb0(uint param_1);
void recovered_10054d10(byte *param_1,uint param_2);
void recovered_10055b80(void);
uint * recovered_100561c0(uint param_1,char param_2);
void recovered_10056440(void);
undefined1 * recovered_10056480(void);
byte * recovered_10056bb0(void);
bool recovered_10057be0(void);
int recovered_10057c70(void);
undefined1 * recovered_10057cd0(char param_1);
char * recovered_10057ef0(void);
int recovered_10058ea0(void);
undefined1 * recovered_10059010(void);
undefined1 * recovered_10059440(char param_1);
char recovered_10059640(uint param_1);
undefined1 * recovered_100598d0(byte param_1);
undefined1 * recovered_1005a8f0(void);
void recovered_1005a9f0(void);
byte * recovered_1005aa50(void);
uint recovered_1005bc10(void);
undefined1 * recovered_1005bdd0(void);
char recovered_1005c000(void);
void recovered_1005c0a0(int *param_1,byte param_2);
char recovered_1005c270(void);
void recovered_1005c400(undefined1 *param_1,byte param_2,int param_3);
void recovered_1005c670(byte *param_1,char param_2,uint param_3);
undefined4 * recovered_1005ca40(undefined4 *param_1,int param_2);
undefined4 *
recovered_1005cd30(undefined4 *param_1,int param_2,uint param_3,int *param_4,int param_5,
                  int *param_6,int param_7,int param_8);
undefined4 * recovered_1005d0d0(undefined4 *param_1,int param_2);
undefined4 *
recovered_1005d960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 * recovered_1005db90(undefined4 *param_1,int param_2);
void recovered_1005dde0(undefined4 *param_1,int param_2);
void recovered_1005de50(undefined4 *param_1,int param_2);
int * recovered_1005e140(int *param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6,
                        int param_7,int param_8);
undefined4 *
recovered_1005e4c0(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,uint param_8);
undefined4 * recovered_1005e980(undefined4 *param_1,int param_2);
undefined4 *
recovered_1005ee50(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
undefined4 * recovered_1005f530(undefined4 *param_1,int param_2,int param_3,int param_4);
void recovered_1005f940(uint param_1,double param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5);
uint recovered_1005fca0(uint param_1,uint *param_2,undefined4 param_3);
undefined4 recovered_1005fe90(int param_1,double param_2,uint param_3);
int recovered_10060210(int param_1,double param_2,uint param_3);
undefined4 * recovered_10060550(undefined4 *param_1,int param_2);
uint * recovered_100606e0(void);
undefined4 * recovered_10060790(undefined4 *param_1,int param_2);
undefined4 *
recovered_10060ab0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,int param_8);
void recovered_10060c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
undefined4 * recovered_10060c70(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10061240(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                  undefined4 param_6,undefined4 param_7,int param_8);
undefined4
recovered_10061410(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,
                  undefined4 param_5,int *param_6,int param_7);
int * recovered_100614a0(int *param_1,int param_2);
undefined4 * recovered_100617d0(undefined4 *param_1,int param_2);
void recovered_100623b0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5);
void recovered_10062510(undefined4 *param_1);
undefined4 * recovered_10062550(undefined4 *param_1,int param_2);
longdouble recovered_100632e0(double param_1);
longdouble recovered_10063420(double param_1);
longdouble recovered_100634e0(double param_1);
longdouble recovered_10063740(double param_1,double param_2);
longdouble recovered_10063ae0(double param_1);
longdouble recovered_10063d30(double param_1);
longdouble recovered_100645a0(double param_1);
longdouble recovered_10064720(double param_1,int param_2);
longdouble recovered_100649d0(double param_1);
int * recovered_10064c70(int *param_1,int param_2);
undefined4 * recovered_10065020(undefined4 *param_1,int param_2);
undefined4 * recovered_100658c0(uint param_1,int *param_2);
int * recovered_100662b0(void);
undefined4 *
recovered_100663a0(uint param_1,int *param_2,int param_3,int param_4,int param_5,uint *param_6,
                  undefined4 param_7,int param_8,uint param_9);
uint * recovered_10066c80(void);
int recovered_10067260(void);
void recovered_10067320(int param_1);
bool recovered_10067370(uint param_1,int *param_2,int param_3);
void recovered_10067df0(void);
undefined4 recovered_100680a0(void);
void recovered_10068350(void);
undefined4 * recovered_100683c0(undefined4 *param_1,int param_2);
longdouble recovered_10068ed0(void);
undefined4 *
recovered_100690d0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,uint param_7,int param_8);
undefined4 * recovered_10069560(undefined4 *param_1,int param_2);
void recovered_10069f80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_10069fa0(uint *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                       uint *param_6,uint param_7);
uint * recovered_1006a930(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,undefined4 *param_6,uint param_7);
uint * recovered_1006aff0(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,undefined4 *param_6,uint param_7);
uint * recovered_1006b420(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,int *param_6,int param_7,uint param_8);
undefined4 *
recovered_1006b8f0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5);
undefined4 *
recovered_1006bc80(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5);
uint * recovered_1006bea0(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,undefined4 *param_6,uint param_7);
uint * recovered_1006cbf0(uint *param_1,int param_2,uint param_3,int *param_4,uint param_5,
                         int param_6,uint param_7);
uint * recovered_1006d3d0(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,int *param_6,int param_7,int param_8);
undefined8 recovered_1006d910(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
undefined4 *
recovered_1006da10(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5);
void recovered_1006dd80(uint param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                       int param_6);
undefined4 * recovered_1006ded0(undefined4 *param_1,int param_2);
undefined4 * recovered_1006e400(undefined4 *param_1,int param_2);
undefined4 * recovered_1006e680(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_1006e800(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,uint param_7,uint param_8);
undefined4 * recovered_1006ec10(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_1006eca0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5);
int * recovered_1006ee10(int *param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6,
                        int param_7);
uint * recovered_1006f220(double param_1);
void recovered_1006f590(void);
void recovered_10070540(void);
int * recovered_10070a80(double param_1);
void recovered_10070f10(uint param_1,uint param_2);
undefined4 * recovered_10070f90(undefined4 *param_1,int param_2);
void recovered_100716b0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 *
recovered_10071720(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined4 param_5);
void recovered_10071a10(undefined4 *param_1);
uint * recovered_10071a60(uint *param_1,int param_2,uint param_3,undefined4 param_4,
                         undefined4 param_5,int *param_6,int param_7);
undefined4 recovered_10072700(undefined4 param_1,int param_2);
undefined4 * recovered_10072740(undefined4 *param_1,int param_2);
undefined4 * recovered_10072a00(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10073850(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5
                  ,int *param_6,int param_7,int param_8);
int * recovered_10073930(int *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10073a80(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
undefined4 * recovered_10073c50(uint *param_1,uint param_2,int param_3,uint param_4,char param_5);
uint * recovered_10075970(uint param_1,int *param_2,undefined4 param_3);
int recovered_10076150(uint param_1,int *param_2,undefined4 param_3,char *param_4,int param_5);
undefined4 recovered_100762c0(void);
void recovered_100762d0(uint param_1,int *param_2,undefined4 param_3);
void recovered_10076410(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5);
void recovered_10077920(char *param_1);
undefined4 recovered_10077c10(undefined4 param_1);
void recovered_10077c90(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int param_6);
undefined4 * recovered_10077e20(undefined4 *param_1,int param_2);
undefined4 * recovered_10078160(undefined4 *param_1,int param_2);
void recovered_10078a20(undefined4 *param_1);
void recovered_10078a80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
undefined4 * recovered_10078aa0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 * recovered_10078bd0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 recovered_10078c70(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_10078d50(void);
int recovered_10078d60(uint param_1,int param_2,int param_3,undefined4 param_4);
longdouble recovered_10078ec0(void);
void recovered_10079020(double param_1);
bool recovered_10079260(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4);
bool recovered_10079350(double *param_1);
bool recovered_100794f0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                       undefined4 param_6);
bool recovered_10079620(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
bool recovered_100796c0(int param_1,int param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
                       byte *param_6);
bool recovered_10079820(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                       undefined4 param_5,undefined1 *param_6);
int recovered_10079920(int param_1,int *param_2,int *param_3);
bool recovered_10079cd0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void recovered_10079d70(void);
void recovered_10079f20(undefined4 param_1,char param_2);
int recovered_1007a050(byte *param_1,char param_2);
undefined4 recovered_1007a570(undefined1 *param_1);
uint recovered_1007b010(char *url,void *output,char *error,uint capacity);
bool recovered_1007b490(void);
int recovered_1007b520(void);
void recovered_1007b620(void);
void recovered_1007b670(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_1007b7d0(int *param_1);
void recovered_1007b9d0(byte *param_1,int param_2,undefined4 *param_3);
void recovered_1007d870(int param_1);
undefined8 recovered_1007da30(char param_1);
void recovered_1007dae0(char param_1);
void recovered_1007dd30(int *param_1,int param_2,char param_3);
void recovered_1007de90(int *param_1,int *param_2,int param_3,undefined4 param_4,void *param_5,
                       int param_6,void *param_7,int param_8,undefined4 param_9,undefined4 param_10);
int recovered_1007e330(int param_1);
void recovered_1007e3b0(char *param_1,char *param_2);
undefined4 recovered_1007e520(void);
void recovered_1007e530(void);
void recovered_1007e780(void);
void recovered_1007e980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6);
undefined4 recovered_1007ea50(void);
int recovered_1007eb30(void);
int recovered_1007ecd0(void);
undefined4 recovered_1007ed70(void);
undefined4 *
recovered_1007ed80(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  int *param_6,uint param_7,int param_8);
byte recovered_1007f4d0(undefined4 *param_1);
void recovered_1007f770(undefined4 *param_1,char param_2);
undefined4 recovered_1007fb90(void);
void recovered_1007fdd0(undefined4 *param_1,int param_2,char param_3);
void recovered_1007fec0(int param_1,int param_2);
void recovered_100801b0(int param_1);
undefined4 recovered_10080370(void);
void recovered_10080380(undefined4 param_1,uint param_2,char param_3,char param_4);
undefined4 * recovered_10080560(char param_1);
uint * recovered_100807b0(uint param_1,char param_2,char param_3);
undefined4 * recovered_10080970(void);
void recovered_10080a40(char *param_1);
void recovered_10080ac0(byte *param_1,byte *param_2);
int recovered_10081120(int *param_1,undefined4 param_2,int *param_3);
char * recovered_10081440(int param_1);
undefined4 recovered_100815e0(void);
bool recovered_100816f0(void);
void recovered_100817e0(int param_1);
uint * recovered_10081c10(char param_1);
int * recovered_10081cf0(int *param_1,byte param_2);
void recovered_10081df0(int param_1,int *param_2,int param_3,int *param_4,int param_5,byte param_6);
void recovered_10081f50(int param_1);
void recovered_100820c0(int *param_1,int param_2);
void recovered_10082200(int *param_1,int param_2);
void recovered_10082a60(uint *param_1);
uint recovered_10083200(uint param_1,uint param_2,char *param_3,undefined1 *param_4);
uint * recovered_100835b0(void);
uint * recovered_100839c0(uint param_1,uint param_2);
void recovered_10083ac0(int *param_1,uint *param_2,byte param_3,byte param_4);
void recovered_100844a0(void);
uint recovered_100846e0(int param_1);
undefined4 recovered_10084a70(int param_1);
void recovered_10084c20(uint *param_1);
void recovered_10085500(int *param_1,undefined4 param_2,byte param_3,char param_4);
undefined4 recovered_10085650(void);
int recovered_100856e0(void);
undefined4 recovered_10085760(void);
undefined4
recovered_100857f0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  undefined8 param_7,undefined8 param_8,int param_9);
undefined4 recovered_10086440(uint param_1);
void recovered_100865c0(void);
undefined4 recovered_10086640(void);
undefined4 recovered_100867f0(void);
undefined4 recovered_10087430(byte *param_1,char param_2);
byte * recovered_10087510(char *param_1);
void recovered_10087650(void);
undefined4 recovered_100876b0(void);
bool recovered_100877c0(uint param_1);
undefined4 recovered_10088520(uint param_1);
undefined4 recovered_100886a0(uint param_1);
void recovered_10088760(void);
undefined4 * recovered_100887b0(undefined4 *param_1,int param_2);
undefined4 * recovered_10088a00(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 * recovered_10088b30(undefined4 *param_1,int param_2);
undefined4 *
recovered_10088bd0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,uint param_7,int param_8);
undefined4 * recovered_10088f10(undefined4 *param_1,int param_2);
undefined4 recovered_100899e0(int param_1,int *param_2,int *param_3,undefined4 *param_4);
undefined4 * recovered_10089bf0(uint *param_1);
undefined4 recovered_10089ca0(void);
int * recovered_10089d30(void);
undefined4 recovered_10089da0(uint *param_1);
undefined4 recovered_1008a1d0(void);
bool recovered_1008a2d0(void);
void recovered_1008a7f0(void);
uint recovered_1008a900(void);
undefined4
recovered_1008a950(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5,
                  undefined4 param_6);
undefined4 recovered_1008aa50(undefined4 param_1,int *param_2,int *param_3,char *param_4);
undefined4 * recovered_1008ab90(undefined4 *param_1,int param_2);
undefined4 * recovered_1008b070(undefined4 *param_1,int param_2);
undefined4 * recovered_1008b170(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_1008b2d0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5
                  ,undefined4 *param_6,int param_7,int param_8);
undefined4 * recovered_1008b3e0(undefined4 *param_1,int param_2,int param_3,int param_4);
int * recovered_1008b580(undefined1 param_1,undefined1 param_2,undefined1 param_3);
longdouble recovered_1008b7f0(void);
undefined4 * recovered_1008b8c0(undefined4 *param_1,int param_2);
undefined4 *
recovered_1008bfc0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,uint param_8);
undefined4 recovered_1008ca20(int param_1,int param_2);
uint * recovered_1008cb40(int param_1,undefined4 param_2,undefined4 param_3);
bool recovered_1008cc80(uint *param_1,char param_2);
void recovered_1008cec0(uint param_1);
uint * recovered_1008cfd0(void);
undefined4 *
recovered_1008d420(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 * recovered_1008da30(undefined4 *param_1,int param_2);
undefined4 * recovered_1008dad0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_1008dd10(undefined4 *param_1,int param_2,uint param_3,int *param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 *
recovered_1008df20(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  int *param_6,uint param_7,uint param_8);
void recovered_1008eab0(int *param_1);
undefined4 * recovered_1008ebc0(undefined4 *param_1,int param_2);
undefined4 * recovered_1008f010(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_1008f1b0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7);
undefined4 *
recovered_1008f370(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 *
recovered_1008f6f0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,int param_8);
undefined4 recovered_1008f840(void);
uint recovered_1008f850(undefined4 param_1,undefined1 *param_2,int param_3);
undefined4 recovered_100904b0(byte *param_1);
uint recovered_10090720(char param_1);
uint recovered_10090950(void);
uint recovered_10091f30(void);
bool recovered_10092ab0(undefined1 *param_1,uint param_2);
undefined4 recovered_10092b50(undefined4 *param_1);
undefined4 recovered_10092f10(int param_1,double *param_2);
void recovered_10093440(int *param_1,int param_2,uint param_3,int param_4,int param_5,int *param_6,
                       uint param_7,int param_8);
undefined4 * recovered_10093520(undefined4 *param_1,int param_2);
void recovered_10093710(char *param_1,undefined4 param_2,int param_3,undefined4 param_4);
undefined4 * recovered_100938c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_10093b40(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,int param_8);
undefined4 *
recovered_10093d70(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,int param_8);
undefined4 *
recovered_10094120(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,int param_8);
undefined4 * recovered_10094320(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10094b30(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,int param_7,uint param_8);
uint * recovered_10094e20(uint *param_1,undefined4 param_2,int param_3,int param_4,
                         undefined4 param_5,uint *param_6,uint param_7,int param_8);
uint * recovered_100953d0(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                         uint *param_6,uint param_7,uint param_8);
undefined4 *
recovered_10095800(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
undefined4 *
recovered_10095d20(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,int param_8);
int recovered_10095f80(int param_1,int param_2);
uint * recovered_10096120(void);
uint * recovered_100961f0(void);
int recovered_10096450(int param_1,char param_2);
undefined4 recovered_100966c0(int *param_1,int *param_2,int *param_3,char param_4);
void recovered_10096980(int *param_1,int *param_2);
uint recovered_100969d0(void);
bool recovered_10096ad0(uint *param_1,undefined4 param_2,int *param_3,int *param_4);
uint recovered_10096f90(void);
undefined4 recovered_100972d0(void);
undefined4 recovered_100972e0(undefined4 param_1);
undefined4 * recovered_10097320(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10097480(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 *
recovered_10097680(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,uint param_7,int param_8);
undefined4 * recovered_10097ae0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_10097d50(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7);
void recovered_10097dd0(int param_1,int param_2,int *param_3);
uint * recovered_100982b0(void);
void recovered_10098c50(uint *param_1,char param_2);
undefined4 recovered_100991b0(void);
void recovered_100991c0(char *param_1);
void recovered_100992e0(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4);
undefined4 recovered_10099530(undefined4 *param_1,int *param_2);
bool recovered_10099bf0(void);
int recovered_10099cd0(void);
int recovered_10099e90(uint param_1,char param_2);
void recovered_1009a110(void);
void recovered_1009a3a0(uint param_1);
void recovered_1009ad90(int param_1);
void recovered_1009b000(void);
int recovered_1009b0e0(void);
undefined4 recovered_1009b1c0(void);
uint recovered_1009b290(byte *param_1,byte *param_2,int *param_3,uint param_4,int *param_5);
uint recovered_1009cdf0(uint param_1);
int recovered_1009d2a0(uint param_1,int *param_2);
undefined4 recovered_1009d720(byte *param_1,byte *param_2,int *param_3,uint param_4,int *param_5);
undefined4 recovered_1009d9c0(int *param_1,int *param_2);
undefined4 recovered_1009da50(int param_1,int param_2,int param_3,uint param_4,int *param_5);
undefined4 recovered_1009db70(byte *param_1,undefined1 *param_2,uint param_3,uint param_4);
undefined4 recovered_1009e030(byte *param_1,undefined1 *param_2,uint param_3,uint param_4);
uint recovered_1009e600(byte *param_1,undefined1 *param_2,uint *param_3);
bool recovered_1009f3d0(void);
bool recovered_1009f620(undefined1 *param_1,uint param_2);
int recovered_1009fff0(byte *param_1,uint param_2,undefined1 *param_3,int param_4,int *param_5);
int recovered_100a1a90(int param_1);
void recovered_100a1cc0(undefined4 param_1,char param_2);
void recovered_100a22d0(int param_1,uint *param_2);
undefined4 recovered_100a34f0(void);
bool recovered_100a3770(void);
void recovered_100a3d90(int param_1,char *param_2,byte *param_3);
void recovered_100a40c0(int param_1);
uint * recovered_100a4680(double param_1);
void recovered_100a4790(int param_1);
int recovered_100a4c00(int param_1,byte *param_2);
undefined4 recovered_100a4d90(void);
undefined4 recovered_100a4ec0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4);
undefined4 recovered_100a5900(int param_1,int *param_2);
void recovered_100a5e80(undefined4 param_1,undefined4 param_2,int param_3);
uint recovered_100a5f30(void);
void recovered_100a6380(void);
void recovered_100a6410(uint *param_1,uint *param_2,uint *param_3);
undefined4 recovered_100a6890(void);
undefined4 recovered_100a6970(undefined4 param_1);
undefined4 * recovered_100a69b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_100a6b10(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 *
recovered_100a6c30(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,uint param_7,uint param_8);
undefined4 * recovered_100a74c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_100a7570(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 recovered_100a7710(void);
uint recovered_100a7720(int *param_1);
void recovered_100a7870(void);
void recovered_100a78b0(void);
void recovered_100a7c50(int param_1,char *param_2);
undefined4 recovered_100a7db0(undefined4 param_1);
undefined4 * recovered_100a7df0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 recovered_100a8040(void);
bool recovered_100a8050(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 param_6);
bool recovered_100a80e0(int param_1,int *param_2,int *param_3,undefined1 *param_4);
void recovered_100a8250(int param_1,int *param_2);
bool recovered_100a89b0(int param_1,undefined4 param_2,int param_3,uint *param_4,char param_5,
                       undefined4 param_6);
uint * recovered_100a8ae0(byte param_1);
undefined4 *
recovered_100a8e60(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 *
recovered_100a92a0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7);
undefined4 *
recovered_100a92e0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 recovered_100a95f0(undefined4 param_1);
undefined4 * recovered_100a9630(undefined4 *param_1,int param_2);
undefined4 * recovered_100a9b50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_100a9c10(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,uint param_8);
undefined4 * recovered_100a9d20(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_100a9e50(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,
                  undefined4 param_5,undefined4 *param_6,int param_7,int param_8);
undefined4 * recovered_100aa050(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * recovered_100aa260(undefined4 *param_1,int param_2,int param_3,int param_4);
void recovered_100aa630(undefined4 *param_1,int param_2,uint param_3,int param_4);
void recovered_100aa760(undefined4 *param_1,int param_2,uint param_3,int *param_4,undefined4 param_5
                       ,int *param_6,int param_7,int param_8);
void recovered_100aa940(undefined4 param_1,void *param_2,undefined1 param_3);
undefined4 recovered_100aa9e0(void);
longdouble recovered_100aa9f0(void);
undefined4 recovered_100aab30(void);
void recovered_100aab40(char param_1);
void recovered_100aaf70(int param_1,int param_2,int param_3);
int * recovered_100ab1a0(int param_1);
undefined4 * recovered_100ab980(undefined4 *param_1,int param_2);
undefined4 * recovered_100abc00(undefined4 *param_1,int param_2);
undefined4 * recovered_100abe50(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_100ac1e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5
                  ,int *param_6,int param_7,uint param_8);
int recovered_100ac7c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
byte recovered_100ac900(uint param_1,int *param_2,int *param_3);
int recovered_100ad040(void);
byte recovered_100ad100(int param_1,uint param_2,char param_3);
uint recovered_100ad380(char *param_1,uint param_2,byte param_3,char param_4);
int recovered_100ae3d0(int param_1);
char * recovered_100ae4e0(uint param_1,byte param_2,char param_3);
void recovered_100ae840(void);
bool recovered_100ae8e0(void);
void recovered_100aeab0(int param_1,byte param_2);
undefined4 recovered_100aeb60(void);
undefined1 * recovered_100aeb70(char param_1);
void recovered_100af2b0(int param_1,int param_2);
void recovered_100af440(void);
undefined4 *
recovered_100af4a0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,uint param_8);
int recovered_100af960(byte param_1,char param_2);
undefined4 recovered_100b1aa0(int *param_1,int *param_2,int *param_3);
undefined4 recovered_100b1b00(void);
int * recovered_100b1ca0(void);
uint recovered_100b1f20(void);
undefined4 recovered_100b2090(int *param_1,int *param_2,int *param_3);
bool recovered_100b3340(void);
undefined4 recovered_100b33f0(undefined4 param_1);
undefined4 *
recovered_100b3430(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7,int param_8);
undefined4 * recovered_100b3690(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_100b37d0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
undefined4 recovered_100b3930(void);
int recovered_100b3940(int *param_1);
undefined4 recovered_100b3bb0(void);
int * recovered_100b4110(void);
void recovered_100b4260(int param_1,int param_2,uint *param_3,int param_4);
bool recovered_100b4420(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,
                       undefined4 param_5,undefined1 *param_6);
undefined4 recovered_100b4570(undefined4 param_1,int param_2,int *param_3,undefined4 param_4);
undefined4
recovered_100b4680(undefined4 param_1,int param_2,int *param_3,int param_4,char param_5,
                  undefined1 *param_6);
undefined4 recovered_100b47f0(int param_1,int *param_2,undefined4 *param_3);
undefined4 recovered_100b4c90(int *param_1);
void recovered_100b5010(int *param_1);
undefined4 * recovered_100b5220(undefined4 *param_1,int param_2);
undefined4 *
recovered_100b5450(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 * recovered_100b5bb0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 recovered_100b5d40(void);
undefined4 * recovered_100b5d50(int param_1,byte param_2);
undefined4 * recovered_100b5f50(undefined4 *param_1,int param_2);
undefined4 * recovered_100b65c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
void recovered_100b66a0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5,
                       int *param_6,uint param_7);
undefined4 *
recovered_100b6990(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
int * recovered_100b6b20(undefined1 param_1,undefined1 param_2,undefined1 param_3);
undefined4 * recovered_100b6bd0(undefined4 *param_1,int param_2);
undefined4 * recovered_100b7110(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_100b7180(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,uint param_7,int param_8);
undefined4 *
recovered_100b73c0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 * recovered_100b79a0(undefined4 *param_1,int param_2);
undefined4 *
recovered_100b7be0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 * recovered_100b7f30(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * recovered_100b8180(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 recovered_100b81f0(void);
void recovered_100b8200(int param_1);
undefined4 recovered_100b8260(void);
undefined4 recovered_100b8270(void);
undefined4 * recovered_100b8280(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 recovered_100b8390(void);
undefined4 recovered_100b83a0(undefined4 param_1);
undefined4 *
recovered_100b83e0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,uint param_7,uint param_8);
undefined4 * recovered_100b8b80(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 *
recovered_100b8d00(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 *param_6,int param_7);
undefined4 * recovered_100b8ee0(undefined4 *param_1,int param_2,uint param_3,int param_4);
undefined4 * recovered_100b8f50(undefined4 *param_1,int param_2);
undefined4 * recovered_100b9480(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
void recovered_100b9540(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5,
                       int *param_6,uint param_7,int param_8);
undefined4 *
recovered_100b9650(undefined4 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,uint param_8);
char * recovered_100b9800(undefined4 *param_1);
undefined4 * recovered_100b9bf0(uint param_1,uint *param_2,undefined4 param_3);
undefined4 recovered_100b9db0(void);
void recovered_100b9f70(int param_1);
void recovered_100ba960(void);
undefined4 * recovered_100ba9e0(uint param_1,uint *param_2,undefined4 param_3,uint param_4);
undefined4 * recovered_100bb660(int param_1);
uint * recovered_100bb770(uint *param_1);
uint * recovered_100bb900(void);
void recovered_100bba70(int param_1);
undefined4 *
recovered_100bbb00(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,int param_8);
undefined4 *
recovered_100bbda0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  uint *param_6,int param_7,int param_8);
undefined4 * recovered_100bc000(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 *
recovered_100bc070(undefined4 *param_1,int param_2,int param_3,undefined *param_4,undefined4 param_5
                  ,undefined4 *param_6,int param_7,int param_8);
int recovered_100bc1c0(int param_1,int param_2);
undefined4 * recovered_100bc340(int param_1,int param_2);
undefined4 * recovered_100bc4f0(uint *param_1,int param_2,int param_3,int param_4);
undefined4 * recovered_100bc630(undefined4 *param_1,int param_2);
void recovered_100be550(uint param_1,undefined4 param_2);
undefined4 * recovered_100be780(undefined4 *param_1,int param_2);
undefined4 *
recovered_100be940(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,uint param_8);
undefined4 * recovered_100bf030(undefined4 *param_1,int param_2,int param_3,int param_4);
bool recovered_100bf330(int param_1,int *param_2,undefined4 param_3);
undefined4 recovered_100bfa70(void);
uint * recovered_100bfa80(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100bfb10(undefined4 param_1,uint *param_2,int param_3);
uint * recovered_100c0a00(void);
int * recovered_100c0b60(uint *param_1);
undefined4 recovered_100c0c20(void);
undefined4 * recovered_100c0c30(undefined4 *param_1,int param_2);
undefined4 recovered_100c0d80(undefined4 param_1);
undefined4 *
recovered_100c0dc0(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 *
recovered_100c1180(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7,int param_8);
undefined4 *
recovered_100c1400(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int *param_6,int param_7);
int * recovered_100c1440(void);
undefined4 recovered_100c1540(void);
undefined4 recovered_100c1550(void);
undefined4 *
recovered_100c1560(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                  int *param_6,uint param_7,int param_8);
void recovered_100c1630(int param_1,int param_2,int param_3);
undefined4 * recovered_100c1760(undefined4 *param_1,int param_2);
undefined4 * recovered_100c1ec0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4);
undefined4 * recovered_100c2050(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 * recovered_100c2500(undefined4 *param_1);
int * recovered_100c2570(void);
undefined4
recovered_100c2680(int param_1,int param_2,undefined4 param_3,uint *param_4,undefined4 *param_5);
undefined4 recovered_100c2780(void);
int recovered_100c2790(void);
undefined4 recovered_100c2890(byte *param_1);
void recovered_100c2930(undefined1 *param_1);
void recovered_100c2b10(undefined1 *param_1);
void recovered_100c2d60(void);
bool recovered_100c2df0(byte *param_1);
undefined4 recovered_100c3170(void);
undefined4 * recovered_100c32c0(void);
int recovered_100c3340(void);
bool recovered_100c3440(void);
void recovered_100c3610(void);
bool recovered_100c36a0(void);
uint recovered_100c3920(int param_1,int param_2,uint param_3,uint *param_4,undefined1 *param_5,
                       int param_6,int param_7,char *param_8,ulong param_9,undefined *param_10,
                       undefined4 param_11,int param_12,byte param_13,byte *param_14);
undefined4 recovered_100c5420(int param_1,char *param_2,ulong param_3);
void recovered_100c5970(undefined4 *param_1,int param_2,uint param_3);
bool recovered_100c5a80(short param_1,char param_2,char *param_3,char *param_4,byte *param_5,
                       int param_6);
undefined4
recovered_100c6290(ushort param_1,int param_2,int param_3,int param_4,uint param_5,
                  undefined1 *param_6,uint param_7,uint *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined4 param_12);
undefined4 recovered_100c6660(undefined1 *param_1,uint param_2);
undefined4 recovered_100c6850(void);
undefined4 recovered_100c6980(byte *param_1,char *param_2,ulong param_3);
undefined4 recovered_100c6ba0(void);
bool recovered_100c6d30(int param_1,int param_2,int *param_3,char *param_4,ulong param_5);
undefined4 recovered_100c6da0(void);
bool recovered_100c6e40(void);
bool recovered_100c6e80(uint param_1,uint param_2);
undefined4 recovered_100c7060(uint *param_1);
bool recovered_100c75e0(uint param_1,uint param_2,undefined2 param_3,undefined2 param_4,int param_5,
                       ushort param_6);
void recovered_100c7750(ushort param_1,byte param_2,uint param_3,uint param_4);
void recovered_100c7870(undefined4 param_1);
undefined4 recovered_100c7930(ushort param_1,uint *param_2,char *param_3);
undefined4 recovered_100c7b40(uint param_1,ushort param_2,int param_3,char *param_4,ulong param_5);
undefined4
recovered_100c8020(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5);
undefined4
recovered_100c8100(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
                  );
bool recovered_100c8140(int *param_1,undefined1 *param_2,int param_3);
bool recovered_100c82c0(int param_1,byte *param_2,int param_3,char param_4,char *param_5,
                       ulong param_6);
void recovered_100c8680(void);
bool recovered_100c86e0(uint *param_1);
undefined4 recovered_100c8850(void);
bool recovered_100c8a30(uint param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                       undefined4 param_5,byte param_6,int param_7,ushort param_8);
undefined4
recovered_100c8cc0(uint param_1,uint param_2,ushort param_3,ushort param_4,uint *param_5,
                  uint *param_6,undefined1 *param_7,int *param_8,short *param_9);
byte recovered_100c8e20(ulong param_1);
undefined4 recovered_100c93a0(uint param_1,char *param_2,ulong param_3);
undefined4 recovered_100c94d0(int param_1,int param_2,int *param_3);
void recovered_100c9700(char *param_1,int param_2,uint param_3);
int recovered_100cba20(int *param_1,undefined4 param_2);
uint * recovered_100cbb10(void);
void recovered_100cbcb0(void);
int * recovered_100cbd60(void);
void recovered_100cbe50(char *param_1);
byte recovered_100cbfa0(int param_1,int *param_2);
undefined4 recovered_100cc380(void);
bool recovered_100cc470(void);
void recovered_100cc910(byte *param_1,uint param_2);
void recovered_100cd580(void);
void recovered_100d1ab0(uint param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5,
                       int param_6);
void recovered_100d1bc0(int param_1,int *param_2,int *param_3,int *param_4);
void recovered_100d2ce0(int param_1);
undefined4 recovered_100d2ec0(uint param_1);
char * recovered_100d3180(void);
bool recovered_100d3970(void);
void recovered_100d40a0(int param_1,int *param_2,int *param_3,uint *param_4,int param_5);
void recovered_100d70c0(void);
void recovered_100d7310(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,int param_5);
uint recovered_100d7360(void);
int recovered_100d7690(byte *param_1,int param_2,int param_3);
void recovered_100d77a0(void);
void recovered_100d7bf0(undefined1 *param_1,uint param_2,uint param_3,int param_4,int *param_5);
void recovered_100d7d70(undefined4 *param_1,char *param_2,int param_3);
undefined4 recovered_100d8690(void);
undefined4 recovered_100d8af0(void);
void recovered_100d8c00(undefined1 *param_1,undefined1 *param_2,undefined4 param_3);
void recovered_100d8ce0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                       char param_5,int param_6,int *param_7);
void recovered_100d8f50(char *param_1,char *param_2,undefined4 param_3,int param_4,int *param_5);
void recovered_100d9100(undefined1 *param_1);
undefined4 recovered_100d94d0(undefined1 *param_1);
void recovered_100d9900(byte *param_1,int param_2,undefined1 *param_3,int param_4,int param_5);
uint recovered_100da5c0(int param_1,undefined4 *param_2,int param_3,int param_4,uint *param_5);
void recovered_100da850(undefined4 param_1);
void recovered_100da940(int param_1,int param_2,int param_3,int *param_4);
void recovered_100dabd0(undefined4 *param_1,int param_2,int param_3,int param_4);
uint recovered_100dae70(int param_1,uint param_2,uint *param_3);
undefined4 recovered_100daf60(int param_1,int *param_2);
uint recovered_100db190(int param_1,uint param_2,uint *param_3);
int recovered_100dca10(void);
bool recovered_100dcb80(undefined1 *param_1,uint param_2);
undefined4 recovered_100dcc90(void);
void recovered_100dce70(void);
void recovered_100dd470(int param_1,int param_2,int param_3,int param_4,char param_5);
int recovered_100dd670(int param_1,int param_2,char *param_3);
bool recovered_100ddd00(undefined4 param_1,char param_2);
uint recovered_100dddf0(undefined4 param_1,char param_2,uint param_3);
char * recovered_100de050(void);
bool recovered_100de130(byte *param_1,undefined1 *param_2);
int recovered_100de220(void);
void recovered_100de2d0(char *param_1,int param_2,int *param_3,int param_4);
void recovered_100de4a0(undefined4 param_1,int param_2,int param_3);
uint recovered_100de7d0(uint param_1,uint param_2,uint param_3,byte param_4);
int recovered_100df2c0(uint param_1,int param_2,char param_3);
void recovered_100df580(int param_1,char *param_2,int param_3);
byte * recovered_100e09f0(char *param_1);
undefined4 recovered_100e0b10(int param_1,int param_2,int *param_3,int param_4,uint param_5);
undefined4 recovered_100e1030(int param_1,int *param_2);
undefined4 recovered_100e12e0(int param_1,undefined4 *param_2);
undefined4 recovered_100e1790(double *param_1);
bool recovered_100e1aa0(char *param_1);
int recovered_100e2130(void);
byte recovered_100e23e0(void);
void recovered_100e2960(int param_1,undefined4 *param_2);
void recovered_100e2cb0(int param_1,undefined4 *param_2);
uint recovered_100e2ea0(void);
void recovered_100e2fc0(void);
undefined4 recovered_100e3270(int param_1);
bool recovered_100e35b0(int param_1,char *param_2,uint param_3,void *param_4);
void recovered_100e36d0(byte *param_1,char *param_2);
uint recovered_100e3c40(void);
void recovered_100e3e50(byte *param_1);
void recovered_100e4190(char *param_1,char *param_2);
bool recovered_100e4210(void);
void recovered_100e42d0(void);
undefined4 recovered_100e4370(char *param_1);
bool recovered_100e44c0(void);
void recovered_100e4570(void);
void recovered_100e4660(void);
uint recovered_100e48a0(void);
undefined1 recovered_100e48f0(int *param_1);
void recovered_100e4c10(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100e4c40(void);
void recovered_100e4dd0(void);
void recovered_100e4f20(void);
undefined4 recovered_100e5030(void);
void recovered_100e5250(void);
void recovered_100e54c0(int param_1);
uint recovered_100e5a00(char *param_1);
void recovered_100e5c90(void);
void recovered_100e5dc0(void);
int * recovered_100e5e70(int param_1);
uint recovered_100e6350(int param_1,int *param_2);
void recovered_100e67d0(int param_1,int param_2,int param_3,undefined4 param_4,double param_5,
                       double *param_6,double *param_7);
undefined4 recovered_100e6a20(void);
int * recovered_100e6bd0(void);
void recovered_100e6d80(void);
undefined4 recovered_100e7180(void);
undefined4 recovered_100e7850(void);
undefined4 recovered_100e7a80(void);
undefined4 recovered_100e7d10(char *param_1);
void recovered_100e7f80(char param_1);
uint recovered_100e80f0(int *param_1,int *param_2,undefined4 *param_3,uint param_4);
void recovered_100e8360(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       char param_6);
undefined4 recovered_100e8800(int *param_1,int *param_2,uint param_3);
bool recovered_100e8a50(void);
undefined4 recovered_100e8d60(int *param_1,int *param_2,uint param_3);
void recovered_100e9130(void);
void recovered_100e93a0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       char param_6);
void recovered_100e97e0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
void recovered_100e9a10(int *param_1,int *param_2,uint param_3);
undefined4 recovered_100e9b50(int *param_1);
bool recovered_100ea2c0(uint param_1);
uint recovered_100ed8e0(void);
undefined4 recovered_100ed950(uint param_1);
undefined4 recovered_100edc50(int param_1,uint param_2);
bool recovered_100edea0(uint param_1);
void recovered_100ef110(void);
bool recovered_100ef2e0(int param_1,int param_2);
bool recovered_100f0100(uint *param_1,byte param_2);
undefined4 recovered_100f06c0(int param_1);
undefined4 recovered_100f0720(int param_1,char param_2);
undefined2 recovered_100f0870(void);
byte recovered_100f09a0(int param_1);
bool recovered_100f1a50(void);
undefined4 recovered_100f1ab0(byte *param_1,undefined1 *param_2,uint param_3,char param_4);
longdouble recovered_100f1c40(void);
undefined4
recovered_100f21b0(int param_1,int param_2,double param_3,double param_4,double *param_5,
                  int *param_6,int *param_7);
undefined4
recovered_100f3840(byte *param_1,int param_2,uint *param_3,uint param_4,byte param_5,char param_6);
undefined4 recovered_100f3d50(uint param_1);
undefined4 recovered_100f3e50(void);
undefined4 recovered_100f40d0(int param_1,undefined4 param_2);
char * recovered_100f43e0(void *param_1,int param_2);
uint recovered_100f44f0(void);
undefined4 recovered_100f57a0(uint param_1,char param_2,uint *param_3);
longdouble recovered_100f5f10(double param_1);
longdouble recovered_100f6010(double param_1);
void recovered_100f6110(double param_1,double param_2,double param_3,double param_4);
void recovered_100f6270(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,char param_8);
void recovered_100f7410(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,double param_8);
void recovered_100f7560(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,double param_8);
void recovered_100f7940(void);
uint recovered_100f7aa0(void);
undefined4 recovered_100f7c60(int param_1,uint param_2,int *param_3,int *param_4,int *param_5);
int recovered_100f8f60(void);
undefined4 recovered_100f8fb0(void);
void recovered_100f9010(uint param_1);
int recovered_100f90b0(int param_1,int *param_2,uint param_3,uint param_4,int *param_5);
undefined4
recovered_100faad0(int param_1,int param_2,int *param_3,uint param_4,int param_5,uint param_6);
int recovered_100fad90(void);
uint recovered_100fae20(void);
int recovered_100faec0(void);
bool recovered_100fb030(uint param_1,int param_2);
undefined4 recovered_100fb3d0(uint param_1);
uint recovered_100fbc10(void);
uint recovered_100fbd80(void);
undefined4 recovered_100fbf00(uint param_1,int param_2);
undefined4 recovered_100fc1a0(int param_1,int param_2,char param_3);
ushort recovered_100fc2e0(void);
void recovered_100fc390(void);
void recovered_100fc3f0(void);
void recovered_100fc440(void);
void recovered_100fc5b0(void);
void recovered_100fc800(void *application,uint x,uint y,int width,int height,uint colour);
void recovered_100fcd40(int param_1,char *param_2,int param_3,uint param_4);
void recovered_100fcf60(void *application,uint x,uint y,uint red,uint green,uint blue,uint alpha);
void recovered_100fd090(int param_1,int param_2,uint param_3,uint param_4);
void recovered_100fd360(int param_1,int param_2,uint param_3,int param_4,int param_5,char param_6);
void recovered_10100690(int param_1,int param_2,int param_3,char *param_4,uint param_5);
void recovered_101008c0(int *param_1,int *param_2);
uint recovered_10100f60(double param_1,double param_2);
int recovered_101013d0(byte *param_1,byte *param_2,int param_3,char param_4);

/* Original analysis identifiers for manual recovery units. */
