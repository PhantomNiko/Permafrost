/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "x86_cpu.h"
extern uint8_t pf_module_state[];
void recovered_100005b0(void);
void recovered_10000610(void);
bool recovered_10000920(ulong *addresses,ulong *sizes,ulong count);
bool recovered_10000970(long param_1,long param_2,long param_3);
bool recovered_10000bb0(ulong address,ulong size);
uint recovered_10000c10(void);
ulonglong recovered_10000c90(void);
uint recovered_10000d00(void);
ulonglong recovered_10000d90(void);
void * recovered_10000e10(ulong size);
ulong * recovered_10000e70(long param_1,ulong *param_2,ulong *param_3);
void * recovered_10001070(ulong size,ulong limit);
void * recovered_100010d0(ulong size,ulong first,ulong last);
void recovered_10001130(void *pointer);
void recovered_10001180(long param_1);
void * recovered_100012a0(void *pointer,ulong size);
ulong recovered_10001950(ulong param_1,uint param_2);
ulong recovered_10001990(ulong param_1,uint param_2);
long recovered_100019d0(long param_1,uint param_2);
void recovered_10001a20(ulong param_1,ulong param_2);
long recovered_10001ac0(ulong param_1,ulong param_2);
long recovered_10001b30(ulong param_1,ulong param_2);
long recovered_10001c00(long param_1,long param_2);
void recovered_10001c90(void);
int recovered_10001cb0(int param_1);
void * recovered_10001cc0(ulong size);
void recovered_10001d10(void *pointer);
void * recovered_10001d60(void *pointer,ulong size);
void * recovered_10001db0(void *out,void *data,ulong size);
void * recovered_100021f0(void *out,void *data,ulong size);
void * recovered_10002ab0(void *out,int value,ulong size);
void recovered_10002e00(undefined1 *param_1,long param_2);
void recovered_100030d0(undefined1 *param_1,long param_2);
char * recovered_100033a0(long param_1,char param_2,long param_3);
int recovered_100033d0(void *left,void *right,ulong size);
int recovered_100036d0(byte *param_1,byte *param_2);
bool recovered_10003740(int param_1);
bool recovered_10003760(int param_1);
bool recovered_10003780(uint param_1);
bool recovered_100037a0(uint param_1);
bool recovered_100037d0(int param_1);
bool recovered_100037f0(int param_1);
int recovered_10003810(int param_1);
int recovered_10003830(int param_1);
ulong recovered_10003850(char *text);
int recovered_10003880(char *left,char *right);
int recovered_100038c0(char *left,char *right);
void recovered_10003900(long param_1,long param_2);
void recovered_10003920(char *param_1);
char * recovered_10003da0(char *param_1,char param_2);
long recovered_10003de0(long param_1,char *param_2);
ulong recovered_10003e40(char *text,char *reject);
char * recovered_10003ea0(char *param_1,char *param_2);
char * recovered_10003f00(char *param_1,char *param_2);
undefined * recovered_10003f60(void);
undefined ** recovered_10003f70(void);
undefined8 recovered_10003f80(undefined8 *param_1);
double recovered_10004080(double param_1,uint param_2);
ulong recovered_10004150(double param_1,int *param_2);
double recovered_10004220(double left,double right);
double recovered_10004250(double left,double right);
double recovered_100042d0(double value);
double recovered_10004300(double value);
double recovered_10004360(double value);
double recovered_10004510(double value);
long recovered_10004660(double param_1);
double recovered_10004690(double value);
double recovered_10004740(double value);
double recovered_100047e0(double value);
ulong recovered_10004800(double param_1);
ulong recovered_100048d0(double param_1);
double recovered_10004980(ulong param_1);
double recovered_100049d0(ulong param_1);
float recovered_10004a60(float left,float right);
float recovered_10004ab0(int *in_x0,float param_2);
float recovered_10004b70(uint in_w0,float param_2);
float recovered_10004c60(float left,float right);
float recovered_10004cf0(float value);
float recovered_10004d30(float value);
double recovered_10004d90(double value);
float recovered_10004df0(float value);
float recovered_10004e60(float value);
float recovered_10004e80(float value);
long recovered_10004fd0(double param_1);
float recovered_10005000(float value);
float recovered_100050b0(float value);
float recovered_10005150(float value);
long recovered_10005170(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100052a0(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_100053d0(char *text,char **end);
float recovered_10005630(char *text,char **end);
int recovered_10005640(char *out,ulong capacity,char *format,void *arguments);
int recovered_10006520(char *out,ulong capacity,char *format,...);
long * recovered_100065a0(long *param_1,ulong param_2,ulong *param_3);
ulong * recovered_10006760(ulong *param_1,ulong *param_2);
undefined8 recovered_100067d0(ulong *param_1,long param_2);
void recovered_10006830(char *param_1,long param_2);
void recovered_10006a00(void);
void recovered_10006aa0(void);
void recovered_10006b40(char *param_1);
void recovered_10006ba0(void);
void recovered_10006be0(void);
bool recovered_10006c20(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_10006d40(void);
void recovered_10006d50(void);
undefined8 recovered_10006d60(void);
undefined4 * recovered_10006d70(char *param_1,long param_2);
void recovered_10007100(char *param_1,long param_2,int *param_3);
undefined8 recovered_100071f0(int *param_1);
long recovered_100072c0(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_10007400(int *param_1);
long recovered_100075f0(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_10007780(int *param_1,ulong param_2,int param_3);
undefined8 recovered_10007800(long param_1);
undefined8 recovered_10007830(int *param_1);
undefined1 recovered_100078e0(long param_1);
undefined1 recovered_10007900(long param_1);
void recovered_10007920(long param_1);
uint recovered_10007940(uint param_1,long param_2);
undefined8 recovered_10007970(long param_1);
undefined8 recovered_100079f0(long param_1,long param_2);
ulong recovered_10007b60(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_10007c40(long param_1,long param_2,long param_3);
undefined8 recovered_10007cb0(void);
void recovered_10007cc0(void);
undefined8 recovered_10007cd0(void);
undefined8 recovered_10007ce0(void);
undefined8 recovered_10007cf0(void);
int recovered_10007d00(char *left,char *right,ulong size);
char * recovered_10007d40(int param_1);
undefined8 recovered_10007e10(void);
undefined8 recovered_10007e20(void);
ulong recovered_10007e30(void);
void recovered_10007e50(void);
uint recovered_10007e70(char *param_1,void *param_2);
uint recovered_10007ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined1 param_15);
__attribute__((naked,noreturn)) void recovered_10007f80(void *context,...);
__attribute__((naked,returns_twice)) int recovered_10007f90(void *context);
__attribute__((naked,noreturn)) void recovered_10007fd0(void *context,int value);
void recovered_10008010(void);
undefined8 recovered_10008090(void);
void recovered_100080a0(long param_1);
void recovered_100080b0(long param_1);
void * recovered_100080e0(ulong size);
void * recovered_10008110(ulong size);
void recovered_10008140(void *data);
void recovered_100081e0(void *data);
void recovered_10008280(void *param_1);
void recovered_10008320(void *param_1);
undefined8 recovered_100083c0(void);
uint recovered_100083d0(uint *param_1);
void recovered_100083e0(ulong *param_1);
void recovered_100083f0(void);
undefined1 * recovered_10008400(ulong param_1);
void recovered_10008510(long param_1);
void recovered_10008570(long param_1);
long recovered_100085b0(long param_1);
void recovered_100085c0(void);
void recovered_10008650(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_10008680(undefined8 *param_1);
void recovered_10008700(void);
void recovered_10008730(undefined8 *param_1);
void recovered_10008750(undefined8 *param_1);
void recovered_10008790(undefined8 *in_x0);
void recovered_100087a0(void);
undefined8 recovered_100087b0(undefined8 *param_1);
void recovered_10008810(undefined8 *param_1);
undefined8 recovered_100088b0(undefined8 *in_x0);
undefined8 recovered_100088c0(void);
ulonglong recovered_100088d0(void);
long recovered_100088e0(long *param_1,undefined8 param_2,undefined8 *param_3);
void recovered_100089c0(void);
undefined8 recovered_100089d0(void);
bool recovered_100089e0(int param_1);
bool recovered_10008a00(uint param_1);
bool recovered_10008a30(uint param_1);
bool recovered_10008a50(double value);
bool recovered_10008a80(uint param_1);
bool recovered_10008aa0(ulong param_1);
bool recovered_10008ae0(ulong param_1);
double recovered_10008b10(double param_1);
float recovered_10008c80(float param_1);
void recovered_10008e10(void);
double recovered_10008fa0(long param_1,long param_2);
double recovered_10008fc0(double value);
long recovered_10009010(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_10009150(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_10009160(long param_1,byte *param_2,undefined2 *param_3);
byte * recovered_10009500(uint param_1,long *param_2);
void recovered_10009690(undefined8 *param_1);
void recovered_100096b0(long param_1);
void recovered_100096e0(undefined1 *param_1);
void recovered_10009700(undefined1 *param_1);
void recovered_10009720(undefined1 *param_1);
void recovered_10009740(undefined1 *param_1);
void recovered_10009760(undefined1 *param_1,int param_2);
void recovered_10009780(undefined1 *param_1,int param_2);
void recovered_100097a0(undefined1 *param_1,undefined8 param_2);
void recovered_100097c0(undefined1 *param_1,undefined8 param_2);
void recovered_100097e0(void *object,double value);
void recovered_10009800(void *object,double value);
void recovered_10009820(undefined1 *param_1,undefined1 param_2);
void recovered_10009840(undefined1 *param_1,undefined1 param_2);
undefined1 * recovered_10009860(undefined1 *param_1,undefined1 *param_2);
void recovered_100098f0(long *param_1,long param_2);
undefined1 * recovered_10009930(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_100099c0(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_10009a10(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_10009a60(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_10009a90(undefined1 *param_1,undefined8 *in_x1);
undefined1 * recovered_10009ac0(undefined1 *param_1,long *param_2);
undefined8 * recovered_10009af0(undefined8 *param_1,long *param_2);
undefined1 * recovered_10009ce0(undefined1 *param_1,long *param_2);
undefined1 * recovered_10009d10(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_10009da0(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_10009e30(undefined1 *param_1,long *param_2);
undefined1 * recovered_10009f60(undefined1 *param_1,long *param_2);
undefined1 * recovered_1000a090(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_1000a160(undefined1 *param_1,undefined8 *param_2);
undefined1 * recovered_1000a230(undefined1 *param_1,long *in_x1);
undefined1 * recovered_1000a260(undefined1 *param_1,long *in_x1);
void recovered_1000a290(undefined1 *param_1);
void recovered_1000a3f0(void *owner);
void recovered_1000a500(undefined1 *param_1);
void recovered_1000a6b0(void *owner);
byte recovered_1000a7f0(char *param_1);
long * recovered_1000a820(long *param_1,undefined1 *param_2);
void recovered_1000b2a0(long *param_1,undefined8 *param_2);
long * recovered_1000b2d0(long *param_1,undefined8 *param_2,long param_3);
long * recovered_1000b400(long *param_1,long param_2,undefined8 *param_3);
undefined8 * recovered_1000b550(char *param_1);
void recovered_1000b680(undefined8 *param_1,long param_2);
void recovered_1000b6e0(void *owner);
double recovered_1000b700(void *object);
char recovered_1000b860(char *param_1);
char * recovered_1000b960(char *param_1);
undefined8 recovered_1000ba60(char *param_1);
undefined8 recovered_1000bb60(char *param_1);
undefined8 recovered_1000bc60(char *param_1);
undefined8 recovered_1000bd60(char *param_1);
char * recovered_1000be60(char *param_1);
undefined8 * recovered_1000bf60(undefined8 *param_1);
undefined8 * recovered_1000c040(undefined8 *param_1);
void recovered_1000c120(void *owner);
void recovered_1000c150(void *owner);
void recovered_1000c180(undefined8 *param_1,undefined8 *param_2);
void recovered_1000c1a0(undefined8 *param_1,undefined8 *param_2);
long * recovered_1000c1c0(long *param_1,long *param_2);
void recovered_1000c210(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_1000c2f0(long param_1,long *param_2,undefined8 *param_3);
void recovered_1000c8a0(long *param_1,undefined8 *param_2,long *param_3);
undefined1 * recovered_1000c9c0(undefined1 *param_1,undefined1 *param_2);
void recovered_1000d1c0(void *owner);
bool recovered_1000d260(long *param_1,undefined8 *param_2,undefined1 *param_3);
undefined1 * recovered_1000d580(undefined1 *param_1,long *param_2);
void recovered_1000e6a0(void *owner);
void recovered_1000e750(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
long * recovered_1000ea60(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4);
void recovered_10012960(void *owner);
ulong recovered_10012aa0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                        undefined8 param_5);
void recovered_10013050(undefined1 *param_1,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2);
undefined1 * recovered_100138f0(undefined1 *param_1,long param_2,long *param_3);
void recovered_10013e00(void *owner);
undefined1 *
recovered_10013f40(undefined1 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4);
undefined1 * recovered_100142c0(undefined1 *param_1,long *param_2,undefined8 *param_3);
void recovered_100145c0(undefined1 *param_1,undefined1 *param_2);
void recovered_100147c0(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10014c30(void *owner);
void recovered_10014cf0(void *owner);
void recovered_10014dc0(undefined1 *param_1,undefined8 *param_2,long *param_3);
void recovered_10015470(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10015490(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_10015db0(long *param_1,undefined1 *param_2);
void recovered_10015dd0(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10015eb0(undefined1 *param_1,undefined8 *param_2,undefined8 *in_x1,undefined8 *in_x2);
void recovered_10015ed0(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10015ef0(undefined1 *param_1,undefined8 *param_2,long *param_3);
void recovered_10015f10(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10015f30(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10015f50(long *param_1,long param_2,ulong param_3);
void recovered_10016200(void *owner);
long * recovered_10016320(double param_1,long *param_2);
void recovered_10016a40(long *param_1,undefined1 param_2);
long * recovered_10016bf0(long *param_1,long param_2,ulong param_3);
void recovered_10017090(void *owner);
undefined1 * recovered_100170c0(long param_1);
void recovered_100170e0(void *owner);
void recovered_100171b0(void *owner);
void recovered_100171c0(void *owner);
void recovered_100171d0(long param_1);
void recovered_10017200(void *owner);
void recovered_10017330(void *owner);
void recovered_10017400(void *owner);
void recovered_100174d0(void *owner);
void recovered_10017510(void *owner);
undefined1 *
recovered_10017550(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5,
                  undefined4 param_6);
undefined8 * recovered_10017c30(long param_1);
void recovered_10017e70(long *param_1,ulong param_2);
void recovered_100180a0(undefined4 param_1,undefined8 *param_2);
void recovered_10018200(void *owner);
void recovered_10018210(undefined8 *param_1,undefined8 *param_2,undefined4 param_3);
void recovered_10018270(void *owner);
void recovered_10018290(void *owner);
void recovered_100182c0(long param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_10018550(long param_1,undefined8 *param_2);
void recovered_10018840(long *param_1,ulong param_2);
void recovered_10018a80(undefined8 param_1,long *param_2);
void recovered_10018c20(undefined8 param_1,long *param_2,long *param_3);
void recovered_10018cc0(void *owner);
void recovered_10018d90(void *owner);
void recovered_10018e60(void *owner);
uint128 recovered_10018f30(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10019300(long *param_1,undefined1 *param_2);
long recovered_100193f0(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_10019530(long *param_1,ulong param_2);
void recovered_10019910(undefined1 *param_1,undefined8 *param_2);
void recovered_10019960(long param_1,char *param_2,char *param_3);
void recovered_1001a1c0(void *owner);
void recovered_1001a2c0(void *owner);
void recovered_1001a2d0(void *owner);
void recovered_1001a2e0(long param_1);
void recovered_1001a4c0(long *param_1,char *param_2);
long recovered_1001a870(long *param_1,char *param_2);
ulong recovered_1001a970(long param_1,char *param_2);
void recovered_1001ab10(long *param_1,ulong param_2);
long recovered_1001ad90(long param_1);
char * recovered_1001ae70(char *param_1,long param_2,char *param_3);
long recovered_1001af10(long *param_1,undefined8 *param_2);
long recovered_1001b3c0(long *param_1,undefined8 *param_2,undefined1 *param_3);
void recovered_1001b4f0(long *param_1,ulong param_2);
void recovered_1001b8d0(long *param_1,ulong param_2);
void recovered_1001bb40(long param_1,long *param_2);
void recovered_1001bc40(long param_1,long *param_2);
void recovered_1001bd50(void *owner);
void recovered_1001bdb0(void *owner);
void recovered_1001bef0(void *owner);
void recovered_1001bfc0(void *owner);
void recovered_1001c020(long *param_1,undefined1 *param_2);
long * recovered_1001c150(long *param_1,long *param_2,undefined4 param_3,uint param_4);
void recovered_1001c360(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4);
long * recovered_1001c660(long *param_1,undefined8 *param_2,undefined1 param_3);
long * recovered_1001c770(long *param_1,ulong param_2);
void recovered_1001cb00(long *param_1,ulong param_2,undefined1 param_3);
ulong recovered_1001cd10(undefined8 *param_1,long param_2);
void recovered_1001cda0(long param_1);
void recovered_1001cf70(long *param_1,long *param_2);
long * recovered_1001e230(long *param_1,long *param_2);
void recovered_1001e3a0(void *owner);
void recovered_1001e420(long *param_1,long *param_2);
void recovered_1001ec10(void *owner);
void recovered_1001ece0(void *owner);
void recovered_1001edb0(long param_1,long param_2);
void recovered_1001eef0(void *owner);
ulong recovered_1001efc0(long *param_1);
void recovered_1001f240(void *owner);
void recovered_1001f310(void *owner);
void recovered_1001f3e0(void *owner);
void recovered_1001f4b0(void *owner);
void recovered_1001f580(void *owner);
undefined8 recovered_1001f650(long param_1,undefined8 *param_2,int *param_3,undefined8 *param_4);
void recovered_1001f840(void *owner);
void recovered_1001f910(void *owner);
void recovered_1001f9e0(void *owner);
void recovered_1001fab0(void *owner);
void recovered_1001fb80(void *owner);
void recovered_1001fc50(void *owner);
void recovered_1001fd20(void *owner);
long recovered_1001fdf0(long *param_1,undefined8 *param_2);
long recovered_100201c0(long *param_1,undefined8 *param_2,undefined8 *param_3);
char recovered_10020300(long param_1);
void recovered_10020490(void *owner);
undefined8 * recovered_10020560(undefined8 *param_1,ulong *param_2);
undefined8 * recovered_10022d30(undefined8 *param_1,ulong *param_2,long param_3,int param_4);
long * recovered_10023b50(long *param_1,long *param_2);
void recovered_10023db0(void *owner);
long * recovered_10023e80(long *param_1,ulong *param_2,long param_3,long param_4);
void recovered_10024220(long *param_1,undefined8 *param_2);
void recovered_10024370(void *owner);
void recovered_100244f0(void *owner);
void recovered_10024670(void *owner);
void recovered_10024690(void *owner);
void recovered_100246a0(void *owner);
void recovered_100246b0(long param_1);
long * recovered_100246e0(long *param_1,long *param_2);
undefined8 *
recovered_10024940(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 *param_4,
                  undefined4 *param_5);
long * recovered_10024ab0(long *param_1,long *param_2);
long * recovered_10024e30(long *param_1,long *param_2);
long * recovered_100253f0(long *param_1,long *param_2);
undefined8 * recovered_10025770(undefined8 *param_1,long *param_2);
long * recovered_10025a30(long *param_1,ulong *param_2);
void recovered_100276a0(void *owner);
void recovered_10027780(void *owner);
void recovered_10027870(void *owner);
void recovered_10027880(void *owner);
void recovered_10027890(long param_1);
undefined8 *
recovered_100278c0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined4 *param_4);
long * recovered_10027b10(long *param_1,long *param_2);
long * recovered_10027e20(long *param_1,long *param_2);
void recovered_10027f90(void *owner);
undefined8 * recovered_100280d0(undefined8 *param_1,undefined1 *param_2,undefined4 *param_3);
double recovered_100283f0(byte *param_1,long param_2,long *param_3);
undefined8 * recovered_100286c0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
undefined8 * recovered_100288b0(undefined8 *param_1,ulong *param_2,undefined4 param_3);
void recovered_10028d70(long param_1,long param_2,undefined8 *param_3);
void recovered_10028d90(void *owner);
void recovered_10028e40(void *owner);
void recovered_10028f00(void *owner);
void recovered_10028f10(void *owner);
void recovered_10028f20(long param_1);
uint128 recovered_10028f50(char *param_1,char *param_2,ulong *param_3,uint param_4);
void recovered_10029110(void *owner);
void recovered_10029130(void *owner);
void recovered_10029160(void *owner);
void recovered_10029170(void *owner);
void recovered_10029180(long param_1);
void recovered_100291b0(void *owner);
void recovered_100292d0(void *owner);
void recovered_10029330(void *owner);
void recovered_100293a0(void *owner);
void recovered_100293b0(void *owner);
void recovered_100293c0(long param_1);
void recovered_100293f0(void *owner);
void recovered_10029570(void *owner);
void recovered_10029590(void *owner);
void recovered_100295a0(void *owner);
void recovered_100295b0(long param_1);
long recovered_100295e0(long *param_1,undefined8 *param_2);
void recovered_10029700(void *owner);
void recovered_10029800(void *owner);
void recovered_10029910(void *owner);
void recovered_10029920(void *owner);
void recovered_10029930(long param_1);
void recovered_10029960(void *owner);
void recovered_10029ab0(void *owner);
void recovered_10029ad0(void *owner);
void recovered_10029ae0(void *owner);
void recovered_10029af0(long param_1);
void recovered_10029b20(void *owner);
void recovered_10029d00(void *owner);
void recovered_10029d20(void *owner);
void recovered_10029d30(void *owner);
void recovered_10029d40(long param_1);
long * recovered_10029d70(long *param_1,long *param_2);
void recovered_1002a100(void *owner);
void recovered_1002a220(void *owner);
void recovered_1002a350(void *owner);
void recovered_1002a360(void *owner);
void recovered_1002a370(long param_1);
void recovered_1002a3a0(void *owner);
void recovered_1002a520(void *owner);
void recovered_1002a540(void *owner);
void recovered_1002a550(void *owner);
void recovered_1002a560(long param_1);
void recovered_1002a590(void *owner);
void recovered_1002a7a0(void *owner);
void recovered_1002a7c0(void *owner);
void recovered_1002a7d0(void *owner);
void recovered_1002a7e0(long param_1);
void recovered_1002a810(void *owner);
void recovered_1002aa50(void *owner);
void recovered_1002aa70(void *owner);
void recovered_1002aa80(void *owner);
void recovered_1002aa90(long param_1);
void recovered_1002aac0(void *owner);
void recovered_1002ac00(void *owner);
void recovered_1002ad40(void *owner);
void recovered_1002ad50(void *owner);
void recovered_1002ad60(long param_1);
void recovered_1002ad90(void *owner);
void recovered_1002ada0(void *owner);
void recovered_1002adb0(void *owner);
void recovered_1002adc0(void *owner);
void recovered_1002add0(long param_1);
undefined1 * recovered_1002ae00(undefined1 *param_1,undefined1 *param_2);
void recovered_1002afb0(void *owner);
long recovered_1002b0d0(long *param_1,long param_2,undefined8 *param_3);
void recovered_1002b280(void *owner);
void recovered_1002b370(void *owner);
void recovered_1002b460(void *owner);
void recovered_1002b470(void *owner);
void recovered_1002b480(long param_1);
void recovered_1002b4b0(long *param_1,undefined1 *param_2);
void recovered_1002b640(void *owner);
void recovered_1002b7c0(void *owner);
void recovered_1002b7e0(void *owner);
void recovered_1002b7f0(void *owner);
void recovered_1002b800(long param_1);
undefined1 * recovered_1002b830(undefined1 *param_1,long *param_2,long *param_3);
void recovered_1002be30(void *owner);
void recovered_1002bf10(void *owner);
void recovered_1002c000(void *owner);
void recovered_1002c010(void *owner);
void recovered_1002c020(long param_1);
void recovered_1002c050(long param_1,long *param_2);
void recovered_1002c350(long param_1,long *param_2);
long recovered_1002c630(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_1002c910(void *owner);
void recovered_1002c9e0(void *owner);
void recovered_1002cab0(void *owner);
void recovered_1002cb80(undefined1 *param_1,undefined1 *param_2);
void recovered_1002cdb0(undefined8 *param_1,undefined8 *param_2);
void recovered_1002d1a0(void *owner);
void recovered_1002d330(void *owner);
void recovered_1002d450(void *owner);
void recovered_1002d490(void *owner);
void recovered_1002d4a0(void *owner);
void recovered_1002d4b0(long param_1);
void recovered_1002d4e0(void *owner);
void recovered_1002d670(long *param_1,long param_2,long *****param_3);
long * recovered_10030e50(long *param_1,long *param_2,long *param_3,long *param_4);
void recovered_10032d50(long *param_1,char *param_2,long *param_3,long *param_4,byte param_5);
undefined1 * recovered_100332a0(undefined1 *param_1,long *param_2,long *param_3,long *param_4);
undefined1 * recovered_10033720(undefined1 *param_1,long *param_2,long *param_3,long *param_4);
void recovered_10033ab0(long *param_1);
double recovered_10033d90(char *param_1);
ulong recovered_10033ec0(long param_1,undefined1 *param_2);
void recovered_10034740(void *owner);
undefined1 * recovered_10034880(undefined1 *param_1,char *param_2);
undefined1 * recovered_10034a70(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * recovered_10034d20(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * recovered_10034fd0(undefined1 *param_1,char *param_2,char *param_3);
undefined1 * recovered_10035280(undefined1 *param_1,char *param_2,char *param_3);
long * recovered_10035560(long *param_1,undefined8 *param_2,undefined8 *param_3);
long * recovered_10035690(long *param_1,undefined1 *param_2);
bool recovered_100367d0(char *param_1,char *param_2);
undefined1 *
recovered_100369c0(undefined1 *param_1,char *param_2,byte *param_3,uint param_4,undefined4 param_5);
undefined8 recovered_10036e80(undefined1 *param_1,undefined1 *param_2);
char * recovered_10037030(char *param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5
                         );
undefined8 * recovered_10037cb0(undefined8 *param_1,char *param_2,long param_3,long *param_4);
long * recovered_10038600(long *param_1,undefined1 *param_2);
undefined1 * recovered_10038760(undefined1 *param_1,long *param_2,long *param_3);
void recovered_10038960(void *owner);
void recovered_10038970(void *owner);
undefined1 *
recovered_10038980(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5,undefined4 param_6);
void recovered_10039820(long param_1);
void recovered_10039850(undefined1 *param_1,ulong param_2,ulong param_3,ulong param_4);
long * recovered_10039c00(long *param_1,long param_2,char *param_3,long param_4,undefined4 param_5,
                         char param_6);
long recovered_10039e30(long param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5);
void recovered_10039fa0(void *owner);
void recovered_1003a070(void *owner);
void recovered_1003a080(void *owner);
undefined1 *
recovered_1003a090(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1003a660(long param_1);
void recovered_1003a690(undefined1 *param_1,undefined1 *param_2);
void recovered_1003a8b0(void *owner);
void recovered_1003a980(undefined1 *param_1,undefined1 *param_2);
void recovered_1003aae0(void *owner);
void recovered_1003ac20(void *owner);
void recovered_1003ac30(void *owner);
undefined1 *
recovered_1003ac40(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1003b0e0(void);
void recovered_1003b100(void *owner);
void recovered_1003b110(void *owner);
undefined1 *
recovered_1003b120(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1003ba40(long param_1);
void recovered_1003ba70(void *owner);
void recovered_1003ba80(void *owner);
undefined1 *
recovered_1003ba90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1003bcb0(void);
void recovered_1003bcd0(void *owner);
void recovered_1003bce0(void *owner);
undefined1 *
recovered_1003bcf0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1003c130(void);
void recovered_1003c150(undefined1 *param_1,undefined1 *param_2);
undefined8 *
recovered_1003c2d0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,char param_5);
undefined8 *
recovered_1003edf0(undefined8 *param_1,undefined8 *param_2,char *param_3,long param_4,long *param_5,
                  undefined4 param_6);
void recovered_1003efb0(void *owner);
undefined8 *
recovered_1003f1a0(undefined8 *param_1,undefined8 *param_2,long *param_3,long param_4,long *param_5,
                  undefined4 param_6);
undefined8 * recovered_1003fd70(undefined8 *param_1,long *param_2,long *****param_3);
void recovered_10040040(undefined1 *param_1,undefined1 *param_2);
undefined1 * recovered_100401d0(undefined1 *param_1,undefined1 *param_2);
long * recovered_100404b0(long *param_1,long *param_2);
void recovered_10040660(void *owner);
ulong recovered_10040730(long *param_1,long *param_2);
long * recovered_10040870(long *param_1,long *param_2,long *param_3);
void recovered_100409d0(undefined8 param_1,long *param_2,long *param_3);
void recovered_10040a70(void *owner);
void recovered_10040a80(void *owner);
void recovered_10040a90(long param_1);
void recovered_10040bc0(long *param_1,long *param_2);
void recovered_10041090(long *param_1,long *param_2);
void recovered_10041290(void *owner);
void recovered_100412a0(void *owner);
void recovered_100412b0(long param_1);
void recovered_10041420(long *param_1,long param_2);
void recovered_100416e0(long *param_1);
void recovered_10045e70(long param_1,long *param_2,long *param_3);
void recovered_100460f0(long param_1,long *param_2,long *param_3);
void recovered_10046420(void *owner);
void recovered_10046430(void *owner);
undefined1 * recovered_10046440(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4);
void recovered_10046460(long param_1);
undefined1 *
recovered_10046490(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4);
void recovered_10046690(void *owner);
void recovered_100466a0(void *owner);
undefined1 *
recovered_100466b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5);
void recovered_10046820(long param_1);
void recovered_10046850(void *owner);
void recovered_10046860(void *owner);
undefined1 * recovered_10046870(undefined1 *param_1);
void recovered_100469e0(void);
void recovered_10046a00(void *owner);
void recovered_10046a10(void *owner);
undefined1 *
recovered_10046a20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10046ef0(long param_1);
void recovered_10046f20(void *owner);
void recovered_10046f30(void *owner);
undefined1 *
recovered_10046f40(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5);
void recovered_100470b0(long param_1);
void recovered_100470e0(void *owner);
void recovered_100470f0(void *owner);
undefined1 *
recovered_10047100(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100473b0(long param_1);
void recovered_100473e0(void *owner);
void recovered_100473f0(void *owner);
void recovered_10047400(void);
void recovered_10047510(long param_1);
void recovered_10047540(void *owner);
void recovered_10047550(void *owner);
undefined1 *
recovered_10047560(undefined1 *param_1,long param_2,undefined8 param_3,char *param_4,ulong param_5,
                  undefined4 param_6);
void recovered_10047d80(long param_1);
void recovered_10047db0(void *owner);
void recovered_10047dc0(void *owner);
undefined1 *
recovered_10047dd0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100480a0(long param_1);
void recovered_100480d0(void *owner);
void recovered_100480e0(void *owner);
void recovered_100480f0(long param_1);
void recovered_10048300(void *owner);
void recovered_10048310(void *owner);
undefined1 *
recovered_10048320(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10048710(long param_1);
void recovered_10048740(void *owner);
void recovered_10048750(void *owner);
undefined1 *
recovered_10048760(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10048e70(long param_1);
undefined8 * recovered_10048ea0(undefined8 *param_1,undefined8 *param_2);
void recovered_10049610(void *owner);
void recovered_10049670(void *owner);
void recovered_10049680(void *owner);
undefined1 *
recovered_10049690(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10049a80(long param_1);
void recovered_10049ab0(void *owner);
void recovered_10049ac0(void *owner);
undefined1 *
recovered_10049ad0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10049d80(long param_1);
long * recovered_10049db0(long *param_1,long param_2,long param_3,ulong param_4,ulong param_5,
                         undefined4 param_6);
void recovered_10049f10(void *owner);
void recovered_10049f20(void *owner);
undefined1 *
recovered_10049f30(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004a220(long param_1);
void recovered_1004a250(void *owner);
void recovered_1004a260(void *owner);
undefined1 *
recovered_1004a270(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004a460(long param_1);
void recovered_1004a490(void *owner);
void recovered_1004a4a0(void *owner);
undefined1 *
recovered_1004a4b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004a970(long param_1);
void recovered_1004a9a0(void *owner);
void recovered_1004a9b0(void *owner);
undefined1 *
recovered_1004a9c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004ae80(long param_1);
void recovered_1004aeb0(void *owner);
void recovered_1004aec0(void *owner);
undefined1 *
recovered_1004aed0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004b210(long param_1);
void recovered_1004b240(void *owner);
void recovered_1004b250(void *owner);
undefined1 *
recovered_1004b260(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004ba30(long param_1);
ulong recovered_1004ba60(undefined8 *param_1,undefined8 *param_2,ulong param_3,char param_4,
                        ulong *param_5);
void recovered_1004c050(undefined1 *param_1,undefined8 *param_2);
void recovered_1004c400(void *owner);
long * recovered_1004c470(long *param_1,undefined8 *param_2);
long * recovered_1004d680(long *param_1,undefined4 param_2);
byte recovered_1004d9e0(long param_1,long param_2,long *param_3,undefined8 *param_4);
byte recovered_1004dbb0(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                       ulong param_6,undefined4 param_7,ulong *param_8);
ulong recovered_1004dda0(long param_1,ulong param_2,ulong param_3,byte param_4,byte param_5,
                        ulong *param_6);
long recovered_1004e020(long *param_1,undefined8 *param_2);
void recovered_1004e130(void *owner);
void recovered_1004e140(void *owner);
undefined1 *
recovered_1004e150(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004e950(long param_1);
void recovered_1004e980(void *owner);
void recovered_1004e990(void *owner);
undefined1 *
recovered_1004e9a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1004fd70(long param_1);
void recovered_1004fda0(void *owner);
void recovered_1004fe50(long *param_1,ulong param_2);
void recovered_100501a0(void *owner);
void recovered_100501b0(void *owner);
undefined1 *
recovered_100501c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10050f40(long param_1);
void recovered_10050f70(void *owner);
void recovered_10050f80(void *owner);
undefined1 *
recovered_10050f90(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10051ab0(long param_1);
long * recovered_10051ae0(long *param_1,ulong param_2);
void recovered_10051dd0(void *owner);
void recovered_10051de0(void *owner);
undefined8 *
recovered_10051df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100521b0(long param_1);
void recovered_100521e0(void *owner);
void recovered_100521f0(void *owner);
undefined1 *
recovered_10052200(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10052640(long param_1);
void recovered_10052670(void *owner);
void recovered_10052680(void *owner);
undefined1 *
recovered_10052690(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10052ae0(long param_1);
void recovered_10052b10(void *owner);
void recovered_10052b20(void *owner);
undefined1 *
recovered_10052b30(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10052f30(void);
void recovered_10052f50(void *owner);
void recovered_10052f60(void *owner);
undefined1 *
recovered_10052f70(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100532a0(void);
void recovered_100532c0(void *owner);
void recovered_100532d0(void *owner);
undefined1 *
recovered_100532e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100535b0(void);
void recovered_100535d0(void *owner);
void recovered_100535e0(void *owner);
undefined1 *
recovered_100535f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100538c0(void);
void recovered_100538e0(void *owner);
void recovered_100538f0(void *owner);
undefined1 *
recovered_10053900(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10053c30(void);
void recovered_10053c50(void *owner);
void recovered_10053c60(void *owner);
undefined1 *
recovered_10053c70(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10053fd0(void);
void recovered_10053ff0(void *owner);
void recovered_10054000(void *owner);
undefined1 *
recovered_10054010(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10054380(void);
void recovered_100543a0(void *owner);
void recovered_100543b0(void *owner);
undefined1 *
recovered_100543c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long **param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100551d0(void);
void recovered_100551f0(void *owner);
void recovered_10055200(void *owner);
undefined1 *
recovered_10055210(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10055ab0(void);
uint128 recovered_10055ad0(char *param_1,char *param_2,undefined4 *param_3,uint param_4);
void recovered_10055c60(void *owner);
void recovered_10055c70(void *owner);
undefined1 *
recovered_10055c80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10056580(long param_1);
void recovered_100565b0(void *owner);
void recovered_100565c0(void *owner);
undefined8 *
recovered_100565d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  long *param_5,undefined4 param_6);
void recovered_10056c20(long param_1);
void recovered_10056c50(void *owner);
void recovered_10056c60(void *owner);
undefined1 *
recovered_10056c70(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_100577d0(long param_1);
void recovered_10057800(void *owner);
void recovered_10057810(void *owner);
undefined1 *
recovered_10057820(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10057f70(long param_1);
void recovered_10057fa0(void *owner);
void recovered_10057fb0(void *owner);
undefined1 *
recovered_10057fc0(undefined1 *param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  byte *param_5,undefined4 param_6);
void recovered_10059930(long param_1);
void recovered_10059960(void *owner);
void recovered_10059970(void *owner);
undefined1 *
recovered_10059980(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5);
void recovered_10059da0(long param_1);
void recovered_10059dd0(void *owner);
void recovered_10059de0(void *owner);
undefined1 *
recovered_10059df0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5,undefined4 param_6);
void recovered_1005a300(long param_1);
void recovered_1005a330(void *owner);
void recovered_1005a340(void *owner);
undefined1 *
recovered_1005a350(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005a860(void);
void recovered_1005a880(void *owner);
void recovered_1005a890(void *owner);
undefined1 *
recovered_1005a8a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005ad20(void);
void recovered_1005ad40(void *owner);
void recovered_1005ad50(void *owner);
undefined1 *
recovered_1005ad60(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005b5d0(void);
void recovered_1005b5f0(void *owner);
void recovered_1005b600(void *owner);
undefined1 *
recovered_1005b610(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005b910(void);
void recovered_1005b930(void *owner);
void recovered_1005b940(void *owner);
undefined1 *
recovered_1005b950(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005be90(void);
void recovered_1005beb0(void *owner);
void recovered_1005bec0(void *owner);
undefined1 *
recovered_1005bed0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005c110(long param_1);
double recovered_1005c140(long param_1,long param_2,ulong param_3,ulong param_4,undefined4 param_5);
void recovered_1005c2b0(void *owner);
void recovered_1005c2c0(void *owner);
undefined1 *
recovered_1005c2d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005c510(long param_1);
void recovered_1005c540(void *owner);
void recovered_1005c550(void *owner);
undefined1 *
recovered_1005c560(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005c740(long param_1);
void recovered_1005c770(void *owner);
void recovered_1005c780(void *owner);
undefined1 *
recovered_1005c790(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005c970(long param_1);
void recovered_1005c9a0(void *owner);
void recovered_1005c9b0(void *owner);
undefined1 *
recovered_1005c9c0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005cba0(long param_1);
void recovered_1005cbd0(void *owner);
void recovered_1005cbe0(void *owner);
undefined1 *
recovered_1005cbf0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005cdd0(long param_1);
void recovered_1005ce00(void *owner);
void recovered_1005ce10(void *owner);
undefined1 *
recovered_1005ce20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005d000(long param_1);
void recovered_1005d030(void *owner);
void recovered_1005d040(void *owner);
undefined1 *
recovered_1005d050(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005d230(long param_1);
void recovered_1005d260(void *owner);
void recovered_1005d270(void *owner);
undefined1 *
recovered_1005d280(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005d460(long param_1);
void recovered_1005d490(void *owner);
void recovered_1005d4a0(void *owner);
undefined1 *
recovered_1005d4b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005d690(void);
void recovered_1005d6b0(void *owner);
void recovered_1005d6c0(void *owner);
undefined1 *
recovered_1005d6d0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005d8d0(void);
void recovered_1005d8f0(void *owner);
void recovered_1005d900(void *owner);
undefined1 *
recovered_1005d910(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005daf0(void);
void recovered_1005db10(void *owner);
void recovered_1005db20(void *owner);
undefined1 *
recovered_1005db30(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005dde0(void);
void recovered_1005de00(void *owner);
void recovered_1005de10(void *owner);
undefined1 *
recovered_1005de20(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005e1d0(long param_1);
void recovered_1005e200(void *owner);
void recovered_1005e210(void *owner);
undefined8 *
recovered_1005e220(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined4 param_6);
void recovered_1005e3a0(long param_1);
void recovered_1005e3d0(void *owner);
void recovered_1005e3e0(void *owner);
undefined1 *
recovered_1005e3f0(undefined1 *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined4 param_6);
void recovered_1005e6e0(long param_1);
undefined8 recovered_1005e710(long param_1);
void recovered_1005e8c0(void *owner);
void recovered_1005e8d0(void *owner);
undefined1 *
recovered_1005e8e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_1005f280(long param_1);
void recovered_1005f2b0(undefined8 *param_1,char *param_2,uint param_3);
void recovered_1005f4a0(void *owner);
void recovered_1005f570(void *owner);
void recovered_1005f640(void *owner);
void recovered_1005f710(void *owner);
void recovered_1005f7e0(void *owner);
void recovered_1005f7f0(void *owner);
void recovered_1005f800(long param_1);
void recovered_1005f830(void *owner);
void recovered_1005f840(void *owner);
undefined1 *
recovered_1005f850(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5);
void recovered_1005fa40(long param_1);
void recovered_1005fa70(void *owner);
void recovered_1005fa80(void *owner);
void recovered_1005fa90(long param_1);
void recovered_1005fb90(void *owner);
void recovered_1005fba0(void *owner);
undefined1 * recovered_1005fbb0(undefined1 *param_1);
void recovered_1005fcf0(void);
void recovered_1005fd10(void *owner);
void recovered_1005fd20(void *owner);
undefined1 * recovered_1005fd30(undefined1 *param_1);
void recovered_1005fe60(void);
void recovered_1005fe80(void *owner);
void recovered_1005fe90(void *owner);
undefined1 *
recovered_1005fea0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10060010(void);
void recovered_10060030(void *owner);
void recovered_10060040(void *owner);
undefined1 *
recovered_10060050(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  ulong param_5,undefined4 param_6);
void recovered_10060260(long param_1);
void recovered_10060290(void *owner);
void recovered_100602a0(void *owner);
void recovered_100602b0(void);
void recovered_100603b0(long param_1);
void recovered_100603e0(void *owner);

/* Original analysis identifiers for manual recovery units. */
