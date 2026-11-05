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
void recovered_10001a04(uint param_1,uint param_2);
uint recovered_10001a0c(uint param_1,uint param_2,uint *param_3);
uint recovered_10001a84(uint a,uint b);
int recovered_10001aa8(uint param_1,uint param_2);
int recovered_10001ae0(int param_1,int param_2);
undefined8 recovered_10001b24(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10001c2c(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10001cb4(undefined4 param_1,undefined4 param_2);
void recovered_10001d00(float param_1);
void recovered_10001d10(float param_1);
void recovered_10001d20(uint param_1,uint param_2);
void recovered_10001d54(int param_1,int param_2);
float recovered_10001d7c(void);
float recovered_10001d98(void);
void recovered_10001db4(void);
void recovered_10001dc8(void);
int recovered_10001fb0(void);
void recovered_10001ff4(void);
int recovered_10002044(void);
void recovered_1000207c(void);
uint * recovered_100020bc(int param_1);
longlong recovered_10002160(uint param_1,int param_2,uint param_3);
undefined8 recovered_100021bc(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10002214(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002260(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000227c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10002384(void);
undefined8 recovered_100023b8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002430(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100024b4(void);
int recovered_100024bc(int param_1);
void * recovered_100024c8(size_t size);
void recovered_1000250c(void *pointer);
void * recovered_1000254c(void *pointer,size_t size);
void * recovered_10002598(void *out,void *data,ulong size);
void * recovered_100025b4(void *out,void *data,ulong size);
void * recovered_10002608(void *out,int value,ulong size);
void recovered_10002620(undefined1 *param_1,int param_2);
void recovered_10002638(undefined1 *param_1,int param_2);
int recovered_10002650(void *left,void *right,ulong size);
bool recovered_10002678(int param_1);
bool recovered_1000268c(int param_1);
bool recovered_100026a0(uint param_1);
bool recovered_100026b8(uint param_1);
bool recovered_100026e4(int param_1);
bool recovered_10002704(int param_1);
int recovered_10002718(int param_1);
int recovered_10002728(int param_1);
ulong recovered_10002738(char *text);
int recovered_10002768(char *left,char *right);
int recovered_10002794(char *left,char *right);
void recovered_10002798(int param_1,int param_2);
void * recovered_100027b4(char *param_1);
char * recovered_100027fc(char *param_1,char param_2);
int recovered_10002828(int param_1,char *param_2);
char * recovered_1000286c(char *param_1,char *param_2);
char * recovered_100028ac(char *param_1,char *param_2);
undefined4 recovered_100028f4(void);
undefined4 recovered_10002900(void);
void recovered_1000290c(undefined4 *param_1);
double recovered_10002924(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_10002964(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_100029fc(double left,double right);
double recovered_10002a34(double left,double right);
double recovered_10002ab0(double value);
double recovered_10002ae0(double value);
double recovered_10002b24(double value);
double recovered_10002b74(double value);
void recovered_10002c44(undefined4 param_1,undefined4 param_2);
double recovered_10002c74(double value);
void recovered_10002cd4(void);
double recovered_10002d2c(double value);
double recovered_10002d7c(double value);
float recovered_10002d9c(float left,float right);
float recovered_10002dd8(float param_1,int *param_2);
float recovered_10002e04(float param_1,int param_2);
float recovered_10002e30(float left,float right);
float recovered_10002e68(float value);
float recovered_10002ea0(float value);
double recovered_10002ec8(double value);
float recovered_10002f08(float value);
float recovered_10002f30(float value);
float recovered_10002f58(float value);
void recovered_10002f80(void);
float recovered_10002f90(float value);
float recovered_10002fb8(float value);
float recovered_10002fe0(float value);
int recovered_10002ffc(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10003124(int param_1);
int recovered_10003168(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10003288(char *text,char **end);
float recovered_10003424(char *text,char **end);
int recovered_10003440(char *out,ulong capacity,char *format,void *arguments);
void recovered_1000383c(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10003878(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_100038cc(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_1000396c(char *out,ulong capacity,char *format,...);
void recovered_10003998(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_10003a00(int param_1);
void recovered_10003a50(char *param_1,int param_2);
void recovered_10003b04(int param_1);
void recovered_10003b90(void);
void recovered_10003b98(void);
void recovered_10003ba0(char *param_1,int param_2);
void recovered_10003bf0(void);
void recovered_10003c44(char *param_1);
void recovered_10003c6c(void);
bool recovered_10003c90(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10003d14(void);
void recovered_10003d1c(void);
undefined4 recovered_10003d20(void);
undefined4 * recovered_10003d28(char *param_1,int param_2);
undefined4 recovered_10003fe4(undefined4 param_1,undefined4 param_2);
undefined4 recovered_10004030(int param_1,uint param_2);
void recovered_100040b8(char *param_1,int param_2,uint *param_3);
undefined4 recovered_100040e4(uint *param_1);
int recovered_10004128(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_100041c8(int *param_1);
int recovered_100042b4(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_100043c0(int *param_1,uint param_2,int param_3);
undefined4 recovered_10004458(int param_1);
undefined4 recovered_1000447c(uint *param_1);
undefined1 recovered_100044f4(int param_1);
undefined1 recovered_10004504(int param_1);
void recovered_10004514(int param_1);
void recovered_10004530(uint param_1,int param_2);
undefined4 recovered_10004554(int param_1);
undefined4 recovered_1000459c(undefined4 param_1);
undefined4 recovered_100045e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_1000468c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100046e0(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10004798(int param_1,int param_2,int param_3);
undefined4 recovered_100047d8(void);
void recovered_100047e0(void);
undefined4 recovered_100047e4(void);
undefined4 recovered_100047ec(void);
undefined4 recovered_100047f4(void);
void recovered_100047fc(int param_1,char param_2,int param_3);
int recovered_10004824(char *left,char *right,ulong size);
undefined4 recovered_10004864(int param_1);
undefined4 recovered_10004920(void);
undefined4 recovered_10004928(void);
void recovered_10004930(void);
undefined4 recovered_10004948(int param_1);
void recovered_10004998(int param_1);
undefined4 recovered_100049a8(undefined4 *param_1);
int recovered_100049c0(undefined4 param_1,int param_2);
void recovered_100049e0(void);
undefined4 recovered_10004a64(void);
void recovered_10004a6c(int param_1);
void recovered_10004a7c(int param_1);
void * recovered_10004aa8(ulong size);
void * recovered_10004ad4(ulong size);
void recovered_10004ad8(void *data);
void recovered_10004b98(void *data);
void recovered_10004c58(void *param_1);
void recovered_10004d18(void *param_1);
undefined4 recovered_10004dd8(void);
uint recovered_10004de0(uint *param_1);
void recovered_10004df0(uint *param_1);
void recovered_10004e00(void);
undefined1 * recovered_10004e04(uint param_1);
void recovered_10004e50(int param_1);
int recovered_10004e60(int param_1);
void recovered_10004e68(void);
void recovered_10004ec4(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10004eec(undefined4 *param_1);
void recovered_10004f6c(void);
void recovered_10004fa4(undefined4 *param_1);
void recovered_10004fbc(undefined4 *param_1);
void recovered_10004fec(void);
void recovered_10004ff8(void);
void recovered_10005004(undefined4 *param_1);
void recovered_10005028(undefined4 *param_1);
void recovered_100050d4(void);
undefined4 recovered_100050e0(void);
void recovered_100050e8(void);
int recovered_100050f4(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10005134(int *param_1,int *param_2);
void recovered_100051dc(void);
undefined4 recovered_100051e0(void);
bool recovered_100051e8(int param_1);
bool recovered_100051fc(int param_1);
bool recovered_10005238(uint param_1);
bool recovered_10005264(undefined4 param_1,uint param_2);
bool recovered_10005280(uint param_1);
bool recovered_1000529c(undefined4 param_1,uint param_2);
bool recovered_100052b8(undefined4 param_1,uint param_2);
double recovered_100052d4(double value);
ulonglong recovered_1000532c(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10005490(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10005494(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_100056b0(uint param_1,int *param_2);
uint recovered_100057dc(undefined4 *param_1);
void recovered_10005814(undefined4 param_1,int param_2);
uint recovered_1000583c(undefined4 *param_1);
int * recovered_1000588c(int param_1,uint param_2,uint param_3);
int * recovered_100059b0(int *param_1,int param_2);
void recovered_100059e0(int *param_1,uint param_2,undefined1 *param_3);
void recovered_100059ec(int param_1,int param_2);
void recovered_10005c74(int param_1);
void recovered_10006108(int param_1);
void recovered_10006118(undefined4 *param_1);
void * recovered_10006190(int *param_1);
void recovered_100062dc(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10006310(int param_1,int param_2,int param_3);
void recovered_1000635c(int param_1);
void recovered_100063bc(int param_1,int param_2);
void recovered_100063dc(int param_1,int *param_2,int param_3);
void recovered_10006448(int *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10006460(int param_1);
void recovered_1000648c(void);
byte recovered_10006908(int param_1);
void recovered_1000691c(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_10006944(int param_1);
void recovered_100069c0(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_10006a04(int param_1,uint param_2);
void recovered_10006a24(void);
void recovered_10006c60(void);
void recovered_10006c64(void);
void recovered_10006c68(void);
undefined4 recovered_10006c6c(void);
void recovered_10006c74(void);
undefined4 recovered_10006c78(void);
char * recovered_10006c80(char *param_1,int *param_2,int *param_3);
undefined4 recovered_100071b0(undefined4 param_1,undefined4 param_2);
bool recovered_100071fc(int *param_1,char *param_2);
undefined4 recovered_10007210(int param_1);
undefined4 * recovered_10007260(undefined4 *param_1);
void recovered_1000727c(int *param_1,int param_2,uint param_3,int param_4);
int recovered_10007378(int param_1);
undefined4 recovered_100073a8(int *param_1,int param_2,int *param_3,int param_4);
void recovered_100073fc(int *param_1);
void recovered_1000742c(int *param_1,uint param_2);
undefined4 * recovered_10007494(undefined4 *param_1,int param_2,uint param_3);
void recovered_100074c8(int param_1);
uint recovered_100074e4(int param_1,int param_2,int param_3,int param_4);
int recovered_10007544(int param_1,uint param_2,uint param_3);
undefined4 * recovered_10007584(undefined4 *param_1,int *param_2);
void recovered_100075cc(int param_1);
uint recovered_100075f4(uint param_1,uint param_2,int param_3);
void recovered_10007658(int *param_1,char param_2,uint param_3);
void recovered_10007690(undefined4 *param_1,int *param_2,uint param_3,uint param_4);
bool recovered_100076e0(int *param_1,char *param_2);
void recovered_10007724(int *param_1);
void recovered_10007758(int *param_1,undefined1 param_2);
void recovered_100077bc(int *param_1,int *param_2);
uint recovered_100077d8(int *param_1,char param_2,uint param_3);
bool recovered_1000780c(char *param_1,int param_2,char *param_3,int param_4);
int recovered_10007844(int *param_1,int *param_2);
void recovered_100078ac(int *param_1,uint param_2);
void recovered_1000792c(int param_1);
int * recovered_10007944(int *param_1,int param_2,uint param_3);
void recovered_10007a28(undefined4 *param_1,undefined4 *param_2);
int * recovered_10007a54(int *param_1);
void recovered_10007a74(int *param_1);
undefined4 * recovered_10007abc(undefined4 *param_1,int param_2);
void recovered_10007afc(int *param_1,uint param_2,undefined1 *param_3);
void recovered_10007b64(int *param_1,uint param_2);
void recovered_10007bc0(int *param_1,uint param_2);
void recovered_10007c20(ulong param_1);
undefined4 * recovered_10007c30(undefined4 *param_1);
int recovered_10007c54(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
