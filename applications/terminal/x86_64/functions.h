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
#define pf_varargs_10007fe2__8_ FUN_10007fe2
#define pf_varargs_10007fe2__8__8_ FUN_10007fe2
unsigned long strlen(const char *);
#define FUN_10007fe2 snprintf
#define recovered_10007fe2 snprintf
#define pf_varargs_10007fe2__8_ recovered_10007fe2
#define pf_varargs_10007fe2__8__8_ recovered_10007fe2
extern uint8_t pf_module_state[];
int recovered_10000550(void);
void recovered_10006da0(long param_1,byte *param_2);
int recovered_10006f00(long param_1,char *param_2);
undefined8 recovered_10007040(long param_1);
undefined8 recovered_100072c0(long param_1);
void recovered_10007520(long param_1,byte *param_2);
void recovered_10007850(char *param_1,ulong param_2,undefined1 *param_3);
bool recovered_10007960(long param_1);
bool recovered_10007a00(char *param_1,char *param_2);
uint128 recovered_10007aa0(long param_1);
void recovered_10007d60(long param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       uint param_6);

/* Original analysis identifiers for manual recovery units. */
