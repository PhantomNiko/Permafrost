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
ulonglong recovered_10003d44(char *text,char **end,int base);
ulonglong recovered_10003e88(char *text,char **end,int base);
undefined8 recovered_10003e8c(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_10004064(uint param_1,long *param_2);
ulong recovered_10004158(undefined8 *param_1);
ulong recovered_10004190(byte *param_1,long param_2);
ulong recovered_100041bc(undefined8 *param_1);
void * recovered_10004234(void *vm);
void recovered_10006700(long *param_1,undefined8 *param_2,long *param_3);
undefined8 * recovered_10006798(undefined8 *param_1);
void recovered_1000679c(long *param_1,undefined8 *param_2,undefined4 *param_3);
long recovered_10006888(long param_1);
void * recovered_100068b0(void *output,void *vm,void *argument0,void *argument1,uint argument2);
long recovered_10006948(long *param_1,undefined8 *param_2);
undefined4 * recovered_10006a00(undefined4 *param_1,undefined4 *param_2);
undefined8 * recovered_10006a2c(undefined8 *param_1);
undefined8 * recovered_10006a30(undefined8 *param_1);
void * recovered_10006a34(void *vm);
void * recovered_10006a38(void *output,void *vm,void *argument0);
bool recovered_10006b0c(undefined8 *param_1,ulong *param_2);
bool recovered_10006be0(undefined8 *param_1);
bool recovered_10006c78(undefined8 *param_1);
bool recovered_10006d10(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10006de0(undefined8 *param_1);
ulong recovered_10006e74(void *value,char needle,ulong start);
bool recovered_10006eac(undefined8 *param_1,int *param_2);
bool recovered_10006f00(byte *param_1);
byte recovered_10006f14(char *param_1);
double recovered_10006f60(void *value);
undefined8 * recovered_10006ff0(undefined8 *param_1,long in_x1);
undefined8 * recovered_10006ff4(undefined8 *param_1);
uint128 recovered_10006ff8(char *param_1,undefined8 param_2);
uint128 recovered_10007070(long param_1);
undefined8 recovered_10007080(void);
uint128 recovered_1000708c(int param_1);
uint128 recovered_100070a0(void);
void * recovered_100070ac(void *output,void *vm,void *argument0);
long * recovered_10007134(undefined4 *param_1,undefined1 *param_2);
int * recovered_100071d8(uint *param_1,int param_2,byte *param_3);
double recovered_1000750c(void *value);
uint recovered_100075b4(int *param_1);
undefined8 recovered_10007644(undefined8 param_1,undefined4 *param_2,ulong *param_3);
undefined8 recovered_100076e0(undefined8 param_1,int *param_2,int *param_3,undefined8 *param_4);
bool recovered_100078d0(undefined8 param_1,int *param_2,int *param_3);
long * recovered_10007964(long *param_1,long *param_2);
void recovered_100079a8(long *param_1,uint param_2);
undefined8 * recovered_10007a04(undefined8 *param_1,undefined8 *param_2);
long * recovered_10007a50(long *param_1,float param_2);
long * recovered_10007a58(long *param_1,long param_2);
long recovered_10007a94(long *param_1,undefined8 *param_2);
undefined *
recovered_10007ac8(long *param_1,ulong param_2,undefined *param_3,undefined *param_4,ulong *param_5,
                  byte *param_6);
void * recovered_10007c04(void *output,void *vm,uint argument0,void *argument1,ulong argument2);
bool recovered_10008a08(int *param_1,ulong param_2);
undefined8
recovered_10008aa8(long *param_1,long param_2,long param_3,long param_4,ulong *param_5,uint *param_6
                  );
uint128 recovered_10008dd8(long *param_1,long param_2,long *param_3,long *param_4,ulong *param_5);
byte recovered_10008dec(undefined8 param_1,uint *param_2);
void * recovered_10008e3c(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_10008f24(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void recovered_10008fc0(long param_1,undefined8 *param_2,char *param_3,ulong param_4);
undefined8 * recovered_10009260(undefined8 *param_1,undefined8 *param_2);
undefined8
recovered_100092f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 *param_6,undefined8 *param_7);
void recovered_10009650(undefined8 *param_1);
undefined8
recovered_100096b4(long *param_1,long param_2,uint param_3,long *param_4,long *param_5,byte *param_6
                  );
long * recovered_10009884(long *param_1,undefined8 *param_2);
undefined4 * recovered_1000989c(long *param_1,undefined8 *param_2,long param_3);
void * recovered_10009d80(void *output,void *vm,void *argument0,int argument1,void *argument2,
                         void *argument3);
bool recovered_1000ab4c(long param_1);
long * recovered_1000ab70(long *param_1,int *param_2);
long recovered_1000ac48(long param_1,long param_2,uint param_3,long *param_4,long *param_5,
                       uint *param_6);
long recovered_1000b0e0(long param_1);
long recovered_1000b104(long *param_1,ulong param_2,ulong param_3);
long recovered_1000b12c(long *param_1,long param_2);
long recovered_1000b150(long *param_1,undefined8 *param_2,ulong param_3);
uint128 recovered_1000b180(long param_1,long param_2,uint param_3,long *param_4,long *param_5,ulong *param_6
                  );
ulong recovered_1000c694(long param_1,int *param_2,undefined8 param_3,long *param_4,long *param_5,
                        byte *param_6);
undefined8
recovered_1000c730(long *param_1,long param_2,uint param_3,long *param_4,long *param_5,byte *param_6
                  );
void recovered_1000cb6c(undefined4 *param_1,uint *param_2,uint *param_3);
void recovered_1000cc54(undefined4 *param_1,uint *param_2,uint *param_3);
void recovered_1000cde4(long *param_1,ulong param_2);
void recovered_1000ce94(long *param_1,ulong param_2);
void recovered_1000cf00(long *param_1,undefined8 *param_2,long param_3);
undefined8 recovered_1000cf4c(long param_1,char *param_2,long *param_3,long *param_4,byte *in_x5);
long * recovered_1000d1a4(long *param_1,undefined4 *param_2);
void * recovered_1000d54c(void *output,void *vm,void *argument0,void *argument1);
void * recovered_1000d978(void *output,void *vm,void *argument0,void *argument1,ulong argument2);
bool recovered_1000e394(undefined8 param_1,uint *param_2,uint *param_3);
uint recovered_1000e594(undefined8 param_1,uint *param_2,uint *param_3);
void recovered_1000e76c(long *param_1,undefined8 *param_2,undefined8 *param_3);
float recovered_1000e7b8(int *in_x0);
void * recovered_1000e7d0(void *output,void *vm,void *argument0,char argument1,void *argument2);
undefined8 * recovered_1000ee14(undefined8 *param_1);
void recovered_1000ee3c(long param_1);
void recovered_1000ee58(long param_1);
void recovered_1000ee68(long *param_1);
void recovered_1000eea0(long *param_1);
void * recovered_1000f33c(void *output,void *vm,void *argument0,void *argument1,ulong argument2);
undefined8 * recovered_1000f580(undefined8 *param_1);
long * recovered_1000f5d4(long *param_1,long *param_2);
void recovered_1000f630(long *param_1);
void recovered_1000f690(long *param_1,ulong param_2);
long recovered_1000f724(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_1000f7a0(long param_1,long *in_x1,undefined4 *in_x2,ulong in_x3);
long * recovered_1000f81c(long *param_1,long *param_2);
void recovered_1000f85c(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
void recovered_1000f8f8(long param_1,long param_2);
void recovered_1000f964(long *param_1);
void recovered_1000f9a0(long *param_1);
void recovered_1000f9dc(long param_1,long param_2);
byte recovered_1000fa38(long *param_1,long param_2,uint *in_x3,long *in_x4,char **in_x5);
ulong recovered_100114ec(long *param_1,ulong param_2,uint *in_x5);
byte recovered_10011564(undefined8 *param_1,long param_2,long param_3,uint *in_x5);
bool recovered_10011670(undefined8 *param_1,char *param_2);
uint recovered_100116c0(undefined8 *in_x0,char *in_x1);
undefined8 * recovered_100116d8(undefined8 *param_1);
long * recovered_1001172c(long *param_1,long *param_2);
void recovered_10011780(long *param_1,ulong param_2);
void recovered_10011814(undefined8 param_1,long *param_2);
void recovered_10012a38(undefined8 param_1,long param_2);
void recovered_10012c7c(long param_1,undefined8 *param_2,undefined4 *param_3,int param_4);
bool recovered_10012d64(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_10012d98(undefined4 *param_1);
uint recovered_10012df0(undefined8 param_1,int *param_2);
void recovered_10012e20(undefined4 *param_1);
void recovered_10012e70(long param_1,int *param_2,int *param_3,int *param_4,uint param_5);
long recovered_100131d4(long param_1,int *param_2,undefined4 *param_3,uint param_4);
undefined8 * recovered_10013454(undefined8 *param_1);
void recovered_10013458(long *param_1);
undefined8
recovered_100134ac(long *param_1,uint *param_2,undefined4 *param_3,long *in_x4,uint *in_x5);
undefined4 * recovered_10014a04(undefined4 *param_1,undefined4 *param_2);
void recovered_10014a30(long *param_1);
long * recovered_10014a34(long *param_1,long *param_2);
undefined8 * recovered_10014a88(undefined8 *param_1,undefined8 *param_2);
long * recovered_10014ad8(long *param_1,long *param_2);
undefined8 * recovered_10014b2c(undefined8 *param_1,undefined8 *param_2);
ulong recovered_10014b7c(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4);
void recovered_10014c00(long *param_1);
long * recovered_10014d88(long *param_1,long *param_2);
void recovered_10014de4(long param_1,long *param_2);
void recovered_10014e0c(long param_1,long *param_2,uint param_3);
long recovered_10014fe0(long *param_1,undefined8 *param_2);
long * recovered_1001508c(long *param_1,long *param_2);
undefined8
recovered_100150c8(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4,ulong *param_5,
                  undefined4 *param_6);
bool recovered_1001519c(undefined8 *param_1,undefined8 *param_2);
bool recovered_100151c4(ulong param_1,long param_2,int param_3,undefined8 *param_4);
undefined8 recovered_10015280(long *param_1,undefined8 *param_2);
long recovered_10015594(long *param_1,undefined8 *param_2);
long recovered_100155c8(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_10015644(long *param_1);
void recovered_100156a4(undefined4 *param_1,long *param_2,ulong *param_3,uint param_4,char *param_5,
                       int param_6,ulong param_7);
void recovered_10018c70(long *param_1);
long recovered_10018cac(long *param_1,undefined8 *param_2);
uint128 recovered_10018ce0(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10018d70(long *param_1,long param_2,undefined8 *param_3);
void * recovered_10018dbc(void *output,void *vm,void *argument0);
long recovered_10018e64(long *param_1,undefined8 *param_2);
long * recovered_10018f20(long *param_1,long *param_2);
undefined4 recovered_10018f80(char *param_1,long param_2);
void * recovered_10019310(void *output,void *vm,void *argument0,void *argument1,uint argument2);
void recovered_10019354(long *param_1,ulong param_2);
void * recovered_100193c8(void *output,void *vm,void *argument0);
void recovered_10019610(long *param_1,ulong param_2);
void recovered_100196a8(undefined4 *param_1,undefined8 *param_2);
long recovered_1001971c(long param_1);
void recovered_10019760(long *param_1,ulong param_2);
long recovered_1001980c(long *param_1,undefined8 *param_2,undefined4 param_3);
long recovered_100198d4(long *param_1,undefined8 *param_2);
long recovered_10019910(long *param_1,undefined8 *param_2);
void recovered_10019944(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_10019988(long *param_1,undefined8 *param_2,undefined4 param_3,int param_4);
long recovered_10019bac(long *param_1,undefined8 *param_2);
void recovered_10019be8(long *param_1,ulong param_2,undefined8 *param_3);
undefined4 * recovered_10019c2c(long *in_x0,undefined8 *in_x1,undefined4 in_w2,undefined4 *in_x3);
void recovered_10019c60(long param_1);
long recovered_10019c9c(long *param_1,undefined8 *param_2);
undefined8
recovered_10019e18(undefined8 param_1,undefined8 *param_2,long *param_3,undefined1 *param_4);
long recovered_10019f54(long *param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10019fb0(long *in_x0,undefined8 *in_x1,long in_x2,undefined4 *in_x3);
long recovered_10019fe4(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4);
long recovered_1001a60c(long *param_1,ulong param_2,ulong param_3);
long recovered_1001a634(long *param_1,long param_2);
long recovered_1001a658(long *param_1,undefined8 *param_2,ulong param_3);
long recovered_1001a688(long *param_1,undefined8 *param_2,ulong *param_3);
bool recovered_1001a6e4(long *param_1,undefined8 *param_2,undefined4 *param_3);
bool recovered_1001a71c(long *in_x0,undefined8 *in_x1,long in_x2,undefined4 *in_x3);
undefined4 * recovered_1001a750(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_1001a794(long *param_1,undefined8 *param_2,long param_3,undefined4 *param_4,
                       int param_5);
void * recovered_1001a824(void *output,void *vm,void *argument0);
bool recovered_1001ab40(long param_1);
long * recovered_1001ab84(long *param_1,long param_2,ulong param_3,long param_4,ulong param_5);
int recovered_1001ac0c(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5);
long * recovered_1001ac5c(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
void recovered_1001ac98(long param_1,long *param_2);
void recovered_1001acf4(long param_1);
long recovered_1001ad1c(long *param_1,long *param_2);
long * recovered_1001ade0(long *param_1,long *param_2);
void recovered_1001ae34(long param_1);
long recovered_1001ae9c(long *param_1,long param_2);
long * recovered_1001af00(long param_1,long param_2);
long * recovered_1001b0b8(long *param_1,long *param_2);
void recovered_1001b13c(long *param_1);
void recovered_1001b190(long *param_1);
void recovered_1001b1e4(long *param_1,ulong param_2);
undefined8 recovered_1001b278(undefined8 *param_1,undefined4 *param_2);
undefined8 * recovered_1001b310(long param_1,long param_2);
long * recovered_1001b388(long param_1,long param_2);
void recovered_1001b55c(long *param_1);
void recovered_1001b584(long *param_1,ulong param_2);
undefined8 * recovered_1001b5d8(long param_1,long param_2);
undefined * recovered_1001b650(long param_1,long param_2);
int recovered_1001b6c0(long param_1,long param_2);
bool recovered_1001b808(uint in_s0);
void * recovered_1001b824(void *output,void *vm,void *argument0,void *argument1);
void * recovered_1001b830(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001bb88(void *output,void *vm,void *argument0);
void * recovered_1001be34(void *output,void *vm,void *argument0);
void * recovered_1001c0f4(void *output,void *vm,void *argument0);
void * recovered_1001c304(void *output,void *vm,uint argument0);
long recovered_1001c3f8(long *param_1,undefined8 *in_x1);
void * recovered_1001c430(void *output,void *vm,void *argument0,ulong argument1);
long recovered_1001c65c(undefined8 *param_1);
void * recovered_1001c684(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001ca08(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001cd04(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001d024(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001d1a0(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001da0c(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_1001e1a8(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001e3b4(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001e600(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001e9b4(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1001ebf0(void *output,void *vm,uint argument0);
void * recovered_1001ec18(void *output,void *vm,void *argument0,uint argument1,void *argument2);
void * recovered_1001ec24(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_10021108(void *output,void *vm,void *argument0);
undefined8 recovered_1002123c(long param_1,long param_2);
undefined8 * recovered_100212a8(undefined8 *param_1,undefined2 *param_2);
void * recovered_100212ec(void *output,void *vm,void *argument0);
long * recovered_100213ec(long *param_1,long *param_2);
void * recovered_10021448(void *output,void *vm,void *argument0);
bool recovered_10021b00(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
long recovered_10021b6c(long *param_1,undefined8 *param_2);
void * recovered_10021ba4(void *output,void *vm,void *argument0,void *argument1);
long * recovered_10022344(long *param_1,long *param_2);
long recovered_10022384(long *param_1,undefined8 *param_2);
long * recovered_1002243c(long *param_1,long *param_2);
void * recovered_1002247c(void *output,void *vm,void *argument0);
undefined8 recovered_10022584(int *param_1);
void recovered_100225ac(undefined4 *param_1,long *param_2,undefined8 *param_3);
void recovered_10022794(long *param_1,long *param_2);
long recovered_10022aec(long param_1);
void recovered_10022b14(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10022c2c(long param_1,long *param_2,long param_3);
void recovered_10022fe0(long param_1,long param_2);
void recovered_10023080(undefined4 *param_1,long param_2,undefined8 *param_3);
void * recovered_10023120(void *output,void *vm,void *argument0,bool argument1);
undefined8 * recovered_100237e0(undefined8 *param_1);
long * recovered_10023838(long *param_1,long *param_2);
undefined8 * recovered_10023878(undefined8 *param_1);
long * recovered_100238d8(long *param_1,long *param_2);
long * recovered_10023918(long *param_1);
void * recovered_10023978(void *output,void *vm,void *argument0);
long * recovered_10023b40(long *param_1,long *param_2);
void * recovered_10023bec(void *output,void *vm,void *argument0);
long recovered_10023ce8(long param_1,undefined8 *param_2);
long recovered_10023d00(long param_1);
void * recovered_10023d2c(void *output,void *vm,void *argument0);
bool recovered_10023dc4(char *param_1,long param_2,char *param_3);
void recovered_10023ddc(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4);
void * recovered_10023e14(void *output,void *vm,void *argument0);
void recovered_10023ebc(char *param_1);
void * recovered_10023edc(void *output,void *vm,void *argument0);
void * recovered_10023f58(void *output,void *vm,void *argument0);
uint recovered_100240d0(long param_1);
void * recovered_10024134(void *output,void *vm,void *argument0);
void * recovered_10024198(void *output,void *vm,void *argument0);
undefined1 * recovered_100243dc(undefined8 *param_1);
long * recovered_10024e4c(long *param_1,long *param_2,undefined8 *param_3);
void recovered_10024f24(long *string,ulong capacity);
long * recovered_10024f9c(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_10025004(long *param_1,long *param_2);
long * recovered_1002501c(long *param_1,long *param_2,ulong param_3);
ulong * recovered_10025044(ulong *param_1);
void * recovered_10025098(void *output,void *vm,void *argument0);
void * recovered_100250f8(void *output,void *vm,void *argument0);
void * recovered_10025234(void *output,void *vm,void *argument0);
void * recovered_100252cc(void *output,void *vm,void *argument0);
void recovered_100253dc(long *param_1);
void * recovered_10025418(void *output,void *vm,void *argument0);
void recovered_1002550c(long *param_1);
void * recovered_10025534(void *output,void *vm,void *argument0);
long recovered_100256c8(long *param_1,long param_2);
bool recovered_100256d0(long *param_1,undefined8 *in_x1);
void * recovered_10025718(void *output,void *vm,void *argument0);
void * recovered_10025870(void *output,void *vm,void *argument0);
void * recovered_10025970(void *output,void *vm,void *argument0);
void * recovered_10025a6c(void *output,void *vm,void *argument0);
void * recovered_10025b60(void *output,void *vm,void *argument0);
void * recovered_10025bb0(void *output,void *vm,void *argument0);
long recovered_10025bbc(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
void * recovered_10025d00(void *output,void *vm,void *argument0);
void * recovered_10026030(void *output,void *vm,void *argument0);
void * recovered_1002603c(void *output,void *vm,void *argument0);
void * recovered_1002605c(void *output,void *vm,void *argument0);
void * recovered_10026110(void *output,void *vm,void *argument0);
void * recovered_100261c4(void *output,void *vm,void *argument0);
bool recovered_100262d4(undefined8 *param_1,ulong param_2,ulong *param_3,ulong *param_4);
ulong recovered_10026340(long param_1,long param_2,long *param_3,undefined8 *param_4);
void * recovered_100263c4(void *output,void *vm,void *argument0);
bool recovered_100263d0(undefined8 *param_1,ulong param_2,ulong *param_3,ulong *param_4,
                       ulong *param_5,ulong *param_6);
long recovered_100264a0(long *param_1,undefined8 *param_2);
void * recovered_10026514(void *output,void *vm,void *argument0);
void * recovered_10026520(void *output,void *vm,void *argument0);
void * recovered_1002652c(void *output,void *vm,void *argument0);
void * recovered_10026538(void *output,void *vm,void *argument0);
long * recovered_100265a4(long *param_1,char *param_2,ulong param_3);
ulong recovered_100266f4(undefined8 *param_1,undefined8 *param_2);
void recovered_100267b4(long *param_1,ulong param_2);
void * recovered_100267bc(void *output,void *vm,void *argument0);
void * recovered_100267c8(void *output,void *vm,void *argument0);
void * recovered_100268d8(void *output,void *vm,void *argument0);
void * recovered_100268e4(void *output,void *vm,void *argument0);
ulong recovered_100268f0(int *param_1);
void * recovered_10026988(void *output,void *vm,void *argument0);
void recovered_10026994(undefined8 *param_1,long *param_2);
void * recovered_10026cc4(void *output,void *vm,void *argument0);
void * recovered_10026cd0(void *output,void *vm,void *argument0);
void * recovered_10026d2c(void *output,void *vm,void *argument0);
void * recovered_10026d88(void *output,void *vm,void *argument0);
void * recovered_10026e10(void *output,void *vm,void *argument0);
void * recovered_10026eb0(void *output,void *vm,void *argument0);
void * recovered_10026f54(void *output,void *vm,void *argument0);
void * recovered_10026fb0(void *output,void *vm,void *argument0);
void * recovered_1002700c(void *output,void *vm,void *argument0);
void * recovered_1002707c(void *output,void *vm,void *argument0);
void * recovered_10027170(void *output,void *vm,void *argument0);
void * recovered_100271f0(void *output,void *vm,void *argument0);
void recovered_10027258(uint *param_1,uint param_2);
void * recovered_1002728c(void *output,void *vm,void *argument0);
void * recovered_1002732c(void *output,void *vm,void *argument0);
void * recovered_1002739c(void *output,void *vm,void *argument0);
void * recovered_10027450(void *output,void *vm,void *argument0);
void recovered_10027560(undefined8 param_1,long *param_2,ulong *param_3);
void * recovered_1002759c(void *output,void *vm,void *argument0);
void recovered_10027928(undefined8 *param_1,long param_2);
long recovered_10027984(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
long recovered_10027a10(long *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4);
long recovered_10027a9c(long *param_1,int *param_2,undefined1 *param_3);
bool recovered_10027b18(ulong in_d0);
void recovered_10027b34(long *param_1,undefined8 *param_2,undefined1 param_3);
void * recovered_10027b80(void *output,void *vm,void *argument0,void *argument1,void *argument2);
long * recovered_10027c9c(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
undefined8 recovered_10027d10(undefined8 param_1,long param_2);
bool recovered_10027d74(undefined8 *param_1,undefined8 *param_2);
uint recovered_10027db8(undefined8 *param_1,undefined8 *param_2);
void recovered_10027de4(int *param_1);
void recovered_10027eec(long *param_1,ulong param_2);
long recovered_10027f48(long param_1);
long recovered_10027f70(long *param_1,undefined8 *param_2);
void recovered_10028028(long param_1,long param_2,ulong *param_3,int param_4);
void recovered_100280b0(undefined8 *param_1,undefined8 *param_2,int param_3);
void recovered_10028678(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                       long *in_x3,long *in_x4,byte *in_x5);
byte recovered_10028c44(long in_x0,long *in_x1,ulong *in_x2,long *in_x3);
int * recovered_10028cb0(int *param_1,long *param_2,int *param_3);
void recovered_10028d48(undefined4 *param_1,long *param_2,long *in_x4,uint *in_x5);
undefined4 *
recovered_10028f5c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined4 *param_4);
undefined8 recovered_10028ff8(uint *param_1,int param_2,uint *param_3,byte *in_x5);
void recovered_100294b4(undefined4 *param_1,undefined8 *param_2,char *param_3,ulong *param_4,
                       byte *in_x5);
void recovered_100294e4(undefined8 *param_1,int *param_2,int *param_3,uint param_4);
void recovered_10029630(long *param_1,int *param_2,int *param_3,ulong param_4,ulong *in_x4,
                       uint *in_x5);
undefined4 * recovered_1002a8c0(long *param_1,long param_2,undefined4 *param_3);
void recovered_1002a918(long *param_1,ulong param_2);
undefined8 * recovered_1002a994(undefined8 *param_1);
long * recovered_1002a9b8(long *param_1);
void recovered_1002a9fc(undefined8 param_1,long *param_2,long param_3,undefined1 *param_4);
void recovered_1002aaa0(undefined8 param_1,long *param_2,long param_3);
void recovered_1002ab10(undefined8 param_1,long *param_2,long param_3);
void recovered_1002ab80(long *param_1,undefined4 *param_2,undefined4 *param_3);
long * recovered_1002ac9c(long *param_1,long *param_2);
long * recovered_1002acfc(long *param_1);
void recovered_1002ad30(long *param_1);
void recovered_1002ad84(long *param_1);
undefined8 * recovered_1002add8(undefined8 *param_1,undefined8 *param_2);
undefined4 * recovered_1002ae38(undefined4 *param_1,undefined4 *param_2);
ulong recovered_1002ae64(long *param_1,ulong param_2,long param_3);
undefined8 * recovered_1002aff4(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1002b048(undefined8 *param_1,undefined8 *param_2);
void recovered_1002b098(long *param_1,ulong param_2);
void recovered_1002b12c(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong param_5);
long * recovered_1002b28c(long *param_1,undefined8 *param_2);
void recovered_1002b3dc(long *param_1,ulong param_2);
void recovered_1002b45c(long *param_1,undefined8 *param_2);
void recovered_1002b4bc(long *param_1);
undefined8 * recovered_1002b4f0(undefined8 *param_1,undefined8 *param_2);
long * recovered_1002b514(long *param_1);
void * recovered_1002b558(void *output,void *vm,void *argument0);
long recovered_1002b90c(char *param_1,char *param_2,char *param_3);
ulong recovered_1002b934(long *param_1,char param_2,ulong param_3);
long * recovered_1002b968(long *param_1,long param_2,ulong param_3,long param_4);
void recovered_1002ba38(uintptr_t *context);
void * recovered_1002bb2c(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void recovered_1002bc28(long param_1,undefined8 *param_2);
void * recovered_1002bd70(void *output,void *vm,void *argument0);
void * recovered_1002c04c(void *output,void *vm,void *argument0);
ulong recovered_1002c0c0(undefined8 param_1,long param_2,long *param_3,ulong param_4,ulong param_5,
                        undefined8 *param_6,undefined1 param_7);
long recovered_1002c6fc(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4);
long * recovered_1002c83c(long *param_1,long *param_2);
void recovered_1002c890(long *param_1,ulong param_2);
void * recovered_1002c91c(void *output,void *vm,void *argument0);
void * recovered_1002c920(void *output,void *vm,void *argument0,void *argument1);
ulong recovered_1002cae4(undefined8 *param_1,char *param_2,long param_3,ulong param_4);
void recovered_1002cb54(long *param_1,undefined8 param_2,ushort *param_3);
long recovered_1002cebc(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_1002cfb4(undefined8 *param_1,undefined8 *param_2);
void recovered_1002cff0(undefined8 *param_1,undefined4 param_2);
void recovered_1002d024(undefined8 *param_1,undefined1 param_2);
void recovered_1002d03c(undefined8 param_1,ushort *param_2,undefined8 *param_3);
void recovered_1002d108(undefined8 *param_1,long param_2);
void recovered_1002d190(long *param_1,undefined8 *param_2);
undefined4 recovered_1002d1e0(undefined8 *param_1);
void recovered_1002d21c(long *param_1,ulong param_2);
void recovered_1002d2d0(long *param_1,ulong param_2);
void recovered_1002d37c(long *param_1,ulong param_2);
void recovered_1002d408(long *param_1,ulong param_2);
undefined1 recovered_1002d47c(undefined8 *param_1);
void recovered_1002d4ac(long *param_1,ulong param_2);
void recovered_1002d528(long *param_1,ulong param_2);
void recovered_1002d5d0(long *param_1,ulong param_2);
void recovered_1002d644(long *param_1,ulong param_2);
void recovered_1002d6ac(long *param_1,ulong param_2);
void recovered_1002d714(long *param_1,ulong param_2);
void recovered_1002d77c(long *param_1,ulong param_2);
void recovered_1002d828(long *param_1,ulong param_2);
void * recovered_1002d8d0(void *output,void *vm,void *argument0);
void recovered_1002d978(long *param_1,ulong param_2);
long recovered_1002da10(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1002da8c(long *param_1,ulong param_2);
void recovered_1002db04(undefined8 *param_1,undefined4 param_2);
long recovered_1002db2c(undefined8 *param_1,undefined8 *param_2);
long * recovered_1002db68(long *param_1);
void recovered_1002dba8(long *param_1,ulong param_2);
undefined4 recovered_1002dc38(undefined8 *param_1);
void recovered_1002dc78(long *param_1,uint param_2);
void recovered_1002dcd4(long *param_1,undefined8 *param_2);
long recovered_1002dd28(long param_1,uint *param_2);
undefined8 * recovered_1002dd80(undefined8 *param_1);
void recovered_1002dd84(long *param_1,undefined8 *param_2);
undefined1 recovered_1002de50(long *param_1,long *param_2);
ulong recovered_1002dfb4(long *param_1,ulong param_2);
bool recovered_1002e02c(undefined8 *param_1,long *in_x1);
long recovered_1002e04c(undefined8 *param_1,undefined8 param_2);
byte recovered_1002e19c(undefined8 *param_1,long param_2,long param_3);
undefined1 recovered_1002e2d4(long *param_1,ulong param_2,long *param_3,char *param_4);
byte recovered_1002e350(long *param_1,long *param_2,ulong param_3);
void recovered_1002e524(long *param_1,long *param_2,ulong param_3,long *param_4,char *param_5);
void recovered_1002f548(long *param_1,undefined4 *param_2,undefined4 *param_3);
long * recovered_1002f664(long *param_1);
void * recovered_1002f6a4(void *output,void *vm,void *argument0);
undefined8 * recovered_1002f6f0(undefined8 *param_1,undefined2 *param_2);
void * recovered_1002f748(void *output,void *vm,void *argument0);
void * recovered_1002f74c(void *destination);
long * recovered_1002f76c(long *param_1);
void recovered_1002f798(long *param_1);
void recovered_1002f7e8(undefined8 *param_1);
long * recovered_1002f808(long *param_1);
void recovered_1002f834(long *param_1);
undefined8 * recovered_1002f884(undefined8 *param_1);
void recovered_1002f8b8(undefined8 *param_1);
long * recovered_1002f8d8(long *param_1);
void recovered_1002f904(long *param_1);
long recovered_1002f954(long param_1,uint in_w1);
void recovered_1002f998(undefined8 *param_1);
long * recovered_1002f9b8(long *param_1);
void recovered_1002f9e4(long *param_1);
void recovered_1002fa38(undefined8 *param_1);
long * recovered_1002fa58(long *param_1);
void recovered_1002fa84(long *param_1);
undefined8 * recovered_1002fad8(undefined8 *param_1);
long * recovered_1002fb00(long *param_1);
void recovered_1002fb30(undefined8 *param_1);
long * recovered_1002fb50(long *param_1);
void recovered_1002fb7c(long *param_1);
undefined8 * recovered_1002fbcc(undefined8 *param_1);
long * recovered_1002fbf4(long *param_1,long param_2);
void recovered_1002fc38(long *param_1,long param_2,ulong param_3);
long recovered_1002fd20(long param_1);
undefined8 recovered_1002fd44(long *param_1,long param_2,long *param_3);
void recovered_1002fd90(long *param_1);
void * recovered_1002fdc8(ulong capacity);
undefined8 * recovered_1002fde4(undefined8 *param_1);
long * recovered_1002fe0c(long *param_1);
long * recovered_1002fe3c(long *param_1,long *param_2);
long * recovered_1002fe48(long *param_1,long *param_2);
long * recovered_1002fe58(long *param_1,long *param_2);
long * recovered_1002fe6c(long *param_1,long *param_2);
void recovered_1002fe80(long param_1,long *param_2);
void recovered_1002fe90(long param_1,long *param_2);
void recovered_1002fea0(long param_1,long *param_2);
void recovered_1002feb4(long param_1,long *param_2);
void recovered_1002fec8(long param_1,long *param_2);
void recovered_1002fedc(long param_1,long *param_2);
void recovered_1002fef0(long *param_1);
undefined4 * recovered_1002ff58(undefined4 *param_1,undefined8 *param_2);
void recovered_1002ff84(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1002ff90(undefined8 *param_1,undefined8 *param_2);
void recovered_1002ffdc(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1002fff0(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10030008(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10030020(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10030038(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10030050(undefined8 *param_1,undefined8 *param_2);
void recovered_1003006c(long param_1,undefined8 *param_2,undefined8 *param_3);
undefined4 * recovered_100300a4(undefined4 *param_1,long *param_2);
undefined8 * recovered_100300fc(undefined8 *param_1,long *param_2);
long * recovered_10030154(long *param_1,long *param_2);
long * recovered_100301b8(long *param_1,long *param_2);
long * recovered_1003022c(long *param_1,undefined8 *param_2);
long * recovered_10030274(long *param_1,long *param_2);
undefined8 * recovered_100302d4(undefined8 *param_1,long param_2);
void recovered_10030330(void);
void recovered_10030334(void *param_1);
void recovered_10030338(long param_1);
long * recovered_10030368(long *param_1);
undefined8 * recovered_10030398(undefined8 *param_1);
undefined8 * recovered_100303c8(undefined8 *param_1);
undefined8 * recovered_100303f8(undefined8 *param_1);
undefined8 * recovered_10030428(undefined8 *param_1);
undefined8 * recovered_10030458(undefined8 *param_1);
undefined8 * recovered_10030488(undefined8 *param_1);
void recovered_100304b8(undefined4 *param_1);
uint128 recovered_100304d8(char *param_1,char *param_2,ulong *param_3,uint param_4);
uint recovered_100305ec(int param_1);
uint128 recovered_1003061c(char *param_1,char *param_2,int *param_3,uint param_4);
undefined8 * recovered_1003077c(undefined8 *param_1,long in_x1);
void recovered_100307b0(undefined8 *param_1);
undefined1 * recovered_100307c4(long param_1);
undefined8 * recovered_100307dc(undefined8 *param_1);
uint128 recovered_10030810(byte *param_1,byte *param_2,uint param_3,uint param_4);
long * recovered_100308dc(long *param_1,double param_2);
void recovered_10030a98(long *param_1,undefined1 param_2);
void recovered_10030afc(long *param_1,ulong param_2);
uint128 recovered_10030b58(ulong param_1,ulong param_2,ulong param_3,uint param_4);
long * recovered_10030c10(long *param_1,undefined8 *param_2);
long * recovered_10030c50(long *param_1,long param_2,ulong param_3);
long * recovered_10030d34(long *param_1,undefined8 param_2);
long * recovered_10030da4(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_10030e14(long *param_1,long param_2);
uint recovered_10030e48(undefined8 *in_x0,undefined8 *in_x1);
undefined4 * recovered_10030e60(undefined4 *param_1,undefined8 *param_2);
long * recovered_10030e8c(long *param_1,undefined8 *param_2);
int recovered_10030e98(uint *param_1,long param_2,long param_3);
uint128 recovered_10030f5c(double param_1,uint param_2,long param_3);
void recovered_100310dc(undefined4 *param_1,double param_2,int param_3,long param_4);
int recovered_10031264(double param_1,long param_2,long param_3);
void recovered_1003143c(long param_1);
void recovered_10031460(long param_1);
long recovered_10031484(long param_1);
undefined8 * recovered_100314bc(undefined8 *param_1,undefined8 *in_x1);
undefined4 * recovered_100314f0(undefined4 *param_1,undefined4 *param_2);
long * recovered_1003151c(long *param_1,long *param_2);
long * recovered_10031550(long *param_1,long *param_2,long *param_3);
long * recovered_10031564(long *param_1,long *param_2,long *param_3);
long * recovered_1003157c(long *param_1,long *param_2,long *param_3);
long * recovered_10031594(long *param_1,long *param_2,long *param_3);
void recovered_100315ac(long param_1,long *param_2,long *param_3);
long * recovered_100315c4(long *param_1,long *param_2);
void recovered_10031624(long *param_1,ulong param_2);
void * recovered_10031698(ulong param_1);
void recovered_100316a4(long param_1,long *param_2,long *param_3);
void recovered_100316bc(long param_1,long *param_2,long *param_3);
void recovered_100316d4(long param_1,long *param_2,long *param_3);
void recovered_100316ec(long param_1,long *param_2,long *param_3);
void recovered_10031704(long param_1,long *param_2,long *param_3);
void recovered_1003171c(long *param_1,long *param_2);
undefined4 * recovered_1003173c(undefined4 *param_1,undefined4 *param_2);
long recovered_10031768(long param_1,long param_2);
void * recovered_1003179c(void *destination,void *source);
void recovered_100317b8(undefined8 *in_x0);
undefined1 * recovered_100317cc(long param_1);
long recovered_100317e4(long param_1);
void * recovered_10031814(void *param_1,void *param_2);
long * recovered_10031874(long *param_1,long *param_2);
long * recovered_100318e8(long *param_1,long *param_2);
void recovered_1003195c(long *param_1,ulong param_2);
void * recovered_100319f0(long param_1);
void recovered_10031a04(undefined8 *param_1,undefined8 *param_2);
long * recovered_10031a20(long *param_1,long *param_2);
bool recovered_10031a94(char *param_1,long param_2,char *param_3,long param_4);
undefined4 * recovered_10031acc(undefined4 *param_1,long *param_2);
void recovered_10031af8(long *param_1,long *param_2);
undefined4 * recovered_10031b04(undefined4 *param_1,undefined8 *param_2);
undefined8 * recovered_10031b5c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10031ba0(undefined8 *param_1,undefined8 *param_2);
void recovered_10031be0(undefined8 *param_1,undefined8 *param_2);
void recovered_10031bfc(long *param_1);
void recovered_10031c50(long *param_1,undefined4 *param_2,undefined4 *param_3);
long * recovered_10031d84(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_10031db0(long *param_1,ulong param_2,undefined4 *param_3);
long recovered_10031e3c(long param_1,long param_2);
long * recovered_10031e88(long *param_1,long param_2,ulong param_3);
long * recovered_10031eb4(long *param_1,long *param_2);
long * recovered_10031ef4(long *param_1,long *param_2);
void recovered_10031f34(long *param_1);
void recovered_10031f80(long *param_1);
long recovered_10031fcc(long param_1);
long * recovered_10031ffc(long *param_1,long *param_2);
void recovered_10032038(long *param_1,long *param_2);
void recovered_10032058(long *param_1,long *param_2);
bool recovered_10032078(char *param_1,long param_2,char *param_3);
undefined8 * recovered_100320bc(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10032100(undefined8 *param_1,long param_2);
void recovered_1003215c(void);
void recovered_10032160(void *param_1);
void recovered_10032164(long param_1);
undefined8 * recovered_10032194(undefined8 *param_1,undefined8 *param_2);
long recovered_100321d8(long *param_1,undefined8 *param_2,undefined4 *param_3);
long * recovered_10032254(long *param_1,undefined8 *param_2,undefined4 *param_3);
undefined8 recovered_1003229c(void);
ulong recovered_100322e8(long *param_1,char *param_2,ulong param_3,ulong param_4);
int recovered_1003234c(undefined8 *param_1,long param_2,ulong param_3);
long * recovered_100323a8(long *param_1,long *param_2);
undefined8 * recovered_100323e8(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003243c(undefined8 *param_1,undefined8 *param_2);
void recovered_1003247c(long *param_1);
undefined8 * recovered_100324c8(undefined8 *param_1,undefined8 *param_2);
long recovered_1003251c(long param_1);
undefined8 recovered_1003256c(undefined8 *param_1);
long recovered_10032590(long *param_1,undefined1 *param_2,undefined1 *param_3);
long recovered_100325a4(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_1003269c(long *param_1,ulong param_2);
void * recovered_10032710(ulong param_1);
long * recovered_1003271c(long *param_1,long param_2,ulong param_3);
long recovered_10032750(long param_1);
long * recovered_100327d8(long *param_1);
void recovered_10032804(long *param_1);
long * recovered_10032854(long *param_1);
void recovered_10032880(long *param_1);
undefined8 * recovered_100328d4(undefined8 *param_1);
undefined8 * recovered_10032900(undefined8 *param_1);
undefined8 * recovered_1003292c(undefined8 *param_1);
long * recovered_10032958(long *param_1);
void recovered_10032984(long *param_1);
undefined8 * recovered_100329d8(undefined8 *param_1);
ulong recovered_10032a04(undefined8 *param_1,char param_2,ulong param_3);
undefined4 * recovered_10032a54(undefined4 *param_1,undefined8 *param_2);
void recovered_10032a80(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10032a8c(undefined8 *param_1,undefined8 *param_2,uint param_3);
void recovered_10032b04(long param_1,char *param_2,uint param_3);
long * recovered_10032b34(long *param_1);
void recovered_10032b5c(void *param_1);
void recovered_10032b84(long *param_1,char *param_2,uint param_3);
void recovered_10032bdc(long *param_1);
undefined * recovered_10032c10(uint param_1);
void recovered_10032cc8(long *param_1,long param_2,long param_3);
bool recovered_10032d28(long param_1,undefined8 *param_2);
uint recovered_10032db8(long param_1);
long recovered_10032df8(long param_1,long param_2,long param_3);
long recovered_10032e34(long param_1,ulong param_2);
long * recovered_10032f20(long *param_1,long param_2,ulong param_3);
long * recovered_10032f24(long *param_1,ulong param_2,undefined1 param_3);
void recovered_10032f50(long *param_1,ulong param_2,undefined1 param_3);
ulong recovered_10032fcc(ulong param_1);
void recovered_10032fe8(long param_1);
long * recovered_1003305c(long *param_1);
long recovered_100330b4(undefined8 *param_1);
long recovered_10033134(long param_1);
long * recovered_1003315c(long *param_1);
undefined8 * recovered_10033184(undefined8 *param_1);
ulong recovered_100331a8(undefined8 *param_1);
ulong recovered_100331dc(undefined8 param_1,undefined8 *param_2);
ulong recovered_100331f4(byte *param_1,long param_2);
void recovered_1003322c(undefined8 *param_1,long param_2);
long recovered_10033254(long param_1,long param_2);
undefined8 * recovered_10033284(undefined8 *param_1,undefined8 param_2);
void recovered_1003331c(long param_1);
void recovered_10033358(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_10033360(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_100333e4(long *param_1,ulong param_2);
long * recovered_1003344c(long *param_1,undefined8 *param_2);
ulong * recovered_10033464(ulong *param_1,ulong param_2,ulong param_3,ulong param_4);
void recovered_100334bc(ulong *param_1);
bool recovered_10033504(long *param_1,long *param_2);
long * recovered_10033564(long *param_1,long *param_2);
undefined4 * recovered_1003358c(undefined4 *param_1,long *param_2);
undefined8 * recovered_100335e4(undefined8 *param_1,long *param_2);
undefined8 * recovered_1003363c(undefined8 *param_1,long param_2);
void recovered_10033698(void);
void recovered_1003369c(void *param_1);
void recovered_100336a0(long param_1);
undefined4 * recovered_100336d0(undefined4 *param_1,undefined8 *param_2);
undefined8 * recovered_10033728(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003376c(undefined8 *param_1);
ulong recovered_10033798(ulong param_1);
void recovered_100337c4(undefined4 *param_1,undefined4 *param_2);
void recovered_1003383c(undefined8 *param_1,long param_2,long param_3);
uint recovered_10033880(undefined8 *param_1,uint *param_2,uint *param_3,long *in_x4,uint *in_x5);
long recovered_10033964(long param_1);
long recovered_1003399c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
long * recovered_10033a28(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
void recovered_10033aa4(long *param_1,long param_2,ulong param_3);
uint128 recovered_10033aa8(ulong param_1,ulong param_2,ulong param_3,uint param_4);
ulong recovered_10033b60(undefined8 *param_1,char *in_x1);
bool recovered_10033bcc(char *param_1,long param_2);
ulong recovered_10033d78(char *param_1,long param_2);
undefined4 recovered_10033f54(int param_1);
void recovered_10033f78(undefined8 *param_1,undefined8 *param_2);
void recovered_100340cc(undefined4 *param_1,undefined8 *param_2,ulong *param_3);
void recovered_10034190(long *param_1,ulong param_2);
long recovered_100341c0(long param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_10034210(undefined8 *param_1);
undefined8 * recovered_1003424c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003429c(undefined8 *param_1,undefined8 *param_2);
long recovered_100342ec(long param_1);
undefined8 * recovered_10034324(undefined8 *param_1);
undefined8 * recovered_10034350(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100343a4(undefined8 *param_1);
long recovered_100343d0(long param_1);
void recovered_10034400(long *param_1,ulong param_2);
ulong recovered_1003448c(undefined8 *param_1,int param_2);
void recovered_10034858(undefined1 *param_1);
undefined8 * recovered_10034884(undefined8 *param_1,undefined8 *param_2);
void recovered_100348e4(undefined8 *param_1,undefined8 *param_2);
void recovered_10034900(undefined8 *param_1,undefined8 *param_2);
void recovered_1003491c(undefined8 *param_1,undefined8 *param_2);
void * recovered_10034938(long param_1);
int recovered_1003494c(long param_1,uint param_2,uint param_3,uint param_4,undefined2 param_5);
ulong recovered_10034a38(undefined8 *param_1,char *in_x1);
undefined8 recovered_10034a7c(undefined8 *param_1,ulong param_2);
int recovered_10034c50(long param_1,undefined1 param_2,undefined2 param_3);
long recovered_10034ca4(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
long recovered_10034dac(long *param_1,undefined4 *param_2);
void recovered_10034e10(long *param_1,ulong param_2);
void * recovered_10034e84(long param_1);
long recovered_10034e94(long *param_1,undefined8 *param_2);
undefined8 * recovered_10034f08(undefined8 *param_1,undefined8 *param_2);
long * recovered_10034f8c(long *param_1,long *param_2);
long * recovered_10034fe8(long *param_1,long *param_2);
undefined4 * recovered_10035060(undefined4 *param_1,undefined4 *param_2);
void recovered_1003508c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100350a8(undefined8 *param_1);
undefined8 * recovered_1003524c(undefined8 *param_1);
undefined8 * recovered_10035278(undefined8 *param_1);
undefined8 * recovered_10035318(undefined8 *param_1);
long recovered_10035344(long param_1);
void recovered_10035374(undefined2 *param_1);
long recovered_100353e0(long *param_1,undefined1 *param_2);
long * recovered_10035448(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_10035474(long *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_100354e4(void);
void recovered_100354e8(void *param_1);
bool recovered_100354ec(long param_1,undefined4 *param_2);
void recovered_10035790(long param_1);
void recovered_100357c8(long *param_1,long *param_2,long *param_3);
void recovered_100357ec(long *param_1,long *param_2,long *param_3);
void recovered_10035810(long *param_1,long *param_2,long *param_3);
long recovered_10035834(long *param_1,undefined8 *param_2);
void recovered_1003589c(long *param_1,ulong param_2);
void * recovered_10035910(long param_1);
long recovered_10035920(undefined8 *param_1,undefined1 *param_2,long param_3);
uint128 recovered_1003593c(ulong param_1,ulong param_2,uint param_3,uint param_4);
undefined8 * recovered_100359f8(undefined8 *param_1,undefined8 *in_x1);
void recovered_10035a60(long param_1);
void recovered_10035aac(undefined8 *param_1);
undefined8 recovered_10035ac0(long param_1,long *param_2);
undefined8 * recovered_10035b7c(undefined8 *param_1);
void recovered_10035bb0(long *param_1,undefined8 *param_2);
void recovered_10035c20(long *param_1,ulong param_2);
void * recovered_10035cbc(long param_1);
void recovered_10035cd0(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10035d54(long *param_1,ulong param_2);
long * recovered_10035dbc(long *param_1);
void recovered_10035e08(long *param_1);
undefined8 recovered_10035e44(long param_1,ulong param_2,undefined8 *param_3,undefined1 *param_4);
void recovered_10035f50(long *param_1,long param_2,long param_3,long param_4,long param_5);
ulong recovered_10035f90(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                        ulong param_6,undefined8 param_7,ulong *param_8);
bool recovered_100361a0(long param_1,ulong param_2,ulong param_3,uint param_4,byte param_5,
                       ulong *param_6);
bool recovered_100362c8(uint param_1,uint param_2,byte param_3);
ulong recovered_10036304(long param_1,ulong param_2,ulong param_3);
byte recovered_10036340(long param_1,undefined8 param_2,long param_3,ulong param_4,
                       undefined8 param_5,undefined8 param_6);
long recovered_100364c8(long *param_1,undefined8 *param_2);
void recovered_1003653c(long *param_1,ulong param_2);
void * recovered_100365c8(long param_1);
void recovered_100365dc(long *param_1);
void recovered_10036644(long *param_1);
undefined8 * recovered_100366ac(undefined8 *param_1);
long * recovered_100366d8(long *param_1);
void recovered_10036704(long *param_1);
undefined8 * recovered_10036754(undefined8 *param_1);
undefined8 * recovered_1003677c(undefined8 *param_1);
undefined8 * recovered_100367a8(undefined8 *param_1);
undefined8 * recovered_100367d4(undefined8 *param_1);
long recovered_10036800(long *param_1,undefined8 *param_2);
long recovered_10036874(long *param_1,undefined8 *param_2);
undefined8 * recovered_100368e8(undefined8 *param_1);
long * recovered_10036914(long *param_1);
void recovered_10036940(long *param_1);
undefined8 * recovered_10036994(undefined8 *param_1);
undefined8 * recovered_100369c0(undefined8 *param_1);
void recovered_100369ec(long *param_1);
long * recovered_10036a54(long *param_1);
void recovered_10036a80(long *param_1);
long * recovered_10036ad0(long *param_1);
void recovered_10036afc(long *param_1);
void recovered_10036b50(void);
void recovered_10036b54(void *param_1);
void * recovered_10036b58(void *output,void *vm,void *argument0);
void recovered_10036b5c(long param_1);
void recovered_10036b84(void);
void recovered_10036b88(void *param_1);
ulong recovered_10036b8c(undefined4 *param_1,long param_2,long param_3);
void recovered_10036b94(long param_1);
void recovered_10036bbc(void);
void recovered_10036bc0(void *param_1);
ulong recovered_10036bc4(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036bcc(long param_1);
void recovered_10036bf4(void);
void recovered_10036bf8(void *param_1);
void * recovered_10036bfc(void *output,void *vm,void *argument0);
void recovered_10036c00(long param_1);
void recovered_10036c28(void);
void recovered_10036c2c(void *param_1);
void * recovered_10036c30(void *output,void *vm,void *argument0);
void recovered_10036c34(long param_1);
void recovered_10036c5c(void);
void recovered_10036c60(void *param_1);
void * recovered_10036c64(void *output,void *vm,void *argument0);
void recovered_10036c68(long param_1);
void recovered_10036c90(void);
void recovered_10036c94(void *param_1);
void * recovered_10036c98(void *output,void *vm,void *argument0);
void recovered_10036c9c(long param_1);
void recovered_10036cc4(void);
void recovered_10036cc8(void *param_1);
void * recovered_10036ccc(void *output,void *vm,void *argument0);
void recovered_10036cd0(long param_1);
void recovered_10036cf8(void);
void recovered_10036cfc(void *param_1);
void recovered_10036d00(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036d08(long param_1);
void recovered_10036d30(void);
void recovered_10036d34(void *param_1);
long recovered_10036d38(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036d40(long param_1);
void recovered_10036d68(void);
void recovered_10036d6c(void *param_1);
void * recovered_10036d70(void *output,void *vm,void *argument0);
void recovered_10036d74(long param_1);
void recovered_10036d9c(void);
void recovered_10036da0(void *param_1);
void recovered_10036da4(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036dac(long param_1);
void recovered_10036dd4(void);
void recovered_10036dd8(void *param_1);
void * recovered_10036ddc(void *output,void *vm,void *argument0);
void recovered_10036de0(long param_1);
void recovered_10036e08(void);
void recovered_10036e0c(void *param_1);
undefined4 * recovered_10036e10(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036e18(long param_1);
void recovered_10036e40(void);
void recovered_10036e44(void *param_1);
void recovered_10036e48(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036e50(long param_1);
void recovered_10036e78(void);
void recovered_10036e7c(void *param_1);
void recovered_10036e80(undefined4 *param_1,long param_2,long *param_3,long *in_x4,uint *in_x5);
void recovered_10036e88(long param_1);
void recovered_10036eb0(void);
void recovered_10036eb4(void *param_1);
void recovered_10036eb8(undefined4 *param_1,long param_2,long *param_3);
void recovered_10036ec0(long param_1);
void recovered_10036ee8(void);
void recovered_10036eec(void *param_1);
void recovered_10036ef0(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036ef8(long param_1);
void recovered_10036f20(void);
void recovered_10036f24(void *param_1);
void recovered_10036f28(undefined4 *param_1,long param_2,undefined8 *in_x1,ulong *in_x4,uint *in_x5);
void recovered_10036f30(long param_1);
void recovered_10036f58(void);
void recovered_10036f5c(void *param_1);
void recovered_10036f60(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036f68(long param_1);
void recovered_10036f90(void);
void recovered_10036f94(void *param_1);
void recovered_10036f98(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036fa0(long param_1);
void recovered_10036fc8(void);
void recovered_10036fcc(void *param_1);
void recovered_10036fd0(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10036fd8(long param_1);
void recovered_10037000(void);
void recovered_10037004(void *param_1);
void recovered_10037008(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10037010(long param_1);
void recovered_10037038(void);
void recovered_1003703c(void *param_1);
void recovered_10037040(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10037048(long param_1);
void recovered_10037070(void);
void recovered_10037074(void *param_1);
long * recovered_10037078(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037080(long param_1);
void recovered_100370a8(void);
void recovered_100370ac(void *param_1);
void * recovered_100370b0(void *output,void *vm,void *argument0);
void recovered_100370b4(long param_1);
void recovered_100370dc(void);
void recovered_100370e0(void *param_1);
void recovered_100370e4(undefined4 *param_1,long param_2);
void recovered_100370ec(long param_1);
void recovered_10037114(void);
void recovered_10037118(void *param_1);
void recovered_1003711c(undefined4 *param_1,long param_2,long param_3);
void recovered_10037124(long param_1);
void recovered_1003714c(void);
void recovered_10037150(void *param_1);
void recovered_10037154(undefined4 *param_1,undefined8 param_2,long param_3);
void recovered_100371a4(long param_1);
void recovered_100371cc(void);
void recovered_100371d0(void *param_1);
void recovered_100371d4(undefined4 *param_1,long param_2,undefined8 *param_3,undefined8 in_x2,
                       long *in_x3,long *in_x4,byte *in_x5);
void recovered_1003726c(long param_1);
void recovered_10037294(long *param_1,long *param_2);
long recovered_100372b4(long *param_1,undefined4 *param_2);
void recovered_10037328(void);
void recovered_1003732c(void *param_1);
void recovered_10037330(undefined4 *param_1,undefined8 param_2,undefined8 *param_3);
void recovered_100373f0(long param_1);
void * recovered_10037418(long param_1);
void recovered_1003742c(void);
void recovered_10037430(void *param_1);
void recovered_10037434(undefined4 *param_1,undefined8 param_2,undefined8 *param_3);
void recovered_10037528(long param_1);
void recovered_10037550(void);
void recovered_10037554(void *param_1);
void recovered_10037558(undefined4 *param_1,long param_2,long *param_3,ulong in_x3,long *in_x4,
                       uint *in_x5);
void recovered_10037604(long param_1);
void recovered_1003762c(void);
void recovered_10037630(void *param_1);
void recovered_10037634(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037720(long param_1);
void recovered_10037748(long param_1);
long recovered_10037778(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_100377f4(long param_1,long param_2);
void recovered_10037834(long param_1,ulong param_2);
ulong recovered_1003789c(ulong param_1);
void recovered_100378b8(long param_1);
undefined8 * recovered_1003791c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
ulong recovered_10037964(long param_1,undefined8 *in_x1);
void recovered_10037994(void);
void recovered_10037998(void *param_1);
void * recovered_1003799c(void *output,void *vm,void *argument0);
void recovered_100379a0(long param_1);
void recovered_100379c8(void);
void recovered_100379cc(void *param_1);
void recovered_100379d0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3);
void recovered_10037a64(long param_1);
void recovered_10037a8c(void);
void recovered_10037a90(void *param_1);
void * recovered_10037a94(void *output,void *vm,void *argument0);
void recovered_10037a98(long param_1);
void recovered_10037ac0(void);
void recovered_10037ac4(void *param_1);
void * recovered_10037ac8(void *output,void *vm,void *argument0);
void recovered_10037acc(long param_1);
void recovered_10037af4(void);
void recovered_10037af8(void *param_1);
void * recovered_10037afc(void *output,void *vm,void *argument0);
void recovered_10037b00(long param_1);
void recovered_10037b28(void);
void recovered_10037b2c(void *param_1);
void * recovered_10037b30(void *output,void *vm,void *argument0);
void recovered_10037b34(long param_1);
void recovered_10037b5c(void);
void recovered_10037b60(void *param_1);
void * recovered_10037b64(void *output,void *vm,void *argument0);
void recovered_10037b68(long param_1);
void recovered_10037b90(void);
void recovered_10037b94(void *param_1);
void * recovered_10037b98(void *output,void *vm,void *argument0);
void recovered_10037b9c(long param_1);
void recovered_10037bc4(void);
void recovered_10037bc8(void *param_1);
void * recovered_10037bcc(void *output,void *vm,void *argument0);
void recovered_10037bd0(long param_1);
void recovered_10037bf8(void);
void recovered_10037bfc(void *param_1);
void * recovered_10037c00(void *output,void *vm,void *argument0);
void recovered_10037c04(long param_1);
void recovered_10037c2c(void);
void recovered_10037c30(void *param_1);
void * recovered_10037c34(void *output,void *vm,void *argument0);
void recovered_10037c38(long param_1);
void recovered_10037c60(void);
void recovered_10037c64(void *param_1);
void * recovered_10037c68(void *output,void *vm,void *argument0);
void recovered_10037c6c(long param_1);
void recovered_10037c94(void);
void recovered_10037c98(void *param_1);
void recovered_10037c9c(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037ca4(long param_1);
void recovered_10037ccc(void);
void recovered_10037cd0(void *param_1);
void recovered_10037cd4(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037cdc(long param_1);
void recovered_10037d04(void);
void recovered_10037d08(void *param_1);
void recovered_10037d0c(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037d14(long param_1);
void recovered_10037d3c(void);
void recovered_10037d40(void *param_1);
void recovered_10037d44(undefined4 *param_1,long param_2,long *param_3);
void recovered_10037d4c(long param_1);
void recovered_10037d74(void);
void recovered_10037d78(void *param_1);
void * recovered_10037d7c(void *output,void *vm,void *argument0);
void recovered_10037d80(long param_1);
void recovered_10037da8(void);
void recovered_10037dac(void *param_1);
void * recovered_10037db0(void *output,void *vm,void *argument0);
void recovered_10037db4(long param_1);
void recovered_10037ddc(void);
void recovered_10037de0(void *param_1);
void * recovered_10037de4(void *output,void *vm,void *argument0);
void recovered_10037de8(long param_1);
void recovered_10037e10(void);
void recovered_10037e14(void *param_1);
void recovered_10037e18(uint *param_1,long param_2,long *param_3);
void recovered_10037e20(long param_1);
void recovered_10037e48(void);
void recovered_10037e4c(void *param_1);
void recovered_10037e50(uint *param_1,long param_2,long *param_3);
void recovered_10037e58(long param_1);
void recovered_10037e80(void);
void recovered_10037e84(void *param_1);
void * recovered_10037e88(void *output,void *vm,void *argument0);
void recovered_10037e8c(long param_1);
void recovered_10037eb4(void);
void recovered_10037eb8(void *param_1);
void * recovered_10037ebc(void *output,void *vm,void *argument0);
void recovered_10037ec0(long param_1);
void recovered_10037ee8(void);
void recovered_10037eec(void *param_1);
void * recovered_10037ef0(void *output,void *vm,void *argument0);
void recovered_10037ef4(long param_1);
void recovered_10037f1c(void);
void recovered_10037f20(void *param_1);
void * recovered_10037f24(void *output,void *vm,void *argument0);
void recovered_10037f28(long param_1);
void recovered_10037f50(void);
void recovered_10037f54(void *param_1);
void * recovered_10037f58(void *output,void *vm,void *argument0);
void recovered_10037f5c(long param_1);
void recovered_10037f84(void);
void recovered_10037f88(void *param_1);
ulong recovered_10037f8c(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10037f94(long param_1);
void recovered_10037fbc(void);
void recovered_10037fc0(void *param_1);
void recovered_10037fc4(undefined4 *param_1,long param_2,undefined8 *param_3);
void recovered_10037fcc(long param_1);
void recovered_10037ff4(void);
void recovered_10037ff8(void *param_1);
void * recovered_10037ffc(void *output,void *vm,void *argument0);
void recovered_10038000(long param_1);
void recovered_10038028(void);
void recovered_1003802c(void *param_1);
void * recovered_10038030(void *output,void *vm,void *argument0);
void recovered_10038034(long param_1);
void recovered_1003805c(void);
void recovered_10038060(void *param_1);
void recovered_10038064(undefined4 *param_1,long param_2,long *param_3);
void recovered_10038070(long param_1);
void recovered_10038098(void);
void recovered_1003809c(void *param_1);
void recovered_100380a0(undefined4 *param_1,long param_2,long param_3);
void recovered_100380a8(long param_1);
void recovered_100380d0(void);
void recovered_100380d4(void *param_1);
void * recovered_100380d8(void *output,void *vm,void *argument0);
void recovered_100380dc(long param_1);
undefined4 * recovered_10038104(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_10038140(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_1003817c(undefined4 *param_1,undefined4 *param_2);
undefined1 * recovered_100381bc(undefined1 *param_1,undefined1 *param_2);
undefined4 * recovered_100381fc(undefined4 *param_1,undefined4 *param_2);
void recovered_1003823c(long *param_1,long *param_2);
long recovered_1003825c(long *param_1,undefined8 *param_2);
long recovered_100382cc(long *param_1,undefined8 *param_2);
void recovered_10038334(long *param_1,ulong param_2);
void * recovered_100383a8(long param_1);
void recovered_100383b8(long *param_1,ulong param_2);
void * recovered_10038434(long param_1);
void recovered_10038444(undefined8 *param_1);
undefined8 * recovered_1003848c(undefined8 *param_1,long param_2);
void recovered_100384e8(void);
void recovered_100384ec(void *param_1);
void recovered_100384f0(long param_1);
long * recovered_10038520(long *param_1);
undefined8 * recovered_10038588(undefined8 *param_1);
void recovered_100385b4(long *param_1,ulong param_2);
void * recovered_10038648(long param_1);
void * recovered_1003865c(long param_1);
undefined8 * recovered_1003866c(undefined8 *param_1,long param_2);
long * recovered_100386b4(long *param_1,undefined8 *param_2,undefined4 *param_3);
long recovered_100386fc(long *param_1,undefined8 *param_2);
long recovered_10038770(long *param_1,void *param_2);
void recovered_100387e4(long *param_1,ulong param_2);
void * recovered_10038878(long param_1);
void * recovered_1003888c(void *param_1,void *param_2);
long * recovered_100388d8(long *param_1,undefined8 *param_2,undefined4 *param_3);
void * recovered_10038920(long param_1);
undefined8 * recovered_10038934(undefined8 *param_1,long param_2,long param_3);
long recovered_10038998(long *param_1,undefined4 *param_2);
void recovered_10038a0c(undefined2 *param_1);
undefined8 * recovered_10038a6c(undefined8 *param_1,long param_2);
void recovered_10038ac8(void);
void recovered_10038acc(void *param_1);
void recovered_10038ad0(long param_1);
long recovered_10038b00(long param_1);
void recovered_10038b6c(long *param_1);
void * recovered_10038bd4(long param_1);
long recovered_10038be8(long param_1,long param_2);
void recovered_10038d00(undefined8 *param_1,undefined8 *param_2);
void recovered_10038d1c(undefined8 *param_1,undefined8 *param_2);
void recovered_10038d38(undefined8 *param_1,undefined8 *param_2);
long recovered_10038d54(long *param_1,long param_2);
long recovered_10038dc8(long param_1,long param_2);
long * recovered_10038fe4(long *param_1,long *param_2);
long * recovered_1003905c(long *param_1,long *param_2);
void recovered_100390d0(long *param_1,ulong param_2);
void * recovered_10039164(long param_1);
undefined8 * recovered_10039178(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100391c8(undefined8 *param_1,undefined8 *param_2);
long * recovered_1003922c(long *param_1,long *param_2);
void recovered_10039294(long *param_1,ulong param_2);
void * recovered_10039310(long param_1);
long * recovered_10039320(long *param_1,long *param_2);
undefined4 * recovered_10039394(undefined4 *param_1,undefined4 *param_2);
void recovered_100393c0(undefined8 *param_1,undefined8 *param_2);
void recovered_100393dc(undefined8 *param_1,undefined8 *param_2);
void recovered_100393f8(long param_1);
long recovered_10039428(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_100394a4(long param_1,long param_2);
void recovered_100394e4(long param_1,ulong param_2);
ulong recovered_1003954c(ulong param_1);
void recovered_10039568(long param_1);
void recovered_100395cc(long *param_1,ulong param_2);
void * recovered_10039660(long param_1);
undefined8 * recovered_10039670(undefined8 *param_1,long param_2);
void recovered_100396a4(undefined8 *param_1,undefined8 *param_2);
long * recovered_100396cc(long *param_1,undefined8 *param_2,undefined8 *param_3);
ulong recovered_10039700(long param_1,undefined8 *in_x1);
long recovered_10039730(long *param_1,undefined8 *param_2);
void recovered_100397a0(long *param_1);
long recovered_10039808(long *param_1,undefined8 *param_2);
ulong recovered_10039878(long param_1,undefined8 *in_x1);
void recovered_100398a8(long *param_1);
long recovered_100398d8(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10039954(long *param_1,long param_2);
void recovered_10039994(long param_1,ulong param_2);
ulong recovered_100399fc(ulong param_1);
void recovered_10039a18(long param_1);
void recovered_10039a7c(long *param_1,ulong param_2);
void * recovered_10039b10(long param_1);
void recovered_10039b20(undefined8 *param_1,long param_2);
void recovered_10039b48(long *param_1,undefined8 *param_2,undefined8 *param_3);
long recovered_10039b70(long *param_1,undefined1 *param_2);
void recovered_10039bd4(long *param_1,ulong param_2);
void * recovered_10039c48(ulong param_1);
long recovered_10039c54(long *param_1,undefined8 *param_2);
void recovered_10039c88(long param_1);
long recovered_10039cb8(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10039d34(long param_1,long param_2);
long recovered_10039d74(long *param_1,undefined8 *param_2);
ulong recovered_10039de4(long param_1,undefined8 *in_x1);
void recovered_10039e14(long param_1,ulong param_2);
ulong recovered_10039e7c(ulong param_1);
void recovered_10039e98(long param_1);
void recovered_10039efc(long *param_1,ulong param_2);
void * recovered_10039f90(long param_1);
void recovered_10039fa0(undefined8 *param_1,long param_2);
void recovered_10039fcc(long *param_1,undefined8 *param_2,undefined8 *param_3);
void * recovered_10039ff8(long param_1);
long recovered_1003a008(long *param_1,undefined8 *param_2);
long recovered_1003a070(long *param_1,long *param_2);
void recovered_1003a0a8(long *param_1);
long recovered_1003a0d8(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1003a154(long *param_1,long param_2);
long recovered_1003a198(long *param_1,long *param_2);
ulong recovered_1003a208(long param_1,undefined8 *param_2);
void recovered_1003a23c(undefined8 param_1,undefined8 param_2);
void recovered_1003a264(long param_1,ulong param_2);
ulong recovered_1003a2cc(ulong param_1);
void recovered_1003a2e8(long param_1);
void recovered_1003a34c(long *param_1,ulong param_2);
void * recovered_1003a3e4(long param_1);
undefined8 * recovered_1003a3f8(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003a424(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003a4b0(undefined8 *param_1,undefined8 *param_2);
void recovered_1003a4f0(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003a50c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_1003a53c(undefined8 *param_1);
long recovered_1003a5f8(long *param_1,long param_2);
long recovered_1003a600(long *param_1,long param_2);
long recovered_1003a608(long *param_1,long param_2,long param_3);
undefined8 * recovered_1003a6f0(undefined8 *param_1,undefined8 *param_2);
long recovered_1003a71c(long *param_1,long param_2,long param_3);
void recovered_1003a788(ulong param_1,ulong param_2);
undefined8 * recovered_1003a83c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 * recovered_1003a874(undefined8 *param_1);
long * recovered_1003a8a0(long *param_1);
void recovered_1003a8cc(long *param_1);
undefined8 * recovered_1003a920(undefined8 *param_1);
undefined2 * recovered_1003a94c(undefined2 *param_1,undefined2 *param_2);
void recovered_1003aa24(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aa40(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aa5c(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aa78(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aa94(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aab0(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aacc(undefined8 *param_1,undefined8 *param_2);
void recovered_1003aae8(undefined8 *param_1,undefined8 *param_2);
void recovered_1003ab04(undefined8 *param_1,undefined8 *param_2);
void recovered_1003ab20(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003ab3c(undefined8 *param_1,long param_2);
void recovered_1003ab98(void);
void recovered_1003ab9c(void *param_1);
void recovered_1003aba0(long param_1);
long recovered_1003abd0(long *param_1,undefined8 *param_2);
ulong recovered_1003ac44(long param_1,undefined8 *in_x1);
void recovered_1003ac74(long *param_1);
long recovered_1003aca4(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1003ad20(long *param_1,long param_2);
void recovered_1003ad64(long param_1,ulong param_2);
ulong recovered_1003adcc(ulong param_1);
void recovered_1003ade8(long param_1);
void recovered_1003ae4c(long *param_1,ulong param_2);
void * recovered_1003aee0(long param_1);
undefined8 * recovered_1003aef4(undefined8 *param_1,long param_2);
void recovered_1003af28(undefined8 *param_1,undefined8 *param_2);
long * recovered_1003af58(long *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_1003af8c(long *param_1,undefined1 *param_2,undefined1 *param_3);
long recovered_1003afc4(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
undefined8 * recovered_1003b0bc(undefined8 *param_1);
undefined8 * recovered_1003b0e8(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_1003b120(void);
void recovered_1003b124(void *param_1);
void recovered_1003b128(long param_1);
void recovered_1003b168(long *param_1);
undefined8 * recovered_1003b1d0(undefined8 *param_1,long param_2);
void recovered_1003b22c(void);
void recovered_1003b230(void *param_1);
void recovered_1003b234(long param_1);
void recovered_1003b268(long *param_1);
void recovered_1003b2d0(long *param_1);
undefined8 * recovered_1003b338(undefined8 *param_1);
void recovered_1003b3c8(long param_1,char *in_x1,uint in_w2);
long recovered_1003b400(long param_1);
void recovered_1003b428(void *param_1);
long recovered_1003b450(long param_1);
void recovered_1003b458(long param_1);
undefined8 * recovered_1003b460(undefined8 *param_1,long param_2);
void recovered_1003b4bc(void);
void recovered_1003b4c0(void *param_1);
void recovered_1003b4c4(long param_1);
void recovered_1003b4f8(long *param_1);
void recovered_1003b560(long *param_1);
undefined8 * recovered_1003b5c8(undefined8 *param_1);
void recovered_1003b5ec(undefined8 *in_x0);
void recovered_1003b600(undefined4 *param_1,long param_2,long *param_3);
undefined8 * recovered_1003b674(long param_1);
undefined8 * recovered_1003b6b0(undefined8 *param_1);
void recovered_1003b6d4(undefined8 *in_x0);
void recovered_1003b6e8(undefined4 *param_1,long param_2,long *param_3);
undefined8 * recovered_1003b75c(long param_1);
undefined8 * recovered_1003b798(undefined8 *param_1);
void recovered_1003b7bc(undefined8 *in_x0);
void recovered_1003b7d0(undefined4 *param_1,long param_2,long *param_3);
undefined8 * recovered_1003b844(long param_1);
long recovered_1003b880(long *param_1,long param_2,long param_3);
long recovered_1003b968(long *param_1,long param_2);
long recovered_1003b9bc(long *param_1,long param_2);
long recovered_1003b9c4(long *param_1,long param_2,long param_3);
long recovered_1003ba9c(long param_1,long param_2);
long recovered_1003bad0(long *param_1,long param_2,undefined4 *param_3);
void recovered_1003bbb0(long *param_1,long *param_2);
undefined8 * recovered_1003bbd0(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003bc14(undefined8 *param_1,undefined8 *in_x1);
undefined8 * recovered_1003bc40(undefined8 *param_1);
void recovered_1003bc68(undefined8 *in_x0);
void recovered_1003bc7c(undefined4 *param_1,long param_2,long *param_3,ulong *in_x4,uint *in_x5);
undefined8 * recovered_1003bd8c(long param_1);
ulong recovered_1003be0c(undefined8 *param_1,char *in_x1);
void recovered_1003be78(undefined4 *param_1,undefined8 *param_2,long *in_x3,ulong *in_x4,uint *in_x5
                       );
void recovered_1003d2dc(undefined4 *param_1,long *param_2);
undefined8 * recovered_1003d350(undefined8 *param_1,long *param_2);
long recovered_1003d3a8(long param_1,long param_2);
undefined8 * recovered_1003d3dc(undefined8 *param_1);
undefined8 * recovered_1003d408(undefined8 *param_1);
long recovered_1003d434(long *param_1,undefined8 *param_2);
long recovered_1003d49c(long *param_1,undefined8 *param_2);
void * recovered_1003d510(long param_1);
long recovered_1003d524(long *param_1,undefined8 *param_2);
void * recovered_1003d58c(long param_1);
long recovered_1003d5a0(long *param_1,undefined8 *param_2);
long recovered_1003d614(long *param_1,long param_2);
long recovered_1003d688(long *param_1,undefined8 *param_2);
void recovered_1003d6fc(long *param_1,ulong param_2);
void * recovered_1003d788(long param_1);
long recovered_1003d79c(long *param_1,undefined8 *param_2);
void recovered_1003d810(long *param_1,ulong param_2);
void * recovered_1003d89c(long param_1);
long recovered_1003d8b0(long *param_1,undefined8 *param_2);
void recovered_1003d924(long *param_1,ulong param_2);
void * recovered_1003d9b8(long param_1);
void recovered_1003d9cc(undefined8 *param_1,undefined8 *param_2);
long recovered_1003d9e8(long *param_1,undefined8 *param_2);
long recovered_1003da5c(long *param_1,undefined8 *param_2);
void recovered_1003dac4(long *param_1,ulong param_2);
void * recovered_1003db38(long param_1);
long recovered_1003db48(long *param_1,undefined8 *param_2);
void recovered_1003dbb0(long *param_1,ulong param_2);
void * recovered_1003dc24(long param_1);
long recovered_1003dc34(long *param_1,undefined8 *param_2);
void recovered_1003dc9c(long *param_1,ulong param_2);
void * recovered_1003dd10(long param_1);
long recovered_1003dd20(long *param_1,undefined8 *param_2);
void recovered_1003dd8c(long *param_1,ulong param_2);
void * recovered_1003de20(long param_1);
undefined8 * recovered_1003de30(undefined8 *param_1,undefined8 *param_2);
long recovered_1003de6c(long *param_1,undefined8 *param_2);
void recovered_1003dee0(long *param_1,ulong param_2);
void * recovered_1003df78(long param_1);
undefined8 * recovered_1003df8c(undefined8 *param_1,undefined8 *param_2);
void * recovered_1003dfc4(long param_1);
void recovered_1003dfd8(undefined8 *param_1);
long * recovered_1003dff4(long *param_1);
void recovered_1003e020(long *param_1);
void * recovered_1003e070(long param_1);
undefined8 * recovered_1003e080(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1003e0ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1003e0dc(ulong *param_1,ulong *param_2);
undefined8 * recovered_1003e184(undefined8 *param_1,undefined8 *param_2);
ulong recovered_1003e1b0(ulong *param_1,ulong *param_2);
void recovered_1003e1e4(undefined8 *param_1,long param_2);
void recovered_1003e208(void);
void recovered_1003e20c(void *param_1);
undefined8 * recovered_1003e210(long param_1,undefined4 *param_2);
undefined8 * recovered_1003e61c(long param_1);
void recovered_1003e660(undefined8 *param_1,undefined1 param_2);
long recovered_1003e678(long *param_1);
long recovered_1003e6b0(long *param_1,undefined8 *in_x1);
void recovered_1003e6e4(void);
void recovered_1003e6e8(void *param_1);
void recovered_1003e6ec(undefined4 *param_1,long param_2,ulong param_3);
undefined8 * recovered_1003ecfc(long param_1);
undefined1 recovered_1003ed40(undefined8 *param_1);
void recovered_1003ed74(long param_1,ulong param_2);
uint128 recovered_1003edc8(long *param_1,undefined8 *param_2,undefined4 *param_3);
long * recovered_1003ee58(long *param_1,ulong param_2);
void recovered_1003ee84(long *param_1,ulong param_2);
long recovered_1003eeec(long *param_1,undefined8 *param_2);
undefined8 * recovered_1003ef60(undefined8 *param_1,ulong in_x1);
bool recovered_1003ef8c(long *param_1);
long recovered_1003efe0(undefined8 *param_1,undefined8 param_2);
long recovered_1003f130(long *param_1,long *param_2);
void recovered_1003f19c(long *param_1,ulong param_2);
void * recovered_1003f22c(long param_1);
undefined2 * recovered_1003f23c(undefined2 *param_1,undefined2 *param_2);
long * recovered_1003f3d8(long *param_1,long *param_2);
long * recovered_1003f44c(long *param_1,long *param_2);
long * recovered_1003f4c4(long *param_1,long *param_2);
long * recovered_1003f53c(long *param_1,long *param_2);
long * recovered_1003f5b0(long *param_1,long *param_2);
long * recovered_1003f628(long *param_1,long *param_2);
long * recovered_1003f688(long *param_1,long *param_2);
long * recovered_1003f6e8(long *param_1,long *param_2);
long * recovered_1003f748(long *param_1,long *param_2);
undefined8 * recovered_1003f7bc(undefined8 *param_1,undefined8 *param_2);
long * recovered_1003f7f4(long *param_1,long *param_2);
undefined8 * recovered_1003f868(undefined8 *param_1,undefined8 *param_2);
long * recovered_1003f8b8(long *param_1,long *param_2);

/* Original analysis identifiers for manual recovery units. */
