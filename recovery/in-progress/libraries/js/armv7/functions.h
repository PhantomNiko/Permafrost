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
#define pf_varargs_10008174__4_ recovered_10008174
extern uint8_t pf_module_state[];
uint recovered_10003ea0(uint param_1,uint param_2);
uint recovered_10003ef0(uint param_1,uint param_2);
uint recovered_10003f28(uint param_1,uint param_2);
uint recovered_10003f98(uint param_1,uint param_2);
ulonglong recovered_10004004(float param_1);
longlong recovered_10004014(float param_1);
float recovered_10004024(uint param_1,uint param_2);
float recovered_10004040(uint param_1,uint param_2);
void recovered_10004060(void);
void recovered_10004078(void);
int recovered_10004470(void);
void recovered_100044b4(void);
int recovered_10004504(void);
void recovered_10004540(void);
uint * recovered_10004584(int param_1);
longlong recovered_10004690(uint param_1,int param_2,uint param_3);
ulonglong recovered_100046e4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10004738(uint param_1,int param_2,uint param_3);
undefined8 recovered_10004784(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10004868(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100048e8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10004a00(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10004abc(void);
int recovered_10004ac4(int param_1);
void * recovered_10004ad0(uintptr_t size);
void recovered_10004b24(void *pointer);
void * recovered_10004b74(void *pointer,uintptr_t size);
void recovered_10004bc8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10004e4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10005358(byte *param_1,byte param_2,uint param_3);
void recovered_10005558(undefined4 *param_1,uint param_2);
void recovered_10005754(undefined4 *param_1,uint param_2);
int recovered_10005950(uint *param_1,uint *param_2,uint param_3);
int recovered_10005b48(byte *param_1,byte *param_2);
bool recovered_10005b98(int param_1);
bool recovered_10005bac(int param_1);
bool recovered_10005bc0(uint param_1);
bool recovered_10005bd8(uint param_1);
bool recovered_10005c04(int param_1);
bool recovered_10005c24(int param_1);
int recovered_10005c38(int param_1);
int recovered_10005c48(int param_1);
int recovered_10005c58(int param_1);
int recovered_10005c80(byte *param_1,byte *param_2);
int recovered_10005cc4(byte *param_1,byte *param_2);
void recovered_10005d08(int param_1,int param_2);
undefined8 * recovered_10005d24(undefined8 *param_1);
char * recovered_10006038(char *param_1,char param_2);
int recovered_1000606c(char *param_1,char *param_2);
char * recovered_100060d0(char *param_1,char *param_2);
char * recovered_10006130(char *param_1,char *param_2);
undefined * recovered_10006194(void);
undefined ** recovered_100061a4(void);
undefined4 recovered_100061b4(undefined4 *param_1);
double recovered_10006264(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_100062a8(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10006360(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10006398(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10006418(undefined4 param_1,undefined4 param_2);
double recovered_10006448(undefined4 param_1,undefined4 param_2);
double recovered_1000648c(undefined4 param_1,undefined4 param_2);
double recovered_100064d8(undefined4 param_1,undefined4 param_2);
longlong recovered_10006618(undefined4 param_1,undefined4 param_2);
double recovered_10006648(undefined4 param_1,undefined4 param_2);
double recovered_10006708(undefined4 param_1,undefined4 param_2);
double recovered_100067b8(undefined4 param_1,undefined4 param_2);
long long recovered_100067d8(double value);
unsigned long long recovered_10006898(double value);
double recovered_10006920(unsigned long long value);
double recovered_10006968(long long value);
float recovered_100069f8(float param_1,float param_2);
float recovered_10006a3c(float param_1,float *param_2);
float recovered_10006af8(float param_1,uint param_2);
float recovered_10006b44(float param_1,float param_2);
float recovered_10006bcc(float param_1);
float recovered_10006c04(float param_1);
double recovered_10006c50(undefined4 param_1,undefined4 param_2);
float recovered_10006ca4(float param_1);
float recovered_10006d00(float param_1);
float recovered_10006d58(float param_1);
void recovered_10006e9c(undefined4 param_1,undefined4 param_2);
float recovered_10006ed0(float param_1);
float recovered_10006f98(float param_1);
float recovered_10007050(float param_1);
int recovered_1000706c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_100071c0(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10007320(byte *param_1,undefined4 *param_2);
float recovered_100074f4(byte *in_r0,undefined4 *in_r1);
int recovered_10007510(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10008174(char *buffer,uintptr_t capacity,char *format,...);
void recovered_100081a4(int *param_1,int *param_2,int *param_3);
void recovered_10008390(char *param_1,int param_2);
void recovered_10008574(void);
void recovered_10008634(void);
void recovered_100086f0(char *param_1,undefined *param_2);
void recovered_10008748(void);
void recovered_10008794(void);
bool recovered_100087e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10008934(void);
void recovered_1000893c(void);
undefined4 recovered_10008940(void);
undefined4 * recovered_10008948(int param_1,int param_2);
void recovered_10008ccc(int param_1,int param_2,uint *param_3);
undefined4 recovered_10008dcc(uint *param_1);
uint recovered_10008ec4(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10008ff0(int *param_1);
int recovered_100091f0(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10009368(int *param_1,uint param_2,int param_3);
undefined4 recovered_10009418(int param_1);
undefined4 recovered_10009440(uint *param_1);
undefined1 recovered_10009518(int param_1);
undefined1 recovered_10009528(int param_1);
void recovered_10009538(int param_1);
void recovered_10009554(uint param_1,int param_2);
undefined4 recovered_10009578(int param_1);
undefined4 recovered_10009608(int param_1,int param_2);
undefined4 recovered_1000977c(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_1000987c(int param_1,int param_2,int param_3);
undefined4 recovered_10009904(void);
void recovered_1000990c(void);
undefined4 recovered_10009910(void);
undefined4 recovered_10009918(void);
undefined4 recovered_10009920(void);
char * recovered_10009928(char *param_1,char param_2,int param_3);
int recovered_1000995c(byte *param_1,byte *param_2,int param_3);
char * recovered_100099a0(undefined4 param_1);
undefined4 recovered_10009aa0(void);
undefined4 recovered_10009aa8(void);
void recovered_10009ab0(void);
__attribute__((naked,noreturn)) void recovered_10009ad8(void *context);
__attribute__((naked,returns_twice)) int recovered_10009ae8(void *context);
__attribute__((naked,noreturn)) void recovered_10009b00(void *context,int value);
void recovered_10009b20(void);
undefined4 recovered_10009bac(void);
void recovered_10009bb4(int param_1);
void recovered_10009bc4(int param_1);
void * recovered_10009bfc(ulong param_1);
void * recovered_10009c28(ulong param_1);
void recovered_10009c54(void *param_1);
void recovered_10009d1c(void *param_1);
void recovered_10009de4(void *param_1);
void recovered_10009eac(void *param_1);
undefined4 recovered_10009f74(void);
uint recovered_10009f7c(uint *param_1);
void recovered_10009f8c(uint *param_1);
void recovered_10009f9c(void);
undefined4 * recovered_10009fa0(uint param_1);
void recovered_1000a028(int param_1);
int recovered_1000a038(int param_1);
void recovered_1000a040(void);
void recovered_1000a0a8(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000a0d0(undefined4 *param_1);
void recovered_1000a164(void);
void recovered_1000a19c(undefined4 *param_1);
void recovered_1000a1c0(undefined4 *param_1);
void recovered_1000a208(undefined4 *in_r0);
void recovered_1000a214(void);
void recovered_1000a220(undefined4 *param_1);
undefined4 recovered_1000a254(undefined4 *param_1);
undefined4 recovered_1000a314(undefined4 *in_r0);
undefined4 recovered_1000a320(void);
void recovered_1000a328(void);
int recovered_1000a334(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_1000a428(void);
undefined4 recovered_1000a42c(void);
bool recovered_1000a434(int param_1);
bool recovered_1000a448(int param_1);
bool recovered_1000a488(uint param_1);
bool recovered_1000a4b4(undefined4 param_1,uint param_2);
bool recovered_1000a4d0(uint param_1);
bool recovered_1000a4ec(undefined4 param_1,uint param_2);
bool recovered_1000a508(undefined4 param_1,uint param_2);
double recovered_1000a528(double value);
float recovered_1000a610(float value);
long double recovered_1000a710(long double value);
double recovered_1000a7f8(long end,long start);
double recovered_1000a814(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000a86c(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_1000a9e4(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_1000a9e8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000ad9c(uint param_1,undefined4 *param_2);
undefined * recovered_1000af2c(void);
uint recovered_1000af3c(char *param_1,byte *param_2,byte *param_3,byte *param_4,char *param_5,
                       uint param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10,
                       uint param_11);
void recovered_1000bc14(char *buffer,uint capacity,char *text);
uint recovered_1000bc90(char *script,char *output,uint capacity);
uint recovered_1000bf34(char *script,char *output,uint capacity);
uint recovered_1000c724(char *script,char *output,uint capacity);
uint recovered_1000c8c4(char *script,char *output,uint capacity);
uint recovered_1000cc54(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags);
char * recovered_1000d1ec(char *text,char *pattern);
uint recovered_1000d29c(char *output,uint capacity,char *first,char *last,char *url,char *html);
uint recovered_1000df0c(char *output,uint capacity,char *first,char *last);
char * recovered_1000e488(char *first);
uint recovered_1000e5bc(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth);
uint recovered_1000ec70(char *output,uint capacity,char *text);
uint recovered_1000ed00(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth);
uint recovered_1000efd8(char *output,uint capacity,char *text);
uint recovered_1000f168(char *output,uint capacity,char *text);
uint recovered_1000f1e0(char *output,uint capacity,char *text);
uint recovered_1000f26c(char *output,uint capacity,char *first,char *last);
char * recovered_1000f7cc(char *first);
uint recovered_1000f918(char *output,uint capacity,char *first,char *last);

/* Original analysis identifiers for manual recovery units. */
