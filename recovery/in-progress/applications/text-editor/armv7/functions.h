/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost ARM32 recovery intrinsics; Pooka's Free Software License. */
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
extern uint8_t pf_module_state[];
/* Original analysis identifiers for manual recovery units. */
#include "word_divide.h"
#define NotUsed (*(volatile uint32_t *)(uintptr_t)0x14)
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
#define FUN_10007fcc snprintf
#define recovered_10007fcc snprintf
#define pf_varargs_10007fcc__4_ recovered_10007fcc
#define pf_varargs_10007fcc__4__4_ recovered_10007fcc
static inline uint128 VectorCopyLong(uint64_t value,unsigned lane,unsigned unsign){uint128 out=0;unsigned bits=lane*8;for(unsigned i=0;i<8/lane;i++){uint64_t mask=(1ULL<<bits)-1;uint64_t x=(value>>(i*bits))&mask;if(!unsign)x=(int64_t)(x<<(64-bits))>>(64-bits);out|=((uint128)x&(((uint128)1<<(bits*2))-1))<<(i*bits*2);}return out;}
static inline uint128 VectorAdd(uint128 a,uint128 b,unsigned lane){uint128 out=0,mask=((uint128)1<<(lane*8))-1;for(unsigned i=0;i<16/lane;i++)out|=(((a>>(i*lane*8))+(b>>(i*lane*8)))&mask)<<(i*lane*8);return out;}
extern uint8_t pf_module_state[];
uint recovered_100021a0(uint a,uint b);
uint recovered_100021f0(uint a,uint b);
int recovered_10002228(int a,int b);
int recovered_10002298(int a,int b);
ulonglong recovered_10002300(ulonglong a,ulonglong b);
ulonglong recovered_100023e4(ulonglong a,ulonglong b);
longlong recovered_10002464(longlong a,longlong b);
longlong recovered_10002584(longlong a,longlong b);
ulonglong recovered_10002640(double x);
longlong recovered_100026c8(double x);
ulonglong recovered_10002714(float x);
longlong recovered_10002724(float x);
double recovered_10002734(ulonglong x);
double recovered_1000277c(longlong x);
float recovered_100027a4(ulonglong x);
float recovered_100027c0(longlong x);
int recovered_100027e0(void);
undefined4 recovered_10004650(int param_1);
void recovered_10004950(int param_1);
void recovered_10006308(int param_1,int param_2);
undefined4 recovered_1000640c(int param_1);
uint recovered_100065c8(int param_1,undefined4 param_2,int param_3);
bool recovered_100068a4(int param_1);
undefined4 recovered_10006ac0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4);
bool recovered_10006d44(char *param_1,uint *param_2);
undefined4 recovered_10006e80(int param_1,void *param_2,ulong param_3);
undefined4 recovered_10006fcc(int param_1,int param_2,uint param_3,int param_4,int param_5);
void recovered_100071e0(undefined4 *param_1,int param_2);
void recovered_100074b0(int param_1);
undefined4 recovered_10007600(int param_1);
void recovered_100076e0(int param_1,int param_2);
void recovered_1000788c(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10007a30(int param_1,int param_2,int param_3,char *param_4,uint param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
