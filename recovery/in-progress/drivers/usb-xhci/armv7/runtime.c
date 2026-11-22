/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Pooka's Free Software License. Recovered descriptor address. */
void *recovered_10000a50(void){return pf_module_state+0x46e0U;}


#undef DAT_10000d08
#define DAT_10000d08 (*(int *)(0x10000d08U))
#undef DAT_10000d0c
#define DAT_10000d0c (*(int *)(0x10000d0cU))
#undef DAT_10000d10
#define DAT_10000d10 (*(int *)(0x10000d10U))
#undef DAT_10000d14
#define DAT_10000d14 (*(int *)(0x10000d14U))
#undef DAT_10000d18
#define DAT_10000d18 (*(int *)(0x10000d18U))
#undef DAT_10000d1c
#define DAT_10000d1c (*(int *)(0x10000d1cU))
#undef DAT_10000d20
#define DAT_10000d20 (*(int *)(0x10000d20U))
#undef DAT_10000d24
#define DAT_10000d24 (*(int *)(0x10000d24U))
#undef DAT_10000d28
#define DAT_10000d28 (*(int *)(0x10000d28U))
#undef DAT_10000d2c
#define DAT_10000d2c (*(int *)(0x10000d2cU))
#undef DAT_10000d30
#define DAT_10000d30 (*(int *)(0x10000d30U))
#undef DAT_10000d34
#define DAT_10000d34 (*(int *)(0x10000d34U))
#undef DAT_10000d38
#define DAT_10000d38 (*(int *)(0x10000d38U))
#define auStack_4fc (*(undefined1 (*)[1024])(frame + 20))
#define abStack_f8 (*(byte (*)[12])(frame + 1048))
#define local_fc (*(uint *)(frame + 1044))
#define local_ec (*(char *)(frame + 1060))
#define local_94 (*(uint *)(frame + 1148))
#define local_58 (*(uint *)(frame + 1208))
#define local_54 (*(uint *)(frame + 1212))
#define abStack_50 (*(byte (*)[48])(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a60
 */

int recovered_10000a60(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  iVar2 = (0x54584b57U);
  iVar4 = 0;
  local_fc = 0;
  if (((api != (int *)0x0) && (*api == (0x54584b57U))) && (0xf < (uint)api[2])) {
    recovered_10000d3c(auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    recovered_10002598((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x93U)));
    recovered_100025ec((int)auStack_4fc,0x60,api[1]);
    recovered_10002598((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0xa2U)));
    if (((*api == iVar2) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(auStack_4fc);
    }
    recovered_10000d3c(auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x34U)));
    if (((*api == iVar2) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_f8), iVar1 != 0))))
    {
      recovered_10002534((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xa9U)),local_94);
      recovered_10002700((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xb9U)),local_58);
      recovered_10002534((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xc8U)),local_54);
    }
    if (((code *)api[3] != (code *)0x0) &&
       (iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0xdbU),((uintptr_t)pf_module_state + 0x5fU),auStack_4fc),
       iVar1 != 0)) {
      uVar3 = 0;
      if ((*api == iVar2) && ((0x5f < (uint)api[2] && (api[0x17] != 0)))) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
            iVar2 = recovered_100027c8(api,uVar3 & 0xff,uVar5 & 0xff,0,abStack_f8);
            if ((iVar2 != 0) &&
               (recovered_10000d50(api,abStack_f8,(int *)&local_fc), local_ec < '\0')) {
              for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
                iVar2 = recovered_100027c8(api,uVar3 & 0xff,uVar5 & 0xff,uVar6 & 0xff,abStack_50);
                if (iVar2 != 0) {
                  recovered_10000d50(api,abStack_50,(int *)&local_fc);
                }
              }
            }
          }
        }
        uVar3 = local_fc;
      }
      recovered_10002534((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x74U)),uVar3);
      iVar4 = 1;
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(((uintptr_t)pf_module_state + 0xdbU),((uintptr_t)pf_module_state + 0x5fU),auStack_4fc);
      }
    }
  }
  return iVar4;
}

#undef DAT_10000d08
#undef DAT_10000d0c
#undef DAT_10000d10
#undef DAT_10000d14
#undef DAT_10000d18
#undef DAT_10000d1c
#undef DAT_10000d20
#undef DAT_10000d24
#undef DAT_10000d28
#undef DAT_10000d2c
#undef DAT_10000d30
#undef DAT_10000d34
#undef DAT_10000d38
#undef auStack_4fc
#undef abStack_f8
#undef local_fc
#undef local_ec
#undef local_94
#undef local_58
#undef local_54
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d3c
 */

void recovered_10000d3c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002598((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10001d20
#define DAT_10001d20 (*(int *)(0x10001d20U))
#undef DAT_10001d24
#define DAT_10001d24 (*(int *)(0x10001d24U))
#undef DAT_10001e24
#define DAT_10001e24 (*(int *)(0x10001e24U))
#undef DAT_10001e28
#define DAT_10001e28 (*(int *)(0x10001e28U))
#undef DAT_10001f84
#define DAT_10001f84 (*(int *)(0x10001f84U))
#undef DAT_10001f88
#define DAT_10001f88 (*(int *)(0x10001f88U))
#undef DAT_10002058
#define DAT_10002058 (*(int *)(0x10002058U))
#undef DAT_1000205c
#define DAT_1000205c (*(int *)(0x1000205cU))
#undef DAT_100023f0
#define DAT_100023f0 (*(int *)(0x100023f0U))
#undef DAT_100023f4
#define DAT_100023f4 (*(int *)(0x100023f4U))
#undef DAT_100023f8
#define DAT_100023f8 (*(int *)(0x100023f8U))
#undef DAT_100023fc
#define DAT_100023fc (*(int *)(0x100023fcU))
#undef DAT_10002400
#define DAT_10002400 (*(int *)(0x10002400U))
#undef DAT_10002404
#define DAT_10002404 (*(int *)(0x10002404U))
#undef DAT_10002408
#define DAT_10002408 (*(int *)(0x10002408U))
#undef DAT_1000240c
#define DAT_1000240c (*(int *)(0x1000240cU))
#undef DAT_10002410
#define DAT_10002410 (*(int *)(0x10002410U))
#undef DAT_10002414
#define DAT_10002414 (*(int *)(0x10002414U))
#undef DAT_10002418
#define DAT_10002418 (*(int *)(0x10002418U))
#undef DAT_1000241c
#define DAT_1000241c (*(int *)(0x1000241cU))
#undef DAT_10002420
#define DAT_10002420 (*(int *)(0x10002420U))
#undef DAT_10002424
#define DAT_10002424 (*(int *)(0x10002424U))
#undef DAT_10002428
#define DAT_10002428 (*(int *)(0x10002428U))
#undef DAT_1000242c
#define DAT_1000242c (*(int *)(0x1000242cU))
#undef DAT_10002430
#define DAT_10002430 (*(int *)(0x10002430U))
#undef DAT_10002434
#define DAT_10002434 (*(int *)(0x10002434U))
#undef DAT_10002438
#define DAT_10002438 (*(int *)(0x10002438U))
#undef DAT_1000243c
#define DAT_1000243c (*(int *)(0x1000243cU))
#undef DAT_10002440
#define DAT_10002440 (*(int *)(0x10002440U))
#undef DAT_10002444
#define DAT_10002444 (*(int *)(0x10002444U))
#undef DAT_10002448
#define DAT_10002448 (*(int *)(0x10002448U))
#undef DAT_1000244c
#define DAT_1000244c (*(int *)(0x1000244cU))
#undef DAT_10002450
#define DAT_10002450 (*(int *)(0x10002450U))
#undef DAT_10002454
#define DAT_10002454 (*(int *)(0x10002454U))
#undef DAT_10002458
#define DAT_10002458 (*(int *)(0x10002458U))
#undef DAT_1000245c
#define DAT_1000245c (*(int *)(0x1000245cU))
#undef DAT_10002460
#define DAT_10002460 (*(int *)(0x10002460U))
#undef DAT_10002464
#define DAT_10002464 (*(int *)(0x10002464U))
#undef DAT_10002468
#define DAT_10002468 (*(int *)(0x10002468U))
#undef DAT_1000246c
#define DAT_1000246c (*(int *)(0x1000246cU))
#undef DAT_10002470
#define DAT_10002470 (*(int *)(0x10002470U))
#undef DAT_10002474
#define DAT_10002474 (*(int *)(0x10002474U))
#undef DAT_10002478
#define DAT_10002478 (*(int *)(0x10002478U))
#undef DAT_1000247c
#define DAT_1000247c (*(int *)(0x1000247cU))
#undef DAT_10002480
#define DAT_10002480 (*(int *)(0x10002480U))
#undef DAT_10002484
#define DAT_10002484 (*(int *)(0x10002484U))
#undef DAT_10002488
#define DAT_10002488 (*(int *)(0x10002488U))
#undef DAT_1000248c
#define DAT_1000248c (*(int *)(0x1000248cU))
#undef DAT_10002490
#define DAT_10002490 (*(int *)(0x10002490U))
#undef DAT_10002494
#define DAT_10002494 (*(int *)(0x10002494U))
#undef DAT_10002498
#define DAT_10002498 (*(int *)(0x10002498U))
#undef DAT_1000249c
#define DAT_1000249c (*(int *)(0x1000249cU))
#undef DAT_100024a0
#define DAT_100024a0 (*(int *)(0x100024a0U))
#undef DAT_100024a4
#define DAT_100024a4 (*(int *)(0x100024a4U))
#undef DAT_100024a8
#define DAT_100024a8 (*(int *)(0x100024a8U))
#undef DAT_100024ac
#define DAT_100024ac (*(int *)(0x100024acU))
#undef DAT_100024b0
#define DAT_100024b0 (*(int *)(0x100024b0U))
#undef DAT_100024b4
#define DAT_100024b4 (*(int *)(0x100024b4U))
#undef DAT_100024b8
#define DAT_100024b8 (*(int *)(0x100024b8U))
#undef DAT_100024bc
#define DAT_100024bc (*(int *)(0x100024bcU))
#undef DAT_100024c0
#define DAT_100024c0 (*(int *)(0x100024c0U))
#undef DAT_100024c4
#define DAT_100024c4 (*(int *)(0x100024c4U))
#undef DAT_100024c8
#define DAT_100024c8 (*(int *)(0x100024c8U))
#undef DAT_100024cc
#define DAT_100024cc (*(int *)(0x100024ccU))
#undef DAT_100024d0
#define DAT_100024d0 (*(int *)(0x100024d0U))
#undef DAT_100024d4
#define DAT_100024d4 (*(int *)(0x100024d4U))
#undef DAT_100024d8
#define DAT_100024d8 (*(int *)(0x100024d8U))
#undef DAT_100024dc
#define DAT_100024dc (*(int *)(0x100024dcU))
#undef DAT_100024e0
#define DAT_100024e0 (*(int *)(0x100024e0U))
#undef DAT_100024e4
#define DAT_100024e4 (*(int *)(0x100024e4U))
#undef DAT_100024e8
#define DAT_100024e8 (*(int *)(0x100024e8U))
#undef DAT_100024ec
#define DAT_100024ec (*(int *)(0x100024ecU))
#undef DAT_100024f0
#define DAT_100024f0 (*(int *)(0x100024f0U))
#undef DAT_100024f4
#define DAT_100024f4 (*(int *)(0x100024f4U))
#undef DAT_100024f8
#define DAT_100024f8 (*(int *)(0x100024f8U))
#undef DAT_100024fc
#define DAT_100024fc (*(int *)(0x100024fcU))
#undef DAT_10002500
#define DAT_10002500 (*(int *)(0x10002500U))
#undef DAT_10002504
#define DAT_10002504 (*(int *)(0x10002504U))
#undef DAT_10002508
#define DAT_10002508 (*(int *)(0x10002508U))
#undef DAT_1000250c
#define DAT_1000250c (*(int *)(0x1000250cU))
#undef DAT_10002510
#define DAT_10002510 (*(int *)(0x10002510U))
#undef DAT_10002514
#define DAT_10002514 (*(int *)(0x10002514U))
#undef DAT_10002518
#define DAT_10002518 (*(int *)(0x10002518U))
#undef DAT_1000251c
#define DAT_1000251c (*(int *)(0x1000251cU))
#undef DAT_10002520
#define DAT_10002520 (*(int *)(0x10002520U))
#undef DAT_10002524
#define DAT_10002524 (*(int *)(0x10002524U))
#undef DAT_10002528
#define DAT_10002528 (*(int *)(0x10002528U))
#undef DAT_1000252c
#define DAT_1000252c (*(int *)(0x1000252cU))
#undef DAT_10002530
#define DAT_10002530 (*(int *)(0x10002530U))
#define local_8a4 (*(char (*)[1024])(frame + 28))
#define local_4a4 (*(uint *)(frame + 1052))
#define local_4a0 (*(uint *)(frame + 1056))
#define local_49c (*(uint *)(frame + 1060))
#define local_498 (*(uint *)(frame + 1064))
#define local_494 (*(uint *)(frame + 1068))
#define local_490 (*(uint *)(frame + 1072))
#define local_48c (*(uint *)(frame + 1076))
#define local_488 (*(uint *)(frame + 1080))
#define local_484 (*(uint *)(frame + 1084))
#define local_480 (*(uint *)(frame + 1088))
#define local_47c (*(uint *)(frame + 1092))
#define local_478 (*(uint *)(frame + 1096))
#define local_474 (*(uint *)(frame + 1100))
#define local_470 (*(uint *)(frame + 1104))
#define local_46c (*(uint *)(frame + 1108))
#define local_468 (*(uint *)(frame + 1112))
#define local_464 (*(uint *)(frame + 1116))
#define local_460 (*(uint *)(frame + 1120))
#define local_45c (*(uint *)(frame + 1124))
#define local_458 (*(uint *)(frame + 1128))
#define local_454 (*(uint *)(frame + 1132))
#define local_450 (*(uint *)(frame + 1136))
#define local_44c (*(uint *)(frame + 1140))
#define local_448 (*(uint *)(frame + 1144))
#define local_444 (*(uint *)(frame + 1148))
#define local_440 (*(uint *)(frame + 1152))
#define local_43c (*(uint *)(frame + 1156))
#define local_438 (*(uint *)(frame + 1160))
#define local_434 (*(uint *)(frame + 1164))
#define local_430 (*(uint (*)[235])(frame + 1168))
#define local_84 (*(uint (*)[25])(frame + 2108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d50
 */

void recovered_10000d50(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_r0 = 0;
  int iVar7;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  uint uVar8;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 uVar9;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined4 extraout_r3_09 = 0;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *extraout_r3_12;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  bool bVar16;

  if (param_2[8] != 0xc) {
    return;
  }
  if (param_2[9] != 3) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000d3c(local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0xdcU)));
  pcVar3 = (char *)recovered_10002a00((uint)param_2[10]);
  recovered_10002598((int)local_8a4,0x400,pcVar3);
  iVar4 = recovered_10002e04((int)param_2);
  iVar7 = (0x54584b57U);
  uVar13 = 0;
  local_484 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x16aU));
LAB_10000e7c:
    recovered_10002598((int)local_8a4,0x400,pcVar3);
  }
  else {
    iVar5 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)&local_484);
    if (iVar5 == 0) {
      pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x182U));
      goto LAB_10000e7c;
    }
    iVar5 = 5;
    while (iVar5 != 0xb) {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      uVar8 = uVar13;
      if (*(uint *)(param_2 + iVar1) != 0) {
        uVar8 = uVar13 | 2;
      }
      if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
        uVar8 = uVar13 | 1;
      }
      uVar13 = uVar8;
    }
    iVar5 = recovered_1000269c(((uintptr_t)pf_module_state + 0x86U));
    if (iVar5 != 0) {
      uVar13 = uVar13 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar13 = uVar13 | 2;
    }
    local_84[0] = local_484 | uVar13;
    if (((*param_1 == iVar7) && (99 < (uint)param_1[2])) &&
       (((code *)param_1[0x18] != (code *)0x0 &&
        (iVar7 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
        iVar7 != 0)))) {
      recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84)
      ;
      recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1b3U)),local_484);
      uVar8 = local_84[0];
      recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1c4U)),local_84[0]);
      recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1d4U)),uVar13);
      uVar13 = (uint)((uVar8 & uVar13) == uVar13);
    }
    else {
      recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x19aU)));
      uVar13 = 0;
    }
  }
  if (iVar4 == -1) {
    bVar2 = param_2[8];
    uVar8 = 0;
    uVar11 = 0;
    bVar15 = bVar2 == 1;
    local_484 = 0;
    if (bVar15) {
      bVar2 = param_2[9];
    }
    local_84[0] = 0;
    local_488 = 0;
    local_48c = 0;
    local_490 = 0;
    if (bVar15 && bVar2 == 6) {
      uVar6 = recovered_10002ea8(param_1,(int)param_2,5,0x1000,&local_484);
      uVar12 = local_484;
      if (uVar6 == 0) {
        recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x3e7U)));
      }
      else {
        recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3fdU)),local_484,
                           extraout_r3_05);
        recovered_10003024(param_1,uVar12,0,(int)local_84);
        recovered_10003024(param_1,local_484,4,(int)&local_488);
        recovered_10003024(param_1,local_484,0xc,(int)&local_48c);
        recovered_10003024(param_1,local_484,0x10,(int)&local_490);
        if (-1 < (int)local_488) {
          recovered_10003010(param_1,local_484,4,local_488 | 0x80000000);
          recovered_10003024(param_1,local_484,4,(int)&local_488);
        }
        uVar8 = local_488;
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x406U)),local_84[0]);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x40eU)),uVar8);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x416U)),local_48c);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x420U)),local_490);
        uVar8 = 1;
      }
    }
    bVar2 = param_2[8];
    local_484 = 0;
    bVar15 = bVar2 == 4;
    local_84[0] = 0;
    if (bVar15) {
      bVar2 = param_2[9];
    }
    local_488 = 0;
    local_48c = 0;
    if (bVar15 && bVar2 == 3) {
      uVar6 = recovered_10002ea8(param_1,(int)param_2,0,0x1000,&local_484);
      uVar12 = local_484;
      if (uVar6 == 0) {
        recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x42cU)));
      }
      else {
        recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x441U)),local_484,
                           extraout_r3_06);
        recovered_10003024(param_1,uVar12,0,(int)local_84);
        recovered_10003024(param_1,local_484,8,(int)&local_488);
        if ((local_488 & 1) == 0) {
          recovered_10003010(param_1,local_484,8,local_488 | 1);
          recovered_10003024(param_1,local_484,8,(int)&local_488);
        }
        recovered_1000305c(param_1,local_484 + 0xe,2,(int)&local_48c);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x449U)),local_84[0]);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x451U)),local_488);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x459U)),local_48c);
        uVar11 = 1;
      }
    }
    uVar12 = 0;
    local_484 = 0;
    local_84[0] = 0;
    local_488 = 0;
    local_48c = 0;
    if ((param_2[8] == 0xc) && (uVar12 = 0, param_2[9] == 3)) {
      uVar6 = recovered_10002ea8(param_1,(int)param_2,0,0x1000,&local_484);
      uVar12 = local_484;
      if (uVar6 == 0) {
        for (uVar12 = 0; uVar12 != 6; uVar12 = uVar12 + 1) {
          uVar6 = *(uint *)(param_2 + uVar12 * 4 + 0x14);
          local_490 = 0;
          if (((uVar6 & 1) != 0) &&
             (iVar7 = recovered_10003248(param_1,uVar6 & 0xfffc,2,(int)&local_490), iVar7 != 0)) {
            recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x485U)));
            recovered_100025ec((int)local_8a4,0x400,uVar12);
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x490U)),uVar6 & 0xfffffffc
                              );
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x496U)),local_490);
            uVar12 = 1;
            goto LAB_10001d88;
          }
        }
        recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4a0U)));
        uVar12 = 0;
      }
      else {
        recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x465U)),local_484,extraout_r3)
        ;
        recovered_10003024(param_1,uVar12,0,(int)local_84);
        recovered_10003024(param_1,local_484,4,(int)&local_488);
        recovered_10003024(param_1,local_484,8,(int)&local_48c);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x46dU)),local_84[0]);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x475U)),local_488);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x47dU)),local_48c);
        uVar12 = 1;
      }
    }
LAB_10001d88:
    uVar12 = uVar11 | uVar8 | uVar12;
    bVar2 = param_2[8];
    local_484 = 0;
    local_84[0] = 0;
    local_488 = 0;
    if (bVar2 == 2) {
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        uVar11 = recovered_10002ea8(param_1,(int)param_2,uVar8,0x1000,&local_484);
        if (uVar11 != 0) {
          recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b5U)));
          recovered_100025ec((int)local_8a4,0x400,uVar8);
          uVar11 = local_484;
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4c6U)),local_484,
                             extraout_r3_07);
          recovered_10003024(param_1,uVar11,0,(int)local_84);
          recovered_10003024(param_1,local_484,4,(int)&local_488);
          recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4d2U)),local_84[0]);
          pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x4deU));
          uVar11 = local_488;
LAB_10001f14:
          recovered_10002700((int)local_8a4,pcVar3,uVar11);
          break;
        }
        uVar11 = *(uint *)(param_2 + uVar8 * 4 + 0x14);
        if (((uVar11 & 1) != 0) &&
           (iVar7 = recovered_10003248(param_1,uVar11 & 0xfffc,2,(int)local_84), iVar7 != 0)) {
          recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4eaU)));
          recovered_100025ec((int)local_8a4,0x400,uVar8);
          recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4f9U)),uVar11 & 0xfffffffc)
          ;
          pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x503U));
          uVar11 = local_84[0];
          goto LAB_10001f14;
        }
      }
      bVar2 = param_2[8];
      if (uVar8 != 6) {
        uVar12 = 1;
      }
    }
    local_484 = 0;
    uVar8 = 0;
    local_84[0] = 0;
    if (bVar2 == 3) {
      for (uVar11 = 0; uVar11 != 6; uVar11 = uVar11 + 1) {
        uVar8 = recovered_10002ea8(param_1,(int)param_2,uVar11,0x1000,&local_484);
        if (uVar8 != 0) {
          recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x511U)));
          recovered_100025ec((int)local_8a4,0x400,uVar11);
          uVar8 = local_484;
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x522U)),local_484,
                             extraout_r3_08);
          recovered_10003024(param_1,uVar8,0,(int)local_84);
          if (extraout_r0_00 != 0) {
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x52eU)),local_84[0]);
          }
          break;
        }
      }
      uVar8 = 0;
      if (uVar11 != 6) {
        uVar8 = 1;
      }
    }
    uVar8 = uVar12 | uVar8 | uVar13;
    if (uVar8 == 0) {
      local_484 = 0;
      local_84[0] = 0;
      for (uVar13 = 0; uVar13 != 6; uVar13 = uVar13 + 1) {
        uVar8 = recovered_10002ea8(param_1,(int)param_2,uVar13,0x1000,&local_484);
        if (uVar8 != 0) {
          recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x53aU)));
          recovered_100025ec((int)local_8a4,0x400,uVar13);
          uVar8 = local_484;
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x544U)),local_484,
                             extraout_r3_09);
          recovered_10003024(param_1,uVar8,0,(int)local_84);
          if (extraout_r0_01 != 0) {
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x549U)),local_84[0]);
          }
          break;
        }
      }
      uVar8 = 0;
      if (uVar13 != 6) {
        uVar8 = 1;
      }
    }
    goto LAB_100020d8;
  }
  uVar8 = recovered_10002e04((int)param_2);
  if (uVar8 == 0xffffffff) {
    uVar8 = 0;
  }
  else {
    recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1e3U)),uVar8);
    local_84[0] = 0;
    for (iVar7 = 0; iVar7 != 0x58; iVar7 = iVar7 + 1) {
      *(undefined1 *)((int)local_430 + iVar7 + -0x54) = 0;
    }
    if (((param_2[0x12] & 0x10) != 0) &&
       (iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1,
                                   (int)local_84), iVar7 != 0)) {
      uVar8 = 0;
      while( true ) {
        bVar16 = 0x1e < uVar8;
        bVar15 = uVar8 == 0x1f;
        if (uVar8 < 0x20) {
          bVar16 = 0xae < local_84[0] - 0x40;
          bVar15 = local_84[0] - 0x40 == 0xaf;
        }
        if (bVar16 && !bVar15) break;
        local_488 = 0;
        local_48c = 0;
        local_490 = 0;
        local_494 = 0;
        local_498 = 0;
        local_49c = 0;
        iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                   local_84[0] & 0xffff,1,(int)&local_488);
        if ((iVar7 == 0) ||
           (iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_84[0] & 0xffff) + 1 & 0xffff,1,(int)&local_48c),
           iVar7 == 0)) break;
        uVar11 = extraout_r1;
        if (local_488 == 9) {
          iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     (local_84[0] & 0xffff) + 3 & 0xffff,1,(int)&local_490);
          uVar11 = extraout_r1_00;
          if (iVar7 != 0) {
            iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_84[0] & 0xffff) + 4 & 0xffff,1,(int)&local_494);
            uVar11 = extraout_r1_01;
            if (iVar7 != 0) {
              iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_84[0] & 0xffff) + 8 & 0xffff,4,(int)&local_498);
              uVar11 = extraout_r1_02;
              if (iVar7 != 0) {
                iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_84[0] & 0xffff) + 0xc & 0xffff,4,(int)&local_49c);
                uVar11 = extraout_r1_03;
                if (iVar7 != 0) {
                  local_4a0 = 0;
                  local_460 = local_460 + 1;
                  if (local_490 == 1) {
                    bVar15 = recovered_10002e44(param_1,(int)param_2,local_494,local_498,local_49c,
                                                (int *)&local_4a0);
                    uVar11 = extraout_r1_04;
                    if (bVar15) {
                      local_484 = local_4a0;
                      local_474 = local_494;
                      goto LAB_10001398;
                    }
                  }
                  if (local_490 == 2) {
                    bVar15 = recovered_10002e44(param_1,(int)param_2,local_494,local_498,local_49c,
                                                (int *)&local_4a0);
                    uVar11 = extraout_r1_05;
                    if (bVar15) {
                      local_4a4 = 0;
                      local_480 = local_4a0;
                      local_470 = local_494;
                      iVar7 = recovered_1000298c(param_1,(uint)*param_2,(uint)param_2[1],
                                                 (uint)param_2[2],
                                                 (local_84[0] & 0xffff) + 0x10 & 0xffff,4,
                                                 (int)&local_4a4);
                      uVar11 = extraout_r1_06;
                      if (iVar7 != 0) {
                        local_464 = local_4a4;
                      }
                      goto LAB_10001398;
                    }
                  }
                  if (local_490 == 3) {
                    bVar15 = recovered_10002e44(param_1,(int)param_2,local_494,local_498,local_49c,
                                                (int *)&local_4a0);
                    uVar11 = extraout_r1_07;
                    if (bVar15) {
                      local_47c = local_4a0;
                      local_46c = local_494;
                      goto LAB_10001398;
                    }
                  }
                  if (local_490 == 4) {
                    bVar15 = recovered_10002e44(param_1,(int)param_2,local_494,local_498,local_49c,
                                                (int *)&local_4a0);
                    uVar11 = extraout_r1_08;
                    if (bVar15) {
                      local_478 = local_4a0;
                      local_468 = local_494;
                    }
                  }
                }
              }
            }
          }
        }
LAB_10001398:
        if (local_48c != 0) {
          uVar11 = local_84[0];
        }
        if (local_48c == 0 || local_48c == uVar11) break;
        local_84[0] = local_48c;
        uVar8 = uVar8 + 1;
      }
      if (local_484 != 0) {
        local_84[0] = 0;
        recovered_10002fe0(param_1,local_484,0x14,(int)&local_44c);
        recovered_10002ff8(param_1,local_484,0);
        recovered_10003010(param_1,local_484,0,0);
        recovered_10003024(param_1,local_484,4,(int)&local_45c);
        recovered_10003010(param_1,local_484,0,1);
        recovered_10003024(param_1,local_484,4,(int)&local_458);
        local_450 = local_458 & 1;
        local_454 = 0;
        recovered_10003010(param_1,local_484,8,0);
        recovered_10003010(param_1,local_484,0xc,local_454);
        recovered_10003010(param_1,local_484,8,1);
        recovered_10003010(param_1,local_484,0xc,local_450);
        if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x7b < (uint)param_1[2]))
           && ((code *)param_1[0x1e] != (code *)0x0)) {
          (*(code *)param_1[0x1e])();
        }
        recovered_10002ff8(param_1,local_484,1);
        recovered_10002ff8(param_1,local_484,3);
        recovered_10002ff8(param_1,local_484,0xb);
        recovered_10002fe0(param_1,local_484,0x14,(int)&local_448);
        recovered_10003040(param_1,local_484,0x12,(int)&local_444);
        recovered_10002fe0(param_1,local_484,0x15,(int)local_430);
        uVar8 = 0;
        if (local_484 != 0) {
          recovered_100030c8(param_1,local_484 + 0x16,2,0);
          uVar8 = local_484;
        }
        recovered_10003040(param_1,uVar8,0x18,(int)&local_440);
        recovered_10003040(param_1,local_484,0x1c,(int)&local_43c);
        recovered_10003040(param_1,local_484,0x1e,(int)local_84);
        if ((extraout_r0 != 0) && (local_438 = local_84[0], local_480 != 0)) {
          local_434 = local_464 * local_84[0] + local_480;
        }
        recovered_1000312c((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x213U)),
                           ((uintptr_t)pf_module_state + 0x223U));
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x208U)),local_460);
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x22aU)),local_474);
        recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x23aU)),local_484,
                           extraout_r3_00);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x247U)),local_45c);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x25dU)),local_458);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x273U)),local_454);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x289U)),local_450);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x29fU)),local_44c);
        recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2b8U)),local_448);
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2d0U)),local_444);
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2ddU)),local_440);
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2eeU)),local_43c);
        uVar8 = local_434;
        uVar9 = extraout_r3_01;
        if (local_434 != 0) {
          recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x302U)),local_470);
          recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x312U)),local_464);
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x329U)),uVar8,extraout_r3_02
                            );
          uVar9 = extraout_r3_03;
        }
        if (local_47c != 0) {
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x33cU)),local_47c,uVar9);
          uVar9 = extraout_r3_04;
        }
        if (local_478 != 0) {
          recovered_100031a0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x346U)),local_478,uVar9);
        }
        recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x359U)),local_430[0]);
        iVar7 = ((uintptr_t)pf_module_state + 0x37cU);
        if ((local_448 & 8) == 0) {
          iVar7 = ((uintptr_t)pf_module_state + 0x388U);
        }
        recovered_1000312c((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x370U)),iVar7);
        uVar8 = 1;
        goto LAB_100017f4;
      }
    }
    if (local_460 != 0) {
      recovered_10002534((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x208U)),local_460);
    }
    if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        local_484 = 0;
        local_84[0] = 0;
        if ((*(uint *)(param_2 + uVar8 * 4 + 0x14) & 1) != 0) {
          uVar12 = *(uint *)(param_2 + uVar8 * 4 + 0x14) & 0xfffffffc;
          uVar11 = uVar12 + 0x12 & 0xffff;
          iVar7 = recovered_10003248(param_1,uVar11,1,(int)&local_484);
          if (iVar7 != 0) {
            recovered_1000312c((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x213U)),
                               ((uintptr_t)pf_module_state + 0x395U));
            recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x39fU)));
            recovered_100025ec((int)local_8a4,0x400,uVar8);
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3b3U)),uVar12);
            recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3c2U)),local_484);
            recovered_100032a0(param_1,uVar11);
            recovered_100032a0(param_1,uVar11);
            uVar8 = 1;
            iVar7 = recovered_10003248(param_1,uVar11,1,(int)local_84);
            if (iVar7 != 0) {
              recovered_10002700((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3d5U)),local_84[0]);
            }
            goto LAB_100017f4;
          }
        }
      }
    }
    recovered_10002598((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x1ecU)));
    uVar8 = 0;
  }
LAB_100017f4:
  uVar8 = uVar8 | uVar13;
LAB_100020d8:
  pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x146U));
  if (uVar8 == 0) {
    pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x156U));
  }
  recovered_10002598((int)local_8a4,0x400,pcVar3);
  iVar7 = recovered_10002a90((int)param_2);
  recovered_10000d3c((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xfbU)));
  recovered_10002598((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x552U)));
  recovered_10002768((int)local_84,0x60,(uint)*param_2,2);
  pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x554U));
  recovered_10002598((int)local_84,0x60,pcVar3);
  recovered_10002768((int)local_84,0x60,(uint)param_2[1],2);
  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x556U));
  recovered_10002598((int)local_84,0x60,pcVar14);
  recovered_100025ec((int)local_84,0x60,(uint)param_2[2]);
  recovered_10000d3c((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x558U)));
  recovered_10002768((int)&local_484,0x400,(uint)*param_2,2);
  recovered_10002598((int)&local_484,0x400,pcVar3);
  recovered_10002768((int)&local_484,0x400,(uint)param_2[1],2);
  recovered_10002598((int)&local_484,0x400,pcVar14);
  recovered_100025ec((int)&local_484,0x400,(uint)param_2[2]);
  recovered_10002598((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x55dU)));
  recovered_10002768((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10002598((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x566U)));
  recovered_10002768((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10002598((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x56fU)));
  recovered_10002768((int)&local_484,0x400,(uint)param_2[8],2);
  recovered_10002598((int)&local_484,0x400,pcVar14);
  recovered_10002768((int)&local_484,0x400,(uint)param_2[9],2);
  recovered_10002598((int)&local_484,0x400,pcVar14);
  recovered_10002768((int)&local_484,0x400,(uint)param_2[10],2);
  recovered_10002598((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x577U)));
  recovered_10002768((int)&local_484,0x400,(uint)param_2[0xb],2);
  recovered_10002700((int)&local_484,(char *)(((uintptr_t)pf_module_state + 0x582U)),*(uint *)(param_2 + 0x10));
  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x58aU));
  pcVar3 = (char *)(((uintptr_t)pf_module_state + 0xd9U));
  pcVar10 = extraout_r3_10;
  for (uVar13 = 0; uVar13 != 6; uVar13 = uVar13 + 1) {
    uVar8 = *(uint *)(param_2 + uVar13 * 4 + 0x14);
    if (uVar8 != 0) {
      recovered_10002598((int)&local_484,0x400,pcVar14);
      recovered_100025ec((int)&local_484,0x400,uVar13);
      recovered_10002598((int)&local_484,0x400,pcVar3);
      recovered_10002768((int)&local_484,0x400,uVar8,8);
      pcVar10 = extraout_r3_11;
    }
  }
  if (local_8a4[0] != '\0') {
    recovered_10002598((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xd7U)));
    recovered_10002598((int)&local_484,0x400,local_8a4);
    pcVar10 = extraout_r3_12;
  }
  if (param_1 != (int *)0x0) {
    pcVar10 = (code *)param_1[3];
  }
  if (param_1 != (int *)0x0 && pcVar10 != (code *)0x0) {
    (*pcVar10)(local_84,iVar7,&local_484);
  }
  return;
}

#undef DAT_10001d20
#undef DAT_10001d24
#undef DAT_10001e24
#undef DAT_10001e28
#undef DAT_10001f84
#undef DAT_10001f88
#undef DAT_10002058
#undef DAT_1000205c
#undef DAT_100023f0
#undef DAT_100023f4
#undef DAT_100023f8
#undef DAT_100023fc
#undef DAT_10002400
#undef DAT_10002404
#undef DAT_10002408
#undef DAT_1000240c
#undef DAT_10002410
#undef DAT_10002414
#undef DAT_10002418
#undef DAT_1000241c
#undef DAT_10002420
#undef DAT_10002424
#undef DAT_10002428
#undef DAT_1000242c
#undef DAT_10002430
#undef DAT_10002434
#undef DAT_10002438
#undef DAT_1000243c
#undef DAT_10002440
#undef DAT_10002444
#undef DAT_10002448
#undef DAT_1000244c
#undef DAT_10002450
#undef DAT_10002454
#undef DAT_10002458
#undef DAT_1000245c
#undef DAT_10002460
#undef DAT_10002464
#undef DAT_10002468
#undef DAT_1000246c
#undef DAT_10002470
#undef DAT_10002474
#undef DAT_10002478
#undef DAT_1000247c
#undef DAT_10002480
#undef DAT_10002484
#undef DAT_10002488
#undef DAT_1000248c
#undef DAT_10002490
#undef DAT_10002494
#undef DAT_10002498
#undef DAT_1000249c
#undef DAT_100024a0
#undef DAT_100024a4
#undef DAT_100024a8
#undef DAT_100024ac
#undef DAT_100024b0
#undef DAT_100024b4
#undef DAT_100024b8
#undef DAT_100024bc
#undef DAT_100024c0
#undef DAT_100024c4
#undef DAT_100024c8
#undef DAT_100024cc
#undef DAT_100024d0
#undef DAT_100024d4
#undef DAT_100024d8
#undef DAT_100024dc
#undef DAT_100024e0
#undef DAT_100024e4
#undef DAT_100024e8
#undef DAT_100024ec
#undef DAT_100024f0
#undef DAT_100024f4
#undef DAT_100024f8
#undef DAT_100024fc
#undef DAT_10002500
#undef DAT_10002504
#undef DAT_10002508
#undef DAT_1000250c
#undef DAT_10002510
#undef DAT_10002514
#undef DAT_10002518
#undef DAT_1000251c
#undef DAT_10002520
#undef DAT_10002524
#undef DAT_10002528
#undef DAT_1000252c
#undef DAT_10002530
#undef local_8a4
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_84

#undef DAT_10002590
#define DAT_10002590 (*(int *)(0x10002590U))
#undef DAT_10002594
#define DAT_10002594 (*(int *)(0x10002594U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002534
 */

void recovered_10002534(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd7U)));
  recovered_10002598(param_1,0x400,param_2);
  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd9U)));
  recovered_100025ec(param_1,0x400,param_3);
  return;
}

#undef DAT_10002590
#undef DAT_10002594

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002598
 */

void recovered_10002598(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_1000269c(param_1);
  if (param_1 == 0 || param_3 == (char *)0x0) {
    return;
  }
  while( true ) {
    if ((*param_3 == '\0') || (param_2 <= uVar1 + 1)) break;
    *(char *)(param_1 + uVar1) = *param_3;
    uVar1 = uVar1 + 1;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ec
 */

void recovered_100025ec(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_100026c4(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100032e8(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_100026c4(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000269c
 */

int recovered_1000269c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c4
 */

void recovered_100026c4(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000269c(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10002760
#define DAT_10002760 (*(int *)(0x10002760U))
#undef DAT_10002764
#define DAT_10002764 (*(int *)(0x10002764U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002700
 */

void recovered_10002700(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd7U)));
  recovered_10002598(param_1,0x400,param_2);
  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd9U)));
  recovered_10002768(param_1,0x400,param_3,8);
  return;
}

#undef DAT_10002760
#undef DAT_10002764

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002768
 */

void recovered_10002768(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; uVar4 = uVar4 - 4, param_4 != 0; param_4 = param_4 + -1) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    recovered_100026c4(param_1,param_2,bVar3);
  }
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_100027c8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_1000298c((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_1000298c((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_1000298c((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_1000298c((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_1000298c((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100029fc
#define DAT_100029fc (*(uint8_t * *)(0x100029fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000298c
 */

undefined4
recovered_1000298c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
    if (param_7 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_7 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100029fc

#undef DAT_10002a74
#define DAT_10002a74 (*(uint32_t *)(0x10002a74U))
#undef DAT_10002a78
#define DAT_10002a78 (*(int *)(0x10002a78U))
#undef DAT_10002a7c
#define DAT_10002a7c (*(int *)(0x10002a7cU))
#undef DAT_10002a80
#define DAT_10002a80 (*(int *)(0x10002a80U))
#undef DAT_10002a84
#define DAT_10002a84 (*(int *)(0x10002a84U))
#undef DAT_10002a88
#define DAT_10002a88 (*(int *)(0x10002a88U))
#undef DAT_10002a8c
#define DAT_10002a8c (*(int *)(0x10002a8cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a00
 */

int recovered_10002a00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return (int)&(*(uint32_t *)(uint64_t[]){0xfe800000fbfULL}) + (*(uint32_t *)(uint64_t[]){0xfe800000fbfULL});
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x12eU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x119U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x11eU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x123U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x114U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x137U);
  }
  return iVar1;
}

#undef DAT_10002a74
#undef DAT_10002a78
#undef DAT_10002a7c
#undef DAT_10002a80
#undef DAT_10002a84
#undef DAT_10002a88
#undef DAT_10002a8c

#undef DAT_10002c98
#define DAT_10002c98 (*(uint *)(0x10002c98U))
#undef DAT_10002dac
#define DAT_10002dac (*(uint32_t *)(0x10002dacU))
#undef DAT_10002db0
#define DAT_10002db0 (*(int *)(0x10002db0U))
#undef DAT_10002db4
#define DAT_10002db4 (*(int *)(0x10002db4U))
#undef DAT_10002db8
#define DAT_10002db8 (*(int *)(0x10002db8U))
#undef DAT_10002dbc
#define DAT_10002dbc (*(int *)(0x10002dbcU))
#undef DAT_10002dc0
#define DAT_10002dc0 (*(int *)(0x10002dc0U))
#undef DAT_10002dc4
#define DAT_10002dc4 (*(int *)(0x10002dc4U))
#undef DAT_10002dc8
#define DAT_10002dc8 (*(int *)(0x10002dc8U))
#undef DAT_10002dcc
#define DAT_10002dcc (*(int *)(0x10002dccU))
#undef DAT_10002dd0
#define DAT_10002dd0 (*(int *)(0x10002dd0U))
#undef DAT_10002dd4
#define DAT_10002dd4 (*(int *)(0x10002dd4U))
#undef DAT_10002dd8
#define DAT_10002dd8 (*(int *)(0x10002dd8U))
#undef DAT_10002ddc
#define DAT_10002ddc (*(int *)(0x10002ddcU))
#undef DAT_10002de0
#define DAT_10002de0 (*(int *)(0x10002de0U))
#undef DAT_10002de4
#define DAT_10002de4 (*(int *)(0x10002de4U))
#undef DAT_10002de8
#define DAT_10002de8 (*(int *)(0x10002de8U))
#undef DAT_10002dec
#define DAT_10002dec (*(int *)(0x10002decU))
#undef DAT_10002df0
#define DAT_10002df0 (*(int *)(0x10002df0U))
#undef DAT_10002df4
#define DAT_10002df4 (*(int *)(0x10002df4U))
#undef DAT_10002df8
#define DAT_10002df8 (*(int *)(0x10002df8U))
#undef DAT_10002dfc
#define DAT_10002dfc (*(int *)(0x10002dfcU))
#undef DAT_10002e00
#define DAT_10002e00 (*(int *)(0x10002e00U))
#undef switchdataD_10002c98
#define switchdataD_10002c98 (*(uint *)(0x10002c98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

int recovered_10002a90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10002c94_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x649U);
    }
LAB_10002c74:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10002c94_caseD_5;
    iVar3 = (int)&DAT_10002c98 + (0x1301U);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x69bU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x688U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x6aeU);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002cf8:
        iVar3 = recovered_10002a00((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10002c94_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x58fU);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x640U);
      }
      goto LAB_10002c74;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10002c34:
        return ((uintptr_t)pf_module_state + 0x66eU);
      }
      goto LAB_10002c74;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10002c34;
      goto LAB_10002c74;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x665U);
      }
      goto LAB_10002c74;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x654U);
      }
      goto LAB_10002c74;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x62aU);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002cf8;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return (int)&(*(uint32_t *)(uint64_t[]){0x139200001413ULL}) + (0x11aeU);
        }
      }
      goto LAB_10002c74;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x65dU);
      }
      goto LAB_10002c74;
    }
    if (sVar2 != 0x1af4) goto LAB_10002c74;
    iVar3 = ((uintptr_t)pf_module_state + 0x59aU);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002b34_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x5a9U);
      break;
    case 0x1043:
switchD_10002b34_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x5cdU);
      break;
    case 0x1044:
switchD_10002b34_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x5f0U);
      break;
    case 0x1045:
switchD_10002b34_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x5baU);
      break;
    case 0x1046:
    case 0x1047:
    case 0x1049:
    case 0x104a:
    case 0x104b:
    case 0x104c:
    case 0x104d:
    case 0x104e:
    case 0x104f:
    case 0x1051:
switchD_10002b34_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x61fU);
      break;
    case 0x1048:
switchD_10002b34_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x5e0U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x5ffU);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x60eU);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002b34_caseD_1042;
      case 0x1002:
        goto switchD_10002b34_caseD_1045;
      case 0x1003:
        goto switchD_10002b34_caseD_1043;
      case 0x1004:
        goto switchD_10002b34_caseD_1048;
      case 0x1005:
        goto switchD_10002b34_caseD_1044;
      default:
        goto switchD_10002b34_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10002c98
#undef DAT_10002dac
#undef DAT_10002db0
#undef DAT_10002db4
#undef DAT_10002db8
#undef DAT_10002dbc
#undef DAT_10002dc0
#undef DAT_10002dc4
#undef DAT_10002dc8
#undef DAT_10002dcc
#undef DAT_10002dd0
#undef DAT_10002dd4
#undef DAT_10002dd8
#undef DAT_10002ddc
#undef DAT_10002de0
#undef DAT_10002de4
#undef DAT_10002de8
#undef DAT_10002dec
#undef DAT_10002df0
#undef DAT_10002df4
#undef DAT_10002df8
#undef DAT_10002dfc
#undef DAT_10002e00
#undef switchdataD_10002c98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e04
 */

int recovered_10002e04(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = -1;
  if (param_1 == 0) {
    return -1;
  }
  if (*(short *)(param_1 + 4) == 0x1af4) {
    uVar2 = (uint)*(ushort *)(param_1 + 6);
    if ((uVar2 & 0xffffffc0) == 0x1000) {
      return uVar2 - 0x1000;
    }
    if ((uVar2 & 0xffffffc0) == 0x1040) {
      iVar1 = uVar2 - 0x1040;
    }
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e44
 */

bool recovered_10002e44(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_10002ea8(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_10002fdc
#define DAT_10002fdc (*(int *)(0x10002fdcU))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea8
 */

uint recovered_10002ea8(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar3 = 0;
  if ((param_5 != (undefined4 *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + param_3 * 4 + 0x10) & 7) != 4)))) {
    uVar4 = *(uint *)(param_2 + 0x14 + param_3 * 4);
    if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
      iVar2 = 0;
      if ((uVar4 & 6) == 4) {
        if (4 < param_3) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x14 + param_3 * 4 + 4);
      }
      if ((param_4 != 0) && (uVar4 = uVar4 & 0xfffffff0, uVar4 != 0 || iVar2 != 0)) {
        *param_5 = 0;
        local_1c = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
          if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
            if ((iVar2 == 0) &&
               ((0x67 < (uint)param_1[2] && ((code *)param_1[0x19] != (code *)0x0)))) {
              iVar2 = (*(code *)param_1[0x19])(uVar4,0,param_4,&local_1c);
              bVar5 = iVar2 != 0;
              uVar1 = 0;
              if (bVar5) {
                uVar1 = local_1c;
              }
              uVar3 = (uint)bVar5;
              if (bVar5) {
                *param_5 = uVar1;
              }
            }
          }
          else {
            uVar3 = (*(code *)param_1[0x2e])(uVar4,iVar2,param_4,param_5);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10002fdc
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe0
 */

void recovered_10002fe0(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_1000305c(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff8
 */

void recovered_10002ff8(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100030c8(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003010
 */

void recovered_10003010(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100030c8(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003024
 */

void recovered_10003024(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_1000305c(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003040
 */

void recovered_10003040(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_1000305c(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_100030c4
#define DAT_100030c4 (*(uint8_t * *)(0x100030c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000305c
 */

undefined4 recovered_1000305c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (0x54584b57U))) {
    UNRECOVERED_JUMPTABLE = (0x54584b57U);
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100030b4;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100030b4:
                    /* WARNING: Could not recover jumptable at 0x100030c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100030c4

#undef DAT_10003128
#define DAT_10003128 (*(int *)(0x10003128U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c8
 */

undefined4 recovered_100030c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10003110;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10003110:
                    /* WARNING: Could not recover jumptable at 0x1000311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003128

#undef DAT_10003194
#define DAT_10003194 (*(int *)(0x10003194U))
#undef DAT_10003198
#define DAT_10003198 (*(int *)(0x10003198U))
#undef DAT_1000319c
#define DAT_1000319c (*(int *)(0x1000319cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000312c
 */

void recovered_1000312c(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd7U)));
  recovered_10002598(param_1,0x400,param_2);
  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd9U)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0xdbU));
  if (param_3 != 0) {
    pcVar1 = (char *)param_3;
  }
  recovered_10002598(param_1,0x400,pcVar1);
  return;
}

#undef DAT_10003194
#undef DAT_10003198
#undef DAT_1000319c

#undef DAT_10003240
#define DAT_10003240 (*(int *)(0x10003240U))
#undef DAT_10003244
#define DAT_10003244 (*(int *)(0x10003244U))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a0
 */

void recovered_100031a0(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uStack_24 = 0;
  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd7U)));
  recovered_10002598(param_1,0x400,param_2);
  recovered_10002598(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xd9U)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_10002598(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}

#undef DAT_10003240
#undef DAT_10003244
#undef uStack_24

#undef DAT_1000329c
#define DAT_1000329c (*(int *)(0x1000329cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

undefined4 recovered_10003248(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10003298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_1000329c

#undef DAT_100032e4
#define DAT_100032e4 (*(int *)(0x100032e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

void recovered_100032a0(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100032e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_100032e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032e8
 */

uint recovered_100032e8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003338
 */

uint recovered_10003338(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

uint recovered_10003370(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

uint recovered_100033e0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003448
 */

undefined8 recovered_10003448(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000352c
 */

undefined8 recovered_1000352c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ac
 */

undefined8 recovered_100035ac(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;

  uVar1 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar1) - uVar1;
  uVar2 = (int)param_2 >> 0x1f;
  uVar13 = (param_4 ^ uVar1) - (uVar1 + ((param_3 ^ uVar1) < uVar1));
  uVar11 = (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2));
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar10 = 0x3f;
    do {
      uVar6 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar5 = uVar10 - 0x20;
      uVar4 = (param_1 ^ uVar2) - uVar2 >> (uVar10 & 0xff) | uVar11 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar4 = uVar11 >> (uVar5 & 0xff);
      }
      uVar7 = uVar4 & 1 | uVar9 << 1;
      bVar15 = uVar6 <= uVar13;
      bVar3 = (uint)(uVar8 <= uVar7) <= uVar6 - uVar13;
      uVar4 = uVar6 - (uVar13 + (uVar8 > uVar7));
      uVar9 = uVar7 - uVar8;
      if (bVar15 && bVar3) {
        uVar4 = uVar6;
        uVar9 = uVar7;
      }
      uVar6 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 1 << (uVar5 & 0xff);
      }
      if (!bVar15 || !bVar3) {
        uVar14 = uVar14 | uVar6;
      }
      uVar6 = 1 << (uVar10 & 0xff);
      if (-1 < (int)uVar5) {
        uVar6 = 0;
      }
      if (!bVar15 || !bVar3) {
        uVar12 = uVar12 | uVar6;
      }
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
  }
  uVar11 = -uVar12;
  uVar8 = -(uVar14 + (uVar12 != 0));
  if (-uVar2 == -uVar1) {
    uVar11 = uVar12;
    uVar8 = uVar14;
  }
  return CONCAT44(uVar8,uVar11);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036cc
 */

undefined8 recovered_100036cc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar7) - uVar7;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar7) - (uVar7 + ((param_3 ^ uVar7) < uVar7));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0x3f;
    do {
      uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
      uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)(uVar2 - 0x20)) {
        uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
      }
      uVar6 = uVar4 & 1 | uVar3 << 1;
      uVar3 = uVar6 - uVar8;
      uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
      if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
        uVar3 = uVar6;
        uVar4 = uVar5;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  uVar1 = -uVar3;
  uVar7 = -(uVar4 + (uVar3 != 0));
  if (-1 < (int)param_2) {
    uVar1 = uVar3;
    uVar7 = uVar4;
  }
  return CONCAT44(uVar7,uVar1);
}


#undef DAT_10003808
#define DAT_10003808 (*(double *)(0x10003808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003788
 */

undefined8 recovered_10003788(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = pf_bits_double(CONCAT44(param_2,param_1));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10003808

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003810
 */

undefined8 recovered_10003810(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003788(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003788(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000385c
 */

void recovered_1000385c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003788(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x6dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000386c
 */

void recovered_1000386c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x6c4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000387c
 */

double recovered_1000387c(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_1 == 0 && param_2 == 0) {
    return 0.0;
  }
  dVar2 = 1.0;
  dVar3 = 0.0;
  do {
    dVar4 = dVar3 + dVar2;
    dVar2 = dVar2 + dVar2;
    if ((param_1 & 1) == 0) {
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 1;
    param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
  } while (param_1 != 0 || param_2 != 0);
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c4
 */

void recovered_100038c4(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_1000387c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_1000387c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038ec
 */

float recovered_100038ec(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000387c(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003908
 */

float recovered_10003908(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100038c4(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
