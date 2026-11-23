/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
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
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost recovered SIMD semantics; Pooka's Free Software License. */
typedef struct { uint64_t words[3]; } pf_blob24;
#define PF_PART16(value,offset) (*(uint128 *)((uint8_t *)&(value)+(offset)))
static inline void WaitForEvent(void) { __asm__ volatile("wfe"); }
__attribute__((noreturn)) static inline uintptr_t SoftwareBreakpoint(unsigned n,uintptr_t pc) { (void)n;(void)pc;__builtin_trap(); }
static inline uint64_t NEON_sqadd(uint64_t a,uint64_t b,unsigned lane) {
 uint64_t result=0;
 for(unsigned i=0;i<2;++i) {
  int64_t x=(int32_t)(a>>(32*i)),y=(int32_t)(b>>(32*i)),z=x+y;
  if(z>2147483647)z=2147483647;if(z<(-2147483647-1))z=(-2147483647-1);
  result|=(uint64_t)(uint32_t)z<<(i*32);
 } (void)lane;return result;
}
static inline uint64_t NEON_ucvtf(uint64_t a) { return pf_double_bits((double)a); }
static inline uint64_t NEON_umaxv(uint64_t a,unsigned lane) {
 uint64_t mask=lane==8?~0ULL:((1ULL<<(lane*8))-1),result=0;
 for(unsigned i=0;i<8/lane;++i){uint64_t v=(a>>(i*lane*8))&mask;if(v>result)result=v;}return result;
}
static inline uint128 NEON_fmov(uint64_t bits,unsigned lane) { (void)lane;return ((uint128)bits<<64)|bits; }

#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
#define ZEXT812(value) ((uint128)(uint64_t)(value))
#define Reset (*(uint8_t *)(uintptr_t)0)
#define SUB168(a,b) ((uint64_t)((uint128)(a)>>((b)*8)))
/* Permafrost library ARM64 intrinsics; Pooka's Free Software License. */
static inline uint64_t pf_neon_bound(uint64_t a,uint64_t b,unsigned lane,int maximum) {
 uint64_t result=0;unsigned bits=lane*8;
 uint64_t mask=bits==64?~0ULL:((1ULL<<bits)-1);
 for(unsigned i=0;i<8/lane;++i){
  int64_t x=(int64_t)((a>>(i*bits))<<(64-bits))>>(64-bits);
  int64_t y=(int64_t)((b>>(i*bits))<<(64-bits))>>(64-bits);
  result|=((uint64_t)((maximum?x>y:x<y)?x:y)&mask)<<(i*bits);
 }return result;
}
#define NEON_smax(a,b,lane) pf_neon_bound(a,b,lane,1)
#define NEON_smin(a,b,lane) pf_neon_bound(a,b,lane,0)
__attribute__((always_inline)) static inline uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %0,sp":"=r"(value));return value;}
static inline uintptr_t pf_ctr(void){uintptr_t value;__asm__ volatile("mrs %0,ctr_el0":"=r"(value));return value;}
#define ctr_el0 pf_ctr()
static inline void DC_CVAC(uintptr_t value){__asm__ volatile("dc cvac,%0"::"r"(value):"memory");}
static inline void pf_dsb(void){__asm__ volatile("dsb sy"::: "memory");}
static inline void pf_isb(void){__asm__ volatile("isb"::: "memory");}
#undef NAN
#define NAN(value) __builtin_isnan(pf_bits_double(value))
#define DataSynchronizationBarrier(...) pf_dsb()
#define InstructionSynchronizationBarrier(...) pf_isb()
extern uint8_t pf_module_state[];
/* Original analysis identifiers for manual recovery units. */
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
char *strstr(const char *,const char *);
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
static inline void DataMemoryBarrier(unsigned a,unsigned b){(void)a;(void)b;__asm__ volatile("dmb ish":::"memory");}
static inline void ClearExclusiveLocal(void){__asm__ volatile("clrex":::"memory");}
#define UINT_82010894 (*(volatile unsigned *)(uintptr_t)0x82010894U)
#define UINT_8201087c (*(volatile unsigned *)(uintptr_t)0x8201087cU)
#define UINT_82010838 (*(volatile unsigned *)(uintptr_t)0x82010838U)
#define UINT_82010850 (*(volatile unsigned *)(uintptr_t)0x82010850U)
#define UINT_820108e8 (*(volatile unsigned *)(uintptr_t)0x820108e8U)
#define UINT_82010890 (*(volatile unsigned *)(uintptr_t)0x82010890U)
#define UINT_82010818 (*(volatile unsigned *)(uintptr_t)0x82010818U)
#define UINT_8201098c (*(volatile unsigned *)(uintptr_t)0x8201098cU)
#define UINT_82010994 (*(volatile unsigned *)(uintptr_t)0x82010994U)
#define UINT_82010858 (*(volatile unsigned *)(uintptr_t)0x82010858U)
#define UINT_820108e0 (*(volatile unsigned *)(uintptr_t)0x820108e0U)
#define UINT_82010910 (*(volatile unsigned *)(uintptr_t)0x82010910U)
#define UINT_8201095c (*(volatile unsigned *)(uintptr_t)0x8201095cU)
#define UINT_8201084c (*(volatile unsigned *)(uintptr_t)0x8201084cU)
#define UINT_820108f8 (*(volatile unsigned *)(uintptr_t)0x820108f8U)
#define UINT_820108d0 (*(volatile unsigned *)(uintptr_t)0x820108d0U)
#define UINT_8201096c (*(volatile unsigned *)(uintptr_t)0x8201096cU)
#define UINT_82010874 (*(volatile unsigned *)(uintptr_t)0x82010874U)
#define UINT_8201082c (*(volatile unsigned *)(uintptr_t)0x8201082cU)
#define UINT_820108d8 (*(volatile unsigned *)(uintptr_t)0x820108d8U)
#define UINT_82010888 (*(volatile unsigned *)(uintptr_t)0x82010888U)
#define UINT_82010904 (*(volatile unsigned *)(uintptr_t)0x82010904U)
#define UINT_82010814 (*(volatile unsigned *)(uintptr_t)0x82010814U)
#define UINT_82010970 (*(volatile unsigned *)(uintptr_t)0x82010970U)
#define UINT_82010968 (*(volatile unsigned *)(uintptr_t)0x82010968U)
#define UINT_82010898 (*(volatile unsigned *)(uintptr_t)0x82010898U)
#define UINT_8201083c (*(volatile unsigned *)(uintptr_t)0x8201083cU)
#define UINT_820108d4 (*(volatile unsigned *)(uintptr_t)0x820108d4U)
#define UINT_82010978 (*(volatile unsigned *)(uintptr_t)0x82010978U)
#define UINT_82010854 (*(volatile unsigned *)(uintptr_t)0x82010854U)
#define UINT_82010974 (*(volatile unsigned *)(uintptr_t)0x82010974U)
#define UINT_82010868 (*(volatile unsigned *)(uintptr_t)0x82010868U)
#define UINT_820108e4 (*(volatile unsigned *)(uintptr_t)0x820108e4U)
#define UINT_82010878 (*(volatile unsigned *)(uintptr_t)0x82010878U)
#define UINT_820108bc (*(volatile unsigned *)(uintptr_t)0x820108bcU)
#define UINT_82010834 (*(volatile unsigned *)(uintptr_t)0x82010834U)
#define UINT_820108c8 (*(volatile unsigned *)(uintptr_t)0x820108c8U)
#define UINT_820108b8 (*(volatile unsigned *)(uintptr_t)0x820108b8U)
#define UINT_820108c0 (*(volatile unsigned *)(uintptr_t)0x820108c0U)
#define UINT_8201088c (*(volatile unsigned *)(uintptr_t)0x8201088cU)
#define UINT_820108dc (*(volatile unsigned *)(uintptr_t)0x820108dcU)
#define UINT_82010840 (*(volatile unsigned *)(uintptr_t)0x82010840U)
#define UINT_82010958 (*(volatile unsigned *)(uintptr_t)0x82010958U)
#define UINT_82010920 (*(volatile unsigned *)(uintptr_t)0x82010920U)
#define UINT_8201091c (*(volatile unsigned *)(uintptr_t)0x8201091cU)
#define UINT_820108f4 (*(volatile unsigned *)(uintptr_t)0x820108f4U)
#define UINT_8201089c (*(volatile unsigned *)(uintptr_t)0x8201089cU)
extern uint8_t pf_module_state[];
char * recovered_10000640(void);
int recovered_1000064c(int argc,char **argv);
int recovered_10003dd4(char *param_1);
void recovered_10004320(undefined1 *param_1);
void recovered_10004340(void);
void recovered_10004718(undefined8 param_1);
void recovered_10004750(char *param_1,undefined8 param_2);
ulong recovered_10004984(void);
ulong recovered_10004abc(int param_1,undefined1 *param_2,undefined8 param_3,byte param_4);
uint recovered_10004be8(uint role);
ulong recovered_10004c0c(char *param_1,int param_2,byte param_3);
void recovered_10004d84(void);
void recovered_10004e0c(uint param_1);
void recovered_10005070(void);
void recovered_100051fc(undefined4 param_1);
void recovered_1000524c(long param_1);
void recovered_10005358(char *param_1);
void recovered_10005570(void);
void recovered_100056b0(void);
byte recovered_100056fc(void);
uint128 recovered_10005774(long param_1);
void recovered_10005850(uint param_1,int param_2);
void recovered_10005a64(long param_1);
uint128 recovered_10007e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void recovered_10007edc(long param_1,int param_2,int param_3,int param_4);
undefined8 recovered_100080f4(undefined8 param_1);
uint128 recovered_10008134(long param_1,undefined8 param_2,int param_3,int param_4);
undefined8 recovered_100081bc(long param_1,undefined8 param_2);
undefined8 recovered_100082cc(char *param_1,long param_2,undefined8 param_3);
undefined8 recovered_10008508(void *param_1);
uint recovered_10008544(long param_1);
void recovered_1000857c(void);
bool recovered_100085ac(int param_1);
void recovered_100085f4(long param_1);
bool recovered_10008628(uint param_1,uint param_2);
undefined8 recovered_100086b4(undefined8 param_1,undefined8 param_2);
bool recovered_100086f0(long param_1,long param_2);
undefined8 recovered_10008734(byte *param_1,uint *param_2);
undefined8 recovered_100087c4(void *param_1,ulong param_2);
undefined4 recovered_10008800(long param_1);
undefined4 recovered_10008828(long param_1);
void recovered_10008850(long param_1,int param_2);
void recovered_10008970(long param_1);
void recovered_100089bc(void);
uint128 recovered_10008db8(void);
uint128 recovered_10008dc4(void);
uint128 recovered_10008ed0(long param_1);
void recovered_10008f10(long param_1,int param_2,int *param_3,int *param_4);
void recovered_10008f8c(long param_1,void *param_2);
undefined8 recovered_10008fc8(long param_1,undefined8 *param_2,undefined8 *param_3);
uint128 recovered_1000904c(long param_1);
bool recovered_100090b8(long param_1,int param_2,uint *param_3);
void recovered_100091e0(long param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10009220(undefined8 *param_1,uint *param_2);
void recovered_1000934c(long param_1,ulong param_2,uint param_3);
bool recovered_100093d0(int param_1,int param_2);
uint128 recovered_10009404(long param_1);
undefined8 recovered_100094a4(void);
undefined8 recovered_100095ec(long *param_1,int *param_2,ulong param_3);
undefined8 recovered_1000968c(ulong param_1);
bool recovered_100096c8(void);
void recovered_10009764(long param_1);
void recovered_100097ac(long param_1);
void recovered_100097e0(long *param_1);
void recovered_10009810(long param_1);
void recovered_10009844(long *param_1);
void recovered_10009874(void *param_1);
void recovered_100098ac(void);
void recovered_100098f8(void);
undefined8 recovered_10009928(long param_1);
undefined8 recovered_10009cf4(undefined8 param_1,undefined1 *param_2,undefined1 *param_3);
bool recovered_10009fec(long param_1,ulong param_2,ulong *param_3,undefined1 *param_4);
bool recovered_1000a044(long param_1,ulong param_2,ulong *param_3,uint param_4);
undefined8 recovered_1000a0b0(undefined8 param_1,char *param_2,void *param_3,undefined8 param_4);
undefined8 recovered_1000a128(undefined8 param_1,void *param_2);
undefined8 recovered_1000a168(undefined8 param_1,undefined8 param_2);
void recovered_1000a1b8(long param_1,ulong param_2,char *param_3);
undefined8 recovered_1000a228(long param_1,ulong *param_2,long param_3,ulong param_4);
undefined8 recovered_1000a294(long param_1,ulong *param_2,ulong *param_3,uint param_4);
bool recovered_1000a37c(long param_1,ulong param_2,ulong *param_3,long param_4,ulong param_5);
void recovered_1000a3f0(long param_1,ulong param_2,uint param_3);
void recovered_1000a480(undefined1 *param_1,long param_2,ulong param_3);
void recovered_1000a4e4(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_1000a53c(undefined8 param_1,char *param_2);
char * recovered_1000a5a4(char *param_1,char param_2);
undefined8 recovered_1000a5d0(undefined8 param_1,char *param_2,void *param_3);
undefined8 recovered_1000a628(char *param_1,void *param_2,undefined8 param_3);
undefined8 recovered_1000a674(void);
void recovered_1000a6a8(undefined8 param_1);
undefined8 recovered_1000a6e8(void *param_1,void *param_2,char *param_3);
unsigned long recovered_1000a738(void);
void recovered_1000a834(undefined *param_1,undefined8 param_2);
undefined8 recovered_1000a8c0(void);
ulong recovered_1000a8f4(undefined8 param_1);
undefined8 recovered_1000a9d8(void *param_1,undefined8 param_2,uint *param_3);
undefined8 recovered_1000aa24(undefined8 param_1,undefined8 param_2);
void recovered_1000aa60(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
void recovered_1000ac18(long param_1,byte *param_2);
byte * recovered_1000b0fc(byte *param_1);
undefined8 recovered_1000b13c(byte *param_1,undefined1 *param_2);
char * recovered_1000b204(char *text);
bool recovered_1000b25c(byte *param_1,byte *param_2);
undefined8 recovered_1000b2bc(byte *param_1,int *param_2,undefined8 *param_3);
bool recovered_1000b344(byte *param_1,byte *param_2);
bool recovered_1000b3c4(char *param_1);
bool recovered_1000b444(char *param_1,byte *param_2);
undefined8 recovered_1000b464(undefined8 param_1,undefined8 param_2,uint *param_3);
void recovered_1000b530(char *param_1,char *param_2);
char * recovered_1000b59c(char *param_1);
char * recovered_1000b5c8(char *param_1);
ulong recovered_1000b5f8(undefined8 param_1,uint param_2);
undefined1 recovered_1000b64c(undefined8 param_1);
ulong recovered_1000b6b4(void);
bool recovered_1000b710(undefined1 *param_1,undefined1 *param_2);
char * recovered_1000b7b0(char *text);
void recovered_1000b7d4(long param_1,uint param_2,int param_3);
int recovered_1000b9ac(char *param_1);
bool recovered_1000ba64(long param_1);
ulong recovered_1000bb10(void);
undefined8 recovered_1000bb74(undefined8 param_1,undefined8 param_2);
void recovered_1000bbb0(long param_1);
void recovered_1000bc0c(long param_1,byte param_2);
undefined8 recovered_1000bd64(long param_1,long *param_2);
void recovered_1000c048(long param_1,long *param_2,int param_3);
void recovered_1000c0a8(long *param_1);
undefined8 recovered_1000c0e4(void);
void recovered_1000c1f8(void);
undefined8 recovered_1000c234(long param_1,long *param_2,long *param_3,uint *param_4);
ulong recovered_1000c714(undefined8 *param_1);
void recovered_1000c784(long param_1,int param_2,int *param_3,int *param_4);
ulong recovered_1000c850(ulong param_1,byte *param_2);
undefined8 recovered_1000c89c(undefined8 *param_1,byte *param_2,uint *param_3);
undefined8
recovered_1000c978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
undefined8
recovered_1000c9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined8 recovered_1000ca84(char *param_1,undefined8 param_2,int *param_3);
ulong recovered_1000cb14(undefined8 *param_1,undefined8 *param_2);
byte recovered_1000cb94(long param_1);
undefined8 recovered_1000cbb4(long param_1,undefined8 *param_2,long param_3,int param_4,int param_5);
long recovered_1000d014(int param_1);
undefined8 recovered_1000d05c(void *param_1);
undefined8 recovered_1000d098(void);
undefined8 recovered_1000d4cc(char *param_1,char *param_2,undefined8 param_3);
ulong recovered_1000d518(undefined8 param_1);
ulong recovered_1000d578(undefined8 param_1,ulong param_2);
void recovered_1000d614(void);
void recovered_1000d944(void);
void recovered_1000da2c(void);
char * recovered_1000dca4(char *param_1,ulong param_2);
void recovered_1000e3bc(void);
void recovered_1000e4d0(void);
void recovered_1000e594(void);
ulong recovered_1000e7ec(ulong param_1);
void recovered_1000e890(void);
void recovered_1000ea88(void);
void recovered_1000eae0(int param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_1000ebd8(uint param_1,uint param_2,uint param_3,uint param_4,ulong param_5);
void recovered_1000ec6c(uint param_1,uint param_2,undefined8 param_3);
bool recovered_1000ed1c(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_1000ed48(void);
long * recovered_1000ed70(int param_1);
undefined8 recovered_1000edd8(long *param_1,int param_2,int param_3,uint param_4,uint param_5);
void recovered_1000eee4(int param_1,int param_2,int param_3,int param_4,ulong param_5);
void recovered_1000ef0c(int param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_1000ef9c(ulong param_1,int param_2,int param_3,long param_4,uint param_5);
long * recovered_1000f048(char *param_1,undefined8 param_2);
long * recovered_1000f364(int param_1);
undefined8 recovered_1000f3a0(void);
undefined8 recovered_1000f400(undefined8 param_1,char *param_2,void *param_3);
void recovered_1000f458(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000f57c(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                       uint param_6);
void recovered_1000f6e8(byte *param_1,int param_2,int param_3,int param_4,uint param_5);
ulong recovered_1000f764(ulong param_1,int param_2,char *param_3,uint param_4,uint param_5,
                        undefined8 param_6);
undefined8
recovered_1000f928(long param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5);
uint recovered_1000fba0(uint param_1,int param_2,long *param_3);
undefined8
recovered_1000fc68(void *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,void *param_7);
undefined8
recovered_1000fcec(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5);
ulong recovered_1000fd54(long param_1,uint param_2,int param_3);
uint128 recovered_1000fde0(uint param_1);
ulong recovered_1000fe18(long param_1,long param_2);
byte recovered_1000fe38(long param_1);
long * recovered_1000fea8(char *param_1,undefined8 param_2,int param_3);
bool recovered_10010220(char *param_1);
undefined8 recovered_10010284(long param_1,char *param_2,long param_3);
undefined8 * recovered_10010414(undefined1 *param_1,int param_2);
void recovered_1001046c(char *param_1,char *param_2,long param_3);
bool recovered_10010510(long param_1,ulong param_2,ulong param_3,char *param_4,ulong param_5);
uint128 recovered_10010558(long param_1);
uint128 recovered_100105a0(long param_1);
byte recovered_1001078c(long param_1);
byte recovered_100107bc(long param_1);
byte recovered_100107e0(long param_1);
void recovered_10010808(undefined8 param_1,ulong param_2,uint param_3);
void recovered_10010908(undefined8 param_1,undefined8 param_2,long param_3,int param_4);
bool recovered_10010ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_10010b0c(long param_1,ulong param_2,ulong param_3);
void recovered_10010b44(undefined8 param_1,undefined8 param_2,uint param_3,int param_4);
uint128 recovered_10010c70(long param_1,int param_2);
undefined8 * recovered_10010cc4(ulong param_1);
void recovered_100124b0(undefined8 param_1,undefined8 param_2,uint param_3);
undefined4 recovered_1001267c(long param_1);
uint recovered_1001269c(long param_1);
bool recovered_100126c4(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
uint recovered_10012770(undefined8 param_1,undefined8 param_2);
ulong recovered_100127c0(ulong param_1,ulong param_2,int param_3,uint param_4);
undefined4 recovered_10013148(long param_1);
uint128 recovered_100131ac(long param_1,undefined8 param_2,uint128 *param_3,long *param_4,
                  int param_5);
uint recovered_10013338(long param_1,undefined8 param_2,int param_3,uint param_4);
uint128 recovered_100133f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint recovered_10013450(int *param_1,uint param_2,uint param_3);
void recovered_10013630(long param_1,uint param_2,int param_3,uint param_4,uint param_5,long param_6
                       );
uint recovered_1001376c(long param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6);
undefined4 recovered_10013844(void);
uint128 recovered_10013878(long param_1);
uint128 recovered_100138d8(char *param_1);
byte recovered_10013918(char *param_1);
void recovered_10013954(long param_1);
ulong recovered_10013db8(ulong param_1,int param_2,char *param_3,uint param_4);
uint recovered_10013dc8(uint param_1);
ulong recovered_10013e00(undefined8 param_1,char *param_2,int param_3,char *param_4,ulong param_5);
uint128 recovered_10013f58(long param_1,int param_2);
void recovered_10014004(int param_1,int param_2,undefined8 *param_3,uint param_4,int param_5);
uint128 recovered_100142b8(long param_1,int param_2);
void recovered_100142dc(int *param_1);
undefined8 * recovered_10014470(undefined8 param_1,undefined8 param_2);
uint128 recovered_100144d4(long param_1,long param_2);
uint128 recovered_10014698(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6);
void recovered_10014760(ulong param_1,ulong param_2,int param_3,int param_4);
bool recovered_100148b4(undefined8 param_1,undefined8 param_2);
int recovered_100148fc(int param_1,uint param_2);
void recovered_10014954(byte *param_1,byte *param_2,uint param_3,uint param_4,int param_5);
void recovered_100149dc(uint param_1,uint param_2,uint param_3,uint param_4);
int recovered_10014b20(void);
ulong recovered_10014b48(char *param_1,uint param_2);
void recovered_10014ca4(undefined1 *param_1,char *param_2,char *param_3,long param_4,ulong param_5);
void recovered_10014d24(ulong param_1,undefined1 *param_2,ulong param_3);
void recovered_10014df8(uint param_1,undefined1 *param_2);
ulong recovered_10014e1c(undefined8 param_1,undefined8 param_2,char *param_3);
uint128 recovered_10014ec8(long param_1);
uint128 recovered_10014ee8(long param_1);
ulong recovered_10014f08(ulong param_1,int param_2,char *param_3,char *param_4);
ulong recovered_10014f50(ulong param_1,int param_2,char *param_3,char *param_4);
void recovered_10014f98(uint param_1,char *param_2,char *param_3,char *param_4);
void recovered_10015000(long param_1,ulong param_2,ulong param_3);
void recovered_100150a8(char *param_1,char *param_2,uint param_3);
uint128 recovered_10015124(long param_1);
uint128 recovered_10015150(long param_1);
uint128 recovered_10015180(long param_1);
uint128 recovered_100151e8(long param_1);
uint128 recovered_10015238(long param_1);
int recovered_1001526c(long param_1);
void recovered_10015290(long param_1);
uint recovered_10015314(long param_1);
void recovered_10015334(long param_1);
int recovered_100154cc(long param_1);
uint recovered_100154ec(long param_1);
bool recovered_10015514(long param_1);
uint128 recovered_1001557c(long param_1);
uint128 recovered_100155cc(long param_1);
uint128 recovered_1001568c(long param_1);
uint128 recovered_100156a8(long param_1);
void recovered_100156c4(ulong param_1,ulong param_2,int param_3);
ulong recovered_100156d0(uint param_1,int param_2,uint param_3);
uint128 recovered_1001578c(void);
ulong recovered_100157ac(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                        uint param_5);
uint128 recovered_1001597c(uint param_1);
void recovered_100159c8(ulong param_1,ulong param_2,ulong param_3);
void recovered_10015a14(void);
int recovered_10015adc(void);
undefined8 * recovered_10015b1c(undefined8 *param_1,uint param_2,int param_3,int param_4);
int recovered_10015c34(undefined8 *param_1,uint param_2,long param_3,int param_4);
int recovered_10015f04(long param_1);
long recovered_10015f80(long param_1,int param_2);
long recovered_10015fa8(long param_1,long param_2);
undefined8
recovered_10015fe0(long *param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5,
                  undefined8 param_6);
void recovered_10016328(ulong param_1,ulong param_2,int param_3,ulong param_4,ulong param_5,
                       uint param_6);
ulong recovered_100164bc(ulong param_1,ulong param_2);
uint128 recovered_100164f8(void);
void recovered_1001655c(int param_1);
void recovered_100168f0(ulong param_1,ulong param_2,uint param_3,int param_4,int param_5);
uint128 recovered_10016a68(void);
uint128 recovered_10016b14(int param_1);
char * recovered_10016b7c(void);
ulong recovered_10016c00(ulong param_1,int param_2,int param_3,char *param_4,uint param_5);
undefined8 recovered_10016d78(undefined8 *param_1,undefined4 *param_2);
ulong recovered_10016dcc(ulong param_1,uint *param_2);
void recovered_10016ea4(long param_1,ulong param_2,uint param_3,ulong param_4);
bool recovered_10016f4c(uint param_1);
ulong recovered_10016f84(uint param_1,ulong param_2);
uint128 recovered_10016fcc(ulong param_1,undefined8 param_2,uint param_3,int param_4,int param_5);
void recovered_10017048(char *param_1,ulong param_2,ulong param_3);
long recovered_1001735c(void);
undefined8 recovered_10017388(void);
undefined8 recovered_10017404(long param_1);
void recovered_100174c4(long param_1);
undefined8 recovered_100174e4(long param_1,uint *param_2,long *param_3);
void recovered_10017688(undefined8 param_1,undefined8 param_2,ulong param_3,
                       undefined *UNRECOVERED_JUMPTABLE,undefined8 param_5);
void recovered_100177dc(long *param_1,ulong param_2,ulong param_3);
uint recovered_10017a8c(long param_1,int param_2,int param_3,uint param_4);
uint recovered_10017b7c(int param_1,uint param_2);
undefined8 recovered_10017bac(long *param_1,ulong param_2,ulong param_3);
void recovered_10017c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void recovered_10017ca8(long *param_1,ulong param_2,uint param_3);
void recovered_10017e38(uint param_1);
void recovered_10017e40(long param_1);
undefined8 recovered_10017ef0(int param_1);
undefined8 recovered_10017ff8(long param_1,undefined1 *param_2);
void recovered_10018084(void);
void recovered_100180c4(uint param_1);
ulong recovered_1001816c(uint param_1,uint param_2,undefined8 param_3,undefined1 *param_4,
                        undefined1 *param_5);
long recovered_100182d8(int param_1);
void recovered_10018314(uint param_1);
ulong recovered_10018370(undefined8 *param_1);
bool recovered_100184f8(char *param_1);
void recovered_10018634(void);
void recovered_100186b0(long param_1,long param_2);
undefined1 recovered_10018710(char *param_1,char *param_2);
undefined1 recovered_100187a0(long param_1,long param_2);
int recovered_1001881c(int param_1);
void recovered_10018868(long param_1);
bool recovered_10018b38(void);
uint recovered_10018b90(uint param_1,uint param_2,int param_3);
char * recovered_10018be0(int param_1,int param_2);
undefined8
recovered_1001998c(char *param_1,ulong param_2,ulong param_3,undefined1 *param_4,int param_5,
                  int param_6);
bool recovered_1001a820(int param_1,int param_2);
long recovered_1001abd0(int param_1,int param_2);
void recovered_1001ac44(uint param_1);
bool recovered_1001acec(int param_1,int param_2);
int recovered_1001ad18(int param_1,int param_2);
uint recovered_1001adb4(int param_1,int param_2);
byte recovered_1001adfc(long param_1);
bool recovered_1001ae2c(long param_1,undefined8 param_2);
void recovered_1001ae84(char *param_1,long param_2,ulong param_3);
void recovered_1001b114(void);
void recovered_1001b134(int param_1);
long recovered_1001b1c0(long param_1,int param_2,int param_3);
int recovered_1001b264(long param_1,int param_2,int param_3);
bool recovered_1001b2f4(char *param_1,int param_2,undefined1 *param_3);
void recovered_1001b334(char *param_1);
undefined1
recovered_1001b62c(ulong param_1,undefined8 param_2,uint param_3,int param_4,int *param_5,
                  undefined1 *param_6,int param_7,int param_8);
void recovered_1001b738(long param_1,int param_2,char *param_3);
char * recovered_1001b964(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,
                         ulong param_5);
void recovered_1001ca80(undefined1 *param_1,int param_2);
void recovered_1001cad8(void);
void recovered_1001cbdc(int param_1);
void recovered_1001cc3c(void);
void recovered_1001ccb4(long param_1);
void recovered_1001cfd4(long param_1,uint param_2,uint param_3);
void recovered_1001d0ec(char *param_1,long param_2);
ulong recovered_1001d2b4(char *param_1,undefined8 param_2);
void recovered_1001d348(char *param_1,int param_2,char param_3);
void recovered_1001d404(undefined1 *param_1,int param_2);
void recovered_1001d458(long param_1);
void recovered_1001d554(void);
void recovered_1001d638(undefined1 *param_1,ulong param_2);
undefined8 recovered_1001d798(undefined8 param_1,char *param_2);
void recovered_1001d800(int param_1);
void recovered_1001d934(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * recovered_1001d984(undefined4 *param_1,uint param_2,uint param_3);
void recovered_1001ddd8(long param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4);
void recovered_1001de84(long param_1);
void recovered_1001dee4(long param_1);
void recovered_1001df80(long param_1);
bool recovered_1001e044(void);
void recovered_1001e080(long param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                       char *param_5,undefined8 param_6,byte param_7);
long recovered_1001e128(undefined1 *param_1,int param_2);
ulong recovered_1001e1b8(char *param_1,uint param_2,undefined1 *param_3,int param_4);
bool recovered_1001e234(long param_1);
undefined8 recovered_1001e290(undefined8 param_1);
bool recovered_1001e2cc(long param_1,ulong param_2,char *param_3);
bool recovered_1001e368(long param_1,ulong param_2,long param_3);
bool recovered_1001e3e8(long param_1,ulong param_2,undefined1 param_3);
void recovered_1001e410(char *param_1,undefined8 param_2);
ulong recovered_1001e4f0(undefined1 *param_1,int param_2);
void recovered_1001e5d8(long param_1,char *param_2);
ulong recovered_1001e62c(undefined8 param_1,undefined8 param_2);
undefined1 * recovered_1001e674(char *param_1,int param_2);
undefined8 recovered_1001e7d8(char *param_1,ulong param_2,ulong param_3,ulong *param_4);
uint128 recovered_1001e858(long param_1,ulong param_2,int param_3);
undefined1 recovered_1001e9f4(long param_1,ulong param_2);
uint recovered_1001ebc4(int param_1);
undefined8 * recovered_1001ebf4(undefined4 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_1001ec40(long *param_1,void *param_2,ulong param_3);
void recovered_1001ece8(undefined1 *param_1,uint param_2);
long recovered_1001ed08(long param_1,void *param_2,ulong param_3);
uint recovered_1001edbc(uint param_1,uint param_2);
char * recovered_1001ede8(undefined8 param_1,long param_2,int param_3);
ulong recovered_1001eeb4(long param_1,ulong param_2,long param_3,long param_4,long param_5,
                        uint param_6);
void recovered_1001ef98(uint param_1);
void recovered_1001f030(long param_1);
undefined8 recovered_1001f088(long param_1,uint *param_2,uint *param_3);
ulong recovered_1001f1a0(ulong param_1);
undefined8
recovered_1001f1e4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,uint param_5);
undefined8 recovered_1001f2f0(undefined8 param_1,char *param_2,char *param_3);
bool recovered_1001f364(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,
                       uint param_5);
void recovered_1001f584(undefined1 *param_1);
bool recovered_1001f5cc(undefined1 *param_1,undefined1 *param_2);
bool recovered_1001f678(ulong param_1,char *param_2);
bool recovered_1001f960(long param_1,undefined1 *param_2);
bool recovered_1001f9b4(long param_1,long param_2,ulong param_3);
bool recovered_1001fa10(long param_1,undefined1 *param_2);
void recovered_1001fa50(void);
undefined8
recovered_1001fafc(long *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                  undefined1 *param_5);
bool recovered_1001fc6c(long param_1,long *param_2);
void recovered_1001fdb4(undefined4 param_1,undefined4 param_2);
void recovered_1001fdf0(undefined4 param_1,undefined1 *param_2,undefined4 param_3);
void recovered_1001fe08(uint param_1,undefined4 param_2,undefined4 param_3);
void recovered_1001ff50(char *param_1,undefined8 param_2);
bool recovered_10020058(int param_1,int param_2,undefined8 *param_3);
bool recovered_100200d0(long param_1);
bool recovered_10020148(char *param_1,undefined8 param_2,long param_3);
undefined8 recovered_10020254(void *param_1,undefined8 param_2,undefined4 *param_3);
void recovered_100202a8(long param_1,int param_2,int param_3);
void recovered_1002034c(long param_1);
bool recovered_100203a0(long param_1,undefined1 *param_2,int param_3);
bool recovered_100204a0(int param_1,int param_2);
void recovered_100204ec(uint param_1,int param_2,int param_3);
ulong recovered_1002055c(long param_1,undefined1 *param_2);
void recovered_100205d8(char *param_1,uint param_2);
void recovered_1002075c(char *param_1);
void recovered_10020888(long param_1,char *param_2,char *param_3);
undefined8 recovered_10020944(void);
undefined8 recovered_10020ad8(byte *param_1,int *param_2);
uint recovered_10020b38(long param_1);
int recovered_10020b80(long param_1);
void recovered_10020bd0(long param_1,ulong param_2,ulong param_3);
undefined8
recovered_10020c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8
recovered_10020ce4(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,uint param_8);
void recovered_10021674(long param_1,undefined8 param_2);
void recovered_1002172c(long param_1,undefined8 param_2);
bool recovered_100217f0(undefined8 param_1,undefined8 param_2);
void recovered_10021844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
                       ,undefined4 param_5,long param_6,undefined8 param_7,long param_8,
                       undefined8 param_9,undefined8 param_10);
uint128 recovered_100218a4(long param_1,undefined8 param_2,undefined8 param_3);
uint128 recovered_10021960(void);
bool recovered_10021984(void);
uint128 recovered_10021a34(void);
void recovered_10021c3c(int param_1);
undefined8 recovered_10021ce4(long *param_1,ulong param_2,ulong param_3);

/* Original analysis identifiers for manual recovery units. */
