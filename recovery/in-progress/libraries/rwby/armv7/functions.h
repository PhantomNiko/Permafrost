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
#define pf_varargs_10005b54__4_ recovered_10005b54
extern uint8_t pf_module_state[];
uint recovered_10001880(uint param_1,uint param_2);
uint recovered_100018d0(uint param_1,uint param_2);
uint recovered_10001908(uint param_1,uint param_2);
uint recovered_10001978(uint param_1,uint param_2);
ulonglong recovered_100019e4(float param_1);
longlong recovered_100019f4(float param_1);
float recovered_10001a04(undefined4 param_1,undefined4 param_2);
float recovered_10001a20(undefined4 param_1,undefined4 param_2);
void recovered_10001a40(void);
void recovered_10001a58(void);
int recovered_10001e50(void);
void recovered_10001e94(void);
int recovered_10001ee4(void);
void recovered_10001f20(void);
uint * recovered_10001f64(int param_1);
longlong recovered_10002070(uint param_1,int param_2,uint param_3);
ulonglong recovered_100020c4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002118(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002164(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002248(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100022c8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100023e0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000249c(void);
int recovered_100024a4(int param_1);
void * recovered_100024b0(uintptr_t size);
void recovered_10002504(void *pointer);
void * recovered_10002554(void *pointer,uintptr_t size);
void * recovered_100025a8(void *destination,void *source,ulong count);
void * recovered_1000282c(void *destination,void *source,ulong count);
void * recovered_10002d38(void *destination,int value,ulong count);
void recovered_10002f38(undefined4 *param_1,uint param_2);
void recovered_10003134(undefined4 *param_1,uint param_2);
int recovered_10003330(void *left,void *right,ulong count);
int recovered_10003528(byte *param_1,byte *param_2);
bool recovered_10003578(int param_1);
bool recovered_1000358c(int param_1);
bool recovered_100035a0(uint param_1);
bool recovered_100035b8(uint param_1);
bool recovered_100035e4(int param_1);
bool recovered_10003604(int param_1);
int recovered_10003618(int param_1);
int recovered_10003628(int param_1);
ulong recovered_10003638(char *text);
int recovered_10003660(char *left,char *right);
int recovered_100036a4(byte *param_1,byte *param_2);
void recovered_100036e8(int param_1,int param_2);
undefined8 * recovered_10003704(undefined8 *param_1);
char * recovered_10003a18(char *param_1,char param_2);
int recovered_10003a4c(char *param_1,char *param_2);
char * recovered_10003ab0(char *param_1,char *param_2);
char * recovered_10003b10(char *param_1,char *param_2);
undefined * recovered_10003b74(void);
undefined ** recovered_10003b84(void);
undefined4 recovered_10003b94(undefined4 *param_1);
double recovered_10003c44(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10003c88(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10003d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003d78(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003df8(undefined4 param_1,undefined4 param_2);
double recovered_10003e28(undefined4 param_1,undefined4 param_2);
double recovered_10003e6c(undefined4 param_1,undefined4 param_2);
double recovered_10003eb8(undefined4 param_1,undefined4 param_2);
longlong recovered_10003ff8(undefined4 param_1,undefined4 param_2);
double recovered_10004028(undefined4 param_1,undefined4 param_2);
double recovered_100040e8(undefined4 param_1,undefined4 param_2);
double recovered_10004198(undefined4 param_1,undefined4 param_2);
long long recovered_100041b8(double value);
unsigned long long recovered_10004278(double value);
double recovered_10004300(unsigned long long value);
double recovered_10004348(long long value);
float recovered_100043d8(float param_1,float param_2);
float recovered_1000441c(float param_1,float *param_2);
float recovered_100044d8(float param_1,uint param_2);
float recovered_10004524(float param_1,float param_2);
float recovered_100045ac(float param_1);
float recovered_100045e4(float param_1);
double recovered_10004630(undefined4 param_1,undefined4 param_2);
float recovered_10004684(float param_1);
float recovered_100046e0(float param_1);
float recovered_10004738(float param_1);
longlong recovered_1000487c(undefined4 param_1,undefined4 param_2);
float recovered_100048b0(float param_1);
float recovered_10004978(float param_1);
float recovered_10004a30(float param_1);
int recovered_10004a4c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10004ba0(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10004d00(byte *param_1,undefined4 *param_2);
float recovered_10004ed4(byte *in_r0,undefined4 *in_r1);
int recovered_10004ef0(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10005b54(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10005b84(int *param_1,int *param_2,int *param_3);
void recovered_10005d70(char *param_1,int param_2);
void recovered_10005f54(void);
void recovered_10006014(void);
void recovered_100060d0(char *param_1,undefined1 *param_2);
void recovered_10006128(void);
void recovered_10006174(void);
bool recovered_100061c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006314(void);
void recovered_1000631c(void);
undefined4 recovered_10006320(void);
undefined4 * recovered_10006328(char *param_1,int param_2);
void recovered_100066ac(char *param_1,int param_2,uint *param_3);
undefined4 recovered_100067ac(uint *param_1);
uint recovered_100068a4(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_100069d0(int *param_1);
int recovered_10006bd0(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10006d48(int *param_1,uint param_2,int param_3);
undefined4 recovered_10006df8(int param_1);
undefined4 recovered_10006e20(uint *param_1);
undefined1 recovered_10006ef8(int param_1);
undefined1 recovered_10006f08(int param_1);
void recovered_10006f18(int param_1);
void recovered_10006f34(uint param_1,int param_2);
undefined4 recovered_10006f58(int param_1);
undefined4 recovered_10006fe8(int param_1,int param_2);
undefined4 recovered_1000715c(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_1000725c(int param_1,int param_2,int param_3);
undefined4 recovered_100072e4(void);
void recovered_100072ec(void);
undefined4 recovered_100072f0(void);
undefined4 recovered_100072f8(void);
undefined4 recovered_10007300(void);
char * recovered_10007308(char *param_1,char param_2,int param_3);
int recovered_1000733c(char *left,char *right,ulong count);
char * recovered_10007380(undefined4 param_1);
undefined4 recovered_10007480(void);
undefined4 recovered_10007488(void);
void recovered_10007490(void);
__attribute__((naked,noreturn)) void recovered_100074b8(void *context);
__attribute__((naked,returns_twice)) int recovered_100074c8(void *context);
__attribute__((naked,noreturn)) void recovered_100074e0(void *context,int value);
void recovered_10007500(void);
undefined4 recovered_1000758c(void);
void recovered_10007594(int param_1);
void recovered_100075a4(int param_1);
void * recovered_100075dc(ulong param_1);
void * recovered_10007608(ulong param_1);
void recovered_10007634(void *param_1);
void recovered_100076fc(void *param_1);
void recovered_100077c4(void *param_1);
void recovered_1000788c(void *param_1);
undefined4 recovered_10007954(void);
uint recovered_1000795c(uint *param_1);
void recovered_1000796c(uint *param_1);
void recovered_1000797c(void);
undefined4 * recovered_10007980(uint param_1);
void recovered_10007a08(int param_1);
int recovered_10007a18(int param_1);
void recovered_10007a20(void);
void recovered_10007a88(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007ab0(undefined4 *param_1);
void recovered_10007b44(void);
void recovered_10007b7c(undefined4 *param_1);
void recovered_10007ba0(undefined4 *param_1);
void recovered_10007be8(undefined4 *in_r0);
void recovered_10007bf4(void);
void recovered_10007c00(undefined4 *param_1);
void recovered_10007c34(undefined4 *param_1);
void recovered_10007cf4(undefined4 *in_r0);
undefined4 recovered_10007d00(void);
void recovered_10007d08(void);
int recovered_10007d14(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10007e08(void);
undefined4 recovered_10007e0c(void);
bool recovered_10007e14(int param_1);
bool recovered_10007e28(int param_1);
bool recovered_10007e68(uint param_1);
bool recovered_10007e94(undefined4 param_1,uint param_2);
bool recovered_10007eb0(uint param_1);
bool recovered_10007ecc(undefined4 param_1,uint param_2);
bool recovered_10007ee8(undefined4 param_1,uint param_2);
double recovered_10007f08(double value);
float recovered_10007ff0(float value);
long double recovered_100080f0(long double value);
double recovered_100081d8(long end,long start);
double recovered_100081f4(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000824c(char *text,char **end,int base);
ulonglong recovered_100083c4(char *text,char **end,int base);
undefined4 recovered_100083c8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000877c(uint param_1,undefined4 *param_2);
void recovered_10008910(undefined4 *param_1);
void recovered_10008934(int param_1);
void recovered_10008958(undefined1 *param_1);
void recovered_10008968(undefined1 *param_1);
void recovered_10008978(undefined1 *param_1);
void recovered_10008988(undefined1 *param_1);
void recovered_10008998(undefined1 *param_1,int param_2);
void recovered_100089b4(undefined1 *param_1,int param_2);
void recovered_100089d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_100089e8(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008a00(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008a18(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008a30(undefined1 *param_1,undefined1 param_2);
void recovered_10008a44(undefined1 *param_1,undefined1 param_2);
undefined1 * recovered_10008a58(undefined1 *param_1,undefined1 *param_2);
int * recovered_10008aec(int *param_1,int param_2);
undefined1 * recovered_10008b34(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_10008bc8(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10008c1c(undefined1 *param_1,undefined4 *param_2);
void recovered_10008c70(undefined1 *param_1,undefined4 *param_2);
void recovered_10008ca8(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10008ce0(undefined1 *param_1,int *param_2);
void recovered_10008d1c(int *param_1,int *param_2);
undefined1 * recovered_10008f24(undefined1 *param_1,int *in_r1);
undefined1 * recovered_10008f60(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10008ff4(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_10009088(undefined1 *param_1,int *param_2);
undefined1 * recovered_100091d4(undefined1 *param_1,int *param_2);
undefined1 * recovered_10009320(undefined1 *param_1,undefined4 *param_2);
undefined1 * recovered_100093fc(undefined1 *param_1,undefined4 *param_2);
void * recovered_100094d8(void *output);
int * recovered_10009644(int *param_1);
void * recovered_10009770(void *output);
int * recovered_10009928(int *param_1);
char * recovered_10009a88(char *param_1);
void * recovered_10009ac4(void *output,void *argument1);
void recovered_1000a3b4(int *param_1,undefined4 *param_2,int param_3);
void recovered_1000a500(int *param_1,int param_2,undefined4 *param_3);
longlong recovered_1000a654(void *value);
int * recovered_1000a7e0(int *param_1,int param_2);
int * recovered_1000a83c(int *param_1);
longlong recovered_1000a86c(char *param_1);
char recovered_1000a9f8(char *param_1);
char * recovered_1000ab30(char *param_1);
undefined4 recovered_1000ac64(char *param_1);
undefined4 recovered_1000ad9c(char *param_1);
undefined4 recovered_1000aed4(char *param_1);
undefined4 recovered_1000b00c(char *param_1);
undefined4 * recovered_1000b144(undefined4 *param_1);
undefined4 * recovered_1000b248(undefined4 *param_1);
undefined4 * recovered_1000b34c(undefined4 *param_1);
undefined4 * recovered_1000b380(undefined4 *param_1);
void recovered_1000b3b4(int *param_1,int *param_2);
void recovered_1000b3d4(int *param_1,int *param_2);
void recovered_1000b3f4(int *param_1,int *param_2);
void recovered_1000b44c(undefined4 *param_1,int *param_2,undefined4 *param_3);
void recovered_1000b568(int *param_1,int *param_2,undefined4 *param_3);
void recovered_1000ba30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_1000bad4(int *param_1,undefined4 *param_2,undefined1 *param_3);
undefined4 recovered_1000badc(int param_1,undefined4 *param_2,undefined1 *param_3);
void * recovered_1000bc78(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_1000bc90(void *output,void *argument1,void *argument2,void *argument3);
void recovered_1000d068(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 param_5);
undefined4
recovered_1000d078(void *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5);
void * recovered_1000d4cc(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_1000d4e0(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_1000d6e0(void *output,void *argument1,void *argument2);
void * recovered_1000d6f4(void *output,void *argument1,void *argument2);
void * recovered_1000da8c(void *output,void *argument1,void *argument2);
void * recovered_1000daa0(void *output,void *argument1,void *argument2);
void * recovered_1000de9c(void *output,void *argument1,void *argument2);
void * recovered_1000deb0(void *output,void *argument1,void *argument2);
void * recovered_1000e32c(void *output,void *argument1,void *argument2);
void * recovered_1000e340(void *output,void *argument1);
void recovered_1000e350(undefined4 *param_1,int *param_2,undefined4 *param_3);
void * recovered_1000e46c(void *output,void *argument1,void *argument2,void *argument3);
void * recovered_1000e480(void *output,void *argument1,void *argument2);
void * recovered_1000e494(void *output,void *argument1,void *argument2);
void * recovered_1000e4a8(void *output,void *argument1,void *argument2);
void * recovered_1000e4bc(void *output,void *argument1,void *argument2);
void recovered_1000e4d0(int *param_1,int param_2,uint param_3);
int * recovered_1000e694(int *param_1);
int recovered_1000e7d8(int param_1);
void recovered_1000e8bc(int param_1,int *param_2);
void recovered_1000ea10(int param_1,int *param_2);
int * recovered_1000eb80(int *param_1);
void recovered_1000eca8(int *param_1,undefined4 param_2,undefined4 param_3);
void recovered_1000f35c(int *param_1,undefined1 param_2);
void recovered_1000f46c(int *param_1,int param_2,uint param_3);
void recovered_1000f6c4(int *param_1);
undefined1 * recovered_1000f6f8(int param_1);
undefined4 recovered_1000f718(int param_1,undefined4 *param_2);
void recovered_1000f960(int param_1,uint param_2,undefined1 *param_3);
undefined4 * recovered_1000fc58(int *param_1,undefined4 *param_2);
bool recovered_10010168(undefined4 *param_1,char *param_2);
void recovered_100101fc(void);
void recovered_10010200(void *param_1);
void recovered_10010204(int param_1);
int * recovered_10010364(int *param_1);
void recovered_10010488(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
int recovered_10010768(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100108a0(int *param_1,uint param_2);
void recovered_10010b34(int *param_1,uint param_2);
void recovered_10010d7c(int *param_1,uint param_2);
void recovered_10011014(int *param_1,uint param_2);
void recovered_10011294(undefined4 param_1,int *param_2,int *param_3);
undefined4 recovered_10011350(int param_1,undefined4 *param_2);
void recovered_10011458(int *param_1,int *param_2);
int * recovered_1001417c(int *param_1);
undefined4 * recovered_100141d0(undefined4 *param_1);
int * recovered_1001434c(int *param_1);
void recovered_10014510(int *param_1,undefined1 *param_2);
void recovered_10014658(undefined4 *param_1);
void recovered_1001474c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,
                       undefined4 *param_5);
void recovered_10014990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
int * recovered_10014abc(int *param_1,undefined4 *param_2);
int recovered_10014b18(int param_1,uint param_2,uint param_3);
int * recovered_10014df4(int *param_1);
int * recovered_10014e58(int *param_1);
undefined4 * recovered_10014eac(undefined4 *param_1);
void recovered_1001500c(int *param_1,uint param_2);
int * recovered_10015244(int *param_1);
int * recovered_10015290(int *param_1);
int recovered_100152f4(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10015460(undefined1 **param_1,int *param_2);
void recovered_10017918(int param_1);
void recovered_10018408(undefined1 **param_1,int *param_2);
void recovered_10018da4(int *param_1,int param_2);
undefined1 * recovered_1001900c(undefined1 *param_1,undefined1 *param_2);
int recovered_1001906c(int *param_1,undefined4 *param_2);
int * recovered_10019194(int *param_1,int *param_2);
undefined4 * recovered_100192c8(undefined4 *param_1,undefined4 *param_2);
int * recovered_10019b98(int *param_1,int *param_2);
int * recovered_10019f20(int *param_1,int *param_2);
void recovered_1001a070(int *param_1,int param_2);
void recovered_1001a2d8(int *param_1,int param_2);
void recovered_1001a570(int *param_1,int param_2);
void recovered_1001aa0c(int *param_1,int param_2);
void recovered_1001aca4(int *param_1,int param_2);
void recovered_1001b090(int *param_1,int param_2);
double recovered_1001d0b0(byte *param_1,int param_2,int *param_3);
void recovered_1001d400(undefined4 *param_1,char *param_2,char *param_3,ulonglong *param_4,
                       uint param_5);
void recovered_1001d638(int param_1,undefined4 *param_2);
undefined4
recovered_1001d7a0(int param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5);
int * recovered_1001e108(int *param_1,int *param_2);
undefined4 recovered_1001e19c(int param_1,int param_2,int param_3,int param_4,char *param_5);
void recovered_1001e2fc(int *param_1,undefined8 *param_2);
void recovered_1001e458(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
int recovered_1001e738(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_1001e870(int *param_1,uint param_2);
int recovered_1001eb04(int param_1);
int * recovered_1001ebfc(int *param_1);
void recovered_1001ecf4(void *param_1);
int recovered_1001edf0(int param_1);
void recovered_1001eee8(void *param_1);
void recovered_1001efe4(int ****param_1,int *param_2);
void recovered_100202e8(undefined1 *param_1,int param_2,int *param_3,uint param_4,
                       undefined1 **param_5,int param_6);
void recovered_10025178(void);
void recovered_1002517c(void *param_1);
void recovered_10025180(int param_1);
void recovered_10025318(undefined4 *param_1,int *param_2,int *param_3);
void recovered_10025518(int *param_1,undefined1 *param_2);
void recovered_10025578(int *param_1,undefined4 *param_2);
void recovered_10025684(undefined4 *param_1,uint param_2,undefined4 *param_3);
char * recovered_10025888(int param_1,uint param_2,uint param_3);
void recovered_10025a44(undefined1 *param_1,int *param_2,undefined4 *param_3,uint param_4);
void recovered_10025c90(undefined1 *param_1,undefined1 *param_2);
void recovered_10025d9c(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 *param_4,
                       uint param_5);
void recovered_1002634c(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 *param_4,
                       uint param_5);
void recovered_10026518(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 *param_4,
                       uint param_5);
void recovered_100266e8(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 *param_4,
                       uint param_5);
void recovered_100268f8(undefined1 *param_1,byte *param_2,byte *param_3,undefined4 *param_4,
                       uint param_5);
void recovered_10026b68(undefined1 *param_1,byte *param_2,undefined4 *param_3,uint param_4);
uint recovered_10026d00(byte *param_1,byte *param_2);
void recovered_10027130(undefined1 *param_1,byte *param_2,byte *param_3,int param_4,
                       undefined4 *param_5,uint param_6);
void recovered_10027578(char *param_1,int param_2,int param_3,char *param_4,char *param_5,
                       uint param_6,uint param_7);
void recovered_10028c60(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
undefined4 * recovered_10028e08(int *param_1,char *param_2);
void recovered_1002905c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int recovered_1002919c(int *param_1,int param_2,int param_3,int param_4);
void recovered_100294f8(int param_1,uint param_2,uint param_3,uint param_4);
int recovered_10029770(int *param_1,undefined4 *param_2);
void recovered_1002984c(undefined1 *param_1,int param_2,int *param_3,undefined4 *param_4,int param_5
                       ,uint param_6);
void recovered_10029dc8(undefined4 *param_1,uint param_2,uint param_3);
void recovered_1002a7fc(undefined4 *param_1,uint param_2);
void recovered_1002a934(undefined1 *param_1,int param_2,int *param_3,int param_4,uint param_5,
                       int param_6,uint param_7);
undefined4 * recovered_1002bc88(int *param_1,undefined4 *param_2);
void recovered_1002c04c(undefined4 *param_1,undefined1 *param_2);
int recovered_1002c4c8(int *param_1,undefined4 *param_2,undefined1 *param_3);
int recovered_1002c614(int param_1);
void recovered_1002c914(void);
void recovered_1002c918(void *param_1);
void recovered_1002c91c(int param_1);
int * recovered_1002ca6c(int *param_1,int *param_2);
int * recovered_1002cdf4(int *param_1,int *param_2);
void recovered_1002d014(void);
void recovered_1002d018(void *param_1);
void recovered_1002d01c(int param_1);
undefined4 * recovered_1002d198(undefined4 *param_1);
void recovered_1002d3e8(int param_1);
int * recovered_10030c14(int *param_1);
void recovered_10030c78(void);
void recovered_10030c7c(void *param_1);
void recovered_10030c80(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10030c94(void);
void recovered_10030cbc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10030ec0(void);
void recovered_10030ec4(void *param_1);
void recovered_10030ec8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10031024(void);
void recovered_1003104c(void);
void recovered_10031050(void *param_1);
void recovered_10031054(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_10031200(void);
void recovered_10031228(int param_1,int param_2,uint param_3,uint param_4);
void recovered_100314a0(void);
void recovered_100314a4(void *param_1);
void recovered_100314a8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10031540(void);
void recovered_10031568(void);
void recovered_1003156c(void *param_1);
void recovered_10031570(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_100315e4(void);
void recovered_1003160c(void);
void recovered_10031610(void *param_1);
void recovered_10031614(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_100316e4(void);
void recovered_1003170c(void);
void recovered_10031710(void *param_1);
void recovered_10031714(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10031728(void);
void recovered_10031750(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
ulonglong recovered_10031a18(int param_1,int *param_2,uint param_3);
int recovered_10031c3c(int param_1,int *param_2,uint param_3);
void recovered_10031eb4(void);
void recovered_10031eb8(void *param_1);
void recovered_10031ebc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_10031fc8(void);
void recovered_10031ff0(void);
void recovered_10031ff4(void *param_1);
void recovered_10031ff8(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_1003200c(void);
void recovered_10032038(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_10032440(undefined4 param_1,uint param_2,undefined1 *param_3);
void recovered_10032508(void);
void recovered_1003250c(void *param_1);
void recovered_10032510(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10032548(void);
void recovered_10032570(void);
void recovered_10032574(void *param_1);
void recovered_10032578(undefined4 *in_r3);
void recovered_1003258c(void);
void recovered_100325b4(undefined4 *in_r3);
void recovered_100327ac(void);
void recovered_100327b0(void *param_1);
void recovered_100327b4(undefined1 *param_1,int param_2,undefined4 param_3,char *param_4);
void recovered_100327c8(int param_1);
void recovered_100327fc(undefined1 *param_1,int *param_2,undefined4 param_3,char *param_4);
void recovered_100335e0(void);
void recovered_100335e4(void *param_1);
void recovered_100335e8(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4);
void recovered_100335fc(void);
void recovered_10033624(undefined1 *param_1,undefined4 param_2,undefined4 *param_3,int param_4);
char * recovered_10033b70(int param_1,int *in_r1,uint in_r2);
void recovered_10033d80(void);
void recovered_10033d84(void *param_1);
void recovered_10033d88(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10033d9c(void);
void recovered_10033dc4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10034380(void);
void recovered_10034384(void *param_1);
void recovered_10034388(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003439c(void);
void recovered_100343c4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_100347dc(int *param_1,uint param_2,undefined1 *param_3);
void recovered_10034984(void);
void recovered_10034988(void *param_1);
void recovered_1003498c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100349c0(void);
void recovered_100349e8(void);
void recovered_100349ec(void *param_1);
void recovered_100349f0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10034a04(void);
void recovered_10034a2c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
undefined4 recovered_10034b4c(int param_1,int *param_2);
void recovered_10034d64(void);
void recovered_10034d68(void *param_1);
void recovered_10034d6c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10034d80(void);
void recovered_10034da8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10035334(void);
void recovered_10035338(void *param_1);
void recovered_1003533c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100354b0(void);
int recovered_100354d8(int *param_1,int param_2,int param_3);
void recovered_100357dc(void);
void recovered_100357e0(void *param_1);
void recovered_100357e4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10035870(void);
void recovered_10035898(void);
void recovered_1003589c(void *param_1);
void recovered_100358a0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_100358b4(void);
void recovered_100358dc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10035e98(void);
void recovered_10035e9c(void *param_1);
void recovered_10035ea0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10035eb4(void);
void recovered_10035edc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003626c(undefined1 *param_1,undefined1 *param_2);
void recovered_10036634(void);
void recovered_10036638(void *param_1);
void recovered_1003663c(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10036650(void);
void recovered_10036678(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_10036a38(void);
void recovered_10036a3c(void *param_1);
void recovered_10036a40(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10036a54(void);
void recovered_10036a7c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int recovered_10036ee0(int *param_1,int param_2);
int recovered_10037074(int *param_1,int param_2,int param_3);
void recovered_100373b0(void);
void recovered_100373b4(void *param_1);
void recovered_100373b8(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_100373cc(void);
void recovered_100373f4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10037898(void);
void recovered_1003789c(void *param_1);
void recovered_100378a0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_100378b4(void);
void recovered_100378dc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10037ae8(void);
void recovered_10037aec(void *param_1);
void recovered_10037af0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_10037b04(void);
void recovered_10037b2c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_10037d6c(void);
void recovered_10037d70(void *param_1);
void recovered_10037d74(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_10037d88(void);
void recovered_10037db0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void recovered_100380a8(void);
void recovered_100380ac(void *param_1);
void recovered_100380b0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_100380c4(void);
void recovered_100380ec(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_100385c4(char *param_1,char *param_2);
uint recovered_10038a20(undefined4 param_1,char *param_2,char *param_3);
void recovered_10038c44(void);
void recovered_10038c48(void *param_1);
void recovered_10038c4c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_10038c60(void);
void recovered_10038c88(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_10039048(void);
void recovered_1003904c(void *param_1);
void recovered_10039050(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10039064(void);
void recovered_1003908c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10039360(void);
void recovered_10039364(void *param_1);
void recovered_10039368(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_1003937c(void);
void recovered_100393a4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_100395f0(void);
void recovered_100395f4(void *param_1);
void recovered_100395f8(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_1003960c(void);
void recovered_10039634(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void recovered_10039ba8(void);
void recovered_10039bac(void *param_1);
void recovered_10039bb0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10039bc4(void);
void recovered_10039bec(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int recovered_10039e8c(int *param_1,int param_2,undefined1 *param_3);
void recovered_1003a13c(void);
void recovered_1003a140(void *param_1);
void recovered_1003a144(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_1003a158(void);
void recovered_1003a180(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_1003a428(void);
void recovered_1003a42c(void *param_1);
void recovered_1003a430(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_1003a5b0(void);
void recovered_1003a5d8(byte *param_1,byte *param_2);
uint recovered_1003aa34(undefined4 param_1,byte *param_2,byte *param_3);
void recovered_1003ac10(void);
void recovered_1003ac14(void *param_1);
void recovered_1003ac18(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void recovered_1003ac2c(void);
void recovered_1003ac54(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined4 *param_4);
void recovered_1003b140(void);
void recovered_1003b144(void *param_1);
void recovered_1003b148(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003b248(void);
undefined4 recovered_1003b270(int param_1,int *in_r1,uint in_r2);
void recovered_1003b490(void);
void recovered_1003b494(void *param_1);
void recovered_1003b498(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003b598(void);
void recovered_1003b5c0(void);
void recovered_1003b5c4(void *param_1);
void recovered_1003b5c8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003b6c8(void);
void recovered_1003b6f0(void);
void recovered_1003b6f4(void *param_1);
void recovered_1003b6f8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_1003b838(void);
void recovered_1003b860(void);
void recovered_1003b864(void *param_1);
void recovered_1003b868(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_1003b9a8(void);
void recovered_1003b9d0(void);
void recovered_1003b9d4(void *param_1);
void recovered_1003b9d8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003ba38(void);
void recovered_1003ba60(void);
void recovered_1003ba64(void *param_1);
void recovered_1003ba68(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bac8(void);
void recovered_1003baf0(void);
void recovered_1003baf4(void *param_1);
void recovered_1003baf8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bb60(void);
void recovered_1003bb88(void);
void recovered_1003bb8c(void *param_1);
void recovered_1003bb90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bbf0(void);
void recovered_1003bc18(void);
void recovered_1003bc1c(void *param_1);
void recovered_1003bc20(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bc80(void);
void recovered_1003bca8(void);
void recovered_1003bcac(void *param_1);
void recovered_1003bcb0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bdd8(void);
void recovered_1003be00(void);
void recovered_1003be04(void *param_1);
void recovered_1003be08(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003bf10(void);
void recovered_1003bf38(void);
void recovered_1003bf3c(void *param_1);
void recovered_1003bf40(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003c040(void);
void recovered_1003c068(void);
void recovered_1003c06c(void *param_1);
void recovered_1003c070(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003c084(void);
void recovered_1003c0b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003c310(void);
void recovered_1003c314(void *param_1);
void recovered_1003c318(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003c3f4(int param_1);
void recovered_1003c428(void);
void recovered_1003c42c(void *param_1);
void recovered_1003c430(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_1003c444(int param_1);
void recovered_1003c478(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4);
undefined8 recovered_1003c6c8(uint *param_1);
void recovered_1003c828(void);
void recovered_1003c82c(void *param_1);
void recovered_1003c830(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003c844(void);
void recovered_1003c86c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003ca60(void);
void recovered_1003ca64(void *param_1);
void recovered_1003ca68(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003ca7c(void);
void recovered_1003caa4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003cc98(void);
void recovered_1003cc9c(void *param_1);
void recovered_1003cca0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_1003ccb4(void);
void recovered_1003ccdc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_1003cec4(void);
void recovered_1003cec8(void *param_1);
void recovered_1003cecc(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003cee0(void);
void recovered_1003cf08(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003d9cc(int *param_1,undefined4 *param_2);
void recovered_1003dd2c(void);
void recovered_1003dd30(void *param_1);
void recovered_1003dd34(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003dd48(void);
void recovered_1003dd70(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003e64c(void);
void recovered_1003e650(void *param_1);
void recovered_1003e654(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003e668(void);
void recovered_1003e690(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_1003ec90(void);
void recovered_1003ec94(void *param_1);
void recovered_1003ec98(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_1003ecac(void);
void recovered_1003ecd4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_1003f0ec(void);
void recovered_1003f0f0(void *param_1);
void recovered_1003f0f4(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_1003f108(void);
void recovered_1003f130(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_1003f458(void);
void recovered_1003f45c(void *param_1);
void recovered_1003f460(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003f474(void);
void recovered_1003f49c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int recovered_1003fc18(int param_1,uint param_2,uint param_3);
void recovered_1003feb4(void);
void recovered_1003feb8(void *param_1);
void recovered_1003febc(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_1003fed0(void);
void recovered_1003fef8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_100401e8(void);
void recovered_100401ec(void *param_1);
void recovered_100401f0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10040204(void);
void recovered_1004022c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10040b90(void);
void recovered_10040b94(void *param_1);
void recovered_10040b98(undefined1 *param_1,int param_2,undefined4 param_3,int param_4);
void recovered_10040bac(void);
void recovered_10040bd4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void recovered_100415a0(void);
void recovered_100415a4(void *param_1);
void recovered_100415a8(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_100415bc(void);
void recovered_100415e4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041734(void);
void recovered_10041738(void *param_1);
void recovered_1004173c(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10041750(void);
void recovered_10041778(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041880(void);
void recovered_10041884(void *param_1);
void recovered_10041888(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041994(void);
void recovered_100419bc(void);
void recovered_100419c0(void *param_1);
void recovered_100419c4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041b04(void);
void recovered_10041b2c(void);
void recovered_10041b30(void *param_1);
void recovered_10041b34(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041c38(void);
void recovered_10041c60(void);
void recovered_10041c64(void *param_1);
void recovered_10041c68(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10041c7c(void);
void recovered_10041ca4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041dc4(void);
void recovered_10041dc8(void *param_1);
void recovered_10041dcc(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10041de0(void);
void recovered_10041e08(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10041f48(void);
void recovered_10041f4c(void *param_1);
void recovered_10041f50(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_100420a0(void);
void recovered_100420c8(void);
void recovered_100420cc(void *param_1);
void recovered_100420d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10042290(void);
void recovered_100422b8(void);
void recovered_100422bc(void *param_1);
void recovered_100422c0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_100422d4(void);
void recovered_100422fc(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_100426f8(void);
void recovered_100426fc(void *param_1);
void recovered_10042700(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10042714(void);
void recovered_1004273c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void recovered_10042ba8(void);
void recovered_10042bac(void *param_1);
void recovered_10042bb0(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4);
void recovered_10042bc4(void);
void recovered_10042bec(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * recovered_10043058(int *param_1);
void recovered_1004328c(void);

/* Original analysis identifiers for manual recovery units. */
