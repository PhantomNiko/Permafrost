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
#define pf_varargs_10001dac_1 recovered_1000240c
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
#include "numbers.h"
#include "png_encode.h"
extern uint8_t pf_module_state[];
void recovered_100005c4(void);
ulong recovered_10000848(void);
long recovered_10000894(void);
ulong * recovered_10000940(long param_1);
void * recovered_10000c20(ulonglong size);
void recovered_10000c64(void *pointer);
void * recovered_10000ca8(void *pointer,ulonglong size);
void * recovered_10000cf4(void *dst,void *src,ulong bytes);
void * recovered_10000dcc(void *dst,void *src,ulong bytes);
void * recovered_10000ee0(void *dst,int byte,ulong bytes);
void recovered_10000f78(undefined1 *param_1,long param_2);
void recovered_10000f7c(undefined1 *param_1,long param_2);
int recovered_10000f80(byte *param_1,byte *param_2,long param_3);
int recovered_100010ec(long param_1,long param_2);
long recovered_10001280(long param_1,char *param_2);
undefined8 recovered_1000135c(undefined8 *param_1);
int recovered_10001db4(char *out,ulong capacity,char *format,void *args);
void recovered_10002368(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
void recovered_10002434(ulong param_1,ulong param_2,ulong *param_3);
void recovered_100024bc(long param_1,ulong param_2,ulong *param_3);
bool recovered_1000252c(int param_1);
void recovered_10002578(void);
uint128 recovered_10002588(void);
uint128 recovered_10002598(float param_1);
undefined8 recovered_100025a4(void);
void recovered_100025ac(void);
void recovered_100025bc(void);
void recovered_100025c4(void);
void recovered_100025cc(void);
void recovered_100025dc(void);
void recovered_100025ec(void);
void recovered_10002604(void *param_1,ulong param_2);
long recovered_10002610(double param_1,double param_2);
void recovered_1000261c(ulong param_1,ulong param_2);
void recovered_10002628(void);
void recovered_10002634(void);
void recovered_10002640(void);
void recovered_10002654(void);
void recovered_10002668(void);
void recovered_10002674(char *param_1,long param_2);
void recovered_1000272c(int param_1);
void recovered_100027b8(void);
void recovered_100027c0(void);
void recovered_1000282c(void);
void recovered_10002850(long param_1);
void recovered_1000287c(void);
uchar recovered_100028a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002b64(undefined8 param_1,undefined8 param_2);
long recovered_10002cb4(undefined1 *param_1,long param_2,long param_3,int *param_4);
undefined8 recovered_10003190(undefined8 param_1);
undefined8 recovered_10003270(undefined8 param_1,undefined8 param_2,undefined8 param_3);
bool recovered_100034c0(int param_1);
void recovered_10003508(void);
void recovered_10003514(void *param_1);
undefined8 recovered_10003520(void);
undefined8 recovered_10003528(void);
void recovered_10003530(void);
void recovered_10003538(void);
void recovered_10003548(void);
void recovered_10003554(void);
void recovered_10003560(void);
void recovered_1000356c(void);
int recovered_10003578(undefined8 param_1,undefined8 param_2,char *param_3);
undefined8 recovered_10003584(void);
__attribute__((naked,returns_twice)) int recovered_100035a0(void *context);
__attribute__((naked,noreturn)) void recovered_100035dc(void *context,int value);
void recovered_10003774(long param_1);
void recovered_1000378c(void);
uint128 recovered_10003b68(double param_1);
void recovered_10003c28(float param_1);
uint128 recovered_10003c44(double param_1);
uint128 recovered_10003c48(long param_1,long param_2);
void recovered_1000416c(void);
void recovered_10004174(void);
void recovered_1000417c(void);
void recovered_10004188(void);
undefined4 recovered_10004194(byte *param_1,ulong param_2);
uchar recovered_100043b0(void *data,ulong length,void *image);
ulong recovered_100070ec(long param_1,uint *param_2);
ulong recovered_10007664(uint *param_1,byte *param_2,byte *param_3,ulong param_4);
uint recovered_10007980(long param_1,long param_2,uint param_3,uint param_4);
uint recovered_10007b10(long param_1,undefined1 *param_2,uint param_3,uint param_4);
undefined8 recovered_10008194(undefined8 *param_1,byte *param_2);
uchar recovered_10008340(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
uchar recovered_10008768(long *param_1,long *param_2);
undefined8 recovered_10008fac(long *param_1,long param_2,long param_3,long *param_4);
uint recovered_10009ac4(uint param_1,byte *param_2,long param_3);
void recovered_10009bb4(long *param_1);
ulong recovered_10009cb4(long *param_1,long *param_2);
undefined8
recovered_10009db8(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6);
void recovered_10009fb4(long *param_1,uint param_2);
void recovered_1000a378(void);
int recovered_1000a384(undefined8 param_1,undefined8 param_2,ulonglong *param_3,uint *param_4);
void recovered_1000a390(void);
void recovered_1000a3ac(void);
void recovered_1000a3c8(void);
void recovered_1000a3e4(void);
void recovered_1000a3f0(void);
void recovered_1000a3fc(void);
void recovered_1000a408(void);
void recovered_1000a414(void);
void recovered_1000a420(void);
void recovered_1000a42c(void);
void recovered_1000a438(void);
void recovered_1000a448(void);
void recovered_1000a454(void);
void recovered_1000a460(void);
int recovered_1000a46c(byte *param_1,byte *param_2);
void recovered_1000a474(void *param_1,void *param_2);
void recovered_1000a47c(void);
undefined8 recovered_1000a484(void);
void recovered_1000a48c(void);
void recovered_1000a498(void);
void recovered_1000a4ac(void);
void recovered_1000a4b8(void);
void recovered_1000a4c4(void);
void recovered_1000a4d4(void);
void recovered_1000a4e0(void);
void recovered_1000a4ec(void);
void recovered_1000a4f8(void);
void recovered_1000a504(void);
void recovered_1000a510(long *param_1,undefined8 param_2,uint *param_3);
void recovered_1000a518(void);
uint recovered_1000a520(void);
void recovered_1000a528(void);
void recovered_1000a534(long *param_1,uint *param_2);
void recovered_1000a53c(void);
int recovered_1000a558(void);
void recovered_1000a560(void);
void recovered_1000a57c(void);
undefined8 recovered_1000a584(void);
void recovered_1000a590(void);
void recovered_1000a5a0(void);
void recovered_1000a5b0(void);
undefined1 * recovered_1000a5c0(void);
void recovered_1000a5d0(void);
void recovered_1000a5e8(void);
void recovered_1000a5f4(void);
void recovered_1000a600(void);
uchar recovered_1000a60c(long param_1,ulong param_2,ulong *param_3,undefined8 param_4,ulong *param_5
                        );
void recovered_1000a614(long *param_1,ulong param_2);
void recovered_1000a61c(void);
void recovered_1000a628(undefined8 param_1,undefined8 *param_2);
void recovered_1000a630(void);
void recovered_1000a63c(void);
void recovered_1000a648(void);
void recovered_1000a654(void);
void recovered_1000a660(long *param_1);
void recovered_1000a66c(void);
void recovered_1000a678(void);
void recovered_1000a684(void);
void recovered_1000a690(void);
uint recovered_1000a69c(void);
void recovered_1000a6a4(void);
uchar recovered_1000a6b0(undefined8 param_1,long param_2,ulong param_3);
undefined8 recovered_1000a6b8(void);
uchar recovered_1000a6c0(uint *param_1,long param_2);
int recovered_1000a6c8(undefined8 param_1,byte *param_2);
void recovered_1000a6d4(void);
uint recovered_1000a6e0(undefined8 param_1,byte *param_2);
void recovered_1000a6ec(void);
void recovered_1000a6f8(void);
void recovered_1000a704(void);
void recovered_1000a710(void);
void recovered_1000a71c(void);
undefined1 recovered_1000a730(void);
void recovered_1000a744(void);
void recovered_1000a758(void);
void recovered_1000a764(void);
long recovered_1000a00c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
undefined8 * recovered_1000655c(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_1000a34c(undefined8 *param_1);
void recovered_10001698(double param_1);
undefined8 recovered_100033a4(void);
undefined8 recovered_1000339c(void);
ulong recovered_100008d4(void);
void * recovered_10009658(ulong count);
void recovered_100036d0(void *pointer,ulong size);
ulong recovered_10001798(double param_1);
ulong recovered_10000b00(ulong param_1,ulong param_2,long *param_3);
ulong recovered_100040b8(undefined8 *param_1);
undefined8 * recovered_1000705c(undefined8 *param_1,undefined8 *param_2);
void recovered_10007ea8(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10001204(long param_1,long param_2);
long recovered_10001960(double param_1);
void recovered_10003804(undefined8 *param_1);
undefined * recovered_10001344(void);
int recovered_10001200(byte *param_1,byte *param_2);
void recovered_1000358c(long param_1);
long recovered_10000bc0(long param_1,long param_2);
void recovered_100039c0(void);
long recovered_10009308(long *param_1,undefined1 *param_2);
void recovered_100033a0(void);
undefined8 * recovered_10008090(undefined8 *param_1,ulong in_x1);
float recovered_100019a4(float value);
void recovered_100096ac(long *param_1,ulong param_2,undefined2 *param_3);
void * recovered_1000985c(ulong count);
void recovered_10007fa8(long *param_1,ulong param_2);
void recovered_10003120(long param_1);
undefined8 recovered_10003634(void);
bool recovered_10003370(long param_1,long param_2,long param_3);
bool recovered_10001150(uint param_1);
float recovered_10001974(float value);
long recovered_100084b8(long *param_1,undefined8 *param_2);
double recovered_10001644(double value);
void recovered_10003898(undefined8 *param_1);
long recovered_10003ca4(byte *param_1,undefined8 *param_2,uint param_3);
void recovered_10009784(long *param_1,ulong param_2);
void recovered_10009580(long *param_1,ulong param_2);
int recovered_100033d4(byte *param_1,byte *param_2,long param_3);
int recovered_10009c80(long param_1);
void * recovered_10008590(ulong count);
void recovered_10009fec(long *param_1,long param_2,uint param_3);
void recovered_100036a0(void *pointer);
void recovered_100037e4(long param_1,undefined8 param_2,undefined8 param_3);
bool recovered_10004248(byte *param_1,ulong param_2);
undefined8 recovered_100034a4(void);
float recovered_1000198c(float value);
bool recovered_10003b20(uint param_1);
float recovered_10001930(float value);
int recovered_10000c14(int param_1);
uint recovered_10003134(uint param_1,long param_2);
undefined8 recovered_10003070(long param_1);
undefined4 recovered_1000771c(long param_1,long param_2,ulong param_3,ulong param_4);
void recovered_10003620(void);
undefined8 recovered_10003910(undefined8 *param_1);
undefined8 recovered_100032d0(long param_1,long *param_2,ulong *param_3);
void * recovered_1000369c(ulong size);
void * recovered_10008084(ulong count);
undefined8 recovered_100038f0(undefined8 *param_1);
ulong recovered_100011b4(char *text);
void recovered_1000a228(long *param_1,ulong param_2);
long * recovered_1000a1fc(long *param_1,ulong param_2);
undefined8 recovered_100031d4(long param_1,long param_2);
void recovered_10009c08(long *param_1,ulong param_2);
undefined8 recovered_10003a9c(void);
uint recovered_100084ac(uint *param_1);
void recovered_10009fac(long *in_x0,long in_x1,undefined1 *in_x2,long in_x3);
bool recovered_10003aa4(int param_1);
double recovered_10001500(double value);
undefined ** recovered_10001350(void);
undefined8 recovered_10002c70(int *param_1);
float recovered_10001834(float left,float right);
bool recovered_1000111c(int param_1);
void recovered_100036b8(void *pointer);
undefined8 * recovered_10009a74(undefined8 *param_1);
void recovered_100027c8(undefined *param_1);
void recovered_10003868(void);
void recovered_100034ac(void);
bool recovered_10003aec(uint param_1);
undefined8 * recovered_100085a0(undefined8 *param_1,ulong in_x1,undefined1 *in_x2);
undefined1 recovered_10003108(long param_1);
long * recovered_100094d4(long *param_1,ulong param_2,undefined4 *param_3);
ulong recovered_10001738(double param_1);
bool recovered_10006588(uint *param_1,long *param_2,long *param_3,long *param_4);
ulong recovered_10000a5c(ulong param_1,uint param_2);
undefined8 * recovered_1000a314(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined1 * recovered_1000372c(ulong param_1);
double recovered_10001c0c(char *text,char **end);
long recovered_1000121c(long param_1);
void * recovered_1000366c(ulong size);
long * recovered_100085e0(long *param_1,ulong param_2);
float recovered_10001948(float param_1);
void recovered_10002318(long *param_1,ulong *param_2,int *param_3,char *param_4);
float recovered_10001880(uint in_w0,float param_2);
void recovered_10003718(ulong *param_1);
long recovered_100091a4(long *param_1,undefined1 *param_2);
double recovered_10003c58(double value);
undefined8 recovered_10008f30(long *param_1,uint param_2,uint *param_3);
long recovered_10009120(long param_1);
long recovered_10000aa8(long param_1,uint param_2);
undefined4 * recovered_10002c3c(long param_1,long param_2,int *param_3);
int recovered_100011d8(byte *param_1,byte *param_2);
undefined8 recovered_10009370(long *param_1,uint *param_2,undefined8 param_3);
long recovered_1000a104(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
undefined8 recovered_10003158(long param_1);
long recovered_10003784(long param_1);
undefined4 * recovered_10002928(long param_1,long param_2);
undefined8 recovered_10002fdc(int *param_1,ulong param_2,int param_3);
uint recovered_10003708(uint *param_1);
undefined8 * recovered_10009aa0(undefined8 *param_1);
uint recovered_10007eb0(uint param_1,uint param_2);
void recovered_100083e4(long param_1,long param_2);
undefined8 recovered_100033ac(void);
long recovered_100039cc(long *param_1,undefined8 param_2,long *param_3);
long recovered_10008670(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_100038d8(undefined8 *in_x0);
void recovered_100017e8(ulong param_1);
long recovered_10001ae8(byte *param_1,undefined8 *param_2,uint param_3);
void recovered_10000c0c(void);
void recovered_1000363c(long param_1);
bool recovered_10008470(long param_1,ulong param_2,ulong param_3,uint *param_4);
float recovered_10001918(float value);
void recovered_100095e4(long *param_1,ulong param_2);
undefined8 recovered_10003dec(long param_1,long *param_2,undefined2 *param_3);
bool recovered_10003b08(ulong param_1);
void recovered_100022dc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
double recovered_10001728(double value);
undefined8 recovered_10003094(int *param_1);
void * recovered_1000a304(ulong count);
double recovered_1000151c(double value);
void recovered_1000291c(void);
void recovered_10009b54(long *param_1,undefined8 *param_2);
long recovered_1000364c(long param_1);
bool recovered_1000117c(int param_1);
uint recovered_10001ab8(int param_1);
char * recovered_100012c8(char *param_1,char *param_2);
long recovered_10002ecc(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10002918(void);
float recovered_10001868(int *in_x0,float param_2);
void recovered_10008010(long *param_1,ulong param_2);
long recovered_10003de8(byte *param_1,undefined8 *param_2,uint param_3);
void recovered_10007f24(long *param_1,ulong param_2,undefined1 *param_3);
bool recovered_1000113c(uint param_1);
undefined8 recovered_100033a8(void);
undefined8 * recovered_100096b4(undefined8 *param_1,undefined8 *param_2);
ulong recovered_100040f0(byte *param_1,long param_2);
bool recovered_10003b38(ulong param_1);
char * recovered_10001308(char *param_1,char *param_2);
long recovered_10000b80(ulong param_1,ulong param_2);
void recovered_10009f88(undefined8 *param_1);
int recovered_10008310(uchar *data,ulong size,ulonglong *position,uint *out);
uint recovered_10009140(long param_1,ulong param_2);
bool recovered_10003a0c(long *param_1,long *param_2);
float recovered_100018d8(float value);
bool recovered_1000112c(int param_1);
byte recovered_10007720(long param_1,long param_2,ulong param_3,uint param_4);
undefined8 recovered_100039b8(void);
void recovered_100005b8(void);
long recovered_100098d0(long *param_1,undefined4 *param_2);
double recovered_10001548(double value);
ulong recovered_10000a18(ulong param_1,uint param_2);
ulong recovered_10000af8(ulong param_1,ulong param_2);
void recovered_100036e8(void *pointer,ulong size);
void recovered_10009704(long *param_1,ulong param_2,undefined2 *param_3);
int recovered_1000240c(char *buffer,uintptr_t capacity,char *format,...);
uint recovered_10002de8(int *param_1);
void recovered_10009500(long *param_1,ulong param_2,undefined4 *param_3);
bool recovered_1000116c(int param_1);
double recovered_1000147c(double left,double right);
void recovered_100038ac(undefined8 *param_1);
double recovered_10001584(double value);
void recovered_10003728(void);
double recovered_100016dc(double value);
uint128 recovered_10001408(double param_1,int *param_2);
char * recovered_10001258(char *param_1,char param_2);
undefined8 recovered_100039ac(undefined8 *in_x0);
undefined8 recovered_100034a8(void);
long * recovered_10009934(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_10000910(void);
void recovered_10003a98(void);
float recovered_10001d9c(char *text,char **end);
ulong * recovered_10003fc4(uint param_1,long *param_2);
void recovered_1000a290(long *param_1,ulong param_2);
int recovered_100011a0(int param_1);
void recovered_100038e4(void);
bool recovered_10009d5c(long param_1,long param_2,ulong param_3);
long recovered_10001630(double param_1);
void recovered_1000851c(long *param_1,ulong param_2);
undefined8 recovered_10000b60(undefined8 param_1,undefined8 param_2);
bool recovered_10003ab4(uint param_1);
bool recovered_10003b50(ulong param_1);
bool recovered_1000762c(uint *param_1,long param_2,long param_3);
ulong recovered_1000411c(undefined8 *param_1);
char * recovered_10003404(int param_1);
undefined1 recovered_10003114(long param_1);
int recovered_1000118c(int param_1);
void recovered_100085cc(long *param_1,undefined1 *param_2,undefined1 *param_3);
long recovered_100070ac(long param_1);
undefined8 recovered_100080bc(byte *param_1,int param_2,uint param_3,byte *param_4);
double recovered_100013d4(double param_1,uint param_2);
undefined8 * recovered_10009668(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10003700(void);
float recovered_10001898(float left,float right);
undefined8 recovered_10002920(void);
uint recovered_1000920c(long *param_1,long param_2,uint *param_3);
void recovered_1000860c(long *param_1,ulong param_2);
long recovered_1000996c(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
uint128 recovered_10001810(long param_1);
float recovered_100018b4(float value);
undefined8 recovered_10002bb4(long param_1,ulong param_2);
int recovered_10007218(const char *name,const uint8_t *pixels,int width,int height);
char * recovered_100033b0(long param_1,char param_2,long param_3);
double recovered_100014a0(double left,double right);
double recovered_100018f0(double value);
long recovered_100019b4(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_1000986c(long *param_1,undefined4 *param_2);
void recovered_100097e8(long *param_1,ulong param_2);

/* Original analysis identifiers for manual recovery units. */
