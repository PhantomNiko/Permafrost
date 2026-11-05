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
void recovered_100018a4(uint param_1,uint param_2);
uint recovered_100018ac(uint param_1,uint param_2,uint *param_3);
uint recovered_10001924(uint a,uint b);
int recovered_10001948(uint param_1,uint param_2);
int recovered_10001980(int param_1,int param_2);
undefined8 recovered_100019c4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10001acc(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10001b54(undefined4 param_1,undefined4 param_2);
void recovered_10001ba0(float param_1);
void recovered_10001bb0(float param_1);
void recovered_10001bc0(uint param_1,uint param_2);
void recovered_10001bf4(int param_1,int param_2);
float recovered_10001c1c(void);
float recovered_10001c38(void);
void recovered_10001c54(void);
void recovered_10001c68(void);
int recovered_10001e50(void);
void recovered_10001e94(void);
int recovered_10001ee4(void);
void recovered_10001f1c(void);
uint * recovered_10001f5c(int param_1);
longlong recovered_10002000(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000205c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_100020b4(uint param_1,int param_2,uint param_3);
undefined8 recovered_10002100(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000211c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10002224(void);
undefined8 recovered_10002258(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100022d0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10002354(void);
int recovered_1000235c(int param_1);
void * recovered_10002368(size_t size);
void recovered_100023ac(void *pointer);
void * recovered_100023ec(void *pointer,size_t size);
void * recovered_10002438(void *out,void *data,ulong size);
void * recovered_10002454(void *out,void *data,ulong size);
void * recovered_100024a8(void *out,int value,ulong size);
void recovered_100024c0(undefined1 *param_1,int param_2);
void recovered_100024d8(undefined1 *param_1,int param_2);
int recovered_100024f0(void *left,void *right,ulong size);
bool recovered_10002518(int param_1);
bool recovered_1000252c(int param_1);
bool recovered_10002540(uint param_1);
bool recovered_10002558(uint param_1);
bool recovered_10002584(int param_1);
bool recovered_100025a4(int param_1);
int recovered_100025b8(int param_1);
int recovered_100025c8(int param_1);
ulong recovered_100025d8(char *text);
int recovered_10002608(char *left,char *right);
int recovered_10002634(char *left,char *right);
void recovered_10002638(int param_1,int param_2);
void * recovered_10002654(char *param_1);
char * recovered_1000269c(char *param_1,char param_2);
int recovered_100026c8(int param_1,char *param_2);
char * recovered_1000270c(char *param_1,char *param_2);
char * recovered_1000274c(char *param_1,char *param_2);
undefined4 recovered_10002794(void);
undefined4 recovered_100027a0(void);
void recovered_100027ac(undefined4 *param_1);
double recovered_100027c4(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_10002804(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_1000289c(double left,double right);
double recovered_100028d4(double left,double right);
double recovered_10002950(double value);
double recovered_10002980(double value);
double recovered_100029c4(double value);
double recovered_10002a14(double value);
void recovered_10002ae4(undefined4 param_1,undefined4 param_2);
double recovered_10002b14(double value);
void recovered_10002b74(void);
double recovered_10002bcc(double value);
double recovered_10002c1c(double value);
float recovered_10002c3c(float left,float right);
float recovered_10002c78(float param_1,int *param_2);
float recovered_10002ca4(float param_1,int param_2);
float recovered_10002cd0(float left,float right);
float recovered_10002d08(float value);
float recovered_10002d40(float value);
double recovered_10002d68(double value);
float recovered_10002da8(float value);
float recovered_10002dd0(float value);
float recovered_10002df8(float value);
void recovered_10002e20(void);
float recovered_10002e30(float value);
float recovered_10002e58(float value);
float recovered_10002e80(float value);
int recovered_10002e9c(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10002fc4(int param_1);
int recovered_10003008(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10003128(char *text,char **end);
float recovered_100032c4(char *text,char **end);
int recovered_100032e0(char *out,ulong capacity,char *format,void *arguments);
void recovered_100036dc(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10003718(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_1000376c(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_1000380c(char *out,ulong capacity,char *format,...);
void recovered_10003838(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_100038a0(int param_1);
void recovered_100038f0(char *param_1,int param_2);
void recovered_100039a4(int param_1);
void recovered_10003a30(void);
void recovered_10003a38(void);
void recovered_10003a40(char *param_1,int param_2);
void recovered_10003a90(void);
void recovered_10003ae4(char *param_1);
void recovered_10003b0c(void);
bool recovered_10003b30(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10003bb4(void);
void recovered_10003bbc(void);
undefined4 recovered_10003bc0(void);
undefined4 * recovered_10003bc8(char *param_1,int param_2);
undefined4 recovered_10003e84(undefined4 param_1,undefined4 param_2);
undefined4 recovered_10003ed0(int param_1,uint param_2);
void recovered_10003f58(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10003f84(uint *param_1);
int recovered_10003fc8(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10004068(int *param_1);
int recovered_10004154(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10004260(int *param_1,uint param_2,int param_3);
undefined4 recovered_100042f8(int param_1);
undefined4 recovered_1000431c(uint *param_1);
undefined1 recovered_10004394(int param_1);
undefined1 recovered_100043a4(int param_1);
void recovered_100043b4(int param_1);
void recovered_100043d0(uint param_1,int param_2);
undefined4 recovered_100043f4(int param_1);
undefined4 recovered_1000443c(undefined4 param_1);
undefined4 recovered_10004480(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_1000452c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_10004580(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10004638(int param_1,int param_2,int param_3);
undefined4 recovered_10004678(void);
void recovered_10004680(void);
undefined4 recovered_10004684(void);
undefined4 recovered_1000468c(void);
undefined4 recovered_10004694(void);
void recovered_1000469c(int param_1,char param_2,int param_3);
int recovered_100046c4(char *left,char *right,ulong size);
undefined4 recovered_10004704(int param_1);
undefined4 recovered_100047c0(void);
undefined4 recovered_100047c8(void);
void recovered_100047d0(void);
undefined4 recovered_100047e8(int param_1);
void recovered_10004838(int param_1);
undefined4 recovered_10004848(undefined4 *param_1);
int recovered_10004860(undefined4 param_1,int param_2);
void recovered_10004880(void);
undefined4 recovered_10004904(void);
void recovered_1000490c(int param_1);
void recovered_1000491c(int param_1);
void * recovered_10004948(ulong size);
void * recovered_10004974(ulong size);
void recovered_10004978(void *data);
void recovered_10004a38(void *data);
void recovered_10004af8(void *param_1);
void recovered_10004bb8(void *param_1);
undefined4 recovered_10004c78(void);
uint recovered_10004c80(uint *param_1);
void recovered_10004c90(uint *param_1);
void recovered_10004ca0(void);
undefined1 * recovered_10004ca4(uint param_1);
void recovered_10004cf0(int param_1);
int recovered_10004d00(int param_1);
void recovered_10004d08(void);
void recovered_10004d64(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10004d8c(undefined4 *param_1);
void recovered_10004e0c(void);
void recovered_10004e44(undefined4 *param_1);
void recovered_10004e5c(undefined4 *param_1);
void recovered_10004e8c(void);
void recovered_10004e98(void);
void recovered_10004ea4(undefined4 *param_1);
void recovered_10004ec8(undefined4 *param_1);
void recovered_10004f74(void);
undefined4 recovered_10004f80(void);
void recovered_10004f88(void);
int recovered_10004f94(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10004fd4(int *param_1,int *param_2);
void recovered_1000507c(void);
undefined4 recovered_10005080(void);
bool recovered_10005088(int param_1);
bool recovered_1000509c(int param_1);
bool recovered_100050d8(uint param_1);
bool recovered_10005104(undefined4 param_1,uint param_2);
bool recovered_10005120(uint param_1);
bool recovered_1000513c(undefined4 param_1,uint param_2);
bool recovered_10005158(undefined4 param_1,uint param_2);
double recovered_10005174(double value);
ulonglong recovered_100051cc(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10005330(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10005334(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_10005550(uint param_1,int *param_2);
uint recovered_1000567c(undefined4 *param_1);
void recovered_100056b4(undefined4 param_1,int param_2);
uint recovered_100056dc(undefined4 *param_1);
int * recovered_1000572c(int param_1,uint param_2,uint param_3);
int * recovered_10005894(int *param_1,int param_2);
void recovered_100058c4(undefined4 *param_1);
void recovered_100058e4(int *param_1);
undefined4 recovered_10005d14(int param_1);
void recovered_10005d9c(int param_1);
void recovered_10005e1c(int param_1);
void * recovered_10005e90(int *param_1);
void recovered_10005fdc(int param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_10006010(int param_1,int param_2,int param_3);
void recovered_10006054(int param_1);
void recovered_100060ac(int param_1,int param_2);
void recovered_100060e4(int param_1,int *param_2,int param_3);
void recovered_10006150(int *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_10006168(int param_1);
void recovered_100063bc(void);
byte recovered_10006748(int param_1);
void recovered_10006778(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
int * recovered_10006790(int param_1);
void recovered_10006868(int param_1,undefined4 *param_2,undefined4 *param_3);
byte recovered_100068ac(int param_1,uint param_2);
void recovered_100068cc(void);
void recovered_10006b08(void);
void recovered_10006b0c(void);
void recovered_10006b10(void);
undefined4 recovered_10006b14(void);
void recovered_10006b1c(void);
undefined4 recovered_10006b20(void);
void * recovered_10006b28(char *param_1,int *param_2,int *param_3);
undefined4 recovered_10007028(undefined4 param_1,undefined4 param_2);
bool recovered_10007074(int *param_1,char *param_2);
void recovered_10007088(undefined4 param_1);
undefined4 recovered_100070c8(undefined4 param_1,undefined4 param_2);
void recovered_10007114(undefined4 param_1,undefined4 param_2);
int * recovered_1000715c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                        double param_6);
void recovered_100072cc(undefined4 param_1);
undefined4 * recovered_1000730c(undefined4 *param_1);
void recovered_10007328(int *param_1,int param_2,uint param_3,int param_4);
int recovered_10007424(int param_1);
undefined4 recovered_10007454(int *param_1,int param_2,int *param_3,int param_4);
void recovered_100074a8(int *param_1);
void recovered_100074d8(int *param_1,uint param_2);
undefined4 * recovered_10007540(undefined4 *param_1,int param_2,uint param_3);
void recovered_10007574(int param_1);
undefined4 recovered_10007590(int param_1);
undefined4 * recovered_100075e0(undefined4 *param_1);
void recovered_10007604(int *param_1,uint param_2);
void recovered_10007660(int *param_1,uint param_2);
void recovered_100076c0(ulong param_1);
undefined4 * recovered_100076d0(undefined4 *param_1,int *param_2);
uint recovered_10007718(uint param_1,uint param_2,int param_3);
void recovered_1000777c(int param_1);
void recovered_100077a4(int *param_1,char param_2,uint param_3);
void recovered_100077dc(undefined4 *param_1,int *param_2,uint param_3,uint param_4);
bool recovered_1000782c(int *param_1,char *param_2);
void recovered_10007870(int *param_1);
void recovered_100078a4(int *param_1,undefined1 param_2);
void recovered_10007908(int *param_1,int *param_2);
uint recovered_10007924(int *param_1,char param_2,uint param_3);
bool recovered_10007958(char *param_1,int param_2,char *param_3,int param_4);
int recovered_10007990(int *param_1,int *param_2);
void recovered_100079f8(int *param_1,uint param_2);
void recovered_10007a78(int param_1);
void recovered_10007a90(undefined4 *param_1,undefined4 *param_2);
int * recovered_10007abc(int *param_1,int param_2,uint param_3);
int * recovered_10007ba0(int *param_1);
void recovered_10007bc0(int *param_1);
undefined4 * recovered_10007c08(undefined4 *param_1,int param_2);
int recovered_10007c48(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);

/* Original analysis identifiers for manual recovery units. */
