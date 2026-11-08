/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
#define pf_varargs_10006f19__4_ FUN_10006f19
#define pf_varargs_10006f19__4__4_ FUN_10006f19
#define pf_varargs_10006f19__8_ FUN_10006f19
#define pf_varargs_10006f19__8__4__8__8__4_ FUN_10006f19
#define pf_varargs_10006f19__8__8_ FUN_10006f19
#define pf_varargs_10006f19__8__8__8_ FUN_10006f19
#define FUN_10006f19 snprintf
extern uint8_t pf_module_state[];
int recovered_100005a0(void);
void recovered_10000c20(long param_1);
void recovered_10001890(long param_1);
void recovered_10004fe0(long param_1);
void recovered_100050f0(long param_1);
void recovered_100051b0(long param_1);
void recovered_10005260(long param_1);
void recovered_10005400(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
void recovered_10005520(long param_1,ulong param_2,long param_3,char param_4);
void recovered_10005a30(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       );
void recovered_10005d20(long param_1,uint param_2,uint param_3,undefined4 param_4);
void recovered_100061c0(long param_1,uint param_2,int param_3,long param_4,long param_5,char param_6
                       );
void recovered_100069e0(long param_1);

/* Original analysis identifiers for manual recovery units. */
