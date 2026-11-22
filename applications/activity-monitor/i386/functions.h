/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
extern uint8_t pf_module_state[];

/* Original analysis identifiers for manual recovery units. */
#define longdouble long double
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long long __udivdi3(unsigned long long,unsigned long long);
#define FUN_10006bc4 __udivdi3
#define recovered_10006bc4 __udivdi3
#define recovered_10006bdc snprintf
#define FUN_10006bdc snprintf
#define pf_varargs_10006bdc__4_ FUN_10006bdc
#define pf_varargs_10006bdc__4__4_ FUN_10006bdc
#define pf_varargs_10006bdc__4__4__4__4__4_ FUN_10006bdc
#define pf_varargs_10006bdc__8_ FUN_10006bdc
#define pf_varargs_10006bdc__8__4_ FUN_10006bdc
#define pf_varargs_10006bdc__8__4__4__4__4_ FUN_10006bdc
#define pf_varargs_10006bdc__8__8__4_ FUN_10006bdc
extern uint8_t pf_module_state[];
int recovered_10001060(void);
void recovered_10001670(int in_ECX);
void recovered_10002140(int in_ECX);
void recovered_10005290(int in_ECX);
void recovered_10005380(int in_ECX);
void recovered_10005450(int in_ECX);
void recovered_10005530(int in_ECX);
void recovered_100056a0(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,int param_6,
                       char param_7);
void recovered_100059c0(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_10005dc0(int in_ECX,int in_EDX,int param_3,int param_4,uint param_5,uint param_6);
void recovered_10006080(int in_ECX,uint in_EDX,uint param_3,undefined4 param_4);
void recovered_10006350(int in_ECX,uint in_EDX,int param_3,int param_4,int param_5,char param_6);
void recovered_10006930(int in_ECX);

/* Original analysis identifiers for manual recovery units. */
