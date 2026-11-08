/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost recovered SIMD semantics; Pooka's Free Software License. */
typedef struct { uint64_t words[3]; } pf_blob24;
typedef uint64_t uint5;
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
#define UINT_82010814 (*(uint32_t *)(uintptr_t)0x82010814U)
#define UINT_82010818 (*(uint32_t *)(uintptr_t)0x82010818U)
#define UINT_8201082c (*(uint32_t *)(uintptr_t)0x8201082cU)
#define UINT_82010834 (*(uint32_t *)(uintptr_t)0x82010834U)
#define UINT_82010838 (*(uint32_t *)(uintptr_t)0x82010838U)
#define UINT_8201083c (*(uint32_t *)(uintptr_t)0x8201083cU)
#define UINT_8201084c (*(uint32_t *)(uintptr_t)0x8201084cU)
#define UINT_82010850 (*(uint32_t *)(uintptr_t)0x82010850U)
#define UINT_82010854 (*(uint32_t *)(uintptr_t)0x82010854U)
#define UINT_82010858 (*(uint32_t *)(uintptr_t)0x82010858U)
#define UINT_82010868 (*(uint32_t *)(uintptr_t)0x82010868U)
#define UINT_82010874 (*(uint32_t *)(uintptr_t)0x82010874U)
#define UINT_82010878 (*(uint32_t *)(uintptr_t)0x82010878U)
#define UINT_8201087c (*(uint32_t *)(uintptr_t)0x8201087cU)
#define UINT_82010880 (*(uint32_t *)(uintptr_t)0x82010880U)
#define UINT_82010884 (*(uint32_t *)(uintptr_t)0x82010884U)
#define UINT_82010888 (*(uint32_t *)(uintptr_t)0x82010888U)
#define UINT_8201088c (*(uint32_t *)(uintptr_t)0x8201088cU)
#define UINT_82010890 (*(uint32_t *)(uintptr_t)0x82010890U)
#define UINT_8201089c (*(uint32_t *)(uintptr_t)0x8201089cU)
#define UINT_820108b8 (*(uint32_t *)(uintptr_t)0x820108b8U)
#define UINT_820108bc (*(uint32_t *)(uintptr_t)0x820108bcU)
#define UINT_820108c0 (*(uint32_t *)(uintptr_t)0x820108c0U)
#define UINT_820108c8 (*(uint32_t *)(uintptr_t)0x820108c8U)
#define UINT_820108cc (*(uint32_t *)(uintptr_t)0x820108ccU)
#define UINT_820108d0 (*(uint32_t *)(uintptr_t)0x820108d0U)
#define UINT_820108d4 (*(uint32_t *)(uintptr_t)0x820108d4U)
#define UINT_820108d8 (*(uint32_t *)(uintptr_t)0x820108d8U)
#define UINT_820108dc (*(uint32_t *)(uintptr_t)0x820108dcU)
#define UINT_820108e0 (*(uint32_t *)(uintptr_t)0x820108e0U)
#define UINT_820108e4 (*(uint32_t *)(uintptr_t)0x820108e4U)
#define UINT_820108e8 (*(uint32_t *)(uintptr_t)0x820108e8U)
#define UINT_820108f4 (*(uint32_t *)(uintptr_t)0x820108f4U)
#define UINT_820108f8 (*(uint32_t *)(uintptr_t)0x820108f8U)
#define UINT_82010910 (*(uint32_t *)(uintptr_t)0x82010910U)
#define UINT_8201091c (*(uint32_t *)(uintptr_t)0x8201091cU)
#define UINT_82010920 (*(uint32_t *)(uintptr_t)0x82010920U)
#define UINT_8201095c (*(uint32_t *)(uintptr_t)0x8201095cU)
#define UINT_82010968 (*(uint32_t *)(uintptr_t)0x82010968U)
#define UINT_8201096c (*(uint32_t *)(uintptr_t)0x8201096cU)
#define UINT_82010970 (*(uint32_t *)(uintptr_t)0x82010970U)
#define UINT_82010974 (*(uint32_t *)(uintptr_t)0x82010974U)
#define UINT_82010978 (*(uint32_t *)(uintptr_t)0x82010978U)
#define UINT_8201098c (*(uint32_t *)(uintptr_t)0x8201098cU)
#define Hint_Prefetch(address,...) __builtin_prefetch((const void *)(uintptr_t)(address))
extern uint8_t pf_module_state[];
int recovered_10000640(void);
int recovered_10001be0(char *param_1);
void recovered_10002230(undefined1 *param_1);
void recovered_10002278(void);
void recovered_100023b0(void *param_1);
ulong recovered_100023e8(int param_1,char *param_2,undefined8 param_3,undefined1 param_4);
void recovered_100024f8(char *param_1,int param_2);
ulong recovered_10002610(void);
void recovered_10002748(void);
void recovered_10002768(void);
void recovered_100027e8(undefined4 param_1);
void recovered_1000283c(long param_1);
void recovered_100028c4(char *param_1);
byte recovered_10002f18(void);
uint128 recovered_10002f68(long param_1);
uint recovered_10002fbc(long param_1);
void recovered_1000571c(long param_1);
uint128 recovered_1000573c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_100057bc(long param_1,undefined8 param_2,int param_3,int param_4);
void recovered_10005848(long param_1,undefined8 param_2);
uint128 recovered_10005920(void);
ulong recovered_100059f8(char *param_1,long param_2,undefined8 param_3);
undefined * recovered_10005d30(void);
uint recovered_10005d64(uint param_1);
undefined8 recovered_10005da0(long param_1,undefined8 param_2);
uint recovered_10005e78(void *param_1);
undefined * recovered_10005eb4(void);
undefined8 recovered_10005ee8(long param_1);
bool recovered_10005ff0(int param_1);
void * recovered_10006038(ulong param_1);
undefined8 recovered_10006074(undefined8 param_1,undefined8 param_2);
bool recovered_100060b4(char *param_1,char *param_2);
undefined8 recovered_100060fc(byte *param_1,uint *param_2);
void * recovered_1000618c(void *param_1,ulong param_2);
undefined4 recovered_100061cc(long param_1);
undefined4 recovered_100061f4(long param_1);
void recovered_1000621c(long param_1);
int recovered_10006270(long param_1);
void recovered_100062b4(long *param_1);
void recovered_100062ec(void *param_1);
void recovered_10006324(void);
int recovered_10006370(void);
undefined8 recovered_100063a8(int param_1);
uint recovered_100069cc(void *param_1,uint param_2,uint *param_3);
void recovered_10006a24(long param_1,ulong param_2,undefined1 *param_3);
uint recovered_10006a64(int param_1,char *param_2,void *param_3);
void recovered_10006abc(char *param_1);
byte * recovered_10006b14(byte *param_1);
void recovered_10006b54(byte *in_x0);
bool recovered_10006bac(byte *param_1,byte *param_2);
undefined8 recovered_10006c0c(byte *param_1,int *param_2,undefined8 *param_3);
bool recovered_10006c94(byte *param_1,byte *param_2);
char * recovered_10006d1c(char *param_1);
char * recovered_10006d4c(char *param_1,char param_2);
ulong recovered_10006d78(int param_1,uint param_2);
undefined1 recovered_10006e04(undefined8 param_1);
void recovered_10006e74(long param_1,uint param_2,int param_3,long param_4,uint param_5);
undefined8 recovered_10007034(undefined8 param_1,undefined8 param_2);
void recovered_10007074(undefined1 *param_1,int param_2);
long recovered_100071c8(undefined8 *param_1);
undefined4 recovered_1000728c(void);
void recovered_100072c0(long param_1);
void recovered_100076b4(uint param_1);
long recovered_10007750(int param_1);
uint recovered_1000778c(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5);
void recovered_10007844(char *param_1,ulong param_2,char *param_3);
bool recovered_100078b4(long param_1,ulong param_2,char *param_3);
byte recovered_10007910(long param_1);
void recovered_10007930(void);
uint128 recovered_10007b74(void);
void recovered_10007c34(void);
void recovered_10007ce0(void);
void recovered_10007e58(char *param_1,int param_2);
void recovered_100087d8(void);
void recovered_100088dc(void);
ulong recovered_100089a0(ulong param_1);
void recovered_10008a30(void);
void recovered_10008b14(int param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_10008bd4(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_10008c68(uint param_1,uint param_2,undefined4 param_3);
long * recovered_10008ce0(char *param_1,int param_2);
undefined8 recovered_10008dd8(long *param_1,int param_2,int param_3,uint param_4,uint param_5);
ulong recovered_10008eec(ulong param_1,int param_2,char *param_3,uint param_4);
undefined8 recovered_10008efc(void);
uint recovered_10008f4c(int param_1,char *param_2,void *param_3);
void recovered_10008fa4(uint param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_10009074(ulong param_1,int param_2,char *param_3,uint param_4,uint param_5,
                        uint param_6);
uint recovered_100091a0(void *param_1,char *param_2,int param_3,int param_4,int param_5,uint param_6
                       ,void *param_7);
uint recovered_1000922c(ulong param_1,int param_2,long *param_3);
uint recovered_100092f8(char *param_1,uint param_2,uint param_3,uint param_4,void *param_5);
void recovered_10009364(long *param_1);
uint128 recovered_1000939c(void);
undefined8 recovered_100093c0(undefined8 param_1,int param_2,int param_3,int param_4,ulong param_5);
void recovered_100093e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       uint param_5);
void recovered_10009480(ulong param_1,ulong param_2,int param_3,char *param_4,ulong param_5);
undefined8
recovered_100094f0(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  uint param_6);
void recovered_1000962c(byte *param_1,int param_2,int param_3,int param_4,uint param_5);
uint128 recovered_100096a8(int param_1);
byte recovered_100096ec(long param_1);
bool recovered_10009758(char *param_1,byte *param_2);
long * recovered_1000977c(char *param_1,undefined8 param_2);
bool recovered_10009958(char *param_1);
undefined1 * recovered_100099bc(char *in_x0);
long * recovered_100099e8(void);
void recovered_10009a08(char *param_1,char *param_2,char *param_3);
uint128 recovered_10009a80(long param_1);
byte recovered_10009aac(long param_1);
void recovered_10009adc(ulong param_1,ulong param_2,ulong param_3,int param_4);
void recovered_10009bf0(long param_1);
uint recovered_1000b080(long param_1);
undefined4 recovered_1000b0a8(long param_1);
uint128 recovered_1000b0c4(long param_1,undefined8 param_2,uint128 *param_3,long *param_4);
void recovered_1000b1dc(long param_1);
void recovered_1000b5a0(char *param_1,ulong param_2,uint param_3);
uint128 recovered_1000b5e8(long param_1,int param_2);
void recovered_1000b630(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4);
uint128 recovered_1000b854(long param_1,int param_2);
void recovered_1000b878(char *param_1,ulong param_2,uint param_3);
uint128 recovered_1000b90c(long param_1);
uint128 recovered_1000b940(long param_1);
void recovered_1000b9d0(ulong param_1,ulong param_2,int param_3);
uint128 recovered_1000ba80(long param_1);
uint128 recovered_1000ba98(long param_1);
uint recovered_1000bab0(long param_1);
void recovered_1000bae4(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000bc28(void);
void recovered_1000bc50(undefined1 *param_1,char *param_2,char *param_3,ulong param_4);
void recovered_1000bcb8(ulong param_1,char *param_2,ulong param_3);
void recovered_1000bd8c(uint param_1,char *param_2);
void recovered_1000bdb0(ulong param_1,ulong param_2,char *param_3,int param_4);
uint128 recovered_1000be54(long param_1);
uint128 recovered_1000be74(long param_1);
void recovered_1000be94(int param_1,undefined8 param_2,char *param_3,char *param_4);
void recovered_1000bed8(int param_1,undefined8 param_2,char *param_3,char *param_4);
uint recovered_1000bf1c(char *param_1,int param_2);
void recovered_1000c048(char *param_1,ulong param_2,ulong param_3);
void recovered_1000c0fc(char *param_1,char *param_2,int param_3);
uint128 recovered_1000c174(long param_1);
uint128 recovered_1000c1a4(long in_x0);
uint recovered_1000c1d4(uint param_1);
uint128 recovered_1000c20c(long param_1);
uint128 recovered_1000c278(long in_x0);
uint128 recovered_1000c2c8(long in_x0);
int recovered_1000c2f8(long in_x0);
void recovered_1000c31c(long param_1);
undefined4 recovered_1000c398(byte *param_1);
int recovered_1000c410(long in_x0);
uint recovered_1000c430(undefined8 in_x0);
bool recovered_1000c458(byte *param_1,byte *param_2);
uint128 recovered_1000c4c0(long in_x0);
uint128 recovered_1000c510(long param_1);
uint128 recovered_1000c59c(long in_x0);
uint128 recovered_1000c5b8(long in_x0);
uint128 recovered_1000c5d4(char *param_1);
byte recovered_1000c620(char *param_1);
int recovered_1000c64c(void);
void recovered_1000c678(undefined8 param_1,int param_2,long param_3);
uint128 recovered_1000c8f8(int param_1);
long recovered_1000c958(void);
undefined8 recovered_1000c984(void);
uint recovered_1000c9fc(long param_1,int param_2,int param_3,uint param_4);
void recovered_1000caec(undefined1 *param_1,uint param_2,ulong param_3);
uint recovered_1000cb14(int param_1,uint param_2);
void recovered_1000cb44(long param_1);
bool recovered_1000ce18(void);
uint recovered_1000ce64(uint param_1,uint param_2,int param_3);
void recovered_1000ceb4(int param_1,undefined4 param_2);
long recovered_1000d208(int param_1,int param_2);
void recovered_1000d268(uint param_1);
long recovered_1000d308(int param_1,int param_2);
long recovered_1000d384(int param_1,int param_2);
void recovered_1000d3e4(char *param_1);
bool recovered_1000d440(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void recovered_1000d46c(ulong param_1);
long recovered_1000d474(long param_1,undefined8 param_2,undefined8 param_3);
int recovered_1000d4ec(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_1000d590(undefined1 *param_1,long param_2);
ulong recovered_1000d5f0(long param_1,long param_2);
void recovered_1000d60c(char *param_1,long param_2,undefined8 param_3);
void recovered_1000d7fc(void);
void recovered_1000d898(void);
void recovered_1000d928(int param_1);
void recovered_1000d994(void);
void recovered_1000da08(undefined1 *param_1,long param_2);
ulong recovered_1000dba8(undefined8 param_1);
void recovered_1000dc38(int param_1);
void recovered_1000dcf8(int param_1,char param_2);
void recovered_1000dd20(void);
void recovered_1000dd50(int param_1,char param_2);
void recovered_1000dd78(void);
void recovered_1000dda8(int param_1);
void recovered_1000dddc(long param_1,uint param_2,undefined1 param_3);
void recovered_1000de58(undefined4 param_1,uint param_2,undefined8 param_3,undefined1 *param_4,
                       undefined1 *param_5);
void recovered_1000df20(char *param_1,undefined8 param_2,undefined1 *param_3);
undefined8 recovered_1000df84(undefined8 param_1,undefined8 param_2,undefined8 param_3);
bool recovered_1000dfd8(undefined8 param_1);
bool recovered_1000e2bc(char *param_1,char *param_2);
bool recovered_1000e310(char *param_1,void *param_2,ulong param_3);
bool recovered_1000e374(char *param_1,char *param_2);
uint recovered_1000e3b4(int param_1,char *param_2,void *param_3,uint param_4);
bool recovered_1000e434(char *param_1);
void recovered_1000e4a4(char *param_1,uint param_2,int param_3,char param_4);
void recovered_1000e56c(void);
ulong recovered_1000e584(char *param_1,uint param_2,int param_3);
void recovered_1000e5fc(undefined8 param_1,char *param_2,uint param_3);
bool recovered_1000e66c(long param_1,uint in_w1,int in_w2);
void recovered_1000e6b0(void);
long recovered_1000e6c8(int param_1);
ulong recovered_1000e754(int param_1,char *param_2,char *param_3);
ulong recovered_1000e7c4(int param_1,char *param_2);
void recovered_1000e834(undefined4 param_1,undefined4 param_2);
void recovered_1000e878(undefined4 param_1,undefined1 *param_2,undefined4 param_3);
void recovered_1000e8e8(void);
void recovered_1000e9a0(char *param_1,undefined4 param_2);
void recovered_1000ea74(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
                       undefined4 param_5,byte param_6);
void recovered_1000eb18(char *param_1,int param_2);
void recovered_1000ecb0(ulong param_1,int param_2);
void recovered_1000ee58(long param_1);
undefined8 recovered_1000eea0(undefined8 *param_1,undefined4 *param_2);
void recovered_1000ef14(ulong param_1,uint *param_2);
void recovered_1000eff4(char *param_1,ulong param_2,uint param_3,ulong param_4);
bool recovered_1000f0a0(uint param_1);
ulong recovered_1000f0d8(undefined8 param_1,ulong param_2);
undefined8 recovered_1000f120(byte *param_1,int *param_2);
int recovered_1000f180(long param_1);
int recovered_1000f1bc(long param_1);
ulong recovered_1000f1f8(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000f254(undefined1 *param_1);
void recovered_1000f3b4(char *param_1,int *param_2,undefined4 *param_3);
bool recovered_1000f458(long param_1,int *param_2);
void recovered_1000f49c(int param_1);

/* Original analysis identifiers for manual recovery units. */
