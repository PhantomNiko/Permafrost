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
static inline void *pf_app_terror_ui_view_foreground(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_foreground(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_background(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_background(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_alignment(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_alignment(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline unsigned int pf_app_terror_ui_window_present_rect(void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_window_present_rect(window,r.rect);}
static inline unsigned int pf_app_terror_ui_view_draw(void *window,void *view,unsigned long long xy,unsigned long long wh,void *input){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_view_draw(window,(const TerrorUIView *)view,r.rect,input);}
static inline unsigned char pf_app_terror_ui_scrollbar_capture(void *snapshot,void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_scrollbar_capture(snapshot,window,r.rect);}
void *memmove(void *,const void *,unsigned long);
#define thunk_FUN_100089bc FUN_100089bc
#define thunk_memcmp memcmp
#define thunk_memcpy memcpy
#define thunk_memmove memmove
#define thunk_memset memset
#define thunk_pf_app_scrollbars_layout pf_app_scrollbars_layout
#define thunk_pf_app_window_spec pf_app_window_spec
#define thunk_snprintf snprintf
#define thunk_strcmp strcmp
#define thunk_strlen strlen
#define thunk_strncmp strncmp
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_terror_ui_scrollbar_value_from_point terror_ui_scrollbar_value_from_point
#define thunk_terror_ui_window_close terror_ui_window_close
#define thunk_terror_ui_window_configure terror_ui_window_configure
#define thunk_terror_ui_window_open terror_ui_window_open
#define thunk_terror_ui_window_pointer_state terror_ui_window_pointer_state
#define thunk_terror_ui_window_present terror_ui_window_present
#define thunk_terror_ui_window_query terror_ui_window_query
#define thunk_terror_ui_window_sync_buffer terror_ui_window_sync_buffer
#define thunk_terror_ui_yield_frames terror_ui_yield_frames
void *memchr(const void *,int,unsigned long);
#define FUN_100089bc memchr
#define thunk_memchr memchr
extern uint8_t pf_module_state[];
int recovered_10000590(int argc,char **argv);
void recovered_10004540(long param_1);
void recovered_10004710(long param_1);
ulong recovered_10004860(long param_1,char *param_2,char param_3);
void recovered_10004c40(long param_1);
void recovered_10004d20(void);
undefined8 recovered_10004d70(long param_1,char *param_2);
bool recovered_10004ff0(char *param_1,int *param_2,char *param_3);
undefined8 recovered_100051b0(undefined8 param_1,char *param_2,uint *param_3);
int recovered_100053d0(char *param_1);
void recovered_100055c0(undefined8 param_1,char *param_2,undefined1 *param_3);
ulong recovered_100057c0(long param_1,uint param_2);
void recovered_10005c50(long param_1,int param_2);
void recovered_10005da0(long param_1);
void recovered_100060d0(long param_1);
void recovered_10006380(long param_1,byte param_2);
void recovered_100064a0(long param_1,char param_2);
void recovered_10006850(long param_1);
void recovered_10006a80(long param_1,int param_2);
ulong recovered_10006af0(long param_1,char *param_2);
ulong recovered_10006ca0(long param_1,long param_2,ulong param_3);
undefined8 recovered_10007220(long param_1,ulong param_2,long param_3,long *param_4);
undefined8 recovered_100073c0(long *param_1,char param_2);
bool recovered_10007460(long param_1,ulong param_2);
uint128 recovered_10007610(long param_1,uint param_2);
void recovered_10007690(long param_1,undefined4 *param_2);
ulong recovered_10007940(long param_1,ulong param_2);
ulong recovered_10007cc0(long param_1,ulong param_2,char param_3);
void recovered_10007ee0(long param_1,long param_2,undefined8 param_3,uint param_4);
void recovered_10008280(long param_1,uint param_2,long param_3);
void recovered_10008560(long param_1,ulong param_2,int param_3,long param_4,long param_5,
                       uint param_6);

/* Original analysis identifiers for manual recovery units. */
