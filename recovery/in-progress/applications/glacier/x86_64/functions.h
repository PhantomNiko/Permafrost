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
static inline void pf_app_scrollbars_layout(unsigned long long a,unsigned long long b,void *vertical,void *horizontal,void *output){union {unsigned long long q[2];TerrorUIRect r;} u={{a,b}};terror_ui_scrollbars_layout(u.r,vertical,horizontal,output);}
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
static inline unsigned char pf_app_scrollbar_capture(void *snapshot,void *window,unsigned long long a,unsigned long long b){union {unsigned long long q[2];TerrorUIRect r;} u={{a,b}};return terror_ui_scrollbar_capture(snapshot,window,u.r);}
static inline unsigned int pf_app_window_present_rect(void *window,unsigned long long a,unsigned long long b){union {unsigned long long q[2];TerrorUIRect r;} u={{a,b}};return terror_ui_window_present_rect(window,u.r);}
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
#define INFINITY (__builtin_inf())
typedef uint16_t wchar16;
static inline uint128 psllw(uint128 a,unsigned count){uint128 out=0;if(count>=16)return out;for(unsigned s=0;s<128;s+=16)out|=(uint128)(((uint16_t)(a>>s)<<count)&0xffffU)<<s;return out;}
static inline uint128 psubusw(uint128 a,uint128 b){uint128 out=0;for(unsigned s=0;s<128;s+=16){uint16_t x=a>>s,y=b>>s;out|=(uint128)(x>y?x-y:0)<<s;}return out;}
#define CONCAT28(a,b) (((uint128)(uint16_t)(a)<<64)|(uint64_t)(b))
#define CONCAT64(a,b) (((uint128)((uint64_t)(a)&0xffffffffffffULL)<<32)|(uint32_t)(b))
static inline uint128 psraw(uint128 a,unsigned count){uint128 out=0;unsigned shift=count>15?15:count;for(unsigned s=0;s<128;s+=16)out|=(uint128)(uint16_t)((int16_t)(a>>s)>>shift)<<s;return out;}
#define u__import_100f03b0 (*(uint128 *)(pf_module_state+0x6ccU))
static inline uint128 minpd(uint128 a,uint128 b){uint128 out=0;for(unsigned s=0;s<128;s+=64){uint64_t x=(uint64_t)(a>>s),y=(uint64_t)(b>>s);out|=(uint128)(pf_bits_double(x)<pf_bits_double(y)?x:y)<<s;}return out;}
extern uint8_t pf_module_state[];
int recovered_10000650(void);
undefined8 recovered_10006ec0(void);
void recovered_10006f10(void);
void recovered_10006f60(long param_1);
void recovered_10007150(uint *param_1);
void recovered_1000a1f0(uint *param_1,long param_2);
void recovered_1000a850(byte *param_1,byte *param_2);
undefined8 recovered_1000ac80(long param_1);
undefined8 recovered_1000adf0(void);
void recovered_1000ae40(long *param_1,byte *param_2);
void recovered_1000cda0(byte *param_1,long param_2);
void recovered_1000cf30(byte *param_1,byte *param_2,byte *param_3);
void recovered_1000e0d0(long param_1);
void recovered_1000e6d0(long param_1);
void recovered_1000e910(undefined8 *param_1);
void recovered_1000e9d0(long param_1,uint param_2);
void recovered_1000eab0(undefined8 *param_1);
void recovered_1000ebf0(long *param_1);
void recovered_1000ec60(undefined8 *param_1);
void recovered_1000ed20(long *param_1,long param_2);
void recovered_100180b0(long param_1,long param_2);
void recovered_10018170(long param_1,long param_2,long param_3);
void recovered_100181e0(long param_1,long param_2,long param_3,ulong param_4);
char * recovered_10018260(char *param_1);
bool recovered_100182f0(byte *param_1,byte *param_2);
void recovered_10018360(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_100184a0(long param_1,byte *param_2);
void recovered_10018510(long param_1,byte *param_2,undefined1 *param_3);
void recovered_100189e0(long param_1,char *param_2);
ulong recovered_1001acd0(ulong param_1,long param_2,byte *param_3,undefined1 *param_4,ulong *param_5
                        ,byte *param_6,char *param_7,byte *param_8);
undefined8 recovered_1001b050(long param_1,long param_2,long param_3,ulong param_4,long param_5);
char * recovered_1001b370(char *param_1,long param_2);
void recovered_1001b420(long param_1,byte *param_2,long param_3,ulong *param_4,byte param_5);
ulong recovered_1001b650(ulong param_1,long param_2,byte *param_3,undefined1 *param_4,long param_5,
                        ulong *param_6,char *param_7,ulong param_8);
undefined8 recovered_1001baf0(long param_1,char *param_2,ulong param_3);
void recovered_1001bcf0(long param_1);
byte recovered_1001bea0(long param_1,char *param_2);
void recovered_1001c120(long param_1);
void recovered_1001cc50(long param_1);
long recovered_1001ce10(long *param_1,ulong param_2);
double recovered_1001cf80(void);
void recovered_1001d020(long param_1);
void recovered_1001d200(undefined1 param_1 [8],undefined8 *param_2,ulong *param_3,long param_4,
                       long param_5);
undefined8 recovered_1001d590(void);
undefined8
recovered_1001d5e0(undefined1 param_1 [8],long param_2,long *param_3,uint param_4,ulong *param_5);
void recovered_1001d6a0(long *param_1,long *param_2,long param_3,int param_4,long param_5);
uint128 recovered_1001d700(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5,long param_6);
uint128 recovered_1001d9b0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5,long param_6);
void recovered_1001da20(long *param_1,long param_2);
uint128 recovered_1001da50(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5);
uint128 recovered_1001dc20(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,long *param_6);
undefined8 recovered_1001dd20(long *param_1,long param_2,long *param_3,undefined4 *param_4);
undefined8
recovered_1001e2e0(undefined1 param_1 [8],long param_2,long *param_3,uint param_4,ulong *param_5);
uint128 recovered_1001e360(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,long param_6);
uint128 recovered_1001e390(long *param_1);
void recovered_1001e3d0(long *param_1,long param_2,undefined1 param_3);
uint128 recovered_1001e450(void);
void recovered_1001e460(long *param_1,long *param_2,ulong *param_3,ulong param_4);
long * recovered_1001e580(long *param_1,long *param_2,long *param_3,int param_4,long param_5);
uint128 recovered_1001e750(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,undefined4 param_6);
void recovered_1001e9b0(long *param_1,int param_2,long *param_3,long param_4,uint param_5);
void recovered_1001ea70(long *param_1,long *param_2,long param_3,long param_4,long param_5);
uint recovered_1001eb30(undefined1 param_1 [8],uint param_2,ulong *param_3,uint *param_4,int param_5
                       ,uint param_6);
void recovered_1001f050(long *param_1);
uint recovered_1001f290(undefined1 param_1 [8],uint param_2,ulong *param_3,int *param_4,int param_5,
                       uint param_6);
char recovered_1001f430(long *param_1,uint param_2,long param_3,int *param_4,int param_5,
                       long param_6);
uint128 recovered_1001f600(undefined1 param_1 [8],uint param_2,ulong *param_3,long param_4,uint param_5);
ulong recovered_1001f940(undefined1 param_1 [8],uint param_2,ulong *param_3,uint *param_4,
                        uint param_5,ulong param_6);
uint recovered_10020420(undefined1 param_1 [8],uint param_2,ulong *param_3,uint *param_4,
                       uint param_5,ulong *param_6);
uint128 recovered_10021240(undefined1 param_1 [8],uint param_2,long param_3,long param_4,uint param_5);
void recovered_100216f0(long *param_1);
uint128 recovered_100219e0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  long param_6);
void recovered_10021c90(long *param_1);
void recovered_10021e90(long *param_1);
void recovered_10022260(long *param_1);
void recovered_10022740(long *param_1);
void recovered_10023640(long *param_1);
void recovered_100238d0(long *param_1);
void recovered_10023b00(long *param_1);
void recovered_10023c90(long *param_1);
void recovered_10023ec0(long *param_1);
void recovered_10023fb0(long *param_1);
void recovered_10024170(long *param_1,long *param_2);
void recovered_10024a00(long *param_1);
void recovered_10025380(long *param_1);
void recovered_10025740(long *param_1);
void recovered_100257c0(long *param_1);
void recovered_10025df0(long *param_1);
ulong * recovered_100264a0(undefined1 param_1 [8],uint param_2,ulong *param_3);
undefined4
recovered_10026560(long *param_1,ulong param_2,int param_3,long *param_4,int param_5,ulong *param_6);
ulong * recovered_10026df0(long *param_1,ulong *param_2,int param_3);
ulong * recovered_10027080(long *param_1,ulong param_2);
uint recovered_10027100(long *param_1,uint param_2,ulong *param_3,int param_4);
void recovered_100273d0(long *param_1,long param_2,long param_3);
void * recovered_10027630(void *runtime,double value);
undefined1 recovered_10028ad0(int param_1,long param_2);
uint recovered_10028b20(long *param_1,int param_2,long param_3,uint param_4,ulong *param_5,
                       long *param_6,uint param_7,char param_8);
uint128 recovered_10029170(long *param_1,long param_2,uint param_3,long *param_4);
void recovered_10029e90(long *param_1,long param_2);
uint128 recovered_10029f00(long *param_1,long param_2,uint param_3,long param_4,long param_5,uint param_6);
undefined4
recovered_1002a0f0(long *param_1,int param_2,long *param_3,long *param_4,uint param_5,
                  undefined8 param_6,long param_7,long *param_8);
void recovered_1002a580(long *param_1,long *param_2,int param_3,ulong *param_4);
long * recovered_1002a760(long *param_1,long param_2,uint param_3,long param_4,long param_5,
                         uint param_6);
void recovered_1002afb0(long *param_1,long param_2,undefined1 *param_3,char param_4);
int recovered_1002b120(long param_1,long *param_2,long param_3);
int recovered_1002b1a0(long *param_1,long param_2,char *param_3,ulong *param_4);
undefined4 recovered_1002b240(long *param_1,long param_2);
ulong recovered_1002b2e0(long param_1);
undefined4
recovered_1002b380(long *param_1,uint param_2,long param_3,long param_4,uint param_5,ulong *param_6);
ulong recovered_1002b680(long *param_1,uint param_2,ulong *param_3,long *param_4,undefined4 param_5,
                        undefined8 param_6,undefined8 param_7,ulong *param_8,byte param_9);
ulong recovered_1002bc30(long *param_1,int param_2,ulong *param_3,long *param_4);
ulong recovered_1002bef0(long *param_1,uint param_2,ulong *param_3,long *param_4,undefined4 param_5);
ulong recovered_1002c3a0(long *param_1,ulong *param_2,long *param_3,ulong *param_4,byte param_5);
long recovered_1002ccd0(long *param_1,int param_2,ulong *param_3,ulong *param_4);
undefined8 recovered_1002d4b0(long *param_1,long param_2);
ulong recovered_1002d500(long *param_1,long param_2,long param_3);
ulong recovered_1002d700(long *param_1,long param_2);
ulong recovered_1002d7a0(long *param_1,long param_2);
uint128 recovered_1002d840(long *param_1,uint *param_2);
uint128 recovered_1002d980(long *param_1,long param_2,uint param_3);
bool recovered_1002daf0(int param_1,long *param_2,int param_3,long *param_4);
undefined4 recovered_1002dbd0(long *param_1,int param_2,ulong *param_3,uint *param_4);
ulong recovered_1002df90(uint *param_1,uint *param_2);
undefined8 *
recovered_1002e060(undefined1 param_1 [8],int param_2,ulong param_3,ulong *param_4,ulong *param_5);
ulong recovered_1002e870(long *param_1,int param_2,long *param_3,long *param_4,undefined4 *param_5,
                        char param_6);
undefined8 recovered_1002ee30(long *param_1,long param_2);
undefined8 recovered_1002ee80(long *param_1,undefined4 *param_2);
long * recovered_1002ef00(long *param_1,long *param_2);
undefined4 recovered_1002ef90(long *param_1,long *param_2);
bool recovered_1002f0f0(long *param_1,long *param_2);
long * recovered_1002f140(long *param_1,long *param_2);
undefined8 * recovered_1002f2d0(long *param_1,long *param_2,char param_3);
void recovered_1002f380(long *param_1,long param_2,long *param_3,long param_4,uint *param_5,
                       uint param_6);
void recovered_1002f7c0(long *param_1,long *param_2,long param_3,undefined1 param_4);
long * recovered_1002f830(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                         uint param_6);
ulong recovered_1002fdb0(long *param_1,int param_2,ulong *param_3,long *param_4);
undefined8 recovered_1002fea0(int param_1,ulong *param_2,long *param_3);
long recovered_10030050(double param_1);
ulong * recovered_100300f0(long *param_1);
ulong recovered_100305f0(double param_1);
ulong recovered_100306a0(ulong param_1,ulong param_2);
ulong recovered_10030920(ulong param_1);
undefined8 recovered_100309b0(uint param_1);
ulong recovered_10030a20(char *param_1);
ulong recovered_10030fc0(long param_1,uint param_2);
ulong recovered_100310c0(long param_1,long param_2);
void recovered_10031280(long *param_1);
ulong recovered_100312d0(long *param_1,uint param_2,long param_3);
ulong recovered_100313a0(long param_1,ulong param_2,long param_3,long *param_4);
ulong recovered_100314d0(long *param_1);
void recovered_10031510(long *param_1,long param_2,int param_3,undefined8 param_4,byte param_5);
void recovered_10031660(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                       undefined1 param_5,undefined1 param_6);
void recovered_10031750(long *param_1,long *param_2);
void recovered_10034450(long *param_1,undefined8 param_2,undefined8 param_3);
void recovered_10034500(long *param_1,long param_2);
void recovered_10034620(long *param_1,long param_2,int param_3,long param_4);
void recovered_10034980(long *param_1,undefined8 *param_2);
byte recovered_10034a30(long *param_1,undefined8 param_2,undefined4 *param_3);
uint128 recovered_10034b30(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  long *param_6);
ulong recovered_10034b80(long param_1,char *param_2);
void recovered_10034bd0(long *param_1,long param_2);
undefined8 * recovered_10034d20(undefined8 *param_1,long *param_2,long *param_3,char *param_4);
uint recovered_10035090(long *param_1,long *param_2,byte *param_3);
uint128 recovered_10036f60(long *param_1,long param_2,uint param_3,ulong *param_4);
long * recovered_10037250(long *param_1,int param_2,long param_3);
void recovered_10037300(long *param_1,long *param_2,undefined4 param_3,long param_4,char param_5);
void recovered_10037340(long *param_1,long param_2,long param_3);
void recovered_10037420(long *param_1,long *param_2,char *param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6);
ulong * recovered_10037ce0(long param_1);
uint128 recovered_10037d20(long *param_1);
void recovered_10037db0(long *param_1,byte *param_2,undefined4 param_3,undefined8 param_4);
ulong recovered_10037ec0(long *param_1,undefined8 *param_2,long param_3);
int recovered_10038090(int param_1);
uint128 recovered_100380c0(long *param_1,long param_2);
int recovered_100381d0(long param_1,char *param_2);
void recovered_10038280(long *param_1,long param_2,uint *param_3,char *param_4,uint param_5,
                       long param_6);
int recovered_10038430(long *param_1,long param_2,long *param_3,uint param_4,undefined8 param_5,
                      undefined8 param_6);
void recovered_10038550(long *param_1,long *param_2,uint param_3,ulong *param_4);
void recovered_10038870(long *param_1,long *param_2,long param_3,ulong *param_4,int param_5,
                       long *param_6);
void recovered_10038930(long *param_1,long param_2,undefined1 *param_3,byte param_4,
                       undefined1 param_5);
ulong recovered_10038ab0(long *param_1,uint param_2,long param_3,uint *param_4,int param_5);
ulong recovered_10038c10(long *param_1,int *param_2,undefined4 *param_3);
void recovered_10039190(long *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                       ,undefined8 param_6,long param_7,long *param_8,uint param_9,ulong *param_10,
                       undefined8 param_11,ulong *param_12,undefined8 param_13);
long * recovered_100392c0(long *param_1,long *param_2);
bool recovered_100393a0(long *param_1,int param_2,long *param_3,int param_4,long *param_5,
                       byte param_6);
void recovered_10039680(long *param_1,long param_2,int param_3,undefined8 param_4,byte param_5);
long * recovered_100397a0(long *param_1,long param_2,long *param_3,byte param_4,undefined1 param_5);
uint128 recovered_100399a0(long *param_1,long param_2,long param_3);
uint128 recovered_10039a50(long *param_1,long *param_2);
void recovered_10039b50(long *param_1,ulong *param_2);
uint128 recovered_10039c30(long *param_1,long param_2,long param_3);
uint128 recovered_1003a030(long *param_1,long param_2,ulong param_3,ulong *param_4);
void recovered_1003a850(long *param_1,long *param_2,byte *param_3,uint param_4,long *param_5);
undefined8 recovered_1003aa00(byte *param_1);
long recovered_1003aa60(ulong *param_1,long param_2,long param_3,byte param_4);
void recovered_1003ac40(long *param_1,long *param_2,ulong *param_3,int param_4,long *param_5,
                       uint param_6,undefined1 param_7);
undefined8
recovered_1003aec0(long *param_1,long param_2,long *param_3,uint param_4,undefined4 *param_5,
                  long *param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13);
undefined8 recovered_1003ba30(long *param_1,uint param_2,long param_3,int *param_4);
undefined8
recovered_1003bad0(long *param_1,int param_2,ulong *param_3,int param_4,long param_5,int *param_6);
void recovered_1003bbe0(long *param_1,int param_2,long *param_3,char *param_4,ulong *param_5);
uint128 recovered_1003bd50(long *param_1,uint param_2,long param_3);
void recovered_1003be50(long *param_1,long param_2,undefined1 *param_3);
bool recovered_1003c070(char *param_1,long *param_2);
undefined4 recovered_1003c1f0(long *param_1,int param_2,long param_3,int param_4,long param_5);
void recovered_1003c530(double param_1,double param_2);
ulong recovered_1003cbd0(ulong param_1);
ulong recovered_1003cc20(ulong param_1,ulong param_2);
double recovered_1003ccb0(double param_1);
ulong recovered_1003ce10(undefined8 param_1,int *param_2);
void recovered_1003cea0(ulong param_1,int param_2);
void recovered_1003d070(void);
double recovered_1003d130(double param_1);
double recovered_1003d340(double param_1);
undefined1 recovered_1003d580(long *param_1,int param_2,long param_3);
uint128 recovered_1003d670(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5);
uint recovered_1003d740(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                       uint param_5,undefined8 param_6);
uint128 recovered_1003e3a0(long *param_1,ulong *param_2,uint param_3,long param_4);
void recovered_1003e690(long *param_1,long param_2,long param_3);
ulong * recovered_1003e6d0(byte *param_1,undefined1 param_2 [8],uint param_3);
uint128 recovered_1003f750(long *param_1,ulong *param_2,int param_3);
uint128 recovered_1003fcc0(undefined1 param_1 [8],uint param_2,double *param_3,double *param_4,uint param_5,
                  ulong *param_6);
uint128 recovered_10040dc0(long *param_1,long param_2,ulong *param_3,int param_4);
uint128 recovered_10041420(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5);
uint recovered_10041710(undefined1 param_1 [8],uint param_2,ulong *param_3,ulong *param_4);
undefined4 recovered_10041a70(long *param_1,uint param_2,ulong *param_3,ulong *param_4);
undefined1 recovered_10041c20(undefined1 param_1 [8],ulong *param_2,uint *param_3,uint param_4);
undefined8 recovered_10042170(long *param_1,uint param_2,long param_3);
uint recovered_100422d0(long *param_1,uint param_2,ulong *param_3,ulong *param_4);
void recovered_10042460(long *param_1,uint param_2,ulong *param_3,ulong *param_4,uint param_5);
uint128 recovered_10042680(long *param_1,int param_2,ulong *param_3,ulong *param_4);
undefined8 recovered_10042ea0(long param_1,long param_2,ulong *param_3,ulong param_4,long *param_5);
bool recovered_100431c0(long param_1,long param_2,ulong *param_3,long *param_4,uint param_5,
                       undefined4 param_6);
undefined8 recovered_10044580(long param_1,long *param_2,void *param_3,undefined8 param_4);
ulong * recovered_10044760(long *param_1,uint param_2);
undefined8 * recovered_10044840(long *param_1,ulong *param_2,long *param_3);
long recovered_10044a40(long *param_1);
void recovered_100459e0(undefined8 *param_1,long param_2);
undefined8 * recovered_10045a60(undefined8 *param_1,long *param_2,undefined8 *param_3,uint param_4);
undefined8 recovered_10045f40(undefined8 *param_1,uint *param_2);
long recovered_10046070(long *param_1,byte param_2);
ulong * recovered_10046720(long *param_1);
bool recovered_10046900(long param_1,uint param_2,uint *param_3);
int recovered_100469c0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,long param_4,
                      uint param_5);
undefined4 recovered_10046fb0(long *param_1,int param_2,long param_3);
uint recovered_10047160(long *param_1,int param_2,ulong *param_3,uint *param_4,uint param_5,
                       long param_6);
void recovered_10047740(long *param_1);
void recovered_10048190(long *param_1,long param_2);
long recovered_10048380(long *param_1,long param_2);
void recovered_100485c0(undefined8 *param_1,long param_2,ulong param_3);
byte recovered_10048650(long param_1,char *param_2,uint param_3);
void recovered_100487a0(long *param_1,long *param_2,byte *param_3,uint param_4);
void recovered_100495d0(long *param_1,uint param_2);
ulong * recovered_10049b90(long *param_1,long param_2,ulong param_3,char param_4);
void recovered_10049e20(long *param_1,int param_2);
undefined1 * recovered_10049e60(uint64_t *param_1);
byte * recovered_1004a550(uint64_t *param_1,uint param_2);
bool recovered_1004b600(long *param_1);
undefined8 recovered_1004b680(long param_1,long param_2);
undefined1 * recovered_1004b6e0(long *param_1,undefined1 *param_2,char param_3);
char * recovered_1004b940(uint64_t *param_1);
long recovered_1004c970(long *param_1);
undefined1 * recovered_1004caf0(uint64_t *param_1,char param_2);
undefined1 * recovered_1004cf50(long *param_1,char param_2,char param_3);
ulong recovered_1004d150(long *param_1,byte *param_2,uint param_3);
undefined1 * recovered_1004d400(uint64_t *param_1,char param_2,undefined4 param_3);
undefined1 * recovered_1004e490(long *param_1);
void recovered_1004e5a0(long *param_1);
byte * recovered_1004e5f0(uint64_t *param_1);
undefined * recovered_1004f890(long param_1);
undefined1 * recovered_1004fa30(uint64_t *param_1,char param_2);
char recovered_1004fc80(undefined1 *param_1);
void recovered_1004fd30(long *param_1,long *param_2,long *param_3,byte param_4);
char recovered_1004ff20(char *param_1,uint param_2);
void recovered_100500d0(long *param_1,long *param_2,undefined1 *param_3,byte param_4,int param_5);
void recovered_10050340(long *param_1,long param_2,byte *param_3,char param_4,uint param_5);
uint128 recovered_100506f0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5);
ulong recovered_100508f0(long *param_1,uint param_2,ulong *param_3,int *param_4,int param_5,
                        long param_6);
uint128 recovered_10050bd0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5,
                  long param_6);
uint128 recovered_100512a0(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6);
undefined4
recovered_100514d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  int param_5,int *param_6);
undefined4 recovered_10051650(long param_1);
uint128 recovered_10051690(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  long *param_6);
undefined4
recovered_10051840(undefined1 param_1 [8],int param_2,ulong *param_3,uint *param_4,int param_5,
                  long param_6);
uint128 recovered_10051ab0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
uint128 recovered_10051ef0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5,
                  ulong param_6);
int recovered_10052260(long *param_1,int param_2,long param_3,uint *param_4,uint param_5,
                      ulong param_6);
uint128 recovered_10052730(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
void recovered_10052a10(long *param_1,long *param_2,uint param_3,ulong *param_4,uint param_5,
                       ulong *param_6);
uint recovered_10052d00(long param_1,uint param_2,ulong *param_3);
undefined8 recovered_10052ee0(long param_1,long param_2,int param_3,long *param_4,uint param_5);
long recovered_10053090(long param_1,long param_2,int param_3,long *param_4,uint param_5);
uint128 recovered_100531d0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5);
ulong * recovered_10053350(long *param_1,ulong *param_2);
uint128 recovered_10053400(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,long param_6);
uint128 recovered_100536b0(long *param_1,int param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
undefined4 recovered_10053810(undefined8 param_1,undefined4 param_2);
uint128 recovered_10053820(undefined1 param_1 [8],int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
uint128 recovered_10053c20(undefined1 param_1 [8],uint param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
void recovered_10053d60(long *param_1,int param_2,long param_3,int *param_4,int param_5);
int recovered_10053d90(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                      long param_6);
uint recovered_10054070(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,int *param_4,
                       uint param_5,ulong *param_6);
uint128 recovered_100549d0(void);
uint128 recovered_100549f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6);
double recovered_10055610(double param_1);
double recovered_10055750(double param_1);
double recovered_10055800(double param_1);
double recovered_10055b40(double param_1,double param_2);
void recovered_10055db0(ulong param_1);
double recovered_10056030(double param_1,int param_2);
double recovered_10056880(double param_1);
void recovered_10056a90(ulong param_1,int param_2,int param_3,int param_4);
void recovered_10056c80(double param_1);
uint recovered_10056f80(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                       uint param_5);
uint128 recovered_100572a0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,int *param_4,
                  uint param_5);
int recovered_10057ad0(long *param_1,undefined4 param_2,long *param_3);
void recovered_100584e0(long *param_1);
uint recovered_100585d0(uint64_t *param_1,ulong *param_2,long param_3,int param_4,
                       long param_5,long param_6,uint param_7);
ulong * recovered_10058d30(undefined8 *param_1);
long recovered_10059290(long param_1,ulong param_2);
void recovered_10059380(long param_1,long param_2,long param_3);
ulong recovered_100593e0(uint64_t *param_1,ulong *param_2,long param_3);
void recovered_10059d20(long *param_1,ulong *param_2);
undefined8 recovered_10059fc0(undefined8 *param_1,undefined2 param_2);
void recovered_1005a250(long *param_1,int param_2);
uint128 recovered_1005a2d0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,long param_6);
double recovered_1005ac60(long param_1,long param_2);
uint128 recovered_1005afe0(undefined1 param_1 [8],uint param_2,ulong *param_3,long param_4,uint param_5,
                  long param_6);
uint128 recovered_1005b330(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,ulong param_6);
undefined4 recovered_1005bbc0(undefined8 param_1,undefined4 param_2);
uint128 recovered_1005bbd0(undefined1 param_1 [8],int param_2,long *param_3,uint *param_4,uint param_5);
undefined4
recovered_1005c360(undefined1 param_1 [8],uint param_2,long param_3,long param_4,undefined8 param_5,
                  long *param_6);
uint recovered_1005c820(undefined1 param_1 [8],uint param_2,long param_3,undefined4 *param_4,
                       uint param_5);
uint recovered_1005cb00(undefined1 param_1 [8],uint param_2,long param_3,int *param_4,int param_5,
                       ulong param_6);
undefined4 recovered_1005ce60(undefined1 param_1 [8],uint param_2,long param_3);
undefined4 recovered_1005d0f0(undefined1 param_1 [8],uint param_2,long param_3);
uint recovered_1005d270(undefined1 param_1 [8],uint param_2,long param_3,long param_4,
                       undefined8 param_5,long *param_6);
uint128 recovered_1005dbc0(undefined1 param_1 [8],uint param_2,long param_3,long param_4,ulong param_5,
                  long *param_6);
uint recovered_1005e200(undefined1 param_1 [8],uint param_2,long param_3,int *param_4,
                       undefined4 param_5,long param_6);
ulong recovered_1005e570(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4);
undefined4
recovered_1005e640(long *param_1,int param_2,long *param_3,ulong param_4,undefined8 param_5,
                  long *param_6);
void recovered_1005e980(undefined1 param_1 [8],uint param_2,ulong *param_3,undefined8 param_4,
                       undefined8 param_5);
uint128 recovered_1005eab0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5);
uint128 recovered_1005ef30(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,int param_6);
uint128 recovered_1005f150(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6);
uint128 recovered_1005f240(long *param_1,int param_2,long param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6);
uint128 recovered_1005f5a0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
uint recovered_1005f5f0(long *param_1,uint param_2,long param_3);
uint recovered_1005f6d0(long *param_1,int param_2,ulong *param_3,int *param_4,int param_5);
ulong * recovered_1005fa50(double param_1,long *param_2,int param_3);
double recovered_1005fdf0(long param_1,ulong *param_2);
double recovered_10060da0(double *param_1);
int * recovered_10061290(double param_1,int *param_2);
void recovered_100616f0(long param_1,ulong param_2,uint param_3,uint param_4);
uint128 recovered_10061770(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,uint param_6);
void recovered_10061c30(long *param_1,long *param_2,long param_3,int param_4,long param_5);
undefined4 recovered_10061ca0(undefined1 param_1 [8],int param_2,long param_3);
uint128 recovered_10061e70(void);
uint128 recovered_10061ea0(undefined1 param_1 [8],uint param_2,long param_3,int *param_4,int param_5);
uint128 recovered_100628a0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,uint param_6);
uint128 recovered_100628c0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5);
uint128 recovered_10062ab0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
undefined4
recovered_10063540(undefined1 param_1 [8],int param_2,long param_3,int *param_4,int param_5,
                  int param_6);
int recovered_100635a0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                      int param_6);
undefined4
recovered_100636a0(undefined1 param_1 [8],int param_2,ulong param_3,uint *param_4,uint param_5,
                  int param_6);
uint128 recovered_100637f0(undefined1 param_1 [8],uint *param_2,uint param_3,uint param_4,undefined4 param_5
                  ,int param_6);
uint128 recovered_10064da0(undefined1 param_1 [8],uint param_2,ulong *param_3);
int recovered_100653d0(undefined1 param_1 [8],uint param_2,long param_3,long param_4,char *param_5,
                      int param_6);
undefined8 recovered_10065500(void);
void recovered_10065510(undefined1 param_1 [8],uint param_2,long param_3,long param_4);
undefined4
recovered_10065610(undefined1 param_1 [8],int *param_2,int param_3,undefined8 param_4,
                  undefined4 param_5);
void recovered_10066a80(uint64_t *param_1,long param_2,long param_3);
void recovered_10066cd0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,int *param_4,
                       int param_5,int *param_6);
long * recovered_10066d00(long *param_1,long param_2,uint param_3,long *param_4,long param_5,
                         long param_6,long param_7);
uint128 recovered_10066e20(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5);
uint128 recovered_100670a0(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  undefined4 param_5,undefined8 param_6);
uint128 recovered_100677f0(void);
undefined4 recovered_10067840(undefined8 param_1,undefined4 param_2);
uint128 recovered_10067850(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
uint128 recovered_10067940(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
undefined8 recovered_100679c0(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4);
undefined8 recovered_10067a80(void);
long recovered_10067a90(long *param_1,uint param_2,ulong param_3,long param_4,long param_5,
                       undefined8 param_6);
double recovered_10067c20(long *param_1,long param_2);
void recovered_10067d40(double param_1,long *param_2,long param_3);
bool recovered_10067ef0(undefined1 param_1 [8],long param_2,ulong *param_3,undefined4 *param_4);
bool recovered_10067fd0(undefined1 param_1 [8],ulong *param_2,double *param_3);
bool recovered_10068110(undefined1 param_1 [8],long param_2,ulong *param_3);
bool recovered_10068210(undefined1 param_1 [8],long param_2,ulong *param_3,byte *param_4);
undefined1
recovered_100682b0(undefined1 param_1 [8],long param_2,ulong *param_3,uint *param_4,
                  undefined8 param_5,byte *param_6);
bool recovered_100683c0(undefined1 param_1 [8],long param_2,ulong *param_3,undefined4 *param_4,
                       undefined8 param_5,undefined1 *param_6);
long recovered_100684c0(long *param_1,long *param_2,long *param_3);
bool recovered_10068800(undefined1 param_1 [8],long param_2,ulong *param_3,byte *param_4);
void recovered_100688a0(long param_1,uint param_2);
void recovered_10068a80(long param_1,long param_2,undefined8 param_3,char param_4);
long recovered_10068bd0(long param_1,byte *param_2,byte *param_3,char param_4);
undefined8 recovered_100690a0(byte *param_1,byte *param_2,undefined1 *param_3);
ulong recovered_10069aa0(byte *param_1,undefined1 *param_2,char *param_3,ulong param_4);
bool recovered_10069f10(byte *param_1,byte *param_2);
long recovered_10069fa0(long param_1,char *param_2);
void recovered_1006a090(void);
void recovered_1006a0e0(undefined1 param_1 [8],long param_2,uint param_3,ulong *param_4);
void recovered_1006a230(long *param_1,long *param_2,long *param_3);
void recovered_1006a440(undefined1 param_1 [8],byte *param_2,byte *param_3,long *param_4,
                       long *param_5);
void recovered_1006c230(long *param_1,long param_2,long param_3);
uint128 recovered_1006c3f0(long *param_1,long param_2,char param_3);
void recovered_1006c4a0(long *param_1,long *param_2,undefined4 param_3);
void recovered_1006c740(long *param_1,long *param_2,long *param_3,long param_4,char param_5);
void recovered_1006c930(long *param_1,int param_2,long *param_3,long *param_4,long param_5,
                       undefined8 param_6,void *param_7,ulong param_8,ulong param_9,ulong param_10,
                       undefined8 param_11,undefined8 param_12);
long recovered_1006ce20(long *param_1,long param_2,int param_3);
void recovered_1006cea0(long *param_1,long param_2,long param_3);
undefined8 recovered_1006cff0(void);
void recovered_1006d000(long *param_1,undefined8 *param_2);
void recovered_1006d220(long *param_1,long param_2);
void recovered_1006d3a0(long *param_1,long param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9);
undefined8 recovered_1006d480(long param_1,long param_2);
long recovered_1006d570(long *param_1,undefined8 *param_2);
undefined8 recovered_1006d740(long param_1);
undefined8 recovered_1006d7e0(void);
uint128 recovered_1006d7f0(undefined1 param_1 [8],uint param_2,ulong *param_3,uint *param_4,uint param_5,
                  int param_6);
byte recovered_1006de30(undefined1 param_1 [8],ulong *param_2,undefined8 *param_3);
void recovered_1006e100(undefined1 param_1 [8],ulong *param_2,undefined8 *param_3,undefined4 param_4
                       );
undefined8 recovered_1006e420(long param_1);
void recovered_1006e620(long *param_1,long *param_2,long *param_3,long param_4,char param_5);
ulong recovered_1006e760(undefined1 param_1 [8],long param_2);
uint128 recovered_1006ea50(long *param_1,long param_2);
undefined8 recovered_1006ebc0(void);
void recovered_1006ebd0(long *param_1,long *param_2,long param_3,ulong param_4,char param_5,
                       char param_6);
long * recovered_1006ee00(long *param_1,undefined8 param_2,char param_3);
ulong * recovered_1006f070(long *param_1,long param_2,ulong param_3,char param_4,char param_5);
long * recovered_1006f270(long *param_1);
void recovered_1006f350(long *param_1,long param_2,long param_3);
void recovered_1006f3c0(undefined1 param_1 [8],long *param_2,byte *param_3,byte *param_4);
long recovered_1006f9f0(long *param_1,long param_2,long *param_3,undefined8 param_4,long *param_5);
char * recovered_1006fd60(char *param_1,char *param_2,long param_3);
undefined8 recovered_1006fe30(long param_1);
ulong recovered_1006ff50(char *param_1);
void recovered_10070000(byte *param_1,undefined1 *param_2,long param_3);
ulong * recovered_10070720(long *param_1,ulong *param_2,char param_3);
long * recovered_10070900(long param_1,long *param_2,long *param_3,byte param_4);
void recovered_10070a00(undefined1 param_1 [8],long *param_2,long *param_3,long *param_4,
                       long param_5,long *param_6,long param_7,byte param_8);
void recovered_10070bb0(long param_1,long *param_2,long param_3);
void recovered_10070d30(undefined1 param_1 [8],long param_2,long *param_3,long param_4);
void recovered_10070e60(long *param_1,long param_2,long *param_3,long param_4);
void recovered_10071600(undefined1 param_1 [8],long param_2,ulong *param_3);
ulong recovered_10072150(long param_1,long param_2,ulong param_3,ulong param_4,char *param_5,
                        undefined1 *param_6);
ulong * recovered_10072520(long *param_1,ulong *param_2);
ulong * recovered_100728c0(long *param_1,long param_2,ulong param_3,ulong param_4);
void recovered_100729d0(undefined1 param_1 [8],long param_2,ulong *param_3,ulong *param_4,
                       uint param_5,undefined4 param_6);
void recovered_100733f0(long *param_1,long param_2);
ulong recovered_100735e0(long *param_1,long *param_2,long param_3);
undefined8 recovered_10073910(long *param_1,long *param_2,long param_3);
void recovered_10073aa0(undefined1 param_1 [8],ulong *param_2,ulong *param_3);
void recovered_10074260(long *param_1,long param_2,long *param_3,undefined8 param_4,byte param_5,
                       char param_6);
undefined8 recovered_100743e0(char *param_1);
long recovered_10074480(long *param_1);
undefined8 recovered_10074500(char *param_1,byte *param_2);
ulong recovered_100745a0(undefined8 param_1,undefined8 param_2,byte *param_3,ulong param_4,
                        ulong param_5,long param_6,long param_7,byte *param_8,long param_9);
undefined8 recovered_100752d0(ulong *param_1,double *param_2,uint param_3);
byte * recovered_10075450(byte *param_1,byte *param_2);
undefined8 recovered_100754d0(undefined8 *param_1,double *param_2);
undefined8
recovered_100755f0(byte *param_1,uint *param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6);
bool recovered_10075f10(byte *param_1,byte *param_2,long param_3,char param_4);
byte * recovered_10076020(byte *param_1,byte *param_2,char *param_3);
void recovered_10076150(byte *param_1,byte *param_2);
undefined8
recovered_100761c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  byte *param_5,double *param_6);
bool recovered_100762d0(ulong *param_1,double *param_2,uint param_3);
undefined8 recovered_10077160(ulong *param_1,double *param_2,uint param_3);
ulong recovered_100772d0(long *param_1,long param_2,ulong param_3);
void recovered_10077390(void);
uint128 recovered_100773e0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5);
uint128 recovered_100775c0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
uint128 recovered_100776b0(long *param_1);
uint128 recovered_10077720(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  int param_6);
uint128 recovered_10077990(long *param_1);
undefined8 recovered_10078650(long *param_1,long *param_2,long *param_3,undefined4 *param_4);
ulong * recovered_10078890(long *param_1,ulong *param_2);
ulong recovered_10078930(long param_1);
long * recovered_100789c0(long param_1,long *param_2);
ulong recovered_10078a50(long param_1,ulong *param_2,ulong *param_3);
undefined8 recovered_10078eb0(long param_1,long *param_2);
ulong recovered_10078fc0(long param_1);
void recovered_100794b0(long *param_1);
undefined8 recovered_100795e0(void);
ulong recovered_10079630(undefined1 param_1 [8],long param_2,ulong *param_3,uint param_4,
                        ulong *param_5);
ulong recovered_10079720(long *param_1,long *param_2,long *param_3,char *param_4);
uint128 recovered_10079870(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5);
uint128 recovered_10079bf0(long *param_1);
char recovered_10079cd0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5
                       ,undefined8 param_6);
uint128 recovered_10079e00(long *param_1,int param_2,long param_3,int *param_4,int param_5,long param_6);
uint128 recovered_10079ee0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
long * recovered_1007a020(long *param_1,long param_2,undefined1 param_3,undefined4 param_4,
                         undefined4 param_5);
double recovered_1007a250(long param_1);
uint128 recovered_1007a310(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5);
uint128 recovered_1007a820(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  undefined8 param_6);
ulong recovered_1007b120(long *param_1,long *param_2,long param_3,long param_4);
ulong * recovered_1007b260(undefined1 param_1 [8],uint param_2,ulong *param_3);
bool recovered_1007b3a0(long *param_1,long *param_2,ulong *param_3,char param_4);
void recovered_1007b5a0(long *param_1,long param_2,ulong param_3);
ulong * recovered_1007b6a0(long *param_1,long *param_2);
uint128 recovered_1007ba70(long *param_1,uint param_2,long param_3,int *param_4,int param_5,long param_6);
uint128 recovered_1007bfb0(long *param_1);
uint128 recovered_1007c020(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
uint128 recovered_1007c210(long *param_1,uint param_2,long *param_3,undefined4 *param_4,int param_5,
                  long param_6);
uint128 recovered_1007c3d0(undefined1 param_1 [8],uint param_2,long param_3,uint *param_4,uint param_5,
                  uint param_6);
void recovered_1007ce30(long param_1,long param_2,long *param_3);
uint128 recovered_1007cf30(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,long param_6);
undefined4
recovered_1007d250(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
undefined4
recovered_1007d3a0(undefined1 param_1 [8],int param_2,ulong *param_3,int *param_4,int param_5);
uint128 recovered_1007d550(undefined1 param_1 [8],uint param_2,long param_3,uint *param_4,int param_5);
undefined4
recovered_1007d9f0(undefined1 param_1 [8],int param_2,ulong *param_3,undefined8 *param_4,int param_5
                  ,int param_6);
undefined8 recovered_1007db20(void);
byte recovered_1007db30(byte *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4,
                       long param_5);
undefined8 recovered_1007e910(undefined8 *param_1,byte *param_2,long param_3);
uint recovered_1007ebd0(ulong *param_1,uint param_2,char param_3);
uint recovered_1007ee00(undefined8 *param_1,uint param_2);
uint recovered_100805e0(byte *param_1,byte *param_2);
bool recovered_10081350(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_10081400(char *param_1,double *param_2,undefined8 *param_3);
ulong recovered_10081770(byte *param_1,byte *param_2,int param_3,double *param_4);
uint recovered_10081f10(long *param_1,uint param_2,ulong *param_3,long *param_4,uint param_5,
                       long param_6);
undefined4
recovered_10081fb0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5,uint param_6);
void recovered_10082150(long *param_1,long *param_2,long param_3,undefined8 param_4,long param_5,
                       uint param_6);
uint128 recovered_100822e0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
uint128 recovered_10082510(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  long param_6);
uint128 recovered_10082710(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
undefined4
recovered_10082b90(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  ulong param_6);
char recovered_10082d40(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5
                       ,uint param_6);
uint128 recovered_10083610(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  uint param_6);
uint recovered_100838e0(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                       int param_6);
uint recovered_10083d40(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                       undefined8 param_6);
uint128 recovered_10084140(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  ulong param_6);
uint recovered_10084690(long *param_1,int param_2,long param_3,undefined8 param_4,int param_5,
                       long param_6);
long recovered_10084880(long *param_1,int param_2,long param_3);
ulong * recovered_10084a00(long *param_1,long param_2);
ulong * recovered_10084af0(long *param_1,undefined8 *param_2);
long * recovered_10084d50(undefined1 param_1 [8],long param_2,long *param_3,char param_4);
undefined8
recovered_10085020(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  char param_6);
void recovered_100852d0(long *param_1,long *param_2,long *param_3,long *param_4);
uint recovered_10085330(long param_1,long param_2);
undefined8
recovered_10085430(long *param_1,undefined8 *param_2,ulong *param_3,uint param_4,long *param_5,
                  long *param_6);
undefined8 recovered_100859e0(long *param_1,int param_2);
undefined8 recovered_10085b00(void);
uint128 recovered_10085b10(long *param_1);
uint128 recovered_10085b30(undefined1 param_1 [8],int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_10085c40(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  int param_6);
uint128 recovered_10085dc0(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  int param_6);
uint128 recovered_100862e0(undefined1 param_1 [8],int param_2,long param_3);
uint128 recovered_10086530(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
void recovered_10086580(long *param_1,char *param_2,long *param_3);
ulong * recovered_100869a0(undefined1 param_1 [8],char *param_2);
void recovered_100873e0(undefined1 param_1 [8],char *param_2,ulong *param_3,uint param_4);
undefined8 recovered_100879d0(void);
void recovered_100879e0(long *param_1,long param_2,long param_3);
void recovered_10087b00(long *param_1,long param_2,long param_3,uint param_4,byte *param_5,
                       byte *param_6);
undefined8 recovered_10087d40(byte *param_1,byte *param_2,undefined8 *param_3,long *param_4);
bool recovered_10088000(long param_1,char *param_2);
ulong recovered_10088100(long param_1,long *param_2);
ulong recovered_100882b0(long param_1,uint param_2,uint param_3,char param_4);
void recovered_10088510(long param_1,char *param_2);
void recovered_10088770(long *param_1,long *param_2,uint param_3);
void recovered_100891e0(long param_1,ulong *param_2,undefined4 param_3);
void recovered_10089460(long param_1,byte *param_2);
ulong recovered_10089560(long param_1,ulong param_2);
undefined8 recovered_10089640(long *param_1,uint param_2);
ulong recovered_10089710(long *param_1,ulong param_2,byte *param_3,byte *param_4,int *param_5,
                        uint param_6,int *param_7);
uint recovered_1008b400(byte *param_1,byte *param_2,uint param_3);
int recovered_1008b910(byte *param_1,byte *param_2,uint param_3,int *param_4);
undefined8
recovered_1008bd90(long *param_1,uint param_2,byte *param_3,byte *param_4,int *param_5,uint param_6,
                  int *param_7);
undefined8 recovered_1008c070(undefined8 *param_1,byte *param_2,undefined8 *param_3,long *param_4);
undefined8
recovered_1008c120(long *param_1,uint param_2,long param_3,long param_4,int param_5,ulong param_6,
                  int *param_7);
ulong recovered_1008c280(long param_1,uint param_2,byte *param_3,byte *param_4,ulong param_5,
                        ulong param_6);
ulong recovered_1008c780(long param_1,uint param_2,char *param_3,byte *param_4,ulong param_5,
                        ulong param_6);
ulong recovered_1008cd10(long param_1,uint param_2,char *param_3,undefined1 *param_4,uint *param_5);
ulong recovered_1008da90(char *param_1);
bool recovered_1008dc80(uint param_1,byte *param_2,undefined1 *param_3,ulong param_4,
                       undefined8 param_5,uint param_6);
ulong recovered_1008e650(undefined **param_1,undefined **param_2,char *param_3,uint param_4,
                        undefined1 *param_5,byte *param_6,undefined4 *param_7);
int recovered_10090420(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4,int param_5);
void recovered_10090620(long *param_1,long param_2,long *param_3,undefined4 param_4);
void recovered_10090c90(undefined1 param_1 [8],long param_2,uint param_3,ulong *param_4);
undefined1 * recovered_10091d70(char *param_1);
undefined8 recovered_10091dd0(byte *param_1,long param_2);
bool recovered_10092060(byte *param_1);
void recovered_10092660(undefined1 param_1 [8],long param_2,ulong param_3,byte *param_4,
                       char *param_5,byte *param_6);
double recovered_10092950(long param_1,long param_2,uint param_3);
ulong * recovered_10092e20(byte *param_1,undefined1 param_2 [8],char *param_3);
ulong recovered_10093050(long param_1,long param_2,uint param_3);
ulong recovered_10093510(long param_1,long param_2,uint param_3,char *param_4);
undefined8
recovered_100936a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  double *param_5);
ulong recovered_100937d0(long param_1,uint param_2,int param_3,int param_4,int *param_5,int *param_6
                        );
undefined8 recovered_100942e0(undefined8 *param_1,byte *param_2,long param_3,long *param_4);
void recovered_10094b80(long param_1,uint param_2,byte *param_3,int param_4,int param_5);
ulong recovered_10094c40(long param_1,uint param_2);
void recovered_10095020(undefined1 param_1 [8],char *param_2);
void recovered_100950b0(undefined1 param_1 [8],char *param_2,ulong *param_3,ulong *param_4,
                       ulong *param_5);
undefined8 recovered_10095720(long param_1,long *param_2);
uint128 recovered_10095800(long *param_1);
uint128 recovered_10095820(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
uint128 recovered_10095950(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
undefined4
recovered_10095a10(undefined1 param_1 [8],int param_2,long param_3,long param_4,ulong param_5,
                  ulong *param_6);
uint128 recovered_10096150(long *param_1,int param_2,long param_3);
uint128 recovered_100961c0(long *param_1,int param_2,long param_3,undefined4 *param_4,int param_5);
undefined8 recovered_100962e0(void);
ulong recovered_100962f0(long param_1,long param_2,long *param_3);
void recovered_10096430(long param_1,ulong param_2);
void recovered_10096470(undefined1 param_1 [8],long param_2);
uint128 recovered_100967e0(long *param_1,long param_2,long param_3);
uint128 recovered_10096910(long *param_1);
uint128 recovered_10096930(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
undefined8 recovered_10096b60(void);
bool recovered_10096b70(undefined1 param_1 [8],long param_2,ulong *param_3,uint param_4,
                       ulong *param_5);
bool recovered_10096c10(undefined1 param_1 [8],long *param_2,ulong *param_3,undefined1 *param_4);
void recovered_10096d60(long *param_1,long *param_2);
bool recovered_10097420(undefined1 param_1 [8],long param_2,ulong *param_3,uint *param_4,
                       char param_5,undefined8 param_6);
ulong * recovered_10097520(long *param_1,ulong *param_2,byte param_3);
uint128 recovered_10097880(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  long param_6);
uint128 recovered_10097c20(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
uint128 recovered_10097c30(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
uint128 recovered_10097f00(long *param_1);
uint128 recovered_10097f20(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5,
                  uint param_6);
uint128 recovered_10098260(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
uint128 recovered_100982e0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
uint128 recovered_10098380(long *param_1,int param_2,long param_3);
undefined4
recovered_10098470(long *param_1,int param_2,long param_3,undefined8 param_4,int param_5,
                  long param_6);
uint128 recovered_10098600(long *param_1,char *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
bool recovered_10098770(long *param_1,char *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6);
uint128 recovered_10098ab0(long *param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6);
uint128 recovered_10098bc0(long *param_1,uint param_2,long *param_3,undefined4 *param_4,int param_5,
                  long param_6);
uint128 recovered_10098d50(long *param_1,undefined8 param_2,void *param_3,undefined1 param_4);
undefined8 recovered_10098de0(void);
double recovered_10098df0(long param_1,uint param_2);
undefined8 recovered_10098f10(void);
void recovered_10098f20(long param_1,uint param_2,byte param_3,undefined8 *param_4);
void recovered_10099340(undefined8 *param_1,ulong param_2,ulong param_3);
long * recovered_10099540(long param_1,long *param_2,uint param_3);
uint128 recovered_10099d10(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,int *param_4,
                  int param_5);
undefined4
recovered_10099f10(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,undefined8 param_6);
uint128 recovered_1009a0b0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  int param_6);
uint128 recovered_1009a410(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  uint param_6);
long recovered_1009aa00(undefined1 param_1 [8],uint param_2,ulong *param_3,long *param_4,int param_5
                       );
byte recovered_1009abb0(long *param_1,byte *param_2,ulong param_3,long *param_4,long *param_5);
uint128 recovered_1009b360(long *param_1,undefined8 *param_2);
int recovered_1009b410(char *param_1);
byte recovered_1009b4b0(long *param_1,undefined8 *param_2,char *param_3,ulong param_4,char param_5);
ulong recovered_1009b750(long *param_1,undefined8 *param_2,char *param_3,ulong param_4,
                        undefined8 param_5,undefined4 param_6);
long recovered_1009cd80(long *param_1,long param_2,long param_3,int param_4);
char * recovered_1009cea0(long *param_1,char *param_2,ulong param_3,byte param_4,char param_5);
void recovered_1009d1e0(long *param_1,long param_2);
bool recovered_1009d280(uint param_1,int param_2);
void recovered_1009d440(undefined8 *param_1,long param_2,long param_3,byte param_4);
undefined8 recovered_1009d4f0(void);
undefined1 * recovered_1009d500(long *param_1,long *param_2,int param_3);
void recovered_1009db60(undefined1 param_1 [8],long *param_2);
void recovered_1009dcc0(long *param_1,long param_2);
uint128 recovered_1009dd30(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  uint param_6);
undefined8
recovered_1009e390(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined8 recovered_100a0c60(long param_1,long *param_2,long *param_3,long *param_4,long *param_5);
long * recovered_100a0ce0(undefined8 *param_1,char param_2);
uint recovered_100a0f70(long param_1);
undefined8 recovered_100a1330(long param_1,long *param_2,long *param_3,long *param_4,long *param_5);
bool recovered_100a25e0(long param_1,long param_2);
uint128 recovered_100a26b0(long *param_1);
bool recovered_100a26d0(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                       int param_6);
uint128 recovered_100a28c0(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6);
undefined4
recovered_100a2a00(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  uint param_6);
undefined8 recovered_100a2b30(void);
long recovered_100a2b40(long *param_1,long *param_2,long *param_3);
ulong recovered_100a2d90(long *param_1,long *param_2);
long * recovered_100a3360(long param_1,int param_2);
uint128 recovered_100a34b0(long *param_1,long param_2,int param_3,ulong *param_4,long param_5);
bool recovered_100a3800(long *param_1,long *param_2,long *param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 *param_6);
undefined8 recovered_100a3940(long *param_1,long param_2,long *param_3,undefined8 param_4);
ulong recovered_100a3a10(long *param_1,long param_2,long *param_3,long param_4,char param_5,
                        undefined1 *param_6);
undefined8 recovered_100a3b70(long *param_1,long *param_2,undefined8 *param_3);
bool recovered_100a3f70(long *param_1,long *param_2,long *param_3);
void recovered_100a4250(long *param_1,long *param_2,long *param_3);
uint128 recovered_100a4480(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,int param_5,
                  long param_6);
uint128 recovered_100a4660(undefined1 param_1 [8],int param_2,long param_3,int *param_4,long *param_5,
                  long param_6);
uint128 recovered_100a4d00(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6);
undefined8 recovered_100a4e30(void);
uint128 recovered_100a4e40(long *param_1,long param_2,uint param_3);
uint128 recovered_100a4fe0(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5);
undefined4
recovered_100a5410(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6);
uint128 recovered_100a54a0(long *param_1,uint param_2,ulong *param_3,long *param_4,uint param_5);
undefined4
recovered_100a56a0(undefined1 param_1 [8],undefined8 param_2,long param_3,int *param_4,int param_5,
                  long param_6);
long * recovered_100a57d0(long *param_1,long param_2,undefined1 param_3,undefined4 param_4,
                         undefined4 param_5);
uint128 recovered_100a5850(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5);
undefined4 recovered_100a5c30(long *param_1,int param_2,long param_3);
uint128 recovered_100a5c80(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  long param_6);
uint128 recovered_100a5eb0(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
uint128 recovered_100a6610(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                  long param_6);
uint128 recovered_100a67f0(undefined1 param_1 [8],int param_2,long param_3,int *param_4,int param_5,
                  int param_6);
bool recovered_100a6a90(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5
                       ,int param_6);
uint128 recovered_100a6c80(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
undefined8 recovered_100a6cd0(void);
void recovered_100a6ce0(long param_1,long param_2,long param_3);
undefined8 recovered_100a6d30(void);
undefined8 recovered_100a6d40(void);
uint128 recovered_100a6d50(undefined1 param_1 [8],int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
undefined8 recovered_100a6e30(void);
uint128 recovered_100a6e40(long *param_1);
uint128 recovered_100a6e60(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,uint param_5,
                  undefined8 param_6);
undefined4
recovered_100a7460(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
uint128 recovered_100a75a0(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5);
uint128 recovered_100a7730(long *param_1,uint param_2,long param_3);
uint128 recovered_100a7780(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5,ulong param_6);
undefined4
recovered_100a7b40(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
uint128 recovered_100a7bc0(long *param_1,uint param_2,ulong *param_3,long *param_4,uint param_5,long param_6
                  );
undefined4
recovered_100a7ca0(undefined1 param_1 [8],uint param_2,long param_3,int *param_4,undefined8 param_5,
                  uint param_6);
char * recovered_100a7df0(undefined1 param_1 [8],long param_2,undefined8 *param_3);
undefined8 * recovered_100a81b0(undefined1 param_1 [8],uint param_2,ulong *param_3);
ulong recovered_100a8380(long *param_1,long *param_2);
undefined4 recovered_100a8520(long *param_1,long param_2);
void recovered_100a8dc0(long *param_1);
undefined8 *
recovered_100a8e40(undefined1 param_1 [8],undefined8 *param_2,uint param_3,ulong *param_4,
                  uint param_5);
undefined8 * recovered_100a9910(long *param_1,undefined8 *param_2,long param_3);
ulong * recovered_100a9a20(long *param_1,undefined8 *param_2,ulong *param_3);
ulong * recovered_100a9b50(long *param_1,ulong *param_2);
undefined4 recovered_100a9ca0(long *param_1,long param_2);
uint128 recovered_100a9d10(undefined1 param_1 [8],int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
undefined4
recovered_100a9f40(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                  uint param_6);
uint128 recovered_100aa180(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6);
uint128 recovered_100aa1c0(long *param_1,int param_2,long param_3,undefined4 *param_4,int param_5,
                  long param_6);
long recovered_100aa290(long *param_1,int param_2,long param_3);
uint128 recovered_100aa3f0(undefined1 param_1 [8],long param_2,long param_3);
uint128 recovered_100aa540(long *param_1,ulong *param_2,long param_3,long param_4,long param_5);
uint128 recovered_100aa880(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  int param_5);
void recovered_100ac080(long *param_1,long param_2,long *param_3,long param_4);
uint128 recovered_100ac230(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,int *param_4,
                  int param_5);
char recovered_100ac360(undefined1 param_1 [8],int param_2,long param_3,uint *param_4,int param_5,
                       undefined8 param_6);
uint128 recovered_100ac940(long *param_1,int param_2,long param_3);
ulong recovered_100acb90(undefined1 param_1 [8],long *param_2,int param_3,ulong *param_4);
undefined8 recovered_100ad0f0(void);
ulong * recovered_100ad100(undefined1 param_1 [8],uint param_2,ulong *param_3);
ulong recovered_100ad160(long *param_1,long *param_2,ulong *param_3,ulong *param_4,uint param_5);
ulong * recovered_100ae830(long *param_1,ulong *param_2);
long * recovered_100ae980(long *param_1,ulong *param_2,ulong *param_3);
undefined8 recovered_100aea30(void);
uint128 recovered_100aea40(long *param_1);
uint128 recovered_100aeb30(long *param_1);
uint128 recovered_100aeb50(undefined1 param_1 [8],int param_2,long param_3,int *param_4,int param_5,
                  long param_6);
undefined4
recovered_100aed40(undefined1 param_1 [8],int param_2,ulong *param_3,int *param_4,int param_5,
                  int param_6);
uint128 recovered_100aef00(undefined1 param_1 [8],int param_2,ulong *param_3,int *param_4,int param_5);
long * recovered_100aeff0(long *param_1);
undefined8 recovered_100af0f0(void);
undefined8 recovered_100af100(void);
uint128 recovered_100af110(long *param_1,uint param_2,ulong *param_3,long *param_4,uint param_5,long param_6
                  );
int recovered_100af190(long *param_1,int param_2);
uint128 recovered_100af290(undefined1 param_1 [8],undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint param_5);
uint128 recovered_100af820(long *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6);
uint128 recovered_100af950(undefined1 param_1 [8],int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_100afc80(long *param_1);
long * recovered_100afcc0(long *param_1);
undefined8
recovered_100afde0(undefined1 param_1 [8],uint param_2,ulong *param_3,long *param_4,ulong *param_5,
                  undefined8 *param_6);
undefined8 recovered_100afed0(void);
long recovered_100afee0(long *param_1,long *param_2);
undefined8 recovered_100affe0(long param_1,undefined4 *param_2,byte *param_3);
void recovered_100b0080(char *param_1,char *param_2,undefined1 *param_3);
void recovered_100b0250(undefined8 param_1,char *param_2,undefined1 *param_3);
void recovered_100b04c0(long param_1,undefined1 *param_2);
bool recovered_100b0570(byte *param_1,int *param_2,byte *param_3);
ulong recovered_100b0980(long param_1,long param_2);
long * recovered_100b0ab0(long param_1,long param_2);
long recovered_100b0b30(ulong *param_1);
bool recovered_100b0c40(long param_1);
void recovered_100b0e00(long param_1,long param_2);
bool recovered_100b0e90(long param_1,char *param_2);
ulong recovered_100b0ff0(ulong param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5,
                        ulong *param_6,undefined1 *param_7,char *param_8,ulong param_9,
                        char *param_10,ulong param_11,undefined *param_12,undefined8 param_13,
                        byte *param_14,byte param_15,byte *param_16);
ulong recovered_100b2ab0(undefined8 *param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
void recovered_100b3010(undefined8 *param_1,long param_2,ulong param_3);
ulong recovered_100b3140(long param_1,byte *param_2,uint param_3,char param_4,char *param_5,
                        char *param_6,byte *param_7,long param_8);
ulong recovered_100b38d0(undefined8 *param_1,uint param_2,ushort param_3,long param_4,ulong param_5,
                        long param_6,ulong param_7,undefined1 *param_8,ulong param_9,ulong *param_10
                        ,char *param_11,ulong param_12,undefined *param_13,undefined8 param_14);
ulong recovered_100b3cc0(long param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_100b3eb0(char *param_1);
ulong recovered_100b3fe0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
undefined8 recovered_100b4220(long param_1);
bool recovered_100b4390(long param_1,ulong param_2,long param_3,long param_4,long *param_5,
                       char *param_6,ulong param_7);
undefined8 recovered_100b43f0(long param_1,ulong *param_2);
bool recovered_100b4490(char *param_1);
bool recovered_100b44d0(long param_1,int param_2,uint param_3,uint param_4);
undefined8 recovered_100b4690(undefined8 *param_1,char param_2,uint *param_3);
bool recovered_100b4be0(long param_1,long param_2,uint param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,long param_7,ushort param_8);
void recovered_100b4d80(undefined1 *param_1,int param_2,int param_3,uint param_4,ulong param_5,
                       uint param_6);
undefined4 * recovered_100b4e90(undefined4 *param_1,uint param_2,undefined4 param_3);
bool recovered_100b4f60(ushort *param_1,uint param_2,ushort param_3,uint *param_4,char *param_5);
undefined8
recovered_100b5150(undefined8 *param_1,undefined8 *param_2,uint param_3,ushort param_4,long param_5,
                  char *param_6,ulong param_7);
undefined8
recovered_100b5640(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5);
ulong recovered_100b5730(long param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5);
ulong recovered_100b5750(long *param_1,long param_2,ulong param_3);
ulong recovered_100b5950(long param_1,byte *param_2,long param_3,char param_4,char *param_5,
                        ulong param_6);
void recovered_100b5db0(long *param_1);
bool recovered_100b5e10(long param_1,ulong *param_2,uint *param_3);
ulong recovered_100b5f70(long param_1,ulong param_2);
bool recovered_100b6160(long param_1,long param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6,undefined4 param_7,byte param_8,long param_9,
                       uint param_10);
undefined8
recovered_100b64b0(long param_1,long param_2,uint param_3,uint param_4,ushort param_5,ushort param_6
                  ,uint *param_7,uint *param_8,undefined1 *param_9,long *param_10,short *param_11);
ulong recovered_100b6610(long *param_1,char *param_2,ulong param_3);
ulong recovered_100b6b90(long *param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
undefined8 recovered_100b6cd0(long param_1,ulong param_2,long param_3,long param_4,long *param_5);
void recovered_100b6f20(long param_1,long param_2,byte *param_3,long param_4,ulong *param_5);
long recovered_100b96e0(long *param_1,long param_2,long *param_3,undefined8 param_4);
ulong * recovered_100b97d0(long *param_1,byte param_2);
void recovered_100b9950(long *param_1);
long * recovered_100b9a00(long *param_1,long param_2);
void recovered_100b9b00(long *param_1,long param_2,char *param_3);
byte recovered_100b9c50(undefined1 param_1 [8],void *param_2,ulong param_3,uint *param_4);
bool recovered_100ba060(byte *param_1);
void recovered_100ba500(long param_1,byte *param_2,byte *param_3,uint param_4);
void recovered_100bb230(byte *param_1,long param_2);
void recovered_100bf4e0(long param_1,uint param_2,uint param_3,int *param_4,uint param_5,
                       undefined1 *param_6,int param_7,int param_8);
void recovered_100bf620(long param_1,int *param_2,long param_3,undefined8 *param_4,int *param_5,
                       int *param_6);
void recovered_100c0740(long param_1,long param_2,int param_3);
undefined8 recovered_100c0930(long param_1,byte *param_2,ulong param_3);
char * recovered_100c0bc0(long param_1,byte *param_2);
bool recovered_100c1400(byte *param_1);
void recovered_100c1b40(long param_1,int *param_2,long param_3,int *param_4,int *param_5,
                       int *param_6,uint param_7);
void recovered_100c4c50(byte *param_1,char *param_2);
void recovered_100c4ec0(long param_1,int *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       int param_6,int param_7);
byte recovered_100c4f30(byte *param_1);
int recovered_100c5220(long param_1,uint param_2,byte *param_3,int param_4,int param_5);
void recovered_100c5330(long param_1,uint *param_2);
void recovered_100c57b0(long param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,
                       uint param_5,int param_6,int *param_7);
void recovered_100c5950(ulong param_1,long param_2,undefined4 *param_3,byte *param_4,int param_5);
undefined4 recovered_100c6250(byte *param_1,undefined4 param_2);
ulong recovered_100c6680(long param_1,uint param_2);
void recovered_100c6780(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
void recovered_100c6870(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,char param_7,int param_8,int *param_9);
void recovered_100c6af0(long param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7);
void recovered_100c6cc0(char *param_1,char *param_2,undefined1 *param_3);
ulong recovered_100c7040(long param_1,uint param_2,undefined1 *param_3);
void recovered_100c74e0(long param_1,int *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       int param_6,int param_7);
ulong recovered_100c8160(long param_1,uint param_2,int param_3,undefined8 *param_4,long param_5,
                        long param_6,int *param_7);
void recovered_100c8450(long param_1,long param_2,undefined4 param_3);
void recovered_100c8530(long param_1,uint param_2,int param_3,int param_4,char *param_5,int *param_6
                       );
void recovered_100c87f0(long param_1,long param_2,undefined4 *param_3,uint param_4,int param_5,
                       int param_6);
ulong recovered_100c8a90(long param_1,uint param_2,int param_3,uint param_4,int *param_5);
undefined4 recovered_100c8b90(long param_1,uint param_2,int param_3,int *param_4);
ulong recovered_100c8ea0(long param_1,uint param_2,int param_3,uint param_4,int *param_5);
int recovered_100ca7a0(byte *param_1);
bool recovered_100ca9d0(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_100cab30(byte *param_1);
void recovered_100cad00(long param_1,long param_2);
void recovered_100cb2f0(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                       char param_7);
int recovered_100cb4e0(long param_1,ulong param_2,int param_3,int param_4,char *param_5);
bool recovered_100cbf30(long param_1,uint param_2,uint param_3,int param_4);
uint recovered_100cc010(long param_1,uint param_2,uint param_3,int param_4,uint param_5);
char * recovered_100cc280(long param_1,byte *param_2);
bool recovered_100cc370(char *param_1,char *param_2,byte *param_3,undefined1 *param_4);
uint recovered_100cc550(long param_1,int param_2);
void recovered_100cc600(long param_1,uint param_2,char *param_3,int param_4,int *param_5,int param_6
                       );
void recovered_100cc7c0(long param_1,uint param_2,int param_3,long param_4,long param_5);
int recovered_100ccad0(long param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6);
int recovered_100cd5b0(long param_1,uint param_2,uint param_3,int param_4,char param_5);
void recovered_100cd820(long param_1,byte *param_2,long param_3,char *param_4,long param_5);
byte * recovered_100ceb60(byte *param_1,byte *param_2,byte *param_3);
ulong recovered_100cec90(byte *param_1,byte *param_2,int param_3,long param_4,int *param_5,
                        int param_6,uint param_7);
undefined8 recovered_100cf380(byte *param_1,byte *param_2,int param_3,int *param_4);
undefined8 recovered_100cf680(byte *param_1,byte *param_2,int param_3,undefined4 *param_4);
undefined8 recovered_100cfcb0(undefined8 *param_1,byte *param_2,double *param_3);
bool recovered_100cffa0(byte *param_1,int param_2,char *param_3);
int recovered_100d0480(byte *param_1);
ulong recovered_100d06c0(long param_1,uint param_2);
void recovered_100d0d00(long param_1,byte *param_2,int param_3,undefined4 *param_4);
void recovered_100d1020(long param_1,char *param_2,int param_3,undefined4 *param_4);
uint recovered_100d1210(char *param_1);
void recovered_100d1330(long param_1,uint *param_2);
ulong recovered_100d15d0(long param_1,uint param_2,long param_3);
bool recovered_100d18c0(long param_1,uint param_2,int param_3,char *param_4,ulong param_5,
                       void *param_6);
void recovered_100d1a10(long param_1,long param_2,byte *param_3,char *param_4);
ulong recovered_100d1fd0(long param_1);
void recovered_100d21e0(byte *param_1,byte *param_2,byte *param_3);
void recovered_100d24e0(byte *param_1,byte *param_2,char *param_3,char *param_4);
bool recovered_100d2570(long param_1);
void recovered_100d2630(void);
undefined8 recovered_100d26d0(long param_1,ulong param_2,char *param_3);
bool recovered_100d2830(long param_1,byte *param_2);
void recovered_100d28f0(byte *param_1);
void recovered_100d29f0(char *param_1,byte *param_2,ulong param_3);
undefined8 recovered_100d2c60(void);
undefined1 recovered_100d2cb0(long *param_1);
void recovered_100d2fd0(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_100d2ff0(long param_1);
void recovered_100d3180(long param_1);
void recovered_100d32d0(long param_1);
undefined8 recovered_100d33e0(long param_1,long param_2);
void recovered_100d3620(byte *param_1);
void recovered_100d38a0(byte *param_1,byte *param_2,uint param_3);
ulong recovered_100d3d80(byte *param_1,byte *param_2,char *param_3);
void recovered_100d4000(long param_1,byte *param_2);
uint128 recovered_100d4130(long param_1);
int * recovered_100d41e0(long param_1,int param_2,int param_3);
ulong recovered_100d4660(long param_1,char *param_2,int param_3,int *param_4);
void recovered_100d4ae0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       double *param_5,double *param_6);
ulong recovered_100d4d90(long param_1,uint param_2);
long * recovered_100d4f30(long param_1,uint param_2);
void recovered_100d50d0(byte *param_1,long param_2);
ulong recovered_100d5490(long param_1,long param_2);
undefined8 recovered_100d5a40(long param_1,long param_2);
undefined8 recovered_100d5c70(long param_1,long param_2);
undefined8 recovered_100d5f10(byte *param_1,long param_2,byte *param_3);
void recovered_100d6180(byte *param_1,long param_2,char param_3);
ulong recovered_100d63e0(long *param_1,long param_2,long param_3,uint *param_4,undefined4 *param_5,
                        uint param_6);
void recovered_100d6660(undefined1 param_1 [8],long param_2,uint param_3,ulong *param_4,char param_5
                       );
ulong recovered_100d6a10(long *param_1,long *param_2,long *param_3,int *param_4,uint param_5);
bool recovered_100d6c70(long *param_1,long *param_2);
ulong recovered_100d6f40(long *param_1,long param_2,long *param_3,int *param_4,uint param_5);
void recovered_100d7310(long *param_1,long param_2);
void recovered_100d74e0(long *param_1,ulong param_2,int param_3,undefined8 param_4,int param_5);
void recovered_100d7910(long *param_1,long param_2,int param_3,undefined8 param_4,uint param_5);
void recovered_100d7b40(long param_1,long param_2,long param_3,uint *param_4,uint param_5);
undefined8 recovered_100d7e50(undefined8 *param_1);
ulong recovered_100d85c0(long param_1,uint *param_2,uint *param_3);
ulong recovered_100dbaf0(long *param_1);
ulong recovered_100dbb70(long param_1,char *param_2,ulong param_3);
undefined4 recovered_100dbe50(long param_1,int param_2,long param_3,ulong param_4);
bool recovered_100dc070(long *param_1,byte *param_2,ulong param_3);
void recovered_100dd2a0(uint *param_1);
ulong recovered_100dd420(byte *param_1,ulong param_2,long param_3,long param_4);
ulong recovered_100de440(uint *param_1,byte param_2);
undefined4 recovered_100de9e0(long param_1);
undefined8 recovered_100dea50(long param_1,long param_2,uint param_3,char param_4);
undefined2 recovered_100debe0(long *param_1,long param_2);
byte recovered_100ded00(ulong *param_1,long param_2,long param_3);
bool recovered_100dfed0(int *param_1);
undefined8
recovered_100dff40(long param_1,ulong param_2,byte *param_3,byte *param_4,ulong param_5,
                  undefined8 param_6);
double recovered_100e00d0(byte *param_1);
ulong recovered_100e0600(double width,double height,long context,uint a,uint b,int c,uint d,void *e,
                        void *f);
ulong recovered_100e1de0(long param_1,byte *param_2,byte *param_3,long param_4,ulong *param_5,
                        ulong param_6,byte param_7,char param_8);
undefined8 recovered_100e2440(long *param_1,long param_2,ulong param_3);
undefined8 recovered_100e2550(ulong *param_1,long param_2);
undefined8 recovered_100e2810(long *param_1,uint param_2,long param_3,undefined8 param_4);
char * recovered_100e2ac0(long *param_1,uint param_2,void *param_3,long param_4);
ulong recovered_100e2c00(byte *param_1,undefined8 *param_2);
undefined8 recovered_100e3a80(long param_1,long *param_2,ulong param_3,char param_4,uint *param_5);
double recovered_100e4110(double param_1);
double recovered_100e4260(double param_1);
void recovered_100e43b0(double param_1,double param_2,double param_3,double param_4,long param_5);
void recovered_100e4510(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,long param_8,char param_9,char param_10);
void recovered_100e55e0(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,double param_8,long param_9);
void recovered_100e56f0(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,double param_8,long param_9,int param_10);
ulong recovered_100e5a10(double param_1,double param_2);
uint recovered_100e5c00(long *param_1);
ulong recovered_100e5d50(long param_1,long param_2,uint *param_3,long param_4,undefined8 *param_5,
                        int *param_6,undefined8 *param_7);
long recovered_100e72b0(long *param_1,ulong param_2);
ulong recovered_100e7310(int *param_1);
void recovered_100e7370(long *param_1,long *param_2,ulong param_3);
uint recovered_100e7420(long param_1,long param_2,long param_3,ulong *param_4,ulong param_5,
                       uint param_6,int *param_7);
undefined8
recovered_100e8f10(long param_1,long param_2,long param_3,long param_4,long *param_5,uint param_6,
                  int param_7,uint param_8);
int recovered_100e9230(long param_1,ulong param_2);
uint recovered_100e92c0(long *param_1,uint param_2);
int recovered_100e9360(long *param_1);
bool recovered_100e94a0(long *param_1,long param_2,uint param_3,int param_4);
undefined8 recovered_100e9960(long *param_1,long param_2,uint param_3);
uint recovered_100ea120(long *param_1,uint *param_2);
uint recovered_100ea270(long *param_1,long param_2);
ulong recovered_100ea410(long param_1,uint param_2,uint param_3,long param_4);
undefined8 recovered_100ea750(long param_1,long param_2,long param_3,uint param_4,char param_5);
ushort recovered_100ea8d0(long *param_1);
void recovered_100ea970(long *param_1,ushort param_2);
void recovered_100ea9d0(long *param_1,undefined1 param_2);
void recovered_100eaa30(undefined1 param_1 [8]);
double * recovered_100eaba0(double *param_1,long param_2,long *param_3);
void recovered_100eadd0(long param_1,ulong param_2,undefined8 param_3,uint param_4);
void recovered_100eb440(long param_1,uint param_2,int param_3,char *param_4,int param_5,uint param_6
                       );
void recovered_100eb670(long param_1,uint param_2,uint param_3,byte param_4,byte param_5,
                       byte param_6,byte param_7);
void recovered_100eb7a0(long param_1,long *param_2,long param_3,ulong param_4);
void recovered_100ebab0(long param_1,double param_2,long param_3,ulong param_4,ulong param_5,
                       int param_6);
void recovered_100eec30(long param_1,long param_2,long param_3,uint param_4,int param_5,
                       char *param_6,uint param_7);
void recovered_100eee50(long param_1,long param_2,uint *param_3,long *param_4);
uint recovered_100ef510(double param_1,double param_2,double *param_3);
int recovered_100ef880(long param_1,uint param_2,byte *param_3,byte *param_4,int param_5,
                      undefined4 param_6);

/* Original analysis identifiers for manual recovery units. */
