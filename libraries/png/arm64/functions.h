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
#define pf_varargs_10001dac_1 recovered_10001dac
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
ulong recovered_10000a98(ulong param_1,ulong param_2);
ulong recovered_10000aa0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b00(undefined8 param_1,undefined8 param_2);
long recovered_10000b20(ulong param_1,ulong param_2);
long recovered_10000b60(long param_1,long param_2);
void recovered_10000bac(void);
int recovered_10000bb4(int param_1);
void * recovered_10000bc0(size_t size);
void recovered_10000c04(void *pointer);
void * recovered_10000c48(void *pointer,size_t size);
void * recovered_10000c94(void *dst,void *src,ulong bytes);
void * recovered_10000cb4(void *dst,void *src,ulong bytes);
void * recovered_10000d04(void *dst,int byte,ulong bytes);
void recovered_10000d20(undefined1 *param_1,long param_2);
void recovered_10000d34(undefined1 *param_1,long param_2);
int recovered_10000d48(byte *param_1,byte *param_2,long param_3);
bool recovered_10000d70(int param_1);
bool recovered_10000d80(int param_1);
bool recovered_10000d90(uint param_1);
bool recovered_10000da4(uint param_1);
bool recovered_10000dc0(int param_1);
bool recovered_10000dd0(int param_1);
int recovered_10000de0(int param_1);
int recovered_10000df4(int param_1);
ulong recovered_10000e08(char *text);
int recovered_10000e2c(byte *param_1,byte *param_2);
int recovered_10000e54(byte *param_1,byte *param_2);
void recovered_10000e58(long param_1,long param_2);
long recovered_10000e70(long param_1);
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
void recovered_10001290(double param_1);
double recovered_100012d4(double value);
double recovered_10001320(double value);
ulong recovered_10001330(double param_1);
ulong recovered_10001390(double param_1);
void recovered_100013e0(ulong param_1);
uint128 recovered_10001408(long param_1);
float recovered_1000142c(float left,float right);
float recovered_10001460(int *in_x0,float param_2);
float recovered_10001478(uint in_w0,float param_2);
float recovered_10001490(float left,float right);
float recovered_100014ac(float value);
float recovered_100014d0(float value);
double recovered_100014e8(double value);
float recovered_10001510(float value);
float recovered_10001528(float value);
float recovered_10001540(float param_1);
long recovered_10001558(double param_1);
float recovered_1000156c(float value);
float recovered_10001584(float value);
float recovered_1000159c(float value);
long recovered_100015ac(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_100016b0(int param_1);
long recovered_100016e0(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_10001804(char *text,char **end);
float recovered_10001994(char *text,char **end);
int recovered_100019ac(char *out,ulong capacity,char *format,void *args);
void recovered_10001c80(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001cbc(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001d0c(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10001dac(char *out,unsigned long capacity,char *format,...);
void recovered_10001dd4(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001e2c(int param_1);
void recovered_10001f64(char *param_1,long param_2);
void recovered_1000201c(int param_1);
void recovered_100020a8(void);
void recovered_100020b0(void);
void recovered_100020b8(undefined *param_1);
void recovered_1000211c(void);
void recovered_10002170(long param_1);
void recovered_1000219c(void);
bool recovered_100021c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002238(void);
void recovered_1000223c(void);
undefined8 recovered_10002240(void);
undefined4 * recovered_10002248(long param_1,long param_2);
undefined8 recovered_10002484(undefined8 param_1,undefined8 param_2);
undefined8 recovered_100024d4(long param_1,ulong param_2);
undefined4 * recovered_1000255c(long param_1,long param_2,int *param_3);
undefined8 recovered_10002590(int *param_1);
long recovered_100025d4(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_10002684(int *param_1);
long recovered_10002768(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10002878(int *param_1,ulong param_2,int param_3);
undefined8 recovered_1000290c(long param_1);
undefined8 recovered_10002930(int *param_1);
undefined1 recovered_100029a4(long param_1);
undefined1 recovered_100029b0(long param_1);
void recovered_100029bc(long param_1);
uint recovered_100029d0(uint param_1,long param_2);
undefined8 recovered_100029f4(long param_1);
undefined8 recovered_10002a2c(undefined8 param_1);
undefined8 recovered_10002a70(long param_1,long param_2);
undefined8 recovered_10002b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10002b6c(long param_1,long *param_2,ulong *param_3);
bool recovered_10002c0c(long param_1,long param_2,long param_3);
undefined8 recovered_10002c38(void);
void recovered_10002c3c(void);
undefined8 recovered_10002c40(void);
undefined8 recovered_10002c44(void);
undefined8 recovered_10002c48(void);
char * recovered_10002c4c(long param_1,char param_2,long param_3);
int recovered_10002c70(byte *param_1,byte *param_2,long param_3);
char * recovered_10002ca0(int param_1);
undefined8 recovered_10002d40(void);
undefined8 recovered_10002d44(void);
void recovered_10002d48(void);
bool recovered_10002d5c(int param_1);
void recovered_10002e28(long param_1);
__attribute__((naked,returns_twice)) int recovered_10002e3c(void *context);
__attribute__((naked,noreturn)) void recovered_10002e68(void *context,int value);
void recovered_10002e9c(void);
undefined8 recovered_10002eb0(void);
void recovered_10002eb8(long param_1);
long recovered_10002ec8(long param_1);
void * recovered_10002ee8(ulong size);
void * recovered_10002f18(ulong size);
void recovered_10002f1c(void *pointer);
void recovered_10002f34(void *pointer);
void recovered_10002f4c(void *pointer,ulong size);
void recovered_10002f64(void *pointer,ulong size);
undefined8 recovered_10002f7c(void);
uint recovered_10002f84(uint *param_1);
void recovered_10002f94(ulong *param_1);
void recovered_10002fa4(void);
undefined1 * recovered_10002fa8(ulong param_1);
void recovered_10002ff0(long param_1);
long recovered_10003000(long param_1);
void recovered_10003008(void);
void recovered_10003060(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10003080(undefined8 *param_1);
void recovered_100030e4(void);
void recovered_10003114(undefined8 *param_1);
void recovered_10003128(undefined8 *param_1);
void recovered_10003154(undefined8 *in_x0);
void recovered_10003160(void);
undefined8 recovered_1000316c(undefined8 *param_1);
undefined8 recovered_1000318c(undefined8 *param_1);
undefined8 recovered_10003228(undefined8 *in_x0);
undefined8 recovered_10003234(void);
void recovered_1000323c(void);
long recovered_10003248(long *param_1,undefined8 param_2,long *param_3);
bool recovered_10003288(long *param_1,long *param_2);
void recovered_10003314(void);
undefined8 recovered_10003318(void);
bool recovered_10003320(int param_1);
bool recovered_10003330(uint param_1);
bool recovered_10003368(uint param_1);
bool recovered_10003384(ulong param_1);
bool recovered_1000339c(uint param_1);
bool recovered_100033b4(ulong param_1);
bool recovered_100033cc(ulong param_1);
double recovered_100033e4(double value);
long recovered_10003430(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003574(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10003578(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10003750(uint param_1,long *param_2);
ulong recovered_10003844(undefined8 *param_1);
ulong recovered_1000387c(byte *param_1,long param_2);
ulong recovered_100038a8(undefined8 *param_1);
undefined4 recovered_10003920(byte *param_1,ulong param_2);
bool recovered_10003a30(byte *param_1,ulong param_2);
uchar recovered_10003b98(void *data,ulong length,void *image);
undefined8 * recovered_10007138(undefined8 *param_1,undefined8 *param_2);
bool recovered_10007164(uint *param_1,long *param_2,long *param_3,long *param_4);
undefined8 * recovered_10007c38(undefined8 *param_1,undefined8 *param_2);
long recovered_10007c88(long param_1);
ulong recovered_10007cc8(long param_1,uint *param_2);
int recovered_10007de8(const char *name,const uint8_t *pixels,int width,int height);
bool recovered_100081fc(uint *param_1,long param_2,long param_3);
ulong recovered_10008234(uint *param_1,byte *param_2,byte *param_3,ulong param_4);
undefined4 recovered_100082e0(long param_1,long param_2,ulong param_3,ulong param_4);
byte recovered_100082e4(long param_1,long param_2,ulong param_3,uint param_4);
uint recovered_10008544(long param_1,long param_2,uint param_3,uint param_4);
uint recovered_100086d0(long param_1,long param_2,uint param_3,int param_4);
uint recovered_10008c98(long param_1,undefined1 *param_2,uint param_3,uint param_4);
uint recovered_1000902c(long param_1,long param_2,uint param_3,uint param_4);
void recovered_10009148(long *param_1,ulong param_2,undefined1 *param_3);
uint recovered_10009150(uint param_1,uint param_2);
void recovered_100091c4(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10009248(long *param_1,ulong param_2);
void recovered_100092b0(long *param_1,ulong param_2);
void * recovered_10009324(ulong count);
undefined8 * recovered_10009330(undefined8 *param_1,ulong in_x1);
undefined8 recovered_1000935c(byte *param_1,int param_2,uint param_3,byte *param_4);
undefined8 recovered_10009434(undefined8 *param_1,byte *param_2);
long recovered_100095a8(long param_1);
void recovered_100095e0(long param_1);
long * recovered_10009604(long *param_1);
long recovered_10009628(long param_1);
long recovered_10009658(long param_1);
void recovered_1000967c(long *param_1);
long recovered_100096c4(long param_1,long param_2);
undefined8 * recovered_10009710(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10009760(undefined1 *param_1,undefined1 *param_2);
void recovered_100097b0(undefined8 *param_1,undefined8 *param_2);
long * recovered_100097cc(long *param_1,long *param_2);
long recovered_1000982c(long *param_1,undefined4 *param_2);
void recovered_10009890(long *param_1,ulong param_2);
void * recovered_10009904(ulong count);
undefined1 recovered_10009914(long *param_1,long param_2,int param_3,int param_4);
int recovered_1000995c(long *param_1,char *param_2,undefined4 *param_3);
bool recovered_10009a10(long *param_1,uint param_2,uint *param_3);
int recovered_10009a70(uint param_1,uint param_2);
undefined8 recovered_10009a98(long *param_1,uint *param_2);
undefined8 * recovered_10009b24(undefined8 *param_1);
int recovered_10009b50(uchar *data,ulong size,ulonglong *position,uint *out);
bool recovered_10009b80(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
void recovered_10009c14(long param_1,long param_2);
bool recovered_10009ca0(long param_1,ulong param_2,ulong param_3,uint *param_4);
uint recovered_10009cdc(uint *param_1);
long recovered_10009ce8(long *param_1,undefined8 *param_2);
void recovered_10009d4c(long *param_1,ulong param_2);
void * recovered_10009dc0(ulong count);
undefined8 * recovered_10009dd0(undefined8 *param_1,ulong in_x1,undefined1 *in_x2);
void recovered_10009dfc(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_10009e10(long *param_1,ulong param_2);
void recovered_10009e3c(long *param_1,ulong param_2);
long recovered_10009ea0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_10009f98(long *param_1,long *param_2);
undefined8 recovered_1000a75c(long *param_1,uint param_2,uint *param_3);
undefined8 recovered_1000a7d8(long *param_1,long param_2,long param_3,long *param_4);
long recovered_1000a948(long param_1);
uint recovered_1000a968(long param_1,ulong param_2);
long recovered_1000a9cc(long *param_1,undefined1 *param_2);
uint recovered_1000aa34(long *param_1,long param_2,uint *param_3);
long recovered_1000ab30(long *param_1,undefined1 *param_2);
undefined8 recovered_1000ab98(long *param_1,uint *param_2,undefined8 param_3);
long * recovered_1000acfc(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_1000ad28(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_1000ada8(long *param_1,ulong param_2);
undefined8 * recovered_1000ae0c(undefined8 *param_1,undefined8 *param_2);
void recovered_1000ae50(long *param_1,ulong param_2,undefined2 *param_3);
undefined8 * recovered_1000ae58(undefined8 *param_1,undefined8 *param_2);
void recovered_1000aea8(long *param_1,ulong param_2,undefined2 *param_3);
void recovered_1000af28(long *param_1,ulong param_2);
void recovered_1000af8c(long *param_1,ulong param_2);
void * recovered_1000b000(ulong count);
long recovered_1000b010(long *param_1,undefined4 *param_2);
long * recovered_1000b074(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_1000b0ac(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
undefined8 * recovered_1000b1b4(undefined8 *param_1);
undefined8 * recovered_1000b1e0(undefined8 *param_1);
uint recovered_1000b204(uint param_1,byte *param_2,long param_3);
void recovered_1000b294(long *param_1,undefined8 *param_2);
void recovered_1000b2f4(long *param_1);
void recovered_1000b340(long *param_1,ulong param_2);
int recovered_1000b3b8(long param_1);
ulong recovered_1000b3ec(long *param_1,long *param_2);
bool recovered_1000b494(long param_1,long param_2,ulong param_3);
undefined8
recovered_1000b4f0(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6);
void recovered_1000b6c0(undefined8 *param_1);
void recovered_1000b6e4(int param_1,long param_2,long *param_3,long *param_4);
undefined8 recovered_1000b800(uint *param_1,undefined1 param_2,undefined8 *param_3);
long recovered_1000b864(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_1000b95c(long param_1,long param_2,long param_3);
void recovered_1000bb18(long param_1,int *param_2,int *param_3,long param_4,long param_5);
undefined8 * recovered_1000bc78(undefined8 *param_1,long param_2,long param_3);
uint recovered_1000bcd4(int value);
void recovered_1000bcf8(long param_1,long param_2,ulong param_3);
void recovered_1000bd08(long param_1,uint param_2,uint param_3);
void recovered_1000bd78(long *param_1,char param_2);
void recovered_1000bdc0(long *in_x0,long in_x1,undefined1 *in_x2,long in_x3);
void recovered_1000bdc8(long *param_1,uint param_2);
void recovered_1000bdec(long *param_1,long param_2,uint param_3);
long recovered_1000be0c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long * recovered_1000bf04(long *param_1,ulong param_2);
void recovered_1000bf30(long *param_1,ulong param_2);
void recovered_1000bf98(long *param_1,ulong param_2);
void * recovered_1000c00c(ulong count);
void recovered_1000c01c(long *param_1,undefined4 param_2);
undefined8 * recovered_1000c03c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 * recovered_1000c074(undefined8 *param_1);

/* Original analysis identifiers for manual recovery units. */
