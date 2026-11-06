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
void recovered_10000608(void);
void recovered_10000614(void);
ulong recovered_1000087c(void);
long recovered_100008c8(void);
ulong recovered_10000908(void);
long recovered_10000944(void);
ulong * recovered_10000974(long param_1);
ulong recovered_10000a08(ulong param_1,uint param_2);
ulong recovered_10000a4c(ulong param_1,uint param_2);
long recovered_10000a98(long param_1,uint param_2);
ulong recovered_10000ae8(ulong param_1,ulong param_2);
ulong recovered_10000af0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b50(undefined8 param_1,undefined8 param_2);
long recovered_10000b70(ulong param_1,ulong param_2);
long recovered_10000bb0(long param_1,long param_2);
void recovered_10000bfc(void);
int recovered_10000c04(int param_1);
void * recovered_10000c10(size_t size);
void recovered_10000c54(void *pointer);
void * recovered_10000c98(void *pointer,size_t size);
void * recovered_10000ce4(void *dst,void *src,ulong bytes);
void * recovered_10000d04(void *dst,void *src,ulong bytes);
void * recovered_10000d54(void *dst,int byte,ulong bytes);
void recovered_10000d70(undefined1 *param_1,long param_2);
void recovered_10000d84(undefined1 *param_1,long param_2);
int recovered_10000d98(byte *param_1,byte *param_2,long param_3);
bool recovered_10000dc0(int param_1);
bool recovered_10000dd0(int param_1);
bool recovered_10000de0(uint param_1);
bool recovered_10000df4(uint param_1);
bool recovered_10000e10(int param_1);
bool recovered_10000e20(int param_1);
int recovered_10000e30(int param_1);
int recovered_10000e44(int param_1);
ulong recovered_10000e58(char *text);
int recovered_10000e7c(byte *param_1,byte *param_2);
int recovered_10000ea4(byte *param_1,byte *param_2);
void recovered_10000ea8(long param_1,long param_2);
long recovered_10000ec0(long param_1);
char * recovered_10000efc(char *param_1,char param_2);
long recovered_10000f24(long param_1,char *param_2);
char * recovered_10000f6c(char *param_1,char *param_2);
char * recovered_10000fac(char *param_1,char *param_2);
undefined * recovered_10000fe8(void);
undefined ** recovered_10000ff4(void);
undefined8 recovered_10001000(undefined8 *param_1);
double recovered_1000101c(double param_1,uint param_2);
uint128 recovered_10001050(double param_1,int *param_2);
uint128 recovered_100010c4(double param_1,double param_2);
uint128 recovered_100010e8(double param_1,double param_2);
uint128 recovered_10001148(double param_1);
uint128 recovered_10001164(double param_1);
uint128 recovered_10001190(double param_1);
uint128 recovered_100011cc(double param_1);
long recovered_10001278(double param_1);
uint128 recovered_1000128c(double param_1);
void recovered_100012e0(double param_1);
uint128 recovered_10001324(double in_d0);
uint128 recovered_10001370(double param_1);
ulong recovered_10001380(double param_1);
ulong recovered_100013e0(double param_1);
void recovered_10001430(ulong param_1);
uint128 recovered_10001458(long param_1);
float recovered_1000147c(float param_1,float param_2);
float recovered_100014b0(int *in_x0,float param_2);
float recovered_100014c8(uint in_w0,float param_2);
float recovered_100014e0(float param_1,float param_2);
float recovered_100014fc(float param_1);
float recovered_10001520(float param_1);
uint128 recovered_10001538(double param_1);
float recovered_10001560(float param_1);
float recovered_10001578(float param_1);
float recovered_10001590(float param_1);
long recovered_100015a8(double param_1);
float recovered_100015bc(float param_1);
float recovered_100015d4(float param_1);
float recovered_100015ec(float param_1);
long recovered_100015fc(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001700(int param_1);
long recovered_10001730(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001854(byte *param_1,undefined8 *param_2);
float recovered_100019e4(byte *in_x0,undefined8 *in_x1);
int recovered_100019fc(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_10001cd0(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001d0c(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001d5c(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
void recovered_10001dfc(byte *in_x0,ulong in_x1,byte *in_x2);
void recovered_10001e24(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001e7c(int param_1);
void recovered_10001fb4(char *param_1,long param_2);
void recovered_1000206c(int param_1);
void recovered_100020f8(void);
void recovered_10002100(void);
void recovered_10002108(undefined *param_1);
void recovered_1000216c(void);
void recovered_100021c0(long param_1);
void recovered_100021ec(void);
bool recovered_10002210(long param_1,long param_2,char *param_3,undefined8 param_4);
undefined8 recovered_10002288(void);
void recovered_1000228c(void);
undefined8 recovered_10002290(void);
undefined4 * recovered_10002298(long param_1,long param_2);
undefined8 recovered_100024d4(char *param_1,void *param_2);
undefined8 recovered_10002524(long param_1,ulong param_2);
undefined4 * recovered_100025ac(long param_1,long param_2,int *param_3);
undefined8 recovered_100025e0(int *param_1);
long recovered_10002624(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_100026d4(int *param_1);
long recovered_100027b8(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_100028c8(int *param_1,ulong param_2,int param_3);
undefined8 recovered_1000295c(long param_1);
undefined8 recovered_10002980(int *param_1);
undefined1 recovered_100029f4(long param_1);
undefined1 recovered_10002a00(long param_1);
void recovered_10002a0c(long param_1);
uint recovered_10002a20(uint param_1,long param_2);
undefined8 recovered_10002a44(long param_1);
undefined8 recovered_10002a7c(char *param_1);
undefined8 recovered_10002ac0(long param_1,long param_2);
undefined8 recovered_10002b5c(char *param_1,void *param_2,undefined8 param_3);
undefined8 recovered_10002bbc(long param_1,long *param_2,ulong *param_3);
bool recovered_10002c5c(long param_1,long param_2,long param_3);
undefined8 recovered_10002c88(void);
void recovered_10002c8c(void);
undefined8 recovered_10002c90(void);
undefined8 recovered_10002c94(void);
undefined8 recovered_10002c98(void);
char * recovered_10002c9c(long param_1,char param_2,long param_3);
int recovered_10002cc0(byte *param_1,byte *param_2,long param_3);
char * recovered_10002cf0(int param_1);
undefined8 recovered_10002d90(void);
undefined8 recovered_10002d94(void);
void recovered_10002d98(void);
bool recovered_10002dac(int param_1);
void recovered_10002e78(long param_1);
__attribute__((naked,returns_twice)) int recovered_10002e8c(void *context);
__attribute__((naked,noreturn)) void recovered_10002eb8(void *context,int value);
void recovered_10002eec(void);
undefined8 recovered_10002f00(void);
void recovered_10002f08(long param_1);
long recovered_10002f18(long param_1);
void * recovered_10002f38(ulong size);
void * recovered_10002f68(ulong size);
void recovered_10002f6c(void *pointer);
void recovered_10002f84(void *pointer);
void recovered_10002f9c(void *pointer,ulong size);
void recovered_10002fb4(void *pointer,ulong size);
undefined8 recovered_10002fcc(void);
uint recovered_10002fd4(uint *param_1);
void recovered_10002fe4(ulong *param_1);
void recovered_10002ff4(void);
undefined1 * recovered_10002ff8(ulong param_1);
void recovered_10003040(long param_1);
long recovered_10003050(long param_1);
void recovered_10003058(void);
void recovered_100030b0(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_100030d0(undefined8 *param_1);
void recovered_10003134(void);
void recovered_10003164(undefined8 *param_1);
void recovered_10003178(undefined8 *param_1);
void recovered_100031a4(undefined8 *in_x0);
void recovered_100031b0(void);
undefined8 recovered_100031bc(undefined8 *param_1);
undefined8 recovered_100031dc(undefined8 *param_1);
undefined8 recovered_10003278(undefined8 *in_x0);
undefined8 recovered_10003284(void);
void recovered_1000328c(void);
long recovered_10003298(long *param_1,undefined8 param_2,long *param_3);
bool recovered_100032d8(long *param_1,long *param_2);
void recovered_10003364(void);
undefined8 recovered_10003368(void);
bool recovered_10003370(int param_1);
bool recovered_10003380(uint param_1);
bool recovered_100033b8(uint param_1);
bool recovered_100033d4(ulong param_1);
bool recovered_100033ec(uint param_1);
bool recovered_10003404(ulong param_1);
bool recovered_1000341c(ulong param_1);
uint128 recovered_10003434(double param_1);
long recovered_10003480(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100035c4(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100035c8(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_100037a0(uint param_1,long *param_2);
ulong recovered_10003894(undefined8 *param_1);
ulong recovered_100038cc(byte *param_1,long param_2);
ulong recovered_100038f8(undefined8 *param_1);
long * recovered_10003970(char *param_1,uint param_2,uint param_3);
long * recovered_10003ab8(long *param_1,long param_2);
void recovered_10003af4(undefined8 *param_1);
void recovered_10003b1c(undefined8 *param_1);
ulong recovered_10003df4(long param_1);
void recovered_10003e70(long param_1);
void recovered_10003ee8(long param_1);
long recovered_10003f50(undefined8 *param_1);
void recovered_10003fd0(long param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10004004(long param_1,int param_2,int param_3);
void recovered_10004040(long param_1);
void recovered_1000406c(long param_1,undefined1 *param_2);
void recovered_100040a4(long param_1,uint *param_2);
void recovered_1000410c(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10004120(long param_1);
void recovered_10004344(void);
byte recovered_10004650(long param_1);
void recovered_10004684(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_1000469c(long param_1);
void recovered_10004788(long param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_100047c0(long param_1,uint param_2);
void recovered_100047e0(void);
void recovered_1000495c(void);
void recovered_10004960(void);
void recovered_10004964(void);
undefined8 recovered_10004968(void);
void recovered_1000496c(void);
undefined8 recovered_10004970(void);
long recovered_10004974(char *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10004c6c(char *param_1,void *param_2);
bool recovered_10004cc0(undefined8 *param_1,char *param_2);
void recovered_10004cd8(void *param_1);
undefined8 recovered_10004d18(float param_1,char *param_2);
void recovered_10004d6c(float param_1,void *param_2);
undefined8 *
recovered_10004dbc(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6);
void recovered_10004f00(void *param_1);
undefined8 * recovered_10004f40(undefined8 *param_1);
void recovered_10004f68(long *param_1,long param_2,ulong param_3);
long recovered_10005050(long param_1);
undefined8 recovered_10005074(long *param_1,long param_2,long *param_3);
void recovered_100050c0(long *param_1);
void recovered_100050f8(long *param_1,ulong param_2);
undefined8 * recovered_10005170(undefined8 *param_1,long param_2,ulong param_3);
char * recovered_100051a4(ulong size);
bool recovered_100051c0(int param_1);
undefined8 * recovered_10005208(undefined8 *param_1);
void recovered_10005234(long *param_1,ulong param_2);
void recovered_1000529c(long *param_1,ulong param_2);
void recovered_10005310(long param_1);
undefined8 * recovered_1000531c(undefined8 *param_1,undefined8 *param_2);
ulong recovered_1000535c(uint param_1,uint param_2,int param_3);
void recovered_100053a8(int param_1);
void recovered_100053d0(undefined8 *param_1,char param_2,ulong param_3);
void recovered_10005408(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_10005444(undefined8 *param_1,char *param_2);
void recovered_10005494(long *param_1);
void recovered_100054d0(long *param_1,undefined1 param_2);
void recovered_10005534(long *param_1,undefined8 *param_2);
ulong recovered_1000554c(long *param_1,char param_2,ulong param_3);
bool recovered_10005580(char *param_1,long param_2,char *param_3,long param_4);
long recovered_100055b8(long *param_1,undefined8 *param_2);
void recovered_1000562c(long *param_1,ulong param_2);
void recovered_100056c0(long param_1);
void recovered_100056d4(undefined8 *param_1,undefined8 *param_2);
long * recovered_100056f0(long *param_1,long param_2,ulong param_3);
long * recovered_100057d4(long *param_1);
void recovered_10005800(long *param_1);
undefined8 * recovered_10005854(undefined8 *param_1,long param_2);
long recovered_10005898(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
