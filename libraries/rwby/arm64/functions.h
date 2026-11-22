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
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
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
void * recovered_10000d44(void *destination,void *source,ulong count);
void * recovered_10000e1c(void *destination,void *source,ulong count);
void * recovered_10000f30(void *destination,int value,ulong count);
void recovered_10000fc8(ulong *param_1,ulong param_2);
void recovered_10000fcc(ulong *param_1,ulong param_2);
int recovered_10000fd0(void *left,void *right,ulong count);
int recovered_1000113c(long param_1,long param_2);
bool recovered_1000116c(int param_1);
bool recovered_1000117c(int param_1);
bool recovered_1000118c(uint param_1);
bool recovered_100011a0(uint param_1);
bool recovered_100011bc(int param_1);
bool recovered_100011cc(int param_1);
int recovered_100011dc(int param_1);
int recovered_100011f0(int param_1);
ulong recovered_10001204(char *text);
int recovered_10001228(char *left,char *right);
int recovered_10001250(char *left,char *right);
void recovered_10001254(long param_1,long param_2);
void recovered_1000126c(char *param_1);
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
undefined4 * recovered_10002978(char *param_1,long param_2);
undefined8 recovered_10002bb4(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002c04(long param_1,ulong param_2);
undefined4 * recovered_10002c8c(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002cc0(int *param_1);
ulong recovered_10002d04(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002e38(int *param_1);
long recovered_10002f1c(void *param_1,long param_2,long param_3,uint *param_4);
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
int recovered_10003424(char *left,char *right,ulong count);
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
long recovered_10003a1c(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_10003a5c(undefined8 *param_1,undefined8 *param_2);
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
ulonglong recovered_10003cf4(char *text,char **end,int base);
ulonglong recovered_10003e38(char *text,char **end,int base);
undefined8 recovered_10003e3c(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_10004014(uint param_1,long *param_2);
ulong recovered_10004108(undefined8 *param_1);
ulong recovered_10004140(byte *param_1,long param_2);
ulong recovered_1000416c(undefined8 *param_1);
void recovered_100041e4(undefined8 *param_1);
void recovered_100041fc(char *param_1);
void recovered_1000421c(undefined1 *param_1);
void recovered_10004220(undefined1 *param_1);
void recovered_10004224(undefined1 *param_1);
void recovered_10004228(undefined1 *param_1);
void recovered_1000422c(undefined1 *param_1,int param_2);
void recovered_10004230(undefined1 *param_1,int param_2);
void recovered_10004234(undefined1 *param_1,undefined8 param_2);
void recovered_10004238(undefined1 *param_1,undefined8 param_2);
void recovered_1000423c(undefined8 param_1,undefined1 *param_2);
void recovered_10004240(undefined8 param_1,undefined1 *param_2);
void recovered_10004244(undefined1 *param_1,undefined1 param_2);
void recovered_10004248(undefined1 *param_1,undefined1 param_2);
undefined1 * recovered_1000424c(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_1000429c(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_100042a0(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_100042c8(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_100042cc(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_100042f0(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_100042f4(undefined1 *param_1,long *param_2);
undefined8 * recovered_10004328(undefined8 *param_1,long *param_2);
undefined1 * recovered_10004380(undefined1 *param_1,long *param_2);
undefined1 * recovered_10004384(undefined1 *param_1,undefined8 *param_2);
undefined8 * recovered_100043b8(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_100043fc(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_10004400(undefined1 *param_1,long *param_2);
undefined8 * recovered_10004434(undefined8 *param_1,long *param_2);
undefined1 * recovered_1000448c(undefined1 *param_1,long *param_2);
undefined1 * recovered_10004490(undefined1 *param_1,undefined8 *param_2);
undefined8 * recovered_100044c4(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10004508(undefined1 *param_1,undefined8 *param_2);
void * recovered_1000450c(void *output);
long * recovered_10004550(long *param_1);
void * recovered_10004554(void *output);
byte recovered_100045a8(char *param_1);
void * recovered_100045e0(void *output,void *argument1);
void recovered_10004890(undefined8 *param_1,ulong param_2);
long * recovered_100048ec(double param_1,long *param_2);
long * recovered_10004944(long *param_1,undefined8 *param_2);
void recovered_1000495c(long *param_1,undefined8 *param_2,long param_3);
void recovered_100049a8(long *param_1,long param_2,undefined8 *param_3);
longlong recovered_100049f4(void *value);
undefined8 * recovered_10004a88(undefined8 *param_1,long in_x1);
undefined8 * recovered_10004a8c(undefined8 *param_1);
uint128 recovered_10004a90(char *param_1);
char recovered_10004b38(char *param_1);
char * recovered_10004b98(char *param_1);
undefined8 recovered_10004bf8(char *param_1);
undefined8 recovered_10004c58(char *param_1);
undefined8 recovered_10004cb8(char *param_1);
undefined8 recovered_10004d18(char *param_1);
long * recovered_10004d78(long *param_1);
void recovered_10004da4(undefined8 *param_1);
long * recovered_10004de8(long *param_1);
undefined8 * recovered_10004dec(undefined8 *param_1);
undefined8 * recovered_10004df0(undefined8 *param_1);
void recovered_10004df4(long *param_1,long *param_2);
void recovered_10004e0c(long *param_1,long *param_2);
long * recovered_10004e24(long *param_1,long *param_2);
long * recovered_10004e58(long *param_1,long *param_2);
void recovered_10004e94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10004ee4(long *param_1,undefined8 *param_2,undefined8 *param_3);
undefined1 * recovered_10005064(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3);
undefined1 * recovered_1000506c(long *param_1,undefined8 *param_2,undefined1 *param_3);
bool recovered_100050bc(long *param_1,undefined8 *param_2,undefined1 *param_3);
bool recovered_100050c4(long param_1,undefined8 *param_2,undefined1 *param_3);
void * recovered_10005110(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_10005118(void *output,void *argument1,void *argument2,void *argument3);
undefined8
recovered_100067a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
undefined8
recovered_100067ac(void *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void * recovered_10006954(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_1000695c(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_10006a28(void *output,void *argument1,void *argument2);
void * recovered_10006a30(void *output,void *argument1,void *argument2);
void * recovered_10006b60(void *output,void *argument1,void *argument2);
void * recovered_10006b68(void *output,void *argument1,void *argument2);
void * recovered_10006c74(void *output,void *argument1,void *argument2);
void * recovered_10006c7c(void *output,void *argument1,void *argument2);
void * recovered_10006dc0(void *output,void *argument1,void *argument2);
void * recovered_10006dc8(void *output,void *argument1);
void recovered_10006dcc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void * recovered_10006e2c(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_10006e30(void *output,void *argument1,void *argument2);
void * recovered_10006e34(void *output,void *argument1,void *argument2);
void * recovered_10006e38(void *output,void *argument1,void *argument2);
void * recovered_10006e3c(void *output,void *argument1,void *argument2);
long * recovered_10006e40(long *param_1,long param_2);
void recovered_10006e84(long *param_1,long param_2,ulong param_3);
long recovered_10006f6c(long param_1);
undefined8 recovered_10006f90(long *param_1,long param_2,long *param_3);
void recovered_10006fdc(long *param_1);
void recovered_10007014(long *param_1,ulong param_2);
undefined8 * recovered_1000708c(undefined8 *param_1,long param_2,ulong param_3);
void * recovered_100070c0(ulong capacity);
undefined8 * recovered_100070dc(undefined8 *param_1);
void * recovered_10007104(void *destination);
undefined8 * recovered_10007124(undefined8 *param_1);
long * recovered_10007150(long *param_1);
void recovered_1000717c(long *param_1);
undefined8 * recovered_100071cc(undefined8 *param_1);
long * recovered_100071f4(long *param_1);
long * recovered_10007224(long *param_1,long *param_2);
long * recovered_10007230(long *param_1,long *param_2);
long * recovered_10007240(long *param_1,long *param_2);
long * recovered_10007250(long *param_1,long *param_2);
long * recovered_10007260(long *param_1,long *param_2);
void recovered_10007274(long param_1,long *param_2);
void recovered_10007288(long param_1,long *param_2);
void recovered_1000729c(long param_1,long *param_2);
void recovered_100072b0(long *param_1);
undefined8 * recovered_10007318(undefined8 *param_1);
uint128 recovered_10007348(byte *param_1,byte *param_2,ulong param_3,uint param_4);
long * recovered_10007414(long *param_1,double param_2);
void recovered_100075d0(long *param_1,undefined1 param_2);
void recovered_10007634(undefined8 *param_1,ulong param_2);
uint128 recovered_10007690(ulong param_1,ulong param_2,ulong param_3,uint param_4);
undefined8 * recovered_10007748(undefined8 *param_1,undefined8 *param_2);
long * recovered_10007788(long *param_1,long param_2,ulong param_3);
long * recovered_1000786c(long *param_1,long param_2);
undefined8 * recovered_100078a0(undefined8 *param_1,long in_x1);
void recovered_100078d4(undefined8 *param_1);
undefined1 * recovered_100078e8(long param_1);
undefined8 * recovered_10007900(undefined8 *param_1);
undefined8 recovered_10007934(long param_1,undefined8 *param_2);
void recovered_100079b0(long param_1,ulong param_2,undefined1 *param_3);
long recovered_10007a30(long *param_1,undefined8 *param_2);
undefined1 * recovered_10007ae4(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_10007b10(undefined8 *param_1);
bool recovered_10007b54(undefined8 *param_1,char *param_2);
long * recovered_10007ba4(long *param_1,long *param_2);
undefined8 * recovered_10007bf0(undefined8 *param_1,undefined8 *param_2);
void recovered_10007c34(undefined2 *param_1);
undefined8 * recovered_10007c54(undefined8 *param_1,long param_2);
void recovered_10007cb0(void);
void recovered_10007cb4(void *param_1);
void recovered_10007cb8(long param_1);
long recovered_10007ce8(long param_1);
long * recovered_10007d2c(long *param_1);
bool recovered_10007d8c(char *param_1,long param_2,char *param_3,long param_4);
undefined8 * recovered_10007dc4(undefined8 *param_1,undefined8 *param_2);
long recovered_10007e08(long *param_1,undefined8 *param_2);
uint128 recovered_10007e3c(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10007ecc(long *param_1);
long recovered_10007f2c(long *param_1,undefined8 *param_2);
ulong recovered_10007f9c(long param_1,undefined8 *param_2);
ulong recovered_10007fcc(undefined8 param_1,undefined8 *param_2);
ulong recovered_10007fe4(byte *param_1,long param_2);
bool recovered_1000801c(undefined8 *param_1,undefined8 *param_2);
void recovered_10008044(long *param_1);
long recovered_10008074(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_100080f0(long *param_1,long param_2);
void recovered_10008130(long param_1,ulong param_2);
void recovered_10008198(long *param_1,ulong param_2,undefined8 *param_3);
ulong recovered_100081a0(ulong param_1);
void recovered_100081bc(long param_1);
void recovered_10008220(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_100082a4(long *param_1,ulong param_2);
void recovered_1000830c(long *param_1,ulong param_2);
void * recovered_10008380(long param_1);
void recovered_10008390(long *param_1,ulong param_2);
void * recovered_10008424(long param_1);
void recovered_10008434(undefined8 *param_1,undefined8 *param_2);
void * recovered_1000845c(void *destination,void *source);
void recovered_10008478(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
long recovered_100084a0(long *param_1,undefined8 *param_2);
void recovered_10008508(long *param_1,ulong param_2);
void * recovered_100085a0(long param_1);
undefined1 * recovered_100085b4(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_100085e0(undefined8 *param_1,undefined8 *param_2);
void recovered_10008614(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008620(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008638(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008650(long param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008668(long param_1,undefined8 *param_2,undefined8 *param_3);
long recovered_100086a0(long *param_1,undefined1 *param_2);
void recovered_10008708(long *param_1,ulong param_2);
void * recovered_1000877c(ulong param_1);
void recovered_10008788(long *param_1,ulong param_2);
void recovered_10008834(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_100088b8(long *param_1,ulong param_2);
long recovered_10008920(long *param_1,undefined8 *param_2);
void recovered_10008954(long param_1);
long recovered_10008984(long *param_1,undefined8 *param_2,undefined1 *param_3);
void recovered_10008a00(long param_1,long param_2);
long recovered_10008a40(long *param_1,undefined8 *param_2);
ulong recovered_10008ab0(long param_1,undefined8 *in_x1);
void recovered_10008ae0(long param_1,ulong param_2);
ulong recovered_10008b48(ulong param_1);
void recovered_10008b64(long param_1);
void recovered_10008bc8(long *param_1,ulong param_2);
void * recovered_10008c5c(long param_1);
undefined8 * recovered_10008c6c(undefined8 *param_1,long param_2);
undefined8 * recovered_10008cb4(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3);
long * recovered_10008cfc(long *param_1,long *param_2);
long * recovered_10008d48(long *param_1,long *param_2,long *param_3);
long * recovered_10008d54(long *param_1,long *param_2,long *param_3);
long * recovered_10008d6c(long *param_1,long *param_2,long *param_3);
long * recovered_10008d84(long *param_1,long *param_2,long *param_3);
long * recovered_10008d9c(long *param_1,long *param_2,long *param_3);
void recovered_10008db4(long param_1,long *param_2,long *param_3);
void recovered_10008dcc(long param_1,long *param_2,long *param_3);
void recovered_10008de4(long *param_1,long *param_2);
void recovered_10008e04(long param_1,long *param_2,long *param_3);
void recovered_10008e1c(long *param_1,long *param_2);
void recovered_10008e3c(long *param_1,long *param_2);
undefined8 recovered_10008e5c(long param_1,undefined8 *in_x1);
long recovered_10008e9c(long param_1,ulong param_2);
long recovered_10008ed8(long *param_1,undefined8 *in_x1);
long * recovered_10008f0c(long *param_1);
undefined8 * recovered_10008f68(undefined8 *param_1);
long * recovered_10008fd0(long *param_1);
undefined8 * recovered_10008ffc(undefined8 *param_1);
void recovered_10009020(long *param_1,undefined1 *param_2);
void recovered_100090d4(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,
                       undefined4 param_4,undefined4 param_5);
void recovered_10009118(undefined8 *in_x0);
void recovered_10009154(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,
                       undefined8 *param_5);
void recovered_10009200(long *param_1,undefined8 *param_2,undefined8 param_3);
undefined1 * recovered_1000924c(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_1000927c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100092c8(undefined8 *param_1,undefined8 *in_x1);
undefined8 * recovered_100092cc(undefined8 *param_1,undefined8 *in_x1);
long recovered_10009300(long param_1,ulong param_2);
long * recovered_100093ec(long *param_1,ulong param_2,undefined1 param_3);
void recovered_10009418(long *param_1,ulong param_2,undefined1 param_3);
ulong recovered_10009494(ulong param_1);
undefined8 * recovered_100094b0(undefined8 *param_1);
undefined8 * recovered_100094d4(undefined8 *param_1);
long * recovered_10009530(long *param_1,long param_2);
void recovered_1000956c(long *param_1,ulong param_2);
long recovered_100095fc(long param_1,long param_2);
void recovered_100096ac(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_100096c8(undefined8 *param_1,undefined8 *param_2);
void * recovered_10009708(void *destination,void *source);
void recovered_10009724(undefined8 *param_1,undefined8 *param_2);
void recovered_10009740(undefined8 *param_1,undefined8 *param_2);
void recovered_1000975c(undefined8 *param_1);
long * recovered_1000977c(long *param_1);
void recovered_100097a8(long *param_1);
undefined8 * recovered_100097f8(undefined8 *param_1);
undefined8 * recovered_10009824(undefined8 *param_1);
long * recovered_10009854(long *param_1);
void recovered_10009880(long *param_1);
long * recovered_100098d4(long *param_1);
void recovered_100098f4(long *param_1);
long recovered_10009940(long *param_1,undefined1 *param_2,long param_3);
void recovered_10009958(long *param_1,undefined4 param_2);
long recovered_10009970(long *param_1,undefined8 *param_2);
void recovered_100099ac(long *param_1,undefined1 param_2);
void recovered_100099cc(long *param_1,undefined4 param_2);
long recovered_100099e4(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_10009adc(long *param_1,undefined1 *param_2);
undefined8 * recovered_10009b44(undefined8 *param_1);
void recovered_10009b70(long *param_1);
void recovered_10009ba4(long *param_1,undefined8 param_2);
void recovered_1000a3dc(long param_1);
bool recovered_1000a7d8(long *param_1,uint param_2);
long recovered_1000a818(long *param_1);
void recovered_1000a84c(long *param_1,undefined8 param_2);
void recovered_1000a8c0(long param_1,int param_2,undefined1 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6);
void recovered_1000a934(long *param_1);
long recovered_1000a968(long param_1,int param_2,undefined1 in_w2,undefined4 in_w3);
void recovered_1000a9a0(long *param_1,undefined8 param_2,char *param_3,long param_4);
undefined1 * recovered_1000aa24(undefined1 *param_1,undefined1 *param_2);
long recovered_1000aa54(long *param_1,uint param_2,undefined8 *param_3);
long recovered_1000aab4(long *param_1,undefined8 *param_2);
undefined8 * recovered_1000ab1c(undefined8 *param_1);
long * recovered_1000abe4(long *param_1,long *param_2);
int recovered_1000ac44(long param_1,undefined1 *param_2);
long recovered_1000ac6c(long *param_1,undefined8 *param_2);
void recovered_1000ace0(long *param_1,ulong param_2);
void * recovered_1000ad74(long param_1);
long * recovered_1000ad88(long *param_1,long *param_2);
long recovered_1000adfc(long param_1,long param_2);
void recovered_1000afcc(long *param_1,ulong param_2);
long * recovered_1000b040(long *param_1,long *param_2);
long * recovered_1000b0a4(long *param_1,long *param_2);
void recovered_1000b118(long *param_1,ulong param_2);
void * recovered_1000b1ac(long param_1);
void recovered_1000b1bc(undefined8 *param_1,long param_2);
void recovered_1000b1e4(undefined8 *param_1,long param_2);
long * recovered_1000b20c(long *param_1,long *param_2);
void recovered_1000b268(long *param_1,ulong param_2);
void * recovered_1000b2dc(long param_1);
long * recovered_1000b2ec(long *param_1,long *param_2);
void recovered_1000b34c(long *param_1,ulong param_2);
undefined8 * recovered_1000b3e0(undefined8 *param_1,undefined8 *param_2);
long recovered_1000b410(long *param_1,undefined1 *param_2);
undefined1 * recovered_1000b484(undefined1 *param_1,undefined1 *param_2);
long recovered_1000b4b0(long param_1,long param_2);
void recovered_1000b4e4(long *param_1,undefined8 param_2);
void recovered_1000b558(long *param_1,undefined8 param_2);
void recovered_1000b5d8(long *param_1,undefined8 param_2);
void recovered_1000b680(long *param_1,undefined8 param_2);
void recovered_1000b700(long *param_1,undefined8 param_2);
void recovered_1000b798(long *param_1,undefined8 param_2);
ulong recovered_1000bc14(char *param_1,long param_2,long *param_3,uint param_4);
uint128 recovered_1000bc64(byte *param_1,long param_2,long *param_3);
uint128 recovered_1000be4c(char *param_1,char *param_2,ulong *param_3,uint param_4);
uint recovered_1000bfa0(int param_1);
void recovered_1000bfd0(long param_1);
void recovered_1000bff8(long *param_1,ulong param_2,undefined4 *param_3);
long recovered_1000c000(long param_1,undefined8 *param_2);
long recovered_1000c058(long *param_1,undefined8 *param_2);
void recovered_1000c08c(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_1000c10c(long *param_1,ulong param_2);
undefined8
recovered_1000c170(long param_1,ulong param_2,ulong param_3,long *param_4,undefined4 *param_5);
undefined8 * recovered_1000c444(undefined8 *param_1,undefined8 *param_2);
void recovered_1000c48c(long *param_1,undefined8 *param_2);
long recovered_1000c4dc(long *param_1,undefined4 *param_2);
char * recovered_1000c540(long param_1,uint param_2);
uint recovered_1000c580(undefined8 *in_x0,char *in_x1);
uint128 recovered_1000c598(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_1000c628(long param_1);
long recovered_1000c658(long *param_1,undefined8 *param_2,undefined4 *param_3);
void recovered_1000c6d4(long param_1,long param_2);
void recovered_1000c714(long param_1,ulong param_2);
ulong recovered_1000c77c(ulong param_1);
void recovered_1000c798(long param_1);
void recovered_1000c7fc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
ulong recovered_1000c824(long param_1,undefined8 *in_x1);
long recovered_1000c854(long *param_1,undefined8 *param_2);
long * recovered_1000c8c4(long *param_1,long *param_2);
long recovered_1000c938(long param_1);
undefined8 * recovered_1000c960(undefined8 *param_1,char *param_2,uint param_3);
void recovered_1000c9c4(long param_1,char *param_2,uint param_3);
long * recovered_1000c9f4(long *param_1);
void recovered_1000ca1c(void *param_1);
void recovered_1000ca44(long *param_1,char *param_2,uint param_3);
void recovered_1000ca9c(long *param_1);
undefined * recovered_1000cad0(uint param_1);
void recovered_1000cb88(long *param_1,long param_2,long param_3);
long * recovered_1000cbe8(long *param_1,long *param_2);
long recovered_1000cc94(long param_1);
undefined8 * recovered_1000ccbc(undefined8 *param_1,char *param_2,uint param_3);
void recovered_1000cd24(long param_1,char *param_2,uint param_3);
void recovered_1000cd5c(void *param_1);
void recovered_1000cd84(undefined8 *param_1,long param_2);
void recovered_1000ce04(long param_1,long *param_2);
void recovered_1000d264(undefined1 *param_1,long *param_2,long *param_3,uint param_4,long param_5,
                       long param_6);
void recovered_1000e2e4(undefined8 *param_1,undefined8 *param_2);
void recovered_1000e300(void);
void recovered_1000e304(void *param_1);
void recovered_1000e308(long param_1);
undefined4 recovered_1000e330(long *param_1,long *param_2);
void recovered_1000e374(undefined8 *param_1,long *param_2,long *param_3);
undefined1 recovered_1000e3fc(long *param_1,long *param_2);
void recovered_1000e470(long *param_1,undefined8 *param_2);
void recovered_1000e4e0(long *param_1,undefined8 *param_2);
void recovered_1000e550(long *param_1,undefined1 *param_2);
long recovered_1000e5c0(long *param_1,undefined8 *param_2);
undefined4 recovered_1000e634(long *param_1,long *param_2);
long recovered_1000e678(long *param_1,undefined8 *param_2);
void recovered_1000e6ec(undefined8 *param_1,uint param_2,undefined8 *param_3);
void recovered_1000e790(long *param_1,ulong param_2,undefined1 *param_3);
char * recovered_1000e798(long param_1,uint param_2,undefined8 param_3);
void recovered_1000e814(undefined1 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4);
undefined1 * recovered_1000e87c(undefined1 *param_1,undefined1 *param_2);
void recovered_1000e8a8(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5);
void recovered_1000ea2c(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5);
void recovered_1000ead0(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5);
void recovered_1000eb74(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5);
void recovered_1000ec2c(undefined1 *param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                       undefined8 param_5);
void recovered_1000ed30(undefined1 *param_1,byte *param_2,undefined8 *param_3,undefined8 param_4);
bool recovered_1000eda8(byte *param_1,byte *param_2);
void recovered_1000f004(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 param_4,
                       undefined8 *param_5,undefined8 param_6);
long * recovered_1000f16c(long *param_1,long *param_2,long param_3,char *param_4,char *param_5,
                         ulong param_6,undefined8 param_7);
void recovered_1000f8b0(undefined1 *param_1,long *param_2);
void recovered_1000f8f0(long param_1,undefined8 *param_2,undefined4 param_3,long *param_4);
long recovered_1000f984(long *param_1,char *param_2);
void recovered_1000fa04(long param_1);
void recovered_1000fa24(long *param_1);
long recovered_1000fa60(long param_1,long param_2);
long recovered_1000faac(long *param_1,undefined1 *param_2);
void recovered_1000fb20(long *param_1,undefined8 *param_2,undefined8 *param_3);
long recovered_1000fb6c(long *param_1,long param_2,long param_3,long param_4);
long recovered_1000fcb0(long *param_1,undefined8 *in_x1);
uint recovered_1000fce4(undefined8 *param_1,undefined8 *param_2);
uint recovered_1000fd10(undefined8 *param_1,undefined8 *param_2);
uint recovered_1000fd34(undefined8 *in_x0,undefined8 *in_x1);
int recovered_1000fd4c(undefined8 *param_1,long param_2,ulong param_3);
void recovered_1000fda8(long param_1,ulong param_2,ulong param_3,ulong param_4);
long recovered_1000fe64(long *param_1,undefined8 *param_2);
long recovered_1000fed8(long *param_1,char *param_2);
void recovered_1000ff48(long *param_1,long *param_2,long param_3,long param_4,long param_5,
                       ulong param_6);
undefined8 * recovered_10010158(undefined8 *param_1,ulong param_2,ulong param_3);
void recovered_100102dc(undefined8 *param_1,ulong param_2);
uint128 recovered_10010338(ulong param_1,ulong param_2,ulong param_3,uint param_4);
long * recovered_100103f0(long *param_1,long *param_2,long param_3,long param_4,uint param_5,
                         long param_6,ulong param_7);
long recovered_10010960(long *param_1,undefined8 *param_2);
undefined8 * recovered_10010a14(undefined8 *param_1,undefined1 *param_2);
long recovered_10010b24(long *param_1,undefined8 *param_2,undefined1 *param_3);
undefined8 * recovered_10010ba0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3);
void recovered_10010be8(long param_1,long *param_2);
undefined8 * recovered_10010c28(undefined8 *param_1,ulong in_x1);
long recovered_10010c54(long param_1);
void recovered_10010c8c(long *param_1,ulong param_2,int param_3);
long recovered_10010cdc(long *param_1);
void recovered_10010d1c(long *param_1,long param_2,long param_3);
void recovered_10010d70(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10010d7c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10010d88(undefined8 *param_1,long param_2);
void recovered_10010de4(void);
void recovered_10010de8(void *param_1);
void recovered_10010dec(long param_1);
void recovered_10010e1c(long *param_1);
long * recovered_10010e84(long *param_1,long *param_2);
long * recovered_10010ee8(long *param_1,long *param_2);
undefined8 * recovered_10010f5c(undefined8 *param_1,long param_2);
undefined8 * recovered_10010fa4(undefined8 *param_1,long param_2);
void recovered_10011000(void);
void recovered_10011004(void *param_1);
void recovered_10011008(long param_1);
void recovered_10011038(long *param_1);
undefined8 * recovered_100110a0(undefined8 *param_1,undefined8 *param_2);
void * recovered_100110e0(void *destination,void *source);
long * recovered_100110fc(long *param_1);
void recovered_10011128(long *param_1);
undefined8 * recovered_1001117c(undefined8 *param_1);
void recovered_10011258(long *param_1);
void recovered_10012dcc(undefined8 *param_1);
long * recovered_10012dec(long *param_1);
void recovered_10012e18(long *param_1);
uint * recovered_10012e68(uint *param_1,undefined8 param_2);
uint * recovered_10012ea0(uint *param_1,uint param_2);
void recovered_10012ee4(uint *param_1,uint param_2);
undefined8 * recovered_10012f18(undefined8 *param_1);
void recovered_10012f54(void);
void recovered_10012f58(void *param_1);
void recovered_10012f5c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10012f64(void);
void recovered_10012f8c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10013044(undefined8 *param_1);
void recovered_10013080(void);
void recovered_10013084(void *param_1);
void recovered_10013088(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10013090(void);
void recovered_100130b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001313c(undefined8 *param_1);
void recovered_10013178(void);
void recovered_1001317c(void *param_1);
void recovered_10013180(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10013188(void);
void recovered_100131b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10013274(long param_1,long param_2,ulong param_3,ulong param_4);
undefined8 * recovered_10013334(undefined8 *param_1);
void recovered_10013370(void);
void recovered_10013374(void *param_1);
void recovered_10013378(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10013380(void);
void recovered_100133a8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10013418(undefined8 *param_1);
void recovered_10013454(void);
void recovered_10013458(void *param_1);
void recovered_1001345c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10013464(void);
void recovered_1001348c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_100134ec(undefined8 *param_1);
void recovered_10013528(void);
void recovered_1001352c(void *param_1);
undefined1 *
recovered_10013530(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10013538(void);
undefined1 *
recovered_10013560(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
undefined8 * recovered_100135cc(undefined8 *param_1);
void recovered_10013608(void);
void recovered_1001360c(void *param_1);
void recovered_10013610(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10013618(void);
void recovered_10013640(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
ulong recovered_10013784(long param_1,long *param_2,ulong param_3);
undefined8 recovered_1001381c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3);
long recovered_100138b0(long param_1,long *param_2,ulong param_3);
undefined8 * recovered_1001398c(undefined8 *param_1);
void recovered_100139c8(void);
void recovered_100139cc(void *param_1);
void recovered_100139d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_100139d8(void);
void recovered_10013a00(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_10013ac4(undefined8 *param_1);
void recovered_10013b00(void);
void recovered_10013b04(void *param_1);
void recovered_10013b08(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10013b10(void);
void recovered_10013b38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10013d08(undefined1 *param_1,double param_2);
ulong recovered_10013d98(undefined8 *param_1,char *param_2,long param_3,ulong param_4);
bool recovered_10013df0(ulong in_d0);
undefined8 * recovered_10013e0c(undefined8 *param_1);
void recovered_10013e48(void);
void recovered_10013e4c(void *param_1);
void recovered_10013e50(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10013e58(void);
void recovered_10013e80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10013ebc(undefined8 *param_1);
void recovered_10013ef8(void);
void recovered_10013efc(void *param_1);
void recovered_10013f00(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
void recovered_10013f08(void);
void recovered_10013f30(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined8 * recovered_10014004(undefined8 *param_1,undefined8 param_2);
void recovered_10014044(void);
void recovered_10014048(void *param_1);
void recovered_1001404c(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10014054(long param_1);
void recovered_1001408c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_100144e8(undefined8 *param_1);
void recovered_10014524(void);
void recovered_10014528(void *param_1);
void recovered_1001452c(undefined1 *param_1,undefined8 param_2,void *param_3,long param_4);
void recovered_10014534(void);
void recovered_1001455c(undefined1 *param_1,undefined8 param_2,void *param_3,long param_4);
char * recovered_10014718(long param_1,long *in_x1,ulong in_x2);
undefined8 * recovered_100147b0(undefined8 *param_1);
void recovered_100147ec(void);
void recovered_100147f0(void *param_1);
void recovered_100147f4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_100147fc(void);
void recovered_10014824(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10014a30(long *param_1,undefined8 *param_2);
undefined8 * recovered_10014aa0(undefined8 *param_1);
void recovered_10014adc(void);
void recovered_10014ae0(void *param_1);
void recovered_10014ae4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10014aec(void);
void recovered_10014b14(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long * recovered_10014c54(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10014c80(long *param_1,ulong param_2,undefined1 *param_3);
undefined8 * recovered_10014d0c(undefined8 *param_1);
void recovered_10014d48(void);
void recovered_10014d4c(void *param_1);
void recovered_10014d50(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10014d58(void);
void recovered_10014d80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10014db8(undefined8 *param_1);
void recovered_10014df4(void);
void recovered_10014df8(void *param_1);
undefined1 *
recovered_10014dfc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10014e04(void);
undefined1 *
recovered_10014e2c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 recovered_10014ec4(long param_1,long *param_2);
undefined8 * recovered_10014f64(undefined8 *param_1);
void recovered_10014fa0(void);
void recovered_10014fa4(void *param_1);
void recovered_10014fa8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10014fb0(void);
void recovered_10014fd8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10015184(undefined8 *param_1);
void recovered_100151c0(void);
void recovered_100151c4(void *param_1);
void recovered_100151c8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_100151d0(void);
void recovered_100151f8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
long recovered_1001528c(long *param_1,long param_2);
long recovered_10015294(long *param_1,long param_2,long param_3);
undefined8 * recovered_1001537c(undefined8 *param_1);
void recovered_100153b8(void);
void recovered_100153bc(void *param_1);
undefined1 *
recovered_100153c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100153c8(void);
undefined1 *
recovered_100153f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10015464(undefined8 *param_1);
void recovered_100154a0(void);
void recovered_100154a4(void *param_1);
void recovered_100154a8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_100154b0(void);
void recovered_100154d8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10015624(undefined8 *param_1);
void recovered_10015660(void);
void recovered_10015664(void *param_1);
void recovered_10015668(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10015670(void);
void recovered_10015698(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001573c(long param_1,long param_2);
void recovered_10015784(undefined1 *param_1,undefined1 *param_2);
undefined8 * recovered_100157fc(undefined8 *param_1);
void recovered_10015838(void);
void recovered_1001583c(void *param_1);
void recovered_10015840(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10015848(void);
void recovered_10015870(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_100159b4(undefined8 *param_1);
void recovered_100159f0(void);
void recovered_100159f4(void *param_1);
void recovered_100159f8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10015a00(void);
void recovered_10015a28(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long recovered_10015bd0(long *param_1,long param_2);
long recovered_10015c24(long *param_1,long param_2);
long recovered_10015c2c(long *param_1,long param_2);
long recovered_10015c34(long *param_1,long param_2,long param_3);
long recovered_10015d0c(long param_1,long param_2);
long recovered_10015d40(long *param_1,long param_2,long param_3);
undefined8 * recovered_10015dac(undefined8 *param_1);
void recovered_10015de8(void);
void recovered_10015dec(void *param_1);
void recovered_10015df0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10015df8(void);
void recovered_10015e20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10015ef8(undefined8 *param_1);
void recovered_10015f34(void);
void recovered_10015f38(void *param_1);
undefined1 *
recovered_10015f3c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10015f44(void);
undefined1 *
recovered_10015f6c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10015fcc(undefined8 *param_1);
void recovered_10016008(void);
void recovered_1001600c(void *param_1);
undefined1 *
recovered_10016010(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10016018(void);
undefined1 *
recovered_10016040(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
undefined8 * recovered_100160f8(undefined8 *param_1);
void recovered_10016134(void);
void recovered_10016138(void *param_1);
char * recovered_1001613c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10016144(void);
char * recovered_1001616c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10016224(long param_1);
undefined8 * recovered_1001624c(undefined8 *param_1);
void recovered_10016288(void);
void recovered_1001628c(void *param_1);
void recovered_10016290(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10016298(void);
void recovered_100162c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
long recovered_10016428(long *param_1,undefined8 *param_2);
void recovered_1001649c(ulong param_1,ulong param_2);
ulong recovered_10016570(undefined8 param_1,char *param_2,char *param_3);
undefined8 * recovered_100165a8(undefined8 *param_1);
void recovered_100165e4(void);
void recovered_100165e8(void *param_1);
void recovered_100165ec(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_100165f4(void);
void recovered_1001661c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_10016734(undefined8 *param_1);
void recovered_10016770(void);
void recovered_10016774(void *param_1);
undefined1 *
recovered_10016778(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10016780(void);
undefined1 *
recovered_100167a8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_100168dc(undefined8 *param_1);
void recovered_10016918(void);
void recovered_1001691c(void *param_1);
void recovered_10016920(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10016928(void);
void recovered_10016950(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10016a54(undefined8 *param_1);
void recovered_10016a90(void);
void recovered_10016a94(void *param_1);
char * recovered_10016a98(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void recovered_10016aa0(void);
char * recovered_10016ac8(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
undefined8 * recovered_10016c1c(undefined8 *param_1);
void recovered_10016c58(void);
void recovered_10016c5c(void *param_1);
void recovered_10016c60(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10016c68(void);
void recovered_10016c90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long recovered_10016db4(long *param_1,long param_2,undefined1 *param_3);
undefined8 * recovered_10016e94(undefined8 *param_1);
void recovered_10016ed0(void);
void recovered_10016ed4(void *param_1);
void recovered_10016ed8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10016ee0(void);
void recovered_10016f08(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_10017044(undefined8 *param_1);
void recovered_10017080(void);
void recovered_10017084(void *param_1);
void recovered_10017088(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10017090(void);
void recovered_100170b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_10017164(byte *param_1,byte *param_2);
ulong recovered_10017238(undefined8 param_1,byte *param_2,byte *param_3);
undefined8 * recovered_100172f0(undefined8 *param_1);
void recovered_1001732c(void);
void recovered_10017330(void *param_1);
void recovered_10017334(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
void recovered_1001733c(void);
void recovered_10017364(undefined1 *param_1,undefined8 param_2,undefined8 param_3,
                       undefined8 *param_4);
undefined8 * recovered_10017550(undefined8 *param_1);
void recovered_1001758c(void);
void recovered_10017590(void *param_1);
void recovered_10017594(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001759c(void);
void recovered_100175c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
uint128 recovered_10017620(long param_1,long *in_x1,ulong in_x2);
undefined8 * recovered_100176b8(undefined8 *param_1);
void recovered_100176f4(void);
void recovered_100176f8(void *param_1);
void recovered_100176fc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017704(void);
void recovered_1001772c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017788(undefined8 *param_1);
void recovered_100177c4(void);
void recovered_100177c8(void *param_1);
void recovered_100177cc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100177d4(void);
void recovered_100177fc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017858(undefined8 *param_1);
void recovered_10017894(void);
void recovered_10017898(void *param_1);
void recovered_1001789c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_100178a4(void);
void recovered_100178cc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10017964(undefined8 *param_1);
void recovered_100179a0(void);
void recovered_100179a4(void *param_1);
void recovered_100179a8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_100179b0(void);
void recovered_100179d8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10017a70(undefined8 *param_1);
void recovered_10017aac(void);
void recovered_10017ab0(void *param_1);
void recovered_10017ab4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017abc(void);
void recovered_10017ae4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017b4c(undefined8 *param_1);
void recovered_10017b88(void);
void recovered_10017b8c(void *param_1);
void recovered_10017b90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017b98(void);
void recovered_10017bc0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017c28(undefined8 *param_1);
void recovered_10017c64(void);
void recovered_10017c68(void *param_1);
void recovered_10017c6c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017c74(void);
void recovered_10017c9c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017d0c(undefined8 *param_1);
void recovered_10017d48(void);
void recovered_10017d4c(void *param_1);
void recovered_10017d50(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017d58(void);
void recovered_10017d80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017de8(undefined8 *param_1);
void recovered_10017e24(void);
void recovered_10017e28(void *param_1);
void recovered_10017e2c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017e34(void);
void recovered_10017e5c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017ec4(undefined8 *param_1);
void recovered_10017f00(void);
void recovered_10017f04(void *param_1);
void recovered_10017f08(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10017f10(void);
void recovered_10017f38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10017fb8(undefined8 *param_1);
void recovered_10017ff4(void);
void recovered_10017ff8(void *param_1);
void recovered_10017ffc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10018004(void);
void recovered_1001802c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10018090(undefined8 *param_1);
void recovered_100180cc(void);
void recovered_100180d0(void *param_1);
void recovered_100180d4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100180dc(void);
void recovered_10018104(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10018160(undefined8 *param_1);
void recovered_1001819c(void);
void recovered_100181a0(void *param_1);
void recovered_100181a4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100181ac(void);
void recovered_100181d4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_100182b8(undefined8 *param_1,undefined8 param_2);
void recovered_100182f8(void);
void recovered_100182fc(void *param_1);
void recovered_10018300(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4);
void recovered_10018308(long param_1);
void recovered_10018340(undefined1 *param_1,long *param_2,undefined8 param_3,long *param_4);
void recovered_100183ac(long param_1,ulong param_2);
undefined8 * recovered_100183dc(undefined8 *param_1,undefined8 param_2);
void recovered_1001841c(void);
void recovered_10018420(void *param_1);
void recovered_10018424(undefined1 *param_1,long param_2,undefined8 param_3,long param_4);
void recovered_1001842c(long param_1);
void recovered_10018464(undefined1 *param_1,long *param_2,undefined8 param_3,long param_4);
uint128 recovered_10018594(double *param_1,long param_2);
long recovered_100185c8(long *param_1,long param_2);
undefined8 recovered_10018604(long param_1);
uint recovered_10018638(long param_1);
void recovered_1001869c(long param_1);
undefined8 * recovered_10018710(undefined8 *param_1);
void recovered_1001874c(void);
void recovered_10018750(void *param_1);
void recovered_10018754(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001875c(void);
void recovered_10018784(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long recovered_10018864(undefined8 *param_1);
undefined8 recovered_1001888c(undefined8 *param_1);
undefined8 * recovered_100188b0(undefined8 *param_1);
void recovered_100188ec(void);
void recovered_100188f0(void *param_1);
void recovered_100188f4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100188fc(void);
void recovered_10018924(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10018a04(undefined8 *param_1);
void recovered_10018a40(void);
void recovered_10018a44(void *param_1);
void recovered_10018a48(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10018a50(void);
void recovered_10018a78(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10018b84(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
undefined8 * recovered_10018bc0(undefined8 *param_1);
void recovered_10018bfc(void);
void recovered_10018c00(void *param_1);
void recovered_10018c04(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10018c0c(void);
void recovered_10018c34(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10018e68(long *param_1,undefined8 *param_2);
void recovered_10018f2c(undefined8 *param_1,char *param_2,ulong param_3,ulong param_4);
long recovered_10018f64(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10018fe0(long *param_1,ulong param_2);
void * recovered_1001905c(long param_1);
undefined8 * recovered_1001906c(undefined8 *param_1,long param_2,long param_3);
undefined8 * recovered_100190d0(undefined8 *param_1);
ulong recovered_100190fc(long *param_1,char *param_2,ulong param_3,ulong param_4);
undefined8 * recovered_10019160(undefined8 *param_1);
void recovered_1001919c(void);
void recovered_100191a0(void *param_1);
undefined1 *
recovered_100191a4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_100191ac(void);
undefined1 *
recovered_100191d4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10019520(undefined8 *param_1);
void recovered_1001955c(void);
void recovered_10019560(void *param_1);
void recovered_10019564(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001956c(void);
void recovered_10019594(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001973c(undefined8 *param_1);
void recovered_10019778(void);
void recovered_1001977c(void *param_1);
void recovered_10019780(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10019788(void);
void recovered_100197b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10019908(undefined8 *param_1);
void recovered_10019944(void);
void recovered_10019948(void *param_1);
void recovered_1001994c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_10019954(void);
void recovered_1001997c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_10019a90(undefined8 *param_1);
void recovered_10019acc(void);
void recovered_10019ad0(void *param_1);
void recovered_10019ad4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10019adc(void);
void recovered_10019b04(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long recovered_10019d78(long param_1,ulong param_2);
undefined8 * recovered_10019dec(undefined8 *param_1);
void recovered_10019e28(void);
void recovered_10019e2c(void *param_1);
void recovered_10019e30(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10019e38(void);
void recovered_10019e60(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_10019f90(undefined8 *param_1);
void recovered_10019fcc(void);
void recovered_10019fd0(void *param_1);
void recovered_10019fd4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10019fdc(void);
void recovered_1001a004(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long * recovered_1001a2d8(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
long * recovered_1001a340(long *param_1,undefined8 *param_2);
undefined8 * recovered_1001a358(undefined8 *param_1);
void recovered_1001a394(void);
void recovered_1001a398(void *param_1);
void recovered_1001a39c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_1001a3a4(void);
void recovered_1001a3cc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined8 * recovered_1001a69c(undefined8 *param_1);
void recovered_1001a6d8(void);
void recovered_1001a6dc(void *param_1);
void recovered_1001a6e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001a6e8(void);
void recovered_1001a710(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001a81c(undefined8 *param_1);
void recovered_1001a858(void);
void recovered_1001a85c(void *param_1);
void recovered_1001a860(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001a868(void);
void recovered_1001a890(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001a950(undefined8 *param_1);
void recovered_1001a98c(void);
void recovered_1001a990(void *param_1);
void recovered_1001a994(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001a99c(void);
void recovered_1001a9c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001aa88(undefined8 *param_1);
void recovered_1001aac4(void);
void recovered_1001aac8(void *param_1);
void recovered_1001aacc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001aad4(void);
void recovered_1001aafc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
long * recovered_1001ab8c(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_1001abb8(long *param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 * recovered_1001ac28(undefined8 *param_1);
void recovered_1001ac64(void);
void recovered_1001ac68(void *param_1);
void recovered_1001ac6c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001ac74(void);
void recovered_1001ac9c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001ad3c(undefined8 *param_1);
void recovered_1001ad78(void);
void recovered_1001ad7c(void *param_1);
void recovered_1001ad80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001ad88(void);
void recovered_1001adb0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
ulong recovered_1001ae6c(undefined8 *in_x0,ulong in_x1,ulong in_x2,long in_x3,ulong in_x4);
undefined8 * recovered_1001aebc(undefined8 *param_1);
void recovered_1001aef8(void);
void recovered_1001aefc(void *param_1);
void recovered_1001af00(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001af08(void);
void recovered_1001af30(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001afe8(undefined8 *param_1);
void recovered_1001b024(void);
void recovered_1001b028(void *param_1);
void recovered_1001b02c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001b034(void);
void recovered_1001b05c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001b0f4(undefined8 *param_1);
void recovered_1001b130(void);
void recovered_1001b134(void *param_1);
void recovered_1001b138(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001b140(void);
void recovered_1001b168(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001b214(undefined8 *param_1);
void recovered_1001b250(void);
void recovered_1001b254(void *param_1);
void recovered_1001b258(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001b260(void);
void recovered_1001b288(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001b40c(undefined8 *param_1);
void recovered_1001b448(void);
void recovered_1001b44c(void *param_1);
void recovered_1001b450(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001b458(void);
void recovered_1001b480(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001b65c(undefined8 *param_1);
void recovered_1001b698(void);
void recovered_1001b69c(void *param_1);
void recovered_1001b6a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_1001b6a8(void);
void recovered_1001b6d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
undefined8 * recovered_1001b8ac(undefined8 *param_1);
undefined8 * recovered_1001b8dc(undefined8 *param_1);
undefined8 * recovered_1001b90c(undefined8 *param_1);
void recovered_1001b944(long *param_1,long param_2);

/* Original analysis identifiers for manual recovery units. */
