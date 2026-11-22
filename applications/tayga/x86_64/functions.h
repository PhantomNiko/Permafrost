/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include <permafrost/terror_ui.h>
void *memcpy(void *,const void *,unsigned long);
void *memmove(void *,const void *,unsigned long);
void *memset(void *,int,unsigned long);
int snprintf(char *,unsigned long,const char *,...);
static inline void *pf_app_window_spec(void *output,const char *title,unsigned int width,unsigned int height){*(TerrorUIWindowSpec *)output=terror_ui_window_spec(title,width,height);return output;}
unsigned long strlen(const char *);
#include "../format.h"
#define pf_varargs_100055d0__8_ recovered_100055d0
extern uint8_t pf_module_state[];
void recovered_10000480(void);
void recovered_100004a0(void);
ulong recovered_10000910(void);
long recovered_10000960(void);
ulong recovered_100009a0(void);
long recovered_100009e0(void);
ulong * recovered_10000a10(long param_1);
ulong recovered_10000af0(ulong param_1,uint param_2);
ulong recovered_10000b30(ulong param_1,uint param_2);
long recovered_10000b70(long param_1,uint param_2);
ulong recovered_10000bc0(ulong param_1,ulong param_2);
long recovered_10000c60(ulong param_1,ulong param_2);
ulong recovered_10000cd0(ulong param_1,ulong param_2);
long recovered_10000da0(ulong param_1,ulong param_2);
void recovered_10000e30(void);
int recovered_10000e50(int param_1);
undefined8 recovered_10000e60(ulong in_RDI);
void recovered_10000eb0(void *in_RDI);
undefined8 recovered_10000f00(void *in_RDI,ulong in_RSI);
void recovered_10000f50(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5);
void recovered_10001390(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                       undefined8 *param_5,undefined1 *param_6);
void recovered_10001c50(byte *param_1,byte param_2,ulong param_3);
void recovered_10001fa0(undefined8 *param_1,ulong param_2);
void recovered_10002270(undefined8 *param_1,ulong param_2);
int recovered_10002540(ulong *param_1,ulong *param_2,ulong param_3);
int recovered_10002840(byte *param_1,byte *param_2);
bool recovered_100028b0(int param_1);
bool recovered_100028d0(int param_1);
bool recovered_100028f0(uint param_1);
bool recovered_10002910(uint param_1);
bool recovered_10002940(int param_1);
bool recovered_10002960(int param_1);
int recovered_10002980(int param_1);
int recovered_100029a0(int param_1);
long recovered_100029c0(long param_1);
int recovered_100029f0(byte *param_1,byte *param_2);
int recovered_10002a30(byte *param_1,byte *param_2);
void recovered_10002a70(long param_1,long param_2);
undefined8 * recovered_10002a90(undefined8 *param_1);
char * recovered_10002f10(char *param_1,char param_2);
long recovered_10002f50(char *param_1,char *param_2);
char * recovered_10002fb0(char *param_1,char *param_2);
char * recovered_10003010(char *param_1,char *param_2);
undefined * recovered_10003070(void);
undefined * recovered_10003080(void);
void recovered_10003090(undefined8 *param_1);
double recovered_10003190(double param_1,uint param_2);
ulong recovered_10003260(double param_1,int *param_2);
double recovered_10003330(double param_1,double param_2);
double recovered_10003360(double param_1,double param_2);
ulong recovered_100033e0(double param_1);
ulong recovered_10003410(double param_1);
double recovered_10003470(double param_1);
double recovered_10003620(double param_1);
long recovered_10003770(double param_1);
double recovered_100037a0(double param_1);
double recovered_10003850(double param_1);
double recovered_100038f0(double param_1);
ulong recovered_10003910(double param_1);
ulong recovered_100039e0(double param_1);
double recovered_10003a90(ulong param_1);
double recovered_10003ae0(ulong param_1);
float recovered_10003b70(float param_1,float param_2);
undefined8 recovered_10003bc0(float param_1,int *param_2);
undefined8 recovered_10003c80(float param_1,uint param_2);
float recovered_10003d70(float param_1,float param_2);
undefined8 recovered_10003e00(undefined1 in_XMM0 [16],ulong in_XMM2_Qb);
float recovered_10003e40(float param_1);
double recovered_10003ea0(double param_1);
undefined8 recovered_10003f00(undefined8 param_1);
float recovered_10003f70(float param_1);
float recovered_10003f90(float param_1);
long recovered_100040e0(double param_1);
float recovered_10004110(float param_1);
float recovered_100041c0(float param_1);
undefined8 recovered_10004260(undefined8 param_1);
long recovered_10004280(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_100043b0(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_100044e0(byte *param_1,undefined8 *param_2);
float recovered_10004740(byte *in_RDI,undefined8 *in_RSI);
ulong recovered_10004750(byte *param_1,ulong param_2,byte *param_3,uint *param_4);
int recovered_100055d0(char *buffer,size_t capacity,const char *format,...);
void recovered_10005650(ulong param_1,ulong param_2,ulong *param_3);
int recovered_10005810(void);
undefined8
recovered_10005d80(int param_1,uint *param_2,undefined8 in_XMM1_Qa,undefined8 in_XMM2_Qa,
                  undefined8 in_XMM3_Qa,undefined8 in_XMM4_Qa,undefined8 in_XMM5_Qa,
                  undefined8 in_XMM6_Qa,undefined8 in_XMM7_Qa);

/* Original analysis identifiers for manual recovery units. */
