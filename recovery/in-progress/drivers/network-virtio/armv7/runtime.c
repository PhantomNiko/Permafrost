/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10000904
#define DAT_10000904 (*(uint32_t *)(0x10000904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f8
 */

void * recovered_100008f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0xc270U));
}

#undef DAT_10000904

#undef DAT_10000ad0
#define DAT_10000ad0 (*(int *)(0x10000ad0U))
#undef DAT_10000ad4
#define DAT_10000ad4 (*(int *)(0x10000ad4U))
#undef DAT_10000ad8
#define DAT_10000ad8 (*(int *)(0x10000ad8U))
#undef DAT_10000adc
#define DAT_10000adc (*(int *)(0x10000adcU))
#undef DAT_10000ae0
#define DAT_10000ae0 (*(int *)(0x10000ae0U))
#undef DAT_10000ae4
#define DAT_10000ae4 (*(int *)(0x10000ae4U))
#define auStack_480 (*(undefined1 (*)[1152])(pf_stack_frame + 16))
#define local_80 (*(uint *)(pf_stack_frame + 1040))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 1044))
#define local_44 (*(char *)(pf_stack_frame + 1100))
#define abStack_50 (*(byte (*)[80])(pf_stack_frame + 1088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000908
 */

uint recovered_10000908(void *api)

{
  unsigned char pf_stack_frame[1200] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  uVar3 = 0;
  local_80 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_10000ae8(auStack_480,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    if (((*(code **)((int)api + 0xc) != (code *)0x0) &&
        (iVar1 = (**(code **)((int)api + 0xc))
                           (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),auStack_480),
        iVar1 != 0)) &&
       ((*(int *)api == iVar2 &&
        ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))))) {
      for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          iVar2 = recovered_100021f8(api,uVar3 & 0xff,uVar4 & 0xff,0,abStack_50);
          if ((iVar2 != 0) && (recovered_10000afc(api,abStack_50,&local_80), local_44 < '\0')) {
            for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
              iVar2 = recovered_100021f8(api,uVar3 & 0xff,uVar4 & 0xff,uVar5 & 0xff,abStack_7c);
              if (iVar2 != 0) {
                recovered_10000afc(api,abStack_7c,&local_80);
              }
            }
          }
        }
      }
      if (local_80 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        if (*(code **)((int)api + 0xc) != (code *)0x0) {
          (**(code **)((int)api + 0xc))
                    (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),auStack_480);
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10000ad0
#undef DAT_10000ad4
#undef DAT_10000ad8
#undef DAT_10000adc
#undef DAT_10000ae0
#undef DAT_10000ae4
#undef auStack_480
#undef local_80
#undef abStack_7c
#undef local_44
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ae8
 */

void recovered_10000ae8(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000217c((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10001b14
#define DAT_10001b14 (*(int *)(0x10001b14U))
#undef DAT_10001b18
#define DAT_10001b18 (*(int *)(0x10001b18U))
#undef DAT_10001b1c
#define DAT_10001b1c (*(int *)(0x10001b1cU))
#undef DAT_10001bf8
#define DAT_10001bf8 (*(int *)(0x10001bf8U))
#undef DAT_10001bfc
#define DAT_10001bfc (*(int *)(0x10001bfcU))
#undef DAT_10001d08
#define DAT_10001d08 (*(uint32_t *)(0x10001d08U))
#undef DAT_10001de4
#define DAT_10001de4 (*(uint32_t *)(0x10001de4U))
#undef DAT_10001de8
#define DAT_10001de8 (*(int *)(0x10001de8U))
#undef DAT_100020a4
#define DAT_100020a4 (*(uint32_t *)(0x100020a4U))
#undef DAT_100020a8
#define DAT_100020a8 (*(int *)(0x100020a8U))
#undef DAT_100020ac
#define DAT_100020ac (*(int *)(0x100020acU))
#undef DAT_100020b0
#define DAT_100020b0 (*(int *)(0x100020b0U))
#undef DAT_100020b4
#define DAT_100020b4 (*(int *)(0x100020b4U))
#undef DAT_100020b8
#define DAT_100020b8 (*(int *)(0x100020b8U))
#undef DAT_100020bc
#define DAT_100020bc (*(int *)(0x100020bcU))
#undef DAT_100020c0
#define DAT_100020c0 (*(int *)(0x100020c0U))
#undef DAT_100020c4
#define DAT_100020c4 (*(int *)(0x100020c4U))
#undef DAT_100020c8
#define DAT_100020c8 (*(int *)(0x100020c8U))
#undef DAT_100020cc
#define DAT_100020cc (*(int *)(0x100020ccU))
#undef DAT_100020d0
#define DAT_100020d0 (*(int *)(0x100020d0U))
#undef DAT_100020d4
#define DAT_100020d4 (*(int *)(0x100020d4U))
#undef DAT_100020d8
#define DAT_100020d8 (*(int *)(0x100020d8U))
#undef DAT_100020dc
#define DAT_100020dc (*(int *)(0x100020dcU))
#undef DAT_100020e0
#define DAT_100020e0 (*(int *)(0x100020e0U))
#undef DAT_100020e4
#define DAT_100020e4 (*(int *)(0x100020e4U))
#undef DAT_100020e8
#define DAT_100020e8 (*(int *)(0x100020e8U))
#undef DAT_100020ec
#define DAT_100020ec (*(int *)(0x100020ecU))
#undef DAT_100020f0
#define DAT_100020f0 (*(int *)(0x100020f0U))
#undef DAT_100020f4
#define DAT_100020f4 (*(int *)(0x100020f4U))
#undef DAT_100020f8
#define DAT_100020f8 (*(int *)(0x100020f8U))
#undef DAT_100020fc
#define DAT_100020fc (*(int *)(0x100020fcU))
#undef DAT_10002100
#define DAT_10002100 (*(int *)(0x10002100U))
#undef DAT_10002104
#define DAT_10002104 (*(int *)(0x10002104U))
#undef DAT_10002108
#define DAT_10002108 (*(int *)(0x10002108U))
#undef DAT_1000210c
#define DAT_1000210c (*(int *)(0x1000210cU))
#undef DAT_10002110
#define DAT_10002110 (*(int *)(0x10002110U))
#undef DAT_10002114
#define DAT_10002114 (*(int *)(0x10002114U))
#undef DAT_10002118
#define DAT_10002118 (*(int *)(0x10002118U))
#undef DAT_1000211c
#define DAT_1000211c (*(int *)(0x1000211cU))
#undef DAT_10002120
#define DAT_10002120 (*(int *)(0x10002120U))
#undef DAT_10002124
#define DAT_10002124 (*(int *)(0x10002124U))
#undef DAT_10002128
#define DAT_10002128 (*(int *)(0x10002128U))
#undef DAT_1000212c
#define DAT_1000212c (*(int *)(0x1000212cU))
#undef DAT_10002130
#define DAT_10002130 (*(int *)(0x10002130U))
#undef DAT_10002134
#define DAT_10002134 (*(int *)(0x10002134U))
#undef DAT_10002138
#define DAT_10002138 (*(int *)(0x10002138U))
#undef DAT_1000213c
#define DAT_1000213c (*(int *)(0x1000213cU))
#undef DAT_10002140
#define DAT_10002140 (*(int *)(0x10002140U))
#undef DAT_10002144
#define DAT_10002144 (*(int *)(0x10002144U))
#undef DAT_10002148
#define DAT_10002148 (*(int *)(0x10002148U))
#undef DAT_1000214c
#define DAT_1000214c (*(int *)(0x1000214cU))
#undef DAT_10002150
#define DAT_10002150 (*(int *)(0x10002150U))
#undef DAT_10002154
#define DAT_10002154 (*(int *)(0x10002154U))
#undef DAT_10002158
#define DAT_10002158 (*(int *)(0x10002158U))
#undef DAT_1000215c
#define DAT_1000215c (*(int *)(0x1000215cU))
#undef DAT_10002160
#define DAT_10002160 (*(int *)(0x10002160U))
#undef DAT_10002164
#define DAT_10002164 (*(int *)(0x10002164U))
#undef DAT_10002168
#define DAT_10002168 (*(int *)(0x10002168U))
#undef DAT_1000216c
#define DAT_1000216c (*(int *)(0x1000216cU))
#undef DAT_10002170
#define DAT_10002170 (*(int *)(0x10002170U))
#undef DAT_10002174
#define DAT_10002174 (*(int *)(0x10002174U))
#undef DAT_10002178
#define DAT_10002178 (*(int *)(0x10002178U))
#define auStack_598 (*(undefined1 (*)[1432])(pf_stack_frame + 1112))
#define auStack_558 (*(undefined1 (*)[1368])(pf_stack_frame + 1176))
#define local_9e0 (*(int *)(pf_stack_frame + 16))
#define auStack_4c4 (*(undefined1 (*)[1220])(pf_stack_frame + 1324))
#define local_9dc (*(undefined1 * *)(pf_stack_frame + 20))
#define local_9d8 (*(char (*)[2520])(pf_stack_frame + 24))
#define local_5d8 (*(undefined4 *)(pf_stack_frame + 1048))
#define uStack_4b4 (*(undefined4 *)(pf_stack_frame + 1340))
#define local_5d4 (*(undefined4 *)(pf_stack_frame + 1052))
#define uStack_4b0 (*(undefined4 *)(pf_stack_frame + 1344))
#define local_5d0 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_5cc (*(undefined4 *)(pf_stack_frame + 1060))
#define auStack_4a4 (*(undefined1 (*)[1188])(pf_stack_frame + 1356))
#define local_5c8 (*(byte (*)[1480])(pf_stack_frame + 1064))
#define local_516 (*(byte (*)[1302])(pf_stack_frame + 1242))
#define local_510 (*(int *)(pf_stack_frame + 1248))
#define local_50c (*(uint (*)[323])(pf_stack_frame + 1252))
#define local_500 (*(uint *)(pf_stack_frame + 1264))
#define local_4fc (*(uint *)(pf_stack_frame + 1268))
#define local_4f8 (*(uint *)(pf_stack_frame + 1272))
#define local_4f4 (*(uint *)(pf_stack_frame + 1276))
#define local_4f0 (*(uint *)(pf_stack_frame + 1280))
#define local_4ec (*(uint *)(pf_stack_frame + 1284))
#define local_4e8 (*(uint *)(pf_stack_frame + 1288))
#define local_4e4 (*(uint *)(pf_stack_frame + 1292))
#define local_4e0 (*(uint *)(pf_stack_frame + 1296))
#define local_4dc (*(uint *)(pf_stack_frame + 1300))
#define local_4d8 (*(int *)(pf_stack_frame + 1304))
#define local_4d4 (*(uint *)(pf_stack_frame + 1308))
#define local_4d0 (*(uint *)(pf_stack_frame + 1312))
#define local_4cc (*(uint *)(pf_stack_frame + 1316))
#define local_4c8 (*(uint *)(pf_stack_frame + 1320))
#define local_4c0 (*(uint (*)[304])(pf_stack_frame + 1328))
#define local_4ac (*(uint *)(pf_stack_frame + 1348))
#define local_4a8 (*(int *)(pf_stack_frame + 1352))
#define local_4a0 (*(uint *)(pf_stack_frame + 1360))
#define local_49c (*(uint *)(pf_stack_frame + 1364))
#define local_498 (*(uint *)(pf_stack_frame + 1368))
#define local_494 (*(uint *)(pf_stack_frame + 1372))
#define local_490 (*(uint *)(pf_stack_frame + 1376))
#define local_48c (*(int *)(pf_stack_frame + 1380))
#define local_488 (*(uint *)(pf_stack_frame + 1384))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 1388))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000afc
 */

void recovered_10000afc(int *param_1,byte *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[2576] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
  int extraout_r0_06 = 0;
  int extraout_r0_07 = 0;
  int extraout_r0_08 = 0;
  int extraout_r0_09 = 0;
  int extraout_r0_10 = 0;
  int extraout_r0_11 = 0;
  int extraout_r0_12 = 0;
  int extraout_r0_13 = 0;
  int iVar9;
  int extraout_r0_14 = 0;
  int extraout_r0_15 = 0;
  int extraout_r0_16 = 0;
  int extraout_r0_17 = 0;
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
  char *pcVar10;
  uint uVar11;
  uint extraout_r2 = 0;
  undefined1 *puVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  bool bVar16;

  bVar6 = recovered_10002430((int)param_2);
  uVar7 = (uint)bVar6;
  if (uVar7 == 0) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*(short *)(param_2 + 4) != 0x1af4) {
      return;
    }
    uVar7 = (uint)*(ushort *)(param_2 + 6);
    if (uVar7 != 0x1041) {
      return;
    }
  }
  if (param_3 != (uint *)0x0) {
    uVar7 = *param_3;
  }
  if (param_3 != (uint *)0x0 && uVar7 != 0) {
    return;
  }
  recovered_10000ae8(local_9d8,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  local_50c[1] = 0;
  local_50c[0] = 0;
  local_510 = 0;
  bVar6 = recovered_10002430((int)param_2);
  if (!bVar6) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*(short *)(param_2 + 4) != 0x1af4) {
      return;
    }
    if (*(short *)(param_2 + 6) != 0x1041) {
      return;
    }
  }
  recovered_1000246c(local_516,6);
  recovered_1000246c((undefined1 *)(local_50c + 2),100);
  iVar13 = (*(uint32_t *)(uint32_t[]){0xd460ULL});
  puVar15 = (undefined4 *)(((uintptr_t)pf_module_state + 0xa26cU));
  recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0xa290U)),0x4c);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x36cU)) = 0;
  *(int **)(((uintptr_t)pf_module_state+0xa290U)) = param_1;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)(((uintptr_t)pf_module_state+0xa298U)) = bVar1;
  *(byte *)(((uintptr_t)pf_module_state+0xa299U)) = bVar2;
  *(byte *)(((uintptr_t)pf_module_state+0xa29aU)) = bVar3;
  iVar8 = recovered_100023bc(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,(int)(local_50c + 1));
  if (iVar8 == 0) {
    return;
  }
  *(short *)(((uintptr_t)pf_module_state+0xa29cU)) = (short)local_50c[1];
  *(undefined1 *)(((uintptr_t)pf_module_state+0xa29bU)) = 1;
  local_484[0] = 0;
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x98U));
  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
LAB_10000e10:
    recovered_1000217c((int)local_9d8,0x400,pcVar10);
  }
  else {
    iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)local_484);
    if (iVar8 == 0) {
      pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xaaU));
      goto LAB_10000e10;
    }
    iVar8 = 5;
    uVar7 = 0;
    while (iVar8 != 0xb) {
      iVar9 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      uVar11 = uVar7;
      if (*(uint *)(param_2 + iVar9) != 0) {
        uVar11 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + iVar9) & 1) != 0) {
        uVar11 = uVar7 | 1;
      }
      uVar7 = uVar11;
    }
    iVar8 = recovered_100021d0(((uintptr_t)pf_module_state + 0x49U));
    if (iVar8 != 0) {
      uVar7 = uVar7 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar7 = uVar7 | 2;
    }
    local_84[0] = local_484[0] | uVar7;
    iVar8 = recovered_10002a78(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],local_84[0])
    ;
    if (iVar8 == 0) {
      pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xbcU));
      goto LAB_10000e10;
    }
    recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84);
    if ((local_84[0] & uVar7) == uVar7) {
      local_484[0] = 0;
      recovered_1000246c((undefined1 *)(local_50c + 2),100);
      iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1,
                                 (int)local_484);
      if (iVar8 != 0) {
        uVar7 = 0;
        while( true ) {
          bVar16 = 0x1e < uVar7;
          bVar6 = uVar7 == 0x1f;
          if (uVar7 < 0x20) {
            bVar16 = 0xae < local_484[0] - 0x40;
            bVar6 = local_484[0] - 0x40 == 0xaf;
          }
          if (bVar16 && !bVar6) break;
          local_84[0] = 0;
          local_488 = 0;
          local_48c = 0;
          local_490 = 0;
          local_494 = 0;
          local_498 = 0;
          iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     local_484[0] & 0xffff,1,(int)local_84);
          if ((iVar8 == 0) ||
             (iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_484[0] & 0xffff) + 1 & 0xffff,1,(int)&local_488),
             iVar8 == 0)) break;
          uVar11 = extraout_r1;
          if (local_84[0] == 9) {
            iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_484[0] & 0xffff) + 3 & 0xffff,1,(int)&local_48c);
            uVar11 = extraout_r1_00;
            if (iVar8 != 0) {
              iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_484[0] & 0xffff) + 4 & 0xffff,1,(int)&local_490);
              uVar11 = extraout_r1_01;
              if (iVar8 != 0) {
                iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_484[0] & 0xffff) + 8 & 0xffff,4,(int)&local_494);
                uVar11 = extraout_r1_02;
                if (iVar8 != 0) {
                  iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],
                                             (uint)param_2[2],(local_484[0] & 0xffff) + 0xc & 0xffff
                                             ,4,(int)&local_498);
                  uVar11 = extraout_r1_03;
                  if (iVar8 != 0) {
                    local_49c = 0;
                    local_4d8 = local_4d8 + 1;
                    if (((local_48c == 1) && (0x37 < local_498)) &&
                       (iVar8 = recovered_10002ae8(param_1,param_2,local_490,local_494,local_498,
                                                   (int *)&local_49c), iVar8 != 0)) {
                      local_50c[2] = local_49c;
                      local_4f0 = local_490;
                      uVar11 = extraout_r1_04;
                    }
                    else {
                      uVar11 = local_498;
                      if ((local_48c == 2) && (1 < local_498)) {
                        iVar8 = recovered_10002ae8(param_1,param_2,local_490,local_494,local_498,
                                                   (int *)&local_49c);
                        uVar11 = extraout_r1_05;
                        if (iVar8 != 0) {
                          local_4a0 = 0;
                          local_500 = local_49c;
                          local_4ec = local_490;
                          iVar8 = recovered_100023bc(param_1,(uint)*param_2,(uint)param_2[1],
                                                     (uint)param_2[2],
                                                     (local_484[0] & 0xffff) + 0x10 & 0xffff,4,
                                                     (int)&local_4a0);
                          uVar5 = 0;
                          if (iVar8 != 0) {
                            uVar5 = local_4a0;
                          }
                          uVar11 = extraout_r1_06;
                          if (iVar8 != 0 && uVar5 != 0) {
                            local_4dc = local_498;
                            local_4e0 = uVar5;
                          }
                          else {
                            local_500 = 0;
                          }
                          goto LAB_10001188;
                        }
                      }
                      if (local_48c == 3) {
                        iVar8 = recovered_10002ae8(param_1,param_2,local_490,local_494,local_498,
                                                   (int *)&local_49c);
                        uVar11 = extraout_r1_07;
                        if (iVar8 != 0) {
                          local_4fc = local_49c;
                          local_4e8 = local_490;
                          goto LAB_10001188;
                        }
                      }
                      if (local_48c == 4) {
                        iVar8 = recovered_10002ae8(param_1,param_2,local_490,local_494,local_498,
                                                   (int *)&local_49c);
                        uVar11 = extraout_r1_08;
                        if (iVar8 != 0) {
                          local_4f8 = local_49c;
                          local_4f4 = local_498;
                          local_4e4 = local_490;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_10001188:
          if (local_488 != 0) {
            uVar11 = local_484[0];
          }
          if (local_488 == 0 || local_488 == uVar11) break;
          local_484[0] = local_488;
          uVar7 = uVar7 + 1;
        }
        if (local_50c[2] != 0) {
          local_484[0] = 0;
          local_84[0] = 0;
          *(uint *)(((uintptr_t)pf_module_state+0xa294U)) = local_50c[2];
          recovered_10002490(param_1,local_50c[2],0x14,(int)auStack_4c4);
          local_4c0[1] = 1;
          bVar6 = recovered_10002cf0(param_1,local_50c[2]);
          if (bVar6) {
            local_4c0[1] = 2;
            recovered_10002dac(param_1,local_50c[2],1);
            if (((extraout_r0 != 0) &&
                (recovered_10002490(param_1,local_50c[2],0x14,(int)local_84), extraout_r0_00 != 0))
               && ((local_84[0] & 0xc1) == 1)) {
              local_4c0[1] = 3;
              recovered_10002dac(param_1,local_50c[2],3);
              if (((extraout_r0_01 != 0) &&
                  (recovered_10002490(param_1,local_50c[2],0x14,(int)local_84), extraout_r0_02 != 0)
                  ) && ((local_84[0] & 0xc3) == 3)) {
                local_4c0[1] = 4;
                recovered_10002dc8(param_1,local_50c[2],0,0);
                if (((extraout_r0_03 != 0) &&
                    (bVar6 = recovered_10002de0(param_1,local_50c[2],&local_4d4), bVar6)) &&
                   (recovered_10002dc8(param_1,local_50c[2],0,1), extraout_r0_04 != 0)) {
                  bVar6 = recovered_10002de0(param_1,local_50c[2],&local_4d0);
                  uVar7 = 0;
                  if (bVar6) {
                    uVar7 = local_4d0;
                  }
                  if (bVar6 && (uVar7 & 1) != 0) {
                    local_4c8 = uVar7 & 3;
                    local_4c0[1] = 5;
                    local_4cc = local_4d4 & 0x10028;
                    recovered_10002dc8(param_1,local_50c[2],8,0);
                    if (((extraout_r0_06 != 0) &&
                        (recovered_10002dc8(param_1,local_50c[2],0xc,local_4cc), extraout_r0_07 != 0
                        )) && ((recovered_10002dc8(param_1,local_50c[2],8,1), extraout_r0_08 != 0 &&
                               (recovered_10002dc8(param_1,local_50c[2],0xc,local_4c8),
                               extraout_r0_09 != 0)))) {
                      recovered_10002e2c(param_1);
                      local_4c0[1] = 6;
                      local_84[0] = 0xb;
                      recovered_10002dac(param_1,local_50c[2],0xb);
                      if (((extraout_r0_10 != 0) &&
                          (recovered_10002490(param_1,local_50c[2],0x14,(int)local_4c0),
                          extraout_r0_11 != 0)) && ((local_4c0[0] & 200) == 8)) {
                        local_4c0[1] = 7;
                        bVar6 = recovered_100024ac(param_1,local_50c[2],0x12,local_4c0 + 2);
                        if ((((bVar6) &&
                             (recovered_10002490(param_1,local_50c[2],0x15,(int)auStack_4a4),
                             extraout_r0_12 != 0)) &&
                            (uVar7 = recovered_10002e68(param_1,local_50c[2],0x16,0), uVar7 != 0))
                           && ((bVar6 = recovered_100024ac(param_1,local_50c[2],0x18,&uStack_4b4),
                               bVar6 && (bVar6 = recovered_100024ac(param_1,local_50c[2],0x1c,
                                                                    &uStack_4b0), bVar6)))) {
                          bVar6 = recovered_100024ac(param_1,local_50c[2],0x1e,local_484);
                          if (bVar6) {
                            local_4ac = local_484[0];
                            uVar7 = extraout_r2;
                            if (local_500 != 0) {
                              uVar7 = local_4e0;
                            }
                            if ((((local_500 != 0 && uVar7 != 0) && (1 < local_4dc)) &&
                                ((int)((ulonglong)local_484[0] * (ulonglong)uVar7 >> 0x20) == 0)) &&
                               ((uVar7 = uVar7 * local_484[0], !CARRY4(local_500,uVar7) &&
                                (uVar7 <= local_4dc - 2)))) {
                              local_4a8 = uVar7 + local_500;
                            }
                          }
                          local_4c0[1] = 8;
                          uVar7 = 0x80000000;
                          if ((local_4c8 & 2) == 0) {
                            uVar7 = 0xc0000000;
                          }
                          *(uint *)(((uintptr_t)pf_module_state+0xa2a4U)) =
                               uVar7 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                               (uint)param_2[1] << 0xb;
                          bVar6 = (local_4cc & 0x20) != 0;
                          uVar7 = local_4cc & 0xff;
                          if (bVar6) {
                            uVar7 = local_4f8;
                          }
                          if ((bVar6 && uVar7 != 0) && (5 < local_4f4)) {
                            uVar7 = 0;
                            for (iVar8 = 0; iVar8 != 6; iVar8 = iVar8 + 1) {
                              local_484[0] = 0;
                              recovered_10002490(param_1,local_4f8,iVar8,(int)local_484);
                              if (extraout_r0_13 == 0) goto LAB_10000e1c;
                              local_516[iVar8] = (byte)local_484[0];
                              uVar7 = local_484[0] & 0xff | uVar7;
                            }
                            if ((uVar7 != 0) && ((local_516[0] & 1) == 0)) {
                              if ((local_4cc & 0x10000) == 0) {
                                local_50c[0] = 1;
                              }
                              else if ((local_4f4 < 8) ||
                                      (bVar6 = recovered_100024ac(param_1,local_4f8,6,local_50c),
                                      !bVar6)) goto LAB_10000e1c;
                              if ((((local_4cc & 8) == 0) ||
                                  ((0xb < local_4f4 &&
                                   (bVar6 = recovered_100024ac(param_1,local_4f8,10,&local_510),
                                   bVar6)))) && (1 < local_4c0[2])) {
                                if (local_510 - 0x7f3U < 0xfffff80e) {
                                  local_510 = 0x5dc;
                                }
                                *(int *)(((uintptr_t)pf_module_state+0xa2a8U)) = local_510;
                                *(undefined4 *)(((uintptr_t)pf_module_state+0xa2b0U)) = 0xc;
                                *(uint *)(((uintptr_t)pf_module_state+0xa2acU)) = local_50c[0];
                                for (iVar8 = 0; iVar8 != 6; iVar8 = iVar8 + 1) {
                                  *(byte *)((int)puVar15 + iVar8 + 0x50) = local_516[iVar8];
                                }
                                recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0x46cU)),0x100);
                                recovered_1000246c((undefined1 *)puVar15,0x24);
                                recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0x56cU)),0x84);
                                local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x66cU));
                                recovered_1000246c(local_9dc,0x9000);
                                local_9e0 = 0;
                                for (iVar8 = 0; iVar8 != 0x10; iVar8 = iVar8 + 1) {
                                  local_484[0] = 0;
                                  local_84[0] = 0;
                                  iVar9 = recovered_10002f90(param_1,*(undefined4 *)
                                                                      (((uintptr_t)pf_module_state+0xa2a4U)),
                                                             (int)local_9dc,0x900,(int)local_484,
                                                             local_84);
                                  if (iVar9 == 0) goto LAB_10000e1c;
                                  recovered_10003008((undefined1 *)
                                                     (((uintptr_t)pf_module_state + 0x46cU) + local_9e0),
                                                     local_484[0],local_84[0]);
                                  *(undefined1 *)((int)puVar15 + iVar8 * 2 + 5) = 0;
                                  *(char *)((int)puVar15 + iVar8 * 2 + 4) = (char)iVar8;
                                  iVar9 = ((uintptr_t)pf_module_state + 0x46cU) + iVar8 * 0x10;
                                  *(undefined4 *)(iVar9 + 0xc) = 2;
                                  *(undefined4 *)(iVar9 + 8) = 0x900;
                                  recovered_1000304c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),
                                                     local_9dc,0x900);
                                  local_9dc = local_9dc + 0x900;
                                  local_9e0 = local_9e0 + 0x10;
                                }
                                *puVar15 = 0x100000;
                                iVar8 = recovered_10003094(param_1,(int *)(local_50c + 2),0,0x10,
                                                           ((uintptr_t)pf_module_state + 0x46cU),0x100,
                                                           (int)puVar15,0x24,
                                                           ((uintptr_t)pf_module_state + 0x56cU),0x84,
                                                           (undefined2 *)(((uintptr_t)pf_module_state+0xa2c4U)));
                                if (iVar8 != 0) {
                                  *(undefined2 *)(((uintptr_t)pf_module_state+0xa2c6U)) = 0x10;
                                  recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0x966cU)),0x10)
                                  ;
                                  recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0x976cU)),6);
                                  recovered_1000246c((undefined1 *)(((uintptr_t)pf_module_state + 0x986cU)),0xc);
                                  puVar12 = (undefined1 *)(((uintptr_t)pf_module_state + 0x996cU));
                                  recovered_1000246c(puVar12,0x80c);
                                  iVar8 = recovered_10002f90(param_1,*(undefined4 *)
                                                                      (((uintptr_t)pf_module_state+0xa2a4U)),
                                                             (int)puVar12,0x80c,((uintptr_t)pf_module_state+0xa2b4U),
                                                             ((uintptr_t)pf_module_state+0xa2b8U));
                                  if (iVar8 != 0) {
                                    puVar15 = (undefined4 *)(((uintptr_t)pf_module_state + 0x976cU));
                                    *puVar15 = 0;
                                    iVar8 = recovered_10003094(param_1,(int *)(local_50c + 2),1,1,
                                                               ((uintptr_t)pf_module_state + 0x966cU),0x10,
                                                               (int)puVar15,6,
                                                               ((uintptr_t)pf_module_state + 0x986cU),0xc,
                                                               (undefined2 *)(((uintptr_t)pf_module_state+0xa2d0U)));
                                    uVar7 = 0;
                                    if (iVar8 != 0) {
                                      local_484[0] = 0;
                                      uVar7 = local_50c[2];
                                    }
                                    if ((((iVar8 != 0 && uVar7 != 0) &&
                                         (recovered_10002490(param_1,uVar7,0x14,(int)local_484),
                                         extraout_r0_14 != 0)) && ((local_484[0] & 200) == 8)) &&
                                       (((recovered_10002dac(param_1,uVar7,local_484[0] | 4),
                                         extraout_r0_15 != 0 &&
                                         (recovered_10002490(param_1,uVar7,0x14,(int)local_484),
                                         extraout_r0_16 != 0)) &&
                                        (((local_484[0] & 0xc4) == 4 &&
                                         (recovered_10002490(param_1,local_50c[2],0x14,
                                                             (int)(local_50c + 1)),
                                         extraout_r0_17 != 0)))))) {
                                      *(undefined4 *)(((uintptr_t)pf_module_state+0xa2a0U)) = 1;
                                      iVar9 = 0;
                                      iVar8 = recovered_100024f8(param_1,((uintptr_t)pf_module_state+0xa2c4U),0);
                                      if (iVar8 != 0) {
                                        recovered_1000246c((undefined1 *)&local_5d8,0xc0);
                                        uVar7 = local_50c[0];
                                        local_5d8 = 0xc0;
                                        local_5cc = 0x800;
                                        local_5d0 = *(undefined4 *)(((uintptr_t)pf_module_state+0xa2a8U));
                                        local_5d4 = 0xf;
                                        if ((local_50c[0] & 1) == 0) {
                                          local_5d4 = 0xd;
                                        }
                                        for (; iVar9 != 6; iVar9 = iVar9 + 1) {
                                          local_5c8[iVar9] = local_516[iVar9];
                                        }
                                        recovered_10000ae8(auStack_598,0x40,
                                                           (char *)(((uintptr_t)pf_module_state + 0x25U)));
                                        recovered_10000ae8(auStack_558,0x40,
                                                           (char *)(((uintptr_t)pf_module_state + 0x5eU)));
                                        recovered_10000ae8(local_9d8,0x400,
                                                           (char *)(((uintptr_t)pf_module_state + 0x24U)));
                                        recovered_1000217c((int)local_9d8,0x400,
                                                           (char *)(((uintptr_t)pf_module_state + 0xcfU)));
                                        iVar13 = 0;
                                        pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xd4U));
                                        do {
                                          if (iVar13 != 0) {
                                            if (iVar13 == 6) goto LAB_10001b20;
                                            recovered_1000217c((int)local_9d8,0x400,pcVar10);
                                          }
                                          recovered_100034bc((int)local_9d8,0x400,
                                                             (uint)local_516[iVar13],2);
                                          iVar13 = iVar13 + 1;
                                        } while( true );
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_10000e1c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          recovered_10002490(param_1,local_50c[2],0x14,(int)local_84);
          uVar7 = 0;
          if (extraout_r0_05 != 0) {
            uVar7 = local_84[0];
          }
          if (extraout_r0_05 != 0 && uVar7 != 0) {
            recovered_10002dac(param_1,local_50c[2],uVar7 | 0x80);
          }
        }
      }
    }
  }
LAB_10000e1c:
  recovered_100029f8();
LAB_10000e20:
  return;
LAB_10001b20:
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x69U));
  if ((uVar7 & 1) == 0) {
    pcVar10 = (char *)(((uintptr_t)pf_module_state + 0x79U));
  }
  recovered_1000217c((int)local_9d8,0x400,pcVar10);
  recovered_10002548((int)local_9d8,0x400,local_510);
  sVar4 = *(short *)(param_2 + 4);
  if (sVar4 != 0x1013) {
    if (sVar4 == 0x1033) {
      if (*(short *)(param_2 + 6) == 0x194) {
        local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x198U));
        goto switchD_10001bf4_caseD_1041;
      }
      goto LAB_10001d24;
    }
    if (sVar4 == 0x106b) {
      if (*(short *)(param_2 + 6) == 0x21) {
LAB_10001ca8:
        local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1c6U));
        goto switchD_10001bf4_caseD_1041;
      }
      goto LAB_10001d24;
    }
    if (sVar4 == 0x108e) {
      if (*(short *)(param_2 + 6) == 0x2bad) goto LAB_10001ca8;
      goto LAB_10001d24;
    }
    if (sVar4 != 0x10ec) {
      if (sVar4 == 0x1234) {
        if (*(short *)(param_2 + 6) != 0x1111) goto LAB_10001d24;
        local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1acU));
        goto switchD_10001bf4_caseD_1041;
      }
      if (sVar4 != -0x7f7a) {
        if (sVar4 == 0x1b36) {
          if (*(short *)(param_2 + 6) == 0x100) {
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1b5U));
            goto switchD_10001bf4_caseD_1041;
          }
        }
        else if (sVar4 == 0x1af4) {
          local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0xf2U));
          switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
          case 0x1041:
            break;
          case 0x1042:
switchD_10001bf4_caseD_1042:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x101U));
            break;
          case 0x1043:
switchD_10001bf4_caseD_1043:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x125U));
            break;
          case 0x1044:
switchD_10001bf4_caseD_1044:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x148U));
            break;
          case 0x1045:
switchD_10001bf4_caseD_1045:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x112U));
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
switchD_10001bf4_caseD_1046:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x177U));
            break;
          case 0x1048:
switchD_10001bf4_caseD_1048:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x138U));
            break;
          case 0x1050:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x157U));
            break;
          case 0x1052:
            local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x166U));
            break;
          default:
            switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
            case 0x1000:
              break;
            case 0x1001:
              goto switchD_10001bf4_caseD_1042;
            case 0x1002:
              goto switchD_10001bf4_caseD_1045;
            case 0x1003:
              goto switchD_10001bf4_caseD_1043;
            case 0x1004:
              goto switchD_10001bf4_caseD_1048;
            case 0x1005:
              goto switchD_10001bf4_caseD_1044;
            default:
              goto switchD_10001bf4_caseD_1046;
            }
          }
          goto switchD_10001bf4_caseD_1041;
        }
        goto LAB_10001d24;
      }
      if (*(short *)(param_2 + 6) == 0x100e) {
        local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x182U));
        goto switchD_10001bf4_caseD_1041;
      }
      uVar7 = (uint)param_2[8];
      if (uVar7 == 0xc) goto switchD_10001d48_caseD_c;
      if (uVar7 != 4) goto LAB_10001d28;
      if (param_2[9] == 3) {
        local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x18eU));
        goto switchD_10001bf4_caseD_1041;
      }
      goto switchD_10001d48_caseD_4;
    }
    if (*(short *)(param_2 + 6) != -0x7fd7) goto LAB_10001d24;
    local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1bdU));
    goto switchD_10001bf4_caseD_1041;
  }
  if ((*(ushort *)(param_2 + 6) & 0xfffe) == 0xb8) {
    local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1a1U));
    goto switchD_10001bf4_caseD_1041;
  }
LAB_10001d24:
  uVar7 = (uint)param_2[8];
LAB_10001d28:
  if (uVar7 - 1 < 0xc) {
    local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1cdU));
    switch((uintptr_t)(uVar7)) {
    case 1:
      local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1f3U));
      break;
    case 2:
      local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x1e0U));
      break;
    case 3:
      break;
    case 4:
switchD_10001d48_caseD_4:
      local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0x206U));
      break;
    default:
      goto switchD_10001d48_caseD_5;
    case 0xc:
switchD_10001d48_caseD_c:
      if (param_2[9] != 3) goto switchD_10001d48_caseD_5;
      local_9dc = (undefined1 *)recovered_10003558((uint)param_2[10]);
    }
  }
  else {
switchD_10001d48_caseD_5:
    local_9dc = (undefined1 *)(((uintptr_t)pf_module_state + 0xe7U));
  }
switchD_10001bf4_caseD_1041:
  recovered_10000ae8((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x8bU)));
  recovered_1000217c((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xd6U)));
  recovered_100034bc((int)local_84,0x60,(uint)*param_2,2);
  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xd4U));
  recovered_1000217c((int)local_84,0x60,pcVar14);
  recovered_100034bc((int)local_84,0x60,(uint)param_2[1],2);
  pcVar10 = (char *)(((uintptr_t)pf_module_state + 0xd8U));
  recovered_1000217c((int)local_84,0x60,pcVar10);
  recovered_10002548((int)local_84,0x60,(uint)param_2[2]);
  recovered_10000ae8((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xdaU)));
  recovered_100034bc((int)local_484,0x400,(uint)*param_2,2);
  recovered_1000217c((int)local_484,0x400,pcVar14);
  recovered_100034bc((int)local_484,0x400,(uint)param_2[1],2);
  recovered_1000217c((int)local_484,0x400,pcVar10);
  recovered_10002548((int)local_484,0x400,(uint)param_2[2]);
  recovered_1000217c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xdfU)));
  recovered_100034bc((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_1000217c((int)local_484,0x400,pcVar14);
  recovered_100034bc((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_1000217c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe2U)));
  if (local_9d8[0] != '\0') {
    recovered_1000217c((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe4U)));
    recovered_1000217c((int)local_484,0x400,local_9d8);
  }
  if ((((code *)param_1[3] != (code *)0x0) &&
      (iVar13 = (*(code *)param_1[3])(local_84,local_9dc,local_484), iVar13 != 0)) &&
     ((*param_1 == (*(uint32_t *)(uint64_t[]){0x2b0854584b57ULL}) &&
      (((0xcb < (uint)param_1[2] && ((code *)param_1[0x32] != (code *)0x0)) &&
       (iVar13 = (*(code *)param_1[0x32])
                           (&local_5d8,((uintptr_t)&recovered_100025f8),((uintptr_t)&recovered_100027ac)),
       iVar13 != 0)))))) {
    if (param_3 != (uint *)0x0) {
      *param_3 = *param_3 + 1;
    }
    goto LAB_10000e20;
  }
  goto LAB_10000e1c;
}

#undef DAT_10001b14
#undef DAT_10001b18
#undef DAT_10001b1c
#undef DAT_10001bf8
#undef DAT_10001bfc
#undef DAT_10001d08
#undef DAT_10001de4
#undef DAT_10001de8
#undef DAT_100020a4
#undef DAT_100020a8
#undef DAT_100020ac
#undef DAT_100020b0
#undef DAT_100020b4
#undef DAT_100020b8
#undef DAT_100020bc
#undef DAT_100020c0
#undef DAT_100020c4
#undef DAT_100020c8
#undef DAT_100020cc
#undef DAT_100020d0
#undef DAT_100020d4
#undef DAT_100020d8
#undef DAT_100020dc
#undef DAT_100020e0
#undef DAT_100020e4
#undef DAT_100020e8
#undef DAT_100020ec
#undef DAT_100020f0
#undef DAT_100020f4
#undef DAT_100020f8
#undef DAT_100020fc
#undef DAT_10002100
#undef DAT_10002104
#undef DAT_10002108
#undef DAT_1000210c
#undef DAT_10002110
#undef DAT_10002114
#undef DAT_10002118
#undef DAT_1000211c
#undef DAT_10002120
#undef DAT_10002124
#undef DAT_10002128
#undef DAT_1000212c
#undef DAT_10002130
#undef DAT_10002134
#undef DAT_10002138
#undef DAT_1000213c
#undef DAT_10002140
#undef DAT_10002144
#undef DAT_10002148
#undef DAT_1000214c
#undef DAT_10002150
#undef DAT_10002154
#undef DAT_10002158
#undef DAT_1000215c
#undef DAT_10002160
#undef DAT_10002164
#undef DAT_10002168
#undef DAT_1000216c
#undef DAT_10002170
#undef DAT_10002174
#undef DAT_10002178
#undef auStack_598
#undef auStack_558
#undef local_9e0
#undef auStack_4c4
#undef local_9dc
#undef local_9d8
#undef local_5d8
#undef uStack_4b4
#undef local_5d4
#undef uStack_4b0
#undef local_5d0
#undef local_5cc
#undef auStack_4a4
#undef local_5c8
#undef local_516
#undef local_510
#undef local_50c
#undef local_500
#undef local_4fc
#undef local_4f8
#undef local_4f4
#undef local_4f0
#undef local_4ec
#undef local_4e8
#undef local_4e4
#undef local_4e0
#undef local_4dc
#undef local_4d8
#undef local_4d4
#undef local_4d0
#undef local_4cc
#undef local_4c8
#undef local_4c0
#undef local_4ac
#undef local_4a8
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000217c
 */

void recovered_1000217c(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100021d0(param_1);
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
 * Address: 0x100021d0
 */

int recovered_100021d0(int param_1)

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


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_100021f8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_100023bc((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_100023bc((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_100023bc((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_100023bc((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_100023bc((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_1000242c
#define DAT_1000242c (*(uint8_t * *)(0x1000242cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023bc
 */

undefined4
recovered_100023bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_1000242c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002430
 */

bool recovered_10002430(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 == 0) {
    return false;
  }
  if (*(short *)(param_1 + 4) == 0x1af4) {
    bVar1 = true;
    if (*(short *)(param_1 + 6) != 0x1000) {
      bVar1 = *(short *)(param_1 + 6) == 0x1040;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000246c
 */

void recovered_1000246c(undefined1 *param_1,int param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002490
 */

void recovered_10002490(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10002f24(param_1,param_3 + param_2,1,param_4);
  return;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024ac
 */

bool recovered_100024ac(int *param_1,int param_2,int param_3,undefined4 *param_4)

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
    iVar1 = recovered_10002f24(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f8
 */

uint recovered_100024f8(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((param_2 == 0) || (*(int *)(param_2 + 8) == 0)) {
    return 0;
  }
  recovered_10002e2c(param_1);
  uVar1 = recovered_10002e68(param_1,*(uint *)(param_2 + 8),0,param_3);
  return uVar1;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002548
 */

void recovered_10002548(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_1000351c(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003758(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_1000351c(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

#undef DAT_1000279c
#define DAT_1000279c (*(int *)(0x1000279cU))
#undef DAT_100027a0
#define DAT_100027a0 (*(int *)(0x100027a0U))
#undef DAT_100027a4
#define DAT_100027a4 (*(int *)(0x100027a4U))
#undef DAT_100027a8
#define DAT_100027a8 (*(int *)(0x100027a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025f8
 */

undefined4 recovered_100025f8(undefined1 *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *extraout_r2 = 0;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;

  recovered_100035e8();
  iVar2 = (*(uint32_t *)(uint32_t[]){0xb9dcULL});
  uVar9 = *(uint *)(((uintptr_t)pf_module_state + 0xa2b0U));
  if (uVar9 == 0) {
    uVar9 = 10;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  iVar8 = (*(uint32_t *)(uint32_t[]){0x1c60ULL});
  uVar3 = 0;
  if (param_1 == (undefined1 *)0x0) goto LAB_1000265c;
  bVar10 = *(int *)(((uintptr_t)pf_module_state+0xa2a0U)) != 0;
  uVar3 = 0;
  piVar5 = extraout_r2;
  if (bVar10) {
    piVar5 = *(int **)(((uintptr_t)pf_module_state+0xa290U));
  }
  if ((!bVar10 || piVar5 == (int *)0x0) || (uVar3 = 0, *(short *)(((uintptr_t)pf_module_state+0xa2c4U)) == 0))
  goto LAB_1000265c;
  iVar6 = ((uintptr_t)pf_module_state + 0x56cU);
  recovered_1000304c(piVar5,*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),iVar6,0x84);
  uVar1 = *(ushort *)(((uintptr_t)pf_module_state+0xa2c8U));
  uVar7 = (uint)uVar1;
  uVar3 = 0;
  if (*(ushort *)(((uintptr_t)pf_module_state+0x56eU)) == uVar7) goto LAB_1000265c;
  if ((uint)*(ushort *)(((uintptr_t)pf_module_state+0xa2c4U)) < (*(ushort *)(((uintptr_t)pf_module_state+0x56eU)) - uVar7 & 0xffff)) {
LAB_10002718:
    recovered_100029f8();
  }
  else {
    uVar7 = recovered_100037a8(uVar7,(uint)*(ushort *)(((uintptr_t)pf_module_state+0xa2c4U)));
    iVar6 = iVar6 + uVar7 * 8;
    uVar7 = recovered_10003624((undefined4 *)(iVar6 + 4));
    uVar4 = recovered_10003624((undefined4 *)(iVar6 + 8));
    *(ushort *)(((uintptr_t)pf_module_state+0xa2c8U)) = uVar1 + 1;
    bVar11 = 0xe < uVar7;
    bVar10 = uVar7 == 0xf;
    if (uVar7 < 0x10) {
      bVar11 = 0x8ff < uVar4;
      bVar10 = uVar4 == 0x900;
    }
    if (bVar11 && !bVar10) goto LAB_10002718;
    if (uVar9 < uVar4) {
      iVar8 = ((uintptr_t)pf_module_state + 0x66cU) + uVar7 * 0x900;
      recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),iVar8,
                         0x900);
      uVar4 = uVar4 - uVar9;
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar4;
      }
      bVar11 = param_2 <= uVar4;
      bVar10 = uVar4 == param_2;
      if (!bVar11 || bVar10) {
        bVar11 = 0x7ff < uVar4;
        bVar10 = uVar4 == 0x800;
      }
      if (!bVar11 || bVar10) {
        recovered_1000372c(param_1,(undefined1 *)(iVar8 + uVar9),uVar4);
        uVar3 = recovered_1000364c(uVar7 & 0xffff);
        goto LAB_1000265c;
      }
    }
    recovered_1000364c(uVar7 & 0xffff);
  }
  uVar3 = 0;
LAB_1000265c:
  DataMemoryBarrier(0xb);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x36cU)) = 0;
  return uVar3;
}

#undef DAT_1000279c
#undef DAT_100027a0
#undef DAT_100027a4
#undef DAT_100027a8

#undef DAT_100029e0
#define DAT_100029e0 (*(int *)(0x100029e0U))
#undef DAT_100029e4
#define DAT_100029e4 (*(int *)(0x100029e4U))
#undef DAT_100029e8
#define DAT_100029e8 (*(int *)(0x100029e8U))
#undef DAT_100029ec
#define DAT_100029ec (*(int *)(0x100029ecU))
#undef DAT_100029f0
#define DAT_100029f0 (*(int *)(0x100029f0U))
#undef DAT_100029f4
#define DAT_100029f4 (*(int *)(0x100029f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ac
 */

undefined4 recovered_100027ac(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;

  recovered_100035e8();
  iVar2 = (*(uint32_t *)(uint32_t[]){0xb828ULL});
  uVar5 = 0;
  iVar10 = *(int *)(((uintptr_t)pf_module_state + 0xa2b0U));
  if (iVar10 == 0) {
    iVar10 = 10;
  }
  if (param_1 != (undefined1 *)0x0) {
    bVar11 = *(int *)(((uintptr_t)pf_module_state + 0xa2a0U)) != 0;
    iVar3 = 0;
    if (bVar11) {
      iVar3 = *(int *)(((uintptr_t)pf_module_state + 0xa290U));
    }
    if ((((bVar11 && iVar3 != 0) && (0xfffff80c < param_2 - 0x801U)) &&
        (*(short *)(((uintptr_t)pf_module_state + 0xa2d0U)) != 0)) && (uVar9 = iVar10 + param_2, uVar9 < 0x80d))
    {
      puVar6 = (undefined1 *)(((uintptr_t)pf_module_state + 0x996cU));
      recovered_1000246c(puVar6,0x80c);
      recovered_1000372c(puVar6 + iVar10,param_1,param_2);
      iVar10 = (*(uint32_t *)(uint32_t[]){0xab78ULL});
      puVar7 = (undefined1 *)(((uintptr_t)pf_module_state + 0x966cU));
      recovered_10003008(puVar7,*(undefined4 *)(((uintptr_t)pf_module_state+0xa2b4U)),
                         *(undefined4 *)(((uintptr_t)pf_module_state+0xa2b8U)));
      uVar5 = 0;
      *(undefined2 *)(((uintptr_t)pf_module_state+0x967aU)) = 0;
      *(undefined4 *)(((uintptr_t)pf_module_state+0x9676U)) = 0;
      *(char *)(((uintptr_t)pf_module_state+0x9675U)) = (char)(uVar9 >> 8);
      *(char *)(((uintptr_t)pf_module_state+0x9674U)) = (char)uVar9;
      iVar10 = (*(uint32_t *)(uint32_t[]){0xac44ULL});
      iVar8 = ((uintptr_t)pf_module_state + 0x976cU);
      uVar4 = *(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U));
      iVar3 = *(ushort *)(((uintptr_t)pf_module_state+0xa2d2U)) + 1;
      *(short *)(((uintptr_t)pf_module_state+0xa2d2U)) = (short)iVar3;
      *(char *)(((uintptr_t)pf_module_state+0x976eU)) = (char)iVar3;
      *(undefined2 *)(((uintptr_t)pf_module_state+0x9770U)) = 0;
      *(char *)(((uintptr_t)pf_module_state+0x976fU)) = (char)((uint)iVar3 >> 8);
      recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),uVar4,puVar6,uVar9);
      recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),puVar7,
                         0x10);
      recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),iVar8,6);
      iVar3 = recovered_100024f8(*(int **)(((uintptr_t)pf_module_state+0xa290U)),((uintptr_t)pf_module_state+0xa2d0U),1);
      iVar10 = (*(uint32_t *)(uint32_t[]){0xacd4ULL});
      if (iVar3 == 0) {
        recovered_100029f8();
      }
      else {
        iVar3 = ((uintptr_t)pf_module_state + 0x986cU);
        for (iVar8 = 1000; iVar8 != 0; iVar8 = iVar8 + -1) {
          recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),iVar3
                             ,0xc);
          uVar1 = *(ushort *)(((uintptr_t)pf_module_state+0xa2d4U));
          uVar9 = (uint)uVar1;
          if (*(ushort *)(((uintptr_t)pf_module_state+0x986eU)) != uVar9) {
            if ((*(ushort *)(((uintptr_t)pf_module_state+0x986eU)) - uVar9 & 0xffff) == 1) {
              uVar9 = recovered_100037a8(uVar9,(uint)*(ushort *)(((uintptr_t)pf_module_state+0xa2d0U)));
              iVar3 = iVar3 + uVar9 * 8;
              iVar10 = recovered_10003624((undefined4 *)(iVar3 + 4));
              if ((iVar10 == 0) &&
                 (iVar10 = recovered_10003624((undefined4 *)(iVar3 + 8)), iVar10 == 0)) {
                *(ushort *)(((uintptr_t)pf_module_state+0xa2d4U)) = uVar1 + 1;
                uVar5 = 1;
                goto LAB_100027fc;
              }
            }
            break;
          }
          recovered_10002e80(*(int **)(((uintptr_t)pf_module_state+0xa290U)),100);
        }
        recovered_100029f8();
        uVar5 = 0;
      }
    }
  }
LAB_100027fc:
  DataMemoryBarrier(0xb);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x36cU)) = 0;
  return uVar5;
}

#undef DAT_100029e0
#undef DAT_100029e4
#undef DAT_100029e8
#undef DAT_100029ec
#undef DAT_100029f0
#undef DAT_100029f4

#undef DAT_10002a74
#define DAT_10002a74 (*(int *)(0x10002a74U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f8
 */

void recovered_100029f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;

  iVar2 = (*(uint32_t *)(uint32_t[]){0xb5f0ULL});
  bVar3 = false;
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state + 0xa290U));
  *(undefined4 *)(((uintptr_t)pf_module_state + 0xa2a0U)) = 0;
  if ((int *)*puVar1 != (int *)0x0) {
    if (*(int *)(((uintptr_t)pf_module_state+0xa294U)) != 0) {
      bVar3 = recovered_10002cf0((int *)*puVar1,*(int *)(((uintptr_t)pf_module_state+0xa294U)));
      bVar3 = !bVar3;
    }
    if (*(char *)(((uintptr_t)pf_module_state+0xa29bU)) != '\0') {
      uVar4 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0xa29cU));
      if (bVar3) {
        uVar4 = uVar4 & 0xfffffffb;
      }
      recovered_10002a78(*(int **)(((uintptr_t)pf_module_state+0xa290U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0xa298U)),
                         (uint)*(byte *)(((uintptr_t)pf_module_state+0xa299U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0xa29aU)),
                         uVar4);
      *(undefined1 *)(((uintptr_t)pf_module_state+0xa29bU)) = 0;
    }
  }
  return;
}

#undef DAT_10002a74

#undef DAT_10002ae4
#define DAT_10002ae4 (*(int *)(0x10002ae4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a78
 */

undefined4
recovered_10002a78(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_10002ae4

/* Recovered PCI BAR checks and physical mapping services.
 * Pooka's Free Software License. */
uint recovered_10002ae8(int *api,byte *device,uint index,uint offset,uint length,int *output) {
    uint span=offset+length;
    if(!length || span<offset || index>5)return 0;
    uint low,high=0;
    if(!device || !output)return 0;
    if(index && ((*(uint *)(device+index*4+0x10)&7)==4))return 0;
    low=*(uint *)(device+index*4+0x14);
    if(!low || (low&1))return 0;
    recovered_100023bc((undefined4 *)api,device[0],device[1],device[2],index*4+0x10,4,(int)&low);
    if((low&7)==4) {
        if(index>4)return 0;
        high=*(uint *)(device+index*4+0x18);
        recovered_100023bc((undefined4 *)api,device[0],device[1],device[2],index*4+0x14,4,(int)&high);
    }
    low&=(low&1)?0xfffffffcU:0xfffffff0U;
    if(!span || (!low && !high))return 0;
    *output=0;
    if(!api || api[0]!=0x54584b57)return 0;
    if((uint)api[2]>=0xbc && api[0x2e])
        {
        uint ok=((uint (*)(uint,uint,uint,int *))(uintptr_t)(uint)api[0x2e])(low,high,span,output);
        if(!ok)return 0;
        *output+=offset;return 1;
    }
    if(!high && (uint)api[2]>=0x68 && api[0x19]) {
        uint mapped=0;
        uint ok=((uint (*)(uint,uint,uint,uint *))(uintptr_t)(uint)api[0x19])(low,0,(uint)span,&mapped);
        if(ok)*output=(int)(mapped+offset);
        return ok!=0;
    }
    return 0;
}


#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

bool recovered_10002cf0(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int unaff_r4;
  uint uVar1;
  bool bVar2;

  if (param_1 != (int *)0x0) {
    unaff_r4 = param_2;
  }
  bVar2 = false;
  local_1c = 0xff;
  if ((param_1 != (int *)0x0 && param_2 != 0) &&
     (recovered_10002dac(param_1,unaff_r4,0), extraout_r0 != 0)) {
    recovered_10002e2c(param_1);
    uVar1 = 0;
    while ((uVar1 != 1000 &&
           ((recovered_10002490(param_1,unaff_r4,0x14,(int)&local_1c), extraout_r0_00 == 0 ||
            (local_1c != 0))))) {
      recovered_10002e80(param_1,10);
      uVar1 = uVar1 + 1;
    }
    bVar2 = uVar1 < 1000;
  }
  return bVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dac
 */

void recovered_10002dac(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10002ec0(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc8
 */

void recovered_10002dc8(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10002ec0(param_1,param_3 + param_2,4,param_4);
  return;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de0
 */

bool recovered_10002de0(int *param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *unaff_r5;
  bool bVar2;

  bVar2 = false;
  if (param_2 != 0) {
    unaff_r5 = param_3;
  }
  local_14 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    iVar1 = recovered_10002f24(param_1,param_2 + 4,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

#undef DAT_10002e64
#define DAT_10002e64 (*(int *)(0x10002e64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e2c
 */

void recovered_10002e2c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10002e64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e68
 */

uint recovered_10002e68(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10002ec0(api,offset + base,2,value);
  return uVar1;
}


#undef DAT_10002ebc
#define DAT_10002ebc (*(int *)(0x10002ebcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e80
 */

void recovered_10002e80(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10002ebc

#undef DAT_10002f20
#define DAT_10002f20 (*(int *)(0x10002f20U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

undefined4 recovered_10002ec0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002f08;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002f08:
                    /* WARNING: Could not recover jumptable at 0x10002f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002f20

#undef DAT_10002f8c
#define DAT_10002f8c (*(uint8_t * *)(0x10002f8cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f24
 */

undefined4 recovered_10002f24(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002f7c;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002f7c:
                    /* WARNING: Could not recover jumptable at 0x10002f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002f8c

#undef DAT_10003004
#define DAT_10003004 (*(uint8_t * *)(0x10003004U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

undefined4
recovered_10002f90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if ((((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (0x73 < (uint)param_1[2])) && (param_5 != 0)) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (param_3 != 0) {
      pcVar2 = (code *)param_1[0x1c];
    }
    if (param_3 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003008
 */

void recovered_10003008(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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


#undef DAT_10003090
#define DAT_10003090 (*(int *)(0x10003090U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000304c
 */

void recovered_1000304c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10003090

#undef DAT_10003454
#define DAT_10003454 (*(uint *)(0x10003454U))
#undef DAT_10003458
#define DAT_10003458 (*(uint *)(0x10003458U))
#undef DAT_1000345c
#define DAT_1000345c (*(uint *)(0x1000345cU))
#undef DAT_10003460
#define DAT_10003460 (*(int *)(0x10003460U))
#undef DAT_10003464
#define DAT_10003464 (*(int *)(0x10003464U))
#undef DAT_10003468
#define DAT_10003468 (*(int *)(0x10003468U))
#undef DAT_1000346c
#define DAT_1000346c (*(int *)(0x1000346cU))
#undef DAT_10003470
#define DAT_10003470 (*(int *)(0x10003470U))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
#define local_30 (*(int *)(pf_stack_frame + 48))
#define local_2c (*(int *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(uint *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003094
 */

undefined4
recovered_10003094(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,
                  undefined4 param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined2 *param_11)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1 = 0;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;

  uVar9 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  if (param_11 != (undefined2 *)0x0) {
    uVar6 = 0;
    if (param_2 != (int *)0x0) {
      uVar6 = *param_2;
    }
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    if (param_2 != (int *)0x0 && uVar6 != 0) {
      recovered_10002e68(param_1,uVar6,0x16,param_3);
      bVar3 = recovered_100024ac(param_1,*param_2,0x18,&local_24);
      uVar6 = 0;
      if (bVar3) {
        uVar6 = local_24;
      }
      if ((((bVar3 && uVar6 != 0) &&
           (uVar6 = uVar6 - ((*(uint32_t *)(uint32_t[]){0x55555555ULL}) & uVar6 >> 1),
           uVar6 = (uVar6 & (*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL})) + ((*(uint32_t *)(uint64_t[]){0xf0f0f0f33333333ULL}) & uVar6 >> 2),
           (uVar6 + (uVar6 >> 4) & (*(uint32_t *)(uint64_t[]){0x10101010f0f0f0fULL})) * (*(uint32_t *)(uint32_t[]){0x1010101ULL}) >> 0x18 < 2)) &&
          (bVar3 = recovered_100024ac(param_1,*param_2,0x1c,&local_2c), bVar3)) && (local_2c == 0))
      {
        uVar6 = local_24 & 0xffff;
        bVar3 = recovered_100024ac(param_1,*param_2,0x1e,&local_28);
        iVar8 = 0;
        if (bVar3) {
          uVar4 = param_2[1];
          uVar7 = extraout_r1;
          if (uVar4 != 0) {
            uVar7 = param_2[9];
          }
          if (((uVar4 != 0 && uVar7 != 0) && (1 < (uint)param_2[10])) &&
             (iVar8 = 0, (int)((ulonglong)local_28 * (ulonglong)uVar7 >> 0x20) == 0)) {
            iVar8 = 0;
            if (!CARRY4(uVar4,local_28 * uVar7)) {
              iVar8 = local_28 * uVar7 + uVar4;
            }
            if (param_2[10] - 2U < local_28 * uVar7) {
              iVar8 = 0;
            }
          }
        }
        if (((iVar8 != 0) && (param_4 <= uVar6)) &&
           ((iVar5 = recovered_10002f90(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0xa2a4U)),param_5,
                                        param_6,(int)&local_34,&local_38), iVar5 != 0 &&
            (((iVar5 = recovered_10002f90(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0xa2a4U)),param_7
                                          ,param_8,(int)&local_3c,&local_40), iVar5 != 0 &&
              (iVar5 = recovered_10002f90(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0xa2a4U)),param_9
                                          ,param_10,(int)&local_44,&local_48), iVar5 != 0)) &&
             ((local_34 & 0xf) == 0)))))) {
          bVar3 = (local_3c & 1) == 0;
          bVar2 = (byte)local_3c;
          if (bVar3) {
            bVar2 = (byte)local_44;
          }
          if (((bVar3 && (bVar2 & 3) == 0) &&
              (uVar6 = recovered_10002e68(param_1,*param_2,0x16,param_3), uVar6 != 0)) &&
             (((uVar6 = recovered_10002e68(param_1,*param_2,0x18,param_4), uVar6 != 0 &&
               ((bVar3 = recovered_10003474(param_1,*param_2,0x20,local_34,local_38), bVar3 &&
                (bVar3 = recovered_10003474(param_1,*param_2,0x28,local_3c,local_40), bVar3)))) &&
              (bVar3 = recovered_10003474(param_1,*param_2,0x30,local_44,local_48),
              iVar5 = (*(uint32_t *)(uint32_t[]){0xac98ULL}), bVar3)))) {
            recovered_1000304c(param_1,*(undefined4 *)(((uintptr_t)pf_module_state + 0xa2a4U)),param_5,param_6);
            recovered_1000304c(param_1,*(undefined4 *)(iVar5 + 0x100033a0),param_7,param_8);
            recovered_1000304c(param_1,*(undefined4 *)(iVar5 + 0x100033a0),param_9,param_10);
            uVar6 = recovered_10002e68(param_1,*param_2,0x1c,1);
            if (uVar6 != 0) {
              bVar3 = recovered_100024ac(param_1,*param_2,0x1c,&local_30);
              iVar5 = 0;
              if (bVar3) {
                iVar5 = local_30;
              }
              if (bVar3 && iVar5 != 0) {
                uVar9 = 1;
                *param_11 = (short)param_4;
                param_11[1] = *(undefined2 *)(param_7 + 2);
                uVar1 = *(undefined2 *)(param_9 + 2);
                *(int *)(param_11 + 4) = iVar8;
                param_11[2] = uVar1;
              }
            }
          }
        }
      }
    }
  }
  return uVar9;
}

#undef DAT_10003454
#undef DAT_10003458
#undef DAT_1000345c
#undef DAT_10003460
#undef DAT_10003464
#undef DAT_10003468
#undef DAT_1000346c
#undef DAT_10003470
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003474
 */

bool recovered_10003474(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;

  recovered_10002dc8(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return false;
  }
  recovered_10002dc8(param_1,param_2,param_3 + 4,param_5);
  return extraout_r0_00 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bc
 */

void recovered_100034bc(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_1000351c(param_1,param_2,bVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000351c
 */

void recovered_1000351c(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100021d0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_100035cc
#define DAT_100035cc (*(uint32_t *)(0x100035ccU))
#undef DAT_100035d0
#define DAT_100035d0 (*(int *)(0x100035d0U))
#undef DAT_100035d4
#define DAT_100035d4 (*(int *)(0x100035d4U))
#undef DAT_100035d8
#define DAT_100035d8 (*(int *)(0x100035d8U))
#undef DAT_100035dc
#define DAT_100035dc (*(int *)(0x100035dcU))
#undef DAT_100035e0
#define DAT_100035e0 (*(int *)(0x100035e0U))
#undef DAT_100035e4
#define DAT_100035e4 (*(int *)(0x100035e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003558
 */

int recovered_10003558(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x21cU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x23bU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x226U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x22bU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x230U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x221U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x244U);
  }
  return iVar1;
}

#undef DAT_100035cc
#undef DAT_100035d0
#undef DAT_100035d4
#undef DAT_100035d8
#undef DAT_100035dc
#undef DAT_100035e0
#undef DAT_100035e4

#undef DAT_10003620
#define DAT_10003620 (*(int *)(0x10003620U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e8
 */

void recovered_100035e8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(((uintptr_t)pf_module_state + 0x36cU));
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

#undef DAT_10003620

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003624
 */

undefined4 recovered_10003624(undefined4 *param_1)

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


#undef DAT_10003724
#define DAT_10003724 (*(int *)(0x10003724U))
#undef DAT_10003728
#define DAT_10003728 (*(int *)(0x10003728U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000364c
 */

undefined4 recovered_1000364c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;

  iVar6 = (*(uint32_t *)(uint32_t[]){0xa994ULL});
  uVar3 = 0;
  iVar7 = ((uintptr_t)pf_module_state + 0xa26cU);
  bVar9 = *(int *)(((uintptr_t)pf_module_state + 0xa290U)) != 0;
  sVar1 = 0;
  if (bVar9) {
    sVar1 = *(short *)(((uintptr_t)pf_module_state + 0xa2c4U));
  }
  if (bVar9 && sVar1 != 0) {
    puVar8 = (undefined1 *)(((uintptr_t)pf_module_state + 0x66cU) + param_1 * 0x900);
    recovered_1000246c(puVar8,0x900);
    uVar2 = *(ushort *)(((uintptr_t)pf_module_state+0xa2c6U));
    uVar4 = recovered_100037a8((uint)uVar2,(uint)*(ushort *)(((uintptr_t)pf_module_state+0xa2c4U)));
    *(short *)(iVar7 + uVar4 * 2 + 4) = (short)param_1;
    iVar5 = uVar2 + 1;
    *(char *)(((uintptr_t)pf_module_state+0xa26eU)) = (char)iVar5;
    *(short *)(((uintptr_t)pf_module_state+0xa2c6U)) = (short)iVar5;
    *(char *)(((uintptr_t)pf_module_state+0xa26fU)) = (char)((uint)iVar5 >> 8);
    recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),puVar8,
                       0x900);
    recovered_1000304c(*(int **)(((uintptr_t)pf_module_state+0xa290U)),*(undefined4 *)(((uintptr_t)pf_module_state+0xa2a4U)),iVar7,0x24)
    ;
    iVar6 = recovered_100024f8(*(int **)(((uintptr_t)pf_module_state+0xa290U)),((uintptr_t)pf_module_state+0xa2c4U),0);
    uVar3 = 1;
    if (iVar6 == 0) {
      recovered_100029f8();
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef DAT_10003724
#undef DAT_10003728

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000372c
 */

void recovered_1000372c(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0 || param_2 == (undefined1 *)0x0) {
    return;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003758
 */

uint recovered_10003758(uint param_1,uint param_2)

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
 * Address: 0x100037a8
 */

uint recovered_100037a8(uint param_1,uint param_2)

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
 * Address: 0x100037e0
 */

uint recovered_100037e0(uint param_1,uint param_2)

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
 * Address: 0x10003850
 */

uint recovered_10003850(uint param_1,uint param_2)

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
 * Address: 0x100038b8
 */

undefined8 recovered_100038b8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000399c
 */

undefined8 recovered_1000399c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003a1c
 */

undefined8 recovered_10003a1c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003b3c
 */

undefined8 recovered_10003b3c(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003c78
#define DAT_10003c78 (*(double *)(0x10003c78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf8
 */

undefined8 recovered_10003bf8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003c78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c80
 */

undefined8 recovered_10003c80(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003bf8(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003bf8(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ccc
 */

undefined8 recovered_10003ccc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003bf8(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x26cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cdc
 */

void recovered_10003cdc(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x254U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cec
 */

double recovered_10003cec(uint param_1,uint param_2)

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
 * Address: 0x10003d34
 */

double recovered_10003d34(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003cec(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003cec(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d5c
 */

float recovered_10003d5c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003cec(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d78
 */

float recovered_10003d78(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d34(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
