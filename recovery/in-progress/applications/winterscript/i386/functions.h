/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined4 *param_1);
#define recovered_10004adc _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(void);
#define recovered_10004ae2 _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined4 *param_1);
#define recovered_10004ae8 _Unwind_SjLj_Unregister
void * _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(void *output,void *vm,void *argument0);
#define recovered_10004aee _ZN12WinterScript17runScriptFilePathERKN2wm6stringE
void _ZN12WinterScript9runScriptERKN2wm6stringE(int param_1,undefined4 *in_stack_00000008);
#define recovered_10004af4 _ZN12WinterScript9runScriptERKN2wm6stringE
void _ZN12WinterScriptC1Ev(int *in_stack_00000004);
#define recovered_10004afa _ZN12WinterScriptC1Ev
void _ZSt9terminatev(void);
#define recovered_10004b00 _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_10004b06 _ZdlPv
void * _Znwm(int param_1);
#define recovered_10004b0c _Znwm
int __cxa_begin_catch(int param_1);
#define recovered_10004b12 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10004b18 __cxa_end_catch
undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4);
#define recovered_10004b1e __udivdi3
void wm_lua_flush_output(void);
#define recovered_10004b24 wm_lua_flush_output
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined1 param_4);
#define recovered_10004b2a wm_lua_readline
void wm_lua_write(char *param_1,int param_2);
#define recovered_10004b30 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10004b36 wm_lua_writeline
extern uint8_t pf_module_state[];
int recovered_10000970(int param_1,int param_2);
void recovered_10002000(char *arg_ecx);
void recovered_10002040(int param_1);
void recovered_10002060(int *param_1,int param_2);
void recovered_100020c0(int *param_1,int param_2,uint param_3);
int * recovered_10002230(int *param_1,undefined4 *param_2);
void recovered_10002c20(int param_1);
undefined ** recovered_10002cf0(undefined4 *arg_ecx);
void recovered_10002ff0(int *arg_ecx,char *arg_edx);
int * recovered_10003090(int *param_1,double param_2);
void recovered_100037b0(int *param_1,undefined1 param_2);
int * recovered_10003860(int *param_1,uint param_2,uint param_3);
int * recovered_10003ae0(int *param_1,int param_2,uint param_3);
void recovered_10003c80(int param_1,int *param_2);
void recovered_10003d90(int param_1,int *param_2);
void recovered_10003e80(int *param_1);
void recovered_10004570(int *param_1);
void recovered_10004640(undefined4 *param_1);
void recovered_10004760(int *param_1);
void recovered_100048b0(int *param_1);
void recovered_100049d0(int *param_1);

/* Original analysis identifiers for manual recovery units. */
