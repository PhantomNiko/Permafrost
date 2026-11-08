/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
extern uint8_t pf_module_state[];

/* Original analysis identifiers for manual recovery units. */
#define longdouble long double
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
int memcmp(const void *,const void *,unsigned long);
int strcmp(const char *,const char *);
int strncmp(const char *,const char *,unsigned long);
char *strchr(const char *,int);
static inline uint64_t pf_app_udiv(uint64_t a,uint32_t low,uint32_t high){return a/((uint64_t)low|((uint64_t)high<<32));}
static inline uint64_t pf_app_umod(uint64_t a,uint32_t low,uint32_t high){return a%((uint64_t)low|((uint64_t)high<<32));}
static inline int64_t pf_app_div(int64_t a,uint32_t low,uint32_t high){return a/(int64_t)((uint64_t)low|((uint64_t)high<<32));}
static inline uint64_t pf_app_udiv_full(uint64_t a,uint64_t b){uint64_t q=0,r=0;for(int i=63;i>=0;--i){unsigned carry=r>>63;r=(r<<1)|((a>>i)&1);if(carry||r>=b){r-=b;q|=1ULL<<i;}}return q;}
static inline uint64_t pf_app_umod_full(uint64_t a,uint64_t b){return a-pf_app_udiv_full(a,b)*b;}
static inline int64_t pf_app_div_full(int64_t a,int64_t b){uint64_t ua=a<0?0-(uint64_t)a:(uint64_t)a,ub=b<0?0-(uint64_t)b:(uint64_t)b,q=pf_app_udiv_full(ua,ub);return (a<0)!=(b<0)?0-q:q;}
#define UINT_00006814 (*(uint32_t *)(uintptr_t)0x00006814U)
#define UINT_00006818 (*(uint32_t *)(uintptr_t)0x00006818U)
#define UINT_0000682c (*(uint32_t *)(uintptr_t)0x0000682cU)
#define UINT_00006834 (*(uint32_t *)(uintptr_t)0x00006834U)
#define UINT_00006838 (*(uint32_t *)(uintptr_t)0x00006838U)
#define UINT_0000683c (*(uint32_t *)(uintptr_t)0x0000683cU)
#define UINT_00006840 (*(uint32_t *)(uintptr_t)0x00006840U)
#define UINT_0000684c (*(uint32_t *)(uintptr_t)0x0000684cU)
#define UINT_00006850 (*(uint32_t *)(uintptr_t)0x00006850U)
#define UINT_00006854 (*(uint32_t *)(uintptr_t)0x00006854U)
#define UINT_00006858 (*(uint32_t *)(uintptr_t)0x00006858U)
#define UINT_00006868 (*(uint32_t *)(uintptr_t)0x00006868U)
#define UINT_00006874 (*(uint32_t *)(uintptr_t)0x00006874U)
#define UINT_00006878 (*(uint32_t *)(uintptr_t)0x00006878U)
#define UINT_0000687c (*(uint32_t *)(uintptr_t)0x0000687cU)
#define UINT_00006884 (*(uint32_t *)(uintptr_t)0x00006884U)
#define UINT_00006888 (*(uint32_t *)(uintptr_t)0x00006888U)
#define UINT_0000688c (*(uint32_t *)(uintptr_t)0x0000688cU)
#define UINT_00006890 (*(uint32_t *)(uintptr_t)0x00006890U)
#define UINT_000068b8 (*(uint32_t *)(uintptr_t)0x000068b8U)
#define UINT_000068bc (*(uint32_t *)(uintptr_t)0x000068bcU)
#define UINT_000068c0 (*(uint32_t *)(uintptr_t)0x000068c0U)
#define UINT_000068c8 (*(uint32_t *)(uintptr_t)0x000068c8U)
#define UINT_000068cc (*(uint32_t *)(uintptr_t)0x000068ccU)
#define UINT_000068d0 (*(uint32_t *)(uintptr_t)0x000068d0U)
#define UINT_000068d4 (*(uint32_t *)(uintptr_t)0x000068d4U)
#define UINT_000068d8 (*(uint32_t *)(uintptr_t)0x000068d8U)
#define UINT_000068dc (*(uint32_t *)(uintptr_t)0x000068dcU)
#define UINT_000068e0 (*(uint32_t *)(uintptr_t)0x000068e0U)
#define UINT_000068e4 (*(uint32_t *)(uintptr_t)0x000068e4U)
#define UINT_000068e8 (*(uint32_t *)(uintptr_t)0x000068e8U)
#define UINT_000068f4 (*(uint32_t *)(uintptr_t)0x000068f4U)
#define UINT_000068f8 (*(uint32_t *)(uintptr_t)0x000068f8U)
#define UINT_00006910 (*(uint32_t *)(uintptr_t)0x00006910U)
#define UINT_0000691c (*(uint32_t *)(uintptr_t)0x0000691cU)
#define UINT_00006920 (*(uint32_t *)(uintptr_t)0x00006920U)
#define UINT_0000695c (*(uint32_t *)(uintptr_t)0x0000695cU)
#define UINT_00006968 (*(uint32_t *)(uintptr_t)0x00006968U)
#define UINT_0000696c (*(uint32_t *)(uintptr_t)0x0000696cU)
#define UINT_00006978 (*(uint32_t *)(uintptr_t)0x00006978U)
#define UINT_0000698c (*(uint32_t *)(uintptr_t)0x0000698cU)
extern uint8_t pf_module_state[];
int recovered_10000a90(void);
undefined4 recovered_10003510(char *in_ECX);
void recovered_10003e90(undefined1 *in_ECX);
void recovered_10003f90(void);
int recovered_10004490(int in_ECX,char *in_EDX,undefined4 param_3,char param_4);
void recovered_10004770(char *in_ECX,int in_EDX);
int recovered_10004ab0(void);
void recovered_10004d60(void);
void recovered_10004de0(int in_ECX);
void recovered_10004f00(char *in_ECX);
void recovered_10005670(int in_ECX);
void recovered_10009370(int *in_ECX);
void recovered_10009460(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,
                       int param_7);
void recovered_10009560(int in_ECX,int in_EDX,int param_3,int param_4);
int * recovered_100096c0(int *in_ECX);
void recovered_100099d0(int in_ECX,int in_EDX,int param_3,int param_4);
undefined4 recovered_10009b30(char *in_ECX,int in_EDX,uint param_3,int param_4,int param_5);
undefined4 recovered_10009cd0(int in_ECX,int in_EDX,int param_3,int param_4);
undefined4 recovered_10009e10(int in_ECX);
void recovered_1000a060(undefined4 *in_ECX);
undefined4 recovered_1000a0e0(int in_ECX_00);
uint recovered_1000ada0(int in_ECX,char *in_EDX,void *param_3);
undefined1 * recovered_1000ae40(undefined1 *in_ECX);
undefined4 recovered_1000aea0(int in_ECX,int in_EDX);
undefined4 recovered_1000af00(undefined4 in_EAX,byte *in_ECX,char *in_EDX);
undefined4 recovered_1000af80(undefined *in_ECX);
void recovered_1000b180(int in_ECX,uint in_EDX,char param_3,char *param_4,int param_5);
void recovered_1000b4a0(char *in_ECX,int in_EDX);
int recovered_1000b630(undefined4 *in_ECX);
void recovered_1000b9e0(int in_ECX);
void recovered_1000c1b0(int in_ECX);
uint recovered_1000c260(int in_ECX,char *in_EDX,void *param_3,uint param_4,uint *param_5);
void recovered_1000c310(void);
void recovered_1000c710(void);
void recovered_1000c940(void);
void recovered_1000ca80(void);
void recovered_1000ce80(char *in_ECX);
void recovered_1000e0a0(void);
void recovered_1000e1d0(void);
void recovered_1000e450(void);
void recovered_1000e590(void);
int * recovered_1000e6c0(int *in_ECX,int *in_EDX);
void recovered_1000e9f0(int *in_ECX,int in_EDX,int param_3,uint param_4,uint param_5);
void recovered_1000eb60(uint in_ECX,uint in_EDX,uint param_3,byte param_4);
void recovered_1000ec70(int in_ECX,int in_EDX,char *param_3,uint param_4,uint param_5,uint param_6);
uint recovered_1000ee50(int in_ECX,int in_EDX,int *param_3);
void recovered_1000efc0(int in_ECX,int in_EDX,int param_3,int param_4,uint param_5);
int recovered_1000f280(int in_ECX,int in_EDX,int param_3,char *param_4,undefined2 param_5,
                      undefined1 in_stack_0000000e);
undefined3 *
recovered_1000f370(int in_ECX,int in_EDX,int param_3,int param_4,uint3 param_5,byte param_6);
byte recovered_1000f540(int in_ECX);
bool recovered_1000f620(char *in_ECX,int in_EDX);
uint * recovered_1000f6e0(char *in_ECX,uint *in_EDX);
bool recovered_1000fd50(char *in_ECX);
char * recovered_1000ff40(char *in_ECX);
void recovered_1000ffc0(char *in_ECX,char *in_EDX,char *param_3);
void recovered_100100c0(int in_ECX,int in_EDX,int param_3,int param_4,uint3 param_5,int param_6);
void recovered_100104e0(char *in_ECX);
undefined4
recovered_100110a0(int in_ECX,int in_EDX,int param_3,int param_4,int *param_5,undefined4 *param_6);
void recovered_100112e0(int in_ECX);
void recovered_10011cc0(char *in_ECX);
void recovered_10014ef0(int in_ECX_00,int in_EDX,char *param_3,char param_4);
void recovered_10015400(char *in_ECX,uint in_EDX,uint param_3);
void recovered_100154f0(int in_ECX,int in_EDX,int param_3,int param_4,byte param_5);
void recovered_10015750(uint in_ECX,uint in_EDX,uint param_3,uint param_4);
void recovered_10015a70(char *in_ECX,char *in_EDX,char *param_3,uint param_4);
void recovered_10015bb0(uint in_ECX,uint in_EDX,char *param_3,uint param_4);
uint recovered_10015df0(char *in_ECX,uint in_EDX);
void recovered_10016070(char *in_ECX,uint in_EDX,uint param_3,uint param_4);
void recovered_100161b0(char *in_ECX,char *in_EDX,int param_3);
void recovered_100162d0(undefined1 *in_ECX,int in_EDX);
void recovered_100163f0(int *in_ECX,int in_EDX);
void recovered_100165a0(int in_ECX,int in_EDX_00,int param_3,int param_4);
undefined4 recovered_10016d30(void);
uint recovered_10016e50(int in_ECX,uint in_EDX,byte param_3,byte param_4);
void recovered_10016ff0(int in_ECX);
void recovered_100172d0(int in_ECX,undefined4 in_EDX);
int recovered_10017a90(int in_ECX,int in_EDX);
void recovered_10017c00(uint in_ECX);
void recovered_10017c90(char *in_ECX);
void recovered_10017cd0(int in_ECX);
void recovered_10017d50(int in_ECX);
void recovered_10017db0(int in_ECX);
undefined4 recovered_10017e00(int in_ECX,int in_EDX,int param_3);
int recovered_10018580(int in_ECX,int in_EDX,int param_3);
undefined4 recovered_10018610(int in_ECX,int in_EDX,int param_3);
int recovered_10018900(int in_ECX,int in_EDX,int param_3);
void recovered_10018a80(char *in_ECX,undefined1 *in_EDX);
void recovered_10018b50(char *in_ECX,int in_EDX,char *param_3);
void recovered_10019130(void);
void recovered_10019200(int in_ECX);
void recovered_100192f0(void);
void recovered_100193b0(char *in_ECX,int in_EDX);
void recovered_10019840(undefined *in_ECX);
void recovered_10019a00(int in_ECX);
void recovered_10019b20(int in_ECX);
void recovered_10019dc0(int in_ECX);
void recovered_10019e90(int in_ECX);
void recovered_10019fa0(int in_ECX);
void recovered_1001a020(int in_ECX,undefined4 in_EDX);
void recovered_1001a490(int in_ECX,uint in_EDX,undefined1 param_3);
void recovered_1001a5b0(int in_ECX);
void recovered_1001a8e0(undefined4 in_ECX,int in_EDX,undefined4 param_3,char *param_4,char *param_5);
void recovered_1001aa40(char *in_ECX,char *in_EDX);
void recovered_1001aac0(char *in_ECX,uint in_EDX,char *param_3);
bool recovered_1001abc0(int in_ECX);
undefined4 recovered_1001b080(char *in_ECX,char *in_EDX);
uint recovered_1001b1a0(char *in_ECX);
void recovered_1001b5a0(char *in_ECX,int in_EDX,int param_3,char param_4);
void recovered_1001b720(void);
void recovered_1001b9e0(int in_ECX,char *in_EDX,char *param_3);
void recovered_1001ba80(undefined4 in_ECX,char *in_EDX,undefined4 param_3);
void recovered_1001bb00(void);
void recovered_1001c030(char *in_ECX,undefined4 in_EDX);
void recovered_1001c160(undefined4 in_ECX,undefined4 in_EDX,char *param_3,char *param_4,
                       undefined4 param_5,char param_6);
void recovered_1001c350(char *in_ECX,char *in_EDX);
void recovered_1001c8a0(uint in_ECX);
int recovered_1001cb60(int in_ECX,int in_EDX,int param_3);
void recovered_1001ccc0(int in_ECX,uint in_EDX);
void recovered_1001ce40(int in_ECX,int in_EDX);
void recovered_1001cf90(int in_ECX,undefined4 in_EDX,int *param_3);
undefined4
recovered_1001d260(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong *param_7);
void recovered_1001d460(char *in_ECX);
void recovered_1001d850(int in_ECX,int *in_EDX,int param_3,int param_4,int param_5,int param_6);
void recovered_1001dad0(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6);
void recovered_1001dc90(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5);
void recovered_1001dda0(int in_ECX);

/* Original analysis identifiers for manual recovery units. */
