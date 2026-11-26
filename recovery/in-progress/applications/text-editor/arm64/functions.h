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
void *memmove(void *,const void *,unsigned long);
#define thunk_memcpy memcpy
#define thunk_memmove memmove
#define thunk_memset memset
#define thunk_pf_app_window_spec pf_app_window_spec
#define thunk_snprintf snprintf
#define thunk_strchr strchr
#define thunk_strlen strlen
#define thunk_strncmp strncmp
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_terror_ui_window_close terror_ui_window_close
#define thunk_terror_ui_window_info_requests_close terror_ui_window_info_requests_close
#define thunk_terror_ui_window_open terror_ui_window_open
#define thunk_terror_ui_window_pointer_state terror_ui_window_pointer_state
#define thunk_terror_ui_window_present terror_ui_window_present
#define thunk_terror_ui_window_query terror_ui_window_query
#define thunk_terror_ui_window_sync_buffer terror_ui_window_sync_buffer
#define thunk_terror_ui_yield_frames terror_ui_yield_frames
#define UINT_82010828 (*(volatile uint32_t *)(uintptr_t)0x82010828U)
#define UINT_8201082c (*(volatile uint32_t *)(uintptr_t)0x8201082cU)
#define UINT_82010834 (*(volatile uint32_t *)(uintptr_t)0x82010834U)
#define UINT_82010838 (*(volatile uint32_t *)(uintptr_t)0x82010838U)
#define UINT_8201084c (*(volatile uint32_t *)(uintptr_t)0x8201084cU)
#define UINT_82010850 (*(volatile uint32_t *)(uintptr_t)0x82010850U)
#define UINT_82010854 (*(volatile uint32_t *)(uintptr_t)0x82010854U)
#define UINT_8201089c (*(volatile uint32_t *)(uintptr_t)0x8201089cU)
#define UINT_820108bc (*(volatile uint32_t *)(uintptr_t)0x820108bcU)
#define UINT_820108c8 (*(volatile uint32_t *)(uintptr_t)0x820108c8U)
#define UINT_820108d0 (*(volatile uint32_t *)(uintptr_t)0x820108d0U)
#define UINT_82010978 (*(volatile uint32_t *)(uintptr_t)0x82010978U)
#define UINT_82010980 (*(volatile uint32_t *)(uintptr_t)0x82010980U)
#define UINT_82010984 (*(volatile uint32_t *)(uintptr_t)0x82010984U)
#define UINT_82010988 (*(volatile uint32_t *)(uintptr_t)0x82010988U)
extern uint8_t pf_module_state[];
int recovered_100005a0(int argc,char **argv);
undefined8 recovered_100014b4(long param_1,char *param_2);
bool recovered_1000174c(long param_1);
bool recovered_100017cc(long param_1);
void recovered_1000189c(long param_1);
void recovered_10001aec(long param_1);
undefined8 recovered_10002298(long param_1,ulong param_2);
void recovered_100022fc(undefined8 param_1,char *param_2,char *param_3);
void recovered_10002458(undefined1 *param_1,ulong param_2,long param_3);
void recovered_10002490(undefined8 param_1);
undefined8 recovered_100024d4(void *param_1,ulong param_2);
bool recovered_10002528(int param_1);
undefined8 recovered_10002570(undefined8 param_1,undefined8 param_2);
bool recovered_100025c8(long param_1);
undefined8 recovered_10002678(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4);
void recovered_100026e4(long *param_1);
void recovered_1000271c(long param_1,long param_2);
bool recovered_10002738(char *param_1,int *param_2);
undefined8 recovered_100028fc(undefined8 param_1);
bool recovered_10002944(long param_1,int param_2);
undefined8 recovered_100029c0(long param_1);
undefined8 recovered_10002b04(long param_1);
undefined8 recovered_10002c30(long param_1);
undefined8 recovered_10002cc0(long param_1);
undefined8 recovered_10002dcc(long param_1,ulong *param_2,ulong *param_3);
undefined8 recovered_10002e2c(long param_1,ulong param_2,ulong param_3,long param_4);
undefined8 recovered_10002edc(long param_1,ulong param_2,ulong param_3);
void recovered_10002f74(long param_1,ulong *param_2,ulong *param_3,ulong *param_4);
ulong recovered_10002ff4(long param_1);
ulong recovered_10003038(long param_1,ulong param_2);
undefined8 recovered_1000307c(long param_1,long param_2,ulong param_3);
uint128 recovered_100031c8(long param_1);
uint128 recovered_1000320c(long param_1);
uint128 recovered_10003248(long param_1);
bool recovered_100032a0(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_100032cc(long param_1);
bool recovered_10003300(long param_1,int param_2,int param_3,ulong param_4,int param_5);
uint128 recovered_10003478(long param_1);
uint128 recovered_100034b8(long param_1);
uint128 recovered_100034fc(long param_1);
void recovered_100035c8(long param_1,int param_2);
int recovered_100035f8(long param_1);
int recovered_10003638(long param_1);
uint recovered_10003678(long param_1);
void recovered_100036a0(long param_1);
long recovered_100036e8(long param_1,int param_2);
void recovered_10003740(long param_1,undefined1 param_2);
void recovered_10003768(long param_1,int param_2);
void recovered_10003820(long param_1);
undefined4 recovered_1000385c(long param_1);
int recovered_1000389c(long param_1,ulong param_2);
int recovered_100038e4(long param_1);
int recovered_1000391c(uint param_1);
void recovered_1000395c(long param_1,long param_2,undefined8 param_3,uint param_4);
void recovered_10003a64(long param_1,ulong param_2,ulong param_3,uint param_4);
void recovered_10003b0c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5);
void recovered_10003bc4(long param_1,uint param_2,uint param_3,undefined4 param_4);
uint recovered_10003c64(uint in_w0);
void recovered_10003c88(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       );
void recovered_10003cc8(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6);

/* Original analysis identifiers for manual recovery units. */
