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
static inline void *pf_app_terror_ui_view_foreground(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_foreground(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_background(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_background(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline void *pf_app_terror_ui_view_alignment(void *out,PFUiView view,unsigned int value){TerrorUIView v;__builtin_memcpy(&v,&view,sizeof(v));v=terror_ui_view_alignment(v,value);__builtin_memcpy(out,&v,sizeof(v));return out;}
static inline unsigned int pf_app_terror_ui_window_present_rect(void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_window_present_rect(window,r.rect);}
static inline unsigned int pf_app_terror_ui_view_draw(void *window,void *view,unsigned long long xy,unsigned long long wh,void *input){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_view_draw(window,(const TerrorUIView *)view,r.rect,input);}
static inline unsigned char pf_app_terror_ui_scrollbar_capture(void *snapshot,void *window,unsigned long long xy,unsigned long long wh){union{uint64_t words[2];TerrorUIRect rect;} r={{xy,wh}};return terror_ui_scrollbar_capture(snapshot,window,r.rect);}
void *memmove(void *,const void *,unsigned long);
#define CONCAT27(a,b) (((uint128)(uint16_t)(a)<<56)|((uint128)(b)&((((uint128)1)<<56)-1)))
#define CONCAT45(a,b) (((uint128)(uint32_t)(a)<<40)|((uint128)(b)&((((uint128)1)<<40)-1)))
#define CONCAT63(a,b) (((uint128)(a)<<24)|((uint128)(b)&0xffffffU))
static inline uint128 pf_psraw(uint128 v,unsigned count){uint128 out=0;for(unsigned i=0;i<8;i++){int16_t lane=(int16_t)(v>>(16*i));int16_t result=count>=16?(lane<0?-1:0):(int16_t)(lane>>count);out|=(uint128)(uint16_t)result<<(16*i);}return out;}
static inline uint128 pf_psllw(uint128 v,unsigned count){uint128 out=0;if(count<16)for(unsigned i=0;i<8;i++)out|=(uint128)(uint16_t)((uint16_t)(v>>(16*i))<<count)<<(16*i);return out;}
extern uint8_t pf_module_state[];
int recovered_100005e0(int argc,char **argv);
ulong recovered_10003d40(long param_1,byte *param_2);
char recovered_10004f70(long param_1);
bool recovered_10005160(char *param_1);
void recovered_10006910(long param_1);
ulong recovered_10006ff0(long param_1,ulong param_2);
void recovered_10007200(long param_1);
void recovered_10007330(long param_1,undefined1 *param_2);
int recovered_10007370(long param_1);
ulong recovered_10007480(long param_1,ulong param_2,ulong param_3,char param_4);
undefined8 recovered_100079a0(long param_1);
int recovered_10007b90(long param_1,char *param_2,ulong param_3);
uint128 recovered_10007d20(long param_1);
ulong recovered_10007e90(long param_1,byte *param_2);
void recovered_100081a0(long param_1,ulong param_2,undefined8 *param_3);
void recovered_10008540(long param_1,byte *param_2);
undefined1 recovered_10008980(char *param_1);
undefined8 recovered_100089c0(void);
int recovered_10008a10(char *param_1);
undefined1 recovered_10008a90(char *param_1,long param_2);
void recovered_10008d90(undefined8 param_1,undefined1 *param_2,uint param_3,undefined1 *param_4);
undefined8 recovered_10008fe0(long param_1);
undefined8 recovered_10009160(long param_1);
ulong recovered_10009570(long param_1,ulong param_2,undefined4 *param_3);
undefined8 recovered_100096c0(void);
ulong recovered_10009710(char *param_1);
bool recovered_100097b0(undefined4 *param_1,uint param_2,ulong param_3,ulong param_4,long param_5);
undefined8 recovered_10009b10(undefined4 *param_1);
uint recovered_10009f70(undefined4 *param_1,void *param_2);
void recovered_1000a040(undefined4 *param_1,void *param_2,undefined1 *param_3,uint param_4);
undefined8 recovered_1000a0a0(char *param_1,ulong param_2,uint *param_3,uint *param_4,char *param_5);
bool recovered_1000a360(undefined4 *param_1);
bool recovered_1000a470(long param_1,int param_2,int param_3);
void recovered_1000a590(long param_1);
void recovered_1000aab0(ulong *param_1);
void recovered_1000ca60(long *param_1);
int * recovered_1000d6e0(int *param_1,long param_2);
void recovered_1000d900(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4,
                       uint param_5,undefined8 param_6);
int recovered_1000da70(long param_1,int param_2);
void recovered_1000dbd0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4,
                       undefined4 param_5,undefined4 param_6,char param_7);
void recovered_1000dde0(long *param_1);
void recovered_1000e400(long param_1,undefined4 param_2);
uint128 recovered_1000e480(long param_1);
uint128 recovered_1000e590(long param_1);
void recovered_1000e790(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
void recovered_1000e980(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
void recovered_1000eb70(long param_1,uint param_2,int param_3,long param_4,int param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
