/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined4 *param_1);
#define recovered_10003fa0 _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(undefined4 *param_1);
#define recovered_10003fa4 _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined4 *param_1);
#define recovered_10003fa8 _Unwind_SjLj_Unregister
void _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(undefined4 *param_1,int *param_2,undefined4 *param_3);
#define recovered_10003fac _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE
undefined4 * _ZN6winter4ruby6RubyVMC1Ev(undefined4 *param_1);
#define recovered_10003fb8 _ZN6winter4ruby6RubyVMC1Ev
undefined4 * _ZN6winter4ruby6RubyVMD1Ev(undefined4 *param_1);
#define recovered_10003fbc _ZN6winter4ruby6RubyVMD1Ev
char * _ZNK6winter4ruby9RubyValue8asStringEv(char *param_1);
#define recovered_10003fc0 _ZNK6winter4ruby9RubyValue8asStringEv
void _ZSt9terminatev(void);
#define recovered_10003fc8 _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_10003fcc _ZdlPv
void * _Znwm(ulong param_1);
#define recovered_10003fd0 _Znwm
undefined4 * __cxa_allocate_exception(uint param_1);
#define recovered_10003fd4 __cxa_allocate_exception
void __cxa_begin_catch(int param_1);
#define recovered_10003fd8 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10003fdc __cxa_end_catch
void __cxa_free_exception(int param_1);
#define recovered_10003fe0 __cxa_free_exception
void __cxa_throw(int param_1,undefined4 param_2,undefined4 param_3);
#define recovered_10003fe4 __cxa_throw
void free(void *pointer);
#define recovered_10003fe8 free
void wm_lua_flush_output(void);
#define recovered_10003fec wm_lua_flush_output
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
#define recovered_10003ff0 wm_lua_readline
void wm_lua_write(char *param_1,int param_2);
#define recovered_10003ff4 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10003ff8 wm_lua_writeline
undefined4 wmfs_read_entire_file(int param_1,undefined4 *param_2,ulong *param_3);
#define recovered_10003ffc wmfs_read_entire_file
typedef struct { uint32_t words[11]; } pf_native_result_44;
extern pf_native_result_44 _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(void *p0,void *p1);
__attribute__((used,noinline)) static void pf_command_result_10003fb0(void *out,void *p0,void *p1){ pf_native_result_44 value=_ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(p0,p1);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10003fb0 pf_command_result_10003fb0
extern pf_native_result_44 _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(void *p0,void *p1,void *p2);
__attribute__((used,noinline)) static void pf_command_result_10003fb4(void *out,void *p0,void *p1,void *p2){ pf_native_result_44 value=_ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(p0,p1,p2);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10003fb4 pf_command_result_10003fb4
typedef struct { uint32_t words[3]; } pf_native_result_12;
extern pf_native_result_12 _ZNK6winter4ruby9RubyValue8toStringEv(void *p0);
__attribute__((used,noinline)) static void pf_command_result_10003fc4(void *out,void *p0){ pf_native_result_12 value=_ZNK6winter4ruby9RubyValue8toStringEv(p0);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10003fc4 pf_command_result_10003fc4
extern uint8_t pf_module_state[];
uint recovered_10000eac(int *param_1,int param_2);
void recovered_100023fc(char *param_1);
void recovered_10002430(int param_1);
void recovered_10002440(int *param_1,int param_2,uint param_3);
void recovered_10002604(void);
void recovered_10002608(void *param_1);
void recovered_1000260c(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void recovered_100029b0(void);
int * recovered_100029d8(int *param_1,int param_2);
int * recovered_10002a34(int *param_1);
int recovered_10002a64(int param_1);
void recovered_10002b50(int *param_1);
undefined1 * recovered_10002b84(int param_1);
void recovered_10002ba4(int param_1,int *param_2);
void recovered_10002cf8(int param_1,int *param_2);
void recovered_10002e68(void);
void recovered_10002e6c(void *param_1);
void recovered_10002e70(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void recovered_100033b4(void);
void recovered_100033dc(int *param_1,int param_2,undefined4 *param_3);
void recovered_10003530(int *param_1,int param_2,uint param_3);
void recovered_10003788(char *param_1,byte *param_2);

/* Original analysis identifiers for manual recovery units. */
