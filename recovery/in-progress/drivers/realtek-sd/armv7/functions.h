/* Permafrost recovered source; Pooka's Free Software License. */
#pragma once
#include "support.h"
#include "support.h"
extern unsigned char pf_module_state[];
#include "cpu.h"
#include "arm_exclusive.h"
#include "armv7-recovery.h"
#include "neon.h"
extern uint8_t pf_module_state[];
void * recovered_100024c8(void);
uint recovered_100024d8(void *api);
void recovered_10002904(undefined1 *param_1,int param_2);
void recovered_10002928(int *param_1,byte *param_2);
undefined4 recovered_10004594(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4);
void recovered_10004660(uint param_1,uint param_2,int param_3,undefined1 *param_4);
void recovered_1000467c(uint param_1,uint param_2,int param_3,undefined1 *param_4);
undefined4 recovered_10004698(uint param_1);
int recovered_10004748(uint param_1,int param_2);
void recovered_10004894(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
undefined4 recovered_10004914(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out);
uint recovered_10004ad8(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out);
void recovered_10004b4c(byte *param_1,char *param_2);
bool recovered_10004cb8(byte *param_1,uint param_2);
uint recovered_10004d9c(void *device,uint offset,uint value);
void recovered_10004e1c(undefined1 *param_1,uint param_2,char *param_3);
void recovered_10004e34(int param_1,uint param_2,uint param_3,int param_4);
void recovered_10004e94(int param_1,uint param_2,char *param_3);
void recovered_10004ee8(int param_1,uint param_2,int param_3);
void recovered_10004f98(int param_1,uint param_2,undefined1 param_3);
int recovered_10004fd4(int param_1);
undefined4
recovered_10004ffc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6);
undefined4 recovered_10005070(int *param_1,undefined4 param_2);
uint recovered_100050b4(void *device,uint offset,uint value);
void recovered_100050e0(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
bool recovered_1000516c(int param_1,int param_2,uint param_3);
uint recovered_100051d8(void *device,uint offset,void *out);
bool recovered_10005204(int param_1,int param_2);
undefined4 recovered_1000540c(int param_1,uint *param_2,uint3 param_3);
undefined4 recovered_100054b4(int param_1,uint param_2,int param_3,int *param_4,byte *param_5);
bool recovered_100055b8(int param_1,int param_2,undefined4 *param_3);
bool recovered_10005664(int param_1,uint param_2);
bool recovered_100056c8(int param_1);
undefined4 recovered_10005720(int *param_1);
void recovered_10005760(int param_1);
uint recovered_10005794(void *device);
void recovered_10005980(int param_1);
void recovered_100059f0(int *param_1);
bool recovered_10005a2c(byte *param_1,int param_2);
void recovered_10005b50(int *param_1,undefined4 param_2);
bool recovered_10005b90(int param_1,int param_2,uint3 param_3,int param_4,uint *param_5,int param_6);
undefined4 recovered_10005d40(int param_1,int param_2,uint3 param_3,int param_4);
undefined4 recovered_10005da8(int param_1);
bool recovered_10005e9c(int param_1);
undefined4 recovered_10005f28(int param_1,int param_2,int param_3,int param_4);
bool recovered_100060dc(byte *param_1,uint *param_2);
uint recovered_10006110(int param_1,uint param_2,uint param_3);
uint recovered_10006170(byte *param_1);
uint recovered_10006198(uint *param_1);
undefined4 recovered_10006230(int *param_1,undefined4 param_2,int param_3,int param_4);
void recovered_10006290(int param_1);
undefined1 *
recovered_100062c4(uint param_1,uint param_2,int param_3,undefined1 *param_4,uint param_5);
undefined4 recovered_10006eb8(int param_1,uint param_2,int param_3,uint param_4);
void recovered_10007190(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4
recovered_100071d8(int param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6);
undefined4 recovered_10007250(undefined4 *param_1);
uint recovered_100074c0(uint param_1,uint param_2);
uint recovered_10007510(uint param_1,uint param_2);
uint recovered_10007548(uint param_1,uint param_2);
uint recovered_100075b8(uint param_1,uint param_2);
undefined8 recovered_10007620(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007704(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007784(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_100078a4(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 recovered_10007960(undefined4 param_1,undefined4 param_2);
undefined8 recovered_100079e8(undefined4 param_1,undefined4 param_2);
undefined8 recovered_10007a34(float param_1);
void recovered_10007a44(float param_1);
double recovered_10007a54(uint param_1,uint param_2);
double recovered_10007a9c(uint param_1,uint param_2);
float recovered_10007ac4(uint param_1,uint param_2);
float recovered_10007ae0(uint param_1,uint param_2);
void *recovered_10007b20(void *dest,const void *source,size_t bytes);

/* Original analysis identifiers for manual recovery units. */
