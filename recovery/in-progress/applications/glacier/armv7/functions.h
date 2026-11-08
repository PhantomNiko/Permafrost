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
#define FUN_10023fa4 snprintf
#define recovered_10023fa4 snprintf
uint winter_js_execute_basic(char *script,char *output,uint capacity,char *status,uint status_capacity, uint flags);
uint winter_js_execute_browser_event(char *param_1,byte *param_2,byte *param_3,byte *param_4,char *param_5, uint param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10, uint param_11);
undefined * winter_js_version(void);
int winter_tls_client_handshake(void *context,char *error,ulong capacity);
void winter_tls_client_init(void *context,void *io,char *hostname);
int winter_tls_read(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity);
int winter_tls_write(void *context,void *data,ulong size,char *error,ulong capacity);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
char *strstr(const char *,const char *);
int memcmp(const void *,const void *,unsigned long);
typedef uint64_t uint5;
#define pf_varargs_10023fa4__4_ recovered_10023fa4
#define pf_varargs_10023fa4__4__4_ recovered_10023fa4
#define pf_varargs_10023fa4__4__4__4_ recovered_10023fa4
#define pf_varargs_10023fa4__4__4__4__4_ recovered_10023fa4
#define pf_varargs_10023fa4__4__4__4__4__4__4_ recovered_10023fa4
#define pf_varargs_10023fa4___ recovered_10023fa4
extern uint8_t pf_module_state[];
uint recovered_10003950(uint a,uint b);
uint recovered_100039a0(uint a,uint b);
int recovered_100039d8(int a,int b);
int recovered_10003a48(int a,int b);
ulonglong recovered_10003ab0(ulonglong a,ulonglong b);
ulonglong recovered_10003b94(ulonglong a,ulonglong b);
longlong recovered_10003c14(longlong a,longlong b);
longlong recovered_10003d34(longlong a,longlong b);
ulonglong recovered_10003df0(double x);
longlong recovered_10003e78(double x);
ulonglong recovered_10003ec4(float x);
longlong recovered_10003ed4(float x);
double recovered_10003ee4(ulonglong x);
double recovered_10003f2c(longlong x);
float recovered_10003f54(ulonglong x);
float recovered_10003f70(longlong x);
int recovered_10003f8c(void);
void recovered_10005e4c(void *param_1);
void recovered_10005e9c(int param_1);
void recovered_10006090(void *param_1);
void recovered_1000620c(uint param_1,byte *param_2);
undefined4 recovered_1000645c(int param_1);
int recovered_1000667c(void);
void recovered_100066d0(int param_1,int param_2);
void recovered_10007eb4(int param_1,int *param_2);
void recovered_1000a604(uint param_1,int param_2,byte *param_3);
void recovered_1000b89c(int param_1);
void recovered_1000ba2c(char *param_1,int param_2,int param_3);
void recovered_1000ba88(byte *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
bool recovered_1000bcd4(byte *param_1,byte *param_2);
void recovered_1000bd50(char *param_1,char *param_2,char *param_3,uint param_4);
undefined4 recovered_1000c1fc(byte *param_1,byte *param_2);
void recovered_1000c270(int param_1,byte *param_2,char *param_3);
char * recovered_1000c6fc(char *param_1,char *param_2);
int recovered_1000c7ac(int param_1,int param_2,byte *param_3,undefined1 *param_4,uint param_5,
                      char *param_6);
bool recovered_1000cb64(byte *param_1);
void recovered_1000ce7c(char *param_1,char *param_2,int param_3);
undefined4 recovered_1000d094(byte *param_1,byte *param_2,char *param_3);
undefined4 recovered_1000d60c(int param_1,int *param_2,byte *param_3);
void recovered_1000d6c4(char *param_1,undefined1 *param_2);
void recovered_1000d770(byte *param_1,byte *param_2,char *param_3);
bool recovered_1000d880(char *param_1,int *param_2,byte *param_3);
void recovered_1000d9c0(byte *param_1);
int recovered_1000dacc(int param_1,byte *param_2,undefined1 *param_3,uint param_4,ulong *param_5,
                      undefined1 *param_6,char *param_7,ulong param_8);
undefined4 recovered_1000df3c(byte *param_1,undefined1 *param_2,char *param_3,ulong param_4);
undefined4 recovered_1000e314(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_1000e6e0(byte *param_1,uint *param_2);
undefined4 recovered_1000e870(int param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5);
undefined4 recovered_1000ed34(int param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
undefined4
recovered_1000f15c(int param_1,int param_2,uint param_3,uint param_4,void *param_5,int param_6,
                  char *param_7,char *param_8,undefined1 *param_9,uint param_10,uint *param_11,
                  char *param_12,ulong param_13,undefined *param_14,undefined4 param_15);
undefined4
recovered_1000f670(char *param_1,uint param_2,uint param_3,void *param_4,char *param_5,
                  undefined1 *param_6,uint param_7,uint *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined4 param_12);
int recovered_1000f98c(int param_1);
bool recovered_1000f9e4(byte *param_1);
undefined4
recovered_1000fc4c(int param_1,uint param_2,int param_3,int param_4,int *param_5,char *param_6,
                  ulong param_7);
void recovered_1000fee4(char *param_1,undefined1 *param_2);
bool recovered_10010074(int param_1,int param_2,uint param_3,uint param_4);
bool recovered_10010254(int param_1,uint param_2,undefined8 *param_3);
bool recovered_100106c0(int param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,void *param_7,uint param_8);
void recovered_10010848(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       uint param_6);
bool recovered_10010944(ushort *param_1,ushort *param_2,uint param_3,uint *param_4,char *param_5);
undefined4
recovered_10010b48(int *param_1,int param_2,uint param_3,uint param_4,void *param_5,char *param_6,
                  ulong param_7);
undefined4 recovered_10010e4c(int param_1,int param_2,uint param_3,char *param_4,ulong param_5);
void recovered_10010f44(int param_1,int param_2,uint param_3,char *param_4,ulong param_5);
bool recovered_10010f64(int *param_1,undefined1 *param_2,int param_3);
bool recovered_10011118(int param_1,byte *param_2,int param_3,int param_4,char *param_5,
                       ulong param_6);
bool recovered_100114dc(int param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,
                       ulong param_10);
undefined4
recovered_10011784(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint *param_7,uint *param_8,byte *param_9,undefined4 *param_10,short *param_11);
bool recovered_100118f4(undefined4 *param_1,char *param_2,ulong param_3);
void recovered_10011e04(undefined4 *param_1);
undefined4
recovered_10011e6c(undefined4 *param_1,int param_2,uint param_3,char *param_4,ulong param_5);
void recovered_10011fb0(char *param_1);
uint recovered_10012000(char *param_1,void *param_2,uint param_3);
undefined4 recovered_10012054(char *param_1,char *param_2,undefined1 *param_3);
bool recovered_10012350(char *param_1,char *param_2,char *param_3,uint param_4);
undefined4 recovered_10012764(int param_1,uint *param_2);
undefined4 recovered_10012c7c(byte *param_1);
void recovered_1001324c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9);
char * recovered_10013320(uint param_1,byte *param_2);
bool recovered_10013a08(int param_1,char *param_2,char *param_3);
void recovered_10013f60(int *param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       int param_6,uint param_7);
void recovered_10014478(uint param_1,int *param_2,byte *param_3,int param_4,uint param_5);
void recovered_10014a40(int param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7);
uint recovered_10014e0c(byte *param_1);
void recovered_10015428(int param_1,undefined4 *param_2);
bool recovered_100154ec(int param_1,int param_2,byte *param_3);
void recovered_10016074(int param_1,char *param_2);
undefined4 recovered_1001624c(byte *param_1,byte *param_2);
void recovered_100163cc(int param_1,int param_2,uint *param_3);
undefined4 recovered_10016460(char *param_1,undefined4 param_2);
undefined4 recovered_1001687c(int param_1,char *param_2,undefined4 param_3);
void recovered_100169a4(int param_1,byte *param_2,int param_3,char *param_4,int param_5);
void recovered_1001786c(int param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6,
                       int *param_7);
void recovered_10017b88(int param_1,uint param_2,undefined4 *param_3,byte *param_4,int param_5);
void recovered_100184f4(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5);
void recovered_10018600(int param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,int param_7,int param_8,int *param_9);
undefined4 recovered_100188bc(char *param_1,char *param_2);
void recovered_10018b94(int param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7);
void recovered_10018dac(char *param_1,char *param_2,char *param_3);
undefined4 recovered_10019090(byte *param_1);
char * recovered_10019584(uint param_1,byte *param_2);
bool recovered_1001968c(char *param_1,char *param_2,byte *param_3,undefined1 *param_4);
undefined4 recovered_100197a8(undefined1 *param_1,undefined1 *param_2);
undefined4 recovered_10019880(int param_1,int param_2,byte *param_3);
undefined4 recovered_10019a44(int param_1,int param_2);
void recovered_10019af8(uint param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8);
byte * recovered_10019cac(byte *param_1,byte *param_2,byte *param_3);
void recovered_1001a384(int param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8);
uint recovered_1001a550(char *param_1,uint param_2);
byte * recovered_1001a6a8(byte *param_1,byte *param_2,byte *param_3);
void recovered_1001a7d8(int param_1,int param_2,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7);
undefined4 recovered_1001a984(byte *param_1);
undefined4 recovered_1001ab60(char *param_1,undefined1 *param_2);
bool recovered_1001ad90(int param_1);
void recovered_1001ae3c(int param_1,int param_2,byte *param_3,byte *param_4);
void recovered_1001b300(int param_1,int param_2,char *param_3);
void recovered_1001b3f8(int param_1);
void recovered_1001b758(int param_1,int param_2,char *param_3,char *param_4);
void recovered_1001b800(uint param_1,int param_2);
bool recovered_1001b940(int param_1);
undefined4 recovered_1001b9ec(int param_1,int param_2,byte *param_3,uint param_4);
bool recovered_1001bb60(char *param_1,byte *param_2);
void recovered_1001bc10(char *param_1,byte *param_2,ulong param_3);
undefined1 recovered_1001bf04(int *param_1,int param_2);
void recovered_1001c454(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_1001c464(undefined4 *param_1,byte *param_2,uint param_3);
int recovered_1001c550(byte *param_1);
undefined4
recovered_1001c6d0(int param_1,byte *param_2,char *param_3,undefined *param_4,undefined *param_5,
                  undefined4 param_6);
undefined4 recovered_1001d390(byte *param_1,char *param_2);
undefined4 recovered_1001d794(int param_1,byte *param_2);
void recovered_1001d8f8(char *param_1);
void recovered_1001d948(uint param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5
                       ,undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9,
                       byte *param_10);
void recovered_1001de34(int *param_1,uint param_2,uint param_3);
void recovered_1001e2c4(int *param_1,void *param_2,uint param_3,uint param_4);
undefined8 *
recovered_1001e6d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  int param_5,uint param_6);
void recovered_1001eca0(int param_1,int param_2,int param_3,char *param_4,uint param_5,uint param_6);
void recovered_1001f020(int param_1,int param_2,char *param_3,int param_4,int param_5);
void recovered_1001f1ac(int param_1,int param_2);
void recovered_1001f5e0(undefined4 *param_1,int param_2);
void recovered_1001f6a4(int param_1);
void recovered_10020018(int param_1,int *param_2,uint param_3,int param_4,uint param_5,uint param_6);
void recovered_10020354(int param_1,int param_2);
void recovered_10020e98(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,uint param_5
                       ,uint param_6);
void recovered_100212e4(int param_1,int *param_2,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10021620(int param_1);
void recovered_100217b8(int param_1);
void recovered_1002194c(int param_1);
undefined4 recovered_10021ab4(char *param_1,int param_2);
void recovered_10021cf0(int param_1);
void recovered_10021d8c(int param_1,uint param_2,int param_3);
undefined4 recovered_10022230(int param_1,uint param_2,byte *param_3);
void recovered_10022798(char *param_1,byte *param_2);
void recovered_100228e4(int param_1,int param_2);

/* Original analysis identifiers for manual recovery units. */
