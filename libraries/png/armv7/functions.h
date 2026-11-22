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

#define pf_varargs_10005478__4_ recovered_10006c14
extern uint8_t pf_module_state[];






















































































































































































































































































































/* Original analysis identifiers for manual recovery units. */
#include "word_divide.h"
#include "word_divide.h"
#include "word_divide.h"
#include "word_divide.h"
#include "numbers.h"
#include "png_encode.h"
#include "neon.h"
extern uint8_t pf_module_state[];
uint recovered_10002940(uint a,uint b);
uint recovered_10002990(uint a,uint b);
uint recovered_100029c8(uint a,uint b);
uint recovered_10002a38(uint a,uint b);
float recovered_10002ae0(int param_1,int param_2);
void recovered_10002b00(void);
void recovered_10002b18(int *in_r3);
int recovered_10002f10(int *in_r3);
long recovered_10002f54(int *in_r3);
int recovered_10002fa4(int *in_r3);
long recovered_10002fe0(int *in_r3);
uint * recovered_10003024(int param_1,int *in_r3);
longlong recovered_10003130(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003184(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003224(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003308(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10003388(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100034a0(uint param_1,uint param_2,uint param_3,uint param_4);
void * recovered_10003570(uintptr_t size);
void recovered_100035c4(void *pointer);
void * recovered_10003614(void *pointer,uintptr_t size);
void * recovered_10003668(void *dst,void *src,uint bytes);
void * recovered_100038ec(void *dst,void *src,uint bytes);
void * recovered_10003df8(void *dst,int byte,uint bytes);
void recovered_10003ff8(undefined1 *param_1,int param_2);
void recovered_100041f4(undefined1 *param_1,int param_2);
int recovered_100043f0(char *param_1,char *param_2,int param_3);
int recovered_100045e8(byte *param_1,byte *param_2);
uchar recovered_100046a4(int param_1);
uint recovered_100046f8(char *text);
int recovered_10004720(byte *param_1,byte *param_2);
int recovered_10004764(byte *param_1,byte *param_2);
void * recovered_100047c4(int param_1);
char * recovered_10004ad8(char *param_1,char param_2);
int recovered_10004b0c(int param_1,char *param_2);
char * recovered_10004b70(char *param_1,char *param_2);
char * recovered_10004bd0(char *param_1,char *param_2);
undefined * recovered_10004c34(void);
undefined ** recovered_10004c44(void);
undefined8 recovered_10004c54(undefined4 *param_1);
double recovered_10004d04(double value,int exponent);
double recovered_10004d48(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004e38(double left,double right);
double recovered_10004ee8(double value);
double recovered_10004f2c(double value);
double recovered_10004f78(double value);
undefined8 recovered_100050b8(undefined4 param_1,undefined4 param_2);
double recovered_100050e8(double value);
double recovered_100051a8(double value);
undefined8 recovered_10005278(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10005338(undefined4 param_1,undefined4 param_2);
void recovered_100053c0(uint param_1,uint param_2);
void recovered_10005408(int param_1,int param_2);
float recovered_10005498(float left,float right);
float recovered_100054dc(float value,int *exponent);
float recovered_10005598(float param_1,int param_2);
float recovered_100055e4(float left,float right);
float recovered_1000566c(float value);
float recovered_100056a4(float value);
double recovered_100056f0(double value);
float recovered_10005744(float value);
float recovered_100057a0(float value);
float recovered_100057f8(float param_1);
long recovered_1000593c(undefined4 in_r0,undefined4 in_r1);
float recovered_10005970(float value);
float recovered_10005a38(float value);
int recovered_10005b0c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10005c60(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10005dc0(char *text,char **end);
int recovered_10005fb0(char *out,uint capacity,char *format,void *args);
int recovered_10006c14(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10006c44(int *param_1,int *param_2,int *param_3);
void recovered_10006e30(char *param_1,int param_2);
void recovered_10007014(void);
void recovered_100070d4(void);
void recovered_10007190(int param_1,int param_2);
void recovered_100071e8(void);
void recovered_10007234(void);
uchar recovered_10007280(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 * recovered_100073e8(int param_1,int param_2);
undefined4 * recovered_1000776c(int param_1,int param_2,uint *param_3);
undefined4 recovered_1000786c(uint *param_1);
int recovered_10007964(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10007a90(int *param_1);
int recovered_10007c90(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10007e08(int *param_1,uint param_2,int param_3);
undefined4 recovered_10007eb8(int param_1);
undefined4 recovered_10007ee0(uint *param_1);
undefined4 recovered_10008018(int param_1);
undefined4 recovered_100080a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_1000821c(int param_1,int *param_2,uint *param_3);
uchar recovered_1000831c(int param_1,int param_2,int param_3);
char * recovered_100083c8(int param_1,char param_2,int param_3);
int recovered_100083fc(byte *param_1,byte *param_2,int param_3);
char * recovered_10008440(int param_1);
void recovered_10008550(void);
void recovered_10008578(int param_1);
void recovered_100085c0(void);
long recovered_10008664(int param_1);
void * recovered_1000869c(uint size);
void * recovered_100086c8(uint size);
void recovered_100086f4(void *pointer);
void recovered_100087bc(void *pointer);
void recovered_10008884(void *pointer,uint size);
void recovered_1000894c(void *pointer,uint size);
undefined1 * recovered_10008a40(uint param_1);
void recovered_10008ae0(void);
void recovered_10008b70(undefined4 *param_1);
void recovered_10008c04(void);
void recovered_10008c3c(undefined4 *param_1);
void recovered_10008c60(undefined4 *param_1);
void recovered_10008cc0(undefined4 *param_1);
void recovered_10008cf4(undefined4 *param_1);
int recovered_10008dd4(int *param_1,undefined4 param_2,int *param_3);
uchar recovered_10008ee8(int param_1);
double recovered_10008fc8(undefined4 param_1,undefined4 param_2);
float recovered_100090b0(float param_1);
double recovered_100091b0(undefined4 param_1,undefined4 param_2);
double recovered_10009298(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000930c(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10009488(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_1000983c(uint param_1,int *param_2);
undefined1 recovered_100099d0(byte *param_1,uint param_2);
uchar recovered_10009abc(byte *param_1,uint param_2);
ulonglong * recovered_10009c68(byte *param_1,ulonglong *param_2,uint *param_3);
undefined4 recovered_1000c03c(uint *param_1,int *param_2,uint *param_3);
bool recovered_1000c500(uint *param_1,undefined4 *param_2,int *param_3,int *param_4);
int recovered_1000e1a0(int param_1);
ulonglong * recovered_1000e228(int param_1,uint *param_2);
byte recovered_1000e558(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000f570(uint *param_1,byte *param_2,byte *param_3,uint param_4);
byte recovered_1000f664(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000f668(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000fba0(int param_1,uint param_2,int param_3,int param_4);
uint recovered_10010028(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10012720(int *param_1,uint param_2,undefined1 *param_3);
int * recovered_100127fc(int *param_1,uint param_2);
uint recovered_100128e4(uint param_1,uint param_2);
undefined4 recovered_1001296c(undefined4 *param_1,byte *param_2);
bool recovered_10012bc8(int param_1,uint param_2,uint *param_3,int param_4);
undefined4 recovered_10012df4(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5);
void recovered_10012e90(int *param_1,undefined4 *param_2);
int * recovered_10012f80(int *param_1,uint param_2,undefined1 *param_3);
bool recovered_10013064(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint *param_6);
undefined4 recovered_10013428(int param_1,uint param_2,int param_3,uint *param_4,int *param_5);
void recovered_10013d50(int param_1,int param_2);
undefined4 * recovered_10013e84(undefined4 *param_1,uint param_2);
bool recovered_10013fac(int param_1,uint param_2,uint param_3,uint param_4,int *param_5);
bool recovered_100142c4(undefined8 *param_1,uint param_2,int *param_3);
int recovered_10014468(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_100145cc(int *param_1,int *param_2);
undefined4 recovered_10015ad8(int *param_1,uint param_2,uint *param_3);
undefined4 recovered_10015bf8(int *param_1,int param_2,int param_3,int *param_4);
int recovered_100162d0(int param_1);
void recovered_100162f4(void);
undefined4 recovered_10016510(int *param_1,int *param_2,undefined4 param_3);
void recovered_10016910(void);
void * recovered_10016a98(undefined4 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4);
uint recovered_10016d20(uint param_1,byte *param_2,int param_3);
void recovered_10016e60(int *param_1,undefined8 *param_2);
void recovered_100170a4(int *param_1,undefined4 *param_2);
void recovered_10017198(int *param_1,undefined4 *param_2);
uint recovered_1001728c(int *param_1,undefined4 *param_2);
undefined4
recovered_100173d4(undefined4 param_1,undefined8 *param_2,uint128 *param_3,
                  uint128 *param_4,uint param_5,uint param_6);
void recovered_10017910(void);
void recovered_10017954(void);
void recovered_10008a3c(void);
void recovered_10008ac8(int param_1);
undefined8 recovered_10002aa4(float param_1);
undefined4 recovered_100083b8(void);
void recovered_100083ac(void);
undefined4 recovered_10008548(void);
void recovered_10008b48(int param_1,undefined4 param_2,undefined4 param_3);
double recovered_10004eb8(double value);
double recovered_10005258(double value);
float recovered_10005f94(char *text,char **end);
int recovered_10003564(int param_1);
void recovered_10008a2c(uint *param_1);
void recovered_10008dc8(void);
ulonglong recovered_10009484(byte *param_1,undefined4 *param_2,uint param_3);
void recovered_10008ec8(void);
void recovered_10007fd8(int param_1);
__attribute__((naked,noreturn)) void recovered_100085a0(void *context,int value);
bool recovered_10008f70(uint param_1);
bool recovered_10004660(uint param_1);
bool recovered_10008ed4(int param_1);
bool recovered_10008f8c(undefined4 param_1,uint param_2);
uint recovered_10007ff4(uint param_1,int param_2);
undefined4 recovered_100083a4(void);
bool recovered_10008f54(undefined4 param_1,uint param_2);
float recovered_10005af0(float value);
undefined4 recovered_100083b0(void);
bool recovered_100046c4(int param_1);
__attribute__((naked,returns_twice)) int recovered_10008588(void *context);
undefined4 recovered_100073e0(void);
void recovered_10008db4(undefined4 *in_r0);
undefined4 recovered_10008540(void);
void recovered_1000355c(void);
void recovered_10008654(int param_1);
double recovered_100092b4(double value);
undefined8 recovered_100031d8(uint param_1,int param_2,uint param_3);
undefined4 recovered_100083c0(void);
undefined4 recovered_100073d4(void);
undefined4 recovered_10008dc0(void);
void recovered_10008cb4(void);
double recovered_10004e00(double left,double right);
undefined4 recovered_10008a14(void);
void recovered_100047a8(int param_1,int param_2);
undefined4 recovered_10008ecc(void);
void recovered_10008ca8(undefined4 *in_r0);
undefined1 recovered_10007fc8(int param_1);
uint recovered_10008a1c(uint *param_1);
float recovered_10002ac4(uint param_1,uint param_2);
void recovered_100073dc(void);
int recovered_100046e8(int param_1);
undefined8 recovered_10002ab4(float param_1);
bool recovered_10004638(int param_1);
bool recovered_10008f28(uint param_1);
bool recovered_1000464c(int param_1);
int recovered_100046d8(int param_1);
int recovered_10008ad8(int param_1);
bool recovered_10004678(uint param_1);
undefined4 recovered_1000864c(void);
undefined1 recovered_10007fb8(int param_1);
bool recovered_10008fa8(undefined4 param_1,uint param_2);

/* Original analysis identifiers for manual recovery units. */
