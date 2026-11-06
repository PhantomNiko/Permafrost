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
void recovered_10001838(uint param_1,uint param_2);
uint recovered_10001840(uint param_1,uint param_2,uint *param_3);
undefined4 recovered_100018b8(uint param_1,uint param_2);
int recovered_100018dc(uint param_1,uint param_2);
int recovered_10001914(int param_1,int param_2);
undefined8 recovered_10001958(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10001a60(float param_1);
undefined8 recovered_10001a70(float param_1);
float recovered_10001a80(uint param_1,uint param_2);
float recovered_10001a9c(int param_1,int param_2);
void recovered_10001ab8(void);
void recovered_10001acc(int *in_r3);
int recovered_10001cb4(int *in_r3);
long recovered_10001cf8(int *in_r3);
int recovered_10001d48(int *in_r3);
long recovered_10001d80(int *in_r3);
uint * recovered_10001dc0(int param_1,int *in_r3);
longlong recovered_10001e64(uint param_1,int param_2,uint param_3);
undefined8 recovered_10001ec0(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10001f18(uint param_1,int param_2,uint param_3);
undefined8 recovered_10001f64(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001f80(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10002088(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_100020bc(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10002134(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100021b8(void);
int recovered_100021c0(int param_1);
void * recovered_100021cc(size_t size);
void recovered_10002210(void *pointer);
void * recovered_10002250(void *pointer,size_t size);
void * recovered_1000229c(void *dst,void *src,uint bytes);
void * recovered_100022b8(void *dst,void *src,uint bytes);
void * recovered_1000230c(void *dst,int byte,uint bytes);
void recovered_10002324(undefined1 *param_1,int param_2);
void recovered_1000233c(undefined1 *param_1,int param_2);
int recovered_10002354(char *param_1,char *param_2,int param_3);
bool recovered_1000237c(int param_1);
bool recovered_10002390(int param_1);
bool recovered_100023a4(uint param_1);
bool recovered_100023bc(uint param_1);
bool recovered_100023e8(int param_1);
bool recovered_10002408(int param_1);
int recovered_1000241c(int param_1);
int recovered_1000242c(int param_1);
uint recovered_1000243c(char *text);
int recovered_1000246c(byte *param_1,byte *param_2);
int recovered_10002498(byte *param_1,byte *param_2);
void recovered_1000249c(int param_1,int param_2);
void * recovered_100024b8(int param_1);
char * recovered_10002500(char *param_1,char param_2);
int recovered_1000252c(int param_1,char *param_2);
char * recovered_10002570(char *param_1,char *param_2);
char * recovered_100025b0(char *param_1,char *param_2);
undefined4 recovered_100025f8(void);
undefined4 recovered_10002604(void);
undefined8 recovered_10002610(undefined4 *param_1);
double recovered_10002628(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_10002668(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10002700(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10002738(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_100027b4(undefined4 param_1,undefined4 param_2);
double recovered_100027e4(undefined4 param_1,undefined4 param_2);
double recovered_10002828(undefined4 param_1,undefined4 param_2);
double recovered_10002878(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10002948(undefined4 param_1,undefined4 param_2);
double recovered_10002978(void);
void recovered_100029d8(double in_d0);
double recovered_10002a30(undefined4 param_1,undefined4 in_r1);
double recovered_10002a80(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10002aa0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10002b5c(undefined4 param_1,undefined4 param_2);
void recovered_10002be4(uint param_1,uint param_2);
void recovered_10002c18(int param_1,int param_2);
float recovered_10002c40(float param_1,float param_2);
float recovered_10002c7c(float param_1,int *param_2);
float recovered_10002ca8(float param_1,int param_2);
float recovered_10002cd4(float param_1,float param_2);
float recovered_10002d0c(float param_1);
float recovered_10002d44(float param_1);
undefined4 recovered_10002d6c(undefined4 param_1,undefined4 param_2);
float recovered_10002dac(float param_1);
float recovered_10002dd4(float param_1);
float recovered_10002dfc(float param_1);
long recovered_10002e24(undefined4 in_r0,undefined4 in_r1);
float recovered_10002e34(float param_1);
float recovered_10002e5c(float param_1);
float recovered_10002e84(float param_1);
int recovered_10002ea0(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10002fc8(int param_1);
int recovered_1000300c(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_1000312c(byte *param_1,undefined4 *param_2);
float recovered_100032c8(byte *in_r0,undefined4 *in_r1);
int recovered_100032e4(byte *param_1,uint param_2,byte *param_3,double *param_4);
void recovered_100036e0(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_1000371c(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_10003770(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
void recovered_10003810(byte *in_r0,uint in_r1,byte *in_r2);
void recovered_1000383c(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_100038a4(int param_1);
void recovered_100038f4(char *param_1,int param_2);
void recovered_100039a8(int param_1);
void recovered_10003a34(void);
void recovered_10003a3c(void);
void recovered_10003a44(int param_1,int param_2);
void recovered_10003a94(void);
void recovered_10003ae8(int param_1);
void recovered_10003b10(void);
bool recovered_10003b34(int param_1,int param_2,char *param_3,int param_4);
undefined4 recovered_10003bb8(void);
void recovered_10003bc0(void);
undefined4 recovered_10003bc4(void);
undefined4 * recovered_10003bcc(int param_1,int param_2);
undefined4 recovered_10003e88(char *param_1,void *param_2);
undefined4 recovered_10003ed4(int param_1,uint param_2);
undefined4 * recovered_10003f5c(int param_1,int param_2,uint *param_3);
undefined4 recovered_10003f88(uint *param_1);
int recovered_10003fcc(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_1000406c(int *param_1);
int recovered_10004158(int param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10004264(int *param_1,uint param_2,int param_3);
undefined4 recovered_100042fc(int param_1);
undefined4 recovered_10004320(uint *param_1);
undefined1 recovered_10004398(int param_1);
undefined1 recovered_100043a8(int param_1);
void recovered_100043b8(int param_1);
uint recovered_100043d4(uint param_1,int param_2);
undefined4 recovered_100043f8(int param_1);
undefined4 recovered_10004440(char *param_1);
undefined4 recovered_10004484(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10004530(char *param_1,void *param_2,uint param_3);
undefined4 recovered_10004584(int param_1,int *param_2,uint *param_3);
bool recovered_1000463c(int param_1,int param_2,int param_3);
undefined4 recovered_1000467c(void);
void recovered_10004684(void);
undefined4 recovered_10004688(void);
undefined4 recovered_10004690(void);
undefined4 recovered_10004698(void);
char * recovered_100046a0(int param_1,char param_2,int param_3);
int recovered_100046c8(byte *param_1,byte *param_2,int param_3);
undefined4 recovered_10004708(int param_1);
undefined4 recovered_100047c4(void);
undefined4 recovered_100047cc(void);
void recovered_100047d4(void);
undefined4 recovered_100047ec(int param_1);
void recovered_1000483c(int param_1);
undefined4 recovered_1000484c(undefined4 *param_1);
int recovered_10004864(undefined4 param_1,int param_2);
void recovered_10004884(void);
undefined4 recovered_10004908(void);
void recovered_10004910(int param_1);
long recovered_10004920(int param_1);
void * recovered_1000494c(uint size);
void * recovered_10004978(uint size);
void recovered_1000497c(void *pointer);
void recovered_10004a3c(void *pointer);
void recovered_10004afc(void *pointer,uint size);
void recovered_10004bbc(void *pointer,uint size);
undefined4 recovered_10004c7c(void);
uint recovered_10004c84(uint *param_1);
void recovered_10004c94(uint *param_1);
void recovered_10004ca4(void);
undefined1 * recovered_10004ca8(uint param_1);
void recovered_10004cf4(int param_1);
int recovered_10004d04(int param_1);
void recovered_10004d0c(void);
void recovered_10004d68(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10004d90(undefined4 *param_1);
void recovered_10004e10(void);
void recovered_10004e48(undefined4 *param_1);
void recovered_10004e60(undefined4 *param_1);
void recovered_10004e90(undefined4 *in_r0);
void recovered_10004e9c(void);
void recovered_10004ea8(undefined4 *param_1);
void recovered_10004ecc(undefined4 *param_1);
void recovered_10004f78(undefined4 *in_r0);
undefined4 recovered_10004f84(void);
void recovered_10004f8c(void);
int recovered_10004f98(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10004fd8(int *param_1,int *param_2);
void recovered_10005080(void);
undefined4 recovered_10005084(void);
bool recovered_1000508c(int param_1);
bool recovered_100050a0(int param_1);
bool recovered_100050dc(uint param_1);
bool recovered_10005108(undefined4 param_1,uint param_2);
bool recovered_10005124(uint param_1);
bool recovered_10005140(undefined4 param_1,uint param_2);
bool recovered_1000515c(undefined4 param_1,uint param_2);
double recovered_10005178(undefined4 param_1,undefined4 param_2);
ulonglong recovered_100051d0(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10005334(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10005338(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_10005554(uint param_1,int *param_2);
uint recovered_10005680(undefined4 *param_1);
void recovered_100056b8(undefined4 param_1,int param_2);
uint recovered_100056e0(undefined4 *param_1);
int * recovered_10005730(int param_1,uint param_2,uint param_3);
int * recovered_100058a4(int *param_1,int param_2);
void recovered_100058d4(undefined4 *param_1);
void recovered_100058f4(int *param_1);
undefined4 recovered_10005d24(int param_1);
void recovered_10005dac(int param_1);
void recovered_10005e2c(int param_1);
int recovered_10005ea0(int *param_1);
void recovered_10005fec(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10006020(int param_1,int param_2,int param_3);
void recovered_10006064(int param_1);
void recovered_100060bc(int param_1,int param_2);
void recovered_100060f4(int param_1,int *param_2,int param_3);
void recovered_10006160(int *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10006178(int param_1);
void recovered_100063cc(void);
byte recovered_10006758(int param_1);
void recovered_10006788(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_100067a0(int param_1);
void recovered_10006878(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_100068bc(int param_1,uint param_2);
void recovered_100068dc(void);
void recovered_10006b18(void);
void recovered_10006b1c(void);
void recovered_10006b20(void);
undefined4 recovered_10006b24(void);
void recovered_10006b2c(void);
undefined4 recovered_10006b30(void);
uint recovered_10006b38(char *param_1,int *param_2,int *param_3);
undefined4 recovered_10007038(char *param_1,void *param_2);
bool recovered_10007084(int *param_1,char *param_2);
void recovered_10007098(void *param_1);
undefined4 recovered_100070d8(char *param_1,undefined4 param_2);
void recovered_10007124(void *param_1,undefined4 param_2);
int * recovered_1000716c(int param_1,int param_2,uint param_3,int param_4,uint param_5,
                        double param_6);
void recovered_100072dc(void *param_1);
undefined4 * recovered_1000731c(undefined4 *param_1);
void recovered_10007338(int *param_1,int param_2,uint param_3,int param_4);
int recovered_10007434(int param_1);
undefined4 recovered_10007464(int *param_1,int param_2,int *param_3,int param_4);
void recovered_100074b8(int *param_1);
void recovered_100074e8(int *param_1,uint param_2);
undefined4 * recovered_10007550(undefined4 *param_1,int param_2,uint param_3,int in_r3);
char * recovered_10007584(uint size);
undefined4 recovered_100075a0(int param_1);
undefined4 * recovered_100075f0(undefined4 *param_1);
void recovered_10007614(int *param_1,uint param_2);
void recovered_10007670(int *param_1,uint param_2);
void recovered_100076d0(int param_1);
undefined4 * recovered_100076e0(undefined4 *param_1,int *param_2);
uint recovered_10007728(uint param_1,uint param_2,int param_3);
void recovered_1000778c(int param_1);
void recovered_100077b4(int *param_1,char param_2,uint param_3);
void recovered_100077ec(undefined4 *param_1,int *param_2,uint param_3,uint param_4);
bool recovered_1000783c(int *param_1,char *param_2);
void recovered_10007880(int *param_1);
void recovered_100078b4(int *param_1,undefined1 param_2);
void recovered_10007918(int *param_1,int *param_2);
uint recovered_10007934(int *param_1,char param_2,uint param_3);
bool recovered_10007968(char *param_1,int param_2,char *param_3,int param_4);
int recovered_100079a0(int *param_1,int *param_2);
void recovered_10007a08(int *param_1,uint param_2);
void recovered_10007a88(int param_1);
void recovered_10007aa0(undefined4 *param_1,undefined4 *param_2);
int * recovered_10007acc(int *param_1,int param_2,uint param_3,int in_r3);
int * recovered_10007bb0(int *param_1);
void recovered_10007bd0(int *param_1);
undefined4 * recovered_10007c18(undefined4 *param_1,int param_2);
int recovered_10007c58(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
