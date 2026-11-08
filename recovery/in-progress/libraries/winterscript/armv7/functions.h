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
#define pf_varargs_10006d14__4_ recovered_10006d14
extern uint8_t pf_module_state[];
uint recovered_10002a40(uint param_1,uint param_2);
uint recovered_10002a90(uint param_1,uint param_2);
uint recovered_10002ac8(uint param_1,uint param_2);
uint recovered_10002b38(uint param_1,uint param_2);
ulonglong recovered_10002ba4(float param_1);
longlong recovered_10002bb4(float param_1);
float recovered_10002bc4(undefined4 param_1,undefined4 param_2);
float recovered_10002be0(undefined4 param_1,undefined4 param_2);
void recovered_10002c00(void);
void recovered_10002c18(void);
int recovered_10003010(void);
void recovered_10003054(void);
int recovered_100030a4(void);
void recovered_100030e0(void);
uint * recovered_10003124(int param_1);
longlong recovered_10003230(uint param_1,int param_2,uint param_3);
ulonglong recovered_10003284(uint param_1,uint param_2,uint param_3);
undefined8 recovered_100032d8(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003324(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003408(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003488(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100035a0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000365c(void);
int recovered_10003664(int param_1);
void * recovered_10003670(uintptr_t size);
void recovered_100036c4(void *pointer);
void * recovered_10003714(void *pointer,uintptr_t size);
void * recovered_10003768(void *destination,void *source,ulong count);
void * recovered_100039ec(void *destination,void *source,ulong count);
void * recovered_10003ef8(void *destination,int value,ulong count);
void recovered_100040f8(undefined4 *param_1,uint param_2);
void recovered_100042f4(undefined4 *param_1,uint param_2);
int recovered_100044f0(void *left,void *right,ulong count);
int recovered_100046e8(byte *param_1,byte *param_2);
bool recovered_10004738(int param_1);
bool recovered_1000474c(int param_1);
bool recovered_10004760(uint param_1);
bool recovered_10004778(uint param_1);
bool recovered_100047a4(int param_1);
bool recovered_100047c4(int param_1);
int recovered_100047d8(int param_1);
int recovered_100047e8(int param_1);
ulong recovered_100047f8(char *text);
int recovered_10004820(char *left,char *right);
int recovered_10004864(byte *param_1,byte *param_2);
void recovered_100048a8(int param_1,int param_2);
undefined8 * recovered_100048c4(undefined8 *param_1);
char * recovered_10004bd8(char *param_1,char param_2);
int recovered_10004c0c(char *param_1,char *param_2);
char * recovered_10004c70(char *param_1,char *param_2);
char * recovered_10004cd0(char *param_1,char *param_2);
undefined * recovered_10004d34(void);
undefined ** recovered_10004d44(void);
undefined4 recovered_10004d54(undefined4 *param_1);
double recovered_10004e04(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10004e48(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10004f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10004fb8(undefined4 param_1,undefined4 param_2);
double recovered_10004fe8(undefined4 param_1,undefined4 param_2);
double recovered_1000502c(undefined4 param_1,undefined4 param_2);
double recovered_10005078(undefined4 param_1,undefined4 param_2);
longlong recovered_100051b8(undefined4 param_1,undefined4 param_2);
double recovered_100051e8(undefined4 param_1,undefined4 param_2);
double recovered_100052a8(undefined4 param_1,undefined4 param_2);
double recovered_10005358(undefined4 param_1,undefined4 param_2);
long long recovered_10005378(double value);
unsigned long long recovered_10005438(double value);
double recovered_100054c0(unsigned long long value);
double recovered_10005508(long long value);
float recovered_10005598(float param_1,float param_2);
float recovered_100055dc(float param_1,float *param_2);
float recovered_10005698(float param_1,uint param_2);
float recovered_100056e4(float param_1,float param_2);
float recovered_1000576c(float param_1);
float recovered_100057a4(float param_1);
double recovered_100057f0(undefined4 param_1,undefined4 param_2);
float recovered_10005844(float param_1);
float recovered_100058a0(float param_1);
float recovered_100058f8(float param_1);
longlong recovered_10005a3c(undefined4 param_1,undefined4 param_2);
float recovered_10005a70(float param_1);
float recovered_10005b38(float param_1);
float recovered_10005bf0(float param_1);
int recovered_10005c0c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10005d60(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10005ec0(byte *param_1,undefined4 *param_2);
float recovered_10006094(byte *in_r0,undefined4 *in_r1);
int recovered_100060b0(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10006d14(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10006d44(int *param_1,int *param_2,int *param_3);
void recovered_10006f30(char *param_1,int param_2);
void recovered_10007114(void);
void recovered_100071d4(void);
void recovered_10007290(char *param_1,undefined1 *param_2);
void recovered_100072e8(void);
void recovered_10007334(void);
bool recovered_10007380(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100074d4(void);
void recovered_100074dc(void);
undefined4 recovered_100074e0(void);
undefined4 * recovered_100074e8(char *param_1,int param_2);
void recovered_1000786c(char *param_1,int param_2,uint *param_3);
undefined4 recovered_1000796c(uint *param_1);
uint recovered_10007a64(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10007b90(int *param_1);
int recovered_10007d90(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10007f08(int *param_1,uint param_2,int param_3);
undefined4 recovered_10007fb8(int param_1);
undefined4 recovered_10007fe0(uint *param_1);
undefined1 recovered_100080b8(int param_1);
undefined1 recovered_100080c8(int param_1);
void recovered_100080d8(int param_1);
void recovered_100080f4(uint param_1,int param_2);
undefined4 recovered_10008118(int param_1);
undefined4 recovered_100081a8(int param_1,int param_2);
undefined4 recovered_1000831c(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_1000841c(int param_1,int param_2,int param_3);
undefined4 recovered_100084a4(void);
void recovered_100084ac(void);
undefined4 recovered_100084b0(void);
undefined4 recovered_100084b8(void);
undefined4 recovered_100084c0(void);
char * recovered_100084c8(char *param_1,char param_2,int param_3);
int recovered_100084fc(char *left,char *right,ulong count);
char * recovered_10008540(undefined4 param_1);
undefined4 recovered_10008640(void);
undefined4 recovered_10008648(void);
void recovered_10008650(void);
__attribute__((naked,noreturn)) void recovered_10008678(void *context);
__attribute__((naked,returns_twice)) int recovered_10008688(void *context);
__attribute__((naked,noreturn)) void recovered_100086a0(void *context,int value);
void recovered_100086c0(void);
undefined4 recovered_1000874c(void);
void recovered_10008754(int param_1);
void recovered_10008764(int param_1);
void * recovered_1000879c(ulong param_1);
void * recovered_100087c8(ulong param_1);
void recovered_100087f4(void *param_1);
void recovered_100088bc(void *param_1);
void recovered_10008984(void *param_1);
void recovered_10008a4c(void *param_1);
undefined4 recovered_10008b14(void);
uint recovered_10008b1c(uint *param_1);
void recovered_10008b2c(uint *param_1);
void recovered_10008b3c(void);
undefined4 * recovered_10008b40(uint param_1);
void recovered_10008bc8(int param_1);
int recovered_10008bd8(int param_1);
void recovered_10008be0(void);
void recovered_10008c48(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10008c70(undefined4 *param_1);
void recovered_10008d04(void);
void recovered_10008d3c(undefined4 *param_1);
void recovered_10008d60(undefined4 *param_1);
void recovered_10008da8(undefined4 *in_r0);
void recovered_10008db4(void);
void recovered_10008dc0(undefined4 *param_1);
void recovered_10008df4(undefined4 *param_1);
void recovered_10008eb4(undefined4 *in_r0);
undefined4 recovered_10008ec0(void);
void recovered_10008ec8(void);
int recovered_10008ed4(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10008fc8(void);
undefined4 recovered_10008fcc(void);
bool recovered_10008fd4(int param_1);
bool recovered_10008fe8(int param_1);
bool recovered_10009028(uint param_1);
bool recovered_10009054(undefined4 param_1,uint param_2);
bool recovered_10009070(uint param_1);
bool recovered_1000908c(undefined4 param_1,uint param_2);
bool recovered_100090a8(undefined4 param_1,uint param_2);
double recovered_100090c8(double value);
float recovered_100091b0(float value);
long double recovered_100092b0(long double value);
double recovered_10009398(long end,long start);
double recovered_100093b4(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000940c(char *text,char **end,int base);
ulonglong recovered_10009584(char *text,char **end,int base);
undefined4 recovered_10009588(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000993c(uint param_1,undefined4 *param_2);
undefined4 * recovered_10009ad0(undefined4 *param_1);
void recovered_10010fc4(int *param_1,int *param_2,int *param_3);
int * recovered_100111fc(int *param_1,int param_2);
undefined4 * recovered_10011244(undefined4 *param_1);
void recovered_10011260(int *param_1,undefined4 *param_2,undefined4 *param_3);
int recovered_10011650(int param_1);
void * recovered_10011760(void *output,void *vm,void *argument0,void *argument1,uint argument2);
undefined4 * recovered_10011a28(int *param_1,undefined4 *param_2);
int * recovered_10011f20(int *param_1);
int * recovered_10011f60(int *param_1);
int * recovered_100120dc(int *param_1);
void recovered_1001225c(int *param_1);
int * recovered_10012290(int *param_1);
int * recovered_10012304(int *param_1);
int * recovered_10012378(int *param_1);
int * recovered_1001249c(int *param_1);
int * recovered_10012500(int *param_1);
int * recovered_10012554(int *param_1);
int * recovered_100125b8(int *param_1);
int * recovered_10012650(int *param_1);
int * recovered_10012654(int *param_1);
undefined4 * recovered_100126b8(undefined4 *param_1);
void * recovered_100126bc(void *output,void *vm,void *argument0);
undefined4 recovered_10012ac8(undefined4 *param_1,uint *param_2);
bool recovered_10012c18(undefined4 *param_1);
int recovered_10012d50(undefined4 param_1,undefined4 *param_2);
uint recovered_10012f14(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
bool recovered_10012fb8(int *param_1,int *param_2);
bool recovered_10013024(byte *param_1);
uint recovered_1001303c(char *param_1);
double recovered_10013094(void *value);
int * recovered_100131f8(int *param_1,int param_2);
int * recovered_10013254(int *param_1);
uint recovered_10013284(char *param_1);
void recovered_100133d8(undefined1 *param_1,undefined4 param_2);
void recovered_100133f4(undefined1 *param_1,undefined4 param_2);
void recovered_10013410(undefined1 *param_1,undefined1 param_2);
void recovered_1001342c(undefined1 *param_1);
void * recovered_10013448(void *output,void *vm,void *argument0);
void recovered_100134d4(undefined4 *param_1,undefined1 *param_2);
void recovered_100136d0(int *param_1,int *param_2);
undefined4 recovered_10013750(uint *param_1,int param_2,byte *param_3);
double recovered_10013fa4(void *value);
void recovered_1001412c(int *param_1,int *param_2);
uint recovered_100141ac(int *param_1);
undefined1 recovered_10014324(undefined4 param_1,undefined4 *param_2,undefined1 *param_3);
int * recovered_100143d8(undefined4 param_1,int *param_2,int *param_3,undefined1 *param_4);
undefined4 recovered_10014c14(undefined4 param_1,int *param_2,int *param_3);
int * recovered_10014ce4(int *param_1);
void recovered_10014e08(int *param_1,uint param_2);
undefined4 * recovered_10014f78(int *param_1,undefined4 *param_2);
int * recovered_10015070(int *param_1);
uint recovered_10015198(uint128 *param_1,uint param_2,uint128 *param_3,
                       uint128 *param_4,undefined1 *param_5);
void * recovered_100156a0(void *output,void *vm,uint argument0,void *argument1,ulong argument2);
bool recovered_10017ca8(int *param_1,uint param_2);
int recovered_10017d64(undefined4 **param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                      ulonglong *******param_5);
void recovered_100184bc(int *param_1,undefined4 *param_2);
void recovered_10018598(int param_1,ulonglong ******param_2,ulonglong *******param_3,
                       ulonglong *******param_4,ulonglong *******param_5);
uint recovered_100185c4(undefined4 param_1,uint *param_2);
void * recovered_10018610(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_100188b0(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void recovered_10018a88(int param_1,undefined4 *param_2,char *param_3,uint param_4);
void recovered_100191c4(int param_1,undefined4 *param_2);
int recovered_1001936c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined1 *param_5,ulonglong *******param_6,int *param_7);
void recovered_10019a0c(undefined4 *param_1);
undefined4
recovered_10019a74(undefined4 **param_1,ulonglong ******param_2,ulonglong *****param_3,
                  ulonglong *******param_4,ulonglong *******param_5,int *param_6);
undefined4 * recovered_10019d58(int *param_1,undefined4 *param_2,int param_3);
void * recovered_1001a718(void *output,void *vm,void *argument0,int argument1,void *argument2,
                         void *argument3);
bool recovered_1001c3d0(int param_1);
void recovered_1001c3f8(int *param_1,int *param_2);
undefined4
recovered_1001c5d8(int param_1,ulonglong ******param_2,ulonglong ******param_3,
                  ulonglong *******param_4,ulonglong *******param_5,uint *param_6);
int recovered_1001d040(int param_1);
undefined4 * recovered_1001d064(int *param_1,undefined4 *param_2,uint param_3);
int recovered_1001d0e8(int param_1,ulonglong ******param_2,ulonglong ******param_3,
                      ulonglong *******param_4,ulonglong *******param_5,ulonglong *******param_6);
uint recovered_1001ff00(int param_1,int *param_2);
int recovered_1002008c(int *param_1,int param_2,uint param_3,int *param_4,int *param_5,byte *param_6
                      );
undefined4 * recovered_100208a4(undefined4 *param_1,undefined4 *param_2);
void recovered_10020900(undefined4 *param_1,int *param_2,int *param_3);
void recovered_10020ac8(undefined4 *param_1,int *param_2,int *param_3);
char recovered_10020da0(int *param_1);
void recovered_10021074(int *param_1,uint param_2);
void recovered_10021224(int *param_1,uint param_2);
void recovered_100212e4(int *param_1,undefined4 *param_2,int param_3);
int * recovered_10021430(int *param_1,undefined4 *param_2);
undefined4 recovered_1002148c(int param_1,char *param_2,int *param_3,int *param_4);
void recovered_100219fc(int *param_1,undefined4 *param_2);
undefined4 * recovered_10022364(undefined4 *param_1,undefined4 *param_2);
void * recovered_100223fc(void *output,void *vm,void *argument0,void *argument1);
void * recovered_1002388c(void *output,void *vm,void *argument0,void *argument1,ulong argument2);
void recovered_10025f88(undefined4 *param_1,undefined4 *param_2);
bool recovered_10026034(undefined4 param_1,uint *param_2,uint *param_3);
uint recovered_10026304(undefined4 param_1,uint *param_2,uint *param_3);
void recovered_1002673c(int *param_1,undefined4 *param_2,undefined4 *param_3);
void * recovered_10026880(void *output,void *vm,void *argument0,char argument1,void *argument2);
undefined4 * recovered_10027758(undefined4 *param_1);
void recovered_10027788(int param_1);
void recovered_100277a8(int param_1);
void recovered_100277bc(uint **********param_1);
void recovered_100278b8(uint **********param_1);
void * recovered_100288cc(void *output,void *vm,void *argument0,void *argument1,ulong argument2);
void recovered_100291c0(int *param_1);
void recovered_10029218(int *param_1,uint param_2);
int recovered_10029518(int param_1);
void recovered_100295b0(int param_1,void *param_2,int param_3,uint param_4);
int * recovered_100297d4(int *param_1,int *param_2);
void recovered_10029924(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void recovered_10029b64(int param_1,int param_2);
void recovered_10029da0(int *param_1);
void recovered_10029ddc(int *param_1);
void recovered_10029e8c(int param_1,int param_2);
bool recovered_1002a0c0(uint **********param_1,int param_2);
uint recovered_1002f2a8(undefined4 *param_1,uint param_2,int param_3);
bool recovered_1002f77c(undefined4 *param_1,char *param_2);
undefined1 recovered_1002f810(undefined4 *param_1,char *param_2);
void recovered_1002f8a0(undefined4 param_1,int *param_2);
void recovered_10033c9c(undefined4 param_1,int param_2);
void recovered_10034144(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
bool recovered_100343d4(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10034414(undefined4 *param_1);
byte recovered_100345e4(undefined4 param_1,int *param_2);
void recovered_100346d0(undefined4 *param_1);
void recovered_1003483c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5);
int * recovered_1003538c(int param_1,int *param_2,int *param_3,int *param_4);
int * recovered_10035c9c(int *param_1);
int * recovered_10035dc0(int *param_1);
void recovered_10035e14(int *param_1);
undefined4 recovered_10035edc(uint **********param_1,uint **********param_2,uint *********param_3);
void recovered_10039e98(int *param_1);
uint recovered_10039fb8(undefined4 *param_1,char *param_2,uint param_3,uint param_4);
void recovered_1003a05c(int *param_1);
void recovered_1003a718(int param_1,int *param_2,undefined4 param_3,int param_4);
void recovered_1003a744(int param_1,int *param_2,uint param_3);
undefined4 * recovered_1003abd8(int *param_1,int *param_2);
void recovered_1003b030(int *param_1);
undefined4
recovered_1003b0d4(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4,uint *param_5,
                  uint *param_6);
undefined4 recovered_1003b1f4(int param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 recovered_1003b388(int *param_1,undefined4 *param_2);
int recovered_1003bdf0(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_1003be60(int *param_1);
void recovered_1003bf4c(undefined4 *param_1,int *param_2,int *param_3,uint param_4,char *param_5,
                       int param_6,uint param_7);
int * recovered_10047698(int *param_1);
undefined4 * recovered_100477bc(int *param_1,undefined4 *param_2);
void recovered_100478b4(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void recovered_10047b94(int *param_1,int param_2,undefined4 *param_3);
void * recovered_10047ce8(void *output,void *vm,void *argument0);
undefined4 * recovered_10047f1c(int *param_1,undefined4 *param_2);
undefined4 recovered_100482c0(char *param_1,int param_2);
void * recovered_10049274(void *output,void *vm,void *argument0,void *argument1,uint argument2);
void * recovered_10049390(void *output,void *vm,void *argument0);
void recovered_10049c3c(int *param_1,uint param_2);
void recovered_10049ee8(undefined4 *param_1,undefined4 *param_2);
int recovered_1004a0fc(int param_1);
undefined4 * recovered_1004a21c(int *param_1,undefined4 *param_2,undefined4 param_3);
undefined4 * recovered_1004a5a0(int *param_1,undefined4 *param_2);
int * recovered_1004a698(int *param_1,int *param_2,undefined4 param_3,int *param_4);
undefined4 * recovered_1004b4ac(undefined4 *param_1,undefined4 *param_2);
void recovered_1004b550(int *in_r0,int *in_r1,undefined4 in_r2,int *in_r3);
void recovered_1004b580(int param_1);
undefined4 * recovered_1004b5c0(int *param_1,undefined4 *param_2);
undefined4
recovered_1004bbe0(undefined4 param_1,undefined4 *param_2,int *param_3,undefined1 *param_4);
undefined4 * recovered_1004bef0(int *param_1,undefined4 *param_2,int *param_3);
bool recovered_1004bfa0(int *in_r0,undefined4 *in_r1,int in_r2,undefined4 *in_r3);
undefined4 * recovered_1004bfe0(int *param_1,undefined4 *param_2,int param_3,int param_4);
undefined4 * recovered_1004d138(int *param_1,undefined4 *param_2,uint param_3);
undefined4 * recovered_1004d1b8(int *param_1,undefined4 *param_2,int *param_3);
bool recovered_1004d268(int *param_1,undefined4 *param_2,undefined4 *param_3);
bool recovered_1004d2b4(int *in_r0,undefined4 *in_r1,int in_r2,undefined4 *in_r3);
void recovered_1004d2fc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_1004d41c(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5
                       );
void * recovered_1004d5a8(void *output,void *vm,void *argument0);
bool recovered_1004de40(undefined4 *param_1);
void recovered_1004def8(int *param_1,undefined4 *param_2);
void recovered_1004df90(int *param_1,int param_2,uint param_3,int param_4,uint param_5);
int recovered_1004e138(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,uint param_5);
void recovered_1004e20c(int *param_1,undefined4 *param_2,uint param_3,uint param_4);
void recovered_1004e270(int param_1,uint *param_2);
void recovered_1004e398(int param_1);
uint * recovered_1004e41c(int *param_1,uint *param_2);
void recovered_1004e95c(int param_1);
int recovered_1004e9cc(int *param_1,int param_2);
int * recovered_1004eb40(int param_1,int *param_2);
int * recovered_1004f664(int *param_1,int *param_2);
bool recovered_1004f820(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_1004f8d0(int param_1,int param_2);
int * recovered_1004f950(int param_1,int *param_2);
void recovered_10050218(int *param_1,uint param_2);
undefined4 * recovered_10050390(int param_1,int param_2);
undefined4 * recovered_10050410(int param_1,int param_2);
uint recovered_100504a0(int param_1,int *param_2);
void * recovered_10050970(void *output,void *vm,void *argument0,void *argument1);
void * recovered_10050998(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_10051484(void *output,void *vm,void *argument0);
void * recovered_10051d78(void *output,void *vm,void *argument0);
void * recovered_10052eac(void *output,void *vm,void *argument0);
int * recovered_10053a2c(int *param_1,undefined4 *param_2,int param_3);
void * recovered_10053a8c(void *output,void *vm,uint argument0);
undefined4 * recovered_10053e14(int *param_1,undefined4 *param_2);
void * recovered_10053f1c(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_100545a4(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1005508c(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_10055c84(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_10056d88(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_10057290(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_10058f40(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_1005ad74(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1005b7e4(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1005c594(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1005d600(void *output,void *vm,void *argument0,ulong argument1);
void * recovered_1005e0b0(void *output,void *vm,uint argument0);
void * recovered_1005e200(void *output,void *vm,void *argument0,uint argument1,void *argument2);
void * recovered_1005e22c(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void * recovered_10065e88(void *output,void *vm,void *argument0);
void * recovered_1006629c(void *output,void *vm,void *argument0);
void * recovered_10066820(void *output,void *vm,void *argument0);
void * recovered_1006840c(void *output,void *vm,void *argument0,void *argument1);
undefined4 * recovered_1006ab18(int *param_1,int *param_2);
void * recovered_1006af84(void *output,void *vm,void *argument0);
void recovered_1006b21c(undefined4 *param_1,undefined4 *param_2,int *param_3);
void recovered_1006b7e8(int *param_1,undefined4 *param_2);
int recovered_1006c1d4(int param_1);
void recovered_1006c2cc(undefined4 *param_1,int param_2,int *param_3);
void recovered_1006c654(int param_1,int *param_2,int param_3);
void recovered_1006d2a8(int param_1,undefined4 *param_2);
void recovered_1006d584(undefined4 *param_1,int param_2,undefined4 *param_3);
void * recovered_1006d788(void *output,void *vm,void *argument0,bool argument1);
int recovered_1006e9dc(int param_1);
int recovered_1006eb00(int param_1);
int recovered_1006ec24(int param_1);
int * recovered_1006ed48(int *param_1);
void * recovered_1006ee6c(void *output,void *vm,void *argument0);
void * recovered_1006f550(void *output,void *vm,void *argument0);
void * recovered_1006f804(void *output,void *vm,void *argument0);
uint recovered_1006fad0(undefined4 *param_1,char *param_2,uint param_3,uint param_4);
void * recovered_1006fb68(void *output,void *vm,void *argument0);
void * recovered_1006fd28(void *output,void *vm,void *argument0);
void * recovered_1006fec0(void *output,void *vm,void *argument0);
void * recovered_100702f4(void *output,void *vm,void *argument0);
void * recovered_10070468(void *output,void *vm,void *argument0);
int * recovered_100709f0(int *param_1);
void recovered_10072d00(int *param_1,int *param_2,undefined4 *param_3);
uint * recovered_10073048(uint *param_1,uint param_2,uint param_3,undefined4 *param_4);
void recovered_100731b0(int *param_1,int param_2,uint param_3);
void * recovered_1007321c(void *output,void *vm,void *argument0);
void * recovered_10073364(void *output,void *vm,void *argument0);
void * recovered_10073620(void *output,void *vm,void *argument0);
void * recovered_1007388c(void *output,void *vm,void *argument0);
void * recovered_10073c80(void *output,void *vm,void *argument0);
void * recovered_10074028(void *output,void *vm,void *argument0);
undefined4 recovered_10074468(int *param_1,undefined4 *param_2);
void * recovered_10074580(void *output,void *vm,void *argument0);
void * recovered_10074a28(void *output,void *vm,void *argument0);
void * recovered_10074f8c(void *output,void *vm,void *argument0);
void * recovered_10075428(void *output,void *vm,void *argument0);
void * recovered_10075894(void *output,void *vm,void *argument0);
void * recovered_10075ab0(void *output,void *vm,void *argument0);
int recovered_10075acc(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * recovered_10075ea4(undefined4 *param_1,undefined4 *param_2);
void * recovered_10075f34(void *output,void *vm,void *argument0);
void * recovered_10076bfc(void *output,void *vm,void *argument0);
void * recovered_10076c18(void *output,void *vm,void *argument0);
void * recovered_10076c9c(void *output,void *vm,void *argument0);
void * recovered_10076f1c(void *output,void *vm,void *argument0);
void * recovered_1007719c(void *output,void *vm,void *argument0);
void recovered_10077428(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4);
int recovered_100774b8(int param_1,int param_2,int *param_3,undefined4 *param_4);
void * recovered_10077668(void *output,void *vm,void *argument0);
bool recovered_10077684(undefined4 *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
                       uint *param_6);
void * recovered_100777b0(void *output,void *vm,void *argument0);
void * recovered_100777cc(void *output,void *vm,void *argument0);
void * recovered_100777e8(void *output,void *vm,void *argument0);
void * recovered_10077804(void *output,void *vm,void *argument0);
void recovered_10077ac0(int *param_1,char *param_2,uint param_3);
void * recovered_10077e20(void *output,void *vm,void *argument0);
void * recovered_10077e3c(void *output,void *vm,void *argument0);
void * recovered_10078150(void *output,void *vm,void *argument0);
void * recovered_1007816c(void *output,void *vm,void *argument0);
void * recovered_10078188(void *output,void *vm,void *argument0);
void recovered_100781a4(undefined4 *param_1,void **param_2);
void * recovered_100787d0(void *output,void *vm,void *argument0);
void * recovered_100787ec(void *output,void *vm,void *argument0);
void * recovered_1007894c(void *output,void *vm,void *argument0);
void * recovered_10078aac(void *output,void *vm,void *argument0);
void * recovered_10078c38(void *output,void *vm,void *argument0);
void * recovered_10078ecc(void *output,void *vm,void *argument0);
void * recovered_10079160(void *output,void *vm,void *argument0);
void * recovered_100792c0(void *output,void *vm,void *argument0);
void * recovered_10079420(void *output,void *vm,void *argument0);
void * recovered_10079590(void *output,void *vm,void *argument0);
void * recovered_10079838(void *output,void *vm,void *argument0);
void * recovered_10079a04(void *output,void *vm,void *argument0);
void * recovered_10079b90(void *output,void *vm,void *argument0);
void * recovered_10079d40(void *output,void *vm,void *argument0);
void * recovered_10079ec8(void *output,void *vm,void *argument0);
void * recovered_1007a0d8(void *output,void *vm,void *argument0);
void recovered_1007a2f0(undefined4 param_1,int *param_2,uint *param_3);
void * recovered_1007a334(void *output,void *vm,void *argument0);
int recovered_1007ace4(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4);
int recovered_1007adec(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4);
int recovered_1007aef4(int *param_1,uint *param_2,undefined1 *param_3);
void recovered_1007b004(int *param_1,undefined4 *param_2,undefined1 param_3);
void * recovered_1007b130(void *output,void *vm,void *argument0,void *argument1,void *argument2);
undefined4 recovered_1007b394(undefined4 param_1,int param_2);
void recovered_1007b4cc(int *param_1);
int recovered_1007b9b0(int param_1);
undefined4 * recovered_1007bb2c(int *param_1,int *param_2);
void recovered_1007c06c(int param_1,int *param_2,uint *param_3,int param_4);
void recovered_1007c230(undefined4 *param_1,undefined4 *param_2,int param_3);
void recovered_1007d1d8(uint *param_1,uint *param_2,uint *param_3,int param_4);
uint recovered_1007e468(int param_1,int *param_2,uint *param_3,void *param_4);
void recovered_1007e5d0(int *param_1,int *param_2,int *param_3);
void recovered_1007e758(undefined4 *param_1,int *param_2);
void recovered_1007ed10(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4);
undefined4 recovered_1007eeac(void **param_1,int param_2,uint *param_3);
void recovered_1007faa4(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4);
void recovered_1007ffe8(undefined4 *param_1,undefined4 *param_2,int *param_3);
void recovered_10080358(uint *******param_1,uint *******param_2,uint *******param_3,
                       uint *******param_4);
void recovered_100835a0(int *param_1,int param_2,undefined4 *param_3);
void recovered_100835f0(int *param_1,uint param_2);
int * recovered_100836e0(int *param_1);
int recovered_10083748(undefined4 param_1,int *param_2,int param_3,undefined1 *param_4);
int recovered_1008390c(undefined4 param_1,int *param_2,int param_3);
int recovered_10083ab4(undefined4 param_1,int *param_2,int param_3);
void recovered_10083c5c(int *param_1,undefined4 *param_2,int **param_3);
undefined4 * recovered_100842d4(undefined4 *param_1);
void recovered_10084348(int *param_1);
undefined4 * recovered_100843e8(undefined4 *param_1,undefined4 *param_2);
int recovered_100844e4(int param_1);
uint recovered_10084558(int *param_1,uint param_2,undefined4 *param_3);
int recovered_10084788(int param_1);
void recovered_100847bc(int *param_1,uint param_2);
void recovered_10084924(uint *param_1,int param_2,int param_3,uint param_4,uint param_5);
void recovered_10084c54(int *param_1,undefined4 *param_2);
int * recovered_10085024(int *param_1);
void recovered_1008509c(int *param_1,undefined4 *param_2);
int * recovered_100851d0(int *param_1);
void * recovered_10085234(void *output,void *vm,void *argument0);
void recovered_10086068(undefined4 *param_1);
int * recovered_100865b8(int *param_1);
void * recovered_1008660c(void *output,void *vm,void *argument0,void *argument1,void *argument2);
void recovered_100869b8(int param_1,char *param_2);
void * recovered_10086dcc(void *output,void *vm,void *argument0);
void * recovered_1008785c(void *output,void *vm,void *argument0);
uint recovered_10087ad4(undefined4 param_1,int param_2,int *param_3,uint param_4,uint param_5,
                       undefined4 *param_6,undefined1 param_7);
int recovered_100894d8(int *param_1,int param_2,undefined8 *param_3,undefined8 *param_4);
void * recovered_10089680(void *output,void *vm,void *argument0);
void * recovered_10089690(void *output,void *vm,void *argument0,void *argument1);
void recovered_10089cfc(int *param_1,undefined4 param_2,ushort *param_3);
int recovered_1008b10c(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_1008b270(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void recovered_1008b5a8(undefined4 *param_1,int param_2);
void recovered_1008b778(int *param_1,uint param_2);
void recovered_1008b88c(int *param_1,uint param_2);
void recovered_1008ba00(int *param_1,uint param_2);
void recovered_1008bb2c(int *param_1,uint param_2);
void * recovered_1008bc6c(void *output,void *vm,void *argument0);
int recovered_1008bf48(int *param_1,undefined4 *param_2,undefined4 *param_3);
int * recovered_1008c07c(int *param_1);
int * recovered_1008c0c8(int *param_1);
void recovered_1008c110(int *param_1,uint param_2);
void recovered_1008c2e8(int *param_1,uint param_2);
int * recovered_1008c420(int *param_1);
void recovered_1008c450(undefined4 *param_1,undefined4 *param_2);
undefined4 recovered_1008c788(int *param_1,int *param_2);
void recovered_1008cb60(undefined4 *param_1,undefined1 *param_2);
void recovered_1008cf88(undefined4 *param_1,undefined4 *param_2);
void recovered_1008d138(int *param_1,int *param_2,int *param_3);
int recovered_1008d2b8(undefined4 *param_1,int param_2);
uint recovered_1008d5f0(undefined4 *param_1,uint param_2,int param_3);
undefined4 recovered_1008db18(int *param_1,uint param_2,int *param_3,char *param_4);
uint recovered_1008db94(int *param_1,int *param_2,uint param_3);
void recovered_1008dec4(int *param_1,int *param_2,int param_3,int *param_4,char *param_5);
undefined4 recovered_100922d8(undefined4 *param_1);
void recovered_100936c0(int *param_1,undefined4 *param_2,int **param_3);
undefined4 * recovered_10093d38(undefined4 *param_1);
undefined4 * recovered_10093db8(undefined4 *param_1);
void * recovered_10093f04(void *output,void *vm,void *argument0);
void * recovered_100940d0(void *output,void *vm,void *argument0);
undefined4 * recovered_100940e0(undefined4 *param_1);
int * recovered_10094278(int *param_1);
int * recovered_10094408(int *param_1);
void recovered_100944f0(int *param_1,int param_2,uint param_3);
void recovered_100946b4(int param_1,int *param_2);
void recovered_1009483c(int param_1,int *param_2);
int * recovered_100949ac(int *param_1);
void recovered_10094ad0(undefined4 *param_1,undefined4 *param_2);
int * recovered_10094bf8(int *param_1,int *param_2);
int * recovered_10094f8c(int *param_1,int *param_2);
void recovered_10095248(void);
void recovered_1009524c(void *param_1);
void recovered_10095250(int param_1);
void recovered_100952a8(undefined4 *param_1,char *param_2,char *param_3,int *param_4,uint param_5);
void recovered_100954dc(int *param_1);
undefined1 * recovered_10095510(int param_1);
void recovered_10095530(int *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10095be4(int *param_1,undefined1 param_2);
void recovered_10095cf4(int *param_1,int param_2,uint param_3);
void recovered_10095f4c(int *param_1,uint param_2);
int * recovered_1009617c(int *param_1,undefined1 *param_2,undefined1 *param_3);
undefined4 recovered_10096298(int *param_1,int param_2,int param_3);
undefined4 recovered_100964cc(int param_1,int param_2,double in_d0);
void recovered_10096900(undefined4 param_1,uint param_2,undefined4 *param_3,int param_4,int param_5);
undefined4 recovered_10096dd0(undefined4 param_1,uint param_2,int param_3,int param_4);
int recovered_10097418(int param_1);
void recovered_10097774(undefined4 param_1,int *param_2,int *param_3);
void recovered_100978dc(undefined4 *param_1);
undefined1 * recovered_10097910(int param_1);
int * recovered_10097930(int *param_1,int *param_2);
int * recovered_10097a64(int *param_1,int *param_2);
int * recovered_10097b70(int *param_1,int *param_2);
void recovered_10097c60(int *param_1,undefined4 *param_2,int **param_3);
void recovered_100982dc(int *param_1,uint param_2,undefined4 *param_3);
undefined4 * recovered_100983d0(undefined4 *param_1,undefined4 *param_2);
void recovered_100984b4(void);
void recovered_100984b8(void *param_1);
void recovered_100984bc(int param_1);
undefined4 * recovered_100984e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int * recovered_1009869c(int *param_1,int *param_2);
int * recovered_10098830(int *param_1,int *param_2);
int * recovered_1009890c(int *param_1);
int recovered_10098a44(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
int recovered_10098ba8(int param_1);
int * recovered_10098d34(int *param_1);
int * recovered_10098d9c(int *param_1);
int * recovered_10098df0(int *param_1);
int * recovered_10098e54(int *param_1);
void recovered_10098f4c(void *param_1);
int recovered_10099048(int param_1,uint param_2,uint param_3);
void recovered_10099324(int *param_1,uint param_2,undefined1 param_3);
int * recovered_10099444(int *param_1);
undefined4 * recovered_100994e8(undefined4 *param_1);
void recovered_10099524(undefined4 *param_1,undefined4 param_2);
void recovered_1009985c(void);
void recovered_10099860(void *param_1);
void recovered_10099864(int param_1);
void recovered_10099890(undefined4 *param_1,undefined4 *param_2);
void recovered_10099ab0(int *param_1);
void recovered_10099d88(uint param_1,uint param_2);
uint recovered_1009a040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int recovered_1009a418(int param_1);
int recovered_1009a57c(int *param_1,undefined4 *param_2,uint *param_3,uint *param_4);
undefined4 * recovered_1009a684(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4);
bool recovered_1009a7ec(undefined1 *param_1,uint param_2);
uchar recovered_1009ab3c(void *data,ulong length);
void recovered_1009ae58(undefined4 *param_1,undefined4 *param_2);
void recovered_1009b3b8(uint *param_1,undefined4 *param_2,uint *param_3);
void recovered_1009b5e4(int *param_1,uint param_2);
void recovered_1009b678(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int * recovered_1009b6fc(int *param_1);
uint recovered_1009b834(undefined4 *param_1,int param_2);
int recovered_1009bff4(int param_1);
int recovered_1009c068(void *parser,uint kind,uint left,uint right,ushort token);
uint recovered_1009c1d4(undefined4 *param_1,uint param_2);
int recovered_1009c68c(void *parser,void *text,ushort token);
int recovered_1009c76c(void *parser,uint number,ushort token);
int recovered_1009c84c(float number,void *parser,ushort token);
int recovered_1009c938(int *param_1,int param_2,undefined8 *param_3,undefined8 *param_4);
undefined4 * recovered_1009cbb4(undefined4 *param_1,undefined4 *param_2);
void recovered_1009cf1c(undefined4 *param_1);
undefined4 * recovered_1009d108(undefined4 *param_1);
int * recovered_1009d47c(int *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_1009d598(void);
void recovered_1009d59c(void *param_1);
uint recovered_1009d5a0(uint param_1,undefined4 *param_2);
void recovered_1009ddb8(int param_1);
int * recovered_1009ddfc(int *param_1,undefined4 *param_2);
void recovered_1009df9c(int *param_1);
int * recovered_1009dfd0(int *param_1);
char recovered_1009e0f4(int *param_1);
int * recovered_1009e3c8(int *param_1);
int recovered_1009e510(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                      uint param_7,uint *param_8);
bool recovered_1009e76c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint *param_6);
int * recovered_1009ea64(int *param_1);
void recovered_1009ebbc(int *param_1);
int recovered_1009ed24(int *param_1,undefined4 *param_2);
void recovered_1009ee4c(void);
void recovered_1009ee50(void *param_1);
void recovered_1009ee54(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_1009ee64(int param_1);
void recovered_1009ee98(void);
void recovered_1009ee9c(void *param_1);
void recovered_1009eea0(undefined4 *param_1,int param_2,int in_r2);
void recovered_1009eeb4(int param_1);
void recovered_1009eee8(void);
void recovered_1009eeec(void *param_1);
void recovered_1009eef0(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009ef04(int param_1);
void recovered_1009ef38(void);
void recovered_1009ef3c(void *param_1);
void recovered_1009ef40(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_1009ef50(int param_1);
void recovered_1009ef84(void);
void recovered_1009ef88(void *param_1);
void recovered_1009ef8c(uint *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_1009ef9c(int param_1);
void recovered_1009efd0(void);
void recovered_1009efd4(void *param_1);
void recovered_1009efd8(undefined4 *param_1,undefined4 param_2,int *param_3);
void recovered_1009f120(int param_1);
void recovered_1009f154(void);
void recovered_1009f158(void *param_1);
void recovered_1009f15c(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_1009f16c(int param_1);
void recovered_1009f1a0(void);
void recovered_1009f1a4(void *param_1);
void recovered_1009f1a8(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_1009f1b8(int param_1);
void recovered_1009f1ec(void);
void recovered_1009f1f0(void *param_1);
void recovered_1009f1f4(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f208(int param_1);
void recovered_1009f23c(void);
void recovered_1009f240(void *param_1);
void recovered_1009f244(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f258(int param_1);
void recovered_1009f28c(void);
void recovered_1009f290(void *param_1);
void recovered_1009f294(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_1009f2a4(int param_1);
void recovered_1009f2d8(void);
void recovered_1009f2dc(void *param_1);
void recovered_1009f2e0(undefined4 *param_1,int param_2,undefined4 *in_r2);
void recovered_1009f2f4(int param_1);
void recovered_1009f328(void);
void recovered_1009f32c(void *param_1);
void recovered_1009f330(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_1009f340(int param_1);
void recovered_1009f374(void);
void recovered_1009f378(void *param_1);
void recovered_1009f37c(uint *param_1,int param_2,undefined4 *in_r2);
void recovered_1009f390(int param_1);
void recovered_1009f3c4(void);
void recovered_1009f3c8(void *param_1);
void recovered_1009f3cc(undefined4 *param_1,int param_2,undefined4 *in_r2);
void recovered_1009f3e0(int param_1);
void recovered_1009f414(void);
void recovered_1009f418(void *param_1);
void recovered_1009f41c(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_1009f43c(int param_1);
void recovered_1009f470(void);
void recovered_1009f474(void *param_1);
void recovered_1009f478(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f48c(int param_1);
void recovered_1009f4c0(void);
void recovered_1009f4c4(void *param_1);
void recovered_1009f4c8(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f4dc(int param_1);
void recovered_1009f510(void);
void recovered_1009f514(void *param_1);
void recovered_1009f518(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f52c(int param_1);
void recovered_1009f560(void);
void recovered_1009f564(void *param_1);
void recovered_1009f568(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f57c(int param_1);
void recovered_1009f5b0(void);
void recovered_1009f5b4(void *param_1);
void recovered_1009f5b8(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f5cc(int param_1);
void recovered_1009f600(void);
void recovered_1009f604(void *param_1);
void recovered_1009f608(undefined4 *param_1,int param_2,undefined4 *in_r2);
void recovered_1009f61c(int param_1);
void recovered_1009f650(void);
void recovered_1009f654(void *param_1);
void recovered_1009f658(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f66c(int param_1);
void recovered_1009f6a0(void);
void recovered_1009f6a4(void *param_1);
void recovered_1009f6a8(undefined4 *param_1,int param_2,int *in_r2);
void recovered_1009f6bc(int param_1);
void recovered_1009f6f0(void);
void recovered_1009f6f4(void *param_1);
void recovered_1009f6f8(undefined4 *param_1,int param_2,void **in_r2);
void recovered_1009f70c(int param_1);
void recovered_1009f740(void);
void recovered_1009f744(void *param_1);
void recovered_1009f748(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_1009f764(int param_1);
void recovered_1009f798(void);
void recovered_1009f79c(void *param_1);
void recovered_1009f7a0(undefined4 *param_1,int param_2);
void recovered_1009f824(int param_1);
void recovered_1009f858(void);
void recovered_1009f85c(void *param_1);
void recovered_1009f860(undefined4 *param_1,int param_2,int in_r2);
void recovered_1009f874(int param_1);
void recovered_1009f8a8(void);
void recovered_1009f8ac(void *param_1);
void recovered_1009f8b0(undefined4 *param_1,undefined4 param_2,int param_3);
void recovered_1009fa98(int param_1);
void recovered_1009facc(void);
void recovered_1009fad0(void *param_1);
void recovered_1009fad4(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_1009fca0(int param_1);
int recovered_1009fcd4(int *param_1,undefined4 *param_2);
void recovered_1009fda8(void);
void recovered_1009fdac(void *param_1);
void recovered_1009fdb0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a002c(int param_1);
void recovered_100a0060(void);
void recovered_100a0064(void *param_1);
void recovered_100a0068(undefined4 *param_1,undefined4 param_2,int *param_3);
void recovered_100a0360(int param_1);
void recovered_100a0394(void);
void recovered_100a0398(void *param_1);
void recovered_100a039c(int *param_1,int param_2,int *param_3);
void recovered_100a06b0(int param_1);
void recovered_100a06e4(void);
void recovered_100a06e8(void *param_1);
void recovered_100a06ec(undefined4 *param_1,int param_2,int *param_3);
void recovered_100a0b14(int param_1);
void recovered_100a0b48(int *param_1,uint param_2);
void recovered_100a0ddc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100a0eb8(void);
void recovered_100a0ebc(void *param_1);
void recovered_100a0ec0(undefined4 *param_1,undefined4 param_2,int *param_3);
void recovered_100a1008(int param_1);
void recovered_100a103c(void);
void recovered_100a1040(void *param_1);
void recovered_100a1044(undefined4 *param_1,undefined4 param_2,int *param_3);
void recovered_100a1200(int param_1);
void recovered_100a1234(void);
void recovered_100a1238(void *param_1);
void recovered_100a123c(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_100a124c(int param_1);
void recovered_100a1280(void);
void recovered_100a1284(void *param_1);
void recovered_100a1288(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_100a1298(int param_1);
void recovered_100a12cc(void);
void recovered_100a12d0(void *param_1);
void recovered_100a12d4(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a12e4(int param_1);
void recovered_100a1318(void);
void recovered_100a131c(void *param_1);
void recovered_100a1320(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a133c(int param_1);
void recovered_100a1370(void);
void recovered_100a1374(void *param_1);
void recovered_100a1378(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1394(int param_1);
void recovered_100a13c8(void);
void recovered_100a13cc(void *param_1);
void recovered_100a13d0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a13ec(int param_1);
void recovered_100a1420(void);
void recovered_100a1424(void *param_1);
void recovered_100a1428(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1444(int param_1);
void recovered_100a1478(void);
void recovered_100a147c(void *param_1);
void recovered_100a1480(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a1490(int param_1);
void recovered_100a14c4(void);
void recovered_100a14c8(void *param_1);
void recovered_100a14cc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a14e8(int param_1);
void recovered_100a151c(void);
void recovered_100a1520(void *param_1);
void recovered_100a1524(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a1534(int param_1);
void recovered_100a1568(void);
void recovered_100a156c(void *param_1);
void recovered_100a1570(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_100a1590(int param_1);
void recovered_100a15c4(void);
void recovered_100a15c8(void *param_1);
void recovered_100a15cc(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_100a15ec(int param_1);
void recovered_100a1620(void);
void recovered_100a1624(void *param_1);
void recovered_100a1628(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_100a1648(int param_1);
void recovered_100a167c(void);
void recovered_100a1680(void *param_1);
void recovered_100a1684(int *param_1,int param_2,undefined4 *param_3);
void recovered_100a16a4(int param_1);
void recovered_100a16d8(void);
void recovered_100a16dc(void *param_1);
void recovered_100a16e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1840(int param_1);
void recovered_100a1874(void);
void recovered_100a1878(void *param_1);
void recovered_100a187c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a19dc(int param_1);
void recovered_100a1a10(void);
void recovered_100a1a14(void *param_1);
void recovered_100a1a18(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a1a28(int param_1);
void recovered_100a1a5c(void);
void recovered_100a1a60(void *param_1);
void recovered_100a1a64(undefined4 *param_1,int param_2,int *in_r2);
void recovered_100a1a78(int param_1);
void recovered_100a1aac(void);
void recovered_100a1ab0(void *param_1);
void recovered_100a1ab4(undefined4 *param_1,int param_2,int *in_r2);
void recovered_100a1ac8(int param_1);
void recovered_100a1afc(void);
void recovered_100a1b00(void *param_1);
void recovered_100a1b04(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1c64(int param_1);
void recovered_100a1c98(void);
void recovered_100a1c9c(void *param_1);
void recovered_100a1ca0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1e00(int param_1);
void recovered_100a1e34(void);
void recovered_100a1e38(void *param_1);
void recovered_100a1e40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_100a1fb0(int param_1);
void recovered_100a1fe4(void);
void recovered_100a1fe8(void *param_1);
void recovered_100a1fec(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a1ffc(int param_1);
void recovered_100a2030(void);
void recovered_100a2034(void *param_1);
void recovered_100a2038(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_100a2048(int param_1);
void recovered_100a207c(void);
void recovered_100a2080(void *param_1);
void recovered_100a2084(undefined4 *param_1,int param_2,int *in_r2);
void recovered_100a2098(int param_1);
void recovered_100a20cc(void);
void recovered_100a20d0(void *param_1);
void recovered_100a20d4(undefined4 *param_1,int param_2,undefined4 *in_r2);
void recovered_100a20e8(int param_1);
void recovered_100a211c(void);
void recovered_100a2120(void *param_1);
void recovered_100a2124(undefined4 *in_r0,void *in_r1,undefined4 *in_r2);
void recovered_100a2134(int param_1);
void recovered_100a2168(void);
void recovered_100a216c(void *param_1);
void recovered_100a2170(undefined4 *in_r0,void *in_r1,int *in_r2);
void recovered_100a2180(int param_1);
void recovered_100a21b4(void);
void recovered_100a21b8(void *param_1);
void recovered_100a21bc(undefined4 *param_1,int param_2,int *param_3);
void recovered_100a21d4(int param_1);
void recovered_100a2208(void);
void recovered_100a220c(void *param_1);
void recovered_100a2210(undefined4 *param_1,int param_2,int in_r2);
void recovered_100a2224(int param_1);
void recovered_100a2258(void);
void recovered_100a225c(void *param_1);
void recovered_100a2260(undefined4 *param_1,undefined4 param_2,int param_3);
void recovered_100a23e8(int param_1);
void recovered_100a241c(void);
void recovered_100a2420(void *param_1);
void recovered_100a2424(int param_1);
int * recovered_100a2450(int *param_1);
void recovered_100a2678(int *param_1,uint param_2);
undefined4 * recovered_100a2734(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100a28e8(int *param_1,undefined4 *param_2);
void recovered_100a29f0(int *param_1,uint param_2);
undefined4 * recovered_100a2b50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100a2c4c(void);
void recovered_100a2c50(void *param_1);
void recovered_100a2c54(int param_1);
int recovered_100a2c80(int param_1);
void recovered_100a2e58(undefined4 *param_1,undefined4 *param_2);
int recovered_100a3378(int *param_1,undefined4 *param_2);
undefined4 * recovered_100a3448(undefined4 *param_1,undefined4 *param_2);
void recovered_100a3f08(int *param_1,uint param_2);
undefined4 * recovered_100a4014(undefined4 *param_1,undefined4 *param_2);
void recovered_100a42d4(int *param_1,uint param_2);
void recovered_100a456c(int *param_1,uint param_2);
int recovered_100a4664(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100a479c(int *param_1,uint param_2);
int recovered_100a4a30(int *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_100a4b70(int *param_1,uint param_2);
void recovered_100a4e04(int *param_1,uint param_2);
void recovered_100a507c(int *param_1,uint param_2);
int recovered_100a5264(int *param_1,int param_2,int param_3);
void recovered_100a5374(undefined4 *param_1,undefined4 *param_2);
void recovered_100a54f0(undefined2 *param_1,undefined2 *param_2);
void recovered_100a56dc(void);
void recovered_100a56e0(void *param_1);
void recovered_100a56e4(int param_1);
void recovered_100a5710(int *param_1,uint param_2);
void recovered_100a59ac(int *param_1,uint param_2);
void recovered_100a5a9c(void);
void recovered_100a5aa0(void *param_1);
void recovered_100a5aa4(int param_1);
void recovered_100a5ccc(void);
void recovered_100a5cd0(void *param_1);
void recovered_100a5cd4(int param_1);
int * recovered_100a5d04(int *param_1,undefined4 *param_2,uint param_3);
int recovered_100a5f70(int param_1);
void recovered_100a6068(void *param_1);
void recovered_100a6164(int param_1);
void recovered_100a6258(int param_1);
void recovered_100a6354(void);
void recovered_100a6358(void *param_1);
void recovered_100a635c(int param_1);
undefined4 * recovered_100a638c(undefined4 *param_1);
void recovered_100a64c4(undefined4 *param_1);
void recovered_100a6600(int param_1,int param_2,uint *param_3);
void recovered_100a69fc(int param_1);
undefined4 * recovered_100a6a50(undefined4 *param_1);
void recovered_100a6b88(undefined4 *param_1);
void recovered_100a6cc4(int param_1,int param_2,uint *param_3);
void recovered_100a70c0(int param_1);
undefined4 * recovered_100a7114(undefined4 *param_1);
void recovered_100a724c(undefined4 *param_1);
void recovered_100a7388(int param_1,int param_2,uint *param_3);
void recovered_100a7784(int param_1);
int recovered_100a77d8(int *param_1,int param_2,int param_3);
int recovered_100a7a04(int *param_1,int param_2);
int recovered_100a7b84(int *param_1,int param_2,int param_3);
int recovered_100a7df0(int *param_1,int param_2,undefined4 *param_3);
undefined4 * recovered_100a80fc(undefined4 *param_1);
void recovered_100a828c(undefined4 *param_1);
void recovered_100a8420(int param_1,int param_2,int *param_3);
undefined4 * recovered_100a87a8(int param_1);
void recovered_100a8b04(int *******param_1,int *******param_2);
void recovered_100ae2c8(undefined4 *param_1,int *param_2);
int recovered_100ae4dc(int *param_1,undefined4 *param_2);
void recovered_100ae5ac(int *param_1,undefined4 *param_2);
void recovered_100ae6b8(int *param_1,uint param_2);
int recovered_100ae7b4(int *param_1,undefined8 *param_2);
void recovered_100ae8fc(uint *param_1,uint *param_2);
void recovered_100aea90(void);
void recovered_100aea94(void *param_1);
void recovered_100aea98(int *param_1,int *param_2);
void recovered_100b0124(int param_1);
void recovered_100b0170(void);
void recovered_100b0174(void *param_1);
void recovered_100b0178(undefined4 *param_1,uint *param_2,uint *param_3);
void recovered_100b260c(int param_1);
void recovered_100b2660(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
void recovered_100b2994(int *param_1,undefined4 *param_2);
int recovered_100b2aa0(undefined4 *param_1,int param_2);
int recovered_100b2dd8(uint *param_1,int *param_2);
undefined2 * recovered_100b2f98(undefined2 *param_1,undefined2 *param_2);
int * recovered_100b3ad8(int *param_1,int *param_2);
int * recovered_100b3bc8(int *param_1,int *param_2);
int * recovered_100b3da4(int *param_1,int *param_2);
int * recovered_100b3f0c(int *param_1,int *param_2);
void recovered_100b413c(void);
void recovered_100b418c(void);
void recovered_100b41dc(void);
void recovered_100b4244(void);
void recovered_100b4284(void);
void recovered_100b42d4(void);
void recovered_100b4324(void);
void recovered_100b4374(void);
void recovered_100b43c4(void);
void recovered_100b4434(void);
void recovered_100b4484(void);
void recovered_100b44f4(void);
void recovered_100b4544(void);

/* Original analysis identifiers for manual recovery units. */
