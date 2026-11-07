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
#define pf_varargs_1000245c_1 recovered_1000245c
extern uint8_t pf_module_state[];
void recovered_10000608(void);
void recovered_10000614(void);
ulong recovered_10000898(void);
long recovered_100008e4(void);
ulong recovered_10000924(void);
long recovered_10000960(void);
ulong * recovered_10000990(long param_1);
ulong recovered_10000a68(ulong param_1,uint param_2);
ulong recovered_10000aac(ulong param_1,uint param_2);
long recovered_10000af8(long param_1,uint param_2);
ulong recovered_10000b48(ulong param_1,ulong param_2);
ulong recovered_10000b50(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000bb0(undefined8 param_1,undefined8 param_2);
long recovered_10000bd0(ulong param_1,ulong param_2);
long recovered_10000c10(long param_1,long param_2);
void recovered_10000c5c(void);
int recovered_10000c64(int param_1);
void * recovered_10000c70(uintptr_t size);
void recovered_10000cb4(void *pointer);
void * recovered_10000cf8(void *pointer,uintptr_t size);
void recovered_10000d44(undefined1 *param_1,undefined1 *param_2,ulong param_3);
void recovered_10000e1c(undefined1 *param_1,undefined1 *param_2,ulong param_3);
void recovered_10000f30(ulong *param_1,byte param_2,ulong param_3);
void recovered_10000fc8(ulong *param_1,ulong param_2);
void recovered_10000fcc(ulong *param_1,ulong param_2);
int recovered_10000fd0(byte *param_1,byte *param_2,ulong param_3);
int recovered_1000113c(long param_1,long param_2);
bool recovered_1000116c(int param_1);
bool recovered_1000117c(int param_1);
bool recovered_1000118c(uint param_1);
bool recovered_100011a0(uint param_1);
bool recovered_100011bc(int param_1);
bool recovered_100011cc(int param_1);
int recovered_100011dc(int param_1);
int recovered_100011f0(int param_1);
long recovered_10001204(long param_1);
int recovered_10001228(byte *param_1,byte *param_2);
int recovered_10001250(byte *param_1,byte *param_2);
void recovered_10001254(long param_1,long param_2);
void recovered_1000126c(long param_1);
char * recovered_100012a8(char *param_1,char param_2);
long recovered_100012d0(long param_1,char *param_2);
char * recovered_10001318(char *param_1,char *param_2);
char * recovered_10001358(char *param_1,char *param_2);
undefined * recovered_10001394(void);
undefined ** recovered_100013a0(void);
void recovered_100013ac(undefined8 *param_1);
double recovered_10001424(double param_1,uint param_2);
uint128 recovered_10001458(double param_1,int *param_2);
uint128 recovered_100014cc(double param_1,double param_2);
uint128 recovered_100014f0(double param_1,double param_2);
uint128 recovered_10001550(double param_1);
uint128 recovered_1000156c(double param_1);
uint128 recovered_10001598(double param_1);
uint128 recovered_100015d4(double param_1);
long recovered_10001680(double param_1);
uint128 recovered_10001694(double param_1);
void recovered_100016e8(double param_1);
uint128 recovered_1000172c(double in_d0);
uint128 recovered_10001778(double param_1);
long long recovered_10001788(double value);
unsigned long long recovered_100017e8(double value);
double recovered_10001838(unsigned long long value);
double recovered_10001860(long long value);
float recovered_10001884(float param_1,float param_2);
float recovered_100018b8(int *in_x0,float param_2);
float recovered_100018d0(uint in_w0,float param_2);
float recovered_100018e8(float param_1,float param_2);
float recovered_10001904(float param_1);
float recovered_10001928(float param_1);
uint128 recovered_10001940(double param_1);
float recovered_10001968(float param_1);
float recovered_10001980(float param_1);
float recovered_10001998(float param_1);
long recovered_100019b0(double param_1);
float recovered_100019c4(float param_1);
float recovered_100019dc(float param_1);
float recovered_100019f4(float param_1);
long recovered_10001a04(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001b08(int param_1);
long recovered_10001b38(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001c5c(byte *param_1,undefined8 *param_2);
float recovered_10001dec(byte *in_x0,undefined8 *in_x1);
int recovered_10001e04(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_1000232c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002368(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_100023b8(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_1000245c(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10002484(ulong param_1,ulong param_2,ulong *param_3);
void recovered_1000250c(long param_1,ulong param_2,ulong *param_3);
bool recovered_1000257c(int param_1);
void recovered_100026c4(char *param_1,long param_2);
void recovered_1000277c(int param_1);
void recovered_10002808(void);
void recovered_10002810(void);
void recovered_10002818(char *param_1);
void recovered_1000287c(void);
void recovered_100028a0(char *param_1);
void recovered_100028cc(void);
bool recovered_100028f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002968(void);
void recovered_1000296c(void);
undefined8 recovered_10002970(void);
undefined4 * recovered_10002978(long param_1,long param_2);
undefined8 recovered_10002bb4(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002c04(long param_1,ulong param_2);
undefined4 * recovered_10002c8c(long param_1,long param_2,int *param_3);
undefined8 recovered_10002cc0(int *param_1);
ulong recovered_10002d04(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002e38(int *param_1);
long recovered_10002f1c(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_1000302c(int *param_1,ulong param_2,int param_3);
undefined8 recovered_100030c0(long param_1);
undefined8 recovered_100030e4(int *param_1);
undefined1 recovered_10003158(long param_1);
undefined1 recovered_10003164(long param_1);
void recovered_10003170(long param_1);
uint recovered_10003184(uint param_1,long param_2);
undefined8 recovered_100031a8(long param_1);
undefined8 recovered_100031e0(undefined8 param_1);
undefined8 recovered_10003224(long param_1,long param_2);
undefined8 recovered_100032c0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10003320(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_100033c0(long param_1,long param_2,long param_3);
undefined8 recovered_100033ec(void);
void recovered_100033f0(void);
undefined8 recovered_100033f4(void);
undefined8 recovered_100033f8(void);
undefined8 recovered_100033fc(void);
char * recovered_10003400(long param_1,char param_2,long param_3);
int recovered_10003424(byte *param_1,byte *param_2,long param_3);
char * recovered_10003454(int param_1);
undefined8 recovered_100034f4(void);
undefined8 recovered_100034f8(void);
void recovered_100034fc(void);
bool recovered_10003510(int param_1);
__attribute__((naked,noreturn)) void recovered_100035dc(void *context);
__attribute__((naked,returns_twice)) int recovered_100035f0(void *context);
__attribute__((naked,noreturn)) void recovered_1000362c(void *context,int value);
void recovered_10003670(void);
undefined8 recovered_10003684(void);
void recovered_1000368c(long param_1);
long recovered_1000369c(long param_1);
void * recovered_100036bc(ulong param_1);
void * recovered_100036ec(ulong param_1);
void recovered_100036f0(void *param_1);
void recovered_10003708(void *param_1);
void recovered_10003720(void *param_1);
void recovered_10003738(void *param_1);
undefined8 recovered_10003750(void);
uint recovered_10003758(uint *param_1);
void recovered_10003768(ulong *param_1);
void recovered_10003778(void);
undefined1 * recovered_1000377c(ulong param_1);
void recovered_100037c4(long param_1);
long recovered_100037d4(long param_1);
void recovered_100037dc(void);
void recovered_10003834(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10003854(undefined8 *param_1);
void recovered_100038b8(void);
void recovered_100038e8(undefined8 *param_1);
void recovered_100038fc(undefined8 *param_1);
void recovered_10003928(undefined8 *in_x0);
void recovered_10003934(void);
undefined8 recovered_10003940(undefined8 *param_1);
undefined8 recovered_10003960(undefined8 *param_1);
undefined8 recovered_100039fc(undefined8 *in_x0);
undefined8 recovered_10003a08(void);
void recovered_10003a10(void);
long recovered_10003a1c(long *param_1,undefined8 param_2,long *param_3);
bool recovered_10003a5c(long *param_1,long *param_2);
void recovered_10003ae8(void);
undefined8 recovered_10003aec(void);
bool recovered_10003af4(int param_1);
bool recovered_10003b04(uint param_1);
bool recovered_10003b3c(uint param_1);
bool recovered_10003b58(ulong param_1);
bool recovered_10003b70(uint param_1);
bool recovered_10003b88(ulong param_1);
bool recovered_10003ba0(ulong param_1);
double recovered_10003bb8(double value);
float recovered_10003c78(float value);
long double recovered_10003c94(long double value);
double recovered_10003c98(long end,long start);
uint128 recovered_10003ca8(double param_1);
long recovered_10003cf4(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003e38(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10003e3c(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10004014(uint param_1,long *param_2);
ulong recovered_10004108(undefined8 *param_1);
ulong recovered_10004140(byte *param_1,long param_2);
ulong recovered_1000416c(undefined8 *param_1);
undefined * recovered_100041e4(void);
uint recovered_100041f0(char *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                       undefined8 param_6,undefined1 *param_7,ulong param_8,char *param_9,
                       ulong param_10);
char * recovered_10004864(char *first,char *last,char *pattern);
void recovered_10004940(char *buffer,uint capacity,char *text);
uint recovered_100049ac(char *script,char *output,uint capacity);
uint recovered_10004aa4(char *script,char *output,uint capacity);
uint recovered_10004c6c(char *script,char *output,uint capacity);
uint recovered_10004d64(char *script,char *output,uint capacity);
uint recovered_10004edc(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags);
char * recovered_10005088(char *text,char *pattern);
uint recovered_1000512c(char *output,uint capacity,char *first,char *last,char *url,char *html);
uint recovered_10005534(char *output,uint capacity,char *first,char *last);
char * recovered_1000577c(char *first,char *last);
char * recovered_10005840(char *first);
uint recovered_100058dc(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth);
uint recovered_10005b84(char *output,uint capacity,char *text);
uint recovered_10005bf4(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth);
uint recovered_10005dbc(int param_1);
uint recovered_10005dec(char *output,uint capacity,char *text);
uint recovered_10005f14(char *output,uint capacity,char *text);
uint recovered_10005f7c(char *output,uint capacity,char *first,char *last);
uint recovered_100062e0(char *output,uint capacity,int character);
char * recovered_1000632c(char *first);
uint recovered_10006434(char *output,uint capacity,char *first,char *last);

/* Original analysis identifiers for manual recovery units. */
