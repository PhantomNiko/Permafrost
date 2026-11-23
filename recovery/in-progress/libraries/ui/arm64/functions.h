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
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
#define Yield(...) __asm__ volatile("yield":::"memory")
static inline uint64_t NEON_umin(uint64_t a,uint64_t b,unsigned bytes){uint64_t out=0,mask=UINT64_MAX>>(64-bytes*8);for(unsigned i=0;i<8/bytes;i++){unsigned shift=i*bytes*8;uint64_t x=(a>>shift)&mask,y=(b>>shift)&mask;out|=(x<y?x:y)<<shift;}return out;}
extern uint8_t pf_module_state[];
void recovered_10000608(void);
void recovered_10000634(void);
void recovered_1000066c(void);
bool recovered_100008f0(ulong *param_1,ulong *param_2,long param_3);
bool recovered_1000092c(ulong *param_1,ulong *param_2,long param_3);
bool recovered_10000b28(ulong param_1,ulong param_2);
ulong recovered_10000b64(void);
long recovered_10000bc4(void);
ulong recovered_10000c18(void);
long recovered_10000c68(void);
void recovered_10000cac(long param_1);
ulong * recovered_10000cd8(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000e94(long param_1,ulong *param_2);
ulong * recovered_10000ecc(long param_1,ulong *param_2,ulong *param_3);
void recovered_10000f10(long param_1);
void recovered_10000f38(long param_1);
ulong * recovered_10000fac(ulong *param_1,ulong param_2);
ulong recovered_10001154(ulong param_1,uint param_2);
ulong recovered_10001198(ulong param_1,uint param_2);
long recovered_100011e4(long param_1,uint param_2);
ulong recovered_10001234(ulong param_1,ulong param_2);
ulong recovered_1000123c(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_1000129c(undefined8 param_1,undefined8 param_2);
long recovered_100012bc(ulong param_1,ulong param_2);
long recovered_100012fc(long param_1,long param_2);
void recovered_10001348(void);
int recovered_10001350(int param_1);
void * recovered_1000135c(uintptr_t size);
void recovered_100013a0(void *pointer);
void * recovered_100013e0(void *pointer,uintptr_t size);
void * recovered_1000142c(void *destination,void *source,ulong count);
void * recovered_10001504(void *destination,void *source,ulong count);
void * recovered_10001618(void *destination,int value,ulong count);
void recovered_100016b0(ulong *param_1,ulong param_2);
void recovered_100016b4(ulong *param_1,ulong param_2);
char * recovered_100016b8(long param_1,char param_2,long param_3);
int recovered_100016dc(void *left,void *right,ulong count);
int recovered_10001844(long param_1,long param_2);
bool recovered_10001870(int param_1);
bool recovered_10001880(int param_1);
bool recovered_10001890(uint param_1);
bool recovered_100018a4(uint param_1);
bool recovered_100018c0(int param_1);
bool recovered_100018d0(int param_1);
int recovered_100018e0(int param_1);
int recovered_100018f4(int param_1);
ulong recovered_10001908(char *text);
int recovered_1000192c(char *left,char *right);
int recovered_10001954(char *left,char *right);
void recovered_10001958(long param_1,long param_2);
void recovered_10001970(char *param_1);
char * recovered_100019ac(char *param_1,char param_2);
long recovered_100019d4(long param_1,char *param_2);
long recovered_10001a14(long param_1,char *param_2);
char * recovered_10001a54(char *param_1,char *param_2);
char * recovered_10001a94(char *param_1,char *param_2);
undefined * recovered_10001ad0(void);
undefined ** recovered_10001adc(void);
void recovered_10001ae8(undefined8 *param_1);
double recovered_10001b60(double param_1,uint param_2);
uint128 recovered_10001b94(double param_1,int *param_2);
uint128 recovered_10001c08(double param_1,double param_2);
uint128 recovered_10001c2c(double param_1,double param_2);
uint128 recovered_10001c8c(double param_1);
uint128 recovered_10001ca8(double param_1);
uint128 recovered_10001cd4(double param_1);
uint128 recovered_10001d10(double param_1);
long recovered_10001dbc(double param_1);
uint128 recovered_10001dd0(double param_1);
void recovered_10001e24(double param_1);
uint128 recovered_10001e68(double param_1);
uint128 recovered_10001eb4(double param_1);
long long recovered_10001ec4(double value);
unsigned long long recovered_10001f24(double value);
double recovered_10001f74(unsigned long long value);
double recovered_10001f9c(long long value);
float recovered_10001fc0(float param_1,float param_2);
void recovered_10001ff4(float param_1,int *param_2);
float recovered_1000200c(float param_1,uint param_2);
void recovered_10002024(float param_1,float param_2);
float recovered_10002040(float param_1);
void recovered_10002064(float param_1);
uint128 recovered_1000207c(double param_1);
void recovered_100020a4(float param_1);
void recovered_100020bc(float param_1);
void recovered_100020d4(float param_1);
long recovered_100020ec(double param_1);
void recovered_10002100(float param_1);
void recovered_10002118(float param_1);
float recovered_10002130(float param_1);
long recovered_10002140(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10002244(int param_1);
long recovered_10002274(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10002398(byte *param_1,undefined8 *param_2);
void recovered_10002528(byte *param_1,undefined8 *param_2);
int recovered_10002540(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_10002ae4(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002b20(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
void recovered_10002bc0(long *param_1,ulong *param_2,int *param_3,char *param_4);
int recovered_10002c0c(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10002c34(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002cb8(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10002d38(ulong param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10002d88(ulong *param_1,long param_2);
void recovered_10002ddc(ulong *param_1);
undefined8 recovered_10002dfc(ulong *param_1);
bool recovered_10002e84(int param_1);
void recovered_1000301c(char *param_1,long param_2);
void recovered_100030d4(int param_1);
void recovered_10003160(void);
void recovered_10003168(void);
void recovered_10003170(char *param_1);
void recovered_100031d4(void);
void recovered_100031f8(char *param_1);
void recovered_10003224(void);
bool recovered_10003248(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_100032c0(void);
void recovered_100032c4(void);
undefined8 recovered_100032c8(void);
undefined4 * recovered_100032d0(byte *param_1,char *param_2);
undefined8 recovered_1000350c(undefined8 param_1,undefined8 param_2);
undefined8 recovered_1000355c(long param_1,ulong param_2);
undefined4 * recovered_100035e4(byte *param_1,char *param_2,int *param_3);
undefined8 recovered_10003618(int *param_1);
ulong recovered_1000365c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10003790(int *param_1);
long recovered_10003874(char *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10003984(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003a18(long param_1);
undefined8 recovered_10003a3c(int *param_1);
undefined1 recovered_10003ab0(long param_1);
undefined1 recovered_10003abc(long param_1);
void recovered_10003ac8(long param_1);
uint recovered_10003adc(uint param_1,long param_2);
undefined8 recovered_10003b00(long param_1);
undefined8 recovered_10003b38(undefined8 param_1);
undefined8 recovered_10003b7c(long param_1,long param_2);
undefined8 recovered_10003c18(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10003c78(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10003d18(long param_1,long param_2,long param_3);
undefined8 recovered_10003d44(void);
void recovered_10003d48(void);
undefined8 recovered_10003d4c(void);
undefined8 recovered_10003d50(void);
undefined8 recovered_10003d54(void);
int recovered_10003d58(char *left,char *right,ulong count);
char * recovered_10003d88(int param_1);
undefined8 recovered_10003e28(void);
undefined8 recovered_10003e2c(void);
void recovered_10003e30(void);
bool recovered_10003e44(int param_1);
__attribute__((naked,noreturn)) void recovered_10003f10(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10003f24(void *context);
__attribute__((naked,noreturn)) int recovered_10003f80(long context,int value);
void recovered_10003fe4(void);
undefined8 recovered_10003ff8(void);
void recovered_10004000(long param_1);
long recovered_10004010(long param_1);
void * recovered_1000403c(ulong param_1);
void * recovered_1000406c(ulong param_1);
void recovered_10004070(void *param_1);
void recovered_10004088(void *param_1);
void recovered_100040a0(void *param_1);
void recovered_100040b8(void *param_1);
undefined8 recovered_100040d0(void);
uint recovered_100040d8(uint *param_1);
void recovered_100040e8(ulong *param_1);
void recovered_100040f8(void);
long recovered_100040fc(ulong param_1);
void recovered_100041a4(long param_1);
void recovered_100041d4(long param_1);
long recovered_10004214(long param_1);
long recovered_10004244(long param_1);
void recovered_1000424c(void);
void recovered_100042ac(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_100042cc(undefined8 *param_1);
void recovered_10004330(void);
void recovered_10004360(undefined8 *param_1);
void recovered_10004374(undefined8 *param_1);
void recovered_100043a0(undefined8 *param_1);
void recovered_100043ac(void);
undefined8 recovered_100043b8(long param_1);
undefined8 recovered_100043e4(undefined8 *param_1);
undefined8 recovered_10004480(long param_1);
undefined8 recovered_1000448c(void);
void recovered_10004494(void);
long recovered_100044a0(long *param_1,undefined8 param_2,long *param_3);
bool recovered_100044e0(long *param_1,long *param_2);
void recovered_1000456c(void);
undefined8 recovered_10004570(void);
bool recovered_10004578(int param_1);
bool recovered_10004588(uint param_1);
bool recovered_100045c0(uint param_1);
bool recovered_100045dc(ulong param_1);
bool recovered_100045f4(uint param_1);
bool recovered_1000460c(ulong param_1);
bool recovered_10004624(ulong param_1);
double recovered_1000463c(double value);
float recovered_100046fc(float value);
long double recovered_10004718(long double value);
double recovered_1000471c(long end,long start);
uint128 recovered_1000472c(double param_1);
long recovered_10004778(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100048bc(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100048c0(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10004a98(uint param_1,long *param_2);
ulong recovered_10004b8c(undefined8 *param_1);
ulong recovered_10004bc0(byte *param_1,long param_2);
ulong recovered_10004be8(undefined8 *param_1);
void recovered_10004c68(void);
undefined8 recovered_10004d00(undefined8 param_1,undefined8 param_2);
undefined4 recovered_10004d48(uint param_1);
undefined8 recovered_10004d88(long *param_1,long param_2,ulong param_3,ulong param_4);
undefined8 recovered_10004ec4(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10004f10(long *param_1,long param_2);
void recovered_10004fe4(ulong *param_1);
void recovered_1000501c(undefined8 param_1);
int recovered_10005060(int *param_1,int param_2);
void recovered_10005094(undefined8 param_1,ulong param_2,int *param_3,int *param_4,int *param_5);
void recovered_100051b8(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,int *param_5);
int recovered_10005358(int *param_1,int *param_2,int param_3,int param_4);
void recovered_10005440(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4);
void recovered_100055d8(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_100055f4(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_10005610(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4);
void recovered_10005638(undefined8 *param_1,undefined8 *param_2);
void recovered_1000564c(undefined8 *param_1,undefined8 *param_2);
void recovered_10005668(undefined8 *param_1,undefined8 *param_2,uint param_3);
void recovered_1000568c(undefined8 *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100056b0(int *param_1,void *param_2);
undefined8 recovered_100058a4(uint param_1,uint param_2,uint *param_3,uint *param_4);
undefined8 recovered_10005984(ulong param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined8 recovered_100059dc(undefined8 param_1);
undefined8 recovered_10005a24(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
ulong recovered_10005aa8(int *param_1,uint param_2,uint param_3);
ulong recovered_10005b48(int *param_1,int param_2,uint param_3);
ulong recovered_10005bfc(int *param_1,byte *param_2,byte *param_3,ulong param_4,ulong param_5,
                        uint param_6,undefined8 param_7);
void recovered_10005d98(ulong param_1,undefined4 param_2);
ulong recovered_10005dc0(ulong param_1,byte *param_2,long param_3);
ulong recovered_10005de8(int *param_1,ulong param_2,ulong param_3);
ulong recovered_10005ecc(int *param_1);
ulong recovered_10005ee4(int *param_1,byte *param_2,uint *param_3);
undefined8 recovered_10005f2c(int *param_1,uint param_2,uint param_3);
undefined8 recovered_10006054(int *param_1,long param_2);
ulong recovered_100060a4(int *param_1,void *param_2);
void recovered_10006218(long param_1);
bool recovered_10006224(long param_1);
void recovered_10006244(ulong *param_1);
undefined4 recovered_10006258(ulong *param_1);
undefined8 recovered_10006404(void);
bool recovered_1000643c(int *param_1);
undefined8 recovered_10006478(uint *param_1);
undefined8 recovered_100064d4(int *param_1,undefined *param_2);
ulong recovered_10006530(int *param_1,uint param_2);
ulong recovered_10006544(int *param_1,uint param_2);
ulong recovered_1000655c(int *param_1);
ulong recovered_10006568(int *param_1);
ulong recovered_10006574(int *param_1,uint param_2);
ulong recovered_10006580(int *param_1,uint param_2);
undefined8 recovered_1000658c(int *param_1,long param_2);
undefined8 recovered_100065e0(int *param_1,long param_2);
undefined8 recovered_10006634(int *param_1,undefined8 param_2);
undefined8
recovered_10006688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
undefined8 recovered_100066d0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10006720(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10006780(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8
recovered_100067d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
undefined8 recovered_10006818(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10006824(undefined8 param_1,undefined8 param_2,undefined8 param_3);
bool recovered_10006830(void);
void recovered_10006878(uint param_1);
void recovered_10006904(long param_1,uint *param_2,uint param_3);
uint128 recovered_10006aec(ulong param_1,ulong param_2,int param_3,uint param_4);
void recovered_10006b60(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
void recovered_10006c30(long *param_1,ulong param_2,ulong param_3,undefined4 param_4);
void recovered_10006cec(long *param_1,ulong param_2,ulong param_3,int param_4,int param_5);
void recovered_10006e6c(void);
uint128 recovered_10006e7c(ulong param_1,long param_2,uint param_3,long param_4);
void recovered_10006e90(void);
void recovered_10006ea0(void *param_1);
void recovered_10006f00(undefined4 *param_1,undefined8 param_2);
void recovered_10006f2c(undefined4 *param_1,undefined4 param_2);
void recovered_10006f60(undefined4 *param_1);
void recovered_10006f84(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       );
void recovered_10006fb8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       undefined8 param_5,undefined8 param_6);
void recovered_10007014(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10007038(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_1000705c(undefined4 *param_1,undefined8 param_2,undefined4 param_3);
void recovered_1000709c(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,
                       undefined8 param_4);
void recovered_100070ac(undefined1 *param_1,undefined1 *param_2,undefined4 param_3);
void recovered_100070c8(undefined1 *param_1,undefined1 *param_2,undefined4 param_3);
void recovered_100070e4(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4);
void recovered_10007118(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_10007130(undefined1 *param_1,undefined1 *param_2,uint param_3);
undefined8 recovered_10007148(int *param_1,undefined8 param_2);
int recovered_10007410(int *param_1,uint *param_2);
undefined8
recovered_100074b0(long param_1,int *param_2,long param_3,ulong param_4,undefined8 param_5);
void recovered_100075fc(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_10007b9c(int *param_1,int *param_2,undefined8 param_3);
undefined8 recovered_10007c80(undefined8 *param_1);
bool recovered_10007d8c(int param_1);
undefined8 recovered_10007dd4(undefined8 param_1);
ulong recovered_10007e1c(ulong param_1);
int recovered_10007e60(int param_1,uint param_2);
undefined8 recovered_10007eb8(undefined *param_1,undefined8 param_2);
int recovered_10007f7c(long param_1);
undefined8
recovered_10007fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_1000800c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_10008058(ulong param_1,ulong param_2,undefined8 param_3,int param_4);
void recovered_100080dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                       ,undefined8 param_6,int param_7);
undefined4 recovered_100080e4(long param_1);
void recovered_1000811c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       );
void recovered_10008380(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                       ,undefined8 param_6,int param_7,int param_8);
bool recovered_10008630(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
uint recovered_1000865c(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */

/* Release 1.1 aggregate exports. */
/* TerrorUI value operations recovered from r344. Pooka's Free Software License. */
typedef struct { int32_t top,right,bottom,left; } PFUIInsets;
typedef struct {
 uint32_t type,flags;
 uintptr_t text,text_capacity,children;
 uint32_t count; int32_t spacing;
 uint32_t alignment,foreground,background,scale;
 int32_t width,height;
 PFUIInsets padding;
 uintptr_t callback,userdata;
} PFUIView;
typedef struct {
 uintptr_t title;
 uint32_t width,height,stride,background,transparency,shadow;
 int32_t mode; uint32_t amount;
 uintptr_t menu_file,menu_edit,menu_window;
 uint32_t flags;
} PFUIWindowSpec;
PFUIInsets pf_ui_insets(int32_t all);
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y);
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l);
PFUIView pf_ui_view_empty(void);
PFUIView pf_ui_text(uintptr_t text);
PFUIView pf_ui_rectangle(uint32_t color);
PFUIView pf_ui_spacer(void);
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata);
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count);
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding);
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color);
PFUIView pf_ui_view_background(PFUIView v,uint32_t color);
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height);
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale);
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment);
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height);
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount);
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value);
PFUIView pf_ui_text_field(uintptr_t text,uintptr_t capacity,int password,uintptr_t callback,uintptr_t userdata);

/* Release 1.1 service forwards. */
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b);
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count);
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command);
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags);
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state);
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y);
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y);
