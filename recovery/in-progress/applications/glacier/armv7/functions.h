/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "armv7-recovery.h"
#include "cpu.h"
#include "arm_exclusive.h"
#include "coprocessors.h"
#include "neon.h"
static inline __attribute__((always_inline)) uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %0,sp":"=r"(value));return value;}
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
unsigned int __umodsi3(unsigned int a,unsigned int b);
void * memchr(const void *p,int c,unsigned long size);
char * strcpy(char *dst,const char *src);
unsigned long strcspn(const char *src,const char *reject);
#define UINT_40010800 (*(uint32_t *)(uintptr_t)0x40010800U)
#define UINT_40010804 (*(uint32_t *)(uintptr_t)0x40010804U)
#define UINT_40010808 (*(uint32_t *)(uintptr_t)0x40010808U)
#define UINT_4001080c (*(uint32_t *)(uintptr_t)0x4001080cU)
#define UINT_40010810 (*(uint32_t *)(uintptr_t)0x40010810U)
#define UINT_40010814 (*(uint32_t *)(uintptr_t)0x40010814U)
#define UINT_40010818 (*(uint32_t *)(uintptr_t)0x40010818U)
#define UINT_4001081c (*(uint32_t *)(uintptr_t)0x4001081cU)
#define UINT_40010820 (*(uint32_t *)(uintptr_t)0x40010820U)
#define UINT_40010824 (*(uint32_t *)(uintptr_t)0x40010824U)
#define UINT_40010828 (*(uint32_t *)(uintptr_t)0x40010828U)
#define UINT_4001082c (*(uint32_t *)(uintptr_t)0x4001082cU)
#define UINT_40010830 (*(uint32_t *)(uintptr_t)0x40010830U)
#define UINT_40010834 (*(uint32_t *)(uintptr_t)0x40010834U)
#define UINT_40010838 (*(uint32_t *)(uintptr_t)0x40010838U)
#define UINT_4001083c (*(uint32_t *)(uintptr_t)0x4001083cU)
#define UINT_40010840 (*(uint32_t *)(uintptr_t)0x40010840U)
#define UINT_40010844 (*(uint32_t *)(uintptr_t)0x40010844U)
#define UINT_40010848 (*(uint32_t *)(uintptr_t)0x40010848U)
#define UINT_4001084c (*(uint32_t *)(uintptr_t)0x4001084cU)
#define UINT_40010850 (*(uint32_t *)(uintptr_t)0x40010850U)
#define UINT_40010854 (*(uint32_t *)(uintptr_t)0x40010854U)
#define UINT_40010858 (*(uint32_t *)(uintptr_t)0x40010858U)
#define UINT_4001085c (*(uint32_t *)(uintptr_t)0x4001085cU)
#define UINT_40010860 (*(uint32_t *)(uintptr_t)0x40010860U)
#define UINT_40010864 (*(uint32_t *)(uintptr_t)0x40010864U)
#define UINT_40010868 (*(uint32_t *)(uintptr_t)0x40010868U)
#define UINT_4001086c (*(uint32_t *)(uintptr_t)0x4001086cU)
#define UINT_40010870 (*(uint32_t *)(uintptr_t)0x40010870U)
#define UINT_40010874 (*(uint32_t *)(uintptr_t)0x40010874U)
#define UINT_40010878 (*(uint32_t *)(uintptr_t)0x40010878U)
#define UINT_4001087c (*(uint32_t *)(uintptr_t)0x4001087cU)
#define UINT_40010880 (*(uint32_t *)(uintptr_t)0x40010880U)
#define UINT_40010884 (*(uint32_t *)(uintptr_t)0x40010884U)
#define UINT_40010888 (*(uint32_t *)(uintptr_t)0x40010888U)
#define UINT_4001088c (*(uint32_t *)(uintptr_t)0x4001088cU)
#define UINT_40010890 (*(uint32_t *)(uintptr_t)0x40010890U)
#define UINT_40010894 (*(uint32_t *)(uintptr_t)0x40010894U)
#define UINT_40010898 (*(uint32_t *)(uintptr_t)0x40010898U)
#define UINT_4001089c (*(uint32_t *)(uintptr_t)0x4001089cU)
#define UINT_400108a0 (*(uint32_t *)(uintptr_t)0x400108a0U)
#define UINT_400108a4 (*(uint32_t *)(uintptr_t)0x400108a4U)
#define UINT_400108a8 (*(uint32_t *)(uintptr_t)0x400108a8U)
#define UINT_400108ac (*(uint32_t *)(uintptr_t)0x400108acU)
#define UINT_400108b0 (*(uint32_t *)(uintptr_t)0x400108b0U)
#define UINT_400108b4 (*(uint32_t *)(uintptr_t)0x400108b4U)
#define UINT_400108b8 (*(uint32_t *)(uintptr_t)0x400108b8U)
#define UINT_400108bc (*(uint32_t *)(uintptr_t)0x400108bcU)
#define UINT_400108c0 (*(uint32_t *)(uintptr_t)0x400108c0U)
#define UINT_400108c4 (*(uint32_t *)(uintptr_t)0x400108c4U)
#define UINT_400108c8 (*(uint32_t *)(uintptr_t)0x400108c8U)
#define UINT_400108cc (*(uint32_t *)(uintptr_t)0x400108ccU)
#define UINT_400108d0 (*(uint32_t *)(uintptr_t)0x400108d0U)
#define UINT_400108d4 (*(uint32_t *)(uintptr_t)0x400108d4U)
#define UINT_400108d8 (*(uint32_t *)(uintptr_t)0x400108d8U)
#define UINT_400108dc (*(uint32_t *)(uintptr_t)0x400108dcU)
#define UINT_400108e0 (*(uint32_t *)(uintptr_t)0x400108e0U)
#define UINT_400108e4 (*(uint32_t *)(uintptr_t)0x400108e4U)
#define UINT_400108e8 (*(uint32_t *)(uintptr_t)0x400108e8U)
#define UINT_400108ec (*(uint32_t *)(uintptr_t)0x400108ecU)
#define UINT_400108f0 (*(uint32_t *)(uintptr_t)0x400108f0U)
#define UINT_400108f4 (*(uint32_t *)(uintptr_t)0x400108f4U)
#define UINT_400108f8 (*(uint32_t *)(uintptr_t)0x400108f8U)
#define UINT_400108fc (*(uint32_t *)(uintptr_t)0x400108fcU)
#define UINT_40010900 (*(uint32_t *)(uintptr_t)0x40010900U)
#define UINT_40010904 (*(uint32_t *)(uintptr_t)0x40010904U)
#define UINT_40010908 (*(uint32_t *)(uintptr_t)0x40010908U)
#define UINT_4001090c (*(uint32_t *)(uintptr_t)0x4001090cU)
#define UINT_40010910 (*(uint32_t *)(uintptr_t)0x40010910U)
#define UINT_40010914 (*(uint32_t *)(uintptr_t)0x40010914U)
#define UINT_40010918 (*(uint32_t *)(uintptr_t)0x40010918U)
#define UINT_4001091c (*(uint32_t *)(uintptr_t)0x4001091cU)
#define UINT_40010920 (*(uint32_t *)(uintptr_t)0x40010920U)
#define UINT_40010924 (*(uint32_t *)(uintptr_t)0x40010924U)
#define UINT_40010928 (*(uint32_t *)(uintptr_t)0x40010928U)
#define UINT_4001092c (*(uint32_t *)(uintptr_t)0x4001092cU)
#define UINT_40010930 (*(uint32_t *)(uintptr_t)0x40010930U)
#define UINT_40010934 (*(uint32_t *)(uintptr_t)0x40010934U)
#define UINT_40010938 (*(uint32_t *)(uintptr_t)0x40010938U)
#define UINT_4001093c (*(uint32_t *)(uintptr_t)0x4001093cU)
#define UINT_40010940 (*(uint32_t *)(uintptr_t)0x40010940U)
#define UINT_40010944 (*(uint32_t *)(uintptr_t)0x40010944U)
#define UINT_40010948 (*(uint32_t *)(uintptr_t)0x40010948U)
#define UINT_4001094c (*(uint32_t *)(uintptr_t)0x4001094cU)
#define UINT_40010950 (*(uint32_t *)(uintptr_t)0x40010950U)
#define UINT_40010954 (*(uint32_t *)(uintptr_t)0x40010954U)
#define UINT_40010958 (*(uint32_t *)(uintptr_t)0x40010958U)
#define UINT_4001095c (*(uint32_t *)(uintptr_t)0x4001095cU)
#define UINT_40010960 (*(uint32_t *)(uintptr_t)0x40010960U)
#define UINT_40010964 (*(uint32_t *)(uintptr_t)0x40010964U)
#define UINT_40010968 (*(uint32_t *)(uintptr_t)0x40010968U)
#define UINT_4001096c (*(uint32_t *)(uintptr_t)0x4001096cU)
#define UINT_40010970 (*(uint32_t *)(uintptr_t)0x40010970U)
#define UINT_40010974 (*(uint32_t *)(uintptr_t)0x40010974U)
#define UINT_40010978 (*(uint32_t *)(uintptr_t)0x40010978U)
#define UINT_4001097c (*(uint32_t *)(uintptr_t)0x4001097cU)
#define UINT_40010980 (*(uint32_t *)(uintptr_t)0x40010980U)
#define UINT_40010984 (*(uint32_t *)(uintptr_t)0x40010984U)
#define UINT_40010988 (*(uint32_t *)(uintptr_t)0x40010988U)
#define UINT_4001098c (*(uint32_t *)(uintptr_t)0x4001098cU)
#define UINT_40010990 (*(uint32_t *)(uintptr_t)0x40010990U)
#define UINT_40010994 (*(uint32_t *)(uintptr_t)0x40010994U)
#define UINT_40010998 (*(uint32_t *)(uintptr_t)0x40010998U)
#define UINT_4001099c (*(uint32_t *)(uintptr_t)0x4001099cU)
#define UINT_400109a0 (*(uint32_t *)(uintptr_t)0x400109a0U)
#define UINT_400109a4 (*(uint32_t *)(uintptr_t)0x400109a4U)
#define UINT_400109a8 (*(uint32_t *)(uintptr_t)0x400109a8U)
#define UINT_400109ac (*(uint32_t *)(uintptr_t)0x400109acU)
#define UINT_400109b0 (*(uint32_t *)(uintptr_t)0x400109b0U)
#define UINT_400109b4 (*(uint32_t *)(uintptr_t)0x400109b4U)
#define UINT_400109b8 (*(uint32_t *)(uintptr_t)0x400109b8U)
#define UINT_400109bc (*(uint32_t *)(uintptr_t)0x400109bcU)
#define UINT_400109c0 (*(uint32_t *)(uintptr_t)0x400109c0U)
#define UINT_400109c4 (*(uint32_t *)(uintptr_t)0x400109c4U)
#define UINT_400109c8 (*(uint32_t *)(uintptr_t)0x400109c8U)
#define UINT_400109cc (*(uint32_t *)(uintptr_t)0x400109ccU)
#define UINT_400109d0 (*(uint32_t *)(uintptr_t)0x400109d0U)
#define UINT_400109d4 (*(uint32_t *)(uintptr_t)0x400109d4U)
#define UINT_400109d8 (*(uint32_t *)(uintptr_t)0x400109d8U)
#define UINT_400109dc (*(uint32_t *)(uintptr_t)0x400109dcU)
#define UINT_400109e0 (*(uint32_t *)(uintptr_t)0x400109e0U)
#define UINT_400109e4 (*(uint32_t *)(uintptr_t)0x400109e4U)
#define UINT_400109e8 (*(uint32_t *)(uintptr_t)0x400109e8U)
#define UINT_400109ec (*(uint32_t *)(uintptr_t)0x400109ecU)
#define UINT_400109f0 (*(uint32_t *)(uintptr_t)0x400109f0U)
#define UINT_400109f4 (*(uint32_t *)(uintptr_t)0x400109f4U)
#define UINT_400109f8 (*(uint32_t *)(uintptr_t)0x400109f8U)
#define UINT_400109fc (*(uint32_t *)(uintptr_t)0x400109fcU)
#define UINT_40010a00 (*(uint32_t *)(uintptr_t)0x40010a00U)
#define UINT_40010a04 (*(uint32_t *)(uintptr_t)0x40010a04U)
#define UINT_40010a08 (*(uint32_t *)(uintptr_t)0x40010a08U)
#define UINT_40010a0c (*(uint32_t *)(uintptr_t)0x40010a0cU)
#define UINT_40010a10 (*(uint32_t *)(uintptr_t)0x40010a10U)
#define UINT_40010a14 (*(uint32_t *)(uintptr_t)0x40010a14U)
#define UINT_40010a18 (*(uint32_t *)(uintptr_t)0x40010a18U)
#define UINT_40010a1c (*(uint32_t *)(uintptr_t)0x40010a1cU)
#define UINT_40010a20 (*(uint32_t *)(uintptr_t)0x40010a20U)
#define UINT_40010a24 (*(uint32_t *)(uintptr_t)0x40010a24U)
#define UINT_40010a28 (*(uint32_t *)(uintptr_t)0x40010a28U)
#define UINT_40010a2c (*(uint32_t *)(uintptr_t)0x40010a2cU)
#define UINT_40010a30 (*(uint32_t *)(uintptr_t)0x40010a30U)
#define UINT_40010a34 (*(uint32_t *)(uintptr_t)0x40010a34U)
#define UINT_40010a38 (*(uint32_t *)(uintptr_t)0x40010a38U)
#define UINT_40010a3c (*(uint32_t *)(uintptr_t)0x40010a3cU)
#define UINT_40010a40 (*(uint32_t *)(uintptr_t)0x40010a40U)
#define UINT_40010a44 (*(uint32_t *)(uintptr_t)0x40010a44U)
#define UINT_40010a48 (*(uint32_t *)(uintptr_t)0x40010a48U)
#define UINT_40010a4c (*(uint32_t *)(uintptr_t)0x40010a4cU)
#define UINT_40010a50 (*(uint32_t *)(uintptr_t)0x40010a50U)
#define UINT_40010a54 (*(uint32_t *)(uintptr_t)0x40010a54U)
#define UINT_40010a58 (*(uint32_t *)(uintptr_t)0x40010a58U)
#define UINT_40010a5c (*(uint32_t *)(uintptr_t)0x40010a5cU)
void *memmove(void *,const void *,unsigned long);
#ifndef ABS
#define ABS(value) __builtin_fabs(value)
#endif
static inline uint128 pf_browser_unsigned_saturated_sub64(uint128 a,uint128 b){uint128 result=0;for(unsigned s=0;s<128;s+=64){uint64_t x=(uint64_t)(a>>s),y=(uint64_t)(b>>s);if(x<y)pf_neon_saturated();else result|=(uint128)(x-y)<<s;}return result;}
extern uint8_t pf_module_state[];
uint recovered_100028c0(uint a,uint b);
uint recovered_10002910(uint a,uint b);
int recovered_10002948(int a,int b);
int recovered_100029b8(int a,int b);
ulonglong recovered_10002a20(ulonglong a,ulonglong b);
ulonglong recovered_10002b04(ulonglong a,ulonglong b);
longlong recovered_10002b84(longlong a,longlong b);
longlong recovered_10002ca4(longlong a,longlong b);
ulonglong recovered_10002d60(double value);
longlong recovered_10002de8(double value);
ulonglong recovered_10002e34(float x);
longlong recovered_10002e44(float x);
double recovered_10002e54(ulonglong value);
double recovered_10002e9c(longlong value);
float recovered_10002ec4(ulonglong x);
float recovered_10002ee0(longlong x);
int recovered_10002f00(void);
undefined4 recovered_1000a19c(void);
void recovered_1000a1f0(void);
void recovered_1000a240(int param_1);
void recovered_1000a434(uint *param_1);
void recovered_1000d514(uint *param_1,int param_2);
void recovered_1000dbb8(uint param_1,byte *param_2);
undefined4 recovered_1000dfe0(int param_1);
undefined4 recovered_1000e184(void);
void recovered_1000e1d8(uint param_1,int param_2);
void recovered_1001040c(uint param_1,uint param_2);
void recovered_100105c4(uint param_1,uint param_2,byte *param_3);
void recovered_100116f4(int param_1);
void recovered_10011d24(int param_1);
void recovered_10011e8c(int *param_1);
void recovered_10011f58(int param_1,int param_2);
void recovered_10012034(undefined4 *param_1);
void recovered_10012188(int *param_1);
void recovered_1001221c(int *param_1);
void recovered_100122e8(undefined4 param_1,int param_2);
void recovered_1001ca00(int param_1,int param_2);
void recovered_1001cad8(int param_1,int param_2,int param_3);
void recovered_1001cb38(int param_1,int param_2,int param_3,uint param_4);
char * recovered_1001cbc0(char *param_1);
void recovered_1001cc80(byte *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
bool recovered_1001cecc(byte *param_1,byte *param_2);
void recovered_1001cf48(byte *param_1,byte *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_1001d090(byte *param_1,byte *param_2);
void recovered_1001d104(int param_1,byte *param_2,undefined1 *param_3);
void recovered_1001d5ac(int param_1);
uint recovered_1001f670(uint param_1,int param_2,byte *param_3,undefined1 *param_4,uint *param_5,
                       byte *param_6,char *param_7,byte *param_8);
undefined4 recovered_1001f990(int param_1,int param_2,char *param_3,uint param_4,int param_5);
char * recovered_1001fc60(char *param_1,int param_2);
void recovered_1001fd10(int param_1,byte *param_2,int param_3,uint param_4,int param_5);
int recovered_1001ff54(uint param_1,int param_2,byte *param_3,undefined1 *param_4,int param_5,
                      uint *param_6,char *param_7,ulong param_8);
byte recovered_100203bc(int param_1,undefined4 param_2,uint param_3);
void recovered_100205b4(int param_1);
byte recovered_10020784(int param_1);
void recovered_10020a20(int param_1);
void recovered_10021480(int param_1);
int recovered_10021668(int *param_1,uint param_2);
double recovered_10021810(void);
void recovered_100218d8(int param_1);
void recovered_10021af8(int *param_1,undefined4 *param_2,uint *param_3,int param_4,int param_5);
undefined4 recovered_10021e84(void);
bool recovered_10021eec(int *param_1,int param_2,int *param_3,uint param_4,uint *param_5,
                       uint param_6);
void recovered_1002201c(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6);
void recovered_10022084(undefined4 *param_1,int *param_2);
void recovered_10022320(undefined4 *param_1,int *param_2);
void recovered_100223d4(int *param_1,int param_2);
void recovered_10022404(undefined4 *param_1,int *param_2);
void recovered_100225e0(undefined4 *param_1,int *param_2);
undefined4 recovered_10022714(int *param_1,int param_2,int *param_3,undefined4 *param_4);
bool recovered_10022e0c(int *param_1,int param_2,int *param_3,uint param_4,uint *param_5,
                       uint param_6);
void recovered_10022eec(undefined4 *param_1,int *param_2);
void recovered_10022f4c(undefined8 *param_1,int *param_2);
void recovered_10022fb0(int *param_1,int param_2,undefined1 param_3);
void recovered_10023040(undefined4 *param_1);
void recovered_10023054(int *param_1,int *param_2,uint *param_3,uint param_4);
int * recovered_100231ac(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6);
void recovered_100233c4(uint *param_1,int *param_2);
void recovered_100236dc(int *param_1,int param_2,int *param_3,undefined4 param_4,int param_5,
                       undefined4 param_6);
void recovered_100237ac(int *param_1,int *param_2,int param_3,int param_4,int param_5);
void recovered_10023878(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_10023f98(int *param_1);
void recovered_100241d8(uint *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,uint param_8);
void recovered_10024430(undefined8 *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5
                       ,int *param_6,int param_7,int param_8);
void recovered_10024698(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       undefined4 *param_6,uint param_7);
void recovered_100249c4(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6,uint param_7,uint param_8);
void recovered_10025548(int *param_1,int *param_2,uint param_3,uint *param_4,undefined4 param_5,
                       uint *param_6,uint param_7,uint param_8);
void recovered_10026370(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int param_6,uint param_7);
void recovered_100268e4(int *param_1);
void recovered_10026b0c(undefined8 *param_1,int *param_2);
void recovered_10026ec8(int *param_1);
void recovered_100270f4(int *param_1);
void recovered_10027510(int *param_1);
void recovered_10027a64(int *param_1);
void recovered_100289d0(int *param_1);
void recovered_10028c9c(int *param_1);
void recovered_10028f18(int *param_1);
void recovered_10029108(int *param_1);
void recovered_10029384(int *param_1);
void recovered_100294bc(int *param_1);
void recovered_10029580(int *param_1,int param_2,uint *param_3,int param_4);
void recovered_10029ebc(int *param_1);
void recovered_1002a9b0(int *param_1);
void recovered_1002add8(int *param_1);
void recovered_1002ae88(int *param_1);
void recovered_1002b62c(int *param_1);
uint * recovered_1002bda4(int *param_1,uint param_2,uint *param_3,uint param_4);
void recovered_1002beb8(undefined8 *param_1,int *param_2,uint param_3,int param_4,uint *param_5,
                       uint param_6,uint param_7,uint *param_8,uint param_9);
uint * recovered_1002c910(int *param_1,uint *param_2,int param_3);
uint * recovered_1002cb0c(int *param_1,uint param_2);
void recovered_1002cb78(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int param_6);
void recovered_1002cf8c(undefined4 *param_1,int *param_2,int param_3,int param_4);
uint * recovered_1002d270(undefined4 param_1,undefined4 param_2,int *param_3);
byte recovered_1002dee8(int param_1,int param_2);
void recovered_1002df40(uint *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint param_6,uint *param_7,uint param_8,int param_9,uint param_10,
                       int param_11);
void recovered_1002e70c(undefined8 *param_1,int *param_2,int param_3,uint param_4,int *param_5);
void recovered_1002f6f0(undefined4 *param_1,int *param_2,int param_3);
void recovered_1002f770(undefined8 *param_1,int *param_2,int param_3,uint param_4,int param_5,
                       int param_6,int param_7,uint param_8);
void recovered_1002f9b0(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int param_6,int param_7,int param_8,int param_9,int param_10);
void recovered_1002fee8(int *param_1,int *param_2,int param_3,uint *param_4,uint param_5);
int * recovered_10030144(int *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                        uint param_7);
void recovered_10030ad4(int *param_1,int param_2,undefined1 *param_3,int param_4);
void recovered_10030c34(undefined8 *param_1,int param_2,int *param_3,int param_4);
void recovered_10030cd0(int *param_1,int *param_2,int param_3,byte *param_4,uint *param_5);
void recovered_10030d8c(undefined8 *param_1,int *param_2,int param_3);
undefined4 recovered_10030e4c(int param_1);
void recovered_10030f20(uint *param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
                       int *param_6,uint param_7,uint *param_8,uint param_9);
uint recovered_10031268(int *param_1,uint param_2,uint *param_3,undefined4 param_4,int *param_5,
                       undefined4 param_6,undefined4 param_7,undefined4 param_8,uint *param_9,
                       uint *param_10,uint param_11,int param_12);
uint recovered_100318e0(int *param_1,int param_2,uint *param_3,undefined4 param_4,int *param_5);
uint recovered_10031c1c(int *param_1,uint param_2,uint *param_3,undefined4 param_4,int *param_5,
                       int param_6);
uint recovered_10032130(int *param_1,uint *param_2,int *param_3,uint128 *param_4,
                       int param_5);
int recovered_10032b68(int *param_1,int param_2,uint *param_3,undefined *param_4,uint *param_5);
undefined4 recovered_10033510(int param_1,int param_2);
uint recovered_1003358c(int *param_1,int param_2,int param_3);
uint recovered_10033818(int *param_1,int param_2);
uint recovered_10033900(int *param_1,int param_2);
void recovered_100339f0(undefined8 *param_1,int *param_2,uint *param_3);
void recovered_10033ba8(undefined8 *param_1,int *param_2,int param_3,int param_4);
uint recovered_10033d78(undefined4 param_1,int *param_2,undefined4 param_3);
uint recovered_10033e08(int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,undefined4 param_6);
bool recovered_10033f44(int *param_1,int param_2,uint *param_3,undefined4 param_4,uint *param_5);
undefined4 recovered_10034430(uint *param_1,uint *param_2);
undefined4 *
recovered_10034590(int *param_1,int param_2,uint *param_3,undefined4 param_4,uint *param_5,
                  uint *param_6);
uint recovered_10034fc0(int *param_1,int param_2,uint *param_3,undefined4 param_4,int *param_5,
                       undefined *param_6,int param_7);
bool recovered_100355ac(int *param_1,int param_2);
bool recovered_10035638(int *param_1,uint *param_2);
int * recovered_100356dc(int *param_1,int *param_2);
void recovered_10035790(undefined8 *param_1,int *param_2,int *param_3);
bool recovered_10035958(int *param_1,int *param_2);
int * recovered_100359c8(int *param_1,int param_2);
undefined4 * recovered_10035b74(int *param_1,int *param_2,int param_3);
void recovered_10035c28(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,uint param_6
                       );
void recovered_10036158(int *param_1,int *param_2,int param_3,undefined1 param_4);
void recovered_100361cc(int *param_1,int *param_2,int param_3,int *param_4,int param_5,uint param_6);
uint recovered_100367e4(int *param_1,int param_2,uint *param_3,undefined4 param_4,int *param_5);
bool recovered_10036944(int param_1,uint *param_2,undefined4 param_3,int *param_4);
undefined4 recovered_10036ba8(void);
uint recovered_10036c58(int *param_1,uint param_2,uint *param_3,uint param_4);
void recovered_10037218(void);
void recovered_100372f0(void);
uint recovered_10037508(uint param_1);
bool recovered_100375c8(int param_1);
uint recovered_10037660(byte *param_1);
undefined4 recovered_10037cfc(int param_1,uint param_2,undefined4 param_3,uint param_4);
undefined8 recovered_10037de4(int param_1,int param_2);
void recovered_10038000(int *param_1,uint param_2);
ulonglong recovered_10038058(int *param_1,int param_2,uint *param_3,undefined4 param_4);
undefined4 recovered_10038158(int param_1,undefined4 *param_2,int param_3,int *param_4);
undefined4 recovered_100382c4(int *param_1,uint param_2,uint *param_3,uint param_4);
void recovered_10038308(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       int param_6);
void recovered_10038450(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                       undefined1 param_5,undefined1 param_6);
void recovered_10038550(int *param_1,uint *param_2);
void recovered_1003872c(int *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100387c4(int *param_1,int param_2);
void recovered_10038968(int *param_1,int param_2,int param_3,int param_4,int param_5);
void recovered_10038c70(int *param_1,undefined4 *param_2);
byte recovered_10038d64(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10038e64(undefined4 *param_1,int *param_2);
void recovered_10038f10(int *param_1,undefined4 *param_2);
bool recovered_1003bb80(int param_1,int param_2);
void recovered_1003bbe0(int *param_1,int param_2);
void recovered_1003bd90(undefined4 *param_1,int *param_2,int *param_3,char *param_4);
void recovered_1003c198(uint *param_1,int *param_2,int *param_3,char *param_4);
void recovered_1003e548(undefined8 *param_1,int *param_2,int param_3,uint param_4,uint *param_5,
                       uint param_6);
int * recovered_1003e6cc(int *param_1,int param_2,int param_3,int param_4);
void recovered_1003e788(int *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                       int param_6);
void recovered_1003e7e8(int *param_1,int param_2,int param_3);
void recovered_1003e8ec(int *param_1,int *param_2,char *param_3,uint param_4,uint *param_5,
                       undefined *param_6,int param_7);
uint * recovered_1003f1e0(int param_1,uint param_2,uint *param_3,uint param_4);
void recovered_1003f254(undefined8 *param_1,int *param_2,int *param_3,uint *param_4);
void recovered_1003f344(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5);
uint recovered_1003f45c(int *param_1,undefined4 *param_2,int param_3);
int recovered_1003f5cc(int param_1);
void recovered_1003f604(undefined8 *param_1,int *param_2,int param_3,int param_4,int *param_5,
                       uint param_6,uint *param_7,undefined4 param_8);
int recovered_1003f760(int param_1,char *param_2);
void recovered_1003f800(int *param_1,int param_2,int *param_3,char *param_4,uint param_5,
                       uint param_6,uint param_7);
void recovered_1003f954(undefined8 *param_1,int *param_2,int param_3,int param_4,int param_5);
void recovered_1003fad0(int *param_1,int *param_2,uint param_3,uint *param_4,undefined *param_5);
void recovered_1003fde4(int *param_1,int *param_2,int param_3,uint *param_4,int param_5,int *param_6
                       ,int param_7);
void recovered_1003fec0(int *param_1,int param_2,undefined1 *param_3,uint param_4,undefined4 param_5
                       );
bool recovered_1004003c(int *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,
                       int param_6);
uint recovered_10040130(int *param_1,int *param_2,undefined8 *param_3);
void recovered_100407d0(int *param_1,int param_2,int param_3,int *param_4,uint *param_5,
                       uint *param_6,uint param_7,uint *param_8,uint *param_9,uint param_10,
                       uint param_11,uint param_12,int param_13,undefined4 param_14,
                       undefined4 param_15);
int * recovered_1004095c(int *param_1,int *param_2);
uint recovered_10040a58(int *param_1,int param_2,int *param_3,uint param_4,int param_5,int *param_6,
                       uint param_7,uint param_8);
void recovered_10040d38(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       int param_6);
int * recovered_10040eb0(int *param_1,int param_2,int *param_3,uint param_4,undefined1 param_5);
void recovered_100410ec(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100411e4(undefined8 *param_1,int *param_2,int *param_3);
void recovered_10041324(undefined4 *param_1,int *param_2,uint *param_3);
void recovered_10041418(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100418bc(int *param_1,int *param_2,int param_3,int param_4,uint *param_5);
void recovered_10042190(int *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6);
undefined4 recovered_10042338(byte *param_1);
void recovered_100423ac(uint *param_1,int param_2,int param_3,uint *param_4);
void recovered_10042564(int *param_1,int *param_2,uint *param_3,int param_4,int *param_5,int param_6
                       ,uint param_7,undefined1 param_8);
undefined4
recovered_10042834(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                  int param_13,int param_14,int param_15,int param_16,undefined4 *param_17);
bool recovered_1004345c(int *param_1,uint param_2,int param_3,int param_4,int *param_5);
bool recovered_10043544(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       undefined4 param_7,int *param_8);
void recovered_1004369c(int *param_1,int param_2,int *param_3,undefined4 param_4,char *param_5,
                       uint *param_6);
void recovered_10043828(int *param_1,uint *param_2,int *param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6);
void recovered_1004388c(undefined8 *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5);
void recovered_100439dc(int *param_1,int param_2,undefined1 *param_3);
uint recovered_10043bfc(char *param_1,int *param_2);
void recovered_10043d9c(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int param_6,int param_7,uint param_8);
undefined4 recovered_10044208(void);
undefined4 recovered_10044870(void);
undefined4 recovered_100448c0(void);
void recovered_10044938(void);
ulonglong recovered_10044b38(uint *param_1);
int recovered_10044bdc(int param_1);
void recovered_10044e20(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,double param_6,double param_7);
undefined4 recovered_10044ea0(void);
void recovered_10045098(void);
byte recovered_100452f8(int *param_1,int param_2,int param_3);
void recovered_10045454(undefined8 *param_1,int *param_2);
void recovered_100455a0(uint *param_1,int *param_2);
void recovered_1004665c(undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,
                       undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8);
void recovered_10046a04(int *param_1,int param_2,int param_3);
uint * recovered_10046a5c(int *param_1,uint param_2);
void recovered_10047cb4(undefined8 *param_1,int *param_2,uint *param_3,uint param_4);
void recovered_10048338(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6,uint param_7,uint *param_8,uint param_9);
void recovered_100495d8(undefined8 *param_1,int *param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,uint *param_6,int param_7,uint *param_8,uint param_9);
void recovered_10049d08(undefined8 *param_1,int *param_2);
void recovered_1004a198(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6);
void recovered_1004a61c(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6);
void recovered_1004a864(undefined8 *param_1,int *param_2,uint *param_3,uint *param_4,uint param_5);
undefined4 recovered_1004af50(int *param_1,int param_2,uint *param_3,undefined4 param_4);
void recovered_1004b118(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6);
void recovered_1004b308(int *param_1,uint param_2,uint *param_3,undefined4 param_4,uint *param_5,
                       uint param_6);
void recovered_1004b4e8(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,uint *param_6);
undefined4 recovered_1004bce8(int param_1,int param_2,uint *param_3,uint param_4,int *param_5);
bool recovered_1004c05c(int param_1,int param_2,uint *param_3,int *param_4,uint param_5,int param_6);
undefined4 recovered_1004d5ec(int param_1,int *param_2,void *param_3,undefined4 param_4);
void recovered_1004d7e8(undefined8 *param_1,int *param_2,uint param_3);
int * recovered_1004d94c(int *param_1,uint *param_2,int *param_3);
int recovered_1004dbd8(int *param_1);
void recovered_1004ecb0(undefined4 *param_1,int param_2);
undefined4 * recovered_1004ed40(undefined4 *param_1,int *param_2,undefined4 *param_3,uint param_4);
undefined4 recovered_1004f1d8(undefined4 *param_1,uint *param_2);
int recovered_1004f328(int *param_1,uint param_2);
uint * recovered_1004fbfc(int *param_1);
bool recovered_1004fdfc(int param_1,uint param_2,uint *param_3);
void recovered_1004feec(int *param_1,int *param_2);
void recovered_100505c4(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100507d0(uint *param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_10050f48(int *param_1);
void recovered_10051b64(int *param_1,int param_2);
int recovered_10051d88(int *param_1,int param_2);
int recovered_1005201c(undefined4 *param_1,int param_2,uint param_3);
byte recovered_100520c0(int param_1,char *param_2,uint param_3);
void recovered_10052218(int *param_1,int *param_2,byte *param_3,uint param_4);
void recovered_10053260(int *param_1,uint param_2);
uint * recovered_100538c4(int *param_1,int param_2,uint param_3,int param_4);
void recovered_10053b54(int *param_1,int param_2);
undefined1 * recovered_10053b98(int *param_1);
byte * recovered_100543c0(int *param_1,uint param_2);
bool recovered_10055604(int *param_1);
bool recovered_100556c0(int param_1,int param_2);
undefined1 * recovered_10055760(int *param_1,undefined1 *param_2,int param_3);
undefined1 * recovered_100559cc(int *param_1);
int recovered_10056c60(int *param_1);
undefined1 * recovered_10056e04(int *param_1,int param_2);
undefined1 * recovered_100572d0(int *param_1,int param_2,int param_3);
int recovered_1005757c(int *param_1,byte *param_2,uint param_3);
undefined1 * recovered_1005789c(int *param_1,int param_2,byte param_3);
undefined1 * recovered_10058b00(int *param_1);
void recovered_10058c2c(int *param_1);
char * recovered_10058c8c(int *param_1);
byte recovered_1005a1ec(int param_1);
undefined1 * recovered_1005a444(int *param_1,int param_2);
int recovered_1005a700(undefined1 *param_1);
void recovered_1005a7c0(int *param_1,int *param_2,int *param_3,uint param_4);
int recovered_1005aa20(byte *param_1,uint param_2);
void recovered_1005ac30(int *param_1,int *param_2,undefined1 *param_3,uint param_4,int param_5);
void recovered_1005aea4(int *param_1,int param_2,byte *param_3,int param_4,uint param_5);
void recovered_1005b310(undefined8 *param_1,int *param_2);
void recovered_1005b574(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int *param_6,int param_7,int param_8);
void recovered_1005b91c(undefined8 *param_1,int *param_2);
void recovered_1005bebc(undefined8 *param_1,int *param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9);
void recovered_1005c120(undefined8 *param_1,int *param_2);
void recovered_1005c310(undefined8 *param_1,int param_2);
void recovered_1005c360(undefined4 *param_1,int *param_2);
void recovered_1005c488(undefined8 *param_1,int *param_2,int param_3,uint *param_4,uint param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_1005c7a8(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8);
void recovered_1005ccac(undefined4 *param_1,int *param_2);
void recovered_1005d0e8(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,uint param_8);
void recovered_1005d754(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_1005dad8(int *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint param_6,undefined4 param_7,undefined4 param_8);
uint recovered_1005deb8(int param_1,uint param_2,uint *param_3,undefined4 param_4);
undefined4
recovered_1005e108(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
int recovered_1005e314(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6);
void recovered_1005e4b4(undefined8 *param_1,int *param_2);
uint * recovered_1005e668(int *param_1,uint *param_2);
void recovered_1005e71c(undefined8 *param_1,int *param_2);
void recovered_1005ea54(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       undefined4 param_6,undefined4 param_7,int param_8);
void recovered_1005ec24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_1005ec38(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_1005f108(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       undefined4 param_6,undefined4 param_7,int param_8);
void recovered_1005f294(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7);
void recovered_1005f2e4(undefined8 *param_1,int *param_2);
void recovered_1005f67c(uint *param_1,int *param_2);
void recovered_10060250(undefined4 *param_1);
void recovered_10060270(undefined4 *param_1,int *param_2);
undefined4 recovered_10060e58(void);
void recovered_10060f70(void);
void recovered_10061020(void);
undefined4 recovered_10061190(void);
int recovered_100613e8(void);
void recovered_10061608(void);
void recovered_10061f28(void);
int recovered_10061fe8(int param_1,int param_2,int param_3);
void recovered_10062278(void);
void recovered_10062440(uint *param_1,int *param_2);
void recovered_10062808(undefined4 *param_1,int *param_2);
void recovered_100630f8(undefined4 *param_1,uint *param_2,uint param_3,int *param_4);
void recovered_10063ca8(int *param_1);
void recovered_10063dcc(uint *param_1,undefined4 *param_2,uint param_3,uint *param_4,uint param_5,
                       int *param_6,int param_7,int param_8,undefined4 param_9,int param_10,
                       uint param_11);
uint * recovered_10064720(undefined4 *param_1);
int recovered_10064cec(int param_1,uint param_2);
void recovered_10064e00(int param_1,int param_2,int param_3);
bool recovered_10064e68(int *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5);
void recovered_1006595c(int *param_1,uint *param_2);
undefined4 recovered_10065bc4(undefined4 *param_1,undefined2 param_2);
void recovered_10065e80(int *param_1,int param_2);
void recovered_10065f20(undefined4 *param_1,int *param_2);
undefined4 recovered_10066ad0(uint128 *param_1,int param_2);
void recovered_10066e40(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       undefined4 *param_6,uint param_7,int param_8);
void recovered_100672b8(undefined8 *param_1,int *param_2);
void recovered_10067d2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_10067d40(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7);
void recovered_1006858c(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 *param_6,uint param_7);
void recovered_10068ac0(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 *param_6,uint param_7);
void recovered_10068e78(undefined8 *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int *param_6,int param_7,uint param_8);
void recovered_100692e8(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5);
void recovered_10069614(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5);
void recovered_100697c8(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 *param_6,uint param_7);
void recovered_1006a320(undefined8 *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int param_6,uint param_7);
void recovered_1006aa7c(undefined8 *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int *param_6,int param_7,int param_8);
undefined8
recovered_1006af04(int *param_1,uint param_2,uint *param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6);
void recovered_1006afcc(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,undefined4 param_6,int param_7);
void recovered_1006b354(int *param_1,uint param_2,uint *param_3,undefined4 param_4,ulonglong param_5
                       ,ulonglong param_6);
void recovered_1006b470(undefined8 *param_1,int *param_2);
void recovered_1006b948(undefined4 *param_1,int *param_2);
void recovered_1006bc70(undefined4 *param_1,int *param_2,int param_3,int param_4);
void recovered_1006bdb8(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 *param_6,uint param_7,uint param_8);
void recovered_1006c138(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_1006c1dc(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5);
void recovered_1006c334(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int *param_6,int *param_7);
uint * recovered_1006c844(undefined4 param_1,uint param_2,int *param_3,int param_4);
undefined4 recovered_1006cc18(uint param_1,uint *param_2);
undefined4 recovered_1006dc30(double *param_1);
void recovered_1006e078(int *param_1);
void recovered_1006e440(int param_1,uint param_2,uint param_3,uint param_4);
void recovered_1006e4b4(undefined8 *param_1,int *param_2);
void recovered_1006ea10(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6);
void recovered_1006ea90(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5);
void recovered_1006ed3c(undefined8 *param_1);
void recovered_1006ed8c(uint *param_1,int *param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,int *param_6,int param_7);
void recovered_1006f914(undefined8 *param_1,int *param_2);
void recovered_1006f94c(undefined8 *param_1,int *param_2);
void recovered_1006fba8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100708b0(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
void recovered_10070974(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10070aac(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int *param_7,uint param_8);
void recovered_10070c80(undefined8 *param_1,int *param_2,uint *param_3,int *param_4,int param_5,
                       uint param_6,int param_7);
void recovered_10072738(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5);
int recovered_10072ef4(int *param_1,int param_2,uint *param_3,undefined4 param_4,int param_5,
                      char *param_6,int param_7);
undefined4 recovered_10073070(void);
void recovered_10073078(int *param_1,uint param_2,uint *param_3,undefined4 param_4,int param_5);
void recovered_100731c8(undefined8 *param_1,int *param_2,int *param_3,int param_4,uint *param_5,
                       uint param_6,int param_7);
void recovered_100748dc(undefined4 *param_1,int param_2,int param_3);
void recovered_10074b70(undefined8 *param_1,int *param_2);
void recovered_10074bbc(undefined8 *param_1,int *param_2,int param_3,undefined4 param_4,int *param_5
                       ,int param_6,int param_7,int param_8);
void recovered_10074d30(undefined8 *param_1,int *param_2);
void recovered_10075010(undefined8 *param_1,int *param_2);
void recovered_10075838(undefined8 *param_1);
void recovered_100758ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_100758c0(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10075a34(undefined8 *param_1,int *param_2,int param_3,int param_4);
undefined4
recovered_10075ad8(int *param_1,uint param_2,uint *param_3,uint param_4,undefined4 *param_5);
undefined4 recovered_10075ba8(void);
int recovered_10075bb0(int *param_1,int param_2,uint param_3,int param_4,int param_5,
                      undefined4 param_6);
undefined4 recovered_10075d64(int *param_1,int param_2);
void recovered_10075e90(int *param_1,int param_2);
bool recovered_10076080(int *param_1,int param_2,uint *param_3,undefined4 *param_4);
bool recovered_10076144(int *param_1,uint *param_2,undefined8 *param_3);
bool recovered_100762f8(int *param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                       uint param_6);
bool recovered_100763e0(int *param_1,int param_2,uint *param_3,undefined1 *param_4);
bool recovered_1007647c(int *param_1,int param_2,uint *param_3,uint *param_4,undefined4 param_5,
                       byte *param_6);
bool recovered_100765a8(int *param_1,int param_2,uint *param_3,undefined4 *param_4,
                       undefined4 param_5,undefined1 *param_6);
int recovered_10076694(int *param_1,int *param_2,int *param_3);
bool recovered_10076aa8(int *param_1,int param_2,uint *param_3,undefined1 *param_4);
void recovered_10076b44(int param_1,uint param_2);
void recovered_10076d34(int param_1,int param_2,undefined4 param_3,int param_4);
int recovered_10076ec8(int param_1,byte *param_2,byte *param_3,uint param_4);
undefined4 recovered_100773d4(byte *param_1,byte *param_2,undefined1 *param_3,uint param_4);
uint recovered_10077d18(byte *param_1,byte *param_2,char *param_3,ulong param_4);
bool recovered_10078220(byte *param_1,byte *param_2);
int recovered_100782c4(int param_1,char *param_2);
void recovered_100783d0(void);
void recovered_10078420(int *param_1,int param_2,uint param_3,uint *param_4,uint param_5);
void recovered_10078588(int *param_1,int *param_2,int *param_3);
void recovered_100787e4(int *param_1,byte *param_2,byte *param_3,int *param_4,int *param_5);
void recovered_1007a01c(int *param_1,int param_2,int param_3);
void recovered_1007a200(int *param_1,int *param_2,int param_3,int param_4);
void recovered_1007a2c4(int *param_1,undefined4 *param_2,int param_3);
void recovered_1007a534(int *param_1,int *param_2,int *param_3,int param_4,int param_5);
void recovered_1007a714(int *param_1,int param_2,int *param_3,int *param_4,int param_5,
                       undefined4 param_6,void *param_7,int param_8,void *param_9,int param_10,
                       undefined4 param_11,undefined4 param_12);
int recovered_1007ac40(int *param_1,int param_2,int param_3);
void recovered_1007acdc(undefined4 *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_1007ae38(void);
void recovered_1007ae40(int *param_1,undefined4 *param_2);
void recovered_1007afb8(int *param_1,int param_2);
void recovered_1007b11c(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,undefined4 param_8);
bool recovered_1007b20c(int param_1,int param_2);
int recovered_1007b32c(int *param_1,undefined4 *param_2);
bool recovered_1007b524(int param_1);
undefined4 recovered_1007b5dc(void);
void recovered_1007b5e4(undefined8 *param_1,int *param_2,uint param_3,uint *param_4,
                       undefined4 param_5,uint *param_6,uint param_7,int param_8);
byte recovered_1007bb50(int *param_1,uint *param_2,undefined4 *param_3);
void recovered_1007be28(int *param_1,uint *param_2,undefined4 *param_3,uint param_4);
undefined4 recovered_1007c20c(int param_1);
void recovered_1007c430(int *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5);
void recovered_1007c568(int *param_1,int param_2);
void recovered_1007c7f4(undefined8 *param_1,int *param_2,int param_3);
undefined4 recovered_1007c9ac(void);
void recovered_1007c9b4(int *param_1,int *param_2,int param_3,uint param_4,int param_5,int param_6);
int * recovered_1007cbb0(int *param_1,undefined4 param_2,int param_3);
uint * recovered_1007ce1c(int *param_1,int param_2,uint param_3,int param_4,int param_5);
undefined4 * recovered_1007d038(int *param_1);
void recovered_1007d12c(int *param_1,int param_2,int param_3);
void recovered_1007d1b4(int *param_1,int *param_2,byte *param_3,byte *param_4);
int recovered_1007d940(int *param_1,int param_2,int *param_3,undefined4 param_4,int *param_5);
char * recovered_1007dccc(char *param_1,char *param_2,int param_3);
undefined4 recovered_1007de7c(int param_1);
bool recovered_1007dfd8(char *param_1);
void recovered_1007e0cc(byte *param_1,undefined1 *param_2,int param_3);
uint * recovered_1007e528(int *param_1,uint *param_2,int param_3);
int * recovered_1007e6f8(int param_1,int *param_2,int *param_3,int param_4);
void recovered_1007e81c(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,int *param_6
                       ,int param_7,int param_8);
void recovered_1007eac4(int param_1,int *param_2,int param_3);
void recovered_1007ebb0(int *param_1,int param_2,int *param_3,int param_4);
void recovered_1007ed5c(int *param_1,int param_2,undefined4 *param_3,int param_4);
void recovered_1007f740(int *param_1,int param_2,uint *param_3);
uint recovered_10080058(int param_1,int param_2,uint param_3,uint param_4,char *param_5,
                       undefined1 *param_6);
uint * recovered_100804c8(int *param_1,uint *param_2);
uint * recovered_10080908(int *param_1,int param_2,uint param_3,uint param_4);
void recovered_10080a38(int *param_1,int param_2,uint *param_3,uint *param_4,uint param_5,
                       int param_6);
int * recovered_10081510(int *param_1,int param_2);
int recovered_10081754(int *param_1,int *param_2,undefined4 *param_3);
undefined4 recovered_10081e4c(int *param_1,int *param_2,int param_3);
void recovered_10082020(int *param_1,uint *param_2,uint *param_3);
void recovered_10082878(int *param_1,int param_2,int *param_3,undefined4 param_4,uint param_5,
                       int param_6);
undefined4 recovered_100829f8(char *param_1);
int recovered_10082a98(int *param_1);
undefined4 recovered_10082b44(char *param_1,byte *param_2);
bool recovered_10082bdc(byte *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                       int param_7,int *param_8,int param_9);
undefined4 recovered_100839b0(undefined4 *param_1,double *param_2,uint param_3);
byte * recovered_10083b60(byte *param_1,byte *param_2);
undefined4 recovered_10083c10(undefined4 *param_1,double *param_2);
undefined4 recovered_10083de0(byte *param_1,uint *param_2);
undefined4 recovered_10084978(byte *param_1,byte *param_2,byte *param_3,int param_4);
byte * recovered_10084a98(byte *param_1,byte *param_2,char *param_3);
void recovered_10084c10(undefined4 *param_1,byte *param_2,byte *param_3);
undefined4 recovered_10084c9c(byte *param_1,byte *param_2,double *param_3);
bool recovered_10084dd0(undefined4 *param_1,double *param_2,uint param_3);
undefined4 recovered_10085ea8(undefined4 *param_1,double *param_2,uint param_3);
undefined4 recovered_10086050(int *param_1,int param_2,uint param_3);
void recovered_10086110(void);
void recovered_10086160(undefined8 *param_1,int *param_2);
void recovered_10086384(undefined8 *param_1,int *param_2,int param_3,int *param_4);
void recovered_100864e4(undefined4 *param_1,int *param_2);
void recovered_1008656c(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_10086860(undefined8 *param_1,int *param_2);
undefined4 recovered_10087528(int *param_1,int *param_2,int *param_3,undefined4 *param_4);
void recovered_100877c8(undefined8 *param_1,int *param_2,uint *param_3);
undefined4 recovered_10087888(int param_1);
int * recovered_1008790c(int param_1,int *param_2);
undefined4 recovered_100879b0(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_10087ea8(int param_1,int *param_2);
bool recovered_10088000(int param_1);
void recovered_10088580(int *param_1);
undefined4 recovered_10088694(void);
undefined4
recovered_100886e8(int *param_1,int param_2,uint *param_3,uint param_4,uint *param_5,uint param_6);
undefined4 recovered_10088848(int *param_1,int *param_2,int *param_3,undefined1 *param_4);
void recovered_100889dc(undefined8 *param_1,int *param_2);
void recovered_10088e18(undefined8 *param_1,int *param_2);
void recovered_10088f1c(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10089124(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
void recovered_10089248(undefined8 *param_1,int *param_2,int param_3,int param_4);
int * recovered_100893f0(int *param_1,int param_2,undefined1 param_3,undefined1 param_4,
                        undefined1 param_5);
undefined4 recovered_10089650(int param_1);
void recovered_10089738(undefined8 *param_1,int *param_2);
void recovered_10089dbc(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,uint param_8);
undefined4 recovered_1008a81c(int *param_1,int *param_2,int param_3,int param_4);
uint * recovered_1008a968(int *param_1,uint param_2,uint *param_3,uint param_4);
bool recovered_1008aa8c(int *param_1,int *param_2,uint *param_3,int param_4);
void recovered_1008ace8(int *param_1,int param_2,uint param_3);
uint * recovered_1008ae04(int *param_1,int *param_2);
void recovered_1008b260(undefined4 *param_1,int *param_2,uint param_3,undefined4 *param_4,
                       undefined4 param_5,int *param_6,int param_7,int param_8);
void recovered_1008b8c4(undefined4 *param_1,int *param_2);
void recovered_1008b950(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_1008bb98(undefined8 *param_1,int *param_2,uint param_3,int *param_4,
                       undefined4 param_5,undefined8 *param_6,int param_7,int param_8);
void recovered_1008bdb8(undefined4 *param_1,int *param_2,uint param_3,undefined4 *param_4,
                       undefined4 param_5,uint *param_6,uint param_7,uint param_8);
void recovered_1008c9cc(int param_1,int param_2,undefined4 *param_3);
void recovered_1008cb0c(undefined8 *param_1,int *param_2);
void recovered_1008cec0(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_1008d0b4(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,int *param_6,int param_7);
void recovered_1008d2c0(undefined8 *param_1,int *param_2,uint param_3,undefined8 *param_4,
                       undefined4 param_5,uint *param_6,int param_7);
void recovered_1008d698(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,undefined8 *param_6,int param_7,int param_8);
undefined4 recovered_1008d820(void);
byte recovered_1008d828(byte *param_1,byte *param_2,undefined4 param_3,undefined1 *param_4,
                       int param_5);
undefined4 recovered_1008e7f0(undefined4 *param_1,byte *param_2,byte *param_3);
uint recovered_1008eb18(undefined4 *param_1,uint param_2,int param_3);
uint recovered_1008ed90(undefined4 *param_1,uint param_2);
uint recovered_10090a1c(uint128 *param_1,uint128 *param_2);
bool recovered_10091b68(byte *param_1,byte *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_10091c3c(char *param_1,double *param_2,undefined4 *param_3);
undefined4 recovered_10092090(byte *param_1,byte *param_2,int param_3,double *param_4);
void recovered_100926c8(uint *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_10092790(undefined8 *param_1,int *param_2);
void recovered_100929d4(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                       undefined4 param_6);
void recovered_10092b64(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10092e28(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_100930b4(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10093530(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_10093770(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100940ec(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,uint param_8);
void recovered_1009442c(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_100949d4(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,uint param_8);
void recovered_10094eb4(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,uint param_8);
void recovered_100954d8(uint *param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
                       undefined4 *param_6,int param_7,int param_8);
int recovered_100957a0(int *param_1,int param_2,int param_3);
int recovered_10095810(int *param_1,int param_2,int param_3);
uint * recovered_100959d8(int *param_1,int param_2);
uint * recovered_10095abc(int *param_1,undefined4 *param_2);
int * recovered_10095d00(int *param_1,int param_2,int *param_3,int param_4);
uint recovered_1009600c(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6
                       );
void recovered_100962fc(int *param_1,int *param_2,int *param_3,int *param_4);
uint recovered_10096368(int param_1,int param_2);
bool recovered_10096494(int *param_1,int *param_2,uint *param_3,int param_4,int *param_5,
                       int *param_6);
undefined4 recovered_10096aa0(int *param_1,int param_2);
undefined4 recovered_10096e00(void);
void recovered_10096e08(undefined4 *param_1,int *param_2);
void recovered_10096e30(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10096fdc(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_100971e8(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_10097698(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_10097940(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100979c0(int *param_1,int param_2,int *param_3);
uint * recovered_10097f20(int *param_1,undefined4 *param_2);
void recovered_10098a60(int *param_1,undefined4 *param_2,uint *param_3,int param_4);
undefined4 recovered_100990c4(void);
void recovered_100990cc(int *param_1,int param_2,int param_3);
void recovered_1009920c(int *param_1,int param_2,int param_3,uint param_4,byte *param_5,
                       byte *param_6);
undefined4 recovered_10099490(byte *param_1,byte *param_2,undefined4 *param_3,int *param_4);
bool recovered_10099b58(int param_1);
uint recovered_10099c70(int param_1,int *param_2);
int recovered_10099e64(int param_1,int param_2,uint param_3,int param_4);
void recovered_1009a110(int param_1);
void recovered_1009a37c(int *param_1,int *param_2,uint param_3);
void recovered_1009af10(int param_1,uint *param_2,int param_3);
void recovered_1009b1c0(int param_1,byte *param_2);
uint recovered_1009b2c0(uint *param_1,uint param_2);
undefined4 recovered_1009b380(int *param_1,uint param_2);
uint recovered_1009b480(int *param_1,int param_2,byte *param_3,byte *param_4,int *param_5,
                       uint param_6,int *param_7);
uint recovered_1009d4f8(byte *param_1,byte *param_2,uint param_3);
int recovered_1009dadc(byte *param_1,byte *param_2,uint param_3,int *param_4);
undefined4
recovered_1009df60(int *param_1,int param_2,byte *param_3,byte *param_4,int *param_5,uint param_6,
                  int *param_7);
undefined4 recovered_1009e28c(undefined4 *param_1,byte *param_2,undefined4 *param_3,int *param_4);
undefined4
recovered_1009e350(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                  int *param_7);
undefined4
recovered_1009e4b4(int param_1,uint param_2,byte *param_3,byte *param_4,uint param_5,uint param_6);
undefined4
recovered_1009ea6c(int param_1,int param_2,byte *param_3,byte *param_4,uint param_5,uint param_6);
uint recovered_1009f070(int param_1,int param_2,byte *param_3,undefined1 *param_4,uint *param_5);
bool recovered_1009feac(char *param_1);
bool recovered_100a011c(uint param_1,byte *param_2,undefined1 *param_3,uint param_4);
byte recovered_100a0be8(byte *param_1,byte *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       byte *param_6,int *param_7);
undefined4
recovered_100a2ba8(undefined4 param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
                  undefined4 param_5);
void recovered_100a2e48(int *param_1,int param_2,int *param_3,int param_4);
void recovered_100a35b8(int *param_1,int param_2,uint param_3,uint *param_4);
undefined1 * recovered_100a4808(char *param_1);
bool recovered_100a486c(byte *param_1,int param_2);
bool recovered_100a4b20(byte *param_1);
void recovered_100a50f0(int *param_1,int param_2,uint param_3,char *param_4,byte *param_5);
undefined4 recovered_100a5430(int param_1,int param_2,uint param_3);
uint * recovered_100a5930(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4);
undefined4 recovered_100a5ab0(int param_1,int param_2,uint param_3);
int recovered_100a5f38(int param_1,int param_2,int param_3,byte *param_4);
undefined4 recovered_100a60ec(byte *param_1,double *param_2);
undefined4
recovered_100a625c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                  int *param_6);
bool recovered_100a70e8(undefined4 *param_1,byte *param_2,int param_3,int *param_4);
void recovered_100a78a0(int param_1,uint param_2,byte *param_3,undefined4 param_4,undefined4 param_5
                       );
uint recovered_100a7964(int param_1,uint param_2);
void recovered_100a7d2c(int *param_1,undefined4 *param_2);
void recovered_100a7dd0(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4,uint *param_5);
undefined4 recovered_100a8390(int param_1,int *param_2);
void recovered_100a8480(undefined4 *param_1,int *param_2);
void recovered_100a84a8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100a863c(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100a8758(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 *param_6,uint param_7,uint param_8);
void recovered_100a906c(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100a9130(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 *param_6,int param_7);
undefined4 recovered_100a9290(void);
uint recovered_100a9298(int param_1,int param_2,int *param_3);
void recovered_100a9418(int param_1,uint param_2);
void recovered_100a9448(int *param_1,int param_2);
void recovered_100a98b8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100a9a28(undefined4 *param_1,int *param_2);
void recovered_100a9a50(undefined8 *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_100a9c84(void);
byte recovered_100a9c8c(int *param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                       uint param_6);
byte recovered_100a9d40(int *param_1,int *param_2,uint *param_3,undefined4 param_4);
void recovered_100a9ec8(int *param_1,int *param_2);
byte recovered_100aa760(int *param_1,int param_2,uint *param_3,uint *param_4,int param_5,
                       undefined4 param_6);
uint * recovered_100aa8bc(int *param_1,uint *param_2,int param_3);
void recovered_100aacbc(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_100ab0ec(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100ab11c(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100ab4e4(undefined4 *param_1,int *param_2);
void recovered_100ab50c(undefined8 *param_1,int *param_2);
void recovered_100ab9b4(undefined4 *param_1,int *param_2,int param_3,int param_4);
void recovered_100aba8c(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 *param_6,int param_7,uint param_8);
void recovered_100abb90(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100abcc8(uint *param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
                       undefined4 *param_6,int param_7,int param_8);
void recovered_100abec8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100ac0b4(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100ac4cc(undefined4 *param_1,int *param_2,uint param_3,uint param_4);
void recovered_100ac608(undefined4 *param_1,int *param_2,uint param_3,int *param_4,
                       undefined4 param_5,undefined8 *param_6,int param_7,int param_8);
void recovered_100ac7e0(undefined8 *param_1,int *param_2,undefined4 param_3,void *param_4,
                       undefined1 param_5);
undefined4 recovered_100ac894(void);
undefined4 recovered_100ac8a0(int param_1,uint param_2);
undefined4 recovered_100ac9f0(void);
void recovered_100ac9f8(int param_1,uint param_2,int param_3,undefined4 *param_4);
void recovered_100acec4(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
int * recovered_100ad0e8(int param_1,int *param_2,uint param_3);
void recovered_100ad3fc(undefined8 *param_1,int *param_2);
void recovered_100ad6ac(undefined8 *param_1,int *param_2);
void recovered_100ad92c(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100add00(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,uint param_8);
int recovered_100ae30c(int *param_1,uint param_2,uint *param_3,uint param_4,int *param_5,int param_6
                      );
byte recovered_100ae4a4(int *param_1,byte *param_2,uint param_3,int *param_4,int *param_5);
undefined4 recovered_100aecc0(char *param_1);
byte recovered_100aed8c(int *param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5);
uint recovered_100af04c(int *param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                       int param_6);
int recovered_100b07ec(int *param_1,byte *param_2,int param_3,int param_4);
char * recovered_100b08f0(int *param_1,char *param_2,uint param_3,uint param_4,int param_5);
void recovered_100b0cc0(int *param_1,int param_2);
bool recovered_100b0d9c(uint param_1,int param_2);
void recovered_100b0f94(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 recovered_100b1074(void);
undefined1 * recovered_100b107c(int *param_1,int *param_2,int param_3);
void recovered_100b1744(int *param_1,int *param_2);
int * recovered_100b18d8(int *param_1,int param_2);
void recovered_100b1940(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,uint param_8);
undefined4 recovered_100b1ee8(int *param_1,byte param_2,ushort *param_3,int param_4);
undefined4 recovered_100b3f60(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
undefined4 recovered_100b3fe0(int param_1);
uint recovered_100b4184(int param_1);
int * recovered_100b4278(undefined4 *param_1,int param_2);
uint recovered_100b4568(int param_1);
undefined4 recovered_100b46fc(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
bool recovered_100b5b24(int param_1,int param_2);
void recovered_100b5c0c(undefined4 *param_1,int *param_2);
void recovered_100b5c38(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_100b5f00(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100b6084(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,uint param_8);
undefined4 recovered_100b6200(void);
int recovered_100b6208(int *param_1,int *param_2,int *param_3);
undefined4 recovered_100b64cc(int *param_1,int *param_2);
int * recovered_100b6b3c(int param_1,int param_2);
void recovered_100b6cc8(undefined8 *param_1,int *param_2,int param_3,int param_4,uint *param_5,
                       int param_6);
undefined4
recovered_100b6f18(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                  undefined1 *param_6);
undefined1 recovered_100b708c(int *param_1,int param_2,int *param_3,undefined4 param_4);
undefined4
recovered_100b7180(int *param_1,int param_2,int *param_3,int param_4,int param_5,undefined1 *param_6
                  );
uint recovered_100b7334(int *param_1,int *param_2,undefined4 *param_3);
bool recovered_100b7808(int *param_1,int *param_2,int *param_3);
void recovered_100b7bb8(int *param_1,int *param_2,int *param_3);
void recovered_100b7e4c(undefined8 *param_1,int *param_2);
void recovered_100b80c0(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
void recovered_100b8880(undefined8 *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_100b8ab0(void);
void recovered_100b8ab8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100b8c80(undefined8 *param_1,int *param_2);
void recovered_100b91e0(undefined8 *param_1,int *param_2,int param_3,uint param_4);
void recovered_100b92c0(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int *param_6,uint param_7);
void recovered_100b956c(undefined8 *param_1,int *param_2,uint param_3,uint param_4,
                       undefined4 param_5,int *param_6,int param_7,int param_8);
int * recovered_100b96f8(int *param_1,int param_2,undefined1 param_3,undefined1 param_4,
                        undefined1 param_5);
void recovered_100b979c(undefined8 *param_1,int *param_2);
void recovered_100b9cdc(undefined8 *param_1,int *param_2,int param_3,uint param_4);
void recovered_100b9d34(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,uint param_7,int param_8);
void recovered_100b9fc4(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100ba758(undefined8 *param_1,int *param_2);
void recovered_100ba9b0(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
void recovered_100bad80(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bb02c(undefined4 *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_100bb094(void);
void recovered_100bb09c(int param_1,int param_2,int param_3);
undefined4 recovered_100bb104(void);
undefined4 recovered_100bb10c(void);
void recovered_100bb114(undefined8 *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_100bb268(void);
void recovered_100bb270(undefined4 *param_1,int *param_2);
void recovered_100bb298(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,uint param_7,uint param_8);
void recovered_100bb990(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bbb5c(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7);
void recovered_100bbda8(undefined8 *param_1,int *param_2,uint param_3,uint param_4);
void recovered_100bbe18(undefined8 *param_1,int *param_2);
void recovered_100bc354(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bc434(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int param_6,uint param_7,int param_8);
void recovered_100bc548(undefined8 *param_1,int *param_2,uint param_3,uint param_4,
                       undefined4 param_5,int *param_6,int param_7,uint param_8);
byte * recovered_100bc700(int *param_1,int param_2,undefined4 *param_3);
int * recovered_100bcb90(int *param_1,int param_2,uint *param_3,undefined *param_4);
bool recovered_100bcd7c(int *param_1,int *param_2);
void recovered_100bcf28(undefined8 *param_1,int *param_2,int param_3);
void recovered_100bd8b8(int *param_1);
int * recovered_100bd940(int *param_1,int *param_2,int param_3,uint *param_4,undefined *param_5,
                        uint param_6);
int * recovered_100be5e0(int *param_1,int *param_2,int param_3);
uint * recovered_100be728(int *param_1,int *param_2,uint *param_3);
uint * recovered_100be8dc(int *param_1,uint *param_2);
void recovered_100bea9c(undefined8 *param_1,int *param_2,int param_3);
void recovered_100beb48(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bee90(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,int param_8);
void recovered_100bf1b8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bf27c(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 *param_6,int param_7,int param_8);
void recovered_100bf3d0(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100bf5a8(undefined8 *param_1,int *param_2,uint *param_3,int param_4,int param_5,
                       int param_6);
void recovered_100bf7ec(undefined8 *param_1,int *param_2);
void recovered_100c0fc8(int *param_1,int param_2,int *param_3,int param_4);
void recovered_100c118c(undefined8 *param_1,int *param_2);
void recovered_100c1300(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       uint *param_6,int param_7,uint param_8);
void recovered_100c1ad4(undefined8 *param_1,int *param_2,int param_3,int param_4);
uint recovered_100c1d94(int *param_1,int *param_2,int param_3,uint *param_4,undefined *param_5);
undefined4 recovered_100c237c(void);
uint * recovered_100c2384(int *param_1,uint param_2,uint *param_3,uint param_4);
undefined4 recovered_100c2418(int *param_1,int *param_2,uint *param_3,uint *param_4,int param_5);
uint * recovered_100c3858(int *param_1,uint *param_2);
int * recovered_100c39f4(int *param_1,uint *param_2,uint *param_3,uint param_4);
undefined4 recovered_100c3ad4(void);
void recovered_100c3adc(undefined8 *param_1,int *param_2);
void recovered_100c3c0c(undefined4 *param_1,int *param_2);
void recovered_100c3c34(undefined8 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                       int *param_6,int param_7,int param_8);
void recovered_100c3f14(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,int *param_6,int param_7,int param_8);
void recovered_100c41b8(undefined8 *param_1,int *param_2,int param_3,uint *param_4,
                       undefined4 param_5,int *param_6,int param_7);
int * recovered_100c41e8(int *param_1);
undefined4 recovered_100c42f8(void);
undefined4 recovered_100c4300(void);
void recovered_100c4308(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint param_5,
                       int param_6,uint param_7,int param_8);
void recovered_100c43cc(int *param_1,int *param_2,int param_3,int param_4,int param_5);
void recovered_100c4500(undefined8 *param_1,int *param_2);
void recovered_100c4bc8(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100c4de4(undefined8 *param_1,int *param_2,int param_3,int param_4);
void recovered_100c51b0(undefined8 *param_1,int *param_2);
int * recovered_100c5220(int *param_1);
undefined4
recovered_100c5358(int *param_1,uint param_2,uint *param_3,uint param_4,int *param_5,uint *param_6,
                  undefined4 *param_7);
undefined4 recovered_100c5474(void);
int recovered_100c547c(int *param_1,int *param_2);
undefined4 recovered_100c55b8(int param_1,uint *param_2,byte *param_3);
void recovered_100c5670(char *param_1,char *param_2,undefined1 *param_3);
void recovered_100c58a4(undefined4 param_1,char *param_2,undefined1 *param_3);
void recovered_100c5b2c(int param_1,undefined1 *param_2);
int recovered_100c5be4(byte *param_1,uint *param_2,byte *param_3);
undefined4 recovered_100c5fc4(int param_1,byte *param_2);
int * recovered_100c611c(int param_1,int param_2);
int recovered_100c61d0(uint *param_1);
bool recovered_100c6304(int param_1);
void recovered_100c64bc(int param_1,int param_2);
undefined1 recovered_100c6558(int param_1,char *param_2);
undefined4
recovered_100c680c(uint param_1,int *param_2,int param_3,int param_4,uint param_5,uint *param_6,
                  undefined1 *param_7,int param_8,int param_9,char *param_10,ulong param_11,
                  undefined *param_12,undefined4 param_13,byte *param_14,byte *param_15,
                  byte *param_16);
undefined4 recovered_100c860c(int *param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
void recovered_100c8b50(undefined4 *param_1,int param_2,uint param_3);
bool recovered_100c8c90(int param_1,byte *param_2,uint param_3,uint param_4,char *param_5,
                       char *param_6,byte *param_7,int param_8);
undefined4
recovered_100c9524(int *param_1,uint param_2,uint param_3,int param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 *param_8,uint param_9,uint *param_10,char *param_11,
                  ulong param_12,undefined *param_13,undefined4 param_14);
undefined4 recovered_100c99b4(int param_1,byte *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_100c9bc0(int param_1);
undefined4 recovered_100c9d04(int param_1,int param_2,byte *param_3,char *param_4,ulong param_5);
bool recovered_100c9f6c(int param_1);
bool recovered_100ca0ec(int param_1,uint param_2,int param_3,int param_4,int *param_5,char *param_6,
                       ulong param_7);
undefined4 recovered_100ca15c(int param_1,uint *param_2);
bool recovered_100ca1fc(char *param_1);
bool recovered_100ca254(int param_1,int param_2,uint param_3,uint param_4);
undefined4 recovered_100ca434(undefined4 *param_1,ushort *param_2,undefined8 *param_3);
bool recovered_100ca994(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,int param_7,uint param_8);
void recovered_100cab1c(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       uint param_6);
void recovered_100cac18(undefined4 *param_1,uint param_2,undefined4 param_3);
bool recovered_100cacf4(ushort *param_1,ushort *param_2,uint param_3,uint *param_4,char *param_5);
undefined4
recovered_100caef8(undefined4 *param_1,int *param_2,uint param_3,uint param_4,int param_5,
                  char *param_6,ulong param_7);
undefined4
recovered_100cb3e0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5);
void recovered_100cb4d8(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5);
bool recovered_100cb4f8(int *param_1,undefined1 *param_2,int param_3);
bool recovered_100cb6a8(int param_1,byte *param_2,int param_3,int param_4,char *param_5,
                       ulong param_6);
void recovered_100cbab8(int *param_1);
bool recovered_100cbb44(int param_1,uint *param_2,uint *param_3);
bool recovered_100cbcc8(int param_1,uint param_2);
bool recovered_100cbefc(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,byte param_8,int param_9,int param_10);
undefined4
recovered_100cc1a4(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint *param_7,uint *param_8,byte *param_9,undefined4 *param_10,short *param_11);
uint recovered_100cc314(int *param_1,char *param_2,ulong param_3);
undefined4 recovered_100cc8a4(int *param_1,int param_2,uint param_3,char *param_4,ulong param_5);
undefined4 recovered_100cc9e8(int param_1,uint param_2,int param_3,int param_4,int *param_5);
void recovered_100ccc58(int param_1,int param_2,byte *param_3,int param_4,uint param_5);
int recovered_100cf4f8(int *param_1,int param_2,int *param_3,undefined4 param_4);
uint * recovered_100cf5fc(int *param_1,int param_2);
void recovered_100cf7d0(int *param_1);
int * recovered_100cf8b8(int *param_1,int param_2);
void recovered_100cf9e8(int *param_1,int param_2,char *param_3);
byte recovered_100cfb3c(int *param_1,void *param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_100cff6c(undefined1 *param_1,undefined1 *param_2);
bool recovered_100d0044(byte *param_1);
void recovered_100d0538(int param_1,byte *param_2,byte *param_3,uint param_4);
void recovered_100d13e8(uint param_1,uint param_2);
void recovered_100d5b68(int param_1,int param_2,uint param_3,int *param_4,uint param_5,
                       undefined1 *param_6,uint param_7,int param_8);
void recovered_100d5c94(int param_1,int *param_2,int param_3,int param_4,int *param_5,uint *param_6);
void recovered_100d6e5c(int param_1,int param_2,int param_3);
bool recovered_100d70d4(int param_1,uint *param_2,uint param_3,int *param_4);
char * recovered_100d7354(uint param_1,byte *param_2);
bool recovered_100d7adc(byte *param_1);
void recovered_100d81a8(int param_1,int *param_2,int param_3,uint *param_4,int *param_5,
                       uint *param_6,int *param_7);
void recovered_100db698(byte *param_1,char *param_2);
void recovered_100db8fc(int param_1,int *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       uint param_6,int param_7);
byte recovered_100db95c(byte *param_1);
undefined4 recovered_100dbc20(int param_1,uint param_2,byte *param_3,int param_4,undefined4 param_5);
void recovered_100dbd3c(int param_1,uint *param_2);
void recovered_100dc220(int param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,
                       uint param_5,int param_6,int *param_7);
void recovered_100dc3ac(uint param_1,uint param_2,undefined4 *param_3,byte *param_4,uint param_5);
undefined4 recovered_100dcd0c(byte *param_1,undefined4 param_2);
undefined4 recovered_100dd128(int param_1,uint param_2);
void recovered_100dd244(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
void recovered_100dd324(int param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,int param_7,int param_8,int *param_9);
void recovered_100dd5c4(int param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7);
void recovered_100dd7b4(char *param_1,char *param_2,undefined1 *param_3);
undefined4 recovered_100ddb44(int param_1,uint param_2,undefined1 *param_3);
void recovered_100de04c(int param_1,int *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       uint param_6,int param_7);
uint recovered_100dee64(int param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,
                       int param_6,uint *param_7);
void recovered_100df1b8(int param_1,int param_2,undefined4 param_3);
void recovered_100df2c4(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6);
void recovered_100df5e4(int param_1,int param_2,undefined4 *param_3,uint param_4,int param_5,
                       int param_6);
uint recovered_100df8d4(int param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined4 recovered_100df9f8(int param_1,uint param_2,int param_3,int *param_4);
uint recovered_100dfc24(int param_1,uint param_2,int param_3,uint param_4,uint *param_5);
undefined4 recovered_100e15c8(byte *param_1);
bool recovered_100e1720(byte *param_1,byte *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_100e18bc(byte *param_1);
void recovered_100e1a98(int param_1,int param_2);
void recovered_100e20e0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7);
int recovered_100e2320(int param_1,uint param_2,int param_3,int param_4,char *param_5);
bool recovered_100e29b0(int param_1,uint param_2,uint param_3,int param_4);
uint recovered_100e2adc(int param_1,uint param_2,uint param_3,int param_4,uint param_5);
char * recovered_100e2db8(uint param_1,byte *param_2);
bool recovered_100e2ec0(char *param_1,char *param_2,byte *param_3,undefined1 *param_4);
uint recovered_100e2fe4(int param_1,int param_2);
void recovered_100e30b4(int param_1,uint param_2,char *param_3,int param_4,uint *param_5,
                       undefined4 param_6);
void recovered_100e32b4(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5);
int recovered_100e35ec(int param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6);
int recovered_100e4228(int param_1,int param_2,uint param_3,uint param_4,int param_5);
void recovered_100e4528(int param_1,byte *param_2,int param_3,char *param_4,int param_5);
byte * recovered_100e5a44(byte *param_1,byte *param_2,byte *param_3);
undefined4
recovered_100e5b74(byte *param_1,byte *param_2,int param_3,int param_4,int *param_5,int param_6,
                  uint param_7);
undefined4 recovered_100e61cc(byte *param_1,byte *param_2,int param_3,int *param_4);
undefined4 recovered_100e6550(byte *param_1,byte *param_2,int param_3,undefined4 *param_4);
undefined4 recovered_100e6b08(undefined4 *param_1,byte *param_2,double *param_3);
undefined1 recovered_100e6e48(byte *param_1,int param_2,char *param_3);
int recovered_100e7434(byte *param_1);
byte recovered_100e7684(int param_1,uint param_2);
void recovered_100e7da8(int param_1,byte *param_2,uint param_3,undefined4 *param_4);
void recovered_100e80e8(int param_1,char *param_2,uint param_3,undefined4 *param_4);
uint recovered_100e82c4(char *param_1);
void recovered_100e8400(int param_1,uint *param_2);
bool recovered_100e86e0(int param_1,uint param_2,int param_3);
bool recovered_100e8a14(int param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       void *param_6);
void recovered_100e8b78(int param_1,int param_2,byte *param_3,byte *param_4);
bool recovered_100e9068(int param_1);
void recovered_100e9250(uint param_1,uint param_2,byte *param_3);
void recovered_100e952c(uint param_1,uint param_2,char *param_3,char *param_4);
bool recovered_100e95d8(int param_1);
void recovered_100e9684(void);
undefined4 recovered_100e9738(int param_1,int param_2,byte *param_3,uint param_4);
bool recovered_100e98b4(int param_1,byte *param_2);
void recovered_100e9974(byte *param_1);
void recovered_100e9aa8(char *param_1,byte *param_2,ulong param_3);
undefined4 recovered_100e9d94(void);
undefined1 recovered_100e9de8(int *param_1,int param_2);
void recovered_100ea11c(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100ea12c(int param_1);
void recovered_100ea2ec(int param_1);
void recovered_100ea474(int param_1);
undefined4 recovered_100ea5cc(int param_1,int param_2);
void recovered_100ea808(uint param_1);
uint recovered_100eaa64(uint param_1,uint param_2,int param_3);
byte recovered_100eaf40(uint param_1,uint param_2,char *param_3);
void recovered_100eb200(int param_1,byte *param_2);
void recovered_100eb34c(undefined4 *param_1,int param_2);
int * recovered_100eb40c(int param_1,int param_2,int param_3);
uint recovered_100eb8bc(uint param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_100ebdc8(int param_1,int param_2,int param_3,int param_4,int param_5,double *param_6,
                       double *param_7);
undefined4 recovered_100ebfd8(int param_1,int param_2);
int * recovered_100ec1a8(int param_1,int param_2,undefined4 param_3,uint param_4);
void recovered_100ec370(uint param_1,int param_2);
undefined4 recovered_100ec7a4(int param_1,int param_2);
undefined4 recovered_100ecd7c(int param_1,int param_2);
undefined4 recovered_100ecfcc(int param_1,int param_2);
undefined4 recovered_100ed2c8(uint param_1,int param_2,byte *param_3);
void recovered_100ed598(uint param_1,uint param_2,int param_3);
uint recovered_100ed73c(int *param_1,int param_2,int *param_3,int *param_4,undefined8 *param_5,
                       uint param_6);
void recovered_100ed9fc(int *param_1,int param_2,uint param_3,uint *param_4,uint param_5,int param_6
                       );
undefined4 recovered_100edd04(int *param_1,int param_2,int *param_3,int *param_4,uint param_5);
bool recovered_100edfb4(int *param_1,int param_2);
undefined4 recovered_100ee2a0(int *param_1,int param_2,int *param_3,int *param_4,uint param_5);
void recovered_100ee6b4(int *param_1,int param_2);
void recovered_100ee950(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       int param_6);
void recovered_100eed60(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       uint param_6);
void recovered_100eee8c(int param_1,int param_2,uint128 *param_3,uint *param_4,
                       uint param_5);
void recovered_100ef14c(int *param_1);
uint recovered_100ef890(int param_1,uint *param_2,uint *param_3);
uint recovered_100f3200(int *param_1);
undefined4 recovered_100f326c(int param_1,byte *param_2,uint param_3);
undefined4 recovered_100f3570(int param_1,int param_2,int param_3,uint param_4);
bool recovered_100f3744(int *param_1,byte *param_2,uint param_3);
void recovered_100f4b10(uint *param_1);
uint recovered_100f4cd0(byte *param_1,uint param_2,int param_3,int param_4);
bool recovered_100f5f30(uint *param_1,uint param_2);
bool recovered_100f6508(int param_1);
undefined4 recovered_100f6590(int param_1,byte *param_2,int param_3,int param_4);
undefined2 recovered_100f6710(int *param_1,int param_2);
uint recovered_100f6864(uint *param_1,int param_2,int param_3);
bool recovered_100f7ad8(int *param_1);
uint recovered_100f7b58(uint param_1,uint param_2,byte *param_3,byte *param_4,uint param_5,
                       int param_6);
undefined4 recovered_100f7d20(byte *param_1);
undefined4
recovered_100f8340(uint param_1,uint param_2,int param_3,int param_4,double *param_5,int *param_6,
                  int *param_7);
undefined4
recovered_100f9710(int param_1,byte *param_2,byte *param_3,int param_4,uint *param_5,uint param_6,
                  byte param_7,int param_8);
undefined4 recovered_100f9ccc(undefined4 *param_1,int param_2,uint param_3);
undefined4 recovered_100f9de0(int *param_1,int param_2);
undefined4 recovered_100fa0f8(int *param_1,uint param_2,int param_3,undefined4 param_4);
char * recovered_100fa3ec(int *param_1,uint param_2,void *param_3,int param_4);
undefined4
recovered_100fa540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  double param_5,double param_6,double param_7,double param_8);
uint recovered_100fa640(int param_1,undefined4 *param_2);
undefined4 recovered_100fb6a8(int param_1,int *param_2,uint param_3,int param_4,uint *param_5);
undefined4 recovered_100fbe10(void);
undefined4 recovered_100fbf48(void);
void recovered_100fc080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,double param_6,double param_7);
void recovered_100fc110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,int param_10,int param_11);
void recovered_100fcdb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,double param_6,double param_7,double param_8,
                       double param_9,double param_10,double param_11);
void recovered_100fcec8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,double param_6,double param_7,double param_8,
                       double param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                       undefined4 param_13,int param_14);
void recovered_100fd1c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9);
undefined4 recovered_100fd2e8(void);
uint recovered_100fd490(int *param_1);
undefined4
recovered_100fd660(int param_1,uint param_2,int param_3,uint param_4,int *param_5,int *param_6,
                  int *param_7);
int recovered_100fef30(int *param_1,uint param_2);
undefined4 recovered_100fef9c(int *param_1);
void recovered_100ff020(int *param_1,int *param_2,uint param_3);
undefined4
recovered_100ff0ec(int param_1,int param_2,int param_3,int *param_4,uint param_5,uint param_6,
                  int *param_7);
byte recovered_10100ab4(int param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6,
                       int param_7,uint param_8);
int recovered_10100de4(int param_1,uint param_2);
uint recovered_10100e8c(int *param_1,uint param_2);
int recovered_10100f40(int *param_1);
bool recovered_101010c0(int *param_1,int param_2,uint param_3,int param_4);
undefined4 recovered_10101660(int *param_1,int param_2,uint param_3);
uint recovered_10101f68(int *param_1,uint *param_2);
uint recovered_101020d4(int *param_1,int param_2);
bool recovered_101022c0(int param_1,uint param_2,uint param_3,int param_4);
undefined4 recovered_10102640(int param_1,int param_2,int param_3,int param_4,int param_5);
ushort recovered_101027dc(int *param_1);
void recovered_10102894(int *param_1,uint param_2);
void recovered_1010290c(int *param_1,undefined1 param_2);
void recovered_1010297c(int *param_1);
void recovered_10102b24(undefined8 *param_1,int param_2,int *param_3);
uint recovered_10102d44(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                       );
void recovered_101032dc(int param_1,int param_2,int param_3,char *param_4,int param_5,uint param_6);
void recovered_10103548(int param_1,uint param_2,uint param_3,short param_4,short param_5,
                       short param_6,int param_7);
void recovered_1010366c(int param_1,int *param_2,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10103930(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                       uint param_7,int param_8);
void recovered_10106a84(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
                       uint param_7);
void recovered_10106cc8(int param_1,int param_2,uint *param_3,int *param_4);
uint recovered_10107370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       double *param_5);
int recovered_101076a8(int param_1,uint param_2,byte *param_3,byte *param_4,int param_5,int param_6);

/* Original analysis identifiers for manual recovery units. */
