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
extern uint8_t pf_module_state[];
void * recovered_10000478(void);
int recovered_10000484(int *api);
void recovered_100006c4(undefined1 *param_1,ulong param_2,char *param_3);
void recovered_100006d4(int *param_1,byte *param_2,int *param_3);
void recovered_10001630(long param_1,char *param_2,uint param_3);
void recovered_10001680(long param_1,ulong param_2,char *param_3);
void recovered_100016d0(long param_1,ulong param_2,uint param_3);
long recovered_10001774(long param_1);
void recovered_10001790(long param_1,ulong param_2,undefined1 param_3);
void recovered_100017d0(long param_1,char *param_2,uint param_3);
void recovered_10001824(long param_1,ulong param_2,uint param_3,int param_4);
undefined8
recovered_1000189c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5);
undefined8
recovered_100019e8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7);
char * recovered_10001a34(long param_1);
int recovered_10001cdc(long param_1);
ulong recovered_10001d24(int *param_1,undefined1 *param_2,ulong *param_3);
void recovered_10001f5c(int *param_1,long *param_2);
void recovered_100020f8(undefined1 *param_1,long param_2);
undefined8
recovered_10002110(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6);
undefined8
recovered_10002174(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5);
int * recovered_100022ac(int *param_1,long param_2,ulong param_3,long param_4);
int * recovered_100022c4(int *param_1,long param_2,undefined8 param_3);
undefined8 recovered_100022dc(int *param_1,long param_2,ulong param_3,undefined8 param_4);
undefined8 recovered_100022f0(int *param_1,long param_2,ulong param_3,long param_4);
void recovered_10002308(int *param_1);
undefined8 recovered_10002338(int *param_1,long param_2,ulong param_3,long param_4);
int * recovered_10002350(int *param_1,long param_2,ulong param_3,undefined8 param_4);
undefined8 recovered_10002364(int *param_1,ulong param_2,undefined8 param_3,long param_4);
undefined8 recovered_100023cc(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4);
void recovered_10002434(long param_1,char *param_2,char *param_3);
void recovered_10002494(long param_1,char *param_2,ulong param_3);
undefined8 recovered_10002548(int *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10002584(int *param_1,undefined8 param_2);
undefined8 recovered_100025c0(int *param_1,long param_2,undefined8 param_3,long param_4);
undefined8
recovered_100025fc(int *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5);
void recovered_1000264c(int *param_1);
undefined4 recovered_10002680(undefined4 *param_1);
char * recovered_100026a4(int param_1);

/* Original analysis identifiers for manual recovery units. */
