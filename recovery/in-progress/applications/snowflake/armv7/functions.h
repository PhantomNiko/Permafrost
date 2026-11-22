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
#define ABS(value) __builtin_fabs(value)
#include "../format.h"
typedef int pf_compare(const void *,const void *);
static unsigned pf_snow_atomic_guard;
static inline void pf_snow_atomic_enter(void){while(__atomic_exchange_n(&pf_snow_atomic_guard,1,__ATOMIC_ACQUIRE)){} }
static inline void pf_snow_atomic_leave(void){__atomic_store_n(&pf_snow_atomic_guard,0,__ATOMIC_RELEASE);}
#define pf_varargs_10043634__4_ recovered_10043634
#define pf_varargs_10043634__4__4_ recovered_10043634
#define pf_varargs_10043634__4__4__4__4__4__4__4_ recovered_10043634
#define pf_varargs_10043634___ recovered_10043634
#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
extern uint8_t pf_module_state[];
void recovered_10002850(void);
void recovered_10002c7c(void);
int recovered_10002dc8(int argc,char **argv);
uchar recovered_100031c0(int argc,char **argv,void *options);
void recovered_10003b20(void);
void recovered_10003ba0(void);
void * recovered_10003be4(char *param_1,ulong *param_2);
undefined1 recovered_10003e00(int param_1,uint *param_2);
void recovered_1000426c(int param_1);
void recovered_10004358(undefined4 *param_1);
byte recovered_100043c0(int param_1,int param_2,int *param_3);
void recovered_10004730(undefined4 *param_1);
undefined1 recovered_100047b8(char *param_1,int param_2,int param_3);
void recovered_10004964(void *options);
bool recovered_100049f8(char *param_1,char *param_2);
undefined1 recovered_10004ab4(char *param_1,char *param_2);
uchar recovered_10004bb8(void *options,char *name);
uint recovered_10004ce8(char *param_1);
undefined1 recovered_10004d74(char *param_1,undefined4 *param_2);
undefined1 recovered_10004eec(int param_1);
void * recovered_1000507c(char *name);
void recovered_10005514(int param_1);
undefined4 recovered_10005588(byte *param_1,int param_2);
undefined1 recovered_10005750(uint *param_1);
byte recovered_100058dc(int param_1);
undefined1 recovered_10006228(int param_1,char *param_2,undefined4 param_3);
int recovered_100063a0(int param_1,int param_2);
void recovered_100064d0(byte *param_1,int param_2);
void recovered_1000680c(undefined4 *param_1,undefined1 *param_2);
undefined1 recovered_100068ac(void *param_1,int param_2);
void recovered_10006bc8(undefined4 *param_1);
undefined1 recovered_10007498(void *param_1,int param_2);
undefined1 recovered_100077f4(void *param_1,int param_2);
undefined1 recovered_10007c28(void *param_1,int param_2);
void recovered_1000807c(int param_1);
bool recovered_100081dc(byte param_1);
bool recovered_10008260(byte param_1);
void recovered_100082e4(void *param_1,uint param_2,void *param_3,uint param_4);
void recovered_100083bc(void *param_1,void *param_2);
void * recovered_10008450(void *param_1,void *param_2);
void recovered_10008560(undefined4 *param_1);
int recovered_100087b4(char param_1);
uint recovered_1000888c(int *param_1);
void recovered_10008920(int *param_1,int param_2);
void recovered_100089f0(int *param_1,int param_2);
bool recovered_10008ac0(int param_1,char *param_2);
bool recovered_10008b68(int param_1,char *param_2);
bool recovered_10008c1c(int *param_1);
void recovered_10008c80(int *param_1,int param_2);
void recovered_10008d50(undefined4 *param_1,undefined4 param_2);
void recovered_10008dc0(int *param_1,int param_2);
void recovered_10008e78(int *param_1,int param_2);
void recovered_10008f30(int *param_1,int param_2);
void recovered_10008fe8(int *param_1,int param_2);
void recovered_10009214(int *param_1,int param_2);
int * recovered_1000945c(int *param_1,int *param_2,ulong param_3);
void recovered_10009544(int *param_1,int param_2);
void recovered_10009668(int *param_1,int param_2);
void recovered_10009814(void *param_1,int param_2);
void recovered_100099dc(undefined4 *param_1,int *param_2,uint param_3);
void recovered_10009aa8(void *param_1,int param_2);
uint recovered_10009fb0(int param_1,char *param_2);
uint recovered_1000a050(int param_1,int param_2);
void recovered_1000a0d0(int param_1,char *param_2,undefined4 param_3);
void recovered_1000a1b0(void *param_1,int param_2,int param_3,undefined4 param_4,char param_5);
uint recovered_1000a420(char *param_1);
void recovered_1000a830(undefined4 *param_1,int param_2);
void recovered_1000adec(void *param_1,int param_2,int param_3);
int recovered_1000af60(int param_1,int param_2);
undefined1 recovered_1000b080(int param_1,int param_2,undefined4 *param_3);
void recovered_1000b158(int param_1,char *param_2,undefined4 param_3,undefined4 param_4);
void recovered_1000b2a8(int param_1);
void recovered_1000b390(undefined4 *param_1,undefined1 *param_2);
uint recovered_1000b468(int param_1,int param_2,uint param_3);
void recovered_1000b5bc(void *param_1,int param_2,int param_3,int param_4,uint param_5,
                       undefined1 *param_6);
int recovered_1000ba20(int param_1,int param_2);
void recovered_1000bb4c(undefined4 *param_1,undefined4 param_2,char *param_3,int param_4,
                       uint param_5,undefined1 *param_6);
uint recovered_1000be20(int param_1,byte param_2);
byte recovered_1000d02c(int param_1,uint param_2);
byte recovered_1000d28c(int param_1,byte param_2);
byte recovered_1000d650(int param_1,byte param_2);
void recovered_1000dbb0(int param_1,byte param_2);
void recovered_1000de20(int param_1,byte param_2);
void recovered_1000e0c8(int param_1,byte param_2,byte param_3);
void recovered_1000e3c8(int param_1,char *param_2,uint param_3,int param_4);
byte recovered_1000e64c(int param_1,byte param_2);
uint recovered_1000e98c(int param_1,char *param_2,byte param_3);
void * recovered_1000f238(int param_1);
void * recovered_1000f3cc(int param_1);
uint recovered_1000f7c4(int param_1,undefined1 *param_2);
undefined1 recovered_1000f914(int param_1,undefined1 *param_2,byte param_3);
void recovered_1000fbd8(int param_1,int param_2);
bool recovered_1000fc70(char *param_1,int *param_2,int *param_3,int *param_4);
void * recovered_10010084(char *param_1);
void * recovered_1001023c(uint param_1,uint param_2);
void recovered_100102bc(uint *param_1,uint *param_2);
void recovered_100103ec(int param_1);
void recovered_100104c0(int param_1,int param_2,int param_3);
undefined1 recovered_10010568(int param_1,char *param_2);
void recovered_10010694(int param_1,int param_2,uint param_3,char *param_4,uint param_5);
void recovered_10010bd0(char *param_1,uint param_2,char *param_3);
void recovered_10010c8c(char *param_1,uint param_2,char param_3);
void recovered_10010d48(char *param_1,uint param_2,undefined4 param_3,byte param_4,byte param_5);
uint recovered_10010e7c(int param_1);
undefined1
recovered_10010fd4(int param_1,int param_2,void *param_3,void *param_4,uint param_5,uint param_6);
void recovered_10011258(char *param_1,int param_2);
undefined1
recovered_100114c8(uint param_1,uint param_2,char *param_3,ulong param_4,undefined4 *param_5,
                  int param_6);
uint recovered_1001174c(int param_1);
uint recovered_10011880(int param_1,char *param_2,byte param_3,uint param_4,int param_5,byte param_6
                       ,byte param_7);
undefined1 recovered_10011d94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
byte recovered_10011fb4(void *param_1);
void recovered_10015808(undefined1 *param_1,uint param_2,char *param_3);
undefined1 recovered_10015978(int param_1,char *param_2,char *param_3,ulong param_4);
void recovered_10015b00(int param_1);
uint recovered_10015b4c(int param_1,char *param_2,byte param_3);
void * recovered_10015bec(int param_1);
byte recovered_10015e5c(void *param_1,char *param_2);
undefined1 recovered_10016120(int param_1,char *param_2,ulong param_3);
byte recovered_10016398(int param_1,char *param_2,char *param_3,byte param_4);
byte recovered_100164ec(int param_1,byte param_2);
undefined1 recovered_10016c50(int param_1,uint param_2,uint param_3);
undefined1 recovered_10017140(int param_1,char *param_2,uint param_3);
undefined1 recovered_10017384(int param_1,char *param_2,char *param_3,ulong param_4);
uint recovered_100175ec(int param_1,char *param_2);
undefined4 recovered_10017744(char *param_1);
uint recovered_100177fc(int param_1,char *param_2,char *param_3,int *param_4,undefined1 *param_5);
byte recovered_100180cc(int param_1,int param_2);
void recovered_10018e68(int param_1);
void recovered_100190d4(int param_1);
void recovered_10019194(int param_1);
void recovered_100192e8(int param_1);
void recovered_100193a8(int param_1);
void recovered_10019468(int param_1);
void recovered_10019528(int param_1);
void recovered_10019734(int param_1);
void recovered_10019910(int param_1);
void recovered_10019a30(int param_1);
void recovered_10019b50(int param_1);
void recovered_10019ce4(int param_1);
void recovered_1001a608(int param_1);
uint recovered_1001b270(int param_1,char *param_2);
void recovered_1001b4a8(int param_1);
undefined1 recovered_1001b5d0(int param_1,char *param_2);
byte recovered_1001b900(int param_1);
byte recovered_1001b9b8(int param_1,int param_2);
bool recovered_1001becc(char *param_1,char *param_2);
undefined1 recovered_1001bff0(int param_1,uint param_2,uint *param_3);
byte recovered_1001c22c(int param_1,char *param_2,char *param_3);
undefined1 recovered_1001c2f4(int param_1,char *param_2,char *param_3,ulong param_4);
undefined1 recovered_1001c494(int param_1,int param_2,char *param_3,char *param_4);
undefined1 recovered_1001c730(int param_1);
uint recovered_1001c910(char *param_1,char *param_2);
byte recovered_1001c9b0(int param_1,int param_2,undefined1 *param_3);
byte recovered_1001d4e0(int param_1,int param_2,int param_3);
uint recovered_1001d7bc(int param_1,char *param_2,char *param_3,byte param_4,uint param_5,
                       int param_6,byte param_7,byte param_8);
uint recovered_1001d954(int param_1,char *param_2,char *param_3,byte param_4);
byte recovered_1001da98(int param_1);
byte recovered_1001dc70(int param_1,undefined4 param_2);
byte recovered_1001de4c(int param_1);
byte recovered_1001e414(int param_1);
byte recovered_1001e5fc(int param_1);
byte recovered_1001e6d0(int param_1,undefined4 param_2);
byte recovered_1001e870(int param_1);
byte recovered_1001ea38(int param_1,undefined4 param_2);
byte recovered_1001ebec(int param_1);
byte recovered_1001ee84(int param_1);
byte recovered_1001f088(int param_1);
byte recovered_1001fb10(int param_1);
byte recovered_10020274(int param_1);
byte recovered_100204c0(int param_1);
byte recovered_10020718(int param_1);
byte recovered_10020a88(int param_1);
undefined1 recovered_10020e10(int param_1,byte param_2);
undefined1 recovered_10021098(int param_1);
byte recovered_100219f4(int param_1);
byte recovered_10021f8c(int param_1,undefined4 param_2);
byte recovered_10022140(int param_1);
undefined1 recovered_1002246c(int param_1,int *param_2);
undefined4 recovered_100228e4(char *param_1);
bool recovered_100229b4(char *param_1,char *param_2);
byte recovered_10022ad8(int param_1,undefined1 *param_2,int param_3);
undefined1
recovered_10022cb4(int param_1,char *param_2,int *param_3,int *param_4,int *param_5,
                  undefined4 *param_6);
undefined1
recovered_10022f64(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7);
undefined1 recovered_100234bc(int param_1,int param_2,int param_3,int param_4);
undefined1 recovered_10023850(int param_1,char *param_2,char *param_3,char *param_4,uint param_5);
int recovered_100239a4(int param_1,char *param_2);
byte recovered_10023e60(int param_1,undefined1 *param_2,int param_3,undefined1 *param_4);
undefined1 recovered_10024004(int param_1,char *param_2,char *param_3,char *param_4,byte param_5);
undefined1 recovered_100241f8(int param_1,char *param_2,char *param_3);
undefined1
recovered_1002442c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char *param_6,undefined4 param_7,int param_8,uint *param_9);
undefined1 recovered_1002475c(int param_1,int param_2,int *param_3);
undefined1 recovered_10024db8(int param_1,int param_2,int *param_3);
undefined1 recovered_10025464(int param_1,int param_2,int *param_3);
undefined1 recovered_10025af0(int *param_1,int param_2,uint param_3,int *param_4);
undefined1 recovered_10025fc4(int *param_1,int param_2,uint param_3,undefined4 param_4,int *param_5);
byte recovered_10026470(int param_1,int param_2,uint *param_3);
byte recovered_100267c0(int *param_1,undefined4 param_2,byte param_3);
undefined1 recovered_100268a8(int *param_1,void *param_2,uint param_3);
byte recovered_100269b4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
byte recovered_10026aec(int *param_1,int param_2,undefined4 param_3);
bool recovered_10026e54(int *param_1,uint param_2);
undefined1 recovered_10026f28(int param_1,uint *param_2);
byte recovered_1002a9fc(int param_1,int param_2,undefined4 param_3,uint param_4);
byte recovered_1002ac18(int param_1,int param_2);
byte recovered_1002b378(int param_1,uint param_2);
byte recovered_1002b454(int *param_1,int param_2,uint *param_3,uint param_4);
byte recovered_1002bbb8(int *param_1,uint param_2,int param_3);
byte recovered_1002bd50(int *param_1,int param_2);
byte recovered_1002ce10(int *param_1,uint param_2,uint param_3);
byte recovered_1002cf9c(int *param_1,uint param_2,uint param_3);
bool recovered_1002d0d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
byte recovered_1002d234(int *param_1,uint param_2,uint param_3);
byte recovered_1002d358(int *param_1,uint param_2,uint param_3);
uint recovered_1002d48c(uint param_1,uint param_2,uint param_3);
uint recovered_1002d530(uint param_1,uint param_2,uint param_3);
uint recovered_1002d5d0(uint param_1,uint param_2,uint param_3);
uint recovered_1002d678(uint param_1,uint param_2,uint param_3);
uint recovered_1002d720(uint param_1,uint param_2,uint param_3);
uint recovered_1002d7c8(uint param_1,uint param_2,uint param_3);
byte recovered_1002d870(int *param_1,uint param_2,uint param_3);
byte recovered_1002dc88(int *param_1,uint param_2,uint param_3);
byte recovered_1002e0a0(int *param_1,uint param_2,uint param_3);
byte recovered_1002e758(int *param_1,uint param_2,uint param_3);
byte recovered_1002eaf8(int *param_1,uint param_2,int param_3,uint param_4);
byte recovered_1002f014(int *param_1,uint param_2,int param_3);
byte recovered_1002f44c(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_1002f71c(int *param_1,uint param_2);
uint recovered_1002f9a0(int param_1,uint param_2);
uint recovered_1002fa68(int param_1,uint param_2,uint param_3);
byte recovered_1002fb60(int *param_1,uint param_2,int param_3,int param_4,uint param_5);
byte recovered_100303e8(int *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6
                       );
byte recovered_100306d4(int *param_1,uint param_2);
byte recovered_10030e00(int *param_1,int param_2,int *param_3);
byte recovered_100342a8(int param_1,int param_2,uint *param_3,int param_4);
uint recovered_10034bcc(uint param_1,uint param_2,uint param_3);
uint recovered_10034c6c(uint param_1,uint param_2,uint param_3);
uint recovered_10034d0c(uint param_1,uint param_2,uint param_3);
uint recovered_10034db4(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10034e78(uint param_1,uint param_2,uint param_3);
uint recovered_10034f20(uint param_1,uint param_2,uint param_3);
uint recovered_10034fc8(uint param_1,uint param_2,uint param_3);
uint recovered_10035068(uint param_1,uint param_2,uint param_3);
uint recovered_10035108(uint param_1,uint param_2,uint param_3);
uint recovered_100351a8(uint param_1);
byte recovered_1003520c(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10035390(int *param_1,uint param_2);
uint recovered_10035528(int param_1,undefined4 param_2,ushort param_3);
byte recovered_100355c8(int *param_1,uint param_2);
undefined1 recovered_10035844(int *param_1,uint param_2,int param_3);
byte recovered_10035cd4(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10035e58(int *param_1,uint param_2,uint param_3,uint param_4);
undefined4 * recovered_10035fc4(undefined4 *param_1);
byte recovered_10036018(int *param_1,uint param_2,uint param_3);
byte recovered_10036140(int param_1,uint param_2);
uint recovered_10036338(uint param_1,uint param_2);
byte recovered_100363c4(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10036548(int param_1,int param_2);
uint recovered_10036864(uint param_1,uint param_2,uint param_3);
uint recovered_10036914(uint param_1,uint param_2,uint param_3);
undefined4 recovered_100369c4(int param_1);
uint recovered_10036b14(uint param_1,uint param_2,uint param_3);
undefined1 recovered_10036bc8(int *param_1,uint param_2,undefined4 param_3,uint param_4);
uint recovered_10036da8(uint param_1,uint param_2,uint param_3);
uint recovered_10036e4c(int param_1);
uint recovered_10036ea8(uint param_1,uint param_2);
uint recovered_10036f38(uint param_1,uint param_2,uint param_3);
uint recovered_10036fdc(uint param_1,uint param_2,uint param_3);
uint recovered_10037080(uint param_1,uint param_2,uint param_3);
uint recovered_10037124(uint param_1,uint param_2,uint param_3);
uint recovered_100371c8(uint param_1,uint param_2,uint param_3);
byte recovered_10037274(int *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_100373f8(uint param_1,uint param_2);
uint recovered_10037484(uint param_1,uint param_2,uint param_3);
byte recovered_10037538(int param_1,uint param_2,uint param_3,undefined4 *param_4);
byte recovered_10037644(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int *param_6,
                       int param_7,int param_8,int *param_9);
byte recovered_10037834(int param_1,uint param_2,int param_3,uint param_4);
uint recovered_1003847c(int param_1,uint param_2,uint param_3,uint param_4);
byte recovered_100385a4(int param_1,uint param_2,uint param_3,int param_4,uint *param_5,uint param_6
                       );
byte recovered_100386d8(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint *param_6
                       ,uint param_7);
byte recovered_100388c8(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10038cac(int *param_1,int param_2,int *param_3,uint param_4,uint param_5);
byte recovered_10038e10(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
undefined1 recovered_10039054(int param_1,uint *param_2,uint param_3,undefined4 param_4);
uint recovered_1003915c(uint param_1,uint param_2);
byte recovered_100391ec(int param_1,uint param_2);
byte recovered_10039290(int param_1,int param_2);
byte recovered_100396d0(int param_1,int param_2);
byte recovered_10039978(int param_1,int param_2,uint param_3,uint param_4);
byte recovered_10039f3c(int param_1,int param_2,uint param_3);
uint recovered_1003a0bc(uint param_1,uint param_2,uint param_3);
byte recovered_1003a160(int param_1);
uint recovered_1003a4fc(int param_1,undefined4 param_2,ushort param_3,uint param_4);
uint recovered_1003a754(int *param_1);
undefined4 * recovered_1003a868(undefined4 *param_1);
uint recovered_1003a8cc(int param_1,undefined4 param_2,undefined4 param_3);
uint recovered_1003ac8c(int param_1,undefined4 param_2,undefined4 param_3);
uint recovered_1003b0dc(int param_1,undefined4 param_2,uint param_3,int param_4);
uint recovered_1003b378(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5);
uint recovered_1003b60c(int param_1,undefined4 param_2,uint param_3,int param_4);
uint recovered_1003b870(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5);
uint recovered_1003bb3c(int *param_1,undefined1 param_2);
uint recovered_1003bbb8(uint param_1,uint param_2);
uint recovered_1003bc50(uint param_1,uint param_2);
uint recovered_1003bcf0(int *param_1,uint param_2,uint param_3,byte param_4);
uint recovered_1003bdf0(uint param_1,uint param_2,uint param_3);
uint recovered_1003be94(uint param_1,uint param_2,uint param_3);
uint recovered_1003bf38(uint param_1,uint param_2);
uint recovered_1003bfc0(uint param_1);
uint recovered_1003c020(int *param_1,uint param_2,uint param_3);
uint recovered_1003c120(uint param_1,uint param_2,uint param_3);
uint recovered_1003c1c4(uint param_1,uint param_2,uint param_3);
uint recovered_1003c268(uint param_1,uint param_2);
uint recovered_1003c2f4(uint param_1,uint param_2,uint param_3);
uint recovered_1003c398(int *param_1,int param_2);
uint recovered_1003c520(int *param_1,int param_2);
uint recovered_1003c810(int *param_1,int param_2,int param_3);
uint recovered_1003c99c(int *param_1,uint param_2,uint param_3);
uint recovered_1003cac4(int *param_1,int param_2,int param_3,byte param_4);
uint recovered_1003cc10(uint param_1);
uint recovered_1003cc6c(int *param_1,int param_2,int param_3);
uint recovered_1003cd8c(int param_1);
uint recovered_1003ce24(int *param_1,int param_2,int param_3,int param_4);
uint recovered_1003cfb4(uint param_1,uint param_2);
uint recovered_1003d068(uint param_1,uint param_2);
undefined1 recovered_1003d11c(undefined4 *param_1,uint param_2);
uint recovered_1003d310(int *param_1,undefined4 param_2,byte param_3);
void recovered_1003d3d4(char *param_1);
undefined1 recovered_1003d500(void *param_1);
void recovered_1003d664(void);
undefined4 recovered_1003d784(int param_1,char *param_2,int param_3,int param_4);
void recovered_1003d894(int param_1,undefined1 *param_2,undefined4 param_3);
undefined4 recovered_1003d9ec(undefined4 param_1);
uint recovered_1003daa4(char *param_1,int param_2,uint param_3);
undefined4 recovered_1003dcd0(void);
bool recovered_1003dd10(int *param_1,int param_2);
bool recovered_1003ddbc(int *param_1);
bool recovered_1003de78(char param_1);
bool recovered_1003df1c(int param_1,char *param_2,char *param_3,ulong param_4);
undefined4
recovered_1003e06c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined1 recovered_1003e170(int param_1,char *param_2,char *param_3,ulong param_4);
bool recovered_1003e6c0(char param_1);
undefined4 recovered_1003e73c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_1003e824(undefined1 *param_1,int param_2);
void recovered_1003e898(int param_1,undefined4 param_2);
void recovered_1003e9c8(int param_1,int param_2);
undefined4 recovered_1003ebc8(undefined1 *param_1,int param_2);
undefined4 recovered_1003ecc8(int param_1,int param_2);
undefined4 recovered_1003ed84(undefined4 param_1,undefined4 param_2);
undefined1 recovered_1003ee5c(char *param_1,char *param_2,uint param_3);
undefined4 recovered_1003f084(int param_1,char *param_2,int param_3);
undefined4 recovered_1003f178(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_1003f268(undefined4 param_1,undefined4 param_2);
int recovered_1003f340(int argc,char **argv);
uint recovered_1003f3c0(uint a,uint b);
uint recovered_1003f410(uint a,uint b);
int recovered_1003f448(int a,int b);
int recovered_1003f4b8(int a,int b);
void recovered_1003f520(void);
void recovered_1003f538(void);
int recovered_1003f930(void);
void recovered_1003f974(void);
int recovered_1003f9c4(void);
void recovered_1003fa00(void);
uint * recovered_1003fa44(int param_1);
longlong recovered_1003fb50(uint param_1,int param_2,uint param_3);
ulonglong recovered_1003fba4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_1003fbf8(uint param_1,int param_2,uint param_3);
ulonglong recovered_1003fc44(ulonglong a,ulonglong b);
ulonglong recovered_1003fd28(ulonglong a,ulonglong b);
longlong recovered_1003fda8(longlong a,longlong b);
longlong recovered_1003fec0(longlong a,longlong b);
void recovered_1003ff7c(void);
int recovered_1003ff84(int value);
void * recovered_1003ff90(ulong size);
void recovered_1003ffe4(void *pointer);
void * recovered_10040034(void *pointer,ulong size);
void * recovered_10040088(void *destination,void *source,ulong count);
void * recovered_1004030c(void *destination,void *source,ulong count);
void * recovered_10040818(void *destination,int value,ulong count);
void recovered_10040a18(undefined4 *param_1,uint param_2);
void recovered_10040c14(undefined4 *param_1,uint param_2);
int recovered_10040e10(void *left,void *right,ulong count);
int recovered_10041008(byte *param_1,byte *param_2);
int recovered_10041058(int value);
int recovered_1004106c(int value);
int recovered_10041080(int value);
int recovered_10041098(int value);
int recovered_100410c4(int value);
int recovered_100410e4(int value);
int recovered_100410f8(int value);
int recovered_10041108(int value);
ulong recovered_10041118(char *text);
int recovered_10041140(char *left,char *right);
int recovered_10041184(char *left,char *right);
char * recovered_100411c8(char *destination,char *source);
char * recovered_100411e4(char *text);
char * recovered_100414f8(char *text,int value);
ulong recovered_1004152c(char *text,char *accept);
char * recovered_10041590(char *text,char *accept);
char * recovered_100415f0(char *haystack,char *needle);
undefined * recovered_10041654(void);
undefined * recovered_10041664(void);
undefined4 recovered_10041674(undefined4 *param_1);
double recovered_10041724(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10041768(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10041820(double x,double y);
double recovered_10041858(double base,double exponent);
double recovered_100418d8(double value);
double recovered_10041908(double value);
double recovered_1004194c(double value);
double recovered_10041998(double value);
longlong recovered_10041ad8(double value);
double recovered_10041b08(double value);
double recovered_10041bc8(double value);
double recovered_10041c78(double value);
longlong recovered_10041c98(double x);
ulonglong recovered_10041d58(double x);
double recovered_10041de0(ulonglong x);
double recovered_10041e28(longlong x);
float recovered_10041eb8(float x,float y);
float recovered_10041efc(float param_1,float *param_2);
float recovered_10041fb8(float param_1,uint param_2);
float recovered_10042004(float base,float exponent);
float recovered_1004208c(float value);
float recovered_100420c4(float value);
double recovered_10042110(double value);
float recovered_10042164(float value);
float recovered_100421c0(float value);
float recovered_10042218(float value);
long recovered_1004235c(double value);
float recovered_10042390(float value);
float recovered_10042458(float value);
float recovered_10042510(float value);
long recovered_1004252c(char *text,char **endptr,int base);
ulong recovered_10042680(char *text,char **endptr,int base);
double recovered_100427e0(char *text,char **endptr,int in_s0,undefined4 in_s1);
float recovered_100429b4(char *text,char **endptr);
int recovered_100429d0(char *buffer,unsigned long size,char *format,void *input);
int recovered_10043634(char *buffer,unsigned long size,char *format,...);
void recovered_10043664(int *param_1,int *param_2,int *param_3);
void recovered_10043850(int *param_1,int *param_2);
void recovered_100438d8(int *param_1);
void recovered_100439b8(void *function,void *caller);
void recovered_10043a84(void *function,void *caller);
ulonglong recovered_10043a88(float x);
longlong recovered_10043a98(float x);
float recovered_10043aa8(ulonglong x);
float recovered_10043ac4(longlong x);
uint8_t recovered_10043ae0(uint8_t *pointer,...);
void recovered_10043b24(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043b68(uint8_t *pointer,uint8_t value,...);
uint64_t recovered_10043bb4(uint8_t *pointer,uint8_t *expected,uint8_t value,...);
uint8_t recovered_10043c24(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043c74(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043cc4(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043d14(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043d64(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_10043db4(uint8_t *pointer,uint8_t value,...);
uint16_t recovered_10043e08(uint16_t *pointer,...);
void recovered_10043e4c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10043e90(uint16_t *pointer,uint16_t value,...);
uint64_t recovered_10043edc(uint16_t *pointer,uint16_t *expected,uint16_t value,...);
uint16_t recovered_10043f4c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10043f9c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_10043fec(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1004403c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1004408c(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_100440dc(uint16_t *pointer,uint16_t value,...);
uint32_t recovered_10044130(uint32_t *pointer,...);
void recovered_10044174(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_100441b8(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_10044204(uint32_t *pointer,uint32_t *expected,uint32_t value,...);
uint32_t recovered_10044274(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_100442c4(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10044314(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10044364(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_100443b4(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_10044404(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_10044458(uint64_t *pointer,...);
void recovered_100444a4(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_100444f4(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10044554(uint64_t *pointer,uint64_t *expected,uint64_t value,...);
uint64_t recovered_100445f0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10044658(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_100446c0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10044728(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_10044790(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_100447f8(uint64_t *pointer,uint64_t value,...);
bool recovered_10044868(uint8_t *pointer,...);
void recovered_100448c0(uint8_t *pointer,...);
void recovered_10044904(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_10044970(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_100449e0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...);
uint64_t recovered_10044a7c(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...);
void recovered_10044b38(void *param_1);
void recovered_10044b88(char *param_1);
void * recovered_10044c70(char *path,char *mode);
undefined * recovered_10044f7c(void);
undefined4 recovered_10045234(int param_1,char *param_2,char *param_3);
undefined4 recovered_1004553c(int param_1);
void * recovered_10045810(char *path,char *mode,void *stream);
int recovered_1004599c(void *stream);
void * recovered_10045a70(char *path,char *mode);
void * recovered_10045a74(char *path,char *mode,void *stream);
void * recovered_10045a78(int fd,char *mode);
void * recovered_10045b70(char *command,char *mode);
int recovered_10045b8c(void *stream);
int recovered_10045ba8(void *stream);
undefined4 recovered_10045c8c(int param_1,char *param_2,int param_3,int param_4);
int recovered_10045e10(void *stream);
undefined4 recovered_10045e14(int *param_1);
ulong recovered_10045f84(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_10046204(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_100463c4(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_100463c8(void *ptr,ulong size,ulong count,void *stream);
int recovered_100463cc(void *stream,long offset,int origin);
undefined4 recovered_10046484(int *param_1,uint param_2,int param_3);
long recovered_1004653c(void *stream);
int recovered_10046578(int *param_1);
int recovered_100465b4(void *stream,longlong offset,int origin);
longlong recovered_1004666c(void *stream);
int recovered_100466b0(void *stream,long *pos);
int recovered_1004671c(void *stream,long *pos);
int recovered_10046798(void *stream);
undefined1 recovered_100467c0(int *param_1);
int recovered_100467e8(void *stream);
undefined1 recovered_10046810(int *param_1);
void recovered_10046838(void *stream);
void recovered_1004685c(int *param_1);
int recovered_10046880(void *stream);
int recovered_100468bc(void *stream);
int recovered_10046950(void *stream);
uint recovered_100469e4(int *param_1);
int recovered_10046a78(void);
int recovered_10046b18(int ch,void *stream);
uint recovered_10046b58(uint param_1,int *param_2);
char * recovered_10046b98(char *text,int count,void *stream);
int recovered_10046c88(int ch,void *stream);
int recovered_10046cc4(int ch,void *stream);
int recovered_10046d00(int ch);
int recovered_10046d44(char *text,void *stream);
int recovered_10046d8c(char *text);
int recovered_10046e18(void *stream,char *format,void *args);
int recovered_10046e74(void *stream,char *format,...);
int recovered_10046ef0(char *format,void *args);
int recovered_10046f54(char *format,...);
int recovered_10046fdc(char *buffer,char *format,void *input);
int recovered_10046fec(char *buffer,char *format,...);
int recovered_1004702c(char *buffer,char *format,void *args);
int recovered_10047800(char *buffer,char *format,...);
int recovered_10047834(void *stream,char *buffer,int mode,ulong size);
void recovered_10047870(void *stream,char *buffer);
void recovered_100478a4(char *prefix);
char * recovered_10047984(int error_number);
char * recovered_10047c24(char *buffer);
int recovered_10047c84(char *path);
undefined4 recovered_10047c88(char *param_1);
undefined4 recovered_10047df8(char *param_1);
int recovered_10047dfc(char *oldPath,char *newPath);
int recovered_1004801c(char *oldPath,char *newPath);
undefined4 recovered_10048020(char *param_1,uint param_2);
undefined4 recovered_10048130(int param_1,void *param_2);
undefined4 recovered_10048300(char *param_1);
ulonglong recovered_10048358(uint param_1,void *param_2,ulong param_3);
ulonglong recovered_100483c8(uint param_1,void *param_2,ulong param_3);
undefined4 recovered_10048438(uint param_1);
void recovered_100485a4(uint param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 recovered_10048664(uint param_1);
uint recovered_1004876c(uint param_1,uint param_2);
undefined4 recovered_100488ac(undefined4 *param_1);
undefined4 recovered_100488d8(void);
undefined4 recovered_100488f4(void);
undefined4 recovered_10048910(void);
undefined4 recovered_1004892c(void);
undefined4 recovered_10048948(void);
undefined4 recovered_10048964(void);
undefined4 recovered_10048980(void);
undefined8 recovered_1004899c(void);
undefined8 recovered_100489bc(void);
uint recovered_100489dc(uint param_1,undefined4 param_2,int param_3);
undefined4 recovered_10048aec(int param_1,char *param_2,int param_3);
undefined4 recovered_10048c44(int param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5);
undefined4 recovered_10048f3c(int param_1,void *param_2);
undefined4 recovered_10048f40(uint param_1,void *param_2);
undefined4 recovered_10049060(int param_1,undefined4 *param_2);
undefined4 recovered_10049150(uint param_1,undefined4 *param_2);
undefined4 recovered_10049270(char *param_1);
undefined4 recovered_100493e0(char *param_1);
void recovered_100493e4(int param_1);
undefined4 recovered_10049400(uint param_1);
void recovered_10049478(int param_1);
undefined4 recovered_10049494(uint param_1);
void recovered_1004950c(int param_1);
undefined4 recovered_10049528(undefined4 param_1);
void recovered_1004954c(int param_1);
undefined4 recovered_10049568(char *param_1);
char * recovered_1004963c(char *param_1,uint param_2);
undefined8 recovered_100496f4(void);
undefined4 recovered_10049714(void);
undefined4 recovered_10049730(void);
undefined4 recovered_1004974c(int param_1,uint param_2,int param_3);
int recovered_100498cc(uint param_1,uint param_2,int param_3);
int recovered_100499fc(uint param_1);
uint * recovered_10049a50(char *param_1);
uint * recovered_10049b8c(uint *param_1);
undefined4 recovered_10049bc4(void *param_1);
void recovered_10049bfc(int param_1);
void * recovered_10049c0c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,
                         uint param_5,int param_6);
undefined4 recovered_10049d7c(void *param_1);
undefined4 recovered_10049d90(void);
undefined4 recovered_10049d98(void);
undefined4 recovered_10049da0(void);
int recovered_10049da8(byte *param_1);
undefined4 recovered_10049e90(void);
void recovered_10049eac(int param_1,byte *param_2,uint param_3);
undefined4 recovered_10049f1c(byte *param_1,char *param_2,int param_3);
undefined4 recovered_1004a024(char *param_1,byte *param_2);
undefined4 recovered_1004a198(byte *param_1,uint param_2);
undefined4 recovered_1004a1f0(char *param_1);
undefined4 recovered_1004a28c(int param_1);
char * recovered_1004a3f0(int param_1,char *param_2);
undefined4 recovered_1004a4a8(char *param_1,int param_2);
void recovered_1004a6e0(char *param_1);
undefined4 recovered_1004a6e8(int param_1);
undefined4 recovered_1004a738(int param_1);
void recovered_1004a788(void);
void recovered_1004a818(void);
void recovered_1004a8a8(void);
void recovered_1004a998(void);
bool recovered_1004aa28(uint param_1);
undefined4 recovered_1004aa3c(void);
undefined4 recovered_1004aa44(void);
undefined4 recovered_1004aa4c(void);
undefined4 recovered_1004aa54(void);
undefined4 recovered_1004aa5c(int param_1);
undefined4 recovered_1004aa88(int param_1);
undefined4 recovered_1004aab4(void);
undefined4 recovered_1004ab3c(void);
int recovered_1004ab44(int param_1);
undefined4 recovered_1004ac6c(void);
undefined4 recovered_1004acf4(void);
undefined4 recovered_1004ad10(int param_1,int *param_2);
undefined4 recovered_1004ad14(int param_1,int *param_2);
undefined4 recovered_1004aef0(int param_1,int *param_2);
undefined4 recovered_1004aef4(int param_1,int *param_2);
undefined4 recovered_1004aef8(int param_1);
undefined4 recovered_1004b078(void);
undefined4 recovered_1004b080(void);
undefined4 recovered_1004b088(void);
undefined4 recovered_1004b0f0(void);
undefined4 recovered_1004b158(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_1004b1d0(undefined4 *param_1,undefined4 *param_2);
undefined4 recovered_1004b214(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_1004b260(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_1004b274(undefined4 *param_1);
undefined4
recovered_1004b288(undefined4 param_1,undefined4 *param_2,undefined4 param_3,void *param_4);
undefined4 recovered_1004b2c0(uint param_1,undefined4 *param_2);
undefined4 recovered_1004b360(uint param_1);
undefined4 recovered_1004b39c(undefined4 param_1,void *param_2);
undefined4 recovered_1004b3e4(void);
undefined4 recovered_1004b44c(void);
undefined4 recovered_1004b454(void);
undefined4 recovered_1004b45c(void);
undefined4 recovered_1004b464(void);
undefined4 recovered_1004b46c(void);
undefined4 recovered_1004b474(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_1004b4a0(char *param_1);
undefined4 recovered_1004b580(void *param_1,uint param_2);
undefined4 recovered_1004b614(int param_1,undefined4 param_2);
undefined4 recovered_1004b664(int param_1,undefined8 *param_2,undefined8 *param_3);
undefined4 recovered_1004b6cc(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_1004b790(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_1004b854(void);
undefined4 recovered_1004b85c(int param_1);
undefined4 recovered_1004b918(undefined4 *param_1);
undefined4 recovered_1004b948(undefined4 *param_1);
undefined4 recovered_1004b978(uint *param_1,uint param_2,uint param_3);
undefined4 recovered_1004b9bc(uint *param_1,uint param_2,uint param_3);
uint recovered_1004ba00(uint *param_1,uint param_2,uint param_3);
undefined4 recovered_1004ba38(uint param_1,undefined8 *param_2);
undefined4 recovered_1004badc(uint param_1,undefined4 param_2,undefined8 *param_3);
void recovered_1004bb38(undefined4 *param_1);
undefined4 recovered_1004bb78(uint param_1,int param_2,undefined4 *param_3);
uint recovered_1004bc18(int param_1,uint *param_2,uint *param_3,uint *param_4);
int recovered_1004bd90(int param_1,int param_2);
undefined4 recovered_1004be50(int *param_1,undefined *param_2);
undefined4 recovered_1004be98(int *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4);
undefined4 recovered_1004bee8(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_1004befc(void);
undefined4 recovered_1004bf04(undefined4 *param_1);
undefined4 recovered_1004bf18(void);
undefined4 recovered_1004bf20(undefined4 *param_1);
undefined4 recovered_1004bf34(void);
undefined4 recovered_1004bf3c(void);
undefined4 recovered_1004bf44(void);
undefined4 recovered_1004bf4c(void);
undefined4 recovered_1004bf54(undefined4 *param_1);
undefined4 recovered_1004bf68(void);
undefined4 recovered_1004bf70(undefined4 *param_1,undefined4 param_2);
undefined4 recovered_1004bf80(undefined4 *param_1);
undefined4 recovered_1004bf94(void);
undefined4 recovered_1004bf9c(void);
undefined4 recovered_1004bfa4(void);
undefined4 recovered_1004bfac(void);
undefined4 recovered_1004bfb4(void);
undefined4 recovered_1004bfbc(int *param_1);
undefined4 recovered_1004c1f4(uint param_1);
undefined4 recovered_1004c22c(uint param_1);
undefined4 recovered_1004c268(uint param_1,undefined4 param_2);
undefined4 recovered_1004c2a8(undefined4 *param_1);
undefined4 recovered_1004c2bc(void);
undefined4 recovered_1004c2c4(void);
undefined4 recovered_1004c2cc(void);
undefined4 recovered_1004c2d4(void);
undefined4 recovered_1004c2dc(void);
bool recovered_1004c364(int param_1,int param_2);
void recovered_1004c374(undefined4 *param_1);
undefined4 recovered_1004c38c(void);
undefined4 recovered_1004c394(void);
undefined4 recovered_1004c39c(void);
undefined4 recovered_1004c3a4(void);
undefined4
recovered_1004c3ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
void recovered_1004c5ec(int *in_r0,int in_r1,undefined4 in_r3,undefined4 in_stack_00000000);
undefined4 * recovered_1004c60c(int param_1);
undefined4 * recovered_1004c74c(char *param_1);
int recovered_1004c8a0(int param_1,undefined4 *param_2,void *param_3,uint param_4,
                      undefined4 *param_5);
undefined4 recovered_1004ca4c(undefined4 *param_1,undefined4 *param_2,void *param_3,uint param_4);
int recovered_1004cbb4(int param_1,int param_2,int param_3,uint param_4,int *param_5);
undefined4 * recovered_1004cc38(int param_1);
undefined4 * recovered_1004cd98(char *param_1);
undefined4 recovered_1004cf1c(void);
undefined4 recovered_1004cf6c(void);
undefined4 recovered_1004cfbc(void);
undefined1 * recovered_1004cfc4(void);
ulong recovered_1004cfe0(char *text,ulong max_length);
void * recovered_1004d018(void *param_1,ulong param_2);
int recovered_1004d088(byte *param_1,byte *param_2);
int recovered_1004d144(byte *param_1,byte *param_2,int param_3);
int recovered_1004d1cc(char *left,char *right,ulong count);
void recovered_1004d238(void *param_1,void *param_2,ulong param_3);
int recovered_1004d248(void *left,void *right,ulong count);
char * recovered_1004d24c(char *param_1,char *param_2,undefined4 *param_3);
void * recovered_1004d2f8(void *memory,int value,ulong count);
char * recovered_1004d32c(char *text,int value);
char * recovered_1004d368(int param_1);
ulong recovered_1004d398(char *text,char *reject);
char * recovered_1004d3f4(char *destination,char *source,ulong count);
char * recovered_1004d480(char *destination,char *source);
char * recovered_1004d4a8(char *destination,char *source,ulong count);
ulong recovered_1004d504(char *destination,char *source,ulong count);
char * recovered_1004d584(char *text,char *delimiters);
void * recovered_1004d620(ulong count,ulong size);
void recovered_1004d688(uint seed);
int recovered_1004d6a4(void);
long recovered_1004d6d8(long value);
longlong recovered_1004d6e4(longlong value);
void recovered_1004d6f8(int *param_1,int param_2,int param_3);
void recovered_1004d73c(int *param_1,int param_2,int param_3);
void recovered_1004d780(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5);
longlong recovered_1004d7fc(char *text,char **endptr,int base);
ulonglong recovered_1004d810(char *text,char **endptr,int base);
undefined4 recovered_1004d824(uint param_1);
undefined4 recovered_1004d858(ushort *param_1,ushort param_2);
undefined4 recovered_1004d89c(uint param_1);
undefined4 recovered_1004d8c8(ushort *param_1,uint param_2);
uint recovered_1004d924(uint param_1);
undefined4 recovered_1004d93c(void);
undefined4 recovered_1004d94c(undefined4 param_1);
undefined4 recovered_1004d964(undefined4 *param_1);
undefined4 recovered_1004d9b0(undefined4 *param_1);
undefined4 recovered_1004da10(undefined4 *param_1);
undefined4 recovered_1004da64(uint *param_1);
__attribute__((naked,returns_twice)) int recovered_1004dac8(void *context);
__attribute__((naked,noreturn)) void recovered_1004dae0(void *context,int value);
bool recovered_1004db08(undefined4 param_1,uint param_2);
bool recovered_1004db24(uint param_1);
bool recovered_1004db40(undefined4 param_1,uint param_2);
bool recovered_1004db5c(int param_1,uint param_2);
bool recovered_1004db78(uint param_1);
bool recovered_1004db90(int param_1,uint param_2);
bool recovered_1004dbac(int param_1,uint param_2);
bool recovered_1004dbd4(uint param_1);
bool recovered_1004dc00(undefined4 param_1,undefined4 param_2);
bool recovered_1004dc18(undefined4 param_1,uint param_2);
bool recovered_1004dc3c(uint param_1);
bool recovered_1004dc60(int param_1,uint param_2);
uint recovered_1004dca8(undefined4 param_1,uint param_2);
uint recovered_1004dcb0(uint param_1);
bool recovered_1004dcb8(undefined4 param_1,undefined4 param_2);
undefined4 recovered_1004dcf8(int param_1,uint param_2);
undefined4 recovered_1004dd68(float param_1);
undefined4 recovered_1004ddd4(int param_1,uint param_2);
int recovered_1004de14(double value);
double recovered_1004de30(double value);
float recovered_1004de60(float value);
double recovered_1004deb0(double value);
double recovered_1004dee0(double value);
float recovered_1004df10(float value);
double recovered_1004df60(double value);
double recovered_1004df90(double value);
float recovered_1004dfc0(float value);
double recovered_1004e010(double value);
long recovered_1004e040(double value);
long recovered_1004e08c(float value);
long recovered_1004e0dc(double value);
longlong recovered_1004e128(double value);
longlong recovered_1004e174(float value);
longlong recovered_1004e1c4(double value);
double recovered_1004e210(double value);
float recovered_1004e428(float value);
double recovered_1004e450(double value);
double recovered_1004e458(double y,double x);
float recovered_1004e558(float y,float x);
undefined4
recovered_1004e668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  double in_d0);
double recovered_1004e768(double value);
float recovered_1004e8a8(float value);
double recovered_1004ea00(double value);
double recovered_1004eb40(double value);
float recovered_1004ec80(float value);
double recovered_1004edd8(double value);
double recovered_1004ef18(double value);
float recovered_1004ef88(float value);
double recovered_1004f008(double value);
double recovered_1004f078(double value);
float recovered_1004f100(float value);
double recovered_1004f1a8(double value);
double recovered_1004f230(double value);
float recovered_1004f2c8(float value);
double recovered_1004f368(double value);
double recovered_1004f400(undefined4 param_1,undefined4 param_2);
float recovered_1004f490(float param_1);
double recovered_1004f540(undefined4 param_1,undefined4 param_2);
double recovered_1004f5d0(double value);
float recovered_1004f668(float value);
double recovered_1004f714(double value);
double recovered_1004f7ac(double value);
float recovered_1004f844(float value);
double recovered_1004f8f0(double value);
double recovered_1004f988(double value);
float recovered_1004fa28(float value);
double recovered_1004fad0(double value);
double recovered_1004fb70(double value);
float recovered_1004fb98(float value);
double recovered_1004fbd0(double value);
double recovered_1004fbf8(double value);
float recovered_1004fc0c(float value);
double recovered_1004fc3c(double value);
double recovered_1004fc50(double value);
float recovered_1004fcc0(float value);
double recovered_1004fd48(double value);
double recovered_1004fdb8(double value,double *integer_part);
float recovered_1004fdec(float value,float *integer_part);
double recovered_1004fe34(double value,double *integer_part);
double recovered_1004fe68(double value);
float recovered_1004ff90(float value);
double recovered_100500b8(double value);
double recovered_100501e0(undefined4 param_1,undefined4 param_2);
float recovered_10050310(float param_1);
double recovered_10050440(undefined4 param_1,undefined4 param_2);
double recovered_10050570(double value);
float recovered_10050598(float value);
int recovered_100505d0(char *text);
long recovered_100505dc(char *text);
longlong recovered_100505e8(char *text);
double recovered_10050604(char *text,char **endptr,int in_s0,undefined4 in_s1);
void recovered_10050608(char *param_1,undefined8 in_d0);
void recovered_10050610(void *base,ulong count,ulong size,pf_compare *compare);
void * recovered_10050794(void *key,void *base,ulong count,ulong size,pf_compare *compare);
int recovered_1005082c(int value);
int recovered_1005086c(int value);
int recovered_10050880(int value);
int recovered_100508ac(int value);
int recovered_10050920(int value);
int recovered_10050940(int value);
int recovered_10050954(void);
double recovered_100509e4(long end,long start);
int recovered_100509f8(uint32_t *tm);
int recovered_10050ce8(uint param_1,uint param_2,int param_3);
undefined4 * recovered_10050d94(uint *param_1);
undefined4 * recovered_100510f4(uint *in_r0);
undefined * recovered_10051110(undefined4 *param_1);
undefined * recovered_100511ec(uint *in_r0);
uint recovered_100512a8(int *param_1,uint param_2,char *param_3,int *param_4);
undefined4 recovered_10051b9c(int param_1,uint param_2,int *param_3,uint param_4,int param_5);
undefined4 recovered_10051c64(undefined4 *param_1,int param_2);
undefined4 recovered_10051c9c(char *param_1,int *param_2,int *param_3,uint *param_4);

/* Original analysis identifiers for manual recovery units. */
