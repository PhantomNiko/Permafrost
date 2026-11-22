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
void *recovered_100042c0(void);
int recovered_100042d0(int *api);
void recovered_100045ac(undefined1 *param_1,uint param_2,char *param_3);
void recovered_100045c0(int *param_1,byte *param_2,int *param_3);
void recovered_10005d30(int param_1,char *param_2,uint param_3);
void recovered_10005d94(int param_1,uint param_2,char *param_3);
void recovered_10005de8(int param_1,uint param_2,uint param_3);
int recovered_10005e98(int param_1);
void recovered_10005ec0(int param_1,uint param_2,undefined1 param_3);
void recovered_10005efc(int param_1,char *param_2,uint param_3);
void recovered_10005f64(int param_1,uint param_2,uint param_3,int param_4);
undefined4 recovered_10005fc4(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10006188(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
int recovered_100061fc(int param_1);
int recovered_10006570(int param_1);
bool recovered_100065b0(int *param_1,undefined1 *param_2,int *param_3);
void recovered_1000697c(int *param_1,int *param_2);
void recovered_10006b6c(undefined1 *param_1,int param_2);
bool recovered_10006b90(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       );
uint recovered_10006bf4(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5);
void recovered_10006d2c(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006d44(int *param_1,int param_2,undefined4 param_3);
void recovered_10006d5c(int *param_1,int param_2,int param_3,undefined4 param_4);
void recovered_10006d74(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006d90(int *param_1);
void recovered_10006dcc(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006de8(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_10006dfc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_10006e68(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10006ecc(int param_1,char *param_2,int param_3);
void recovered_10006f40(int param_1,char *param_2,uint param_3,undefined4 param_4);
undefined4 recovered_10006fe8(int *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10007040(int *param_1,int param_2);
undefined4 recovered_10007088(int *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_100070e0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
void recovered_1000711c(int *param_1);
undefined4 recovered_1000715c(undefined4 *param_1);
int recovered_10007184(int param_1);
uint recovered_10007218(uint param_1,uint param_2);
uint recovered_10007268(uint param_1,uint param_2);
uint recovered_100072a0(uint param_1,uint param_2);
uint recovered_10007310(uint param_1,uint param_2);
undefined8 recovered_10007378(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000745c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100074dc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100075fc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100076b8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007740(undefined4 param_1,undefined4 param_2);
void recovered_1000778c(float param_1);
void recovered_1000779c(float param_1);
double recovered_100077ac(uint param_1,uint param_2);
void recovered_100077f4(int param_1,int param_2);
float recovered_1000781c(uint in_r0,uint in_r1);
float recovered_10007838(int in_r0,int in_r1);

/* Original analysis identifiers for manual recovery units. */
