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
extern uint8_t pf_module_state[];
void recovered_100007c0(void);
void recovered_10000ae0(void);
int recovered_10000be0(int argc,char **argv);
uchar recovered_10001060(int argc,char **argv,void *options);
void recovered_10001900(void);
void recovered_10001990(void);
undefined1 * recovered_100019e0(int param_1,uint *param_2);
undefined1 recovered_10001bd0(int param_1,uint *param_2);
void recovered_10001f80(int param_1);
void recovered_10002030(undefined4 *param_1);
byte recovered_10002090(int param_1,undefined4 *param_2,int *param_3);
void recovered_10002400(undefined4 *param_1);
undefined1 recovered_10002470(char *param_1,int param_2,int param_3);
void recovered_100025f0(void *options);
bool recovered_10002690(byte *param_1,byte *param_2);
undefined1 recovered_10002710(char *param_1,char *param_2);
uchar recovered_100027b0(void *options,char *name);
uint recovered_10002890(byte *param_1);
undefined1 recovered_10002910(byte *param_1,undefined4 *param_2);
undefined1 recovered_10002a40(int param_1);
void * recovered_10002bb0(char *name);
void recovered_10002fc0(int param_1);
undefined4 recovered_10003040(byte *param_1,int param_2);
undefined1 recovered_10003220(uint *param_1);
byte recovered_100033e0(int param_1);
undefined1 recovered_10003b70(int param_1,char *param_2,undefined4 param_3);
int recovered_10003c60(int param_1,int param_2);
void recovered_10003d20(byte *param_1,int param_2);
void recovered_10003fc0(int *param_1,undefined1 *param_2);
undefined1 recovered_10004030(undefined4 *param_1,int param_2);
void recovered_10004340(int *param_1);
undefined1 recovered_10004a70(undefined4 *param_1,int param_2);
undefined1 recovered_10004e50(undefined4 *param_1,int param_2);
undefined1 recovered_100052e0(undefined4 *param_1,int param_2);
void recovered_10005740(int param_1);
bool recovered_10005860(byte param_1);
bool recovered_100058d0(byte param_1);
void recovered_10005940(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4);
void recovered_100059d0(undefined4 *param_1,undefined4 *param_2);
undefined4 * recovered_10005a40(undefined4 *param_1,undefined4 *param_2);
void recovered_10005b00(undefined4 *param_1);
int recovered_10005cb0(char param_1);
uint recovered_10005d60(int *param_1);
int * recovered_10005de0(int *param_1,uint param_2);
int * recovered_10005f00(int *param_1,uint param_2);
bool recovered_10006040(int param_1,byte *param_2);
bool recovered_100060c0(int param_1,byte *param_2);
bool recovered_10006130(int *param_1);
int * recovered_10006190(int *param_1,uint param_2);
byte * recovered_100062d0(byte *param_1,undefined4 param_2);
int * recovered_10006350(int *param_1,uint param_2);
int * recovered_10006460(int *param_1,uint param_2);
int * recovered_10006570(int *param_1,uint param_2);
int * recovered_10006680(int *param_1,uint param_2);
int * recovered_100069f0(int *param_1,uint param_2);
int * recovered_10006d80(int *param_1,int *param_2,int param_3);
int * recovered_10006e20(int *param_1,uint param_2);
int * recovered_10006fd0(int *param_1,uint param_2);
byte * recovered_10007240(byte *param_1,uint param_2);
byte * recovered_100074c0(byte *param_1,int *param_2,uint param_3);
byte * recovered_10007580(byte *param_1,uint param_2);
uint recovered_10007b70(int param_1,byte *param_2);
uint recovered_10007be0(int param_1,int param_2);
void recovered_10007c60(int param_1,char *param_2,undefined4 param_3);
undefined4 * recovered_10007d00(undefined4 *param_1,uint param_2,int param_3);
uint recovered_10008030(byte *param_1);
byte * recovered_10008440(byte *param_1,int param_2);
undefined4 * recovered_10008a00(undefined4 *param_1,int param_2,int param_3);
int recovered_10008b90(int param_1,int param_2);
undefined1 recovered_10008c50(int param_1,int param_2,undefined4 *param_3);
void recovered_10008cd0(int param_1,char *param_2,undefined4 param_3);
void recovered_10008dd0(int param_1);
byte * recovered_10008e90(byte *param_1,int param_2);
uint recovered_10008f70(int param_1,int param_2,uint param_3);
undefined4 *
recovered_100090a0(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,
                  undefined1 *param_6);
int recovered_10009470(int param_1,int param_2);
byte * recovered_10009530(byte *param_1,undefined4 param_2,byte *param_3,int param_4,uint param_5,
                         undefined1 *param_6);
byte recovered_10009850(uint param_1,byte param_2);
byte recovered_1000aaf0(int param_1,byte param_2);
uint recovered_1000aca0(int param_1,byte param_2);
uint recovered_1000af80(int param_1,byte param_2);
void recovered_1000b450(uint param_1,byte param_2);
void recovered_1000b700(int param_1,byte param_2);
void recovered_1000b9d0(int param_1,byte param_2,byte param_3);
void recovered_1000bcf0(int param_1,int param_2,uint param_3,int param_4);
byte recovered_1000bf60(int param_1,byte param_2);
byte recovered_1000c2a0(uint param_1,byte *param_2,byte param_3);
undefined4 * recovered_1000cbe0(int param_1);
undefined4 * recovered_1000cd60(int param_1);
uint recovered_1000d0e0(int param_1,undefined1 *param_2);
undefined1 recovered_1000d240(int param_1,undefined1 *param_2,byte param_3);
void recovered_1000d470(int param_1,int param_2);
bool recovered_1000d4f0(char *param_1,int *param_2,int *param_3,int *param_4);
undefined4 * recovered_1000d7a0(undefined4 *param_1);
undefined4 * recovered_1000d900(uint param_1,uint param_2);
void recovered_1000d970(uint *param_1,uint *param_2);
void recovered_1000da30(int param_1);
void recovered_1000daf0(int param_1,int param_2,int param_3);
undefined1 recovered_1000db60(int param_1,char *param_2);
void recovered_1000dc20(int param_1,int param_2,uint param_3,undefined1 *param_4,uint param_5);
void recovered_1000e0d0(int param_1,uint param_2,int param_3);
void recovered_1000e150(int param_1,uint param_2,undefined1 param_3);
void recovered_1000e1c0(char *out,ulong capacity,int value,uchar hexadecimal,uchar uppercase);
uint recovered_1000e2d0(int param_1);
undefined1
recovered_1000e400(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint param_5,
                  uint param_6);
void recovered_1000e600(char *param_1,int param_2);
undefined1
recovered_1000e7e0(uint param_1,uint param_2,byte *param_3,uint param_4,undefined4 *param_5,
                  int param_6);
uint recovered_1000ea50(int param_1);
uint recovered_1000eb60(int param_1,char *param_2,byte param_3,uint param_4,int param_5,byte param_6
                       ,byte param_7);
undefined1 recovered_1000efc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
byte recovered_1000f110(undefined4 *param_1);
void recovered_10012760(undefined1 *param_1,uint param_2,char *param_3);
undefined1 recovered_10012840(int param_1,char *param_2,int param_3,int param_4);
void recovered_10012970(int param_1);
uint recovered_100129c0(int param_1,char *param_2,byte param_3);
undefined4 * recovered_10012a60(int param_1);
byte recovered_10012c70(undefined4 *param_1,undefined4 *param_2);
undefined1 recovered_10012e80(int param_1,int param_2,int param_3);
byte recovered_100130f0(int param_1,char *param_2,char *param_3,byte param_4);
byte recovered_10013200(int param_1,byte param_2);
undefined1 recovered_10013880(int param_1,uint param_2,uint param_3);
undefined1 recovered_10013ca0(int param_1,char *param_2,uint param_3);
undefined1 recovered_10013ea0(int param_1,char *param_2,int param_3,int param_4);
uint recovered_100140e0(int param_1,char *param_2);
undefined4 recovered_10014200(int param_1);
uint recovered_100142c0(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5);
byte recovered_10014c00(int param_1,int param_2);
void recovered_100158f0(int param_1);
void recovered_10015b60(int param_1);
void recovered_10015c20(int param_1);
void recovered_10015d70(int param_1);
void recovered_10015e30(int param_1);
void recovered_10015ef0(int param_1);
void recovered_10015fb0(int param_1);
void recovered_100161d0(int param_1);
void recovered_100163a0(int param_1);
void recovered_100164d0(int param_1);
void recovered_10016600(int param_1);
void recovered_10016790(int param_1);
void recovered_100172d0(int param_1);
uint recovered_100181f0(int param_1,char *param_2);
void recovered_100183a0(int param_1);
undefined1 recovered_10018490(int param_1,int param_2);
uint recovered_100187e0(int param_1);
byte recovered_10018890(int param_1,int param_2);
bool recovered_10018d50(int param_1,byte *param_2);
undefined1 recovered_10018e10(int param_1,uint param_2,uint *param_3);
byte recovered_10018fc0(int param_1,char *param_2,char *param_3);
undefined1 recovered_10019070(int param_1,char *param_2,int param_3,int param_4);
undefined1 recovered_100191a0(int param_1,int param_2,char *param_3,char *param_4);
undefined1 recovered_100193a0(int param_1);
uint recovered_10019530(byte *param_1,byte *param_2);
byte recovered_100195b0(int param_1,int param_2,undefined1 *param_3);
byte recovered_1001a050(int param_1,int param_2,int param_3);
uint recovered_1001a2b0(int param_1,char *param_2,char *param_3,byte param_4,uint param_5,
                       int param_6,byte param_7,byte param_8);
uint recovered_1001a440(int param_1,char *param_2,char *param_3,byte param_4);
byte recovered_1001a570(int param_1);
byte recovered_1001a720(int param_1,undefined4 param_2);
byte recovered_1001a890(int param_1);
byte recovered_1001adb0(int param_1);
byte recovered_1001af20(int param_1);
byte recovered_1001afe0(int param_1,undefined4 param_2);
byte recovered_1001b140(int param_1);
byte recovered_1001b2d0(int param_1,undefined4 param_2);
byte recovered_1001b430(int param_1);
byte recovered_1001b680(int param_1);
byte recovered_1001b830(int param_1);
byte recovered_1001c4b0(int param_1);
byte recovered_1001ccb0(int param_1);
byte recovered_1001cf00(int param_1);
byte recovered_1001d140(int param_1);
byte recovered_1001d4d0(int param_1);
undefined1 recovered_1001d840(int param_1,byte param_2);
undefined1 recovered_1001daf0(int param_1);
byte recovered_1001e4f0(int param_1);
byte recovered_1001eb30(int param_1,undefined4 param_2);
byte recovered_1001ec90(int param_1);
undefined1 recovered_1001ef60(int param_1,int *param_2);
undefined4 recovered_1001f3d0(int param_1);
bool recovered_1001f4a0(int param_1,byte *param_2);
byte recovered_1001f560(int param_1,undefined1 *param_2,int param_3);
undefined1
recovered_1001f6e0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,
                  undefined4 *param_6);
undefined1
recovered_1001f900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7);
undefined1 recovered_1001fe50(int param_1,int param_2,int param_3,int param_4);
undefined1 recovered_10020160(int param_1,int param_2,int param_3,int param_4,uint param_5);
int recovered_10020240(int param_1,char *param_2);
byte recovered_10020710(int param_1,undefined1 *param_2,int param_3,undefined1 *param_4);
undefined1 recovered_10020820(int param_1,int param_2,int param_3,int param_4,byte param_5);
undefined1 recovered_10020a20(int param_1,int param_2,int param_3);
undefined1
recovered_10020c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char *param_6,undefined4 param_7,int param_8,uint *param_9);
undefined1 recovered_10020fa0(int param_1,undefined4 *param_2,int *param_3);
undefined1 recovered_10021620(int param_1,undefined4 *param_2,int *param_3);
undefined1 recovered_10021db0(int param_1,undefined4 *param_2,int *param_3);
undefined1 recovered_100224c0(int *param_1,int param_2,uint param_3,int *param_4);
undefined1 recovered_10022870(int *param_1,int param_2,uint param_3,undefined1 param_4,int *param_5);
byte recovered_10022c00(int param_1,undefined4 *param_2,int *param_3);
uint recovered_10022f50(int *param_1,undefined4 param_2,byte param_3);
undefined1 recovered_10023010(int *param_1,undefined4 *param_2,uint param_3);
uint recovered_100230c0(int *param_1,undefined4 param_2,undefined4 param_3,byte param_4);
byte recovered_100231d0(int *param_1,int param_2,undefined4 param_3);
bool recovered_100234e0(int *param_1,uint param_2);
undefined1 recovered_10023580(int param_1,int *param_2);
byte recovered_10027130(int param_1,int param_2,undefined4 param_3,uint param_4);
byte recovered_10027310(int param_1,int param_2);
byte recovered_10027980(int param_1,uint param_2);
uint recovered_10027a10(undefined4 param_1,undefined4 param_2,uint *param_3);
byte recovered_10028040(int *param_1,uint param_2,int param_3);
byte recovered_100281b0(int *param_1,int param_2);
byte recovered_100293f0(int *param_1,uint param_2,uint param_3);
uint recovered_10029510(int *param_1,uint param_2,uint param_3);
bool recovered_10029620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint recovered_100296e0(int *param_1,uint param_2,uint param_3);
uint recovered_100297e0(int *param_1,uint param_2,uint param_3);
uint recovered_100298f0(uint param_1,uint param_2,uint param_3);
uint recovered_10029960(uint param_1,uint param_2,uint param_3);
uint recovered_100299d0(uint param_1,uint param_2,uint param_3);
uint recovered_10029a40(uint param_1,uint param_2,uint param_3);
uint recovered_10029ab0(uint param_1,uint param_2,uint param_3);
uint recovered_10029b20(uint param_1,uint param_2,uint param_3);
byte recovered_10029b90(int *param_1,uint param_2,uint param_3);
byte recovered_10029fd0(int *param_1,uint param_2,uint param_3);
byte recovered_1002a410(int *param_1,uint param_2,uint param_3);
byte recovered_1002ab30(int *param_1,uint param_2,uint param_3);
byte recovered_1002aef0(int *param_1,uint param_2,int param_3,uint param_4);
byte recovered_1002b460(int *param_1,uint param_2,int param_3);
byte recovered_1002b830(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_1002bb10(int *param_1,uint param_2);
uint recovered_1002bd90(int param_1,uint param_2);
uint recovered_1002be40(int param_1,uint param_2,uint param_3);
byte recovered_1002bf20(int *param_1,uint param_2,int param_3,int param_4,uint param_5);
byte recovered_1002c780(int *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6
                       );
byte recovered_1002ca30(int *param_1,uint param_2);
byte recovered_1002d1e0(int *param_1,int param_2,int *param_3);
byte recovered_100310c0(int param_1,int param_2,uint *param_3,int param_4);
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
byte recovered_10031c20(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10031d30(int *param_1,uint param_2);
uint recovered_10031ee0(int param_1,undefined4 param_2,ushort param_3);
byte recovered_10031f60(int *param_1,uint param_2);
undefined1 recovered_100321e0(int *param_1,uint param_2,int param_3);
byte recovered_10032710(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10032820(int *param_1,uint param_2,uint param_3,uint param_4);
void recovered_10032920(undefined4 *in_stack_00000004);
byte recovered_10032970(int *param_1,uint param_2,uint param_3);
byte recovered_10032a60(int param_1,uint param_2);
uint recovered_10032c40(uint param_1,uint param_2);
byte recovered_10032ca0(int *param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10032db0(int param_1,int param_2);
uint recovered_100330e0(uint param_1,uint param_2,uint param_3);
uint recovered_10033150(uint param_1,uint param_2,uint param_3);
undefined1 * recovered_100331c0(int param_1);
uint recovered_100332a0(uint param_1,uint param_2,uint param_3);
undefined1 recovered_10033310(int *param_1,uint param_2,undefined4 param_3,byte param_4);
uint recovered_10033440(uint param_1,uint param_2,uint param_3);
uint recovered_100334b0(int param_1);
uint recovered_10033510(uint param_1,uint param_2);
uint recovered_10033570(uint param_1,uint param_2,uint param_3);
uint recovered_100335e0(uint param_1,uint param_2,uint param_3);
uint recovered_10033650(uint param_1,uint param_2,uint param_3);
uint recovered_100336c0(uint param_1,uint param_2,uint param_3);
uint recovered_10033730(uint param_1,uint param_2,uint param_3);
byte recovered_100337a0(int *param_1,uint param_2,uint param_3,uint param_4);
uint recovered_100338b0(uint param_1,uint param_2);
uint recovered_10033910(uint param_1,uint param_2,uint param_3);
byte recovered_10033980(int param_1,uint param_2,uint param_3,undefined4 *param_4);
byte recovered_10033a60(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int *param_6,
                       int param_7,int param_8,int *param_9);
byte recovered_10033c10(int param_1,uint param_2,int param_3,uint param_4);
uint recovered_10034a70(int param_1,uint param_2,uint param_3,uint param_4);
byte recovered_10034b80(int param_1,uint param_2,uint param_3,int param_4,uint *param_5,uint param_6
                       );
byte recovered_10034c90(int param_1,uint param_2,uint param_3,uint param_4,int param_5,uint *param_6
                       ,uint param_7);
byte recovered_10034e70(int param_1,uint param_2,uint param_3,uint param_4);
uint recovered_10035290(int *param_1,int param_2,int *param_3,uint param_4,uint param_5);
byte recovered_100353c0(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
undefined1 recovered_10035600(int param_1,uint *param_2,uint param_3,undefined4 param_4);
uint recovered_10035690(uint param_1,uint param_2);
uint recovered_100356f0(int param_1,uint param_2);
byte recovered_10035780(int param_1,int param_2);
byte recovered_10035c00(int param_1,int param_2);
byte recovered_10035ec0(int param_1,int param_2,uint param_3,byte param_4);
byte recovered_10036550(int param_1,int param_2,byte param_3);
uint recovered_100366d0(uint param_1,uint param_2,uint param_3);
byte recovered_10036740(int param_1);
uint recovered_10036b50(int param_1,undefined4 param_2,ushort param_3,uint param_4);
uint recovered_10036da0(int *param_1);
void recovered_10036ec0(undefined4 *in_stack_00000004);
uint recovered_10036f20(int param_1,undefined4 param_2,undefined4 param_3);
uint recovered_100372d0(int param_1,undefined4 param_2,undefined4 param_3);
uint recovered_10037710(int param_1,undefined4 param_2,uint param_3,int param_4);
uint recovered_10037990(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5);
uint recovered_10037c60(int param_1,undefined4 param_2,uint param_3,int param_4);
uint recovered_10037ee0(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5);
uint recovered_100381a0(int *param_1,undefined1 param_2);
uint recovered_10038200(uint param_1,uint param_2);
uint recovered_10038270(uint param_1,uint param_2);
uint recovered_100382e0(int *param_1,uint param_2,uint param_3,byte param_4);
uint recovered_100383d0(uint param_1,uint param_2,uint param_3);
uint recovered_10038440(uint param_1,uint param_2,uint param_3);
uint recovered_100384b0(uint param_1,uint param_2);
uint recovered_10038510(uint param_1);
uint recovered_10038560(int *param_1,uint param_2,uint param_3);
uint recovered_10038630(uint param_1,uint param_2,uint param_3);
uint recovered_100386a0(uint param_1,uint param_2,uint param_3);
uint recovered_10038710(uint param_1,uint param_2);
uint recovered_10038770(uint param_1,uint param_2,uint param_3);
uint recovered_100387e0(int *param_1,int param_2);
uint recovered_10038940(int *param_1,int param_2);
uint recovered_10038c10(int *param_1,int param_2,int param_3);
uint recovered_10038d70(int *param_1,uint param_2,uint param_3);
uint recovered_10038e80(int *param_1,int param_2,int param_3,byte param_4);
uint recovered_10038fd0(uint param_1);
uint recovered_10039020(int *param_1,int param_2,int param_3);
uint recovered_10039130(int param_1);
uint recovered_100391b0(int *param_1,int param_2,int param_3,int param_4);
uint recovered_10039310(uint param_1,uint param_2);
uint recovered_10039390(uint param_1,uint param_2);
undefined1 recovered_10039410(int *param_1,uint param_2);
uint recovered_10039550(int *param_1,undefined2 param_2,byte param_3);
void recovered_100395f0(char *param_1);
undefined1 recovered_10039720(byte *param_1);
void recovered_10039870(void);
undefined4 recovered_100399a0(int param_1,char *param_2,int param_3,int param_4);
void recovered_10039a80(int param_1,int param_2);
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
void recovered_1003a830(int param_1);
void recovered_1003a990(int param_1,int param_2);
undefined4 recovered_1003ac00(undefined1 *param_1,int param_2);
undefined4 recovered_1003acc0(int param_1,int param_2);
undefined4 recovered_1003ad40(undefined4 param_1,undefined4 param_2);
undefined1 recovered_1003adf0(undefined4 *param_1,undefined4 *param_2,uint param_3);
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
undefined4 recovered_1003c630(void);
undefined4 recovered_1003c640(void);
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
void recovered_1003f510(char *in_ECX);
void * recovered_1003f610(char *path,char *mode);
undefined4 recovered_1003f970(void);
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
undefined4 recovered_100467a0(int param_1);
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
undefined4 recovered_10049990(undefined4 *param_1);
undefined4 recovered_10049a30(uint *param_1);
int recovered_10049ab0(undefined1 *param_1,uint param_2,byte *param_3,int param_4);
undefined4 recovered_1004a090(int in_ECX,uint in_EDX,int *param_3,undefined4 param_4,int param_5);
bool recovered_1004a120(undefined4 *param_1,int param_2);
undefined4 recovered_1004a160(undefined4 *in_ECX,int *in_EDX,int *param_3,uint *param_4);

/* Original analysis identifiers for manual recovery units. */
