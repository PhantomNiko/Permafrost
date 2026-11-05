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
void recovered_10000658(void);
void recovered_10000664(void);
ulong recovered_100008cc(void);
long recovered_10000918(void);
ulong recovered_10000958(void);
long recovered_10000994(void);
ulong * recovered_100009c4(long param_1);
ulong recovered_10000a58(ulong param_1,uint param_2);
ulong recovered_10000a9c(ulong param_1,uint param_2);
long recovered_10000ae8(long param_1,uint param_2);
void recovered_10000b38(ulong param_1,ulong param_2);
ulong recovered_10000b40(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000ba0(undefined8 param_1,undefined8 param_2);
long recovered_10000bc0(ulong param_1,ulong param_2);
long recovered_10000c00(long param_1,long param_2);
void recovered_10000c4c(void);
int recovered_10000c54(int param_1);
void * recovered_10000c60(size_t size);
void recovered_10000ca4(void *pointer);
void * recovered_10000ce8(void *pointer,size_t size);
void * recovered_10000d34(void *out,void *data,ulong size);
void * recovered_10000d54(void *out,void *data,ulong size);
void * recovered_10000da4(void *out,int value,ulong size);
void recovered_10000dc0(undefined1 *param_1,long param_2);
void recovered_10000dd4(undefined1 *param_1,long param_2);
int recovered_10000de8(void *left,void *right,ulong size);
bool recovered_10000e10(int param_1);
bool recovered_10000e20(int param_1);
bool recovered_10000e30(uint param_1);
bool recovered_10000e44(uint param_1);
bool recovered_10000e60(int param_1);
bool recovered_10000e70(int param_1);
int recovered_10000e80(int param_1);
int recovered_10000e94(int param_1);
ulong recovered_10000ea8(char *text);
int recovered_10000ecc(char *left,char *right);
int recovered_10000ef4(char *left,char *right);
void recovered_10000ef8(long param_1,long param_2);
void recovered_10000f10(char *param_1);
char * recovered_10000f4c(char *param_1,char param_2);
long recovered_10000f74(long param_1,char *param_2);
char * recovered_10000fbc(char *param_1,char *param_2);
char * recovered_10000ffc(char *param_1,char *param_2);
undefined * recovered_10001038(void);
undefined ** recovered_10001044(void);
undefined8 recovered_10001050(undefined8 *param_1);
double recovered_1000106c(double param_1,uint param_2);
uint128 recovered_100010a0(double param_1,int *param_2);
double recovered_10001114(double left,double right);
double recovered_10001138(double left,double right);
double recovered_10001198(double value);
double recovered_100011b4(double value);
double recovered_100011e0(double value);
double recovered_1000121c(double value);
long recovered_100012c8(double param_1);
double recovered_100012dc(double value);
void recovered_10001330(double param_1);
double recovered_10001374(double value);
double recovered_100013c0(double value);
float recovered_100013d0(float left,float right);
float recovered_10001404(float param_1);
float recovered_1000141c(float param_1);
float recovered_10001434(float left,float right);
float recovered_10001450(float value);
float recovered_10001474(float value);
double recovered_1000148c(double value);
float recovered_100014b4(float value);
float recovered_100014cc(float value);
float recovered_100014e4(float value);
long recovered_100014fc(double param_1);
float recovered_10001510(float value);
float recovered_10001528(float value);
float recovered_10001540(float value);
long recovered_10001550(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001654(int param_1);
long recovered_10001684(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_100017a8(char *text,char **end);
float recovered_10001938(char *text,char **end);
int recovered_10001950(char *out,ulong capacity,char *format,void *arguments);
void recovered_10001c24(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001c60(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001cb0(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10001d50(char *out,ulong capacity,char *format,...);
void recovered_10001d78(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001dd0(int param_1);
void recovered_10001f08(char *param_1,long param_2);
void recovered_10001fc0(int param_1);
void recovered_1000204c(void);
void recovered_10002054(void);
void recovered_1000205c(char *param_1);
void recovered_100020c0(void);
void recovered_10002114(char *param_1);
void recovered_10002140(void);
bool recovered_10002164(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_100021dc(void);
void recovered_100021e0(void);
undefined8 recovered_100021e4(void);
undefined4 * recovered_100021ec(char *param_1,long param_2);
undefined8 recovered_10002428(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002478(long param_1,ulong param_2);
void recovered_10002500(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002534(int *param_1);
long recovered_10002578(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_10002628(int *param_1);
long recovered_1000270c(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_1000281c(int *param_1,ulong param_2,int param_3);
undefined8 recovered_100028b0(long param_1);
undefined8 recovered_100028d4(int *param_1);
undefined1 recovered_10002948(long param_1);
undefined1 recovered_10002954(long param_1);
void recovered_10002960(long param_1);
uint recovered_10002974(uint param_1,long param_2);
undefined8 recovered_10002998(long param_1);
undefined8 recovered_100029d0(undefined8 param_1);
undefined8 recovered_10002a14(long param_1,long param_2);
undefined8 recovered_10002ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10002b10(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10002bb0(long param_1,long param_2,long param_3);
undefined8 recovered_10002bdc(void);
void recovered_10002be0(void);
undefined8 recovered_10002be4(void);
undefined8 recovered_10002be8(void);
undefined8 recovered_10002bec(void);
char * recovered_10002bf0(long param_1,char param_2,long param_3);
int recovered_10002c14(char *left,char *right,ulong size);
char * recovered_10002c44(int param_1);
undefined8 recovered_10002ce4(void);
undefined8 recovered_10002ce8(void);
void recovered_10002cec(void);
bool recovered_10002d00(int param_1);
void recovered_10002dcc(long param_1);
__attribute__((naked, returns_twice)) unsigned long recovered_10002de0(unsigned long *context);
__attribute__((naked,noreturn)) void recovered_10002e0c(unsigned long *context,int value);
void recovered_10002e40(void);
undefined8 recovered_10002e54(void);
void recovered_10002e5c(long param_1);
void recovered_10002e6c(long param_1);
void * recovered_10002e8c(ulong size);
void * recovered_10002ebc(ulong size);
void recovered_10002ec0(void *data);
void recovered_10002ed8(void *data);
void recovered_10002ef0(void *param_1);
void recovered_10002f08(void *param_1);
undefined8 recovered_10002f20(void);
uint recovered_10002f28(uint *param_1);
void recovered_10002f38(ulong *param_1);
void recovered_10002f48(void);
undefined1 * recovered_10002f4c(ulong param_1);
void recovered_10002f94(long param_1);
long recovered_10002fa4(long param_1);
void recovered_10002fac(void);
void recovered_10003004(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10003024(undefined8 *param_1);
void recovered_10003088(void);
void recovered_100030b8(undefined8 *param_1);
void recovered_100030cc(undefined8 *param_1);
void recovered_100030f8(void);
void recovered_10003104(void);
undefined8 recovered_10003110(undefined8 *param_1);
undefined8 recovered_10003130(undefined8 *param_1);
undefined8 recovered_100031cc(void);
undefined8 recovered_100031d8(void);
void recovered_100031e0(void);
long recovered_100031ec(long *param_1,undefined8 param_2,long *param_3);
bool recovered_1000322c(long *param_1,long *param_2);
void recovered_100032b8(void);
undefined8 recovered_100032bc(void);
bool recovered_100032c4(int param_1);
bool recovered_100032d4(uint param_1);
bool recovered_1000330c(uint param_1);
bool recovered_10003328(ulong param_1);
bool recovered_10003340(uint param_1);
bool recovered_10003358(ulong param_1);
bool recovered_10003370(ulong param_1);
double recovered_10003388(double value);
long recovered_100033d4(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003518(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_1000351c(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_100036f4(uint param_1,long *param_2);
ulong recovered_100037e8(undefined8 *param_1);
ulong recovered_10003820(byte *param_1,long param_2);
ulong recovered_1000384c(undefined8 *param_1);
void recovered_100038c4(void);
void recovered_100038c8(void);
void recovered_100038cc(long param_1);
void recovered_100038d8(long param_1);
undefined8 * recovered_100038e4(long param_1);
undefined8 recovered_10003994(long param_1,long param_2,ushort *param_3);
undefined8 * recovered_10003a14(undefined8 *param_1,undefined8 *param_2);
long * recovered_10003a4c(uint param_1,uint param_2,long param_3,long param_4);
long recovered_10003ccc(ulong param_1,uint param_2);
void recovered_10003d14(long *param_1,ulong param_2,undefined2 *param_3);
int recovered_10003d1c(double param_1);
undefined8 recovered_10003d64(undefined8 *param_1,undefined8 *param_2);
bool recovered_10003dcc(long param_1);
byte recovered_10003df4(undefined8 *param_1,long param_2);
byte recovered_10003e10(long param_1,undefined8 *param_2);
undefined8 recovered_10003edc(long *param_1,long *param_2,long param_3);
uint128 recovered_10004034(double param_1,long *param_2,uint param_3);
undefined8 recovered_100040f8(long *param_1,ulong param_2,ulong param_3);
void recovered_100041ec(long *param_1,undefined2 *param_2,undefined2 *param_3);
undefined8 * recovered_10004200(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10004250(double param_1,long param_2);
void recovered_100042d0(long *param_1,double param_2,long param_3,ulong param_4);
undefined8 recovered_100043dc(double param_1,long param_2);
undefined8 recovered_1000447c(void);
undefined8 recovered_10004480(void);
undefined8 recovered_10004488(void);
void recovered_10004490(undefined8 *param_1);
void recovered_100044b0(void);
void recovered_100044b4(void *data);
void recovered_100044b8(void *data);
byte recovered_100044bc(long param_1,long *param_2);
undefined8 recovered_10004598(void *param_1,ulong param_2,long param_3,ushort *param_4);
void recovered_10004998(long *param_1,ulong param_2);
long recovered_10004a00(long param_1);
undefined8 * recovered_10004a28(undefined8 *param_1,char *param_2,uint param_3);
void recovered_10004a7c(long param_1,char *param_2,uint param_3);
long * recovered_10004aac(long *param_1);
void recovered_10004ad4(void *param_1);
void recovered_10004afc(long *param_1,char *param_2,uint param_3);
void recovered_10004b54(long *param_1);
undefined * recovered_10004b88(uint param_1);
void recovered_10004c40(long *param_1,ulong param_2,int param_3);
long recovered_10004c90(long *param_1);
void recovered_10004cd0(long *param_1,ulong param_2);
void recovered_10004d44(ulong param_1);
void recovered_10004d50(long *param_1,long param_2,long param_3);
undefined8 recovered_10004da4(ushort *param_1,long param_2,ulong param_3);
bool recovered_10004df8(int param_1,int param_2);
void recovered_10004e2c(long *param_1,ulong param_2);
uint128 recovered_10004e90(uint3 *param_1,int param_2,int param_3);
int recovered_10004fb0(double param_1);
void recovered_1000500c(long *param_1,ulong param_2);
void recovered_10005080(long param_1);
bool recovered_10005090(undefined8 *param_1,char *param_2);
long * recovered_100050e0(long *param_1,long param_2);
void recovered_10005124(long *param_1,long param_2,ulong param_3);
long recovered_1000520c(long param_1);
undefined8 recovered_10005230(long *param_1,long param_2,long *param_3);
void recovered_1000527c(long *param_1);
void recovered_100052b4(long *param_1,ulong param_2);
undefined8 * recovered_1000532c(undefined8 *param_1,long param_2,ulong param_3);
void recovered_10005360(long param_1);
bool recovered_1000537c(char *param_1,long param_2,char *param_3,long param_4);
undefined8 recovered_100053b4(undefined8 *param_1,undefined8 *param_2);
long recovered_10005570(long param_1);
void recovered_10005598(long *param_1,undefined1 *param_2,long param_3);
void recovered_100055b0(long *param_1,undefined4 param_2);
void recovered_10005620(long *param_1,undefined4 param_2);
undefined8 * recovered_10005668(undefined8 *param_1,undefined8 *param_2);
long recovered_100056b8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_100057b0(long *param_1,undefined1 *param_2);
undefined8 * recovered_10005818(undefined8 *param_1,char *param_2,uint param_3);
void recovered_1000586c(long param_1,char *param_2,uint param_3);
void recovered_1000589c(void *param_1);
void recovered_100058c4(long *param_1,long param_2,long param_3);
undefined8 * recovered_10005924(undefined8 *param_1);
void recovered_10005950(long *param_1,ulong param_2,undefined2 *param_3);
long recovered_100059d0(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4);
void recovered_10005b30(void);
void recovered_10005b84(void);
void recovered_10005bd8(void);
void recovered_10005c2c(void);

/* Original analysis identifiers for manual recovery units. */
