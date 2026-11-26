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
#define PrefetchAbort (*(volatile uint32_t *)(uintptr_t)12U)
#define _UndefinedInstruction (*(volatile uint32_t *)(uintptr_t)4U)
extern uint8_t pf_module_state[];
uint recovered_10001de8(uint a,uint b);
uint recovered_10001e38(uint param_1,uint param_2);
int recovered_10001e70(int a,int b);
uint recovered_10001ee0(uint param_1,uint param_2);
undefined8 recovered_10001f48(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1000202c(uint param_1,uint param_2,uint param_3,uint param_4);
longlong recovered_100020ac(longlong a,longlong b);
undefined8 recovered_100021cc(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong recovered_10002288(double value);
longlong recovered_10002310(double value);
ulonglong recovered_1000235c(float param_1,undefined4 in_s1);
void recovered_1000236c(float param_1);
double recovered_1000237c(ulonglong value);
double recovered_100023c4(longlong value);
float recovered_100023ec(uint param_1,uint param_2);
float recovered_10002408(uint param_1,uint param_2);
int recovered_10002424(int argc,char **argv);
undefined4 recovered_1000413c(int param_1,char *param_2);
undefined4 recovered_10004610(int param_1);
void recovered_10004870(int param_1,undefined4 param_2,int param_3);
void recovered_10004eb0(int param_1);
void recovered_10005cc4(uint param_1,char *param_2,undefined1 *param_3);
void recovered_10005f60(void *in_r0);
undefined4 recovered_10005fb0(void *in_r0,ulong in_r1);
bool recovered_10006004(char *param_1,uint *param_2);
void recovered_100062f0(int param_1,int param_2);
undefined4 recovered_10006408(int param_1);
uint recovered_100065e0(int param_1,undefined4 param_2,int param_3);
bool recovered_100068c4(int param_1);
undefined4 recovered_10006ae0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 recovered_10006d64(int param_1,int param_2,uint param_3);
undefined4 recovered_10006f80(int param_1,int param_2,uint param_3,int param_4,int param_5);
void recovered_10007220(undefined4 *param_1,int param_2,int param_3);
void recovered_1000740c(int param_1,undefined4 param_2,int param_3);
undefined4 recovered_100074e4(int param_1);
void recovered_100075c8(int param_1,int param_2);
void recovered_100077ac(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10007950(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
