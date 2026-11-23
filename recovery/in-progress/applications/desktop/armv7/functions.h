/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
char *strstr(const char *,const char *);
unsigned long strlen(const char *);
static inline void pf_app_scrollbars_layout(int a,int b,int c,int d,void *vertical,void *horizontal,void *output){TerrorUIRect r={a,b,c,d};terror_ui_scrollbars_layout(r,vertical,horizontal,output);}
#define thunk___divdi3 __divdi3
#define thunk___divsi3 __divsi3
#define thunk___fixdfdi __fixdfdi
#define thunk___fixunsdfdi __fixunsdfdi
#define thunk___floatdidf __floatdidf
#define thunk___floatundidf __floatundidf
#define thunk___udivdi3 __udivdi3
#define thunk___udivsi3 __udivsi3
#define thunk___umoddi3 __umoddi3
#define thunk_memcmp memcmp
#define thunk_memcpy memcpy
#define thunk_memset memset
#define thunk_snprintf snprintf
#define thunk_strchr strchr
#define thunk_strcmp strcmp
#define thunk_strlen strlen
#define thunk_strncmp strncmp
#define thunk_strstr strstr
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_terror_ui_reload_colours terror_ui_reload_colours
#define thunk_terror_ui_scrollbar_value_from_point terror_ui_scrollbar_value_from_point
#define thunk_pf_app_scrollbars_layout pf_app_scrollbars_layout
#define thunk_terror_ui_window_configure terror_ui_window_configure
#define thunk_terror_ui_window_list terror_ui_window_list
#define thunk_terror_ui_window_menu_command terror_ui_window_menu_command
#define thunk_terror_ui_window_pointer_event terror_ui_window_pointer_event
#define thunk_terror_ui_window_request_close terror_ui_window_request_close
#define thunk_terror_ui_window_set_content_size terror_ui_window_set_content_size
long long __divdi3(long long a,long long b);
unsigned long long __udivdi3(unsigned long long a,unsigned long long b);
unsigned long long __umoddi3(unsigned long long a,unsigned long long b);
int __divsi3(int a,int b);
unsigned int __udivsi3(unsigned int a,unsigned int b);
long long __fixdfdi(double value);
unsigned long long __fixunsdfdi(double value);
double __floatdidf(long long value);
double __floatundidf(unsigned long long value);
long long __divdi3(long long,long long);
unsigned long long __udivdi3(unsigned long long,unsigned long long);
unsigned long long __umoddi3(unsigned long long,unsigned long long);
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
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
#define NotUsed (*(volatile uint32_t *)(uintptr_t)0x14)
void *memmove(void *,const void *,unsigned long);
#include "armv7/neon.h"
#define SUB43(a,b) (((uint32_t)(a)>>((b)*8))&0xffffffU)
#include "arm_exclusive.h"
static inline void ClearExclusiveLocal(void){__asm__ volatile("clrex":::"memory");}
#define _DataAbort DataAbort
extern uint8_t pf_module_state[];
uint recovered_100007f0(uint a,uint b);
uint recovered_10000840(uint a,uint b);
int recovered_10000878(int a,int b);
int recovered_100008e8(int a,int b);
ulonglong recovered_10000950(ulonglong a,ulonglong b);
ulonglong recovered_10000a34(ulonglong a,ulonglong b);
longlong recovered_10000ab4(longlong a,longlong b);
longlong recovered_10000bd4(longlong a,longlong b);
ulonglong recovered_10000c90(double value);
longlong recovered_10000d18(double value);
ulonglong recovered_10000d64(float x);
longlong recovered_10000d74(float x);
double recovered_10000d84(ulonglong value);
double recovered_10000dcc(longlong value);
float recovered_10000df4(ulonglong x);
float recovered_10000e10(longlong x);
char * recovered_10000e30(void);
int recovered_10000e40(int argc,char **argv);
int recovered_10008c2c(char *param_1);
void recovered_10009910(undefined1 *param_1);
void recovered_10009a28(void);
void recovered_1000afd4(void);
void recovered_1000b024(byte *param_1,int param_2);
uint recovered_1000b540(void);
int recovered_1000b7f0(int param_1,char *param_2,undefined4 param_3,byte param_4);
int recovered_1000b9b4(byte *param_1,int param_2,byte param_3);
void recovered_1000bf04(void);
void recovered_1000bfc8(int param_1);
void recovered_1000c40c(void);
void recovered_1000c75c(undefined4 param_1,int param_2);
void recovered_1000c7f8(int param_1);
void recovered_1000c998(byte *param_1);
void recovered_1000ccc0(void);
void recovered_1000d184(int *param_1);
void recovered_1000d274(int *param_1,int param_2);
void recovered_1000d448(undefined1 *param_1,int param_2);
void recovered_1000dd00(int param_1);
void recovered_1001231c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9);
void recovered_100123b4(int param_1,int param_2,int param_3,int param_4);
undefined4 recovered_100127f0(int param_1,int param_2,int param_3,int param_4);
undefined4
recovered_10012ba4(byte *param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 *param_5);
undefined4 recovered_10012f2c(uint param_1,uint param_2);
bool recovered_10013054(byte *param_1,uint *param_2);
void recovered_10013120(int param_1,int param_2);
void recovered_10013470(void);
void recovered_10013c44(int *param_1);
void recovered_10013ee0(int param_1,void *param_2);
undefined4 recovered_10014034(int param_1,int param_2,uint *param_3);
undefined4 recovered_10014294(void);
undefined4 recovered_10014748(void);
bool recovered_1001479c(void);
void recovered_1001486c(int *param_1);
undefined4 recovered_10014900(int param_1);
undefined4 recovered_10015038(int param_1,undefined1 *param_2,undefined1 *param_3);
undefined4 recovered_1001551c(int param_1,uint param_2,uint *param_3,char *param_4);
undefined4 recovered_100155bc(int param_1,uint param_2,uint *param_3,uint param_4);
undefined4 recovered_1001568c(int param_1,byte *param_2);
undefined4 recovered_100159e8(int param_1,char *param_2,void *param_3,uint param_4);
void recovered_10015a94(char *param_1,uint param_2,char *param_3);
undefined4 recovered_10015b28(int param_1,uint *param_2,uint *param_3,uint param_4);
void recovered_10015c78(char *param_1,uint param_2,uint param_3);
void recovered_10015db0(char *param_1,undefined1 *param_2,uint param_3);
uint recovered_10015ec8(int param_1,char *param_2,undefined4 *param_3);
undefined4 recovered_10015fd0(int param_1,char *param_2);
undefined4 recovered_10016064(void);
undefined4 recovered_10016310(int param_1);
void recovered_1001648c(undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
void recovered_10016710(char *param_1,byte *param_2);
bool recovered_10017258(byte *param_1,int *param_2);
undefined4 recovered_100177cc(byte *param_1,undefined1 *param_2);
char * recovered_10017c08(char *text);
bool recovered_10017cf4(byte *param_1,byte *param_2);
undefined4 recovered_10017d58(byte *param_1,char *param_2);
bool recovered_10017e00(byte *param_1);
bool recovered_1001859c(byte *param_1,byte *param_2);
undefined4 recovered_100186a0(int param_1,char *param_2,uint *param_3);
void recovered_100188c0(char *param_1,byte *param_2);
char * recovered_10018ab0(char *param_1);
undefined4 recovered_10018b5c(int param_1);
int recovered_10018cec(void);
bool recovered_10018e2c(undefined1 *param_1,undefined1 *param_2);
void recovered_10018f04(int param_1,uint param_2,int param_3);
uint recovered_100192bc(char *param_1);
int recovered_10019458(void);
void recovered_10019598(void *param_1);
void recovered_10019734(void *param_1,int param_2);
undefined4 recovered_10019b94(int param_1,int *param_2);
void recovered_1001a064(int *param_1);
undefined4 recovered_1001a144(void);
undefined4 recovered_1001a4cc(void *param_1,int *param_2,undefined4 *param_3,uint *param_4);
undefined4 recovered_1001aee4(undefined4 *param_1,byte *param_2,uint *param_3,byte *param_4);
undefined4 recovered_1001b0b0(void);
bool recovered_1001b140(int param_1,uint param_2);
void recovered_1001b290(undefined8 *param_1,uint param_2);
undefined4 recovered_1001b580(int param_1,undefined4 *param_2,int param_3,int *param_4,int param_5);
undefined4 recovered_1001c318(void);
undefined4 recovered_1001d9d0(void);
void recovered_1001da24(void);
void recovered_1001e124(void);
void recovered_1001e31c(void);
void recovered_1001ec9c(char *param_1,int param_2);
void recovered_1001fe60(void);
void recovered_10020038(void);
void recovered_100201e8(void);
void recovered_100208d4(void);
void recovered_10020a08(void);
void recovered_10021204(void);
void recovered_10021328(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 param_5);
void recovered_10021500(int *param_1,int param_2,int param_3,uint param_4,uint param_5);
void recovered_100216a4(int param_1,int param_2,int param_3,int param_4,uint param_5);
void recovered_10021b58(int param_1,int param_2,int param_3,byte *param_4,uint param_5);
int * recovered_10021cd0(byte *param_1,int param_2,uint param_3);
void recovered_1002266c(uint param_1,uint param_2,undefined4 param_3,int param_4);
void recovered_10022868(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6);
void recovered_10022b18(int param_1,int param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                       );
undefined4
recovered_10022e00(byte *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
uint recovered_10023324(int param_1,int param_2,int *param_3);
uint recovered_100234c0(int param_1);
int * recovered_10023608(byte *param_1,int param_2,int param_3,uint param_4);
bool recovered_10023fb0(byte *param_1);
undefined4 recovered_10024244(int param_1,char *param_2,char *param_3);
int * recovered_10024608(undefined1 *param_1,int param_2);
void recovered_1002471c(byte *param_1,char *param_2,char *param_3);
void recovered_100248d4(undefined4 *param_1,int param_2);
void recovered_10024ecc(int param_1,int param_2,uint param_3,uint param_4,uint param_5);
void recovered_1002511c(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       void *param_5,int param_6);
bool recovered_10025474(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8);
void recovered_100254f0(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6);
void recovered_10025958(int param_1);
void recovered_100267a0(int param_1,int param_2,uint param_3,uint param_4,uint param_5);
bool recovered_10026f74(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10027090(int param_1,int *param_2,uint param_3,uint param_4,int param_5,int *param_6);
undefined4
recovered_1002838c(int param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6,
                  int param_7);
uint recovered_100286f8(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);
void recovered_10028850(short *param_1,int *param_2,uint param_3,uint param_4);
void recovered_10028b98(int param_1,int param_2,int param_3,uint param_4,uint param_5,
                       undefined1 *param_6);
void recovered_10028d20(int param_1);
void recovered_100296a0(int param_1);
uint recovered_1002c3e8(undefined4 param_1,char *param_2,int param_3,undefined1 *param_4,
                       uint param_5);
void recovered_1002c654(uint *param_1,int param_2,int param_3);
void recovered_1002c820(int param_1,int param_2,undefined4 *param_3,uint param_4,int param_5);
void recovered_1002d190(int *param_1);
int * recovered_1002d550(int param_1,int param_2,int param_3,int param_4);
void recovered_1002d938(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8,int param_9,int param_10,int param_11);
void recovered_1002db4c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void recovered_1002dea4(byte *param_1,byte *param_2,uint param_3,int param_4,int param_5);
void recovered_1002e030(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1002e4a0(char *param_1,uint param_2);
void recovered_1002e860(char *param_1,char *param_2,byte *param_3,char *param_4,char *param_5);
void recovered_1002ea3c(uint param_1,uint param_2,char *param_3,uint param_4);
void recovered_1002ec6c(int param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6);
void recovered_1002ed98(uint param_1,char *param_2,char *param_3,char *param_4);
void recovered_1002ee94(char *param_1,uint param_2,uint param_3,uint param_4);
void recovered_1002f010(char *param_1,char *param_2,uint param_3);
void recovered_1002f18c(int param_1);
void recovered_1002f9dc(int *param_1,int param_2);
void recovered_1002fa58(int *param_1,int param_2);
void recovered_1002fc64(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                       int param_7);
void recovered_1002fef4(void);
void recovered_10030098(int *param_1,uint param_2,int param_3,int param_4);
int recovered_100302d4(int *param_1,uint param_2,uint param_3,int param_4,int param_5);
void recovered_10030ac0(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                       uint param_7,uint param_8,int param_9,int param_10);
void recovered_10031050(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                       uint param_7,int param_8);
void recovered_10031380(undefined4 *param_1);
void recovered_10031410(int param_1);
void recovered_10032200(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                       int param_7);
void recovered_1003292c(int param_1,int param_2,int param_3,byte *param_4,uint param_5);
void recovered_10032a9c(char *param_1,int param_2,int *param_3,undefined1 *param_4,
                       undefined1 *param_5);
bool recovered_1003305c(void);
undefined4 recovered_100331f0(int param_1);
undefined4 recovered_1003342c(int param_1,uint *param_2,int *param_3);
void recovered_10033820(uint param_1,uint param_2,uint param_3,undefined *UNRECOVERED_JUMPTABLE,
                       undefined4 param_5);
void recovered_10033b80(int *param_1,uint param_2,uint param_3);
void recovered_10034060(int *param_1,uint param_2,uint param_3);
void recovered_1003413c(int *param_1,uint param_2,uint param_3);
undefined4 recovered_100344bc(int param_1);
undefined4 recovered_100348b8(int param_1,char *param_2);
void recovered_10034adc(int param_1);
undefined1 *
recovered_10034cf0(uint param_1,int param_2,undefined4 param_3,char *param_4,char *param_5);
void recovered_10034fb0(int param_1);
int recovered_100350b8(undefined4 *param_1);
bool recovered_10035584(byte *param_1);
void recovered_10035a70(void);
void recovered_10035b60(int param_1);
undefined4 recovered_10036070(void);
void recovered_100360c4(uint *param_1,uint *param_2);
undefined1
recovered_10037090(char *param_1,int param_2,int param_3,uint param_4,uint param_5,
                  undefined1 *param_6,int param_7,int param_8);
undefined4 recovered_1003817c(uint param_1,uint param_2);
void recovered_10038aa4(int param_1);
uint recovered_10038b64(int param_1,uint param_2);
int recovered_10038c60(int param_1,int param_2);
uint recovered_10038f3c(int param_1,int param_2);
bool recovered_10038fc8(int param_1,int param_2);
void recovered_10039140(byte *param_1,int param_2,uint param_3);
void recovered_10039980(int param_1);
void recovered_10039a8c(int param_1);
undefined4 recovered_10039ba4(char *param_1,int param_2,int param_3);
void recovered_10039cf4(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_10039de8(int param_1,uint param_2,uint param_3);
int recovered_1003a478(int param_1,int param_2,int param_3);
void recovered_1003a540(char *param_1);
undefined4 recovered_1003a594(int param_1,uint *param_2,uint *param_3);
int recovered_1003aaac(int param_1,uint param_2,int param_3);
void recovered_1003abd8(int param_1);
bool recovered_1003aca8(byte *param_1,uint param_2,undefined1 *param_3);
void recovered_1003adbc(byte *param_1);
undefined4
recovered_1003b894(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                  int *param_7,undefined1 *param_8,int param_9,int param_10);
void recovered_1003ba00(byte *param_1,undefined4 param_2,int param_3);
void recovered_1003bb94(int param_1,int param_2,char *param_3);
char * recovered_1003c15c(uint param_1,char *param_2,uint param_3,char *param_4,int param_5);
void recovered_1003c9a0(undefined1 *param_1,int param_2);
void recovered_1003cb58(uint param_1);
void recovered_1003ce20(void);
void recovered_1003d89c(int param_1);
void recovered_1003d984(char *param_1);
void recovered_1003daf0(void);
void recovered_1003dbb0(void);
void recovered_1003dc00(int param_1);
void recovered_1003e054(int param_1,uint param_2,uint param_3);
void recovered_1003e1fc(char *param_1,int param_2);
uint recovered_1003ea2c(char *param_1,int param_2);
void recovered_1003ec34(char *param_1,int param_2,undefined1 param_3);
void recovered_1003ee94(undefined1 *param_1,int param_2);
void recovered_1003efdc(int param_1);
void recovered_1003f174(void);
void recovered_1003f370(char *param_1,uint param_2);
void recovered_1003f6c0(int param_1,undefined4 param_2);
undefined4 recovered_1003fc08(int param_1,char *param_2);
void recovered_1003fc9c(uint param_1);
void recovered_10040120(int param_1,int param_2,uint param_3);
void recovered_10040748(int param_1,undefined4 param_2,char *param_3,undefined4 param_4);
void recovered_100408b8(int param_1);
void recovered_10040920(int param_1);
void recovered_10040aac(int param_1);
byte recovered_10040d84(void);
void recovered_10040e2c(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                       byte *param_5,int param_6,int param_7);
bool recovered_100410ec(int param_1);
bool recovered_100412c8(char *param_1,uint param_2,char *param_3);
void recovered_10041480(byte *param_1,int param_2);
int recovered_10041730(byte *param_1,int param_2);
undefined1 * recovered_10041b3c(char *param_1,int param_2);
char * recovered_10041eac(undefined4 param_1,char *param_2,int param_3,int *param_4);
char * recovered_100430c0(int param_1,uint param_2,int *param_3);
bool recovered_10043880(char *param_1,uint param_2,uint param_3,int *param_4);
bool recovered_10043910(char *param_1,uint param_2,int param_3,uint param_4,uint *param_5);
char * recovered_10043bf0(int param_1,char *param_2,uint param_3,void *param_4,uint param_5);
int recovered_1004464c(int param_1,uint param_2,int param_3);
undefined4 recovered_10044a00(int param_1,uint param_2);
undefined4 * recovered_10044bec(undefined4 param_1,void *param_2,void *param_3);
undefined4 recovered_10044d24(int *param_1,void *param_2,uint param_3);
char * recovered_10044e4c(int param_1,int param_2,int param_3);
uint recovered_100450cc(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
char * recovered_100451e0(char *param_1,int param_2,uint param_3,int param_4);
void recovered_1004567c(int param_1);
undefined4 recovered_10045770(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_10045a14(uint param_1,char *param_2,uint param_3,byte *param_4,int param_5);
void recovered_10045d8c(void);
bool recovered_10045ddc(int param_1,int param_2,char *param_3);
undefined4 recovered_10045fe8(int param_1,char *param_2,char *param_3);
bool recovered_10046080(uint param_1,char *param_2,uint param_3,byte *param_4,uint param_5);
bool recovered_100464a0(undefined1 *param_1,undefined1 *param_2);
bool recovered_1004656c(uint param_1,char *param_2);
undefined4 recovered_10046b2c(char *param_1,char *param_2);
void recovered_10046c5c(void);
undefined4
recovered_10046e20(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,char *param_5);
undefined4 recovered_10047068(int param_1,int *param_2);
void recovered_10047258(undefined4 param_1,undefined4 param_2);
void recovered_10047458(undefined4 param_1,undefined4 param_2);
void recovered_10047530(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100477bc(byte *param_1,int param_2);
bool recovered_10047da8(int param_1);
bool recovered_10047ea8(char *param_1,undefined4 param_2,char *param_3);
int recovered_10048110(int param_1,int param_2,int param_3,int param_4);
void recovered_10048274(int param_1,uint param_2);
void recovered_100483e0(int param_1,uint param_2);
bool recovered_1004861c(int param_1,int param_2,uint param_3);
bool recovered_10048b74(int param_1,int param_2);
void recovered_10048ea0(uint param_1,int param_2,int param_3);
int recovered_10048f20(int param_1,int param_2);
void recovered_1004904c(byte *param_1,uint param_2,uint param_3,uint param_4);
void recovered_10049204(byte *param_1,uint param_2);
void recovered_10049684(char *param_1,undefined4 param_2,int param_3);
void recovered_10049b04(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
void recovered_1004a0e4(int param_1,char *param_2,char *param_3);
undefined4 recovered_1004a3a4(void);
undefined4
recovered_1004a688(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong *param_7);
undefined4
recovered_1004a97c(byte *param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint param_6,
                  uint param_7,undefined4 *param_8,undefined4 *param_9,uint param_10,uint param_11,
                  undefined4 *param_12,undefined4 *param_13,uint param_14);
void recovered_1004c450(int param_1,int param_2,int param_3,int param_4);
void recovered_1004c5c8(int param_1,int param_2,int param_3,int param_4);
bool recovered_1004c754(int param_1,int param_2,int param_3,int param_4);
void recovered_1004c948(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void recovered_1004cc70(uint *param_1);
bool recovered_1004cee8(void);
void recovered_1004d250(uint *param_1);
void recovered_1004d718(int param_1);
void recovered_1004d7f4(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                       int param_6);
void recovered_1004d954(int param_1,int param_2,int param_3,int param_4,int param_5);
void recovered_1004da58(int *param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
