/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined8 *param_1);
#define recovered_1000293b _Unwind_SjLj_Register
undefined8 _Unwind_SjLj_Resume(undefined8 *param_1);
#define recovered_10002941 _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined8 *param_1);
#define recovered_10002947 _Unwind_SjLj_Unregister
void _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
#define recovered_1000294d _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE
void _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_(undefined1 *param_1,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2);
#define recovered_10002953 _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_
undefined8 * _ZN6winter3lua5LuaVMC1Ev(undefined8 *param_1);
#define recovered_10002959 _ZN6winter3lua5LuaVMC1Ev
void _ZN6winter3lua5LuaVMD1Ev(void *owner);
#define recovered_1000295f _ZN6winter3lua5LuaVMD1Ev
void _ZN6winter3lua8LuaValueC1Ev(undefined1 *param_1);
#define recovered_10002965 _ZN6winter3lua8LuaValueC1Ev
long * _ZNK6winter3lua8LuaValue8toStringEv(long *param_1,undefined1 *param_2);
#define recovered_1000296b _ZNK6winter3lua8LuaValue8toStringEv
void _ZSt9terminatev(void);
#define recovered_10002971 _ZSt9terminatev
void _ZdlPv(void *data);
#define recovered_10002977 _ZdlPv
void * _Znwm(ulong size);
#define recovered_1000297d _Znwm
void __cxa_begin_catch(long param_1);
#define recovered_10002983 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10002989 __cxa_end_catch
void wm_lua_flush_output(void);
#define recovered_1000298f wm_lua_flush_output
bool wm_lua_readline(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
#define recovered_10002995 wm_lua_readline
void wm_lua_show_banner(void);
#define recovered_1000299b wm_lua_show_banner
void wm_lua_show_help(void);
#define recovered_100029a1 wm_lua_show_help
void wm_lua_write(char *param_1,long param_2);
#define recovered_100029a7 wm_lua_write
void wm_lua_writeline(void);
#define recovered_100029ad wm_lua_writeline
extern uint8_t pf_module_state[];
ulong recovered_10000670(uint param_1,long param_2);
void recovered_10001cc0(char *param_1);
void recovered_10001cf0(long param_1);
void recovered_10001d00(long *param_1,long param_2,ulong param_3);
void recovered_10001fb0(char *param_1,char *param_2);
void recovered_100021d0(void *owner);
void recovered_10002290(long param_1,long *param_2);
void recovered_10002390(long param_1,long *param_2);
long * recovered_100024a0(long *param_1,long param_2,ulong param_3);

/* Original analysis identifiers for manual recovery units. */
