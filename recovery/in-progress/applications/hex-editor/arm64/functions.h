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
#define UINT_82010828 (*(volatile uint32_t *)(uintptr_t)0x82010828U)
#define UINT_82010838 (*(volatile uint32_t *)(uintptr_t)0x82010838U)
#define UINT_82010854 (*(volatile uint32_t *)(uintptr_t)0x82010854U)
extern uint8_t pf_module_state[];
int recovered_100005a0(int argc,char **argv);
undefined8 recovered_10002064(void);
void recovered_1000209c(long param_1);
void recovered_10002168(long param_1);
undefined8 recovered_100021b4(long param_1,char *param_2,int param_3);
void recovered_1000236c(long state,char *message);
void recovered_100023a0(long param_1);
void recovered_100023fc(undefined8 param_1);
bool recovered_1000243c(int param_1);
undefined8 recovered_10002484(long param_1,char *param_2);
undefined8 recovered_100025ec(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4);
uint recovered_10002658(char *param_1,uint *param_2,char *param_3);
ulong recovered_100026f0(undefined8 param_1,char *param_2,uint *param_3);
void recovered_1000281c(char *param_1,int *param_2,long param_3);
int recovered_10002924(char *param_1);
bool recovered_100029dc(long param_1);
undefined8 recovered_10002a8c(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002ae4(undefined8 param_1);
undefined8 recovered_10002b28(long param_1);
void recovered_10002b70(long param_1);
void recovered_10002bb4(undefined8 param_1,char *param_2,char *param_3);
undefined8 recovered_10002ce8(long param_1,undefined8 param_2);
undefined8 recovered_10002e58(undefined8 param_1,undefined8 *param_2);
undefined8
recovered_10002ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
void recovered_10002f24(long param_1,int param_2);
void recovered_10003018(long param_1);
undefined8 recovered_100030d4(long param_1);
bool recovered_10003298(long param_1,int param_2);
void recovered_100033b4(long param_1,ulong param_2);
void recovered_100035a4(long param_1);
void recovered_10003608(long param_1,undefined4 param_2);
void recovered_10003654(long param_1);
undefined8 recovered_100036a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_10003708(long param_1,char *param_2);
undefined8 recovered_1000383c(long param_1,long param_2,ulong param_3);
undefined8 recovered_10003a50(long param_1,ulong param_2,long param_3,long *param_4);
undefined8 recovered_10003b6c(long param_1,ulong param_2,ulong *param_3);
void recovered_10003c24(long param_1);
int recovered_10003c9c(long param_1);
long recovered_10003ce8(long param_1);
uint recovered_10003d2c(int param_1);
undefined8 recovered_10003d5c(long *param_1,int param_2);
void recovered_10003e0c(long param_1,void *param_2);
bool recovered_10003ea0(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_10003ecc(long param_1);
ulong recovered_10003efc(long param_1,ulong param_2);
uint128 recovered_10003f84(long param_1,uint param_2);
undefined8 recovered_10004018(long param_1,int param_2,int param_3,uint param_4);
void recovered_100040e4(long param_1,undefined4 *param_2);
uint recovered_10004178(ulong param_1,ulong param_2);
undefined8 recovered_100041e0(long param_1,ulong param_2);
undefined8 recovered_100042e0(long param_1,ulong param_2,uint param_3);
int recovered_100043a0(uint param_1);
void recovered_100043e0(long param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined8 param_6);
void recovered_100044b4(long param_1,uint param_2,int param_3,long param_4,undefined8 param_5);
void recovered_1000451c(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
void recovered_100045c4(long param_1,uint param_2,long param_3);
void recovered_10004684(long param_1,uint param_2,int param_3,long param_4,long param_5,
                       undefined8 param_6);
void recovered_1000487c(long param_1,uint param_2,uint param_3,undefined4 param_4);

/* Original analysis identifiers for manual recovery units. */
