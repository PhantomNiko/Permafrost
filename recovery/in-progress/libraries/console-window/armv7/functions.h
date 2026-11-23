#include "literals110.h"
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
#include "arm_exclusive.h"
static inline void HintYield(void){__asm__ volatile("yield":::"memory");}
extern uint8_t pf_module_state[];
uint recovered_10000a28(uint param_1,uint param_2);
uint recovered_10000a78(uint param_1,uint param_2);
uint recovered_10000ab0(uint param_1,uint param_2);
uint recovered_10000b20(uint param_1,uint param_2);
unsigned long long recovered_10000b8c(float value);
long long recovered_10000b9c(float value);
float recovered_10000bac(unsigned long long value);
float recovered_10000bc8(undefined4 param_1,undefined4 param_2);
void recovered_10000be8(void);
void recovered_10000c74(void);
bool recovered_10000ef4(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_10000f70(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_100011b8(undefined4 param_1,undefined4 param_2);
int recovered_10001250(void);
void recovered_10001300(void);
int recovered_100013bc(void);
void recovered_10001464(void);
void recovered_10001514(int param_1);
uint * recovered_10001598(int param_1,uint *param_2,uint *param_3);
void recovered_100017f0(int param_1,uint *param_2);
uint * recovered_10001878(int param_1,uint *param_2,uint *param_3);
void recovered_10001908(int param_1);
void recovered_10001984(int param_1);
uint * recovered_10001af0(uint *param_1,uint param_2);
longlong recovered_10002090(uint param_1,int param_2,uint param_3);
ulonglong recovered_100020e4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002138(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002184(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002268(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100022e8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002400(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100024bc(void);
int recovered_100024c4(int param_1);
void * recovered_100024d0(uintptr_t size);
void recovered_10002524(void *pointer);
void * recovered_10002574(void *pointer,uintptr_t size);
void * recovered_100025c8(void *destination,void *source,ulong count);
void * recovered_1000284c(void *destination,void *source,ulong count);
void * recovered_10002d58(void *destination,int value,ulong count);
void recovered_10002f58(undefined4 *param_1,uint param_2);
void recovered_10003154(undefined4 *param_1,uint param_2);
char * recovered_10003350(char *param_1,char param_2,int param_3);
int recovered_10003384(void *left,void *right,ulong count);
int recovered_1000357c(byte *param_1,byte *param_2);
bool recovered_100035cc(int param_1);
bool recovered_100035e0(int param_1);
bool recovered_100035f4(uint param_1);
bool recovered_1000360c(uint param_1);
bool recovered_10003638(int param_1);
bool recovered_10003658(int param_1);
int recovered_1000366c(int param_1);
int recovered_1000367c(int param_1);
ulong recovered_1000368c(char *text);
int recovered_100036b4(char *left,char *right);
int recovered_100036f8(byte *param_1,byte *param_2);
void recovered_1000373c(int param_1,int param_2);
undefined8 * recovered_10003758(undefined8 *param_1);
char * recovered_10003a6c(char *param_1,char param_2);
int recovered_10003aa0(char *param_1,char *param_2);
int recovered_10003b04(char *param_1,char *param_2);
char * recovered_10003b6c(char *param_1,char *param_2);
char * recovered_10003bcc(char *param_1,char *param_2);
undefined * recovered_10003c30(void);
undefined ** recovered_10003c40(void);
undefined4 recovered_10003c50(undefined4 *param_1);
double recovered_10003d00(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10003d44(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10003dfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003e34(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003eb4(undefined4 param_1,undefined4 param_2);
double recovered_10003ee4(undefined4 param_1,undefined4 param_2);
double recovered_10003f28(undefined4 param_1,undefined4 param_2);
double recovered_10003f70(undefined4 param_1,undefined4 param_2);
longlong recovered_100040b0(undefined4 param_1,undefined4 param_2);
double recovered_100040e0(undefined4 param_1,undefined4 param_2);
double recovered_100041a0(undefined4 param_1,undefined4 param_2);
double recovered_10004250(undefined4 param_1,undefined4 param_2);
long long recovered_10004270(double value);
unsigned long long recovered_10004330(double value);
double recovered_100043b8(unsigned long long value);
double recovered_10004400(long long value);
float recovered_10004490(float param_1,float param_2);
float recovered_100044d4(float value,int *exponent);
float recovered_10004590(float param_1,uint param_2);
float recovered_100045dc(float param_1,float param_2);
float recovered_10004664(float param_1);
float recovered_1000469c(float param_1);
double recovered_100046e8(undefined4 param_1,undefined4 param_2);
float recovered_1000473c(float param_1);
float recovered_10004798(float param_1);
float recovered_100047f0(float param_1);
longlong recovered_10004934(undefined4 param_1,undefined4 param_2);
float recovered_10004968(float param_1);
float recovered_10004a30(float param_1);
float recovered_10004ae8(float param_1);
int recovered_10004b04(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10004c58(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10004db8(byte *param_1,undefined4 *param_2);
float recovered_10004f8c(byte *in_r0,undefined4 *in_r1);
int recovered_10004fa8(char *buffer,ulong capacity,char *format,void *arguments);
int recovered_10005d70(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10005da0(int *param_1,int *param_2,int *param_3);
uint * recovered_10005fa0(uint *param_1,uint *param_2);
undefined4 recovered_10006024(uint *param_1,int param_2);
void recovered_10006084(char *param_1,int param_2);
void recovered_10006268(void);
void recovered_10006328(void);
void recovered_100063e4(char *param_1,undefined1 *param_2);
void recovered_1000643c(void);
void recovered_10006488(void);
bool recovered_100064d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006628(void);
void recovered_10006630(void);
undefined4 recovered_10006634(void);
undefined4 * recovered_1000663c(char *param_1,char *param_2);
void recovered_100069c0(char *param_1,char *param_2,uint *param_3);
undefined4 recovered_10006ac0(uint *param_1);
uint recovered_10006bb8(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10006ce4(int *param_1);
int recovered_10006ee4(char *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_1000705c(int *param_1,uint param_2,int param_3);
undefined4 recovered_1000710c(int param_1);
undefined4 recovered_10007134(uint *param_1);
undefined1 recovered_1000720c(int param_1);
undefined1 recovered_1000721c(int param_1);
void recovered_1000722c(int param_1);
uint recovered_10007248(uint param_1,int param_2);
undefined4 recovered_1000726c(int param_1);
undefined4 recovered_100072fc(int param_1,int param_2);
undefined4 recovered_10007470(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_10007570(int param_1,int param_2,int param_3);
undefined4 recovered_100075f8(void);
void recovered_10007600(void);
undefined4 recovered_10007604(void);
undefined4 recovered_1000760c(void);
undefined4 recovered_10007614(void);
int recovered_1000761c(char *left,char *right,ulong count);
char * recovered_10007660(undefined4 param_1);
undefined4 recovered_10007760(void);
undefined4 recovered_10007768(void);
void recovered_10007770(void);
__attribute__((naked,noreturn)) void recovered_10007798(void *context,...);
__attribute__((naked,returns_twice)) int recovered_100077a8(void *context);
__attribute__((naked,noreturn)) int recovered_100077f8(int context,int value);
void recovered_10007850(void);
undefined4 recovered_100078dc(void);
void recovered_100078e4(int param_1);
void * recovered_100078f4(void *exception);
void * recovered_10007934(ulong param_1);
void * recovered_10007960(ulong param_1);
void recovered_1000798c(void *param_1);
void recovered_10007a54(void *param_1);
void recovered_10007b1c(void *param_1);
void recovered_10007be4(void *param_1);
undefined4 recovered_10007cac(void);
uint recovered_10007cb4(uint *param_1);
void recovered_10007cc4(uint *param_1);
void recovered_10007cd4(void);
undefined4 * recovered_10007cd8(uint param_1);
void recovered_10007de4(int param_1);
void recovered_10007e48(int param_1,undefined4 param_2,int param_3);
int recovered_10007e7c(int param_1);
void recovered_10007e84(void);
void recovered_10007f3c(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007f64(undefined4 *param_1);
void recovered_10007ff8(void);
void recovered_10008030(undefined4 *param_1);
void recovered_10008054(undefined4 *param_1);
void recovered_1000809c(undefined4 *param_1);
void recovered_100080a8(void);
void recovered_100080b4(undefined4 *param_1);
void recovered_10008124(undefined4 *param_1);
void recovered_100081e4(undefined4 *param_1);
undefined4 recovered_100081f0(void);
void recovered_100081f8(void);
int recovered_10008204(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100082f8(void);
undefined4 recovered_100082fc(void);
bool recovered_10008304(int param_1);
bool recovered_10008318(int param_1);
bool recovered_10008358(uint param_1);
bool recovered_10008384(undefined4 param_1,uint param_2);
bool recovered_100083a0(uint param_1);
bool recovered_100083bc(undefined4 param_1,uint param_2);
bool recovered_100083d8(undefined4 param_1,uint param_2);
double recovered_100083f8(double value);
float recovered_100084e0(float value);
long double recovered_100085e0(long double value);
double recovered_100086c8(long end,long start);
double recovered_100086e4(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000873c(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_100088b4(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_100088b8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_10008c6c(uint param_1,undefined4 *param_2);
int * recovered_10008dfc(char *param_1,uint param_2,uint param_3);
void recovered_10009010(int param_1,int param_2);
void recovered_10009370(int param_1);
void recovered_10009a78(int param_1);
void recovered_10009a88(undefined4 *param_1);
void * recovered_10009b48(undefined4 *param_1);
void recovered_10009cb0(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10009ce4(int param_1,int param_2,int param_3);
void recovered_10009d4c(int *param_1,undefined1 *param_2);
void recovered_10009d88(int param_1,int *param_2,undefined1 *param_3);
void recovered_10009e08(int param_1);
void recovered_10009e34(void);
byte recovered_1000a9ec(int param_1);
void recovered_1000aa00(int param_1,int param_2,undefined1 param_3,undefined1 param_4);
int * recovered_1000aa28(int param_1,int param_2);
void recovered_1000aaa4(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_1000aae8(int param_1,uint param_2);
void recovered_1000ab08(void);
void recovered_1000ae10(void);
void recovered_1000ae14(void);
undefined4 recovered_1000ae18(void);
void recovered_1000ae20(void);
undefined4 recovered_1000ae24(void);
undefined1 * recovered_1000ae2c(char *param_1,int *param_2,int *param_3);
void recovered_1000b720(int *param_1,int param_2,uint param_3);
int * recovered_1000b8e4(int *param_1);
int recovered_1000b938(int *param_1,undefined4 *param_2);
void recovered_1000ba60(int *param_1,int param_2,uint param_3);
int recovered_1000bcb8(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
