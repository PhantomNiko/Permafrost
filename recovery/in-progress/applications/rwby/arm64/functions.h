/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
typedef struct { uint32_t words[6]; } pf_native_result_24;
void _Unwind_Resume(void);
#define recovered_10001d34 _Unwind_Resume
void _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
#define recovered_10001d40 _ZN6winter4ruby6RubyVM12bindFunctionERKN2wm6stringENS2_8functionIFNS0_9RubyValueERS1_RKNS2_6vectorIS7_EEEEE
long * _ZN6winter4ruby6RubyVMC1Ev(long *param_1);
#define recovered_10001d64 _ZN6winter4ruby6RubyVMC1Ev
undefined8 * _ZN6winter4ruby6RubyVMD1Ev(undefined8 *param_1);
#define recovered_10001d70 _ZN6winter4ruby6RubyVMD1Ev
char * _ZNK6winter4ruby9RubyValue8asStringEv(char *param_1);
#define recovered_10001d7c _ZNK6winter4ruby9RubyValue8asStringEv
void _ZSt9terminatev(void);
#define recovered_10001d94 _ZSt9terminatev
void _ZdlPv(void *param_1);
#define recovered_10001da0 _ZdlPv
void * _Znwm(ulong param_1);
#define recovered_10001dac _Znwm
undefined1 * __cxa_allocate_exception(ulong param_1);
#define recovered_10001db8 __cxa_allocate_exception
long __cxa_begin_catch(long param_1);
#define recovered_10001dc4 __cxa_begin_catch
void __cxa_end_catch(void);
#define recovered_10001dd0 __cxa_end_catch
void __cxa_free_exception(long param_1);
#define recovered_10001ddc __cxa_free_exception
void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3);
#define recovered_10001de8 __cxa_throw
void free(void *pointer);
#define recovered_10001df4 free
void wm_lua_flush_output(void);
#define recovered_10001e00 wm_lua_flush_output
bool wm_lua_readline(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
#define recovered_10001e0c wm_lua_readline
void wm_lua_write(char *param_1,long param_2);
#define recovered_10001e18 wm_lua_write
void wm_lua_writeline(void);
#define recovered_10001e24 wm_lua_writeline
undefined8 wmfs_read_entire_file(long param_1,undefined8 *param_2,ulong *param_3);
#define recovered_10001e30 wmfs_read_entire_file
typedef struct { uint32_t words[18]; } pf_native_result_72;
extern pf_native_result_72 _ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(void *p0,void *p1);
__attribute__((used,noinline)) static void pf_command_result_10001d4c(void *out,void *p0,void *p1){ pf_native_result_72 value=_ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE(p0,p1);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10001d4c pf_command_result_10001d4c
extern pf_native_result_72 _ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(void *p0,void *p1,void *p2);
__attribute__((used,noinline)) static void pf_command_result_10001d58(void *out,void *p0,void *p1,void *p2){ pf_native_result_72 value=_ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_(p0,p1,p2);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10001d58 pf_command_result_10001d58
extern pf_native_result_24 _ZNK6winter4ruby9RubyValue8toStringEv(void *p0);
__attribute__((used,noinline)) static void pf_command_result_10001d88(void *out,void *p0){ pf_native_result_24 value=_ZNK6winter4ruby9RubyValue8toStringEv(p0);__builtin_memcpy(out,&value,sizeof(value));}
#define recovered_10001d88 pf_command_result_10001d88
extern uint8_t pf_module_state[];
char recovered_100006d0(int param_1,long param_2);
void recovered_10000cd4(void);
void recovered_10000cf8(long param_1);
void recovered_10000d0c(long param_1);
void recovered_10000d1c(long param_1);
ulong recovered_10000d3c(undefined8 *text,char needle,ulong start);
long * recovered_10000d74(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4);
bool recovered_10000db0(undefined8 *param_1,byte *param_2);
long * recovered_10000e60(long *param_1,long *param_2);
long * recovered_10000ea4(long *param_1,long param_2);
void recovered_10000ee8(long *param_1,long param_2,ulong param_3);
long recovered_10000fd0(long param_1);
undefined8 recovered_10000ff4(long *param_1,long param_2,long *param_3);
void recovered_10001040(long *param_1);
void recovered_10001078(long *param_1,ulong param_2);
undefined8 * recovered_100010f0(undefined8 *param_1,long param_2,ulong param_3);
char * recovered_10001124(long capacity);
ulong recovered_10001140(long *param_1,char param_2,ulong param_3);
bool recovered_10001174(undefined8 *param_1,char *param_2);
bool recovered_100011c4(char *param_1,long param_2,char *param_3,long param_4);
undefined8 * recovered_100011fc(undefined8 *param_1);
void recovered_10001224(void);
void recovered_10001228(void *owner);
void recovered_1000122c(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4);
void recovered_10001320(void);
undefined8 * recovered_10001340(undefined8 *param_1,long param_2);
undefined8 * recovered_10001344(undefined8 *param_1);
undefined8 * recovered_10001348(undefined8 *param_1,long param_2);
void recovered_1000137c(undefined8 *param_1);
undefined1 * recovered_10001390(long param_1);
undefined8 * recovered_100013a8(undefined8 *param_1);
long * recovered_100013dc(long *param_1,undefined8 *param_2);
undefined8 * recovered_1000141c(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_10001450(undefined1 *param_1,undefined1 *param_2);
long * recovered_1000147c(long *param_1,long *param_2);
long * recovered_100014b0(long *param_1,long *param_2,long *param_3);
long * recovered_100014bc(long *param_1,long *param_2,long *param_3);
long * recovered_100014d4(long *param_1,long *param_2,long *param_3);
long * recovered_100014ec(long *param_1,long *param_2,long *param_3);
long * recovered_10001504(long *param_1,long *param_2,long *param_3);
void recovered_1000151c(long param_1,long *param_2,long *param_3);
void recovered_10001534(long param_1,long *param_2,long *param_3);
void recovered_1000154c(long *param_1,long *param_2);
void recovered_1000156c(long param_1,long *param_2,long *param_3);
void recovered_10001584(long *param_1,long *param_2);
void recovered_100015a4(long *param_1,long *param_2);
long recovered_100015c4(long param_1);
long * recovered_100015f4(long *param_1);
long * recovered_10001624(long *param_1,long *param_2);
long * recovered_10001630(long *param_1,long *param_2);
long * recovered_10001640(long *param_1,long *param_2);
long * recovered_10001650(long *param_1,long *param_2);
long * recovered_10001660(long *param_1,long *param_2);
void recovered_10001674(long param_1,long *param_2);
void recovered_10001688(long param_1,long *param_2);
void recovered_1000169c(long *param_1);
void recovered_10001704(long param_1,long *param_2);
void recovered_10001718(long *param_1);
void recovered_10001780(long *param_1);
void recovered_100017e8(void);
void recovered_100017ec(void *owner);
void recovered_100017f0(undefined1 *param_1,undefined8 param_2,void *param_3,undefined8 *param_4);
void recovered_100019c4(void);
void recovered_100019e4(long *param_1,long param_2,undefined8 *param_3);
long * recovered_10001a30(long *param_1,undefined8 *param_2);
long * recovered_10001a48(long *param_1,long param_2,ulong param_3);
void recovered_10001b2c(undefined8 *param_1);
ulong recovered_10001b54(void *text,char *needle,ulong count,ulong start);
void recovered_10001b8c(char *param_1,char *param_2);
ulong recovered_10001c40(long *param_1,char *param_2,ulong param_3,ulong param_4);

/* Original analysis identifiers for manual recovery units. */
