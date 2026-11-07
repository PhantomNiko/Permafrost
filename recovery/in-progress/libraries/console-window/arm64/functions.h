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
#define pf_varargs_10002464_1 recovered_10002464
extern uint8_t pf_module_state[];
void recovered_10000610(void);
void recovered_1000061c(void);
ulong recovered_100008a0(void);
long recovered_100008ec(void);
ulong recovered_1000092c(void);
long recovered_10000968(void);
ulong * recovered_10000998(long param_1);
ulong recovered_10000a70(ulong param_1,uint param_2);
ulong recovered_10000ab4(ulong param_1,uint param_2);
long recovered_10000b00(long param_1,uint param_2);
ulong recovered_10000b50(ulong param_1,ulong param_2);
ulong recovered_10000b58(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000bb8(undefined8 param_1,undefined8 param_2);
long recovered_10000bd8(ulong param_1,ulong param_2);
long recovered_10000c18(long param_1,long param_2);
void recovered_10000c64(void);
int recovered_10000c6c(int param_1);
void * recovered_10000c78(uintptr_t size);
void recovered_10000cbc(void *pointer);
void * recovered_10000d00(void *pointer,uintptr_t size);
void * recovered_10000d4c(void *destination,void *source,ulong count);
void * recovered_10000e24(void *destination,void *source,ulong count);
void * recovered_10000f38(void *destination,int value,ulong count);
void recovered_10000fd0(ulong *param_1,ulong param_2);
void recovered_10000fd4(ulong *param_1,ulong param_2);
int recovered_10000fd8(void *left,void *right,ulong count);
int recovered_10001144(long param_1,long param_2);
bool recovered_10001174(int param_1);
bool recovered_10001184(int param_1);
bool recovered_10001194(uint param_1);
bool recovered_100011a8(uint param_1);
bool recovered_100011c4(int param_1);
bool recovered_100011d4(int param_1);
int recovered_100011e4(int param_1);
int recovered_100011f8(int param_1);
ulong recovered_1000120c(char *text);
int recovered_10001230(char *left,char *right);
int recovered_10001258(char *left,char *right);
void recovered_1000125c(long param_1,long param_2);
void recovered_10001274(char *param_1);
char * recovered_100012b0(char *param_1,char param_2);
long recovered_100012d8(long param_1,char *param_2);
char * recovered_10001320(char *param_1,char *param_2);
char * recovered_10001360(char *param_1,char *param_2);
undefined * recovered_1000139c(void);
undefined ** recovered_100013a8(void);
void recovered_100013b4(undefined8 *param_1);
double recovered_1000142c(double param_1,uint param_2);
uint128 recovered_10001460(double param_1,int *param_2);
uint128 recovered_100014d4(double param_1,double param_2);
uint128 recovered_100014f8(double param_1,double param_2);
uint128 recovered_10001558(double param_1);
uint128 recovered_10001574(double param_1);
uint128 recovered_100015a0(double param_1);
uint128 recovered_100015dc(double param_1);
long recovered_10001688(double param_1);
uint128 recovered_1000169c(double param_1);
void recovered_100016f0(double param_1);
uint128 recovered_10001734(double in_d0);
uint128 recovered_10001780(double param_1);
long long recovered_10001790(double value);
unsigned long long recovered_100017f0(double value);
double recovered_10001840(unsigned long long value);
double recovered_10001868(long long value);
float recovered_1000188c(float param_1,float param_2);
float recovered_100018c0(int *in_x0,float param_2);
float recovered_100018d8(uint in_w0,float param_2);
float recovered_100018f0(float param_1,float param_2);
float recovered_1000190c(float param_1);
float recovered_10001930(float param_1);
uint128 recovered_10001948(double param_1);
float recovered_10001970(float param_1);
float recovered_10001988(float param_1);
float recovered_100019a0(float param_1);
long recovered_100019b8(double param_1);
float recovered_100019cc(float param_1);
float recovered_100019e4(float param_1);
float recovered_100019fc(float param_1);
long recovered_10001a0c(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001b10(int param_1);
long recovered_10001b40(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001c64(byte *param_1,undefined8 *param_2);
float recovered_10001df4(byte *in_x0,undefined8 *in_x1);
int recovered_10001e0c(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_10002334(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002370(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_100023c0(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_10002464(char *buffer,uintptr_t capacity,char *format,...);
void recovered_1000248c(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002514(long param_1,ulong param_2,ulong *param_3);
bool recovered_10002584(int param_1);
void recovered_100026cc(char *param_1,long param_2);
void recovered_10002784(int param_1);
void recovered_10002810(void);
void recovered_10002818(void);
void recovered_10002820(char *param_1);
void recovered_10002884(void);
void recovered_100028a8(char *param_1);
void recovered_100028d4(void);
bool recovered_100028f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002970(void);
void recovered_10002974(void);
undefined8 recovered_10002978(void);
undefined4 * recovered_10002980(char *param_1,long param_2);
undefined8 recovered_10002bbc(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002c0c(long param_1,ulong param_2);
undefined4 * recovered_10002c94(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002cc8(int *param_1);
ulong recovered_10002d0c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002e40(int *param_1);
long recovered_10002f24(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10003034(int *param_1,ulong param_2,int param_3);
undefined8 recovered_100030c8(long param_1);
undefined8 recovered_100030ec(int *param_1);
undefined1 recovered_10003160(long param_1);
undefined1 recovered_1000316c(long param_1);
void recovered_10003178(long param_1);
uint recovered_1000318c(uint param_1,long param_2);
undefined8 recovered_100031b0(long param_1);
undefined8 recovered_100031e8(undefined8 param_1);
undefined8 recovered_1000322c(long param_1,long param_2);
undefined8 recovered_100032c8(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10003328(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_100033c8(long param_1,long param_2,long param_3);
undefined8 recovered_100033f4(void);
void recovered_100033f8(void);
undefined8 recovered_100033fc(void);
undefined8 recovered_10003400(void);
undefined8 recovered_10003404(void);
char * recovered_10003408(long param_1,char param_2,long param_3);
int recovered_1000342c(char *left,char *right,ulong count);
char * recovered_1000345c(int param_1);
undefined8 recovered_100034fc(void);
undefined8 recovered_10003500(void);
void recovered_10003504(void);
bool recovered_10003518(int param_1);
__attribute__((naked,noreturn)) void recovered_100035e4(void *context);
__attribute__((naked,returns_twice)) int recovered_100035f8(void *context);
__attribute__((naked,noreturn)) void recovered_10003634(void *context,int value);
void recovered_10003678(void);
undefined8 recovered_1000368c(void);
void recovered_10003694(long param_1);
long recovered_100036a4(long param_1);
void * recovered_100036c4(ulong param_1);
void * recovered_100036f4(ulong param_1);
void recovered_100036f8(void *param_1);
void recovered_10003710(void *param_1);
void recovered_10003728(void *param_1);
void recovered_10003740(void *param_1);
undefined8 recovered_10003758(void);
uint recovered_10003760(uint *param_1);
void recovered_10003770(ulong *param_1);
void recovered_10003780(void);
undefined1 * recovered_10003784(ulong param_1);
void recovered_100037cc(long param_1);
long recovered_100037dc(long param_1);
void recovered_100037e4(void);
void recovered_1000383c(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_1000385c(undefined8 *param_1);
void recovered_100038c0(void);
void recovered_100038f0(undefined8 *param_1);
void recovered_10003904(undefined8 *param_1);
void recovered_10003930(undefined8 *in_x0);
void recovered_1000393c(void);
undefined8 recovered_10003948(undefined8 *param_1);
undefined8 recovered_10003968(undefined8 *param_1);
undefined8 recovered_10003a04(undefined8 *in_x0);
undefined8 recovered_10003a10(void);
void recovered_10003a18(void);
long recovered_10003a24(long *param_1,undefined8 param_2,long *param_3);
bool recovered_10003a64(long *param_1,long *param_2);
void recovered_10003af0(void);
undefined8 recovered_10003af4(void);
bool recovered_10003afc(int param_1);
bool recovered_10003b0c(uint param_1);
bool recovered_10003b44(uint param_1);
bool recovered_10003b60(ulong param_1);
bool recovered_10003b78(uint param_1);
bool recovered_10003b90(ulong param_1);
bool recovered_10003ba8(ulong param_1);
double recovered_10003bc0(double value);
float recovered_10003c80(float value);
long double recovered_10003c9c(long double value);
double recovered_10003ca0(long end,long start);
uint128 recovered_10003cb0(double param_1);
long recovered_10003cfc(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003e40(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10003e44(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_1000401c(uint param_1,long *param_2);
ulong recovered_10004110(undefined8 *param_1);
ulong recovered_10004148(byte *param_1,long param_2);
ulong recovered_10004174(undefined8 *param_1);
long * recovered_100041ec(char *param_1,uint param_2,uint param_3);
long * recovered_100042ec(long *param_1,long param_2);
void recovered_10004328(long *param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10004330(long param_1);
void recovered_10004560(long param_1);
void recovered_100049d8(long param_1);
void recovered_100049e8(undefined8 *param_1);
void * recovered_10004a60(undefined8 *param_1);
void recovered_10004ae4(long param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10004b18(long param_1,undefined4 param_2,undefined4 param_3);
void recovered_10004b60(long param_1);
long * recovered_10004b90(long *param_1,undefined1 *param_2);
long recovered_10004bac(long param_1,uint *param_2);
long recovered_10004c1c(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10004c30(long param_1);
undefined8 recovered_10004c64(void);
byte recovered_1000502c(long param_1);
long recovered_10005044(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_10005064(long param_1);
void recovered_100050e4(long param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_1000511c(long param_1,uint param_2);
void recovered_1000513c(void);
void recovered_100052b8(void);
void recovered_100052bc(void);
void recovered_100052c0(void);
undefined8 recovered_100052c4(void);
void recovered_100052c8(void);
undefined8 recovered_100052cc(void);
void * recovered_100052d0(char *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10005604(undefined8 param_1,undefined8 param_2);
bool recovered_10005658(undefined8 *param_1,char *param_2);
bool recovered_10005670(int param_1);
undefined8 * recovered_100056b8(undefined8 *param_1);
void recovered_100056e0(long *param_1,long param_2,ulong param_3);
long recovered_100057c8(long param_1);
undefined8 recovered_100057ec(long *param_1,long param_2,long *param_3);
void recovered_10005838(long *param_1);
void recovered_10005870(long *param_1,ulong param_2);
undefined8 * recovered_100058e8(undefined8 *param_1,long param_2,ulong param_3);
void * recovered_1000591c(ulong capacity);
uint recovered_10005938(long param_1,int param_2,int param_3,int param_4);
int recovered_100059a4(int param_1,uint param_2,uint param_3);
undefined8 * recovered_100059d4(undefined8 *param_1,undefined8 *param_2);
void recovered_10005a14(int param_1);
ulong recovered_10005a3c(uint param_1,uint param_2,int param_3);
void recovered_10005a88(undefined8 *param_1,char param_2,ulong param_3);
undefined8 * recovered_10005ac0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_10005afc(undefined8 *param_1,char *param_2);
void recovered_10005b4c(long *param_1);
void recovered_10005b88(long *param_1,undefined1 param_2);
long * recovered_10005bec(long *param_1,undefined8 *param_2);
ulong recovered_10005c04(long *param_1,char param_2,ulong param_3);
bool recovered_10005c38(char *param_1,long param_2,char *param_3,long param_4);
long recovered_10005c70(long *param_1,undefined8 *param_2);
void recovered_10005ce4(long *param_1,ulong param_2);
void * recovered_10005d78(long param_1);
long * recovered_10005d8c(long *param_1,long param_2,ulong param_3);
void recovered_10005e70(undefined8 *param_1,undefined8 *param_2);
long * recovered_10005e8c(long *param_1);
void recovered_10005eb8(long *param_1);
undefined8 * recovered_10005f0c(undefined8 *param_1,long param_2);
void recovered_10005f50(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10005fd4(long *param_1,ulong param_2);
void recovered_1000603c(long *param_1,ulong param_2);
void * recovered_100060b0(ulong param_1);
undefined8 * recovered_100060bc(undefined8 *param_1);
long recovered_100060e8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */

/* Console-window raster composition */
static void pf_console_compose(void *opaque);
static void pf_console_present(void *opaque);

/* Preserve all four lanes of wide signed min/max operations. */
static inline uint128 pf_console_neon_bound128(uint128 a,uint128 b,unsigned lane,int maximum){return (uint128)pf_neon_bound((uint64_t)a,(uint64_t)b,lane,maximum)|((uint128)pf_neon_bound((uint64_t)(a>>64),(uint64_t)(b>>64),lane,maximum)<<64);}
#undef NEON_smax
#undef NEON_smin
#define NEON_smax(a,b,lane) _Generic((a),uint128:pf_console_neon_bound128,default:pf_neon_bound)(a,b,lane,1)
#define NEON_smin(a,b,lane) _Generic((a),uint128:pf_console_neon_bound128,default:pf_neon_bound)(a,b,lane,0)
