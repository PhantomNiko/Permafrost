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
#define UINT_82010828 (*(volatile unsigned *)(uintptr_t)0x82010828U)
#define UINT_8201084c (*(volatile unsigned *)(uintptr_t)0x8201084cU)
#define UINT_82010850 (*(volatile unsigned *)(uintptr_t)0x82010850U)
#define UINT_820108b8 (*(volatile unsigned *)(uintptr_t)0x820108b8U)
#define UINT_820108bc (*(volatile unsigned *)(uintptr_t)0x820108bcU)
#define UINT_82010904 (*(volatile unsigned *)(uintptr_t)0x82010904U)
#define UINT_82010908 (*(volatile unsigned *)(uintptr_t)0x82010908U)
#define UINT_8201090c (*(volatile unsigned *)(uintptr_t)0x8201090cU)
#define UINT_82010910 (*(volatile unsigned *)(uintptr_t)0x82010910U)
#define UINT_82010968 (*(volatile unsigned *)(uintptr_t)0x82010968U)
#define UINT_82010978 (*(volatile unsigned *)(uintptr_t)0x82010978U)
void *memmove(void *,const void *,unsigned long);
#define thunk_memcpy memcpy
#define thunk_memmove memmove
#define thunk_memset memset
#define thunk_pf_app_scrollbars_layout pf_app_scrollbars_layout
#define thunk_pf_app_window_spec pf_app_window_spec
#define thunk_snprintf snprintf
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_terror_ui_scrollbar_value_from_point terror_ui_scrollbar_value_from_point
#define thunk_terror_ui_window_close terror_ui_window_close
#define thunk_terror_ui_window_configure terror_ui_window_configure
#define thunk_terror_ui_window_info_requests_close terror_ui_window_info_requests_close
#define thunk_terror_ui_window_list terror_ui_window_list
#define thunk_terror_ui_window_open terror_ui_window_open
#define thunk_terror_ui_window_present terror_ui_window_present
#define thunk_terror_ui_window_query terror_ui_window_query
#define thunk_terror_ui_window_sync_buffer terror_ui_window_sync_buffer
#define thunk_terror_ui_yield_frames terror_ui_yield_frames
extern uint8_t pf_module_state[];
undefined8 recovered_100005f0(void);
void recovered_10000c04(long param_1);
void recovered_10000c70(long param_1);
void recovered_10001518(long param_1);
bool recovered_10002344(int param_1);
void recovered_10002390(void *param_1);
void recovered_100023d4(long param_1);
void recovered_10002444(long param_1);
void recovered_1000251c(long param_1);
long recovered_10002768(long param_1);
undefined8 recovered_100027c0(ulong param_1);
bool recovered_1000280c(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void recovered_10002838(void *param_1,long param_2);
uint128 recovered_10002890(long param_1);
void recovered_100028b8(long param_1);
undefined8
recovered_10002ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6);
undefined8 recovered_10002b5c(void *param_1,undefined8 param_2,uint *param_3);
uint recovered_10002bbc(int *param_1,int param_2,uint param_3);
void recovered_10002c5c(long param_1,long param_2,undefined8 param_3,uint param_4);
uint recovered_10002d1c(uint role);
void recovered_10002d40(long param_1,uint param_2,uint param_3,undefined4 param_4);
void recovered_10002db0(void *state,ulonglong xy,ulonglong wh,char *label,int selected);
void recovered_10002e5c(long param_1,ulong param_2,ulong param_3,uint param_4);
void recovered_10002ef4(void *state,int x,int y,char *text,uint rgb,int maximumWidth);
void recovered_100030c0(ulong param_1,char *param_2,ulong param_3);
void recovered_10003174(long param_1,int param_2,int param_3,uint param_4);
void recovered_100031e4(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                       int param_6);
void recovered_100034d4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
void recovered_100035a4(long param_1,int param_2,int param_3,uint param_4);
void recovered_10003624(long state,ulong xy);
void recovered_10003714(ulong param_1,char *param_2);

/* Original analysis identifiers for manual recovery units. */
