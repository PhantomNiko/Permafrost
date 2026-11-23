/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
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
 uint128 result=0;
 for(unsigned i=0;i<2;++i) {
  int64_t x=(int32_t)(a>>(32*i)),y=(int32_t)(b>>(32*i)),z=x+y;
  if(z>2147483647)z=2147483647;if(z<(-2147483647-1))z=(-2147483647-1);
  result|=(uint64_t)(uint32_t)z<<(i*32);
 } (void)lane;return result;
}
static inline uint64_t NEON_ucvtf(uint64_t a) { return pf_double_bits((double)a); }
static inline uint64_t NEON_umaxv(uint64_t a,unsigned lane) {
 uint64_t mask=lane==8?~0ULL:((1ULL<<(lane*8))-1),result=0;
 for(unsigned i=0;i<16/lane;++i){uint64_t v=(a>>(i*lane*8))&mask;if(v>result)result=v;}return result;
}
static inline uint128 NEON_fmov(uint64_t bits,unsigned lane) { (void)lane;return ((uint128)bits<<64)|bits; }

#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
#define ZEXT812(value) ((uint128)(uint64_t)(value))

#define Reset (*(uint8_t *)(uintptr_t)0)
#define SUB168(a,b) ((uint64_t)((uint128)(a)>>((b)*8)))
/* Permafrost library ARM64 intrinsics; Pooka's Free Software License. */
static inline uint128 pf_neon_bound(uint128 a,uint128 b,unsigned lane,int maximum) {
 uint128 result=0;unsigned bits=lane*8;
 uint64_t mask=bits==64?~0ULL:((1ULL<<bits)-1);
 for(unsigned i=0;i<16/lane;++i){
  int64_t x=(int64_t)((uint64_t)(a>>(i*bits))<<(64-bits))>>(64-bits);
  int64_t y=(int64_t)((uint64_t)(b>>(i*bits))<<(64-bits))>>(64-bits);
  result|=((uint128)((maximum?x>y:x<y)?x:y)&mask)<<(i*bits);
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
#define Yield(...) __asm__ volatile("yield":::"memory")
static inline uint64_t NEON_umin(uint64_t a,uint64_t b,unsigned bytes){uint64_t out=0,mask=UINT64_MAX>>(64-bytes*8);for(unsigned i=0;i<8/bytes;i++){unsigned shift=i*bytes*8;uint64_t x=(a>>shift)&mask,y=(b>>shift)&mask;out|=(x<y?x:y)<<shift;}return out;}
extern uint8_t pf_module_state[];
void recovered_10000610(void);
void recovered_1000063c(void);
void recovered_10000674(void);
bool recovered_100008f8(ulong *param_1,ulong *param_2,long param_3);
bool recovered_10000934(ulong *param_1,ulong *param_2,long param_3);
bool recovered_10000b30(ulong param_1,ulong param_2);
ulong recovered_10000b6c(void);
long recovered_10000bcc(void);
ulong recovered_10000c20(void);
long recovered_10000c70(void);
void recovered_10000cb4(long param_1);
ulong * recovered_10000ce0(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000e9c(long param_1,ulong *param_2);
ulong * recovered_10000ed4(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000f18(long param_1);
void recovered_10000f40(long param_1);
ulong * recovered_10000fb4(ulong *param_1,ulong param_2);
ulong recovered_1000115c(ulong param_1,uint param_2);
ulong recovered_100011a0(ulong param_1,uint param_2);
long recovered_100011ec(long param_1,uint param_2);
ulong recovered_1000123c(ulong param_1,ulong param_2);
ulong recovered_10001244(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_100012a4(undefined8 param_1,undefined8 param_2);
long recovered_100012c4(ulong param_1,ulong param_2);
long recovered_10001304(long param_1,long param_2);
void recovered_10001350(void);
int recovered_10001358(int param_1);
void * recovered_10001364(uintptr_t size);
void recovered_100013a8(void *pointer);
void * recovered_100013e8(void *pointer,uintptr_t size);
void * recovered_10001434(void *destination,void *source,ulong count);
void * recovered_1000150c(void *destination,void *source,ulong count);
void * recovered_10001620(void *destination,int value,ulong count);
void recovered_100016b8(ulong *param_1,ulong param_2);
void recovered_100016bc(ulong *param_1,ulong param_2);
char * recovered_100016c0(long param_1,char param_2,long param_3);
int recovered_100016e4(void *left,void *right,ulong count);
int recovered_1000184c(long param_1,long param_2);
bool recovered_10001878(int param_1);
bool recovered_10001888(int param_1);
bool recovered_10001898(uint param_1);
bool recovered_100018ac(uint param_1);
bool recovered_100018c8(int param_1);
bool recovered_100018d8(int param_1);
int recovered_100018e8(int param_1);
int recovered_100018fc(int param_1);
ulong recovered_10001910(char *text);
int recovered_10001934(byte *param_1,byte *param_2);
int recovered_1000195c(byte *param_1,byte *param_2);
void recovered_10001960(long param_1,long param_2);
long recovered_10001978(long param_1);
char * recovered_100019b4(char *param_1,char param_2);
long recovered_100019dc(long param_1,char *param_2);
long recovered_10001a1c(long param_1,char *param_2);
char * recovered_10001a5c(char *param_1,char *param_2);
char * recovered_10001a9c(char *param_1,char *param_2);
undefined * recovered_10001ad8(void);
undefined ** recovered_10001ae4(void);
void recovered_10001af0(undefined8 *param_1);
double recovered_10001b68(double param_1,uint param_2);
uint128 recovered_10001b9c(double param_1,int *param_2);
uint128 recovered_10001c10(double param_1,double param_2);
uint128 recovered_10001c34(double param_1,double param_2);
uint128 recovered_10001c94(double param_1);
uint128 recovered_10001cb0(double param_1);
uint128 recovered_10001cdc(double param_1);
uint128 recovered_10001d18(double param_1);
long recovered_10001dc4(double param_1);
uint128 recovered_10001dd8(double param_1);
void recovered_10001e2c(double param_1);
uint128 recovered_10001e70(double param_1);
uint128 recovered_10001ebc(double param_1);
ulong recovered_10001ecc(double param_1);
ulong recovered_10001f2c(double param_1);
void recovered_10001f7c(ulong param_1);
uint128 recovered_10001fa4(long param_1);
float recovered_10001fc8(float param_1,float param_2);
float recovered_10001ffc(int *in_x0,float param_2);
float recovered_10002014(uint in_w0,float param_2);
float recovered_1000202c(float param_1,float param_2);
float recovered_10002048(float param_1);
float recovered_1000206c(float param_1);
uint128 recovered_10002084(double param_1);
float recovered_100020ac(float param_1);
float recovered_100020c4(float param_1);
float recovered_100020dc(float param_1);
long recovered_100020f4(double param_1);
float recovered_10002108(float param_1);
float recovered_10002120(float param_1);
float recovered_10002138(float param_1);
long recovered_10002148(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_1000224c(int param_1);
long recovered_1000227c(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_100023a0(byte *param_1,undefined8 *param_2);
float recovered_10002530(byte *in_x0,undefined8 *in_x1);
int recovered_10002548(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_10002aec(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002b28(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
void recovered_10002bc8(long *param_1,ulong *param_2,int *param_3,char *param_4);
int recovered_10002c14(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10002c3c(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002cc0(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002d40(ulong param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10002d90(ulong *param_1,long param_2);
void recovered_10002de4(ulong *param_1);
undefined8 recovered_10002e04(ulong *param_1);
bool recovered_10002e8c(int param_1);
void recovered_10003024(char *param_1,long param_2);
void recovered_100030dc(int param_1);
void recovered_10003168(void);
void recovered_10003170(void);
void recovered_10003178(char *param_1);
void recovered_100031dc(void);
void recovered_10003200(char *param_1);
void recovered_1000322c(void);
bool recovered_10003250(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_100032c8(void);
void recovered_100032cc(void);
undefined8 recovered_100032d0(void);
undefined4 * recovered_100032d8(byte *param_1,char *param_2);
undefined8 recovered_10003514(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10003564(long param_1,ulong param_2);
undefined4 * recovered_100035ec(byte *param_1,char *param_2,int *param_3);
undefined8 recovered_10003620(int *param_1);
ulong recovered_10003664(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10003798(int *param_1);
long recovered_1000387c(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_1000398c(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003a20(long param_1);
undefined8 recovered_10003a44(int *param_1);
undefined1 recovered_10003ab8(long param_1);
undefined1 recovered_10003ac4(long param_1);
void recovered_10003ad0(long param_1);
uint recovered_10003ae4(uint param_1,long param_2);
undefined8 recovered_10003b08(long param_1);
undefined8 recovered_10003b40(undefined8 param_1);
undefined8 recovered_10003b84(long param_1,long param_2);
undefined8 recovered_10003c20(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10003c80(long param_1,long *param_2,ulong *param_3);
bool recovered_10003d20(long param_1,long param_2,long param_3);
undefined8 recovered_10003d4c(void);
void recovered_10003d50(void);
undefined8 recovered_10003d54(void);
undefined8 recovered_10003d58(void);
undefined8 recovered_10003d5c(void);
int recovered_10003d60(byte *param_1,byte *param_2,long param_3);
char * recovered_10003d90(int param_1);
undefined8 recovered_10003e30(void);
undefined8 recovered_10003e34(void);
void recovered_10003e38(void);
bool recovered_10003e4c(int param_1);
__attribute__((naked,noreturn)) void recovered_10003f18(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10003f2c(void *context);
__attribute__((naked,noreturn)) int recovered_10003f88(long context,int value);
void recovered_10003fec(void);
undefined8 recovered_10004000(void);
void recovered_10004008(long param_1);
long recovered_10004018(long param_1);
void * recovered_10004044(ulong param_1);
void * recovered_10004074(ulong param_1);
void recovered_10004078(void *param_1);
void recovered_10004090(void *param_1);
void recovered_100040a8(void *param_1);
void recovered_100040c0(void *param_1);
undefined8 recovered_100040d8(void);
uint recovered_100040e0(uint *param_1);
void recovered_100040f0(ulong *param_1);
void recovered_10004100(void);
long recovered_10004104(ulong param_1);
void recovered_100041ac(long param_1);
void recovered_100041dc(long param_1);
long recovered_1000421c(long param_1);
long recovered_1000424c(long param_1);
void recovered_10004254(void);
void recovered_100042b4(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_100042d4(undefined8 *param_1);
void recovered_10004338(void);
void recovered_10004368(undefined8 *param_1);
void recovered_1000437c(undefined8 *param_1);
void recovered_100043a8(undefined8 *param_1);
void recovered_100043b4(void);
undefined8 recovered_100043c0(long param_1);
undefined8 recovered_100043ec(undefined8 *param_1);
undefined8 recovered_10004488(long param_1);
undefined8 recovered_10004494(void);
void recovered_1000449c(void);
long recovered_100044a8(long *param_1,undefined8 param_2,long *param_3);
bool recovered_100044e8(long *param_1,long *param_2);
void recovered_10004574(void);
undefined8 recovered_10004578(void);
bool recovered_10004580(int param_1);
bool recovered_10004590(uint param_1);
bool recovered_100045c8(uint param_1);
bool recovered_100045e4(ulong param_1);
bool recovered_100045fc(uint param_1);
bool recovered_10004614(ulong param_1);
bool recovered_1000462c(ulong param_1);
double recovered_10004644(double value);
float recovered_10004704(float value);
long double recovered_10004720(long double value);
double recovered_10004724(long end,long start);
uint128 recovered_10004734(double param_1);
long recovered_10004780(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100048c4(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100048c8(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10004aa0(uint param_1,long *param_2);
ulong recovered_10004b94(undefined8 *param_1);
ulong recovered_10004bc8(byte *param_1,long param_2);
ulong recovered_10004bf0(undefined8 *param_1);
long * recovered_10004c70(char *param_1,uint param_2,uint param_3);
long * recovered_10004d70(long *param_1,long param_2);
void recovered_10004dac(long *param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10004db4(long param_1);
void recovered_10004fe4(long param_1);
void recovered_1000545c(long param_1);
void recovered_1000546c(undefined8 *param_1);
void * recovered_100054e4(undefined8 *param_1);
void recovered_10005568(long param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_1000559c(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_100055e4(long param_1);
long * recovered_10005614(long *param_1,undefined1 *param_2);
long recovered_10005630(long param_1,uint *param_2);
long recovered_100056a0(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_100056b4(long param_1);
undefined8 recovered_100056e8(void);
byte recovered_10005ab0(long param_1);
long recovered_10005ac8(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_10005ae8(long param_1);
void recovered_10005b68(long param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_10005ba0(long param_1,uint param_2);
void recovered_10005bc0(void);
void recovered_10005d3c(void);
void recovered_10005d40(void);
void recovered_10005d44(void);
undefined8 recovered_10005d48(void);
void recovered_10005d4c(void);
undefined8 recovered_10005d50(void);
void * recovered_10005d54(char *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10006088(undefined8 param_1,undefined8 param_2);
bool recovered_100060dc(undefined8 *param_1,char *param_2);
bool recovered_100060f4(int param_1);
undefined8 * recovered_1000613c(undefined8 *param_1);
void recovered_10006164(long *param_1,long param_2,ulong param_3);
long recovered_1000624c(long param_1);
undefined8 recovered_10006270(long *param_1,long param_2,long *param_3);
void recovered_100062bc(long *param_1);
void recovered_100062f4(long *param_1,ulong param_2);
undefined8 * recovered_1000636c(undefined8 *param_1,long param_2,ulong param_3);
void * recovered_100063a0(ulong capacity);
uint recovered_100063bc(long param_1,int param_2,int param_3,int param_4);
int recovered_10006428(int param_1,uint param_2,uint param_3);
long * recovered_10006458(long *param_1,undefined8 *param_2);
void recovered_10006498(int param_1);
ulong recovered_100064c0(uint param_1,uint param_2,int param_3);
void recovered_1000650c(undefined8 *param_1,char param_2,ulong param_3);
long * recovered_10006544(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_10006580(undefined8 *param_1,char *param_2);
void recovered_100065d0(long *param_1);
void recovered_1000660c(long *param_1,undefined1 param_2);
long * recovered_10006670(long *param_1,undefined8 *param_2);
ulong recovered_10006688(long *param_1,char param_2,ulong param_3);
bool recovered_100066bc(char *param_1,long param_2,char *param_3,long param_4);
long recovered_100066f4(long *param_1,undefined8 *param_2);
void recovered_10006768(long *param_1,ulong param_2);
void * recovered_100067fc(long param_1);
long * recovered_10006810(long *param_1,long param_2,ulong param_3);
void recovered_100068f4(undefined8 *param_1,undefined8 *param_2);
long * recovered_10006910(long *param_1);
void recovered_1000693c(long *param_1);
long * recovered_10006990(long *param_1,long param_2);
void recovered_100069d4(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10006a58(long *param_1,ulong param_2);
void recovered_10006ac0(long *param_1,ulong param_2);
void * recovered_10006b34(ulong param_1);
undefined8 * recovered_10006b40(undefined8 *param_1);
long recovered_10006b6c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
