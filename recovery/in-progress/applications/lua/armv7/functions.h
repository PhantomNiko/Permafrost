/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
uint _Unwind_SjLj_Register(undefined4 *param_1);
#define recovered_10003fb0 _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(undefined4 *param_1);
#define recovered_10003fb4 _Unwind_SjLj_Resume
uint _Unwind_SjLj_Unregister(undefined4 *param_1);
#define recovered_10003fb8 _Unwind_SjLj_Unregister
void _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE(undefined1 *param_1,int *param_2,int *param_3);
#define recovered_10003fbc _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE
void _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_(undefined1 *param_1,int *param_2,int *param_3,int *param_4);
#define recovered_10003fc0 _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_
undefined4 * _ZN6winter3lua5LuaVMC1Ev(undefined4 *param_1);
#define recovered_10003fc4 _ZN6winter3lua5LuaVMC1Ev
void * _ZN6winter3lua5LuaVMD1Ev(void *owner);
#define recovered_10003fc8 _ZN6winter3lua5LuaVMD1Ev
void _ZN6winter3lua8LuaValueC1Ev(undefined1 *param_1);
#define recovered_10003fcc _ZN6winter3lua8LuaValueC1Ev
void _ZNK6winter3lua8LuaValue8toStringEv(int *param_1,undefined1 *param_2);
#define recovered_10003fd0 _ZNK6winter3lua8LuaValue8toStringEv
void _ZSt9terminatev(void);
#define recovered_10003fd4 _ZSt9terminatev
void _ZdlPv(void *owner);
#define recovered_10003fd8 _ZdlPv
void * _Znwm(ulong size);
#define recovered_10003fdc _Znwm
void __cxa_begin_catch(int param_1);
#define recovered_10003fe0 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10003fe4 __cxa_end_catch
void wm_lua_flush_output(void);
#define recovered_10003fe8 wm_lua_flush_output
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
#define recovered_10003fec wm_lua_readline
void wm_lua_show_banner(void);
#define recovered_10003ff0 wm_lua_show_banner
void wm_lua_show_help(void);
#define recovered_10003ff4 wm_lua_show_help
void wm_lua_write(char *param_1,int param_2);
#define recovered_10003ff8 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10003ffc wm_lua_writeline
extern uint8_t pf_module_state[];
uint recovered_10001ba4(byte *param_1,int *param_2);
void recovered_100032c4(char *param_1);
void recovered_100032f8(int param_1);
void recovered_10003308(int *param_1,int param_2,uint param_3);
void recovered_100034cc(char *param_1,byte *param_2);
void * recovered_10003704(void *owner);
void recovered_100037f0(int param_1,int *param_2);
void recovered_10003944(int param_1,int *param_2);
void recovered_10003ab4(int *param_1,int param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
