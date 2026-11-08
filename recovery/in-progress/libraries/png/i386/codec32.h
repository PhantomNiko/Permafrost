/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
static unsigned char pf_png32_state[];
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
static inline void WaitForEvent(void){__builtin_trap();}
static inline void DataMemoryBarrier(uint32_t scope){(void)scope;__asm__ volatile("":::"memory");}
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

#define pf_varargs_10005478__4_ pf_png32_10005478
static uint8_t pf_png32_state[];
static uint32_t pf_png32_100034a0(uint32_t a,uint32_t b);
static uint pf_png32_100034a8(uint param_1,uint param_2,uint *param_3);
static uint32_t pf_png32_10003520(uint32_t a,uint32_t b);
static uint32_t pf_png32_10003544(uint32_t a,uint32_t b);
static uint32_t pf_png32_1000357c(uint32_t a,uint32_t b);
static undefined8 pf_png32_100035c0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
static undefined8 pf_png32_100036c8(float param_1);
static undefined8 pf_png32_100036d8(float param_1);
static float pf_png32_100036e8(uint param_1,uint param_2);
static float pf_png32_10003704(int param_1,int param_2);
static void pf_png32_10003720(void);
static void pf_png32_10003734(int *in_r3);
static int pf_png32_1000391c(int *in_r3);
static long pf_png32_10003960(int *in_r3);
static int pf_png32_100039b0(int *in_r3);
static long pf_png32_100039e8(int *in_r3);
static uint * pf_png32_10003a28(int param_1,int *in_r3);
static longlong pf_png32_10003acc(uint param_1,int param_2,uint param_3);
static undefined8 pf_png32_10003b28(uint param_1,uint param_2,uint param_3);
static undefined8 pf_png32_10003b80(uint param_1,int param_2,uint param_3);
static undefined8 pf_png32_10003bcc(uint param_1,uint param_2,uint param_3,uint param_4);
static undefined8 pf_png32_10003be8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
static undefined8 pf_png32_10003cf0(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
static undefined8 pf_png32_10003d24(uint param_1,uint param_2,uint param_3,uint param_4);
static undefined8 pf_png32_10003d9c(uint param_1,uint param_2,uint param_3,uint param_4);
static void pf_png32_10003e20(void);
static int pf_png32_10003e28(int param_1);
static void * pf_png32_10003e34(size_t size);
static void pf_png32_10003e78(void *pointer);
static void * pf_png32_10003eb8(void *pointer,size_t size);
static void * pf_png32_10003f04(void *dst,void *src,uint bytes);
static void * pf_png32_10003f20(void *dst,void *src,uint bytes);
static void * pf_png32_10003f74(void *dst,int byte,uint bytes);
static void pf_png32_10003f8c(undefined1 *param_1,int param_2);
static void pf_png32_10003fa4(undefined1 *param_1,int param_2);
static int pf_png32_10003fbc(char *param_1,char *param_2,int param_3);
static bool pf_png32_10003fe4(int param_1);
static bool pf_png32_10003ff8(int param_1);
static bool pf_png32_1000400c(uint param_1);
static bool pf_png32_10004024(uint param_1);
static bool pf_png32_10004050(int param_1);
static bool pf_png32_10004070(int param_1);
static int pf_png32_10004084(int param_1);
static int pf_png32_10004094(int param_1);
static uint pf_png32_100040a4(char *text);
static int pf_png32_100040d4(byte *param_1,byte *param_2);
static int pf_png32_10004100(byte *param_1,byte *param_2);
static void pf_png32_10004104(int param_1,int param_2);
static void * pf_png32_10004120(int param_1);
static char * pf_png32_10004168(char *param_1,char param_2);
static int pf_png32_10004194(int param_1,char *param_2);
static char * pf_png32_100041d8(char *param_1,char *param_2);
static char * pf_png32_10004218(char *param_1,char *param_2);
static undefined4 pf_png32_10004260(void);
static undefined4 pf_png32_1000426c(void);
static undefined8 pf_png32_10004278(undefined4 *param_1);
static double pf_png32_10004290(double value,int exponent);
static double pf_png32_100042d0(undefined4 param_1,undefined4 param_2,int *param_3);
static double pf_png32_10004368(double left,double right);
static double pf_png32_100043a0(double left,double right);
static double pf_png32_1000441c(double value);
static double pf_png32_1000444c(double value);
static double pf_png32_10004490(double value);
static double pf_png32_100044e0(double value);
static undefined8 pf_png32_100045b0(undefined4 param_1,undefined4 param_2);
static double pf_png32_100045e0(double value);
static void pf_png32_10004640(double in_d0);
static double pf_png32_10004698(double value);
static double pf_png32_100046e8(double value);
static undefined8 pf_png32_10004708(undefined4 param_1,undefined4 param_2);
static undefined8 pf_png32_100047c4(undefined4 param_1,undefined4 param_2);
static void pf_png32_1000484c(uint param_1,uint param_2);
static void pf_png32_10004880(int param_1,int param_2);
static float pf_png32_100048a8(float left,float right);
static float pf_png32_100048e4(float param_1,int *param_2);
static float pf_png32_10004910(float param_1,int param_2);
static float pf_png32_1000493c(float left,float right);
static float pf_png32_10004974(float value);
static float pf_png32_100049ac(float value);
static double pf_png32_100049d4(double value);
static float pf_png32_10004a14(float value);
static float pf_png32_10004a3c(float value);
static float pf_png32_10004a64(float param_1);
static long pf_png32_10004a8c(undefined4 in_r0,undefined4 in_r1);
static float pf_png32_10004a9c(float value);
static float pf_png32_10004ac4(float value);
static float pf_png32_10004aec(float value);
static int pf_png32_10004b08(byte *param_1,undefined4 *param_2,uint param_3);
static uint pf_png32_10004c30(int param_1);
static int pf_png32_10004c74(byte *param_1,undefined4 *param_2,uint param_3);
static double pf_png32_10004d94(char *text,char **end);
static float pf_png32_10004f30(char *text,char **end);
static int pf_png32_10004f4c(char *out,uint capacity,char *format,void *args);
static void pf_png32_10005348(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
static void pf_png32_10005384(int *param_1,uint *param_2,int *param_3,char *param_4);
static void pf_png32_100053d8(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
static int pf_png32_10005478(char *out,unsigned int capacity,char *format,...);
static void pf_png32_100054a4(uint param_1,uint param_2,int *param_3,int *param_4);
static undefined4 pf_png32_1000550c(int param_1);
static void pf_png32_1000555c(char *param_1,int param_2);
static void pf_png32_10005610(int param_1);
static void pf_png32_1000569c(void);
static void pf_png32_100056a4(void);
static void pf_png32_100056ac(int param_1,int param_2);
static void pf_png32_100056fc(void);
static void pf_png32_10005750(int param_1);
static void pf_png32_10005778(void);
static bool pf_png32_1000579c(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
static undefined4 pf_png32_10005820(void);
static void pf_png32_10005828(void);
static undefined4 pf_png32_1000582c(void);
static undefined4 * pf_png32_10005834(int param_1,int param_2);
static undefined4 pf_png32_10005af0(undefined4 param_1,undefined4 param_2);
static undefined4 pf_png32_10005b3c(int param_1,uint param_2);
static undefined4 * pf_png32_10005bc4(int param_1,int param_2,uint *param_3);
static undefined4 pf_png32_10005bf0(uint *param_1);
static int pf_png32_10005c34(undefined1 *param_1,int param_2,int param_3,int *param_4);
static uint pf_png32_10005cd4(int *param_1);
static int pf_png32_10005dc0(int param_1,int param_2,int param_3,uint *param_4);
static undefined4 pf_png32_10005ecc(int *param_1,uint param_2,int param_3);
static undefined4 pf_png32_10005f64(int param_1);
static undefined4 pf_png32_10005f88(uint *param_1);
static undefined1 pf_png32_10006000(int param_1);
static undefined1 pf_png32_10006010(int param_1);
static void pf_png32_10006020(int param_1);
static uint pf_png32_1000603c(uint param_1,int param_2);
static undefined4 pf_png32_10006060(int param_1);
static undefined4 pf_png32_100060a8(undefined4 param_1);
static undefined4 pf_png32_100060ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
static undefined4 pf_png32_10006198(undefined4 param_1,undefined4 param_2,undefined4 param_3);
static undefined4 pf_png32_100061ec(int param_1,int *param_2,uint *param_3);
static bool pf_png32_100062a4(int param_1,int param_2,int param_3);
static undefined4 pf_png32_100062e4(void);
static void pf_png32_100062ec(void);
static undefined4 pf_png32_100062f0(void);
static undefined4 pf_png32_100062f8(void);
static undefined4 pf_png32_10006300(void);
static char * pf_png32_10006308(int param_1,char param_2,int param_3);
static int pf_png32_10006330(byte *param_1,byte *param_2,int param_3);
static undefined4 pf_png32_10006370(int param_1);
static undefined4 pf_png32_1000642c(void);
static undefined4 pf_png32_10006434(void);
static void pf_png32_1000643c(void);
static undefined4 pf_png32_10006454(int param_1);
static void pf_png32_100064a4(int param_1);
static __attribute__((naked,returns_twice)) int pf_png32_100064b4(void *context);
static __attribute__((naked,noreturn)) void pf_png32_100064cc(void *context,int value);
static void pf_png32_100064ec(void);
static undefined4 pf_png32_10006570(void);
static void pf_png32_10006578(int param_1);
static long pf_png32_10006588(int param_1);
static void * pf_png32_100065b4(uint size);
static void * pf_png32_100065e0(uint size);
static void pf_png32_100065e4(void *pointer);
static void pf_png32_100066a4(void *pointer);
static void pf_png32_10006764(void *pointer,uint size);
static void pf_png32_10006824(void *pointer,uint size);
static undefined4 pf_png32_100068e4(void);
static uint pf_png32_100068ec(uint *param_1);
static void pf_png32_100068fc(uint *param_1);
static void pf_png32_1000690c(void);
static undefined1 * pf_png32_10006910(uint param_1);
static void pf_png32_1000695c(int param_1);
static int pf_png32_1000696c(int param_1);
static void pf_png32_10006974(void);
static void pf_png32_100069d0(int param_1,undefined4 param_2,undefined4 param_3);
static void pf_png32_100069f8(undefined4 *param_1);
static void pf_png32_10006a78(void);
static void pf_png32_10006ab0(undefined4 *param_1);
static void pf_png32_10006ac8(undefined4 *param_1);
static void pf_png32_10006af8(undefined4 *in_r0);
static void pf_png32_10006b04(void);
static void pf_png32_10006b10(undefined4 *param_1);
static void pf_png32_10006b34(undefined4 *param_1);
static void pf_png32_10006be0(undefined4 *in_r0);
static undefined4 pf_png32_10006bec(void);
static void pf_png32_10006bf4(void);
static int pf_png32_10006c00(int *param_1,undefined4 param_2,int *param_3);
static bool pf_png32_10006c40(int *param_1,int *param_2);
static void pf_png32_10006ce8(void);
static undefined4 pf_png32_10006cec(void);
static bool pf_png32_10006cf4(int param_1);
static bool pf_png32_10006d08(int param_1);
static bool pf_png32_10006d44(uint param_1);
static bool pf_png32_10006d70(undefined4 param_1,uint param_2);
static bool pf_png32_10006d8c(uint param_1);
static bool pf_png32_10006da8(undefined4 param_1,uint param_2);
static bool pf_png32_10006dc4(undefined4 param_1,uint param_2);
static double pf_png32_10006de0(double value);
static ulonglong pf_png32_10006e38(byte *param_1,undefined4 *param_2,uint param_3);
static ulonglong pf_png32_10006f9c(byte *param_1,undefined4 *param_2,uint param_3);
static undefined4 pf_png32_10006fa0(int param_1,int *param_2,undefined2 *param_3);
static uint * pf_png32_100071bc(uint param_1,int *param_2);
static uint pf_png32_100072e8(undefined4 *param_1);
static void pf_png32_10007320(undefined4 param_1,int param_2);
static uint pf_png32_10007348(undefined4 *param_1);
static undefined1 pf_png32_10007398(byte *param_1,uint param_2);
static bool pf_png32_100074b8(byte *param_1,uint param_2);
static ulonglong * pf_png32_10007644(byte *param_1,ulonglong *param_2,uint *param_3);
static undefined4 * pf_png32_1000c354(undefined4 *param_1,undefined4 *param_2);
static bool pf_png32_1000c384(uint *param_1,int *param_2,int *param_3,int *param_4);
static undefined4 * pf_png32_1000d5f8(undefined4 *param_1,undefined4 *param_2);
static int pf_png32_1000d64c(int param_1);
static ulonglong * pf_png32_1000d688(int param_1,uint *param_2);
static int pf_png32_1000d910(const char *name,const uint8_t *pixels,int width,int height);
static bool pf_png32_1000e004(uint *param_1,int param_2,int param_3);
static uint pf_png32_1000e03c(uint *param_1,byte *param_2,byte *param_3,uint param_4);
static byte pf_png32_1000e10c(int param_1,uint param_2,uint param_3,uint param_4);
static uint pf_png32_1000e110(int param_1,uint param_2,uint param_3,uint param_4);
static uint pf_png32_1000e4b0(int param_1,uint param_2,int param_3,int param_4);
static byte pf_png32_1000e770(int param_1,int param_2,int param_3,int param_4);
static uint pf_png32_1000f458(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4);
static uint pf_png32_1000fd18(int param_1,int param_2,uint param_3,uint param_4);
static void pf_png32_10010050(int *param_1,uint param_2,undefined1 *param_3);
static uint pf_png32_1001005c(uint param_1,uint param_2);
static void pf_png32_100100e8(int *param_1,uint param_2,undefined1 *param_3);
static void pf_png32_10010150(int *param_1,uint param_2);
static void pf_png32_100101ac(int *param_1,uint param_2);
static void * pf_png32_1001020c(uint count);
static undefined4 * pf_png32_1001021c(undefined4 *param_1,uint in_r1);
static undefined4 pf_png32_10010248(byte *param_1,int param_2,uint param_3,byte *param_4);
static undefined4 pf_png32_1001034c(undefined4 *param_1,byte *param_2);
static int pf_png32_100104d8(int param_1);
static void pf_png32_1001051c(int param_1);
static int * pf_png32_10010548(int *param_1);
static int pf_png32_10010568(int param_1);
static int pf_png32_10010594(int param_1);
static void pf_png32_100105b8(int *param_1);
static int pf_png32_10010600(int param_1,int param_2);
static undefined4 * pf_png32_10010638(undefined4 *param_1,undefined4 *param_2);
static undefined1 * pf_png32_1001068c(undefined1 *param_1,undefined1 *param_2);
static void pf_png32_100106e8(undefined4 *param_1,undefined4 *param_2);
static int * pf_png32_10010714(int *param_1,int *param_2);
static int pf_png32_1001076c(int *param_1,undefined4 *param_2);
static void pf_png32_100107c4(int *param_1,uint param_2);
static void * pf_png32_10010824(uint count);
static undefined1 pf_png32_10010838(int *param_1,int param_2,int param_3,int param_4);
static uint pf_png32_100108bc(int *param_1,char *param_2,uint *param_3);
static bool pf_png32_10010980(int *param_1,uint param_2,uint *param_3);
static uint pf_png32_100109f8(uint param_1,uint param_2);
static undefined4 pf_png32_10010a1c(int *param_1,uint *param_2);
static undefined4 * pf_png32_10010ac8(undefined4 *param_1);
static int pf_png32_10010aec(uchar *data,uint size,ulonglong *position,uint *out);
static undefined4 pf_png32_10010b34(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5);
static void pf_png32_10010be8(int param_1,int param_2);
static undefined4 pf_png32_10010cc8(int param_1,uint param_2,uint param_3,int param_4,uint *param_5);
static uint pf_png32_10010d0c(uint *param_1);
static int pf_png32_10010d18(int *param_1,undefined4 *param_2);
static void pf_png32_10010d78(int *param_1,uint param_2);
static void * pf_png32_10010df4(uint count);
static undefined4 * pf_png32_10010e08(undefined4 *param_1,uint in_r1,undefined1 *in_r2);
static void pf_png32_10010e34(int *param_1,undefined1 *param_2,undefined1 *param_3);
static int * pf_png32_10010e4c(int *param_1,uint param_2);
static void pf_png32_10010e78(int *param_1,uint param_2);
static int pf_png32_10010edc(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
static bool pf_png32_10010fb4(int *param_1,int *param_2);
static undefined4 pf_png32_10011c04(int *param_1,uint param_2,uint *param_3);
static undefined4 pf_png32_10011cf8(int *param_1,int param_2,int param_3,int *param_4);
static int pf_png32_10011ebc(int param_1);
static uint pf_png32_10011ed8(int param_1,uint param_2);
static int pf_png32_10011f70(int *param_1,undefined1 *param_2);
static byte pf_png32_10011fd0(int *param_1,int param_2,uint *param_3);
static int pf_png32_100120bc(int *param_1,undefined1 *param_2);
static undefined4 pf_png32_1001211c(int *param_1,int *param_2,undefined4 param_3);
static int * pf_png32_10012294(int *param_1,uint param_2,undefined4 *param_3);
static void pf_png32_100122c0(int *param_1,uint param_2,undefined4 *param_3);
static void pf_png32_10012324(int *param_1,uint param_2);
static int pf_png32_1001237c(int param_1,int param_2);
static void pf_png32_100123b8(int *param_1,uint param_2,undefined2 *param_3);
static undefined4 * pf_png32_100123c4(undefined4 *param_1,undefined4 *param_2);
static void pf_png32_10012418(int *param_1,uint param_2,undefined2 *param_3);
static void pf_png32_10012488(int *param_1,uint param_2);
static void pf_png32_100124ec(int *param_1,uint param_2);
static void * pf_png32_10012564(uint count);
static int pf_png32_10012578(int *param_1,undefined4 *param_2);
static int * pf_png32_100125d0(int *param_1,undefined4 *param_2,undefined4 *param_3);
static int pf_png32_10012608(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
static undefined4 * pf_png32_100126e8(undefined4 *param_1);
static undefined4 * pf_png32_1001270c(undefined4 *param_1);
static uint pf_png32_10012730(uint param_1,byte *param_2,int param_3);
static void pf_png32_100127d4(int *param_1,undefined4 *param_2);
static void pf_png32_10012830(int *param_1);
static void pf_png32_10012878(int *param_1,uint param_2);
static int pf_png32_100128f4(int param_1);
static undefined4 pf_png32_10012934(int *param_1,int *param_2);
static undefined4 pf_png32_100129f4(int param_1,int param_2,uint param_3);
undefined4
static pf_png32_10012a40(undefined4 param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                  uint param_6);
static void pf_png32_10012cd4(undefined4 *param_1);
static void pf_png32_10012cf4(int param_1,int param_2,int *param_3,int *param_4);
static uint pf_png32_10012e24(uint *param_1,byte param_2,undefined4 *param_3);
static int pf_png32_10012e9c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
static void pf_png32_10012f74(int param_1,int param_2,int param_3);
static void pf_png32_10013178(int param_1,int *param_2,int *param_3,int param_4,int param_5);
static undefined4 * pf_png32_100132dc(undefined4 *param_1,int param_2,int param_3);
static uint pf_png32_10013334(int value);
static void pf_png32_10013358(int param_1,int param_2,int param_3);
static void pf_png32_10013368(int param_1,uint param_2,uint param_3,uint3 param_4);
static void pf_png32_100133d8(int *param_1,undefined1 param_2,undefined4 param_3,undefined3 param_4);
static void pf_png32_10013418(int *in_r0,int in_r1,undefined1 *in_r2,int in_r3);
static void pf_png32_10013420(uint32_t *v,uint32_t value);
static void pf_png32_10013450(int *param_1,int param_2,uint param_3);
static int pf_png32_1001346c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
static int * pf_png32_10013544(int *param_1,uint param_2);
static void pf_png32_10013570(int *param_1,uint param_2);
static void pf_png32_100135cc(int *param_1,uint param_2);
static void * pf_png32_1001362c(uint count);
static void pf_png32_10013640(uint32_t *v,uint32_t value);
static undefined4 * pf_png32_1001366c(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);
static undefined4 * pf_png32_100136a4(undefined4 *param_1);

static unsigned char pf_png32_state[133984]={
 [656]=0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [1136]=0x00,0x00,0x00,0x00,0x88,0x00,0x01,0x40,0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,
 [1200]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,
 [1280]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,
 [1344]=0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [1408]=0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [1568]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,
 [2512]=0x00,0x00,0x00,0x00,0x4c,0x08,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [2576]=0x00,0x00,0x00,0x00,0x50,0x08,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [2656]=0x54,0x08,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [3520]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xec,0x36,0x01,0x00,0x00,0x00,0x00,0x00,
 [3536]=0x00,0x00,0x00,0x00,0x0c,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [3552]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x42,0x4d,0x57,
 [4352]=0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xef,0x39,0xfa,0xfe,0x42,0x2e,0xe6,0x3f,
 [4496]=0x00,0x00,0x00,0x00,0x00,0xb0,0xb3,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0x40,
 [4560]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40,
 [4576]=0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0xc0,0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0x40,
 [4592]=0x18,0x2d,0x44,0x54,0xfb,0x21,0x19,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [4672]=0x00,0x00,0x00,0x00,0x00,0x80,0x86,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [4896]=0x00,0x00,0xe0,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [5024]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x43,0x00,0x00,0x00,0x00,
 [7840]=0x00,0x00,0x00,0x00,0x1a,0x37,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [7984]=0x00,0x00,0x00,0x00,0xf1,0x36,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [8144]=0xf8,0x36,0x01,0x00,0x09,0x37,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [8288]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x01,0x00,0x00,0x00,0x00,0x00,
 [8368]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x57,0x4d,0x41,0x50,0x00,0x00,0x00,0x00,
 [8544]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x40,0x01,0x00,0x8c,0x40,0x01,0x00,
 [8688]=0x40,0x08,0x01,0x40,0x88,0x40,0x01,0x00,0x8c,0x40,0x01,0x00,0x00,0x00,0x00,0x00,
 [8784]=0x00,0x00,0x00,0x00,0x1d,0x37,0x01,0x00,0xf0,0x36,0x01,0x00,0x00,0x00,0x00,0x00,
 [8848]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x37,0x01,0x00,0x43,0x37,0x01,0x00,
 [8864]=0x7c,0x37,0x01,0x00,0xb1,0x37,0x01,0x00,0xd7,0x37,0x01,0x00,0x07,0x38,0x01,0x00,
 [8944]=0x00,0x00,0x00,0x00,0x0a,0x38,0x01,0x00,0x07,0x38,0x01,0x00,0x00,0x00,0x00,0x00,
 [9072]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x08,0x01,0x40,
 [9776]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x80,0x01,0x00,
 [9792]=0x9e,0x38,0x01,0x00,0xab,0x38,0x01,0x00,0xb9,0x38,0x01,0x00,0x1d,0x37,0x01,0x00,
 [9872]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0x08,0x01,0x40,0x00,0x00,0x00,0x00,
 [10016]=0x04,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [10512]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x36,0x01,0x00,
 [10944]=0x04,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [10976]=0x00,0x00,0x00,0x00,0x04,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [11088]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x80,0x01,0x00,
 [11264]=0x00,0x00,0x00,0x00,0x04,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [11328]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x08,0x01,0x40,0x00,0x00,0x00,0x00,
 [11504]=0x00,0x00,0x00,0x00,0x04,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [11584]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x08,0x01,0x40,0x00,0x00,0x00,0x00,
 [12128]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x87,0x38,0x01,0x00,0x30,0x38,0x01,0x00,
 [12144]=0x3d,0x38,0x01,0x00,0x47,0x38,0x01,0x00,0x5b,0x38,0x01,0x00,0x69,0x38,0x01,0x00,
 [12160]=0x7b,0x38,0x01,0x00,0x98,0x38,0x01,0x00,0x2d,0x38,0x01,0x00,0x00,0x00,0x00,0x00,
 [12208]=0x8c,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [12288]=0x57,0x4d,0x41,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [12480]=0x00,0x00,0x00,0x00,0x28,0x39,0x01,0x00,0x1c,0x00,0x00,0x00,0x70,0x65,0x00,0x00,
 [12784]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x39,0x01,0x00,0x3c,0x00,0x00,0x00,
 [12800]=0x70,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [12976]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x39,0x01,0x00,0x3c,0x00,0x00,0x00,
 [12992]=0x70,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13168]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x39,0x01,0x00,0x3c,0x00,0x00,0x00,
 [13184]=0x70,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13360]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x39,0x01,0x00,0x3c,0x00,0x00,0x00,
 [13376]=0x70,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13600]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x42,0x01,0x00,
 [13776]=0x00,0x00,0x00,0x00,0x94,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13824]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x42,0x01,0x00,
 [13856]=0x00,0x00,0x00,0x00,0x94,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13904]=0x00,0x00,0x00,0x00,0x94,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [13968]=0x94,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [14128]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0x42,0x01,0x00,
 [14400]=0x00,0x00,0x00,0x00,0x5c,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [15632]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x3b,0x01,0x00,0x00,0x00,0x00,0x00,
 [16384]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x3b,0x01,0x00,
 [16400]=0xc7,0x38,0x01,0x00,0x8c,0x3b,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [16784]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x02,0x02,0x00,
 [16800]=0xde,0x38,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [19056]=0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [20944]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x80,0x01,0x00,0x78,0x39,0x01,0x00,
 [20960]=0x00,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [21536]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x3b,0x01,0x00,
 [21616]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc7,0x38,0x01,0x00,0xf6,0x38,0x01,0x00,
 [22944]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8c,0x3b,0x01,0x00,0x00,0x00,0x00,0x00,
 [24000]=0xfb,0x38,0x01,0x00,0x00,0x39,0x01,0x00,0x05,0x39,0x01,0x00,0x0a,0x39,0x01,0x00,
 [24016]=0x0f,0x39,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [24208]=0x00,0x00,0x00,0x00,0x14,0x39,0x01,0x00,0xd9,0x38,0x01,0x00,0xd4,0x38,0x01,0x00,
 [25776]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0x3b,0x01,0x00,
 [25984]=0xf0,0x38,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [28816]=0x89,0x80,0x80,0x80,0x00,0x00,0x7f,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [33296]=0x00,0x00,0x00,0x00,0xc4,0x3f,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [34032]=0x00,0x00,0x60,0x40,0xcd,0x3b,0x7f,0x66,0x9e,0xa0,0xe6,0x3f,0x00,0x00,0x00,0x00,
 [34048]=0x00,0x00,0xb0,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [34832]=0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [35664]=0x00,0x00,0x00,0x00,0x94,0x14,0x58,0x00,0x53,0x06,0xd6,0xbf,0x21,0xae,0x9c,0xbd,
 [35680]=0x33,0xda,0xe6,0xbf,0x3b,0xdf,0x4f,0x8d,0x97,0x6e,0xf6,0x3f,0x27,0x31,0x08,0xac,
 [35696]=0x1c,0x5a,0xfc,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [36512]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x98,0x42,0x01,0x00,
 [36528]=0xa0,0x42,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [40672]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x80,0x01,0x00,
 [40688]=0xec,0x39,0x01,0x00,0x14,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [40896]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x3f,0x01,0x00,
 [40912]=0xf0,0x3e,0x01,0x00,0xd4,0x3e,0x01,0x00,0xb8,0x3e,0x01,0x00,0x00,0x00,0x00,0x00,
 [42080]=0x14,0x3a,0x01,0x00,0x90,0x01,0x00,0x00,0x08,0x80,0x01,0x00,0x19,0x39,0x01,0x00,
 [43840]=0x00,0x00,0x00,0x00,0x28,0x3a,0x01,0x00,0xdc,0x05,0x00,0x00,0x08,0x80,0x01,0x00,
 [43856]=0xd1,0x38,0x01,0x00,0x84,0x3b,0x01,0x00,0xd4,0x38,0x01,0x00,0x0f,0x39,0x01,0x00,
 [43872]=0xd9,0x38,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [45040]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x3a,0x01,0x00,
 [45056]=0xff,0x42,0x47,0x52,0xe0,0x02,0x00,0x00,0x08,0x80,0x01,0x00,0xd1,0x38,0x01,0x00,
 [45744]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4c,0x3a,0x01,0x00,
 [45760]=0xf8,0x01,0x00,0x00,0x08,0x80,0x01,0x00,0xd1,0x38,0x01,0x00,0x28,0x3f,0x01,0x00,
 [48496]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb0,0xe5,0x95,0xeb,
 [48512]=0x6d,0x33,0xd5,0xbf,0xc9,0x91,0xce,0xc0,0xc8,0xcb,0xda,0xbf,0xdc,0xb8,0xc5,0xfc,
 [48528]=0xdc,0xd0,0xb4,0xbf,0x62,0x10,0x58,0x39,0xb4,0xc8,0xe2,0x3f,0xa0,0x34,0xd4,0x28,
 [48544]=0x24,0x99,0xc5,0xbf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [48560]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x89,0x41,0x60,0xe5,
 [48576]=0xd0,0x22,0xd3,0x3f,0xc9,0x76,0xbe,0x9f,0x1a,0x2f,0xbd,0x3f,0x00,0x00,0x00,0x00,
 [48592]=0x00,0x00,0x60,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [49008]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x3a,0x01,0x00,
 [49024]=0x4a,0x46,0x49,0x46,0x02,0x11,0x01,0x03,0x03,0x01,0x11,0x00,0x03,0x01,0x00,0x02,
 [49040]=0xb0,0xe5,0x95,0xeb,0x6d,0x33,0xd5,0xbf,0x70,0x0a,0x00,0x00,0x08,0x80,0x01,0x00,
 [49056]=0xd1,0x38,0x01,0x00,0x1c,0x39,0x01,0x00,0x42,0x3f,0x01,0x00,0x82,0x3f,0x01,0x00,
 [49072]=0x94,0x3b,0x01,0x00,0x1f,0x39,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [51280]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9c,0x3a,0x01,0x00,0x20,0x76,0x30,0x30,
 [51296]=0x20,0x78,0x63,0x66,0x67,0x69,0x6d,0x70,0xe0,0x06,0x00,0x00,0x08,0x80,0x01,0x00,
 [51312]=0x22,0x39,0x01,0x00,0xd1,0x38,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [52112]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x3b,0x01,0x00,
 [52128]=0x3c,0x02,0x00,0x00,0x08,0x80,0x01,0x00,0xd1,0x38,0x01,0x00,0x8c,0x3b,0x01,0x00,
 [59200]=0x00,0x00,0x00,0x00,0x28,0x3b,0x01,0x00,0x38,0x0a,0x00,0x00,0x08,0x80,0x01,0x00,
 [59216]=0xa0,0x44,0x01,0x00,0x00,0x4b,0x01,0x00,0xbc,0x1e,0x01,0x00,0x00,0x00,0x00,0x00,
 [59232]=0x6c,0x3e,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [59904]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x3d,0x01,0x00,
 [59920]=0x94,0x3c,0x01,0x00,0xf4,0x3d,0x01,0x00,0x7c,0x3d,0x01,0x00,0x00,0x00,0x00,0x00,
 [62240]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x83,0xb8,0xed,0xf4,0x44,0x01,0x00,
 [62256]=0xf8,0x44,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [62608]=0xdc,0x3f,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [64688]=0x18,0x2d,0x44,0x54,0xfb,0x21,0x09,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0xb0,0x3f,
 [64704]=0xcd,0x3b,0x7f,0x66,0x9e,0xa0,0xe6,0x3f,0xcd,0x3b,0x7f,0x66,0x9e,0xa0,0xc6,0x3f,
 [64720]=0xf8,0x48,0x01,0x00,0x00,0x49,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [65072]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0x3b,0x01,0x00,0x00,0x00,0x00,0x00,
 [66080]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xc0,0x2d,0xe5,0x10,0xc0,0x9f,0xe5,
 [66096]=0x0c,0xc0,0x8f,0xe0,0x04,0xc0,0x2d,0xe5,0x08,0xc0,0x9f,0xe5,0x0c,0xc0,0x8f,0xe0,
 [66112]=0x00,0xf0,0x9c,0xe5,0x30,0x09,0x00,0x00,0x1c,0x49,0x00,0x00,0x43,0x00,0x2e,0x00,
 [66128]=0x00,0x28,0x6e,0x75,0x6c,0x6c,0x29,0x00,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,
 [66144]=0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46,0x00,0x30,0x31,0x32,0x33,0x34,0x35,0x36,
 [66160]=0x37,0x38,0x39,0x61,0x62,0x63,0x64,0x65,0x66,0x00,0x30,0x78,0x00,0x25,0x73,0x00,
 [66176]=0x57,0x69,0x6e,0x74,0x65,0x72,0x4c,0x75,0x61,0x20,0x44,0x65,0x73,0x6b,0x74,0x6f,
 [66192]=0x70,0x20,0x46,0x6f,0x72,0x20,0x57,0x69,0x6e,0x74,0x65,0x72,0x42,0x6f,0x6f,0x74,
 [66208]=0x0d,0x0a,0x00,0x74,0x79,0x70,0x65,0x20,0x4c,0x75,0x61,0x20,0x63,0x6f,0x64,0x65,
 [66224]=0x20,0x61,0x74,0x20,0x74,0x68,0x65,0x20,0x57,0x69,0x6e,0x74,0x65,0x72,0x42,0x6f,
 [66240]=0x6f,0x74,0x20,0x70,0x72,0x6f,0x6d,0x70,0x74,0x20,0x61,0x6e,0x64,0x20,0x70,0x72,
 [66256]=0x65,0x73,0x73,0x20,0x45,0x6e,0x74,0x65,0x72,0x0d,0x0a,0x00,0x74,0x79,0x70,0x65,
 [66272]=0x20,0x65,0x78,0x69,0x74,0x20,0x6f,0x72,0x20,0x70,0x72,0x65,0x73,0x73,0x20,0x45,
 [66288]=0x73,0x63,0x20,0x6f,0x6e,0x20,0x61,0x6e,0x20,0x65,0x6d,0x70,0x74,0x79,0x20,0x70,
 [66304]=0x72,0x6f,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x6c,0x65,0x61,0x76,0x65,0x0d,0x0a,
 [66320]=0x00,0x61,0x75,0x74,0x6f,0x72,0x75,0x6e,0x73,0x20,0x69,0x6e,0x64,0x65,0x78,0x2e,
 [66336]=0x6c,0x75,0x61,0x20,0x69,0x66,0x20,0x69,0x74,0x20,0x69,0x73,0x20,0x70,0x72,0x65,
 [66352]=0x73,0x65,0x6e,0x74,0x0d,0x0a,0x00,0x75,0x73,0x65,0x20,0x64,0x6f,0x66,0x69,0x6c,
 [66368]=0x65,0x28,0x22,0x6e,0x61,0x6d,0x65,0x2e,0x6c,0x75,0x61,0x22,0x29,0x20,0x74,0x6f,
 [66384]=0x20,0x72,0x75,0x6e,0x20,0x66,0x69,0x6c,0x65,0x73,0x20,0x66,0x72,0x6f,0x6d,0x20,
 [66400]=0x64,0x69,0x73,0x6b,0x0d,0x0a,0x00,0x0d,0x0a,0x00,0x45,0x6d,0x62,0x65,0x64,0x64,
 [66416]=0x65,0x64,0x20,0x56,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3a,0x3a,0x20,0x57,0x69,0x6e,
 [66432]=0x74,0x65,0x72,0x4c,0x75,0x61,0x20,0x30,0x2e,0x32,0x0d,0x0a,0x00,0x6f,0x6b,0x00,
 [66448]=0x6e,0x6f,0x20,0x73,0x75,0x63,0x68,0x20,0x66,0x69,0x6c,0x65,0x00,0x69,0x2f,0x6f,
 [66464]=0x20,0x65,0x72,0x72,0x6f,0x72,0x00,0x62,0x61,0x64,0x20,0x66,0x69,0x6c,0x65,0x20,
 [66480]=0x64,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x6f,0x72,0x00,0x6f,0x75,0x74,0x20,0x6f,
 [66496]=0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x00,0x70,0x65,0x72,0x6d,0x69,0x73,0x73,
 [66512]=0x69,0x6f,0x6e,0x20,0x64,0x65,0x6e,0x69,0x65,0x64,0x00,0x66,0x69,0x6c,0x65,0x20,
 [66528]=0x65,0x78,0x69,0x73,0x74,0x73,0x00,0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x61,
 [66544]=0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x00,0x65,0x72,0x72,0x6f,0x72,0x00,0x5f,0x5f,
 [66560]=0x77,0x6d,0x66,0x73,0x5f,0x73,0x74,0x64,0x69,0x6e,0x00,0x5f,0x5f,0x77,0x6d,0x66,
 [66576]=0x73,0x5f,0x73,0x74,0x64,0x6f,0x75,0x74,0x00,0x5f,0x5f,0x77,0x6d,0x66,0x73,0x5f,
 [66592]=0x73,0x74,0x64,0x65,0x72,0x72,0x00,0x67,0x69,0x6d,0x70,0x20,0x78,0x63,0x66,0x20,
 [66608]=0x00,0x77,0x62,0x00,0x49,0x48,0x44,0x52,0x00,0x49,0x45,0x4e,0x44,0x00,0x54,0x52,
 [66624]=0x55,0x45,0x56,0x49,0x53,0x49,0x4f,0x4e,0x2d,0x58,0x46,0x49,0x4c,0x45,0x2e,0x00,
 [66640]=0x41,0x64,0x6f,0x62,0x65,0x00,0x66,0x69,0x6c,0x65,0x00,0x61,0x63,0x54,0x4c,0x00,
 [66656]=0x66,0x63,0x54,0x4c,0x00,0x50,0x4c,0x54,0x45,0x00,0x74,0x52,0x4e,0x53,0x00,0x49,
 [66672]=0x44,0x41,0x54,0x00,0x66,0x64,0x41,0x54,0x00,0x72,0x62,0x00,0xff,0xd8,0x00,0xff,
 [66688]=0xd9,0x00,0x4c,0x61,0x79,0x65,0x72,0x00,0xff,0x9b,0x0d,0x03,0x02,0x00,0x01,0x01,
 [66704]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x9b,0x0d,0x03,0x02,0x00,0x01,0x01,
 [66720]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x9b,0x0d,0x03,0x02,0x00,0x01,0x01,
 [66736]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x9b,0x0d,0x03,0x02,0x00,0x01,0x01,
 [66752]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x9b,0x0d,0x03,0x02,0x00,0x01,0x01,
 [66768]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x03,0x70,0x00,0x00,0x01,0x00,
 [66784]=0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,
 [66800]=0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,0x10,0x00,0x11,0x00,
 [66816]=0x12,0x00,0x13,0x00,0x14,0x00,0x15,0x00,0x16,0x00,0x17,0x00,0x18,0x00,0x19,0x00,
 [66832]=0x1a,0x00,0x1b,0x00,0x1c,0x00,0x1d,0x00,0x1e,0x00,0x1f,0x00,0x20,0x00,0x21,0x00,
 [66848]=0x22,0x00,0x23,0x00,0x24,0x00,0x25,0x00,0x26,0x00,0x27,0x00,0x28,0x00,0x29,0x00,
 [66864]=0x2a,0x00,0x2b,0x00,0x2c,0x00,0x2d,0x00,0x2e,0x00,0x2f,0x00,0x30,0x00,0x31,0x00,
 [66880]=0x32,0x00,0x33,0x00,0x34,0x00,0x35,0x00,0x36,0x00,0x37,0x00,0xff,0xff,0x03,0x24,
 [66896]=0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,
 [66912]=0x08,0x00,0x09,0x00,0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,
 [66928]=0x10,0x00,0x11,0x00,0xff,0xff,0x03,0x10,0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,
 [66944]=0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0xff,0xff,0x03,0x18,0x00,0x00,0x01,0x00,
 [66960]=0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,
 [66976]=0x0a,0x00,0x0b,0x00,0xff,0xff,0x03,0x04,0x00,0x00,0x01,0x00,0xff,0xff,0x03,0x06,
 [66992]=0x00,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0x03,0x40,0x00,0x00,0x01,0x00,
 [67008]=0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,
 [67024]=0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,0x10,0x00,0x11,0x00,
 [67040]=0x12,0x00,0x13,0x00,0x14,0x00,0x15,0x00,0x16,0x00,0x17,0x00,0x18,0x00,0x19,0x00,
 [67056]=0x1a,0x00,0x1b,0x00,0x1c,0x00,0x1d,0x00,0x1e,0x00,0x1f,0x00,0xff,0xff,0x03,0x66,
 [67072]=0x00,0x00,0x01,0x00,0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,
 [67088]=0x08,0x00,0x09,0x00,0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,
 [67104]=0x10,0x00,0x11,0x00,0x12,0x00,0x13,0x00,0x14,0x00,0x15,0x00,0x16,0x00,0x17,0x00,
 [67120]=0x18,0x00,0x19,0x00,0x1a,0x00,0x1b,0x00,0x1c,0x00,0x1d,0x00,0x1e,0x00,0x1f,0x00,
 [67136]=0x20,0x00,0x21,0x00,0x22,0x00,0x23,0x00,0x24,0x00,0x25,0x00,0x26,0x00,0x27,0x00,
 [67152]=0x28,0x00,0x29,0x00,0x2a,0x00,0x2b,0x00,0x2c,0x00,0x2d,0x00,0x2e,0x00,0x2f,0x00,
 [67168]=0x30,0x00,0x31,0x00,0x32,0x00,0x00,0x00,0xff,0xff,0x03,0x1c,0x00,0x00,0x01,0x00,
 [67184]=0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,
 [67200]=0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0xff,0xff,0x03,0x20,0x00,0x00,0x01,0x00,
 [67216]=0x02,0x00,0x03,0x00,0x04,0x00,0x05,0x00,0x06,0x00,0x07,0x00,0x08,0x00,0x09,0x00,
 [67232]=0x0a,0x00,0x0b,0x00,0x0c,0x00,0x0d,0x00,0x0e,0x00,0x0f,0x00,0x00,0x00,0x00,0x00,
 [67248]=0xfc,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
 [67264]=0xf8,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
 [67280]=0xfc,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
 [67296]=0xf8,0xff,0xff,0xff,0x89,0x50,0x4e,0x47,0x0d,0x0a,0x1a,0x0a,0x52,0x45,0x49,0x49,
 [67312]=0x4d,0x47,0x00,0x01,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
 [67328]=0x10,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
 [67344]=0x0a,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
 [67360]=0x19,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [67376]=0x05,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,
 [67392]=0x21,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x29,0x00,0x00,0x00,
 [67408]=0x22,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,
 [67424]=0x06,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x15,0x00,0x00,0x00,
 [67440]=0x1c,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x31,0x00,0x00,0x00,
 [67456]=0x38,0x00,0x00,0x00,0x39,0x00,0x00,0x00,0x32,0x00,0x00,0x00,0x2b,0x00,0x00,0x00,
 [67472]=0x24,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,
 [67488]=0x17,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x25,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,
 [67504]=0x33,0x00,0x00,0x00,0x3a,0x00,0x00,0x00,0x3b,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
 [67520]=0x2d,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x27,0x00,0x00,0x00,
 [67536]=0x2e,0x00,0x00,0x00,0x35,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x3d,0x00,0x00,0x00,
 [67552]=0x36,0x00,0x00,0x00,0x2f,0x00,0x00,0x00,0x37,0x00,0x00,0x00,0x3e,0x00,0x00,0x00,
 [67568]=0x3f,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
 [67584]=0x06,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
 [67600]=0x0a,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,
 [67616]=0x11,0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,
 [67632]=0x1f,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x2b,0x00,0x00,0x00,0x33,0x00,0x00,0x00,
 [67648]=0x3b,0x00,0x00,0x00,0x43,0x00,0x00,0x00,0x53,0x00,0x00,0x00,0x63,0x00,0x00,0x00,
 [67664]=0x73,0x00,0x00,0x00,0x83,0x00,0x00,0x00,0xa3,0x00,0x00,0x00,0xc3,0x00,0x00,0x00,
 [67680]=0xe3,0x00,0x00,0x00,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [67712]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [67728]=0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
 [67744]=0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
 [67760]=0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [67776]=0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
 [67792]=0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [67808]=0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
 [67824]=0x07,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x11,0x00,0x00,0x00,
 [67840]=0x19,0x00,0x00,0x00,0x21,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x41,0x00,0x00,0x00,
 [67856]=0x61,0x00,0x00,0x00,0x81,0x00,0x00,0x00,0xc1,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
 [67872]=0x81,0x01,0x00,0x00,0x01,0x02,0x00,0x00,0x01,0x03,0x00,0x00,0x01,0x04,0x00,0x00,
 [67888]=0x01,0x06,0x00,0x00,0x01,0x08,0x00,0x00,0x01,0x0c,0x00,0x00,0x01,0x10,0x00,0x00,
 [67904]=0x01,0x18,0x00,0x00,0x01,0x20,0x00,0x00,0x01,0x30,0x00,0x00,0x01,0x40,0x00,0x00,
 [67920]=0x01,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [67936]=0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
 [67952]=0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [67968]=0x04,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
 [67984]=0x06,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
 [68000]=0x08,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
 [68016]=0x0a,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
 [68032]=0x0c,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
 [68048]=0x11,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
 [68064]=0x07,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
 [68080]=0x05,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
 [68096]=0x03,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
 [68112]=0x01,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [68128]=0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [68144]=0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [68160]=0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [68176]=0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [68192]=0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
 [68208]=0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
 [68224]=0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [68240]=0x54,0x52,0x55,0x45,0x56,0x49,0x53,0x49,0x4f,0x4e,0x2d,0x58,0x46,0x49,0x4c,0x45,
 [68256]=0x2e,0x00,0x10,0x0b,0x0a,0x10,0x18,0x28,0x33,0x3d,0x0c,0x0c,0x0e,0x13,0x1a,0x3a,
 [68272]=0x3c,0x37,0x0e,0x0d,0x10,0x18,0x28,0x39,0x45,0x38,0x0e,0x11,0x16,0x1d,0x33,0x57,
 [68288]=0x50,0x3e,0x12,0x16,0x25,0x38,0x44,0x6d,0x67,0x4d,0x18,0x23,0x37,0x40,0x51,0x68,
 [68304]=0x71,0x5c,0x31,0x40,0x4e,0x57,0x67,0x79,0x78,0x65,0x48,0x5c,0x5f,0x62,0x70,0x64,
 [68320]=0x67,0x63,0x11,0x12,0x18,0x2f,0x63,0x63,0x63,0x63,0x12,0x15,0x1a,0x42,0x63,0x63,
 [68336]=0x63,0x63,0x18,0x1a,0x38,0x63,0x63,0x63,0x63,0x63,0x2f,0x42,0x63,0x63,0x63,0x63,
 [68352]=0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
 [68368]=0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
 [68384]=0x63,0x63,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [68400]=0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
 [68416]=0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
 [68432]=0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0xf0,0x9f,0xe5,0x00,0xf0,0x9f,0xe5,
 [68448]=0xa0,0x34,0x00,0x00,0x20,0x35,0x00,0x00,0x00,0x00,0x00,0x00,0xee,0x36,0x01,0x00,
 [68464]=0xf0,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,
 [68480]=0xee,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,0xf0,0x36,0x01,0x00,
 [68496]=0xf0,0x36,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 [84832]=0x00,0x00,0x00,0x00,0x3c,0x40,0x01,0x00,0x70,0x65,0x00,0x00,0x00,0x00,0x00,0x00,
 [101216]=0x11,0x21,0x00,0x52,0x41,0x5a,0x22,0x04,0x52,0x12,0x20,0xb0,0x6e,0x70,0xe4,0x03,
 [101232]=0x70,0x40,0x70,0x4c,0x70,0x34,0x70,0x3c,0x70,0xa0,0x01,0x70,0x9c,0x0f,0x70,0x08,
 [101248]=0x70,0xfc,0x1b,0x60,0x18,0x30,0xf0,0x04,0x70,0x8c,0x01,0x70,0x98,0x01,0x52,0x30,
 [101264]=0x90,0x01,0x70,0xfc,0x01,0x52,0x30,0x84,0x01,0x52,0x30,0x58,0x52,0x30,0x3c,0x56,
 [101280]=0x30,0x44,0x52,0x30,0xc0,0x06,0x55,0x30,0xd0,0x01,0x70,0xf8,0x03,0x70,0xa0,0x03,
 [101296]=0x70,0x20,0x70,0x74,0x70,0xa4,0x01,0x70,0xec,0x01,0x70,0xf0,0x03,0x5e,0x30,0x48,
 [101312]=0x59,0x49,0x70,0x80,0x02,0x70,0x0c,0x70,0x04,0x70,0x24,0x70,0x04,0x70,0xe8,0x01,
 [101328]=0x70,0x0c,0x70,0x04,0x70,0xa4,0x01,0x70,0x0c,0x70,0x04,0x70,0xa4,0x01,0x70,0x0c,
 [101344]=0x70,0x04,0x70,0xa4,0x01,0x70,0x0c,0x70,0x04,0x70,0xe8,0x01,0x70,0xa4,0x01,0x70,
 [101360]=0x34,0x70,0x14,0x70,0x2c,0x70,0x38,0x70,0xa8,0x01,0x70,0x84,0x02,0x70,0xd0,0x09,
 [101376]=0x70,0x38,0x5d,0x30,0x84,0x05,0x53,0x30,0x88,0x03,0x70,0x80,0x02,0x56,0x30,0x9c,
 [101392]=0x1e,0x52,0x30,0xcc,0x04,0x70,0x48,0x52,0x30,0xa8,0x0a,0x70,0x94,0x08,0x55,0x30,
 [101408]=0xc0,0x01,0x53,0x30,0x9c,0x0c,0x70,0xc0,0x01,0x70,0x90,0x39,0x70,0xdc,0x12,0x60,
 [101424]=0x38,0x30,0xd8,0x04,0x52,0x30,0xf8,0x06,0x57,0x30,0xa8,0x0f,0x57,0x30,0xe0,0x09,
 [101440]=0x52,0x30,0xd8,0x01,0x54,0x30,0x94,0x01,0x60,0x12,0x30,0xe4,0x06,0x58,0x49,0x70,
 [101456]=0x04,0x52,0x30,0xd4,0x0c,0x5c,0x30,0x50,0x70,0x04,0x56,0x30,0xe4,0x08,0x52,0x4b,
 [101472]=0x70,0x08,0x52,0x30,0xf0,0x04,0x53,0x4c,0x70,0x04,0x53,0x30,0x94,0x16,0x60,0x20,
 [101488]=0x30,0x98,0x02,0x70,0x1c,0x57,0x30,0xd8,0x0e,0x60,0x33,0x30,0x7c,0x70,0x10,0x53,
 [101504]=0x30,0xb4,0x05,0x5e,0x4e,0x70,0x04,0x53,0x30,0x94,0x34,0x60,0x10,0x30,0xc0,0x02,
 [101520]=0x70,0x04,0x56,0x30,0xa8,0x05,0x54,0x30,0x90,0x12,0x52,0x30,0xdc,0x02,0x70,0xb4,
 [101536]=0x02,0x55,0x30,0xf4,0x0d,0x52,0x30,0xe0,0x02,0x51,0x00,0x00,0x11,0x40,0x64,0x79,
 [101552]=0x6c,0x64,0x5f,0x73,0x74,0x75,0x62,0x5f,0x62,0x69,0x6e,0x64,0x65,0x72,0x00,0x51,
 [101568]=0x72,0x00,0x90,0x00,0x40,0x5f,0x5f,0x5f,0x75,0x64,0x69,0x76,0x73,0x69,0x33,0x00,
 [101584]=0x51,0x71,0x00,0x90,0x40,0x5f,0x5f,0x5f,0x75,0x6d,0x6f,0x64,0x73,0x69,0x33,0x00,
 [101600]=0x90,0x00,0x00,0x00,0x00,0x01,0x5f,0x00,0x8a,0x0b,0x04,0x00,0xf4,0xd7,0x01,0x00,
 [101616]=0x00,0x02,0x52,0x65,0x73,0x75,0x6d,0x65,0x00,0x06,0x53,0x6a,0x4c,0x6a,0x5f,0x00,
 [101632]=0x23,0x04,0x00,0x84,0xd6,0x01,0x00,0x00,0x03,0x46,0x6f,0x72,0x63,0x65,0x64,0x55,
 [101648]=0x6e,0x77,0x69,0x6e,0x64,0x00,0x1d,0x52,0x00,0x49,0x55,0x6e,0x72,0x65,0x67,0x69,
 [101664]=0x73,0x74,0x65,0x72,0x00,0x8d,0x01,0x04,0x00,0xf8,0xd5,0x01,0x00,0x00,0x02,0x61,
 [101680]=0x69,0x73,0x65,0x45,0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x00,0x43,0x65,0x00,
 [101696]=0x63,0x04,0x00,0xb0,0xd5,0x01,0x00,0x00,0x02,0x67,0x69,0x73,0x74,0x65,0x72,0x00,
 [101712]=0x5d,0x73,0x75,0x6d,0x65,0x00,0x73,0x04,0x00,0x90,0xd6,0x01,0x01,0x5f,0x6f,0x72,
 [101728]=0x5f,0x52,0x65,0x74,0x68,0x72,0x6f,0x77,0x00,0x87,0x01,0x04,0x00,0xe0,0xd7,0x01,
 [101744]=0x00,0x04,0x00,0xc8,0xd5,0x01,0x00,0x00,0x04,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,
 [101760]=0x00,0x0c,0x5a,0x00,0x98,0x04,0x5f,0x00,0xaf,0x06,0x74,0x6c,0x76,0x5f,0x62,0x6f,
 [101776]=0x6f,0x74,0x73,0x74,0x72,0x61,0x70,0x00,0x84,0x0b,0x04,0x00,0xc4,0xec,0x01,0x00,
 [101792]=0x00,0x04,0x31,0x6c,0x6f,0x61,0x64,0x5f,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x45,0x50,
 [101808]=0x4b,0x68,0x6d,0x52,0x4e,0x53,0x30,0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,0x45,0x00,
 [101824]=0xb6,0x01,0x33,0x64,0x65,0x74,0x65,0x63,0x74,0x5f,0x66,0x6f,0x72,0x6d,0x61,0x74,
 [101840]=0x45,0x50,0x4b,0x68,0x6d,0x00,0x99,0x02,0x35,0x73,0x61,0x76,0x65,0x5f,0x72,0x67,
 [101856]=0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,
 [101872]=0x69,0x00,0x9f,0x02,0x39,0x73,0x61,0x76,0x65,0x5f,0x00,0xab,0x02,0x04,0x00,0x98,
 [101888]=0xe7,0x01,0x00,0x04,0x00,0x8c,0xc2,0x03,0x00,0x04,0x00,0x90,0xc2,0x03,0x00,0x00,
 [101904]=0x05,0x62,0x6d,0x70,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,
 [101920]=0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0xa5,0x02,0x70,0x6e,0x67,0x5f,0x72,
 [101936]=0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,
 [101952]=0x69,0x69,0x00,0xaf,0x03,0x72,0x65,0x69,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,
 [101968]=0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0xb5,0x03,0x74,
 [101984]=0x67,0x61,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,
 [102000]=0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0xbb,0x03,0x78,0x63,0x66,0x5f,0x72,0x67,0x62,
 [102016]=0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,
 [102032]=0x00,0xc1,0x03,0x04,0x00,0x90,0xb2,0x03,0x00,0x04,0x00,0x98,0xfa,0x03,0x00,0x04,
 [102048]=0x00,0xb0,0xc9,0x03,0x00,0x04,0x00,0xd8,0xe8,0x03,0x00,0x00,0x03,0x31,0x00,0xbc,
 [102064]=0x01,0x32,0x30,0x73,0x61,0x76,0x65,0x5f,0x6a,0x70,0x65,0x67,0x5f,0x72,0x67,0x62,
 [102080]=0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,
 [102096]=0x00,0x8c,0x04,0x39,0x6c,0x6f,0x61,0x64,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,
 [102112]=0x63,0x52,0x4e,0x53,0x30,0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,0x45,0x00,0x92,0x04,
 [102128]=0x04,0x00,0xf0,0xce,0x03,0x00,0x04,0x00,0x88,0xad,0x03,0x00,0x00,0x05,0x4e,0x32,
 [102144]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x00,0xc7,0x03,0x53,0x74,0x00,0xca,0x04,0x54,0x56,
 [102160]=0x4e,0x31,0x30,0x5f,0x5f,0x63,0x78,0x78,0x61,0x62,0x69,0x76,0x31,0x00,0xf1,0x04,
 [102176]=0x64,0x00,0xdf,0x05,0x6e,0x00,0x83,0x06,0x04,0x00,0xcc,0xf6,0x04,0x00,0x00,0x02,
 [102192]=0x37,0x6e,0x6f,0x74,0x68,0x72,0x6f,0x77,0x00,0xc4,0x04,0x39,0x74,0x65,0x72,0x6d,
 [102208]=0x69,0x6e,0x61,0x74,0x65,0x76,0x00,0xe5,0x04,0x04,0x00,0xec,0xc9,0x01,0x00,0x04,
 [102224]=0x00,0xcc,0x80,0x05,0x00,0x00,0x02,0x31,0x37,0x5f,0x5f,0x63,0x6c,0x61,0x73,0x73,
 [102240]=0x5f,0x74,0x79,0x70,0x65,0x5f,0x69,0x6e,0x66,0x6f,0x45,0x00,0xeb,0x04,0x32,0x00,
 [102256]=0x94,0x05,0x04,0x00,0xdc,0x80,0x05,0x00,0x00,0x02,0x30,0x5f,0x5f,0x73,0x69,0x5f,
 [102272]=0x63,0x6c,0x61,0x73,0x73,0x5f,0x74,0x79,0x70,0x65,0x5f,0x69,0x6e,0x66,0x6f,0x45,
 [102288]=0x00,0x8e,0x05,0x31,0x5f,0x5f,0x76,0x6d,0x69,0x5f,0x63,0x6c,0x61,0x73,0x73,0x5f,
 [102304]=0x74,0x79,0x70,0x65,0x5f,0x69,0x6e,0x66,0x6f,0x45,0x00,0xc9,0x05,0x04,0x00,0xec,
 [102320]=0x80,0x05,0x00,0x04,0x00,0xa4,0xcd,0x01,0x01,0x6d,0x00,0xd9,0x05,0x04,0x00,0xa4,
 [102336]=0xd0,0x01,0x00,0x00,0x02,0x61,0x50,0x76,0x00,0xcf,0x05,0x6c,0x50,0x76,0x00,0xed,
 [102352]=0x05,0x04,0x00,0xe4,0xcb,0x01,0x01,0x6d,0x00,0xf7,0x05,0x04,0x00,0xe4,0xce,0x01,
 [102368]=0x00,0x04,0x00,0xe0,0xcb,0x01,0x00,0x00,0x02,0x61,0x6d,0x00,0xfd,0x05,0x77,0x6d,
 [102384]=0x00,0x8f,0x06,0x04,0x00,0xb4,0xcb,0x01,0x00,0x03,0x00,0xcc,0x75,0x00,0x00,0x02,
 [102400]=0x6c,0x64,0x69,0x33,0x00,0x95,0x06,0x72,0x64,0x69,0x33,0x00,0xaa,0x06,0x03,0x00,
 [102416]=0x80,0x77,0x00,0x00,0x09,0x61,0x73,0x68,0x00,0x9a,0x06,0x62,0x7a,0x65,0x72,0x6f,
 [102432]=0x00,0xf5,0x06,0x63,0x78,0x61,0x5f,0x00,0xa4,0x07,0x64,0x00,0xef,0x08,0x66,0x00,
 [102448]=0xc6,0x09,0x67,0x78,0x78,0x5f,0x70,0x65,0x72,0x73,0x6f,0x6e,0x61,0x6c,0x69,0x74,
 [102464]=0x79,0x5f,0x00,0x96,0x0a,0x6c,0x73,0x68,0x72,0x64,0x69,0x33,0x00,0xa9,0x0a,0x6d,
 [102480]=0x6f,0x64,0x00,0xb3,0x0a,0x75,0x00,0xde,0x0a,0x03,0x00,0xa4,0x7f,0x00,0x04,0x00,
 [102496]=0x90,0xd2,0x01,0x00,0x00,0x02,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x5f,0x65,0x78,
 [102512]=0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x00,0xfa,0x06,0x74,0x65,0x78,0x69,0x74,0x00,
 [102528]=0x9e,0x07,0x04,0x00,0xe4,0xd1,0x01,0x00,0x00,0x08,0x61,0x00,0x80,0x07,0x62,0x65,
 [102544]=0x67,0x69,0x6e,0x5f,0x63,0x61,0x74,0x63,0x68,0x00,0xff,0x07,0x65,0x6e,0x64,0x5f,
 [102560]=0x63,0x61,0x74,0x63,0x68,0x00,0x85,0x08,0x66,0x72,0x65,0x65,0x5f,0x65,0x78,0x63,
 [102576]=0x65,0x70,0x74,0x69,0x6f,0x6e,0x00,0x8b,0x08,0x67,0x75,0x61,0x72,0x64,0x5f,0x00,
 [102592]=0xaf,0x08,0x70,0x75,0x72,0x65,0x5f,0x76,0x69,0x72,0x74,0x75,0x61,0x6c,0x00,0xc5,
 [102608]=0x08,0x72,0x65,0x74,0x68,0x72,0x6f,0x77,0x00,0xcb,0x08,0x74,0x68,0x72,0x6f,0x77,
 [102624]=0x00,0xd1,0x08,0x04,0x00,0x88,0xcb,0x01,0x00,0x04,0x00,0xf4,0xd2,0x01,0x00,0x04,
 [102640]=0x00,0xdc,0xd2,0x01,0x00,0x04,0x00,0x8c,0xd2,0x01,0x00,0x00,0x02,0x62,0x6f,0x72,
 [102656]=0x74,0x00,0x91,0x08,0x63,0x71,0x75,0x69,0x72,0x65,0x00,0xa9,0x08,0x04,0x00,0xec,
 [102672]=0xd1,0x01,0x00,0x00,0x02,0x61,0x00,0x97,0x08,0x72,0x65,0x6c,0x65,0x61,0x73,0x65,
 [102688]=0x00,0xbf,0x08,0x04,0x00,0xfc,0xd1,0x01,0x00,0x04,0x00,0xe8,0xd9,0x01,0x00,0x04,
 [102704]=0x00,0xf8,0xd4,0x01,0x00,0x04,0x00,0xd0,0xd3,0x01,0x00,0x03,0x00,0xa4,0x7a,0x00,
 [102720]=0x00,0x02,0x64,0x69,0x33,0x00,0xd7,0x08,0x73,0x69,0x33,0x00,0xea,0x08,0x03,0x04,
 [102736]=0xc4,0x6a,0x00,0x00,0x02,0x69,0x76,0x00,0xdc,0x08,0x79,0x6e,0x61,0x6d,0x69,0x63,
 [102752]=0x5f,0x63,0x61,0x73,0x74,0x00,0x84,0x09,0x04,0x00,0x80,0xd8,0x01,0x00,0x04,0x00,
 [102768]=0x88,0x8e,0x01,0x00,0x00,0x03,0x64,0x66,0x64,0x69,0x00,0x8a,0x09,0x73,0x66,0x64,
 [102784]=0x69,0x00,0xa6,0x09,0x75,0x6e,0x73,0x00,0xb1,0x09,0x03,0x04,0xd8,0x6d,0x00,0x04,
 [102800]=0x00,0xc4,0x8f,0x01,0x00,0x00,0x02,0x64,0x66,0x64,0x69,0x00,0xab,0x09,0x73,0x66,
 [102816]=0x64,0x69,0x00,0xc1,0x09,0x03,0x04,0xc8,0x6d,0x00,0x00,0x02,0x69,0x78,0x00,0x90,
 [102832]=0x09,0x6c,0x6f,0x61,0x74,0x00,0xeb,0x09,0x04,0x00,0x80,0x91,0x01,0x00,0x00,0x02,
 [102848]=0x64,0x66,0x00,0xd4,0x09,0x73,0x66,0x00,0xe6,0x09,0x03,0x04,0x84,0x6e,0x00,0x00,
 [102864]=0x02,0x64,0x69,0x00,0xda,0x09,0x75,0x6e,0x64,0x69,0x00,0xff,0x09,0x04,0x00,0xcc,
 [102880]=0x90,0x01,0x00,0x00,0x02,0x64,0x66,0x00,0xf9,0x09,0x73,0x66,0x00,0x8b,0x0a,0x03,
 [102896]=0x04,0xe8,0x6d,0x00,0x04,0x00,0xf0,0xca,0x01,0x00,0x00,0x02,0x73,0x6a,0x30,0x00,
 [102912]=0x90,0x0a,0x76,0x30,0x00,0xa3,0x0a,0x04,0x00,0xec,0xd7,0x01,0x00,0x03,0x00,0xa8,
 [102928]=0x76,0x00,0x03,0x00,0x9c,0x7b,0x00,0x00,0x02,0x64,0x69,0x33,0x00,0xae,0x0a,0x73,
 [102944]=0x69,0x33,0x00,0xc1,0x0a,0x03,0x04,0xfc,0x6a,0x00,0x03,0x00,0xcc,0x77,0x00,0x00,
 [102960]=0x02,0x64,0x69,0x33,0x00,0xc6,0x0a,0x73,0x69,0x33,0x00,0xd9,0x0a,0x03,0x04,0xa0,
 [102976]=0x69,0x00,0x00,0x02,0x64,0x69,0x76,0x00,0xcb,0x0a,0x6d,0x6f,0x64,0x00,0xf1,0x0a,
 [102992]=0x03,0x00,0xf0,0x79,0x00,0x00,0x02,0x64,0x69,0x33,0x00,0xec,0x0a,0x73,0x69,0x33,
 [103008]=0x00,0xff,0x0a,0x03,0x04,0xa0,0x6a,0x00,0x04,0x00,0xec,0xd9,0x01,0x00,0x00,0x0f,
 [103024]=0x5f,0x00,0x93,0x01,0x61,0x62,0x00,0xe2,0x0b,0x62,0x7a,0x65,0x72,0x6f,0x00,0xf3,
 [103040]=0x0b,0x63,0x00,0x88,0x0c,0x66,0x00,0xc2,0x0c,0x67,0x65,0x74,0x65,0x6e,0x76,0x00,
 [103056]=0x9c,0x0d,0x69,0x73,0x00,0xbc,0x0d,0x6c,0x00,0xc3,0x0e,0x6d,0x00,0xa7,0x0f,0x70,
 [103072]=0x6f,0x77,0x00,0xf4,0x0f,0x72,0x00,0x89,0x10,0x73,0x00,0xbe,0x10,0x74,0x00,0x9c,
 [103088]=0x13,0x76,0x73,0x6e,0x70,0x72,0x69,0x6e,0x74,0x66,0x00,0xdd,0x13,0x77,0x00,0xe9,
 [103104]=0x13,0x03,0x00,0xa0,0x7c,0x00,0x00,0x02,0x6f,0x72,0x74,0x00,0xdd,0x0b,0x73,0x00,
 [103120]=0xee,0x0b,0x03,0x00,0xa8,0x7c,0x00,0x03,0x00,0x8c,0x7f,0x00,0x04,0x00,0xcc,0x88,
 [103136]=0x01,0x01,0x66,0x00,0x82,0x0c,0x04,0x00,0xac,0x93,0x01,0x00,0x00,0x03,0x65,0x69,
 [103152]=0x6c,0x00,0xf8,0x0b,0x6c,0x6f,0x63,0x6b,0x00,0x9c,0x0c,0x6f,0x73,0x00,0xa2,0x0c,
 [103168]=0x04,0x00,0xbc,0xc8,0x01,0x00,0x04,0x00,0x98,0x8d,0x01,0x01,0x66,0x00,0xac,0x0c,
 [103184]=0x04,0x00,0xc4,0x95,0x01,0x00,0x04,0x00,0xe8,0x8d,0x01,0x01,0x66,0x00,0xbc,0x0c,
 [103200]=0x04,0x00,0xec,0x95,0x01,0x00,0x00,0x04,0x61,0x62,0x73,0x00,0xb2,0x0c,0x6c,0x6f,
 [103216]=0x6f,0x72,0x00,0xdc,0x0c,0x6d,0x6f,0x64,0x00,0xec,0x0c,0x72,0x65,0x00,0x81,0x0d,
 [103232]=0x04,0x00,0x9c,0x88,0x01,0x01,0x66,0x00,0xe6,0x0c,0x04,0x00,0xf4,0x92,0x01,0x00,
 [103248]=0x04,0x00,0xe8,0x86,0x01,0x01,0x66,0x00,0xf6,0x0c,0x04,0x00,0xa8,0x91,0x01,0x00,
 [103264]=0x03,0x00,0xf8,0x7c,0x00,0x00,0x02,0x65,0x00,0xfc,0x0c,0x78,0x70,0x00,0x8c,0x0d,
 [103280]=0x04,0x00,0xd0,0x85,0x01,0x01,0x66,0x00,0x96,0x0d,0x04,0x00,0xe4,0x91,0x01,0x00,
 [103296]=0x04,0x00,0xac,0xc8,0x01,0x00,0x04,0x00,0xa4,0x80,0x01,0x00,0x00,0x02,0x6e,0x75,
 [103312]=0x6d,0x00,0xa2,0x0d,0x70,0x68,0x61,0x00,0xb6,0x0d,0x04,0x00,0x8c,0x80,0x01,0x00,
 [103328]=0x00,0x09,0x61,0x6c,0x00,0xa8,0x0d,0x62,0x6c,0x61,0x6e,0x6b,0x00,0x85,0x0e,0x64,
 [103344]=0x69,0x67,0x69,0x74,0x00,0x8b,0x0e,0x66,0x69,0x6e,0x69,0x74,0x65,0x00,0x91,0x0e,
 [103360]=0x6c,0x6f,0x77,0x65,0x72,0x00,0x97,0x0e,0x70,0x72,0x69,0x6e,0x74,0x00,0x9c,0x0e,
 [103376]=0x73,0x70,0x61,0x63,0x65,0x00,0xa2,0x0e,0x75,0x70,0x70,0x65,0x72,0x00,0xa8,0x0e,
 [103392]=0x78,0x64,0x69,0x67,0x69,0x74,0x00,0xad,0x0e,0x04,0x00,0xd0,0x80,0x01,0x00,0x04,
 [103408]=0x00,0xf4,0xd9,0x01,0x00,0x04,0x00,0xc4,0xdb,0x01,0x00,0x03,0x00,0xe4,0x7f,0x00,
 [103424]=0x04,0x00,0xf0,0x80,0x01,0x00,0x04,0x00,0x88,0xda,0x01,0x00,0x03,0x00,0xf8,0x7f,
 [103440]=0x00,0x04,0x00,0xc4,0xda,0x01,0x00,0x04,0x00,0x90,0x85,0x01,0x01,0x66,0x00,0xbd,
 [103456]=0x0e,0x04,0x00,0x90,0x92,0x01,0x00,0x00,0x04,0x64,0x65,0x78,0x70,0x00,0xb3,0x0e,
 [103472]=0x6c,0x72,0x6f,0x75,0x6e,0x64,0x00,0xe1,0x0e,0x6f,0x00,0xed,0x0e,0x72,0x6f,0x75,
 [103488]=0x6e,0x64,0x00,0x9c,0x0f,0x04,0x00,0xb0,0x8b,0x01,0x00,0x04,0x00,0xec,0x84,0x01,
 [103504]=0x00,0x00,0x03,0x63,0x61,0x6c,0x65,0x63,0x6f,0x6e,0x76,0x00,0xe7,0x0e,0x67,0x00,
 [103520]=0x86,0x0f,0x6e,0x67,0x6a,0x6d,0x70,0x00,0x96,0x0f,0x04,0x00,0xe0,0x89,0x01,0x01,
 [103536]=0x66,0x00,0x90,0x0f,0x04,0x00,0xe4,0x94,0x01,0x00,0x04,0x00,0xcc,0xc9,0x01,0x00,
 [103552]=0x04,0x00,0x8c,0x95,0x01,0x00,0x03,0x00,0xb4,0x7c,0x00,0x00,0x02,0x61,0x6c,0x6c,
 [103568]=0x6f,0x63,0x00,0xa2,0x0f,0x65,0x6d,0x00,0xd7,0x0f,0x04,0x00,0x88,0xc6,0x01,0x00,
 [103584]=0x00,0x03,0x68,0x72,0x00,0xb6,0x0f,0x6d,0x70,0x00,0xcd,0x0f,0x70,0x79,0x00,0xd2,
 [103600]=0x0f,0x03,0x00,0xbc,0x7f,0x00,0x03,0x00,0x84,0x7e,0x00,0x00,0x03,0x63,0x00,0xbc,
 [103616]=0x0f,0x6d,0x6f,0x76,0x65,0x00,0xea,0x0f,0x73,0x65,0x74,0x00,0xef,0x0f,0x03,0x00,
 [103632]=0xa0,0x7e,0x00,0x03,0x00,0xf4,0x7e,0x00,0x04,0x00,0xa0,0x87,0x01,0x01,0x66,0x00,
 [103648]=0xfe,0x0f,0x04,0x00,0xbc,0x92,0x01,0x00,0x03,0x00,0xb8,0x7d,0x00,0x00,0x02,0x65,
 [103664]=0x61,0x6c,0x6c,0x6f,0x63,0x00,0x84,0x10,0x6f,0x75,0x6e,0x64,0x00,0x9b,0x10,0x04,
 [103680]=0x00,0xe0,0xdb,0x01,0x00,0x04,0x00,0xb4,0xc9,0x01,0x00,0x00,0x02,0x6a,0x6d,0x70,
 [103696]=0x00,0xa1,0x10,0x6c,0x6f,0x63,0x61,0x6c,0x65,0x00,0xb8,0x10,0x04,0x00,0xe0,0x84,
 [103712]=0x01,0x00,0x00,0x06,0x65,0x74,0x00,0xa7,0x10,0x69,0x6e,0x00,0xe6,0x10,0x6e,0x70,
 [103728]=0x72,0x69,0x6e,0x74,0x66,0x00,0xf6,0x10,0x71,0x72,0x74,0x00,0xfc,0x10,0x74,0x00,
 [103744]=0xb1,0x11,0x79,0x73,0x74,0x65,0x6d,0x00,0x90,0x13,0x04,0x00,0xe0,0x8b,0x01,0x01,
 [103760]=0x66,0x00,0xf0,0x10,0x04,0x00,0x9c,0x95,0x01,0x00,0x04,0x00,0xf8,0xa8,0x01,0x00,
 [103776]=0x04,0x00,0x90,0x89,0x01,0x01,0x66,0x00,0x86,0x11,0x04,0x00,0xbc,0x94,0x01,0x00,
 [103792]=0x04,0x00,0xc8,0x80,0x05,0x00,0x00,0x03,0x65,0x72,0x72,0x00,0x8c,0x11,0x69,0x6e,
 [103808]=0x00,0xa5,0x11,0x6f,0x75,0x74,0x00,0xab,0x11,0x04,0x00,0xc0,0x80,0x05,0x00,0x04,
 [103824]=0x00,0xc4,0x80,0x05,0x00,0x00,0x02,0x64,0x00,0x92,0x11,0x72,0x00,0xea,0x11,0x04,
 [103840]=0x00,0xe8,0x82,0x01,0x00,0x00,0x04,0x68,0x72,0x00,0xbb,0x11,0x6d,0x70,0x00,0xd8,
 [103856]=0x11,0x6f,0x6c,0x6c,0x00,0xde,0x11,0x70,0x79,0x00,0xe4,0x11,0x04,0x00,0xd4,0x81,
 [103872]=0x01,0x00,0x04,0x00,0x80,0x82,0x01,0x00,0x04,0x00,0x84,0x82,0x01,0x00,0x00,0x08,
 [103888]=0x63,0x00,0xc1,0x11,0x64,0x75,0x70,0x00,0x9b,0x12,0x65,0x72,0x72,0x6f,0x72,0x00,
 [103904]=0xa1,0x12,0x6c,0x65,0x6e,0x00,0xa7,0x12,0x6e,0x63,0x6d,0x70,0x00,0xad,0x12,0x70,
 [103920]=0x62,0x72,0x6b,0x00,0xb3,0x12,0x73,0x00,0xbf,0x12,0x74,0x6f,0x00,0xd7,0x12,0x04,
 [103936]=0x00,0xa0,0x82,0x01,0x00,0x04,0x00,0xf0,0xc6,0x01,0x00,0x04,0x00,0xa4,0x81,0x01,
 [103952]=0x00,0x04,0x00,0xb0,0xc6,0x01,0x00,0x04,0x00,0xd8,0x83,0x01,0x00,0x04,0x00,0x94,
 [103968]=0x83,0x01,0x00,0x00,0x02,0x70,0x6e,0x00,0xb9,0x12,0x74,0x72,0x00,0xcb,0x12,0x04,
 [103984]=0x00,0x98,0x84,0x01,0x00,0x04,0x00,0x94,0x9b,0x01,0x00,0x00,0x04,0x64,0x00,0xd1,
 [104000]=0x12,0x66,0x00,0xea,0x12,0x6c,0x00,0xf0,0x12,0x75,0x6c,0x00,0x80,0x13,0x04,0x00,
 [104016]=0xb0,0x9e,0x01,0x00,0x04,0x00,0x88,0x96,0x01,0x01,0x6c,0x00,0xfa,0x12,0x04,0x00,
 [104032]=0x9c,0xdf,0x01,0x00,0x04,0x00,0xf4,0x98,0x01,0x01,0x6c,0x00,0x8a,0x13,0x04,0x00,
 [104048]=0xb8,0xdc,0x01,0x00,0x04,0x00,0xb4,0xc8,0x01,0x00,0x04,0x00,0xf8,0x84,0x01,0x00,
 [104064]=0x00,0x03,0x69,0x6d,0x65,0x00,0x96,0x13,0x6f,0x00,0xb5,0x13,0x72,0x75,0x6e,0x63,
 [104080]=0x00,0xcd,0x13,0x04,0x00,0x84,0x81,0x01,0x00,0x00,0x02,0x6c,0x6f,0x77,0x65,0x72,
 [104096]=0x00,0xaf,0x13,0x75,0x70,0x70,0x65,0x72,0x00,0xc7,0x13,0x04,0x00,0x94,0x81,0x01,
 [104112]=0x00,0x04,0x00,0xd4,0x93,0x01,0x01,0x66,0x00,0xd7,0x13,0x04,0x00,0x94,0x94,0x01,
 [104128]=0x00,0x04,0x00,0xcc,0x9e,0x01,0x00,0x04,0x00,0xa4,0xc9,0x01,0x00,0x00,0x02,0x69,
 [104144]=0x6e,0x74,0x65,0x72,0x62,0x6f,0x6f,0x74,0x5f,0x73,0x6a,0x6c,0x6a,0x5f,0x6a,0x75,
 [104160]=0x6d,0x70,0x00,0xe3,0x13,0x6d,0x00,0xa2,0x16,0x04,0x00,0xbc,0x80,0x05,0x00,0x00,
 [104176]=0x04,0x65,0x72,0x72,0x6e,0x6f,0x00,0x85,0x14,0x6c,0x75,0x61,0x5f,0x00,0xc0,0x14,
 [104192]=0x6d,0x61,0x74,0x68,0x5f,0x69,0x73,0x66,0x69,0x6e,0x69,0x74,0x65,0x00,0xb3,0x15,
 [104208]=0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,0x00,0xd2,0x15,0x04,0x00,
 [104224]=0xa4,0xad,0x01,0x00,0x00,0x04,0x66,0x6c,0x75,0x73,0x68,0x5f,0x6f,0x75,0x74,0x70,
 [104240]=0x75,0x74,0x00,0xba,0x14,0x72,0x65,0x61,0x64,0x6c,0x69,0x6e,0x65,0x00,0xec,0x14,
 [104256]=0x73,0x68,0x6f,0x77,0x5f,0x00,0xf8,0x14,0x77,0x72,0x69,0x74,0x65,0x00,0x90,0x15,
 [104272]=0x04,0x00,0x9c,0xaf,0x01,0x00,0x04,0x00,0xfc,0xad,0x01,0x00,0x00,0x02,0x62,0x61,
 [104288]=0x6e,0x6e,0x65,0x72,0x00,0xf2,0x14,0x68,0x65,0x6c,0x70,0x00,0x8a,0x15,0x04,0x00,
 [104304]=0xf8,0xae,0x01,0x00,0x04,0x00,0xdc,0xaa,0x01,0x02,0x5f,0x65,0x72,0x72,0x6f,0x72,
 [104320]=0x66,0x00,0xa7,0x15,0x6c,0x69,0x6e,0x65,0x00,0xad,0x15,0x04,0x00,0xac,0xad,0x01,
 [104336]=0x00,0x04,0x00,0x9c,0xad,0x01,0x00,0x04,0x00,0xf0,0xda,0x01,0x02,0x66,0x00,0xc1,
 [104352]=0x15,0x6c,0x00,0xc7,0x15,0x04,0x00,0x8c,0xdb,0x01,0x00,0x04,0x00,0xa8,0xdb,0x01,
 [104368]=0x00,0x03,0x00,0xa8,0x74,0x00,0x00,0x04,0x61,0x6c,0x6c,0x6f,0x63,0x00,0xcd,0x15,
 [104384]=0x66,0x72,0x65,0x65,0x5f,0x62,0x79,0x74,0x65,0x73,0x00,0xff,0x15,0x72,0x65,0x73,
 [104400]=0x65,0x74,0x00,0x8e,0x16,0x74,0x6f,0x74,0x61,0x6c,0x5f,0x62,0x79,0x74,0x65,0x73,
 [104416]=0x00,0x93,0x16,0x03,0x00,0x9c,0x72,0x01,0x36,0x34,0x00,0x89,0x16,0x03,0x00,0xe0,
 [104432]=0x72,0x00,0x03,0x00,0xa0,0x6e,0x00,0x03,0x00,0xb0,0x73,0x01,0x36,0x34,0x00,0x9d,
 [104448]=0x16,0x03,0x00,0xe8,0x73,0x00,0x00,0x02,0x5f,0x00,0x8b,0x14,0x66,0x73,0x5f,0x00,
 [104464]=0xd3,0x16,0x04,0x00,0xec,0xc5,0x01,0x00,0x00,0x02,0x5f,0x76,0x69,0x72,0x74,0x75,
 [104480]=0x61,0x6c,0x5f,0x66,0x69,0x6c,0x65,0x73,0x00,0xae,0x16,0x65,0x72,0x72,0x00,0xcd,
 [104496]=0x16,0x04,0x00,0xa0,0xc0,0x01,0x00,0x00,0x09,0x63,0x6c,0x65,0x61,0x72,0x00,0xb4,
 [104512]=0x16,0x65,0x78,0x70,0x6f,0x72,0x74,0x5f,0x69,0x6d,0x61,0x67,0x65,0x00,0xa7,0x17,
 [104528]=0x66,0x00,0xb3,0x17,0x67,0x65,0x74,0x63,0x00,0xbd,0x18,0x69,0x00,0xdf,0x18,0x6d,
 [104544]=0x6f,0x75,0x6e,0x74,0x5f,0x69,0x6d,0x61,0x67,0x65,0x00,0xfb,0x18,0x72,0x65,0x00,
 [104560]=0x87,0x19,0x75,0x6e,0x00,0xd6,0x19,0x77,0x72,0x69,0x74,0x65,0x5f,0x65,0x6e,0x74,
 [104576]=0x69,0x72,0x65,0x5f,0x66,0x69,0x6c,0x65,0x00,0xed,0x19,0x04,0x00,0x80,0xc6,0x01,
 [104592]=0x00,0x04,0x00,0xf0,0xb7,0x01,0x00,0x00,0x08,0x63,0x6c,0x6f,0x73,0x65,0x00,0xad,
 [104608]=0x17,0x65,0x00,0xf1,0x17,0x66,0x6c,0x75,0x73,0x68,0x00,0x85,0x18,0x6f,0x70,0x65,
 [104624]=0x6e,0x00,0x8b,0x18,0x72,0x65,0x00,0x97,0x18,0x73,0x65,0x65,0x6b,0x00,0xab,0x18,
 [104640]=0x74,0x65,0x6c,0x6c,0x00,0xb1,0x18,0x77,0x72,0x69,0x74,0x65,0x00,0xb7,0x18,0x04,
 [104656]=0x00,0x80,0xc0,0x01,0x00,0x00,0x02,0x6f,0x66,0x00,0xeb,0x17,0x72,0x72,0x6f,0x72,
 [104672]=0x00,0xff,0x17,0x04,0x00,0x90,0xc0,0x01,0x00,0x04,0x00,0x88,0xbf,0x01,0x00,0x04,
 [104688]=0x00,0xb4,0xb0,0x01,0x00,0x04,0x00,0xb4,0xb8,0x01,0x00,0x00,0x02,0x61,0x64,0x00,
 [104704]=0x91,0x18,0x6f,0x70,0x65,0x6e,0x00,0xa5,0x18,0x04,0x00,0xc4,0xb7,0x01,0x00,0x04,
 [104720]=0x00,0xcc,0xbd,0x01,0x00,0x04,0x00,0xe4,0xbe,0x01,0x00,0x04,0x00,0xc0,0xbb,0x01,
 [104736]=0x00,0x04,0x00,0xd4,0xb9,0x01,0x00,0x04,0x00,0xf0,0xc5,0x01,0x00,0x00,0x02,0x64,
 [104752]=0x61,0x74,0x61,0x00,0xc3,0x18,0x73,0x69,0x7a,0x65,0x00,0xd9,0x18,0x04,0x00,0xf8,
 [104768]=0xc5,0x01,0x00,0x00,0x02,0x6d,0x61,0x67,0x65,0x5f,0x00,0xc9,0x18,0x73,0x5f,0x6d,
 [104784]=0x6f,0x75,0x6e,0x74,0x65,0x64,0x00,0xf5,0x18,0x04,0x00,0xac,0xb0,0x01,0x00,0x04,
 [104800]=0x00,0xa0,0xb0,0x01,0x00,0x04,0x00,0xec,0xc3,0x01,0x00,0x00,0x04,0x61,0x64,0x5f,
 [104816]=0x65,0x6e,0x74,0x69,0x72,0x65,0x5f,0x66,0x69,0x6c,0x65,0x00,0x81,0x19,0x67,0x69,
 [104832]=0x73,0x74,0x65,0x72,0x5f,0x76,0x69,0x72,0x74,0x75,0x61,0x6c,0x5f,0x66,0x69,0x6c,
 [104848]=0x65,0x00,0xbe,0x19,0x6d,0x6f,0x76,0x65,0x00,0xc4,0x19,0x6e,0x61,0x6d,0x65,0x00,
 [104864]=0xca,0x19,0x04,0x00,0xe4,0xc5,0x01,0x00,0x04,0x00,0xe0,0xc0,0x01,0x00,0x04,0x00,
 [104880]=0xec,0xc1,0x01,0x00,0x04,0x00,0xbc,0xc0,0x01,0x00,0x00,0x02,0x67,0x65,0x74,0x63,
 [104896]=0x00,0xd0,0x19,0x6d,0x6f,0x75,0x6e,0x74,0x00,0xe7,0x19,0x04,0x00,0xa8,0xb0,0x01,
 [104912]=0x00,0x04,0x00,0xa4,0xc5,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x69,0x08,0x78,
 [104928]=0x24,0x38,0x44,0x88,0x02,0x10,0x10,0x1c,0x1c,0x14,0xe8,0x03,0x44,0x50,0x38,0x40,
 [104944]=0xa4,0x01,0x5c,0x58,0x4c,0x1c,0x88,0x02,0x34,0x78,0x84,0x01,0x08,0x0c,0x44,0x40,
 [104960]=0x4c,0x1c,0x54,0x18,0x18,0x18,0x28,0x14,0x14,0x18,0x2c,0x20,0x14,0x10,0x10,0x30,
 [104976]=0x2c,0x04,0x1c,0x48,0x2c,0x44,0x40,0x48,0x0c,0x0c,0x18,0x40,0x98,0x01,0x38,0x7c,
 [104992]=0x30,0x44,0x50,0xd0,0x01,0x30,0x60,0x58,0x50,0x20,0xbc,0x01,0x88,0x01,0x34,0x28,
 [105008]=0x3c,0x2c,0x2c,0x38,0x38,0x28,0x40,0x28,0x28,0x28,0x10,0x28,0x28,0x1c,0xa8,0x02,
 [105024]=0x44,0xa0,0x02,0x9c,0x03,0x1c,0xfc,0x07,0x3c,0x54,0xa0,0x01,0x2c,0x68,0x50,0xb4,
 [105040]=0x01,0x8c,0x01,0x08,0x08,0x50,0x54,0x28,0x24,0x84,0x01,0x08,0x04,0x08,0xbc,0x05,
 [105056]=0x4c,0x88,0x01,0x2c,0x44,0xa0,0x01,0xec,0x01,0x8c,0x02,0x98,0x01,0x24,0x78,0x10,
 [105072]=0x10,0x1c,0x24,0x48,0x44,0xac,0x01,0x54,0xb8,0x01,0x40,0x08,0x04,0x08,0x08,0x08,
 [105088]=0x28,0x40,0xbc,0x01,0x08,0x08,0x18,0x50,0x10,0x18,0x20,0x84,0x01,0x08,0x10,0x2c,
 [105104]=0x2c,0x04,0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01,0x08,0x10,0x10,0x04,0x4c,0x10,
 [105120]=0x08,0x5c,0x28,0x80,0x01,0x38,0x18,0x30,0x0c,0x0c,0x24,0xac,0x01,0x0c,0x08,0x0c,
 [105136]=0x40,0xa8,0x01,0x04,0x08,0x14,0x3c,0x2c,0x1c,0x1c,0x1c,0x1c,0x58,0xe4,0x02,0x04,
 [105152]=0x9c,0x04,0xac,0x02,0x38,0x28,0x50,0xa0,0x02,0x8c,0x03,0x90,0x9a,0x01,0x30,0xf4,
 [105168]=0x24,0x54,0x3c,0x88,0x05,0xf4,0x0d,0x38,0xd0,0x01,0x04,0xa0,0x07,0xc0,0x05,0xe8,
 [105184]=0x19,0xc0,0x11,0xb8,0x06,0x0c,0x8c,0x01,0x68,0x5c,0x60,0x10,0x2c,0x84,0x02,0x8c,
 [105200]=0x03,0x44,0x2c,0x20,0x2c,0x24,0x48,0x38,0x54,0x5c,0x2c,0x58,0x58,0x60,0x14,0x84,
 [105216]=0x01,0xc4,0x01,0x78,0x24,0xac,0x01,0x24,0x48,0xb4,0x01,0xe0,0x01,0x44,0x0c,0x60,
 [105232]=0x7c,0x14,0x2c,0x18,0x2c,0x64,0xd8,0x01,0xd0,0x18,0xf4,0x01,0xc4,0x03,0x1c,0x98,
 [105248]=0x01,0x60,0xec,0x01,0x60,0xf8,0x02,0x2c,0x64,0x58,0x3c,0x0c,0x54,0x70,0x64,0x78,
 [105264]=0x14,0x58,0x38,0xe0,0x01,0x24,0x24,0xa4,0x01,0x5c,0x48,0x7c,0x40,0xc0,0x01,0x4c,
 [105280]=0x94,0x05,0x20,0xb0,0x02,0x78,0xd8,0x01,0x84,0x04,0xe4,0x02,0x58,0x24,0x10,0x70,
 [105296]=0x40,0x08,0x30,0x1c,0xd8,0x01,0x2c,0x5c,0x60,0x14,0x2c,0x38,0x00,0x00,0x00,0x00,
 [105312]=0x30,0x37,0x00,0x00,0x04,0x00,0x01,0x00,0x14,0x39,0x00,0x00,0x08,0x00,0x01,0x00,
 [105328]=0x5c,0x39,0x00,0x00,0x04,0x00,0x01,0x00,0xac,0x39,0x00,0x00,0x04,0x00,0x01,0x00,
 [105344]=0xe4,0x39,0x00,0x00,0x04,0x00,0x01,0x00,0x24,0x3a,0x00,0x00,0x04,0x00,0x01,0x00,
 [105360]=0xc8,0x3a,0x00,0x00,0x04,0x00,0x01,0x00,0x74,0x3e,0x00,0x00,0x04,0x00,0x01,0x00,
 [105376]=0xb4,0x3e,0x00,0x00,0x04,0x00,0x01,0x00,0x00,0x3f,0x00,0x00,0x04,0x00,0x01,0x00,
 [105392]=0x68,0x42,0x00,0x00,0x04,0x00,0x01,0x00,0x74,0x42,0x00,0x00,0x04,0x00,0x01,0x00,
 [105408]=0x8c,0x42,0x00,0x00,0x04,0x00,0x01,0x00,0xa0,0x45,0x00,0x00,0x10,0x00,0x01,0x00,
 [105424]=0x30,0x46,0x00,0x00,0x10,0x00,0x01,0x00,0x78,0x46,0x00,0x00,0x20,0x00,0x01,0x00,
 [105440]=0xe0,0x46,0x00,0x00,0x08,0x00,0x01,0x00,0xbc,0x47,0x00,0x00,0x08,0x00,0x01,0x00,
 [105456]=0x44,0x48,0x00,0x00,0x08,0x00,0x01,0x00,0xe0,0x48,0x00,0x00,0x04,0x00,0x01,0x00,
 [105472]=0x74,0x50,0x00,0x00,0x60,0x00,0x04,0x00,0x44,0x53,0x00,0x00,0x04,0x00,0x01,0x00,
 [105488]=0xd4,0x53,0x00,0x00,0x04,0x00,0x01,0x00,0x70,0x54,0x00,0x00,0x08,0x00,0x01,0x00,
 [105504]=0x08,0x55,0x00,0x00,0x04,0x00,0x01,0x00,0x58,0x55,0x00,0x00,0x04,0x00,0x01,0x00,
 [105520]=0x08,0x56,0x00,0x00,0x08,0x00,0x01,0x00,0x90,0x56,0x00,0x00,0x0c,0x00,0x01,0x00,
 [105536]=0xf4,0x56,0x00,0x00,0x08,0x00,0x01,0x00,0x38,0x57,0x00,0x00,0x18,0x00,0x01,0x00,
 [105552]=0x94,0x57,0x00,0x00,0x08,0x00,0x01,0x00,0x1c,0x58,0x00,0x00,0x04,0x00,0x01,0x00,
 [105568]=0xdc,0x5a,0x00,0x00,0x14,0x00,0x01,0x00,0x38,0x5b,0x00,0x00,0x04,0x00,0x01,0x00,
 [105584]=0xc0,0x5b,0x00,0x00,0x04,0x00,0x01,0x00,0xbc,0x5d,0x00,0x00,0x04,0x00,0x01,0x00,
 [105600]=0x60,0x5f,0x00,0x00,0x04,0x00,0x01,0x00,0x84,0x5f,0x00,0x00,0x04,0x00,0x01,0x00,
 [105616]=0xfc,0x5f,0x00,0x00,0x04,0x00,0x01,0x00,0xa4,0x60,0x00,0x00,0x04,0x00,0x01,0x00,
 [105632]=0xe8,0x60,0x00,0x00,0x04,0x00,0x01,0x00,0x94,0x61,0x00,0x00,0x04,0x00,0x01,0x00,
 [105648]=0xe8,0x61,0x00,0x00,0x04,0x00,0x01,0x00,0x88,0x63,0x00,0x00,0x38,0x00,0x04,0x00,
 [105664]=0x08,0x64,0x00,0x00,0x24,0x00,0x01,0x00,0x50,0x64,0x00,0x00,0x04,0x00,0x01,0x00,
 [105680]=0xa0,0x64,0x00,0x00,0x04,0x00,0x01,0x00,0x54,0x65,0x00,0x00,0x04,0x00,0x04,0x00,
 [105696]=0x64,0x65,0x00,0x00,0x0c,0x00,0x01,0x00,0x88,0x66,0x00,0x00,0x04,0x00,0x04,0x00,
 [105712]=0x98,0x66,0x00,0x00,0x0c,0x00,0x01,0x00,0x48,0x67,0x00,0x00,0x04,0x00,0x04,0x00,
 [105728]=0x58,0x67,0x00,0x00,0x0c,0x00,0x01,0x00,0x08,0x68,0x00,0x00,0x04,0x00,0x04,0x00,
 [105744]=0x18,0x68,0x00,0x00,0x0c,0x00,0x01,0x00,0xc8,0x68,0x00,0x00,0x04,0x00,0x04,0x00,
 [105760]=0xd8,0x68,0x00,0x00,0x0c,0x00,0x01,0x00,0xcc,0x69,0x00,0x00,0x04,0x00,0x01,0x00,
 [105776]=0x74,0x6a,0x00,0x00,0x04,0x00,0x01,0x00,0xac,0x6a,0x00,0x00,0x04,0x00,0x01,0x00,
 [105792]=0xc4,0x6a,0x00,0x00,0x04,0x00,0x01,0x00,0xf4,0x6a,0x00,0x00,0x04,0x00,0x01,0x00,
 [105808]=0x30,0x6b,0x00,0x00,0x04,0x00,0x01,0x00,0xdc,0x6b,0x00,0x00,0x04,0x00,0x01,0x00,
 [105824]=0xe4,0x6c,0x00,0x00,0x04,0x00,0x01,0x00,0xb8,0x71,0x00,0x00,0x04,0x00,0x01,0x00,
 [105840]=0xf4,0x71,0x00,0x00,0x34,0x00,0x04,0x00,0xac,0x74,0x00,0x00,0x0c,0x00,0x01,0x00,
 [105856]=0x3c,0x76,0x00,0x00,0x08,0x00,0x01,0x00,0x44,0x77,0x00,0x00,0x18,0x00,0x04,0x00,
 [105872]=0x08,0x7f,0x00,0x00,0x10,0x00,0x01,0x00,0x78,0x86,0x00,0x00,0x0c,0x00,0x01,0x00,
 [105888]=0xcc,0x88,0x00,0x00,0x04,0x00,0x01,0x00,0x18,0x89,0x00,0x00,0x08,0x00,0x01,0x00,
 [105904]=0x48,0x8e,0x00,0x00,0x04,0x00,0x01,0x00,0x60,0x92,0x00,0x00,0x14,0x00,0x01,0x00,
 [105920]=0x34,0x93,0x00,0x00,0x0c,0x00,0x01,0x00,0x5c,0x99,0x00,0x00,0x04,0x00,0x01,0x00,
 [105936]=0x20,0x9a,0x00,0x00,0x04,0x00,0x01,0x00,0x30,0xa5,0x00,0x00,0x08,0x00,0x01,0x00,
 [105952]=0xb4,0xb6,0x00,0x00,0x04,0x00,0x01,0x00,0x8c,0xb9,0x00,0x00,0x18,0x00,0x01,0x00,
 [105968]=0xb0,0xbc,0x00,0x00,0x08,0x00,0x01,0x00,0xf4,0xbf,0x00,0x00,0x20,0x00,0x01,0x00,
 [105984]=0x14,0xc0,0x00,0x00,0xe0,0x00,0x04,0x00,0x4c,0xc3,0x00,0x00,0x08,0x00,0x01,0x00,
 [106000]=0xcc,0xc6,0x00,0x00,0x1c,0x00,0x04,0x00,0x90,0xce,0x00,0x00,0x1c,0x00,0x04,0x00,
 [106016]=0x8c,0xd3,0x00,0x00,0x0c,0x00,0x01,0x00,0x6c,0xd4,0x00,0x00,0x10,0x00,0x01,0x00,
 [106032]=0x10,0xd5,0x00,0x00,0x48,0x00,0x04,0x00,0xbc,0xd8,0x00,0x00,0x20,0x00,0x04,0x00,
 [106048]=0x00,0xd9,0x00,0x00,0x10,0x00,0x01,0x00,0x64,0xdf,0x00,0x00,0x30,0x00,0x04,0x00,
 [106064]=0xe4,0xdf,0x00,0x00,0x20,0x00,0x01,0x00,0x68,0xe4,0x00,0x00,0x08,0x00,0x04,0x00,
 [106080]=0x9c,0xe4,0x00,0x00,0x14,0x00,0x01,0x00,0x20,0xe7,0x00,0x00,0x0c,0x00,0x04,0x00,
 [106096]=0x5c,0xe7,0x00,0x00,0x14,0x00,0x01,0x00,0x1c,0xf2,0x00,0x00,0x28,0x00,0x01,0x00,
 [106112]=0x5c,0xf2,0x00,0x00,0x18,0x00,0x01,0x00,0x84,0xf2,0x00,0x00,0x80,0x00,0x04,0x00,
 [106128]=0x1c,0xf4,0x00,0x00,0x3c,0x00,0x01,0x00,0xb0,0xfb,0x00,0x00,0xcc,0x00,0x04,0x00,
 [106144]=0xf8,0xfc,0x00,0x00,0x20,0x00,0x01,0x00,0xcc,0xff,0x00,0x00,0x38,0x00,0x04,0x00,
 [106160]=0x3c,0x00,0x01,0x00,0x14,0x00,0x01,0x00,0x64,0x1a,0x01,0x00,0x40,0x00,0x04,0x00,
 [106176]=0xe4,0x1b,0x01,0x00,0x20,0x00,0x01,0x00,0xac,0x1e,0x01,0x00,0x10,0x00,0x01,0x00,
 [106192]=0xc8,0x27,0x01,0x00,0x0c,0x00,0x01,0x00,0x30,0x29,0x01,0x00,0x04,0x00,0x01,0x00,
 [106208]=0x68,0x2a,0x01,0x00,0x14,0x00,0x04,0x00,0x50,0x31,0x01,0x00,0x28,0x00,0x01,0x00,
 [106224]=0xd8,0x32,0x01,0x00,0x04,0x00,0x01,0x00,0x93,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106240]=0xa8,0x34,0x00,0x00,0xa3,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,0xc0,0x35,0x00,0x00,
 [106256]=0xb3,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,0x34,0x37,0x00,0x00,0xc7,0x0a,0x00,0x00,
 [106272]=0x0e,0x01,0x00,0x00,0xe8,0x3b,0x00,0x00,0xd2,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106288]=0x40,0x46,0x00,0x00,0xde,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,0x30,0x4c,0x00,0x00,
 [106304]=0xeb,0x0a,0x00,0x00,0x0e,0x01,0x00,0x00,0x48,0x53,0x00,0x00,0xf8,0x0a,0x00,0x00,
 [106320]=0x0e,0x01,0x00,0x00,0x84,0x53,0x00,0x00,0x07,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106336]=0xd8,0x53,0x00,0x00,0x18,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,0xa4,0x54,0x00,0x00,
 [106352]=0x35,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,0x0c,0x55,0x00,0x00,0x51,0x0b,0x00,0x00,
 [106368]=0x0e,0x01,0x00,0x00,0x10,0x56,0x00,0x00,0x6b,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106384]=0x50,0x57,0x00,0x00,0x7e,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,0xf0,0x5a,0x00,0x00,
 [106400]=0x94,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,0x3c,0x5b,0x00,0x00,0xa9,0x0b,0x00,0x00,
 [106416]=0x0e,0x01,0x00,0x00,0xa8,0x60,0x00,0x00,0xc1,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106432]=0x98,0x61,0x00,0x00,0x35,0x0b,0x00,0x00,0x0e,0x01,0x00,0x00,0x54,0x64,0x00,0x00,
 [106448]=0xd8,0x0b,0x00,0x00,0x1e,0x01,0x80,0x00,0x78,0x65,0x00,0x00,0xf0,0x0b,0x00,0x00,
 [106464]=0x0e,0x01,0x00,0x00,0x6c,0x69,0x00,0x00,0x21,0x0c,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106480]=0xf8,0x69,0x00,0x00,0x4f,0x0c,0x00,0x00,0x0e,0x01,0x00,0x00,0x34,0x6b,0x00,0x00,
 [106496]=0x7d,0x0c,0x00,0x00,0x0e,0x01,0x00,0x00,0x40,0x6c,0x00,0x00,0x96,0x0c,0x00,0x00,
 [106512]=0x0e,0x01,0x00,0x00,0xa0,0x6f,0x00,0x00,0xd3,0x0c,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106528]=0xbc,0x71,0x00,0x00,0xf3,0x0c,0x00,0x00,0x0e,0x01,0x00,0x00,0xe8,0x72,0x00,0x00,
 [106544]=0x0a,0x0d,0x00,0x00,0x0e,0x01,0x00,0x00,0x20,0x73,0x00,0x00,0x23,0x0d,0x00,0x00,
 [106560]=0x0e,0x01,0x00,0x00,0x48,0x73,0x00,0x00,0x3a,0x0d,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106576]=0xb8,0x74,0x00,0x00,0x69,0x0d,0x00,0x00,0x1e,0x01,0x80,0x00,0x54,0xc3,0x00,0x00,
 [106592]=0x82,0x0d,0x00,0x00,0x0e,0x01,0x00,0x00,0x84,0xc3,0x00,0x00,0xf8,0x0d,0x00,0x00,
 [106608]=0x1e,0x01,0x80,0x00,0xf8,0xd5,0x00,0x00,0x11,0x0e,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106624]=0x4c,0xd6,0x00,0x00,0x39,0x0e,0x00,0x00,0x0e,0x01,0x00,0x00,0x04,0xe0,0x00,0x00,
 [106640]=0x6f,0x0e,0x00,0x00,0x0e,0x01,0x00,0x00,0x3c,0xe0,0x00,0x00,0xa8,0x0e,0x00,0x00,
 [106656]=0x1e,0x01,0x80,0x00,0x50,0x00,0x01,0x00,0xc6,0x0e,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106672]=0x5c,0x00,0x01,0x00,0xf8,0x0e,0x00,0x00,0x1e,0x01,0x80,0x00,0xe8,0x00,0x01,0x00,
 [106688]=0x16,0x0f,0x00,0x00,0x1e,0x01,0x80,0x00,0x50,0x01,0x01,0x00,0x31,0x0f,0x00,0x00,
 [106704]=0x1e,0x01,0x80,0x00,0xac,0x01,0x01,0x00,0x4d,0x0f,0x00,0x00,0x1e,0x01,0x80,0x00,
 [106720]=0x0c,0x02,0x01,0x00,0x75,0x0f,0x00,0x00,0x1e,0x01,0x80,0x00,0x1c,0x02,0x01,0x00,
 [106736]=0x8b,0x0f,0x00,0x00,0x0e,0x01,0x00,0x00,0x48,0x02,0x01,0x00,0xbd,0x0f,0x00,0x00,
 [106752]=0x0e,0x01,0x00,0x00,0x4c,0x03,0x01,0x00,0x07,0x10,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106768]=0xd8,0x04,0x01,0x00,0x32,0x10,0x00,0x00,0x0e,0x01,0x00,0x00,0x1c,0x05,0x01,0x00,
 [106784]=0x72,0x10,0x00,0x00,0x0e,0x01,0x00,0x00,0x48,0x05,0x01,0x00,0xac,0x10,0x00,0x00,
 [106800]=0x0e,0x01,0x00,0x00,0x68,0x05,0x01,0x00,0xec,0x10,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106816]=0x94,0x05,0x01,0x00,0x1c,0x11,0x00,0x00,0x0e,0x01,0x00,0x00,0xb8,0x05,0x01,0x00,
 [106832]=0x5a,0x11,0x00,0x00,0x0e,0x01,0x00,0x00,0x00,0x06,0x01,0x00,0x9d,0x11,0x00,0x00,
 [106848]=0x1e,0x01,0x80,0x00,0x38,0x06,0x01,0x00,0xb6,0x11,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106864]=0x8c,0x06,0x01,0x00,0xe9,0x11,0x00,0x00,0x1e,0x01,0x80,0x00,0xe8,0x06,0x01,0x00,
 [106880]=0x02,0x12,0x00,0x00,0x1e,0x01,0x80,0x00,0x14,0x07,0x01,0x00,0x1c,0x12,0x00,0x00,
 [106896]=0x1e,0x01,0x80,0x00,0x6c,0x07,0x01,0x00,0x49,0x12,0x00,0x00,0x1e,0x01,0x80,0x00,
 [106912]=0xc4,0x07,0x01,0x00,0x65,0x12,0x00,0x00,0x1e,0x01,0x80,0x00,0x24,0x08,0x01,0x00,
 [106928]=0x8d,0x12,0x00,0x00,0x0e,0x01,0x00,0x00,0x38,0x08,0x01,0x00,0xff,0x12,0x00,0x00,
 [106944]=0x0e,0x01,0x00,0x00,0xbc,0x08,0x01,0x00,0x5e,0x13,0x00,0x00,0x0e,0x01,0x00,0x00,
 [106960]=0x80,0x09,0x01,0x00,0x95,0x13,0x00,0x00,0x0e,0x01,0x00,0x00,0xf8,0x09,0x01,0x00,
 [106976]=0xbf,0x13,0x00,0x00,0x0e,0x01,0x00,0x00,0x1c,0x0a,0x01,0x00,0xf4,0x13,0x00,0x00,
 [106992]=0x1e,0x01,0x80,0x00,0xc8,0x0a,0x01,0x00,0x0a,0x14,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107008]=0xec,0x0a,0x01,0x00,0x3b,0x14,0x00,0x00,0x0e,0x01,0x00,0x00,0x34,0x0b,0x01,0x00,
 [107024]=0x72,0x14,0x00,0x00,0x0e,0x01,0x00,0x00,0xe8,0x0b,0x01,0x00,0xa4,0x14,0x00,0x00,
 [107040]=0x0e,0x01,0x00,0x00,0xc8,0x0c,0x01,0x00,0xd7,0x14,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107056]=0x0c,0x0d,0x01,0x00,0x02,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,0x18,0x0d,0x01,0x00,
 [107072]=0x31,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,0x78,0x0d,0x01,0x00,0x4d,0x15,0x00,0x00,
 [107088]=0x1e,0x01,0x80,0x00,0xf4,0x0d,0x01,0x00,0x75,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107104]=0x08,0x0e,0x01,0x00,0x8e,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,0x34,0x0e,0x01,0x00,
 [107120]=0xb4,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,0x4c,0x0e,0x01,0x00,0xca,0x15,0x00,0x00,
 [107136]=0x1e,0x01,0x80,0x00,0x78,0x0e,0x01,0x00,0xe5,0x15,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107152]=0xdc,0x0e,0x01,0x00,0x0f,0x16,0x00,0x00,0x0e,0x01,0x00,0x00,0xb4,0x0f,0x01,0x00,
 [107168]=0x5c,0x16,0x00,0x00,0x0e,0x01,0x00,0x00,0x04,0x1c,0x01,0x00,0x97,0x16,0x00,0x00,
 [107184]=0x0e,0x01,0x00,0x00,0xf8,0x1c,0x01,0x00,0x0b,0x17,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107200]=0xbc,0x1e,0x01,0x00,0x40,0x17,0x00,0x00,0x0e,0x01,0x00,0x00,0xd8,0x1e,0x01,0x00,
 [107216]=0x6e,0x17,0x00,0x00,0x1e,0x01,0x80,0x00,0x70,0x1f,0x01,0x00,0x9b,0x17,0x00,0x00,
 [107232]=0x0e,0x01,0x00,0x00,0xd0,0x1f,0x01,0x00,0xf5,0x17,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107248]=0xbc,0x20,0x01,0x00,0x24,0x18,0x00,0x00,0x0e,0x01,0x00,0x00,0x1c,0x21,0x01,0x00,
 [107264]=0x82,0x18,0x00,0x00,0x1e,0x01,0x80,0x00,0x94,0x22,0x01,0x00,0x9b,0x18,0x00,0x00,
 [107280]=0x1e,0x01,0x80,0x00,0xc0,0x22,0x01,0x00,0xb9,0x18,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107296]=0x24,0x23,0x01,0x00,0xd4,0x18,0x00,0x00,0x0e,0x01,0x00,0x00,0x7c,0x23,0x01,0x00,
 [107312]=0x0c,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,0xb8,0x23,0x01,0x00,0x2a,0x19,0x00,0x00,
 [107328]=0x1e,0x01,0x80,0x00,0xc4,0x23,0x01,0x00,0x43,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107344]=0x18,0x24,0x01,0x00,0x61,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,0x88,0x24,0x01,0x00,
 [107360]=0x7c,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,0xec,0x24,0x01,0x00,0x98,0x19,0x00,0x00,
 [107376]=0x1e,0x01,0x80,0x00,0x64,0x25,0x01,0x00,0xc0,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107392]=0x78,0x25,0x01,0x00,0xef,0x19,0x00,0x00,0x1e,0x01,0x80,0x00,0xd0,0x25,0x01,0x00,
 [107408]=0x0e,0x1a,0x00,0x00,0x1e,0x01,0x80,0x00,0x08,0x26,0x01,0x00,0x38,0x1a,0x00,0x00,
 [107424]=0x1e,0x01,0x80,0x00,0xe8,0x26,0x01,0x00,0x4e,0x1a,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107440]=0x0c,0x27,0x01,0x00,0x82,0x1a,0x00,0x00,0x0e,0x01,0x00,0x00,0x30,0x27,0x01,0x00,
 [107456]=0xb0,0x1a,0x00,0x00,0x0e,0x01,0x00,0x00,0xd4,0x27,0x01,0x00,0xf0,0x1a,0x00,0x00,
 [107472]=0x0e,0x01,0x00,0x00,0x30,0x28,0x01,0x00,0x2f,0x1b,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107488]=0x78,0x28,0x01,0x00,0x69,0x1b,0x00,0x00,0x0e,0x01,0x00,0x00,0xf4,0x28,0x01,0x00,
 [107504]=0xa2,0x1b,0x00,0x00,0x0e,0x01,0x00,0x00,0x34,0x29,0x01,0x00,0xe9,0x1b,0x00,0x00,
 [107520]=0x0e,0x01,0x00,0x00,0xf4,0x29,0x01,0x00,0x1c,0x1c,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107536]=0x40,0x2a,0x01,0x00,0x53,0x1c,0x00,0x00,0x0e,0x01,0x00,0x00,0xd4,0x2c,0x01,0x00,
 [107552]=0x7a,0x1c,0x00,0x00,0x0e,0x01,0x00,0x00,0xf4,0x2c,0x01,0x00,0xd7,0x1c,0x00,0x00,
 [107568]=0x0e,0x01,0x00,0x00,0x24,0x2e,0x01,0x00,0x23,0x1d,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107584]=0x9c,0x2e,0x01,0x00,0x4d,0x1d,0x00,0x00,0x0e,0x01,0x00,0x00,0x74,0x2f,0x01,0x00,
 [107600]=0xa5,0x1d,0x00,0x00,0x0e,0x01,0x00,0x00,0x78,0x31,0x01,0x00,0x19,0x1e,0x00,0x00,
 [107616]=0x1e,0x01,0x80,0x00,0xdc,0x32,0x01,0x00,0x45,0x1e,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107632]=0x34,0x33,0x01,0x00,0x70,0x1e,0x00,0x00,0x0e,0x01,0x00,0x00,0x58,0x33,0x01,0x00,
 [107648]=0xcc,0x1e,0x00,0x00,0x0e,0x01,0x00,0x00,0x68,0x33,0x01,0x00,0x04,0x1f,0x00,0x00,
 [107664]=0x0e,0x01,0x00,0x00,0xd8,0x33,0x01,0x00,0x3b,0x1f,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107680]=0x18,0x34,0x01,0x00,0x6f,0x1f,0x00,0x00,0x0e,0x01,0x00,0x00,0x20,0x34,0x01,0x00,
 [107696]=0xa9,0x1f,0x00,0x00,0x0e,0x01,0x00,0x00,0x50,0x34,0x01,0x00,0xe3,0x1f,0x00,0x00,
 [107712]=0x1e,0x01,0x80,0x00,0x6c,0x34,0x01,0x00,0x0d,0x20,0x00,0x00,0x1e,0x01,0x80,0x00,
 [107728]=0x44,0x35,0x01,0x00,0x23,0x20,0x00,0x00,0x1e,0x01,0x80,0x00,0x70,0x35,0x01,0x00,
 [107744]=0x3e,0x20,0x00,0x00,0x1e,0x01,0x80,0x00,0xcc,0x35,0x01,0x00,0x5a,0x20,0x00,0x00,
 [107760]=0x1e,0x01,0x80,0x00,0x2c,0x36,0x01,0x00,0x82,0x20,0x00,0x00,0x0e,0x01,0x00,0x00,
 [107776]=0x40,0x36,0x01,0x00,0xbc,0x20,0x00,0x00,0x1e,0x01,0x80,0x00,0x6c,0x36,0x01,0x00,
 [107792]=0xdc,0x20,0x00,0x00,0x1e,0x01,0x80,0x00,0xa4,0x36,0x01,0x00,0xf2,0x20,0x00,0x00,
 [107808]=0x1e,0x02,0x00,0x00,0xc8,0x36,0x01,0x00,0x00,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,
 [107824]=0x28,0x39,0x01,0x00,0x12,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x38,0x39,0x01,0x00,
 [107840]=0x24,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x48,0x39,0x01,0x00,0x36,0x21,0x00,0x00,
 [107856]=0x0e,0x04,0x00,0x00,0x58,0x39,0x01,0x00,0x49,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,
 [107872]=0x68,0x39,0x01,0x00,0x00,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x78,0x39,0x01,0x00,
 [107888]=0x5c,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0xec,0x39,0x01,0x00,0x6e,0x21,0x00,0x00,
 [107904]=0x0e,0x04,0x00,0x00,0x14,0x3a,0x01,0x00,0x12,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,
 [107920]=0x28,0x3a,0x01,0x00,0x80,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x44,0x3a,0x01,0x00,
 [107936]=0x93,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x4c,0x3a,0x01,0x00,0xa6,0x21,0x00,0x00,
 [107952]=0x0e,0x04,0x00,0x00,0x58,0x3a,0x01,0x00,0xb9,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,
 [107968]=0x9c,0x3a,0x01,0x00,0xcc,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x08,0x3b,0x01,0x00,
 [107984]=0xdf,0x21,0x00,0x00,0x0e,0x04,0x00,0x00,0x28,0x3b,0x01,0x00,0xf2,0x21,0x00,0x00,
 [108000]=0x0e,0x05,0x00,0x00,0x84,0x3b,0x01,0x00,0x19,0x22,0x00,0x00,0x0e,0x05,0x00,0x00,
 [108016]=0x8c,0x3b,0x01,0x00,0x43,0x22,0x00,0x00,0x0e,0x05,0x00,0x00,0x94,0x3b,0x01,0x00,
 [108032]=0x6b,0x22,0x00,0x00,0x0e,0x05,0x00,0x00,0x94,0x3c,0x01,0x00,0x93,0x22,0x00,0x00,
 [108048]=0x0e,0x05,0x00,0x00,0x08,0x3d,0x01,0x00,0xbc,0x22,0x00,0x00,0x0e,0x05,0x00,0x00,
 [108064]=0x7c,0x3d,0x01,0x00,0xe6,0x22,0x00,0x00,0x0e,0x05,0x00,0x00,0xf4,0x3d,0x01,0x00,
 [108080]=0x11,0x23,0x00,0x00,0x0e,0x05,0x00,0x00,0x6c,0x3e,0x01,0x00,0x3e,0x23,0x00,0x00,
 [108096]=0x0e,0x05,0x00,0x00,0xb8,0x3e,0x01,0x00,0x67,0x23,0x00,0x00,0x0e,0x05,0x00,0x00,
 [108112]=0xd4,0x3e,0x01,0x00,0x90,0x23,0x00,0x00,0x0e,0x05,0x00,0x00,0xf0,0x3e,0x01,0x00,
 [108128]=0xb8,0x23,0x00,0x00,0x0e,0x05,0x00,0x00,0x0c,0x3f,0x01,0x00,0xe0,0x23,0x00,0x00,
 [108144]=0x0e,0x05,0x00,0x00,0x28,0x3f,0x01,0x00,0x26,0x24,0x00,0x00,0x0e,0x05,0x00,0x00,
 [108160]=0x42,0x3f,0x01,0x00,0x51,0x24,0x00,0x00,0x0e,0x05,0x00,0x00,0x82,0x3f,0x01,0x00,
 [108176]=0x7e,0x24,0x00,0x00,0x0e,0x08,0x00,0x00,0x08,0x40,0x01,0x00,0x8d,0x24,0x00,0x00,
 [108192]=0x0e,0x08,0x00,0x00,0x0c,0x40,0x01,0x00,0x96,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,
 [108208]=0x80,0x40,0x01,0x00,0xa6,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,0x88,0x40,0x01,0x00,
 [108224]=0xbc,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,0x8c,0x40,0x01,0x00,0xcc,0x24,0x00,0x00,
 [108240]=0x0e,0x0a,0x00,0x00,0x8c,0x42,0x01,0x00,0xdc,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,
 [108256]=0x90,0x42,0x01,0x00,0xf3,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,0x94,0x42,0x01,0x00,
 [108272]=0x02,0x25,0x00,0x00,0x0e,0x0a,0x00,0x00,0x98,0x42,0x01,0x00,0x5a,0x25,0x00,0x00,
 [108288]=0x0e,0x0a,0x00,0x00,0xa0,0x42,0x01,0x00,0xae,0x25,0x00,0x00,0x0e,0x0a,0x00,0x00,
 [108304]=0xa0,0x44,0x01,0x00,0xf1,0x25,0x00,0x00,0x0e,0x0a,0x00,0x00,0xf4,0x44,0x01,0x00,
 [108320]=0x2e,0x26,0x00,0x00,0x0e,0x0a,0x00,0x00,0xf8,0x44,0x01,0x00,0x64,0x26,0x00,0x00,
 [108336]=0x0e,0x0a,0x00,0x00,0xf8,0x48,0x01,0x00,0xcb,0x26,0x00,0x00,0x0e,0x0a,0x00,0x00,
 [108352]=0x00,0x49,0x01,0x00,0x96,0x24,0x00,0x00,0x0e,0x0a,0x00,0x00,0x00,0x4b,0x01,0x00,
 [108368]=0x02,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0xf4,0x6b,0x00,0x00,0x12,0x00,0x00,0x00,
 [108384]=0x0f,0x01,0x00,0x00,0x04,0x6b,0x00,0x00,0x2d,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108400]=0xf8,0x6a,0x00,0x00,0x4a,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0xb0,0x6a,0x00,0x00,
 [108416]=0x61,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0x10,0x6b,0x00,0x00,0x76,0x00,0x00,0x00,
 [108432]=0x0f,0x01,0x00,0x00,0xe0,0x6b,0x00,0x00,0x96,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108448]=0xc8,0x6a,0x00,0x00,0xaf,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0x44,0x76,0x00,0x00,
 [108464]=0xd9,0x00,0x00,0x00,0x0f,0x01,0x00,0x00,0x98,0x73,0x00,0x00,0xf9,0x00,0x00,0x00,
 [108480]=0x0f,0x01,0x00,0x00,0x0c,0xe1,0x00,0x00,0x1f,0x01,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108496]=0x10,0xe1,0x00,0x00,0x49,0x01,0x00,0x00,0x0f,0x01,0x00,0x00,0x10,0xd9,0x00,0x00,
 [108512]=0x73,0x01,0x00,0x00,0x0f,0x01,0x00,0x00,0x18,0xfd,0x00,0x00,0x9d,0x01,0x00,0x00,
 [108528]=0x0f,0x01,0x00,0x00,0xb0,0xe4,0x00,0x00,0xc7,0x01,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108544]=0x58,0xf4,0x00,0x00,0xf1,0x01,0x00,0x00,0x0f,0x01,0x00,0x00,0x70,0xe7,0x00,0x00,
 [108560]=0x1c,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,0x88,0xd6,0x00,0x00,0x42,0x02,0x00,0x00,
 [108576]=0x0f,0x05,0x00,0x00,0x4c,0x3b,0x01,0x00,0x50,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108592]=0xec,0x64,0x00,0x00,0x61,0x02,0x00,0x00,0x0f,0x09,0x00,0x00,0x4c,0x40,0x01,0x00,
 [108608]=0x88,0x02,0x00,0x00,0x0f,0x09,0x00,0x00,0x5c,0x40,0x01,0x00,0xb2,0x02,0x00,0x00,
 [108624]=0x0f,0x09,0x00,0x00,0x6c,0x40,0x01,0x00,0xdd,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108640]=0xa4,0x66,0x00,0x00,0xe5,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,0x24,0x68,0x00,0x00,
 [108656]=0xee,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,0xe4,0x65,0x00,0x00,0xf6,0x02,0x00,0x00,
 [108672]=0x0f,0x01,0x00,0x00,0x64,0x67,0x00,0x00,0xff,0x02,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108688]=0xe0,0x65,0x00,0x00,0x06,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0xb4,0x65,0x00,0x00,
 [108704]=0x0d,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0xcc,0x3a,0x00,0x00,0x18,0x03,0x00,0x00,
 [108720]=0x0f,0x01,0x00,0x00,0x80,0x3b,0x00,0x00,0x23,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108736]=0xa4,0x3f,0x00,0x00,0x2c,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0x10,0x69,0x00,0x00,
 [108752]=0x46,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0xe4,0x68,0x00,0x00,0x54,0x03,0x00,0x00,
 [108768]=0x0f,0x01,0x00,0x00,0x88,0x65,0x00,0x00,0x67,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108784]=0x74,0x69,0x00,0x00,0x78,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0x5c,0x69,0x00,0x00,
 [108800]=0x8e,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0x0c,0x69,0x00,0x00,0xa1,0x03,0x00,0x00,
 [108816]=0x0f,0x01,0x00,0x00,0xec,0x68,0x00,0x00,0xb6,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108832]=0xfc,0x68,0x00,0x00,0xcb,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0xe8,0x6c,0x00,0x00,
 [108848]=0xdf,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,0x78,0x6a,0x00,0x00,0xee,0x03,0x00,0x00,
 [108864]=0x0f,0x01,0x00,0x00,0xd0,0x69,0x00,0x00,0xfb,0x03,0x00,0x00,0x0f,0x01,0x00,0x00,
 [108880]=0x24,0x3d,0x00,0x00,0x05,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,0x44,0x35,0x00,0x00,
 [108896]=0x0f,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0x00,0x6c,0x00,0x00,0x1f,0x04,0x00,0x00,
 [108912]=0x0f,0x01,0x00,0x00,0x08,0x47,0x00,0x00,0x2a,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,
 [108928]=0xd8,0x36,0x00,0x00,0x35,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0xc4,0x47,0x00,0x00,
 [108944]=0x43,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,0xc8,0x36,0x00,0x00,0x51,0x04,0x00,0x00,
 [108960]=0x0f,0x01,0x00,0x00,0x80,0x48,0x00,0x00,0x5e,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,
 [108976]=0x04,0x37,0x00,0x00,0x6b,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0x4c,0x48,0x00,0x00,
 [108992]=0x7a,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,0xe8,0x36,0x00,0x00,0x89,0x04,0x00,0x00,
 [109008]=0x0f,0x01,0x00,0x00,0x70,0x65,0x00,0x00,0xa0,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109024]=0xec,0x6b,0x00,0x00,0xb6,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0x28,0x3b,0x00,0x00,
 [109040]=0xc1,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0x9c,0x3d,0x00,0x00,0xcb,0x04,0x00,0x00,
 [109056]=0x0f,0x01,0x80,0x00,0x7c,0x35,0x00,0x00,0xd5,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109072]=0xcc,0x3b,0x00,0x00,0xe0,0x04,0x00,0x00,0x0f,0x01,0x80,0x00,0xa0,0x34,0x00,0x00,
 [109088]=0xeb,0x04,0x00,0x00,0x0f,0x01,0x00,0x00,0xf0,0x3c,0x00,0x00,0xf6,0x04,0x00,0x00,
 [109104]=0x0f,0x01,0x80,0x00,0x20,0x35,0x00,0x00,0x01,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109120]=0xec,0x6c,0x00,0x00,0x11,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x20,0x3e,0x00,0x00,
 [109136]=0x18,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x28,0x3e,0x00,0x00,0x1d,0x05,0x00,0x00,
 [109152]=0x0f,0x01,0x00,0x00,0x8c,0x3f,0x00,0x00,0x24,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109168]=0x4c,0x44,0x00,0x00,0x2a,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xac,0x49,0x00,0x00,
 [109184]=0x31,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x3c,0x64,0x00,0x00,0x38,0x05,0x00,0x00,
 [109200]=0x0f,0x01,0x00,0x00,0x98,0x46,0x00,0x00,0x3d,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109216]=0xc4,0x4a,0x00,0x00,0x43,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xe8,0x46,0x00,0x00,
 [109232]=0x49,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xec,0x4a,0x00,0x00,0x50,0x05,0x00,0x00,
 [109248]=0x0f,0x01,0x00,0x00,0x1c,0x44,0x00,0x00,0x57,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109264]=0x74,0x49,0x00,0x00,0x5f,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x68,0x43,0x00,0x00,
 [109280]=0x65,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xa8,0x48,0x00,0x00,0x6c,0x05,0x00,0x00,
 [109296]=0x0f,0x01,0x00,0x00,0x78,0x3e,0x00,0x00,0x72,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109312]=0xd0,0x42,0x00,0x00,0x79,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xe4,0x48,0x00,0x00,
 [109328]=0x81,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x2c,0x64,0x00,0x00,0x89,0x05,0x00,0x00,
 [109344]=0x0f,0x01,0x00,0x00,0x24,0x40,0x00,0x00,0x92,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109360]=0x0c,0x40,0x00,0x00,0x9b,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x50,0x40,0x00,0x00,
 [109376]=0xa4,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0xf4,0x6c,0x00,0x00,0xad,0x05,0x00,0x00,
 [109392]=0x0f,0x01,0x00,0x00,0xc4,0x6d,0x00,0x00,0xb7,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109408]=0xe4,0x3f,0x00,0x00,0xc0,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x70,0x40,0x00,0x00,
 [109424]=0xc9,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x08,0x6d,0x00,0x00,0xd2,0x05,0x00,0x00,
 [109440]=0x0f,0x01,0x00,0x00,0xf8,0x3f,0x00,0x00,0xdb,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109456]=0x44,0x6d,0x00,0x00,0xe5,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x90,0x42,0x00,0x00,
 [109472]=0xec,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,0x10,0x49,0x00,0x00,0xf4,0x05,0x00,0x00,
 [109488]=0x0f,0x01,0x00,0x00,0xb0,0x45,0x00,0x00,0xfd,0x05,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109504]=0x6c,0x42,0x00,0x00,0x09,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0xe0,0x44,0x00,0x00,
 [109520]=0x0e,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x64,0x4a,0x00,0x00,0x14,0x06,0x00,0x00,
 [109536]=0x0f,0x01,0x00,0x00,0xcc,0x64,0x00,0x00,0x1d,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109552]=0x8c,0x4a,0x00,0x00,0x25,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x34,0x3e,0x00,0x00,
 [109568]=0x2d,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x08,0x63,0x00,0x00,0x35,0x06,0x00,0x00,
 [109584]=0x0f,0x01,0x00,0x00,0xbc,0x3f,0x00,0x00,0x3d,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109600]=0x04,0x3f,0x00,0x00,0x45,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x20,0x3f,0x00,0x00,
 [109616]=0x4e,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x74,0x3f,0x00,0x00,0x56,0x06,0x00,0x00,
 [109632]=0x0f,0x01,0x00,0x00,0xa0,0x43,0x00,0x00,0x5b,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109648]=0x3c,0x49,0x00,0x00,0x61,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0xb8,0x3e,0x00,0x00,
 [109664]=0x6a,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0xe0,0x6d,0x00,0x00,0x71,0x06,0x00,0x00,
 [109680]=0x0f,0x01,0x00,0x00,0xb4,0x64,0x00,0x00,0x79,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109696]=0x60,0x42,0x00,0x00,0x84,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0xe0,0x45,0x00,0x00,
 [109712]=0x89,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x9c,0x4a,0x00,0x00,0x8f,0x06,0x00,0x00,
 [109728]=0x0f,0x01,0x00,0x00,0x78,0x54,0x00,0x00,0x99,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109744]=0x90,0x44,0x00,0x00,0x9f,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x3c,0x4a,0x00,0x00,
 [109760]=0xa6,0x06,0x00,0x00,0x0f,0x09,0x00,0x00,0x48,0x40,0x01,0x00,0xae,0x06,0x00,0x00,
 [109776]=0x0f,0x09,0x00,0x00,0x40,0x40,0x01,0x00,0xb5,0x06,0x00,0x00,0x0f,0x09,0x00,0x00,
 [109792]=0x44,0x40,0x01,0x00,0xbd,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x68,0x41,0x00,0x00,
 [109808]=0xc5,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0xd4,0x40,0x00,0x00,0xcd,0x06,0x00,0x00,
 [109824]=0x0f,0x01,0x00,0x00,0x00,0x41,0x00,0x00,0xd6,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109840]=0x04,0x41,0x00,0x00,0xde,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x20,0x41,0x00,0x00,
 [109856]=0xe6,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,0x70,0x63,0x00,0x00,0xf0,0x06,0x00,0x00,
 [109872]=0x0f,0x01,0x00,0x00,0xa4,0x40,0x00,0x00,0xf8,0x06,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109888]=0x30,0x63,0x00,0x00,0x01,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0xd8,0x41,0x00,0x00,
 [109904]=0x0a,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x94,0x41,0x00,0x00,0x12,0x07,0x00,0x00,
 [109920]=0x0f,0x01,0x00,0x00,0x18,0x42,0x00,0x00,0x1a,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109936]=0x94,0x4d,0x00,0x00,0x22,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x30,0x4f,0x00,0x00,
 [109952]=0x2a,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x08,0x4b,0x00,0x00,0x32,0x07,0x00,0x00,
 [109968]=0x0f,0x01,0x00,0x00,0x9c,0x6f,0x00,0x00,0x3b,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,
 [109984]=0x74,0x4c,0x00,0x00,0x44,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x38,0x6e,0x00,0x00,
 [110000]=0x4e,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x34,0x64,0x00,0x00,0x56,0x07,0x00,0x00,
 [110016]=0x0f,0x01,0x00,0x00,0x78,0x42,0x00,0x00,0x5c,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110032]=0x84,0x40,0x00,0x00,0x65,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x94,0x40,0x00,0x00,
 [110048]=0x6e,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0xd4,0x49,0x00,0x00,0x75,0x07,0x00,0x00,
 [110064]=0x0f,0x01,0x00,0x00,0x14,0x4a,0x00,0x00,0x7d,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110080]=0x4c,0x4f,0x00,0x00,0x88,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0xa4,0x64,0x00,0x00,
 [110096]=0x9e,0x07,0x00,0x00,0x0f,0x09,0x00,0x00,0x3c,0x40,0x01,0x00,0xa8,0x07,0x00,0x00,
 [110112]=0x0f,0x01,0x00,0x00,0xa4,0x56,0x00,0x00,0xbd,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110128]=0x9c,0x57,0x00,0x00,0xce,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0xfc,0x56,0x00,0x00,
 [110144]=0xe2,0x07,0x00,0x00,0x0f,0x01,0x00,0x00,0x78,0x57,0x00,0x00,0xf4,0x07,0x00,0x00,
 [110160]=0x0f,0x01,0x00,0x00,0x5c,0x55,0x00,0x00,0x02,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110176]=0xac,0x56,0x00,0x00,0x17,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0x9c,0x56,0x00,0x00,
 [110192]=0x29,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0x70,0x6d,0x00,0x00,0x3b,0x08,0x00,0x00,
 [110208]=0x0f,0x01,0x00,0x00,0x8c,0x6d,0x00,0x00,0x4e,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110224]=0xa8,0x6d,0x00,0x00,0x61,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0x28,0x3a,0x00,0x00,
 [110240]=0x76,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0x1c,0x39,0x00,0x00,0x90,0x08,0x00,0x00,
 [110256]=0x0f,0x01,0x00,0x00,0x60,0x39,0x00,0x00,0xac,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110272]=0x20,0x37,0x00,0x00,0xc1,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0xb0,0x39,0x00,0x00,
 [110288]=0xdc,0x08,0x00,0x00,0x0f,0x01,0x00,0x00,0xe8,0x39,0x00,0x00,0xf9,0x08,0x00,0x00,
 [110304]=0x0f,0x01,0x00,0x00,0xec,0x62,0x00,0x00,0x13,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110320]=0x20,0x60,0x00,0x00,0x22,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0x00,0x63,0x00,0x00,
 [110336]=0x35,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0xf0,0x5b,0x00,0x00,0x42,0x09,0x00,0x00,
 [110352]=0x0f,0x01,0x00,0x00,0x00,0x60,0x00,0x00,0x4d,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110368]=0x10,0x60,0x00,0x00,0x5a,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0x88,0x5f,0x00,0x00,
 [110384]=0x67,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0x34,0x58,0x00,0x00,0x73,0x09,0x00,0x00,
 [110400]=0x0f,0x01,0x00,0x00,0x34,0x5c,0x00,0x00,0x7f,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110416]=0xc4,0x5b,0x00,0x00,0x8d,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0xcc,0x5e,0x00,0x00,
 [110432]=0x99,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0x64,0x5f,0x00,0x00,0xa5,0x09,0x00,0x00,
 [110448]=0x0f,0x01,0x00,0x00,0xc0,0x5d,0x00,0x00,0xb2,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110464]=0xd4,0x5c,0x00,0x00,0xbd,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0xf0,0x62,0x00,0x00,
 [110480]=0xce,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,0xf8,0x62,0x00,0x00,0xdf,0x09,0x00,0x00,
 [110496]=0x0f,0x01,0x00,0x00,0x2c,0x58,0x00,0x00,0xf0,0x09,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110512]=0x20,0x58,0x00,0x00,0x02,0x0a,0x00,0x00,0x0f,0x01,0x00,0x00,0xec,0x61,0x00,0x00,
 [110528]=0x19,0x0a,0x00,0x00,0x0f,0x01,0x00,0x00,0xe4,0x62,0x00,0x00,0x35,0x0a,0x00,0x00,
 [110544]=0x0f,0x01,0x00,0x00,0x60,0x60,0x00,0x00,0x42,0x0a,0x00,0x00,0x0f,0x01,0x00,0x00,
 [110560]=0xec,0x60,0x00,0x00,0x4f,0x0a,0x00,0x00,0x0f,0x01,0x00,0x00,0x3c,0x60,0x00,0x00,
 [110576]=0x5c,0x0a,0x00,0x00,0x0f,0x01,0x00,0x00,0x28,0x58,0x00,0x00,0x6a,0x0a,0x00,0x00,
 [110592]=0x0f,0x01,0x00,0x00,0xa4,0x62,0x00,0x00,0x82,0x0a,0x00,0x00,0x01,0x00,0x00,0x01,
 [110608]=0x00,0x00,0x00,0x00,0xed,0x00,0x00,0x00,0xef,0x00,0x00,0x00,0xed,0x00,0x00,0x00,
 [110624]=0xef,0x00,0x00,0x00,0x6c,0x01,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,
 [110640]=0x20,0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,0x52,0x65,0x73,0x75,0x6d,
 [110656]=0x65,0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,0x53,0x6a,0x4c,0x6a,0x5f,
 [110672]=0x46,0x6f,0x72,0x63,0x65,0x64,0x55,0x6e,0x77,0x69,0x6e,0x64,0x00,0x5f,0x5f,0x55,
 [110688]=0x6e,0x77,0x69,0x6e,0x64,0x5f,0x53,0x6a,0x4c,0x6a,0x5f,0x52,0x61,0x69,0x73,0x65,
 [110704]=0x45,0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,
 [110720]=0x6e,0x64,0x5f,0x53,0x6a,0x4c,0x6a,0x5f,0x52,0x65,0x67,0x69,0x73,0x74,0x65,0x72,
 [110736]=0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,0x53,0x6a,0x4c,0x6a,0x5f,0x52,
 [110752]=0x65,0x73,0x75,0x6d,0x65,0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,0x53,
 [110768]=0x6a,0x4c,0x6a,0x5f,0x52,0x65,0x73,0x75,0x6d,0x65,0x5f,0x6f,0x72,0x5f,0x52,0x65,
 [110784]=0x74,0x68,0x72,0x6f,0x77,0x00,0x5f,0x5f,0x55,0x6e,0x77,0x69,0x6e,0x64,0x5f,0x53,
 [110800]=0x6a,0x4c,0x6a,0x5f,0x55,0x6e,0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x00,0x5f,
 [110816]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x31,0x6c,0x6f,0x61,0x64,
 [110832]=0x5f,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x45,0x50,0x4b,0x68,0x6d,0x52,0x4e,0x53,0x30,
 [110848]=0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [110864]=0x33,0x70,0x6e,0x67,0x31,0x33,0x64,0x65,0x74,0x65,0x63,0x74,0x5f,0x66,0x6f,0x72,
 [110880]=0x6d,0x61,0x74,0x45,0x50,0x4b,0x68,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [110896]=0x33,0x70,0x6e,0x67,0x31,0x35,0x73,0x61,0x76,0x65,0x5f,0x72,0x67,0x62,0x61,0x38,
 [110912]=0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0x5f,
 [110928]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x39,0x73,0x61,0x76,0x65,
 [110944]=0x5f,0x62,0x6d,0x70,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,
 [110960]=0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [110976]=0x33,0x70,0x6e,0x67,0x31,0x39,0x73,0x61,0x76,0x65,0x5f,0x70,0x6e,0x67,0x5f,0x72,
 [110992]=0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,
 [111008]=0x69,0x69,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x39,
 [111024]=0x73,0x61,0x76,0x65,0x5f,0x72,0x65,0x69,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,
 [111040]=0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0x5f,0x5f,0x5a,
 [111056]=0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x39,0x73,0x61,0x76,0x65,0x5f,0x74,
 [111072]=0x67,0x61,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,
 [111088]=0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [111104]=0x6e,0x67,0x31,0x39,0x73,0x61,0x76,0x65,0x5f,0x78,0x63,0x66,0x5f,0x72,0x67,0x62,
 [111120]=0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,
 [111136]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x32,0x30,0x73,0x61,
 [111152]=0x76,0x65,0x5f,0x6a,0x70,0x65,0x67,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,
 [111168]=0x6c,0x65,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x00,0x5f,0x5f,0x5a,0x4e,
 [111184]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x39,0x6c,0x6f,0x61,0x64,0x5f,0x66,0x69,0x6c,
 [111200]=0x65,0x45,0x50,0x4b,0x63,0x52,0x4e,0x53,0x30,0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,
 [111216]=0x45,0x00,0x5f,0x5f,0x5a,0x53,0x74,0x37,0x6e,0x6f,0x74,0x68,0x72,0x6f,0x77,0x00,
 [111232]=0x5f,0x5f,0x5a,0x53,0x74,0x39,0x74,0x65,0x72,0x6d,0x69,0x6e,0x61,0x74,0x65,0x76,
 [111248]=0x00,0x5f,0x5f,0x5a,0x54,0x56,0x4e,0x31,0x30,0x5f,0x5f,0x63,0x78,0x78,0x61,0x62,
 [111264]=0x69,0x76,0x31,0x31,0x37,0x5f,0x5f,0x63,0x6c,0x61,0x73,0x73,0x5f,0x74,0x79,0x70,
 [111280]=0x65,0x5f,0x69,0x6e,0x66,0x6f,0x45,0x00,0x5f,0x5f,0x5a,0x54,0x56,0x4e,0x31,0x30,
 [111296]=0x5f,0x5f,0x63,0x78,0x78,0x61,0x62,0x69,0x76,0x31,0x32,0x30,0x5f,0x5f,0x73,0x69,
 [111312]=0x5f,0x63,0x6c,0x61,0x73,0x73,0x5f,0x74,0x79,0x70,0x65,0x5f,0x69,0x6e,0x66,0x6f,
 [111328]=0x45,0x00,0x5f,0x5f,0x5a,0x54,0x56,0x4e,0x31,0x30,0x5f,0x5f,0x63,0x78,0x78,0x61,
 [111344]=0x62,0x69,0x76,0x31,0x32,0x31,0x5f,0x5f,0x76,0x6d,0x69,0x5f,0x63,0x6c,0x61,0x73,
 [111360]=0x73,0x5f,0x74,0x79,0x70,0x65,0x5f,0x69,0x6e,0x66,0x6f,0x45,0x00,0x5f,0x5f,0x5a,
 [111376]=0x64,0x61,0x50,0x76,0x00,0x5f,0x5f,0x5a,0x64,0x61,0x50,0x76,0x6d,0x00,0x5f,0x5f,
 [111392]=0x5a,0x64,0x6c,0x50,0x76,0x00,0x5f,0x5f,0x5a,0x64,0x6c,0x50,0x76,0x6d,0x00,0x5f,
 [111408]=0x5f,0x5a,0x6e,0x61,0x6d,0x00,0x5f,0x5f,0x5a,0x6e,0x77,0x6d,0x00,0x5f,0x5f,0x5f,
 [111424]=0x61,0x73,0x68,0x6c,0x64,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x61,0x73,0x68,0x72,0x64,
 [111440]=0x69,0x33,0x00,0x5f,0x5f,0x5f,0x62,0x7a,0x65,0x72,0x6f,0x00,0x5f,0x5f,0x5f,0x63,
 [111456]=0x78,0x61,0x5f,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x5f,0x65,0x78,0x63,0x65,
 [111472]=0x70,0x74,0x69,0x6f,0x6e,0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x61,0x74,0x65,
 [111488]=0x78,0x69,0x74,0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x62,0x65,0x67,0x69,0x6e,
 [111504]=0x5f,0x63,0x61,0x74,0x63,0x68,0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x65,0x6e,
 [111520]=0x64,0x5f,0x63,0x61,0x74,0x63,0x68,0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x66,
 [111536]=0x72,0x65,0x65,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x00,0x5f,0x5f,
 [111552]=0x5f,0x63,0x78,0x61,0x5f,0x67,0x75,0x61,0x72,0x64,0x5f,0x61,0x62,0x6f,0x72,0x74,
 [111568]=0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x67,0x75,0x61,0x72,0x64,0x5f,0x61,0x63,
 [111584]=0x71,0x75,0x69,0x72,0x65,0x00,0x5f,0x5f,0x5f,0x63,0x78,0x61,0x5f,0x67,0x75,0x61,
 [111600]=0x72,0x64,0x5f,0x72,0x65,0x6c,0x65,0x61,0x73,0x65,0x00,0x5f,0x5f,0x5f,0x63,0x78,
 [111616]=0x61,0x5f,0x70,0x75,0x72,0x65,0x5f,0x76,0x69,0x72,0x74,0x75,0x61,0x6c,0x00,0x5f,
 [111632]=0x5f,0x5f,0x63,0x78,0x61,0x5f,0x72,0x65,0x74,0x68,0x72,0x6f,0x77,0x00,0x5f,0x5f,
 [111648]=0x5f,0x63,0x78,0x61,0x5f,0x74,0x68,0x72,0x6f,0x77,0x00,0x5f,0x5f,0x5f,0x64,0x69,
 [111664]=0x76,0x64,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x64,0x69,0x76,0x73,0x69,0x33,0x00,0x5f,
 [111680]=0x5f,0x5f,0x64,0x79,0x6e,0x61,0x6d,0x69,0x63,0x5f,0x63,0x61,0x73,0x74,0x00,0x5f,
 [111696]=0x5f,0x5f,0x66,0x69,0x78,0x64,0x66,0x64,0x69,0x00,0x5f,0x5f,0x5f,0x66,0x69,0x78,
 [111712]=0x73,0x66,0x64,0x69,0x00,0x5f,0x5f,0x5f,0x66,0x69,0x78,0x75,0x6e,0x73,0x64,0x66,
 [111728]=0x64,0x69,0x00,0x5f,0x5f,0x5f,0x66,0x69,0x78,0x75,0x6e,0x73,0x73,0x66,0x64,0x69,
 [111744]=0x00,0x5f,0x5f,0x5f,0x66,0x6c,0x6f,0x61,0x74,0x64,0x69,0x64,0x66,0x00,0x5f,0x5f,
 [111760]=0x5f,0x66,0x6c,0x6f,0x61,0x74,0x64,0x69,0x73,0x66,0x00,0x5f,0x5f,0x5f,0x66,0x6c,
 [111776]=0x6f,0x61,0x74,0x75,0x6e,0x64,0x69,0x64,0x66,0x00,0x5f,0x5f,0x5f,0x66,0x6c,0x6f,
 [111792]=0x61,0x74,0x75,0x6e,0x64,0x69,0x73,0x66,0x00,0x5f,0x5f,0x5f,0x67,0x78,0x78,0x5f,
 [111808]=0x70,0x65,0x72,0x73,0x6f,0x6e,0x61,0x6c,0x69,0x74,0x79,0x5f,0x73,0x6a,0x30,0x00,
 [111824]=0x5f,0x5f,0x5f,0x67,0x78,0x78,0x5f,0x70,0x65,0x72,0x73,0x6f,0x6e,0x61,0x6c,0x69,
 [111840]=0x74,0x79,0x5f,0x76,0x30,0x00,0x5f,0x5f,0x5f,0x6c,0x73,0x68,0x72,0x64,0x69,0x33,
 [111856]=0x00,0x5f,0x5f,0x5f,0x6d,0x6f,0x64,0x64,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x6d,0x6f,
 [111872]=0x64,0x73,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x75,0x64,0x69,0x76,0x64,0x69,0x33,0x00,
 [111888]=0x5f,0x5f,0x5f,0x75,0x64,0x69,0x76,0x73,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x75,0x6d,
 [111904]=0x6f,0x64,0x64,0x69,0x33,0x00,0x5f,0x5f,0x5f,0x75,0x6d,0x6f,0x64,0x73,0x69,0x33,
 [111920]=0x00,0x5f,0x5f,0x74,0x6c,0x76,0x5f,0x62,0x6f,0x6f,0x74,0x73,0x74,0x72,0x61,0x70,
 [111936]=0x00,0x5f,0x61,0x62,0x6f,0x72,0x74,0x00,0x5f,0x61,0x62,0x73,0x00,0x5f,0x62,0x7a,
 [111952]=0x65,0x72,0x6f,0x00,0x5f,0x63,0x65,0x69,0x6c,0x00,0x5f,0x63,0x65,0x69,0x6c,0x66,
 [111968]=0x00,0x5f,0x63,0x6c,0x6f,0x63,0x6b,0x00,0x5f,0x63,0x6f,0x73,0x00,0x5f,0x63,0x6f,
 [111984]=0x73,0x66,0x00,0x5f,0x66,0x61,0x62,0x73,0x00,0x5f,0x66,0x61,0x62,0x73,0x66,0x00,
 [112000]=0x5f,0x66,0x6c,0x6f,0x6f,0x72,0x00,0x5f,0x66,0x6c,0x6f,0x6f,0x72,0x66,0x00,0x5f,
 [112016]=0x66,0x6d,0x6f,0x64,0x00,0x5f,0x66,0x6d,0x6f,0x64,0x66,0x00,0x5f,0x66,0x72,0x65,
 [112032]=0x65,0x00,0x5f,0x66,0x72,0x65,0x78,0x70,0x00,0x5f,0x66,0x72,0x65,0x78,0x70,0x66,
 [112048]=0x00,0x5f,0x67,0x65,0x74,0x65,0x6e,0x76,0x00,0x5f,0x69,0x73,0x61,0x6c,0x6e,0x75,
 [112064]=0x6d,0x00,0x5f,0x69,0x73,0x61,0x6c,0x70,0x68,0x61,0x00,0x5f,0x69,0x73,0x62,0x6c,
 [112080]=0x61,0x6e,0x6b,0x00,0x5f,0x69,0x73,0x64,0x69,0x67,0x69,0x74,0x00,0x5f,0x69,0x73,
 [112096]=0x66,0x69,0x6e,0x69,0x74,0x65,0x00,0x5f,0x69,0x73,0x6c,0x6f,0x77,0x65,0x72,0x00,
 [112112]=0x5f,0x69,0x73,0x70,0x72,0x69,0x6e,0x74,0x00,0x5f,0x69,0x73,0x73,0x70,0x61,0x63,
 [112128]=0x65,0x00,0x5f,0x69,0x73,0x75,0x70,0x70,0x65,0x72,0x00,0x5f,0x69,0x73,0x78,0x64,
 [112144]=0x69,0x67,0x69,0x74,0x00,0x5f,0x6c,0x64,0x65,0x78,0x70,0x00,0x5f,0x6c,0x64,0x65,
 [112160]=0x78,0x70,0x66,0x00,0x5f,0x6c,0x6c,0x72,0x6f,0x75,0x6e,0x64,0x00,0x5f,0x6c,0x6f,
 [112176]=0x63,0x61,0x6c,0x65,0x63,0x6f,0x6e,0x76,0x00,0x5f,0x6c,0x6f,0x67,0x00,0x5f,0x6c,
 [112192]=0x6f,0x67,0x66,0x00,0x5f,0x6c,0x6f,0x6e,0x67,0x6a,0x6d,0x70,0x00,0x5f,0x6c,0x72,
 [112208]=0x6f,0x75,0x6e,0x64,0x00,0x5f,0x6d,0x61,0x6c,0x6c,0x6f,0x63,0x00,0x5f,0x6d,0x65,
 [112224]=0x6d,0x63,0x68,0x72,0x00,0x5f,0x6d,0x65,0x6d,0x63,0x6d,0x70,0x00,0x5f,0x6d,0x65,
 [112240]=0x6d,0x63,0x70,0x79,0x00,0x5f,0x6d,0x65,0x6d,0x6d,0x6f,0x76,0x65,0x00,0x5f,0x6d,
 [112256]=0x65,0x6d,0x73,0x65,0x74,0x00,0x5f,0x70,0x6f,0x77,0x00,0x5f,0x70,0x6f,0x77,0x66,
 [112272]=0x00,0x5f,0x72,0x65,0x61,0x6c,0x6c,0x6f,0x63,0x00,0x5f,0x72,0x6f,0x75,0x6e,0x64,
 [112288]=0x00,0x5f,0x73,0x65,0x74,0x6a,0x6d,0x70,0x00,0x5f,0x73,0x65,0x74,0x6c,0x6f,0x63,
 [112304]=0x61,0x6c,0x65,0x00,0x5f,0x73,0x69,0x6e,0x00,0x5f,0x73,0x69,0x6e,0x66,0x00,0x5f,
 [112320]=0x73,0x6e,0x70,0x72,0x69,0x6e,0x74,0x66,0x00,0x5f,0x73,0x71,0x72,0x74,0x00,0x5f,
 [112336]=0x73,0x71,0x72,0x74,0x66,0x00,0x5f,0x73,0x74,0x64,0x65,0x72,0x72,0x00,0x5f,0x73,
 [112352]=0x74,0x64,0x69,0x6e,0x00,0x5f,0x73,0x74,0x64,0x6f,0x75,0x74,0x00,0x5f,0x73,0x74,
 [112368]=0x72,0x63,0x68,0x72,0x00,0x5f,0x73,0x74,0x72,0x63,0x6d,0x70,0x00,0x5f,0x73,0x74,
 [112384]=0x72,0x63,0x6f,0x6c,0x6c,0x00,0x5f,0x73,0x74,0x72,0x63,0x70,0x79,0x00,0x5f,0x73,
 [112400]=0x74,0x72,0x64,0x75,0x70,0x00,0x5f,0x73,0x74,0x72,0x65,0x72,0x72,0x6f,0x72,0x00,
 [112416]=0x5f,0x73,0x74,0x72,0x6c,0x65,0x6e,0x00,0x5f,0x73,0x74,0x72,0x6e,0x63,0x6d,0x70,
 [112432]=0x00,0x5f,0x73,0x74,0x72,0x70,0x62,0x72,0x6b,0x00,0x5f,0x73,0x74,0x72,0x73,0x70,
 [112448]=0x6e,0x00,0x5f,0x73,0x74,0x72,0x73,0x74,0x72,0x00,0x5f,0x73,0x74,0x72,0x74,0x6f,
 [112464]=0x64,0x00,0x5f,0x73,0x74,0x72,0x74,0x6f,0x66,0x00,0x5f,0x73,0x74,0x72,0x74,0x6f,
 [112480]=0x6c,0x00,0x5f,0x73,0x74,0x72,0x74,0x6f,0x6c,0x6c,0x00,0x5f,0x73,0x74,0x72,0x74,
 [112496]=0x6f,0x75,0x6c,0x00,0x5f,0x73,0x74,0x72,0x74,0x6f,0x75,0x6c,0x6c,0x00,0x5f,0x73,
 [112512]=0x79,0x73,0x74,0x65,0x6d,0x00,0x5f,0x74,0x69,0x6d,0x65,0x00,0x5f,0x74,0x6f,0x6c,
 [112528]=0x6f,0x77,0x65,0x72,0x00,0x5f,0x74,0x6f,0x75,0x70,0x70,0x65,0x72,0x00,0x5f,0x74,
 [112544]=0x72,0x75,0x6e,0x63,0x00,0x5f,0x74,0x72,0x75,0x6e,0x63,0x66,0x00,0x5f,0x76,0x73,
 [112560]=0x6e,0x70,0x72,0x69,0x6e,0x74,0x66,0x00,0x5f,0x77,0x69,0x6e,0x74,0x65,0x72,0x62,
 [112576]=0x6f,0x6f,0x74,0x5f,0x73,0x6a,0x6c,0x6a,0x5f,0x6a,0x75,0x6d,0x70,0x00,0x5f,0x77,
 [112592]=0x6d,0x5f,0x65,0x72,0x72,0x6e,0x6f,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,
 [112608]=0x66,0x6c,0x75,0x73,0x68,0x5f,0x6f,0x75,0x74,0x70,0x75,0x74,0x00,0x5f,0x77,0x6d,
 [112624]=0x5f,0x6c,0x75,0x61,0x5f,0x72,0x65,0x61,0x64,0x6c,0x69,0x6e,0x65,0x00,0x5f,0x77,
 [112640]=0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x73,0x68,0x6f,0x77,0x5f,0x62,0x61,0x6e,0x6e,0x65,
 [112656]=0x72,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x73,0x68,0x6f,0x77,0x5f,0x68,
 [112672]=0x65,0x6c,0x70,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x77,0x72,0x69,0x74,
 [112688]=0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x77,0x72,0x69,0x74,0x65,0x5f,
 [112704]=0x65,0x72,0x72,0x6f,0x72,0x66,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x77,
 [112720]=0x72,0x69,0x74,0x65,0x6c,0x69,0x6e,0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6d,0x61,0x74,
 [112736]=0x68,0x5f,0x69,0x73,0x66,0x69,0x6e,0x69,0x74,0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6d,
 [112752]=0x61,0x74,0x68,0x5f,0x69,0x73,0x66,0x69,0x6e,0x69,0x74,0x65,0x66,0x00,0x5f,0x77,
 [112768]=0x6d,0x5f,0x6d,0x61,0x74,0x68,0x5f,0x69,0x73,0x66,0x69,0x6e,0x69,0x74,0x65,0x6c,
 [112784]=0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,
 [112800]=0x61,0x6c,0x6c,0x6f,0x63,0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,0x65,0x5f,
 [112816]=0x68,0x65,0x61,0x70,0x5f,0x66,0x72,0x65,0x65,0x5f,0x62,0x79,0x74,0x65,0x73,0x00,
 [112832]=0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,0x66,
 [112848]=0x72,0x65,0x65,0x5f,0x62,0x79,0x74,0x65,0x73,0x36,0x34,0x00,0x5f,0x77,0x6d,0x5f,
 [112864]=0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,0x72,0x65,0x73,0x65,0x74,
 [112880]=0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,
 [112896]=0x74,0x6f,0x74,0x61,0x6c,0x5f,0x62,0x79,0x74,0x65,0x73,0x00,0x5f,0x77,0x6d,0x5f,
 [112912]=0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,0x74,0x6f,0x74,0x61,0x6c,
 [112928]=0x5f,0x62,0x79,0x74,0x65,0x73,0x36,0x34,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x63,
 [112944]=0x6c,0x65,0x61,0x72,0x5f,0x76,0x69,0x72,0x74,0x75,0x61,0x6c,0x5f,0x66,0x69,0x6c,
 [112960]=0x65,0x73,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x63,0x6c,0x65,0x61,0x72,0x65,0x72,
 [112976]=0x72,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x65,0x78,0x70,0x6f,0x72,0x74,0x5f,0x69,
 [112992]=0x6d,0x61,0x67,0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,0x63,0x6c,0x6f,0x73,
 [113008]=0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,0x65,0x6f,0x66,0x00,0x5f,0x77,0x6d,
 [113024]=0x66,0x73,0x5f,0x66,0x65,0x72,0x72,0x6f,0x72,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,
 [113040]=0x66,0x66,0x6c,0x75,0x73,0x68,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,0x6f,0x70,
 [113056]=0x65,0x6e,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,0x72,0x65,0x61,0x64,0x00,0x5f,
 [113072]=0x77,0x6d,0x66,0x73,0x5f,0x66,0x72,0x65,0x6f,0x70,0x65,0x6e,0x00,0x5f,0x77,0x6d,
 [113088]=0x66,0x73,0x5f,0x66,0x73,0x65,0x65,0x6b,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,
 [113104]=0x74,0x65,0x6c,0x6c,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x66,0x77,0x72,0x69,0x74,
 [113120]=0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x67,0x65,0x74,0x63,0x00,0x5f,0x77,0x6d,
 [113136]=0x66,0x73,0x5f,0x69,0x6d,0x61,0x67,0x65,0x5f,0x64,0x61,0x74,0x61,0x00,0x5f,0x77,
 [113152]=0x6d,0x66,0x73,0x5f,0x69,0x6d,0x61,0x67,0x65,0x5f,0x73,0x69,0x7a,0x65,0x00,0x5f,
 [113168]=0x77,0x6d,0x66,0x73,0x5f,0x69,0x73,0x5f,0x6d,0x6f,0x75,0x6e,0x74,0x65,0x64,0x00,
 [113184]=0x5f,0x77,0x6d,0x66,0x73,0x5f,0x6d,0x6f,0x75,0x6e,0x74,0x5f,0x69,0x6d,0x61,0x67,
 [113200]=0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x72,0x65,0x61,0x64,0x5f,0x65,0x6e,0x74,
 [113216]=0x69,0x72,0x65,0x5f,0x66,0x69,0x6c,0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x72,
 [113232]=0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x5f,0x76,0x69,0x72,0x74,0x75,0x61,0x6c,0x5f,
 [113248]=0x66,0x69,0x6c,0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x72,0x65,0x6d,0x6f,0x76,
 [113264]=0x65,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,0x72,0x65,0x6e,0x61,0x6d,0x65,0x00,0x5f,
 [113280]=0x77,0x6d,0x66,0x73,0x5f,0x75,0x6e,0x67,0x65,0x74,0x63,0x00,0x5f,0x77,0x6d,0x66,
 [113296]=0x73,0x5f,0x75,0x6e,0x6d,0x6f,0x75,0x6e,0x74,0x00,0x5f,0x77,0x6d,0x66,0x73,0x5f,
 [113312]=0x77,0x72,0x69,0x74,0x65,0x5f,0x65,0x6e,0x74,0x69,0x72,0x65,0x5f,0x66,0x69,0x6c,
 [113328]=0x65,0x00,0x64,0x79,0x6c,0x64,0x5f,0x73,0x74,0x75,0x62,0x5f,0x62,0x69,0x6e,0x64,
 [113344]=0x65,0x72,0x00,0x5f,0x77,0x6d,0x5f,0x75,0x64,0x69,0x76,0x6d,0x6f,0x64,0x5f,0x75,
 [113360]=0x33,0x32,0x00,0x5f,0x77,0x6d,0x5f,0x75,0x64,0x69,0x76,0x6d,0x6f,0x64,0x5f,0x75,
 [113376]=0x36,0x34,0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,0x65,0x5f,0x68,0x65,0x61,
 [113392]=0x70,0x5f,0x69,0x6e,0x69,0x74,0x00,0x5f,0x75,0x64,0x69,0x76,0x6d,0x6f,0x64,0x36,
 [113408]=0x34,0x00,0x5f,0x77,0x72,0x61,0x70,0x5f,0x61,0x6e,0x67,0x6c,0x65,0x00,0x5f,0x64,
 [113424]=0x69,0x67,0x69,0x74,0x5f,0x76,0x61,0x6c,0x75,0x65,0x00,0x5f,0x61,0x70,0x70,0x65,
 [113440]=0x6e,0x64,0x5f,0x63,0x68,0x61,0x72,0x00,0x5f,0x61,0x70,0x70,0x65,0x6e,0x64,0x5f,
 [113456]=0x73,0x74,0x72,0x69,0x6e,0x67,0x00,0x5f,0x61,0x70,0x70,0x65,0x6e,0x64,0x5f,0x75,
 [113472]=0x6e,0x73,0x69,0x67,0x6e,0x65,0x64,0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x62,
 [113488]=0x65,0x5f,0x68,0x65,0x61,0x70,0x5f,0x61,0x70,0x70,0x65,0x6e,0x64,0x5f,0x72,0x65,
 [113504]=0x67,0x69,0x6f,0x6e,0x00,0x5f,0x77,0x6d,0x5f,0x70,0x72,0x6f,0x67,0x72,0x61,0x6d,
 [113520]=0x5f,0x61,0x70,0x69,0x5f,0x66,0x69,0x65,0x6c,0x64,0x5f,0x72,0x65,0x61,0x64,0x79,
 [113536]=0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x66,0x6c,0x75,0x73,0x68,0x5f,0x6f,
 [113552]=0x75,0x74,0x70,0x75,0x74,0x5f,0x6c,0x69,0x6e,0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6c,
 [113568]=0x75,0x61,0x5f,0x77,0x72,0x69,0x74,0x65,0x5f,0x63,0x73,0x74,0x72,0x00,0x5f,0x77,
 [113584]=0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x61,0x70,0x70,0x5f,0x73,0x74,0x61,0x74,0x5f,0x66,
 [113600]=0x69,0x6c,0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x66,0x69,0x6c,0x65,
 [113616]=0x5f,0x72,0x65,0x73,0x65,0x72,0x76,0x65,0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,
 [113632]=0x5f,0x61,0x70,0x70,0x5f,0x64,0x65,0x6c,0x65,0x74,0x65,0x5f,0x66,0x69,0x6c,0x65,
 [113648]=0x00,0x5f,0x77,0x6d,0x5f,0x6c,0x75,0x61,0x5f,0x61,0x70,0x70,0x5f,0x77,0x72,0x69,
 [113664]=0x74,0x65,0x5f,0x66,0x69,0x6c,0x65,0x00,0x5f,0x5f,0x5f,0x63,0x6c,0x61,0x6e,0x67,
 [113680]=0x5f,0x63,0x61,0x6c,0x6c,0x5f,0x74,0x65,0x72,0x6d,0x69,0x6e,0x61,0x74,0x65,0x00,
 [113696]=0x5f,0x5f,0x5a,0x4c,0x31,0x38,0x6f,0x62,0x6a,0x65,0x63,0x74,0x5f,0x66,0x72,0x6f,
 [113712]=0x6d,0x5f,0x68,0x65,0x61,0x64,0x65,0x72,0x50,0x32,0x31,0x57,0x69,0x6e,0x74,0x65,
 [113728]=0x72,0x45,0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x48,0x65,0x61,0x64,0x65,0x72,
 [113744]=0x00,0x5f,0x5f,0x5a,0x4c,0x31,0x35,0x72,0x61,0x69,0x73,0x65,0x5f,0x65,0x78,0x63,
 [113760]=0x65,0x70,0x74,0x69,0x6f,0x6e,0x50,0x32,0x31,0x57,0x69,0x6e,0x74,0x65,0x72,0x45,
 [113776]=0x78,0x63,0x65,0x70,0x74,0x69,0x6f,0x6e,0x48,0x65,0x61,0x64,0x65,0x72,0x00,0x5f,
 [113792]=0x5f,0x5a,0x4c,0x31,0x35,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x5f,0x75,0x6e,
 [113808]=0x77,0x69,0x6e,0x64,0x50,0x32,0x31,0x57,0x69,0x6e,0x74,0x65,0x72,0x45,0x78,0x63,
 [113824]=0x65,0x70,0x74,0x69,0x6f,0x6e,0x48,0x65,0x61,0x64,0x65,0x72,0x00,0x5f,0x5f,0x5a,
 [113840]=0x4c,0x31,0x32,0x74,0x79,0x70,0x65,0x5f,0x6d,0x61,0x74,0x63,0x68,0x65,0x73,0x50,
 [113856]=0x4b,0x76,0x53,0x30,0x5f,0x00,0x5f,0x5f,0x5a,0x4c,0x31,0x35,0x69,0x6e,0x73,0x70,
 [113872]=0x65,0x63,0x74,0x5f,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0x50,0x31,0x37,0x57,0x69,
 [113888]=0x6e,0x74,0x65,0x72,0x53,0x6a,0x4c,0x6a,0x43,0x6f,0x6e,0x74,0x65,0x78,0x74,0x50,
 [113904]=0x4b,0x76,0x52,0x31,0x33,0x57,0x69,0x6e,0x74,0x65,0x72,0x48,0x61,0x6e,0x64,0x6c,
 [113920]=0x65,0x72,0x00,0x5f,0x5f,0x5a,0x4c,0x32,0x30,0x72,0x65,0x61,0x64,0x5f,0x65,0x6e,
 [113936]=0x63,0x6f,0x64,0x65,0x64,0x5f,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x68,0x50,0x50,
 [113952]=0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4c,0x31,0x32,0x72,0x65,0x61,0x64,0x5f,0x75,0x6c,
 [113968]=0x65,0x62,0x31,0x32,0x38,0x50,0x50,0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4c,0x31,0x34,
 [113984]=0x72,0x65,0x61,0x64,0x5f,0x75,0x6e,0x61,0x6c,0x69,0x67,0x6e,0x65,0x64,0x50,0x4b,
 [114000]=0x68,0x6d,0x00,0x5f,0x5f,0x5a,0x4c,0x31,0x32,0x72,0x65,0x61,0x64,0x5f,0x73,0x6c,
 [114016]=0x65,0x62,0x31,0x32,0x38,0x50,0x50,0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [114032]=0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,
 [114048]=0x4e,0x5f,0x31,0x31,0x34,0x6c,0x6f,0x6f,0x6b,0x73,0x5f,0x6c,0x69,0x6b,0x65,0x5f,
 [114064]=0x74,0x67,0x61,0x45,0x50,0x4b,0x68,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [114080]=0x33,0x70,0x6e,0x67,0x35,0x49,0x6d,0x61,0x67,0x65,0x61,0x53,0x45,0x4f,0x53,0x31,
 [114096]=0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [114112]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x64,0x65,0x63,
 [114128]=0x6f,0x64,0x65,0x5f,0x70,0x6e,0x67,0x5f,0x66,0x72,0x61,0x6d,0x65,0x45,0x52,0x4b,
 [114144]=0x4e,0x53,0x31,0x5f,0x36,0x48,0x65,0x61,0x64,0x65,0x72,0x45,0x52,0x4b,0x4e,0x53,
 [114160]=0x5f,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,0x53,0x31,0x5f,0x38,0x42,0x79,
 [114176]=0x74,0x65,0x53,0x70,0x61,0x6e,0x45,0x45,0x45,0x52,0x4b,0x4e,0x53,0x31,0x5f,0x31,
 [114192]=0x32,0x44,0x65,0x63,0x6f,0x64,0x65,0x54,0x61,0x62,0x6c,0x65,0x73,0x45,0x52,0x4e,
 [114208]=0x53,0x35,0x5f,0x49,0x68,0x45,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,
 [114224]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x61,0x53,0x45,0x4f,0x53,0x31,0x5f,
 [114240]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,
 [114256]=0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x39,0x50,0x61,0x72,0x73,0x65,
 [114272]=0x64,0x50,0x6e,0x67,0x44,0x31,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [114288]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [114304]=0x5f,0x31,0x31,0x31,0x77,0x72,0x69,0x74,0x65,0x5f,0x62,0x79,0x74,0x65,0x73,0x45,
 [114320]=0x50,0x38,0x57,0x4d,0x46,0x53,0x46,0x69,0x6c,0x65,0x50,0x4b,0x68,0x6d,0x00,0x5f,
 [114336]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [114352]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x31,0x77,0x72,0x69,0x74,0x65,0x5f,
 [114368]=0x63,0x68,0x75,0x6e,0x6b,0x45,0x50,0x38,0x57,0x4d,0x46,0x53,0x46,0x69,0x6c,0x65,
 [114384]=0x50,0x4b,0x63,0x50,0x4b,0x68,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,
 [114400]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x36,0x61,0x73,0x73,0x69,0x67,0x6e,
 [114416]=0x45,0x6d,0x52,0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,
 [114432]=0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,
 [114448]=0x39,0x73,0x63,0x61,0x6c,0x65,0x5f,0x6d,0x61,0x73,0x6b,0x65,0x64,0x5f,0x73,0x61,
 [114464]=0x6d,0x70,0x6c,0x65,0x45,0x6a,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,
 [114480]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,0x65,
 [114496]=0x45,0x6d,0x52,0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,
 [114512]=0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,0x65,0x45,0x6d,
 [114528]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,
 [114544]=0x68,0x45,0x37,0x72,0x65,0x73,0x65,0x72,0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,
 [114560]=0x4e,0x32,0x77,0x6d,0x36,0x64,0x65,0x74,0x61,0x69,0x6c,0x31,0x35,0x76,0x65,0x63,
 [114576]=0x74,0x6f,0x72,0x5f,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x49,0x68,0x45,0x45,
 [114592]=0x50,0x54,0x5f,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,
 [114608]=0x74,0x6f,0x72,0x49,0x68,0x45,0x43,0x32,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [114624]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [114640]=0x5f,0x4e,0x5f,0x31,0x31,0x34,0x72,0x65,0x61,0x64,0x5f,0x74,0x67,0x61,0x5f,0x63,
 [114656]=0x6f,0x6c,0x6f,0x72,0x45,0x50,0x4b,0x68,0x6a,0x6a,0x50,0x68,0x00,0x5f,0x5f,0x5a,
 [114672]=0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,
 [114688]=0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x35,0x6c,0x6f,0x61,0x64,0x5f,0x74,0x67,
 [114704]=0x61,0x5f,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x45,0x50,0x4b,0x68,0x6d,0x52,0x4e,0x53,
 [114720]=0x30,0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,0x45,0x45,0x4e,0x4b,0x33,0x24,0x5f,0x30,
 [114736]=0x63,0x6c,0x45,0x53,0x33,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [114752]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [114768]=0x31,0x31,0x4a,0x70,0x65,0x67,0x44,0x65,0x63,0x6f,0x64,0x65,0x72,0x44,0x31,0x45,
 [114784]=0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x35,0x61,0x72,0x72,0x61,0x79,0x49,
 [114800]=0x4e,0x53,0x5f,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [114816]=0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x4a,0x70,0x65,0x67,0x48,0x75,0x66,0x66,0x6d,
 [114832]=0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x45,0x4c,0x6d,0x34,0x45,0x45,0x43,0x31,0x45,
 [114848]=0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,
 [114864]=0x49,0x4e,0x53,0x5f,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,
 [114880]=0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x4a,0x70,0x65,0x67,0x43,0x6f,0x6d,0x70,
 [114896]=0x6f,0x6e,0x65,0x6e,0x74,0x45,0x45,0x44,0x31,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,
 [114912]=0x32,0x77,0x6d,0x35,0x61,0x72,0x72,0x61,0x79,0x49,0x4e,0x53,0x5f,0x33,0x70,0x6e,
 [114928]=0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,
 [114944]=0x36,0x4a,0x70,0x65,0x67,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,
 [114960]=0x65,0x45,0x4c,0x6d,0x34,0x45,0x45,0x44,0x31,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,
 [114976]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [114992]=0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x4a,0x70,0x65,0x67,0x48,0x75,0x66,0x66,0x6d,
 [115008]=0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x44,0x31,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,
 [115024]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,0x53,0x5f,0x33,0x70,
 [115040]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [115056]=0x31,0x33,0x4a,0x70,0x65,0x67,0x43,0x6f,0x6d,0x70,0x6f,0x6e,0x65,0x6e,0x74,0x45,
 [115072]=0x45,0x35,0x63,0x6c,0x65,0x61,0x72,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [115088]=0x6d,0x35,0x61,0x72,0x72,0x61,0x79,0x49,0x4e,0x53,0x5f,0x33,0x70,0x6e,0x67,0x31,
 [115104]=0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x4a,
 [115120]=0x70,0x65,0x67,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x45,
 [115136]=0x4c,0x6d,0x34,0x45,0x45,0x61,0x53,0x45,0x4f,0x53,0x34,0x5f,0x00,0x5f,0x5f,0x5a,
 [115152]=0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x61,0x53,
 [115168]=0x45,0x4f,0x53,0x31,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,
 [115184]=0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,
 [115200]=0x36,0x4a,0x70,0x65,0x67,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,
 [115216]=0x65,0x61,0x53,0x45,0x4f,0x53,0x32,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [115232]=0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x43,0x32,0x45,0x4f,0x53,0x31,
 [115248]=0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,
 [115264]=0x49,0x68,0x45,0x43,0x32,0x45,0x52,0x4b,0x53,0x31,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,
 [115280]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x31,0x32,0x65,
 [115296]=0x6d,0x70,0x6c,0x61,0x63,0x65,0x5f,0x62,0x61,0x63,0x6b,0x49,0x4a,0x6a,0x45,0x45,
 [115312]=0x45,0x52,0x6a,0x44,0x70,0x4f,0x54,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [115328]=0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x37,0x72,0x65,0x73,0x65,0x72,
 [115344]=0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x64,0x65,0x74,
 [115360]=0x61,0x69,0x6c,0x31,0x35,0x76,0x65,0x63,0x74,0x6f,0x72,0x5f,0x61,0x6c,0x6c,0x6f,
 [115376]=0x63,0x61,0x74,0x65,0x49,0x6a,0x45,0x45,0x50,0x54,0x5f,0x6d,0x00,0x5f,0x5f,0x5a,
 [115392]=0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,
 [115408]=0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x39,0x64,0x65,0x63,0x6f,0x64,0x65,0x5f,
 [115424]=0x6a,0x70,0x65,0x67,0x5f,0x65,0x6e,0x74,0x72,0x6f,0x70,0x79,0x45,0x52,0x4e,0x53,
 [115440]=0x31,0x5f,0x31,0x31,0x4a,0x70,0x65,0x67,0x44,0x65,0x63,0x6f,0x64,0x65,0x72,0x45,
 [115456]=0x52,0x4e,0x53,0x30,0x5f,0x35,0x49,0x6d,0x61,0x67,0x65,0x45,0x45,0x4e,0x4b,0x33,
 [115472]=0x24,0x5f,0x30,0x63,0x6c,0x45,0x52,0x4b,0x4e,0x53,0x31,0x5f,0x31,0x33,0x4a,0x70,
 [115488]=0x65,0x67,0x43,0x6f,0x6d,0x70,0x6f,0x6e,0x65,0x6e,0x74,0x45,0x6a,0x6a,0x00,0x5f,
 [115504]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [115520]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x38,0x6a,0x70,0x65,0x67,0x5f,0x64,
 [115536]=0x65,0x63,0x6f,0x64,0x65,0x5f,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x45,0x52,0x4e,0x53,
 [115552]=0x31,0x5f,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,0x74,0x52,0x65,0x61,0x64,0x65,
 [115568]=0x72,0x45,0x52,0x4b,0x4e,0x53,0x31,0x5f,0x31,0x36,0x4a,0x70,0x65,0x67,0x48,0x75,
 [115584]=0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x45,0x52,0x6a,0x00,0x5f,0x5f,
 [115600]=0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,
 [115616]=0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,0x74,
 [115632]=0x52,0x65,0x61,0x64,0x65,0x72,0x39,0x72,0x65,0x61,0x64,0x5f,0x62,0x69,0x74,0x73,
 [115648]=0x45,0x6a,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,
 [115664]=0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x31,
 [115680]=0x6a,0x70,0x65,0x67,0x5f,0x65,0x78,0x74,0x65,0x6e,0x64,0x45,0x6a,0x6a,0x00,0x5f,
 [115696]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [115712]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,
 [115728]=0x74,0x52,0x65,0x61,0x64,0x65,0x72,0x38,0x72,0x65,0x61,0x64,0x5f,0x62,0x69,0x74,
 [115744]=0x45,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,
 [115760]=0x6f,0x72,0x49,0x6a,0x45,0x44,0x32,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [115776]=0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,
 [115792]=0x4e,0x5f,0x31,0x31,0x32,0x78,0x63,0x66,0x5f,0x74,0x61,0x6b,0x65,0x5f,0x75,0x33,
 [115808]=0x32,0x45,0x50,0x4b,0x68,0x6d,0x52,0x79,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [115824]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [115840]=0x5f,0x4e,0x5f,0x31,0x31,0x36,0x78,0x63,0x66,0x5f,0x74,0x61,0x6b,0x65,0x5f,0x70,
 [115856]=0x6f,0x69,0x6e,0x74,0x65,0x72,0x45,0x50,0x4b,0x68,0x6d,0x52,0x79,0x6a,0x53,0x34,
 [115872]=0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [115888]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x61,0x6c,0x70,
 [115904]=0x68,0x61,0x5f,0x6f,0x76,0x65,0x72,0x5f,0x70,0x69,0x78,0x65,0x6c,0x45,0x50,0x68,
 [115920]=0x50,0x4b,0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,
 [115936]=0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x35,0x78,
 [115952]=0x63,0x66,0x5f,0x72,0x65,0x61,0x64,0x5f,0x75,0x33,0x32,0x5f,0x61,0x74,0x45,0x50,
 [115968]=0x4b,0x68,0x6d,0x79,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [115984]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [116000]=0x31,0x31,0x72,0x65,0x61,0x64,0x5f,0x75,0x33,0x32,0x5f,0x62,0x65,0x45,0x50,0x4b,
 [116016]=0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,
 [116032]=0x49,0x79,0x45,0x31,0x32,0x65,0x6d,0x70,0x6c,0x61,0x63,0x65,0x5f,0x62,0x61,0x63,
 [116048]=0x6b,0x49,0x4a,0x52,0x4b,0x79,0x45,0x45,0x45,0x52,0x79,0x44,0x70,0x4f,0x54,0x5f,
 [116064]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,
 [116080]=0x79,0x45,0x37,0x72,0x65,0x73,0x65,0x72,0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,
 [116096]=0x4e,0x32,0x77,0x6d,0x36,0x64,0x65,0x74,0x61,0x69,0x6c,0x31,0x35,0x76,0x65,0x63,
 [116112]=0x74,0x6f,0x72,0x5f,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x49,0x79,0x45,0x45,
 [116128]=0x50,0x54,0x5f,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,
 [116144]=0x74,0x6f,0x72,0x49,0x68,0x45,0x43,0x32,0x45,0x6d,0x52,0x4b,0x68,0x00,0x5f,0x5f,
 [116160]=0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x36,
 [116176]=0x61,0x73,0x73,0x69,0x67,0x6e,0x49,0x50,0x4b,0x68,0x76,0x45,0x45,0x76,0x54,0x5f,
 [116192]=0x53,0x35,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,
 [116208]=0x6f,0x72,0x49,0x79,0x45,0x43,0x32,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [116224]=0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x79,0x45,0x36,0x72,0x65,0x73,0x69,
 [116240]=0x7a,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,
 [116256]=0x74,0x6f,0x72,0x49,0x68,0x45,0x36,0x69,0x6e,0x73,0x65,0x72,0x74,0x49,0x50,0x4b,
 [116272]=0x68,0x76,0x45,0x45,0x50,0x68,0x53,0x34,0x5f,0x54,0x5f,0x53,0x36,0x5f,0x00,0x5f,
 [116288]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [116304]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,
 [116320]=0x72,0x31,0x39,0x69,0x6e,0x66,0x6c,0x61,0x74,0x65,0x5f,0x7a,0x6c,0x69,0x62,0x5f,
 [116336]=0x73,0x74,0x72,0x65,0x61,0x6d,0x45,0x52,0x4b,0x4e,0x53,0x5f,0x36,0x76,0x65,0x63,
 [116352]=0x74,0x6f,0x72,0x49,0x68,0x45,0x45,0x52,0x53,0x34,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,
 [116368]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [116384]=0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,0x72,0x39,0x42,
 [116400]=0x69,0x74,0x52,0x65,0x61,0x64,0x65,0x72,0x39,0x72,0x65,0x61,0x64,0x5f,0x62,0x69,
 [116416]=0x74,0x73,0x45,0x6a,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [116432]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [116448]=0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,0x72,0x32,0x33,0x64,0x65,0x63,0x6f,0x64,
 [116464]=0x65,0x5f,0x63,0x6f,0x6d,0x70,0x72,0x65,0x73,0x73,0x65,0x64,0x5f,0x62,0x6c,0x6f,
 [116480]=0x63,0x6b,0x45,0x52,0x4e,0x53,0x32,0x5f,0x39,0x42,0x69,0x74,0x52,0x65,0x61,0x64,
 [116496]=0x65,0x72,0x45,0x52,0x4b,0x4e,0x53,0x32,0x5f,0x31,0x32,0x48,0x75,0x66,0x66,0x6d,
 [116512]=0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x45,0x53,0x37,0x5f,0x52,0x4e,0x53,0x5f,0x36,
 [116528]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [116544]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [116560]=0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,0x72,0x31,0x32,0x48,
 [116576]=0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x44,0x31,0x45,0x76,0x00,
 [116592]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,
 [116608]=0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x61,0x64,0x6c,0x65,0x72,
 [116624]=0x33,0x32,0x5f,0x62,0x79,0x74,0x65,0x73,0x45,0x50,0x4b,0x68,0x6d,0x00,0x5f,0x5f,
 [116640]=0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x31,
 [116656]=0x32,0x65,0x6d,0x70,0x6c,0x61,0x63,0x65,0x5f,0x62,0x61,0x63,0x6b,0x49,0x4a,0x68,
 [116672]=0x45,0x45,0x45,0x52,0x68,0x44,0x70,0x4f,0x54,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [116688]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [116704]=0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,0x72,0x31,0x33,0x64,
 [116720]=0x65,0x63,0x6f,0x64,0x65,0x5f,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x45,0x52,0x4e,0x53,
 [116736]=0x32,0x5f,0x39,0x42,0x69,0x74,0x52,0x65,0x61,0x64,0x65,0x72,0x45,0x52,0x4b,0x4e,
 [116752]=0x53,0x32,0x5f,0x31,0x32,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,
 [116768]=0x65,0x45,0x52,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,
 [116784]=0x74,0x6f,0x72,0x49,0x68,0x45,0x31,0x32,0x65,0x6d,0x70,0x6c,0x61,0x63,0x65,0x5f,
 [116800]=0x62,0x61,0x63,0x6b,0x49,0x4a,0x52,0x4b,0x68,0x45,0x45,0x45,0x52,0x68,0x44,0x70,
 [116816]=0x4f,0x54,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,
 [116832]=0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,
 [116848]=0x66,0x6c,0x61,0x74,0x65,0x72,0x31,0x39,0x62,0x75,0x69,0x6c,0x64,0x5f,0x68,0x75,
 [116864]=0x66,0x66,0x6d,0x61,0x6e,0x5f,0x74,0x61,0x62,0x6c,0x65,0x45,0x52,0x4b,0x4e,0x53,
 [116880]=0x5f,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x45,0x52,0x4e,0x53,0x32,
 [116896]=0x5f,0x31,0x32,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,0x61,0x62,0x6c,0x65,0x45,
 [116912]=0x62,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,
 [116928]=0x49,0x6a,0x45,0x43,0x32,0x45,0x6d,0x52,0x4b,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [116944]=0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x36,0x72,0x65,0x73,
 [116960]=0x69,0x7a,0x65,0x45,0x6d,0x52,0x4b,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [116976]=0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,
 [116992]=0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,
 [117008]=0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,
 [117024]=0x66,0x6c,0x61,0x74,0x65,0x72,0x31,0x32,0x48,0x75,0x66,0x66,0x6d,0x61,0x6e,0x54,
 [117040]=0x61,0x62,0x6c,0x65,0x61,0x53,0x45,0x4f,0x53,0x33,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,
 [117056]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x74,0x45,0x36,0x61,0x73,
 [117072]=0x73,0x69,0x67,0x6e,0x45,0x6d,0x52,0x4b,0x74,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [117088]=0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x74,0x45,0x61,0x53,0x45,0x4f,0x53,
 [117104]=0x31,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,
 [117120]=0x72,0x49,0x74,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,0x65,0x45,0x6d,0x52,0x4b,0x74,
 [117136]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,
 [117152]=0x74,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,
 [117168]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x74,0x45,0x37,0x72,0x65,
 [117184]=0x73,0x65,0x72,0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,
 [117200]=0x64,0x65,0x74,0x61,0x69,0x6c,0x31,0x35,0x76,0x65,0x63,0x74,0x6f,0x72,0x5f,0x61,
 [117216]=0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x49,0x74,0x45,0x45,0x50,0x54,0x5f,0x6d,0x00,
 [117232]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,
 [117248]=0x45,0x31,0x32,0x65,0x6d,0x70,0x6c,0x61,0x63,0x65,0x5f,0x62,0x61,0x63,0x6b,0x49,
 [117264]=0x4a,0x52,0x4b,0x6a,0x45,0x45,0x45,0x52,0x6a,0x44,0x70,0x4f,0x54,0x5f,0x00,0x5f,
 [117280]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,
 [117296]=0x43,0x32,0x49,0x50,0x6a,0x76,0x45,0x45,0x54,0x5f,0x53,0x34,0x5f,0x00,0x5f,0x5f,
 [117312]=0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6a,0x45,0x36,
 [117328]=0x69,0x6e,0x73,0x65,0x72,0x74,0x49,0x50,0x6a,0x76,0x45,0x45,0x53,0x33,0x5f,0x50,
 [117344]=0x4b,0x6a,0x54,0x5f,0x53,0x36,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,
 [117360]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x74,0x45,0x44,0x32,0x45,0x76,0x00,0x5f,0x5f,
 [117376]=0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,0x53,0x5f,
 [117392]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [117408]=0x5f,0x31,0x38,0x42,0x79,0x74,0x65,0x53,0x70,0x61,0x6e,0x45,0x45,0x44,0x31,0x45,
 [117424]=0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [117440]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x32,0x63,0x72,0x63,
 [117456]=0x33,0x32,0x5f,0x75,0x70,0x64,0x61,0x74,0x65,0x45,0x6a,0x50,0x4b,0x68,0x6d,0x00,
 [117472]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,
 [117488]=0x53,0x5f,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [117504]=0x5f,0x4e,0x5f,0x31,0x38,0x42,0x79,0x74,0x65,0x53,0x70,0x61,0x6e,0x45,0x45,0x39,
 [117520]=0x70,0x75,0x73,0x68,0x5f,0x62,0x61,0x63,0x6b,0x45,0x52,0x4b,0x53,0x33,0x5f,0x00,
 [117536]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,
 [117552]=0x53,0x5f,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [117568]=0x5f,0x4e,0x5f,0x31,0x39,0x50,0x61,0x72,0x73,0x65,0x64,0x50,0x6e,0x67,0x35,0x46,
 [117584]=0x72,0x61,0x6d,0x65,0x45,0x45,0x35,0x63,0x6c,0x65,0x61,0x72,0x45,0x76,0x00,0x5f,
 [117600]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,0x53,
 [117616]=0x5f,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,
 [117632]=0x4e,0x5f,0x31,0x38,0x42,0x79,0x74,0x65,0x53,0x70,0x61,0x6e,0x45,0x45,0x37,0x72,
 [117648]=0x65,0x73,0x65,0x72,0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [117664]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [117680]=0x5f,0x31,0x31,0x34,0x62,0x69,0x74,0x73,0x5f,0x70,0x65,0x72,0x5f,0x70,0x69,0x78,
 [117696]=0x65,0x6c,0x45,0x52,0x4b,0x4e,0x53,0x31,0x5f,0x36,0x48,0x65,0x61,0x64,0x65,0x72,
 [117712]=0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [117728]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,
 [117744]=0x61,0x74,0x65,0x72,0x35,0x73,0x74,0x61,0x72,0x74,0x45,0x52,0x4b,0x4e,0x53,0x5f,
 [117760]=0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x4e,0x53,0x31,0x5f,0x38,0x42,0x79,0x74,
 [117776]=0x65,0x53,0x70,0x61,0x6e,0x45,0x45,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [117792]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [117808]=0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,0x72,0x31,0x30,0x72,0x65,0x61,
 [117824]=0x64,0x5f,0x65,0x78,0x61,0x63,0x74,0x45,0x50,0x68,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,
 [117840]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [117856]=0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x35,0x75,0x6e,0x66,0x69,0x6c,0x74,0x65,0x72,0x5f,
 [117872]=0x72,0x6f,0x77,0x5f,0x74,0x6f,0x45,0x6a,0x50,0x68,0x50,0x4b,0x68,0x53,0x34,0x5f,
 [117888]=0x6d,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,
 [117904]=0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,
 [117920]=0x6c,0x61,0x74,0x65,0x72,0x44,0x31,0x45,0x76,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [117936]=0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,
 [117952]=0x4e,0x5f,0x31,0x32,0x32,0x62,0x75,0x69,0x6c,0x64,0x5f,0x66,0x69,0x78,0x65,0x64,
 [117968]=0x5f,0x6a,0x70,0x65,0x67,0x5f,0x74,0x61,0x62,0x6c,0x65,0x45,0x62,0x52,0x4e,0x53,
 [117984]=0x31,0x5f,0x31,0x35,0x4a,0x70,0x65,0x67,0x45,0x6e,0x63,0x6f,0x64,0x65,0x54,0x61,
 [118000]=0x62,0x6c,0x65,0x45,0x52,0x4e,0x53,0x5f,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,
 [118016]=0x68,0x45,0x45,0x53,0x36,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [118032]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [118048]=0x32,0x30,0x77,0x72,0x69,0x74,0x65,0x5f,0x6d,0x61,0x72,0x6b,0x65,0x72,0x5f,0x73,
 [118064]=0x65,0x67,0x6d,0x65,0x6e,0x74,0x45,0x50,0x38,0x57,0x4d,0x46,0x53,0x46,0x69,0x6c,
 [118080]=0x65,0x6a,0x52,0x4b,0x4e,0x53,0x5f,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,
 [118096]=0x45,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,
 [118112]=0x72,0x49,0x68,0x45,0x36,0x69,0x6e,0x73,0x65,0x72,0x74,0x49,0x50,0x68,0x76,0x45,
 [118128]=0x45,0x53,0x33,0x5f,0x50,0x4b,0x68,0x54,0x5f,0x53,0x36,0x5f,0x00,0x5f,0x5f,0x5a,
 [118144]=0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,
 [118160]=0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x32,0x32,0x6a,0x70,0x65,0x67,0x5f,0x66,0x6f,0x72,
 [118176]=0x77,0x61,0x72,0x64,0x5f,0x64,0x63,0x74,0x5f,0x71,0x75,0x61,0x6e,0x74,0x45,0x50,
 [118192]=0x4b,0x64,0x52,0x4b,0x4e,0x53,0x5f,0x35,0x61,0x72,0x72,0x61,0x79,0x49,0x68,0x4c,
 [118208]=0x6d,0x36,0x34,0x45,0x45,0x45,0x52,0x4e,0x53,0x34,0x5f,0x49,0x69,0x4c,0x6d,0x36,
 [118224]=0x34,0x45,0x45,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,
 [118240]=0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x37,
 [118256]=0x6a,0x70,0x65,0x67,0x5f,0x65,0x6e,0x63,0x6f,0x64,0x65,0x5f,0x62,0x6c,0x6f,0x63,
 [118272]=0x6b,0x45,0x52,0x4e,0x53,0x31,0x5f,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,0x74,
 [118288]=0x57,0x72,0x69,0x74,0x65,0x72,0x45,0x52,0x4b,0x4e,0x53,0x5f,0x35,0x61,0x72,0x72,
 [118304]=0x61,0x79,0x49,0x69,0x4c,0x6d,0x36,0x34,0x45,0x45,0x45,0x52,0x69,0x52,0x4b,0x4e,
 [118320]=0x53,0x31,0x5f,0x31,0x35,0x4a,0x70,0x65,0x67,0x45,0x6e,0x63,0x6f,0x64,0x65,0x54,
 [118336]=0x61,0x62,0x6c,0x65,0x45,0x53,0x42,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [118352]=0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x43,0x32,0x45,0x53,0x74,0x31,
 [118368]=0x36,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x7a,0x65,0x72,0x5f,0x6c,0x69,0x73,
 [118384]=0x74,0x49,0x68,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,
 [118400]=0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,
 [118416]=0x6a,0x70,0x65,0x67,0x5f,0x63,0x61,0x74,0x65,0x67,0x6f,0x72,0x79,0x45,0x69,0x00,
 [118432]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,
 [118448]=0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x37,0x6a,0x70,0x65,0x67,0x5f,
 [118464]=0x77,0x72,0x69,0x74,0x65,0x5f,0x73,0x79,0x6d,0x62,0x6f,0x6c,0x45,0x52,0x4e,0x53,
 [118480]=0x31,0x5f,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,0x74,0x57,0x72,0x69,0x74,0x65,
 [118496]=0x72,0x45,0x52,0x4b,0x4e,0x53,0x31,0x5f,0x31,0x35,0x4a,0x70,0x65,0x67,0x45,0x6e,
 [118512]=0x63,0x6f,0x64,0x65,0x54,0x61,0x62,0x6c,0x65,0x45,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,
 [118528]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [118544]=0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x4a,0x70,0x65,0x67,0x42,0x69,0x74,0x57,0x72,
 [118560]=0x69,0x74,0x65,0x72,0x31,0x30,0x77,0x72,0x69,0x74,0x65,0x5f,0x62,0x69,0x74,0x73,
 [118576]=0x45,0x6a,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,
 [118592]=0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x4a,
 [118608]=0x70,0x65,0x67,0x42,0x69,0x74,0x57,0x72,0x69,0x74,0x65,0x72,0x31,0x30,0x66,0x6c,
 [118624]=0x75,0x73,0x68,0x5f,0x62,0x79,0x74,0x65,0x45,0x68,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [118640]=0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x36,0x69,0x6e,0x73,
 [118656]=0x65,0x72,0x74,0x45,0x50,0x4b,0x68,0x53,0x74,0x31,0x36,0x69,0x6e,0x69,0x74,0x69,
 [118672]=0x61,0x6c,0x69,0x7a,0x65,0x72,0x5f,0x6c,0x69,0x73,0x74,0x49,0x68,0x45,0x00,0x5f,
 [118688]=0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [118704]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x61,0x70,0x70,0x65,0x6e,0x64,
 [118720]=0x5f,0x75,0x33,0x32,0x5f,0x62,0x65,0x45,0x52,0x4e,0x53,0x5f,0x36,0x76,0x65,0x63,
 [118736]=0x74,0x6f,0x72,0x49,0x68,0x45,0x45,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [118752]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [118768]=0x5f,0x31,0x31,0x32,0x70,0x61,0x74,0x63,0x68,0x5f,0x75,0x33,0x32,0x5f,0x62,0x65,
 [118784]=0x45,0x52,0x4e,0x53,0x5f,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x45,
 [118800]=0x6d,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,
 [118816]=0x72,0x49,0x68,0x45,0x36,0x69,0x6e,0x73,0x65,0x72,0x74,0x49,0x50,0x4b,0x63,0x76,
 [118832]=0x45,0x45,0x50,0x68,0x50,0x4b,0x68,0x54,0x5f,0x53,0x38,0x5f,0x00,0x5f,0x5f,0x5a,
 [118848]=0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6d,0x45,0x43,0x32,
 [118864]=0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,
 [118880]=0x72,0x49,0x6d,0x45,0x36,0x72,0x65,0x73,0x69,0x7a,0x65,0x45,0x6d,0x00,0x5f,0x5f,
 [118896]=0x5a,0x4e,0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x6d,0x45,0x37,
 [118912]=0x72,0x65,0x73,0x65,0x72,0x76,0x65,0x45,0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,
 [118928]=0x6d,0x36,0x64,0x65,0x74,0x61,0x69,0x6c,0x31,0x35,0x76,0x65,0x63,0x74,0x6f,0x72,
 [118944]=0x5f,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x65,0x49,0x6d,0x45,0x45,0x50,0x54,0x5f,
 [118960]=0x6d,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [118976]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x61,0x70,0x70,
 [118992]=0x65,0x6e,0x64,0x5f,0x75,0x33,0x32,0x5f,0x6c,0x65,0x45,0x52,0x4e,0x53,0x5f,0x36,
 [119008]=0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x45,0x6a,0x00,0x5f,0x5f,0x5a,0x4e,
 [119024]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x43,0x32,0x49,
 [119040]=0x50,0x4b,0x68,0x76,0x45,0x45,0x54,0x5f,0x53,0x35,0x5f,0x00,0x5f,0x5f,0x5a,0x4e,
 [119056]=0x32,0x77,0x6d,0x36,0x76,0x65,0x63,0x74,0x6f,0x72,0x49,0x68,0x45,0x44,0x32,0x45,
 [119072]=0x76,0x00,0x20,0x73,0x74,0x75,0x62,0x20,0x68,0x65,0x6c,0x70,0x65,0x72,0x73,0x00,
 [119088]=0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,
 [119104]=0x32,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,
 [119120]=0x6c,0x65,0x38,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,
 [119136]=0x61,0x62,0x6c,0x65,0x39,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,
 [119152]=0x5f,0x74,0x61,0x62,0x6c,0x65,0x31,0x30,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,
 [119168]=0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x31,0x31,0x00,0x47,0x43,0x43,0x5f,
 [119184]=0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x34,0x00,0x47,0x43,
 [119200]=0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x37,0x00,
 [119216]=0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,
 [119232]=0x31,0x32,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,
 [119248]=0x62,0x6c,0x65,0x31,0x33,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,
 [119264]=0x5f,0x74,0x61,0x62,0x6c,0x65,0x31,0x34,0x00,0x47,0x43,0x43,0x5f,0x65,0x78,0x63,
 [119280]=0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x31,0x35,0x00,0x47,0x43,0x43,0x5f,
 [119296]=0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x31,0x36,0x00,0x47,
 [119312]=0x43,0x43,0x5f,0x65,0x78,0x63,0x65,0x70,0x74,0x5f,0x74,0x61,0x62,0x6c,0x65,0x35,
 [119328]=0x39,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [119344]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x30,0x6b,0x53,0x69,
 [119360]=0x67,0x6e,0x61,0x74,0x75,0x72,0x65,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,
 [119376]=0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,
 [119392]=0x5f,0x31,0x31,0x33,0x6b,0x52,0x65,0x69,0x53,0x69,0x67,0x6e,0x61,0x74,0x75,0x72,
 [119408]=0x65,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,
 [119424]=0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x31,0x6b,0x4a,
 [119440]=0x70,0x65,0x67,0x5a,0x69,0x67,0x5a,0x61,0x67,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,
 [119456]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [119472]=0x5f,0x4e,0x5f,0x31,0x31,0x31,0x6b,0x4c,0x65,0x6e,0x67,0x74,0x68,0x42,0x61,0x73,
 [119488]=0x65,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,
 [119504]=0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x32,0x6b,0x4c,
 [119520]=0x65,0x6e,0x67,0x74,0x68,0x45,0x78,0x74,0x72,0x61,0x45,0x00,0x5f,0x5f,0x5a,0x4e,
 [119536]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [119552]=0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x33,0x6b,0x44,0x69,0x73,0x74,0x61,0x6e,0x63,0x65,
 [119568]=0x42,0x61,0x73,0x65,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,
 [119584]=0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,
 [119600]=0x34,0x6b,0x44,0x69,0x73,0x74,0x61,0x6e,0x63,0x65,0x45,0x78,0x74,0x72,0x61,0x45,
 [119616]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,
 [119632]=0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x6b,0x43,0x6f,0x64,
 [119648]=0x65,0x4c,0x65,0x6e,0x67,0x74,0x68,0x4f,0x72,0x64,0x65,0x72,0x45,0x00,0x5f,0x5f,
 [119664]=0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,
 [119680]=0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x32,0x6b,0x41,0x64,0x61,0x6d,0x37,0x53,
 [119696]=0x74,0x61,0x72,0x74,0x58,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,
 [119712]=0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,
 [119728]=0x31,0x32,0x6b,0x41,0x64,0x61,0x6d,0x37,0x53,0x74,0x61,0x72,0x74,0x59,0x45,0x00,
 [119744]=0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,
 [119760]=0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x31,0x6b,0x41,0x64,0x61,0x6d,
 [119776]=0x37,0x53,0x74,0x65,0x70,0x58,0x45,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,
 [119792]=0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,
 [119808]=0x31,0x31,0x31,0x6b,0x41,0x64,0x61,0x6d,0x37,0x53,0x74,0x65,0x70,0x59,0x45,0x00,
 [119824]=0x5f,0x5f,0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,
 [119840]=0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x32,0x34,0x73,0x61,0x76,0x65,
 [119856]=0x5f,0x74,0x67,0x61,0x5f,0x72,0x67,0x62,0x61,0x38,0x5f,0x66,0x69,0x6c,0x65,0x5f,
 [119872]=0x69,0x6d,0x70,0x6c,0x45,0x50,0x4b,0x63,0x50,0x4b,0x68,0x69,0x69,0x45,0x36,0x66,
 [119888]=0x6f,0x6f,0x74,0x65,0x72,0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,
 [119904]=0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,
 [119920]=0x34,0x6b,0x4a,0x70,0x65,0x67,0x4c,0x75,0x6d,0x61,0x51,0x75,0x61,0x6e,0x74,0x45,
 [119936]=0x00,0x5f,0x5f,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,
 [119952]=0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x36,0x6b,0x4a,0x70,0x65,
 [119968]=0x67,0x43,0x68,0x72,0x6f,0x6d,0x61,0x51,0x75,0x61,0x6e,0x74,0x45,0x00,0x5f,0x5f,
 [119984]=0x64,0x79,0x6c,0x64,0x5f,0x70,0x72,0x69,0x76,0x61,0x74,0x65,0x00,0x5f,0x67,0x4c,
 [120000]=0x6f,0x63,0x61,0x6c,0x65,0x00,0x5f,0x5f,0x4d,0x65,0x72,0x67,0x65,0x64,0x47,0x6c,
 [120016]=0x6f,0x62,0x61,0x6c,0x73,0x00,0x5f,0x67,0x4c,0x75,0x61,0x4f,0x75,0x74,0x70,0x75,
 [120032]=0x74,0x4c,0x69,0x6e,0x65,0x4c,0x65,0x6e,0x67,0x74,0x68,0x00,0x5f,0x67,0x4c,0x75,
 [120048]=0x61,0x4f,0x75,0x74,0x70,0x75,0x74,0x4c,0x69,0x6e,0x65,0x00,0x5f,0x67,0x4c,0x75,
 [120064]=0x61,0x43,0x6c,0x6f,0x63,0x6b,0x54,0x69,0x63,0x6b,0x73,0x00,0x5f,0x5f,0x5a,0x4c,
 [120080]=0x31,0x36,0x67,0x43,0x61,0x75,0x67,0x68,0x74,0x45,0x78,0x63,0x65,0x70,0x74,0x69,
 [120096]=0x6f,0x6e,0x00,0x5f,0x5f,0x5a,0x4c,0x39,0x67,0x53,0x6a,0x4c,0x6a,0x48,0x65,0x61,
 [120112]=0x64,0x00,0x5f,0x5f,0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,
 [120128]=0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x32,0x32,0x6a,0x70,
 [120144]=0x65,0x67,0x5f,0x69,0x6e,0x76,0x65,0x72,0x73,0x65,0x5f,0x64,0x63,0x74,0x5f,0x62,
 [120160]=0x6c,0x6f,0x63,0x6b,0x45,0x52,0x4b,0x4e,0x53,0x5f,0x35,0x61,0x72,0x72,0x61,0x79,
 [120176]=0x49,0x69,0x4c,0x6d,0x36,0x34,0x45,0x45,0x45,0x50,0x68,0x45,0x31,0x31,0x69,0x6e,
 [120192]=0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x00,0x5f,0x5f,0x5a,0x5a,0x4e,0x32,
 [120208]=0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,
 [120224]=0x5f,0x4e,0x5f,0x31,0x32,0x32,0x6a,0x70,0x65,0x67,0x5f,0x69,0x6e,0x76,0x65,0x72,
 [120240]=0x73,0x65,0x5f,0x64,0x63,0x74,0x5f,0x62,0x6c,0x6f,0x63,0x6b,0x45,0x52,0x4b,0x4e,
 [120256]=0x53,0x5f,0x35,0x61,0x72,0x72,0x61,0x79,0x49,0x69,0x4c,0x6d,0x36,0x34,0x45,0x45,
 [120272]=0x45,0x50,0x68,0x45,0x38,0x63,0x6f,0x73,0x54,0x61,0x62,0x6c,0x65,0x00,0x5f,0x5f,
 [120288]=0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [120304]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x38,0x49,0x6e,0x66,0x6c,0x61,0x74,0x65,
 [120320]=0x72,0x32,0x30,0x66,0x69,0x78,0x65,0x64,0x5f,0x64,0x69,0x73,0x74,0x61,0x6e,0x63,
 [120336]=0x65,0x5f,0x74,0x61,0x62,0x6c,0x65,0x45,0x76,0x45,0x35,0x74,0x61,0x62,0x6c,0x65,
 [120352]=0x00,0x5f,0x5f,0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,
 [120368]=0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x32,0x63,0x72,0x63,
 [120384]=0x33,0x32,0x5f,0x75,0x70,0x64,0x61,0x74,0x65,0x45,0x6a,0x50,0x4b,0x68,0x6d,0x45,
 [120400]=0x31,0x31,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x00,0x5f,0x5f,
 [120416]=0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,
 [120432]=0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x31,0x32,0x63,0x72,0x63,0x33,0x32,0x5f,
 [120448]=0x75,0x70,0x64,0x61,0x74,0x65,0x45,0x6a,0x50,0x4b,0x68,0x6d,0x45,0x35,0x74,0x61,
 [120464]=0x62,0x6c,0x65,0x00,0x5f,0x5f,0x5a,0x5a,0x4e,0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,
 [120480]=0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,0x5f,0x5f,0x4e,0x5f,0x31,0x32,0x32,
 [120496]=0x6a,0x70,0x65,0x67,0x5f,0x66,0x6f,0x72,0x77,0x61,0x72,0x64,0x5f,0x64,0x63,0x74,
 [120512]=0x5f,0x71,0x75,0x61,0x6e,0x74,0x45,0x50,0x4b,0x64,0x52,0x4b,0x4e,0x53,0x5f,0x35,
 [120528]=0x61,0x72,0x72,0x61,0x79,0x49,0x68,0x4c,0x6d,0x36,0x34,0x45,0x45,0x45,0x52,0x4e,
 [120544]=0x53,0x34,0x5f,0x49,0x69,0x4c,0x6d,0x36,0x34,0x45,0x45,0x45,0x45,0x31,0x31,0x69,
 [120560]=0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x00,0x5f,0x5f,0x5a,0x5a,0x4e,
 [120576]=0x32,0x77,0x6d,0x33,0x70,0x6e,0x67,0x31,0x32,0x5f,0x47,0x4c,0x4f,0x42,0x41,0x4c,
 [120592]=0x5f,0x5f,0x4e,0x5f,0x31,0x32,0x32,0x6a,0x70,0x65,0x67,0x5f,0x66,0x6f,0x72,0x77,
 [120608]=0x61,0x72,0x64,0x5f,0x64,0x63,0x74,0x5f,0x71,0x75,0x61,0x6e,0x74,0x45,0x50,0x4b,
 [120624]=0x64,0x52,0x4b,0x4e,0x53,0x5f,0x35,0x61,0x72,0x72,0x61,0x79,0x49,0x68,0x4c,0x6d,
 [120640]=0x36,0x34,0x45,0x45,0x45,0x52,0x4e,0x53,0x34,0x5f,0x49,0x69,0x4c,0x6d,0x36,0x34,
 [120656]=0x45,0x45,0x45,0x45,0x38,0x63,0x6f,0x73,0x54,0x61,0x62,0x6c,0x65,0x00,0x00,0x00,
};
/* Pooka's Free Software License. */
#include "word_divide.h"
uint32_t pf_png32_100034a0(uint32_t a,uint32_t b){uint32_t rest;return pf_word_divide(a,b,0);}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x8U)
 */

uint pf_png32_100034a8(uint param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 == 0) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 == (uint *)0x0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    for (uVar1 = 0x1f; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
      uVar3 = param_1 >> (uVar1 & 0xff) & 1 | uVar3 << 1;
      if (param_2 <= uVar3) {
        uVar2 = uVar2 | 1 << (uVar1 & 0xff);
        uVar3 = uVar3 - param_2;
      }
    }
    if (param_3 == (uint *)0x0) {
      return uVar2;
    }
  }
  *param_3 = uVar3;
  return uVar2;
}


/* Pooka's Free Software License. */
#include "word_divide.h"
uint32_t pf_png32_10003520(uint32_t a,uint32_t b){uint32_t rest;return (pf_word_divide(a,b,&rest),rest);}


/* Pooka's Free Software License. */
#include "word_divide.h"
uint32_t pf_png32_10003544(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,0);}


/* Pooka's Free Software License. */
#include "word_divide.h"
uint32_t pf_png32_1000357c(uint32_t a,uint32_t b){uint32_t rest;return pf_word_signed_divide(a,b,1);}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x120U)
 */

undefined8 pf_png32_100035c0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar10 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    uVar8 = 0;
    uVar10 = 0;
    uVar4 = 0;
    while (-1 < (int)uVar5) {
      uVar3 = uVar4 << 1 | uVar10 >> 0x1f;
      uVar7 = uVar5 - 0x20;
      uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar4 = param_2 >> (uVar7 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar10 << 1;
      bVar1 = uVar3 <= param_4;
      bVar2 = (uint)(param_3 <= uVar6) <= uVar3 - param_4;
      uVar10 = uVar6 - param_3;
      uVar4 = uVar3 - (param_4 + (param_3 > uVar6));
      if (bVar1 && bVar2) {
        uVar10 = uVar6;
        uVar4 = uVar3;
      }
      uVar3 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar3 = 1 << (uVar7 & 0xff);
      }
      if (!bVar1 || !bVar2) {
        uVar8 = uVar8 | uVar3;
      }
      uVar3 = 1 << (uVar5 & 0xff);
      uVar5 = uVar5 - 1;
      if (-1 < (int)uVar7) {
        uVar3 = 0;
      }
      if (!bVar1 || !bVar2) {
        uVar9 = uVar9 | uVar3;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = uVar4;
  }
  return CONCAT44(uVar8,uVar9);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x228U)
 */

undefined8 pf_png32_100036c8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = pf_png32_100047c4(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x238U)
 */

undefined8 pf_png32_100036d8(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = pf_png32_10004708(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x248U)
 */

float pf_png32_100036e8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  pf_png32_1000484c(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x264U)
 */

float pf_png32_10003704(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  pf_png32_10004880(param_1,param_2);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}



#undef DAT_10003730
#define DAT_10003730 (*(uint8_t * *)(((uintptr_t)pf_png32_state + 0x290U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x280U)
 */

void pf_png32_10003720(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *in_r3;

  *DAT_10003730 = 0;
  pf_png32_10003734(in_r3);
  return;
}

#undef DAT_10003730


#undef DAT_10003914
#define DAT_10003914 (*(uint * *)(((uintptr_t)pf_png32_state + 0x474U)))
#undef DAT_10003918
#define DAT_10003918 (*(char * *)(((uintptr_t)pf_png32_state + 0x478U)))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define apcStack_ac (*(char * (*)[34])(frame + 20))
#define local_24 (*(int *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x294U)
 */

/* WARNING: Type propagation algorithm not settling */

void pf_png32_10003734(int *in_r3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  uint uVar5;
  int *extraout_r3 = 0;
  uint uVar6;
  char **unaff_r5;
  int iVar7;
  char *pcVar8;
  char *unaff_r8;
  int *piVar9;
  uint uVar10;

  pcVar1 = DAT_10003918;
  local_24 = 0;
  if (*DAT_10003918 == '\0') {
    apcStack_ac[1] = DAT_10003918;
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar6 = 0;
    piVar9 = (int *)0x0;
    uVar10 = DAT_10003914[1];
    if (0xf < uVar10) {
      uVar10 = 0x10;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      pcVar8 = (char *)DAT_10003914[uVar6 * 2 + 2];
      uVar5 = DAT_10003914[uVar6 * 2 + 3];
      pcVar2 = pcVar8 + uVar5;
      in_r3 = (int *)0x0;
      if ((uVar5 != 0) &&
         (in_r3 = (int *)(pcVar2 + -0x300001),
         CARRY4(uVar5,(uint)pcVar8) || CARRY4(uVar5,(uint)pcVar8) < ((char *)0x300000 < pcVar2))) {
        if (pcVar8 < (char *)0x300001) {
          pcVar8 = (char *)0x300000;
        }
        if (piVar9 < &DataAbort) {
          ppcVar4 = apcStack_ac + (int)piVar9 * 2 + 2;
          in_r3 = piVar9;
          while( true ) {
            if (in_r3 != (int *)0x0) {
              unaff_r5 = ppcVar4 + -2;
              unaff_r8 = *unaff_r5;
            }
            if (in_r3 == (int *)0x0 || unaff_r8 <= pcVar8) break;
            pcVar3 = *unaff_r5;
            in_r3 = (int *)((int)in_r3 + -1);
            unaff_r5 = (char **)unaff_r5[1];
            ppcVar4[1] = (char *)unaff_r5;
            *ppcVar4 = pcVar3;
            ppcVar4 = ppcVar4 + -2;
          }
          piVar9 = (int *)((int)piVar9 + 1);
          *ppcVar4 = pcVar8;
          ppcVar4[1] = pcVar2 + -(int)pcVar8;
        }
      }
    }
    if (piVar9 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      ppcVar4 = apcStack_ac + 5;
      iVar7 = 1;
      while (piVar9 = (int *)((int)piVar9 + -1), piVar9 != (int *)0x0) {
        pcVar2 = ppcVar4[-1];
        in_r3 = (int *)apcStack_ac[iVar7 * 2];
        if (apcStack_ac[iVar7 * 2 + 1] + (int)in_r3 < pcVar2) {
          pcVar2 = ppcVar4[-1];
          apcStack_ac[iVar7 * 2 + 3] = *ppcVar4;
          apcStack_ac[iVar7 * 2 + 2] = pcVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          pcVar2 = pcVar2 + (int)*ppcVar4;
          if (apcStack_ac[iVar7 * 2 + 1] + (int)in_r3 < pcVar2) {
            apcStack_ac[iVar7 * 2 + 1] = pcVar2 + -(int)in_r3;
          }
        }
        ppcVar4 = ppcVar4 + 2;
      }
    }
    ppcVar4 = apcStack_ac + 3;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      pf_png32_100054a4((uint)ppcVar4[-1],(uint)*ppcVar4,&local_24,in_r3);
      in_r3 = extraout_r3;
      ppcVar4 = ppcVar4 + 2;
    }
    if (*(int *)(pcVar1 + 4) == 0) {
      uVar6 = 0x4000000;
      if (0x300000 < *DAT_10003914) {
        uVar6 = *DAT_10003914 & 0xfffffff0;
      }
      uVar10 = uVar6 - 0x300000;
      if (uVar6 < 0x30001d) {
        uVar10 = 0x3d00000;
      }
      pf_png32_100054a4(0x300000,uVar10,&local_24,in_r3);
    }
    *pcVar1 = '\x01';
  }
  return;
}

#undef DAT_10003914
#undef DAT_10003918
#undef EXT_00000010
#undef apcStack_ac
#undef local_24


#undef DAT_1000395c
#define DAT_1000395c (*(int * *)(((uintptr_t)pf_png32_state + 0x4bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x47cU)
 */

int pf_png32_1000391c(int *in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  pf_png32_10003734(in_r3);
  iVar1 = 0;
  piVar2 = DAT_1000395c;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = *piVar2 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_1000395c


#undef DAT_100039ac
#define DAT_100039ac (*(int * *)(((uintptr_t)pf_png32_state + 0x50cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x4c0U)
 */

long pf_png32_10003960(int *in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int *in_r3_00;

  pf_png32_10003734(in_r3_00);
  iVar1 = 0;
  piVar2 = DAT_100039ac;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_100039ac


#undef DAT_100039e4
#define DAT_100039e4 (*(int * *)(((uintptr_t)pf_png32_state + 0x544U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x510U)
 */

int pf_png32_100039b0(int *in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  pf_png32_10003734(in_r3);
  iVar1 = 0;
  piVar2 = DAT_100039e4;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_100039e4


#undef DAT_10003a24
#define DAT_10003a24 (*(int * *)(((uintptr_t)pf_png32_state + 0x584U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x548U)
 */

long pf_png32_100039e8(int *in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int *in_r3_00;

  pf_png32_10003734(in_r3_00);
  iVar1 = 0;
  piVar2 = DAT_10003a24;
  while (piVar2 = (int *)piVar2[1], piVar2 != (int *)0x0) {
    iVar1 = iVar1 + *piVar2;
  }
  return iVar1;
}

#undef DAT_10003a24


#undef DAT_10003ac8
#define DAT_10003ac8 (*(uint * *)(((uintptr_t)pf_png32_state + 0x628U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x588U)
 */

uint * pf_png32_10003a28(int param_1,int *in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;

  puVar5 = (uint *)0x0;
  if (param_1 != 0) {
    pf_png32_10003734(in_r3);
    uVar1 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_10003ac8;
    do {
      puVar2 = (uint *)puVar2[1];
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
    } while (((char)puVar2[2] != '\x01') || (uVar3 = *puVar2, uVar3 < uVar1));
    if (uVar1 + 0x20 <= uVar3) {
      piVar4 = (int *)((int)puVar2 + uVar1 + 0x10);
      *piVar4 = (uVar3 - uVar1) + -0x10;
      *(uint *)((int)puVar2 + uVar1 + 0x14) = puVar2[1];
      *(undefined1 *)((int)puVar2 + uVar1 + 0x18) = 1;
      *puVar2 = uVar1;
      puVar2[1] = (uint)piVar4;
    }
    puVar5 = puVar2 + 4;
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  return puVar5;
}

#undef DAT_10003ac8


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x62cU)
 */

longlong pf_png32_10003acc(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  if (0x3f < param_3) {
    return 0;
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0x1f) | (param_1 >> 1) >> (~param_3 & 0x1f),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x688U)
 */

undefined8 pf_png32_10003b28(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar2 = param_2;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (param_3 < 0x40) {
      if (param_3 < 0x20) {
        uVar1 = (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f);
        uVar2 = param_2 >> (param_3 & 0xff);
      }
      else {
        uVar1 = param_2 >> (param_3 - 0x20 & 0xff);
      }
    }
  }
  return CONCAT44(uVar2,uVar1);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x6e0U)
 */

undefined8 pf_png32_10003b80(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 - 0x20 & 0xff));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x72cU)
 */

undefined8 pf_png32_10003bcc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = pf_png32_10003be8(param_1,param_2,param_3,param_4,(uint *)0x0);
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x748U)
 */

undefined8 pf_png32_10003be8(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar10 = 0;
    uVar4 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    uVar8 = 0;
    uVar10 = 0;
    uVar4 = 0;
    while (-1 < (int)uVar5) {
      uVar3 = uVar4 << 1 | uVar10 >> 0x1f;
      uVar7 = uVar5 - 0x20;
      uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar4 = param_2 >> (uVar7 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar10 << 1;
      bVar1 = uVar3 <= param_4;
      bVar2 = (uint)(param_3 <= uVar6) <= uVar3 - param_4;
      uVar10 = uVar6 - param_3;
      uVar4 = uVar3 - (param_4 + (param_3 > uVar6));
      if (bVar1 && bVar2) {
        uVar10 = uVar6;
        uVar4 = uVar3;
      }
      uVar3 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar3 = 1 << (uVar7 & 0xff);
      }
      if (!bVar1 || !bVar2) {
        uVar8 = uVar8 | uVar3;
      }
      uVar3 = 1 << (uVar5 & 0xff);
      uVar5 = uVar5 - 1;
      if (-1 < (int)uVar7) {
        uVar3 = 0;
      }
      if (!bVar1 || !bVar2) {
        uVar9 = uVar9 | uVar3;
      }
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar10;
    param_5[1] = uVar4;
  }
  return CONCAT44(uVar8,uVar9);
}



#define auStackY_218 (*(uint (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x850U)
 */

undefined8 pf_png32_10003cf0(uint in_r0,uint in_r1,uint in_r2,uint in_r3)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  pf_png32_10003be8(in_r0,in_r1,in_r2,in_r3,auStackY_218 + 0x82);
  return 0;
}

#undef auStackY_218


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x884U)
 */

undefined8 pf_png32_10003d24(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;

  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar2 = (int)param_4 >> 0x1f;
    uVar4 = pf_png32_10003be8((param_1 ^ uVar1) - uVar1,
                               (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1)),
                               (param_3 ^ uVar2) - uVar2,
                               (param_4 ^ uVar2) - (uVar2 + ((param_3 ^ uVar2) < uVar2)),(uint *)0x0
                              );
    uVar3 = CONCAT44(-((int)((ulonglong)uVar4 >> 0x20) + (uint)((int)uVar4 != 0)),-(int)uVar4);
    if (-uVar1 == -uVar2) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}



#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x8fcU)
 */

undefined8 pf_png32_10003d9c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    local_14 = 0;
    local_18 = 0;
    uVar1 = (int)param_4 >> 0x1f;
    pf_png32_10003be8((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),
                       (param_3 ^ uVar1) - uVar1,
                       (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1)),&local_18);
    uVar2 = -local_18;
    iVar3 = -(local_14 + (uint)(local_18 != 0));
    if (-1 < (int)param_2) {
      uVar2 = local_18;
      iVar3 = local_14;
    }
  }
  return CONCAT44(iVar3,uVar2);
}

#undef local_18
#undef local_14


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x980U)
 */

void pf_png32_10003e20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x988U)
 */

int pf_png32_10003e28(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * pf_png32_10003e34(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x00006800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void pf_png32_10003e78(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x00006800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * pf_png32_10003eb8(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x00006800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xa64U)
 */

void * pf_png32_10003f04(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(undefined1 *)((int)dst + uVar1) = *(undefined1 *)((int)src + uVar1);
  }
  return dst;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xa80U)
 */

void * pf_png32_10003f20(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (dst != src && bytes != 0) {
    if (dst < src) {
      puVar1 = dst;
      for (; bytes != 0; bytes = bytes - 1) {
        *puVar1 = *(undefined1 *)src;
        src = (undefined1 *)((int)src + 1);
        puVar1 = puVar1 + 1;
      }
      return dst;
    }
    for (; bytes != 0; bytes = bytes - 1) {
      *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
    }
  }
  return dst;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xad4U)
 */

void * pf_png32_10003f74(void *dst,int byte,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = 0; bytes != uVar1; uVar1 = uVar1 + 1) {
    *(char *)((int)dst + uVar1) = (char)byte;
  }
  return dst;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xaecU)
 */

void pf_png32_10003f8c(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb04U)
 */

void pf_png32_10003fa4(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb1cU)
 */

int pf_png32_10003fbc(char *param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;

  do {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_2;
    param_3 = param_3 + -1;
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while ((uint)bVar2 == (uint)bVar1);
  return (uint)bVar2 - (uint)bVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb44U)
 */

bool pf_png32_10003fe4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb58U)
 */

bool pf_png32_10003ff8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb6cU)
 */

bool pf_png32_1000400c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb84U)
 */

bool pf_png32_10004024(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xbb0U)
 */

bool pf_png32_10004050(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xbd0U)
 */

bool pf_png32_10004070(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xbe4U)
 */

int pf_png32_10004084(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xbf4U)
 */

int pf_png32_10004094(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc04U)
 */

uint pf_png32_100040a4(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  while( true ) {
    if (text == (char *)0x0) {
      return 0;
    }
    if (text[uVar1] == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc34U)
 */

int pf_png32_100040d4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) || (uVar1 != *param_2)) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1 - *param_2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc60U)
 */

int pf_png32_10004100(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) || (uVar1 != *param_2)) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1 - *param_2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc64U)
 */

void pf_png32_10004104(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar2);
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc80U)
 */

void * pf_png32_10004120(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = pf_png32_100040a4((char *)param_1);
    dst = pf_png32_10003e34(uVar1 + 1);
    if (dst != (void *)0x0) {
      pvVar2 = pf_png32_10003f04(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return pvVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcc8U)
 */

char * pf_png32_10004168(char *param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (*param_1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcf4U)
 */

int pf_png32_10004194(int param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;

  iVar2 = 0;
  while ((*(char *)(param_1 + iVar2) != '\0' &&
         (pcVar1 = pf_png32_10004168(param_2,*(char *)(param_1 + iVar2)), pcVar1 != (char *)0x0)))
  {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd38U)
 */

char * pf_png32_100041d8(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = pf_png32_10004168(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd78U)
 */

char * pf_png32_10004218(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  int iVar3;

  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      iVar3 = 0;
      do {
        pcVar1 = param_2 + iVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + iVar3;
        iVar3 = iVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}



#undef DAT_10004268
#define DAT_10004268 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xdc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xdc0U)
 */

undefined4 pf_png32_10004260(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return DAT_10004268;
}

#undef DAT_10004268


#undef DAT_10004274
#define DAT_10004274 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xdd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xdccU)
 */

undefined4 pf_png32_1000426c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return DAT_10004274;
}

#undef DAT_10004274


#undef DAT_1000428c
#define DAT_1000428c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xdecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xdd8U)
 */

undefined8 pf_png32_10004278(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = DAT_1000428c;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_1000428c;
  }
  return CONCAT44(param_1,uVar1);
}

#undef DAT_1000428c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xdf0U)
 */

double pf_png32_10004290(double value,int exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;

  dVar2 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  for (iVar1 = exponent; 0 < iVar1; iVar1 = iVar1 + -1) {
    dVar2 = dVar2 + dVar2;
  }
  if (-1 < exponent) {
    exponent = 0;
  }
  for (; exponent != 0; exponent = exponent + 1) {
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xe30U)
 */

double pf_png32_100042d0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    iVar1 = 0;
    dVar3 = dVar2;
    if (dVar2 < 0.0) {
      dVar3 = -dVar2;
    }
    for (; 1.0 <= dVar3; dVar3 = dVar3 * 0.5) {
      iVar1 = iVar1 + 1;
    }
    for (; (0.0 < dVar3 && (dVar3 < 0.5)); dVar3 = dVar3 + dVar3) {
      iVar1 = iVar1 + -1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    if (dVar2 < 0.0) {
      dVar3 = -dVar3;
    }
  }
  return dVar3;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xec8U)
 */

double pf_png32_10004368(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar2 = (double)(((ulonglong)right & 0xffffffff00000000) + ((ulonglong)right & 0xffffffff));
  if (dVar2 == 0.0) {
    return 0.0;
  }
  dVar3 = (double)(((ulonglong)left & 0xffffffff00000000) + ((ulonglong)left & 0xffffffff));
  uVar1 = VectorFloatToSigned(dVar3 / dVar2,3);
  dVar4 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return dVar3 - dVar4 * dVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf00U)
 */

double pf_png32_100043a0(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar5 = (double)(((ulonglong)right & 0xffffffff00000000) + ((ulonglong)right & 0xffffffff));
  uVar3 = VectorFloatToSigned(dVar5,3);
  dVar6 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  dVar4 = 0.0;
  if (dVar6 == dVar5) {
    if (uVar3 == 0) {
      dVar4 = 1.0;
    }
    else {
      dVar4 = 1.0;
      uVar2 = uVar3;
      if ((int)uVar3 < 0) {
        uVar2 = -uVar3;
      }
      dVar5 = (double)(((ulonglong)left & 0xffffffff00000000) + ((ulonglong)left & 0xffffffff));
      while (uVar2 != 0) {
        uVar1 = uVar2 & 1;
        uVar2 = uVar2 >> 1;
        dVar6 = dVar5 * dVar4;
        if (uVar1 == 0) {
          dVar6 = dVar4;
        }
        dVar4 = dVar6;
        dVar5 = dVar5 * dVar5;
      }
      if ((int)uVar3 < 0) {
        dVar4 = 1.0 / dVar4;
      }
    }
  }
  return dVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf7cU)
 */

double pf_png32_1000441c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return dVar5;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfacU)
 */

double pf_png32_1000444c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  if (dVar5 < dVar4) {
    dVar5 = dVar5 + 1.0;
  }
  return dVar5;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xff0U)
 */

double pf_png32_10004490(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  dVar2 = 0.0;
  if (0.0 < dVar3) {
    iVar1 = 0x18;
    dVar2 = 1.0;
    if (1.0 <= dVar3) {
      dVar2 = dVar3;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      dVar2 = (dVar2 + dVar3 / dVar2) * 0.5;
    }
  }
  return dVar2;
}



#undef DAT_100045a0
#define DAT_100045a0 (*(double *)(((uintptr_t)pf_png32_state + 0x1100U)))
#undef DAT_100045a8
#define DAT_100045a8 (*(double *)(((uintptr_t)pf_png32_state + 0x1108U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1040U)
 */

double pf_png32_100044e0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  dVar4 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  uVar3 = in_fpscr & 0xfffffff;
  if (dVar4 <= 0.0) {
    return DAT_100045a0;
  }
  iVar1 = 0;
  for (; uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f,
      dVar4 != 1.5 && SUB41(uVar3 >> 0x1f,0) == NAN(dVar4); dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar1 = iVar1 + -1;
  }
  dVar8 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar8 * dVar8;
  dVar7 = 0.0;
  dVar4 = 1.0;
  for (uVar2 = 1; uVar2 < 0x14; uVar2 = uVar2 + 2) {
    dVar6 = dVar8 / dVar4;
    dVar8 = dVar5 * dVar8;
    dVar7 = dVar7 + dVar6;
    dVar4 = dVar4 + 2.0;
  }
  dVar4 = (double)VectorSignedToFloat(iVar1,(byte)(uVar3 >> 0x16) & 3);
  return dVar7 + dVar7 + dVar4 * DAT_100045a8;
}

#undef DAT_100045a0
#undef DAT_100045a8


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1110U)
 */

undefined8 pf_png32_100045b0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  dVar1 = dVar1 + pf_bits_double(CONCAT44(param_2,param_1));
  uVar2 = pf_png32_10004708(SUB84(dVar1,0),(int)(pf_double_bits(dVar1) >> 0x20));
  return uVar2;
}



#undef DAT_10004630
#define DAT_10004630 (*(double *)(((uintptr_t)pf_png32_state + 0x1190U)))
#undef DAT_10004638
#define DAT_10004638 (*(double *)(((uintptr_t)pf_png32_state + 0x1198U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1140U)
 */

double pf_png32_100045e0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double extraout_d0 = 0;
  double dVar1;

  pf_png32_10004640((double)(((ulonglong)value & 0xffffffff00000000) +
                             ((ulonglong)value & 0xffffffff)));
  dVar1 = extraout_d0 * extraout_d0;
  return extraout_d0 *
         (dVar1 / -6.0 + 1.0 + (dVar1 * dVar1) / DAT_10004638 +
         (dVar1 * dVar1 * dVar1) / DAT_10004630);
}

#undef DAT_10004630
#undef DAT_10004638


#undef DAT_10004678
#define DAT_10004678 (*(double *)(((uintptr_t)pf_png32_state + 0x11d8U)))
#undef DAT_10004680
#define DAT_10004680 (*(double *)(((uintptr_t)pf_png32_state + 0x11e0U)))
#undef DAT_10004688
#define DAT_10004688 (*(double *)(((uintptr_t)pf_png32_state + 0x11e8U)))
#undef DAT_10004690
#define DAT_10004690 (*(double *)(((uintptr_t)pf_png32_state + 0x11f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x11a0U)
 */

void pf_png32_10004640(double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10004678 < in_d0; in_d0 = in_d0 + DAT_10004690) {
  }
  for (; in_d0 < DAT_10004680; in_d0 = in_d0 + DAT_10004688) {
  }
  return;
}

#undef DAT_10004678
#undef DAT_10004680
#undef DAT_10004688
#undef DAT_10004690

/* Native cosine polynomial. Pooka's Free Software License. */
#include "numbers.h"
double pf_png32_10004698(double value){return pf_cosine_polynomial(value);}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1248U)
 */

double pf_png32_100046e8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;

  uVar1 = (uint)((ulonglong)value >> 0x20);
  dVar2 = (double)(((ulonglong)uVar1 << 0x20) + ((ulonglong)value & 0xffffffff));
  if (dVar2 < 0.0) {
    dVar2 = (double)(((ulonglong)(uVar1 ^ 0x80000000) << 0x20) + ((ulonglong)value & 0xffffffff));
  }
  return dVar2;
}



#undef DAT_100047bc
#define DAT_100047bc (*(double *)(((uintptr_t)pf_png32_state + 0x131cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1268U)
 */

undefined8 pf_png32_10004708(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;

  dVar8 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar8 == 0.0) {
    return 0;
  }
  uVar7 = 0;
  uVar3 = 0x3f;
  uVar6 = 0;
  dVar9 = dVar8;
  if (dVar8 < 0.0) {
    dVar9 = -dVar8;
  }
  dVar10 = DAT_100047bc;
  while (-1 < (int)uVar3) {
    bVar1 = dVar10 <= dVar9;
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    bVar2 = dVar10 <= dVar9;
    dVar11 = dVar9 - dVar10;
    dVar10 = dVar10 * 0.5;
    if (bVar1) {
      uVar7 = uVar7 | uVar4;
    }
    uVar4 = 0x20 - uVar3;
    uVar3 = uVar3 - 1;
    uVar4 = 1 >> (uVar4 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (bVar2) {
      uVar6 = uVar6 | uVar4;
      dVar9 = dVar11;
    }
  }
  uVar4 = -(uVar6 + (uVar7 != 0));
  uVar3 = -uVar7;
  if (0.0 <= dVar8) {
    uVar4 = uVar6;
    uVar3 = uVar7;
  }
  return CONCAT44(uVar4,uVar3);
}

#undef DAT_100047bc


#undef DAT_10004844
#define DAT_10004844 (*(double *)(((uintptr_t)pf_png32_state + 0x13a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1324U)
 */

undefined8 pf_png32_100047c4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;

  dVar8 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar3 = 0;
  uVar4 = 0;
  if (0.0 < dVar8) {
    uVar5 = 0x3f;
    dVar9 = DAT_10004844;
    while (-1 < (int)uVar5) {
      bVar1 = dVar9 <= dVar8;
      uVar6 = 1 << (uVar5 & 0xff);
      uVar7 = uVar5 - 0x20;
      if (-1 < (int)uVar7) {
        uVar6 = 0;
      }
      bVar2 = dVar9 <= dVar8;
      dVar10 = dVar8 - dVar9;
      dVar9 = dVar9 * 0.5;
      if (bVar1) {
        uVar3 = uVar3 | uVar6;
      }
      uVar6 = 0x20 - uVar5;
      uVar5 = uVar5 - 1;
      uVar6 = 1 >> (uVar6 & 0xff);
      if (-1 < (int)uVar7) {
        uVar6 = 1 << (uVar7 & 0xff);
      }
      if (bVar2) {
        uVar4 = uVar4 | uVar6;
        dVar8 = dVar10;
      }
    }
    return CONCAT44(uVar4,uVar3);
  }
  return 0;
}

#undef DAT_10004844


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x13acU)
 */

void pf_png32_1000484c(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  for (; param_1 != 0 || param_2 != 0; param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1) {
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x13e0U)
 */

void pf_png32_10004880(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    pf_png32_1000484c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  pf_png32_1000484c(param_1,param_2);
  return;
}



#undef DAT_100048e0
#define DAT_100048e0 (*(float *)(((uintptr_t)pf_png32_state + 0x1440U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1408U)
 */

float pf_png32_100048a8(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  float fVar2;
  double dVar3;

  if (right == 0.0) {
    fVar2 = DAT_100048e0;
  }
  else {
    uVar1 = VectorFloatToSigned((double)left / (double)right,3);
    dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    fVar2 = (float)((double)left - dVar3 * (double)right);
  }
  return fVar2;
}

#undef DAT_100048e0


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1444U)
 */

float pf_png32_100048e4(float param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_100042d0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20),
                             param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1470U)
 */

float pf_png32_10004910(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_10004290((double)param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x149cU)
 */

float pf_png32_1000493c(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_100043a0((double)left,(double)right);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x14d4U)
 */

float pf_png32_10004974(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar3 = (double)value;
  dVar4 = (double)VectorSignedToFloat((int)value,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar4 < dVar3) << 0x1f | (uint)(dVar4 == dVar3) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar5 = (double)VectorSignedToFloat((int)value + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar4) || NAN(dVar3))) {
    dVar4 = dVar5;
  }
  return (float)dVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x150cU)
 */

float pf_png32_100049ac(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_1000444c((double)value);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1534U)
 */

double pf_png32_100049d4(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
  if (dVar4 < 0.0) {
    dVar4 = pf_png32_1000444c(value);
    return dVar4;
  }
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return dVar5;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1574U)
 */

float pf_png32_10004a14(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_100049d4((double)value);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x159cU)
 */

float pf_png32_10004a3c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_10004490((double)value);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x15c4U)
 */

float pf_png32_10004a64(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_100044e0((double)param_1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x15ecU)
 */

long pf_png32_10004a8c(undefined4 in_r0,undefined4 in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = pf_png32_100045b0(in_r0,in_r1);
  return (long)uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x15fcU)
 */

float pf_png32_10004a9c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_100045e0((double)value);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1624U)
 */

float pf_png32_10004ac4(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_10004698((double)value);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x164cU)
 */

float pf_png32_10004aec(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (value < 0.0) {
    value = -value;
  }
  return value;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1668U)
 */

int pf_png32_10004b08(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;

  pbVar3 = param_1;
  while( true ) {
    uVar5 = (uint)*pbVar3;
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001fU) == 0)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar2 = (uint)((uVar5 - 0x2b & 0xfffffffd) == 0);
  pbVar1 = pbVar3 + uVar2;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar1 == 0x30) && ((pbVar3[uVar2 + 1] | 0x20) == 0x78)) {
      pbVar1 = pbVar3 + uVar2 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar1 == 0x30) {
      if ((pbVar3[uVar2 + 1] | 0x20) == 0x78) {
        pbVar1 = pbVar3 + uVar2 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar2 = pf_png32_10004c30((int)(char)*pbVar1);
    if (param_3 <= uVar2) break;
    iVar4 = iVar4 * param_3 + uVar2;
    param_1 = pbVar1 + 1;
    pbVar1 = pbVar1 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar5 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1790U)
 */

uint pf_png32_10004c30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x30;
  if (9 < (uVar1 & 0xff)) {
    if ((param_1 - 0x61U & 0xff) < 0x1a) {
      uVar1 = param_1 - 0x57;
    }
    else {
      uVar1 = 0xffffffff;
      if ((param_1 - 0x41U & 0xff) < 0x1a) {
        uVar1 = param_1 - 0x37;
      }
    }
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x17d4U)
 */

int pf_png32_10004c74(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;

  for (pbVar2 = param_1; (uVar3 = (uint)*pbVar2, uVar3 - 9 < 5 || (uVar3 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  if (uVar3 == 0x2b) {
    pbVar2 = pbVar2 + 1;
  }
  else if (uVar3 == 0x2d) {
    pbVar2 = pbVar2 + 1;
    bVar1 = true;
    goto LAB_10004cd0;
  }
  bVar1 = false;
LAB_10004cd0:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar2 == 0x30) && ((pbVar2[1] | 0x20) == 0x78)) {
      pbVar2 = pbVar2 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar2 == 0x30) {
      if ((pbVar2[1] | 0x20) == 0x78) {
        pbVar2 = pbVar2 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar3 = pf_png32_10004c30((int)(char)*pbVar2);
    if (param_3 <= uVar3) break;
    iVar4 = iVar4 * param_3 + uVar3;
    param_1 = pbVar2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (bVar1) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x18f4U)
 */

double pf_png32_10004d94(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint in_fpscr;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;

  pbVar1 = (byte *)text;
  while( true ) {
    uVar5 = (uint)*pbVar1;
    if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x80001fU) == 0)) break;
    pbVar1 = pbVar1 + 1;
  }
  dVar8 = 0.0;
  pbVar1 = pbVar1 + ((uVar5 - 0x2b & 0xfffffffd) == 0);
  bVar2 = false;
  while( true ) {
    uVar4 = (uint)*pbVar1;
    if (9 < uVar4 - 0x30) break;
    pbVar1 = pbVar1 + 1;
    bVar2 = true;
    dVar9 = (double)VectorUnsignedToFloat(uVar4 - 0x30,(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = dVar9 + dVar8 * 10.0;
  }
  if (uVar4 == 0x2e) {
    dVar9 = 1.0;
    dVar10 = 0.0;
    while( true ) {
      pbVar1 = pbVar1 + 1;
      uVar4 = (uint)*pbVar1;
      if (9 < uVar4 - 0x30) break;
      dVar9 = dVar9 * 10.0;
      bVar2 = true;
      dVar11 = (double)VectorUnsignedToFloat(uVar4 - 0x30,(byte)(in_fpscr >> 0x16) & 3);
      dVar10 = dVar11 + dVar10 * 10.0;
    }
  }
  else {
    dVar9 = 1.0;
    dVar10 = 0.0;
  }
  if (bVar2) {
    dVar8 = dVar8 + dVar10 / dVar9;
    if ((uVar4 | 0x20) == 0x65) {
      iVar7 = 1;
      pbVar6 = pbVar1 + 1;
      if (*pbVar6 == 0x2b) {
        pbVar6 = pbVar1 + 2;
      }
      else if (*pbVar6 == 0x2d) {
        pbVar6 = pbVar1 + 2;
        iVar7 = -1;
      }
      iVar3 = 0;
      bVar2 = false;
      for (; *pbVar6 - 0x30U < 10; pbVar6 = pbVar6 + 1) {
        bVar2 = true;
        iVar3 = (uint)*pbVar6 + iVar3 * 10 + -0x30;
      }
      if (bVar2) {
        dVar8 = pf_png32_10004290(dVar8,iVar3 * iVar7);
        dVar8 = pf_bits_double(((pf_double_bits(dVar8) & 0xffffffff00000000) + (pf_double_bits(dVar8) & 0xffffffff)));
        pbVar1 = pbVar6;
      }
    }
    if (end != (char **)0x0) {
      *end = (char *)pbVar1;
    }
    if (uVar5 == 0x2d) {
      dVar8 = -dVar8;
    }
    return dVar8;
  }
  if (end == (char **)0x0) {
    return 0.0;
  }
  *end = text;
  return 0.0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1a90U)
 */

float pf_png32_10004f30(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_png32_10004d94(text,end);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}



#undef DAT_10005344
#define DAT_10005344 (*(char * *)(((uintptr_t)pf_png32_state + 0x1ea4U)))
#define local_4c (*(int *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(byte * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1aacU)
 */

int pf_png32_10004f4c(char *out,uint capacity,char *format,void *args)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar5;
  byte *pbVar4;
  int iVar6;
  double *pdVar7;
  bool bVar8;
  uint in_fpscr;
  int iVar9;
  double dVar10;
  double dVar11;
  uint uVar12;

  local_4c = 0;
  local_48 = capacity;
  local_44 = (byte *)out;
  if (capacity != 0) {
    *out = '\0';
  }
LAB_10004fa8:
  iVar3 = 10;
  bVar1 = *format;
  if (bVar1 != 0x25) {
    if (bVar1 == 0) {
      if (capacity != 0) {
        *local_44 = 0;
      }
      return local_4c;
    }
    if (1 < local_48) {
      *local_44 = bVar1;
LAB_10004fd8:
      local_44 = local_44 + 1;
      local_48 = local_48 - 1;
    }
    goto LAB_10004fdc;
  }
  uVar2 = (uint)(byte)format[1];
  if (uVar2 != 0x25) {
    pbVar4 = (byte *)(format + 2);
    while (uVar2 - 0x30 < 10) {
      uVar2 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    pbVar5 = pbVar4;
    if (uVar2 == 0x2e) {
      do {
        pbVar4 = pbVar5 + 1;
        uVar2 = (uint)*pbVar5;
        pbVar5 = pbVar4;
      } while (uVar2 - 0x30 < 10);
    }
    format = (char *)(pbVar4 + -1);
LAB_10005060:
    switch((uintptr_t)(uVar2)) {
    case 99:
      goto switchD_10005070_caseD_63;
    case 100:
    case 0x69:
      goto switchD_10005070_caseD_64;
    case 0x65:
    case 0x67:
    case 0x6a:
    case 0x6b:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x71:
    case 0x72:
    case 0x76:
    case 0x77:
    case 0x79:
switchD_10005070_caseD_65:
      if (local_48 < 2) goto LAB_10004fdc;
      *local_44 = 0x3f;
      goto LAB_10004fd8;
    case 0x66:
      dVar10 = *(double *)args;
      in_fpscr = in_fpscr & 0xfffffff;
      if (dVar10 < 0.0) {
        if (1 < local_48) {
          local_48 = local_48 - 1;
          *local_44 = 0x2d;
          local_44 = local_44 + 1;
        }
        dVar10 = -dVar10;
        local_4c = local_4c + 1;
      }
      uVar2 = VectorFloatToSigned(dVar10,3);
      pf_png32_100053d8((int *)&local_44,&local_48,&local_4c,uVar2,10,0);
      dVar11 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      pdVar7 = (double *)((int)args + 8);
      iVar6 = 6;
      pbVar4 = local_44;
      if (1 < local_48) {
        local_48 = local_48 - 1;
        pbVar4 = local_44 + 1;
        *local_44 = 0x2e;
      }
      dVar10 = dVar10 - dVar11;
      local_44 = pbVar4;
      while (iVar6 != 0) {
        bVar8 = 1 < local_48;
        if (bVar8) {
          local_48 = local_48 - 1;
        }
        iVar6 = iVar6 + -1;
        iVar9 = VectorFloatToSigned(dVar10 * 10.0,3);
        if (bVar8) {
          iVar3 = iVar9;
        }
        dVar11 = (double)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar10 * 10.0 - dVar11;
        if (bVar8) {
          iVar3 = iVar3 + 0x30;
          *local_44 = (byte)iVar3;
          local_44 = local_44 + 1;
        }
      }
      local_4c = local_4c + 7;
      goto LAB_10005024;
    case 0x68:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto switchD_10005070_caseD_68;
    case 0x70:
      uVar2 = *(uint *)args;
      pf_png32_10005384((int *)&local_44,&local_48,&local_4c,DAT_10005344);
      iVar3 = 0;
      uVar12 = 0x10;
      break;
    case 0x73:
      pdVar7 = (double *)((int)args + 4);
      pf_png32_10005384((int *)&local_44,&local_48,&local_4c,*(char **)args);
      goto LAB_10005024;
    case 0x75:
      uVar2 = *(uint *)args;
      goto LAB_100052f4;
    case 0x78:
      uVar2 = *(uint *)args;
      iVar3 = 0;
LAB_100052e0:
      uVar12 = 0x10;
      break;
    default:
      if (uVar2 != 0x49) {
        if (uVar2 == 0x58) {
          uVar2 = *(uint *)args;
          iVar3 = 1;
          goto LAB_100052e0;
        }
        goto switchD_10005070_caseD_65;
      }
      goto switchD_10005070_caseD_64;
    }
    goto LAB_1000530c;
  }
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = 0x25;
    local_44 = local_44 + 1;
  }
  pdVar7 = args;
  format = format + 1;
  goto LAB_1000501c;
switchD_10005070_caseD_68:
  format = format + 1;
  uVar2 = (uint)(byte)*format;
  goto LAB_10005060;
switchD_10005070_caseD_64:
  uVar2 = *(uint *)args;
  if (0x7fffffff < uVar2) {
    if (1 < local_48) {
      local_48 = local_48 - 1;
      *local_44 = 0x2d;
      local_44 = local_44 + 1;
    }
    uVar2 = -uVar2;
    local_4c = local_4c + 1;
  }
LAB_100052f4:
  uVar12 = 10;
  iVar3 = 0;
LAB_1000530c:
  pdVar7 = (double *)((int)args + 4);
  pf_png32_100053d8((int *)&local_44,&local_48,&local_4c,uVar2,uVar12,iVar3);
  goto LAB_10005024;
switchD_10005070_caseD_63:
  if (1 < local_48) {
    local_48 = local_48 - 1;
    *local_44 = (byte)*(uint *)args;
    local_44 = local_44 + 1;
  }
  args = (void *)((int)args + 4);
LAB_10004fdc:
  pdVar7 = args;
LAB_1000501c:
  local_4c = local_4c + 1;
LAB_10005024:
  format = format + 1;
  args = pdVar7;
  goto LAB_10004fa8;
}

#undef DAT_10005344
#undef local_4c
#undef local_48
#undef local_44


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1ea8U)
 */

void pf_png32_10005348(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}



#undef DAT_100053d4
#define DAT_100053d4 (*(char * *)(((uintptr_t)pf_png32_state + 0x1f34U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1ee4U)
 */

void pf_png32_10005384(int *param_1,uint *param_2,int *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = DAT_100053d4;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    pf_png32_10005348(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef DAT_100053d4


#undef DAT_10005470
#define DAT_10005470 (*(int *)(((uintptr_t)pf_png32_state + 0x1fd0U)))
#undef DAT_10005474
#define DAT_10005474 (*(int *)(((uintptr_t)pf_png32_state + 0x1fd4U)))
#define local_40 (*(undefined1 (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1f38U)
 */

void pf_png32_100053d8(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = DAT_10005474;
  iVar1 = 0;
  if (param_6 != 0) {
    iVar4 = DAT_10005470;
  }
  do {
    iVar3 = iVar1;
    uVar2 = pf_png32_100034a0(param_4,param_5);
    bVar5 = param_5 <= param_4;
    local_40[-iVar3] = *(undefined1 *)(iVar4 + (param_4 - uVar2 * param_5));
    param_4 = uVar2;
    iVar1 = iVar3 + -1;
  } while (bVar5);
  for (; iVar3 != 1; iVar3 = iVar3 + 1) {
    pf_png32_10005348(param_1,param_2,param_3,local_40[-iVar3]);
  }
  return;
}

#undef DAT_10005470
#undef DAT_10005474
#undef local_40

/* Preserve the native variadic arguments. Pooka's Free Software License. */
int pf_png32_10005478(char *out,unsigned int capacity,char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=pf_png32_10004f4c(out,capacity,format,args);__builtin_va_end(args);return result;
}



#undef DAT_10005508
#define DAT_10005508 (*(int *)(((uintptr_t)pf_png32_state + 0x2068U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2004U)
 */

void pf_png32_100054a4(uint param_1,uint param_2,int *param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;

  if (param_3 != (int *)0x0) {
    param_4 = (int *)(param_1 + 0xf & 0xfffffff0);
    param_1 = (int)param_4 - param_1;
  }
  if (param_3 != (int *)0x0 && param_1 < param_2) {
    uVar1 = param_2 - param_1 & 0xfffffff0;
    if (uVar1 < 0x1d) {
      return;
    }
    param_4[1] = 0;
    *(undefined1 *)(param_4 + 2) = 1;
    *param_4 = uVar1 - 0x10;
    piVar2 = (int *)(DAT_10005508 + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)(*param_3 + 4);
    }
    *piVar2 = (int)param_4;
    *param_3 = (int)param_4;
    return;
  }
  return;
}

#undef DAT_10005508


#undef DAT_10005558
#define DAT_10005558 (*(int *)(((uintptr_t)pf_png32_state + 0x20b8U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x00006800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x00006804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x00006808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x00006800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x00006804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x00006808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x206cU)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 pf_png32_1000550c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_10005558) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10005558
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808


#undef DAT_10005608
#define DAT_10005608 (*(int * *)(((uintptr_t)pf_png32_state + 0x2168U)))
#undef DAT_1000560c
#define DAT_1000560c (*(int *)(((uintptr_t)pf_png32_state + 0x216cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x20bcU)
 */

void pf_png32_1000555c(char *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar3 = DAT_1000560c;
  piVar2 = DAT_10005608;
  if (param_1 == (char *)0x0) {
    return;
  }
  do {
    if (param_2 == 0) {
      return;
    }
    cVar1 = *param_1;
    if (cVar1 == '\b') {
      if (*piVar2 != 0) {
        iVar4 = *piVar2 + -1;
LAB_100055ec:
        *piVar2 = iVar4;
      }
    }
    else if (cVar1 != '\r') {
      if (cVar1 != '\n') {
        iVar4 = *piVar2;
        if (iVar4 - 0x1ffU < 0xfffffe00) {
          pf_png32_10005610(0);
          iVar4 = *piVar2;
        }
        *(char *)(iVar3 + iVar4) = cVar1;
        iVar4 = iVar4 + 1;
        goto LAB_100055ec;
      }
      pf_png32_10005610(1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

#undef DAT_10005608
#undef DAT_1000560c


#undef DAT_10005690
#define DAT_10005690 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x21f0U)))
#undef DAT_10005694
#define DAT_10005694 (*(uint * *)(((uintptr_t)pf_png32_state + 0x21f4U)))
#undef DAT_10005698
#define DAT_10005698 (*(void * *)(((uintptr_t)pf_png32_state + 0x21f8U)))
#define local_214 (*(undefined1 (*)[512])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2170U)
 */

void pf_png32_10005610(int param_1)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint bytes;

  puVar1 = DAT_10005694;
  bytes = *DAT_10005694;
  if (bytes != 0 || param_1 != 0) {
    uVar2 = 0;
    if (bytes != 0) {
      pf_png32_10003f04(local_214,DAT_10005698,bytes);
      uVar2 = *puVar1;
    }
    local_214[uVar2] = 0;
    iVar3 = pf_png32_10006454(0x40);
    if ((iVar3 != 0) && ((code *)*DAT_10005690 != (code *)0x0)) {
      (*(code *)*DAT_10005690)(local_214);
    }
    *puVar1 = 0;
  }
  return;
}

#undef DAT_10005690
#undef DAT_10005694
#undef DAT_10005698
#undef local_214


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x21fcU)
 */

void pf_png32_1000569c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10005610(1);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2204U)
 */

void pf_png32_100056a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10005610(0);
  return;
}



#undef DAT_100056f4
#define DAT_100056f4 (*(char * *)(((uintptr_t)pf_png32_state + 0x2254U)))
#undef DAT_100056f8
#define DAT_100056f8 (*(int *)(((uintptr_t)pf_png32_state + 0x2258U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x220cU)
 */

void pf_png32_100056ac(int param_1,int param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;

  format = DAT_100056f4;
  if (param_1 != 0) {
    format = (char *)param_1;
  }
  iVar1 = DAT_100056f8;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  iVar1 = pf_png32_10005478(acStack_14c,0x140,format,iVar1);
  if (0 < iVar1) {
    pf_png32_1000555c(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_100056f4
#undef DAT_100056f8
#undef acStack_14c


#undef DAT_10005738
#define DAT_10005738 (*(int *)(((uintptr_t)pf_png32_state + 0x2298U)))
#undef DAT_1000573c
#define DAT_1000573c (*(int *)(((uintptr_t)pf_png32_state + 0x229cU)))
#undef DAT_10005740
#define DAT_10005740 (*(int *)(((uintptr_t)pf_png32_state + 0x22a0U)))
#undef DAT_10005744
#define DAT_10005744 (*(int *)(((uintptr_t)pf_png32_state + 0x22a4U)))
#undef DAT_10005748
#define DAT_10005748 (*(int *)(((uintptr_t)pf_png32_state + 0x22a8U)))
#undef DAT_1000574c
#define DAT_1000574c (*(int *)(((uintptr_t)pf_png32_state + 0x22acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x225cU)
 */

void pf_png32_100056fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10005750(DAT_10005738);
  pf_png32_10005750(DAT_1000573c);
  pf_png32_10005750(DAT_10005740);
  pf_png32_10005750(DAT_10005744);
  pf_png32_10005750(DAT_10005748);
  pf_png32_10005750(DAT_1000574c);
  return;
}

#undef DAT_10005738
#undef DAT_1000573c
#undef DAT_10005740
#undef DAT_10005744
#undef DAT_10005748
#undef DAT_1000574c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x22b0U)
 */

void pf_png32_10005750(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    return;
  }
  uVar1 = pf_png32_100040a4((char *)param_1);
  pf_png32_1000555c((char *)param_1,uVar1);
  return;
}



#undef DAT_10005794
#define DAT_10005794 (*(int *)(((uintptr_t)pf_png32_state + 0x22f4U)))
#undef DAT_10005798
#define DAT_10005798 (*(int *)(((uintptr_t)pf_png32_state + 0x22f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x22d8U)
 */

void pf_png32_10005778(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10005750(DAT_10005794);
  pf_png32_10005750(DAT_10005798);
  return;
}

#undef DAT_10005794
#undef DAT_10005798


#undef DAT_1000581c
#define DAT_1000581c (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x237cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x22fcU)
 */

bool pf_png32_1000579c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if (param_1 != 0 && param_2 != 0) {
    pf_png32_100056a4();
    iVar1 = pf_png32_10006454(0x44);
    if ((iVar1 != 0) && ((code *)*DAT_1000581c != (code *)0x0)) {
      iVar1 = (*(code *)*DAT_1000581c)(param_1,unaff_r5,param_3,param_4);
      bVar2 = iVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_1000581c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2380U)
 */

undefined4 pf_png32_10005820(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2388U)
 */

void pf_png32_10005828(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x238cU)
 */

undefined4 pf_png32_1000582c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}



#undef DAT_10005adc
#define DAT_10005adc (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x263cU)))
#undef DAT_10005ae0
#define DAT_10005ae0 (*(byte * *)(((uintptr_t)pf_png32_state + 0x2640U)))
#undef DAT_10005ae4
#define DAT_10005ae4 (*(byte * *)(((uintptr_t)pf_png32_state + 0x2644U)))
#undef DAT_10005ae8
#define DAT_10005ae8 (*(byte * *)(((uintptr_t)pf_png32_state + 0x2648U)))
#undef DAT_10005aec
#define DAT_10005aec (*(char * *)(((uintptr_t)pf_png32_state + 0x264cU)))
#define auStack_a8 (*(undefined1 (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2394U)
 */

undefined4 * pf_png32_10005834(int param_1,int param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *unaff_r5;
  uint unaff_r6;
  undefined1 uVar7;
  char *unaff_r10;

  if (param_1 != 0) {
    unaff_r10 = (char *)param_2;
  }
  if (param_1 == 0 || param_2 == 0) {
    uVar6 = 0x16;
    goto LAB_10005a78;
  }
  iVar2 = pf_png32_100040d4((byte *)param_1,DAT_10005ae0);
  if (iVar2 == 0) {
    uVar6 = 1;
LAB_10005a14:
    puVar4 = pf_png32_10003e34(800);
    if (puVar4 != (undefined4 *)0x0) {
      pf_png32_10003f74(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      *puVar4 = uVar6;
      pf_varargs_10005478__4_((char *)(puVar4 + 1),0xf1,DAT_10005aec,param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = pf_png32_100040d4((byte *)param_1,DAT_10005ae4);
    if (iVar3 == 0) {
      uVar6 = 2;
      goto LAB_10005a14;
    }
    iVar3 = pf_png32_100040d4((byte *)param_1,DAT_10005ae8);
    if (iVar3 == 0) {
      uVar6 = 3;
      goto LAB_10005a14;
    }
    puVar4 = pf_png32_10003e34(800);
    if (puVar4 != (undefined4 *)0x0) {
      pf_png32_10003f74(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = pf_png32_10004168(unaff_r10,'r');
      uVar7 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = pf_png32_10004168(unaff_r10,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = pf_png32_10004168(unaff_r10,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = pf_png32_10004168(unaff_r10,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = pf_png32_10004168(unaff_r10,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = pf_png32_10004168(unaff_r10,'+');
        uVar7 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar7 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar7;
      pcVar5 = pf_png32_10004168(unaff_r10,'a');
      puVar4[0x43] = 0xffffffff;
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      pf_varargs_10005478__4_((char *)(puVar4 + 1),0xf1,DAT_10005aec,param_1);
      pf_png32_10003f74(auStack_a8 + 0x80,0,0xc);
      iVar2 = pf_png32_10005af0(param_1,auStack_a8 + 0x80);
      if (iVar2 == 0) {
        if (*(char *)((int)puVar4 + 0x111) == '\0') {
          *(undefined4 *)*DAT_10005adc = 2;
LAB_10005ab0:
          pf_png32_10003e78(puVar4);
          return (undefined4 *)0x0;
        }
      }
      else {
        pcVar5 = pf_png32_10004168(unaff_r10,'w');
        if ((pcVar5 == (char *)0x0) && (unaff_r6 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            iVar2 = pf_png32_10005b3c((int)puVar4,unaff_r6);
            if (iVar2 == 0) goto LAB_10005ab0;
            pf_png32_10003f04((void *)puVar4[0x3f],unaff_r5,unaff_r6);
          }
          else {
            puVar4[0x3e] = unaff_r5;
          }
          puVar4[0x40] = unaff_r6;
        }
      }
      if (*(char *)((int)puVar4 + 0x112) == '\x01') {
        puVar4[0x42] = puVar4[0x40];
        return puVar4;
      }
      return puVar4;
    }
  }
  uVar6 = 0xc;
LAB_10005a78:
  *(undefined4 *)*DAT_10005adc = uVar6;
  return (undefined4 *)0x0;
}

#undef DAT_10005adc
#undef DAT_10005ae0
#undef DAT_10005ae4
#undef DAT_10005ae8
#undef DAT_10005aec
#undef auStack_a8


#undef DAT_10005b38
#define DAT_10005b38 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2698U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2650U)
 */

undefined4 pf_png32_10005af0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = pf_png32_10006454(0x34);
  if ((iVar1 == 0) || ((code *)*DAT_10005b38 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_png32_state+0x268cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_10005b38)(param_1,param_2);
  return uVar2;
}

#undef DAT_10005b38


#undef DAT_10005bc0
#define DAT_10005bc0 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2720U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x269cU)
 */

undefined4 pf_png32_10005b3c(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint size;
  void *pvVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x104);
    if (uVar1 < param_2) {
      if (uVar1 == 0) {
        uVar1 = 0x100;
      }
      do {
        size = uVar1;
        uVar1 = size << 1;
      } while (size < param_2);
      pvVar2 = pf_png32_10003eb8(*(void **)(param_1 + 0xfc),size);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10005bc0 = 0xc;
        return 0;
      }
      *(uint *)(param_1 + 0x104) = size;
      *(void **)(param_1 + 0xfc) = pvVar2;
      *(void **)(param_1 + 0xf8) = pvVar2;
    }
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_10005bc0


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2724U)
 */

undefined4 * pf_png32_10005bc4(int param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (param_3 != (uint *)0x0) {
    pf_png32_10005bf0(param_3);
  }
  puVar1 = pf_png32_10005834(param_1,param_2);
  return puVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2750U)
 */

undefined4 pf_png32_10005bf0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pf_png32_10005f88(param_1);
    if ((void *)param_1[0x3f] != (void *)0x0) {
      pf_png32_10003e78((void *)param_1[0x3f]);
    }
    pf_png32_10003e78(param_1);
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2794U)
 */

int pf_png32_10005c34(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_r6;
  int unaff_r8;
  int iVar4;

  iVar2 = 0;
  if (param_3 != 0) {
    unaff_r8 = param_2;
  }
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r6 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r6[0x44] == '\x01'))
    {
      for (; iVar2 != param_3; iVar2 = iVar2 + 1) {
        puVar3 = param_1;
        for (iVar4 = unaff_r8; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar1 = pf_png32_10005cd4(unaff_r6);
          if (uVar1 == 0xffffffff) {
            return iVar2;
          }
          *puVar3 = (char)uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + unaff_r8;
      }
      iVar2 = param_3;
    }
  }
  return iVar2;
}



#undef DAT_10005dbc
#define DAT_10005dbc (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x291cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2834U)
 */

uint pf_png32_10005cd4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *text;

  uVar2 = 0xffffffff;
  if ((param_1 != (int *)0x0) && ((char)param_1[0x44] == '\x01')) {
    uVar2 = param_1[0x43];
    if (uVar2 != 0xffffffff) {
      param_1[0x43] = -1;
      return uVar2;
    }
    if (*param_1 == 1) {
      uVar2 = param_1[199];
      if ((uint)param_1[0xc6] <= uVar2) {
        text = (char *)((int)param_1 + 0x116);
        uVar2 = 0;
        bVar1 = pf_png32_1000579c((int)text,0x1fe,DAT_10005dbc,0);
        if (!bVar1) goto LAB_10005dac;
        uVar3 = pf_png32_100040a4(text);
        param_1[0xc6] = uVar3 + 1;
        text[uVar3] = '\n';
        text[param_1[0xc6]] = '\0';
      }
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    uVar2 = param_1[0x42];
    if ((uint)param_1[0x40] <= uVar2) {
LAB_10005dac:
      *(undefined1 *)(param_1 + 0x45) = 1;
      return 0xffffffff;
    }
    param_1[0x42] = uVar2 + 1;
    uVar2 = (uint)*(byte *)(param_1[0x3e] + uVar2);
  }
  return uVar2;
}

#undef DAT_10005dbc


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2920U)
 */

int pf_png32_10005dc0(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_r5;
  uint uVar4;

  iVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != 0) {
      unaff_r5 = param_4;
    }
    if ((param_1 != 0 && param_4 != (uint *)0x0) && (*(char *)((int)unaff_r5 + 0x111) == '\x01')) {
      uVar4 = param_3 * param_2;
      if ((*unaff_r5 & 0xfffffffe) == 2) {
        pf_png32_1000555c((char *)param_1,uVar4);
        unaff_r5[0x42] = unaff_r5[0x42] + uVar4;
      }
      else {
        if (*(char *)((int)unaff_r5 + 0x112) == '\0') {
          uVar1 = unaff_r5[0x42];
        }
        else {
          uVar1 = unaff_r5[0x40];
          unaff_r5[0x42] = uVar1;
        }
        iVar3 = pf_png32_10005b3c((int)unaff_r5,uVar1 + uVar4);
        if (iVar3 == 0) {
          return 0;
        }
        uVar2 = unaff_r5[0x40];
        uVar1 = unaff_r5[0x42];
        if (uVar2 < uVar1) {
          pf_png32_10003f74((void *)(unaff_r5[0x3f] + uVar2),0,uVar1 - uVar2);
          uVar1 = unaff_r5[0x42];
        }
        pf_png32_10003f04((void *)(unaff_r5[0x3f] + uVar1),(void *)param_1,uVar4);
        uVar4 = unaff_r5[0x42] + uVar4;
        unaff_r5[0x42] = uVar4;
        if (unaff_r5[0x40] < uVar4) {
          unaff_r5[0x40] = uVar4;
        }
        *(undefined2 *)((int)unaff_r5 + 0x113) = 1;
      }
      iVar3 = param_3;
    }
  }
  return iVar3;
}



#undef DAT_10005f60
#define DAT_10005f60 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2ac0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2a2cU)
 */

undefined4 pf_png32_10005ecc(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) goto LAB_10005ee8;
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10005ee0;
        iVar1 = 0x100;
      }
      param_2 = *(int *)((int)param_1 + iVar1) + param_2;
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      param_1[0x43] = -1;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      return 0;
    }
  }
LAB_10005ee0:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
LAB_10005ee8:
  *(undefined4 *)*DAT_10005f60 = 0x16;
  return 0xffffffff;
}

#undef DAT_10005f60


#undef DAT_10005f84
#define DAT_10005f84 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2ae4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2ac4U)
 */

undefined4 pf_png32_10005f64(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)*DAT_10005f84 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef DAT_10005f84


#undef DAT_10005ffc
#define DAT_10005ffc (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2b5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2ae8U)
 */

undefined4 pf_png32_10005f88(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x113);
    }
    if (bVar3 && uVar2 == 1) {
      iVar1 = pf_png32_10006198(param_1 + 1,param_1[0x3e],param_1[0x40]);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *(undefined4 *)*DAT_10005ffc = 5;
        return 0xffffffff;
      }
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
  }
  return 0;
}

#undef DAT_10005ffc


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2b60U)
 */

undefined1 pf_png32_10006000(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2b70U)
 */

undefined1 pf_png32_10006010(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2b80U)
 */

void pf_png32_10006020(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2b9cU)
 */

uint pf_png32_1000603c(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
  }
  return uVar1;
}



#undef DAT_100060a4
#define DAT_100060a4 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2c04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2bc0U)
 */

undefined4 pf_png32_10006060(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    iVar1 = pf_png32_100060a8(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 5;
  }
  *(undefined4 *)*DAT_100060a4 = uVar2;
  return 0xffffffff;
}

#undef DAT_100060a4


#undef DAT_100060e8
#define DAT_100060e8 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2c48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2c08U)
 */

undefined4 pf_png32_100060a8(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = pf_png32_10006454(0x3c);
  if ((iVar1 == 0) || ((code *)*DAT_100060e8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_png32_state+0x2c3cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100060e8)(param_1);
  return uVar2;
}

#undef DAT_100060e8


#undef DAT_10006194
#define DAT_10006194 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2cf4U)))
#define local_20 (*(int *)(frame + 16))
#define uStack_1c (*(undefined4 *)(frame + 20))
#define uStack_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2c4cU)
 */

undefined4 pf_png32_100060ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int unaff_r5;
  undefined4 uVar2;

  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if (param_1 != 0 && param_2 != 0) {
    local_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    pf_png32_10003f74(&local_20,0,0xc);
    iVar1 = pf_png32_10005af0(param_1,&local_20);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = pf_png32_10006198(unaff_r5,local_20,uStack_1c);
      uVar2 = 5;
      if ((iVar1 != 0) && (iVar1 = pf_png32_100060a8(param_1), iVar1 != 0)) {
        return 0;
      }
    }
    *(undefined4 *)*DAT_10006194 = uVar2;
  }
  else {
    *(undefined4 *)*DAT_10006194 = 0x16;
  }
  return 0xffffffff;
}

#undef DAT_10006194
#undef local_20
#undef uStack_1c
#undef uStack_18


#undef DAT_100061e8
#define DAT_100061e8 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x2d48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2cf8U)
 */

undefined4 pf_png32_10006198(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  iVar1 = pf_png32_10006454(0x38);
  if ((iVar1 == 0) || ((code *)*DAT_100061e8 == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_png32_state+0x2d3cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_100061e8)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_100061e8


#define auStack_a8 (*(undefined1 (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2d4cU)
 */

undefined4 pf_png32_100061ec(int param_1,int *param_2,uint *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *dst;
  void *unaff_r5;
  uint unaff_r6;
  undefined4 uVar2;
  uint *unaff_r10;

  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      unaff_r10 = param_3;
    }
    if (param_2 != (int *)0x0 && param_3 != (uint *)0x0) {
      pf_png32_10003f74(auStack_a8 + 0x80,0,0xc);
      iVar1 = pf_png32_10005af0(param_1,auStack_a8 + 0x80);
      if (iVar1 != 0) {
        size = unaff_r6;
        if (unaff_r6 < 2) {
          size = 1;
        }
        dst = pf_png32_10003e34(size);
        if (dst != (void *)0x0) {
          if (unaff_r6 == 0) {
            unaff_r6 = 0;
          }
          else {
            pf_png32_10003f04(dst,unaff_r5,unaff_r6);
          }
          uVar2 = 1;
          *unaff_r10 = unaff_r6;
          *param_2 = (int)dst;
        }
      }
    }
  }
  return uVar2;
}

#undef auStack_a8


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e04U)
 */

bool pf_png32_100062a4(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    iVar1 = pf_png32_10006198(param_1,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e44U)
 */

undefined4 pf_png32_100062e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e4cU)
 */

void pf_png32_100062ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e50U)
 */

undefined4 pf_png32_100062f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e58U)
 */

undefined4 pf_png32_100062f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e60U)
 */

undefined4 pf_png32_10006300(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e68U)
 */

char * pf_png32_10006308(int param_1,char param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2e90U)
 */

int pf_png32_10006330(byte *param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = (uint)*param_1;
    if (uVar1 != *param_2) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - *param_2;
}



#undef DAT_10006408
#define DAT_10006408 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f68U)))
#undef DAT_1000640c
#define DAT_1000640c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f6cU)))
#undef DAT_10006410
#define DAT_10006410 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f70U)))
#undef DAT_10006414
#define DAT_10006414 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f74U)))
#undef DAT_10006418
#define DAT_10006418 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f78U)))
#undef DAT_1000641c
#define DAT_1000641c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f7cU)))
#undef DAT_10006420
#define DAT_10006420 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f80U)))
#undef DAT_10006424
#define DAT_10006424 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f84U)))
#undef DAT_10006428
#define DAT_10006428 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x2f88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2ed0U)
 */

undefined4 pf_png32_10006370(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return DAT_10006428;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10006384_caseD_0;
  case 2:
    return DAT_1000640c;
  case 5:
    return DAT_10006410;
  case 9:
    return DAT_10006414;
  case 0xc:
    return DAT_10006418;
  case 0xd:
    return DAT_1000641c;
  default:
    if (param_1 == 0x11) {
      return DAT_10006420;
    }
    if (param_1 == 0x16) {
      return DAT_10006408;
    }
switchD_10006384_caseD_0:
    return DAT_10006424;
  }
}

#undef DAT_10006408
#undef DAT_1000640c
#undef DAT_10006410
#undef DAT_10006414
#undef DAT_10006418
#undef DAT_1000641c
#undef DAT_10006420
#undef DAT_10006424
#undef DAT_10006428


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2f8cU)
 */

undefined4 pf_png32_1000642c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2f94U)
 */

undefined4 pf_png32_10006434(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}



#undef DAT_10006450
#define DAT_10006450 (*(int * *)(((uintptr_t)pf_png32_state + 0x2fb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2f9cU)
 */

void pf_png32_1000643c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10006450 = *DAT_10006450 + 1;
  return;
}

#undef DAT_10006450


#undef DAT_100064a0
#define DAT_100064a0 (*(int *)(((uintptr_t)pf_png32_state + 0x3000U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x00006800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x00006804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x00006808U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x00006800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x00006804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x00006808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x2fb4U)
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 pf_png32_10006454(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((_DAT_40010800 == DAT_100064a0) && (_DAT_40010804 != 0)) {
    if (_DAT_40010808 < 0xc) {
      return 0;
    }
    if (param_1 + 4U <= _DAT_40010808) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_100064a0
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3004U)
 */

void pf_png32_100064a4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_png32_state+0x3010U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int pf_png32_100064b4(void *context){__asm__ volatile("movl 4(%esp),%eax; movl %ebx,0(%eax); movl %esi,4(%eax); movl %edi,8(%eax); movl %ebp,12(%eax); leal 4(%esp),%edx; movl %edx,16(%eax); movl (%esp),%edx; movl %edx,20(%eax); xorl %eax,%eax; ret");}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,noreturn)) void pf_png32_100064cc(void *context,int value){__asm__ volatile("movl 4(%esp),%edx; movl 8(%esp),%eax; testl %eax,%eax; jnz 1f; movl $1,%eax; 1: movl 0(%edx),%ebx; movl 4(%edx),%esi; movl 8(%edx),%edi; movl 12(%edx),%ebp; movl 16(%edx),%esp; movl 20(%edx),%ecx; jmp *%ecx");}



#undef DAT_10006564
#define DAT_10006564 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x30c4U)))
#undef DAT_10006568
#define DAT_10006568 (*(int *)(((uintptr_t)pf_png32_state + 0x30c8U)))
#undef DAT_1000656c
#define DAT_1000656c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x30ccU)))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 44))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x304cU)
 */

void pf_png32_100064ec(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = DAT_1000656c;
  local_20 = DAT_10006564;
  local_18 = DAT_10006568 + ((uintptr_t)pf_png32_state+0x3078U);
  local_38 = 1;
  pf_png32_10006ab0(&uStack_3c);
  pf_png32_10003e20();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,((uintptr_t)pf_png32_state+0x30a0U));
  (*pcVar1)();
}

#undef DAT_10006564
#undef DAT_10006568
#undef DAT_1000656c
#undef uStack_3c
#undef local_38
#undef local_24
#undef auStack_10
#undef local_20
#undef local_1c
#undef local_18
#undef local_14


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x30d0U)
 */

undefined4 pf_png32_10006570(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x30d8U)
 */

void pf_png32_10006578(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10006588(param_1);
                    /* WARNING: Subroutine does not return */
  pf_png32_100064ec();
}



#undef DAT_10014290
#define DAT_10014290 (*(int *)(((uintptr_t)pf_png32_state + 0x10df0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x30e8U)
 */

long pf_png32_10006588(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_10014290;
  DAT_10014290 = param_1;
  iVar1 = pf_png32_1000696c(param_1);
  return iVar1;
}

#undef DAT_10014290


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3114U)
 */

void * pf_png32_100065b4(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = pf_png32_10003e34(size);
  if (pvVar1 == (void *)0x0) {
    pf_png32_10003e20();
  }
  return pvVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3140U)
 */

void * pf_png32_100065e0(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = pf_png32_10003e34(size);
  if (pvVar1 == (void *)0x0) {
    pf_png32_10003e20();
  }
  return pvVar1;
}



#undef DAT_10006698
#define DAT_10006698 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x31f8U)))
#undef DAT_1000669c
#define DAT_1000669c (*(int *)(((uintptr_t)pf_png32_state + 0x31fcU)))
#undef DAT_100066a0
#define DAT_100066a0 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x3200U)))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3144U)
 */

void pf_png32_100065e4(void *pointer)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100066a0;
  local_78 = DAT_10006698;
  local_70 = DAT_1000669c + ((uintptr_t)pf_png32_state+0x318cU);
  local_90 = 1;
  pf_png32_10006ab0(&uStack_94);
  pf_png32_10003e78(pointer);
  pf_png32_10006ac8(&uStack_94);
  return;
}

#undef DAT_10006698
#undef DAT_1000669c
#undef DAT_100066a0
#undef auStack_a0
#undef local_90
#undef local_7c
#undef uStack_94
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68


#undef DAT_10006758
#define DAT_10006758 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x32b8U)))
#undef DAT_1000675c
#define DAT_1000675c (*(int *)(((uintptr_t)pf_png32_state + 0x32bcU)))
#undef DAT_10006760
#define DAT_10006760 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x32c0U)))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3204U)
 */

void pf_png32_100066a4(void *pointer)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10006760;
  local_78 = DAT_10006758;
  local_70 = DAT_1000675c + ((uintptr_t)pf_png32_state+0x324cU);
  local_90 = 1;
  pf_png32_10006ab0(&uStack_94);
  pf_png32_10003e78(pointer);
  pf_png32_10006ac8(&uStack_94);
  return;
}

#undef DAT_10006758
#undef DAT_1000675c
#undef DAT_10006760
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90


#undef DAT_10006818
#define DAT_10006818 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x3378U)))
#undef DAT_1000681c
#define DAT_1000681c (*(int *)(((uintptr_t)pf_png32_state + 0x337cU)))
#undef DAT_10006820
#define DAT_10006820 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x3380U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x32c4U)
 */

void pf_png32_10006764(void *pointer,uint size)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_10006820;
  local_78 = DAT_10006818;
  local_70 = DAT_1000681c + ((uintptr_t)pf_png32_state+0x330cU);
  local_90 = 1;
  pf_png32_10006ab0(&uStack_94);
  pf_png32_10003e78(pointer);
  pf_png32_10006ac8(&uStack_94);
  return;
}

#undef DAT_10006818
#undef DAT_1000681c
#undef DAT_10006820
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68


#undef DAT_100068d8
#define DAT_100068d8 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x3438U)))
#undef DAT_100068dc
#define DAT_100068dc (*(int *)(((uintptr_t)pf_png32_state + 0x343cU)))
#undef DAT_100068e0
#define DAT_100068e0 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x3440U)))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3384U)
 */

void pf_png32_10006824(void *pointer,uint size)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = DAT_100068e0;
  local_78 = DAT_100068d8;
  local_70 = DAT_100068dc + ((uintptr_t)pf_png32_state+0x33ccU);
  local_90 = 1;
  pf_png32_10006ab0(&uStack_94);
  pf_png32_10003e78(pointer);
  pf_png32_10006ac8(&uStack_94);
  return;
}

#undef DAT_100068d8
#undef DAT_100068dc
#undef DAT_100068e0
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3444U)
 */

undefined4 pf_png32_100068e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x344cU)
 */

uint pf_png32_100068ec(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x345cU)
 */

void pf_png32_100068fc(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x346cU)
 */

void pf_png32_1000690c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3470U)
 */

undefined1 * pf_png32_10006910(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = pf_png32_10003e34(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    pf_png32_100064ec();
  }
  puVar2 = puVar1;
  for (; size != 0; size = size - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return puVar1 + 0x1c;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x34bcU)
 */

void pf_png32_1000695c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  pf_png32_10003e78((void *)(param_1 + -0x1c));
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x34ccU)
 */

int pf_png32_1000696c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}



#undef DAT_100069cc
#define DAT_100069cc (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x352cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x34d4U)
 */

void pf_png32_10006974(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;

  pointer = (void *)*DAT_100069cc;
  if (pointer == (void *)0x0) {
    return;
  }
  *DAT_100069cc = *(undefined4 *)((int)pointer + 8);
  *(undefined4 *)((int)pointer + 8) = 0;
  if (*(char *)((int)pointer + 0x18) != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  pf_png32_10003e78(pointer);
  return;
}

#undef DAT_100069cc


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3530U)
 */

void pf_png32_100069d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  pf_png32_100069f8((undefined4 *)(param_1 + -0x1c));
}



#undef DAT_10006a74
#define DAT_10006a74 (*(int * *)(((uintptr_t)pf_png32_state + 0x35d4U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3558U)
 */

void pf_png32_100069f8(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  piVar2 = DAT_10006a74;
  do {
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      pf_png32_100064ec();
    }
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = pf_png32_10006fa0((int)piVar2,(int *)*param_1,(undefined2 *)&local_28);
  } while ((iVar1 == 0) || (PF_PART1(local_28, 2) != '\x01'));
  param_1[4] = local_24;
  param_1[3] = piVar2;
  param_1[5] = local_20;
                    /* WARNING: Subroutine does not return */
  pf_png32_10006b34(param_1);
}

#undef DAT_10006a74
#undef local_28
#undef local_24
#undef local_20


#undef DAT_10006aac
#define DAT_10006aac (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x360cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x35d8U)
 */

void pf_png32_10006a78(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = (undefined4 *)*DAT_10006aac;
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    pf_png32_100064ec();
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
  pf_png32_100069f8(puVar1);
}

#undef DAT_10006aac


#undef DAT_10006ac4
#define DAT_10006ac4 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x3624U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3610U)
 */

void pf_png32_10006ab0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = DAT_10006ac4;
  *param_1 = *DAT_10006ac4;
  *puVar1 = param_1;
  return;
}

#undef DAT_10006ac4


#undef DAT_10006af4
#define DAT_10006af4 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x3654U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3628U)
 */

void pf_png32_10006ac8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10006af4;
  while( true ) {
    puVar2 = (undefined4 *)*puVar1;
    if (puVar2 == param_1) {
      *puVar1 = *param_1;
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    puVar1 = puVar2;
  }
  return;
}

#undef DAT_10006af4


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3658U)
 */

void pf_png32_10006af8(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  pf_png32_100069f8(in_r0);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3664U)
 */

void pf_png32_10006b04(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  pf_png32_100064ec();
}



#undef DAT_10006b30
#define DAT_10006b30 (*(int * *)(((uintptr_t)pf_png32_state + 0x3690U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3670U)
 */

void pf_png32_10006b10(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((int *)*DAT_10006b30 != (int *)0x0) {
    *DAT_10006b30 = *(int *)*DAT_10006b30;
  }
                    /* WARNING: Subroutine does not return */
  pf_png32_10006b34(param_1);
}

#undef DAT_10006b30


#undef DAT_10006bdc
#define DAT_10006bdc (*(int * *)(((uintptr_t)pf_png32_state + 0x373cU)))
#define auStack_128 (*(undefined2 (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3694U)
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_png32_state+0x36f0U)) */
/* WARNING: Removing unreachable block (ram,((uintptr_t)pf_png32_state+0x3720U)) */

void pf_png32_10006b34(undefined4 *param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;

  piVar1 = DAT_10006bdc;
  piVar4 = (int *)*DAT_10006bdc;
  while( true ) {
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      pf_png32_100064ec();
    }
    if (piVar4 == (int *)param_1[3]) break;
    pf_png32_10006fa0((int)piVar4,(int *)*param_1,auStack_128 + 0x80);
    piVar4 = (int *)*piVar4;
    *piVar1 = (int)piVar4;
  }
  uVar3 = param_1[5];
  piVar4[2] = (int)param_1;
  uVar2 = param_1[4];
  piVar4[3] = uVar3;
  piVar4[1] = uVar2;
  pf_png32_100064a4((int)piVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

#undef DAT_10006bdc
#undef auStack_128


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3740U)
 */

void pf_png32_10006be0(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  pf_png32_10006b10(in_r0);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x374cU)
 */

undefined4 pf_png32_10006bec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3754U)
 */

void pf_png32_10006bf4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  pf_png32_100064ec();
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3760U)
 */

int pf_png32_10006c00(int *param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0 || param_3 == (int *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(*param_1 + -8);
  bVar1 = pf_png32_10006c40(*(int **)(*param_1 + -4),param_3);
  iVar2 = 0;
  if (bVar1) {
    iVar2 = (int)param_1 + iVar3;
  }
  return iVar2;
}



#undef DAT_10006ce4
#define DAT_10006ce4 (*(int *)(((uintptr_t)pf_png32_state + 0x3844U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x37a0U)
 */

bool pf_png32_10006c40(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;

  if (param_2 == (int *)0x0) {
    return true;
  }
  do {
    piVar3 = param_1;
    if (piVar3 == param_2 || piVar3 == (int *)0x0) {
      return piVar3 != (int *)0x0;
    }
    pcVar4 = (char *)piVar3[1];
    pcVar5 = (char *)param_2[1];
    if (pcVar4 == (char *)0x0 || pcVar5 == (char *)0x0) {
      if (pcVar4 == pcVar5) {
        return true;
      }
    }
    else {
      do {
        cVar1 = *pcVar4;
        cVar2 = *pcVar5;
        if (cVar1 == '\0' || cVar2 == '\0') {
          if (cVar1 == cVar2) {
            return true;
          }
          break;
        }
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
    }
    param_1 = (int *)0x0;
    if (*piVar3 == DAT_10006ce4 + 8) {
      param_1 = (int *)piVar3[2];
    }
  } while( true );
}

#undef DAT_10006ce4


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3848U)
 */

void pf_png32_10006ce8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x384cU)
 */

undefined4 pf_png32_10006cec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3854U)
 */

bool pf_png32_10006cf4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3868U)
 */

bool pf_png32_10006d08(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (1 << (param_1 - 9U & 0xff) & 0x80001bU) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x38a4U)
 */

bool pf_png32_10006d44(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x38d0U)
 */

bool pf_png32_10006d70(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x38ecU)
 */

bool pf_png32_10006d8c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3908U)
 */

bool pf_png32_10006da8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3924U)
 */

bool pf_png32_10006dc4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3940U)
 */

double pf_png32_10006de0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = pf_png32_1000441c(value);
  dVar2 = pf_bits_double(((pf_double_bits(dVar2) & 0xffffffff00000000) + (pf_double_bits(dVar2) & 0xffffffff)));
  dVar1 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff)) -
          dVar2;
  if (0.5 <= dVar1) {
    dVar1 = 1.0;
  }
  else {
    if (-0.5 < dVar1) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar2 + dVar1;
}



#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3998U)
 */

ulonglong pf_png32_10006e38(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    uVar4 = (uint)*pbVar3;
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10006e84;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10006e84:
  if (uVar4 == 0x2d || uVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar3 == 0x30)) {
    if ((pbVar3[1] | 0x20) == 0x78) {
      pbVar3 = pbVar3 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar3 = pbVar3 + -1;
  iVar8 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)pbVar3[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar3 = pbVar3 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar3 = param_1;
    }
    *param_2 = pbVar3;
  }
  uVar2 = CONCAT44(-(iVar5 + (uint)((int)uVar1 != 0)),-(int)uVar1);
  if (uVar4 != 0x2d) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef EXT_00000000


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3afcU)
 */

ulonglong pf_png32_10006f9c(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  for (pbVar3 = param_1; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + 1) {
    uVar4 = (uint)*pbVar3;
    if ((0x17 < uVar4 - 9) || ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) == 0)) goto LAB_10006e84;
  }
  pbVar3 = (byte *)0x0;
  uVar4 = (uint)Reset;
LAB_10006e84:
  if (uVar4 == 0x2d || uVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar3 == 0x30) && ((pbVar3[1] | 0x20) == 0x78)) {
      pbVar3 = pbVar3 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar3 == 0x30)) {
    if ((pbVar3[1] | 0x20) == 0x78) {
      pbVar3 = pbVar3 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  pbVar3 = pbVar3 + -1;
  iVar8 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    iVar5 = (int)(uVar1 >> 0x20);
    uVar7 = (uint)pbVar3[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar3 = pbVar3 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar3 = param_1;
    }
    *param_2 = pbVar3;
  }
  uVar2 = CONCAT44(-(iVar5 + (uint)((int)uVar1 != 0)),-(int)uVar1);
  if (uVar4 != 0x2d) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef EXT_00000000


#undef DAT_100071b8
#define DAT_100071b8 (*(int *)(((uintptr_t)pf_png32_state + 0x3d18U)))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3b00U)
 */

undefined4 pf_png32_10006fa0(int param_1,int *param_2,undefined2 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;

  pbVar8 = *(byte **)(param_1 + 0x1c);
  if (pbVar8 != (byte *)0x0) {
    local_24 = pbVar8 + 1;
    pbVar11 = local_24;
    if (*pbVar8 != 0xff) {
      pf_png32_100071bc((uint)*pbVar8,(int *)&local_24);
      pbVar11 = local_24;
    }
    local_24 = pbVar11 + 1;
    uVar4 = (uint)*pbVar11;
    if (uVar4 == 0xff) {
      pbVar8 = (byte *)0x0;
    }
    else {
      uVar5 = pf_png32_100072e8(&local_24);
      pbVar8 = local_24 + uVar5;
    }
    local_24 = local_24 + 1;
    uVar5 = pf_png32_100072e8(&local_24);
    iVar10 = *(int *)(param_1 + 4);
    if (0 < iVar10) {
      pbVar11 = local_24 + uVar5;
      while (local_24 < pbVar11) {
        uVar5 = pf_png32_100072e8(&local_24);
        uVar6 = pf_png32_100072e8(&local_24);
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 2) = uVar5;
          *(undefined1 *)(param_3 + 1) = 0;
          *param_3 = 1;
          if (uVar6 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          uVar5 = uVar4 & 0xf;
          bVar2 = uVar5 < 0xd && pbVar8 != (byte *)0x0;
          iVar10 = 0x40;
          do {
            if (iVar10 == 0) {
              return 0;
            }
            uVar6 = pf_png32_10007348((undefined4 *)((int)(uintptr_t)(frame + 64) + -0x28));
            uVar7 = pf_png32_10007348((undefined4 *)((int)(uintptr_t)(frame + 64) + -0x28));
            if (uVar6 == 0) {
              *(undefined1 *)((int)param_3 + 1) = 1;
            }
            else if (0 < (int)uVar6) {
              puVar9 = (uint *)0x0;
              uVar1 = 0;
              if (bVar2) {
                uVar1 = 0x1c1d >> uVar5;
              }
              if (bVar2 && (uVar1 & 1) != 0) {
                local_24 = pbVar8 + *(int *)(DAT_100071b8 + uVar5 * 4) * uVar6;
                puVar9 = pf_png32_100071bc(uVar4,(int *)&local_24);
              }
              bVar3 = pf_png32_10006c40(param_2,(int *)puVar9);
              if (bVar3) {
                *(uint *)(param_3 + 4) = uVar6;
                *(undefined1 *)(param_3 + 1) = 1;
                return 1;
              }
            }
            if (uVar7 == 0) {
              return 0;
            }
            iVar10 = iVar10 + -1;
          } while( true );
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0;
  return 0;
}

#undef DAT_100071b8
#undef local_24


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3d1cU)
 */

uint * pf_png32_100071bc(uint param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *extraout_r0 = 0;
  uint *extraout_r0_00 = 0;
  uint *extraout_r0_01 = 0;
  uint *extraout_r0_02 = 0;
  int iVar1;
  uint *puVar2;
  int iVar3;

  puVar2 = (uint *)0x0;
  if (param_1 == 0xff) {
    return (uint *)0x0;
  }
  if (0xc < (param_1 & 0xf)) {
    return (uint *)0x0;
  }
  iVar3 = *param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    pf_png32_10007320(iVar3,4);
    iVar1 = iVar3 + 4;
    puVar2 = extraout_r0;
    goto LAB_100072a4;
  case 1:
    puVar2 = (uint *)pf_png32_100072e8(param_2);
    break;
  case 2:
    pf_png32_10007320(iVar3,2);
    iVar1 = iVar3 + 2;
    puVar2 = extraout_r0_02;
    goto LAB_100072a4;
  case 4:
  case 0xc:
    pf_png32_10007320(iVar3,8);
    iVar1 = iVar3 + 8;
    puVar2 = extraout_r0_00;
LAB_100072a4:
    *param_2 = iVar1;
    break;
  default:
    goto switchD_100071f0_caseD_5;
  case 9:
    puVar2 = (uint *)pf_png32_10007348(param_2);
    break;
  case 10:
    pf_png32_10007320(iVar3,2);
    *param_2 = iVar3 + 2;
    puVar2 = (uint *)((uint)extraout_r0_01 & 0xffff | 0xffff0000);
    if (((uint)extraout_r0_01 & 0x8000) == 0) {
      puVar2 = extraout_r0_01;
    }
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (uint *)0x0;
    }
    puVar2 = (uint *)((int)puVar2 + iVar3);
  }
  if ((0x7fffffff < (uint)(int)(char)param_1) && (puVar2 != (uint *)0x0)) {
    puVar2 = (uint *)*puVar2;
  }
switchD_100071f0_caseD_5:
  return puVar2;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3e48U)
 */

uint pf_png32_100072e8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = 0;
  uVar4 = 0;
  pcVar2 = (char *)*param_1;
  do {
    *param_1 = pcVar2 + 1;
    cVar1 = *pcVar2;
    uVar4 = uVar4 | ((int)cVar1 & 0x7fU) << (uVar3 & 0xff);
    uVar3 = uVar3 + 7;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 < 0);
  return uVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3e80U)
 */

void pf_png32_10007320(undefined4 param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3ea8U)
 */

uint pf_png32_10007348(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar5 = uVar5 | ((int)(char)bVar1 & 0x7fU) << (uVar4 & 0xff);
    uVar4 = uVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < 0);
  uVar3 = uVar5;
  if (0x3f < bVar1) {
    uVar3 = uVar5 | -1 << (uVar4 & 0xff);
  }
  if (0x1f < uVar4) {
    uVar3 = uVar5;
  }
  return uVar3;
}



#undef DAT_100074ac
#define DAT_100074ac (*(char * *)(((uintptr_t)pf_png32_state + 0x400cU)))
#undef DAT_100074b0
#define DAT_100074b0 (*(char * *)(((uintptr_t)pf_png32_state + 0x4010U)))
#undef DAT_100074b4
#define DAT_100074b4 (*(char * *)(((uintptr_t)pf_png32_state + 0x4014U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x3ef8U)
 */

undefined1 pf_png32_10007398(byte *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r4;

  if (param_1 != (byte *)0x0) {
    unaff_r4 = param_2;
  }
  if (param_1 == (byte *)0x0 || param_2 == 0) {
    return 0;
  }
  if (unaff_r4 < 8) {
    if (unaff_r4 < 2) goto LAB_10007484;
  }
  else {
    iVar4 = pf_png32_10003fbc((char *)param_1,DAT_100074ac,8);
    if (iVar4 == 0) {
      return 1;
    }
  }
  if (*param_1 == 0x42) {
    if (param_1[1] == 0x4d) {
      return 2;
    }
    if (unaff_r4 < 3) goto LAB_10007484;
  }
  else {
    if (unaff_r4 < 3) goto LAB_10007484;
    if (*param_1 == 0xff) {
      bVar1 = param_1[1];
      bVar2 = bVar1 == 0xd8;
      if (bVar2) {
        bVar1 = param_1[2];
      }
      if (bVar2 && bVar1 == 0xff) {
        return 4;
      }
    }
  }
  if (unaff_r4 < 0xe) {
    if (unaff_r4 < 8) goto LAB_10007484;
  }
  else {
    iVar4 = pf_png32_10003fbc((char *)param_1,DAT_100074b0,9);
    if (iVar4 == 0) {
      return 5;
    }
  }
  iVar4 = pf_png32_10003fbc((char *)param_1,DAT_100074b4,8);
  if (iVar4 == 0) {
    return 6;
  }
LAB_10007484:
  bVar2 = pf_png32_100074b8(param_1,unaff_r4);
  uVar3 = 0;
  if (bVar2) {
    uVar3 = 3;
  }
  return uVar3;
}

#undef DAT_100074ac
#undef DAT_100074b0
#undef DAT_100074b4


#undef DAT_1000763c
#define DAT_1000763c (*(uint *)(((uintptr_t)pf_png32_state + 0x419cU)))
#undef DAT_10007640
#define DAT_10007640 (*(char * *)(((uintptr_t)pf_png32_state + 0x41a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x4018U)
 */

bool pf_png32_100074b8(byte *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;

  bVar9 = false;
  if (0x11 < param_2) {
    if (0x19 < param_2) {
      uVar3 = pf_png32_10003fbc((char *)(param_1 + (param_2 - 0x12)),DAT_10007640,0x11);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        uVar3 = (uint)param_1[param_2 - 1];
      }
      if (bVar8 && uVar3 == 0) {
        return true;
      }
    }
    bVar1 = param_1[1];
    if ((bVar1 < 2) &&
       (uVar3 = (uint)param_1[2],
       (0xfffffffc < uVar3 - 4 || 0xfffffffd < uVar3 - 0xb) || uVar3 == 0xb)) {
      sVar2 = 0;
      if (*(short *)(param_1 + 0xc) != 0) {
        sVar2 = *(short *)(param_1 + 0xe);
      }
      if (*(short *)(param_1 + 0xc) != 0 && sVar2 != 0) {
        uVar4 = (uint)*param_1;
        uVar7 = (uint)param_1[0x10];
        uVar5 = (uint)*(ushort *)(param_1 + 5);
        if (((bVar1 != 0) || (uVar5 == 0)) &&
           ((bVar1 != 1 ||
            (((uVar5 != 0 && (uVar6 = param_1[7] - 0xf, uVar6 < 0x12)) &&
             ((DAT_1000763c & 1 << (uVar6 & 0xff)) != 0)))))) {
          if (7 < uVar3) {
            uVar3 = uVar3 - 8;
          }
          if (uVar3 == 3) {
            if (uVar7 != 0x10 && uVar7 != 8) {
              return false;
            }
          }
          else if (uVar3 == 2) {
            if (0x11 < uVar7 - 0xf) {
              return false;
            }
            if ((DAT_1000763c & 1 << (uVar7 - 0xf & 0xff)) == 0) {
              return false;
            }
          }
          else if (((uVar3 == 1) && (uVar7 != 8)) && (uVar7 != 0x10)) {
            return false;
          }
          if (bVar1 == 1) {
            uVar4 = (param_1[7] + 7 >> 3) * uVar5 + uVar4;
          }
          bVar9 = uVar4 + 0x12 < param_2;
        }
      }
    }
  }
  return bVar9;
}

#undef DAT_1000763c
#undef DAT_10007640

#define NotUsed (*(uint8_t *)(uintptr_t)0x14)

#undef DAT_00000005
#define DAT_00000005 (*(uint8_t *)(0x5U))
#undef DAT_10007f08
#define DAT_10007f08 (*(uint64_t *)(((uintptr_t)pf_png32_state + 0x4a68U)))
#undef DAT_10007f10
#define DAT_10007f10 (*(uint64_t *)(((uintptr_t)pf_png32_state + 0x4a70U)))
#undef DAT_10008678
#define DAT_10008678 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x51d8U)))
#undef DAT_1000867c
#define DAT_1000867c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x51dcU)))
#undef DAT_10008680
#define DAT_10008680 (*(int *)(((uintptr_t)pf_png32_state + 0x51e0U)))
#undef DAT_100088cc
#define DAT_100088cc (*(char * *)(((uintptr_t)pf_png32_state + 0x542cU)))
#undef DAT_10008918
#define DAT_10008918 (*(char * *)(((uintptr_t)pf_png32_state + 0x5478U)))
#undef DAT_1000891c
#define DAT_1000891c (*(char * *)(((uintptr_t)pf_png32_state + 0x547cU)))
#undef DAT_10008e48
#define DAT_10008e48 (*(char * *)(((uintptr_t)pf_png32_state + 0x59a8U)))
#undef DAT_10009260
#define DAT_10009260 (*(char * *)(((uintptr_t)pf_png32_state + 0x5dc0U)))
#undef DAT_10009264
#define DAT_10009264 (*(char * *)(((uintptr_t)pf_png32_state + 0x5dc4U)))
#undef DAT_10009268
#define DAT_10009268 (*(char * *)(((uintptr_t)pf_png32_state + 0x5dc8U)))
#undef DAT_1000926c
#define DAT_1000926c (*(char * *)(((uintptr_t)pf_png32_state + 0x5dccU)))
#undef DAT_10009270
#define DAT_10009270 (*(char * *)(((uintptr_t)pf_png32_state + 0x5dd0U)))
#undef DAT_10009334
#define DAT_10009334 (*(char * *)(((uintptr_t)pf_png32_state + 0x5e94U)))
#undef DAT_10009338
#define DAT_10009338 (*(char * *)(((uintptr_t)pf_png32_state + 0x5e98U)))
#undef DAT_1000933c
#define DAT_1000933c (*(char * *)(((uintptr_t)pf_png32_state + 0x5e9cU)))
#undef DAT_1000995c
#define DAT_1000995c (*(int *)(((uintptr_t)pf_png32_state + 0x64bcU)))
#undef DAT_10009a20
#define DAT_10009a20 (*(char * *)(((uintptr_t)pf_png32_state + 0x6580U)))
#undef DAT_1000a530
#define DAT_1000a530 (*(uint *)(((uintptr_t)pf_png32_state + 0x7090U)))
#undef DAT_1000a534
#define DAT_1000a534 (*(float *)(((uintptr_t)pf_png32_state + 0x7094U)))
#undef DAT_1000b6b4
#define DAT_1000b6b4 (*(int *)(((uintptr_t)pf_png32_state + 0x8214U)))
#undef DAT_1000b98c
#define DAT_1000b98c (*(double *)(((uintptr_t)pf_png32_state + 0x84ecU)))
#undef DAT_1000b994
#define DAT_1000b994 (*(double *)(((uintptr_t)pf_png32_state + 0x84f4U)))
#undef DAT_1000b99c
#define DAT_1000b99c (*(double *)(((uintptr_t)pf_png32_state + 0x84fcU)))
#undef DAT_1000bcb0
#define DAT_1000bcb0 (*(double *)(((uintptr_t)pf_png32_state + 0x8810U)))
#undef DAT_1000bff4
#define DAT_1000bff4 (*(double *)(((uintptr_t)pf_png32_state + 0x8b54U)))
#undef DAT_1000bffc
#define DAT_1000bffc (*(double *)(((uintptr_t)pf_png32_state + 0x8b5cU)))
#undef DAT_1000c004
#define DAT_1000c004 (*(double *)(((uintptr_t)pf_png32_state + 0x8b64U)))
#undef DAT_1000c00c
#define DAT_1000c00c (*(double *)(((uintptr_t)pf_png32_state + 0x8b6cU)))
#undef DAT_1000c34c
#define DAT_1000c34c (*(char * *)(((uintptr_t)pf_png32_state + 0x8eacU)))
#undef DAT_1000c350
#define DAT_1000c350 (*(double * *)(((uintptr_t)pf_png32_state + 0x8eb0U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000014
#define EXT_00000014 (*(uint8_t *)(0x14U))
#define local_b74 (*(int *)(frame + 156))
#define local_b70 (*(int *)(frame + 160))
#define local_b60 (*(int *)(frame + 176))
#define local_b5c (*(uint *)(frame + 180))
#define local_b58 (*(uint *)(frame + 184))
#define local_b54 (*(byte * *)(frame + 188))
#define local_b48 (*(undefined1 ** *)(frame + 200))
#define local_b44 (*(int *)(frame + 204))
#define local_b3c (*(int *)(frame + 212))
#define local_b38 (*(uint *)(frame + 216))
#define local_b30 (*(byte ** *)(frame + 224))
#define local_b2c (*(uint *)(frame + 228))
#define local_b28 (*(uint * *)(frame + 232))
#define local_b20 (*(byte * *)(frame + 240))
#define local_b1c (*(int *)(frame + 244))
#define local_b18 (*(uint *)(frame + 248))
#define local_b14 (*(double * *)(frame + 252))
#define local_b10 (*(uint *)(frame + 256))
#define local_b00 (*(double * *)(frame + 272))
#define local_afc (*(void * *)(frame + 276))
#define local_af8 (*(uint *)(frame + 280))
#define local_af4 (*(undefined1 ** *)(frame + 284))
#define local_af0 (*(undefined8 *)(frame + 288))
#define local_ae8 (*(undefined1 ** *)(frame + 296))
#define local_ae4 (*(undefined1 ** *)(frame + 300))
#define local_adc (*(uint *)(frame + 308))
#define local_ad8 (*(uint *)(frame + 312))
#define local_ad4 (*(undefined4 *)(frame + 316))
#define local_ad0 (*(uint *)(frame + 320))
#define local_acc (*(int *)(frame + 324))
#define local_ac8 (*(int *)(frame + 328))
#define local_ac4 (*(undefined1 ** *)(frame + 332))
#define local_ac0 (*(undefined4 *)(frame + 336))
#define local_abc (*(ushort * *)(frame + 340))
#define local_ab8 (*(uint *)(frame + 344))
#define local_ab4 (*(undefined4 *)(frame + 348))
#define local_ab0 (*(void * *)(frame + 352))
#define local_aac (*(undefined4 *)(frame + 356))
#define local_aa8 (*(undefined4 *)(frame + 360))
#define local_aa4 (*(ulonglong * *)(frame + 364))
#define local_aa0 (*(uint *)(frame + 368))
#define local_a9c (*(uint *)(frame + 372))
#define local_648 (*(void * *)(frame + 1480))
#define local_644 (*(uint *)(frame + 1484))
#define local_640 (*(uint *)(frame + 1488))
#define local_63c (*(uint * *)(frame + 1492))
#define local_638 (*(int *)(frame + 1496))
#define local_634 (*(undefined4 *)(frame + 1500))
#define local_630 (*(byte * *)(frame + 1504))
#define local_62c (*(uint *)(frame + 1508))
#define local_628 (*(undefined8 *)(frame + 1512))
#define local_620 (*(undefined1 ** *)(frame + 1520))
#define local_61c (*(undefined1 ** *)(frame + 1524))
#define local_60c (*(undefined8 * *)(frame + 1540))
#define local_608 (*(void ** *)(frame + 1544))
#define local_604 (*(void ** *)(frame + 1548))
#define local_600 (*(undefined4 * *)(frame + 1552))
#define local_5fc (*(undefined4 *)(frame + 1556))
#define local_5f8 (*(undefined4 *)(frame + 1560))
#define local_5f4 (*(undefined4 *)(frame + 1564))
#define local_5f0 (*(undefined4 *)(frame + 1568))
#define local_5ec (*(undefined4 *)(frame + 1572))
#define local_5e8 (*(void * *)(frame + 1576))
#define local_5e4 (*(undefined4 *)(frame + 1580))
#define local_5e0 (*(undefined4 *)(frame + 1584))
#define local_5dc (*(ulonglong * *)(frame + 1588))
#define local_5d8 (*(uint *)(frame + 1592))
#define local_5d4 (*(uint *)(frame + 1596))
#define local_200 (*(undefined1 (*)[4])(frame + 2576))
#define local_1fc (*(undefined4 (*)[15])(frame + 2580))
#define local_1c0 (*(undefined4 *)(frame + 2640))
#define local_17c (*(uint *)(frame + 2708))
#define local_178 (*(uint *)(frame + 2712))
#define local_174 (*(undefined4 *)(frame + 2716))
#define local_170 (*(undefined4 *)(frame + 2720))
#define local_16c (*(undefined4 *)(frame + 2724))
#define local_168 (*(byte * *)(frame + 2728))
#define local_164 (*(uint *)(frame + 2732))
#define local_160 (*(undefined8 *)(frame + 2736))
#define local_150 (*(undefined8 *)(frame + 2752))
#define local_148 (*(undefined8 *)(frame + 2760))
#define local_140 (*(undefined8 *)(frame + 2768))
#define local_130 (*(undefined8 *)(frame + 2784))
#define local_120 (*(byte * *)(frame + 2800))
#define local_11c (*(uint *)(frame + 2804))
#define local_118 (*(uint *)(frame + 2808))
#define local_114 (*(undefined1 *)(frame + 2812))
#define local_110 (*(undefined4 *)(frame + 2816))
#define local_10c (*(undefined1 * *)(frame + 2820))
#define local_108 (*(undefined4 *)(frame + 2824))
#define local_104 (*(undefined4 *)(frame + 2828))
#define local_100 (*(void * *)(frame + 2832))
#define local_fc (*(undefined4 *)(frame + 2836))
#define local_f4 (*(void * *)(frame + 2844))
#define local_f0 (*(int *)(frame + 2848))
#define local_ec (*(undefined4 *)(frame + 2852))
#define local_e8 (*(ulonglong * *)(frame + 2856))
#define local_e4 (*(int *)(frame + 2860))
#define local_dc (*(char * *)(frame + 2868))
#define local_d8 (*(uint *)(frame + 2872))
#define local_d4 (*(undefined4 *)(frame + 2876))
#define local_d0 (*(undefined1 * *)(frame + 2880))
#define local_cc (*(int *)(frame + 2884))
#define local_c8 (*(uint *)(frame + 2888))
#define local_c4 (*(uint *)(frame + 2892))
#define local_c0 (*(undefined1 * *)(frame + 2896))
#define local_bc (*(int *)(frame + 2900))
#define local_b8 (*(undefined1 * *)(frame + 2904))
#define local_b4 (*(int *)(frame + 2908))
#define local_ac (*(uint *)(frame + 2916))
#define local_a8 (*(uint *)(frame + 2920))
#define local_a4 (*(uint *)(frame + 2924))
#define local_a0 (*(undefined8 *)(frame + 2928))
#define local_90 (*(undefined4 *)(frame + 2944))
#define local_7c (*(undefined4 *)(frame + 2964))
#define local_78 (*(undefined4 *)(frame + 2968))
#define local_74 (*(undefined1 * *)(frame + 2972))
#define local_70 (*(int *)(frame + 2976))
#define local_6c (*(undefined1 * *)(frame + 2980))
#define auStackY_c00 (*(undefined1 (*)[128])(frame + 16))
#define ppbStack_ae0 (*(byte ** *)(frame + 304))
#define acStack_6c8 (*(char (*)[64])(frame + 1352))
#define acStack_688 (*(char (*)[64])(frame + 1416))
#define ppbStack_618 (*(byte ** *)(frame + 1528))
#define uStack_614 (*(undefined8 *)(frame + 1532))
#define apvStack_1bc (*(void * (*)[16])(frame + 2644))
#define uStack_158 (*(undefined8 *)(frame + 2744))
#define uStack_138 (*(undefined8 *)(frame + 2776))
#define uStack_128 (*(undefined8 *)(frame + 2792))
#define uStack_94 (*(undefined4 *)(frame + 2940))
#define auStack_68 (*(undefined1 (*)[24])(frame + 2984))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x41a4U)
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong * pf_png32_10007644(byte *param_1,ulonglong *param_2,uint *param_3)

{
  unsigned char frame[3120] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  ushort uVar3;
  byte **ppbVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  uint *puVar17;
  void *pvVar18;
  int iVar19;
  byte **ppbVar20;
  int iVar21;
  double *pdVar22;
  undefined1 *puVar23;
  void *pvVar24;
  uint uVar25;
  undefined1 **extraout_r1 = 0;
  undefined1 **ppuVar26;
  uint uVar27;
  byte *pbVar28;
  uint extraout_r1_00 = 0;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int *piVar38;
  ulonglong *puVar39;
  char *pcVar40;
  undefined4 *puVar41;
  uint uVar42;
  uint uVar43;
  double *pdVar44;
  byte *pbVar45;
  undefined1 **ppuVar46;
  int iVar47;
  undefined1 **ppuVar48;
  int iVar49;
  undefined1 **ppuVar50;
  uint uVar51;
  undefined4 *puVar52;
  uint uVar53;
  ulonglong *puVar54;
  ulonglong *extraout_r12 = 0;
  uint uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  uint in_fpscr;
  float fVar61;
  undefined4 uVar63;
  float fVar64;
  undefined8 *puVar66;
  undefined1 auVar62 [16];
  double dVar65;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;

  local_ad4 = CONCAT13(PF_PART1(local_ad4, 3),CONCAT12(PF_PART1(local_ad4, 2),(undefined2)local_ad4));
  ppuVar48 = (undefined1 **)0x0;
  ppbStack_618 = (byte **)0x0;
  local_61c = (undefined1 **)0x0;
  local_620 = (undefined1 **)0x0;
  local_628 = 0;
  pf_png32_1000c354(param_3,(undefined4 *)&local_628);
  local_61c = (undefined1 **)0x0;
  pf_png32_100065e4(local_620);
  local_7c = *DAT_10008678;
  local_78 = DAT_1000867c;
  local_70 = DAT_10008680 + ((uintptr_t)pf_png32_state+0x4234U);
  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_c00 + 0x80;
  pf_png32_10006ab0(&uStack_94);
  if (param_1 == (byte *)0x0 || param_2 == (ulonglong *)0x0) goto switchD_10007740_default;
  local_90 = 0xffffffff;
  uVar8 = pf_png32_10007398(param_1,(uint)param_2);
  switch((uintptr_t)(uVar8)) {
  case 1:
    local_90 = 0xffffffff;
    pf_png32_1001366c(&local_dc,param_1,param_1 + (int)param_2);
    local_ae8 = *(undefined1 ***)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_ae4 = *(undefined1 ***)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_a9c = 0;
    local_af0 = (ulonglong)*(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4) << 0x20;
    ppbStack_ae0 = (byte **)0x0;
    local_628 = (ulonglong)*(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4) << 0x20;
    ppbStack_618 = (byte **)0x0;
    local_aa0 = 0;
    local_aa4 = (ulonglong *)0x0;
    local_aa8 = 0;
    local_aac = 0;
    local_ab0 = (void *)0x0;
    local_ab4 = 0;
    local_ab8 = 0;
    local_abc = (ushort *)0x0;
    local_ac0 = 0;
    local_ac4 = (undefined1 **)0x0;
    local_ac8 = 0;
    local_ad4 = local_ad4 & 0xffff0000;
    local_ad8 = 0;
    local_adc = 0;
    local_5d4 = 0;
    local_5d8 = 0;
    local_5dc = (ulonglong *)0x0;
    local_5e0 = 0;
    local_5e4 = 0;
    local_5e8 = (void *)0x0;
    local_5ec = 0;
    local_5f0 = 0;
    local_5f4 = 0;
    local_5f8 = 0;
    local_5fc = 0;
    local_600 = (undefined4 *)0x0;
    local_604 = (void **)0x0;
    local_608 = (void **)0x0;
    local_60c = (undefined8 *)((uint)local_60c & 0xff000000);
    uStack_614 = 0;
    local_620 = local_ae8;
    local_61c = local_ae4;
    pf_png32_10003f04(&local_af0,&local_628,0x28);
    pf_png32_1000d5f8(&local_ac8,&local_600);
    pf_png32_1000d5f8(&local_abc,&local_5f4);
    local_aac = 0;
    pf_png32_100065e4(local_ab0);
    local_ab0 = local_5e8;
    local_aac = local_5e4;
    local_aa8 = local_5e0;
    local_5e4 = 0;
    local_5e0 = 0;
    local_5e8 = (void *)0x0;
    pf_png32_10012830((int *)&local_aa4);
    pf_png32_100065e4(local_aa4);
    local_aa4 = local_5dc;
    local_aa0 = local_5d8;
    local_a9c = local_5d4;
    local_5d8 = 0;
    local_5d4 = 0;
    local_5dc = (ulonglong *)0x0;
    pf_png32_1000d64c((int)&local_628);
    local_af4 = (undefined1 **)0x0;
    if (7 < local_d8) {
      local_90 = 0x22;
      iVar11 = pf_png32_10003fbc(local_dc,DAT_100088cc,8);
      local_af4 = (undefined1 **)0x0;
      if (iVar11 == 0) {
        local_af8 = 8;
        do {
          local_b14 = (double *)0x0;
LAB_100081fc:
          uVar51 = local_d8;
          pcVar40 = local_dc;
          if (local_d8 < local_af8 + 0xc) {
LAB_10009974:
            if ((char)local_ad4 != '\x01') {
LAB_10009a14:
              local_af4 = (undefined1 **)0x0;
              break;
            }
            local_af4 = (undefined1 **)0x0;
            if ((PF_PART1(local_ad4, 1) != '\x01') || (local_acc == 0)) break;
            ppuVar48 = local_ae4;
            if (local_ae4 == (undefined1 **)0x3) {
              ppuVar48 = local_ac4;
            }
            if (local_ae4 == (undefined1 **)0x3 && ppuVar48 == (undefined1 **)0x0) break;
            if (PF_PART1(local_ad4, 2) != '\x01') goto LAB_10009a24;
            if ((local_ad0 == 0) || (local_ad0 <= local_aa0 - 1)) break;
            iVar11 = local_aa0 * 0x28;
            puVar13 = local_aa4;
            goto LAB_100099f0;
          }
          puVar30 = (uint *)(local_dc + local_af8);
          uVar12 = pf_png32_10010d0c(puVar30);
          iVar11 = local_af8 + 8;
          local_af4 = (undefined1 **)0x0;
          if (uVar51 - iVar11 < uVar12 + 4) break;
          puVar30 = puVar30 + 1;
          uVar51 = pf_png32_10010d0c((uint *)(pcVar40 + uVar12 + iVar11));
          uVar43 = pf_png32_10012730(0,(byte *)puVar30,4);
          puVar33 = (uint *)(pcVar40 + iVar11);
          if (uVar12 != 0) {
            uVar43 = pf_png32_10012730(uVar43,(byte *)puVar33,uVar12);
          }
          if (uVar43 != uVar51) break;
          local_af8 = uVar12 + iVar11 + 4;
          if ((char)local_ad4 == '\0') {
            local_90 = 0x23;
            iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_1000933c,4);
            if (uVar12 != 0xd || iVar11 != 0) break;
            uVar51 = pf_png32_10010d0c(puVar33);
            local_af0 = CONCAT44(PF_PART4(local_af0, 4),uVar51);
            uVar12 = pf_png32_10010d0c(puVar33 + 1);
            local_af0 = CONCAT44(uVar12,(ulonglong *)local_af0);
            local_ae8 = (undefined1 **)(uint)(byte)puVar33[2];
            local_ae4 = (undefined1 **)(uint)*(byte *)((int)puVar33 + 9);
            ppbStack_ae0 = (byte **)(uint)*(byte *)((int)puVar33 + 10);
            local_adc = (uint)*(byte *)((int)puVar33 + 0xb);
            local_ad8 = (uint)(byte)puVar33[3];
            PF_PART2(local_ad4, 0) = CONCAT11(PF_PART1(local_ad4, 1),1);
            if (uVar51 == 0 || uVar12 == 0) break;
            bVar58 = false;
            if (local_ae4 < (undefined1 **)0x7) {
              ppuVar48 = local_ae8 + -2;
              if ((1 << (int)local_ae4 & 0x55U) == 0) {
                bVar58 = false;
                if (local_ae4 != (undefined1 **)0x3) goto LAB_10008444;
              }
              else {
                ppuVar48 = (undefined1 **)((uint)ppuVar48 & 0xfffffff7);
              }
              bVar58 = ppuVar48 == (undefined1 **)0x0;
            }
LAB_10008444:
            if (!bVar58) goto LAB_10009a14;
            local_af4 = (undefined1 **)0x0;
            if ((ppbStack_ae0 != (byte **)0x0 || local_adc != 0) || (1 < local_ad8)) break;
            goto LAB_100081fc;
          }
          local_90 = 0x24;
          iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009260,4);
          if (iVar11 != 0) {
            local_90 = 0x25;
            iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009264,4);
            if (iVar11 == 0) {
              bVar58 = uVar12 != 0x1a;
              if (!bVar58) {
                uVar12 = local_ad4 >> 0x10 & 0xff;
              }
              if (bVar58 || uVar12 != 1) break;
              uVar12 = pf_png32_10010d0c(puVar33 + 1);
              uVar43 = pf_png32_10010d0c(puVar33 + 2);
              uVar31 = pf_png32_10010d0c(puVar33 + 3);
              uVar34 = pf_png32_10010d0c(puVar33 + 4);
              uVar51 = local_aa0;
              if ((((uVar12 != 0 && uVar43 != 0) && (uVar31 <= (ulonglong *)local_af0)) &&
                  (uVar12 <= (int)(ulonglong *)local_af0 - uVar31)) &&
                 ((uVar34 <= PF_PART4(local_af0, 4) && (uVar43 <= PF_PART4(local_af0, 4) - uVar34)))) {
                uVar35 = (uint)(byte)puVar33[6];
                bVar60 = 1 < uVar35;
                bVar58 = uVar35 == 2;
                if (uVar35 < 3) {
                  puVar33 = (uint *)(uint)*(byte *)((int)puVar33 + 0x19);
                  bVar60 = puVar33 != (uint *)0x0;
                  bVar58 = puVar33 == (uint *)0x1;
                }
                if (!bVar60 || bVar58) {
                  if (local_aa0 == local_a9c) {
                    uVar36 = local_aa0 << 1;
                    if (local_aa0 == 0) {
                      uVar36 = 4;
                    }
                    if (local_aa0 < uVar36) {
                      local_90 = 0x26;
                      puVar13 = pf_png32_100065b4(uVar36 * 0x28);
                      iVar11 = 0;
                      for (uVar25 = 0; uVar25 < local_aa0; uVar25 = uVar25 + 1) {
                        puVar52 = (undefined4 *)((int)puVar13 + iVar11);
                        puVar32 = (undefined4 *)((int)local_aa4 + iVar11);
                        uVar56 = puVar32[1];
                        uVar63 = puVar32[2];
                        uVar57 = puVar32[3];
                        *puVar52 = *puVar32;
                        puVar52[1] = uVar56;
                        puVar52[2] = uVar63;
                        puVar52[3] = uVar57;
                        uVar56 = *(undefined4 *)((int)puVar32 + 0xd);
                        uVar63 = *(undefined4 *)((int)puVar32 + 0x11);
                        uVar57 = *(undefined4 *)((int)puVar32 + 0x15);
                        puVar41 = puVar32 + 7;
                        *(undefined4 *)((int)puVar52 + 9) = *(undefined4 *)((int)puVar32 + 9);
                        *(undefined4 *)((int)puVar52 + 0xd) = uVar56;
                        *(undefined4 *)((int)puVar52 + 0x11) = uVar63;
                        *(undefined4 *)((int)puVar52 + 0x15) = uVar57;
                        puVar52[7] = *puVar41;
                        uVar56 = puVar32[9];
                        puVar52[8] = puVar32[8];
                        puVar52[9] = uVar56;
                        *puVar41 = 0;
                        puVar32[8] = 0;
                        puVar32[9] = 0;
                        pf_png32_1001270c(puVar41);
                        iVar11 = iVar11 + 0x28;
                      }
                      pf_png32_100065e4(local_aa4);
                      local_aa4 = puVar13;
                      local_a9c = uVar36;
                    }
                  }
                  puVar13 = local_aa4 + local_aa0 * 5;
                  *(uint *)puVar13 = uVar12;
                  *(uint *)((int)puVar13 + 0xc) = uVar34;
                  *(undefined4 *)((int)puVar13 + 0x24) = 0;
                  *(undefined4 *)(puVar13 + 4) = 0;
                  *(byte *)(puVar13 + 3) = uVar51 == 0 & ~(byte)local_b14;
                  *(uint **)((int)puVar13 + 0x14) = puVar33;
                  *(uint *)(puVar13 + 2) = uVar35;
                  *(uint *)(puVar13 + 1) = uVar31;
                  *(uint *)((int)puVar13 + 4) = uVar43;
                  *(int *)((int)puVar13 + 0x1c) = 0;
                  local_90 = 0x27;
                  pf_png32_10012878((int *)((int)puVar13 + 0x1c),0);
                  *(undefined4 *)(puVar13 + 4) = 0;
                  local_aa0 = local_aa0 + 1;
                  pf_png32_100065e4((void *)0x0);
                  goto LAB_100081fc;
                }
              }
              pvVar24 = (void *)0x0;
              local_af4 = (undefined1 **)0x0;
              goto LAB_1000949c;
            }
            local_90 = 0x28;
            iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009268,4);
            if (iVar11 == 0) {
              if (((uVar12 == 0) || (uVar51 = pf_png32_10003520(uVar12,3), 0x300 < uVar12)) ||
                 (uVar51 != 0)) break;
              local_90 = 0x29;
              pf_png32_10010e34(&local_ac8,(undefined1 *)puVar33,
                                 (undefined1 *)((int)puVar33 + uVar12));
            }
            else {
              local_90 = 0x2a;
              iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_1000926c,4);
              if (iVar11 == 0) {
                if (((uVar12 != 2) && (local_ae4 == (undefined1 **)0x0)) ||
                   ((uVar12 != 6 && (local_ae4 == (undefined1 **)0x2)))) break;
                if (local_ae4 == (undefined1 **)0x3) {
                  uVar51 = pf_png32_100034a0((uint)local_ac4,3);
                  if (uVar51 < uVar12) break;
                }
                else if ((local_ae4 == (undefined1 **)&UndefinedInstruction) ||
                        (local_ae4 == (undefined1 **)0x6)) break;
                local_90 = 0x2b;
                pf_png32_10010e34((int *)&local_abc,(undefined1 *)puVar33,
                                   (undefined1 *)((int)puVar33 + uVar12));
              }
              else {
                local_90 = 0x2c;
                iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009270,4);
                if (iVar11 == 0) {
                  local_b14 = (double *)0x1;
                  if (uVar12 != 0) {
                    local_628 = CONCAT44(uVar12,puVar33);
                    local_90 = 0x2d;
                    pf_png32_100127d4((int *)&local_ab0,(undefined4 *)&local_628);
                    if ((local_aa0 != 0) && ((char)local_aa4[local_aa0 * 5 + -2] == '\x01')) {
                      local_90 = 0x2e;
                      pf_png32_100127d4((int *)((int)local_aa4 + local_aa0 * 0x28 + -0xc),
                                         (undefined4 *)&local_628);
                    }
                    local_acc = local_acc + uVar12;
                  }
                }
                else {
                  local_90 = 0x2f;
                  iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009334,4);
                  uVar51 = local_aa0;
                  puVar13 = local_aa4;
                  if (iVar11 == 0) {
                    if (((PF_PART1(local_ad4, 2) != '\x01') || (uVar12 < 5)) || (local_aa0 == 0)) break;
                    iVar11 = (int)local_aa4[local_aa0 * 5 + -1];
                    if (iVar11 == *(int *)((int)local_aa4 + local_aa0 * 0x28 + -4)) {
                      local_90 = 0x30;
                      uVar43 = iVar11 << 1;
                      if (iVar11 == 0) {
                        uVar43 = 4;
                      }
                      pf_png32_10012878((int *)((int)local_aa4 + local_aa0 * 0x28 + -0xc),uVar43);
                      iVar11 = (int)puVar13[uVar51 * 5 + -1];
                    }
                    piVar38 = (int *)(*(int *)((int)puVar13 + uVar51 * 0x28 + -0xc) + iVar11 * 8);
                    *piVar38 = (int)(puVar33 + 1);
                    piVar38[1] = uVar12 - 4;
                    *(int *)(puVar13 + uVar51 * 5 + -1) = (int)puVar13[uVar51 * 5 + -1] + 1;
                  }
                  else {
                    local_90 = 0x31;
                    iVar11 = pf_png32_10003fbc((char *)puVar30,DAT_10009338,4);
                    if (iVar11 == 0) {
                      if (uVar12 == 0) {
                        PF_PART2(local_ad4, 0) = CONCAT11(1,(char)local_ad4);
                        goto LAB_10009974;
                      }
                      break;
                    }
                    if ((*puVar30 & 0x20) == 0) break;
                  }
                }
              }
            }
            goto LAB_100081fc;
          }
          uVar51 = (uint)(uVar12 != 8) | (uint)local_b14;
          bVar58 = uVar51 != 0;
          if (!bVar58) {
            uVar51 = local_ad4 >> 0x10 & 0xff;
          }
          if (bVar58 || uVar51 != 0) break;
          PF_PART3(local_ad4, 0) = CONCAT12(1,(undefined2)local_ad4);
          local_ad0 = pf_png32_10010d0c(puVar33);
        } while( true );
      }
    }
    goto LAB_100078f4;
  case 2:
    ppbStack_618 = (byte **)0x0;
    local_61c = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    pf_png32_1000c354(param_3,(undefined4 *)&local_628);
    local_61c = (undefined1 **)0x0;
    pf_png32_100065e4(local_620);
    if (param_2 < (ulonglong *)0x1a) goto switchD_10007740_default;
    bVar9 = *param_1;
    bVar58 = bVar9 != 0x42;
    if (!bVar58) {
      bVar9 = param_1[1];
    }
    if (bVar58 || bVar9 != 0x4d) goto switchD_10007740_default;
    uVar51 = *(uint *)(param_1 + 0xe);
    puVar13 = *(ulonglong **)(param_1 + 10);
    if ((uVar51 != 0xc) && (uVar51 < 0x28)) goto switchD_10007740_default;
    if (uVar51 == 0xc) {
      uVar3 = *(ushort *)(param_1 + 0x18);
      sVar2 = *(short *)(param_1 + 0x16);
      uVar34 = 0;
      uVar31 = (uint)*(ushort *)(param_1 + 0x14);
      puVar54 = (ulonglong *)0x1a;
      uVar12 = (uint)*(ushort *)(param_1 + 0x12);
      iVar11 = 0;
      local_af4 = (undefined1 **)0x0;
    }
    else {
      puVar54 = (ulonglong *)(uVar51 + 0xe);
      if (param_2 < puVar54) goto switchD_10007740_default;
      uVar12 = *(uint *)(param_1 + 0x12);
      if ((int)uVar12 < 1) goto switchD_10007740_default;
      uVar43 = *(uint *)(param_1 + 0x16);
      if (uVar43 == 0) goto switchD_10007740_default;
      uVar31 = uVar43;
      if ((int)uVar43 < 0) {
        uVar31 = -uVar43;
      }
      uVar34 = *(uint *)(param_1 + 0x2e);
      iVar11 = *(int *)(param_1 + 0x1e);
      uVar3 = *(ushort *)(param_1 + 0x1c);
      sVar2 = *(short *)(param_1 + 0x1a);
      if (uVar51 == 0x28) {
        puVar54 = extraout_r12;
        if (iVar11 != 6) {
          puVar54 = (ulonglong *)0x36;
        }
        if (iVar11 == 6 || iVar11 == 3) {
          iVar19 = 0xc;
          if (iVar11 == 6) {
            iVar19 = 0x10;
          }
          puVar54 = (ulonglong *)(iVar19 + 0x36);
        }
      }
      local_af4 = (undefined1 **)(uVar43 >> 0x1f);
    }
    uVar43 = (uint)uVar3;
    if (((sVar2 != 1) || (uVar12 == 0)) || (uVar31 == 0 || param_2 <= puVar13))
    goto switchD_10007740_default;
    if (iVar11 == 0) {
      uVar35 = 0;
      uVar25 = 0;
      ppuVar48 = (undefined1 **)0x0;
      uVar36 = 0;
    }
    else {
      if (iVar11 != 6 && iVar11 != 3) goto switchD_10007740_default;
      if (uVar51 < 0x34) {
        puVar39 = (ulonglong *)0x42;
        if (iVar11 == 6) {
          puVar39 = (ulonglong *)0x46;
        }
        if (param_2 < puVar39) goto switchD_10007740_default;
        uVar36 = *(uint *)(param_1 + 0x36);
        uVar35 = *(uint *)(param_1 + 0x3a);
        uVar25 = *(uint *)(param_1 + 0x3e);
        if (iVar11 == 6) {
          ppuVar48 = *(undefined1 ***)(param_1 + 0x42);
        }
      }
      else {
        uVar36 = *(uint *)(param_1 + 0x36);
        uVar35 = *(uint *)(param_1 + 0x3a);
        uVar25 = *(uint *)(param_1 + 0x3e);
        if (0x37 < uVar51) {
          ppuVar48 = *(undefined1 ***)(param_1 + 0x42);
        }
      }
    }
    if (((uVar43 == 0x10 && uVar36 == 0) && uVar35 == 0) && uVar25 == 0) {
      uVar36 = 0x7c00;
      uVar35 = 0x3e0;
      uVar25 = 0x1f;
    }
    if (((uVar43 == 0x20) && (uVar36 == 0 && uVar35 == 0)) && (uVar25 == 0)) {
      uVar36 = 0xff0000;
      uVar35 = 0xff00;
      ppuVar48 = (undefined1 **)0xff000000;
      uVar25 = 0xff;
    }
    ppuVar26 = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    if (uVar43 < 9) {
      if (uVar34 == 0) {
        uVar34 = 1 << (uVar43 & 0xff);
      }
      uVar27 = 4;
      if (uVar51 == 0xc) {
        uVar27 = 3;
      }
      if ((((int)((ulonglong)uVar27 * (ulonglong)uVar34 >> 0x20) != 0) || (param_2 < puVar54)) ||
         ((uint)((int)param_2 - (int)puVar54) < uVar34 * uVar27)) break;
      local_90 = 1;
      local_af0 = CONCAT71(PF_PART7(local_af0, 1),0xff);
      pf_png32_10010050((int *)&local_628,uVar34 << 2,(undefined1 *)&local_af0);
      pbVar28 = (byte *)((int)puVar54 + (int)param_1) + 1;
      for (iVar11 = 0; -iVar11 != uVar34; iVar11 = iVar11 + -1) {
        ((byte *)local_628)[iVar11 * -4] = pbVar28[1];
        ((byte *)local_628)[iVar11 * -4 + 1] = *pbVar28;
        pbVar45 = pbVar28 + -1;
        pbVar28 = pbVar28 + uVar27;
        ((byte *)local_628)[iVar11 * -4 + 2] = *pbVar45;
      }
    }
    ppuVar26 = (undefined1 **)0x0;
    if ((((uVar43 - 1 < 0x20) && ((DAT_1000a530 & 1 << (uVar43 - 1 & 0xff)) != 0)) &&
        ((int)((ulonglong)uVar43 * (ulonglong)uVar12 >> 0x20) == 0)) &&
       ((uVar51 = uVar12 * uVar43 + 0x1f >> 3 & 0xfffffffc, uVar51 != 0 &&
        ((int)((ulonglong)uVar31 * (ulonglong)uVar51 >> 0x20) == 0)))) {
      if (((uint)((int)param_2 - (int)puVar13) < uVar51 * uVar31) ||
         ((int)((ulonglong)uVar31 * (ulonglong)uVar12 >> 0x20) != 0)) {
        ppuVar26 = (undefined1 **)0x0;
      }
      else {
        ppuVar26 = (undefined1 **)0x0;
        if (uVar12 * uVar31 < 0x40000000) {
          local_90 = 2;
          pf_png32_1001021c((undefined4 *)&local_af0,uVar12 * uVar31 * 4);
          local_b30 = (byte **)0x0;
          bVar9 = 0;
          for (uVar34 = 0; uVar34 != uVar31; uVar34 = uVar34 + 1) {
            uVar15 = 0;
            iVar11 = 2;
            uVar27 = uVar34;
            if (local_af4 == (undefined1 **)0x0) {
              uVar27 = uVar31 + ~uVar34;
            }
            puVar33 = (uint *)(param_1 + (int)puVar13 + uVar27 * uVar51);
            ppbVar20 = local_b30;
            puVar30 = puVar33;
            for (; uVar12 != uVar15; uVar15 = uVar15 + 1) {
              pvVar24 = (ulonglong *)local_af0;
              puVar23 = (undefined1 *)((int)(ulonglong *)local_af0 + (int)ppbVar20);
              if (uVar43 == 1) {
                uVar27 = *(byte *)((int)puVar33 + (uVar15 >> 3)) >> (~uVar15 & 7) & 1;
LAB_10009eac:
                if (PF_PART4(local_628, 4) <= (uVar27 << 2 | 3)) goto LAB_1000b2d8;
                local_90 = 3;
                pf_png32_10003f04(puVar23,(byte *)local_628 + uVar27 * 4,4);
              }
              else {
                if (uVar43 == 4) {
                  bVar10 = *(byte *)((int)puVar33 + (uVar15 >> 1));
                  uVar27 = bVar10 & 0xf;
                  if ((uVar15 & 1) == 0) {
                    uVar27 = (uint)(bVar10 >> 4);
                  }
                  goto LAB_10009eac;
                }
                if (uVar43 == 0x18) {
                  *(undefined1 *)((int)(ulonglong *)local_af0 + (int)ppbVar20) =
                       *(undefined1 *)((int)puVar33 + iVar11);
                  iVar19 = uVar15 * 4 + (int)local_b30;
                  *(undefined1 *)((int)(ulonglong *)local_af0 + iVar19 + 1) =
                       *(undefined1 *)((int)puVar33 + uVar15 * 3 + 1);
                  *(undefined1 *)((int)(ulonglong *)local_af0 + iVar19 + 2) =
                       ((undefined1 *)((int)puVar33 + iVar11))[-2];
                  ((undefined1 *)((int)(ulonglong *)local_af0 + (int)ppbVar20))[3] = 0xff;
                }
                else {
                  if (uVar43 == 8) {
                    uVar27 = (uint)*(byte *)((int)puVar33 + uVar15);
                    goto LAB_10009eac;
                  }
                  if (uVar43 == 0x10) {
                    uVar27 = (uint)(ushort)*puVar30;
                  }
                  else {
                    uVar27 = *puVar30;
                  }
                  uVar56 = pf_png32_1001005c(uVar27,uVar36);
                  *puVar23 = (char)uVar56;
                  uVar56 = pf_png32_1001005c(uVar27,uVar35);
                  iVar19 = uVar15 * 4 + (int)local_b30;
                  *(char *)((int)pvVar24 + iVar19 + 1) = (char)uVar56;
                  uVar56 = pf_png32_1001005c(uVar27,uVar25);
                  *(char *)((int)pvVar24 + iVar19 + 2) = (char)uVar56;
                  if (ppuVar48 == (undefined1 **)0x0) {
                    uVar27 = 0xff;
                  }
                  else {
                    uVar27 = pf_png32_1001005c(uVar27,(uint)ppuVar48);
                    uVar27 = uVar27 & 0xff;
                  }
                  puVar23[3] = (char)uVar27;
                  bVar9 = bVar9 | uVar27 != 0;
                }
              }
              ppbVar20 = (byte **)((int)ppbVar20 + 4);
              iVar11 = iVar11 + 3;
              puVar30 = (uint *)((int)puVar30 + (uint)(uVar3 >> 3));
            }
            local_b30 = (byte **)((int)local_b30 + uVar12 * 4);
          }
          if (!(bool)((uVar43 != 0x20 || ppuVar48 == (undefined1 **)0x0) | bVar9)) {
            for (uVar51 = 3; uVar51 < PF_PART4(local_af0, 4); uVar51 = uVar51 + 4) {
              *(undefined1 *)((int)(ulonglong *)local_af0 + uVar51) = 0xff;
            }
          }
          param_3[1] = uVar31;
          *param_3 = uVar12;
          pf_png32_1000d5f8(param_3 + 2,(undefined4 *)&local_af0);
          pvVar24 = (ulonglong *)local_af0;
LAB_1000b2d8:
          ppuVar26 = (undefined1 **)(uint)(uVar34 == uVar31);
          local_af0 = local_af0 & 0xffffffff;
          pf_png32_100065e4(pvVar24);
        }
      }
    }
    break;
  case 3:
    ppbStack_618 = (byte **)0x0;
    local_61c = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    pf_png32_1000c354(param_3,(undefined4 *)&local_628);
    local_61c = (undefined1 **)0x0;
    pf_png32_100065e4(local_620);
    local_90 = 0xffffffff;
    bVar58 = pf_png32_100074b8(param_1,(uint)param_2);
    if (!bVar58) goto switchD_10007740_default;
    puVar23 = (undefined1 *)(uint)param_1[2];
    local_120 = (byte *)(uint)*(ushort *)(param_1 + 3);
    local_10c = (undefined1 *)(uint)param_1[0x10];
    uVar51 = (uint)param_1[7];
    PF_PART4(local_a0, 0) = (uint)param_1[0x11];
    local_dc = (char *)(uint)*(ushort *)(param_1 + 5);
    local_f4 = (void *)(uint)*(ushort *)(param_1 + 0xc);
    local_100 = (void *)(uint)*(ushort *)(param_1 + 0xe);
    puVar13 = (ulonglong *)(*param_1 + 0x12);
    local_b8 = puVar23;
    if ((undefined1 *)0x7 < puVar23) {
      local_b8 = puVar23 + -8;
    }
    ppuVar26 = (undefined1 **)0x0;
    local_ae8 = (undefined1 **)0x0;
    local_af0 = 0;
    if (param_1[1] == 1) {
      if (puVar13 <= param_2) {
        uVar12 = uVar51 + 7 >> 3;
        uVar43 = uVar12 * (int)local_dc;
        if (uVar43 <= (uint)((int)param_2 - (int)puVar13)) {
          local_90 = 4;
          local_628 = CONCAT71(PF_PART7(local_628, 1),0xff);
          pf_png32_10010050((int *)&local_af0,(int)local_dc << 2,(undefined1 *)&local_628);
          pcVar40 = (char *)0xffffffff;
          pbVar28 = param_1 + (int)puVar13;
          iVar11 = 0;
          do {
            pcVar40 = pcVar40 + 1;
            if (local_dc <= pcVar40) {
              puVar13 = (ulonglong *)(uVar43 + (int)puVar13);
              goto LAB_1000905c;
            }
            iVar19 = pf_png32_10010248(pbVar28,uVar51,(uint)(uVar51 == 0x20) << 3,
                                        (byte *)((int)(ulonglong *)local_af0 + iVar11));
            pbVar28 = pbVar28 + uVar12;
            iVar11 = iVar11 + 4;
          } while (iVar19 != 0);
          ppuVar26 = (undefined1 **)0x0;
        }
      }
    }
    else {
LAB_1000905c:
      if ((local_f4 == (void *)0x0) ||
         (ppuVar26 = (undefined1 **)0x0, (int)(ZEXT48(local_100) * ZEXT48(local_f4) >> 0x20) == 0))
      {
        local_c0 = (undefined1 *)((int)local_f4 * (int)local_100);
        ppuVar26 = (undefined1 **)0x0;
        if (local_c0 < (undefined1 *)0x40000000) {
          local_90 = 5;
          local_600 = pf_png32_1001021c((undefined4 *)&local_160,(int)local_c0 * 4);
          local_604 = &local_100;
          local_608 = &local_f4;
          local_60c = &local_a0;
          uStack_614 = CONCAT44(&local_af0,&local_dc);
          ppbStack_618 = &local_120;
          local_61c = &local_10c;
          local_620 = &local_b8;
          local_628 = CONCAT44(&local_c0,&local_d0);
          local_d0 = (undefined1 *)0x0;
          uVar51 = (uint)(local_10c + 7) >> 3;
          if (puVar23 < (undefined1 *)0x8) {
            if ((((local_c0 == (undefined1 *)0x0) ||
                 (ppuVar26 = (undefined1 **)0x0,
                 (int)((ulonglong)uVar51 * ZEXT48(local_c0) >> 0x20) == 0)) &&
                (ppuVar26 = (undefined1 **)0x0, puVar13 <= param_2)) &&
               ((int)local_c0 * uVar51 <= (uint)((int)param_2 - (int)puVar13))) {
              pbVar28 = param_1 + (int)puVar13;
              puVar23 = (undefined1 *)0xffffffff;
              do {
                puVar23 = puVar23 + 1;
                if (local_c0 <= puVar23) goto LAB_1000946c;
                local_90 = 6;
                iVar11 = pf_png32_1001034c((undefined4 *)&local_628,pbVar28);
                pbVar28 = pbVar28 + uVar51;
              } while (iVar11 != 0);
LAB_1000930c:
              ppuVar26 = (undefined1 **)0x0;
            }
          }
          else {
            while (local_d0 < local_c0) {
              ppuVar26 = (undefined1 **)0x0;
              if (param_2 <= puVar13) goto LAB_10009310;
              bVar9 = param_1[(int)puVar13];
              puVar54 = (ulonglong *)((int)puVar13 + 1);
              if ((char)bVar9 < 0) {
                if ((uint)((int)param_2 - (int)puVar54) < uVar51) goto LAB_10009310;
                puVar13 = (ulonglong *)((int)puVar54 + uVar51);
                iVar11 = ((int)(char)bVar9 & 0x7fU) + 2;
                while (iVar11 = iVar11 + -1, iVar11 != 0) {
                  local_90 = 7;
                  iVar19 = pf_png32_1001034c((undefined4 *)&local_628,param_1 + (int)puVar54);
                  if (iVar19 == 0) goto LAB_1000930c;
                }
              }
              else {
                uVar12 = (int)param_2 + (-1 - (int)puVar13);
                for (iVar11 = (bVar9 & 0x7f) + 1; iVar11 != 0; iVar11 = iVar11 + -1) {
                  if ((param_2 < puVar54) || (uVar12 < uVar51)) goto LAB_1000930c;
                  local_90 = 8;
                  iVar19 = pf_png32_1001034c((undefined4 *)&local_628,param_1 + (int)puVar54);
                  if (iVar19 == 0) goto LAB_1000930c;
                  uVar12 = uVar12 - uVar51;
                  puVar54 = (ulonglong *)((int)puVar54 + uVar51);
                }
                puVar13 = puVar54;
              }
            }
LAB_1000946c:
            *param_3 = (uint)local_f4;
            param_3[1] = (uint)local_100;
            pf_png32_1000d5f8(param_3 + 2,(undefined4 *)&local_160);
            ppuVar26 = (undefined1 **)0x1;
          }
LAB_10009310:
          pvVar24 = (ulonglong *)local_160;
          local_160 = local_160 & 0xffffffff;
          pf_png32_100065e4(pvVar24);
        }
      }
    }
    puVar23 = (undefined1 *)(ulonglong *)local_af0;
    local_af0 = local_af0 & 0xffffffff;
    goto LAB_1000932c;
  case 4:
    ppbStack_618 = (byte **)0x0;
    local_61c = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    pf_png32_1000c354(param_3,(undefined4 *)&local_628);
    local_61c = (undefined1 **)0x0;
    pf_png32_100065e4(local_620);
    local_af0 = DAT_10007f08;
    local_ae8 = (undefined1 **)DAT_10007f10;
    local_ae4 = (undefined1 **)((ulonglong)DAT_10007f10 >> 0x20);
    ppbStack_ae0 = (byte **)0x0;
    local_adc = 0;
    iVar11 = 0;
    do {
      *(undefined1 *)((int)&local_ad8 + -iVar11) = 0;
      pf_png32_10003f74((void *)((int)&local_ad4 + -iVar11),0,0x100);
      bVar58 = iVar11 != -0x30c;
      iVar11 = iVar11 + -0x104;
    } while (bVar58);
    pf_png32_1001051c((int)acStack_6c8);
    pf_png32_1001051c((int)acStack_688);
    local_62c = 0;
    local_630 = (byte *)0x0;
    local_634 = 0;
    local_638 = 0;
    local_63c = (uint *)0x0;
    local_640 = 0;
    local_644 = 0;
    local_648 = (void *)0x0;
    local_628 = DAT_10007f08;
    local_620 = (undefined1 **)DAT_10007f10;
    local_61c = (undefined1 **)((ulonglong)DAT_10007f10 >> 0x20);
    ppbStack_618 = (byte **)0x0;
    uStack_614 = uStack_614 & 0xffffffff00000000;
    pf_png32_10003f74((void *)((int)&uStack_614 + 4),0,0x450);
    iVar11 = 0;
    do {
      iVar19 = iVar11 + 0x10;
      *(undefined4 *)((int)local_1fc + iVar11 + 8) = 0;
      *(undefined4 *)((int)local_1fc + iVar11 + 4) = 0;
      *(undefined4 *)((int)local_1fc + iVar11) = 0;
      local_200[iVar11] = 0;
      iVar11 = iVar19;
    } while (iVar19 != 0x40);
    apvStack_1bc[0] = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    apvStack_1bc[1] = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    apvStack_1bc[2] = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_1c0 = 0;
    apvStack_1bc[3] = (void *)0x0;
    apvStack_1bc[7] = (void *)0x0;
    apvStack_1bc[0xb] = (void *)0x0;
    iVar11 = 0;
    apvStack_1bc[4] = apvStack_1bc[0];
    apvStack_1bc[5] = apvStack_1bc[1];
    apvStack_1bc[6] = apvStack_1bc[2];
    apvStack_1bc[8] = apvStack_1bc[0];
    apvStack_1bc[9] = apvStack_1bc[1];
    apvStack_1bc[10] = apvStack_1bc[2];
    apvStack_1bc[0xc] = apvStack_1bc[0];
    apvStack_1bc[0xd] = apvStack_1bc[1];
    apvStack_1bc[0xe] = apvStack_1bc[2];
    do {
      iVar19 = iVar11 + 0x10;
      *(undefined4 *)((int)apvStack_1bc + iVar11 + 8) = 0;
      *(undefined4 *)((int)apvStack_1bc + iVar11 + 4) = 0;
      *(undefined4 *)((int)apvStack_1bc + iVar11) = 0;
      *(undefined1 *)((int)local_1fc + iVar11 + 0x3c) = 0;
      iVar11 = iVar19;
    } while (iVar19 != 0x40);
    local_164 = 0;
    local_168 = (byte *)0x0;
    local_16c = 0;
    local_170 = 0;
    local_174 = 0;
    local_178 = 0;
    local_17c = 0;
    apvStack_1bc[0xf] = (void *)0x0;
    pf_png32_10003f04(&local_af0,&local_628,0x428);
    pf_png32_10010600((int)acStack_6c8,(int)local_200);
    pf_png32_10010600((int)acStack_688,(int)&local_1c0);
    pf_png32_100105b8((int *)&local_648);
    pf_png32_100065e4(local_648);
    local_640 = local_178;
    local_648 = apvStack_1bc[0xf];
    local_644 = local_17c;
    local_17c = 0;
    local_178 = 0;
    apvStack_1bc[0xf] = (void *)0x0;
    pf_png32_10010638(&local_63c,&local_174);
    local_630 = local_168;
    local_62c = local_164;
    uVar56 = ((uintptr_t)pf_png32_state+0x4950U);
    pf_png32_100104d8((int)&local_628);
    if ((ulonglong *)0x3 < param_2) {
      bVar9 = *param_1;
      bVar58 = bVar9 == 0xff;
      if (bVar58) {
        bVar9 = param_1[1];
      }
      if (bVar58 && bVar9 == 0xd8) {
        ppbVar20 = (byte **)0x0;
        uVar63 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar66 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar13 = (ulonglong *)0x2;
        while (iVar11 = DAT_1000995c, (ulonglong *)((int)puVar13 + 1) < param_2) {
          pbVar28 = param_1 + 3 + (int)puVar13;
          while( true ) {
            if (param_2 <= puVar13) goto LAB_10007e0c;
            if (param_1[(int)puVar13] == 0xff) break;
            pbVar28 = pbVar28 + 1;
            puVar13 = (ulonglong *)((int)puVar13 + 1);
          }
          do {
            puVar54 = puVar13;
            if (param_2 <= puVar54) goto LAB_10007e0c;
            uVar51 = (uint)param_1[(int)puVar54];
            pbVar28 = pbVar28 + 1;
            puVar13 = (ulonglong *)((int)puVar54 + 1);
          } while (uVar51 == 0xff);
          if (uVar51 == 0xd9) break;
          if (((uVar51 & 0xf8) != 0xd0 && uVar51 != 1) && (9 < uVar51 - 0xd0)) {
            puVar39 = (ulonglong *)((int)puVar54 + 3);
            pbVar45 = pbVar28;
            uVar57 = uVar56;
            if (param_2 >= puVar39) {
              uVar57 = 0xc;
              pbVar45 = (byte *)0x1a;
              puVar13 = (ulonglong *)
                        (uint)CONCAT11(param_1[(int)puVar13],(param_1 + 2)[(int)puVar54]);
              local_b54 = pbVar28;
            }
            if (param_2 < puVar39 || puVar13 < (ulonglong *)0x2) break;
            puVar30 = (uint *)((int)puVar13 + -2);
            if ((uint *)((int)param_2 - (int)puVar39) < puVar30) break;
            puVar16 = (ushort *)(param_1 + (int)puVar39);
            if (uVar51 == 0xc0) {
              if ((puVar30 < (uint *)0x6) || ((byte)*puVar16 != 8)) break;
              uVar3 = *(ushort *)((int)puVar16 + 3);
              uVar51 = (*(ushort *)((int)puVar16 + 1) & 0xff) << 8 |
                       (uint)(*(ushort *)((int)puVar16 + 1) >> 8);
              local_af0 = CONCAT44(uVar51,(uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8));
              if (((uVar3 & 0xff) == 0 && uVar3 >> 8 == 0 || uVar51 == 0) ||
                 (((uVar51 = (uint)*(byte *)((int)puVar16 + 5), 4 < uVar51 ||
                   (((uint)pbVar45 & 1 << uVar51) == 0)) || (puVar30 < (uint *)(uVar51 * 3 + 6)))))
              break;
              uVar56 = ((uintptr_t)pf_png32_state+0x56e0U);
              pf_png32_100105b8((int *)&local_648);
              uVar12 = 0;
              local_ae4 = (undefined1 **)0x1;
              local_ae8 = (undefined1 **)0x1;
              while (uVar12 != uVar51) {
                local_5fc = 0;
                uStack_614 = CONCAT44(PF_PART4(uStack_614, 4),uVar63);
                local_600 = (undefined4 *)0x0;
                local_604 = (void **)0x0;
                pbVar28 = (byte *)((int)puVar16 + uVar12 * 3 + 6);
                bVar9 = pbVar28[1];
                local_61c = (undefined1 **)(uint)pbVar28[2];
                local_620 = (undefined1 **)(bVar9 & 0xf);
                local_608 = (void **)0x0;
                bVar10 = bVar9 >> 4;
                bVar58 = (undefined1 *)((int)local_620 + -1) < (undefined1 *)0x4;
                bVar60 = (bVar9 >> 4) - 1 < 4;
                bVar59 = local_61c < &UndefinedInstruction;
                local_628 = (ulonglong)CONCAT14(bVar10,(uint)*pbVar28);
                ppbStack_618 = ppbVar20;
                local_60c = puVar66;
                if ((bVar60 && bVar58) && bVar59) {
                  ppuVar48 = (undefined1 **)(uint)bVar10;
                  if ((undefined1 **)(uint)bVar10 < local_ae8) {
                    ppuVar48 = local_ae8;
                  }
                  ppuVar26 = local_620;
                  if (local_620 < local_ae4) {
                    ppuVar26 = local_ae4;
                  }
                  local_ae8 = ppuVar48;
                  local_ae4 = ppuVar26;
                  if (local_644 == local_640) {
                    uVar43 = local_644 << 1;
                    if (local_644 == 0) {
                      uVar43 = 4;
                    }
                    if (local_644 < uVar43) {
                      local_90 = 10;
                      pvVar24 = pf_png32_100065b4(uVar43 * 0x30);
                      iVar11 = 0;
                      for (uVar31 = 0; uVar31 < local_644; uVar31 = uVar31 + 1) {
                        pvVar18 = (void *)((int)local_648 + iVar11);
                        pf_png32_10003f04((void *)((int)pvVar24 + iVar11),pvVar18,0x24);
                        pf_png32_100106e8((undefined4 *)((int)pvVar24 + iVar11 + 0x24),
                                           (undefined4 *)((int)pvVar18 + 0x24));
                        pf_png32_100136a4((undefined4 *)((int)local_648 + iVar11 + 0x24));
                        iVar11 = iVar11 + 0x30;
                      }
                      pf_png32_100065e4(local_648);
                      local_648 = pvVar24;
                      local_640 = uVar43;
                    }
                  }
                  pvVar24 = (void *)((int)local_648 + local_644 * 0x30);
                  pf_png32_10003f04(pvVar24,&local_628,0x24);
                  local_90 = 0xb;
                  pf_png32_10010714((int *)((int)pvVar24 + 0x24),(int *)&local_604);
                  local_644 = local_644 + 1;
                }
                ppuVar48 = (undefined1 **)0x0;
                local_600 = (undefined4 *)0x0;
                uVar56 = ((uintptr_t)pf_png32_state+0x58ecU);
                pf_png32_100065e4(local_604);
                uVar12 = uVar12 + 1;
                if ((!bVar60 || !bVar58) || !bVar59) goto LAB_10007e10;
              }
            }
            else if (uVar51 == 0xc4) {
              puVar33 = (uint *)0x0;
              while (uVar56 = uVar57, puVar33 < puVar30) {
                if ((uint)((int)puVar30 - (int)puVar33) < 0x11) goto LAB_10007e0c;
                uVar51 = (uint)*(byte *)((int)puVar16 + (int)puVar33);
                if (0x1f < uVar51) goto LAB_10007e0c;
                uVar12 = uVar51 & 0xf;
                ppuVar48 = (undefined1 **)0x0;
                if (3 < uVar12) goto LAB_10007e10;
                uVar43 = 0;
                for (iVar11 = 0; iVar11 != 0x10; iVar11 = iVar11 + 1) {
                  uVar43 = uVar43 + (local_b54 + (int)puVar33)[iVar11];
                }
                puVar23 = (undefined1 *)((int)puVar33 + 0x11);
                if ((uint)((int)puVar30 - (int)puVar23) < uVar43) goto LAB_10007e0c;
                pcVar40 = acStack_688 + uVar12 * 0x10;
                local_61c = (undefined1 **)0x0;
                if (uVar51 < 0x10) {
                  pcVar40 = acStack_6c8 + uVar12 * 0x10;
                }
                local_620 = (undefined1 **)0x0;
                PF_PART7(local_628, 1) = (uint7)(local_628 >> 8) & 0xffffff;
                local_628 = (ulonglong)PF_PART7(local_628, 1) << 8;
                pf_png32_1001068c(pcVar40,(undefined1 *)&local_628);
                local_620 = (undefined1 **)0x0;
                uVar57 = ((uintptr_t)pf_png32_state+0x5a14U);
                pf_png32_100065e4(PF_PART4(local_628, 4));
                uVar51 = 0;
                uVar12 = 0;
                for (uVar31 = 1; uVar31 != 0x11; uVar31 = uVar31 + 1) {
                  uVar34 = uVar12 + ((byte *)((int)puVar16 + (int)puVar33))[uVar31];
                  for (; uVar12 != uVar34; uVar12 = uVar12 + 1) {
                    if (uVar43 <= uVar12) goto LAB_10007e0c;
                    bVar9 = *(byte *)((int)puVar16 + (int)(puVar23 + uVar12));
                    uVar35 = *(uint *)(pcVar40 + 8);
                    if (uVar35 == *(uint *)(pcVar40 + 0xc)) {
                      uVar36 = uVar35 << 1;
                      if (uVar35 == 0) {
                        uVar36 = 4;
                      }
                      if (uVar35 < uVar36) {
                        local_90 = 9;
                        pvVar24 = pf_png32_100065b4(uVar36 * 0xc);
                        iVar19 = 0;
                        pvVar18 = *(void **)(pcVar40 + 4);
                        for (iVar11 = *(int *)(pcVar40 + 8); iVar11 != 0; iVar11 = iVar11 + -1) {
                          puVar52 = (undefined4 *)((int)pvVar18 + iVar19);
                          puVar41 = (undefined4 *)((int)pvVar24 + iVar19);
                          iVar19 = iVar19 + 0xc;
                          puVar41[2] = puVar52[2];
                          uVar56 = puVar52[1];
                          *puVar41 = *puVar52;
                          puVar41[1] = uVar56;
                        }
                        uVar57 = ((uintptr_t)pf_png32_state+0x5b00U);
                        pf_png32_100065e4(pvVar18);
                        *(uint *)(pcVar40 + 0xc) = uVar36;
                        *(void **)(pcVar40 + 4) = pvVar24;
                        uVar35 = *(uint *)(pcVar40 + 8);
                      }
                    }
                    *(uint *)(pcVar40 + 8) = uVar35 + 1;
                    puVar17 = (uint *)(*(int *)(pcVar40 + 4) + uVar35 * 0xc);
                    *puVar17 = uVar51;
                    uVar51 = uVar51 + 1;
                    puVar17[2] = (uint)bVar9;
                    puVar17[1] = uVar31;
                  }
                  if ((uint)(1 << (uVar31 & 0xff)) < uVar51) goto LAB_10007e0c;
                  uVar51 = uVar51 << 1;
                  uVar12 = uVar34;
                }
                ppuVar48 = (undefined1 **)0x0;
                *pcVar40 = uVar12 == uVar43;
                puVar33 = (uint *)(puVar23 + uVar43);
                if (uVar12 != uVar43) goto LAB_10007e10;
              }
            }
            else {
              uVar56 = uVar57;
              if (uVar51 == 0xdb) {
                puVar17 = (uint *)0x0;
                puVar33 = (uint *)((int)param_2 - (int)puVar39);
                while (puVar17 < puVar30) {
                  uVar51 = (uint)*(byte *)((int)puVar16 + (int)puVar17);
                  ppuVar48 = (undefined1 **)0x0;
                  bVar60 = 0x1e < uVar51;
                  bVar58 = uVar51 == 0x1f;
                  if (uVar51 < 0x20) {
                    puVar33 = (uint *)(uVar51 & 0xf);
                    bVar60 = (uint *)0x2 < puVar33;
                    bVar58 = puVar33 == (uint *)0x3;
                  }
                  if (bVar60 && !bVar58) goto LAB_10007e10;
                  puVar17 = (uint *)((int)puVar17 + 1);
                  uVar12 = 0x80;
                  if (uVar51 < 0x10) {
                    uVar12 = 0x40;
                  }
                  if ((uint)((int)puVar30 - (int)puVar17) < uVar12) goto LAB_10007e10;
                  iVar11 = 0;
                  while (iVar11 != 0x40) {
                    iVar19 = iVar11 * 4;
                    if (uVar51 < 0x10) {
                      uVar12 = (uint)*(byte *)((int)puVar16 + (int)puVar17);
                      puVar17 = (uint *)((int)puVar17 + 1);
                    }
                    else {
                      uVar12 = (*(ushort *)((int)puVar16 + (int)puVar17) & 0xff) << 8 |
                               (uint)(*(ushort *)((int)puVar16 + (int)puVar17) >> 8);
                    }
                    iVar11 = iVar11 + 1;
                    (&local_ad4)[(int)puVar33 * 0x41 + *(int *)(DAT_1000995c + iVar19)] = uVar12;
                    if (0xf < uVar51) {
                      puVar17 = (uint *)((int)puVar17 + 2);
                    }
                  }
                  *(undefined1 *)(&local_ad8 + ((uint)puVar33 | (int)puVar33 << 6)) = 1;
                  puVar33 = &local_ad8;
                }
              }
              else if (uVar51 == 0xdd) {
                if (puVar30 != (uint *)&UndefinedInstruction) break;
                ppbStack_ae0 = (byte **)((*puVar16 & 0xff) << 8 | (uint)(*puVar16 >> 8));
              }
              else if (uVar51 == 0xee) {
                if ((uint *)0xb < puVar30) {
                  uVar56 = ((uintptr_t)pf_png32_state+0x5638U);
                  local_90 = uVar57;
                  iVar11 = pf_png32_10003fbc((char *)puVar16,DAT_10009a20,5);
                  if (iVar11 == 0) {
                    local_adc = (uint)*(byte *)((int)puVar16 + 0xb);
                  }
                }
              }
              else {
                if (uVar51 == 0xda) {
                  if (((&DAT_00000005 < puVar30) && (local_644 != 0)) &&
                     (uVar51 = (uint)(byte)*puVar16, uVar51 != 0)) {
                    ppuVar48 = (undefined1 **)0x0;
                    if (puVar30 < (uint *)((uVar51 + 2) * 2)) goto LAB_10007e10;
                    local_638 = 0;
                    local_b18 = 0;
                    goto LAB_1000b1dc;
                  }
                  break;
                }
                if ((uVar51 != 200) && (uVar51 - 0xc1 < 0xf)) break;
              }
            }
            puVar13 = (ulonglong *)((int)puVar30 + (int)puVar39);
          }
        }
      }
    }
    goto LAB_10007e0c;
  case 5:
    ppbStack_618 = (byte **)0x0;
    local_61c = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    pf_png32_1000c354(param_3,(undefined4 *)&local_628);
    local_61c = (undefined1 **)0x0;
    pf_png32_100065e4(local_620);
    if (param_2 < (ulonglong *)0x1e) goto switchD_10007740_default;
    local_90 = 0xffffffff;
    uVar51 = pf_png32_10003fbc((char *)param_1,DAT_10008918,9);
    bVar58 = uVar51 != 0;
    if (!bVar58) {
      uVar51 = (uint)param_1[0xd];
    }
    if (bVar58 || uVar51 != 0) goto switchD_10007740_default;
    local_608 = (void **)0x0;
    local_60c = (undefined8 *)0x0;
    local_628 = 0;
    local_620 = (undefined1 **)0x0;
    local_61c = (undefined1 **)0x0;
    uStack_614 = 0;
    ppbStack_618 = (byte **)&UndefinedInstruction;
    local_90 = 0x12;
    iVar11 = pf_png32_10003fbc((char *)(param_1 + 9),DAT_1000891c,4);
    if (iVar11 == 0) {
      local_61c = (undefined1 **)0x0;
      ppbStack_618 = (byte **)&UndefinedInstruction;
LAB_100093c8:
      ppuVar26 = (undefined1 **)0x0;
      local_e8 = (ulonglong *)0xe;
      local_e4 = 0;
      iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,(uint *)&local_628);
      if (((iVar11 != 0) &&
          (iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,
                                       (uint *)((int)&local_628 + 4)), iVar11 != 0)) &&
         (iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,
                                      (uint *)&local_620), iVar11 != 0)) {
        iVar11 = 0;
        if ((byte *)local_628 != (undefined1 *)0x0) {
          iVar11 = (int)PF_PART4(local_628, 4);
        }
        if (((byte *)local_628 != (undefined1 *)0x0 && iVar11 != 0) &&
           (local_620 < (undefined1 **)0x3)) {
          if ((undefined1 **)0x3 < local_61c) {
            local_af0 = local_af0 & 0xffffffff00000000;
            iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,
                                        (uint *)&local_af0);
            if ((iVar11 == 0) ||
               (((ulonglong *)local_af0 != (ulonglong *)0x0 &&
                 (ulonglong *)local_af0 != (ulonglong *)0x96 &&
                ((ulonglong *)local_af0 != (ulonglong *)0x64)))) goto LAB_1000945c;
          }
          while( true ) {
            local_af0 = local_af0 & 0xffffffff00000000;
            local_160 = local_160 & 0xffffffff00000000;
            iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,
                                        (uint *)&local_af0);
            if (iVar11 == 0) break;
            iVar19 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_e8,
                                        (uint *)&local_160);
            iVar11 = local_e4;
            puVar13 = local_e8;
            if (iVar19 == 0) break;
            uVar51 = (uint)(ulonglong *)local_160;
            if ((ulonglong *)local_af0 == (ulonglong *)0x0) {
              ppuVar26 = (undefined1 **)0x0;
              if ((ulonglong *)local_160 != (ulonglong *)0x0) goto LAB_1000945c;
              local_ec = 0;
              local_f0 = 0;
              local_f4 = (void *)0x0;
              goto LAB_100098ec;
            }
            if (((uint)(local_e8 <= param_2) <= (uint)-local_e4) ||
               (uVar12 = -(local_e4 + (uint)(param_2 < local_e8)),
               uVar12 == 0 &&
               ((ulonglong *)local_160 <= (uint)((int)param_2 - (int)local_e8)) <= uVar12)) break;
            puVar30 = (uint *)(param_1 + (int)local_e8);
            if (((ulonglong *)local_af0 == (ulonglong *)0x1) && (3 < (ulonglong *)local_160)) {
              uVar12 = pf_png32_10010d0c(puVar30);
              if ((uVar12 < 0x101) && (uVar12 * 3 + 4 <= uVar51)) {
                local_90 = 0x13;
                local_120 = (byte *)((uint)local_120 & 0xffffff00);
                pf_png32_10010050((int *)((int)&uStack_614 + 4),uVar12 * 3,(undefined1 *)&local_120
                                  );
                local_90 = 0x14;
                pf_png32_10003f04(PF_PART4(uStack_614, 4),puVar30 + 1,(uint)local_60c);
              }
            }
            else if (((ulonglong *)local_af0 == (ulonglong *)0x11) &&
                    ((ulonglong *)local_160 != (ulonglong *)0x0)) {
              uStack_614 = CONCAT44(PF_PART4(uStack_614, 4),(uint)(byte)*puVar30);
            }
            local_e8 = (ulonglong *)((int)puVar13 + uVar51);
            local_e4 = iVar11 + (uint)CARRY4((uint)puVar13,uVar51);
          }
          ppuVar26 = (undefined1 **)0x0;
        }
      }
    }
    else {
      ppuVar26 = (undefined1 **)0x0;
      if ((((param_1[9] == 0x76) && (param_1[10] - 0x30U < 10)) && (param_1[0xb] - 0x30U < 10)) &&
         (param_1[0xc] - 0x30U < 10)) {
        local_61c = (undefined1 **)
                    ((short)(ushort)param_1[10] * 100 + (uint)param_1[0xb] * 10 + (uint)param_1[0xc]
                    + -0x14d0);
        ppbStack_618 = (byte **)&UndefinedInstruction;
        if ((undefined1 **)0xa < local_61c) {
          ppbStack_618 = (byte **)&SupervisorCall;
        }
        goto LAB_100093c8;
      }
    }
    goto LAB_1000945c;
  case 6:
    ppbStack_618 = (byte **)0x0;
    local_61c = (undefined1 **)0x0;
    local_620 = (undefined1 **)0x0;
    local_628 = 0;
    pf_png32_1000c354(param_3,(undefined4 *)&local_628);
    local_61c = (undefined1 **)0x0;
    pf_png32_100065e4(local_620);
    if (param_2 < &NotUsed) goto switchD_10007740_default;
    local_90 = 0xffffffff;
    iVar11 = pf_png32_10003fbc((char *)param_1,DAT_10008e48,8);
    if (iVar11 != 0) goto switchD_10007740_default;
    uVar51 = *(uint *)(param_1 + 8);
    if (uVar51 == 0) goto switchD_10007740_default;
    uVar12 = *(uint *)(param_1 + 0xc);
    ppuVar26 = extraout_r1;
    if (uVar12 != 0) {
      ppuVar26 = *(undefined1 ***)(param_1 + 0x10);
      local_b48 = ppuVar26;
    }
    if ((uVar12 == 0 || ppuVar26 == (undefined1 **)0x0) ||
       ((int)((ulonglong)uVar12 * (ulonglong)uVar51 >> 0x20) != 0)) goto switchD_10007740_default;
    if (0x3fffffff < uVar12 * uVar51) goto switchD_10007740_default;
    local_90 = 0xffffffff;
    local_af0 = local_af0 & 0xffffffffffffff00;
    pf_png32_10010e08((undefined4 *)&local_628,uVar12 * uVar51 * 4,(undefined1 *)&local_af0);
    puVar13 = (ulonglong *)&NotUsed;
    for (; ppuVar48 != local_b48; ppuVar48 = (undefined1 **)((int)ppuVar48 + 1)) {
      if (param_2 < puVar13 || (uint)((int)param_2 - (int)puVar13) < 0x1c) goto LAB_100098b4;
      puVar30 = (uint *)(param_1 + (int)puVar13);
      uVar43 = puVar30[5];
      uVar34 = puVar30[1];
      uVar35 = puVar30[2];
      uVar36 = puVar30[3];
      uVar31 = puVar30[4];
      if (((uVar36 != 0) && ((int)((ulonglong)uVar31 * (ulonglong)uVar36 >> 0x20) != 0)) ||
         (0x3fffffff < uVar31 * uVar36)) goto LAB_100098b4;
      puVar13 = (ulonglong *)((int)puVar13 + 0x1c);
      if ((param_2 < puVar13) ||
         (uVar25 = uVar31 * uVar36 * 4, (uint)((int)param_2 - (int)puVar13) < uVar25))
      goto LAB_100098b4;
      if ((*puVar30 & 1) != 0) {
        local_b1c = (uVar51 * uVar35 + uVar34) * 4;
        local_b20 = param_1 + (int)puVar13;
        for (uVar27 = 0; uVar27 != uVar31; uVar27 = uVar27 + 1) {
          iVar11 = uVar27 + uVar35;
          if ((-1 < iVar11) && (iVar11 < (int)uVar12)) {
            uVar15 = uVar34;
            pbVar28 = local_b20;
            iVar11 = local_b1c;
            for (uVar37 = uVar36; uVar37 != 0; uVar37 = uVar37 - 1) {
              if ((-1 < (int)uVar15) && ((int)uVar15 < (int)uVar51)) {
                local_90 = 0x20;
                pf_png32_10003f04(&local_af0,pbVar28,4);
                local_90 = 0x21;
                uVar14 = pf_png32_100034a0((int)(short)(ushort)PF_PART1(local_af0, 3) *
                                            (int)(short)(ushort)(byte)uVar43 + 0x7f,0xff);
                PF_PART4(local_af0, 0) = (ulonglong *)CONCAT13((char)uVar14,(undefined3)local_af0);
                pf_png32_10010be8((int)((byte *)local_628 + iVar11),(int)&local_af0);
              }
              uVar15 = uVar15 + 1;
              iVar11 = iVar11 + 4;
              pbVar28 = pbVar28 + 4;
            }
          }
          local_b1c = local_b1c + uVar51 * 4;
          local_b20 = local_b20 + uVar36 * 4;
        }
      }
      puVar13 = (ulonglong *)(uVar25 + (int)puVar13);
    }
    param_3[1] = uVar12;
    *param_3 = uVar51;
    pf_png32_1000d5f8(param_3 + 2,(undefined4 *)&local_628);
LAB_100098b4:
    ppuVar26 = (undefined1 **)(uint)(ppuVar48 == local_b48);
    break;
  default:
    goto switchD_10007740_default;
  }
  puVar23 = (byte *)local_628;
  local_628 = local_628 & 0xffffffff;
  goto LAB_1000932c;
LAB_100098ec:
  local_af0 = 0;
  iVar11 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_e8,(uint)ppbStack_618,
                              (uint *)&local_af0);
  if (iVar11 == 0) goto LAB_10009fcc;
  if ((ulonglong *)local_af0 == (ulonglong *)0x0 && PF_PART4(local_af0, 4) == 0) {
    ppuVar26 = (undefined1 **)0x0;
    if (local_f0 == 0) goto LAB_10009fd0;
    if ((((byte *)local_628 != (undefined1 *)0x0) &&
        ((int)(ZEXT48(PF_PART4(local_628, 4)) * (local_628 & 0xffffffff) >> 0x20) != 0)) ||
       (0x3fffffff < (uint)((int)PF_PART4(local_628, 4) * (int)(byte *)local_628))) goto LAB_10009fd0;
    local_90 = 0x16;
    local_af0 = local_af0 & 0xffffffffffffff00;
    pf_png32_10010e08(&local_100,(int)PF_PART4(local_628, 4) * (int)(byte *)local_628 * 4,
                       (undefined1 *)&local_af0);
    local_b14 = (double *)local_f0;
    fVar61 = 1.0;
    fVar64 = DAT_1000a534;
    goto LAB_1000a208;
  }
  if (PF_PART4(local_af0, 4) != 0 || PF_PART4(local_af0, 4) < (param_2 <= (ulonglong *)local_af0))
  goto LAB_10009fcc;
  local_90 = 0x15;
  pf_png32_10010d18((int *)&local_f4,(undefined4 *)&local_af0);
  goto LAB_100098ec;
LAB_1000a208:
  if (local_b14 == (double *)0x0) goto LAB_1000b318;
  local_ad8 = 0;
  local_adc = 0;
  local_ad0 = 0;
  local_ad4 = 0;
  local_ae8 = (undefined1 **)0x0;
  local_af0 = 0;
  ppbStack_ae0 = (byte **)0xff;
  local_ae4 = (undefined1 **)CONCAT31(PF_PART3(local_ae4, 1),1);
  iVar19 = (int)local_b14 + -1;
  local_160 = *(ulonglong *)((int)local_f4 + iVar19 * 8);
  iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)&local_af0);
  if (iVar11 == 0) goto LAB_1000b34c;
  iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)((int)&local_af0 + 4));
  if (iVar11 == 0) goto LAB_1000b34c;
  iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)&local_ae8);
  if (iVar11 == 0) goto LAB_1000b34c;
  local_120 = (byte *)0x0;
  iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)&local_120);
  if (iVar11 == 0) goto LAB_1000b34c;
  if (local_120 != (byte *)0x0) {
    if (((uint)((ulonglong *)local_160 <= param_2) <= (uint)-PF_PART4(local_160, 4)) ||
       (uVar51 = -(PF_PART4(local_160, 4) + (uint)(param_2 < (ulonglong *)local_160)),
       uVar51 == 0 && (local_120 <= (byte *)((int)param_2 - (int)(ulonglong *)local_160)) <= uVar51)
       ) goto LAB_1000b34c;
    local_160 = CONCAT44(PF_PART4(local_160, 4) +
                         (uint)CARRY4((uint)(ulonglong *)local_160,(uint)local_120),
                         (byte *)((int)(ulonglong *)local_160 + (int)local_120));
  }
  local_b00 = (double *)((uint)local_ae4 & 0xff);
  local_b18 = local_ad8;
  local_b10 = local_adc;
  ppbVar20 = ppbStack_ae0;
  while( true ) {
    local_10c = (undefined1 *)0x0;
    PF_PART4(local_a0, 0) = 0;
    iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)&local_10c);
    if (iVar11 == 0) goto LAB_1000b34c;
    iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_160,(uint *)&local_a0);
    uVar51 = (uint)local_a0;
    ppbVar4 = ppbStack_618;
    if (iVar11 == 0) goto LAB_1000b34c;
    if (local_10c == (undefined1 *)0x0) break;
    puVar13 = (ulonglong *)local_160;
    iVar11 = PF_PART4(local_160, 4);
    if (((uint)((ulonglong *)local_160 <= param_2) <= (uint)-PF_PART4(local_160, 4)) ||
       (uVar12 = -(PF_PART4(local_160, 4) + (uint)(param_2 < (ulonglong *)local_160)),
       uVar12 == 0 &&
       ((uint)local_a0 <= (uint)((int)param_2 - (int)(ulonglong *)local_160)) <= uVar12))
    goto LAB_1000b34c;
    puVar30 = (uint *)(param_1 + (int)(ulonglong *)local_160);
    if ((local_10c == (undefined1 *)0x6) && (3 < (uint)local_a0)) {
      ppbVar20 = (byte **)pf_png32_10010d0c(puVar30);
      if ((byte **)0xfe < ppbVar20) {
        ppbVar20 = (byte **)0xff;
      }
    }
    else if ((local_10c == &SupervisorCall) && (3 < (uint)local_a0)) {
      uVar12 = pf_png32_10010d0c(puVar30);
      local_b00 = (double *)(uint)(uVar12 != 0);
    }
    else if ((local_10c == (undefined1 *)0xf) && (7 < (uint)local_a0)) {
      local_b10 = pf_png32_10010d0c(puVar30);
      local_b18 = pf_png32_10010d0c(puVar30 + 1);
    }
    else if ((local_10c == (undefined1 *)0x21) && (3 < (uint)local_a0)) {
      local_120 = (byte *)pf_png32_10010d0c(puVar30);
      local_90 = 0x17;
      local_dc = (char *)0x0;
      pf_png32_10003f04(&local_dc,&local_120,4);
      ppbVar20 = (byte **)0x0;
      if ((0.0 < pf_bits_float((uintptr_t)local_dc)) && (ppbVar20 = (byte **)0xff, pf_bits_float((uintptr_t)local_dc) < fVar61)) {
        dVar67 = -0.5;
        if (0.0 <= pf_bits_float((uintptr_t)local_dc) * fVar64) {
          dVar67 = 0.5;
        }
        ppbVar20 = (byte **)VectorFloatToSigned(dVar67 + (double)(pf_bits_float((uintptr_t)local_dc) * fVar64),3);
      }
    }
    local_160 = CONCAT44(iVar11 + (uint)CARRY4((uint)puVar13,uVar51),(int)puVar13 + uVar51);
  }
  local_ad8 = local_b18;
  local_adc = local_b10;
  local_ae4 = (undefined1 **)CONCAT31(PF_PART3(local_ae4, 1),(char)local_b00);
  ppbStack_ae0 = ppbVar20;
  if (((uint)local_a0 != 0) ||
     (iVar11 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_160,(uint)ppbStack_618,
                                  &local_ad4), iVar11 == 0)) goto LAB_1000b34c;
  uVar12 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_160,(uint)ppbVar4,
                              (uint *)&local_120);
  ppbVar20 = ppbStack_ae0;
  uVar51 = extraout_r1_00;
  if (uVar12 != 0) {
    local_b30 = (byte **)(ulonglong *)local_af0;
    uVar51 = (uint)(ulonglong *)local_af0;
  }
  if (uVar12 == 0 || uVar51 == 0) goto LAB_1000b34c;
  uVar43 = PF_PART4(local_af0, 4);
  uVar51 = 0;
  if (PF_PART4(local_af0, 4) != 0) {
    uVar51 = local_ad0;
    uVar12 = local_ad4;
  }
  if (PF_PART4(local_af0, 4) == 0 || uVar12 == 0 && uVar51 == 0) goto LAB_1000b34c;
  if (((char)local_ae4 == '\x01') && (ppbStack_ae0 != (byte **)0x0)) {
    local_104 = 0;
    local_108 = 0;
    local_10c = (undefined1 *)0x0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_b8 = (undefined1 *)0x0;
    PF_PART4(local_a0, 0) = uVar12;
    PF_PART4(local_a0, 4) = uVar51;
    iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_a0,&local_a4);
    if ((iVar11 == 0) ||
       ((iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_a0,&local_a8), iVar11 == 0 ||
        (iVar11 = pf_png32_10010aec(param_1,(uint)param_2,&local_a0,&local_ac), iVar11 == 0)))) {
LAB_1000b33c:
      puVar23 = (undefined1 *)0x0;
    }
    else {
      iVar11 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_a0,(uint)ppbVar4,
                                  (uint *)&local_b8);
      ppuVar48 = local_ae8;
      if (iVar11 == 0) goto LAB_1000b33c;
      ppbVar4 = local_b30;
      uVar51 = local_a4;
      if ((byte **)local_a4 == local_b30) {
        ppbVar4 = (byte **)uVar43;
        uVar51 = local_a8;
      }
      if (((((byte **)local_a4 != local_b30 || (byte **)uVar51 != ppbVar4) ||
           (local_b8 == (undefined1 *)0x0 && local_b4 == 0)) || (&DAT_00000005 < local_ae8)) ||
         (uVar51 = *(uint *)(DAT_1000b6b4 + (int)local_ae8 * 4), local_ac != uVar51))
      goto LAB_1000b33c;
      local_c0 = local_b8;
      local_bc = local_b4;
      local_c4 = 0;
      local_c8 = 0;
      iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_c0,&local_c4);
      if ((iVar11 == 0) ||
         (iVar11 = pf_png32_10010aec(param_1,(uint)param_2,(ulonglong *)&local_c0,&local_c8),
         iVar11 == 0)) goto LAB_1000b33c;
      ppbVar4 = local_b30;
      uVar12 = local_c4;
      if ((byte **)local_c4 == local_b30) {
        ppbVar4 = (byte **)uVar43;
        uVar12 = local_c8;
      }
      if ((byte **)local_c4 != local_b30 || (byte **)uVar12 != ppbVar4) goto LAB_1000b33c;
      uVar12 = uVar43 + 0x3f >> 6;
      uVar31 = (int)local_b30 + 0x3fU >> 6;
      if ((uVar31 != 0) && ((int)((ulonglong)uVar12 * (ulonglong)uVar31 >> 0x20) != 0))
      goto LAB_1000b33c;
      local_90 = 0x18;
      pf_png32_10010e4c((int *)&local_120,uVar12 * uVar31);
      iVar49 = uVar12 * uVar31 + 1;
      iVar11 = 0;
      while (iVar49 = iVar49 + -1, iVar49 != 0) {
        iVar21 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_c0,(uint)ppbStack_618,
                                    (uint *)(local_120 + iVar11));
        bVar58 = false;
        if ((iVar21 == 0) ||
           (pbVar28 = local_120 + iVar11, iVar11 = iVar11 + 8,
           *(int *)pbVar28 == 0 && *(int *)(pbVar28 + 4) == 0)) goto LAB_1000af5c;
      }
      bVar58 = false;
      local_cc = 0;
      local_d0 = (undefined1 *)0x0;
      iVar11 = pf_png32_10010b34((int)param_1,(uint)param_2,(uint *)&local_c0,(uint)ppbStack_618,
                                  (uint *)&local_d0);
      if ((iVar11 != 0) &&
         (((local_d0 == (undefined1 *)0x0 && local_cc == 0 &&
           ((int)((ulonglong)uVar43 * ZEXT48(local_b30) >> 0x20) == 0)) &&
          (uVar43 * (int)local_b30 < 0x40000000)))) {
        local_90 = 0x19;
        local_160 = local_160 & 0xffffffffffffff00;
        pf_png32_10010050((int *)&local_10c,uVar43 * (int)local_b30 * 4,(undefined1 *)&local_160);
        local_b70 = 0;
        local_b74 = 0;
        for (uVar34 = 0; uVar34 != uVar12; uVar34 = uVar34 + 1) {
          uVar36 = local_b74 + uVar43;
          uVar35 = uVar43 + uVar34 * -0x40;
          if (0x3f < uVar36) {
            uVar36 = 0x40;
          }
          if (0x3f < uVar35) {
            uVar35 = 0x40;
          }
          local_b58 = 0;
          local_b5c = (uint)local_b30;
          local_b60 = local_b70;
          while( true ) {
            uVar25 = 0x40;
            if (local_b5c < 0x40) {
              uVar25 = local_b5c;
            }
            if (local_b58 == uVar31) break;
            iVar11 = local_b58 + uVar34 * uVar31;
            puVar13 = *(ulonglong **)(local_120 + iVar11 * 8);
            uVar27 = *(uint *)((int)(local_120 + iVar11 * 8) + 4);
            if (uVar27 != 0 || uVar27 < (param_2 <= puVar13)) {
              bVar58 = false;
              goto LAB_1000af5c;
            }
            uVar37 = iVar11 + 1;
            uVar14 = (int)local_b30 + local_b58 * -0x40;
            uVar15 = (int)param_2 - (int)puVar13;
            if (0x3f < uVar14) {
              uVar14 = 0x40;
            }
            local_af8 = uVar15;
            if ((uVar37 < local_11c) &&
               (puVar54 = *(ulonglong **)(local_120 + uVar37 * 8),
               uVar55 = *(uint *)(local_120 + uVar37 * 8 + 4),
               uVar27 <= uVar55 && (uint)(puVar54 <= puVar13) <= uVar27 - uVar55)) {
              local_af8 = (int)puVar54 - (int)puVar13;
            }
            uVar14 = uVar14 * uVar35;
            uVar27 = uVar14 * uVar51;
            local_d4 = 0;
            local_d8 = 0;
            local_dc = (char *)0x0;
            if ((int)uStack_614 == 2) {
              if ((uVar37 < local_11c) && (local_af8 != 0)) {
                local_90 = 0x1c;
                pf_png32_1001366c((undefined4 *)&local_160,param_1 + (int)puVar13,
                                   param_1 + (int)puVar13 + local_af8);
                local_90 = 0x1d;
                bVar58 = pf_png32_10010fb4((int *)&local_160,(int *)&local_dc);
                pvVar24 = (ulonglong *)local_160;
                local_160 = local_160 & 0xffffffff;
                pf_png32_100065e4(pvVar24);
                if (bVar58 && local_d8 == uVar27) goto LAB_1000aadc;
              }
LAB_1000af4c:
              bVar58 = false;
              local_d8 = 0;
              pf_png32_100065e4(local_dc);
              goto LAB_1000af5c;
            }
            pbVar28 = param_1 + (int)puVar13;
            if ((int)uStack_614 == 1) {
              local_90 = 0x1b;
              local_160 = local_160 & 0xffffffffffffff00;
              pf_png32_10010050((int *)&local_dc,uVar27,(undefined1 *)&local_160);
              uVar15 = 0;
              uVar27 = 0;
              while (uVar15 != uVar51) {
                uVar37 = 0;
                while ((uVar37 < uVar14 && (uVar27 < local_af8))) {
                  uVar53 = uVar27 + 1;
                  pbVar45 = pbVar28 + uVar27;
                  uVar55 = (uint)*pbVar45;
                  if (uVar55 < 0x7f) {
                    bVar60 = uVar53 <= local_af8;
                    bVar58 = local_af8 == uVar53;
                    if (bVar60 && !bVar58) {
                      bVar60 = uVar55 <= uVar14 - uVar37;
                      bVar58 = uVar14 - uVar37 == uVar55;
                    }
                    if (!bVar60 || bVar58) goto LAB_1000af4c;
                    uVar27 = uVar27 + 2;
                    bVar9 = pbVar28[uVar53];
                    iVar11 = uVar51 * uVar37 + uVar15;
                    uVar29 = uVar55 + 1;
                    for (uVar55 = uVar29; uVar55 != 0; uVar55 = uVar55 - 1) {
                      local_dc[iVar11] = bVar9;
                      iVar11 = iVar11 + uVar51;
                    }
                  }
                  else {
                    uVar42 = local_af8 - uVar53;
                    if (uVar55 == 0x80) {
                      if (((uVar42 < 2) ||
                          (uVar29 = (uint)CONCAT11(pbVar28[uVar53],pbVar45[2]),
                          uVar14 - uVar37 <= uVar29 - 1)) ||
                         (iVar11 = uVar27 + 3, local_af8 - iVar11 < uVar29)) goto LAB_1000af4c;
                      iVar49 = uVar51 * uVar37 + uVar15;
                      pbVar45 = pbVar28 + iVar11;
                      for (uVar27 = uVar29; uVar27 != 0; uVar27 = uVar27 - 1) {
                        local_dc[iVar49] = *pbVar45;
                        iVar49 = iVar49 + uVar51;
                        pbVar45 = pbVar45 + 1;
                      }
                      uVar27 = uVar29 + iVar11;
                    }
                    else if (uVar55 == 0x7f) {
                      if ((uVar42 < 3) ||
                         (uVar29 = (uint)CONCAT11(pbVar28[uVar53],pbVar45[2]),
                         uVar14 - uVar37 <= uVar29 - 1)) goto LAB_1000af4c;
                      uVar27 = uVar27 + 4;
                      bVar9 = pbVar45[3];
                      iVar11 = uVar51 * uVar37 + uVar15;
                      for (uVar55 = uVar29; uVar55 != 0; uVar55 = uVar55 - 1) {
                        local_dc[iVar11] = bVar9;
                        iVar11 = iVar11 + uVar51;
                      }
                    }
                    else {
                      uVar29 = 0x100 - uVar55;
                      if ((uVar14 - uVar37 < uVar29) || (uVar42 < uVar29)) goto LAB_1000af4c;
                      iVar11 = uVar51 * uVar37 + uVar15;
                      pbVar45 = pbVar28 + uVar53;
                      for (uVar55 = uVar55 | 0xffffff00; uVar55 != 0; uVar55 = uVar55 + 1) {
                        local_dc[iVar11] = *pbVar45;
                        iVar11 = iVar11 + uVar51;
                        pbVar45 = pbVar45 + 1;
                      }
                      uVar27 = uVar29 + uVar53;
                    }
                  }
                  uVar37 = uVar29 + uVar37;
                }
                uVar15 = uVar15 + 1;
                if (uVar37 < uVar14) goto LAB_1000af4c;
              }
            }
            else {
              if (((int)uStack_614 != 0) || (uVar15 < uVar27)) goto LAB_1000af4c;
              local_90 = 0x1a;
              pf_png32_10010e34((int *)&local_dc,pbVar28,pbVar28 + uVar27);
            }
LAB_1000aadc:
            local_b38 = 0;
            local_b3c = local_b60;
            for (uVar27 = 0; uVar27 != uVar36; uVar27 = uVar27 + 1) {
              local_af8 = local_b38;
              iVar11 = local_b3c;
              for (local_afc = (void *)uVar25; local_afc != (void *)0x0;
                  local_afc = (void *)((int)local_afc - 1)) {
                local_160 = CONCAT44(PF_PART4(local_160, 4),0xff000000);
                uVar15 = 0xff;
                if (ppuVar48 < (undefined1 **)0x6) {
                  if ((1 << ((uint)ppuVar48 & 0xff) & 3U) == 0) {
                    if ((1 << ((uint)ppuVar48 & 0xff) & 0xcU) == 0) {
                      uVar37 = (uint)(byte)local_dc[local_af8] * 3 + 2;
                      if (uVar37 < local_60c) {
                        PF_PART3(local_160, 0) =
                             CONCAT12(*(undefined1 *)((int)PF_PART4(uStack_614, 4) + uVar37),
                                      *(undefined2 *)
                                       ((int)PF_PART4(uStack_614, 4) + (uint)(byte)local_dc[local_af8] * 3)
                                     );
                      }
                      iVar49 = 1;
                      if (ppuVar48 == (undefined1 **)&DAT_00000005) goto LAB_1000ac24;
                    }
                    else {
                      PF_PART3(local_160, 0) =
                           CONCAT12(local_dc[local_af8],
                                    CONCAT11(local_dc[local_af8],local_dc[local_af8]));
                      iVar49 = 1;
                      if (ppuVar48 == (undefined1 **)0x3) {
LAB_1000ac24:
                        uVar15 = (uint)(byte)local_dc[local_af8 + iVar49];
                      }
                    }
                  }
                  else {
                    local_160 = CONCAT53(PF_PART5(local_160, 3),*(undefined3 *)(local_dc + local_af8));
                    iVar49 = 3;
                    if (ppuVar48 == (undefined1 **)0x1) goto LAB_1000ac24;
                  }
                }
                local_90 = 0x1e;
                uVar15 = pf_png32_100034a0(uVar15 * (int)ppbVar20 + 0x7f,0xff);
                PF_PART4(local_160, 0) = (ulonglong *)CONCAT13((char)uVar15,(undefined3)local_160);
                pf_png32_10003f04(local_10c + iVar11,&local_160,4);
                local_af8 = local_af8 + uVar51;
                iVar11 = iVar11 + 4;
              }
              local_b38 = local_b38 + uVar51 * uVar25;
              local_b3c = local_b3c + (int)local_b30 * 4;
            }
            local_d8 = 0;
            pf_png32_100065e4(local_dc);
            local_b5c = local_b5c - 0x40;
            local_b60 = local_b60 + 0x100;
            local_b58 = local_b58 + 1;
          }
          local_b70 = local_b70 + (int)local_b30 * 0x100;
          local_b74 = local_b74 + -0x40;
        }
        bVar58 = true;
      }
LAB_1000af5c:
      local_11c = 0;
      pf_png32_100065e4(local_120);
      uVar12 = local_ad8;
      uVar51 = local_adc;
      if (bVar58) {
        local_b14 = (double *)0x0;
        local_b00 = (double *)local_ad8;
        for (uVar31 = 0; uVar31 != uVar43; uVar31 = uVar31 + 1) {
          if ((-1 < (int)(uVar31 + uVar12)) && ((int)(uVar31 + uVar12) < (int)PF_PART4(local_628, 4))) {
            local_af4 = (undefined1 **)uVar51;
            pdVar22 = local_b14;
            for (local_af8 = (uint)local_b30; local_af8 != 0; local_af8 = local_af8 - 1) {
              if ((-1 < (int)local_af4) && ((int)local_af4 < (int)(byte *)local_628)) {
                local_90 = 0x1f;
                pf_png32_10010be8((int)((int)local_100 +
                                        ((int)local_b00 * (int)(byte *)local_628 + (int)local_af4) *
                                        4),(int)(local_10c + (int)pdVar22));
              }
              local_af4 = (undefined1 **)((int)local_af4 + 1);
              pdVar22 = (double *)((int)pdVar22 + 4);
            }
          }
          local_b14 = (double *)((int)local_b14 + (int)local_b30 * 4);
          local_b00 = (double *)((int)local_b00 + 1);
        }
        local_108 = 0;
        pf_png32_100065e4(local_10c);
        goto LAB_1000b098;
      }
      puVar23 = local_10c;
    }
    local_108 = 0;
    pf_png32_100065e4(puVar23);
    goto LAB_1000b34c;
  }
LAB_1000b098:
  local_b14 = (double *)iVar19;
  goto LAB_1000a208;
LAB_1000b318:
  *param_3 = (uint)(byte *)local_628;
  param_3[1] = (uint)PF_PART4(local_628, 4);
  pf_png32_1000d5f8(param_3 + 2,&local_100);
LAB_1000b34c:
  ppuVar26 = (undefined1 **)(uint)(local_b14 == (double *)0x0);
  local_fc = 0;
  pf_png32_100065e4(local_100);
LAB_10009fd0:
  local_f0 = 0;
  pf_png32_100065e4(local_f4);
LAB_1000945c:
  local_60c = (undefined8 *)0x0;
  puVar23 = PF_PART4(uStack_614, 4);
LAB_1000932c:
  pf_png32_100065e4(puVar23);
  ppuVar48 = ppuVar26;
  goto switchD_10007740_default;
LAB_10009fcc:
  ppuVar26 = (undefined1 **)0x0;
  goto LAB_10009fd0;
LAB_1000b1dc:
  ppuVar26 = local_ae4;
  if (local_b18 == uVar51) goto LAB_1000b36c;
  bVar9 = (byte)puVar16[local_b18 + 1];
  puVar33 = (uint *)((int)local_648 + 0x10);
  uVar12 = 0;
  while( true ) {
    if (local_644 == uVar12) goto LAB_10007e0c;
    if (puVar33[-4] == (uint)*(byte *)((int)puVar16 + local_b18 * 2 + 1)) break;
    puVar33 = puVar33 + 0xc;
    uVar12 = uVar12 + 1;
  }
  if ((int)uVar12 < 0) goto LAB_10007e0c;
  uVar43 = bVar9 & 0xf;
  puVar33[1] = uVar43;
  *puVar33 = (uint)(bVar9 >> 4);
  if (0x3f < bVar9) goto LAB_10007e0c;
  ppuVar48 = (undefined1 **)0x0;
  if (3 < uVar43) goto LAB_10007e10;
  local_90 = 0xd;
  local_628 = CONCAT44(PF_PART4(local_628, 4),uVar12);
  pf_png32_1001076c((int *)&local_63c,(undefined4 *)&local_628);
  local_b18 = local_b18 + 1;
  goto LAB_1000b1dc;
LAB_1000b36c:
  pbVar28 = (byte *)((int)puVar16 + uVar51 * 2 + 1);
  if (*pbVar28 == 0) {
    bVar58 = (byte)puVar16[uVar51 + 1] != 0x3f;
    if (!bVar58) {
      pbVar28 = (byte *)(uint)*(byte *)((int)puVar16 + uVar51 * 2 + 3);
    }
    if (bVar58 || pbVar28 != (byte *)0x0) goto LAB_10007e0c;
    puVar39 = (ulonglong *)((int)puVar30 + (int)puVar39);
    puVar13 = puVar39;
    while( true ) {
      puVar54 = puVar13;
      puVar13 = (ulonglong *)((int)puVar54 + 1);
      if (param_2 <= puVar13) break;
      if (param_1[(int)puVar54] == 0xff) {
        do {
          if (param_2 <= puVar13) goto LAB_1000b3fc;
          bVar9 = param_1[(int)puVar13];
          puVar13 = (ulonglong *)((int)puVar13 + 1);
        } while (bVar9 == 0xff);
        bVar10 = 0;
        if (bVar9 != 0) {
          bVar10 = bVar9 & 0xf8;
        }
        if (bVar9 != 0 && bVar10 != 0xd0) break;
      }
    }
LAB_1000b3fc:
    local_62c = (int)puVar54 - (int)puVar39;
    local_630 = param_1 + (int)puVar39;
    pbVar28 = local_630;
    if (local_62c != 0) {
      pbVar28 = (byte *)(ulonglong *)local_af0;
    }
    if (local_62c == 0 || pbVar28 == (byte *)0x0) goto LAB_10007e0c;
    iVar19 = PF_PART4(local_af0, 4);
    ppuVar48 = (undefined1 **)0x0;
    if (PF_PART4(local_af0, 4) != 0) {
      uVar51 = pf_png32_100034a0((uint)(pbVar28 + (int)local_ae8 * 8 + -1),(int)local_ae8 << 3);
      uVar12 = pf_png32_100034a0((iVar19 + (int)ppuVar26 * 8) - 1,(int)ppuVar26 << 3);
      local_afc = local_648;
      local_b00 = (double *)(local_644 * 0x30);
      ppuVar48 = ppuVar26;
      while( true ) {
        dVar7 = DAT_1000b99c;
        dVar6 = DAT_1000b994;
        dVar67 = DAT_1000b98c;
        if (local_b00 == (double *)0x0) break;
        if ((char)(&local_ad8)[*(int *)((int)local_afc + 0xc) * 0x41] != '\x01') goto LAB_10007e0c;
        cVar1 = acStack_6c8[*(int *)((int)local_afc + 0x10) * 0x10];
        bVar58 = cVar1 != '\x01';
        if (!bVar58) {
          cVar1 = acStack_688[*(int *)((int)local_afc + 0x14) * 0x10];
        }
        if (bVar58 || cVar1 != '\x01') goto LAB_10007e0c;
        ppuVar48 = (undefined1 **)0x0;
        uVar43 = *(int *)((int)local_afc + 4) * uVar51 * 8;
        uVar31 = *(int *)((int)local_afc + 8) * uVar12 * 8;
        *(uint *)((int)local_afc + 0x1c) = uVar43;
        *(uint *)((int)local_afc + 0x20) = uVar31;
        if ((uVar43 != 0) && ((int)((ulonglong)uVar31 * (ulonglong)uVar43 >> 0x20) != 0))
        goto LAB_10007e10;
        local_90 = 0xe;
        local_628 = local_628 & 0xffffffffffffff00;
        pf_png32_10010050((int *)((int)local_afc + 0x24),uVar31 * uVar43,(undefined1 *)&local_628);
        *(undefined4 *)((int)local_afc + 0x18) = 0;
        local_afc = (void *)((int)local_afc + 0x30);
        local_b00 = (double *)((int)local_b00 + -0x30);
      }
      local_110 = 0;
      local_114 = 0;
      local_118 = 0;
      local_120 = local_630;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_11c = local_62c;
      PF_PART8(auVar62, 8) = 0xbfe0000000000000;
      PF_PART8(auVar62, 0) = 0x3fe0000000000000;
      local_130 = 0;
      uStack_128 = 0;
      local_b44 = 0;
      local_b30 = (byte **)0x0;
      for (local_b38 = 0; local_b38 < uVar12; local_b38 = local_b38 + 1) {
        for (local_b2c = 0; local_b2c < uVar51; local_b2c = local_b2c + 1) {
          if ((ppbStack_ae0 != (byte **)0x0) && (local_b30 == ppbStack_ae0)) {
            local_110 = 0;
            if ((local_118 < local_11c) && (local_120[local_118] == 0xff)) {
              uVar43 = local_118 + 1;
              do {
                uVar31 = uVar43;
                ppuVar26 = (undefined1 **)0x0;
                if (local_11c <= uVar31) goto LAB_1000bfcc;
                bVar9 = local_120[uVar31];
                uVar43 = uVar31 + 1;
              } while (bVar9 == 0xff);
              if ((bVar9 & 0xf8) != 0xd0) {
                if (bVar9 != 0) goto LAB_1000bfcc;
                uVar43 = uVar31 - 1;
              }
              local_118 = uVar43;
            }
            pvVar24 = local_648;
            for (iVar19 = local_644 * 0x30; iVar19 != 0; iVar19 = iVar19 + -0x30) {
              *(undefined4 *)((int)pvVar24 + 0x18) = 0;
              pvVar24 = (void *)((int)pvVar24 + 0x30);
            }
            local_b30 = (byte **)0x0;
          }
          puVar30 = local_63c + local_638;
          for (local_b28 = local_63c; pvVar24 = local_648, local_b28 != puVar30;
              local_b28 = local_b28 + 1) {
            uVar43 = *local_b28;
            if (local_644 <= uVar43) {
              ppuVar26 = (undefined1 **)0x0;
              goto LAB_1000bfcc;
            }
            local_b48 = (undefined1 **)0x0;
            for (uVar31 = 0; uVar31 < *(uint *)((int)pvVar24 + uVar43 * 0x30 + 8);
                uVar31 = uVar31 + 1) {
              for (uVar34 = 0; uVar34 < *(uint *)((int)pvVar24 + uVar43 * 0x30 + 4);
                  uVar34 = uVar34 + 1) {
                ppuVar26 = (undefined1 **)0x0;
                uVar35 = *(uint *)((int)pvVar24 + uVar43 * 0x30 + 0xc);
                if (3 < uVar35) goto LAB_1000bfcc;
                ppuVar46 = *(undefined1 ***)((int)pvVar24 + uVar43 * 0x30 + 0x10);
                ppuVar50 = ppuVar46;
                if (ppuVar46 < &UndefinedInstruction) {
                  ppuVar50 = *(undefined1 ***)((int)pvVar24 + uVar43 * 0x30 + 0x14);
                  ppuVar48 = ppuVar50;
                }
                if (((undefined1 **)0x3 < ppuVar50) || ((char)(&local_ad8)[uVar35 * 0x41] != '\x01')
                   ) goto LAB_1000bfcc;
                pf_png32_10003f74((void *)((int)&local_628 + 4),0,0xfc);
                local_dc = (char *)0x0;
                uVar36 = pf_png32_100108bc((int *)&local_120,acStack_6c8 + (int)ppuVar46 * 0x10,
                                            (uint *)&local_dc);
                pcVar40 = local_dc;
                if ((uVar36 == 0) || ((char *)0xb < local_dc)) goto LAB_1000bfcc;
                local_f4 = (void *)0x0;
                bVar58 = pf_png32_10010980((int *)&local_120,(uint)local_dc,(uint *)&local_f4);
                if (!bVar58) goto LAB_1000bfcc;
                uVar36 = pf_png32_100109f8((uint)local_f4,(uint)pcVar40);
                iVar19 = *(int *)((int)pvVar24 + uVar43 * 0x30 + 0x18) + uVar36;
                *(int *)((int)pvVar24 + uVar43 * 0x30 + 0x18) = iVar19;
                uVar36 = 1;
                local_628 = CONCAT44(PF_PART4(local_628, 4),(&local_ad4)[uVar35 * 0x41] * iVar19);
                iVar19 = (int)ppuVar48 * 0x10;
                do {
                  while( true ) {
                    if (0x3f < uVar36) goto LAB_1000b8c8;
                    uVar25 = pf_png32_100108bc((int *)&local_120,acStack_688 + iVar19,
                                                (uint *)&local_dc);
                    if (uVar25 == 0) goto LAB_1000bfcc;
                    ppuVar48 = (undefined1 **)((uint)local_dc & 0xf);
                    if (ppuVar48 == (undefined1 **)0x0) break;
                    uVar36 = ((uint)local_dc >> 4) + uVar36;
                    if (0x3f < uVar36) goto LAB_1000bfcc;
                    local_100 = (void *)0x0;
                    bVar58 = pf_png32_10010980((int *)&local_120,(uint)ppuVar48,(uint *)&local_100)
                    ;
                    if (!bVar58) goto LAB_1000bfcc;
                    iVar49 = *(int *)(iVar11 + uVar36 * 4);
                    uVar25 = pf_png32_100109f8((uint)local_100,(uint)ppuVar48);
                    uVar36 = uVar36 + 1;
                    *(uint *)((int)&local_628 + iVar49 * 4) =
                         (&local_ad4 + uVar35 * 0x41)[iVar49] * uVar25;
                  }
                  uVar36 = uVar36 + 0x10;
                } while ((uint)local_dc >> 4 == 0xf);
LAB_1000b8c8:
                pcVar40 = DAT_1000c34c;
                if (*DAT_1000c34c == '\0') {
                  local_b14 = DAT_1000c350;
                  for (iVar19 = 0; iVar19 != 8; iVar19 = iVar19 + 1) {
                    local_afc = (void *)0x0;
                    dVar68 = (double)VectorUnsignedToFloat(iVar19,(byte)(in_fpscr >> 0x16) & 3);
                    local_b00 = local_b14;
                    for (; local_afc != (void *)0x8; local_afc = (void *)((int)local_afc + 1)) {
                      local_90 = 0xf;
                      dVar69 = (double)VectorUnsignedToFloat(local_afc,(byte)(in_fpscr >> 0x16) & 3)
                      ;
                      dVar69 = pf_png32_10004698((dVar68 + dVar68 + 1.0) * dVar69 * DAT_1000bcb0 *
                                                  dVar7);
                      *local_b00 = pf_bits_double(((pf_double_bits(dVar69) & 0xffffffff00000000) +
                                           (pf_double_bits(dVar69) & 0xffffffff)));
                      local_b00 = local_b00 + 1;
                    }
                    local_b14 = local_b14 + 8;
                  }
                  *pcVar40 = '\x01';
                }
                for (iVar19 = 0; iVar19 != 8; iVar19 = iVar19 + 1) {
                  pdVar22 = DAT_1000c350;
                  for (iVar49 = 0; iVar49 != 8; iVar49 = iVar49 + 1) {
                    dVar68 = 0.0;
                    ppuVar48 = (undefined1 **)&local_628;
                    for (iVar21 = 0; iVar21 != 8; iVar21 = iVar21 + 1) {
                      iVar47 = 0;
                      dVar69 = 1.0;
                      if (iVar21 == 0) {
                        dVar69 = dVar6;
                      }
                      pdVar44 = pdVar22;
                      while (iVar47 != 8) {
                        bVar58 = iVar47 == 0;
                        ppuVar26 = ppuVar48 + iVar47;
                        iVar47 = iVar47 + 1;
                        dVar65 = 1.0;
                        if (bVar58) {
                          dVar65 = dVar6;
                        }
                        dVar73 = (double)VectorSignedToFloat(*ppuVar26,(byte)(in_fpscr >> 0x16) & 3)
                        ;
                        dVar74 = *pdVar44;
                        pdVar44 = pdVar44 + 1;
                        dVar68 = dVar68 + dVar74 * dVar69 * dVar65 * dVar73 *
                                          DAT_1000c350[iVar19 * 8 + iVar21];
                      }
                      ppuVar48 = ppuVar48 + 8;
                    }
                    pdVar22 = pdVar22 + 8;
                    dVar69 = dVar67 + dVar68 * 0.25;
                    dVar68 = pf_bits_double(PF_PART8(auVar62, 8));
                    uVar35 = in_fpscr & 0xfffffff | (uint)(dVar69 < 0.0) << 0x1f;
                    in_fpscr = uVar35 | (uint)NAN(dVar69) << 0x1c;
                    if ((byte)(uVar35 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                      dVar68 = pf_bits_double(PF_PART8(auVar62, 0));
                    }
                    uVar36 = VectorFloatToSigned(dVar69 + dVar68,3);
                    uVar35 = uVar36;
                    if (0xfe < uVar36) {
                      uVar35 = 0xffffffff;
                    }
                    uVar8 = (undefined1)uVar35;
                    if ((int)uVar36 < 1) {
                      uVar8 = 0;
                    }
                    *(undefined1 *)((int)&local_160 + iVar49 + iVar19 * 8) = uVar8;
                  }
                }
                iVar19 = *(int *)((int)pvVar24 + uVar43 * 0x30 + 4);
                iVar49 = *(int *)((int)pvVar24 + uVar43 * 0x30 + 8);
                local_b00 = (double *)&local_160;
                for (local_afc = (void *)0x0; local_afc != (void *)0x8;
                    local_afc = (void *)((int)local_afc + 1)) {
                  uVar35 = local_b44 * iVar49 + (int)local_b48 + (int)local_afc;
                  if (uVar35 < *(uint *)((int)pvVar24 + uVar43 * 0x30 + 0x20)) {
                    local_90 = 0x10;
                    pf_png32_10003f04((void *)(*(int *)((int)pvVar24 + uVar43 * 0x30 + 0x1c) *
                                                uVar35 + *(int *)((int)pvVar24 +
                                                                 uVar43 * 0x30 + 0x24) +
                                               (iVar19 * local_b2c + uVar34) * 8),local_b00,8);
                  }
                  local_b00 = local_b00 + 1;
                }
              }
              local_b48 = (undefined1 **)((int)local_b48 + 8);
            }
          }
          local_b30 = (byte **)((int)local_b30 + 1);
        }
        local_b44 = local_b44 + 8;
      }
      if (((ulonglong *)local_af0 == (ulonglong *)0x0) ||
         (ppuVar26 = (undefined1 **)0x0,
         (int)((ulonglong)PF_PART4(local_af0, 4) * (local_af0 & 0xffffffff) >> 0x20) == 0)) {
        ppuVar26 = (undefined1 **)0x0;
        if (PF_PART4(local_af0, 4) * (int)(ulonglong *)local_af0 < 0x40000000) {
          local_90 = 0x11;
          pf_png32_1001021c((undefined4 *)&local_628,
                             PF_PART4(local_af0, 4) * (int)(ulonglong *)local_af0 * 4);
          dVar68 = DAT_1000c00c;
          dVar7 = DAT_1000c004;
          dVar6 = DAT_1000bffc;
          dVar67 = DAT_1000bff4;
          local_dc = (char *)&local_af0;
          for (uVar51 = 0; uVar51 < PF_PART4(local_af0, 4); uVar51 = uVar51 + 1) {
            uVar12 = 0;
            while( true ) {
              uVar31 = local_644;
              pvVar24 = local_648;
              uVar43 = (uint)(ulonglong *)local_af0;
              if ((ulonglong *)local_af0 <= uVar12) break;
              puVar23 = (byte *)local_628;
              PF_PART1(local_af8, 0) = pf_png32_10010838((int *)&local_dc,(int)local_648,uVar12,uVar51);
              uVar34 = (uint)(byte)local_af8;
              pbVar28 = puVar23 + (uVar51 * uVar43 + uVar12) * 4;
              if (uVar31 == 3) {
                bVar9 = pf_png32_10010838((int *)&local_dc,(int)pvVar24 + 0x30,uVar12,uVar51);
                bVar10 = pf_png32_10010838((int *)&local_dc,(int)pvVar24 + 0x60,uVar12,uVar51);
                dVar65 = pf_bits_double(PF_PART8(auVar62, 8));
                dVar74 = (double)VectorSignedToFloat(bVar9 - 0x80,(byte)(in_fpscr >> 0x16) & 3);
                dVar70 = (double)VectorUnsignedToFloat(uVar34,(byte)(in_fpscr >> 0x16) & 3);
                dVar72 = (double)VectorSignedToFloat(bVar10 - 0x80,(byte)(in_fpscr >> 0x16) & 3);
                dVar71 = dVar70 + dVar74 * dVar67 + dVar72 * dVar6;
                dVar73 = pf_bits_double(PF_PART8(auVar62, 0));
                dVar69 = dVar65;
                if (!NAN(dVar71)) {
                  dVar69 = dVar73;
                }
                uVar31 = VectorFloatToSigned(dVar71 + dVar69,3);
                dVar69 = dVar70 + dVar72 * dVar7;
                uVar43 = uVar31;
                if (0xfe < uVar31) {
                  uVar43 = 0xffffffff;
                }
                bVar9 = (byte)uVar43;
                if ((int)uVar31 < 1) {
                  bVar9 = 0;
                }
                pbVar28[1] = bVar9;
                dVar70 = dVar70 + dVar74 * dVar68;
                dVar74 = dVar65;
                if (!NAN(dVar69)) {
                  dVar74 = dVar73;
                }
                uVar34 = VectorFloatToSigned(dVar69 + dVar74,3);
                uVar43 = in_fpscr & 0xfffffff | (uint)(dVar70 < 0.0) << 0x1f;
                in_fpscr = uVar43 | (uint)NAN(dVar70) << 0x1c;
                uVar31 = uVar34;
                if (0xfe < uVar34) {
                  uVar31 = 0xffffffff;
                }
                bVar9 = (byte)uVar31;
                if ((int)uVar34 < 1) {
                  bVar9 = 0;
                }
                *pbVar28 = bVar9;
                if ((byte)(uVar43 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  dVar65 = dVar73;
                }
                uVar31 = VectorFloatToSigned(dVar70 + dVar65,3);
                uVar43 = uVar31;
                if (0xfe < uVar31) {
                  uVar43 = 0xffffffff;
                }
                PF_PART1(local_af8, 0) = (byte)uVar43;
                if ((int)uVar31 < 1) {
                  PF_PART1(local_af8, 0) = 0;
                }
              }
              else if (uVar31 == 1) {
                pbVar28[1] = (byte)local_af8;
                *pbVar28 = (byte)local_af8;
              }
              else {
                bVar9 = pf_png32_10010838((int *)&local_dc,(int)pvVar24 + 0x30,uVar12,uVar51);
                uVar43 = (uint)bVar9;
                bVar9 = pf_png32_10010838((int *)&local_dc,(int)pvVar24 + 0x60,uVar12,uVar51);
                bVar10 = pf_png32_10010838((int *)&local_dc,(int)pvVar24 + 0x90,uVar12,uVar51);
                uVar31 = (uint)bVar10;
                local_b00 = (double *)(uint)bVar9;
                local_af8 = uVar34;
                if (local_adc == 2) {
                  dVar65 = pf_bits_double(PF_PART8(auVar62, 8));
                  local_af8 = 0xff;
                  iVar11 = uVar43 - 0x80;
                  uVar43 = 0xff;
                  dVar74 = (double)VectorUnsignedToFloat(uVar34,(byte)(in_fpscr >> 0x16) & 3);
                  local_b00 = (double *)0xff;
                  dVar70 = (double)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
                  dVar71 = dVar74 + dVar70 * dVar68;
                  uVar34 = in_fpscr & 0xfffffff | (uint)(dVar71 < 0.0) << 0x1f;
                  uVar35 = uVar34 | (uint)NAN(dVar71) << 0x1c;
                  dVar73 = pf_bits_double(PF_PART8(auVar62, 0));
                  dVar69 = dVar65;
                  if ((byte)(uVar34 >> 0x1f) == ((byte)(uVar35 >> 0x1c) & 1)) {
                    dVar69 = dVar73;
                  }
                  uVar34 = VectorFloatToSigned(dVar71 + dVar69,3);
                  if (uVar34 < 0xff) {
                    local_b00 = (double *)(uVar34 & 0xff);
                  }
                  if ((int)uVar34 < 1) {
                    local_b00 = (double *)0x0;
                  }
                  dVar69 = (double)VectorSignedToFloat(bVar9 - 0x80,(byte)(uVar35 >> 0x16) & 3);
                  dVar71 = dVar74 + dVar69 * dVar7;
                  dVar74 = dVar74 + dVar70 * dVar67 + dVar69 * dVar6;
                  uVar34 = in_fpscr & 0xfffffff | (uint)(dVar74 < 0.0) << 0x1f;
                  in_fpscr = uVar34 | (uint)NAN(dVar74) << 0x1c;
                  dVar69 = dVar65;
                  if (!NAN(dVar71)) {
                    dVar69 = dVar73;
                  }
                  uVar35 = VectorFloatToSigned(dVar71 + dVar69,3);
                  if (uVar35 < 0xff) {
                    local_af8 = uVar35 & 0xff;
                  }
                  if ((int)uVar35 < 1) {
                    local_af8 = 0;
                  }
                  if ((byte)(uVar34 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    dVar65 = dVar73;
                  }
                  uVar34 = VectorFloatToSigned(dVar74 + dVar65,3);
                  if (uVar34 < 0xff) {
                    uVar43 = uVar34 & 0xff;
                  }
                  if ((int)uVar34 < 1) {
                    uVar43 = 0;
                  }
                }
                uVar43 = uVar43 + uVar31;
                uVar34 = 0xff;
                if (uVar43 < 0xff) {
                  uVar34 = uVar43;
                }
                bVar9 = ~(byte)uVar34;
                if (0xfe < uVar43) {
                  bVar9 = 0;
                }
                local_af8 = local_af8 + uVar31;
                pbVar28[1] = bVar9;
                uVar43 = 0xff;
                if (local_af8 < 0xff) {
                  uVar43 = local_af8;
                }
                bVar9 = ~(byte)uVar43;
                if (0xfe < local_af8) {
                  bVar9 = 0;
                }
                uVar31 = (int)local_b00 + uVar31;
                *pbVar28 = bVar9;
                uVar43 = 0xff;
                if (uVar31 < 0xff) {
                  uVar43 = uVar31;
                }
                PF_PART1(local_af8, 0) = ~(byte)uVar43;
                if (0xfe < uVar31) {
                  PF_PART1(local_af8, 0) = 0;
                }
              }
              pbVar28[3] = 0xff;
              pbVar28[2] = (byte)local_af8;
              uVar12 = uVar12 + 1;
            }
          }
          param_3[1] = PF_PART4(local_af0, 4);
          *param_3 = (uint)(ulonglong *)local_af0;
          pf_png32_1000d5f8(param_3 + 2,(undefined4 *)&local_628);
          puVar23 = (byte *)local_628;
          local_628 = local_628 & 0xffffffff;
          pf_png32_100065e4(puVar23);
          ppuVar26 = (undefined1 **)0x1;
        }
      }
LAB_1000bfcc:
      ppuVar48 = ppuVar26;
    }
  }
  else {
LAB_10007e0c:
    ppuVar48 = (undefined1 **)0x0;
  }
LAB_10007e10:
  pf_png32_100104d8((int)&local_af0);
  goto switchD_10007740_default;
LAB_10009a24:
  local_620 = *(undefined1 ***)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_61c = *(undefined1 ***)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  ppbStack_618 = *(byte ***)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  uStack_158 = CONCAT44(local_61c,local_620);
  local_150 = ZEXT48(ppbStack_618);
  local_148 = local_148 & 0xffff000000000000;
  local_160 = 0;
  local_60c = (undefined8 *)((uint)local_60c & 0xffff0000);
  uStack_614 = 0;
  local_628 = 0;
  pf_png32_1000d5f8((undefined4 *)&local_160,(undefined4 *)&local_628);
  uStack_158 = CONCAT44(local_61c,(undefined4)uStack_158);
  local_150 = CONCAT44((int)uStack_614,ppbStack_618);
  PF_PART6(local_148, 0) = CONCAT24(PF_PART2(local_60c, 0),PF_PART4(uStack_614, 4));
  puVar23 = (byte *)local_628;
  local_628 = local_628 & 0xffffffff;
  pf_png32_100065e4(puVar23);
  ppuVar48 = local_ac4;
  if (local_ae4 == (undefined1 **)0x0) {
    local_af4 = (undefined1 **)0x0;
    if (local_ab8 != 0) {
      if (local_ab8 != 2) goto LAB_1000b160;
      PF_PART5(local_148, 0) = CONCAT14(1,(undefined4)local_148);
      uStack_158 = CONCAT44((*local_abc & 0xff) << 8 | (uint)(*local_abc >> 8),
                            (undefined4)uStack_158);
    }
LAB_10009c14:
    local_ec = 0;
    local_f0 = 0;
    local_f4 = (void *)0x0;
    if ((PF_PART1(local_ad4, 2) == '\x01') && (local_aa0 != 0)) {
      if (((ulonglong *)local_af0 == (ulonglong *)0x0) ||
         (local_af4 = (undefined1 **)0x0,
         (int)((ulonglong)PF_PART4(local_af0, 4) * (local_af0 & 0xffffffff) >> 0x20) == 0)) {
        local_af4 = (undefined1 **)0x0;
        if (PF_PART4(local_af0, 4) * (int)(ulonglong *)local_af0 < 0x40000000) {
          local_90 = 0x33;
          local_628 = local_628 & 0xffffffffffffff00;
          pf_png32_10010050((int *)&local_f4,PF_PART4(local_af0, 4) * (int)(ulonglong *)local_af0 * 4,
                             (undefined1 *)&local_628);
          bVar9 = 0;
          for (iVar11 = 0; local_aa0 * 0x28 != iVar11; iVar11 = iVar11 + 0x28) {
            bVar10 = bVar9 & 1;
            bVar9 = 1;
            if (bVar10 == 0) {
              bVar9 = *(byte *)((int)local_aa4 + iVar11 + 0x18);
            }
          }
          if ((bVar9 & 1) == 0) {
            local_620 = (undefined1 **)0x0;
            local_628 = 0;
            local_90 = 0x34;
            bVar58 = pf_png32_1000c384((uint *)&local_af0,(int *)&local_ab0,(int *)&local_160,
                                        (int *)&local_628);
            if ((!bVar58) || (PF_PART4(local_628, 4) != (void *)local_f0)) {
              pbVar28 = (byte *)local_628;
              local_628 = local_628 & 0xffffffff;
LAB_1000b148:
              local_af4 = (undefined1 **)0x0;
              pf_png32_100065e4(pbVar28);
              goto LAB_1000b14c;
            }
            pf_png32_1000d5f8(&local_f4,(undefined4 *)&local_628);
            puVar23 = (byte *)local_628;
            local_628 = local_628 & 0xffffffff;
            pf_png32_100065e4(puVar23);
          }
          puVar54 = local_aa4 + local_aa0 * 5;
          for (puVar13 = local_aa4; puVar13 != puVar54; puVar13 = puVar13 + 5) {
            uStack_614 = CONCAT44(local_ad8,local_adc);
            ppbStack_618 = ppbStack_ae0;
            local_620 = local_ae8;
            local_61c = local_ae4;
            iVar11 = *(int *)((int)puVar13 + 4);
            uVar5 = *puVar13;
            local_628 = *puVar13;
            local_90 = 0x35;
            local_118 = 0;
            local_11c = 0;
            local_120 = (byte *)0x0;
            bVar58 = pf_png32_1000c384((uint *)&local_628,(int *)((int)puVar13 + 0x1c),
                                        (int *)&local_160,(int *)&local_120);
            if (!bVar58) {
              local_11c = 0;
              pbVar28 = local_120;
              goto LAB_1000b148;
            }
            iVar49 = 0;
            iVar19 = (int)(ulonglong *)local_af0 * 4;
            for (iVar21 = 0; iVar21 != iVar11; iVar21 = iVar21 + 1) {
              pbVar28 = local_120 + iVar49;
              pvVar24 = (void *)((int)local_f4 +
                                iVar19 * (*(int *)((int)puVar13 + 0xc) + iVar21) +
                                (int)puVar13[1] * 4);
              for (iVar47 = (int)uVar5; iVar47 != 0; iVar47 = iVar47 + -1) {
                if (*(int *)((int)puVar13 + 0x14) == 0) {
                  local_90 = 0x36;
                  pf_png32_10003f04(pvVar24,pbVar28,4);
                }
                else {
                  local_90 = 0x37;
                  pf_png32_10010be8((int)pvVar24,(int)pbVar28);
                }
                pvVar24 = (void *)((int)pvVar24 + 4);
                pbVar28 = pbVar28 + 4;
              }
              iVar49 = iVar49 + (int)uVar5 * 4;
            }
            local_11c = 0;
            pf_png32_100065e4(local_120);
          }
          goto LAB_10009cfc;
        }
      }
    }
    else {
      local_90 = 0x38;
      bVar58 = pf_png32_1000c384((uint *)&local_af0,(int *)&local_ab0,(int *)&local_160,
                                  (int *)&local_f4);
      local_af4 = (undefined1 **)0x0;
      if (bVar58) {
LAB_10009cfc:
        *param_3 = (uint)(ulonglong *)local_af0;
        param_3[1] = PF_PART4(local_af0, 4);
        pf_png32_1000d5f8(param_3 + 2,&local_f4);
        local_af4 = (undefined1 **)0x1;
      }
    }
LAB_1000b14c:
    local_f0 = 0;
    pf_png32_100065e4(local_f4);
  }
  else {
    if (local_ae4 == (undefined1 **)0x2) {
      if (local_ab8 != 0) {
        local_af4 = (undefined1 **)0x0;
        if (local_ab8 != 6) goto LAB_1000b160;
        local_150 = CONCAT44((local_abc[1] & 0xff) << 8 | (uint)(local_abc[1] >> 8),
                             (*local_abc & 0xff) << 8 | (uint)(*local_abc >> 8));
        PF_PART6(local_148, 0) = CONCAT15(1,(undefined5)local_148);
        local_148 = CONCAT44(PF_PART4(local_148, 4),(local_abc[2] & 0xff) << 8 | (uint)(local_abc[2] >> 8))
        ;
      }
      goto LAB_10009c14;
    }
    if (local_ae4 == (undefined1 **)0x3) {
      uVar51 = pf_png32_100034a0((uint)local_ac4,3);
      local_af4 = (undefined1 **)0x0;
      if ((ppuVar48 != (undefined1 **)0x0) && (ppuVar48 == (undefined1 **)(uVar51 * 3))) {
        local_90 = 0x32;
        local_628 = CONCAT71(PF_PART7(local_628, 1),0xff);
        pf_png32_10010050((int *)&local_160,uVar51 << 2,(undefined1 *)&local_628);
        for (iVar11 = 0; -iVar11 != uVar51; iVar11 = iVar11 + -1) {
          iVar19 = iVar11 * -3;
          *(undefined1 *)((int)(ulonglong *)local_160 + iVar11 * -4) =
               *(undefined1 *)(local_ac8 + iVar19);
          *(undefined1 *)((int)(ulonglong *)local_160 + iVar11 * -4 + 1) =
               *(undefined1 *)(local_ac8 + iVar19 + 1);
          *(undefined1 *)((int)(ulonglong *)local_160 + iVar11 * -4 + 2) =
               *(undefined1 *)(local_ac8 + iVar19 + 2);
        }
        for (uVar51 = 0; uVar51 < local_ab8; uVar51 = uVar51 + 1) {
          *(undefined1 *)((int)(ulonglong *)local_160 + uVar51 * 4 + 3) =
               *(undefined1 *)((int)local_abc + uVar51);
        }
        goto LAB_10009c14;
      }
    }
    else {
      local_af4 = (undefined1 **)0x0;
      if (local_ab8 == 0) goto LAB_10009c14;
    }
  }
LAB_1000b160:
  pvVar24 = (ulonglong *)local_160;
  local_160 = local_160 & 0xffffffff;
LAB_1000949c:
  pf_png32_100065e4(pvVar24);
  goto LAB_100078f4;
  while( true ) {
    puVar54 = puVar13 + 4;
    iVar11 = iVar11 + -0x28;
    puVar13 = puVar13 + 5;
    if ((int)*puVar54 == 0) break;
LAB_100099f0:
    if (iVar11 == 0) goto LAB_10009a24;
  }
LAB_100078f4:
  pf_png32_1000d64c((int)&local_af0);
  local_d8 = 0;
  pf_png32_100065e4(local_dc);
  ppuVar48 = local_af4;
switchD_10007740_default:
  pf_png32_10006ac8(&uStack_94);
  return (ulonglong *)ppuVar48;
}

#undef NotUsed
#undef DAT_00000005
#undef DAT_10007f08
#undef DAT_10007f10
#undef DAT_10008678
#undef DAT_1000867c
#undef DAT_10008680
#undef DAT_100088cc
#undef DAT_10008918
#undef DAT_1000891c
#undef DAT_10008e48
#undef DAT_10009260
#undef DAT_10009264
#undef DAT_10009268
#undef DAT_1000926c
#undef DAT_10009270
#undef DAT_10009334
#undef DAT_10009338
#undef DAT_1000933c
#undef DAT_1000995c
#undef DAT_10009a20
#undef DAT_1000a530
#undef DAT_1000a534
#undef DAT_1000b6b4
#undef DAT_1000b98c
#undef DAT_1000b994
#undef DAT_1000b99c
#undef DAT_1000bcb0
#undef DAT_1000bff4
#undef DAT_1000bffc
#undef DAT_1000c004
#undef DAT_1000c00c
#undef DAT_1000c34c
#undef DAT_1000c350
#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000014
#undef local_b74
#undef local_b70
#undef local_b60
#undef local_b5c
#undef local_b58
#undef local_b54
#undef local_b48
#undef local_b44
#undef local_b3c
#undef local_b38
#undef local_b30
#undef local_b2c
#undef local_b28
#undef local_b20
#undef local_b1c
#undef local_b18
#undef local_b14
#undef local_b10
#undef local_b00
#undef local_afc
#undef local_af8
#undef local_af4
#undef local_af0
#undef local_ae8
#undef local_ae4
#undef local_adc
#undef local_ad8
#undef local_ad4
#undef local_ad0
#undef local_acc
#undef local_ac8
#undef local_ac4
#undef local_ac0
#undef local_abc
#undef local_ab8
#undef local_ab4
#undef local_ab0
#undef local_aac
#undef local_aa8
#undef local_aa4
#undef local_aa0
#undef local_a9c
#undef local_648
#undef local_644
#undef local_640
#undef local_63c
#undef local_638
#undef local_634
#undef local_630
#undef local_62c
#undef local_628
#undef local_620
#undef local_61c
#undef local_60c
#undef local_608
#undef local_604
#undef local_600
#undef local_5fc
#undef local_5f8
#undef local_5f4
#undef local_5f0
#undef local_5ec
#undef local_5e8
#undef local_5e4
#undef local_5e0
#undef local_5dc
#undef local_5d8
#undef local_5d4
#undef local_200
#undef local_1fc
#undef local_1c0
#undef local_17c
#undef local_178
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_150
#undef local_148
#undef local_140
#undef local_130
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStackY_c00
#undef ppbStack_ae0
#undef acStack_6c8
#undef acStack_688
#undef ppbStack_618
#undef uStack_614
#undef apvStack_1bc
#undef uStack_158
#undef uStack_138
#undef uStack_128
#undef uStack_94
#undef auStack_68


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x8eb4U)
 */

undefined4 * pf_png32_1000c354(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  pf_png32_1000d5f8(param_1 + 2,param_2 + 2);
  return param_1;
}



#undef DAT_1000d38c
#define DAT_1000d38c (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0x9eecU)))
#undef DAT_1000d390
#define DAT_1000d390 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0x9ef0U)))
#undef DAT_1000d394
#define DAT_1000d394 (*(int *)(((uintptr_t)pf_png32_state + 0x9ef4U)))
#undef DAT_1000d46c
#define DAT_1000d46c (*(int *)(((uintptr_t)pf_png32_state + 0x9fccU)))
#undef DAT_1000d470
#define DAT_1000d470 (*(char * *)(((uintptr_t)pf_png32_state + 0x9fd0U)))
#undef DAT_1000d474
#define DAT_1000d474 (*(int *)(((uintptr_t)pf_png32_state + 0x9fd4U)))
#undef DAT_1000d478
#define DAT_1000d478 (*(int *)(((uintptr_t)pf_png32_state + 0x9fd8U)))
#define auStackY_1c0 (*(undefined1 (*)[128])(frame + 16))
#define auStack_68 (*(undefined1 (*)[8])(frame + 360))
#define local_f8 (*(int *)(frame + 216))
#define local_d8 (*(void * *)(frame + 248))
#define local_d4 (*(byte * *)(frame + 252))
#define local_d0 (*(undefined4 *)(frame + 256))
#define local_cc (*(undefined4 *)(frame + 260))
#define local_c8 (*(byte * *)(frame + 264))
#define local_c4 (*(undefined4 *)(frame + 268))
#define local_c0 (*(undefined4 *)(frame + 272))
#define local_bc (*(byte * *)(frame + 276))
#define local_b8 (*(uint *)(frame + 280))
#define local_b0 (*(uint (*)[8])(frame + 288))
#define local_90 (*(undefined4 *)(frame + 320))
#define local_7c (*(undefined4 *)(frame + 340))
#define local_78 (*(undefined4 *)(frame + 344))
#define local_74 (*(undefined1 * *)(frame + 348))
#define local_70 (*(int *)(frame + 352))
#define local_6c (*(undefined1 * *)(frame + 356))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x8ee4U)
 */

/* WARNING: Type propagation algorithm not settling */

bool pf_png32_1000c384(uint *param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned char frame[496] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint uVar23;
  char *pcVar24;
  char *pcVar25;
  undefined1 *puVar26;
  uint uVar27;
  byte *pbVar28;
  ushort *puVar29;
  byte bVar30;
  undefined1 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_1c0 + 0x80;
  local_7c = *DAT_1000d38c;
  local_78 = DAT_1000d390;
  local_70 = DAT_1000d394 + ((uintptr_t)pf_png32_state+0x8f3cU);
  uVar35 = *param_1;
  uVar27 = param_1[6];
  pf_png32_10006ab0(local_b0 + 7);
  if (uVar27 == 0) {
    uVar27 = pf_png32_100128f4((int)param_1);
    if (((uVar35 != 0) &&
        (bVar37 = false, (int)((ulonglong)uVar27 * (ulonglong)uVar35 >> 0x20) != 0)) ||
       ((uVar35 != 0 &&
        (bVar37 = false, (int)((ulonglong)param_1[1] * (ulonglong)uVar35 >> 0x20) != 0))))
    goto LAB_1000d4cc;
    uVar15 = param_1[1] * uVar35;
    bVar37 = false;
    if (0x3fffffff < uVar15) goto LAB_1000d4cc;
    local_90 = 0xffffffff;
    pf_png32_10010150(param_4,uVar15 * 4);
    local_90 = 1;
    local_b0[6] = 0;
    local_b0[5] = 0;
    local_b0[4] = 0;
    local_b0[3] = 0;
    local_b0[2] = 0;
    local_b0[1] = 0;
    bVar37 = false;
    local_b0[0] = 0;
    iVar9 = pf_png32_10012934((int *)local_b0,param_2);
    if (iVar9 != 0) {
      uVar35 = uVar27 * uVar35 + 7 >> 3;
      uVar15 = pf_png32_100128f4((int)param_1);
      local_90 = 2;
      uVar27 = uVar15 + 7 >> 3;
      if (uVar15 < 8) {
        uVar27 = 1;
      }
      pf_png32_1001021c(&local_bc,uVar35 + 1);
      uVar15 = param_1[3];
      bVar37 = uVar15 == 6;
      if (bVar37) {
        uVar15 = param_1[2];
      }
      if (bVar37 && uVar15 == 8) {
        uVar27 = 0;
        local_d8 = (void *)0x0;
        do {
          if (param_1[1] <= uVar27) {
            bVar37 = local_b0[6] == local_b0[4];
            break;
          }
          local_90 = 3;
          iVar9 = pf_png32_100129f4((int)local_b0,(int)local_bc,local_b8);
          bVar37 = false;
          if (iVar9 == 0) break;
          local_90 = 4;
          pcVar24 = (char *)0x0;
          if (uVar27 != 0) {
            pcVar24 = (char *)(*param_4 + (int)local_d8) + -uVar35;
          }
          iVar9 = pf_png32_10012a40((uint)*local_bc,(char *)(*param_4 + (int)local_d8),
                                     (char *)(local_bc + 1),pcVar24,uVar35,4);
          local_d8 = (void *)((int)local_d8 + uVar35);
          uVar27 = uVar27 + 1;
        } while (iVar9 != 0);
      }
      else {
        local_90 = 5;
        pf_png32_1001021c(&local_c8,uVar35);
        local_90 = 6;
        pf_png32_1001021c(&local_d4,uVar35);
        bVar22 = false;
        local_f8 = 0;
        for (uVar15 = 0; uVar15 < param_1[1]; uVar15 = uVar15 + 1) {
          local_90 = 7;
          iVar9 = pf_png32_100129f4((int)local_b0,(int)local_bc,local_b8);
          bVar37 = false;
          if (iVar9 == 0) goto switchD_1000ce8c_caseD_1;
          local_90 = 8;
          pbVar28 = (byte *)0x0;
          if (bVar22) {
            pbVar28 = local_c8;
          }
          iVar9 = pf_png32_10012a40((uint)*local_bc,(char *)local_d4,(char *)(local_bc + 1),
                                     (char *)pbVar28,uVar35,uVar27);
          pbVar28 = local_d4;
          if ((iVar9 == 0) || (6 < param_1[3])) goto switchD_1000ce8c_caseD_1;
          uVar16 = *param_1;
          local_d8 = (void *)(uVar16 * local_f8 + *param_4);
          switch((uintptr_t)(param_1[3])) {
          case 0:
            if (param_1[2] == 8) {
              pbVar17 = (byte *)((int)local_d8 + 1);
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                bVar30 = *(byte *)(param_3 + 7);
                bVar2 = *pbVar28;
                uVar23 = param_3[3];
                pbVar17[1] = bVar2;
                *pbVar17 = bVar2;
                pbVar17[-1] = bVar2;
                pbVar17[2] = -(~bVar30 & 1 | uVar23 != bVar2);
                pbVar17 = pbVar17 + 4;
                pbVar28 = pbVar28 + 1;
              }
            }
            else {
              pbVar28 = local_d4 + 1;
              puVar26 = (undefined1 *)((int)local_d8 + 1);
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar11 = (*(ushort *)(pbVar28 + -1) & 0xff) << 8 |
                         (uint)(*(ushort *)(pbVar28 + -1) >> 8);
                uVar23 = pf_png32_100034a0(uVar11 * 0xff + 0x7fff,0xffff);
                uVar32 = param_3[3];
                pbVar28 = pbVar28 + 2;
                bVar30 = *(byte *)(param_3 + 7);
                uVar31 = (undefined1)uVar23;
                puVar26[1] = uVar31;
                *puVar26 = uVar31;
                puVar26[-1] = uVar31;
                puVar26[2] = -(~bVar30 & 1 | uVar11 != uVar32);
                puVar26 = puVar26 + 4;
              }
            }
            break;
          default:
            goto switchD_1000ce8c_caseD_1;
          case 2:
            if (param_1[2] == 8) {
              puVar26 = (undefined1 *)((int)local_d8 + 3);
              pbVar28 = local_d4 + 2;
              for (iVar9 = 0; -iVar9 != uVar16; iVar9 = iVar9 + -1) {
                uVar23 = (uint)*(byte *)((int)param_3 + 0x1d);
                uVar31 = 0xff;
                bVar37 = uVar23 == 1;
                if (bVar37) {
                  uVar23 = param_3[4];
                }
                if (((bVar37 && uVar23 == pbVar28[-2]) &&
                    (param_3[5] == (uint)local_d4[iVar9 * -3 + 1])) &&
                   (uVar31 = 0, param_3[6] != (uint)*pbVar28)) {
                  uVar31 = 0xff;
                }
                puVar26[-3] = pbVar28[-2];
                *(byte *)((int)local_d8 + iVar9 * -4 + 1) = local_d4[iVar9 * -3 + 1];
                *(byte *)((int)local_d8 + iVar9 * -4 + 2) = *pbVar28;
                *puVar26 = uVar31;
                puVar26 = puVar26 + 4;
                pbVar28 = pbVar28 + 3;
              }
            }
            else {
              pbVar28 = local_d4 + 5;
              puVar26 = (undefined1 *)((int)local_d8 + 1);
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar23 = (*(ushort *)(pbVar28 + -1) & 0xff) << 8 |
                         (uint)(*(ushort *)(pbVar28 + -1) >> 8);
                uVar32 = pf_png32_100034a0(uVar23 * 0xff + 0x7fff,0xffff);
                bVar30 = *(byte *)((int)param_3 + 0x1d);
                uVar11 = param_3[4];
                uVar12 = param_3[5];
                uVar14 = param_3[6];
                uVar3 = *(ushort *)(pbVar28 + -5);
                uVar20 = (*(ushort *)(pbVar28 + -3) & 0xff) << 8 |
                         (uint)(*(ushort *)(pbVar28 + -3) >> 8);
                puVar26[1] = (char)uVar32;
                uVar32 = pf_png32_100034a0(uVar20 * 0xff + 0x7fff,0xffff);
                uVar19 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
                *puVar26 = (char)uVar32;
                uVar32 = pf_png32_100034a0(uVar19 * 0xff + 0x7fff,0xffff);
                puVar26[-1] = (char)uVar32;
                pbVar28 = pbVar28 + 6;
                puVar26[2] = -(~bVar30 & 1 | uVar19 != uVar11 | uVar20 != uVar12 | uVar23 != uVar14)
                ;
                puVar26 = puVar26 + 4;
              }
            }
            break;
          case 3:
            uVar23 = param_3[1];
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              if (uVar23 >> 2 <= (uint)*pbVar28) goto switchD_1000ce8c_caseD_1;
              local_90 = 9;
              pf_png32_10003f04(local_d8,(void *)(*param_3 + (uint)*pbVar28 * 4),4);
              pbVar28 = pbVar28 + 1;
              local_d8 = (void *)((int)local_d8 + 4);
            }
            break;
          case 4:
            if (param_1[2] == 8) {
              pbVar17 = local_d4 + 1;
              pbVar28 = (byte *)((int)local_d8 + 1);
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                bVar30 = pbVar17[-1];
                *pbVar28 = bVar30;
                pbVar28[-1] = bVar30;
                pbVar28[1] = pbVar17[-1];
                bVar30 = *pbVar17;
                pbVar17 = pbVar17 + 2;
                pbVar28[2] = bVar30;
                pbVar28 = pbVar28 + 4;
              }
            }
            else {
              iVar9 = 0;
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar3 = *(ushort *)(pbVar28 + iVar9);
                uVar23 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100 -
                                            (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >>
                                            0x10)) + 0x7fff,0xffff);
                uVar3 = *(ushort *)((int)(pbVar28 + iVar9) + 2);
                puVar26 = (undefined1 *)((int)local_d8 + iVar9);
                uVar31 = (undefined1)uVar23;
                *puVar26 = uVar31;
                uVar23 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100 -
                                            (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >>
                                            0x10)) + 0x7fff,0xffff);
                puVar26[3] = (char)uVar23;
                iVar9 = iVar9 + 4;
                puVar26[2] = uVar31;
                puVar26[1] = uVar31;
              }
            }
            break;
          case 6:
            if (param_1[2] == 8) {
              local_90 = 10;
              pf_png32_10003f04((void *)(*param_4 + uVar15 * uVar16 * 4),local_d4,uVar16 << 2);
            }
            else {
              pbVar17 = local_d4 + 7;
              iVar9 = 0;
              for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                uVar23 = pf_png32_100034a0((uint)CONCAT11(pbVar17[-7],pbVar28[iVar9 * 2 + 1]) *
                                            0xff + 0x7fff,0xffff);
                puVar26 = (undefined1 *)((int)local_d8 + iVar9);
                *puVar26 = (char)uVar23;
                uVar3 = *(ushort *)(pbVar28 + iVar9 * 2 + 2);
                uVar23 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100 -
                                            (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >>
                                            0x10)) + 0x7fff,0xffff);
                puVar26[1] = (char)uVar23;
                uVar3 = *(ushort *)(pbVar28 + iVar9 * 2 + 4);
                uVar23 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100 -
                                            (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >>
                                            0x10)) + 0x7fff,0xffff);
                puVar26[2] = (char)uVar23;
                uVar23 = pf_png32_100034a0((uint)CONCAT11(pbVar28[iVar9 * 2 + 6],*pbVar17) * 0xff +
                                            0x7fff,0xffff);
                pbVar17 = pbVar17 + 8;
                puVar26[3] = (char)uVar23;
                iVar9 = iVar9 + 4;
              }
            }
          }
          uVar8 = local_cc;
          uVar7 = local_d0;
          pbVar28 = local_d4;
          local_d4 = local_c8;
          local_d0 = local_c4;
          local_cc = local_c0;
          local_c8 = pbVar28;
          local_c4 = uVar7;
          bVar22 = true;
          local_f8 = local_f8 + 4;
          local_c0 = uVar8;
        }
        bVar37 = local_b0[6] == local_b0[4];
switchD_1000ce8c_caseD_1:
        local_d0 = 0;
        pf_png32_100065e4(local_d4);
        local_c4 = 0;
        pf_png32_100065e4(local_c8);
      }
      local_b8 = 0;
      pf_png32_100065e4(local_bc);
    }
  }
  else {
    if ((uVar35 != 0) &&
       (bVar37 = false, (int)((ulonglong)param_1[1] * (ulonglong)uVar35 >> 0x20) != 0))
    goto LAB_1000d4cc;
    uVar35 = param_1[1] * uVar35;
    bVar37 = false;
    if (0x3fffffff < uVar35) goto LAB_1000d4cc;
    local_90 = 0xffffffff;
    local_b0[0] = local_b0[0] & 0xffffff00;
    pf_png32_10010050(param_4,uVar35 * 4,(undefined1 *)local_b0);
    local_90 = 0xb;
    local_b0[6] = 0;
    local_b0[5] = 0;
    local_b0[4] = 0;
    local_b0[3] = 0;
    local_b0[2] = 0;
    local_b0[1] = 0;
    bVar37 = false;
    local_b0[0] = 0;
    iVar9 = pf_png32_10012934((int *)local_b0,param_2);
    if (iVar9 != 0) {
      uVar27 = pf_png32_100128f4((int)param_1);
      iVar6 = DAT_1000d478;
      iVar5 = DAT_1000d474;
      pcVar24 = DAT_1000d470;
      iVar9 = DAT_1000d46c;
      iVar10 = 0;
      uVar35 = uVar27 + 7 >> 3;
      if (uVar27 < 8) {
        uVar35 = 1;
      }
      for (; iVar10 != 7; iVar10 = iVar10 + 1) {
        uVar15 = *(uint *)(iVar9 + iVar10 * 4);
        uVar27 = 0;
        uVar32 = *(uint *)(pcVar24 + iVar10 * 4);
        uVar16 = *(uint *)(iVar6 + iVar10 * 4);
        uVar23 = *(uint *)(iVar5 + iVar10 * 4);
        if (uVar16 < *param_1) {
          uVar27 = pf_png32_100034a0(*param_1 + ~uVar16,uVar32);
          uVar27 = uVar27 + 1;
        }
        if (uVar23 < param_1[1]) {
          uVar11 = pf_png32_100034a0(param_1[1] + ~uVar23,uVar15);
          if ((uVar27 != 0) && (uVar11 != 0xffffffff)) {
            uVar12 = pf_png32_100128f4((int)param_1);
            if ((int)((ulonglong)uVar12 * (ulonglong)uVar27 >> 0x20) != 0) {
              bVar37 = false;
              goto LAB_1000d4c0;
            }
            local_90 = 0xc;
            uVar12 = uVar12 * uVar27 + 7;
            pf_png32_1001021c(&local_bc,(uVar12 >> 3) + 1);
            uVar12 = uVar12 >> 3;
            local_90 = 0xd;
            pf_png32_1001021c(&local_c8,uVar12);
            local_90 = 0xe;
            pf_png32_1001021c(&local_d4,uVar12);
            bVar37 = false;
            pcVar1 = (char *)(uVar32 * 4);
            local_f8 = uVar23 << 2;
            pcVar25 = pcVar24;
            for (uVar23 = 0; uVar23 < uVar11 + 1; uVar23 = uVar23 + 1) {
              local_90 = 0xf;
              iVar13 = pf_png32_100129f4((int)local_b0,(int)local_bc,local_b8);
              if (iVar13 == 0) break;
              local_90 = 0x10;
              pbVar28 = (byte *)0x0;
              if (bVar37) {
                pbVar28 = local_c8;
              }
              iVar13 = pf_png32_10012a40((uint)*local_bc,(char *)local_d4,(char *)(local_bc + 1),
                                          (char *)pbVar28,uVar12,uVar35);
              if ((iVar13 == 0) || (6 < param_1[3])) break;
              uVar32 = *param_1;
              iVar13 = *param_4 + uVar16 * 4;
              switch((uintptr_t)(param_1[3])) {
              case 0:
                if (param_1[2] == 8) {
                  pbVar17 = (byte *)(uVar32 * local_f8 + iVar13 + 1);
                  pbVar28 = local_d4;
                  for (uVar32 = uVar27; pcVar25 = pcVar1, uVar32 != 0; uVar32 = uVar32 - 1) {
                    bVar30 = *(byte *)(param_3 + 7);
                    bVar2 = *pbVar28;
                    uVar14 = param_3[3];
                    pbVar17[1] = bVar2;
                    *pbVar17 = bVar2;
                    pbVar17[-1] = bVar2;
                    pbVar17[2] = -(~bVar30 & 1 | uVar14 != bVar2);
                    pbVar17 = pbVar17 + (int)pcVar1;
                    pbVar28 = pbVar28 + 1;
                  }
                }
                else {
                  pbVar28 = local_d4 + 1;
                  pcVar25 = (char *)(uVar32 * local_f8 + iVar13 + 1);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    uVar20 = (*(ushort *)(pbVar28 + -1) & 0xff) << 8 |
                             (uint)(*(ushort *)(pbVar28 + -1) >> 8);
                    uVar14 = pf_png32_100034a0(uVar20 * 0xff + 0x7fff,0xffff);
                    uVar19 = param_3[3];
                    pbVar28 = pbVar28 + 2;
                    bVar30 = *(byte *)(param_3 + 7);
                    cVar4 = (char)uVar14;
                    pcVar25[1] = cVar4;
                    *pcVar25 = cVar4;
                    pcVar25[-1] = cVar4;
                    pcVar25[2] = -(~bVar30 & 1 | uVar20 != uVar19);
                    pcVar25 = pcVar25 + (int)pcVar1;
                  }
                }
                break;
              default:
                goto switchD_1000c6c8_caseD_1;
              case 2:
                if (param_1[2] == 8) {
                  pbVar17 = local_d4 + 1;
                  pbVar28 = (byte *)(uVar32 * local_f8 + iVar13 + 1);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    bVar30 = 0xff;
                    if (*(char *)((int)param_3 + 0x1d) == '\x01') {
                      pcVar18 = (char *)param_3[4];
                      bVar37 = pcVar18 == (char *)(uint)pbVar17[-1];
                      if (bVar37) {
                        pcVar18 = (char *)(uint)*pbVar17;
                        pcVar25 = (char *)param_3[5];
                      }
                      if ((bVar37 && pcVar25 == pcVar18) &&
                         (bVar30 = 0, param_3[6] != (uint)pbVar17[1])) {
                        bVar30 = 0xff;
                      }
                    }
                    pbVar28[-1] = pbVar17[-1];
                    *pbVar28 = *pbVar17;
                    bVar2 = pbVar17[1];
                    pbVar17 = pbVar17 + 3;
                    pbVar28[2] = bVar30;
                    pbVar28[1] = bVar2;
                    pbVar28 = pbVar28 + (int)pcVar1;
                  }
                }
                else {
                  puVar29 = (ushort *)(local_d4 + 2);
                  pcVar25 = (char *)(uVar32 * local_f8 + iVar13 + 3);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    uVar36 = (puVar29[1] & 0xff) << 8 | (uint)(puVar29[1] >> 8);
                    uVar14 = pf_png32_100034a0(uVar36 * 0xff + 0x7fff,0xffff);
                    bVar30 = *(byte *)((int)param_3 + 0x1d);
                    uVar19 = param_3[4];
                    uVar20 = param_3[5];
                    uVar21 = param_3[6];
                    uVar3 = puVar29[-1];
                    uVar34 = (*puVar29 & 0xff) << 8 | (uint)(*puVar29 >> 8);
                    pcVar25[-1] = (char)uVar14;
                    uVar14 = pf_png32_100034a0(uVar34 * 0xff + 0x7fff,0xffff);
                    uVar33 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
                    pcVar25[-2] = (char)uVar14;
                    uVar14 = pf_png32_100034a0(uVar33 * 0xff + 0x7fff,0xffff);
                    pcVar25[-3] = (char)uVar14;
                    puVar29 = puVar29 + 3;
                    *pcVar25 = -(~bVar30 & 1 | uVar33 != uVar19 | uVar34 != uVar20 |
                                uVar36 != uVar21);
                    pcVar25 = pcVar25 + (int)pcVar1;
                  }
                }
                break;
              case 3:
                uVar14 = param_3[1];
                pcVar18 = (char *)(uVar32 * local_f8 + iVar13);
                pbVar28 = local_d4;
                for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                  if (uVar14 >> 2 <= (uint)*pbVar28) goto switchD_1000c6c8_caseD_1;
                  local_90 = 0x11;
                  pf_png32_10003f04(pcVar18,(void *)(*param_3 + (uint)*pbVar28 * 4),4);
                  pbVar28 = pbVar28 + 1;
                  pcVar18 = pcVar18 + (int)pcVar1;
                }
                break;
              case 4:
                if (param_1[2] == 8) {
                  pbVar17 = local_d4 + 1;
                  pbVar28 = (byte *)(uVar32 * local_f8 + iVar13 + 1);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    bVar30 = pbVar17[-1];
                    *pbVar28 = bVar30;
                    pbVar28[-1] = bVar30;
                    pbVar28[1] = pbVar17[-1];
                    bVar30 = *pbVar17;
                    pbVar17 = pbVar17 + 2;
                    pbVar28[2] = bVar30;
                    pbVar28 = pbVar28 + (int)pcVar1;
                  }
                }
                else {
                  pbVar28 = local_d4 + 3;
                  pcVar25 = (char *)(uVar32 * local_f8 + iVar13 + 1);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    uVar3 = *(ushort *)(pbVar28 + -1);
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    uVar3 = *(ushort *)(pbVar28 + -3);
                    pcVar25[2] = (char)uVar14;
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    cVar4 = (char)uVar14;
                    pcVar25[1] = cVar4;
                    *pcVar25 = cVar4;
                    pbVar28 = pbVar28 + 4;
                    pcVar25[-1] = cVar4;
                    pcVar25 = pcVar25 + (int)pcVar1;
                  }
                }
                break;
              case 6:
                if (param_1[2] == 8) {
                  pcVar18 = (char *)(uVar32 * local_f8 + iVar13);
                  pbVar28 = local_d4;
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    local_90 = 0x12;
                    pf_png32_10003f04(pcVar18,pbVar28,4);
                    pcVar18 = pcVar18 + (int)pcVar1;
                    pbVar28 = pbVar28 + 4;
                  }
                }
                else {
                  pbVar28 = local_d4 + 7;
                  pcVar25 = (char *)(uVar32 * local_f8 + iVar13 + 1);
                  for (uVar32 = uVar27; uVar32 != 0; uVar32 = uVar32 - 1) {
                    uVar3 = *(ushort *)(pbVar28 + -7);
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    pcVar25[-1] = (char)uVar14;
                    uVar3 = *(ushort *)(pbVar28 + -5);
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    *pcVar25 = (char)uVar14;
                    uVar3 = *(ushort *)(pbVar28 + -3);
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    pcVar25[1] = (char)uVar14;
                    uVar3 = *(ushort *)(pbVar28 + -1);
                    uVar14 = pf_png32_100034a0((((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) * 0x100
                                                - (((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10
                                                   ) >> 0x10)) + 0x7fff,0xffff);
                    pcVar25[2] = (char)uVar14;
                    pcVar25 = pcVar25 + (int)pcVar1;
                    pbVar28 = pbVar28 + 8;
                  }
                }
              }
              uVar8 = local_cc;
              uVar7 = local_d0;
              pbVar28 = local_d4;
              local_d4 = local_c8;
              local_d0 = local_c4;
              local_cc = local_c0;
              local_c8 = pbVar28;
              local_c4 = uVar7;
              bVar37 = true;
              local_c0 = uVar8;
              local_f8 = local_f8 + uVar15 * 4;
            }
switchD_1000c6c8_caseD_1:
            local_d0 = 0;
            pf_png32_100065e4(local_d4);
            local_c4 = 0;
            pf_png32_100065e4(local_c8);
            local_b8 = 0;
            bVar37 = false;
            pf_png32_100065e4(local_bc);
            if (uVar23 < uVar11 + 1) goto LAB_1000d4c0;
          }
        }
      }
      bVar37 = local_b0[6] == local_b0[4];
    }
  }
LAB_1000d4c0:
  pf_png32_10012cd4(local_b0);
LAB_1000d4cc:
  pf_png32_10006ac8(local_b0 + 7);
  return bVar37;
}

#undef DAT_1000d38c
#undef DAT_1000d390
#undef DAT_1000d394
#undef DAT_1000d46c
#undef DAT_1000d470
#undef DAT_1000d474
#undef DAT_1000d478
#undef auStackY_1c0
#undef auStack_68
#undef local_f8
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xa158U)
 */

undefined4 * pf_png32_1000d5f8(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    pf_png32_100065e4((void *)*param_1);
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xa1acU)
 */

int pf_png32_1000d64c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10012830((int *)(param_1 + 0x4c));
  pf_png32_100065e4(*(void **)(param_1 + 0x4c));
  pf_png32_1001270c((undefined4 *)(param_1 + 0x40));
  pf_png32_100136a4((undefined4 *)(param_1 + 0x34));
  pf_png32_100136a4((undefined4 *)(param_1 + 0x28));
  return param_1;
}



#undef DAT_1000d900
#define DAT_1000d900 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xa460U)))
#undef DAT_1000d904
#define DAT_1000d904 (*(int *)(((uintptr_t)pf_png32_state + 0xa464U)))
#undef DAT_1000d908
#define DAT_1000d908 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xa468U)))
#undef DAT_1000d90c
#define DAT_1000d90c (*(int *)(((uintptr_t)pf_png32_state + 0xa46cU)))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define local_b8 (*(uint *)(frame + 24))
#define local_b4 (*(uint *)(frame + 28))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_b0 (*(uint * *)(frame + 32))
#define local_ac (*(uint * *)(frame + 36))
#define local_a8 (*(byte * *)(frame + 40))
#define local_a4 (*(ulonglong * *)(frame + 44))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(undefined4 *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xa1e8U)
 */

ulonglong * pf_png32_1000d688(int param_1,uint *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;

  puVar4 = (ulonglong *)0x0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
  local_a4 = (ulonglong *)0x0;
  local_a8 = (byte *)0x0;
  local_ac = param_2;
  pf_png32_1000c354(param_2,&local_a8);
  local_9c = 0;
  pf_png32_100065e4(local_a0);
  local_7c = *DAT_1000d908;
  local_78 = DAT_1000d900;
  local_a0 = (void *)0x0;
  local_70 = DAT_1000d904 + ((uintptr_t)pf_png32_state+0xa26cU);
  local_a8 = (byte *)0x0;
  local_a4 = (ulonglong *)0x0;
  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  pf_png32_10006ab0(&uStack_94);
  if (param_1 != 0) {
    local_90 = 1;
    puVar1 = pf_png32_10005834(param_1,DAT_1000d90c);
    puVar4 = (ulonglong *)0x0;
    if (puVar1 != (uint *)0x0) {
      local_90 = 2;
      local_b4 = 0;
      local_b0 = puVar1;
      iVar2 = pf_png32_10005ecc((int *)puVar1,0,2);
      if (iVar2 == 0) {
        local_90 = 3;
        uVar3 = pf_png32_10005f64((int)local_b0);
        if (-1 < (int)uVar3) {
          local_90 = 4;
          local_b4 = 0;
          local_b8 = uVar3;
          iVar2 = pf_png32_10005ecc((int *)local_b0,0,0);
          if (iVar2 == 0) {
            local_90 = 5;
            pf_png32_10010150((int *)&local_a8,local_b8);
            if (local_a4 == (ulonglong *)0x0) {
              local_b4 = 1;
            }
            else {
              local_90 = 6;
              puVar4 = (ulonglong *)pf_png32_10005c34(local_a8,1,(int)local_a4,(int *)local_b0);
              local_b4 = (uint)(puVar4 == local_a4);
            }
          }
        }
      }
      local_90 = 7;
      iVar2 = pf_png32_10005bf0(local_b0);
      puVar4 = (ulonglong *)0x0;
      if ((local_b4 & iVar2 == 0) != 0) {
        local_90 = 8;
        puVar4 = pf_png32_10007644(local_a8,local_a4,local_ac);
      }
    }
  }
  local_a4 = (ulonglong *)0x0;
  pf_png32_100065e4(local_a8);
  pf_png32_10006ac8(&uStack_94);
  return puVar4;
}

#undef DAT_1000d900
#undef DAT_1000d904
#undef DAT_1000d908
#undef DAT_1000d90c
#undef auStack_c0
#undef local_b8
#undef local_b4
#undef uStack_94
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef auStack_68
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Native PNG stream construction. Pooka's Free Software License. */
#include "png_encode.h"
int pf_png32_1000d910(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x00006800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xab64U)
 */

bool pf_png32_1000e004(uint *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == 0) {
    return true;
  }
  iVar1 = pf_png32_10005dc0(param_2,1,param_3,param_1);
  return iVar1 == param_3;
}



#define auStack_a4 (*(undefined1 (*)[128])(frame + 28))
#define local_20 (*(uint *)(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xab9cU)
 */

uint pf_png32_1000e03c(uint *param_1,byte *param_2,byte *param_3,uint param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;

  if ((param_3 != (byte *)0x0) || (uVar3 = 0, param_4 == 0)) {
    local_20 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
               param_4 >> 0x18;
    uVar3 = 0;
    uVar2 = pf_png32_10012730(0,param_2,4);
    if (param_4 != 0) {
      pf_png32_10012730(uVar2,param_3,param_4);
    }
    bVar1 = pf_png32_1000e004(param_1,(int)&local_20,4);
    if (((bVar1) && (bVar1 = pf_png32_1000e004(param_1,(int)param_2,4), bVar1)) &&
       (bVar1 = pf_png32_1000e004(param_1,(int)param_3,param_4), bVar1)) {
      bVar1 = pf_png32_1000e004(param_1,(int)(auStack_a4 + 0x80),4);
      uVar3 = (uint)bVar1;
    }
  }
  return uVar3;
}

#undef auStack_a4
#undef local_20


#undef DAT_1000dfe4
#define DAT_1000dfe4 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xab44U)))
#undef DAT_1000dfe8
#define DAT_1000dfe8 (*(int *)(((uintptr_t)pf_png32_state + 0xab48U)))
#undef DAT_1000dfec
#define DAT_1000dfec (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xab4cU)))
#undef DAT_1000dff0
#define DAT_1000dff0 (*(int *)(((uintptr_t)pf_png32_state + 0xab50U)))
#undef DAT_1000dff4
#define DAT_1000dff4 (*(int *)(((uintptr_t)pf_png32_state + 0xab54U)))
#undef DAT_1000dff8
#define DAT_1000dff8 (*(byte * *)(((uintptr_t)pf_png32_state + 0xab58U)))
#undef DAT_1000dffc
#define DAT_1000dffc (*(byte * *)(((uintptr_t)pf_png32_state + 0xab5cU)))
#undef DAT_1000e000
#define DAT_1000e000 (*(byte * *)(((uintptr_t)pf_png32_state + 0xab60U)))
#define auStack_e0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_dc (*(uint *)(frame + 20))
#define puStack_d8 (*(uint * *)(frame + 24))
#define iStack_d4 (*(int *)(frame + 28))
#define iStack_d0 (*(int *)(frame + 32))
#define uStack_cc (*(uint *)(frame + 36))
#define uStack_c8 (*(uint *)(frame + 40))
#define uStack_c4 (*(uint *)(frame + 44))
#define pbStack_c0 (*(byte * *)(frame + 48))
#define uStack_bc (*(uint *)(frame + 52))
#define uStack_b8 (*(uint *)(frame + 56))
#define pvStack_b4 (*(void * *)(frame + 60))
#define uStack_b0 (*(uint *)(frame + 64))
#define uStack_ac (*(undefined4 *)(frame + 68))
#define uStack_a8 (*(undefined1 *)(frame + 72))
#define pvStack_a4 (*(void * *)(frame + 76))
#define uStack_a0 (*(uint *)(frame + 80))
#define uStack_9c (*(undefined4 *)(frame + 84))
#define uStack_95 (*(undefined1 *)(frame + 91))
#define uStack_94 (*(undefined4 *)(frame + 92))
#define uStack_90 (*(undefined4 *)(frame + 96))
#define uStack_7c (*(undefined4 *)(frame + 116))
#define uStack_78 (*(undefined4 *)(frame + 120))
#define puStack_74 (*(undefined1 * *)(frame + 124))
#define iStack_70 (*(int *)(frame + 128))
#define puStack_6c (*(undefined1 * *)(frame + 132))
#define auStack_68 (*(undefined1 (*)[8])(frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xac6cU)
 */

byte pf_png32_1000e10c(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *src;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;

  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_e0;
  uStack_7c = *DAT_1000dfec;
  uStack_78 = DAT_1000dfe4;
  iStack_70 = DAT_1000dfe8 + ((uintptr_t)pf_png32_state+0xa4c8U);
  pf_png32_10006ab0(&uStack_94);
  bVar12 = 0;
  bVar13 = 0;
  if (param_1 != 0 && param_2 != 0) {
    uVar3 = param_3;
    if (0 < (int)param_3) {
      uVar3 = param_4;
    }
    if (0 < (int)uVar3) {
      uStack_90 = 0xffffffff;
      puVar2 = pf_png32_10005834(param_1,DAT_1000dff0);
      if (puVar2 != (uint *)0x0) {
        uStack_90 = 0xffffffff;
        bVar1 = pf_png32_1000e004(puVar2,DAT_1000dff4,8);
        if (bVar1) {
          uStack_a8 = 0;
          uStack_ac = 0x608;
          uStack_90 = 0xffffffff;
          uStack_b0 = CONCAT13((char)param_4,
                               (int3)CONCAT31(CONCAT21((short)(param_4 >> 8),(char)(param_4 >> 0x10)
                                                      ),(char)(param_4 >> 0x18)));
          pvStack_b4 = (void *)CONCAT13((char)param_3,
                                        (int3)CONCAT31(CONCAT21((short)(param_3 >> 8),
                                                                (char)(param_3 >> 0x10)),
                                                       (char)(param_3 >> 0x18)));
          uVar3 = pf_png32_1000e03c(puVar2,DAT_1000dff8,(byte *)&pvStack_b4,0xd);
          if (uVar3 != 0) {
            uStack_ac = 0;
            uStack_b0 = 0;
            pvStack_b4 = (void *)0x0;
            if ((param_3 < 0x40000000) &&
               (uVar3 = param_3 << 2 | 1, (int)((ulonglong)param_4 * (ulonglong)uVar3 >> 0x20) == 0)
               ) {
              uStack_90 = 1;
              uStack_dc = param_4;
              puStack_d8 = puVar2;
              uStack_cc = uVar3;
              uStack_c8 = param_2;
              uStack_b8 = param_3;
              pf_png32_10010150((int *)&pvStack_b4,uVar3 * param_4);
              iStack_d0 = uStack_b8 * 4 + 1;
              iStack_d4 = uStack_b8 * -4;
              pbStack_c0 = (byte *)0x1;
              uVar14 = 0;
              uVar3 = uStack_c8;
              uVar6 = uStack_dc;
              uStack_b8 = uStack_b8 * 4;
              while (uVar14 != uVar6) {
                uVar19 = 0;
                src = (void *)(uVar14 * uStack_b8 + uStack_c8);
                uVar17 = 0;
                uVar18 = 0;
                uVar15 = 0;
                uVar11 = 0;
                iVar4 = 0;
                if (uVar14 != 0) {
                  iVar4 = (int)src + iStack_d4;
                }
                uVar5 = 0;
                if (iVar4 == 0) {
                  uVar19 = 0xffffffff;
                }
                uVar20 = uVar19;
                for (; uStack_b8 != uVar5; uVar5 = uVar5 + 1) {
                  uVar7 = (uint)*(byte *)(uVar3 + uVar5);
                  iVar16 = (int)(char)*(byte *)(uVar3 + uVar5);
                  if (iVar16 < 0) {
                    uVar7 = 0x100 - uVar7;
                  }
                  bVar1 = CARRY4(uVar15,uVar7);
                  uVar15 = uVar15 + uVar7;
                  uVar7 = 0;
                  uVar11 = uVar11 + bVar1;
                  if (3 < uVar5) {
                    uVar7 = (uint)*(byte *)(uVar3 + uVar5 + -4);
                  }
                  uVar8 = iVar16 - uVar7 & 0xff;
                  if ((char)(iVar16 - uVar7) < '\0') {
                    uVar8 = 0x100 - uVar8;
                  }
                  bVar1 = CARRY4(uVar17,uVar8);
                  uVar17 = uVar17 + uVar8;
                  uVar18 = uVar18 + bVar1;
                  if (iVar4 != 0) {
                    uVar7 = iVar16 - (uint)*(byte *)(iVar4 + uVar5);
                    uVar8 = uVar7 & 0xff;
                    if ((char)uVar7 < '\0') {
                      uVar8 = 0x100 - uVar8;
                    }
                    bVar1 = CARRY4(uVar20,uVar8);
                    uVar20 = uVar20 + uVar8;
                    uVar19 = uVar19 + bVar1;
                  }
                }
                bVar1 = uVar18 <= uVar11 && (uint)(uVar15 <= uVar17) <= uVar18 - uVar11;
                if (bVar1) {
                  uVar15 = uVar17;
                  uVar11 = uVar18;
                }
                cVar10 = '\x02';
                if (uVar11 < uVar19 || uVar19 - uVar11 < (uint)(uVar15 <= uVar20)) {
                  cVar10 = bVar1;
                }
                if (iVar4 == 0) {
                  cVar10 = bVar1;
                }
                pcVar9 = (char *)((int)pvStack_b4 + uVar14 * uStack_cc);
                *pcVar9 = cVar10;
                uStack_c4 = uVar14;
                uStack_bc = uVar3;
                if (cVar10 == '\x02') {
                  if (iVar4 == 0) goto LAB_1000dc9c;
                  for (uVar14 = 0; uStack_b8 != uVar14; uVar14 = uVar14 + 1) {
                    *(char *)((int)pvStack_b4 + uVar14 + (int)pbStack_c0) =
                         *(char *)(uVar3 + uVar14) - *(char *)(iVar4 + uVar14);
                  }
                }
                else if (cVar10 == '\x01') {
                  for (uVar14 = 0; uStack_b8 != uVar14; uVar14 = uVar14 + 1) {
                    uVar11 = 0;
                    if (3 < uVar14) {
                      uVar11 = uVar3 + uVar14;
                    }
                    if (3 < uVar14) {
                      uVar11 = (uint)*(byte *)(uVar11 - 4);
                    }
                    *(char *)((int)pvStack_b4 + uVar14 + (int)pbStack_c0) =
                         *(char *)(uVar3 + uVar14) - (char)uVar11;
                  }
                }
                else {
LAB_1000dc9c:
                  uStack_90 = 2;
                  pf_png32_10003f04(pcVar9 + 1,src,uStack_b8);
                  uVar6 = uStack_dc;
                }
                pbStack_c0 = (byte *)((int)pbStack_c0 + iStack_d0);
                uVar3 = uStack_bc + uStack_b8;
                uVar14 = uStack_c4 + 1;
              }
              uStack_9c = 0;
              pvStack_a4 = (void *)0x0;
              uStack_a0 = 0;
              uStack_90 = 3;
              uStack_95 = 0x78;
              pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
              uStack_90 = 4;
              uStack_95 = 1;
              pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
              uStack_bc = 0;
              while( true ) {
                if (uStack_b0 <= uStack_bc) break;
                uStack_b8 = uStack_b0 - uStack_bc;
                uStack_90 = 5;
                if (0xfffe < uStack_b8) {
                  uStack_b8 = 0xffff;
                }
                pbStack_c0 = (byte *)(uStack_b8 + uStack_bc);
                uStack_95 = pbStack_c0 == (byte *)uStack_b0;
                pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
                uStack_90 = 6;
                uStack_95 = (undefined1)uStack_b8;
                pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
                uStack_90 = 7;
                uStack_95 = (undefined1)(uStack_b8 >> 8);
                pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
                uStack_90 = 8;
                uStack_b8 = uStack_b8 ^ 0xffff;
                uStack_95 = (undefined1)uStack_b8;
                pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
                uStack_90 = 9;
                uStack_95 = (undefined1)(uStack_b8 >> 8);
                pf_png32_10011f70((int *)&pvStack_a4,&uStack_95);
                uStack_90 = 10;
                pf_png32_10010edc((int *)&pvStack_a4,(int)pvStack_a4 + uStack_a0,
                                   (undefined1 *)((int)pvStack_b4 + uStack_bc),
                                   (undefined1 *)((int)pvStack_b4 + (int)pbStack_c0));
                uStack_bc = (uint)pbStack_c0;
              }
              uStack_b8 = pf_png32_10011ed8((int)pvStack_b4,uStack_b0);
              uStack_90 = 0xb;
              uStack_bc = uStack_a0;
              pf_png32_10010150((int *)&pvStack_a4,uStack_a0 + 4);
              *(uint *)((int)pvStack_a4 + uStack_bc) =
                   uStack_b8 << 0x18 | (uStack_b8 >> 8 & 0xff) << 0x10 |
                   (uStack_b8 >> 0x10 & 0xff) << 8 | uStack_b8 >> 0x18;
              uVar3 = 0;
              pbStack_c0 = DAT_1000dffc;
              do {
                puVar2 = puStack_d8;
                if (uStack_a0 <= uVar3) {
                  uStack_a0 = 0;
                  pf_png32_100065e4(pvStack_a4);
                  uStack_b0 = 0;
                  pf_png32_100065e4(pvStack_b4);
                  uStack_90 = 0xffffffff;
                  uVar3 = pf_png32_1000e03c(puVar2,DAT_1000e000,(byte *)0x0,0);
                  bVar12 = (byte)uVar3;
                  goto LAB_1000da84;
                }
                uStack_bc = uStack_a0 - uVar3;
                uStack_90 = 0xc;
                if (0x3ffff < uStack_bc) {
                  uStack_bc = 0x40000;
                }
                uStack_b8 = uVar3;
                uVar6 = pf_png32_1000e03c(puStack_d8,pbStack_c0,(byte *)((int)pvStack_a4 + uVar3),
                                           uStack_bc);
                uVar3 = uStack_bc + uStack_b8;
              } while (uVar6 != 0);
              bVar12 = 0;
              uStack_a0 = 0;
              pf_png32_100065e4(pvStack_a4);
              uStack_b0 = 0;
              pf_png32_100065e4(pvStack_b4);
              puVar2 = puStack_d8;
            }
            else {
              pf_png32_100065e4((void *)0x0);
            }
          }
        }
LAB_1000da84:
        uStack_90 = 0xffffffff;
        iVar4 = pf_png32_10005bf0(puVar2);
        bVar13 = bVar12 & iVar4 == 0;
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return bVar13;
}

#undef DAT_1000dfe4
#undef DAT_1000dfe8
#undef DAT_1000dfec
#undef DAT_1000dff0
#undef DAT_1000dff4
#undef DAT_1000dff8
#undef DAT_1000dffc
#undef DAT_1000e000
#undef auStack_e0
#undef uStack_dc
#undef puStack_d8
#undef iStack_d4
#undef iStack_d0
#undef uStack_cc
#undef uStack_c8
#undef uStack_c4
#undef pbStack_c0
#undef uStack_bc
#undef uStack_b8
#undef pvStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a8
#undef pvStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_95
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef uStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68


#undef DAT_1000e49c
#define DAT_1000e49c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xaffcU)))
#undef DAT_1000e4a0
#define DAT_1000e4a0 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xb000U)))
#undef DAT_1000e4a4
#define DAT_1000e4a4 (*(int *)(((uintptr_t)pf_png32_state + 0xb004U)))
#undef DAT_1000e4a8
#define DAT_1000e4a8 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xb008U)))
#undef DAT_1000e4ac
#define DAT_1000e4ac (*(int *)(((uintptr_t)pf_png32_state + 0xb00cU)))
#define auStack_f0 (*(undefined1 (*)[10])(frame + 96))
#define uStack_94 (*(undefined4 *)(frame + 188))
#define local_134 (*(uint * *)(frame + 28))
#define local_130 (*(uint *)(frame + 32))
#define local_12c (*(uint *)(frame + 36))
#define local_128 (*(uint *)(frame + 40))
#define local_124 (*(int *)(frame + 44))
#define local_120 (*(uint *)(frame + 48))
#define auStack_68 (*(undefined1 (*)[8])(frame + 232))
#define local_11c (*(void * *)(frame + 52))
#define local_118 (*(int *)(frame + 56))
#define local_110 (*(undefined4 *)(frame + 64))
#define local_10c (*(undefined1 *)(frame + 68))
#define local_10b (*(undefined1 *)(frame + 69))
#define local_10a (*(undefined1 *)(frame + 70))
#define local_109 (*(undefined1 *)(frame + 71))
#define local_108 (*(undefined1 *)(frame + 72))
#define local_107 (*(undefined1 *)(frame + 73))
#define local_106 (*(undefined1 *)(frame + 74))
#define local_105 (*(undefined1 *)(frame + 75))
#define local_104 (*(undefined4 *)(frame + 76))
#define local_100 (*(undefined4 *)(frame + 80))
#define local_fc (*(undefined1 *)(frame + 84))
#define local_fb (*(undefined1 *)(frame + 85))
#define local_fa (*(undefined1 *)(frame + 86))
#define local_f9 (*(undefined1 *)(frame + 87))
#define local_f8 (*(undefined4 *)(frame + 88))
#define local_f4 (*(undefined4 *)(frame + 92))
#define local_e6 (*(undefined1 *)(frame + 106))
#define local_e3 (*(undefined1 *)(frame + 109))
#define local_e0 (*(undefined1 *)(frame + 112))
#define local_dc (*(undefined1 *)(frame + 116))
#define local_d9 (*(undefined4 *)(frame + 119))
#define local_d5 (*(undefined1 *)(frame + 123))
#define local_a2 (*(undefined2 *)(frame + 174))
#define local_a0 (*(undefined1 *)(frame + 176))
#define local_9f (*(undefined1 *)(frame + 177))
#define local_9e (*(undefined1 *)(frame + 178))
#define local_9d (*(undefined1 *)(frame + 179))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_98 (*(undefined4 *)(frame + 184))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined1 * *)(frame + 220))
#define local_70 (*(int *)(frame + 224))
#define local_6c (*(undefined1 * *)(frame + 228))
#define auStack_140 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xac70U)
 */

uint pf_png32_1000e110(int param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_140;
  local_7c = *DAT_1000e4a8;
  local_78 = DAT_1000e49c;
  local_70 = DAT_1000e4a4 + ((uintptr_t)pf_png32_state+0xacc8U);
  pf_png32_10006ab0(&uStack_94);
  uVar8 = 0;
  local_128 = param_3;
  if ((param_3 < 0x40000000) && (param_1 != 0 && param_2 != 0)) {
    uVar1 = param_3;
    if (0 < (int)param_3) {
      uVar1 = param_4;
    }
    if (((0 < (int)uVar1) &&
        (uVar1 = param_3 * 4, (int)((ulonglong)param_4 * (ulonglong)uVar1 >> 0x20) == 0)) &&
       (uVar7 = uVar1 * param_4, uVar7 < 0xffffff86)) {
      local_90 = 0xffffffff;
      local_12c = uVar1;
      local_120 = param_2;
      puVar3 = pf_png32_10005834(param_1,DAT_1000e4ac);
      if (puVar3 != (uint *)0x0) {
        local_98 = 0x7a;
        local_a2 = 0x4d42;
        iVar4 = uVar7 + 0x7a;
        local_a0 = (undefined1)iVar4;
        iVar6 = 0;
        local_9d = (undefined1)((uint)iVar4 >> 0x18);
        local_9e = (undefined1)((uint)iVar4 >> 0x10);
        local_9f = (undefined1)((uint)iVar4 >> 8);
        local_9c = 0;
        pf_png32_10003f74(auStack_f0,0,0x4c);
        local_d5 = 0x73;
        local_d9 = DAT_1000e4a0;
        local_e0 = 0xff;
        local_e3 = 0xff;
        local_e6 = 0xff;
        local_f4 = 0xb13;
        local_f8 = 0xb13;
        local_f9 = (undefined1)(uVar7 >> 0x18);
        local_fa = (undefined1)(uVar7 >> 0x10);
        local_fb = (undefined1)(uVar7 >> 8);
        local_100 = 3;
        local_dc = 0;
        local_104 = 0x200001;
        local_110 = 0x6c;
        iVar4 = -param_4;
        local_108 = (undefined1)iVar4;
        local_fc = (undefined1)uVar7;
        local_105 = (undefined1)((uint)iVar4 >> 0x18);
        local_106 = (undefined1)((uint)iVar4 >> 0x10);
        local_107 = (undefined1)((uint)iVar4 >> 8);
        local_10c = (undefined1)local_128;
        local_109 = (undefined1)(local_128 >> 0x18);
        local_10a = (undefined1)(local_128 >> 0x10);
        local_10b = (undefined1)(local_128 >> 8);
        local_90 = 0xffffffff;
        bVar2 = pf_png32_1000e004(puVar3,(int)&local_a2,0xe);
        uVar8 = 0;
        if (bVar2) {
          local_90 = 0xffffffff;
          bVar2 = pf_png32_1000e004(puVar3,(int)&local_110,0x6c);
          uVar8 = (uint)bVar2;
        }
        local_90 = 0xffffffff;
        pf_png32_1001021c(&local_11c,local_12c);
        local_134 = puVar3;
        local_130 = param_4;
        while ((uVar8 != 0 && (iVar6 < (int)local_130))) {
          iVar4 = 3;
          for (uVar8 = local_128; uVar8 != 0; uVar8 = uVar8 - 1) {
            iVar5 = local_120 + iVar4;
            *(undefined1 *)((int)local_11c + iVar4 + -3) = *(undefined1 *)(iVar5 + -1);
            *(undefined1 *)((int)local_11c + iVar4 + -2) = *(undefined1 *)(iVar5 + -2);
            *(undefined1 *)((int)local_11c + iVar4 + -1) = *(undefined1 *)(iVar5 + -3);
            *(undefined1 *)((int)local_11c + iVar4) = *(undefined1 *)(local_120 + iVar4);
            iVar4 = iVar4 + 4;
          }
          local_90 = 2;
          local_124 = iVar6;
          bVar2 = pf_png32_1000e004(local_134,(int)local_11c,local_118);
          uVar8 = (uint)bVar2;
          local_120 = local_120 + local_12c;
          iVar6 = local_124 + 1;
        }
        local_90 = 1;
        local_120 = uVar8;
        iVar4 = pf_png32_10005bf0(local_134);
        uVar8 = local_120;
        local_118 = 0;
        pf_png32_100065e4(local_11c);
        uVar8 = uVar8 & iVar4 == 0;
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return uVar8;
}

#undef DAT_1000e49c
#undef DAT_1000e4a0
#undef DAT_1000e4a4
#undef DAT_1000e4a8
#undef DAT_1000e4ac
#undef auStack_f0
#undef uStack_94
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef auStack_68
#undef local_11c
#undef local_118
#undef local_110
#undef local_10c
#undef local_10b
#undef local_10a
#undef local_109
#undef local_108
#undef local_107
#undef local_106
#undef local_105
#undef local_104
#undef local_100
#undef local_fc
#undef local_fb
#undef local_fa
#undef local_f9
#undef local_f8
#undef local_f4
#undef local_e6
#undef local_e3
#undef local_e0
#undef local_dc
#undef local_d9
#undef local_d5
#undef local_a2
#undef local_a0
#undef local_9f
#undef local_9e
#undef local_9d
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_140


#undef DAT_1000e75c
#define DAT_1000e75c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xb2bcU)))
#undef DAT_1000e760
#define DAT_1000e760 (*(int *)(((uintptr_t)pf_png32_state + 0xb2c0U)))
#undef DAT_1000e764
#define DAT_1000e764 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xb2c4U)))
#undef DAT_1000e768
#define DAT_1000e768 (*(int *)(((uintptr_t)pf_png32_state + 0xb2c8U)))
#undef DAT_1000e76c
#define DAT_1000e76c (*(int *)(((uintptr_t)pf_png32_state + 0xb2ccU)))
#define auStack_d0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 76))
#define auStack_68 (*(undefined1 (*)[8])(frame + 120))
#define local_cc (*(uint *)(frame + 20))
#define local_c8 (*(uint * *)(frame + 24))
#define local_c4 (*(int *)(frame + 28))
#define local_c0 (*(int *)(frame + 32))
#define local_bc (*(int *)(frame + 36))
#define local_b8 (*(uint *)(frame + 40))
#define local_b4 (*(void * *)(frame + 44))
#define local_b0 (*(int *)(frame + 48))
#define local_a8 (*(undefined4 *)(frame + 56))
#define local_a4 (*(undefined4 *)(frame + 60))
#define local_a0 (*(undefined4 *)(frame + 64))
#define local_9c (*(undefined1 *)(frame + 68))
#define local_9b (*(undefined1 *)(frame + 69))
#define local_9a (*(undefined1 *)(frame + 70))
#define local_99 (*(undefined1 *)(frame + 71))
#define local_98 (*(undefined2 *)(frame + 72))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_7c (*(undefined4 *)(frame + 100))
#define local_78 (*(undefined4 *)(frame + 104))
#define local_74 (*(undefined1 * *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(undefined1 * *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb010U)
 */

uint pf_png32_1000e4b0(int param_1,uint param_2,int param_3,int param_4)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_d0;
  local_7c = *DAT_1000e764;
  local_78 = DAT_1000e75c;
  local_70 = DAT_1000e760 + ((uintptr_t)pf_png32_state+0xb068U);
  local_c4 = param_3;
  local_c0 = param_4;
  pf_png32_10006ab0(&uStack_94);
  uVar6 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar7 = local_c4;
    if (0 < local_c4) {
      iVar7 = local_c0;
    }
    if (0 < iVar7) {
      local_90 = 0xffffffff;
      puVar2 = pf_png32_10005834(param_1,DAT_1000e768);
      iVar7 = local_c4;
      if (puVar2 != (uint *)0x0) {
        local_98 = 0x2820;
        local_a4 = 0;
        local_a0 = 0;
        local_90 = 0xffffffff;
        local_a8 = 0x20000;
        local_9a = (undefined1)local_c0;
        local_9c = (undefined1)local_c4;
        local_99 = (undefined1)((uint)local_c0 >> 8);
        local_9b = (undefined1)((uint)local_c4 >> 8);
        bVar1 = pf_png32_1000e004(puVar2,(int)&local_a8,0x12);
        local_cc = iVar7 << 2;
        local_90 = 0xffffffff;
        pf_png32_1001021c(&local_b4,local_cc);
        iVar7 = 0;
        local_c8 = puVar2;
        while ((bVar1 != false && (iVar7 < local_c0))) {
          iVar3 = 3;
          for (iVar4 = local_c4; iVar4 != 0; iVar4 = iVar4 + -1) {
            iVar5 = param_2 + iVar3;
            *(undefined1 *)((int)local_b4 + iVar3 + -3) = *(undefined1 *)(iVar5 + -1);
            *(undefined1 *)((int)local_b4 + iVar3 + -2) = *(undefined1 *)(iVar5 + -2);
            *(undefined1 *)((int)local_b4 + iVar3 + -1) = *(undefined1 *)(iVar5 + -3);
            *(undefined1 *)((int)local_b4 + iVar3) = *(undefined1 *)(param_2 + iVar3);
            iVar3 = iVar3 + 4;
          }
          local_90 = 1;
          local_bc = iVar7;
          local_b8 = param_2;
          bVar1 = pf_png32_1000e004(local_c8,(int)local_b4,local_b0);
          param_2 = local_b8 + local_cc;
          iVar7 = local_bc + 1;
        }
        uVar6 = 0;
        if (bVar1 != false) {
          local_90 = 2;
          bVar1 = pf_png32_1000e004(local_c8,DAT_1000e76c,0x1a);
          uVar6 = (uint)bVar1;
        }
        local_90 = 3;
        local_b8 = uVar6;
        iVar7 = pf_png32_10005bf0(local_c8);
        uVar6 = local_b8;
        local_b0 = 0;
        pf_png32_100065e4(local_b4);
        uVar6 = uVar6 & iVar7 == 0;
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return uVar6;
}

#undef DAT_1000e75c
#undef DAT_1000e760
#undef DAT_1000e764
#undef DAT_1000e768
#undef DAT_1000e76c
#undef auStack_d0
#undef uStack_94
#undef auStack_68
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_9b
#undef local_9a
#undef local_99
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c


#undef DAT_1000f21c
#define DAT_1000f21c (*(double *)(((uintptr_t)pf_png32_state + 0xbd7cU)))
#undef DAT_1000f224
#define DAT_1000f224 (*(double *)(((uintptr_t)pf_png32_state + 0xbd84U)))
#undef DAT_1000f22c
#define DAT_1000f22c (*(double *)(((uintptr_t)pf_png32_state + 0xbd8cU)))
#undef DAT_1000f234
#define DAT_1000f234 (*(double *)(((uintptr_t)pf_png32_state + 0xbd94U)))
#undef DAT_1000f23c
#define DAT_1000f23c (*(double *)(((uintptr_t)pf_png32_state + 0xbd9cU)))
#undef DAT_1000f25c
#define DAT_1000f25c (*(double *)(((uintptr_t)pf_png32_state + 0xbdbcU)))
#undef DAT_1000f264
#define DAT_1000f264 (*(double *)(((uintptr_t)pf_png32_state + 0xbdc4U)))
#undef DAT_1000f26c
#define DAT_1000f26c (*(double *)(((uintptr_t)pf_png32_state + 0xbdccU)))
#undef DAT_1000f41c
#define DAT_1000f41c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xbf7cU)))
#undef DAT_1000f420
#define DAT_1000f420 (*(void * *)(((uintptr_t)pf_png32_state + 0xbf80U)))
#undef DAT_1000f424
#define DAT_1000f424 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xbf84U)))
#undef DAT_1000f428
#define DAT_1000f428 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xbf88U)))
#undef DAT_1000f42c
#define DAT_1000f42c (*(void * *)(((uintptr_t)pf_png32_state + 0xbf8cU)))
#undef DAT_1000f430
#define DAT_1000f430 (*(double *)(((uintptr_t)pf_png32_state + 0xbf90U)))
#undef DAT_1000f438
#define DAT_1000f438 (*(int *)(((uintptr_t)pf_png32_state + 0xbf98U)))
#undef DAT_1000f43c
#define DAT_1000f43c (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xbf9cU)))
#undef DAT_1000f440
#define DAT_1000f440 (*(int *)(((uintptr_t)pf_png32_state + 0xbfa0U)))
#undef DAT_1000f444
#define DAT_1000f444 (*(int *)(((uintptr_t)pf_png32_state + 0xbfa4U)))
#undef DAT_1000f448
#define DAT_1000f448 (*(int *)(((uintptr_t)pf_png32_state + 0xbfa8U)))
#undef DAT_1000f44c
#define DAT_1000f44c (*(int *)(((uintptr_t)pf_png32_state + 0xbfacU)))
#undef DAT_1000f450
#define DAT_1000f450 (*(int *)(((uintptr_t)pf_png32_state + 0xbfb0U)))
#undef DAT_1000f454
#define DAT_1000f454 (*(int *)(((uintptr_t)pf_png32_state + 0xbfb4U)))
#define local_17f0 (*(uint *)(frame + 192))
#define local_17e8 (*(undefined1 (*)[512])(frame + 200))
#define local_15e8 (*(void * *)(frame + 712))
#define auStackY_18a0 (*(undefined1 (*)[128])(frame + 16))
#define local_15e0 (*(undefined2 *)(frame + 720))
#define local_13e8 (*(undefined4 *)(frame + 1224))
#define local_13e0 (*(undefined4 *)(frame + 1232))
#define local_13dc (*(undefined1 *)(frame + 1236))
#define local_10e8 (*(int (*)[3])(frame + 1992))
#define uStack_15e4 (*(undefined4 *)(frame + 716))
#define iStack_13e4 (*(int *)(frame + 1228))
#define local_10dc (*(void * *)(frame + 2004))
#define local_10d8 (*(int *)(frame + 2008))
#define local_10d4 (*(undefined4 *)(frame + 2012))
#define local_10d0 (*(byte *)(frame + 2016))
#define uStack_13db (*(undefined1 *)(frame + 1237))
#define local_10cc (*(int *)(frame + 2020))
#define uStack_13da (*(undefined1 *)(frame + 1238))
#define aiStack_11e8 (*(int (*)[64])(frame + 1736))
#define local_10c8 (*(undefined1 * *)(frame + 2024))
#define local_10c4 (*(int *)(frame + 2028))
#define local_10c0 (*(undefined4 *)(frame + 2032))
#define local_10bc (*(undefined1 * *)(frame + 2036))
#define local_10b8 (*(int *)(frame + 2040))
#define local_10b4 (*(undefined4 *)(frame + 2044))
#define local_10b0 (*(undefined1 * *)(frame + 2048))
#define local_10ac (*(int *)(frame + 2052))
#define local_10a8 (*(undefined4 *)(frame + 2056))
#define local_10a4 (*(undefined1 * *)(frame + 2060))
#define local_10a0 (*(int *)(frame + 2064))
#define local_109c (*(undefined4 *)(frame + 2068))
#define local_90 (*(undefined4 *)(frame + 6176))
#define local_7c (*(undefined4 *)(frame + 6196))
#define local_78 (*(undefined4 *)(frame + 6200))
#define local_74 (*(undefined1 * *)(frame + 6204))
#define local_70 (*(int *)(frame + 6208))
#define local_6c (*(undefined1 * *)(frame + 6212))
#define auStack_1098 (*(undefined1 (*)[2048])(frame + 2072))
#define auStack_898 (*(undefined1 (*)[2052])(frame + 4120))
#define uStack_94 (*(undefined4 *)(frame + 6172))
#define auStack_68 (*(undefined1 (*)[8])(frame + 6216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xb2d0U)
 */

byte pf_png32_1000e770(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[6352] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 extraout_r3 = 0;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 extraout_r3_00 = 0;
  uint uVar21;
  int iVar22;
  byte bVar23;
  undefined1 *puVar24;
  void **ppvVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;

  local_74 = auStack_68 + 0x60;
  local_6c = auStackY_18a0 + 0x80;
  local_7c = *DAT_1000f43c;
  local_78 = DAT_1000f41c;
  local_70 = DAT_1000f438 + ((uintptr_t)pf_png32_state+0xb334U);
  pf_png32_10006ab0(&uStack_94);
  bVar23 = 0;
  iVar16 = param_4;
  if (param_4 < 0x10000) {
    iVar16 = param_3;
  }
  if ((iVar16 < 0x10000) && (param_1 != 0 && param_2 != 0)) {
    iVar16 = param_3;
    if (0 < param_3) {
      iVar16 = param_4;
    }
    if (0 < iVar16) {
      local_90 = 0xffffffff;
      puVar11 = pf_png32_10005834(param_1,DAT_1000f440);
      if (puVar11 != (uint *)0x0) {
        pf_png32_10003f74(auStack_898,0,0x800);
        pf_png32_10003f74(auStack_1098,0,0x800);
        local_109c = 0;
        local_10a0 = 0;
        local_10a4 = (undefined1 *)0x0;
        local_10a8 = 0;
        local_10ac = 0;
        local_10b0 = (undefined1 *)0x0;
        local_10b4 = 0;
        local_10b8 = 0;
        local_10bc = (undefined1 *)0x0;
        local_90 = 1;
        local_10c0 = 0;
        local_10c4 = 0;
        local_10c8 = (undefined1 *)0x0;
        pf_png32_10012cf4(1,(int)auStack_898,(int *)&local_10a4,(int *)&local_10b0);
        local_90 = 2;
        pf_png32_10012cf4(0,(int)auStack_1098,(int *)&local_10bc,(int *)&local_10c8);
        local_90 = 3;
        bVar9 = pf_png32_1000e004(puVar11,DAT_1000f444,2);
        uVar21 = 0;
        if (bVar9) {
          local_90 = 4;
          local_13dc = 0;
          uStack_13db = 0;
          local_13e0 = 0x1000100;
          iStack_13e4 = 0x10100;
          local_13e8 = DAT_1000f420;
          pf_png32_100132dc(&local_15e8,(int)&local_13e8,0xe);
          local_90 = 5;
          uVar12 = pf_png32_10012e24(puVar11,0xe0,&local_15e8);
          uVar21 = 0;
          uStack_15e4 = 0;
          pf_png32_100065e4(local_15e8);
          if (uVar12 != 0) {
            local_13e0 = 0;
            iStack_13e4 = 0;
            local_13e8 = (void *)0x0;
            local_90 = 6;
            local_15e8 = (void *)((uint)local_15e8 & 0xffffff00);
            pf_png32_10011f70(&local_13e8,(undefined1 *)&local_15e8);
            iVar8 = DAT_1000f450;
            iVar22 = DAT_1000f44c;
            iVar16 = DAT_1000f448;
            for (iVar18 = 0; iVar18 != 0x40; iVar18 = iVar18 + 1) {
              local_90 = 8;
              pf_png32_100120bc(&local_13e8,(undefined1 *)(iVar16 + *(int *)(iVar8 + iVar18 * 4)));
            }
            local_90 = 7;
            local_15e8 = (void *)CONCAT31(PF_PART3(local_15e8, 1),1);
            pf_png32_10011f70(&local_13e8,(undefined1 *)&local_15e8);
            for (iVar16 = 0; iVar16 != 0x40; iVar16 = iVar16 + 1) {
              local_90 = 10;
              pf_png32_100120bc(&local_13e8,(undefined1 *)(iVar22 + *(int *)(iVar8 + iVar16 * 4)));
            }
            local_90 = 9;
            uVar12 = pf_png32_10012e24(puVar11,0xdb,&local_13e8);
            uVar21 = 0;
            iStack_13e4 = 0;
            pf_png32_100065e4(local_13e8);
            if (uVar12 != 0) {
              local_90 = 0xb;
              uStack_13db = 0x11;
              uStack_13da = 1;
              local_13dc = (undefined1)((uint)DAT_1000f424 >> 0x18);
              PF_PART1(local_13e0, 0) = (undefined1)((uint)DAT_1000f428 >> 0x18);
              local_13e0 = CONCAT31((int3)DAT_1000f424,(undefined1)local_13e0);
              iStack_13e4 = CONCAT31((int3)DAT_1000f428,(char)param_3);
              local_13e8 = (void *)CONCAT13((char)((uint)param_3 >> 8),CONCAT12((char)param_4,8));
              PF_PART2(local_13e8, 0) = CONCAT11((char)((uint)param_4 >> 8),8);
              pf_png32_100132dc(&local_15e8,(int)&local_13e8,0xf);
              local_90 = 0xc;
              uVar12 = pf_png32_10012e24(puVar11,0xc0,&local_15e8);
              uVar21 = 0;
              uStack_15e4 = 0;
              pf_png32_100065e4(local_15e8);
              if (uVar12 != 0) {
                local_13e0 = 0;
                iStack_13e4 = 0;
                local_13e8 = (void *)0x0;
                local_90 = 0xd;
                local_15e8 = (void *)((uint)local_15e8 & 0xffffff00);
                pf_png32_10011f70(&local_13e8,(undefined1 *)&local_15e8);
                local_90 = 0xe;
                pf_png32_10012e9c(&local_13e8,(int)local_13e8 + iStack_13e4,local_10a4,
                                   local_10a4 + local_10a0);
                local_90 = 0xf;
                pf_png32_10012e9c(&local_13e8,(int)local_13e8 + iStack_13e4,local_10b0,
                                   local_10b0 + local_10ac);
                local_90 = 0x10;
                uVar12 = pf_png32_10012e24(puVar11,0xc4,&local_13e8);
                uVar21 = 0;
                iStack_13e4 = 0;
                pf_png32_100065e4(local_13e8);
                if (uVar12 != 0) {
                  local_13e0 = 0;
                  iStack_13e4 = 0;
                  local_13e8 = (void *)0x0;
                  local_90 = 0x11;
                  local_15e8 = (void *)CONCAT31(PF_PART3(local_15e8, 1),0x10);
                  pf_png32_10011f70(&local_13e8,(undefined1 *)&local_15e8);
                  local_90 = 0x12;
                  pf_png32_10012e9c(&local_13e8,(int)local_13e8 + iStack_13e4,local_10bc,
                                     local_10bc + local_10b8);
                  local_90 = 0x13;
                  pf_png32_10012e9c(&local_13e8,(int)local_13e8 + iStack_13e4,local_10c8,
                                     local_10c8 + local_10c4);
                  local_90 = 0x14;
                  uVar12 = pf_png32_10012e24(puVar11,0xc4,&local_13e8);
                  uVar21 = 0;
                  iStack_13e4 = 0;
                  pf_png32_100065e4(local_13e8);
                  if (uVar12 != 0) {
                    local_90 = 0x15;
                    local_15e0 = 0x3f;
                    uStack_15e4 = 0x300;
                    local_15e8 = DAT_1000f42c;
                    pf_png32_100132dc(&local_13e8,(int)&local_15e8,10);
                    local_90 = 0x16;
                    uVar21 = pf_png32_10012e24(puVar11,0xda,&local_13e8);
                    iStack_13e4 = 0;
                    pf_png32_100065e4(local_13e8);
                  }
                }
              }
            }
          }
        }
        bVar9 = false;
        local_10cc = 0;
        local_10d0 = 0;
        local_10d4 = 0;
        local_10d8 = 0;
        local_10dc = (void *)0x0;
        local_10e8[2] = 0;
        local_10e8[1] = 0;
        local_10e8[0] = 0;
        pf_png32_10003f74(aiStack_11e8,0,0x100);
        dVar7 = DAT_1000f26c;
        dVar6 = DAT_1000f264;
        dVar5 = DAT_1000f25c;
        dVar4 = DAT_1000f23c;
        dVar3 = DAT_1000f234;
        dVar2 = DAT_1000f22c;
        dVar1 = DAT_1000f224;
        if ((uVar21 & 1) != 0) {
          uVar19 = extraout_r3;
          dVar29 = DAT_1000f21c;
          for (uVar21 = 0; uVar21 != param_4 + 7U >> 3; uVar21 = uVar21 + 1) {
            local_17f0 = 0;
            for (uVar12 = 0; uVar12 != param_3 + 7U >> 3; uVar12 = uVar12 + 1) {
              puVar24 = local_17e8;
              ppvVar25 = &local_15e8;
              puVar20 = &local_13e8;
              for (iVar16 = 0; iVar16 != 8; iVar16 = iVar16 + 1) {
                iVar22 = 0;
                uVar13 = iVar16 + uVar21 * 8;
                if (param_4 - 1U <= uVar13) {
                  uVar13 = param_4 - 1U;
                }
                uVar14 = local_17f0;
                for (; iVar22 != 0x40; iVar22 = iVar22 + 8) {
                  uVar15 = param_3 - 1U;
                  if (uVar14 < param_3 - 1U) {
                    uVar15 = uVar14;
                  }
                  uVar14 = uVar14 + 1;
                  pbVar17 = (byte *)(param_2 + (uVar15 + uVar13 * param_3) * 4);
                  dVar26 = (double)VectorUnsignedToFloat
                                             ((uint)pbVar17[1],(byte)(in_fpscr >> 0x16) & 3);
                  dVar27 = (double)VectorUnsignedToFloat
                                             ((uint)*pbVar17,(byte)(in_fpscr >> 0x16) & 3);
                  dVar28 = (double)VectorUnsignedToFloat
                                             ((uint)pbVar17[2],(byte)(in_fpscr >> 0x16) & 3);
                  *(double *)((int)ppvVar25 + iVar22) =
                       dVar26 * dVar29 + dVar27 * dVar4 + dVar28 * 0.5;
                  *(double *)(puVar24 + iVar22) = dVar26 * dVar1 + dVar27 * 0.5 + dVar28 * dVar2;
                  *(double *)((int)puVar20 + iVar22) =
                       dVar26 * dVar3 + dVar27 * dVar5 + dVar28 * dVar6 + dVar7;
                }
                puVar24 = puVar24 + 0x40;
                ppvVar25 = ppvVar25 + 0x10;
                puVar20 = puVar20 + 0x10;
              }
              local_90 = 0x18;
              pf_png32_10012f74((int)&local_13e8,DAT_1000f448,(int)aiStack_11e8);
              local_90 = 0x19;
              pf_png32_10013178((int)&local_10dc,aiStack_11e8,local_10e8 + 2,(int)auStack_898,
                                 (int)auStack_1098);
              local_90 = 0x1a;
              pf_png32_10012f74((int)&local_15e8,DAT_1000f44c,(int)aiStack_11e8);
              local_90 = 0x1b;
              pf_png32_10013178((int)&local_10dc,aiStack_11e8,local_10e8 + 1,(int)auStack_898,
                                 (int)auStack_1098);
              local_90 = 0x1c;
              pf_png32_10012f74((int)local_17e8,DAT_1000f44c,(int)aiStack_11e8);
              local_90 = 0x1d;
              pf_png32_10013178((int)&local_10dc,aiStack_11e8,local_10e8,(int)auStack_898,
                                 (int)auStack_1098);
              local_17f0 = local_17f0 + 8;
              uVar19 = extraout_r3_00;
              dVar29 = DAT_1000f430;
            }
          }
          if (local_10cc != 0) {
            local_90 = 0x17;
            uVar21 = (uint)local_10d0;
            local_10d0 = ~(byte)(-1 << (8U - local_10cc & 0xff)) |
                         local_10d0 << (8U - local_10cc & 0xff);
            pf_png32_100133d8((int *)&local_10dc,local_10d0,uVar21,(int3)uVar19);
            local_10cc = 0;
            local_10d0 = 0;
          }
          local_90 = 0x1e;
          bVar10 = pf_png32_1000e004(puVar11,(int)local_10dc,local_10d8);
          bVar9 = false;
          if (bVar10) {
            local_90 = 0x1f;
            bVar9 = pf_png32_1000e004(puVar11,DAT_1000f454,2);
          }
        }
        local_90 = 0x20;
        iVar16 = pf_png32_10005bf0(puVar11);
        local_10d8 = 0;
        pf_png32_100065e4(local_10dc);
        local_10c4 = 0;
        pf_png32_100065e4(local_10c8);
        local_10b8 = 0;
        pf_png32_100065e4(local_10bc);
        local_10ac = 0;
        pf_png32_100065e4(local_10b0);
        local_10a0 = 0;
        pf_png32_100065e4(local_10a4);
        bVar23 = bVar9 & iVar16 == 0;
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return bVar23;
}

#undef DAT_1000f21c
#undef DAT_1000f224
#undef DAT_1000f22c
#undef DAT_1000f234
#undef DAT_1000f23c
#undef DAT_1000f25c
#undef DAT_1000f264
#undef DAT_1000f26c
#undef DAT_1000f41c
#undef DAT_1000f420
#undef DAT_1000f424
#undef DAT_1000f428
#undef DAT_1000f42c
#undef DAT_1000f430
#undef DAT_1000f438
#undef DAT_1000f43c
#undef DAT_1000f440
#undef DAT_1000f444
#undef DAT_1000f448
#undef DAT_1000f44c
#undef DAT_1000f450
#undef DAT_1000f454
#undef local_17f0
#undef local_17e8
#undef local_15e8
#undef auStackY_18a0
#undef local_15e0
#undef local_13e8
#undef local_13e0
#undef local_13dc
#undef local_10e8
#undef uStack_15e4
#undef iStack_13e4
#undef local_10dc
#undef local_10d8
#undef local_10d4
#undef local_10d0
#undef uStack_13db
#undef local_10cc
#undef uStack_13da
#undef aiStack_11e8
#undef local_10c8
#undef local_10c4
#undef local_10c0
#undef local_10bc
#undef local_10b8
#undef local_10b4
#undef local_10b0
#undef local_10ac
#undef local_10a8
#undef local_10a4
#undef local_10a0
#undef local_109c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_1098
#undef auStack_898
#undef uStack_94
#undef auStack_68


#undef DAT_1000fcf8
#define DAT_1000fcf8 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xc858U)))
#undef DAT_1000fcfc
#define DAT_1000fcfc (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xc85cU)))
#undef DAT_1000fd00
#define DAT_1000fd00 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xc860U)))
#undef DAT_1000fd04
#define DAT_1000fd04 (*(void * *)(((uintptr_t)pf_png32_state + 0xc864U)))
#undef DAT_1000fd08
#define DAT_1000fd08 (*(int *)(((uintptr_t)pf_png32_state + 0xc868U)))
#undef DAT_1000fd0c
#define DAT_1000fd0c (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xc86cU)))
#undef DAT_1000fd10
#define DAT_1000fd10 (*(char * *)(((uintptr_t)pf_png32_state + 0xc870U)))
#undef DAT_1000fd14
#define DAT_1000fd14 (*(int *)(((uintptr_t)pf_png32_state + 0xc874U)))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
#define local_f4 (*(int *)(frame + 28))
#define local_f0 (*(int *)(frame + 32))
#define local_ec (*(uint *)(frame + 36))
#define local_e8 (*(uint * *)(frame + 40))
#define local_e4 (*(uint * *)(frame + 44))
#define local_e0 (*(uint * *)(frame + 48))
#define local_dc (*(uint *)(frame + 52))
#define local_d8 (*(uint *)(frame + 56))
#define local_d4 (*(int *)(frame + 60))
#define local_d0 (*(uint * *)(frame + 64))
#define local_cc (*(uint * *)(frame + 68))
#define local_c8 (*(uint *)(frame + 72))
#define local_c4 (*(uint * *)(frame + 76))
#define local_c0 (*(int *)(frame + 80))
#define local_bc (*(char * *)(frame + 84))
#define auStack_100 (*(undefined1 (*)[12])(frame + 16))
#define local_b8 (*(uint * *)(frame + 88))
#define local_b4 (*(uint * *)(frame + 92))
#define local_b0 (*(void * *)(frame + 96))
#define local_ac (*(undefined4 *)(frame + 100))
#define local_a8 (*(undefined4 *)(frame + 104))
#define local_a4 (*(undefined2 *)(frame + 108))
#define local_a0 (*(void * *)(frame + 112))
#define local_9c (*(uint * *)(frame + 116))
#define local_98 (*(undefined4 *)(frame + 120))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(undefined4 *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xbfb8U)
 */

uint pf_png32_1000f458(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = *DAT_1000fd0c;
  local_78 = DAT_1000fcf8;
  local_70 = DAT_1000fd08 + ((uintptr_t)pf_png32_state+0xc010U);
  local_e8 = (uint *)param_3;
  local_e4 = (uint *)param_4;
  pf_png32_10006ab0(&uStack_94);
  uVar6 = 0;
  local_f4 = param_1;
  if (param_1 != 0 && param_2 != (undefined1 *)0x0) {
    puVar3 = local_e8;
    if (0 < (int)local_e8) {
      puVar3 = local_e4;
    }
    local_e0 = (uint *)param_2;
    if (0 < (int)puVar3) {
      uVar5 = (uint)((int)puVar3 + 0x3fU) >> 6;
      uVar7 = (uint)((int)local_e8 + 0x3fU) >> 6;
      if (((int)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x20) == 0) &&
         (local_b8 = (uint *)(uVar5 * uVar7), local_b8 < (uint *)0x40000000)) {
        local_98 = 0;
        local_9c = (uint *)0x0;
        local_a0 = (void *)0x0;
        local_90 = 1;
        local_a4 = 0x33;
        local_a8 = DAT_1000fcfc;
        local_ac = DAT_1000fd00;
        local_b0 = DAT_1000fd04;
        local_ec = uVar5;
        local_dc = uVar7;
        pf_png32_10013418((int *)&local_a0,0,(undefined1 *)&local_b0,0xe);
        local_90 = 2;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e8);
        local_90 = 3;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e4);
        local_90 = 4;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 5;
        pf_png32_10013420((uint *)&local_a0,0x11);
        local_90 = 6;
        pf_png32_10013420((uint *)&local_a0,1);
        local_90 = 7;
        local_b0 = (void *)((uint)local_b0 & 0xffffff00);
        pf_png32_10011f70((int *)&local_a0,(undefined1 *)&local_b0);
        local_90 = 8;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 9;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 10;
        local_b4 = local_9c;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0xb;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0xc;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0xd;
        pf_png32_10013420((uint *)&local_a0,0);
        pf_png32_10013450((int *)&local_a0,(int)local_b4,(uint)local_9c);
        local_90 = 0xe;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e8);
        local_90 = 0xf;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e4);
        local_90 = 0x10;
        pf_png32_10013420((uint *)&local_a0,1);
        local_90 = 0x11;
        local_bc = DAT_1000fd10;
        local_b4 = (uint *)pf_png32_100040a4(DAT_1000fd10);
        local_90 = 0x12;
        pf_png32_10013420((uint *)&local_a0,(int)local_b4 + 1);
        local_90 = 0x13;
        pf_png32_1001346c((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),local_bc,
                           local_bc + (int)local_b4);
        local_90 = 0x14;
        local_b0 = (void *)((uint)local_b0 & 0xffffff00);
        pf_png32_10011f70((int *)&local_a0,(undefined1 *)&local_b0);
        local_90 = 0x15;
        pf_png32_10013420((uint *)&local_a0,6);
        local_90 = 0x16;
        pf_png32_10013420((uint *)&local_a0,4);
        local_90 = 0x17;
        pf_png32_10013420((uint *)&local_a0,0xff);
        local_90 = 0x18;
        pf_png32_10013420((uint *)&local_a0,7);
        local_90 = 0x19;
        pf_png32_10013420((uint *)&local_a0,4);
        local_90 = 0x1a;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x1b;
        pf_png32_10013420((uint *)&local_a0,8);
        local_90 = 0x1c;
        pf_png32_10013420((uint *)&local_a0,4);
        local_90 = 0x1d;
        pf_png32_10013420((uint *)&local_a0,1);
        local_90 = 0x1e;
        pf_png32_10013420((uint *)&local_a0,0xf);
        local_90 = 0x1f;
        pf_png32_10013420((uint *)&local_a0,8);
        local_90 = 0x20;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x21;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x22;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x23;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x24;
        local_b4 = local_9c;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x25;
        pf_png32_10013420((uint *)&local_a0,0);
        pf_png32_10013450((int *)&local_a0,(int)local_b4,(uint)local_9c);
        local_90 = 0x26;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e8);
        local_90 = 0x27;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e4);
        local_90 = 0x28;
        pf_png32_10013420((uint *)&local_a0,4);
        local_90 = 0x29;
        local_b4 = local_9c;
        pf_png32_10013420((uint *)&local_a0,0);
        local_90 = 0x2a;
        pf_png32_10013420((uint *)&local_a0,0);
        pf_png32_10013450((int *)&local_a0,(int)local_b4,(uint)local_9c);
        local_90 = 0x2b;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e8);
        local_90 = 0x2c;
        pf_png32_10013420((uint *)&local_a0,(uint)local_e4);
        local_90 = 0x2d;
        pf_png32_10013544((int *)&local_b0,(uint)local_b8);
        puVar3 = (uint *)0x0;
        while (local_b8 != puVar3) {
          *(uint **)((int)local_b0 + (int)puVar3 * 4) = local_9c;
          local_90 = 0x2f;
          local_b4 = puVar3;
          pf_png32_10013420((uint *)&local_a0,0);
          puVar3 = (uint *)((int)local_b4 + 1);
        }
        local_90 = 0x2e;
        pf_png32_10013420((uint *)&local_a0,0);
        uVar5 = 0;
        local_f0 = (int)local_e8 << 8;
        local_c0 = (int)local_e8 << 2;
        puVar3 = local_e4;
        uVar6 = local_dc;
        while( true ) {
          local_d0 = (uint *)0x40;
          if (puVar3 < (uint *)0x40) {
            local_d0 = puVar3;
          }
          if (uVar5 == local_ec) break;
          local_d4 = uVar5 * uVar6;
          uVar7 = 0;
          local_c4 = local_e0;
          puVar4 = local_e8;
          local_e4 = puVar3;
          local_d8 = uVar5;
          while( true ) {
            puVar3 = (uint *)0x40;
            if (puVar4 < (uint *)0x40) {
              puVar3 = puVar4;
            }
            if (uVar7 == uVar6) break;
            local_bc = (char *)((int)puVar3 << 2);
            local_cc = puVar4;
            local_c8 = uVar7;
            pf_png32_10013450((int *)&local_a0,*(int *)((int)local_b0 + uVar7 * 4 + local_d4 * 4),
                               (uint)local_9c);
            puVar3 = local_d0;
            puVar4 = local_c4;
            while (puVar3 != (uint *)0x0) {
              local_90 = 0x31;
              local_b8 = puVar4;
              local_b4 = puVar3;
              pf_png32_10010edc((int *)&local_a0,(int)((int)local_a0 + (int)local_9c),
                                 (undefined1 *)puVar4,(char *)((int)puVar4 + (int)local_bc));
              puVar4 = (uint *)((int)local_b8 + local_c0);
              puVar3 = (uint *)((int)local_b4 - 1);
            }
            puVar4 = local_cc + -0x10;
            local_c4 = local_c4 + 0x40;
            uVar7 = local_c8 + 1;
            uVar6 = local_dc;
          }
          uVar5 = local_d8 + 1;
          local_e0 = (uint *)((int)local_e0 + local_f0);
          puVar3 = local_e4 + -0x10;
        }
        local_90 = 0x30;
        puVar3 = pf_png32_10005834(local_f4,DAT_1000fd14);
        uVar6 = 0;
        if (puVar3 != (uint *)0x0) {
          local_90 = 0x32;
          local_b4 = puVar3;
          bVar1 = pf_png32_1000e004(puVar3,(int)local_a0,(int)local_9c);
          local_b8 = (uint *)(uint)bVar1;
          local_90 = 0x33;
          iVar2 = pf_png32_10005bf0(local_b4);
          uVar6 = (uint)local_b8 & (uint)(iVar2 == 0);
        }
        local_ac = 0;
        pf_png32_100065e4(local_b0);
        local_9c = (uint *)0x0;
        pf_png32_100065e4(local_a0);
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return uVar6;
}

#undef DAT_1000fcf8
#undef DAT_1000fcfc
#undef DAT_1000fd00
#undef DAT_1000fd04
#undef DAT_1000fd08
#undef DAT_1000fd0c
#undef DAT_1000fd10
#undef DAT_1000fd14
#undef uStack_94
#undef auStack_68
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef auStack_100
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c


#undef DAT_1001003c
#define DAT_1001003c (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xcb9cU)))
#undef DAT_10010040
#define DAT_10010040 (*(int *)(((uintptr_t)pf_png32_state + 0xcba0U)))
#undef DAT_10010044
#define DAT_10010044 (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xcba4U)))
#undef DAT_10010048
#define DAT_10010048 (*(int *)(((uintptr_t)pf_png32_state + 0xcba8U)))
#undef DAT_1001004c
#define DAT_1001004c (*(uint8_t * *)(((uintptr_t)pf_png32_state + 0xcbacU)))
#define local_78 (*(undefined4 *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b8 (*(int *)(frame + 24))
#define local_b4 (*(uint *)(frame + 28))
#define local_b0 (*(uint *)(frame + 32))
#define local_ac (*(uint * *)(frame + 36))
#define local_a8 (*(uint *)(frame + 40))
#define local_a1 (*(undefined1 *)(frame + 47))
#define local_a0 (*(void * *)(frame + 48))
#define local_9c (*(int *)(frame + 52))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xc878U)
 */

uint pf_png32_1000fd18(int param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  local_7c = *DAT_10010044;
  local_78 = DAT_1001003c;
  local_70 = DAT_10010040 + ((uintptr_t)pf_png32_state+0xc8d0U);
  pf_png32_10006ab0(&uStack_94);
  uVar4 = 0;
  if (param_1 != 0 && param_2 != 0) {
    uVar1 = param_3;
    if (0 < (int)param_3) {
      uVar1 = param_4;
    }
    if (((0 < (int)uVar1) && ((int)((ulonglong)param_4 * (ulonglong)param_3 >> 0x20) == 0)) &&
       (param_4 * param_3 < 0x40000000)) {
      local_90 = 0xffffffff;
      local_ac = pf_png32_10005834(param_1,DAT_10010048);
      if (local_ac != (uint *)0x0) {
        local_98 = 0;
        local_9c = 0;
        local_a0 = (void *)0x0;
        local_90 = 1;
        local_b8 = param_2;
        local_b4 = param_4 * param_3;
        local_b0 = param_3;
        local_a8 = param_4;
        pf_png32_10010edc((int *)&local_a0,0,DAT_1001004c,DAT_1001004c + 8);
        local_90 = 2;
        pf_png32_10013640((uint *)&local_a0,local_b0);
        local_90 = 3;
        pf_png32_10013640((uint *)&local_a0,local_a8);
        local_90 = 4;
        pf_png32_10013640((uint *)&local_a0,1);
        local_90 = 5;
        pf_png32_10013640((uint *)&local_a0,1);
        local_90 = 6;
        pf_png32_10013640((uint *)&local_a0,0);
        local_90 = 7;
        pf_png32_10013640((uint *)&local_a0,0);
        local_90 = 8;
        pf_png32_10013640((uint *)&local_a0,local_b0);
        local_90 = 9;
        pf_png32_10013640((uint *)&local_a0,local_a8);
        local_90 = 10;
        local_a1 = 0xff;
        pf_png32_10011f70((int *)&local_a0,&local_a1);
        local_b0 = local_b4 << 2;
        uVar4 = 7;
        while (uVar4 != 0) {
          local_90 = 0xc;
          local_a1 = 0;
          local_a8 = uVar4;
          pf_png32_10011f70((int *)&local_a0,&local_a1);
          uVar4 = local_a8 - 1;
        }
        local_90 = 0xb;
        bVar2 = pf_png32_1000e004(local_ac,(int)local_a0,local_9c);
        uVar4 = 0;
        if (bVar2) {
          local_90 = 0xd;
          bVar2 = pf_png32_1000e004(local_ac,local_b8,local_b0);
          uVar4 = (uint)bVar2;
        }
        local_90 = 0xe;
        local_a8 = uVar4;
        iVar3 = pf_png32_10005bf0(local_ac);
        uVar4 = local_a8;
        local_9c = 0;
        pf_png32_100065e4(local_a0);
        uVar4 = uVar4 & iVar3 == 0;
      }
    }
  }
  pf_png32_10006ac8(&uStack_94);
  return uVar4;
}

#undef DAT_1001003c
#undef DAT_10010040
#undef DAT_10010044
#undef DAT_10010048
#undef DAT_1001004c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_c0
#undef uStack_94
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a1
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcbb0U)
 */

void pf_png32_10010050(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_100100e8(param_1,param_2,param_3);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcbbcU)
 */

uint pf_png32_1001005c(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_2 != 0) {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 + 1;
      if (0x1f < uVar1) break;
    } while ((param_2 & 1 << (uVar1 & 0xff)) == 0);
    uVar3 = 0;
    for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 >> 1) {
      uVar3 = uVar3 + (uVar2 & 1);
    }
    uVar2 = ~(-1 << (uVar3 & 0xff));
    if (0x1e < uVar3) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0) {
      uVar1 = pf_png32_100034a0((((param_2 & param_1) >> (uVar1 & 0xff)) * 0x100 -
                                 ((param_2 & param_1) >> (uVar1 & 0xff))) + (uVar2 >> 1),uVar2);
      return uVar1;
    }
  }
  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcc48U)
 */

void pf_png32_100100e8(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    pf_png32_10010150(param_1,param_2);
    return;
  }
  pf_png32_100101ac(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xccb0U)
 */

void pf_png32_10010150(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    pf_png32_100101ac(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcd0cU)
 */

void pf_png32_100101ac(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_1001020c(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcd6cU)
 */

void * pf_png32_1001020c(uint count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  pvVar1 = pf_png32_100065b4(count);
  return pvVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcd7cU)
 */

undefined4 * pf_png32_1001021c(undefined4 *param_1,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_10010150(param_1,in_r1);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xcda8U)
 */

undefined4 pf_png32_10010248(byte *param_1,int param_2,uint param_3,byte *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;

  if (param_2 == 8) {
    bVar2 = *param_1;
    param_4[1] = bVar2;
    *param_4 = bVar2;
  }
  else {
    if (param_2 - 0xfU < 2) {
      bVar2 = *param_1;
      uVar3 = pf_png32_100034a0((bVar2 & 0x1f) * 0xff,0x1f);
      bVar1 = param_1[1];
      param_4[2] = (byte)uVar3;
      uVar3 = pf_png32_100034a0((((int)(char)bVar1 & 0x7fU) >> 2) * 0xff,0x1f);
      *param_4 = (byte)uVar3;
      uVar3 = pf_png32_100034a0((((int)CONCAT11(bVar1,bVar2) & 0x3ffU) >> 5) * 0xff,0x1f);
      param_4[1] = (byte)uVar3;
      bVar2 = 0xff;
      if ((param_3 & 0xf) != 0) {
        bVar2 = (byte)((int)(char)bVar1 >> 7);
      }
      if (param_2 != 0x10) {
        bVar2 = 0xff;
      }
      goto LAB_1001033c;
    }
    if (param_2 == 0x20) {
      *param_4 = param_1[2];
      param_4[1] = param_1[1];
      param_4[2] = *param_1;
      bVar2 = param_1[3];
      goto LAB_1001033c;
    }
    if (param_2 != 0x18) {
      return 0;
    }
    *param_4 = param_1[2];
    param_4[1] = param_1[1];
  }
  param_4[2] = *param_1;
  bVar2 = 0xff;
LAB_1001033c:
  param_4[3] = bVar2;
  return 1;
}



#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xceacU)
 */

undefined4 pf_png32_1001034c(undefined4 *param_1,byte *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint b;
  uint *puVar6;

  uVar5 = *(uint *)*param_1;
  if (*(uint *)param_1[1] <= uVar5) {
    return 0;
  }
  local_1c = 0xff000000;
  iVar3 = *(int *)param_1[2];
  if (iVar3 == 3) {
    bVar1 = *param_2;
    bVar2 = 0xff;
    if (*(int *)param_1[3] == 0x10) {
      bVar2 = param_2[1];
    }
    local_1c = CONCAT13(bVar2,CONCAT21(CONCAT11(bVar1,bVar1),bVar1));
  }
  else if (iVar3 == 2) {
    iVar3 = pf_png32_10010248(param_2,*(int *)param_1[3],*(uint *)param_1[7],(byte *)&local_1c);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (iVar3 != 1) {
      return 0;
    }
    uVar5 = (uint)*param_2;
    if (*(int *)param_1[3] != 8) {
      uVar5 = (uint)CONCAT11(param_2[1],*param_2);
    }
    if (uVar5 < *(uint *)param_1[4]) {
      return 0;
    }
    uVar5 = uVar5 - *(uint *)param_1[4];
    if (*(uint *)param_1[5] <= uVar5) {
      return 0;
    }
    pf_png32_10003f04(&local_1c,(void *)(*(int *)param_1[6] + uVar5 * 4),4);
    uVar5 = *(uint *)*param_1;
  }
  puVar6 = (uint *)param_1[7];
  b = *(uint *)param_1[8];
  uVar4 = pf_png32_100034a0(uVar5,b);
  uVar5 = uVar5 - uVar4 * b;
  if ((*puVar6 & 0x10) != 0) {
    uVar5 = b + ~uVar5;
  }
  if ((*puVar6 & 0x20) == 0) {
    uVar4 = *(int *)param_1[9] + ~uVar4;
  }
  pf_png32_10003f04((void *)(*(int *)param_1[10] + (uVar4 * b + uVar5) * 4),&local_1c,4);
  *(int *)*param_1 = *(int *)*param_1 + 1;
  return 1;
}

#undef local_1c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd038U)
 */

int pf_png32_100104d8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10010ac8((undefined4 *)(param_1 + 0x4b4));
  pf_png32_10010548((int *)(param_1 + 0x4a8));
  pf_png32_10010568(param_1 + 0x468);
  pf_png32_10010568(param_1 + 0x428);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd07cU)
 */

void pf_png32_1001051c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;

  iVar1 = 0;
  do {
    puVar2 = (undefined1 *)(param_1 + iVar1);
    *puVar2 = 0;
    iVar1 = iVar1 + 0x10;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
  } while (iVar1 != 0x40);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd0a8U)
 */

int * pf_png32_10010548(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_100105b8(param_1);
  pf_png32_100065e4((void *)*param_1);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd0c8U)
 */

int pf_png32_10010568(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = 0x30;
  do {
    pf_png32_10010594(param_1 + iVar1);
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -0x10;
  } while (bVar2);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd0f4U)
 */

int pf_png32_10010594(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 8) = 0;
  pf_png32_100065e4(*(void **)(param_1 + 4));
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd118U)
 */

void pf_png32_100105b8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x30 + -0xc;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    pf_png32_100136a4((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x30;
  }
  param_1[1] = 0;
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd160U)
 */

int pf_png32_10010600(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  for (iVar1 = 0; iVar1 != 0x40; iVar1 = iVar1 + 0x10) {
    pf_png32_1001068c((undefined1 *)(param_1 + iVar1),(undefined1 *)(param_2 + iVar1));
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd198U)
 */

undefined4 * pf_png32_10010638(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    pf_png32_100065e4((void *)*param_1);
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd1ecU)
 */

undefined1 * pf_png32_1001068c(undefined1 *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  *param_1 = *param_2;
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
    pf_png32_100065e4(*(void **)(param_1 + 4));
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd248U)
 */

void pf_png32_100106e8(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  *param_1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd274U)
 */

int * pf_png32_10010714(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  param_1[1] = 0;
  uVar1 = param_2[1];
  *param_1 = 0;
  param_1[2] = 0;
  pf_png32_100101ac(param_1,uVar1);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd2ccU)
 */

int pf_png32_1001076c(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_100107c4(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd324U)
 */

void pf_png32_100107c4(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_10010824(param_2);
    uVar2 = param_1[1];
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(undefined4 *)((int)pvVar1 + uVar3 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd384U)
 */

void * pf_png32_10010824(uint count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  pvVar1 = pf_png32_100065b4(count << 2);
  return pvVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd398U)
 */

undefined1 pf_png32_10010838(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  iVar3 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 8);
  uVar6 = *(uint *)(*param_1 + 0xc);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar1 = pf_png32_100034a0(*(int *)(param_2 + 4) * param_3,*(uint *)(*param_1 + 8));
  uVar2 = pf_png32_100034a0(iVar5 * param_4,uVar6);
  uVar6 = iVar3 - 1;
  if (uVar2 < uVar6) {
    uVar6 = uVar2;
  }
  uVar2 = iVar4 - 1;
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  return *(undefined1 *)(uVar6 * iVar4 + *(int *)(param_2 + 0x24) + uVar2);
}



#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd41cU)
 */

uint pf_png32_100108bc(int *param_1,char *param_2,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  if (*param_2 == '\x01') {
    uVar6 = 0;
    for (uVar5 = 1; uVar5 != 0x11; uVar5 = uVar5 + 1) {
      local_24 = 0;
      uVar1 = pf_png32_10010a1c(param_1,&local_24);
      if (uVar1 == 0) {
LAB_10010960:
        return uVar5 < 0x11 & uVar1;
      }
      uVar6 = local_24 | uVar6 << 1;
      puVar2 = (uint *)(*(int *)(param_2 + 4) + 4);
      for (iVar3 = *(int *)(param_2 + 8) * 0xc; iVar3 != 0; iVar3 = iVar3 + -0xc) {
        uVar4 = *puVar2;
        bVar7 = uVar4 == uVar5;
        if (bVar7) {
          uVar4 = puVar2[-1];
        }
        if (bVar7 && uVar4 == uVar6) {
          *param_3 = puVar2[1];
          goto LAB_10010960;
        }
        puVar2 = puVar2 + 3;
      }
    }
  }
  return 0;
}

#undef local_24


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd4e0U)
 */

bool pf_png32_10010980(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  *param_3 = 0;
  for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
    local_24 = 0;
    iVar1 = pf_png32_10010a1c(param_1,&local_24);
    if (iVar1 == 0) break;
    *param_3 = local_24 | *param_3 << 1;
  }
  return param_2 <= uVar2;
}

#undef local_24


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd558U)
 */

uint pf_png32_100109f8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  if (param_1 >> (param_2 - 1 & 0xff) == 0) {
    param_1 = param_1 + (-1 << (param_2 & 0xff)) + 1;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd57cU)
 */

undefined4 pf_png32_10010a1c(int *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  if (param_1[4] == 0) {
    uVar4 = 0;
    uVar2 = param_1[2];
    do {
      if ((uint)param_1[1] <= uVar2) {
        return 0;
      }
      param_1[2] = uVar2 + 1;
      uVar5 = (uint)*(byte *)(*param_1 + uVar2);
      if (uVar5 != 0xff) {
LAB_10010abc:
        param_1[4] = 8;
        goto LAB_10010a34;
      }
      if ((uint)param_1[1] <= uVar2 + 1) {
        return 0;
      }
      iVar3 = *param_1 + uVar2;
      uVar2 = uVar2 + 2;
      param_1[2] = uVar2;
      bVar1 = *(byte *)(iVar3 + 1);
      if (bVar1 == 0) goto LAB_10010abc;
    } while ((bVar1 & 0xf8) == 0xd0);
  }
  else {
    uVar5 = (uint)*(byte *)(param_1 + 3);
LAB_10010a34:
    uVar4 = 1;
    *param_2 = uVar5 >> 7;
    *(char *)(param_1 + 3) = (char)(uVar5 << 1);
    param_1[4] = param_1[4] + -1;
  }
  return uVar4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd628U)
 */

undefined4 * pf_png32_10010ac8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_100065e4((void *)*param_1);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd64cU)
 */

int pf_png32_10010aec(uchar *data,uint size,ulonglong *position,uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  int iVar2;

  iVar2 = pf_png32_10010cc8((int)data,size,(uint)*position,*(int *)((int)position + 4),out);
  if (iVar2 != 0) {
    uVar1 = *position;
    *(uint *)position = (uint)uVar1 + 4;
    *(uint *)((int)position + 4) = *(int *)((int)position + 4) + (uint)(0xfffffffb < (uint)uVar1);
  }
  return iVar2;
}



#define local_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd694U)
 */

undefined4 pf_png32_10010b34(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_24 = (int)(uintptr_t)(frame + 64) - 8;
  uVar4 = *param_3;
  if (param_4 == 4) {
    local_24 = 0;
    iVar2 = pf_png32_10010cc8(param_1,param_2,uVar4,param_3[1],&local_24);
    if (iVar2 == 0) {
      return 0;
    }
    param_5[1] = 0;
  }
  else {
    bVar1 = (uint)(uVar4 <= param_2) <= -param_3[1];
    if (!bVar1) {
      param_2 = param_2 - uVar4;
    }
    if (bVar1 || param_2 < 8) {
      return 0;
    }
    uVar3 = pf_png32_10010d0c((uint *)(param_1 + uVar4));
    local_24 = pf_png32_10010d0c((uint *)(param_1 + uVar4) + 1);
    param_5[1] = uVar3;
  }
  *param_5 = local_24;
  uVar4 = *param_3;
  *param_3 = uVar4 + param_4;
  param_3[1] = param_3[1] + (uint)CARRY4(uVar4,param_4);
  return 1;
}

#undef local_24


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd748U)
 */

void pf_png32_10010be8(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  bVar1 = *(byte *)(param_2 + 3);
  uVar5 = (uint)bVar1;
  if (uVar5 != 0xff) {
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
    }
    else {
      bVar2 = *(byte *)(param_1 + 3);
      if (bVar2 != 0) {
        uVar4 = pf_png32_100034a0((int)(short)(bVar1 ^ 0xff) * (int)(short)(ushort)bVar2 + 0x7fU &
                                   0xffff,0xff);
        uVar4 = uVar4 + uVar5;
        for (iVar6 = 0; iVar6 != -3; iVar6 = iVar6 + -1) {
          bVar3 = *(byte *)(param_2 - iVar6);
          uVar5 = pf_png32_100034a0((int)(short)(bVar1 ^ 0xff) * (int)(short)(ushort)bVar2 *
                                     (uint)*(byte *)(param_1 - iVar6) + 0x7f,0xff);
          uVar5 = pf_png32_100034a0((int)(short)(ushort)bVar3 * (int)(short)(ushort)bVar1 +
                                     (uVar4 >> 1) + uVar5,uVar4);
          *(char *)(param_1 - iVar6) = (char)uVar5;
        }
        *(char *)(param_1 + 3) = (char)uVar4;
        return;
      }
    }
  }
  pf_png32_10003f04((void *)param_1,(void *)param_2,4);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd828U)
 */

undefined4 pf_png32_10010cc8(int param_1,uint param_2,uint param_3,int param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = (uint)-param_4 < (uint)(param_3 <= param_2);
  if (bVar1) {
    param_2 = param_2 - param_3;
  }
  if (bVar1 && 3 < param_2) {
    uVar2 = pf_png32_10010d0c((uint *)(param_1 + param_3));
    *param_5 = uVar2;
    return 1;
  }
  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd86cU)
 */

uint pf_png32_10010d0c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = *param_1;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd878U)
 */

int pf_png32_10010d18(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_10010d78(param_1,uVar2);
    iVar1 = param_1[1];
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  iVar5 = *param_1;
  param_1[1] = iVar1 + 1;
  puVar6 = (undefined4 *)(iVar5 + iVar1 * 8);
  *puVar6 = uVar3;
  puVar6[1] = uVar4;
  return iVar5 + (iVar1 + 1) * 8 + -8;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd8d8U)
 */

void pf_png32_10010d78(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_10010df4(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      uVar5 = ((undefined4 *)(*param_1 + iVar3))[1];
      puVar6 = (undefined4 *)((int)pvVar1 + iVar3);
      *puVar6 = *(undefined4 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 8;
      puVar6[1] = uVar5;
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd954U)
 */

void * pf_png32_10010df4(uint count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  pvVar1 = pf_png32_100065b4(count << 3);
  return pvVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd968U)
 */

undefined4 * pf_png32_10010e08(undefined4 *param_1,uint in_r1,undefined1 *in_r2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_100100e8(param_1,in_r1,in_r2);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd994U)
 */

void pf_png32_10010e34(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_10010edc(param_1,*param_1,param_2,param_3);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd9acU)
 */

int * pf_png32_10010e4c(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_10010e78(param_1,param_2);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xd9d8U)
 */

void pf_png32_10010e78(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    pf_png32_10010d78(param_1,param_2);
    uVar1 = param_1[1];
    iVar2 = uVar1 << 3;
    while (uVar1 < param_2) {
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
      puVar3 = (undefined4 *)(*param_1 + iVar2);
      *puVar3 = 0;
      iVar2 = iVar2 + 8;
      puVar3[1] = 0;
    }
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xda3cU)
 */

int pf_png32_10010edc(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar1;
  }
  iVar6 = (int)param_4 - (int)param_3;
  if (iVar6 != 0) {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar2 + iVar6) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 << 1;
      } while (uVar5 < uVar2 + iVar6);
      pf_png32_100101ac(param_1,uVar5);
      uVar2 = param_1[1];
    }
    while (uVar7 < uVar2) {
      puVar3 = (undefined1 *)(*param_1 + (uVar2 - 1));
      puVar3[iVar6] = *puVar3;
      uVar2 = uVar2 - 1;
    }
    uVar2 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar2) = *param_3;
      uVar2 = uVar2 + 1;
    }
    iVar1 = *param_1;
    param_1[1] = param_1[1] + iVar6;
  }
  iVar6 = iVar1 + uVar7;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  return iVar6;
}



#undef DAT_10011be4
#define DAT_10011be4 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xe744U)))
#undef DAT_10011be8
#define DAT_10011be8 (*(int *)(((uintptr_t)pf_png32_state + 0xe748U)))
#undef DAT_10011bec
#define DAT_10011bec (*(uint32_t * *)(((uintptr_t)pf_png32_state + 0xe74cU)))
#undef DAT_10011bf0
#define DAT_10011bf0 (*(int * *)(((uintptr_t)pf_png32_state + 0xe750U)))
#undef DAT_10011bf4
#define DAT_10011bf4 (*(uint * *)(((uintptr_t)pf_png32_state + 0xe754U)))
#undef DAT_10011bf8
#define DAT_10011bf8 (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xe758U)))
#undef DAT_10011bfc
#define DAT_10011bfc (*(uint32_t *)(((uintptr_t)pf_png32_state + 0xe75cU)))
#undef DAT_10011c00
#define DAT_10011c00 (*(int * *)(((uintptr_t)pf_png32_state + 0xe760U)))
#define local_ac (*(void * *)(frame + 484))
#define local_a8 (*(undefined4 *)(frame + 488))
#define local_a0 (*(uint *)(frame + 496))
#define local_9c (*(uint *)(frame + 500))
#define local_98 (*(uint * *)(frame + 504))
#define local_90 (*(undefined4 *)(frame + 512))
#define local_7c (*(undefined4 *)(frame + 532))
#define local_78 (*(undefined4 *)(frame + 536))
#define local_74 (*(undefined1 * *)(frame + 540))
#define local_70 (*(int *)(frame + 544))
#define local_6c (*(undefined1 * *)(frame + 548))
#define auStack_280 (*(undefined1 (*)[16])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 508))
#define auStack_68 (*(undefined1 (*)[8])(frame + 552))
#define local_270 (*(int *)(frame + 32))
#define local_26c (*(int * *)(frame + 36))
#define local_268 (*(uint * *)(frame + 40))
#define local_264 (*(int * *)(frame + 44))
#define local_260 (*(uint * *)(frame + 48))
#define local_25c (*(uint * *)(frame + 52))
#define local_258 (*(uint * *)(frame + 56))
#define local_254 (*(uint * *)(frame + 60))
#define local_250 (*(uint *)(frame + 64))
#define local_24c (*(int * *)(frame + 68))
#define local_248 (*(uint (*)[16])(frame + 72))
#define local_208 (*(void * *)(frame + 136))
#define local_204 (*(undefined4 *)(frame + 140))
#define local_1f8 (*(undefined1 *)(frame + 152))
#define local_1f0 (*(uint (*)[16])(frame + 160))
#define local_1b0 (*(void * *)(frame + 224))
#define local_1ac (*(undefined4 *)(frame + 228))
#define local_198 (*(uint *)(frame + 248))
#define local_194 (*(uint *)(frame + 252))
#define local_190 (*(byte * *)(frame + 256))
#define local_18c (*(int *)(frame + 260))
#define local_188 (*(int *)(frame + 264))
#define local_184 (*(uint (*)[19])(frame + 268))
#define local_138 (*(void * *)(frame + 344))
#define local_134 (*(undefined4 *)(frame + 348))
#define local_124 (*(int * *)(frame + 364))
#define local_120 (*(int *)(frame + 368))
#define local_118 (*(void * *)(frame + 376))
#define local_114 (*(undefined4 *)(frame + 380))
#define local_10c (*(undefined4 * *)(frame + 388))
#define local_108 (*(uint * *)(frame + 392))
#define local_104 (*(undefined4 *)(frame + 396))
#define local_100 (*(void * *)(frame + 400))
#define local_fc (*(undefined4 *)(frame + 404))
#define local_c0 (*(void * *)(frame + 464))
#define local_bc (*(undefined4 *)(frame + 468))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xdb14U)
 */

bool pf_png32_10010fb4(int *param_1,int *param_2)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  void *pointer;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_280;
  bVar8 = false;
  param_2[1] = 0;
  local_7c = *DAT_10011bec;
  local_78 = DAT_10011be4;
  local_70 = DAT_10011be8 + ((uintptr_t)pf_png32_state+0xdb6cU);
  uVar9 = param_1[1];
  local_24c = param_2;
  pf_png32_10006ab0(&uStack_94);
  if (5 < uVar9) {
    pbVar11 = (byte *)*param_1;
    if (((*pbVar11 & 0xf) == 8) &&
       (bVar2 = pbVar11[1], uVar3 = pf_png32_10003520((uint)CONCAT11(*pbVar11,bVar2),0x1f),
       (bVar2 & 0x20) == 0 && uVar3 == 0)) {
      local_18c = uVar9 - 6;
      local_190 = pbVar11 + 2;
      local_25c = local_184;
      local_184[1] = 0;
      local_184[0] = 0;
      local_184[2] = 0;
      local_188 = 0;
      do {
        while( true ) {
          local_194 = 0;
          local_198 = 0;
          iVar4 = pf_png32_10011c04((int *)&local_190,1,&local_194);
          if ((iVar4 == 0) ||
             (iVar4 = pf_png32_10011c04((int *)&local_190,2,&local_198), uVar9 = local_194,
             iVar4 == 0)) goto LAB_100119c4;
          if (local_198 != 2) break;
          local_264 = DAT_10011bf0;
          local_260 = DAT_10011bf4;
          local_250 = local_194;
          pf_png32_10003f74(local_1f0,0,0x51);
          pf_png32_10003f74(local_248,0,0x51);
          local_98 = (uint *)0x0;
          local_9c = 0;
          local_a0 = 0;
          iVar4 = pf_png32_10011c04((int *)&local_190,5,(uint *)&local_98);
          if (((iVar4 == 0) ||
              (iVar4 = pf_png32_10011c04((int *)&local_190,5,&local_9c), iVar4 == 0)) ||
             (iVar4 = pf_png32_10011c04((int *)&local_190,4,&local_a0), iVar4 == 0)) {
            iVar10 = 1;
          }
          else {
            local_90 = 5;
            local_254 = (uint *)local_9c;
            local_258 = local_98;
            local_100 = (void *)0x0;
            local_26c = param_1;
            pf_png32_10012294((int *)&local_ac,0x13,&local_100);
            pointer = local_ac;
            param_1 = local_26c;
            local_270 = (int)local_258 + 0x101;
            local_254 = (uint *)((int)local_254 + 1);
            piVar5 = DAT_10011c00;
            for (iVar4 = local_a0 + 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              local_100 = (void *)0x0;
              iVar10 = pf_png32_10011c04((int *)&local_190,3,(uint *)&local_100);
              if (iVar10 == 0) {
                local_a8 = 0;
                pf_png32_100065e4(pointer);
                iVar10 = 1;
                goto LAB_10011384;
              }
              *(void **)((int)pointer + *piVar5 * 4) = local_100;
              piVar5 = piVar5 + 1;
            }
            pf_png32_10003f74(&local_100,0,0x51);
            local_90 = 6;
            iVar4 = pf_png32_1001211c((int *)&local_ac,(int *)&local_100,0);
            iVar12 = 0;
            if (iVar4 != 0) {
              local_104 = 0;
              local_108 = (uint *)0x0;
              local_10c = (undefined4 *)0x0;
              local_90 = 7;
              local_254 = (uint *)((int)local_254 + local_270);
              pf_png32_100107c4((int *)&local_10c,(uint)local_254);
              do {
                puVar6 = local_108;
                if (local_254 <= local_108) {
                  local_90 = 0xc;
                  pf_png32_100125d0((int *)&local_118,local_10c,local_10c + local_270);
                  local_90 = 0xd;
                  pf_png32_100125d0((int *)&local_124,local_10c + local_270,
                                     local_10c + (int)local_108);
                  local_90 = 0xe;
                  iVar4 = pf_png32_1001211c((int *)&local_118,(int *)local_1f0,0);
                  iVar12 = 0;
                  if (iVar4 != 0) {
                    bVar8 = false;
                    piVar5 = local_124;
                    for (iVar4 = local_120 << 2; iVar4 != 0; iVar4 = iVar4 + -4) {
                      bVar8 = (bool)(bVar8 | *piVar5 != 0);
                      piVar5 = piVar5 + 1;
                    }
                    if (bVar8) {
                      local_90 = 0xf;
                      iVar12 = pf_png32_1001211c((int *)&local_124,(int *)local_248,1);
                    }
                    else {
                      pf_png32_10003f74(local_184 + 3,0,0x51);
                      pf_png32_1001237c((int)local_248,(int)(local_184 + 3));
                      local_134 = 0;
                      pf_png32_100065e4(local_138);
                      iVar12 = 1;
                      local_1f8 = 1;
                    }
                  }
                  local_120 = 0;
                  pf_png32_100065e4(local_124);
                  local_114 = 0;
                  pf_png32_100065e4(local_118);
                  goto LAB_10011760;
                }
                local_184[3] = 0;
                bVar2 = pf_png32_10011fd0((int *)&local_190,(int)&local_100,local_184 + 3);
                if (bVar2 == 0) {
LAB_10011648:
                  iVar12 = 0;
                  goto LAB_10011760;
                }
                if (local_184[3] < 0x10) {
                  local_90 = 8;
                  pf_png32_10012578((int *)&local_10c,local_184 + 3);
                  iVar10 = 5;
                }
                else if (local_184[3] == 0x12) {
                  local_118 = (void *)0x0;
                  iVar4 = pf_png32_10011c04((int *)&local_190,7,(uint *)&local_118);
                  iVar10 = 1;
                  if (iVar4 != 0) {
                    puVar7 = (uint *)0x0;
                    local_268 = (uint *)((int)local_118 + 0xb);
                    while( true ) {
                      iVar10 = 5;
                      puVar1 = local_268;
                      if (local_268 > puVar7) {
                        puVar1 = local_254;
                      }
                      if (local_268 <= puVar7 || puVar1 <= puVar6) break;
                      local_90 = 0xb;
                      local_124 = (int *)0x0;
                      local_258 = puVar7;
                      pf_png32_1001076c((int *)&local_10c,&local_124);
                      puVar7 = (uint *)((int)local_258 + 1);
                      puVar6 = local_108;
                    }
                  }
                }
                else if (local_184[3] == 0x11) {
                  local_118 = (void *)0x0;
                  iVar4 = pf_png32_10011c04((int *)&local_190,3,(uint *)&local_118);
                  iVar10 = 1;
                  if (iVar4 != 0) {
                    puVar7 = (uint *)0x0;
                    local_268 = (uint *)((int)local_118 + 3);
                    while( true ) {
                      iVar10 = 5;
                      puVar1 = local_268;
                      if (local_268 > puVar7) {
                        puVar1 = local_254;
                      }
                      if (local_268 <= puVar7 || puVar1 <= puVar6) break;
                      local_90 = 10;
                      local_124 = (int *)0x0;
                      local_258 = puVar7;
                      pf_png32_1001076c((int *)&local_10c,&local_124);
                      puVar7 = (uint *)((int)local_258 + 1);
                      puVar6 = local_108;
                    }
                  }
                }
                else {
                  if ((local_184[3] != 0x10) || (puVar6 == (uint *)0x0)) goto LAB_10011648;
                  local_118 = (void *)0x0;
                  iVar4 = pf_png32_10011c04((int *)&local_190,2,(uint *)&local_118);
                  iVar10 = 1;
                  if (iVar4 != 0) {
                    local_124 = (int *)local_10c[(int)puVar6 + -1];
                    local_268 = (uint *)((int)local_118 + 3);
                    puVar7 = (uint *)0x0;
                    while( true ) {
                      puVar1 = local_268;
                      if (local_268 > puVar7) {
                        puVar1 = local_254;
                      }
                      if (local_268 <= puVar7 || puVar1 <= puVar6) break;
                      local_90 = 9;
                      local_258 = puVar7;
                      pf_png32_10012578((int *)&local_10c,&local_124);
                      puVar7 = (uint *)((int)local_258 + 1);
                      puVar6 = local_108;
                    }
                    iVar10 = 5;
                  }
                }
              } while (iVar10 == 5);
              iVar12 = 0;
LAB_10011760:
              local_108 = (uint *)0x0;
              pf_png32_100065e4(local_10c);
            }
            local_bc = 0;
            pf_png32_100065e4(local_c0);
            local_a8 = 0;
            pf_png32_100065e4(local_ac);
            iVar10 = 1;
            param_1 = local_26c;
            if (iVar12 != 0) {
              local_90 = 0x10;
              iVar4 = pf_png32_10011cf8((int *)&local_190,(int)local_1f0,(int)local_248,local_24c);
              iVar10 = 1;
              param_1 = local_26c;
              if (iVar4 != 0) {
                iVar10 = 3;
              }
            }
          }
LAB_10011384:
          local_204 = 0;
          pf_png32_100065e4(local_208);
          local_1ac = 0;
          pf_png32_100065e4(local_1b0);
LAB_10011630:
          if (iVar10 != 3) {
LAB_100119c4:
            bVar8 = false;
            goto LAB_100119c8;
          }
          if (local_250 != 0) goto LAB_100119ec;
        }
        if (local_198 != 1) {
          if (local_198 == 0) {
            local_250 = local_194;
            local_100 = (void *)0x0;
            uVar9 = local_184[2] & 7;
            uVar3 = local_25c[1];
            local_184[2] = local_184[2] & 0xfffffff8;
            local_184[3] = 0;
            local_25c[1] = uVar3 >> uVar9;
            *local_25c = *local_25c >> uVar9 | (uVar3 << 1) << (uVar9 ^ 0x1f);
            local_1f0[0] = 0;
            local_248[0] = 0;
            iVar4 = pf_png32_10011c04((int *)&local_190,8,(uint *)&local_100);
            iVar10 = 1;
            if ((((iVar4 != 0) &&
                 (iVar4 = pf_png32_10011c04((int *)&local_190,8,local_184 + 3), iVar4 != 0)) &&
                (iVar4 = pf_png32_10011c04((int *)&local_190,8,local_1f0), iVar4 != 0)) &&
               ((iVar4 = pf_png32_10011c04((int *)&local_190,8,local_248), iVar4 != 0 &&
                (uVar9 = (uint)local_100 | local_184[3] << 8,
                ((local_1f0[0] | local_248[0] << 8) ^ uVar9) == 0xffff)))) {
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                local_ac = (void *)0x0;
                iVar4 = pf_png32_10011c04((int *)&local_190,8,(uint *)&local_ac);
                if (iVar4 == 0) goto LAB_10011630;
                local_10c = (undefined4 *)CONCAT31(PF_PART3(local_10c, 1),(char)local_ac);
                local_90 = 0xffffffff;
                pf_png32_10011f70(local_24c,(undefined1 *)&local_10c);
              }
              iVar10 = 3;
            }
            goto LAB_10011630;
          }
          goto LAB_100119c4;
        }
        DataMemoryBarrier(0xb);
        puVar6 = DAT_10011bf4;
        piVar5 = DAT_10011bf0;
        if ((*DAT_10011bf4 & 1) == 0) {
          local_254 = DAT_10011bf4;
          local_260 = DAT_10011bf4;
          local_264 = DAT_10011bf0;
          uVar3 = pf_png32_100068ec(DAT_10011bf4);
          puVar6 = local_260;
          piVar5 = local_264;
          if (uVar3 != 0) {
            local_250 = uVar9;
            local_90 = 1;
            local_184[3] = 8;
            local_26c = param_1;
            pf_png32_10012294((int *)&local_100,0x120,local_184 + 3);
            for (iVar4 = 0; iVar4 != 0x70; iVar4 = iVar4 + 1) {
              *(undefined4 *)((int)local_100 + iVar4 * 4 + 0x240) = 9;
            }
            for (iVar4 = 0; iVar4 != 0x18; iVar4 = iVar4 + 1) {
              *(undefined4 *)((int)local_100 + iVar4 * 4 + 0x400) = 7;
            }
            for (iVar4 = 0; iVar4 != 8; iVar4 = iVar4 + 1) {
              *(undefined4 *)((int)local_100 + iVar4 * 4 + 0x460) = 8;
            }
            puVar6 = local_254 + 2;
            pf_png32_10003f74(puVar6,0,0x51);
            local_90 = 2;
            local_258 = puVar6;
            pf_png32_1001211c((int *)&local_100,(int *)puVar6,0);
            local_fc = 0;
            pf_png32_100065e4(local_100);
            pf_png32_100068e4();
            pf_png32_100068fc(local_254);
            puVar6 = local_260;
            piVar5 = local_264;
            uVar9 = local_250;
            param_1 = local_26c;
          }
        }
        DataMemoryBarrier(0xb);
        if ((puVar6[1] & 1) == 0) {
          local_254 = puVar6 + 1;
          local_264 = piVar5;
          local_260 = puVar6;
          uVar3 = pf_png32_100068ec(local_254);
          puVar6 = local_260;
          if (uVar3 != 0) {
            local_90 = 3;
            local_184[3] = 5;
            local_26c = param_1;
            local_250 = uVar9;
            pf_png32_10012294((int *)&local_100,0x20,local_184 + 3);
            piVar5 = DAT_10011bf0;
            pf_png32_10003f74(DAT_10011bf0,0,0x51);
            local_90 = 4;
            pf_png32_1001211c((int *)&local_100,piVar5,0);
            local_fc = 0;
            pf_png32_100065e4(local_100);
            pf_png32_100068e4();
            pf_png32_100068fc(local_254);
            puVar6 = local_260;
            uVar9 = local_250;
            param_1 = local_26c;
          }
        }
        local_90 = 0xffffffff;
        iVar4 = pf_png32_10011cf8((int *)&local_190,(int)(puVar6 + 2),(int)DAT_10011bf0,local_24c);
        if (iVar4 == 0) goto LAB_100119c4;
      } while (uVar9 == 0);
LAB_100119ec:
      bVar8 = false;
      if ((local_188 == local_18c) && (local_184[2] < 8)) {
        uVar9 = pf_png32_10010d0c((uint *)(*param_1 + param_1[1] + -4));
        uVar3 = pf_png32_10011ed8(*local_24c,local_24c[1]);
        bVar8 = uVar3 == uVar9;
      }
    }
  }
LAB_100119c8:
  pf_png32_10006ac8(&uStack_94);
  return bVar8;
}

#undef DAT_10011be4
#undef DAT_10011be8
#undef DAT_10011bec
#undef DAT_10011bf0
#undef DAT_10011bf4
#undef DAT_10011bf8
#undef DAT_10011bfc
#undef DAT_10011c00
#undef local_ac
#undef local_a8
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_280
#undef uStack_94
#undef auStack_68
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_208
#undef local_204
#undef local_1f8
#undef local_1f0
#undef local_1b0
#undef local_1ac
#undef local_198
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_138
#undef local_134
#undef local_124
#undef local_120
#undef local_118
#undef local_114
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_c0
#undef local_bc


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xe764U)
 */

undefined4 pf_png32_10011c04(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;

  uVar6 = 0;
  if (param_2 < 0x19) {
    puVar7 = (uint *)(param_1 + 3);
    uVar3 = param_1[5];
    while (uVar3 < param_2) {
      uVar2 = param_1[2];
      if ((uint)param_1[1] <= uVar2) {
        return 0;
      }
      param_1[2] = uVar2 + 1;
      uVar4 = uVar3 - 0x20;
      bVar1 = *(byte *)(*param_1 + uVar2);
      param_1[5] = uVar3 + 8;
      uVar2 = (uint)bVar1 << (uVar3 & 0xff);
      if (-1 < (int)uVar4) {
        uVar2 = 0;
      }
      *puVar7 = uVar2 | *puVar7;
      uVar2 = (uint)(bVar1 >> (0x20 - uVar3 & 0xff));
      if (-1 < (int)uVar4) {
        uVar2 = (uint)bVar1 << (uVar4 & 0xff);
      }
      param_1[4] = uVar2 | param_1[4];
      uVar3 = uVar3 + 8;
    }
    uVar2 = param_1[4];
    uVar3 = -1 << (param_2 & 0xff);
    uVar5 = param_2 - 0x20;
    uVar4 = *puVar7;
    if (-1 < (int)uVar5) {
      uVar3 = 0;
    }
    uVar6 = 1;
    *param_3 = uVar4 & ~uVar3;
    uVar3 = uVar2 >> (param_2 & 0xff);
    if (-1 < (int)uVar5) {
      uVar3 = 0;
    }
    param_1[4] = uVar3;
    uVar3 = uVar4 >> (param_2 & 0xff) | uVar2 << (0x20 - param_2 & 0xff);
    if (-1 < (int)uVar5) {
      uVar3 = uVar2 >> (uVar5 & 0xff);
    }
    *puVar7 = uVar3;
    param_1[5] = param_1[5] - param_2;
  }
  return uVar6;
}



#undef DAT_10011eac
#define DAT_10011eac (*(int *)(((uintptr_t)pf_png32_state + 0xea0cU)))
#undef DAT_10011eb0
#define DAT_10011eb0 (*(int *)(((uintptr_t)pf_png32_state + 0xea10U)))
#undef DAT_10011eb4
#define DAT_10011eb4 (*(uint * *)(((uintptr_t)pf_png32_state + 0xea14U)))
#undef DAT_10011eb8
#define DAT_10011eb8 (*(int * *)(((uintptr_t)pf_png32_state + 0xea18U)))
#define auStack_230 (*(uint (*)[128])(frame + 16))
#define local_24 (*(uint *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xe858U)
 */

undefined4 pf_png32_10011cf8(int *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  piVar4 = DAT_10011eb8;
  puVar3 = DAT_10011eb4;
  iVar2 = DAT_10011eb0;
  iVar1 = DAT_10011eac;
  while( true ) {
    while( true ) {
      local_24 = 0;
      bVar5 = pf_png32_10011fd0(param_1,param_2,&local_24);
      if (bVar5 == 0) {
        return 0;
      }
      if (0xff < local_24) break;
      pf_png32_10011f70(param_4,(undefined1 *)(auStack_230 + 0x82));
    }
    if (local_24 == 0x100) {
      return 1;
    }
    if (0x8e < local_24 >> 1) {
      return 0;
    }
    iVar6 = local_24 * 4 + -0x404;
    iVar9 = *(int *)(iVar2 + iVar6);
    uVar8 = *(uint *)(iVar1 + iVar6);
    if ((uVar8 != 0) && (iVar6 = pf_png32_10011c04(param_1,uVar8,auStack_230 + 0x82), iVar6 == 0))
    break;
    bVar5 = pf_png32_10011fd0(param_1,param_3,auStack_230 + 0x82);
    if (bVar5 == 0) {
      return 0;
    }
    iVar6 = *piVar4;
    if ((*puVar3 != 0) &&
       (iVar7 = pf_png32_10011c04(param_1,*puVar3,auStack_230 + 0x81), iVar7 == 0)) {
      return 0;
    }
    if ((uint)param_4[1] <= iVar6 - 1U) {
      return 0;
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      pf_png32_100120bc(param_4,(undefined1 *)(*param_4 + (param_4[1] - iVar6)));
    }
  }
  return 0;
}

#undef DAT_10011eac
#undef DAT_10011eb0
#undef DAT_10011eb4
#undef DAT_10011eb8
#undef auStack_230
#undef local_24


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xea1cU)
 */

int pf_png32_10011ebc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_100126e8((undefined4 *)(param_1 + 0x40));
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xea38U)
 */

uint pf_png32_10011ed8(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint a;
  uint a_00;
  uint uVar4;

  a_00 = 1;
  a = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar4 + uVar3) {
    uVar4 = param_2 - uVar3;
    if (0x15af < uVar4) {
      uVar4 = 0x15b0;
    }
    pbVar1 = (byte *)(param_1 + uVar3);
    for (uVar2 = uVar4; uVar2 != 0; uVar2 = uVar2 - 1) {
      a_00 = a_00 + *pbVar1;
      a = a_00 + a;
      pbVar1 = pbVar1 + 1;
    }
    a_00 = pf_png32_10003520(a_00,0xfff1);
    a = pf_png32_10003520(a,0xfff1);
  }
  return a_00 | a << 0x10;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xead0U)
 */

int pf_png32_10011f70(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_100101ac(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}



#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xeb30U)
 */

byte pf_png32_10011fd0(int *param_1,int param_2,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte unaff_r8;
  uint uVar7;
  int iVar8;

  bVar1 = 0;
  if ((*(char *)(param_2 + 0x50) == '\x01') && (uVar7 = *(uint *)(param_2 + 0x4c), uVar7 != 0)) {
    iVar4 = 0;
    iVar8 = 0;
    uVar5 = 0;
    for (uVar6 = 1; uVar6 <= uVar7; uVar6 = uVar6 + 1) {
      unaff_r8 = 0;
      local_24 = 0;
      iVar2 = pf_png32_10011c04(param_1,1,&local_24);
      if (iVar2 == 0) break;
      iVar2 = *(int *)(param_2 + uVar6 * 4);
      local_24 = local_24 | uVar5;
      uVar3 = iVar2 + iVar4;
      if (local_24 < uVar3) {
        uVar5 = (local_24 - iVar4) + iVar8;
        if (uVar5 < *(uint *)(param_2 + 0x44)) {
          unaff_r8 = 1;
          *param_3 = (uint)*(ushort *)(*(int *)(param_2 + 0x40) + uVar5 * 2);
        }
        break;
      }
      iVar8 = iVar2 + iVar8;
      uVar7 = *(uint *)(param_2 + 0x4c);
      uVar5 = local_24 << 1;
      iVar4 = uVar3 * 2;
    }
    bVar1 = uVar6 <= uVar7 & unaff_r8;
  }
  return bVar1;
}

#undef local_24


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xec1cU)
 */

int pf_png32_100120bc(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_100101ac(param_1,uVar2);
    iVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + iVar1) = *param_2;
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 + 1 + -1;
}



#define local_b0 (*(uint (*)[16])(frame + 16))
#define local_70 (*(undefined2 (*)[32])(frame + 80))
#define local_30 (*(void * *)(frame + 144))
#define local_2c (*(undefined4 *)(frame + 148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xec7cU)
 */

undefined4 pf_png32_1001211c(int *param_1,int *param_2,undefined4 param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  pf_png32_10003f74(local_70,0,0x51);
  pf_png32_1001237c((int)param_2,(int)local_70);
  local_2c = 0;
  pf_png32_100065e4(local_30);
  iVar2 = param_1[1];
  puVar3 = (uint *)*param_1;
  iVar4 = iVar2 << 2;
  while (iVar4 != 0) {
    uVar5 = *puVar3;
    if (0xf < uVar5) goto LAB_100121e4;
    iVar4 = iVar4 + -4;
    puVar3 = puVar3 + 1;
    param_2[uVar5] = param_2[uVar5] + 1;
    if (uVar5 < (uint)param_2[0x13]) {
      uVar5 = param_2[0x13];
    }
    param_2[0x13] = uVar5;
  }
  if (*param_2 == iVar2) {
LAB_10012280:
    *(char *)(param_2 + 0x14) = (char)param_3;
  }
  else {
    iVar4 = 1;
    iVar2 = 1;
    do {
      if (iVar2 == 0x10) {
        local_b0[1] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        local_b0[2] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        local_b0[3] = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar5 = 0;
        local_b0[0] = 0;
        local_b0[4] = 0;
        local_b0[8] = 0;
        local_b0[0xc] = 0;
        local_b0[5] = local_b0[1];
        local_b0[6] = local_b0[2];
        local_b0[7] = local_b0[3];
        local_b0[9] = local_b0[1];
        local_b0[10] = local_b0[2];
        local_b0[0xb] = local_b0[3];
        local_b0[0xd] = local_b0[1];
        local_b0[0xe] = local_b0[2];
        local_b0[0xf] = local_b0[3];
        for (iVar4 = 1; iVar4 != 0x10; iVar4 = iVar4 + 1) {
          iVar2 = param_2[iVar4];
          local_b0[iVar4] = uVar5;
          uVar5 = iVar2 + uVar5;
        }
        local_70[0] = 0;
        pf_png32_100123b8(param_2 + 0x10,uVar5,local_70);
        iVar8 = param_2[0x10];
        iVar4 = *param_1;
        iVar2 = param_1[1];
        for (iVar7 = 0; iVar2 != iVar7; iVar7 = iVar7 + 1) {
          iVar6 = *(int *)(iVar4 + iVar7 * 4);
          if (iVar6 != 0) {
            uVar5 = local_b0[iVar6];
            local_b0[iVar6] = uVar5 + 1;
            *(short *)(iVar8 + uVar5 * 2) = (short)iVar7;
          }
        }
        param_3 = 1;
        goto LAB_10012280;
      }
      piVar1 = param_2 + iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 * 2 - *piVar1;
    } while (-1 < iVar4);
LAB_100121e4:
    param_3 = 0;
  }
  return param_3;
}

#undef local_b0
#undef local_70
#undef local_30
#undef local_2c


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xedf4U)
 */

int * pf_png32_10012294(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_100122c0(param_1,param_2,param_3);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xee20U)
 */

void pf_png32_100122c0(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    pf_png32_10012324(param_1,param_2);
    return;
  }
  pf_png32_100107c4(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xee84U)
 */

void pf_png32_10012324(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    pf_png32_100107c4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xeedcU)
 */

int pf_png32_1001237c(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10003f04((void *)param_1,(void *)param_2,0x40);
  pf_png32_100123c4((undefined4 *)(param_1 + 0x40),(undefined4 *)(param_2 + 0x40));
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xef18U)
 */

void pf_png32_100123b8(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_10012418(param_1,param_2,param_3);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xef24U)
 */

undefined4 * pf_png32_100123c4(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  if (param_1 != param_2) {
    param_1[1] = 0;
    pf_png32_100065e4((void *)*param_1);
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xef78U)
 */

void pf_png32_10012418(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;

  if (param_2 < (uint)param_1[1]) {
    pf_png32_10012488(param_1,param_2);
    return;
  }
  pf_png32_100124ec(param_1,param_2);
  uVar2 = param_1[1];
  iVar3 = uVar2 << 1;
  while (uVar2 < param_2) {
    uVar2 = uVar2 + 1;
    uVar1 = *param_3;
    puVar4 = (undefined2 *)(*param_1 + iVar3);
    param_1[1] = uVar2;
    iVar3 = iVar3 + 2;
    *puVar4 = uVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xefe8U)
 */

void pf_png32_10012488(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined2 *puVar3;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    pf_png32_100124ec(param_1,param_2);
    uVar1 = param_1[1];
    iVar2 = uVar1 << 1;
    while (uVar1 < param_2) {
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
      puVar3 = (undefined2 *)(*param_1 + iVar2);
      iVar2 = iVar2 + 2;
      *puVar3 = 0;
    }
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf04cU)
 */

void pf_png32_100124ec(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_10012564(param_2);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar5 = (undefined2 *)((int)pvVar1 + iVar3);
      puVar6 = (undefined2 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 2;
      *puVar5 = *puVar6;
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf0c4U)
 */

void * pf_png32_10012564(uint count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  pvVar1 = pf_png32_100065b4(count << 1);
  return pvVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf0d8U)
 */

int pf_png32_10012578(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_100107c4(param_1,uVar2);
    iVar1 = param_1[1];
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar1 * 4) = *param_2;
  param_1[1] = iVar1 + 1;
  return iVar3 + (iVar1 + 1) * 4 + -4;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf130U)
 */

int * pf_png32_100125d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_10012608(param_1,0,param_2,param_3);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf168U)
 */

int pf_png32_10012608(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_2 - iVar2 >> 2;
  }
  uVar1 = (uint)((int)param_4 - (int)param_3) >> 2;
  if (uVar1 != 0) {
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    uVar8 = uVar7;
    if (uVar4 < uVar7 + uVar1) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar8 = uVar4;
        uVar4 = uVar8 << 1;
      } while (uVar8 < uVar7 + uVar1);
      pf_png32_100107c4(param_1,uVar8);
      uVar7 = param_1[1];
      uVar8 = uVar7;
    }
    while (uVar6 < uVar7) {
      puVar5 = (undefined4 *)(*param_1 + (uVar7 - 1) * 4);
      puVar5[uVar1] = *puVar5;
      uVar7 = uVar7 - 1;
    }
    iVar2 = uVar6 << 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + iVar2) = *param_3;
      iVar2 = iVar2 + 4;
    }
    param_1[1] = uVar8 + uVar1;
    iVar2 = *param_1;
  }
  iVar3 = iVar2 + uVar6 * 4;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  return iVar3;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf248U)
 */

undefined4 * pf_png32_100126e8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_100065e4((void *)*param_1);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf26cU)
 */

undefined4 * pf_png32_1001270c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_100065e4((void *)*param_1);
  return param_1;
}



#undef DAT_100127c8
#define DAT_100127c8 (*(uint *)(((uintptr_t)pf_png32_state + 0xf328U)))
#undef DAT_100127cc
#define DAT_100127cc (*(char * *)(((uintptr_t)pf_png32_state + 0xf32cU)))
#undef DAT_100127d0
#define DAT_100127d0 (*(int *)(((uintptr_t)pf_png32_state + 0xf330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf290U)
 */

uint pf_png32_10012730(uint param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  iVar2 = DAT_100127d0;
  pcVar1 = DAT_100127cc;
  uVar4 = DAT_100127c8;
  if (*DAT_100127cc == '\0') {
    for (uVar7 = 0; uVar7 != 0x100; uVar7 = uVar7 + 1) {
      uVar6 = uVar7;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar3 = uVar4 ^ uVar6 >> 1;
        if ((uVar6 & 1) == 0) {
          uVar3 = uVar6 >> 1;
        }
        uVar6 = uVar3;
      }
      *(uint *)(iVar2 + uVar7 * 4) = uVar6;
    }
    *pcVar1 = '\x01';
  }
  uVar4 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar4 = *(uint *)(iVar2 + ((*param_2 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
    param_2 = param_2 + 1;
  }
  return ~uVar4;
}

#undef DAT_100127c8
#undef DAT_100127cc
#undef DAT_100127d0


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf334U)
 */

void pf_png32_100127d4(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;

  iVar1 = param_1[1];
  if (iVar1 == param_1[2]) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    pf_png32_10012878(param_1,uVar2);
    iVar1 = param_1[1];
  }
  uVar3 = param_2[1];
  puVar4 = (undefined4 *)(*param_1 + iVar1 * 8);
  *puVar4 = *param_2;
  puVar4[1] = uVar3;
  param_1[1] = param_1[1] + 1;
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf390U)
 */

void pf_png32_10012830(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  iVar2 = iVar1 * 0x28 + -0xc;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    pf_png32_1001270c((undefined4 *)(*param_1 + iVar2));
    iVar2 = iVar2 + -0x28;
  }
  param_1[1] = 0;
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf3d8U)
 */

void pf_png32_10012878(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_100065b4(param_2 << 3);
    uVar2 = param_1[1];
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      uVar5 = ((undefined4 *)(*param_1 + iVar3))[1];
      puVar6 = (undefined4 *)((int)pvVar1 + iVar3);
      *puVar6 = *(undefined4 *)(*param_1 + iVar3);
      iVar3 = iVar3 + 8;
      puVar6[1] = uVar5;
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



#undef DAT_10012930
#define DAT_10012930 (*(int *)(((uintptr_t)pf_png32_state + 0xf490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf454U)
 */

int pf_png32_100128f4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0xc);
  iVar1 = 0;
  if (uVar2 < 7) {
    if ((0x5dU >> (uVar2 & 0xff) & 1) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8) * *(int *)(DAT_10012930 + uVar2 * 4);
  }
  return iVar1;
}

#undef DAT_10012930


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf494U)
 */

undefined4 pf_png32_10012934(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;

  uVar3 = 0;
  iVar4 = param_2[1];
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  iVar4 = iVar4 << 3;
  iVar2 = *param_2;
  while( true ) {
    if (iVar4 == 0) {
      pf_png32_100101ac(param_1,uVar3);
      puVar5 = (undefined4 *)*param_2;
      for (iVar4 = param_2[1] << 3; iVar4 != 0; iVar4 = iVar4 + -8) {
        pf_png32_10010edc(param_1,*param_1 + param_1[1],(undefined1 *)*puVar5,
                           (undefined1 *)*puVar5 + puVar5[1]);
        puVar5 = puVar5 + 2;
      }
      bVar1 = pf_png32_10010fb4(param_1,param_1 + 3);
      return (uint)bVar1;
    }
    if (CARRY4(*(uint *)(iVar2 + 4),uVar3)) break;
    uVar3 = *(uint *)(iVar2 + 4) + uVar3;
    iVar4 = iVar4 + -8;
    iVar2 = iVar2 + 8;
  }
  return 0;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf554U)
 */

undefined4 pf_png32_100129f4(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = 0;
  if ((!CARRY4(param_3,uVar2)) && (uVar2 + param_3 <= *(uint *)(param_1 + 0x10))) {
    pf_png32_10003f04((void *)param_2,(void *)(*(int *)(param_1 + 0xc) + uVar2),param_3);
    uVar1 = 1;
    *(uint *)(param_1 + 0x18) = uVar2 + param_3;
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf5a0U)
 */

undefined4
pf_png32_10012a40(undefined4 param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                  uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  switch((uintptr_t)(param_1)) {
  case 1:
    uVar8 = param_5;
    if (param_6 < param_5) {
      uVar8 = param_6;
    }
    iVar2 = param_5 - uVar8;
    pcVar4 = param_3;
    pcVar3 = param_2;
    for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    }
    pcVar3 = param_2 + uVar8;
    pcVar4 = param_3 + uVar8;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pcVar3 = pcVar3[-param_6] + *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    break;
  case 2:
    if (param_4 != (char *)0x0) {
      for (; param_5 != 0; param_5 = param_5 - 1) {
        *param_2 = *param_4 + *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      return 1;
    }
  case 0:
    pf_png32_10003f04(param_2,param_3,param_5);
    break;
  case 3:
    if (param_4 == (char *)0x0) {
      if (param_5 != 0) {
        uVar8 = param_5;
        if (param_6 < param_5) {
          uVar8 = param_6;
        }
        iVar2 = param_5 - uVar8;
        pcVar4 = param_3;
        pcVar3 = param_2;
        for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        pcVar3 = param_2 + uVar8;
        pcVar4 = param_3 + uVar8;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar3 = *pcVar4 + ((byte)pcVar3[-param_6] >> 1);
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        uVar6 = 0;
        if (param_6 <= uVar8) {
          uVar6 = (uint)(byte)param_2[uVar8 - param_6];
        }
        param_2[uVar8] = param_3[uVar8] + (char)(uVar6 + (byte)param_4[uVar8] >> 1);
      }
    }
    break;
  case 4:
    if (param_4 == (char *)0x0) {
      uVar8 = param_5;
      if (param_6 < param_5) {
        uVar8 = param_6;
      }
      iVar2 = param_5 - uVar8;
      pcVar4 = param_3;
      pcVar3 = param_2;
      for (uVar6 = uVar8; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      pcVar3 = param_2 + uVar8;
      pcVar4 = param_3 + uVar8;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar3 = pcVar3[-param_6] + *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    else {
      for (uVar8 = 0; param_5 != uVar8; uVar8 = uVar8 + 1) {
        uVar6 = 0;
        uVar7 = 0;
        if (param_6 <= uVar8) {
          uVar7 = (uint)(byte)param_4[uVar8 - param_6];
          uVar6 = (uint)(byte)param_2[uVar8 - param_6];
        }
        uVar11 = (uint)(byte)param_4[uVar8];
        uVar1 = uVar6 - uVar7;
        uVar9 = (uVar1 + uVar11) - uVar7;
        if ((int)uVar9 < 0) {
          uVar9 = -uVar9;
        }
        if ((int)uVar1 < 0) {
          uVar1 = -uVar1;
        }
        uVar10 = uVar11;
        if (uVar9 < uVar1) {
          uVar10 = uVar7;
        }
        uVar11 = uVar11 - uVar7;
        if ((int)uVar11 < 0) {
          uVar11 = -uVar11;
        }
        if (uVar9 < uVar11) {
          uVar6 = uVar10;
        }
        cVar5 = (char)uVar6;
        if (uVar1 < uVar11) {
          cVar5 = (char)uVar10;
        }
        param_2[uVar8] = param_3[uVar8] + cVar5;
      }
    }
    break;
  default:
    return 0;
  }
  return 1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf834U)
 */

void pf_png32_10012cd4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_100136a4(param_1 + 3);
  pf_png32_100136a4(param_1);
  return;
}



#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf854U)
 */

void pf_png32_10012cf4(int param_1,int param_2,int *param_3,int *param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  uStack_24 = (int)(uintptr_t)(frame + 64) - 8;
  iVar6 = 0;
  pf_png32_10003f74((void *)param_2,0,0x800);
  uStack_24 = uStack_24 & 0xffffff;
  pf_png32_10010050(param_3,0x10,(undefined1 *)((int)&uStack_24 + 3));
  iVar1 = *param_3;
  param_4[1] = 0;
  if (param_1 == 0) {
    *(undefined1 *)(iVar1 + 7) = 1;
    *(undefined1 *)(*param_3 + 8) = 0xff;
    for (; iVar6 != 0x100; iVar6 = iVar6 + 1) {
      PF_PART2(uStack_24, 0) = CONCAT11((char)iVar6,(undefined1)uStack_24);
      pf_png32_10011f70(param_4,(undefined1 *)((int)&uStack_24 + 1));
    }
  }
  else {
    *(undefined1 *)(iVar1 + 3) = 0xc;
    for (iVar1 = 0; iVar1 != 0xc; iVar1 = iVar1 + 1) {
      PF_PART3(uStack_24, 0) = CONCAT12((char)iVar1,(undefined2)uStack_24);
      pf_png32_10011f70(param_4,(undefined1 *)((int)&uStack_24 + 2));
    }
  }
  iVar6 = *param_3;
  iVar8 = 0;
  iVar1 = 0;
  for (iVar3 = 1; iVar3 != 0x11; iVar3 = iVar3 + 1) {
    iVar4 = *param_4;
    iVar7 = iVar1 << 1;
    for (uVar5 = 0; uVar5 < *(byte *)(iVar6 + -1 + iVar3); uVar5 = uVar5 + 1) {
      uVar2 = (uint)*(byte *)(iVar4 + iVar8 + uVar5);
      iVar7 = iVar7 + 2;
      *(int *)(param_2 + 0x400 + uVar2 * 4) = iVar3;
      *(uint *)(param_2 + uVar2 * 4) = iVar1 + uVar5;
    }
    iVar8 = iVar8 + uVar5;
    iVar1 = iVar7;
  }
  return;
}

#undef uStack_24


#define local_14 (*(undefined1 *)(frame + 28))
#define local_13 (*(undefined1 (*)[2])(frame + 29))
#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf984U)
 */

uint pf_png32_10012e24(uint *param_1,byte param_2,undefined4 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 0;
  if ((uint)param_3[1] < 0xfffe) {
    PF_PART4(local_14,0) = CONCAT31((uint3)param_2,0xff);
    iVar3 = param_3[1] + 2;
    PF_PART4(local_14,0) = CONCAT13((char)iVar3,CONCAT12((char)((uint)iVar3 >> 8),PF_PART4(local_14,0)));
    bVar1 = pf_png32_1000e004(param_1,(int)&local_14,4);
    uVar2 = 0;
    if (bVar1) {
      bVar1 = pf_png32_1000e004(param_1,*param_3,param_3[1]);
      uVar2 = (uint)bVar1;
    }
  }
  return uVar2;
}

#undef local_14
#undef local_13
#undef local_11


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xf9fcU)
 */

int pf_png32_10012e9c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar1;
  }
  iVar6 = (int)param_4 - (int)param_3;
  if (iVar6 != 0) {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar2 + iVar6) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 << 1;
      } while (uVar5 < uVar2 + iVar6);
      pf_png32_100101ac(param_1,uVar5);
      uVar2 = param_1[1];
    }
    while (uVar7 < uVar2) {
      puVar3 = (undefined1 *)(*param_1 + (uVar2 - 1));
      puVar3[iVar6] = *puVar3;
      uVar2 = uVar2 - 1;
    }
    uVar2 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar2) = *param_3;
      uVar2 = uVar2 + 1;
    }
    iVar1 = *param_1;
    param_1[1] = param_1[1] + iVar6;
  }
  iVar6 = iVar1 + uVar7;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  return iVar6;
}



#undef DAT_10013150
#define DAT_10013150 (*(double *)(((uintptr_t)pf_png32_state + 0xfcb0U)))
#undef DAT_10013158
#define DAT_10013158 (*(double *)(((uintptr_t)pf_png32_state + 0xfcb8U)))
#undef DAT_10013160
#define DAT_10013160 (*(double *)(((uintptr_t)pf_png32_state + 0xfcc0U)))
#undef DAT_10013168
#define DAT_10013168 (*(double *)(((uintptr_t)pf_png32_state + 0xfcc8U)))
#undef DAT_10013170
#define DAT_10013170 (*(char * *)(((uintptr_t)pf_png32_state + 0xfcd0U)))
#undef DAT_10013174
#define DAT_10013174 (*(double * *)(((uintptr_t)pf_png32_state + 0xfcd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfad4U)
 */

void pf_png32_10012f74(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;

  pcVar4 = DAT_10013170;
  dVar3 = DAT_10013158;
  dVar2 = DAT_10013150;
  if (*DAT_10013170 == '\0') {
    dVar16 = 0.0;
    pdVar8 = DAT_10013174;
    for (iVar12 = 0; iVar12 != 8; iVar12 = iVar12 + 1) {
      dVar17 = 0.0;
      for (iVar10 = 0; iVar10 != 0x40; iVar10 = iVar10 + 8) {
        dVar19 = pf_png32_10004698((dVar16 + dVar16 + 1.0) * dVar17 * dVar2 * dVar3);
        dVar17 = dVar17 + 1.0;
        *(double *)((int)pdVar8 + iVar10) = dVar19;
      }
      dVar16 = dVar16 + 1.0;
      pdVar8 = pdVar8 + 8;
    }
    *pcVar4 = '\x01';
  }
  pdVar8 = DAT_10013174;
  dVar3 = DAT_10013168;
  dVar2 = DAT_10013160;
  for (iVar12 = 0; iVar12 != 8; iVar12 = iVar12 + 1) {
    uVar13 = 0;
    pdVar9 = pdVar8;
    dVar16 = 1.0;
    if (iVar12 == 0) {
      dVar16 = dVar2;
    }
    while (uVar13 != 8) {
      dVar17 = 0.0;
      iVar10 = param_1;
      for (iVar11 = 0; iVar11 != 8; iVar11 = iVar11 + 1) {
        pdVar5 = pdVar9;
        for (iVar7 = 0; iVar7 != 0x40; iVar7 = iVar7 + 8) {
          dVar19 = *pdVar5;
          pdVar5 = pdVar5 + 8;
          dVar17 = dVar17 + *(double *)(iVar10 + iVar7) * dVar19 * pdVar8[iVar11 * 8 + iVar12];
        }
        iVar10 = iVar10 + 0x40;
      }
      bVar14 = uVar13 == 0;
      uVar6 = uVar13 | iVar12 << 3;
      pdVar9 = pdVar9 + 1;
      uVar13 = uVar13 + 1;
      dVar19 = 0.25;
      if (bVar14) {
        dVar19 = dVar3;
      }
      dVar18 = (double)VectorUnsignedToFloat
                                 ((uint)*(byte *)(param_2 + uVar6),(byte)(in_fpscr >> 0x16) & 3);
      dVar18 = (dVar16 * dVar19 * dVar17) / dVar18;
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar18 < 0.0) << 0x1f;
      in_fpscr = uVar1 | (uint)NAN(dVar18) << 0x1c;
      dVar17 = -0.5;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        dVar17 = 0.5;
      }
      uVar15 = VectorFloatToSigned(dVar18 + dVar17,3);
      *(undefined4 *)(param_3 + uVar6 * 4) = uVar15;
    }
  }
  return;
}

#undef DAT_10013150
#undef DAT_10013158
#undef DAT_10013160
#undef DAT_10013168
#undef DAT_10013170
#undef DAT_10013174


#undef DAT_100132d8
#define DAT_100132d8 (*(int *)(((uintptr_t)pf_png32_state + 0xfe38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfcd8U)
 */

void pf_png32_10013178(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  uint uVar6;
  uint uVar7;

  iVar1 = *param_3;
  iVar4 = *param_2;
  *param_3 = iVar4;
  uVar7 = iVar4 - iVar1;
  uVar2 = pf_png32_10013334(uVar7);
  pf_png32_10013358(param_1,param_4,uVar2);
  uVar6 = 0;
  uVar5 = 0;
  if (uVar2 != 0) {
    iVar1 = extraout_r0;
    if (0x7fffffff < uVar7) {
      iVar1 = -1;
    }
    if (-1 < (int)uVar7) {
      uVar5 = uVar7;
    }
    if (0x7fffffff < uVar7) {
      uVar5 = uVar7 + ~(iVar1 << (uVar2 & 0xff));
    }
  }
  pf_png32_10013368(param_1,uVar5,uVar2,(uint3)extraout_r3);
  iVar1 = DAT_100132d8;
  for (iVar4 = 1; iVar4 != 0x40; iVar4 = iVar4 + 1) {
    uVar5 = param_2[*(int *)(iVar1 + iVar4 * 4)];
    if (uVar5 == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar2 = uVar6 << 4;
      for (; 0xf < uVar6; uVar6 = uVar6 - 0x10) {
        pf_png32_10013358(param_1,param_5,0xf0);
        uVar2 = uVar2 - 0x100;
      }
      uVar7 = pf_png32_10013334(uVar5);
      pf_png32_10013358(param_1,param_5,uVar7 | uVar2);
      uVar6 = 0;
      uVar2 = 0;
      if (uVar7 != 0) {
        iVar3 = extraout_r0_00;
        if (0x7fffffff < uVar5) {
          iVar3 = -1;
        }
        if (-1 < (int)uVar5) {
          uVar2 = uVar5;
        }
        if (0x7fffffff < uVar5) {
          uVar2 = uVar5 + ~(iVar3 << (uVar7 & 0xff));
        }
      }
      pf_png32_10013368(param_1,uVar2,uVar7,(uint3)extraout_r3_00);
    }
  }
  if (uVar6 == 0) {
    return;
  }
  pf_png32_10013358(param_1,param_5,0);
  return;
}

#undef DAT_100132d8


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfe3cU)
 */

undefined4 * pf_png32_100132dc(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_100101ac(param_1,param_3);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pf_png32_100120bc(param_1,(undefined1 *)param_2);
    param_2 = param_2 + 1;
  }
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfe94U)
 */

uint pf_png32_10013334(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (value < 0) {
    value = -value;
  }
  for (; value != 0; value = (uint)value >> 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfeb8U)
 */

void pf_png32_10013358(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;

  puVar1 = (uint *)(param_2 + param_3 * 4);
  uVar2 = *puVar1;
  pf_png32_10013368(param_1,uVar2,puVar1[0x100],(uint3)uVar2);
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xfec8U)
 */

void pf_png32_10013368(int param_1,uint param_2,uint param_3,uint3 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint uVar4;
  uint extraout_r3 = 0;
  uint uVar5;

  uVar4 = (uint)param_4;
  uVar5 = param_3;
  while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
    bVar2 = (byte)(param_2 >> (uVar5 & 0xff)) & 1;
    bVar1 = *(char *)(param_1 + 0xc) << 1;
    *(byte *)(param_1 + 0xc) = bVar2 | bVar1;
    iVar3 = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 == 8) {
      pf_png32_100133d8((int *)param_1,bVar2 | bVar1,param_3,(int3)uVar4);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      param_3 = extraout_r2;
      uVar4 = extraout_r3;
    }
  }
  return;
}



#define local_d (*(char *)(frame + 19))
#define auStack_10 (*(undefined1 (*)[3])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xff38U)
 */

void pf_png32_100133d8(int *param_1,undefined1 param_2,undefined4 param_3,undefined3 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  PF_PART4(auStack_10,0) = CONCAT13(param_2,param_4);
  pf_png32_100120bc(param_1,&local_d);
  if (local_d == -1) {
    PF_PART4(auStack_10,0) = CONCAT13(0xff,CONCAT12(0,PF_PART2(auStack_10, 0)));
    pf_png32_10011f70(param_1,auStack_10 + 2);
  }
  return;
}

#undef local_d
#undef auStack_10


/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xff78U)
 */

void pf_png32_10013418(int *in_r0,int in_r1,undefined1 *in_r2,int in_r3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_png32_10010edc(in_r0,in_r1,in_r2,in_r2 + in_r3);
  return;
}


/* Pooka's Free Software License. */
void pf_png32_10013420(uint32_t *v,uint32_t value){uint8_t bytes[4]={(uint8_t)(value>>24),(uint8_t)(value>>16),(uint8_t)(value>>8),(uint8_t)(value>>0)};pf_png32_10010edc(v,v[0]+v[1],bytes,bytes+4);}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xffb0U)
 */

void pf_png32_10013450(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 + 4U <= (uint)param_1[1]) {
    *(uint *)(*param_1 + param_2) =
         param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
         param_3 >> 0x18;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0xffccU)
 */

int pf_png32_1001346c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar1;
  }
  iVar6 = (int)param_4 - (int)param_3;
  if (iVar6 != 0) {
    uVar2 = param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < uVar2 + iVar6) {
      if (uVar4 == 0) {
        uVar4 = 4;
      }
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 << 1;
      } while (uVar5 < uVar2 + iVar6);
      pf_png32_100101ac(param_1,uVar5);
      uVar2 = param_1[1];
    }
    while (uVar7 < uVar2) {
      puVar3 = (undefined1 *)(*param_1 + (uVar2 - 1));
      puVar3[iVar6] = *puVar3;
      uVar2 = uVar2 - 1;
    }
    uVar2 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar2) = *param_3;
      uVar2 = uVar2 + 1;
    }
    iVar1 = *param_1;
    param_1[1] = param_1[1] + iVar6;
  }
  iVar6 = iVar1 + uVar7;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  return iVar6;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x100a4U)
 */

int * pf_png32_10013544(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_10013570(param_1,param_2);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x100d0U)
 */

void pf_png32_10013570(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else {
    if (param_2 <= (uint)param_1[1]) {
      return;
    }
    pf_png32_100135cc(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1012cU)
 */

void pf_png32_100135cc(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = pf_png32_1001362c(param_2);
    for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined4 *)((int)pvVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    pf_png32_100065e4((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x1018cU)
 */

void * pf_png32_1001362c(uint count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (count == 0) {
    return (void *)0x0;
  }
  pvVar1 = pf_png32_100065b4(count << 2);
  return pvVar1;
}


/* Pooka's Free Software License. */
void pf_png32_10013640(uint32_t *v,uint32_t value){uint8_t bytes[4]={(uint8_t)(value>>0),(uint8_t)(value>>8),(uint8_t)(value>>16),(uint8_t)(value>>24)};pf_png32_10010edc(v,v[0]+v[1],bytes,bytes+4);}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x101ccU)
 */

undefined4 * pf_png32_1001366c(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  pf_png32_10010edc(param_1,0,param_2,param_3);
  return param_1;
}



/* Recovered working notes; Pooka's Free Software License.
 * Address: ((uintptr_t)pf_png32_state+0x10204U)
 */

undefined4 * pf_png32_100136a4(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  pf_png32_100065e4((void *)*param_1);
  return param_1;
}


static int pf_png32_initialized;static void pf_png32_init(void){if(pf_png32_initialized)return;*(uint32_t *)(pf_png32_state+68448)=(uint32_t)((uintptr_t)pf_png32_100034a0);*(uint32_t *)(pf_png32_state+68452)=(uint32_t)((uintptr_t)pf_png32_10003520);*(uint32_t *)(pf_png32_state+68460)=(uint32_t)((uintptr_t)pf_png32_state+66126);*(uint32_t *)(pf_png32_state+68464)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68468)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68472)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68476)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68480)=(uint32_t)((uintptr_t)pf_png32_state+66126);*(uint32_t *)(pf_png32_state+68484)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68488)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68492)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+68496)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+84836)=(uint32_t)((uintptr_t)pf_png32_state+68508);*(uint32_t *)(pf_png32_state+84840)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+656)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1144)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1212)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1292)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1348)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1412)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+1576)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+3528)=(uint32_t)((uintptr_t)pf_png32_state+66124);*(uint32_t *)(pf_png32_state+3540)=(uint32_t)((uintptr_t)pf_png32_state+68460);*(uint32_t *)(pf_png32_state+7844)=(uint32_t)((uintptr_t)pf_png32_state+66170);*(uint32_t *)(pf_png32_state+7988)=(uint32_t)((uintptr_t)pf_png32_state+66129);*(uint32_t *)(pf_png32_state+8144)=(uint32_t)((uintptr_t)pf_png32_state+66136);*(uint32_t *)(pf_png32_state+8148)=(uint32_t)((uintptr_t)pf_png32_state+66153);*(uint32_t *)(pf_png32_state+8296)=(uint32_t)((uintptr_t)pf_png32_state+68576);*(uint32_t *)(pf_png32_state+8552)=(uint32_t)((uintptr_t)pf_png32_state+68584);*(uint32_t *)(pf_png32_state+8556)=(uint32_t)((uintptr_t)pf_png32_state+68588);*(uint32_t *)(pf_png32_state+8692)=(uint32_t)((uintptr_t)pf_png32_state+68584);*(uint32_t *)(pf_png32_state+8696)=(uint32_t)((uintptr_t)pf_png32_state+68588);*(uint32_t *)(pf_png32_state+8788)=(uint32_t)((uintptr_t)pf_png32_state+66173);*(uint32_t *)(pf_png32_state+8792)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+8856)=(uint32_t)((uintptr_t)pf_png32_state+66176);*(uint32_t *)(pf_png32_state+8860)=(uint32_t)((uintptr_t)pf_png32_state+66211);*(uint32_t *)(pf_png32_state+8864)=(uint32_t)((uintptr_t)pf_png32_state+66268);*(uint32_t *)(pf_png32_state+8868)=(uint32_t)((uintptr_t)pf_png32_state+66321);*(uint32_t *)(pf_png32_state+8872)=(uint32_t)((uintptr_t)pf_png32_state+66359);*(uint32_t *)(pf_png32_state+8876)=(uint32_t)((uintptr_t)pf_png32_state+66407);*(uint32_t *)(pf_png32_state+8948)=(uint32_t)((uintptr_t)pf_png32_state+66410);*(uint32_t *)(pf_png32_state+8952)=(uint32_t)((uintptr_t)pf_png32_state+66407);*(uint32_t *)(pf_png32_state+9788)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+9792)=(uint32_t)((uintptr_t)pf_png32_state+66558);*(uint32_t *)(pf_png32_state+9796)=(uint32_t)((uintptr_t)pf_png32_state+66571);*(uint32_t *)(pf_png32_state+9800)=(uint32_t)((uintptr_t)pf_png32_state+66585);*(uint32_t *)(pf_png32_state+9804)=(uint32_t)((uintptr_t)pf_png32_state+66173);*(uint32_t *)(pf_png32_state+10016)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+10524)=(uint32_t)((uintptr_t)pf_png32_state+66128);*(uint32_t *)(pf_png32_state+10944)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+10980)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+11100)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+11268)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+11508)=(uint32_t)((uintptr_t)pf_png32_state+84836);*(uint32_t *)(pf_png32_state+12136)=(uint32_t)((uintptr_t)pf_png32_state+66535);*(uint32_t *)(pf_png32_state+12140)=(uint32_t)((uintptr_t)pf_png32_state+66448);*(uint32_t *)(pf_png32_state+12144)=(uint32_t)((uintptr_t)pf_png32_state+66461);*(uint32_t *)(pf_png32_state+12148)=(uint32_t)((uintptr_t)pf_png32_state+66471);*(uint32_t *)(pf_png32_state+12152)=(uint32_t)((uintptr_t)pf_png32_state+66491);*(uint32_t *)(pf_png32_state+12156)=(uint32_t)((uintptr_t)pf_png32_state+66505);*(uint32_t *)(pf_png32_state+12160)=(uint32_t)((uintptr_t)pf_png32_state+66523);*(uint32_t *)(pf_png32_state+12164)=(uint32_t)((uintptr_t)pf_png32_state+66552);*(uint32_t *)(pf_png32_state+12168)=(uint32_t)((uintptr_t)pf_png32_state+66445);*(uint32_t *)(pf_png32_state+12208)=(uint32_t)((uintptr_t)pf_png32_state+69100);*(uint32_t *)(pf_png32_state+12484)=(uint32_t)((uintptr_t)pf_png32_state+66696);*(uint32_t *)(pf_png32_state+12492)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+12792)=(uint32_t)((uintptr_t)pf_png32_state+66712);*(uint32_t *)(pf_png32_state+12800)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+12984)=(uint32_t)((uintptr_t)pf_png32_state+66728);*(uint32_t *)(pf_png32_state+12992)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+13176)=(uint32_t)((uintptr_t)pf_png32_state+66744);*(uint32_t *)(pf_png32_state+13184)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+13368)=(uint32_t)((uintptr_t)pf_png32_state+66760);*(uint32_t *)(pf_png32_state+13376)=(uint32_t)((uintptr_t)pf_png32_10006570);*(uint32_t *)(pf_png32_state+13612)=(uint32_t)((uintptr_t)pf_png32_state+69104);*(uint32_t *)(pf_png32_state+13780)=(uint32_t)((uintptr_t)pf_png32_state+69108);*(uint32_t *)(pf_png32_state+13836)=(uint32_t)((uintptr_t)pf_png32_state+69104);*(uint32_t *)(pf_png32_state+13860)=(uint32_t)((uintptr_t)pf_png32_state+69108);*(uint32_t *)(pf_png32_state+13908)=(uint32_t)((uintptr_t)pf_png32_state+69108);*(uint32_t *)(pf_png32_state+13968)=(uint32_t)((uintptr_t)pf_png32_state+69108);*(uint32_t *)(pf_png32_state+14140)=(uint32_t)((uintptr_t)pf_png32_state+69108);*(uint32_t *)(pf_png32_state+14404)=(uint32_t)((uintptr_t)pf_png32_state+68540);*(uint32_t *)(pf_png32_state+15640)=(uint32_t)((uintptr_t)pf_png32_state+67248);*(uint32_t *)(pf_png32_state+16396)=(uint32_t)((uintptr_t)pf_png32_state+67300);*(uint32_t *)(pf_png32_state+16400)=(uint32_t)((uintptr_t)pf_png32_state+66599);*(uint32_t *)(pf_png32_state+16404)=(uint32_t)((uintptr_t)pf_png32_state+67308);*(uint32_t *)(pf_png32_state+16800)=(uint32_t)((uintptr_t)pf_png32_state+66622);*(uint32_t *)(pf_png32_state+20952)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+20956)=(uint32_t)((uintptr_t)pf_png32_state+66776);*(uint32_t *)(pf_png32_state+21548)=(uint32_t)((uintptr_t)pf_png32_state+67300);*(uint32_t *)(pf_png32_state+21624)=(uint32_t)((uintptr_t)pf_png32_state+66599);*(uint32_t *)(pf_png32_state+21628)=(uint32_t)((uintptr_t)pf_png32_state+66646);*(uint32_t *)(pf_png32_state+22952)=(uint32_t)((uintptr_t)pf_png32_state+67308);*(uint32_t *)(pf_png32_state+24000)=(uint32_t)((uintptr_t)pf_png32_state+66651);*(uint32_t *)(pf_png32_state+24004)=(uint32_t)((uintptr_t)pf_png32_state+66656);*(uint32_t *)(pf_png32_state+24008)=(uint32_t)((uintptr_t)pf_png32_state+66661);*(uint32_t *)(pf_png32_state+24012)=(uint32_t)((uintptr_t)pf_png32_state+66666);*(uint32_t *)(pf_png32_state+24016)=(uint32_t)((uintptr_t)pf_png32_state+66671);*(uint32_t *)(pf_png32_state+24212)=(uint32_t)((uintptr_t)pf_png32_state+66676);*(uint32_t *)(pf_png32_state+24216)=(uint32_t)((uintptr_t)pf_png32_state+66617);*(uint32_t *)(pf_png32_state+24220)=(uint32_t)((uintptr_t)pf_png32_state+66612);*(uint32_t *)(pf_png32_state+25788)=(uint32_t)((uintptr_t)pf_png32_state+67316);*(uint32_t *)(pf_png32_state+25984)=(uint32_t)((uintptr_t)pf_png32_state+66640);*(uint32_t *)(pf_png32_state+33300)=(uint32_t)((uintptr_t)pf_png32_state+68388);*(uint32_t *)(pf_png32_state+36524)=(uint32_t)((uintptr_t)pf_png32_state+69112);*(uint32_t *)(pf_png32_state+36528)=(uint32_t)((uintptr_t)pf_png32_state+69120);*(uint32_t *)(pf_png32_state+40684)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+40688)=(uint32_t)((uintptr_t)pf_png32_state+66892);*(uint32_t *)(pf_png32_state+40908)=(uint32_t)((uintptr_t)pf_png32_state+68204);*(uint32_t *)(pf_png32_state+40912)=(uint32_t)((uintptr_t)pf_png32_state+68176);*(uint32_t *)(pf_png32_state+40916)=(uint32_t)((uintptr_t)pf_png32_state+68148);*(uint32_t *)(pf_png32_state+40920)=(uint32_t)((uintptr_t)pf_png32_state+68120);*(uint32_t *)(pf_png32_state+42080)=(uint32_t)((uintptr_t)pf_png32_state+66932);*(uint32_t *)(pf_png32_state+42088)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+42092)=(uint32_t)((uintptr_t)pf_png32_state+66681);*(uint32_t *)(pf_png32_state+43844)=(uint32_t)((uintptr_t)pf_png32_state+66952);*(uint32_t *)(pf_png32_state+43852)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+43856)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+43860)=(uint32_t)((uintptr_t)pf_png32_state+67300);*(uint32_t *)(pf_png32_state+43864)=(uint32_t)((uintptr_t)pf_png32_state+66612);*(uint32_t *)(pf_png32_state+43868)=(uint32_t)((uintptr_t)pf_png32_state+66671);*(uint32_t *)(pf_png32_state+43872)=(uint32_t)((uintptr_t)pf_png32_state+66617);*(uint32_t *)(pf_png32_state+45052)=(uint32_t)((uintptr_t)pf_png32_state+66980);*(uint32_t *)(pf_png32_state+45064)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+45068)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+45756)=(uint32_t)((uintptr_t)pf_png32_state+66988);*(uint32_t *)(pf_png32_state+45764)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+45768)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+45772)=(uint32_t)((uintptr_t)pf_png32_state+68232);*(uint32_t *)(pf_png32_state+49020)=(uint32_t)((uintptr_t)pf_png32_state+67000);*(uint32_t *)(pf_png32_state+49052)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+49056)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+49060)=(uint32_t)((uintptr_t)pf_png32_state+66684);*(uint32_t *)(pf_png32_state+49064)=(uint32_t)((uintptr_t)pf_png32_state+68258);*(uint32_t *)(pf_png32_state+49068)=(uint32_t)((uintptr_t)pf_png32_state+68322);*(uint32_t *)(pf_png32_state+49072)=(uint32_t)((uintptr_t)pf_png32_state+67316);*(uint32_t *)(pf_png32_state+49076)=(uint32_t)((uintptr_t)pf_png32_state+66687);*(uint32_t *)(pf_png32_state+51288)=(uint32_t)((uintptr_t)pf_png32_state+67068);*(uint32_t *)(pf_png32_state+51308)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+51312)=(uint32_t)((uintptr_t)pf_png32_state+66690);*(uint32_t *)(pf_png32_state+51316)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+52124)=(uint32_t)((uintptr_t)pf_png32_state+67176);*(uint32_t *)(pf_png32_state+52132)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+52136)=(uint32_t)((uintptr_t)pf_png32_state+66609);*(uint32_t *)(pf_png32_state+52140)=(uint32_t)((uintptr_t)pf_png32_state+67308);*(uint32_t *)(pf_png32_state+59204)=(uint32_t)((uintptr_t)pf_png32_state+67208);*(uint32_t *)(pf_png32_state+59212)=(uint32_t)((uintptr_t)pf_png32_state+84840);*(uint32_t *)(pf_png32_state+59216)=(uint32_t)((uintptr_t)pf_png32_state+69632);*(uint32_t *)(pf_png32_state+59220)=(uint32_t)((uintptr_t)pf_png32_state+71264);*(uint32_t *)(pf_png32_state+59224)=(uint32_t)((uintptr_t)pf_png32_10011ebc);*(uint32_t *)(pf_png32_state+59228)=(uint32_t)(0);*(uint32_t *)(pf_png32_state+59232)=(uint32_t)((uintptr_t)pf_png32_state+68044);*(uint32_t *)(pf_png32_state+59916)=(uint32_t)((uintptr_t)pf_png32_state+67688);*(uint32_t *)(pf_png32_state+59920)=(uint32_t)((uintptr_t)pf_png32_state+67572);*(uint32_t *)(pf_png32_state+59924)=(uint32_t)((uintptr_t)pf_png32_state+67924);*(uint32_t *)(pf_png32_state+59928)=(uint32_t)((uintptr_t)pf_png32_state+67804);*(uint32_t *)(pf_png32_state+62252)=(uint32_t)((uintptr_t)pf_png32_state+69716);*(uint32_t *)(pf_png32_state+62256)=(uint32_t)((uintptr_t)pf_png32_state+69720);*(uint32_t *)(pf_png32_state+62608)=(uint32_t)((uintptr_t)pf_png32_state+68412);*(uint32_t *)(pf_png32_state+64720)=(uint32_t)((uintptr_t)pf_png32_state+70744);*(uint32_t *)(pf_png32_state+64724)=(uint32_t)((uintptr_t)pf_png32_state+70752);*(uint32_t *)(pf_png32_state+65080)=(uint32_t)((uintptr_t)pf_png32_state+67316);for(unsigned i=0;i<sizeof(pf_png32_state)/4;i++){uint32_t *p=(uint32_t *)(pf_png32_state+4*i);if(*p>=0x40010800&&*p<0x40010900)*p=0x6800+(*p-0x40010800);}pf_png32_initialized=1;}