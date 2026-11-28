/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined8 *param_1);
#define recovered_10004f24 _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(undefined8 *param_1,byte *in_RSI);
#define recovered_10004f2a _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined8 *param_1);
#define recovered_10004f30 _Unwind_SjLj_Unregister
void * _ZN12WinterScript17runScriptFilePathERKN2wm6stringE(void *output,void *vm,void *argument0);
#define recovered_10004f36 _ZN12WinterScript17runScriptFilePathERKN2wm6stringE
void _ZN12WinterScript9runScriptERKN2wm6stringE(long param_1,undefined8 *param_2);
#define recovered_10004f3c _ZN12WinterScript9runScriptERKN2wm6stringE
void _ZN12WinterScriptC1Ev(long *in_RDI);
#define recovered_10004f42 _ZN12WinterScriptC1Ev
void _ZSt9terminatev(void);
#define recovered_10004f48 _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_10004f4e _ZdlPv
void * _Znwm(long param_1);
#define recovered_10004f54 _Znwm
long __cxa_begin_catch(long param_1);
#define recovered_10004f5a __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10004f60 __cxa_end_catch
void wm_lua_flush_output(void);
#define recovered_10004f66 wm_lua_flush_output
bool wm_lua_readline(long param_1,long param_2,undefined8 param_3,undefined1 param_4);
#define recovered_10004f6c wm_lua_readline
void wm_lua_write(long param_1,long param_2);
#define recovered_10004f72 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10004f78 wm_lua_writeline
extern uint8_t pf_module_state[];
undefined4 recovered_10000670(uint param_1,long param_2);
void recovered_10001c90(long param_1);
void recovered_10001cc0(long *param_1,long param_2);
void recovered_10001cd0(long *param_1,long param_2);
void recovered_10001d10(long *param_1,long param_2,ulong param_3);
long * recovered_10001fc0(long *param_1,undefined8 *param_2);
void recovered_10002a70(long param_1);
undefined8 recovered_10002b40(undefined8 *param_1);
void recovered_10002e40(long *param_1,char *param_2);
long * recovered_10002ec0(double param_1,long *param_2);
void recovered_100035e0(long *param_1,undefined1 param_2);
long * recovered_10003790(long *param_1,ulong param_2);
long * recovered_10003b20(long *param_1,long param_2,ulong param_3);
void recovered_10003fc0(long param_1,long *param_2);
void recovered_100040e0(long param_1,long *param_2);
void recovered_100041f0(long *param_1);
void recovered_10004980(long *param_1);
void recovered_10004a30(undefined8 *param_1);
void recovered_10004b50(long *param_1);
void recovered_10004cb0(long *param_1);
void recovered_10004df0(long *param_1);

/* Original analysis identifiers for manual recovery units. */
