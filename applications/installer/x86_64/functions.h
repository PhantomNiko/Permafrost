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
#include "../operations.h"
extern uint8_t pf_module_state[];
int recovered_100005a0(void);
void recovered_10002240(uintptr_t state);
void recovered_10002750(uint *param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       int param_6,byte param_7,byte param_8);
void recovered_10002970(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8);
void recovered_10002b80(uint *param_1,undefined8 param_2,uint param_3,int param_4,char *param_5,
                       char *param_6,byte param_7);
void recovered_10002d70(uint *param_1,uint param_2,uint param_3,undefined8 param_4,int param_5,
                       char *param_6,byte param_7);
void recovered_10002ef0(uintptr_t state);

/* Original analysis identifiers for manual recovery units. */
