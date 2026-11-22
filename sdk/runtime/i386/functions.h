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
#define ABS(value) __builtin_fabs(value)
#include "../format.h"
typedef int pf_compare(const void *,const void *);
static unsigned pf_snow_atomic_guard;
static inline void pf_snow_atomic_enter(void){while(__atomic_exchange_n(&pf_snow_atomic_guard,1,__ATOMIC_ACQUIRE)){} }
static inline void pf_snow_atomic_leave(void){__atomic_store_n(&pf_snow_atomic_guard,0,__ATOMIC_RELEASE);}
#ifndef INFINITY
#define INFINITY (__builtin_huge_valf())
#endif
static inline long double pf_snow_ld_bits(uint64_t low,uint16_t high){unsigned char bytes[sizeof(long double)]={0};long double result;__builtin_memcpy(bytes,&low,8);__builtin_memcpy(bytes+8,&high,2);__builtin_memcpy(&result,bytes,sizeof result);return result;}
#define CONCAT28(high,low) pf_snow_ld_bits((uint64_t)(low),(uint16_t)(high))
typedef struct pf_snow_value { int kind; int integer; char text[384]; } pf_snow_value;
#define SUB21(value,offset) ((uint8_t)((uint16_t)(value)>>((offset)*8)))
#define pf_varargs_1003e570__4_ recovered_1003e570
#define pf_varargs_1003e570__4__4_ recovered_1003e570
#define pf_varargs_1003e570__4__4__4__4__4__4__4_ recovered_1003e570
#define pf_varargs_1003e570___ recovered_1003e570
#define pf_varargs_10041220__4_ recovered_10041220
#define pf_varargs_10041220__4__4_ recovered_10041220
#define pf_varargs_10041220__4__4__4_ recovered_10041220
#define pf_varargs_10041220__4__4__4__4_ recovered_10041220
#define pf_varargs_10041220__4__4__4__4__4_ recovered_10041220
#define pf_varargs_10041220__4__4__4__4__4__4_ recovered_10041220
#define pf_varargs_10041220__4__4__4__4__4__4__4_ recovered_10041220
#define pf_varargs_10041220__4__8__8__4__4_ recovered_10041220
#define pf_varargs_10041220___ recovered_10041220
#define pf_varargs_100412e0___ recovered_100412e0
extern uint8_t pf_module_state[];
void recovered_100007c0(void);
void recovered_10000ae0(void);
int recovered_10000be0(int argc,char **argv);
uchar recovered_10001060(int param_1,char **param_2,void *param_3);
void recovered_10001900(void);
void recovered_10001990(void);
uchar * recovered_100019e0(char *param_1,ulong *param_2);
uchar recovered_10001bd0(void *param_1,void *param_2);
void recovered_10001f80(void *param_1);
void recovered_10002030(void *param_1);
uchar recovered_10002090(void *param_1,void *param_2,void *param_3);
void recovered_10002400(void *param_1);
uchar recovered_10002470(char *param_1,uchar *param_2,ulong param_3);
void recovered_100025f0(void *param_1);
bool recovered_10002690(char *param_1,char *param_2);
uchar recovered_10002710(char *param_1,char *param_2);
uchar recovered_100027b0(void *options,char *name);
uint recovered_10002890(char *param_1);
uchar recovered_10002910(char *param_1,void *param_2);
uchar recovered_10002a40(char *param_1);
void * recovered_10002bb0(char *param_1);
void recovered_10002fc0(void *param_1);
uint recovered_10003040(char *param_1,void *param_2);
uchar recovered_10003220(void *param_1);
uchar recovered_100033e0(void *param_1);
uchar recovered_10003b70(void *param_1,char *param_2,int param_3);
int recovered_10003c60(void *param_1,char *param_2);
void recovered_10003d20(char *param_1,void *param_2);
void recovered_10003fc0(void *param_1,char *param_2);
uchar recovered_10004030(void *param_1,void *param_2);
void recovered_10004340(void *param_1);
uchar recovered_10004a70(void *param_1,void *param_2);
uchar recovered_10004e50(void *param_1,void *param_2);
uchar recovered_100052e0(void *param_1,void *param_2);
void recovered_10005740(void *param_1);
bool recovered_10005860(char param_1);
bool recovered_100058d0(char param_1);
void recovered_10005940(char *param_1,ulong param_2,char *param_3,ulong param_4);
void recovered_100059d0(void *param_1,void *param_2);
uint * recovered_10005a40(char *param_1,char *param_2);
void recovered_10005b00(void *param_1);
int recovered_10005cb0(char param_1);
uint recovered_10005d60(pf_snow_value *param_1);
pf_snow_value * recovered_10005de0(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10005f00(pf_snow_value *__return_storage_ptr__,void *param_2);
bool recovered_10006040(void *param_1,char *param_2);
bool recovered_100060c0(void *param_1,char *param_2);
bool recovered_10006130(pf_snow_value *param_1);
pf_snow_value * recovered_10006190(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_100062d0(pf_snow_value *__return_storage_ptr__,int param_2);
pf_snow_value * recovered_10006350(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006460(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006570(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006680(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_100069f0(pf_snow_value *__return_storage_ptr__,void *param_2);
int * recovered_10006d80(pf_snow_value *param_1,char *param_2,ulong param_3);
pf_snow_value * recovered_10006e20(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006fd0(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10007240(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value *
recovered_100074c0(pf_snow_value *__return_storage_ptr__,pf_snow_value *param_2,int param_3);
pf_snow_value * recovered_10007580(pf_snow_value *__return_storage_ptr__,void *param_2);
uint recovered_10007b70(void *param_1,char *param_2);
uint recovered_10007be0(void *param_1,char *param_2);
void recovered_10007c60(void *param_1,char *param_2,int param_3);
pf_snow_value *
recovered_10007d00(pf_snow_value *__return_storage_ptr__,void *param_2,pf_snow_value param_3);
uint recovered_10008030(char *param_1);
pf_snow_value * recovered_10008440(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value *
recovered_10008a00(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3);
int recovered_10008b90(void *param_1,char *param_2);
uchar recovered_10008c50(void *param_1,char *param_2,int *param_3);
void recovered_10008cd0(void *param_1,char *param_2,pf_snow_value param_3);
void recovered_10008dd0(void *param_1);
pf_snow_value * recovered_10008e90(pf_snow_value *__return_storage_ptr__,char *param_2);
uint recovered_10008f70(void *param_1,pf_snow_value *param_2,uint param_3);
pf_snow_value *
recovered_100090a0(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                  pf_snow_value *param_4,uint param_5,bool *param_6);
int recovered_10009470(void *param_1,char *param_2);
pf_snow_value *
recovered_10009530(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                  pf_snow_value *param_4,uint param_5,bool *param_6);
uchar recovered_10009850(void *param_1,bool param_2);
uchar recovered_1000aaf0(void *param_1,bool param_2);
uint recovered_1000aca0(void *param_1,bool param_2);
uint recovered_1000af80(void *param_1,bool param_2);
void recovered_1000b450(void *param_1,bool param_2);
void recovered_1000b700(void *param_1,bool param_2);
void recovered_1000b9d0(void *param_1,bool param_2,bool param_3);
void recovered_1000bcf0(void *param_1,char *param_2,int param_3,int param_4);
uchar recovered_1000bf60(void *param_1,bool param_2);
uchar recovered_1000c2a0(void *param_1,char *param_2,bool param_3);
uint * recovered_1000cbe0(void *param_1);
uint * recovered_1000cd60(void *param_1);
uint recovered_1000d0e0(void *param_1,char *param_2);
uchar recovered_1000d240(void *param_1,char *param_2,bool param_3);
void recovered_1000d470(void *param_1,void *param_2);
bool recovered_1000d4f0(char *param_1,char **param_2,char **param_3,char **param_4);
uint * recovered_1000d7a0(char *param_1);
uint * recovered_1000d900(char *param_1,char *param_2);
void recovered_1000d970(char **param_1,char **param_2);
void recovered_1000da30(void *param_1);
void recovered_1000daf0(void *param_1,char *param_2,int param_3);
uchar recovered_1000db60(void *param_1,char *param_2);
void recovered_1000dc20(char *param_1,pf_snow_value *param_2,uint param_3,char *param_4,
                       ulong param_5);
void recovered_1000e0d0(char *param_1,ulong param_2,char *param_3);
void recovered_1000e150(char *param_1,ulong param_2,char param_3);
void recovered_1000e1c0(char *param_1,ulong param_2,int param_3,bool param_4,bool param_5);
uint recovered_1000e2d0(char *param_1);
uchar recovered_1000e400(void *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                        char *param_6);
void recovered_1000e600(char *param_1,void *param_2);
uchar recovered_1000e7e0(char *param_1,char *param_2,char *param_3,ulong param_4,uint *param_5,
                        bool *param_6);
uint recovered_1000ea50(char *param_1);
uint recovered_1000eb60(void *param_1,char *param_2,bool param_3,uint param_4,uint param_5,
                       bool param_6,bool param_7);
uchar recovered_1000efc0(void *param_1,int param_2,int param_3,int param_4);
uchar recovered_1000f110(void *param_1);
void recovered_10012760(char *param_1,ulong param_2,char *param_3);
uchar recovered_10012840(void *param_1,char *param_2,char *param_3,ulong param_4);
void recovered_10012970(void *param_1);
uint recovered_100129c0(void *param_1,char *param_2,bool param_3);
uint * recovered_10012a60(void *param_1);
uchar recovered_10012c70(void *param_1,char *param_2);
uchar recovered_10012e80(void *param_1,char *param_2,ulong param_3);
uchar recovered_100130f0(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_10013200(void *param_1,bool param_2);
uchar recovered_10013880(void *param_1,int param_2,uint param_3);
uchar recovered_10013ca0(void *param_1,char *param_2,ulong param_3);
uchar recovered_10013ea0(void *param_1,char *param_2,char *param_3,ulong param_4);
uint recovered_100140e0(void *param_1,char *param_2);
uint recovered_10014200(char *param_1);
uint recovered_100142c0(void *param_1,char *param_2,char *param_3,uint *param_4,bool *param_5);
uchar recovered_10014c00(void *param_1,char *param_2);
void recovered_100158f0(void *param_1);
void recovered_10015b60(void *param_1);
void recovered_10015c20(void *param_1);
void recovered_10015d70(void *param_1);
void recovered_10015e30(void *param_1);
void recovered_10015ef0(void *param_1);
void recovered_10015fb0(void *param_1);
void recovered_100161d0(void *param_1);
void recovered_100163a0(void *param_1);
void recovered_100164d0(void *param_1);
void recovered_10016600(void *param_1);
void recovered_10016790(void *param_1);
void recovered_100172d0(void *param_1);
uint recovered_100181f0(void *param_1,char *param_2);
void recovered_100183a0(void *param_1);
uchar recovered_10018490(void *param_1,char *param_2);
uint recovered_100187e0(char *param_1);
uchar recovered_10018890(void *param_1,char *param_2);
bool recovered_10018d50(char *param_1,char *param_2);
uchar recovered_10018e10(char *param_1,uint param_2,int *param_3);
uchar recovered_10018fc0(void *param_1,char *param_2,char *param_3);
uchar recovered_10019070(void *param_1,char *param_2,char *param_3,ulong param_4);
uchar recovered_100191a0(void *param_1,char *param_2,char *param_3,char *param_4);
uchar recovered_100193a0(void *param_1);
uint recovered_10019530(char *param_1,char *param_2);
uchar recovered_100195b0(void *param_1,char *param_2,bool *param_3);
uchar recovered_1001a050(void *param_1,char *param_2,ulong param_3);
uint recovered_1001a2b0(void *param_1,char *param_2,char *param_3,bool param_4,uint param_5,
                       uint param_6,bool param_7,bool param_8);
uint recovered_1001a440(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_1001a570(void *param_1);
uchar recovered_1001a720(void *param_1,int param_2);
uchar recovered_1001a890(void *param_1);
uchar recovered_1001adb0(void *param_1);
uchar recovered_1001af20(void *param_1);
uchar recovered_1001afe0(void *param_1,int param_2);
uchar recovered_1001b140(void *param_1);
uchar recovered_1001b2d0(void *param_1,int param_2);
uchar recovered_1001b430(void *param_1);
uchar recovered_1001b680(void *param_1);
uchar recovered_1001b830(void *param_1);
uchar recovered_1001c4b0(void *param_1);
uchar recovered_1001ccb0(void *param_1);
uchar recovered_1001cf00(void *param_1);
uchar recovered_1001d140(void *param_1);
uchar recovered_1001d4d0(void *param_1);
uchar recovered_1001d840(void *param_1,bool param_2);
uchar recovered_1001daf0(void *param_1);
uchar recovered_1001e4f0(void *param_1);
uchar recovered_1001eb30(void *param_1,int param_2);
uchar recovered_1001ec90(void *param_1);
uchar recovered_1001ef60(void *param_1,int *param_2);
uint recovered_1001f3d0(char *param_1);
bool recovered_1001f4a0(char *param_1,char *param_2);
uchar recovered_1001f560(void *param_1,char *param_2,ulong param_3);
uchar recovered_1001f6e0(void *param_1,char *param_2,int *param_3,int *param_4,int *param_5,
                        uint *param_6);
uchar recovered_1001f900(void *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                        int param_7);
uchar recovered_1001fe50(void *param_1,int param_2,uint param_3,int param_4);
uchar recovered_10020160(void *param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
int recovered_10020240(void *param_1,char *param_2);
uchar recovered_10020710(void *param_1,char *param_2,ulong param_3,bool *param_4);
uchar recovered_10020820(void *param_1,char *param_2,char *param_3,char *param_4,bool param_5);
uchar recovered_10020a20(void *param_1,char *param_2,char *param_3);
uchar recovered_10020c90(void *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6
                        ,uint param_7,uint *param_8,uint *param_9);
uchar recovered_10020fa0(void *param_1,void *param_2,void *param_3);
uchar recovered_10021620(void *param_1,void *param_2,void *param_3);
uchar recovered_10021db0(void *param_1,void *param_2,void *param_3);
uchar recovered_100224c0(void *param_1,uint *param_2,uint param_3,void *param_4);
uchar recovered_10022870(void *param_1,uint *param_2,uint param_3,int param_4,void *param_5);
uchar recovered_10022c00(void *param_1,void *param_2,void *param_3);
uint recovered_10022f50(void *param_1,uint param_2,bool param_3);
uchar recovered_10023010(void *param_1,void *param_2,ulong param_3);
uint recovered_100230c0(void *param_1,ulonglong param_2,bool param_3);
uchar recovered_100231d0(void *param_1,void *param_2,uint param_3);
bool recovered_100234e0(void *param_1,ulong param_2);
uchar recovered_10023580(void *param_1,void *param_2);
uchar recovered_10027130(void *param_1,void *param_2,uint param_3,uint param_4);
uchar recovered_10027310(void *param_1,void *param_2,int param_3);
uchar recovered_10027980(void *param_1,ulong param_2);
uint recovered_10027a10(void *param_1,void *param_2,void *param_3,uint param_4);
uchar recovered_10028040(void *param_1,uint param_2,uint param_3);
uchar recovered_100281b0(void *param_1,void *param_2);
uchar recovered_100293f0(void *param_1,uint param_2,uint param_3);
uint recovered_10029510(void *param_1,uint param_2,uint param_3);
bool recovered_10029620(void *param_1,int param_2,uint param_3,ulong param_4);
uint recovered_100296e0(void *param_1,uint param_2,uint param_3);
uint recovered_100297e0(void *param_1,uint param_2,uint param_3);
uint recovered_100298f0(uint param_1,uint param_2,uint param_3);
uint recovered_10029960(uint param_1,uint param_2,uint param_3);
uint recovered_100299d0(uint param_1,uint param_2,uint param_3);
uint recovered_10029a40(uint param_1,uint param_2,uint param_3);
uint recovered_10029ab0(uint param_1,uint param_2,uint param_3);
uint recovered_10029b20(uint param_1,uint param_2,uint param_3);
uchar recovered_10029b90(void *param_1,uint param_2,uint param_3);
uchar recovered_10029fd0(void *param_1,uint param_2,uint param_3);
uchar recovered_1002a410(void *param_1,uint param_2,uint param_3);
uchar recovered_1002ab30(void *param_1,uint param_2,uint param_3);
uchar recovered_1002aef0(void *param_1,uint param_2,void *param_3,int param_4);
uchar recovered_1002b460(void *param_1,uint param_2,int param_3);
uchar recovered_1002b830(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_1002bb10(void *param_1,uint param_2);
uint recovered_1002bd90(void *param_1,uint param_2);
uint recovered_1002be40(void *param_1,uint param_2,uint param_3);
uchar recovered_1002bf20(void *param_1,uint param_2,uint param_3,void *param_4,int param_5);
uchar recovered_1002c780(void *param_1,uint param_2,uint param_3,uint param_4,void *param_5,
                        uint param_6);
uchar recovered_1002ca30(void *param_1,uint param_2);
uchar recovered_1002d1e0(void *param_1,void *param_2,void *param_3);
uchar recovered_100310c0(void *param_1,void *param_2,void *param_3,uint param_4);
uint recovered_100317d0(uint param_1,uint param_2,uint param_3);
uint recovered_10031840(uint param_1,uint param_2,uint param_3);
uint recovered_100318b0(uint param_1,uint param_2,uint param_3);
uint recovered_10031920(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_100319a0(uint param_1,uint param_2,uint param_3);
uint recovered_10031a10(uint param_1,uint param_2,uint param_3);
uint recovered_10031a80(uint param_1,uint param_2,uint param_3);
uint recovered_10031af0(uint param_1,uint param_2,uint param_3);
uint recovered_10031b60(uint param_1,uint param_2,uint param_3);
uint recovered_10031bd0(uint param_1);
uchar recovered_10031c20(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_10031d30(void *param_1,uint param_2);
uint recovered_10031ee0(void *param_1,uint param_2,uint param_3);
uchar recovered_10031f60(void *param_1,uint param_2);
uchar recovered_100321e0(void *param_1,uint param_2,uint param_3);
uchar recovered_10032710(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_10032820(void *param_1,ulong param_2,uint param_3,ulong param_4);
void recovered_10032920(undefined4 *in_stack_00000004);
uchar recovered_10032970(void *param_1,uint param_2,uint param_3);
uchar recovered_10032a60(void *param_1,uint param_2);
uint recovered_10032c40(uint param_1,uint param_2);
uchar recovered_10032ca0(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_10032db0(void *param_1,uint param_2);
uint recovered_100330e0(uint param_1,uint param_2,uint param_3);
uint recovered_10033150(uint param_1,uint param_2,uint param_3);
uchar * recovered_100331c0(void *param_1);
uint recovered_100332a0(uint param_1,uint param_2,uint param_3);
uchar recovered_10033310(void *param_1,ulong param_2,uint param_3,bool param_4);
uint recovered_10033440(uint param_1,uint param_2,uint param_3);
uint recovered_100334b0(void *param_1);
uint recovered_10033510(uint param_1,uint param_2);
uint recovered_10033570(uint param_1,uint param_2,uint param_3);
uint recovered_100335e0(uint param_1,uint param_2,uint param_3);
uint recovered_10033650(uint param_1,uint param_2,uint param_3);
uint recovered_100336c0(uint param_1,uint param_2,uint param_3);
uint recovered_10033730(uint param_1,uint param_2,uint param_3);
uchar recovered_100337a0(void *param_1,ulong param_2,uint param_3,ulong param_4);
uint recovered_100338b0(uint param_1,uint param_2);
uint recovered_10033910(uint param_1,uint param_2,uint param_3);
uchar recovered_10033980(void *param_1,uint param_2,uint param_3,ulong *param_4);
uchar recovered_10033a60(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,ulong *param_7,uint *param_8,uint *param_9);
uchar recovered_10033c10(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10034a70(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_10034b80(void *param_1,uint param_2,uint param_3,ulong *param_4,uint *param_5,
                        uint param_6);
uchar recovered_10034c90(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,uint param_7);
uchar recovered_10034e70(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10035290(void *param_1,void *param_2,void *param_3,uint param_4,uint param_5);
uchar recovered_100353c0(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        uint param_6);
uchar recovered_10035600(ulong *param_1,uint *param_2,uint param_3,ulong param_4);
uint recovered_10035690(uint param_1,uint param_2);
uint recovered_100356f0(void *param_1,uint param_2);
uchar recovered_10035780(void *param_1,uint param_2);
uchar recovered_10035c00(void *param_1,uint param_2);
uchar recovered_10035ec0(void *param_1,uint param_2,uint param_3,bool param_4);
uchar recovered_10036550(void *param_1,uint param_2,bool param_3);
uint recovered_100366d0(uint param_1,uint param_2,uint param_3);
uchar recovered_10036740(void *param_1);
uint recovered_10036b50(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10036da0(void *param_1);
void recovered_10036ec0(undefined4 *in_stack_00000004);
uint recovered_10036f20(void *param_1,uint param_2,uint param_3);
uint recovered_100372d0(void *param_1,uint param_2,uint param_3);
uint recovered_10037710(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10037990(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
uint recovered_10037c60(void *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10037ee0(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
uint recovered_100381a0(void *param_1,uchar param_2);
uint recovered_10038200(uint param_1,uint param_2);
uint recovered_10038270(uint param_1,uint param_2);
uint recovered_100382e0(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_100383d0(uint param_1,uint param_2,uint param_3);
uint recovered_10038440(uint param_1,uint param_2,uint param_3);
uint recovered_100384b0(uint param_1,uint param_2);
uint recovered_10038510(uint param_1);
uint recovered_10038560(void *param_1,uint param_2,uint param_3);
uint recovered_10038630(uint param_1,uint param_2,uint param_3);
uint recovered_100386a0(uint param_1,uint param_2,uint param_3);
uint recovered_10038710(uint param_1,uint param_2);
uint recovered_10038770(uint param_1,uint param_2,uint param_3);
uint recovered_100387e0(void *param_1,uint param_2);
uint recovered_10038940(void *param_1,uint param_2);
uint recovered_10038c10(void *param_1,uint param_2,uint param_3);
uint recovered_10038d70(void *param_1,uint param_2,uint param_3);
uint recovered_10038e80(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_10038fd0(int param_1);
uint recovered_10039020(void *param_1,uint param_2,uint param_3);
uint recovered_10039130(int param_1);
uint recovered_100391b0(void *param_1,void *param_2,uint param_3,uint param_4);
uint recovered_10039310(uint param_1,int param_2);
uint recovered_10039390(uint param_1,int param_2);
uchar recovered_10039410(void *param_1,ulong param_2);
uint recovered_10039550(void *param_1,ushort param_2,bool param_3);
void recovered_100395f0(char *param_1);
undefined1 recovered_10039720(byte *param_1);
void recovered_10039870(void);
undefined4 recovered_100399a0(int param_1,char *param_2,int param_3,int param_4);
void recovered_10039a80(void *param_1,char *param_2,uint param_3);
undefined4 recovered_10039bd0(undefined4 param_1);
uint recovered_10039c70(char *param_1,int param_2,uint param_3);
undefined1 * recovered_10039df0(void);
bool recovered_10039e30(int *param_1,int param_2);
bool recovered_10039eb0(int *param_1);
bool recovered_10039f30(char param_1);
bool recovered_10039fb0(int param_1,char *param_2,char *param_3,int param_4);
undefined4
recovered_1003a0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined1 recovered_1003a1a0(int param_1,char *param_2,undefined1 *param_3,uint param_4);
bool recovered_1003a6c0(char param_1);
undefined4 recovered_1003a720(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_1003a7d0(undefined1 *param_1,int param_2);
void recovered_1003a830(void *param_1,uint param_2);
void recovered_1003a990(void *param_1,char *param_2);
undefined4 recovered_1003ac00(undefined1 *param_1,int param_2);
undefined4 recovered_1003acc0(int param_1,int param_2);
undefined4 recovered_1003ad40(undefined4 param_1,undefined4 param_2);
uchar recovered_1003adf0(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_1003af60(int param_1,char *param_2,int param_3);
undefined4 recovered_1003b030(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_1003b0f0(undefined4 param_1,undefined4 param_2);
int recovered_1003b190(int argc,char **argv);
void recovered_1003b1f0(void);
void recovered_1003b200(void);
int recovered_1003b520(void);
void recovered_1003b560(void);
int recovered_1003b5a0(void);
void recovered_1003b5d0(void);
uint * recovered_1003b610(int param_1);
longlong recovered_1003b6d0(uint param_1,int param_2,uint param_3);
ulonglong recovered_1003b710(uint param_1,uint param_2,uint param_3);
undefined8 recovered_1003b750(uint param_1,uint param_2,uint param_3);
undefined8 recovered_1003b7a0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1003b880(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1003b8f0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_1003ba30(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_1003baf0(void);
int recovered_1003bb10(int value);
void * recovered_1003bb30(ulong size);
void recovered_1003bb70(void *pointer);
void * recovered_1003bbb0(void *pointer,ulong size);
void * recovered_1003bbf0(void *destination,void *source,ulong count);
void * recovered_1003bcb0(void *destination,void *source,ulong count);
void * recovered_1003be80(void *destination,int value,ulong count);
void recovered_1003bf30(undefined4 *param_1,uint param_2);
void recovered_1003bfd0(undefined4 *param_1,uint param_2);
int recovered_1003c070(void *left,void *right,ulong count);
int recovered_1003c1a0(char *in_ECX,char *in_EDX);
int recovered_1003c1e0(int value);
int recovered_1003c200(int value);
int recovered_1003c220(int value);
int recovered_1003c240(int value);
int recovered_1003c270(int value);
int recovered_1003c290(int value);
int recovered_1003c2b0(int value);
int recovered_1003c2d0(int value);
ulong recovered_1003c2f0(char *text);
int recovered_1003c320(char *left,char *right);
int recovered_1003c360(char *left,char *right);
char * recovered_1003c3a0(char *destination,char *source);
char * recovered_1003c3c0(char *text);
char * recovered_1003c500(char *text,int value);
ulong recovered_1003c540(char *text,char *accept);
char * recovered_1003c590(char *text,char *accept);
char * recovered_1003c5e0(char *haystack,char *needle);
undefined * recovered_1003c630(void);
undefined * recovered_1003c640(void);
void recovered_1003c650(undefined4 *param_1);
longdouble recovered_1003c6e0(double param_1,int param_2);
void recovered_1003c710(double param_1,int *param_2);
double recovered_1003c7f0(double x,double y);
double recovered_1003c850(double base,double exponent);
double recovered_1003c8f0(double value);
double recovered_1003c940(double value);
double recovered_1003c9a0(double value);
double recovered_1003caa0(double value);
longlong recovered_1003cbc0(double value);
double recovered_1003cc10(double value);
double recovered_1003ccb0(double value);
double recovered_1003cd50(double value);
longlong recovered_1003cd70(double value);
ulonglong recovered_1003ce50(double value);
double recovered_1003cf00(ulonglong value);
double recovered_1003cf70(longlong value);
float recovered_1003d020(float x,float y);
longdouble recovered_1003d080(float param_1,int *param_2);
longdouble recovered_1003d170(float param_1,int param_2);
float recovered_1003d1b0(float base,float exponent);
float recovered_1003d250(float value);
float recovered_1003d2a0(float value);
double recovered_1003d310(double value);
float recovered_1003d380(float value);
float recovered_1003d400(float value);
float recovered_1003d420(float value);
long recovered_1003d550(double value);
float recovered_1003d5a0(float value);
float recovered_1003d640(float value);
float recovered_1003d6e0(float value);
long recovered_1003d700(char *text,char **endptr,int base);
ulong recovered_1003d850(char *text,char **endptr,int base);
double recovered_1003d9a0(char *text,char **endptr);
float recovered_1003db40(char *text,char **endptr);
int recovered_1003db70(char *buffer,unsigned long size,char *format,void *input);
int recovered_1003e570(char *buffer,unsigned long size,char *format,...);
void recovered_1003e5a0(uint in_ECX,uint in_EDX,uint *param_3);
void recovered_1003e720(int *param_1,int *param_2);
void recovered_1003e750(int *param_1);
void recovered_1003e7e0(void *function,void *caller);
void recovered_1003e860(void *function,void *caller);
void recovered_1003e870(float param_1);
void recovered_1003e890(float param_1);
longdouble recovered_1003e8b0(uint param_1,uint param_2);
longdouble recovered_1003e8e0(uint param_1,uint param_2);
uint8_t recovered_1003e910(uint8_t *pointer,...);
void recovered_1003e940(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003e970(uint8_t *pointer,uint8_t value,...);
uint64_t recovered_1003e9a0(uint8_t *pointer,uint8_t *expected,uint8_t value,...);
uint8_t recovered_1003e9e0(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003ea20(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003ea60(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003eaa0(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003eae0(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003eb20(uint8_t *pointer,uint8_t value,...);
uint16_t recovered_1003eb60(uint16_t *pointer,...);
void recovered_1003eb90(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ebc0(uint16_t *pointer,uint16_t value,...);
uint64_t recovered_1003ec00(uint16_t *pointer,uint16_t *expected,uint16_t value,...);
uint16_t recovered_1003ec50(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ec90(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ecd0(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ed10(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ed50(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003ed90(uint16_t *pointer,uint16_t value,...);
uint32_t recovered_1003edd0(uint32_t *pointer,...);
void recovered_1003ee00(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003ee30(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_1003ee60(uint32_t *pointer,uint32_t *expected,uint32_t value,...);
uint32_t recovered_1003eea0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003eee0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003ef20(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003ef60(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003efa0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003efe0(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_1003f020(uint64_t *pointer,...);
void recovered_1003f050(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f090(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f0d0(uint64_t *pointer,uint64_t *expected,uint64_t value,...);
uint64_t recovered_1003f130(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f170(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f1b0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f1f0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f230(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003f270(uint64_t *pointer,uint64_t value,...);
bool recovered_1003f2b0(uint8_t *pointer,...);
void recovered_1003f2f0(uint8_t *pointer,...);
void recovered_1003f320(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_1003f370(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_1003f3c0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...);
uint64_t recovered_1003f440(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...);
void recovered_1003f4d0(int param_1);
void recovered_1003f510(char *text);
void * recovered_1003f610(char *path,char *mode);
undefined * recovered_1003f970(void);
undefined4 recovered_1003fb20(int in_ECX,char *in_EDX,undefined1 *param_3);
int recovered_1003fdc0(int in_ECX);
void * recovered_10040040(char *path,char *mode,void *stream);
int recovered_10040140(void *stream);
void recovered_100401e0(int in_stack_00000004,byte *in_stack_00000008);
void recovered_100401f0(int in_stack_00000004,byte *in_stack_00000008,int *in_stack_0000000c);
void * recovered_10040200(int fd,char *mode);
void * recovered_100402d0(char *command,char *mode);
int recovered_100402f0(void *stream);
int recovered_10040310(void *stream);
undefined4 recovered_100403d0(int in_ECX,char *in_EDX,int param_3,int param_4);
void recovered_10040520(int *in_stack_00000004);
undefined4 recovered_10040530(int *param_1);
ulong recovered_10040640(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_10040820(void *ptr,ulong size,ulong count,void *stream);
void recovered_10040990(undefined1 *in_stack_00000004,uint in_stack_00000008,int in_stack_0000000c,
                       int *in_stack_00000010);
void recovered_100409a0(int in_stack_00000004,uint in_stack_00000008,uint in_stack_0000000c,
                       int *in_stack_00000010);
int recovered_100409b0(void *stream,long offset,int origin);
undefined4 recovered_10040a40(int *param_1,int param_2,int param_3);
long recovered_10040ad0(void *stream);
int recovered_10040b00(int *param_1);
int recovered_10040b30(void *stream,longlong offset,int origin);
longlong recovered_10040bc0(void *stream);
int recovered_10040c00(void *stream,long *pos);
int recovered_10040c50(void *stream,long *pos);
int recovered_10040cb0(void *stream);
undefined1 recovered_10040cd0(int *param_1);
int recovered_10040cf0(void *stream);
undefined1 recovered_10040d10(int *param_1);
void recovered_10040d30(void *stream);
void recovered_10040d50(int *param_1);
int recovered_10040d70(void *stream);
int recovered_10040da0(void *stream);
int recovered_10040e00(void *stream);
uint recovered_10040e60(int *param_1);
int recovered_10040ec0(void);
int recovered_10040f30(int ch,void *stream);
uint recovered_10040f60(uint param_1,int *param_2);
char * recovered_10040f90(char *text,int count,void *stream);
int recovered_10041040(int ch,void *stream);
int recovered_10041080(int ch,void *stream);
int recovered_100410c0(int ch);
int recovered_10041100(char *text,void *stream);
int recovered_10041150(char *text);
int recovered_100411c0(void *stream,char *format,void *args);
int recovered_10041220(void *stream,char *format,...);
int recovered_10041280(char *format,void *args);
int recovered_100412e0(char *format,...);
int recovered_10041340(char *buffer,char *format,void *input);
int recovered_10041360(char *buffer,char *format,...);
int recovered_10041390(char *buffer,char *format,void *args);
int recovered_100418c0(char *buffer,char *format,...);
int recovered_100418f0(void *stream,char *buffer,int mode,ulong size);
void recovered_10041920(void *stream,char *buffer);
void recovered_10041940(char *prefix);
char * recovered_100419f0(int error_number);
char * recovered_10041aa0(char *buffer);
int recovered_10041ae0(char *path);
undefined4 recovered_10041af0(char *in_stack_00000004);
void recovered_10041c40(char *in_stack_00000004);
int recovered_10041c50(char *oldPath,char *newPath);
void recovered_10041e20(char *in_stack_00000004,char *in_stack_00000008);
undefined4 recovered_10041e30(int param_1,uint param_2);
undefined4 recovered_10041ee0(int param_1,int param_2);
undefined4 recovered_10042060(int param_1);
undefined8 recovered_100420b0(uint param_1,undefined1 *param_2,int param_3);
undefined8 recovered_10042100(uint param_1,int param_2,uint param_3);
undefined4 recovered_10042150(uint param_1);
undefined8 recovered_10042260(uint param_1,int param_2,undefined4 param_3,int param_4);
undefined4 recovered_10042310(uint param_1);
uint recovered_10042410(uint param_1,uint param_2);
undefined4 recovered_10042520(undefined4 *param_1);
undefined4 recovered_10042550(void);
undefined4 recovered_10042570(void);
undefined4 recovered_10042590(void);
undefined4 recovered_100425b0(void);
undefined4 recovered_100425d0(void);
undefined4 recovered_100425f0(void);
undefined4 recovered_10042610(void);
undefined8 recovered_10042630(void);
undefined8 recovered_10042650(void);
undefined4 recovered_10042670(uint param_1,uint param_2);
undefined4 recovered_10042700(int in_ECX,char *in_EDX,int param_3);
undefined4 recovered_10042840(int in_ECX,char *in_EDX,int param_3,uint param_4,uint *param_5);
void recovered_10042af0(int in_stack_00000004,int in_stack_00000008);
undefined4 recovered_10042b00(uint param_1,int param_2);
undefined4 recovered_10042be0(int param_1,undefined4 *param_2);
undefined4 recovered_10042cd0(uint param_1,undefined4 *param_2);
undefined4 recovered_10042de0(char *in_stack_00000004);
void recovered_10042f30(char *in_stack_00000004);
void recovered_10042f40(int param_1);
undefined4 recovered_10042f60(uint param_1);
void recovered_10042fb0(int param_1);
undefined4 recovered_10042fd0(uint param_1);
void recovered_10043020(int param_1);
undefined4 recovered_10043040(undefined4 param_1);
void recovered_10043060(int param_1);
undefined4 recovered_10043080(char *in_stack_00000004);
int recovered_10043140(int param_1,uint param_2);
undefined8 recovered_100431d0(void);
undefined4 recovered_100431f0(void);
undefined4 recovered_10043210(void);
undefined4 recovered_10043230(int param_1,uint param_2,int param_3);
undefined4 recovered_100433b0(uint param_1,uint param_2,int param_3);
int recovered_100434b0(uint param_1);
uint * recovered_100434f0(char *in_stack_00000004);
uint * recovered_10043610(uint *param_1);
undefined4 recovered_10043640(int param_1);
void recovered_10043670(int param_1);
int recovered_10043690(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                      int param_6);
undefined4 recovered_100437c0(void *param_1);
undefined4 recovered_100437e0(void);
undefined4 recovered_100437f0(void);
undefined4 recovered_10043800(void);
int recovered_10043810(char *param_1);
undefined4 recovered_100438c0(void);
void recovered_100438e0(int param_1,char *param_2);
undefined4 recovered_10043940(char *param_1,int param_2,int param_3);
undefined4 recovered_10043a20(uint *in_ECX,char *in_EDX);
undefined4 recovered_10043b80(char *param_1);
undefined4 recovered_10043bd0(int param_1);
undefined4 recovered_10043c60(int param_1);
int recovered_10043d80(int param_1,int param_2);
undefined4 recovered_10043e20(int param_1,int param_2);
void recovered_10044020(int param_1);
undefined4 recovered_10044040(int param_1);
undefined4 recovered_10044080(int param_1);
void recovered_100440c0(void);
void recovered_10044140(void);
void recovered_100441c0(void);
void recovered_10044280(void);
bool recovered_10044300(uint param_1);
undefined4 recovered_10044310(void);
undefined4 recovered_10044320(void);
undefined4 recovered_10044330(void);
undefined4 recovered_10044340(void);
undefined4 recovered_10044350(int param_1);
undefined4 recovered_10044370(int param_1);
undefined4 recovered_10044390(void);
undefined4 recovered_10044410(void);
int recovered_10044420(int param_1);
undefined4 recovered_10044520(void);
undefined4 recovered_100445a0(void);
void recovered_100445c0(int in_stack_00000004,int *in_stack_00000008);
undefined4 recovered_100445d0(int in_ECX,int *in_EDX);
void recovered_10044760(int in_stack_00000004,int *in_stack_00000008);
void recovered_10044770(int in_stack_00000004,int *in_stack_00000008);
undefined4 recovered_10044780(int param_1);
undefined4 recovered_100447e0(void);
undefined4 recovered_100447f0(void);
undefined4 recovered_10044800(void);
undefined4 recovered_10044850(void);
undefined4 recovered_100448a0(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_10044900(undefined4 *param_1,undefined4 *param_2);
undefined4 recovered_10044950(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_10044990(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_100449b0(undefined4 *param_1);
undefined4 recovered_100449d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4);
undefined4 recovered_10044a10(uint param_1,undefined4 *param_2);
undefined4 recovered_10044ab0(uint param_1);
undefined4 recovered_10044ae0(undefined4 param_1,int param_2);
undefined4 recovered_10044b20(void);
undefined4 recovered_10044b70(void);
undefined4 recovered_10044b80(void);
undefined4 recovered_10044b90(void);
undefined4 recovered_10044ba0(void);
undefined4 recovered_10044bb0(void);
undefined4 recovered_10044bc0(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_10044bf0(int param_1);
undefined4 recovered_10044cb0(int param_1,uint param_2);
undefined4 recovered_10044d30(int param_1,undefined4 param_2);
undefined4 recovered_10044d90(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_10044e20(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_10044e80(int param_1,uint *param_2,uint *param_3);
undefined4 recovered_10044ee0(void);
undefined4 recovered_10044ef0(int param_1);
undefined4 recovered_10044f90(undefined4 *param_1);
undefined4 recovered_10044fc0(undefined4 *param_1);
undefined4 recovered_10044ff0(uint *param_1,int param_2);
undefined4 recovered_10045030(uint *param_1,int param_2);
uint recovered_10045070(uint *param_1,uint param_2);
undefined4 recovered_100450b0(uint param_1,undefined4 *param_2);
undefined4 recovered_10045130(uint param_1,undefined4 param_2,undefined4 *param_3);
void recovered_10045170(undefined4 *param_1);
undefined4 recovered_100451a0(uint param_1,int param_2,undefined4 *param_3);
uint recovered_10045200(int param_1,uint *param_2,uint *param_3,uint *param_4);
int recovered_10045360(int param_1,int param_2);
undefined4 recovered_100453f0(int *param_1,undefined *param_2);
undefined4 recovered_10045430(int *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4);
undefined4 recovered_10045470(undefined4 param_1,undefined4 *param_2);
undefined4 recovered_10045490(void);
undefined4 recovered_100454a0(undefined4 *param_1);
undefined4 recovered_100454c0(void);
undefined4 recovered_100454d0(undefined4 *param_1);
undefined4 recovered_100454f0(void);
undefined4 recovered_10045500(void);
undefined4 recovered_10045510(void);
undefined4 recovered_10045520(void);
undefined4 recovered_10045530(undefined4 *param_1);
undefined4 recovered_10045550(void);
undefined4 recovered_10045560(undefined4 *param_1,undefined4 param_2);
undefined4 recovered_10045580(undefined4 *param_1);
undefined4 recovered_100455a0(void);
undefined4 recovered_100455b0(void);
undefined4 recovered_100455c0(void);
undefined4 recovered_100455d0(void);
undefined4 recovered_100455e0(void);
undefined4 recovered_100455f0(int *param_1);
undefined4 recovered_10045830(uint param_1);
undefined4 recovered_10045860(uint param_1);
undefined4 recovered_10045880(uint param_1,undefined4 param_2);
undefined4 recovered_100458b0(undefined4 *param_1);
undefined4 recovered_100458d0(void);
undefined4 recovered_100458e0(void);
undefined4 recovered_100458f0(void);
undefined4 recovered_10045900(void);
undefined4 recovered_10045910(void);
bool recovered_10045990(int param_1,int param_2);
undefined4 recovered_100459a0(undefined4 *param_1);
undefined4 recovered_100459c0(void);
undefined4 recovered_100459d0(void);
undefined4 recovered_100459e0(void);
undefined4 recovered_100459f0(void);
undefined4
recovered_10045a00(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5);
void recovered_10045bf0(int *param_1,int param_2,int *in_stack_00000014);
undefined1 * recovered_10045c20(int param_1);
undefined1 * recovered_10045d30(int param_1);
int recovered_10045e50(int param_1,int param_2,int param_3,uint param_4,int *param_5);
undefined4 recovered_10045fb0(undefined4 *in_ECX,byte *in_EDX,int param_3,uint param_4);
int recovered_10046100(int param_1,int param_2,int param_3,uint param_4,int *param_5);
undefined1 * recovered_10046170(int param_1);
undefined1 * recovered_10046290(int param_1);
undefined4 recovered_100463c0(void);
undefined4 recovered_10046400(void);
undefined4 recovered_10046440(void);
undefined1 * recovered_10046450(void);
ulong recovered_10046470(char *text,ulong max_length);
int recovered_100464a0(int param_1,int param_2);
int recovered_10046500(char *param_1,byte *param_2);
int recovered_100465a0(int param_1,int param_2,int param_3);
int recovered_10046620(char *left,char *right,ulong count);
void recovered_10046680(undefined4 *param_1,undefined4 *param_2,uint param_3);
void recovered_100466a0(uint *in_stack_00000004,uint *in_stack_00000008,uint in_stack_0000000c);
undefined1 * recovered_100466b0(int param_1,int param_2,int *param_3);
void * recovered_10046730(void *memory,int value,ulong count);
char * recovered_10046760(char *text,int value);
undefined * recovered_100467a0(int param_1);
ulong recovered_100467c0(char *text,char *reject);
char * recovered_10046820(char *destination,char *source,ulong count);
char * recovered_10046870(char *destination,char *source);
char * recovered_100468a0(char *destination,char *source,ulong count);
ulong recovered_10046900(char *destination,char *source,ulong count);
char * recovered_10046970(char *text,char *delimiters);
void * recovered_100469f0(ulong count,ulong size);
void recovered_10046a40(uint seed);
int recovered_10046a60(void);
long recovered_10046a90(long value);
longlong recovered_10046ab0(longlong value);
int recovered_10046ad0(int param_1,int param_2);
int recovered_10046af0(int param_1,int param_2);
longlong * recovered_10046b10(longlong *param_1,uint param_2,int param_3,int param_4,int param_5);
longlong recovered_10046b80(char *text,char **endptr,int base);
ulonglong recovered_10046bb0(char *text,char **endptr,int base);
undefined4 recovered_10046be0(uint param_1);
undefined4 recovered_10046c00(ushort *param_1,ushort param_2);
undefined4 recovered_10046c40(uint param_1);
undefined4 recovered_10046c60(ushort *param_1,uint param_2);
uint recovered_10046ca0(uint param_1);
undefined4 recovered_10046cc0(void);
undefined4 recovered_10046cd0(undefined4 param_1);
undefined4 recovered_10046ce0(undefined4 *param_1);
undefined4 recovered_10046d20(undefined4 *param_1);
undefined4 recovered_10046d60(undefined4 *param_1);
undefined4 recovered_10046d90(uint *param_1);
__attribute__((naked,returns_twice)) int recovered_10046dc0(void *context);
__attribute__((naked,noreturn)) void recovered_10046df0(void *context,int value);
bool recovered_10046e20(undefined4 param_1,uint param_2);
bool recovered_10046e40(uint param_1);
byte recovered_10046e60(undefined4 param_1,undefined4 param_2,ushort param_3);
bool recovered_10046ea0(int param_1,uint param_2);
bool recovered_10046ec0(uint param_1);
bool recovered_10046ee0(int param_1,int param_2,uint param_3);
bool recovered_10046f10(int param_1,uint param_2);
bool recovered_10046f40(uint param_1);
bool recovered_10046f70(longdouble param_1);
bool recovered_10046f90(undefined4 param_1,uint param_2);
bool recovered_10046fb0(uint param_1);
byte recovered_10046fd0(int param_1,int param_2,ushort param_3);
uint recovered_10047040(undefined4 param_1,uint param_2);
uint recovered_10047050(uint param_1);
bool recovered_10047060(longdouble param_1);
byte recovered_100470b0(double param_1);
byte recovered_10047140(float param_1);
int recovered_100471c0(long double value);
int recovered_10047230(double value);
double recovered_10047250(double value);
float recovered_10047290(float value);
double recovered_100472d0(double value);
double recovered_10047310(double value);
float recovered_10047350(float value);
double recovered_10047390(double value);
double recovered_100473d0(double value);
float recovered_10047410(float value);
double recovered_10047450(double value);
long recovered_10047490(double value);
long recovered_100474f0(float value);
long recovered_10047550(double value);
longlong recovered_100475b0(double value);
longlong recovered_10047610(float value);
longlong recovered_10047670(double value);
double recovered_100476d0(double value);
float recovered_10047860(float value);
double recovered_10047880(double value);
double recovered_100478a0(double y,double x);
float recovered_10047990(float y,float x);
longdouble recovered_10047a90(longdouble param_1,undefined4 param_2,longdouble param_3);
double recovered_10047b90(double value);
float recovered_10047cb0(float value);
double recovered_10047df0(double value);
double recovered_10047f20(double value);
float recovered_10048050(float value);
double recovered_10048190(double value);
double recovered_100482d0(double value);
float recovered_10048330(float value);
double recovered_100483a0(double value);
double recovered_10048410(double value);
float recovered_100485e0(float value);
double recovered_10048600(double value);
double recovered_10048620(double value);
float recovered_10048640(float value);
double recovered_10048670(double value);
longdouble recovered_100486a0(double param_1);
longdouble recovered_100486c0(float param_1);
longdouble recovered_100486f0(longdouble param_1);
double recovered_10048710(double value);
float recovered_10048740(float value);
double recovered_10048770(double value);
double recovered_100487a0(double value);
float recovered_100487d0(float value);
double recovered_10048800(double value);
double recovered_10048830(double value);
float recovered_10048860(float value);
double recovered_10048890(double value);
double recovered_100488c0(double value);
float recovered_100488e0(float value);
double recovered_10048910(double value);
double recovered_10048930(double value);
float recovered_10048950(float value);
double recovered_10048970(double value);
double recovered_10048990(double value);
float recovered_100489f0(float value);
double recovered_10048a60(double value);
double recovered_10048ad0(double value,double *integer_part);
float recovered_10048b00(float value,float *integer_part);
double recovered_10048b40(double value,double *integer_part);
double recovered_10048b80(double value);
float recovered_10048c10(float value);
double recovered_10048ca0(double value);
longdouble recovered_10048d30(double param_1);
longdouble recovered_10048dc0(float param_1);
longdouble recovered_10048e50(longdouble param_1);
double recovered_10048ee0(double value);
float recovered_10048f00(float value);
int recovered_10048f30(char *text);
long recovered_10048f50(char *text);
longlong recovered_10048f70(char *text);
void recovered_10048fa0(byte *param_1,undefined4 *param_2);
void recovered_10048fc0(byte *param_1);
void recovered_10048fe0(void *base,ulong count,ulong size,pf_compare *compare);
void * recovered_10049110(void *key,void *base,ulong count,ulong size,pf_compare *compare);
int recovered_100491a0(int value);
int recovered_100491d0(int value);
int recovered_100491f0(int value);
int recovered_10049220(int value);
int recovered_10049280(int value);
int recovered_100492a0(int value);
int recovered_100492c0(void);
double recovered_10049330(long end,long start);
int recovered_10049350(uint *param_1);
int recovered_100495d0(uint in_ECX,uint in_EDX,int param_3);
undefined1 * recovered_10049660(uint *param_1);
undefined1 * recovered_10049970(uint *param_1);
undefined * recovered_10049990(undefined4 *param_1);
undefined * recovered_10049a30(uint *param_1);
int recovered_10049ab0(undefined1 *param_1,uint param_2,byte *param_3,int param_4);
undefined4 recovered_1004a090(int in_ECX,uint in_EDX,int *param_3,uint param_4,int param_5);
bool recovered_1004a120(undefined4 *param_1,int param_2);
undefined4 recovered_1004a160(undefined4 *in_ECX,int *in_EDX,int *param_3,uint *param_4);

/* Original analysis identifiers for manual recovery units. */

/* SDK public symbol bindings. */
void recovered_100440c0(void) __asm__("__Exit");
void recovered_1003f2f0(uint8_t *pointer,...) __asm__("___atomic_clear");
uint64_t recovered_1003f440(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...) __asm__("___atomic_compare_exchange");
uint64_t recovered_1003e9a0(uint8_t *pointer,uint8_t *expected,uint8_t value,...) __asm__("___atomic_compare_exchange_1");
uint64_t recovered_1003ec00(uint16_t *pointer,uint16_t *expected,uint16_t value,...) __asm__("___atomic_compare_exchange_2");
uint64_t recovered_1003ee60(uint32_t *pointer,uint32_t *expected,uint32_t value,...) __asm__("___atomic_compare_exchange_4");
uint64_t recovered_1003f0d0(uint64_t *pointer,uint64_t *expected,uint64_t value,...) __asm__("___atomic_compare_exchange_8");
void recovered_1003f3c0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...) __asm__("___atomic_exchange");
uint8_t recovered_1003e970(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_exchange_1");
uint16_t recovered_1003ebc0(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_exchange_2");
uint32_t recovered_1003ee30(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_exchange_4");
uint64_t recovered_1003f090(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_exchange_8");
uint8_t recovered_1003e9e0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_add_1");
uint16_t recovered_1003ec50(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_add_2");
uint32_t recovered_1003eea0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_add_4");
uint64_t recovered_1003f130(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_add_8");
uint8_t recovered_1003ea60(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_and_1");
uint16_t recovered_1003ecd0(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_and_2");
uint32_t recovered_1003ef20(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_and_4");
uint64_t recovered_1003f1b0(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_and_8");
uint8_t recovered_1003eb20(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_nand_1");
uint16_t recovered_1003ed90(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_nand_2");
uint32_t recovered_1003efe0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_nand_4");
uint64_t recovered_1003f270(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_nand_8");
uint8_t recovered_1003eaa0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_or_1");
uint16_t recovered_1003ed10(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_or_2");
uint32_t recovered_1003ef60(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_or_4");
uint64_t recovered_1003f1f0(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_or_8");
uint8_t recovered_1003ea20(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_sub_1");
uint16_t recovered_1003ec90(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_sub_2");
uint32_t recovered_1003eee0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_sub_4");
uint64_t recovered_1003f170(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_sub_8");
uint8_t recovered_1003eae0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_xor_1");
uint16_t recovered_1003ed50(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_xor_2");
uint32_t recovered_1003efa0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_xor_4");
uint64_t recovered_1003f230(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_xor_8");
void recovered_1003f320(size_t size,uint8_t *pointer,uint8_t *value,...) __asm__("___atomic_load");
uint8_t recovered_1003e910(uint8_t *pointer,...) __asm__("___atomic_load_1");
uint16_t recovered_1003eb60(uint16_t *pointer,...) __asm__("___atomic_load_2");
uint32_t recovered_1003edd0(uint32_t *pointer,...) __asm__("___atomic_load_4");
uint64_t recovered_1003f020(uint64_t *pointer,...) __asm__("___atomic_load_8");
void recovered_1003f370(size_t size,uint8_t *pointer,uint8_t *value,...) __asm__("___atomic_store");
void recovered_1003e940(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_store_1");
void recovered_1003eb90(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_store_2");
void recovered_1003ee00(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_store_4");
void recovered_1003f050(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_store_8");
bool recovered_1003f2b0(uint8_t *pointer,...) __asm__("___atomic_test_and_set");
void recovered_1003e7e0(void *function,void *caller) __asm__("___cyg_profile_func_enter");
void recovered_1003e860(void *function,void *caller) __asm__("___cyg_profile_func_exit");
double recovered_1003cf70(longlong value) __asm__("___floatdidf");
longdouble recovered_1003e8e0(uint param_1,uint param_2) __asm__("___floatdisf");
longdouble recovered_1003e8b0(uint param_1,uint param_2) __asm__("___floatundisf");
void recovered_1003e750(int *param_1) __asm__("___sanitizer_cov_trace_pc_guard");
void recovered_1003e720(int *param_1,int *param_2) __asm__("___sanitizer_cov_trace_pc_guard_init");
void recovered_10044140(void) __asm__("__exit");
void recovered_1003baf0(void) __asm__("_abort");
int recovered_1003bb10(int value) __asm__("_abs");
undefined4 recovered_100425d0(void) __asm__("_accept");
void recovered_10043060(int param_1) __asm__("_access");
double recovered_10047f20(double value) __asm__("_acos");
float recovered_10048050(float value) __asm__("_acosf");
double recovered_10048190(double value) __asm__("_acosl");
undefined4 recovered_100447f0(void) __asm__("_alarm");
undefined * recovered_10049990(undefined4 *param_1) __asm__("_asctime");
double recovered_10047b90(double value) __asm__("_asin");
float recovered_10047cb0(float value) __asm__("_asinf");
double recovered_10047df0(double value) __asm__("_asinl");
undefined4 recovered_10044080(int param_1) __asm__("_at_quick_exit");
double recovered_100476d0(double value) __asm__("_atan");
double recovered_100478a0(double y,double x) __asm__("_atan2");
float recovered_10047990(float y,float x) __asm__("_atan2f");
longdouble recovered_10047a90(longdouble param_1,undefined4 param_2,longdouble param_3) __asm__("_atan2l");
float recovered_10047860(float value) __asm__("_atanf");
double recovered_10047880(double value) __asm__("_atanl");
undefined4 recovered_10044040(int param_1) __asm__("_atexit");
void recovered_10048fc0(byte *param_1) __asm__("_atof");
int recovered_10048f30(char *text) __asm__("_atoi");
long recovered_10048f50(char *text) __asm__("_atol");
longlong recovered_10048f70(char *text) __asm__("_atoll");
void recovered_100466a0(uint *in_stack_00000004,uint *in_stack_00000008,uint in_stack_0000000c) __asm__("_bcmp");
void recovered_10046680(undefined4 *param_1,undefined4 *param_2,uint param_3) __asm__("_bcopy");
undefined4 recovered_10042590(void) __asm__("_bind");
void * recovered_10049110(void *key,void *base,ulong count,ulong size,pf_compare *compare) __asm__("_bsearch");
void recovered_1003bf30(undefined4 *param_1,uint param_2) __asm__("_bzero");
void * recovered_100469f0(ulong count,ulong size) __asm__("_calloc");
double recovered_1003c940(double value) __asm__("_ceil");
float recovered_1003d2a0(float value) __asm__("_ceilf");
void recovered_10045170(undefined4 *param_1) __asm__("_cfmakeraw");
undefined4 recovered_10043080(char *in_stack_00000004) __asm__("_chdir");
void recovered_10042f40(int param_1) __asm__("_chmod");
void recovered_10042fb0(int param_1) __asm__("_chown");
void recovered_10040d30(void *stream) __asm__("_clearerr");
int recovered_100492c0(void) __asm__("_clock");
undefined4 recovered_10044950(undefined4 param_1,undefined4 *param_2) __asm__("_clock_gettime");
undefined4 recovered_10042150(uint param_1) __asm__("_close");
undefined4 recovered_10043640(int param_1) __asm__("_closedir");
undefined4 recovered_10042570(void) __asm__("_connect");
double recovered_1003ccb0(double value) __asm__("_cos");
float recovered_1003d640(float value) __asm__("_cosf");
double recovered_100487a0(double value) __asm__("_cosh");
float recovered_100487d0(float value) __asm__("_coshf");
double recovered_10048800(double value) __asm__("_coshl");
undefined4 recovered_10042060(int param_1) __asm__("_creat");
undefined * recovered_10049a30(uint *param_1) __asm__("_ctime");
double recovered_10049330(long end,long start) __asm__("_difftime");
int recovered_10046ad0(int param_1,int param_2) __asm__("_div");
undefined4 recovered_10046440(void) __asm__("_dlclose");
undefined1 * recovered_10046450(void) __asm__("_dlerror");
undefined4 recovered_100463c0(void) __asm__("_dlopen");
undefined4 recovered_10046400(void) __asm__("_dlsym");
undefined4 recovered_10042310(uint param_1) __asm__("_dup");
uint recovered_10042410(uint param_1,uint param_2) __asm__("_dup2");
undefined4 recovered_100438c0(void) __asm__("_elf_aux_info");
double recovered_10048b80(double value) __asm__("_erf");
longdouble recovered_10048d30(double param_1) __asm__("_erfc");
longdouble recovered_10048dc0(float param_1) __asm__("_erfcf");
longdouble recovered_10048e50(longdouble param_1) __asm__("_erfcl");
float recovered_10048c10(float value) __asm__("_erff");
double recovered_10048ca0(double value) __asm__("_erfl");
void recovered_100445c0(int in_stack_00000004,int *in_stack_00000008) __asm__("_execv");
void recovered_10044760(int in_stack_00000004,int *in_stack_00000008) __asm__("_execve");
void recovered_10044770(int in_stack_00000004,int *in_stack_00000008) __asm__("_execvp");
void recovered_100441c0(void) __asm__("_exit");
double recovered_10048410(double value) __asm__("_exp");
double recovered_10048620(double value) __asm__("_exp2");
float recovered_10048640(float value) __asm__("_exp2f");
double recovered_10048670(double value) __asm__("_exp2l");
float recovered_100485e0(float value) __asm__("_expf");
double recovered_10048600(double value) __asm__("_expl");
longdouble recovered_100486a0(double param_1) __asm__("_expm1");
longdouble recovered_100486c0(float param_1) __asm__("_expm1f");
longdouble recovered_100486f0(longdouble param_1) __asm__("_expm1l");
double recovered_1003cd50(double value) __asm__("_fabs");
float recovered_1003d6e0(float value) __asm__("_fabsf");
undefined4 recovered_10042f60(uint param_1) __asm__("_fchmod");
undefined4 recovered_10042fd0(uint param_1) __asm__("_fchown");
int recovered_10040140(void *stream) __asm__("_fclose");
undefined4 recovered_10042670(uint param_1,uint param_2) __asm__("_fcntl");
void * recovered_10040200(int fd,char *mode) __asm__("_fdopen");
undefined4 recovered_10046be0(uint param_1) __asm__("_feclearexcept");
undefined4 recovered_10046ce0(undefined4 *param_1) __asm__("_fegetenv");
undefined4 recovered_10046c00(ushort *param_1,ushort param_2) __asm__("_fegetexceptflag");
undefined4 recovered_10046cc0(void) __asm__("_fegetround");
undefined4 recovered_10046d20(undefined4 *param_1) __asm__("_feholdexcept");
int recovered_10040cb0(void *stream) __asm__("_feof");
undefined4 recovered_10046c40(uint param_1) __asm__("_feraiseexcept");
int recovered_10040cf0(void *stream) __asm__("_ferror");
undefined4 recovered_10046d60(undefined4 *param_1) __asm__("_fesetenv");
undefined4 recovered_10046c60(ushort *param_1,uint param_2) __asm__("_fesetexceptflag");
undefined4 recovered_10046cd0(undefined4 param_1) __asm__("_fesetround");
uint recovered_10046ca0(uint param_1) __asm__("_fetestexcept");
undefined4 recovered_10046d90(uint *param_1) __asm__("_feupdateenv");
int recovered_10040310(void *stream) __asm__("_fflush");
int recovered_10040da0(void *stream) __asm__("_fgetc");
int recovered_10040c00(void *stream,long *pos) __asm__("_fgetpos");
char * recovered_10040f90(char *text,int count,void *stream) __asm__("_fgets");
int recovered_10040d70(void *stream) __asm__("_fileno");
double recovered_1003c8f0(double value) __asm__("_floor");
float recovered_1003d250(float value) __asm__("_floorf");
double recovered_1003c7f0(double x,double y) __asm__("_fmod");
float recovered_1003d020(float x,float y) __asm__("_fmodf");
void * recovered_1003f610(char *path,char *mode) __asm__("_fopen");
undefined4 recovered_100445a0(void) __asm__("_fork");
int recovered_10041220(void *stream,char *format,...) __asm__("_fprintf");
int recovered_10041040(int ch,void *stream) __asm__("_fputc");
int recovered_10041100(char *text,void *stream) __asm__("_fputs");
ulong recovered_10040640(void *ptr,ulong size,ulong count,void *stream) __asm__("_fread");
void recovered_1003bb70(void *pointer) __asm__("_free");
void * recovered_10040040(char *path,char *mode,void *stream) __asm__("_freopen");
void recovered_1003c710(double param_1,int *param_2) __asm__("_frexp");
longdouble recovered_1003d080(float param_1,int *param_2) __asm__("_frexpf");
int recovered_100409b0(void *stream,long offset,int origin) __asm__("_fseek");
int recovered_10040b30(void *stream,longlong offset,int origin) __asm__("_fseeko");
int recovered_10040c50(void *stream,long *pos) __asm__("_fsetpos");
undefined4 recovered_10042b00(uint param_1,int param_2) __asm__("_fstat");
undefined4 recovered_10042cd0(uint param_1,undefined4 *param_2) __asm__("_fstatfs");
int recovered_100434b0(uint param_1) __asm__("_fsync");
long recovered_10040ad0(void *stream) __asm__("_ftell");
longlong recovered_10040bc0(void *stream) __asm__("_ftello");
undefined4 recovered_100433b0(uint param_1,uint param_2,int param_3) __asm__("_ftruncate");
ulong recovered_10040820(void *ptr,ulong size,ulong count,void *stream) __asm__("_fwrite");
int recovered_10040e00(void *stream) __asm__("_getc");
int recovered_10040ec0(void) __asm__("_getchar");
int recovered_10043140(int param_1,uint param_2) __asm__("_getcwd");
undefined4 recovered_10044340(void) __asm__("_getegid");
int recovered_10043810(char *param_1) __asm__("_getenv");
undefined4 recovered_10044320(void) __asm__("_geteuid");
undefined4 recovered_10044330(void) __asm__("_getgid");
undefined1 * recovered_10046170(int param_1) __asm__("_getgrgid");
undefined1 * recovered_10046290(int param_1) __asm__("_getgrnam");
undefined4 recovered_10044cb0(int param_1,uint param_2) __asm__("_gethostname");
undefined4 recovered_100447e0(void) __asm__("_getpagesize");
undefined4 recovered_10044390(void) __asm__("_getpid");
undefined4 recovered_10044410(void) __asm__("_getppid");
void recovered_100438e0(int param_1,char *param_2) __asm__("_getprogpath");
undefined1 * recovered_10045d30(int param_1) __asm__("_getpwnam");
int recovered_10046100(int param_1,int param_2,int param_3,uint param_4,int *param_5) __asm__("_getpwnam_r");
undefined1 * recovered_10045c20(int param_1) __asm__("_getpwuid");
int recovered_10045e50(int param_1,int param_2,int param_3,uint param_4,int *param_5) __asm__("_getpwuid_r");
undefined4 recovered_10044a10(uint param_1,undefined4 *param_2) __asm__("_getrlimit");
undefined4 recovered_10044ae0(undefined4 param_1,int param_2) __asm__("_getrusage");
int recovered_10044420(int param_1) __asm__("_getsid");
undefined4 recovered_10044900(undefined4 *param_1,undefined4 *param_2) __asm__("_gettimeofday");
undefined4 recovered_10044310(void) __asm__("_getuid");
undefined1 * recovered_10049660(uint *param_1) __asm__("_gmtime");
undefined4 recovered_100451a0(uint param_1,int param_2,undefined4 *param_3) __asm__("_ioctl");
int recovered_1003c240(int value) __asm__("_isalnum");
int recovered_1003c220(int value) __asm__("_isalpha");
bool recovered_10044300(uint param_1) __asm__("_isatty");
int recovered_1003c270(int value) __asm__("_isblank");
int recovered_10049280(int value) __asm__("_iscntrl");
int recovered_100491d0(int value) __asm__("_isdigit");
int recovered_10047230(double value) __asm__("_isfinite");
int recovered_100492a0(int value) __asm__("_isgraph");
int recovered_1003c1e0(int value) __asm__("_islower");
int recovered_1003c290(int value) __asm__("_isprint");
int recovered_10049220(int value) __asm__("_ispunct");
int recovered_100491a0(int value) __asm__("_isspace");
int recovered_1003c200(int value) __asm__("_isupper");
int recovered_100491f0(int value) __asm__("_isxdigit");
undefined4 recovered_10044ef0(int param_1) __asm__("_kill");
long recovered_10046a90(long value) __asm__("_labs");
void recovered_10043020(int param_1) __asm__("_lchown");
longdouble recovered_1003c6e0(double param_1,int param_2) __asm__("_ldexp");
longdouble recovered_1003d170(float param_1,int param_2) __asm__("_ldexpf");
int recovered_10046af0(int param_1,int param_2) __asm__("_ldiv");
undefined4 recovered_10043210(void) __asm__("_link");
undefined4 recovered_100425b0(void) __asm__("_listen");
longlong recovered_10046ab0(longlong value) __asm__("_llabs");
longlong * recovered_10046b10(longlong *param_1,uint param_2,int param_3,int param_4,int param_5) __asm__("_lldiv");
longlong recovered_100475b0(double value) __asm__("_llrint");
longlong recovered_10047610(float value) __asm__("_llrintf");
longlong recovered_10047670(double value) __asm__("_llrintl");
longlong recovered_1003cbc0(double value) __asm__("_llround");
undefined * recovered_1003c640(void) __asm__("_localeconv");
undefined1 * recovered_10049970(uint *param_1) __asm__("_localtime");
double recovered_1003caa0(double value) __asm__("_log");
double recovered_10048ee0(double value) __asm__("_log10");
float recovered_10048f00(float value) __asm__("_log10f");
double recovered_10048930(double value) __asm__("_log1p");
float recovered_10048950(float value) __asm__("_log1pf");
double recovered_10048970(double value) __asm__("_log1pl");
double recovered_100488c0(double value) __asm__("_log2");
float recovered_100488e0(float value) __asm__("_log2f");
double recovered_10048910(double value) __asm__("_log2l");
double recovered_10048990(double value) __asm__("_logb");
float recovered_100489f0(float value) __asm__("_logbf");
double recovered_10048a60(double value) __asm__("_logbl");
float recovered_1003d420(float value) __asm__("_logf");
__attribute__((naked,noreturn)) void recovered_10046df0(void *context,int value) __asm__("_longjmp");
long recovered_10047490(double value) __asm__("_lrint");
long recovered_100474f0(float value) __asm__("_lrintf");
long recovered_10047550(double value) __asm__("_lrintl");
long recovered_1003d550(double value) __asm__("_lround");
undefined8 recovered_10042260(uint param_1,int param_2,undefined4 param_3,int param_4) __asm__("_lseek");
void recovered_10042af0(int in_stack_00000004,int in_stack_00000008) __asm__("_lstat");
undefined4 recovered_10043800(void) __asm__("_madvise");
void * recovered_1003bb30(ulong size) __asm__("_malloc");
void * recovered_10046730(void *memory,int value,ulong count) __asm__("_memchr");
int recovered_1003c070(void *left,void *right,ulong count) __asm__("_memcmp");
void * recovered_1003bbf0(void *destination,void *source,ulong count) __asm__("_memcpy");
void * recovered_1003bcb0(void *destination,void *source,ulong count) __asm__("_memmove");
void * recovered_1003be80(void *destination,int value,ulong count) __asm__("_memset");
undefined4 recovered_10042de0(char *in_stack_00000004) __asm__("_mkdir");
void recovered_10044020(int param_1) __asm__("_mkstemp");
undefined4 recovered_10043e20(int param_1,int param_2) __asm__("_mkstemps");
int recovered_10049350(uint *param_1) __asm__("_mktime");
int recovered_10043690(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                      int param_6) __asm__("_mmap");
double recovered_10048ad0(double value,double *integer_part) __asm__("_modf");
float recovered_10048b00(float value,float *integer_part) __asm__("_modff");
double recovered_10048b40(double value,double *integer_part) __asm__("_modfl");
undefined4 recovered_100437e0(void) __asm__("_mprotect");
undefined4 recovered_100437f0(void) __asm__("_msync");
undefined4 recovered_100437c0(void *param_1) __asm__("_munmap");
undefined4 recovered_100448a0(undefined4 param_1,undefined4 *param_2) __asm__("_nanosleep");
double recovered_100473d0(double value) __asm__("_nearbyint");
float recovered_10047410(float value) __asm__("_nearbyintf");
double recovered_10047450(double value) __asm__("_nearbyintl");
undefined4 recovered_10041e30(int param_1,uint param_2) __asm__("_open");
uint * recovered_100434f0(char *in_stack_00000004) __asm__("_opendir");
int recovered_100402f0(void *stream) __asm__("_pclose");
void recovered_10041940(char *prefix) __asm__("_perror");
undefined4 recovered_10042520(undefined4 *param_1) __asm__("_pipe");
int recovered_10045360(int param_1,int param_2) __asm__("_poll");
void * recovered_100402d0(char *command,char *mode) __asm__("_popen");
undefined4
recovered_10045a00(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5) __asm__("_posix_spawn");
undefined4 recovered_100459e0(void) __asm__("_posix_spawn_file_actions_addclose");
undefined4 recovered_100459d0(void) __asm__("_posix_spawn_file_actions_adddup2");
undefined4 recovered_100459f0(void) __asm__("_posix_spawn_file_actions_addopen");
undefined4 recovered_100459c0(void) __asm__("_posix_spawn_file_actions_destroy");
undefined4 recovered_100459a0(undefined4 *param_1) __asm__("_posix_spawn_file_actions_init");
void recovered_10045bf0(int *param_1,int param_2,int *in_stack_00000014) __asm__("_posix_spawnp");
double recovered_1003c850(double base,double exponent) __asm__("_pow");
float recovered_1003d1b0(float base,float exponent) __asm__("_powf");
int recovered_100412e0(char *format,...) __asm__("_printf");
undefined4 recovered_100454c0(void) __asm__("_pthread_attr_destroy");
undefined4 recovered_100454a0(undefined4 *param_1) __asm__("_pthread_attr_init");
undefined4 recovered_100455e0(void) __asm__("_pthread_cond_broadcast");
undefined4 recovered_100455a0(void) __asm__("_pthread_cond_destroy");
undefined4 recovered_10045580(undefined4 *param_1) __asm__("_pthread_cond_init");
undefined4 recovered_100455d0(void) __asm__("_pthread_cond_signal");
undefined4 recovered_100455c0(void) __asm__("_pthread_cond_timedwait");
undefined4 recovered_100455b0(void) __asm__("_pthread_cond_wait");
undefined4 recovered_10045430(int *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4) __asm__("_pthread_create");
undefined4 recovered_10045490(void) __asm__("_pthread_detach");
bool recovered_10045990(int param_1,int param_2) __asm__("_pthread_equal");
undefined4 recovered_10045860(uint param_1) __asm__("_pthread_getspecific");
undefined4 recovered_10045470(undefined4 param_1,undefined4 *param_2) __asm__("_pthread_join");
undefined4 recovered_100455f0(int *param_1) __asm__("_pthread_key_create");
undefined4 recovered_10045830(uint param_1) __asm__("_pthread_key_delete");
undefined4 recovered_100454f0(void) __asm__("_pthread_mutex_destroy");
undefined4 recovered_100454d0(undefined4 *param_1) __asm__("_pthread_mutex_init");
undefined4 recovered_10045500(void) __asm__("_pthread_mutex_lock");
undefined4 recovered_10045510(void) __asm__("_pthread_mutex_trylock");
undefined4 recovered_10045520(void) __asm__("_pthread_mutex_unlock");
undefined4 recovered_10045550(void) __asm__("_pthread_mutexattr_destroy");
undefined4 recovered_10045530(undefined4 *param_1) __asm__("_pthread_mutexattr_init");
undefined4 recovered_10045560(undefined4 *param_1,undefined4 param_2) __asm__("_pthread_mutexattr_settype");
undefined4 recovered_100453f0(int *param_1,undefined *param_2) __asm__("_pthread_once");
undefined4 recovered_100458d0(void) __asm__("_pthread_rwlock_destroy");
undefined4 recovered_100458b0(undefined4 *param_1) __asm__("_pthread_rwlock_init");
undefined4 recovered_100458e0(void) __asm__("_pthread_rwlock_rdlock");
undefined4 recovered_10045900(void) __asm__("_pthread_rwlock_unlock");
undefined4 recovered_100458f0(void) __asm__("_pthread_rwlock_wrlock");
undefined4 recovered_10045910(void) __asm__("_pthread_self");
undefined4 recovered_10045880(uint param_1,undefined4 param_2) __asm__("_pthread_setspecific");
undefined4 recovered_10044e80(int param_1,uint *param_2,uint *param_3) __asm__("_pthread_sigmask");
int recovered_10041080(int ch,void *stream) __asm__("_putc");
int recovered_100410c0(int ch) __asm__("_putchar");
undefined4 recovered_10043bd0(int param_1) __asm__("_putenv");
int recovered_10041150(char *text) __asm__("_puts");
void recovered_10048fe0(void *base,ulong count,ulong size,pf_compare *compare) __asm__("_qsort");
void recovered_10044280(void) __asm__("_quick_exit");
undefined4 recovered_10044ee0(void) __asm__("_raise");
int recovered_10046a60(void) __asm__("_rand");
undefined8 recovered_100420b0(uint param_1,undefined1 *param_2,int param_3) __asm__("_read");
uint * recovered_10043610(uint *param_1) __asm__("_readdir");
undefined8 recovered_100431d0(void) __asm__("_readlink");
void * recovered_1003bbb0(void *pointer,ulong size) __asm__("_realloc");
int recovered_10043d80(int param_1,int param_2) __asm__("_realpath");
undefined8 recovered_10042650(void) __asm__("_recv");
int recovered_10041ae0(char *path) __asm__("_remove");
int recovered_10041c50(char *oldPath,char *newPath) __asm__("_rename");
void recovered_10043670(int param_1) __asm__("_rewinddir");
double recovered_10047310(double value) __asm__("_rint");
float recovered_10047350(float value) __asm__("_rintf");
double recovered_10047390(double value) __asm__("_rintl");
void recovered_10042f30(char *in_stack_00000004) __asm__("_rmdir");
double recovered_10047250(double value) __asm__("_round");
float recovered_10047290(float value) __asm__("_roundf");
double recovered_100472d0(double value) __asm__("_roundl");
undefined4 recovered_10044b80(void) __asm__("_sched_get_priority_max");
undefined4 recovered_10044b70(void) __asm__("_sched_get_priority_min");
undefined4 recovered_10044bc0(undefined4 param_1,undefined4 *param_2) __asm__("_sched_getparam");
undefined4 recovered_10044ba0(void) __asm__("_sched_getscheduler");
undefined4 recovered_10044bb0(void) __asm__("_sched_setparam");
undefined4 recovered_10044b90(void) __asm__("_sched_setscheduler");
undefined4 recovered_10044b20(void) __asm__("_sched_yield");
uint recovered_10045200(int param_1,uint *param_2,uint *param_3,uint *param_4) __asm__("_select");
undefined8 recovered_10042630(void) __asm__("_send");
void recovered_10041920(void *stream,char *buffer) __asm__("_setbuf");
undefined4 recovered_10043940(char *param_1,int param_2,int param_3) __asm__("_setenv");
undefined4 recovered_10044370(int param_1) __asm__("_setgid");
__attribute__((naked,returns_twice)) int recovered_10046dc0(void *context) __asm__("_setjmp");
undefined * recovered_1003c630(void) __asm__("_setlocale");
undefined4 recovered_10044ab0(uint param_1) __asm__("_setrlimit");
undefined4 recovered_10044520(void) __asm__("_setsid");
undefined4 recovered_10042610(void) __asm__("_setsockopt");
undefined4 recovered_10044350(int param_1) __asm__("_setuid");
int recovered_100418f0(void *stream,char *buffer,int mode,ulong size) __asm__("_setvbuf");
undefined4 recovered_100425f0(void) __asm__("_shutdown");
undefined4 recovered_10044d90(int param_1,undefined4 *param_2,undefined4 *param_3) __asm__("_sigaction");
undefined4 recovered_10044ff0(uint *param_1,int param_2) __asm__("_sigaddset");
undefined4 recovered_10045030(uint *param_1,int param_2) __asm__("_sigdelset");
undefined4 recovered_10044f90(undefined4 *param_1) __asm__("_sigemptyset");
undefined4 recovered_10044fc0(undefined4 *param_1) __asm__("_sigfillset");
uint recovered_10045070(uint *param_1,uint param_2) __asm__("_sigismember");
undefined4 recovered_10044d30(int param_1,undefined4 param_2) __asm__("_signal");
undefined4 recovered_10044e20(int param_1,uint *param_2,uint *param_3) __asm__("_sigprocmask");
double recovered_1003cc10(double value) __asm__("_sin");
float recovered_1003d5a0(float value) __asm__("_sinf");
double recovered_10048710(double value) __asm__("_sinh");
float recovered_10048740(float value) __asm__("_sinhf");
double recovered_10048770(double value) __asm__("_sinhl");
undefined4 recovered_10044800(void) __asm__("_sleep");
int recovered_1003e570(char *buffer,unsigned long size,char *format,...) __asm__("_snprintf");
undefined4 recovered_10042550(void) __asm__("_socket");
int recovered_10041360(char *buffer,char *format,...) __asm__("_sprintf");
double recovered_1003c9a0(double value) __asm__("_sqrt");
float recovered_1003d400(float value) __asm__("_sqrtf");
void recovered_10046a40(uint seed) __asm__("_srand");
int recovered_100418c0(char *buffer,char *format,...) __asm__("_sscanf");
undefined4 recovered_10041ee0(int param_1,int param_2) __asm__("_stat");
undefined4 recovered_10042be0(int param_1,undefined4 *param_2) __asm__("_statfs");
int recovered_10046500(char *param_1,byte *param_2) __asm__("_strcasecmp");
char * recovered_10046870(char *destination,char *source) __asm__("_strcat");
char * recovered_1003c500(char *text,int value) __asm__("_strchr");
int recovered_1003c320(char *left,char *right) __asm__("_strcmp");
int recovered_1003c360(char *left,char *right) __asm__("_strcoll");
char * recovered_1003c3a0(char *destination,char *source) __asm__("_strcpy");
ulong recovered_100467c0(char *text,char *reject) __asm__("_strcspn");
char * recovered_1003c3c0(char *text) __asm__("_strdup");
char * recovered_100419f0(int error_number) __asm__("_strerror");
int recovered_10049ab0(undefined1 *param_1,uint param_2,byte *param_3,int param_4) __asm__("_strftime");
ulong recovered_1003c2f0(char *text) __asm__("_strlen");
int recovered_100465a0(int param_1,int param_2,int param_3) __asm__("_strncasecmp");
char * recovered_100468a0(char *destination,char *source,ulong count) __asm__("_strncat");
int recovered_10046620(char *left,char *right,ulong count) __asm__("_strncmp");
char * recovered_10046820(char *destination,char *source,ulong count) __asm__("_strncpy");
int recovered_100464a0(int param_1,int param_2) __asm__("_strndup");
ulong recovered_10046470(char *text,ulong max_length) __asm__("_strnlen");
char * recovered_1003c590(char *text,char *accept) __asm__("_strpbrk");
char * recovered_10046760(char *text,int value) __asm__("_strrchr");
undefined * recovered_100467a0(int param_1) __asm__("_strsignal");
ulong recovered_1003c540(char *text,char *accept) __asm__("_strspn");
char * recovered_1003c5e0(char *haystack,char *needle) __asm__("_strstr");
double recovered_1003d9a0(char *text,char **endptr) __asm__("_strtod");
float recovered_1003db40(char *text,char **endptr) __asm__("_strtof");
char * recovered_10046970(char *text,char *delimiters) __asm__("_strtok");
undefined1 * recovered_100466b0(int param_1,int param_2,int *param_3) __asm__("_strtok_r");
long recovered_1003d700(char *text,char **endptr,int base) __asm__("_strtol");
void recovered_10048fa0(byte *param_1,undefined4 *param_2) __asm__("_strtold");
longlong recovered_10046b80(char *text,char **endptr,int base) __asm__("_strtoll");
ulong recovered_1003d850(char *text,char **endptr,int base) __asm__("_strtoul");
ulonglong recovered_10046bb0(char *text,char **endptr,int base) __asm__("_strtoull");
ulong recovered_10046900(char *destination,char *source,ulong count) __asm__("_strxfrm");
undefined4 recovered_100431f0(void) __asm__("_symlink");
undefined4 recovered_10044780(int param_1) __asm__("_sysconf");
undefined4 recovered_10043c60(int param_1) __asm__("_system");
double recovered_100482d0(double value) __asm__("_tan");
float recovered_10048330(float value) __asm__("_tanf");
double recovered_10048830(double value) __asm__("_tanh");
float recovered_10048860(float value) __asm__("_tanhf");
double recovered_10048890(double value) __asm__("_tanhl");
double recovered_100483a0(double value) __asm__("_tanl");
void recovered_1003f4d0(int param_1) __asm__("_tayga_libc_prepare");
undefined4 recovered_100450b0(uint param_1,undefined4 *param_2) __asm__("_tcgetattr");
undefined4 recovered_10045130(uint param_1,undefined4 param_2,undefined4 *param_3) __asm__("_tcsetattr");
void recovered_1003c650(undefined4 *param_1) __asm__("_time");
bool recovered_1004a120(undefined4 *param_1,int param_2) __asm__("_timespec_get");
char * recovered_10041aa0(char *buffer) __asm__("_tmpnam");
int recovered_1003c2b0(int value) __asm__("_tolower");
int recovered_1003c2d0(int value) __asm__("_toupper");
double recovered_1003d310(double value) __asm__("_trunc");
undefined4 recovered_10043230(int param_1,uint param_2,int param_3) __asm__("_truncate");
float recovered_1003d380(float value) __asm__("_truncf");
undefined4 recovered_10043040(undefined4 param_1) __asm__("_umask");
undefined4 recovered_10044bf0(int param_1) __asm__("_uname");
int recovered_10040f30(int ch,void *stream) __asm__("_ungetc");
undefined4 recovered_10041af0(char *in_stack_00000004) __asm__("_unlink");
undefined4 recovered_10043b80(char *param_1) __asm__("_unsetenv");
undefined4 recovered_10044850(void) __asm__("_usleep");
int recovered_100411c0(void *stream,char *format,void *args) __asm__("_vfprintf");
int recovered_10041280(char *format,void *args) __asm__("_vprintf");
int recovered_1003db70(char *buffer,unsigned long size,char *format,void *input) __asm__("_vsnprintf");
int recovered_10041340(char *buffer,char *format,void *input) __asm__("_vsprintf");
int recovered_10041390(char *buffer,char *format,void *args) __asm__("_vsscanf");
undefined4 recovered_100449b0(undefined4 *param_1) __asm__("_wait");
undefined4 recovered_100449d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4) __asm__("_wait4");
undefined4 recovered_10044990(undefined4 param_1,undefined4 *param_2) __asm__("_waitpid");
byte recovered_100470b0(double param_1) __asm__("_wm_math_fpclassify");
byte recovered_10047140(float param_1) __asm__("_wm_math_fpclassifyf");
int recovered_100471c0(long double value) __asm__("_wm_math_fpclassifyl");
bool recovered_10046e20(undefined4 param_1,uint param_2) __asm__("_wm_math_isfinite");
bool recovered_10046e40(uint param_1) __asm__("_wm_math_isfinitef");
byte recovered_10046e60(undefined4 param_1,undefined4 param_2,ushort param_3) __asm__("_wm_math_isfinitel");
bool recovered_10046ea0(int param_1,uint param_2) __asm__("_wm_math_isinf");
bool recovered_10046ec0(uint param_1) __asm__("_wm_math_isinff");
bool recovered_10046ee0(int param_1,int param_2,uint param_3) __asm__("_wm_math_isinfl");
bool recovered_10046f10(int param_1,uint param_2) __asm__("_wm_math_isnan");
bool recovered_10046f40(uint param_1) __asm__("_wm_math_isnanf");
bool recovered_10046f70(longdouble param_1) __asm__("_wm_math_isnanl");
bool recovered_10046f90(undefined4 param_1,uint param_2) __asm__("_wm_math_isnormal");
bool recovered_10046fb0(uint param_1) __asm__("_wm_math_isnormalf");
byte recovered_10046fd0(int param_1,int param_2,ushort param_3) __asm__("_wm_math_isnormall");
uint recovered_10047040(undefined4 param_1,uint param_2) __asm__("_wm_math_signbit");
uint recovered_10047050(uint param_1) __asm__("_wm_math_signbitf");
bool recovered_10047060(longdouble param_1) __asm__("_wm_math_signbitl");
uint * recovered_1003b610(int param_1) __asm__("_wm_probe_heap_alloc");
int recovered_1003b520(void) __asm__("_wm_probe_heap_free_bytes");
void recovered_1003b560(void) __asm__("_wm_probe_heap_free_bytes64");
void recovered_1003b1f0(void) __asm__("_wm_probe_heap_reset");
int recovered_1003b5a0(void) __asm__("_wm_probe_heap_total_bytes");
void recovered_1003b5d0(void) __asm__("_wm_probe_heap_total_bytes64");
void recovered_10040d50(int *param_1) __asm__("_wmfs_clearerr");
undefined4 recovered_10040530(int *param_1) __asm__("_wmfs_fclose");
undefined1 recovered_10040cd0(int *param_1) __asm__("_wmfs_feof");
undefined1 recovered_10040d10(int *param_1) __asm__("_wmfs_ferror");
void recovered_10040520(int *in_stack_00000004) __asm__("_wmfs_fflush");
void recovered_100401e0(int in_stack_00000004,byte *in_stack_00000008) __asm__("_wmfs_fopen");
void recovered_10040990(undefined1 *in_stack_00000004,uint in_stack_00000008,int in_stack_0000000c,
                       int *in_stack_00000010) __asm__("_wmfs_fread");
void recovered_100401f0(int in_stack_00000004,byte *in_stack_00000008,int *in_stack_0000000c) __asm__("_wmfs_freopen");
undefined4 recovered_10040a40(int *param_1,int param_2,int param_3) __asm__("_wmfs_fseek");
int recovered_10040b00(int *param_1) __asm__("_wmfs_ftell");
void recovered_100409a0(int in_stack_00000004,uint in_stack_00000008,uint in_stack_0000000c,
                       int *in_stack_00000010) __asm__("_wmfs_fwrite");
uint recovered_10040e60(int *param_1) __asm__("_wmfs_getc");
void recovered_10041c40(char *in_stack_00000004) __asm__("_wmfs_remove");
void recovered_10041e20(char *in_stack_00000004,char *in_stack_00000008) __asm__("_wmfs_rename");
uint recovered_10040f60(uint param_1,int *param_2) __asm__("_wmfs_ungetc");
undefined8 recovered_10042100(uint param_1,int param_2,uint param_3) __asm__("_write");
