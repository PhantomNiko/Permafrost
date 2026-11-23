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
#define Yield(...) __asm__ volatile("yield":::"memory")
static inline uint64_t NEON_umin(uint64_t a,uint64_t b,unsigned bytes){uint64_t out=0,mask=UINT64_MAX>>(64-bytes*8);for(unsigned i=0;i<8/bytes;i++){unsigned shift=i*bytes*8;uint64_t x=(a>>shift)&mask,y=(b>>shift)&mask;out|=(x<y?x:y)<<shift;}return out;}
extern uint8_t pf_module_state[];
void recovered_10000658(void);
void recovered_10000684(void);
void recovered_100006bc(void);
bool recovered_10000940(ulong *param_1,ulong *param_2,long param_3);
bool recovered_1000097c(ulong *param_1,ulong *param_2,long param_3);
bool recovered_10000b78(ulong param_1,ulong param_2);
ulong recovered_10000bb4(void);
long recovered_10000c14(void);
ulong recovered_10000c68(void);
long recovered_10000cb8(void);
ulong * recovered_10000cfc(long param_1);
ulong * recovered_10000d28(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000ee4(long param_1,ulong *param_2);
ulong * recovered_10000f1c(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000f60(long param_1);
void recovered_10000f88(long param_1);
ulong * recovered_10000ffc(ulong *param_1,ulong param_2);
ulong recovered_100011a4(ulong param_1,uint param_2);
ulong recovered_100011e8(ulong param_1,uint param_2);
long recovered_10001234(long param_1,uint param_2);
ulong recovered_10001284(ulong param_1,ulong param_2);
ulong recovered_1000128c(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_100012ec(undefined8 param_1,undefined8 param_2);
long recovered_1000130c(ulong param_1,ulong param_2);
long recovered_1000134c(long param_1,long param_2);
void recovered_10001398(void);
int recovered_100013a0(int param_1);
void * recovered_100013ac(uintptr_t size);
void recovered_100013f0(void *pointer);
void * recovered_10001430(void *pointer,uintptr_t size);
void * recovered_1000147c(void *dst,void *src,ulong bytes);
void * recovered_10001554(void *dst,void *src,ulong bytes);
void * recovered_10001668(void *dst,int byte,ulong bytes);
void recovered_10001700(undefined1 *param_1,long param_2);
void recovered_10001704(undefined1 *param_1,long param_2);
char * recovered_10001708(long param_1,char param_2,long param_3);
int recovered_1000172c(byte *param_1,byte *param_2,long param_3);
int recovered_10001894(long param_1,long param_2);
bool recovered_100018c0(int param_1);
bool recovered_100018d0(int param_1);
bool recovered_100018e0(uint param_1);
bool recovered_100018f4(uint param_1);
bool recovered_10001910(int param_1);
bool recovered_10001920(int param_1);
int recovered_10001930(int param_1);
int recovered_10001944(int param_1);
ulong recovered_10001958(char *text);
int recovered_1000197c(byte *param_1,byte *param_2);
int recovered_100019a4(byte *param_1,byte *param_2);
void recovered_100019a8(long param_1,long param_2);
long recovered_100019c0(long param_1);
char * recovered_100019fc(char *param_1,char param_2);
long recovered_10001a24(long param_1,char *param_2);
long recovered_10001a64(long param_1,char *param_2);
char * recovered_10001aa4(char *param_1,char *param_2);
char * recovered_10001ae4(char *param_1,char *param_2);
undefined * recovered_10001b20(void);
undefined ** recovered_10001b2c(void);
undefined8 recovered_10001b38(undefined8 *param_1);
double recovered_10001bb0(double param_1,uint param_2);
uint128 recovered_10001be4(double param_1,int *param_2);
uint128 recovered_10001c58(double param_1,double param_2);
uint128 recovered_10001c7c(double param_1,double param_2);
uint128 recovered_10001cdc(double param_1);
uint128 recovered_10001cf8(double param_1);
uint128 recovered_10001d24(double param_1);
uint128 recovered_10001d60(double param_1);
long recovered_10001e0c(double param_1);
uint128 recovered_10001e20(double param_1);
void recovered_10001e74(double param_1);
uint128 recovered_10001eb8(double param_1);
uint128 recovered_10001f04(double param_1);
longlong recovered_10001f14(double value);
ulonglong recovered_10001f74(double value);
double recovered_10001fc4(ulonglong value);
double recovered_10001fec(longlong value);
float recovered_10002010(float param_1,float param_2);
float recovered_10002044(int *in_x0,float param_2);
float recovered_1000205c(uint in_w0,float param_2);
float recovered_10002074(float param_1,float param_2);
float recovered_10002090(float param_1);
float recovered_100020b4(float param_1);
uint128 recovered_100020cc(double param_1);
float recovered_100020f4(float param_1);
float recovered_1000210c(float param_1);
float recovered_10002124(float param_1);
long recovered_1000213c(double param_1);
float recovered_10002150(float param_1);
float recovered_10002168(float param_1);
float recovered_10002180(float param_1);
long recovered_10002190(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10002294(int param_1);
long recovered_100022c4(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_100023e8(byte *param_1,undefined8 *param_2);
float recovered_10002578(byte *in_x0,undefined8 *in_x1);
int recovered_10002590(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_10002b34(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002b70(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
void recovered_10002c10(long *param_1,ulong *param_2,int *param_3,char *param_4);
int recovered_10002c5c(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10002c84(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002d08(long param_1,ulong param_2,ulong *param_3);
void recovered_10002d88(ulong param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10002dd8(ulong *param_1,long param_2);
void recovered_10002e2c(ulong *param_1);
undefined8 recovered_10002e4c(ulong *param_1);
bool recovered_10002ed4(int param_1);
void recovered_1000306c(char *param_1,long param_2);
void recovered_10003124(int param_1);
void recovered_100031b0(void);
void recovered_100031b8(void);
void recovered_100031c0(undefined *param_1);
void recovered_10003224(void);
void recovered_10003248(long param_1);
void recovered_10003274(void);
uchar recovered_10003298(long param_1,long param_2,char *param_3,undefined8 param_4);
undefined8 recovered_10003310(void);
void recovered_10003314(void);
undefined8 recovered_10003318(void);
undefined4 * recovered_10003320(long param_1,long param_2);
undefined8 recovered_1000355c(char *param_1,void *param_2);
undefined8 recovered_100035ac(long param_1,ulong param_2);
undefined4 * recovered_10003634(long param_1,long param_2,int *param_3);
undefined8 recovered_10003668(int *param_1);
long recovered_100036ac(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_100037e0(int *param_1);
long recovered_100038c4(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_100039d4(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003a68(long param_1);
undefined8 recovered_10003a8c(int *param_1);
undefined1 recovered_10003b00(long param_1);
undefined1 recovered_10003b0c(long param_1);
void recovered_10003b18(long param_1);
uint recovered_10003b2c(uint param_1,long param_2);
undefined8 recovered_10003b50(long param_1);
undefined8 recovered_10003b88(char *param_1);
undefined8 recovered_10003bcc(long param_1,long param_2);
undefined8 recovered_10003c68(char *param_1,void *param_2,undefined8 param_3);
undefined8 recovered_10003cc8(long param_1,long *param_2,ulong *param_3);
bool recovered_10003d68(long param_1,long param_2,long param_3);
undefined8 recovered_10003d94(void);
void recovered_10003d98(void);
undefined8 recovered_10003d9c(void);
undefined8 recovered_10003da0(void);
undefined8 recovered_10003da4(void);
int recovered_10003da8(byte *param_1,byte *param_2,long param_3);
char * recovered_10003dd8(int param_1);
undefined8 recovered_10003e78(void);
undefined8 recovered_10003e7c(void);
void recovered_10003e80(void);
bool recovered_10003e94(int param_1);
__attribute__((naked,noreturn)) void recovered_10003f60(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10003f74(void *context);
__attribute__((naked,noreturn)) int recovered_10003fd0(long context,int value);
void recovered_10004034(void);
undefined8 recovered_10004048(void);
void recovered_10004050(long param_1);
long recovered_10004060(long param_1);
void * recovered_1000408c(ulong size);
void * recovered_100040bc(ulong size);
void recovered_100040c0(void *pointer);
void recovered_100040d8(void *pointer);
void recovered_100040f0(void *pointer,ulong size);
void recovered_10004108(void *pointer,ulong size);
undefined8 recovered_10004120(void);
uint recovered_10004128(uint *param_1);
void recovered_10004138(ulong *param_1);
void recovered_10004148(void);
undefined1 * recovered_1000414c(ulong param_1);
void recovered_100041f4(long param_1);
void recovered_10004224(long param_1);
long recovered_10004264(long param_1);
long recovered_10004294(long param_1);
void recovered_1000429c(void);
void recovered_100042fc(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_1000431c(undefined8 *param_1);
void recovered_10004380(void);
void recovered_100043b0(undefined8 *param_1);
void recovered_100043c4(undefined8 *param_1);
void recovered_100043f0(undefined8 *in_x0);
void recovered_100043fc(void);
undefined8 recovered_10004408(undefined8 *param_1);
undefined8 recovered_10004434(undefined8 *param_1);
undefined8 recovered_100044d0(undefined8 *in_x0);
undefined8 recovered_100044dc(void);
void recovered_100044e4(void);
long recovered_100044f0(long *param_1,undefined8 param_2,long *param_3);
uchar recovered_10004530(long *param_1,long *param_2);
void recovered_100045bc(void);
undefined8 recovered_100045c0(void);
bool recovered_100045c8(int param_1);
bool recovered_100045d8(uint param_1);
bool recovered_10004610(uint param_1);
bool recovered_1000462c(ulong param_1);
bool recovered_10004644(uint param_1);
bool recovered_1000465c(ulong param_1);
bool recovered_10004674(ulong param_1);
double recovered_1000468c(double value);
float recovered_1000474c(float value);
long double recovered_10004768(long double value);
double recovered_1000476c(long end,long start);
uint128 recovered_1000477c(double param_1);
long recovered_100047c8(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_1000490c(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10004910(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10004ae8(uint param_1,long *param_2);
ulong recovered_10004bdc(undefined8 *param_1);
ulong recovered_10004c10(byte *param_1,long param_2);
ulong recovered_10004c38(undefined8 *param_1);
undefined8 * recovered_10004cb8(undefined8 *param_1);
long * recovered_10004cbc(char *param_1,uint param_2,uint param_3);
long * recovered_10004eac(long *param_1,long param_2);
ulong recovered_10004ee8(ulong *param_1);
void recovered_100050a4(void);
void recovered_100050d8(undefined8 *param_1);
void recovered_10005108(undefined8 *param_1);
ulong recovered_10005404(long param_1);
void recovered_1000549c(long param_1);
undefined8
recovered_100054d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
void recovered_10005554(long param_1);
long recovered_100055e0(undefined8 *param_1);
void recovered_10005660(long param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10005694(long param_1,int param_2,int param_3);
void recovered_100056e8(long param_1);
void recovered_10005714(long param_1,undefined1 *param_2);
void recovered_1000575c(long param_1,uint *param_2);
long recovered_10005800(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10005814(long param_1);
void recovered_10005898(long param_1);
ulong recovered_10005ccc(long param_1);
byte recovered_10006074(long param_1);
void recovered_100061c4(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_100061ec(long param_1);
void recovered_100062d4(long param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_1000630c(long param_1,uint param_2);
byte recovered_100063a8(long param_1);
void recovered_100063f8(void);
void recovered_100068a4(void);
undefined8 recovered_10006a20(void);
void recovered_10006a58(void);
void recovered_10006a5c(void);
void recovered_10006a60(void);
undefined8 recovered_10006a64(void);
void recovered_10006a68(void);
undefined8 recovered_10006a6c(void);
void recovered_10006b6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 param_4,ulong param_5);
long recovered_10006d78(char *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_10006eb0(char *param_1,void *param_2);
bool recovered_10006f00(undefined8 *param_1,char *param_2);
void recovered_10006f18(void *param_1);
undefined8 recovered_10006f54(float param_1,char *param_2);
void recovered_10006fa0(float param_1,void *param_2);
undefined8 *
recovered_10006ff0(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6);
void recovered_10007128(void *param_1);
uint * recovered_10007164(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6);
void recovered_1000720c(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7);
void recovered_10007258(void *param_1);
void recovered_10007298(int *param_1,int *param_2,int param_3,int param_4);
uint * recovered_100073d0(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                         uint param_6);
void *recovered_10007540(float size);
undefined1 recovered_10007748(long param_1);
void recovered_1000778c(long param_1,undefined4 *param_2,undefined4 *param_3);
bool recovered_10007804(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10007840(undefined8 param_1,undefined8 param_2,undefined8 param_3);
ulong recovered_100078a0(long param_1);
byte recovered_10007938(long param_1,uint param_2);
undefined8 * recovered_100079a4(undefined8 *param_1);
void recovered_100079cc(long *param_1,long param_2,ulong param_3);
long recovered_10007ab4(long param_1);
undefined8 recovered_10007ad8(long *param_1,long param_2,long *param_3);
void recovered_10007b24(long *param_1);
void recovered_10007b5c(long *param_1,ulong param_2);
undefined8 * recovered_10007bd4(undefined8 *param_1,long param_2,ulong param_3);
char * recovered_10007c08(ulong size);
uchar recovered_10007c24(int param_1);
void recovered_10007c6c(long *param_1,ulong param_2);
void recovered_10007cd4(long *param_1,ulong param_2);
void recovered_10007d48(long param_1);
undefined8 * recovered_10007d54(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10007d94(undefined8 param_1);
undefined8 recovered_10007dd4(long param_1,long param_2,uint *param_3);
ulong recovered_10007e58(uint param_1,uint param_2,uint param_3,ulong param_4,uint param_5,
                        int param_6);
ulong recovered_10007ebc(uint param_1,uint param_2,int param_3);
uint recovered_10007f04(long param_1,ulong param_2,ulong param_3,ulong param_4);
void recovered_10007f68(long *param_1,uint param_2,uint param_3,uint param_4);
long recovered_10007fb8(ulong param_1,uint param_2,ulong param_3);
void recovered_10007ff0(int param_1);
void recovered_10008018(undefined8 *param_1,char param_2,ulong param_3);
void recovered_10008050(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
uchar recovered_1000808c(undefined8 *param_1,char *param_2);
void recovered_100080dc(long *param_1);
void recovered_10008118(long *param_1,undefined1 param_2);
void recovered_1000817c(long *param_1,undefined8 *param_2);
ulong recovered_10008194(long *param_1,char param_2,ulong param_3);
bool recovered_100081c8(char *param_1,long param_2,char *param_3,long param_4);
long recovered_10008200(long *param_1,undefined8 *param_2);
void recovered_10008274(long *param_1,ulong param_2);
void recovered_10008308(long param_1);
void recovered_1000831c(undefined8 *param_1,undefined8 *param_2);
long * recovered_10008338(long *param_1,long param_2,ulong param_3);
long * recovered_1000841c(long *param_1);
void recovered_10008448(long *param_1);
undefined8 * recovered_1000849c(undefined8 *param_1,long param_2);
undefined8 * recovered_100084e0(undefined8 *param_1);
undefined8 * recovered_1000850c(undefined8 *param_1);
long recovered_10008538(long *param_1,undefined1 *param_2);
long recovered_100085a0(long *param_1,undefined4 *param_2);
void recovered_10008604(long *param_1,ulong param_2);
void * recovered_10008678(long param_1);
long recovered_10008688(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
undefined8 recovered_1000886c(void);

/* Original analysis identifiers for manual recovery units. */
