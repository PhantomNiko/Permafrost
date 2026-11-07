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
#define pf_varargs_1000534c__4_ recovered_1000534c
extern uint8_t pf_module_state[];
uint recovered_10001078(uint param_1,uint param_2);
uint recovered_100010c8(uint param_1,uint param_2);
uint recovered_10001100(uint param_1,uint param_2);
uint recovered_10001170(uint param_1,uint param_2);
undefined8 recovered_100011dc(float param_1);
undefined8 recovered_100011ec(float param_1);
float recovered_100011fc(uint param_1,uint param_2);
float recovered_10001218(uint param_1,uint param_2);
void recovered_10001238(void);
void recovered_10001250(void);
int recovered_10001648(void);
void recovered_1000168c(void);
int recovered_100016dc(void);
void recovered_10001718(void);
uint * recovered_1000175c(int param_1);
longlong recovered_10001868(uint param_1,int param_2,uint param_3);
ulonglong recovered_100018bc(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10001910(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000195c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001a40(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001ac0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001bd8(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10001c94(void);
int recovered_10001c9c(int param_1);
void * recovered_10001ca8(uintptr_t size);
void recovered_10001cfc(void *pointer);
void * recovered_10001d4c(void *pointer,uintptr_t size);
void recovered_10001da0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10002024(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10002530(byte *param_1,byte param_2,uint param_3);
void recovered_10002730(undefined4 *param_1,uint param_2);
void recovered_1000292c(undefined4 *param_1,uint param_2);
int recovered_10002b28(uint *param_1,uint *param_2,uint param_3);
int recovered_10002d20(byte *param_1,byte *param_2);
bool recovered_10002d70(int param_1);
bool recovered_10002d84(int param_1);
bool recovered_10002d98(uint param_1);
bool recovered_10002db0(uint param_1);
bool recovered_10002ddc(int param_1);
bool recovered_10002dfc(int param_1);
int recovered_10002e10(int param_1);
void * recovered_10002e20(void *out,void *data,ulong size);
int recovered_10002e30(int param_1);
int recovered_10002e58(byte *param_1,byte *param_2);
int recovered_10002e9c(byte *param_1,byte *param_2);
void * recovered_10002ee0(void *out,int value,ulong size);
undefined8 * recovered_10002efc(undefined8 *param_1);
char * recovered_10003210(char *param_1,char param_2);
int recovered_10003244(char *param_1,char *param_2);
char * recovered_100032a8(char *param_1,char *param_2);
char * recovered_10003308(char *param_1,char *param_2);
undefined * recovered_1000336c(void);
undefined ** recovered_1000337c(void);
undefined4 recovered_1000338c(undefined4 *param_1);
int recovered_1000343c(char *left,char *right,uint in_r2);
double recovered_10003480(undefined4 param_1,undefined4 param_2,int *param_3);
char * recovered_10003538(char *param_1,char *param_2,undefined4 in_r2,undefined4 in_r3);
double recovered_10003570(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100035f0(double value);
double recovered_10003620(double value);
double recovered_10003664(undefined4 param_1,undefined4 param_2);
double recovered_100036b0(undefined4 param_1,undefined4 param_2);
longlong recovered_100037f0(double value);
double recovered_10003820(undefined4 param_1,undefined4 param_2);
double recovered_100038e0(undefined4 param_1,undefined4 param_2);
double recovered_10003990(undefined4 param_1,undefined4 param_2);
undefined8 recovered_100039b0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10003a70(undefined4 param_1,undefined4 param_2);
double recovered_10003af8(uint param_1,uint param_2);
double recovered_10003b40(uint param_1,uint param_2);
float recovered_10003bd0(float param_1,float param_2);
float recovered_10003c14(float param_1,float *param_2);
float recovered_10003cd0(float param_1,uint param_2);
float recovered_10003d1c(float param_1,float param_2);
float recovered_10003da4(float param_1);
float recovered_10003ddc(float param_1);
double recovered_10003e28(undefined4 param_1,undefined4 param_2);
float recovered_10003e7c(float param_1);
float recovered_10003ed8(float param_1);
float recovered_10003f30(float param_1);
long recovered_10004074(double value);
float recovered_100040a8(float param_1);
float recovered_10004170(float param_1);
float recovered_10004228(float param_1);
int recovered_10004244(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10004398(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100044f8(byte *param_1,undefined4 *param_2);
float recovered_100046cc(byte *in_r0,undefined4 *in_r1);
int recovered_100046e8(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_1000534c(char *buffer,unsigned long capacity,char *format,...);
void recovered_1000537c(int *param_1,int *param_2,int *param_3);
void recovered_10005568(char *param_1,int param_2);
void recovered_1000574c(char *param_1,int param_2);
void recovered_1000580c(void);
void recovered_100058c8(undefined *param_1,undefined1 *param_2);
void recovered_10005920(void);
void recovered_1000596c(void);
bool recovered_100059b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10005b0c(void);
void recovered_10005b14(void);
undefined4 recovered_10005b18(void);
undefined4 * recovered_10005b20(int param_1,int param_2);
void recovered_10005ea4(int param_1,int param_2,uint *param_3);
undefined4 recovered_10005fa4(uint *param_1);
uint recovered_1000609c(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_100061c8(int *param_1);
int recovered_100063c8(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10006540(int *param_1,uint param_2,int param_3);
undefined4 recovered_100065f0(int param_1);
undefined4 recovered_10006618(uint *param_1);
undefined1 recovered_100066f0(int param_1);
void recovered_10006700(int param_1);
void recovered_10006710(int param_1);
void recovered_1000672c(uint param_1,int param_2);
undefined4 recovered_10006750(int param_1);
undefined4 recovered_100067e0(int param_1,int param_2);
undefined4 recovered_10006954(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10006a54(int param_1,int param_2,int param_3);
undefined4 recovered_10006adc(void);
void recovered_10006ae4(void);
undefined4 recovered_10006ae8(void);
void recovered_10006af0(int param_1,char param_2,int param_3);
undefined4 recovered_10006af8(void);
char * recovered_10006b00(char *param_1,char param_2,int param_3);
int recovered_10006b34(byte *param_1,byte *param_2,int param_3);
char * recovered_10006b78(undefined4 param_1);
void recovered_10006c78(void);
undefined4 recovered_10006c80(void);
void recovered_10006c88(void);
undefined4 recovered_10006cb0(undefined4 *param_1);
__attribute__((naked,returns_twice)) int recovered_10006cc0(void *context);
__attribute__((naked,noreturn)) void recovered_10006cd8(void *context,int value);
void recovered_10006cf8(void);
undefined4 recovered_10006d84(void);
void recovered_10006d8c(int param_1);
void * recovered_10006dc4(ulong size);
void * recovered_10006df0(ulong size);
void recovered_10006e1c(void *pointer);
void recovered_10006ee4(void *pointer);
void recovered_10006fac(void *param_1);
void recovered_10007074(void *param_1);
undefined4 recovered_1000713c(void);
void recovered_10007144(uint *param_1);
void recovered_10007154(uint *in_r0);
void recovered_10007164(void);
undefined4 * recovered_10007168(uint param_1);
int recovered_100071f0(int param_1);
int recovered_10007200(int param_1);
void recovered_10007208(void);
void recovered_10007270(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007298(undefined4 *param_1);
void recovered_1000732c(void);
void recovered_10007364(undefined4 *param_1);
void recovered_10007388(undefined4 *param_1);
void recovered_100073d0(undefined4 *in_r0);
void recovered_100073dc(void);
void recovered_100073e8(undefined4 *param_1);
void recovered_1000741c(undefined4 *param_1);
void recovered_100074dc(undefined4 *in_r0);
undefined4 recovered_100074e8(void);
void recovered_100074f0(void);
int recovered_100074fc(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100075f0(void);
undefined4 recovered_100075f4(void);
bool recovered_100075fc(int param_1);
bool recovered_10007610(int param_1);
bool recovered_10007650(uint param_1);
int recovered_1000767c(double value);
bool recovered_10007698(uint param_1);
bool recovered_100076b4(undefined4 param_1,uint param_2);
int recovered_100076d0(double value);
double recovered_100076f0(undefined4 param_1,undefined4 param_2);
float recovered_100077d8(float param_1);
double recovered_100078d8(undefined4 param_1,undefined4 param_2);
double recovered_100079c0(undefined4 param_1,undefined4 param_2);
double recovered_100079dc(undefined4 param_1,undefined4 param_2,double in_d0);
ulonglong recovered_10007a34(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10007bac(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10007bb0(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_10007f64(uint param_1,undefined4 *param_2);
void recovered_100080f8(int param_1);
undefined4 * recovered_10008108(int param_1);
undefined4 * recovered_10008118(int param_1);
long * recovered_10008330(uint frequency,uint duration,long waveform,uintptr_t side);
int recovered_10008af8(void *track,void *view);
void recovered_10008b80(ushort *param_1,int param_2);
uint recovered_10008ba0(int param_1,ushort *param_2);
undefined4 recovered_10008e20(int *param_1,int *param_2,int param_3,int param_4,undefined8 in_d0);
uint recovered_10009280(void **opaque,uint slo,uint shi,uint elo,uint ehi);
int recovered_10009548(void *track,double factor);
void recovered_10009620(uint lo,uint hi,undefined4 *opaque,int *source,float requested);
int recovered_100099f0(void *track,double factor);
undefined4 recovered_10009aec(void);
undefined8 recovered_10009af4(void);
undefined8 recovered_10009b00(void);
void recovered_10009b0c(void *track);
void recovered_10009b44(void);
int * recovered_10009b48(int param_1,int *param_2);
undefined4 recovered_10009f18(int param_1,undefined1 *param_2,void **param_3,uint *param_4);
int * recovered_1000a700(int *param_1);
int * recovered_1000a7f8(int *param_1);
void recovered_1000a8f0(int param_1);
void recovered_1000a900(undefined4 *param_1,uint param_2);
void recovered_1000a9a8(int *param_1,uint param_2);
double recovered_1000aad8(uint *param_1,int param_2,int param_3);
void recovered_1000ac50(int *param_1,int param_2,uint param_3);
undefined4 recovered_1000ae14(ushort *param_1,undefined8 **param_2);
int * recovered_1000b39c(int *param_1);
void recovered_1000b494(int *param_1,undefined4 param_2);
void recovered_1000b7a0(int *param_1,undefined4 param_2);
int recovered_1000b934(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void * recovered_1000ba98(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4);
uint recovered_1000bff8(uint numerator,uint denominator);
uint recovered_1000bff4(uint numerator,uint denominator);
long long recovered_1000bffc(double value);

/* Original analysis identifiers for manual recovery units. */
