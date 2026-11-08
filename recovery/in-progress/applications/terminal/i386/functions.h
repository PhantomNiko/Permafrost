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
#define FUN_10007ce6 snprintf
#define recovered_10007ce6 snprintf
#define pf_varargs_10007ce6__4_ recovered_10007ce6
#define pf_varargs_10007ce6__4__4_ recovered_10007ce6
extern uint8_t pf_module_state[];
int recovered_10000780(void);
int recovered_10006ca0(int in_ECX,char *in_EDX);
undefined4 recovered_10006df0(int in_ECX);
undefined4 recovered_10007050(int in_ECX);
void recovered_10007270(int in_ECX,byte *in_EDX);
void recovered_10007550(char *in_ECX,ulong in_EDX,undefined1 *param_3);
bool recovered_10007640(int param_1);
undefined4 recovered_100076e0(char *in_ECX,char *in_EDX);
undefined4 * recovered_10007760(undefined4 *in_ECX,int in_EDX);
void recovered_10007a10(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6);

/* Original analysis identifiers for manual recovery units. */
