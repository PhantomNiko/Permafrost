/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void terror_ui_window_begin_frame(TerrorUIWindow *window);
unsigned int terror_ui_window_pointer_state_ex(TerrorUIWindow *window,void *state);
unsigned int terror_ui_window_set_custom_menus(TerrorUIWindow *window,const void *menus);
unsigned int terror_ui_window_present_rect(TerrorUIWindow *window,TerrorUIRect rect);
unsigned int terror_ui_view_draw(TerrorUIWindow *window,const TerrorUIView *view,TerrorUIRect rect,const TerrorUIInput *input);
bool terror_ui_scrollbar_capture(void *snapshot,TerrorUIWindow *window,TerrorUIRect rect);
bool terror_ui_scrollbar_restore(void *snapshot,TerrorUIWindow *window);
void terror_ui_scrollbar_release(void *snapshot);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
char *strstr(const char *,const char *);
unsigned long strlen(const char *);
static inline void pf_app_scrollbars_layout(int a,int b,int c,int d,void *vertical,void *horizontal,void *output){TerrorUIRect r={a,b,c,d};terror_ui_scrollbars_layout(r,vertical,horizontal,output);}
long long __divdi3(long long a,long long b);
unsigned long long __udivdi3(unsigned long long a,unsigned long long b);
unsigned long long __umoddi3(unsigned long long a,unsigned long long b);
int __divsi3(int a,int b);
unsigned int __udivsi3(unsigned int a,unsigned int b);
long long __fixdfdi(double value);
unsigned long long __fixunsdfdi(double value);
double __floatdidf(long long value);
double __floatundidf(unsigned long long value);
typedef struct PFUiView { uintptr_t words[19]; } PFUiView;
static inline void *pf_app_terror_ui_text(void *out,const char *text){*(TerrorUIView *)out=terror_ui_text(text);return out;}
static inline void *pf_app_terror_ui_rectangle(void *out,unsigned int rgb){*(TerrorUIView *)out=terror_ui_rectangle(rgb);return out;}
static inline void *pf_app_terror_ui_button(void *out,const char *title,void *action,void *context){*(TerrorUIView *)out=terror_ui_button(title,(TerrorUIActionFn)action,context);return out;}
static inline void *pf_app_terror_ui_text_field(void *out,char *buffer,unsigned long capacity,unsigned char secret,void *action,void *context){*(TerrorUIView *)out=terror_ui_text_field(buffer,capacity,secret,(TerrorUIActionFn)action,context);return out;}
static inline void *pf_app_terror_ui_view_foreground(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_foreground(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_background(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_background(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_alignment(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_alignment(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline unsigned int pf_app_terror_ui_window_present_rect(void *window,int x,int y,int width,int height){TerrorUIRect rect={x,y,width,height};return terror_ui_window_present_rect(window,rect);}
static inline unsigned int pf_app_terror_ui_view_draw(void *window,void *view,int x,int y,int width,int height,void *input){TerrorUIRect rect={x,y,width,height};return terror_ui_view_draw(window,(const TerrorUIView *)view,rect,input);}
static inline unsigned char pf_app_terror_ui_scrollbar_capture(void *snapshot,void *window,int x,int y,int width,int height){TerrorUIRect rect={x,y,width,height};return terror_ui_scrollbar_capture(snapshot,window,rect);}
void *memmove(void *,const void *,unsigned long);
/* Permafrost ARM32 recovery intrinsics; Pooka's Free Software License. */
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

#define thunk___divdi3 __divdi3
#define thunk_FUN_10013f60 __divdi3
#define thunk___divsi3 __divsi3
#define thunk_FUN_10013f64 __divsi3
#define thunk___fixdfdi __fixdfdi
#define thunk_FUN_10013f68 __fixdfdi
#define thunk___fixunsdfdi __fixunsdfdi
#define thunk_FUN_10013f6c __fixunsdfdi
#define thunk___floatdidf __floatdidf
#define thunk_FUN_10013f70 __floatdidf
#define thunk___floatundidf __floatundidf
#define thunk_FUN_10013f74 __floatundidf
#define thunk___udivsi3 __udivsi3
#define thunk_FUN_10013f78 __udivsi3
#define thunk_memcpy memcpy
#define thunk_FUN_10013f7c memcpy
#define thunk_memmove memmove
#define thunk_FUN_10013f80 memmove
#define thunk_memset memset
#define thunk_FUN_10013f84 memset
#define thunk_snprintf snprintf
#define thunk_FUN_10013f88 snprintf
#define thunk_strchr strchr
#define thunk_FUN_10013f8c strchr
#define thunk_strcmp strcmp
#define thunk_FUN_10013f90 strcmp
#define thunk_strlen strlen
#define thunk_FUN_10013f94 strlen
#define thunk_strncmp strncmp
#define thunk_FUN_10013f98 strncmp
#define thunk_strstr strstr
#define thunk_FUN_10013f9c strstr
#define thunk_terror_ui_button pf_app_terror_ui_button
#define thunk_FUN_10013fa0 pf_app_terror_ui_button
#define thunk_FUN_10012f4c pf_app_terror_ui_button
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_FUN_10013fa4 terror_ui_colour
#define thunk_terror_ui_rectangle pf_app_terror_ui_rectangle
#define thunk_FUN_10013fa8 pf_app_terror_ui_rectangle
#define thunk_FUN_10012f64 pf_app_terror_ui_rectangle
#define thunk_terror_ui_scrollbar_capture pf_app_terror_ui_scrollbar_capture
#define thunk_FUN_10013fac pf_app_terror_ui_scrollbar_capture
#define thunk_FUN_10012f70 pf_app_terror_ui_scrollbar_capture
#define thunk_terror_ui_scrollbar_release terror_ui_scrollbar_release
#define thunk_FUN_10013fb0 terror_ui_scrollbar_release
#define thunk_FUN_10012f7c terror_ui_scrollbar_release
#define thunk_terror_ui_scrollbar_restore terror_ui_scrollbar_restore
#define thunk_FUN_10013fb4 terror_ui_scrollbar_restore
#define thunk_FUN_10012f88 terror_ui_scrollbar_restore
#define thunk_terror_ui_text pf_app_terror_ui_text
#define thunk_FUN_10013fb8 pf_app_terror_ui_text
#define thunk_FUN_10012f94 pf_app_terror_ui_text
#define thunk_terror_ui_text_field pf_app_terror_ui_text_field
#define thunk_FUN_10013fbc pf_app_terror_ui_text_field
#define thunk_FUN_10012fa0 pf_app_terror_ui_text_field
#define thunk_terror_ui_view_alignment pf_app_terror_ui_view_alignment
#define thunk_FUN_10013fc0 pf_app_terror_ui_view_alignment
#define thunk_FUN_10012fac pf_app_terror_ui_view_alignment
#define thunk_terror_ui_view_background pf_app_terror_ui_view_background
#define thunk_FUN_10013fc4 pf_app_terror_ui_view_background
#define thunk_FUN_10012fb8 pf_app_terror_ui_view_background
#define thunk_terror_ui_view_draw pf_app_terror_ui_view_draw
#define thunk_FUN_10013fc8 pf_app_terror_ui_view_draw
#define thunk_FUN_10012fc4 pf_app_terror_ui_view_draw
#define thunk_terror_ui_view_foreground pf_app_terror_ui_view_foreground
#define thunk_FUN_10013fcc pf_app_terror_ui_view_foreground
#define thunk_FUN_10012fd0 pf_app_terror_ui_view_foreground
#define thunk_terror_ui_window_begin_frame terror_ui_window_begin_frame
#define thunk_FUN_10013fd0 terror_ui_window_begin_frame
#define thunk_FUN_10012fdc terror_ui_window_begin_frame
#define thunk_terror_ui_window_close terror_ui_window_close
#define thunk_FUN_10013fd4 terror_ui_window_close
#define thunk_terror_ui_window_open terror_ui_window_open
#define thunk_FUN_10013fd8 terror_ui_window_open
#define thunk_terror_ui_window_pointer_state_ex terror_ui_window_pointer_state_ex
#define thunk_FUN_10013fdc terror_ui_window_pointer_state_ex
#define thunk_FUN_10013000 terror_ui_window_pointer_state_ex
#define thunk_terror_ui_window_present terror_ui_window_present
#define thunk_FUN_10013fe0 terror_ui_window_present
#define thunk_terror_ui_window_present_rect pf_app_terror_ui_window_present_rect
#define thunk_FUN_10013fe4 pf_app_terror_ui_window_present_rect
#define thunk_FUN_10013018 pf_app_terror_ui_window_present_rect
#define thunk_terror_ui_window_query terror_ui_window_query
#define thunk_FUN_10013fe8 terror_ui_window_query
#define thunk_terror_ui_window_set_custom_menus terror_ui_window_set_custom_menus
#define thunk_FUN_10013fec terror_ui_window_set_custom_menus
#define thunk_FUN_10013030 terror_ui_window_set_custom_menus
#define thunk_terror_ui_window_spec pf_app_window_spec
#define thunk_FUN_10013ff0 pf_app_window_spec
#define thunk_terror_ui_window_sync_buffer terror_ui_window_sync_buffer
#define thunk_FUN_10013ff4 terror_ui_window_sync_buffer
#define thunk_terror_ui_yield_frames terror_ui_yield_frames
#define thunk_FUN_10013ff8 terror_ui_yield_frames
#define thunk_FUN_10012ee0 memcpy
#define thunk_FUN_10012eec memmove
#define thunk_FUN_10012ef8 memset
#define thunk_FUN_10012f04 snprintf
#define thunk_FUN_10012f10 strchr
#define thunk_FUN_10012f1c strcmp
#define thunk_FUN_10012f28 strlen
#define thunk_FUN_10012f34 strncmp
#define thunk_FUN_10012f40 strstr
#define thunk_FUN_10012f58 terror_ui_colour
#define thunk_FUN_10012fe8 terror_ui_window_close
#define thunk_FUN_10012ff4 terror_ui_window_open
#define thunk_FUN_1001300c terror_ui_window_present
#define thunk_FUN_10013024 terror_ui_window_query
#define thunk_FUN_1001303c pf_app_window_spec
#define thunk_FUN_10013048 terror_ui_window_sync_buffer
#define thunk_FUN_10013054 terror_ui_yield_frames
#define thunk_pf_app_window_spec pf_app_window_spec
#define thunk_pf_app_terror_ui_button pf_app_terror_ui_button
#define thunk_pf_app_terror_ui_rectangle pf_app_terror_ui_rectangle
#define thunk_pf_app_terror_ui_scrollbar_capture pf_app_terror_ui_scrollbar_capture
#define thunk_pf_app_terror_ui_text pf_app_terror_ui_text
#define thunk_pf_app_terror_ui_text_field pf_app_terror_ui_text_field
#define thunk_pf_app_terror_ui_view_alignment pf_app_terror_ui_view_alignment
#define thunk_pf_app_terror_ui_view_background pf_app_terror_ui_view_background
#define thunk_pf_app_terror_ui_view_draw pf_app_terror_ui_view_draw
#define thunk_pf_app_terror_ui_view_foreground pf_app_terror_ui_view_foreground
#define thunk_pf_app_terror_ui_window_present_rect pf_app_terror_ui_window_present_rect
static inline uint128 VectorAdd(uint128 a,uint128 b,unsigned bytes){uint128 out=0,mask=((uint128)1<<(bytes*8))-1;for(unsigned shift=0;shift<128;shift+=bytes*8)out|=(((a>>shift)+(b>>shift))&mask)<<shift;return out;}
static inline uint128 VectorCompareGreaterThan(uint128 a,uint128 b,unsigned bytes,unsigned unsign){uint128 out=0,mask=((uint128)1<<(bytes*8))-1;for(unsigned shift=0;shift<128;shift+=bytes*8){uint64_t x=(uint64_t)((a>>shift)&mask),y=(uint64_t)((b>>shift)&mask);int greater=unsign?x>y:((int64_t)(x<<(64-bytes*8))>(int64_t)(y<<(64-bytes*8)));if(greater)out|=mask<<shift;}return out;}
extern uint8_t pf_module_state[];
uint recovered_10003f20(uint a,uint b);
uint recovered_10003f70(uint a,uint b);
int recovered_10003fa8(int a,int b);
int recovered_10004018(int a,int b);
ulonglong recovered_10004080(ulonglong a,ulonglong b);
ulonglong recovered_10004164(ulonglong a,ulonglong b);
longlong recovered_100041e4(longlong a,longlong b);
longlong recovered_10004304(longlong a,longlong b);
ulonglong recovered_100043c0(double value);
longlong recovered_10004448(double value);
ulonglong recovered_10004494(float x);
longlong recovered_100044a4(float x);
double recovered_100044b4(ulonglong value);
double recovered_100044fc(longlong value);
float recovered_10004524(ulonglong x);
float recovered_10004540(longlong x);
int recovered_10004560(int argc,char **argv);
uint recovered_10008340(uint param_1,byte *param_2);
int recovered_1000958c(int param_1);
bool recovered_10009798(undefined4 *param_1);
void recovered_1000b06c(int param_1);
undefined4 recovered_1000b6c0(int param_1,uint param_2);
void recovered_1000b890(int param_1);
void recovered_1000b9bc(int param_1,byte *param_2);
uint recovered_1000ba00(int param_1);
undefined4 recovered_1000bb24(int param_1,byte *param_2,uint param_3,int param_4);
undefined4 recovered_1000bedc(int param_1);
int recovered_1000c0f8(int param_1,byte *param_2,uint param_3);
void recovered_1000c280(int *param_1,int param_2);
undefined4 recovered_1000c440(uint param_1,byte *param_2);
void recovered_1000c740(int param_1,uint param_2,uint *param_3);
void recovered_1000cc50(int param_1,byte *param_2);
bool recovered_1000d058(char *param_1);
undefined4 recovered_1000d0ac(void);
undefined4 recovered_1000d100(char *param_1);
undefined4 recovered_1000d19c(undefined1 *param_1);
bool recovered_1000d258(char *param_1,byte *param_2);
void recovered_1000d4e0(undefined4 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
bool recovered_1000d758(int param_1);
undefined1 recovered_1000d90c(int param_1);
int recovered_1000dce4(int param_1,uint param_2,uint param_3,uint *param_4);
undefined4 recovered_1000de48(void);
bool recovered_1000de9c(char *param_1);
bool recovered_1000df84(undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5);
bool recovered_1000e29c(undefined4 *param_1);
uint recovered_1000e5f0(undefined4 *param_1,void *param_2);
void recovered_1000e6fc(undefined4 *param_1,void *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_1000e758(char *param_1,uint param_2,uint *param_3,uint *param_4,char *param_5);
bool recovered_1000ea4c(undefined4 *param_1);
bool recovered_1000ec14(int param_1,int param_2,int param_3);
void recovered_1000ed44(int param_1);
void recovered_1000f1b8(int *param_1);
void recovered_10010ee4(int *param_1);
void recovered_10011904(int *param_1,int param_2);
void recovered_10011b3c(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                       char *param_6,uint param_7);
int recovered_10011d24(int param_1,int param_2);
void recovered_10011ee0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                       char *param_6,undefined4 param_7,undefined4 param_8,int param_9);
void recovered_1001211c(int *param_1);
void recovered_10012660(int param_1,undefined4 param_2);
void recovered_100126f8(int *param_1,int param_2);
void recovered_10012820(undefined4 *param_1,int param_2);
void recovered_10012a10(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10012bb4(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
