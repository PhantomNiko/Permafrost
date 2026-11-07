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
#define pf_varargs_10004d64__4_ recovered_10004d64
extern uint8_t pf_module_state[];
uint recovered_10000a90(uint param_1,uint param_2);
uint recovered_10000ae0(uint param_1,uint param_2);
uint recovered_10000b18(uint param_1,uint param_2);
uint recovered_10000b88(uint param_1,uint param_2);
ulonglong recovered_10000bf4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
longlong recovered_10000c04(undefined4 param_1,undefined4 param_2,undefined4 param_3);
float recovered_10000c14(undefined4 param_1,undefined4 param_2);
float recovered_10000c30(undefined4 param_1,undefined4 param_2);
void recovered_10000c50(void);
void recovered_10000c68(void);
int recovered_10001060(void);
void recovered_100010a4(void);
int recovered_100010f4(void);
void recovered_10001130(void);
uint * recovered_10001174(int param_1);
longlong recovered_10001280(uint param_1,int param_2,uint param_3);
ulonglong recovered_100012d4(uint param_1,uint param_2,uint param_3);
undefined8 recovered_10001328(uint param_1,int param_2,uint param_3);
undefined8 recovered_10001374(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10001458(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100014d8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100015f0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_100016ac(void);
int recovered_100016b4(int param_1);
void * recovered_100016c0(uintptr_t size);
void recovered_10001714(void *pointer);
void * recovered_10001764(void *pointer,uintptr_t size);
void * recovered_100017b8(void *destination,void *source,ulong count);
void * recovered_10001a3c(void *destination,void *source,ulong count);
void * recovered_10001f48(void *destination,int value,ulong count);
void recovered_10002148(undefined4 *param_1,uint param_2);
void recovered_10002344(undefined4 *param_1,uint param_2);
int recovered_10002540(void *left,void *right,ulong count);
int recovered_10002738(byte *param_1,byte *param_2);
bool recovered_10002788(int param_1);
bool recovered_1000279c(int param_1);
bool recovered_100027b0(uint param_1);
bool recovered_100027c8(uint param_1);
bool recovered_100027f4(int param_1);
bool recovered_10002814(int param_1);
int recovered_10002828(int param_1);
int recovered_10002838(int param_1);
ulong recovered_10002848(char *text);
int recovered_10002870(char *left,char *right);
int recovered_100028b4(byte *param_1,byte *param_2);
void recovered_100028f8(int param_1,int param_2);
undefined8 * recovered_10002914(undefined8 *param_1);
char * recovered_10002c28(char *param_1,char param_2);
int recovered_10002c5c(char *param_1,char *param_2);
char * recovered_10002cc0(char *param_1,char *param_2);
char * recovered_10002d20(char *param_1,char *param_2);
undefined * recovered_10002d84(void);
undefined ** recovered_10002d94(void);
undefined4 recovered_10002da4(undefined4 *param_1);
double recovered_10002e54(undefined4 param_1,undefined4 param_2,uint param_3);
double recovered_10002e98(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_10002f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10002f88(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4);
double recovered_10003008(undefined4 param_1,undefined4 param_2);
double recovered_10003038(undefined4 param_1,undefined4 param_2);
double recovered_1000307c(undefined4 param_1,undefined4 param_2);
double recovered_100030c8(undefined4 param_1,undefined4 param_2);
longlong recovered_10003208(double in_d0);
double recovered_10003238(undefined4 param_1,undefined4 param_2);
double recovered_100032f8(undefined4 param_1,undefined4 param_2);
double recovered_100033a8(undefined4 param_1,undefined4 param_2);
long long recovered_100033c8(double value);
unsigned long long recovered_10003488(double value);
double recovered_10003510(unsigned long long value);
double recovered_10003558(long long value);
float recovered_100035e8(float param_1,float param_2);
float recovered_1000362c(float param_1,float *param_2);
float recovered_100036e8(float param_1,uint param_2);
float recovered_10003734(float param_1,float param_2);
float recovered_100037bc(float param_1);
float recovered_100037f4(float param_1);
double recovered_10003840(undefined4 param_1,undefined4 param_2);
float recovered_10003894(float param_1);
float recovered_100038f0(float param_1);
float recovered_10003948(float param_1);
longlong recovered_10003a8c(double in_d0);
float recovered_10003ac0(float param_1);
float recovered_10003b88(float param_1);
float recovered_10003c40(float param_1);
int recovered_10003c5c(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_10003db0(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_10003f10(byte *param_1,undefined4 *param_2);
float recovered_100040e4(byte *in_r0,undefined4 *in_r1);
int recovered_10004100(byte *param_1,uint param_2,byte *param_3,double *param_4);
int recovered_10004d64(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10004d94(int *param_1,int *param_2,int *param_3);
void recovered_10004f80(char *param_1,int param_2);
void recovered_10005164(void);
void recovered_10005224(void);
void recovered_100052e0(char *param_1,undefined *param_2);
void recovered_10005338(void);
void recovered_10005384(void);
bool recovered_100053d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_10005524(void);
void recovered_1000552c(void);
undefined4 recovered_10005530(void);
undefined4 * recovered_10005538(char *param_1,int param_2);
void recovered_100058bc(char *param_1,int param_2,uint *param_3);
undefined4 recovered_100059bc(uint *param_1);
uint recovered_10005ab4(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_10005be0(int *param_1);
int recovered_10005de0(void *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_10005f58(int *param_1,uint param_2,int param_3);
undefined4 recovered_10006008(int param_1);
undefined4 recovered_10006030(uint *param_1);
undefined1 recovered_10006108(int param_1);
undefined1 recovered_10006118(int param_1);
void recovered_10006128(int param_1);
void recovered_10006144(uint param_1,int param_2);
undefined4 recovered_10006168(int param_1);
undefined4 recovered_100061f8(int param_1,int param_2);
undefined4 recovered_1000636c(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_1000646c(int param_1,int param_2,int param_3);
undefined4 recovered_100064f4(void);
void recovered_100064fc(void);
undefined4 recovered_10006500(void);
undefined4 recovered_10006508(void);
undefined4 recovered_10006510(void);
char * recovered_10006518(char *param_1,char param_2,int param_3);
int recovered_1000654c(char *left,char *right,ulong count);
char * recovered_10006590(undefined4 param_1);
undefined4 recovered_10006690(void);
undefined4 recovered_10006698(void);
void recovered_100066a0(void);
__attribute__((naked,noreturn)) void recovered_100066c8(void *context);
__attribute__((naked,returns_twice)) int recovered_100066d8(void *context);
__attribute__((naked,noreturn)) void recovered_100066f0(void *context,int value);
void recovered_10006710(void);
undefined4 recovered_1000679c(void);
void recovered_100067a4(int param_1);
void recovered_100067b4(int param_1);
void * recovered_100067ec(ulong param_1);
void * recovered_10006818(ulong param_1);
void recovered_10006844(void *param_1);
void recovered_1000690c(void *param_1);
void recovered_100069d4(void *param_1);
void recovered_10006a9c(void *param_1);
undefined4 recovered_10006b64(void);
uint recovered_10006b6c(uint *param_1);
void recovered_10006b7c(uint *param_1);
void recovered_10006b8c(void);
undefined4 * recovered_10006b90(uint param_1);
void recovered_10006c18(int param_1);
int recovered_10006c28(int param_1);
void recovered_10006c30(void);
void recovered_10006c98(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_10006cc0(undefined4 *param_1);
void recovered_10006d54(void);
void recovered_10006d8c(undefined4 *param_1);
void recovered_10006db0(undefined4 *param_1);
void recovered_10006df8(undefined4 *in_r0);
void recovered_10006e04(void);
void recovered_10006e10(undefined4 *param_1);
undefined4 recovered_10006e44(undefined4 *param_1);
undefined4 recovered_10006f04(undefined4 *in_r0);
undefined4 recovered_10006f10(void);
void recovered_10006f18(void);
int recovered_10006f24(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10007018(void);
undefined4 recovered_1000701c(void);
bool recovered_10007024(int param_1);
bool recovered_10007038(int param_1);
bool recovered_10007078(uint param_1);
bool recovered_100070a4(undefined4 param_1,uint param_2);
bool recovered_100070c0(uint param_1);
bool recovered_100070dc(undefined4 param_1,uint param_2);
bool recovered_100070f8(undefined4 param_1,uint param_2);
double recovered_10007118(double value);
float recovered_10007200(float value);
long double recovered_10007300(long double value);
double recovered_100073e8(long end,long start);
double recovered_10007404(undefined4 param_1,undefined4 param_2);
ulonglong recovered_1000745c(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_100075d4(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_100075d8(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_1000798c(uint param_1,undefined4 *param_2);
void recovered_10007b20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4);
void recovered_10007b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_10007c08(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_10007c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,int param_15,
                       uint param_16);
void recovered_10007d04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14);
void recovered_10007d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14);
void recovered_10007de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
void recovered_10007e58(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15);
uint recovered_10007ed0(uint *param_1,uint *param_2);
void recovered_10008384(void);
undefined4 recovered_100083d4(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
bool recovered_10008468(int *param_1,uint param_2,uint param_3,int param_4);
bool recovered_10008540(int *param_1,int param_2,uint param_3,int param_4);
undefined4
recovered_10008634(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7);
void recovered_10008874(int param_1,byte *param_2,undefined4 *param_3);
void recovered_100088bc(int param_1);
undefined4 recovered_100088fc(int *param_1,int param_2,uint param_3,int param_4);
undefined4 recovered_10008a04(int *param_1,int param_2);
undefined4 recovered_10008b44(int *param_1,void *param_2,undefined4 param_3,int param_4);
byte recovered_10008d78(int param_1);
void recovered_10008d94(void *param_1);
undefined4 recovered_10008da8(undefined1 *param_1);
bool recovered_10009130(int *param_1,undefined4 in_r2,int in_r3);
undefined4 recovered_10009164(int *param_1);
bool recovered_10009274(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_10009350(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_1000942c(int *param_1,int param_2);
bool recovered_100094c4(int *param_1,int param_2);
bool recovered_10009560(int *param_1,uint param_2,undefined4 param_3,int param_4);
bool recovered_10009638(int *param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 recovered_10009710(int *param_1,int param_2);
undefined4 recovered_1000977c(void);
undefined4 recovered_100097e4(void);
undefined4 recovered_10009838(void);
undefined4 recovered_1000988c(void);
undefined4 recovered_100098e0(void);
undefined4 recovered_10009948(void);
undefined4 recovered_100099bc(void);
undefined4 recovered_10009a2c(void);
void recovered_10009ab8(int param_1);
void recovered_10009b30(undefined4 *param_1,undefined4 param_2);
void recovered_10009b44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_10009b5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10009b70(void *param_1);
void recovered_10009bb0(undefined4 *param_1,undefined4 param_2);
void recovered_10009c00(undefined4 *param_1,undefined4 param_2);
void recovered_10009c50(undefined4 *param_1);
void recovered_10009c90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10009d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10009d70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10009de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void recovered_10009e40(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void recovered_10009e90(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
void recovered_10009ecc(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
void recovered_10009f08(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                       int in_stack_0000003c,int in_stack_00000040);
void recovered_10009f68(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       uint in_stack_0000003c);
void recovered_10009fa8(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       uint in_stack_0000003c);
void recovered_10009fe8(undefined4 *param_1,uint *param_2,int param_3,int param_4);
int recovered_1000a474(int *param_1,uint *param_2);
undefined4 recovered_1000a570(int *param_1,int *param_2,undefined4 param_3);
void recovered_1000a754(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6);
undefined4 recovered_1000b574(int *param_1);
void recovered_1000b724(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9);
void recovered_1000bb28(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7);

/* Original analysis identifiers for manual recovery units. */
/* TerrorUI value operations recovered from r232. Pooka's Free Software License. */
typedef struct { int32_t top,right,bottom,left; } PFUIInsets;
typedef struct {
 uint32_t type,flags;
 uintptr_t text,children;
 uint32_t count; int32_t spacing;
 uint32_t alignment,foreground,background,scale;
 int32_t width,height;
 PFUIInsets padding;
 uintptr_t callback,userdata;
} PFUIView;
typedef struct {
 uintptr_t title;
 uint32_t width,height,stride,background,transparency,shadow;
 int32_t mode; uint32_t amount;
 uintptr_t menu_file,menu_edit,menu_window;
 uint32_t flags;
} PFUIWindowSpec;
PFUIInsets pf_ui_insets(int32_t all);
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y);
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l);
PFUIView pf_ui_view_empty(void);
PFUIView pf_ui_text(uintptr_t text);
PFUIView pf_ui_rectangle(uint32_t color);
PFUIView pf_ui_spacer(void);
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata);
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count);
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding);
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color);
PFUIView pf_ui_view_background(PFUIView v,uint32_t color);
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height);
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale);
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment);
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height);
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount);
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value);
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b);
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count);
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command);
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons);
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state);
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y);
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y);
