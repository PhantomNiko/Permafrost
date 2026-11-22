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
unsigned long strlen(const char *);
#define FUN_10006cce snprintf
#define recovered_10006cce snprintf
#define pf_varargs_10006cce__4_ recovered_10006cce
#define pf_varargs_10006cce__4__4_ recovered_10006cce
extern uint8_t pf_module_state[];
int recovered_10000d10(void);
undefined4 recovered_10002780(int in_ECX);
void recovered_10002960(uint in_ECX);
void recovered_10005650(int in_ECX,int in_EDX);
undefined4 recovered_10005740(int in_ECX);
undefined4 recovered_100058c0(int in_ECX);
undefined4 recovered_10005b60(int in_ECX);
undefined4 recovered_10005d40(int in_ECX);
bool recovered_10005f70(char *in_ECX,uint *in_EDX);
undefined4 recovered_10006040(int in_ECX,void *in_EDX,ulong param_3);
bool recovered_10006180(int in_ECX,int in_EDX,uint param_3,char param_4,char param_5);
void recovered_10006350(undefined4 *in_ECX,int in_EDX);
void recovered_100064e0(int in_ECX);
undefined4 recovered_100065a0(int in_ECX);
void recovered_10006680(int in_ECX);
void recovered_10006800(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined4 param_6);
void recovered_100069f0(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
