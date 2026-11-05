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
uint recovered_100035dc(uint param_1,uint param_2);
uint recovered_100035e4(uint param_1,uint param_2,uint *param_3);
uint recovered_1000365c(uint a,uint b);
int recovered_10003680(uint param_1,uint param_2);
int recovered_100036b8(int param_1,int param_2);
undefined8 recovered_100036fc(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10003804(undefined4 param_1,undefined4 param_2);
undefined8 recovered_1000388c(undefined4 param_1,undefined4 param_2);
void recovered_100038d8(float param_1);
void recovered_100038e8(float param_1);
uint recovered_100038f8(uint param_1,uint param_2);
uint recovered_1000392c(int param_1,int param_2);
float recovered_10003954(uint in_r0,uint in_r1);
float recovered_10003970(int in_r0,int in_r1);
void recovered_1000398c(void);
void recovered_100039a0(int *in_r3);
int recovered_10003b88(int *in_r3);
void recovered_10003bcc(int *in_r3);
int recovered_10003c1c(int *in_r3);
void recovered_10003c54(int *in_r3);
uint * recovered_10003c94(int param_1,int *in_r3);
longlong recovered_10003d38(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003d94(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10003dec(uint param_1,int param_2,uint param_3);
undefined8 recovered_10003e38(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10003e54(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10003f5c(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10003f90(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10004008(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1000408c(void);
int recovered_10004094(int param_1);
void * recovered_100040a0(size_t size);
void recovered_100040e4(void *pointer);
void * recovered_10004124(void *pointer,size_t size);
void * recovered_10004170(void *out,void *data,ulong size);
void * recovered_1000418c(void *out,void *data,ulong size);
void * recovered_100041e0(void *out,int value,ulong size);
void recovered_100041f8(undefined1 *param_1,int param_2);
void recovered_10004210(undefined1 *param_1,int param_2);
int recovered_10004228(void *left,void *right,ulong size);
bool recovered_10004250(int param_1);
bool recovered_10004264(int param_1);
bool recovered_10004278(uint param_1);
bool recovered_10004290(uint param_1);
bool recovered_100042bc(int param_1);
bool recovered_100042dc(int param_1);
int recovered_100042f0(int param_1);
int recovered_10004300(int param_1);
ulong recovered_10004310(char *text);
int recovered_10004340(char *left,char *right);
int recovered_1000436c(char *left,char *right);
void recovered_10004370(int param_1,int param_2);
void * recovered_1000438c(char *param_1);
char * recovered_100043d4(char *param_1,char param_2);
int recovered_10004400(int param_1,char *param_2);
char * recovered_10004444(char *param_1,char *param_2);
char * recovered_10004484(char *param_1,char *param_2);
undefined4 recovered_100044cc(void);
undefined4 recovered_100044d8(void);
void recovered_100044e4(undefined4 *param_1);
double recovered_100044fc(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_1000453c(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_100045d4(double left,double right);
double recovered_1000460c(double left,double right);
double recovered_10004688(double value);
double recovered_100046b8(double value);
double recovered_100046fc(double value);
double recovered_1000474c(double value);
void recovered_1000481c(undefined4 param_1,undefined4 param_2);
double recovered_1000484c(double value);
double recovered_100048ac(double in_d0);
double recovered_10004904(double value);
double recovered_10004954(double value);
float recovered_10004974(float left,float right);
float recovered_100049b0(float param_1,int *param_2);
float recovered_100049dc(float param_1,int param_2);
float recovered_10004a08(float left,float right);
float recovered_10004a40(float value);
float recovered_10004a78(float value);
double recovered_10004aa0(double value);
float recovered_10004ae0(float value);
float recovered_10004b08(float value);
float recovered_10004b30(float value);
void recovered_10004b58(undefined4 in_r0,undefined4 in_r1);
float recovered_10004b68(float value);
float recovered_10004b90(float value);
float recovered_10004bb8(float value);
int recovered_10004bd4(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_10004cfc(int param_1);
int recovered_10004d40(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10004e60(char *text,char **end);
float recovered_10004ffc(char *text,char **end);
int recovered_10005018(char *out,ulong capacity,char *format,void *arguments);
void recovered_10005414(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10005450(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_100054a4(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10005544(char *out,ulong capacity,char *format,...);
void recovered_10005570(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_100055d8(int param_1);
void recovered_10005628(char *param_1,int param_2);
void recovered_100056dc(int param_1);
void recovered_10005768(void);
void recovered_10005770(void);
void recovered_10005778(char *param_1,int param_2);
void recovered_100057c8(void);
void recovered_1000581c(char *param_1);
void recovered_10005844(void);
bool recovered_10005868(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100058ec(void);
void recovered_100058f4(void);
undefined4 recovered_100058f8(void);
undefined4 * recovered_10005900(char *param_1,int param_2);
undefined4 recovered_10005bbc(undefined4 param_1,undefined4 param_2);
undefined4 recovered_10005c08(int param_1,uint param_2);
void recovered_10005c90(char *param_1,int param_2,uint *param_3);
undefined4 recovered_10005cbc(uint *param_1);
int recovered_10005d00(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10005da0(int *param_1);
int recovered_10005e8c(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10005f98(int *param_1,uint param_2,int param_3);
undefined4 recovered_10006030(int param_1);
undefined4 recovered_10006054(uint *param_1);
undefined1 recovered_100060cc(int param_1);
undefined1 recovered_100060dc(int param_1);
void recovered_100060ec(int param_1);
void recovered_10006108(uint param_1,int param_2);
undefined4 recovered_1000612c(int param_1);
undefined4 recovered_10006174(undefined4 param_1);
undefined4 recovered_100061b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006264(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_100062b8(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10006370(int param_1,int param_2,int param_3);
undefined4 recovered_100063b0(void);
void recovered_100063b8(void);
undefined4 recovered_100063bc(void);
undefined4 recovered_100063c4(void);
undefined4 recovered_100063cc(void);
void recovered_100063d4(int param_1,char param_2,int param_3);
int recovered_100063fc(char *left,char *right,ulong size);
undefined4 recovered_1000643c(int param_1);
undefined4 recovered_100064f8(void);
undefined4 recovered_10006500(void);
void recovered_10006508(void);
undefined4 recovered_10006520(int param_1);
uint recovered_10006570(int param_1);
undefined4 recovered_10006580(undefined4 *param_1);
int recovered_10006598(undefined4 param_1,int param_2);
void recovered_100065b8(void);
undefined4 recovered_1000663c(void);
void recovered_10006644(int param_1);
void recovered_10006654(int param_1);
void * recovered_10006680(ulong size);
void * recovered_100066ac(ulong size);
void recovered_100066b0(void *data);
void recovered_10006770(void *data);
void recovered_10006830(void *param_1);
void recovered_100068f0(void *param_1);
undefined4 recovered_100069b0(void);
uint recovered_100069b8(uint *param_1);
void recovered_100069c8(uint *param_1);
void recovered_100069d8(void);
undefined1 * recovered_100069dc(uint param_1);
void recovered_10006a28(int param_1);
int recovered_10006a38(int param_1);
void recovered_10006a40(void);
void recovered_10006a9c(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10006ac4(undefined4 *param_1);
void recovered_10006b44(void);
void recovered_10006b7c(undefined4 *param_1);
void recovered_10006b94(undefined4 *param_1);
void recovered_10006bc4(undefined4 *in_r0);
void recovered_10006bd0(void);
void recovered_10006bdc(undefined4 *param_1);
uint recovered_10006c00(undefined4 *param_1);
void recovered_10006cac(undefined4 *in_r0);
undefined4 recovered_10006cb8(void);
void recovered_10006cc0(void);
int recovered_10006ccc(int *param_1,undefined4 param_2,int *param_3);
bool recovered_10006d0c(int *param_1,int *param_2);
void recovered_10006db4(void);
undefined4 recovered_10006db8(void);
bool recovered_10006dc0(int param_1);
bool recovered_10006dd4(int param_1);
bool recovered_10006e10(uint param_1);
bool recovered_10006e3c(undefined4 param_1,uint param_2);
bool recovered_10006e58(uint param_1);
bool recovered_10006e74(undefined4 param_1,uint param_2);
bool recovered_10006e90(undefined4 param_1,uint param_2);
double recovered_10006eac(double value);
ulonglong recovered_10006f04(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_10007068(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_1000706c(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_10007288(uint param_1,int *param_2);
uint recovered_100073b4(undefined4 *param_1);
uint recovered_100073ec(byte *param_1,int param_2);
uint recovered_10007414(undefined4 *param_1);
uchar recovered_10007464(void *data,ulong length,void *image);
undefined4 * recovered_10008f4c(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_10008f7c(undefined4 *param_1,undefined4 *param_2);
int recovered_10008fd0(int param_1);
uint recovered_10009004(int param_1,uint *param_2);
uint recovered_1000928c(int param_1,uint param_2,uint param_3,uint param_4);
bool recovered_10009980(uint *param_1,void *param_2,int param_3);
uint recovered_100099b8(uint *param_1,byte *param_2,byte *param_3,uint param_4);
uint recovered_10009a88(uint *param_1);
uint recovered_10009a94(uint param_1,byte *param_2,int param_3);
void recovered_10009b38(int *param_1,undefined1 *param_2,undefined1 *param_3);
int recovered_10009b50(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_10009c28(int *param_1,uint param_2);
uint recovered_10009c88(ulong param_1);
void recovered_10009c98(int *param_1,uint param_2,undefined1 *param_3);
void recovered_10009ca4(int *param_1,uint param_2,undefined1 *param_3);
void recovered_10009d0c(int *param_1,uint param_2);
int recovered_10009d68(int param_1);
bool recovered_10009da8(int *param_1,int *param_2);
undefined4 recovered_1000aa98(int param_1,void *param_2,uint param_3);
undefined4
recovered_1000aae4(undefined4 param_1,char *param_2,char *param_3,char *param_4,uint param_5,
                  uint param_6);
void recovered_1000ad78(undefined4 *param_1);
undefined4 recovered_1000ad98(int *param_1,uint param_2,uint *param_3);
undefined4 recovered_1000ae8c(int *reader,int literal_table,int distance_table,int *output);
int recovered_1000b050(int param_1);
uint recovered_1000b06c(int param_1,uint param_2);
int recovered_1000b104(int *param_1,undefined1 *param_2);
byte recovered_1000b164(int *param_1,int param_2,uint *param_3);
int recovered_1000b250(int *param_1,undefined1 *param_2);
undefined4 recovered_1000b2b0(int *param_1,int *param_2,undefined4 param_3);
int * recovered_1000b428(int *param_1,uint param_2,undefined4 *param_3);
void recovered_1000b454(int *param_1,uint param_2,undefined4 *param_3);
void recovered_1000b4b8(int *param_1,uint param_2);
void recovered_1000b510(int *param_1,uint param_2);
uint recovered_1000b570(int param_1);
void * recovered_1000b584(void *param_1,void *param_2);
void recovered_1000b5c0(int *param_1,uint param_2,undefined2 *param_3);
undefined4 * recovered_1000b5cc(undefined4 *param_1,undefined4 *param_2);
void recovered_1000b620(int *param_1,uint param_2,undefined2 *param_3);
void recovered_1000b690(int *param_1,uint param_2);
void recovered_1000b6f4(int *param_1,uint param_2);
uint recovered_1000b76c(int param_1);
int recovered_1000b780(int *param_1,undefined4 *param_2);
int recovered_1000b7d8(int *param_1,undefined4 *param_2);
int * recovered_1000b830(int *param_1,undefined4 *param_2,undefined4 *param_3);
int recovered_1000b868(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * recovered_1000b948(undefined4 *param_1);
undefined4 * recovered_1000b96c(undefined4 *param_1,uint in_r1);
undefined4 * recovered_1000b998(undefined4 *param_1);
undefined4 * recovered_1000b9bc(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);

/* Original analysis identifiers for manual recovery units. */
