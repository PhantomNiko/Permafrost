/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Pooka's Free Software License. Recovered PC-relative descriptor. */
void *recovered_100042c0(void){return pf_module_state+0x47b0U;}


#undef DAT_10004578
#define DAT_10004578 (*(int *)(0x10004578U))
#undef DAT_1000457c
#define DAT_1000457c (*(int *)(0x1000457cU))
#undef DAT_10004580
#define DAT_10004580 (*(int *)(0x10004580U))
#undef DAT_10004584
#define DAT_10004584 (*(int *)(0x10004584U))
#undef DAT_10004588
#define DAT_10004588 (*(int *)(0x10004588U))
#undef DAT_1000458c
#define DAT_1000458c (*(int *)(0x1000458cU))
#undef DAT_10004590
#define DAT_10004590 (*(int *)(0x10004590U))
#undef DAT_10004594
#define DAT_10004594 (*(int *)(0x10004594U))
#undef DAT_10004598
#define DAT_10004598 (*(int *)(0x10004598U))
#undef DAT_1000459c
#define DAT_1000459c (*(int *)(0x1000459cU))
#undef DAT_100045a0
#define DAT_100045a0 (*(int *)(0x100045a0U))
#undef DAT_100045a4
#define DAT_100045a4 (*(int *)(0x100045a4U))
#undef DAT_100045a8
#define DAT_100045a8 (*(int *)(0x100045a8U))
#define auStack_4fc (*(undefined1 (*)[1024])(frame + 20))
#define local_fc (*(uint *)(frame + 1044))
#define abStack_f8 (*(byte (*)[12])(frame + 1048))
#define local_ec (*(char *)(frame + 1060))
#define local_94 (*(uint *)(frame + 1148))
#define local_58 (*(uint *)(frame + 1208))
#define local_54 (*(uint *)(frame + 1212))
#define abStack_50 (*(byte (*)[48])(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d0
 */

int recovered_100042d0(int *api)

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
    recovered_100045ac(auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    recovered_10005d94((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x84U)));
    recovered_10005de8((int)auStack_4fc,0x60,api[1]);
    recovered_10005d94((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x93U)));
    if (((*api == iVar2) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(auStack_4fc);
    }
    recovered_100045ac(auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x34U)));
    if (((*api == iVar2) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_f8), iVar1 != 0))))
    {
      recovered_10005d30((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x9aU)),local_94);
      recovered_10005efc((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xaaU)),local_58);
      recovered_10005d30((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xb9U)),local_54);
    }
    if (((code *)api[3] != (code *)0x0) &&
       (iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0xccU),((uintptr_t)pf_module_state + 0x56U),auStack_4fc),
       iVar1 != 0)) {
      uVar3 = 0;
      if ((*api == iVar2) && ((0x5f < (uint)api[2] && (api[0x17] != 0)))) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
            iVar2 = recovered_10005fc4(api,uVar3 & 0xff,uVar5 & 0xff,0,abStack_f8);
            if ((iVar2 != 0) &&
               (recovered_100045c0(api,abStack_f8,(int *)&local_fc), local_ec < '\0')) {
              for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
                iVar2 = recovered_10005fc4(api,uVar3 & 0xff,uVar5 & 0xff,uVar6 & 0xff,abStack_50);
                if (iVar2 != 0) {
                  recovered_100045c0(api,abStack_50,(int *)&local_fc);
                }
              }
            }
          }
        }
        uVar3 = local_fc;
      }
      recovered_10005d30((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x69U)),uVar3);
      iVar4 = 1;
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(((uintptr_t)pf_module_state + 0xccU),((uintptr_t)pf_module_state + 0x56U),auStack_4fc);
      }
    }
  }
  return iVar4;
}

#undef DAT_10004578
#undef DAT_1000457c
#undef DAT_10004580
#undef DAT_10004584
#undef DAT_10004588
#undef DAT_1000458c
#undef DAT_10004590
#undef DAT_10004594
#undef DAT_10004598
#undef DAT_1000459c
#undef DAT_100045a0
#undef DAT_100045a4
#undef DAT_100045a8
#undef auStack_4fc
#undef local_fc
#undef abStack_f8
#undef local_ec
#undef local_94
#undef local_58
#undef local_54
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045ac
 */

void recovered_100045ac(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10005d94((int)param_1,param_2,param_3);
  return;
}


#undef DAT_1000544c
#define DAT_1000544c (*(uint32_t *)(0x1000544cU))
#undef DAT_10005450
#define DAT_10005450 (*(int *)(0x10005450U))
#undef DAT_10005454
#define DAT_10005454 (*(int *)(0x10005454U))
#undef DAT_10005458
#define DAT_10005458 (*(int *)(0x10005458U))
#undef DAT_1000545c
#define DAT_1000545c (*(int *)(0x1000545cU))
#undef DAT_10005460
#define DAT_10005460 (*(int *)(0x10005460U))
#undef DAT_10005464
#define DAT_10005464 (*(int *)(0x10005464U))
#undef DAT_10005468
#define DAT_10005468 (*(int *)(0x10005468U))
#undef DAT_1000546c
#define DAT_1000546c (*(int *)(0x1000546cU))
#undef DAT_100057a8
#define DAT_100057a8 (*(int *)(0x100057a8U))
#undef DAT_100057ac
#define DAT_100057ac (*(int *)(0x100057acU))
#undef DAT_100057b0
#define DAT_100057b0 (*(int *)(0x100057b0U))
#undef DAT_100057b4
#define DAT_100057b4 (*(int *)(0x100057b4U))
#undef DAT_100057b8
#define DAT_100057b8 (*(int *)(0x100057b8U))
#undef DAT_100057bc
#define DAT_100057bc (*(int *)(0x100057bcU))
#undef DAT_100057c0
#define DAT_100057c0 (*(int *)(0x100057c0U))
#undef DAT_100057c4
#define DAT_100057c4 (*(int *)(0x100057c4U))
#undef DAT_100057c8
#define DAT_100057c8 (*(int *)(0x100057c8U))
#undef DAT_100057cc
#define DAT_100057cc (*(int *)(0x100057ccU))
#undef DAT_100057d0
#define DAT_100057d0 (*(int *)(0x100057d0U))
#undef DAT_100057d4
#define DAT_100057d4 (*(int *)(0x100057d4U))
#undef DAT_100057d8
#define DAT_100057d8 (*(int *)(0x100057d8U))
#undef DAT_100057dc
#define DAT_100057dc (*(int *)(0x100057dcU))
#undef DAT_100057e0
#define DAT_100057e0 (*(int *)(0x100057e0U))
#undef DAT_100057e4
#define DAT_100057e4 (*(int *)(0x100057e4U))
#undef DAT_100057e8
#define DAT_100057e8 (*(int *)(0x100057e8U))
#undef DAT_100057ec
#define DAT_100057ec (*(int *)(0x100057ecU))
#undef DAT_100057f0
#define DAT_100057f0 (*(int *)(0x100057f0U))
#undef DAT_100057f4
#define DAT_100057f4 (*(int *)(0x100057f4U))
#undef DAT_100057f8
#define DAT_100057f8 (*(int *)(0x100057f8U))
#undef DAT_100057fc
#define DAT_100057fc (*(int *)(0x100057fcU))
#undef DAT_10005a98
#define DAT_10005a98 (*(int *)(0x10005a98U))
#undef DAT_10005a9c
#define DAT_10005a9c (*(int *)(0x10005a9cU))
#undef DAT_10005b08
#define DAT_10005b08 (*(int *)(0x10005b08U))
#undef DAT_10005b3c
#define DAT_10005b3c (*(int *)(0x10005b3cU))
#undef DAT_10005b40
#define DAT_10005b40 (*(int *)(0x10005b40U))
#undef DAT_10005b44
#define DAT_10005b44 (*(int *)(0x10005b44U))
#undef DAT_10005b48
#define DAT_10005b48 (*(int *)(0x10005b48U))
#undef DAT_10005c28
#define DAT_10005c28 (*(int *)(0x10005c28U))
#undef DAT_10005c2c
#define DAT_10005c2c (*(int *)(0x10005c2cU))
#undef DAT_10005c30
#define DAT_10005c30 (*(int *)(0x10005c30U))
#undef DAT_10005c34
#define DAT_10005c34 (*(int *)(0x10005c34U))
#undef DAT_10005c38
#define DAT_10005c38 (*(int *)(0x10005c38U))
#undef DAT_10005c3c
#define DAT_10005c3c (*(int *)(0x10005c3cU))
#undef DAT_10005c40
#define DAT_10005c40 (*(int *)(0x10005c40U))
#undef DAT_10005c44
#define DAT_10005c44 (*(int *)(0x10005c44U))
#undef DAT_10005c48
#define DAT_10005c48 (*(int *)(0x10005c48U))
#undef DAT_10005c4c
#define DAT_10005c4c (*(int *)(0x10005c4cU))
#undef DAT_10005c50
#define DAT_10005c50 (*(int *)(0x10005c50U))
#undef DAT_10005c54
#define DAT_10005c54 (*(int *)(0x10005c54U))
#undef DAT_10005c58
#define DAT_10005c58 (*(int *)(0x10005c58U))
#undef DAT_10005c5c
#define DAT_10005c5c (*(int *)(0x10005c5cU))
#undef DAT_10005c60
#define DAT_10005c60 (*(int *)(0x10005c60U))
#undef DAT_10005c64
#define DAT_10005c64 (*(int *)(0x10005c64U))
#undef DAT_10005c68
#define DAT_10005c68 (*(int *)(0x10005c68U))
#undef DAT_10005c6c
#define DAT_10005c6c (*(int *)(0x10005c6cU))
#undef DAT_10005c70
#define DAT_10005c70 (*(int *)(0x10005c70U))
#undef DAT_10005c74
#define DAT_10005c74 (*(int *)(0x10005c74U))
#undef DAT_10005c78
#define DAT_10005c78 (*(int *)(0x10005c78U))
#undef DAT_10005c7c
#define DAT_10005c7c (*(int *)(0x10005c7cU))
#undef DAT_10005c80
#define DAT_10005c80 (*(int *)(0x10005c80U))
#undef DAT_10005c84
#define DAT_10005c84 (*(int *)(0x10005c84U))
#undef DAT_10005c88
#define DAT_10005c88 (*(int *)(0x10005c88U))
#undef DAT_10005c8c
#define DAT_10005c8c (*(int *)(0x10005c8cU))
#undef DAT_10005c90
#define DAT_10005c90 (*(int *)(0x10005c90U))
#undef DAT_10005c94
#define DAT_10005c94 (*(int *)(0x10005c94U))
#undef DAT_10005c98
#define DAT_10005c98 (*(int *)(0x10005c98U))
#undef DAT_10005c9c
#define DAT_10005c9c (*(int *)(0x10005c9cU))
#undef DAT_10005ca0
#define DAT_10005ca0 (*(int *)(0x10005ca0U))
#undef DAT_10005ca4
#define DAT_10005ca4 (*(int *)(0x10005ca4U))
#undef DAT_10005ca8
#define DAT_10005ca8 (*(int *)(0x10005ca8U))
#undef DAT_10005cac
#define DAT_10005cac (*(int *)(0x10005cacU))
#undef DAT_10005cb0
#define DAT_10005cb0 (*(int *)(0x10005cb0U))
#undef DAT_10005cb4
#define DAT_10005cb4 (*(int *)(0x10005cb4U))
#undef DAT_10005cb8
#define DAT_10005cb8 (*(int *)(0x10005cb8U))
#undef DAT_10005cbc
#define DAT_10005cbc (*(int *)(0x10005cbcU))
#undef DAT_10005cc0
#define DAT_10005cc0 (*(int *)(0x10005cc0U))
#undef DAT_10005cc4
#define DAT_10005cc4 (*(int *)(0x10005cc4U))
#undef DAT_10005cc8
#define DAT_10005cc8 (*(int *)(0x10005cc8U))
#undef DAT_10005ccc
#define DAT_10005ccc (*(int *)(0x10005cccU))
#undef DAT_10005cd0
#define DAT_10005cd0 (*(int *)(0x10005cd0U))
#undef DAT_10005cd4
#define DAT_10005cd4 (*(int *)(0x10005cd4U))
#undef DAT_10005cd8
#define DAT_10005cd8 (*(int *)(0x10005cd8U))
#undef DAT_10005cdc
#define DAT_10005cdc (*(int *)(0x10005cdcU))
#undef DAT_10005ce0
#define DAT_10005ce0 (*(int *)(0x10005ce0U))
#undef DAT_10005ce4
#define DAT_10005ce4 (*(int *)(0x10005ce4U))
#undef DAT_10005ce8
#define DAT_10005ce8 (*(int *)(0x10005ce8U))
#undef DAT_10005cec
#define DAT_10005cec (*(int *)(0x10005cecU))
#undef DAT_10005cf0
#define DAT_10005cf0 (*(int *)(0x10005cf0U))
#undef DAT_10005cf4
#define DAT_10005cf4 (*(int *)(0x10005cf4U))
#undef DAT_10005cf8
#define DAT_10005cf8 (*(int *)(0x10005cf8U))
#undef DAT_10005cfc
#define DAT_10005cfc (*(int *)(0x10005cfcU))
#undef DAT_10005d00
#define DAT_10005d00 (*(int *)(0x10005d00U))
#undef DAT_10005d04
#define DAT_10005d04 (*(int *)(0x10005d04U))
#undef DAT_10005d08
#define DAT_10005d08 (*(int *)(0x10005d08U))
#undef DAT_10005d0c
#define DAT_10005d0c (*(int *)(0x10005d0cU))
#undef DAT_10005d10
#define DAT_10005d10 (*(int *)(0x10005d10U))
#undef DAT_10005d14
#define DAT_10005d14 (*(int *)(0x10005d14U))
#undef DAT_10005d18
#define DAT_10005d18 (*(int *)(0x10005d18U))
#undef DAT_10005d1c
#define DAT_10005d1c (*(int *)(0x10005d1cU))
#undef DAT_10005d20
#define DAT_10005d20 (*(int *)(0x10005d20U))
#undef DAT_10005d24
#define DAT_10005d24 (*(int *)(0x10005d24U))
#undef DAT_10005d28
#define DAT_10005d28 (*(int *)(0x10005d28U))
#undef DAT_10005d2c
#define DAT_10005d2c (*(int *)(0x10005d2cU))
#define local_8ac (*(char (*)[1024])(frame + 20))
#define local_4ac (*(uint *)(frame + 1044))
#define local_4a8 (*(uint *)(frame + 1048))
#define local_4a4 (*(int (*)[10])(frame + 1052))
#define local_47c (*(uint *)(frame + 1092))
#define local_478 (*(uint *)(frame + 1096))
#define local_474 (*(uint *)(frame + 1100))
#define local_470 (*(uint *)(frame + 1104))
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
#define local_434 (*(uint *)(frame + 1164))
#define local_430 (*(uint *)(frame + 1168))
#define local_84 (*(uint (*)[25])(frame + 2108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

void recovered_100045c0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  int iVar1;
  short sVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  short sVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 uVar14;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined4 extraout_r3_09 = 0;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *extraout_r3_12;
  code *pcVar15;
  undefined1 *pointer;
  undefined1 *puVar16;
  undefined4 *pointer_00;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  undefined4 *pointer_01;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  sVar2 = *(short *)(param_2 + 6);
  sVar11 = 0x1044;
  if (sVar2 != 0x1044) {
    sVar11 = 0x1005;
  }
  if (sVar2 != 0x1044 && sVar2 != sVar11) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_100045ac(local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
  iVar8 = recovered_10006570((int)param_2);
  iVar10 = (0x54584b57U);
  bVar7 = false;
  local_4a4[8] = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x124U));
LAB_100046e8:
    recovered_10005d94((int)local_8ac,0x400,pcVar13);
  }
  else {
    iVar9 = recovered_10006188(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)(local_4a4 + 8));
    if (iVar9 == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x13cU));
      goto LAB_100046e8;
    }
    iVar9 = 5;
    uVar18 = 0;
    while (iVar9 != 0xb) {
      iVar1 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      uVar12 = uVar18;
      if (*(uint *)(param_2 + iVar1) != 0) {
        uVar12 = uVar18 | 2;
      }
      if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
        uVar12 = uVar18 | 1;
      }
      uVar18 = uVar12;
    }
    iVar9 = recovered_10005e98(((uintptr_t)pf_module_state + 0xefU));
    if (iVar9 != 0) {
      uVar18 = uVar18 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar18 = uVar18 | 2;
    }
    local_84[0] = local_4a4[8] | uVar18;
    if (((*param_1 == iVar10) && (99 < (uint)param_1[2])) &&
       (((code *)param_1[0x18] != (code *)0x0 &&
        (iVar10 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
        iVar10 != 0)))) {
      recovered_10006188(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84)
      ;
      recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x16dU)),local_4a4[8]);
      uVar12 = local_84[0];
      recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x17eU)),local_84[0]);
      recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x18eU)),uVar18);
      bVar7 = (uVar12 & uVar18) == uVar18;
    }
    else {
      recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x154U)));
      bVar7 = false;
    }
  }
  if (iVar8 == -1) {
    bVar5 = param_2[8];
    bVar3 = 0;
    bVar6 = 0;
    bVar4 = bVar5 == 1;
    local_4a4[8] = 0;
    if (bVar4) {
      bVar5 = param_2[9];
    }
    local_84[0] = 0;
    local_4a4[7] = 0;
    local_4a4[6] = 0;
    local_4a4[5] = 0;
    if (bVar4 && bVar5 == 6) {
      uVar18 = recovered_10006bf4(param_1,(int)param_2,5,0x1000,local_4a4 + 8);
      iVar10 = local_4a4[8];
      if (uVar18 == 0) {
        recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x3a1U)));
      }
      else {
        recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3b7U)),local_4a4[8],
                           extraout_r3_05);
        recovered_10006d74(param_1,iVar10,0,(int)local_84);
        recovered_10006d74(param_1,local_4a4[8],4,(int)(local_4a4 + 7));
        recovered_10006d74(param_1,local_4a4[8],0xc,(int)(local_4a4 + 6));
        recovered_10006d74(param_1,local_4a4[8],0x10,(int)(local_4a4 + 5));
        if (-1 < local_4a4[7]) {
          recovered_10006d5c(param_1,local_4a4[8],4,local_4a4[7] | 0x80000000);
          recovered_10006d74(param_1,local_4a4[8],4,(int)(local_4a4 + 7));
        }
        iVar10 = local_4a4[7];
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3c0U)),local_84[0]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3c8U)),iVar10);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3d0U)),local_4a4[6]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3daU)),local_4a4[5]);
        bVar6 = 1;
      }
    }
    bVar5 = param_2[8];
    local_4a4[8] = 0;
    bVar4 = bVar5 == 4;
    local_84[0] = 0;
    if (bVar4) {
      bVar5 = param_2[9];
    }
    local_4a4[7] = 0;
    local_4a4[6] = 0;
    if (bVar4 && bVar5 == 3) {
      uVar18 = recovered_10006bf4(param_1,(int)param_2,0,0x1000,local_4a4 + 8);
      iVar10 = local_4a4[8];
      if (uVar18 == 0) {
        recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x3e6U)));
      }
      else {
        recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x3fbU)),local_4a4[8],
                           extraout_r3_06);
        recovered_10006d74(param_1,iVar10,0,(int)local_84);
        recovered_10006d74(param_1,local_4a4[8],8,(int)(local_4a4 + 7));
        if ((local_4a4[7] & 1U) == 0) {
          recovered_10006d5c(param_1,local_4a4[8],8,local_4a4[7] | 1);
          recovered_10006d74(param_1,local_4a4[8],8,(int)(local_4a4 + 7));
        }
        recovered_10006dfc(param_1,local_4a4[8] + 0xe,2,(int)(local_4a4 + 6));
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x403U)),local_84[0]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x40bU)),local_4a4[7]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x413U)),local_4a4[6]);
        bVar3 = 1;
      }
    }
    bVar5 = 0;
    local_4a4[8] = 0;
    local_84[0] = 0;
    local_4a4[7] = 0;
    local_4a4[6] = 0;
    if ((param_2[8] == 0xc) && (bVar5 = 0, param_2[9] == 3)) {
      uVar18 = recovered_10006bf4(param_1,(int)param_2,0,0x1000,local_4a4 + 8);
      iVar10 = local_4a4[8];
      if (uVar18 == 0) {
        for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
          uVar12 = *(uint *)(param_2 + uVar18 * 4 + 0x14);
          local_4a4[5] = 0;
          if (((uVar12 & 1) != 0) &&
             (iVar10 = recovered_10006fe8(param_1,uVar12 & 0xfffc,2,(int)(local_4a4 + 5)),
             iVar10 != 0)) {
            recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x43fU)));
            recovered_10005de8((int)local_8ac,0x400,uVar18);
            recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x44aU)),
                               uVar12 & 0xfffffffc);
            recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x450U)),local_4a4[5]);
            bVar5 = 1;
            goto LAB_10005054;
          }
        }
        recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x45aU)));
        bVar5 = 0;
      }
      else {
        recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x41fU)),local_4a4[8],
                           extraout_r3_04);
        recovered_10006d74(param_1,iVar10,0,(int)local_84);
        recovered_10006d74(param_1,local_4a4[8],4,(int)(local_4a4 + 7));
        recovered_10006d74(param_1,local_4a4[8],8,(int)(local_4a4 + 6));
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x427U)),local_84[0]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x42fU)),local_4a4[7]);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x437U)),local_4a4[6]);
        bVar5 = 1;
      }
    }
LAB_10005054:
    bVar5 = bVar3 | bVar6 | bVar5;
    bVar6 = param_2[8];
    local_4a4[8] = 0;
    local_84[0] = 0;
    local_4a4[7] = 0;
    if (bVar6 == 2) {
      for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
        uVar12 = recovered_10006bf4(param_1,(int)param_2,uVar18,0x1000,local_4a4 + 8);
        if (uVar12 != 0) {
          recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x46fU)));
          recovered_10005de8((int)local_8ac,0x400,uVar18);
          iVar10 = local_4a4[8];
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x480U)),local_4a4[8],
                             extraout_r3_07);
          recovered_10006d74(param_1,iVar10,0,(int)local_84);
          recovered_10006d74(param_1,local_4a4[8],4,(int)(local_4a4 + 7));
          recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x48cU)),local_84[0]);
          recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x498U)),local_4a4[7]);
          break;
        }
        uVar12 = *(uint *)(param_2 + uVar18 * 4 + 0x14);
        if (((uVar12 & 1) != 0) &&
           (iVar10 = recovered_10006fe8(param_1,uVar12 & 0xfffc,2,(int)local_84), iVar10 != 0)) {
          recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x4a4U)));
          recovered_10005de8((int)local_8ac,0x400,uVar18);
          recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x4b3U)),uVar12 & 0xfffffffc)
          ;
          recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x4bdU)),local_84[0]);
          break;
        }
      }
      bVar6 = param_2[8];
      if (uVar18 != 6) {
        bVar5 = 1;
      }
    }
    local_4a4[8] = 0;
    bVar3 = 0;
    local_84[0] = 0;
    if (bVar6 == 3) {
      for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
        uVar12 = recovered_10006bf4(param_1,(int)param_2,uVar18,0x1000,local_4a4 + 8);
        if (uVar12 != 0) {
          recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x4cbU)));
          recovered_10005de8((int)local_8ac,0x400,uVar18);
          iVar10 = local_4a4[8];
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x4dcU)),local_4a4[8],
                             extraout_r3_08);
          recovered_10006d74(param_1,iVar10,0,(int)local_84);
          if (extraout_r0 != 0) {
            recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x4e8U)),local_84[0]);
          }
          break;
        }
      }
      bVar3 = 0;
      if (uVar18 != 6) {
        bVar3 = 1;
      }
    }
    bVar7 = (bool)(bVar5 | bVar3 | bVar7);
    if (!bVar7) {
      local_4a4[8] = 0;
      local_84[0] = 0;
      for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
        uVar12 = recovered_10006bf4(param_1,(int)param_2,uVar18,0x1000,local_4a4 + 8);
        if (uVar12 != 0) {
          recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x4f4U)));
          recovered_10005de8((int)local_8ac,0x400,uVar18);
          iVar10 = local_4a4[8];
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x4feU)),local_4a4[8],
                             extraout_r3_09);
          recovered_10006d74(param_1,iVar10,0,(int)local_84);
          if (extraout_r0_00 != 0) {
            recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x503U)),local_84[0]);
          }
          break;
        }
      }
      bVar7 = false;
      if (uVar18 != 6) {
        bVar7 = true;
      }
    }
  }
  else {
    uVar18 = recovered_10006570((int)param_2);
    bVar5 = 0;
    if (uVar18 != 0xffffffff) {
      recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x19dU)),uVar18);
      bVar4 = recovered_100065b0(param_1,param_2,local_4a4 + 8);
      if (bVar4) {
        recovered_1000697c(param_1,local_4a4 + 8);
        recovered_10006ecc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1cdU)),
                           ((uintptr_t)pf_module_state + 0x1ddU));
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1c2U)),local_460);
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1e4U)),local_474);
        recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1f4U)),local_4a4[8],
                           extraout_r3);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x201U)),local_45c);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x217U)),local_458);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x22dU)),local_454);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x243U)),local_450);
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x259U)),local_44c);
        uVar18 = local_448;
        recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x272U)),local_448);
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x28aU)),local_444);
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x297U)),local_440);
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x2a8U)),local_43c);
        uVar12 = local_434;
        uVar14 = extraout_r3_00;
        if (local_434 != 0) {
          recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x2bcU)),local_470);
          recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x2ccU)),local_464);
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x2e3U)),uVar12,
                             extraout_r3_01);
          uVar14 = extraout_r3_02;
        }
        if (local_47c != 0) {
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x2f6U)),local_47c,uVar14);
          uVar14 = extraout_r3_03;
        }
        if (local_478 != 0) {
          recovered_10006f40((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x300U)),local_478,uVar14);
        }
        recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x313U)),local_430);
        iVar10 = ((uintptr_t)pf_module_state + 0x336U);
        if ((uVar18 & 8) == 0) {
          iVar10 = ((uintptr_t)pf_module_state + 0x342U);
        }
        recovered_10006ecc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x32aU)),iVar10);
        bVar5 = 1;
      }
      else {
        if (local_460 != 0) {
          recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1c2U)),local_460);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
            local_4a4[8] = 0;
            local_84[0] = 0;
            if ((*(uint *)(param_2 + uVar18 * 4 + 0x14) & 1) != 0) {
              uVar17 = *(uint *)(param_2 + uVar18 * 4 + 0x14) & 0xfffffffc;
              uVar12 = uVar17 + 0x12 & 0xffff;
              iVar10 = recovered_10006fe8(param_1,uVar12,1,(int)(local_4a4 + 8));
              if (iVar10 != 0) {
                recovered_10006ecc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x1cdU)),
                                   ((uintptr_t)pf_module_state + 0x34fU));
                recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x359U)));
                recovered_10005de8((int)local_8ac,0x400,uVar18);
                recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x36dU)),uVar17);
                recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x37cU)),local_4a4[8]);
                recovered_10007040(param_1,uVar12);
                recovered_10007040(param_1,uVar12);
                bVar5 = 1;
                iVar10 = recovered_10006fe8(param_1,uVar12,1,(int)local_84);
                if (iVar10 != 0) {
                  recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x38fU)),local_84[0])
                  ;
                }
                goto LAB_10004ad4;
              }
            }
          }
        }
        recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x1a6U)));
        bVar5 = 0;
      }
    }
LAB_10004ad4:
    bVar7 = (bool)(bVar5 | bVar7);
  }
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x100U));
  if (!bVar7) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x110U));
  }
  recovered_10005d94((int)local_8ac,0x400,pcVar13);
  local_84[0] = 0;
  local_4a4[7] = 0;
  local_4a4[6] = 0;
  local_4a4[5] = 0;
  local_4a4[4] = 0;
  local_4a4[3] = 0;
  local_4a4[2] = 0;
  local_4a4[1] = 0;
  local_4a4[0] = 0;
  local_4a8 = 0;
  local_4ac = 0;
  bVar7 = recovered_100065b0(param_1,param_2,local_4a4 + 8);
  if (bVar7) {
    recovered_1000697c(param_1,local_4a4 + 8);
    iVar10 = (0x2ba0U);
    if (((byte)local_448 & 8) == 0) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x52aU));
    }
    else {
      uVar18 = 0;
      if (local_440 != 0) {
        uVar18 = local_434;
      }
      if (local_440 != 0 && uVar18 != 0) {
        puVar16 = (undefined1 *)(((uintptr_t)pf_module_state + 0x7ccU));
        pointer = (undefined1 *)(((uintptr_t)pf_module_state + 0x7ecU));
        recovered_10006b6c(pointer,0x10);
        recovered_10006b6c(puVar16,6);
        recovered_10006b6c((undefined1 *)(iVar10 + 0x10005490),0xc);
        recovered_10006b6c((undefined1 *)(iVar10 + 0x100054b0),0x20);
        uVar18 = recovered_10007088(param_1,(uint)pointer,0x10,(uint)local_84);
        iVar10 = (0x2b24U);
        if (uVar18 != 0) {
          pointer_01 = (undefined4 *)(((uintptr_t)pf_module_state + 0x7ccU));
          uVar18 = recovered_10007088(param_1,(uint)pointer_01,6,(uint)(local_4a4 + 6));
          if (uVar18 != 0) {
            uVar12 = iVar10 + 0x1000550c;
            uVar18 = recovered_10007088(param_1,uVar12,0xc,(uint)(local_4a4 + 4));
            if (uVar18 != 0) {
              pointer_00 = (undefined4 *)(iVar10 + 0x1000552c);
              uVar18 = recovered_10007088(param_1,(uint)pointer_00,0x20,(uint)(local_4a4 + 2));
              if (uVar18 != 0) {
                recovered_10006de8(param_1,local_4a4[8],0x16,0);
                recovered_10006dcc(param_1,local_4a4[8],0x18,(int)local_4a4);
                if (local_4a4[0] == 0) {
                  recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x576U)));
                  recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x58aU)),0);
                }
                else {
                  *(undefined2 *)(iVar10 + 0x10005528) = 2;
                  *(undefined4 *)(iVar10 + 0x10005524) = 0x20;
                  *pointer_01 = 0x10000;
                  *(char *)(iVar10 + 0x10005520) = (char)local_4a4[1];
                  *(undefined2 *)(iVar10 + 0x10005500) = 0;
                  *(char *)(iVar10 + 0x10005523) = (char)((uint)local_4a4[1] >> 0x18);
                  *(char *)(iVar10 + 0x10005522) = (char)((uint)local_4a4[1] >> 0x10);
                  *(char *)(iVar10 + 0x10005521) = (char)((uint)local_4a4[1] >> 8);
                  *(undefined1 *)(iVar10 + 0x1000551c) = (char)local_4a4[2];
                  *(char *)(iVar10 + 0x1000551f) = (char)((uint)local_4a4[2] >> 0x18);
                  *(char *)(iVar10 + 0x1000551e) = (char)((uint)local_4a4[2] >> 0x10);
                  *(char *)(iVar10 + 0x1000551d) = (char)((uint)local_4a4[2] >> 8);
                  recovered_10006de8(param_1,local_4a4[8],0x18,1);
                  recovered_100070e0(param_1,local_4a4[8],0x20,local_84[0],local_4a4[7]);
                  recovered_100070e0(param_1,local_4a4[8],0x28,local_4a4[6],local_4a4[5]);
                  recovered_100070e0(param_1,local_4a4[8],0x30,local_4a4[4],local_4a4[3]);
                  recovered_1000711c(param_1,(uint)(iVar10 + 0x1000551c),0x10);
                  recovered_1000711c(param_1,(uint)pointer_01,6);
                  recovered_1000711c(param_1,uVar12,0xc);
                  recovered_1000711c(param_1,(uint)pointer_00,0x20);
                  recovered_10006de8(param_1,local_4a4[8],0x1c,1);
                  recovered_10006dcc(param_1,local_4a4[8],0x1c,(int)&local_4a8);
                  recovered_10006d2c(param_1,local_4a4[8],0x14,(int)&local_4ac);
                  recovered_10006d44(param_1,local_4a4[8],local_4ac | 4);
                  recovered_10006d2c(param_1,local_4a4[8],0x14,(int)&local_4ac);
                  recovered_10006d90(param_1);
                  recovered_10006de8(param_1,local_434,0,0);
                  uVar18 = 0;
                  for (iVar8 = 100; iVar8 != 0; iVar8 = iVar8 + -1) {
                    recovered_1000711c(param_1,uVar12,0xc);
                    uVar17 = (uint)*(ushort *)(iVar10 + 0x1000550e);
                    if (uVar17 != 0) goto LAB_10005b54;
                    if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) &&
                        (0x33 < (uint)param_1[2])) && ((code *)param_1[0xc] != (code *)0x0)) {
                      (*(code *)param_1[0xc])(100);
                    }
                  }
                  uVar17 = 0;
LAB_10005b54:
                  recovered_1000711c(param_1,(uint)pointer_00,0x20);
                  uVar12 = 0;
                  if (uVar17 != 0) {
                    uVar18 = recovered_1000715c((undefined4 *)(iVar10 + 0x10005514));
                    uVar12 = recovered_1000715c(pointer_00);
                  }
                  recovered_10005d94((int)local_8ac,0x400,(char *)(((uintptr_t)pf_module_state + 0x596U)));
                  recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5a6U)),1);
                  recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5b3U)),local_4a8);
                  recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5c3U)),local_4ac);
                  recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5cdU)),uVar17);
                  recovered_10005d30((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5d5U)),uVar18);
                  if (uVar17 != 0) {
                    recovered_10005efc((int)local_8ac,(char *)(((uintptr_t)pf_module_state + 0x5deU)),uVar12);
                  }
                }
                goto LAB_10005814;
              }
            }
          }
        }
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x55cU));
      }
      else {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x546U));
      }
    }
  }
  else {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x50cU));
  }
  recovered_10005d94((int)local_8ac,0x400,pcVar13);
LAB_10005814:
  iVar10 = recovered_100061fc((int)param_2);
  recovered_100045ac((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xf7U)));
  recovered_10005d94((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x5e8U)));
  recovered_10005f64((int)local_84,0x60,(uint)*param_2,2);
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5eaU));
  recovered_10005d94((int)local_84,0x60,pcVar13);
  recovered_10005f64((int)local_84,0x60,(uint)param_2[1],2);
  pcVar20 = (char *)(((uintptr_t)pf_module_state + 0x5ecU));
  recovered_10005d94((int)local_84,0x60,pcVar20);
  recovered_10005de8((int)local_84,0x60,(uint)param_2[2]);
  piVar19 = local_4a4 + 8;
  recovered_100045ac((undefined1 *)piVar19,0x400,(char *)(((uintptr_t)pf_module_state + 0x5eeU)));
  recovered_10005f64((int)piVar19,0x400,(uint)*param_2,2);
  recovered_10005d94((int)piVar19,0x400,pcVar13);
  recovered_10005f64((int)piVar19,0x400,(uint)param_2[1],2);
  recovered_10005d94((int)piVar19,0x400,pcVar20);
  recovered_10005de8((int)piVar19,0x400,(uint)param_2[2]);
  recovered_10005d94((int)piVar19,0x400,(char *)(((uintptr_t)pf_module_state + 0x5f3U)));
  recovered_10005f64((int)piVar19,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10005d94((int)piVar19,0x400,(char *)(((uintptr_t)pf_module_state + 0x5fcU)));
  recovered_10005f64((int)piVar19,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10005d94((int)piVar19,0x400,(char *)(((uintptr_t)pf_module_state + 0x605U)));
  recovered_10005f64((int)piVar19,0x400,(uint)param_2[8],2);
  recovered_10005d94((int)piVar19,0x400,pcVar20);
  recovered_10005f64((int)piVar19,0x400,(uint)param_2[9],2);
  recovered_10005d94((int)piVar19,0x400,pcVar20);
  recovered_10005f64((int)piVar19,0x400,(uint)param_2[10],2);
  recovered_10005d94((int)piVar19,0x400,(char *)(((uintptr_t)pf_module_state + 0x60dU)));
  recovered_10005f64((int)piVar19,0x400,(uint)param_2[0xb],2);
  recovered_10005efc((int)piVar19,(char *)(((uintptr_t)pf_module_state + 0x618U)),*(uint *)(param_2 + 0x10));
  pcVar20 = (char *)(((uintptr_t)pf_module_state + 0x620U));
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xcaU));
  pcVar15 = extraout_r3_10;
  for (uVar18 = 0; uVar18 != 6; uVar18 = uVar18 + 1) {
    uVar12 = *(uint *)(param_2 + uVar18 * 4 + 0x14);
    if (uVar12 != 0) {
      recovered_10005d94((int)piVar19,0x400,pcVar20);
      recovered_10005de8((int)piVar19,0x400,uVar18);
      recovered_10005d94((int)piVar19,0x400,pcVar13);
      recovered_10005f64((int)piVar19,0x400,uVar12,8);
      pcVar15 = extraout_r3_11;
    }
  }
  if (local_8ac[0] != '\0') {
    recovered_10005d94((int)(local_4a4 + 8),0x400,(char *)(((uintptr_t)pf_module_state + 0xc8U)));
    recovered_10005d94((int)(local_4a4 + 8),0x400,local_8ac);
    pcVar15 = extraout_r3_12;
  }
  if (param_1 != (int *)0x0) {
    pcVar15 = (code *)param_1[3];
  }
  if (param_1 != (int *)0x0 && pcVar15 != (code *)0x0) {
    (*pcVar15)(local_84,iVar10,local_4a4 + 8);
  }
  return;
}

#undef DAT_1000544c
#undef DAT_10005450
#undef DAT_10005454
#undef DAT_10005458
#undef DAT_1000545c
#undef DAT_10005460
#undef DAT_10005464
#undef DAT_10005468
#undef DAT_1000546c
#undef DAT_100057a8
#undef DAT_100057ac
#undef DAT_100057b0
#undef DAT_100057b4
#undef DAT_100057b8
#undef DAT_100057bc
#undef DAT_100057c0
#undef DAT_100057c4
#undef DAT_100057c8
#undef DAT_100057cc
#undef DAT_100057d0
#undef DAT_100057d4
#undef DAT_100057d8
#undef DAT_100057dc
#undef DAT_100057e0
#undef DAT_100057e4
#undef DAT_100057e8
#undef DAT_100057ec
#undef DAT_100057f0
#undef DAT_100057f4
#undef DAT_100057f8
#undef DAT_100057fc
#undef DAT_10005a98
#undef DAT_10005a9c
#undef DAT_10005b08
#undef DAT_10005b3c
#undef DAT_10005b40
#undef DAT_10005b44
#undef DAT_10005b48
#undef DAT_10005c28
#undef DAT_10005c2c
#undef DAT_10005c30
#undef DAT_10005c34
#undef DAT_10005c38
#undef DAT_10005c3c
#undef DAT_10005c40
#undef DAT_10005c44
#undef DAT_10005c48
#undef DAT_10005c4c
#undef DAT_10005c50
#undef DAT_10005c54
#undef DAT_10005c58
#undef DAT_10005c5c
#undef DAT_10005c60
#undef DAT_10005c64
#undef DAT_10005c68
#undef DAT_10005c6c
#undef DAT_10005c70
#undef DAT_10005c74
#undef DAT_10005c78
#undef DAT_10005c7c
#undef DAT_10005c80
#undef DAT_10005c84
#undef DAT_10005c88
#undef DAT_10005c8c
#undef DAT_10005c90
#undef DAT_10005c94
#undef DAT_10005c98
#undef DAT_10005c9c
#undef DAT_10005ca0
#undef DAT_10005ca4
#undef DAT_10005ca8
#undef DAT_10005cac
#undef DAT_10005cb0
#undef DAT_10005cb4
#undef DAT_10005cb8
#undef DAT_10005cbc
#undef DAT_10005cc0
#undef DAT_10005cc4
#undef DAT_10005cc8
#undef DAT_10005ccc
#undef DAT_10005cd0
#undef DAT_10005cd4
#undef DAT_10005cd8
#undef DAT_10005cdc
#undef DAT_10005ce0
#undef DAT_10005ce4
#undef DAT_10005ce8
#undef DAT_10005cec
#undef DAT_10005cf0
#undef DAT_10005cf4
#undef DAT_10005cf8
#undef DAT_10005cfc
#undef DAT_10005d00
#undef DAT_10005d04
#undef DAT_10005d08
#undef DAT_10005d0c
#undef DAT_10005d10
#undef DAT_10005d14
#undef DAT_10005d18
#undef DAT_10005d1c
#undef DAT_10005d20
#undef DAT_10005d24
#undef DAT_10005d28
#undef DAT_10005d2c
#undef local_8ac
#undef local_4ac
#undef local_4a8
#undef local_4a4
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
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
#undef local_434
#undef local_430
#undef local_84

#undef DAT_10005d8c
#define DAT_10005d8c (*(int *)(0x10005d8cU))
#undef DAT_10005d90
#define DAT_10005d90 (*(int *)(0x10005d90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d30
 */

void recovered_10005d30(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xc8U)));
  recovered_10005d94(param_1,0x400,param_2);
  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcaU)));
  recovered_10005de8(param_1,0x400,param_3);
  return;
}

#undef DAT_10005d8c
#undef DAT_10005d90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d94
 */

void recovered_10005d94(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10005e98(param_1);
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
 * Address: 0x10005de8
 */

void recovered_10005de8(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10005ec0(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007218(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10005ec0(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e98
 */

int recovered_10005e98(int param_1)

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
 * Address: 0x10005ec0
 */

void recovered_10005ec0(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005e98(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10005f5c
#define DAT_10005f5c (*(int *)(0x10005f5cU))
#undef DAT_10005f60
#define DAT_10005f60 (*(int *)(0x10005f60U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005efc
 */

void recovered_10005efc(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xc8U)));
  recovered_10005d94(param_1,0x400,param_2);
  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcaU)));
  recovered_10005f64(param_1,0x400,param_3,8);
  return;
}

#undef DAT_10005f5c
#undef DAT_10005f60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f64
 */

void recovered_10005f64(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_10005ec0(param_1,param_2,bVar3);
  }
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10005fc4(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10006188((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10006188((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10006188((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10006188((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10006188((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100061f8
#define DAT_100061f8 (*(uint8_t * *)(0x100061f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006188
 */

undefined4
recovered_10006188(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100061f8

#undef DAT_10006404
#define DAT_10006404 (*(uint *)(0x10006404U))
#undef DAT_10006518
#define DAT_10006518 (*(uint32_t *)(0x10006518U))
#undef DAT_1000651c
#define DAT_1000651c (*(int *)(0x1000651cU))
#undef DAT_10006520
#define DAT_10006520 (*(int *)(0x10006520U))
#undef DAT_10006524
#define DAT_10006524 (*(int *)(0x10006524U))
#undef DAT_10006528
#define DAT_10006528 (*(int *)(0x10006528U))
#undef DAT_1000652c
#define DAT_1000652c (*(int *)(0x1000652cU))
#undef DAT_10006530
#define DAT_10006530 (*(int *)(0x10006530U))
#undef DAT_10006534
#define DAT_10006534 (*(int *)(0x10006534U))
#undef DAT_10006538
#define DAT_10006538 (*(int *)(0x10006538U))
#undef DAT_1000653c
#define DAT_1000653c (*(int *)(0x1000653cU))
#undef DAT_10006540
#define DAT_10006540 (*(int *)(0x10006540U))
#undef DAT_10006544
#define DAT_10006544 (*(int *)(0x10006544U))
#undef DAT_10006548
#define DAT_10006548 (*(int *)(0x10006548U))
#undef DAT_1000654c
#define DAT_1000654c (*(int *)(0x1000654cU))
#undef DAT_10006550
#define DAT_10006550 (*(int *)(0x10006550U))
#undef DAT_10006554
#define DAT_10006554 (*(int *)(0x10006554U))
#undef DAT_10006558
#define DAT_10006558 (*(int *)(0x10006558U))
#undef DAT_1000655c
#define DAT_1000655c (*(int *)(0x1000655cU))
#undef DAT_10006560
#define DAT_10006560 (*(int *)(0x10006560U))
#undef DAT_10006564
#define DAT_10006564 (*(int *)(0x10006564U))
#undef DAT_10006568
#define DAT_10006568 (*(int *)(0x10006568U))
#undef DAT_1000656c
#define DAT_1000656c (*(int *)(0x1000656cU))
#undef switchdataD_10006404
#define switchdataD_10006404 (*(uint *)(0x10006404U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061fc
 */

int recovered_100061fc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10006400_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x6dfU);
    }
LAB_100063e0:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10006400_caseD_5;
    iVar3 = (int)&DAT_10006404 + (0x1b5bU);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x731U);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x71eU);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x744U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10006464:
        iVar3 = recovered_10007184((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10006400_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x625U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x6d6U);
      }
      goto LAB_100063e0;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100063a0:
        return ((uintptr_t)pf_module_state + 0x704U);
      }
      goto LAB_100063e0;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100063a0;
      goto LAB_100063e0;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x6fbU);
      }
      goto LAB_100063e0;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x6eaU);
      }
      goto LAB_100063e0;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x6c0U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10006464;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x6ccU);
        }
      }
      goto LAB_100063e0;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x6f3U);
      }
      goto LAB_100063e0;
    }
    if (sVar2 != 0x1af4) goto LAB_100063e0;
    iVar3 = ((uintptr_t)pf_module_state + 0x630U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_100062a0_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x63fU);
      break;
    case 0x1043:
switchD_100062a0_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x663U);
      break;
    case 0x1044:
switchD_100062a0_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x686U);
      break;
    case 0x1045:
switchD_100062a0_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x650U);
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
switchD_100062a0_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x6b5U);
      break;
    case 0x1048:
switchD_100062a0_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x676U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x695U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x6a4U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_100062a0_caseD_1042;
      case 0x1002:
        goto switchD_100062a0_caseD_1045;
      case 0x1003:
        goto switchD_100062a0_caseD_1043;
      case 0x1004:
        goto switchD_100062a0_caseD_1048;
      case 0x1005:
        goto switchD_100062a0_caseD_1044;
      default:
        goto switchD_100062a0_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10006404
#undef DAT_10006518
#undef DAT_1000651c
#undef DAT_10006520
#undef DAT_10006524
#undef DAT_10006528
#undef DAT_1000652c
#undef DAT_10006530
#undef DAT_10006534
#undef DAT_10006538
#undef DAT_1000653c
#undef DAT_10006540
#undef DAT_10006544
#undef DAT_10006548
#undef DAT_1000654c
#undef DAT_10006550
#undef DAT_10006554
#undef DAT_10006558
#undef DAT_1000655c
#undef DAT_10006560
#undef DAT_10006564
#undef DAT_10006568
#undef DAT_1000656c
#undef switchdataD_10006404

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006570
 */

int recovered_10006570(int param_1)

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


#define local_44 (*(int *)(frame + 28))
#define local_40 (*(int *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(int *)(frame + 48))
#define local_2c (*(int * *)(frame + 52))
#define local_28 (*(int *)(frame + 56))
#define local_24 (*(int * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065b0
 */

bool recovered_100065b0(int *param_1,undefined1 *param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint extraout_r0 = 0;
  uint uVar2;
  int iVar3;
  int *extraout_r1 = 0;
  int *extraout_r1_00 = 0;
  int *extraout_r1_01 = 0;
  int *extraout_r1_02 = 0;
  int *extraout_r1_03 = 0;
  int *extraout_r1_04 = 0;
  int *extraout_r1_05 = 0;
  int *extraout_r1_06 = 0;
  int *extraout_r1_07 = 0;
  int *extraout_r1_08 = 0;
  int *piVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = false;
  local_24 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    recovered_10006b6c((undefined1 *)param_3,0x58);
    uVar2 = extraout_r0;
    if (param_2 != (undefined1 *)0x0) {
      uVar2 = (uint)(byte)param_2[0x12];
    }
    if ((param_2 != (undefined1 *)0x0 && (uVar2 & 0x10) != 0) &&
       (iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],0x34,1,(int)&local_24), iVar3 != 0)) {
      uVar2 = 0;
      while( true ) {
        bVar6 = 0x1e < uVar2;
        bVar5 = uVar2 == 0x1f;
        if (uVar2 < 0x20) {
          bVar6 = (int *)0xae < local_24 + -0x10;
          bVar5 = local_24 + -0x10 == (int *)0xaf;
        }
        if (bVar6 && !bVar5) break;
        local_28 = 0;
        local_2c = (int *)0x0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],(uint)local_24 & 0xffff,1,(int)&local_28);
        if ((iVar3 == 0) ||
           (iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],((uint)local_24 & 0xffff) + 1 & 0xffff
                                       ,1,(int)&local_2c), iVar3 == 0)) break;
        piVar4 = extraout_r1;
        if ((local_28 == 9) &&
           ((((iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 3 & 0xffff,1,(int)&local_30),
              piVar4 = extraout_r1_00, iVar3 != 0 &&
              (iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 4 & 0xffff,1,(int)&local_34),
              piVar4 = extraout_r1_01, iVar3 != 0)) &&
             (iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                         (uint)(byte)param_2[2],
                                         ((uint)local_24 & 0xffff) + 8 & 0xffff,4,(int)&local_38),
             piVar4 = extraout_r1_02, iVar3 != 0)) &&
            (iVar3 = recovered_10006188(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                        (uint)(byte)param_2[2],
                                        ((uint)local_24 & 0xffff) + 0xc & 0xffff,4,(int)&local_3c),
            piVar4 = extraout_r1_03, iVar3 != 0)))) {
          local_40 = 0;
          param_3[9] = param_3[9] + 1;
          piVar4 = param_3;
          if (local_30 == 1) {
            bVar5 = recovered_10006b90(param_1,(int)param_2,local_34,local_38,local_3c,&local_40);
            if (bVar5) {
              *param_3 = local_40;
              param_3[4] = local_34;
              goto LAB_1000693c;
            }
            piVar4 = extraout_r1_04;
          }
          if ((local_30 == 2) &&
             (bVar5 = recovered_10006b90(param_1,(int)param_2,local_34,local_38,local_3c,&local_40),
             piVar4 = extraout_r1_05, bVar5)) {
            bVar1 = *param_2;
            param_3[1] = local_40;
            param_3[5] = local_34;
            local_44 = 0;
            iVar3 = recovered_10006188(param_1,(uint)bVar1,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],
                                       ((uint)local_24 & 0xffff) + 0x10 & 0xffff,4,(int)&local_44);
            piVar4 = extraout_r1_06;
            if (iVar3 != 0) {
              param_3[8] = local_44;
            }
          }
          else if ((local_30 == 3) &&
                  (bVar5 = recovered_10006b90(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_07, bVar5)) {
            param_3[2] = local_40;
            param_3[6] = local_34;
            piVar4 = param_3;
          }
          else if ((local_30 == 4) &&
                  (bVar5 = recovered_10006b90(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_08, bVar5)) {
            param_3[3] = local_40;
            param_3[7] = local_34;
            piVar4 = param_3;
          }
        }
LAB_1000693c:
        if (local_2c != (int *)0x0) {
          piVar4 = local_24;
        }
        if (local_2c == (int *)0x0 || local_2c == piVar4) break;
        local_24 = local_2c;
        uVar2 = uVar2 + 1;
      }
      bVar5 = *param_3 != 0;
    }
  }
  return bVar5;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000697c
 */

void recovered_1000697c(int *param_1,int *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;
  int *unaff_r4;

  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    unaff_r4 = param_2;
  }
  local_18 = 0;
  if (param_2 != (int *)0x0 && iVar1 != 0) {
    recovered_10006d2c(param_1,iVar1,0x14,(int)(unaff_r4 + 0xe));
    recovered_10006d44(param_1,*unaff_r4,0);
    recovered_10006d5c(param_1,*unaff_r4,0,0);
    recovered_10006d74(param_1,*unaff_r4,4,(int)(unaff_r4 + 10));
    recovered_10006d5c(param_1,*unaff_r4,0,1);
    recovered_10006d74(param_1,*unaff_r4,4,(int)(unaff_r4 + 0xb));
    unaff_r4[0xd] = unaff_r4[0xb] & 1;
    unaff_r4[0xc] = 0;
    recovered_10006d5c(param_1,*unaff_r4,8,0);
    recovered_10006d5c(param_1,*unaff_r4,0xc,unaff_r4[0xc]);
    recovered_10006d5c(param_1,*unaff_r4,8,1);
    recovered_10006d5c(param_1,*unaff_r4,0xc,unaff_r4[0xd]);
    recovered_10006d90(param_1);
    recovered_10006d44(param_1,*unaff_r4,1);
    recovered_10006d44(param_1,*unaff_r4,3);
    recovered_10006d44(param_1,*unaff_r4,0xb);
    recovered_10006d2c(param_1,*unaff_r4,0x14,(int)(unaff_r4 + 0xf));
    recovered_10006dcc(param_1,*unaff_r4,0x12,(int)(unaff_r4 + 0x10));
    recovered_10006d2c(param_1,*unaff_r4,0x15,(int)(unaff_r4 + 0x15));
    recovered_10006de8(param_1,*unaff_r4,0x16,0);
    recovered_10006dcc(param_1,*unaff_r4,0x18,(int)(unaff_r4 + 0x11));
    recovered_10006dcc(param_1,*unaff_r4,0x1c,(int)(unaff_r4 + 0x12));
    recovered_10006dcc(param_1,*unaff_r4,0x1e,(int)&local_18);
    if (extraout_r0 != 0) {
      unaff_r4[0x13] = local_18;
      if (unaff_r4[1] != 0) {
        unaff_r4[0x14] = unaff_r4[8] * local_18 + unaff_r4[1];
      }
    }
  }
  return;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b6c
 */

void recovered_10006b6c(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b90
 */

bool recovered_10006b90(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_10006bf4(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_10006d28
#define DAT_10006d28 (*(int *)(0x10006d28U))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf4
 */

uint recovered_10006bf4(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

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

#undef DAT_10006d28
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d2c
 */

void recovered_10006d2c(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006dfc(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d44
 */

void recovered_10006d44(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006e68(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d5c
 */

void recovered_10006d5c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006e68(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d74
 */

void recovered_10006d74(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006dfc(param_1,param_3 + param_2,4,param_4);
  return;
}


#undef DAT_10006dc8
#define DAT_10006dc8 (*(int *)(0x10006dc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d90
 */

void recovered_10006d90(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10006dc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dcc
 */

void recovered_10006dcc(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10006dfc(param_1,param_3 + param_2,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de8
 */

void recovered_10006de8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006e68(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_10006e64
#define DAT_10006e64 (*(uint8_t * *)(0x10006e64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dfc
 */

undefined4 recovered_10006dfc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006e54;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006e54:
                    /* WARNING: Could not recover jumptable at 0x10006e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006e64

#undef DAT_10006ec8
#define DAT_10006ec8 (*(int *)(0x10006ec8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e68
 */

undefined4 recovered_10006e68(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006eb0;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006eb0:
                    /* WARNING: Could not recover jumptable at 0x10006ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006ec8

#undef DAT_10006f34
#define DAT_10006f34 (*(int *)(0x10006f34U))
#undef DAT_10006f38
#define DAT_10006f38 (*(int *)(0x10006f38U))
#undef DAT_10006f3c
#define DAT_10006f3c (*(int *)(0x10006f3cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ecc
 */

void recovered_10006ecc(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xc8U)));
  recovered_10005d94(param_1,0x400,param_2);
  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcaU)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0xccU));
  if (param_3 != 0) {
    pcVar1 = (char *)param_3;
  }
  recovered_10005d94(param_1,0x400,pcVar1);
  return;
}

#undef DAT_10006f34
#undef DAT_10006f38
#undef DAT_10006f3c

#undef DAT_10006fe0
#define DAT_10006fe0 (*(int *)(0x10006fe0U))
#undef DAT_10006fe4
#define DAT_10006fe4 (*(int *)(0x10006fe4U))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f40
 */

void recovered_10006f40(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uStack_24 = 0;
  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xc8U)));
  recovered_10005d94(param_1,0x400,param_2);
  recovered_10005d94(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcaU)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_10005d94(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}

#undef DAT_10006fe0
#undef DAT_10006fe4
#undef uStack_24

#undef DAT_1000703c
#define DAT_1000703c (*(int *)(0x1000703cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fe8
 */

undefined4 recovered_10006fe8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10007038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_1000703c

#undef DAT_10007084
#define DAT_10007084 (*(int *)(0x10007084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

void recovered_10007040(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10007080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_10007084

/* Pooka's Free Software License. Recovered DMA service contract. */
unsigned int recovered_10007088(int *api,unsigned int pointer,unsigned int size,unsigned int output){
 if(!api||(unsigned)api[0]!=0x54584b57U||(unsigned)api[2]<116||!pointer||!output||!api[28])return 0;
 return ((unsigned int (*)(unsigned int,unsigned int,unsigned int,unsigned int))(uintptr_t)(unsigned)api[28])(0,pointer,size,output);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070e0
 */

void recovered_100070e0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_10006d5c(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return;
  }
  recovered_10006d5c(param_1,param_2,param_3 + 4,param_5);
  return;
}


/* Pooka's Free Software License. Recovered DMA service contract. */
void recovered_1000711c(int *api,unsigned int pointer,unsigned int size){
 if(api&&(unsigned)api[0]==0x54584b57U&&(unsigned)api[2]>=120&&api[29])
 ((void (*)(unsigned int,unsigned int,unsigned int))(uintptr_t)(unsigned)api[29])(0,pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000715c
 */

undefined4 recovered_1000715c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_100071f8
#define DAT_100071f8 (*(uint32_t *)(0x100071f8U))
#undef DAT_100071fc
#define DAT_100071fc (*(int *)(0x100071fcU))
#undef DAT_10007200
#define DAT_10007200 (*(int *)(0x10007200U))
#undef DAT_10007204
#define DAT_10007204 (*(int *)(0x10007204U))
#undef DAT_10007208
#define DAT_10007208 (*(int *)(0x10007208U))
#undef DAT_1000720c
#define DAT_1000720c (*(int *)(0x1000720cU))
#undef DAT_10007210
#define DAT_10007210 (*(int *)(0x10007210U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007184
 */

int recovered_10007184(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x75aU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x779U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x764U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x769U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x76eU);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x75fU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x782U);
  }
  return iVar1;
}

#undef DAT_100071f8
#undef DAT_100071fc
#undef DAT_10007200
#undef DAT_10007204
#undef DAT_10007208
#undef DAT_1000720c
#undef DAT_10007210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007218
 */

uint recovered_10007218(uint param_1,uint param_2)

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
 * Address: 0x10007268
 */

uint recovered_10007268(uint param_1,uint param_2)

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
 * Address: 0x100072a0
 */

uint recovered_100072a0(uint param_1,uint param_2)

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
 * Address: 0x10007310
 */

uint recovered_10007310(uint param_1,uint param_2)

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
 * Address: 0x10007378
 */

undefined8 recovered_10007378(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000745c
 */

undefined8 recovered_1000745c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100074dc
 */

undefined8 recovered_100074dc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100075fc
 */

undefined8 recovered_100075fc(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10007738
#define DAT_10007738 (*(double *)(0x10007738U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076b8
 */

undefined8 recovered_100076b8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10007738

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007740
 */

undefined8 recovered_10007740(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100076b8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100076b8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000778c
 */

void recovered_1000778c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100076b8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x7acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000779c
 */

void recovered_1000779c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x794U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077ac
 */

double recovered_100077ac(uint param_1,uint param_2)

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
 * Address: 0x100077f4
 */

void recovered_100077f4(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_100077ac(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_100077ac(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000781c
 */

float recovered_1000781c(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100077ac(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007838
 */

float recovered_10007838(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100077f4(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
