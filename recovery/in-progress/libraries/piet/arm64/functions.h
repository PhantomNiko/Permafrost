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
#define pf_varargs_100024ac_1 recovered_100024ac
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
extern uint8_t pf_module_state[];
void recovered_10000658(void);
void recovered_10000664(void);
ulong recovered_100008e8(void);
long recovered_10000934(void);
ulong recovered_10000974(void);
long recovered_100009b0(void);
ulong * recovered_100009e0(long param_1);
ulong recovered_10000ab8(ulong param_1,uint param_2);
ulong recovered_10000afc(ulong param_1,uint param_2);
long recovered_10000b48(long param_1,uint param_2);
ulong recovered_10000b98(ulong param_1,ulong param_2);
ulong recovered_10000ba0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000c00(undefined8 param_1,undefined8 param_2);
long recovered_10000c20(ulong param_1,ulong param_2);
long recovered_10000c60(long param_1,long param_2);
void recovered_10000cac(void);
int recovered_10000cb4(int param_1);
void * recovered_10000cc0(uintptr_t size);
void recovered_10000d04(void *pointer);
void * recovered_10000d48(void *pointer,uintptr_t size);
void * recovered_10000d94(void *destination,void *source,ulong count);
void * recovered_10000e6c(void *destination,void *source,ulong count);
void * recovered_10000f80(void *destination,int value,ulong count);
void recovered_10001018(ulong *param_1,ulong param_2);
void recovered_1000101c(ulong *param_1,ulong param_2);
int recovered_10001020(void *left,void *right,ulong count);
int recovered_1000118c(long param_1,long param_2);
bool recovered_100011bc(int param_1);
bool recovered_100011cc(int param_1);
bool recovered_100011dc(uint param_1);
bool recovered_100011f0(uint param_1);
bool recovered_1000120c(int param_1);
bool recovered_1000121c(int param_1);
int recovered_1000122c(int param_1);
int recovered_10001240(int param_1);
ulong recovered_10001254(char *text);
int recovered_10001278(char *left,char *right);
int recovered_100012a0(char *left,char *right);
void recovered_100012a4(long param_1,long param_2);
void recovered_100012bc(char *param_1);
char * recovered_100012f8(char *param_1,char param_2);
long recovered_10001320(long param_1,char *param_2);
char * recovered_10001368(char *param_1,char *param_2);
char * recovered_100013a8(char *param_1,char *param_2);
undefined * recovered_100013e4(void);
undefined ** recovered_100013f0(void);
void recovered_100013fc(undefined8 *param_1);
double recovered_10001474(double param_1,uint param_2);
uint128 recovered_100014a8(double param_1,int *param_2);
uint128 recovered_1000151c(double param_1,double param_2);
uint128 recovered_10001540(double param_1,double param_2);
uint128 recovered_100015a0(double param_1);
uint128 recovered_100015bc(double param_1);
uint128 recovered_100015e8(double param_1);
uint128 recovered_10001624(double param_1);
long recovered_100016d0(double param_1);
uint128 recovered_100016e4(double param_1);
void recovered_10001738(double param_1);
uint128 recovered_1000177c(double in_d0);
uint128 recovered_100017c8(double param_1);
long long recovered_100017d8(double value);
unsigned long long recovered_10001838(double value);
double recovered_10001888(unsigned long long value);
double recovered_100018b0(long long value);
float recovered_100018d4(float param_1,float param_2);
float recovered_10001908(int *in_x0,float param_2);
float recovered_10001920(uint in_w0,float param_2);
float recovered_10001938(float param_1,float param_2);
float recovered_10001954(float param_1);
float recovered_10001978(float param_1);
uint128 recovered_10001990(double param_1);
float recovered_100019b8(float param_1);
float recovered_100019d0(float param_1);
float recovered_100019e8(float param_1);
long recovered_10001a00(double param_1);
float recovered_10001a14(float param_1);
float recovered_10001a2c(float param_1);
float recovered_10001a44(float param_1);
long recovered_10001a54(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001b58(int param_1);
long recovered_10001b88(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001cac(byte *param_1,undefined8 *param_2);
float recovered_10001e3c(byte *in_x0,undefined8 *in_x1);
int recovered_10001e54(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_1000237c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_100023b8(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10002408(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_100024ac(char *buffer,uintptr_t capacity,char *format,...);
void recovered_100024d4(ulong param_1,ulong param_2,ulong *param_3);
void recovered_1000255c(long param_1,ulong param_2,ulong *param_3);
bool recovered_100025cc(int param_1);
void recovered_10002714(char *param_1,long param_2);
void recovered_100027cc(int param_1);
void recovered_10002858(void);
void recovered_10002860(void);
void recovered_10002868(char *param_1);
void recovered_100028cc(void);
void recovered_100028f0(char *param_1);
void recovered_1000291c(void);
bool recovered_10002940(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_100029b8(void);
void recovered_100029bc(void);
undefined8 recovered_100029c0(void);
undefined4 * recovered_100029c8(char *param_1,long param_2);
undefined8 recovered_10002c04(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002c54(long param_1,ulong param_2);
undefined4 * recovered_10002cdc(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002d10(int *param_1);
ulong recovered_10002d54(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002e88(int *param_1);
long recovered_10002f6c(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_1000307c(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003110(long param_1);
undefined8 recovered_10003134(int *param_1);
undefined1 recovered_100031a8(long param_1);
undefined1 recovered_100031b4(long param_1);
void recovered_100031c0(long param_1);
uint recovered_100031d4(uint param_1,long param_2);
undefined8 recovered_100031f8(long param_1);
undefined8 recovered_10003230(undefined8 param_1);
undefined8 recovered_10003274(long param_1,long param_2);
undefined8 recovered_10003310(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10003370(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10003410(long param_1,long param_2,long param_3);
undefined8 recovered_1000343c(void);
void recovered_10003440(void);
undefined8 recovered_10003444(void);
undefined8 recovered_10003448(void);
undefined8 recovered_1000344c(void);
char * recovered_10003450(long param_1,char param_2,long param_3);
int recovered_10003474(char *left,char *right,ulong count);
char * recovered_100034a4(int param_1);
undefined8 recovered_10003544(void);
undefined8 recovered_10003548(void);
void recovered_1000354c(void);
bool recovered_10003560(int param_1);
__attribute__((naked,noreturn)) void recovered_1000362c(void *context);
__attribute__((naked,returns_twice)) int recovered_10003640(void *context);
__attribute__((naked,noreturn)) void recovered_1000367c(void *context,int value);
void recovered_100036c0(void);
undefined8 recovered_100036d4(void);
void recovered_100036dc(long param_1);
long recovered_100036ec(long param_1);
void * recovered_1000370c(ulong param_1);
void * recovered_1000373c(ulong param_1);
void recovered_10003740(void *param_1);
void recovered_10003758(void *param_1);
void recovered_10003770(void *param_1);
void recovered_10003788(void *param_1);
undefined8 recovered_100037a0(void);
uint recovered_100037a8(uint *param_1);
void recovered_100037b8(ulong *param_1);
void recovered_100037c8(void);
undefined1 * recovered_100037cc(ulong param_1);
void recovered_10003814(long param_1);
long recovered_10003824(long param_1);
void recovered_1000382c(void);
void recovered_10003884(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_100038a4(undefined8 *param_1);
void recovered_10003908(void);
void recovered_10003938(undefined8 *param_1);
void recovered_1000394c(undefined8 *param_1);
void recovered_10003978(undefined8 *in_x0);
void recovered_10003984(void);
undefined8 recovered_10003990(undefined8 *param_1);
undefined8 recovered_100039b0(undefined8 *param_1);
undefined8 recovered_10003a4c(undefined8 *in_x0);
undefined8 recovered_10003a58(void);
void recovered_10003a60(void);
long recovered_10003a6c(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_10003aac(undefined8 *param_1,undefined8 *param_2);
void recovered_10003b38(void);
undefined8 recovered_10003b3c(void);
bool recovered_10003b44(int param_1);
bool recovered_10003b54(uint param_1);
bool recovered_10003b8c(uint param_1);
bool recovered_10003ba8(ulong param_1);
bool recovered_10003bc0(uint param_1);
bool recovered_10003bd8(ulong param_1);
bool recovered_10003bf0(ulong param_1);
double recovered_10003c08(double value);
float recovered_10003cc8(float value);
long double recovered_10003ce4(long double value);
double recovered_10003ce8(long end,long start);
uint128 recovered_10003cf8(double param_1);
longlong recovered_10003d44(char *text,char **end,int base);
longlong recovered_10003e88(char *text,char **end,int base);
undefined8 recovered_10003e8c(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_10004064(uint param_1,long *param_2);
ulong recovered_10004158(undefined8 *param_1);
ulong recovered_10004190(byte *param_1,long param_2);
ulong recovered_100041bc(undefined8 *param_1);
void recovered_10004234(undefined1 *param_1,long *param_2);
void recovered_10004288(undefined1 *param_1,undefined8 *param_2);
void recovered_100042c4(undefined1 *param_1,undefined8 param_2);
void recovered_100042e4(undefined1 *param_1,ulong param_2);
void recovered_1000430c(undefined1 *param_1);
void recovered_10004328(undefined1 *param_1,long *param_2);
void recovered_10004350(undefined1 *param_1,undefined8 *param_2);
void recovered_10004378(undefined1 *param_1,undefined8 param_2);
long * recovered_10004398(long *param_1,long *param_2);
void recovered_100043cc(undefined8 *param_1,ulong param_2);
longlong recovered_10004418(void *variable);
undefined8 * recovered_10004540(undefined8 *param_1,undefined8 param_2);
void recovered_100045c0(long param_1);
void recovered_10004fd0(undefined8 *param_1);
undefined8 * recovered_10005004(undefined8 *param_1,undefined8 param_2);
void recovered_10005008(undefined8 *param_1,undefined8 param_2);
undefined8 recovered_10005010(undefined8 *param_1);
bool recovered_10005018(int *param_1);
byte recovered_10005048(undefined8 *param_1);
bool recovered_100054b8(int *param_1,int param_2,int param_3);
ulong recovered_10005518(int *param_1,int param_2,int param_3);
void recovered_10005574(int *param_1,int *param_2,undefined4 param_3);
void recovered_100055bc(long param_1);
void recovered_100055e0(long *param_1,ulong param_2);
void recovered_10005678(long *param_1,ulong param_2);
void recovered_100056f0(long *param_1,undefined1 param_2);
ulong recovered_10005754(undefined8 *param_1);
long recovered_10005788(long param_1,ulong param_2);
void recovered_100057d0(undefined8 *param_1);
undefined1 recovered_100057f4(long param_1);
long * recovered_100057fc(long param_1,ulong param_2,long *param_3);
void recovered_1000584c(long *param_1,ulong param_2);
long * recovered_100058ec(long *param_1,long *param_2);
void recovered_10005920(long param_1,ulong param_2,undefined8 *param_3,long *param_4);
undefined8 * recovered_10005994(undefined8 *param_1,undefined8 *param_2);
long * recovered_100059e4(long *param_1,long *param_2);
void recovered_10005a30(long param_1,ulong param_2);
long recovered_10005a70(long param_1,long param_2);
void recovered_10005aa4(long *param_1);
long recovered_10005af4(long param_1);
long recovered_10005afc(long param_1);
void recovered_10005b04(long *param_1,ulong param_2);
long recovered_10005bb0(long param_1,ulong param_2);
void recovered_10005bd0(long param_1,undefined1 *param_2);
void recovered_10005bf8(long param_1,undefined1 *param_2);
undefined8 recovered_10005c20(long param_1,long *in_x1);
undefined8 recovered_10005c5c(long param_1,undefined8 *in_x1);
undefined8 recovered_10005c98(long param_1,undefined8 param_2);
void recovered_10005cd8(long param_1,ulong in_x1);
void recovered_10005d00(long param_1,ulong param_2);
void recovered_10005d44(long param_1,ulong param_2);
long recovered_10005d68(long param_1);
long recovered_10005dc0(long param_1);
long recovered_10005de0(long param_1);
long recovered_10005de8(long param_1);
undefined8 recovered_10005df0(long param_1);
undefined4 recovered_10005df8(long param_1);
undefined4 recovered_10005e00(long param_1);
undefined1 recovered_10005e08(long param_1);
void recovered_10005e10(long param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_10005e18(long param_1);
void recovered_10005e20(long param_1,uint param_2);
long * recovered_10005e2c(long *param_1,long *param_2);
void recovered_10005e70(long *param_1,long param_2,ulong param_3);
undefined8 recovered_10005f58(long *param_1,long param_2,long *param_3);
void recovered_10005fa4(long *param_1);
undefined8 * recovered_10005fdc(undefined8 *param_1,long param_2,ulong param_3);
undefined8 * recovered_10006010(undefined8 *param_1);
void * recovered_10006038(ulong capacity);
undefined8 * recovered_10006054(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100060a0(undefined8 *param_1,undefined8 *param_2);
void recovered_100060e0(undefined8 *param_1,ulong param_2);
uint128 recovered_1000613c(byte *param_1,byte *param_2,ulong param_3,uint param_4);
void recovered_10006208(undefined8 *param_1,undefined8 *param_2);
long recovered_10006224(long *param_1,undefined1 *param_2);
void recovered_1000628c(long *param_1,ulong param_2);
void * recovered_10006300(ulong param_1);
long * recovered_1000630c(long *param_1,long *param_2);
long * recovered_10006368(long *param_1,long *param_2);
long * recovered_100063c8(long *param_1,long *param_2);
void recovered_10006424(long *param_1,ulong param_2);
void * recovered_10006498(ulong param_1);
undefined8 * recovered_100064a4(undefined8 *param_1);
long * recovered_100064d8(long *param_1);
void recovered_10006504(long *param_1);
undefined8 * recovered_10006558(undefined8 *param_1);
long * recovered_10006584(long *param_1);
void recovered_100065b0(long *param_1);
void * recovered_10006604(long param_1);
undefined1 * recovered_10006618(undefined1 *param_1,undefined1 *param_2);
long recovered_10006658(long *param_1,undefined1 *param_2);
void recovered_100066cc(long *param_1,ulong param_2);
void * recovered_10006760(long param_1);
void recovered_10006770(undefined8 *param_1,undefined8 *param_2);
void * recovered_1000679c(void *destination,void *source);
undefined8 * recovered_100067b8(undefined8 *param_1);
long * recovered_100067e4(long *param_1,undefined1 *param_2,long param_3);
long recovered_10006840(long *param_1,undefined1 *param_2);
void recovered_100068a4(void);
void recovered_100068a8(void *param_1);
undefined * recovered_100068ac(undefined *param_1,long param_2,long *param_3);
void recovered_1000692c(void);
long * recovered_1000694c(long *param_1,undefined8 *param_2);
long * recovered_10006964(long *param_1,long param_2,ulong param_3);
long * recovered_100069d0(long *param_1,undefined1 param_2);
long * recovered_10006a20(long *param_1,long param_2,long param_3);
void recovered_10006a68(void);
void recovered_10006a6c(void *param_1);
long * recovered_10006a70(long *param_1,long param_2,long *param_3);
void recovered_10006ac4(void);
long * recovered_10006ae4(long param_1,ulong param_2);
undefined8 recovered_10006b70(undefined8 *param_1);
long * recovered_10006b94(long param_1,ulong param_2);
void recovered_10006cb4(undefined8 *param_1,ulong param_2);
void recovered_10006d00(undefined8 *param_1,ulong param_2);
uint128 recovered_10006d5c(ulong param_1,ulong param_2,ulong param_3,uint param_4);
void recovered_10006e14(void);
void recovered_10006e18(void *param_1);
void recovered_10006e1c(undefined8 param_1,long param_2,long *param_3);
void recovered_10006e50(void);
void recovered_10006e70(void);
void recovered_10006e74(void *param_1);
void recovered_10006e78(undefined8 param_1,long param_2,long *param_3);
void recovered_10006eb4(void);
void recovered_10006ed4(void);
void recovered_10006ed8(void *param_1);
long * recovered_10006edc(undefined8 param_1,long param_2,long *param_3);
void recovered_10006f24(void);
void recovered_10006f44(void);
void recovered_10006f48(void *param_1);
undefined1 * recovered_10006f4c(undefined8 param_1,long param_2,long *param_3);
void recovered_10006fac(void);
void recovered_10006fcc(void);
void recovered_10006fd0(void *param_1);
void recovered_10006fd4(undefined8 param_1,long param_2,long *param_3);
void recovered_10007040(void);
undefined1 * recovered_10007060(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_10007098(undefined1 *param_1,undefined1 *param_2);
void recovered_100070d0(void);
void recovered_100070d4(void *param_1);
void recovered_100070d8(undefined8 param_1,undefined8 *param_2,long *param_3);
void recovered_1000710c(void);
void recovered_1000712c(int *param_1,int param_2,int param_3,ulong param_4);
void recovered_100071dc(void);
void recovered_100071e0(void *param_1);
void recovered_100071e4(undefined8 param_1,undefined8 *param_2,long *param_3);
void recovered_100073a0(void);
void recovered_100073c0(long *param_1,ulong param_2,ulong param_3);
long recovered_10007420(long param_1);
void recovered_10007448(void);
void recovered_1000744c(void *param_1);
void recovered_10007450(undefined8 param_1,long param_2,long *param_3);
void recovered_10007480(void);
void recovered_100074a0(void);
void recovered_100074a4(void *param_1);
void recovered_100074a8(undefined8 param_1,long param_2,long *param_3);
void recovered_100074c0(void);
void recovered_100074e0(void);
void recovered_100074e4(void *param_1);
void recovered_100074e8(undefined8 param_1,long param_2,long *param_3);
void recovered_10007584(void);
void recovered_100075a4(long *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_100075f0(long *param_1,undefined8 *param_2);
long * recovered_10007628(long *param_1,long param_2,ulong param_3);
void recovered_1000770c(void);
void recovered_10007710(void *param_1);
void recovered_10007714(undefined8 param_1,long param_2,long *param_3);
void recovered_10007798(void);
void recovered_100077b8(void);
void recovered_100077bc(void *param_1);
void recovered_100077c0(undefined8 param_1,long param_2,long *param_3);
void recovered_100077f4(void);
void recovered_10007814(void);
void recovered_10007818(void *param_1);
void recovered_1000781c(undefined8 param_1,long param_2,long *param_3);
void recovered_10007854(void);
void recovered_10007874(void);
void recovered_10007878(void *param_1);
void recovered_1000787c(undefined8 param_1,long param_2,long *param_3);
void recovered_100078b0(void);
void recovered_100078d0(void);
void recovered_100078d4(void *param_1);
void recovered_100078d8(undefined8 param_1,long param_2,long *param_3);
void recovered_10007910(void);
void recovered_10007930(void);
void recovered_10007934(void *param_1);
void recovered_10007938(undefined8 param_1,long param_2,long *param_3);
void recovered_1000796c(void);
void recovered_1000798c(void);
void recovered_10007990(void *param_1);
void recovered_10007994(undefined8 param_1,long param_2,long *param_3);
void recovered_100079cc(void);
void recovered_100079ec(void);
void recovered_100079f0(void *param_1);
void recovered_100079f4(undefined8 param_1,long param_2,long *param_3);
void recovered_10007a60(void);
void recovered_10007a80(void);
void recovered_10007a84(void *param_1);
void recovered_10007a88(undefined8 param_1,long param_2,long *param_3);
void recovered_10007ae8(void);
void recovered_10007b08(void);
void recovered_10007b0c(void *param_1);
void recovered_10007b10(undefined8 param_1,long param_2,long *param_3);
void recovered_10007ba4(void);
bool recovered_10007bc4(undefined8 *param_1,undefined8 *param_2);
bool recovered_10007bec(char *param_1,long param_2,char *param_3,long param_4);
void recovered_10007c24(long *param_1,ulong param_2);
void * recovered_10007cbc(long param_1);
undefined1 * recovered_10007cd0(undefined1 *param_1,undefined1 *param_2);
long recovered_10007d08(long *param_1,undefined1 *param_2);
long recovered_10007d7c(long *param_1,undefined1 *param_2);

/* Original analysis identifiers for manual recovery units. */
