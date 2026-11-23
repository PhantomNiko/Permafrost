/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
void pf_kernel_entry(void);
#include "x86_cpu.h"
typedef struct pf_glyph { int left,top,width,height;double advance;unsigned char *pixels;unsigned long count,capacity; } pf_glyph;
typedef struct pf_glyph_position { void *glyph;int x,y; } pf_glyph_position;
typedef struct pf_layout { int left,top,right,bottom;pf_glyph_position *data;unsigned long count,capacity; } pf_layout;
typedef struct pf_u32_vector { unsigned int *data;unsigned long count,capacity; } pf_u32_vector;
typedef struct pf_ttf_backend { void *vtable;unsigned char *data;unsigned long length;unsigned char reserved[312]; } pf_ttf_backend;
void recovered_2000014(void);
unsigned int recovered_200002f(void);
void recovered_2000094(void);
void recovered_20000a0(void);
void recovered_2000100(void);
void recovered_2000410(long param_1,long param_2,long param_3);
bool recovered_2000460(long param_1,long param_2,long param_3);
void recovered_20006a0(undefined8 param_1,undefined8 param_2);
ulong recovered_2000700(void);
long recovered_2000780(void);
ulong recovered_20007f0(void);
long recovered_2000880(void);
void recovered_2000900(long param_1);
ulong * recovered_2000960(long param_1,ulong *param_2,ulong *param_3);
ulonglong recovered_2000b60(long param_1,ulong *param_2);
ulong * recovered_2000bc0(long param_1,ulong *param_2,ulong *param_3);
void recovered_2000c20(long param_1);
void recovered_2000c70(long param_1);
ulong * recovered_2000d90(ulong *param_1,ulong param_2);
ulong recovered_2001440(ulong param_1,uint param_2);
ulong recovered_2001480(ulong param_1,uint param_2);
long recovered_20014c0(long param_1,uint param_2);
ulong recovered_2001510(ulong param_1,ulong param_2);
long recovered_20015b0(ulong param_1,ulong param_2);
ulong recovered_2001620(ulong param_1,ulong param_2);
long recovered_20016f0(ulong param_1,ulong param_2);
void recovered_2001780(void);
int recovered_20017a0(int param_1);
void * recovered_20017b0(ulong size);
void recovered_2001810(void *memory);
void * recovered_2001860(void *memory,ulong size);
void *recovered_2001870(void *dest,const void *src,size_t count);
void *recovered_2001cb0(void *dest,const void *src,size_t count);
void *recovered_2002570(void *dest,int value,size_t count);
void recovered_20028c0(undefined8 *param_1,ulong param_2);
void recovered_2002b90(undefined8 *param_1,ulong param_2);
char * recovered_2002e60(char *param_1,char param_2,long param_3);
int recovered_2002e90(void *left,void *right,ulong count);
int recovered_2003190(byte *param_1,byte *param_2);
bool recovered_2003200(int param_1);
bool recovered_2003220(int param_1);
bool recovered_2003240(uint param_1);
bool recovered_2003260(uint param_1);
bool recovered_2003290(int param_1);
bool recovered_20032b0(int param_1);
int recovered_20032d0(int param_1);
int recovered_20032f0(int param_1);
ulong recovered_2003310(char *text);
int recovered_2003340(char *left,char *right);
int recovered_2003380(byte *param_1,byte *param_2);
void recovered_20033c0(long param_1,long param_2);
ulong * recovered_20033e0(ulong *param_1);
ulonglong recovered_20038a0(char *param_1,char param_2);
long recovered_20038e0(char *param_1,char *param_2);
ulong recovered_2003940(char *text,char *reject);
char * recovered_20039a0(char *param_1,char *param_2);
ulonglong recovered_2003a00(char *param_1,char *param_2);
undefined * recovered_2003a60(void);
undefined ** recovered_2003a70(void);
undefined8 recovered_2003a80(undefined8 *param_1);
double recovered_2003aa0(double value,int exponent);
ulong recovered_2003b70(double param_1,int *param_2);
double recovered_2003c40(double left,double right);
double recovered_2003c70(double left,double right);
double recovered_2003cf0(double value);
double recovered_2003d20(double value);
double recovered_2003d80(double value);
double recovered_2003f30(double value);
long recovered_2004080(double param_1);
double recovered_20040b0(double value);
double recovered_2004160(double value);
double recovered_2004200(double value);
ulong recovered_2004220(double param_1);
ulong recovered_20042f0(double param_1);
double recovered_20043a0(ulong param_1);
double recovered_20043f0(ulong param_1);
float recovered_2004480(float left,float right);
undefined8 recovered_20044d0(float param_1,int *param_2);
float recovered_2004590(float value,int exponent);
float recovered_2004680(float left,float right);
float recovered_2004710(float value);
float recovered_2004750(float value);
double recovered_20047b0(double value);
float recovered_2004810(float value);
float recovered_2004880(float value);
float recovered_20048a0(float value);
long recovered_20049f0(double param_1);
float recovered_2004a20(float value);
float recovered_2004ad0(float value);
float recovered_2004b70(float value);
long recovered_2004b90(byte *param_1,undefined8 *param_2,uint param_3);
ulonglong recovered_2004cc0(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_2004df0(byte *param_1,undefined8 *param_2);
float recovered_2005050(char *text,char **end);
int recovered_2005060(char *out,ulong capacity,char *format,void *arguments);
int recovered_2005f40(char *out,unsigned long capacity,const char *format,...);
long * recovered_2005fc0(long *param_1,ulong param_2,ulong *param_3);
ulong * recovered_2006180(ulong *param_1,ulong *param_2);
undefined8 recovered_20061f0(ulong *param_1,long param_2);
undefined8 recovered_2006250(undefined4 *param_1,long param_2);
undefined8 recovered_2006650(undefined1 *param_1);
undefined8 recovered_20066b0(uint *param_1);
undefined8 recovered_20068a0(uint *param_1);
uint recovered_2006b10(void);
bool recovered_2006b60(void);
undefined4 recovered_2006b90(void);
bool recovered_2006ba0(void);
long recovered_2006c10(void);
long recovered_2006cd0(uint param_1);
long recovered_2006da0(uint param_1);
long recovered_2006e60(uint param_1);
long recovered_2006f30(undefined8 param_1);
undefined4 recovered_2006ff0(uint param_1,long param_2,long param_3,uint param_4);
undefined4 recovered_20070f0(uint param_1,long param_2,long param_3,uint param_4);
bool recovered_20071f0(uint param_1,char *param_2,uint param_3);
int recovered_2007300(int *param_1);
void recovered_2007390(uint128 *param_1);
void recovered_20073b0(uint param_1);
void recovered_20074e0(uint param_1,long param_2);
uchar recovered_2007e90(undefined2 param_1,int param_2,undefined4 *param_3);
uchar recovered_2007ed0(undefined4 param_1,int param_2,ulong param_3);
bool recovered_2007f00(short *param_1);
byte recovered_20082f0(void);
void recovered_2008380(void);
undefined8 recovered_2008390(ulong param_1,ulong param_2);
undefined8 recovered_2008430(undefined8 *param_1,undefined8 *param_2);
ulong recovered_20085f0(void *param_1,uint param_2);
undefined8
recovered_2008a80(byte param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6);
ulong recovered_2008d60(byte param_1,uint param_2,byte param_3,undefined8 param_4,uint param_5,
                       undefined4 param_6);
void recovered_2008fd0(void);
void recovered_2008ff0(void);
ulong recovered_2009000(ulong param_1,uint param_2,ulong param_3,int *param_4);
ulong recovered_2009040(ulong param_1,ulong param_2,int *param_3);
undefined8 recovered_2009280(ulong param_1,uint param_2,ulong param_3,ulong *param_4);
ulong recovered_20092e0(uint param_1,ulong param_2,ulong param_3);
uint128 recovered_2009550(ulong *param_1,undefined8 param_2,ulong param_3);
undefined8 recovered_2009650(ulong *param_1);
byte recovered_2009bf0(void);
ulong recovered_200a5b0(ulong param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200a720(undefined8 param_1,undefined8 param_2,ulong param_3);
undefined4 recovered_200a7a0(void);
undefined8 recovered_200a7f0(int param_1,uint param_2,uint *param_3,uint *param_4);
uint128 recovered_200a840(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void recovered_200a880(undefined8 *param_1);
void recovered_200a900(void);
void recovered_200a910(long param_1);
undefined8 recovered_200a970(undefined8 *param_1);
uint recovered_200a980(int param_1,uint param_2);
void recovered_200a9a0(void);
uint128 recovered_200a9c0(undefined8 param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200a9e0(undefined8 param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200aa20(undefined8 param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200aa40(undefined8 param_1,undefined8 param_2,ulong param_3);
void recovered_200aa80(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,ulong param_6);
uint recovered_200ab60(void);
uint128 recovered_200acc0(undefined4 param_1,ulong param_2);
uint recovered_200ace0(ulong param_1);
ulong recovered_200ad90(ulong param_1,ulong param_2,ulong param_3,long *param_4,undefined8 param_5,
                       ulong param_6);
undefined8 recovered_200ae10(void);
__attribute__((naked)) void recovered_200ae30(void);
uint128 recovered_200af40(ulong param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200af90(undefined8 param_1,undefined8 param_2,ulong param_3);
uint128 recovered_200afe0(undefined8 param_1,undefined8 param_2,ulong param_3);
void recovered_200b030(long param_1);
uint recovered_200b410(void);
ulong recovered_200b450(void);
void recovered_200c440(undefined8 param_1);
undefined4 recovered_200c450(void);
int recovered_200c470(void);
undefined4 recovered_200ce00(void);
undefined4 recovered_200ce20(void);
char recovered_200ce40(void);
int recovered_200cec0(void);
int recovered_200cf20(void);
void recovered_200cf80(uint param_1,undefined1 param_2);
char recovered_200cfb0(void);
char * recovered_200d0f0(uint param_1);
undefined8 recovered_200d120(void *param_1);
void recovered_200d150(void);
void recovered_200d160(void);
void recovered_200d170(void);
undefined8 recovered_200d180(void);
ulong recovered_200d190(uint param_1);
undefined8 recovered_200da80(void);
void recovered_200da90(void);
void recovered_200daa0(void);
uchar recovered_200dab0(uint *param_1,int param_2,undefined4 *param_3);
uchar recovered_200db00(undefined4 *param_1,int param_2,undefined4 param_3);
uchar recovered_200db40(uint param_1,int param_2,undefined4 *param_3);
uchar recovered_200db90(uint param_1,int param_2,undefined4 param_3);
void recovered_200dbd0(void);
uint recovered_200f260(void);
void recovered_200f660(void);
void recovered_200f810(void);
ulong recovered_200f830(void);
undefined8 recovered_200fbe0(byte param_1,int *param_2);
undefined8 recovered_200fc80(undefined8 param_1,ulong param_2);
ulong recovered_200fde0(undefined8 param_1,ulong param_2);
undefined8 recovered_2010260(void);
ulong recovered_2010270(ulong param_1);
undefined1 recovered_2010440(void);
byte recovered_2010450(void);
byte recovered_2010460(void);
int recovered_2010490(void);
undefined8 recovered_2010520(int *param_1);
uint recovered_2010860(undefined8 param_1,ulong param_2);
uint recovered_20108d0(undefined8 param_1,ulong param_2);
void recovered_2010940(ulong param_1);
void recovered_2010d10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_2010e00(uint param_1,char param_2);
void recovered_2010f80(ulong param_1,ulong param_2,uint param_3,uint param_4,uint param_5);
void recovered_20112a0(ulong param_1,ulong param_2,ulong *param_3,ulong param_4,uint param_5);
void recovered_2012130(long param_1,uint param_2);
void recovered_20122a0(undefined8 param_1);
void recovered_20123b0(undefined8 param_1,uint param_2);
undefined8 recovered_2012670(void);
void recovered_20126f0(void *param_1,ulong param_2);
undefined8
recovered_2012830(undefined8 param_1,ulong param_2,uint param_3,undefined4 *param_4,
                 undefined4 *param_5);
void recovered_20128c0(void);
void recovered_20128d0(void);
undefined8 recovered_20128e0(void);
uint recovered_20128f0(int *param_1,uint param_2);
void recovered_2012b50(int param_1,uint param_2,void *param_3,uint param_4);
ulong recovered_2012bc0(int param_1,undefined4 param_2,void *param_3,uint param_4);
ulong recovered_2012f90(int *param_1,undefined8 param_2,char param_3);
ulong recovered_20133c0(int *param_1,uint param_2);
void recovered_20134c0(void);
char recovered_2013e30(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,void *param_5
                      ,ulong param_6,void *param_7,ushort param_8);
int recovered_20146f0(byte *param_1);
bool recovered_2014870(int *param_1);
char recovered_2014e10(int param_1,char param_2,void *param_3,ushort param_4);
byte recovered_2015070(int param_1,byte param_2,uint param_3,uint param_4,char param_5,long param_6,
                      ushort param_7,undefined *param_8);
void recovered_2015640(int param_1,byte param_2,uint param_3,uint param_4,char param_5,long param_6,
                      ushort param_7);
ulong recovered_2015660(byte param_1,uint param_2,uint param_3,char param_4,long param_5,
                       ushort param_6);
undefined8 recovered_20156e0(void);
void recovered_20156f0(void);
uint recovered_2015700(void);
uint recovered_2015ac0(void);
undefined8 recovered_2015e00(void);
ulong recovered_2015f60(void);
uint recovered_2017570(void);
uint recovered_2017720(void);
uint recovered_2017fb0(void);
bool recovered_2018080(uint param_1,long param_2);
char recovered_2018210(uint param_1);
ulong recovered_20184c0(undefined8 param_1,uint *param_2);
undefined8 recovered_2019600(void);
ulong recovered_2019830(byte *param_1);
undefined8 recovered_2019b90(void);
void recovered_2019cf0(void);
undefined8
recovered_201ac70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                 int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9);
undefined * recovered_201aed0(char param_1);
ulong recovered_201af20(undefined8 param_1,uint *param_2);
undefined8 recovered_201af50(uint param_1,int param_2);
ulong recovered_201b080(uint param_1);
undefined4 recovered_201b1c0(void);
undefined4 recovered_201b1d0(uint param_1);
uint recovered_201b290(long param_1,uint param_2);
undefined4 recovered_201b590(int param_1);
undefined8 recovered_201b610(undefined8 param_1,uint *param_2);
undefined8 recovered_201b900(byte param_1,int param_2,uint param_3,undefined *param_4,ulong param_5);
undefined8 recovered_201b930(int param_1,int param_2,uint param_3,undefined *param_4,ulong param_5);
ulong recovered_201bdd0(byte param_1,int param_2,uint param_3,long param_4,ulong param_5);
ulong recovered_201be00(byte param_1,int param_2,uint param_3,long param_4,ulong param_5);
ulong recovered_201bfb0(byte param_1,int param_2);
ulong recovered_201bfe0(byte param_1,int param_2);
undefined8 recovered_201c300(byte param_1,int *param_2);
bool recovered_201c700(void);
ulong recovered_201c800(byte param_1,ulong param_2,undefined *param_3,ulong param_4);
bool recovered_201d030(char param_1,ulong param_2,void *param_3,ulong param_4);
ulong recovered_201d270(int param_1,uint param_2,long param_3,ulong param_4);
int recovered_201d3e0(void);
uint recovered_201d430(int param_1);
undefined8 recovered_201d4b0(char param_1,ulong param_2,ulong param_3,char param_4,void *param_5);
bool recovered_201d550(byte param_1,uint param_2,ulong param_3,uint param_4);
void recovered_201d800(undefined1 param_1,undefined4 param_2,uint param_3,int param_4);
ulong recovered_201d8b0(byte param_1,uint param_2,long param_3,ulong param_4);
ulong recovered_201dc90(int param_1,uint param_2,long param_3,ulong param_4);
uint recovered_201dd80(int param_1);
bool recovered_201de00(byte param_1,uint param_2,ulong param_3,uint param_4);
void recovered_201e0b0(char param_1,ulong param_2,void *param_3,ulong param_4);
bool recovered_201e2e0(byte param_1);
ulong recovered_201e460(byte param_1);
ulong recovered_201e7a0(byte param_1);
ulong recovered_201e840(byte param_1);
void recovered_201e980(void);
uchar recovered_201e990(uint duration);
undefined8 recovered_201edb0(uint param_1);
bool recovered_201f5d0(void);
int recovered_201f630(void);
undefined8 recovered_201f690(undefined4 param_1,undefined8 param_2);
byte recovered_201f700(void);
void recovered_201f750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
undefined8 recovered_201f770(uint param_1);
uint recovered_201f790(void);
ulong recovered_201f7b0(void);
ulong recovered_201f860(uint128 *param_1);
ulong recovered_201fbb0(uint *param_1);
undefined8 recovered_2020570(uint128 *param_1);
uint recovered_2020f90(byte *param_1);
undefined1 recovered_2021470(void);
bool recovered_20214e0(void);
undefined8 recovered_2021540(undefined4 *param_1);
ulong recovered_2021890(uint *param_1);
ulong recovered_2021b60(uint128 *param_1);
byte recovered_2022500(void);
undefined1 * recovered_2022790(void);
ulong recovered_2022a10(void);
uint recovered_2022ba0(uint *param_1,uint *param_2);
void recovered_2022c10(undefined8 param_1);
void recovered_2022c20(undefined8 param_1);
bool recovered_2022c30(undefined4 *param_1,undefined4 *param_2);
void recovered_2022c60(undefined4 *param_1);
void recovered_2023190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_2023210(int *param_1,int *param_2,int *param_3,int *param_4);
void recovered_20233f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,undefined4 *param_5);
void recovered_20234a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,undefined4 *param_5);
void recovered_2023520(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                      undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                      undefined4 *param_11,undefined4 *param_12);
void recovered_2023620(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_20236e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_20237a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                      undefined4 *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,
                      uint *param_9,uint *param_10);
void recovered_2023970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_2023ae0(undefined4 *param_1,uint *param_2,uint *param_3);
ulong recovered_2023b10(undefined *param_1);
ulonglong recovered_2024550(void);
bool recovered_2024560(void);
bool recovered_2024c20(void);
undefined8 recovered_2024cd0(void);
undefined8 recovered_2024ce0(void);
undefined8 recovered_2024cf0(void *param_1);
undefined8 recovered_2024d10(void);
undefined8 recovered_2024d20(void);
void recovered_2024d30(byte param_1);
void recovered_2024f30(byte *param_1);
void recovered_2024f70(long param_1,long param_2);
char * recovered_2024fc0(char *param_1);
uint recovered_20250e0(void);
uchar recovered_20250f0(int param_1,undefined8 param_2,undefined4 *param_3);
undefined4 recovered_2025120(uint128 *param_1);
uint128 recovered_2025180(int param_1,undefined4 *param_2,undefined4 *param_3);
uint128 recovered_20251e0(int param_1,undefined4 param_2);
uint128 recovered_20253a0(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 recovered_20253e0(long *param_1);
undefined8 recovered_2025570(void);
void recovered_2025580(void);
ulonglong recovered_2025590(void);
ulong recovered_20255a0(void);
ulong recovered_2025690(void);
undefined * recovered_20257c0(void);
uint recovered_20257d0(uint *param_1,char param_2);
bool recovered_20258d0(char *param_1);
uint recovered_2025910(uint param_1,uint param_2,uint param_3,byte param_4,int param_5,char *param_6
                      ,byte param_7,int param_8,char *param_9,uint *param_10);
void recovered_2025a40(char *param_1);
void recovered_2025bf0(uint param_1,int param_2);
void recovered_2026730(char *param_1);
void recovered_2026a10(uint param_1,int param_2);
undefined8 recovered_2027690(ulong param_1,byte param_2,ulong *param_3,ulong *param_4);
char * recovered_20279a0(int *param_1);
char * recovered_2027c20(int *param_1,int param_2);
char * recovered_2027e20(void);
undefined8 recovered_2028280(ulong param_1,ulong param_2);
char * recovered_2028320(char *param_1,int *param_2);
void recovered_2028550(long param_1,ulong param_2,long param_3,uint param_4);
ulong recovered_2028a40(long param_1,ulong param_2,undefined1 *param_3);
void recovered_2028bd0(char *param_1,ulong param_2,byte *param_3);
undefined8
recovered_2028cf0(byte param_1,byte param_2,byte param_3,uint param_4,uint param_5,ulong *param_6);
undefined8 recovered_2028e50(ulong param_1,uint param_2,ulong *param_3);
ulong recovered_2029060(void);
undefined8
recovered_2029230(ulong param_1,byte param_2,byte param_3,byte param_4,byte param_5,ushort param_6,
                 uint param_7,ulong *param_8);
undefined8
recovered_2029310(ulong param_1,byte param_2,byte param_3,byte param_4,uint param_5,uint param_6,
                 long *param_7);
undefined8 recovered_20293a0(long param_1,uint param_2,ulong param_3,ulong param_4);
ulong recovered_2029510(ulong param_1,ulong param_2,ulong param_3,ulong param_4);
long recovered_2029d70(long param_1,ulong param_2);
undefined8 recovered_2029e90(long param_1,ulong param_2,ulong param_3);
void recovered_2029f50(void);
undefined8 recovered_2029f90(undefined8 *param_1);
ulong recovered_202a300(long param_1,uint *param_2,ulong param_3,char param_4,ulong *param_5);
ulong recovered_202a670(long param_1,uint *param_2,ulong param_3,undefined8 *param_4);
bool recovered_202a750(long param_1);
ulong recovered_202a960(uint param_1,uint param_2,undefined1 *param_3);
void recovered_202acf0(long param_1);
ulong recovered_202af70(uint param_1,int param_2);
ulong recovered_202b140(undefined8 param_1,int param_2,int param_3);
uint128 recovered_202b220(uint param_1,uint param_2,ulong param_3);
undefined8 recovered_202b270(int *param_1,uint param_2);
bool recovered_202b6c0(int *param_1);
undefined8 recovered_202b840(int *param_1,ulong *param_2);
undefined8 recovered_202b930(long param_1,ulong *param_2);
undefined8 recovered_202ba20(uint *param_1);
ulong recovered_202bae0(void);
void recovered_202bcf0(void);
ulong recovered_202bd30(ulong param_1,uint param_2,undefined4 *param_3);
undefined8 * recovered_202be00(uint param_1,ulong param_2,uint param_3);
bool recovered_202c170(undefined8 param_1,undefined8 param_2);
ulong recovered_202c580(undefined8 param_1,undefined8 param_2,ulong param_3);
undefined4 recovered_202c7d0(void);
ulong recovered_202c870(void);
undefined8 recovered_202cc30(void);
undefined8 recovered_202d5e0(void);
void recovered_202d8d0(undefined4 param_1,long param_2);
uint128 recovered_202db70(uint param_1,undefined8 param_2,ulong param_3);
bool recovered_202dbf0(void);
ulong recovered_202dc60(void);
undefined8 recovered_202ddd0(int param_1,char param_2,ulong param_3,ulong param_4,uint *param_5);
uint128 recovered_202e000(char *param_1,undefined8 param_2,ulong param_3);
uint128 recovered_202e2e0(char *param_1,ulong param_2,undefined8 param_3,undefined4 *param_4);
uint128 recovered_202e410(char *param_1,ulong param_2,ulong param_3);
undefined8 recovered_202e490(byte param_1,undefined8 param_2);
undefined8 recovered_202e540(ulong param_1,ulong param_2);
void recovered_2031f50(long *param_1,undefined4 param_2);
void recovered_2032010(long *param_1,byte param_2,undefined4 param_3,int param_4,int param_5);
void recovered_2032110(long *param_1,undefined1 param_2,int param_3,int param_4);
void recovered_20321f0(long *param_1,undefined4 param_2);
void recovered_20322b0(long *param_1,byte param_2,int param_3,int param_4,int param_5);
void recovered_20324b0(long *param_1,int param_2,int param_3,int param_4);
void recovered_20325c0(long *param_1,int param_2,int param_3,int param_4);
void recovered_20326d0(long *param_1,undefined4 param_2,undefined8 param_3);
undefined8 recovered_20328c0(uint param_1,uint param_2);
long recovered_20329b0(uint param_1);
undefined8 recovered_2032a80(uint param_1);
ulong recovered_2033020(uint param_1,int param_2);
ulong recovered_2033200(uint param_1,uint param_2);
ulong recovered_2033950(uint param_1,uint param_2,int param_3);
uint recovered_2033ac0(uint param_1,uint param_2,uint param_3,long param_4,uint param_5);
undefined8 recovered_2033cd0(char *param_1,long param_2);
ulong recovered_20346b0(uint param_1,int param_2,long param_3);
ulong recovered_2034980(uint param_1,int param_2);
undefined8 recovered_2034bc0(uint param_1,undefined4 *param_2);
undefined8 recovered_2034ce0(uint param_1,uint param_2,int param_3,long param_4);
ulong recovered_2034ff0(uint param_1);
void recovered_2035210(byte param_1,uint *param_2);
void recovered_2035280(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                      ,int param_7,uint param_8,char param_9);
undefined8 recovered_2035570(ulong param_1,ulong param_2,ulong *param_3);
ulong recovered_2035680(void *param_1,uint param_2);
undefined8 recovered_2035ae0(long *param_1);
undefined8 recovered_2035f40(undefined4 param_1,int param_2);
undefined8 recovered_2036210(ulong param_1,uint param_2,uint param_3,uint param_4,ulong *param_5);
undefined8 recovered_20363a0(ulong param_1,uint param_2,ulong *param_3);
void recovered_2036420(char param_1);
uint recovered_20365c0(uint param_1,byte param_2,long param_3,ulong param_4);
undefined8 recovered_2036a60(void);
undefined8
recovered_2036cd0(ulong param_1,uint *param_2,byte *param_3,undefined8 param_4,undefined4 param_5,
                 undefined4 param_6,long *param_7);
ulong recovered_2037010(uint param_1);
bool recovered_20370c0(char param_1);
void recovered_20371c0(int *param_1,uint param_2);
void recovered_2039a70(ushort param_1,uint param_2);
void recovered_2039c10(undefined4 param_1,int param_2);
undefined8
recovered_203a590(char param_1,char param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 undefined *param_6,ushort param_7);
ulong recovered_203ad90(void);
ulong recovered_203b0a0(undefined8 param_1,uint param_2,int param_3,uint *param_4,
                       undefined1 *param_5);
undefined8 recovered_203b280(void *param_1,undefined4 *param_2,undefined4 *param_3);
ulong recovered_203b520(uint param_1);
void recovered_203b580(void);
void recovered_203bce0(void);
undefined1 recovered_203c420(void);
undefined8 recovered_203d110(uint param_1,byte *param_2);
undefined8 recovered_203d370(int param_1,uint param_2,byte *param_3);
undefined8 recovered_203dbf0(void);
undefined8
recovered_203e030(uint param_1,undefined1 *param_2,char *param_3,byte *param_4,undefined2 *param_5,
                 undefined1 *param_6);
undefined8 recovered_203e340(int param_1,uint param_2,byte param_3);
void recovered_203eb40(uint param_1,uint param_2);
bool recovered_203eba0(int *param_1,ushort param_2,ushort param_3);
undefined8
recovered_203ec70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);
undefined1 recovered_203ece0(long param_1,uint param_2,uint *param_3);
undefined8
recovered_203ed80(undefined4 param_1,uint param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 ulong *param_6,ulong *param_7);
bool recovered_2040300(long param_1,uint param_2);
undefined4 recovered_20404a0(uint *param_1,uint *param_2);
ulong recovered_2040540(int *param_1,uint param_2,byte param_3);
void recovered_20406a0(undefined8 param_1,char param_2);
undefined8 recovered_2040700(uint *param_1,uint *param_2);
void recovered_2040820(void);
bool recovered_20409a0(int *param_1,ushort param_2);
ulong recovered_2040a50(long param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,byte param_7);
void recovered_2040c10(uint param_1);
undefined8 recovered_2040ce0(void);
undefined8
recovered_2040d60(uint param_1,undefined1 *param_2,undefined1 *param_3,byte *param_4,ushort *param_5
                 ,byte *param_6,byte *param_7,ushort *param_8,byte *param_9);
undefined8
recovered_2041540(int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6);
undefined8 recovered_2041b40(void);
void recovered_20421e0(undefined1 *param_1,undefined1 param_2,int param_3,int param_4);
void recovered_2042270(undefined1 *param_1,byte param_2,undefined1 param_3,undefined4 param_4,
                      byte param_5,undefined8 param_6,undefined2 param_7,undefined2 param_8);
undefined8 recovered_2042350(void);
byte recovered_2042500(byte *param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,
                      uint param_6);
undefined8 recovered_2042de0(byte *param_1);
undefined8 recovered_2042f50(uint param_1,ulong param_2,uint param_3,undefined4 param_4);
ulong recovered_20433d0(undefined4 param_1,uint param_2,long param_3,uint param_4,uint *param_5,
                       uint *param_6);
ulong recovered_2043690(int param_1);
ulong recovered_20438b0(byte *param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,
                       uint param_6);
undefined8 recovered_2043a40(uint param_1);
ulong recovered_2043ac0(uint param_1,uint param_2);
undefined8
recovered_20447d0(uint param_1,undefined1 *param_2,byte *param_3,undefined2 *param_4,
                 undefined1 *param_5);
undefined8 recovered_2044ad0(void);
undefined8 recovered_2044b20(byte param_1,uint param_2,undefined4 param_3,byte *param_4);
uint recovered_20455c0(long param_1);
uint recovered_2045680(long param_1);
undefined8 recovered_2045760(byte param_1,byte param_2,byte param_3,byte *param_4);
undefined8 recovered_2045990(long param_1,uint param_2,uint param_3,uint param_4,long *param_5);
undefined8 recovered_2045a50(long param_1,uint param_2,uint param_3,ulong *param_4);
undefined8 recovered_2045b00(uint param_1,uint param_2,uint param_3,ulong *param_4);
bool recovered_2045b70(int param_1,long param_2,uint param_3);
uint128 recovered_2045c90(ushort *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4);
undefined4 recovered_2045db0(undefined2 *param_1,int param_2);
ulong recovered_2045fb0(void);
undefined8 recovered_2046060(int *param_1);
bool recovered_2046190(int *param_1);
ulong recovered_20462a0(long param_1);
void recovered_20463c0(long param_1);
undefined8 recovered_2046450(ulong param_1,uint param_2,undefined4 *param_3);
undefined8
recovered_20464e0(ushort *param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 undefined1 param_7,undefined2 param_8,undefined2 param_9,byte param_10,
                 undefined1 *param_11,ushort param_12);
void recovered_2046e00(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5);
uint recovered_2046e60(uint param_1);
uchar recovered_2046ee0(int param_1,int param_2);
undefined8 recovered_2046f50(void);
void recovered_2047540(void);
undefined8 recovered_2047840(void);
undefined8 recovered_20479b0(void);
undefined8 recovered_2047c30(byte *param_1);
undefined8 recovered_2047cb0(byte *param_1,uint param_2);
undefined8 recovered_2047fd0(uint param_1);
ulong recovered_2048050(long param_1,undefined4 param_2,uint param_3,uint param_4,char param_5,
                       undefined1 param_6,ushort param_7);
undefined8
recovered_20484d0(byte *param_1,byte param_2,byte param_3,undefined1 *param_4,uint param_5);
undefined8 recovered_2048730(byte *param_1,byte param_2,byte param_3,ulong param_4,uint param_5);
ulong recovered_2048ac0(uint param_1,ulong param_2,uint param_3);
undefined8 recovered_2049140(void);
undefined8 recovered_2049360(int *param_1,long *param_2,byte *param_3);
undefined1 recovered_2049580(int *param_1,uint param_2,undefined1 *param_3);
undefined1 recovered_20496a0(byte param_1);
undefined8 recovered_2049770(char param_1,uint param_2,ulong param_3,void *param_4);
undefined8 recovered_2049820(char param_1,uint param_2,long param_3,uint param_4);
ulong recovered_2049b40(byte param_1,uint param_2,long param_3,uint param_4);
void recovered_2049d30(uint param_1,int param_2);
ulong recovered_204a150(uint param_1,uint *param_2);
bool recovered_204a720(uint param_1,ulong param_2,long param_3,ulong param_4,undefined4 param_5);
undefined8 recovered_204a9c0(void);
undefined8 recovered_204ac90(undefined8 param_1,ulong param_2,uint param_3,byte param_4);
undefined8 recovered_204b290(ushort param_1,ulong *param_2,ulong *param_3,ulong *param_4);
undefined4 recovered_204b460(byte param_1);
undefined8 recovered_204b4e0(long param_1,byte *param_2);
undefined8 recovered_204b6d0(char *param_1,uint param_2,uint *param_3);
undefined8 recovered_204b890(uint param_1,char param_2);
undefined8 recovered_204bb20(int param_1);
void recovered_204bd10(int param_1,undefined *param_2);
void recovered_204bf40(uint *param_1,uint param_2);
void recovered_204c160(void);
void recovered_204c270(int *param_1,uint param_2);
undefined8 recovered_204c3b0(uint param_1,undefined4 param_2);
void recovered_204c8b0(undefined4 param_1,undefined4 param_2);
undefined8 recovered_204c900(uint param_1,void *param_2,uint param_3);
undefined8 recovered_204cb20(int *param_1,uint param_2,int *param_3,char param_4);
undefined8 recovered_204cde0(void);
ulong recovered_204d420(byte *param_1);
ulong recovered_204d490(byte *param_1);
undefined8 recovered_204d500(uint *param_1,uint param_2);
uint128 recovered_204d6a0(long param_1,undefined8 param_2,ulong param_3);
undefined8 recovered_204d910(undefined8 *param_1);
undefined2 recovered_204d920(undefined2 *param_1);
undefined4 recovered_204d930(undefined4 *param_1);
undefined8 recovered_204d940(undefined8 *param_1);
void recovered_204d950(undefined2 *param_1,undefined2 param_2);
void recovered_204d960(undefined4 *param_1,undefined4 param_2);
void recovered_204d970(undefined8 *param_1,undefined8 param_2);
uint recovered_204d980(long param_1,long param_2);
char * recovered_204da70(uint param_1);
undefined8 recovered_204daa0(long param_1);
undefined8 recovered_204e270(byte *param_1,ulong param_2,ulong *param_3,uint *param_4);
undefined8 recovered_204e410(short *param_1);
undefined8 recovered_204e680(char *param_1,ulong param_2);
undefined8 recovered_204e850(void *param_1,uint param_2,void *param_3);
undefined8 recovered_204ead0(char *param_1,short *param_2);
long recovered_204ee60(ulong param_1,long param_2);
undefined8 recovered_204eeb0(undefined8 *param_1,ulong param_2,void *param_3,void *param_4);
int recovered_204efd0(undefined8 *param_1,ulong param_2,char *param_3,void *param_4);
undefined8
recovered_204f440(undefined8 *param_1,ulong param_2,ulong param_3,char *param_4,void *param_5);
void recovered_204f5a0(undefined8 *param_1,undefined8 *param_2);
void recovered_204f5c0(undefined8 *param_1,undefined8 *param_2);
undefined4 recovered_204f5e0(ulong param_1,ulong param_2,ulong *param_3);
undefined8 recovered_204f6a0(long param_1,void *param_2);
undefined8 recovered_204f780(long param_1,long param_2);
undefined8
recovered_204f7c0(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                 ulong *param_6,ulong param_7,ulong *param_8);
ulong recovered_204fb60(undefined *param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                       ulong param_5,ulong param_6,ulong param_7,ulong param_8,ulong *param_9);
undefined8 recovered_204fee0(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4);
int recovered_204ff50(undefined *param_1,undefined *param_2,undefined8 param_3,ulong param_4,
                     ulong param_5,ulong param_6,ulong *param_7,ulong param_8,ulong *param_9,
                     ulong *param_10);
ulong recovered_20502c0(char *param_1,ulong param_2);
ulong recovered_20502f0(char *param_1,ulong param_2);
void recovered_2050410(char *param_1,ulong param_2,char *param_3,ulong param_4,void *param_5,
                      ulong param_6,long *param_7);
int recovered_2050440(char *param_1,ulong param_2,char *param_3,ulong param_4,char *param_5,
                     ulong param_6,void *param_7,ulong param_8,long *param_9);
ulong recovered_20508c0(char *param_1,ulong param_2,undefined8 *param_3,ulong *param_4,
                       undefined8 *param_5,ulong *param_6);
uint recovered_2050b20(char *param_1,ulong param_2,char *param_3,ulong param_4,void *param_5,
                      ulong param_6,long *param_7);
undefined8
recovered_2050b90(long param_1,ulong param_2,long param_3,ulong param_4,char param_5,uint *param_6);
undefined8 recovered_20510c0(byte *param_1,byte *param_2);
ulong recovered_2051220(byte *param_1,byte *param_2);
int recovered_2051530(long *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4);
undefined8 recovered_20516a0(undefined4 *param_1,undefined8 *param_2,long *param_3);
undefined8
recovered_2051970(undefined4 *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4);
undefined8
recovered_2051a50(short *param_1,ulong param_2,short *param_3,ulong param_4,long param_5,
                 ulong param_6,ulong *param_7,undefined8 *param_8);
undefined8 recovered_2052040(long *param_1,ulong param_2,long *param_3);
int recovered_2052110(long *param_1,ulong param_2,long param_3);
int recovered_2052210(long *param_1,ulong param_2,long param_3);
undefined8
recovered_2052310(short *param_1,int param_2,ulong param_3,undefined8 param_4,short *param_5);
ulong recovered_2052410(undefined8 *param_1,ulong *param_2,void *param_3,void *param_4,void *param_5
                       );
ulong recovered_20529d0(long param_1,void *param_2);
void recovered_2052af0(long param_1,ulong param_2,ulong param_3,undefined8 param_4);
int recovered_2052b60(undefined8 *param_1,ulong param_2,long param_3,long param_4,ulong param_5,
                     long param_6);
void recovered_2052cc0(undefined8 *param_1,ulong *param_2,void *param_3,void *param_4);
undefined8 recovered_2052ce0(long *param_1,undefined8 *param_2);
ulong recovered_2052d80(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4);
ulong recovered_2052f10(undefined8 *param_1,ulong param_2,long param_3,ulong *param_4);
int recovered_20532a0(undefined8 *param_1,ulong param_2,undefined4 param_3,long *param_4,
                     undefined *param_5,undefined8 param_6);
ulong recovered_2053460(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4);
ulong recovered_2053730(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,long *param_5,
                       long param_6,undefined8 param_7);
ulong recovered_20537f0(long *param_1,undefined8 *param_2,void *param_3,undefined1 *param_4);
ulong recovered_2053880(undefined8 *param_1,char *param_2,ulong param_3,long *param_4,void *param_5);
undefined8
recovered_2053bc0(undefined8 *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                 long *param_6,ulong *param_7);
void recovered_2053dd0(undefined8 *param_1,ulong param_2,ulong *param_3);
undefined8 recovered_2053df0(long *param_1,undefined8 *param_2);
ulong recovered_2053ec0(undefined8 *param_1,ulong param_2,ulong *param_3,void *param_4);
ulong recovered_2054100(undefined8 *param_1,undefined8 *param_2,byte *param_3,long *param_4,
                       void *param_5);
ulong recovered_20545f0(undefined8 *param_1,ulong param_2,long param_3,ulong param_4,long *param_5,
                       long *param_6,long *param_7);
void recovered_20549d0(undefined8 *param_1,ulong param_2,ulong *param_3);
void recovered_20549f0(undefined8 *param_1,ulong param_2,ulong *param_3);
undefined8
recovered_2054a10(undefined8 *param_1,long param_2,byte *param_3,long param_4,undefined4 param_5);
ulong recovered_2054af0(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,long *param_5);
ulong recovered_2054db0(undefined8 *param_1,char *param_2,long *param_3);
ulong recovered_2054ec0(undefined8 *param_1,undefined8 *param_2,byte *param_3,long *param_4,
                       void *param_5,undefined4 param_6);
ulong recovered_2055090(long param_1,long param_2,ulong param_3,long param_4,undefined8 *param_5,
                       uint *param_6);
undefined8 recovered_20553f0(long param_1,undefined8 *param_2,uint *param_3);
bool recovered_2055760(long param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                      char param_5,long param_6);
void recovered_20558a0(long param_1,ulong param_2);
void recovered_2055930(long param_1,ulong param_2,uint *param_3);
void recovered_2055b10(uint *param_1,uint *param_2);
void recovered_2055d60(undefined8 *param_1,ulong param_2,long param_3,ulong param_4,uint *param_5);
void recovered_2055f40(uint128 *param_1,undefined8 *param_2,ulong param_3);
void recovered_2056860(uint *param_1,uint *param_2);
undefined8
recovered_2056ae0(undefined8 *param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                 ulong param_6,long param_7,ulong param_8);
undefined8
recovered_2057320(int *param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong param_5,
                 ulong *param_6,ulong param_7,ulong *param_8,ulong param_9,uint param_10,
                 uint param_11,uint param_12,undefined8 *param_13);
void recovered_2058810(ulong *param_1,ulong *param_2,ulong param_3);
void recovered_2058de0(ulong *param_1,long param_2);
void recovered_2058f60(ulong *param_1,ulong param_2,undefined8 *param_3,ulong param_4);
void recovered_2059630(uint *param_1,byte *param_2,byte *param_3);
void recovered_2059710(uint *param_1,uint *param_2);
void recovered_2059830(undefined4 *param_1,byte *param_2,byte *param_3);
void recovered_205a020(uint *param_1,uint *param_2,byte *param_3);
void recovered_205a100(undefined4 *param_1,uint *param_2,byte *param_3);
undefined8 recovered_205a840(uint *param_1,long param_2,ulong param_3,byte *param_4,long param_5);
undefined8 recovered_205abf0(uint *param_1,ulong *param_2,long param_3,long param_4,ulong param_5);
void recovered_205b1a0(uint *param_1,undefined8 param_2,long param_3,ulong param_4);
undefined8
recovered_205b1b0(uint *param_1,undefined8 param_2,long param_3,ulong param_4,undefined4 param_5);
void recovered_205b780(uint *param_1,undefined8 param_2,long param_3,ulong param_4);
undefined8 recovered_205b790(int *param_1,char *param_2,ulong *param_3,ulong param_4);
undefined4 recovered_205ba10(char *param_1);
undefined8
recovered_205bae0(int *param_1,ulong *param_2,ulong param_3,ulong *param_4,undefined8 *param_5,
                 long param_6);
void recovered_205bc00(long param_1,uint *param_2);
undefined8
recovered_205bf10(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6);
void recovered_205bf80(undefined1 *param_1);
undefined8 recovered_205c030(int *param_1,undefined8 *param_2);
ulong recovered_205c0b0(int *param_1,long param_2,ulong *param_3,ulong param_4,ulong *param_5,
                       undefined1 *param_6);
undefined8 recovered_205c3c0(int *param_1,uint *param_2,undefined8 param_3,long param_4);
undefined8 recovered_205c410(int *param_1,uint *param_2,undefined8 param_3,long param_4);
undefined8
recovered_205c460(int *param_1,long param_2,ulong *param_3,ulong param_4,ulong *param_5,
                 uint128 *param_6);
void recovered_205cfe0(undefined8 param_1,long param_2,ulong param_3);
ulong recovered_205d070(int *param_1,long param_2,ulong param_3,ulong *param_4,ulong param_5,
                       uint128 *param_6,uint128 *param_7);
void recovered_205e690(uint *param_1,long param_2);
void recovered_205e8b0(ulong *param_1,undefined8 *param_2,int param_3);
void recovered_205ee00(ulong *param_1,long param_2,ulong param_3);
void recovered_205f080(long param_1,long param_2,long param_3,char param_4);
void recovered_205f3b0(ulong *param_1);
ulong recovered_205f7b0(int *param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong *param_5,
                       char *param_6,undefined1 *param_7,undefined1 *param_8);
undefined8
recovered_205fc80(undefined8 *param_1,undefined1 *param_2,char *param_3,ulong param_4,long param_5,
                 long param_6);
undefined8
recovered_2060010(long param_1,int param_2,long param_3,char *param_4,undefined1 *param_5);
undefined8 recovered_20602d0(long param_1);
bool recovered_2060460(char *param_1);
undefined8 recovered_2060520(ulong param_1,long *param_2);
undefined8
recovered_2060560(undefined1 *param_1,uint128 *param_2,ulong param_3,ulong *param_4);
undefined8
recovered_2060bd0(char *param_1,ulong param_2,char *param_3,long param_4,ulong param_5,
                 undefined8 *param_6);
undefined8 recovered_2061080(char *param_1,ulong *param_2);
bool recovered_2061140(long param_1);
void recovered_2061200(undefined4 *param_1,undefined4 *param_2);
undefined8 recovered_2061360(long param_1,int param_2,long param_3,long param_4);
ulong recovered_20614d0(char *param_1,long param_2,long param_3);
ulong recovered_20617c0(char *param_1,ulong param_2,undefined8 *param_3);
ulong recovered_2061840(long *param_1,undefined8 *param_2,ulong param_3,uint param_4,
                       undefined8 param_5,long *param_6);
undefined8 recovered_2061be0(short *param_1,char *param_2,undefined1 *param_3);
undefined8 recovered_2061d00(long *param_1,void *param_2);
ulong recovered_2061dd0(long param_1,long param_2);
int recovered_2061e60(long *param_1,ulong param_2,long param_3);
undefined8 recovered_2061ea0(long *param_1,undefined8 param_2,void *param_3);
undefined8 recovered_2061f30(long *param_1);
ulong recovered_2061fb0(long *param_1,undefined8 *param_2,ulong param_3,byte *param_4,long *param_5);
void recovered_2062b60(long *param_1,int param_2,void *param_3);
undefined8 recovered_2062c70(long *param_1,void *param_2);
long recovered_2062df0(long param_1,long param_2);
int recovered_2062ec0(long param_1,long param_2,char param_3,void *param_4);
undefined8 recovered_20631d0(long *param_1);
ulong recovered_2063250(long *param_1,undefined8 param_2,void *param_3);
int recovered_2063f50(long *param_1,void *param_2);
undefined8
recovered_2064380(long *param_1,ulong param_2,undefined8 param_3,void *param_4,uint *param_5);
void recovered_2064470(long param_1);
undefined1 recovered_2064560(long param_1);
byte recovered_2064580(int *param_1);
ulong recovered_20645b0(long param_1,char *param_2,ulong param_3,uint param_4,long *param_5,
                       undefined4 *param_6);
undefined8
recovered_20646b0(char *param_1,ulong param_2,undefined1 *param_3,ulong param_4,ulong *param_5);
int recovered_2064900(long param_1,ulong param_2,ulong param_3,uint param_4,long *param_5,
                     undefined4 *param_6);
undefined8
recovered_2064fb0(long param_1,int *param_2,ulong param_3,long param_4,ulong param_5,long *param_6,
                 ulong *param_7);
int recovered_2065080(long param_1,int *param_2,long *param_3,undefined *param_4,undefined8 param_5);
ulong recovered_2065140(long *param_1,char *param_2,ulong param_3,undefined1 *param_4,long *param_5,
                       void *param_6);
ulong recovered_20652c0(long param_1,char *param_2,ulong param_3,long *param_4,int *param_5);
void recovered_2065430(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4
                      );
int recovered_20654a0(long *param_1,int param_2);
uint recovered_2065590(long *param_1,char *param_2,ulong param_3,undefined2 param_4,
                      undefined8 param_5,long *param_6,void *param_7);
ulong recovered_2065610(long *param_1,char *param_2,ulong param_3,undefined1 *param_4,long *param_5,
                       void *param_6);
ulong recovered_2065790(long *param_1,undefined8 param_2,long *param_3);
int recovered_2065af0(long param_1,ulong param_2,long *param_3,ulong *param_4);
ulong recovered_2066020(long param_1,long *param_2);
ulong recovered_2066180(long param_1,long *param_2);
ulong recovered_2066d20(long *param_1,char *param_2,ulong param_3,char *param_4,ulong param_5,
                       undefined8 param_6,long *param_7);
ulong recovered_2066fc0(long param_1,char *param_2,ulong param_3,long *param_4,undefined4 *param_5,
                       byte *param_6);
bool recovered_2067150(long param_1,char *param_2,ulong param_3,char *param_4,ulong param_5);
ulong recovered_20672c0(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,
                       ulong *param_6);
ulong recovered_2067520(long *param_1,char *param_2,ulong param_3,long *param_4,long *param_5);
undefined8
recovered_2067740(long param_1,undefined1 *param_2,undefined8 *param_3,long param_4,char param_5,
                 void *param_6,ulong param_7,ulong *param_8);
int recovered_2067950(long *param_1,long *param_2,undefined8 *param_3);
ulong recovered_2067a70(long *param_1,long *param_2,undefined8 param_3,ulong *param_4);
ulong recovered_2067c60(long *param_1,long *param_2,ulong *param_3,undefined1 *param_4);
ulong recovered_2067fd0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5);
undefined8
recovered_2068170(short *param_1,ulong param_2,char param_3,char *param_4,undefined1 *param_5);
ulong recovered_20683d0(long *param_1,ulong param_2,long param_3);
ulong recovered_2068520(long *param_1,ulong param_2,void *param_3);
undefined8 recovered_20686f0(long *param_1,long param_2,long *param_3);
undefined8
recovered_2068780(void *param_1,ulong param_2,ulong param_3,ulong param_4,char *param_5,
                 ulong param_6,void *param_7,ulong param_8,ulong *param_9);
ulong recovered_2068920(undefined8 *param_1,ulong param_2,long *param_3,ulong *param_4);
ulong recovered_2068bb0(undefined8 *param_1,ulong param_2,ulong *param_3);
undefined8 recovered_2068bf0(long *param_1);
undefined8 recovered_2068c10(long *param_1,long *param_2,void *param_3,undefined1 *param_4);
void recovered_2068c80(long *param_1,ulong param_2,ulong *param_3);
void recovered_2068ca0(long *param_1,ulong param_2,ulong *param_3);
char * recovered_2068cc0(uint param_1);
char recovered_2068cf0(long param_1,ulong param_2,ulong param_3,long *param_4,void *param_5,
                      int *param_6);
undefined8 recovered_20693e0(long *param_1,long param_2,ulong param_3,long *param_4,long *param_5);
bool recovered_20694d0(long param_1,long param_2);
void recovered_20695b0(long *param_1,long param_2,undefined4 *param_3);
void recovered_2069630(undefined8 *param_1,ulong param_2);
ulong recovered_2069740(undefined8 *param_1,long param_2,int *param_3,char *param_4,long *param_5,
                       int *param_6,int *param_7);
undefined8
recovered_206b620(int *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,ulong *param_6
                 ,ulong *param_7);
undefined8 recovered_206b870(long param_1,int param_2,long param_3);
undefined8 recovered_206b910(long param_1,long param_2,int *param_3,long param_4,int *param_5);
char recovered_206bce0(long param_1,ulong param_2,undefined8 *param_3,long *param_4,long param_5,
                      int *param_6);
uint recovered_206c0b0(undefined8 *param_1,long param_2,int *param_3,long *param_4,int *param_5,
                      int *param_6);
ulong recovered_206c0e0(undefined8 *param_1,long param_2,long param_3,long param_4,int *param_5,
                       undefined8 *param_6,long *param_7,void *param_8,int *param_9);
undefined4
recovered_206c780(long param_1,long param_2,long param_3,undefined8 *param_4,int *param_5);
ulong recovered_206cb20(undefined8 *param_1,long param_2,long param_3);
char recovered_206d760(undefined8 *param_1,long param_2,long param_3,int *param_4);
ulong recovered_206da10(long param_1,long param_2,undefined8 *param_3,void *param_4,int *param_5);
int recovered_206dd20(undefined8 *param_1,long param_2,long param_3);
undefined8
recovered_206e950(long param_1,long param_2,long param_3,undefined8 *param_4,int *param_5);
void recovered_206ec70(undefined8 *param_1,long param_2,long param_3,long param_4,int *param_5,
                      long *param_6,void *param_7,int *param_8);
bool recovered_206eca0(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4);
bool recovered_206ed20(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_206eda0(long *param_1);
bool recovered_206edd0(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4,long param_5,
                      ulong param_6);
bool recovered_206ef60(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4,void *param_5,
                      ulong param_6);
undefined8 recovered_206f110(undefined8 *param_1,long param_2,long param_3,undefined4 *param_4);
undefined8
recovered_206f3e0(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6);
char recovered_206f590(undefined8 *param_1,ulong param_2,char *param_3,ulong param_4,ulong *param_5);
undefined8
recovered_206f930(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4,long param_5,
                 ulong param_6,uint *param_7);
uint recovered_206fb10(long param_1,long param_2);
ulong recovered_206fbe0(long param_1,ulong param_2);
undefined8
recovered_206fd00(undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                 undefined1 *param_6);
char recovered_206fe50(undefined8 *param_1,ulong param_2,uint param_3,uint param_4,void *param_5,
                      long param_6,ulong param_7);
void recovered_206feb0(ulong *param_1,ulong param_2);
undefined8 recovered_206ff40(long param_1,ulong param_2);
undefined8 recovered_2070000(long param_1,ulong param_2);
undefined8 recovered_20700b0(long *param_1,long param_2);
undefined8 recovered_20701f0(undefined8 *param_1,long param_2,long param_3,long param_4);
char recovered_2070260(undefined8 *param_1,ulong param_2,long param_3,void *param_4,long param_5);
int recovered_20702c0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined4 param_6,long param_7);
int recovered_20704c0(undefined8 *param_1,long param_2,undefined4 param_3,long param_4);
int recovered_2070660(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                     long param_9);
int recovered_2070800(undefined8 *param_1,long param_2,long param_3);
void recovered_2070aa0(long param_1,long param_2);
void recovered_2070c70(void);
void recovered_2070d10(void);
void recovered_2070db0(char *param_1,undefined1 *param_2);
void recovered_2070e10(void);
void recovered_2070e50(void);
bool recovered_2070e90(long param_1,long param_2,undefined8 param_3,undefined1 param_4);
undefined8 recovered_2070fb0(void);
void recovered_2070fc0(void);
undefined1 recovered_2070fd0(void);
undefined4 * recovered_2070fe0(char *param_1,char *param_2);
undefined4 * recovered_2071370(char *param_1,char *param_2,int *param_3);
undefined8 recovered_2071460(int *param_1);
ulong recovered_2071530(void *param_1,ulong param_2,ulong param_3,int *param_4);
uint recovered_2071670(int *param_1);
long recovered_2071860(void *param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_20719f0(int *param_1,ulong param_2,int param_3);
undefined8 recovered_2071a70(long param_1);
undefined8 recovered_2071aa0(int *param_1);
undefined1 recovered_2071b50(long param_1);
undefined1 recovered_2071b70(long param_1);
void recovered_2071b90(long param_1);
uint recovered_2071bb0(uint param_1,long param_2);
undefined8 recovered_2071be0(long param_1);
undefined8 recovered_2071c60(long param_1,long param_2);
ulong recovered_2071dd0(long param_1,undefined8 *param_2,ulong *param_3);
bool recovered_2071eb0(long param_1,long param_2,long param_3);
undefined8 recovered_2071f20(void);
void recovered_2071f30(void);
undefined8 recovered_2071f40(void);
undefined8 recovered_2071f50(void);
undefined8 recovered_2071f60(void);
int recovered_2071f70(char *left,char *right,ulong size);
char * recovered_2071fb0(undefined4 param_1);
undefined8 recovered_2072080(void);
undefined8 recovered_2072090(void);
long recovered_20720a0(void);
__attribute__((naked,noreturn)) void recovered_20720c0(void *context);
__attribute__((naked,returns_twice)) int recovered_20720d0(void *context);
__attribute__((naked,noreturn)) void recovered_2072110(void *context,int value);
void recovered_2072150(void);
undefined8 recovered_20721d0(void);
void recovered_20721e0(long param_1);
void recovered_20721f0(long param_1);
void * recovered_2072220(ulong size);
void * recovered_2072250(ulong size);
void recovered_2072280(void *param_1);
void recovered_2072320(void *param_1);
void recovered_20723c0(void *param_1);
void recovered_2072460(void *param_1);
undefined8 recovered_2072500(void);
uint recovered_2072510(uint *param_1);
void recovered_2072520(byte *param_1);
void recovered_2072530(void);
long recovered_2072540(long param_1);
void recovered_2072650(long param_1);
ulonglong recovered_20726b0(long param_1);
long recovered_20726f0(long param_1);
void recovered_2072700(void);
void recovered_2072790(long param_1,undefined8 param_2,undefined8 param_3);
void recovered_20727c0(undefined8 *param_1);
void recovered_2072840(void);
void recovered_2072870(undefined8 *param_1);
void recovered_2072890(undefined8 *param_1);
void recovered_20728d0(undefined8 *in_RDI);
void recovered_20728e0(void);
void recovered_20728f0(undefined8 *param_1);
void recovered_2072950(undefined8 *param_1);
void recovered_20729f0(undefined8 *param_1);
undefined8 recovered_2072a00(void);
void recovered_2072a10(void);
long recovered_2072a20(long *param_1,undefined8 param_2,undefined8 *param_3);
void recovered_2072b00(void);
undefined8 recovered_2072b10(void);
bool recovered_2072b20(int param_1);
bool recovered_2072b40(uint param_1);
bool recovered_2072b70(uint param_1);
bool recovered_2072b90(ulong param_1);
bool recovered_2072bc0(uint param_1);
byte recovered_2072be0(undefined8 in_stack_00000008,ushort in_stack_00000010);
bool recovered_2072c20(ulong param_1);
double recovered_2072c50(double value);
float recovered_2072dc0(float value);
void recovered_2072f50(void);
double recovered_20730e0(long param_1,long param_2);
double recovered_2073100(double value);
long recovered_2073150(byte *param_1,undefined8 *param_2,uint param_3);
void recovered_2073290(byte *in_RDI,undefined8 *in_RSI,uint in_EDX);
undefined8 recovered_20732a0(long param_1,byte *param_2,undefined2 *param_3);
ulonglong recovered_2073640(uint param_1,long *param_2);
int recovered_20737d0(byte *param_1,ulong param_2);
undefined8 recovered_2073880(byte *param_1,ulong param_2);
unsigned char recovered_20739e0(const void *data,uintptr_t size,void *image);
ulong recovered_2076200(uint *param_1,byte *param_2,long *param_3);
ulong recovered_2076770(uint *param_1,long *param_2,byte *param_3,long *param_4);
void recovered_20786b0(long param_1);
ulong recovered_2078750(char *param_1,uint *param_2);
ulong recovered_2078a70(char *param_1,undefined2 *param_2,int param_3,uint param_4);
uint recovered_207a120(uint *param_1,long param_2,long param_3,ulong param_4);
void recovered_207a210(long in_RDI,undefined2 *in_RSI,int in_EDX,ulong in_RCX);
byte recovered_207a220(char *param_1,long param_2,uint param_3,uint param_4);
byte recovered_207a710(char *param_1,long param_2,uint param_3,int param_4);
byte recovered_207aaf0(char *param_1,uint *param_2,uint param_3,uint param_4);
long * recovered_207e560(char *param_1);
void recovered_207e700(void *param_1);
void recovered_207e740(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_207e8d0(long *param_1,ulong param_2);
uchar recovered_207ea60(uint param_1,uint param_2,ulong param_3);
uchar recovered_207eaf0(undefined8 *param_1,ushort *param_2);
uchar recovered_207ed30(long param_1,ulong param_2,ulong *param_3,long param_4);
uchar recovered_207efe0(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
void recovered_207f040(long *param_1,undefined8 *param_2);
void recovered_207f180(long *param_1,ulong param_2,undefined1 *param_3);
bool recovered_207f310(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5);
ulong recovered_207f620(long param_1,ulong param_2,long param_3,uint *param_4,long *param_5);
void recovered_207feb0(byte *param_1,byte *param_2);
void recovered_207ffa0(long *param_1,ulong param_2);
uchar recovered_2080120(long param_1,ulong param_2,uint param_3,uint param_4,long *param_5);
ulong recovered_20806d0(undefined1 *param_1,ulong param_2,long *param_3);
long recovered_20808c0(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
ulong recovered_2080ba0(long *param_1,long *param_2,ulong param_3);
undefined8 recovered_2082330(long *param_1,long param_2,long param_3,long *param_4,ulong param_5);
void recovered_20829c0(long param_1);
void recovered_20829e0(void);
uint recovered_2082fc0(long *param_1,uint *param_2,ulong param_3);
void recovered_2083460(void);
ulonglong recovered_20835f0(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
uint recovered_2083920(uint param_1,long param_2,ulong param_3);
void recovered_2083b30(long *param_1,undefined8 *param_2);
void recovered_2083d00(long *param_1,undefined8 *param_2);
void recovered_2083dd0(long *param_1,undefined8 *param_2);
ulong recovered_2083ea0(long *param_1,long *param_2,ulong param_3);
ulong recovered_20841d0(undefined4 param_1,void *param_2,void *param_3,long param_4,ulong param_5,
                       ulong param_6);
undefined8 * recovered_2084d00(float param_1,byte *param_2,ulong param_3);
undefined8 * recovered_20853c0(float param_1,char *param_2);
void recovered_20856b0(float param_1,long *param_2);
uint recovered_20856d0(long *font,byte *text,int *out);
pf_glyph * recovered_2085e20(void *font,uint glyph);
undefined8 * recovered_2086440(undefined8 *param_1,byte *param_2);
float * recovered_2086bf0(long param_1);
void recovered_2086d30(long *param_1,ulong param_2);
void recovered_2086f20(long param_1);
undefined4 *
recovered_20870a0(double param_1,long *param_2,byte *param_3,uint param_4,uint param_5,uint param_6);
pf_layout *recovered_2087e20(pf_layout *out,void *font,pf_u32_vector *text);
void recovered_20884b0(long *param_1);
void recovered_2088520(long *param_1);
void recovered_2088590(long *param_1);
void recovered_20887c0(undefined8 *param_1);
void recovered_2088890(undefined8 *param_1);
uchar recovered_2088970(long param_1,long *param_2);
pf_glyph * recovered_2089540(pf_glyph *out,pf_ttf_backend *backend,uint glyph,double scale);
double recovered_2089a70(long param_1);
double recovered_2089a90(long param_1);
double recovered_2089ab0(long param_1);
double recovered_2089ad0(long param_1);
undefined8 recovered_2089af0(void);
uchar recovered_2089b00(long param_1,uint param_2,undefined8 *param_3);
uchar recovered_2089bd0(long param_1);
bool recovered_208a070(long param_1);
ulong recovered_208a570(pf_ttf_backend *backend,uint glyph,double *transform,long *outline,
                       uint depth);
pf_glyph *recovered_208c060(double advance,int *destination,long *outline);
ulonglong recovered_208c700(long *param_1,byte *param_2);
void recovered_208cab0(long *param_1,ulong param_2);
void recovered_208ce00(long *param_1,ulong param_2);
void recovered_208d000(long *param_1,long param_2,undefined8 *param_3);
long recovered_208d180(long *param_1,long param_2,undefined1 *param_3);
void recovered_208d3d0(long *outline,double *point);
void recovered_208d6d0(long *outline,double *point);
void recovered_208d8b0(long *outline);
void recovered_208da10(long *outline,double *first,double *control,double *last,int depth);
void recovered_208db00(undefined8 *param_1);
void recovered_208dc20(undefined8 *param_1);
ulong recovered_208dc40(long param_1,byte *param_2);
int * recovered_208ffe0(char *param_1,int *param_2,undefined1 *param_3,uint param_4);
undefined8 recovered_20909a0(long param_1);
undefined8 recovered_20909b0(long param_1);
undefined8 recovered_20909c0(long param_1);
undefined8 recovered_20909d0(void);
undefined8 recovered_20909e0(void);
void recovered_20909f0(undefined8 *param_1);
double recovered_2090a00(long *param_1,long param_2,ulong param_3);
double recovered_2090cb0(long *param_1,ulong param_2);
undefined8 * recovered_2090e40(undefined8 *param_1,byte *param_2,uint param_3);
long recovered_2091260(long *param_1,undefined8 *param_2);
void recovered_2091770(long *param_1,ulong param_2);
double recovered_2091b60(long *param_1,ulong param_2);
ulong recovered_2091c40(long *param_1,long *param_2,int param_3);
void recovered_20923e0(long *param_1,ulong param_2);
ulong recovered_2092730(uint *param_1,uint param_2,undefined4 *param_3);
byte recovered_2092c50(char *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                      undefined8 param_6);
ulong recovered_2092fb0(void *param_1,ulong param_2,uint param_3,undefined4 *param_4);
undefined8 * recovered_20932b0(float param_1,byte *param_2,uint param_3);
void recovered_2093380(float param_1,long *param_2);
undefined8
recovered_2093440(long *param_1,byte *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,undefined4 *param_7);
undefined8 recovered_2093770(long *param_1,byte *param_2,undefined8 *param_3);
void recovered_2093890(long *param_1);
ulong recovered_2093940(void *param_1,uint param_2,uint param_3,ulong param_4,undefined4 *param_5);
undefined8 recovered_2093a00(void *param_1,ulong param_2,void **param_3,uint3 *param_4);
double recovered_2094240(long *param_1,ulong param_2);
double recovered_2094450(uint3 *param_1,int param_2,ushort param_3);
undefined8 recovered_20945c0(void);
undefined8 recovered_20945e0(char *param_1,ulong *param_2);
unsigned char recovered_20947a0(const char *path);
unsigned char recovered_20947c0(unsigned device,const char *path);
void recovered_20947e0(ulong param_1);
undefined8 recovered_2094940(void);
void recovered_2094ab0(void *caller);
ulonglong recovered_2094c30(ulong param_1);
void recovered_2094c90(undefined8 *param_1,int param_2);
void recovered_2094d80(void *param_1);
ulong recovered_2094de0(undefined1 *param_1,int param_2);
char recovered_2094fa0(void);
undefined8 recovered_20950c0(void *param_1);
undefined8 recovered_20952e0(void);
void * recovered_2095700(void *channel,uchar *handled);
void recovered_2095830(long param_1);
uint recovered_2095870(uint backgroundRgb,uint foregroundRgb,uint textModeAttribute);
void recovered_2095c30(undefined8 param_1,undefined *param_2);
uint recovered_2096050(uint ch);
ulong recovered_20962b0(long param_1,ulong param_2,uchar *param_3);
uint recovered_20963b0(char *text);
uint recovered_2096660(void);
undefined8 recovered_2096d80(void);
uint recovered_2096e90(void);
undefined8 recovered_20970c0(int param_1);
void recovered_20974b0(int param_1);
uint recovered_2097570(void);
void recovered_2097680(undefined8 param_1,ulong param_2);
uint recovered_2097740(void);
void recovered_2097a30(void);
void recovered_2097b00(const char *format,...);
uint recovered_2097c60(char *path,void *outInfo);
undefined8 recovered_2097d00(char *param_1,undefined1 *param_2);
ulong recovered_2097e10(int param_1,int param_2);
uint recovered_2097f60(char *path,void *data,uint size);
ulong recovered_2098040(char *param_1,void *param_2,char *param_3);
undefined8 recovered_2098c70(char *param_1);
ulong recovered_2098da0(undefined8 param_1,char *param_2);
uint recovered_209c1f0(char *outText,uint outTextSize);
undefined8 recovered_209c260(uint param_1,void *param_2,uint param_3,int param_4,uint param_5);
bool recovered_209c3c0(void *param_1,uint param_2,int param_3,uint128 *param_4);
undefined8 recovered_209c490(uint128 *param_1);
bool recovered_209c510(int param_1);
uint recovered_209c5b0(char *text,uint textSize);
uint recovered_209c610(char *outText,uint outTextSize);
uint recovered_209c790(void);
uint recovered_209c810(char *path);
ulong recovered_209c870(char *param_1);
uint recovered_209d7a0(char *path,void *outImage);
ulong recovered_209d8e0(char *param_1,char param_2,int param_3,uint *param_4);
void recovered_209ddc0(long *param_1);
uint recovered_209de70(char *path,void *rgbaPixels,uint width,uint height,uint stride,uint format);
uint recovered_209df40(char *path,uint outputChannels,void *outPcm);
undefined8 recovered_209e040(char *param_1,undefined8 *param_2,undefined8 *param_3);
void * recovered_209e0f0(char *path,float fontSize);
undefined8 recovered_209e1d0(byte *param_1);
void recovered_209e370(byte *param_1);
undefined1 recovered_209e380(byte *param_1,uint param_2,byte *param_3,int param_4);
uint recovered_209e410(char *buffer,ulong capacity,char *prompt,uint flags,uchar *handled);
ulong recovered_209e780(byte *param_1,ulong param_2,byte *param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,char param_7);
undefined1 recovered_209f4e0(byte *param_1,uint param_2,byte *param_3,uint param_4);
void * recovered_209f580(ulong size);
void recovered_209f5b0(void *ptr);
void * recovered_209f660(void *ptr,ulong size);
uint recovered_209f780(char *path,void *entries,uint entryCapacity,uint *outEntryCount);
undefined8 recovered_209fcb0(long param_1,undefined1 *param_2);
ulong recovered_20a0190(int param_1);
undefined8 recovered_20a0720(int param_1);
void recovered_20a0760(char *param_1,byte *param_2);
undefined8 recovered_20a0b00(char *param_1,long param_2,uint param_3,uint *param_4);
bool recovered_20a0e40(char *param_1,long param_2,undefined8 *param_3);
undefined8 recovered_20a0f50(long *param_1,void *param_2,ulong param_3);
bool recovered_20a11e0(char *param_1,char *param_2,char *param_3);
ulong recovered_20a1300(char *param_1,char *param_2,byte param_3,undefined4 param_4,uint param_5);
uint recovered_20a14c0(char *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 param_5,uint *param_6,undefined4 *param_7);
undefined8 recovered_20a19d0(char *param_1,long *param_2,uint *param_3);
undefined8
recovered_20a1be0(long *param_1,uint param_2,char *param_3,uint param_4,undefined4 param_5,
                 uint param_6);
int recovered_20a1e00(void);
ulong recovered_20a1e50(int param_1,int *param_2);
uint recovered_20a21e0(void *entries,uint entryCapacity,uint *outEntryCount);
ulong recovered_20a2520(void);
void recovered_20a3df0(char *param_1,long param_2,char *param_3,ulong param_4);
char * recovered_20a3f00(int param_1);
undefined8
recovered_20a3f30(long param_1,uint param_2,long param_3,uint param_4,uint *param_5,uint *param_6);
uint recovered_20a4310(int deviceId);
uint recovered_20a4360(int deviceId,char *path,void *outInfo);
void recovered_20a4470(int param_1,char *param_2,uint *param_3);
undefined8 recovered_20a44b0(int param_1,char *param_2,int param_3,uint *param_4);
void recovered_20a4670(int param_1,char *param_2,uint *param_3);
uint recovered_20a46b0(int deviceId,char *path,void *entries,uint entryCapacity,uint *outEntryCount);
byte recovered_20a4730(int param_1,char *param_2,long param_3,undefined4 param_4,undefined8 param_5,
                      undefined4 param_6,uint *param_7,undefined4 *param_8);
uint recovered_20a47c0(int deviceId,char *path,void *data,uint size);
uint recovered_20a48b0(int deviceId,char *path);
uint recovered_20a4910(int deviceId,char *oldPath,char *newPath);
ulong recovered_20a4970(char *param_1,char *param_2);
uint recovered_20a5120(int deviceId,char *path);
undefined8 recovered_20a5240(char *param_1,undefined1 *param_2,ulong param_3);
ulong recovered_20a5540(byte *param_1);
uint recovered_20a5a20(int deviceId,char *path,void *outImage);
uint recovered_20a5a90(int deviceId,char *path,void *rgbaPixels,uint width,uint height,uint stride,
                      uint format);
void * recovered_20a5b20(int deviceId,char *path,float fontSize);
uint recovered_20a5b90(int deviceId,char *path,uint launchMode);
undefined8 recovered_20a5cc0(char *param_1,int *param_2,undefined8 *param_3);
uint recovered_20a5f40(char *path,uint launchMode);
void recovered_20a6aa0(void *param_1,char *param_2,char *param_3);
uint recovered_20a6c30(char *oldPath,char *newPath);
uint recovered_20a6e30(char *path);
uint recovered_20a6eb0(void *function,void *context,char *name);
void recovered_20a6f90(const char *format,...);
uint recovered_20a7060(void *function,void *context,char *name,uint priority);
uint recovered_20a7150(uint priority,uint threadCount);
uint recovered_20a7310(void);
void recovered_20a7340(void);
void recovered_20a7410(void);
uint recovered_20a74c0(uint microseconds);
uint recovered_20a7570(void);
uint recovered_20a75a0(void *outInfo);
long recovered_20a75e0(void);
undefined8 recovered_20a7790(uint *param_1);
uint recovered_20a7a40(void *devices,uint deviceCapacity,uint *outDeviceCount);
void recovered_20a7bc0(void);
undefined8 recovered_20a9480(ulong param_1);
int recovered_20a94f0(void);
undefined8 recovered_20a9550(int param_1,uint128 *param_2);
void recovered_20a9ed0(byte param_1);
undefined8 recovered_20a9f30(uint param_1,uint *param_2);
void recovered_20aa180(undefined4 param_1);
uint recovered_20aac70(void *outInfo);
void recovered_20aaca0(undefined4 *param_1);
uint recovered_20aad50(uint epochSecondsLow,uint epochSecondsHigh);
uint recovered_20aadd0(void *processes,uint processCapacity,uint *outProcessCount);
void recovered_20ab600(void);
uint recovered_20ab610(uint processId);
uint recovered_20ab640(void *outStats);
void recovered_20ab800(void);
long recovered_20ab810(void);
long recovered_20abcb0(void);
void recovered_20abda0(void);
uint recovered_20abdb0(int deviceId,void *outStats);
long recovered_20ac180(int param_1);
undefined4 recovered_20ac230(int param_1,void *param_2,uint param_3);
undefined8 recovered_20ac920(long param_1,int *param_2);
undefined8 recovered_20acc20(ulong param_1,uint param_2,uint *param_3);
uchar recovered_20ace50(void);
void recovered_20ad090(void);
uint recovered_20ad170(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
uint recovered_20ad2e0(uint drive,uint sector,void *buffer,ulong count);
ulong recovered_20adcc0(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
ulong recovered_20ade80(byte param_1);
void recovered_20ae1f0(uint param_1,uint param_2,void *param_3,ulong param_4);
void recovered_20ae200(char param_1,ulong param_2,uint param_3);
uint recovered_20ae490(void *outInfo);
uint recovered_20ae620(void *buffer,uint capacity,uint *outFrameBytes);
ulong recovered_20ae7c0(long *param_1,undefined4 param_2,ulong param_3,uint *param_4);
void recovered_20aea20(uint *param_1);
uint recovered_20aec10(void *pf_argument_frame,uint frameBytes);
undefined8 recovered_20aed80(void);
undefined8 recovered_20aedf0(void);
undefined8 recovered_20aee60(undefined4 param_1,long param_2);
undefined8 recovered_20aeee0(undefined4 param_1);
undefined8 recovered_20aef70(void);
undefined8 recovered_20aefe0(long param_1);
uint recovered_20af060(void *outInfo);
uint recovered_20af190(void *commands,uint commandCount);
uint recovered_20af300(char *title,uint width,uint height);
undefined8 recovered_20af870(long param_1,char *param_2);
void recovered_20af9c0(void *param_1);
uint recovered_20afae0(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                      uint clearRgb);
undefined8
recovered_20afb80(int param_1,char *param_2,void *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7);
undefined8 recovered_20afd90(int param_1,long param_2,uint *param_3);
uint recovered_20b0020(uint id);
uint recovered_20b00d0(void *windows,uint windowCapacity,uint *outWindowCount);
void recovered_20b01e0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6);
uint recovered_20b0310(uint id,int x,int y,uint flagMask,uint flagValues);
uint recovered_20b03f0(uint id,uint transparency,uint shadowIntensity);
uint recovered_20b04c0(uint id,uint mode,uint effectRange);
uint recovered_20b0590(uint id,uint width,uint height);
uint recovered_20b0820(uint id,void *outWindow);
undefined8
recovered_20b08c0(int param_1,void *param_2,uint param_3,uint *param_4,undefined8 param_5,
                 undefined8 param_6);
uint recovered_20b0be0(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                      uint clearRgb,void *outWindow);
undefined8 recovered_20b0cf0(int param_1,byte *param_2);
uint recovered_20b1120(int param_1,void *param_2,uint param_3,undefined4 *param_4);
uint recovered_20b1220(uint id,char *fileMenu,char *editMenu,char *windowMenu);
uint recovered_20b13e0(uint id,uint menuKind,uint menuIndex);
uint recovered_20b14a0(uint id,int x,int y,uint buttons,uint flags);
uint recovered_20b15f0(uint id,void *outInfo);
undefined8 recovered_20b16d0(uint param_1,int *param_2);
undefined8 recovered_20b17d0(int param_1,undefined8 *param_2);
undefined8 recovered_20b18b0(int param_1,int param_2);
undefined8 recovered_20b19b0(int param_1);
undefined8 recovered_20b1c30(long *param_1,byte *param_2,uint param_3,undefined8 *param_4);
uint recovered_20b1f40(char *text,uint maxChars,uint scale,uint rgba,void *outImage);
bool recovered_20b24f0(char *param_1);
undefined8 recovered_20b2880(char *param_1,uint *param_2);
void recovered_20b2a00(uint *param_1);
void * recovered_20b2af0(void *param_1);
void recovered_20b31c0(long param_1);
undefined8 recovered_20b3370(uint *param_1,uint *param_2);
ulong recovered_20b4bb0(long param_1);
ulong recovered_20b4f50(uint param_1,long param_2);
long recovered_20b4f60(char param_1);
byte recovered_20b4fb0(long param_1);
undefined8 recovered_20b4fe0(undefined8 *param_1,ulong param_2,ulong param_3);
long recovered_20b52b0(long *param_1,byte param_2);
long recovered_20b5630(void);
void recovered_20b56a0(long param_1);
undefined8 recovered_20b5750(char param_1,ulong param_2,ulong param_3);
bool recovered_20b57d0(uint param_1);
bool recovered_20b57e0(int param_1);
long recovered_20b57f0(ulong param_1,byte *param_2,uint param_3,uint param_4);
undefined8 recovered_20b6f20(long param_1,void *param_2,ulong param_3,int param_4);
ulong recovered_20b7020(long param_1);
bool recovered_20b72f0(long param_1,long param_2);
ulong recovered_20b7590(long param_1,uint param_2,ulong *param_3,ulong param_4);
byte recovered_20b7a90(undefined4 *param_1);
ulong recovered_20b7b00(long param_1);
void recovered_20b7f20(long param_1);
undefined8 recovered_20b7fe0(byte param_1,uint param_2,uint param_3,uint param_4);
void recovered_20b8090(undefined8 *param_1);
undefined8 recovered_20b8160(void);
void recovered_20b8240(char *param_1);
uint recovered_20b8320(char *server,void *outInfo,char *errorText,uint errorTextSize);
undefined8 recovered_20b8920(byte *param_1,undefined1 *param_2,ulong param_3);
ulong recovered_20b89f0(char *param_1,char *param_2,ulong param_3);
undefined8 recovered_20b8e10(byte *param_1,uint *param_2);
ulong recovered_20b8fc0(long param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5);
undefined8 recovered_20b9460(undefined4 param_1,ulong param_2,undefined1 param_3);
void recovered_20b9670(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_20b96c0(void);
undefined8 recovered_20b9760(undefined *param_1);
uint recovered_20b9b60(void *outInfo);
undefined4 recovered_20b9c20(void);
undefined8 recovered_20b9ca0(undefined4 *param_1);
uint recovered_20b9d70(uint x,uint y,uint width,uint height);
void recovered_20b9f10(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_20ba140(uint *param_1);
uint recovered_20ba300(byte *param_1);
void recovered_20ba580(void);
uint recovered_20ba5e0(void *outInfo);
undefined8 recovered_20ba630(undefined8 param_1,ulong param_2);
undefined8 recovered_20ba940(uint param_1);
void recovered_20ba960(void);
void recovered_20bae80(undefined8 param_1,ulong param_2);
void recovered_20bb730(void);
uint recovered_20bb760(char *line,char *outText,uint outTextSize);
void recovered_20bbc90(void);
void recovered_20c1c70(uint param_1);
ulong recovered_20c1da0(void);
ulong recovered_20c2210(void);
ulong recovered_20c23d0(void);
void recovered_20c2660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined1 *param_9,undefined8 param_10,undefined8 param_11,
                      undefined8 param_12,undefined8 param_13,undefined8 param_14,
                      undefined1 param_15);
ulong recovered_20c2690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       int *param_9,char *param_10);
void recovered_20c2970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14,undefined1 param_15);
ulong recovered_20c2ae0(undefined8 param_1,uint *param_2);
void recovered_20c2d20(void);
undefined4 * recovered_20c3430(undefined4 *param_1,long param_2);
undefined8 recovered_20c35c0(void);
ulong recovered_20c3730(void);
void recovered_20c3aa0(void);
undefined4 recovered_20c3c00(void);
void recovered_20c3d40(byte *param_1,ulong param_2);
void recovered_20c3d70(char *param_1);
bool recovered_20c3e00(undefined1 *param_1);
void recovered_20c4000(void);
bool recovered_20c42c0(char *param_1,char *param_2);
char * recovered_20c4380(char *param_1);
int recovered_20c48c0(undefined8 param_1,undefined1 *param_2,uint param_3,ulong param_4);
void recovered_20c4a20(char *param_1,undefined1 *param_2);
void recovered_20c4a40(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                      undefined1 param_6,undefined1 param_7,undefined1 param_8);
void recovered_20c4b30(void);
undefined8 recovered_20c5b90(uint param_1,uint param_2);
void recovered_20c5c80(byte param_1);
void recovered_20c5e70(uint *param_1,ulong param_2,uint param_3);
void recovered_20c6000(int param_1,int param_2,long param_3,long param_4,byte param_5,uint param_6,
                      byte param_7);
uint recovered_20c6310(void);
bool recovered_20c6330(int param_1);
ulong recovered_20c63a0(uint *param_1,uint256 *param_2,uint param_3);
void recovered_20c6450(long param_1,uint param_2,uint param_3);
void recovered_20c64f0(uint256 *param_1,uint256 *param_2,uint param_3);
uint recovered_20c68f0(uint param_1,uint param_2,uint param_3);
undefined8 recovered_20c6c40(uint param_1,uint param_2);
undefined8 recovered_20c6d40(long param_1,int param_2,long param_3,ulong param_4);
void recovered_20c6ea0(void);
void recovered_20c6f70(long param_1,char param_2);
undefined8 recovered_20c70c0(long param_1,char param_2);
uchar recovered_20c7250(ulong owner,uchar blocking,uint mode);
undefined8 recovered_20c7830(ulong param_1);
ulong recovered_20c78a0(char *param_1,ulong *param_2,undefined1 *param_3,char param_4);
void recovered_20c7a10(long *param_1);
ulonglong recovered_20c7af0(void *param_1,ulong param_2);
void recovered_20c7b50(long param_1,long param_2,char param_3);
ulong recovered_20c7bf0(void);
void recovered_20c7e70(char param_1,ulong param_2,uint param_3);
void recovered_20c7f60(long *param_1);
void recovered_20c8090(long param_1,char param_2);
void recovered_20c81b0(long *param_1);
void recovered_20c8270(char *param_1,undefined1 *param_2,ulong param_3);
ulong recovered_20c82d0(char *param_1);
ulong recovered_20c8620(ulong param_1,undefined8 *param_2,ulong *param_3);
undefined8 recovered_20c87a0(ulong param_1,undefined8 param_2,undefined8 param_3);
ulonglong recovered_20c8ad0(long param_1,ulong *param_2,ulong *param_3);
void recovered_20c8b30(byte *param_1,undefined1 *param_2,byte *param_3);
undefined8 recovered_20c8ce0(char *param_1,char *param_2);
ulong recovered_20c9010(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulong recovered_20c9150(byte *param_1);
undefined8 recovered_20c9290(char *param_1);
undefined8 recovered_20c96e0(char *param_1,char *param_2);
undefined8 recovered_20c9770(long param_1,undefined1 *param_2,ulong param_3);
void recovered_20c9bd0(char *param_1,char param_2,undefined1 *param_3,ulong param_4);
undefined8 recovered_20c9f00(char *param_1,long param_2,ulong *param_3);
ulong recovered_20ca130(long param_1,char *param_2,ulong param_3,uint param_4,long *param_5,
                       undefined4 *param_6);
undefined8 recovered_20ca1d0(long param_1);
ulong recovered_20ca3b0(char *param_1,undefined4 param_2,undefined8 *param_3,ulong *param_4);
void recovered_20ca5d0(void *param_1,uint param_2);
undefined8
recovered_20ca6c0(long param_1,int *param_2,ulong param_3,long param_4,ulong param_5,long *param_6,
                 ulong *param_7);
ulong * recovered_20ca770(ulong param_1,ulong *param_2);
int recovered_20ca880(void);
undefined8 recovered_20ca8d0(byte param_1,char *param_2,ulong param_3,void *param_4,ulong param_5);
ulong recovered_20cab10(long param_1,undefined4 param_2);
undefined8 recovered_20caf80(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
undefined8
recovered_20cb1b0(undefined8 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,undefined8 param_9
                 ,undefined8 param_10);
uint recovered_20cb350(uint param_1,long param_2,uint param_3,long param_4,uint *param_5);
uint recovered_20cb390(uint param_1,uint param_2,long param_3,uint param_4,long param_5,
                      uint *param_6);
uint recovered_20cb3c0(uint param_1,uint param_2,long param_3,uint param_4,long param_5,
                      uint *param_6);
ulong recovered_20cba70(void);
uint recovered_20cbac0(long param_1,long param_2);
void recovered_20cbb90(void);
ulong recovered_20cbba0(int *param_1,char *param_2);
int recovered_20cc840(char *param_1,char *param_2);
undefined8 recovered_20cccb0(void);
void recovered_20cce40(char *param_1,char *param_2);
int recovered_20cceb0(int param_1,int *param_2,uint param_3,uint *param_4,uint *param_5);
int recovered_20cd230(int param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                     uint *param_6,uint *param_7);
undefined8 recovered_20cdbd0(int param_1,uint param_2);
ulong recovered_20cdd80(char *param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong *param_5
                       );
ulong recovered_20ce4b0(long param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong *param_5);
ulong recovered_20ce550(char *param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong *param_5
                       );
bool recovered_20ce760(void);
uint recovered_20ce930(long param_1,int param_2,uint param_3);
bool recovered_20ce9a0(void);
undefined4 recovered_20cea30(undefined4 *param_1);
ulong recovered_20cea40(uint param_1,uint param_2,uint param_3);
undefined8 recovered_20ced60(void *param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_20cee90(void *param_1,void *param_2);
undefined8
recovered_20cef40(char *param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                 uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                 uint *param_11);
undefined8
recovered_20cf290(long param_1,uint param_2,uint *param_3,int *param_4,uint *param_5,uint *param_6,
                 uint *param_7,int *param_8,undefined4 *param_9);
void recovered_20cf450(long *param_1,char *param_2,char *param_3);
undefined1 recovered_20cf4e0(void);
void recovered_20cf510(char *param_1,ulong param_2);
void recovered_20cf720(uint *param_1,int *param_2);
void recovered_20cf790(long *param_1,char *param_2,undefined4 param_3);
void recovered_20cf7f0(ulong param_1,char *param_2,ulong param_3);
ulong recovered_20cf8b0(void);
uint recovered_20cf910(uint *param_1);
void recovered_20cfa70(long *param_1,char *param_2,undefined1 param_3);
void recovered_20cfb30(long *param_1);
uint recovered_20cfb70(ulong param_1,uint *param_2);
void recovered_20cfdc0(char param_1);
uint recovered_20cfed0(byte param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                      uint param_7,uint param_8,uint param_9,long *param_10,int *param_11);
undefined8
recovered_20d00b0(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                 uint param_7,char param_8,ulong param_9,undefined8 *param_10,long *param_11);
undefined8 recovered_20d02c0(char *param_1,char *param_2);
ulong recovered_20d0320(byte param_1);
undefined1 * recovered_20d07a0(byte param_1);
undefined8 recovered_20d0890(byte param_1,undefined8 *param_2);
ulong recovered_20d09d0(long param_1);
bool recovered_20d0a50(byte param_1);
undefined8 recovered_20d0a70(char param_1,void *param_2);
ulong recovered_20d0d10(void);
uint recovered_20d0da0(uint param_1);
bool recovered_20d0e30(uint param_1,int param_2,long param_3,uint param_4,ulong param_5,int param_6,
                      int param_7);
ulong recovered_20d0f70(undefined8 *param_1,ulong *param_2);
undefined8 recovered_20d12d0(long param_1,ulong param_2,ulong param_3,int *param_4);
undefined8
recovered_20d13c0(long param_1,ulong param_2,long param_3,ulong param_4,ulong param_5,uint param_6,
                 uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
int recovered_20d18e0(void);
uchar recovered_20d1930(void **nodes,uint64_t *count,uint64_t *capacity,
        uint32_t parent,const char *name,const char *path,uint64_t file_index,
        uint32_t directory,uint32_t flags,uint32_t *out_index);
undefined8 recovered_20d1bb0(long param_1,uint param_2);
ulong recovered_20d1cb0(long param_1,ulong param_2);
undefined8 recovered_20d2260(long param_1,ulong param_2,ulong param_3,undefined4 *param_4);
void recovered_20d2360(long param_1,int param_2,uint param_3,uint param_4);
void recovered_20d2400(long param_1,char *param_2);
uchar recovered_20d2450(long param_1,ulong param_2,long *param_3,long param_4,byte *param_5,
                       char param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9);
void recovered_20d28a0(uint128 *param_1,uint128 *param_2);
int recovered_20d2e20(char param_1);
uchar recovered_20d2e40(int param_1);
int recovered_20d3000(byte param_1);
void recovered_20d3020(long param_1);
ulong recovered_20d31c0(uint param_1,char *param_2,void *param_3,ulong param_4);
ulong recovered_20d3970(ulong param_1);
byte recovered_20d3a80(ulong param_1);
int recovered_20d3c10(void);
undefined8 recovered_20d3da0(void);
undefined8 recovered_20d3f80(uint param_1,int *param_2);
bool recovered_20d41c0(uint param_1,long param_2,ulong param_3,uint param_4);
void recovered_20d44c0(ulong param_1);
ulong recovered_20d46a0(long param_1);
undefined8 recovered_20d53a0(void);
ulong recovered_20d56b0(long param_1,ulong param_2,char param_3);
ulong recovered_20d57b0(long param_1,uint param_2);
ulong recovered_20d60d0(uint param_1,uint param_2,uint param_3,uint param_4);
ulong recovered_20d7a90(long param_1,int param_2);
undefined8 recovered_20d80b0(undefined8 *param_1,char *param_2,uint param_3);
undefined8 recovered_20d8480(uint param_1,uint param_2,uint param_3,undefined4 param_4);
undefined8 recovered_20d8b40(uint param_1,uint param_2,uint param_3,undefined4 param_4);
undefined8
recovered_20d90f0(char *param_1,void *param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6);
undefined8
recovered_20d9490(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                 long param_7,ulong param_8,char *param_9,uint param_10);
undefined8 recovered_20d98e0(long *param_1,ulong param_2);
void recovered_20da040(void);
ulong recovered_20da1e0(undefined8 param_1);
undefined8 recovered_20da3d0(void);
ulong recovered_20dab20(long *param_1,char param_2,int param_3,int param_4,undefined4 param_5,
                       long param_6);
void recovered_20dacd0(long param_1,long param_2);
int * recovered_20dadf0(long param_1,int param_2,long param_3,char param_4);
int recovered_20dae60(long param_1);
undefined8 recovered_20daec0(long param_1,long param_2);
uint recovered_20daf30(byte *param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_20db410(byte *param_1,ulong param_2,void *param_3,ulong param_4);
ulong recovered_20db580(byte *param_1);
void recovered_20db5e0(undefined1 *param_1,undefined8 param_2,void *param_3);
ulong recovered_20db860(uint param_1,uint param_2,void *param_3,ulong param_4,byte param_5);
void recovered_20dc3c0(void *param_1,long param_2,long param_3,uint param_4,char param_5);
void recovered_20dcbf0(void *param_1,void *param_2);
void recovered_20dcd30(byte *param_1,void *param_2,void *param_3);
undefined8 recovered_20dd390(long param_1,ulong param_2,void *param_3,ulong param_4,uint param_5);
ulong recovered_20dd540(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
ulong recovered_20dd5d0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4);
int recovered_20dd660(int *param_1,long param_2);
undefined4 recovered_20dd780(undefined4 param_1,void *param_2);
undefined8 recovered_20dd890(undefined8 *param_1,long param_2,char *param_3,undefined1 *param_4);
undefined8 recovered_20ddb00(long *param_1,int param_2,char *param_3,uint param_4);
ulong recovered_20ddde0(long *param_1,int param_2,void *param_3);
uchar recovered_20de020(long *param_1,ushort *param_2,long *param_3,ulong *param_4);
uchar recovered_20de1f0(void *volume,int block,void *buffer);
ulong recovered_20de240(long *param_1,short *param_2,long param_3,ulong param_4,int param_5);
ulong recovered_20de440(long *param_1,int param_2,long param_3,ulong param_4,ulong param_5);
undefined8
recovered_20de530(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                 uint param_7,uint param_8,undefined8 *param_9,ulong *param_10);
ulong recovered_20de900(long param_1,int param_2,long param_3,uint param_4,int param_5,int param_6,
                       uint param_7,long param_8,ulong param_9,char *param_10);
undefined8 recovered_20debd0(char *param_1,long param_2);
ulong recovered_20dee80(char *param_1,long param_2);
int recovered_20defa0(ulong param_1);
undefined8 recovered_20df1d0(char *param_1,ulong param_2,int *param_3,char *param_4);
ulong recovered_20df440(char *param_1,ulong param_2,char *param_3);
bool recovered_20df760(void);
undefined1 * recovered_20df770(char *param_1,ulong param_2,undefined1 *param_3);
undefined8 recovered_20df910(int *param_1,undefined8 *param_2,long *param_3);
void recovered_20dfd00(long param_1,long param_2,long param_3);
undefined8 recovered_20dfdb0(long *param_1,ulong param_2);
void recovered_20e0270(ulong param_1,uint param_2);
void recovered_20e03c0(uint param_1);
uint recovered_20e04a0(uint param_1);
uint recovered_20e0640(char *param_1,char *param_2);
ulong recovered_20e06b0(uint *param_1,uint param_2,uint param_3);
bool recovered_20e0be0(uint param_1,long param_2,uint param_3,uint param_4);
ulong recovered_20e0d40(ulong param_1,byte param_2);
ulong recovered_20e0f90(void);
void recovered_20e1180(uint param_1);
void recovered_20e1240(uint param_1,int param_2);
ulong recovered_20e12c0(void);
undefined4 recovered_20e1480(char *param_1);
bool recovered_20e1930(char *param_1,char *param_2);
long recovered_20e19e0(long param_1,int param_2);
undefined8 recovered_20e1c80(undefined1 *param_1,int param_2);
undefined8 recovered_20e1e00(long param_1,long param_2);
undefined8 recovered_20e1ed0(char *param_1);
int recovered_20e1fa0(int param_1,byte *param_2,uint param_3);
ulong recovered_20e23d0(int param_1,char *param_2,int param_3,char param_4,undefined1 *param_5,
                       ulong param_6);
ulong recovered_20e2610(char *param_1,undefined1 *param_2,ulong param_3,undefined8 *param_4);
undefined8 recovered_20e27c0(void);
ulong recovered_20e2820(char *param_1,undefined1 *param_2,byte param_3,uint param_4);
void recovered_20e34b0(char *param_1,uint param_2,long param_3,char param_4);
undefined8 recovered_20e3770(byte param_1);
ulong recovered_20e3790(char *param_1,char *param_2,char *param_3,ulong param_4);
long recovered_20e38d0(char *param_1,undefined8 *param_2);
ulong recovered_20e45f0(char *param_1,char *param_2,char *param_3,ulong param_4);
ulong recovered_20e4ed0(char *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                       char *param_5,ulong param_6);
undefined1 * recovered_20e54f0(void);
int recovered_20e56a0(uint *param_1,char *param_2,char *param_3,undefined4 param_4,char *param_5,
                     char *param_6,ulong param_7,uint param_8,ulong param_9,long param_10,
                     undefined8 *param_11,long param_12,char *param_13,undefined8 param_14);
ulong recovered_20e6e90(char *param_1);
undefined8 recovered_20e6f20(int param_1);
bool recovered_20e7010(uint param_1,char *param_2);
bool recovered_20e7340(long param_1);
void recovered_20e7420(int param_1);
uint recovered_20e7570(uint budget);
void recovered_20e8580(void *param_1);
ulong recovered_20e85e0(char *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                       char *param_5,char *param_6,ulong param_7);
ulong recovered_20e8790(char *param_1,char *param_2);
undefined8
recovered_20e8b20(char *param_1,undefined8 *param_2,ulong *param_3,undefined4 param_4,char *param_5,
                 char *param_6,ulong param_7);
void recovered_20e8fa0(void);
byte recovered_20e9020(long param_1,ulong param_2,long param_3,undefined1 *param_4,
                      undefined1 *param_5);
ulong recovered_20e9330(long param_1,long param_2,long param_3,char *param_4,char *param_5,
                       ulong param_6);
ulong recovered_20e9770(uint *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                       ulong *param_5,undefined8 *param_6,char *param_7,ulong param_8);
ulong recovered_20e9c00(ulong *param_1);
undefined8 recovered_20e9c10(char *input,ulong input_size,undefined8 *output,
                           ulong *output_size,char *error,ulong error_size);
ulong recovered_20ea070(uint *param_1,ulong param_2,int param_3,undefined8 *param_4,ulong *param_5,
                       char *param_6,ulong param_7);
ulong recovered_20ea370(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,
                       char param_6,void *param_7,undefined8 *param_8,ulong *param_9,char *param_10,
                       ulong param_11);
undefined8 recovered_20ea6e0(void);
ulong recovered_20eab50(uint *param_1,ulong param_2,uint param_3,byte param_4,long *param_5,
                       ulong *param_6,undefined1 *param_7,char *param_8,ulong param_9);
void recovered_20ead30(char *param_1);
undefined1 recovered_20eaf30(char *param_1,char *param_2);
ulong recovered_20eb0d0(char *param_1);
void recovered_20eb2d0(void);
ulong recovered_20eb340(long param_1,ulong *param_2,ulong *param_3,ulong *param_4,long param_5,
                       ulong param_6,ulong *param_7,char *param_8,ulong param_9);
ulong recovered_20eb6a0(uint *param_1,ulong param_2,uint param_3,undefined4 param_4,void *param_5,
                       ulong *param_6,undefined8 *param_7,undefined8 *param_8,ulong *param_9,
                       undefined8 *param_10,ulong *param_11,char *param_12,ulong param_13);
ulong recovered_20ebd20(char *param_1);
void recovered_20ec3d0(long param_1,long param_2,char param_3,char param_4);
void recovered_20ec450(ulong param_1);
void recovered_20ecaf0(ulong param_1);
undefined4
recovered_20ece50(ulong param_1,undefined8 param_2,char *param_3,char *param_4,char param_5,
                 char param_6,char param_7,void *param_8,char *param_9,ulong param_10);
undefined8 recovered_20ed680(undefined *UNRECOVERED_JUMPTABLE);
ulong recovered_20ed700(ulong *param_1,int param_2);
undefined8
recovered_20ed720(uint *param_1,ulong param_2,uint param_3,byte param_4,uint *param_5,ulong *param_6
                 ,char *param_7,ulong param_8);
ulong recovered_20ee540(long param_1,ulong *param_2,ulong *param_3,long *param_4,char *param_5,
                       ulong param_6);
void recovered_20ee740(long param_1);
ulonglong recovered_20ee790(ulong *param_1,int param_2);
undefined8 recovered_20ee7b0(long param_1,uint param_2,char param_3,char *param_4);
undefined8 recovered_20ee810(long param_1,ulong param_2,ulong param_3,long *param_4);
void * recovered_20ee890(ulong count,int wide);
void recovered_20ee940(long param_1);
bool recovered_20eea30(ulong param_1);
void recovered_20eeb30(char *param_1,undefined4 param_2,char *param_3);
undefined8 recovered_20eeba0(char *param_1,char *param_2);
void recovered_20eec40(long param_1);
void recovered_20ef100(long param_1);
void recovered_20ef1b0(long param_1,ulong *param_2);
void recovered_20ef2a0(long param_1);
void recovered_20ef380(void *param_1,long param_2,ulong *param_3);
void recovered_20f0010(void *param_1);
void recovered_20f0100(void *param_1);
undefined * recovered_20f01f0(uint param_1);
void recovered_20f0280(int param_1);
void recovered_20f0370(int *param_1);
undefined8 recovered_20f0490(void);
undefined8 recovered_20f04f0(ulong param_1);
int recovered_20f0560(char *param_1,uint param_2,int param_3,int *param_4);
ulong recovered_20f0750(long param_1,int param_2,int param_3,int *param_4,uint *param_5);
void recovered_20f0af0(long param_1,int *param_2);
void recovered_20f0bc0(uint *param_1);
bool recovered_20f0db0(long *param_1);
ulong recovered_20f10b0(long param_1,undefined4 param_2,void *param_3,char *param_4,ulong param_5);
undefined8 recovered_20f1490(long param_1,uint param_2,byte param_3,char *param_4,ulong param_5);
ulong recovered_20f15e0(long param_1,char *param_2,ulong param_3);
undefined8 recovered_20f1e70(long param_1,ulong param_2,ulong param_3,long *param_4);
ulong recovered_20f2000(long param_1,long param_2,ulong param_3,ulong *param_4,char *param_5,
                       ulong param_6);
undefined8
recovered_20f22a0(ulong param_1,undefined8 *param_2,ulong *param_3,char *param_4,ulong param_5);
ulong recovered_20f24b0(char *param_1,uint param_2,undefined4 param_3,char *param_4,ulong param_5);
undefined1 recovered_20f2dd0(char *param_1,char *param_2);
long recovered_20f2e70(char *param_1);
ulong recovered_20f2fd0(void);
undefined8 recovered_20f3060(int param_1);
ulong recovered_20f30d0(long param_1,ulong *param_2,char *param_3,ulong param_4);
bool recovered_20f3200(char *param_1);
ulong recovered_20f3310(long param_1,char *param_2,ulong param_3);
ulong recovered_20f3690(long param_1,ulong param_2,uint param_3,uint param_4,char *param_5,
                       ulong param_6);
undefined8 recovered_20f4280(long param_1,ulong param_2,ulong *param_3,ulong *param_4);
ulong recovered_20f4310(long param_1,ulong *param_2,int param_3,char *param_4,ulong param_5);
ulong recovered_20f4510(long param_1,uint param_2,char *param_3,undefined4 param_4,ulong *param_5,
                       char *param_6,ulong param_7);
ulong recovered_20f4750(long param_1,undefined1 *param_2,int param_3,ulong param_4,ulong param_5,
                       char *param_6,ulong param_7);
void recovered_20f49d0(void);
ulong recovered_20f4af0(long param_1,char *param_2,ulong *param_3);
ulong recovered_20f4d30(ulong param_1,long param_2,ulong param_3,ulong *param_4,char *param_5,
                       ulong param_6);
ulong recovered_20f5150(long param_1,long param_2,long param_3,ulong param_4,ulong *param_5,
                       char *param_6,ulong param_7);
undefined8 recovered_20f5450(long param_1);
undefined8 recovered_20f56a0(ulong param_1);
bool recovered_20f5710(long param_1,char *param_2);
void recovered_20f5780(char *param_1);
void recovered_20f58d0(long param_1,long param_2,long param_3,ulong *param_4);
uint recovered_20f5b80(void *task,void *cpu);
void recovered_20f5ea0(void);
long recovered_20f5f90(long param_1);
ulong recovered_20f5fd0(char *param_1,undefined4 param_2,char *param_3,ulong param_4,int *param_5,
                       uint param_6,ulong param_7,long param_8);
long recovered_20f6af0(void);
ulong recovered_20f6b80(long *param_1);
undefined8 recovered_20f6f70(long *param_1,undefined8 *param_2);
ulong recovered_20f71e0(long param_1,ulong param_2,void *param_3,ulong param_4);
ulong recovered_20f7370(uint param_1,uint param_2,undefined *param_3,ulong param_4);
undefined8 recovered_20f7720(uint param_1,uint param_2,ulong param_3,uint param_4);
ulong recovered_20f7760(byte param_1,int *param_2);
int recovered_20f7b10(char param_1);
void recovered_20f7cb0(uint param_1,undefined8 param_2,undefined4 param_3);
void * recovered_20f8670(byte param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                        undefined1 param_6,undefined4 param_7);
ulong recovered_20f8870(uint param_1,uint param_2,undefined8 *param_3,byte param_4);
void recovered_20f97e0(long param_1);
void recovered_20f9bc0(long param_1,long param_2,ulong param_3);
void recovered_20f9c30(long param_1);
ulong recovered_20fa050(int param_1);
byte recovered_20fa080(char param_1);
bool recovered_20fa0b0(char param_1);
undefined8 recovered_20fa0d0(long param_1,uint param_2,undefined8 *param_3);
ulong recovered_20fa150(byte param_1,uint param_2,undefined4 *param_3,byte param_4);
uchar recovered_20fa490(int *param_1,uint param_2,undefined8 *param_3);
ulong recovered_20fa530(byte param_1,uint param_2,uint param_3);
void recovered_20faab0(long param_1,long param_2);
undefined8 recovered_20fab10(void *param_1,uint param_2,undefined4 *param_3);
void recovered_20faca0(void *param_1,long param_2,ulong param_3);
undefined1 recovered_20fad50(byte param_1,undefined8 *param_2);
int recovered_20fb0b0(byte param_1,uint param_2,uint param_3,uint *param_4,int *param_5);
undefined8
recovered_20fb9c0(byte param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 long param_6);
void recovered_20fbc20(byte param_1,uint param_2,uint param_3);
uint recovered_20fbde0(byte *param_1,ulong param_2,void *param_3,ulong param_4);
void * recovered_20fbe30(undefined1 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                        int param_5);
bool recovered_20fc000(byte *param_1,uint param_2);
undefined * recovered_20fc870(int param_1);
undefined8 recovered_20fc8a0(void);
ulong recovered_20fcc90(uint param_1);
bool recovered_20fd160(undefined8 *param_1);
uint recovered_20fd210(long param_1,ulong param_2);
void recovered_20fd2f0(long param_1,uint *param_2);
void recovered_20fd860(void);
ulong recovered_20fdbb0(uint param_1);
byte recovered_20fddc0(long *param_1);
undefined * recovered_20fdfa0(uint *param_1);
void recovered_20fe110(char *param_1,long param_2,long param_3);
void recovered_20fe2a0(char *param_1,char *param_2,ulong param_3);
ulong recovered_20fe340(ulong param_1);
void recovered_20fe460(char *param_1);
void recovered_20ff2f0(uint param_1,uint param_2);
undefined8 recovered_20ff4e0(uint param_1,uint *param_2);
undefined8 recovered_21009e0(byte param_1,uint param_2,uint param_3);
ulong recovered_2100d50(char *param_1,undefined1 *param_2);
undefined8 recovered_2101220(undefined8 *param_1,ulong param_2,ulong param_3);
uint recovered_2101270(byte *param_1,ulong param_2,uint param_3,void *param_4);
ulong recovered_21012c0(byte *param_1,ulong param_2,uint param_3,void *param_4);
bool recovered_2101330(long param_1);
void recovered_2101340(void);
ulong recovered_2101410(undefined8 *param_1,long param_2,long param_3);
void recovered_21014b0(undefined8 *param_1,long param_2,long param_3,long param_4);
ulong recovered_2101580(undefined8 *param_1,long param_2,ulong param_3);
undefined8 recovered_2101670(undefined8 *param_1,long param_2,long *param_3);
void recovered_2101920(void);
void recovered_2101930(char *text,ulong length,int first,int last);
undefined8 recovered_2101b10(long param_1,int param_2,uint param_3,uint param_4);
undefined8 recovered_2101cc0(long param_1,undefined4 param_2,uint *param_3,int *param_4);
void recovered_2102360(char *param_1,ulong param_2,void *param_3,uint *param_4);
void recovered_2102400(ulong param_1,char *param_2,ulong param_3);
undefined8
recovered_2102460(long param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,void *param_7,ushort param_8);
void recovered_21025e0(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,
                      uint param_6);
undefined8 recovered_2102700(void *param_1,uint *param_2,int param_3);
ulong recovered_2102800(long param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
bool recovered_2102bc0(ushort *param_1,uint param_2,ushort param_3,uint *param_4,char *param_5);
void recovered_2102db0(void);
void recovered_2102e70(undefined *param_1);
undefined8 recovered_2102e80(uint param_1,uint param_2);
undefined8 recovered_2102f60(uint param_1,uint param_2);
void recovered_21030f0(uint param_1,uint param_2,uint param_3);
undefined8 recovered_2103610(uint *param_1,uint param_2,uint param_3);
undefined * recovered_2103720(void);
void recovered_21038b0(long param_1);
void recovered_2104440(long *param_1,long param_2,ulong param_3,long param_4);
void * recovered_21045b0(long *param_1,long param_2);
void recovered_2104860(undefined8 param_1,ulong param_2);
void recovered_2104880(int param_1,byte *param_2,uint param_3);
undefined8 recovered_2104910(char *param_1,long param_2,long param_3);
undefined8 recovered_2104ce0(uint param_1,uint param_2);
undefined8 recovered_2104d50(uint param_1,uint param_2,uint param_3,int param_4,uint param_5);
bool recovered_2104dd0(uint param_1,uint param_2,ulong param_3);
undefined8 recovered_21050b0(long param_1,uint param_2,char *param_3);
undefined8 recovered_2105370(char *param_1);
void recovered_2105450(void);
uchar recovered_2105460(uint param_1);
ulong * recovered_2105470(int param_1);
void recovered_2105490(long in_RDI);
undefined8 recovered_21054a0(uint *param_1);
undefined8 recovered_2105590(undefined8 *param_1);
uchar recovered_21056a0(int in_ESI,undefined4 *in_RDX);
uchar recovered_21056b0(undefined4 in_EDI,int in_ESI,ulong in_RDX);
undefined1 recovered_21056c0(ulong in_RDX,uint in_R8D,undefined4 *in_R9);
uchar recovered_21056d0(int in_ESI,ulong in_RDX,uint in_ECX,uint in_R8D,undefined4 in_R9D);
uchar recovered_21056e0(uint in_EDI,int in_ESI,uint in_EDX,uint *in_RCX);
uchar recovered_21056f0(uint in_EDI,int in_ESI,undefined4 *in_RDX);
uchar recovered_2105700(uint in_EDI,int in_ESI,undefined4 in_EDX);
uchar recovered_2105710(uint in_EDI,int in_ESI,int in_EDX,ulong *in_RCX);
uchar recovered_2105720(uint *in_RDI,int in_ESI,undefined4 *in_RDX);
uchar recovered_2105730(undefined4 *in_RDI,int in_ESI,undefined4 in_EDX);
uchar recovered_2105740(undefined8 in_RDI,ulong in_RSI,uint in_EDX,undefined4 *in_RCX,
                       undefined4 *in_R8);
void recovered_2105750(void);
void recovered_2105760(void);
undefined8 recovered_2105770(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined8 recovered_21057b0(long param_1,uint param_2,char *param_3);
uchar recovered_2105a70(int param_1,undefined4 *in_RSI,undefined4 *in_RDX);
undefined1 recovered_2105aa0(int param_1,uint in_ESI,ulong in_RDX);
uint recovered_2105ac0(void);
undefined8 recovered_2105af0(uint *param_1,long param_2);
undefined8 recovered_2105dc0(uint *param_1,long param_2,long param_3);
undefined8 recovered_2106180(long param_1);
int recovered_2106440(int *param_1);
undefined8 recovered_2107370(void);
void recovered_21078a0(void);
undefined8
recovered_2107970(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9);
undefined8 recovered_2107d90(uint *param_1,long param_2,long param_3);
undefined8 recovered_2107f80(long param_1,int param_2,char *param_3);
undefined8 recovered_2108100(int *param_1);
int recovered_2108270(int *param_1);
bool recovered_2108460(uint *param_1);
bool recovered_2108500(uint *param_1);
ulong * recovered_21085b0(uint param_1);
void recovered_2108610(char *param_1,long param_2,long param_3);
ulong recovered_21087a0(ulong param_1);
undefined1 recovered_21088d0(void);
undefined8 recovered_2108930(long *param_1,long param_2,long param_3);
long * recovered_2108a50(void);
undefined8 recovered_2108b60(void *param_1,char *param_2,int param_3);
void recovered_2108ea0(void);
undefined8 recovered_21095c0(void *param_1,void *param_2,char param_3);
undefined8 recovered_21096f0(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4);
ulong recovered_2109740(undefined8 *param_1,ulong *param_2,ulong param_3);
undefined8
recovered_21097d0(void *param_1,ulong param_2,undefined4 param_3,undefined1 *param_4,char *param_5,
                 ulong param_6);
void recovered_21099f0(void);
ulong recovered_2109be0(ulong param_1);
ulong recovered_2109d00(char *param_1,undefined1 *param_2,ulong param_3,undefined8 *param_4);
byte recovered_2109fc0(char *param_1);
ulong recovered_210a3d0(char *param_1,undefined8 param_2);
ulong recovered_210a4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,undefined1 *param_10,int *param_11,char *param_12,
                       ulong param_13,undefined1 *param_14);
undefined8 recovered_210a770(char *param_1,char *param_2);
ulong recovered_210a9e0(char *param_1);
ulong recovered_210abc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,undefined1 *param_10,int *param_11,char *param_12,
                       ulong param_13,undefined1 *param_14);
uchar recovered_210b3b0(ulong param_1);
ulong recovered_210b410(long param_1,char *param_2,ulong *param_3);
undefined8 recovered_210b4a0(long param_1);
void recovered_210b630(void);
undefined8 recovered_210b6c0(void);
void recovered_210b750(void);
ulong recovered_210b7d0(ulong param_1);
undefined8 recovered_210b8c0(void);
void recovered_210b9e0(long param_1);
void recovered_210bab0(long param_1);
undefined4 recovered_210bb00(byte param_1,int param_2,int param_3);
ulong recovered_210bc00(int param_1);
undefined1 * recovered_210bf70(char *param_1,int param_2,int param_3);
undefined8 recovered_210c030(char *param_1);
byte recovered_210c130(undefined *param_1,int param_2,uint param_3,undefined *param_4,int param_5);
undefined8 recovered_210c500(char *param_1);
ulong recovered_210c6f0(int param_1,int *param_2);
uint recovered_210cb00(void);
undefined8 * recovered_210cb20(void);
void recovered_210ccd0(uint param_1,long param_2,uint param_3,long param_4,uint *param_5);
ulong recovered_210ccf0(char *param_1,char *param_2,ulong param_3);
bool recovered_210d000(byte param_1);
void recovered_210d020(undefined1 *param_1,uint param_2);
undefined8 recovered_210d160(long param_1);
void recovered_210d250(char *param_1,ulong param_2,byte param_3);
void recovered_210d2b0(undefined8 param_1,ulong param_2);
ulong recovered_210d330(long param_1,char *param_2,byte *param_3);
undefined8 recovered_210d690(char *param_1,char *param_2,ulong param_3);
void recovered_210da70(int param_1,char *param_2,undefined1 *param_3,ulong param_4);
void recovered_210dcf0(uint param_1,char *param_2,ulong param_3);
ulong recovered_210dda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       int *param_9,char *param_10,ulong param_11);
ulong recovered_210e590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       char *param_9,int *param_10,char *param_11,ulong param_12);
void recovered_210f490(undefined8 *param_1,undefined8 *param_2);
void recovered_210f500(long param_1,undefined8 param_2,ulong param_3);
undefined8 recovered_210f6b0(long param_1,ulong param_2);
void recovered_210f710(char *param_1,undefined1 *param_2,ulong param_3);
void recovered_210f750(char *param_1,undefined1 *param_2,ulong param_3);
int recovered_210fa50(char *param_1,char param_2);
int recovered_210ff70(byte *******param_1,undefined1 *param_2,ulong param_3);
int recovered_2110880(char *param_1,long param_2,ulong param_3);
bool recovered_2110930(void);
undefined8 recovered_2110970(uint param_1);
void recovered_2110990(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5,byte param_6
                      ,byte param_7);
void recovered_2110ad0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_2110f20(void);
void recovered_2111100(ulong param_1,char *param_2,ulong param_3);
undefined8 recovered_21113c0(long param_1,undefined4 *param_2);
void recovered_21115b0(undefined1 *param_1,long param_2);
void recovered_2111720(int param_1);
ulong recovered_2111780(int param_1,char *param_2);
ulong recovered_2111900(int param_1,int param_2,uint param_3);
ulong recovered_2111c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       int param_9,int param_10,char *param_11,ulong param_12,long param_13,
                       undefined8 param_14);
uint recovered_2112a20(long param_1,long param_2);
ulong recovered_2112af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       int param_9,uint param_10,uint param_11,char *param_12,char *param_13,
                       char *param_14);
ulong recovered_2113250(int param_1,uint param_2);
undefined8 recovered_2113e30(long param_1,void *param_2,ulong *param_3);
ulong recovered_2113fd0(int param_1);
ulong recovered_21147a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       int param_9,byte *param_10,byte *param_11,undefined8 param_12,byte *param_13,
                       char *param_14);
undefined8 recovered_21156e0(char *param_1,undefined4 *param_2);
void recovered_2115e90(void);
undefined8 recovered_2116380(int param_1);
ulong recovered_21165b0(int param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
undefined8 recovered_2116df0(int param_1,char *param_2,undefined4 *param_3);
ulong recovered_2117c90(int param_1,uint param_2);
undefined8 recovered_2117fa0(char *param_1,undefined4 *param_2);
ulong recovered_2118510(int param_1,long *param_2,long *param_3);
ulong recovered_2118990(int param_1,uint param_2);
undefined8 recovered_2118ce0(int param_1);
undefined8 recovered_2118e10(int param_1,ulong param_2);
ulong recovered_2119110(int param_1,char *param_2);
void recovered_2119360(uint *param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5
                      ,undefined1 param_6);
ulong recovered_21193c0(byte *param_1,ulong *param_2);
ulong recovered_2119590(long param_1,uint param_2,int *param_3,char *param_4,ulong param_5);
uint recovered_2119aa0(int *param_1,uint param_2);
undefined8 recovered_2119b60(int *param_1);
undefined8 recovered_2119bb0(void);
ulong recovered_2119c50(char *param_1,char *param_2,uint param_3,ulong param_4);
ulong recovered_211a240(int param_1,ulong param_2);
long recovered_211a700(char *param_1);
undefined8 recovered_211a9d0(char *param_1);
undefined8 recovered_211ac80(short param_1);
ulong recovered_211ad30(char *param_1);
undefined8 recovered_211ae20(char *param_1);
undefined8 recovered_211b0e0(void);
bool recovered_211b1b0(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_211b340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      char *param_9,ulong param_10,char *param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14,undefined1 param_15);
void recovered_211b3d0(void *param_1,int param_2);
undefined8 recovered_211b4a0(void *param_1);
bool recovered_211b5b0(char *param_1);
void recovered_211b6f0(long param_1,undefined1 param_2,undefined4 param_3,ulong param_4);
char recovered_211b770(char *param_1,int param_2);
bool recovered_211b810(char *param_1);
ulong recovered_211b9e0(char *param_1,int param_2);
bool recovered_211ba50(char *param_1);
undefined8 recovered_211bc00(char *param_1);
undefined8 recovered_211bf50(char *param_1);
bool recovered_211c140(char *param_1);
undefined8 recovered_211c430(char *param_1);
char recovered_211c5f0(char *param_1);
undefined8 recovered_211c820(char *param_1);
ulong recovered_211ccf0(long param_1,uint param_2,uint param_3,char *param_4);
ulong recovered_211d0a0(long param_1,int *param_2,uint param_3,uint param_4,char *param_5);
ulong recovered_211d4f0(long param_1,int *param_2,uint param_3,uint param_4,char *param_5);
ulong recovered_211d840(long param_1,int *param_2,uint param_3,uint param_4,char *param_5);
ulong recovered_211de30(long param_1,uint param_2,uint param_3,char *param_4);
undefined8 recovered_211e360(byte param_1,uint param_2,int param_3);
ulong recovered_211e420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,int param_10,int param_11,uint param_12,byte *param_13,
                       char *param_14);
void recovered_211e500(char *param_1,void *param_2);
char * recovered_211e800(char *param_1,uint param_2,char *param_3,ulong param_4);
void recovered_211e8f0(long param_1,ulong param_2,undefined1 *param_3);
void recovered_211e970(long param_1,long param_2);
void recovered_211e9d0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      long param_5,long param_6);
void recovered_211eae0(long param_1);
ulong recovered_211ec10(long param_1,long param_2,int param_3);
ulong recovered_211ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       uint param_9,uint param_10,void *param_11,uint param_12,char *param_13,
                       ulong param_14);
undefined8
recovered_211ede0(void *param_1,ulong param_2,void *param_3,undefined8 param_4,long param_5,
                 ulong param_6);
undefined4 recovered_211efd0(long param_1,long param_2,long param_3,char *param_4);
void recovered_211f2d0(void *param_1,ulong param_2,long param_3,void *param_4,void *param_5,
                      long param_6);
void recovered_211f470(void *param_1,ulong param_2,void *param_3,ulong param_4,uint *param_5);
void recovered_211f680(uint *param_1,void *param_2,ulong param_3);
void recovered_211f900(uint *param_1,uint *param_2);
void recovered_211f9e0(void *param_1,long param_2,uint *param_3);
undefined8
recovered_211faa0(byte param_1,int param_2,int param_3,undefined8 *param_4,undefined4 *param_5);
bool recovered_211fd50(char *param_1,char *param_2,long param_3,long param_4);
undefined8 recovered_211feb0(char *param_1,undefined4 *param_2);
undefined8 recovered_211ff70(char *param_1,char *param_2,undefined4 *param_3);
bool recovered_2120010(char *param_1,long param_2,ulong param_3);
undefined4 recovered_2120350(long param_1,uint param_2,uint param_3);
ulong recovered_2120560(long param_1,int *param_2,uint param_3,int param_4);
ulong recovered_2120700(long param_1,undefined4 param_2,undefined4 param_3);
ulong recovered_2120810(long param_1,int *param_2,uint param_3,uint param_4);
ulong recovered_2120ac0(long param_1,int *param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_2120c50(long param_1,uint param_2,uint param_3);
ulong recovered_2120e20(long *param_1,long *param_2);
undefined8 recovered_2121020(long *param_1,long *param_2);
undefined8 recovered_21211a0(void *param_1,long param_2,int param_3);
void recovered_21214d0(byte *param_1);
byte recovered_2121620(char *param_1,void *param_2,ulong param_3,ulong *param_4);
uint recovered_2121710(char *param_1,void *param_2,ulong param_3);
byte recovered_2121730(char *param_1);
byte recovered_2121850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      char *param_9);
int recovered_2121910(char *param_1,uint param_2);
undefined8 recovered_2121af0(char *param_1,long param_2,ulong *param_3,ulong *param_4);
void recovered_2121d60(char *param_1);
uchar recovered_21220b0(char *path,void *metadata);
ulong recovered_21222c0(char *param_1,char *param_2,int param_3,char *param_4);
byte recovered_2122ce0(int *param_1);
ulong recovered_2122da0(ulong param_1);
bool recovered_2122f10(long param_1);
ulong recovered_2122ff0(long param_1,char *param_2);
ulong recovered_2123360(ulong param_1);
long * recovered_21234d0(void);
bool recovered_21235c0(long param_1);
undefined8 recovered_21236b0(void);
ulong recovered_2123840(void);
undefined8 recovered_2123890(long param_1);
undefined8 recovered_2123c20(char param_1);
ulong recovered_21240f0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
int recovered_21241b0(uint param_1,int param_2,int *param_3);
void recovered_21242c0(void);
void recovered_2124d10(void);
void recovered_2124d40(void);
void recovered_2124d70(void);

/* Original analysis identifiers for manual recovery units. */
