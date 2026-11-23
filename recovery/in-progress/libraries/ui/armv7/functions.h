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
uint recovered_10003d50(uint param_1,uint param_2);
uint recovered_10003da0(uint param_1,uint param_2);
uint recovered_10003dd8(uint param_1,uint param_2);
uint recovered_10003e48(uint param_1,uint param_2);
ulonglong recovered_10003eb4(float param_1);
longlong recovered_10003ec4(float param_1);
float recovered_10003ed4(undefined4 param_1,undefined4 param_2);
float recovered_10003ef0(undefined4 param_1,undefined4 param_2);
void recovered_10003f10(void);
void recovered_10003f9c(void);
bool recovered_1000421c(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_10004298(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_100044e0(undefined4 param_1,undefined4 param_2);
int recovered_10004578(void);
void recovered_10004628(void);
int recovered_100046e4(void);
void recovered_1000478c(void);
void recovered_1000483c(int param_1);
uint * recovered_100048c0(int param_1,uint *param_2,uint *param_3);
void recovered_10004b18(int param_1,uint *param_2);
uint * recovered_10004ba0(int param_1,uint *param_2,uint *param_3);
void recovered_10004c30(int param_1);
void recovered_10004cac(int param_1);
uint * recovered_10004e18(uint *param_1,uint param_2);
longlong recovered_100053b8(uint param_1,int param_2,uint param_3);
ulonglong recovered_1000540c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10005460(uint param_1,int param_2,uint param_3);
undefined8 recovered_100054ac(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10005590(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10005610(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10005728(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100057e4(void);
int recovered_100057ec(int param_1);
void * recovered_100057f8(uintptr_t size);
void recovered_1000584c(void *pointer);
void * recovered_1000589c(void *pointer,uintptr_t size);
void * recovered_100058f0(void *destination,void *source,ulong count);
void * recovered_10005b74(void *destination,void *source,ulong count);
void * recovered_10006080(void *destination,int value,ulong count);
void recovered_10006280(undefined4 *param_1,uint param_2);
void recovered_1000647c(undefined4 *param_1,uint param_2);
char * recovered_10006678(char *param_1,char param_2,int param_3);
int recovered_100066ac(void *left,void *right,ulong count);
int recovered_100068a4(byte *param_1,byte *param_2);
bool recovered_100068f4(int param_1);
bool recovered_10006908(int param_1);
bool recovered_1000691c(uint param_1);
bool recovered_10006934(uint param_1);
bool recovered_10006960(int param_1);
bool recovered_10006980(int param_1);
int recovered_10006994(int param_1);
int recovered_100069a4(int param_1);
ulong recovered_100069b4(char *text);
int recovered_100069dc(char *left,char *right);
int recovered_10006a20(byte *param_1,byte *param_2);
void recovered_10006a64(int param_1,int param_2);
undefined8 * recovered_10006a80(undefined8 *param_1);
char * recovered_10006d94(char *param_1,char param_2);
int recovered_10006dc8(char *param_1,char *param_2);
int recovered_10006e2c(char *param_1,char *param_2);
char * recovered_10006e94(char *param_1,char *param_2);
char * recovered_10006ef4(char *param_1,char *param_2);
undefined * recovered_10006f58(void);
undefined ** recovered_10006f68(void);
undefined4 recovered_10006f78(undefined4 *param_1);
double recovered_10007028(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_1000706c(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10007124(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_1000715c(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100071dc(undefined4 param_1,undefined4 param_2);
double recovered_1000720c(undefined4 param_1,undefined4 param_2);
double recovered_10007250(undefined4 param_1,undefined4 param_2);
double recovered_10007298(undefined4 param_1,undefined4 param_2);
longlong recovered_100073d8(undefined4 param_1,undefined4 param_2);
double recovered_10007408(undefined4 param_1,undefined4 param_2);
double recovered_100074c8(undefined4 param_1,undefined4 param_2);
double recovered_10007578(undefined4 param_1,undefined4 param_2);
long long recovered_10007598(double value);
unsigned long long recovered_10007658(double value);
double recovered_100076e0(unsigned long long value);
double recovered_10007728(long long value);
float recovered_100077b8(float param_1,float param_2);
float recovered_100077fc(float param_1,float *param_2);
float recovered_100078b8(float param_1,uint param_2);
float recovered_10007904(float param_1,float param_2);
float recovered_1000798c(float param_1);
float recovered_100079c4(float param_1);
double recovered_10007a10(undefined4 param_1,undefined4 param_2);
float recovered_10007a64(float param_1);
float recovered_10007ac0(float param_1);
float recovered_10007b18(float param_1);
longlong recovered_10007c5c(undefined4 param_1,undefined4 param_2);
float recovered_10007c90(float param_1);
float recovered_10007d58(float param_1);
float recovered_10007e10(float param_1);
int recovered_10007e2c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10007f80(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100080e0(byte *param_1,undefined4 *param_2);
float recovered_100082b4(byte *param_1,undefined4 *param_2);
int recovered_100082d0(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10009098(char *buffer,uintptr_t capacity,char *format,...);
void recovered_100090c8(int *param_1,int *param_2,int *param_3);
uint * recovered_100092c8(uint *param_1,uint *param_2);
undefined4 recovered_1000934c(uint *param_1,int param_2);
void recovered_100093ac(char *param_1,int param_2);
void recovered_10009590(void);
void recovered_10009650(void);
void recovered_1000970c(char *param_1,undefined *param_2);
void recovered_10009764(void);
void recovered_100097b0(void);
bool recovered_100097fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10009950(void);
void recovered_10009958(void);
undefined4 recovered_1000995c(void);
undefined4 * recovered_10009964(char *param_1,char *param_2);
void recovered_10009ce8(char *param_1,char *param_2,uint *param_3);
undefined4 recovered_10009de8(uint *param_1);
uint recovered_10009ee0(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_1000a00c(int *param_1);
int recovered_1000a20c(char *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_1000a384(int *param_1,uint param_2,int param_3);
undefined4 recovered_1000a434(int param_1);
undefined4 recovered_1000a45c(uint *param_1);
undefined1 recovered_1000a534(int param_1);
undefined1 recovered_1000a544(int param_1);
void recovered_1000a554(int param_1);
void recovered_1000a570(uint param_1,int param_2);
undefined4 recovered_1000a594(int param_1);
undefined4 recovered_1000a624(int param_1,int param_2);
undefined4 recovered_1000a798(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_1000a898(int param_1,int param_2,int param_3);
undefined4 recovered_1000a920(void);
void recovered_1000a928(void);
undefined4 recovered_1000a92c(void);
undefined4 recovered_1000a934(void);
undefined4 recovered_1000a93c(void);
int recovered_1000a944(char *left,char *right,ulong count);
char * recovered_1000a988(undefined4 param_1);
undefined4 recovered_1000aa88(void);
undefined4 recovered_1000aa90(void);
void recovered_1000aa98(void);
__attribute__((naked,noreturn)) void recovered_1000aac0(void *context,...);
__attribute__((naked,returns_twice)) int recovered_1000aad0(void *context);
__attribute__((naked,noreturn)) int recovered_1000ab20(int context,int value);
void recovered_1000ab78(void);
undefined4 recovered_1000ac04(void);
void recovered_1000ac0c(int param_1,undefined4 param_2,int param_3);
int recovered_1000ac1c(int param_1,undefined4 param_2,int param_3);
void * recovered_1000ac5c(ulong param_1);
void * recovered_1000ac88(ulong param_1);
void recovered_1000acb4(void *param_1);
void recovered_1000ad7c(void *param_1);
void recovered_1000ae44(void *param_1);
void recovered_1000af0c(void *param_1);
undefined4 recovered_1000afd4(void);
uint recovered_1000afdc(uint *param_1);
void recovered_1000afec(uint *param_1);
void recovered_1000affc(void);
undefined4 * recovered_1000b000(uint param_1);
void recovered_1000b10c(int param_1);
void recovered_1000b170(int param_1,undefined4 param_2,int param_3);
void recovered_1000b1ac(void);
void recovered_1000b264(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000b28c(undefined4 *param_1);
void recovered_1000b320(void);
void recovered_1000b358(undefined4 *param_1);
void recovered_1000b37c(undefined4 *param_1);
void recovered_1000b3c4(undefined4 *param_1);
void recovered_1000b3d0(void);
void recovered_1000b3dc(undefined4 *param_1);
undefined4 recovered_1000b44c(undefined4 *param_1);
undefined4 recovered_1000b50c(undefined4 *param_1);
undefined4 recovered_1000b518(void);
void recovered_1000b520(void);
int recovered_1000b52c(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_1000b620(void);
undefined4 recovered_1000b624(void);
bool recovered_1000b62c(int param_1);
bool recovered_1000b640(int param_1);
bool recovered_1000b680(uint param_1);
bool recovered_1000b6ac(undefined4 param_1,uint param_2);
bool recovered_1000b6c8(uint param_1);
bool recovered_1000b6e4(undefined4 param_1,uint param_2);
bool recovered_1000b700(undefined4 param_1,uint param_2);
double recovered_1000b720(double value);
float recovered_1000b808(float value);
long double recovered_1000b908(long double value);
double recovered_1000b9f0(long end,long start);
double recovered_1000ba0c(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000ba64(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_1000bbdc(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_1000bbe0(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000bf94(uint param_1,undefined4 *param_2);
void recovered_1000c130(void);
undefined4 recovered_1000c268(uint param_1);
undefined4
recovered_1000c2b8(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
void * recovered_1000c43c(void *pointer,ulong size);
undefined4 recovered_1000c490(int *param_1,int param_2);
void recovered_1000c570(undefined4 *param_1);
int recovered_1000c5f0(int *param_1,int param_2);
void recovered_1000c62c(int param_1,int param_2,uint param_3,uint param_4,uint *param_5,
                       uint *param_6,int *param_7);
void recovered_1000c75c(int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,
                       int *param_7);
uint recovered_1000c9a8(int *param_1,uint *param_2,uint param_3,uint param_4);
void recovered_1000cad0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4);
void recovered_1000cf30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_1000cfa8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_1000d020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
                       uint param_16);
void recovered_1000d0a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14);
void recovered_1000d110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14);
void recovered_1000d180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_1000d1f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
int recovered_1000d270(int *param_1,int *param_2);
void recovered_1000d86c(void);
undefined4 recovered_1000d8bc(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
bool recovered_1000d950(int *param_1,uint param_2,uint param_3,int param_4);
bool recovered_1000da28(int *param_1,int param_2,uint param_3,int param_4);
undefined4
recovered_1000db1c(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7);
undefined4 recovered_1000ddcc(int *param_1,int param_2,byte *param_3,int param_4,int param_5);
void recovered_1000df20(int *param_1);
void recovered_1000df60(int *param_1,byte *param_2,uint *param_3);
undefined4 recovered_1000dfd4(int *param_1,uint param_2,uint param_3,int param_4);
void recovered_1000e378(int *param_1,int param_2);
undefined4 recovered_1000e3c8(int *param_1,void *param_2,undefined4 param_3,int param_4);
void recovered_1000e5fc(int param_1);
byte recovered_1000e60c(int param_1);
void recovered_1000e628(void *param_1);
undefined4 recovered_1000e63c(undefined1 *param_1);
bool recovered_1000e9c4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_1000e9f8(int *param_1);
undefined4 recovered_1000eb08(int *param_1,undefined *param_2);
bool recovered_1000eb84(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_1000ec60(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_1000ed3c(int *param_1,int param_2);
bool recovered_1000edd4(int *param_1,int param_2);
bool recovered_1000ee70(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_1000ef48(int *param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 recovered_1000f020(int *param_1,int param_2);
undefined4 recovered_1000f08c(int *param_1,int param_2);
undefined4 recovered_1000f0f8(int *param_1);
undefined4 recovered_1000f15c(void);
undefined4 recovered_1000f1c4(void);
undefined4 recovered_1000f218(void);
undefined4 recovered_1000f26c(void);
undefined4 recovered_1000f2c0(void);
undefined4 recovered_1000f328(void);
undefined4 recovered_1000f39c(void);
undefined4 recovered_1000f40c(void);
void recovered_1000f498(uint param_1);
void recovered_1000f578(int param_1,uint *param_2,uint param_3);
void recovered_1000f890(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                       int param_6,uint param_7);
void recovered_1000f990(int *param_1,int param_2,int param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_1000fb0c(int *param_1,int param_2,int param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10010090(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                       int param_7);
void recovered_100106e8(undefined4 *param_1,undefined4 param_2);
void recovered_100106fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_10010714(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10010728(void *param_1);
void recovered_100107a0(undefined4 *param_1,undefined4 param_2);
void recovered_10010824(undefined4 *param_1,undefined4 param_2);
void recovered_1001089c(undefined4 *param_1);
void recovered_1001091c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_100109bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5,undefined4 param_6);
void recovered_10010a7c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10010b1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10010bbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10010c4c(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10010c9c(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
void recovered_10010cd8(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
void recovered_10010d14(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
void recovered_10010d74(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10010db4(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10010df4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
int recovered_100111a8(int *param_1,uint *param_2);
undefined4
recovered_100112a4(int param_1,int *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  undefined4 param_7);
void recovered_1001144c(int *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6);
undefined4 recovered_10012818(int *param_1,int *param_2,undefined4 param_3,int param_4);
uint recovered_10012a3c(int *param_1);
void recovered_10012c78(uint *param_1,undefined *param_2,undefined4 param_3);
void recovered_10012e10(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7);
void recovered_1001311c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9,int param_10);

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
