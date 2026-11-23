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
#define thunk___divdi3 __divdi3
#define thunk_FUN_1000fe9a __divdi3
#define thunk_memcpy memcpy
#define thunk_FUN_1000fea0 memcpy
#define thunk_memmove memmove
#define thunk_FUN_1000fea6 memmove
#define thunk_memset memset
#define thunk_FUN_1000feac memset
#define thunk_snprintf snprintf
#define thunk_FUN_1000feb2 snprintf
#define thunk_strchr strchr
#define thunk_FUN_1000feb8 strchr
#define thunk_strcmp strcmp
#define thunk_FUN_1000febe strcmp
#define thunk_strlen strlen
#define thunk_FUN_1000fec4 strlen
#define thunk_strncmp strncmp
#define thunk_FUN_1000feca strncmp
#define thunk_strstr strstr
#define thunk_FUN_1000fed0 strstr
#define thunk_terror_ui_button pf_app_terror_ui_button
#define thunk_FUN_1000fed6 pf_app_terror_ui_button
#define thunk_FUN_1000ffd0 pf_app_terror_ui_button
#define thunk_terror_ui_colour terror_ui_colour
#define thunk_FUN_1000fedc terror_ui_colour
#define thunk_terror_ui_rectangle pf_app_terror_ui_rectangle
#define thunk_FUN_1000fee2 pf_app_terror_ui_rectangle
#define thunk_FUN_1000ffe4 pf_app_terror_ui_rectangle
#define thunk_terror_ui_scrollbar_capture pf_app_terror_ui_scrollbar_capture
#define thunk_FUN_1000fee8 pf_app_terror_ui_scrollbar_capture
#define thunk_FUN_1000ffee pf_app_terror_ui_scrollbar_capture
#define thunk_terror_ui_scrollbar_release terror_ui_scrollbar_release
#define thunk_FUN_1000feee terror_ui_scrollbar_release
#define thunk_FUN_1000fff8 terror_ui_scrollbar_release
#define thunk_terror_ui_scrollbar_restore terror_ui_scrollbar_restore
#define thunk_FUN_1000fef4 terror_ui_scrollbar_restore
#define thunk_FUN_10010002 terror_ui_scrollbar_restore
#define thunk_terror_ui_text pf_app_terror_ui_text
#define thunk_FUN_1000fefa pf_app_terror_ui_text
#define thunk_FUN_1001000c pf_app_terror_ui_text
#define thunk_terror_ui_text_field pf_app_terror_ui_text_field
#define thunk_FUN_1000ff00 pf_app_terror_ui_text_field
#define thunk_FUN_10010016 pf_app_terror_ui_text_field
#define thunk_terror_ui_view_alignment pf_app_terror_ui_view_alignment
#define thunk_FUN_1000ff06 pf_app_terror_ui_view_alignment
#define thunk_FUN_10010020 pf_app_terror_ui_view_alignment
#define thunk_terror_ui_view_background pf_app_terror_ui_view_background
#define thunk_FUN_1000ff0c pf_app_terror_ui_view_background
#define thunk_FUN_1001002a pf_app_terror_ui_view_background
#define thunk_terror_ui_view_draw pf_app_terror_ui_view_draw
#define thunk_FUN_1000ff12 pf_app_terror_ui_view_draw
#define thunk_FUN_10010034 pf_app_terror_ui_view_draw
#define thunk_terror_ui_view_foreground pf_app_terror_ui_view_foreground
#define thunk_FUN_1000ff18 pf_app_terror_ui_view_foreground
#define thunk_FUN_1001003e pf_app_terror_ui_view_foreground
#define thunk_terror_ui_window_begin_frame terror_ui_window_begin_frame
#define thunk_FUN_1000ff1e terror_ui_window_begin_frame
#define thunk_FUN_10010048 terror_ui_window_begin_frame
#define thunk_terror_ui_window_close terror_ui_window_close
#define thunk_FUN_1000ff24 terror_ui_window_close
#define thunk_terror_ui_window_open terror_ui_window_open
#define thunk_FUN_1000ff2a terror_ui_window_open
#define thunk_terror_ui_window_pointer_state_ex terror_ui_window_pointer_state_ex
#define thunk_FUN_1000ff30 terror_ui_window_pointer_state_ex
#define thunk_FUN_10010066 terror_ui_window_pointer_state_ex
#define thunk_terror_ui_window_present terror_ui_window_present
#define thunk_FUN_1000ff36 terror_ui_window_present
#define thunk_terror_ui_window_present_rect pf_app_terror_ui_window_present_rect
#define thunk_FUN_1000ff3c pf_app_terror_ui_window_present_rect
#define thunk_FUN_1001007a pf_app_terror_ui_window_present_rect
#define thunk_terror_ui_window_query terror_ui_window_query
#define thunk_FUN_1000ff42 terror_ui_window_query
#define thunk_terror_ui_window_set_custom_menus terror_ui_window_set_custom_menus
#define thunk_FUN_1000ff48 terror_ui_window_set_custom_menus
#define thunk_FUN_1001008e terror_ui_window_set_custom_menus
#define thunk_terror_ui_window_spec pf_app_window_spec
#define thunk_FUN_1000ff4e pf_app_window_spec
#define thunk_terror_ui_window_sync_buffer terror_ui_window_sync_buffer
#define thunk_FUN_1000ff54 terror_ui_window_sync_buffer
#define thunk_terror_ui_yield_frames terror_ui_yield_frames
#define thunk_FUN_1000ff5a terror_ui_yield_frames
#define thunk_FUN_1000ff6c __divdi3
#define thunk_FUN_1000ff76 memcpy
#define thunk_FUN_1000ff80 memmove
#define thunk_FUN_1000ff8a memset
#define thunk_FUN_1000ff94 snprintf
#define thunk_FUN_1000ff9e strchr
#define thunk_FUN_1000ffa8 strcmp
#define thunk_FUN_1000ffb2 strlen
#define thunk_FUN_1000ffbc strncmp
#define thunk_FUN_1000ffc6 strstr
#define thunk_FUN_1000ffda terror_ui_colour
#define thunk_FUN_10010052 terror_ui_window_close
#define thunk_FUN_1001005c terror_ui_window_open
#define thunk_FUN_10010070 terror_ui_window_present
#define thunk_FUN_10010084 terror_ui_window_query
#define thunk_FUN_10010098 pf_app_window_spec
#define thunk_FUN_100100a2 terror_ui_window_sync_buffer
#define thunk_FUN_100100ac terror_ui_yield_frames
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
extern uint8_t pf_module_state[];
int recovered_10001080(int argc,char **argv);
uint recovered_10005b30(void *reg_ecx,byte *reg_edx);
undefined1 * recovered_10006d90(int reg_ecx);
bool recovered_10006f50(undefined4 *param_1);
void recovered_10008760(void *reg_ecx);
undefined4 recovered_10008ec0(int reg_ecx,uint reg_edx);
void recovered_10009070(int reg_ecx);
void recovered_100091a0(int reg_ecx,char *reg_edx);
int recovered_100091f0(int reg_ecx);
undefined4 recovered_10009300(int reg_ecx,byte *reg_edx,uint param_3,char param_4);
undefined4 recovered_10009740(int reg_ecx);
int recovered_10009920(int reg_ecx,char *reg_edx,uint param_3);
void recovered_10009a90(int *reg_ecx,int reg_edx);
undefined4 recovered_10009c40(int reg_ecx,byte *reg_edx);
void recovered_10009f40(char *reg_ecx,ulong reg_edx,int param_3);
void recovered_1000a3d0(int reg_ecx,byte *reg_edx);
bool recovered_1000a7e0(int reg_ecx);
uint recovered_1000a820(char *reg_ecx,uint reg_edx);
char recovered_1000a870(char *reg_ecx);
undefined4 recovered_1000a8f0(undefined1 *reg_ecx);
bool recovered_1000a9c0(char *reg_ecx,char *reg_edx);
void recovered_1000ac30(int reg_edx,uint param_2,undefined1 *param_3);
undefined4 recovered_1000ae50(int reg_ecx);
undefined4 recovered_1000b0e0(int reg_ecx);
uint recovered_1000b4b0(char *reg_ecx,char *reg_edx);
bool recovered_1000b500(char *reg_ecx);
bool recovered_1000b5d0(uint *reg_ecx,uint reg_edx,uint param_3,uint param_4,int param_5);
undefined4 recovered_1000b8f0(int reg_ecx);
uint recovered_1000bd00(uint *reg_ecx,void *reg_edx);
void recovered_1000be10(uint *reg_ecx,void *reg_edx,int param_3,uint param_4);
undefined4 recovered_1000be60(char *reg_ecx,uint reg_edx,uint *param_3,uint *param_4,char *param_5);
bool recovered_1000c0e0(uint *reg_ecx);
bool recovered_1000c280(int reg_ecx,int reg_edx,int param_3);
void recovered_1000c3a0(int reg_ecx);
void recovered_1000c6d0(int *reg_ecx);
void recovered_1000e0a0(int *reg_ecx);
void recovered_1000eb20(int *reg_ecx,int reg_edx);
void recovered_1000ed70(int param_1,int param_2,int param_3,char *param_4,uint param_5);
int recovered_1000ee50(int reg_ecx,int reg_edx);
void recovered_1000efc0(int param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
                       undefined4 param_6,char param_7);
void recovered_1000f0f0(int *param_1);
void recovered_1000f630(int reg_ecx,undefined4 reg_edx);
void recovered_1000f6c0(undefined4 *reg_ecx,int reg_edx);
undefined4 * recovered_1000f7e0(undefined4 *reg_ecx,int reg_edx);
void recovered_1000f9c0(int reg_ecx,uint reg_edx,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_1000fba0(int reg_ecx,int reg_edx,int param_3,int param_4,int param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
