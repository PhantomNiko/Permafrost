/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined8 *param_1);
#define recovered_10003280 _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(undefined8 *param_1,byte *in_RSI);
#define recovered_10003286 _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined8 *param_1);
#define recovered_1000328c _Unwind_SjLj_Unregister
void _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(undefined8 *param_1,long *param_2,undefined8 *param_3);
#define recovered_10003292 _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE
void * _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(void *output,void *argument1,void *argument2);
#define recovered_10003298 _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE
void * _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(void *output,void *argument1,void *argument2,void *argument3);
#define recovered_1000329e _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_
void _ZN6winter4ruby6RubyVMC1Ev(undefined8 *param_1);
#define recovered_100032a4 _ZN6winter4ruby6RubyVMC1Ev
void _ZN6winter4ruby6RubyVMD1Ev(undefined8 *param_1);
#define recovered_100032aa _ZN6winter4ruby6RubyVMD1Ev
char * _ZNK6winter4ruby9RubyValue8asStringEv(char *param_1);
#define recovered_100032b0 _ZNK6winter4ruby9RubyValue8asStringEv
void * _ZNK6winter4ruby9RubyValue8toStringEv(void *output,void *argument1);
#define recovered_100032b6 _ZNK6winter4ruby9RubyValue8toStringEv
void _ZSt9terminatev(void);
#define recovered_100032bc _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_100032c2 _ZdlPv
void * _Znwm(long param_1);
#define recovered_100032c8 _Znwm
long __cxa_allocate_exception(long param_1);
#define recovered_100032ce __cxa_allocate_exception
long __cxa_begin_catch(long param_1);
#define recovered_100032d4 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_100032da __cxa_end_catch
void __cxa_free_exception(long param_1);
#define recovered_100032e0 __cxa_free_exception
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3);
#define recovered_100032e6 __cxa_throw
void free(void *pointer);
#define recovered_100032ec free
void wm_lua_flush_output(void);
#define recovered_100032f2 wm_lua_flush_output
bool wm_lua_readline(long param_1,long param_2,undefined8 param_3,undefined1 param_4);
#define recovered_100032f8 wm_lua_readline
void wm_lua_write(long param_1,long param_2);
#define recovered_100032fe wm_lua_write
void wm_lua_writeline(void);
#define recovered_10003304 wm_lua_writeline
ulong wmfs_read_entire_file(long param_1,undefined8 *param_2,ulong *param_3);
#define recovered_1000330a wmfs_read_entire_file
extern uint8_t pf_module_state[];
ulong recovered_10000670(uint param_1,long param_2);
void recovered_100019e0(long param_1);
void recovered_10001a10(long *param_1,long param_2);
void recovered_10001a20(long *param_1,long param_2,ulong param_3);
void recovered_10001cd0(void);
void recovered_10001ce0(void *param_1);
undefined1 *
recovered_10001cf0(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4);
void recovered_100020b0(void);
void recovered_100020d0(undefined8 *param_1,long param_2);
void recovered_10002130(undefined8 *param_1);
void recovered_10002150(long param_1);
void recovered_10002210(undefined8 *param_1);
undefined1 * recovered_10002240(long param_1);
void recovered_10002260(long param_1,long *param_2);
void recovered_10002360(long param_1,long *param_2);
void recovered_10002470(void);
void recovered_10002480(void *param_1);
undefined1 *
recovered_10002490(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4);
void recovered_10002a50(void);
long * recovered_10002a70(long *param_1,long param_2,undefined8 *param_3);
long * recovered_10002bc0(long *param_1,long param_2,ulong param_3);
void recovered_10003060(char *param_1,char *param_2);

/* Original analysis identifiers for manual recovery units. */
