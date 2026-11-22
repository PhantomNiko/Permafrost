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
#define pf_varargs_10005544__4_ recovered_10005544
extern uint8_t pf_module_state[];
uint recovered_10001270(uint param_1,uint param_2);
uint recovered_100012c0(uint param_1,uint param_2);
uint recovered_100012f8(uint param_1,uint param_2);
uint recovered_10001368(uint param_1,uint param_2);
ulonglong recovered_100013d4(float param_1);
longlong recovered_100013e4(float param_1);
float recovered_100013f4(undefined4 param_1,undefined4 param_2);
float recovered_10001410(undefined4 param_1,undefined4 param_2);
void recovered_10001430(void);
void recovered_10001448(void);
int recovered_10001840(void);
void recovered_10001884(void);
int recovered_100018d4(void);
void recovered_10001910(void);
uint * recovered_10001954(int param_1);
longlong recovered_10001a60(uint param_1,int param_2,uint param_3);
ulonglong recovered_10001ab4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10001b08(uint param_1,int param_2,uint param_3);
undefined8 recovered_10001b54(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001c38(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001cb8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001dd0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10001e8c(void);
int recovered_10001e94(int param_1);
void * recovered_10001ea0(uintptr_t size);
void recovered_10001ef4(void *pointer);
void * recovered_10001f44(void *pointer,uintptr_t size);
void * recovered_10001f98(void *destination,void *source,ulong count);
void * recovered_1000221c(void *destination,void *source,ulong count);
void * recovered_10002728(void *destination,int value,ulong count);
void recovered_10002928(undefined4 *param_1,uint param_2);
void recovered_10002b24(undefined4 *param_1,uint param_2);
int recovered_10002d20(void *left,void *right,ulong count);
int recovered_10002f18(byte *param_1,byte *param_2);
bool recovered_10002f68(int param_1);
bool recovered_10002f7c(int param_1);
bool recovered_10002f90(uint param_1);
bool recovered_10002fa8(uint param_1);
bool recovered_10002fd4(int param_1);
bool recovered_10002ff4(int param_1);
int recovered_10003008(int param_1);
int recovered_10003018(int param_1);
ulong recovered_10003028(char *text);
int recovered_10003050(char *left,char *right);
int recovered_10003094(byte *param_1,byte *param_2);
void recovered_100030d8(int param_1,int param_2);
undefined8 * recovered_100030f4(undefined8 *param_1);
char * recovered_10003408(char *param_1,char param_2);
int recovered_1000343c(char *param_1,char *param_2);
char * recovered_100034a0(char *param_1,char *param_2);
char * recovered_10003500(char *param_1,char *param_2);
undefined * recovered_10003564(void);
undefined ** recovered_10003574(void);
undefined4 recovered_10003584(undefined4 *param_1);
double recovered_10003634(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10003678(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10003730(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003768(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100037e8(undefined4 param_1,undefined4 param_2);
double recovered_10003818(undefined4 param_1,undefined4 param_2);
double recovered_1000385c(undefined4 param_1,undefined4 param_2);
double recovered_100038a8(undefined4 param_1,undefined4 param_2);
longlong recovered_100039e8(undefined4 param_1,undefined4 param_2);
double recovered_10003a18(undefined4 param_1,undefined4 param_2);
double recovered_10003ad8(undefined4 param_1,undefined4 param_2);
double recovered_10003b88(undefined4 param_1,undefined4 param_2);
long long recovered_10003ba8(double value);
unsigned long long recovered_10003c68(double value);
double recovered_10003cf0(unsigned long long value);
double recovered_10003d38(long long value);
float recovered_10003dc8(float param_1,float param_2);
float recovered_10003e0c(float param_1,float *param_2);
float recovered_10003ec8(float param_1,uint param_2);
float recovered_10003f14(float param_1,float param_2);
float recovered_10003f9c(float param_1);
float recovered_10003fd4(float param_1);
double recovered_10004020(undefined4 param_1,undefined4 param_2);
float recovered_10004074(float param_1);
float recovered_100040d0(float param_1);
float recovered_10004128(float param_1);
longlong recovered_1000426c(undefined4 param_1,undefined4 param_2);
float recovered_100042a0(float param_1);
float recovered_10004368(float param_1);
float recovered_10004420(float param_1);
int recovered_1000443c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10004590(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100046f0(byte *param_1,undefined4 *param_2);
float recovered_100048c4(byte *in_r0,undefined4 *in_r1);
int recovered_100048e0(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10005544(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10005574(int *param_1,int *param_2,int *param_3);
void recovered_10005760(char *param_1,int param_2);
void recovered_10005944(void);
void recovered_10005a04(void);
void recovered_10005ac0(char *param_1,undefined1 *param_2);
void recovered_10005b18(void);
void recovered_10005b64(void);
bool recovered_10005bb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10005d04(void);
void recovered_10005d0c(void);
undefined4 recovered_10005d10(void);
undefined4 * recovered_10005d18(char *param_1,int param_2);
void recovered_1000609c(char *param_1,int param_2,uint *param_3);
undefined4 recovered_1000619c(uint *param_1);
uint recovered_10006294(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_100063c0(int *param_1);
int recovered_100065c0(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10006738(int *param_1,uint param_2,int param_3);
undefined4 recovered_100067e8(int param_1);
undefined4 recovered_10006810(uint *param_1);
undefined1 recovered_100068e8(int param_1);
undefined1 recovered_100068f8(int param_1);
void recovered_10006908(int param_1);
void recovered_10006924(uint param_1,int param_2);
undefined4 recovered_10006948(int param_1);
undefined4 recovered_100069d8(int param_1,int param_2);
undefined4 recovered_10006b4c(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_10006c4c(int param_1,int param_2,int param_3);
undefined4 recovered_10006cd4(void);
void recovered_10006cdc(void);
undefined4 recovered_10006ce0(void);
undefined4 recovered_10006ce8(void);
undefined4 recovered_10006cf0(void);
char * recovered_10006cf8(char *param_1,char param_2,int param_3);
int recovered_10006d2c(char *left,char *right,ulong count);
char * recovered_10006d70(undefined4 param_1);
undefined4 recovered_10006e70(void);
undefined4 recovered_10006e78(void);
void recovered_10006e80(void);
__attribute__((naked,noreturn)) void recovered_10006ea8(void *context);
__attribute__((naked,returns_twice)) int recovered_10006eb8(void *context);
__attribute__((naked,noreturn)) void recovered_10006ed0(void *context,int value);
void recovered_10006ef0(void);
undefined4 recovered_10006f7c(void);
void recovered_10006f84(int param_1);
void recovered_10006f94(int param_1);
void * recovered_10006fcc(ulong param_1);
void * recovered_10006ff8(ulong param_1);
void recovered_10007024(void *param_1);
void recovered_100070ec(void *param_1);
void recovered_100071b4(void *param_1);
void recovered_1000727c(void *param_1);
undefined4 recovered_10007344(void);
uint recovered_1000734c(uint *param_1);
void recovered_1000735c(uint *param_1);
void recovered_1000736c(void);
undefined4 * recovered_10007370(uint param_1);
void recovered_100073f8(int param_1);
int recovered_10007408(int param_1);
void recovered_10007410(void);
void recovered_10007478(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100074a0(undefined4 *param_1);
void recovered_10007534(void);
void recovered_1000756c(undefined4 *param_1);
void recovered_10007590(undefined4 *param_1);
void recovered_100075d8(undefined4 *in_r0);
void recovered_100075e4(void);
void recovered_100075f0(undefined4 *param_1);
void recovered_10007624(undefined4 *param_1);
void recovered_100076e4(undefined4 *in_r0);
undefined4 recovered_100076f0(void);
void recovered_100076f8(void);
int recovered_10007704(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100077f8(void);
undefined4 recovered_100077fc(void);
bool recovered_10007804(int param_1);
bool recovered_10007818(int param_1);
bool recovered_10007858(uint param_1);
bool recovered_10007884(undefined4 param_1,uint param_2);
bool recovered_100078a0(uint param_1);
bool recovered_100078bc(undefined4 param_1,uint param_2);
bool recovered_100078d8(undefined4 param_1,uint param_2);
double recovered_100078f8(double value);
float recovered_100079e0(float value);
long double recovered_10007ae0(long double value);
double recovered_10007bc8(long end,long start);
double recovered_10007be4(undefined4 param_1,undefined4 param_2);
longlong recovered_10007c3c(char *text,char **end,int base);
longlong recovered_10007db4(char *text,char **end,int base);
undefined4 recovered_10007db8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000816c(uint param_1,undefined4 *param_2);
void recovered_10008300(undefined1 *param_1,int *param_2);
void recovered_1000843c(undefined1 *param_1,undefined4 *param_2);
void recovered_100084a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100084d0(undefined1 *param_1,uint param_2);
void recovered_10008500(undefined1 *param_1);
void recovered_10008524(undefined1 *param_1,int *param_2);
void recovered_10008574(undefined1 *param_1,undefined4 *param_2);
void recovered_100085d8(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008600(int *param_1,char *param_2);
longlong recovered_1000880c(void *variable);
int * recovered_10008970(int *param_1,int param_2);
void recovered_10008b28(int param_1);
void recovered_10009e68(int *param_1);
int * recovered_10009ed0(int *param_1);
int * recovered_10009f5c(int *param_1);
int * recovered_10009fb0(int *param_1,int param_2);
void recovered_10009fb4(int *param_1,int *param_2);
undefined4 recovered_1000a01c(undefined4 *param_1);
byte recovered_1000a024(undefined4 *param_1);
void recovered_1000adb0(int param_1);
void recovered_1000add4(int *param_1,uint param_2);
int recovered_1000ae9c(int param_1,uint param_2);
int * recovered_1000aee0(int *param_1);
void recovered_1000af28(undefined4 *param_1);
undefined1 recovered_1000af48(int param_1);
void recovered_1000af50(int param_1,uint param_2,int *param_3);
void recovered_1000b084(int *param_1,uint param_2);
void recovered_1000b1d4(int param_1,uint param_2,void **param_3,int **param_4);
void recovered_1000b384(int param_1,uint param_2);
int recovered_1000b3e0(int param_1);
int recovered_1000b3e8(int param_1);
void recovered_1000b3f0(int *param_1,uint param_2);
int recovered_1000b534(int param_1,uint param_2);
void recovered_1000b560(int param_1,undefined1 *param_2);
void recovered_1000b580(int param_1,undefined1 *param_2);
undefined4 recovered_1000b5a0(int param_1,void **param_2);
undefined4 recovered_1000b704(int param_1,void **param_2);
undefined4 recovered_1000b858(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000b970(int param_1,uint param_2);
void recovered_1000b9c8(int param_1,uint param_2);
void recovered_1000ba48(int param_1,uint param_2);
int recovered_1000ba68(uint param_1);
int recovered_1000bc00(int param_1);
int recovered_1000bc30(int param_1);
int recovered_1000bc38(int param_1);
undefined4 recovered_1000bc40(int param_1);
undefined4 recovered_1000bc48(int param_1);
undefined4 recovered_1000bc50(int param_1);
undefined1 recovered_1000bc58(int param_1);
void recovered_1000bc60(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_1000bc6c(int param_1);
void recovered_1000bc74(int param_1,uint param_2);
void recovered_1000bc80(int *param_1,int param_2,uint param_3);
int recovered_1000be44(int *param_1,undefined1 *param_2);
int * recovered_1000bf94(int *param_1,undefined1 *param_2,uint param_3);
void recovered_1000c120(void);
void recovered_1000c124(void *param_1);
void recovered_1000c128(undefined4 param_1,int param_2,int *param_3);
void recovered_1000c414(void);
void recovered_1000c43c(void);
void recovered_1000c440(void *param_1);
void recovered_1000c444(undefined4 param_1,int param_2,int *param_3);
void recovered_1000c4c0(void);
int * recovered_1000c4e8(int *param_1,uint param_2,uint param_3);
int * recovered_1000c890(int *param_1,uint param_2,uint param_3);
void recovered_1000cde0(void);
void recovered_1000cde4(void *param_1);
void recovered_1000cde8(undefined4 param_1,int param_2,int *param_3);
void recovered_1000cee4(void);
void recovered_1000cf0c(void);
void recovered_1000cf10(void *param_1);
void recovered_1000cf14(undefined4 param_1,int param_2,int *param_3);
void recovered_1000cfd0(void);
void recovered_1000cff8(void);
void recovered_1000cffc(void *param_1);
void recovered_1000d000(undefined4 param_1,int param_2,int *param_3);
void recovered_1000d1cc(void);
void recovered_1000d1f4(void);
void recovered_1000d1f8(void *param_1);
void recovered_1000d1fc(undefined4 param_1,int param_2,int *param_3);
void recovered_1000d370(void);
void recovered_1000d398(void);
void recovered_1000d39c(void *param_1);
void recovered_1000d3a0(undefined4 param_1,undefined1 *param_2,int *param_3);
void recovered_1000d5b8(void);
void recovered_1000d5e0(void);
void recovered_1000d5e4(void *param_1);
void recovered_1000d5e8(undefined4 param_1,int *param_2,int *param_3);
void recovered_1000d734(void);
void recovered_1000d75c(void);
void recovered_1000d760(void *param_1);
void recovered_1000d764(undefined4 param_1,undefined4 *param_2,int *param_3);
void recovered_1000dcb4(void);
void recovered_1000dcdc(void);
void recovered_1000dce0(void *param_1);
void recovered_1000dce4(undefined4 param_1,int param_2,int *param_3);
void recovered_1000dd68(void);
void recovered_1000dd90(void);
void recovered_1000dd94(void *param_1);
void recovered_1000dd98(undefined4 param_1,int param_2,int *param_3);
void recovered_1000de30(void);
void recovered_1000de58(void);
void recovered_1000de5c(void *param_1);
void recovered_1000de60(undefined4 param_1,int param_2,int *param_3);
void recovered_1000e108(void);
void recovered_1000e130(int *param_1,int param_2,uint param_3);
void recovered_1000e388(void);
void recovered_1000e38c(void *param_1);
void recovered_1000e390(undefined4 param_1,int param_2,int *param_3);
void recovered_1000e5bc(void);
void recovered_1000e5e4(void);
void recovered_1000e5e8(void *param_1);
void recovered_1000e5ec(undefined4 param_1,int param_2,int *param_3);
void recovered_1000e6bc(void);
void recovered_1000e6e4(void);
void recovered_1000e6e8(void *param_1);
void recovered_1000e6ec(undefined4 param_1,int param_2,int *param_3);
void recovered_1000e7f8(void);
void recovered_1000e820(void);
void recovered_1000e824(void *param_1);
void recovered_1000e828(undefined4 param_1,int param_2,int *param_3);
void recovered_1000e8f8(void);
void recovered_1000e920(void);
void recovered_1000e924(void *param_1);
void recovered_1000e928(undefined4 param_1,int param_2,int *param_3);
void recovered_1000ea34(void);
void recovered_1000ea5c(void);
void recovered_1000ea60(void *param_1);
void recovered_1000ea64(undefined4 param_1,int param_2,int *param_3);
void recovered_1000eb38(void);
void recovered_1000eb60(void);
void recovered_1000eb64(void *param_1);
void recovered_1000eb68(undefined4 param_1,int param_2,int *param_3);
void recovered_1000ec78(void);
void recovered_1000eca0(void);
void recovered_1000eca4(void *param_1);
void recovered_1000eca8(undefined4 param_1,int param_2,int *param_3);
void recovered_1000ed90(void);
void recovered_1000edb8(void);
void recovered_1000edbc(void *param_1);
void recovered_1000edc0(undefined4 param_1,int param_2,int *param_3);
void recovered_1000eee8(void);
void recovered_1000ef10(void);
void recovered_1000ef14(void *param_1);
void recovered_1000ef18(undefined4 param_1,int param_2,int *param_3);
void recovered_1000f064(void);
int recovered_1000f08c(int *param_1,undefined1 *param_2);
void recovered_1000f1e8(int *param_1,undefined1 *param_2);

/* Original analysis identifiers for manual recovery units. */
