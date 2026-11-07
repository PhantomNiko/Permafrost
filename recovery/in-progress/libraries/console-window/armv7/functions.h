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
#define pf_varargs_10006034__4_ recovered_10006034
extern uint8_t pf_module_state[];
uint recovered_10001d60(uint param_1,uint param_2);
uint recovered_10001db0(uint param_1,uint param_2);
uint recovered_10001de8(uint param_1,uint param_2);
uint recovered_10001e58(uint param_1,uint param_2);
ulonglong recovered_10001ec4(float param_1);
longlong recovered_10001ed4(float param_1);
float recovered_10001ee4(undefined4 param_1,undefined4 param_2);
float recovered_10001f00(undefined4 param_1,undefined4 param_2);
void recovered_10001f20(void);
void recovered_10001f38(void);
int recovered_10002330(void);
void recovered_10002374(void);
int recovered_100023c4(void);
void recovered_10002400(void);
uint * recovered_10002444(int param_1);
longlong recovered_10002550(uint param_1,int param_2,uint param_3);
ulonglong recovered_100025a4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_100025f8(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002644(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002728(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100027a8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100028c0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000297c(void);
int recovered_10002984(int param_1);
void * recovered_10002990(uintptr_t size);
void recovered_100029e4(void *pointer);
void * recovered_10002a34(void *pointer,uintptr_t size);
void * recovered_10002a88(void *destination,void *source,ulong count);
void * recovered_10002d0c(void *destination,void *source,ulong count);
void * recovered_10003218(void *destination,int value,ulong count);
void recovered_10003418(undefined4 *param_1,uint param_2);
void recovered_10003614(undefined4 *param_1,uint param_2);
int recovered_10003810(void *left,void *right,ulong count);
int recovered_10003a08(byte *param_1,byte *param_2);
bool recovered_10003a58(int param_1);
bool recovered_10003a6c(int param_1);
bool recovered_10003a80(uint param_1);
bool recovered_10003a98(uint param_1);
bool recovered_10003ac4(int param_1);
bool recovered_10003ae4(int param_1);
int recovered_10003af8(int param_1);
int recovered_10003b08(int param_1);
ulong recovered_10003b18(char *text);
int recovered_10003b40(char *left,char *right);
int recovered_10003b84(byte *param_1,byte *param_2);
void recovered_10003bc8(int param_1,int param_2);
undefined8 * recovered_10003be4(undefined8 *param_1);
char * recovered_10003ef8(char *param_1,char param_2);
int recovered_10003f2c(char *param_1,char *param_2);
char * recovered_10003f90(char *param_1,char *param_2);
char * recovered_10003ff0(char *param_1,char *param_2);
undefined * recovered_10004054(void);
undefined ** recovered_10004064(void);
undefined4 recovered_10004074(undefined4 *param_1);
double recovered_10004124(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10004168(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004220(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10004258(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100042d8(undefined4 param_1,undefined4 param_2);
double recovered_10004308(undefined4 param_1,undefined4 param_2);
double recovered_1000434c(undefined4 param_1,undefined4 param_2);
double recovered_10004398(undefined4 param_1,undefined4 param_2);
longlong recovered_100044d8(undefined4 param_1,undefined4 param_2);
double recovered_10004508(undefined4 param_1,undefined4 param_2);
double recovered_100045c8(undefined4 param_1,undefined4 param_2);
double recovered_10004678(undefined4 param_1,undefined4 param_2);
long long recovered_10004698(double value);
unsigned long long recovered_10004758(double value);
double recovered_100047e0(unsigned long long value);
double recovered_10004828(long long value);
float recovered_100048b8(float param_1,float param_2);
float recovered_100048fc(float param_1,float *param_2);
float recovered_100049b8(float param_1,uint param_2);
float recovered_10004a04(float param_1,float param_2);
float recovered_10004a8c(float param_1);
float recovered_10004ac4(float param_1);
double recovered_10004b10(undefined4 param_1,undefined4 param_2);
float recovered_10004b64(float param_1);
float recovered_10004bc0(float param_1);
float recovered_10004c18(float param_1);
longlong recovered_10004d5c(undefined4 param_1,undefined4 param_2);
float recovered_10004d90(float param_1);
float recovered_10004e58(float param_1);
float recovered_10004f10(float param_1);
int recovered_10004f2c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10005080(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100051e0(byte *param_1,undefined4 *param_2);
float recovered_100053b4(byte *in_r0,undefined4 *in_r1);
int recovered_100053d0(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10006034(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10006064(int *param_1,int *param_2,int *param_3);
void recovered_10006250(char *param_1,int param_2);
void recovered_10006434(void);
void recovered_100064f4(void);
void recovered_100065b0(char *param_1,undefined1 *param_2);
void recovered_10006608(void);
void recovered_10006654(void);
bool recovered_100066a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100067f4(void);
void recovered_100067fc(void);
undefined4 recovered_10006800(void);
undefined4 * recovered_10006808(char *param_1,int param_2);
void recovered_10006b8c(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10006c8c(uint *param_1);
uint recovered_10006d84(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10006eb0(int *param_1);
int recovered_100070b0(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10007228(int *param_1,uint param_2,int param_3);
undefined4 recovered_100072d8(int param_1);
undefined4 recovered_10007300(uint *param_1);
undefined1 recovered_100073d8(int param_1);
undefined1 recovered_100073e8(int param_1);
void recovered_100073f8(int param_1);
void recovered_10007414(uint param_1,int param_2);
undefined4 recovered_10007438(int param_1);
undefined4 recovered_100074c8(int param_1,int param_2);
undefined4 recovered_1000763c(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_1000773c(int param_1,int param_2,int param_3);
undefined4 recovered_100077c4(void);
void recovered_100077cc(void);
undefined4 recovered_100077d0(void);
undefined4 recovered_100077d8(void);
undefined4 recovered_100077e0(void);
char * recovered_100077e8(char *param_1,char param_2,int param_3);
int recovered_1000781c(char *left,char *right,ulong count);
char * recovered_10007860(undefined4 param_1);
undefined4 recovered_10007960(void);
undefined4 recovered_10007968(void);
void recovered_10007970(void);
__attribute__((naked,noreturn)) void recovered_10007998(void *context);
__attribute__((naked,returns_twice)) int recovered_100079a8(void *context);
__attribute__((naked,noreturn)) void recovered_100079c0(void *context,int value);
void recovered_100079e0(void);
undefined4 recovered_10007a6c(void);
void recovered_10007a74(int param_1);
void recovered_10007a84(int param_1);
void * recovered_10007abc(ulong param_1);
void * recovered_10007ae8(ulong param_1);
void recovered_10007b14(void *param_1);
void recovered_10007bdc(void *param_1);
void recovered_10007ca4(void *param_1);
void recovered_10007d6c(void *param_1);
undefined4 recovered_10007e34(void);
uint recovered_10007e3c(uint *param_1);
void recovered_10007e4c(uint *param_1);
void recovered_10007e5c(void);
undefined4 * recovered_10007e60(uint param_1);
void recovered_10007ee8(int param_1);
int recovered_10007ef8(int param_1);
void recovered_10007f00(void);
void recovered_10007f68(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10007f90(undefined4 *param_1);
void recovered_10008024(void);
void recovered_1000805c(undefined4 *param_1);
void recovered_10008080(undefined4 *param_1);
void recovered_100080c8(undefined4 *in_r0);
void recovered_100080d4(void);
void recovered_100080e0(undefined4 *param_1);
void recovered_10008114(undefined4 *param_1);
void recovered_100081d4(undefined4 *in_r0);
undefined4 recovered_100081e0(void);
void recovered_100081e8(void);
int recovered_100081f4(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100082e8(void);
undefined4 recovered_100082ec(void);
bool recovered_100082f4(int param_1);
bool recovered_10008308(int param_1);
bool recovered_10008348(uint param_1);
bool recovered_10008374(undefined4 param_1,uint param_2);
bool recovered_10008390(uint param_1);
bool recovered_100083ac(undefined4 param_1,uint param_2);
bool recovered_100083c8(undefined4 param_1,uint param_2);
double recovered_100083e8(double value);
float recovered_100084d0(float value);
long double recovered_100085d0(long double value);
double recovered_100086b8(long end,long start);
double recovered_100086d4(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000872c(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_100088a4(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_100088a8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_10008c5c(uint param_1,undefined4 *param_2);
int * recovered_10008dec(char *param_1,uint param_2,uint param_3);
void recovered_10009000(int param_1,int param_2);
void recovered_10009360(int param_1);
void recovered_10009a68(int param_1);
void recovered_10009a78(undefined4 *param_1);
void * recovered_10009b38(undefined4 *param_1);
void recovered_10009ca0(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10009cd4(int param_1,int param_2,int param_3);
void recovered_10009d3c(int *param_1,undefined1 *param_2);
void recovered_10009d78(int param_1,int *param_2,undefined1 *param_3);
void recovered_10009df8(int param_1);
void recovered_10009e24(void);
byte recovered_1000a9dc(int param_1);
void recovered_1000a9f0(int param_1,byte param_2,undefined1 param_3,undefined1 param_4);
int * recovered_1000aa18(int param_1,int in_r1);
void recovered_1000aa94(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_1000aad8(int param_1,uint param_2);
void recovered_1000aaf8(void);
void recovered_1000ae00(void);
void recovered_1000ae04(void);
undefined4 recovered_1000ae08(void);
void recovered_1000ae10(void);
undefined4 recovered_1000ae14(void);
undefined1 * recovered_1000ae1c(char *param_1,int *param_2,int *param_3);
void recovered_1000b710(int *param_1,int param_2,uint param_3);
int * recovered_1000b8d4(int *param_1);
int recovered_1000b928(int *param_1,undefined4 *param_2);
void recovered_1000ba50(int *param_1,int param_2,uint param_3);
int recovered_1000bca8(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */


/* Console-window raster composition */
static void pf_console_compose(void *opaque);
static void pf_console_present(void *opaque);
