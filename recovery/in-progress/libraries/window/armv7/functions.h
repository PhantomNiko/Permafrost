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
#include "arm_exclusive.h"
static inline void HintYield(void){__asm__ volatile("yield":::"memory");}
extern uint8_t pf_module_state[];
uint recovered_100010c0(uint a,uint b);
uint recovered_10001110(uint a,uint b);
uint recovered_10001148(uint a,uint b);
uint recovered_100011b8(uint a,uint b);
unsigned long long recovered_10001224(float value);
long long recovered_10001234(float value);
float recovered_10001244(unsigned long long value);
float recovered_10001260(undefined4 param_1,undefined4 param_2);
void recovered_10001280(void);
void recovered_1000130c(void);
bool recovered_1000158c(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_10001608(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_10001850(undefined4 param_1,undefined4 param_2);
int recovered_100018e8(int *in_r3);
long recovered_10001998(int *in_r3);
int recovered_10001a54(int *in_r3);
long recovered_10001afc(int *in_r3);
uint * recovered_10001bac(int param_1,int *in_r3);
uint * recovered_10001c30(int param_1,uint *param_2,uint *param_3);
void recovered_10001e88(int param_1,uint *param_2);
uint * recovered_10001f10(int param_1,uint *param_2,uint *param_3);
void recovered_10001fa0(int param_1);
void recovered_1000201c(int param_1);
uint * recovered_10002188(uint *param_1,uint param_2);
longlong recovered_10002728(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000277c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_100027d0(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000281c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002900(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10002980(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002a98(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10002b54(void);
int recovered_10002b5c(int param_1);
void * recovered_10002b68(uintptr_t size);
void recovered_10002bbc(void *pointer);
void * recovered_10002c0c(void *pointer,uintptr_t size);
void * recovered_10002c60(void *dst,void *src,uint bytes);
void * recovered_10002ee4(void *dst,void *src,uint bytes);
void * recovered_100033f0(void *dst,int byte,uint bytes);
void recovered_100035f0(undefined1 *param_1,int param_2);
void recovered_100037ec(undefined1 *param_1,int param_2);
char * recovered_100039e8(int param_1,char param_2,int param_3);
int recovered_10003a1c(char *param_1,char *param_2,int param_3);
int recovered_10003c14(byte *param_1,byte *param_2);
bool recovered_10003c64(int param_1);
bool recovered_10003c78(int param_1);
bool recovered_10003c8c(uint param_1);
bool recovered_10003ca4(uint param_1);
uchar recovered_10003cd0(int param_1);
bool recovered_10003cf0(int param_1);
int recovered_10003d04(int param_1);
int recovered_10003d14(int param_1);
uint recovered_10003d24(char *text);
int recovered_10003d4c(byte *param_1,byte *param_2);
int recovered_10003d90(byte *param_1,byte *param_2);
void recovered_10003dd4(int param_1,int param_2);
void * recovered_10003df0(int param_1);
char * recovered_10004104(char *param_1,char param_2);
int recovered_10004138(int param_1,char *param_2);
int recovered_1000419c(char *param_1,char *param_2);
char * recovered_10004204(char *param_1,char *param_2);
char * recovered_10004264(char *param_1,char *param_2);
undefined * recovered_100042c8(void);
undefined ** recovered_100042d8(void);
undefined8 recovered_100042e8(undefined4 *param_1);
double recovered_10004398(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_100043dc(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004494(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100044cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_1000454c(undefined4 param_1,undefined4 param_2);
double recovered_1000457c(undefined4 param_1,undefined4 param_2);
double recovered_100045c0(undefined4 param_1,undefined4 param_2);
double recovered_10004608(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10004748(undefined4 param_1,undefined4 param_2);
double recovered_10004778(void);
double recovered_10004838(undefined4 param_1,undefined4 in_r1);
double recovered_100048e8(undefined4 param_1,undefined4 param_2);
long long recovered_10004908(double value);
unsigned long long recovered_100049c8(double value);
double recovered_10004a50(unsigned long long value);
double recovered_10004a98(long long value);
float recovered_10004b28(float param_1,float param_2);
float recovered_10004b6c(float value,int *exponent);
float recovered_10004c28(float param_1,int param_2);
float recovered_10004c74(float param_1,float param_2);
float recovered_10004cfc(float param_1);
float recovered_10004d34(float param_1);
undefined4 recovered_10004d80(undefined4 param_1,undefined4 param_2);
float recovered_10004dd4(float param_1);
float recovered_10004e30(float param_1);
float recovered_10004e88(float param_1);
long recovered_10004fcc(undefined4 in_r0,undefined4 in_r1);
float recovered_10005000(float param_1);
float recovered_100050c8(float param_1);
float recovered_10005180(float param_1);
int recovered_1000519c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_100052f0(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10005450(byte *param_1,undefined4 *param_2);
float recovered_10005624(byte *in_r0,undefined4 *in_r1);
int recovered_10005640(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10006408(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10006438(int *param_1,int *param_2,int *param_3);
uint * recovered_10006638(uint *param_1,uint *param_2);
undefined4 recovered_100066bc(uint *param_1,int param_2);
void recovered_1000671c(char *param_1,int param_2);
void recovered_10006900(void);
void recovered_100069c0(void);
void recovered_10006a7c(int param_1,int param_2);
void recovered_10006ad4(void);
void recovered_10006b20(void);
uchar recovered_10006b6c(int param_1,int param_2,char *param_3,int param_4);
undefined4 recovered_10006cc0(void);
void recovered_10006cc8(void);
undefined4 recovered_10006ccc(void);
undefined4 * recovered_10006cd4(int param_1,int param_2);
undefined4 * recovered_10007058(int param_1,int param_2,uint *param_3);
undefined4 recovered_10007158(uint *param_1);
int recovered_10007250(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_1000737c(int *param_1);
int recovered_1000757c(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_100076f4(int *param_1,uint param_2,int param_3);
undefined4 recovered_100077a4(int param_1);
undefined4 recovered_100077cc(uint *param_1);
undefined1 recovered_100078a4(int param_1);
undefined1 recovered_100078b4(int param_1);
void recovered_100078c4(int param_1);
uint recovered_100078e0(uint param_1,int param_2);
undefined4 recovered_10007904(int param_1);
undefined4 recovered_10007994(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10007b08(int param_1,int *param_2,uint *param_3);
uchar recovered_10007c08(int param_1,int param_2,int param_3);
undefined4 recovered_10007c90(void);
void recovered_10007c98(void);
undefined4 recovered_10007c9c(void);
undefined4 recovered_10007ca4(void);
undefined4 recovered_10007cac(void);
int recovered_10007cb4(byte *param_1,byte *param_2,int param_3);
char * recovered_10007cf8(int param_1);
undefined4 recovered_10007df8(void);
undefined4 recovered_10007e00(void);
void recovered_10007e08(void);
__attribute__((naked,noreturn)) void recovered_10007e30(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10007e40(void *context);
__attribute__((naked,noreturn)) int recovered_10007e90(int context,int value);
void recovered_10007ee8(void);
undefined4 recovered_10007f74(void);
void recovered_10007f7c(int param_1);
long recovered_10007f8c(int param_1);
void * recovered_10007fcc(uint size);
void * recovered_10007ff8(uint size);
void recovered_10008024(void *pointer);
void recovered_100080ec(void *pointer);
void recovered_100081b4(void *pointer,uint size);
void recovered_1000827c(void *pointer,uint size);
undefined4 recovered_10008344(void);
uint recovered_1000834c(uint *param_1);
void recovered_1000835c(uint *param_1);
void recovered_1000836c(void);
undefined1 * recovered_10008370(uint param_1);
void recovered_1000847c(int param_1);
void recovered_100084e0(int param_1,undefined4 param_2,int param_3);
int recovered_10008514(int param_1);
void recovered_1000851c(void);
void recovered_100085d4(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100085fc(undefined4 *param_1);
void recovered_10008690(void);
void recovered_100086c8(undefined4 *param_1);
void recovered_100086ec(undefined4 *param_1);
void recovered_10008734(undefined4 *in_r0);
void recovered_10008740(void);
void recovered_1000874c(undefined4 *param_1);
void recovered_100087bc(undefined4 *param_1);
void recovered_1000887c(undefined4 *in_r0);
undefined4 recovered_10008888(void);
void recovered_10008890(void);
int recovered_1000889c(int *param_1,undefined4 param_2,int *param_3);
void recovered_10008990(void);
undefined4 recovered_10008994(void);
bool recovered_1000899c(int param_1);
uchar recovered_100089b0(int param_1);
bool recovered_100089f0(uint param_1);
bool recovered_10008a1c(undefined4 param_1,uint param_2);
bool recovered_10008a38(uint param_1);
bool recovered_10008a54(undefined4 param_1,uint param_2);
bool recovered_10008a70(undefined4 param_1,uint param_2);
double recovered_10008a90(double value);
float recovered_10008b78(float value);
long double recovered_10008c78(long double value);
double recovered_10008d60(long end,long start);
double recovered_10008d7c(undefined4 param_1,undefined4 param_2);
ulonglong recovered_10008dd4(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10008f4c(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10008f50(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_10009304(uint param_1,int *param_2);
undefined4 * recovered_100094a0(undefined4 *param_1);
int * recovered_100094c4(int param_1,uint param_2,uint param_3);
undefined8 recovered_10009904(uint *param_1);
void recovered_10009d98(undefined4 *param_1);
void recovered_1000a2f8(int param_1);
void recovered_1000a398(int param_1);
int recovered_1000a4fc(int *param_1);
void recovered_1000a664(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_1000a698(int param_1,int param_2,int param_3);
void recovered_1000a710(int param_1);
void recovered_1000a768(int param_1,int param_2);
void recovered_1000a7d0(int param_1,int *param_2,int param_3);
void recovered_1000a94c(int param_1);
void recovered_1000aa04(int param_1);
bool recovered_1000b2e4(int param_1);
byte recovered_1000c0e8(int param_1);
void recovered_1000c470(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_1000c4a0(int param_1);
void recovered_1000c5d4(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_1000c618(int param_1,uint param_2);
void recovered_1000c770(void);
void recovered_1000d65c(void);
void recovered_1000d964(void);
void recovered_1000d968(void);
undefined4 recovered_1000d96c(void);
void recovered_1000d974(void);
undefined4 recovered_1000d978(void);
void recovered_1000dbac(int *param_1,undefined4 *param_2);
uint recovered_1000e190(char *param_1,int *param_2,int *param_3);
void recovered_1000e580(void);
undefined4 recovered_1000e5d0(char *param_1,undefined4 param_2);
void recovered_1000e624(void *param_1,undefined4 param_2);
int * recovered_1000e678(int param_1,int param_2,uint param_3,int param_4,uint param_5,
                        double param_6);
void recovered_1000e878(void *param_1);
uint * recovered_1000e8c8(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6);
void recovered_1000e9f8(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7);
void recovered_1000ea5c(void *param_1);
void recovered_1000ea9c(uint *param_1,int *param_2,uint param_3,uint param_4);
uint * recovered_1000ec5c(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                         uint param_6);
void *recovered_1000ee80(float size);
undefined1 recovered_1000f130(int param_1);
void recovered_1000f174(int param_1,undefined4 *param_2,undefined4 *param_3);
bool recovered_1000f1f0(int param_1,uint param_2);
bool recovered_1000f284(int param_1);
byte recovered_1000f484(int param_1,uint param_2);
void recovered_1000f5c4(int *param_1,int param_2,uint param_3,int param_4);
undefined8
recovered_1000f788(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6);
int * recovered_1000f880(int *param_1);
int recovered_1000f8d4(int *param_1,int *param_2);
int * recovered_1000f9fc(int *param_1,int param_2,uint param_3,int in_r3);
int recovered_1000fc54(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_1000fdb8(void);

/* Original analysis identifiers for manual recovery units. */
