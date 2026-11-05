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
#if defined(__arm__)
#define PF_MODULE_WMAP_BASE 0x40010800U
static inline void WaitForEvent(void){__asm__ volatile("wfe");}
#else
#define PF_MODULE_WMAP_BASE 0x6800U
static inline void WaitForEvent(void){__asm__ volatile("pause");}
#endif
static inline void DataMemoryBarrier(uint32_t scope){(void)scope;__sync_synchronize();}
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

typedef struct pf_glyph { int left,top,width,height; double advance; unsigned char *pixels; unsigned long count,capacity; } pf_glyph;
extern uint8_t pf_module_state[];
uint recovered_10003dc0(uint param_1,uint param_2);
uint recovered_10003dc8(uint param_1,uint param_2,uint *param_3);
uint recovered_10003e40(uint a,uint b);
int recovered_10003e64(uint param_1,uint param_2);
int recovered_10003e9c(int param_1,int param_2);
undefined8 recovered_10003ee0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10003fe8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10004070(undefined4 param_1,undefined4 param_2);
void recovered_100040bc(float param_1);
void recovered_100040cc(float param_1);
uint recovered_100040dc(uint param_1,uint param_2);
uint recovered_10004110(int param_1,int param_2);
float recovered_10004138(uint in_r0,uint in_r1);
float recovered_10004154(int in_r0,int in_r1);
void recovered_10004170(int *in_r3);
void recovered_10004184(int *in_r3);
int recovered_1000436c(int *in_r3);
void recovered_100043b0(int *in_r3);
int recovered_10004400(int *in_r3);
void recovered_10004438(int *in_r3);
uint * recovered_10004478(int param_1,int *in_r3);
longlong recovered_1000451c(uint param_1,int param_2,uint param_3);
undefined8 recovered_10004578(uint param_1,uint param_2,uint param_3);
undefined8 recovered_100045d0(uint param_1,int param_2,uint param_3);
undefined8 recovered_1000461c(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10004638(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5);
undefined8 recovered_10004740(uint in_r0,uint in_r1,uint in_r2,uint in_r3);
undefined8 recovered_10004774(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100047ec(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_10004870(void);
int recovered_10004878(int param_1);
void * recovered_10004884(size_t size);
void recovered_100048c8(void *pointer);
void * recovered_10004908(void *pointer,size_t size);
void * recovered_10004954(void *out,void *data,ulong size);
void * recovered_10004970(void *out,void *data,ulong size);
void * recovered_100049c4(void *out,int value,ulong size);
void recovered_100049dc(undefined1 *param_1,int param_2);
void recovered_100049f4(undefined1 *param_1,int param_2);
int recovered_10004a0c(void *left,void *right,ulong size);
bool recovered_10004a34(int param_1);
bool recovered_10004a48(int param_1);
bool recovered_10004a5c(uint param_1);
bool recovered_10004a74(uint param_1);
bool recovered_10004aa0(int param_1);
bool recovered_10004ac0(int param_1);
int recovered_10004ad4(int param_1);
int recovered_10004ae4(int param_1);
ulong recovered_10004af4(char *text);
int recovered_10004b24(char *left,char *right);
int recovered_10004b50(char *left,char *right);
void recovered_10004b54(int param_1,int param_2);
void * recovered_10004b70(char *param_1);
char * recovered_10004bb8(char *param_1,char param_2);
int recovered_10004be4(int param_1,char *param_2);
char * recovered_10004c28(char *param_1,char *param_2);
char * recovered_10004c68(char *param_1,char *param_2);
undefined4 recovered_10004cb0(void);
undefined4 recovered_10004cbc(void);
void recovered_10004cc8(undefined4 *param_1);
double recovered_10004ce0(undefined4 param_1,undefined4 param_2,int param_3);
double recovered_10004d20(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10004db8(double left,double right);
double recovered_10004df0(double left,double right);
double recovered_10004e6c(double value);
double recovered_10004e9c(double value);
double recovered_10004ee0(double value);
double recovered_10004f30(double value);
uint recovered_10005000(undefined4 param_1,undefined4 param_2);
double recovered_10005030(double value);
double recovered_10005090(double in_d0);
double recovered_100050e8(double value);
double recovered_10005138(double value);
float recovered_10005158(float left,float right);
float recovered_10005194(float param_1,int *param_2);
float recovered_100051c0(float param_1,int param_2);
float recovered_100051ec(float left,float right);
float recovered_10005224(float value);
float recovered_1000525c(float value);
double recovered_10005284(double value);
float recovered_100052c4(float value);
float recovered_100052ec(float value);
float recovered_10005314(float value);
uint recovered_1000533c(undefined4 in_r0,undefined4 in_r1);
float recovered_1000534c(float value);
float recovered_10005374(float value);
float recovered_1000539c(float value);
int recovered_100053b8(byte *param_1,undefined4 *param_2,uint param_3);
uint recovered_100054e0(int param_1);
int recovered_10005524(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10005644(char *text,char **end);
float recovered_100057e0(char *text,char **end);
int recovered_100057fc(char *out,ulong capacity,char *format,void *arguments);
void recovered_10005bf8(int *param_1,uint *param_2,int *param_3,undefined1 param_4);
void recovered_10005c34(int *param_1,uint *param_2,int *param_3,char *param_4);
void recovered_10005c88(int *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_10005d28(char *out,ulong capacity,char *format,...);
void recovered_10005d54(uint param_1,uint param_2,int *param_3,int *param_4);
undefined4 recovered_10005dbc(int param_1);
void recovered_10005e0c(char *param_1,int param_2);
void recovered_10005ec0(int param_1);
void recovered_10005f4c(void);
void recovered_10005f54(void);
void recovered_10005f5c(char *param_1,int param_2);
void recovered_10005fac(void);
void recovered_10006000(char *param_1);
void recovered_10006028(void);
bool recovered_1000604c(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_100060d0(void);
void recovered_100060d8(void);
undefined4 recovered_100060dc(void);
undefined4 * recovered_100060e4(char *param_1,int param_2);
undefined4 recovered_100063a0(undefined4 param_1,undefined4 param_2);
undefined4 recovered_100063ec(int param_1,uint param_2);
void recovered_10006474(char *param_1,int param_2,uint *param_3);
undefined4 recovered_100064a0(uint *param_1);
int recovered_100064e4(undefined1 *param_1,int param_2,int param_3,int *param_4);
uint recovered_10006584(int *param_1);
int recovered_10006670(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_1000677c(int *param_1,uint param_2,int param_3);
undefined4 recovered_10006814(int param_1);
undefined4 recovered_10006838(uint *param_1);
undefined1 recovered_100068b0(int param_1);
undefined1 recovered_100068c0(int param_1);
void recovered_100068d0(int param_1);
void recovered_100068ec(uint param_1,int param_2);
undefined4 recovered_10006910(int param_1);
undefined4 recovered_10006958(undefined4 param_1);
undefined4 recovered_1000699c(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10006a48(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_10006a9c(int param_1,undefined4 *param_2,uint *param_3);
bool recovered_10006b54(int param_1,int param_2,int param_3);
undefined4 recovered_10006b94(void);
void recovered_10006b9c(void);
undefined4 recovered_10006ba0(void);
undefined4 recovered_10006ba8(void);
undefined4 recovered_10006bb0(void);
void recovered_10006bb8(int param_1,char param_2,int param_3);
int recovered_10006be0(char *left,char *right,ulong size);
undefined4 recovered_10006c20(int param_1);
undefined4 recovered_10006cdc(void);
undefined4 recovered_10006ce4(void);
void recovered_10006cec(void);
undefined4 recovered_10006d04(int param_1);
uint recovered_10006d54(int param_1);
undefined4 recovered_10006d64(undefined4 *param_1);
int recovered_10006d7c(undefined4 param_1,int param_2);
void recovered_10006d9c(void);
undefined4 recovered_10006e20(void);
void recovered_10006e28(int param_1);
void recovered_10006e38(int param_1);
void * recovered_10006e64(ulong size);
void * recovered_10006e90(ulong size);
void recovered_10006e94(void *data);
void recovered_10006f54(void *data);
void recovered_10007014(void *param_1);
void recovered_100070d4(void *param_1);
undefined4 recovered_10007194(void);
uint recovered_1000719c(uint *param_1);
void recovered_100071ac(uint *param_1);
void recovered_100071bc(void);
undefined1 * recovered_100071c0(uint param_1);
void recovered_1000720c(int param_1);
int recovered_1000721c(int param_1);
void recovered_10007224(void);
void recovered_10007280(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_100072a8(undefined4 *param_1);
void recovered_10007328(void);
uint recovered_10007360(undefined4 *param_1);
void recovered_10007378(undefined4 *param_1);
void recovered_100073a8(undefined4 *in_r0);
void recovered_100073b4(void);
void recovered_100073c0(undefined4 *param_1);
uint recovered_100073e4(undefined4 *param_1);
void recovered_10007490(undefined4 *in_r0);
undefined4 recovered_1000749c(void);
void recovered_100074a4(void);
int recovered_100074b0(int *param_1,undefined4 param_2,int *param_3);
bool recovered_100074f0(int *param_1,int *param_2);
void recovered_10007598(void);
undefined4 recovered_1000759c(void);
bool recovered_100075a4(int param_1);
bool recovered_100075b8(int param_1);
bool recovered_100075f4(uint param_1);
bool recovered_10007620(undefined4 param_1,uint param_2);
bool recovered_1000763c(uint param_1);
bool recovered_10007658(undefined4 param_1,uint param_2);
bool recovered_10007674(undefined4 param_1,uint param_2);
double recovered_10007690(double value);
ulonglong recovered_100076e8(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_1000784c(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_10007850(int param_1,int *param_2,undefined2 *param_3);
uint * recovered_10007a6c(uint param_1,int *param_2);
uint recovered_10007b98(undefined4 *param_1);
uint recovered_10007bd0(byte *param_1,int param_2);
uint recovered_10007bf8(undefined4 *param_1);
void * recovered_10007c48(void *data,ulong size,float pixels);
void * recovered_10008184(char *path,float pixels);
void recovered_100083c4(void *font,float pixels);
void * recovered_10008418(void *font,char *text,int a,int b,int c,double opacity);
void recovered_10009374(undefined4 *param_1);
void recovered_100093ac(int *param_1);
void recovered_10009404(int *param_1,uint param_2);
int recovered_10009488(int param_1);
int * recovered_100094ac(int *param_1);
void recovered_10009500(int *param_1);
uint recovered_10009558(int *param_1,int param_2);
undefined4 * recovered_10009568(undefined4 *param_1);
undefined4 * recovered_1000958c(undefined4 *param_1);
int * recovered_100095c0(int *param_1);
void recovered_10009610(int *in_r0);
bool recovered_10009624(int param_1,int *param_2,int param_3,int param_4);
void recovered_10009eb0(void *out,void *backend,uint glyph,double scale);
undefined8 recovered_1000a374(int param_1);
undefined8 recovered_1000a388(int param_1);
undefined8 recovered_1000a39c(int param_1);
undefined8 recovered_1000a3b4(int param_1);
undefined4 recovered_1000a3cc(void);
undefined4 * recovered_1000a3d4(undefined4 *param_1);
void recovered_1000a3f8(undefined4 *param_1);
undefined4 * recovered_1000a424(undefined4 *param_1);
void recovered_1000a448(int param_1);
int * recovered_1000a470(int *param_1,int *param_2,int param_3,int param_4);
bool recovered_1000a4c4(int param_1,int param_2,undefined4 *param_3);
int * recovered_1000a528(int *param_1,int *param_2);
void recovered_1000a580(int *param_1,uint param_2);
uint recovered_1000a5e0(ulong param_1);
void recovered_1000a5f0(int *param_1,int param_2);
int recovered_1000a62c(int *param_1,int *param_2);
uint recovered_1000a698(int param_1,undefined4 param_2);
uint recovered_1000a6c0(byte *param_1,int param_2);
void recovered_1000a6f0(int *param_1,uint param_2,undefined4 *param_3);
void recovered_1000a6fc(int *param_1,uint param_2,undefined4 *param_3);
void recovered_1000a764(int *param_1,uint param_2);
void recovered_1000a7c0(int *param_1,uint param_2);
uint recovered_1000a820(int param_1);
int recovered_1000a834(int *param_1,undefined4 *param_2);
void recovered_1000a890(int *param_1,uint param_2);
void recovered_1000a8e8(int *param_1,uint param_2);
uint recovered_1000a948(int param_1);
void recovered_1000a95c(int *param_1,uint param_2);
void recovered_1000a9e0(undefined4 *param_1);
undefined8 * recovered_1000aa08(undefined8 *param_1,undefined8 *param_2);
undefined2 * recovered_1000aa40(int param_1,uint param_2,double *param_3,int *param_4,int param_5);
void recovered_1000b764(int *result,int *outline,double advance);
int recovered_1000bb78(int *param_1,int *param_2);
int recovered_1000bb9c(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
int recovered_1000bc24(int *param_1,int *param_2);
uint recovered_1000bc8c(int param_1,undefined4 param_2);
void recovered_1000bcb4(int param_1);
int recovered_1000bce4(int *param_1,undefined4 *param_2,undefined2 *param_3);
void recovered_1000bd48(int *param_1,int param_2);
void recovered_1000bd80(int param_1,uint param_2);
uint recovered_1000bde0(uint param_1);
void recovered_1000bdfc(int param_1);
void recovered_1000be54(int *param_1,uint param_2);
uint recovered_1000bed0(int param_1);
void recovered_1000bee4(undefined4 *param_1,undefined4 *param_2);
void recovered_1000bf10(int *param_1,undefined8 *param_2);
void recovered_1000bf68(int *param_1,double *param_2);
void recovered_1000bfe4(double *param_1,double *param_2,double *param_3);
void recovered_1000c018(int *param_1,double *param_2);
void recovered_1000c0b8(int *param_1);
int * recovered_1000c140(int *param_1,uint param_2);
void recovered_1000c16c(int *param_1,uint param_2);
void recovered_1000c1d0(int *param_1,uint param_2);
uint recovered_1000c248(int param_1);
int recovered_1000c25c(int *param_1,undefined1 *param_2);
int * recovered_1000c2bc(int *param_1,uint param_2);
void recovered_1000c2e8(int *param_1,uint param_2);
void recovered_1000c34c(int *param_1,uint param_2);
uint recovered_1000c3c4(int param_1);
void recovered_1000c3d8(int *param_1,uint param_2);
int recovered_1000c440(int *param_1,undefined1 *param_2);
void recovered_1000c498(int *param_1,uint param_2);
uint recovered_1000c4f8(ulong param_1);
int recovered_1000c508(int *param_1,undefined1 *param_2);
void recovered_1000c560(int *param_1,int param_2,undefined1 *param_3);
void recovered_1000c5e4(int param_1,double *param_2);
void recovered_1000c66c(int *param_1,undefined8 *param_2);
void recovered_1000c724(int *param_1,double *param_2,double *param_3,double *param_4,int param_5);
void recovered_1000c83c(int *param_1,uint param_2,undefined1 *param_3);
void recovered_1000c848(int *param_1,uint param_2,undefined1 *param_3);
void recovered_1000c8b0(int *param_1,uint param_2);
int * recovered_1000c90c(int *param_1);
void recovered_1000c950(int *in_r0);
bool recovered_1000c964(int param_1,byte *param_2);
void recovered_1000d70c(void *out,void *backend,uint glyph,double scale);
undefined8 recovered_1000dd2c(int param_1);
undefined8 recovered_1000dd38(int param_1);
undefined8 recovered_1000dd44(int param_1);
undefined8 recovered_1000dd50(void);
undefined4 recovered_1000dd5c(void);
void recovered_1000dd64(undefined4 *param_1);
int * recovered_1000dd90(int *param_1);
void recovered_1000ddb0(int *param_1);
void recovered_1000ddf8(undefined4 *param_1);
undefined4 * recovered_1000de18(undefined4 *param_1);
undefined4 * recovered_1000de1c(undefined4 *param_1);
int * recovered_1000de38(int *param_1);
void recovered_1000de58(int *param_1);
int recovered_1000dea0(int param_1);
void recovered_1000decc(int param_1);
int recovered_1000def4(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
uint recovered_1000dfcc(int *param_1,char *param_2,uint param_3);
void recovered_1000e064(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);
void recovered_1000e07c(int *param_1,uint param_2);
void recovered_1000e0e4(int *param_1,undefined1 param_2);
uint recovered_1000e148(int param_1);
void recovered_1000e164(int *param_1);
int recovered_1000e194(int *param_1,undefined1 *param_2);
bool recovered_1000e1f4(int *param_1,uint *param_2,undefined4 *param_3,char *param_4);
int recovered_1000e268(int *param_1,uint *param_2,int *param_3);
double recovered_1000e318(int *param_1,uint *param_2);
undefined4 * recovered_1000e368(undefined4 *param_1,undefined4 *param_2);
int * recovered_1000e3b8(int *param_1,int param_2,uint param_3,int param_4);
void recovered_1000e3ec(int *param_1,int param_2,uint param_3,int param_4);
undefined4 recovered_1000e4e8(int *param_1,int param_2,int *param_3,int param_4);
int recovered_1000e53c(int *param_1,int param_2,int param_3);
void recovered_1000e5bc(int *param_1,uint param_2);
void recovered_1000e660(int *param_1,undefined4 *param_2,uint param_3);
undefined4 * recovered_1000e844(undefined4 *param_1,undefined4 *param_2);
int recovered_1000e898(int *param_1,int *param_2);
void recovered_1000ea1c(int *param_1,uint param_2);
uint recovered_1000ea9c(int param_1);
int recovered_1000eab4(int *param_1,int *param_2);
void recovered_1000eadc(int param_1);
int recovered_1000eb0c(int *param_1,int *param_2,undefined4 *param_3);
void recovered_1000eb7c(int *param_1,int param_2);
int recovered_1000ebb8(int *param_1,int *param_2);
uint recovered_1000ec30(int param_1,int *param_2);
uint recovered_1000ec54(undefined4 param_1,int *param_2);
bool recovered_1000ec70(int *param_1,int *param_2);
bool recovered_1000eca4(char *param_1,int param_2,char *param_3,int param_4);
void recovered_1000ecdc(int param_1,uint param_2);
uint recovered_1000ed3c(uint param_1);
void recovered_1000ed58(int param_1);
void recovered_1000edb0(int *param_1,uint param_2);
uint recovered_1000ee30(int param_1);
undefined4 * recovered_1000ee48(undefined4 *param_1,undefined4 *param_2);
uint recovered_1000ee70(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_1000ee9c(undefined4 *param_1,int *param_2,undefined4 *param_3);
undefined4 * recovered_1000eec4(undefined4 *param_1,int *param_2);
undefined4 recovered_1000ef0c(int *param_1,int *param_2,int param_3,undefined4 param_4,double in_d7);
int recovered_1000f364(int param_1);
undefined4 * recovered_1000f390(undefined4 *param_1,int param_2);
int recovered_1000f3d0(int param_1);
undefined4 * recovered_1000f400(undefined4 *param_1);
void recovered_1000f424(int param_1);
void recovered_1000f444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_1000f49c(int param_1);
int recovered_1000f514(int *param_1,undefined8 *param_2);
void recovered_1000f570(int *param_1,uint param_2);
uint recovered_1000f5e8(int param_1);
void recovered_1000f5fc(int *param_1);
int recovered_1000f644(int *param_1,undefined4 *param_2);
uint recovered_1000f69c(uintptr_t *context,double value);
int * recovered_1000f6f8(int *param_1,int *param_2);
uint recovered_1000f768(int param_1,undefined4 param_2);
void recovered_1000f790(int *param_1,int param_2);
void recovered_1000f7cc(int param_1,uint param_2);
uint recovered_1000f86c(uint param_1);
void recovered_1000f888(int *param_1,uint param_2);
undefined4 * recovered_1000f91c(undefined4 *param_1);
undefined4 * recovered_1000f940(undefined4 *param_1,uint in_r1,undefined1 *in_r2);
undefined4 * recovered_1000f96c(undefined4 *param_1);
int recovered_1000f990(int *param_1,undefined4 *param_2);
undefined4 * recovered_1000f9e8(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3);
int * recovered_1000fa20(int *param_1);
void recovered_1000fa40(int *param_1);
void recovered_1000fa88(int *param_1,uint param_2);
uint recovered_1000fb08(int param_1);
void recovered_1000fb20(undefined4 *param_1,undefined4 *param_2);
void recovered_1000fb4c(undefined4 *param_1,undefined4 *param_2);

/* Original analysis identifiers for manual recovery units. */
