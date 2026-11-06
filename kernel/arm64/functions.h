/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "arm64-recovery.h"
#include "efi_context.h"
#define _recovered_40400050 (*(volatile uint32_t *)(uintptr_t)0x40400050)
#define _recovered_40400054 (*(volatile uint32_t *)(uintptr_t)0x40400054)
#define _recovered_40400058 (*(volatile uint32_t *)(uintptr_t)0x40400058)
#define _recovered_4040005c (*(volatile uint32_t *)(uintptr_t)0x4040005c)
#define _recovered_40400060 (*(volatile uint32_t *)(uintptr_t)0x40400060)
#define _recovered_40400064 (*(volatile uint32_t *)(uintptr_t)0x40400064)
#define _recovered_40400068 (*(volatile uint32_t *)(uintptr_t)0x40400068)
#define _recovered_4040006c (*(volatile uint32_t *)(uintptr_t)0x4040006c)
#define _recovered_40400070 (*(volatile uint32_t *)(uintptr_t)0x40400070)
#define _recovered_40400074 (*(volatile uint32_t *)(uintptr_t)0x40400074)
#define _recovered_40400078 (*(volatile uint32_t *)(uintptr_t)0x40400078)
#define _recovered_4040007c (*(volatile uint32_t *)(uintptr_t)0x4040007c)
#define _recovered_40400080 (*(volatile uint32_t *)(uintptr_t)0x40400080)
#define _recovered_40400084 (*(volatile uint32_t *)(uintptr_t)0x40400084)
#define _recovered_40400088 (*(volatile uint32_t *)(uintptr_t)0x40400088)
#define _recovered_4040008c (*(volatile uint32_t *)(uintptr_t)0x4040008c)
#define _recovered_40400090 (*(volatile uint32_t *)(uintptr_t)0x40400090)
#define _recovered_40400094 (*(volatile uint32_t *)(uintptr_t)0x40400094)
#define _recovered_40400098 (*(volatile uint32_t *)(uintptr_t)0x40400098)
#define _recovered_4040009c (*(volatile uint32_t *)(uintptr_t)0x4040009c)
#define _recovered_404000a0 (*(volatile uint32_t *)(uintptr_t)0x404000a0)
#define _recovered_404000a4 (*(volatile uint32_t *)(uintptr_t)0x404000a4)
#define _recovered_404000a8 (*(volatile uint32_t *)(uintptr_t)0x404000a8)
#define _recovered_404000ac (*(volatile uint32_t *)(uintptr_t)0x404000ac)
#define _recovered_404000b0 (*(volatile uint32_t *)(uintptr_t)0x404000b0)
#define _recovered_404000b4 (*(volatile uint32_t *)(uintptr_t)0x404000b4)
#define _recovered_404000b8 (*(volatile uint32_t *)(uintptr_t)0x404000b8)
#define _recovered_404000bc (*(volatile uint32_t *)(uintptr_t)0x404000bc)
#include "cpu.h"
#define Reset (*(volatile uint8_t *)(uintptr_t)0)
#define UNK_4047ba41 (*(volatile uint8_t *)(uintptr_t)0x4047ba41)
#define UNK_4047ba42 (*(volatile uint8_t *)(uintptr_t)0x4047ba42)
#define pf_varargs_404019bc_0 recovered_404019bc
#define pf_varargs_404019bc_1 recovered_404019bc
#define pf_varargs_404019bc_10 recovered_404019bc
#define pf_varargs_404019bc_11 recovered_404019bc
#define pf_varargs_404019bc_2 recovered_404019bc
#define pf_varargs_404019bc_3 recovered_404019bc
#define pf_varargs_404019bc_4 recovered_404019bc
#define pf_varargs_404019bc_5 recovered_404019bc
#define pf_varargs_404019bc_6 recovered_404019bc
#define pf_varargs_404019bc_7 recovered_404019bc
#define pf_varargs_404019bc_8 recovered_404019bc
#define pf_varargs_404019bc_9 recovered_404019bc
#define pf_varargs_4041aa18_1 recovered_4041aa18
#define pf_varargs_4041aa18_10 recovered_4041aa18
#define pf_varargs_4041aa18_11 recovered_4041aa18
#define pf_varargs_4041aa18_2 recovered_4041aa18
#define pf_varargs_4041aa18_3 recovered_4041aa18
#define pf_varargs_4041aa18_4 recovered_4041aa18
#define pf_varargs_4041aa18_5 recovered_4041aa18
#define pf_varargs_4041aa18_6 recovered_4041aa18
#define pf_varargs_4041aa18_9 recovered_4041aa18
#define pf_varargs_4042ecb8_0 recovered_4042ecb8
#define pf_varargs_4042ecb8_1 recovered_4042ecb8
#define pf_varargs_4042ecb8_2 recovered_4042ecb8
#define pf_varargs_4042ecb8_3 recovered_4042ecb8
#define pf_varargs_40449f40_0 recovered_40449f40
#define pf_varargs_40449f40_10 recovered_40449f40
#define pf_varargs_40449f40_2 recovered_40449f40
void recovered_404000c0(void);
uint recovered_404000cc(void);
ulong recovered_40400334(void);
long recovered_40400380(void);
ulong recovered_404003c0(void);
long recovered_404003fc(void);
void * recovered_4040042c(ulong size);
void recovered_404004a0(ulong *param_1,long param_2);
ulong recovered_404004e4(ulong param_1,uint param_2);
ulong recovered_40400528(ulong param_1,uint param_2);
long recovered_40400574(long param_1,uint param_2);
ulong recovered_404005c4(undefined8 param_1,undefined8 param_2);
ulong recovered_404005cc(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_4040062c(undefined8 param_1,undefined8 param_2);
long recovered_4040064c(ulong param_1,ulong param_2);
long recovered_40400690(long param_1,long param_2);
void recovered_404006dc(void);
int recovered_404006e4(int param_1);
void * recovered_404006f0(ulong size);
ulong recovered_404006f4(void *buffer);
void recovered_4040076c(long *param_1);
void * recovered_404007b0(void *buffer,ulong size);
void * recovered_40400898(void *out,void *data,ulong size);
void * recovered_404008b8(void *out,void *data,ulong size);
void * recovered_40400908(void *out,int value,ulong size);
void recovered_40400924(undefined1 *param_1,long param_2);
double recovered_40400938(undefined1 *param_1,long param_2);
int recovered_4040094c(void *left,void *right,ulong size);
bool recovered_40400974(int param_1);
bool recovered_40400984(int param_1);
bool recovered_40400994(uint param_1);
bool recovered_404009a8(uint param_1);
bool recovered_404009c4(int param_1);
bool recovered_404009d4(int param_1);
int recovered_404009e4(int param_1);
int recovered_404009f8(int param_1);
ulong recovered_40400a0c(char *text);
int recovered_40400a30(char *left,char *right);
int recovered_40400a58(char *left,char *right);
void recovered_40400a5c(long param_1,long param_2);
ulong * recovered_40400a74(long param_1);
char * recovered_40400ab4(char *param_1,char param_2);
long recovered_40400adc(long param_1,char *param_2);
char * recovered_40400b20(char *param_1,char *param_2);
char * recovered_40400b64(char *param_1,char *param_2);
undefined * recovered_40400ba0(void);
undefined ** recovered_40400bac(void);
undefined8 recovered_40400bb8(undefined8 *param_1);
double recovered_40400bd4(double param_1,uint param_2);
uint128 recovered_40400c08(double param_1,int *param_2);
double recovered_40400c7c(double left,double right);
double recovered_40400ca0(double left,double right);
double recovered_40400d00(double value);
double recovered_40400d1c(double value);
double recovered_40400d48(double value);
double recovered_40400d84(double value);
long recovered_40400e30(double param_1);
double recovered_40400e44(double value);
void recovered_40400e98(double param_1);
double recovered_40400edc(double value);
double recovered_40400f28(double value);
longlong recovered_40400f38(double param_1);
ulonglong recovered_40400f98(double param_1);
double recovered_40400fe8(ulonglong param_1);
double recovered_40401010(longlong param_1);
float recovered_40401034(float left,float right);
float recovered_40401068(float param_1);
float recovered_40401080(float param_1);
float recovered_40401098(float left,float right);
float recovered_404010b4(float value);
float recovered_404010d8(float value);
double recovered_404010f0(double value);
float recovered_40401118(float value);
float recovered_40401130(float value);
float recovered_40401148(float value);
long recovered_40401160(double param_1);
float recovered_40401174(float value);
float recovered_4040118c(float value);
float recovered_404011a4(float value);
long recovered_404011b4(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_404012bc(int param_1);
long recovered_404012ec(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_40401414(char *text,char **end);
float recovered_404015a4(char *text,char **end);
int recovered_404015bc(char *out,ulong capacity,char *format,void *arguments);
void recovered_40401890(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_404018cc(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_4040191c(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6);
int recovered_404019bc(char *buffer,size_t capacity,const char *format,...);
void recovered_404019e4(long param_1,ulong param_2,ulong *param_3);
undefined8 recovered_40401b20(void);
undefined8 recovered_40401b24(void);
uint recovered_40401b28(uint32_t node);
uint recovered_40401b2c(uint32_t node);
uint recovered_40401b30(uint32_t node);
uint recovered_40401b34(const char *path);
undefined8 recovered_40401b38(void);
undefined8 recovered_40401b40(undefined8 param_1,undefined1 *param_2,int param_3);
void recovered_40401b50(void);
undefined8 recovered_40401b54(void);
void recovered_40401b58(int *param_1);
void recovered_40401bcc(undefined8 *param_1);
void recovered_40401bec(uint param_1);
bool recovered_40401c24(void);
undefined8 recovered_40401c68(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_40401c74(void);
undefined8
recovered_40401c78(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6);
undefined8
recovered_40401cf0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined4 param_6);
undefined8 recovered_40401d5c(ulong param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_40402078(ulong param_1,ulong param_2,ulong *param_3);
undefined8 recovered_4040214c(int param_1,int param_2,int param_3,int *param_4);
undefined8 recovered_40402178(uint param_1,int param_2,int param_3,ulong *param_4);
void recovered_404021b8(long param_1);
void recovered_40402238(ulong param_1,long param_2);
bool recovered_40402278(void);
void recovered_404026f4(long param_1);
void recovered_40402740(undefined8 param_1);
int recovered_4040274c(void);
int recovered_40402764(void);
uint recovered_4040277c(void);
uint recovered_404027e0(void);
undefined8 recovered_40402838(uint *param_1,int param_2,uint *param_3);
undefined8 recovered_40402894(undefined4 *param_1,int param_2,undefined4 param_3);
uchar recovered_404028dc(uint param_1);
uchar recovered_404028e4(uint param_1);
void recovered_404028ec(void);
void recovered_40402c44(void);
undefined8 recovered_40402d34(uint param_1,int *param_2);
ulong recovered_40402dc0(void);
undefined8 recovered_40402e2c(void);
int recovered_40402e5c(uint param_1);
void recovered_40402e78(void);
undefined8 recovered_40402f10(void);
undefined4 recovered_40402f18(void);
uint recovered_40402f40(void);
uint recovered_40402f78(void);
void recovered_40402fb0(ulong param_1);
ulong recovered_40403068(void);
ulong recovered_4040309c(int param_1,int param_2,int param_3);
void recovered_404030fc(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5);
void recovered_404031c0(uint param_1,uint param_2,long param_3,ulong param_4,uint param_5);
void recovered_40403328(int param_1,int param_2,ulong param_3,uint param_4);
void recovered_40403450(long param_1);
void recovered_4040348c(undefined8 param_1);
void recovered_404034d4(uint param_1,uint param_2);
undefined8 recovered_40403550(void);
ulong recovered_40403588(undefined1 *param_1,ulong param_2);
undefined8
recovered_40403640(undefined8 param_1,long param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5);
void recovered_404036a4(void);
void recovered_404036a8(void);
ulong recovered_404036ac(void);
uint recovered_40403a04(ulong param_1);
undefined8 recovered_40403aac(undefined8 *param_1);
undefined8 recovered_40403b44(undefined8 param_1,int *param_2);
bool recovered_40403bb0(undefined8 param_1,ulong param_2,long param_3,ulong param_4);
int recovered_404040bc(void);
uint recovered_404040f0(void);
uint recovered_40404124(int param_1);
undefined8 recovered_40404158(uint param_1,ulong param_2,ulong param_3,uint param_4,long param_5);
bool recovered_4040421c(uint param_1,uint param_2,int param_3,uint param_4);
ulong recovered_40404274(undefined8 param_1,uint param_2,ulong param_3,uint param_4);
void recovered_40404398(undefined1 param_1,undefined4 param_2,int param_3,undefined1 param_4);
bool recovered_404043e4(undefined8 param_1,uint param_2,long param_3,ulong param_4);
uint recovered_404047b0(int param_1);
uint recovered_404047e4(uint param_1);
bool recovered_40404878(uint param_1);
ulong recovered_404048d8(uint param_1);
undefined8 recovered_40404968(void);
int recovered_40404994(void);
uint recovered_404049c4(uint command);
ulong recovered_40404a04(void);
ulong recovered_40404a28(void);
void recovered_40404a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
uint recovered_40404a68(ulong param_1);
uint recovered_40404a84(void);
uint recovered_40404a98(void);
uint recovered_40404ae8(uint *param_1);
undefined8 recovered_40404fe8(long param_1);
void recovered_40405000(undefined4 *param_1,undefined4 *param_2);
void recovered_40405014(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_40405030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4);
void recovered_40405054(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_40405080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
uint recovered_404050b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5,undefined4 *param_6,
                       undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
                       undefined4 *param_10);
void recovered_40405110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_40405198(void);
undefined8 * recovered_40405754(void);
void recovered_40405760(void);
void recovered_40405770(uint param_1);
double recovered_404057d0(char *param_1);
void recovered_404057fc(char *param_1,long param_2);
ulong recovered_40405834(undefined1 *param_1);
undefined8 recovered_4040588c(void);
uint recovered_40405890(uint32_t leaf,uint32_t subleaf,void *out);
undefined8 recovered_40405894(undefined8 param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_404058a8(void);
uint recovered_404058ac(uint32_t enable);
ulong recovered_404058b0(void);
long recovered_404058b4(void);
ulong recovered_404058b8(void);
ulong recovered_40405910(void);
ulonglong recovered_40405960(void);
undefined1 * recovered_40405988(void);
undefined8
recovered_40405994(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long *param_6);
ulong recovered_40405b24(long param_1);
bool recovered_40405cc4(int *param_1,int param_2,uint param_3,long param_4);
bool recovered_40405d28(char *param_1,uint param_2);
bool recovered_40405d5c(char *param_1,char *param_2);
ulong recovered_40405db4(long param_1,int param_2,char *param_3);
bool recovered_40405ec0(uint param_1,long param_2);
int recovered_40405f00(void);
bool recovered_40405f34(long param_1);
undefined8 recovered_40405f74(uint param_1,uint *param_2);
ulong recovered_40405fdc(int param_1);
undefined8 recovered_40406000(undefined8 param_1,undefined4 *param_2,int *param_3);
undefined4 recovered_404060c4(undefined8 param_1);
ulong recovered_40406110(uint param_1);
undefined8 recovered_4040616c(long param_1,uint *param_2);
ulong recovered_404062b8(ulong param_1,ulong param_2);
ulong recovered_40406318(uint param_1);
undefined8 recovered_40406374(long param_1);
bool recovered_404064e0(long param_1);
void recovered_40406518(uint param_1);
void recovered_40406730(char *param_1,long param_2);
void recovered_404067e8(int param_1);
void recovered_40406874(void);
void recovered_4040687c(void);
void recovered_40406884(undefined *param_1);
void recovered_404068e8(void);
void recovered_4040693c(long param_1);
void recovered_40406968(void);
bool recovered_4040698c(long param_1,long param_2,undefined8 param_3,undefined8 param_4);
undefined8 recovered_40406a04(void);
void recovered_40406a08(void);
undefined8 recovered_40406a0c(void);
undefined4 * recovered_40406a14(long param_1,long param_2);
undefined8 recovered_40406c50(undefined8 param_1,undefined8 param_2);
undefined8 recovered_40406ca0(long param_1,ulong param_2);
undefined4 * recovered_40406d28(long param_1,long param_2,int *param_3);
undefined8 recovered_40406d5c(int *param_1);
long recovered_40406da0(undefined1 *param_1,long param_2,long param_3,int *param_4);
uint recovered_40406e50(int *param_1);
long recovered_40406f34(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_40407044(int *param_1,ulong param_2,int param_3);
undefined8 recovered_404070d8(long param_1);
undefined8 recovered_404070fc(int *param_1);
undefined1 recovered_40407170(long param_1);
undefined1 recovered_4040717c(long param_1);
void recovered_40407188(long param_1);
uint recovered_4040719c(uint param_1,long param_2);
undefined8 recovered_404071c0(long param_1);
undefined8 recovered_404071f8(undefined8 param_1);
undefined8 recovered_4040723c(long param_1,long param_2);
undefined8 recovered_404072d8(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_40407338(long param_1,long *param_2,ulong *param_3);
bool recovered_404073d8(long param_1,long param_2,long param_3);
undefined8 recovered_40407404(void);
void recovered_40407408(void);
undefined8 recovered_4040740c(void);
undefined8 recovered_40407410(void);
undefined8 recovered_40407414(void);
char * recovered_40407418(long param_1,char param_2,long param_3);
int recovered_4040743c(char *left,char *right,ulong size);
char * recovered_4040746c(int param_1);
undefined8 recovered_4040750c(void);
undefined8 recovered_40407510(void);
void recovered_40407514(void);
bool recovered_40407528(int param_1);
__attribute__((naked,noreturn)) void recovered_404075f4(void *context);
__attribute__((naked,returns_twice)) int recovered_40407608(void *context);
__attribute__((naked,noreturn)) void recovered_40407634(void *context,int value);
double recovered_40407668(void);
undefined8 recovered_4040767c(void);
void recovered_40407684(long param_1);
long recovered_40407694(long param_1);
void * recovered_404076b4(ulong size);
void * recovered_404076e4(ulong size);
ulong recovered_404076e8(void *data);
void recovered_40407700(void *data);
void recovered_40407718(long param_1);
void recovered_40407730(long param_1);
undefined8 recovered_40407748(void);
uint recovered_40407750(uint *param_1);
void recovered_40407760(ulong *param_1);
void recovered_40407770(void);
undefined1 * recovered_40407774(ulong param_1);
void recovered_404077bc(long param_1);
long recovered_404077cc(long param_1);
void recovered_404077d4(void);
void recovered_4040782c(long param_1,undefined8 param_2,undefined8 param_3);
ulonglong recovered_4040784c(undefined8 *param_1);
void recovered_404078b0(void);
void recovered_404078e0(undefined8 *param_1);
void recovered_404078f4(undefined8 *param_1);
void recovered_40407920(void);
void recovered_4040792c(void);
undefined8 recovered_40407938(undefined8 *param_1);
undefined8 recovered_40407958(undefined8 *param_1);
undefined8 recovered_404079f4(void);
undefined8 recovered_40407a00(void);
void recovered_40407a08(void);
long recovered_40407a14(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_40407a54(undefined8 *param_1,undefined8 *param_2);
void recovered_40407ae0(void);
undefined8 recovered_40407ae4(void);
bool recovered_40407aec(int param_1);
bool recovered_40407afc(uint param_1);
bool recovered_40407b34(uint param_1);
bool recovered_40407b50(ulong param_1);
bool recovered_40407b68(uint param_1);
bool recovered_40407b80(ulong param_1);
bool recovered_40407b98(ulong param_1);
double recovered_40407bb0(double value);
long recovered_40407bfc(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_40407d40(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_40407d44(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_40407f1c(uint param_1,long *param_2);
ulong recovered_40408010(undefined8 *param_1);
ulong recovered_40408048(byte *param_1,long param_2);
ulong recovered_40408074(undefined8 *param_1);
undefined4 recovered_404080ec(byte *param_1,ulong param_2);
bool recovered_404081fc(byte *param_1,ulong param_2);
bool recovered_40408364(byte *param_1,uint *******param_2,uint *param_3);
undefined8 * recovered_4040b904(undefined8 *param_1,undefined8 *param_2);
bool recovered_4040b930(uint *param_1,long *param_2,long *param_3,long *param_4);
undefined8 * recovered_4040c404(undefined8 *param_1,undefined8 *param_2);
long recovered_4040c454(long param_1);
ulong recovered_4040c494(long param_1,uint *param_2);
undefined4 recovered_4040c5b4(long param_1,long param_2,ulong param_3,ulong param_4);
bool recovered_4040c9c8(uint *param_1,long param_2,long param_3);
ulong recovered_4040ca00(uint *param_1,byte *param_2,byte *param_3,ulong param_4);
undefined4 recovered_4040caac(long param_1,long param_2,ulong param_3,ulong param_4);
byte recovered_4040cab0(long param_1,long param_2,ulong param_3,uint param_4);
uint recovered_4040cd10(long param_1,long param_2,uint param_3,uint param_4);
uint recovered_4040ce9c(long param_1,long param_2,uint param_3,int param_4);
uint recovered_4040d464(long param_1,undefined1 *param_2,uint param_3,uint param_4);
uint recovered_4040d7f8(long param_1,long param_2,uint param_3,uint param_4);
void recovered_4040d914(long *param_1,ulong param_2,undefined1 *param_3);
uint recovered_4040d91c(uint param_1,uint param_2);
void recovered_4040d990(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_4040da14(long *param_1,ulong param_2);
void recovered_4040da7c(long *param_1,ulong param_2);
ulong recovered_4040daf0(long param_1);
undefined8 * recovered_4040dafc(undefined8 *param_1);
undefined8 recovered_4040db28(byte *param_1,int param_2,uint param_3,byte *param_4);
undefined8 recovered_4040dc00(undefined8 *param_1,byte *param_2);
long recovered_4040dd74(long param_1);
void recovered_4040ddac(long param_1);
long * recovered_4040ddd0(long *param_1);
long recovered_4040ddf4(long param_1);
long recovered_4040de24(long param_1);
void recovered_4040de48(long *param_1);
long recovered_4040de90(long param_1,long param_2);
undefined8 * recovered_4040dedc(undefined8 *param_1,undefined8 *param_2);
undefined1 * recovered_4040df2c(undefined1 *param_1,undefined1 *param_2);
void recovered_4040df7c(undefined8 *param_1,undefined8 *param_2);
long * recovered_4040df98(long *param_1,long *param_2);
long recovered_4040dff8(long *param_1,undefined4 *param_2);
void recovered_4040e05c(long *param_1,ulong param_2);
ulong recovered_4040e0d0(long param_1);
undefined1 recovered_4040e0e0(long *param_1,long param_2,int param_3,int param_4);
int recovered_4040e128(long *param_1,char *param_2,undefined4 *param_3);
bool recovered_4040e1dc(long *param_1,uint param_2,uint *param_3);
int recovered_4040e23c(uint param_1,uint param_2);
undefined8 recovered_4040e264(long *param_1,uint *param_2);
undefined8 * recovered_4040e2f0(undefined8 *param_1);
void recovered_4040e31c(long param_1,ulong param_2,ulong *param_3,uint *param_4);
bool recovered_4040e34c(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
void recovered_4040e3e0(long param_1,long param_2);
bool recovered_4040e46c(long param_1,ulong param_2,ulong param_3,uint *param_4);
uint recovered_4040e4a8(uint *param_1);
long recovered_4040e4b4(long *param_1,undefined8 *param_2);
void recovered_4040e518(long *param_1,ulong param_2);
ulong recovered_4040e58c(long param_1);
undefined8 * recovered_4040e59c(undefined8 *param_1);
void recovered_4040e5c8(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_4040e5dc(long *param_1,ulong param_2);
void recovered_4040e608(long *param_1,ulong param_2);
long recovered_4040e66c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
bool recovered_4040e764(long *param_1,long *param_2);
undefined8 recovered_4040ef28(long *param_1,uint param_2,uint *param_3);
undefined8 recovered_4040efa4(long *param_1,long param_2,long param_3,long *param_4);
long recovered_4040f114(long param_1);
uint recovered_4040f134(long param_1,ulong param_2);
long recovered_4040f198(long *param_1,undefined1 *param_2);
uint recovered_4040f200(long *param_1,long param_2,uint *param_3);
long recovered_4040f2fc(long *param_1,undefined1 *param_2);
undefined8 recovered_4040f364(long *param_1,uint *param_2,undefined8 param_3);
long * recovered_4040f4c8(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_4040f4f4(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_4040f574(long *param_1,ulong param_2);
undefined8 * recovered_4040f5d8(undefined8 *param_1,undefined8 *param_2);
void recovered_4040f61c(long *param_1,ulong param_2,undefined2 *param_3);
undefined8 * recovered_4040f624(undefined8 *param_1,undefined8 *param_2);
void recovered_4040f674(long *param_1,ulong param_2,undefined2 *param_3);
void recovered_4040f6f4(long *param_1,ulong param_2);
void recovered_4040f758(long *param_1,ulong param_2);
ulong recovered_4040f7cc(long param_1);
long recovered_4040f7dc(long *param_1,undefined4 *param_2);
long * recovered_4040f840(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_4040f878(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
undefined8 * recovered_4040f980(undefined8 *param_1);
undefined8 * recovered_4040f9ac(undefined8 *param_1);
uint recovered_4040f9d0(uint param_1,byte *param_2,long param_3);
void recovered_4040fa60(long *param_1,undefined8 *param_2);
void recovered_4040fac0(long *param_1);
void recovered_4040fb0c(long *param_1,ulong param_2);
int recovered_4040fb84(long param_1);
ulong recovered_4040fbb8(long *param_1,long *param_2);
bool recovered_4040fc60(long param_1,long param_2,ulong param_3);
undefined8
recovered_4040fcbc(undefined4 param_1,char *param_2,char *param_3,byte *param_4,ulong param_5,
                  ulong param_6);
void recovered_4040fe8c(undefined8 *param_1);
void recovered_4040feb0(int param_1,long param_2,long *param_3,long *param_4);
undefined8 recovered_4040ffcc(uint *param_1,undefined1 param_2,undefined8 *param_3);
long recovered_40410030(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
void recovered_40410128(long param_1,long param_2,long param_3);
void recovered_404102e4(long param_1,int *param_2,int *param_3,long param_4,long param_5);
undefined8 * recovered_40410444(undefined8 *param_1,long param_2,long param_3);
int recovered_404104a0(uint param_1);
void recovered_404104c4(long param_1,long param_2,ulong param_3);
void recovered_404104d4(long param_1,uint param_2,uint param_3);
uint recovered_40410544(long *param_1,char param_2);
void recovered_4041058c(void);
void recovered_40410594(long *param_1,uint param_2);
void recovered_404105b8(long *param_1,long param_2,uint param_3);
long recovered_404105d8(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long * recovered_404106d0(long *param_1,ulong param_2);
void recovered_404106fc(long *param_1,ulong param_2);
void recovered_40410764(long *param_1,ulong param_2);
ulong recovered_404107d8(long param_1);
void recovered_404107e8(long *param_1,undefined4 param_2);
undefined8 * recovered_40410808(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 * recovered_40410840(undefined8 *param_1);
undefined8 * recovered_40410ea0(undefined4 param_1,long param_2,long param_3);
undefined8 * recovered_40411108(undefined4 param_1,long param_2);
void recovered_404111f8(float param_1,long *param_2);
uint128 recovered_40411238(double param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                  );
void recovered_40411b78(undefined8 *param_1);
void recovered_40411bb0(long *param_1);
void recovered_40411c10(long *param_1,ulong param_2);
long recovered_40411c98(long param_1);
long * recovered_40411cbc(long *param_1);
void recovered_40411d0c(long *param_1);
uint recovered_40411d60(long *param_1,long param_2);
undefined8 * recovered_40411d70(undefined8 *param_1);
undefined8 * recovered_40411d94(undefined8 *param_1);
undefined8 * recovered_40411dc4(undefined8 *param_1);
void recovered_40411e14(void);
ulong recovered_40411e28(long param_1,undefined8 *param_2);
int * recovered_4041259c(int *param_1,double param_2,undefined1 *param_3,long param_4,
                        undefined4 param_5);
uint128 recovered_40412894(long param_1);
uint128 recovered_404128a0(long param_1);
uint128 recovered_404128ac(long param_1);
uint128 recovered_404128b4(long param_1);
undefined8 recovered_404128bc(void);
undefined8 * recovered_404128c4(undefined8 *param_1);
void recovered_404128f0(undefined8 *param_1);
undefined8 * recovered_40412910(undefined8 *param_1);
void recovered_4041293c(long param_1);
undefined8 * recovered_4041296c(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_404129c8(long param_1,undefined4 param_2,undefined8 *param_3);
void recovered_40412a34(long *param_1,long param_2);
long recovered_40412a60(long *param_1,byte *param_2);
ulong recovered_40412ac8(long param_1,byte *param_2);
ulong recovered_40412ae0(byte *param_1,long param_2);
void recovered_40412b18(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_40412b20(long *param_1,ulong param_2,undefined8 *param_3);
long recovered_40412ba4(long *param_1,undefined8 *param_2);
void recovered_40412c0c(long *param_1,ulong param_2);
void recovered_40412c8c(undefined8 *param_1);
undefined8 * recovered_40412c9c(undefined8 *param_1,undefined8 *param_2);
bool recovered_40412ccc(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,uint param_4,
                       double *param_5,long *param_6,int param_7);
int * recovered_40413588(int *param_1,undefined8 param_2,long *param_3);
long recovered_404137d8(long *param_1,int *param_2);
long recovered_4041380c(long *param_1,undefined4 *param_2);
long recovered_40413894(long *param_1,int *param_2);
ulong recovered_40413900(long param_1,byte *param_2);
void recovered_40413934(long param_1);
long recovered_40413964(long *param_1,undefined4 *param_2,undefined2 *param_3);
void recovered_404139e0(long *param_1,long param_2);
void recovered_40413a20(long param_1,ulong param_2);
ulong recovered_40413a88(ulong param_1);
void recovered_40413aa4(long param_1);
void recovered_40413b08(long *param_1,ulong param_2);
ulong recovered_40413b7c(long param_1);
void recovered_40413b8c(long *param_1,undefined8 *param_2);
pf_blob24 recovered_40413be4(double *a,double *b);
uint recovered_40413c00(long *param_1,double *param_2);
uint128 recovered_40413c74(double *param_1,double *param_2);
void recovered_40413ca0(long *param_1,double *param_2);
void recovered_40413d3c(long *param_1);
undefined8 * recovered_40413db8(undefined8 *param_1);
long * recovered_40413de4(long *param_1,ulong param_2);
double recovered_40413e10(long *param_1,ulong param_2);
void recovered_40413e74(long *param_1,ulong param_2);
ulong recovered_40413ee8(long param_1);
void recovered_40413ef8(long *param_1,ulong param_2);
long recovered_40413f64(long *param_1,undefined1 *param_2);
void recovered_40413fc8(long *param_1,ulong param_2);
ulong recovered_4041403c(long param_1);
long recovered_40414048(long *param_1,undefined1 *param_2);
long recovered_404140ac(long *param_1,long param_2,undefined1 *param_3);
void recovered_40414154(long param_1,double *param_2);
void recovered_404141c4(long *param_1,undefined8 *param_2);
void recovered_40414264(undefined1 param_1 [16],double param_2,long *param_3,double *param_4,
                       double *param_5,double *param_6,int param_7);
undefined8 * recovered_4041437c(undefined8 *param_1);
void recovered_404143c4(void);
bool recovered_404143d8(long param_1,long *param_2);
int * recovered_40414cb4(int *param_1,undefined8 param_2,long param_3,uint param_4);
uint128 recovered_404150a4(long param_1);
uint128 recovered_404150ac(long param_1);
uint128 recovered_404150b4(long param_1);
uint128 recovered_404150bc(void);
undefined8 recovered_404150c4(void);
void recovered_404150cc(undefined8 *param_1);
long * recovered_404150ec(long *param_1);
void recovered_40415118(long *param_1);
void recovered_4041516c(undefined8 *param_1);
undefined8 * recovered_40415194(undefined8 *param_1);
undefined8 * recovered_40415198(undefined8 *param_1);
long * recovered_404151c0(long *param_1);
void recovered_404151ec(long *param_1);
long recovered_40415240(long param_1);
void recovered_4041527c(long param_1);
ulong recovered_404152ac(long *param_1,long param_2,ulong param_3);
void recovered_40415338(long *param_1,ulong param_2);
void recovered_404153b0(long *param_1,undefined1 param_2);
ulong recovered_40415414(long param_1);
void recovered_40415430(long *param_1);
bool recovered_40415468(long *param_1,ulong *param_2,undefined8 *param_3);
undefined8 recovered_404154f0(long *param_1,ulong *param_2,int *param_3);
void recovered_404155bc(long *param_1,ulong *param_2);
undefined8 * recovered_40415604(undefined8 *param_1,undefined8 *param_2);
long * recovered_40415650(long *param_1,long param_2,ulong param_3);
double recovered_40415684(long *param_1,long param_2,ulong param_3);
undefined8 recovered_4041576c(long *param_1,long param_2,long *param_3);
long recovered_404157b8(long *param_1,long param_2,long param_3);
double recovered_40415824(long *param_1,ulong param_2);
long * recovered_404158d0(long *param_1,undefined8 *param_2,uint param_3);
long recovered_404159c8(long *param_1,undefined8 *param_2);
void recovered_40415a80(long *param_1,ulong param_2);
void recovered_40415b14(long param_1);
long recovered_40415b28(long *param_1,undefined8 *param_2);
void recovered_40415b60(long param_1);
long recovered_40415b90(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_40415c0c(long *param_1,long param_2);
long recovered_40415c50(long *param_1,undefined8 *param_2);
ulong recovered_40415cc4(long param_1,undefined8 *param_2);
ulong recovered_40415cf4(undefined8 param_1,undefined8 *param_2);
bool recovered_40415d0c(undefined8 *param_1,undefined8 *param_2);
bool recovered_40415d34(char *param_1,long param_2,char *param_3,long param_4);
void recovered_40415d6c(long param_1,ulong param_2);
ulong recovered_40415dd4(ulong param_1);
void recovered_40415df0(long param_1);
double recovered_40415e54(long *param_1,ulong param_2);
void recovered_40415ee8(long param_1);
undefined8 * recovered_40415efc(undefined8 *param_1,undefined8 *param_2);
void recovered_40415f30(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_40415f4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_40415f80(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_40415fc0(long *param_1,long *param_2,int param_3);
long recovered_40416338(long param_1);
undefined8 * recovered_40416364(undefined8 *param_1,long param_2);
long recovered_404163a8(long param_1);
undefined8 * recovered_404163cc(undefined8 *param_1);
void recovered_404163f8(long param_1);
void recovered_4041641c(long param_1);
void recovered_4041645c(long param_1);
long recovered_404164a8(long *param_1,undefined8 *param_2);
void recovered_4041650c(long *param_1,ulong param_2);
ulong recovered_40416580(long param_1);
void recovered_40416590(long *param_1);
ulong recovered_404165dc(double param_1,undefined8 *param_2);
int * recovered_4041662c(long *param_1,int *param_2);
ulong recovered_4041669c(long param_1,byte *param_2);
void recovered_404166b4(long *param_1,long param_2);
double recovered_404166e0(long param_1,ulong param_2);
ulong recovered_40416780(ulong param_1);
void recovered_4041679c(long *param_1,ulong param_2);
long * recovered_40416834(long *param_1);
void recovered_40416860(long *param_1);
void recovered_404168b4(long *param_1,ulong param_2);
void recovered_40416948(long param_1);
void recovered_4041695c(undefined8 *param_1,undefined8 *param_2);
void recovered_40416978(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_40416c6c(long param_1,int param_2,undefined4 *param_3);
void recovered_40416d44(long param_1);
undefined8 recovered_40416d58(long param_1,ulong param_2,ulong param_3,undefined4 *param_4);
void recovered_40416e90(long param_1);
ulong recovered_40416ea4(long param_1,uint param_2);
void recovered_40416ecc(void);
undefined8
recovered_40416eec(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined4 *param_7);
void recovered_40416fd8(void);
undefined8
recovered_40416ff8(long param_1,uint param_2,uint param_3,ulong param_4,undefined4 *param_5);
undefined8 recovered_404170a4(long param_1,ulong param_2,undefined8 *param_3,ushort *param_4);
undefined8 recovered_404174a4(ushort *param_1,long param_2,ulong param_3);
bool recovered_404174f8(int param_1,int param_2);
uint128 recovered_4041752c(uint3 *param_1,int param_2,int param_3);
int recovered_4041764c(double param_1);
undefined8 * recovered_404176a8(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_404176e0(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_40417758(uint param_1,uint param_2,uchar param_3);
void recovered_40417900(void);
void recovered_40417968(void);
ulonglong recovered_40417ba8(uchar param_1);
void recovered_40417bd0(uint param_1);
ulonglong recovered_40417c88(char *param_1);
ushort recovered_40417cbc(void);
ulong recovered_40417d30(char *param_1);
ulong recovered_40417d84(void);
ulonglong recovered_40417de8(void);
uint recovered_40417e08(void);
void recovered_404182e0(void);
ulonglong recovered_404182f8(long param_1,uint *param_2);
undefined8 recovered_40418368(long param_1,undefined8 *param_2,ulong *param_3);
long recovered_4041841c(char *path);
uchar recovered_40418448(char *param_1,void *param_2,uint param_3);
undefined8 recovered_40418478(long param_1,long param_2,long param_3);
uchar recovered_404186dc(char *param_1);
uint128 recovered_404186f8(long param_1);
uchar recovered_404189c4(char *param_1,void *param_2);
uchar recovered_40418a24(char *param_1,uint param_2,void *param_3);
void * recovered_40418a90(char *param_1,float param_2);
undefined8 recovered_40418af8(char *param_1);
ulong recovered_40418b3c(char *param_1);
ulong recovered_40418bc8(undefined1 *param_1,ulong param_2,char *param_3,int param_4);
undefined8
recovered_40418c1c(undefined1 *param_1,long param_2,char *param_3,int param_4,int param_5);
void * recovered_40418f60(uint param_1);
ulong recovered_40418f7c(long param_1);
void recovered_40418fa4(void *param_1);
void recovered_40418fc0(long param_1);
void * recovered_40418fe8(void *param_1,uint param_2);
ulong recovered_40419008(long param_1,long param_2);
uchar recovered_40419044(char *param_1,char *param_2,uint param_3,uint *param_4);
long recovered_40419338(long param_1,undefined1 *param_2);
bool recovered_40419500(char *param_1,char *param_2,undefined8 *param_3);
int recovered_404195a0(void);
uint recovered_404195b8(void *devices,uint capacity,uint *count);
bool recovered_40419744(void);
void recovered_4041995c(char *param_1,long param_2,char *param_3);
char * recovered_40419a4c(int param_1);
uint recovered_40419a74(int device);
ulong recovered_40419a94(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
uint recovered_40419af8(int device,char *path,void *blob);
ulong recovered_40419c50(int param_1,int *param_2);
ulong recovered_40419c74(int param_1,int param_2);
uint recovered_40419c88(int device,char *path,char *buffer,uint capacity,uint *count);
uint recovered_40419d2c(int device,char *path,void *bytes,uint count);
uint recovered_40419d7c(int device,char *path);
uint recovered_40419db4(int device,char *old_path,char *new_path);
undefined8 recovered_40419df0(long param_1,long param_2);
uint recovered_4041a1ac(int device,char *path);
byte recovered_4041a210(char *param_1);
uint recovered_4041a3e4(int device,char *path,void *image);
void * recovered_4041a424(int device,char *path,float pixels);
uint recovered_4041a47c(int device,char *path,uint flags);
uint recovered_4041a4c8(char *param_1,uint param_2);
uchar recovered_4041a974(char *param_1,char *param_2);
uchar recovered_4041a994(char *param_1);
undefined8 recovered_4041a9d0(long param_1,ulong param_2);
void recovered_4041aa08(void);
void recovered_4041aa18(const char *format,...);
char * recovered_4041aa40(char *param_1);
undefined8 recovered_4041aa7c(long param_1,undefined1 *param_2);
uint recovered_4041ac68(void *param_1,void *param_2,uint param_3);
undefined8 recovered_4041acbc(void);
undefined4
recovered_4041acd4(long param_1,long param_2,undefined8 param_3,long param_4,undefined1 param_5,
                  long param_6,undefined8 param_7);
void recovered_4041ae00(void);
ulong recovered_4041b030(void);
uint recovered_4041b060(void);
uint recovered_4041b0ac(void *hardware);
uint recovered_4041b1c8(char *param_1);
bool recovered_4041b578(uint *param_1);
long recovered_4041b6f8(void);
uint recovered_4041b730(char *param_1,uint param_2,uint param_3);
undefined4 recovered_4041b824(void);
void recovered_4041b890(void *window,char *title);
uchar recovered_4041b8d8(uint param_1,char *param_2,void *param_3,uint param_4,uint param_5,
                        uint param_6,uint param_7);
char * recovered_4041ba20(int param_1);
uchar recovered_4041ba64(uint param_1);
void recovered_4041ba90(long param_1);
uchar recovered_4041bac0(void *param_1,uint param_2,uint *param_3);
void recovered_4041bb38(long param_1,undefined8 *param_2);
uchar recovered_4041bbfc(uint param_1,int param_2,int param_3,uint param_4,uint param_5);
uchar recovered_4041bc58(uint param_1,void *param_2);
uint recovered_4041bc9c(uint window,char *first,char *second,char *third);
uint recovered_4041bd38(uint window,uint group,uint item);
undefined8 recovered_4041bd94(void);
uint recovered_4041bed8(void);
undefined8 recovered_4041c04c(void);
undefined8 recovered_4041e3e8(undefined8 param_1,ulong param_2,uint param_3,undefined4 param_4);
undefined8 recovered_4041e964(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void recovered_4041e998(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined8 recovered_4041e9f4(void);
bool recovered_4041eb90(void);
int recovered_4041ec20(uint param_1,uint param_2);
void recovered_4041ece8(void);
double recovered_4041ed18(uint param_1,uint param_2,uint param_3);
uchar recovered_4041edb8(void *param_1);
uchar recovered_4041ee48(void *param_1);
uint recovered_4041ef2c(uint *param_1);
undefined8 recovered_4041effc(void);
ulong recovered_4041f078(void);
undefined8 recovered_4041f290(void);
undefined8 recovered_4041f2b4(char *param_1,long param_2);
void recovered_4041f4f4(undefined8 *param_1);
ulong recovered_4041f504(undefined8 *param_1);
uint recovered_4041f60c(char *param_1,char *param_2,uint param_3);
void recovered_4041f850(byte *param_1);
undefined8 recovered_4041f8c8(long param_1);
bool recovered_4041fb14(char *text);
uint recovered_4041fc70(char *text);
void recovered_40420984(char *text);
void recovered_40421354(void);
void recovered_404223c0(uint param_1);
undefined8 recovered_404224f0(void);
void recovered_404225bc(void);
void recovered_4042265c(void);
uint recovered_40422678(void);
uint recovered_40422694(void);
long recovered_404226b0(uint param_1);
void recovered_404226e8(uint *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4);
void recovered_4042273c(int param_1,int param_2,undefined1 *param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6);
void recovered_404227a8(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8);
undefined8 recovered_40422868(undefined8 param_1);
uchar recovered_40422bc4(undefined8 param_1,undefined8 param_2);
void recovered_40422c0c(uint *param_1);
void recovered_40422c30(uint param_1,uint param_2,long param_3,ulong param_4);
ulong recovered_40422c8c(ulong param_1);
undefined8
recovered_40422e24(int param_1,int param_2,long param_3,long param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7);
undefined8 recovered_40423070(void);
uint recovered_40423104(void);
uint recovered_40423124(uint param_1,uint param_2,uint param_3);
void recovered_40423200(undefined1 *param_1,uint param_2,ulong param_3);
uint recovered_40423224(int param_1,int param_2,uint param_3);
uint recovered_4042334c(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9);
uint recovered_404233b8(int param_1,uint param_2);
undefined8 recovered_404233e8(uint *param_1,uint param_2,uint param_3);
uchar recovered_40423490(undefined8 param_1,undefined8 param_2);
ulonglong recovered_40423524(void);
uint recovered_404235d4(undefined1 *param_1,ulong param_2,int param_3,int param_4);
undefined8 recovered_40423758(undefined1 *param_1,ulong param_2,long *param_3,ulong *param_4);
long recovered_404239b8(long param_1,long param_2);
uchar recovered_40423a00(long *param_1,long param_2,long param_3);
void recovered_40423aa4(undefined8 *param_1);
ulong recovered_40423ad0(undefined8 *param_1);
bool recovered_40423b0c(uint param_1);
uint recovered_40423b38(int param_1);
void recovered_40423b60(int *param_1);
bool recovered_40423b84(void);
ulong recovered_40423ba8(ulong param_1);
uint recovered_40423fb8(ulong param_1,long param_2);
long recovered_40424064(void);
void recovered_404241b0(long *param_1,undefined1 *param_2,undefined1 param_3);
undefined8 recovered_404241f8(long *param_1,long *param_2);
undefined8 recovered_404242e0(long *param_1,long *param_2);
long recovered_40424424(void);
undefined8 recovered_40424480(undefined8 param_1,ulong param_2,long param_3,long param_4);
char * recovered_4042450c(uint param_1);
uint recovered_40424558(long param_1,int param_2,uint param_3);
void recovered_404245c4(long *param_1,long param_2,ulong param_3,undefined1 param_4);
ulong recovered_40424630(byte *param_1);
uint recovered_4042471c(byte *param_1);
undefined8 recovered_40424750(ulong param_1);
long recovered_40424b88(long param_1,uint param_2);
bool recovered_40424ba4(uint param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                       uint param_7,uint param_8,uint param_9,long *param_10,int *param_11);
undefined8
recovered_40424d40(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5,int param_6
                  ,uint param_7,undefined8 param_8,long *param_9,ulong *param_10);
bool recovered_40424ef8(int param_1,uint param_2);
undefined8
recovered_40424f3c(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                  uint param_7,uint param_8,long param_9,long *param_10,long *param_11);
bool recovered_404250e0(ulong param_1);
ulong recovered_404251c4(ulong param_1);
undefined1 recovered_4042524c(void);
undefined8 recovered_40425324(long *param_1,ulong param_2);
undefined4 recovered_40425404(long *param_1,long param_2,uint param_3,ulong param_4);
bool recovered_404254c8(uint *param_1,uint param_2,uint param_3);
bool recovered_404256dc(ulong param_1,long param_2,uint param_3,uint param_4);
undefined8 recovered_404257f0(ulong param_1,ulong param_2);
undefined8 recovered_40425958(void);
void recovered_40425a64(uint param_1);
void recovered_40425ae0(uint param_1,int param_2);
undefined8 recovered_40425b74(undefined8 param_1,ulong param_2,long param_3,ulong param_4);
undefined8 recovered_40425c0c(void);
void recovered_40425d60(long param_1,long param_2);
bool recovered_40425dcc(long param_1,long param_2);
ulong recovered_40425e24(int param_1);
void recovered_40425e4c(void);
void recovered_40425e58(long *param_1);
uint recovered_40425f0c(char *param_1,byte *param_2,byte *param_3);
undefined8 recovered_4042603c(long param_1,undefined1 *param_2);
void recovered_404260cc(long param_1,ulong param_2);
bool recovered_40426108(long param_1,byte *param_2);
undefined8 recovered_40426164(long param_1,undefined1 *param_2,long param_3);
void recovered_40426494(long param_1,long *param_2,long *param_3,undefined1 *param_4,long param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8);
bool recovered_404264a4(uint *param_1,ulong param_2);
bool recovered_4042650c(byte *param_1,byte *param_2);
ulong recovered_40426560(long param_1,long *param_2,long *param_3,undefined8 param_4,
                        undefined1 *param_5,long param_6,undefined8 param_7,undefined8 param_8);
ulong recovered_4042676c(long param_1);
bool recovered_40426788(long param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void recovered_40426db0(void);
undefined8 recovered_40426df0(long param_1,undefined8 param_2);
uint128 recovered_40426e2c(long param_1,ulong param_2,uint *param_3,int *param_4,uint *param_5,uint *param_6
                  ,uint *param_7,int *param_8,undefined4 *param_9);
uint128 recovered_40426f88(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                  long param_7,ulong param_8,char *param_9,uint param_10);
void recovered_4042727c(void);
undefined8
recovered_40427298(long param_1,long param_2,int param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6);
undefined8
recovered_4042739c(long *param_1,int param_2,char *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined8 recovered_40427608(long *param_1,int param_2,long param_3);
undefined8 recovered_40427734(long *param_1,long param_2,long *param_3,ulong *param_4);
undefined8 recovered_40427890(long *param_1,int param_2);
bool recovered_404278c4(long param_1,short *param_2,long param_3,ulong param_4,int param_5);
undefined8
recovered_40427a14(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5);
undefined8
recovered_40427ab0(long param_1,uint param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                  uint *param_11);
undefined8
recovered_40427c1c(long param_1,uint param_2,long param_3,uint param_4,int param_5,int param_6,
                  uint param_7,long param_8,ulong param_9,char *param_10);
uint recovered_40427f20(long param_1,long param_2);
uint recovered_40427ff4(uint *param_1);
undefined8 recovered_40428000(char *param_1);
uint recovered_40428040(long param_1);
undefined8 recovered_40428068(ulong param_1);
ulong recovered_404280d4(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        int *param_5,undefined8 *param_6,long param_7);
ulong recovered_404281b8(char *param_1,ulong param_2);
undefined8 recovered_404281c8(undefined *UNRECOVERED_JUMPTABLE);
ulong recovered_404281d4(uint *param_1,ulong param_2,long *param_3,ulong *param_4,long param_5);
void recovered_40428214(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,
                       undefined8 param_6,long *param_7,ulong *param_8,long param_9);
undefined8
recovered_40428244(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,int param_6,
                  ulonglong param_7,long *param_8,ulong *param_9,long param_10);
ulong recovered_404284dc(ulong *param_1);
undefined8
recovered_404284e8(uint *param_1,ulong param_2,uint param_3,uint param_4,uint *param_5,int *param_6,
                  long param_7);
undefined8 recovered_40428d90(long param_1,uint *param_2,uint *param_3,ulong *param_4,long param_5);
ulong recovered_40428e78(uint *param_1,int param_2);
ulong recovered_40428e88(undefined8 *param_1,int param_2);
undefined8 recovered_40428e98(long param_1,uint param_2,undefined8 param_3,long param_4);
bool recovered_40428f04(int *param_1);
void recovered_40428f44(long param_1);
undefined8 recovered_40428f88(long param_1,int param_2,uint param_3,long param_4);
bool recovered_40429140(long param_1,undefined8 param_2,undefined8 param_3,long param_4);
undefined1 recovered_404291cc(long param_1,long param_2);
undefined8 recovered_40429514(long param_1,uint param_2,uint param_3,int *param_4);
void recovered_404295b4(ulong param_1,long param_2);
bool recovered_40429628(char *param_1);
undefined8 recovered_40429690(char *param_1,undefined8 param_2,undefined8 param_3,long param_4);
char * recovered_40429dfc(char *param_1);
long recovered_40429e38(long param_1);
bool recovered_40429ec4(long param_1,long param_2);
bool recovered_40429f20(long param_1,uint param_2,uint param_3,int param_4,long param_5);
bool recovered_4042a2f8(long param_1,uint param_2,uint param_3);
undefined8 recovered_4042a320(long param_1,ulong param_2,ulong *param_3,ulong *param_4);
undefined8 recovered_4042a388(long param_1,ulong param_2,int param_3,long param_4);
void recovered_4042a430(ulong *param_1,ulong param_2,int param_3);
void recovered_4042a444(undefined1 *param_1,uint param_2,int param_3);
void recovered_4042a478(undefined8 *param_1,undefined8 param_2);
undefined8
recovered_4042a480(long param_1,uint param_2,long param_3,int param_4,undefined4 *param_5,
                  long param_6);
undefined8
recovered_4042a5a8(long param_1,int param_2,int param_3,uint param_4,long param_5,long param_6);
uint recovered_4042a63c(long param_1,long param_2,undefined4 *param_3);
undefined8 recovered_4042a7a4(char *param_1);
char recovered_4042a7f8(ulong param_1);
undefined8 recovered_4042a850(undefined8 *param_1);
void recovered_4042a974(void);
char * recovered_4042a9a8(long param_1,int param_2,ulong *param_3);
void recovered_4042aac8(char *param_1,undefined8 *param_2);
ulonglong recovered_4042ab88(char *param_1,int param_2);
bool recovered_4042acd4(char *param_1,long param_2);
void recovered_4042ad10(void);
void recovered_4042ad78(undefined8 *param_1);
undefined8 recovered_4042adac(undefined8 param_1,uint *param_2);
undefined8 recovered_4042aee8(undefined8 param_1,undefined4 *param_2);
void recovered_4042af34(ulong param_1,ulong param_2,int param_3);
int * recovered_4042b14c(undefined8 param_1,ulong param_2,ulong param_3,undefined4 param_4,
                        int param_5,undefined1 param_6,undefined4 param_7);
undefined8 recovered_4042b20c(ulong param_1,ulong param_2,undefined8 *param_3,int param_4);
void recovered_4042b5ac(long param_1);
void recovered_4042b6dc(long param_1,long param_2,ulong param_3);
ulong recovered_4042b740(undefined8 param_1,ulong param_2,ulong param_3);
void recovered_4042b894(long param_1,long param_2);
undefined8 recovered_4042b8ec(long param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_4042ba10(long param_1,long param_2);
undefined8 recovered_4042ba70(ulong param_1,ulong param_2,undefined4 *param_3,int param_4);
bool recovered_4042bd4c(long param_1);
undefined8 recovered_4042bd9c(long param_1);
undefined8 recovered_4042bdf0(int *param_1,uint param_2,undefined8 *param_3);
undefined8 recovered_4042be9c(long param_1,ulong param_2,undefined4 *param_3);
void recovered_4042bfc0(long param_1,long param_2);
undefined4 * recovered_4042c00c(int param_1);
int recovered_4042c068(void);
bool recovered_4042c0d0(void);
ulong recovered_4042c148(uint param_1);
bool recovered_4042c1b8(uint param_1,int param_2,long param_3,uint param_4,uint param_5,int param_6,
                       int param_7);
undefined8 recovered_4042c2a0(undefined4 *param_1,ulong *param_2);
void recovered_4042c4e4(long param_1,uint param_2,uint param_3);
void recovered_4042c510(long param_1,int param_2,int param_3);
undefined8
recovered_4042c550(long param_1,ulong *param_2,int param_3,long param_4,long param_5,long param_6,
                  uint param_7,undefined4 param_8,int *param_9);
ulong recovered_4042c6a8(long param_1);
void recovered_4042c6cc(long param_1,int param_2,uint param_3,uint param_4);
void recovered_4042c760(long param_1,long param_2);
undefined8
recovered_4042c7a0(long param_1,ulong param_2,long *param_3,long param_4,long param_5,int param_6,
                  undefined1 param_7,undefined4 param_8,undefined4 param_9);
void recovered_4042c9f0(byte *param_1,long param_2,long param_3);
bool recovered_4042ca84(uint param_1);
ulong recovered_4042cae0(long param_1);
void recovered_4042cb08(long param_1,long param_2);
undefined8
recovered_4042cb60(long param_1,ulong param_2,long *param_3,ulong *param_4,ulong *param_5);
void recovered_4042cc88(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_4042ccbc(long *param_1,ulong *param_2,ulong param_3);
void recovered_4042cd48(long *param_1,long param_2);
void recovered_4042cd8c(long *param_1);
undefined8 recovered_4042cdb4(long param_1,int *****param_2);
byte recovered_4042cf14(long param_1,int *****param_2,ulong *param_3,uint *param_4,ulong *param_5);
void recovered_4042ecb8(void *context,char *token,char *format,...);
bool recovered_4042eda4(long param_1,byte *param_2);
void recovered_4042edf0(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_4042ee30(long param_1,ulong *param_2);
ulong recovered_4042f0c4(ulong *param_1);
bool recovered_4042f10c(byte *param_1,byte *param_2);
bool recovered_4042f168(byte *param_1);
uint recovered_4042f1e8(ulong *param_1);
undefined8 recovered_4042f23c(long param_1,long param_2);
undefined8 recovered_4042f290(long *param_1,undefined8 *param_2);
void recovered_4042f364(long param_1,long param_2);
bool recovered_4042f3a8(long param_1,ulong param_2,ulong param_3,ulong *param_4);
undefined8
recovered_4042f474(long param_1,long param_2,long *param_3,long *param_4,undefined8 *param_5);
undefined4 *
recovered_4042f554(long param_1,long param_2,long param_3,long *param_4,long param_5,
                  undefined8 param_6,undefined1 param_7);
bool recovered_4042f5c8(undefined4 *param_1,undefined8 param_2);
ulonglong recovered_4042f5fc(int *param_1);
ulong recovered_4042f678(int param_1,long param_2,undefined8 *param_3);
char recovered_4042f6c0(undefined4 *param_1);
undefined8 recovered_40430870(long param_1,undefined8 *param_2);
undefined8 recovered_404308f0(undefined4 *param_1);
undefined8 recovered_40430948(undefined4 *param_1);
long recovered_4043099c(int *param_1,int *param_2,uint param_3);
undefined8 recovered_40430b64(int *param_1,int *param_2,int *param_3,undefined8 param_4);
bool recovered_40430c2c(undefined4 *param_1);
bool recovered_40430cb8(long param_1,ulong param_2,ulong param_3,ulong *param_4,undefined1 *param_5);
bool recovered_40430dd4(long param_1,ulong param_2,ulong param_3,ulong *param_4);
void recovered_40430ea0(undefined4 *param_1,int param_2);
undefined8 recovered_40430ec4(ulong *param_1,ulong param_2,long param_3,ulong *param_4);
uchar recovered_40431010(long environment,ulong *tokens,ulong first,ulong end,ulong *result);
float recovered_404310d8(int *param_1);
undefined8 recovered_40431110(long param_1,undefined8 *param_2);
undefined8 recovered_40431198(undefined8 *param_1,undefined8 *param_2);
bool recovered_40431294(undefined4 *param_1,undefined1 *param_2);
ulong recovered_404312c8(long param_1,ulong *param_2,undefined1 *param_3);
uchar recovered_40431bc0(int *environment,long *tokens,ulong *result);
undefined8 recovered_40431c4c(long *param_1,undefined1 *param_2,long param_3);
ulong recovered_40431d04(long *param_1,undefined1 *param_2);
undefined8 recovered_40431d38(long param_1,long param_2);
undefined8 recovered_40431d8c(long param_1,ulong param_2);
undefined8 recovered_40431e08(long param_1,ulong param_2);
uchar recovered_40431e98(ulonglong *param_1,ulong *param_2);
uchar recovered_40431f4c(ulonglong *param_1,ulong *param_2);
uchar recovered_40432000(ulonglong *param_1,ulong *param_2);
uchar recovered_404320cc(ulonglong *param_1,ulong *param_2);
uint recovered_404321a4(int *param_1,byte *param_2,uint *param_3,uint *param_4,undefined8 *param_5);
uchar recovered_404326b0(ulonglong *param_1,ulong *param_2);
uchar recovered_40432768(ulonglong *param_1,ulong *param_2);
uchar recovered_40432840(ulonglong *param_1,ulong *param_2);
uchar recovered_404328d8(ulonglong *param_1,ulong *param_2);
void recovered_4043365c(undefined4 *param_1,float param_2);
void recovered_40433698(undefined4 *param_1,int param_2);
int recovered_404336c8(long param_1);
ulong recovered_40433734(long param_1,long param_2);
undefined1 recovered_4043379c(long param_1,int *param_2,int *param_3,char *param_4);
undefined8 recovered_40433858(long param_1,int *param_2,int *param_3,long param_4,char *param_5);
undefined8 recovered_404338f8(long param_1,long param_2,long param_3);
bool recovered_40433978(char *param_1);
ulong recovered_404339cc(long param_1,long param_2);
uchar recovered_40433a20(long text,int *out);
undefined8 recovered_40433b6c(long param_1,int *param_2);
void recovered_40433bbc(undefined4 *param_1,undefined4 param_2);
undefined8 recovered_40433bd8(char *param_1);
uchar recovered_40433c4c(char *text,float *out);
undefined8 recovered_40433ce4(long param_1);
ulong recovered_4043446c(long param_1,long param_2);
ulong recovered_404344e8(int *param_1,int *param_2,undefined8 *param_3);
undefined8 recovered_40434798(long *param_1,int *param_2,int param_3);
ulong recovered_40434840(ulong *param_1,int *param_2,ulong *param_3,ulong param_4,int *param_5);
bool recovered_404350e8(int *param_1,long *param_2);
uchar recovered_404351dc(int *param_1,undefined8 *param_2);
uchar recovered_40435240(int *param_1,long *param_2,uint param_3);
uint recovered_40435544(long *param_1,undefined1 *param_2);
uint128 recovered_40435578(long param_1,byte *param_2,ulong param_3);
undefined8 recovered_40435734(ulonglong param_1,undefined4 *param_2);
undefined4 * recovered_40435854(undefined4 param_1,long param_2);
undefined8 recovered_404358d0(undefined8 *param_1,long param_2,long param_3);
long recovered_40435948(long param_1,long param_2);
bool recovered_4043598c(undefined4 *param_1,undefined1 *param_2,long param_3);
undefined8 recovered_404359d8(int *param_1);
undefined8 recovered_404359f8(int param_1);
bool recovered_40435a30(uint *param_1,uint *param_2);
void recovered_40435b74(long param_1,long param_2);
ulong recovered_40435ba8(ulong *param_1,char *param_2,uint *param_3,ulong param_4,int *param_5);
undefined8 recovered_4043cbc8(void);
undefined8 recovered_4043cc8c(long param_1,long param_2);
void recovered_4043ccc0(void);
undefined8 recovered_4043ccf0(long param_1,long param_2);
void recovered_4043cda0(void);
undefined8 recovered_4043cdcc(long param_1,long param_2,undefined1 *param_3);
bool recovered_4043ce6c(void);
undefined8
recovered_4043ceb8(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,long *param_6
                  );
bool recovered_4043cf2c(long param_1,char *param_2,long param_3,long param_4);
undefined8 recovered_4043cf88(int *param_1);
undefined8
recovered_4043d148(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,int *param_6);
ulong recovered_4043d1c4(long param_1,char *param_2);
double recovered_4043d1fc(uint param_1);
undefined8
recovered_4043d250(long param_1,char *param_2,long param_3,ulong param_4,undefined8 *param_5);
ulong recovered_4043d74c(long param_1,char *param_2,long param_3,ulong param_4,undefined8 *param_5);
undefined8
recovered_4043ebec(long param_1,char *param_2,long param_3,ulong param_4,undefined8 *param_5);
undefined8
recovered_4044070c(long param_1,char *param_2,long param_3,ulong param_4,undefined8 *param_5);
undefined8
recovered_40441660(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,int *param_6);
undefined8 recovered_4044171c(long param_1,long param_2);
byte recovered_404417e0(long param_1,long param_2,long *param_3,long *param_4);
undefined8
recovered_40441834(long param_1,long param_2,long *param_3,long *param_4,long *param_5,long *param_6
                  );
long recovered_404418fc(long param_1,long param_2,int param_3);
undefined8 recovered_40441a10(int *param_1,uint *param_2,uint *param_3);
ulong recovered_40441aec(undefined4 *param_1,long param_2,long param_3,ulong param_4);
undefined8 recovered_40441b38(long param_1,char *param_2);
undefined8 recovered_40441bdc(long param_1,ulong param_2,long param_3,char *param_4,ulong param_5);
uint recovered_40441f58(undefined2 *param_1);
undefined8
recovered_40441fbc(long param_1,long *param_2,ulong *param_3,undefined8 *param_4,char *param_5,
                  ulong param_6);
double recovered_404421bc(void);
void recovered_40442214(int param_1);
float recovered_4044225c(float param_1);
ulong recovered_40442300(long param_1,char *param_2,int *param_3,long param_4,undefined8 *param_5,
                        int param_6);
void recovered_40442770(void);
void recovered_404427d0(long param_1,ulong *param_2,int param_3,int param_4);
undefined8 recovered_40442844(int *param_1,long param_2,undefined8 param_3);
undefined8 recovered_4044287c(int *param_1,long param_2,undefined8 param_3);
undefined8 recovered_404428b4(int *param_1,long param_2,long param_3);
uint recovered_40442904(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5);
undefined8 recovered_404429ac(ulong param_1,ulong param_2,ulong param_3);
undefined8 recovered_40442ab4(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4);
void recovered_40442b1c(void);
undefined8 recovered_40442b50(void);
undefined8
recovered_40442ba4(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5);
undefined8 recovered_40442d24(int *param_1,int *param_2);
undefined8
recovered_40442db4(long param_1,char *param_2,ulong param_3,int param_4,undefined8 *param_5);
undefined8
recovered_40442e30(long param_1,char *param_2,ulong param_3,ulong param_4,int param_5,
                  undefined8 *param_6);
void recovered_40442ec0(long param_1);
void recovered_40442f14(char *param_1,undefined1 *param_2);
undefined8 recovered_40443008(int *param_1,long param_2,undefined1 *param_3);
void recovered_40443068(char *param_1,int param_2);
bool recovered_404430ec(long param_1,long param_2,long param_3);
void recovered_4044313c(long param_1,ulong *param_2,long param_3);
undefined8 recovered_404431a4(undefined4 *param_1,long param_2,long param_3);
undefined8 recovered_40443210(long param_1,ulong param_2,long *param_3);
undefined8 recovered_40443314(long param_1,char *param_2,undefined8 param_3);
undefined8 recovered_404433b4(int *param_1);
undefined8 recovered_404434a4(long param_1,ulong param_2,long param_3,char *param_4);
undefined8
recovered_40443544(long param_1,long param_2,int param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,long param_8,char *param_9);
undefined8 recovered_404436b0(undefined8 param_1,undefined8 *param_2,long *param_3);
undefined8 recovered_404438c8(int *param_1,int *param_2);
undefined * recovered_40443afc(int param_1);
void recovered_40443b24(void);
undefined8 recovered_40443b38(long param_1,undefined4 *param_2);
undefined8 recovered_40443c8c(undefined8 param_1,int param_2);
undefined8 recovered_40443d08(undefined8 param_1,uint param_2);
ulong recovered_40444024(undefined8 param_1,uint param_2);
undefined8
recovered_40444484(undefined8 param_1,ulong param_2,ulong param_3,char *param_4,undefined1 *param_5);
undefined8 recovered_4044529c(undefined8 param_1,ulong param_2);
undefined4 * recovered_40445408(uint param_1);
void recovered_4044545c(uint param_1,uint param_2,uint param_3);
void recovered_40445544(long param_1);
void recovered_404455c0(long param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4);
uint recovered_40445640(long param_1,long param_2);
void recovered_4044568c(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,long param_5,long param_6);
void recovered_40445788(long param_1);
undefined8 recovered_404457a8(char *param_1);
undefined8 recovered_404457f0(long param_1);
undefined8 recovered_40445844(long param_1);
undefined8 recovered_404458a8(long param_1);
char * recovered_4044592c(char *param_1,ulonglong param_2,char *param_3);
undefined8 recovered_40445a1c(undefined8 param_1);
bool recovered_40445a50(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5
                       );
bool recovered_40445b1c(undefined8 param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_40445c08(long param_1,ulong param_2,ulong param_3);
void recovered_40445fd0(long param_1);
void recovered_40446088(long param_1,int param_2);
ulong recovered_404461c8(undefined8 param_1,int param_2,undefined8 param_3);
undefined8 recovered_4044628c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4);
void recovered_4044674c(long param_1,undefined8 param_2,byte *param_3);
ulong recovered_40446770(uint param_1,byte *param_2,undefined1 *param_3);
undefined4 * recovered_40446794(uint param_1,byte *param_2,int param_3);
undefined8 recovered_4044683c(undefined8 param_1,uint param_2,undefined8 param_3);
undefined8 recovered_40446894(long param_1,undefined1 *param_2);
uchar recovered_404468e8(long param_1);
undefined8
recovered_40446934(undefined8 param_1,ulong param_2,ulong param_3,char *param_4,long param_5);
undefined8
recovered_40446a14(char *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5);
void recovered_40446afc(long param_1,long param_2);
undefined8 recovered_40446b44(long param_1);
undefined8
recovered_40446bc8(long param_1,long param_2,char *param_3,long param_4,undefined1 *param_5);
void recovered_40446f54(ulonglong param_1,long param_2,long param_3);
double recovered_40446fc4(char *param_1,long param_2);
void recovered_40447078(long param_1);
uint recovered_404470a8(void);
bool recovered_4044794c(char *param_1,long param_2);
long recovered_40447a40(char *param_1);
void recovered_40447ae4(long param_1);
ulong recovered_40447b7c(long param_1,char *param_2);
undefined8 recovered_40447c7c(long param_1,char *param_2,long param_3);
void recovered_40447cfc(long param_1,undefined1 *param_2);
ulonglong recovered_40447d74(char *param_1,long param_2,long param_3);
ulong recovered_40447e3c(char *param_1);
void recovered_40447ea8(ulong param_1,uint param_2);
undefined8 recovered_404480c4(undefined8 param_1,int *param_2);
undefined8 recovered_40448220(undefined8 param_1,int param_2,int *param_3);
void recovered_40448464(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,
                       uint param_5,long param_6);
undefined8 recovered_40448544(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_4044857c(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4);
ulong recovered_404485d8(long param_1,uint param_2);
void recovered_40448618(long param_1);
void recovered_40448688(undefined4 param_1,undefined8 param_2,undefined4 *param_3);
uchar recovered_404486b8(void);
void recovered_404488fc(void);
undefined8 recovered_40448908(long param_1,long param_2);
undefined8
recovered_404489d0(long param_1,char *param_2,long param_3,undefined1 *param_4,long param_5,
                  long *param_6);
undefined8
recovered_40448ab8(ulong *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
void recovered_40448b5c(long *param_1);
void recovered_40448bb8(long *param_1);
void recovered_40448c04(long param_1);
void recovered_40448c54(undefined4 *param_1);
void recovered_40448ca8(undefined4 *param_1);
void recovered_40448d00(float param_1);
void recovered_40448d44(long param_1);
undefined8 recovered_40448d7c(int *param_1,int *param_2);
ulong recovered_40448ef0(long param_1,undefined8 param_2,undefined8 param_3);
undefined8 recovered_40448f60(long *param_1,long param_2,long param_3);
undefined8 recovered_40448ff0(long *param_1,long param_2,long param_3);
undefined8 recovered_404490b4(long param_1,long param_2);
ulong recovered_40449158(long *param_1,byte *param_2);
undefined8 recovered_404491c4(long *param_1,ulong param_2);
undefined8 recovered_40449258(long *param_1);
undefined8 recovered_404492e0(long *param_1);
undefined8 recovered_404493a4(undefined8 *param_1,long *param_2);
void recovered_4044944c(long param_1);
undefined8 recovered_40449470(long param_1,ulong *param_2,char *param_3,undefined1 *param_4);
undefined8 recovered_40449540(byte *param_1,undefined8 *param_2);
ulong recovered_40449578(byte *param_1);
undefined8 recovered_404495f0(long param_1,long param_2);
undefined8
recovered_404496e8(long param_1,undefined8 param_2,long param_3,ulong *param_4,byte *param_5,
                  long param_6);
bool recovered_40449b58(uint param_1,uint param_2,undefined4 *param_3);
void recovered_40449bb0(uint *param_1,uint *param_2);
char * recovered_40449c0c(char *text);
ulong recovered_40449c40(ulong param_1);
undefined8 recovered_40449c54(long param_1);
ulong recovered_40449d10(long param_1,undefined1 *param_2,undefined4 *param_3);
ulong recovered_40449d90(long *param_1,undefined2 param_2);
uchar recovered_40449db4(long *param_1,undefined4 param_2);
undefined8 recovered_40449dd8(long param_1,long param_2,char *param_3);
uint recovered_40449e30(int *param_1);
ulonglong recovered_40449f40(char *format,...);
void recovered_40449f70(long param_1);
void recovered_40449fd4(ulonglong param_1,int param_2);
undefined8 recovered_4044a040(long param_1,long param_2);
void recovered_4044a0b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
undefined8 recovered_4044a138(char *param_1,long param_2,long param_3);
undefined8 recovered_4044a350(uint param_1,uint param_2);
undefined8 recovered_4044a3a8(void);
undefined8 recovered_4044a3b0(void);
undefined8 recovered_4044a3c8(long param_1,undefined4 param_2);
undefined8 recovered_4044a47c(undefined8 *param_1);
undefined8 recovered_4044a4c4(undefined1 *param_1);
undefined4 recovered_4044a4ec(void);
bool recovered_4044a4f0(void);
ulong * recovered_4044a504(int param_1);
ulong recovered_4044a514(void *buffer);
ulong recovered_4044a518(undefined4 *param_1);
ulong recovered_4044a5d8(undefined8 *param_1);
ulong recovered_4044a638(void);
undefined8 recovered_4044a668(int param_1,undefined4 *param_2);
undefined8 recovered_4044a710(int param_1,uint param_2,long param_3,uint param_4);
undefined8 recovered_4044a780(int param_1,uint param_2,long param_3,undefined8 param_4);
uchar recovered_4044a808(void);
uchar recovered_4044a81c(void);
undefined1 recovered_4044a830(void);
uchar recovered_4044a844(void);
uchar recovered_4044a858(void);
uchar recovered_4044a86c(void);
uchar recovered_4044a880(void);
uchar recovered_4044a894(void);
uchar recovered_4044a8a8(void);
uchar recovered_4044a8bc(void);
uchar recovered_4044a8d0(void);
void recovered_4044a8e4(void);
void recovered_4044a8e8(void);
undefined8 recovered_4044a8ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined8 recovered_4044a924(void);
undefined8 recovered_4044a928(void);
undefined8 recovered_4044a92c(void);
undefined8 recovered_4044a930(void);
bool recovered_4044a934(long param_1,int *param_2);
uint recovered_4044a970(void);
void recovered_4044a9a0(void);
undefined8 recovered_4044a9a4(long param_1,undefined4 param_2);
short recovered_4044aa58(void);
undefined8 recovered_4044aa6c(undefined8 param_1);
undefined8 recovered_4044aab0(int param_1);
uint recovered_4044aad8(uint param_1);
undefined4 * recovered_4044aaf4(int param_1);
undefined8 recovered_4044ab44(long param_1,uint param_2,uint param_3,int *param_4,long *param_5);
undefined8 recovered_4044ab90(undefined8 *param_1);
void recovered_4044ac08(undefined8 *param_1);
undefined8 recovered_4044ac40(int *param_1,long param_2,long param_3);

/* Original analysis identifiers for manual recovery units. */
