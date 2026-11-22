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
void * recovered_10003998(void);
int recovered_100039a8(int *api);
void recovered_10003d3c(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10003d50(int *param_1,byte *param_2,int *param_3);
undefined4 recovered_10005fd0(int *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10006028(int param_1,uint param_2,char *param_3,uint param_4);
void recovered_10006098(int param_1,uint param_2,char *param_3);
void recovered_100060ec(int param_1,char *param_2,uint param_3);
void recovered_10006150(int param_1,uint param_2,uint param_3);
void recovered_10006200(int param_1,uint param_2,undefined1 param_3);
int recovered_1000623c(int param_1);
undefined4 recovered_10006264(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
undefined4
recovered_10006428(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7);
int recovered_1000649c(int param_1);
int recovered_10006810(int param_1);
void recovered_10006850(undefined1 *param_1,int param_2);
bool recovered_10006874(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       );
uint recovered_100068d8(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5);
void recovered_10006a10(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006a2c(int *param_1,int param_2,int param_3,undefined4 param_4);
void recovered_10006a40(int *param_1,int param_2,int param_3,undefined4 param_4);
void recovered_10006a54(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006a70(int *param_1,int param_2,int param_3,int param_4);
void recovered_10006a8c(int *param_1,int param_2,int param_3,undefined4 param_4);
undefined4 recovered_10006aa0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_10006b0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10006b70(int param_1,char *param_2,int param_3);
void recovered_10006be4(int param_1,char *param_2,uint param_3,undefined4 param_4);
void recovered_10006c8c(int *param_1,int param_2);
bool recovered_10006cd4(int *param_1,int param_2,int param_3,uint param_4,uint param_5);
undefined4 recovered_10006d5c(int *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10006db4(int *param_1);
undefined4
recovered_10006df4(int *param_1,int param_2,uint param_3,uint *param_4,uint *param_5,int param_6,
                  uint param_7,undefined1 param_8,undefined4 *param_9);
void recovered_10006f84(int *param_1);
undefined4 recovered_10006fc4(undefined4 *param_1);
void recovered_10006fec(int param_1,uint param_2,uint param_3,int param_4);
int recovered_1000704c(int param_1);
uint recovered_100070e0(uint param_1,uint param_2);
uint recovered_10007130(uint param_1,uint param_2);
uint recovered_10007168(uint param_1,uint param_2);
uint recovered_100071d8(uint param_1,uint param_2);
undefined8 recovered_10007240(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007324(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100073a4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100074c4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007580(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007608(undefined4 param_1,undefined4 param_2);
void recovered_10007654(float param_1);
void recovered_10007664(float param_1);
double recovered_10007674(uint param_1,uint param_2);
void recovered_100076bc(int param_1,int param_2);
float recovered_100076e4(uint in_r0,uint in_r1);
float recovered_10007700(int in_r0,int in_r1);

/* Original analysis identifiers for manual recovery units. */
