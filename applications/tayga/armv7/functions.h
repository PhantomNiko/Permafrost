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
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
#include "../format.h"
#define pf_varargs_100071ac__4_ recovered_100071ac
extern uint8_t pf_module_state[];
uint recovered_10002ed8(uint param_1,uint param_2);
uint recovered_10002f28(uint param_1,uint param_2);
uint recovered_10002f60(uint param_1,uint param_2);
uint recovered_10002fd0(uint param_1,uint param_2);
undefined8 recovered_1000303c(float param_1);
undefined8 recovered_1000304c(float param_1);
float recovered_1000305c(uint param_1,uint param_2);
float recovered_10003078(uint param_1,uint param_2);
void recovered_10003098(void);
void recovered_100030b0(void);
int recovered_100034a8(void);
void recovered_100034ec(void);
int recovered_1000353c(void);
void recovered_10003578(void);
uint * recovered_100035bc(int param_1);
longlong recovered_100036c8(uint param_1,int param_2,uint param_3);
ulonglong recovered_1000371c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003770(uint param_1,int param_2,uint param_3);
undefined8 recovered_100037bc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100038a0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003920(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003a38(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10003af4(void);
int recovered_10003afc(int param_1);
undefined4 recovered_10003b08(ulong in_r0);
void recovered_10003b5c(void *in_r0);
undefined4 recovered_10003bac(void *in_r0,ulong in_r1);
void recovered_10003c00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10003e84(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10004390(byte *param_1,byte param_2,uint param_3);
void recovered_10004590(undefined4 *param_1,uint param_2);
void recovered_1000478c(undefined4 *param_1,uint param_2);
int recovered_10004988(uint *param_1,uint *param_2,uint param_3);
int recovered_10004b80(byte *param_1,byte *param_2);
bool recovered_10004bd0(int param_1);
bool recovered_10004be4(int param_1);
bool recovered_10004bf8(uint param_1);
bool recovered_10004c10(uint param_1);
bool recovered_10004c3c(int param_1);
bool recovered_10004c5c(int param_1);
int recovered_10004c70(int param_1);
int recovered_10004c80(int param_1);
int recovered_10004c90(int param_1);
int recovered_10004cb8(byte *param_1,byte *param_2);
int recovered_10004cfc(byte *param_1,byte *param_2);
void recovered_10004d40(int param_1,int param_2);
undefined8 * recovered_10004d5c(undefined8 *param_1);
char * recovered_10005070(char *param_1,char param_2);
int recovered_100050a4(char *param_1,char *param_2);
char * recovered_10005108(char *param_1,char *param_2);
char * recovered_10005168(char *param_1,char *param_2);
undefined * recovered_100051cc(void);
undefined * recovered_100051dc(void);
undefined4 recovered_100051ec(undefined4 *param_1);
double recovered_1000529c(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_100052e0(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10005398(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100053d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10005450(undefined4 param_1,undefined4 param_2);
double recovered_10005480(undefined4 param_1,undefined4 param_2);
double recovered_100054c4(undefined4 param_1,undefined4 param_2);
double recovered_10005510(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10005650(undefined4 param_1,undefined4 param_2);
double recovered_10005680(undefined4 param_1,undefined4 param_2);
double recovered_10005740(undefined4 param_1,undefined4 param_2);
double recovered_100057f0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10005810(undefined4 param_1,undefined4 param_2);
undefined8 recovered_100058d0(undefined4 param_1,undefined4 param_2);
double recovered_10005958(uint param_1,uint param_2);
double recovered_100059a0(uint param_1,uint param_2);
float recovered_10005a30(float param_1,float param_2);
float recovered_10005a74(float param_1,float *param_2);
float recovered_10005b30(float param_1,uint param_2);
float recovered_10005b7c(float param_1,float param_2);
float recovered_10005c04(float param_1);
float recovered_10005c3c(float param_1);
double recovered_10005c88(undefined4 param_1,undefined4 param_2);
float recovered_10005cdc(float param_1);
float recovered_10005d38(float param_1);
float recovered_10005d90(float param_1);
void recovered_10005ed4(undefined4 param_1,undefined4 param_2);
float recovered_10005f08(float param_1);
float recovered_10005fd0(float param_1);
float recovered_10006088(float param_1);
int recovered_100060a4(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_100061f8(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10006358(byte *param_1,undefined4 *param_2);
float recovered_1000652c(byte *in_r0,undefined4 *in_r1);
int recovered_10006548(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_100071ac(char *buffer,size_t capacity,const char *format,...);
void recovered_100071dc(int *param_1,int *param_2,int *param_3);
int recovered_100073c8(void);
undefined4 recovered_10007920(int param_1,uint *param_2);

/* Original analysis identifiers for manual recovery units. */
