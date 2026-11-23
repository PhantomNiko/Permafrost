/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
void pf_kernel_entry(void);
#include "armv7-recovery.h"
#include "cpu.h"
#include "coprocessors.h"
#include "arm_exclusive.h"
#include "neon.h"
void recovered_40400014(void);
void recovered_40400040(void);
unsigned int recovered_404002c4(void);
uint recovered_4040032c(uint param_1,uint param_2);
uint recovered_40400330(uint param_1,uint param_2);
uint recovered_40400380(uint param_1,uint param_2);
uint recovered_404003b8(uint param_1,uint param_2);
uint recovered_40400428(uint param_1,uint param_2);
undefined8 recovered_40400494(float param_1);
undefined8 recovered_404004a4(float param_1);
float recovered_404004b4(uint param_1,uint param_2);
float recovered_404004d0(uint param_1,uint param_2);
void recovered_404004f0(void);
void recovered_40400574(void);
bool recovered_404007d8(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_40400850(undefined4 *param_1,undefined4 *param_2,int param_3);
bool recovered_40400a88(undefined4 param_1,undefined4 param_2);
int recovered_40400b1c(void);
ulonglong recovered_40400bc8(void);
int recovered_40400c80(void);
void recovered_40400d24(void);
void recovered_40400dd0(int param_1);
uint * recovered_40400e50(int param_1,uint *param_2,uint *param_3);
void recovered_4040108c(int param_1,uint *param_2);
uint * recovered_40401110(int param_1,uint *param_2,uint *param_3);
void recovered_4040119c(int param_1);
void recovered_40401214(int param_1);
void * recovered_40401374(void *memory,ulong size);
longlong recovered_40401900(uint param_1,int param_2,uint param_3);
ulonglong recovered_40401954(uint param_1,uint param_2,uint param_3);
undefined8 recovered_404019a8(uint param_1,int param_2,uint param_3);
undefined8 recovered_404019f4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_40401ad8(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_40401b58(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_40401c70(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_40401d2c(void);
int recovered_40401d34(int param_1);
void * recovered_40401d40(ulong size);
void recovered_40401dc0(void *memory);
void * recovered_40401e38(void *memory,ulong size);
void *recovered_40401e3c(void *dest,const void *src,size_t count);
void *recovered_404020c0(void *dest,const void *src,size_t count);
void *recovered_404025cc(void *dest,int value,size_t count);
void recovered_404027cc(undefined4 *param_1,uint param_2);
void recovered_404029c8(undefined4 *param_1,uint param_2);
char * recovered_40402bc4(char *param_1,char param_2,int param_3);
int recovered_40402bf8(void *left,void *right,ulong count);
int recovered_40402df0(byte *param_1,byte *param_2);
int recovered_40402e40(int value);
int recovered_40402e54(int value);
int recovered_40402e68(int value);
int recovered_40402e80(int value);
int recovered_40402eac(int value);
int recovered_40402ecc(int value);
int recovered_40402ee0(int value);
int recovered_40402ef0(int value);
ulong recovered_40402f00(char *text);
int recovered_40402f28(char *left,char *right);
int recovered_40402f6c(byte *param_1,byte *param_2);
void recovered_40402fb0(int param_1,int param_2);
uint * recovered_40402fcc(uint *param_1);
char * recovered_40403318(char *text,int value);
ulong recovered_4040334c(char *text,char *accept);
ulong recovered_404033b0(char *text,char *reject);
char * recovered_40403418(char *param_1,char *param_2);
char * recovered_40403478(char *text,char *find);
undefined * recovered_404034dc(void);
undefined ** recovered_404034e8(void);
void recovered_404034f4(undefined4 *param_1);
double recovered_4040350c(double value,int exponent);
double recovered_40403550(undefined4 param_1,undefined4 param_2,int *param_3);
double recovered_40403608(double left,double right);
double recovered_40403640(double left,double right);
double recovered_404036c0(double value);
double recovered_404036f0(double value);
double recovered_40403734(double value);
double recovered_40403780(double value);
undefined8 recovered_404038c0(undefined4 param_1,undefined4 param_2);
double recovered_404038f0(double value);
double recovered_404039b0(double value);
double recovered_40403a60(double value);
undefined8 recovered_40403a80(undefined4 param_1,undefined4 param_2);
undefined8 recovered_40403b40(undefined4 param_1,undefined4 param_2);
double recovered_40403bc8(uint param_1,uint param_2);
double recovered_40403c10(uint param_1,uint param_2);
float recovered_40403ca0(float left,float right);
float recovered_40403ce4(float param_1,float *param_2);
float recovered_40403da0(float value,int exponent);
float recovered_40403dec(float left,float right);
float recovered_40403e74(float value);
float recovered_40403eac(float value);
double recovered_40403ef8(double value);
float recovered_40403f4c(float value);
float recovered_40403fa8(float value);
float recovered_40404000(float value);
undefined8 recovered_40404144(undefined4 param_1,undefined4 param_2);
float recovered_40404178(float value);
float recovered_40404240(float value);
float recovered_404042f8(float value);
int recovered_40404314(byte *param_1,undefined4 *param_2,uint param_3);
int recovered_40404468(byte *param_1,undefined4 *param_2,uint param_3);
double recovered_404045c8(byte *param_1,undefined4 *param_2);
float recovered_4040479c(byte *param_1,undefined4 *param_2);
int recovered_404047b8(char *out,ulong capacity,char *format,void *arguments);
int recovered_40405548(char *out,ulong capacity,char *format,...);
void recovered_40405578(int *param_1,int *param_2,int *param_3);
uint * recovered_40405734(uint *param_1,uint *param_2);
undefined4 recovered_404057b8(uint *param_1,int param_2);
undefined4 recovered_40405820(undefined8 *param_1,int param_2);
bool recovered_40405c04(undefined1 *param_1);
undefined4 recovered_40405c80(uint *param_1);
undefined4 recovered_40405e98(uint *param_1);
uint recovered_40406184(void);
bool recovered_404061e4(void);
undefined4 recovered_40406228(void);
bool recovered_40406238(void);
int recovered_404062dc(void);
int recovered_40406394(int param_1);
int recovered_40406454(undefined4 param_1);
int recovered_4040650c(int param_1);
int recovered_404065cc(undefined4 param_1);
undefined4 recovered_40406684(int param_1,int param_2,int param_3,int param_4);
undefined4 recovered_40406774(int param_1,int param_2,int param_3,int param_4);
bool recovered_40406858(int param_1,char *param_2,int param_3);
void recovered_4040697c(int *param_1);
void recovered_40406a24(undefined8 *param_1);
void recovered_40406a48(int *param_1);
void recovered_40406b94(int *param_1,int param_2);
undefined4 recovered_40407560(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 recovered_40407574(void);
undefined4 recovered_4040757c(void *param_1);
byte recovered_404075a4(void);
void recovered_404076a0(void);
undefined4 recovered_404076a8(void);
undefined4 recovered_404076b0(undefined4 *param_1,undefined4 *param_2);
uint recovered_40407810(void *param_1,uint param_2);
undefined4
recovered_40407d50(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6);
undefined4
recovered_40407e10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6);
void recovered_40407ea8(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void recovered_40407ec8(void);
bool recovered_40407ed4(uint param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_40407f10(uint param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_40407f98(void);
void recovered_40407fa0(undefined4 *param_1);
void recovered_40408344(uint param_1,int param_2);
bool recovered_404083ac(void);
int recovered_404089d8(void);
void recovered_40408cb4(undefined4 param_1);
undefined4 recovered_40408cc4(void);
undefined4 recovered_40408d48(void);
undefined4 recovered_40408d64(void);
int recovered_40408d80(void);
int recovered_40408e38(void);
int recovered_40408e68(void);
void recovered_40408e98(uint param_1,undefined1 param_2);
int recovered_40408ec8(void);
char * recovered_40409000(uint param_1);
undefined1 recovered_40409020(void);
undefined4 recovered_4040906c(void *param_1);
void recovered_404090a0(void);
void recovered_404090a4(void);
void recovered_404090ac(void);
undefined4 recovered_404090b4(void);
bool recovered_404090bc(int param_1);
int recovered_404090cc(int param_1);
void recovered_404090d0(uint param_1);
uint recovered_404090d4(void);
undefined4 recovered_404090d8(uint *param_1,int param_2,uint *param_3);
undefined4 recovered_4040913c(undefined4 *param_1,int param_2,undefined4 param_3);
undefined4 recovered_40409190(uint *param_1,int param_2,uint *param_3);
undefined4 recovered_404091f4(undefined4 *param_1,int param_2,undefined4 param_3);
void recovered_40409250(void);
void recovered_4040abc0(void);
void recovered_4040ad68(void);
uint recovered_4040aebc(undefined4 param_1,undefined4 param_2,uint param_3);
undefined4 recovered_4040b1ec(int param_1,int *param_2);
undefined8 recovered_4040b2c4(void);
uint recovered_4040b47c(void);
undefined4 recovered_4040b818(void);
void recovered_4040b824(int param_1);
undefined1 recovered_4040bbbc(void);
byte recovered_4040bbcc(void);
byte recovered_4040bbe4(void);
undefined4 recovered_4040bc34(void);
undefined8 recovered_4040bdcc(void);
undefined8 recovered_4040be64(void);
void recovered_4040befc(uint param_1);
void recovered_4040c188(uint param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5);
void recovered_4040c2a0(uint param_1,int param_2);
void recovered_4040c414(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_4040c81c(uint param_1,uint param_2,undefined8 *param_3,uint param_4,uint param_5);
void recovered_4040d4fc(int param_1,int param_2);
void recovered_4040d69c(undefined4 param_1);
void recovered_4040d794(uint param_1,uint param_2);
undefined4 recovered_4040da68(void);
void recovered_4040db20(void *param_1,uint param_2);
undefined8
recovered_4040dc58(undefined4 param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5);
longlong recovered_4040dcc4(uint param_1,undefined4 *param_2,uint *param_3);
void recovered_4040df68(undefined4 param_1,uint param_2,int param_3);
void recovered_4040dfec(uint param_1,int param_2);
void recovered_4040e070(undefined4 param_1,uint param_2,int param_3);
void recovered_4040e0f0(uint param_1,int param_2);
undefined4 recovered_4040e170(void);
uint recovered_4040e178(int param_1,uint param_2);
void recovered_4040e45c(uint param_1,int param_2,void *param_3,uint param_4);
uint recovered_4040e53c(uint param_1,int param_2,void *param_3,uint param_4);
uint recovered_4040e9cc(int *param_1,uint param_2,char *param_3);
uint recovered_4040eeec(int *param_1,uint param_2);
void recovered_4040f020(undefined4 param_1,undefined4 param_2,char *param_3);
undefined4
recovered_4040f910(uint *param_1,uint param_2,uint param_3,uint *param_4,void *param_5,uint *param_6
                  ,void *param_7,uint *param_8);
int recovered_40410298(byte *param_1);
bool recovered_4041048c(int *param_1);
int recovered_40410988(int param_1,int param_2,void *param_3,uint *param_4);
byte recovered_40410cc8(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                       uint param_7,undefined *param_8);
byte recovered_404115b8(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                       uint param_7);
byte recovered_404115e8(int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6);
undefined4 recovered_4041166c(void);
void recovered_40411674(void);
uint recovered_40411678(undefined4 param_1,undefined4 param_2,uint param_3);
uint recovered_40411c90(void);
void recovered_40412008(void);
undefined4 recovered_40412130(void);
void recovered_404122e0(void);
uint recovered_404140e4(undefined4 param_1,undefined4 param_2,char *param_3);
uint recovered_40414314(void);
undefined8 recovered_40414994(undefined4 param_1,uint param_2);
bool recovered_40414b6c(int param_1,int param_2);
uint recovered_40414cf4(uint param_1);
uint recovered_40415018(void);
undefined4 recovered_40416800(void);
int recovered_40416b04(uint *param_1,undefined4 param_2,char *param_3);
undefined4 recovered_40416e60(void);
void recovered_40417010(void);
undefined4
recovered_40417fa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,
                  int *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9);
undefined * recovered_404181dc(int param_1);
uint recovered_40418230(int param_1);
undefined4 recovered_40418274(uint param_1,int param_2);
uint recovered_40418498(uint param_1);
undefined4 recovered_404185e4(void);
undefined4 recovered_404185f8(uint param_1,undefined4 param_2,uint param_3);
uint recovered_404186ec(undefined1 *param_1,uint param_2);
undefined4 recovered_40418f4c(uint param_1);
undefined4 recovered_40418fc8(int param_1);
undefined4 recovered_4041954c(uint param_1,int param_2,uint param_3,undefined *param_4,uint param_5);
undefined4 recovered_40419578(uint param_1,int param_2,uint param_3,undefined *param_4,uint param_5);
undefined4 recovered_40419b84(uint param_1,int param_2,uint param_3,int param_4,uint param_5);
undefined4 recovered_40419bb0(uint param_1,int param_2,uint param_3,int param_4,uint param_5);
undefined4 recovered_40419e60(uint param_1,int param_2);
undefined4 recovered_40419e84(uint param_1,int param_2);
uint recovered_4041a2c0(uint param_1,int *param_2,uint param_3);
bool recovered_4041aa68(undefined4 param_1,undefined4 param_2,uint param_3);
uint recovered_4041ab84(uint param_1,uint param_2,undefined *param_3,uint param_4);
bool recovered_4041b574(int param_1,uint param_2,void *param_3,uint param_4);
uint recovered_4041b868(int param_1,uint param_2,int param_3,uint param_4);
int recovered_4041ba10(void);
uint recovered_4041ba78(int param_1);
longlong recovered_4041bb1c(uint param_1,uint param_2,uint param_3,uint param_4,void *param_5);
bool recovered_4041bc14(uint param_1,int param_2,int param_3,uint param_4);
bool recovered_4041bca0(int param_1,uint param_2,int param_3,uint param_4);
void recovered_4041bf78(undefined1 param_1,undefined4 param_2,uint param_3,int param_4);
uint recovered_4041c088(undefined4 *param_1,uint param_2,int param_3,undefined1 *param_4);
bool recovered_4041c588(uint param_1,uint param_2,int param_3,uint param_4);
uint recovered_4041c69c(int param_1);
bool recovered_4041c740(int param_1,uint param_2,int param_3,uint param_4);
undefined1 * recovered_4041ca18(undefined1 *param_1,uint param_2,void *param_3,undefined1 *param_4);
bool recovered_4041ccec(undefined4 *param_1);
byte recovered_4041cea0(uint param_1,undefined4 param_2,uint param_3);
undefined4 recovered_4041d598(int param_1);
undefined4 recovered_4041d654(undefined4 *param_1);
void recovered_4041d848(void);
undefined4 recovered_4041d850(uint param_1);
undefined4 recovered_4041d984(void);
undefined4 recovered_4041d9f8(undefined4 param_1);
uint recovered_4041da84(void);
void recovered_4041dae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
uint recovered_4041db14(int param_1);
uint recovered_4041db3c(void);
uint recovered_4041db54(void);
uint recovered_4041dc60(uint *param_1);
uint recovered_4041e11c(uint *param_1);
bool recovered_4041ed24(uint *param_1);
undefined4 recovered_4041f94c(uint *param_1);
byte recovered_4041fd98(void);
bool recovered_4041fecc(void);
undefined4 recovered_4041ff60(undefined4 *param_1,undefined4 param_2,int param_3);
bool recovered_404203ac(uint *param_1);
bool recovered_40420834(uint *param_1);
byte recovered_4042100c(void);
void recovered_40421404(void);
uint recovered_404216a8(void);
void recovered_40421940(uint *param_1,undefined4 *param_2);
void recovered_40421a50(void);
void recovered_40421a54(undefined4 param_1);
bool recovered_40421a64(undefined4 *param_1,undefined4 *param_2);
void recovered_40421a9c(undefined4 *param_1);
void recovered_4042218c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_404222bc(int *param_1,int *param_2,int *param_3,int *param_4);
void recovered_40422458(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_404225a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_40422614(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                       undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                       undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                       undefined4 *param_11,undefined4 *param_12);
void recovered_404226f4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_40422844(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6);
void recovered_40422994(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6,uint *param_7,uint *param_8,
                       uint *param_9,uint *param_10);
void recovered_40422bec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_40422e08(undefined4 *param_1,uint *param_2,uint *param_3);
uint recovered_40422e50(void);
undefined4 * recovered_40423c14(void);
void recovered_40423c20(void);
byte recovered_40423d48(void);
undefined4 recovered_40423de0(void);
undefined4 recovered_40423de8(void);
undefined4 recovered_40423df0(void *param_1);
undefined4 recovered_40423e18(void);
undefined4 recovered_40423e20(void);
void recovered_40423e28(uint param_1);
void recovered_40424018(byte *param_1,uint param_2);
void recovered_40424054(char *param_1,int param_2);
undefined4 recovered_4042408c(char *param_1,undefined1 *param_2);
undefined4 recovered_404241d8(void);
undefined4 recovered_404241e0(void);
bool recovered_404241e8(undefined8 *param_1);
undefined4 recovered_4042426c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_40424288(void);
undefined4 recovered_40424290(longlong *param_1);
undefined4 recovered_404243ac(void);
int recovered_404243b4(void);
ulonglong recovered_404243b8(void);
uint recovered_404243bc(void);
uint recovered_404244ac(void);
undefined * recovered_404245e4(void);
uint recovered_404245f0(uint *param_1,int param_2,undefined4 param_3,uint param_4);
bool recovered_40424700(char *param_1);
uint recovered_40424754(uint param_1,uint param_2,char *param_3,uint param_4,int param_5,
                       char *param_6,int param_7,uint param_8,char *param_9,uint *param_10);
void recovered_404248c0(byte *param_1,uint param_2);
void recovered_40424a6c(char *param_1,int param_2);
void recovered_40425580(byte *param_1,uint param_2);
void recovered_40425848(char *param_1,int param_2);
uint128 * recovered_404264b0(char *param_1);
char * recovered_40426814(void);
void recovered_40426a6c(int param_1,uint param_2,int param_3,uint param_4);
uint recovered_40426f20(int param_1,uint param_2,undefined1 *param_3);
void recovered_4042709c(char *param_1,uint param_2,byte *param_3);
uint recovered_404271c8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint *param_6);
bool recovered_40427538(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,int param_8,uint *param_9);
undefined4
recovered_4042761c(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,int *param_8);
void recovered_404276e4(int param_1);
void recovered_404277b4(uint param_1,int param_2);
void recovered_4042782c(void);
int recovered_40427954(int param_1);
bool recovered_40427a14(int param_1);
undefined4 recovered_40428000(int param_1,int param_2);
uint recovered_4042818c(int param_1,uint param_2);
undefined8 recovered_40428934(int param_1,uint param_2,int param_3);
uint recovered_40428acc(int param_1,uint param_2,int param_3,int param_4,uint param_5);
undefined4 recovered_40428cdc(byte *param_1,int param_2,uint param_3);
uint recovered_404295b8(int param_1,int param_2,int param_3);
void recovered_4042982c(int param_1,int param_2);
bool recovered_40429a8c(int param_1,uint *param_2);
undefined4 recovered_40429bc0(int param_1,uint param_2,int param_3,int param_4);
bool recovered_40429d0c(int param_1);
void recovered_40429f34(int param_1,uint *param_2);
void recovered_40429fc4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,uint param_8,int param_9);
undefined8 recovered_4042a140(void *param_1,uint param_2);
char recovered_4042a47c(int *param_1);
undefined8 recovered_4042ab24(uint param_1,uint param_2);
undefined8
recovered_4042aea4(uint param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint *param_5);
void recovered_4042b06c(int param_1);
uint recovered_4042b264(int param_1,uint param_2,int param_3,uint param_4);
undefined8 recovered_4042b800(void);
undefined8
recovered_4042ba84(uint param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,int *param_8);
undefined4 recovered_4042bd94(uint param_1);
bool recovered_4042be58(uint param_1);
void recovered_4042bfc0(int *param_1,char *param_2,char *param_3);
void recovered_4042ec50(undefined4 param_1,uint param_2);
void recovered_4042edec(uint param_1,uint param_2);
uint recovered_4042f628(char param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5,
                       void *param_6,uint param_7);
undefined4 recovered_4042ffd4(void);
undefined4
recovered_40430330(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint *param_5,
                  undefined1 *param_6);
undefined8 recovered_4043052c(void *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_40430700(int param_1);
void recovered_40430788(void);
void recovered_40430f7c(void);
undefined1 recovered_40431720(void);
undefined4 recovered_404324d0(char *param_1,undefined1 *param_2);
undefined4 recovered_404327b4(byte param_1,uint param_2,byte *param_3);
undefined4 recovered_40433004(void);
undefined4
recovered_4043343c(uint param_1,undefined1 *param_2,char *param_3,byte *param_4,ushort *param_5,
                  undefined1 *param_6);
undefined4 recovered_40433724(uint param_1,uint param_2,uint param_3);
void recovered_40433df0(uint param_1,uint param_2);
bool recovered_40433e60(int *param_1,uint param_2,uint param_3);
bool recovered_40433f98(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6);
bool recovered_40434050(int param_1,uint param_2,uint *param_3);
longlong recovered_40434120(undefined4 param_1,uint param_2,uint *param_3,uint *param_4,
                           uint *param_5,uint *param_6,uint *param_7);
bool recovered_40434f3c(int param_1,uint param_2);
bool recovered_40435138(uint *param_1,uint *param_2);
uint recovered_40435228(int *param_1,uint param_2,uint param_3);
void recovered_404353d4(undefined4 param_1,int param_2);
undefined4 recovered_40435434(uint *param_1,uint *param_2);
void recovered_404355cc(void);
bool recovered_404356e4(int *param_1,uint param_2);
bool recovered_40435804(int param_1,uint *param_2,uint param_3,int param_4,uint param_5,uint param_6
                       ,byte param_7);
void recovered_40435a30(uint param_1);
undefined4
recovered_40435b30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6);
undefined4 recovered_40435bf0(void);
undefined4
recovered_40435cb4(uint param_1,byte *param_2,undefined1 *param_3,byte *param_4,undefined2 *param_5,
                  byte *param_6,byte *param_7,undefined2 *param_8,byte *param_9);
undefined8
recovered_40436464(int param_1,char *param_2,byte param_3,int param_4,undefined4 param_5,
                  byte param_6);
undefined4 recovered_404369e0(void);
void recovered_404370e4(undefined1 *param_1,undefined1 param_2,int param_3,int param_4);
void recovered_40437184(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                       byte param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9);
undefined4 recovered_40437260(void);
byte recovered_40437448(byte *param_1,ulong param_2,int param_3,uint param_4,undefined4 *param_5,
                       int param_6);
undefined4 recovered_40437dc0(byte *param_1);
undefined4 recovered_40437f3c(int param_1,uint param_2,undefined4 *param_3,int param_4);
int recovered_4043856c(uint param_1,uint param_2,int param_3,int param_4,uint param_5,uint *param_6,
                      uint *param_7);
undefined4 recovered_40438894(int param_1);
undefined4
recovered_40438a84(byte *param_1,ulong param_2,int param_3,uint param_4,undefined4 *param_5,
                  int param_6);
undefined4 recovered_40438c50(uint param_1);
undefined1 recovered_40438ce4(int param_1,uint param_2);
undefined4
recovered_404398f4(uint param_1,undefined1 *param_2,byte *param_3,ushort *param_4,
                  undefined1 *param_5);
undefined4 recovered_40439be0(void);
undefined4 recovered_40439c34(undefined4 param_1,uint param_2,undefined1 param_3,byte *param_4);
uint recovered_4043a6e0(int param_1);
uint recovered_4043a7b0(int param_1);
undefined4 recovered_4043a8b4(uint param_1,uint param_2,uint param_3,undefined1 *param_4);
longlong recovered_4043ad08(int param_1,uint param_2,int param_3,uint *param_4);
bool recovered_4043ade4(uint param_1,uint param_2,uint param_3,uint *param_4);
bool recovered_4043ae68(int param_1,uint param_2,uint param_3);
bool recovered_4043b020(ushort *param_1);
undefined8 recovered_4043b194(undefined2 *param_1,uint *param_2);
undefined4 recovered_4043b308(void);
undefined4 recovered_4043b3f8(int *param_1);
bool recovered_4043b628(int *param_1);
bool recovered_4043b7bc(int param_1,undefined4 param_2,undefined2 *param_3);
void recovered_4043b8cc(int param_1);
undefined8 recovered_4043b998(uint param_1,undefined4 *param_2,uint *param_3);
undefined4
recovered_4043ba18(ushort *param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                  undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                  int param_10,undefined1 *param_11,uint param_12);
void recovered_4043c1a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_4043c218(undefined4 param_1);
uint recovered_4043c2b8(int param_1,int param_2);
undefined8 recovered_4043c37c(undefined4 param_1,uint param_2);
void recovered_4043c760(void);
undefined4 recovered_4043c9d8(void);
undefined8 recovered_4043cbb8(void);
undefined4 recovered_4043ce5c(uint *param_1);
undefined4 recovered_4043cf04(uint *param_1,uint param_2);
undefined4 recovered_4043d24c(uint param_1);
undefined4
recovered_4043d2e4(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                  undefined1 param_6,uint param_7);
undefined4
recovered_4043d7d8(byte *param_1,ulong param_2,int param_3,undefined4 *param_4,undefined4 *param_5);
undefined4
recovered_4043daa8(byte *param_1,ulong param_2,int param_3,uint param_4,undefined4 *param_5);
undefined4 recovered_4043dea8(int param_1,uint param_2,undefined4 *param_3);
undefined4 recovered_4043e47c(void);
bool recovered_4043e748(int *param_1,undefined4 *param_2,byte *param_3);
bool recovered_4043e9c4(int *param_1,uint param_2,undefined1 *param_3);
uint recovered_4043eb34(uint param_1);
undefined4 recovered_4043ec68(uint param_1,uint param_2,uint param_3,void *param_4);
undefined4 recovered_4043ed80(int param_1,uint param_2,int param_3,uint param_4);
undefined4 recovered_4043f0f8(int param_1,uint param_2,int param_3,uint param_4);
void recovered_4043f2f4(undefined **param_1,int param_2);
undefined4 recovered_4043f690(int param_1,uint *param_2);
bool recovered_4043fc44(int param_1,uint param_2,int param_3,uint param_4,int param_5);
undefined4 recovered_4043fec4(undefined4 param_1,undefined4 param_2,int param_3);
uint recovered_40440194(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
                       int param_5);
undefined8 recovered_404408f8(uint param_1,uint *param_2,uint *param_3,uint *param_4);
undefined4 recovered_40440a64(int param_1);
undefined4 recovered_40440b00(int param_1,uint *param_2);
undefined4 recovered_40440ea4(char *param_1,uint param_2,uint *param_3);
undefined4 recovered_404410a0(uint param_1,int param_2);
undefined8 recovered_40441390(int param_1,uint param_2);
void recovered_40441544(uint param_1,undefined *param_2);
void recovered_404418a8(uint *param_1,uint param_2);
void recovered_40441b10(void);
void recovered_40441c3c(int *param_1,uint param_2);
undefined4 recovered_40441d6c(uint param_1,int param_2);
void recovered_40442134(undefined4 param_1,undefined4 param_2);
undefined4 recovered_40442190(uint param_1,void *param_2,undefined4 *param_3);
undefined4 recovered_40442418(int *param_1,uint param_2,int *param_3,int param_4);
undefined8 recovered_40442708(undefined4 param_1,uint param_2);
bool recovered_40442b3c(uint *param_1);
bool recovered_40442bd0(uint *param_1);
undefined4 recovered_40442c64(uint *param_1,uint param_2);
undefined4 recovered_40442ea0(int param_1,undefined4 param_2,int param_3,int param_4);
undefined4 recovered_40443140(uint *param_1,uint param_2,void *param_3);
undefined4 recovered_40443b4c(int param_1,uint param_2,int param_3,undefined1 *param_4);
undefined4 recovered_40443c8c(int param_1);
undefined4 recovered_40443e50(int param_1,uint param_2,uint param_3,int param_4,int *param_5);
undefined4 recovered_40444230(int param_1,uint param_2,int param_3,uint *param_4);
bool recovered_40444660(int *param_1,int param_2,uint param_3,uint param_4,uint *param_5,
                       int *param_6);
undefined4 recovered_40444f5c(int *param_1);
bool recovered_40445170(int *param_1);
byte recovered_404451d0(void);
undefined4 recovered_404451fc(void *param_1);
byte recovered_40445288(void);
uint recovered_4044532c(uint *param_1,int param_2);
byte recovered_40445414(uint *param_1,int param_2);
uint recovered_40445518(uint param_1,uint param_2);
void recovered_4044553c(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_404455a0(void);
void recovered_404455e4(void);
undefined8 recovered_404455f4(undefined4 param_1,undefined4 param_2);
void recovered_4044562c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void recovered_40445664(void);
undefined4 recovered_4044566c(undefined4 param_1);
undefined * recovered_40445714(uint param_1);
bool recovered_40445848(int param_1,int *param_2);
bool recovered_404463a8(void);
bool recovered_40446420(void);
undefined4 recovered_404464b0(uint *param_1,undefined4 *param_2,uint param_3,uint param_4);
undefined4 recovered_404466f4(uint *param_1,undefined4 *param_2,uint param_3);
int recovered_40446ad0(int param_1);
void recovered_40446b78(uint param_1);
uint recovered_40446b94(void);
undefined4 recovered_40446bb4(void);
bool recovered_40446c58(undefined4 *param_1,int *param_2);
longlong recovered_40446d3c(void);
undefined4 recovered_40446e6c(uint *param_1,uint param_2,uint *param_3);
bool recovered_40446ec4(int param_1,uint param_2);
undefined4 recovered_40446f64(int param_1,uint param_2,undefined4 *param_3);
bool recovered_40447048(int param_1,uint param_2,int param_3,int param_4);
bool recovered_404471d8(int param_1,uint param_2,uint param_3,void *param_4);
bool recovered_40447260(void *param_1,int param_2,void *param_3);
bool recovered_404472c4(int param_1,int param_2,uint param_3,uint param_4);
undefined2 recovered_4044735c(undefined2 *param_1);
undefined4 recovered_40447364(undefined4 *param_1);
undefined8 recovered_4044736c(undefined8 *param_1);
void recovered_4044737c(undefined2 *param_1,undefined2 param_2);
void recovered_40447384(undefined4 *param_1,undefined4 param_2);
void recovered_4044738c(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
uint recovered_404473c8(byte *param_1,int param_2);
char * recovered_40447488(uint param_1);
undefined4 recovered_404474a8(int param_1);
undefined4 recovered_40447afc(byte *param_1,uint param_2,uint *param_3,uint *param_4);
undefined4 recovered_40447c68(short *param_1);
undefined4 recovered_40447f5c(char *param_1,uint param_2);
int recovered_40448128(void *param_1,uint param_2,void *param_3);
undefined4 recovered_40448554(char *param_1,short *param_2);
undefined8 recovered_40448894(uint param_1,uint param_2,int param_3);
int recovered_40448904(undefined4 *param_1,uint param_2,uint param_3,void *param_4,void *param_5);
int recovered_40448aa4(undefined4 *param_1,uint param_2,uint param_3,char *param_4,void *param_5);
int recovered_40448ffc(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                      char *param_6,void *param_7);
void recovered_404491f0(undefined4 *param_1,undefined1 *param_2);
void recovered_40449274(undefined4 *param_1,undefined4 *param_2);
uint32_t recovered_40449298(uint32_t current_low,uint32_t current_high,
                          uint32_t total_low,uint32_t total_high,int entry_address);
undefined4 recovered_4044939c(uint param_1,int param_2,void *param_3);
undefined4 recovered_4044946c(int param_1,int param_2,int param_3);
int recovered_404494c8(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                      uint param_6,int param_7,int param_8,uint *param_9,uint param_10,
                      uint *param_11);
int recovered_40449a48(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,
                      uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10
                      ,uint param_11,uint param_12,uint param_13,uint *param_14);
int recovered_4044a0d4(undefined *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                      uint param_6);
int recovered_4044a188(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,
                      uint param_5,uint param_6,uint param_7,uint *param_8,uint *param_9,
                      uint *param_10,uint param_11,uint *param_12,uint *param_13);
int recovered_4044a6d8(char *param_1,uint param_2);
int recovered_4044a6fc(char *param_1,uint param_2);
void recovered_4044a83c(char *param_1,uint param_2,char *param_3,uint param_4,void *param_5,
                       uint param_6,int *param_7);
int recovered_4044a878(char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,
                      uint param_6,void *param_7,uint param_8,int *param_9);
int recovered_4044ac1c(char *param_1,uint param_2,undefined4 *param_3,uint *param_4,
                      undefined4 *param_5,uint *param_6);
uint recovered_4044ae70(char *param_1,uint param_2,char *param_3,uint param_4,void *param_5,
                       uint param_6,int *param_7);
undefined4
recovered_4044aee4(byte *param_1,uint param_2,byte *param_3,uint param_4,int param_5,
                  undefined4 *param_6);
int recovered_4044b440(byte *param_1,byte *param_2);
int recovered_4044b708(byte *param_1,byte *param_2);
int recovered_4044ba70(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,int *param_4);
int recovered_4044bc24(undefined8 *param_1,undefined4 *param_2,int *param_3);
int recovered_4044bfac(undefined8 *param_1,undefined4 *param_2,int *param_3,uint *param_4);
int recovered_4044c084(short *param_1,uint param_2,void *param_3,uint param_4,int param_5,
                      uint param_6,uint *param_7,int *param_8);
undefined4 recovered_4044c77c(int *param_1,uint param_2,uint param_3,int *param_4);
undefined4 recovered_4044c8fc(int *param_1,uint param_2,uint param_3,int param_4);
undefined4 recovered_4044ca94(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_4044cc34(short *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                      undefined4 param_6,short *param_7);
uint recovered_4044cd88(undefined4 *param_1,uint *param_2,void *param_3,void *param_4,void *param_5);
uint recovered_4044d618(int param_1,void *param_2);
void recovered_4044d730(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       undefined4 param_6,undefined4 param_7);
undefined4
recovered_4044d7a8(undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5,
                  uint param_6,uint param_7,int param_8);
void recovered_4044d934(undefined4 *param_1,uint *param_2,void *param_3,void *param_4);
undefined4 recovered_4044d95c(int *param_1,int *param_2,undefined4 param_3,int param_4);
int recovered_4044da14(undefined4 *param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5
                      );
int recovered_4044dc7c(undefined4 *param_1,uint param_2,uint param_3,int param_4,uint *param_5);
int recovered_4044e298(undefined4 *param_1,uint param_2,uint param_3,int param_4,int *param_5,
                      undefined *param_6,undefined4 param_7);
int recovered_4044e4bc(undefined4 *param_1,uint param_2,uint param_3,int *param_4,uint *param_5);
int recovered_4044e950(undefined4 *param_1,uint param_2,uint param_3,char *param_4,uint param_5,
                      int *param_6,int param_7,undefined4 param_8);
int recovered_4044ea24(int *param_1,undefined8 *param_2,void *param_3,undefined1 *param_4);
int recovered_4044eac8(undefined4 *param_1,char *param_2,uint param_3,int *param_4,void *param_5);
uint recovered_4044ee44(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5,
                       uint param_6,int *param_7,uint *param_8);
void recovered_4044f0c0(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_4044f0ec(int *param_1,int *param_2);
int recovered_4044f1d8(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,
                      void *param_5);
int recovered_4044f4a4(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,int *param_5,
                      void *param_6);
int recovered_4044fad4(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,uint param_5,
                      int *param_6,int *param_7,int *param_8);
void recovered_4045004c(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
void recovered_40450078(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
int recovered_404500a0(undefined4 *param_1,int param_2,byte *param_3,int param_4);
int recovered_40450178(undefined4 *param_1,uint param_2,uint param_3,char *param_4,uint param_5,
                      int *param_6);
int recovered_40450498(undefined4 *param_1,char *param_2,int *param_3);
int recovered_40450650(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,int *param_5,
                      void *param_6);
int recovered_404507fc(int param_1,int param_2,uint param_3,int param_4,undefined4 *param_5,
                      uint *param_6);
undefined4 recovered_40450b38(int param_1,undefined4 *param_2,uint *param_3);
undefined1
recovered_40450e88(int param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,int param_7);
void recovered_40450ff0(undefined1 *param_1,int param_2);
void recovered_40451010(undefined8 *param_1,uint param_2,uint *param_3);
void recovered_404511e0(uint *param_1,uint *param_2);
void recovered_404513ac(uint *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5);
void recovered_40451500(uint *param_1,uint *param_2,uint param_3);
void recovered_40451c20(uint *param_1,uint *param_2);
uint recovered_40451ddc(uint *param_1,uint param_2,undefined8 *param_3,uint param_4,
                       undefined4 *param_5,uint param_6,int param_7,uint param_8);
undefined4
recovered_404523a0(int *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5,
                  undefined8 *param_6,uint param_7,undefined8 *param_8,uint param_9,uint param_10,
                  uint param_11,uint param_12,int param_13);
void recovered_40453214(uint *param_1,undefined8 *param_2,uint param_3);
void recovered_40453588(uint *param_1,int param_2);
void recovered_404536d0(undefined8 *param_1,uint param_2,undefined4 *param_3,uint param_4);
void recovered_40453bf0(uint *param_1,byte *param_2,byte *param_3);
void recovered_40453c6c(uint *param_1,uint *param_2);
void recovered_40453d94(uint *param_1,byte *param_2,byte *param_3);
void recovered_40454380(uint *param_1,byte *param_2,byte *param_3);
void recovered_40454400(undefined4 *param_1,byte *param_2,byte *param_3);
undefined4
recovered_40454a84(uint *param_1,undefined8 *param_2,uint param_3,undefined1 *param_4,int param_5);
undefined4 recovered_40454d58(uint *param_1,byte *param_2,int param_3,byte *param_4,uint param_5);
void recovered_4045512c(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5
                       );
undefined4
recovered_40455150(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                  int param_6);
void recovered_40455704(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5
                       );
uint recovered_40455728(int *param_1,char *param_2,undefined8 *param_3,uint param_4);
undefined1 recovered_404559fc(char *param_1);
uint recovered_40455b88(int *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                       undefined8 *param_5,int param_6);
void recovered_40455cc0(char *param_1,uint *param_2);
undefined4
recovered_40455f40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5);
void recovered_40455f90(undefined1 *param_1);
undefined4 recovered_40456000(int *param_1,int *param_2);
uint recovered_404560a0(int *param_1,int param_2,undefined8 *param_3,uint param_4,
                       uint128 *param_5,undefined1 *param_6);
undefined4
recovered_404563e4(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4
recovered_40456470(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5);
uint recovered_404564fc(int *param_1,int param_2,undefined8 *param_3,uint param_4,
                       uint128 *param_5,undefined4 *param_6);
void recovered_40456e20(undefined4 param_1,undefined1 *param_2,int param_3);
uint recovered_40456e40(int *param_1,int param_2,uint param_3,uint param_4,undefined8 *param_5,
                       uint param_6,undefined4 *param_7,undefined4 *param_8);
void recovered_40457adc(uint *param_1,int param_2);
void recovered_40457cc0(uint *param_1,int param_2,int param_3);
void recovered_404587c0(undefined8 *param_1,int param_2,uint param_3);
void recovered_40458a00(int param_1,int param_2,int param_3,int param_4);
void recovered_40458cb0(uint128 *param_1);
uint recovered_40459308(int *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                       byte *param_5,uint128 *param_6,byte *param_7,undefined1 *param_8);
int recovered_404597c0(undefined4 *param_1,undefined1 *param_2,char *param_3,uint param_4,
                      int param_5,int param_6);
int recovered_404599f0(int param_1,int param_2,int param_3,int param_4,char *param_5,
                      undefined1 *param_6);
undefined4 recovered_40459bd8(int param_1);
undefined1 recovered_40459d8c(char *param_1);
undefined4 recovered_40459e9c(uint param_1,int *param_2);
int recovered_40459ee0(byte *param_1,byte *param_2,uint param_3,uint *param_4);
int recovered_4045a434(byte *param_1,uint param_2,byte *param_3,int param_4,uint param_5,
                      undefined4 *param_6);
undefined4 recovered_4045a918(char *param_1,uint *param_2);
undefined1 recovered_4045a9b0(int param_1);
void recovered_4045aac0(undefined4 *param_1,undefined4 *param_2);
int recovered_4045abc8(int param_1,int param_2,int param_3,int param_4,int param_5);
int recovered_4045accc(char *param_1,int param_2,int param_3);
int recovered_4045af98(char *param_1,uint param_2,undefined4 *param_3);
int recovered_4045b028(int *param_1,undefined8 *param_2,uint param_3,uint param_4,undefined4 param_5
                      ,undefined4 param_6,int *param_7);
int recovered_4045b3f4(short *param_1,char *param_2,undefined1 *param_3);
int recovered_4045b54c(int *param_1,void *param_2);
int recovered_4045b638(int param_1,int param_2);
undefined4 recovered_4045b70c(int *param_1,uint param_2,uint param_3,int param_4);
int recovered_4045b734(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4);
undefined4 recovered_4045b7c4(int *param_1);
int recovered_4045b858(int *param_1,undefined8 *param_2,uint param_3,undefined *param_4,int *param_5
                      );
void recovered_4045c380(int *param_1,int param_2,undefined *param_3,undefined *param_4);
int recovered_4045c454(int *param_1,void *param_2);
int recovered_4045c618(int param_1,int param_2);
undefined4 recovered_4045c6f0(int param_1,int param_2,int param_3,void *param_4);
undefined4 recovered_4045ca60(int *param_1);
int recovered_4045caf4(int *param_1,uint param_2,undefined4 *param_3,undefined *param_4);
int recovered_4045d574(int *param_1,undefined *param_2,undefined4 param_3,undefined *param_4);
int recovered_4045d9b0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,void *param_5
                      ,uint *param_6);
void recovered_4045daa8(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4);
byte recovered_4045db50(int param_1);
ushort recovered_4045db70(int *param_1);
uint recovered_4045dba8(int param_1,char *param_2,uint param_3,uint param_4,uint *param_5,
                       undefined4 *param_6);
int recovered_4045dcb4(char *param_1,uint param_2,undefined1 *param_3,uint param_4,uint *param_5);
uint recovered_4045df00(int param_1,uint param_2,uint param_3,byte param_4,int *param_5,
                       undefined4 *param_6);
uint recovered_4045e5a8(int param_1,int *param_2,byte *param_3,uint param_4,int param_5,uint param_6
                       ,int *param_7,uint *param_8);
int recovered_4045e6b4(int param_1,int *param_2,int *param_3,undefined *param_4,undefined4 param_5);
uint recovered_4045e7c0(int *param_1,char *param_2,uint param_3,undefined1 *param_4,int *param_5,
                       void *param_6);
uint recovered_4045e93c(int param_1,char *param_2,uint param_3,int *param_4,int *param_5);
void recovered_4045ead8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,
                       undefined1 *param_4);
int recovered_4045eb44(int *param_1,int param_2);
uint recovered_4045ec3c(int *param_1,char *param_2,uint param_3,undefined2 param_4,
                       undefined4 param_5,undefined4 param_6,int *param_7,void *param_8);
uint recovered_4045eccc(int *param_1,char *param_2,uint param_3,undefined1 *param_4,int *param_5,
                       void *param_6);
uint recovered_4045ee48(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
uint recovered_4045f218(int param_1,uint *param_2,uint param_3,int *param_4,uint *param_5);
int recovered_4045f850(int param_1,int *param_2);
uint recovered_4045fa8c(int param_1,int *param_2);
uint recovered_40460780(int *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                       undefined4 param_6,undefined4 param_7,int *param_8);
uint recovered_40460a78(int param_1,char *param_2,uint param_3,int *param_4,undefined4 *param_5,
                       byte *param_6);
bool recovered_40460c00(int param_1,char *param_2,uint param_3,char *param_4,uint param_5);
int recovered_40460d80(int param_1,uint *param_2,uint param_3,byte *param_4,uint param_5,
                      int *param_6,undefined4 *param_7);
uint recovered_40461038(int *param_1,char *param_2,uint param_3,int *param_4,int *param_5);
undefined4
recovered_4046124c(int param_1,undefined1 *param_2,undefined8 *param_3,int param_4,int param_5,
                  int param_6,void *param_7,uint param_8,int *param_9);
uint recovered_40461490(int *param_1,int *param_2,undefined4 *param_3);
uint recovered_40461614(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5
                       );
uint recovered_40461860(int *param_1,int *param_2,int *param_3,undefined1 *param_4);
int recovered_40461c20(int *param_1,int *param_2);
undefined4
recovered_40461e24(short *param_1,uint param_2,uint param_3,uint param_4,char *param_5,
                  undefined1 *param_6);
uint recovered_40462190(int *param_1,uint param_2,uint param_3,int param_4);
uint recovered_404622e8(int *param_1,uint param_2,uint param_3,void *param_4);
undefined4 recovered_404624bc(int *param_1,int param_2,int *param_3);
undefined4
recovered_40462548(void *param_1,int param_2,uint param_3,uint param_4,char *param_5,uint param_6,
                  void *param_7,uint param_8,uint *param_9);
int recovered_404626d0(undefined4 *param_1,uint *param_2,uint param_3,int *param_4,uint *param_5);
int recovered_40462b74(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_40462bbc(uint *param_1);
undefined4 recovered_40462bec(uint *param_1,undefined8 *param_2,void *param_3,undefined1 *param_4);
void recovered_40462c7c(int *param_1,uint param_2,uint param_3,undefined4 *param_4);
void recovered_40462cac(int *param_1,uint param_2,uint param_3,undefined4 *param_4);
char * recovered_40462ce0(uint param_1);
undefined4
recovered_40462d00(int param_1,uint param_2,uint param_3,int *param_4,void *param_5,int *param_6);
undefined4
recovered_404633b8(int *param_1,int param_2,uint param_3,int *param_4,undefined4 *param_5);
bool recovered_40463504(int param_1,int param_2);
void recovered_404635a4(int *param_1,int param_2,undefined4 *param_3);
void recovered_40463618(void *param_1,uint param_2);
int recovered_40463740(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5,
                      int *param_6,int *param_7);
undefined8
recovered_40465c4c(int *param_1,undefined4 *param_2,uint param_3,uint param_4,undefined4 *param_5,
                  uint param_6,undefined4 *param_7,undefined4 *param_8,uint *param_9,uint *param_10);
undefined4 recovered_40466084(int param_1,int param_2,int param_3);
undefined4 recovered_40466118(int param_1,int param_2,int *param_3,int param_4,int *param_5);
undefined4
recovered_40466618(int param_1,uint param_2,uint param_3,undefined4 *param_4,int *param_5,
                  int param_6,int *param_7);
uint recovered_40466c1c(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5,
                       int *param_6);
int * recovered_40466c44(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,
                        undefined4 *param_6,int *param_7,void *param_8,uint *param_9);
undefined4 recovered_40467400(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5);
int recovered_40467890(undefined4 *param_1,int param_2,int param_3);
undefined8 recovered_4046867c(undefined4 *param_1,uint param_2,int param_3,uint *param_4);
int recovered_40468ac0(int param_1,uint param_2,undefined4 *param_3,void *param_4,uint *param_5);
int recovered_40468ef0(undefined4 *param_1,int param_2,int param_3);
undefined4 recovered_40469c10(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5);
void recovered_40469ff8(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,
                       int *param_6,void *param_7,uint *param_8);
bool recovered_4046a038(undefined4 *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
bool recovered_4046a148(undefined4 *param_1,uint param_2,uint param_3,void *param_4,uint param_5);
undefined4 recovered_4046a258(int *param_1);
bool recovered_4046a290(undefined4 *param_1,uint param_2,uint param_3,void *param_4,uint param_5,
                       int param_6,uint param_7);
bool recovered_4046a498(undefined4 *param_1,uint param_2,uint param_3,void *param_4,uint param_5,
                       int param_6,uint param_7);
int recovered_4046a6f0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4);
undefined4 recovered_4046aa60(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4
recovered_4046ac1c(undefined4 *param_1,uint param_2,uint param_3,byte *param_4,uint param_5,
                  uint *param_6);
undefined8
recovered_4046b190(undefined4 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                  byte *param_6,uint *param_7,uint *param_8);
uint recovered_4046b3f0(byte *param_1,int param_2);
undefined4 recovered_4046b4b0(char *param_1,uint param_2);
undefined4
recovered_4046b5dc(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  char *param_6,uint param_7,undefined1 *param_8);
undefined4
recovered_4046b784(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  void *param_6,int param_7,uint param_8);
void recovered_4046b824(uint *param_1,uint param_2);
bool recovered_4046b8ec(char *param_1,uint param_2);
bool recovered_4046b9a4(int param_1,uint param_2);
undefined4 recovered_4046ba30(int *param_1,int param_2);
undefined4
recovered_4046bbdc(undefined4 *param_1,uint param_2,int param_3,uint param_4,uint param_5,
                  int param_6);
undefined4
recovered_4046bc8c(undefined4 *param_1,uint param_2,uint param_3,int param_4,void *param_5,
                  int param_6);
undefined4
recovered_4046bd40(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,int param_10);
undefined4 recovered_4046c040(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
undefined4
recovered_4046c2e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5
                  ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13);
undefined4 recovered_4046c530(undefined4 *param_1,int param_2,int param_3);
void recovered_4046c7e0(char *param_1,int param_2);
void recovered_4046c98c(void);
void recovered_4046ca34(void);
void recovered_4046cadc(char *param_1,undefined1 *param_2);
void recovered_4046cb2c(void);
void recovered_4046cb70(void);
bool recovered_4046cbb4(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_4046cce8(void);
void recovered_4046ccf0(void);
undefined4 recovered_4046ccf4(void);
undefined4 * recovered_4046ccfc(char *param_1,char *param_2);
void recovered_4046d064(char *param_1,char *param_2,uint *param_3);
undefined4 recovered_4046d164(uint *param_1);
uint recovered_4046d25c(undefined1 *param_1,uint param_2,uint param_3,int *param_4);
uint recovered_4046d388(int *param_1);
int recovered_4046d56c(char *param_1,int param_2,int param_3,uint *param_4);
undefined4 recovered_4046d6e4(int *param_1,uint param_2,int param_3);
undefined4 recovered_4046d794(int param_1);
undefined4 recovered_4046d7bc(uint *param_1);
undefined1 recovered_4046d894(int param_1);
undefined1 recovered_4046d8a4(int param_1);
void recovered_4046d8b4(int param_1);
void recovered_4046d8d0(uint param_1,int param_2);
undefined4 recovered_4046d8f4(int param_1);
undefined4 recovered_4046d984(int param_1,int param_2);
undefined4 recovered_4046daf8(int param_1,undefined4 *param_2,ulong *param_3);
bool recovered_4046dbf8(int param_1,int param_2,int param_3);
undefined4 recovered_4046dc80(void);
void recovered_4046dc88(void);
undefined4 recovered_4046dc8c(void);
undefined4 recovered_4046dc94(void);
undefined4 recovered_4046dc9c(void);
int recovered_4046dca4(char *left,char *right,ulong count);
char * recovered_4046dce8(undefined4 param_1);
undefined4 recovered_4046ddc0(void);
undefined4 recovered_4046ddc8(void);
void recovered_4046ddd0(void);
void recovered_4046dde8(int param_1);
undefined4 recovered_4046ddf8(undefined4 *param_1);
int recovered_4046de48(int param_1,int param_2);
void recovered_4046dea0(void);
undefined4 recovered_4046df24(void);
int recovered_4046df2c(int param_1,undefined4 param_2,int param_3);
void * recovered_4046df60(ulong param_1);
void * recovered_4046df8c(ulong param_1);
void recovered_4046dfb8(int param_1);
void recovered_4046e078(int param_1);
void recovered_4046e138(int param_1);
void recovered_4046e1f8(int param_1);
undefined4 recovered_4046e2b8(void);
uint recovered_4046e2c0(uint *param_1);
void recovered_4046e2d0(uint *param_1);
void recovered_4046e2e0(void);
undefined4 * recovered_4046e2e4(uint param_1);
void recovered_4046e3d8(int param_1);
uint recovered_4046e42c(int param_1,undefined4 param_2,int param_3);
void recovered_4046e468(void);
void recovered_4046e504(int param_1,undefined4 param_2,undefined4 param_3);
void recovered_4046e52c(undefined4 *param_1);
void recovered_4046e5f8(undefined4 *param_1);
void recovered_4046e610(undefined4 *param_1);
void recovered_4046e640(undefined4 *param_1);
void recovered_4046e64c(void);
void recovered_4046e658(undefined4 *param_1);
void recovered_4046e6b8(undefined4 *param_1);
void recovered_4046e76c(undefined4 *param_1);
undefined4 recovered_4046e778(void);
void recovered_4046e780(void);
int recovered_4046e78c(int *param_1,undefined4 param_2,undefined4 *param_3);
void recovered_4046e87c(void);
undefined4 recovered_4046e880(void);
int recovered_4046e888(int value);
int recovered_4046e89c(int value);
int recovered_4046e8dc(int value);
bool recovered_4046e908(undefined4 param_1,uint param_2);
bool recovered_4046e924(uint param_1);
bool recovered_4046e940(undefined4 param_1,uint param_2);
bool recovered_4046e95c(undefined4 param_1,uint param_2);
double recovered_4046e978(double value);
float recovered_4046ea60(float value);
double recovered_4046eb60(undefined4 param_1,undefined4 param_2);
double recovered_4046ec48(undefined4 param_1,undefined4 param_2);
double recovered_4046ec64(double value);
ulonglong recovered_4046ecbc(byte *param_1,undefined4 *param_2,uint param_3);
ulonglong recovered_4046ee34(byte *param_1,undefined4 *param_2,uint param_3);
undefined4 recovered_4046ee38(int param_1,undefined4 *param_2,undefined2 *param_3);
undefined4 * recovered_4046f1e4(uint param_1,undefined4 *param_2);
undefined1 recovered_4046f370(byte *param_1,uint param_2);
bool recovered_4046f454(byte *param_1,uint param_2);
uint recovered_4046f5fc(uint *param_1,uint *******param_2,uint *param_3);
undefined4 recovered_40471994(uint *param_1,int *param_2,uint *param_3);
bool recovered_40471e50(uint *param_1,undefined4 *param_2,int *param_3,int *param_4);
int recovered_40473a44(int param_1);
uint recovered_40473acc(char *param_1,uint *param_2);
bool recovered_40473df4(char *param_1,uint128 *param_2,uint128 *param_3,
                       uint128 *param_4);
bool recovered_40474df4(uint *param_1,byte *param_2,byte *param_3,uint param_4);
bool recovered_40474ee8(char *param_1,uint128 *param_2,uint128 *param_3,
                       uint128 *param_4);
uint recovered_40474ef0(char *param_1,uint128 *param_2,uint param_3,uint param_4);
uint recovered_40475420(char *param_1,int param_2,uint param_3,uint param_4);
uint recovered_40475898(char *param_1,char *param_2,char *param_3,char *param_4);
uint * recovered_40477f78(char *param_1);
void recovered_4047813c(int param_1);
void recovered_4047817c(int *param_1,uint param_2,undefined1 *param_3);
int * recovered_40478258(int *param_1,ulong param_2);
uint recovered_40478340(uint param_1,uint param_2);
undefined4 recovered_404783c8(undefined4 *param_1,byte *param_2);
bool recovered_40478624(int param_1,uint param_2,uint *param_3,int param_4);
undefined4 recovered_40478850(int param_1,uint param_2,uint *param_3,uint param_4,uint *param_5);
void recovered_404788ec(int *param_1,undefined4 *param_2);
int * recovered_404789dc(int *param_1,uint param_2,undefined1 *param_3);
bool recovered_40478ac0(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint *param_6);
undefined4 recovered_40478e84(int param_1,uint param_2,int param_3,uint *param_4,int *param_5);
void recovered_404797a4(byte *param_1,byte *param_2);
undefined4 * recovered_404798d8(undefined4 *param_1,uint param_2);
bool recovered_40479a00(int param_1,uint param_2,uint param_3,uint param_4,int *param_5);
bool recovered_40479d18(undefined8 *param_1,uint param_2,int *param_3);
int recovered_40479ebc(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_4047a020(int *param_1,int *param_2,uint param_3);
undefined4 recovered_4047b508(int *param_1,uint param_2,uint *param_3);
undefined4 recovered_4047b628(int *param_1,int param_2,int param_3,int *param_4,uint param_5);
int recovered_4047bcd0(int param_1);
void recovered_4047bcf4(void);
undefined4 recovered_4047bf04(int *param_1,int *param_2,undefined4 param_3);
void recovered_4047c304(void);
void * recovered_4047c480(int *param_1,int param_2,undefined8 *param_3,undefined8 *param_4);
uint recovered_4047c700(uint param_1,byte *param_2,int param_3);
void recovered_4047c830(int *param_1,undefined8 *param_2);
void recovered_4047ca74(int *param_1,undefined4 *param_2);
void recovered_4047cb68(int *param_1,undefined4 *param_2);
bool recovered_4047cc5c(int *param_1,undefined4 *param_2,uint param_3);
undefined4
recovered_4047ce3c(undefined4 param_1,undefined8 *param_2,uint128 *param_3,
                  uint128 *param_4,uint param_5,uint param_6);
int * recovered_4047d380(byte *param_1,int *param_2,float param_3);
int * recovered_4047d914(char *param_1,float param_2);
void recovered_4047dc10(int *param_1,float param_2,int param_3);
uint recovered_4047dc40(int *param_1,byte *param_2,int *param_3);
float * recovered_4047e298(undefined4 *param_1,uint param_2);
void recovered_4047e894(undefined4 *param_1,byte *param_2);
float * recovered_4047ee04(int param_1);
void recovered_4047ef58(int *param_1,uint param_2);
void recovered_4047f0f8(int param_1);
undefined4 * recovered_4047f2b8(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4);
void recovered_4047fec0(int *param_1,int *param_2,undefined4 *param_3);
int * recovered_4048057c(int *param_1);
int * recovered_404805e0(int *param_1);
void recovered_40480644(int *param_1);
undefined4 * recovered_404807f8(undefined4 *param_1);
void recovered_4048088c(undefined4 *param_1);
bool recovered_40480924(int param_1,int *param_2);
void recovered_40481328(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5);
undefined8 recovered_4048185c(int param_1);
undefined8 recovered_40481870(int param_1);
undefined8 recovered_40481884(int param_1);
undefined8 recovered_4048189c(int param_1);
undefined4 recovered_404818b4(void);
bool recovered_404818bc(int param_1,uint param_2,uint *param_3);
bool recovered_404819a0(int param_1);
bool recovered_40481ce8(int param_1);
undefined4
recovered_404820c0(int param_1,uint param_2,double *param_3,undefined4 param_4,int param_5);
void recovered_40483600(int *param_1,int *param_2);
int * recovered_40483abc(int *param_1,byte *param_2);
void recovered_40483dd4(int *param_1,uint param_2);
undefined4 * recovered_40484054(undefined4 *param_1,uint param_2);
void recovered_4048416c(int *param_1,int param_2,undefined8 *param_3);
void recovered_40484258(int *param_1,int param_2,undefined1 *param_3);
void recovered_404843ac(int *param_1,double *param_2);
void recovered_40484660(int *param_1,double *param_2);
void recovered_40484890(int *param_1);
void recovered_404849b8(int *param_1,double *param_2,double *param_3,double *param_4,int param_5);
undefined4 * recovered_40484ac8(undefined4 *param_1);
void recovered_40484bbc(undefined4 *param_1);
byte * recovered_40484bd0(int param_1,byte *param_2);
void recovered_40486984(int *param_1,byte *param_2,uint param_3,char *param_4,undefined4 param_5);
undefined8 recovered_404871d8(int param_1);
undefined8 recovered_404871e4(int param_1);
undefined8 recovered_404871f0(int param_1);
undefined8 recovered_404871fc(void);
undefined4 recovered_40487208(void);
undefined4 * recovered_40487210(undefined4 *param_1);
void recovered_40487230(int *param_1,int param_2,uint param_3);
void recovered_404873f4(int *param_1,uint param_2);
void recovered_40487570(undefined4 *param_1,byte *param_2,uint param_3);
undefined4 * recovered_404878b8(int *param_1,int *param_2);
void recovered_40487cd8(int *param_1,uint param_2);
void recovered_40487f6c(int *param_1,uint param_2);
undefined4 recovered_40488058(int *param_1,int *param_2,int param_3);
void recovered_40488778(int *param_1,uint param_2);
undefined4 recovered_404889f8(uint *param_1,uint *******param_2,undefined4 *param_3);
void recovered_40488ef0(int param_1,undefined4 param_2,int param_3);
uint recovered_40488f00(char *param_1,uint128 *param_2,uint128 *param_3,
                       uint128 *param_4,uint param_5,undefined4 param_6);
undefined4 recovered_40489210(void *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4);
int * recovered_404894cc(byte *param_1,int *param_2,float param_3);
void recovered_404895bc(int *param_1,float param_2);
undefined4
recovered_40489698(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 *param_7);
undefined4 recovered_404899c8(int *param_1,byte *param_2,int *param_3);
void recovered_40489b14(int *param_1);
undefined4
recovered_40489be8(void *param_1,uint param_2,uint param_3,ulong param_4,undefined4 *param_5);
undefined4 recovered_40489cb8(void *param_1,undefined1 *param_2,int *param_3,uint *param_4);
void recovered_4048a488(int *param_1,uint param_2);
double recovered_4048a5b8(uint *param_1,int param_2,int param_3);
void recovered_4048a730(undefined4 param_1);
undefined4 recovered_4048a750(char *param_1,undefined4 *param_2);
uint recovered_4048a990(undefined4 param_1);
void recovered_4048a9b0(undefined4 param_1);
void recovered_4048a9d0(uint param_1);
undefined4 recovered_4048ab3c(void);
void recovered_4048ad30(uint param_1);
uint recovered_4048aee8(ulong param_1);
void recovered_4048af68(undefined4 *param_1,int param_2);
void recovered_4048b0cc(void);
uint recovered_4048b14c(undefined1 *param_1,int param_2);
undefined4 recovered_4048b348(void);
undefined4 recovered_4048b4d4(void *param_1);
undefined4 recovered_4048b740(void);
int recovered_4048bc78(undefined4 *param_1,int param_2);
void recovered_4048bdec(int param_1);
uint recovered_4048be28(uint backgroundRgb,uint foregroundRgb,uint textModeAttribute);
void recovered_4048c310(void);
uint recovered_4048c8ac(uint ch);
undefined4 recovered_4048cbc0(int param_1,uint param_2,int param_3);
uint recovered_4048cd0c(char *text);
uint recovered_4048d058(void);
byte recovered_4048d908(void);
uint recovered_4048da5c(void);
bool recovered_4048dd08(uint param_1);
void recovered_4048e1e0(int param_1);
uint recovered_4048e2e0(void);
void recovered_4048e468(void);
uint recovered_4048e594(void);
void recovered_4048e960(void);
void recovered_4048ea84(char *format,...);
uint recovered_4048ebb0(char *path,void *outInfo);
undefined4 recovered_4048ec6c(char *param_1,undefined1 *param_2);
undefined4 recovered_4048ed9c(uint param_1,uint param_2);
uint recovered_4048ef40(char *path,void *data,uint size);
uint recovered_4048f03c(char *param_1,byte *param_2,uint param_3);
undefined4 recovered_4048fea0(char *param_1);
bool recovered_40490020(void);
uint recovered_40493af8(char *outText,uint outTextSize);
undefined4 recovered_40493b60(uint param_1,char *param_2,uint param_3,int param_4,uint param_5);
bool recovered_40493cf8(void *param_1,uint param_2,int param_3,undefined8 *param_4);
undefined4 recovered_40493e0c(undefined8 *param_1);
undefined4 recovered_40493ec0(int param_1);
uint recovered_40493fa0(char *text,uint textSize);
uint recovered_40494004(char *outText,uint outTextSize);
uint recovered_404941b0(void);
uint recovered_4049426c(char *path);
uint recovered_404942d4(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
uint recovered_4049545c(char *path,void *outImage);
ulong recovered_404955f8(char *param_1,int param_2,int param_3,uint *param_4);
void recovered_40495ad0(int *param_1);
uint recovered_40495bcc(char *path,void *rgbaPixels,uint width,uint height,uint stride,uint format);
uint recovered_40495c98(char *path,uint outputChannels,void *outPcm);
undefined4 recovered_40495dbc(byte *param_1,undefined4 *param_2,byte *param_3,uint param_4);
void * recovered_40495e90(char *path,float fontSize);
undefined4 recovered_40495f94(byte *param_1);
void recovered_404961a8(byte *param_1,uint param_2);
uint recovered_404961ac(char *param_1,uint param_2,byte *param_3,int param_4);
bool recovered_4049625c(undefined1 *param_1,uint param_2,byte *param_3,uint param_4,int param_5);
undefined4
recovered_40496678(char *param_1,ulong param_2,byte *param_3,int param_4,int param_5,int param_6,
                  int param_7);
uint recovered_4049769c(char *param_1,uint param_2,byte *param_3,uint param_4);
void * recovered_40497754(ulong size);
void recovered_40497774(void *ptr);
void * recovered_40497874(void *ptr,ulong size);
uint recovered_404979b8(char *path,void *entries,uint entryCapacity,uint *outEntryCount);
undefined4 recovered_40497fd4(int param_1,undefined1 *param_2);
undefined4 recovered_40498534(int param_1);
undefined4 recovered_40498bbc(int param_1);
void recovered_40498c08(char *param_1,byte *param_2,char *param_3,uint param_4);
undefined4 recovered_40498f68(char *param_1,int param_2,uint param_3,uint *param_4);
bool recovered_40499358(int param_1,int param_2,undefined4 *param_3);
undefined4 recovered_4049947c(int *param_1,void *param_2,undefined4 *param_3);
bool recovered_40499680(char *param_1,char *param_2,char *param_3);
undefined4
recovered_404997c0(char *param_1,char *param_2,int param_3,undefined4 param_4,uint param_5);
uint recovered_40499964(char *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,uint *param_6,undefined4 *param_7);
undefined8 recovered_40499ef0(char *param_1,ulong *param_2,uint *param_3,uint param_4);
undefined8
recovered_4049a170(ulong *param_1,uint param_2,char *param_3,int param_4,undefined4 param_5,
                  uint param_6);
int recovered_4049a39c(void);
undefined4 recovered_4049a3f0(uint param_1,int *param_2);
uint recovered_4049a770(void *entries,uint entryCapacity,uint *outEntryCount);
undefined4 recovered_4049aa40(void);
void recovered_4049c57c(char *param_1,int param_2,char *param_3,uint param_4);
char * recovered_4049c688(int param_1);
uint recovered_4049c6ac(int param_1,uint param_2,int param_3,uint param_4,uint *param_5,
                       uint *param_6);
uint recovered_4049ca50(int deviceId);
uint recovered_4049cab0(int deviceId,char *path,void *outInfo);
void recovered_4049cbd8(uint param_1,char *param_2,uint *param_3);
undefined4 recovered_4049cc0c(uint param_1,char *param_2,int param_3,uint *param_4);
void recovered_4049ce24(uint param_1,char *param_2,uint *param_3);
uint recovered_4049ce58(int deviceId,char *path,void *entries,uint entryCapacity,uint *outEntryCount
                       );
uint recovered_4049cee0(uint param_1,char *param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,uint *param_7,undefined4 *param_8);
uint recovered_4049cf80(int deviceId,char *path,void *data,uint size);
uint recovered_4049d090(int deviceId,char *path);
uint recovered_4049d0f4(int deviceId,char *oldPath,char *newPath);
uint recovered_4049d160(char *param_1,char *param_2);
uint recovered_4049da00(int deviceId,char *path);
undefined4 recovered_4049db34(char *param_1,undefined1 *param_2,char *param_3);
uint recovered_4049ddf0(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
uint recovered_4049e344(int deviceId,char *path,void *outImage);
uint recovered_4049e3b8(int deviceId,char *path,void *rgbaPixels,uint width,uint height,uint stride,
                       uint format);
void * recovered_4049e450(int deviceId,char *path,float fontSize);
uint recovered_4049e4e0(int deviceId,char *path,uint launchMode);
undefined4 recovered_4049e624(char *param_1,uint *param_2,undefined4 *param_3);
uint recovered_4049e828(char *path,uint launchMode);
void recovered_4049f4f4(void *param_1,char *param_2,char *param_3);
uint recovered_4049f6b0(char *oldPath,char *newPath);
uint recovered_4049f8c0(char *path);
uint recovered_4049f94c(void *function,void *context,char *name);
void recovered_4049fa40(char *format,...);
uint recovered_4049fab4(void *function,void *context,char *name,uint priority);
uint recovered_4049fbb4(uint priority,uint threadCount);
uint recovered_4049fdb4(void);
void recovered_4049fdf8(void);
void recovered_4049ff34(void);
uint recovered_404a0084(uint microseconds);
uint recovered_404a0168(void);
uint recovered_404a019c(void *outInfo);
void recovered_404a01dc(void);
undefined4 recovered_404a042c(uint *param_1);
uint recovered_404a07b4(void *devices,uint deviceCapacity,uint *outDeviceCount);
void recovered_404a095c(void);
undefined4 recovered_404a25cc(uint param_1);
int recovered_404a266c(void);
undefined4 recovered_404a2700(int param_1,undefined8 *param_2);
void recovered_404a31bc(uint param_1);
undefined4 recovered_404a323c(uint param_1,uint *param_2);
void recovered_404a3570(uint param_1);
uint recovered_404a4324(void *outInfo);
void recovered_404a4358(undefined4 *param_1);
uint recovered_404a4470(uint epochSecondsLow,uint epochSecondsHigh);
uint recovered_404a451c(void *processes,uint processCapacity,uint *outProcessCount);
uint recovered_404a4f20(void);
uint recovered_404a4f24(uint processId);
uint recovered_404a4f44(void *outStats);
undefined4 recovered_404a518c(void);
undefined4 recovered_404a5190(void);
longlong recovered_404a5678(void);
void recovered_404a57a0(void);
uint recovered_404a57a4(int deviceId,void *outStats);
int recovered_404a5bb8(int param_1);
undefined4 recovered_404a5c5c(int param_1,void *param_2,uint param_3);
undefined4 recovered_404a6444(int param_1,int *param_2);
undefined4 recovered_404a6758(undefined4 *param_1,uint param_2,uint *param_3);
undefined4 recovered_404a6814(void);
void recovered_404a6b18(void);
bool recovered_404a6c5c(int param_1,uint param_2,int param_3,undefined *param_4,uint param_5);
bool recovered_404a6dcc(uint param_1,uint param_2,undefined *param_3,uint param_4);
undefined4 recovered_404a786c(int param_1,uint param_2,int param_3,undefined *param_4,uint param_5);
uint recovered_404a7a30(undefined2 *param_1);
void recovered_404a7ddc(undefined4 *param_1,uint param_2,undefined *param_3,undefined1 *param_4);
undefined4 * recovered_404a7dfc(undefined4 *param_1,uint param_2,uint param_3);
uint recovered_404a8088(void *outInfo);
uint recovered_404a82a0(void *buffer,uint capacity,uint *outFrameBytes);
undefined4 recovered_404a84f8(int *param_1,undefined4 param_2,uint param_3,uint *param_4);
void recovered_404a87b8(uint *param_1);
uint recovered_404a8a48(void *pf_argument_frame,uint frameBytes);
undefined4 recovered_404a8c7c(void);
undefined4 recovered_404a8d34(void);
undefined4 recovered_404a8dec(undefined4 param_1,int param_2);
undefined4 recovered_404a8ebc(undefined4 param_1);
undefined4 recovered_404a8f7c(void);
undefined4 recovered_404a9034(int param_1);
uint recovered_404a90fc(void *outInfo);
uint recovered_404a9264(void *commands,uint commandCount);
uint recovered_404a9410(char *title,uint width,uint height);
undefined4 recovered_404a9a9c(int param_1,char *param_2);
void recovered_404a9c4c(void *param_1);
uint recovered_404a9dcc(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                       uint clearRgb);
undefined4
recovered_404a9e98(uint param_1,char *param_2,void *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7);
undefined4 recovered_404aa0c8(uint param_1,int param_2,uint *param_3);
uint recovered_404aa3bc(uint id);
uint recovered_404aa4a4(void *windows,uint windowCapacity,uint *outWindowCount);
void recovered_404aa5e0(int param_1,undefined4 *param_2);
uint recovered_404aa708(uint id,int x,int y,uint flagMask,uint flagValues);
uint recovered_404aa828(uint id,uint transparency,uint shadowIntensity);
uint recovered_404aa93c(uint id,uint mode,uint effectRange);
uint recovered_404aaa54(uint id,uint width,uint height);
uint recovered_404aad74(uint id,void *outWindow);
undefined4 recovered_404aae80(uint param_1,void *param_2,uint param_3,uint *param_4);
uint recovered_404ab208(uint id,char *title,void *rgbaPixels,uint width,uint height,uint stride,
                       uint clearRgb,void *outWindow);
undefined4 recovered_404ab368(uint param_1,byte *param_2);
ulong recovered_404ab868(uint param_1,void *param_2,uint param_3,undefined4 *param_4);
uint recovered_404ab9bc(uint id,char *fileMenu,char *editMenu,char *windowMenu);
uint recovered_404abbac(uint id,uint menuKind,uint menuIndex);
uint recovered_404abcc0(uint id,int x,int y,uint buttons,uint flags);
uint recovered_404abe58(uint id,void *outInfo);
undefined4 recovered_404abf98(uint param_1,int *param_2);
undefined4 recovered_404ac0f0(uint param_1,undefined8 *param_2);
undefined4 recovered_404ac230(uint param_1,int param_2);
undefined4 recovered_404ac394(uint param_1);
undefined4 recovered_404ac730(int *param_1,byte *param_2,uint param_3,uint *param_4);
uint recovered_404aca30(char *text,uint maxChars,uint scale,uint rgba,void *outImage);
bool recovered_404acf60(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
undefined4 recovered_404ad444(char *param_1,uint *param_2);
void recovered_404ad5d4(uint *param_1);
void recovered_404ad6e0(uint param_1);
void recovered_404adfac(int param_1);
undefined4 recovered_404ae224(uint *param_1,ulong *param_2);
undefined8 recovered_404afcd4(int param_1);
void recovered_404b02a4(void);
int recovered_404b02a8(uint param_1);
byte recovered_404b030c(int param_1);
undefined4 recovered_404b0330(undefined4 *param_1,uint param_2,uint param_3);
undefined4 * recovered_404b05cc(int *param_1,uint param_2);
longlong recovered_404b0a04(void);
void recovered_404b0ae0(int param_1);
undefined4 recovered_404b0bb8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
bool recovered_404b0c84(uint param_1);
bool recovered_404b0c98(int param_1);
undefined8 recovered_404b0cac(uint param_1,int param_2,byte *param_3,uint param_4,uint param_5);
undefined4 recovered_404b2e8c(int param_1,void *param_2,uint param_3,int param_4);
undefined4 recovered_404b2f54(int param_1);
undefined4 recovered_404b31a4(int param_1,int param_2,int param_3);
uint recovered_404b3408(int param_1,uint param_2,char *param_3,uint param_4);
char recovered_404b39a0(undefined4 *param_1);
int recovered_404b3a44(int param_1);
void recovered_404b3e9c(int param_1);
undefined4
recovered_404b3f78(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,uint param_4);
void recovered_404b405c(undefined4 *param_1);
void recovered_404b4110(void);
void recovered_404b4210(char *param_1);
uint recovered_404b431c(char *server,void *outInfo,char *errorText,uint errorTextSize);
undefined4 recovered_404b48dc(char *param_1,undefined1 *param_2,uint param_3);
undefined4 recovered_404b4a9c(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_404b4efc(byte *param_1,uint *param_2);
undefined4 recovered_404b508c(int param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5);
undefined4 recovered_404b5510(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_404b580c(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_404b589c(void);
undefined4 recovered_404b598c(void);
uint recovered_404b5f44(void *outInfo);
undefined4 recovered_404b605c(void);
undefined4 recovered_404b6104(int *param_1);
uint recovered_404b61f4(uint x,uint y,uint width,uint height);
void recovered_404b6418(uint param_1,uint param_2,uint param_3,uint param_4);
undefined4 recovered_404b66b8(uint *param_1);
uint recovered_404b68f8(uint *param_1);
void recovered_404b6cb4(void);
uint recovered_404b6d14(void *outInfo);
undefined4 recovered_404b6d68(void);
uint recovered_404b71cc(int param_1);
void recovered_404b7200(void);
void recovered_404b75d8(void);
void recovered_404b7d68(void);
uint recovered_404b7d90(char *line,char *outText,uint outTextSize);
void recovered_404b8380(void);
void recovered_404beb08(uint param_1);
undefined4 recovered_404bec34(void);
undefined1 recovered_404bf114(void);
undefined4 recovered_404bf30c(void);
void recovered_404bf604(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
undefined4 recovered_404bf620(int *param_1,char *param_2);
void recovered_404bf948(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_404bfa8c(void);
void recovered_404bfcf0(void);
void recovered_404c03ec(undefined4 *param_1,int param_2);
undefined4 recovered_404c05a8(void);
undefined4 recovered_404c0754(void);
void recovered_404c0b54(void);
bool recovered_404c0d28(void);
void recovered_404c0e74(char *param_1,ulong param_2);
void recovered_404c0ea0(char *param_1);
bool recovered_404c0f44(undefined1 *param_1);
void recovered_404c1168(void);
bool recovered_404c149c(char *param_1,char *param_2);
uint recovered_404c155c(char *param_1);
uint recovered_404c1aa4(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4);
void recovered_404c1c34(char *param_1,undefined1 *param_2);
void recovered_404c1c40(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,int param_7,int param_8);
void recovered_404c1e8c(void);
undefined4 recovered_404c29d8(undefined *param_1,undefined *param_2);
void recovered_404c2ad4(uint param_1);
void recovered_404c2d0c(uint param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                       int param_7);
uint recovered_404c2ff4(void);
bool recovered_404c3010(int param_1);
void recovered_404c30b4(uint *param_1,uint *param_2,int param_3);
void recovered_404c3150(undefined1 *param_1,uint param_2,int param_3);
void recovered_404c3174(uint *param_1,uint *param_2,uint param_3);
uint recovered_404c32bc(int param_1,int param_2,uint param_3);
undefined4 recovered_404c35e8(undefined *param_1,undefined *param_2);
undefined4 recovered_404c370c(int param_1,uint param_2,int param_3,uint param_4);
void recovered_404c3894(undefined4 param_1,undefined4 param_2,ulong param_3);
void recovered_404c3960(uint param_1,uint param_2,uint param_3);
undefined4 recovered_404c3ae0(uint param_1,uint param_2,uint param_3);
undefined4 recovered_404c3d0c(uint param_1,int param_2,uint param_3,int param_4);
undefined4 recovered_404c43b4(uint param_1);
undefined4 recovered_404c4454(byte *param_1,uint *param_2,undefined1 *param_3,int param_4);
void recovered_404c464c(int *param_1);
uint recovered_404c476c(uint *param_1,uint param_2);
void recovered_404c47ec(int param_1,int param_2,int param_3,int param_4);
undefined4 recovered_404c48d4(void);
void * recovered_404c4bac(void *param_1,uint param_2,uint param_3);
void recovered_404c4ccc(int *param_1);
void recovered_404c4e10(uint param_1,uint param_2,uint param_3);
void recovered_404c4f5c(int *param_1);
uint recovered_404c5064(byte *param_1,undefined4 param_2,byte *param_3,uint param_4);
uint * recovered_404c53d4(uint param_1,undefined4 *param_2,ulong *param_3);
undefined4 recovered_404c5590(uint param_1);
uint recovered_404c58cc(int param_1);
void recovered_404c5954(byte *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_404c5b28(char *param_1,char *param_2,undefined4 param_3,uint param_4);
ulong recovered_404c5e84(char *param_1);
uint recovered_404c6030(byte *param_1,uint param_2,undefined4 param_3,uint param_4);
undefined4 recovered_404c6150(char *param_1);
bool recovered_404c6678(char *param_1,char *param_2);
undefined4 recovered_404c6720(int param_1,undefined1 *param_2,uint param_3);
void recovered_404c6be8(char *param_1,uint param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_404c6e48(char *param_1,int param_2,uint *param_3);
uint recovered_404c705c(int param_1,char *param_2,uint param_3,uint param_4,uint *param_5,
                       undefined4 *param_6);
undefined4 recovered_404c710c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
undefined4 recovered_404c72c0(char *param_1,int param_2,undefined4 *param_3,ulong *param_4);
void recovered_404c74f4(void *param_1,uint param_2);
uint recovered_404c75f4(int param_1,int *param_2,byte *param_3,uint param_4,int param_5,uint param_6
                       ,int *param_7,uint *param_8);
uint * recovered_404c76c8(uint param_1);
int recovered_404c7814(void);
undefined4 recovered_404c7868(uint param_1,char *param_2,uint param_3,void *param_4,uint param_5);
undefined4 recovered_404c7ab0(int param_1);
undefined4 recovered_404c7d48(int param_1);
undefined4 recovered_404c7f84(char *param_1);
undefined4
recovered_404c7fe8(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,
                  undefined4 param_9,undefined4 param_10);
uint recovered_404c8160(uint param_1,uint param_2,uint param_3,byte *param_4,uint *param_5);
uint recovered_404c81b4(uint param_1,uint param_2,uint param_3,uint param_4,byte *param_5,
                       uint *param_6);
uint recovered_404c81e4(uint param_1,uint param_2,uint param_3,uint param_4,byte *param_5,
                       uint *param_6);
byte recovered_404c8a48(void);
uint recovered_404c8ac0(byte *param_1,int param_2);
void recovered_404c8b80(void);
byte recovered_404c8b90(int *param_1);
int recovered_404c9804(char *param_1);
undefined4 recovered_404c9db0(void);
void recovered_404ca000(char *param_1,char *param_2);
int recovered_404ca080(int param_1,int *param_2,uint param_3,undefined4 *param_4,ulong *param_5);
undefined4
recovered_404ca3c4(int param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,
                  undefined4 *param_6,ulong *param_7);
undefined1 recovered_404cad54(uint param_1,uint param_2);
uint recovered_404caf1c(byte *param_1,byte *param_2,byte *param_3,undefined4 *param_4,uint *param_5);
undefined4
recovered_404cb194(int param_1,uint param_2,uint param_3,undefined4 *param_4,uint *param_5);
bool recovered_404cb254(int param_1,uint param_2,uint param_3,undefined4 *param_4,uint *param_5);
undefined4
recovered_404cb720(char *param_1,byte *param_2,uint param_3,undefined4 *param_4,uint *param_5);
uint recovered_404cb940(void);
uint recovered_404cbafc(int param_1,int param_2,uint param_3);
bool recovered_404cbb64(void);
undefined4 recovered_404cbc04(undefined4 *param_1);
int recovered_404cbc0c(uint param_1,int param_2,uint param_3);
undefined4 recovered_404cbf58(void *param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_404cc10c(void *param_1,void *param_2);
undefined4
recovered_404cc1c8(byte *param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11);
undefined4
recovered_404cc524(int param_1,uint param_2,uint *param_3,int *param_4,uint *param_5,uint *param_6,
                  uint *param_7,int *param_8,uint *param_9);
undefined8 recovered_404cc714(undefined8 *param_1);
void recovered_404cc724(int *param_1,char *param_2,char *param_3);
undefined4 recovered_404cc7d4(void);
void recovered_404cc7f8(char *param_1,ulong param_2);
void recovered_404ccda4(uint *param_1,uint *param_2);
void recovered_404ccdfc(int *param_1,char *param_2,undefined4 param_3);
void recovered_404cce68(uint param_1,uint param_2,char *param_3,ulong param_4);
uint recovered_404ccf58(void);
bool recovered_404ccfc8(uint *param_1);
void recovered_404cd1a4(int *param_1,char *param_2,undefined1 param_3);
void recovered_404cd294(int *param_1,undefined4 param_2);
undefined4 recovered_404cd2f8(undefined4 param_1,uint *param_2);
void recovered_404cd574(int param_1);
bool recovered_404cd6bc(uint param_1,int param_2,int param_3,int param_4,uint param_5,
                       undefined4 *param_6,uint param_7,uint param_8,uint param_9,
                       undefined4 *param_10,int *param_11);
undefined4
recovered_404cd8c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  undefined4 *param_7,uint param_8,uint param_9,undefined4 *param_10);
undefined4
recovered_404cdb88(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5,
                  uint param_6,uint param_7,int param_8,uint param_9,int param_10,
                  undefined4 *param_11,int *param_12);
bool recovered_404cdda0(char *param_1,char *param_2);
undefined4 recovered_404cde08(undefined4 *param_1);
undefined1 * recovered_404ce2bc(uint param_1);
undefined4 recovered_404ce3a8(ushort param_1,undefined8 *param_2);
undefined4 recovered_404ce50c(int param_1,undefined4 param_2,undefined *UNRECOVERED_JUMPTABLE);
bool recovered_404ce590(uint param_1);
undefined4 recovered_404ce5a4(uint param_1,void *param_2);
undefined4 recovered_404ce890(undefined4 param_1,undefined4 param_2,uint param_3);
undefined8 recovered_404ce924(uint param_1);
bool recovered_404ce9d0(uint param_1,int param_2,int param_3,undefined1 *param_4,undefined1 *param_5
                       ,int param_6,int param_7);
undefined4 recovered_404ceb10(undefined4 *param_1,uint *param_2);
undefined4 recovered_404cee30(int *param_1,int *param_2,int *param_3,int *param_4);
undefined4
recovered_404cef34(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
uint recovered_404cf3f0(void);
undefined4
recovered_404cf448(int *param_1,uint *param_2,uint *param_3,uint param_4,char *param_5,int param_6,
                  uint param_7,uint param_8,uint param_9,uint *param_10);
uint recovered_404cf678(int param_1,uint param_2);
bool recovered_404cf7f4(int param_1,uint param_2);
undefined4 recovered_404cfea4(uint *param_1,uint param_2,uint param_3,uint *param_4);
void recovered_404cff98(int param_1,int param_2,uint param_3,uint param_4);
void recovered_404d003c(void *param_1,byte *param_2);
undefined4
recovered_404d0094(int param_1,uint param_2,int *param_3,char *param_4,byte *param_5,int param_6,
                  undefined1 param_7,undefined4 param_8,undefined4 param_9);
void recovered_404d05ec(uint128 *param_1,undefined8 *param_2);
int recovered_404d082c(char param_1);
undefined4 recovered_404d0844(byte param_1);
int recovered_404d0a04(byte param_1);
void recovered_404d0a20(int param_1);
bool recovered_404d0c90(int param_1,char *param_2,byte *param_3,uint param_4);
undefined4 recovered_404d143c(uint param_1);
byte recovered_404d1550(uint param_1);
int recovered_404d16d8(void);
undefined4 recovered_404d1824(void);
undefined4 recovered_404d1a2c(uint param_1,uint *param_2,int param_3,int param_4);
bool recovered_404d1c78(uint param_1,int param_2,uint param_3,uint param_4);
void recovered_404d1f2c(uint param_1);
undefined4 recovered_404d20dc(int param_1);
undefined4 recovered_404d2dd0(void);
undefined4 recovered_404d30a0(int param_1,uint param_2,int param_3);
uint recovered_404d31c4(int param_1,undefined4 *param_2);
undefined1
recovered_404d393c(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,uint param_4);
undefined4 recovered_404d56fc(int param_1,undefined4 *param_2);
undefined4 recovered_404d5dd4(undefined4 *param_1,char *param_2,uint param_3);
undefined4 recovered_404d61c4(uint param_1,uint param_2,uint param_3,undefined4 param_4);
undefined4 recovered_404d6840(uint param_1,uint param_2,uint param_3,undefined4 param_4);
bool recovered_404d6e3c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint *param_6);
undefined4
recovered_404d6f54(char *param_1,int param_2,int param_3,uint param_4,uint param_5,
                  undefined4 param_6,undefined4 param_7);
undefined4
recovered_404d72ec(int param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5,
                  uint param_6,int param_7,uint param_8,char *param_9,uint param_10);
undefined4 recovered_404d7714(int *param_1,uint param_2);
void recovered_404d7d38(void);
uint recovered_404d7f28(undefined4 param_1,undefined4 param_2);
undefined4 recovered_404d8110(void);
undefined4
recovered_404d890c(int *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                  int param_6);
void recovered_404d8b04(int param_1,int param_2);
int * recovered_404d8c2c(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 recovered_404d8ce4(int param_1,int param_2);
bool recovered_404d8d64(byte *param_1,uint param_2,uint param_3,undefined *param_4,uint param_5);
undefined4
recovered_404d93a4(byte *param_1,uint param_2,uint param_3,undefined *param_4,undefined1 *param_5);
void recovered_404d9568(byte *param_1);
void recovered_404d95f8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,void *param_4);
undefined4
recovered_404d9958(undefined4 *param_1,uint param_2,undefined *param_3,undefined1 *param_4,
                  uint param_5);
void recovered_404da4c0(void *param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6);
void recovered_404dacd0(void *param_1,void *param_2);
void recovered_404dae08(byte *param_1,void *param_2,void *param_3);
bool recovered_404db450(int param_1,uint param_2,undefined *param_3,ulong param_4,int param_5);
undefined4 recovered_404db644(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_404db6e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int recovered_404db78c(int *param_1,int param_2);
void recovered_404db8a4(void *param_1);
undefined4 recovered_404db9a0(undefined4 *param_1,int param_2,char *param_3,undefined1 *param_4);
char * recovered_404dbbf4(int *param_1,int param_2,char *param_3,uint param_4);
undefined4 recovered_404dbedc(int *param_1,int param_2,void *param_3);
undefined4 recovered_404dc0ec(int *param_1,int param_2,undefined4 *param_3,uint *param_4);
bool recovered_404dc334(int *param_1,int param_2,undefined *param_3);
bool recovered_404dc378(int *param_1,short *param_2,int param_3,uint param_4,uint param_5,
                       int param_6);
undefined4
recovered_404dc5c0(int *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7);
undefined4
recovered_404dc6c0(int param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,int param_6,
                  uint param_7,uint param_8,undefined4 *param_9,uint *param_10);
undefined4
recovered_404dca4c(int param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,int param_6,
                  uint param_7,int param_8,uint param_9,byte *param_10);
undefined4 recovered_404dcd48(char *param_1,int param_2);
uint recovered_404dd018(char *param_1,int param_2);
int recovered_404dd148(uint param_1,uint param_2);
undefined4 recovered_404dd4c8(char *param_1,uint param_2,int *param_3,char *param_4);
undefined4 recovered_404dd7bc(char *param_1,uint param_2,char *param_3);
bool recovered_404ddb68(void);
undefined4 recovered_404ddb74(char *param_1,uint param_2,undefined1 *param_3);
undefined4 recovered_404ddd68(int *param_1,undefined4 *param_2,int *param_3);
void recovered_404de00c(int param_1,uint *param_2,int param_3);
undefined4 recovered_404de0b8(int *param_1,uint param_2);
void recovered_404de3d8(uint param_1,uint param_2);
void recovered_404de524(uint param_1);
uint recovered_404de5f0(uint param_1);
bool recovered_404de764(char *param_1,char *param_2);
bool recovered_404de7f0(uint *param_1,uint param_2,uint param_3);
bool recovered_404ded64(uint param_1,int param_2,undefined1 *param_3,uint param_4);
undefined4 recovered_404deee4(uint param_1,int param_2);
undefined4 recovered_404df134(void);
void recovered_404df324(uint param_1);
undefined4 recovered_404df3d8(void);
uint recovered_404df59c(char *param_1);
bool recovered_404dfa60(byte *param_1,char *param_2);
int recovered_404dfb2c(int param_1,int param_2);
undefined4 recovered_404dfe54(undefined1 *param_1,int param_2);
undefined4 recovered_404dffdc(int param_1,int param_2,int param_3);
undefined4 recovered_404e00f4(char *param_1);
uint recovered_404e01c8(uint param_1,byte *param_2,uint param_3);
uint recovered_404e05dc(uint param_1,char *param_2,int param_3,char param_4,undefined1 *param_5,
                       uint param_6);
bool recovered_404e0814(char *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4);
undefined4 recovered_404e0a70(void);
undefined4 recovered_404e0af0(char *param_1,undefined1 *param_2,int param_3,uint param_4);
void recovered_404e1940(char *param_1,uint param_2,int param_3,int param_4);
uint recovered_404e1c2c(int param_1);
uint recovered_404e1c54(byte *param_1,char *param_2,char *param_3,undefined4 *param_4);
undefined1 recovered_404e1d7c(char *param_1,undefined8 *param_2);
undefined4 recovered_404e2a94(char *param_1,char *param_2,char *param_3,undefined4 *param_4);
undefined4
recovered_404e33b8(byte *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,char *param_5,
                  ulong param_6);
undefined1 * recovered_404e3a80(void);
int recovered_404e3c74(uint *param_1,uint param_2,byte *param_3,uint param_4,byte *param_5,
                      char *param_6,ulong param_7,uint param_8,uint param_9,int param_10,
                      undefined8 *param_11,byte *param_12,uint param_13,undefined4 param_14);
bool recovered_404e4de4(char *param_1);
uint recovered_404e4eb0(uint param_1);
bool recovered_404e4ff4(uint param_1,byte *param_2);
bool recovered_404e5330(int param_1);
void recovered_404e543c(int param_1);
uint recovered_404e55c8(uint param_1);
void recovered_404e69c4(void *param_1);
undefined4
recovered_404e6a58(byte *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,byte *param_5
                  ,char *param_6,ulong param_7);
undefined4 recovered_404e6c84(char *param_1,char *param_2,undefined4 param_3,uint param_4);
undefined4
recovered_404e701c(byte *param_1,undefined4 *param_2,uint *param_3,int param_4,char *param_5,
                  char *param_6,ulong param_7);
void recovered_404e75b0(void);
uint recovered_404e7620(int param_1,char *param_2,int param_3,undefined1 *param_4,
                       undefined1 *param_5);
undefined4
recovered_404e79b4(int param_1,int param_2,int param_3,char *param_4,char *param_5,
                  undefined4 *param_6);
undefined4
recovered_404e7de8(uint *param_1,uint param_2,uint param_3,int *param_4,uint *param_5,
                  undefined4 *param_6,char *param_7,ulong param_8);
undefined8 recovered_404e8298(uint *param_1);
undefined4
recovered_404e82b0(char *param_1,uint param_2,undefined4 *param_3,uint *param_4,char *param_5,
                  ulong param_6);
undefined4
recovered_404e8720(uint *param_1,uint param_2,int param_3,int *param_4,uint *param_5,char *param_6,
                  ulong param_7);
undefined4
recovered_404e8bd0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  void *param_7,int *param_8,uint *param_9,char *param_10,ulong param_11);
undefined4 recovered_404e8fc8(void);
undefined4
recovered_404e95cc(uint *param_1,uint param_2,uint *param_3,uint param_4,int *param_5,uint *param_6,
                  undefined1 *param_7,char *param_8,ulong param_9);
undefined1 *
recovered_404e97b0(char *param_1,uint param_2,uint param_3,undefined1 param_4,uint param_5,
                  char *param_6,char *param_7,uint param_8);
undefined4
recovered_404ea010(uint param_1,byte *param_2,byte *param_3,uint param_4,char *param_5,ulong param_6
                  );
void recovered_404ea284(char *param_1);
undefined1 recovered_404ea540(byte *param_1,byte *param_2,byte *param_3);
undefined4 recovered_404ea6b0(char *param_1);
void recovered_404ea8ec(void);
void recovered_404ea97c(uint param_1,int param_2);
undefined4
recovered_404eaa04(int param_1,uint *param_2,uint *param_3,ulong *param_4,int param_5,uint param_6,
                  uint *param_7,char *param_8,ulong param_9);
undefined4
recovered_404eae1c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint *param_6,
                  undefined4 *param_7,undefined4 *param_8,uint *param_9,undefined4 *param_10,
                  uint *param_11,char *param_12,ulong param_13);
undefined4 recovered_404eb4a0(byte *param_1);
void recovered_404eba90(int param_1,int param_2,int param_3,int param_4);
void recovered_404ebb70(uint param_1);
void recovered_404ebf00(uint param_1);
undefined4
recovered_404ec110(uint param_1,undefined4 param_2,char *param_3,char *param_4,int param_5,
                  int param_6,char param_7,void *param_8,char *param_9,ulong param_10);
undefined4 recovered_404ecb2c(undefined *UNRECOVERED_JUMPTABLE);
undefined4
recovered_404ecbb0(uint *param_1,uint param_2,uint *param_3,uint param_4,undefined4 *param_5,
                  uint *param_6,char *param_7,ulong param_8);
undefined4
recovered_404edb70(int param_1,uint *param_2,uint *param_3,int *param_4,char *param_5,uint param_6);
void recovered_404edd38(int param_1);
undefined8 recovered_404edd80(uint *param_1,int param_2);
undefined4 recovered_404edda8(int param_1,uint param_2,int param_3,char *param_4);
uint recovered_404ede18(int param_1,uint param_2,uint param_3,uint param_4,int *param_5);
void recovered_404edeec(int param_1);
bool recovered_404ee014(uint param_1);
void recovered_404ee110(char *param_1,undefined4 param_2,char *param_3);
undefined4 recovered_404ee1a8(byte *param_1,char *param_2);
void recovered_404ee25c(int param_1);
void recovered_404ee854(int param_1,int param_2);
void recovered_404ee954(int param_1,uint *param_2,undefined4 param_3,int param_4);
void recovered_404eea5c(int param_1);
void recovered_404eeb54(void *param_1,int param_2,uint *param_3);
void recovered_404efc18(void *param_1);
void recovered_404efd84(void *param_1);
undefined * recovered_404efef0(uint param_1);
void recovered_404effa0(int param_1);
void recovered_404f00f8(int *param_1);
undefined4 recovered_404f0268(void);
undefined4 recovered_404f02e8(uint param_1);
int recovered_404f0388(char *param_1,uint param_2,int param_3,int *param_4);
undefined4 recovered_404f058c(int param_1,int param_2,int param_3,int *param_4,uint *param_5);
void recovered_404f097c(int param_1,int *param_2);
void recovered_404f0a6c(uint *param_1);
bool recovered_404f0cfc(int *param_1,undefined4 param_2,int param_3);
undefined4 recovered_404f10a0(int param_1,int param_2,uint param_3,char *param_4,ulong param_5);
undefined4 recovered_404f1528(int param_1,uint *param_2,uint param_3,char *param_4,ulong param_5);
undefined4 recovered_404f165c(uint param_1,char *param_2,ulong param_3);
undefined4 recovered_404f21bc(int param_1,uint param_2,uint param_3,int *param_4);
undefined4
recovered_404f2318(int param_1,uint param_2,uint param_3,uint *param_4,char *param_5,ulong param_6);
undefined4
recovered_404f25a8(uint *param_1,undefined4 *param_2,uint *param_3,char *param_4,ulong param_5);
bool recovered_404f2804(char *param_1,uint *param_2,uint param_3,char *param_4,ulong param_5);
bool recovered_404f3068(char *param_1,byte *param_2);
int recovered_404f30fc(char *param_1);
bool recovered_404f3284(void);
bool recovered_404f3308(int param_1);
undefined4 recovered_404f33bc(int param_1,uint *param_2,char *param_3,ulong param_4);
bool recovered_404f34c8(char *param_1);
undefined4 recovered_404f35b4(int param_1,char *param_2,ulong param_3);
undefined4
recovered_404f3950(uint param_1,uint param_2,uint param_3,int param_4,char *param_5,ulong param_6);
undefined4 recovered_404f4668(int param_1,uint param_2,uint *param_3,uint *param_4);
undefined4 recovered_404f472c(int param_1,uint *param_2,uint param_3,char *param_4,ulong param_5);
undefined4
recovered_404f4920(uint param_1,uint param_2,char *param_3,int param_4,uint *param_5,char *param_6,
                  ulong param_7);
undefined4
recovered_404f4b00(int param_1,undefined1 *param_2,int param_3,uint param_4,uint param_5,int param_6
                  ,char *param_7,ulong param_8);
void recovered_404f4d4c(void);
uint recovered_404f4ea4(uint param_1,char *param_2,uint *param_3);
undefined4
recovered_404f50f8(uint *param_1,int param_2,uint param_3,uint *param_4,char *param_5,ulong param_6);
undefined4
recovered_404f5560(uint *param_1,int param_2,int param_3,uint param_4,uint *param_5,char *param_6,
                  ulong param_7);
undefined4 recovered_404f5830(int param_1);
undefined4 recovered_404f5b30(uint param_1);
bool recovered_404f5bd0(char *param_1,char *param_2);
void recovered_404f5c54(char *param_1);
void recovered_404f5d08(char *param_1);
void recovered_404f5e24(int param_1,int param_2,int param_3,uint *param_4);
void recovered_404f6210(int param_1,char *param_2);
void recovered_404f666c(void);
undefined4
recovered_404f674c(char *param_1,uint param_2,char *param_3,undefined4 *param_4,int *param_5,
                  uint param_6,uint param_7,int param_8);
undefined8 recovered_404f7290(void);
undefined4 recovered_404f7354(longlong *param_1);
undefined4 recovered_404f7674(int *param_1,undefined4 *param_2);
undefined4 recovered_404f7a70(int param_1,uint param_2,void *param_3,uint param_4);
uint recovered_404f7c10(uint param_1,uint param_2,undefined *param_3,uint param_4);
bool recovered_404f8000(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_404f8050(uint param_1,int *param_2);
void recovered_404f8410(uint param_1);
void recovered_404f8614(uint param_1,uint *param_2,int param_3);
uint * recovered_404f9100(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                         undefined1 param_6,uint param_7);
undefined4 recovered_404f92e0(uint param_1,uint *param_2,undefined4 *param_3,int param_4);
void recovered_404fa090(int param_1);
void recovered_404fa4b0(void *param_1,void *param_2,uint param_3);
void recovered_404fa538(int param_1);
bool recovered_404fa8a4(uint param_1);
byte recovered_404fa8e4(char param_1);
bool recovered_404fa910(uint param_1);
undefined4 recovered_404fa930(int param_1,uint param_2,undefined4 *param_3);
uint recovered_404faa00(uint param_1,uint param_2,undefined4 *param_3,int param_4);
undefined4 recovered_404fad84(int *param_1,uint param_2,undefined4 *param_3);
undefined4 recovered_404fae38(uint param_1,uint param_2,uint param_3);
void recovered_404fb40c(void *param_1,char *param_2);
undefined4 recovered_404fb474(void *param_1,uint param_2,undefined4 *param_3);
void recovered_404fb668(void *param_1,int param_2,uint param_3);
undefined1 recovered_404fb70c(uint param_1,undefined4 *param_2);
int recovered_404fba3c(uint param_1,uint param_2,uint param_3,uint *param_4,int *param_5);
undefined4
recovered_404fc29c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,char *param_6);
void recovered_404fc4b8(uint param_1,uint param_2,uint param_3);
bool recovered_404fc69c(byte *param_1,uint param_2,uint param_3,undefined *param_4,uint param_5);
uint * recovered_404fc710(undefined1 param_1,uint param_2,uint param_3,uint param_4,uint param_5);
bool recovered_404fc8bc(byte *param_1,uint param_2);
undefined * recovered_404fd0ec(int param_1);
undefined4 recovered_404fd110(void);
uint recovered_404fd3c0(uint param_1);
undefined4 recovered_404fd790(void *param_1);
uint recovered_404fd820(int param_1,uint param_2);
void recovered_404fd8f0(int param_1,uint *param_2);
uint * recovered_404fdd78(void);
uint recovered_404fe14c(uint param_1);
byte recovered_404fe340(int *param_1);
undefined * recovered_404fe5ac(uint *param_1);
void recovered_404fe74c(char *param_1,int param_2,int param_3);
void recovered_404fe91c(char *param_1,char *param_2,ulong param_3);
undefined4 recovered_404fe9b8(uint param_1);
void recovered_404feb08(char *param_1);
void recovered_404ff860(int param_1,uint param_2);
undefined4 recovered_404ffa2c(int param_1,int *param_2);
undefined4 recovered_404ffeac(uint param_1,uint param_2,uint param_3);
undefined1 recovered_4050024c(char *param_1,undefined1 *param_2);
undefined4 recovered_405006cc(undefined4 *param_1,uint param_2,uint param_3);
bool recovered_40500728(byte *param_1,uint param_2,int param_3,uint param_4,undefined *param_5);
undefined4
recovered_40500794(byte *param_1,uint param_2,int param_3,uint param_4,undefined *param_5);
bool recovered_40500838(int param_1);
void recovered_40500844(void);
uint recovered_40500964(undefined4 *param_1,int param_2,int param_3);
void recovered_40500a30(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4);
undefined4 recovered_40500b14(undefined4 *param_1,undefined1 *param_2,uint param_3);
undefined4 recovered_40500c3c(undefined4 *param_1,int param_2,undefined4 *param_3);
void recovered_40500f30(void);
void recovered_40500f44(char *text,ulong length,int first,int last);
bool recovered_40501160(int param_1,int param_2,uint param_3,uint param_4);
undefined4 recovered_4050133c(int param_1,uint param_2,undefined8 *param_3,int *param_4);
void recovered_40501a54(char *param_1,ulong param_2,void *param_3,int *param_4);
void recovered_40501b1c(uint param_1,char *param_2,ulong param_3);
bool recovered_40501b74(int param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,void *param_7,uint param_8);
void recovered_40501cd4(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,
                       uint param_6);
undefined4 recovered_40501de0(void *param_1,uint *param_2,int param_3);
undefined4 recovered_40501ee8(int param_1,uint param_2,char *param_3,char *param_4,ulong param_5);
bool recovered_4050229c(ushort *param_1,ushort *param_2,uint param_3,uint *param_4,char *param_5);
void recovered_40502494(void);
uint recovered_405027c4(void);
undefined4 recovered_405027c8(uint param_1,uint param_2);
uint recovered_405028f4(uint param_1,uint param_2);
void recovered_40502a88(uint param_1,uint param_2,uint param_3);
undefined * recovered_40502d9c(void);
void recovered_40502fd8(uint param_1);
void recovered_40503c2c(int *param_1,int param_2,uint param_3,uint param_4);
void recovered_40503d74(int *param_1,uint param_2);
void recovered_40504014(void);
void recovered_4050402c(uint param_1,byte *param_2,uint param_3);
char recovered_405040a8(char *param_1,uint param_2,int param_3);
undefined4 recovered_405044e0(uint param_1,uint param_2);
undefined4 recovered_40504578(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
undefined4 recovered_40504600(uint param_1,uint param_2,uint param_3);
undefined4 recovered_40504970(uint param_1,uint param_2,char *param_3);
undefined4 recovered_40504cac(char *param_1);
undefined4 recovered_40504db0(void);
void recovered_40504db4(uint param_1);
void recovered_40504dc4(ulong param_1);
void recovered_40504dd4(void *memory);
undefined4 recovered_40504dd8(uint *param_1);
undefined4 recovered_40504ebc(undefined8 *param_1);
void recovered_40505014(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void recovered_40505024(void);
void recovered_40505034(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint *param_6);
void recovered_40505058(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       undefined4 param_6);
bool recovered_4050507c(uint param_1,int param_2,int param_3,uint *param_4);
void recovered_4050508c(uint *param_1,int param_2,uint *param_3);
void recovered_4050509c(undefined4 *param_1,int param_2,undefined4 param_3);
void recovered_405050ac(uint param_1,int param_2,int param_3,uint *param_4);
void recovered_405050bc(uint *param_1,int param_2,uint *param_3);
void recovered_405050cc(undefined4 *param_1,int param_2,undefined4 param_3);
undefined8
recovered_405050dc(undefined4 param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5);
void recovered_405050fc(undefined4 param_1,uint param_2,int param_3);
void recovered_40505100(void);
undefined4 recovered_40505104(undefined4 param_1,undefined4 param_2,undefined8 *param_3);
undefined4 recovered_4050514c(uint param_1,uint param_2,char *param_3);
undefined4 recovered_40505488(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 recovered_405054c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
uint recovered_405054f0(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 recovered_40505538(ulong *param_1,uint param_2);
undefined4 recovered_40505848(ulong *param_1,uint param_2,int param_3);
undefined4 recovered_40505bf4(uint param_1);
int recovered_40505f28(int *param_1);
undefined4 recovered_40506f44(void);
void recovered_40507668(void);
undefined4
recovered_40507760(ulong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,int param_9);
undefined4 recovered_40507b38(ulong *param_1,int param_2,int param_3);
undefined4 recovered_40507d3c(int param_1,int param_2,char *param_3);
undefined4 recovered_40507ef0(uint *param_1);
int recovered_40508098(int *param_1,int param_2);
undefined4 recovered_40508304(uint *param_1);
undefined4 recovered_405083d8(uint *param_1);
void recovered_405084b8(int param_1);
void recovered_4050854c(char *param_1,int param_2,int param_3);
undefined4 recovered_4050871c(uint param_1);
undefined1 recovered_4050886c(void);
undefined4 recovered_405088ec(int *param_1,uint *param_2,int param_3);
int * recovered_40508a10(void);
undefined4 recovered_40508b48(void *param_1,char *param_2,int param_3);
void recovered_40508f14(void);
bool recovered_40509678(void *param_1,void *param_2,int param_3);
undefined4
recovered_405097d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
undefined4 recovered_405098c4(void);
undefined4 recovered_40509990(byte *param_1);
undefined4 recovered_40509cd4(char *param_1);
undefined4 recovered_40509fa0(uint param_1);
uint recovered_4050a0ac(char *param_1);
bool recovered_4050a1ec(undefined4 *param_1,uint *param_2,uint param_3);
undefined4
recovered_4050a28c(void *param_1,uint param_2,int param_3,undefined1 *param_4,char *param_5,
                  ulong param_6);
void recovered_4050a49c(void);
undefined4 recovered_4050a658(uint param_1);
undefined4 recovered_4050a7a8(char *param_1,undefined1 *param_2,char *param_3,undefined4 *param_4);
uint recovered_4050aa60(char *param_1);
undefined4 recovered_4050ac94(byte *param_1,undefined4 param_2,byte *param_3,uint param_4);
undefined4
recovered_4050ad84(char *param_1,undefined1 *param_2,byte *param_3,char *param_4,char *param_5,
                  undefined1 *param_6);
undefined4 recovered_4050b078(char *param_1,char *param_2,char *param_3);
uint recovered_4050b304(char *param_1);
undefined4
recovered_4050b550(char *param_1,undefined1 *param_2,byte *param_3,char *param_4,undefined *param_5,
                  undefined1 *param_6);
uint recovered_4050be44(uint param_1);
uint recovered_4050bec4(uint param_1,char *param_2,uint *param_3);
bool recovered_4050bf74(int param_1);
void recovered_4050c0cc(void);
undefined4 recovered_4050c188(void);
void recovered_4050c248(void);
bool recovered_4050c2f8(uint param_1);
undefined4 recovered_4050c44c(void);
void recovered_4050c580(int param_1);
void recovered_4050c698(int param_1);
bool recovered_4050c6dc(uint param_1,uint param_2,int param_3);
undefined4 recovered_4050c7d4(uint param_1);
undefined * recovered_4050cb64(char *param_1,int param_2,int param_3);
undefined4 recovered_4050cc48(char *param_1);
undefined4
recovered_4050cd28(undefined *param_1,int param_2,uint param_3,undefined *param_4,int param_5);
undefined4 recovered_4050d178(char *param_1);
void recovered_4050d414(int *param_1,int *param_2);
uint recovered_4050d834(void);
undefined4 * recovered_4050d84c(void);
void recovered_4050da1c(uint param_1,uint param_2,uint param_3,byte *param_4,uint *param_5);
undefined4 recovered_4050da54(byte *param_1,char *param_2,ulong param_3);
bool recovered_4050ddb8(uint param_1);
void recovered_4050ddd0(undefined1 *param_1,uint param_2);
bool recovered_4050de34(int param_1);
void recovered_4050df68(char *param_1,ulong param_2,int param_3);
void recovered_4050dfec(undefined1 param_1);
undefined4 recovered_4050e0b0(int param_1,char *param_2,uint param_3);
bool recovered_4050e3a8(char *param_1,char *param_2,uint param_3);
void recovered_4050e6dc(uint param_1,char *param_2,undefined1 *param_3,uint param_4);
int recovered_4050e954(uint param_1,char *param_2,ulong param_3);
undefined4 recovered_4050ea28(int *param_1,char *param_2,ulong param_3);
undefined4 recovered_4050f2fc(char *param_1,int *param_2,char *param_3,ulong param_4);
void recovered_4051034c(undefined4 *param_1,undefined4 *param_2);
void recovered_405103f0(int param_1,int param_2,uint param_3);
bool recovered_40510594(int param_1,uint param_2);
void recovered_40510608(char *param_1,undefined1 *param_2,uint param_3);
void recovered_40510654(char *param_1,undefined1 *param_2,uint param_3);
int recovered_40510994(char *param_1,int param_2);
uint recovered_40510ea4(byte *******param_1,undefined1 *param_2,byte *param_3);
uint recovered_40511704(char *param_1,int param_2,uint param_3);
bool recovered_405117c4(void);
uint recovered_40511824(int param_1);
void recovered_4051184c(uint param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,
                       uint param_5,uint param_6,uint param_7);
void recovered_40511968(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_40511d38(void);
void recovered_40511fe0(uint param_1,uint param_2,char *param_3,ulong param_4);
undefined4 recovered_40512338(int param_1,uint *param_2);
void recovered_40512534(undefined1 *param_1,int param_2);
void recovered_405126ec(int param_1);
uint recovered_4051273c(int param_1,char *param_2);
undefined4 recovered_405128bc(int param_1,int param_2,uint param_3);
undefined4 recovered_40512b98(int *param_1,int param_2,char *param_3,int *param_4);
uint recovered_40513990(byte *param_1,int param_2);
undefined4
recovered_40513a50(undefined *param_1,uint *param_2,uint *param_3,char *param_4,char *param_5,
                  ulong param_6);
undefined4 recovered_405141b0(int param_1,uint param_2);
undefined4 recovered_40514d00(int param_1,void *param_2,uint *param_3);
uint recovered_40514ef0(uint param_1);
undefined4 recovered_405156fc(uint param_1,char *param_2,ulong param_3,uint *param_4);
undefined4 recovered_405165c4(char *param_1,undefined4 *param_2);
void recovered_40516d68(void);
undefined4 recovered_4051725c(int param_1);
undefined4 recovered_405174a4(uint param_1,byte *param_2,char *param_3,char *param_4,ulong param_5);
undefined4 recovered_40517cd8(int param_1,char *param_2,undefined4 *param_3);
undefined4 recovered_40518ba8(int param_1,uint param_2);
undefined4 recovered_40518f14(char *param_1,undefined4 *param_2);
uint recovered_40519480(int param_1,int *param_2,undefined4 *param_3);
undefined4 recovered_40519970(uint param_1,uint param_2);
undefined4 recovered_40519cc0(int param_1);
undefined1 recovered_40519df0(uint param_1,undefined4 *param_2);
undefined4 recovered_4051a130(int param_1,char *param_2);
void recovered_4051a368(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6);
bool recovered_4051a3d8(byte *param_1,uint *param_2,undefined4 param_3,uint param_4);
undefined4 recovered_4051a5e0(int param_1,uint param_2,int *param_3,char *param_4,ulong param_5);
uint recovered_4051aa90(int *param_1,uint param_2);
undefined4 recovered_4051ab8c(int *param_1);
uint recovered_4051abf8(char *param_1,byte *param_2,uint param_3,uint param_4);
undefined4 recovered_4051b224(int param_1,int param_2);
undefined4 recovered_4051b7a8(char *param_1);
undefined4 recovered_4051b968(void);
bool recovered_4051ba7c(undefined4 *param_1,uint param_2,uint param_3,uint param_4);
void recovered_4051bc08(char *param_1,ulong param_2,char *param_3,undefined4 param_4);
void recovered_4051bc44(void *param_1,int param_2);
bool recovered_4051bd20(void *param_1);
bool recovered_4051be40(char *param_1);
void recovered_4051bfa8(void *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
undefined1 recovered_4051c038(char *param_1,int param_2);
bool recovered_4051c0f0(char *param_1);
undefined4 recovered_4051c2ec(char *param_1,int param_2);
bool recovered_4051c374(char *param_1);
bool recovered_4051c558(char *param_1);
bool recovered_4051c8d0(char *param_1);
bool recovered_4051cb30(char *param_1);
bool recovered_4051ce34(char *param_1);
undefined1 recovered_4051d024(char *param_1);
undefined4 recovered_4051d298(char *param_1);
undefined4 recovered_4051d79c(int param_1,uint param_2,uint param_3,char *param_4);
undefined4 recovered_4051dc04(int param_1,uint *param_2,uint param_3,uint param_4,char *param_5);
undefined4 recovered_4051e084(int param_1,int *param_2,uint param_3,uint param_4,char *param_5);
undefined4 recovered_4051e3cc(int param_1,uint *param_2,uint param_3,uint param_4,char *param_5);
undefined4 recovered_4051ea30(int param_1,uint param_2,uint param_3,char *param_4);
undefined4 recovered_4051efbc(undefined4 *param_1,uint param_2,int param_3);
undefined4 recovered_4051f084(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5);
void recovered_4051f18c(char *param_1,void *param_2);
char * recovered_4051f4d4(char *param_1,uint param_2,char *param_3,ulong param_4);
void recovered_4051f5fc(void *param_1,uint param_2,char *param_3);
void recovered_4051f670(void *param_1,char *param_2);
void recovered_4051f6c8(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,int param_5,int param_6);
void recovered_4051f7d4(int param_1);
void recovered_4051f914(int param_1,int param_2,int param_3);
int recovered_4051fa90(undefined4 *param_1,uint param_2,undefined *param_3,uint param_4,
                      char *param_5,ulong param_6);
undefined4
recovered_4051fb08(void *param_1,uint param_2,void *param_3,uint param_4,int param_5,uint param_6);
undefined4 recovered_4051fd14(int param_1,int param_2,int param_3,char *param_4);
void recovered_4051ffc0(void *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       void *param_5,void *param_6,int param_7);
void recovered_405201b0(void *param_1,uint param_2,void *param_3,uint param_4,uint *param_5);
void recovered_405203e0(uint *param_1,void *param_2,uint param_3);
void recovered_4052067c(uint *param_1,uint *param_2);
void recovered_405207b0(void *param_1,int param_2,uint *param_3);
undefined4
recovered_40520880(uint param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5);
bool recovered_40520b54(char *param_1,char *param_2,int param_3,uint param_4);
bool recovered_40520d8c(char *param_1,uint *param_2);
bool recovered_40520ed0(char *param_1,char *param_2,undefined4 *param_3);
bool recovered_40520fe4(char *param_1,int param_2,uint param_3);
undefined4 recovered_405212d4(int param_1,uint param_2,uint param_3);
undefined4 recovered_40521504(int param_1,int *param_2,uint param_3,int param_4);
undefined4 recovered_4052169c(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 recovered_405217a0(int param_1,int *param_2,uint param_3,uint param_4);
undefined4 recovered_40521a20(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
undefined4 recovered_40521b80(int param_1,uint param_2,uint param_3);
uint recovered_40521d60(longlong *param_1,longlong *param_2,int param_3);
undefined4 recovered_40521f50(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4);
undefined4 recovered_405220b0(void *param_1,int param_2,int param_3);
void recovered_40522438(byte *param_1,uint param_2);
uint recovered_405225bc(char *param_1,void *param_2,uint param_3,ulong *param_4);
uint recovered_405226d8(char *path,void *data,uint size);
uint recovered_405226dc(char *param_1);
uint recovered_405227e4(char *param_1);
int recovered_4052289c(char *param_1,uint param_2);
undefined4 recovered_40522a80(char *param_1,int param_2,uint *param_3,uint *param_4);
void recovered_40522cd4(char *param_1);
uint recovered_4052308c(byte *param_1,int *param_2);
ulong recovered_405232a8(char *param_1,char *param_2,char *param_3,char *param_4);
uint recovered_40523cb0(int *param_1);
undefined4 recovered_40523d90(uint param_1);
undefined1 recovered_40523f4c(uint param_1);
bool recovered_405240a0(uint param_1,char *param_2);
undefined4 recovered_40524390(uint param_1);
uint * recovered_4052454c(void);
bool recovered_40524648(int param_1);
undefined4 recovered_4052473c(void);
void recovered_40524910(void);
bool recovered_4052498c(int param_1);
undefined4 recovered_40524d10(int param_1);
bool recovered_40525274(void);
void recovered_40525368(uint param_1,int param_2,int *param_3);
void recovered_405254f0(void);
void recovered_405262c4(void);
void recovered_405262fc(void);
void recovered_40526338(void);

/* Original analysis identifiers for manual recovery units. */
