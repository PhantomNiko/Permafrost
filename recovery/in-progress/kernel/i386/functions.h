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
typedef struct pf_font_cache110 { float size;unsigned int age_low,age_high,pixels;void *entries;unsigned int count,capacity;void *buckets;unsigned int bucket_count,bucket_capacity;void *next;unsigned int next_count,next_capacity,reserved; } pf_font_cache110;
typedef struct pf_font_handle110 { void *backend;float size;unsigned int age_low,age_high;pf_font_cache110 caches[4]; } pf_font_handle110;
void recovered_2000014(void);
unsigned int recovered_2000033(void);
void recovered_2000098(void);
void recovered_20000a0(void);
void recovered_2000100(void);
void recovered_2000300(int param_1,int param_2,int param_3);
bool recovered_2000370(int in_ECX,int in_EDX,int param_3);
void recovered_2000590(void);
int recovered_2000600(void);
uint recovered_2000670(void);
int recovered_20006f0(void);
uint recovered_2000760(void);
void recovered_20007d0(void);
uint * recovered_2000830(int in_ECX,uint *in_EDX,uint *param_3);
uint recovered_2000a40(int param_1,uint *param_2);
uint * recovered_2000aa0(int param_1,uint *param_2,uint *param_3);
void recovered_2000b00(void);
void recovered_2000b50(int in_ECX);
uint * recovered_2000c60(uint *param_1,uint param_2);
undefined8 recovered_2000f90(uint param_1,uint param_2,uint param_3);
undefined8 recovered_2000fe0(uint param_1,uint param_2,uint param_3);
undefined8 recovered_2001030(uint param_1,uint param_2,uint param_3);
undefined8 recovered_2001070(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_2001160(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_20011d0(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_2001320(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_20013f0(void);
int recovered_2001410(int param_1);
void * recovered_2001430(ulong size);
void recovered_2001490(void *memory);
void * recovered_20014e0(void *memory,ulong size);
void *recovered_2001500(void *dest,const void *src,size_t count);
void *recovered_20015c0(void *dest,const void *src,size_t count);
void *recovered_2001790(void *dest,int value,size_t count);
void recovered_2001840(undefined4 *param_1,uint param_2);
void recovered_20018e0(undefined4 *param_1,uint param_2);
char * recovered_2001980(char *param_1,char param_2,int param_3);
int recovered_20019c0(void *left,void *right,ulong count);
int recovered_2001af0(char *in_ECX,char *in_EDX);
int recovered_2001b40(int value);
int recovered_2001b60(int value);
int recovered_2001b80(int value);
int recovered_2001ba0(int value);
int recovered_2001bd0(int value);
int recovered_2001bf0(int value);
int recovered_2001c10(int value);
int recovered_2001c30(int value);
ulong recovered_2001c50(char *text);
int recovered_2001c90(char *left,char *right);
int recovered_2001cd0(byte *param_1,byte *param_2);
void recovered_2001d10(int param_1,int param_2);
uint * recovered_2001d40(uint *param_1);
char * recovered_2001ea0(char *text,int value);
ulong recovered_2001ee0(char *text,char *accept);
ulong recovered_2001f40(char *text,char *reject);
char * recovered_2001fa0(char *param_1,char *param_2);
char * recovered_2001ff0(char *text,char *find);
undefined * recovered_2002040(void);
undefined ** recovered_2002050(void);
undefined4 recovered_2002060(undefined4 *param_1);
double recovered_2002080(double value,int exponent);
void recovered_20020c0(double param_1,int *param_2);
double recovered_2002180(double left,double right);
double recovered_20021e0(double left,double right);
double recovered_2002270(double value);
double recovered_20022c0(double value);
double recovered_2002320(double value);
double recovered_2002410(double value);
longlong recovered_2002520(double param_1);
double recovered_2002570(double value);
double recovered_2002600(double value);
double recovered_2002690(double value);
undefined8 recovered_20026b0(double param_1);
undefined8 recovered_2002760(double param_1);
void recovered_20027f0(uint param_1,uint param_2);
void recovered_2002860(uint param_1,uint param_2);
float recovered_2002920(float left,float right);
void recovered_2002990(float param_1,int *param_2);
float recovered_2002a70(float value,int exponent);
float recovered_2002ac0(float left,float right);
float recovered_2002b60(float value);
float recovered_2002bc0(float value);
double recovered_2002c30(double value);
float recovered_2002ca0(float value);
float recovered_2002d10(float value);
float recovered_2002d30(float value);
undefined4 recovered_2002e50(double param_1);
float recovered_2002ea0(float value);
float recovered_2002f30(float value);
float recovered_2002fc0(float value);
int recovered_2002fe0(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_2003130(byte *param_1,undefined4 *param_2,uint param_3);
longdouble recovered_2003280(byte *param_1,undefined4 *param_2);
longdouble recovered_2003430(byte *param_1,undefined4 *param_2);
int recovered_2003460(char *out,ulong capacity,char *format,void *arguments);
int recovered_2003fc0(char *out,ulong capacity,const char *format,...);
void recovered_2003ff0(uint in_ECX,uint in_EDX,uint *param_3);
uint * recovered_2004180(uint *in_ECX,uint *in_EDX);
undefined4 recovered_20041e0(uint *in_ECX,int in_EDX);
undefined4 recovered_2004240(undefined1 *param_1,int param_2);
undefined4 recovered_2004570(undefined1 *param_1);
undefined4 recovered_20045d0(uint *param_1);
undefined4 recovered_2004810(uint *param_1);
uint recovered_2004b20(void);
bool recovered_2004b70(void);
undefined4 recovered_2004ba0(void);
bool recovered_2004bb0(void);
int recovered_2004c20(void);
int recovered_2004cb0(int param_1);
int recovered_2004d40(undefined4 param_1);
int recovered_2004dd0(int param_1);
int recovered_2004e60(undefined4 param_1);
undefined4 recovered_2004ef0(int param_1,int param_2,int param_3,int param_4);
undefined4 recovered_2004fc0(int in_ECX,int in_EDX,int param_3,int param_4);
bool recovered_2005090(int param_1,char *param_2,int param_3);
void recovered_2005160(int *param_1);
void recovered_2005210(undefined4 *param_1);
void recovered_2005250(int *param_1);
void recovered_2005370(int *param_1,int param_2);
undefined4 recovered_2005b10(undefined2 param_1,int param_2,uint *param_3);
ulonglong recovered_2005b60(undefined2 param_1,int param_2,undefined4 param_3);
undefined4 recovered_2005ba0(short *param_1);
byte recovered_2005fd0(void);
void recovered_2006060(void);
undefined4 recovered_2006080(void);
undefined8 recovered_2006090(undefined4 *param_1,int *param_2);
uint recovered_20061d0(void *param_1,uint param_2);
undefined4
recovered_20065f0(byte param_1,byte param_2,byte param_3,ushort param_4,uint param_5,uint *param_6);
undefined4
recovered_20068b0(byte param_1,byte param_2,byte param_3,ushort param_4,uint param_5,
                 undefined4 param_6);
void recovered_2006b40(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void recovered_2006b70(void);
int recovered_2006b90(uint param_1,int param_2,uint param_3,int *param_4);
int recovered_2006bd0(uint in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5);
undefined4 recovered_2006e30(uint param_1,int param_2,uint param_3,int *param_4);
undefined1 recovered_2006ea0(uint param_1);
undefined4 recovered_20070e0(uint *in_ECX);
undefined4 recovered_20072e0(uint *in_ECX);
byte recovered_2007a90(void);
uint recovered_20085b0(void);
uint recovered_20086d0(void);
undefined4 recovered_20087e0(void);
undefined4 recovered_2008830(int in_ECX,uint in_EDX,uint *param_3,uint *param_4);
int recovered_2008880(void);
void recovered_20088c0(undefined4 *in_ECX);
void recovered_2008940(void);
void recovered_2008950(int in_ECX);
undefined4 recovered_20089b0(void);
uint recovered_20089d0(int in_ECX,uint in_EDX);
void recovered_2008a00(void);
void recovered_2008a20(void);
undefined4 recovered_2008a40(void);
void recovered_2008a80(void);
undefined4 recovered_2008aa0(void);
void recovered_2008ae0(uint param_1);
uint recovered_2008bf0(void);
void recovered_2008c80(undefined4 in_ECX,undefined4 in_EDX,undefined4 param_3);
uint recovered_2008ca0(uint in_ECX);
undefined4
recovered_2008d50(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,uint param_6,
                 int *param_7);
undefined8 recovered_2008e50(void);
__attribute__((naked)) void recovered_2008e70(void);
undefined8 recovered_2008f70(undefined4 in_EAX,undefined4 in_EDX);
undefined8 recovered_2008f90(undefined4 in_EAX,undefined4 in_EDX);
undefined8 recovered_2008fb0(undefined4 in_EAX,undefined4 in_EDX);
void recovered_2008fd0(int param_1);
uint recovered_20093f0(void);
uint recovered_20094a0(void);
undefined4 recovered_2009f50(undefined4 param_1);
undefined4 recovered_2009f70(void);
int recovered_2009fa0(void);
undefined4 recovered_200a720(void);
undefined4 recovered_200a740(void);
char recovered_200a760(void);
int recovered_200a7e0(void);
int recovered_200a820(void);
void recovered_200a860(uint param_1,undefined1 param_2);
char recovered_200a890(void);
char * recovered_200a980(uint param_1);
undefined4 recovered_200a9a0(void *param_1);
void recovered_200a9d0(void);
void recovered_200a9e0(void);
void recovered_200a9f0(void);
undefined4 recovered_200aa00(void);
undefined4 recovered_200aa10(uint param_1);
undefined4 recovered_200b4e0(void);
void recovered_200b4f0(void);
void recovered_200b500(void);
undefined4 recovered_200b510(uint *param_1,int param_2,uint *param_3);
undefined4 recovered_200b570(undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 recovered_200b5b0(uint *param_1,int param_2,uint *param_3);
undefined4 recovered_200b610(undefined4 *param_1,int param_2,undefined4 param_3);
void recovered_200b650(void);
uint recovered_200cd00(void);
void recovered_200d100(void);
void recovered_200d240(void);
undefined4 recovered_200d260(void);
undefined4 recovered_200d530(byte in_CL,int *in_EDX);
undefined4 recovered_200d5d0(void);
uint recovered_200d770(void);
undefined4 recovered_200dc10(void);
void recovered_200dc20(byte in_CL);
undefined1 recovered_200dde0(void);
byte recovered_200de00(void);
byte recovered_200de20(void);
int recovered_200de50(void);
undefined4 recovered_200ded0(int *in_ECX);
uint recovered_200e3c0(void);
uint recovered_200e430(void);
void recovered_200e4a0(byte param_1);
void recovered_200e7e0(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5);
void recovered_200e8e0(uint in_ECX,char in_DL);
void recovered_200ea10(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5);
void recovered_200edf0(uint param_1,uint param_2,int param_3,uint param_4,byte param_5);
void recovered_200fa20(int in_ECX,int in_EDX);
void recovered_200fb50(undefined1 param_1);
void recovered_200fc40(uint param_1,uint in_stack_00000008);
undefined4 recovered_200fec0(void);
void recovered_200ff40(void *param_1,uint param_2);
undefined4 recovered_2010060(uint *in_stack_00000010,undefined4 *in_stack_00000014);
undefined4 recovered_20100c0(uint in_ECX,uint in_EDX,uint *param_3);
void recovered_2010300(void);
void recovered_2010310(void);
undefined4 recovered_2010330(void);
uint recovered_2010340(int *param_1,uint param_2);
void recovered_2010490(int param_1,undefined4 param_2,void *param_3,uint param_4);
ulong recovered_20104f0(int in_ECX,char in_DL,void *param_3,uint param_4);
uint recovered_2010730(int *param_1,uint param_2,char param_3);
void recovered_2010ae0(void);
char recovered_2011270(int *in_ECX,char in_DL,short param_3,short param_4,void *param_5,
                      ushort param_6,void *param_7,ushort param_8);
int recovered_2011a90(byte *in_ECX);
bool recovered_2011bf0(int *param_1);
char recovered_2011ff0(int param_1,char param_2,void *param_3,short param_4);
byte recovered_20121f0(int param_1,byte param_2,short param_3,ushort param_4,char param_5,
                      int param_6,ushort param_7,undefined *param_8);
void recovered_2012670(int param_1,byte param_2,short param_3,ushort param_4,char param_5,
                      int param_6,ushort param_7);
byte recovered_20126b0(byte param_1,short param_2,ushort param_3,char param_4,int param_5,
                      ushort param_6);
undefined4 recovered_2012720(void);
void recovered_2012730(void);
uint recovered_2012740(void);
uint recovered_2012b20(void);
uint recovered_2012e00(uint in_EAX);
uint recovered_2014640(void);
uint recovered_20148a0(void);
uint recovered_2014eb0(void);
bool recovered_2014f90(int in_ECX,int in_EDX);
char recovered_20150d0(uint in_ECX);
uint * recovered_2015180(uint in_EAX);
undefined4 recovered_2016600(undefined4 *in_ECX);
void recovered_2016b60(void);
undefined4
recovered_2017810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                 int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9);
undefined * recovered_2017950(char param_1);
uint * recovered_2017990(char param_1);
undefined4 recovered_20179d0(undefined4 param_1,int param_2);
undefined4 recovered_2017ae0(byte in_CL);
undefined4 recovered_2017be0(void);
undefined4 recovered_2017bf0(byte param_1);
uint recovered_2017c80(undefined1 *param_1,uint param_2);
undefined4 recovered_2017f20(char param_1);
undefined4 recovered_2017f90(uint in_EAX,char param_2);
undefined4 recovered_2018270(char param_1,int param_2,uint param_3,undefined *param_4,uint param_5);
undefined4 recovered_20182c0(void *in_ECX,int in_EDX,uint param_3,undefined *param_4,uint param_5);
uint recovered_2018730(char param_1,int param_2,undefined4 param_3,int param_4,uint param_5);
uint recovered_2018780(char in_CL,int in_EDX,uint param_3,int param_4,uint param_5);
undefined4 recovered_20188e0(char param_1,int param_2);
undefined4 recovered_2018920(undefined4 in_ECX,int in_EDX);
uint recovered_2018ba0(byte param_1,int *param_2);
bool recovered_2018f60(void);
uint recovered_2019030(byte param_1,uint param_2,undefined *param_3,uint param_4);
bool recovered_2019760(char in_CL,uint in_EDX,void *param_3,uint param_4);
undefined4 recovered_2019a00(int in_ECX,uint in_EDX,int param_3,uint param_4);
int recovered_2019b90(void);
uint recovered_2019be0(int in_ECX);
undefined4 recovered_2019c60(char in_CL,uint in_EDX,uint param_3,char param_4,void *param_5);
undefined4 recovered_2019d10(char in_CL,uint in_EDX,int param_3,byte param_4);
bool recovered_2019d70(byte in_CL,uint in_EDX,int param_3,uint param_4);
void recovered_2019fd0(undefined1 in_CL,undefined4 in_EDX,uint param_3,char param_4);
uint recovered_201a090(byte param_1,int param_2,int param_3,uint param_4);
bool recovered_201a430(int in_ECX,uint in_EDX,int param_3,uint param_4);
uint recovered_201a520(int in_ECX);
bool recovered_201a5a0(byte in_CL,uint in_EDX,int param_3,uint param_4);
void recovered_201a800(char in_CL,uint in_EDX,void *param_3,uint param_4);
bool recovered_201aab0(byte in_CL);
uint recovered_201ac10(byte param_1);
undefined4 recovered_201af20(byte in_CL);
undefined4 recovered_201afb0(char param_1);
void recovered_201b0f0(void);
uchar recovered_201b110(uint duration);
undefined4 recovered_201b4f0(uint in_ECX);
undefined4 recovered_201c090(void);
undefined4 recovered_201c0e0(undefined4 in_ECX);
byte recovered_201c150(void);
undefined8 recovered_201c1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4);
undefined4 recovered_201c1e0(int param_1);
uint recovered_201c200(void);
uint recovered_201c220(void);
uint recovered_201c2d0(uint *param_1);
uint recovered_201c6a0(uint *in_ECX);
undefined4 recovered_201d0a0(uint *param_1);
undefined4 recovered_201dad0(byte *in_ECX);
uint recovered_201ded0(void);
bool recovered_201dfc0(void);
undefined4 recovered_201e020(undefined4 *in_ECX);
bool recovered_201e360(uint *in_ECX);
bool recovered_201e6b0(byte *in_ECX);
byte recovered_201ee00(void);
void recovered_201f1a0(void);
uint recovered_201f5d0(void);
void recovered_201f7b0(uint in_EAX,uint *param_2,undefined4 *param_3);
undefined4 recovered_201f820(undefined4 param_1);
undefined4 recovered_201f840(undefined4 param_1);
bool recovered_201f860(undefined4 *param_1,undefined4 *param_2);
void recovered_201f8a0(undefined4 *param_1);
void recovered_201fe30(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void recovered_201feb0(uint in_EAX,int *param_2,int *param_3,int *param_4,int *param_5);
void recovered_201ff90(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,undefined4 *param_6);
void recovered_2020020(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,undefined4 *param_6);
void recovered_2020080(uint in_EAX,uint *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                      undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                      undefined4 *param_11,undefined4 *param_12,undefined4 *param_13);
void recovered_2020150(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,uint *param_6,uint *param_7);
void recovered_2020200(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,uint *param_6,uint *param_7);
void recovered_20202b0(uint in_EAX,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5,uint *param_6,uint *param_7,uint *param_8,uint *param_9,
                      uint *param_10,uint *param_11);
void recovered_2020420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_2020590(undefined4 *param_1,uint *param_2,uint *param_3);
int recovered_20205d0(void);
undefined4 * recovered_2021190(void);
bool recovered_20211a0(void);
bool recovered_20218f0(void);
undefined4 recovered_20219a0(void);
undefined4 recovered_20219b0(void);
undefined4 recovered_20219c0(void *param_1);
undefined4 recovered_20219f0(void);
undefined4 recovered_2021a00(void);
void recovered_2021a10(byte param_1);
void recovered_2021bc0(byte *param_1);
void recovered_2021c00(byte *param_1,int param_2);
undefined4 recovered_2021c40(char *param_1);
uint recovered_2021d50(void);
undefined4 recovered_2021d80(int param_1,undefined4 param_2,undefined4 *param_3);
byte recovered_2021dd0(undefined4 *param_1);
undefined4 recovered_2021e20(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_2021e80(int in_ECX);
undefined8 recovered_2022050(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_2022090(longlong *param_1);
undefined4 recovered_2022350(void);
void recovered_2022360(void);
uint recovered_2022380(void);
uint recovered_20223a0(void);
uint recovered_2022430(void);
undefined1 * recovered_20224d0(void);
uint recovered_20224e0(uint *in_ECX,char in_DL);
bool recovered_20225e0(char *in_ECX);
uint recovered_2022620(uint in_ECX,uint in_EDX,uint param_3,byte param_4,int param_5,char *param_6,
                      byte param_7,int param_8,char *param_9,uint *param_10);
void recovered_2022740(char *in_ECX);
void recovered_2022880(int in_ECX,int in_EDX);
void recovered_20232c0(char *in_ECX);
void recovered_2023510(int in_ECX,int in_EDX);
char * recovered_2024050(char *in_ECX);
char * recovered_2024260(int *in_ECX,int in_EDX);
char * recovered_20243b0(void);
void recovered_20246a0(int in_ECX,byte *in_EDX,int param_3,uint param_4);
uint recovered_2024b80(int in_ECX,uint in_EDX,undefined1 *param_3);
void recovered_2024ce0(char *in_ECX,uint in_EDX,byte *param_3);
undefined4
recovered_2024e00(byte in_CL,byte in_DL,byte param_3,ushort param_4,uint param_5,uint *param_6);
undefined4 recovered_2024f70(uint in_ECX,uint in_EDX,uint param_3,uint *param_4);
uint recovered_20252c0(void);
undefined4
recovered_2025570(uint in_ECX,uint in_EDX,byte param_3,byte param_4,byte param_5,byte param_6,
                 ushort param_7,int param_8,uint *param_9);
undefined4
recovered_2025660(uint in_ECX,uint in_EDX,byte param_3,byte param_4,byte param_5,ushort param_6,
                 uint param_7,int *param_8);
undefined4 recovered_2025730(uint *in_ECX);
undefined4
recovered_2025810(uint in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,int param_8);
undefined4 recovered_2025f60(int in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5);
void recovered_2026070(void);
undefined4 recovered_20260b0(undefined4 *in_ECX);
bool recovered_20263c0(int in_ECX,int in_EDX,uint param_3,int param_4,uint *param_5);
bool recovered_20264b0(int in_ECX);
undefined1 recovered_20266c0(uint in_ECX,uint in_EDX,undefined1 *param_3);
void recovered_2026870(int in_ECX);
bool recovered_2026ab0(int in_ECX,int in_EDX);
uint recovered_2026ca0(int in_EDX);
undefined4 recovered_2026d80(uint in_ECX,uint in_EDX);
undefined4 recovered_2026dc0(int *in_ECX,uint in_EDX);
bool recovered_2027430(int *in_ECX);
undefined4 recovered_20275c0(int *in_ECX,uint *in_EDX);
undefined4 recovered_20276b0(int in_ECX,undefined4 *in_EDX);
undefined4 recovered_20277a0(uint *in_ECX);
uint recovered_2027850(void);
void recovered_2027b20(void);
bool recovered_2027b60(uint in_ECX,uint in_EDX,uint param_3,uint *param_4);
undefined4 recovered_2027c60(uint in_ECX,uint in_EDX,uint param_3,uint param_4);
bool recovered_2027d20(char in_CL);
undefined4 recovered_20280f0(void);
undefined4 recovered_2028310(void);
uint recovered_20283b0(void);
undefined4 recovered_2028780(void);
undefined4 recovered_20291d0(void);
void recovered_20296a0(undefined4 in_ECX,int in_EDX);
undefined4 recovered_2029900(uint in_ECX);
bool recovered_20299a0(void);
undefined4 recovered_2029a80(void);
uint recovered_2029cf0(int in_ECX,byte in_DL,uint param_3,int param_4,uint *param_5);
undefined1 recovered_2029e50(char *in_ECX);
undefined4 recovered_202a180(char *in_ECX,uint in_EDX,uint param_3,uint *param_4);
undefined4
recovered_202a2b0(char *in_ECX,uint in_EDX,undefined2 param_3,undefined2 in_stack_00000006);
undefined2 recovered_202a340(void);
undefined4 recovered_202a3f0(int in_ECX,uint in_EDX);
void recovered_202dc20(int *in_ECX,undefined4 in_EDX);
void recovered_202dcd0(int *in_ECX,byte in_DL,undefined4 param_3,int param_4,int param_5);
void recovered_202dde0(int *in_ECX,undefined1 in_DL,int param_3,int param_4);
void recovered_202dec0(int *in_ECX,undefined4 in_EDX);
void recovered_202df70(int *in_ECX,byte in_DL,int param_3,int param_4,int param_5);
void recovered_202e1e0(int *in_ECX,int in_EDX,int param_3,int param_4);
void recovered_202e2f0(int *in_ECX,int in_EDX,int param_3,int param_4);
void recovered_202e400(int *in_ECX,undefined4 in_EDX,undefined4 param_3,undefined4 param_4);
undefined4 recovered_202e620(uint in_ECX,undefined4 in_EDX);
int recovered_202e6b0(int in_ECX);
undefined4 recovered_202e740(int in_ECX);
undefined4 recovered_202ec40(int in_ECX,int in_EDX);
uint recovered_202ed90(int in_ECX,uint in_EDX);
undefined8 recovered_202f480(int in_ECX,uint in_EDX,int param_3);
uint recovered_202f5f0(int in_ECX,int in_EDX,int param_3,int param_4,uint param_5);
undefined4 recovered_202f800(char *in_ECX,int in_EDX);
undefined4 recovered_2030070(int in_ECX,int in_EDX,int param_3);
void recovered_20302a0(int in_ECX,int in_EDX);
undefined4 recovered_2030470(int in_ECX,uint *in_EDX);
undefined4 recovered_2030560(uint in_EDX,int param_2,int param_3);
undefined4 recovered_2030680(int in_ECX);
void recovered_2030850(byte in_CL,uint *in_EDX);
void recovered_20308d0(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,
                      int param_7,uint param_8,char param_9);
undefined4 recovered_2030a40(void *in_ECX,uint in_EDX);
undefined4 recovered_2030c90(int *in_ECX);
undefined4 recovered_20311f0(byte in_CL,int in_EDX);
undefined4 recovered_2031410(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint *param_5);
void recovered_20315b0(char in_CL);
uint recovered_2031720(int in_ECX,byte in_DL,int param_3,uint param_4);
undefined4 recovered_2031b80(void);
undefined4
recovered_2031d20(uint in_ECX,uint *in_EDX,byte *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8);
undefined4 recovered_2031f60(int in_ECX);
bool recovered_2031ff0(char in_CL);
void recovered_20320d0(int *in_ECX,uint in_EDX);
void recovered_2034570(undefined2 in_CX,uint in_EDX);
uint recovered_20346b0(undefined4 in_ECX,int in_EDX);
undefined4
recovered_2034d80(undefined1 in_CL,undefined1 in_DL,undefined2 param_3,undefined2 param_4,
                 byte param_5,undefined1 *param_6,ushort param_7);
undefined4 recovered_2035570(void);
undefined4
recovered_2035830(undefined4 in_ECX,undefined4 in_EDX,uint param_3,byte param_4,uint *param_5,
                 undefined1 *param_6);
undefined4 recovered_2035a00(void *in_ECX,undefined4 *in_EDX,undefined4 *param_3);
undefined4 recovered_2035bb0(int in_ECX);
void recovered_2035c20(void);
void recovered_2036280(void);
undefined1 recovered_2036910(void);
undefined4 recovered_20374a0(int in_ECX,byte *in_EDX);
undefined4 recovered_20376d0(uint in_ECX,uint in_EDX_00,byte *param_3);
undefined4 recovered_2037e30(void);
undefined4
recovered_2038250(uint in_ECX,undefined1 *in_EDX,char *param_3,byte *param_4,ushort *param_5,
                 undefined1 *param_6);
undefined4 recovered_2038530(char in_CL,uint in_EDX_00,byte param_3);
void recovered_2038b30(uint in_ECX,uint in_EDX);
bool recovered_2038b90(int *in_ECX,ushort in_DX,ushort param_3);
bool recovered_2038c60(uint in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,uint param_6);
undefined1 recovered_2038d20(int in_ECX,uint in_EDX,uint *param_3);
undefined4
recovered_2038dd0(int in_EDX,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6);
bool recovered_2039bc0(int in_ECX,uint in_EDX);
undefined4 recovered_2039d60(uint *in_ECX,uint *in_EDX);
bool recovered_2039e00(int *in_ECX,uint in_EDX,byte param_3);
void recovered_2039f60(undefined4 in_ECX,char in_DL);
undefined4 recovered_2039fb0(uint *in_ECX,uint *in_EDX);
void recovered_203a0c0(void);
bool recovered_203a220(int *in_ECX,ushort in_DX);
undefined4
recovered_203a2e0(int in_ECX,uint *in_EDX,uint param_3,int param_4,uint param_5,uint param_6,
                 byte param_7);
uint recovered_203a470(uint in_EAX,int in_ECX);
undefined4 recovered_203a4f0(void);
undefined4
recovered_203a570(uint in_ECX,undefined1 *in_EDX,undefined1 *param_3,byte *param_4,ushort *param_5,
                 byte *param_6,byte *param_7,ushort *param_8,byte *param_9);
undefined4
recovered_203ade0(char in_CL,undefined2 in_DX,byte param_3,char param_4,undefined2 param_5,
                 byte param_6);
undefined4 recovered_203b290(void);
void recovered_203b850(undefined1 *in_ECX,undefined1 in_DL,byte param_3,byte param_4);
void recovered_203b8e0(undefined1 *in_ECX,byte in_DL,undefined1 param_3,undefined2 param_4,
                      byte param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
                      undefined2 param_9);
undefined4 recovered_203b9a0(void);
byte recovered_203bb10(byte *in_ECX,ulong in_EDX,byte param_3,int param_4,uint param_5,byte param_6);
undefined4 recovered_203c3a0(byte *in_ECX);
undefined4 recovered_203c4d0(uint in_ECX,uint in_EDX,uint param_3,byte param_4);
undefined4
recovered_203c8f0(char in_CL,byte in_DL,uint param_3,int param_4,uint param_5,uint *param_6,
                 uint *param_7);
undefined4 recovered_203cbc0(int in_ECX);
undefined4
recovered_203cd90(byte *in_ECX,ulong in_EDX,byte param_3,int param_4,uint param_5,byte param_6);
undefined4 recovered_203cf00(uint in_ECX);
undefined1 recovered_203cf60(byte in_CL,uint in_EDX);
undefined4
recovered_203d9b0(uint in_ECX,undefined1 *in_EDX,byte *param_3,ushort *param_4,undefined1 *param_5);
undefined4 recovered_203dc60(void);
undefined4 recovered_203dca0(uint in_ECX,uint in_EDX,undefined1 param_3,byte *param_4);
uint recovered_203e6d0(int in_ECX);
ushort recovered_203e7b0(int in_ECX);
undefined4 recovered_203e880(byte in_CL,byte in_DL,byte param_3,byte *param_4);
undefined4 recovered_203eaa0(int in_ECX,uint in_EDX_00,uint param_3,int *param_4);
undefined4 recovered_203eb60(uint in_ECX,uint in_EDX,uint param_3,uint *param_4);
ulonglong recovered_203ebe0(int in_ECX_00,uint in_EDX,uint param_3);
bool recovered_203ed00(ushort *in_ECX);
undefined4 recovered_203edf0(undefined2 *in_ECX,int in_EDX);
undefined4 recovered_203ef10(void);
undefined4 recovered_203efb0(undefined4 *in_ECX);
bool recovered_203f0b0(int *in_ECX);
uint recovered_203f1b0(int in_ECX);
void recovered_203f2b0(int in_ECX);
undefined4 recovered_203f340(uint in_ECX,uint in_EDX,uint *param_3);
undefined4
recovered_203f3c0(ushort *in_ECX,int in_EDX_00,byte param_3,byte param_4,byte param_5,
                 undefined1 param_6,undefined1 param_7,undefined2 param_8,undefined2 param_9,
                 byte param_10,undefined1 *param_11,ushort param_12);
void recovered_203fad0(undefined1 *in_ECX,undefined4 in_EDX,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5);
uint recovered_203fb40(uint in_ECX);
bool recovered_203fbc0(int in_ECX,int in_EDX);
undefined4 recovered_203fc20(void);
void recovered_203ff70(void);
undefined4 recovered_20400c0(void);
undefined4 recovered_2040270(byte *in_ECX);
undefined4 recovered_2040300(byte *in_ECX,uint in_EDX);
undefined4 recovered_20405c0(uint in_ECX);
undefined4
recovered_2040620(int in_ECX,undefined4 in_EDX,byte param_3,byte param_4,char param_5,
                 undefined1 param_6,ushort param_7);
undefined4 recovered_2040ab0(byte *in_ECX,char param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_2040d00(byte *in_ECX,ulong in_EDX,char param_3,int param_4,uint param_5);
undefined4 recovered_20410a0(uint in_ECX,uint in_EDX,uint param_3);
byte recovered_2041640(void);
undefined4 recovered_2041900(int *in_ECX,int *in_EDX,byte *param_3);
undefined1 recovered_2041b20(int *in_ECX,uint in_EDX,byte *param_3);
uint recovered_2041c20(byte in_CL);
undefined4 recovered_2041d00(char in_CL,uint in_EDX,uint param_3,void *param_4);
undefined4 recovered_2041df0(undefined4 in_ECX,uint in_EDX,int param_3,uint param_4);
uint recovered_20420c0(byte in_CL,uint in_EDX,int param_3,uint param_4);
void recovered_20422a0(undefined **in_ECX_00,int in_EDX);
undefined4 recovered_20425d0(int in_ECX,uint *in_EDX);
bool recovered_2042ab0(int handle,uint lba,int buffer,uint bytes,char write);
undefined4 recovered_2042ce0(void);
undefined4
recovered_2042fe0(undefined4 in_ECX,undefined4 in_EDX,int param_3,uint param_4,byte param_5);
undefined4 recovered_20434b0(ushort in_CX,uint *in_EDX_00,uint *param_3,uint *param_4);
undefined4 recovered_20435c0(byte in_CL);
undefined4 recovered_2043640(int in_ECX,byte *in_EDX);
undefined4 recovered_2043980(char *in_ECX,uint in_EDX,uint *param_3);
undefined4 recovered_2043b10(uint in_ECX,undefined4 in_EDX);
undefined4 recovered_2043d30(int in_ECX);
void recovered_2043e50(int in_ECX,undefined *in_EDX);
void recovered_2044080(uint *param_1,uint param_2);
void recovered_2044280(void);
void recovered_20443b0(int param_1,uint param_2);
undefined4 recovered_20444e0(int in_ECX,char in_DL);
void recovered_2044890(void);
undefined4 recovered_20448e0(int in_ECX,void *in_EDX,ulong param_3);
undefined4 recovered_2044ab0(int *in_ECX,uint in_EDX,int *param_3,char param_4);
undefined4 recovered_2044d60(void);
bool recovered_20450c0(byte *in_ECX);
bool recovered_2045140(byte *in_ECX);
undefined4 recovered_20451c0(uint *in_ECX,uint in_EDX);
undefined4 recovered_2045340(int in_ECX);
undefined8 recovered_20455c0(void);
undefined2 recovered_20455d0(undefined2 *param_1);
undefined4 recovered_20455e0(undefined4 *param_1);
undefined8 recovered_20455f0(undefined8 *param_1);
void recovered_2045610(undefined2 *param_1,undefined2 param_2);
void recovered_2045630(undefined4 *param_1,undefined4 param_2);
void recovered_2045650(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
uint recovered_2045670(byte *param_1,int param_2);
char * recovered_2045750(uint param_1);
undefined4 recovered_2045770(int param_1);
undefined4 recovered_2045e00(byte *in_ECX,uint in_EDX,int *param_3,uint *param_4);
undefined4 recovered_2045f30(short *param_1);
undefined4 recovered_2046210(char *param_1,uint param_2);
int recovered_2046390(void *param_1,byte param_2,void *param_3);
undefined4 recovered_2046680(char *param_1,short *param_2);
undefined8 recovered_20469f0(uint param_1,uint param_2,int param_3);
int recovered_2046a50(undefined4 *param_1,uint param_2,uint param_3,void *param_4,void *param_5);
int recovered_2046bb0(undefined4 *param_1,uint param_2,uint param_3,char *param_4,void *param_5);
int recovered_20470c0(undefined4 *in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,
                     char *param_6,void *param_7);
void recovered_20472b0(undefined4 *param_1,undefined4 *param_2);
void recovered_20472e0(undefined4 *param_1,undefined4 *param_2);
uint32_t recovered_2047310(uint32_t current_low,uint32_t current_high,
                          uint32_t total_low,uint32_t total_high,int entry_address);
undefined4 recovered_2047410(uint param_1,int param_2,void *param_3);
undefined4 recovered_20474f0(int param_1,int param_2,int param_3);
int recovered_2047550(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                     uint param_6,int param_7,int param_8,uint *param_9,uint param_10,uint *param_11
                     );
uint recovered_2047a30(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,
                      uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10
                      ,uint param_11,uint param_12,uint param_13,uint *param_14);
int recovered_2048040(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                     uint param_6);
int recovered_20480e0(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,
                     uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint *param_10
                     ,uint param_11,uint *param_12,uint *param_13);
int recovered_20485b0(int param_1,int param_2);
int recovered_20485f0(char *in_ECX,uint in_EDX);
void recovered_2048700(char *param_1,uint param_2,char *param_3,uint param_4,void *param_5,
                      uint param_6,int *param_7);
int recovered_2048740(char *in_ECX,uint in_EDX,char *param_3,uint param_4,char *param_5,uint param_6
                     ,void *param_7,uint param_8,int *param_9);
int recovered_2048a80(char *param_1,uint param_2,int *param_3,uint *param_4,int *param_5,
                     uint *param_6);
uint recovered_2048d00(char *param_1,uint param_2,char *param_3,uint param_4,void *param_5,
                      uint param_6,int *param_7);
undefined4
recovered_2048d60(int param_1,uint param_2,int param_3,uint param_4,char param_5,uint *param_6);
int recovered_20491b0(byte *param_1,byte *param_2);
int recovered_2049340(byte *param_1,byte *param_2);
int recovered_2049640(int *param_1,undefined4 *param_2,int *param_3,int *param_4);
int recovered_2049800(undefined4 *param_1,undefined4 *param_2,int *param_3);
int recovered_2049b20(undefined4 *in_ECX,undefined4 *in_EDX,int *param_3,uint *param_4);
int recovered_2049c00(short *param_1,uint param_2,void *param_3,uint param_4,int param_5,
                     uint param_6,uint *param_7,undefined4 *param_8);
undefined4 recovered_204a2c0(int *param_1,uint param_2,uint param_3,int *param_4);
int recovered_204a440(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_204a5f0(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_204a790(short *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                     undefined4 param_6,short *param_7);
uint recovered_204a8f0(undefined4 *param_1,uint *param_2,int param_3,void *param_4,void *param_5);
uint recovered_204b0c0(int in_ECX,void *in_EDX);
void recovered_204b1b0(int in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,
                      undefined4 param_6,undefined4 param_7);
int recovered_204b230(undefined4 *in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                     uint param_6,uint param_7,int param_8);
void recovered_204b390(undefined4 *param_1,uint *param_2,void *param_3,void *param_4);
undefined4 recovered_204b3c0(int *param_1,undefined4 *param_2);
int recovered_204b470(undefined4 *param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5);
int recovered_204b660(undefined4 *in_ECX,uint in_EDX,uint param_3,int param_4,uint *param_5);
int recovered_204bbe0(undefined4 *param_1,uint param_2,uint param_3,char param_4,int *param_5,
                     undefined *param_6,undefined4 param_7);
int recovered_204bd90(undefined4 *in_ECX,uint in_EDX,uint param_3,int *param_4,uint *param_5);
int recovered_204c200(undefined4 *param_1,undefined4 param_2,uint param_3,char *param_4,uint param_5
                     ,int *param_6,int param_7,undefined4 param_8);
int recovered_204c2b0(int *param_1,undefined4 *param_2,void *param_3,undefined1 *param_4);
int recovered_204c350(undefined4 *param_1,char *param_2,uint param_3,int *param_4,void *param_5);
int recovered_204c660(undefined4 *param_1,byte *param_2,uint param_3,uint param_4,int param_5,
                     uint param_6,int *param_7,uint *param_8);
void recovered_204c8a0(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_204c8d0(int *param_1,undefined4 *param_2);
int recovered_204c9b0(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,
                     void *param_5);
int recovered_204cc40(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,int *param_5,
                     void *param_6);
int recovered_204d220(undefined4 *in_ECX,uint in_EDX,uint param_3,int param_4,uint param_5,
                     int *param_6,int *param_7,int *param_8);
void recovered_204d6f0(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
void recovered_204d720(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
int recovered_204d750(undefined4 *param_1,int param_2,byte *param_3,int param_4);
int recovered_204d800(undefined4 *param_1,undefined4 param_2,uint param_3,char *param_4,uint param_5
                     ,int *param_6);
int recovered_204db00(undefined4 *in_ECX,char *in_EDX,int *param_3);
int recovered_204dc60(undefined4 *param_1,undefined4 param_2,uint param_3,byte *param_4,int *param_5
                     ,void *param_6);
int recovered_204de00(int param_1,int param_2,uint param_3,int param_4,undefined4 *param_5,
                     uint *param_6);
undefined4 recovered_204e120(int param_1,undefined4 *param_2,uint *param_3);
undefined1
recovered_204e3f0(int param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,char param_6,int param_7);
void recovered_204e510(undefined1 *param_1,int param_2);
void recovered_204e540(int param_1,uint param_2,int param_3);
void recovered_204e660(uint *in_ECX);
void recovered_204e760(int param_1,uint param_2,int param_3,uint param_4,int param_5);
void recovered_204e850(undefined4 *in_ECX,int in_EDX,uint param_3);
void recovered_204efd0(uint *in_ECX);
undefined4
recovered_204f170(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6
                 ,int param_7,uint param_8);
undefined4
recovered_204f700(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8,uint param_9,uint param_10,uint param_11,uint param_12,
                 byte *param_13);
void recovered_20504a0(int in_ECX,undefined1 *in_EDX,uint param_3);
void recovered_2050630(int in_ECX,int in_EDX);
void recovered_2050700(undefined1 *in_ECX,uint in_EDX,byte *param_3,uint param_4);
void recovered_2050c30(int param_1,int param_2,byte *param_3);
void recovered_2050ca0(uint *in_ECX,uint *in_EDX);
void recovered_2050dc0(undefined4 *in_ECX,byte *in_EDX,byte *param_3);
void recovered_2051600(int param_1,int param_2,byte *param_3);
void recovered_2051670(undefined4 *in_ECX,byte *in_EDX,byte *param_3);
undefined4 recovered_2051d20(int param_1,int param_2,uint param_3,byte *param_4,int param_5);
undefined4
recovered_2052070(int param_1,undefined1 *param_2,int param_3,undefined1 *param_4,uint param_5);
void recovered_2052470(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5);
undefined4
recovered_20524a0(uint *in_ECX,undefined4 in_EDX,undefined4 param_3,int param_4,uint param_5,
                 char param_6);
void recovered_2052ac0(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5);
int recovered_2052af0(int *param_1,int param_2,int param_3,uint param_4);
bool recovered_2052db0(char *in_ECX);
int recovered_2052ed0(int *in_ECX,int in_EDX,uint param_3,int param_4,byte *param_5,int param_6);
void recovered_2052fd0(int in_ECX);
bool recovered_2053160(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5);
void recovered_20531c0(undefined1 *param_1);
undefined4 recovered_2053230(int *param_1,undefined4 *param_2);
int recovered_20532a0(int *param_1,int param_2,int param_3,uint param_4,char *param_5,
                     undefined1 *param_6);
undefined4
recovered_2053540(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4
recovered_20535a0(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
int recovered_2053600(int *param_1,int param_2,int param_3,uint param_4,char *param_5,
                     undefined4 *param_6);
void recovered_2053eb0(undefined4 param_1,undefined1 *param_2,int param_3);
int recovered_2053ee0(int *param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
                     char *param_7,undefined4 *param_8);
void recovered_2054c70(uint *in_ECX,int in_EDX);
void recovered_2054e80(uint *in_ECX,int in_EDX,char param_3);
void recovered_20557b0(undefined1 *in_ECX,int in_EDX,uint param_3);
void recovered_20558e0(int in_ECX,int in_EDX,int param_3,char param_4);
void recovered_2055d40(uint *in_ECX);
int recovered_20565f0(int *in_ECX,int in_EDX,uint param_3,int param_4,undefined1 *param_5,
                     int param_6,undefined1 *param_7,undefined1 *param_8);
int recovered_2056a80(undefined1 *param_1,undefined1 *param_2,char *param_3,uint param_4,int param_5
                     ,int param_6);
int recovered_2056be0(int param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined1 *param_6);
undefined4 recovered_2056d40(int in_ECX);
undefined1 recovered_2056ec0(char *in_ECX);
undefined4 recovered_2056f80(uint param_1,int *param_2);
int recovered_2056fc0(byte *param_1,byte *param_2,uint param_3,uint *param_4);
int recovered_2057420(byte *param_1,uint param_2,byte *param_3,int param_4,uint param_5,
                     undefined1 *param_6);
undefined4 recovered_20578b0(char *in_ECX,uint *in_EDX);
undefined1 recovered_2057930(int in_ECX);
void recovered_20579f0(undefined4 *in_ECX,undefined4 *in_EDX);
int recovered_2057ac0(int param_1,int param_2,int param_3,int param_4,int param_5);
int recovered_2057b50(char *param_1,int param_2,int param_3);
int recovered_2057da0(char *param_1,uint param_2,int *param_3);
int recovered_2057e30(int *param_1,undefined4 *param_2,uint param_3,byte param_4,undefined4 param_5,
                     undefined4 param_6,int *param_7);
int recovered_20581c0(void *in_ECX,char *in_EDX,undefined1 *param_3);
int recovered_2058310(int *in_ECX,void *in_EDX);
int recovered_2058420(int in_ECX,int in_EDX);
int recovered_20584d0(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_2058520(int *in_ECX,undefined4 in_EDX,undefined4 param_3,void *param_4);
undefined4 recovered_20585a0(int *in_ECX);
int recovered_2058620(int *param_1,undefined4 *param_2,uint param_3,byte *param_4,int *param_5);
void recovered_2059010(void *in_ECX,int in_EDX);
int recovered_20590d0(int *in_ECX,void *in_EDX);
int recovered_2059280(int in_ECX,int in_EDX);
int recovered_2059370(int in_ECX,int in_EDX,char param_3,void *param_4);
undefined4 recovered_2059720(int *param_1);
int * recovered_20597a0(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4);
int recovered_205a240(int *in_ECX,void *in_EDX);
int recovered_205a660(int *in_ECX,uint in_EDX,undefined4 param_3,undefined4 param_4,void *param_5,
                     uint *param_6);
void recovered_205a750(int in_ECX);
undefined1 recovered_205a7f0(int param_1);
byte recovered_205a820(int *param_1);
int recovered_205a850(int param_1,int param_2,uint param_3,byte param_4,int *param_5,
                     undefined4 *param_6);
int recovered_205a930(char *in_ECX,uint in_EDX,undefined1 *param_3,uint param_4,uint *param_5);
int recovered_205ab60(int in_ECX,int in_EDX,uint param_3,byte param_4,int *param_5,
                     undefined4 *param_6);
int recovered_205b240(int param_1,int *param_2,uint param_3,uint param_4,int param_5,uint param_6,
                     int *param_7,uint *param_8);
int recovered_205b330(int param_1,int *param_2,int *param_3,undefined *param_4,undefined4 param_5);
uint recovered_205b410(int param_1,char *param_2,undefined4 param_3,int param_4,int *param_5,
                      void *param_6);
int recovered_205b580(int in_ECX,char *in_EDX,uint param_3,int *param_4,int *param_5);
void recovered_205b700(undefined1 *in_ECX,undefined4 in_EDX,undefined4 param_3,undefined1 *param_4);
void recovered_205b780(int *in_ECX,int in_EDX);
uint recovered_205b870(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                      undefined4 param_5,undefined4 param_6,int *param_7,void *param_8);
uint recovered_205b8e0(int param_1,char *param_2,undefined4 param_3,int param_4,int *param_5,
                      void *param_6);
int recovered_205ba50(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int recovered_205bd70(int in_ECX,uint param_2,int *param_3,uint *param_4);
int recovered_205c360(int in_ECX,int *in_EDX);
int recovered_205c550(int in_ECX,int *in_EDX);
uint recovered_205d270(int param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5
                      ,undefined4 param_6,undefined4 param_7,int *param_8);
int recovered_205d520(int in_ECX,char *in_EDX,undefined4 param_3,int *param_4,undefined4 *param_5,
                     byte *param_6);
bool recovered_205d6b0(int in_ECX,char *in_EDX,uint param_3,char *param_4,uint param_5);
int recovered_205d830(int in_ECX,uint in_EDX,uint param_3,int param_4,uint param_5,int *param_6,
                     undefined4 *param_7);
uint recovered_205dab0(int param_1,char *param_2,undefined4 param_3,int *param_4,int *param_5);
undefined4
recovered_205dcc0(int in_ECX,undefined1 *in_EDX,undefined4 *param_3,int param_4,int param_5,
                 char param_6,void *param_7,uint param_8,int *param_9);
int recovered_205df10(int *param_1,int *param_2,undefined4 *param_3);
int recovered_205e060(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5);
int recovered_205e270(int *param_1,int *param_2,int *param_3,undefined1 *param_4);
int recovered_205e620(int *param_1,int *param_2);
undefined4
recovered_205e7b0(short *in_ECX,uint in_EDX,uint param_3,char param_4,char *param_5,
                 undefined1 *param_6);
int recovered_205ead0(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_205ebf0(int *param_1,uint param_2,uint param_3,void *param_4);
undefined4 recovered_205eda0(int *in_ECX,int in_EDX,int *param_3);
undefined4
recovered_205ee20(void *in_ECX,uint in_EDX,uint param_3,uint param_4,char *param_5,uint param_6,
                 void *param_7,uint param_8,uint *param_9);
int recovered_205ef90(undefined4 *in_ECX,uint in_EDX,uint param_3,int *param_4,uint *param_5);
int recovered_205f3f0(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_205f440(uint *param_1);
undefined4 recovered_205f480(uint *param_1,uint *param_2,void *param_3,undefined1 *param_4);
void recovered_205f510(int *param_1,uint param_2,uint param_3,undefined4 *param_4);
void recovered_205f540(int *param_1,uint param_2,uint param_3,undefined4 *param_4);
char * recovered_205f570(uint param_1);
char recovered_205f590(int param_1,uint param_2,uint param_3,int *param_4,void *param_5,int *param_6
                      );
undefined4 recovered_205fc10(int *in_ECX,int in_EDX,uint param_3,int *param_4,undefined4 *param_5);
uint recovered_205fd60(int in_ECX,int in_EDX);
void recovered_205fdf0(int *in_ECX,int in_EDX,undefined4 *param_3);
void recovered_205fe90(undefined4 *in_ECX,uint in_EDX);
int recovered_205ff80(undefined4 *param_1,int param_2,int *param_3,char *param_4,int *param_5,
                     int *param_6,int *param_7);
undefined4
recovered_20620e0(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint *param_9,uint *param_10);
undefined4 recovered_20624e0(int in_ECX,int in_EDX,int param_3);
undefined4 recovered_2062570(int in_ECX,int in_EDX,int *param_3,int param_4,int *param_5);
char recovered_2062a30(int in_ECX,uint in_EDX,uint param_3,undefined4 *param_4,int *param_5,
                      int param_6,int *param_7);
uint recovered_2062f60(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5,
                      int *param_6);
int recovered_2062f90(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                     int *param_7,void *param_8,uint *param_9);
undefined4 recovered_2063610(int in_ECX,int in_EDX,int param_3,undefined4 *param_4,int *param_5);
int recovered_2063a10(undefined4 *in_ECX,int in_EDX,int param_3);
char recovered_20648d0(undefined4 *in_ECX,int in_EDX,int param_3,int *param_4);
int recovered_2064c70(int in_ECX,int in_EDX,undefined4 *param_3,void *param_4,int *param_5);
int recovered_2065030(undefined4 *in_ECX,int in_EDX,int param_3);
undefined4 recovered_2065c10(int in_ECX,int in_EDX,int param_3,undefined4 *param_4,int *param_5);
void recovered_2065f90(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,
                      void *param_7,uint *param_8);
bool recovered_2065fc0(int *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
bool recovered_20660b0(int *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
undefined4 recovered_20661a0(int *param_1);
bool recovered_20661d0(undefined4 *in_ECX,uint in_EDX,uint param_3,void *param_4,uint param_5,
                      int param_6,uint param_7);
bool recovered_2066390(undefined4 *in_ECX,uint in_EDX,uint param_3,void *param_4,uint param_5,
                      void *param_6,uint param_7);
int recovered_2066580(undefined4 *in_ECX,int in_EDX,int param_3,undefined4 *param_4);
undefined4 recovered_20668c0(undefined4 *in_ECX,int in_EDX,undefined4 *param_3);
char recovered_2066a50(undefined4 *in_ECX,uint in_EDX,uint param_3,char *param_4,uint param_5,
                      uint *param_6);
undefined4
recovered_2066ee0(undefined4 *in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,
                 byte *param_6,uint param_7,uint *param_8);
uint recovered_2067110(byte *in_ECX,int in_EDX);
undefined4 recovered_20671e0(char *in_ECX,uint in_EDX);
undefined4
recovered_20672c0(undefined4 *in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,
                 char *param_6,uint param_7,undefined1 *param_8);
char recovered_2067420(undefined4 *in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,
                      void *param_6,int param_7,uint param_8);
void recovered_20674c0(uint *in_ECX,uint in_EDX);
uint recovered_20675a0(char *in_ECX,uint in_EDX);
bool recovered_2067650(int in_ECX,uint in_EDX);
undefined4 recovered_20676d0(int *in_ECX,int in_EDX);
undefined4
recovered_2067860(undefined4 *in_ECX,uint in_EDX,int param_3,uint param_4,uint param_5,int param_6);
char recovered_20678f0(undefined4 *in_ECX,uint in_EDX,uint param_3,int param_4,void *param_5,
                      int param_6);
int recovered_20679a0(undefined4 *in_ECX,int in_EDX,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,int param_10);
int recovered_2067b90(undefined4 *in_ECX,int in_EDX,undefined4 param_3,int param_4);
int recovered_2067d60(undefined4 *in_ECX,undefined4 in_EDX,undefined4 param_3,int param_4,
                     int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                     int param_13);
int recovered_2067f00(undefined4 *in_ECX,int in_EDX,int param_3);
ulong recovered_20681a0(char *param_1,int param_2);
void recovered_2068330(void);
void recovered_20683c0(void);
void recovered_2068440(char *param_1,undefined1 *param_2);
void recovered_20684a0(void);
void recovered_20684f0(void);
bool recovered_2068540(int param_1,int param_2,undefined4 param_3,undefined1 param_4);
undefined4 recovered_2068630(void);
void recovered_2068640(void);
undefined1 recovered_2068650(void);
undefined4 * recovered_2068660(char *param_1,char *param_2);
void recovered_20689f0(char *param_1,char *param_2,int *param_3);
undefined4 recovered_2068ae0(int *param_1);
uint recovered_2068bb0(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_2068cc0(int *param_1);
int recovered_2068e70(char *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_2068fe0(int *param_1,uint param_2,int param_3);
undefined4 recovered_2069070(int param_1);
undefined4 recovered_20690a0(int *param_1);
undefined1 recovered_2069150(int param_1);
undefined1 recovered_2069170(int param_1);
void recovered_2069190(int param_1);
uint recovered_20691c0(uint param_1,int param_2);
undefined4 recovered_2069200(int param_1);
undefined4 recovered_2069280(int param_1,int param_2);
undefined4 recovered_20693f0(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_20694d0(int param_1,int param_2,int param_3);
undefined4 recovered_2069550(void);
void recovered_2069560(void);
undefined4 recovered_2069570(void);
undefined4 recovered_2069580(void);
undefined4 recovered_2069590(void);
int recovered_20695a0(char *left,char *right,ulong count);
char * recovered_20695f0(undefined4 param_1);
undefined4 recovered_2069650(void);
undefined4 recovered_2069660(void);
int recovered_2069670(void);
__attribute__((naked,noreturn)) void recovered_2069690(void *context);
__attribute__((naked,returns_twice)) int recovered_20696a0(void *context);
__attribute__((naked,noreturn)) void recovered_20696f0(void *context,int value);
void recovered_2069730(void);
undefined4 recovered_20697a0(void);
void recovered_20697b0(void);
void recovered_20697d0(void);
void * recovered_2069810(int param_1);
void * recovered_2069840(int param_1);
void recovered_2069870(void *param_1);
void recovered_2069900(void *param_1);
void recovered_2069990(void *param_1);
void recovered_2069a20(void *param_1);
undefined4 recovered_2069ab0(void);
uint recovered_2069ac0(uint *param_1);
void recovered_2069ae0(byte *param_1);
void recovered_2069af0(void);
undefined1 * recovered_2069b00(int param_1);
void recovered_2069ba0(int param_1);
uint recovered_2069c00(int in_ECX);
int recovered_2069c40(int in_ECX);
void recovered_2069c50(void);
void recovered_2069ce0(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_2069d20(int in_ECX);
void recovered_2069da0(void);
void recovered_2069de0(undefined4 *param_1);
void recovered_2069e00(undefined4 *param_1);
void recovered_2069e40(int in_stack_00000004);
void recovered_2069e60(void);
void recovered_2069e70(int exception);
void recovered_2069ed0(int in_ECX);
void recovered_2069f70(int param_1);
undefined4 recovered_2069f90(void);
void recovered_2069fa0(void);
int recovered_2069fb0(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_206a080(void);
undefined4 recovered_206a0a0(void);
int recovered_206a0b0(int value);
int recovered_206a0d0(int value);
int recovered_206a110(int value);
bool recovered_206a140(undefined4 param_1,uint param_2);
bool recovered_206a160(uint param_1);
byte recovered_206a180(undefined4 param_1,undefined4 param_2,ushort param_3);
bool recovered_206a1c0(undefined4 param_1,uint param_2);
double recovered_206a1e0(double value);
float recovered_206a2d0(float value);
longdouble recovered_206a3c0(longdouble param_1);
longdouble recovered_206a4b0(int param_1,int param_2);
double recovered_206a4e0(double value);
ulonglong recovered_206a530(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_206a670(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_206a690(int in_ECX,byte *in_EDX,undefined2 *param_3);
byte * recovered_206aa10(uint in_ECX,int *in_EDX);
int recovered_206ab30(char *param_1,uint param_2);
undefined4 recovered_206abd0(byte *in_ECX,uint in_EDX);
unsigned char recovered_206ad50(const void *data,uintptr_t size,void *image);
uint recovered_206d320(uint *in_ECX,int *in_EDX,int *param_3);
uint recovered_206d740(uint *in_ECX,int *param_2,int *param_3);
void recovered_206eda0(int in_ECX);
uint recovered_206ee30(char *param_1,uint *param_2);
byte recovered_206f0c0(char *param_1,int param_2,uint param_3,uint param_4);
bool recovered_206fd50(uint *in_ECX,char *in_EDX,char *param_3,uint param_4);
void recovered_206fe10(char *param_1,int param_2,uint param_3,uint param_4);
undefined4 recovered_206fe40(char *param_1,int param_2,uint param_3,uint param_4);
undefined4 recovered_20701f0(char *param_1,int param_2,int param_3,int param_4);
undefined4 recovered_20704a0(char *param_1,int param_2,uint param_3,uint param_4);
uint * recovered_2071e90(char *param_1);
void recovered_2072040(void *param_1);
void recovered_2072080(int *param_1,uint param_2,undefined1 *param_3);
void recovered_2072110(int *param_1,uint param_2);
uint recovered_20721a0(uint in_ECX,uint in_EDX);
undefined4 recovered_2072230(undefined4 *in_ECX,ushort *in_EDX);
undefined8 recovered_2072460(int in_ECX,uint in_EDX,uint *param_3,int param_4);
undefined4 recovered_2072680(int in_ECX,uint in_EDX,uint *param_3,uint param_4,uint *param_5);
void recovered_20726f0(int *param_1,undefined4 *param_2);
void recovered_2072790(int *param_1,uint param_2,undefined1 *param_3);
bool recovered_2072820(int in_ECX,uint in_EDX,int param_3,uint param_4,int param_5,uint *param_6);
undefined4 recovered_2072c00(int in_ECX,uint in_EDX,int param_3,uint *param_4,int *param_5);
void recovered_2073570(byte *in_ECX,byte *in_EDX);
void recovered_2073680(undefined4 *param_1,uint param_2);
undefined4 recovered_2073720(int in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5);
undefined4 recovered_2073a50(int in_ECX,uint in_EDX,int param_3);
int recovered_2073b90(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
undefined4 recovered_2073cb0(int *in_ECX,int *in_EDX,uint param_3);
undefined4 recovered_2075340(int *in_ECX,uint in_EDX,uint *param_3);
undefined4 recovered_2075430(int *in_ECX,int in_EDX,int param_3,int *param_4,uint param_5);
void recovered_2075a70(int param_1);
void recovered_2075aa0(void);
undefined1 recovered_2075db0(int *in_ECX,int *in_EDX,byte param_3);
void recovered_20761e0(void);
void * recovered_2076450(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
uint recovered_2076580(int param_1);
void recovered_20766a0(int *in_ECX,undefined4 *in_EDX);
void recovered_20768c0(int *in_ECX,undefined4 *in_EDX);
void recovered_2076960(int *in_ECX,undefined4 *in_EDX);
undefined4 recovered_2076a00(int *in_ECX,int *in_EDX,uint param_3);
undefined4
recovered_2076b60(undefined4 in_ECX,void *in_EDX,void *param_3,int param_4,uint param_5,uint param_6
                 );
pf_font_handle110 * recovered_2076dd0(void *data,ulong length,float size);
pf_font_handle110 * recovered_2077420(char *path,float size);
void recovered_20776a0(pf_font_handle110 *font,float size);
uint recovered_20776d0(pf_font_handle110 *font,uchar *text,int *metrics);
pf_glyph *recovered_2077d70(pf_font_handle110 *font,unsigned glyph);
pf_u32_vector * recovered_20782f0(pf_u32_vector *out,char *text);
pf_font_cache110 * recovered_2078720(pf_font_handle110 *font);
void recovered_2078850(int *in_ECX,uint in_EDX);
void recovered_20789c0(int in_ECX);
void * recovered_2078b40(pf_font_handle110 *font,char *text,int red,int green,int blue,
                        double opacity);
pf_layout * recovered_20797e0(pf_layout *out,pf_font_handle110 *font,pf_u32_vector *text);
void recovered_2079e40(int *in_ECX);
void recovered_2079ea0(int *param_1);
void recovered_2079f00(int *param_1);
void recovered_207a110(undefined4 *param_1);
void recovered_207a1f0(undefined4 *param_1);
uint recovered_207a2e0(int param_1,int *param_2);
pf_glyph * recovered_207aad0(pf_glyph *out,void *backend,uint glyph,double scale);
double recovered_207b030(void *backend);
double recovered_207b050(void *backend);
double recovered_207b070(void *backend);
double recovered_207b0a0(void *backend);
undefined4 recovered_207b0d0(void);
undefined4 recovered_207b0e0(int in_ECX,uint in_EDX,undefined4 *param_3);
int recovered_207b1c0(int in_ECX);
uint recovered_207b450(int in_ECX);
uint recovered_207b890(void *backend,uint glyph,double *matrix,long *outline,uint depth);
pf_glyph *recovered_207cd60(double advance,int *destination,long *outline);
int recovered_207d4a0(int *param_1,byte *param_2);
void recovered_207d6c0(int *param_1,uint param_2);
void recovered_207d890(undefined4 *param_1,uint param_2);
void recovered_207d930(int *in_ECX,int in_EDX,undefined4 *param_3);
int recovered_207da40(int *param_1,int param_2,undefined1 *param_3);
void recovered_207db00(long *outline,double *point);
void recovered_207ddf0(long *outline,double *point);
void recovered_207e000(long *outline);
void recovered_207e190(long *outline,double *first,double *control,double *last,int depth);
void recovered_207e290(undefined4 *param_1);
void recovered_207e3b0(undefined4 *param_1);
byte * recovered_207e3e0(int param_1,int *param_2);
int * recovered_207fdd0(int *param_1,byte *param_2,uint param_3,undefined8 param_4);
longdouble recovered_20806b0(int param_1);
longdouble recovered_20806c0(int param_1);
longdouble recovered_20806d0(int param_1);
longdouble recovered_20806e0(void);
undefined4 recovered_20806f0(void);
void recovered_2080700(undefined4 *param_1);
void recovered_2080720(int *param_1,int param_2,uint param_3);
void recovered_2080890(int *param_1,uint param_2);
undefined4 * recovered_20809d0(undefined4 *in_ECX,undefined4 *in_EDX,uint param_3);
int recovered_2080c20(int *param_1,undefined4 *param_2);
void recovered_2080f70(int *param_1,uint param_2);
void recovered_2081140(int *param_1,uint param_2);
int recovered_2081240(int *in_ECX_00,int *in_EDX,int param_3);
void recovered_20817d0(int *in_ECX,uint in_EDX);
uint recovered_20819a0(byte *param_1,uint *param_2,undefined4 *param_3);
uint recovered_2081ea0(char *param_1,void *param_2,uint param_3,uint param_4,uint param_5,
                      undefined4 param_6);
undefined4 recovered_2082150(void *param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined4 * recovered_2082400(int param_1,uint param_2,float param_3);
void recovered_20824b0(int *param_1,float param_2);
undefined4
recovered_2082560(int *param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 *param_7);
bool recovered_2082880(int *param_1,char *param_2,int *param_3);
void recovered_2082a20(int *param_1);
undefined4
recovered_2082ac0(void *in_ECX,uint in_EDX,uint param_3,ulong param_4,undefined4 *param_5);
undefined4 recovered_2082b80(void *param_1,uint param_2,void **param_3,ushort *param_4);
void recovered_2083390(int *param_1,uint param_2);
longdouble recovered_2083420(uint3 *param_1,short param_2,ushort param_3);
undefined4 recovered_2083570(undefined4 param_1,undefined4 param_2);
undefined4 recovered_20835a0(char *param_1,undefined4 *param_2);
undefined4 recovered_2083750(undefined4 param_1);
undefined4 recovered_2083780(undefined4 param_1,undefined4 param_2);
void recovered_20837b0(uint param_1);
undefined4 recovered_20838f0(void);
void recovered_2083a40(void *caller);
uint recovered_2083b80(ulong in_ECX);
void recovered_2083be0(undefined4 *in_ECX,int in_EDX);
void recovered_2083cc0(void *in_ECX);
uint recovered_2083d20(undefined1 *param_1,int param_2);
char recovered_2083ec0(void);
undefined4 recovered_2083fd0(void *param_1);
undefined4 recovered_20841c0(void);
void * recovered_20845c0(void *channel,uchar *handled);
void recovered_20846c0(int in_ECX);
uint recovered_2084700(uint backgroundRgb,uint foregroundRgb,uint textModeAttribute);
void recovered_2084aa0(void);
uint recovered_2084ec0(uint ch);
undefined4 recovered_2085130(int in_ECX,uint in_EDX,uchar *param_3);
uint recovered_2085210(char *text);
uint recovered_20854c0(void);
undefined4 recovered_2085b20(void);
uint recovered_2085c20(void);
undefined4 recovered_2085e30(int in_ECX);
void recovered_2086230(int in_ECX);
uint recovered_20862f0(void);
void recovered_2086400(void);
uint recovered_20864d0(void);
void recovered_20867e0(void);
void recovered_20868c0(const char *format,...);
uint recovered_20869a0(char *path,void *outInfo);
undefined4 recovered_2086a50(char *param_1,undefined1 *param_2);
undefined4 recovered_2086b60(int param_1,int param_2);
uint recovered_2086c80(char *path,void *data,uint size);
uint recovered_2086d60(int param_1,byte *param_2,byte *param_3);
undefined4 recovered_2087910(char *param_1);
bool recovered_2087a40(void);
uint recovered_208a610(char *outText,uint outTextSize);
undefined4 recovered_208a680(uint param_1,char *param_2,uint param_3,int param_4,uint param_5);
bool recovered_208a7e0(void *param_1,uint param_2,int param_3,undefined4 *param_4);
undefined4 recovered_208a8d0(undefined4 *param_1);
bool recovered_208a980(int param_1);
uint recovered_208aa40(char *text,uint textSize);
uint recovered_208aaa0(char *outText,uint outTextSize);
uint recovered_208ac30(void);
uint recovered_208acc0(char *path);
uint recovered_208ad30(char *param_1);
uint recovered_208bc00(char *path,void *outImage);
undefined4 recovered_208bd60(int in_ECX,char in_DL,int param_3,uint *param_4);
void recovered_208c140(int *in_ECX);
uint recovered_208c200(char *path,void *rgbaPixels,uint width,uint height,uint stride,uint format);
uint recovered_208c2b0(char *path,uint outputChannels,void *outPcm);
undefined4 recovered_208c3a0(int param_1,undefined4 *param_2,undefined4 *param_3);
void * recovered_208c440(char *path,float fontSize);
undefined4 recovered_208c520(byte *param_1);
void recovered_208c6a0(byte *param_1);
uint recovered_208c6c0(char *param_1,ulong param_2,byte *param_3,int param_4);
uint recovered_208c750(char *buffer,ulong capacity,char *prompt,uint flags,uchar *handled);
undefined4
recovered_208caa0(char *param_1,ulong param_2,byte *param_3,byte param_4,char param_5,char param_6,
                 char param_7);
uint recovered_208d8a0(char *param_1,ulong param_2,byte *param_3,uint param_4);
void * recovered_208d940(ulong size);
void recovered_208d970(void *ptr);
void * recovered_208da30(void *ptr,ulong size);
uint recovered_208db40(char *path,void *entries,uint entryCapacity,uint *outEntryCount);
undefined4 recovered_208e0c0(int in_ECX,undefined1 *in_EDX);
undefined4 recovered_208e570(int param_1);
undefined1 recovered_208eba0(int in_ECX);
void recovered_208ebe0(char *in_ECX,char *in_EDX);
undefined4 recovered_208ee90(int in_EDX,uint param_2,uint *param_3);
bool recovered_208f180(char *in_ECX,int in_EDX,int *param_3);
undefined4 recovered_208f270(int *in_ECX,void *in_EDX,ulong param_3);
undefined4 recovered_208f470(char *in_ECX,char *in_EDX,char *param_3);
undefined4 recovered_208f570(char *in_ECX,char *in_EDX,byte param_3,undefined4 param_4,uint param_5);
uint recovered_208f6f0(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,int *param_6,undefined4 *param_7);
undefined4 recovered_208fbc0(int *param_1);
undefined4
recovered_208fd80(int *in_ECX,uint in_EDX,char *param_3,byte param_4,undefined4 param_5,uint param_6
                 );
int recovered_208ff90(void);
undefined4 recovered_208fff0(int param_1,int *param_2);
uint recovered_20902f0(void *entries,uint entryCapacity,uint *outEntryCount);
undefined4 recovered_20905d0(void);
void recovered_2091e90(char *param_1,int param_2,char *param_3,uint param_4);
char * recovered_2091f70(int param_1);
undefined4
recovered_2091fa0(int param_1,uint param_2,int param_3,uint param_4,uint *param_5,uint *param_6);
uint recovered_2092300(int deviceId);
uint recovered_2092370(int deviceId,char *path,void *outInfo);
void recovered_2092480(int param_1,int param_2,uint *param_3);
undefined4 recovered_20924c0(int in_ECX,int in_EDX,int param_3,uint *param_4);
void recovered_2092680(int param_1,int param_2,uint *param_3);
uint recovered_20926c0(int deviceId,char *path,void *entries,uint entryCapacity,uint *outEntryCount);
byte recovered_2092740(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,int *param_7,undefined4 *param_8);
uint recovered_20927c0(int deviceId,char *path,void *data,uint size);
uint recovered_20928a0(int deviceId,char *path);
uint recovered_2092910(int deviceId,char *oldPath,char *newPath);
uint recovered_2092980(int in_ECX,byte *in_EDX);
uint recovered_2093140(int deviceId,char *path);
undefined4 recovered_2093260(char *param_1,undefined1 *param_2,uint param_3);
uint recovered_2093460(char *param_1);
uint recovered_2093900(int deviceId,char *path,void *outImage);
uint recovered_2093970(int deviceId,char *path,void *rgbaPixels,uint width,uint height,uint stride,
                      uint format);
void * recovered_20939f0(int deviceId,char *path,float fontSize);
uint recovered_2093a80(int deviceId,char *path,uint launchMode);
undefined4 recovered_2093ba0(char *in_ECX,int *in_EDX,undefined4 *param_3);
uint recovered_2093d70(char *path,uint launchMode);
void recovered_2094860(void *in_ECX,char *in_EDX,char *param_3);
uint recovered_20949c0(char *oldPath,char *newPath);
uint recovered_2094bc0(char *path);
uint recovered_2094c50(void *function,void *context,char *name);
void recovered_2094d00(const char *format,...);
uint recovered_2094d50(void *function,void *context,char *name,uint priority);
uint recovered_2094e10(uint priority,uint threadCount);
uint recovered_2094fb0(void);
void recovered_2094ff0(void);
void recovered_20950b0(void);
uint recovered_20951d0(uint microseconds);
uint recovered_2095290(void);
uint recovered_20952d0(void *outInfo);
int recovered_2095310(void);
undefined4 recovered_2095520(uint *in_ECX);
uint recovered_2095870(void *devices,uint deviceCapacity,uint *outDeviceCount);
void recovered_20959e0(void);
undefined4 recovered_2097170(uint param_1);
int recovered_20971e0(void);
undefined4 recovered_2097250(int param_1,undefined4 *param_2);
void recovered_2097b10(void);
undefined4 recovered_2097b70(uint param_1,uint *param_2);
void recovered_2097da0(byte in_CL);
uint recovered_20988c0(void *outInfo);
void recovered_2098900(undefined4 *in_ECX);
uint recovered_20989c0(uint epochSecondsLow,uint epochSecondsHigh);
uint recovered_2098a50(void *processes,uint processCapacity,uint *outProcessCount);
void recovered_20991b0(void);
uint recovered_20991d0(uint processId);
uint recovered_2099200(void *outStats);
void recovered_20993e0(void);
longlong recovered_2099400(void);
longlong recovered_20998a0(void);
void recovered_20999a0(void);
uint recovered_20999c0(int deviceId,void *outStats);
int recovered_2099d80(int param_1);
undefined4 recovered_2099e10(int param_1,void *param_2,uint param_3);
undefined4 recovered_209a740(int param_1,int *param_2);
undefined4 recovered_209aa40(undefined4 *param_1,uint param_2,uint *param_3);
undefined4 recovered_209aae0(void);
void recovered_209ad60(void);
uint recovered_209ae60(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
uint recovered_209af70(uint drive,uint sector,void *buffer,ulong count);
uint recovered_209b8d0(int param_1,uint param_2,int param_3,void *param_4,uint param_5);
uint recovered_209ba40(byte param_1);
void recovered_209bd50(uint param_1,uint param_2,void *param_3,uint param_4);
void recovered_209bd80(char param_1,uint param_2,uint param_3);
uint recovered_209bfa0(void *outInfo);
uint recovered_209c160(void *buffer,uint capacity,uint *outFrameBytes);
undefined4 recovered_209c330(int *in_ECX,undefined4 in_EDX,uint param_3,undefined4 *param_4);
void recovered_209c560(uint *in_ECX);
uint recovered_209c750(void *pf_argument_frame,uint frameBytes);
undefined4 recovered_209c8d0(void);
undefined4 recovered_209c950(void);
undefined4 recovered_209c9d0(undefined4 param_1,int param_2);
undefined4 recovered_209ca50(undefined4 param_1);
undefined4 recovered_209cae0(void);
undefined4 recovered_209cb60(int param_1);
uint recovered_209cbd0(void *outInfo);
uint recovered_209cd10(void *commands,uint commandCount);
uint recovered_209ce70(char *title,uint width,uint height);
undefined4 recovered_209d4a0(int in_ECX,char *in_EDX);
void recovered_209d5f0(void *in_ECX);
uint recovered_209d720(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                      uint clearRgb);
undefined4
recovered_209d7c0(int in_ECX_01,char *in_EDX,void *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7);
undefined4 recovered_209d9a0(int param_1,int param_2,uint *param_3);
uint recovered_209dc90(uint id);
uint recovered_209dd40(void *windows,uint windowCapacity,uint *outWindowCount);
void recovered_209de20(int in_ECX,undefined4 *in_EDX);
uint recovered_209df70(uint id,int x,int y,uint flagMask,uint flagValues);
uint recovered_209e040(uint id,uint transparency,uint shadowIntensity);
uint recovered_209e110(uint id,uint mode,uint effectRange);
uint recovered_209e1e0(uint id,uint width,uint height);
uint recovered_209e590(uint id,void *outWindow);
undefined4 recovered_209e650(int param_1,void *param_2,uint param_3,uint *param_4);
uint recovered_209e9b0(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                      uint clearRgb,void *outWindow);
undefined4 recovered_209eab0(int param_1,byte *param_2);
uint recovered_209eee0(int param_1,void *param_2,uint param_3,undefined4 *param_4);
uint recovered_209efc0(uint id,char *fileMenu,char *editMenu,char *windowMenu);
uint recovered_209f160(uint id,uint menuKind,uint menuIndex);
uint recovered_209f230(uint id,int x,int y,uint buttons,uint flags);
uint recovered_209f390(uint id,void *outInfo);
undefined4 recovered_209f490(uint param_1,int *param_2);
undefined4 recovered_209f570(int param_1,undefined4 *param_2);
undefined4 recovered_209f690(int param_1,int param_2);
undefined4 recovered_209f780(int param_1);
bool recovered_209f9f0(int *param_1,byte *param_2,uint param_3,uint *param_4);
uint recovered_209fd40(char *text,uint maxChars,uint scale,uint rgba,void *outImage);
bool recovered_20a02b0(char *param_1);
undefined4 recovered_20a0620(char *in_ECX,uint *in_EDX);
void recovered_20a0760(uint *in_ECX);
void * recovered_20a0830(void *in_ECX);
void recovered_20a0f40(int in_ECX);
undefined4 recovered_20a1100(uint *param_1,uint *param_2);
uint recovered_20a29b0(int in_ECX);
undefined8 recovered_20a3100(undefined8 param_1);
int recovered_20a3110(char param_1);
byte recovered_20a3160(int param_1);
undefined4 recovered_20a3190(undefined4 *in_ECX,uint in_EDX,uint param_3);
int recovered_20a3460(undefined4 *in_ECX,char in_DL);
undefined8 recovered_20a3800(void);
void recovered_20a3890(int in_ECX);
undefined4 recovered_20a3930(undefined4 in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5);
undefined4 recovered_20a3a00(uint param_1);
undefined4 recovered_20a3a20(int param_1);
undefined8 recovered_20a3a40(uint in_ECX,int in_EDX,byte *param_3,uint param_4,uint param_5);
undefined4 recovered_20a6de0(int in_ECX,void *in_EDX,uint param_3,char param_4);
undefined4 recovered_20a6ea0(int in_ECX);
undefined4 recovered_20a71e0(undefined4 in_EAX,int in_ECX,int in_EDX);
int recovered_20a74d0(int in_ECX,uint in_EDX,byte *param_3,uint param_4);
byte recovered_20a7a90(undefined4 *in_ECX);
int recovered_20a7b10(int in_ECX);
void recovered_20a7f50(int in_ECX);
undefined4 recovered_20a8090(char in_CL,int in_EDX,uint param_3,uint param_4);
void recovered_20a8140(undefined4 *in_ECX);
undefined4 recovered_20a8230(void);
void recovered_20a8300(char *param_1);
uint recovered_20a83d0(char *server,void *outInfo,char *errorText,uint errorTextSize);
undefined4 recovered_20a8950(char *param_1,undefined1 *param_2,uint param_3);
undefined4 recovered_20a8a00(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_20a8e40(char *param_1,uint *param_2);
undefined4 recovered_20a8fe0(int param_1,byte *param_2,int param_3,char *param_4,ulong param_5);
undefined4 recovered_20a9420(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_20a9620(undefined4 param_1,undefined4 param_2,undefined1 param_3);
unsigned int recovered_20a9680(void);
undefined4 recovered_20a9730(void);
uint recovered_20a9b40(void *outInfo);
undefined4 recovered_20a9c10(void);
undefined4 recovered_20a9c90(int *in_ECX);
uint recovered_20a9d80(uint x,uint y,uint width,uint height);
void recovered_20a9f10(uint in_ECX,uint in_EDX,uint param_3,uint param_4);
undefined4 recovered_20aa190(uint *param_1);
uint recovered_20aa370(byte *param_1);
void recovered_20aa630(void);
uint recovered_20aa690(void *outInfo);
undefined4 recovered_20aa700(void);
undefined4 recovered_20aaa20(int param_1);
void recovered_20aaa40(void);
void recovered_20aac60(void);
void recovered_20ab4f0(void);
uint recovered_20ab520(char *line,char *outText,uint outTextSize);
void recovered_20ab9f0(void);
void recovered_20b17e0(uint param_1);
undefined4 recovered_20b1980(void);
undefined4 recovered_20b1d80(void);
undefined4 recovered_20b1f40(void);
void recovered_20b21b0(undefined1 *param_1);
undefined4 recovered_20b21e0(int *in_ECX,char *in_EDX);
void recovered_20b24a0(const char *format,...);
undefined4 recovered_20b2590(void);
void recovered_20b27d0(void);
void recovered_20b2f20(undefined4 *in_ECX,int in_EDX);
undefined4 recovered_20b30a0(void);
undefined4 recovered_20b3200(void);
void recovered_20b34e0(void);
undefined4 recovered_20b3640(void);
void recovered_20b3760(char *param_1,ulong param_2);
void recovered_20b3790(char *param_1);
bool recovered_20b3820(undefined1 *in_ECX);
void recovered_20b3a00(void);
bool recovered_20b3c90(char *in_ECX,char *in_EDX);
undefined4 recovered_20b3d30(char *in_ECX);
int recovered_20b41d0(undefined1 *in_EDX,int param_2,byte param_3);
void recovered_20b4330(void);
void recovered_20b4360(int in_ECX,int in_EDX,uint param_3,int param_4,int param_5,undefined1 param_6
                      ,undefined1 param_7,undefined1 param_8);
void recovered_20b4440(void);
undefined4 recovered_20b50a0(uint in_ECX,uint in_EDX);
void recovered_20b5160(byte in_CL);
void recovered_20b5350(uint *in_ECX,uint in_EDX,uint param_3);
void recovered_20b5460(int in_ECX,int in_EDX,int param_3,int param_4,undefined1 param_5,
                      undefined1 param_6,undefined1 param_7);
uint recovered_20b5750(void);
bool recovered_20b5770(int in_ECX);
void recovered_20b57e0(uint *in_ECX,int param_2);
void recovered_20b5860(undefined1 *param_1,uint param_2,int param_3);
void recovered_20b58a0(uint256 *in_ECX,uint256 *in_EDX,uint param_3);
uint recovered_20b5bf0(byte param_1,byte param_2,byte param_3);
undefined4 recovered_20b5f40(uint in_ECX,uint in_EDX);
undefined4 recovered_20b6020(int in_ECX,int in_EDX,int param_3,uint param_4);
void recovered_20b6170(void);
void recovered_20b6230(int in_ECX,int in_EDX,char param_3);
undefined4 recovered_20b6340(uint in_ECX,int in_EDX,char param_3);
undefined4 recovered_20b64d0(int in_ECX,int in_EDX,char param_3,char param_4);
undefined4 recovered_20b6a40(uint in_ECX);
undefined4 recovered_20b6ab0(char *in_ECX,uint *in_EDX,undefined1 *param_3,char param_4);
void recovered_20b6c20(int *in_ECX);
uint recovered_20b6d20(void *in_ECX,ulong in_EDX);
void recovered_20b6d80(int in_ECX,int in_EDX,int param_3,char param_4);
undefined4 recovered_20b6e30(void);
void recovered_20b7110(char in_CL,uint in_EDX,uint param_3);
void recovered_20b7230(int *in_ECX);
void recovered_20b7410(int in_ECX,int in_EDX,char param_3);
void recovered_20b7500(int *in_ECX);
uint recovered_20b75d0(char *in_ECX);
undefined4 recovered_20b78b0(uint in_ECX,undefined4 *in_EDX,ulong *param_3);
undefined4 recovered_20b7a20(uint in_ECX);
uint recovered_20b7d30(undefined4 in_ECX);
void recovered_20b7da0(char *param_1,undefined1 *param_2,byte *param_3);
undefined4 recovered_20b7f10(char *in_ECX,char *in_EDX);
undefined4 recovered_20b81c0(char *in_ECX);
uint recovered_20b8310(byte *in_ECX);
undefined4 recovered_20b8420(char *param_1);
bool recovered_20b87d0(char *param_1,char *param_2);
undefined4 recovered_20b8860(int in_ECX,undefined1 *in_EDX,uint param_3);
void recovered_20b8cd0(char *in_ECX,char in_DL,undefined1 *param_3,uint param_4);
undefined4 recovered_20b8ee0(char *in_ECX,int in_EDX,uint *param_3);
int recovered_20b9120(int in_ECX,int in_EDX,undefined4 param_3,byte param_4,int *param_5,
                     undefined4 *param_6);
undefined4 recovered_20b91b0(int in_ECX);
undefined4 recovered_20b93b0(char *in_ECX_00,char in_DL,undefined4 *param_3,ulong *param_4);
void recovered_20b9560(void *in_ECX,uint in_EDX);
int recovered_20b9600(int in_ECX,int *in_EDX,uint param_3,uint param_4,int param_5,uint param_6,
                     int *param_7,uint *param_8);
uint * recovered_20b9690(uint in_ECX);
int recovered_20b9780(void);
undefined4 recovered_20b97d0(byte in_CL,char *in_EDX,uint param_3,void *param_4,uint param_5);
undefined4 recovered_20b99c0(int in_ECX);
undefined4 recovered_20b9c50(int in_ECX);
undefined4 recovered_20b9eb0(char *in_ECX);
undefined4
recovered_20b9f10(undefined4 *in_ECX,undefined4 in_EDX,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,undefined4 param_9
                 ,undefined4 param_10);
int recovered_20ba060(int param_1,int param_2,uint param_3,int param_4,uint *param_5);
int recovered_20ba0a0(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint *param_6);
int recovered_20ba0e0(int in_ECX,uint in_EDX,int param_3,uint param_4,int param_5,uint *param_6);
undefined1 recovered_20ba730(void);
uint recovered_20ba770(byte *in_ECX,int in_EDX);
void recovered_20ba840(void);
undefined1 recovered_20ba860(int *in_ECX_00);
int recovered_20bb4e0(char *in_ECX);
undefined4 recovered_20bb910(void);
void recovered_20bbae0(char *in_ECX,char *in_EDX);
int recovered_20bbb50(int in_ECX,int *in_EDX,uint param_3,undefined4 *param_4,ulong *param_5);
int recovered_20bbec0(int in_ECX,char *in_EDX,undefined4 *param_3,byte *param_4,byte *param_5,
                     undefined4 *param_6,ulong *param_7);
undefined4 recovered_20bc7d0(int param_1,uint param_2);
uint recovered_20bc970(char *in_ECX,uint in_EDX_00,uint param_3,undefined4 *param_4,uint *param_5);
undefined4 recovered_20bcb90(int in_ECX,uint in_EDX,uint param_3,undefined4 *param_4,uint *param_5);
bool recovered_20bcc40(int in_ECX,uint in_EDX,uint param_3,undefined4 *param_4,uint *param_5);
undefined4
recovered_20bd100(char *in_ECX,uint in_EDX,uint param_3,undefined4 *param_4,uint *param_5);
bool recovered_20bd2b0(void);
uint recovered_20bd4a0(int in_ECX,int in_EDX,uint param_3);
bool recovered_20bd520(void);
undefined4 recovered_20bd5b0(undefined4 *param_1);
int recovered_20bd5c0(byte param_1,uint param_2,uint param_3);
undefined4 recovered_20bd9b0(void *in_ECX,uint in_EDX,uint *param_3,uint *param_4);
void recovered_20bdb80(void *in_ECX,void *in_EDX);
undefined4
recovered_20bdc20(char *in_ECX,uint in_EDX,undefined4 *param_3,uint *param_4,uint *param_5,
                 uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                 uint *param_11);
undefined4
recovered_20bdf50(int in_ECX,uint in_EDX,uint *param_3,int *param_4,uint *param_5,uint *param_6,
                 uint *param_7,int *param_8,uint *param_9);
undefined8 recovered_20be120(void);
void recovered_20be130(int *in_ECX,char *param_2);
uint recovered_20be1c0(void);
void recovered_20be1f0(char *param_1,ulong param_2);
void recovered_20be450(uint *param_1,int *param_2);
void recovered_20be4c0(int *in_ECX,undefined4 param_2);
void recovered_20be520(uint param_1,uint param_2,char *param_3,ulong param_4);
int recovered_20be5e0(void);
bool recovered_20be660(int *param_1);
void recovered_20be7d0(int *in_ECX,char *in_EDX,undefined1 param_3);
void recovered_20be890(int *in_ECX);
undefined4 recovered_20be8e0(int in_ECX,uint *in_EDX);
void recovered_20beb00(char in_CL);
bool recovered_20bebf0(uint in_ECX,int in_EDX,int param_3,int param_4,uint param_5,int param_6,
                      uint param_7,uint param_8,uint param_9,undefined4 *param_10,int *param_11);
undefined4
recovered_20bedc0(int in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,uint param_7
                 ,uint param_8,uint param_9,undefined4 *param_10);
undefined4
recovered_20bf050(int in_ECX,int in_EDX,uint param_3,int param_4,int param_5,uint param_6,
                 uint param_7,char param_8,uint param_9,int param_10,undefined4 *param_11,
                 int *param_12);
bool recovered_20bf250(char *param_1,char *param_2);
uint recovered_20bf2b0(byte in_CL);
undefined1 * recovered_20bf6e0(byte in_CL);
undefined4 recovered_20bf7c0(byte in_CL,undefined4 *in_EDX);
undefined4 recovered_20bf8d0(int in_ECX);
bool recovered_20bf940(byte param_1);
undefined4 recovered_20bf960(char in_CL,void *in_EDX);
undefined4 recovered_20bfc10(void);
uint recovered_20bfc80(uint in_ECX);
bool recovered_20bfd30(uint in_ECX,int in_EDX,int param_3,uint param_4,ulong param_5,int param_6,
                      int param_7);
undefined4 recovered_20bfe70(undefined4 *in_ECX,undefined4 *in_EDX);
undefined4 recovered_20c0190(int in_ECX,uint in_EDX,uint param_3,int *param_4);
undefined4
recovered_20c0280(int in_ECX,uint in_EDX,int param_3,uint param_4,uint param_5,int param_6,
                 uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
int recovered_20c06e0(void);
undefined4
recovered_20c0730(int *in_ECX,uint *in_EDX,uint *param_3,int param_4,char *param_5,int param_6,
                 int param_7,char param_8,int param_9,uint *param_10);
int recovered_20c0940(int in_ECX,uint in_EDX);
uint recovered_20c0a60(int in_ECX,uint in_EDX);
undefined4 recovered_20c0fc0(int in_ECX,uint in_EDX,uint param_3,uint *param_4);
void recovered_20c10b0(int in_ECX,int in_EDX,uint param_3,uint param_4);
void recovered_20c1150(void *in_ECX,char *in_EDX);
undefined4
recovered_20c11a0(int in_ECX,uint in_EDX,int *param_3,char *param_4,byte *param_5,char param_6,
                 undefined1 param_7,undefined4 param_8,undefined4 param_9);
void recovered_20c1580(char *in_ECX,undefined1 *in_EDX);
int recovered_20c1700(char param_1);
undefined4 recovered_20c1730(undefined4 in_ECX);
int recovered_20c1770(byte param_1);
void recovered_20c17a0(int in_ECX);
bool recovered_20c1a40(uint in_ECX,char *in_EDX,byte *param_3,byte *param_4);
undefined4 recovered_20c2120(uint in_ECX);
byte recovered_20c2220(uint in_ECX);
int recovered_20c2380(void);
undefined4 recovered_20c2500(void);
undefined4 recovered_20c26b0(uint in_ECX,uint *in_EDX);
bool recovered_20c2900(uint in_ECX,int in_EDX,uint param_3,uint param_4);
void recovered_20c2c00(uint in_ECX);
undefined4 recovered_20c2db0(int in_ECX);
undefined4 recovered_20c39d0(void);
undefined4 recovered_20c3ce0(int in_ECX);
uint recovered_20c3dd0(int in_ECX,uint in_EDX);
undefined4 recovered_20c45b0(uint in_ECX,uint in_EDX,uint param_3,uint param_4);
undefined4 recovered_20c6250(int in_ECX,int in_EDX);
uint recovered_20c68d0(undefined4 *in_ECX,char *in_EDX,uint param_3);
undefined4 recovered_20c6c80(uint in_ECX,uint in_EDX,uint param_3,undefined4 param_4);
undefined4 recovered_20c7280(uint in_ECX,uint in_EDX,uint param_3,undefined4 param_4);
bool recovered_20c78b0(int in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,uint *param_6);
undefined4
recovered_20c79b0(char *in_ECX,void *in_EDX,int param_3,int param_4,uint param_5,undefined4 param_6,
                 undefined4 param_7);
undefined4
recovered_20c7ca0(int in_ECX,int in_EDX,uint param_3,int param_4,int param_5,uint param_6,
                 int param_7,uint param_8,char *param_9,uint param_10);
undefined4 recovered_20c80b0(int *in_ECX,uint in_EDX);
void recovered_20c8890(void);
int recovered_20c8a10(undefined4 in_ECX,undefined4 in_EDX);
undefined4 recovered_20c8c20(void);
undefined4
recovered_20c9340(int *in_ECX,char in_DL,int param_3,int param_4,undefined4 param_5,int param_6);
void recovered_20c94d0(int in_ECX,int in_EDX);
int * recovered_20c9620(int in_ECX,int in_EDX,int param_3,int param_4,char param_5);
int recovered_20c96b0(int in_ECX);
undefined4 recovered_20c9710(int in_ECX,int in_EDX);
uint recovered_20c9780(byte *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
undefined4 recovered_20c9d30(byte *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
uint recovered_20c9ec0(int param_1);
void recovered_20c9f30(undefined1 *in_ECX,undefined4 in_EDX,undefined4 param_3,void *param_4);
undefined4 recovered_20ca310(uint in_ECX,uint in_EDX,void *param_3,uint param_4,undefined1 param_5);
void recovered_20cada0(int in_ECX,uint in_EDX,int param_3,int param_4,uint param_5,char param_6);
void recovered_20cb870(void *in_ECX,void *in_EDX);
void recovered_20cb9c0(byte *in_ECX,void *in_EDX,void *param_3);
undefined4 recovered_20cc050(int in_ECX_00,uint in_EDX,void *param_3,ulong param_4,char param_5);
undefined4 recovered_20cc1f0(int in_ECX);
undefined4 recovered_20cc270(int in_ECX);
int recovered_20cc2f0(int *in_ECX,int in_EDX);
void recovered_20cc3f0(void *in_ECX);
undefined4 recovered_20cc510(undefined4 *param_1,int param_2,char *param_3,undefined1 *param_4);
undefined4 recovered_20cc700(int in_ECX,char *param_2,uint param_3);
undefined4 recovered_20cca30(int *in_ECX,int in_EDX,void *param_3);
undefined4 recovered_20ccc30(int in_ECX,ushort *in_EDX,undefined4 *param_3,uint *param_4);
uchar recovered_20cceb0(void *volume,int block,void *buffer);
bool recovered_20ccf10(int *in_ECX,short *in_EDX,int param_3,uint param_4,uint param_5,int param_6);
undefined4
recovered_20cd130(int *in_ECX,int in_EDX,int param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7);
undefined4
recovered_20cd220(int in_ECX,int in_EDX,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7,uint param_8,undefined4 *param_9,uint *param_10);
uint recovered_20cd590(int in_ECX,int in_EDX,int param_3,uint param_4,int param_5,int param_6,
                      uint param_7,int param_8,uint param_9,char *param_10);
undefined4 recovered_20cd850(char *in_ECX,int in_EDX);
int recovered_20cdae0(int in_ECX,int in_EDX);
int recovered_20cdbe0(uint in_ECX,uint in_EDX);
undefined4 recovered_20cdf10(int in_ECX,int in_EDX,int *param_3,char *param_4);
undefined4 recovered_20ce1a0(int in_ECX,int in_EDX,char *param_3);
bool recovered_20ce4d0(int in_stack_00000010);
undefined4 recovered_20ce4f0(char *in_ECX,uint in_EDX,undefined1 *param_3);
undefined4 recovered_20ce6c0(int *in_ECX,undefined4 *in_EDX,int *param_3);
void recovered_20ce900(int in_ECX,uint *in_EDX,int param_3);
undefined4 recovered_20ce9a0(int *in_ECX,uint in_EDX);
void recovered_20cece0(uint in_ECX,uint in_EDX);
void recovered_20cee10(uint in_ECX);
uint recovered_20ceee0(uint in_ECX);
bool recovered_20cf080(char *param_1,char *param_2);
bool recovered_20cf100(uint *in_ECX,uint in_EDX,uint param_3);
bool recovered_20cf620(uint in_ECX,int in_EDX,uint param_3,uint param_4);
undefined4 recovered_20cf790(uint in_ECX,byte in_DL);
undefined4 recovered_20cf9c0(void);
void recovered_20cfba0(uint in_ECX);
undefined4 recovered_20cfc60(void);
uint recovered_20cfe30(char *in_ECX);
bool recovered_20d02e0(char *param_1,char *param_2);
int recovered_20d0390(int in_ECX,int in_EDX);
undefined4 recovered_20d0630(undefined1 *in_ECX,int in_EDX);
undefined4 recovered_20d07a0(int in_ECX,int in_EDX);
undefined4 recovered_20d0880(char *in_ECX);
int recovered_20d0940(int param_1,byte *param_2,uint param_3);
uint recovered_20d0d60(int in_ECX,byte *in_EDX,int param_3,byte param_4,undefined1 *param_5,
                      uint param_6);
undefined4 recovered_20d0f50(char *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_20d10d0(void);
undefined4 recovered_20d1130(char *in_ECX_00,undefined1 *in_EDX,byte param_3,int param_4);
void recovered_20d1d50(char *param_1,uint param_2,int param_3,char param_4);
undefined4 recovered_20d1ef0(char param_1);
byte recovered_20d1f10(char *in_ECX,int in_EDX,char *param_3,ulong param_4);
int recovered_20d2030(char *in_ECX,uint *in_EDX);
undefined4 recovered_20d2d00(char *in_ECX,char *in_EDX,char *param_3,ulong param_4);
undefined4
recovered_20d3550(char *in_ECX,int in_EDX,undefined4 *param_3,uint *param_4,char *param_5,
                 ulong param_6);
undefined1 * recovered_20d3c20(void);
int recovered_20d3d80(int *in_ECX_00,uint in_EDX,char *param_3,int param_4,char *param_5,
                     char *param_6,ulong param_7,uint param_8,uint param_9,int param_10,
                     undefined4 *param_11,int param_12,uint param_13,undefined4 param_14);
bool recovered_20d53a0(char *in_ECX);
uint recovered_20d5430(int in_ECX);
undefined4 recovered_20d5510(int in_ECX,char *in_EDX);
bool recovered_20d5810(int in_ECX);
void recovered_20d5910(int in_ECX);
uint recovered_20d5ae0(uint in_ECX);
void recovered_20d6af0(void *in_ECX);
undefined4
recovered_20d6b60(char *in_ECX,uint *in_EDX,uint *param_3,uint *param_4,char *param_5,char *param_6,
                 ulong param_7);
undefined4 recovered_20d6d00(char *in_ECX,char *in_EDX);
undefined4
recovered_20d6ff0(char *in_ECX,undefined4 *in_EDX,uint *param_3,char param_4,char *param_5,
                 char *param_6,ulong param_7);
void recovered_20d7480(void);
uint recovered_20d7510(uint in_ECX,uint in_EDX,int param_3,undefined1 *param_4,undefined1 *param_5);
undefined4
recovered_20d78c0(void *in_ECX,void *in_EDX_00,int param_3,char *param_4,char *param_5,ulong param_6
                 );
undefined4
recovered_20d7cb0(uint *in_ECX,uint in_EDX,undefined1 *param_3,undefined4 *param_4,uint *param_5,
                 undefined4 *param_6,char *param_7,ulong param_8);
undefined8 recovered_20d8080(uint *in_ECX);
uint recovered_20d80a0(char *input,uint input_size,undefined4 *output,
                           uint *output_size,char *error,ulong error_size);
uchar recovered_20d8540(void *bytes,uint length,uint cpu,void **out,uint *out_size,char *error,
                       uint error_size);
undefined4
recovered_20d87c0(uint *in_ECX,uint in_EDX,uint param_3,uint param_4,uint param_5,char param_6,
                 void *param_7,undefined4 *param_8,uint *param_9,char *param_10,ulong param_11);
undefined4 recovered_20d8a80(void);
undefined4
recovered_20d8ef0(uint *in_ECX,uint in_EDX,uint param_1,byte param_2,int *param_3,int param_4,undefined1 *param_5,
                 char *param_6,ulong param_7);
void recovered_20d90d0(char *in_ECX);
undefined1 recovered_20d92f0(char *in_ECX,char *in_EDX);
undefined4 recovered_20d9470(char *in_ECX);
void recovered_20d9650(void);
undefined4
recovered_20d96c0(int in_ECX,uint *in_EDX,uint *param_3,ulong *param_4,int param_5,uint param_6,
                 uint *param_7,char *param_8,ulong param_9);
undefined4
recovered_20d99f0(uint *in_ECX,uint in_EDX,uint param_1,byte param_2,uint param_3,uint *param_4,undefined4 *param_5,
                 undefined4 *param_6,uint *param_7,undefined4 *param_8,uint *param_9,char *param_10,
                 ulong param_11);
undefined4 recovered_20d9fb0(char *in_ECX);
void recovered_20da340(int in_ECX,int in_EDX,char param_3,char param_4);
void recovered_20da3d0(uint in_ECX);
void recovered_20da4d0(uint in_ECX);
undefined4
recovered_20da560(uint in_ECX,undefined4 in_EDX,char *param_3,char *param_4,char param_5,
                 char param_6,char param_7,void *param_8,char *param_9,ulong param_10);
undefined4 recovered_20dad20(undefined *param_1);
undefined4
recovered_20dad90(uint *in_ECX,uint in_EDX,uint param_3,byte param_4,uint *param_5,uint *param_6,
                 char *param_7,ulong param_8);
undefined4
recovered_20dbba0(int in_ECX,uint *in_EDX,uint *param_3,int *param_4,char *param_5,ulong param_6);
void recovered_20dbd10(int in_ECX);
undefined8 recovered_20dbd70(uint *in_ECX,int in_EDX);
undefined4 recovered_20dbd90(int in_ECX,uint in_EDX,char param_3,char *param_4);
undefined4 recovered_20dbdf0(uint *in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5);
void recovered_20dbeb0(int in_ECX);
bool recovered_20dbfa0(uint in_ECX);
void recovered_20dc080(char *in_ECX,undefined4 in_EDX,char *param_3);
undefined4 recovered_20dc0f0(char *in_ECX,char *in_EDX);
void recovered_20dc190(int in_ECX);
void recovered_20dc620(int in_ECX);
void recovered_20dc6d0(uint *in_EDX);
void recovered_20dc7c0(int in_ECX_00);
void recovered_20dc880(void *in_ECX_00,int in_EDX,uint *param_3);
void recovered_20dd4c0(void *in_ECX);
void recovered_20dd610(void *in_ECX);
undefined * recovered_20dd760(uint in_ECX);
void recovered_20dd7e0(int in_ECX);
void recovered_20dd8c0(int *in_ECX);
undefined4 recovered_20dd9e0(void);
undefined4 recovered_20dda40(uint in_ECX);
int recovered_20ddab0(char *in_ECX,uint in_EDX,int param_3,int *param_4);
undefined4 recovered_20ddcd0(int in_ECX_00,int in_EDX,int param_3,int *param_4,uint *param_5);
void recovered_20de000(int in_ECX,int *in_EDX);
void recovered_20de0a0(uint *in_ECX_00);
bool recovered_20de290(int *in_ECX);
undefined4 recovered_20de540(int in_ECX,undefined4 in_EDX,uint param_3,char *param_4,ulong param_5);
undefined4 recovered_20de8d0(int in_ECX,undefined1 *in_EDX,byte param_2,char *param_3,ulong param_4);
undefined4 recovered_20dea10(int in_ECX,char *in_EDX,ulong param_3);
undefined4 recovered_20df380(int in_ECX,uint in_EDX,uint param_3,int *param_4);
undefined4
recovered_20df4b0(int in_ECX,int in_EDX,uint param_3,uint *param_4,char *param_5,ulong param_6);
undefined4 recovered_20df6f0(int in_ECX,undefined4 *in_EDX,uint *param_2,char *param_3,ulong param_4);
undefined4
recovered_20df8f0(char *in_ECX,undefined1 *in_EDX,byte param_3,char *param_4,ulong param_5);
bool recovered_20e0160(char *in_ECX,char *in_EDX);
int recovered_20e0200(char *in_ECX);
undefined4 recovered_20e0350(void);
undefined4 recovered_20e03d0(undefined1 *in_ECX);
undefined4 recovered_20e0440(int in_ECX,uint *in_EDX,char *param_3,ulong param_4);
bool recovered_20e0520(char *in_ECX);
undefined4 recovered_20e0620(char *in_ECX,char *in_EDX,ulong param_3);
undefined4
recovered_20e0950(uint in_EAX,int in_ECX,uint in_EDX,uint param_4,char param_5,char *param_6,
                 ulong param_7);
undefined4 recovered_20e1600(int in_ECX,uint in_EDX,uint *param_3,uint *param_4);
undefined4 recovered_20e16d0(int in_ECX,uint *in_EDX,int param_3,char *param_4,ulong param_5);
undefined4
recovered_20e1870(int in_ECX,uint in_EDX,char *param_3,char param_4,uint *param_5,char *param_6,
                 ulong param_7);
undefined4
recovered_20e1a00(int in_ECX,undefined1 *in_EDX,int param_3,uint param_4,uint param_5,int param_6,
                 char *param_7,ulong param_8);
void recovered_20e1c40(void);
byte recovered_20e1d40(int in_ECX,char *in_EDX,uint *param_3);
undefined4
recovered_20e1f60(int in_ECX,int in_EDX,uint param_3,uint *param_4,char *param_5,ulong param_6);
undefined4
recovered_20e2310(int in_ECX_00,int in_EDX,int param_3,uint param_4,uint *param_5,char *param_6,
                 ulong param_7);
undefined4 recovered_20e2560(uint in_EAX,int in_ECX_01);
undefined4 recovered_20e2790(uint param_1);
bool recovered_20e2800(int param_1,char *param_2);
void recovered_20e2880(char *in_ECX);
void recovered_20e2940(int in_ECX,int in_EDX,uint *in_stack_00000008);
void recovered_20e2c30(int in_ECX,char *in_EDX);
void recovered_20e2fe0(void);
int recovered_20e30a0(int in_ECX);
bool recovered_20e30e0(char *in_ECX,int in_EDX,char *param_3,ulong param_4,int *param_5,uint param_6
                      ,uint param_7,int param_8);
undefined8 recovered_20e3a40(void);
undefined4 recovered_20e3ae0(longlong *in_ECX);
undefined4 recovered_20e3d50(int *in_ECX,undefined4 *in_EDX);
undefined4 recovered_20e40c0(int in_ECX,uint in_EDX,void *param_3,ulong param_4);
uint recovered_20e4260(uint in_ECX,uint in_EDX,undefined *param_3,uint param_4);
undefined8 recovered_20e45d0(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_20e4620(byte in_CL,int *in_EDX);
int recovered_20e4960(char in_CL);
void recovered_20e4b00(byte in_CL,uint in_EDX,char param_3);
void * recovered_20e5570(byte in_CL,uint in_EDX,uint param_3,undefined4 param_4,int param_5,
                        undefined1 param_6,undefined4 param_7);
undefined4 recovered_20e5740(uint in_ECX,uint in_EDX,undefined4 *param_3,byte param_4);
void recovered_20e6690(int in_ECX);
void recovered_20e6ac0(void *in_ECX,void *in_EDX,uint param_3);
void recovered_20e6b30(int in_ECX);
bool recovered_20e6f10(char param_1);
byte recovered_20e6f50(char param_1);
bool recovered_20e6f80(char param_1);
undefined4 recovered_20e6fa0(int param_1,uint param_2,undefined4 *param_3);
uint recovered_20e7040(byte in_CL,uint in_EDX,undefined4 *param_3,byte param_4);
undefined4 recovered_20e7390(int *param_1,uint param_2,undefined4 *param_3);
undefined4 recovered_20e7420(byte in_CL,uint in_EDX,uint param_3);
void recovered_20e78f0(void *in_ECX,char *in_EDX);
undefined4 recovered_20e7950(void *in_ECX,uint in_EDX,undefined4 *param_3);
void recovered_20e7b70(void *in_ECX,int in_EDX,uint param_3);
undefined1 recovered_20e7c00(byte in_CL,undefined4 *in_EDX);
int recovered_20e7f20(uint in_ECX,uint in_EDX,uint param_3,uint *param_4,int *param_5);
undefined4
recovered_20e88b0(byte in_CL,uint in_EDX,uint param_3,uint param_4,undefined4 param_5,int param_6);
void recovered_20e8ac0(byte in_CL,uint in_EDX_00,uint param_3);
uint recovered_20e8c90(byte *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
void * recovered_20e8d00(undefined1 in_CL,undefined4 in_EDX,int param_3,undefined4 param_4,
                        int param_5);
bool recovered_20e8ea0(char *in_ECX,uint in_EDX);
undefined * recovered_20e9630(int param_1);
undefined4 recovered_20e9660(undefined4 *in_EAX);
uint recovered_20e9880(byte in_CL);
undefined4 recovered_20e9bf0(undefined4 *in_ECX);
uint recovered_20e9c60(int in_ECX,uint in_EDX);
void recovered_20e9d50(int in_ECX,uint *in_EDX);
void recovered_20ea240(void);
uint recovered_20ea5c0(uint in_ECX);
byte recovered_20ea780(int *in_ECX);
undefined * recovered_20ea970(uint *in_ECX);
void recovered_20eaaa0(char *in_ECX,void *in_EDX,int param_3);
void recovered_20eabf0(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_20eac70(uint in_ECX);
void recovered_20eada0(char *in_ECX);
void recovered_20eb9e0(int in_ECX,uint in_EDX);
undefined4 recovered_20ebb90(int in_ECX,int *in_EDX);
undefined4 recovered_20ebee0(byte in_CL,byte in_DL,byte param_3);
uint recovered_20ec220(char *in_ECX,undefined1 *in_EDX);
undefined4 recovered_20ec5b0(undefined4 *in_ECX,uint in_EDX,uint param_3);
uint recovered_20ec600(byte *param_1,uint param_2,int param_3,uint param_4,void *param_5);
undefined4 recovered_20ec680(byte *param_1,uint param_2,int param_3,uint param_4,void *param_5);
bool recovered_20ec710(int param_1);
void recovered_20ec730(void);
uint recovered_20ec840(undefined4 *param_1,int param_2,int param_3);
void recovered_20ec8e0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4);
undefined4 recovered_20ec9b0(undefined4 *param_1,undefined1 *param_2,uint param_3);
undefined4 recovered_20eca80(undefined4 *param_1,int param_2,int *param_3);
void recovered_20ecd50(void);
void recovered_20ecd70(char *text,ulong length,int first,int last);
bool recovered_20ecf40(int in_ECX,int in_EDX,uint param_3,uint param_4);
undefined4 recovered_20ed100(uint *param_1,int *param_2);
void recovered_20ed650(char *in_ECX,ulong in_EDX,void *param_3,int *param_4);
void recovered_20ed6f0(uint param_1,char *param_2,ulong param_3);
bool recovered_20ed750(int in_ECX,void *in_EDX,uint param_3,uint param_4,undefined2 param_5,
                      undefined2 param_6,void *param_7,ushort param_8);
void recovered_20ed880(undefined1 *in_ECX,int in_EDX,ushort param_3,byte param_4,uint param_5,
                      uint param_6);
undefined4 recovered_20ed990(void *in_ECX,uint *in_EDX,int param_3);
undefined4 recovered_20eda80(int in_ECX,uint in_EDX,char *param_3,char *param_4,ulong param_5);
undefined4 recovered_20edde0(ushort *in_ECX,uint in_EDX,ushort param_3,uint *param_4,char *param_5);
void recovered_20ee010(void);
void recovered_20ee0d0(void);
undefined4 recovered_20ee0f0(int in_ECX,uint in_EDX);
byte recovered_20ee230(uint param_1,uint param_2);
void recovered_20ee3d0(byte param_1,byte param_2,byte param_3);
undefined4 recovered_20ee760(uint *in_ECX,uint in_EDX,uint param_3);
undefined * recovered_20ee880(void);
void recovered_20eea30(int in_ECX);
void recovered_20ef540(int *in_ECX,int in_EDX,uint param_3,int param_4);
void * recovered_20ef690(int *in_ECX,int in_EDX);
void recovered_20ef900(void);
void recovered_20ef920(int param_1,byte *param_2,uint param_3);
undefined4 recovered_20ef990(char *param_1,int param_2,int param_3);
undefined8 recovered_20efcc0(uint param_1,uint param_2);
undefined4 recovered_20efd40(uint param_1,uint param_2,uint param_3,int param_4,uint param_5);
bool recovered_20efdd0(uint param_1,uint param_2,uint param_3);
undefined4 recovered_20f0110(int param_1,uint param_2,char *param_3);
undefined4 recovered_20f0390(char *param_1);
void recovered_20f0460(void);
uchar recovered_20f0480(uint param_1);
void * recovered_20f04a0(ulong param_1);
void recovered_20f04c0(void *param_1);
undefined4 recovered_20f04e0(undefined4 *param_1);
undefined4 recovered_20f0630(undefined4 *param_1);
uint recovered_20f07a0(undefined2 param_1,int param_2,uint *param_3);
ulonglong recovered_20f07d0(undefined2 param_1,int param_2,undefined4 param_3);
uint recovered_20f0800(byte param_1,byte param_2,byte param_3,ushort param_4,uint param_5,
                      uint *param_6);
uint recovered_20f0840(byte param_1,byte param_2,byte param_3,ushort param_4,uint param_5,
                      undefined4 param_6);
uint recovered_20f0880(undefined4 param_1,int param_2,uint param_3,int *param_4);
uint recovered_20f08b0(uint *param_1,int param_2,uint *param_3);
uint recovered_20f08e0(undefined4 *param_1,int param_2,undefined4 param_3);
uint recovered_20f0910(undefined4 param_1,int param_2,uint param_3,int *param_4);
uint recovered_20f0940(uint *param_1,int param_2,uint *param_3);
uint recovered_20f0970(undefined4 *param_1,int param_2,undefined4 param_3);
uint recovered_20f09a0(uint *in_stack_00000010,undefined4 *in_stack_00000014);
void recovered_20f09d0(void);
void recovered_20f09f0(void);
undefined4 recovered_20f0a10(int param_1,undefined4 param_2,undefined4 *param_3);
undefined4 recovered_20f0a70(int param_1,uint param_2,char *param_3);
uint recovered_20f0cf0(int param_1,undefined4 *param_2,undefined4 *param_3);
uint recovered_20f0d30(int param_1,undefined4 param_2,undefined4 param_3);
uint recovered_20f0d70(void);
undefined4 recovered_20f0db0(ulong *param_1,int param_2);
undefined4 recovered_20f1060(ulong *param_1,int param_2,int param_3);
undefined4 recovered_20f13d0(int param_1);
int recovered_20f1670(int *param_1);
undefined4 recovered_20f2560(void);
void recovered_20f2a90(void);
undefined4
recovered_20f2b60(ulong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9);
undefined4 recovered_20f2ed0(ulong *param_1,int param_2,int param_3);
undefined4 recovered_20f3090(int param_1,int param_2,char *param_3);
undefined4 recovered_20f31f0(int *param_1);
int recovered_20f3340(int *param_1);
undefined4 recovered_20f3510(uint *param_1);
undefined4 recovered_20f35e0(uint *param_1);
uint * recovered_20f3710(int param_1);
void recovered_20f3770(char *in_ECX,void *in_EDX,int param_3);
undefined4 recovered_20f38c0(uint in_ECX);
undefined1 recovered_20f39f0(void);
undefined4 recovered_20f3a50(int *in_ECX,uint *in_EDX,int param_3);
undefined * recovered_20f3b50(void);
undefined4 recovered_20f3c30(void *in_ECX,char *in_EDX,int param_3);
void recovered_20f3f80(void);
bool recovered_20f4670(void *in_ECX,void *in_EDX,char param_3);
undefined4 recovered_20f47c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4);
undefined4 recovered_20f4820(undefined4 *in_ECX,uint *in_EDX,uint param_3);
undefined4
recovered_20f48a0(void *in_ECX,uint in_EDX,char param_3,undefined1 *param_4,char *param_5,
                 ulong param_6);
void recovered_20f4a90(void);
undefined4 recovered_20f4c70(uint in_ECX);
undefined4 recovered_20f4da0(char *in_ECX,undefined1 *in_EDX,uint param_3,undefined4 *param_4);
byte recovered_20f5050(char *in_ECX);
undefined4 recovered_20f5290(char *in_ECX_00);
undefined4
recovered_20f5360(char *param_1,undefined1 *param_2,char *param_3,char *param_4,ulong param_5,
                 undefined1 *param_6);
undefined4 recovered_20f55c0(char *in_ECX,char *in_EDX);
uint recovered_20f57c0(char *in_ECX);
undefined4
recovered_20f59a0(char *in_ECX_00,undefined1 *in_EDX,char *param_3,char *param_4,ulong param_5,
                 undefined1 *param_6);
uchar recovered_20f6100(uint in_ECX);
byte recovered_20f6160(int in_ECX,char *in_EDX,uint *param_3);
bool recovered_20f61e0(int in_ECX);
void recovered_20f6310(void);
undefined4 recovered_20f63a0(void);
void recovered_20f6430(void);
undefined4 recovered_20f64b0(uint in_ECX);
undefined4 recovered_20f6580(void);
void recovered_20f6690(int in_ECX);
void recovered_20f6760(int in_ECX);
undefined4 recovered_20f67b0(byte in_CL,int in_EDX,int param_3);
undefined4 recovered_20f68a0(int in_ECX_00);
undefined * recovered_20f6b90(char *param_1,int param_2,int param_3);
undefined4 recovered_20f6c50(char *param_1);
byte recovered_20f6d20(undefined *param_1,int param_2,uint param_3,undefined *param_4,int param_5);
undefined4 recovered_20f70b0(char *param_1);
uint recovered_20f7290(int param_1,int *param_2);
uint recovered_20f7600(void);
undefined4 * recovered_20f7620(void);
void recovered_20f7770(uint param_1,int param_2,uint param_3,int param_4,uint *param_5);
undefined4 recovered_20f77a0(char *param_1,char *param_2,ulong param_3);
bool recovered_20f7a10(byte param_1);
void recovered_20f7a30(undefined1 *param_1,uint param_2);
bool recovered_20f7b00(int param_1);
void recovered_20f7bd0(char *param_1,ulong param_2,byte param_3);
void recovered_20f7c50(undefined1 param_1);
undefined4 recovered_20f7cd0(int param_1,char *param_2,uint param_3);
undefined4 recovered_20f7fb0(char *param_1,char *param_2,uint param_3);
void recovered_20f8250(int param_1,char *param_2,undefined1 *param_3,uint param_4);
void recovered_20f8470(uint param_1,char *param_2,ulong param_3);
uint recovered_20f8520(int *param_1,char *param_2,ulong param_3);
undefined4 recovered_20f8ce0(char *param_1,int *param_2,char *param_3,ulong param_4);
void recovered_20f9a70(undefined4 *param_1,undefined4 *param_2);
void recovered_20f9ae0(int param_1,int param_2,uint param_3);
undefined4 recovered_20f9c60(int param_1,uint param_2);
void recovered_20f9cc0(byte *param_1,undefined1 *param_2,uint param_3);
void recovered_20f9d00(char *param_1,undefined1 *param_2,uint param_3);
int recovered_20f9f90(char *param_1,char param_2);
int recovered_20fa460(char *param_1,undefined1 *param_2,uint param_3);
int recovered_20fabe0(char *param_1,int param_2,uint param_3);
bool recovered_20fac90(void);
undefined4 recovered_20facd0(int param_1);
void recovered_20facf0(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5,byte param_6
                      ,byte param_7);
void recovered_20fae10(uint param_1,uint param_2,byte param_3,byte param_4,byte param_5);
void recovered_20fb1d0(void);
void recovered_20fb3c0(uint param_1,uint param_2,char *param_3,ulong param_4);
undefined4 recovered_20fb740(int param_1,undefined4 *param_2);
void recovered_20fb930(undefined1 *param_1,int param_2);
void recovered_20fba80(int param_1);
uint recovered_20fbad0(int param_1,char *param_2);
undefined4 recovered_20fbc00(int param_1,int param_2,uint param_3);
undefined4 recovered_20fbee0(int param_1,int param_2,char *param_3,ulong param_4);
uint recovered_20fcd00(byte *param_1,int param_2);
undefined4
recovered_20fcdd0(int param_1,undefined *param_2,uint param_3,char *param_4,char *param_5,
                 ulong param_6);
undefined4 recovered_20fd480(int param_1,uint param_2);
undefined4 recovered_20fe0e0(int param_1,void *param_2,uint *param_3);
int recovered_20fe2a0(int param_1);
undefined4 recovered_20feab0(int param_1,char *param_2,ulong param_3);
undefined4 recovered_20ff940(char *param_1,undefined4 *param_2);
void recovered_21000a0(void);
undefined4 recovered_2100590(int param_1);
undefined4 recovered_2100780(int param_1,char *param_2,char *param_3,char *param_4,ulong param_5);
undefined4 recovered_2100f00(int param_1,char *param_2,undefined4 *param_3);
undefined4 recovered_2101da0(int param_1,uint param_2);
undefined4 recovered_2102100(char *param_1,undefined4 *param_2);
int recovered_21025e0(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_2102a10(int param_1,uint param_2);
undefined4 recovered_2102db0(int param_1);
undefined4 recovered_2102ec0(int param_1,uint param_2);
undefined4 recovered_21031f0(int param_1,char *param_2);
void recovered_2103490(uint *param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5
                      ,undefined1 param_6);
bool recovered_2103500(byte *param_1,uint *param_2);
undefined4 recovered_21036e0(int param_1,uint param_2,int param_3,char *param_4,ulong param_5);
void recovered_2103b80(int param_1,uint param_2);
undefined4 recovered_2103c20(int *param_1);
undefined4 recovered_2103c70(void);
uint recovered_2103d10(char *in_ECX,byte *in_EDX,byte param_3,byte param_4);
undefined4 recovered_2104240(int in_ECX,int in_EDX);
char * recovered_21046d0(char *in_ECX);
undefined4 recovered_2104990(char *in_ECX);
undefined4 recovered_2104c10(short in_CX);
uint recovered_2104cc0(char *in_ECX);
undefined4 recovered_2104db0(byte *in_ECX);
undefined4 recovered_2105080(void);
bool recovered_2105140(uint in_ECX,uint in_EDX,uint param_3,uint param_4);
void recovered_21052c0(char *error,ulong capacity,const char *format,...);
void recovered_2105300(void *in_ECX,int in_EDX);
undefined4 recovered_21053c0(void *in_ECX);
bool recovered_21054d0(char *in_ECX);
void recovered_2105600(void *in_ECX,undefined1 in_DL,undefined4 param_3,undefined4 param_4);
char recovered_2105680(char *in_ECX,int in_EDX);
undefined4 recovered_2105710(char *in_ECX);
undefined4 recovered_21058f0(char *in_ECX,int in_EDX);
undefined4 recovered_2105960(char *in_ECX);
bool recovered_2105b10(char *in_ECX);
undefined4 recovered_2105e10(char *in_ECX);
undefined4 recovered_2105ff0(char *in_ECX);
undefined4 recovered_21062b0(char *in_ECX);
char recovered_2106460(char *in_ECX);
undefined4 recovered_2106680(char *in_ECX);
undefined4 recovered_2106b00(int in_ECX,uint in_EDX,uint param_3,char *in_stack_00000008);
undefined4 recovered_2106f60(int in_ECX,int *in_EDX,uint param_3,uint param_4);
undefined4
recovered_2107440(int in_ECX,int *in_EDX,uint param_3,uint param_4,char *in_stack_0000000c);
undefined4 recovered_21077e0(int in_ECX,int *in_EDX,uint param_3,uint param_4,char *param_5);
undefined4 recovered_2107d60(int in_ECX,uint in_EDX,uint param_3,char *in_stack_00000008);
undefined4 recovered_2108390(byte in_CL,uint in_EDX,int param_3);
undefined4 recovered_2108440(int in_ECX,int in_EDX,int param_3,uint param_4,int param_5);
void recovered_2108500(char *in_ECX,void *in_EDX);
uint recovered_21087e0(char *in_ECX,uint in_EDX,char *param_3,ulong param_4);
void recovered_21088b0(void *in_ECX,uint in_EDX,char *param_3);
void recovered_2108920(void *in_ECX,char *in_EDX);
void recovered_2108970(undefined2 *in_ECX,undefined4 in_EDX,undefined4 param_3,undefined4 param_4,
                      int param_5,int param_6);
void recovered_2108a50(int in_ECX);
uint recovered_2108b90(uint in_ECX,int in_EDX,int param_3);
undefined4
recovered_2108d30(uint in_ECX,uint in_EDX,void *param_3,uint param_4,char *param_5,ulong param_6);
undefined4
recovered_2108da0(int in_ECX,int in_EDX,void *param_3,uint param_4,int param_5,uint param_6);
undefined4 recovered_2108f60(int in_ECX,int in_EDX,int param_3,char *param_4);
void recovered_2109270(void *in_ECX,uint param_2,int param_3,void *param_4,void *param_5,int param_6
                      );
void recovered_2109430(void *in_ECX,uint in_EDX,void *param_3,uint param_4);
void recovered_2109690(uint *in_ECX,void *in_EDX,uint param_3);
void recovered_2109920(uint *in_ECX,uint *in_EDX_00);
void recovered_21099f0(void *in_ECX,int in_EDX,uint *in_stack_00000004);
undefined4 recovered_2109ad0(uint in_ECX,int in_EDX,int param_3,undefined4 *param_4,uint *param_5);
undefined4 recovered_2109d30(char *in_ECX,char *in_EDX,int param_3,int param_4);
undefined8 recovered_2109e50(char *in_ECX,uint *in_EDX);
undefined4 recovered_2109f70(char *in_ECX,char *in_EDX,undefined4 *param_3);
uint recovered_210a060(char *in_ECX,int in_EDX,uint param_3);
undefined4 recovered_210a350(int in_ECX,uint in_EDX,uint param_3);
undefined4 recovered_210a540(int in_ECX,int *in_EDX,uint param_3,int param_4);
undefined4 recovered_210a700(int in_ECX,undefined4 in_EDX,undefined4 param_3);
undefined4 recovered_210a800(int in_ECX,int *in_EDX,uint param_3,uint param_4);
undefined4 recovered_210aab0(int in_ECX,int *in_EDX,undefined4 param_3,undefined4 param_4);
undefined4 recovered_210ac10(int in_ECX,uint in_EDX,uint param_3);
undefined4 recovered_210ae20(longlong *in_ECX,longlong *in_EDX);
undefined4 recovered_210b020(longlong *in_ECX,longlong *in_EDX);
undefined4 recovered_210b130(void *in_ECX,int in_EDX,int param_3);
void recovered_210b470(byte *param_1);
byte recovered_210b5d0(char *param_1,void *param_2,uint param_3,uint *param_4);
void recovered_210b6c0(char *param_1,void *param_2,uint param_3);
byte recovered_210b6e0(char *param_1);
byte recovered_210b7e0(char *param_1);
int recovered_210b890(char *param_1,uint param_2);
undefined4 recovered_210ba40(char *param_1,int param_2,uint *param_3,uint *param_4);
void recovered_210bc70(char *param_1);
byte recovered_210bf60(char *in_ECX,void *in_EDX);
undefined4 recovered_210c190(char *in_ECX,char *in_EDX,int param_3,char *param_4);
byte recovered_210cab0(int *in_ECX);
undefined4 recovered_210cb60(uint in_ECX);
bool recovered_210ccd0(int in_ECX);
undefined4 recovered_210cdd0(int in_ECX,char *in_EDX);
undefined4 recovered_210d090(uint in_ECX);
int * recovered_210d200(void);
bool recovered_210d2c0(int in_ECX_00);
undefined4 recovered_210d3b0(void);
void recovered_210d550(void);
undefined4 recovered_210d590(int in_ECX);
undefined4 recovered_210d900(char param_1);
undefined4 recovered_210dd50(void);
int recovered_210de10(uint in_ECX_00,int in_EDX,int *param_3);
void recovered_210df20(void);
void recovered_210e8c0(void);
void recovered_210e900(void);
void recovered_210e940(void);

/* Original analysis identifiers for manual recovery units. */
