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
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
#define pf_varargs_100414cc_0 recovered_100414cc
#define pf_varargs_100414cc_1 recovered_100414cc
#define pf_varargs_100414cc_2 recovered_100414cc
#define pf_varargs_100414cc_7 recovered_100414cc
#define pf_varargs_10043594_0 recovered_10043594
#define pf_varargs_10043594_1 recovered_10043594
#define pf_varargs_10043594_2 recovered_10043594
#define pf_varargs_10043594_3 recovered_10043594
#define pf_varargs_10043594_4 recovered_10043594
#define pf_varargs_10043594_5 recovered_10043594
#define pf_varargs_10043594_6 recovered_10043594
#define pf_varargs_10043594_7 recovered_10043594
#define pf_varargs_100435c4_0 recovered_100435c4
#define ABS(value) __builtin_fabs(value)
#include "../format.h"
typedef int pf_compare(const void *,const void *);
typedef int pf_compare(const void *,const void *);
static unsigned pf_snow_atomic_guard;
static inline void pf_snow_atomic_enter(void){while(__atomic_exchange_n(&pf_snow_atomic_guard,1,__ATOMIC_ACQUIRE)){} }
static inline void pf_snow_atomic_leave(void){__atomic_store_n(&pf_snow_atomic_guard,0,__ATOMIC_RELEASE);}
typedef struct pf_snow_value { int kind; int integer; char text[384]; } pf_snow_value;
extern uint8_t pf_module_state[];
void recovered_100005c0(void);
void recovered_10000794(void);
bool recovered_100007c8(int param_1);
void recovered_10000814(undefined8 *param_1,undefined8 *param_2);
void recovered_10000884(void);
void recovered_100008b8(undefined8 *param_1,undefined8 *param_2);
int recovered_10000920(int argc,char **argv);
uchar recovered_10000d34(int param_1,char **param_2,void *param_3);
void recovered_10001708(void);
void recovered_1000178c(void);
uchar * recovered_100017d4(char *param_1,ulong *param_2);
uchar recovered_100019d8(void *param_1,void *param_2);
void recovered_10001e8c(void *param_1);
void recovered_10001f84(void *param_1);
uchar recovered_10001fe4(void *param_1,void *param_2,void *param_3);
void recovered_10002394(void *param_1);
uchar recovered_10002414(char *param_1,uchar *param_2,ulong param_3);
void recovered_100025ec(void *param_1);
bool recovered_10002678(char *param_1,char *param_2);
uchar recovered_10002724(char *param_1,char *param_2);
uchar recovered_1000282c(void *options,char *name);
uint recovered_10002960(char *param_1);
uchar recovered_100029f0(char *param_1,void *param_2);
uchar recovered_10002b6c(char *param_1);
void * recovered_10002d10(char *param_1);
void recovered_10003180(void *param_1);
ulonglong recovered_100031f0(char *param_1,void *param_2);
uchar recovered_100033d4(void *param_1);
uchar recovered_100035ac(void *param_1);
uchar recovered_10003f64(void *param_1,char *param_2,int param_3);
long recovered_100040e4(void *param_1,char *param_2);
void recovered_10004204(char *param_1,void *param_2);
void recovered_10004554(void *param_1,char *param_2);
uchar recovered_100045e8(void *param_1,void *param_2);
void recovered_1000492c(void *param_1);
uchar recovered_100052c8(void *param_1,void *param_2);
uchar recovered_100056d8(void *param_1,void *param_2);
uchar recovered_10005ba8(void *param_1,void *param_2);
void recovered_10005fec(void *param_1);
bool recovered_10006144(char param_1);
bool recovered_100061c8(char param_1);
void recovered_1000624c(char *param_1,ulong param_2,char *param_3,ulong param_4);
void recovered_10006320(void *param_1,void *param_2);
uchar * recovered_100063a8(char *param_1,char *param_2);
void recovered_100064a0(void *param_1);
int recovered_10006724(char param_1);
uint recovered_1000681c(pf_snow_value *param_1);
void recovered_100068b0(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_1000698c(pf_snow_value *__return_storage_ptr__,void *param_2);
bool recovered_10006a70(void *param_1,char *param_2);
bool recovered_10006b1c(void *param_1,char *param_2);
bool recovered_10006bd4(pf_snow_value *param_1);
void recovered_10006c38(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10006d1c(pf_snow_value *__return_storage_ptr__,int param_2);
void recovered_10006d88(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10006e54(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10006f20(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10006fec(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10007220(pf_snow_value *__return_storage_ptr__,void *param_2);
int * recovered_10007454(pf_snow_value *param_1,char *param_2,ulong param_3);
void recovered_10007540(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_1000767c(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10007850(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10007a40(pf_snow_value *__return_storage_ptr__,pf_snow_value *param_2,int param_3);
void recovered_10007b20(pf_snow_value *__return_storage_ptr__,void *param_2);
uint recovered_1000800c(void *param_1,char *param_2);
uint recovered_100080a0(void *param_1,char *param_2);
void recovered_10008128(void *param_1,char *param_2,int param_3);
void recovered_100081d0(pf_snow_value *__return_storage_ptr__,void *param_2,pf_snow_value *param_3);
uint recovered_10008460(char *param_1);
void recovered_10008810(pf_snow_value *__return_storage_ptr__,void *param_2);
void recovered_10008c94(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3);
long recovered_10008e00(void *param_1,char *param_2);
uchar recovered_10008f0c(void *param_1,char *param_2,int *param_3);
void recovered_10008fe4(void *param_1,char *param_2,pf_snow_value *param_3);
void recovered_10009124(void *param_1);
void recovered_10009214(pf_snow_value *__return_storage_ptr__,char *param_2);
uint recovered_100092e0(void *param_1,pf_snow_value *param_2,uint param_3);
void recovered_10009438(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                       pf_snow_value *param_4,uint param_5,bool *param_6);
long recovered_100098a4(void *param_1,char *param_2);
void recovered_100099bc(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                       pf_snow_value *param_4,uint param_5,bool *param_6);
uchar recovered_10009ca0(void *param_1,bool param_2);
uchar recovered_1000b1f8(void *param_1,bool param_2);
uchar recovered_1000b444(void *param_1,bool param_2);
uchar recovered_1000b7c0(void *param_1,bool param_2);
void recovered_1000bd84(void *param_1,bool param_2);
void recovered_1000c00c(void *param_1,bool param_2);
void recovered_1000c318(void *param_1,bool param_2,bool param_3);
void recovered_1000c654(void *param_1,char *param_2,int param_3,int param_4);
uchar recovered_1000c898(void *param_1,bool param_2);
uchar recovered_1000cbd8(void *param_1,char *param_2,bool param_3);
uchar * recovered_1000d480(void *param_1);
uchar * recovered_1000d60c(void *param_1);
uint recovered_1000d9e0(void *param_1,char *param_2);
uchar recovered_1000db58(void *param_1,char *param_2,bool param_3);
void recovered_1000de58(void *param_1,void *param_2);
bool recovered_1000dedc(char *param_1,char **param_2,char **param_3,char **param_4);
uchar * recovered_1000e2f8(char *param_1);
uchar * recovered_1000e4a0(char *param_1,char *param_2);
void recovered_1000e51c(char **param_1,char **param_2);
void recovered_1000e644(void *param_1);
void recovered_1000e724(void *param_1,char *param_2,int param_3);
uchar recovered_1000e7c8(void *param_1,char *param_2);
void recovered_1000e900(char *param_1,pf_snow_value *param_2,uint param_3,char *param_4,
                       ulong param_5);
void recovered_1000ee2c(char *param_1,ulong param_2,char *param_3);
void recovered_1000eee4(char *param_1,ulong param_2,char param_3);
void recovered_1000ef9c(char *param_1,ulong param_2,int param_3,bool param_4,bool param_5);
uint recovered_1000f0dc(char *param_1);
uchar recovered_1000f21c(void *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                        char *param_6);
void recovered_1000f4ac(char *param_1,void *param_2);
uint recovered_1000f718(char *param_1,char *param_2,char *param_3,ulong param_4,uint *param_5,
                       bool *param_6);
uint recovered_1000f9c8(char *param_1);
uint recovered_1000fae8(void *param_1,char *param_2,bool param_3,uint param_4,uint param_5,
                       bool param_6,bool param_7);
uchar recovered_10010034(void *param_1,int param_2,int param_3,int param_4);
uchar recovered_10010230(void *param_1);
void recovered_100144c4(char *param_1,ulong param_2,char *param_3);
uchar recovered_10014628(void *param_1,char *param_2,char *param_3,ulong param_4);
void recovered_100147c4(void *param_1);
uint recovered_10014814(void *param_1,char *param_2,bool param_3);
uchar * recovered_100148ac(void *param_1);
uchar recovered_10014afc(void *param_1,char *param_2);
uchar recovered_10014da4(void *param_1,char *param_2,ulong param_3);
uchar recovered_10015084(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_10015204(void *param_1,bool param_2);
uchar recovered_100159d4(void *param_1,int param_2,uint param_3);
uchar recovered_10015ef4(void *param_1,char *param_2,ulong param_3);
uchar recovered_100161a4(void *param_1,char *param_2,char *param_3,ulong param_4);
uint recovered_1001641c(void *param_1,char *param_2);
uint recovered_10016588(char *param_1);
uint recovered_10016644(void *param_1,char *param_2,char *param_3,uint *param_4,bool *param_5);
uchar recovered_1001703c(void *param_1,char *param_2);
void recovered_10018008(void *param_1);
void recovered_10018288(void *param_1);
void recovered_10018350(void *param_1);
void recovered_100184b4(void *param_1);
void recovered_1001857c(void *param_1);
void recovered_10018644(void *param_1);
void recovered_1001870c(void *param_1);
void recovered_10018930(void *param_1);
void recovered_10018af8(void *param_1);
void recovered_10018c1c(void *param_1);
void recovered_10018d40(void *param_1);
void recovered_10018ecc(void *param_1);
void recovered_10019850(void *param_1);
uint recovered_1001a6f8(void *param_1,char *param_2);
void recovered_1001a938(void *param_1);
uchar recovered_1001aa60(void *param_1,char *param_2);
uchar recovered_1001ae14(char *param_1);
uchar recovered_1001aec8(void *param_1,char *param_2);
bool recovered_1001b410(char *param_1,char *param_2);
uchar recovered_1001b520(char *param_1,uint param_2,int *param_3);
uchar recovered_1001b754(void *param_1,char *param_2,char *param_3);
uchar recovered_1001b81c(void *param_1,char *param_2,char *param_3,ulong param_4);
uchar recovered_1001b9d8(void *param_1,char *param_2,char *param_3,char *param_4);
uchar recovered_1001bc98(void *param_1);
uint recovered_1001be6c(char *param_1,char *param_2);
uchar recovered_1001bf04(void *param_1,char *param_2,bool *param_3);
uchar recovered_1001ca38(void *param_1,char *param_2,ulong param_3);
uint recovered_1001cd88(void *param_1,char *param_2,char *param_3,bool param_4,uint param_5,
                       uint param_6,bool param_7,bool param_8);
uint recovered_1001cf28(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_1001d080(void *param_1);
uchar recovered_1001d260(void *param_1,int param_2);
uchar recovered_1001d454(void *param_1);
uchar recovered_1001daa4(void *param_1);
uchar recovered_1001dc98(void *param_1);
uchar recovered_1001dd84(void *param_1,int param_2);
uchar recovered_1001df34(void *param_1);
uchar recovered_1001e118(void *param_1,int param_2);
uchar recovered_1001e2d8(void *param_1);
uchar recovered_1001e5f4(void *param_1);
uchar recovered_1001e818(void *param_1);
uchar recovered_1001f2f0(void *param_1);
uchar recovered_1001fb7c(void *param_1);
uchar recovered_1001fe28(void *param_1);
uchar recovered_100200e0(void *param_1);
uchar recovered_100204c4(void *param_1);
uchar recovered_100208d8(void *param_1,bool param_2);
uchar recovered_10020b7c(void *param_1);
uchar recovered_10021548(void *param_1);
uchar recovered_10021bc8(void *param_1,int param_2);
uchar recovered_10021d88(void *param_1);
uchar recovered_1002215c(void *param_1,int *param_2);
uint recovered_100225f4(char *param_1);
bool recovered_100226cc(char *param_1,char *param_2);
uchar recovered_100227dc(void *param_1,char *param_2,ulong param_3);
uchar recovered_100229c4(void *param_1,char *param_2,int *param_3,int *param_4,int *param_5,
                        uint *param_6);
uchar recovered_10022c84(void *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                        int param_7);
uchar recovered_10023218(void *param_1,int param_2,uint param_3,int param_4);
uchar recovered_100235e0(void *param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
int recovered_10023748(void *param_1,char *param_2);
uchar recovered_10023bd4(void *param_1,char *param_2,ulong param_3,bool *param_4);
uchar recovered_10023d6c(void *param_1,char *param_2,char *param_3,char *param_4,bool param_5);
uchar recovered_10023f78(void *param_1,char *param_2,char *param_3);
uchar recovered_100241a4(void *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6
                        ,uint param_7,uint *param_8,uint *param_9);
uchar recovered_10024520(void *param_1,void *param_2,void *param_3);
uchar recovered_10024b40(void *param_1,void *param_2,void *param_3);
uchar recovered_100251f0(void *param_1,void *param_2,void *param_3);
uchar recovered_10025834(void *param_1,uint *param_2,uint param_3,void *param_4);
uchar recovered_10025d28(void *param_1,uint *param_2,uint param_3,int param_4,void *param_5);
uchar recovered_10026238(void *param_1,void *param_2,void *param_3);
uchar recovered_1002661c(void *param_1,uint param_2,bool param_3);
uchar recovered_10026704(void *param_1,void *param_2,ulong param_3);
uchar recovered_10026814(void *param_1,ulonglong param_2,bool param_3);
uchar recovered_10026954(void *param_1,void *param_2,uint param_3);
bool recovered_10026ce8(void *param_1,ulong param_2);
uchar recovered_10026dc0(void *param_1,void *param_2);
uchar recovered_1002afdc(void *param_1,void *param_2,uint param_3,uint param_4);
uchar recovered_1002b210(void *param_1,void *param_2,int param_3);
uchar recovered_1002b8f4(void *param_1,ulong param_2);
uchar recovered_1002b9e0(void *param_1,void *param_2,void *param_3,uint param_4);
uchar recovered_1002c088(void *param_1,uint param_2,uint param_3);
uchar recovered_1002c230(void *param_1,void *param_2);
uchar recovered_1002d340(void *param_1,uint param_2,uint param_3);
uchar recovered_1002d4b0(void *param_1,uint param_2,uint param_3);
bool recovered_1002d5ec(void *param_1,int param_2,uint param_3,ulong param_4);
uchar recovered_1002d72c(void *param_1,uint param_2,uint param_3);
uchar recovered_1002d850(void *param_1,uint param_2,uint param_3);
uint recovered_1002d98c(uint param_1,uint param_2,uint param_3);
uint recovered_1002da24(uint param_1,uint param_2,uint param_3);
uint recovered_1002dab8(uint param_1,uint param_2,uint param_3);
uint recovered_1002db50(uint param_1,uint param_2,uint param_3);
uint recovered_1002dbe8(uint param_1,uint param_2,uint param_3);
uint recovered_1002dc80(uint param_1,uint param_2,uint param_3);
uchar recovered_1002dd18(void *param_1,uint param_2,uint param_3);
uchar recovered_1002e13c(void *param_1,uint param_2,uint param_3);
uchar recovered_1002e560(void *param_1,uint param_2,uint param_3);
uchar recovered_1002ec38(void *param_1,uint param_2,uint param_3);
uchar recovered_1002efe8(void *param_1,uint param_2,void *param_3,int param_4);
uchar recovered_1002f518(void *param_1,uint param_2,int param_3);
uchar recovered_1002f960(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_1002fc38(void *param_1,uint param_2);
uint recovered_1002fecc(void *param_1,uint param_2);
uint recovered_1002ff88(void *param_1,uint param_2,uint param_3);
uchar recovered_10030070(void *param_1,uint param_2,uint param_3,void *param_4,int param_5);
uchar recovered_1003095c(void *param_1,uint param_2,uint param_3,uint param_4,void *param_5,
                        uint param_6);
uchar recovered_10030c68(void *param_1,uint param_2);
uchar recovered_100313ac(void *param_1,void *param_2,void *param_3);
uchar recovered_100349f0(void *param_1,void *param_2,void *param_3,uint param_4);
uint recovered_1003530c(uint param_1,uint param_2,uint param_3);
uint recovered_100353a0(uint param_1,uint param_2,uint param_3);
uint recovered_10035434(uint param_1,uint param_2,uint param_3);
uint recovered_100354cc(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1003557c(uint param_1,uint param_2,uint param_3);
uint recovered_10035614(uint param_1,uint param_2,uint param_3);
uint recovered_100356ac(uint param_1,uint param_2,uint param_3);
uint recovered_10035740(uint param_1,uint param_2,uint param_3);
uint recovered_100357d4(uint param_1,uint param_2,uint param_3);
uint recovered_10035868(uint param_1);
uchar recovered_100358cc(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_100359f4(void *param_1,uint param_2);
uint recovered_10035b98(void *param_1,uint param_2,uint param_3);
uchar recovered_10035c30(void *param_1,uint param_2);
uchar recovered_10035ec4(void *param_1,uint param_2,uint param_3);
uchar recovered_1003637c(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_100364a4(void *param_1,ulong param_2,uint param_3,ulong param_4);
undefined8 * recovered_100365c4(undefined8 *param_1);
uchar recovered_1003661c(void *param_1,uint param_2,uint param_3);
uchar recovered_10036740(void *param_1,uint param_2);
uint recovered_10036944(uint param_1,uint param_2);
uchar recovered_100369c4(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_10036aec(void *param_1,uint param_2);
uint recovered_10036e14(uint param_1,uint param_2,uint param_3);
uint recovered_10036ea8(uint param_1,uint param_2,uint param_3);
uint recovered_10036f3c(void *param_1);
uint recovered_100370c0(uint param_1,uint param_2,uint param_3);
uchar recovered_1003715c(void *param_1,ulong param_2,uint param_3,bool param_4);
uint recovered_10037330(uint param_1,uint param_2,uint param_3);
uint recovered_100373c4(void *param_1);
uint recovered_10037424(uint param_1,uint param_2);
uint recovered_100374a4(uint param_1,uint param_2,uint param_3);
uint recovered_10037538(uint param_1,uint param_2,uint param_3);
uint recovered_100375cc(uint param_1,uint param_2,uint param_3);
uint recovered_10037660(uint param_1,uint param_2,uint param_3);
uint recovered_100376f4(uint param_1,uint param_2,uint param_3);
uchar recovered_10037790(void *param_1,ulong param_2,uint param_3,ulong param_4);
uint recovered_100378b8(uint param_1,uint param_2);
uint recovered_10037938(uint param_1,uint param_2,uint param_3);
uchar recovered_100379d4(void *param_1,uint param_2,uint param_3,ulong *param_4);
uchar recovered_10037ae0(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,ulong *param_7,uint *param_8,uint *param_9);
uchar recovered_10037d14(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10038998(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_10038aac(void *param_1,uint param_2,uint param_3,ulong *param_4,uint *param_5,
                        uint param_6);
uchar recovered_10038c00(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,uint param_7);
uchar recovered_10038e20(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10039218(void *param_1,void *param_2,void *param_3,uint param_4,uint param_5);
uchar recovered_10039388(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        uint param_6);
uchar recovered_10039608(ulong *param_1,uint *param_2,uint param_3,ulong param_4);
uint recovered_1003970c(uint param_1,uint param_2);
uchar recovered_1003978c(void *param_1,uint param_2);
uchar recovered_10039828(void *param_1,uint param_2);
uchar recovered_10039c7c(void *param_1,uint param_2);
uchar recovered_10039f38(void *param_1,uint param_2,uint param_3,bool param_4);
uchar recovered_1003a548(void *param_1,uint param_2,bool param_3);
uint recovered_1003a6dc(uint param_1,uint param_2,uint param_3);
uchar recovered_1003a770(void *param_1);
uint recovered_1003ab20(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1003ad54(void *param_1);
undefined8 * recovered_1003ae64(undefined8 *param_1);
uint recovered_1003aecc(void *param_1,uint param_2,uint param_3);
uint recovered_1003b1e8(void *param_1,uint param_2,uint param_3);
uint recovered_1003b574(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1003b7d0(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
uint recovered_1003ba50(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1003bca8(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
uint recovered_1003bf3c(void *param_1,uchar param_2);
uint recovered_1003bfb0(uint param_1,uint param_2);
uint recovered_1003c038(uint param_1,uint param_2);
uint recovered_1003c0c0(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_1003c1b4(uint param_1,uint param_2,uint param_3);
uint recovered_1003c244(uint param_1,uint param_2,uint param_3);
uint recovered_1003c2d4(uint param_1,uint param_2);
uint recovered_1003c34c(uint param_1);
uint recovered_1003c3b4(void *param_1,uint param_2,uint param_3);
uint recovered_1003c4a0(uint param_1,uint param_2,uint param_3);
uint recovered_1003c534(uint param_1,uint param_2,uint param_3);
uint recovered_1003c5c8(uint param_1,uint param_2);
uint recovered_1003c644(uint param_1,uint param_2,uint param_3);
uint recovered_1003c6d4(void *param_1,uint param_2);
uint recovered_1003c824(void *param_1,uint param_2);
uint recovered_1003ca8c(void *param_1,uint param_2,uint param_3);
uint recovered_1003cbf4(void *param_1,uint param_2,uint param_3);
uint recovered_1003cd0c(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_1003ce50(int param_1);
uint recovered_1003ceac(void *param_1,uint param_2,uint param_3);
uint recovered_1003cfc8(int param_1);
uint recovered_1003d050(void *param_1,void *param_2,uint param_3,uint param_4);
uint recovered_1003d1c0(uint param_1,int param_2);
uint recovered_1003d258(uint param_1,int param_2);
uchar recovered_1003d2f0(void *param_1,ulong param_2);
uint recovered_1003d508(void *param_1,ushort param_2,bool param_3);
void recovered_1003d5c0(char *param_1);
undefined1 recovered_1003d700(ulong *param_1);
void recovered_1003d864(void);
undefined4 recovered_1003d990(long param_1,char *param_2,long param_3,int param_4);
void recovered_1003dac4(void *param_1,char *param_2,uint param_3);
undefined4 recovered_1003dc4c(undefined8 param_1);
uint recovered_1003dd08(char *param_1,long param_2,uint param_3);
undefined8 recovered_1003df2c(void);
bool recovered_1003df70(int *param_1,int param_2);
bool recovered_1003e010(int *param_1);
bool recovered_1003e0d4(char param_1);
bool recovered_1003e188(long param_1,char *param_2,char *param_3,long param_4);
undefined4
recovered_1003e304(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
undefined1 recovered_1003e404(long param_1,char *param_2,undefined1 *param_3,ulong param_4);
bool recovered_1003e978(char param_1);
undefined4 recovered_1003e9fc(undefined8 param_1,undefined8 param_2,undefined4 param_3);
undefined4 recovered_1003eadc(undefined1 *param_1,int param_2);
void recovered_1003eb4c(void *param_1,uint param_2);
void recovered_1003ec88(void *param_1,char *param_2);
undefined4 recovered_1003ee98(undefined1 *param_1,int param_2);
undefined4 recovered_1003ef8c(long param_1,long param_2);
undefined4 recovered_1003f038(undefined4 param_1,undefined8 param_2);
uchar recovered_1003f108(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_1003f334(long param_1,char *param_2,long param_3);
undefined4 recovered_1003f448(undefined4 param_1,undefined8 param_2,undefined8 param_3);
undefined4 recovered_1003f534(undefined8 param_1,undefined8 param_2);
int recovered_1003f604(int argc,char **argv);
void recovered_1003f678(void);
void recovered_1003f684(void);
ulong recovered_1003f908(void);
long recovered_1003f954(void);
ulong recovered_1003f994(void);
long recovered_1003f9d0(void);
ulong * recovered_1003fa00(long param_1);
ulong recovered_1003fad8(ulong param_1,uint param_2);
ulong recovered_1003fb1c(ulong param_1,uint param_2);
long recovered_1003fb68(long param_1,uint param_2);
ulong recovered_1003fbb8(ulong param_1,ulong param_2);
ulong recovered_1003fbc0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_1003fc20(undefined8 param_1,undefined8 param_2);
long recovered_1003fc40(ulong param_1,ulong param_2);
long recovered_1003fc80(long param_1,long param_2);
void recovered_1003fccc(void);
int recovered_1003fcd4(int value);
void * recovered_1003fce0(ulong size);
void recovered_1003fd24(void *pointer);
void * recovered_1003fd68(void *pointer,ulong size);
void * recovered_1003fdb4(void *destination,void *source,ulong count);
void * recovered_1003fe8c(void *destination,void *source,ulong count);
void * recovered_1003ffa0(void *destination,int value,ulong count);
void recovered_10040038(ulong *param_1,ulong param_2);
void recovered_1004003c(ulong *param_1,ulong param_2);
int recovered_10040040(void *left,void *right,ulong count);
int recovered_100401ac(long param_1,long param_2);
int recovered_100401dc(int value);
int recovered_100401ec(int value);
int recovered_100401fc(int value);
int recovered_10040210(int value);
int recovered_1004022c(int value);
int recovered_1004023c(int value);
int recovered_1004024c(int value);
int recovered_10040260(int value);
ulong recovered_10040274(char *text);
int recovered_10040298(char *left,char *right);
int recovered_100402c0(char *left,char *right);
char * recovered_100402c4(char *destination,char *source);
char * recovered_100402dc(char *text);
char * recovered_10040318(char *text,int value);
ulong recovered_10040340(char *text,char *accept);
char * recovered_10040388(char *text,char *accept);
char * recovered_100403c8(char *haystack,char *needle);
undefined * recovered_10040404(void);
undefined ** recovered_10040410(void);
void recovered_1004041c(undefined8 *param_1);
double recovered_10040494(double param_1,uint param_2);
uint128 recovered_100404c8(double param_1,int *param_2);
double recovered_1004053c(double x,double y);
double recovered_10040560(double base,double exponent);
double recovered_100405c0(double value);
double recovered_100405dc(double value);
double recovered_10040608(double value);
double recovered_10040644(double value);
longlong recovered_100406f0(double value);
double recovered_10040704(double value);
void recovered_10040758(double param_1);
double recovered_1004079c(double value);
double recovered_100407e8(double value);
longlong recovered_100407f8(double value);
ulonglong recovered_10040858(double value);
double recovered_100408a8(ulonglong value);
double recovered_100408d0(longlong value);
float recovered_100408f4(float x,float y);
float recovered_10040928(int *in_x0,float param_2);
float recovered_10040940(uint in_w0,float param_2);
float recovered_10040958(float base,float exponent);
float recovered_10040974(float value);
float recovered_10040998(float value);
double recovered_100409b0(double value);
float recovered_100409d8(float value);
float recovered_100409f0(float value);
float recovered_10040a08(float value);
long recovered_10040a20(double value);
float recovered_10040a34(float value);
float recovered_10040a4c(float value);
float recovered_10040a64(float value);
longlong recovered_10040a74(char *text,char **endptr,int base);
uint recovered_10040b78(int param_1);
ulonglong recovered_10040ba8(char *text,char **endptr,int base);
double recovered_10040ccc(char *text,char **endptr);
float recovered_10040e5c(char *text,char **endptr);
int recovered_10040e74(char *buffer,unsigned long size,char *format,void *input);
void recovered_1004139c(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_100413d8(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10041428(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_100414cc(char *buffer,unsigned long size,char *format,...);
void recovered_100414f4(ulong param_1,ulong param_2,ulong *param_3);
void recovered_1004157c(long param_1,ulong param_2,ulong *param_3);
bool recovered_100415ec(int param_1);
void recovered_10041734(void);
void recovered_10041738(int *param_1,int *param_2);
void recovered_10041764(int *param_1);
void recovered_10041778(void *function,void *caller);
void recovered_100417d4(void *function,void *caller);
void recovered_100417d8(void *function,void *caller);
ulong recovered_100417dc(float param_1);
ulong recovered_100417e4(float param_1);
float recovered_100417ec(ulong in_x0);
float recovered_10041804(ulong in_x0);
uint8_t recovered_1004181c(uint8_t *pointer,...);
void recovered_10041840(void);
void recovered_10041858(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1004187c(uint8_t *pointer,uint8_t value,...);
uint64_t recovered_100418a4(uint8_t *pointer,uint8_t *expected,uint8_t value,...);
uint8_t recovered_100418f8(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10041924(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10041950(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1004197c(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_100419a8(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_100419d4(uint8_t *pointer,uint8_t value,...);
uint16_t recovered_10041a04(uint16_t *pointer,...);
void recovered_10041a28(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041a4c(uint16_t *pointer,uint16_t value,...);
uint64_t recovered_10041a74(uint16_t *pointer,uint16_t *expected,uint16_t value,...);
uint16_t recovered_10041ac8(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041af4(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041b20(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041b4c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041b78(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10041ba4(uint16_t *pointer,uint16_t value,...);
uint32_t recovered_10041bd4(uint32_t *pointer,...);
void recovered_10041bf8(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041c1c(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_10041c44(uint32_t *pointer,uint32_t *expected,uint32_t value,...);
uint32_t recovered_10041c98(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041cc4(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041cf0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041d1c(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041d48(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10041d74(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_10041da4(uint64_t *pointer,...);
void recovered_10041dc8(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041dec(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041e14(uint64_t *pointer,uint64_t *expected,uint64_t value,...);
uint64_t recovered_10041e78(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041ea4(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041ed0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041efc(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041f28(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10041f54(uint64_t *pointer,uint64_t value,...);
bool recovered_10041f84(uint8_t *pointer,...);
void recovered_10041fa4(uint8_t *pointer,...);
void recovered_10041fc8(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_10042014(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_10042058(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...);
uint64_t recovered_100420ac(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...);
void recovered_1004212c(long param_1);
void recovered_10042174(char *param_1);
void * recovered_1004225c(char *path,char *mode);
undefined * recovered_10042468(void);
bool recovered_100425e4(char *param_1,char param_2);
undefined8 recovered_10042610(long param_1,char *param_2,undefined1 *param_3);
undefined8 recovered_10042880(long param_1,char *param_2,ulong *param_3);
undefined8 recovered_10042944(long param_1,ulong param_2);
long recovered_100429b0(undefined *param_1);
void * recovered_100429ec(char *path,char *mode,void *stream);
int recovered_10042a18(void *stream);
void * recovered_10042ab8(char *path,char *mode);
void * recovered_10042abc(char *path,char *mode,void *stream);
void * recovered_10042ac0(int fd,char *mode);
void * recovered_10042b80(char *command,char *mode);
int recovered_10042b94(void *stream);
int recovered_10042ba8(void *stream);
ulong recovered_10042c64(long param_1,char *param_2,long param_3,undefined8 param_4);
int recovered_10042d24(void *stream);
int recovered_10042d28(void *stream);
ulong recovered_10042d2c(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_10042ed4(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_10043004(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_10043008(void *ptr,ulong size,ulong count,void *stream);
int recovered_1004300c(void *stream,longlong offset,int origin);
int recovered_100430b0(void *stream,longlong offset,int origin);
long recovered_100430b4(void *stream);
undefined8 recovered_100430e0(int *param_1);
int recovered_1004310c(void *stream,longlong offset,int origin);
longlong recovered_10043110(void *stream);
int recovered_1004313c(void *stream,long *pos);
int recovered_10043194(void *stream,long *pos);
int recovered_100431b8(void *stream);
undefined1 recovered_100431d8(int *param_1);
int recovered_100431f8(void *stream);
undefined1 recovered_10043218(int *param_1);
void recovered_10043238(void *stream);
void recovered_10043254(int *param_1);
int recovered_10043270(void *stream);
int recovered_100432a0(void *stream);
int recovered_10043314(void *stream);
int recovered_10043318(void *stream);
int recovered_1004331c(void);
undefined8 recovered_10043354(undefined8 param_1,undefined8 param_2);
int recovered_100433b4(int ch,void *stream);
int recovered_100433e4(int ch,void *stream);
char * recovered_100433e8(char *text,int count,void *stream);
int recovered_10043468(int ch,void *stream);
int recovered_100434a0(int ch,void *stream);
int recovered_100434a4(int ch);
int recovered_100434b0(char *text,void *stream);
int recovered_100434fc(char *text);
int recovered_10043534(void *stream,char *format,void *args);
int recovered_10043594(void *stream,char *format,...);
int recovered_100435b0(char *format,void *args);
int recovered_100435c4(char *format,...);
int recovered_100435e0(char *buffer,char *format,void *input);
int recovered_100435f0(char *buffer,char *format,...);
int recovered_1004360c(char *buffer,char *format,void *args);
void recovered_10043ae8(byte *param_1);
int recovered_10043b18(char *buffer,char *format,...);
int recovered_10043b34(void *stream,char *buffer,int mode,ulong size);
void recovered_10043b60(void *stream,char *buffer);
void recovered_10043b88(char *prefix);
char * recovered_10043be8(int error_number);
char * recovered_10043d18(char *buffer);
int recovered_10043d68(char *path);
int recovered_10043d6c(char *path);
int recovered_10043e10(char *path);
int recovered_10043e14(char *oldPath,char *newPath);
int recovered_10043ee8(char *oldPath,char *newPath);
undefined4 recovered_10043eec(long param_1,uint param_2);
undefined8 recovered_10043fcc(long param_1,long param_2);
void recovered_10044084(long param_1);
ulong recovered_100440a4(uint param_1,undefined1 *param_2,ulong param_3);
ulong recovered_100440f0(uint param_1,long param_2,ulong param_3);
ulong recovered_1004413c(uint param_1);
undefined8 recovered_1004417c(uint param_1,long in_x1,int in_w2);
undefined4 recovered_100441f4(uint param_1);
long recovered_1004427c(int *param_1);
ulong recovered_10044300(ulong param_1,ulong param_2);
undefined8 recovered_100443b0(undefined8 *param_1);
undefined8 recovered_100443d0(void);
undefined8 recovered_100443e4(void);
undefined8 recovered_100443f8(void);
undefined8 recovered_1004440c(void);
undefined8 recovered_10044420(void);
undefined8 recovered_10044434(void);
undefined8 recovered_10044448(void);
undefined8 recovered_1004445c(void);
undefined8 recovered_10044470(void);
ulong recovered_10044484(ulong param_1,undefined4 param_2,long in_stack_00000000);
ulong recovered_10044558(long param_1,char *param_2,long param_3);
void recovered_100445fc(long param_1,uint param_2,int param_3);
ulong recovered_1004469c(long param_1,char *param_2,long param_3,undefined8 param_4,uint *param_5);
undefined8 recovered_10044890(long param_1,long param_2);
undefined8 recovered_10044894(uint param_1,long param_2);
undefined8 recovered_1004490c(long param_1,undefined8 *param_2);
void recovered_1004493c(undefined8 *param_1);
undefined8 recovered_100449c8(uint param_1,long param_2);
undefined8 recovered_10044a20(char *param_1);
int recovered_10044ac4(char *path);
void recovered_10044ac8(long param_1);
void recovered_10044adc(undefined8 param_1);
void recovered_10044af0(long param_1);
void recovered_10044b04(undefined8 param_1);
void recovered_10044b18(long param_1);
undefined4 recovered_10044b2c(undefined4 param_1);
void recovered_10044b3c(long param_1);
undefined8 recovered_10044b50(char *param_1);
long recovered_10044bf4(long param_1,ulong param_2);
undefined8 recovered_10044c94(void);
undefined8 recovered_10044ca8(void);
undefined8 recovered_10044cbc(void);
undefined8 recovered_10044cd0(long param_1,ulong param_2);
undefined8 recovered_10044d9c(uint param_1,ulong param_2);
undefined8 recovered_10044e6c(uint param_1);
uint * recovered_10044eac(char *param_1);
uint * recovered_10044fd4(uint *param_1);
undefined8 recovered_10045000(long param_1);
void recovered_10045030(long param_1);
long recovered_1004503c(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4,
                       undefined8 param_5,long param_6);
undefined8 recovered_10045120(void *in_x0);
undefined8 recovered_10045138(void);
undefined8 recovered_1004513c(void);
undefined8 recovered_10045140(void);
long recovered_10045144(byte *param_1);
undefined8 recovered_100451bc(char *param_1);
bool recovered_100451ec(byte *param_1,byte *param_2,ulong param_3);
undefined8 recovered_10045240(void);
void recovered_10045254(long param_1,char *param_2);
undefined8 recovered_100452a8(long param_1,long param_2,int param_3);
undefined8 recovered_1004535c(long param_1,char *param_2);
undefined8 recovered_10045480(long param_1);
undefined8 recovered_100454c4(long param_1);
int recovered_10045550(long param_1);
undefined8 recovered_100455c8(undefined8 param_1,undefined8 param_2);
long recovered_10045614(long param_1,long param_2);
undefined8 recovered_100456c4(long param_1,uint param_2);
undefined8 recovered_100457dc(long param_1);
undefined8 recovered_100457e4(long param_1);
undefined8 recovered_10045820(long param_1);
void recovered_10045824(void);
void recovered_10045858(void);
void recovered_1004588c(void);
void recovered_10045898(void);
void recovered_100458dc(void);
bool recovered_100458e8(uint param_1);
undefined8 recovered_100458f4(void);
undefined8 recovered_100458f8(void);
undefined8 recovered_100458fc(void);
undefined8 recovered_10045900(void);
undefined8 recovered_10045904(int param_1);
undefined8 recovered_10045924(int param_1);
undefined4 recovered_10045944(void);
undefined8 recovered_10045988(undefined8 param_1);
undefined8 recovered_100459cc(void);
undefined4 recovered_100459d0(int param_1);
undefined4 recovered_10045a08(void);
undefined8 recovered_10045a0c(void);
undefined8 recovered_10045a20(long param_1,long *param_2);
undefined8 recovered_10045a24(long param_1,long *param_2);
undefined8 recovered_10045b04(long param_1,long *param_2);
undefined8 recovered_10045b08(long param_1,long *param_2);
undefined8 recovered_10045b0c(int param_1);
undefined8 recovered_10045ba0(void);
undefined8 recovered_10045ba8(void);
undefined8 recovered_10045bac(void);
undefined8 recovered_10045bc0(void);
undefined8 recovered_10045bd4(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10045bf0(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10045c20(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10045c64(undefined8 param_1,undefined4 *param_2);
undefined8 recovered_10045c70(undefined4 *param_1);
undefined8
recovered_10045c7c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4);
undefined8 recovered_10045cac(uint param_1,undefined8 *param_2);
undefined8 recovered_10045d20(uint param_1);
undefined8 recovered_10045d4c(undefined8 param_1,long param_2);
undefined8 recovered_10045d80(void);
undefined8 recovered_10045d94(void);
undefined8 recovered_10045d98(void);
undefined8 recovered_10045d9c(void);
undefined8 recovered_10045da0(void);
undefined8 recovered_10045da4(void);
undefined8 recovered_10045da8(undefined8 param_1,undefined4 *param_2);
undefined8 recovered_10045dcc(long param_1);
undefined8 recovered_10045e7c(long param_1,ulong param_2);
undefined8 recovered_10045ef4(uint param_1,undefined8 param_2);
undefined8 recovered_10045f3c(uint param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 recovered_10045fa8(int param_1,uint *param_2,uint *param_3);
undefined8 recovered_10046024(int param_1,uint *param_2,uint *param_3);
undefined8 recovered_10046028(void);
undefined8 recovered_1004602c(int param_1);
undefined8 recovered_10046068(undefined4 *param_1);
undefined8 recovered_10046084(undefined4 *param_1);
undefined8 recovered_100460ac(uint *param_1,uint param_2);
undefined8 recovered_100460ec(uint *param_1,uint param_2);
uint recovered_1004612c(uint *param_1,uint param_2);
undefined8 recovered_10046160(uint param_1,undefined8 *param_2);
undefined8 recovered_100461f0(uint param_1,undefined8 param_2,undefined8 *param_3);
ulong recovered_10046230(ulong param_1,undefined4 *param_2);
undefined8 recovered_10046264(uint param_1,long param_2,undefined8 *in_stack_00000000);
int recovered_10046304(int param_1,long param_2,long param_3,long param_4);
int recovered_100463d0(long param_1,uint param_2);
undefined8 recovered_1004646c(int *param_1,undefined *param_2);
undefined8
recovered_100464a8(long *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4);
undefined8 recovered_100464e4(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_100464f0(void);
undefined8 recovered_100464f4(undefined4 *param_1);
undefined8 recovered_10046500(void);
undefined8 recovered_10046504(undefined4 *param_1);
undefined8 recovered_10046510(void);
undefined8 recovered_10046514(void);
undefined8 recovered_10046518(void);
undefined8 recovered_1004651c(void);
undefined8 recovered_10046520(undefined4 *param_1);
undefined8 recovered_1004652c(void);
undefined8 recovered_10046530(undefined4 *param_1,undefined4 param_2);
undefined8 recovered_1004653c(undefined4 *param_1);
undefined8 recovered_10046548(void);
undefined8 recovered_1004654c(void);
undefined8 recovered_10046550(void);
undefined8 recovered_10046554(void);
undefined8 recovered_10046558(void);
undefined8 recovered_1004655c(int *param_1);
undefined8 recovered_100465c4(uint param_1);
undefined8 recovered_100465f4(uint param_1);
undefined8 recovered_10046628(uint param_1,undefined8 param_2);
undefined8 recovered_10046664(undefined4 *param_1);
undefined8 recovered_10046670(void);
undefined8 recovered_10046674(void);
undefined8 recovered_10046678(void);
undefined8 recovered_1004667c(void);
long recovered_10046680(void);
bool recovered_10046698(long param_1,long param_2);
undefined8 recovered_100466a4(undefined4 *param_1);
undefined8 recovered_100466b0(void);
undefined8 recovered_100466b4(void);
undefined8 recovered_100466b8(void);
undefined8 recovered_100466bc(void);
undefined8
recovered_100466c0(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5);
undefined8
recovered_100467f8(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5);
undefined8 * recovered_100467fc(int param_1);
undefined8 * recovered_100468ec(long param_1);
void recovered_10046990(undefined8 param_1,long *param_2,long param_3,ulong param_4,
                       undefined8 *param_5);
void recovered_100469f8(undefined8 *param_1,long *param_2,long param_3,ulong param_4);
undefined8 recovered_10046a84(long param_1,long param_2,long param_3,ulong param_4,long *param_5);
undefined8 * recovered_10046af0(int param_1);
undefined8 * recovered_10046b60(long param_1);
undefined8 recovered_10046bb4(void);
undefined8 recovered_10046c04(void);
undefined8 recovered_10046c54(void);
undefined1 * recovered_10046c58(void);
ulong recovered_10046c70(char *text,ulong max_length);
long recovered_10046ca4(undefined1 *param_1,long in_x1);
int recovered_10046ce4(byte *param_1,byte *param_2);
int recovered_10046d54(byte *param_1,byte *param_2,long param_3);
int recovered_10046dcc(char *left,char *right,ulong count);
void recovered_10046e24(undefined1 *param_1,undefined1 *param_2,ulong param_3);
int recovered_10046e34(void *left,void *right,ulong count);
char * recovered_10046e38(long param_1,long param_2,long *param_3);
void * recovered_10046ec4(void *memory,int value,ulong count);
char * recovered_10046ee8(char *text,int value);
char * recovered_10046f14(int param_1);
ulong recovered_10046f3c(char *text,char *reject);
char * recovered_10046f8c(char *destination,char *source,ulong count);
char * recovered_10046fc8(char *destination,char *source);
char * recovered_10046ff0(char *destination,char *source,ulong count);
ulong recovered_10047048(char *destination,char *source,ulong count);
char * recovered_100470ac(char *text,char *delimiters);
void * recovered_100470b8(ulong count,ulong size);
void recovered_1004710c(uint seed);
int recovered_10047120(void);
long recovered_10047144(long value);
longlong recovered_10047150(longlong value);
undefined8 recovered_1004715c(int param_1,int param_2);
uint128 recovered_10047174(long param_1,long param_2);
uint128 recovered_10047184(long param_1,long param_2);
longlong recovered_10047194(char *text,char **endptr,int base);
ulonglong recovered_10047198(char *text,char **endptr,int base);
undefined8 recovered_1004719c(uint param_1);
undefined8 recovered_100471b8(ushort *param_1,ushort param_2);
undefined8 recovered_100471f4(uint param_1);
undefined8 recovered_10047210(ushort *param_1,uint param_2);
uint recovered_10047258(uint param_1);
undefined4 recovered_10047270(void);
undefined8 recovered_1004727c(undefined4 param_1);
undefined8 recovered_10047288(undefined4 *param_1);
undefined8 recovered_100472c4(undefined4 *param_1);
undefined8 recovered_10047304(undefined4 *param_1);
undefined8 recovered_10047340(uint *param_1);
__attribute__((naked,returns_twice)) int recovered_1004737c(void *context);
__attribute__((naked,noreturn)) void recovered_100473a8(void *context,int value);
bool recovered_100473e4(ulong param_1);
bool recovered_100473fc(uint param_1);
bool recovered_10047414(ulong param_1);
bool recovered_1004742c(double param_1);
bool recovered_10047444(float param_1);
bool recovered_1004745c(double param_1);
bool recovered_10047474(ulong param_1);
bool recovered_10047490(uint param_1);
bool recovered_100474ac(double param_1);
bool recovered_100474b8(ulong param_1);
bool recovered_100474d4(uint param_1);
bool recovered_100474f0(ulong param_1);
ulong recovered_10047520(ulong param_1);
uint recovered_1004752c(uint param_1);
bool recovered_10047538(double param_1);
undefined4 recovered_10047560(double param_1);
undefined4 recovered_100475b4(float param_1);
undefined4 recovered_10047608(double param_1);
int recovered_10047640(double value);
double recovered_10047658(double value);
float recovered_10047668(float value);
double recovered_1004768c(double value);
double recovered_1004769c(double value);
float recovered_100476ac(float value);
double recovered_100476d0(double value);
double recovered_100476e0(double value);
float recovered_100476f0(float value);
double recovered_10047714(double value);
long recovered_10047724(double value);
long recovered_10047748(float value);
long recovered_1004776c(double value);
longlong recovered_10047790(double value);
longlong recovered_100477b4(float value);
longlong recovered_100477d8(double value);
double recovered_100477fc(double value);
uint128 recovered_10047858(double param_1);
float recovered_10047890(float value);
double recovered_100478a8(double value);
double recovered_100478ac(double y,double x);
float recovered_10047948(float y,float x);
double recovered_10047964(double y,double x);
double recovered_10047968(double value);
float recovered_100479b0(float value);
double recovered_100479c8(double value);
double recovered_100479cc(double value);
float recovered_10047a10(float value);
double recovered_10047a28(double value);
double recovered_10047a2c(double value);
float recovered_10047a64(float value);
double recovered_10047aac(double value);
double recovered_10047ae4(double value);
float recovered_10047b64(float value);
double recovered_10047b7c(double value);
double recovered_10047b80(double value);
float recovered_10047b90(float value);
double recovered_10047ba8(double value);
uint128 recovered_10047bac(double in_d0);
void recovered_10047bc4(float in_s0);
uint128 recovered_10047bdc(double in_d0);
double recovered_10047be0(double value);
float recovered_10047bf8(float value);
double recovered_10047c10(double value);
double recovered_10047c14(double value);
float recovered_10047c2c(float value);
double recovered_10047c44(double value);
double recovered_10047c48(double value);
float recovered_10047c74(float value);
double recovered_10047c8c(double value);
double recovered_10047c90(double value);
float recovered_10047cb0(float value);
double recovered_10047cc8(double value);
double recovered_10047ccc(double value);
float recovered_10047cd8(float value);
double recovered_10047cf0(double value);
double recovered_10047cf4(double value);
float recovered_10047d3c(float value);
double recovered_10047d54(double value);
double recovered_10047d58(double value,double *integer_part);
float recovered_10047d84(float value,float *integer_part);
double recovered_10047dc4(double value,double *integer_part);
double recovered_10047df0(double value);
float recovered_10047e78(float value);
double recovered_10047e90(double value);
uint128 recovered_10047e94(double in_d0);
void recovered_10047eb0(float in_s0);
uint128 recovered_10047ec8(double in_d0);
double recovered_10047ecc(double value);
float recovered_10047eec(float value);
int recovered_10047f04(char *text);
long recovered_10047f20(char *text);
longlong recovered_10047f24(char *text);
double recovered_10047f28(char *text,char **endptr);
uint128 recovered_10047f2c(byte *param_1);
void recovered_10047f34(void *base,ulong count,ulong size,pf_compare *compare);
void * recovered_10048048(void *key,void *base,ulong count,ulong size,pf_compare *compare);
int recovered_100480cc(int value);
int recovered_10048100(int value);
int recovered_10048110(int value);
int recovered_1004812c(int value);
int recovered_1004819c(int value);
int recovered_100481b0(int value);
long recovered_100481c0(void);
double recovered_10048220(long end,long start);
long recovered_1004822c(uint *param_1);
undefined4 recovered_10048390(uint param_1,uint param_2);
bool recovered_100483dc(uint param_1);
undefined * recovered_10048414(ulong *param_1);
undefined * recovered_10048530(ulong *in_x0);
undefined * recovered_1004854c(uint *in_x0);
undefined * recovered_10048600(ulong *in_x0);
long recovered_1004862c(long param_1,undefined1 *param_2,ulong param_3,long param_4,uint *param_5);
undefined8 recovered_1004890c(long param_1,ulong param_2,long *param_3,undefined1 *param_4);
void recovered_1004899c(long param_1,ulong param_2,long *param_3,ulonglong param_4,int param_5);
bool recovered_10048a18(long param_1,int param_2);
ulong recovered_10048a4c(long param_1,char *param_2,char *param_3);
bool recovered_10048acc(int param_1);
undefined8 recovered_10048b14(undefined1 *param_1,long *param_2,long *param_3,ulong *param_4);

/* Original analysis identifiers for manual recovery units. */
