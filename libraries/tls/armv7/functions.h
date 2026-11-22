/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost ARM32 recovery intrinsics; Pooka's Free Software License. */
#pragma once
#define PF_VECTOR_WORD(address) (*(volatile uint32_t *)(uintptr_t)(address))
#define Reset PF_VECTOR_WORD(0)
#define UndefinedInstruction PF_VECTOR_WORD(4)
#define SupervisorCall PF_VECTOR_WORD(8)
#define PrefetchAbort PF_VECTOR_WORD(12)
#define DataAbort PF_VECTOR_WORD(16)
#define FIQ PF_VECTOR_WORD(28)
#define IRQ PF_VECTOR_WORD(24)
static inline void WaitForEvent(void){__asm__ volatile("wfe");}
static inline void DataMemoryBarrier(uint32_t scope){(void)scope;__asm__ volatile("dmb ish":::"memory");}
static inline void *software_udf(uint32_t value,uint32_t pc){(void)value;(void)pc;__builtin_trap();}
#define LZCOUNT(value) ((value)?__builtin_clz((uint32_t)(value)):32)
static inline int32_t pf_arm_to_signed(double value,uint32_t mode){(void)mode;if(value!=value)return 0;if(value>=2147483647.0)return 2147483647;if(value<=-2147483648.0)return (-2147483647-1);return (int32_t)value;}
static inline uint32_t pf_arm_to_unsigned(double value,uint32_t mode){(void)mode;if(!(value>0))return 0;if(value>=4294967295.0)return 0xffffffffU;return (uint32_t)value;}
static inline int32_t pf_arm_bits32_signed(uint32_t value,uint32_t mode){return pf_arm_to_signed(pf_bits_float(value),mode);}
static inline int32_t pf_arm_bits64_signed(uint64_t value,uint32_t mode){return pf_arm_to_signed(pf_bits_double(value),mode);}
static inline uint32_t pf_arm_bits32_unsigned(uint32_t value,uint32_t mode){return pf_arm_to_unsigned(pf_bits_float(value),mode);}
static inline uint32_t pf_arm_bits64_unsigned(uint64_t value,uint32_t mode){return pf_arm_to_unsigned(pf_bits_double(value),mode);}
#define VectorFloatToSigned(value,mode) _Generic((value),float:pf_arm_to_signed,double:pf_arm_to_signed,uint64_t:pf_arm_bits64_signed,int64_t:pf_arm_bits64_signed,default:pf_arm_bits32_signed)(value,mode)
#define VectorFloatToUnsigned(value,mode) _Generic((value),float:pf_arm_to_unsigned,double:pf_arm_to_unsigned,uint64_t:pf_arm_bits64_unsigned,int64_t:pf_arm_bits64_unsigned,default:pf_arm_bits32_unsigned)(value,mode)
#define VectorSignedToFloat(value,mode) ((double)(int32_t)(value))
#define VectorUnsignedToFloat(value,mode) ((double)(uint32_t)(value))
static inline int32_t pf_arm_signed_sat(int64_t value,unsigned bits){int64_t high=((int64_t)1<<(bits-1))-1,low=-high-1;return value>high?high:value<low?low:value;}
static inline uint32_t pf_arm_unsigned_sat(int64_t value,unsigned bits){uint64_t high=((uint64_t)1<<bits)-1;return value<0?0:(uint64_t)value>high?high:value;}
#define SignedSaturate(value,bits) pf_arm_signed_sat((int64_t)(value),bits)
#define UnsignedSaturate(value,bits) pf_arm_unsigned_sat((int64_t)(value),bits)
#define SignedDoesSaturate(value,bits) ((void)0)
#define UnsignedDoesSaturate(value,bits) ((void)0)

#define pf_arm_signed_to_float_bits(value,mode) pf_float_bits((float)VectorSignedToFloat(value,mode))

#define VectorFloatToSigned(value,mode) _Generic((value),float:pf_arm_to_signed,double:pf_arm_to_signed,uint32_t:pf_arm_bits32_signed,uint64_t:pf_arm_bits64_signed)(value,mode)
#define VectorSignedToFloat(value,mode) ((double)(int32_t)(value))
#define VectorUnsignedToFloat(value,mode) ((double)(uint32_t)(value))

extern uint8_t pf_module_state[];























































































































































































































































































/* Original analysis identifiers for manual recovery units. */
#include "word_divide.h"
#define NotUsed (*(volatile uint32_t *)(uintptr_t)0x14)
#define pf_varargs_10006fc4__4_ recovered_10006fc4
#define pf_varargs_10006fc4__4__4_ recovered_10006fc4
#define pf_varargs_10006fc4__4__4__4__4_ recovered_10006fc4
#define pf_varargs_10006fc4___ recovered_10006fc4
extern uint8_t pf_module_state[];
uint recovered_10002cf0(uint param_1,uint param_2);
uint recovered_10002d40(uint param_1,uint param_2);
uint recovered_10002d78(uint param_1,uint param_2);
uint recovered_10002de8(uint param_1,uint param_2);
ulonglong recovered_10002e54(float param_1);
longlong recovered_10002e64(float param_1);
float recovered_10002e74(uint param_1,uint param_2);
float recovered_10002e90(uint param_1,uint param_2);
void recovered_10002eb0(void);
void recovered_10002ec8(void);
int recovered_100032c0(void);
void recovered_10003304(void);
int recovered_10003354(void);
void recovered_10003390(void);
uint * recovered_100033d4(int param_1);
longlong recovered_100034e0(uint param_1,int param_2,uint param_3);
ulonglong recovered_10003534(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003588(uint param_1,int param_2,uint param_3);
undefined8 recovered_100035d4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100036b8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003738(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003850(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000390c(void);
int recovered_10003914(int param_1);
void * recovered_10003920(uintptr_t size);
void recovered_10003974(void *pointer);
void * recovered_100039c4(void *pointer,uintptr_t size);
void * recovered_10003a18(void *destination,void *source,ulong count);
void * recovered_10003c9c(void *destination,void *source,ulong count);
void * recovered_100041a8(void *destination,int value,ulong count);
void recovered_100043a8(undefined4 *param_1,uint param_2);
void recovered_100045a4(undefined4 *param_1,uint param_2);
int recovered_100047a0(void *left,void *right,ulong count);
int recovered_10004998(byte *param_1,byte *param_2);
bool recovered_100049e8(int param_1);
bool recovered_100049fc(int param_1);
bool recovered_10004a10(uint param_1);
bool recovered_10004a28(uint param_1);
bool recovered_10004a54(int param_1);
bool recovered_10004a74(int param_1);
int recovered_10004a88(int param_1);
int recovered_10004a98(int param_1);
ulong recovered_10004aa8(char *text);
int recovered_10004ad0(char *left,char *right);
int recovered_10004b14(byte *param_1,byte *param_2);
void recovered_10004b58(int param_1,int param_2);
undefined8 * recovered_10004b74(undefined8 *param_1);
char * recovered_10004e88(char *param_1,char param_2);
int recovered_10004ebc(char *param_1,char *param_2);
char * recovered_10004f20(char *param_1,char *param_2);
char * recovered_10004f80(char *param_1,char *param_2);
undefined * recovered_10004fe4(void);
undefined ** recovered_10004ff4(void);
undefined4 recovered_10005004(undefined4 *param_1);
double recovered_100050b4(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_100050f8(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_100051b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100051e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10005268(undefined4 param_1,undefined4 param_2);
double recovered_10005298(undefined4 param_1,undefined4 param_2);
double recovered_100052dc(undefined4 param_1,undefined4 param_2);
double recovered_10005328(undefined4 param_1,undefined4 param_2);
longlong recovered_10005468(undefined4 param_1,undefined4 param_2);
double recovered_10005498(undefined4 param_1,undefined4 param_2);
double recovered_10005558(undefined4 param_1,undefined4 param_2);
double recovered_10005608(undefined4 param_1,undefined4 param_2);
long long recovered_10005628(double value);
unsigned long long recovered_100056e8(double value);
double recovered_10005770(unsigned long long value);
double recovered_100057b8(long long value);
float recovered_10005848(float param_1,float param_2);
float recovered_1000588c(float param_1,float *param_2);
float recovered_10005948(float param_1,uint param_2);
float recovered_10005994(float param_1,float param_2);
float recovered_10005a1c(float param_1);
float recovered_10005a54(float param_1);
double recovered_10005aa0(undefined4 param_1,undefined4 param_2);
float recovered_10005af4(float param_1);
float recovered_10005b50(float param_1);
float recovered_10005ba8(float param_1);
void recovered_10005cec(undefined4 param_1,undefined4 param_2);
float recovered_10005d20(float param_1);
float recovered_10005de8(float param_1);
float recovered_10005ea0(float param_1);
int recovered_10005ebc(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10006010(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10006170(byte *param_1,undefined4 *param_2);
float recovered_10006344(byte *in_r0,undefined4 *in_r1);
int recovered_10006360(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10006fc4(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10006ff4(int *param_1,int *param_2,int *param_3);
void recovered_100071e0(char *param_1,int param_2);
void recovered_100073c4(void);
void recovered_10007484(void);
void recovered_10007540(char *param_1,undefined *param_2);
void recovered_10007598(void);
void recovered_100075e4(void);
bool recovered_10007630(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10007784(void);
void recovered_1000778c(void);
undefined4 recovered_10007790(void);
undefined4 * recovered_10007798(char *param_1,int param_2);
void recovered_10007b1c(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10007c1c(uint *param_1);
uint recovered_10007d14(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10007e40(int *param_1);
int recovered_10008040(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_100081b8(int *param_1,uint param_2,int param_3);
undefined4 recovered_10008268(int param_1);
undefined4 recovered_10008290(uint *param_1);
undefined1 recovered_10008368(int param_1);
undefined1 recovered_10008378(int param_1);
void recovered_10008388(int param_1);
void recovered_100083a4(uint param_1,int param_2);
undefined4 recovered_100083c8(int param_1);
undefined4 recovered_10008458(int param_1,int param_2);
undefined4 recovered_100085cc(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_100086cc(int param_1,int param_2,int param_3);
undefined4 recovered_10008754(void);
void recovered_1000875c(void);
undefined4 recovered_10008760(void);
undefined4 recovered_10008768(void);
undefined4 recovered_10008770(void);
char * recovered_10008778(char *param_1,char param_2,int param_3);
int recovered_100087ac(char *left,char *right,ulong count);
char * recovered_100087f0(undefined4 param_1);
undefined4 recovered_100088f0(void);
undefined4 recovered_100088f8(void);
void recovered_10008900(void);
__attribute__((naked,noreturn)) void recovered_10008928(void *context);
__attribute__((naked,returns_twice)) int recovered_10008938(void *context);
__attribute__((naked,noreturn)) void recovered_10008950(void *context,int value);
void recovered_10008970(void);
undefined4 recovered_100089fc(void);
void recovered_10008a04(int param_1);
void recovered_10008a14(int param_1);
void * recovered_10008a4c(ulong param_1);
void * recovered_10008a78(ulong param_1);
void recovered_10008aa4(void *param_1);
void recovered_10008b6c(void *param_1);
void recovered_10008c34(void *param_1);
void recovered_10008cfc(void *param_1);
undefined4 recovered_10008dc4(void);
uint recovered_10008dcc(uint *param_1);
void recovered_10008ddc(uint *param_1);
void recovered_10008dec(void);
undefined4 * recovered_10008df0(uint param_1);
void recovered_10008e78(int param_1);
int recovered_10008e88(int param_1);
void recovered_10008e90(void);
void recovered_10008ef8(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008f20(undefined4 *param_1);
void recovered_10008fb4(void);
void recovered_10008fec(undefined4 *param_1);
void recovered_10009010(undefined4 *param_1);
void recovered_10009058(undefined4 *in_r0);
void recovered_10009064(void);
void recovered_10009070(undefined4 *param_1);
undefined4 recovered_100090a4(undefined4 *param_1);
undefined4 recovered_10009164(undefined4 *in_r0);
undefined4 recovered_10009170(void);
void recovered_10009178(void);
int recovered_10009184(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10009278(void);
undefined4 recovered_1000927c(void);
bool recovered_10009284(int param_1);
bool recovered_10009298(int param_1);
bool recovered_100092d8(uint param_1);
bool recovered_10009304(undefined4 param_1,uint param_2);
bool recovered_10009320(uint param_1);
bool recovered_1000933c(undefined4 param_1,uint param_2);
bool recovered_10009358(undefined4 param_1,uint param_2);
double recovered_10009378(double value);
float recovered_10009460(float value);
long double recovered_10009560(long double value);
double recovered_10009648(long end,long start);
double recovered_10009664(undefined4 param_1,undefined4 param_2);
ulonglong recovered_100096bc(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10009834(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10009838(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_10009bec(uint param_1,undefined4 *param_2);
char * recovered_10009d80(void);
void recovered_10009d90(void *context,void *io,char *hostname);
int recovered_10009ee0(void *context,char *error,ulong capacity);
void recovered_1000a530(void *context,void *data,ulong size);
void recovered_1000a7d0(void *pointer);
undefined4 recovered_1000a820(char *param_1,uint param_2,void *param_3,char *param_4,ulong param_5);
void recovered_1000aa90(void *output,void *scalar,void *point);
void recovered_1000c010(void *salt,void *input,void *output);
void recovered_1000c0b0(void *secret,char *label,void *hash,void *output);
void recovered_1000c170(void *output,void *secret);
int recovered_1000c210(undefined4 *param_1,void *param_2,void *param_3,void *param_4,char *param_5,
                      ulong param_6);
int recovered_1000cd70(void *context,void *data,ulong size,char *error,ulong capacity);
undefined4
recovered_1000cde8(undefined4 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7);
int recovered_1000d168(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity);
uint recovered_1000d294(undefined4 *param_1,void *param_2,byte *param_3,byte *param_4,uint param_5,
                       uint *param_6,char *param_7,ulong param_8);
int recovered_1000dae8(void *context,void *output);
void recovered_1000db40(void *opaque,void *output);
void recovered_1000dd74(uint *param_1,uint *param_2,undefined8 *param_3);
void recovered_1000e508(uint *param_1);
void recovered_1000e830(void *inner,void *outer,void *key);
void recovered_1000e9b0(void *context,void *output);
void recovered_1000eae8(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length);
void recovered_1000ed98(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output);
void recovered_1000f600(void *key,uint counter,void *nonce,void *output);

/* Original analysis identifiers for manual recovery units. */
