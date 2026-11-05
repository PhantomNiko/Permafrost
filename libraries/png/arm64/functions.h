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
void recovered_100005b8(void);
void recovered_100005c4(void);
ulong recovered_1000082c(void);
long recovered_10000878(void);
ulong recovered_100008b8(void);
long recovered_100008f4(void);
ulong * recovered_10000924(long param_1);
ulong recovered_100009b8(ulong param_1,uint param_2);
ulong recovered_100009fc(ulong param_1,uint param_2);
long recovered_10000a48(long param_1,uint param_2);
void recovered_10000a98(ulong param_1,ulong param_2);
ulong recovered_10000aa0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b00(undefined8 param_1,undefined8 param_2);
long recovered_10000b20(ulong param_1,ulong param_2);
long recovered_10000b60(long param_1,long param_2);
void recovered_10000bac(void);
int recovered_10000bb4(int param_1);
void * recovered_10000bc0(ulong size);
void recovered_10000c04(void *buffer);
void * recovered_10000c48(void *buffer,ulong size);
void * recovered_10000c94(void *out,void *data,ulong size);
void * recovered_10000cb4(void *out,void *data,ulong size);
void * recovered_10000d04(void *out,int value,ulong size);
void recovered_10000d20(undefined1 *param_1,long param_2);
void recovered_10000d34(undefined1 *param_1,long param_2);
int recovered_10000d48(void *left,void *right,ulong size);
bool recovered_10000d70(int param_1);
bool recovered_10000d80(int param_1);
bool recovered_10000d90(uint param_1);
bool recovered_10000da4(uint param_1);
bool recovered_10000dc0(int param_1);
bool recovered_10000dd0(int param_1);
int recovered_10000de0(int param_1);
int recovered_10000df4(int param_1);
ulong recovered_10000e08(char *text);
int recovered_10000e2c(char *left,char *right);
int recovered_10000e54(char *left,char *right);
void recovered_10000e58(long param_1,long param_2);
void recovered_10000e70(char *param_1);
char * recovered_10000eac(char *param_1,char param_2);
long recovered_10000ed4(long param_1,char *param_2);
char * recovered_10000f1c(char *param_1,char *param_2);
char * recovered_10000f5c(char *param_1,char *param_2);
undefined * recovered_10000f98(void);
undefined ** recovered_10000fa4(void);
undefined8 recovered_10000fb0(undefined8 *param_1);
double recovered_10000fcc(double param_1,uint param_2);
uint128 recovered_10001000(double param_1,int *param_2);
double recovered_10001074(double left,double right);
double recovered_10001098(double left,double right);
double recovered_100010f8(double value);
double recovered_10001114(double value);
double recovered_10001140(double value);
double recovered_1000117c(double value);
long recovered_10001228(double param_1);
double recovered_1000123c(double value);
double recovered_10001290(double param_1);
double recovered_100012d4(double value);
double recovered_10001320(double value);
float recovered_10001330(float left,float right);
float recovered_10001364(float param_1);
float recovered_1000137c(float param_1);
float recovered_10001394(float left,float right);
float recovered_100013b0(float value);
float recovered_100013d4(float value);
double recovered_100013ec(double value);
float recovered_10001414(float value);
float recovered_1000142c(float value);
float recovered_10001444(float value);
long recovered_1000145c(double param_1);
float recovered_10001470(float value);
float recovered_10001488(float value);
float recovered_100014a0(float value);
long recovered_100014b0(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_100015b4(int param_1);
long recovered_100015e4(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_10001708(char *text,char **end);
float recovered_10001898(char *text,char **end);
int recovered_100018b0(char *out,ulong capacity,char *format,void *arguments);
void recovered_10001b84(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001bc0(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10001cb0(char *out,ulong capacity,char *format,...);
void recovered_10001cd8(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001d30(int param_1);
void recovered_10001e68(char *param_1,long param_2);
void recovered_10001f20(int param_1);
void recovered_10001fac(void);
void recovered_10001fb4(void);
void recovered_10001fbc(char *param_1);
void recovered_10002020(void);
void recovered_10002074(char *param_1);
void recovered_100020a0(void);
bool recovered_100020c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_1000213c(void);
void recovered_10002140(void);
undefined8 recovered_10002144(void);
undefined4 * recovered_1000214c(char *param_1,long param_2);
undefined8 recovered_10002388(undefined8 param_1,undefined8 param_2);
undefined8 recovered_100023d8(long param_1,ulong param_2);
void recovered_10002460(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002494(int *param_1);
long recovered_100024d8(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_10002588(int *param_1);
long recovered_1000266c(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_1000277c(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10002810(long param_1);
undefined8 recovered_10002834(int *param_1);
undefined1 recovered_100028a8(long param_1);
undefined1 recovered_100028b4(long param_1);
void recovered_100028c0(long param_1);
uint recovered_100028d4(uint param_1,long param_2);
undefined8 recovered_100028f8(long param_1);
undefined8 recovered_10002930(undefined8 param_1);
undefined8 recovered_10002974(long param_1,long param_2);
undefined8 recovered_10002a10(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10002a70(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10002b10(long param_1,long param_2,long param_3);
undefined8 recovered_10002b3c(void);
void recovered_10002b40(void);
undefined8 recovered_10002b44(void);
undefined8 recovered_10002b48(void);
undefined8 recovered_10002b4c(void);
char * recovered_10002b50(long param_1,char param_2,long param_3);
int recovered_10002b74(char *left,char *right,ulong size);
char * recovered_10002ba4(int param_1);
undefined8 recovered_10002c44(void);
undefined8 recovered_10002c48(void);
void recovered_10002c4c(void);
bool recovered_10002c60(int param_1);
ulonglong recovered_10002d2c(long param_1);
__attribute__((naked, returns_twice)) unsigned long recovered_10002d40(unsigned long *context);
__attribute__((naked,noreturn)) void recovered_10002d6c(unsigned long *context,int value);
void recovered_10002da0(void);
undefined8 recovered_10002db4(void);
void recovered_10002dbc(long param_1);
void recovered_10002dcc(long param_1);
void * recovered_10002dec(ulong size);
void * recovered_10002e1c(ulong size);
void recovered_10002e20(void *data);
void recovered_10002e38(void *data);
void recovered_10002e50(void *param_1);
void recovered_10002e68(void *param_1);
undefined8 recovered_10002e80(void);
uint recovered_10002e88(uint *param_1);
void recovered_10002e98(ulong *param_1);
void recovered_10002ea8(void);
undefined1 * recovered_10002eac(ulong param_1);
void recovered_10002ef4(long param_1);
long recovered_10002f04(long param_1);
void recovered_10002f0c(void);
void recovered_10002f64(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10002f84(undefined8 *param_1);
void recovered_10002fe8(void);
void recovered_10003018(undefined8 *param_1);
void recovered_1000302c(undefined8 *param_1);
void recovered_10003058(undefined8 *in_x0);
void recovered_10003064(void);
undefined8 recovered_10003070(undefined8 *param_1);
undefined8 recovered_10003090(undefined8 *param_1);
undefined8 recovered_1000312c(undefined8 *in_x0);
undefined8 recovered_10003138(void);
void recovered_10003140(void);
long recovered_1000314c(long *param_1,undefined8 param_2,long *param_3);
bool recovered_1000318c(long *param_1,long *param_2);
void recovered_10003218(void);
undefined8 recovered_1000321c(void);
bool recovered_10003224(int param_1);
bool recovered_10003234(uint param_1);
bool recovered_1000326c(uint param_1);
bool recovered_10003288(ulong param_1);
bool recovered_100032a0(uint param_1);
bool recovered_100032b8(ulong param_1);
bool recovered_100032d0(ulong param_1);
double recovered_100032e8(double value);
long recovered_10003334(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003478(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_1000347c(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10003654(uint param_1,long *param_2);
ulong recovered_10003748(undefined8 *param_1);
ulong recovered_10003780(byte *param_1,long param_2);
ulong recovered_100037ac(undefined8 *param_1);
uchar recovered_10003824(void *data,ulong length,void *image);
undefined8 * recovered_100048dc(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10004908(undefined8 *param_1,undefined8 *param_2);
long recovered_10004958(long param_1);
ulong recovered_10004990(long param_1,ulong *param_2);
undefined4 recovered_10004ac0(long param_1,long param_2,ulong param_3,ulong param_4);
bool recovered_10004ed4(uint *param_1,void *param_2,long param_3);
ulong recovered_10004f14(uint *param_1,byte *param_2,byte *param_3,ulong param_4);
uint recovered_10004fcc(uint *param_1);
uint recovered_10004fd8(uint param_1,byte *param_2,long param_3);
void recovered_10005068(long *param_1,undefined1 *param_2,undefined1 *param_3);
long recovered_1000507c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10005174(long *param_1,ulong param_2);
ulonglong recovered_100051e8(ulong param_1);
void recovered_100051f4(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_100051fc(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10005280(long *param_1,ulong param_2);
int recovered_100052e8(long param_1);
bool recovered_1000531c(long *param_1,long *param_2);
bool recovered_10005b18(long param_1,void *param_2,ulong param_3);
undefined8
recovered_10005b78(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6);
void recovered_10005d48(undefined8 *param_1);
undefined8 recovered_10005d70(long *param_1,uint param_2,uint *param_3);
undefined8 recovered_10005df0(long *param_1,long param_2,long param_3,long *param_4);
long recovered_10005f64(long param_1);
uint recovered_10005f88(long param_1,ulong param_2);
long recovered_10005fec(long *param_1,undefined1 *param_2);
uint recovered_10006054(long *param_1,long param_2,uint *param_3);
long recovered_10006150(long *param_1,undefined1 *param_2);
undefined8 recovered_100061b8(long *param_1,uint *param_2,undefined8 param_3);
long * recovered_10006320(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_1000634c(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_100063cc(long *param_1,ulong param_2);
void recovered_10006430(long *param_1,ulong param_2);
ulonglong recovered_100064a4(long param_1);
undefined8 * recovered_100064b4(undefined8 *param_1,undefined8 *param_2);
void recovered_100064fc(long *param_1,ulong param_2,undefined2 *param_3);
undefined8 * recovered_10006504(undefined8 *param_1,undefined8 *param_2);
void recovered_10006554(long *param_1,ulong param_2,undefined2 *param_3);
void recovered_100065d4(long *param_1,ulong param_2);
void recovered_10006638(long *param_1,ulong param_2);
ulonglong recovered_100066ac(long param_1);
long recovered_100066bc(long *param_1,undefined4 *param_2);
long recovered_10006720(long *param_1,undefined4 *param_2);
long * recovered_10006784(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_100067bc(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
undefined8 * recovered_100068c4(undefined8 *param_1);
undefined8 * recovered_100068f0(undefined8 *param_1,ulong in_x1);
undefined8 * recovered_1000691c(undefined8 *param_1);
undefined8 * recovered_10006948(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);

/* Original analysis identifiers for manual recovery units. */
