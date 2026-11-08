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
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
#include "armv7/neon.h"
#define SUB43(a,b) (((uint32_t)(a)>>((b)*8))&0xffffffU)
extern uint8_t pf_module_state[];
uint recovered_10000ac0(uint a,uint b);
uint recovered_10000b10(uint a,uint b);
int recovered_10000b48(int a,int b);
int recovered_10000bb8(int a,int b);
ulonglong recovered_10000c20(ulonglong a,ulonglong b);
ulonglong recovered_10000d04(ulonglong a,ulonglong b);
longlong recovered_10000d84(longlong a,longlong b);
longlong recovered_10000ea4(longlong a,longlong b);
ulonglong recovered_10000f60(double x);
longlong recovered_10000fe8(double x);
ulonglong recovered_10001034(float x);
longlong recovered_10001044(float x);
double recovered_10001054(ulonglong x);
double recovered_1000109c(longlong x);
float recovered_100010c4(ulonglong x);
float recovered_100010e0(longlong x);
int recovered_10001100(void);
int recovered_100044fc(char *param_1);
void recovered_10004fc8(undefined1 *param_1);
void recovered_100050f8(void);
int recovered_10005734(int param_1,char *param_2,undefined4 param_3,char param_4);
void recovered_100059dc(char *param_1,int param_2);
uint recovered_10005d20(void);
void recovered_10005fdc(void);
void recovered_10006078(int param_1);
void recovered_100061c0(char *param_1);
void recovered_10006bd0(int param_1);
void recovered_1000ba84(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9);
void recovered_1000bb1c(int *param_1);
void recovered_1000bc48(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7);
void recovered_1000bd14(int param_1,int param_2,int param_3,int param_4);
void recovered_1000be90(int *param_1);
void recovered_1000c2f0(int param_1,int param_2,int param_3,int param_4);
undefined4
recovered_1000c47c(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5);
undefined4 recovered_1000c638(int param_1,int param_2,int param_3,int param_4);
undefined4 recovered_1000c814(int param_1);
void recovered_1000cae0(undefined4 *param_1);
undefined4 recovered_1000cb74(int param_1);
uint recovered_1000dfb8(int param_1,char *param_2,void *param_3);
undefined1 * recovered_1000e050(undefined1 *param_1);
bool recovered_1000e13c(byte *param_1,byte *param_2);
undefined4 recovered_1000e1a0(byte *param_1,char *param_2);
bool recovered_1000e24c(int param_1);
void recovered_1000e4d4(int param_1,uint param_2,int param_3,int param_4,int param_5);
void recovered_1000e894(char *param_1,uint param_2);
int recovered_1000eac0(undefined4 *param_1);
void recovered_1000eef4(int param_1);
void recovered_1000f6c4(int param_1);
uint recovered_1000f810(int param_1,char *param_2,void *param_3,uint param_4,uint *param_5);
void recovered_1000f8c8(void);
void recovered_1000fdc0(void);
void recovered_10010090(void);
void recovered_100101b8(void);
void recovered_10010640(char *param_1,int param_2);
void recovered_100118f4(void);
void recovered_10011a3c(void);
void recovered_10011d24(void);
void recovered_10011e18(void);
int * recovered_10011f28(byte *param_1,uint param_2);
void recovered_10012318(int *param_1,int param_2,int param_3,uint param_4,uint param_5);
void recovered_100124c4(uint param_1,uint param_2,undefined4 param_3,int param_4);
void recovered_100125d8(int param_1,int param_2,char *param_3,uint param_4,uint param_5,uint param_6
                       );
uint recovered_100127e0(int param_1,int param_2,int *param_3);
void recovered_1001297c(int param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_10012dc0(int param_1,int param_2,int param_3,byte *param_4,uint param_5);
void recovered_10012e84(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6);
uint recovered_100130e8(byte *param_1,uint param_2);
bool recovered_100131e4(byte *param_1,byte *param_2);
int * recovered_100132e8(byte *param_1,uint param_2);
bool recovered_10013aec(byte *param_1);
char * recovered_10013d80(char *param_1);
void recovered_10013e2c(byte *param_1,char *param_2,char *param_3);
void recovered_10013f70(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6);
void recovered_10014490(int param_1);
undefined4
recovered_10017bfc(int param_1,int *param_2,int param_3,int param_4,int *param_5,undefined4 *param_6
                  );
void recovered_10017e70(int param_1);
void recovered_10018860(int param_1,int param_2,char *param_3,uint param_4);
void recovered_10018f20(char *param_1,uint param_2,uint param_3);
void recovered_10019058(int param_1,int param_2,int param_3,int param_4,int param_5);
void recovered_10019234(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100196a4(char *param_1,char *param_2,char *param_3,uint param_4);
void recovered_10019878(uint param_1,uint param_2,char *param_3,uint param_4);
uint recovered_10019aa8(char *param_1,uint param_2);
void recovered_10019d4c(char *param_1,uint param_2,uint param_3,uint param_4);
void recovered_10019ec8(char *param_1,char *param_2,int param_3);
void recovered_1001a044(undefined1 *param_1,int param_2);
void recovered_1001a1e4(int *param_1,int param_2);
void recovered_1001a398(int param_1,int param_2,int param_3,undefined4 param_4,int param_5);
undefined1 recovered_1001acec(void);
uint recovered_1001ae80(int param_1,int param_2,int param_3,uint param_4);
void recovered_1001aff0(int param_1);
void recovered_1001b500(int param_1,undefined4 param_2);
int recovered_1001bd00(int param_1,int param_2);
void recovered_1001be90(uint param_1);
void recovered_1001c000(char *param_1);
void recovered_1001c050(int param_1);
void recovered_1001c0e4(int param_1);
void recovered_1001c1c8(int param_1);
undefined4 recovered_1001c254(int param_1,uint param_2,int param_3);
int recovered_1001ca40(int param_1,int param_2,int param_3);
undefined4 recovered_1001cac4(int param_1,int param_2,int param_3);
int recovered_1001cd98(int param_1,int param_2,int param_3);
void recovered_1001cf30(char *param_1,undefined1 *param_2);
void recovered_1001d040(byte *param_1,int param_2,int param_3);
void recovered_1001d834(void);
void recovered_1001d92c(int param_1);
void recovered_1001da60(char *param_1,int param_2);
uint recovered_1001e238(int param_1);
void recovered_1001e440(int param_1);
void recovered_1001e5a8(uint param_1);
void recovered_1001e8d4(uint param_1,char param_2);
void recovered_1001e9c0(uint param_1);
void recovered_1001eb04(int param_1);
void recovered_1001ebb0(int param_1,undefined4 param_2);
void recovered_1001f110(int param_1,uint param_2,undefined1 param_3);
void recovered_1001f248(int param_1);
void recovered_1001f580(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,
                       char *param_5);
void recovered_1001f710(int param_1,char *param_2);
void recovered_1001f7a0(char *param_1,uint param_2,char *param_3);
bool recovered_1001f8dc(uint param_1);
undefined4 recovered_1001feb8(char *param_1,char *param_2);
bool recovered_1001ffe8(byte *param_1);
void recovered_1002063c(char *param_1,int param_2,uint param_3,char param_4);
void recovered_10020804(void);
void recovered_10020a18(int param_1,char *param_2,char *param_3);
void recovered_10020aac(undefined4 param_1,char *param_2,undefined4 param_3);
void recovered_10020b60(void);
void recovered_10021120(byte *param_1,undefined4 param_2,undefined4 param_3,undefined *param_4);
void recovered_10021278(undefined4 param_1,undefined4 param_2,byte *param_3,byte *param_4,
                       undefined4 param_5,int param_6);
void recovered_10021520(byte *param_1,int param_2);
void recovered_10021c20(undefined1 *param_1,int param_2);
int recovered_1002201c(int param_1,int param_2,int param_3);
void recovered_1002217c(int param_1,uint param_2);
void recovered_100222ec(int param_1,int param_2);
undefined4
recovered_10022430(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong *param_7);
void recovered_10022730(char *param_1);
void recovered_10022f20(int param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6);
void recovered_10023280(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void recovered_10023448(uint param_1,uint param_2,uint param_3,int param_4,int param_5);
void recovered_1002354c(int param_1);

/* Original analysis identifiers for manual recovery units. */
