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
#define thunk_FUN_100093bc memchr
#define thunk___udivdi3 __udivdi3
#define thunk___umoddi3 __umoddi3
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
#define thunk_memchr memchr
extern uint8_t pf_module_state[];
int recovered_10000a90(int argc,char **argv);
void recovered_10004d00(int reg_ecx);
void recovered_10004eb0(int reg_ecx);
undefined4 recovered_10005030(int reg_ecx,char *reg_edx,char param_3);
void recovered_10005430(void *reg_ecx);
void recovered_10005500(void *reg_ecx);
undefined4 recovered_10005550(int reg_ecx,char *reg_edx);
bool recovered_100057e0(char *reg_ecx,int *reg_edx,char *param_3);
undefined4 recovered_10005950(uint *reg_ecx,uint *reg_edx,uint *param_3);
int recovered_10005b40(char *reg_ecx);
void recovered_10005cb0(int reg_ecx,char *reg_edx,undefined1 *param_3);
undefined4 recovered_10005e50(int reg_ecx,int reg_edx);
void recovered_10006310(int reg_ecx,int reg_edx);
void recovered_10006460(int reg_ecx);
void recovered_10006780(int reg_ecx);
void recovered_10006a60(int reg_ecx);
void recovered_10006b70(int reg_ecx);
void recovered_10006f10(int reg_ecx);
void recovered_10007120(int reg_ecx,int reg_edx);
undefined4 recovered_10007190(int reg_ecx,char *reg_edx);
undefined1 recovered_10007330(int reg_ecx,void *reg_edx,uint param_3);
uint recovered_10007800(int reg_ecx,uint reg_edx,int param_3,int *param_4);
void recovered_100079c0(int reg_ecx);
undefined4 recovered_10007b90(int *reg_ecx);
undefined4 recovered_10007c20(int reg_ecx,uint reg_edx,uint param_3);
void recovered_10007ed0(int *reg_ecx,int reg_edx,int param_3);
undefined4 recovered_10007f60(int reg_ecx,int reg_edx,int param_3,char param_4);
void recovered_10008070(int reg_ecx,undefined4 *reg_edx);
undefined4 recovered_100083f0(int reg_ecx,uint reg_edx,uint param_3);
undefined4 recovered_100087a0(int reg_ecx,uint reg_edx,uint param_3,char param_4);
void recovered_100088c0(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,uint param_6);
void recovered_10008c70(int reg_ecx,int reg_edx,int param_3);
void recovered_10008f50(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
