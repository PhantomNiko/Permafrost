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
extern uint8_t pf_module_state[];
void * recovered_100038f8(void);
int recovered_10003908(int *api);
undefined4 recovered_10003ffc(int *param_1);
void recovered_10004030(undefined1 *param_1,int param_2);
void recovered_10004048(int *param_1,undefined *param_2,undefined4 param_3);
undefined4 recovered_10004194(undefined4 param_1,int param_2,int param_3);
bool recovered_100042c0(int *param_1);
void recovered_10004324(int *param_1,undefined *param_2,undefined4 param_3);
undefined4 recovered_10004398(undefined4 param_1,int param_2,uint param_3,int param_4);
void recovered_10004428(int param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 recovered_10004698(int *param_1,byte *param_2,int *param_3);
undefined4 recovered_1000546c(int *param_1,uint *param_2,uint param_3,int param_4);
void recovered_10005c4c(int param_1,uint param_2,char *param_3);
void recovered_10005ca0(undefined1 *param_1,uint in_r1,char *in_r2);
void recovered_10005cb4(int param_1,uint param_2,uint param_3);
void recovered_10005d64(int param_1,uint param_2,undefined1 param_3);
int recovered_10005da0(int param_1);
undefined4 recovered_10005dc8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10005f8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
void recovered_10006000(int param_1);
int recovered_1000607c(int *param_1,int param_2,int param_3,undefined *param_4,undefined4 param_5);
bool recovered_100061b4(int param_1,byte *param_2,uint param_3);
bool recovered_10006244(byte *param_1,byte *param_2,uint param_3);
void recovered_100062f0(int param_1,char *param_2,uint param_3);
void recovered_10006354(int param_1,uint param_2,char *param_3,char *param_4);
void recovered_100063e0(int param_1,char *param_2,int param_3);
void recovered_10006410(int param_1,int param_2,uint in_r2);
int recovered_1000653c(uint param_1,undefined4 param_2,uint param_3);
void recovered_10006778(int param_1,char *param_2,uint param_3);
void recovered_100067e0(int param_1,uint param_2,uint param_3,int param_4);
undefined4 recovered_10006840(int *param_1,int param_2,int param_3,undefined4 *param_4);
void recovered_100068c8(int param_1,uint param_2,char *param_3,uint param_4);
void recovered_10006938(undefined4 *param_1,int param_2,int param_3,int param_4);
void recovered_10006954(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_100069a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100069f0(int *param_1,undefined4 param_2,int param_3);
undefined4 recovered_10006a38(int param_1);
undefined4 recovered_10006a68(void);
undefined4 recovered_10006ab4(int param_1,uint param_2);
undefined4
recovered_10006f28(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6);
bool recovered_10007058(int *param_1);
int recovered_100070dc(int *param_1,undefined4 param_2,int param_3);
void recovered_1000710c(uint *param_1,uint param_2);
undefined8 recovered_1000711c(int *param_1,int *param_2,int param_3,int param_4);
uint recovered_10007150(uint param_1,uint param_2);
uint recovered_100071a0(uint param_1,uint param_2);
uint recovered_100071d8(uint param_1,uint param_2);
uint recovered_10007248(uint param_1,uint param_2);
undefined8 recovered_100072b0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007394(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007414(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007534(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100075f0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007678(undefined4 param_1,undefined4 param_2);
void recovered_100076c4(float param_1);
void recovered_100076d4(float param_1);
double recovered_100076e4(uint param_1,uint param_2);
void recovered_1000772c(int param_1,int param_2);
float recovered_10007754(uint in_r0,uint in_r1);
float recovered_10007770(int in_r0,int in_r1);

/* Original analysis identifiers for manual recovery units. */
