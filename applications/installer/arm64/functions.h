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
} /* NEON maximum reduction */
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
} /* NEON signed lane bounds */
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
#include "../operations.h"
extern uint8_t pf_module_state[];
int recovered_100005f0(void);
void recovered_10000fb0(undefined1 *param_1,long param_2);
void recovered_10000fc8(uintptr_t state);
uint recovered_100011a0(char *param_1,char *param_2);
void recovered_100011f8(long param_1,undefined *param_2);
void recovered_10001214(long param_1,ulong param_2,long param_3);
void recovered_10001248(char *param_1,ulong param_2,uint param_3);
void recovered_10001308(char *param_1,ulong param_2,char *param_3);
bool recovered_10001368(int param_1);
void recovered_100013b4(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8);
void recovered_10001430(uint *param_1,uint param_2,int param_3,long param_4,undefined8 param_5,
                       int param_6,int param_7,int param_8);
void recovered_10001580(uint *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void recovered_10001620(uint *param_1,undefined8 param_2,ulong param_3,int param_4,long param_5,
                       long param_6,int param_7);
void recovered_10001718(uint *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,char *param_6,int param_7);
void recovered_100017ec(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6);
void recovered_10001854(int *param_1,int param_2,int param_3);
void recovered_10001884(uintptr_t state);
char * recovered_10001a98(char *param_1,char *param_2);
void recovered_10001b1c(long param_1,long param_2);
byte * recovered_10001b6c(byte *param_1);

/* Original analysis identifiers for manual recovery units. */
