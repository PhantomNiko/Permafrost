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
#define FUN_10002a4c snprintf
#define recovered_10002a4c snprintf
#define pf_varargs_10002a4c_1 recovered_10002a4c
#define pf_varargs_10002a4c_2 recovered_10002a4c
#define UINT_82010828 (*(volatile uint32_t *)(uintptr_t)0x82010828)
#define UINT_8201082c (*(volatile uint32_t *)(uintptr_t)0x8201082c)
#define UINT_8201084c (*(volatile uint32_t *)(uintptr_t)0x8201084c)
#define UINT_82010850 (*(volatile uint32_t *)(uintptr_t)0x82010850)
#define UINT_82010890 (*(volatile uint32_t *)(uintptr_t)0x82010890)
#define UINT_82010894 (*(volatile uint32_t *)(uintptr_t)0x82010894)
#define UINT_82010898 (*(volatile uint32_t *)(uintptr_t)0x82010898)
#define UINT_8201089c (*(volatile uint32_t *)(uintptr_t)0x8201089c)
#define UINT_82010978 (*(volatile uint32_t *)(uintptr_t)0x82010978)
#define UINT_82010980 (*(volatile uint32_t *)(uintptr_t)0x82010980)
#define UINT_82010984 (*(volatile uint32_t *)(uintptr_t)0x82010984)
#define UINT_82010988 (*(volatile uint32_t *)(uintptr_t)0x82010988)
extern uint8_t pf_module_state[];
int recovered_100005a0(void);
void recovered_1000162c(long param_1);
undefined * recovered_1000165c(void);
undefined8 recovered_10001690(ulong param_1);
void recovered_100016d8(void *param_1);
void recovered_10001718(long param_1,undefined *param_2);
uint recovered_10001804(long param_1);
bool recovered_10001830(int param_1);
uint recovered_1000187c(char *param_1,uint param_2,uint param_3,void *param_4);
void recovered_100018e8(long *param_1);
int recovered_10001920(long param_1,char *param_2);
undefined * recovered_100019a8(long param_1,int param_2);
int recovered_100019fc(long param_1);
ulong recovered_10001a38(long param_1,uint param_2,uint param_3);
int recovered_10001abc(long param_1,int param_2,int param_3);
uint128 recovered_10001aec(long param_1);
int recovered_10001b8c(long param_1);
int recovered_10001bec(long param_1);
ulong recovered_10001c2c(long param_1);
undefined8 recovered_10001d4c(long param_1);
bool recovered_10001e90(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
bool recovered_10001ebc(long param_1);
void recovered_10001ee0(long param_1,char *param_2);
int recovered_10001f74(char *param_1,ulong param_2,undefined *in_x2);
bool recovered_10002054(long param_1);
byte * recovered_100020c0(byte *param_1);
bool recovered_10002100(byte *param_1,byte *param_2);
bool recovered_10002160(char *param_1,byte *param_2);
uint128 recovered_100021f8(long in_x0);
uint128 recovered_1000223c(long param_1);
uint128 recovered_100022f4(long in_x0);
void recovered_10002310(long param_1,int param_2);
uint128 recovered_10002328(long in_x0);
void recovered_10002344(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
void recovered_100024b0(long param_1,ulong param_2,ulong param_3,uint param_4);
void recovered_10002558(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6);
void recovered_10002678(long param_1,long param_2,undefined8 param_3,uint param_4);
void recovered_10002780(long param_1,uint param_2,uint param_3,undefined4 param_4);
void recovered_10002820(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5
                       );

/* Original analysis identifiers for manual recovery units. */
