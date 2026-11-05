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
typedef struct pf_glyph { int left,top,width,height;double advance;unsigned char *pixels;unsigned long count,capacity; } pf_glyph;
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
void recovered_10000608(void);
void recovered_10000614(void);
ulong recovered_1000087c(void);
long recovered_100008c8(void);
ulong recovered_10000908(void);
long recovered_10000944(void);
ulong * recovered_10000974(long param_1);
ulong recovered_10000a08(ulong param_1,uint param_2);
ulong recovered_10000a4c(ulong param_1,uint param_2);
long recovered_10000a98(long param_1,uint param_2);
void recovered_10000ae8(ulong param_1,ulong param_2);
ulong recovered_10000af0(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b50(undefined8 param_1,undefined8 param_2);
long recovered_10000b70(ulong param_1,ulong param_2);
long recovered_10000bb0(long param_1,long param_2);
void recovered_10000bfc(void);
int recovered_10000c04(int param_1);
void * recovered_10000c10(size_t size);
void recovered_10000c54(void *pointer);
void * recovered_10000c98(void *pointer,size_t size);
void * recovered_10000ce4(void *out,void *data,ulong size);
void * recovered_10000d04(void *out,void *data,ulong size);
void * recovered_10000d54(void *out,int value,ulong size);
void recovered_10000d70(undefined1 *param_1,long param_2);
void recovered_10000d84(undefined1 *param_1,long param_2);
int recovered_10000d98(void *left,void *right,ulong size);
bool recovered_10000dc0(int param_1);
bool recovered_10000dd0(int param_1);
bool recovered_10000de0(uint param_1);
bool recovered_10000df4(uint param_1);
bool recovered_10000e10(int param_1);
bool recovered_10000e20(int param_1);
int recovered_10000e30(int param_1);
int recovered_10000e44(int param_1);
ulong recovered_10000e58(char *text);
int recovered_10000e7c(char *left,char *right);
int recovered_10000ea4(char *left,char *right);
void recovered_10000ea8(long param_1,long param_2);
void recovered_10000ec0(char *param_1);
char * recovered_10000efc(char *param_1,char param_2);
long recovered_10000f24(long param_1,char *param_2);
char * recovered_10000f6c(char *param_1,char *param_2);
char * recovered_10000fac(char *param_1,char *param_2);
undefined * recovered_10000fe8(void);
undefined ** recovered_10000ff4(void);
undefined8 recovered_10001000(undefined8 *param_1);
double recovered_1000101c(double param_1,uint param_2);
uint128 recovered_10001050(double param_1,int *param_2);
double recovered_100010c4(double left,double right);
double recovered_100010e8(double left,double right);
double recovered_10001148(double value);
double recovered_10001164(double value);
double recovered_10001190(double value);
double recovered_100011cc(double value);
long recovered_10001278(double param_1);
double recovered_1000128c(double value);
double recovered_100012e0(double param_1);
double recovered_10001324(double value);
double recovered_10001370(double value);
float recovered_10001380(float left,float right);
float recovered_100013b4(int *in_x0,float param_2);
float recovered_100013cc(uint in_w0,float param_2);
float recovered_100013e4(float left,float right);
float recovered_10001400(float value);
float recovered_10001424(float value);
double recovered_1000143c(double value);
float recovered_10001464(float value);
float recovered_1000147c(float value);
float recovered_10001494(float value);
long recovered_100014ac(double param_1);
float recovered_100014c0(float value);
float recovered_100014d8(float value);
float recovered_100014f0(float value);
long recovered_10001500(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001604(int param_1);
long recovered_10001634(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_10001758(char *text,char **end);
float recovered_100018e8(char *text,char **end);
int recovered_10001900(char *out,ulong capacity,char *format,void *arguments);
void recovered_10001bd4(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10001c10(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10001c60(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10001d00(char *out,ulong capacity,char *format,...);
void recovered_10001d28(long param_1,ulong param_2,ulong *param_3);
bool recovered_10001d80(int param_1);
void recovered_10001eb8(char *param_1,long param_2);
void recovered_10001f70(int param_1);
void recovered_10001ffc(void);
void recovered_10002004(void);
void recovered_1000200c(char *param_1);
void recovered_10002070(void);
void recovered_100020c4(char *param_1);
void recovered_100020f0(void);
bool recovered_10002114(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_1000218c(void);
void recovered_10002190(void);
undefined8 recovered_10002194(void);
undefined4 * recovered_1000219c(char *param_1,long param_2);
undefined8 recovered_100023d8(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002428(long param_1,ulong param_2);
void recovered_100024b0(char *param_1,long param_2,int *param_3);
undefined8 recovered_100024e4(int *param_1);
long recovered_10002528(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_100025d8(int *param_1);
long recovered_100026bc(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_100027cc(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10002860(long param_1);
undefined8 recovered_10002884(int *param_1);
undefined1 recovered_100028f8(long param_1);
undefined1 recovered_10002904(long param_1);
void recovered_10002910(long param_1);
uint recovered_10002924(uint param_1,long param_2);
undefined8 recovered_10002948(long param_1);
undefined8 recovered_10002980(undefined8 param_1);
undefined8 recovered_100029c4(long param_1,long param_2);
undefined8 recovered_10002a60(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10002ac0(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10002b60(long param_1,long param_2,long param_3);
undefined8 recovered_10002b8c(void);
void recovered_10002b90(void);
undefined8 recovered_10002b94(void);
undefined8 recovered_10002b98(void);
undefined8 recovered_10002b9c(void);
char * recovered_10002ba0(long param_1,char param_2,long param_3);
int recovered_10002bc4(char *left,char *right,ulong size);
char * recovered_10002bf4(int param_1);
undefined8 recovered_10002c94(void);
undefined8 recovered_10002c98(void);
void recovered_10002c9c(void);
bool recovered_10002cb0(int param_1);
ulonglong recovered_10002d7c(long param_1);
__attribute__((naked, returns_twice)) unsigned long recovered_10002d90(unsigned long *context);
__attribute__((naked,noreturn)) void recovered_10002dbc(unsigned long *context,int value);
void recovered_10002df0(void);
undefined8 recovered_10002e04(void);
void recovered_10002e0c(long param_1);
void recovered_10002e1c(long param_1);
void * recovered_10002e3c(ulong size);
void * recovered_10002e6c(ulong size);
void recovered_10002e70(void *data);
void recovered_10002e88(void *data);
void recovered_10002ea0(void *param_1);
void recovered_10002eb8(void *param_1);
undefined8 recovered_10002ed0(void);
uint recovered_10002ed8(uint *param_1);
void recovered_10002ee8(ulong *param_1);
void recovered_10002ef8(void);
undefined1 * recovered_10002efc(ulong param_1);
void recovered_10002f44(long param_1);
long recovered_10002f54(long param_1);
void recovered_10002f5c(void);
void recovered_10002fb4(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10002fd4(undefined8 *param_1);
void recovered_10003038(void);
void recovered_10003068(undefined8 *param_1);
void recovered_1000307c(undefined8 *param_1);
void recovered_100030a8(undefined8 *in_x0);
void recovered_100030b4(void);
undefined8 recovered_100030c0(undefined8 *param_1);
undefined8 recovered_100030e0(undefined8 *param_1);
undefined8 recovered_1000317c(undefined8 *in_x0);
undefined8 recovered_10003188(void);
void recovered_10003190(void);
long recovered_1000319c(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_100031dc(undefined8 *param_1,undefined8 *param_2);
void recovered_10003268(void);
undefined8 recovered_1000326c(void);
bool recovered_10003274(int param_1);
bool recovered_10003284(uint param_1);
bool recovered_100032bc(uint param_1);
bool recovered_100032d8(ulong param_1);
bool recovered_100032f0(uint param_1);
bool recovered_10003308(ulong param_1);
bool recovered_10003320(ulong param_1);
double recovered_10003338(double value);
long recovered_10003384(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100034c8(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100034cc(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_100036a4(uint param_1,long *param_2);
ulong recovered_10003798(undefined8 *param_1);
ulong recovered_100037d0(byte *param_1,long param_2);
ulong recovered_100037fc(undefined8 *param_1);
void * recovered_10003874(void *data,ulong size,float pixels);
void * recovered_10003adc(char *path,float pixels);
void recovered_10003bcc(void *font,float pixels);
void * recovered_10003c0c(void *font,char *text,int a,int b,int c,double spacing);
void recovered_1000454c(undefined8 *param_1);
void recovered_10004584(long *param_1);
void recovered_100045e4(long *param_1,ulong param_2);
long recovered_1000466c(long param_1);
long * recovered_10004690(long *param_1);
void recovered_100046e0(long *param_1);
uint recovered_10004734(long *param_1,long param_2);
undefined8 * recovered_10004744(undefined8 *param_1);
undefined8 * recovered_10004768(undefined8 *param_1);
undefined8 * recovered_10004798(undefined8 *param_1);
void recovered_100047e8(undefined8 *in_x0);
ulong recovered_100047fc(long param_1,long *param_2);
void recovered_10004f70(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale);
double recovered_10005268(void *backend);
double recovered_10005274(long backend);
double recovered_10005280(long backend);
double recovered_10005288(void *backend);
undefined8 recovered_10005290(void);
undefined8 * recovered_10005298(undefined8 *param_1);
void recovered_100052c4(undefined8 *param_1);
undefined8 * recovered_100052e4(undefined8 *param_1);
void recovered_10005310(long param_1);
long * recovered_10005340(long *param_1,long *param_2);
undefined8 recovered_1000539c(long param_1,undefined4 param_2,undefined8 *param_3);
long * recovered_10005408(long *param_1,long *param_2);
void recovered_10005468(long *param_1,ulong param_2);
ulonglong recovered_100054dc(ulong param_1);
void recovered_100054e8(long *param_1,long param_2);
long recovered_10005514(long *param_1,byte *param_2);
ulong recovered_1000557c(long param_1,byte *param_2);
ulong recovered_10005594(byte *param_1,long param_2);
void recovered_100055cc(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_100055d4(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_10005658(long *param_1,ulong param_2);
void recovered_100056c0(long *param_1,ulong param_2);
ulonglong recovered_10005734(long param_1);
long recovered_10005744(long *param_1,undefined8 *param_2);
void recovered_100057ac(long *param_1,ulong param_2);
void recovered_10005810(long *param_1,ulong param_2);
ulonglong recovered_10005884(long param_1);
void recovered_10005894(long *param_1,ulong param_2);
void recovered_10005914(undefined8 *param_1);
undefined8 * recovered_10005924(undefined8 *param_1,undefined8 *param_2);
uchar recovered_10005954(void *backend,ushort glyph,double *transform,void *outline,int depth);
void recovered_10006210(int *result,double advance,long *outline);
long recovered_10006460(long *param_1,int *param_2);
long recovered_10006494(long *param_1,undefined4 *param_2);
long recovered_1000651c(long *param_1,int *param_2);
ulong recovered_10006588(long param_1,byte *param_2);
void recovered_100065bc(long param_1);
long recovered_100065ec(long *param_1,undefined4 *param_2,undefined2 *param_3);
void recovered_10006668(long *param_1,long param_2);
void recovered_100066a8(long param_1,ulong param_2);
ulong recovered_10006710(ulong param_1);
void recovered_1000672c(long param_1);
void recovered_10006790(long *param_1,ulong param_2);
ulonglong recovered_10006804(long param_1);
void recovered_10006814(undefined8 *param_1,undefined8 *param_2);
void recovered_10006830(long *param_1,undefined8 *param_2);
pf_point recovered_10006888(pf_point *a,pf_point *b);
void recovered_100068a4(long *outline,double *point);
pf_point recovered_10006918(double *m,pf_point *p);
void recovered_10006944(long *outline,double *point);
void recovered_100069e0(long *outline);
long * recovered_10006a5c(long *param_1,ulong param_2);
void recovered_10006a88(long *param_1,ulong param_2);
void recovered_10006aec(long *param_1,ulong param_2);
ulonglong recovered_10006b60(long param_1);
long recovered_10006b70(long *param_1,undefined1 *param_2);
long * recovered_10006bd8(long *param_1,ulong param_2);
void recovered_10006c04(long *param_1,ulong param_2);
void recovered_10006c68(long *param_1,ulong param_2);
ulonglong recovered_10006cdc(long param_1);
void recovered_10006cec(long *param_1,ulong param_2);
long recovered_10006d58(long *param_1,undefined1 *param_2);
void recovered_10006dbc(long *param_1,ulong param_2);
ulonglong recovered_10006e30(ulong param_1);
long recovered_10006e3c(long *param_1,undefined1 *param_2);
long recovered_10006ea0(long *param_1,long param_2,undefined1 *param_3);
void recovered_10006f48(long param_1,double *param_2);
void recovered_10006fb8(long *param_1,undefined8 *param_2);
void recovered_10007058(void *outline,pf_point *start,pf_point *control,pf_point *end,int depth);
void recovered_10007170(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_10007178(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_100071fc(long *param_1,ulong param_2);
undefined8 * recovered_10007264(undefined8 *param_1);
void recovered_100072ac(undefined8 *in_x0);
bool recovered_100072c0(long param_1,long *param_2);
void recovered_10007b9c(pf_glyph *__return_storage_ptr__,void *backend,uint glyph,double scale);
double recovered_10007f8c(void *backend);
uint128 recovered_10007f94(long param_1);
uint128 recovered_10007f9c(long param_1);
double recovered_10007fa4(void *backend);
undefined8 recovered_10007fac(void);
void recovered_10007fb4(undefined8 *param_1);
long * recovered_10007fd4(long *param_1);
void recovered_10008000(long *param_1);
void recovered_10008054(undefined8 *param_1);
undefined8 * recovered_1000807c(undefined8 *param_1);
undefined8 * recovered_10008080(undefined8 *param_1);
long * recovered_100080a8(long *param_1);
void recovered_100080d4(long *param_1);
long recovered_10008128(long param_1);
void recovered_10008164(long param_1);
long recovered_10008194(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
ulong recovered_1000828c(long *param_1,char *param_2,ulong param_3);
void recovered_10008318(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_1000832c(long *param_1,ulong param_2);
void recovered_100083a4(long *param_1,undefined1 param_2);
ulonglong recovered_10008408(long param_1);
void recovered_10008424(long *param_1);
long recovered_1000845c(long *param_1,undefined1 *param_2);
bool recovered_100084c4(long *param_1,ulong *param_2,double *param_3);
undefined8 recovered_1000854c(long *param_1,ulong *param_2,int *param_3);
void recovered_10008618(long *param_1,ulong *param_2);
undefined8 * recovered_10008660(undefined8 *param_1,undefined8 *param_2);
long * recovered_100086ac(long *param_1,long param_2,ulong param_3);
void recovered_100086e0(long *param_1,long param_2,ulong param_3);
undefined8 recovered_100087c8(long *param_1,long param_2,long *param_3);
long recovered_10008814(long *param_1,long param_2,long param_3);
void recovered_10008880(long *param_1,ulong param_2);
void recovered_1000892c(long *param_1,undefined8 *param_2,uint param_3);
undefined8 * recovered_10008a24(undefined8 *param_1,undefined8 *param_2);
long recovered_10008a74(long *param_1,undefined8 *param_2);
void recovered_10008b2c(long *param_1,ulong param_2);
ulonglong recovered_10008bc0(long param_1);
long recovered_10008bd4(long *param_1,undefined8 *param_2);
void recovered_10008c0c(long param_1);
long recovered_10008c3c(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10008cb8(long *param_1,long param_2);
long recovered_10008cfc(long *param_1,undefined8 *param_2);
ulong recovered_10008d70(long param_1,undefined8 *param_2);
ulonglong recovered_10008da0(undefined8 param_1,undefined8 *param_2);
bool recovered_10008db8(undefined8 *param_1,undefined8 *param_2);
bool recovered_10008de0(char *param_1,long param_2,char *param_3,long param_4);
void recovered_10008e18(long param_1,ulong param_2);
ulong recovered_10008e80(ulong param_1);
void recovered_10008e9c(long param_1);
void recovered_10008f00(long *param_1,ulong param_2);
ulonglong recovered_10008f94(long param_1);
undefined8 * recovered_10008fa8(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_10008fdc(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_10008ff8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_1000902c(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_1000906c(long *param_1,long *param_2,int param_3);
long recovered_100093e4(long param_1);
undefined8 * recovered_10009410(undefined8 *param_1,long param_2);
long recovered_10009454(long param_1);
undefined8 * recovered_10009478(undefined8 *param_1);
void recovered_100094a4(long param_1);
void recovered_100094c8(long param_1);
void recovered_10009508(long param_1);
long recovered_10009554(long *param_1,undefined8 *param_2);
void recovered_100095b8(long *param_1,ulong param_2);
ulonglong recovered_1000962c(long param_1);
void recovered_1000963c(long *param_1);
long recovered_10009688(long *param_1,undefined4 *param_2);
ulong recovered_100096ec(double param_1,undefined8 *param_2);
int * recovered_1000973c(long *param_1,int *param_2);
ulong recovered_100097ac(long param_1,byte *param_2);
void recovered_100097c4(long *param_1,long param_2);
void recovered_100097f0(long param_1,ulong param_2);
ulong recovered_10009890(ulong param_1);
void recovered_100098ac(long *param_1,ulong param_2);
undefined8 * recovered_10009944(undefined8 *param_1);
undefined8 * recovered_10009970(undefined8 *param_1,ulong in_x1,undefined1 *in_x2);
undefined8 * recovered_1000999c(undefined8 *param_1);
long recovered_100099c8(long *param_1,undefined4 *param_2);
undefined8 * recovered_10009a2c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_10009a64(long *param_1);
void recovered_10009a90(long *param_1);
void recovered_10009ae4(long *param_1,ulong param_2);
ulonglong recovered_10009b78(long param_1);
void recovered_10009b8c(undefined8 *param_1,undefined8 *param_2);
void recovered_10009ba8(undefined8 *param_1,undefined8 *param_2);

/* Original analysis identifiers for manual recovery units. */
