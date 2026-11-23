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
static inline void pf_app_scrollbars_layout(unsigned long long a,unsigned long long b,void *vertical,void *horizontal,void *output){union {unsigned long long q[2];TerrorUIRect r;} u={{a,b}};terror_ui_scrollbars_layout(u.r,vertical,horizontal,output);}
long long __divdi3(long long a,long long b);
unsigned long long __udivdi3(unsigned long long a,unsigned long long b);
unsigned long long __umoddi3(unsigned long long a,unsigned long long b);
int __divsi3(int a,int b);
unsigned int __udivsi3(unsigned int a,unsigned int b);
long long __fixdfdi(double value);
unsigned long long __fixunsdfdi(double value);
double __floatdidf(long long value);
double __floatundidf(unsigned long long value);
typedef struct PFUiView { uintptr_t words[12]; } PFUiView;
static inline void *pf_app_terror_ui_text(void *out,const char *text){*(TerrorUIView *)out=terror_ui_text(text);return out;}
static inline void *pf_app_terror_ui_rectangle(void *out,unsigned int rgb){*(TerrorUIView *)out=terror_ui_rectangle(rgb);return out;}
static inline void *pf_app_terror_ui_button(void *out,const char *title,void *action,void *context){*(TerrorUIView *)out=terror_ui_button(title,(TerrorUIActionFn)action,context);return out;}
static inline void *pf_app_terror_ui_text_field(void *out,char *buffer,unsigned long capacity,unsigned char secret,void *action,void *context){*(TerrorUIView *)out=terror_ui_text_field(buffer,capacity,secret,(TerrorUIActionFn)action,context);return out;}
static inline void *pf_app_terror_ui_view_foreground(void *out,void *view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,view,sizeof(v));v=terror_ui_view_foreground(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_background(void *out,void *view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,view,sizeof(v));v=terror_ui_view_background(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_alignment(void *out,void *view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,view,sizeof(v));v=terror_ui_view_alignment(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline unsigned int pf_app_terror_ui_window_present_rect(void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_window_present_rect(window,r.rect);}
static inline unsigned int pf_app_terror_ui_view_draw(void *window,void *view,unsigned long long xy,unsigned long long wh,void *input){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_view_draw(window,(const TerrorUIView *)view,r.rect,input);}
static inline unsigned char pf_app_terror_ui_scrollbar_capture(void *snapshot,void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_scrollbar_capture(snapshot,window,r.rect);}
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost recovered SIMD semantics; Pooka's Free Software License. */
typedef struct { uint64_t words[3]; } pf_blob24;
#define PF_PART16(value,offset) (*(uint128 *)((uint8_t *)&(value)+(offset)))
static inline void WaitForEvent(void) { __asm__ volatile("wfe"); }
__attribute__((noreturn)) static inline uintptr_t SoftwareBreakpoint(unsigned n,uintptr_t pc) { (void)n;(void)pc;__builtin_trap(); }
static inline uint64_t NEON_sqadd(uint64_t a,uint64_t b,unsigned lane) {
 uint64_t result=0;
 for(unsigned i=0;i<2;++i) {
  int64_t x=(int32_t)(a>>(32*i)),y=(int32_t)(b>>(32*i)),z=x+y;
  if(z>2147483647)z=2147483647;if(z<(-2147483647-1))z=(-2147483647-1);
  result|=(uint64_t)(uint32_t)z<<(i*32);
 } (void)lane;return result;
}
static inline uint64_t NEON_ucvtf(uint64_t a) { return pf_double_bits((double)a); }
static inline uint64_t NEON_umaxv(uint64_t a,unsigned lane) {
 uint64_t mask=lane==8?~0ULL:((1ULL<<(lane*8))-1),result=0;
 for(unsigned i=0;i<8/lane;++i){uint64_t v=(a>>(i*lane*8))&mask;if(v>result)result=v;}return result;
}
static inline uint128 NEON_fmov(uint64_t bits,unsigned lane) { (void)lane;return ((uint128)bits<<64)|bits; }

#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
#define ZEXT812(value) ((uint128)(uint64_t)(value))
#define Reset (*(uint8_t *)(uintptr_t)0)
#define SUB168(a,b) ((uint64_t)((uint128)(a)>>((b)*8)))
/* Permafrost library ARM64 intrinsics; Pooka's Free Software License. */
static inline uint64_t pf_neon_bound(uint64_t a,uint64_t b,unsigned lane,int maximum) {
 uint64_t result=0;unsigned bits=lane*8;
 uint64_t mask=bits==64?~0ULL:((1ULL<<bits)-1);
 for(unsigned i=0;i<8/lane;++i){
  int64_t x=(int64_t)((a>>(i*bits))<<(64-bits))>>(64-bits);
  int64_t y=(int64_t)((b>>(i*bits))<<(64-bits))>>(64-bits);
  result|=((uint64_t)((maximum?x>y:x<y)?x:y)&mask)<<(i*bits);
 }return result;
}
#define NEON_smax(a,b,lane) pf_neon_bound(a,b,lane,1)
#define NEON_smin(a,b,lane) pf_neon_bound(a,b,lane,0)
__attribute__((always_inline)) static inline uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %0,sp":"=r"(value));return value;}
static inline uintptr_t pf_ctr(void){uintptr_t value;__asm__ volatile("mrs %0,ctr_el0":"=r"(value));return value;}
#define ctr_el0 pf_ctr()
static inline void DC_CVAC(uintptr_t value){__asm__ volatile("dc cvac,%0"::"r"(value):"memory");}
static inline void pf_dsb(void){__asm__ volatile("dsb sy"::: "memory");}
static inline void pf_isb(void){__asm__ volatile("isb"::: "memory");}
#undef NAN
#define NAN(value) __builtin_isnan(pf_bits_double(value))
#define DataSynchronizationBarrier(...) pf_dsb()
#define InstructionSynchronizationBarrier(...) pf_isb()
extern uint8_t pf_module_state[];
/* Original analysis identifiers for manual recovery units. */
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
unsigned long strlen(const char *);
#define FUN_10002a4c snprintf
void *memmove(void *,const void *,unsigned long);
static inline void DataMemoryBarrier(unsigned a,unsigned b){(void)a;(void)b;__asm__ volatile("dmb ish":::"memory");}
#define UINT_82010828 (*(volatile uint32_t *)(uintptr_t)0x82010828U)
#define UINT_8201082c (*(volatile uint32_t *)(uintptr_t)0x8201082cU)
#define UINT_82010834 (*(volatile uint32_t *)(uintptr_t)0x82010834U)
#define UINT_8201084c (*(volatile uint32_t *)(uintptr_t)0x8201084cU)
#define UINT_82010850 (*(volatile uint32_t *)(uintptr_t)0x82010850U)
#define UINT_82010854 (*(volatile uint32_t *)(uintptr_t)0x82010854U)
#define UINT_82010890 (*(volatile uint32_t *)(uintptr_t)0x82010890U)
#define UINT_82010894 (*(volatile uint32_t *)(uintptr_t)0x82010894U)
#define UINT_82010898 (*(volatile uint32_t *)(uintptr_t)0x82010898U)
#define UINT_8201089c (*(volatile uint32_t *)(uintptr_t)0x8201089cU)
#define UINT_82010978 (*(volatile uint32_t *)(uintptr_t)0x82010978U)
#define UINT_82010980 (*(volatile uint32_t *)(uintptr_t)0x82010980U)
#define UINT_82010984 (*(volatile uint32_t *)(uintptr_t)0x82010984U)
#define UINT_82010988 (*(volatile uint32_t *)(uintptr_t)0x82010988U)
extern uint8_t pf_module_state[];
int recovered_100005f0(int argc,char **argv);
undefined8 recovered_10002058(void);
bool recovered_1000208c(long param_1,byte *param_2);
byte recovered_10002640(long param_1);
ulong recovered_10002704(undefined8 param_1);
undefined8 recovered_100027a8(void *param_1,char *param_2);
bool recovered_100027f8(long param_1);
void recovered_1000357c(long param_1);
void recovered_100035ac(long param_1);
void recovered_10003800(void);
bool recovered_10003830(byte *param_1,byte *param_2);
undefined8 recovered_10003890(long *param_1,ulong *param_2,ulong param_3,ulong param_4);
undefined8 recovered_10003930(long param_1,ulong param_2);
undefined8 recovered_10003998(long param_1);
void recovered_10003a2c(long param_1);
void recovered_10003a74(void *param_1);
undefined8 recovered_10003ab4(long param_1,byte *param_2);
uint recovered_10003aec(long param_1);
undefined8 recovered_10003b18(void *param_1,ulong param_2);
bool recovered_10003b58(int param_1);
undefined8 recovered_10003ba0(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4);
void recovered_10003c0c(long *param_1);
undefined8 recovered_10003c44(long param_1,byte *param_2,ulong param_3,int param_4);
undefined8 recovered_10003d98(long param_1,ulong *param_2,ulong *param_3);
undefined8 recovered_10003e28(ulong param_1);
ulong recovered_10003e70(long param_1);
int recovered_10003f20(long param_1);
undefined8 recovered_10003f60(long param_1);
int recovered_10004080(long param_1,char *param_2,ulong param_3);
undefined1 * recovered_10004118(long param_1,uint param_2);
int recovered_10004160(long param_1);
uint128 recovered_1000419c(long param_1);
int recovered_100042d8(long param_1);
undefined4 recovered_10004334(long param_1);
ulong recovered_10004368(long param_1,ulong param_2,ulong param_3,ulong param_4);
ulong recovered_1000441c(char *text,ulong size,ulong start,int length);
undefined8 recovered_1000444c(long param_1,byte *param_2);
bool recovered_10004608(long param_1);
undefined8 recovered_1000462c(void);
void recovered_10004660(long param_1,ulong param_2,long param_3);
void recovered_100047e0(long param_1,byte *param_2);
bool recovered_100049ac(char *param_1);
undefined8 recovered_100049f4(char *param_1,undefined8 param_2);
undefined4 recovered_10004a40(char *param_1);
uint recovered_10004ab4(byte *param_1);
bool recovered_10004af8(char *param_1,byte *param_2);
undefined8 recovered_10004d4c(long param_1);
byte * recovered_10004db8(byte *param_1);
void recovered_10004df8(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
undefined8 recovered_10004fb0(undefined8 param_1,undefined8 param_2);
ulong recovered_10004fec(long param_1);
bool recovered_100050fc(long param_1);
bool recovered_100052a4(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_100052d0(long param_1,ulong param_2,undefined4 *param_3);
undefined8 recovered_100053c8(undefined1 *param_1,undefined8 param_2);
undefined8 recovered_1000541c(char *param_1,char *param_2,undefined8 param_3);
bool recovered_1000547c(undefined1 *param_1,ulong param_2,byte *param_3);
bool recovered_100054e4(char *param_1);
ulong recovered_10005574(long param_1);
undefined8 recovered_100056b4(long param_1);
ulong recovered_10005850(void);
void recovered_100058e4(uint *param_1,void *param_2,undefined1 *param_3,uint param_4);
undefined8 recovered_1000593c(char *param_1,void *param_2);
undefined8 recovered_10005978(undefined1 *param_1,uint param_2,uint param_3);
uint128 recovered_100059f8(long param_1);
uint128 recovered_10005a3c(long param_1);
bool recovered_10005a58(long param_1,int param_2,int param_3);
void recovered_10005b4c(void);
void recovered_10005b7c(long param_1);
void recovered_10005b94(long param_1);
void recovered_10005e38(long *param_1);
void recovered_10006c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       );
void recovered_10006c84(long *param_1);
void recovered_1000708c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       );
void recovered_100070d0(int *param_1,long param_2);
void recovered_10007254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       undefined8 param_5);
void recovered_10007300(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       ulong param_5,undefined8 param_6,undefined4 param_7);
uint128 recovered_10007364(long param_1,uint param_2);
int recovered_10007404(long param_1,int param_2);
void recovered_10007548(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                       undefined4 param_5,undefined4 param_6,int param_7);
void recovered_10007620(long *param_1);
void recovered_10007944(long param_1,uint param_2);
bool recovered_100079a4(long param_1,int *param_2);
void recovered_10007a04(long param_1,char *param_2);
uint128 recovered_10007a70(long param_1);
uint128 recovered_10007b50(long param_1);
uint128 recovered_10007c04(long param_1);
void recovered_10007c20(long param_1,int param_2);
int recovered_10007c38(uint param_1);
void recovered_10007c78(long param_1,long param_2,undefined8 param_3,uint param_4);
void recovered_10007d7c(long param_1,ulong param_2,ulong param_3,uint param_4);
void recovered_10007e20(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5);
void recovered_10007edc(long param_1,uint param_2,uint param_3,undefined4 param_4);
void recovered_10007f7c(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
uint recovered_100080e8(void);
uint recovered_100080f0(uint role);
void recovered_10008114(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6);

/* Original analysis identifiers for manual recovery units. */
