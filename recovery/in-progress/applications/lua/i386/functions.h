/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
uint _Unwind_SjLj_Register(undefined4 *param_1);
#define recovered_10002cf4 _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(undefined4 *param_1);
#define recovered_10002cfa _Unwind_SjLj_Resume
uint _Unwind_SjLj_Unregister(undefined4 *param_1);
#define recovered_10002d00 _Unwind_SjLj_Unregister
undefined4 * _ZN6winter3lua5LuaVMC1Ev(undefined4 *param_1);
#define recovered_10002d12 _ZN6winter3lua5LuaVMC1Ev
int * _ZN6winter3lua5LuaVMD1Ev(int *param_1);
#define recovered_10002d18 _ZN6winter3lua5LuaVMD1Ev
void _ZN6winter3lua8LuaValueC1Ev(undefined1 *param_1);
#define recovered_10002d1e _ZN6winter3lua8LuaValueC1Ev
void _ZSt9terminatev(void);
#define recovered_10002d2a _ZSt9terminatev
void _ZdlPv(void *data);
#define recovered_10002d30 _ZdlPv
void * _Znwm(ulong size);
#define recovered_10002d36 _Znwm
void __cxa_begin_catch(int param_1);
#define recovered_10002d3c __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10002d42 __cxa_end_catch
void wm_lua_flush_output(void);
#define recovered_10002d48 wm_lua_flush_output
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
#define recovered_10002d4e wm_lua_readline
void wm_lua_show_banner(void);
#define recovered_10002d54 wm_lua_show_banner
void wm_lua_show_help(void);
#define recovered_10002d5a wm_lua_show_help
void wm_lua_write(char *param_1,int param_2);
#define recovered_10002d60 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10002d66 wm_lua_writeline
typedef struct { uint32_t words[13]; } pf_native_result_52;
typedef struct { uint32_t words[3]; } pf_native_result_12;
extern pf_native_result_52 _ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE(void *p0,void *p1);
__attribute__((used,noinline)) static void pf_command_result_10002d06(void *out,void *p0,void *p1){ pf_native_result_52 value=_ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE(p0,p1);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10002d06 pf_command_result_10002d06
extern pf_native_result_52 _ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_(void *p0,void *p1,void *p2);
__attribute__((used,noinline)) static void pf_command_result_10002d0c(void *out,void *p0,void *p1,void *p2){ pf_native_result_52 value=_ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_(p0,p1,p2);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10002d0c pf_command_result_10002d0c
extern pf_native_result_12 _ZNK6winter3lua8LuaValue8toStringEv(void *p0);
__attribute__((used,noinline)) static void pf_command_result_10002d24(void *out,void *p0){ pf_native_result_12 value=_ZNK6winter3lua8LuaValue8toStringEv(p0);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10002d24 pf_command_result_10002d24
extern uint8_t pf_module_state[];
uint recovered_10000bd0(int param_1,int param_2);
void recovered_100024d0(char *arg_ecx);
void recovered_10002510(int param_1);
void recovered_10002530(int *param_1,int param_2,uint param_3);
void recovered_100026a0(char *arg_ecx,char *arg_edx);
void recovered_100028d0(int param_1);
void recovered_10002980(int param_1,int *param_2);
void recovered_10002a70(int param_1,int *param_2);
int * recovered_10002b60(int *param_1,int param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
