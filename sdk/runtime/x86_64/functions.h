/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#define ABS(value) __builtin_fabs(value)
#include "../format.h"
#define pf_varargs_10039b90__4_ recovered_10039b90
#define pf_varargs_10039b90__8_ recovered_10039b90
#define pf_varargs_10039b90__8__8_ recovered_10039b90
#define pf_varargs_10039b90__8__8__4__4__4__4__4_ recovered_10039b90
#define pf_varargs_10039b90___ recovered_10039b90
#define pf_varargs_1003ca40__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__4__4__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__4__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__8__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__8__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__8__4__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__8__4__4__4__8_ recovered_1003ca40
#define pf_varargs_1003ca40__4__4__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__4__8__4__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__4__8__8__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__4__8__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__8_ recovered_1003ca40
#define pf_varargs_1003ca40__8__4__4__4_ recovered_1003ca40
#define pf_varargs_1003ca40__8__4__4__8_ recovered_1003ca40
#define pf_varargs_1003ca40__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40__8__8__8_ recovered_1003ca40
#define pf_varargs_1003ca40___ recovered_1003ca40
#define pf_varargs_1003cb70___ recovered_1003cb70
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
extern uint8_t pf_module_state[];
void recovered_100006a0(void);
void recovered_10000a20(void);
int recovered_10000b40(int argc,char **argv);
uchar recovered_10000f70(int param_1,char **param_2,void *param_3);
void recovered_10001780(void);
void recovered_10001800(void);
uchar * recovered_10001840(char *param_1,ulong *param_2);
uchar recovered_10001a20(void *param_1,void *param_2);
void recovered_10001db0(void *param_1);
void recovered_10001e70(void *param_1);
uchar recovered_10001ed0(void *param_1,void *param_2,void *param_3);
void recovered_10002250(void *param_1);
uchar recovered_100022d0(char *param_1,uchar *param_2,ulong param_3);
void recovered_10002470(void *param_1);
bool recovered_10002510(char *param_1,char *param_2);
uchar recovered_10002590(char *param_1,char *param_2);
uchar recovered_10002640(void *options,char *name);
uchar recovered_10002730(char *param_1);
uchar recovered_100027b0(char *param_1,void *param_2);
uchar recovered_100028d0(char *param_1);
void * recovered_10002a10(char *param_1);
void recovered_10002e00(void *param_1);
ulonglong recovered_10002e70(char *param_1,void *param_2);
uchar recovered_10003040(void *param_1);
ulong recovered_100031b0(void *param_1);
uchar recovered_100038f0(void *param_1,char *param_2,int param_3);
long recovered_100039f0(void *param_1,char *param_2);
void recovered_10003ad0(char *param_1,void *param_2);
void recovered_10003dc0(void *param_1,char *param_2);
uchar recovered_10003e40(void *param_1,void *param_2);
void recovered_10004130(void *param_1);
uchar recovered_100048d0(void *param_1,void *param_2);
uchar recovered_10004c60(void *param_1,void *param_2);
uchar recovered_100050b0(void *param_1,void *param_2);
void recovered_100054f0(void *param_1);
bool recovered_10005610(char param_1);
bool recovered_10005680(char param_1);
void recovered_100056f0(char *param_1,ulong param_2,char *param_3,ulong param_4);
void recovered_100057a0(void *param_1,void *param_2);
ulonglong * recovered_10005810(char *param_1,char *param_2);
void recovered_100058e0(void *param_1);
int recovered_10005ac0(char param_1);
uint recovered_10005b70(pf_snow_value *param_1);
pf_snow_value * recovered_10005be0(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10005ce0(pf_snow_value *__return_storage_ptr__,void *param_2);
bool recovered_10005de0(void *param_1,char *param_2);
bool recovered_10005e60(void *param_1,char *param_2);
bool recovered_10005ee0(pf_snow_value *param_1);
pf_snow_value * recovered_10005f40(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006040(pf_snow_value *__return_storage_ptr__,int param_2);
pf_snow_value * recovered_100060b0(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006190(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006270(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006350(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_100065c0(pf_snow_value *__return_storage_ptr__,void *param_2);
int * recovered_10006840(pf_snow_value *param_1,char *param_2,ulong param_3);
pf_snow_value * recovered_10006900(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006a60(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value * recovered_10006c60(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value *
recovered_10006e70(pf_snow_value *__return_storage_ptr__,pf_snow_value *param_2,int param_3);
pf_snow_value * recovered_10006f20(pf_snow_value *__return_storage_ptr__,void *param_2);
ulong recovered_100073e0(void *param_1,char *param_2);
uint recovered_10007460(void *param_1,char *param_2);
void recovered_100074f0(void *param_1,char *param_2,int param_3);
pf_snow_value *
recovered_100075b0(pf_snow_value *__return_storage_ptr__,void *param_2,pf_snow_value param_3);
uchar recovered_10007850(char *param_1);
pf_snow_value * recovered_10007be0(pf_snow_value *__return_storage_ptr__,void *param_2);
pf_snow_value *
recovered_100080c0(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3);
long recovered_10008210(void *param_1,char *param_2);
uchar recovered_100082f0(void *param_1,char *param_2,int *param_3);
void recovered_10008390(void *param_1,char *param_2,pf_snow_value param_3);
void recovered_10008490(void *param_1);
pf_snow_value * recovered_10008550(pf_snow_value *__return_storage_ptr__,char *param_2);
uint recovered_10008610(void *param_1,pf_snow_value *param_2,uint param_3);
pf_snow_value *
recovered_10008740(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                  pf_snow_value *param_4,uint param_5,bool *param_6);
long recovered_10008b00(void *param_1,char *param_2);
pf_snow_value *
recovered_10008be0(pf_snow_value *__return_storage_ptr__,void *param_2,char *param_3,
                  pf_snow_value *param_4,uint param_5,bool *param_6);
uchar recovered_10008ef0(void *param_1,bool param_2);
uchar recovered_10009f10(void *param_1,bool param_2);
ulong recovered_1000a0c0(void *param_1,bool param_2);
ulong recovered_1000a380(void *param_1,bool param_2);
void recovered_1000a820(void *param_1,bool param_2);
void recovered_1000aa70(void *param_1,bool param_2);
void recovered_1000acf0(void *param_1,bool param_2,bool param_3);
void recovered_1000afc0(void *param_1,char *param_2,int param_3,int param_4);
ulong recovered_1000b210(void *param_1,bool param_2);
ulong recovered_1000b4f0(void *param_1,char *param_2,bool param_3);
ulonglong * recovered_1000bcd0(void *param_1);
ulonglong * recovered_1000be50(void *param_1);
uint recovered_1000c1b0(void *param_1,char *param_2);
uchar recovered_1000c300(void *param_1,char *param_2,bool param_3);
void recovered_1000c540(void *param_1,void *param_2);
bool recovered_1000c5c0(char *param_1,char **param_2,char **param_3,char **param_4);
ulonglong * recovered_1000c920(char *param_1);
ulonglong * recovered_1000ca80(char *param_1,char *param_2);
void recovered_1000caf0(char **param_1,char **param_2);
void recovered_1000cbd0(void *param_1);
void recovered_1000cc80(void *param_1,char *param_2,int param_3);
uchar recovered_1000cd00(void *param_1,char *param_2);
void recovered_1000cdd0(char *param_1,pf_snow_value *param_2,uint param_3,char *param_4,
                       ulong param_5);
void recovered_1000d2b0(char *param_1,ulong param_2,char *param_3);
void recovered_1000d340(char *param_1,ulong param_2,char param_3);
void recovered_1000d3d0(char *param_1,ulong param_2,int param_3,bool param_4,bool param_5);
ulong recovered_1000d4e0(char *param_1);
uchar recovered_1000d600(void *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                        char *param_6);
void recovered_1000d820(char *param_1,void *param_2);
ulong recovered_1000da10(char *param_1,char *param_2,char *param_3,ulong param_4,uint *param_5,
                        bool *param_6);
ulong recovered_1000dcb0(char *param_1);
uint recovered_1000ddb0(void *param_1,char *param_2,bool param_3,uint param_4,uint param_5,
                       bool param_6,bool param_7);
uchar recovered_1000e270(void *param_1,int param_2,int param_3,int param_4);
uchar recovered_1000e3f0(void *param_1);
void recovered_100114c0(char *param_1,ulong param_2,char *param_3);
uchar recovered_100115d0(void *param_1,char *param_2,char *param_3,ulong param_4);
void recovered_10011700(void *param_1);
uint recovered_10011750(void *param_1,char *param_2,bool param_3);
ulonglong * recovered_100117e0(void *param_1);
uchar recovered_100119f0(void *param_1,char *param_2);
uchar recovered_10011bf0(void *param_1,char *param_2,ulong param_3);
uchar recovered_10011e20(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_10011f40(void *param_1,bool param_2);
uchar recovered_10012580(void *param_1,int param_2,uint param_3);
uchar recovered_10012900(void *param_1,char *param_2,ulong param_3);
uchar recovered_10012b00(void *param_1,char *param_2,char *param_3,ulong param_4);
uint recovered_10012d50(void *param_1,char *param_2);
uint recovered_10012e90(char *param_1);
uint recovered_10012f30(void *param_1,char *param_2,char *param_3,uint *param_4,bool *param_5);
uchar recovered_10013760(void *param_1,char *param_2);
void recovered_10014350(void *param_1);
void recovered_10014560(void *param_1);
void recovered_10014600(void *param_1);
void recovered_10014730(void *param_1);
void recovered_100147d0(void *param_1);
void recovered_10014870(void *param_1);
void recovered_10014910(void *param_1);
void recovered_10014ae0(void *param_1);
void recovered_10014c80(void *param_1);
void recovered_10014d80(void *param_1);
void recovered_10014e80(void *param_1);
void recovered_10014fe0(void *param_1);
void recovered_100158a0(void *param_1);
uint recovered_100164e0(void *param_1,char *param_2);
void recovered_10016690(void *param_1);
uchar recovered_10016780(void *param_1,char *param_2);
uchar recovered_10016a70(char *param_1);
uchar recovered_10016b10(void *param_1,char *param_2);
bool recovered_10016ee0(char *param_1,char *param_2);
uchar recovered_10016fb0(char *param_1,uint param_2,int *param_3);
uchar recovered_10017170(void *param_1,char *param_2,char *param_3);
uchar recovered_10017230(void *param_1,char *param_2,char *param_3,ulong param_4);
uchar recovered_10017360(void *param_1,char *param_2,char *param_3,char *param_4);
uchar recovered_10017570(void *param_1);
uchar recovered_100176f0(char *param_1,char *param_2);
uchar recovered_10017770(void *param_1,char *param_2,bool *param_3);
uchar recovered_100180b0(void *param_1,char *param_2,ulong param_3);
uint recovered_10018310(void *param_1,char *param_2,char *param_3,bool param_4,uint param_5,
                       uint param_6,bool param_7,bool param_8);
uint recovered_100184b0(void *param_1,char *param_2,char *param_3,bool param_4);
uchar recovered_100185f0(void *param_1);
uchar recovered_10018760(void *param_1,int param_2);
uchar recovered_100188b0(void *param_1);
uchar recovered_10018d40(void *param_1);
uchar recovered_10018e90(void *param_1);
uchar recovered_10018f30(void *param_1,int param_2);
uchar recovered_10019070(void *param_1);
uchar recovered_100191d0(void *param_1,int param_2);
uchar recovered_10019310(void *param_1);
uchar recovered_10019520(void *param_1);
uchar recovered_100196a0(void *param_1);
uchar recovered_1001a040(void *param_1);
uchar recovered_1001a6b0(void *param_1);
uchar recovered_1001a890(void *param_1);
uchar recovered_1001aa80(void *param_1);
uchar recovered_1001ad70(void *param_1);
uchar recovered_1001b050(void *param_1,bool param_2);
uchar recovered_1001b260(void *param_1);
uchar recovered_1001b9c0(void *param_1);
uchar recovered_1001bee0(void *param_1,int param_2);
uchar recovered_1001c020(void *param_1);
uchar recovered_1001c2a0(void *param_1,int *param_2);
uint recovered_1001c650(char *param_1);
bool recovered_1001c700(char *param_1,char *param_2);
uchar recovered_1001c7d0(void *param_1,char *param_2,ulong param_3);
uchar recovered_1001c930(void *param_1,char *param_2,int *param_3,int *param_4,int *param_5,
                        uint *param_6);
uchar recovered_1001cb70(void *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                        int param_7);
uchar recovered_1001cf90(void *param_1,int param_2,uint param_3,int param_4);
uchar recovered_1001d250(void *param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
int recovered_1001d350(void *param_1,char *param_2);
uchar recovered_1001d780(void *param_1,char *param_2,ulong param_3,bool *param_4);
uchar recovered_1001d8a0(void *param_1,char *param_2,char *param_3,char *param_4,bool param_5);
uchar recovered_1001da70(void *param_1,char *param_2,char *param_3);
uchar recovered_1001dc60(void *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6
                        ,uint param_7,uint *param_8,uint *param_9);
uchar recovered_1001dee0(void *param_1,void *param_2,void *param_3);
uchar recovered_1001e400(void *param_1,void *param_2,void *param_3);
uchar recovered_1001e9e0(void *param_1,void *param_2,void *param_3);
uchar recovered_1001ef00(void *param_1,uint *param_2,uint param_3,void *param_4);
uchar recovered_1001f2d0(void *param_1,uint *param_2,uint param_3,int param_4,void *param_5);
uchar recovered_1001f6b0(void *param_1,void *param_2,void *param_3);
ulong recovered_1001f9f0(void *param_1,uint param_2,bool param_3);
uchar recovered_1001fab0(void *param_1,void *param_2,ulong param_3);
ulong recovered_1001fb70(void *param_1,ulonglong param_2,bool param_3);
uchar recovered_1001fc60(void *param_1,void *param_2,uint param_3);
bool recovered_1001ff30(void *param_1,ulong param_2);
ulong recovered_1001ffd0(void *param_1,void *param_2);
uchar recovered_10023600(void *param_1,void *param_2,uint param_3,uint param_4);
uchar recovered_100237b0(void *param_1,void *param_2,int param_3);
uchar recovered_10023d10(void *param_1,ulong param_2);
uchar recovered_10023db0(void *param_1,void *param_2,void *param_3,uint param_4);
uchar recovered_10024330(void *param_1,uint param_2,uint param_3);
uchar recovered_10024470(void *param_1,void *param_2);
uchar recovered_10025300(void *param_1,uint param_2,uint param_3);
ulong recovered_10025410(void *param_1,uint param_2,uint param_3);
bool recovered_10025500(void *param_1,int param_2,uint param_3,ulong param_4);
ulong recovered_100255f0(void *param_1,uint param_2,uint param_3);
ulong recovered_100256d0(void *param_1,uint param_2,uint param_3);
uint recovered_100257c0(uint param_1,uint param_2,uint param_3);
uint recovered_10025840(uint param_1,uint param_2,uint param_3);
uint recovered_100258b0(uint param_1,uint param_2,uint param_3);
uint recovered_10025920(uint param_1,uint param_2,uint param_3);
uint recovered_10025990(uint param_1,uint param_2,uint param_3);
uint recovered_10025a00(uint param_1,uint param_2,uint param_3);
uchar recovered_10025a70(void *param_1,uint param_2,uint param_3);
uchar recovered_10025de0(void *param_1,uint param_2,uint param_3);
uchar recovered_10026150(void *param_1,uint param_2,uint param_3);
uchar recovered_10026740(void *param_1,uint param_2,uint param_3);
uchar recovered_10026a40(void *param_1,uint param_2,void *param_3,int param_4);
uchar recovered_10026ec0(void *param_1,uint param_2,int param_3);
uchar recovered_100272a0(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_100274f0(void *param_1,uint param_2);
ulong recovered_100276e0(void *param_1,uint param_2);
ulong recovered_10027780(void *param_1,uint param_2,uint param_3);
uchar recovered_10027840(void *param_1,uint param_2,uint param_3,void *param_4,int param_5);
uchar recovered_10027f60(void *param_1,uint param_2,uint param_3,uint param_4,void *param_5,
                        uint param_6);
uchar recovered_100281b0(void *param_1,uint param_2);
uchar recovered_10028810(void *param_1,void *param_2,void *param_3);
uchar recovered_1002ba20(void *param_1,void *param_2,void *param_3,uint param_4);
uint recovered_1002c0e0(uint param_1,uint param_2,uint param_3);
uint recovered_1002c150(uint param_1,uint param_2,uint param_3);
uint recovered_1002c1c0(uint param_1,uint param_2,uint param_3);
uint recovered_1002c230(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_1002c2c0(uint param_1,uint param_2,uint param_3);
uint recovered_1002c330(uint param_1,uint param_2,uint param_3);
uint recovered_1002c3a0(uint param_1,uint param_2,uint param_3);
uint recovered_1002c410(uint param_1,uint param_2,uint param_3);
uint recovered_1002c480(uint param_1,uint param_2,uint param_3);
uint recovered_1002c4f0(uint param_1);
uchar recovered_1002c540(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_1002c620(void *param_1,uint param_2);
ulong recovered_1002c760(void *param_1,uint param_2,uint param_3);
uchar recovered_1002c7e0(void *param_1,uint param_2);
uchar recovered_1002c9d0(void *param_1,uint param_2,uint param_3);
uchar recovered_1002cdc0(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_1002cea0(void *param_1,ulong param_2,uint param_3,ulong param_4);
void recovered_1002cf80(undefined8 *in_RDI);
uchar recovered_1002cfd0(void *param_1,uint param_2,uint param_3);
uchar recovered_1002d0a0(void *param_1,uint param_2);
uint recovered_1002d220(uint param_1,uint param_2);
uchar recovered_1002d280(void *param_1,ulong param_2,uint param_3,ulong param_4);
uchar recovered_1002d360(void *param_1,uint param_2);
uint recovered_1002d5e0(uint param_1,uint param_2,uint param_3);
uint recovered_1002d660(uint param_1,uint param_2,uint param_3);
uint recovered_1002d6e0(void *param_1);
uint recovered_1002d7f0(uint param_1,uint param_2,uint param_3);
uchar recovered_1002d870(void *param_1,ulong param_2,uint param_3,bool param_4);
uint recovered_1002d9d0(uint param_1,uint param_2,uint param_3);
uchar recovered_1002da50(void *param_1);
uint recovered_1002daa0(uint param_1,uint param_2);
uint recovered_1002db00(uint param_1,uint param_2,uint param_3);
uint recovered_1002db80(uint param_1,uint param_2,uint param_3);
uint recovered_1002dc00(uint param_1,uint param_2,uint param_3);
uint recovered_1002dc80(uint param_1,uint param_2,uint param_3);
uint recovered_1002dd00(uint param_1,uint param_2,uint param_3);
uchar recovered_1002dd80(void *param_1,ulong param_2,uint param_3,ulong param_4);
uint recovered_1002de60(uint param_1,uint param_2);
uint recovered_1002dec0(uint param_1,uint param_2,uint param_3);
uchar recovered_1002df40(void *param_1,uint param_2,uint param_3,ulong *param_4);
uchar recovered_1002e010(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,ulong *param_7,uint *param_8,uint *param_9);
uchar recovered_1002e1b0(void *param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_1002ed20(void *param_1,uint param_2,uint param_3,uint param_4);
uchar recovered_1002ee10(void *param_1,uint param_2,uint param_3,ulong *param_4,uint *param_5,
                        uint param_6);
uchar recovered_1002ef20(void *param_1,uint param_2,uint param_3,uint param_4,ulong *param_5,
                        uint *param_6,uint param_7);
uchar recovered_1002f0d0(void *param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_1002f420(void *param_1,void *param_2,void *param_3,uint param_4,uint param_5);
uchar recovered_1002f560(void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                        uint param_6);
uchar recovered_1002f740(ulong *param_1,uint *param_2,uint param_3,ulong param_4);
uint recovered_1002f7f0(uint param_1,uint param_2);
ulong recovered_1002f850(void *param_1,uint param_2);
uchar recovered_1002f8d0(void *param_1,uint param_2);
uchar recovered_1002fc70(void *param_1,uint param_2);
uchar recovered_1002fea0(void *param_1,uint param_2,uint param_3,bool param_4);
uchar recovered_100303c0(void *param_1,uint param_2,bool param_3);
uint recovered_100304f0(uint param_1,uint param_2,uint param_3);
uchar recovered_10030570(void *param_1);
ulong recovered_100308a0(void *param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_10030a70(void *param_1);
void recovered_10030b50(undefined8 *in_RDI);
ulong recovered_10030bb0(void *param_1,uint param_2,uint param_3);
ulong recovered_10030ec0(void *param_1,uint param_2,uint param_3);
ulong recovered_10031250(void *param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_10031460(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
ulong recovered_100316d0(void *param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_100318d0(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5);
uchar recovered_10031b40(void *param_1,uchar param_2);
uint recovered_10031ba0(uint param_1,uint param_2);
uint recovered_10031c10(uint param_1,uint param_2);
ulong recovered_10031c80(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_10031d60(uint param_1,uint param_2,uint param_3);
uint recovered_10031de0(uint param_1,uint param_2,uint param_3);
uint recovered_10031e60(uint param_1,uint param_2);
uint recovered_10031ec0(uint param_1);
ulong recovered_10031f10(void *param_1,uint param_2,uint param_3);
uint recovered_10031fd0(uint param_1,uint param_2,uint param_3);
uint recovered_10032050(uint param_1,uint param_2,uint param_3);
uint recovered_100320d0(uint param_1,uint param_2);
uint recovered_10032130(uint param_1,uint param_2,uint param_3);
ulong recovered_100321b0(void *param_1,uint param_2);
ulong recovered_100322f0(void *param_1,uint param_2);
ulong recovered_10032560(void *param_1,uint param_2,uint param_3);
ulong recovered_10032690(void *param_1,uint param_2,uint param_3);
ulong recovered_10032770(void *param_1,uint param_2,uint param_3,bool param_4);
uint recovered_10032890(int param_1);
ulong recovered_100328e0(void *param_1,uint param_2,uint param_3);
uint recovered_100329c0(int param_1);
ulong recovered_10032a40(void *param_1,void *param_2,uint param_3,uint param_4);
uint recovered_10032b80(uint param_1,int param_2);
uint recovered_10032c00(uint param_1,int param_2);
uchar recovered_10032c80(void *param_1,ulong param_2);
ulong recovered_10032df0(void *param_1,ushort param_2,bool param_3);
void recovered_10032e90(char *param_1);
undefined1
recovered_10032fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte *param_9);
void recovered_100330f0(void);
undefined4
recovered_100331f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,char *param_10,long param_11,int param_12);
void recovered_100332f0(void *param_1,char *param_2,uint param_3);
undefined4 recovered_10033450(undefined8 param_1);
uint recovered_100334f0(char *param_1,long param_2,uint param_3);
undefined1 * recovered_100336a0(void);
bool recovered_100336d0(int *param_1,int param_2);
bool recovered_10033750(int *param_1);
bool recovered_100337e0(char param_1);
bool recovered_10033860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,char *param_10,char *param_11,long param_12);
undefined4
recovered_10033990(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
undefined1
recovered_10033a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,char *param_10,undefined1 *param_11,ulong param_12);
bool recovered_10033fa0(char param_1);
undefined4 recovered_10034000(undefined8 param_1,undefined8 param_2,undefined4 param_3);
undefined4 recovered_100340b0(undefined1 *param_1,int param_2);
void recovered_10034110(void *param_1,uint param_2);
void recovered_10034220(void *param_1,char *param_2);
undefined4 recovered_10034410(undefined1 *param_1,int param_2);
undefined4 recovered_100344d0(long param_1,long param_2);
undefined4 recovered_10034560(undefined4 param_1,undefined8 param_2);
uchar recovered_10034610(char *param_1,char *param_2,ulong param_3);
undefined4
recovered_10034790(long param_1,char *param_2,long param_3,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined4 recovered_10034870(undefined4 param_1,undefined8 param_2,undefined8 param_3);
undefined4 recovered_10034930(undefined8 param_1,undefined8 param_2);
int recovered_100349e0(int argc,char **argv);
void recovered_10034a40(void);
void recovered_10034a60(void);
ulong recovered_10034ed0(void);
long recovered_10034f20(void);
ulong recovered_10034f60(void);
long recovered_10034fa0(void);
ulong * recovered_10034fd0(long param_1);
ulong recovered_100350b0(ulong param_1,uint param_2);
ulong recovered_100350f0(ulong param_1,uint param_2);
long recovered_10035130(long param_1,uint param_2);
ulong recovered_10035180(ulong param_1,ulong param_2);
long recovered_10035220(ulong param_1,ulong param_2);
ulong recovered_10035290(ulong param_1,ulong param_2);
long recovered_10035360(ulong param_1,ulong param_2);
void recovered_100353f0(void);
int recovered_10035410(int value);
void * recovered_10035420(ulong size);
void recovered_10035470(void *pointer);
void * recovered_100354c0(void *pointer,ulong size);
void * recovered_10035510(void *destination,void *source,ulong count);
void * recovered_10035950(void *destination,void *source,ulong count);
void * recovered_10036210(void *destination,int value,ulong count);
void recovered_10036560(undefined8 *param_1,ulong param_2);
void recovered_10036830(undefined8 *param_1,ulong param_2);
int recovered_10036b00(void *left,void *right,ulong count);
int recovered_10036e00(byte *param_1,byte *param_2);
int recovered_10036e70(int value);
int recovered_10036e90(int value);
int recovered_10036eb0(int value);
int recovered_10036ed0(int value);
int recovered_10036f00(int value);
int recovered_10036f20(int value);
int recovered_10036f40(int value);
int recovered_10036f60(int value);
ulong recovered_10036f80(char *text);
int recovered_10036fb0(char *left,char *right);
int recovered_10036ff0(char *left,char *right);
char * recovered_10037030(char *destination,char *source);
char * recovered_10037050(char *text);
char * recovered_100374d0(char *text,int value);
ulong recovered_10037510(char *text,char *accept);
char * recovered_10037570(char *text,char *accept);
char * recovered_100375d0(char *haystack,char *needle);
undefined * recovered_10037630(void);
undefined * recovered_10037640(void);
void recovered_10037650(undefined8 *param_1);
double recovered_10037750(double param_1,uint param_2);
ulong recovered_10037820(double param_1,int *param_2);
double recovered_100378f0(double x,double y);
double recovered_10037920(double base,double exponent);
double recovered_100379a0(double value);
double recovered_100379d0(double value);
double recovered_10037a30(double value);
double recovered_10037be0(double value);
longlong recovered_10037d30(double value);
double recovered_10037d60(double value);
double recovered_10037e10(double value);
double recovered_10037eb0(double value);
longlong recovered_10037ed0(double value);
ulonglong recovered_10037fa0(double value);
double recovered_10038050(ulonglong value);
double recovered_100380a0(longlong value);
float recovered_10038130(float x,float y);
undefined8 recovered_10038180(float param_1,int *param_2);
undefined8 recovered_10038240(float param_1,uint param_2);
float recovered_10038330(float base,float exponent);
float recovered_100383c0(float value);
float recovered_10038400(float value);
double recovered_10038460(double value);
float recovered_100384c0(float value);
float recovered_10038530(float value);
float recovered_10038550(float value);
long recovered_100386a0(double value);
float recovered_100386d0(float value);
float recovered_10038780(float value);
float recovered_10038820(float value);
long recovered_10038840(char *text,char **endptr,int base);
ulong recovered_10038970(char *text,char **endptr,int base);
double recovered_10038aa0(char *text,char **endptr);
float recovered_10038d00(char *text,char **endptr);
int recovered_10038d10(char *buffer,unsigned long size,char *format,void *input);
int recovered_10039b90(char *buffer,unsigned long size,char *format,...);
void recovered_10039c10(ulong param_1,ulong param_2,ulong *param_3);
void recovered_10039dd0(void);
void recovered_10039de0(int *param_1,int *param_2);
void recovered_10039e80(int *param_1);
void recovered_10039f10(void *function,void *caller);
void recovered_10039fa0(void *function,void *caller);
void recovered_10039fb0(float param_1);
void recovered_10039fc0(float param_1);
float recovered_10039fd0(ulong in_RDI);
float recovered_10039fe0(ulong in_RDI);
uint8_t recovered_10039ff0(uint8_t *pointer,...);
void recovered_1003a020(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a050(uint8_t *pointer,uint8_t value,...);
uint64_t recovered_1003a080(uint8_t *pointer,uint8_t *expected,uint8_t value,...);
uint8_t recovered_1003a0c0(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a0f0(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a120(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a150(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a180(uint8_t *pointer,uint8_t value,...);
uint8_t recovered_1003a1b0(uint8_t *pointer,uint8_t value,...);
uint16_t recovered_1003a1e0(uint16_t *pointer,...);
void recovered_1003a210(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a240(uint16_t *pointer,uint16_t value,...);
uint64_t recovered_1003a270(uint16_t *pointer,uint16_t *expected,uint16_t value,...);
uint16_t recovered_1003a2b0(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a2e0(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a310(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a340(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a370(uint16_t *pointer,uint16_t value,...);
uint16_t recovered_1003a3a0(uint16_t *pointer,uint16_t value,...);
uint32_t recovered_1003a3d0(uint32_t *pointer,...);
void recovered_1003a400(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a430(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_1003a460(uint32_t *pointer,uint32_t *expected,uint32_t value,...);
uint32_t recovered_1003a4a0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a4d0(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a500(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a530(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a560(uint32_t *pointer,uint32_t value,...);
uint32_t recovered_1003a590(uint32_t *pointer,uint32_t value,...);
uint64_t recovered_1003a5c0(uint64_t *pointer,...);
void recovered_1003a5f0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a620(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a650(uint64_t *pointer,uint64_t *expected,uint64_t value,...);
uint64_t recovered_1003a690(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a6c0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a6f0(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a720(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a750(uint64_t *pointer,uint64_t value,...);
uint64_t recovered_1003a780(uint64_t *pointer,uint64_t value,...);
bool recovered_1003a7b0(uint8_t *pointer,...);
void recovered_1003a7e0(uint8_t *pointer,...);
void recovered_1003a810(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_1003a860(size_t size,uint8_t *pointer,uint8_t *value,...);
void recovered_1003a8b0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...);
uint64_t recovered_1003a920(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...);
void recovered_1003a9c0(long param_1,ulong in_RCX,undefined8 *in_R8);
void recovered_1003aa00(char *param_1,ulong in_RCX,undefined8 *in_R8);
void * recovered_1003ab00(char *path,char *mode);
undefined *
recovered_1003ae80(undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
ulong recovered_1003b070(long param_1,char *param_2,undefined1 *param_3,undefined8 in_XMM0_Qa,
                        undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                        undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                        undefined8 in_XMM7_Qa);
undefined4 recovered_1003b300(long param_1);
void * recovered_1003b680(char *path,char *mode,void *stream);
int recovered_1003b7a0(void *stream);
void recovered_1003b840(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_1003b850(long in_RDI,char *in_RSI,int *in_RDX,undefined8 *in_R8,undefined8 in_XMM1_Qa
                       ,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void * recovered_1003b860(int fd,char *mode);
void * recovered_1003b940(char *command,char *mode);
int recovered_1003b960(void *stream);
int recovered_1003b980(void *stream);
undefined8
recovered_1003ba40(long param_1,char *param_2,long param_3,int param_4,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
void recovered_1003bbc0(int *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_1003bbd0(int *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
ulong recovered_1003bce0(void *ptr,ulong size,ulong count,void *stream);
ulong recovered_1003bf70(void *ptr,ulong size,ulong count,void *stream);
void recovered_1003c110(undefined1 *in_RDI,ulong in_RSI,long in_RDX,int *in_RCX,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa);
void recovered_1003c120(long in_RDI,ulong in_RSI,ulong in_RDX,int *in_RCX);
int recovered_1003c130(void *stream,long offset,int origin);
undefined8 recovered_1003c1d0(int *param_1,long param_2,int param_3);
long recovered_1003c270(void *stream);
undefined8 recovered_1003c2a0(int *param_1);
int recovered_1003c2d0(void *stream,longlong offset,int origin);
longlong recovered_1003c370(void *stream);
int recovered_1003c3a0(void *stream,long *pos);
int recovered_1003c3f0(void *stream,long *pos);
int recovered_1003c450(void *stream);
undefined1 recovered_1003c470(int *param_1);
int recovered_1003c490(void *stream);
undefined1 recovered_1003c4b0(int *param_1);
void recovered_1003c4d0(void *stream);
void recovered_1003c4f0(int *param_1);
int recovered_1003c510(void *stream);
int recovered_1003c540(void *stream);
int recovered_1003c5b0(void *stream);
uint recovered_1003c620(int *param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
int recovered_1003c690(void);
int recovered_1003c710(int ch,void *stream);
uint recovered_1003c740(uint param_1,int *param_2);
char * recovered_1003c770(char *text,int count,void *stream);
int recovered_1003c850(int ch,void *stream);
int recovered_1003c890(int ch,void *stream);
int recovered_1003c8d0(int ch);
int recovered_1003c910(char *text,void *stream);
int recovered_1003c960(char *text);
int recovered_1003c9e0(void *stream,char *format,void *args);
int recovered_1003ca40(void *stream,char *format,...);
int recovered_1003cb10(char *format,void *args);
int recovered_1003cb70(char *format,...);
int recovered_1003cc40(char *buffer,char *format,void *input);
int recovered_1003cc60(char *buffer,char *format,...);
int recovered_1003cd00(char *buffer,char *format,void *args);
int recovered_1003d5c0(char *buffer,char *format,...);
int recovered_1003d650(void *stream,char *buffer,int mode,ulong size);
void recovered_1003d680(void *stream,char *buffer);
void recovered_1003d6a0(char *prefix);
char * recovered_1003d760(int error_number);
char * recovered_1003d980(char *buffer);
int recovered_1003d9d0(char *path);
undefined8
recovered_1003d9e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_1003db60(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
int recovered_1003db70(char *oldPath,char *newPath);
void recovered_1003dd90(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined4
recovered_1003dda0(long param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
undefined8
recovered_1003de80(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined4
recovered_1003e000(char *param_1,undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
ulong recovered_1003e060(uint param_1,undefined1 *param_2,long in_RDX,undefined8 in_XMM1_Qa,
                        undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                        undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
ulong recovered_1003e0b0(uint param_1,long param_2,ulong in_RDX);
undefined8
recovered_1003e100(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
long recovered_1003e210(uint param_1,long param_2,int param_3);
undefined4 recovered_1003e2b0(uint param_1,undefined8 *in_R8);
uint recovered_1003e3b0(uint param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003e4d0(undefined8 *param_1);
undefined8 recovered_1003e500(void);
undefined8 recovered_1003e520(void);
undefined8 recovered_1003e540(void);
undefined8 recovered_1003e560(void);
undefined8 recovered_1003e580(void);
undefined8 recovered_1003e5a0(void);
undefined8 recovered_1003e5c0(void);
undefined8 recovered_1003e5e0(void);
undefined8 recovered_1003e600(void);
ulong recovered_1003e620(uint param_1,undefined4 param_2,long param_3,undefined8 *in_R8);
undefined4
recovered_1003e780(long param_1,char *param_2,long param_3,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
undefined8
recovered_1003e8e0(long param_1,char *param_2,long param_3,uint param_4,uint *param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_1003ec20(long in_RDI,long in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003ec30(uint param_1,long param_2);
undefined8 recovered_1003ed30(long param_1,undefined8 *param_2,undefined8 *in_R8);
undefined8 recovered_1003ee00(uint param_1,undefined8 *param_2,undefined8 *in_R8);
undefined8
recovered_1003eef0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_1003f070(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_1003f080(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003f0a0(uint param_1);
void recovered_1003f100(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003f120(uint param_1);
void recovered_1003f180(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined4 recovered_1003f1a0(undefined4 param_1);
void recovered_1003f1c0(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_1003f1e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
long recovered_1003f2b0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003f360(void);
undefined8 recovered_1003f380(void);
undefined8 recovered_1003f3a0(void);
undefined8
recovered_1003f3c0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_1003f540(uint param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_1003f660(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
uint * recovered_1003f6a0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                         undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                         undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
uint * recovered_1003f7e0(uint *param_1);
undefined8 recovered_1003f810(long param_1);
void recovered_1003f840(long param_1);
long recovered_1003f860(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                       uint param_5,long param_6,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003f9b0(void *in_RDI);
undefined8 recovered_1003f9c0(void);
undefined8 recovered_1003f9d0(void);
undefined8 recovered_1003f9e0(void);
long recovered_1003f9f0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003fad0(void);
void recovered_1003faf0(long param_1,char *param_2);
undefined8
recovered_1003fb60(char *param_1,long param_2,int param_3,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_1003fc50(long param_1,char *param_2,undefined8 *in_R8);
undefined8 recovered_1003fdf0(char *param_1,undefined8 *in_R8);
undefined8 recovered_1003fe40(long param_1,undefined8 *in_R8);
undefined8 recovered_1003fee0(long param_1);
long recovered_10040030(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined4
recovered_100400e0(long param_1,uint param_2,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_10040300(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_10040310(long param_1);
undefined8 recovered_10040350(long param_1);
void recovered_10040390(void);
void recovered_10040420(void);
void recovered_100404b0(void);
void recovered_10040570(void);
bool recovered_10040600(uint param_1);
undefined8 recovered_10040610(void);
undefined8 recovered_10040620(void);
undefined8 recovered_10040630(void);
undefined8 recovered_10040640(void);
undefined8 recovered_10040650(int param_1);
undefined8 recovered_10040680(int param_1);
undefined4 recovered_100406b0(void);
undefined8 recovered_10040730(void);
int recovered_10040740(int param_1);
undefined4 recovered_10040850(void);
undefined8 recovered_100408d0(void);
void recovered_100408f0(long param_1,long *param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa);
undefined8
recovered_10040900(long param_1,long *param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
void recovered_10040ae0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa);
void recovered_10040af0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa);
undefined8 recovered_10040b00(int param_1);
undefined8 recovered_10040c80(void);
undefined8 recovered_10040c90(void);
undefined8 recovered_10040ca0(void);
undefined8 recovered_10040cf0(void);
undefined8 recovered_10040d40(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10040da0(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_10040de0(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10040e20(undefined8 param_1,undefined4 *param_2);
undefined8 recovered_10040e40(undefined4 *param_1);
undefined8
recovered_10040e60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4);
undefined8 recovered_10040ea0(uint param_1,undefined8 *param_2);
undefined8 recovered_10040f10(uint param_1);
undefined8 recovered_10040f40(undefined8 param_1,long param_2);
undefined8 recovered_10040f80(void);
undefined8 recovered_10040fd0(void);
undefined8 recovered_10040fe0(void);
undefined8 recovered_10040ff0(void);
undefined8 recovered_10041000(void);
undefined8 recovered_10041010(void);
undefined8 recovered_10041020(undefined8 param_1,undefined4 *param_2);
undefined8
recovered_10041050(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
undefined8 recovered_10041130(long param_1,ulong param_2,undefined8 *in_R8);
undefined8 recovered_100411b0(uint param_1,undefined8 param_2);
undefined8 recovered_100411f0(uint param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 recovered_10041260(int param_1,uint *param_2,uint *param_3);
undefined8 recovered_100412c0(int param_1,uint *param_2,uint *param_3);
undefined8 recovered_10041320(void);
undefined8 recovered_10041330(int param_1);
undefined8 recovered_100413d0(undefined4 *param_1);
undefined8 recovered_10041400(undefined4 *param_1);
undefined8 recovered_10041430(uint *param_1,int param_2);
undefined8 recovered_10041470(uint *param_1,int param_2);
ulong recovered_100414b0(uint *param_1,uint param_2);
undefined8 recovered_100414f0(uint param_1,undefined8 *param_2);
undefined8 recovered_10041590(uint param_1,undefined8 param_2,undefined8 *param_3);
void recovered_100415e0(undefined4 *param_1);
undefined8 recovered_10041600(uint param_1,long param_2,undefined8 *param_3);
uint recovered_100416f0(int param_1,uint *param_2,uint *param_3,uint *param_4);
int recovered_10041850(long param_1,uint param_2);
undefined8 recovered_10041900(int *param_1,undefined *param_2);
undefined8
recovered_10041930(long *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4);
undefined8 recovered_10041970(undefined8 param_1,undefined8 *param_2);
undefined8 recovered_10041990(void);
undefined8 recovered_100419a0(undefined4 *param_1);
undefined8 recovered_100419c0(void);
undefined8 recovered_100419d0(undefined4 *param_1);
undefined8 recovered_100419f0(void);
undefined8 recovered_10041a00(void);
undefined8 recovered_10041a10(void);
undefined8 recovered_10041a20(void);
undefined8 recovered_10041a30(undefined4 *param_1);
undefined8 recovered_10041a50(void);
undefined8 recovered_10041a60(undefined4 *param_1,undefined4 param_2);
undefined8 recovered_10041a70(undefined4 *param_1);
undefined8 recovered_10041a90(void);
undefined8 recovered_10041aa0(void);
undefined8 recovered_10041ab0(void);
undefined8 recovered_10041ac0(void);
undefined8 recovered_10041ad0(void);
undefined8 recovered_10041ae0(undefined4 *param_1);
undefined8 recovered_10041d30(uint param_1);
undefined8 recovered_10041d60(uint param_1);
undefined8 recovered_10041d90(uint param_1,undefined8 param_2);
undefined8 recovered_10041dc0(undefined4 *param_1);
undefined8 recovered_10041de0(void);
undefined8 recovered_10041df0(void);
undefined8 recovered_10041e00(void);
undefined8 recovered_10041e10(void);
long recovered_10041e20(void);
bool recovered_10041eb0(long param_1,long param_2);
undefined8 recovered_10041ec0(undefined4 *param_1);
undefined8 recovered_10041ee0(void);
undefined8 recovered_10041ef0(void);
undefined8 recovered_10041f00(void);
undefined8 recovered_10041f10(void);
undefined8
recovered_10041f20(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
void recovered_10042150(int *in_RDI,long in_RSI,undefined8 in_RDX,undefined8 in_RCX,long *in_R8,
                       undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined *
recovered_10042160(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined *
recovered_10042290(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
ulong recovered_100423c0(int param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                        undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                        undefined8 in_XMM7_Qa);
ulong recovered_10042550(undefined8 *param_1,long *param_2,long param_3,ulong param_4,
                        undefined8 *in_R8);
ulong recovered_100426a0(long param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                        undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined *
recovered_10042730(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined *
recovered_10042860(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_100429b0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_100429f0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8 recovered_10042a30(void);
undefined1 * recovered_10042a40(void);
ulong recovered_10042a60(char *text,ulong max_length);
long recovered_10042aa0(long param_1,long param_2,undefined8 *in_R8);
int recovered_10042b00(byte *param_1,byte *param_2);
int recovered_10042bc0(long param_1,long param_2,long param_3);
int recovered_10042c40(char *left,char *right,ulong count);
void recovered_10042c90(undefined8 *param_1,undefined8 *param_2,ulong in_RDX,undefined8 in_RCX,
                       undefined8 *in_R8,undefined1 *in_R9);
void recovered_10042cb0(ulong *in_RDI,ulong *in_RSI,ulong in_RDX);
undefined1 * recovered_10042cc0(long param_1,long param_2,long *param_3);
void * recovered_10042d50(void *memory,int value,ulong count);
char * recovered_10042d80(char *text,int value);
char * recovered_10042db0(int param_1);
ulong recovered_10042de0(char *text,char *reject);
char * recovered_10042e40(char *destination,char *source,ulong count);
char * recovered_10042f00(char *destination,char *source);
char * recovered_10042f30(char *destination,char *source,ulong count);
ulong recovered_10042fa0(char *destination,char *source,ulong count);
char * recovered_10043010(char *text,char *delimiters);
void * recovered_100430a0(ulong count,ulong size);
void recovered_100430f0(uint seed);
int recovered_10043110(void);
long recovered_10043140(long value);
longlong recovered_10043150(longlong value);
ulong recovered_10043160(int param_1,int param_2);
ulong recovered_10043180(ulong param_1,ulong param_2);
ulong recovered_100431b0(ulong param_1,ulong param_2);
longlong recovered_100431e0(char *text,char **endptr,int base);
ulonglong recovered_100431f0(char *text,char **endptr,int base);
undefined8 recovered_10043200(uint param_1);
undefined8 recovered_10043220(ushort *param_1,ushort param_2);
undefined8 recovered_10043250(uint param_1);
undefined8 recovered_10043270(ushort *param_1,uint param_2);
uint recovered_100432b0(uint param_1);
undefined4 recovered_100432d0(void);
undefined8 recovered_100432e0(undefined4 param_1);
undefined8 recovered_100432f0(undefined4 *param_1);
undefined8 recovered_10043330(undefined4 *param_1);
undefined8 recovered_10043370(undefined4 *param_1);
undefined8 recovered_100433b0(uint *param_1);
__attribute__((naked,returns_twice)) int recovered_100433f0(void *context);
__attribute__((naked,noreturn)) void recovered_10043420(void *context,int value);
bool recovered_10043450(ulong param_1);
bool recovered_10043480(uint param_1);
byte recovered_100434a0(undefined8 in_stack_00000008,ushort in_stack_00000010);
bool recovered_100434e0(ulong param_1);
bool recovered_10043510(uint param_1);
bool recovered_10043530(long in_stack_00000008,uint in_stack_00000010);
bool recovered_10043560(ulong param_1);
bool recovered_10043590(uint param_1);
bool recovered_100435c0(longdouble in_stack_00000008);
bool recovered_100435d0(ulong param_1);
bool recovered_10043600(uint param_1);
byte recovered_10043620(long in_stack_00000008,ushort in_stack_00000010);
uint recovered_10043670(undefined1 in_XMM0 [16]);
uint recovered_10043680(undefined1 in_XMM0 [16]);
bool recovered_10043690(longdouble in_stack_00000008);
byte recovered_100436d0(double param_1);
byte recovered_10043750(float param_1);
int recovered_100437c0(long double value);
int recovered_10043830(double value);
double recovered_10043860(double value);
float recovered_10043890(float value);
double recovered_100438d0(double value);
double recovered_10043920(double value);
float recovered_10043950(float value);
double recovered_10043990(double value);
double recovered_100439e0(double value);
float recovered_10043a10(float value);
double recovered_10043a50(double value);
long recovered_10043aa0(double value);
long recovered_10043ae0(float value);
long recovered_10043b20(double value);
longlong recovered_10043b70(double value);
longlong recovered_10043bb0(float value);
longlong recovered_10043bf0(double value);
double recovered_10043c40(double value);
float recovered_10043ec0(float value);
double recovered_10043ee0(double value);
double recovered_10043f10(double y,double x);
float recovered_10043fb0(float y,float x);
void recovered_10044060(longdouble in_stack_00000008,longdouble in_stack_00000018);
double recovered_10044120(double value);
float recovered_10044220(float value);
double recovered_10044340(double value);
double recovered_10044450(double value);
float recovered_10044550(float value);
double recovered_10044660(double value);
double recovered_10044770(double value);
float recovered_100447d0(float value);
double recovered_10044830(double value);
double recovered_100448a0(double value);
float recovered_10044b80(float value);
double recovered_10044ba0(double value);
double recovered_10044bd0(double value);
float recovered_10044bf0(float value);
double recovered_10044c10(double value);
double recovered_10044c40(double in_XMM0_Qa);
undefined8 recovered_10044c60(float param_1);
void recovered_10044c80(longdouble in_stack_00000008);
double recovered_10044cb0(double value);
float recovered_10044ce0(float value);
double recovered_10044d10(double value);
double recovered_10044d50(double value);
float recovered_10044d80(float value);
double recovered_10044db0(double value);
double recovered_10044df0(double value);
float recovered_10044e20(float value);
double recovered_10044e60(double value);
double recovered_10044eb0(double value);
float recovered_10044ed0(float value);
double recovered_10044ef0(double value);
double recovered_10044f20(double value);
float recovered_10044f40(float value);
double recovered_10044f60(double value);
double recovered_10044f90(double value);
float recovered_10044ff0(float value);
double recovered_10045060(double value);
double recovered_100450e0(double value,double *integer_part);
float recovered_10045110(float value,float *integer_part);
double recovered_10045150(double value,double *integer_part);
double recovered_100451a0(double value);
float recovered_10045290(float value);
double recovered_10045350(double value);
double recovered_10045450(double param_1);
float recovered_10045540(float param_1);
void recovered_10045610(longdouble in_stack_00000008);
double recovered_10045710(double value);
float recovered_10045730(float value);
int recovered_10045750(char *text);
long recovered_10045770(char *text);
longlong recovered_10045790(char *text);
void recovered_100457b0(byte *in_RDI,undefined8 *in_RSI);
void recovered_100457d0(byte *param_1);
void recovered_100457e0(void *base,ulong count,ulong size,pf_compare *compare);
void * recovered_10045a80(void *key,void *base,ulong count,ulong size,pf_compare *compare);
int recovered_10045b20(int value);
int recovered_10045b50(int value);
int recovered_10045b70(int value);
int recovered_10045b90(int value);
int recovered_10045bf0(int value);
int recovered_10045c10(int value);
long recovered_10045c30(void);
double recovered_10045cb0(long end,long start);
long recovered_10045cc0(uint *param_1);
int recovered_10045fd0(uint param_1,uint param_2,int param_3);
undefined4 * recovered_100460b0(ulong *param_1);
undefined4 * recovered_10046350(ulong *in_RDI);
undefined *
recovered_10046370(undefined4 *param_1,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined *
recovered_10046420(ulong *in_RDI,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa);
long recovered_100464c0(undefined1 *param_1,ulong param_2,char *param_3,uint *param_4,
                       undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
undefined8
recovered_10046bf0(long param_1,ulong param_2,long *param_3,undefined8 param_4,int param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);
bool recovered_10046ca0(undefined8 *param_1,int param_2);
undefined8
recovered_10046ce0(undefined8 *param_1,long *param_2,long *param_3,ulong *param_4,undefined8 *in_R8);

/* Original analysis identifiers for manual recovery units. */

/* SDK public symbol bindings. */
void recovered_10040390(void) __asm__("__Exit");
void recovered_10039dd0(void) __asm__("____chkstk_darwin");
void recovered_1003a7e0(uint8_t *pointer,...) __asm__("___atomic_clear");
uint64_t recovered_1003a920(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...) __asm__("___atomic_compare_exchange");
uint64_t recovered_1003a080(uint8_t *pointer,uint8_t *expected,uint8_t value,...) __asm__("___atomic_compare_exchange_1");
uint64_t recovered_1003a270(uint16_t *pointer,uint16_t *expected,uint16_t value,...) __asm__("___atomic_compare_exchange_2");
uint64_t recovered_1003a460(uint32_t *pointer,uint32_t *expected,uint32_t value,...) __asm__("___atomic_compare_exchange_4");
uint64_t recovered_1003a650(uint64_t *pointer,uint64_t *expected,uint64_t value,...) __asm__("___atomic_compare_exchange_8");
void recovered_1003a8b0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...) __asm__("___atomic_exchange");
uint8_t recovered_1003a050(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_exchange_1");
uint16_t recovered_1003a240(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_exchange_2");
uint32_t recovered_1003a430(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_exchange_4");
uint64_t recovered_1003a620(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_exchange_8");
uint8_t recovered_1003a0c0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_add_1");
uint16_t recovered_1003a2b0(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_add_2");
uint32_t recovered_1003a4a0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_add_4");
uint64_t recovered_1003a690(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_add_8");
uint8_t recovered_1003a120(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_and_1");
uint16_t recovered_1003a310(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_and_2");
uint32_t recovered_1003a500(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_and_4");
uint64_t recovered_1003a6f0(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_and_8");
uint8_t recovered_1003a1b0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_nand_1");
uint16_t recovered_1003a3a0(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_nand_2");
uint32_t recovered_1003a590(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_nand_4");
uint64_t recovered_1003a780(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_nand_8");
uint8_t recovered_1003a150(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_or_1");
uint16_t recovered_1003a340(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_or_2");
uint32_t recovered_1003a530(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_or_4");
uint64_t recovered_1003a720(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_or_8");
uint8_t recovered_1003a0f0(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_sub_1");
uint16_t recovered_1003a2e0(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_sub_2");
uint32_t recovered_1003a4d0(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_sub_4");
uint64_t recovered_1003a6c0(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_sub_8");
uint8_t recovered_1003a180(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_fetch_xor_1");
uint16_t recovered_1003a370(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_fetch_xor_2");
uint32_t recovered_1003a560(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_fetch_xor_4");
uint64_t recovered_1003a750(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_fetch_xor_8");
void recovered_1003a810(size_t size,uint8_t *pointer,uint8_t *value,...) __asm__("___atomic_load");
uint8_t recovered_10039ff0(uint8_t *pointer,...) __asm__("___atomic_load_1");
uint16_t recovered_1003a1e0(uint16_t *pointer,...) __asm__("___atomic_load_2");
uint32_t recovered_1003a3d0(uint32_t *pointer,...) __asm__("___atomic_load_4");
uint64_t recovered_1003a5c0(uint64_t *pointer,...) __asm__("___atomic_load_8");
void recovered_1003a860(size_t size,uint8_t *pointer,uint8_t *value,...) __asm__("___atomic_store");
void recovered_1003a020(uint8_t *pointer,uint8_t value,...) __asm__("___atomic_store_1");
void recovered_1003a210(uint16_t *pointer,uint16_t value,...) __asm__("___atomic_store_2");
void recovered_1003a400(uint32_t *pointer,uint32_t value,...) __asm__("___atomic_store_4");
void recovered_1003a5f0(uint64_t *pointer,uint64_t value,...) __asm__("___atomic_store_8");
bool recovered_1003a7b0(uint8_t *pointer,...) __asm__("___atomic_test_and_set");
void recovered_10039f10(void *function,void *caller) __asm__("___cyg_profile_func_enter");
void recovered_10039fa0(void *function,void *caller) __asm__("___cyg_profile_func_exit");
double recovered_100380a0(longlong value) __asm__("___floatdidf");
float recovered_10039fe0(ulong in_RDI) __asm__("___floatdisf");
float recovered_10039fd0(ulong in_RDI) __asm__("___floatundisf");
void recovered_10039e80(int *param_1) __asm__("___sanitizer_cov_trace_pc_guard");
void recovered_10039de0(int *param_1,int *param_2) __asm__("___sanitizer_cov_trace_pc_guard_init");
void recovered_10040420(void) __asm__("__exit");
void recovered_100353f0(void) __asm__("_abort");
int recovered_10035410(int value) __asm__("_abs");
undefined8 recovered_1003e580(void) __asm__("_accept");
void recovered_1003f1c0(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_access");
double recovered_10044450(double value) __asm__("_acos");
float recovered_10044550(float value) __asm__("_acosf");
double recovered_10044660(double value) __asm__("_acosl");
undefined8 recovered_10040c90(void) __asm__("_alarm");
undefined *
recovered_10046370(undefined4 *param_1,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_asctime");
double recovered_10044120(double value) __asm__("_asin");
float recovered_10044220(float value) __asm__("_asinf");
double recovered_10044340(double value) __asm__("_asinl");
undefined8 recovered_10040350(long param_1) __asm__("_at_quick_exit");
double recovered_10043c40(double value) __asm__("_atan");
double recovered_10043f10(double y,double x) __asm__("_atan2");
float recovered_10043fb0(float y,float x) __asm__("_atan2f");
void recovered_10044060(longdouble in_stack_00000008,longdouble in_stack_00000018) __asm__("_atan2l");
float recovered_10043ec0(float value) __asm__("_atanf");
double recovered_10043ee0(double value) __asm__("_atanl");
undefined8 recovered_10040310(long param_1) __asm__("_atexit");
void recovered_100457d0(byte *param_1) __asm__("_atof");
int recovered_10045750(char *text) __asm__("_atoi");
long recovered_10045770(char *text) __asm__("_atol");
longlong recovered_10045790(char *text) __asm__("_atoll");
void recovered_10042cb0(ulong *in_RDI,ulong *in_RSI,ulong in_RDX) __asm__("_bcmp");
void recovered_10042c90(undefined8 *param_1,undefined8 *param_2,ulong in_RDX,undefined8 in_RCX,
                       undefined8 *in_R8,undefined1 *in_R9) __asm__("_bcopy");
undefined8 recovered_1003e540(void) __asm__("_bind");
void * recovered_10045a80(void *key,void *base,ulong count,ulong size,pf_compare *compare) __asm__("_bsearch");
void recovered_10036560(undefined8 *param_1,ulong param_2) __asm__("_bzero");
void * recovered_100430a0(ulong count,ulong size) __asm__("_calloc");
double recovered_100379d0(double value) __asm__("_ceil");
float recovered_10038400(float value) __asm__("_ceilf");
void recovered_100415e0(undefined4 *param_1) __asm__("_cfmakeraw");
undefined8
recovered_1003f1e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_chdir");
void recovered_1003f080(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_chmod");
void recovered_1003f100(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_chown");
void recovered_1003c4d0(void *stream) __asm__("_clearerr");
long recovered_10045c30(void) __asm__("_clock");
undefined8 recovered_10040de0(undefined8 param_1,undefined8 *param_2) __asm__("_clock_gettime");
undefined8
recovered_1003e100(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_close");
undefined8 recovered_1003f810(long param_1) __asm__("_closedir");
undefined8 recovered_1003e520(void) __asm__("_connect");
double recovered_10037e10(double value) __asm__("_cos");
float recovered_10038780(float value) __asm__("_cosf");
double recovered_10044d50(double value) __asm__("_cosh");
float recovered_10044d80(float value) __asm__("_coshf");
double recovered_10044db0(double value) __asm__("_coshl");
undefined4
recovered_1003e000(char *param_1,undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_creat");
undefined *
recovered_10046420(ulong *in_RDI,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa) __asm__("_ctime");
double recovered_10045cb0(long end,long start) __asm__("_difftime");
ulong recovered_10043160(int param_1,int param_2) __asm__("_div");
undefined8 recovered_10042a30(void) __asm__("_dlclose");
undefined1 * recovered_10042a40(void) __asm__("_dlerror");
undefined8
recovered_100429b0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_dlopen");
undefined8
recovered_100429f0(undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_dlsym");
undefined4 recovered_1003e2b0(uint param_1,undefined8 *in_R8) __asm__("_dup");
uint recovered_1003e3b0(uint param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_dup2");
undefined8 recovered_1003fad0(void) __asm__("_elf_aux_info");
double recovered_100451a0(double value) __asm__("_erf");
double recovered_10045450(double param_1) __asm__("_erfc");
float recovered_10045540(float param_1) __asm__("_erfcf");
void recovered_10045610(longdouble in_stack_00000008) __asm__("_erfcl");
float recovered_10045290(float value) __asm__("_erff");
double recovered_10045350(double value) __asm__("_erfl");
void recovered_100408f0(long param_1,long *param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa) __asm__("_execv");
void recovered_10040ae0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa) __asm__("_execve");
void recovered_10040af0(long in_RDI,long *in_RSI,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa) __asm__("_execvp");
void recovered_100404b0(void) __asm__("_exit");
double recovered_100448a0(double value) __asm__("_exp");
double recovered_10044bd0(double value) __asm__("_exp2");
float recovered_10044bf0(float value) __asm__("_exp2f");
double recovered_10044c10(double value) __asm__("_exp2l");
float recovered_10044b80(float value) __asm__("_expf");
double recovered_10044ba0(double value) __asm__("_expl");
double recovered_10044c40(double in_XMM0_Qa) __asm__("_expm1");
undefined8 recovered_10044c60(float param_1) __asm__("_expm1f");
void recovered_10044c80(longdouble in_stack_00000008) __asm__("_expm1l");
double recovered_10037eb0(double value) __asm__("_fabs");
float recovered_10038820(float value) __asm__("_fabsf");
undefined8 recovered_1003f0a0(uint param_1) __asm__("_fchmod");
undefined8 recovered_1003f120(uint param_1) __asm__("_fchown");
int recovered_1003b7a0(void *stream) __asm__("_fclose");
ulong recovered_1003e620(uint param_1,undefined4 param_2,long param_3,undefined8 *in_R8) __asm__("_fcntl");
void * recovered_1003b860(int fd,char *mode) __asm__("_fdopen");
undefined8 recovered_10043200(uint param_1) __asm__("_feclearexcept");
undefined8 recovered_100432f0(undefined4 *param_1) __asm__("_fegetenv");
undefined8 recovered_10043220(ushort *param_1,ushort param_2) __asm__("_fegetexceptflag");
undefined4 recovered_100432d0(void) __asm__("_fegetround");
undefined8 recovered_10043330(undefined4 *param_1) __asm__("_feholdexcept");
int recovered_1003c450(void *stream) __asm__("_feof");
undefined8 recovered_10043250(uint param_1) __asm__("_feraiseexcept");
int recovered_1003c490(void *stream) __asm__("_ferror");
undefined8 recovered_10043370(undefined4 *param_1) __asm__("_fesetenv");
undefined8 recovered_10043270(ushort *param_1,uint param_2) __asm__("_fesetexceptflag");
undefined8 recovered_100432e0(undefined4 param_1) __asm__("_fesetround");
uint recovered_100432b0(uint param_1) __asm__("_fetestexcept");
undefined8 recovered_100433b0(uint *param_1) __asm__("_feupdateenv");
int recovered_1003b980(void *stream) __asm__("_fflush");
int recovered_1003c540(void *stream) __asm__("_fgetc");
int recovered_1003c3a0(void *stream,long *pos) __asm__("_fgetpos");
char * recovered_1003c770(char *text,int count,void *stream) __asm__("_fgets");
int recovered_1003c510(void *stream) __asm__("_fileno");
double recovered_100379a0(double value) __asm__("_floor");
float recovered_100383c0(float value) __asm__("_floorf");
double recovered_100378f0(double x,double y) __asm__("_fmod");
float recovered_10038130(float x,float y) __asm__("_fmodf");
void * recovered_1003ab00(char *path,char *mode) __asm__("_fopen");
undefined8 recovered_100408d0(void) __asm__("_fork");
int recovered_1003ca40(void *stream,char *format,...) __asm__("_fprintf");
int recovered_1003c850(int ch,void *stream) __asm__("_fputc");
int recovered_1003c910(char *text,void *stream) __asm__("_fputs");
ulong recovered_1003bce0(void *ptr,ulong size,ulong count,void *stream) __asm__("_fread");
void recovered_10035470(void *pointer) __asm__("_free");
void * recovered_1003b680(char *path,char *mode,void *stream) __asm__("_freopen");
ulong recovered_10037820(double param_1,int *param_2) __asm__("_frexp");
undefined8 recovered_10038180(float param_1,int *param_2) __asm__("_frexpf");
int recovered_1003c130(void *stream,long offset,int origin) __asm__("_fseek");
int recovered_1003c2d0(void *stream,longlong offset,int origin) __asm__("_fseeko");
int recovered_1003c3f0(void *stream,long *pos) __asm__("_fsetpos");
undefined8 recovered_1003ec30(uint param_1,long param_2) __asm__("_fstat");
undefined8 recovered_1003ee00(uint param_1,undefined8 *param_2,undefined8 *in_R8) __asm__("_fstatfs");
undefined8
recovered_1003f660(uint param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_fsync");
long recovered_1003c270(void *stream) __asm__("_ftell");
longlong recovered_1003c370(void *stream) __asm__("_ftello");
undefined8
recovered_1003f540(uint param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_ftruncate");
ulong recovered_1003bf70(void *ptr,ulong size,ulong count,void *stream) __asm__("_fwrite");
int recovered_1003c5b0(void *stream) __asm__("_getc");
int recovered_1003c690(void) __asm__("_getchar");
long recovered_1003f2b0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getcwd");
undefined8 recovered_10040640(void) __asm__("_getegid");
long recovered_1003f9f0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getenv");
undefined8 recovered_10040620(void) __asm__("_geteuid");
undefined8 recovered_10040630(void) __asm__("_getgid");
undefined *
recovered_10042730(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getgrgid");
undefined *
recovered_10042860(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getgrnam");
undefined8 recovered_10041130(long param_1,ulong param_2,undefined8 *in_R8) __asm__("_gethostname");
undefined8 recovered_10040c80(void) __asm__("_getpagesize");
undefined4 recovered_100406b0(void) __asm__("_getpid");
undefined8 recovered_10040730(void) __asm__("_getppid");
void recovered_1003faf0(long param_1,char *param_2) __asm__("_getprogpath");
undefined *
recovered_10042290(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getpwnam");
ulong recovered_100426a0(long param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                        undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getpwnam_r");
undefined *
recovered_10042160(int param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_getpwuid");
ulong recovered_100423c0(int param_1,long *param_2,long param_3,ulong param_4,undefined8 *param_5,
                        undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                        undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                        undefined8 in_XMM7_Qa) __asm__("_getpwuid_r");
undefined8 recovered_10040ea0(uint param_1,undefined8 *param_2) __asm__("_getrlimit");
undefined8 recovered_10040f40(undefined8 param_1,long param_2) __asm__("_getrusage");
int recovered_10040740(int param_1) __asm__("_getsid");
undefined8 recovered_10040da0(undefined8 *param_1,undefined8 *param_2) __asm__("_gettimeofday");
undefined8 recovered_10040610(void) __asm__("_getuid");
undefined4 * recovered_100460b0(ulong *param_1) __asm__("_gmtime");
undefined8 recovered_10041600(uint param_1,long param_2,undefined8 *param_3) __asm__("_ioctl");
int recovered_10036ed0(int value) __asm__("_isalnum");
int recovered_10036eb0(int value) __asm__("_isalpha");
bool recovered_10040600(uint param_1) __asm__("_isatty");
int recovered_10036f00(int value) __asm__("_isblank");
int recovered_10045bf0(int value) __asm__("_iscntrl");
int recovered_10045b50(int value) __asm__("_isdigit");
int recovered_10043830(double value) __asm__("_isfinite");
int recovered_10045c10(int value) __asm__("_isgraph");
int recovered_10036e70(int value) __asm__("_islower");
int recovered_10036f20(int value) __asm__("_isprint");
int recovered_10045b90(int value) __asm__("_ispunct");
int recovered_10045b20(int value) __asm__("_isspace");
int recovered_10036e90(int value) __asm__("_isupper");
int recovered_10045b70(int value) __asm__("_isxdigit");
undefined8 recovered_10041330(int param_1) __asm__("_kill");
long recovered_10043140(long value) __asm__("_labs");
void recovered_1003f180(long param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_lchown");
double recovered_10037750(double param_1,uint param_2) __asm__("_ldexp");
undefined8 recovered_10038240(float param_1,uint param_2) __asm__("_ldexpf");
ulong recovered_10043180(ulong param_1,ulong param_2) __asm__("_ldiv");
undefined8 recovered_1003f3a0(void) __asm__("_link");
undefined8 recovered_1003e560(void) __asm__("_listen");
longlong recovered_10043150(longlong value) __asm__("_llabs");
ulong recovered_100431b0(ulong param_1,ulong param_2) __asm__("_lldiv");
longlong recovered_10043b70(double value) __asm__("_llrint");
longlong recovered_10043bb0(float value) __asm__("_llrintf");
longlong recovered_10043bf0(double value) __asm__("_llrintl");
longlong recovered_10037d30(double value) __asm__("_llround");
undefined * recovered_10037640(void) __asm__("_localeconv");
undefined4 * recovered_10046350(ulong *in_RDI) __asm__("_localtime");
double recovered_10037be0(double value) __asm__("_log");
double recovered_10045710(double value) __asm__("_log10");
float recovered_10045730(float value) __asm__("_log10f");
double recovered_10044f20(double value) __asm__("_log1p");
float recovered_10044f40(float value) __asm__("_log1pf");
double recovered_10044f60(double value) __asm__("_log1pl");
double recovered_10044eb0(double value) __asm__("_log2");
float recovered_10044ed0(float value) __asm__("_log2f");
double recovered_10044ef0(double value) __asm__("_log2l");
double recovered_10044f90(double value) __asm__("_logb");
float recovered_10044ff0(float value) __asm__("_logbf");
double recovered_10045060(double value) __asm__("_logbl");
float recovered_10038550(float value) __asm__("_logf");
__attribute__((naked,noreturn)) void recovered_10043420(void *context,int value) __asm__("_longjmp");
long recovered_10043aa0(double value) __asm__("_lrint");
long recovered_10043ae0(float value) __asm__("_lrintf");
long recovered_10043b20(double value) __asm__("_lrintl");
long recovered_100386a0(double value) __asm__("_lround");
long recovered_1003e210(uint param_1,long param_2,int param_3) __asm__("_lseek");
void recovered_1003ec20(long in_RDI,long in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_lstat");
undefined8 recovered_1003f9e0(void) __asm__("_madvise");
void * recovered_10035420(ulong size) __asm__("_malloc");
void * recovered_10042d50(void *memory,int value,ulong count) __asm__("_memchr");
int recovered_10036b00(void *left,void *right,ulong count) __asm__("_memcmp");
void * recovered_10035510(void *destination,void *source,ulong count) __asm__("_memcpy");
void * recovered_10035950(void *destination,void *source,ulong count) __asm__("_memmove");
void * recovered_10036210(void *destination,int value,ulong count) __asm__("_memset");
undefined8
recovered_1003eef0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_mkdir");
void recovered_10040300(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_mkstemp");
undefined4
recovered_100400e0(long param_1,uint param_2,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_mkstemps");
long recovered_10045cc0(uint *param_1) __asm__("_mktime");
long recovered_1003f860(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                       uint param_5,long param_6,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_mmap");
double recovered_100450e0(double value,double *integer_part) __asm__("_modf");
float recovered_10045110(float value,float *integer_part) __asm__("_modff");
double recovered_10045150(double value,double *integer_part) __asm__("_modfl");
undefined8 recovered_1003f9c0(void) __asm__("_mprotect");
undefined8 recovered_1003f9d0(void) __asm__("_msync");
undefined8 recovered_1003f9b0(void *in_RDI) __asm__("_munmap");
undefined8 recovered_10040d40(undefined8 param_1,undefined8 *param_2) __asm__("_nanosleep");
double recovered_100439e0(double value) __asm__("_nearbyint");
float recovered_10043a10(float value) __asm__("_nearbyintf");
double recovered_10043a50(double value) __asm__("_nearbyintl");
undefined4
recovered_1003dda0(long param_1,uint param_2,undefined8 *in_R8,undefined8 in_XMM0_Qa,
                  undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa) __asm__("_open");
uint * recovered_1003f6a0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                         undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                         undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_opendir");
int recovered_1003b960(void *stream) __asm__("_pclose");
void recovered_1003d6a0(char *prefix) __asm__("_perror");
undefined8 recovered_1003e4d0(undefined8 *param_1) __asm__("_pipe");
int recovered_10041850(long param_1,uint param_2) __asm__("_poll");
void * recovered_1003b940(char *command,char *mode) __asm__("_popen");
undefined8
recovered_10041f20(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_posix_spawn");
undefined8 recovered_10041f00(void) __asm__("_posix_spawn_file_actions_addclose");
undefined8 recovered_10041ef0(void) __asm__("_posix_spawn_file_actions_adddup2");
undefined8 recovered_10041f10(void) __asm__("_posix_spawn_file_actions_addopen");
undefined8 recovered_10041ee0(void) __asm__("_posix_spawn_file_actions_destroy");
undefined8 recovered_10041ec0(undefined4 *param_1) __asm__("_posix_spawn_file_actions_init");
void recovered_10042150(int *in_RDI,long in_RSI,undefined8 in_RDX,undefined8 in_RCX,long *in_R8,
                       undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_posix_spawnp");
double recovered_10037920(double base,double exponent) __asm__("_pow");
float recovered_10038330(float base,float exponent) __asm__("_powf");
int recovered_1003cb70(char *format,...) __asm__("_printf");
undefined8 recovered_100419c0(void) __asm__("_pthread_attr_destroy");
undefined8 recovered_100419a0(undefined4 *param_1) __asm__("_pthread_attr_init");
undefined8 recovered_10041ad0(void) __asm__("_pthread_cond_broadcast");
undefined8 recovered_10041a90(void) __asm__("_pthread_cond_destroy");
undefined8 recovered_10041a70(undefined4 *param_1) __asm__("_pthread_cond_init");
undefined8 recovered_10041ac0(void) __asm__("_pthread_cond_signal");
undefined8 recovered_10041ab0(void) __asm__("_pthread_cond_timedwait");
undefined8 recovered_10041aa0(void) __asm__("_pthread_cond_wait");
undefined8
recovered_10041930(long *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4) __asm__("_pthread_create");
undefined8 recovered_10041990(void) __asm__("_pthread_detach");
bool recovered_10041eb0(long param_1,long param_2) __asm__("_pthread_equal");
undefined8 recovered_10041d60(uint param_1) __asm__("_pthread_getspecific");
undefined8 recovered_10041970(undefined8 param_1,undefined8 *param_2) __asm__("_pthread_join");
undefined8 recovered_10041ae0(undefined4 *param_1) __asm__("_pthread_key_create");
undefined8 recovered_10041d30(uint param_1) __asm__("_pthread_key_delete");
undefined8 recovered_100419f0(void) __asm__("_pthread_mutex_destroy");
undefined8 recovered_100419d0(undefined4 *param_1) __asm__("_pthread_mutex_init");
undefined8 recovered_10041a00(void) __asm__("_pthread_mutex_lock");
undefined8 recovered_10041a10(void) __asm__("_pthread_mutex_trylock");
undefined8 recovered_10041a20(void) __asm__("_pthread_mutex_unlock");
undefined8 recovered_10041a50(void) __asm__("_pthread_mutexattr_destroy");
undefined8 recovered_10041a30(undefined4 *param_1) __asm__("_pthread_mutexattr_init");
undefined8 recovered_10041a60(undefined4 *param_1,undefined4 param_2) __asm__("_pthread_mutexattr_settype");
undefined8 recovered_10041900(int *param_1,undefined *param_2) __asm__("_pthread_once");
undefined8 recovered_10041de0(void) __asm__("_pthread_rwlock_destroy");
undefined8 recovered_10041dc0(undefined4 *param_1) __asm__("_pthread_rwlock_init");
undefined8 recovered_10041df0(void) __asm__("_pthread_rwlock_rdlock");
undefined8 recovered_10041e10(void) __asm__("_pthread_rwlock_unlock");
undefined8 recovered_10041e00(void) __asm__("_pthread_rwlock_wrlock");
long recovered_10041e20(void) __asm__("_pthread_self");
undefined8 recovered_10041d90(uint param_1,undefined8 param_2) __asm__("_pthread_setspecific");
undefined8 recovered_100412c0(int param_1,uint *param_2,uint *param_3) __asm__("_pthread_sigmask");
int recovered_1003c890(int ch,void *stream) __asm__("_putc");
int recovered_1003c8d0(int ch) __asm__("_putchar");
undefined8 recovered_1003fe40(long param_1,undefined8 *in_R8) __asm__("_putenv");
int recovered_1003c960(char *text) __asm__("_puts");
void recovered_100457e0(void *base,ulong count,ulong size,pf_compare *compare) __asm__("_qsort");
void recovered_10040570(void) __asm__("_quick_exit");
undefined8 recovered_10041320(void) __asm__("_raise");
int recovered_10043110(void) __asm__("_rand");
ulong recovered_1003e060(uint param_1,undefined1 *param_2,long in_RDX,undefined8 in_XMM1_Qa,
                        undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                        undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_read");
uint * recovered_1003f7e0(uint *param_1) __asm__("_readdir");
undefined8 recovered_1003f360(void) __asm__("_readlink");
void * recovered_100354c0(void *pointer,ulong size) __asm__("_realloc");
long recovered_10040030(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_realpath");
undefined8 recovered_1003e600(void) __asm__("_recv");
int recovered_1003d9d0(char *path) __asm__("_remove");
int recovered_1003db70(char *oldPath,char *newPath) __asm__("_rename");
void recovered_1003f840(long param_1) __asm__("_rewinddir");
double recovered_10043920(double value) __asm__("_rint");
float recovered_10043950(float value) __asm__("_rintf");
double recovered_10043990(double value) __asm__("_rintl");
void recovered_1003f070(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_rmdir");
double recovered_10043860(double value) __asm__("_round");
float recovered_10043890(float value) __asm__("_roundf");
double recovered_100438d0(double value) __asm__("_roundl");
undefined8 recovered_10040fe0(void) __asm__("_sched_get_priority_max");
undefined8 recovered_10040fd0(void) __asm__("_sched_get_priority_min");
undefined8 recovered_10041020(undefined8 param_1,undefined4 *param_2) __asm__("_sched_getparam");
undefined8 recovered_10041000(void) __asm__("_sched_getscheduler");
undefined8 recovered_10041010(void) __asm__("_sched_setparam");
undefined8 recovered_10040ff0(void) __asm__("_sched_setscheduler");
undefined8 recovered_10040f80(void) __asm__("_sched_yield");
uint recovered_100416f0(int param_1,uint *param_2,uint *param_3,uint *param_4) __asm__("_select");
undefined8 recovered_1003e5e0(void) __asm__("_send");
void recovered_1003d680(void *stream,char *buffer) __asm__("_setbuf");
undefined8
recovered_1003fb60(char *param_1,long param_2,int param_3,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_setenv");
undefined8 recovered_10040680(int param_1) __asm__("_setgid");
__attribute__((naked,returns_twice)) int recovered_100433f0(void *context) __asm__("_setjmp");
undefined * recovered_10037630(void) __asm__("_setlocale");
undefined8 recovered_10040f10(uint param_1) __asm__("_setrlimit");
undefined4 recovered_10040850(void) __asm__("_setsid");
undefined8 recovered_1003e5c0(void) __asm__("_setsockopt");
undefined8 recovered_10040650(int param_1) __asm__("_setuid");
int recovered_1003d650(void *stream,char *buffer,int mode,ulong size) __asm__("_setvbuf");
undefined8 recovered_1003e5a0(void) __asm__("_shutdown");
undefined8 recovered_100411f0(uint param_1,undefined8 *param_2,undefined8 *param_3) __asm__("_sigaction");
undefined8 recovered_10041430(uint *param_1,int param_2) __asm__("_sigaddset");
undefined8 recovered_10041470(uint *param_1,int param_2) __asm__("_sigdelset");
undefined8 recovered_100413d0(undefined4 *param_1) __asm__("_sigemptyset");
undefined8 recovered_10041400(undefined4 *param_1) __asm__("_sigfillset");
ulong recovered_100414b0(uint *param_1,uint param_2) __asm__("_sigismember");
undefined8 recovered_100411b0(uint param_1,undefined8 param_2) __asm__("_signal");
undefined8 recovered_10041260(int param_1,uint *param_2,uint *param_3) __asm__("_sigprocmask");
double recovered_10037d60(double value) __asm__("_sin");
float recovered_100386d0(float value) __asm__("_sinf");
double recovered_10044cb0(double value) __asm__("_sinh");
float recovered_10044ce0(float value) __asm__("_sinhf");
double recovered_10044d10(double value) __asm__("_sinhl");
undefined8 recovered_10040ca0(void) __asm__("_sleep");
int recovered_10039b90(char *buffer,unsigned long size,char *format,...) __asm__("_snprintf");
undefined8 recovered_1003e500(void) __asm__("_socket");
int recovered_1003cc60(char *buffer,char *format,...) __asm__("_sprintf");
double recovered_10037a30(double value) __asm__("_sqrt");
float recovered_10038530(float value) __asm__("_sqrtf");
void recovered_100430f0(uint seed) __asm__("_srand");
int recovered_1003d5c0(char *buffer,char *format,...) __asm__("_sscanf");
undefined8
recovered_1003de80(long param_1,long param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_stat");
undefined8 recovered_1003ed30(long param_1,undefined8 *param_2,undefined8 *in_R8) __asm__("_statfs");
int recovered_10042b00(byte *param_1,byte *param_2) __asm__("_strcasecmp");
char * recovered_10042f00(char *destination,char *source) __asm__("_strcat");
char * recovered_100374d0(char *text,int value) __asm__("_strchr");
int recovered_10036fb0(char *left,char *right) __asm__("_strcmp");
int recovered_10036ff0(char *left,char *right) __asm__("_strcoll");
char * recovered_10037030(char *destination,char *source) __asm__("_strcpy");
ulong recovered_10042de0(char *text,char *reject) __asm__("_strcspn");
char * recovered_10037050(char *text) __asm__("_strdup");
char * recovered_1003d760(int error_number) __asm__("_strerror");
long recovered_100464c0(undefined1 *param_1,ulong param_2,char *param_3,uint *param_4,
                       undefined8 *in_R8,undefined8 in_XMM0_Qa,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_strftime");
ulong recovered_10036f80(char *text) __asm__("_strlen");
int recovered_10042bc0(long param_1,long param_2,long param_3) __asm__("_strncasecmp");
char * recovered_10042f30(char *destination,char *source,ulong count) __asm__("_strncat");
int recovered_10042c40(char *left,char *right,ulong count) __asm__("_strncmp");
char * recovered_10042e40(char *destination,char *source,ulong count) __asm__("_strncpy");
long recovered_10042aa0(long param_1,long param_2,undefined8 *in_R8) __asm__("_strndup");
ulong recovered_10042a60(char *text,ulong max_length) __asm__("_strnlen");
char * recovered_10037570(char *text,char *accept) __asm__("_strpbrk");
char * recovered_10042d80(char *text,int value) __asm__("_strrchr");
char * recovered_10042db0(int param_1) __asm__("_strsignal");
ulong recovered_10037510(char *text,char *accept) __asm__("_strspn");
char * recovered_100375d0(char *haystack,char *needle) __asm__("_strstr");
double recovered_10038aa0(char *text,char **endptr) __asm__("_strtod");
float recovered_10038d00(char *text,char **endptr) __asm__("_strtof");
char * recovered_10043010(char *text,char *delimiters) __asm__("_strtok");
undefined1 * recovered_10042cc0(long param_1,long param_2,long *param_3) __asm__("_strtok_r");
long recovered_10038840(char *text,char **endptr,int base) __asm__("_strtol");
void recovered_100457b0(byte *in_RDI,undefined8 *in_RSI) __asm__("_strtold");
longlong recovered_100431e0(char *text,char **endptr,int base) __asm__("_strtoll");
ulong recovered_10038970(char *text,char **endptr,int base) __asm__("_strtoul");
ulonglong recovered_100431f0(char *text,char **endptr,int base) __asm__("_strtoull");
ulong recovered_10042fa0(char *destination,char *source,ulong count) __asm__("_strxfrm");
undefined8 recovered_1003f380(void) __asm__("_symlink");
undefined8 recovered_10040b00(int param_1) __asm__("_sysconf");
undefined8 recovered_1003fee0(long param_1) __asm__("_system");
double recovered_10044770(double value) __asm__("_tan");
float recovered_100447d0(float value) __asm__("_tanf");
double recovered_10044df0(double value) __asm__("_tanh");
float recovered_10044e20(float value) __asm__("_tanhf");
double recovered_10044e60(double value) __asm__("_tanhl");
double recovered_10044830(double value) __asm__("_tanl");
void recovered_1003a9c0(long param_1,ulong in_RCX,undefined8 *in_R8) __asm__("_tayga_libc_prepare");
undefined8 recovered_100414f0(uint param_1,undefined8 *param_2) __asm__("_tcgetattr");
undefined8 recovered_10041590(uint param_1,undefined8 param_2,undefined8 *param_3) __asm__("_tcsetattr");
void recovered_10037650(undefined8 *param_1) __asm__("_time");
bool recovered_10046ca0(undefined8 *param_1,int param_2) __asm__("_timespec_get");
char * recovered_1003d980(char *buffer) __asm__("_tmpnam");
int recovered_10036f40(int value) __asm__("_tolower");
int recovered_10036f60(int value) __asm__("_toupper");
double recovered_10038460(double value) __asm__("_trunc");
undefined8
recovered_1003f3c0(long param_1,ulong param_2,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                  undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                  undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_truncate");
float recovered_100384c0(float value) __asm__("_truncf");
undefined4 recovered_1003f1a0(undefined4 param_1) __asm__("_umask");
undefined8
recovered_10041050(long param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                  undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                  undefined8 in_XMM7_Qa) __asm__("_uname");
int recovered_1003c710(int ch,void *stream) __asm__("_ungetc");
undefined8
recovered_1003d9e0(char *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_unlink");
undefined8 recovered_1003fdf0(char *param_1,undefined8 *in_R8) __asm__("_unsetenv");
undefined8 recovered_10040cf0(void) __asm__("_usleep");
int recovered_1003c9e0(void *stream,char *format,void *args) __asm__("_vfprintf");
int recovered_1003cb10(char *format,void *args) __asm__("_vprintf");
int recovered_10038d10(char *buffer,unsigned long size,char *format,void *input) __asm__("_vsnprintf");
int recovered_1003cc40(char *buffer,char *format,void *input) __asm__("_vsprintf");
int recovered_1003cd00(char *buffer,char *format,void *args) __asm__("_vsscanf");
undefined8 recovered_10040e40(undefined4 *param_1) __asm__("_wait");
undefined8
recovered_10040e60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4) __asm__("_wait4");
undefined8 recovered_10040e20(undefined8 param_1,undefined4 *param_2) __asm__("_waitpid");
byte recovered_100436d0(double param_1) __asm__("_wm_math_fpclassify");
byte recovered_10043750(float param_1) __asm__("_wm_math_fpclassifyf");
int recovered_100437c0(long double value) __asm__("_wm_math_fpclassifyl");
bool recovered_10043450(ulong param_1) __asm__("_wm_math_isfinite");
bool recovered_10043480(uint param_1) __asm__("_wm_math_isfinitef");
byte recovered_100434a0(undefined8 in_stack_00000008,ushort in_stack_00000010) __asm__("_wm_math_isfinitel");
bool recovered_100434e0(ulong param_1) __asm__("_wm_math_isinf");
bool recovered_10043510(uint param_1) __asm__("_wm_math_isinff");
bool recovered_10043530(long in_stack_00000008,uint in_stack_00000010) __asm__("_wm_math_isinfl");
bool recovered_10043560(ulong param_1) __asm__("_wm_math_isnan");
bool recovered_10043590(uint param_1) __asm__("_wm_math_isnanf");
bool recovered_100435c0(longdouble in_stack_00000008) __asm__("_wm_math_isnanl");
bool recovered_100435d0(ulong param_1) __asm__("_wm_math_isnormal");
bool recovered_10043600(uint param_1) __asm__("_wm_math_isnormalf");
byte recovered_10043620(long in_stack_00000008,ushort in_stack_00000010) __asm__("_wm_math_isnormall");
uint recovered_10043670(undefined1 in_XMM0 [16]) __asm__("_wm_math_signbit");
uint recovered_10043680(undefined1 in_XMM0 [16]) __asm__("_wm_math_signbitf");
bool recovered_10043690(longdouble in_stack_00000008) __asm__("_wm_math_signbitl");
ulong * recovered_10034fd0(long param_1) __asm__("_wm_probe_heap_alloc");
ulong recovered_10034ed0(void) __asm__("_wm_probe_heap_free_bytes");
long recovered_10034f20(void) __asm__("_wm_probe_heap_free_bytes64");
void recovered_10034a40(void) __asm__("_wm_probe_heap_reset");
ulong recovered_10034f60(void) __asm__("_wm_probe_heap_total_bytes");
long recovered_10034fa0(void) __asm__("_wm_probe_heap_total_bytes64");
void recovered_1003c4f0(int *param_1) __asm__("_wmfs_clearerr");
undefined8
recovered_1003bbd0(int *param_1,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_fclose");
undefined1 recovered_1003c470(int *param_1) __asm__("_wmfs_feof");
undefined1 recovered_1003c4b0(int *param_1) __asm__("_wmfs_ferror");
void recovered_1003bbc0(int *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_fflush");
void recovered_1003b840(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_fopen");
void recovered_1003c110(undefined1 *in_RDI,ulong in_RSI,long in_RDX,int *in_RCX,
                       undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,
                       undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,
                       undefined8 in_XMM7_Qa) __asm__("_wmfs_fread");
void recovered_1003b850(long in_RDI,char *in_RSI,int *in_RDX,undefined8 *in_R8,undefined8 in_XMM1_Qa
                       ,undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_freopen");
undefined8 recovered_1003c1d0(int *param_1,long param_2,int param_3) __asm__("_wmfs_fseek");
undefined8 recovered_1003c2a0(int *param_1) __asm__("_wmfs_ftell");
void recovered_1003c120(long in_RDI,ulong in_RSI,ulong in_RDX,int *in_RCX) __asm__("_wmfs_fwrite");
uint recovered_1003c620(int *param_1,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_getc");
void recovered_1003db60(char *in_RDI,undefined8 *in_R8,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                       undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                       undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_remove");
void recovered_1003dd90(char *in_RDI,char *in_RSI,undefined8 *in_R8,undefined8 in_XMM1_Qa,
                       undefined8 in_XMM2_Qa,undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,
                       undefined8 in_XMM5_Qa,undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa) __asm__("_wmfs_rename");
uint recovered_1003c740(uint param_1,int *param_2) __asm__("_wmfs_ungetc");
ulong recovered_1003e0b0(uint param_1,long param_2,ulong in_RDX) __asm__("_write");
