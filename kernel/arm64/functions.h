/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "arm64-recovery.h"
#include "efi_context.h"
#define _recovered_40400050 (*(volatile uint32_t *)(uintptr_t)0x40400050)
#define _recovered_40400054 (*(volatile uint32_t *)(uintptr_t)0x82400054U)
#define _recovered_40400058 (*(volatile uint32_t *)(uintptr_t)0x82400058U)
#define _recovered_4040005c (*(volatile uint32_t *)(uintptr_t)0x8240005cU)
#define _recovered_40400060 (*(volatile uint32_t *)(uintptr_t)0x82400060U)
#define _recovered_40400064 (*(volatile uint32_t *)(uintptr_t)0x82400064U)
#define _recovered_40400068 (*(volatile uint32_t *)(uintptr_t)0x82400068U)
#define _recovered_4040006c (*(volatile uint32_t *)(uintptr_t)0x8240006cU)
#define _recovered_40400070 (*(volatile uint32_t *)(uintptr_t)0x82400070U)
#define _recovered_40400074 (*(volatile uint32_t *)(uintptr_t)0x82400074U)
#define _recovered_40400078 (*(volatile uint32_t *)(uintptr_t)0x40400078)
#define _recovered_4040007c (*(volatile uint32_t *)(uintptr_t)0x4040007c)
#define _recovered_40400080 (*(volatile uint32_t *)(uintptr_t)0x40400080)
#define _recovered_40400084 (*(volatile uint32_t *)(uintptr_t)0x82400078U)
#define _recovered_40400088 (*(volatile uint32_t *)(uintptr_t)0x8240007cU)
#define _recovered_4040008c (*(volatile uint32_t *)(uintptr_t)0x82400080U)
#define _recovered_40400090 (*(volatile uint32_t *)(uintptr_t)0x82400084U)
#define _recovered_40400094 (*(volatile uint32_t *)(uintptr_t)0x82400088U)
#define _recovered_40400098 (*(volatile uint32_t *)(uintptr_t)0x8240008cU)
#define _recovered_4040009c (*(volatile uint32_t *)(uintptr_t)0x82400090U)
#define _recovered_404000a0 (*(volatile uint32_t *)(uintptr_t)0x82400094U)
#define _recovered_404000a4 (*(volatile uint32_t *)(uintptr_t)0x82400098U)
#define _recovered_404000a8 (*(volatile uint32_t *)(uintptr_t)0x8240009cU)
#define _recovered_404000ac (*(volatile uint32_t *)(uintptr_t)0x824000a0U)
#define _recovered_404000b0 (*(volatile uint32_t *)(uintptr_t)0x824000a4U)
#define _recovered_404000b4 (*(volatile uint32_t *)(uintptr_t)0x824000a8U)
#define _recovered_404000b8 (*(volatile uint32_t *)(uintptr_t)0x824000acU)
#define _recovered_404000bc (*(volatile uint32_t *)(uintptr_t)0x824000b0U)
#include "cpu.h"
#define Reset (*(volatile uint8_t *)(uintptr_t)0)
#define UNK_4047ba41 (*(volatile uint8_t *)(uintptr_t)0x4047ba41)
#define UNK_4047ba42 (*(volatile uint8_t *)(uintptr_t)0x4047ba42)
#define pf_varargs_404019bc_0 recovered_82401ff0
#define pf_varargs_404019bc_1 recovered_82401ff0
#define pf_varargs_404019bc_10 recovered_82401ff0
#define pf_varargs_404019bc_11 recovered_82401ff0
#define pf_varargs_404019bc_2 recovered_82401ff0
#define pf_varargs_404019bc_3 recovered_82401ff0
#define pf_varargs_404019bc_4 recovered_82401ff0
#define pf_varargs_404019bc_5 recovered_82401ff0
#define pf_varargs_404019bc_6 recovered_82401ff0
#define pf_varargs_404019bc_7 recovered_82401ff0
#define pf_varargs_404019bc_8 recovered_82401ff0
#define pf_varargs_404019bc_9 recovered_82401ff0
#define pf_varargs_4041aa18_1 recovered_824234a4
#define pf_varargs_4041aa18_10 recovered_824234a4
#define pf_varargs_4041aa18_11 recovered_824234a4
#define pf_varargs_4041aa18_2 recovered_824234a4
#define pf_varargs_4041aa18_3 recovered_824234a4
#define pf_varargs_4041aa18_4 recovered_824234a4
#define pf_varargs_4041aa18_5 recovered_824234a4
#define pf_varargs_4041aa18_6 recovered_824234a4
#define pf_varargs_4041aa18_9 recovered_824234a4
#define pf_varargs_4042ecb8_0 recovered_8244c884
#define pf_varargs_4042ecb8_1 recovered_8244c884
#define pf_varargs_4042ecb8_2 recovered_8244c884
#define pf_varargs_4042ecb8_3 recovered_8244c884
#define pf_varargs_40449f40_0 recovered_8246f020
#define pf_varargs_40449f40_10 recovered_8246f020
#define pf_varargs_40449f40_2 recovered_8246f020





/* Original analysis identifiers for manual recovery units. */

/* Native byte aliases within larger recovered objects. */
#define UNK_8248ab2c (*(uint8_t volatile *)(uintptr_t)0x8248ab2cU)
#define UNK_8248ab50 (*(uint8_t volatile *)(uintptr_t)0x8248ab50U)
#define UNK_8248c008 (*(uint8_t volatile *)(uintptr_t)0x8248c008U)
#define UNK_8248c018 (*(uint8_t volatile *)(uintptr_t)0x8248c018U)
#define UNK_8248c028 (*(uint8_t volatile *)(uintptr_t)0x8248c028U)
#define UNK_82491000 (*(uint8_t volatile *)(uintptr_t)0x82491000U)
#define UNK_8249d000 (*(uint8_t volatile *)(uintptr_t)0x8249d000U)
#define UNK_8251e004 (*(uint8_t volatile *)(uintptr_t)0x8251e004U)
#define UNK_8251e008 (*(uint8_t volatile *)(uintptr_t)0x8251e008U)
#define UNK_8251f008 (*(uint8_t volatile *)(uintptr_t)0x8251f008U)
#define UNK_8251f009 (*(uint8_t volatile *)(uintptr_t)0x8251f009U)
#define UNK_8251f00a (*(uint8_t volatile *)(uintptr_t)0x8251f00aU)
#define UNK_8251f00b (*(uint8_t volatile *)(uintptr_t)0x8251f00bU)
#define UNK_8251f00c (*(uint8_t volatile *)(uintptr_t)0x8251f00cU)
#define UNK_8251f00d (*(uint8_t volatile *)(uintptr_t)0x8251f00dU)
#define UNK_8251f00e (*(uint8_t volatile *)(uintptr_t)0x8251f00eU)
#define UNK_8251f00f (*(uint8_t volatile *)(uintptr_t)0x8251f00fU)
#define UNK_8251f011 (*(uint8_t volatile *)(uintptr_t)0x8251f011U)
#define UNK_8251f012 (*(uint8_t volatile *)(uintptr_t)0x8251f012U)
#define UNK_8251f013 (*(uint8_t volatile *)(uintptr_t)0x8251f013U)
#define UNK_82521000 (*(uint8_t volatile *)(uintptr_t)0x82521000U)
#define UNK_8252b000 (*(uint8_t volatile *)(uintptr_t)0x8252b000U)
#define UNK_8252c000 (*(uint8_t volatile *)(uintptr_t)0x8252c000U)
#define UNK_8252c004 (*(uint8_t volatile *)(uintptr_t)0x8252c004U)
#define UNK_8253f004 (*(uint8_t volatile *)(uintptr_t)0x8253f004U)
#define UNK_8253f005 (*(uint8_t volatile *)(uintptr_t)0x8253f005U)
#define UNK_8253f006 (*(uint8_t volatile *)(uintptr_t)0x8253f006U)
#define UNK_8253f007 (*(uint8_t volatile *)(uintptr_t)0x8253f007U)
#define UNK_825420d8 (*(uint8_t volatile *)(uintptr_t)0x825420d8U)
#define UNK_825420d9 (*(uint8_t volatile *)(uintptr_t)0x825420d9U)
#define UNK_825420da (*(uint8_t volatile *)(uintptr_t)0x825420daU)
#define UNK_825420db (*(uint8_t volatile *)(uintptr_t)0x825420dbU)
#define UNK_825420dc (*(uint8_t volatile *)(uintptr_t)0x825420dcU)
#define UNK_825420dd (*(uint8_t volatile *)(uintptr_t)0x825420ddU)
#define UNK_825420de (*(uint8_t volatile *)(uintptr_t)0x825420deU)
#define UNK_825420df (*(uint8_t volatile *)(uintptr_t)0x825420dfU)
#define UNK_825420e5 (*(uint8_t volatile *)(uintptr_t)0x825420e5U)
#define UNK_825420e6 (*(uint8_t volatile *)(uintptr_t)0x825420e6U)
#define UNK_825420e7 (*(uint8_t volatile *)(uintptr_t)0x825420e7U)
#define UNK_825420e9 (*(uint8_t volatile *)(uintptr_t)0x825420e9U)
#define UNK_825420ea (*(uint8_t volatile *)(uintptr_t)0x825420eaU)
#define UNK_825420eb (*(uint8_t volatile *)(uintptr_t)0x825420ebU)
#define UNK_825420ec (*(uint8_t volatile *)(uintptr_t)0x825420ecU)
#define UNK_825420ed (*(uint8_t volatile *)(uintptr_t)0x825420edU)
#define UNK_825420ee (*(uint8_t volatile *)(uintptr_t)0x825420eeU)
#define UNK_825420ef (*(uint8_t volatile *)(uintptr_t)0x825420efU)
#define UNK_82542141 (*(uint8_t volatile *)(uintptr_t)0x82542141U)
#define UNK_82542142 (*(uint8_t volatile *)(uintptr_t)0x82542142U)
#define UNK_82542143 (*(uint8_t volatile *)(uintptr_t)0x82542143U)
#define UNK_82542144 (*(uint8_t volatile *)(uintptr_t)0x82542144U)
#define UNK_82542145 (*(uint8_t volatile *)(uintptr_t)0x82542145U)
#define UNK_82542146 (*(uint8_t volatile *)(uintptr_t)0x82542146U)
#define UNK_82542147 (*(uint8_t volatile *)(uintptr_t)0x82542147U)
#define UNK_82542148 (*(uint8_t volatile *)(uintptr_t)0x82542148U)
#define UNK_82542149 (*(uint8_t volatile *)(uintptr_t)0x82542149U)
#define UNK_8254214a (*(uint8_t volatile *)(uintptr_t)0x8254214aU)
#define UNK_8254214b (*(uint8_t volatile *)(uintptr_t)0x8254214bU)
#define UNK_8254214c (*(uint8_t volatile *)(uintptr_t)0x8254214cU)
#define UNK_8254214d (*(uint8_t volatile *)(uintptr_t)0x8254214dU)
#define UNK_8254214e (*(uint8_t volatile *)(uintptr_t)0x8254214eU)
#define UNK_8254214f (*(uint8_t volatile *)(uintptr_t)0x8254214fU)
#define UNK_8254220a (*(uint8_t volatile *)(uintptr_t)0x8254220aU)
#define UNK_8254220b (*(uint8_t volatile *)(uintptr_t)0x8254220bU)
#define UNK_82542220 (*(uint8_t volatile *)(uintptr_t)0x82542220U)
#define UNK_82542221 (*(uint8_t volatile *)(uintptr_t)0x82542221U)
#define UNK_82542222 (*(uint8_t volatile *)(uintptr_t)0x82542222U)
#define UNK_82542226 (*(uint8_t volatile *)(uintptr_t)0x82542226U)
#define UNK_8254223c (*(uint8_t volatile *)(uintptr_t)0x8254223cU)
#define UNK_82542292 (*(uint8_t volatile *)(uintptr_t)0x82542292U)
#define UNK_82542296 (*(uint8_t volatile *)(uintptr_t)0x82542296U)
#define UNK_825422c6 (*(uint8_t volatile *)(uintptr_t)0x825422c6U)
#define UNK_825422d8 (*(uint8_t volatile *)(uintptr_t)0x825422d8U)
#define UNK_825422d9 (*(uint8_t volatile *)(uintptr_t)0x825422d9U)
#define UNK_825422da (*(uint8_t volatile *)(uintptr_t)0x825422daU)
#define UNK_825422de (*(uint8_t volatile *)(uintptr_t)0x825422deU)
#define UNK_8254258c (*(uint8_t volatile *)(uintptr_t)0x8254258cU)
#define UNK_82544002 (*(uint8_t volatile *)(uintptr_t)0x82544002U)
#define UNK_82544208 (*(uint8_t volatile *)(uintptr_t)0x82544208U)
#define UNK_8254420c (*(uint8_t volatile *)(uintptr_t)0x8254420cU)
#define UNK_82544210 (*(uint8_t volatile *)(uintptr_t)0x82544210U)
#define UNK_82544214 (*(uint8_t volatile *)(uintptr_t)0x82544214U)
#define UNK_82545c82 (*(uint8_t volatile *)(uintptr_t)0x82545c82U)
#define UNK_82546082 (*(uint8_t volatile *)(uintptr_t)0x82546082U)
#define UNK_825464b1 (*(uint8_t volatile *)(uintptr_t)0x825464b1U)
#define UNK_82547b20 (*(uint8_t volatile *)(uintptr_t)0x82547b20U)
#define UNK_82547b21 (*(uint8_t volatile *)(uintptr_t)0x82547b21U)
#define UNK_82557ffc (*(uint8_t volatile *)(uintptr_t)0x82557ffcU)
#define UNK_82558018 (*(uint8_t volatile *)(uintptr_t)0x82558018U)
#define UNK_8255801c (*(uint8_t volatile *)(uintptr_t)0x8255801cU)
#define UNK_8255e7a0 (*(uint8_t volatile *)(uintptr_t)0x8255e7a0U)
#define UNK_82561768 (*(uint8_t volatile *)(uintptr_t)0x82561768U)
#define UNK_82564428 (*(uint8_t volatile *)(uintptr_t)0x82564428U)
#define UNK_8256442a (*(uint8_t volatile *)(uintptr_t)0x8256442aU)
#define UNK_82567cf0 (*(uint8_t volatile *)(uintptr_t)0x82567cf0U)
#define UNK_8256fcf0 (*(uint8_t volatile *)(uintptr_t)0x8256fcf0U)
#define UNK_825f1bf0 (*(uint8_t volatile *)(uintptr_t)0x825f1bf0U)
#define UNK_825f1bf8 (*(uint8_t volatile *)(uintptr_t)0x825f1bf8U)
#define UNK_825f1c00 (*(uint8_t volatile *)(uintptr_t)0x825f1c00U)
#define UNK_825f1c08 (*(uint8_t volatile *)(uintptr_t)0x825f1c08U)
#define UNK_825f84f4 (*(uint8_t volatile *)(uintptr_t)0x825f84f4U)
#define UNK_825f84fc (*(uint8_t volatile *)(uintptr_t)0x825f84fcU)
#define UNK_825f8504 (*(uint8_t volatile *)(uintptr_t)0x825f8504U)
#define UNK_825f8508 (*(uint8_t volatile *)(uintptr_t)0x825f8508U)
#define UNK_825f8515 (*(uint8_t volatile *)(uintptr_t)0x825f8515U)
#define UNK_825f8c10 (*(uint8_t volatile *)(uintptr_t)0x825f8c10U)
#define UNK_825fbba0 (*(uint8_t volatile *)(uintptr_t)0x825fbba0U)
#define UNK_82608440 (*(uint8_t volatile *)(uintptr_t)0x82608440U)
#define UNK_82608444 (*(uint8_t volatile *)(uintptr_t)0x82608444U)
#define UNK_82608448 (*(uint8_t volatile *)(uintptr_t)0x82608448U)
#define UNK_8260844c (*(uint8_t volatile *)(uintptr_t)0x8260844cU)
#define UNK_82608450 (*(uint8_t volatile *)(uintptr_t)0x82608450U)
#define UNK_82608454 (*(uint8_t volatile *)(uintptr_t)0x82608454U)
#define UNK_82608458 (*(uint8_t volatile *)(uintptr_t)0x82608458U)
#define UNK_8260845c (*(uint8_t volatile *)(uintptr_t)0x8260845cU)
#define UNK_82608464 (*(uint8_t volatile *)(uintptr_t)0x82608464U)
#define UNK_8260846c (*(uint8_t volatile *)(uintptr_t)0x8260846cU)
#define UNK_82608470 (*(uint8_t volatile *)(uintptr_t)0x82608470U)
#define UNK_8260847e (*(uint8_t volatile *)(uintptr_t)0x8260847eU)
#define UNK_826085b0 (*(uint8_t volatile *)(uintptr_t)0x826085b0U)
#define UNK_82608630 (*(uint8_t volatile *)(uintptr_t)0x82608630U)
#define UNK_826086d0 (*(uint8_t volatile *)(uintptr_t)0x826086d0U)
#define UNK_82608710 (*(uint8_t volatile *)(uintptr_t)0x82608710U)
#define UNK_82608910 (*(uint8_t volatile *)(uintptr_t)0x82608910U)
#define UNK_82608b10 (*(uint8_t volatile *)(uintptr_t)0x82608b10U)
#define UNK_82608bd0 (*(uint8_t volatile *)(uintptr_t)0x82608bd0U)
#define UNK_82608fd0 (*(uint8_t volatile *)(uintptr_t)0x82608fd0U)
#define UNK_82608fd8 (*(uint8_t volatile *)(uintptr_t)0x82608fd8U)
#define UNK_82608fe0 (*(uint8_t volatile *)(uintptr_t)0x82608fe0U)
#define UNK_82608fe8 (*(uint8_t volatile *)(uintptr_t)0x82608fe8U)
#define UNK_82608ff0 (*(uint8_t volatile *)(uintptr_t)0x82608ff0U)
#define UNK_82608ff8 (*(uint8_t volatile *)(uintptr_t)0x82608ff8U)
#define UNK_82609000 (*(uint8_t volatile *)(uintptr_t)0x82609000U)
#define UNK_82609008 (*(uint8_t volatile *)(uintptr_t)0x82609008U)
#define UNK_82609010 (*(uint8_t volatile *)(uintptr_t)0x82609010U)
#define UNK_82609018 (*(uint8_t volatile *)(uintptr_t)0x82609018U)
#define UNK_82609318 (*(uint8_t volatile *)(uintptr_t)0x82609318U)
#define UNK_82609618 (*(uint8_t volatile *)(uintptr_t)0x82609618U)
#define UNK_82609758 (*(uint8_t volatile *)(uintptr_t)0x82609758U)
#define UNK_82609760 (*(uint8_t volatile *)(uintptr_t)0x82609760U)
#define UNK_82609768 (*(uint8_t volatile *)(uintptr_t)0x82609768U)
#define UNK_82609770 (*(uint8_t volatile *)(uintptr_t)0x82609770U)
#define UNK_82656448 (*(uint8_t volatile *)(uintptr_t)0x82656448U)
#define UNK_8265644c (*(uint8_t volatile *)(uintptr_t)0x8265644cU)
#define UNK_8265648c (*(uint8_t volatile *)(uintptr_t)0x8265648cU)
#define UNK_826577d8 (*(uint8_t volatile *)(uintptr_t)0x826577d8U)
#define UNK_82665c44 (*(uint8_t volatile *)(uintptr_t)0x82665c44U)
#define UNK_82665c48 (*(uint8_t volatile *)(uintptr_t)0x82665c48U)
#define UNK_82665c88 (*(uint8_t volatile *)(uintptr_t)0x82665c88U)
#define UNK_8266ec84 (*(uint8_t volatile *)(uintptr_t)0x8266ec84U)
#define UNK_8266ecc0 (*(uint8_t volatile *)(uintptr_t)0x8266ecc0U)
#define UNK_8266ecc8 (*(uint8_t volatile *)(uintptr_t)0x8266ecc8U)
#define UNK_8266eccc (*(uint8_t volatile *)(uintptr_t)0x8266ecccU)
#define UNK_8266f368 (*(uint8_t volatile *)(uintptr_t)0x8266f368U)
#define UNK_8266f55c (*(uint8_t volatile *)(uintptr_t)0x8266f55cU)
#define UNK_8266f990 (*(uint8_t volatile *)(uintptr_t)0x8266f990U)
#define UNK_8266fb68 (*(uint8_t volatile *)(uintptr_t)0x8266fb68U)
#define UNK_8266fb6f (*(uint8_t volatile *)(uintptr_t)0x8266fb6fU)

__attribute__((naked,noreturn)) void recovered_82400030(uintptr_t context);
undefined8 recovered_8240004c(void);
void recovered_824000b4(void);
uint recovered_824000c0(void);
ulong recovered_82400344(void);
long recovered_82400390(void);
ulong recovered_824003d0(void);
long recovered_8240040c(void);
void * recovered_8240043c(ulong size);
void recovered_824004e0(ulong *param_1,long param_2);
ulong recovered_82400538(ulong param_1,uint param_2);
ulong recovered_8240057c(ulong param_1,uint param_2);
long recovered_824005c8(long param_1,uint param_2);
ulong recovered_82400618(undefined8 param_1,undefined8 param_2);
ulong recovered_82400620(ulong param_1,ulong param_2,long *param_3);
undefined8 recovered_82400680(undefined8 param_1,undefined8 param_2);
long recovered_824006a0(ulong param_1,ulong param_2);
long recovered_824006e4(long param_1,long param_2);
void recovered_82400730(void);
int recovered_82400738(int param_1);
void *recovered_82400744(ulong size);
ulong recovered_82400748(void *buffer);
void recovered_824007bc(long *param_1);
void * recovered_82400820(void *data,ulong size);
void * recovered_82400928(void *out,void *data,ulong count);
void * recovered_82400a00(void *out,void *data,ulong count);
void * recovered_82400b14(void *out,int value,ulong count);
void recovered_82400bac(uchar *param_1,long param_2);
double recovered_82400bb0(uchar *param_1,long param_2);
int recovered_82400bb4(void *left,void *right,ulong size);
int recovered_82400d20(long param_1,long param_2);
bool recovered_82400d50(int param_1);
bool recovered_82400d60(int param_1);
bool recovered_82400d70(uint param_1);
bool recovered_82400d84(uint param_1);
bool recovered_82400da0(int param_1);
bool recovered_82400db0(int param_1);
int recovered_82400dc0(int param_1);
int recovered_82400dd4(int param_1);
ulong recovered_82400de8(char *text);
int recovered_82400e0c(char *left,char *right);
int recovered_82400e34(char *left,char *right);
void recovered_82400e38(long param_1,long param_2);
ulong * recovered_82400e50(long param_1);
char * recovered_82400e90(char *param_1,char param_2);
long recovered_82400eb8(long param_1,char *param_2);
char * recovered_82400efc(char *param_1,char *param_2);
char * recovered_82400f40(char *param_1,char *param_2);
undefined * recovered_82400f7c(void);
undefined ** recovered_82400f88(void);
undefined8 recovered_82400f94(undefined8 *param_1);
double recovered_82400fb0(double param_1,uint param_2);
uint128 recovered_82400fe4(double param_1,int *param_2);
double recovered_82401058(double left,double right);
double recovered_8240107c(double left,double right);
double recovered_824010dc(double value);
double recovered_824010f8(double value);
double recovered_82401124(double value);
double recovered_82401160(double value);
long recovered_8240120c(double param_1);
double recovered_82401220(double value);
void recovered_82401274(double param_1);
double recovered_824012b8(double value);
double recovered_82401304(double value);
longlong recovered_82401314(double param_1);
ulonglong recovered_82401374(double param_1);
double recovered_824013c4(ulonglong param_1);
double recovered_824013ec(longlong param_1);
float recovered_82401410(float left,float right);
float recovered_82401444(float param_1);
float recovered_8240145c(float param_1);
float recovered_82401474(float left,float right);
float recovered_82401490(float value);
float recovered_824014b4(float value);
double recovered_824014cc(double value);
float recovered_824014f4(float value);
float recovered_8240150c(float value);
float recovered_82401524(float value);
long recovered_8240153c(double param_1);
float recovered_82401550(float value);
float recovered_82401568(float value);
float recovered_82401580(float value);
long recovered_82401590(byte *param_1,undefined8 *param_2,uint param_3);
uint recovered_82401698(int param_1);
long recovered_824016c8(byte *param_1,undefined8 *param_2,uint param_3);
double recovered_824017f0(char *text,char **end);
float recovered_82401980(char *text,char **end);
int recovered_82401998(char *out,ulong capacity,char *format,void *args);
void recovered_82401ec0(long *param_1,ulong *param_2,int *param_3,undefined1 param_4);
void recovered_82401efc(long *param_1,ulong *param_2,int *param_3,char *param_4);
void recovered_82401f4c(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6);
int recovered_82401ff0(char *buffer,size_t capacity,const char *format,...);
void recovered_82402018(ulong param_1,ulong param_2,ulong *param_3);
void recovered_824020a0(long param_1,ulong param_2,ulong *param_3);
undefined8 recovered_82402204(void);
undefined8 recovered_82402208(void);
uint recovered_8240220c(uint32_t node);
uint recovered_82402210(uint32_t node);
uint recovered_82402214(uint32_t node);
uint recovered_82402218(const char *path);
undefined8 recovered_8240221c(void);
undefined8 recovered_82402224(undefined8 param_1,undefined1 *param_2,int param_3);
void recovered_82402234(void);
void recovered_82402238(void);
undefined8 recovered_8240223c(void);
void recovered_82402240(int *param_1);
void recovered_824022b0(undefined8 *param_1);
void recovered_824022d0(uint param_1);
uchar recovered_82402308(void);
undefined8 recovered_8240234c(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_82402358(void);
undefined8 recovered_8240235c(void *param_1);
undefined1 recovered_82402374(ulong param_1,long param_2);
bool recovered_82402408(undefined8 param_1,int param_2);
ulong recovered_82402450(void *param_1,uint param_2);
undefined8 recovered_82402624(uint param_1,ulong *param_2);
ulonglong recovered_824027e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                            uint *param_6);
ulonglong recovered_82402864(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                            uint param_6);
ulonglong recovered_824028dc(ulong param_1,uint param_2,uint param_3,uint param_4);
ulonglong recovered_82402c2c(ulong param_1,ulong param_2,ulong *param_3);
void recovered_82402d00(uint param_1,uint param_2,uint param_3,uint param_4);
void recovered_82402e00(ulong param_1,long param_2);
void recovered_82402e48(void);
void recovered_82402e4c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5,undefined4 *param_6);
ulonglong recovered_82402e80(int param_1,int param_2,int param_3,int *param_4);
byte recovered_82402f14(ulong param_1,long param_2);
ulonglong recovered_8240319c(uint param_1,int param_2,int param_3,ulong *param_4);
void recovered_82403248(long param_1);
uchar recovered_824032c8(void);
int recovered_8240365c(void);
void recovered_82403864(long param_1);
void recovered_824038b0(undefined8 param_1);
undefined4 recovered_824038bc(void);
int recovered_824038e4(void);
int recovered_824038fc(void);
uint recovered_82403914(void);
uint recovered_82403978(void);
void recovered_824039d0(void);
void recovered_824039d8(void);
undefined8 recovered_824039e0(uint *param_1,int param_2,uint *param_3);
undefined8 recovered_82403a3c(undefined4 *param_1,int param_2,undefined4 param_3);
uchar recovered_82403a84(uint param_1);
uchar recovered_82403a8c(uint param_1);
void recovered_82403a94(void);
void recovered_82403da4(void);
void recovered_82403dd0(void);
ulonglong recovered_82403e04(uint param_1,int *param_2);
ulong recovered_82403e90(void);
uint recovered_82403f14(void);
void recovered_8240400c(void);
ulonglong recovered_824040a4(void);
uint recovered_824040ac(void);
uint recovered_82404190(void);
uint recovered_824041c8(void);
void recovered_82404200(ulong param_1);
ulong recovered_824042ac(void);
ulong recovered_824042e0(uint param_1);
void recovered_82404320(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
void recovered_8240449c(uint param_1,uint param_2,long param_3,ulong param_4,uint param_5);
void recovered_82404604(int param_1,int param_2,ulong param_3,uint param_4);
void recovered_82404714(long param_1);
void recovered_82404750(ulonglong param_1);
void recovered_8240479c(uint param_1,uint param_2);
undefined8 recovered_82404818(void);
ulong recovered_82404850(uchar *param_1,ulong param_2);
ulonglong recovered_82404904(ulonglong param_1,long param_2,int param_3,uint *param_4,uint *param_5);
bool recovered_82404964(ulong param_1,uint param_2,ulong *param_3);
void recovered_824049e0(void);
ulong recovered_824049e4(void);
undefined8 recovered_82404d24(undefined8 param_1,int *param_2);
uchar recovered_82404d90(ulonglong param_1,ulong param_2,long param_3,ulong param_4);
int recovered_824052b0(void);
uint recovered_824052e4(void);
uint recovered_82405318(int param_1);
ulonglong recovered_8240534c(uint param_1,ulong param_2,ulong param_3,uint param_4,long param_5);
bool recovered_8240540c(uint param_1,uint param_2,int param_3,uint param_4);
ulong recovered_82405464(ulonglong param_1,uint param_2,ulong param_3,uint param_4);
void recovered_82405580(uchar param_1,uint param_2,int param_3,uchar param_4);
uchar recovered_824055cc(ulonglong param_1,uint param_2,long param_3,ulong param_4);
uint recovered_824059a8(int param_1);
uint recovered_824059dc(uint param_1);
bool recovered_82405a70(uint param_1);
ulong recovered_82405ad0(uint param_1);
undefined8 recovered_82405b64(void);
uint recovered_82405b90(ulong param_1);
void recovered_82405cd0(int param_1);
int recovered_82405d14(void);
uint recovered_82405d44(uint command);
ulong recovered_82405d80(void);
ulong recovered_82405da4(void);
void recovered_82405dc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
uint recovered_82405de4(ulong param_1);
uint recovered_82405e00(void);
uint recovered_82405e14(void);
uint recovered_82405e64(uint *param_1);
ulonglong recovered_824060e0(long param_1);
byte recovered_824083b0(void);
bool recovered_824083f8(void);
void recovered_82408440(void);
undefined8 recovered_82408c88(undefined4 *param_1);
void recovered_82408f8c(uint *param_1,uint *param_2);
void recovered_82408fcc(uint *param_1,uint *param_2,uint *param_3);
void recovered_82409020(uint *param_1,uint *param_2,uint *param_3,uint *param_4);
void recovered_824090e0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5);
void recovered_82409134(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 *param_5);
void recovered_824091a0(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                       undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                       undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                       undefined4 *param_11,undefined4 *param_12);
void recovered_82409290(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                       uint *param_6);
void recovered_8240930c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                       undefined4 *param_4,uint *param_5,uint *param_6);
uint recovered_82409388(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                       uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10);
void recovered_82409450(uint *param_1,uint *param_2,uint *param_3);
void recovered_824094bc(undefined4 *param_1,uint *param_2,uint *param_3);
ulonglong recovered_824094f0(void);
undefined8 * recovered_82409aac(void);
void recovered_82409ab8(void);
void recovered_82409ac8(uint param_1);
bool recovered_82409b2c(void);
double recovered_82409b70(char *param_1);
void recovered_82409b9c(char *param_1,long param_2);
ulong recovered_82409bd4(uchar *param_1);
undefined8 recovered_82409c34(void);
uint recovered_82409c38(uint32_t leaf,uint32_t subleaf,void *out);
undefined1 recovered_82409c3c(undefined8 *param_1);
undefined8 recovered_82409c98(undefined8 param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 recovered_82409cac(void);
uint recovered_82409cb0(uint32_t enable);
ulong recovered_82409cb4(void);
long recovered_82409cb8(void);
ulong recovered_82409cbc(void);
ulong recovered_82409d14(void);
ulonglong recovered_82409d64(void);
undefined1 * recovered_82409d8c(void);
ulong recovered_82409d98(long param_1);
char * recovered_82409f00(char *param_1,char *param_2);
void recovered_82409f80(long param_1);
char * recovered_82409fa4(void);
undefined1 recovered_8240a09c(ulong param_1,long param_2);
bool recovered_8240a104(char *param_1,uint param_2);
bool recovered_8240a138(int *param_1,int param_2,uint param_3,long param_4);
bool recovered_8240a19c(char *param_1,char *param_2);
ulong recovered_8240a1f4(long param_1,int param_2,char *param_3);
void recovered_8240a2f0(long param_1,ulong param_2,long param_3,uint param_4);
uint recovered_8240a60c(byte *param_1,ulong param_2,ulong *param_3);
ulong recovered_8240a67c(long param_1,ulong param_2,undefined1 *param_3);
void recovered_8240a7a0(char *param_1,ulong param_2,byte *param_3);
ulonglong recovered_8240a8b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                            long *param_6);
uchar recovered_8240aac4(uint param_1,long param_2);
int recovered_8240ab3c(void);
bool recovered_8240ab70(long param_1);
ulonglong recovered_8240abb0(uint param_1,uint *param_2);
undefined1 recovered_8240ac18(void);
undefined8 recovered_8240ac98(void);
int recovered_8240acc8(void);
int recovered_8240ace0(uint param_1);
ulong recovered_8240acfc(int param_1,int param_2,int param_3);
ulong recovered_8240ad5c(int param_1);
ulonglong recovered_8240ad80(ulonglong param_1,uint *param_2,int *param_3);
uint recovered_8240ae44(ulonglong param_1);
ulonglong recovered_8240ae90(uint param_1,uint param_2,uint param_3,undefined1 *param_4);
void recovered_8240afb4(byte *param_1);
ulonglong recovered_8240b01c(long param_1,uint param_2,uint param_3,uint param_4,ulong *param_5);
ulonglong recovered_8240b078(long param_1,uint param_2,uint param_3,ulong *param_4);
undefined4 recovered_8240b0dc(undefined4 *param_1);
void recovered_8240b0fc(undefined4 param_1);
void recovered_8240b14c(void);
undefined8 recovered_8240b184(undefined8 param_1,int param_2);
void recovered_8240b28c(undefined1 *param_1,undefined8 param_2);
void recovered_8240b2cc(uint param_1,undefined *param_2);
void recovered_8240b444(long param_1,uint param_2);
void recovered_8240b6b0(void);
void recovered_8240b7dc(long param_1,uint param_2);
undefined8 recovered_8240b8b0(uint param_1,int param_2);
void recovered_8240bb28(undefined4 param_1,undefined4 param_2);
void recovered_8240bb84(int param_1);
void recovered_8240bbb8(uint param_1,uint param_2);
void recovered_8240bc2c(uint param_1);
undefined8 recovered_8240bc68(ulong param_1,void *param_2,ulong param_3);
undefined8 recovered_8240bd80(long param_1,uint param_2,int *param_3,int param_4);
ulong recovered_8240bf24(void);
bool recovered_8240bfec(uint *param_1);
ulong recovered_8240c06c(uint param_1,uint param_2,uint *param_3);
undefined8 recovered_8240c1bc(uint *param_1);
ulong recovered_8240c3cc(byte param_1,ulong param_2);
ulong recovered_8240c3f0(undefined1 param_1,undefined8 param_2);
undefined8 recovered_8240c410(void *param_1,undefined4 *param_2,undefined4 *param_3);
void recovered_8240c48c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8
recovered_8240c4d4(undefined8 param_1,uint param_2,int param_3,uint *param_4,undefined1 *param_5);
void recovered_8240c5e8(undefined1 *param_1,undefined1 param_2,int param_3,int param_4);
void recovered_8240c644(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                       ulong param_5,undefined4 param_6);
ulong recovered_8240c6cc(long param_1,uint *param_2,uint *param_3,undefined8 param_4,
                        undefined8 param_5,uint param_6,long *param_7);
void recovered_8240c7b4(uint param_1,undefined4 param_2);
undefined8 recovered_8240c7cc(void *param_1,uint param_2);
undefined8 recovered_8240c8b8(undefined8 *param_1);
ulong recovered_8240c8f8(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4
                        ,uint param_5,undefined1 *param_6,ulong param_7);
undefined1 recovered_8240cadc(char *param_1,uint param_2);
void recovered_8240cb2c(void);
bool recovered_8240cb44(char *param_1,uint param_2,uint *param_3);
undefined8 recovered_8240cd30(void);
bool recovered_8240cf80(uint *param_1);
void recovered_8240cff0(void);
void recovered_8240d010(long param_1,uint param_2,int param_3,int param_4,int param_5,ushort param_6
                       );
void recovered_8240d038(long param_1,uint param_2,int param_3,int param_4,undefined1 param_5,
                       undefined8 param_6);
undefined8
recovered_8240d064(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,uint param_7);
undefined8 recovered_8240d548(ulong param_1,undefined8 param_2,undefined4 *param_3);
undefined8
recovered_8240d598(long param_1,uint param_2,int param_3,int param_4,undefined1 param_5,
                  undefined1 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined1 *param_10,ushort param_11);
void recovered_8240d874(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_8240d884(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       );
void recovered_8240d8a4(void);
undefined8 recovered_8240d8cc(void);
void recovered_8240d940(void);
void recovered_8240d968(void);
undefined8 recovered_8240d990(void);
bool recovered_8240dacc(uint *param_1);
void recovered_8240db3c(long param_1);
void recovered_8240db5c(long param_1,uint param_2,uint param_3,int param_4,int param_5,
                       ushort param_6);
void recovered_8240db84(long param_1,uint param_2,uint param_3,int param_4,undefined1 param_5,
                       undefined4 param_6);
undefined8
recovered_8240dbb0(long param_1,uint param_2,uint param_3,int param_4,undefined1 param_5,
                  undefined1 param_6,undefined4 param_7,undefined4 param_8,byte param_9,
                  undefined1 *param_10,ushort param_11);
void recovered_8240df90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5);
void recovered_8240dfa0(undefined4 param_1);
bool recovered_8240e000(int param_1);
void recovered_8240e048(void);
ulong recovered_8240e070(uint param_1);
ulonglong recovered_8240e0cc(long param_1);
bool recovered_8240e25c(long param_1);
void recovered_8240e294(uint param_1);
void recovered_8240eaa0(char *param_1,long param_2);
void recovered_8240eb58(int param_1);
void recovered_8240ebe4(void);
void recovered_8240ebec(void);
void recovered_8240ebf4(char *format,char *value);
void recovered_8240ec58(void);
void recovered_8240ec7c(long param_1);
void recovered_8240eca8(void);
uchar recovered_8240eccc(long param_1,long param_2,ulonglong param_3,ulonglong param_4);
undefined8 recovered_8240ed44(void);
void recovered_8240ed48(void);
undefined8 recovered_8240ed4c(void);
undefined4 * recovered_8240ed54(long param_1,long param_2);
ulonglong recovered_8240ef90(ulonglong param_1,ulonglong param_2);
undefined8 recovered_8240efe0(long param_1,ulong param_2);
undefined4 * recovered_8240f068(long param_1,long param_2,int *param_3);
undefined8 recovered_8240f09c(int *param_1);
long recovered_8240f0e0(uchar *param_1,long param_2,long param_3,int *param_4);
uint recovered_8240f214(int *param_1);
long recovered_8240f2f8(long param_1,long param_2,long param_3,uint *param_4);
undefined8 recovered_8240f408(int *param_1,ulong param_2,int param_3);
undefined8 recovered_8240f49c(long param_1);
undefined8 recovered_8240f4c0(int *param_1);
undefined1 recovered_8240f534(long param_1);
undefined1 recovered_8240f540(long param_1);
void recovered_8240f54c(long param_1);
uint recovered_8240f560(uint param_1,long param_2);
undefined8 recovered_8240f584(long param_1);
ulonglong recovered_8240f5bc(ulonglong param_1);
undefined8 recovered_8240f600(long param_1,long param_2);
ulonglong recovered_8240f69c(ulonglong param_1,ulonglong param_2,ulonglong param_3);
undefined8 recovered_8240f6fc(long param_1,long *param_2,ulong *param_3);
bool recovered_8240f79c(long param_1,long param_2,long param_3);
undefined8 recovered_8240f7c8(void);
void recovered_8240f7cc(void);
undefined8 recovered_8240f7d0(void);
undefined8 recovered_8240f7d4(void);
undefined8 recovered_8240f7d8(void);
char * recovered_8240f7dc(long param_1,char param_2,long param_3);
int recovered_8240f800(char *left,char *right,ulong size);
char * recovered_8240f830(int param_1);
undefined8 recovered_8240f8d0(void);
undefined8 recovered_8240f8d4(void);
void recovered_8240f8d8(void);
uchar recovered_8240f8ec(int param_1);
__attribute__((naked,noreturn)) void recovered_8240f9b8(void *context);
__attribute__((naked,returns_twice)) int recovered_8240f9cc(void *context);
__attribute__((naked,noreturn)) void recovered_8240fa08(void *context,int status);
double recovered_8240fa4c(void);
undefined8 recovered_8240fa60(void);
void recovered_8240fa68(long param_1);
long recovered_8240fa78(long param_1);
void * recovered_8240fa98(ulong size);
void * recovered_8240fac8(ulong size);
ulong recovered_8240facc(void *data);
void recovered_8240fae4(void *data);
void recovered_8240fafc(long param_1);
void recovered_8240fb14(long param_1);
undefined8 recovered_8240fb2c(void);
uint recovered_8240fb34(uint *param_1);
void recovered_8240fb44(ulong *param_1);
void recovered_8240fb54(void);
undefined1 * recovered_8240fb58(ulong param_1);
void recovered_8240fba0(long param_1);
long recovered_8240fbb0(long param_1);
void recovered_8240fbb8(void);
void recovered_8240fc10(long param_1,undefined8 param_2,undefined8 param_3);
ulonglong recovered_8240fc30(undefined8 *param_1);
void recovered_8240fc94(void);
void recovered_8240fcc4(undefined8 *param_1);
void recovered_8240fcd8(undefined8 *param_1);
void recovered_8240fd04(void);
void recovered_8240fd10(void);
undefined8 recovered_8240fd1c(undefined8 *param_1);
undefined8 recovered_8240fd3c(undefined8 *param_1);
undefined8 recovered_8240fdd8(void);
undefined8 recovered_8240fde4(void);
void recovered_8240fdec(void);
long recovered_8240fdf8(long *param_1,undefined8 param_2,undefined8 *param_3);
bool recovered_8240fe38(undefined8 *param_1,undefined8 *param_2);
void recovered_8240fec4(void);
undefined8 recovered_8240fec8(void);
bool recovered_8240fed0(int param_1);
bool recovered_8240fee0(uint param_1);
bool recovered_8240ff18(uint param_1);
bool recovered_8240ff34(ulong param_1);
bool recovered_8240ff4c(uint param_1);
bool recovered_8240ff64(ulong param_1);
bool recovered_8240ff7c(ulong param_1);
uint128 recovered_8240ff94(double param_1);
void recovered_82410054(float param_1);
uint128 recovered_8240ff94(double param_1);
uint128 recovered_82410074(long param_1,long param_2);
double recovered_82410084(double value);
long recovered_824100d0(byte *param_1,undefined8 *param_2,uint param_3);
long recovered_82410214(byte *param_1,undefined8 *param_2,uint param_3);
undefined8 recovered_82410218(long param_1,undefined8 *param_2,undefined2 *param_3);
ulong * recovered_824103f0(uint param_1,long *param_2);
ulong recovered_824104e4(undefined8 *param_1);
ulong recovered_8241051c(byte *param_1,long param_2);
ulong recovered_82410548(undefined8 *param_1);
uint recovered_824105c0(uchar *param_1,ulong param_2);
bool recovered_82410674(byte *param_1,ulong param_2);
uint recovered_824107dc(const void *data,uintptr_t size,void *image);
undefined8 * recovered_82412988(undefined8 *param_1,undefined8 *param_2);
uchar recovered_824129b4(uint *param_1,long *param_2,long *param_3,long *param_4);
undefined8 * recovered_82413488(undefined8 *param_1,undefined8 *param_2);
long recovered_824134d8(long param_1);
ulong recovered_82413518(long param_1,uint *param_2);
undefined4 recovered_82413644(long param_1,long param_2,ulong param_3,ulong param_4);
bool recovered_82413a58(uint *param_1,long param_2,long param_3);
ulong recovered_82413a90(uint *param_1,uchar *param_2,uchar *param_3,ulong param_4);
undefined4 recovered_82413b48(long param_1,long param_2,ulong param_3,ulong param_4);
uchar recovered_82413b4c(long param_1,long param_2,ulong param_3,uint param_4);
uint recovered_82413dac(long param_1,long param_2,uint param_3,uint param_4);
uint recovered_82413f3c(long param_1,uchar *param_2,uint param_3,uint param_4);
void recovered_824142d4(long *param_1,ulong param_2,undefined1 *param_3);
uint recovered_824142dc(uint param_1,uint param_2);
void recovered_82414350(long *param_1,ulong param_2,undefined1 *param_3);
void recovered_824143d4(long *param_1,ulong param_2);
void recovered_8241443c(long *param_1,ulong param_2);
ulong recovered_824144b0(long param_1);
ulonglong * recovered_824144bc(ulonglong *self,ulong size);
undefined8 recovered_824144e8(byte *param_1,int param_2,uint param_3,byte *param_4);
ulonglong recovered_824145c0(ulonglong *param_1,uchar *param_2);
void recovered_8241473c(long param_1,ulong param_2,ulong *param_3,uint *param_4);
uchar recovered_8241476c(long param_1,ulong param_2,ulong *param_3,uint param_4,ulong *param_5);
void recovered_82414810(long param_1,long param_2);
bool recovered_8241489c(long param_1,ulong param_2,ulong param_3,uint *param_4);
uint recovered_824148d8(uint *param_1);
long recovered_824148e4(long *param_1,undefined8 *param_2);
void recovered_82414948(long *param_1,ulong param_2);
ulong recovered_824149bc(long param_1);
undefined8 * recovered_824149cc(undefined8 *param_1);
void recovered_824149f8(long *param_1,undefined1 *param_2,undefined1 *param_3);
long * recovered_82414a0c(long *param_1,ulong param_2);
void recovered_82414a38(long *param_1,ulong param_2);
long recovered_82414a9c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
uchar recovered_82414b94(long *param_1,long *param_2);
undefined8 recovered_8241535c(long *param_1,uint param_2,uint *param_3);
ulonglong recovered_824153d8(long *param_1,long param_2,long param_3,long *param_4);
long recovered_8241554c(long param_1);
uint recovered_8241556c(long param_1,ulong param_2);
long recovered_824155d0(long *param_1,undefined1 *param_2);
uint recovered_82415638(long *param_1,long param_2,uint *param_3);
long recovered_82415734(long *param_1,undefined1 *param_2);
undefined8 recovered_8241579c(long *param_1,uint *param_2,undefined8 param_3);
long * recovered_82415900(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_8241592c(long *param_1,ulong param_2,undefined4 *param_3);
void recovered_824159ac(long *param_1,ulong param_2);
void recovered_82415a10(long *param_1,ulong param_2);
ulong recovered_82415a84(long param_1);
undefined8 * recovered_82415a94(undefined8 *param_1,undefined8 *param_2);
void recovered_82415ad8(long *param_1,ulong param_2,undefined2 *param_3);
undefined8 * recovered_82415ae0(undefined8 *param_1,undefined8 *param_2);
void recovered_82415b30(long *param_1,ulong param_2,undefined2 *param_3);
void recovered_82415bb0(long *param_1,ulong param_2);
void recovered_82415c14(long *param_1,ulong param_2);
ulong recovered_82415c88(long param_1);
long recovered_82415c98(long *param_1,undefined4 *param_2);
long recovered_82415cfc(long *param_1,undefined4 *param_2);
long * recovered_82415d60(long *param_1,undefined4 *param_2,undefined4 *param_3);
long recovered_82415d98(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4);
undefined8 * recovered_82415ea0(undefined8 *param_1);
undefined8 * recovered_82415ecc(undefined8 *param_1);
uint recovered_82415ef0(uint param_1,uchar *param_2,long param_3);
void recovered_82415f80(long *param_1,undefined8 *param_2);
void recovered_82415fe0(long *param_1);
void recovered_82416034(long *param_1,ulong param_2);
int recovered_824160ac(long param_1);
ulong recovered_824160e0(long *param_1,long *param_2);
bool recovered_82416188(long param_1,long param_2,ulong param_3);
ulonglong recovered_824161e4(uint param_1,char *param_2,char *param_3,uchar *param_4,ulong param_5,
                            ulong param_6);
void recovered_824163b4(undefined8 *param_1);
void recovered_824163d8(long *vector,long position,const uint8_t *begin,size_t count);
void recovered_824163e0(long *param_1,uint param_2);
void recovered_82416418(long *param_1,long param_2,uint param_3);
long recovered_82416438(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long recovered_82416530(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4);
long * recovered_82416628(long *param_1,ulong param_2);
void recovered_82416654(long *param_1,ulong param_2);
void recovered_824166bc(long *param_1,ulong param_2);
ulong recovered_82416730(long param_1);
undefined8 * recovered_82416740(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 * recovered_82416778(undefined8 *param_1);
undefined8 * recovered_82416b9c(undefined4 param_1,long param_2,long param_3);
undefined8 * recovered_82416e04(undefined4 param_1,long param_2);
void recovered_82416ef4(float param_1,long *param_2);
uint128 recovered_82416f34(double param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6
                  );
void recovered_82417874(undefined8 *param_1);
void recovered_824178ac(long *param_1);
void recovered_8241790c(long *param_1,ulong param_2);
long recovered_82417994(long param_1);
long * recovered_824179b8(long *param_1);
void recovered_82417a08(long *param_1);
uint recovered_82417a5c(long *param_1,long param_2);
undefined8 * recovered_82417a6c(undefined8 *param_1);
undefined8 * recovered_82417a90(undefined8 *param_1);
undefined8 * recovered_82417ac0(undefined8 *param_1);
void recovered_82417b10(void);
ulong recovered_82417b24(long param_1,undefined8 *param_2);
int * recovered_82418298(int *param_1,double param_2,undefined1 *param_3,long param_4,
                        undefined4 param_5);
uint128 recovered_82418590(long param_1);
uint128 recovered_8241859c(long param_1);
uint128 recovered_824185a8(long param_1);
uint128 recovered_824185b0(long param_1);
undefined8 recovered_824185b8(void);
undefined8 * recovered_824185c0(undefined8 *param_1);
void recovered_824185ec(undefined8 *param_1);
undefined8 * recovered_8241860c(undefined8 *param_1);
void recovered_82418638(long param_1);
undefined8 * recovered_82418668(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_824186c4(long param_1,undefined4 param_2,undefined8 *param_3);
long * recovered_82418730(long *param_1,long *param_2);
void recovered_82418790(long *param_1,long param_2);
long recovered_824187bc(long *param_1,byte *param_2);
ulong recovered_82418824(long param_1,byte *param_2);
ulong recovered_8241883c(byte *param_1,long param_2);
void recovered_82418874(long *param_1,ulong param_2,undefined8 *param_3);
void recovered_8241887c(long *param_1,ulong param_2,undefined8 *param_3);
long recovered_82418900(long *param_1,undefined8 *param_2);
void recovered_82418968(long *param_1,ulong param_2);
void recovered_824189e8(undefined8 *param_1);
undefined8 * recovered_824189f8(undefined8 *param_1,undefined8 *param_2);
uchar recovered_82418a28(uchar *param_1,uchar *param_2,long param_3,uint param_4,double *param_5,
                        long *param_6,int param_7);
int * recovered_824192e4(int *param_1,undefined8 param_2,long *param_3);
long recovered_82419534(long *param_1,int *param_2);
long recovered_82419568(long *param_1,undefined4 *param_2);
long recovered_824195f0(long *param_1,int *param_2);
ulong recovered_8241965c(long param_1,byte *param_2);
void recovered_82419690(long param_1);
long recovered_824196c0(long *param_1,undefined4 *param_2,undefined2 *param_3);
void recovered_8241973c(long *param_1,long param_2);
void recovered_8241977c(long param_1,ulong param_2);
ulong recovered_824197e4(ulong param_1);
void recovered_82419800(long param_1);
void recovered_82419864(long *param_1,ulong param_2);
ulong recovered_824198d8(long param_1);
void recovered_824198e8(undefined8 *param_1,undefined8 *param_2);
void recovered_82419904(long *param_1,undefined8 *param_2);
pf_point recovered_8241995c(double *a,double *b);
uint recovered_82419978(long *param_1,double *param_2);
uint128 recovered_824199ec(double *param_1,double *param_2);
void recovered_82419a18(long *param_1,double *param_2);
void recovered_82419ab4(long *param_1);
undefined8 * recovered_82419b30(undefined8 *param_1);
long * recovered_82419b5c(long *param_1,ulong param_2);
double recovered_82419b88(long *param_1,ulong param_2);
void recovered_82419bec(long *param_1,ulong param_2);
ulong recovered_82419c60(long param_1);
void recovered_82419c70(long *param_1,ulong param_2);
long recovered_82419cdc(long *param_1,undefined1 *param_2);
void recovered_82419d40(long *param_1,ulong param_2);
ulong recovered_82419db4(long param_1);
long recovered_82419dc0(long *param_1,undefined1 *param_2);
long recovered_82419e24(long *param_1,long param_2,undefined1 *param_3);
void recovered_82419ecc(long param_1,double *param_2);
void recovered_82419f3c(long *param_1,undefined8 *param_2);
void recovered_82419fdc(long *builder,const pf_point *first,const pf_point *control,const pf_point *last,int depth);
undefined8 * recovered_8241a0f4(undefined8 *param_1);
void recovered_8241a13c(void);
bool recovered_8241a150(long param_1,long *param_2);
int * recovered_8241aa2c(int *param_1,undefined8 param_2,long param_3,uint param_4);
uint128 recovered_8241ae1c(long param_1);
uint128 recovered_8241ae24(long param_1);
uint128 recovered_8241ae2c(long param_1);
uint128 recovered_8241ae34(void);
undefined8 recovered_8241ae3c(void);
void recovered_8241ae44(undefined8 *param_1);
long * recovered_8241ae64(long *param_1);
void recovered_8241ae90(long *param_1);
void recovered_8241aee4(undefined8 *param_1);
undefined8 * recovered_8241af0c(undefined8 *param_1);
undefined8 * recovered_8241af10(undefined8 *param_1);
long * recovered_8241af38(long *param_1);
void recovered_8241af64(long *param_1);
long recovered_8241afb8(long param_1);
void recovered_8241aff4(long param_1);
ulong recovered_8241b024(long *param_1,long param_2,ulong param_3);
void recovered_8241b0b0(long *param_1,ulong param_2);
void recovered_8241b128(long *param_1,undefined1 param_2);
ulong recovered_8241b18c(long param_1);
void recovered_8241b1a8(long *param_1);
bool recovered_8241b1e0(long *param_1,ulong *param_2,undefined8 *param_3);
undefined8 recovered_8241b268(long *param_1,ulong *param_2,int *param_3);
void recovered_8241b334(long *param_1,ulong *param_2);
undefined8 * recovered_8241b37c(undefined8 *param_1,undefined8 *param_2);
long * recovered_8241b3c8(long *param_1,long param_2,ulong param_3);
double recovered_8241b3fc(long *param_1,long param_2,ulong param_3);
undefined8 recovered_8241b4e4(long *param_1,long param_2,long *param_3);
long recovered_8241b530(long *param_1,long param_2,long param_3);
double recovered_8241b59c(long *param_1,ulong param_2);
long * recovered_8241b648(long *param_1,undefined8 *param_2,uint param_3);
long recovered_8241b740(long *param_1,undefined8 *param_2);
void recovered_8241b7f8(long *param_1,ulong param_2);
void recovered_8241b88c(long param_1);
long recovered_8241b8a0(long *param_1,undefined8 *param_2);
void recovered_8241b8d8(long param_1);
long recovered_8241b908(long *param_1,undefined8 *param_2,undefined8 *param_3);
void recovered_8241b984(long *param_1,long param_2);
long recovered_8241b9c8(long *param_1,undefined8 *param_2);
ulong recovered_8241ba3c(long param_1,undefined8 *param_2);
ulong recovered_8241ba6c(undefined8 param_1,undefined8 *param_2);
bool recovered_8241ba84(undefined8 *param_1,undefined8 *param_2);
bool recovered_8241baac(char *param_1,long param_2,char *param_3,long param_4);
void recovered_8241bae4(long param_1,ulong param_2);
ulong recovered_8241bb4c(ulong param_1);
void recovered_8241bb68(long param_1);
double recovered_8241bbcc(long *param_1,ulong param_2);
void recovered_8241bc60(long param_1);
undefined8 * recovered_8241bc74(undefined8 *param_1,undefined8 *param_2);
void recovered_8241bca8(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_8241bcc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * recovered_8241bcf8(undefined8 *param_1,undefined8 *param_2);
undefined8 recovered_8241bd38(long *param_1,long *param_2,int param_3);
long recovered_8241c0b0(long param_1);
undefined8 * recovered_8241c0dc(undefined8 *param_1,long param_2);
long recovered_8241c120(long param_1);
undefined8 * recovered_8241c144(undefined8 *param_1);
void recovered_8241c170(long param_1);
void recovered_8241c194(long param_1);
void recovered_8241c1d4(long param_1);
long recovered_8241c220(long *param_1,undefined8 *param_2);
void recovered_8241c284(long *param_1,ulong param_2);
ulong recovered_8241c2f8(long param_1);
void recovered_8241c308(long *param_1);
ulong recovered_8241c354(double param_1,undefined8 *param_2);
int * recovered_8241c3a4(long *param_1,int *param_2);
ulong recovered_8241c414(long param_1,byte *param_2);
void recovered_8241c42c(long *param_1,long param_2);
double recovered_8241c458(long param_1,ulong param_2);
ulong recovered_8241c4f8(ulong param_1);
void recovered_8241c514(long *param_1,ulong param_2);
undefined8 * recovered_8241c5ac(undefined8 *param_1);
long * recovered_8241c5d8(long *param_1);
void recovered_8241c604(long *param_1);
void recovered_8241c658(long *param_1,ulong param_2);
void recovered_8241c6ec(long param_1);
void recovered_8241c700(undefined8 *param_1,undefined8 *param_2);
void recovered_8241c71c(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_8241ca10(long param_1,int param_2,uint *param_3);
void recovered_8241cc58(long param_1);
uint recovered_8241cc6c(long param_1,uchar *param_2,ulong param_3,ulong param_4,uint param_5,
                       undefined4 param_6);
undefined8 recovered_8241cdd0(long param_1,ulong param_2,ulong param_3,undefined4 *param_4);
void recovered_8241cf08(long param_1);
ulong recovered_8241cf1c(long param_1,uint param_2);
void recovered_8241cf44(void);
ulonglong recovered_8241cf64(uchar *param_1,uchar *param_2,ulonglong param_3,ulonglong param_4,
                            ulonglong param_5,uint param_6,uint *param_7);
void recovered_8241d050(void);
ulonglong recovered_8241d070(long param_1,uint param_2,uint param_3,ulong param_4,uint *param_5);
undefined8 recovered_8241d114(long param_1,ulong param_2,undefined8 *param_3,ushort *param_4);
undefined8 recovered_8241d514(ushort *param_1,long param_2,ulong param_3);
bool recovered_8241d568(int param_1,int param_2);
uint128 recovered_8241d59c(uint3 *param_1,int param_2,int param_3);
int recovered_8241d6bc(double param_1);
undefined8 * recovered_8241d718(undefined8 *param_1,undefined8 *param_2);
undefined8 * recovered_8241d750(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_8241d800(uint param_1,uint param_2,uchar param_3);
void recovered_8241d99c(void);
void recovered_8241dab0(void);
ulonglong recovered_8241dccc(uchar param_1);
void recovered_8241dcf0(uint param_1);
ulonglong recovered_8241dda8(char *param_1);
uint recovered_8241dde0(void);
uint recovered_8241de60(void);
ulong recovered_8241ded4(char *param_1);
ulong recovered_8241df28(void);
ulonglong recovered_8241df9c(void);
undefined8 recovered_8241dfd4(void);
uint recovered_8241dfec(void);
void recovered_8241e4bc(void);
ulonglong recovered_8241e4d4(long param_1,uint *param_2);
ulonglong recovered_8241e54c(long param_1,ulonglong *param_2,ulong *param_3);
long recovered_8241e5fc(char *path);
uchar recovered_8241e624(char *param_1,void *param_2,uint param_3);
int recovered_8241e678(long param_1);
ulonglong recovered_8241e6b8(long param_1,long param_2,long param_3);
int recovered_8241eaf4(undefined1 *param_1);
bool recovered_8241eb0c(char *param_1,uint param_2);
undefined8 recovered_8241eb80(void *param_1,uint param_2);
void recovered_8241ebfc(int *param_1);
ulong recovered_8241ec38(void *param_1,uint param_2);
undefined4 recovered_8241ecac(void);
uchar recovered_8241ecd4(char *param_1);
undefined8 recovered_8241ecf4(long param_1);
uchar recovered_8241f41c(char *param_1,void *param_2);
uint recovered_8241f484(long param_1,uchar *param_2,ulong param_3,ulong param_4,uint param_5,
                       undefined4 param_6);
uchar recovered_8241f4d0(char *param_1,uint param_2,void *param_3);
void * recovered_8241f53c(char *param_1,float param_2);
ulonglong recovered_8241f5a0(char *param_1);
ulong recovered_8241f60c(uchar *param_1,ulong param_2,char *param_3,int param_4);
ulonglong recovered_8241f65c(uchar *param_1,long param_2,char *param_3,int param_4,int param_5);
void * thunk_FUN_8241f984(uint param_1);
void * FUN_8241f984(uint param_1);
void recovered_8241fa70(void *param_1);
void * recovered_8241fad0(void *param_1,uint param_2);
__attribute__((naked)) void recovered_8241fba4(void);
void recovered_8241fc04(ulong param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                       uint param_5);
void recovered_8241fd00(long param_1,ulong param_2);
__attribute__((naked,noreturn)) void recovered_824202f0(void);
__attribute__((naked,aligned(2048))) void recovered_82420800(void);
uchar recovered_82421004(char *param_1,char *param_2,uint param_3,uint *param_4);
long recovered_82421274(long param_1,uchar *param_2);
uchar recovered_82421414(char *param_1,char *param_2,ulonglong *param_3);
char * recovered_824214e4(char *path);
bool recovered_82421510(char *param_1,long param_2,char *param_3);
undefined8 recovered_824215a4(char *param_1,ulong *param_2,char *param_3);
int recovered_82421640(void);
uint recovered_82421658(void *devices,uint capacity,uint *count);
uchar recovered_824217c8(void);
void recovered_82421a4c(char *param_1,long param_2,char *param_3);
char * recovered_82421b24(int param_1);
uint recovered_82421b4c(int device);
ulong recovered_82421b68(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                        ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8);
uint recovered_82421c18(int device,char *path,void *blob);
ulong recovered_82421d8c(int param_1,int *param_2);
ulong recovered_82421db0(byte *param_1);
ulonglong recovered_82421e9c(ulong param_1);
uint recovered_82422490(char *param_1,uchar *param_2,uchar *param_3);
ulong recovered_824225bc(int param_1,int param_2);
uint recovered_824225d0(int device,char *path,char *buffer,uint capacity,uint *count);
uint recovered_82422678(int device,char *path,void *bytes,uint count);
uint recovered_82422718(int device,char *path);
uint recovered_8242274c(int device,char *old_path,char *new_path);
ulonglong recovered_82422784(long param_1,long param_2);
uint recovered_82422b44(int device,char *path);
uchar recovered_82422ba4(char *param_1);
uint recovered_82422d88(int device,char *path,void *image);
ulong recovered_82422dc4(int param_1,long param_2,uchar *param_3,ulong param_4,ulong param_5,
                        undefined8 param_6,undefined8 param_7);
void * recovered_82422e20(int device,char *path,float pixels);
uint recovered_82422e7c(int device,char *path,uint flags);
uint recovered_82422ec0(char *param_1,uint param_2);
undefined8 recovered_824230a0(undefined8 *param_1);
byte recovered_82423230(void);
int recovered_82423268(void);
undefined8
recovered_8242327c(int param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8);
void recovered_824234a4(char *format,...);
int recovered_824234e0(void);
undefined4
recovered_824236ac(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6);
undefined4 recovered_82423814(void);
undefined8 recovered_82423880(int param_1);
undefined8 recovered_824238d8(undefined8 *param_1);
char * recovered_82423b28(int param_1);
int recovered_82423b6c(char *param_1);
bool recovered_82423bcc(int param_1,char *param_2);
ulong recovered_82423c24(int param_1,undefined1 *param_2,ulong param_3);
undefined8 recovered_82423c74(undefined1 *param_1,long param_2);
ulonglong recovered_82423d2c(int param_1,uchar *param_2,uint param_3,char *param_4,uint param_5);
ulong recovered_82423d9c(undefined1 *param_1,uint param_2);
bool recovered_82423e54(byte *param_1,char *param_2,ulong param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8);
void recovered_82423f1c(char *param_1,uint param_2,char *param_3);
bool recovered_82423f78(undefined8 *param_1,undefined1 *param_2,ulong param_3);
undefined4
recovered_8242404c(uint *param_1,byte *param_2,char *param_3,char *param_4,ulong param_5,
                  undefined8 param_6,ulonglong param_7,ulonglong param_8);
void recovered_82424658(char *out,uint capacity,char *format,...);
ulong recovered_8242469c(byte *param_1,char *param_2,ulong param_3);
void recovered_82425870(char *param_1);
byte * recovered_824258c8(byte *param_1);
char * recovered_82425908(char *param_1,char *param_2,char *param_3);
ulong recovered_82425b14(char *param_1,char *param_2);
char * recovered_82425c6c(char *param_1);
undefined8 recovered_82425ca8(undefined8 param_1,char *param_2,uint param_3);
int recovered_824266b4(undefined8 param_1,char *param_2,undefined8 param_3);
undefined8 recovered_8242695c(undefined8 param_1,char *param_2,undefined8 param_3);
int recovered_82426acc(undefined8 param_1,char *param_2,undefined8 param_3);
ulong recovered_82426c50(ulong param_1,char *param_2,undefined8 param_3);
undefined8 recovered_824275b8(undefined8 param_1,char *param_2,uint param_3);
int recovered_82427d6c(void);
undefined4 recovered_82427e2c(undefined8 param_1,char *param_2,undefined8 param_3);
undefined4 recovered_8242823c(undefined8 param_1,char *param_2,uint param_3);
undefined8 recovered_82428648(undefined8 param_1,char *param_2,undefined8 param_3);
undefined8 recovered_8242885c(undefined8 param_1,char *param_2,undefined8 param_3);
undefined4 recovered_82428afc(undefined8 param_1,char *param_2,uint param_3);
ulong recovered_82428ec8(undefined8 param_1,char *param_2,ulong param_3);
undefined8 recovered_82429040(undefined8 param_1,char *param_2,undefined8 param_3);
undefined8 recovered_824292a8(undefined8 param_1,char *param_2,uint param_3);
bool recovered_82429818(char *param_1);
uchar recovered_824298d4(char *param_1,char *param_2);
uchar recovered_824298f8(char *param_1);
uint recovered_8242992c(void *param_1,void *param_2,uint param_3);
uint recovered_824299d4(long param_1,long param_2,ulonglong param_3,long param_4,uchar param_5,
                       long param_6,ulonglong param_7);
uint recovered_82429b64(void *param_1,void *param_2,uint param_3,uint param_4);
uint recovered_82429bdc(uint param_1,uint param_2);
void recovered_82429cac(void);
void recovered_82429cc8(byte param_1,undefined8 param_2,ulong *param_3);
uint recovered_82429d58(ulong param_1,undefined8 param_2,ulong *param_3);
void recovered_82429dc0(undefined8 param_1,undefined8 param_2,ulong *param_3);
ulong recovered_82429dc8(ulong param_1,undefined8 param_2,ulong *param_3);
uint recovered_8242a1dc(void);
void recovered_8242a204(void);
uint recovered_8242a260(void *hardware);
uint recovered_8242a3a0(char *param_1);
bool recovered_8242a750(uint *param_1);
void recovered_8242a8d0(void);
ulong recovered_8242a9b0(void);
long recovered_8242aa0c(void);
undefined8 recovered_8242aa44(long param_1,uint param_2,undefined4 *param_3);
uint recovered_8242ab2c(void);
bool recovered_8242b6d4(undefined4 *param_1);
void recovered_8242b704(undefined4 *param_1,ulong param_2);
undefined8 recovered_8242b750(ulong param_1,long param_2);
void recovered_8242b780(undefined8 param_1,uint param_2);
undefined8 recovered_8242b7ec(undefined8 *param_1,uint param_2,uint *param_3);
undefined8 recovered_8242bd2c(int param_1);
undefined8 recovered_8242be08(uint *param_1);
long recovered_8242befc(void);
long recovered_8242c090(void);
undefined8 recovered_8242c180(int param_1,uint *param_2);
uint * recovered_8242c344(int param_1);
undefined8 recovered_8242c3a0(undefined4 *param_1);
undefined8 recovered_8242c46c(long param_1,undefined8 param_2,uint *param_3);
undefined8 recovered_8242c520(long param_1,ulong param_2);
undefined8 recovered_8242c5c0(undefined4 *param_1);
undefined8 recovered_8242c64c(long param_1,ulong param_2);
uint recovered_8242c6fc(char *param_1,uint param_2,uint param_3);
uint recovered_8242c7f8(void);
void recovered_8242c864(void *window,char *title);
uchar recovered_8242c8ac(uint param_1,char *param_2,void *param_3,uint param_4,uint param_5,
                        uint param_6,uint param_7);
char * recovered_8242ca00(int param_1);
uchar recovered_8242ca44(uint param_1);
void recovered_8242ca6c(long param_1);
uchar recovered_8242ca9c(void *param_1,uint param_2,uint *param_3);
void recovered_8242cb14(long param_1,ulonglong *param_2);
uchar recovered_8242cc00(uint param_1,int param_2,int param_3,uint param_4,uint param_5);
undefined8 recovered_8242cc54(int param_1,uint param_2,uint param_3);
undefined8 recovered_8242cc90(int param_1,int param_2,undefined4 param_3);
undefined8 recovered_8242cccc(int param_1,int param_2,int param_3);
uchar recovered_8242cd0c(uint param_1,void *param_2);
uchar recovered_8242cd48(uint param_1,char *param_2,void *param_3,uint param_4,uint param_5,
                        uint param_6,uint param_7,ulonglong *param_8);
uint recovered_8242cde4(uint window,char *first,char *second,char *third);
uint recovered_8242ce78(uint window,uint group,uint item);
undefined8 recovered_8242cecc(int param_1,int param_2,int param_3,uint param_4,uint param_5);
undefined8 recovered_8242cfa4(int param_1,undefined8 *param_2);
undefined8
recovered_8242cff0(long param_1,ulong param_2,uint param_3,uint param_4,undefined4 *param_5);
uint recovered_8242d2d8(uint param_1,int param_2);
undefined8 recovered_8242d324(void);
ulong recovered_8242d468(char *param_1);
uint recovered_8242d510(void);
ulonglong recovered_8242d680(void);
ulonglong recovered_8242f6e0(ulonglong param_1,ulong param_2,uint param_3,uint param_4);
undefined8 recovered_8242fd84(byte *param_1,long param_2,char *param_3,uint param_4);
undefined8 recovered_82430088(byte *param_1,undefined1 *param_2);
undefined8 recovered_82430144(char *param_1);
undefined8 recovered_824303a4(byte *param_1,uint *param_2);
undefined8 recovered_8243045c(byte *param_1,uint *param_2,char *param_3);
ulonglong recovered_82430898(uint param_1,uint param_2,uchar param_3);
void recovered_824308c4(uint param_1,uint param_2,uchar param_3);
ulonglong recovered_82430920(void);
uchar recovered_82430af8(void);
void recovered_82430b84(int param_1,int param_2);
int recovered_82430c2c(uint param_1,uint param_2);
void recovered_82430cf4(void);
double recovered_82430d20(uint param_1,uint param_2,uint param_3);
uchar recovered_82430e68(void *param_1);
undefined8 recovered_82430ef8(ulong param_1,ulong param_2,uint param_3,uint param_4);
void recovered_82430f84(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4);
uchar recovered_82430ff8(void *param_1);
uint recovered_824310f0(uint *param_1);
ulonglong recovered_824311cc(void);
ulong recovered_82431230(void);
undefined8 recovered_824313f4(void);
ulonglong recovered_82431418(char *param_1,long param_2);
void recovered_8243165c(undefined8 *param_1);
ulong recovered_8243166c(undefined8 *param_1);
uint recovered_82431774(char *param_1,char *param_2,uint param_3);
void recovered_82431aa4(void);
void recovered_8243301c(void);
void recovered_82433070(uint param_1);
byte recovered_82433220(void);
ulonglong recovered_82433344(void);
bool recovered_82433404(void);
void recovered_824334a8(void);
void recovered_824334c4(uchar *param_1);
uchar recovered_82433534(void);
void recovered_824335ac(void);
bool recovered_824336e8(long param_1,byte *param_2);
ulonglong recovered_82433744(long param_1);
ulong recovered_824337cc(char *param_1,char *param_2,ulong param_3);
ulong recovered_82433820(undefined1 *param_1);
ulonglong recovered_824338c0(long param_1,uchar *param_2);
undefined8 recovered_82433d98(long param_1);
uchar recovered_82433fe4(char *text);
uint recovered_82434138(char *text);
void recovered_82434df4(char *text);
ulong recovered_824357b4(void);
void recovered_824357e4(long param_1);
void recovered_82435838(uint param_1,uint param_2,uint param_3,uint param_4);
uint recovered_824358a0(void);
uint recovered_824358bc(void);
long recovered_824358d8(uint param_1);
void recovered_82435910(uint *param_1,uchar param_2,uchar param_3,uchar param_4);
void recovered_8243594c(int param_1,int param_2,uchar *param_3,ulonglong param_4,uint param_5,
                       uint param_6);
void recovered_824359ac(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
                       uchar param_6,uchar param_7,uchar param_8);
ulonglong recovered_82435a60(ulonglong param_1);
uchar recovered_82436014(ulonglong param_1,ulonglong param_2);
void recovered_824360dc(uint *param_1);
void recovered_82436100(uint param_1,uint param_2,long param_3,ulong param_4);
ulong recovered_8243615c(ulong param_1);
void recovered_824362f4(uint *param_1,long param_2,uint param_3);
ulonglong recovered_8243634c(int param_1,int param_2,long param_3,long param_4,ulonglong param_5,
                            uint param_6,uint param_7);
undefined8 recovered_824364f4(uint param_1,long *param_2);
uint recovered_82436570(long *param_1,uint param_2,uint param_3);
uint recovered_824365c4(void);
void recovered_824365e4(ulong *param_1,ulong param_2);
uint recovered_824365fc(uint param_1,uint param_2,uint param_3);
void recovered_824366d8(undefined1 *param_1,uint param_2,ulong param_3);
void recovered_824366fc(uint param_1,uint param_2,uint *param_3,uint *param_4);
uint recovered_82436740(int param_1,int param_2,uint param_3);
uint recovered_824368f8(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                       uint param_7,uint param_8,uint param_9);
uint recovered_82436964(int param_1,uint param_2);
int recovered_82436994(uint param_1,uint param_2);
uchar recovered_824369cc(ulonglong param_1,ulonglong param_2);
ulonglong recovered_82436ab8(void);
void recovered_82436b68(long *param_1);
bool recovered_82436ba8(void);
void recovered_82436bcc(undefined1 *param_1,undefined1 *param_2,ulong param_3);
char * recovered_82436be0(void);
ulong recovered_82436c1c(ulong param_1);
uint recovered_82437008(ulong param_1,long param_2);
ulong recovered_824370b4(ulong param_1,ulong param_2,char *param_3);
void recovered_82437130(long *param_1,undefined1 *param_2,undefined1 param_3);
void recovered_82437178(long *param_1,long param_2,ulong param_3,uchar param_4);
void recovered_824371e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
int recovered_824372bc(long param_1);
bool recovered_824372fc(void);
uchar recovered_82437460(ulong param_1);
ulong recovered_82437540(ulong param_1);
ulong recovered_824375cc(long param_1);
int recovered_824375f4(void);
undefined1 recovered_82437660(void);
undefined1 recovered_82437738(uint param_1,uint *param_2);
bool recovered_82437834(uint param_1,long param_2,ulong param_3,uint param_4);
void recovered_8243798c(uint param_1);
undefined1 recovered_82437a14(long param_1);
undefined1 recovered_82438174(void);
bool recovered_82438388(void);
ulonglong recovered_8243843c(ulonglong param_1,ulong param_2,long param_3,long param_4);
void recovered_824385fc(void);
char * recovered_8243862c(uint param_1);
char * recovered_82438678(uint param_1);
undefined8 recovered_824386c4(char *param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_82438724(char *param_1,ulong param_2,void *param_3,ulong param_4);
void recovered_824387f8(uint param_1,uint param_2,long param_3,int param_4);
void recovered_824388d0(void *param_1,long param_2,long param_3,ulong param_4,uint param_5);
void recovered_82438c50(void *param_1,void *param_2);
void recovered_82438d68(undefined8 *param_1,undefined8 param_2);
void recovered_82438d70(long param_1,void *param_2,void *param_3);
void recovered_82438f00(long param_1,long param_2,int param_3);
uint recovered_82438f30(uint param_1,uint param_2);
undefined8 recovered_82438f68(long *param_1,ulong param_2);
undefined4 recovered_82439048(long *param_1,long param_2,uint param_3,ulong param_4);
uint recovered_8243910c(byte *param_1);
uint recovered_82439140(long param_1,int param_2,uint param_3);
void recovered_824391b4(uint param_1,uint param_2);
void recovered_8243925c(long param_1,int param_2,uint param_3,uint param_4);
void recovered_824392f0(uint param_1);
ulonglong recovered_824393dc(ulonglong param_1,ulong param_2,long param_3,ulong param_4);
bool recovered_824395ac(int param_1,uint param_2);
undefined8 recovered_824395f0(byte *param_1,ulong param_2,void *param_3,ulong param_4);
undefined8 recovered_82439648(char *param_1,ulong param_2,void *param_3,ulong param_4);
uint64_t recovered_82439730(void **,uint64_t *);
bool recovered_82439974(int *param_1,ulong param_2);
int recovered_82439cbc(int *param_1,ulong param_2,long param_3);
uint recovered_82439d38(uint param_1);
undefined8 recovered_82439dc0(undefined8 *param_1,ulong *param_2,ulong param_3);
uint64_t recovered_82439e68(void **,uint64_t *,uint64_t *,uint32_t,const char *,const char *,uint64_t,uint32_t,uint32_t,uint32_t *);
uint recovered_8243a008(long param_1,long param_2);
void recovered_8243a0dc(uchar *param_1,long param_2,long param_3);
bool recovered_8243a16c(uint param_1);
ulong recovered_8243a1c8(long param_1);
bool recovered_8243a1f0(byte *param_1,byte *param_2);
void recovered_8243a244(long param_1,long param_2);
ulonglong recovered_8243a284(long param_1,ulong param_2,long *param_3,long param_4,long param_5,
                            int param_6,uchar param_7,uint param_8,uint param_9);
bool recovered_8243a4d4(uint *param_1,uint param_2,uint param_3);
bool recovered_8243a6e8(ulong param_1,long param_2,uint param_3,uint param_4);
undefined8 recovered_8243a7fc(ulong param_1,ulong param_2);
ulonglong recovered_8243a964(void);
void recovered_8243aa6c(uint param_1);
void recovered_8243aae4(uint param_1,int param_2);
undefined8 recovered_8243ab78(void);
void recovered_8243accc(long param_1,long param_2);
uchar recovered_8243ad38(long param_1,long param_2);
ulonglong recovered_8243ad8c(long param_1,ulonglong param_2,long param_3,uint param_4,int param_5,
                            int param_6,uint param_7,ulonglong param_8,long *param_9,ulong *param_10
                            );
undefined8 recovered_8243af50(char *param_1,long param_2);
ulong recovered_8243b054(int param_1);
void recovered_8243b078(void);
void recovered_8243b084(long *param_1);
int recovered_8243b170(void);
ulong recovered_8243b1e8(ulong param_1);
ulong recovered_8243b258(long param_1,undefined8 param_2,long param_3,int *param_4,
                        undefined8 param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8);
bool recovered_8243b6f4(int param_1);
void recovered_8243b738(long param_1,ulong param_2);
undefined4 recovered_8243b774(uchar *param_1,uchar *param_2,long param_3);
ulonglong recovered_8243b820(long param_1,uchar *param_2,long param_3);
ulong recovered_8243bbe8(long param_1,long *param_2,long *param_3,undefined1 *param_4,long param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8);
bool recovered_8243bbf8(uint *param_1,ulong param_2);
ulong recovered_8243bc60(uint *param_1,ulong param_2,byte *param_3,undefined8 param_4,byte *param_5,
                        long param_6);
ulong recovered_8243c0e0(ulong param_1,char *param_2);
bool recovered_8243c13c(char *param_1);
undefined8 recovered_8243c158(long param_1,char *param_2);
uint128 recovered_8243c240(long param_1,ulonglong param_2,long param_3,char *param_4,ulonglong param_5,
                  undefined8 param_6,ulonglong param_7,ulonglong param_8);
ulong recovered_8243c448(long param_1,long *param_2,long *param_3,ulonglong param_4,uchar *param_5,
                        long param_6,ulonglong param_7,ulonglong param_8);
undefined4 * recovered_8243c5ec(void);
ulong recovered_8243c674(long param_1);
uchar recovered_8243c690(long param_1,int param_2,ulonglong param_3,ulonglong param_4,
                        ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8);
void recovered_8243cd08(void);
ulonglong recovered_8243cd58(long param_1,ulonglong param_2);
undefined8
recovered_8243cd94(long param_1,uint param_2,uint *param_3,int *param_4,uint *param_5,uint *param_6,
                  uint *param_7,int *param_8,undefined4 *param_9);
ulonglong recovered_8243cefc(long param_1,long param_2,uint param_3,int param_4,int param_5,
                            uint param_6,uint param_7,uint param_8,long param_9,long *param_10,
                            long *param_11);
uint128 recovered_8243d0a4(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                  long param_7,ulong param_8,char *param_9,uint param_10);
ulonglong recovered_8243d398(long param_1,long param_2,int param_3,uint param_4,uint param_5,
                            uint param_6);
ulonglong recovered_8243d4a0(long *param_1,int param_2,char *param_3,uint param_4,ulonglong param_5,
                            ulonglong param_6,ulonglong param_7,ulonglong param_8);
undefined8 recovered_8243d704(long *param_1,int param_2,long param_3);
ulonglong recovered_8243d830(long *param_1,long param_2,long *param_3,ulong *param_4);
undefined8 recovered_8243d988(long *param_1,int param_2);
uchar recovered_8243d9bc(long param_1,short *param_2,long param_3,ulong param_4,int param_5);
ulonglong recovered_8243db04(long param_1,ulonglong param_2,long param_3,ulong param_4,ulong param_5
                            );
ulonglong recovered_8243db9c(long param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
                            uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,
                            uint *param_11);
ulonglong recovered_8243dd08(long param_1,uint param_2,long param_3,uint param_4,int param_5,
                            int param_6,uint param_7,long param_8,ulong param_9,char *param_10);
ulonglong recovered_8243df38(char *param_1,ulong param_2,ulong param_3,undefined8 *param_4,
                            ulong *param_5);
undefined8
recovered_8243e358(long param_1,ulong param_2,ulong param_3,undefined8 *param_4,ulong *param_5);
uint recovered_8243e3e4(uint *param_1);
ulong recovered_8243e3e8(ulong *param_1);
ulonglong recovered_8243e3f4(char *param_1);
uint recovered_8243e4b0(long param_1);
ulonglong recovered_8243e500(ulong param_1);
ulong recovered_8243e598(uint *param_1,ulong param_2,ulonglong param_3,ulonglong param_4,
                        int *param_5,ulonglong *param_6,long param_7);
ulong recovered_8243e714(char *process,ulong restore_foreground,ulong image_bytes);
void recovered_8243e72c(ulong param_1);
void recovered_8243e780(ulong param_1);
ulonglong recovered_8243e7b4(uchar *UNRECOVERED_JUMPTABLE);
ulonglong recovered_8243e988(uint *param_1,ulong param_2,uint param_3,long *param_4,ulong *param_5,
                            long param_6,ulong param_7);
ulong recovered_8243ee94(uint *param_1,ulong param_2,long *param_3,ulong *param_4,long param_5);
ulonglong recovered_8243eed0(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,
                            int param_6,ulonglong param_7,long *param_8,ulong *param_9,long param_10
                            );
ulonglong recovered_8243f170(uint *param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,
                            ulonglong param_6,long *param_7,ulong *param_8,long param_9);
ulonglong recovered_8243f1a8(uint *param_1,ulong param_2,uint param_3,uint param_4,uint *param_5,
                            int *param_6,long param_7);
ulonglong recovered_8243fa1c(long param_1,uint *param_2,uint *param_3,ulong *param_4,long param_5);
ulong recovered_8243faf0(uint *param_1,int param_2);
ulong recovered_8243fb00(undefined8 *param_1,int param_2);
undefined8 recovered_8243fb10(long param_1,uint param_2,undefined8 param_3,long param_4);
bool recovered_8243fb7c(int *param_1);
ulong recovered_8243fbe4(long param_1);
void recovered_8243fc0c(long param_1);
bool recovered_8243fc50(byte *param_1,byte *param_2);
undefined1 recovered_8243fcec(ulong param_1);
void recovered_8243fd54(char *param_1,undefined4 param_2);
undefined1 recovered_8243fdc8(ulong param_1);
undefined1 recovered_8243fdfc(ulong param_1,long param_2,long param_3);
uint recovered_8243fe5c(ulong param_1,int param_2);
void recovered_8243fe94(long param_1);
ulonglong recovered_8243febc(long param_1,int param_2,uint param_3,long param_4);
uchar recovered_82440064(long param_1,ulonglong param_2,ulonglong param_3,long param_4);
undefined1 recovered_824400f0(long param_1,long param_2);
ulonglong recovered_82440438(long param_1,uint param_2,uint param_3,int *param_4);
void recovered_824404d0(ulong param_1,long param_2);
uchar recovered_82440544(char *param_1);
ulonglong recovered_824405a8(char *param_1,ulonglong param_2,ulonglong param_3,long param_4);
char * recovered_824409ec(char *param_1);
long recovered_82440a28(long param_1);
uchar recovered_82440ab4(long param_1,long param_2);
void recovered_82440b0c(void);
void recovered_82440bf4(ulong *param_1,long param_2,int param_3,ulong param_4);
uchar recovered_82440c98(long param_1,uint param_2,uint param_3,int param_4,long param_5);
bool recovered_82441078(long param_1,uint param_2,uint param_3);
undefined8 recovered_824410a0(long param_1,ulong param_2,ulong *param_3,ulong *param_4);
undefined8 recovered_82441108(long param_1,ulong param_2,int param_3,long param_4);
void recovered_824411b0(ulong *param_1,ulong param_2,int param_3);
void recovered_824411bc(undefined1 *param_1,uint param_2,int param_3);
void recovered_824411f0(ulong *param_1,ulong param_2);
ulonglong recovered_824411fc(long param_1,uint param_2,long param_3,int param_4,uint *param_5,
                            long param_6);
ulonglong recovered_82441350(long param_1,int param_2,int param_3,uint param_4,long param_5,
                            long param_6);
void recovered_824413e4(void);
uint recovered_82441418(long param_1,long param_2,undefined4 *param_3);
ulonglong recovered_82441580(char *param_1);
char recovered_82441624(ulong param_1);
void recovered_8244169c(ulong param_1,long param_2,long param_3);
void recovered_824416e8(void);
int recovered_82441730(void);
undefined8 recovered_8244176c(int param_1);
void recovered_82441a74(char *param_1,uint param_2,char *param_3);
undefined8 recovered_82441ae0(long param_1,char *param_2,ulong param_3);
ulong recovered_82441cc0(long param_1);
ulong recovered_82441d10(long param_1,char *param_2,undefined8 *param_3);
ulong recovered_82441dc4(void);
char * recovered_82441f48(char *param_1,char *param_2);
byte recovered_82441fac(int param_1);
void recovered_824420b4(undefined8 param_1);
ulong recovered_824422d8(undefined8 param_1);
ulong recovered_82442330(undefined8 param_1,uint param_2);
uint recovered_82442394(int param_1,char *param_2);
undefined8 recovered_824423e4(long param_1,uint param_2,uint *param_3,undefined1 *param_4);
bool recovered_82442468(char *param_1,char *param_2);
void recovered_82442498(char *param_1,ulong param_2,char *param_3);
void recovered_824424f8(ulong param_1);
bool recovered_8244254c(char *param_1,undefined8 param_2);
int recovered_82442600(void);
int recovered_82442620(long param_1,char *param_2,char *param_3);
bool recovered_8244274c(undefined1 *param_1,long param_2);
void recovered_824427c0(char *param_1,ulong param_2,byte *param_3,char *param_4);
undefined8 recovered_82442850(long param_1,void *param_2,char *param_3,undefined8 param_4);
void recovered_82442980(long param_1,uint param_2);
bool recovered_824429c0(uint *param_1,uint param_2,long param_3);
char * recovered_82442a20(int param_1,char param_2);
ulong recovered_82442ba0(long param_1,undefined8 param_2,uint param_3,uint *param_4);
undefined8 recovered_82442cc4(uint *param_1,uint param_2,uint *param_3);
ulong recovered_82442d7c(long param_1,undefined8 param_2);
uint recovered_82442da8(uint *param_1);
undefined8 recovered_82442dac(undefined4 *param_1,char *param_2);
undefined8
recovered_82442e5c(char *param_1,char *param_2,int param_3,void *param_4,char *param_5,
                  undefined1 *param_6);
char * recovered_824454c8(int param_1);
int recovered_82445574(long param_1);
ulong recovered_82445740(uint *param_1,int param_2);
uint recovered_82445784(uint *param_1,int param_2);
bool recovered_82445794(long param_1,uint param_2,int param_3,undefined8 param_4,long param_5,
                       uint param_6,uint param_7,uint param_8,undefined4 *param_9);
void recovered_82445948(long param_1,ulong param_2,char *param_3,char *param_4,ulong param_5);
bool recovered_82445a58(long param_1,ulong param_2,char *param_3);
char * recovered_82445aec(char *param_1,char *param_2);
undefined8 recovered_82445bb4(long *param_1,long param_2,long param_3,uint param_4,uint *param_5);
undefined8 recovered_82445d4c(long param_1,long param_2,long *param_3);
void recovered_82446434(long param_1,char *param_2,long param_3);
bool recovered_8244656c(long param_1,char *param_2,undefined8 *param_3,long *param_4);
void recovered_8244663c(char *param_1);
undefined8 recovered_82446678(long param_1);
uint recovered_82405b90(ulong param_1);
void recovered_8244671c(void);
undefined8 recovered_82446764(void);
ulong recovered_824467b4(undefined8 param_1,char *param_2);
undefined8 recovered_824467f0(void);
ulong * recovered_824467f4(ulong param_1,undefined8 param_2,uint param_3);
void recovered_82446874(long param_1);
ulong * recovered_824468cc(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4);
ulong * recovered_8244698c(ulong param_1,ulong param_2,undefined8 param_3,uint param_4);
void recovered_824469ac(char *param_1,void *param_2);
int recovered_824469f8(byte *param_1,ulong param_2,byte *param_3,double *param_4);
ulong recovered_82446a18(undefined8 param_1,char *param_2);
ulong recovered_82446a54(undefined8 param_1,char *param_2);
void recovered_82446a90(undefined1 *param_1,long param_2);
undefined * recovered_82446ae0(long param_1);
ulong recovered_82446bac(void *param_1,char *param_2,ulong param_3);
ulong recovered_82446c14(char *param_1,char *param_2,long param_3);
int recovered_82446c90(byte *param_1,byte *param_2);
int recovered_82446d00(byte *param_1,byte *param_2,long param_3);
uint recovered_82446d74(uint param_1,uint param_2);
undefined4 recovered_82446d7c(undefined8 param_1,undefined8 param_2);
int recovered_82446da0(uint param_1,uint param_2);
int recovered_82446dd8(int param_1,int param_2);
uint recovered_824040ac(void);
undefined8 recovered_82446e1c(undefined8 param_1,int param_2,undefined4 *param_3);
void recovered_82446e80(undefined1 *param_1,uint param_2,int param_3);
char * recovered_82446ec4(int param_1,uint param_2);
char * recovered_8244714c(uint param_1);
void recovered_82447170(undefined1 *param_1,ulong param_2,int param_3);
ulong recovered_824471f4(char *param_1);
ulonglong recovered_824472d8(ulonglong text,uint *out);
bool recovered_82447404(uint param_1);
bool recovered_82447430(long param_1,char *param_2,undefined8 param_3);
void recovered_82447970(void);
long recovered_82447acc(long param_1);
bool recovered_82447b28(long param_1,char *param_2,undefined8 param_3);
bool recovered_8244810c(void);
ulong recovered_82448120(uint *param_1);
ulong recovered_824481dc(void);
ulonglong recovered_8244820c(int param_1,uint *param_2);
undefined8 recovered_824482b4(int param_1,uint param_2,long param_3,uint param_4);
ulong recovered_82448324(ulonglong *param_1);
ulonglong recovered_82448380(ulonglong *param_1);
bool recovered_824483c4(undefined4 *param_1);
bool recovered_824485dc(uint param_1,uint param_2,undefined8 *param_3);
bool recovered_82448668(uint param_1,uint param_2,undefined8 *param_3);
void recovered_824486f4(char *param_1,undefined8 param_2);
uchar recovered_82448778(void);
uint * recovered_8244878c(int param_1);
undefined8 recovered_824487dc(long param_1,uint param_2,uint param_3,int *param_4,long *param_5);
undefined1 recovered_82448828(undefined8 param_1,undefined8 param_2,long param_3);
undefined1 recovered_824488dc(void);
bool recovered_824488f0(long param_1,ulong param_2,ulong param_3);
undefined8 recovered_8244891c(undefined1 *param_1);
ulong * recovered_82448944(int param_1);
ulong recovered_82448954(void *buffer);
ulonglong recovered_82448958(char *param_1,long param_2,long param_3);
ulonglong recovered_82448ab0(int param_1,uint param_2,long param_3,ulonglong param_4);
uchar recovered_82448b44(void);
uchar recovered_82448b58(void);
uchar recovered_82448b6c(void);
uchar recovered_82448b80(void);
uchar recovered_82448b94(void);
uchar recovered_82448ba8(void);
void recovered_82448bbc(void);
void recovered_82448bc0(void);
ulonglong recovered_82448bc4(long param_1,uint param_2);
undefined8 recovered_82448c78(void);
void recovered_82448c80(void);
ulonglong recovered_82448df0(ulong param_1,ulong param_2,ulong param_3);
uint recovered_82448efc(uint param_1);
undefined8 recovered_82448f18(uint *param_1,long param_2);
bool recovered_824490c4(long param_1);
ulonglong recovered_82449180(char *param_1,long param_2,long param_3);
char * recovered_8244925c(char *param_1,long param_2,long param_3);
ulong recovered_82449338(char *param_1);
int recovered_824493b0(byte *param_1);
bool recovered_82449548(byte *param_1,byte *param_2);
ulong recovered_824495a4(char *param_1);
void recovered_8244960c(uint param_1,uint param_2,uint param_3);
undefined8 recovered_824497c4(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4);
void recovered_8244982c(void);
bool recovered_82449850(char *param_1,uchar *param_2,uchar *param_3,char *param_4);
void recovered_82449960(long param_1,char *param_2,char *param_3,ulong param_4,int param_5,
                       uint param_6);
undefined8
recovered_82449a78(undefined8 *param_1,char *param_2,uint param_3,char *param_4,ulong param_5);
char * recovered_82449cec(long param_1,char *param_2);
void recovered_82449d48(char *param_1,ulong param_2,char *param_3);
long recovered_82449da4(long param_1,long param_2,char *param_3,ulong param_4,undefined1 *param_5,
                       undefined1 *param_6,undefined1 *param_7,undefined1 *param_8);
undefined8 recovered_82449f48(undefined8 *param_1,char *param_2,undefined1 *param_3);
ulong recovered_8244a34c(char *param_1);
undefined8
recovered_8244a398(long param_1,undefined1 *param_2,int param_3,char *param_4,ulong param_5);
void recovered_8244a49c(char *param_1,ulong param_2);
void recovered_8244a564(char *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                       int param_5,int param_6,int param_7);
void recovered_8244a628(char *param_1,ulong param_2,char *param_3,undefined8 param_4,int param_5);
undefined8 recovered_8244a698(long param_1,ulong param_2);
void recovered_8244a6d0(void);
ulonglong recovered_8244a6e0(long param_1,ulong param_2,long *param_3,ulong *param_4,ulong *param_5);
void recovered_8244a804(undefined8 param_1,undefined8 param_2,undefined8 param_3);
ulonglong recovered_8244a838(long *param_1,ulong *param_2,ulong param_3);
void recovered_8244a8c0(long *param_1,long param_2);
long recovered_8244a904(long param_1,long param_2);
void recovered_8244a948(long *param_1);
ulonglong recovered_8244a970(long param_1,int *****param_2);
uchar recovered_8244aad8(char **lines,ulong count,void *first,void *second,void *third);
void recovered_8244c884(void *context,char *token,char *format,...);
bool recovered_8244c970(long param_1,byte *param_2);
void recovered_8244c9bc(undefined8 *param_1,undefined8 *param_2);
ulonglong recovered_8244c9fc(long param_1,ulong *param_2);
ulong recovered_8244cc8c(ulong *param_1);
bool recovered_8244ccd4(byte *param_1,byte *param_2);
bool recovered_8244cd30(byte *param_1);
uint recovered_8244cdb0(ulong *param_1);
undefined8 recovered_8244ce04(long param_1,long param_2);
undefined8 recovered_8244ce58(long *param_1,undefined8 *param_2);
void recovered_8244cf2c(long param_1,long param_2);
uchar recovered_8244cf70(long param_1,ulong param_2,ulong param_3,ulong *param_4);
ulonglong recovered_8244d048(long param_1,long param_2,long *param_3,long *param_4,
                            ulonglong *param_5);
uint * recovered_8244d128(long param_1,long param_2,long param_3,long *param_4,long param_5,
                         ulonglong param_6,uchar param_7);
bool recovered_8244d1a4(undefined4 *param_1,undefined8 param_2);
ulonglong recovered_8244d1d8(int *param_1);
ulong recovered_8244d254(int param_1,long param_2,undefined8 *param_3);
char recovered_8244d29c(uint *param_1);
ulonglong recovered_8244e468(long param_1,ulonglong *param_2);
undefined8 recovered_8244e4e8(undefined4 *param_1);
undefined8 recovered_8244e540(undefined4 *param_1);
long recovered_8244e594(int *param_1,int *param_2,uint param_3);
ulonglong recovered_8244e75c(int *param_1,int *param_2,int *param_3,ulonglong param_4);
bool recovered_8244e820(undefined4 *param_1);
bool recovered_8244e8ac(long param_1,ulong param_2,ulong param_3,ulong *param_4,undefined1 *param_5);
uchar recovered_8244e9c8(long param_1,ulong param_2,ulong param_3,ulong *param_4);
void recovered_8244eaa0(undefined4 *param_1,int param_2);
undefined8 recovered_8244eac4(ulong *param_1,ulong param_2,long param_3,ulong *param_4);
uchar recovered_8244ec10(long environment,ulong *tokens,ulong first,ulong end,ulong *result);
float recovered_8244eccc(int *param_1);
ulonglong recovered_8244ed04(long param_1,ulonglong *param_2);
undefined8 recovered_8244ed8c(undefined8 *param_1,undefined8 *param_2);
bool recovered_8244ee88(undefined4 *param_1,undefined1 *param_2);
ulong recovered_8244eebc(long param_1,ulong *param_2,uchar *param_3);
uchar recovered_8244f7b0(int *environment,long *tokens,ulong *result);
undefined8 recovered_8244f838(long *param_1,undefined1 *param_2,long param_3);
ulong recovered_8244f8f0(long *param_1,undefined1 *param_2);
undefined8 recovered_8244f924(long param_1,long param_2);
undefined8 recovered_8244f978(long param_1,ulong param_2);
undefined8 recovered_8244f9f4(long param_1,ulong param_2);
uchar recovered_8244fa84(ulonglong *param_1,ulong *param_2);
uchar recovered_8244fb34(ulonglong *param_1,ulong *param_2);
uchar recovered_8244fbe4(ulonglong *param_1,ulong *param_2);
uchar recovered_8244fca4(ulonglong *param_1,ulong *param_2);
uint recovered_8244fd7c(int *param_1,uchar *param_2,uint *param_3,uint *param_4,ulonglong *param_5);
uchar recovered_8245027c(ulonglong *param_1,ulong *param_2);
uchar recovered_82450328(ulonglong *param_1,ulong *param_2);
uchar recovered_82450400(ulonglong *param_1,ulong *param_2);
uchar recovered_82450498(ulonglong *param_1,ulong *param_2);
void recovered_82451210(undefined4 *param_1,float param_2);
void recovered_8245124c(undefined4 *param_1,int param_2);
int recovered_8245127c(long param_1);
ulong recovered_824512e8(long param_1,long param_2);
uchar recovered_82451350(long param_1,int *param_2,int *param_3,char *param_4);
ulonglong recovered_82451408(long param_1,int *param_2,int *param_3,long param_4,char *param_5);
ulonglong recovered_824514a4(long param_1,long param_2,long param_3);
bool recovered_8245151c(char *param_1);
ulong recovered_82451570(long param_1,long param_2);
uchar recovered_824515c0(long text,int *out);
undefined8 recovered_82451710(long param_1,int *param_2);
void recovered_82451760(undefined4 *param_1,undefined4 param_2);
undefined8 recovered_8245177c(char *param_1);
uchar recovered_824517f0(char *text,float *out);
ulonglong recovered_8245188c(long param_1);
ulong recovered_82452034(long param_1,long param_2);
ulong recovered_824520b0(int *param_1,int *param_2,ulonglong *param_3);
undefined8 recovered_8245235c(long *param_1,int *param_2,int param_3);
ulong recovered_82452404(ulong *param_1,int *param_2,ulong *param_3,ulong param_4,int *param_5);
uchar recovered_82452cb4(int *param_1,long *param_2);
uchar recovered_82452da0(int *param_1,undefined8 *param_2);
uchar recovered_82452e04(int *param_1,long *param_2,uint param_3);
void recovered_8245311c(undefined8 *param_1);
ulong recovered_82453148(undefined8 *param_1);
uint recovered_82453184(long *param_1,undefined1 *param_2);
uchar recovered_824531b8(long *param_1,long param_2,long param_3);
undefined1 recovered_8245325c(long param_1,byte *param_2,ulong param_3);
uint recovered_82453418(int param_1);
uint * recovered_8245343c(uint param_1,long param_2);
undefined8 recovered_824534b4(undefined8 *param_1,long param_2,long param_3);
long recovered_8245352c(long param_1,long param_2);
bool recovered_82453570(undefined4 *param_1,undefined1 *param_2,long param_3);
undefined8 recovered_824535bc(int *param_1);
undefined8 recovered_824535dc(int param_1);
bool recovered_82453614(uint *param_1,uint *param_2);
void recovered_82453758(long param_1,long param_2);
uchar recovered_8245378c(void *context,char *name,pf_kernel_value *values,ulong count,
                        pf_kernel_value *out);
undefined8 recovered_82459ae8(void);
undefined8 recovered_82459bac(long param_1,long param_2);
void recovered_82459be0(void);
undefined8 recovered_82459c10(long param_1,long param_2);
void recovered_82459cc0(void);
ulonglong recovered_82459cec(long param_1,long param_2,uchar *param_3);
bool recovered_82459d88(void);
bool recovered_82459dd4(long param_1,char *param_2,long param_3,long param_4);
ulonglong recovered_82459e30(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                            long *param_6);
undefined8 recovered_82459ea4(int *param_1);
ulonglong recovered_8245a064(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                            int *param_6);
ulong recovered_8245a0e0(long param_1,char *param_2);
double recovered_8245a118(uint param_1);
ulonglong recovered_8245a168(long param_1,char *param_2,long param_3,ulong param_4,
                            ulonglong *param_5);
ulonglong recovered_8245a6d4(void *param_1,char *param_2,long param_3,ulong param_4,
                            ulonglong *param_5);
ulonglong recovered_8245b8dc(void *param_1,char *param_2,long param_3,ulong param_4,
                            undefined8 *param_5);
ulong recovered_8245be4c(long param_1,char *param_2,long param_3,ulong param_4,ulonglong *param_5);
ulonglong recovered_8245de88(long param_1,char *param_2,long param_3,ulong param_4,
                            ulonglong *param_5);
ulonglong recovered_8245fbd0(long param_1,char *param_2,long param_3,ulong param_4,
                            ulonglong *param_5);
ulonglong recovered_82461518(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                            int *param_6);
undefined8 recovered_824615d4(long param_1,long param_2);
byte recovered_82461698(long param_1,long param_2,long *param_3,long *param_4);
ulonglong recovered_824616ec(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                            long *param_6);
long recovered_824617b4(long param_1,long param_2,int param_3);
ulonglong recovered_824618c8(int *param_1,uint *param_2,uint *param_3);
ulong recovered_824619a0(undefined4 *param_1,long param_2,long param_3,ulong param_4);
undefined8 recovered_824619ec(long param_1,char *param_2);
ulonglong recovered_82461a90(long param_1,ulong param_2,long param_3,char *param_4,ulong param_5);
uint recovered_82461e08(undefined2 *param_1);
ulonglong recovered_82461e6c(long param_1,long *param_2,ulong *param_3,ulonglong *param_4,
                            char *param_5,ulong param_6);
double recovered_8246206c(void);
void recovered_824620c4(int param_1);
long recovered_8246210c(undefined8 param_1,ulong param_2);
float recovered_82462198(float param_1);
ulong recovered_8246223c(long param_1,char *param_2,int *param_3,long param_4,ulonglong *param_5,
                        int param_6);
void recovered_82462690(void);
void recovered_824626f0(long param_1,ulong *param_2,int param_3,int param_4);
undefined8 recovered_82462764(int *param_1,long param_2,undefined8 param_3);
undefined8 recovered_8246279c(int *param_1,long param_2,undefined8 param_3);
undefined8 recovered_824627d4(int *param_1,long param_2,long param_3);
uint recovered_82462824(uint param_1,uint param_2,ulonglong param_3,ulonglong param_4,
                       ulonglong param_5);
ulonglong recovered_824628c8(void);
ulonglong recovered_82462918(uint param_1,uint param_2,ulonglong param_3,ulonglong param_4,
                            ulonglong param_5);
undefined8 recovered_82462a9c(int *param_1,int *param_2);
ulonglong recovered_82462b2c(long param_1,char *param_2,ulong param_3,int param_4,ulonglong *param_5
                            );
ulonglong recovered_82462ba8(long param_1,char *param_2,ulong param_3,ulong param_4,int param_5,
                            ulonglong *param_6);
void recovered_82462c38(long param_1);
void recovered_82462c8c(char *param_1,undefined1 *param_2);
undefined8 recovered_82462d80(int *param_1,long param_2,undefined1 *param_3);
void recovered_82462de0(char *param_1,int param_2);
bool recovered_82462e64(long param_1,long param_2,long param_3);
ulonglong recovered_82462eb4(uint *param_1,long param_2,long param_3);
ulonglong recovered_82462f20(long param_1,ulong param_2,long *param_3);
ulonglong recovered_82463028(long param_1,char *param_2,ulonglong param_3);
ulonglong recovered_824630b8(int *param_1);
undefined8 recovered_8246318c(char *param_1,char *param_2);
uint recovered_824634ec(void);
uint recovered_82463514(uchar *param_1,ulong param_2,int param_3,int param_4);
ulonglong recovered_824636a0(uchar *param_1,ulong param_2,long *param_3,ulong *param_4);
ulonglong recovered_82463900(ulonglong param_1,ulonglong *param_2,long *param_3);
ulong recovered_82463be4(ulong param_1);
long recovered_82463cc0(void);
undefined8 recovered_82463d1c(long param_1,uint param_2,char *param_3,char *param_4);
uint recovered_82463f48(ushort *param_1,uint param_2);
bool recovered_82463f88(int param_1);
ulong recovered_82463fb0(long param_1,uint *param_2,undefined8 param_3);
uint recovered_8246402c(void);
void recovered_82464040(undefined1 *param_1,undefined1 *param_2);
void recovered_82464058(void *param_1,void *param_2,void *param_3,uint param_4);
bool recovered_8246408c(char *param_1);
void recovered_824640d0(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,undefined8 param_6);
uint recovered_82464178(ushort *param_1,ulong param_2);
ulonglong recovered_824641c4(int *param_1,int *param_2);
undefined * recovered_824643f8(int param_1);
void recovered_82464420(void);
ulonglong recovered_82464434(long param_1,uint *param_2);
ulonglong recovered_824645e8(ulonglong param_1,int param_2);
ulonglong recovered_82464664(ulonglong param_1,uint param_2);
ulong recovered_824649d8(ulonglong param_1,uint param_2);
ulonglong recovered_82464e34(ulonglong param_1,ulong param_2,ulong param_3,char *param_4,
                            uchar *param_5);
ulonglong recovered_82465cd8(ulonglong param_1,ulong param_2);
undefined4 * recovered_82465e3c(uint param_1);
ulonglong recovered_82465e90(ulong param_1,ulong param_2,ulonglong *param_3,int param_4);
ulonglong recovered_8246622c(ulong param_1,ulong param_2,uint *param_3,int param_4);
bool recovered_8246650c(long param_1);
undefined8 recovered_8246655c(long param_1);
int * recovered_824665b0(ulonglong param_1,ulong param_2,ulong param_3,uint param_4,int param_5,
                        uchar param_6,uint param_7);
undefined8 recovered_8246666c(int *param_1,uint param_2,undefined8 *param_3);
void recovered_82466718(long param_1,long param_2,ulong param_3);
void recovered_82466774(long param_1);
undefined8 recovered_82466940(long param_1,ulong param_2,undefined4 *param_3);
ulong recovered_82466a64(ulonglong param_1,ulong param_2,ulong param_3);
bool recovered_82466be8(void *param_1);
void recovered_82466c2c(long param_1,long param_2);
undefined8 recovered_82466c84(long param_1,uint param_2,uint *param_3,uint *param_4);
void recovered_82466da8(long param_1,long param_2);
void recovered_82466e08(long param_1,long param_2);
ulonglong recovered_82466e54(ulonglong param_1);
void recovered_82466ee0(undefined1 *param_1,long param_2);
undefined8
recovered_82466f34(void *param_1,ulong param_2,void *param_3,int param_4,long param_5,ulong param_6);
void recovered_82467064(void *param_1,ulong param_2,long param_3,void *param_4,void *param_5,
                       long param_6);
void recovered_82467160(long param_1);
void recovered_824671a4(void *param_1,ulong param_2,void *param_3,ulong param_4,long param_5);
undefined8 recovered_824672d4(uint *param_1,void *param_2,ulong param_3);
void recovered_824674c8(long param_1,long param_2);
undefined8 recovered_82467580(long param_1,ulong param_2,long param_3,ulong param_4);
void recovered_8246766c(long param_1,long param_2,long param_3);
bool recovered_824676f4(long param_1,long param_2);
ulonglong recovered_82467734(ulonglong param_1,int param_2,int param_3,undefined8 *param_4,
                            undefined4 *param_5);
char * recovered_8246783c(char *param_1,char *param_2);
bool recovered_824678a4(char *param_1,char *param_2,long param_3,ulong param_4);
ulong recovered_824679b4(char *param_1,undefined4 *param_2);
ulong recovered_82467a24(char *param_1,char *param_2,undefined4 *param_3);
bool recovered_82467a7c(char *param_1,long param_2,ulong param_3);
undefined8 recovered_82467be0(char *param_1,ulong *param_2);
undefined8 recovered_82467c50(ulonglong param_1,ulong param_2,undefined8 param_3);
ulong recovered_82467cd8(uint param_1);
void recovered_82467d48(long param_1,uchar param_2,uint param_3,ulonglong param_4);
uint recovered_82467dcc(long param_1,long param_2);
void recovered_82467e18(ushort *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       long param_5,long param_6);
bool recovered_82467f10(byte *param_1);
void recovered_82467f64(long param_1);
undefined8 recovered_82467f8c(char *param_1);
undefined8 recovered_82467fd4(long param_1);
undefined8 recovered_82468028(long param_1);
undefined8 recovered_8246808c(long param_1);
char * recovered_82468110(char *param_1,ulonglong param_2,char *param_3);
void recovered_82468218(char *param_1,char *param_2);
uchar recovered_8246825c(ulonglong param_1,uint param_2,ulonglong param_3,uint param_4,uint param_5);
uchar recovered_82468324(ulonglong param_1,uint param_2,uint param_3,uint param_4);
ulonglong recovered_82468408(long param_1,ulong param_2,ulong param_3);
void recovered_824687d0(long param_1);
void recovered_82468888(long param_1,int param_2);
ulong recovered_824689cc(ulonglong param_1,int param_2,ulonglong param_3);
undefined8
recovered_82468aa0(ulonglong param_1,ulonglong param_2,uint param_3,undefined8 param_4,long param_5);
ulonglong recovered_82468e58(ulonglong param_1,ulonglong param_2,ulonglong param_3,long param_4);
void recovered_8246930c(long param_1,ulonglong param_2,uchar *param_3);
ulong recovered_82469330(uint param_1,byte *param_2,undefined1 *param_3);
uint * recovered_82469354(uint param_1,uchar *param_2,int param_3);
undefined8 recovered_824693f0(undefined8 param_1,uint param_2,undefined8 param_3);
undefined8 recovered_82469448(long param_1,undefined1 *param_2);
uchar recovered_8246949c(long entry,uchar *name);
ulonglong recovered_824694e4(ulonglong param_1,ulong param_2,ulong param_3,char *param_4,
                            long param_5);
ulonglong recovered_824695c4(char *param_1,ulonglong param_2,ulonglong param_3,long param_4,
                            long param_5);
void recovered_824696a0(long param_1,long param_2);
bool recovered_824696e8(void);
undefined8 recovered_82469760(long param_1);
ulonglong recovered_824697e4(long param_1,long param_2,char *param_3,long param_4,uchar *param_5);
void recovered_82469b64(ulonglong param_1,long param_2,long param_3);
double recovered_82469bd4(char *param_1,long param_2);
void recovered_82469c88(long param_1);
bool recovered_82469cb8(char *param_1,long param_2);
long recovered_82469dac(char *param_1);
void recovered_82469e4c(long param_1);
ulong recovered_82469ee4(long param_1,char *param_2);
undefined8 recovered_82469fe4(long param_1,char *param_2,long param_3);
void recovered_8246a064(long param_1,uchar *param_2);
undefined1 recovered_8246a0d4(long param_1,undefined1 *param_2,ulong param_3,undefined8 *param_4);
undefined1 recovered_8246a1c4(char *param_1);
ulonglong recovered_8246a27c(char *param_1);
void recovered_8246a324(void);
undefined8 recovered_8246a35c(void);
ulonglong recovered_8246a360(ulonglong param_1,int *param_2);
void recovered_8246a4b8(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,
                       uint param_5,long param_6);
undefined8 recovered_8246a598(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 recovered_8246a5d0(void);
undefined8 recovered_8246a654(void);
void recovered_8246a6e8(void);
undefined8 recovered_8246a71c(void);
undefined8 recovered_8246a7b0(long param_1,long param_2);
ulonglong recovered_8246a878(long param_1,char *param_2,long param_3,uchar *param_4,long param_5,
                            long *param_6);
ulonglong recovered_8246a95c(ulong *param_1,uchar param_2,uint param_3,uint param_4);
void recovered_8246aa08(long *param_1);
void recovered_8246aa64(long *param_1);
void recovered_8246aab0(long param_1);
void recovered_8246ab00(undefined4 *param_1);
void recovered_8246ab54(undefined4 *param_1);
bool recovered_8246abac(uint param_1);
ulong recovered_8246abe4(undefined8 param_1,ulong param_2);
void recovered_8246ac2c(undefined8 param_1,ulong param_2);
uint128 recovered_8246ac70(long *param_1,ulong param_2);
float recovered_8246ad9c(float param_1);
void recovered_8246ade0(long param_1);
undefined8 recovered_8246ae18(int *param_1,int *param_2);
ulong recovered_8246af8c(long param_1,ulonglong param_2,ulonglong param_3);
undefined8 recovered_8246b000(long *param_1,long param_2,long param_3);
ulonglong recovered_8246b090(long *param_1,long param_2,long param_3);
ulonglong recovered_8246b14c(long param_1,long param_2);
ulong recovered_8246b1ec(long *param_1,byte *param_2);
undefined8 recovered_8246b258(long *param_1,ulong param_2);
undefined8 recovered_8246b2ec(long *param_1);
undefined8 recovered_8246b374(long *param_1);
undefined8 recovered_8246b438(undefined8 *param_1,long *param_2);
void recovered_8246b4e0(long param_1);
undefined8 recovered_8246b504(long param_1,ulong *param_2,char *param_3,undefined1 *param_4);
undefined8 recovered_8246b5d4(byte *param_1,undefined8 *param_2);
ulong recovered_8246b60c(byte *param_1);
undefined8 recovered_8246b684(long param_1,long param_2);
ulonglong recovered_8246b77c(long param_1,ulonglong param_2,long param_3,ulong *param_4,
                            uchar *param_5,long param_6);
ulonglong recovered_8246bbe8(ulonglong *param_1);
void recovered_8246bd50(void);
void recovered_8246bd7c(void);
char * recovered_8246bdd0(long param_1,int param_2,ulong *param_3);
ulong recovered_8246bf84(long param_1);
void recovered_8246c008(char *param_1,ulonglong *param_2);
ulonglong recovered_8246c308(char *param_1,int param_2);
void recovered_8246c3e8(long param_1);
uint recovered_8246c44c(long param_1,long param_2);
void recovered_8246c490(void *param_1);
void recovered_8246c6a4(long param_1);
void recovered_8246c6f8(void);
void recovered_8246c7c8(undefined8 *param_1);
ulonglong recovered_8246c7fc(ulonglong param_1,uint *param_2);
ulonglong recovered_8246c934(ulonglong param_1,uint *param_2);
void recovered_8246c9c0(ulong param_1,ulong param_2,int param_3);
long recovered_8246cbd4(long param_1,uint param_2);
bool recovered_8246cbf0(uint param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                       uint param_7,uint param_8,uint param_9,long *param_10,int *param_11);
int recovered_8246cd8c(char *param_1);
void recovered_8246ce40(ulong param_1,uint param_2);
ulonglong recovered_8246d058(ulonglong param_1,int param_2,int *param_3);
undefined8 recovered_8246d288(undefined8 param_1,undefined8 param_2,long param_3,uint *param_4);
ulong recovered_8246d2e4(long param_1,uint param_2);
void recovered_8246d324(long param_1);
void recovered_8246d394(undefined4 param_1,undefined8 param_2,undefined4 *param_3);
uchar recovered_8246d3c4(void);
void recovered_8246d608(void);
void recovered_8246d614(void);
int recovered_8246d6c8(void);
uchar recovered_8246d730(uint param_1,int param_2,long param_3,uint param_4,uint param_5,int param_6
                        ,int param_7);
void recovered_8246d818(long param_1,uint param_2,uint param_3);
void recovered_8246d844(long param_1,int param_2,int param_3);
ulong recovered_8246d884(long param_1);
void recovered_8246d8a8(long param_1,long param_2);
void recovered_8246d900(ulong *param_1);
void recovered_8246d914(long param_1,int param_2,int param_3,int param_4);
ulong recovered_8246dac0(long param_1,uint param_2,undefined8 *param_3,int *param_4);
int recovered_8246deac(char *param_1,ulonglong param_2,int *param_3);
undefined8
recovered_8246df44(long param_1,long *param_2,undefined1 param_3,void *param_4,uint param_5);
void recovered_8246dfc8(void);
bool recovered_8246dff0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,void *param_7,uint param_8);
ulong recovered_8246e0e8(ulong param_1,long param_2);
ulong recovered_8246e11c(ulong param_1,long param_2);
undefined8 recovered_8246e150(long param_1,ulong param_2,ulong *param_3);
ulonglong recovered_8246e1cc(ulonglong *param_1);
void recovered_8246e24c(undefined8 *param_1);
bool recovered_8246e284(uint param_1,uint param_2,undefined4 *param_3);
void recovered_8246e2dc(uint *param_1,uint *param_2);
undefined8 recovered_8246e338(char *param_1,uint param_2,ulong param_3);
void recovered_8246e458(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5);
ulonglong recovered_8246e4d8(uint param_1,uint param_2);
undefined8 recovered_8246e54c(void);
uchar recovered_8246e564(void);
uchar recovered_8246e578(void);
uchar recovered_8246e58c(void);
undefined8 recovered_8246e5a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined8 recovered_8246e5d8(void);
undefined8 recovered_8246e5dc(void);
undefined8 recovered_8246e5e0(void);
bool recovered_8246e5e4(long param_1,int *param_2);
uint recovered_8246e620(void);
ulonglong recovered_8246e650(long param_1,uint param_2);
ulong recovered_824049e4(void);
undefined8 recovered_8246e704(undefined8 param_1);
undefined8 recovered_8246e748(int param_1);
undefined8 recovered_8246e770(uint *param_1,long param_2,long param_3);
int recovered_8246e938(long param_1);
undefined8 recovered_8246ead0(int *param_1,long param_2,long param_3);
bool recovered_8246eb24(long param_1);
undefined8 recovered_8246eb6c(long param_1);
ulonglong recovered_8246ec28(long param_1,long param_2,char *param_3);
char * recovered_8246ec7c(char *text);
ulonglong recovered_8246ecb0(long param_1,uchar *param_2);
void recovered_8246ede4(undefined *param_1);
ulong recovered_8246ee14(ulong param_1);
ulong recovered_8246ee28(long param_1,uchar *param_2,uint *param_3);
ulong recovered_8246eea4(long *param_1,undefined2 param_2);
uchar recovered_8246eec8(long *param_1,undefined4 param_2);
uint recovered_8246eeec(int *param_1);
ulonglong recovered_8246f020(char *format,...);
void recovered_8246f050(long param_1);
void recovered_8246f0b4(ulonglong param_1,int param_2);
undefined8 recovered_8246f11c(long param_1,long param_2);

/* Original analysis identifiers for manual recovery units. */

#define pf_varargs_82401ff0_0 recovered_82401ff0
#define pf_varargs_82401ff0_1 recovered_82401ff0
#define pf_varargs_82401ff0_10 recovered_82401ff0
#define pf_varargs_82401ff0_11 recovered_82401ff0
#define pf_varargs_82401ff0_15 recovered_82401ff0
#define pf_varargs_82401ff0_2 recovered_82401ff0
#define pf_varargs_82401ff0_3 recovered_82401ff0
#define pf_varargs_82401ff0_4 recovered_82401ff0
#define pf_varargs_82401ff0_5 recovered_82401ff0
#define pf_varargs_82401ff0_6 recovered_82401ff0
#define pf_varargs_82401ff0_7 recovered_82401ff0
#define pf_varargs_82401ff0_8 recovered_82401ff0
#define pf_varargs_824234a4_0 recovered_824234a4
#define pf_varargs_824234a4_1 recovered_824234a4
#define pf_varargs_824234a4_11 recovered_824234a4
#define pf_varargs_824234a4_2 recovered_824234a4
#define pf_varargs_824234a4_3 recovered_824234a4
#define pf_varargs_824234a4_4 recovered_824234a4
#define pf_varargs_824234a4_5 recovered_824234a4
#define pf_varargs_824234a4_6 recovered_824234a4
#define pf_varargs_824234a4_9 recovered_824234a4
#define pf_varargs_82424658_1 recovered_82424658
#define pf_varargs_82424658_10 recovered_82424658
#define pf_varargs_82424658_2 recovered_82424658
#define pf_varargs_82424658_3 recovered_82424658
#define pf_varargs_82424658_4 recovered_82424658
#define pf_varargs_82424658_7 recovered_82424658
#define pf_varargs_82424658_8 recovered_82424658
#define pf_varargs_82424658_9 recovered_82424658
#define pf_varargs_8244c884_0 recovered_8244c884
#define pf_varargs_8244c884_1 recovered_8244c884
#define pf_varargs_8244c884_2 recovered_8244c884
#define pf_varargs_8244c884_3 recovered_8244c884
#define pf_varargs_8246f020_0 recovered_8246f020
#define pf_varargs_8246f020_10 recovered_8246f020
#define pf_varargs_8246f020_2 recovered_8246f020
