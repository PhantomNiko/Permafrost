/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
extern unsigned char pf_module_state[];
/* Permafrost recovered SIMD semantics; Pooka's Free Software License. */
typedef struct { uint64_t words[3]; } pf_blob24;
typedef uint64_t uint5;
#define PF_PART16(value,offset) (*(uint128 *)((uint8_t *)&(value)+(offset)))
static inline void WaitForEvent(void) { __asm__ volatile("wfe"); }
__attribute__((noreturn)) static inline uintptr_t SoftwareBreakpoint(unsigned n,uintptr_t pc) { (void)n;(void)pc;__builtin_trap(); }
static inline uint64_t NEON_sqadd(uint64_t a,uint64_t b,unsigned lane) {
 uint64_t result=0;
 for(unsigned i=0;i<2;++i) {
  int64_t x=(int32_t)(a>>(32*i)),y=(int32_t)(b>>(32*i)),z=x+y;
  if(z>2147483647)z=2147483647;if(z<(-2147483647-1))z=(-2147483647-1);
  result|=(uint64_t)(uint32_t)z<<(i*32);
 } (void)lane;return result;
}
static inline uint64_t NEON_ucvtf(uint64_t a) { return pf_double_bits((double)a); }
static inline uint64_t NEON_umaxv(uint64_t a,unsigned lane) {
 uint64_t mask=lane==8?~0ULL:((1ULL<<(lane*8))-1),result=0;
 for(unsigned i=0;i<8/lane;++i){uint64_t v=(a>>(i*lane*8))&mask;if(v>result)result=v;}return result;
}
static inline uint128 NEON_fmov(uint64_t bits,unsigned lane) { (void)lane;return ((uint128)bits<<64)|bits; }

#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
#define ZEXT812(value) ((uint128)(uint64_t)(value))

#define Reset (*(uint8_t *)(uintptr_t)0)
#define SUB168(a,b) ((uint64_t)((uint128)(a)>>((b)*8)))
/* Permafrost library ARM64 intrinsics; Pooka's Free Software License. */
static inline uint64_t pf_neon_bound(uint64_t a,uint64_t b,unsigned lane,int maximum) {
 uint64_t result=0;unsigned bits=lane*8;
 uint64_t mask=bits==64?~0ULL:((1ULL<<bits)-1);
 for(unsigned i=0;i<8/lane;++i){
  int64_t x=(int64_t)((a>>(i*bits))<<(64-bits))>>(64-bits);
  int64_t y=(int64_t)((b>>(i*bits))<<(64-bits))>>(64-bits);
  result|=((uint64_t)((maximum?x>y:x<y)?x:y)&mask)<<(i*bits);
 }return result;
}
#define NEON_smax(a,b,lane) pf_neon_bound(a,b,lane,1)
#define NEON_smin(a,b,lane) pf_neon_bound(a,b,lane,0)
__attribute__((always_inline)) static inline uintptr_t pf_current_sp(void){uintptr_t value;__asm__ volatile("mov %0,sp":"=r"(value));return value;}
static inline uintptr_t pf_ctr(void){uintptr_t value;__asm__ volatile("mrs %0,ctr_el0":"=r"(value));return value;}
#define ctr_el0 pf_ctr()
static inline void DC_CVAC(uintptr_t value){__asm__ volatile("dc cvac,%0"::"r"(value):"memory");}
static inline void pf_dsb(void){__asm__ volatile("dsb sy"::: "memory");}
static inline void pf_isb(void){__asm__ volatile("isb"::: "memory");}
#undef NAN
#define NAN(value) __builtin_isnan(pf_bits_double(value))

#define DataSynchronizationBarrier(...) pf_dsb()
#define InstructionSynchronizationBarrier(...) pf_isb()

extern uint8_t pf_module_state[];









































































































































































































































































/* Original analysis identifiers for manual recovery units. */
#define pf_varargs_1000240c_1 recovered_1000240c
static inline uint64_t pf_ui_min_u32x2(uint64_t a,uint64_t b,int width){uint32_t al=a,ah=a>>32,bl=b,bh=b>>32;return (uint64_t)(al<bl?al:bl)|((uint64_t)(ah<bh?ah:bh)<<32);}
extern uint8_t pf_module_state[];
void recovered_100005b8(void);
void recovered_100005c4(void);
ulong recovered_10000848(void);
long recovered_10000894(void);
ulong recovered_100008d4(void);
long recovered_10000910(void);
ulong * recovered_10000940(long param_1);
ulong recovered_10000a18(ulong param_1,uint param_2);
ulong recovered_10000a5c(ulong param_1,uint param_2);
long recovered_10000aa8(long param_1,uint param_2);
ulong recovered_10000af8(ulong param_1,ulong param_2);
ulong recovered_10000b00(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_10000b60(undefined8 param_1,undefined8 param_2);
long recovered_10000b80(ulong param_1,ulong param_2);
long recovered_10000bc0(long param_1,long param_2);
void recovered_10000c0c(void);
int recovered_10000c14(int param_1);
void * recovered_10000c20(uintptr_t size);
void recovered_10000c64(void *pointer);
void * recovered_10000ca8(void *pointer,uintptr_t size);
void * recovered_10000cf4(void *destination,void *source,ulong count);
void * recovered_10000dcc(void *destination,void *source,ulong count);
void * recovered_10000ee0(void *destination,int value,ulong count);
void recovered_10000f78(ulong *param_1,ulong param_2);
void recovered_10000f7c(ulong *param_1,ulong param_2);
int recovered_10000f80(void *left,void *right,ulong count);
int recovered_100010ec(long param_1,long param_2);
bool recovered_1000111c(int param_1);
bool recovered_1000112c(int param_1);
bool recovered_1000113c(uint param_1);
bool recovered_10001150(uint param_1);
bool recovered_1000116c(int param_1);
bool recovered_1000117c(int param_1);
int recovered_1000118c(int param_1);
int recovered_100011a0(int param_1);
ulong recovered_100011b4(char *text);
int recovered_100011d8(char *left,char *right);
int recovered_10001200(char *left,char *right);
void recovered_10001204(long param_1,long param_2);
void recovered_1000121c(char *param_1);
char * recovered_10001258(char *param_1,char param_2);
long recovered_10001280(long param_1,char *param_2);
char * recovered_100012c8(char *param_1,char *param_2);
char * recovered_10001308(char *param_1,char *param_2);
undefined * recovered_10001344(void);
undefined ** recovered_10001350(void);
void recovered_1000135c(undefined8 *param_1);
double recovered_100013d4(double param_1,uint param_2);
uint128 recovered_10001408(double param_1,int *param_2);
uint128 recovered_1000147c(double param_1,double param_2);
uint128 recovered_100014a0(double param_1,double param_2);
uint128 recovered_10001500(double param_1);
uint128 recovered_1000151c(double param_1);
uint128 recovered_10001548(double param_1);
uint128 recovered_10001584(double param_1);
long recovered_10001630(double param_1);
uint128 recovered_10001644(double param_1);
void recovered_10001698(double param_1);
uint128 recovered_100016dc(double in_d0);
uint128 recovered_10001728(double param_1);
long long recovered_10001738(double value);
unsigned long long recovered_10001798(double value);
double recovered_100017e8(unsigned long long value);
double recovered_10001810(long long value);
float recovered_10001834(float param_1,float param_2);
float recovered_10001868(int *in_x0,float param_2);
float recovered_10001880(uint in_w0,float param_2);
float recovered_10001898(float param_1,float param_2);
float recovered_100018b4(float param_1);
float recovered_100018d8(float param_1);
uint128 recovered_100018f0(double param_1);
float recovered_10001918(float param_1);
float recovered_10001930(float param_1);
float recovered_10001948(float param_1);
long recovered_10001960(double param_1);
float recovered_10001974(float param_1);
float recovered_1000198c(float param_1);
float recovered_100019a4(float param_1);
long recovered_100019b4(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_10001ab8(int param_1);
long recovered_10001ae8(byte *param_1,undefined8 *param_2,uint param_3);
uint128 recovered_10001c0c(byte *param_1,undefined8 *param_2);
float recovered_10001d9c(byte *in_x0,undefined8 *in_x1);
int recovered_10001db4(byte *param_1,ulong param_2,byte *param_3,double *param_4);
void recovered_100022dc(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_10002318(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_10002368(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_1000240c(char *buffer,uintptr_t capacity,char *format,...);
void recovered_10002434(ulong param_1,ulong param_2,ulong *param_3);
void recovered_100024bc(long param_1,ulong param_2,ulong *param_3);
bool recovered_1000252c(int param_1);
void recovered_10002674(char *param_1,long param_2);
void recovered_1000272c(int param_1);
void recovered_100027b8(void);
void recovered_100027c0(void);
void recovered_100027c8(char *param_1);
void recovered_1000282c(void);
void recovered_10002850(char *param_1);
void recovered_1000287c(void);
bool recovered_100028a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10002918(void);
void recovered_1000291c(void);
undefined8 recovered_10002920(void);
undefined4 * recovered_10002928(char *param_1,long param_2);
undefined8 recovered_10002b64(undefined8 param_1,undefined8 param_2);
undefined8 recovered_10002bb4(long param_1,ulong param_2);
undefined4 * recovered_10002c3c(char *param_1,long param_2,int *param_3);
undefined8 recovered_10002c70(int *param_1);
ulong recovered_10002cb4(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_10002de8(int *param_1);
long recovered_10002ecc(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10002fdc(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10003070(long param_1);
undefined8 recovered_10003094(int *param_1);
undefined1 recovered_10003108(long param_1);
undefined1 recovered_10003114(long param_1);
void recovered_10003120(long param_1);
uint recovered_10003134(uint param_1,long param_2);
undefined8 recovered_10003158(long param_1);
undefined8 recovered_10003190(undefined8 param_1);
undefined8 recovered_100031d4(long param_1,long param_2);
undefined8 recovered_10003270(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_100032d0(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10003370(long param_1,long param_2,long param_3);
undefined8 recovered_1000339c(void);
void recovered_100033a0(void);
undefined8 recovered_100033a4(void);
undefined8 recovered_100033a8(void);
undefined8 recovered_100033ac(void);
char * recovered_100033b0(long param_1,char param_2,long param_3);
int recovered_100033d4(char *left,char *right,ulong count);
char * recovered_10003404(int param_1);
undefined8 recovered_100034a4(void);
undefined8 recovered_100034a8(void);
void recovered_100034ac(void);
bool recovered_100034c0(int param_1);
__attribute__((naked,noreturn)) void recovered_1000358c(void *context);
__attribute__((naked,returns_twice)) int recovered_100035a0(void *context);
__attribute__((naked,noreturn)) void recovered_100035dc(void *context,int value);
void recovered_10003620(void);
undefined8 recovered_10003634(void);
void recovered_1000363c(long param_1);
long recovered_1000364c(long param_1);
void * recovered_1000366c(ulong param_1);
void * recovered_1000369c(ulong param_1);
void recovered_100036a0(void *param_1);
void recovered_100036b8(void *param_1);
void recovered_100036d0(void *param_1);
void recovered_100036e8(void *param_1);
undefined8 recovered_10003700(void);
uint recovered_10003708(uint *param_1);
void recovered_10003718(ulong *param_1);
void recovered_10003728(void);
undefined1 * recovered_1000372c(ulong param_1);
void recovered_10003774(long param_1);
long recovered_10003784(long param_1);
void recovered_1000378c(void);
void recovered_100037e4(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10003804(undefined8 *param_1);
void recovered_10003868(void);
void recovered_10003898(undefined8 *param_1);
void recovered_100038ac(undefined8 *param_1);
void recovered_100038d8(undefined8 *in_x0);
void recovered_100038e4(void);
undefined8 recovered_100038f0(undefined8 *param_1);
undefined8 recovered_10003910(undefined8 *param_1);
undefined8 recovered_100039ac(undefined8 *in_x0);
undefined8 recovered_100039b8(void);
void recovered_100039c0(void);
long recovered_100039cc(long *param_1,undefined8 param_2,long *param_3);
bool recovered_10003a0c(long *param_1,long *param_2);
void recovered_10003a98(void);
undefined8 recovered_10003a9c(void);
bool recovered_10003aa4(int param_1);
bool recovered_10003ab4(uint param_1);
bool recovered_10003aec(uint param_1);
bool recovered_10003b08(ulong param_1);
bool recovered_10003b20(uint param_1);
bool recovered_10003b38(ulong param_1);
bool recovered_10003b50(ulong param_1);
double recovered_10003b68(double value);
float recovered_10003c28(float value);
long double recovered_10003c44(long double value);
double recovered_10003c48(long end,long start);
uint128 recovered_10003c58(double param_1);
long recovered_10003ca4(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10003de8(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10003dec(long param_1,long *param_2,undefined2 *param_3);
ulong * recovered_10003fc4(uint param_1,long *param_2);
ulong recovered_100040b8(undefined8 *param_1);
ulong recovered_100040f0(byte *param_1,long param_2);
ulong recovered_1000411c(undefined8 *param_1);
void recovered_10004194(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4);
void recovered_100041e4(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_10004200(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_1000421c(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4);
void recovered_10004244(undefined8 *param_1,undefined8 *param_2);
void recovered_10004258(undefined8 *param_1,undefined8 *param_2);
void recovered_10004274(undefined8 *param_1,undefined8 *param_2,uint param_3);
void recovered_10004298(undefined8 *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_100042bc(int *param_1,undefined8 *param_2);
undefined8 recovered_100044b8(undefined8 param_1);
undefined8 recovered_10004500(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4);
ulong recovered_10004584(int *param_1,uint param_2,uint param_3);
ulong recovered_10004624(int *param_1,int param_2,uint param_3);
uint128 recovered_100046d8(int *param_1,byte *param_2,byte *param_3,ulong param_4,ulong param_5,uint param_6
                  ,undefined8 param_7);
uint32_t recovered_1000482c(ulong param_1,undefined4 param_2);
ulong recovered_10004854(ulong param_1,byte *param_2,long param_3);
uint128 recovered_1000487c(int *param_1,byte *param_2,int *param_3);
uint128 recovered_100048ac(int *param_1,ulong param_2);
undefined1 recovered_100048c4(int *param_1,int param_2,uint param_3);
undefined1 recovered_10004980(int *param_1,long param_2);
ulong recovered_100049d0(int *param_1,void *param_2);
bool recovered_10004b44(long param_1);
void recovered_10004b64(ulong *param_1);
undefined4 recovered_10004b78(undefined1 *param_1);
undefined8 recovered_10004d24(void);
bool recovered_10004d5c(int *param_1);
undefined8 recovered_10004d98(int *param_1);
void recovered_10004df4(undefined8 param_1);
ulong recovered_10004e38(int *param_1,uint param_2);
ulong recovered_10004e4c(int *param_1,uint param_2);
ulong recovered_10004e64(int *param_1);
ulong recovered_10004e70(int *param_1);
ulong recovered_10004e7c(int *param_1,uint param_2);
ulong recovered_10004e88(int *param_1,uint param_2);
undefined8 recovered_10004e94(int *param_1,long param_2);
undefined8
recovered_10004ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
undefined8 recovered_10004f38(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10004f88(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_10004fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8
recovered_10005038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
undefined8 recovered_10005080(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_1000508c(undefined8 param_1,undefined8 param_2,undefined8 param_3);
bool recovered_10005098(void);
void recovered_100050e0(int param_1);
void recovered_10005124(void);
uint128 recovered_10005134(ulong param_1,long param_2,uint param_3,long param_4);
void recovered_10005148(void);
void recovered_10005158(void *param_1);
void recovered_1000518c(undefined4 *param_1,undefined8 param_2);
void recovered_100051b8(undefined4 *param_1,undefined4 param_2);
void recovered_100051ec(undefined4 *param_1);
void recovered_10005210(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       );
void recovered_10005244(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_10005268(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_1000528c(undefined4 *param_1,undefined8 param_2,undefined4 param_3);
void recovered_100052cc(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,
                       undefined8 param_4);
void recovered_100052dc(undefined1 *param_1,undefined1 *param_2,undefined4 param_3);
void recovered_100052f8(undefined1 *param_1,undefined1 *param_2,undefined4 param_3);
void recovered_10005314(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4);
void recovered_10005348(undefined1 *param_1,undefined1 *param_2,uint param_3);
void recovered_10005360(undefined1 *param_1,undefined1 *param_2,uint param_3);
undefined8 recovered_10005378(int *param_1,undefined8 param_2);
int recovered_10005610(long param_1,uint *param_2);
undefined8 recovered_100056b4(int *param_1,int *param_2,undefined8 param_3);
void recovered_10005798(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
long * recovered_10005840(long *param_1,int *param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10005bf4(undefined8 *param_1);
bool recovered_10005cec(int param_1);
undefined8 recovered_10005d34(undefined *param_1,undefined8 param_2);
int recovered_10005d98(long param_1);
undefined8
recovered_10005dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_10005e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
uint128 recovered_10005e74(ulong param_1,ulong param_2,undefined8 param_3,int param_4);
void recovered_10005ef8(long *param_1,ulong param_2,undefined8 param_3,long param_4,int param_5,
                       undefined8 param_6,int param_7);
void recovered_1000613c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                       );
uint recovered_100063a0(uint param_1,uint param_2,uint param_3);

/* Original analysis identifiers for manual recovery units. */
/* TerrorUI value operations recovered from r232. Pooka's Free Software License. */
typedef struct { int32_t top,right,bottom,left; } PFUIInsets;
typedef struct {
 uint32_t type,flags;
 uintptr_t text,children;
 uint32_t count; int32_t spacing;
 uint32_t alignment,foreground,background,scale;
 int32_t width,height;
 PFUIInsets padding;
 uintptr_t callback,userdata;
} PFUIView;
typedef struct {
 uintptr_t title;
 uint32_t width,height,stride,background,transparency,shadow;
 int32_t mode; uint32_t amount;
 uintptr_t menu_file,menu_edit,menu_window;
 uint32_t flags;
} PFUIWindowSpec;
PFUIInsets pf_ui_insets(int32_t all);
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y);
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l);
PFUIView pf_ui_view_empty(void);
PFUIView pf_ui_text(uintptr_t text);
PFUIView pf_ui_rectangle(uint32_t color);
PFUIView pf_ui_spacer(void);
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata);
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing);
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count);
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding);
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color);
PFUIView pf_ui_view_background(PFUIView v,uint32_t color);
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height);
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale);
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment);
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height);
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount);
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s);
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value);
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value);
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b);
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count);
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command);
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons,uint32_t flags);
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state);
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y);
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y);
