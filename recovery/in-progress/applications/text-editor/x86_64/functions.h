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
unsigned long strlen(const char *);
#define FUN_10005cbe snprintf
#define recovered_10005cbe snprintf
#define pf_varargs_10005cbe__4_ recovered_10005cbe
#define pf_varargs_10005cbe__8_ recovered_10005cbe
#define pf_varargs_10005cbe__8__8_ recovered_10005cbe
extern uint8_t pf_module_state[];
int recovered_10000550(void);
bool recovered_10002450(long param_1);
void recovered_10002740(long param_1);
void recovered_100042c0(long param_1,int param_2);
ulong recovered_100043c0(long param_1);
ulong recovered_10004590(long param_1);
ulong recovered_10004860(long param_1);
char * recovered_10004a70(long param_1);
ulong recovered_10004d20(char *param_1,uint *param_2);
undefined8 recovered_10004e10(long param_1,void *param_2,ulong param_3);
bool recovered_10004f70(long param_1,int param_2,uint param_3,char param_4,int param_5);
uint128 recovered_10005190(long param_1);
void recovered_10005470(long param_1);
undefined8 recovered_100055c0(long param_1);
void recovered_100056b0(long param_1,char param_2);
void recovered_10005840(long param_1,long param_2,undefined8 param_3,undefined4 param_4);
void recovered_10005a30(long param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       uint param_6);

/* Original analysis identifiers for manual recovery units. */
