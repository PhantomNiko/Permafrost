/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "arm64-recovery.h"
#include "cpu.h"
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
void bzero(void *p,unsigned long size);
void * memchr(const void *p,int c,unsigned long size);
char * strcpy(char *dst,const char *src);
unsigned long strcspn(const char *src,const char *reject);
#define UINT_82010800 (*(uint32_t *)(uintptr_t)0x82010800U)
#define UINT_82010804 (*(uint32_t *)(uintptr_t)0x82010804U)
#define UINT_82010808 (*(uint32_t *)(uintptr_t)0x82010808U)
#define UINT_8201080c (*(uint32_t *)(uintptr_t)0x8201080cU)
#define UINT_82010810 (*(uint32_t *)(uintptr_t)0x82010810U)
#define UINT_82010814 (*(uint32_t *)(uintptr_t)0x82010814U)
#define UINT_82010818 (*(uint32_t *)(uintptr_t)0x82010818U)
#define UINT_8201081c (*(uint32_t *)(uintptr_t)0x8201081cU)
#define UINT_82010820 (*(uint32_t *)(uintptr_t)0x82010820U)
#define UINT_82010824 (*(uint32_t *)(uintptr_t)0x82010824U)
#define UINT_82010828 (*(uint32_t *)(uintptr_t)0x82010828U)
#define UINT_8201082c (*(uint32_t *)(uintptr_t)0x8201082cU)
#define UINT_82010830 (*(uint32_t *)(uintptr_t)0x82010830U)
#define UINT_82010834 (*(uint32_t *)(uintptr_t)0x82010834U)
#define UINT_82010838 (*(uint32_t *)(uintptr_t)0x82010838U)
#define UINT_8201083c (*(uint32_t *)(uintptr_t)0x8201083cU)
#define UINT_82010840 (*(uint32_t *)(uintptr_t)0x82010840U)
#define UINT_82010844 (*(uint32_t *)(uintptr_t)0x82010844U)
#define UINT_82010848 (*(uint32_t *)(uintptr_t)0x82010848U)
#define UINT_8201084c (*(uint32_t *)(uintptr_t)0x8201084cU)
#define UINT_82010850 (*(uint32_t *)(uintptr_t)0x82010850U)
#define UINT_82010854 (*(uint32_t *)(uintptr_t)0x82010854U)
#define UINT_82010858 (*(uint32_t *)(uintptr_t)0x82010858U)
#define UINT_8201085c (*(uint32_t *)(uintptr_t)0x8201085cU)
#define UINT_82010860 (*(uint32_t *)(uintptr_t)0x82010860U)
#define UINT_82010864 (*(uint32_t *)(uintptr_t)0x82010864U)
#define UINT_82010868 (*(uint32_t *)(uintptr_t)0x82010868U)
#define UINT_8201086c (*(uint32_t *)(uintptr_t)0x8201086cU)
#define UINT_82010870 (*(uint32_t *)(uintptr_t)0x82010870U)
#define UINT_82010874 (*(uint32_t *)(uintptr_t)0x82010874U)
#define UINT_82010878 (*(uint32_t *)(uintptr_t)0x82010878U)
#define UINT_8201087c (*(uint32_t *)(uintptr_t)0x8201087cU)
#define UINT_82010880 (*(uint32_t *)(uintptr_t)0x82010880U)
#define UINT_82010884 (*(uint32_t *)(uintptr_t)0x82010884U)
#define UINT_82010888 (*(uint32_t *)(uintptr_t)0x82010888U)
#define UINT_8201088c (*(uint32_t *)(uintptr_t)0x8201088cU)
#define UINT_82010890 (*(uint32_t *)(uintptr_t)0x82010890U)
#define UINT_82010894 (*(uint32_t *)(uintptr_t)0x82010894U)
#define UINT_82010898 (*(uint32_t *)(uintptr_t)0x82010898U)
#define UINT_8201089c (*(uint32_t *)(uintptr_t)0x8201089cU)
#define UINT_820108a0 (*(uint32_t *)(uintptr_t)0x820108a0U)
#define UINT_820108a4 (*(uint32_t *)(uintptr_t)0x820108a4U)
#define UINT_820108a8 (*(uint32_t *)(uintptr_t)0x820108a8U)
#define UINT_820108ac (*(uint32_t *)(uintptr_t)0x820108acU)
#define UINT_820108b0 (*(uint32_t *)(uintptr_t)0x820108b0U)
#define UINT_820108b4 (*(uint32_t *)(uintptr_t)0x820108b4U)
#define UINT_820108b8 (*(uint32_t *)(uintptr_t)0x820108b8U)
#define UINT_820108bc (*(uint32_t *)(uintptr_t)0x820108bcU)
#define UINT_820108c0 (*(uint32_t *)(uintptr_t)0x820108c0U)
#define UINT_820108c4 (*(uint32_t *)(uintptr_t)0x820108c4U)
#define UINT_820108c8 (*(uint32_t *)(uintptr_t)0x820108c8U)
#define UINT_820108cc (*(uint32_t *)(uintptr_t)0x820108ccU)
#define UINT_820108d0 (*(uint32_t *)(uintptr_t)0x820108d0U)
#define UINT_820108d4 (*(uint32_t *)(uintptr_t)0x820108d4U)
#define UINT_820108d8 (*(uint32_t *)(uintptr_t)0x820108d8U)
#define UINT_820108dc (*(uint32_t *)(uintptr_t)0x820108dcU)
#define UINT_820108e0 (*(uint32_t *)(uintptr_t)0x820108e0U)
#define UINT_820108e4 (*(uint32_t *)(uintptr_t)0x820108e4U)
#define UINT_820108e8 (*(uint32_t *)(uintptr_t)0x820108e8U)
#define UINT_820108ec (*(uint32_t *)(uintptr_t)0x820108ecU)
#define UINT_820108f0 (*(uint32_t *)(uintptr_t)0x820108f0U)
#define UINT_820108f4 (*(uint32_t *)(uintptr_t)0x820108f4U)
#define UINT_820108f8 (*(uint32_t *)(uintptr_t)0x820108f8U)
#define UINT_820108fc (*(uint32_t *)(uintptr_t)0x820108fcU)
#define UINT_82010900 (*(uint32_t *)(uintptr_t)0x82010900U)
#define UINT_82010904 (*(uint32_t *)(uintptr_t)0x82010904U)
#define UINT_82010908 (*(uint32_t *)(uintptr_t)0x82010908U)
#define UINT_8201090c (*(uint32_t *)(uintptr_t)0x8201090cU)
#define UINT_82010910 (*(uint32_t *)(uintptr_t)0x82010910U)
#define UINT_82010914 (*(uint32_t *)(uintptr_t)0x82010914U)
#define UINT_82010918 (*(uint32_t *)(uintptr_t)0x82010918U)
#define UINT_8201091c (*(uint32_t *)(uintptr_t)0x8201091cU)
#define UINT_82010920 (*(uint32_t *)(uintptr_t)0x82010920U)
#define UINT_82010924 (*(uint32_t *)(uintptr_t)0x82010924U)
#define UINT_82010928 (*(uint32_t *)(uintptr_t)0x82010928U)
#define UINT_8201092c (*(uint32_t *)(uintptr_t)0x8201092cU)
#define UINT_82010930 (*(uint32_t *)(uintptr_t)0x82010930U)
#define UINT_82010934 (*(uint32_t *)(uintptr_t)0x82010934U)
#define UINT_82010938 (*(uint32_t *)(uintptr_t)0x82010938U)
#define UINT_8201093c (*(uint32_t *)(uintptr_t)0x8201093cU)
#define UINT_82010940 (*(uint32_t *)(uintptr_t)0x82010940U)
#define UINT_82010944 (*(uint32_t *)(uintptr_t)0x82010944U)
#define UINT_82010948 (*(uint32_t *)(uintptr_t)0x82010948U)
#define UINT_8201094c (*(uint32_t *)(uintptr_t)0x8201094cU)
#define UINT_82010950 (*(uint32_t *)(uintptr_t)0x82010950U)
#define UINT_82010954 (*(uint32_t *)(uintptr_t)0x82010954U)
#define UINT_82010958 (*(uint32_t *)(uintptr_t)0x82010958U)
#define UINT_8201095c (*(uint32_t *)(uintptr_t)0x8201095cU)
#define UINT_82010960 (*(uint32_t *)(uintptr_t)0x82010960U)
#define UINT_82010964 (*(uint32_t *)(uintptr_t)0x82010964U)
#define UINT_82010968 (*(uint32_t *)(uintptr_t)0x82010968U)
#define UINT_8201096c (*(uint32_t *)(uintptr_t)0x8201096cU)
#define UINT_82010970 (*(uint32_t *)(uintptr_t)0x82010970U)
#define UINT_82010974 (*(uint32_t *)(uintptr_t)0x82010974U)
#define UINT_82010978 (*(uint32_t *)(uintptr_t)0x82010978U)
#define UINT_8201097c (*(uint32_t *)(uintptr_t)0x8201097cU)
#define UINT_82010980 (*(uint32_t *)(uintptr_t)0x82010980U)
#define UINT_82010984 (*(uint32_t *)(uintptr_t)0x82010984U)
#define UINT_82010988 (*(uint32_t *)(uintptr_t)0x82010988U)
#define UINT_8201098c (*(uint32_t *)(uintptr_t)0x8201098cU)
#define UINT_82010990 (*(uint32_t *)(uintptr_t)0x82010990U)
#define UINT_82010994 (*(uint32_t *)(uintptr_t)0x82010994U)
#define UINT_82010998 (*(uint32_t *)(uintptr_t)0x82010998U)
#define UINT_8201099c (*(uint32_t *)(uintptr_t)0x8201099cU)
#define UINT_820109a0 (*(uint32_t *)(uintptr_t)0x820109a0U)
#define UINT_820109a4 (*(uint32_t *)(uintptr_t)0x820109a4U)
#define UINT_820109a8 (*(uint32_t *)(uintptr_t)0x820109a8U)
#define UINT_820109ac (*(uint32_t *)(uintptr_t)0x820109acU)
#define UINT_820109b0 (*(uint32_t *)(uintptr_t)0x820109b0U)
#define UINT_820109b4 (*(uint32_t *)(uintptr_t)0x820109b4U)
#define UINT_820109b8 (*(uint32_t *)(uintptr_t)0x820109b8U)
#define UINT_820109bc (*(uint32_t *)(uintptr_t)0x820109bcU)
#define UINT_820109c0 (*(uint32_t *)(uintptr_t)0x820109c0U)
#define UINT_820109c4 (*(uint32_t *)(uintptr_t)0x820109c4U)
#define UINT_820109c8 (*(uint32_t *)(uintptr_t)0x820109c8U)
#define UINT_820109cc (*(uint32_t *)(uintptr_t)0x820109ccU)
#define UINT_820109d0 (*(uint32_t *)(uintptr_t)0x820109d0U)
#define UINT_820109d4 (*(uint32_t *)(uintptr_t)0x820109d4U)
#define UINT_820109d8 (*(uint32_t *)(uintptr_t)0x820109d8U)
#define UINT_820109dc (*(uint32_t *)(uintptr_t)0x820109dcU)
#define UINT_820109e0 (*(uint32_t *)(uintptr_t)0x820109e0U)
#define UINT_820109e4 (*(uint32_t *)(uintptr_t)0x820109e4U)
#define UINT_820109e8 (*(uint32_t *)(uintptr_t)0x820109e8U)
#define UINT_820109ec (*(uint32_t *)(uintptr_t)0x820109ecU)
#define UINT_820109f0 (*(uint32_t *)(uintptr_t)0x820109f0U)
#define UINT_820109f4 (*(uint32_t *)(uintptr_t)0x820109f4U)
#define UINT_820109f8 (*(uint32_t *)(uintptr_t)0x820109f8U)
#define UINT_820109fc (*(uint32_t *)(uintptr_t)0x820109fcU)
#define UINT_82010a00 (*(uint32_t *)(uintptr_t)0x82010a00U)
#define UINT_82010a04 (*(uint32_t *)(uintptr_t)0x82010a04U)
#define UINT_82010a08 (*(uint32_t *)(uintptr_t)0x82010a08U)
#define UINT_82010a0c (*(uint32_t *)(uintptr_t)0x82010a0cU)
#define UINT_82010a10 (*(uint32_t *)(uintptr_t)0x82010a10U)
#define UINT_82010a14 (*(uint32_t *)(uintptr_t)0x82010a14U)
#define UINT_82010a18 (*(uint32_t *)(uintptr_t)0x82010a18U)
#define UINT_82010a1c (*(uint32_t *)(uintptr_t)0x82010a1cU)
#define UINT_82010a20 (*(uint32_t *)(uintptr_t)0x82010a20U)
#define UINT_82010a24 (*(uint32_t *)(uintptr_t)0x82010a24U)
#define UINT_82010a28 (*(uint32_t *)(uintptr_t)0x82010a28U)
#define UINT_82010a2c (*(uint32_t *)(uintptr_t)0x82010a2cU)
#define UINT_82010a30 (*(uint32_t *)(uintptr_t)0x82010a30U)
#define UINT_82010a34 (*(uint32_t *)(uintptr_t)0x82010a34U)
#define UINT_82010a38 (*(uint32_t *)(uintptr_t)0x82010a38U)
#define UINT_82010a3c (*(uint32_t *)(uintptr_t)0x82010a3cU)
#define UINT_82010a40 (*(uint32_t *)(uintptr_t)0x82010a40U)
#define UINT_82010a44 (*(uint32_t *)(uintptr_t)0x82010a44U)
#define UINT_82010a48 (*(uint32_t *)(uintptr_t)0x82010a48U)
#define UINT_82010a4c (*(uint32_t *)(uintptr_t)0x82010a4cU)
#define UINT_82010a50 (*(uint32_t *)(uintptr_t)0x82010a50U)
#define UINT_82010a54 (*(uint32_t *)(uintptr_t)0x82010a54U)
#define UINT_82010a58 (*(uint32_t *)(uintptr_t)0x82010a58U)
#define UINT_82010a5c (*(uint32_t *)(uintptr_t)0x82010a5cU)
void *memmove(void *,const void *,unsigned long);
#ifndef ABS
#define ABS(value) __builtin_fabs(value)
#endif
static inline uint128 NEON_scvtf(uint128 value,unsigned lane){uint128 result=0;if(lane==8){for(unsigned i=0;i<2;i++){int64_t x=(int64_t)(uint64_t)(value>>(i*64));result|=(uint128)pf_double_bits((double)x)<<(i*64);}}else if(lane==4){for(unsigned i=0;i<4;i++){int32_t x=(int32_t)(uint32_t)(value>>(i*32));result|=(uint128)pf_float_bits((float)x)<<(i*32);}}return result;}
extern uint8_t pf_module_state[];
int recovered_10000658(void);
undefined8 recovered_10003940(ulong param_1);
void recovered_1000397c(char *param_1);
void recovered_100039b4(undefined8 param_1);
void recovered_100039ec(long param_1);
void recovered_10003b54(uint *param_1);
void recovered_10005584(uint *param_1,long param_2);
undefined8 recovered_100057a4(long param_1);
void recovered_100057cc(long param_1);
bool recovered_10005824(int param_1);
void recovered_1000586c(long param_1,byte *param_2);
void recovered_10005a14(undefined8 *param_1);
undefined8 recovered_10005a40(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10005a84(long param_1);
undefined8 recovered_10005b08(void);
void recovered_10005b40(undefined1 *param_1,ulong param_2,long param_3);
void recovered_10005b78(long param_1,undefined8 *param_2);
void recovered_10006574(long param_1,long param_2);
void recovered_10006618(long param_1);
undefined8 recovered_10006668(long param_1,undefined8 *param_2,byte *param_3);
long recovered_10006ccc(long param_1,uint *param_2,uint param_3,long param_4);
void recovered_10006d6c(long param_1);
void recovered_10006e74(long param_1);
void recovered_10006f30(long param_1);
void recovered_10006f8c(long param_1);
void recovered_10006fcc(long *param_1);
void recovered_10007004(long param_1,uint param_2);
void recovered_10007030(undefined8 *param_1);
void recovered_10007068(void *param_1);
void recovered_100070a0(long *param_1);
void recovered_100070d4(long *param_1);
void recovered_1000710c(undefined8 param_1,long param_2);
void recovered_10009db4(long param_1,long param_2);
void recovered_10009e70(long param_1,long param_2,long param_3);
void recovered_10009ec4(long param_1,long param_2,long param_3,ulong param_4);
char * recovered_10009f3c(char *param_1);
void recovered_10009fe0(byte *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4);
bool recovered_1000a0c4(byte *param_1,byte *param_2);
void recovered_1000a128(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
bool recovered_1000a1c0(byte *param_1,byte *param_2);
void recovered_1000a218(long param_1,byte *param_2,char *param_3);
long recovered_1000a494(long param_1,byte *param_2,byte *param_3,int param_4);
long recovered_1000a574(long param_1);
undefined8 recovered_1000ae88(long param_1,long param_2,char *param_3,ulong param_4,long param_5);
char * recovered_1000afac(char *param_1,long param_2);
void recovered_1000b030(byte *param_1,byte *param_2);
void recovered_1000b048(long param_1,long param_2,byte *param_3,undefined1 *param_4,long param_5,
                       ulong *param_6,char *param_7,ulong param_8);
byte recovered_1000b1f4(long param_1,undefined8 param_2,ulong param_3);
undefined8 * recovered_1000b30c(undefined8 *param_1);
byte recovered_1000b3f0(long param_1);
void recovered_1000b510(long param_1);
void recovered_1000ba30(long param_1);
long * recovered_1000bb94(void);
long recovered_1000e07c(undefined8 *param_1,ulong param_2);
uint128 recovered_1000e160(void);
void recovered_1000e1a0(long param_1);
void recovered_1000e29c(undefined8 *param_1,long *param_2,long *param_3,long param_4,long param_5);
undefined8 recovered_1000e37c(void);
bool recovered_1000e394(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long param_5);
undefined8 *
recovered_1000e3e4(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5);
void recovered_1000e400(undefined8 *param_1,undefined8 param_2);
undefined8 recovered_1000e424(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
uint128 recovered_1000e458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,long param_6);
uint128 recovered_1000e584(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,long param_6);
void recovered_1000e5d0(undefined8 *param_1,long param_2);
uint128 recovered_1000e5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5);
uint128 recovered_1000e694(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,long *param_6);
bool recovered_1000e6ec(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4);
bool recovered_1000e970(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long param_5);
uint128 recovered_1000e9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,long param_6);
uint128 recovered_1000e9f4(undefined8 *param_1);
void recovered_1000ea14(long param_1);
void recovered_1000ea68(undefined8 *param_1,long param_2,undefined1 param_3);
uint128 recovered_1000eadc(void);
void recovered_1000eae0(undefined8 *param_1,undefined8 *param_2,ulong *param_3,ulong param_4);
undefined8 *
recovered_1000eb90(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5);
uint128 recovered_1000ec84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5,undefined4 param_6);
void recovered_1000edd8(undefined8 *param_1,int param_2,undefined8 *param_3,long param_4,
                       uint param_5);
void recovered_1000ee50(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5);
uint128 recovered_1000eeb0(undefined8 *param_1,ulong param_2,long param_3,int *param_4,int param_5,
                  uint param_6);
undefined8 recovered_1000f148(undefined8 *param_1,ulong param_2,long param_3,long *param_4);
uint128 recovered_1000f154(undefined8 *param_1,ulong param_2,double param_3,int *param_4,int param_5,
                  uint param_6);
uint128 recovered_1000f824(undefined8 *param_1,uint param_2,long param_3,int *param_4,int param_5,
                  long param_6);
uint128 recovered_1000f8bc(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,uint param_5);
void recovered_1000f9f0(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4,uint param_5,
                       ulong param_6);
uint128 recovered_10010f54(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4,uint param_5,
                  uint param_6);
uint128 recovered_10011458(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5);
uint128 recovered_100115cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  uint param_5,long param_6);
ulong * recovered_100116e4(undefined8 *param_1,ulong *param_2);
long * recovered_10011700(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_100117b0(undefined8 *param_1,uint param_2,ulong param_3,long *param_4,ulong param_5,
                  long *param_6);
ulong * recovered_10011c54(undefined8 *param_1,ulong *param_2,int param_3);
ulong * recovered_10011d74(undefined8 *param_1,ulong param_2);
uint128 recovered_10011de4(undefined8 *param_1,ulong param_2,long param_3,int param_4);
uint128 recovered_10011f5c(undefined8 *param_1,long param_2,long param_3);
void recovered_10012060(double param_1,undefined8 *param_2);
uint128 recovered_10012540(undefined8 *param_1,int param_2,long param_3,ulong param_4,long param_5,
                  long param_6,ulong param_7);
byte recovered_10012548(int param_1,long param_2);
uint128 recovered_10012588(long *param_1,int param_2,long param_3,ulong param_4,long *param_5,long param_6,
                  ulong param_7,uint param_8);
bool recovered_10012a34(long param_1,ulong param_2);
byte recovered_10012aa4(int param_1,long param_2);
uint128 recovered_10012b20(undefined8 *param_1,long param_2,uint param_3,undefined8 *param_4);
void recovered_100134cc(long param_1,long param_2);
uint128 recovered_1001350c(long *param_1,int param_2,long param_3,long param_4,ulong param_5,long param_6,
                  long param_7);
undefined8 * recovered_10013730(undefined8 *param_1,long *param_2,ulong param_3,long *param_4);
long * recovered_100137d8(long *param_1,long param_2,ulong param_3,long param_4,long param_5,
                         uint param_6);
void recovered_10013bac(long *param_1,long *param_2,char *param_3,uint param_4);
uint128 recovered_10013cac(long *param_1,long *param_2,byte *param_3);
uint128 recovered_10013d0c(undefined8 *param_1,long param_2,char *param_3,ulong *param_4);
uint128 recovered_10013dac(long param_1,long param_2);
undefined8 recovered_10013de8(long param_1);
uint128 recovered_10013e68(undefined8 *param_1,ulong param_2,undefined8 *param_3,long *param_4,ulong param_5
                  ,long param_6);
ulong recovered_10013fb0(undefined8 *param_1,uint param_2,long *param_3,long *param_4,
                        undefined8 param_5,undefined8 param_6,ulong param_7,long *param_8,
                        byte param_9);
ulong recovered_10014254(undefined8 *param_1,int param_2,undefined8 *param_3,long *param_4);
bool recovered_10014324(undefined8 *param_1,uint param_2,long *param_3,long *param_4,
                       undefined8 param_5);
uint recovered_100144ac(undefined8 *param_1,ulong param_2,undefined8 *param_3,long *param_4,
                       undefined4 *param_5);
bool recovered_100144b4(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4,
                       undefined8 param_5);
uint128 recovered_10014934(undefined8 *param_1,int param_2,undefined8 *param_3,ulong *param_4);
undefined8 recovered_10014c8c(undefined8 *param_1,long param_2);
uint recovered_10014cdc(undefined8 *param_1,long param_2,long param_3);
uint recovered_10014dc0(long param_1,long param_2);
uint recovered_10014dfc(undefined8 *param_1,long param_2);
void recovered_10014e3c(undefined8 *param_1,uint *param_2);
uint recovered_10014ef8(undefined4 param_1,long *param_2);
uint recovered_10014f60(int param_1,long *param_2,int param_3,long *param_4);
uint128 recovered_1001500c(undefined8 *param_1);
bool recovered_1001503c(undefined8 *param_1,ulong param_2,undefined8 *param_3,uint *param_4);
undefined4 recovered_100151b8(uint *param_1,uint *param_2);
undefined8 recovered_10015280(long param_1,int param_2);
uint128 recovered_100152a8(undefined8 *param_1,undefined8 param_2);
uint recovered_100152cc(undefined8 *param_1,int param_2,undefined8 *param_3,long *param_4,
                       undefined4 *param_5,undefined8 param_6);
bool recovered_10015538(long *param_1,byte *param_2);
long recovered_10015588(int param_1,long param_2);
undefined8 recovered_100155c4(long *param_1,undefined4 *param_2);
undefined8 * recovered_10015644(undefined8 *param_1,long *param_2);
undefined8 recovered_10015674(undefined8 *param_1,long param_2);
bool recovered_10015700(long *param_1,long *param_2);
long * recovered_10015768(undefined8 *param_1,long param_2);
long recovered_1001587c(long *param_1,long *param_2,int param_3);
void recovered_100158d8(undefined8 *param_1,long param_2,long *param_3,long param_4,uint *param_5,
                       uint param_6);
void recovered_10015a7c(long *param_1,long param_2,long param_3,long *param_4);
void recovered_10015ad0(undefined8 *param_1,undefined8 *param_2,long param_3,undefined1 param_4);
undefined8
recovered_10015b18(long *param_1,long param_2,long param_3,long *param_4,long param_5,uint param_6);
ulong recovered_10015d48(undefined8 *param_1,ulong param_2,undefined8 *param_3,long *param_4);
ulong recovered_10015dd8(int param_1,long param_2,long *param_3);
int recovered_10015e5c(double param_1);
undefined8 recovered_10015ec4(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_100161bc(double param_1);
uint128 recovered_100161e4(ulong param_1,undefined8 param_2);
uint128 recovered_10016320(ulong param_1);
undefined8 recovered_10016374(undefined8 param_1);
uint128 recovered_100163a0(undefined8 param_1);
bool recovered_100163cc(uint param_1);
uint recovered_10016454(int param_1);
undefined8 recovered_1001646c(byte *param_1);
void recovered_10016768(int *param_1,ulong param_2);
undefined8 recovered_100167a8(long param_1,uint param_2,uint param_3);
int recovered_100167f8(long param_1);
undefined8 recovered_10016828(long param_1,uint param_2);
undefined4 recovered_100168f8(long param_1,long param_2);
ulong recovered_10016944(long param_1,long param_2);
void recovered_100169e4(long param_1,long param_2);
void recovered_10016a38(long param_1);
void recovered_10016a5c(undefined8 *param_1);
long recovered_10016a98(undefined8 *param_1,ulong param_2,long param_3);
undefined8 recovered_10016adc(long param_1,undefined8 *param_2,long param_3,long *param_4);
uint128 recovered_10016b24(undefined8 *param_1,ulong param_2,long param_3);
undefined8 * recovered_10016b60(undefined8 *param_1);
uint128 recovered_10016bac(long param_1);
void recovered_10016bd8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       int param_5);
void recovered_10016c80(undefined8 *param_1,long *param_2,long param_3,long param_4,
                       undefined1 param_5,undefined1 param_6);
long * recovered_10016d48(long *param_1,long *param_2);
undefined8 recovered_10018410(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
undefined8 * recovered_10018484(undefined8 *param_1,long param_2);
undefined8 * recovered_10018568(undefined8 *param_1,long param_2,long param_3,long param_4);
ulong recovered_1001865c(undefined8 *param_1,undefined8 *param_2);
byte recovered_100186c8(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_10018750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  int param_5,undefined8 *param_6);
bool recovered_100187a4(long param_1,long param_2);
void recovered_100187f8(undefined8 *param_1,undefined8 *param_2);
void recovered_10018844(undefined8 *param_1,long param_2);
void recovered_10018938(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
void recovered_1001895c(long *param_1,undefined8 *param_2,long *param_3,char *param_4);
uint128 recovered_10018afc(long *param_1,long *param_2,byte *param_3);
uint128 recovered_10019d0c(undefined8 *param_1,long param_2,ulong param_3,long param_4);
undefined8 * recovered_10019db4(undefined8 *param_1,long param_2,long param_3);
long * recovered_10019df8(long *param_1,long *param_2,long param_3,long param_4,int param_5);
undefined8 * recovered_10019e30(undefined8 *param_1,long param_2,long param_3);
undefined8 *
recovered_10019e84(undefined8 *param_1,long *param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6);
ulong * recovered_1001a20c(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_1001a258(undefined8 *param_1,long *param_2);
undefined8 *
recovered_1001a30c(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4);
uint recovered_1001a358(undefined8 *param_1,long *param_2,long param_3);
void recovered_1001a410(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                       undefined8 param_5);
ulong recovered_1001a444(ulong param_1);
int recovered_1001a470(long param_1,char *param_2);
void recovered_1001a4ec(undefined8 *param_1,long param_2,uint *param_3,char *param_4,ulong param_5,
                       ulong param_6);
uint128 recovered_1001a5c0(long *param_1,long param_2,long param_3,ulong param_4);
void recovered_1001a660(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4);
void recovered_1001a768(undefined8 *param_1,undefined8 *param_2,long param_3,ulong *param_4,
                       undefined8 param_5,undefined8 *param_6);
long * recovered_1001a824(long *param_1,long *param_2,char *param_3,ulong param_4,undefined8 param_5
                         );
bool recovered_1001a900(undefined8 *param_1,ulong param_2,ulong param_3,ulong *param_4,ulong param_5
                       );
uint recovered_1001a9a0(undefined8 *param_1,ulong *param_2,undefined8 *param_3);
void recovered_1001abbc(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                       undefined8 param_5);
long * recovered_1001ac80(undefined8 *param_1,long *param_2);
bool recovered_1001ace4(undefined8 *param_1,ulong param_2,long *param_3,ulong param_4,long *param_5,
                       ulong param_6);
void recovered_1001aef0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5);
long * recovered_1001af88(undefined8 *param_1,long *param_2,long *param_3,uint param_4,
                         undefined1 param_5);
void recovered_1001b054(char *param_1);
void recovered_1001b070(undefined8 *param_1,long param_2,undefined8 param_3);
uint128 recovered_1001b0dc(undefined8 *param_1,ulong *param_2);
void recovered_1001b168(undefined8 *param_1,long param_2,long param_3);
void recovered_1001b324(undefined8 *param_1,long param_2,long param_3,ulong *param_4);
void recovered_1001b6cc(undefined8 *param_1,long *param_2,byte *param_3,undefined8 param_4,
                       undefined8 param_5);
undefined8 recovered_1001b774(byte *param_1);
long recovered_1001b7c8(ulong *param_1,long param_2,long param_3);
long recovered_1001b7d0(ulong *param_1,long param_2,long param_3,int param_4);
void recovered_1001b928(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,
                       undefined8 *param_5,ulong param_6,undefined1 param_7);
undefined8
recovered_1001ba44(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long param_5,
                  undefined8 *param_6,undefined8 *param_7);
void recovered_1001bf38(undefined8 *param_1);
bool recovered_1001bf58(undefined8 *param_1,ulong param_2,ulong param_3,ulong *param_4);
void recovered_1001bfec(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7);
uint recovered_1001c0c0(undefined8 *param_1,ulong param_2,undefined8 *param_3,long *param_4);
bool recovered_1001c0e4(undefined8 *param_1,ulong param_2,long param_3,int param_4,long param_5,
                       undefined8 *param_6);
void recovered_1001c194(undefined8 *param_1,int param_2,undefined8 *param_3,char *param_4,
                       ulong *param_5);
void recovered_1001c220(undefined8 *param_1,ulong param_2,long *param_3,long *param_4,
                       undefined8 param_5,undefined8 param_6,byte param_7);
bool recovered_1001c244(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,
                       undefined8 param_5);
uint128 recovered_1001c284(undefined8 *param_1,undefined8 param_2,long param_3);
void recovered_1001c30c(long *param_1,long *param_2,char *param_3);
bool recovered_1001c41c(byte *param_1,long *param_2);
ulong recovered_1001c4cc(byte *param_1,ulong param_2);
uint128 recovered_1001c530(undefined8 *param_1,ulong param_2,long param_3,ulong param_4,long param_5);
ulong recovered_1001c650(double param_1,double param_2);
uint128 recovered_1001c9e8(undefined8 param_1);
uint128 recovered_1001ca00(undefined8 param_1,undefined8 param_2);
uint128 recovered_1001ca2c(undefined1 param_1 [16]);
ulong recovered_1001cae4(undefined8 param_1,int *param_2);
uint128 recovered_1001cb44(ulong param_1,int param_2);
void recovered_1001cc0c(void);
uint128 recovered_1001cc68(double param_1);
uint128 recovered_1001cd34(undefined1 param_1 [16]);
ulong recovered_1001ce20(ulong param_1,uint param_2);
byte recovered_1001ce68(undefined8 *param_1,int param_2,long param_3);
uint128 recovered_1001cee4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5);
uint128 recovered_1001cf64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  uint param_5,uint param_6);
uint128 recovered_1001d740(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5);
undefined8 * recovered_1001d8b0(undefined8 *param_1,long param_2,long param_3);
ulong recovered_1001d8dc(double param_1,ulong param_2,byte param_3);
uint128 recovered_1001d90c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5);
uint recovered_1001da74(ulong *param_1,ulong *param_2);
undefined4 recovered_1001dad8(uint param_1);
uint recovered_1001db30(undefined8 *param_1,ulong param_2,long param_3);
undefined4 recovered_1001db60(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_1001dbb4(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4);
ulong recovered_1001dc50(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4,uint param_5
                        );
void recovered_1001dd18(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,
                       ulong param_5);
uint128 recovered_1001ddb0(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4);
undefined8 recovered_1001e0f4(long param_1,long param_2,ulong *param_3,ulong param_4,long *param_5);
void recovered_1001e204(undefined8 *param_1);
ulong * recovered_1001e220(undefined8 *param_1,long param_2,ulong param_3,ulong param_4);
undefined8 *
recovered_1001e26c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
bool recovered_1001e2a0(long param_1,long param_2,ulong *param_3,long *param_4,uint param_5,
                       int param_6);
ulong recovered_1001e910(ulong *param_1,ulong param_2,uint param_3);
uint recovered_1001e94c(long param_1,long param_2,uint param_3,long *param_4);
uint recovered_1001e9a4(ulong *param_1,long param_2,uint param_3,ulong *param_4);
ulong recovered_1001ea08(ulong param_1,uint param_2);
bool recovered_1001ead0(int param_1);
bool recovered_1001eaf0(ulong param_1,uint param_2);
undefined8 recovered_1001eb30(long param_1,long *param_2,void *param_3,undefined8 param_4);
void recovered_1001ec50(undefined8 *param_1,uint param_2);
long * recovered_1001ecb8(undefined8 *param_1,ulong *param_2,ulong *param_3);
uint128 recovered_1001ee18(long *param_1);
void recovered_1001f4d4(long *param_1,long param_2);
long recovered_1001f500(long *param_1,undefined8 *param_2,long param_3,ulong param_4);
void recovered_1001f7a0(undefined8 *param_1,undefined4 param_2,undefined8 param_3);
void recovered_1001f7e0(undefined8 *param_1,undefined4 param_2);
undefined8 recovered_1001f814(long param_1,uint param_2);
undefined8 recovered_1001f848(long *param_1,uint *param_2);
long recovered_1001f8d4(long *param_1,uint param_2);
ulong * recovered_1001fde0(long *param_1);
bool recovered_1001fee0(long param_1,uint param_2,uint *param_3);
uint recovered_1001ff6c(int param_1);
uint128 recovered_1001ff84(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5);
uint128 recovered_100202f4(undefined8 *param_1,int param_2,long param_3);
void recovered_100203b8(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,
                       uint param_5,long param_6);
ulong * recovered_10020658(long *param_1);
void recovered_10020d00(undefined8 *param_1,undefined1 param_2);
void recovered_10020d38(long *param_1,long param_2);
long recovered_10020e20(long *param_1,long param_2);
long recovered_10020f88(undefined8 *param_1,long param_2,ulong param_3);
byte recovered_10021010(long param_1,char *param_2,uint param_3);
long * recovered_100210d8(long *param_1,long *param_2,byte *param_3,uint param_4);
bool recovered_10021920(int param_1);
bool recovered_1002194c(int param_1);
void recovered_10021974(long *param_1,uint param_2);
void recovered_10021e14(undefined8 *param_1,long param_2,ulong param_3,int param_4);
void recovered_10021fd4(long *param_1,int param_2);
bool recovered_1002200c(long *param_1,int param_2);
long recovered_10022038(long *param_1);
byte * recovered_100223c4(long *param_1,uint param_2);
bool recovered_10022a08(long *param_1);
void recovered_10022a50(long *param_1,uint param_2);
bool recovered_10022a74(long param_1,byte *param_2);
long recovered_10022a8c(long *param_1,long param_2,int param_3);
uint128 recovered_10022bf8(long *param_1);
long recovered_10023568(long *param_1);
long recovered_100235f4(long *param_1,int param_2);
long recovered_10023784(long *param_1,int param_2,int param_3);
bool recovered_1002387c(long *param_1,byte *param_2,uint param_3);
long recovered_10023ab4(long *param_1,int param_2,byte param_3);
void recovered_100240f8(undefined8 *param_1,long param_2,ulong param_3);
long recovered_10024100(long *param_1);
void recovered_10024164(long *param_1);
uint128 recovered_100241b4(long *param_1);
byte recovered_10024bb0(long param_1);
long recovered_10024c4c(long *param_1,ulong param_2);
bool recovered_10024d70(undefined1 *param_1);
void recovered_10024e00(undefined8 *param_1,long *param_2,long *param_3,uint param_4);
bool recovered_10024e90(char *param_1,uint param_2);
long * recovered_10024f54(long *param_1,long *param_2,char *param_3,ulong param_4,int param_5);
long * recovered_100250a8(long *param_1,long *param_2,byte *param_3,int param_4,uint param_5);
uint128 recovered_10025334(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5);
uint128 recovered_10025400(undefined8 *param_1,ulong param_2,long param_3,long *param_4,int param_5,
                  long param_6);
void recovered_1002551c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                       int param_5,long param_6);
uint128 recovered_100256d4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
uint128 recovered_10025750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,undefined8 *param_6);
uint128 recovered_100257ec(long param_1);
uint128 recovered_10025824(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,undefined8 *param_6);
uint128 recovered_100258bc(undefined8 *param_1,ulong param_2,long *param_3,undefined8 *param_4,int param_5,
                  long param_6);
uint128 recovered_10025a24(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6);
void recovered_10025c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                       int param_5,uint param_6);
uint128 recovered_10025e50(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4,uint param_5,
                  ulong param_6);
void recovered_10026154(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,int param_6);
void recovered_100262a4(undefined8 *param_1,long *param_2,undefined8 param_3,ulong *param_4,
                       undefined8 param_5,ulong *param_6);
uint recovered_100264c0(long param_1,undefined8 param_2,ulong *param_3);
long recovered_100265f0(long param_1,long param_2,int param_3,long *param_4,uint param_5);
uint recovered_10026674(int param_1,long *param_2,int param_3,long *param_4);
uint128 recovered_1002669c(undefined8 *param_1,undefined8 *param_2,long *param_3,long param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7);
uint128 recovered_10026718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5);
ulong * recovered_10026788(undefined8 *param_1,ulong *param_2);
uint128 recovered_100267dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5,long param_6);
uint128 recovered_100268fc(undefined8 *param_1,ulong param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_100269b8(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void recovered_100269bc(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,long param_6);
void recovered_10026bc4(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,int param_6);
uint128 recovered_10026c84(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4,int param_5);
uint128 recovered_10026ca8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,long param_6);
void recovered_10026e0c(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                       uint param_5,uint param_6);
uint128 recovered_10027300(void);
uint128 recovered_10027308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,uint param_6);
uint128 recovered_10027ae4(double param_1);
uint128 recovered_10027bb0(double param_1,double param_2);
undefined8 recovered_10027ce4(double param_1);
uint128 recovered_10028120(double param_1);
uint128 recovered_1002819c(ulong param_1,int param_2,int param_3,int param_4);
uint128 recovered_10028250(double param_1);
uint128 recovered_10028348(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
uint128 recovered_100284a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
uint128 recovered_100287b4(long *param_1,uint param_2,long *param_3);
void recovered_10028c9c(long *param_1);
void recovered_10028cf8(undefined8 *param_1,ulong param_2,long param_3,long *param_4,
                       undefined8 param_5,long param_6,long param_7,uint param_8);
ulong * recovered_100290c8(undefined8 *param_1);
undefined8 recovered_100292c8(long param_1,uint param_2);
bool recovered_100292f8(long param_1);
long recovered_10029328(long param_1,ulong param_2);
void recovered_1002939c(long param_1,long param_2,long param_3);
ulong recovered_100293b8(long *param_1,ulong param_2,long param_3,long *param_4);
void recovered_1002986c(undefined8 *param_1,byte *param_2);
undefined8 recovered_10029894(long *param_1,ulong *param_2);
undefined8 recovered_10029a3c(undefined8 *param_1,undefined2 param_2);
void recovered_10029b18(long *param_1,int param_2);
uint128 recovered_10029b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,long param_6);
uint128 recovered_1002a07c(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,uint param_5,
                  long param_6);
uint128 recovered_1002a210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5,uint param_6);
bool recovered_1002a708(undefined8 param_1);
int recovered_1002a73c(long *param_1,long param_2);
uint recovered_1002a79c(int param_1);
uint128 recovered_1002a7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3);
uint128 recovered_1002a7b8(long *param_1,long param_2,long param_3,undefined8 *param_4,uint param_5);
uint128 recovered_1002aa98(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint param_5);
uint128 recovered_1002abd8(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,uint param_5);
uint128 recovered_1002ad00(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,int param_5,
                  uint param_6);
uint128 recovered_1002ae7c(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_1002af9c(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_1002b07c(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint param_5);
uint128 recovered_1002b3a0(long *param_1,undefined8 param_2,long param_3,long param_4,uint param_5);
uint128 recovered_1002b5b0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,long param_6);
uint128 recovered_1002b704(undefined8 *param_1,ulong param_2);
ulong recovered_1002b754(undefined8 *param_1,ulong param_2,long param_3,ulong param_4);
uint128 recovered_1002b78c(long *param_1,ulong param_2,long param_3,ulong param_4);
long * recovered_1002b854(undefined8 *param_1,ulong param_2,long *param_3,ulong param_4,
                         ulong param_5);
uint128 recovered_1002b904(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  uint param_5);
void recovered_1002bad4(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                       ulong param_5,uint param_6);
uint128 recovered_1002bb24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,int param_6);
uint128 recovered_1002bc08(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6);
uint128 recovered_1002bcb8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  uint param_5,uint param_6);
uint128 recovered_1002beb8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_1002bef4(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_1002bf7c(undefined8 *param_1,ulong param_2,long param_3,int *param_4,int param_5);
void recovered_1002c09c(double param_1,undefined8 *param_2,int param_3);
uint128 recovered_1002c320(long param_1);
uint128 recovered_1002c34c(long param_1,ulong *param_2);
uint128 recovered_1002ca90(double param_1);
uint128 recovered_1002cab4(long param_1);
uint128 recovered_1002cc0c(double param_1);
void recovered_1002cc7c(int *param_1,double param_2);
void recovered_1002ce00(long param_1,ulong param_2,undefined8 param_3,ulong param_4);
uint128 recovered_1002ce80(double param_1);
bool recovered_1002cef8(double param_1);
bool recovered_1002cf60(undefined8 *param_1,long param_2,uint param_3,int *param_4);
uint128 recovered_1002cfc0(undefined8 *param_1,undefined8 param_2,long param_3);
void recovered_1002d000(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                       uint param_5,uint param_6);
void recovered_1002d218(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5);
uint128 recovered_1002d24c(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_1002d370(void);
uint128 recovered_1002d394(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4,int param_5);
uint128 recovered_1002d824(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,uint param_6,undefined8 param_7,undefined8 param_8);
uint128 recovered_1002d840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  uint param_5);
void recovered_1002d954(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,int param_6);
uint128 recovered_1002dd34(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,int param_5,
                  int param_6);
uint128 recovered_1002dd78(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_1002dddc(undefined8 *param_1,ulong param_2,double param_3,ulong *param_4,uint param_5,
                  uint param_6);
uint128 recovered_1002dea4(undefined8 *param_1,ulong *param_2,uint param_3,uint param_4,uint param_5,
                  int param_6);
uint128 recovered_1002e938(undefined8 *param_1,ulong param_2,long param_3);
ulong recovered_1002ecf0(undefined8 *param_1,ulong param_2,long param_3,long param_4,char *param_5,
                        ulong param_6);
undefined8 recovered_1002edd0(void);
char * recovered_1002edd4(ulong *param_1);
uint128 recovered_1002ee70(undefined8 *param_1,ulong param_2,long param_3,long param_4);
ulong * recovered_1002eea0(undefined8 *param_1,ulong param_2,long param_3,long param_4);
ulong recovered_1002ef64(undefined8 *param_1,ulong param_2,long param_3,uint param_4,uint param_5,
                        ulong param_6);
uint128 recovered_1002efdc(undefined8 *param_1,undefined8 param_2,long param_3,int param_4);
undefined8 * recovered_1002f030(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4);
uint128 recovered_1002f05c(undefined8 *param_1,int *param_2,ulong param_3,long param_4,int param_5);
undefined8 * recovered_1002fd64(undefined8 *param_1,long param_2);
undefined8 * recovered_1002fd74(undefined8 *param_1,long param_2,long param_3);
void recovered_1002fe7c(undefined8 *param_1,long param_2,undefined8 param_3,int param_4);
uint128 recovered_1002fec4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5,int *param_6);
uint128 recovered_1002fee8(undefined8 *param_1,long param_2,uint param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7);
uint128 recovered_1002ff8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
uint128 recovered_10030060(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  uint param_5,ulong param_6);
uint128 recovered_10030420(void);
void recovered_10030460(undefined8 *param_1,undefined8 *param_2,long *param_3,long param_4,
                       undefined8 param_5,undefined8 param_6);
uint128 recovered_100304d8(undefined8 param_1,undefined8 param_2,undefined8 param_3);
uint128 recovered_100304dc(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
undefined8
recovered_100305b0(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
void recovered_10030604(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5);
undefined8 recovered_1003062c(undefined8 *param_1,ulong param_2,long param_3,long *param_4);
undefined8 recovered_10030690(undefined8 *param_1,undefined8 param_2);
long recovered_100306b8(undefined8 *param_1,ulong param_2,undefined8 param_3);
undefined8 recovered_10030728(void);
long recovered_1003072c(undefined8 *param_1,uint param_2,ulong param_3,long param_4,long param_5,
                       undefined8 param_6);
uint128 recovered_10030818(long *param_1,long param_2);
void recovered_100308dc(double param_1,long *param_2,long param_3);
bool recovered_10030a04(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4);
bool recovered_10030a6c(undefined8 *param_1,long *param_2,double *param_3);
bool recovered_10030b04(double param_1,long param_2);
bool recovered_10030b50(undefined8 *param_1,long param_2,long *param_3,ulong param_4,long param_5);
bool recovered_10030be4(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4);
bool recovered_10030c1c(undefined8 *param_1,long param_2,long *param_3,uint *param_4,
                       undefined8 param_5,byte *param_6);
bool recovered_10030cd0(undefined8 *param_1,long param_2,long *param_3,undefined4 *param_4,
                       undefined8 param_5,undefined8 param_6);
long recovered_10030d44(undefined8 *param_1,long *param_2,long *param_3);
bool recovered_10030e18(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4);
undefined8 recovered_10030e5c(void *param_1);
void recovered_10030e98(long param_1,uint param_2);
void recovered_10030fa0(long param_1,long param_2,undefined8 param_3,int param_4);
long recovered_100310d8(undefined8 *param_1,ulong param_2,long param_3);
long recovered_10031160(long param_1,byte *param_2,byte *param_3,ulong param_4);
void recovered_10031334(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       int param_5);
undefined1 recovered_100313c4(byte *param_1,byte *param_2,undefined1 *param_3);
uint recovered_1003174c(byte *param_1,byte *param_2,char *param_3,ulong param_4);
bool recovered_100319c4(byte *param_1,byte *param_2);
long recovered_10031a50(long param_1,char *param_2);
long recovered_10031a84(long param_1,char *param_2);
void recovered_10031b10(void);
void recovered_10031b44(undefined8 *param_1,long param_2,ulong param_3,long param_4);
void recovered_10031ba4(undefined8 *param_1,long *param_2,undefined8 *param_3);
void recovered_10031c80(undefined8 *param_1,byte *param_2,byte *param_3,long *param_4,long *param_5);
void recovered_100327b4(undefined8 *param_1,undefined8 *param_2);
void recovered_100327bc(undefined8 *param_1,long param_2,long param_3);
uint128 recovered_10032830(undefined8 *param_1,long param_2,uint param_3);
void recovered_100328d8(undefined8 *param_1,undefined8 *param_2,ulong param_3);
void recovered_10032a04(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4,
                       ulong param_5);
void recovered_10032aec(undefined8 *param_1,int param_2,long param_3,long *param_4,long param_5,
                       undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9,
                       ulong param_10,undefined8 param_11,undefined8 param_12);
long recovered_10032e08(undefined8 *param_1,long param_2);
long recovered_10032e60(undefined8 *param_1,long param_2,int param_3);
uint128 recovered_10032edc(undefined8 *param_1,long param_2,long param_3);
uint128 recovered_10032f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10032fe0(void);
void recovered_10032fe4(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10033070(undefined8 *param_1,long param_2);
void recovered_10033130(long param_1,long *param_2);
void recovered_10033178(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,
                       undefined8 param_5);
bool recovered_10033238(long param_1,byte *param_2);
long recovered_10033274(undefined8 *param_1,undefined8 *param_2);
bool recovered_100333cc(long param_1);
undefined8 recovered_100333f0(void);
void recovered_100333f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4);
uint128 recovered_10033464(undefined8 *param_1,uint param_2,long param_3,int *param_4,uint param_5,
                  int param_6);
byte recovered_10033714(undefined8 *param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_100338a4(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4);
undefined8 recovered_10033a38(long param_1);
undefined1 recovered_10033b54(undefined8 *param_1,undefined8 *param_2);
void recovered_10033b84(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4,
                       ulong param_5);
uint128 recovered_10033c48(undefined8 *param_1,void *param_2,ulong param_3);
void recovered_10033c9c(undefined8 *param_1,long param_2);
void recovered_10033dc4(undefined8 *param_1,long param_2);
void recovered_10033e8c(long param_1,long *param_2);
undefined8 recovered_10033f08(void);
void recovered_10033f0c(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                       int param_6);
long * recovered_10033ffc(undefined8 *param_1,undefined8 param_2,uint param_3);
undefined8
recovered_10034140(undefined8 *param_1,long param_2,ulong param_3,ulong param_4,int param_5);
void recovered_10034258(long param_1,long param_2,long *param_3,long param_4);
char * recovered_10034260(char *param_1,char *param_2);
long * recovered_100342b4(undefined8 *param_1);
long recovered_10034318(undefined8 *param_1,long param_2,long param_3);
void recovered_10034360(undefined8 *param_1,long *param_2,byte *param_3,byte *param_4);
long recovered_1003459c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       long *param_5);
undefined1 recovered_10034620(long param_1);
void recovered_10034678(undefined8 *param_1,long param_2,undefined8 param_3);
bool recovered_100346c0(char *param_1);
byte * recovered_1003475c(byte *param_1,undefined1 *param_2,long param_3);
ulong * recovered_100349dc(undefined8 *param_1,ulong *param_2,int param_3);
long recovered_10034a58(long param_1,long *param_2,long *param_3,int param_4);
void recovered_10034ab8(undefined8 *param_1,long *param_2,long *param_3,long *param_4,
                       undefined8 param_5,long *param_6,undefined8 param_7,int param_8);
void recovered_10034bc0(long param_1,long *param_2,long param_3);
uint128 recovered_10034c24(undefined8 *param_1,long param_2,long *param_3,long param_4);
void recovered_10034c98(undefined8 *param_1,long param_2,long *param_3,long param_4);
uint128 recovered_10034f00(undefined8 *param_1,long param_2,ulong *param_3);
uint128 recovered_100350c0(long param_1,long param_2,ulong param_3,ulong param_4,char *param_5,
                  undefined1 *param_6);
ulong * recovered_100352b4(undefined8 *param_1,ulong *param_2);
ulong * recovered_100352ec(undefined8 *param_1,ulong *param_2);
ulong * recovered_100354b8(undefined8 *param_1,long param_2,ulong param_3,ulong param_4);
void recovered_10035548(undefined8 *param_1,long param_2,ulong *param_3,ulong *param_4,int param_5,
                       int param_6);
void recovered_10035aac(undefined8 *param_1,long param_2);
bool recovered_10035b58(ulong *param_1);
ulong * recovered_10035b88(undefined8 *param_1,long param_2,long param_3,ulong param_4);
ulong recovered_10035bcc(undefined8 *param_1,long *param_2,long param_3);
undefined8 recovered_10035d0c(undefined8 *param_1,long *param_2,long param_3);
ulong * recovered_10035dfc(undefined8 *param_1,ulong *param_2,ulong *param_3);
undefined8 *
recovered_10036378(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,int param_5,
                  int param_6);
bool recovered_10036470(char *param_1);
long recovered_1003647c(long *param_1);
bool recovered_100364c8(char *param_1,byte *param_2);
bool recovered_1003654c(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                       ulong param_5,long param_6,long param_7,long param_8,long param_9);
uint128 recovered_100368a8(long *param_1,double *param_2,undefined8 param_3);
byte * recovered_100369b0(byte *param_1,byte *param_2);
undefined8 recovered_10036a40(undefined8 *param_1,double *param_2);
ulong recovered_10036b38(byte *param_1,uint *param_2);
ulong recovered_10036f6c(byte *param_1,byte *param_2,long param_3,uint param_4);
bool recovered_10036fe4(byte *param_1,byte *param_2,byte *param_3,int param_4);
char * recovered_10037060(char *param_1,char *param_2,char *param_3);
uint128 recovered_10037194(byte *param_1,byte *param_2);
ulong recovered_1003720c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                        byte *param_5,double *param_6);
ulong recovered_10037288(long *param_1,double *param_2,uint param_3);
ulong recovered_10037918(long *param_1,double *param_2,undefined8 param_3);
long recovered_100379f0(long param_1,long *param_2);
long recovered_10037a20(long param_1);
undefined8 recovered_10037a60(undefined8 *param_1,long param_2,ulong param_3);
void recovered_10037b1c(long param_1,long param_2,undefined1 param_3);
void recovered_10037b60(char *param_1);
uint128 recovered_10037b98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  uint param_5);
uint128 recovered_10037c68(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_10037d38(long param_1);
uint128 recovered_10037d58(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,uint param_5,
                  int param_6);
uint128 recovered_10037f38(undefined8 *param_1);
undefined8
recovered_100384b0(undefined8 *param_1,undefined8 *param_2,long *param_3,uint128 *param_4);
uint128 recovered_10038538(undefined8 *param_1,ulong *param_2);
long * recovered_10038570(long param_1,long *param_2);
bool recovered_100385a8(long param_1,ulong *param_2,ulong *param_3);
undefined8 recovered_1003874c(long param_1,long *param_2);
bool recovered_100387f8(long param_1);
void recovered_10038a10(undefined8 *param_1);
void recovered_10038a44(undefined1 *param_1,uint param_2);
uint recovered_10038a64(long param_1,ulong param_2);
void recovered_10038ac4(long param_1,undefined8 param_2,char *param_3);
undefined8 recovered_10038af8(char *param_1,void *param_2,undefined8 param_3);
undefined8 recovered_10038b50(undefined8 param_1);
long recovered_10038b8c(ulong *param_1);
undefined8
recovered_10038be4(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,long param_5);
undefined8
recovered_10038c78(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined1 *param_4);
uint128 recovered_10038d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
void recovered_10038df0(undefined8 *param_1);
uint128 recovered_10038e44(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
uint128 recovered_10038f18(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
void recovered_10038fac(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6);
long * recovered_10039094(undefined8 *param_1,long param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5);
uint128 recovered_1003918c(long param_1);
uint128 recovered_10039200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5);
void recovered_10039450(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                       int param_5,uint param_6);
undefined8 recovered_1003991c(undefined8 *param_1,long *param_2,long param_3,long param_4);
ulong * recovered_100399e8(undefined8 *param_1,ulong param_2,long param_3);
ulong recovered_10039a90(undefined8 *param_1,long *param_2,ulong *param_3,int param_4);
void recovered_10039bcc(undefined8 *param_1,long param_2,ulong param_3);
uint recovered_10039c80(int param_1);
uint128 recovered_10039c98(undefined8 *param_1,long *param_2);
bool recovered_10039eb4(ulong *param_1,ulong *param_2);
undefined8 *
recovered_10039ef0(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_10039f60(undefined8 *param_1,uint param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
uint128 recovered_1003a154(long param_1);
void recovered_1003a174(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,int param_6);
uint128 recovered_1003a210(long param_1,uint param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
uint128 recovered_1003a298(undefined8 *param_1,uint param_2,long param_3,long *param_4,uint param_5,
                  uint param_6);
void recovered_1003a620(long param_1,undefined8 *param_2);
void recovered_1003a668(long param_1,long param_2,long *param_3);
undefined8 recovered_1003a6bc(long param_1,uint param_2,long param_3);
uint128 recovered_1003a6fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,long param_6);
uint128 recovered_1003a880(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6);
uint128 recovered_1003a91c(undefined8 *param_1,uint param_2,long param_3,ulong *param_4,int param_5);
uint128 recovered_1003a9ec(undefined8 *param_1,uint param_2,long param_3,undefined8 *param_4,int param_5);
uint128 recovered_1003abe8(undefined8 *param_1,uint param_2,long param_3,undefined8 *param_4,int param_5,
                  int param_6);
undefined8 recovered_1003ac68(long param_1,int param_2,long param_3);
byte recovered_1003aca8(byte *param_1);
undefined8 recovered_1003acd4(void);
byte recovered_1003acd8(byte *param_1,byte *param_2);
byte recovered_1003acec(byte *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4,
                       long param_5);
void recovered_1003aff4(long param_1,char *param_2);
bool recovered_1003b014(undefined8 *param_1,byte *param_2,byte *param_3);
char * recovered_1003b074(char *param_1,char *param_2);
ulong recovered_1003b0cc(uint128 *param_1,uint param_2,int param_3);
void recovered_1003b1dc(long param_1,byte *param_2,byte *param_3,byte param_4);
uint recovered_1003b250(uint param_1,uint param_2,int param_3);
bool recovered_1003b288(uint param_1);
ulong recovered_1003b2b4(uint128 *param_1,uint param_2);
uint recovered_1003b980(byte *param_1,byte *param_2);
bool recovered_1003bf9c(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_1003bff4(char *param_1,double *param_2,undefined8 *param_3);
ulong recovered_1003c2c0(byte *param_1,byte *param_2,int param_3,double *param_4);
void recovered_1003c508(long param_1,void *param_2,ulong param_3);
uint128 recovered_1003c564(undefined8 *param_1,ulong param_2,long param_3,int *param_4,ulong param_5,
                  long param_6);
ulong recovered_1003c5ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                        int param_5,uint param_6);
void recovered_1003c6d8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                       long param_5,ulong param_6);
uint128 recovered_1003c7c8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
uint128 recovered_1003c868(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,long param_6);
uint128 recovered_1003c918(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_1003c9e0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,uint param_6);
void recovered_1003cab0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6);
uint128 recovered_1003d070(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,int param_5,
                  uint param_6);
ulong recovered_1003d1fc(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,
                        uint param_5,int param_6);
ulong recovered_1003d4b4(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,
                        uint param_5,uint param_6);
uint128 recovered_1003d6f0(undefined8 *param_1,undefined8 param_2,long param_3,uint *param_4,uint param_5,
                  uint param_6);
ulong recovered_1003da48(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,
                        int param_5,long param_6);
uint128 recovered_1003db50(undefined8 *param_1,undefined8 param_2,long param_3);
long recovered_1003dba0(undefined8 *param_1,int param_2,long param_3);
bool recovered_1003dc14(long *param_1,long *param_2,int param_3);
long * recovered_1003dc44(undefined8 *param_1,long param_2,long *param_3,ulong param_4);
undefined8
recovered_1003dd78(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  ulong param_6);
uint recovered_1003dfcc(long param_1,long param_2);
bool recovered_1003e03c(undefined8 *param_1,long *param_2,ulong *param_3,int param_4,
                       undefined8 *param_5,undefined8 *param_6);
bool recovered_1003e194(long *param_1,int param_2);
undefined8 recovered_1003e27c(void);
uint128 recovered_1003e280(undefined8 *param_1);
uint128 recovered_1003e294(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_1003e354(ulong *param_1,undefined8 param_2,long param_3,ulong *param_4,int param_5,
                  int param_6);
uint128 recovered_1003e444(ulong *param_1,undefined8 param_2,long param_3,undefined8 *param_4,uint param_5,
                  int param_6);
void recovered_1003e5e4(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_1003e6bc(ulong *param_1,undefined8 param_2,long param_3,ulong *param_4,int param_5);
uint128 recovered_1003e70c(undefined8 *param_1,undefined8 param_2,long param_3);
void recovered_1003e754(undefined8 *param_1,long param_2,long *param_3);
ulong * recovered_1003e900(undefined8 *param_1,undefined8 *param_2);
ulong * recovered_1003ee1c(undefined8 *param_1,undefined8 *param_2,ulong *param_3,ulong param_4);
undefined8 recovered_1003f0c8(void);
uint recovered_1003f0cc(long param_1,undefined8 *param_2);
void recovered_1003f12c(undefined8 *param_1,long param_2,long param_3);
void recovered_1003f1c4(undefined8 *param_1,long param_2,long param_3,ulong param_4,byte *param_5,
                       byte *param_6);
undefined8 recovered_1003f2a0(byte *param_1,byte *param_2,undefined8 *param_3,long *param_4);
bool recovered_1003f4a8(long param_1);
int recovered_1003f580(long param_1,long *param_2);
int recovered_1003f650(long param_1,uint param_2,uint param_3,ulong param_4);
void recovered_1003f7dc(long param_1);
long * recovered_1003f978(long *param_1,long *param_2,uint param_3);
long recovered_1003fd54(long param_1,ulong *param_2,int param_3);
void recovered_1003fe54(long param_1,byte *param_2);
void recovered_1003fe94(long param_1,ushort *param_2);
ulong recovered_1003ff50(long param_1,ulong param_2);
uint recovered_1003fff0(long *param_1,uint param_2,byte *param_3,byte *param_4,int *param_5);
undefined4 recovered_10040008(long *param_1,uint param_2,byte *param_3,byte *param_4,int *param_5);
bool recovered_10040020(long *param_1,uint param_2);
uint recovered_10040068(long *param_1,uint param_2,byte *param_3,byte *param_4,int *param_5,
                       uint param_6,int *param_7);
bool recovered_10040db4(uint param_1);
int recovered_10040de0(byte *param_1,byte *param_2,uint param_3,int *param_4);
undefined4
recovered_10041098(long *param_1,uint param_2,byte *param_3,byte *param_4,int *param_5,
                  undefined8 param_6,int *param_7);
undefined8 recovered_100411d0(undefined8 *param_1,byte *param_2,long *param_3,long *param_4);
undefined4
recovered_1004126c(long *param_1,uint param_2,long param_3,long param_4,int param_5,
                  undefined8 param_6,int *param_7);
uint128 recovered_10041390(long param_1,ulong param_2,byte *param_3,byte *param_4,ulong param_5,uint param_6
                  );
uint128 recovered_10041668(long param_1,ulong param_2,char *param_3,byte *param_4,ulong param_5,uint param_6
                  );
byte recovered_10041950(long param_1,ulong param_2,byte *param_3,undefined1 *param_4,int *param_5);
bool recovered_10041fb0(char *param_1);
ulong recovered_1004212c(uint param_1,byte *param_2,undefined1 *param_3,ulong param_4);
byte recovered_1004260c(byte *param_1,byte *param_2,byte *param_3,uint param_4,undefined1 *param_5,
                       char *param_6,int *param_7);
undefined4 recovered_10042d94(long *param_1,uint param_2,undefined8 *param_3,int *param_4);
ulong recovered_10042e24(byte *param_1,int param_2,ulong param_3);
ulong recovered_10042e30(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4,
                        ulong param_5);
ulong * recovered_10042f38(undefined8 *param_1,long param_2,long *param_3,ulong param_4);
ulong * recovered_100431dc(undefined8 *param_1,long param_2,ulong param_3,ulong *param_4);
bool recovered_10043dd0(byte *param_1);
void recovered_10043eac(undefined8 *param_1,long param_2,ulong param_3,char *param_4,char *param_5);
undefined8 recovered_10044038(long param_1,long param_2,uint param_3);
ulong * recovered_1004423c(double param_1,undefined8 *param_2,char *param_3);
undefined8 recovered_100442d8(long param_1,long param_2,uint param_3);
ulong recovered_100444f8(long param_1,long param_2,ulong param_3,byte *param_4);
ulong recovered_100445b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                        double *param_5);
bool recovered_10044650(long param_1,ulong param_2,int param_3,int param_4,int *param_5,int *param_6
                       );
undefined8 recovered_100449d8(long *param_1,byte *param_2,long param_3,long *param_4);
uint recovered_10044c50(int param_1);
uint recovered_10044c68(long *param_1);
uint128 recovered_10044d40(long param_1,ulong param_2,byte *param_3,byte *param_4,ulong param_5);
ulong recovered_10044d48(long param_1,uint param_2,byte *param_3,int param_4,ulong param_5);
ulong recovered_10044dec(long param_1,uint param_2);
void recovered_1004504c(undefined8 *param_1,undefined8 *param_2);
ulong * recovered_100450b0(ulong *param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,
                          ulong *param_5);
bool recovered_1004526c(long param_1,long *param_2);
uint128 recovered_100452e0(undefined8 *param_1);
uint128 recovered_100452f4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
uint128 recovered_10045350(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5);
uint128 recovered_100453b0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,uint param_6);
void recovered_100458e8(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_1004593c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5);
uint128 recovered_10045998(undefined8 *param_1,undefined8 param_2,long param_3);
undefined8 recovered_100459e0(void);
ulong recovered_100459e4(long param_1,long param_2,long *param_3);
void recovered_10045a44(long param_1,ulong param_2);
void recovered_10045a74(undefined8 *param_1,long param_2,long param_3);
uint128 recovered_10045b44(undefined8 *param_1);
void recovered_10045b58(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,long param_6);
undefined8 recovered_10045c40(void);
bool recovered_10045c44(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,long param_5);
bool recovered_10045cb8(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4);
void recovered_10045d5c(undefined8 *param_1,long *param_2);
bool recovered_10045ff0(undefined8 *param_1,long param_2,ulong *param_3,uint *param_4,int param_5,
                       undefined8 param_6);
ulong * recovered_10046080(undefined8 *param_1,ulong *param_2,uint param_3);
uint128 recovered_10046204(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,long param_6);
uint128 recovered_100463f0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5);
ulong recovered_100463f8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                        int param_5);
uint128 recovered_10046524(undefined8 *param_1);
void recovered_10046538(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       uint param_5,uint param_6);
uint128 recovered_100466e8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_10046748(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,ulong param_6);
void recovered_100467d0(undefined8 *param_1,undefined8 param_2,long param_3);
undefined8
recovered_10046848(undefined8 *param_1,ulong param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
void recovered_100468f0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,long param_6);
ulong recovered_10046a04(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                        undefined8 param_5,uint param_6);
uint128 recovered_10046ca8(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6);
uint128 recovered_10046d38(long param_1,uint param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
void recovered_10046d9c(undefined8 *param_1,undefined8 param_2,void *param_3,undefined1 param_4);
undefined8 recovered_10046e08(void);
uint128 recovered_10046e0c(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_10046e54(long param_1,uint param_2);
undefined8 recovered_10046f14(void);
void recovered_10046f18(long param_1,uint param_2,int param_3,undefined8 *param_4);
void recovered_10047180(undefined8 *param_1,undefined8 param_2,ulong param_3);
uint128 recovered_10047270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
long * recovered_100472c4(long param_1,long *param_2,ulong param_3);
void recovered_10047454(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       int param_5);
uint128 recovered_100475f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,int param_6);
uint128 recovered_10047778(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6);
uint128 recovered_100479b8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,uint param_6);
long recovered_10047e38(undefined8 *param_1,ulong param_2,long param_3,long *param_4,int param_5);
byte recovered_10047f64(undefined8 *param_1,byte *param_2,ulong param_3,long *param_4,long *param_5);
long recovered_100484f8(undefined8 *param_1,void *param_2,long param_3);
int recovered_10048530(char *param_1);
byte recovered_100485c0(undefined8 *param_1,undefined8 *param_2,byte *param_3,ulong param_4,
                       ulong param_5);
bool recovered_10048790(byte *param_1,ulong param_2);
uint recovered_100487c8(undefined8 *param_1,undefined8 *param_2,byte *param_3,ulong param_4,
                       uint param_5,ulong param_6);
long recovered_10049210(undefined8 *param_1,byte *param_2,long param_3,int param_4);
char * recovered_100492e0(undefined8 *param_1,char *param_2,ulong param_3,uint param_4,int param_5);
void recovered_1004952c(undefined8 *param_1,long param_2);
bool recovered_100495b4(uint param_1,int param_2);
undefined8 recovered_1004968c(undefined8 *param_1,long param_2,long param_3,int param_4);
undefined8 recovered_10049730(char *param_1,ulong param_2,uint *param_3);
undefined8 recovered_100497f8(void);
uint128 recovered_100497fc(undefined8 *param_1,undefined8 param_2,long param_3);
undefined1 * recovered_10049844(undefined8 *param_1,long *param_2,uint param_3);
void recovered_10049acc(undefined8 *param_1,long *param_2);
undefined8 * recovered_10049b24(undefined8 *param_1,long param_2);
uint128 recovered_10049b6c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,uint param_6);
long recovered_10049e64(long *param_1,byte param_2,int param_3,int param_4);
undefined8 recovered_1004ad00(long param_1,long *param_2,long *param_3,long *param_4,long param_5);
long recovered_1004ad58(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_1004ad80(long param_1);
long recovered_1004ae50(undefined8 *param_1,ulong param_2);
uint recovered_1004aec4(long param_1);
long * recovered_1004af74(undefined8 *param_1,uint param_2);
bool recovered_1004b158(long *param_1,byte *param_2);
uint recovered_1004b1bc(long param_1,long param_2);
uint recovered_1004b1f4(long param_1);
ulong recovered_1004b33c(long param_1,long *param_2,long *param_3,long *param_4,long param_5);
void recovered_1004b9ec(long param_1,int param_2);
bool recovered_1004ba14(long param_1,long param_2,long param_3,long *param_4,int param_5);
bool recovered_1004ba90(long param_1,long param_2);
uint128 recovered_1004bac8(undefined8 *param_1);
ulong recovered_1004badc(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,
                        int param_5,int param_6);
uint128 recovered_1004bbd0(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6);
void recovered_1004bc60(undefined8 *param_1,int param_2,long param_3,uint *param_4,uint param_5,
                       ulong param_6);
undefined8 recovered_1004bd64(void);
long recovered_1004bd68(undefined8 *param_1,long *param_2,long *param_3);
undefined8 recovered_1004be00(undefined8 *param_1,long *param_2);
long * recovered_1004c04c(long param_1,ulong param_2);
void recovered_1004c0b4(undefined8 *param_1,long param_2,int param_3,ulong *param_4,long param_5);
bool recovered_1004c190(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 *param_6);
bool recovered_1004c1f4(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4);
undefined8
recovered_1004c278(undefined8 *param_1,long param_2,long *param_3,long param_4,ulong param_5,
                  undefined1 *param_6);
long recovered_1004c348(undefined8 *param_1,long *param_2,undefined8 *param_3);
bool recovered_1004c4a8(undefined8 *param_1,long *param_2,long *param_3);
void recovered_1004c550(undefined8 *param_1,long *param_2,long *param_3);
void recovered_1004c658(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                       int param_5,long param_6);
void recovered_1004c780(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,int param_5
                       ,int param_6);
void recovered_1004cb48(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6);
undefined8 recovered_1004cc38(void);
void recovered_1004cc3c(undefined8 *param_1,long param_2,int param_3);
uint128 recovered_1004cd2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
undefined8
recovered_1004cf54(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
uint128 recovered_1004cfd8(undefined8 *param_1,ulong param_2,long param_3,int *param_4,ulong param_5);
uint128 recovered_1004d104(undefined8 *param_1,uint param_2,long param_3,ulong *param_4,int param_5,
                  long param_6);
long * recovered_1004d1f0(undefined8 *param_1,long param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5);
uint128 recovered_1004d240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5);
uint128 recovered_1004d3bc(undefined8 *param_1,int param_2,long param_3);
uint128 recovered_1004d400(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,uint param_5,
                  long param_6);
uint128 recovered_1004d52c(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,int param_5);
void recovered_1004d6bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4,int param_5,long param_6);
uint128 recovered_1004d7e0(undefined8 *param_1,int param_2,long param_3,int *param_4,int param_5,int param_6
                  );
void recovered_1004da60(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,int param_6);
uint128 recovered_1004dba8(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
undefined8 recovered_1004dbe8(void);
void recovered_1004dbec(long param_1,long param_2,long param_3);
undefined8 recovered_1004dc48(void);
undefined8 recovered_1004dc4c(void);
uint128 recovered_1004dc50(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
undefined8 recovered_1004dcf0(void);
uint128 recovered_1004dcf4(undefined8 *param_1);
uint128 recovered_1004dd08(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,uint param_5,
                  uint param_6);
uint128 recovered_1004e1a8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6);
uint128 recovered_1004e254(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5);
uint128 recovered_1004e2ec(undefined8 *param_1,uint param_2,long param_3);
uint128 recovered_1004e330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,uint param_6);
uint128 recovered_1004e5a4(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_1004e628(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                  long param_6);
uint128 recovered_1004e6b4(undefined8 *param_1,uint param_2,long param_3,ulong *param_4,int param_5,
                  ulong param_6);
byte * recovered_1004e7bc(undefined8 *param_1,long param_2,undefined8 *param_3);
uint128 recovered_1004e928(undefined8 *param_1,undefined8 param_2,long param_3);
uint128 recovered_1004e970(undefined8 *param_1,long param_2,undefined4 param_3);
uint128 recovered_1004e9b0(undefined8 *param_1,long param_2);
void recovered_1004ed98(long *param_1);
long * recovered_1004edfc(undefined8 *param_1,long *param_2,ulong param_3,ulong *param_4,
                         uint param_5);
long * recovered_1004f458(undefined8 *param_1,long *param_2,long param_3);
ulong * recovered_1004f500(undefined8 *param_1,long *param_2,ulong *param_3);
void recovered_1004f5a4(undefined8 *param_1,long *param_2,long param_3);
bool recovered_1004f5d8(long param_1,long param_2);
ulong * recovered_1004f610(undefined8 *param_1,ulong *param_2);
uint128 recovered_1004f688(undefined8 *param_1,long param_2);
uint128 recovered_1004f6f4(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_1004f860(undefined8 *param_1,undefined8 param_2,long param_3,ulong *param_4,int param_5,
                  uint param_6);
void recovered_1004f970(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                       undefined8 param_5,long param_6);
uint128 recovered_1004f9a8(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6);
long recovered_1004fa04(undefined8 *param_1,int param_2,long param_3);
uint128 recovered_1004fa6c(undefined8 *param_1,long param_2,long param_3);
uint128 recovered_1004fb80(undefined8 *param_1,ulong *param_2,undefined8 *param_3,long param_4,byte *param_5
                  );
uint128 recovered_1004fbd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5);
void recovered_100504d0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4);
uint128 recovered_10050584(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  int param_5);
uint128 recovered_10050620(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,uint param_6);
void recovered_10050924(undefined8 *param_1,int param_2,long param_3);
long recovered_10050a5c(undefined8 *param_1,undefined4 param_2);
bool recovered_10050abc(undefined8 *param_1,long *param_2,ulong param_3,undefined8 *param_4);
undefined8 recovered_10050da4(void);
long * recovered_10050da8(undefined8 *param_1,ulong param_2,long param_3);
uint128 recovered_10050e00(undefined8 *param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5);
ulong * recovered_10051428(undefined8 *param_1,ulong *param_2);
ulong * recovered_100514d4(undefined8 *param_1,ulong *param_2,ulong *param_3);
bool recovered_10051580(undefined8 param_1);
undefined8 recovered_100515d0(void);
uint128 recovered_100515d4(undefined8 *param_1);
uint128 recovered_10051658(undefined8 *param_1);
uint128 recovered_1005166c(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,int param_5,
                  long param_6);
uint128 recovered_100517e0(undefined8 *param_1,int param_2,long param_3,ulong *param_4,int param_5,
                  int param_6);
uint128 recovered_10051964(undefined8 *param_1,int param_2,long param_3,ulong *param_4,int param_5);
long * recovered_1005196c(undefined8 *param_1);
undefined8 recovered_100519f0(void);
undefined8 recovered_100519f4(void);
uint128 recovered_100519f8(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                  long param_6);
uint128 recovered_10051a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
void recovered_10051aac(long param_1,undefined8 *param_2);
uint128 recovered_10051b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  uint param_5);
undefined8
recovered_10051d9c(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
uint128 recovered_10051e94(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6);
uint128 recovered_100520b4(undefined8 *param_1);
long * recovered_100520f4(undefined8 *param_1);
undefined8
recovered_10052174(undefined8 *param_1,ulong param_2,long param_3,long *param_4,ulong *param_5,
                  undefined8 *param_6);
undefined8 recovered_1005224c(void);
undefined8
recovered_10052250(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                  undefined4 *param_6);
undefined8 recovered_100522dc(long param_1,int *param_2,byte *param_3);
void recovered_10052368(char *param_1,char *param_2,undefined1 *param_3);
void recovered_1005244c(undefined8 param_1,char *param_2,char *param_3);
bool recovered_10052578(char *param_1,int *param_2,byte *param_3);
void recovered_10052730(byte *param_1);
bool recovered_100527c0(long param_1);
undefined8 recovered_1005286c(undefined8 param_1,undefined8 param_2);
undefined8 recovered_100528c0(long param_1,byte *param_2);
long recovered_100529b4(long param_1,byte *param_2);
long recovered_100529e8(ulong *param_1);
bool recovered_10052a5c(byte *param_1);
void recovered_10052afc(long param_1,long param_2);
void recovered_10052b40(long param_1,char *param_2,char *param_3);
bool recovered_10052b70(byte *param_1,char *param_2);
void recovered_10052c70(long param_1,char *param_2,void *param_3,ulong param_4);
undefined8
recovered_10052ce8(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5,
                  ulong *param_6,undefined1 *param_7,undefined1 *param_8,long param_9,char *param_10
                  ,ulong param_11,undefined *param_12,undefined8 param_13,byte *param_14,
                  char param_15,byte *param_16);
undefined8
recovered_10054374(undefined8 *param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
void recovered_100545b4(undefined8 *param_1,long param_2,ulong param_3);
bool recovered_10054658(long param_1,byte *param_2,uint param_3,uint param_4,long param_5,
                       long param_6,byte *param_7,long param_8);
long recovered_10054a4c(long param_1);
int recovered_10054a78(long param_1);
undefined8 recovered_10054b1c(long param_1,byte *param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_10054c3c(long param_1,undefined1 *param_2,ulong param_3);
ulong recovered_10054c50(long param_1);
bool recovered_10054c8c(long param_1,ulong *param_2);
bool recovered_10054d24(char *param_1);
void recovered_10054d68(long param_1,long param_2);
void recovered_10054d80(long param_1,int param_2,uint param_3,uint param_4);
ulong recovered_10054f40(undefined8 *param_1,uint param_2,undefined8 *param_3);
undefined8
recovered_100551fc(long param_1,long *param_2,undefined1 param_3,long param_4,uint param_5);
void recovered_10055280(long param_1,long *param_2,undefined1 param_3,uint param_4);
bool recovered_100552a8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,long param_7,uint param_8);
void recovered_100553a0(long param_1,void *param_2,void *param_3,uint param_4);
void recovered_100553dc(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,undefined8 param_6);
undefined8 recovered_10055494(void *param_1,undefined8 param_2);
uint recovered_100554e0(uint param_1);
ulong recovered_10055500(ulong param_1,ushort *param_2,ulong param_3);
void recovered_1005552c(undefined4 *param_1,ulong param_2,undefined4 param_3);
ulong recovered_10055590(int *param_1);
undefined8 recovered_10055618(long param_1,uint *param_2);
uint recovered_10055690(uint *param_1);
undefined8 recovered_1005569c(long param_1,ulong param_2,ulong *param_3);
undefined8
recovered_10055718(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,char *param_6,ulong param_7);
bool recovered_10055938(long param_1,long param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5);
uint128 recovered_100559e8(long param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5);
bool recovered_100559fc(long *param_1,undefined1 *param_2,long param_3);
bool recovered_10055b18(long param_1,byte *param_2,byte *param_3,int param_4,char *param_5,
                       ulong param_6);
long * recovered_10055d48(long *param_1);
bool recovered_10055db0(long param_1,ulong *param_2,uint *param_3);
bool recovered_10055e60(long param_1,ulong param_2);
bool recovered_10055f50(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                       long param_9,ushort param_10);
undefined8
recovered_1005615c(long param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint *param_7,uint *param_8,byte *param_9,long *param_10,short *param_11);
bool recovered_100562dc(long *param_1,char *param_2,ulong param_3);
long * recovered_10056584(long *param_1);
uint128 recovered_100565d4(long *param_1,long param_2,ulong param_3,char *param_4,ulong param_5);
undefined8 recovered_100566a0(void);
undefined8 recovered_100566c4(long param_1,ulong param_2,long param_3,long param_4,long *param_5);
void recovered_100568c0(long param_1,long param_2,byte *param_3,long param_4,ulong param_5);
long recovered_100572c8(undefined8 *param_1,void *param_2,ulong param_3);
long recovered_10057304(long *param_1,long param_2,long *param_3,undefined8 param_4);
ulong * recovered_1005738c(long *param_1,uint param_2);
ulong * recovered_10057480(long *param_1);
long * recovered_100574d0(long *param_1,long param_2);
long * recovered_10057574(long *param_1,long param_2,byte *param_3);
void recovered_10057618(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10057668(undefined8 param_1,char *param_2,void *param_3);
void recovered_100576d0(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                       ulong param_5,ulong *param_6,undefined1 *param_7,undefined1 *param_8,
                       long param_9,char *param_10,undefined8 param_11,undefined *param_12,
                       undefined8 param_13);
byte recovered_10057700(long *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4);
bool recovered_10057900(byte *param_1,byte *param_2);
bool recovered_1005794c(byte *param_1);
undefined8 recovered_10057a48(long param_1,byte *param_2,byte *param_3,uint param_4);
void recovered_10057ea0(long param_1,long param_2);
void recovered_10057f10(long param_1,long param_2);
long recovered_1005ab2c(long param_1,uint param_2,uint param_3,int *param_4,undefined4 param_5,
                       undefined1 *param_6,uint param_7,int param_8);
void recovered_1005ac58(long param_1,int *param_2,long param_3,long param_4,int *param_5,
                       int *param_6);
void recovered_1005b700(long param_1,long param_2,int param_3);
undefined8 recovered_1005b898(long param_1,byte *param_2,ulong param_3);
byte * recovered_1005b960(long param_1,byte *param_2);
bool recovered_1005baf8(byte *param_1);
void recovered_1005bb94(long param_1,int *param_2,long param_3,int *param_4,int *param_5,
                       uint *param_6,ulong param_7);
void recovered_1005d930(byte *param_1,char *param_2);
long recovered_1005da1c(long param_1,char *param_2);
int recovered_1005da84(long param_1,uint param_2);
void recovered_1005dae8(long param_1,undefined4 *param_2);
void recovered_1005db5c(long param_1,int *param_2,byte *param_3,undefined4 param_4,
                       undefined1 *param_5,uint param_6,int param_7);
ulong recovered_1005dbc0(byte *param_1,ulong param_2);
ulong recovered_1005dbcc(long param_1,ulong param_2,byte *param_3,int param_4,ulong param_5);
void recovered_1005dc44(long param_1,uint *param_2);
void recovered_1005e050(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
long recovered_1005e0e4(long param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7);
void recovered_1005e218(long param_1);
undefined8 recovered_1005e260(long param_1,ulong param_2,undefined1 *param_3);
void recovered_1005e474(long param_1,int *param_2,byte *param_3,undefined4 param_4,
                       undefined1 *param_5,uint param_6,int param_7);
ulong recovered_1005e93c(long *param_1,ulong param_2);
int recovered_1005e974(long param_1,char *param_2,uint param_3);
ulong recovered_1005ea10(long param_1,ulong param_2,uint param_3,undefined8 param_4,uint *param_5);
ulong recovered_1005ea5c(long param_1,ulong param_2,uint param_3,undefined8 *param_4,long param_5,
                        long param_6,uint *param_7);
void recovered_1005eb10(long param_1,long param_2,undefined4 param_3);
void recovered_1005ebac(long param_1,uint param_2,int param_3,uint param_4,char *param_5,
                       int *param_6);
int recovered_1005ecf4(int param_1,long param_2);
void recovered_1005ed20(long param_1,long param_2,undefined4 *param_3,ulong param_4,int param_5,
                       int param_6);
ulong recovered_1005ef28(long param_1,ulong param_2,uint param_3,uint param_4,uint *param_5);
undefined4 recovered_1005f024(long param_1,ulong param_2,uint param_3,int *param_4);
ulong recovered_1005f160(long param_1,ulong param_2,int param_3,uint param_4,uint *param_5);
int recovered_1005f8ec(byte *param_1);
bool recovered_1005f950(byte *param_1,byte *param_2,undefined1 *param_3,ulong param_4);
ulong recovered_1005f9a8(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,ulong param_5
                        );
bool recovered_1005f9fc(byte *param_1);
void recovered_1005fa4c(long param_1,long param_2,int *param_3);
void recovered_1005faa4(float param_1,void *param_2);
undefined8
recovered_1005fafc(void *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,void *param_7);
undefined8 recovered_1005fb80(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4);
void recovered_1005fbe4(long param_1,long param_2);
void recovered_1005fd80(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                       ulong param_7);
void recovered_1005ff24(int *param_1,int param_2,int param_3);
int recovered_1005ff90(int *param_1,uint param_2,int param_3,int param_4,char *param_5);
bool recovered_10060434(long param_1,ulong param_2,ulong param_3,int param_4);
ulong recovered_10060478(long param_1,ulong param_2,ulong param_3,uint param_4,ulong param_5);
void recovered_100605ac(long param_1,ulong param_2,ulong param_3,int param_4,byte *param_5);
void recovered_10060648(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_100606e4(long param_1,uint param_2,uint param_3);
uint128 recovered_10060734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int recovered_10060790(long param_1,long param_2);
char * recovered_100607dc(long param_1,byte *param_2);
void recovered_10060854(char *param_1,char *param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_100608e8(char *param_1,char *param_2,byte *param_3,undefined1 *param_4);
ulong recovered_1006095c(long param_1,int param_2);
void recovered_100609f8(long param_1,ulong param_2,char *param_3,int param_4,long param_5,
                       ulong param_6);
void recovered_10060a9c(long param_1,ulong param_2,int param_3,uint *param_4,uint *param_5);
int recovered_10060c50(long param_1,ulong param_2,int param_3,ulong param_4);
int recovered_10060c5c(long param_1,ulong param_2,int param_3,ulong param_4,uint param_5,
                      uint param_6);
bool recovered_10061388(byte *param_1);
int recovered_100613c4(long param_1,uint param_2,uint param_3,uint param_4,int param_5);
void recovered_100614e8(long param_1,byte *param_2,long param_3,char *param_4,long param_5);
byte * recovered_10061a18(byte *param_1,byte *param_2,byte *param_3);
byte * recovered_10061ac8(byte *param_1,byte *param_2,byte *param_3);
char * recovered_10061b58(long param_1,char param_2,long param_3);
bool recovered_10061b7c(byte *param_1,byte *param_2,int param_3,long param_4,int *param_5,
                       ulong param_6,uint param_7);
undefined8 recovered_10061da4(byte *param_1,byte *param_2,int param_3,int *param_4);
undefined8 recovered_10061ebc(byte *param_1,byte *param_2,int param_3,undefined4 *param_4);
uint128 recovered_10061ff0(double param_1,undefined8 *param_2,byte *param_3);
undefined8 recovered_1006204c(undefined8 *param_1,byte *param_2,double *param_3);
bool recovered_10062248(byte *param_1,uint param_2,char *param_3);
uint128 recovered_100624dc(byte *param_1);
ulong recovered_100625e8(long param_1,ulong param_2,byte *param_3,undefined1 *param_4,ulong param_5);
int recovered_10062634(int *param_1,int param_2,int param_3);
long recovered_10062670(long param_1,byte *param_2,uint param_3,undefined4 *param_4);
void recovered_100627ec(long param_1,char *param_2,uint param_3,undefined4 *param_4);
uint recovered_100628d0(char *param_1);
void recovered_10062938(long param_1,uint *param_2);
bool recovered_10062ad8(long param_1,ulong param_2,long param_3);
bool recovered_10062d20(long param_1,uint param_2,int param_3,undefined8 param_4,ulong param_5,
                       undefined8 param_6);
void recovered_10062ddc(undefined4 *param_1,long param_2,uint param_3,uint param_4);
void recovered_10062e78(long param_1);
char recovered_10062eb8(long param_1,long param_2,long param_3,undefined1 param_4);
void recovered_10062f24(long param_1,long param_2,byte *param_3,char *param_4);
bool recovered_100630f4(long param_1);
void recovered_10063140(long param_1,undefined8 *param_2,byte *param_3);
void recovered_100631fc(long param_1,undefined8 *param_2);
bool recovered_10063284(long param_1);
undefined8 recovered_10063330(void);
undefined8 recovered_10063354(long param_1,undefined8 param_2,char *param_3);
bool recovered_100633fc(long param_1,byte *param_2);
bool recovered_10063460(long param_1,byte *param_2);
void recovered_10063508(char *param_1,byte *param_2,ulong param_3);
undefined8 recovered_10063658(void *param_1,void *param_2,char *param_3);
undefined1 recovered_100636a4(long *param_1);
void recovered_100637f0(long param_1,long param_2);
void recovered_1006388c(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_1006389c(long param_1,long param_2);
char * recovered_100638f0(char *param_1);
void recovered_10063924(long param_1);
void recovered_100639b8(long param_1);
void recovered_10063a60(long param_1);
int * recovered_10063b28(long param_1);
undefined4 recovered_10063b68(long param_1,long param_2);
void recovered_10063c9c(long param_1);
long recovered_10063dd4(long param_1,undefined8 *param_2,uint param_3);
byte recovered_1006400c(long param_1,undefined8 *param_2,char *param_3);
void recovered_10064194(long param_1,byte *param_2);
uint128 recovered_10064248(void);
uint128 recovered_10064280(long param_1);
bool recovered_1006430c(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_10064338(long param_1,undefined4 param_2);
uint128 recovered_10064370(long param_1,uint param_2);
uint128 recovered_100643e0(long param_1,uint param_2,uint param_3);
void recovered_10064718(long param_1,undefined8 *param_2,byte *param_3,int param_4,int param_5);
void recovered_100648f0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       double *param_5,double *param_6);
uint128 recovered_10064a44(double param_1);
uint recovered_10064ad0(long param_1,ulong param_2);
undefined8 * recovered_10064bfc(long param_1,uint param_2);
void recovered_10064cc4(long param_1,long param_2);
undefined8 recovered_10064edc(long param_1,long param_2);
undefined8 recovered_100650c8(long param_1,long param_2);
undefined8 recovered_10065250(long param_1,long param_2);
undefined8 recovered_10065364(long param_1,long param_2,byte *param_3);
void recovered_10065454(long param_1);
void recovered_10065488(long param_1,long param_2,int param_3);
uint recovered_10065518(long param_1,long param_2,long param_3,uint *param_4,
                       uint128 *param_5,uint param_6);
void recovered_10065658(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       uint param_5);
undefined8 recovered_100657a4(long *param_1,long param_2,long *param_3,int *param_4,uint param_5);
undefined8 recovered_100659ec(long *param_1,long param_2,long *param_3,int *param_4,uint param_5);
long * recovered_10065c08(long *param_1,long param_2);
void recovered_10065c8c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       );
void recovered_10065e18(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       uint param_5);
void recovered_10065ee8(long param_1,long param_2,long param_3,uint *param_4,uint param_5);
undefined8 recovered_10065ff4(undefined8 *param_1);
bool recovered_100662a0(long param_1,uint *param_2,ulong param_3);
undefined8
recovered_10068434(char *param_1,ulong param_2,long *param_3,int *param_4,uint *param_5,int *param_6
                  );
ulong recovered_1006b2f4(long *param_1);
undefined1 recovered_1006b344(long *param_1,long param_2);
int recovered_1006b3d4(long *param_1,uint param_2);
uint recovered_1006b410(long *param_1,int param_2);
void recovered_1006b4a0(long *param_1,uint *param_2,uint param_3);
void recovered_1006b4e8(uint *param_1);
bool recovered_1006b5e0(uint *param_1,uint param_2);
bool recovered_1006b9a8(long param_1);
ulong recovered_1006b9dc(long *param_1,uint param_2);
undefined8 recovered_1006ba88(long param_1,int param_2);
undefined8 recovered_1006bb10(short *param_1,byte *param_2,ulong param_3,ulong param_4);
undefined2 recovered_1006bc48(long *param_1,long param_2);
uint recovered_1006bcd0(long param_1,uint param_2,uint param_3);
bool recovered_1006bd30(int *param_1);
uint recovered_1006bd5c(long param_1,ulong param_2,byte *param_3,byte *param_4,ulong param_5,
                       int param_6);
uint128 recovered_1006be64(byte *param_1);
bool recovered_1006bfb8(double param_1,double param_2,long param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,long *param_8,int *param_9);
bool recovered_1006d804(uint param_1);
bool recovered_1006d854(long param_1,byte *param_2,byte *param_3,long param_4,ulong *param_5,
                       ulong param_6,int param_7,ulong param_8);
undefined8 recovered_1006dbf4(long *param_1,long param_2,ulong param_3);
bool recovered_1006dcd0(ulong *param_1,long param_2);
void recovered_1006dec8(long *param_1);
char * recovered_1006df08(long *param_1,uint param_2,void *param_3,long param_4);
bool recovered_1006e028(double *param_1);
uint128 recovered_1006e0c8(double param_1);
uint128 recovered_1006e0d8(double param_1);
void recovered_1006e180(double param_1,double param_2,double param_3,double param_4,long param_5);
void recovered_1006e1cc(double param_1,double param_2,double param_3,double param_4,double param_5,
                       double param_6,double param_7,ulong param_8,uint param_9,uint param_10);
ulong recovered_1006e584(double param_1,double param_2,double param_3,double param_4,double param_5,
                        double param_6,double param_7,double param_8,ulong param_9);
ulong recovered_1006e60c(double param_1,double param_2,double param_3,double param_4,double param_5,
                        double param_6,double param_7,double param_8,ulong param_9,int param_10);
void recovered_1006e7e8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,
                       long param_5);
uint128 recovered_1006e878(double param_1,double param_2);
undefined1 recovered_1006e960(long *param_1);
uint recovered_1006e980(long *param_1);
ulong recovered_1006e9a4(long *param_1);
long recovered_1006ea04(long *param_1,ulong param_2);
undefined8 recovered_1006ea60(int *param_1);
void recovered_1006ea88(long *param_1,long *param_2,ulong param_3);
int recovered_1006ead4(long param_1,ulong param_2);
long recovered_1006eb2c(long *param_1,ulong param_2);
uint recovered_1006eb68(long *param_1,uint param_2);
bool recovered_1006ebf0(long param_1);
bool recovered_1006ec48(long *param_1);
int recovered_1006ec7c(long *param_1);
ulong recovered_1006ecd0(long *param_1,long param_2,uint param_3,int param_4);
ulong recovered_1006ee54(long *param_1,long param_2,ulong param_3);
uint recovered_1006f1d0(long *param_1,uint *param_2);
uint recovered_1006f274(long *param_1,long param_2);
int recovered_1006f330(long *param_1,long param_2);
undefined8 recovered_1006f368(long param_1,long param_2,long param_3,ulong param_4,int param_5);
uint recovered_1006f4c4(long param_1,int param_2,uint param_3);
ushort recovered_1006f530(long *param_1);
ushort recovered_1006f554(long *param_1);
void recovered_1006f5b0(long *param_1,uint param_2);
void recovered_1006f5dc(long *param_1,undefined1 param_2);
int recovered_1006f600(long *param_1);
void recovered_1006f618(double *param_1,long param_2,long *param_3);
int recovered_1006f79c(uint param_1);
void recovered_1006f7dc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4);
void recovered_1006fab0(long param_1,ulong param_2,ulong param_3,uint param_4);
long recovered_1006fb38(long param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       undefined8 param_6);
void recovered_1006fc14(long param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       uint param_7);
void recovered_1006fd10(long param_1,long *param_2,long param_3,ulong param_4);
undefined8
recovered_1006fea4(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  int param_6);
long recovered_10070f60(long param_1,long param_2,long param_3,uint param_4,int param_5,
                       char *param_6,ulong param_7);
long recovered_10071068(long param_1,long param_2,int *param_3,long *param_4);
uint128 recovered_10071474(long param_1,long param_2,int param_3);
uint recovered_100714c8(double param_1,double param_2,double *param_3);
ulong recovered_10071768(long param_1,uint param_2,byte *param_3,byte *param_4,ulong param_5,
                        int param_6);
void recovered_10071850(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5);

/* Original analysis identifiers for manual recovery units. */
