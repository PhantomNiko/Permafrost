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

#define pf_varargs_10005478__4_ recovered_10005478
extern uint8_t pf_module_state[];
uint32_t recovered_100034a0(uint32_t a,uint32_t b);
uint recovered_100034a8(uint param_1,uint param_2,uint *param_3);
uint32_t recovered_10003520(uint32_t a,uint32_t b);
uint32_t recovered_10003544(uint32_t a,uint32_t b);
uint32_t recovered_1000357c(uint32_t a,uint32_t b);
undefined8 recovered_100035c0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_100036c8(float param_1);
undefined8 recovered_100036d8(float param_1);
float recovered_100036e8(uint param_1,uint param_2);
float recovered_10003704(int param_1,int param_2);
void recovered_10003720(void);
void recovered_10003734(int *in_r3);
int recovered_1000391c(int *in_r3);
long recovered_10003960(int *in_r3);
int recovered_100039b0(int *in_r3);
long recovered_100039e8(int *in_r3);
uint * recovered_10003a28(int param_1,int *in_r3);
longlong recovered_10003acc(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003b28(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003b80(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003bcc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003be8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10003cf0(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10003d24(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003d9c(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10003e20(void);
int recovered_10003e28(int param_1);
void * recovered_10003e34(size_t size);
void recovered_10003e78(void *pointer);
void * recovered_10003eb8(void *pointer,size_t size);
void * recovered_10003f04(void *dst,void *src,uint bytes);
void * recovered_10003f20(void *dst,void *src,uint bytes);
void * recovered_10003f74(void *dst,int byte,uint bytes);
void recovered_10003f8c(undefined1 *param_1,int param_2);
void recovered_10003fa4(undefined1 *param_1,int param_2);
int recovered_10003fbc(char *param_1,char *param_2,int param_3);
bool recovered_10003fe4(int param_1);
bool recovered_10003ff8(int param_1);
bool recovered_1000400c(uint param_1);
bool recovered_10004024(uint param_1);
bool recovered_10004050(int param_1);
bool recovered_10004070(int param_1);
int recovered_10004084(int param_1);
int recovered_10004094(int param_1);
uint recovered_100040a4(char *text);
int recovered_100040d4(byte *param_1,byte *param_2);
int recovered_10004100(byte *param_1,byte *param_2);
void recovered_10004104(int param_1,int param_2);
void * recovered_10004120(int param_1);
char * recovered_10004168(char *param_1,char param_2);
int recovered_10004194(int param_1,char *param_2);
char * recovered_100041d8(char *param_1,char *param_2);
char * recovered_10004218(char *param_1,char *param_2);
undefined4 recovered_10004260(void);
undefined4 recovered_1000426c(void);
undefined8 recovered_10004278(undefined4 *param_1);
double recovered_10004290(double value,int exponent);
double recovered_100042d0(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004368(double left,double right);
double recovered_100043a0(double left,double right);
double recovered_1000441c(double value);
double recovered_1000444c(double value);
double recovered_10004490(double value);
double recovered_100044e0(double value);
undefined8 recovered_100045b0(undefined4 param_1,undefined4 param_2);
double recovered_100045e0(double value);
void recovered_10004640(double in_d0);
double recovered_10004698(double value);
double recovered_100046e8(double value);
undefined8 recovered_10004708(undefined4 param_1,undefined4 param_2);
undefined8 recovered_100047c4(undefined4 param_1,undefined4 param_2);
void recovered_1000484c(uint param_1,uint param_2);
void recovered_10004880(int param_1,int param_2);
float recovered_100048a8(float left,float right);
float recovered_100048e4(float param_1,int *param_2);
float recovered_10004910(float param_1,int param_2);
float recovered_1000493c(float left,float right);
float recovered_10004974(float value);
float recovered_100049ac(float value);
double recovered_100049d4(double value);
float recovered_10004a14(float value);
float recovered_10004a3c(float value);
float recovered_10004a64(float param_1);
long recovered_10004a8c(undefined4 in_r0,undefined4 in_r1);
float recovered_10004a9c(float value);
float recovered_10004ac4(float value);
float recovered_10004aec(float value);
int recovered_10004b08(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10004c30(int param_1);
int recovered_10004c74(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10004d94(char *text,char **end);
float recovered_10004f30(char *text,char **end);
int recovered_10004f4c(char *out,uint capacity,char *format,void *args);
void recovered_10005348(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10005384(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_100053d8(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10005478(char *out,unsigned int capacity,char *format,...);
void recovered_100054a4(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_1000550c(int param_1);
void recovered_1000555c(char *param_1,int param_2);
void recovered_10005610(int param_1);
void recovered_1000569c(void);
void recovered_100056a4(void);
void recovered_100056ac(int param_1,int param_2);
void recovered_100056fc(void);
void recovered_10005750(int param_1);
void recovered_10005778(void);
bool recovered_1000579c(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10005820(void);
void recovered_10005828(void);
undefined4 recovered_1000582c(void);
undefined4 * recovered_10005834(int param_1,int param_2);
undefined4 recovered_10005af0(undefined4 param_1,undefined4 param_2);
undefined4 recovered_10005b3c(int param_1,uint param_2);
undefined4 * recovered_10005bc4(int param_1,int param_2,uint *param_3);
undefined4 recovered_10005bf0(uint *param_1);
int recovered_10005c34(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10005cd4(int *param_1);
int recovered_10005dc0(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10005ecc(int *param_1,uint param_2,int param_3);
undefined4 recovered_10005f64(int param_1);
undefined4 recovered_10005f88(uint *param_1);
undefined1 recovered_10006000(int param_1);
undefined1 recovered_10006010(int param_1);
void recovered_10006020(int param_1);
uint recovered_1000603c(uint param_1,int param_2);
undefined4 recovered_10006060(int param_1);
undefined4 recovered_100060a8(undefined4 param_1);
undefined4 recovered_100060ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006198(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100061ec(int param_1,int *param_2,uint *param_3);
bool recovered_100062a4(int param_1,int param_2,int param_3);
undefined4 recovered_100062e4(void);
void recovered_100062ec(void);
undefined4 recovered_100062f0(void);
undefined4 recovered_100062f8(void);
undefined4 recovered_10006300(void);
char * recovered_10006308(int param_1,char param_2,int param_3);
int recovered_10006330(byte *param_1,byte *param_2,int param_3);
undefined4 recovered_10006370(int param_1);
undefined4 recovered_1000642c(void);
undefined4 recovered_10006434(void);
void recovered_1000643c(void);
undefined4 recovered_10006454(int param_1);
void recovered_100064a4(int param_1);
__attribute__((naked,returns_twice)) int recovered_100064b4(void *context);
__attribute__((naked,noreturn)) void recovered_100064cc(void *context,int value);
void recovered_100064ec(void);
undefined4 recovered_10006570(void);
void recovered_10006578(int param_1);
long recovered_10006588(int param_1);
void * recovered_100065b4(uint size);
void * recovered_100065e0(uint size);
void recovered_100065e4(void *pointer);
void recovered_100066a4(void *pointer);
void recovered_10006764(void *pointer,uint size);
void recovered_10006824(void *pointer,uint size);
undefined4 recovered_100068e4(void);
uint recovered_100068ec(uint *param_1);
void recovered_100068fc(uint *param_1);
void recovered_1000690c(void);
undefined1 * recovered_10006910(uint param_1);
void recovered_1000695c(int param_1);
int recovered_1000696c(int param_1);
void recovered_10006974(void);
void recovered_100069d0(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100069f8(undefined4 *param_1);
void recovered_10006a78(void);
void recovered_10006ab0(undefined4 *param_1);
void recovered_10006ac8(undefined4 *param_1);
void recovered_10006af8(undefined4 *in_r0);
void recovered_10006b04(void);
void recovered_10006b10(undefined4 *param_1);
void recovered_10006b34(undefined4 *param_1);
void recovered_10006be0(undefined4 *in_r0);
undefined4 recovered_10006bec(void);
void recovered_10006bf4(void);
int recovered_10006c00(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10006c40(int *param_1,int *param_2);
void recovered_10006ce8(void);
undefined4 recovered_10006cec(void);
bool recovered_10006cf4(int param_1);
bool recovered_10006d08(int param_1);
bool recovered_10006d44(uint param_1);
bool recovered_10006d70(undefined4 param_1,uint param_2);
bool recovered_10006d8c(uint param_1);
bool recovered_10006da8(undefined4 param_1,uint param_2);
bool recovered_10006dc4(undefined4 param_1,uint param_2);
double recovered_10006de0(double value);
ulonglong recovered_10006e38(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10006f9c(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10006fa0(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_100071bc(uint param_1,int *param_2);
uint recovered_100072e8(undefined4 *param_1);
void recovered_10007320(undefined4 param_1,int param_2);
uint recovered_10007348(undefined4 *param_1);
undefined1 recovered_10007398(byte *param_1,uint param_2);
bool recovered_100074b8(byte *param_1,uint param_2);
ulonglong * recovered_10007644(byte *param_1,ulonglong *param_2,uint *param_3);
undefined4 * recovered_1000c354(undefined4 *param_1,undefined4 *param_2);
bool recovered_1000c384(uint *param_1,int *param_2,int *param_3,int *param_4);
undefined4 * recovered_1000d5f8(undefined4 *param_1,undefined4 *param_2);
int recovered_1000d64c(int param_1);
ulonglong * recovered_1000d688(int param_1,uint *param_2);
int recovered_1000d910(const char *name,const uint8_t *pixels,int width,int height);
bool recovered_1000e004(uint *param_1,int param_2,int param_3);
uint recovered_1000e03c(uint *param_1,byte *param_2,byte *param_3,uint param_4);
byte recovered_1000e10c(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000e110(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1000e4b0(int param_1,uint param_2,int param_3,int param_4);
byte recovered_1000e770(int param_1,int param_2,int param_3,int param_4);
uint recovered_1000f458(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4);
uint recovered_1000fd18(int param_1,int param_2,uint param_3,uint param_4);
void recovered_10010050(int *param_1,uint param_2,undefined1 *param_3);
uint recovered_1001005c(uint param_1,uint param_2);
void recovered_100100e8(int *param_1,uint param_2,undefined1 *param_3);
void recovered_10010150(int *param_1,uint param_2);
void recovered_100101ac(int *param_1,uint param_2);
void * recovered_1001020c(uint count);
undefined4 * recovered_1001021c(undefined4 *param_1,uint in_r1);
undefined4 recovered_10010248(byte *param_1,int param_2,uint param_3,byte *param_4);
undefined4 recovered_1001034c(undefined4 *param_1,byte *param_2);
int recovered_100104d8(int param_1);
void recovered_1001051c(int param_1);
int * recovered_10010548(int *param_1);
int recovered_10010568(int param_1);
int recovered_10010594(int param_1);
void recovered_100105b8(int *param_1);
int recovered_10010600(int param_1,int param_2);
undefined4 * recovered_10010638(undefined4 *param_1,undefined4 *param_2);
undefined1 * recovered_1001068c(undefined1 *param_1,undefined1 *param_2);
void recovered_100106e8(undefined4 *param_1,undefined4 *param_2);
int * recovered_10010714(int *param_1,int *param_2);
int recovered_1001076c(int *param_1,undefined4 *param_2);
void recovered_100107c4(int *param_1,uint param_2);
void * recovered_10010824(uint count);
undefined1 recovered_10010838(int *param_1,int param_2,int param_3,int param_4);
uint recovered_100108bc(int *param_1,char *param_2,uint *param_3);
bool recovered_10010980(int *param_1,uint param_2,uint *param_3);
uint recovered_100109f8(uint param_1,uint param_2);
undefined4 recovered_10010a1c(int *param_1,uint *param_2);
undefined4 * recovered_10010ac8(undefined4 *param_1);
int recovered_10010aec(uchar *data,uint size,ulonglong *position,uint *out);
undefined4 recovered_10010b34(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5);
void recovered_10010be8(int param_1,int param_2);
undefined4 recovered_10010cc8(int param_1,uint param_2,uint param_3,int param_4,uint *param_5);
uint recovered_10010d0c(uint *param_1);
int recovered_10010d18(int *param_1,undefined4 *param_2);
void recovered_10010d78(int *param_1,uint param_2);
void * recovered_10010df4(uint count);
undefined4 * recovered_10010e08(undefined4 *param_1,uint in_r1,undefined1 *in_r2);
void recovered_10010e34(int *param_1,undefined1 *param_2,undefined1 *param_3);
int * recovered_10010e4c(int *param_1,uint param_2);
void recovered_10010e78(int *param_1,uint param_2);
int recovered_10010edc(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_10010fb4(int *param_1,int *param_2);
undefined4 recovered_10011c04(int *param_1,uint param_2,uint *param_3);
undefined4 recovered_10011cf8(int *param_1,int param_2,int param_3,int *param_4);
int recovered_10011ebc(int param_1);
uint recovered_10011ed8(int param_1,uint param_2);
int recovered_10011f70(int *param_1,undefined1 *param_2);
byte recovered_10011fd0(int *param_1,int param_2,uint *param_3);
int recovered_100120bc(int *param_1,undefined1 *param_2);
undefined4 recovered_1001211c(int *param_1,int *param_2,undefined4 param_3);
int * recovered_10012294(int *param_1,uint param_2,undefined4 *param_3);
void recovered_100122c0(int *param_1,uint param_2,undefined4 *param_3);
void recovered_10012324(int *param_1,uint param_2);
int recovered_1001237c(int param_1,int param_2);
void recovered_100123b8(int *param_1,uint param_2,undefined2 *param_3);
undefined4 * recovered_100123c4(undefined4 *param_1,undefined4 *param_2);
void recovered_10012418(int *param_1,uint param_2,undefined2 *param_3);
void recovered_10012488(int *param_1,uint param_2);
void recovered_100124ec(int *param_1,uint param_2);
void * recovered_10012564(uint count);
int recovered_10012578(int *param_1,undefined4 *param_2);
int * recovered_100125d0(int *param_1,undefined4 *param_2,undefined4 *param_3);
int recovered_10012608(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * recovered_100126e8(undefined4 *param_1);
undefined4 * recovered_1001270c(undefined4 *param_1);
uint recovered_10012730(uint param_1,byte *param_2,int param_3);
void recovered_100127d4(int *param_1,undefined4 *param_2);
void recovered_10012830(int *param_1);
void recovered_10012878(int *param_1,uint param_2);
int recovered_100128f4(int param_1);
undefined4 recovered_10012934(int *param_1,int *param_2);
undefined4 recovered_100129f4(int param_1,int param_2,uint param_3);
undefined4
recovered_10012a40(undefined4 param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                  uint param_6);
void recovered_10012cd4(undefined4 *param_1);
void recovered_10012cf4(int param_1,int param_2,int *param_3,int *param_4);
uint recovered_10012e24(uint *param_1,byte param_2,undefined4 *param_3);
int recovered_10012e9c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10012f74(int param_1,int param_2,int param_3);
void recovered_10013178(int param_1,int *param_2,int *param_3,int param_4,int param_5);
undefined4 * recovered_100132dc(undefined4 *param_1,int param_2,int param_3);
uint recovered_10013334(int value);
void recovered_10013358(int param_1,int param_2,int param_3);
void recovered_10013368(int param_1,uint param_2,uint param_3,uint3 param_4);
void recovered_100133d8(int *param_1,undefined1 param_2,undefined4 param_3,undefined3 param_4);
void recovered_10013418(int *in_r0,int in_r1,undefined1 *in_r2,int in_r3);
void recovered_10013420(uint32_t *v,uint32_t value);
void recovered_10013450(int *param_1,int param_2,uint param_3);
int recovered_1001346c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
int * recovered_10013544(int *param_1,uint param_2);
void recovered_10013570(int *param_1,uint param_2);
void recovered_100135cc(int *param_1,uint param_2);
void * recovered_1001362c(uint count);
void recovered_10013640(uint32_t *v,uint32_t value);
undefined4 * recovered_1001366c(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined4 * recovered_100136a4(undefined4 *param_1);

/* Original analysis identifiers for manual recovery units. */
