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
#define pf_varargs_10007fd0__4_ recovered_10007fd0
#define pf_varargs_10007fd0__4__4_ recovered_10007fd0
#define pf_varargs_10007fd0__8_ recovered_10007fd0
#define pf_varargs_10007fd0__8__4__4__4__4_ recovered_10007fd0
#define recovered_10007fd0 snprintf
static inline uint128 pf_app_addwide(uint128 a,uint64_t b){uint128 out=0;for(unsigned i=0;i<4;i++)out|=(uint128)((uint32_t)(a>>(i*32))+(uint16_t)(b>>(i*16)))<<(i*32);return out;}
static inline uint64_t pf_app_add32x2(uint64_t a,uint64_t b){return (uint64_t)((uint32_t)a+(uint32_t)b)|((uint64_t)((uint32_t)(a>>32)+(uint32_t)(b>>32))<<32);}
#define pf_varargs_10007fd0__4__4__4__4__4_ recovered_10007fd0
extern uint8_t pf_module_state[];
uint recovered_10001860(uint a,uint b);
uint recovered_100018b0(uint a,uint b);
int recovered_100018e8(int a,int b);
int recovered_10001958(int a,int b);
ulonglong recovered_100019c0(ulonglong a,ulonglong b);
ulonglong recovered_10001aa4(ulonglong a,ulonglong b);
longlong recovered_10001b24(longlong a,longlong b);
longlong recovered_10001c44(longlong a,longlong b);
ulonglong recovered_10001d00(double x);
longlong recovered_10001d88(double x);
ulonglong recovered_10001dd4(float x);
longlong recovered_10001de4(float x);
double recovered_10001df4(ulonglong x);
double recovered_10001e3c(longlong x);
float recovered_10001e64(ulonglong x);
float recovered_10001e80(longlong x);
int recovered_10001e9c(void);
void recovered_100024ec(int param_1);
void recovered_10003068(int param_1);
void recovered_100060d0(int param_1);
void recovered_100061d8(int param_1);
void recovered_100062d4(int param_1);
void recovered_10006380(int param_1);
void recovered_100064f0(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7);
void recovered_100067e4(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10006bfc(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10006f2c(int param_1,uint param_2,uint param_3,undefined4 param_4);
void recovered_100071e4(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8);
void recovered_100078a8(int param_1,int param_2,int param_3);

/* Original analysis identifiers for manual recovery units. */
