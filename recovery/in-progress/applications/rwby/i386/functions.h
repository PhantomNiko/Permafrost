/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
void _Unwind_SjLj_Register(undefined4 *param_1);
#define recovered_100039ac _Unwind_SjLj_Register
void _Unwind_SjLj_Resume(int in_stack_00000004);
#define recovered_100039b2 _Unwind_SjLj_Resume
void _Unwind_SjLj_Unregister(undefined4 *param_1);
#define recovered_100039b8 _Unwind_SjLj_Unregister
void _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(undefined4 *param_1,int *param_2,undefined4 *param_3);
#define recovered_100039be _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE
void _ZN6winter4ruby6RubyVMC1Ev(undefined8 ****param_1);
#define recovered_100039d0 _ZN6winter4ruby6RubyVMC1Ev
void _ZN6winter4ruby6RubyVMD1Ev(undefined4 *param_1);
#define recovered_100039d6 _ZN6winter4ruby6RubyVMD1Ev
char * _ZNK6winter4ruby9RubyValue8asStringEv(char *param_1);
#define recovered_100039dc _ZNK6winter4ruby9RubyValue8asStringEv
void _ZSt9terminatev(void);
#define recovered_100039e8 _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_100039ee _ZdlPv
void * _Znwm(int param_1);
#define recovered_100039f4 _Znwm
undefined1 * __cxa_allocate_exception(int param_1);
#define recovered_100039fa __cxa_allocate_exception
int __cxa_begin_catch(int param_1);
#define recovered_10003a00 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10003a06 __cxa_end_catch
void __cxa_free_exception(int param_1);
#define recovered_10003a0c __cxa_free_exception
void __cxa_throw(int param_1,undefined4 param_2,undefined4 param_3);
#define recovered_10003a12 __cxa_throw
void free(void *pointer);
#define recovered_10003a18 free
void wm_lua_flush_output(void);
#define recovered_10003a1e wm_lua_flush_output
bool wm_lua_readline(int param_1,int param_2,undefined4 param_3,undefined1 param_4);
#define recovered_10003a24 wm_lua_readline
void wm_lua_write(char *param_1,int param_2);
#define recovered_10003a2a wm_lua_write
void wm_lua_writeline(void);
#define recovered_10003a30 wm_lua_writeline
undefined4 wmfs_read_entire_file(int param_1,undefined4 *param_2,ulong *param_3);
#define recovered_10003a36 wmfs_read_entire_file
typedef struct { uint32_t words[11]; } pf_native_result_44;
extern pf_native_result_44 _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(void *p0,void *p1);
__attribute__((used,noinline)) static void pf_command_result_100039c4(void *out,void *p0,void *p1){ pf_native_result_44 value=_ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(p0,p1);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_100039c4 pf_command_result_100039c4
extern pf_native_result_44 _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(void *p0,void *p1,void *p2);
__attribute__((used,noinline)) static void pf_command_result_100039ca(void *out,void *p0,void *p1,void *p2){ pf_native_result_44 value=_ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(p0,p1,p2);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_100039ca pf_command_result_100039ca
typedef struct { uint32_t words[3]; } pf_native_result_12;
extern pf_native_result_12 _ZNK6winter4ruby9RubyValue8toStringEv(void *p0);
__attribute__((used,noinline)) static void pf_command_result_100039e2(void *out,void *p0){ pf_native_result_12 value=_ZNK6winter4ruby9RubyValue8toStringEv(p0);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_100039e2 pf_command_result_100039e2
extern uint8_t pf_module_state[];
int recovered_10000f60(uint argc,char **argv);
void recovered_10002500(char *arg_ecx);
void recovered_10002540(int param_1);
void recovered_10002560(int *param_1,int param_2,uint param_3);
void recovered_100026d0(void);
void recovered_100026e0(void *param_1);
undefined1 *
recovered_10002700(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void recovered_10002ab0(void);
void recovered_10002ae0(int *param_1,int param_2);
void recovered_10002b60(int *param_1);
void recovered_10002b90(int param_1);
void recovered_10002c40(int *param_1);
undefined1 * recovered_10002c80(int param_1);
void recovered_10002cb0(int param_1,int *param_2);
void recovered_10002da0(int param_1,int *param_2);
void recovered_10002e90(void);
void recovered_10002ea0(void *param_1);
undefined1 *
recovered_10002ec0(undefined1 *param_1,undefined4 param_2,void *param_3,undefined4 *param_4);
void recovered_10003480(void);
int * recovered_100034b0(int *param_1,int param_2,undefined4 *param_3);
int * recovered_100035e0(int *param_1,int param_2,uint param_3);
void recovered_10003780(char *arg_ecx,char *arg_edx);

/* Original analysis identifiers for manual recovery units. */
