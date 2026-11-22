/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost recovered SIMD semantics; Pooka's Free Software License. */
typedef struct { uint64_t words[3]; } pf_blob24;
typedef uint64_t uint5;
#define PF_PART16(value,offset) (*(uint128 *)((uint8_t *)&(value)+(offset)))
#if defined(__aarch64__)
static inline void WaitForEvent(void) { __asm__ volatile("wfe"); }
#else
static inline void WaitForEvent(void) { __asm__ volatile("pause"); }
#endif
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
#if defined(__aarch64__)
__attribute__((always_inline)) static inline uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %0,sp":"=r"(value));return value;}
#else
__attribute__((always_inline)) static inline uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %%rsp,%0":"=r"(value));return value;}
#endif
#if defined(__aarch64__)
static inline uintptr_t pf_ctr(void){uintptr_t value;__asm__ volatile("mrs %0,ctr_el0":"=r"(value));return value;}
#else
static inline uintptr_t pf_ctr(void){uintptr_t value;value=4U<<16;return value;}
#endif
#define ctr_el0 pf_ctr()
#if defined(__aarch64__)
static inline void DC_CVAC(uintptr_t value){__asm__ volatile("dc cvac,%0"::"r"(value):"memory");}
#else
static inline void DC_CVAC(uintptr_t value){(void)value;}
#endif
#if defined(__aarch64__)
static inline void pf_dsb(void){__asm__ volatile("dsb sy"::: "memory");}
#else
static inline void pf_dsb(void){__sync_synchronize();}
#endif
#if defined(__aarch64__)
static inline void pf_isb(void){__asm__ volatile("isb"::: "memory");}
#else
static inline void pf_isb(void){__asm__ volatile("":::"memory");}
#endif
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
long recovered_10000ba0(ulong param_1,ulong param_2);
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
double recovered_10001330(double param_1);
double recovered_10001374(double value);
double recovered_100013c0(double value);
float recovered_100013d0(float left,float right);
float recovered_10001404(int *in_x0,float param_2);
float recovered_1000141c(uint in_w0,float param_2);
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
unsigned long recovered_10002cec(void);
bool recovered_10002d00(int param_1);
ulonglong recovered_10002dcc(long param_1);
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
void recovered_100030f8(undefined8 *in_x0);
void recovered_10003104(void);
undefined8 recovered_10003110(undefined8 *param_1);
undefined8 recovered_10003130(undefined8 *param_1);
undefined8 recovered_100031cc(undefined8 *in_x0);
undefined8 recovered_100031d8(void);
ulonglong recovered_100031e0(void);
long recovered_100031ec(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_1000322c(undefined8 *param_1,undefined8 *param_2);
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
undefined8 recovered_1000351c(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_100036f4(uint param_1,long *param_2);
ulong recovered_100037e8(undefined8 *param_1);
ulong recovered_10003820(byte *param_1,long param_2);
ulong recovered_1000384c(undefined8 *param_1);
void recovered_100038c4(undefined8 *param_1);
void recovered_100038dc(long param_1);
void recovered_100038fc(undefined1 *param_1);
void recovered_10003900(undefined1 *param_1);
void recovered_10003904(undefined1 *param_1);
void recovered_10003908(undefined1 *param_1);
void recovered_1000390c(undefined1 *param_1,int param_2);
void recovered_10003910(undefined1 *param_1,int param_2);
void recovered_10003914(undefined1 *param_1,undefined8 param_2);
void recovered_10003918(undefined1 *param_1,undefined8 param_2);
void recovered_1000391c(void *object,double value);
void recovered_10003920(void *object,double value);
void recovered_10003924(undefined1 *param_1,undefined1 param_2);
void recovered_10003928(undefined1 *param_1,undefined1 param_2);
undefined1 * recovered_1000392c(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_10003970(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_10003974(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_1000399c(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_100039a0(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_100039c4(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_100039c8(undefined1 *param_1,long *param_2);
void recovered_100039fc(undefined8 *param_1,long *param_2);
undefined1 * recovered_10003a54(undefined1 *param_1,long *param_2);
undefined1 * recovered_10003a58(undefined1 *param_1,undefined8 *param_2);
void recovered_10003a8c(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10003ad0(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_10003ad4(undefined1 *param_1,long *param_2);
void recovered_10003b08(undefined8 *param_1,long *param_2);
undefined1 * recovered_10003b60(undefined1 *param_1,long *param_2);
undefined1 * recovered_10003b64(undefined1 *param_1,undefined8 *param_2);
void recovered_10003b98(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10003bdc(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_10003be0(undefined1 *param_1,long *in_x1);
undefined1 * recovered_10003c04(undefined1 *param_1,long *in_x1);
void recovered_10003c08(undefined1 *param_1);
void recovered_10003c48(undefined1 *param_1);
byte recovered_10003c98(char *param_1);
long * recovered_10003ccc(long *param_1,undefined1 *param_2);
void recovered_10003fb8(undefined8 *param_1,ulong param_2);
long * recovered_10004014(double param_1,long *param_2);
undefined8 * recovered_1000406c(undefined8 *param_1,undefined8 *param_2);
void recovered_10004070(long *param_1,undefined8 *param_2);
void recovered_10004088(undefined8 *param_1,undefined8 *param_2,long param_3);
void recovered_100040d4(long *param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_10004120(char *param_1);
undefined8 * recovered_100041b8(undefined8 *param_1,long in_x1);
undefined8 * recovered_100041bc(undefined8 *param_1);
double recovered_100041c0(void *object);
char recovered_1000426c(char *param_1);
char * recovered_100042d0(char *param_1);
undefined8 recovered_10004334(char *param_1);
undefined8 recovered_10004394(char *param_1);
undefined8 recovered_100043f4(char *param_1);
undefined8 recovered_10004454(char *param_1);
char * recovered_100044b4(char *param_1);
undefined8 * recovered_10004518(undefined8 *param_1);
void recovered_10004548(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1000459c(undefined8 *param_1);
long * recovered_100045a0(long *param_1);
long * recovered_100045a4(long *param_1);
void recovered_100045a8(undefined8 *param_1,undefined8 *param_2);
void recovered_100045c0(undefined8 *param_1,undefined8 *param_2);
long * recovered_100045d8(long *param_1,long *param_2);
long * recovered_1000460c(long *param_1,long *param_2);
void recovered_10004648(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10004694(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10004810(long *param_1,undefined8 *param_2,long *param_3);
void recovered_10004858(long param_1,undefined8 *param_2,undefined1 *param_3);
long * recovered_10004888(long *param_1,long *param_2);
long recovered_10004ae4(long param_1);
bool recovered_10004b0c(long *param_1,undefined8 *param_2,undefined1 *param_3);
void recovered_10004bb8(undefined1 *param_1,long param_2,undefined8 *param_3);
long * recovered_10004be8(long *param_1,long *param_2);
undefined1 * recovered_10004fd0(undefined1 *param_1,undefined1 *param_2);
void recovered_10004ffc(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void recovered_10005080(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4);
undefined8
recovered_100064bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
long * recovered_10006664(long *param_1,long param_2);
void recovered_100066a0(undefined1 *param_1,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2);
void recovered_10006878(undefined1 *param_1,long param_2,char *param_3);
void recovered_100069e8(undefined1 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4);
void recovered_10006b28(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined1 * recovered_10006bf4(undefined1 *param_1,undefined1 *param_2);
void recovered_10006c40(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_10006d20(undefined8 *param_1,undefined8 *param_2);
long * recovered_10006d6c(long *param_1,long param_2);
long recovered_10006dd8(long param_1);
void recovered_10006e00(undefined1 *param_1,undefined8 *param_2,long *param_3);
void recovered_10007000(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10007004(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_100072ac(undefined8 *param_1,undefined8 *param_2);
long * recovered_100072fc(long *param_1,undefined1 *param_2);
void recovered_10007300(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1000735c(undefined1 *param_1,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2);
void recovered_10007360(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10007364(undefined1 *param_1,undefined8 *param_2,long *param_3);
void recovered_10007368(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1000736c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_10007370(long *param_1,long param_2);
void recovered_100073b4(long *param_1,long param_2,ulong param_3);
long recovered_1000749c(long param_1);
undefined8 recovered_100074c0(long *param_1,long param_2,long *param_3);
void recovered_1000750c(long *param_1);
void recovered_10007544(long *param_1,ulong param_2);
undefined8 * recovered_100075bc(undefined8 *param_1,long param_2,ulong param_3);
ulonglong recovered_100075f0(long param_1);
undefined8 * recovered_1000760c(undefined8 *param_1);
undefined8 * recovered_10007634(undefined8 *param_1);
long * recovered_10007660(long *param_1);
void recovered_1000768c(long *param_1);
void recovered_100076dc(undefined8 *param_1);
ulonglong recovered_10007704(long param_1);
uint128 recovered_10007734(byte *param_1,byte *param_2,ulong param_3,uint param_4);
void recovered_10007800(long *param_1,double param_2);
void recovered_100079bc(long *param_1,undefined1 param_2);
void recovered_10007a20(undefined8 *param_1,ulong param_2);
uint128 recovered_10007a7c(ulong param_1,ulong param_2,ulong param_3,uint param_4);
undefined8 * recovered_10007b34(undefined8 *param_1,undefined8 *param_2);
long * recovered_10007b74(long *param_1,long param_2,ulong param_3);
void recovered_10007c58(long *param_1,long param_2);
undefined8 * recovered_10007c8c(undefined8 *param_1,long in_x1);
void recovered_10007cc0(undefined8 *param_1);
undefined1 * recovered_10007cd4(long param_1);
undefined8 * recovered_10007cec(undefined8 *param_1);
void recovered_10007d20(undefined8 *param_1);
undefined8 * recovered_10007d64(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10007da8(undefined1 *param_1,long *param_2);
void recovered_10007dcc(undefined1 *param_1);
undefined8 * recovered_10007dec(undefined8 *param_1,long param_2);
void recovered_10007e48(void);
void recovered_10007e4c(void *data);
void recovered_10007e50(long param_1);
long recovered_10007e80(long param_1);
void recovered_10007ecc(long *param_1);
void recovered_10007f14(long *param_1);
undefined8 * recovered_10007f5c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10007fb0(undefined8 *param_1,undefined8 *in_x1);
undefined8 * recovered_10007fdc(undefined8 *param_1);
void recovered_10008004(undefined8 *in_x0);
void recovered_10008018(undefined1 *param_1,long param_2,undefined8 param_3,long param_4,
                       ulong param_5);
void * recovered_1000820c(long param_1);
void recovered_10008278(long *param_1,ulong param_2);
void recovered_10008310(undefined4 param_1,undefined8 *param_2);
ulonglong recovered_100083a0(long param_1);
undefined1 * recovered_100083b4(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_100083e0(undefined8 *param_1,undefined8 *param_2);
void recovered_10008414(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008420(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008438(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008450(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008468(long param_1,undefined8 *param_2,undefined8 *param_3);
ulonglong recovered_100084a0(undefined8 *param_1,undefined8 *param_2);
long recovered_100084bc(long *param_1,undefined1 *param_2);
undefined8 * recovered_10008530(undefined8 *param_1);
void recovered_10008534(undefined8 *param_1,undefined8 *param_2,undefined4 param_3);
undefined8 * recovered_10008568(undefined8 *param_1);
undefined8 * recovered_1000856c(undefined8 *param_1,undefined8 *in_x1);
void recovered_100085a0(undefined8 *in_x0);
undefined8 * recovered_100085b4(undefined8 *param_1,undefined8 *param_2);
long recovered_10008620(long param_1);
void recovered_1000865c(long *param_1,long *param_2);
void recovered_1000867c(long *param_1);
void recovered_100086e4(long param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10008738(long param_1,undefined8 *param_2);
void recovered_100087cc(long *param_1,ulong param_2);
undefined1 * recovered_10008864(undefined1 *param_1,undefined1 *param_2);
void recovered_10008898(long *param_1,ulong param_2);
undefined1 * recovered_10008924(undefined1 *param_1,undefined1 *param_2);
void recovered_10008944(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_100089a8(undefined8 param_1,long *param_2);
void recovered_100089f8(undefined8 param_1,long *param_2,long *param_3);
long * recovered_10008a6c(long *param_1);
long * recovered_10008ab8(long *param_1);
long * recovered_10008b04(long *param_1);
void recovered_10008b50(long *param_1,long *param_2);
void recovered_10008b70(long *param_1,long *param_2);
void recovered_10008b90(long *param_1,long *param_2);
long recovered_10008bb0(long *param_1,undefined8 *param_2);
uint128 recovered_10008be4(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008c74(long *param_1,undefined1 *param_2);
long recovered_10008cc0(long *param_1,undefined8 *param_2);
ulong recovered_10008d30(long param_1,undefined8 *param_2);
ulonglong recovered_10008d60(undefined8 param_1,undefined8 *param_2);
ulong recovered_10008d78(byte *param_1,long param_2);
bool recovered_10008db0(undefined8 *param_1,undefined8 *param_2);
bool recovered_10008dd8(char *param_1,long param_2,char *param_3,long param_4);
void recovered_10008e10(long param_1);
long recovered_10008e40(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008ebc(long *param_1,long param_2);
void recovered_10008efc(long param_1,ulong param_2);
void recovered_10008f64(long *param_1,ulong param_2,undefined8 *param_3);
ulong recovered_10008f6c(ulong param_1);
void recovered_10008f88(long param_1);
void recovered_10008fec(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_10009070(long *param_1,ulong param_2);
void recovered_100090d8(long *param_1,ulong param_2);
ulonglong recovered_1000914c(long param_1);
void recovered_1000915c(long *param_1,ulong param_2);
ulonglong recovered_100091f0(long param_1);
void recovered_10009200(undefined8 *param_1,long param_2);
void recovered_10009228(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
long recovered_10009250(long *param_1,undefined8 *param_2);
undefined1 * recovered_100092b8(undefined1 *param_1,undefined8 *in_x1);
void recovered_100092e0(undefined8 *param_1);
void recovered_10009328(long param_1,char *param_2,char *param_3);
undefined1 * recovered_100095ac(undefined1 *param_1,long *in_x1);
void recovered_100095d0(undefined1 *param_1,undefined8 *param_2);
long * recovered_100095f4(long *param_1);
long recovered_10009614(long param_1);
void recovered_1000963c(long *param_1);
void recovered_1000967c(void);
void recovered_10009680(void *data);
void recovered_10009684(long param_1);
void recovered_100096fc(long *param_1,char *param_2);
undefined1 * recovered_1000981c(undefined1 *param_1,undefined1 *param_2);
long recovered_1000984c(long *param_1,char *param_2);
ulong recovered_10009918(long param_1,char *param_2);
void recovered_100099a4(long *param_1,long param_2);
void recovered_100099ac(long *param_1);
undefined8 * recovered_10009a04(undefined8 *param_1,undefined8 *param_2);
long recovered_10009a34(long *param_1,long param_2,long param_3);
void recovered_10009aa0(long *param_1,long param_2);
void recovered_10009adc(undefined1 *param_1,long param_2,ulong param_3);
undefined1 * recovered_10009b00(undefined1 *param_1,undefined1 *param_2);
long recovered_10009b20(long param_1);
void recovered_10009be4(undefined1 *param_1,long param_2,char *param_3);
long recovered_10009c80(long *param_1,undefined8 *param_2);
void recovered_10009d34(undefined8 *param_1,ulong param_2);
long recovered_10009d90(long *param_1,undefined8 *param_2);
void recovered_10009dc4(long param_1);
long recovered_10009df4(long *param_1,undefined8 *param_2,undefined1 *param_3);
void recovered_10009e70(long param_1,long param_2);
long recovered_10009eb0(long *param_1,undefined8 *param_2);
ulong recovered_10009f20(long param_1,undefined8 *in_x1);
void recovered_10009f50(long param_1,ulong param_2);
ulong recovered_10009fb8(ulong param_1);
void recovered_10009fd4(long param_1);
void recovered_1000a038(long *param_1,ulong param_2);
ulonglong recovered_1000a0cc(long param_1);
undefined8 * recovered_1000a0dc(undefined8 *param_1,long param_2);
undefined8 * recovered_1000a124(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3);
uint128 recovered_1000a16c(ulong param_1,ulong param_2,ulong param_3,uint param_4);
long * recovered_1000a224(long *param_1,long *param_2);
void recovered_1000a270(long param_1,long *param_2);
void recovered_1000a27c(long param_1,long *param_2);
void recovered_1000a28c(long param_1,long *param_2);
void recovered_1000a29c(long param_1,long *param_2);
void recovered_1000a2ac(long param_1,long *param_2);
void recovered_1000a2c0(long param_1,long *param_2);
void recovered_1000a2d4(long param_1,long *param_2);
void recovered_1000a2e8(long param_1,long *param_2);
long recovered_1000a2fc(long param_1);
long * recovered_1000a32c(long *param_1);
long * recovered_1000a374(long *param_1);
void recovered_1000a394(long param_1);
void recovered_1000a3f0(long param_1);
void recovered_1000a414(long param_1);
int recovered_1000a438(long *param_1);
void recovered_1000a480(long *param_1,undefined1 *param_2);
int recovered_1000a508(undefined8 *param_1);
void recovered_1000a540(undefined8 *param_1,long param_2,ulong param_3,ulong param_4);
undefined8 recovered_1000a608(long *param_1,char param_2);
ulonglong recovered_1000a65c(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 *param_4);
void recovered_1000a74c(long *param_1,undefined8 *param_2,undefined8 param_3);
undefined1 * recovered_1000a798(undefined1 *param_1,undefined1 *param_2);
long * recovered_1000a7c0(long *param_1,undefined1 *param_2);
long * recovered_1000a7f4(long *param_1,ulong param_2);
long * recovered_1000a850(long *param_1,ulong param_2,undefined1 param_3);
void recovered_1000a87c(long *param_1,ulong param_2,undefined1 param_3);
ulong recovered_1000a8f8(ulong param_1);
uint recovered_1000a914(undefined8 *param_1,char *param_2);
void recovered_1000a964(long param_1);
undefined8 recovered_1000aa3c(long param_1,long *param_2);
long * recovered_1000afb4(long *param_1,long *param_2);
undefined8 recovered_1000afe4(long param_1);
undefined8 * recovered_1000b018(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_1000b058(undefined8 *param_1,undefined8 *param_2);
void recovered_1000b074(undefined8 *param_1,undefined8 *param_2);
void recovered_1000b090(long *param_1);
long * recovered_1000b0c0(long *param_1);
void recovered_1000b0ec(long *param_1);
ulonglong recovered_1000b13c(undefined8 *param_1);
void recovered_1000b15c(long param_1,long *param_2);
long * recovered_1000b430(long *param_1);
void recovered_1000b47c(long param_1,long *param_2);
long recovered_1000b4b8(long param_1,undefined8 *param_2);
void recovered_1000b4ec(long param_1,char *param_2);
long * recovered_1000b570(long *param_1);
void recovered_1000b5bc(long param_1,long param_2);
long * recovered_1000b634(long *param_1);
bool recovered_1000b680(long *param_1);
long * recovered_1000b830(long *param_1);
long * recovered_1000b87c(long *param_1);
long * recovered_1000b8c8(long *param_1);
long * recovered_1000b914(long *param_1);
long * recovered_1000b960(long *param_1);
long * recovered_1000b9ac(long *param_1);
void recovered_1000b9f8(long *param_1,long *param_2);
bool recovered_1000ba3c(long param_1,undefined8 *param_2,int *param_3,undefined8 *param_4);
long * recovered_1000bac8(long *param_1);
long * recovered_1000bb14(long *param_1);
long * recovered_1000bb60(long *param_1);
long * recovered_1000bbac(long *param_1);
void recovered_1000bbf8(long *param_1,long *param_2);
long * recovered_1000bc3c(long *param_1);
void recovered_1000bc88(long *param_1,long *param_2);
long * recovered_1000bccc(long *param_1);
void recovered_1000bd18(long *param_1,long *param_2);
long * recovered_1000bd5c(long *param_1);
long recovered_1000bda8(long *param_1,undefined8 *in_x1);
long recovered_1000bddc(long *param_1,undefined8 *param_2);
long recovered_1000be64(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1000bee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
bool recovered_1000bf08(long param_1);
long recovered_1000c024(long *param_1,undefined8 *param_2);
void recovered_1000c08c(long *param_1);
long * recovered_1000c0c8(long *param_1);
ulonglong recovered_1000c114(long *param_1);
void recovered_1000c138(long *param_1,undefined8 *param_2);
void recovered_1000c19c(undefined8 *param_1,long *param_2);
bool recovered_1000cd1c(long *param_1,uint param_2);
long recovered_1000cd5c(long *param_1);
void recovered_1000cd90(undefined8 *param_1,long *param_2,long param_3,int param_4);
void recovered_1000d238(long *param_1,long *param_2);
long * recovered_1000d2c8(long *param_1,long *param_2);
ulonglong recovered_1000d2fc(long *param_1,uint param_2,long param_3);
void recovered_1000d32c(undefined8 *param_1,long *param_2,char *param_3,long param_4);
void recovered_1000d3e8(long *param_1,undefined8 *param_2);
long * recovered_1000d470(long *param_1);
long * recovered_1000d494(long *param_1);
undefined8 * recovered_1000d4dc(undefined8 *param_1);
void recovered_1000d510(undefined8 *in_x0);
void recovered_1000d524(void);
void recovered_1000d528(void *data);
void recovered_1000d52c(long param_1);
void recovered_1000d54c(long *param_1,long *param_2);
void recovered_1000d5dc(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 *param_4,
                       undefined4 *param_5);
void recovered_1000d6a0(long *param_1,long *param_2);
void recovered_1000d780(long *param_1,long *param_2);
undefined1 * recovered_1000d87c(undefined1 *param_1,undefined1 *param_2);
void recovered_1000d8a4(long *param_1,long *param_2);
void recovered_1000d954(long *param_1,long *param_2);
void recovered_1000da78(long *param_1,long *param_2);
undefined8 * recovered_1000e3a0(undefined8 *param_1);
void recovered_1000e3c8(undefined8 *in_x0);
void recovered_1000e3dc(void);
void recovered_1000e3e0(void *data);
void recovered_1000e3e4(long param_1);
void recovered_1000e404(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined4 *param_4);
void recovered_1000e4f4(undefined8 *param_1,undefined4 *param_2);
long * recovered_1000e56c(long *param_1,long *param_2);
void recovered_1000e5b0(long *param_1,long *param_2);
long * recovered_1000e658(long *param_1,long *param_2);
long * recovered_1000e688(long *param_1);
void recovered_1000e6a8(undefined8 *param_1,undefined1 *param_2,undefined4 *param_3);
long * recovered_1000e724(long *param_1);
double recovered_1000e770(void *text,ulong size,ulong *used);
void recovered_1000e958(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_1000ea00(undefined8 *param_1,long *param_2,undefined4 param_3);
undefined8 * recovered_1000eb78(long param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_1000eb94(undefined8 *param_1);
void recovered_1000ebbc(undefined8 *in_x0);
void recovered_1000ebd0(void);
void recovered_1000ebd4(void *data);
void recovered_1000ebd8(long param_1);
ulong recovered_1000ebf8(char *param_1,long param_2,long *param_3,uint param_4);
uint128 recovered_1000ec48(char *param_1,char *param_2,ulong *param_3,uint param_4);
uint recovered_1000ed9c(int param_1);
undefined8 * recovered_1000edcc(undefined8 *param_1);
void recovered_1000edf4(undefined8 *in_x0);
void recovered_1000ee08(void);
void recovered_1000ee0c(void *data);
void recovered_1000ee10(long param_1);
long recovered_1000ee30(long param_1);
undefined8 * recovered_1000ee5c(undefined8 *param_1);
void recovered_1000eebc(undefined8 *in_x0);
void recovered_1000eed0(void);
void recovered_1000eed4(void *data);
void recovered_1000eed8(long param_1);
undefined1 * recovered_1000eef8(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_1000ef24(undefined8 *param_1);
void recovered_1000ef58(undefined8 *in_x0);
long * recovered_1000ef6c(long *param_1);
void recovered_1000ef98(long *param_1);
void recovered_1000efec(void);
void recovered_1000eff0(void *data);
void recovered_1000eff4(long param_1);
long recovered_1000f014(long *param_1,undefined8 *param_2);
void recovered_1000f088(long *param_1,ulong param_2);
ulonglong recovered_1000f11c(long param_1);
undefined8 * recovered_1000f130(undefined8 *param_1);
void recovered_1000f168(undefined8 *in_x0);
void recovered_1000f17c(void);
void recovered_1000f180(void *data);
void recovered_1000f184(long param_1);
undefined8 * recovered_1000f1a4(undefined8 *param_1);
void recovered_1000f1e0(undefined8 *in_x0);
void recovered_1000f1f4(void);
void recovered_1000f1f8(void *data);
void recovered_1000f1fc(long param_1);
undefined8 * recovered_1000f21c(undefined8 *param_1);
void recovered_1000f25c(undefined8 *in_x0);
void recovered_1000f270(void);
void recovered_1000f274(void *data);
void recovered_1000f278(long param_1);
void recovered_1000f298(long *param_1,long *param_2);
void recovered_1000f308(long *param_1,undefined8 *param_2);
void recovered_1000f36c(long *param_1);
undefined8 * recovered_1000f3a8(undefined8 *param_1);
void recovered_1000f3d8(undefined8 *in_x0);
void recovered_1000f3ec(void);
void recovered_1000f3f0(void *data);
void recovered_1000f3f4(long param_1);
void recovered_1000f414(long *param_1);
void recovered_1000f45c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1000f498(undefined8 *param_1);
void recovered_1000f4c8(undefined8 *in_x0);
void recovered_1000f4dc(void);
void recovered_1000f4e0(void *data);
void recovered_1000f4e4(long param_1);
undefined8 * recovered_1000f504(undefined8 *param_1);
void recovered_1000f550(undefined8 *in_x0);
void recovered_1000f564(void);
void recovered_1000f568(void *data);
void recovered_1000f56c(long param_1);
undefined8 * recovered_1000f58c(undefined8 *param_1);
void recovered_1000f5d0(undefined8 *in_x0);
void recovered_1000f5e4(void);
void recovered_1000f5e8(void *data);
void recovered_1000f5ec(long param_1);
undefined8 * recovered_1000f60c(undefined8 *param_1);
void recovered_1000f634(undefined8 *in_x0);
void recovered_1000f648(void);
void recovered_1000f64c(void *data);
void recovered_1000f650(long param_1);
void recovered_1000f670(void);
void recovered_1000f674(void *data);
void recovered_1000f678(void);
void recovered_1000f67c(void *data);
void recovered_1000f680(long param_1);
undefined1 * recovered_1000f6a0(undefined1 *param_1,undefined1 *param_2);
long recovered_1000f6e0(long param_1);
ulonglong recovered_1000f70c(undefined1 *param_1);
long recovered_1000f73c(long *param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_1000f81c(undefined8 *param_1);
void recovered_1000f854(undefined8 *in_x0);
void recovered_1000f868(void);
void recovered_1000f86c(void *data);
void recovered_1000f870(long param_1);
void recovered_1000f890(long *param_1,undefined1 *param_2);
void recovered_1000f918(undefined8 *param_1,undefined1 param_2,undefined4 param_3);
undefined8 * recovered_1000f94c(undefined8 *param_1,long param_2);
long * recovered_1000f990(long *param_1);
undefined8 * recovered_1000f9d8(undefined8 *param_1);
void recovered_1000fa10(undefined8 *in_x0);
void recovered_1000fa24(void);
void recovered_1000fa28(void *data);
void recovered_1000fa2c(long param_1);
undefined1 * recovered_1000fa4c(undefined1 *param_1,undefined1 *param_2);
void recovered_1000fa78(undefined1 *param_1,long *param_2,long *param_3);
undefined8 * recovered_1000fbc8(undefined8 *param_1);
void recovered_1000fbf0(undefined8 *in_x0);
void recovered_1000fc04(void);
void recovered_1000fc08(void *data);
void recovered_1000fc0c(long param_1);
void recovered_1000fc2c(long param_1,long *param_2);
void recovered_1000fe38(long param_1,long *param_2);
void recovered_1000ff80(long param_1,long param_2);
void recovered_1000ff94(long *param_1,undefined1 *param_2,long param_3);
void recovered_1000ffac(long *param_1,undefined4 param_2);
void recovered_1000ffd4(long *param_1,undefined8 *param_2);
long recovered_10010010(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10010108(long *param_1,ulong param_2);
ulonglong recovered_1001017c(ulong param_1);
long recovered_10010188(long param_1);
undefined8 * recovered_100101b0(undefined8 *param_1,undefined8 *param_2,uint param_3);
void recovered_10010218(long param_1,char *param_2,uint param_3);
long * recovered_10010248(long *param_1);
void recovered_10010270(void *param_1);
void recovered_10010298(long *param_1,char *param_2,uint param_3);
void recovered_100102f0(long *param_1);
undefined * recovered_10010324(uint param_1);
void recovered_100103dc(long *param_1,long param_2,long param_3);
void recovered_1001043c(undefined8 *param_1,ulong *param_2);
void recovered_10010488(char *param_1,long *param_2,long *param_3);
long recovered_100104cc(long param_1,long param_2);
ulonglong recovered_1001051c(undefined1 *param_1);
undefined8 * recovered_1001052c(undefined8 *param_1,ulong param_2);
undefined8 * recovered_1001066c(undefined8 *param_1,long param_2);
long recovered_100106b0(long param_1);
void recovered_100106dc(long param_1);
long * recovered_10010700(long *param_1);
void recovered_10010740(void);
void recovered_10010744(void *data);
void recovered_10010748(long param_1);
ulonglong recovered_1001076c(long param_1);
undefined8 recovered_10010794(char *param_1,long param_2,long *param_3);
char * recovered_1001136c(char *param_1,char *param_2,long *param_3,long *param_4);
void recovered_10011d14(char *param_1,char *param_2,char *param_3,long param_4,uint param_5);
void recovered_10011f88(undefined1 *param_1,char *param_2,long *param_3,long *param_4);
void recovered_100120d0(undefined1 *param_1,undefined8 *param_2,long *param_3,long *param_4);
byte recovered_100121c0(char *param_1);
void recovered_100121f4(long param_1,long *param_2);
void recovered_10012244(long *param_1,long *param_2);
void recovered_100122a0(long param_1);
undefined8 recovered_10012328(long *param_1,long param_2,undefined1 *param_3);
double recovered_100123bc(void *object);
void recovered_1001243c(undefined1 *param_1,double param_2);
undefined8 recovered_100124b8(long param_1,long param_2);
void recovered_10012804(long param_1);
ulonglong recovered_10012808(long param_1,int param_2);
void recovered_10012820(undefined1 *param_1,char *param_2);
void recovered_1001288c(undefined1 *param_1,char *param_2,char *param_3);
void recovered_100128f0(undefined1 *param_1,char *param_2,char *param_3);
void recovered_10012954(undefined1 *param_1,char *param_2,char *param_3);
void recovered_100129c0(undefined1 *param_1,char *param_2,char *param_3);
void recovered_10012a40(long *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_10012a8c(undefined8 *param_1,undefined1 *param_2);
undefined1 * recovered_10012c6c(undefined1 *param_1,undefined8 *in_x1);
ulong recovered_10012c90(char *param_1,char *param_2);
void recovered_10012e44(undefined1 *param_1,byte *param_2,byte *param_3,int param_4,
                       undefined8 param_5);
bool recovered_1001302c(undefined1 *param_1,undefined8 *param_2);
void recovered_10013178(char *param_1,long param_2,byte *param_3,char *param_4,undefined8 param_5);
void recovered_100135e8(undefined1 *param_1,long param_2);
void recovered_1001361c(undefined8 *param_1,undefined8 *param_2,long param_3,long *param_4);
long * recovered_100138cc(long *param_1,ulong param_2);
void recovered_10013974(long param_1,undefined8 *in_x1);
uint recovered_10013980(undefined8 *param_1,undefined8 *param_2);
uint recovered_100139ac(undefined8 *param_1,undefined8 *param_2);
uint recovered_100139d0(undefined8 *in_x0,undefined8 *in_x1);
int recovered_100139e8(undefined8 *param_1,long param_2,ulong param_3);
bool recovered_10013a44(ulong in_d0);
void recovered_10013a60(long *param_1,byte *param_2);
void recovered_10013a90(undefined1 *param_1,undefined8 *param_2,long *param_3);
long * recovered_10013af4(long *param_1,long *param_2);
void recovered_10013b30(void);
void recovered_10013b34(void *data);
void recovered_10013b38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10013d40(long param_1);
void recovered_10013d68(undefined1 *param_1,ulong param_2,ulong param_3,ulong param_4);
void recovered_10013ee8(long param_1,long param_2,char *param_3,long param_4,undefined8 param_5,
                       uint param_6);
ulonglong recovered_10013fd0(long param_1,long param_2,ulong param_3,ulong param_4,
                            undefined4 param_5);
undefined8 recovered_10014030(undefined8 *param_1);
void recovered_10014054(long *param_1,ulong param_2);
long recovered_1001405c(char *param_1);
void recovered_100140d8(long *param_1,long param_2,long param_3);
void recovered_1001412c(long *param_1);
void recovered_10014194(void);
void recovered_10014198(void *data);
void recovered_1001419c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10014348(long param_1);
undefined1 * recovered_10014370(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_100143b4(undefined1 *param_1,long param_2,long param_3);
long recovered_1001441c(long param_1);
void recovered_10014448(long param_1,undefined1 *param_2);
void recovered_100144dc(long param_1);
void recovered_10014500(void);
void recovered_10014504(void *data);
void recovered_10014508(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10014794(long param_1);
char * recovered_100147bc(long param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5);
void recovered_10014838(long *param_1,ulong param_2,int param_3);
long recovered_10014888(long *param_1);
void recovered_100148c8(void);
void recovered_100148cc(void *data);
void recovered_100148d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001495c(void);
void recovered_1001497c(long param_1);
void recovered_100149a8(void);
void recovered_100149ac(void *data);
void recovered_100149b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10014b10(void);
uint recovered_10014b30(undefined8 *in_x0,char *in_x1);
void recovered_10014b48(long param_1,undefined1 *param_2);
void recovered_10014bdc(undefined8 *param_1,char *param_2,long *param_3,long *param_4,ulong param_5);
void recovered_10015950(undefined8 *param_1,undefined8 *param_2,char *param_3,long param_4,
                       ulong param_5,undefined8 param_6);
long recovered_100159f8(long param_1);
void recovered_10015a2c(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10015d88(undefined8 *param_1,long *param_2,long *param_3);
void recovered_10015ed8(long param_1,undefined1 *in_x1);
long recovered_10015f14(long param_1,long param_2);
long * recovered_10015f68(long *param_1,long *param_2);
undefined8 * recovered_10015fd0(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10016000(undefined8 *param_1,char *param_2,uint param_3);
void recovered_10016054(long param_1,char *param_2,uint param_3);
void recovered_10016084(void *param_1);
void recovered_100160ac(undefined1 *param_1);
long recovered_100160c8(long param_1);
ulong recovered_100160f8(long *param_1,long *param_2);
void recovered_10016188(undefined8 *param_1,long *param_2,long *param_3);
undefined8 * recovered_10016218(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10016260(long param_1);
undefined8 * recovered_10016288(undefined8 *param_1,undefined8 *param_2,uint in_w2);
long * recovered_100162f0(long *param_1,ulong param_2);
void recovered_1001631c(long *param_1,ulong param_2);
void recovered_10016384(long param_1,undefined8 *in_x1);
void recovered_10016390(long param_1,undefined8 *in_x1);
long * recovered_1001639c(long *param_1,long *param_2);
undefined1 * recovered_10016410(undefined1 *param_1,undefined1 *param_2);
long * recovered_1001643c(long *param_1,long *param_2);
void recovered_10016470(long param_1,long *param_2,long *param_3);
void recovered_1001647c(long param_1,long *param_2,long *param_3);
void recovered_10016494(long param_1,long *param_2,long *param_3);
void recovered_100164ac(long param_1,long *param_2,long *param_3);
void recovered_100164c4(long param_1,long *param_2,long *param_3);
void recovered_100164dc(long param_1,long *param_2,long *param_3);
void recovered_100164f4(long param_1,long *param_2,long *param_3);
void recovered_1001650c(long *param_1,long *param_2);
void recovered_1001652c(long param_1,long *param_2,long *param_3);
void recovered_10016544(long *param_1,long *param_2);
undefined8 * recovered_10016564(undefined8 *param_1,long param_2);
void recovered_100165c0(void);
void recovered_100165c4(void *data);
void recovered_100165c8(long param_1);
void recovered_100165f8(long *param_1);
void recovered_10016660(undefined8 *param_1,undefined8 *param_2);
long * recovered_1001667c(long *param_1,long *param_2);
long * recovered_100166e0(long *param_1,long *param_2);
undefined8 * recovered_10016754(undefined8 *param_1,long param_2);
long * recovered_1001679c(long *param_1,long *param_2);
undefined8 * recovered_100167fc(undefined8 *param_1,long param_2);
void recovered_10016858(void);
void recovered_1001685c(void *data);
void recovered_10016860(long param_1);
void recovered_10016890(long *param_1);
undefined8 * recovered_100168f8(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_10016938(undefined8 *param_1,undefined8 *param_2);
void recovered_10016954(long param_1,long *in_x1);
long * recovered_10016960(long *param_1);
void recovered_1001698c(long *param_1);
undefined8 * recovered_100169e0(undefined8 *param_1);
undefined8 * recovered_10016a0c(undefined8 *param_1,undefined8 param_2);
void recovered_10016a94(long param_1);
void recovered_10017aa8(long param_1,undefined8 *param_2,long *param_3);
void recovered_10017b2c(long param_1,undefined8 *param_2,long *param_3);
void recovered_10017be4(undefined8 *param_1);
undefined1 * recovered_10017c1c(undefined1 *param_1,long *in_x1);
undefined8 * recovered_10017c40(undefined8 *param_1,undefined8 param_2);
void recovered_10017c80(void);
void recovered_10017c84(void *data);
void recovered_10017c88(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4);
void recovered_10017c90(long param_1);
void recovered_10017cc8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017d7c(void);
void recovered_10017d80(void *data);
void recovered_10017d84(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined1 *param_4,ulong param_5);
void recovered_10017de4(long param_1);
void recovered_10017e0c(void);
void recovered_10017e10(void *data);
void recovered_10017e14(undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10017f94(long param_1);
void recovered_10017fbc(void);
void recovered_10017fc0(void *data);
void recovered_10017fc4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                       ulong param_5);
void recovered_10018024(long param_1);
void recovered_1001804c(void);
void recovered_10018050(void *data);
void recovered_10018054(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001810c(long param_1);
void recovered_10018134(void);
void recovered_10018138(void *data);
void recovered_1001813c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                       undefined8 param_5);
void recovered_1001819c(long param_1);
void recovered_100181c4(void);
void recovered_100181c8(void *data);
void recovered_100181cc(undefined1 *param_1,long param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10018494(long param_1);
void recovered_100184bc(void);
void recovered_100184c0(void *data);
void recovered_100184c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001857c(long param_1);
void recovered_100185a4(undefined8 *param_1);
long * recovered_100185e4(long *param_1,long *param_2);
undefined1 * recovered_1001862c(undefined1 *param_1,long *in_x1);
void recovered_10018650(void);
void recovered_10018654(void *data);
void recovered_10018658(long param_1);
void recovered_100186c0(void);
void recovered_100186c4(void *data);
void recovered_100186c8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001876c(long param_1);
void recovered_10018794(void);
void recovered_10018798(void *data);
void recovered_1001879c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10018878(long param_1);
void recovered_100188a0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
void recovered_100188dc(void);
void recovered_100188e0(void *data);
void recovered_100188e4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10018aac(long param_1);
ulong recovered_10018ad4(undefined8 *param_1,undefined8 *param_2,ulong param_3,int param_4,
                        long *param_5);
void recovered_10018ce8(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10018d04(undefined1 *param_1,long *param_2);
long recovered_10018da8(long param_1);
ulonglong recovered_10018dd0(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4);
void recovered_10018e08(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_100191e8(undefined8 *param_1,long *param_2,undefined8 *param_3);
void recovered_1001920c(undefined8 *param_1,long param_2,ulong param_3);
ulong recovered_10019234(long *param_1,char *param_2,ulong param_3,ulong param_4);
void recovered_10019298(long *param_1,undefined8 param_2);
undefined8 * recovered_10019330(undefined8 *param_1,long in_x1,ulong in_x2);
ulong recovered_1001935c(long param_1,long param_2,long *param_3,undefined8 *param_4);
undefined8 recovered_100193e0(long param_1,ulong param_2,undefined8 *param_3,undefined1 *param_4);
void recovered_100194ec(long *param_1,long param_2,long param_3,long param_4,long param_5);
ulong recovered_1001952c(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                        ulong param_6,undefined8 param_7,ulong *param_8);
bool recovered_1001973c(long param_1,ulong param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,ulong *param_6);
bool recovered_10019864(uint param_1,uint param_2,byte param_3);
ulong recovered_100198a0(long param_1,ulong param_2,ulong param_3);
byte recovered_100198dc(long param_1,undefined8 param_2,long param_3,ulong param_4,
                       undefined8 param_5,undefined8 param_6);
long recovered_10019a64(long *param_1,undefined8 *param_2);
void recovered_10019ad8(long *param_1,ulong param_2);
ulonglong recovered_10019b64(long param_1);
void recovered_10019b78(undefined8 *param_1,long *param_2);
long recovered_10019ba0(long *param_1,undefined8 *param_2);
undefined8 * recovered_10019c14(undefined8 *param_1);
void recovered_10019c40(void);
void recovered_10019c44(void *data);
void recovered_10019c48(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_10019da0(long param_1);
void recovered_10019dc8(void);
void recovered_10019dcc(void *data);
void recovered_10019dd0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001a278(long param_1);
long * recovered_1001a2a0(long *param_1);
bool recovered_1001a2e4(long *param_1,long *param_2);
ulong * recovered_1001a2fc(ulong *param_1);
ulong * recovered_1001a350(ulong *param_1,ulong param_2,ulong param_3,ulong param_4);
void recovered_1001a3a8(ulong *param_1);
bool recovered_1001a3f0(long *param_1,long *param_2);
undefined8 * recovered_1001a450(undefined8 *param_1,undefined8 *param_2);
void recovered_1001a484(undefined8 *param_1,undefined8 *param_2);
void recovered_1001a4a0(long *param_1,ulong param_2);
void recovered_1001a568(void);
void recovered_1001a56c(void *data);
void recovered_1001a570(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001a7ac(long param_1);
long * recovered_1001a7d4(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_1001a844(void);
void recovered_1001a848(void *data);
void recovered_1001a84c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001aad4(long param_1);
long * recovered_1001aafc(long *param_1,ulong param_2);
void recovered_1001ab58(void);
void recovered_1001ab5c(void *data);
void recovered_1001ab60(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001ac08(long param_1);
void recovered_1001ac30(void);
void recovered_1001ac34(void *data);
void recovered_1001ac38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001af1c(long param_1);
int recovered_1001af44(char *param_1,long param_2,long *param_3,uint param_4);
uint128 recovered_1001af94(char *param_1,char *param_2,int *param_3,uint param_4);
void recovered_1001b0f4(void);
void recovered_1001b0f8(void *data);
void recovered_1001b0fc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001b40c(long param_1);
void recovered_1001b434(long *param_1,long param_2,char *param_3,long param_4,undefined4 param_5);
void recovered_1001b4b4(void);
void recovered_1001b4b8(void *data);
void recovered_1001b4bc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001b670(long param_1);
void recovered_1001b698(void);
void recovered_1001b69c(void *data);
void recovered_1001b6a0(undefined1 *param_1,long param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001bb10(long param_1);
long * recovered_1001bb38(long *param_1,long *param_2);
void recovered_1001bb94(void);
void recovered_1001bb98(void *data);
void recovered_1001bb9c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined4 param_6);
void recovered_1001bc34(long param_1);
double recovered_1001bc5c(long param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5);
void recovered_1001bcbc(void);
void recovered_1001bcc0(void *data);
void recovered_1001bcc4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001bd5c(long param_1);
void recovered_1001bd84(void);
void recovered_1001bd88(void *data);
void recovered_1001bd8c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001bdf0(long param_1);
void recovered_1001be18(void);
void recovered_1001be1c(void *data);
void recovered_1001be20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001c0b0(long param_1);
ulonglong recovered_1001c0d8(undefined8 *param_1,char param_2,ulong param_3);
void recovered_1001c110(undefined8 *param_1,undefined8 *in_x0,uint *in_x1);
undefined8 * recovered_1001c170(undefined8 *param_1,undefined8 *param_2);
ulong recovered_1001c1b0(long *param_1,char param_2,ulong param_3);
undefined8 * recovered_1001c1e4(undefined8 *param_1,char *in_x1,uint in_w2);
void recovered_1001c240(long param_1,char *in_x1,uint in_w2);
long recovered_1001c270(long param_1);
void recovered_1001c298(void *param_1);
void recovered_1001c2c0(long param_1);
void recovered_1001c2c8(long param_1);
undefined8 * recovered_1001c2d0(undefined8 *param_1,long param_2);
void recovered_1001c32c(void);
void recovered_1001c330(void *data);
void recovered_1001c334(long param_1);
void recovered_1001c368(void);
void recovered_1001c36c(void *data);
void recovered_1001c370(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       long param_5);
void recovered_1001c3f4(long param_1);
void recovered_1001c41c(void);
void recovered_1001c420(void *data);
void recovered_1001c424(long param_1);
void recovered_1001c458(void);
void recovered_1001c45c(void *data);
void recovered_1001c460(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       ulong param_5,undefined8 param_6);
void recovered_1001c4e0(long param_1);
void recovered_1001c508(void);
void recovered_1001c50c(void *data);
void recovered_1001c510(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                       undefined8 param_5);
void recovered_1001c590(long param_1);
long * recovered_1001c5b8(long *param_1);
long recovered_1001c5e8(long param_1);
void recovered_1001c618(long *param_1,long param_2);

/* Original analysis identifiers for manual recovery units. */
#if defined(__aarch64__)
#define PF_MODULE_WMAP_BASE 0x40010800U
#else
#define PF_MODULE_WMAP_BASE 0x6800U
#endif

double pf_release_exp(double);
float pf_release_expf(float);
long double pf_release_expl(long double);
double pf_release_difftime(long,long);
