/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100039d4
#define DAT_100039d4 (*(uint32_t *)(0x100039d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

void * recovered_100039c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0xc170U));
}

#undef DAT_100039d4

#undef DAT_10003c60
#define DAT_10003c60 (*(int *)(0x10003c60U))
#undef DAT_10003c64
#define DAT_10003c64 (*(int *)(0x10003c64U))
#undef DAT_10003c68
#define DAT_10003c68 (*(int *)(0x10003c68U))
#undef DAT_10003c6c
#define DAT_10003c6c (*(int *)(0x10003c6cU))
#undef DAT_10003c70
#define DAT_10003c70 (*(int *)(0x10003c70U))
#undef DAT_10003c74
#define DAT_10003c74 (*(int *)(0x10003c74U))
#undef DAT_10003c78
#define DAT_10003c78 (*(int *)(0x10003c78U))
#undef DAT_10003c7c
#define DAT_10003c7c (*(int *)(0x10003c7cU))
#undef DAT_10003c80
#define DAT_10003c80 (*(int *)(0x10003c80U))
#undef DAT_10003c84
#define DAT_10003c84 (*(int *)(0x10003c84U))
#undef DAT_10003c88
#define DAT_10003c88 (*(int *)(0x10003c88U))
#undef DAT_10003c8c
#define DAT_10003c8c (*(int *)(0x10003c8cU))
#undef DAT_10003c90
#define DAT_10003c90 (*(int *)(0x10003c90U))
#define abStack_454 (*(byte (*)[1108])(pf_stack_frame + 28))
#define local_448 (*(char *)(pf_stack_frame + 40))
#define local_54 (*(byte (*)[84])(pf_stack_frame + 1052))
#define local_50 (*(int *)(pf_stack_frame + 1056))
#define local_4c (*(int *)(pf_stack_frame + 1060))
#define local_48 (*(int *)(pf_stack_frame + 1064))
#define local_44 (*(int *)(pf_stack_frame + 1068))
#define local_40 (*(int *)(pf_stack_frame + 1072))
#define local_3c (*(int *)(pf_stack_frame + 1076))
#define local_38 (*(undefined4 *)(pf_stack_frame + 1080))
#define local_28 (*(undefined4 *)(pf_stack_frame + 1096))
#define uStack_34 (*(undefined4 *)(pf_stack_frame + 1084))
#define uStack_30 (*(undefined4 *)(pf_stack_frame + 1088))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 1092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d8
 */

uint recovered_100039d8(void *api)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;

  if ((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    iVar7 = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state + 0x116cU)) = 0;
    if (*(int *)((int)api + 0x5c) != 0) {
      for (uVar1 = 0; iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL}), uVar1 != 8; uVar1 = uVar1 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          iVar2 = recovered_100057d4(api,uVar1 & 0xff,uVar4 & 0xff,0,abStack_454);
          if (iVar2 != 0) {
            iVar2 = recovered_10003c94(api,abStack_454);
            iVar7 = iVar2 + iVar7;
            if (0x7fffffff < (uint)(int)local_448) {
              for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
                iVar2 = recovered_100057d4(api,uVar1 & 0xff,uVar4 & 0xff,uVar6 & 0xff,local_54);
                if (iVar2 != 0) {
                  iVar2 = recovered_10003c94(api,local_54);
                  iVar7 = iVar2 + iVar7;
                }
              }
            }
          }
        }
      }
      iVar3 = 8;
      if (iVar7 != 0) {
        iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x116cU));
      }
      if (iVar7 != 0 && iVar3 != 0) {
        recovered_100054a0(local_54,0x30);
        local_50 = *(int *)(((uintptr_t)pf_module_state + 0x116cU));
        iVar7 = local_50 + 1;
        local_40 = ((uintptr_t)&recovered_100054c4);
        piVar5 = (int *)(((uintptr_t)pf_module_state + 0x21e4U));
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_10003b90;
          iVar3 = *piVar5;
          piVar5 = piVar5 + 0x1c00;
        } while (iVar3 != 0);
        local_40 = 0;
LAB_10003b90:
        uStack_34 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        uStack_30 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        uStack_2c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        local_38 = 0;
        local_28 = 0;
        local_3c = ((uintptr_t)&recovered_100056ac);
        local_44 = ((uintptr_t)&recovered_10005690);
        local_48 = ((uintptr_t)&recovered_10005674);
        local_4c = ((uintptr_t)&recovered_100055b0);
        local_54[0] = 3;
        local_54[1] = 0;
        local_54[2] = 0;
        local_54[3] = 0;
        recovered_100057c0(abStack_454,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
        if ((((*(code **)((int)api + 0xc) != (code *)0x0) &&
             (iVar7 = (**(code **)((int)api + 0xc))
                                (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),abStack_454),
             iVar7 != 0)) &&
            ((*(int *)api == iVar2 &&
             ((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0))))))
           && (iVar7 = (**(code **)((int)api + 0xd0))(local_54), iVar7 != 0)) {
          return 1;
        }
      }
    }
    recovered_10005448();
  }
  return 0;
}

#undef DAT_10003c60
#undef DAT_10003c64
#undef DAT_10003c68
#undef DAT_10003c6c
#undef DAT_10003c70
#undef DAT_10003c74
#undef DAT_10003c78
#undef DAT_10003c7c
#undef DAT_10003c80
#undef DAT_10003c84
#undef DAT_10003c88
#undef DAT_10003c8c
#undef DAT_10003c90
#undef abStack_454
#undef local_448
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_28
#undef uStack_34
#undef uStack_30
#undef uStack_2c

#undef DAT_10004c7c
#define DAT_10004c7c (*(int *)(0x10004c7cU))
#undef DAT_10004c80
#define DAT_10004c80 (*(int *)(0x10004c80U))
#undef DAT_10004c84
#define DAT_10004c84 (*(int *)(0x10004c84U))
#undef DAT_10004c88
#define DAT_10004c88 (*(int *)(0x10004c88U))
#undef DAT_10004c8c
#define DAT_10004c8c (*(int *)(0x10004c8cU))
#undef DAT_10004c90
#define DAT_10004c90 (*(int *)(0x10004c90U))
#undef DAT_10004c94
#define DAT_10004c94 (*(int *)(0x10004c94U))
#undef DAT_10004c98
#define DAT_10004c98 (*(int *)(0x10004c98U))
#undef DAT_10004c9c
#define DAT_10004c9c (*(int *)(0x10004c9cU))
#undef DAT_10004ca0
#define DAT_10004ca0 (*(int *)(0x10004ca0U))
#undef DAT_10004ca4
#define DAT_10004ca4 (*(int *)(0x10004ca4U))
#undef DAT_10004ca8
#define DAT_10004ca8 (*(int *)(0x10004ca8U))
#undef DAT_10004cac
#define DAT_10004cac (*(int *)(0x10004cacU))
#undef DAT_10004cb0
#define DAT_10004cb0 (*(int *)(0x10004cb0U))
#undef DAT_10004cb4
#define DAT_10004cb4 (*(int *)(0x10004cb4U))
#undef DAT_10004cb8
#define DAT_10004cb8 (*(int *)(0x10004cb8U))
#undef DAT_10004cbc
#define DAT_10004cbc (*(int *)(0x10004cbcU))
#undef DAT_10004cc0
#define DAT_10004cc0 (*(int *)(0x10004cc0U))
#undef DAT_10004cc4
#define DAT_10004cc4 (*(int *)(0x10004cc4U))
#undef DAT_10004cc8
#define DAT_10004cc8 (*(int *)(0x10004cc8U))
#undef DAT_10005398
#define DAT_10005398 (*(int *)(0x10005398U))
#undef DAT_1000539c
#define DAT_1000539c (*(uint *)(0x1000539cU))
#undef DAT_100053a0
#define DAT_100053a0 (*(uint *)(0x100053a0U))
#undef DAT_100053a4
#define DAT_100053a4 (*(uint *)(0x100053a4U))
#undef DAT_100053a8
#define DAT_100053a8 (*(int *)(0x100053a8U))
#undef DAT_100053ac
#define DAT_100053ac (*(int *)(0x100053acU))
#undef DAT_100053b0
#define DAT_100053b0 (*(int *)(0x100053b0U))
#undef DAT_100053b4
#define DAT_100053b4 (*(int *)(0x100053b4U))
#undef DAT_100053b8
#define DAT_100053b8 (*(int *)(0x100053b8U))
#undef DAT_100053bc
#define DAT_100053bc (*(int *)(0x100053bcU))
#undef DAT_100053c0
#define DAT_100053c0 (*(int *)(0x100053c0U))
#undef DAT_100053c4
#define DAT_100053c4 (*(int *)(0x100053c4U))
#undef DAT_100053c8
#define DAT_100053c8 (*(int *)(0x100053c8U))
#undef DAT_100053cc
#define DAT_100053cc (*(uint32_t *)(0x100053ccU))
#undef DAT_100053d0
#define DAT_100053d0 (*(int *)(0x100053d0U))
#undef DAT_100053d4
#define DAT_100053d4 (*(int *)(0x100053d4U))
#undef DAT_100053d8
#define DAT_100053d8 (*(int *)(0x100053d8U))
#undef DAT_100053dc
#define DAT_100053dc (*(int *)(0x100053dcU))
#undef DAT_100053e0
#define DAT_100053e0 (*(int *)(0x100053e0U))
#undef DAT_100053e4
#define DAT_100053e4 (*(int *)(0x100053e4U))
#undef DAT_100053e8
#define DAT_100053e8 (*(int *)(0x100053e8U))
#undef DAT_100053ec
#define DAT_100053ec (*(int *)(0x100053ecU))
#undef DAT_100053f0
#define DAT_100053f0 (*(int *)(0x100053f0U))
#undef DAT_100053f4
#define DAT_100053f4 (*(int *)(0x100053f4U))
#undef DAT_100053f8
#define DAT_100053f8 (*(int *)(0x100053f8U))
#undef DAT_100053fc
#define DAT_100053fc (*(int *)(0x100053fcU))
#undef DAT_10005400
#define DAT_10005400 (*(int *)(0x10005400U))
#undef DAT_10005404
#define DAT_10005404 (*(uint32_t *)(0x10005404U))
#undef DAT_10005408
#define DAT_10005408 (*(int *)(0x10005408U))
#undef DAT_1000540c
#define DAT_1000540c (*(int *)(0x1000540cU))
#undef DAT_10005410
#define DAT_10005410 (*(int *)(0x10005410U))
#undef DAT_10005414
#define DAT_10005414 (*(int *)(0x10005414U))
#undef DAT_10005418
#define DAT_10005418 (*(int *)(0x10005418U))
#undef DAT_1000541c
#define DAT_1000541c (*(int *)(0x1000541cU))
#undef DAT_10005420
#define DAT_10005420 (*(int *)(0x10005420U))
#undef DAT_10005424
#define DAT_10005424 (*(int *)(0x10005424U))
#undef DAT_10005428
#define DAT_10005428 (*(int *)(0x10005428U))
#undef DAT_1000542c
#define DAT_1000542c (*(int *)(0x1000542cU))
#undef DAT_10005430
#define DAT_10005430 (*(int *)(0x10005430U))
#undef DAT_10005434
#define DAT_10005434 (*(int *)(0x10005434U))
#undef DAT_10005438
#define DAT_10005438 (*(int *)(0x10005438U))
#undef DAT_1000543c
#define DAT_1000543c (*(int *)(0x1000543cU))
#undef DAT_10005440
#define DAT_10005440 (*(int *)(0x10005440U))
#undef DAT_10005444
#define DAT_10005444 (*(int *)(0x10005444U))
#define local_8c8 (*(char (*)[2248])(pf_stack_frame + 24))
#define local_4c8 (*(int (*)[306])(pf_stack_frame + 1048))
#define local_4b4 (*(uint *)(pf_stack_frame + 1068))
#define local_4b0 (*(uint *)(pf_stack_frame + 1072))
#define local_4ac (*(uint *)(pf_stack_frame + 1076))
#define local_4a8 (*(uint *)(pf_stack_frame + 1080))
#define local_4a4 (*(uint *)(pf_stack_frame + 1084))
#define local_4a0 (*(int *)(pf_stack_frame + 1088))
#define local_49c (*(int *)(pf_stack_frame + 1092))
#define local_498 (*(uint *)(pf_stack_frame + 1096))
#define local_494 (*(uint *)(pf_stack_frame + 1100))
#define local_490 (*(uint *)(pf_stack_frame + 1104))
#define local_48c (*(uint *)(pf_stack_frame + 1108))
#define local_488 (*(uint *)(pf_stack_frame + 1112))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 1116))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c94
 */

undefined4 recovered_10003c94(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  short sVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  undefined1 *data;
  short sVar13;
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
  short sVar14;
  ushort uVar15;
  code *extraout_r3;
  code *extraout_r3_00;
  code *pcVar16;
  void *pvVar17;
  undefined2 *puVar18;
  undefined1 *data_00;
  char *pcVar19;
  uint *puVar20;
  char *pcVar21;
  int *piVar22;
  undefined1 *data_01;
  byte bVar23;
  bool bVar24;
  bool bVar25;

  iVar7 = (*(uint32_t *)(uint32_t[]){0x62d4ULL});
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  sVar2 = *(short *)(param_2 + 4);
  if (sVar2 == 0x1af4) {
    sVar13 = *(short *)(param_2 + 6);
    sVar14 = 0x1001;
    if (sVar13 != 0x1001) {
      sVar14 = 0x1042;
    }
    if (sVar13 != 0x1001 && sVar13 != sVar14) goto LAB_10003ce0;
  }
  else {
LAB_10003ce0:
    bVar23 = param_2[8];
    bVar24 = bVar23 == 1;
    if (bVar24) {
      bVar23 = param_2[9];
    }
    if (!bVar24 || bVar23 != 1) {
      sVar13 = 0x106b;
      if (sVar2 == 0x106b) {
        sVar13 = *(short *)(param_2 + 6);
      }
      if (sVar2 != 0x106b || sVar13 != 0x10) {
        return 0;
      }
    }
  }
  if (*(int *)(((uintptr_t)pf_module_state + 0x116cU)) != 0) {
    return 0;
  }
  piVar22 = (int *)(((uintptr_t)pf_module_state + 0x216cU));
  recovered_100054a0((undefined1 *)piVar22,0x7000);
  recovered_100057c0(local_8c8,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  *piVar22 = (int)param_1;
  local_4a4 = 0;
  local_4a8 = 0;
  local_4ac = 0;
  local_4b0 = 0;
  local_4b4 = 0;
  local_4c8[4] = 0;
  local_4c8[3] = 0;
  local_4c8[2] = 0;
  local_4c8[1] = 0;
  local_4c8[0] = 0;
  bVar23 = *param_2;
  bVar3 = param_2[1];
  bVar1 = param_2[2];
  *(byte *)(((uintptr_t)pf_module_state+0x21d4U)) = bVar23;
  *(byte *)(((uintptr_t)pf_module_state+0x21d5U)) = bVar3;
  *(byte *)(((uintptr_t)pf_module_state+0x21d6U)) = bVar1;
  uVar5 = recovered_10005b50(param_2);
  *(uint *)(((uintptr_t)pf_module_state+0x21dcU)) = uVar5;
  iVar6 = recovered_10005998(param_1,(uint)bVar23,(uint)bVar3,(uint)bVar1,4,2,(int)(local_4c8 + 1));
  if (iVar6 == 0) goto LAB_10004790;
  *(short *)(((uintptr_t)pf_module_state+0x21d8U)) = (short)local_4c8[1];
  *(undefined1 *)(((uintptr_t)pf_module_state+0x21d7U)) = 1;
  puVar20 = local_484;
  bVar23 = param_2[8];
  uVar5 = extraout_r1;
  if (bVar23 == 1) {
    uVar5 = (uint)param_2[9];
  }
  if (bVar23 == 1 && uVar5 == 1) {
LAB_10003e8c:
    local_488 = 0;
    if (((param_1 != (int *)0x0) &&
        (((*(short *)(param_2 + 4) == 0x106b && (bVar24 = true, *(short *)(param_2 + 6) == 0x10)) ||
         ((bVar23 == 1 && (bVar24 = false, param_2[9] == 1)))))) &&
       (bVar25 = recovered_10005b70(param_1,param_2,(int)local_8c8), bVar25)) {
      if (bVar24) {
        uVar5 = recovered_10006028(param_1,param_2,0,0x22000,&local_488);
        if (uVar5 != 0) {
          *(undefined4 *)(((uintptr_t)pf_module_state+0x2218U)) = 1;
          *(undefined4 *)(((uintptr_t)pf_module_state+0x2210U)) = 1;
          *(undefined2 *)(((uintptr_t)pf_module_state+0x2200U)) = 0xe0;
          *(undefined1 *)(((uintptr_t)pf_module_state+0x2202U)) = 0;
          *(uint *)(((uintptr_t)pf_module_state+0x2214U)) = local_488 + 0x20000;
          iVar7 = recovered_100061f0(param_1,piVar22);
          if (iVar7 != 0) {
LAB_10003f5c:
            recovered_100057c0(local_8c8,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
            iVar7 = (*(uint32_t *)(uint32_t[]){0x6078ULL});
            recovered_10005a4c((int)local_8c8,0x400,*(int *)(((uintptr_t)pf_module_state + 0x21e8U)));
            recovered_10005afc((int)local_8c8,0x400,(char *)(((uintptr_t)pf_module_state + 0x80U)));
            iVar6 = *(int *)(((uintptr_t)pf_module_state+0x2210U));
            *(int *)(((uintptr_t)pf_module_state + 0x116cU)) = *(int *)(((uintptr_t)pf_module_state + 0x116cU)) + 1;
            recovered_100057c0((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x89U)));
            recovered_10005afc((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xecU)));
            recovered_10006dbc((int)local_84,0x60,(uint)*param_2,2);
            pcVar19 = (char *)(((uintptr_t)pf_module_state + 0xeeU));
            recovered_10005afc((int)local_84,0x60,pcVar19);
            recovered_10006dbc((int)local_84,0x60,(uint)param_2[1],2);
            pcVar21 = (char *)(((uintptr_t)pf_module_state + 0xf0U));
            recovered_10005afc((int)local_84,0x60,pcVar21);
            recovered_10005a4c((int)local_84,0x60,(uint)param_2[2]);
            recovered_100057c0((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xf2U)));
            recovered_10006dbc((int)local_484,0x400,(uint)*param_2,2);
            recovered_10005afc((int)local_484,0x400,pcVar19);
            recovered_10006dbc((int)local_484,0x400,(uint)param_2[1],2);
            recovered_10005afc((int)local_484,0x400,pcVar21);
            recovered_10005a4c((int)local_484,0x400,(uint)param_2[2]);
            recovered_10005afc((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xf7U)));
            recovered_10006dbc((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
            recovered_10005afc((int)local_484,0x400,pcVar19);
            recovered_10006dbc((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
            recovered_10005afc((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xfaU)));
            iVar7 = ((uintptr_t)pf_module_state + 0x92U);
            if (iVar6 == 0) {
              iVar7 = ((uintptr_t)pf_module_state + 0xa1U);
            }
            pcVar16 = extraout_r3;
            if (local_8c8[0] != '\0') {
              recovered_10005afc((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xfcU)));
              recovered_10005afc((int)local_484,0x400,local_8c8);
              pcVar16 = extraout_r3_00;
            }
            if (param_1 != (int *)0x0) {
              pcVar16 = (code *)param_1[3];
            }
            if (param_1 != (int *)0x0 && pcVar16 != (code *)0x0) {
              (*pcVar16)(local_84,iVar7,local_484);
            }
            return 1;
          }
        }
      }
      else {
        bVar23 = param_2[10];
        if ((bVar23 & 5) == 5) {
LAB_100047c4:
          for (iVar7 = 0; iVar7 != 4; iVar7 = iVar7 + 2) {
            bVar3 = 4;
            puVar18 = (undefined2 *)((int)local_484 + iVar7 + -8);
            if (iVar7 == 0) {
              bVar3 = 1;
            }
            if ((bVar3 & bVar23) == 0) {
              uVar4 = 0x170;
              uVar15 = 0x376;
              if (iVar7 == 0) {
                uVar4 = 0x1f0;
              }
              *puVar18 = uVar4;
              if (iVar7 == 0) {
                uVar15 = 0x3f6;
              }
            }
            else {
              uVar5 = 0xfffffffc;
              uVar9 = *(uint *)(param_2 + iVar7 * 4 + 0x18);
              if ((uVar9 & 1) == 0) {
                uVar5 = 0xfffffff0;
              }
              bVar24 = (*(uint *)(param_2 + iVar7 * 4 + 0x14) & 1) != 0;
              uVar12 = 0xfffffffc;
              if (!bVar24) {
                uVar12 = 0xfffffff0;
              }
              if (bVar24 && (uVar9 & 1) != 0) {
                uVar12 = uVar12 & *(uint *)(param_2 + iVar7 * 4 + 0x14);
                uVar10 = uVar12 - 0x10000;
                bVar24 = 0xffff0000 < uVar10;
                if (bVar24) {
                  uVar10 = uVar5 & uVar9;
                  uVar9 = 0xffff0003;
                  uVar5 = uVar10 - 0xfffe;
                }
                if (bVar24 && uVar9 <= uVar5) {
                  *puVar18 = (short)uVar12;
                  uVar15 = (ushort)uVar10 | 2;
                  goto LAB_1000487c;
                }
              }
              uVar15 = 0;
              *puVar18 = 0;
            }
LAB_1000487c:
            *(ushort *)((int)local_484 + iVar7 + -0xc) = uVar15;
          }
          for (iVar7 = 0; iVar7 != 2; iVar7 = iVar7 + 1) {
            sVar2 = *(short *)((int)local_484 + iVar7 * 2 + -8);
            if ((sVar2 != 0) &&
               (sVar13 = *(short *)((int)local_484 + iVar7 * 2 + -0xc), sVar13 != 0)) {
              *(undefined1 *)(((uintptr_t)pf_module_state + 0x2202U)) = 0;
              for (iVar6 = 0; iVar8 = (*(uint32_t *)(uint32_t[]){0x5714ULL}), iVar6 != 2; iVar6 = iVar6 + 1) {
                piVar22 = (int *)(((uintptr_t)pf_module_state + 0x216cU));
                *(undefined4 *)(((uintptr_t)pf_module_state + 0x2210U)) = 1;
                *(char *)(iVar8 + 0x10004980) = (char)iVar6 * '\x10' + -0x20;
                *(char *)(iVar8 + 0x10004981) = (char)iVar7;
                *(short *)(iVar8 + 0x1000497e) = sVar13;
                *(short *)(iVar8 + 0x1000497c) = sVar2;
                iVar11 = recovered_100061f0(param_1,piVar22);
                if (iVar11 != 0) goto LAB_10003f5c;
                *(undefined4 *)(iVar8 + 0x10004990) = 0;
              }
            }
          }
        }
        else {
          local_484[0] = 0;
          iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                                     (int)puVar20);
          if (iVar7 != 0) {
            local_84[0] = local_484[0] | 1;
            iVar7 = recovered_10006490(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       local_84[0]);
            if (iVar7 != 0) {
              iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,
                                         2,(int)local_84);
              uVar5 = 0;
              if (iVar7 != 0) {
                uVar5 = local_84[0];
              }
              if (iVar7 != 0 && (uVar5 & 1) != 0) {
                bVar23 = param_2[10];
                goto LAB_100047c4;
              }
            }
          }
        }
      }
    }
  }
  else {
    sVar2 = *(short *)(param_2 + 4);
    bVar24 = sVar2 == 0x106b;
    if (bVar24) {
      sVar2 = *(short *)(param_2 + 6);
    }
    if (bVar24 && sVar2 == 0x10) goto LAB_10003e8c;
    bVar24 = recovered_10005b70(param_1,param_2,(int)local_8c8);
    if (!bVar24) goto LAB_10004784;
    local_484[0] = 0;
    recovered_100054a0((undefined1 *)(((uintptr_t)pf_module_state + 0x2170U)),100);
    iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1,
                               (int)puVar20);
    if (iVar7 == 0) {
LAB_10004728:
      local_484[0] = 0;
      local_84[0] = 0;
      local_488 = 0;
      local_48c = 0;
      local_490 = 0;
      local_494 = 0;
      local_498 = 0;
      if (((param_1 != (int *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
         (*(short *)(param_2 + 6) == 0x1001)) {
        bVar24 = (*(uint *)(param_2 + 0x14) & 1) == 0;
        if (!bVar24) {
          puVar20 = (uint *)(*(uint *)(param_2 + 0x14) & 0xfffc);
          bVar24 = puVar20 == (uint *)0x0;
        }
        if (!bVar24) {
          uVar5 = (int)puVar20 + 0x12U & 0xffff;
          iVar7 = recovered_10006a44(param_1,uVar5,1,0);
          if (((iVar7 != 0) && (iVar7 = recovered_10006a44(param_1,uVar5,1,3), iVar7 != 0)) &&
             ((iVar7 = recovered_10006af8(param_1,(int)puVar20,4,(int)local_484), iVar7 != 0 &&
              ((iVar7 = recovered_10006a44(param_1,(uint)(puVar20 + 1) & 0xffff,4,
                                           local_484[0] & 0x200), iVar7 != 0 &&
               (iVar7 = recovered_10006a44(param_1,(int)puVar20 + 0xeU & 0xffff,2,0), iVar7 != 0))))
             )) {
            iVar6 = recovered_10006af8(param_1,(uint)(puVar20 + 3) & 0xffff,2,(int)&local_48c);
            uVar9 = local_48c;
            iVar7 = (*(uint32_t *)(uint32_t[]){0x5504ULL});
            if ((iVar6 != 0) &&
               ((local_48c - 3 < 0x7e &&
                (uVar12 = local_48c - ((*(uint32_t *)(uint32_t[]){0x55555555ULL}) & local_48c >> 1),
                uVar12 = (uVar12 & (*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL})) + ((*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL}) & uVar12 >> 2),
                (uVar12 + (uVar12 >> 4) & (*(uint32_t *)(uint64_t[]){0x10101010f0f0f0fULL})) * (*(uint32_t *)(uint32_t[]){0x1010101ULL}) >> 0x18 < 2)))) {
              pvVar17 = (void *)(((uintptr_t)pf_module_state + 0x216cU));
              *(undefined4 *)(((uintptr_t)pf_module_state + 0x21f8U)) = 1;
              uVar12 = recovered_10005b50(param_2);
              *(short *)(((uintptr_t)pf_module_state+0x21f0U)) = (short)uVar9;
              pcVar16 = recovered_10005afc + iVar7;
              *(uint *)(((uintptr_t)pf_module_state+0x21dcU)) = uVar12 | 0x40000000;
              *(short *)(((uintptr_t)pf_module_state+0x21f6U)) = (short)puVar20;
              recovered_100054a0(pcVar16,0x2000);
              uVar9 = recovered_10005d24(pvVar17,pcVar16,0x2000,local_84,&local_488);
              if (uVar9 != 0) {
                uVar9 = local_488;
                uVar12 = extraout_r1_08;
                if (local_488 == 0) {
                  uVar12 = local_84[0] & 0xffff;
                  uVar9 = 0xfff;
                }
                if (local_488 == 0 && (uVar12 & uVar9) == 0) {
                  recovered_10005d9c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0x21dcU)),pcVar16,
                                     0x2000);
                  recovered_10005de4(param_1);
                  iVar7 = recovered_10006a44(param_1,(uint)(puVar20 + 2) & 0xffff,4,
                                             local_84[0] >> 0xc);
                  if (((((iVar7 != 0) &&
                        (iVar7 = recovered_10006af8(param_1,(uint)(puVar20 + 5) & 0xffff,4,
                                                    (int)&local_490), iVar7 != 0)) &&
                       (iVar7 = recovered_10006af8(param_1,(uint)(puVar20 + 6) & 0xffff,4,
                                                   (int)&local_494), iVar7 != 0)) &&
                      ((local_494 == 0 && (local_490 != 0)))) &&
                     (iVar7 = recovered_10006a44(param_1,uVar5,1,7), iVar7 != 0)) {
                    iVar6 = recovered_10006af8(param_1,uVar5,1,(int)&local_498);
                    iVar7 = (*(uint32_t *)(uint32_t[]){0x539cULL});
                    uVar5 = 0;
                    if (iVar6 != 0) {
                      uVar5 = local_498 & 0xff;
                    }
                    if (iVar6 != 0 && (uVar5 & 4) != 0) {
                      iVar6 = ((uintptr_t)pf_module_state + 0x216cU);
                      *(uint *)(((uintptr_t)pf_module_state + 0x21e8U)) = local_490;
                      *(undefined4 *)(((uintptr_t)pf_module_state+0x21e0U)) = 1;
                      uVar5 = local_484[0];
                      goto LAB_10004c70;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar5 = 0;
      while( true ) {
        bVar25 = 0x1e < uVar5;
        bVar24 = uVar5 == 0x1f;
        if (uVar5 < 0x20) {
          bVar25 = 0xae < local_484[0] - 0x40;
          bVar24 = local_484[0] - 0x40 == 0xaf;
        }
        if (bVar25 && !bVar24) break;
        local_84[0] = 0;
        local_488 = 0;
        local_48c = 0;
        local_490 = 0;
        local_494 = 0;
        local_498 = 0;
        iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                   local_484[0] & 0xffff,1,(int)local_84);
        if ((iVar7 == 0) ||
           (iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_484[0] & 0xffff) + 1 & 0xffff,1,(int)&local_488),
           iVar7 == 0)) break;
        uVar9 = extraout_r1_00;
        if (local_84[0] == 9) {
          iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     (local_484[0] & 0xffff) + 3 & 0xffff,1,(int)&local_48c);
          uVar9 = extraout_r1_01;
          if (iVar7 != 0) {
            iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_484[0] & 0xffff) + 4 & 0xffff,1,(int)&local_490);
            uVar9 = extraout_r1_02;
            if (iVar7 != 0) {
              iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_484[0] & 0xffff) + 8 & 0xffff,4,(int)&local_494);
              uVar9 = extraout_r1_03;
              if (iVar7 != 0) {
                iVar7 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_484[0] & 0xffff) + 0xc & 0xffff,4,(int)&local_498)
                ;
                uVar9 = extraout_r1_04;
                if (iVar7 != 0) {
                  *(int *)(((uintptr_t)pf_module_state + 0x219cU)) = *(int *)(((uintptr_t)pf_module_state + 0x219cU)) + 1;
                  local_49c = 0;
                  if ((local_48c == 1) && (0x37 < local_498)) {
                    bVar24 = recovered_10006bd8(param_1,param_2,local_490,local_494,local_498,
                                                &local_49c);
                    iVar7 = (*(uint32_t *)(uint32_t[]){0x5c50ULL});
                    if (bVar24) {
                      uVar9 = ((uintptr_t)pf_module_state + 0x216cU);
                      *(int *)(((uintptr_t)pf_module_state + 0x2170U)) = local_49c;
                      *(uint *)(((uintptr_t)pf_module_state+0x2184U)) = local_490;
                      goto LAB_10004534;
                    }
                  }
                  uVar9 = local_498;
                  if ((local_48c == 2) && (1 < local_498)) {
                    bVar24 = recovered_10006bd8(param_1,param_2,local_490,local_494,local_498,
                                                &local_49c);
                    iVar7 = (*(uint32_t *)(uint32_t[]){0x5becULL});
                    uVar9 = extraout_r1_05;
                    if (bVar24) {
                      *(int *)(((uintptr_t)pf_module_state + 0x2174U)) = local_49c;
                      *(uint *)(((uintptr_t)pf_module_state+0x2188U)) = local_490;
                      local_4a0 = 0;
                      iVar8 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],
                                                 (uint)param_2[2],
                                                 (local_484[0] & 0xffff) + 0x10 & 0xffff,4,
                                                 (int)&local_4a0);
                      iVar6 = (*(uint32_t *)(uint32_t[]){0x5ad4ULL});
                      iVar7 = 0;
                      if (iVar8 != 0) {
                        iVar7 = local_4a0;
                      }
                      if (iVar8 != 0 && iVar7 != 0) {
                        uVar9 = ((uintptr_t)pf_module_state + 0x216cU);
                        *(int *)(((uintptr_t)pf_module_state + 0x2194U)) = iVar7;
                        *(uint *)(((uintptr_t)pf_module_state+0x2198U)) = local_498;
                      }
                      else {
                        uVar9 = 0;
                        *(undefined4 *)(((uintptr_t)pf_module_state + 0x2174U)) = 0;
                      }
                      goto LAB_10004534;
                    }
                  }
                  if (local_48c == 3) {
                    bVar24 = recovered_10006bd8(param_1,param_2,local_490,local_494,local_498,
                                                &local_49c);
                    iVar7 = (*(uint32_t *)(uint32_t[]){0x5b44ULL});
                    uVar9 = extraout_r1_06;
                    if (bVar24) {
                      uVar9 = ((uintptr_t)pf_module_state + 0x216cU);
                      *(int *)(((uintptr_t)pf_module_state + 0x2178U)) = local_49c;
                      *(uint *)(((uintptr_t)pf_module_state+0x218cU)) = local_490;
                      goto LAB_10004534;
                    }
                  }
                  if (local_48c == 4) {
                    bVar24 = recovered_10006bd8(param_1,param_2,local_490,local_494,local_498,
                                                &local_49c);
                    iVar7 = (*(uint32_t *)(uint32_t[]){0x5af4ULL});
                    uVar9 = extraout_r1_07;
                    if (bVar24) {
                      uVar9 = ((uintptr_t)pf_module_state + 0x216cU);
                      *(int *)(((uintptr_t)pf_module_state + 0x217cU)) = local_49c;
                      *(uint *)(((uintptr_t)pf_module_state+0x2180U)) = local_498;
                      *(uint *)(((uintptr_t)pf_module_state+0x2190U)) = local_490;
                    }
                  }
                }
              }
            }
          }
        }
LAB_10004534:
        if (local_488 != 0) {
          uVar9 = local_484[0];
        }
        if (local_488 == 0 || local_488 == uVar9) break;
        local_484[0] = local_488;
        uVar5 = uVar5 + 1;
      }
      iVar7 = (*(uint32_t *)(uint32_t[]){0x5a90ULL});
      if (*(uint *)(((uintptr_t)pf_module_state + 0x2170U)) == 0) goto LAB_10004728;
      local_484[0] = 0;
      local_84[0] = 0;
      recovered_10005ecc(param_1,*(uint *)(((uintptr_t)pf_module_state + 0x2170U)),0x14,
                         (void *)(((uintptr_t)pf_module_state + 0x21b0U)));
      *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 1;
      bVar24 = recovered_10006c3c(param_1,*(int *)(iVar7 + 0x10004574));
      if (bVar24) {
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 2;
        uVar5 = recovered_10006a2c(param_1,*(uint *)(iVar7 + 0x10004574),0x14,1);
        if (((uVar5 == 0) ||
            (uVar5 = recovered_10005ecc(param_1,*(uint *)(iVar7 + 0x10004574),0x14,local_84),
            uVar5 == 0)) || ((local_84[0] & 0xc1) != 1)) goto LAB_100046d0;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 3;
        uVar5 = recovered_10006a2c(param_1,*(uint *)(iVar7 + 0x10004574),0x14,3);
        if (((uVar5 == 0) ||
            (uVar5 = recovered_10005ecc(param_1,*(uint *)(iVar7 + 0x10004574),0x14,local_84),
            uVar5 == 0)) || ((local_84[0] & 0xc3) != 3)) goto LAB_100046d0;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 4;
        recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),0,0);
        if (((extraout_r0 == 0) ||
            (bVar24 = recovered_10005ee8(param_1,*(int *)(iVar7 + 0x10004574),4,
                                         (undefined4 *)(((uintptr_t)pf_module_state+0x21a0U))), !bVar24)) ||
           (recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),0,1), extraout_r0_00 == 0))
        goto LAB_100046d0;
        bVar24 = recovered_10005ee8(param_1,*(int *)(iVar7 + 0x10004574),4,
                                    (undefined4 *)(((uintptr_t)pf_module_state+0x21a4U)));
        uVar5 = 0;
        if (bVar24) {
          uVar5 = *(uint *)(((uintptr_t)pf_module_state+0x21a4U));
        }
        if (!bVar24 || (uVar5 & 1) == 0) goto LAB_100046d0;
        *(uint *)(iVar7 + 0x100045b0) = uVar5 & 3;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 5;
        *(uint *)(((uintptr_t)pf_module_state+0x21a8U)) = *(uint *)(((uintptr_t)pf_module_state+0x21a0U)) & 0x200;
        recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),8,0);
        if (((extraout_r0_01 == 0) ||
            (recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),0xc,
                                *(undefined4 *)(((uintptr_t)pf_module_state+0x21a8U))), extraout_r0_02 == 0)) ||
           ((recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),8,1), extraout_r0_03 == 0 ||
            (recovered_10006cfc(param_1,*(int *)(iVar7 + 0x10004574),0xc,
                                *(undefined4 *)(iVar7 + 0x100045b0)), extraout_r0_04 == 0))))
        goto LAB_100046d0;
        recovered_10005de4(param_1);
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 6;
        local_84[0] = 0xb;
        uVar5 = recovered_10006a2c(param_1,*(uint *)(iVar7 + 0x10004574),0x14,0xb);
        if (((uVar5 == 0) ||
            (uVar5 = recovered_10005ecc(param_1,*(uint *)(iVar7 + 0x10004574),0x14,
                                        (void *)(((uintptr_t)pf_module_state+0x21b4U))), uVar5 == 0)) ||
           ((*(uint *)(((uintptr_t)pf_module_state+0x21b4U)) & 200) != 8)) goto LAB_100046d0;
        *(undefined4 *)(((uintptr_t)pf_module_state+0x21b8U)) = 7;
        bVar24 = recovered_10005e80(param_1,*(int *)(iVar7 + 0x10004574),0x12,
                                    (undefined4 *)(((uintptr_t)pf_module_state+0x21bcU)));
        if ((((!bVar24) ||
             (uVar5 = recovered_10005ecc(param_1,*(uint *)(iVar7 + 0x10004574),0x15,
                                         (void *)(((uintptr_t)pf_module_state+0x21d0U))), uVar5 == 0)) ||
            (uVar5 = recovered_10005e20(param_1,*(uint *)(iVar7 + 0x10004574),0x16,0), uVar5 == 0))
           || ((bVar24 = recovered_10005e80(param_1,*(int *)(iVar7 + 0x10004574),0x18,
                                            (undefined4 *)(((uintptr_t)pf_module_state+0x21c0U))), !bVar24 ||
               (bVar24 = recovered_10005e80(param_1,*(int *)(iVar7 + 0x10004574),0x1c,
                                            (undefined4 *)(((uintptr_t)pf_module_state+0x21c4U))), !bVar24))))
        goto LAB_100046d0;
        bVar24 = recovered_10005e80(param_1,*(int *)(iVar7 + 0x10004574),0x1e,local_484);
        iVar7 = (*(uint32_t *)(uint32_t[]){0x5180ULL});
        if (bVar24) {
          *(uint *)(((uintptr_t)pf_module_state + 0x21c8U)) = local_484[0];
          uVar5 = *(uint *)(((uintptr_t)pf_module_state+0x2174U));
          if (((((uVar5 != 0) && (uVar9 = *(uint *)(((uintptr_t)pf_module_state + 0x2194U)), uVar9 != 0)) &&
               (1 < *(uint *)(((uintptr_t)pf_module_state + 0x2198U)))) &&
              (((int)((ulonglong)local_484[0] * (ulonglong)uVar9 >> 0x20) == 0 &&
               (uVar9 = uVar9 * local_484[0], !CARRY4(uVar5,uVar9))))) &&
             (uVar9 <= *(uint *)(((uintptr_t)pf_module_state + 0x2198U)) - 2)) {
            *(uint *)(((uintptr_t)pf_module_state + 0x21ccU)) = uVar9 + uVar5;
          }
        }
        iVar7 = (*(uint32_t *)(uint32_t[]){0x510cULL});
        *(undefined4 *)(((uintptr_t)pf_module_state + 0x21b8U)) = 8;
        uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x21acU));
        uVar5 = recovered_10005b50(param_2);
        *(uint *)(((uintptr_t)pf_module_state+0x21dcU)) = (uVar5 | (uVar9 & 2) << 0x1d) ^ 0x40000000;
        iVar6 = (*(uint32_t *)(uint32_t[]){0x5044ULL});
        bVar24 = *(int *)(((uintptr_t)pf_module_state+0x21ccU)) == 0;
        iVar7 = 0;
        if (!bVar24) {
          iVar7 = *(int *)(((uintptr_t)pf_module_state + 0x217cU));
        }
        if (((bVar24 || iVar7 == 0) || (*(uint *)(((uintptr_t)pf_module_state + 0x2180U)) < 8)) ||
           ((uVar5 = *(uint *)(((uintptr_t)pf_module_state + 0x21c0U)), uVar5 < 3 ||
            ((uVar9 = uVar5 - ((*(uint32_t *)(uint32_t[]){0x55555555ULL}) & uVar5 >> 1),
             uVar9 = (uVar9 & (*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL})) + ((*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL}) & uVar9 >> 2),
             1 < (uVar9 + (uVar9 >> 4) & (*(uint32_t *)(uint64_t[]){0x10101010f0f0f0fULL})) * (*(uint32_t *)(uint32_t[]){0x1010101ULL}) >> 0x18 ||
             (*(int *)(((uintptr_t)pf_module_state + 0x21c4U)) != 0)))))) goto LAB_10004784;
        if (7 < uVar5) {
          uVar5 = 8;
        }
        pvVar17 = (void *)(((uintptr_t)pf_module_state + 0x216cU));
        data_00 = (undefined1 *)(((uintptr_t)pf_module_state + 0x226cU));
        *(short *)(((uintptr_t)pf_module_state + 0x21f0U)) = (short)uVar5;
        recovered_100054a0(data_00,0x80);
        data_01 = (undefined1 *)(((uintptr_t)pf_module_state+0x236cU));
        recovered_100054a0(data_01,0x16);
        data = (undefined1 *)(((uintptr_t)pf_module_state+0x246cU));
        recovered_100054a0(data,0x46);
        uVar5 = recovered_10005d24(pvVar17,data_00,0x80,&local_4a4,&local_4a8);
        if ((((uVar5 == 0) ||
             (uVar5 = recovered_10005d24((void *)(((uintptr_t)pf_module_state + 0x216cU)),data_01,0x16,&local_4ac
                                         ,&local_4b0), uVar5 == 0)) ||
            (uVar5 = recovered_10005d24((void *)(((uintptr_t)pf_module_state + 0x216cU)),data,0x46,&local_4b4,
                                        (uint *)(local_4c8 + 4)), uVar5 == 0)) ||
           ((local_4a4 & 0xf) != 0)) goto LAB_10004784;
        bVar24 = (local_4ac & 1) != 0;
        bVar23 = (byte)local_4ac;
        if (!bVar24) {
          bVar23 = (byte)local_4b4;
        }
        if (bVar24 || (bVar23 & 3) != 0) goto LAB_10004784;
        recovered_10005d9c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x21dcU)),data_00,0x80);
        iVar7 = (*(uint32_t *)(uint64_t[]){0x4ef400004f40ULL});
        recovered_10005d9c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0x21dcU)),data_01,0x16);
        recovered_10005d9c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0x21dcU)),data,0x46);
        recovered_10005de4(param_1);
        uVar5 = recovered_10005e20(param_1,*(uint *)(((uintptr_t)pf_module_state+0x2170U)),0x16,0);
        if ((((uVar5 == 0) ||
             (uVar5 = recovered_10005e20(param_1,*(uint *)(((uintptr_t)pf_module_state + 0x2170U)),0x18,
                                         (uint)*(ushort *)(((uintptr_t)pf_module_state + 0x21f0U))), uVar5 == 0))
            || ((bVar24 = recovered_10005e38(param_1,*(int *)(((uintptr_t)pf_module_state + 0x2170U)),0x20,
                                             local_4a4,local_4a8), !bVar24 ||
                ((bVar24 = recovered_10005e38(param_1,*(int *)(((uintptr_t)pf_module_state + 0x2170U)),0x28,
                                              local_4ac,local_4b0), !bVar24 ||
                 (bVar24 = recovered_10005e38(param_1,*(int *)(((uintptr_t)pf_module_state + 0x2170U)),0x30,
                                              local_4b4,local_4c8[4]), !bVar24)))))) ||
           ((uVar5 = recovered_10005e20(param_1,*(uint *)(((uintptr_t)pf_module_state + 0x2170U)),0x1c,1),
            uVar5 == 0 ||
            ((bVar24 = recovered_10005e80(param_1,*(int *)(((uintptr_t)pf_module_state + 0x2170U)),0x1c,local_4c8
                                         ), !bVar24 || (local_4c8[0] != 1)))))) goto LAB_10004784;
        iVar7 = 5;
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_10004784;
          local_484[0] = 0;
          local_84[0] = 0;
          uVar5 = recovered_10005ecc(param_1,*(uint *)(((uintptr_t)pf_module_state + 0x2170U)),0x15,local_484);
          if ((((uVar5 == 0) ||
               (bVar24 = recovered_10005ee8(param_1,*(int *)(((uintptr_t)pf_module_state + 0x217cU)),0,
                                            local_4c8 + 3), !bVar24)) ||
              (bVar24 = recovered_10005ee8(param_1,*(int *)(((uintptr_t)pf_module_state + 0x217cU)),4,
                                           local_4c8 + 2), !bVar24)) ||
             (uVar5 = recovered_10005ecc(param_1,*(uint *)(((uintptr_t)pf_module_state + 0x2170U)),0x15,local_84)
             , uVar5 == 0)) goto LAB_10004784;
        } while (local_484[0] != local_84[0]);
        if ((local_4c8[2] != 0) ||
           (*(int *)(((uintptr_t)pf_module_state + 0x21e8U)) = local_4c8[3], local_4c8[3] == 0))
        goto LAB_10004784;
        uVar5 = *(uint *)(((uintptr_t)pf_module_state + 0x2170U));
        local_484[0] = 0;
        if (((uVar5 == 0) ||
            ((uVar9 = recovered_10005ecc(param_1,uVar5,0x14,local_484), uVar9 == 0 ||
             ((local_484[0] & 200) != 8)))) ||
           (uVar9 = recovered_10006a2c(param_1,uVar5,0x14,local_484[0] | 4), uVar9 == 0))
        goto LAB_10004784;
        uVar5 = recovered_10005ecc(param_1,uVar5,0x14,local_484);
        iVar7 = (*(uint32_t *)(uint32_t[]){0x4c70ULL});
        if ((uVar5 == 0) || ((local_484[0] & 0xc4) != 4)) goto LAB_10004784;
        iVar6 = ((uintptr_t)pf_module_state + 0x216cU);
        *(undefined4 *)(((uintptr_t)pf_module_state + 0x21e0U)) = 1;
        uVar5 = *(uint *)((int)&(*(uint32_t *)(uint64_t[]){0x539c00005484ULL}) + iVar7);
LAB_10004c70:
        *(uint *)(iVar6 + 0x78) = (uVar5 & 0x3ff) >> 9;
        goto LAB_10003f5c;
      }
LAB_100046d0:
      uVar9 = recovered_10005ecc(param_1,*(uint *)(iVar7 + 0x10004574),0x14,local_84);
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = local_84[0];
      }
      if (uVar9 != 0 && uVar5 != 0) {
        recovered_10006a2c(param_1,*(uint *)(iVar7 + 0x10004574),0x14,uVar5 | 0x80);
      }
      uVar9 = *(uint *)(iVar7 + 0x100045b0);
      uVar5 = recovered_10005b50(param_2);
      *(uint *)(((uintptr_t)pf_module_state+0x13bcU)) = (uVar5 | (uVar9 & 2) << 0x1d) ^ 0x40000000;
    }
  }
LAB_10004784:
  recovered_10005f34((undefined4 *)(((uintptr_t)pf_module_state + 0x216cU)));
LAB_10004790:
  recovered_10005a0c(param_1,((uintptr_t)pf_module_state + 0x61U));
  return 0;
}

#undef DAT_10004c7c
#undef DAT_10004c80
#undef DAT_10004c84
#undef DAT_10004c88
#undef DAT_10004c8c
#undef DAT_10004c90
#undef DAT_10004c94
#undef DAT_10004c98
#undef DAT_10004c9c
#undef DAT_10004ca0
#undef DAT_10004ca4
#undef DAT_10004ca8
#undef DAT_10004cac
#undef DAT_10004cb0
#undef DAT_10004cb4
#undef DAT_10004cb8
#undef DAT_10004cbc
#undef DAT_10004cc0
#undef DAT_10004cc4
#undef DAT_10004cc8
#undef DAT_10005398
#undef DAT_1000539c
#undef DAT_100053a0
#undef DAT_100053a4
#undef DAT_100053a8
#undef DAT_100053ac
#undef DAT_100053b0
#undef DAT_100053b4
#undef DAT_100053b8
#undef DAT_100053bc
#undef DAT_100053c0
#undef DAT_100053c4
#undef DAT_100053c8
#undef DAT_100053cc
#undef DAT_100053d0
#undef DAT_100053d4
#undef DAT_100053d8
#undef DAT_100053dc
#undef DAT_100053e0
#undef DAT_100053e4
#undef DAT_100053e8
#undef DAT_100053ec
#undef DAT_100053f0
#undef DAT_100053f4
#undef DAT_100053f8
#undef DAT_100053fc
#undef DAT_10005400
#undef DAT_10005404
#undef DAT_10005408
#undef DAT_1000540c
#undef DAT_10005410
#undef DAT_10005414
#undef DAT_10005418
#undef DAT_1000541c
#undef DAT_10005420
#undef DAT_10005424
#undef DAT_10005428
#undef DAT_1000542c
#undef DAT_10005430
#undef DAT_10005434
#undef DAT_10005438
#undef DAT_1000543c
#undef DAT_10005440
#undef DAT_10005444
#undef local_8c8
#undef local_4c8
#undef local_4b4
#undef local_4b0
#undef local_4ac
#undef local_4a8
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_84

#undef DAT_10005494
#define DAT_10005494 (*(int *)(0x10005494U))
#undef DAT_10005498
#define DAT_10005498 (*(int *)(0x10005498U))
#undef DAT_1000549c
#define DAT_1000549c (*(int *)(0x1000549cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005448
 */

void recovered_10005448(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;

  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state + 0x216cU));
  for (uVar2 = 0; uVar2 < *(uint *)(((uintptr_t)pf_module_state + 0x116cU)); uVar2 = uVar2 + 1) {
    recovered_10005f34(puVar1);
    puVar1 = puVar1 + 0x1c00;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x116cU)) = 0;
  return;
}

#undef DAT_10005494
#undef DAT_10005498
#undef DAT_1000549c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054a0
 */

void recovered_100054a0(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_100055a8
#define DAT_100055a8 (*(int *)(0x100055a8U))
#undef DAT_100055ac
#define DAT_100055ac (*(int *)(0x100055acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c4
 */

bool recovered_100054c4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int *device;

  bVar1 = false;
  if ((param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x116cU))) &&
     (device = (int *)(((uintptr_t)pf_module_state + 0x216cU) + param_1 * 0x7000), device[0x1e] != 0)) {
    if (device[0x29] == 0) {
      bVar1 = recovered_10006e50(device,4,0,(undefined1 *)0x0,0);
    }
    else {
      recovered_10006e1c((int)device);
      uVar2 = recovered_10006500(device,2);
      bVar1 = false;
      if (uVar2 != 0) {
        iVar3 = recovered_100066f4(device,(uint)*(byte *)(device + 0x25));
        bVar1 = false;
        if (iVar3 != 0) {
          iVar3 = recovered_10006820(device,0xe7);
          bVar1 = false;
          if ((iVar3 != 0) && (iVar3 = recovered_10006870(device,0,0x29), bVar1 = false, iVar3 != 0)
             ) {
            bVar1 = true;
          }
        }
      }
      DataMemoryBarrier(0xb);
      device[0x20] = 0;
    }
  }
  return bVar1;
}

#undef DAT_100055a8
#undef DAT_100055ac

#undef DAT_10005664
#define DAT_10005664 (*(int *)(0x10005664U))
#undef DAT_10005668
#define DAT_10005668 (*(int *)(0x10005668U))
#undef DAT_1000566c
#define DAT_1000566c (*(int *)(0x1000566cU))
#undef DAT_10005670
#define DAT_10005670 (*(int *)(0x10005670U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

undefined4 recovered_100055b0(uint param_1,undefined4 *param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  undefined4 uVar4;
  int iVar5;

  uVar4 = 0;
  uVar2 = param_3;
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = *(uint *)(((uintptr_t)pf_module_state + 0x116cU));
    unaff_r4 = param_3;
  }
  if (param_2 != (undefined4 *)0x0 && param_1 < uVar2) {
    uVar4 = 1;
    iVar3 = ((uintptr_t)pf_module_state + 0x216cU) + param_1 * 0x7000;
    *param_2 = *(undefined4 *)(iVar3 + 0x7c);
    iVar1 = ((uintptr_t)pf_module_state + 0x10cU);
    if (*(int *)(iVar3 + 0xa4) == 0) {
      iVar1 = ((uintptr_t)pf_module_state + 0xffU);
    }
    if (unaff_r4 != 0 && param_4 != 0) {
      iVar3 = param_4 + -1;
      for (iVar5 = 0; iVar3 != iVar5; iVar5 = iVar5 + 1) {
        if (*(char *)(iVar1 + iVar5) == '\0') {
          uVar2 = recovered_100078a8(param_1,10);
          iVar3 = iVar5 + 1;
          *(byte *)(unaff_r4 + iVar5) = (byte)uVar2 | 0x30;
          break;
        }
        *(char *)(unaff_r4 + iVar5) = *(char *)(iVar1 + iVar5);
      }
      *(undefined1 *)(unaff_r4 + iVar3) = 0;
    }
  }
  return uVar4;
}

#undef DAT_10005664
#undef DAT_10005668
#undef DAT_1000566c
#undef DAT_10005670

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005674
 */

void recovered_10005674(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100073f8(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005690
 */

void recovered_10005690(uint param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100073f8(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_100057b0
#define DAT_100057b0 (*(int *)(0x100057b0U))
#undef DAT_100057b4
#define DAT_100057b4 (*(int *)(0x100057b4U))
#undef DAT_100057b8
#define DAT_100057b8 (*(int *)(0x100057b8U))
#undef DAT_100057bc
#define DAT_100057bc (*(int *)(0x100057bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056ac
 */

undefined4 recovered_100056ac(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  if (*(uint *)(((uintptr_t)pf_module_state + 0x116cU)) <= param_1) {
    return 0;
  }
  iVar9 = 0;
  iVar10 = ((uintptr_t)pf_module_state + 0x216cU) + param_1 * 0x7000;
  uVar4 = *(undefined1 *)(iVar10 + 0x68);
  iVar7 = ((uintptr_t)pf_module_state + 0x149U);
  if (*(int *)(iVar10 + 0xa4) == 0) {
    iVar7 = ((uintptr_t)pf_module_state + 0x14eU);
  }
  if (*(int *)(iVar10 + 0xac) == 0) {
    uVar8 = (uint)*(ushort *)(iVar10 + 0x90);
  }
  else {
    uVar8 = *(uint *)(iVar10 + 0xa8);
  }
  uVar3 = *(ushort *)(iVar10 + 0x94);
  uVar1 = *(undefined1 *)(iVar10 + 0x69);
  uVar2 = *(undefined1 *)(iVar10 + 0x6a);
  for (; iVar9 != 0x40; iVar9 = iVar9 + 1) {
    *(undefined1 *)(param_2 + iVar9) = 0;
  }
  for (iVar9 = 0; iVar9 != 4; iVar9 = iVar9 + 1) {
    *(undefined1 *)(param_2 + iVar9) = *(undefined1 *)(iVar7 + iVar9);
  }
  *(undefined1 *)(param_2 + 6) = uVar2;
  *(undefined1 *)(param_2 + 5) = uVar1;
  *(undefined1 *)(param_2 + 4) = uVar4;
  puVar6 = (undefined1 *)(param_2 + 8);
  for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 8) {
    *puVar6 = (char)(uVar3 >> (uVar5 & 0xff));
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined1 *)(param_2 + 0x10);
  for (uVar5 = 0; uVar5 != 0x40; uVar5 = uVar5 + 8) {
    uVar4 = (undefined1)(uVar8 >> (uVar5 & 0xff));
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = 0;
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
  }
  return 1;
}

#undef DAT_100057b0
#undef DAT_100057b4
#undef DAT_100057b8
#undef DAT_100057bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c0
 */

void recovered_100057c0(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10005afc((int)param_1,param_2,param_3);
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_100057d4(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10005998((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10005998((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10005998((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10005998((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10005998((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10005a08
#define DAT_10005a08 (*(uint8_t * *)(0x10005a08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005998
 */

undefined4
recovered_10005998(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
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

#undef DAT_10005a08

#undef DAT_10005a48
#define DAT_10005a48 (*(int *)(0x10005a48U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a0c
 */

void recovered_10005a0c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x2c) {
      return;
    }
    if ((code *)param_1[10] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[10])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10005a48

#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a4c
 */

void recovered_10005a4c(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10006d80(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007858(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10006d80(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005afc
 */

void recovered_10005afc(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10006bb0(param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

uint recovered_10005b50(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (uint)param_1[2] << 8 | (uint)*param_1 << 0x10 | (uint)param_1[1] << 0xb | 0x80000000;
}


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
#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

bool recovered_10005b70(int *param_1,byte *param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;

  uVar5 = 0;
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0xb5U));
  }
  else {
    iVar2 = recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)&local_1c);
    if (iVar2 != 0) {
      iVar2 = 5;
      while (iVar2 != 0xb) {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        uVar3 = uVar5;
        if (*(uint *)(param_2 + iVar1) != 0) {
          uVar3 = uVar5 | 2;
        }
        if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
          uVar3 = uVar5 | 1;
        }
        uVar5 = uVar3;
      }
      iVar2 = recovered_10006bb0(((uintptr_t)pf_module_state + 0x4cU));
      if (iVar2 != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar5 = uVar5 | 2;
      }
      local_20 = local_1c | uVar5;
      iVar2 = recovered_10006490(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],local_20);
      if (iVar2 == 0) {
        recovered_10005afc(param_3,0x400,(char *)(((uintptr_t)pf_module_state + 0xd9U)));
        uVar5 = 0;
      }
      else {
        recovered_10005998(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                           (int)&local_20);
        uVar5 = (uint)((local_20 & uVar5) == uVar5);
      }
      goto LAB_10005c3c;
    }
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0xc7U));
  }
  recovered_10005afc(param_3,0x400,pcVar4);
LAB_10005c3c:
  return SUB41(uVar5,0);
}

#undef DAT_10005d10
#undef DAT_10005d14
#undef DAT_10005d18
#undef DAT_10005d1c
#undef DAT_10005d20
#undef local_20
#undef local_1c

#undef DAT_10005d98
#define DAT_10005d98 (*(int *)(0x10005d98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d24
 */

uint recovered_10005d24(void *device,void *data,uint bytes,uint *low,uint *high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  code *pcVar3;

  pcVar3 = *(code **)device;
  uVar1 = 0;
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  if (((*(int *)pcVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) && (0x73 < *(uint *)(pcVar3 + 8))) && (low != (uint *)0x0))
  {
    if (data != (void *)0x0) {
      pcVar3 = *(code **)(pcVar3 + 0x70);
    }
    if ((data != (void *)0x0 && pcVar3 != (code *)0x0) &&
       (uVar2 = (*pcVar3)(*(uint *)((int)device + 0x70),data,bytes,low,high), uVar1 = 0, uVar2 != 0)
       ) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_10005d98

#undef DAT_10005de0
#define DAT_10005de0 (*(int *)(0x10005de0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d9c
 */

void recovered_10005d9c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10005de0

#undef DAT_10005e1c
#define DAT_10005e1c (*(int *)(0x10005e1cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de4
 */

void recovered_10005de4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10005e1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e20
 */

uint recovered_10005e20(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10006a94(api,offset + base,2,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e38
 */

bool recovered_10005e38(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;

  recovered_10006cfc(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return false;
  }
  recovered_10006cfc(param_1,param_2,param_3 + 4,param_5);
  return extraout_r0_00 != 0;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e80
 */

bool recovered_10005e80(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_2 != 0) {
    unaff_r5 = param_4;
  }
  local_14 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    iVar1 = recovered_10006d14(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ecc
 */

uint recovered_10005ecc(int *api,uint base,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0 || out == (void *)0x0) {
    return 0;
  }
  uVar1 = recovered_10006d14(api,offset + base,1,(int)out);
  return uVar1;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee8
 */

bool recovered_10005ee8(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_2 != 0) {
    unaff_r5 = param_4;
  }
  local_14 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    iVar1 = recovered_10006d14(param_1,param_3 + param_2,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f34
 */

void recovered_10005f34(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    sVar1 = 0;
    if (param_1[0x23] != 0) {
      sVar1 = *(short *)((int)param_1 + 0x8a);
    }
    if (param_1[0x23] != 0 && sVar1 != 0) {
      uVar4 = recovered_10006a44(piVar3,(uint)(ushort)(sVar1 + 0x12),1,0);
    }
    else if (param_1[1] == 0) {
      uVar4 = 1;
    }
    else {
      bVar2 = recovered_10006c3c(piVar3,param_1[1]);
      uVar4 = (uint)bVar2;
    }
    if (*(char *)((int)param_1 + 0x6b) != '\0') {
      uVar6 = (uint)*(ushort *)(param_1 + 0x1b);
      if (uVar4 == 0) {
        uVar6 = uVar6 & 0xfffffffb;
      }
      recovered_10006490((int *)*param_1,(uint)*(byte *)(param_1 + 0x1a),
                         (uint)*(byte *)((int)param_1 + 0x69),(uint)*(byte *)((int)param_1 + 0x6a),
                         uVar6);
      *(undefined1 *)((int)param_1 + 0x6b) = 0;
    }
    param_1[0x29] = 0;
    *(undefined2 *)((int)param_1 + 0x8a) = 0;
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    for (iVar5 = 0; iVar5 != 4; iVar5 = iVar5 + 1) {
      *(undefined1 *)((int)param_1 + iVar5 + 0x9d) = 0;
    }
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
  }
  return;
}


/* Recovered PCI BAR checks and physical mapping services.
 * Pooka's Free Software License. */
uint recovered_10006028(int *api,byte *device,uint index,int span,int *output) {
    uint low,high=0;
    if(!output)return 0;
    if(index && ((*(uint *)(device+index*4+0x10)&7)==4))return 0;
    low=*(uint *)(device+index*4+0x14);
    if(!low || (low&1))return 0;
    recovered_10005998((undefined4 *)api,device[0],device[1],device[2],index*4+0x10,4,(int)&low);
    if((low&7)==4) {
        if(index>4)return 0;
        high=*(uint *)(device+index*4+0x18);
        recovered_10005998((undefined4 *)api,device[0],device[1],device[2],index*4+0x14,4,(int)&high);
    }
    low&=(low&1)?0xfffffffcU:0xfffffff0U;
    if(!span || (!low && !high))return 0;
    *output=0;
    if(!api || api[0]!=0x54584b57)return 0;
    if((uint)api[2]>=0xbc && api[0x2e])
        return ((uint (*)(uint,uint,uint,int *))(uintptr_t)(uint)api[0x2e])(low,high,(uint)span,output);
    if(!high && (uint)api[2]>=0x68 && api[0x19]) {
        uint mapped=0;
        uint ok=((uint (*)(uint,uint,uint,uint *))(uintptr_t)(uint)api[0x19])(low,0,(uint)span,&mapped);
        if(ok)*output=(int)mapped;
        return ok!=0;
    }
    return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f0
 */

undefined4 recovered_100061f0(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r4;
  uint local_24;
  uint identify_word=0;
  
  local_24 = 0;
  cVar1 = '\0';
  if (param_2[0x29] != 0) {
    cVar1 = *(char *)((int)param_2 + 0x96);
    unaff_r4 = param_2;
  }
  if (param_2[0x29] == 0 || cVar1 == '\x02') {
    return 0;
  }
  if (cVar1 == '\0') {
    uVar3 = recovered_10006500(unaff_r4,6);
    if (uVar3 == 0) {
      recovered_10006540(unaff_r4,1);
      *(undefined1 *)((int)unaff_r4 + 0x96) = 2;
      return 0;
    }
    iVar4 = recovered_10006620(param_1,10);
    if ((((iVar4 == 0) || (uVar3 = recovered_10006500(unaff_r4,2), uVar3 == 0)) ||
        (iVar4 = recovered_10006620(param_1,2000), iVar4 == 0)) ||
       (bVar2 = recovered_10006664(unaff_r4), !bVar2)) {
      recovered_10006540(unaff_r4,2);
      *(undefined1 *)((int)unaff_r4 + 0x96) = 2;
      return 0;
    }
    *(undefined1 *)((int)unaff_r4 + 0x96) = 1;
  }
  iVar4 = recovered_100066f4(unaff_r4,(uint)*(byte *)(unaff_r4 + 0x25));
  if (iVar4 == 0) {
    uVar3 = 3;
LAB_1000639c:
    recovered_10006540(unaff_r4,uVar3);
    return 0;
  }
  bVar2 = recovered_1000675c(unaff_r4);
  if (!bVar2) {
    uVar3 = 4;
    goto LAB_1000639c;
  }
  iVar4 = recovered_10006820(unaff_r4,0xec);
  if (iVar4 == 0) {
    uVar3 = 5;
  }
  else {
    iVar4 = recovered_10006870(unaff_r4,8,0x21);
    if (iVar4 != 0) {
      for (iVar4 = 0; iVar4 != 0x100; iVar4 = iVar4 + 1) {
        uVar3 = recovered_10006918(unaff_r4,0,2,&identify_word);
        if (uVar3 == 0) {
          uVar3 = 7;
          goto LAB_10006464;
        }
        *(undefined1 *)((int)unaff_r4 + iVar4 * 2 + 0x4000) = (byte)identify_word;
        *(undefined1 *)((int)unaff_r4 + iVar4 * 2 + 0x4001) = (byte)(identify_word>>8);
      }
      iVar4 = recovered_10006620(param_1,1);
      if (iVar4 == 0) {
        uVar3 = 8;
      }
      else {
        iVar4 = unaff_r4[0x101e];
        if (iVar4 == 0) {
          uVar3 = 9;
        }
        else {
          iVar5 = recovered_1000698c(unaff_r4);
          if (iVar5 == 0) {
            uVar3 = 10;
          }
          else {
            uVar6 = recovered_10006918(unaff_r4,7,1,&local_24);
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = local_24;
            }
            if ((uVar6 != 0 && uVar3 != 0) && ((uVar3 & 0x29) == 0)) {
              unaff_r4[0x1f] = iVar4;
              unaff_r4[0x1e] = 1;
              unaff_r4[0x1d] = 1;
              return 1;
            }
            uVar3 = 0xb;
          }
        }
      }
LAB_10006464:
      recovered_10006540(unaff_r4,uVar3);
      goto LAB_1000646c;
    }
    uVar3 = 6;
  }
  recovered_10006540(unaff_r4,uVar3);
LAB_1000646c:
  *(undefined1 *)((int)unaff_r4 + 0x96) = 0;
  return 0;
}



#undef DAT_100064fc
#define DAT_100064fc (*(int *)(0x100064fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006490
 */

undefined4
recovered_10006490(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     ((code *)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}

#undef DAT_100064fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006500
 */

uint recovered_10006500(void *device,uint mask)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (device == (void *)0x0) {
    return 0;
  }
  if (*(int *)((int)device + 0xac) == 0) {
    uVar1 = recovered_10006a44(*(int **)device,(uint)*(ushort *)((int)device + 0x92),1,mask);
    return uVar1;
  }
  uVar1 = recovered_10006a2c(*(int **)device,*(uint *)((int)device + 0xa8),0x160,mask);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006540
 */

void recovered_10006540(undefined4 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  local_1c = 0;
  if (*(byte *)((int)param_1 + 0x97) < param_2) {
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((int)param_1 + 0x95);
    *(char *)((int)param_1 + 0x97) = (char)param_2;
    *(char *)((int)param_1 + 0x99) = (char)((*(byte *)(param_1 + 0x25) & 0x1f) >> 4);
    if (param_1[0x2b] == 0) {
      uVar3 = recovered_10006af8((int *)*param_1,(uint)*(ushort *)((int)param_1 + 0x92),1,
                                 (int)&local_1c);
      uVar1 = (undefined1)uVar3;
    }
    else {
      uVar2 = recovered_10005ecc((int *)*param_1,param_1[0x2a],0x160,&local_1c);
      uVar1 = (undefined1)uVar2;
    }
    *(undefined1 *)((int)param_1 + 0x9b) = uVar1;
    *(undefined1 *)(param_1 + 0x27) = 1;
    iVar5 = 0;
    iVar4 = -0x9d;
    *(char *)((int)param_1 + 0x9a) = (char)local_1c;
    while (iVar4 != -0xa1) {
      uVar2 = recovered_10006918(param_1,iVar5 + 2,1,&local_1c);
      iVar5 = iVar5 + 1;
      if (uVar2 != 0) {
        uVar1 = (undefined1)local_1c;
        uVar3 = local_1c;
      }
      else {
        uVar3 = 0;
        uVar1 = 0;
        *(undefined1 *)(param_1 + 0x27) = 0;
      }
      *(undefined1 *)((int)param_1 - iVar4) = uVar1;
      iVar4 = iVar4 + -1;
      if (uVar2 == 0) {
        local_1c = uVar3;
      }
    }
  }
  return;
}

#undef local_1c

#undef DAT_10006660
#define DAT_10006660 (*(int *)(0x10006660U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006620
 */

undefined4 recovered_10006620(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x34)) ||
     ((code *)param_1[0xc] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0xc])(param_2);
  return uVar1;
}

#undef DAT_10006660

#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006664
 */

bool recovered_10006664(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 31000;
  local_18 = 0;
  while( true ) {
    if ((iVar2 == 0) || (uVar1 = recovered_10006918(param_1,7,1,&local_18), uVar1 == 0)) {
      return false;
    }
    if (local_18 == 0 || local_18 == 0xff) {
      return true;
    }
    if ((local_18 & 0x80) == 0) break;
    recovered_10006620((int *)*param_1,1000);
    iVar2 = iVar2 + -1;
  }
  return (local_18 & 0x29) == 0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f4
 */

undefined4 recovered_100066f4(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_r4;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    unaff_r4 = param_1;
  }
  if (((param_1 != (int *)0x0 && iVar1 != 0) &&
      (uVar2 = recovered_10006b50(unaff_r4,6,1,param_2), uVar2 != 0)) &&
     (iVar1 = recovered_10006620((int *)*unaff_r4,1), iVar1 != 0)) {
    uVar3 = recovered_10006870(unaff_r4,0,0x29);
    return uVar3;
  }
  return 0;
}


#define local_20 (*(int *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
#define local_14 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000675c
 */

bool recovered_1000675c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  uVar1 = recovered_10006918(param_1,2,1,&local_14);
  if ((((uVar1 != 0) && (uVar1 = recovered_10006918(param_1,3,1,&local_18), uVar1 != 0)) &&
      (uVar1 = recovered_10006918(param_1,4,1,&local_1c), uVar1 != 0)) &&
     (uVar1 = recovered_10006918(param_1,5,1,&local_20), uVar1 != 0)) {
    bVar2 = ((local_14 == 1 && local_18 == 1) && local_1c == 0) && local_20 == 0;
  }
  return bVar2;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006820
 */

undefined4 recovered_10006820(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_r4;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    unaff_r4 = param_1;
  }
  if ((param_1 != (int *)0x0 && iVar1 != 0) &&
     (uVar2 = recovered_10006b50(unaff_r4,7,1,param_2), uVar2 != 0)) {
    uVar3 = recovered_10006620((int *)*unaff_r4,1);
    return uVar3;
  }
  return 0;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

undefined4 recovered_10006870(undefined4 *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 100000;
  local_24 = 0;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = recovered_10006918(param_1,7,1,&local_24);
    if (uVar1 == 0) {
      return 0;
    }
    if (local_24 == 0 || local_24 == 0xff) {
      return 0;
    }
    if ((local_24 & 0x80) == 0) {
      if ((local_24 & param_3) != 0) {
        return 0;
      }
      if ((local_24 & param_2) == param_2) {
        return 1;
      }
    }
    recovered_10006620((int *)*param_1,10);
    iVar2 = iVar2 + -1;
  } while( true );
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006918
 */

uint recovered_10006918(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  if (param_1 == (undefined4 *)0x0 || param_4 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1[0x2b] == 0) {
    uVar2 = recovered_10006af8((int *)*param_1,(uint)*(ushort *)(param_1 + 0x24) + param_2 & 0xffff,
                               param_3,(int)param_4);
    return uVar2;
  }
  if (param_3 == 2) {
    bVar1 = recovered_10005e80((int *)*param_1,param_1[0x2a],param_2 << 4,param_4);
    return (uint)bVar1;
  }
  uVar2 = recovered_10005ecc((int *)*param_1,param_1[0x2a],param_2 << 4,param_4);
  return uVar2;
}


#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000698c
 */

undefined4 recovered_1000698c(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  iVar2 = 100000;
  local_1c = 0;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = recovered_10006918(param_1,7,1,&local_1c);
    if (uVar1 == 0) {
      return 0;
    }
    if (local_1c == 0 || local_1c == 0xff) {
      return 0;
    }
    if ((local_1c & 0x80) == 0) {
      if ((local_1c & 0x21) != 0) {
        return 0;
      }
      if ((local_1c & 8) == 0) {
        return 1;
      }
    }
    recovered_10006620((int *)*param_1,10);
    iVar2 = iVar2 + -1;
  } while( true );
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a2c
 */

uint recovered_10006a2c(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10006a94(api,offset + base,1,value);
  return uVar1;
}


#undef DAT_10006a90
#define DAT_10006a90 (*(int *)(0x10006a90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a44
 */

undefined4 recovered_10006a44(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0 || param_2 == 0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) ||
      ((uint)param_1[2] < 0x5c)) || ((code *)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x16])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10006a90

#undef DAT_10006af4
#define DAT_10006af4 (*(int *)(0x10006af4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a94
 */

undefined4 recovered_10006a94(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006adc;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006adc:
                    /* WARNING: Could not recover jumptable at 0x10006ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006af4

#undef DAT_10006b4c
#define DAT_10006b4c (*(int *)(0x10006b4cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af8
 */

undefined4 recovered_10006af8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10006b4c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b50
 */

uint recovered_10006b50(void *device,uint offset,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (*(int *)((int)device + 0xac) == 0) {
    uVar1 = recovered_10006a44(*(int **)device,*(ushort *)((int)device + 0x90) + offset & 0xffff,
                               width,value);
    return uVar1;
  }
  if (width == 2) {
    uVar1 = recovered_10005e20(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,value);
    return uVar1;
  }
  uVar1 = recovered_10006a2c(*(int **)device,*(uint *)((int)device + 0xa8),offset << 4,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bb0
 */

int recovered_10006bb0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10006bd8
 */

bool recovered_10006bd8(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,
                       int *param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_10006028(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c3c
 */

bool recovered_10006c3c(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  bool bVar3;

  if (param_1 != (int *)0x0) {
    unaff_r4 = param_2;
  }
  bVar3 = false;
  local_1c = 0xff;
  if ((param_1 != (int *)0x0 && param_2 != 0) &&
     (uVar1 = recovered_10006a2c(param_1,unaff_r4,0x14,0), uVar1 != 0)) {
    recovered_10005de4(param_1);
    uVar1 = 0;
    while ((uVar1 != 1000 &&
           ((uVar2 = recovered_10005ecc(param_1,unaff_r4,0x14,&local_1c), uVar2 == 0 ||
            (local_1c != 0))))) {
      recovered_10006620(param_1,10);
      uVar1 = uVar1 + 1;
    }
    bVar3 = uVar1 < 1000;
  }
  return bVar3;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cfc
 */

void recovered_10006cfc(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006a94(param_1,param_3 + param_2,4,param_4);
  return;
}


#undef DAT_10006d7c
#define DAT_10006d7c (*(uint8_t * *)(0x10006d7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d14
 */

undefined4 recovered_10006d14(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    UNRECOVERED_JUMPTABLE = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006d6c;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006d6c:
                    /* WARNING: Could not recover jumptable at 0x10006d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006d7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d80
 */

void recovered_10006d80(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10006bb0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dbc
 */

void recovered_10006dbc(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    recovered_10006d80(param_1,param_2,bVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e1c
 */

void recovered_10006e1c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(param_1 + 0x80);
  while( true ) {
    do {
      iVar2 = pf_arm_ldrex32(piVar1);
      iVar3 = pf_arm_strex32(piVar1,1);
    } while (iVar3 != 0);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) break;
    do {
    } while (*piVar1 != 0);
  }
  return;
}


#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

bool recovered_10006e50(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 *param_4,
                       int param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  char *data;
  bool bVar10;
  undefined1 *puVar11;
  int *data_00;
  int iVar12;
  undefined4 *puVar13;

  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  recovered_10006e1c((int)param_1);
  iVar12 = 0x1000;
  local_24 = 0;
  local_28 = 0;
  bVar10 = false;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  if (param_1[0x23] == 0) {
    puVar8 = param_1 + 0x80;
    iVar6 = 0x300;
    iVar12 = 0x100;
  }
  else {
    iVar6 = 0x2000;
    puVar8 = param_1 + (uint)*(ushort *)(param_1 + 0x21) * 4 + 0x400;
  }
  if (param_1[0x1d] == 0) goto LAB_10007308;
  if (param_2 == 4) {
    if (param_1[0x1e] == 0) goto LAB_10007308;
  }
  else if ((param_4 == (undefined1 *)0x0) || (param_5 - 0x11U < 0xfffffff0)) goto LAB_10007308;
  data_00 = param_1 + 0xc00;
  data = (char *)(param_1 + 0x1800);
  recovered_100054a0((undefined1 *)data_00,0x10);
  *data_00 = param_2;
  recovered_10007320((undefined1 *)(param_1 + 0xc02),param_3,0);
  *data = -1;
  uVar3 = recovered_10005d24(param_1,data_00,0x10,&local_24,&local_28);
  if ((uVar3 != 0) && (uVar3 = recovered_10005d24(param_1,data,1,&local_34,&local_38), uVar3 != 0))
  {
    uVar3 = param_5 << 9;
    if (param_2 != 4) {
      uVar4 = recovered_10005d24(param_1,param_1 + 0x1000,uVar3,&local_2c,&local_30);
      if (uVar4 == 0) goto LAB_10007308;
      if (param_2 == 1) {
        recovered_10007364((undefined1 *)(param_1 + 0x1000),param_4,uVar3);
      }
    }
    puVar11 = (undefined1 *)((int)param_1 + iVar12);
    recovered_100054a0(puVar11,(uint)*(ushort *)(param_1 + 0x21) << 4);
    recovered_1000737c(puVar11,local_24,local_28,0x10,1,1);
    puVar5 = puVar11 + 0x10;
    if (param_2 != 4) {
      uVar9 = 1;
      if (param_2 == 0) {
        uVar9 = 3;
      }
      recovered_1000737c(puVar5,local_2c,local_30,uVar3,uVar9,2);
      puVar5 = puVar11 + 0x20;
    }
    recovered_1000737c(puVar5,local_34,local_38,1,2,0);
    uVar4 = recovered_100078a8((uint)*(ushort *)((int)param_1 + 0x86),
                               (uint)*(ushort *)(param_1 + 0x21));
    *(undefined2 *)((int)puVar8 + uVar4 * 2 + 4) = 0;
    iVar12 = *(ushort *)((int)param_1 + 0x86) + 1;
    *(short *)((int)param_1 + 0x86) = (short)iVar12;
    *(char *)((int)puVar8 + 2) = (char)iVar12;
    *(char *)((int)puVar8 + 3) = (char)((uint)iVar12 >> 8);
    uVar1 = *(ushort *)(param_1 + 0x22);
    recovered_10005d9c((int *)*param_1,param_1[0x1c],data_00,0x10);
    puVar13 = param_1 + 0x1000;
    recovered_10005d9c((int *)*param_1,param_1[0x1c],puVar13,uVar3);
    recovered_10005d9c((int *)*param_1,param_1[0x1c],data,1);
    recovered_10005d9c((int *)*param_1,param_1[0x1c],puVar11,(uint)*(ushort *)(param_1 + 0x21) << 4)
    ;
    recovered_10005d9c((int *)*param_1,param_1[0x1c],puVar8,
                       (uint)*(ushort *)(param_1 + 0x21) * 2 + 6);
    recovered_10005de4((int *)*param_1);
    if (param_1[0x23] == 0) {
LAB_100071a0:
      uVar4 = recovered_10005e20((int *)*param_1,param_1[0x18],0,0);
      if (uVar4 != 0) {
LAB_100071bc:
        iVar6 = (int)param_1 + iVar6;
        for (iVar12 = 50000; uVar4 = uVar1 + 1 & 0xffff, iVar12 != 0; iVar12 = iVar12 + -1) {
          recovered_10005d9c((int *)*param_1,param_1[0x1c],iVar6,
                             (uint)*(ushort *)(param_1 + 0x21) << 3 | 6);
          uVar2 = *(ushort *)(iVar6 + 2);
          *(ushort *)(param_1 + 0x22) = uVar2;
          if (uVar2 == uVar4) goto LAB_1000723c;
          recovered_10006620((int *)*param_1,100);
        }
        if (*(ushort *)(param_1 + 0x22) == uVar4) {
LAB_1000723c:
          uVar4 = recovered_100078a8((uint)uVar1,(uint)*(ushort *)(param_1 + 0x21));
          iVar6 = iVar6 + uVar4 * 8;
          iVar12 = recovered_100073d0((undefined4 *)(iVar6 + 4));
          uVar4 = recovered_100073d0((undefined4 *)(iVar6 + 8));
          uVar7 = uVar3 | 1;
          if (param_2 != 0) {
            uVar7 = 1;
          }
          if (((iVar12 == 0) && (uVar4 != 0)) && (uVar4 <= uVar7)) {
            recovered_10005d9c((int *)*param_1,param_1[0x1c],data,1);
            recovered_10005d9c((int *)*param_1,param_1[0x1c],puVar13,uVar3);
            bVar10 = *data == '\0';
            if ((param_2 == 0) && (*data == '\0')) {
              recovered_10007364(param_4,(undefined1 *)puVar13,uVar3);
              bVar10 = true;
            }
            goto LAB_10007308;
          }
        }
      }
    }
    else {
      iVar12 = recovered_10006a44((int *)*param_1,*(ushort *)((int)param_1 + 0x8a) + 0x10 & 0xffff,2
                                  ,0);
      if (iVar12 != 0) {
        if (param_1[0x23] == 0) goto LAB_100071a0;
        goto LAB_100071bc;
      }
    }
    recovered_10005f34(param_1);
  }
  bVar10 = false;
LAB_10007308:
  DataMemoryBarrier(0xb);
  param_1[0x20] = 0;
  return bVar10;
}

#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007320
 */

void recovered_10007320(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  param_1[4] = (char)param_3;
  param_1[7] = (char)((uint)param_3 >> 0x18);
  *param_1 = (char)param_2;
  param_1[5] = (char)((uint)param_3 >> 8);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  param_1[6] = (char)((uint)param_3 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007364
 */

void recovered_10007364(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000737c
 */

void recovered_1000737c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007320(param_1,param_2,param_3);
  param_1[0xe] = (char)param_6;
  param_1[8] = (char)param_4;
  param_1[0xf] = (char)((uint)param_6 >> 8);
  param_1[0xc] = (char)param_5;
  param_1[0xb] = (char)((uint)param_4 >> 0x18);
  param_1[10] = (char)((uint)param_4 >> 0x10);
  param_1[0xd] = (char)((uint)param_5 >> 8);
  param_1[9] = (char)((uint)param_4 >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

undefined4 recovered_100073d0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_100075e8
#define DAT_100075e8 (*(int *)(0x100075e8U))
#undef DAT_100075ec
#define DAT_100075ec (*(int *)(0x100075ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f8
 */

undefined4
recovered_100073f8(uint param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  undefined4 uVar5;
  uint unaff_r8;
  int *device;

  uVar5 = 0;
  if (param_4 != 0) {
    uVar4 = param_2;
    if (param_3 != (undefined1 *)0x0) {
      uVar4 = *(uint *)(((uintptr_t)pf_module_state + 0x116cU));
      unaff_r5 = param_2;
    }
    if (param_3 != (undefined1 *)0x0 && param_1 < uVar4) {
      device = (int *)(((uintptr_t)pf_module_state + 0x216cU) + param_1 * 0x7000);
      uVar4 = device[0x1f];
      if (unaff_r5 <= uVar4) {
        unaff_r8 = param_4;
      }
      if (unaff_r5 <= uVar4 && param_4 <= uVar4 - unaff_r5) {
        if (device[0x29] == 0) {
          do {
            if (unaff_r8 == 0) {
              return 1;
            }
            uVar4 = unaff_r8;
            if (0xf < unaff_r8) {
              uVar4 = 0x10;
            }
            bVar1 = recovered_10006e50(device,param_5,unaff_r5,param_3,uVar4);
            param_3 = param_3 + uVar4 * 0x200;
            unaff_r8 = unaff_r8 - uVar4;
            unaff_r5 = unaff_r5 + uVar4;
          } while (bVar1);
          uVar5 = 0;
        }
        else {
          recovered_10006e1c((int)device);
          uVar5 = 1;
          uVar4 = (uint)(param_5 == 1);
          for (; unaff_r8 != 0; unaff_r8 = unaff_r8 - 1) {
            iVar2 = recovered_100075f0(device,unaff_r5,(int)param_3,uVar4);
            if (iVar2 == 0) {
              iVar2 = 0;
              if (device[0x29] != 0) {
                iVar2 = *device;
              }
              if (((((device[0x29] != 0 && iVar2 != 0) &&
                    (uVar3 = recovered_10006500(device,6), uVar3 != 0)) &&
                   (iVar2 = recovered_10006620((int *)*device,10), iVar2 != 0)) &&
                  ((uVar3 = recovered_10006500(device,2), uVar3 != 0 &&
                   (iVar2 = recovered_10006620((int *)*device,2000), iVar2 != 0)))) &&
                 ((bVar1 = recovered_10006664(device), bVar1 &&
                  ((iVar2 = recovered_100066f4(device,(uint)*(byte *)(device + 0x25)), iVar2 != 0 &&
                   (bVar1 = recovered_1000675c(device), bVar1)))))) {
                *(undefined1 *)((int)device + 0x96) = 1;
                iVar2 = recovered_100075f0(device,unaff_r5,(int)param_3,uVar4);
                if (iVar2 != 0) goto LAB_100074ac;
              }
              recovered_100077b0(device,unaff_r5,uVar4);
              uVar5 = 0;
              break;
            }
LAB_100074ac:
            param_3 = param_3 + 0x200;
            unaff_r5 = unaff_r5 + 1;
          }
          DataMemoryBarrier(0xb);
          device[0x20] = 0;
        }
      }
    }
  }
  return uVar5;
}

#undef DAT_100075e8
#undef DAT_100075ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

int recovered_100075f0(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int iVar5;
  undefined4 local_24;
  
  local_24 = 0;
  iVar5 = 0;
  if ((param_1 != (int *)0x0) && (param_2 < 0x10000000)) {
    piVar1 = param_1;
    if (param_3 != 0) {
      piVar1 = (int *)param_1[0x29];
      unaff_r4 = param_1;
    }
    if (((((param_3 != 0 && piVar1 != (int *)0x0) &&
          (uVar2 = recovered_10006500(unaff_r4,2), uVar2 != 0)) &&
         (iVar3 = recovered_100066f4(unaff_r4,(uint)*(byte *)(unaff_r4 + 0x25) | param_2 >> 0x18),
         iVar3 != 0)) &&
        ((uVar2 = recovered_10006b50(unaff_r4,2,1,1), uVar2 != 0 &&
         (uVar2 = recovered_10006b50(unaff_r4,3,1,param_2), uVar2 != 0)))) &&
       ((uVar2 = recovered_10006b50(unaff_r4,4,1,param_2 >> 8), uVar2 != 0 &&
        (uVar2 = recovered_10006b50(unaff_r4,5,1,param_2 >> 0x10), uVar2 != 0)))) {
      uVar4 = 0x30;
      if (param_4 == 0) {
        uVar4 = 0x20;
      }
      iVar3 = recovered_10006820(unaff_r4,uVar4);
      if ((iVar3 != 0) && (iVar3 = recovered_10006870(unaff_r4,8,0x21), iVar3 != 0)) {
        for (; iVar5 != 0x100; iVar5 = iVar5 + 1) {
          local_24 = 0;
          if (param_4 == 0) {
            uVar2 = recovered_10006918(unaff_r4,0,2,&local_24);
            if (uVar2 == 0) goto LAB_100077a8;
            *(short *)(param_3 + iVar5 * 2) = (short)local_24;
          }
          else {
            local_24 = (uint)*(ushort *)(param_3 + iVar5 * 2);
            uVar2 = recovered_10006b50(unaff_r4,0,2,local_24);
            if (uVar2 == 0) goto LAB_100077a8;
          }
        }
        iVar5 = recovered_10006620((int *)*unaff_r4,1);
        if (iVar5 == 0) {
LAB_100077a8:
          iVar5 = 0;
        }
        else {
          iVar5 = recovered_1000698c(unaff_r4);
        }
      }
    }
  }
  return iVar5;
}



#undef DAT_1000784c
#define DAT_1000784c (*(int *)(0x1000784cU))
#undef DAT_10007850
#define DAT_10007850 (*(int *)(0x10007850U))
#define auStack_d4 (*(undefined1 (*)[212])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b0
 */

void recovered_100077b0(int *param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;

  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[0x1d];
  }
  if ((*param_1 != 0 && iVar1 != 0) && (param_1[0x2c] == 0)) {
    param_1[0x2c] = 1;
    pcVar2 = (char *)(((uintptr_t)pf_module_state + 0x116U));
    if (param_3 == 0) {
      pcVar2 = (char *)(((uintptr_t)pf_module_state + 0x130U));
    }
    recovered_100057c0(auStack_d4,0xc0,pcVar2);
    recovered_10005a4c((int)auStack_d4,0xc0,param_2);
    recovered_10005a0c((int *)*param_1,auStack_d4);
  }
  return;
}

#undef DAT_1000784c
#undef DAT_10007850
#undef auStack_d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007858
 */

uint recovered_10007858(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100078a8
 */

uint recovered_100078a8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100078e0
 */

uint recovered_100078e0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007950
 */

uint recovered_10007950(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100079b8
 */

undefined8 recovered_100079b8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007a9c
 */

undefined8 recovered_10007a9c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007b1c
 */

undefined8 recovered_10007b1c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007c3c
 */

undefined8 recovered_10007c3c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10007d78
#define DAT_10007d78 (*(double *)(0x10007d78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf8
 */

undefined8 recovered_10007cf8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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

#undef DAT_10007d78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d80
 */

undefined8 recovered_10007d80(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007cf8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007cf8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dcc
 */

undefined8 recovered_10007dcc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007cf8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x16cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ddc
 */

void recovered_10007ddc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x154U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dec
 */

double recovered_10007dec(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10007e34
 */

double recovered_10007e34(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10007dec(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10007dec(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e5c
 */

float recovered_10007e5c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007dec(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e78
 */

float recovered_10007e78(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007e34(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
