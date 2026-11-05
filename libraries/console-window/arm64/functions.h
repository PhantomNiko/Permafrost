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
void recovered_10000610(void);
void recovered_1000061c(void);
ulong recovered_10000884(void);
long recovered_100008d0(void);
ulong recovered_10000910(void);
long recovered_1000094c(void);
ulong * recovered_1000097c(long param_1);
ulong recovered_10000a10(ulong param_1,uint param_2);
ulong recovered_10000a54(ulong param_1,uint param_2);
long recovered_10000aa0(long param_1,uint param_2);
void recovered_10000af0(ulong param_1,ulong param_2);
ulong recovered_10000af8(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b58(undefined8 param_1,undefined8 param_2);
long recovered_10000b78(ulong param_1,ulong param_2);
long recovered_10000bb8(long param_1,long param_2);
void recovered_10000c04(void);
int recovered_10000c0c(int param_1);
void * recovered_10000c18(size_t size);
void recovered_10000c5c(void *pointer);
void * recovered_10000ca0(void *pointer,size_t size);
void * recovered_10000cec(void *out,void *data,ulong size);
void * recovered_10000d0c(void *out,void *data,ulong size);
void * recovered_10000d5c(void *out,int value,ulong size);
void recovered_10000d78(undefined1 *param_1,long param_2);
void recovered_10000d8c(undefined1 *param_1,long param_2);
int recovered_10000da0(void *left,void *right,ulong size);
bool recovered_10000dc8(int param_1);
bool recovered_10000dd8(int param_1);
bool recovered_10000de8(uint param_1);
bool recovered_10000dfc(uint param_1);
bool recovered_10000e18(int param_1);
bool recovered_10000e28(int param_1);
int recovered_10000e38(int param_1);
int recovered_10000e4c(int param_1);
ulong recovered_10000e60(char *text);
int recovered_10000e84(char *left,char *right);
int recovered_10000eac(char *left,char *right);
void recovered_10000eb0(long param_1,long param_2);
void recovered_10000ec8(char *param_1);
char * recovered_10000f04(char *param_1,char param_2);
long recovered_10000f2c(long param_1,char *param_2);
char * recovered_10000f74(char *param_1,char *param_2);
char * recovered_10000fb4(char *param_1,char *param_2);
undefined * recovered_10000ff0(void);
undefined ** recovered_10000ffc(void);
undefined8 recovered_10001008(undefined8 *param_1);
double recovered_10001024(double param_1,uint param_2);
uint128 recovered_10001058(double param_1,int *param_2);
double recovered_100010cc(double left,double right);
double recovered_100010f0(double left,double right);
double recovered_10001150(double value);
double recovered_1000116c(double value);
double recovered_10001198(double value);
double recovered_100011d4(double value);
long recovered_10001280(double param_1);
double recovered_10001294(double value);
void recovered_100012e8(double param_1);
double recovered_1000132c(double value);
double recovered_10001378(double value);
float recovered_10001388(float left,float right);
float recovered_100013bc(float param_1);
float recovered_100013d4(float param_1);
float recovered_100013ec(float left,float right);
float recovered_10001408(float value);
float recovered_1000142c(float value);
double recovered_10001444(double value);
float recovered_1000146c(float value);
float recovered_10001484(float value);
float recovered_1000149c(float value);
long recovered_100014b4(double param_1);
float recovered_100014c8(float value);
float recovered_100014e0(float value);
float recovered_100014f8(float value);
long recovered_10001508(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_1000160c(int param_1);
long recovered_1000163c(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_10001760(char *text,char **end);
float recovered_100018f0(char *text,char **end);
int recovered_10001908(char *out,ulong capacity,char *format,void *arguments);
void recovered_10001bdc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001c18(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001c68(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10001d08(char *out,ulong capacity,char *format,...);
void recovered_10001d30(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001d88(int param_1);
void recovered_10001ec0(char *param_1,long param_2);
void recovered_10001f78(int param_1);
void recovered_10002004(void);
void recovered_1000200c(void);
void recovered_10002014(char *param_1);
void recovered_10002078(void);
void recovered_100020cc(char *param_1);
void recovered_100020f8(void);
bool recovered_1000211c(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002194(void);
void recovered_10002198(void);
undefined8 recovered_1000219c(void);
undefined4 * recovered_100021a4(char *param_1,long param_2);
undefined8 recovered_100023e0(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002430(long param_1,ulong param_2);
void recovered_100024b8(char *param_1,long param_2,int *param_3);
undefined8 recovered_100024ec(int *param_1);
long recovered_10002530(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_100025e0(int *param_1);
long recovered_100026c4(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_100027d4(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10002868(long param_1);
undefined8 recovered_1000288c(int *param_1);
undefined1 recovered_10002900(long param_1);
undefined1 recovered_1000290c(long param_1);
void recovered_10002918(long param_1);
uint recovered_1000292c(uint param_1,long param_2);
undefined8 recovered_10002950(long param_1);
undefined8 recovered_10002988(undefined8 param_1);
undefined8 recovered_100029cc(long param_1,long param_2);
undefined8 recovered_10002a68(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10002ac8(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10002b68(long param_1,long param_2,long param_3);
undefined8 recovered_10002b94(void);
void recovered_10002b98(void);
undefined8 recovered_10002b9c(void);
undefined8 recovered_10002ba0(void);
undefined8 recovered_10002ba4(void);
char * recovered_10002ba8(long param_1,char param_2,long param_3);
int recovered_10002bcc(char *left,char *right,ulong size);
char * recovered_10002bfc(int param_1);
undefined8 recovered_10002c9c(void);
undefined8 recovered_10002ca0(void);
void recovered_10002ca4(void);
bool recovered_10002cb8(int param_1);
void recovered_10002d84(long param_1);
__attribute__((naked, returns_twice)) unsigned long recovered_10002d98(unsigned long *context);
__attribute__((naked,noreturn)) void recovered_10002dc4(unsigned long *context,int value);
void recovered_10002df8(void);
undefined8 recovered_10002e0c(void);
void recovered_10002e14(long param_1);
void recovered_10002e24(long param_1);
void * recovered_10002e44(ulong size);
void * recovered_10002e74(ulong size);
void recovered_10002e78(void *data);
void recovered_10002e90(void *data);
void recovered_10002ea8(void *param_1);
void recovered_10002ec0(void *param_1);
undefined8 recovered_10002ed8(void);
uint recovered_10002ee0(uint *param_1);
void recovered_10002ef0(ulong *param_1);
void recovered_10002f00(void);
undefined1 * recovered_10002f04(ulong param_1);
void recovered_10002f4c(long param_1);
long recovered_10002f5c(long param_1);
void recovered_10002f64(void);
void recovered_10002fbc(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10002fdc(undefined8 *param_1);
void recovered_10003040(void);
void recovered_10003070(undefined8 *param_1);
void recovered_10003084(undefined8 *param_1);
void recovered_100030b0(void);
void recovered_100030bc(void);
undefined8 recovered_100030c8(undefined8 *param_1);
undefined8 recovered_100030e8(undefined8 *param_1);
undefined8 recovered_10003184(void);
undefined8 recovered_10003190(void);
void recovered_10003198(void);
long recovered_100031a4(long *param_1,undefined8 param_2,long *param_3);
bool recovered_100031e4(long *param_1,long *param_2);
void recovered_10003270(void);
undefined8 recovered_10003274(void);
bool recovered_1000327c(int param_1);
bool recovered_1000328c(uint param_1);
bool recovered_100032c4(uint param_1);
bool recovered_100032e0(ulong param_1);
bool recovered_100032f8(uint param_1);
bool recovered_10003310(ulong param_1);
bool recovered_10003328(ulong param_1);
double recovered_10003340(double value);
long recovered_1000338c(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100034d0(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100034d4(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_100036ac(uint param_1,long *param_2);
ulong recovered_100037a0(undefined8 *param_1);
ulong recovered_100037d8(byte *param_1,long param_2);
ulong recovered_10003804(undefined8 *param_1);
long * recovered_1000387c(char *param_1,uint param_2,uint param_3);
long * recovered_1000397c(long *param_1,long param_2);
void recovered_100039b8(long *param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_100039c0(long param_1);
void recovered_10003bf0(long param_1);
void recovered_10004068(long param_1);
void recovered_10004078(undefined8 *param_1);
void * recovered_100040f0(undefined8 *param_1);
void recovered_10004174(long param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100041a8(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_100041f0(long param_1);
void recovered_10004220(long param_1,undefined1 *param_2);
void recovered_1000423c(long param_1,uint *param_2);
void recovered_100042ac(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_100042c0(long param_1);
undefined8 recovered_100042f4(void);
byte recovered_100046bc(long param_1);
void recovered_100046d4(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_100046f4(long param_1);
void recovered_10004774(long param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_100047ac(long param_1,uint param_2);
void recovered_100047cc(void);
void recovered_10004948(void);
void recovered_1000494c(void);
void recovered_10004950(void);
undefined8 recovered_10004954(void);
void recovered_10004958(void);
undefined8 recovered_1000495c(void);
void * recovered_10004960(char *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10004c94(undefined8 param_1,undefined8 param_2);
bool recovered_10004ce8(undefined8 *param_1,char *param_2);
bool recovered_10004d00(int param_1);
undefined8 * recovered_10004d48(undefined8 *param_1);
void recovered_10004d70(long *param_1,long param_2,ulong param_3);
long recovered_10004e58(long param_1);
undefined8 recovered_10004e7c(long *param_1,long param_2,long *param_3);
void recovered_10004ec8(long *param_1);
void recovered_10004f00(long *param_1,ulong param_2);
undefined8 * recovered_10004f78(undefined8 *param_1,long param_2,ulong param_3);
void recovered_10004fac(long param_1);
uint recovered_10004fc8(long param_1,int param_2,int param_3,int param_4);
int recovered_10005034(int param_1,uint param_2,uint param_3);
undefined8 * recovered_10005064(undefined8 *param_1,undefined8 *param_2);
void recovered_100050a4(int param_1);
ulong recovered_100050cc(uint param_1,uint param_2,int param_3);
void recovered_10005118(undefined8 *param_1,char param_2,ulong param_3);
void recovered_10005150(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_1000518c(undefined8 *param_1,char *param_2);
void recovered_100051dc(long *param_1);
void recovered_10005218(long *param_1,undefined1 param_2);
void recovered_1000527c(long *param_1,undefined8 *param_2);
ulong recovered_10005294(long *param_1,char param_2,ulong param_3);
bool recovered_100052c8(char *param_1,long param_2,char *param_3,long param_4);
long recovered_10005300(long *param_1,undefined8 *param_2);
void recovered_10005374(long *param_1,ulong param_2);
void recovered_10005408(long param_1);
long * recovered_1000541c(long *param_1,long param_2,ulong param_3);
void recovered_10005500(undefined8 *param_1,undefined8 *param_2);
long * recovered_1000551c(long *param_1);
void recovered_10005548(long *param_1);
undefined8 * recovered_1000559c(undefined8 *param_1,long param_2);
void recovered_100055e0(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10005664(long *param_1,ulong param_2);
void recovered_100056cc(long *param_1,ulong param_2);
void recovered_10005740(ulong param_1);
undefined8 * recovered_1000574c(undefined8 *param_1);
long recovered_10005778(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
