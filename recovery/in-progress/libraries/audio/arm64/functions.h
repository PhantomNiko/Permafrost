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
extern uint8_t pf_module_state[];
void recovered_100006a8(void);
void recovered_100006b4(void);
ulong recovered_10000938(void);
long recovered_10000984(void);
ulong recovered_100009c4(void);
long recovered_10000a00(void);
ulong * recovered_10000a30(long param_1);
ulong recovered_10000b08(ulong param_1,uint param_2);
ulong recovered_10000b4c(ulong param_1,uint param_2);
long recovered_10000b98(long param_1,uint param_2);
void recovered_10000be8(ulong param_1,ulong param_2);
ulong recovered_10000bf0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000c50(undefined8 param_1,undefined8 param_2);
long recovered_10000c70(ulong param_1,ulong param_2);
long recovered_10000cb0(long param_1,long param_2);
void recovered_10000cfc(void);
int recovered_10000d04(int param_1);
void * recovered_10000d10(uintptr_t size);
void recovered_10000d54(void *pointer);
void * recovered_10000d98(void *pointer,uintptr_t size);
void * recovered_10000de4(void *out,void *data,ulong size);
void * recovered_10000ebc(void *out,void *data,ulong size);
void * recovered_10000fd0(void *out,int value,ulong size);
void recovered_10001068(undefined1 *param_1,long param_2);
void recovered_1000106c(undefined1 *param_1,long param_2);
int recovered_10001070(void *left,void *right,ulong size);
int recovered_100011dc(long param_1,long param_2);
bool recovered_1000120c(int param_1);
bool recovered_1000121c(int param_1);
bool recovered_1000122c(uint param_1);
bool recovered_10001240(uint param_1);
bool recovered_1000125c(int param_1);
bool recovered_1000126c(int param_1);
int recovered_1000127c(int param_1);
int recovered_10001290(int param_1);
ulong recovered_100012a4(char *text);
int recovered_100012c8(char *left,char *right);
int recovered_100012f0(char *left,char *right);
void recovered_100012f4(long param_1,long param_2);
void recovered_1000130c(char *param_1);
char * recovered_10001348(char *param_1,char param_2);
long recovered_10001370(long param_1,char *param_2);
char * recovered_100013b8(char *param_1,char *param_2);
char * recovered_100013f8(char *param_1,char *param_2);
undefined * recovered_10001434(void);
undefined ** recovered_10001440(void);
undefined8 recovered_1000144c(undefined8 *param_1);
double recovered_100014c4(double param_1,uint param_2);
uint128 recovered_100014f8(double param_1,int *param_2);
double recovered_1000156c(double left,double right);
double recovered_10001590(double left,double right);
double recovered_100015f0(double value);
double recovered_1000160c(double value);
double recovered_10001638(double value);
double recovered_10001674(double value);
long recovered_10001720(double param_1);
double recovered_10001734(double value);
void recovered_10001788(double param_1);
double recovered_100017cc(double value);
double recovered_10001818(double value);
float recovered_10001828(float left,float right);
ulong recovered_10001888(double param_1);
void recovered_100018d8(ulong param_1);
uint128 recovered_10001900(ulong param_1);
float recovered_10001924(float value,float in_s1);
float recovered_10001958(int *in_x0,float param_2);
float recovered_10001970(float param_1,uint param_2);
float recovered_10001988(float param_1,float param_2);
float recovered_100019a4(float param_1);
float recovered_100019c8(float param_1);
uint128 recovered_100019e0(double param_1);
float recovered_10001a08(float param_1);
float recovered_10001a20(float param_1);
float recovered_10001a38(float param_1);
long recovered_10001a50(double param_1);
float recovered_10001a64(float param_1);
float recovered_10001a7c(float param_1);
float recovered_10001a94(float param_1);
long recovered_10001aa4(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001ba8(int param_1);
long recovered_10001bd8(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001cfc(byte *param_1,undefined8 *param_2);
float recovered_10001e8c(byte *in_x0,undefined8 *in_x1);
int recovered_10001ea4(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_100023cc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002408(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10002458(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
void recovered_100024fc(byte *in_x0,ulong in_x1,byte *in_x2);
void recovered_10002524(ulong param_1,ulong param_2,ulong *param_3);
void recovered_100025ac(long param_1,ulong param_2,ulong *param_3);
bool recovered_1000261c(int param_1);
void recovered_10002764(char *param_1,long param_2);
void recovered_1000281c(int param_1);
void recovered_100028a8(void);
void recovered_100028b0(void);
void recovered_100028b8(undefined *param_1);
void recovered_1000291c(void);
void recovered_10002940(char *param_1);
void recovered_1000296c(void);
bool recovered_10002990(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002a08(void);
void recovered_10002a0c(void);
undefined8 recovered_10002a10(void);
undefined4 * recovered_10002a18(char *param_1,char *param_2);
undefined8 recovered_10002c54(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002ca4(long param_1,ulong param_2);
undefined4 * recovered_10002d2c(char *param_1,char *param_2,void *param_3);
undefined8 recovered_10002d60(void *param_1);
ulong recovered_10002da4(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002ed8(int *param_1);
long recovered_10002fbc(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_100030cc(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003160(long param_1);
undefined8 recovered_10003184(int *param_1);
undefined1 recovered_100031f8(long param_1);
undefined1 recovered_10003204(long param_1);
void recovered_10003210(long param_1);
uint recovered_10003224(uint param_1,long param_2);
undefined8 recovered_10003248(long param_1);
undefined8 recovered_10003280(undefined8 param_1);
undefined8 recovered_100032c4(long param_1,undefined8 *param_2,ulong *param_3);
undefined8 recovered_10003360(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_100033c0(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10003460(long param_1,long param_2,long param_3);
undefined8 recovered_1000348c(void);
void recovered_10003490(void);
undefined8 recovered_10003494(void);
undefined8 recovered_10003498(void);
undefined8 recovered_1000349c(void);
void recovered_100034a0(long in_x0,char in_w1,long in_x2);
int recovered_100034c4(byte *param_1,byte *param_2,long param_3);
char * recovered_100034f4(int param_1);
__attribute__((naked, returns_twice)) unsigned long recovered_10003594(unsigned long *context);
undefined8 recovered_10003598(void);
void recovered_1000359c(void);
bool recovered_100035b0(int param_1);
void recovered_1000367c(long param_1);
__attribute__((naked,returns_twice)) int recovered_10003690(void *context);
__attribute__((naked,noreturn)) void recovered_100036cc(void *context,int value);
void recovered_10003710(void);
undefined8 recovered_10003724(void);
void recovered_1000372c(long param_1);
long recovered_1000373c(long param_1);
void * recovered_1000375c(ulong size);
void * recovered_1000378c(ulong size);
void recovered_10003790(void *pointer);
void recovered_100037a8(void *pointer);
void recovered_100037c0(void *param_1);
void recovered_100037d8(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_100037f0(void);
void recovered_100037f8(undefined8 *param_1);
void recovered_10003808(ulong *param_1);
void recovered_10003818(void);
undefined1 * recovered_1000381c(ulong param_1);
void recovered_10003864(long param_1);
long recovered_10003874(long param_1);
void recovered_1000387c(void);
void recovered_100038d4(long param_1,ulong param_2,undefined8 param_3);
void recovered_100038f4(ulong *param_1);
void recovered_10003958(void);
void recovered_10003988(undefined8 *param_1);
void recovered_1000399c(undefined8 *param_1);
void recovered_100039c8(ulong *in_x0);
void recovered_100039d4(void);
undefined8 recovered_100039e0(long *param_1,long *param_2);
uchar recovered_10003a00(long *param_1,long *param_2);
undefined8 recovered_10003a9c(long *in_x0,long *in_x1);
bool recovered_10003aa8(uint param_1);
void recovered_10003ab0(void);
long recovered_10003abc(long *param_1,undefined8 param_2,long param_3);
uchar recovered_10003afc(ulong param_1,long *in_x1);
void recovered_10003b88(void);
undefined8 recovered_10003b8c(void);
bool recovered_10003b94(int param_1);
bool recovered_10003ba4(uint param_1);
bool recovered_10003bdc(uint param_1);
bool recovered_10003bf8(ulong param_1);
bool recovered_10003c10(uint param_1);
bool recovered_10003c28(ulong param_1);
bool recovered_10003c40(ulong param_1);
uint128 recovered_10003c58(double param_1);
void recovered_10003d18(float param_1);
uint128 recovered_10003d34(double param_1);
uint128 recovered_10003d38(long param_1,long param_2);
uint128 recovered_10003d48(double param_1);
long recovered_10003d94(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003ed8(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10003edc(long param_1,ulong param_2,undefined2 *param_3);
ulong * recovered_100040b4(uint param_1,long *param_2);
undefined8 * recovered_100041a8(long param_1);
ulong recovered_100041e0(byte *param_1,long param_2);
ulong recovered_1000420c(undefined8 *param_1);
void recovered_10004284(long param_1);
void recovered_10004290(long param_1);
undefined8 * recovered_1000429c(long param_1);
undefined8 recovered_10004348(long param_1,long param_2,ushort *param_3);
undefined8 * recovered_100043c8(undefined8 *param_1,undefined8 *param_2);
long * recovered_10004400(uint frequency,uint duration,long waveform,uintptr_t side);
undefined8 recovered_100046e8(ulong param_1,uint param_2);
void recovered_10004730(long *param_1,ulong param_2,undefined2 *param_3);
int recovered_10004738(double param_1);
int recovered_10004780(void *track,void *view);
bool recovered_100047e8(long param_1);
byte recovered_10004810(undefined8 *param_1,long param_2);
byte recovered_1000482c(long param_1,undefined8 *param_2);
undefined8 recovered_100048f4(long *param_1,long *param_2,long param_3);
uint128 recovered_10004a4c(double param_1,long *param_2,uint param_3);
undefined8 recovered_10004b10(long *param_1,ulong param_2,ulong param_3);
long recovered_10004bf8(long *param_1,undefined2 *param_2,undefined2 *param_3);
undefined8 * recovered_10004c0c(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10004c5c(double param_1,long param_2);
void recovered_10004ce0(long *param_1,double param_2,long param_3,ulong param_4);
undefined8 recovered_10004dec(double param_1,long param_2);
undefined8 recovered_10004e90(void);
undefined8 recovered_10004e94(void);
undefined8 recovered_10004e9c(void);
void recovered_10004ea4(void *track);
void recovered_10004ec4(void);
byte recovered_10004ec8(long param_1,long *param_2);
undefined8 recovered_10004f98(void *param_1,ulong param_2,long param_3,ushort *param_4);
void recovered_10005398(long *param_1,ulong param_2);
long * recovered_10005400(long *param_1,char *param_2,uint param_3);
void recovered_10005454(long *param_1,char *param_2,uint param_3);
long * recovered_10005488(long *param_1);
void recovered_100054b0(long *param_1,char *param_2,uint param_3);
void recovered_10005508(long *param_1);
undefined * recovered_1000553c(uint param_1);
void recovered_100055f4(long *param_1,ulong param_2,int param_3);
long recovered_10005644(long *param_1);
void recovered_10005684(long *param_1,ulong param_2);
void * recovered_100056f8(ulong param_1);
void recovered_10005704(long *param_1,long param_2,long param_3);
undefined8 recovered_10005758(ushort *param_1,long param_2,ulong param_3);
bool recovered_100057ac(int param_1,int param_2);
void recovered_100057e0(long *param_1,ulong param_2);
uint128 recovered_10005844(uint3 *param_1,int param_2,int param_3);
int recovered_10005964(double param_1);
void recovered_100059c0(long *param_1,ulong param_2);
void * recovered_10005a34(long param_1);
bool recovered_10005a44(undefined8 *param_1,undefined8 *param_2);
long * recovered_10005a6c(long *param_1,long param_2);
void recovered_10005ab0(long *param_1,long param_2,ulong param_3);
long recovered_10005b98(long param_1);
undefined8 * recovered_10005bbc(undefined8 *param_1,long param_2,ulong param_3);
void recovered_10005c08(long *param_1);
void recovered_10005c40(long *param_1,ulong param_2);
undefined8 * recovered_10005cb8(undefined8 *param_1,long param_2,ulong param_3);
void recovered_10005cec(long param_1);
bool recovered_10005d08(char *param_1,long param_2,char *param_3,long param_4);
undefined8 recovered_10005d40(undefined8 *param_1,undefined8 *param_2);
long recovered_10005efc(long *param_1,undefined1 *param_2,long param_3);
void recovered_10005f14(long *param_1,undefined4 param_2);
void recovered_10005f84(long *param_1,undefined4 param_2);
undefined8 * recovered_10005fcc(undefined8 *param_1,undefined8 *param_2);
long recovered_1000601c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_10006114(long *param_1,undefined1 *param_2);
undefined8 * recovered_1000617c(undefined8 *param_1,char *param_2,uint param_3);
void recovered_100061e0(undefined8 *param_1,char *param_2,uint param_3);
void recovered_1000620c(long *param_1,long param_2,long param_3);
undefined8 * recovered_1000626c(undefined8 *param_1);
void recovered_10006298(long *param_1,ulong param_2,undefined2 *param_3);
long recovered_10006304(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4);
long long recovered_10006480(double value);

/* Original analysis identifiers for manual recovery units. */
