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
uint32_t recovered_10000c20(uint32_t a,uint32_t b);
uint recovered_10000c28(uint param_1,uint param_2,uint *param_3);
uint32_t recovered_10000ca0(uint32_t a,uint32_t b);
uint32_t recovered_10000cc4(uint32_t a,uint32_t b);
uint32_t recovered_10000cfc(uint32_t a,uint32_t b);
undefined8 recovered_10000d40(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10000e48(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10000ed0(undefined4 param_1,undefined4 param_2);
void recovered_10000f1c(float param_1);
void recovered_10000f2c(float param_1);
void recovered_10000f3c(uint param_1,uint param_2);
void recovered_10000f70(int param_1,int param_2);
float recovered_10000f98(void);
float recovered_10000fb4(void);
void recovered_10000fd0(void);
void recovered_10000fe4(void);
int recovered_100011cc(void);
void recovered_10001210(void);
int recovered_10001260(void);
void recovered_10001298(void);
uint * recovered_100012d8(int param_1);
longlong recovered_1000137c(uint param_1,int param_2,uint param_3);
undefined8 recovered_100013d8(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10001430(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000147c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001498(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_100015a0(void);
undefined8 recovered_100015d4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000164c(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100016d0(void);
int recovered_100016d8(int param_1);
void * recovered_100016e4(size_t size);
void recovered_10001728(void *pointer);
void * recovered_10001768(void *pointer,size_t size);
void * recovered_100017b4(void *out,void *data,ulong size);
void * recovered_100017d0(void *out,void *data,ulong size);
void * recovered_10001824(void *out,int value,ulong size);
void recovered_1000183c(undefined1 *param_1,int param_2);
void recovered_10001854(undefined1 *param_1,int param_2);
int recovered_1000186c(void *left,void *right,ulong size);
bool recovered_10001894(int param_1);
bool recovered_100018a8(int param_1);
bool recovered_100018bc(uint param_1);
bool recovered_100018d4(uint param_1);
bool recovered_10001900(int param_1);
bool recovered_10001920(int param_1);
int recovered_10001934(int param_1);
int recovered_10001944(int param_1);
ulong recovered_10001954(char *text);
int recovered_10001984(char *left,char *right);
int recovered_100019b0(char *left,char *right);
void recovered_100019b4(int param_1,int param_2);
void * recovered_100019d0(char *param_1);
char * recovered_10001a18(char *param_1,char param_2);
int recovered_10001a44(int param_1,char *param_2);
char * recovered_10001a88(char *param_1,char *param_2);
char * recovered_10001ac8(char *param_1,char *param_2);
undefined4 recovered_10001b10(void);
undefined4 recovered_10001b1c(void);
void recovered_10001b28(undefined4 *param_1);
double recovered_10001b40(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_10001b80(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10001c18(double left,double right);
double recovered_10001c50(double left,double right);
double recovered_10001ccc(double value);
double recovered_10001cfc(double value);
double recovered_10001d40(double value);
double recovered_10001d90(double value);
void recovered_10001e60(undefined4 param_1,undefined4 param_2);
double recovered_10001e90(double value);
void recovered_10001ef0(void);
double recovered_10001f48(double value);
double recovered_10001f98(double value);
float recovered_10001fb8(float left,float right);
float recovered_10001ff4(float param_1,int *param_2);
float recovered_10002020(float param_1,int param_2);
float recovered_1000204c(float left,float right);
float recovered_10002084(float value);
float recovered_100020bc(float value);
double recovered_100020e4(double value);
float recovered_10002124(float value);
float recovered_1000214c(float value);
float recovered_10002174(float value);
void recovered_1000219c(void);
float recovered_100021ac(float value);
float recovered_100021d4(float value);
float recovered_100021fc(float value);
int recovered_10002218(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10002340(int param_1);
int recovered_10002384(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_100024a4(char *text,char **end);
float recovered_10002640(char *text,char **end);
int recovered_1000265c(char *out,ulong capacity,char *format,void *arguments);
void recovered_10002a58(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10002a94(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_10002ae8(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10002b88(char *out,ulong capacity,char *format,...);
void recovered_10002bb4(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_10002c1c(int param_1);
void recovered_10002c6c(char *param_1,int param_2);
void recovered_10002d20(int param_1);
void recovered_10002dac(void);
void recovered_10002db4(void);
void recovered_10002dbc(char *param_1,int param_2);
void recovered_10002e0c(void);
void recovered_10002e60(char *param_1);
void recovered_10002e88(void);
bool recovered_10002eac(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10002f30(void);
void recovered_10002f38(void);
undefined4 recovered_10002f3c(void);
undefined4 * recovered_10002f44(char *param_1,int param_2);
undefined4 recovered_10003200(undefined4 param_1,undefined4 param_2);
undefined4 recovered_1000324c(int param_1,uint param_2);
void recovered_100032d4(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10003300(uint *param_1);
int recovered_10003344(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_100033e4(int *param_1);
int recovered_100034d0(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_100035dc(int *param_1,uint param_2,int param_3);
undefined4 recovered_10003674(int param_1);
undefined4 recovered_10003698(uint *param_1);
undefined1 recovered_10003710(int param_1);
undefined1 recovered_10003720(int param_1);
void recovered_10003730(int param_1);
void recovered_1000374c(uint param_1,int param_2);
undefined4 recovered_10003770(int param_1);
undefined4 recovered_100037b8(undefined4 param_1);
undefined4 recovered_100037fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100038a8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100038fc(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_100039b4(int param_1,int param_2,int param_3);
undefined4 recovered_100039f4(void);
void recovered_100039fc(void);
undefined4 recovered_10003a00(void);
undefined4 recovered_10003a08(void);
undefined4 recovered_10003a10(void);
void recovered_10003a18(int param_1,char param_2,int param_3);
int recovered_10003a40(char *left,char *right,ulong size);
undefined4 recovered_10003a80(int param_1);
undefined4 recovered_10003b3c(void);
undefined4 recovered_10003b44(void);
void recovered_10003b4c(void);
undefined4 recovered_10003b64(int param_1);
void recovered_10003bb4(int param_1);
undefined4 recovered_10003bc4(undefined4 *param_1);
int recovered_10003bdc(undefined4 param_1,int param_2);
void recovered_10003bfc(void);
undefined4 recovered_10003c80(void);
void recovered_10003c88(int param_1);
void recovered_10003c98(int param_1);
void * recovered_10003cc4(ulong size);
void * recovered_10003cf0(ulong size);
void recovered_10003cf4(void *data);
void recovered_10003db4(void *data);
void recovered_10003e74(void *param_1);
void recovered_10003f34(void *param_1);
undefined4 recovered_10003ff4(void);
uint recovered_10003ffc(uint *param_1);
void recovered_1000400c(uint *param_1);
void recovered_1000401c(void);
undefined1 * recovered_10004020(uint param_1);
void recovered_1000406c(int param_1);
int recovered_1000407c(int param_1);
void recovered_10004084(void);
void recovered_100040e0(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10004108(undefined4 *param_1);
void recovered_10004188(void);
void recovered_100041c0(undefined4 *param_1);
void recovered_100041d8(undefined4 *param_1);
void recovered_10004208(void);
void recovered_10004214(void);
void recovered_10004220(undefined4 *param_1);
void recovered_10004244(undefined4 *param_1);
void recovered_100042f0(void);
undefined4 recovered_100042fc(void);
void recovered_10004304(void);
int recovered_10004310(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10004350(int *param_1,int *param_2);
void recovered_100043f8(void);
undefined4 recovered_100043fc(void);
bool recovered_10004404(int param_1);
bool recovered_10004418(int param_1);
bool recovered_10004454(uint param_1);
bool recovered_10004480(undefined4 param_1,uint param_2);
bool recovered_1000449c(uint param_1);
bool recovered_100044b8(undefined4 param_1,uint param_2);
bool recovered_100044d4(undefined4 param_1,uint param_2);
double recovered_100044f0(double value);
ulonglong recovered_10004548(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_100046ac(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_100046b0(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_100048cc(uint param_1,int *param_2);
uint recovered_100049f8(undefined4 *param_1);
void recovered_10004a30(undefined4 param_1,int param_2);
uint recovered_10004a58(undefined4 *param_1);
void recovered_10004aa8(void);
void recovered_10004aac(void);
void recovered_10004ab0(int param_1);
void recovered_10004ac0(int param_1);
undefined4 * recovered_10004ad0(int param_1);
uint * recovered_10004c64(int param_1,int param_2,ushort *param_3);
undefined4 * recovered_10004d9c(undefined4 *param_1,undefined4 *param_2);
int * recovered_10004dc8(uint param_1,uint param_2,int param_3,int param_4);
undefined4 recovered_100050b8(int param_1,int param_2,int param_3);
void recovered_10005130(int *param_1,uint param_2,undefined2 *param_3);
int recovered_1000513c(undefined4 param_1,undefined4 param_2);
undefined4 recovered_10005190(undefined4 *param_1,undefined4 *param_2);
bool recovered_10005220(int param_1);
byte recovered_10005248(int *param_1,int param_2);
byte recovered_10005268(int param_1,int *param_2);
undefined4 recovered_10005420(int *param_1,int *param_2,int param_3,int param_4);
undefined4 recovered_100055b4(int *param_1,uint param_2);
undefined4 recovered_100056a4(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_10005898(int *param_1,undefined2 *param_2,undefined2 *param_3);
undefined4 * recovered_100058b0(undefined4 *param_1,undefined4 *param_2);
undefined4 recovered_10005904(int param_1,undefined4 param_2,uint param_3);
void recovered_100059c0(int *param_1,int param_2,int param_3);
undefined4 recovered_10005be8(int param_1,undefined4 param_2,uint param_3);
undefined4 recovered_10005cd0(void);
undefined8 recovered_10005cd8(void);
undefined8 recovered_10005ce4(void);
void recovered_10005cf0(undefined4 *param_1);
void recovered_10005d14(void);
void recovered_10005d18(void *data);
void recovered_10005d1c(void *data);
byte recovered_10005d20(int param_1,int *param_2);
uint * recovered_10005f00(void *param_1,ushort *param_2,int param_3,ushort *param_4);
void recovered_10006524(int *param_1,uint param_2);
int recovered_10006580(int param_1);
int * recovered_1000659c(int *param_1,char *param_2,uint param_3);
void recovered_100066c0(int param_1,char *param_2,uint param_3);
int * recovered_100066e4(int *param_1);
void recovered_100067b0(void *param_1);
void recovered_100067d0(int *param_1,char *param_2,uint param_3);
void recovered_1000681c(int *param_1);
undefined4 recovered_10006854(uint param_1);
void recovered_100068f4(int *param_1,uint param_2,undefined4 param_3,int param_4);
ulonglong recovered_10006940(int *param_1);
void recovered_10006988(int *param_1,uint param_2);
void recovered_100069e8(ulong param_1);
void recovered_100069f8(int *param_1,int param_2,int param_3,int param_4);
undefined4 recovered_10006a68(ushort *param_1,int param_2,uint param_3);
bool recovered_10006ac0(int param_1,int param_2);
void recovered_10006afc(int *param_1,uint param_2);
double recovered_10006b60(uint *param_1,int param_2,int param_3,undefined4 param_4);
int recovered_10006cc0(undefined4 param_1,undefined4 param_2);
void recovered_10006d30(int *param_1,uint param_2);
void recovered_10006da8(int param_1);
bool recovered_10006dbc(int *param_1,char *param_2);
int * recovered_10006e00(int *param_1,int param_2);
void recovered_10006e40(int *param_1,int param_2,uint param_3,int param_4);
int recovered_10006f3c(int param_1);
undefined4 recovered_10006f6c(int *param_1,int param_2,int *param_3,int param_4);
void recovered_10006fc0(int *param_1);
void recovered_10006ff0(int *param_1,uint param_2);
undefined4 * recovered_10007058(undefined4 *param_1,int param_2,uint param_3);
void recovered_1000708c(int param_1);
bool recovered_100070a8(char *param_1,int param_2,char *param_3,int param_4);
undefined4 recovered_100070e0(int *param_1,undefined4 *param_2);
int recovered_10007434(int param_1);
void recovered_10007450(int *param_1,undefined1 *param_2,int param_3);
void recovered_1000746c(int *param_1,undefined4 param_2,undefined4 param_3,undefined3 param_4);
void recovered_100074cc(int *param_1);
undefined4 * recovered_10007504(undefined4 *param_1,undefined4 *param_2);
int recovered_10007558(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
int recovered_10007630(int *param_1,undefined1 *param_2);
int * recovered_10007690(int *param_1,char *param_2,uint param_3);
void recovered_100077b4(int param_1,char *param_2,uint param_3);
void recovered_100077d8(void *param_1);
void recovered_100077f8(int *param_1,int param_2,int param_3,int param_4);
undefined4 * recovered_10007864(undefined4 *param_1);
void recovered_10007888(int *param_1,uint param_2,undefined2 *param_3);
int recovered_100078f8(int *param_1,int param_2,undefined2 *param_3,undefined2 *param_4);
void recovered_100079e8(void);
void recovered_10007a78(void);
void recovered_10007b08(void);
void recovered_10007b98(void);

/* Original analysis identifiers for manual recovery units. */
