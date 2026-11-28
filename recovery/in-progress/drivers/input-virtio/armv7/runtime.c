/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000444c
#define DAT_1000444c (*(uint32_t *)(0x1000444cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004440
 */

void * recovered_10004440(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x42f0U));
}

#undef DAT_1000444c

#undef DAT_10004764
#define DAT_10004764 (*(int *)(0x10004764U))
#undef DAT_10004768
#define DAT_10004768 (*(int *)(0x10004768U))
#undef DAT_1000476c
#define DAT_1000476c (*(int *)(0x1000476cU))
#undef DAT_10004770
#define DAT_10004770 (*(int *)(0x10004770U))
#undef DAT_10004774
#define DAT_10004774 (*(int *)(0x10004774U))
#undef DAT_10004778
#define DAT_10004778 (*(int *)(0x10004778U))
#undef DAT_1000477c
#define DAT_1000477c (*(int *)(0x1000477cU))
#undef DAT_10004780
#define DAT_10004780 (*(int *)(0x10004780U))
#undef DAT_10004784
#define DAT_10004784 (*(int *)(0x10004784U))
#undef DAT_10004788
#define DAT_10004788 (*(int *)(0x10004788U))
#undef DAT_1000478c
#define DAT_1000478c (*(int *)(0x1000478cU))
#undef DAT_10004790
#define DAT_10004790 (*(int *)(0x10004790U))
#undef DAT_10004794
#define DAT_10004794 (*(int *)(0x10004794U))
#define abStack_450 (*(byte (*)[1104])(pf_stack_frame + 16))
#define abStack_50 (*(byte (*)[80])(pf_stack_frame + 1040))
#define local_444 (*(char *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004450
 */

uint recovered_10004450(void *api)

{
  unsigned char pf_stack_frame[1152] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  code *extraout_r3;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  iVar5 = (*(uint32_t *)(uint32_t[]){0x594cULL});
  iVar9 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if ((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    puVar3 = (undefined1 *)(((uintptr_t)pf_module_state + 0x20ecU));
    *(undefined4 *)(((uintptr_t)pf_module_state + 0x2100U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x20fcU)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x20f8U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x20f4U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x20f0U)) = 0;
    *puVar3 = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x2104U)) = 0;
    recovered_10004798((undefined1 *)(((uintptr_t)pf_module_state+0x210cU)),0x20);
    if (((*(int *)api == iVar9) && (0x5f < *(uint *)((int)api + 8))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      iVar9 = 0;
      for (uVar4 = 0; uVar4 != 8; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
          iVar5 = recovered_10005c48(api,uVar4 & 0xff,uVar6 & 0xff,0,abStack_450);
          if (iVar5 != 0) {
            iVar5 = recovered_100047bc(api,abStack_450);
            iVar9 = iVar5 + iVar9;
            if (0x7fffffff < (uint)(int)local_444) {
              for (uVar10 = 1; uVar10 != 8; uVar10 = uVar10 + 1) {
                iVar5 = recovered_10005c48(api,uVar4 & 0xff,uVar6 & 0xff,uVar10 & 0xff,abStack_50);
                if (iVar5 != 0) {
                  iVar5 = recovered_100047bc(api,abStack_50);
                  iVar9 = iVar5 + iVar9;
                }
              }
            }
          }
        }
      }
      uVar4 = 0;
      iVar5 = ((uintptr_t)pf_module_state + 0x20ecU);
      if (iVar9 != 0) {
        iVar5 = *(int *)(((uintptr_t)pf_module_state + 0x20f0U));
      }
      if (iVar9 != 0 && iVar5 != 0) {
        iVar11 = 0;
        iVar9 = 0;
        piVar7 = (int *)(((uintptr_t)pf_module_state + 0x46cU));
        while (iVar5 != 0) {
          iVar5 = iVar5 + -1;
          if (piVar7[1] != 0) {
            uVar4 = uVar4 | 2;
          }
          if (piVar7[2] != 0) {
            uVar4 = uVar4 | 1;
          }
          if (*piVar7 != 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + (uint)(piVar7[1] != 0 || piVar7[2] != 0);
          piVar7 = piVar7 + 0x1c0;
        }
        recovered_10005b7c(abStack_450,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
        if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
           (iVar5 = (**(code **)((int)api + 0xc))
                              (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),abStack_450),
           iVar5 != 0)) {
          bVar2 = true;
          bVar1 = true;
          if (iVar9 != 0) {
            pcVar8 = extraout_r3;
            if (uVar4 != 0) {
              pcVar8 = *(code **)((int)api + 0x20);
            }
            if (uVar4 != 0 && pcVar8 != (code *)0x0) {
              iVar9 = (*pcVar8)(((uintptr_t)&recovered_10005b90),uVar4,((uintptr_t)pf_module_state + 0x32U));
              bVar1 = iVar9 == 0;
            }
          }
          if ((((iVar11 != 0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0xa7 < *(uint *)((int)api + 8)))
             && (*(code **)((int)api + 0xa4) != (code *)0x0)) {
            iVar9 = (**(code **)((int)api + 0xa4))
                              (((uintptr_t)&recovered_10005c0c),3,((uintptr_t)pf_module_state + 0x41U));
            bVar2 = iVar9 == 0;
          }
          if (!(bool)(bVar1 & bVar2)) {
            if (*(code **)((int)api + 0xc) == (code *)0x0) {
              return 1;
            }
            (**(code **)((int)api + 0xc))
                      (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),abStack_450);
            return 1;
          }
        }
        recovered_10005b2c();
        return 0;
      }
    }
    recovered_10005b2c();
  }
  return 0;
}

#undef DAT_10004764
#undef DAT_10004768
#undef DAT_1000476c
#undef DAT_10004770
#undef DAT_10004774
#undef DAT_10004778
#undef DAT_1000477c
#undef DAT_10004780
#undef DAT_10004784
#undef DAT_10004788
#undef DAT_1000478c
#undef DAT_10004790
#undef DAT_10004794
#undef abStack_450
#undef abStack_50
#undef local_444

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004798
 */

void recovered_10004798(undefined1 *param_1,int param_2)

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


#undef DAT_10005648
#define DAT_10005648 (*(int *)(0x10005648U))
#undef DAT_1000564c
#define DAT_1000564c (*(int *)(0x1000564cU))
#undef DAT_10005650
#define DAT_10005650 (*(int *)(0x10005650U))
#undef DAT_10005654
#define DAT_10005654 (*(int *)(0x10005654U))
#undef DAT_10005658
#define DAT_10005658 (*(int *)(0x10005658U))
#undef DAT_1000565c
#define DAT_1000565c (*(int *)(0x1000565cU))
#undef DAT_10005660
#define DAT_10005660 (*(int *)(0x10005660U))
#undef DAT_10005664
#define DAT_10005664 (*(int *)(0x10005664U))
#undef DAT_10005aec
#define DAT_10005aec (*(int *)(0x10005aecU))
#undef DAT_10005af0
#define DAT_10005af0 (*(int *)(0x10005af0U))
#undef DAT_10005af4
#define DAT_10005af4 (*(int *)(0x10005af4U))
#undef DAT_10005af8
#define DAT_10005af8 (*(int *)(0x10005af8U))
#undef DAT_10005afc
#define DAT_10005afc (*(int *)(0x10005afcU))
#undef DAT_10005b00
#define DAT_10005b00 (*(int *)(0x10005b00U))
#undef DAT_10005b04
#define DAT_10005b04 (*(int *)(0x10005b04U))
#undef DAT_10005b08
#define DAT_10005b08 (*(int *)(0x10005b08U))
#undef DAT_10005b0c
#define DAT_10005b0c (*(int *)(0x10005b0cU))
#undef DAT_10005b10
#define DAT_10005b10 (*(int *)(0x10005b10U))
#undef DAT_10005b14
#define DAT_10005b14 (*(int *)(0x10005b14U))
#undef DAT_10005b18
#define DAT_10005b18 (*(int *)(0x10005b18U))
#undef DAT_10005b1c
#define DAT_10005b1c (*(int *)(0x10005b1cU))
#undef DAT_10005b20
#define DAT_10005b20 (*(int *)(0x10005b20U))
#undef DAT_10005b24
#define DAT_10005b24 (*(int *)(0x10005b24U))
#undef DAT_10005b28
#define DAT_10005b28 (*(int *)(0x10005b28U))
#define local_8d8 (*(int *)(pf_stack_frame + 24))
#define local_8c0 (*(int *)(pf_stack_frame + 48))
#define local_8bc (*(char (*)[2236])(pf_stack_frame + 52))
#define local_4bc (*(int *)(pf_stack_frame + 1076))
#define local_4b8 (*(undefined4 *)(pf_stack_frame + 1080))
#define local_4b4 (*(undefined4 *)(pf_stack_frame + 1084))
#define local_4b0 (*(undefined4 *)(pf_stack_frame + 1088))
#define local_4ac (*(uint *)(pf_stack_frame + 1092))
#define local_4a8 (*(undefined4 *)(pf_stack_frame + 1096))
#define local_4a4 (*(uint *)(pf_stack_frame + 1100))
#define local_4a0 (*(int *)(pf_stack_frame + 1104))
#define local_49c (*(int *)(pf_stack_frame + 1108))
#define local_498 (*(uint *)(pf_stack_frame + 1112))
#define local_494 (*(uint *)(pf_stack_frame + 1116))
#define local_490 (*(uint *)(pf_stack_frame + 1120))
#define local_48c (*(uint *)(pf_stack_frame + 1124))
#define local_488 (*(uint *)(pf_stack_frame + 1128))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 1132))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047bc
 */

undefined4 recovered_100047bc(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
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
  int *piVar8;
  int *piVar9;
  int iVar10;
  int extraout_r0_14 = 0;
  int extraout_r0_15 = 0;
  int extraout_r0_16 = 0;
  int extraout_r0_17 = 0;
  int extraout_r0_18 = 0;
  int extraout_r0_19 = 0;
  int extraout_r0_20 = 0;
  uint uVar11;
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
  short sVar12;
  uint uVar13;
  uint extraout_r2 = 0;
  char *pcVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  char *pcVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return 0;
  }
  sVar4 = *(short *)(param_2 + 6);
  sVar12 = 0x1012;
  if (sVar4 != 0x1012) {
    sVar12 = 0x1052;
  }
  if (sVar4 != 0x1012 && sVar4 != sVar12) {
    return 0;
  }
  uVar11 = *(uint *)(((uintptr_t)pf_module_state + 0x20f0U));
  if (3 < uVar11) {
    return 0;
  }
  local_8c0 = ((uintptr_t)pf_module_state + 0x3ecU);
  piVar18 = (int *)(local_8c0 + uVar11 * 0x700);
  recovered_10004798((undefined1 *)piVar18,0x700);
  recovered_10005b7c(local_8bc,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  *(int **)(local_8c0 + uVar11 * 0x700) = param_1;
  piVar18[0x1e] = 1;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)((int)piVar18 + 0x72) = bVar1;
  *(byte *)((int)piVar18 + 0x73) = bVar2;
  *(byte *)(piVar18 + 0x1d) = bVar3;
  local_4a4 = 0;
  local_4a8 = 0;
  local_4ac = 0;
  local_4b0 = 0;
  local_4b4 = 0;
  local_4b8 = 0;
  *(short *)((int)piVar18 + 0x76) = (short)*(undefined4 *)(param_2 + 0x10);
  local_4bc = 0;
  local_484[0] = 0;
  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xdcU));
  if ((((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (99 < (uint)param_1[2])) &&
     (param_1[0x18] != 0)) {
    iVar6 = recovered_10005e0c(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,(int)local_484);
    if (iVar6 == 0) {
      pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xeeU));
    }
    else {
      iVar6 = 5;
      uVar15 = 0;
      while (iVar6 != 0xb) {
        iVar7 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        uVar13 = uVar15;
        if (*(uint *)(param_2 + iVar7) != 0) {
          uVar13 = uVar15 | 2;
        }
        if ((*(uint *)(param_2 + iVar7) & 1) != 0) {
          uVar13 = uVar15 | 1;
        }
        uVar15 = uVar13;
      }
      iVar6 = recovered_100064c4(((uintptr_t)pf_module_state + 0x6aU));
      if (iVar6 != 0) {
        uVar15 = uVar15 | 4;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar15 = uVar15 | 2;
      }
      local_84[0] = local_484[0] | uVar15;
      iVar6 = recovered_10006454(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                 local_84[0]);
      if (iVar6 != 0) {
        recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                           (int)local_84);
        if ((local_84[0] & uVar15) == uVar15) {
          piVar16 = piVar18 + 1;
          local_484[0] = 0;
          recovered_10004798((undefined1 *)piVar16,100);
          iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1
                                     ,(int)local_484);
          if (iVar6 != 0) {
            uVar15 = 0;
            while( true ) {
              bVar21 = 0x1e < uVar15;
              bVar20 = uVar15 == 0x1f;
              if (uVar15 < 0x20) {
                bVar21 = 0xae < local_484[0] - 0x40;
                bVar20 = local_484[0] - 0x40 == 0xaf;
              }
              if (bVar21 && !bVar20) break;
              local_84[0] = 0;
              local_488 = 0;
              local_48c = 0;
              local_490 = 0;
              local_494 = 0;
              local_498 = 0;
              iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         local_484[0] & 0xffff,1,(int)local_84);
              if ((iVar6 == 0) ||
                 (iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                             (uint)param_2[2],(local_484[0] & 0xffff) + 1 & 0xffff,1
                                             ,(int)&local_488), iVar6 == 0)) break;
              uVar13 = extraout_r1;
              if ((local_84[0] == 9) &&
                 ((((iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                                (uint)param_2[2],
                                                (local_484[0] & 0xffff) + 3 & 0xffff,1,
                                                (int)&local_48c), uVar13 = extraout_r1_00,
                    iVar6 != 0 &&
                    (iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                                (uint)param_2[2],
                                                (local_484[0] & 0xffff) + 4 & 0xffff,1,
                                                (int)&local_490), uVar13 = extraout_r1_01,
                    iVar6 != 0)) &&
                   (iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                               (uint)param_2[2],(local_484[0] & 0xffff) + 8 & 0xffff
                                               ,4,(int)&local_494), uVar13 = extraout_r1_02,
                   iVar6 != 0)) &&
                  (iVar6 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                              (uint)param_2[2],
                                              (local_484[0] & 0xffff) + 0xc & 0xffff,4,
                                              (int)&local_498), uVar13 = extraout_r1_03, iVar6 != 0)
                  ))) {
                piVar18[0xc] = piVar18[0xc] + 1;
                local_49c = 0;
                if (((local_48c == 1) && (0x37 < local_498)) &&
                   (iVar6 = recovered_100064ec(param_1,param_2,local_490,local_494,local_498,
                                               &local_49c), iVar6 != 0)) {
                  piVar18[1] = local_49c;
                  piVar18[6] = local_490;
                  uVar13 = extraout_r1_04;
                }
                else {
                  uVar13 = local_498;
                  if (((local_48c == 2) && (1 < local_498)) &&
                     (iVar6 = recovered_100064ec(param_1,param_2,local_490,local_494,local_498,
                                                 &local_49c), uVar13 = extraout_r1_05, iVar6 != 0))
                  {
                    piVar18[2] = local_49c;
                    piVar18[7] = local_490;
                    local_4a0 = 0;
                    iVar7 = recovered_10005e0c(param_1,(uint)*param_2,(uint)param_2[1],
                                               (uint)param_2[2],
                                               (local_484[0] & 0xffff) + 0x10 & 0xffff,4,
                                               (int)&local_4a0);
                    iVar6 = 0;
                    if (iVar7 != 0) {
                      iVar6 = local_4a0;
                    }
                    uVar13 = extraout_r1_06;
                    if (iVar7 != 0 && iVar6 != 0) {
                      piVar18[10] = iVar6;
                      piVar18[0xb] = local_498;
                    }
                    else {
                      piVar18[2] = 0;
                    }
                  }
                  else if ((local_48c == 3) &&
                          (iVar6 = recovered_100064ec(param_1,param_2,local_490,local_494,local_498,
                                                      &local_49c), uVar13 = extraout_r1_07,
                          iVar6 != 0)) {
                    piVar18[3] = local_49c;
                    piVar18[8] = local_490;
                  }
                  else if ((local_48c == 4) &&
                          (iVar6 = recovered_100064ec(param_1,param_2,local_490,local_494,local_498,
                                                      &local_49c), uVar13 = extraout_r1_08,
                          iVar6 != 0)) {
                    piVar18[4] = local_49c;
                    piVar18[5] = local_498;
                    piVar18[9] = local_490;
                  }
                }
              }
              if (local_488 != 0) {
                uVar13 = local_484[0];
              }
              if (local_488 == 0 || local_488 == uVar13) break;
              local_484[0] = local_488;
              uVar15 = uVar15 + 1;
            }
            if (*piVar16 != 0) {
              local_484[0] = 0;
              local_84[0] = 0;
              recovered_100066f4(param_1,*piVar16,0x14,(int)(piVar18 + 0x11));
              piVar18[0x13] = 1;
              bVar20 = recovered_10006710(param_1,piVar18[1]);
              if (bVar20) {
                piVar18[0x13] = 2;
                recovered_100067f4(param_1,piVar18[1],0x14,1);
                if (((extraout_r0 != 0) &&
                    (recovered_100066f4(param_1,*piVar16,0x14,(int)local_84), extraout_r0_00 != 0))
                   && ((local_84[0] & 0xc1) == 1)) {
                  piVar18[0x13] = 3;
                  recovered_100067f4(param_1,piVar18[1],0x14,3);
                  if (((extraout_r0_01 != 0) &&
                      (recovered_100066f4(param_1,*piVar16,0x14,(int)local_84), extraout_r0_02 != 0)
                      ) && ((local_84[0] & 0xc3) == 3)) {
                    piVar18[0x13] = 4;
                    recovered_1000680c(param_1,piVar18[1],0,0);
                    if (((extraout_r0_03 != 0) &&
                        (bVar20 = recovered_10006824(param_1,piVar18[1],piVar18 + 0xd), bVar20)) &&
                       (recovered_1000680c(param_1,*piVar16,0,1), extraout_r0_04 != 0)) {
                      bVar20 = recovered_10006824(param_1,piVar18[1],piVar18 + 0xe);
                      uVar15 = 0;
                      if (bVar20) {
                        uVar15 = piVar18[0xe];
                      }
                      if (bVar20 && (uVar15 & 1) != 0) {
                        piVar18[0x13] = 5;
                        piVar18[0xf] = 0;
                        piVar18[0x10] = uVar15 & 3;
                        recovered_1000680c(param_1,piVar18[1],8,0);
                        if ((((extraout_r0_06 != 0) &&
                             (recovered_1000680c(param_1,piVar18[1],0xc,piVar18[0xf]),
                             extraout_r0_07 != 0)) &&
                            (recovered_1000680c(param_1,*piVar16,8,1), extraout_r0_08 != 0)) &&
                           (recovered_1000680c(param_1,piVar18[1],0xc,piVar18[0x10]),
                           extraout_r0_09 != 0)) {
                          recovered_10006870(param_1);
                          piVar18[0x13] = 6;
                          local_84[0] = 0xb;
                          recovered_100067f4(param_1,piVar18[1],0x14,0xb);
                          if (extraout_r0_10 != 0) {
                            recovered_100066f4(param_1,piVar18[1],0x14,(int)(piVar18 + 0x12));
                            if ((extraout_r0_11 != 0) && ((piVar18[0x12] & 200U) == 8)) {
                              piVar18[0x13] = 7;
                              bVar20 = recovered_10006314(param_1,piVar18[1],0x12,piVar18 + 0x14);
                              if (((bVar20) &&
                                  ((recovered_100066f4(param_1,piVar18[1],0x15,(int)(piVar18 + 0x19)
                                                      ), extraout_r0_12 != 0 &&
                                   (recovered_100062b4(param_1,*piVar16,0x16,0), extraout_r0_13 != 0
                                   )))) && (bVar20 = recovered_10006314(param_1,piVar18[1],0x18,
                                                                        piVar18 + 0x15), bVar20)) {
                                bVar20 = recovered_10006314(param_1,piVar18[1],0x1c,piVar18 + 0x16);
                                if (bVar20) {
                                  bVar20 = recovered_10006314(param_1,*piVar16,0x1e,local_484);
                                  if (bVar20) {
                                    uVar13 = piVar18[2];
                                    piVar18[0x17] = local_484[0];
                                    uVar15 = extraout_r2;
                                    if (uVar13 != 0) {
                                      uVar15 = piVar18[10];
                                    }
                                    if ((((uVar13 != 0 && uVar15 != 0) && (1 < (uint)piVar18[0xb]))
                                        && ((int)((ulonglong)local_484[0] * (ulonglong)uVar15 >>
                                                 0x20) == 0)) &&
                                       ((uVar15 = uVar15 * local_484[0], !CARRY4(uVar13,uVar15) &&
                                        (uVar15 <= piVar18[0xb] - 2U)))) {
                                      piVar18[0x18] = uVar15 + uVar13;
                                    }
                                  }
                                  uVar15 = 0x80000000;
                                  piVar18[0x13] = 8;
                                  if ((piVar18[0x10] & 2U) == 0) {
                                    uVar15 = 0xc0000000;
                                  }
                                  piVar18[0x1f] =
                                       uVar15 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                                       (uint)param_2[1] << 0xb;
                                  uVar15 = piVar18[0x15] - 1;
                                  if (((uVar15 < (piVar18[0x15] ^ uVar15)) && (piVar18[0x16] == 0))
                                     && (piVar18[0x18] != 0)) {
                                    uVar15 = 0;
                                    local_84[0] = 0;
                                    local_488 = 0;
                                    local_48c = 0;
                                    local_490 = 0;
                                    local_494 = 0;
                                    iVar6 = recovered_1000697c(piVar18,0x11,1,
                                                               (undefined1 *)local_484,
                                                               (int *)local_84);
                                    if (iVar6 != 0) {
                                      for (uVar13 = 1;
                                          (uVar13 != 0x100 &&
                                          ((local_84[0] <= uVar13 >> 3 ||
                                           ((*(byte *)((int)local_484 + (uVar13 >> 3)) >>
                                             (uVar13 & 7) & 1) == 0)))); uVar13 = uVar13 + 1) {
                                      }
                                      piVar18[0x20] = (uint)(uVar13 < 0x100);
                                    }
                                    iVar6 = recovered_1000697c(piVar18,0x11,2,
                                                               (undefined1 *)local_484,
                                                               (int *)local_84);
                                    if (iVar6 != 0) {
                                      uVar15 = (uint)(local_84[0] != 0 && (local_484[0] & 3) == 3);
                                    }
                                    piVar18[0x21] = uVar15;
                                    iVar6 = recovered_1000697c(piVar18,0x11,3,
                                                               (undefined1 *)local_484,
                                                               (int *)local_84);
                                    uVar15 = 0;
                                    if (iVar6 != 0) {
                                      uVar15 = local_84[0];
                                    }
                                    if ((((iVar6 != 0 && uVar15 != 0) && ((local_484[0] & 3) == 3))
                                        && (iVar6 = recovered_1000697c(piVar18,0x12,0,
                                                                       (undefined1 *)local_484,
                                                                       (int *)local_84), iVar6 != 0)
                                        ) && (((uVar22 = recovered_10006b7c(local_484,local_84[0],
                                                                            &local_488,
                                                                            (int *)&local_490),
                                               (int)uVar22 != 0 &&
                                               (iVar6 = recovered_1000697c(piVar18,0x12,1,
                                                                           (undefined1 *)local_484,
                                                                           (int *)local_84),
                                               iVar6 != 0)) &&
                                              (uVar22 = recovered_10006b7c(local_484,local_84[0],
                                                                           &local_48c,
                                                                           (int *)&local_494),
                                              (int)uVar22 != 0)))) {
                                      piVar18[0x22] = 1;
                                      piVar18[0x23] = local_488;
                                      piVar18[0x24] = local_48c;
                                      piVar18[0x25] = local_490;
                                      piVar18[0x26] = local_494;
                                    }
                                    recovered_100067f4((int *)*piVar18,piVar18[4],0,0);
                                    recovered_100067f4((int *)*piVar18,piVar18[4],1,0);
                                    iVar6 = piVar18[0x20];
                                    bVar20 = iVar6 == 0;
                                    if (bVar20) {
                                      iVar6 = piVar18[0x21];
                                    }
                                    if ((!bVar20 || iVar6 != 0) || (piVar18[0x22] != 0)) {
                                      uVar15 = piVar18[0x15];
                                      piVar17 = piVar18 + 0x40;
                                      if (0x1f < uVar15) {
                                        uVar15 = 0x20;
                                      }
                                      *(short *)(piVar18 + 0x1b) = (short)uVar15;
                                      recovered_10004798((undefined1 *)piVar17,0x200);
                                      piVar8 = piVar18 + 0xc0;
                                      recovered_10004798((undefined1 *)piVar8,0x46);
                                      piVar9 = piVar18 + 0x100;
                                      recovered_10004798((undefined1 *)piVar9,0x106);
                                      recovered_10004798((undefined1 *)(piVar18 + 0x180),0x100);
                                      iVar6 = recovered_100061f4(param_1,piVar18[0x1f],(int)piVar17,
                                                                 0x200,(int)&local_4a4,&local_4a8);
                                      if ((((iVar6 != 0) &&
                                           (iVar6 = recovered_100061f4(param_1,piVar18[0x1f],
                                                                       (int)piVar8,0x46,
                                                                       (int)&local_4ac,&local_4b0),
                                           iVar6 != 0)) &&
                                          (iVar6 = recovered_100061f4(param_1,piVar18[0x1f],
                                                                      (int)piVar9,0x106,
                                                                      (int)&local_4b4,&local_4b8),
                                          iVar6 != 0)) && ((local_4a4 & 0xf) == 0)) {
                                        bVar20 = (local_4ac & 1) == 0;
                                        bVar1 = (byte)local_4ac;
                                        if (bVar20) {
                                          bVar1 = (byte)local_4b4;
                                        }
                                        if (bVar20 && (bVar1 & 3) == 0) {
                                          local_8d8 = ((uintptr_t)pf_module_state + 0x9ecU);
                                          iVar6 = uVar11 * 0x700;
                                          iVar7 = ((uintptr_t)pf_module_state + 0x6f0U);
                                          for (uVar11 = 0; uVar5 = *(ushort *)(piVar18 + 0x1b),
                                              uVar11 < uVar5; uVar11 = uVar11 + 1) {
                                            local_484[0] = 0;
                                            local_84[0] = 0;
                                            iVar10 = recovered_100061f4(param_1,piVar18[0x1f],
                                                                        local_8d8 + iVar6,8,
                                                                        (int)local_484,local_84);
                                            if (iVar10 == 0) goto LAB_10004a54;
                                            iVar10 = local_8c0 + iVar6;
                                            local_8c0 = local_8c0 + 0x10;
                                            *(undefined2 *)(iVar10 + 0x10c) = 2;
                                            *(undefined4 *)(iVar10 + 0x108) = 8;
                                            *(char *)(iVar10 + 0x104) = (char)local_84[0];
                                            *(char *)(iVar10 + 0x107) = (char)(local_84[0] >> 0x18);
                                            *(char *)(iVar10 + 0x106) = (char)(local_84[0] >> 0x10);
                                            *(char *)(iVar10 + 0x105) = (char)(local_84[0] >> 8);
                                            *(char *)(iVar10 + 0x100) = (char)local_484[0];
                                            *(char *)(iVar10 + 0x103) = (char)(local_484[0] >> 0x18)
                                            ;
                                            *(char *)(iVar10 + 0x102) = (char)(local_484[0] >> 0x10)
                                            ;
                                            *(char *)(iVar10 + 0x101) = (char)(local_484[0] >> 8);
                                            *(undefined1 *)(iVar7 + iVar6) = (char)uVar11;
                                            ((undefined1 *)(iVar7 + iVar6))[1] = (char)(uVar11 >> 8)
                                            ;
                                            local_8d8 = local_8d8 + 8;
                                            iVar7 = iVar7 + 2;
                                          }
                                          *(char *)((int)piVar18 + 0x302) = (char)uVar5;
                                          *(ushort *)((int)piVar18 + 0x6e) = uVar5;
                                          *(char *)((int)piVar18 + 0x303) = (char)(uVar5 >> 8);
                                          recovered_1000626c(param_1,piVar18[0x1f],piVar17,0x200);
                                          recovered_1000626c(param_1,piVar18[0x1f],piVar8,0x46);
                                          recovered_1000626c(param_1,piVar18[0x1f],piVar9,0x106);
                                          recovered_1000626c(param_1,piVar18[0x1f],piVar18 + 0x180,
                                                             0x100);
                                          recovered_100062b4(param_1,piVar18[1],0x16,0);
                                          if ((((extraout_r0_14 != 0) &&
                                               (recovered_100062b4(param_1,piVar18[1],0x18,
                                                                   (uint)*(ushort *)(piVar18 + 0x1b)
                                                                  ), extraout_r0_15 != 0)) &&
                                              ((bVar20 = recovered_100062cc(param_1,*piVar16,0x20,
                                                                            local_4a4,local_4a8),
                                               bVar20 && ((bVar20 = recovered_100062cc(param_1,*
                                                  piVar16,0x28,local_4ac,local_4b0), bVar20 &&
                                                  (bVar20 = recovered_100062cc(param_1,*piVar16,0x30
                                                                               ,local_4b4,local_4b8)
                                                  , bVar20)))))) &&
                                             (recovered_100062b4(param_1,*piVar16,0x1c,1),
                                             extraout_r0_16 != 0)) {
                                            bVar20 = recovered_10006314(param_1,*piVar16,0x1c,
                                                                        &local_4bc);
                                            iVar6 = 0;
                                            if (bVar20) {
                                              iVar6 = local_4bc;
                                            }
                                            if (bVar20 && iVar6 != 0) {
                                              iVar6 = *piVar16;
                                              local_484[0] = 0;
                                              if ((((((iVar6 != 0) &&
                                                     (recovered_100066f4(param_1,iVar6,0x14,
                                                                         (int)local_484),
                                                     extraout_r0_17 != 0)) &&
                                                    ((local_484[0] & 200) == 8)) &&
                                                   ((recovered_100067f4(param_1,iVar6,0x14,
                                                                        local_484[0] | 4),
                                                    extraout_r0_18 != 0 &&
                                                    (recovered_100066f4(param_1,iVar6,0x14,
                                                                        (int)local_484),
                                                    extraout_r0_19 != 0)))) &&
                                                  ((local_484[0] & 0xc4) == 4)) &&
                                                 (recovered_100062b4(param_1,piVar18[0x18],0,0),
                                                 extraout_r0_20 != 0)) {
                                                piVar18[0x1a] = 1;
                                                recovered_10005b7c(local_8bc,0x400,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x24U)));
                                                if (piVar18[0x20] != 0) {
                                                  recovered_10006360((int)local_8bc,0x400,
                                                                     (char *)(((uintptr_t)pf_module_state + 0x8bU)));
                                                }
                                                if (piVar18[0x21] != 0) {
                                                  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x94U));
                                                  if (local_8bc[0] == '\0') {
                                                    pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xa7U));
                                                  }
                                                  recovered_10006360((int)local_8bc,0x400,pcVar14);
                                                }
                                                if (piVar18[0x22] != 0) {
                                                  pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xb8U));
                                                  if (local_8bc[0] == '\0') {
                                                    pcVar14 = (char *)(((uintptr_t)pf_module_state + 0xcbU));
                                                  }
                                                  recovered_10006360((int)local_8bc,0x400,pcVar14);
                                                }
                                                *(int *)(((uintptr_t)pf_module_state + 0x20f0U)) =
                                                     *(int *)(((uintptr_t)pf_module_state + 0x20f0U)) + 1;
                                                iVar6 = recovered_10005e80((int)param_2);
                                                recovered_10005b7c((undefined1 *)local_84,0x60,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x7dU)));
                                                recovered_10006360((int)local_84,0x60,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x113U)));
                                                recovered_10006c20((int)local_84,0x60,(uint)*param_2
                                                                   ,2);
                                                pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x115U));
                                                recovered_10006360((int)local_84,0x60,pcVar14);
                                                recovered_10006c20((int)local_84,0x60,
                                                                   (uint)param_2[1],2);
                                                pcVar19 = (char *)(((uintptr_t)pf_module_state + 0x117U));
                                                recovered_10006360((int)local_84,0x60,pcVar19);
                                                recovered_10006c80((int)local_84,0x60,
                                                                   (uint)param_2[2]);
                                                recovered_10005b7c((undefined1 *)local_484,0x400,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x119U)));
                                                recovered_10006c20((int)local_484,0x400,
                                                                   (uint)*param_2,2);
                                                recovered_10006360((int)local_484,0x400,pcVar14);
                                                recovered_10006c20((int)local_484,0x400,
                                                                   (uint)param_2[1],2);
                                                recovered_10006360((int)local_484,0x400,pcVar19);
                                                recovered_10006c80((int)local_484,0x400,
                                                                   (uint)param_2[2]);
                                                recovered_10006360((int)local_484,0x400,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x11eU)));
                                                recovered_10006c20((int)local_484,0x400,
                                                                   (uint)*(ushort *)(param_2 + 4),4)
                                                ;
                                                recovered_10006360((int)local_484,0x400,pcVar14);
                                                recovered_10006c20((int)local_484,0x400,
                                                                   (uint)*(ushort *)(param_2 + 6),4)
                                                ;
                                                recovered_10006360((int)local_484,0x400,
                                                                   (char *)(((uintptr_t)pf_module_state + 0x121U)));
                                                if (local_8bc[0] != '\0') {
                                                  recovered_10006360((int)local_484,0x400,
                                                                     (char *)(((uintptr_t)pf_module_state + 0x123U)));
                                                  recovered_10006360((int)local_484,0x400,local_8bc)
                                                  ;
                                                }
                                                if ((code *)param_1[3] != (code *)0x0) {
                                                  (*(code *)param_1[3])(local_84,iVar6,local_484);
                                                }
                                                return 1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_10004a54;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              recovered_100066f4(param_1,*piVar16,0x14,(int)local_84);
              uVar11 = 0;
              if (extraout_r0_05 != 0) {
                uVar11 = local_84[0];
              }
              if (extraout_r0_05 != 0 && uVar11 != 0) {
                recovered_100067f4(param_1,*piVar16,0x14,uVar11 | 0x80);
              }
            }
          }
        }
        goto LAB_10004a54;
      }
      pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x100U));
    }
  }
  recovered_10006360((int)local_8bc,0x400,pcVar14);
LAB_10004a54:
  recovered_100063b4(piVar18);
  return 0;
}

#undef DAT_10005648
#undef DAT_1000564c
#undef DAT_10005650
#undef DAT_10005654
#undef DAT_10005658
#undef DAT_1000565c
#undef DAT_10005660
#undef DAT_10005664
#undef DAT_10005aec
#undef DAT_10005af0
#undef DAT_10005af4
#undef DAT_10005af8
#undef DAT_10005afc
#undef DAT_10005b00
#undef DAT_10005b04
#undef DAT_10005b08
#undef DAT_10005b0c
#undef DAT_10005b10
#undef DAT_10005b14
#undef DAT_10005b18
#undef DAT_10005b1c
#undef DAT_10005b20
#undef DAT_10005b24
#undef DAT_10005b28
#undef local_8d8
#undef local_8c0
#undef local_8bc
#undef local_4bc
#undef local_4b8
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

#undef DAT_10005b74
#define DAT_10005b74 (*(int *)(0x10005b74U))
#undef DAT_10005b78
#define DAT_10005b78 (*(int *)(0x10005b78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b2c
 */

void recovered_10005b2c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  uint uVar3;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x42b4ULL});
  piVar2 = (int *)(((uintptr_t)pf_module_state + 0x3ecU));
  for (uVar3 = 0; uVar3 < *(uint *)(((uintptr_t)pf_module_state+0x20f0U)); uVar3 = uVar3 + 1) {
    recovered_100063b4(piVar2);
    piVar2 = piVar2 + 0x1c0;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x20f0U)) = 0;
  return;
}

#undef DAT_10005b74
#undef DAT_10005b78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b7c
 */

void recovered_10005b7c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10006360((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10005c08
#define DAT_10005c08 (*(int *)(0x10005c08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

bool recovered_10005b90(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 uVar5;

  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  recovered_10006dfc();
  recovered_10006e3c();
  iVar1 = (*(uint32_t *)(uint32_t[]){0x4240ULL});
  pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x20ecU));
  bVar4 = *pcVar3 == '\x01';
  if (bVar4) {
    uVar5 = *(undefined8 *)(((uintptr_t)pf_module_state + 0x2114U));
    puVar2 = (undefined8 *)(((uintptr_t)pf_module_state + 0x211cU));
    *param_1 = *(undefined8 *)(((uintptr_t)pf_module_state + 0x210cU));
    param_1[1] = uVar5;
    uVar5 = *(undefined8 *)(((uintptr_t)pf_module_state+0x2124U));
    param_1[2] = *puVar2;
    param_1[3] = uVar5;
    *(undefined4 *)puVar2 = 0;
    *pcVar3 = '\0';
    *(undefined4 *)(((uintptr_t)pf_module_state+0x2120U)) = 0;
  }
  DataMemoryBarrier(0xb);
  *(undefined4 *)(((uintptr_t)pf_module_state+0x2104U)) = 0;
  return bVar4;
}

#undef DAT_10005c08

#undef DAT_10005c44
#define DAT_10005c44 (*(int *)(0x10005c44U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c0c
 */

uint recovered_10005c0c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  recovered_10006dfc();
  uVar1 = recovered_10007694();
  if (uVar1 == 0) {
    recovered_10006e3c();
    uVar1 = recovered_10007694();
  }
  DataMemoryBarrier(0xb);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x2104U)) = 0;
  return uVar1;
}

#undef DAT_10005c44

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10005c48(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10005e0c((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10005e0c((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10005e0c((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10005e0c((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10005e0c((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10005e7c
#define DAT_10005e7c (*(uint8_t * *)(0x10005e7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e0c
 */

undefined4
recovered_10005e0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_10005e7c

#undef DAT_10006088
#define DAT_10006088 (*(uint *)(0x10006088U))
#undef DAT_1000619c
#define DAT_1000619c (*(uint32_t *)(0x1000619cU))
#undef DAT_100061a0
#define DAT_100061a0 (*(int *)(0x100061a0U))
#undef DAT_100061a4
#define DAT_100061a4 (*(int *)(0x100061a4U))
#undef DAT_100061a8
#define DAT_100061a8 (*(int *)(0x100061a8U))
#undef DAT_100061ac
#define DAT_100061ac (*(int *)(0x100061acU))
#undef DAT_100061b0
#define DAT_100061b0 (*(int *)(0x100061b0U))
#undef DAT_100061b4
#define DAT_100061b4 (*(int *)(0x100061b4U))
#undef DAT_100061b8
#define DAT_100061b8 (*(int *)(0x100061b8U))
#undef DAT_100061bc
#define DAT_100061bc (*(int *)(0x100061bcU))
#undef DAT_100061c0
#define DAT_100061c0 (*(int *)(0x100061c0U))
#undef DAT_100061c4
#define DAT_100061c4 (*(int *)(0x100061c4U))
#undef DAT_100061c8
#define DAT_100061c8 (*(int *)(0x100061c8U))
#undef DAT_100061cc
#define DAT_100061cc (*(int *)(0x100061ccU))
#undef DAT_100061d0
#define DAT_100061d0 (*(int *)(0x100061d0U))
#undef DAT_100061d4
#define DAT_100061d4 (*(int *)(0x100061d4U))
#undef DAT_100061d8
#define DAT_100061d8 (*(int *)(0x100061d8U))
#undef DAT_100061dc
#define DAT_100061dc (*(int *)(0x100061dcU))
#undef DAT_100061e0
#define DAT_100061e0 (*(int *)(0x100061e0U))
#undef DAT_100061e4
#define DAT_100061e4 (*(int *)(0x100061e4U))
#undef DAT_100061e8
#define DAT_100061e8 (*(int *)(0x100061e8U))
#undef DAT_100061ec
#define DAT_100061ec (*(int *)(0x100061ecU))
#undef DAT_100061f0
#define DAT_100061f0 (*(int *)(0x100061f0U))
#undef switchdataD_10006088
#define switchdataD_10006088 (*(uint *)(0x10006088U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e80
 */

int recovered_10005e80(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10006084_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x1e0U);
    }
LAB_10006064:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10006084_caseD_5;
    iVar3 = (int)&DAT_10006088 + (*(uint32_t *)(uint32_t[]){0x1e98ULL});
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x232U);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x21fU);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x245U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100060e8:
        iVar3 = recovered_10006d6c((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10006084_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x126U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x1d7U);
      }
      goto LAB_10006064;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10006024:
        return ((uintptr_t)pf_module_state + 0x205U);
      }
      goto LAB_10006064;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10006024;
      goto LAB_10006064;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x1fcU);
      }
      goto LAB_10006064;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x1ebU);
      }
      goto LAB_10006064;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x1c1U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100060e8;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x1cdU);
        }
      }
      goto LAB_10006064;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x1f4U);
      }
      goto LAB_10006064;
    }
    if (sVar2 != 0x1af4) goto LAB_10006064;
    iVar3 = ((uintptr_t)pf_module_state + 0x131U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10005f24_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x140U);
      break;
    case 0x1043:
switchD_10005f24_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x164U);
      break;
    case 0x1044:
switchD_10005f24_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x187U);
      break;
    case 0x1045:
switchD_10005f24_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x151U);
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
switchD_10005f24_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x1b6U);
      break;
    case 0x1048:
switchD_10005f24_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x177U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x196U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x1a5U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10005f24_caseD_1042;
      case 0x1002:
        goto switchD_10005f24_caseD_1045;
      case 0x1003:
        goto switchD_10005f24_caseD_1043;
      case 0x1004:
        goto switchD_10005f24_caseD_1048;
      case 0x1005:
        goto switchD_10005f24_caseD_1044;
      default:
        goto switchD_10005f24_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10006088
#undef DAT_1000619c
#undef DAT_100061a0
#undef DAT_100061a4
#undef DAT_100061a8
#undef DAT_100061ac
#undef DAT_100061b0
#undef DAT_100061b4
#undef DAT_100061b8
#undef DAT_100061bc
#undef DAT_100061c0
#undef DAT_100061c4
#undef DAT_100061c8
#undef DAT_100061cc
#undef DAT_100061d0
#undef DAT_100061d4
#undef DAT_100061d8
#undef DAT_100061dc
#undef DAT_100061e0
#undef DAT_100061e4
#undef DAT_100061e8
#undef DAT_100061ec
#undef DAT_100061f0
#undef switchdataD_10006088

#undef DAT_10006268
#define DAT_10006268 (*(uint8_t * *)(0x10006268U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f4
 */

undefined4
recovered_100061f4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
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

#undef DAT_10006268

#undef DAT_100062b0
#define DAT_100062b0 (*(int *)(0x100062b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000626c
 */

void recovered_1000626c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100062a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_100062b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b4
 */

void recovered_100062b4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006918(param_1,param_3 + param_2,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062cc
 */

bool recovered_100062cc(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int extraout_r0_00 = 0;

  recovered_1000680c(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return false;
  }
  recovered_1000680c(param_1,param_2,param_3 + 4,param_5);
  return extraout_r0_00 != 0;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006314
 */

bool recovered_10006314(int *param_1,int param_2,int param_3,undefined4 *param_4)

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
    iVar1 = recovered_100068ac(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006360
 */

void recovered_10006360(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100064c4(param_1);
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
 * Address: 0x100063b4
 */

void recovered_100063b4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int *piVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    if (param_1[1] == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = recovered_10006710(piVar2,param_1[1]);
      piVar2 = (int *)*param_1;
      if (piVar2 == (int *)0x0) goto LAB_10006430;
      bVar1 = !bVar1;
    }
    if (param_1[0x1e] != 0) {
      uVar3 = (uint)*(ushort *)((int)param_1 + 0x76);
      if (bVar1) {
        uVar3 = uVar3 & 0xfffffffb;
      }
      recovered_10006454(piVar2,(uint)*(byte *)((int)param_1 + 0x72),
                         (uint)*(byte *)((int)param_1 + 0x73),(uint)*(byte *)(param_1 + 0x1d),uVar3)
      ;
    }
  }
LAB_10006430:
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  return;
}


#undef DAT_100064c0
#define DAT_100064c0 (*(int *)(0x100064c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006454
 */

undefined4
recovered_10006454(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100064c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064c4
 */

int recovered_100064c4(int param_1)

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


/* Recovered PCI BAR checks and physical mapping services.
 * Pooka's Free Software License. */
uint recovered_100064ec(int *api,byte *device,uint index,uint offset,uint length,int *output) {
    uint span=offset+length;
    if(!length || span<offset || index>5)return 0;
    uint low,high=0;
    if(!device || !output)return 0;
    if(index && ((*(uint *)(device+index*4+0x10)&7)==4))return 0;
    low=*(uint *)(device+index*4+0x14);
    if(!low || (low&1))return 0;
    recovered_10005e0c((undefined4 *)api,device[0],device[1],device[2],index*4+0x10,4,(int)&low);
    if((low&7)==4) {
        if(index>4)return 0;
        high=*(uint *)(device+index*4+0x18);
        recovered_10005e0c((undefined4 *)api,device[0],device[1],device[2],index*4+0x14,4,(int)&high);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f4
 */

void recovered_100066f4(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_100068ac(param_1,param_3 + param_2,1,param_4);
  return;
}


#undef DAT_100067f0
#define DAT_100067f0 (*(int *)(0x100067f0U))
#define local_20 (*(int *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006710
 */

bool recovered_10006710(int *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int unaff_r4;
  uint uVar2;
  bool bVar3;

  if (param_1 != (int *)0x0) {
    unaff_r4 = param_2;
  }
  bVar3 = false;
  local_20 = 0xff;
  if ((param_1 != (int *)0x0 && param_2 != 0) &&
     (recovered_100067f4(param_1,unaff_r4,0x14,0), extraout_r0 != 0)) {
    recovered_10006870(param_1);
    iVar1 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    uVar2 = 0;
    while ((uVar2 != 1000 &&
           ((recovered_100066f4(param_1,unaff_r4,0x14,(int)&local_20), extraout_r0_00 == 0 ||
            (local_20 != 0))))) {
      if ((*param_1 == iVar1) &&
         ((0x33 < (uint)param_1[2] && ((code *)param_1[0xc] != (code *)0x0)))) {
        (*(code *)param_1[0xc])(10);
      }
      uVar2 = uVar2 + 1;
    }
    bVar3 = uVar2 < 1000;
  }
  return bVar3;
}

#undef DAT_100067f0
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067f4
 */

void recovered_100067f4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006918(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000680c
 */

void recovered_1000680c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006918(param_1,param_3 + param_2,4,param_4);
  return;
}


#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006824
 */

bool recovered_10006824(int *param_1,int param_2,undefined4 *param_3)

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
    iVar1 = recovered_100068ac(param_1,param_2 + 4,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

#undef DAT_100068a8
#define DAT_100068a8 (*(int *)(0x100068a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

void recovered_10006870(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100068a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_100068a8

#undef DAT_10006914
#define DAT_10006914 (*(uint8_t * *)(0x10006914U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068ac
 */

undefined4 recovered_100068ac(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006904;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006904:
                    /* WARNING: Could not recover jumptable at 0x10006910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006914

#undef DAT_10006978
#define DAT_10006978 (*(int *)(0x10006978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006918
 */

undefined4 recovered_10006918(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10006960;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10006960:
                    /* WARNING: Could not recover jumptable at 0x1000696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006978

#define auStack_b0 (*(undefined1 (*)[176])(pf_stack_frame + 16))
#define local_24 (*(undefined4 *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000697c
 */

/* WARNING: Removing unreachable block (ram,0x10006ab0) */
/* WARNING: Removing unreachable block (ram,0x10006abc) */

undefined4
recovered_1000697c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  int *param_5)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;

  piVar1 = param_1;
  if (param_5 != (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  uVar5 = 0;
  if (param_5 != (int *)0x0) {
    *param_5 = (int)piVar1;
  }
  if (param_4 != (undefined1 *)0x0) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[4];
    }
    if ((*param_1 != 0 && iVar2 != 0) && (8 < (uint)param_1[5])) {
      iVar2 = 0;
      do {
        if (iVar2 == 4) {
          return 0;
        }
        local_24 = 0;
        recovered_10004798(param_4,0x80);
        recovered_100066f4((int *)*param_1,param_1[1],0x15,(int)&local_24);
        if (extraout_r0 == 0) {
          return 0;
        }
        recovered_100067f4((int *)*param_1,param_1[4],0,param_2);
        if (extraout_r0_00 == 0) {
          return 0;
        }
        recovered_100067f4((int *)*param_1,param_1[4],1,param_3);
        if (extraout_r0_01 == 0) {
          return 0;
        }
        recovered_10006870((int *)*param_1);
        recovered_100066f4((int *)*param_1,param_1[4],2,(int)(auStack_b0 + 0x84));
        if (extraout_r0_02 == 0) {
          return 0;
        }
        iVar3 = 0;
        puVar4 = param_4;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          recovered_100066f4((int *)*param_1,param_1[4],iVar3 + 8,(int)(auStack_b0 + 0x80));
          if (extraout_r0_03 == 0) {
            return 0;
          }
          *puVar4 = 0;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        recovered_10006870((int *)*param_1);
        recovered_100066f4((int *)*param_1,param_1[1],0x15,(int)(auStack_b0 + 0x88));
        if (extraout_r0_04 == 0) {
          return 0;
        }
        if ((param_5 != (int *)0x0) && (local_24 == 0)) {
          *param_5 = 0;
          return 1;
        }
        uVar5 = 1;
        iVar2 = iVar2 + 1;
      } while (local_24 != 0);
    }
  }
  return uVar5;
}

#undef auStack_b0
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b7c
 */

undefined8 recovered_10006b7c(undefined4 *param_1,uint param_2,uint *param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r10;

  uVar4 = 0;
  if ((param_1 != (undefined4 *)0x0) && (7 < param_2)) {
    if (param_3 != (uint *)0x0) {
      unaff_r10 = param_4;
    }
    if (param_3 != (uint *)0x0 && param_4 != (int *)0x0) {
      uVar2 = recovered_10006bf8(param_1);
      uVar4 = recovered_10006bf8(param_1 + 1);
      iVar3 = uVar4 - uVar2;
      uVar4 = ((int)uVar4 >> 0x1f) - (((int)uVar2 >> 0x1f) + (uint)(uVar4 < uVar2));
      bVar1 = uVar4 < (iVar3 != 0);
      param_2 = (uVar4 - 1) - ((iVar3 == 0) - 1);
      uVar4 = (uint)bVar1;
      if (bVar1) {
        *param_3 = uVar2;
        *unaff_r10 = iVar3;
      }
    }
  }
  return CONCAT44(param_2,uVar4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf8
 */

undefined4 recovered_10006bf8(undefined4 *param_1)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c20
 */

void recovered_10006c20(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_10006d30(param_1,param_2,bVar3);
  }
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

void recovered_10006c80(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10006d30(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100076d8(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10006d30(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d30
 */

void recovered_10006d30(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100064c4(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10006de0
#define DAT_10006de0 (*(uint32_t *)(0x10006de0U))
#undef DAT_10006de4
#define DAT_10006de4 (*(int *)(0x10006de4U))
#undef DAT_10006de8
#define DAT_10006de8 (*(int *)(0x10006de8U))
#undef DAT_10006dec
#define DAT_10006dec (*(int *)(0x10006decU))
#undef DAT_10006df0
#define DAT_10006df0 (*(int *)(0x10006df0U))
#undef DAT_10006df4
#define DAT_10006df4 (*(int *)(0x10006df4U))
#undef DAT_10006df8
#define DAT_10006df8 (*(int *)(0x10006df8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d6c
 */

int recovered_10006d6c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x25bU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x27aU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x265U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x26aU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x26fU);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x260U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x283U);
  }
  return iVar1;
}

#undef DAT_10006de0
#undef DAT_10006de4
#undef DAT_10006de8
#undef DAT_10006dec
#undef DAT_10006df0
#undef DAT_10006df4
#undef DAT_10006df8

#undef DAT_10006e38
#define DAT_10006e38 (*(int *)(0x10006e38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dfc
 */

void recovered_10006dfc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  while( true ) {
    do {
      iVar2 = pf_arm_ldrex32(((uintptr_t)pf_module_state + 0x2104U));
      iVar1 = pf_arm_strex32(((uintptr_t)pf_module_state + 0x2104U),1);
    } while (iVar1 != 0);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) break;
    do {
    } while (*(int *)(((uintptr_t)pf_module_state + 0x2104U)) != 0);
  }
  return;
}

#undef DAT_10006e38

#undef DAT_100075fc
#define DAT_100075fc (*(uint *)(0x100075fcU))
#undef DAT_10007600
#define DAT_10007600 (*(int *)(0x10007600U))
#undef DAT_10007604
#define DAT_10007604 (*(int *)(0x10007604U))
#undef DAT_10007608
#define DAT_10007608 (*(int *)(0x10007608U))
#undef DAT_1000760c
#define DAT_1000760c (*(int *)(0x1000760cU))
#undef DAT_10007610
#define DAT_10007610 (*(int *)(0x10007610U))
#undef DAT_10007614
#define DAT_10007614 (*(int *)(0x10007614U))
#undef DAT_10007618
#define DAT_10007618 (*(int *)(0x10007618U))
#undef DAT_1000761c
#define DAT_1000761c (*(int *)(0x1000761cU))
#undef DAT_10007620
#define DAT_10007620 (*(int *)(0x10007620U))
#undef DAT_10007624
#define DAT_10007624 (*(int *)(0x10007624U))
#undef DAT_10007628
#define DAT_10007628 (*(int *)(0x10007628U))
#undef DAT_1000762c
#define DAT_1000762c (*(int *)(0x1000762cU))
#undef DAT_10007630
#define DAT_10007630 (*(int *)(0x10007630U))
#undef DAT_10007634
#define DAT_10007634 (*(int *)(0x10007634U))
#undef DAT_10007638
#define DAT_10007638 (*(int *)(0x10007638U))
#undef DAT_1000763c
#define DAT_1000763c (*(int *)(0x1000763cU))
#undef DAT_10007640
#define DAT_10007640 (*(int *)(0x10007640U))
#undef DAT_10007644
#define DAT_10007644 (*(int *)(0x10007644U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e3c
 */

void recovered_10006e3c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r0 = 0;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  bool bVar19;

  uVar9 = 0;
  do {
    if (*(uint *)(((uintptr_t)pf_module_state + 0x20f0U)) <= uVar9) {
      return;
    }
    piVar18 = (int *)(((uintptr_t)pf_module_state + 0x3ecU) + uVar9 * 0x700);
    if (piVar18[0x1a] != 0) {
      piVar12 = piVar18 + 0x100;
      recovered_1000626c((int *)*piVar18,piVar18[0x1f],piVar12,0x106);
      uVar3 = *(ushort *)((int)piVar18 + 0x402);
      uVar17 = (uint)*(ushort *)(piVar18 + 0x1c);
      uVar16 = (uint)*(ushort *)(piVar18 + 0x1b);
      if (uVar16 < (uVar3 - uVar17 & 0xffff)) {
LAB_10006ec0:
        recovered_100063b4(piVar18);
      }
      else {
        iVar15 = 0;
        while ((uVar17 & 0xffff) != (uint)uVar3) {
          uVar16 = recovered_10007728(uVar17 & 0xffff,uVar16);
          uVar7 = recovered_10006bf8(piVar12 + uVar16 * 2 + 1);
          iVar8 = recovered_10006bf8(piVar12 + uVar16 * 2 + 2);
          if ((*(ushort *)(piVar18 + 0x1b) <= uVar7) || (iVar8 != 8)) goto LAB_10006ec0;
          piVar10 = piVar18 + uVar7 * 2 + 0x180;
          recovered_1000626c((int *)*piVar18,piVar18[0x1f],piVar10,8);
          sVar4 = CONCAT11(*(undefined1 *)((int)piVar10 + 1),(char)piVar18[uVar7 * 2 + 0x180]);
          cVar1 = *(char *)((int)piVar10 + 3);
          uVar2 = *(ushort *)((int)piVar10 + 2);
          uVar17 = (uint)uVar2;
          uVar16 = recovered_10006bf8(piVar10 + 1);
          iVar6 = (*(uint32_t *)(uint32_t[]){0x2df4ULL});
          iVar5 = (*(uint32_t *)(uint32_t[]){0x2e30ULL});
          iVar8 = (*(uint32_t *)(uint32_t[]){0x2d54ULL});
          if (sVar4 == 3) {
            if (piVar18[0x22] != 0) {
              uVar13 = piVar18[0x25];
              puVar14 = (undefined1 *)(((uintptr_t)pf_module_state + 0x20ecU));
              uVar11 = piVar18[0x26];
              *(undefined4 *)(((uintptr_t)pf_module_state + 0x210cU)) = 1;
              *(uint *)(((uintptr_t)pf_module_state+0x2124U)) = uVar13;
              *(uint *)(((uintptr_t)pf_module_state+0x2128U)) = uVar11;
              if (uVar17 == 1) {
                uVar16 = recovered_10007648(uVar16,piVar18[0x24],uVar11);
                *(uint *)(((uintptr_t)pf_module_state+0x2118U)) = uVar16;
              }
              else if (uVar17 == 0) {
                uVar16 = recovered_10007648(uVar16,piVar18[0x23],uVar13);
                *(uint *)(((uintptr_t)pf_module_state+0x2114U)) = uVar16;
              }
              *puVar14 = 1;
            }
            goto LAB_1000717c;
          }
          if (sVar4 == 2) {
            if (piVar18[0x21] == 0) goto LAB_1000717c;
            puVar14 = (undefined1 *)(((uintptr_t)pf_module_state + 0x20ecU));
            *(undefined4 *)(((uintptr_t)pf_module_state + 0x210cU)) = 2;
            if (uVar17 == 0) {
              piVar10 = (int *)(((uintptr_t)pf_module_state+0x211cU));
LAB_1000714c:
              *piVar10 = *piVar10 + uVar16;
            }
            else if (uVar17 == 1) {
              piVar10 = (int *)(((uintptr_t)pf_module_state+0x2120U));
              goto LAB_1000714c;
            }
            *puVar14 = 1;
          }
          else if (sVar4 == 1) {
            if (((piVar18[0x21] == 0) && (piVar18[0x22] == 0)) || (2 < (uVar17 - 0x110 & 0xffff))) {
              if (piVar18[0x20] != 0) {
                if (((uVar17 - 0x1d < 0x1c) && (((*(uint32_t *)(uint32_t[]){0xa002001ULL}) & 1 << (uVar17 - 0x1d & 0xff)) != 0))
                   || ((uVar17 - 0x61 < 0x1e && ((1 << (uVar17 - 0x61 & 0xff) & 0x30000009U) != 0)))
                   ) {
                  if (uVar17 == 0x1d) {
                    uVar17 = 4;
                    iVar8 = ((uintptr_t)pf_module_state + 0x20ecU);
                  }
                  else {
                    iVar8 = ((uintptr_t)pf_module_state + 0x20ecU);
                    if (uVar17 == 0x2a) {
                      uVar17 = 1;
                    }
                    else if (uVar17 == 0x7e) {
                      uVar17 = 0x80;
                    }
                    else if (uVar17 == 0x38) {
                      uVar17 = 0x10;
                    }
                    else if (uVar17 == 0x61) {
                      uVar17 = 8;
                    }
                    else if (uVar17 == 100) {
                      uVar17 = 0x20;
                    }
                    else if (uVar17 == 0x7d) {
                      uVar17 = 0x40;
                    }
                    else {
                      if (uVar17 != 0x36) goto LAB_1000717c;
                      uVar17 = 2;
                    }
                  }
                  if (uVar16 == 0) {
                    uVar17 = *(uint *)(iVar8 + 0x14) & ~uVar17;
                  }
                  else {
                    uVar17 = *(uint *)(iVar8 + 0x14) | uVar17;
                  }
                  *(uint *)(iVar8 + 0x14) = uVar17;
                  uVar13 = (uint)((uVar17 & 3) != 0);
                  uVar16 = uVar13 << 0x10 | 0x20000;
                  if ((uVar17 & 0xc) == 0) {
                    uVar16 = uVar13 << 0x10;
                  }
                  if ((uVar17 & 0xf0) != 0) {
                    uVar16 = uVar16 | 0x40000;
                  }
                  *(uint *)(iVar8 + 0x10) = uVar16;
                  uVar16 = uVar16 | 0x80000000;
                }
                else {
                  if (uVar16 == 0) goto LAB_1000717c;
                  uVar16 = -((int)(*(uint *)(((uintptr_t)pf_module_state + 0x20fcU)) << 0xf) >> 0x1f);
                  if (uVar17 - 2 < 10) {
                    iVar8 = ((uintptr_t)pf_module_state + 0x29dU);
                    if (uVar16 == 0) {
                      iVar8 = ((uintptr_t)pf_module_state + 0x292U);
                    }
                    uVar13 = (uint)*(byte *)(iVar8 + (uVar17 - 2));
                    goto switchD_100073f8_caseD_2a;
                  }
                  uVar13 = uVar17 - 0x10;
                  if (uVar13 < 10) {
                    iVar8 = ((uintptr_t)pf_module_state + 0x2a8U);
LAB_1000730c:
                    uVar13 = (uint)*(byte *)(iVar8 + uVar13);
                    if (uVar16 != 0) {
                      uVar13 = uVar13 - 0x20;
                    }
switchD_100073f8_caseD_2a:
                    uVar11 = uVar13 & 0xff;
                    uVar16 = 0x1c;
                    switch((uintptr_t)(uVar17)) {
                    case 0x60:
                      break;
                    default:
                      uVar16 = 0;
                      if (cVar1 == '\0') {
                        uVar16 = uVar17;
                      }
                      goto LAB_10007584;
                    case 0x66:
                      uVar16 = 0x47;
                      break;
                    case 0x67:
                      uVar16 = 0x48;
                      break;
                    case 0x68:
                      uVar16 = 0x49;
                      break;
                    case 0x69:
                      uVar16 = 0x4b;
                      break;
                    case 0x6a:
                      uVar16 = 0x4d;
                      break;
                    case 0x6b:
                      uVar16 = 0x4f;
                      break;
                    case 0x6c:
                      uVar16 = 0x50;
                      break;
                    case 0x6d:
                      uVar16 = 0x51;
                      break;
                    case 0x6e:
                      uVar16 = 0x52;
                      break;
                    case 0x6f:
                      uVar16 = 0x53;
                    }
                  }
                  else {
                    uVar13 = uVar17 - 0x1e;
                    if (uVar13 < 9) {
                      iVar8 = ((uintptr_t)pf_module_state + 0x2b3U);
                      goto LAB_1000730c;
                    }
                    uVar13 = uVar17 - 0x2c;
                    if (uVar13 < 7) {
                      iVar8 = ((uintptr_t)pf_module_state + 0x2bdU);
                      goto LAB_1000730c;
                    }
                    uVar13 = 0;
                    switch((uintptr_t)(uVar17)) {
                    case 0x27:
                      uVar11 = uVar16 ^ 0x3b;
                      break;
                    case 0x28:
                      uVar11 = 0x22;
                      if (uVar16 == 0) {
                        uVar11 = 0x27;
                      }
                      break;
                    case 0x29:
                      uVar11 = 0x7e;
                      if (uVar16 == 0) {
                        uVar11 = 0x60;
                      }
                      break;
                    case 0x2a:
                    case 0x2c:
                    case 0x2d:
                    case 0x2e:
                    case 0x2f:
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                      goto switchD_100073f8_caseD_2a;
                    case 0x2b:
                      uVar11 = 0x7c;
                      if (uVar16 == 0) {
                        uVar11 = 0x5c;
                      }
                      break;
                    case 0x33:
                      uVar11 = 0x3c;
                      if (uVar16 == 0) {
                        uVar11 = 0x2c;
                      }
                      break;
                    case 0x34:
                      uVar11 = 0x3e;
                      if (uVar16 == 0) {
                        uVar11 = 0x2e;
                      }
                      break;
                    case 0x35:
                      uVar11 = 0x3f;
                      if (uVar16 == 0) {
                        uVar11 = 0x2f;
                      }
                      break;
                    case 0x39:
                      uVar11 = 0x20;
                      break;
                    default:
                      switch((uintptr_t)(uVar17)) {
                      case 0xc:
                        uVar11 = 0x5f;
                        if (uVar16 == 0) {
                          uVar11 = 0x2d;
                        }
                        break;
                      case 0xd:
                        uVar11 = 0x2b;
                        if (uVar16 == 0) {
                          uVar11 = 0x3d;
                        }
                        break;
                      case 0xe:
                        uVar11 = 8;
                        break;
                      case 0xf:
                        uVar11 = 9;
                        break;
                      case 0x10:
                      case 0x11:
                      case 0x12:
                      case 0x13:
                      case 0x14:
                      case 0x15:
                      case 0x16:
                      case 0x17:
                      case 0x18:
                      case 0x19:
                        goto switchD_100073f8_caseD_2a;
                      case 0x1a:
                        uVar11 = 0x7b;
                        if (uVar16 == 0) {
                          uVar11 = 0x5b;
                        }
                        break;
                      case 0x1b:
                        uVar11 = 0x7d;
                        if (uVar16 == 0) {
                          uVar11 = 0x5d;
                        }
                        break;
                      case 0x1c:
                        uVar11 = 0xd;
                        break;
                      default:
                        uVar11 = 0x1b;
                        if (uVar17 != 1) goto switchD_100073f8_caseD_2a;
                      }
                    }
                    uVar16 = uVar17;
LAB_10007584:
                    if (uVar16 == 0 && uVar11 == 0) goto LAB_1000717c;
                  }
                  uVar16 = uVar11 | uVar16 << 8 | *(uint *)(((uintptr_t)pf_module_state + 0x20fcU));
                  iVar8 = ((uintptr_t)pf_module_state + 0x20ecU);
                }
                uVar17 = *(int *)(iVar8 + 0xc) + 1U & 0x3f;
                if (uVar17 != *(uint *)(iVar8 + 8)) {
                  *(uint *)(((uintptr_t)pf_module_state + 0x1fecU) + *(int *)(iVar8 + 0xc) * 4) = uVar16;
                  *(uint *)(((uintptr_t)pf_module_state + 0x20f8U)) = uVar17;
                }
              }
            }
            else {
              uVar17 = ((const uint[]){1U,2U,4U})[(uint)uVar2-0x110U];
              if (uVar16 == 0) {
                uVar17 = *(uint *)(((uintptr_t)pf_module_state + 0x2110U)) & ~uVar17;
              }
              else {
                uVar17 = *(uint *)(((uintptr_t)pf_module_state + 0x2110U)) | uVar17;
              }
              *(undefined1 *)(((uintptr_t)pf_module_state + 0x20ecU)) = 1;
              *(uint *)(((uintptr_t)pf_module_state+0x2110U)) = uVar17;
            }
          }
          else {
            if (sVar4 == 0) {
              uVar16 = 0xffff;
            }
            if (sVar4 == 0 && (uVar17 & uVar16) == 0) {
              iVar8 = piVar18[0x21];
              bVar19 = iVar8 == 0;
              if (bVar19) {
                iVar8 = piVar18[0x22];
              }
              if (!bVar19 || iVar8 != 0) {
                *(undefined1 *)(((uintptr_t)pf_module_state + 0x20ecU)) = 1;
              }
            }
          }
LAB_1000717c:
          uVar2 = *(ushort *)((int)piVar18 + 0x6e);
          uVar16 = (uint)*(ushort *)(piVar18 + 0x1b);
          *(ushort *)((int)piVar18 + 0x6e) = uVar2 + 1;
          uVar17 = *(ushort *)(piVar18 + 0x1c) + 1;
          *(short *)(piVar18 + 0x1c) = (short)uVar17;
          uVar13 = recovered_10007728((uint)uVar2,uVar16);
          iVar15 = iVar15 + -1;
          *(short *)((int)piVar18 + uVar13 * 2 + 0x304) = (short)uVar7;
        }
        if (iVar15 != 0) {
          *(undefined2 *)((int)piVar18 + 0x302) = *(undefined2 *)((int)piVar18 + 0x6e);
          recovered_1000626c((int *)*piVar18,piVar18[0x1f],piVar18 + 0xc0,0x46);
          recovered_10006870((int *)*piVar18);
          recovered_100062b4((int *)*piVar18,piVar18[0x18],0,0);
          if (extraout_r0 == 0) goto LAB_10006ec0;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

#undef DAT_100075fc
#undef DAT_10007600
#undef DAT_10007604
#undef DAT_10007608
#undef DAT_1000760c
#undef DAT_10007610
#undef DAT_10007614
#undef DAT_10007618
#undef DAT_1000761c
#undef DAT_10007620
#undef DAT_10007624
#undef DAT_10007628
#undef DAT_1000762c
#undef DAT_10007630
#undef DAT_10007634
#undef DAT_10007638
#undef DAT_1000763c
#undef DAT_10007640
#undef DAT_10007644

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007648
 */

uint recovered_10007648(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = param_1 - param_2;
  iVar2 = ((int)param_1 >> 0x1f) - (((int)param_2 >> 0x1f) + (uint)(param_1 < param_2));
  if (iVar2 < 0) {
    return 0;
  }
  if ((uint)(uVar1 <= param_3) <= (uint)-iVar2) {
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    return param_3;
  }
  if (0x7ffffffe < uVar1) {
    uVar1 = 0x7fffffff;
  }
  if (iVar2 != 0) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}


#undef DAT_100076cc
#define DAT_100076cc (*(int *)(0x100076ccU))
#undef DAT_100076d0
#define DAT_100076d0 (*(int *)(0x100076d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007694
 */

undefined4 recovered_10007694(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = *(int *)(((uintptr_t)pf_module_state + 0x20f4U));
  if (iVar1 == *(int *)(((uintptr_t)pf_module_state + 0x20f8U))) {
    return 0;
  }
  *(uint *)(((uintptr_t)pf_module_state + 0x20f4U)) = iVar1 + 1U & 0x3f;
  return *(undefined4 *)(((uintptr_t)pf_module_state + 0x1fecU) + iVar1 * 4);
}

#undef DAT_100076cc
#undef DAT_100076d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076d8
 */

uint recovered_100076d8(uint param_1,uint param_2)

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
 * Address: 0x10007728
 */

uint recovered_10007728(uint param_1,uint param_2)

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
 * Address: 0x10007760
 */

uint recovered_10007760(uint param_1,uint param_2)

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
 * Address: 0x100077d0
 */

uint recovered_100077d0(uint param_1,uint param_2)

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
 * Address: 0x10007838
 */

undefined8 recovered_10007838(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000791c
 */

undefined8 recovered_1000791c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000799c
 */

undefined8 recovered_1000799c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007abc
 */

undefined8 recovered_10007abc(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10007bf8
#define DAT_10007bf8 (*(double *)(0x10007bf8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b78
 */

undefined8 recovered_10007b78(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10007bf8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c00
 */

undefined8 recovered_10007c00(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007b78(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007b78(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c4c
 */

undefined8 recovered_10007c4c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007b78(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x2ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c5c
 */

void recovered_10007c5c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x2d4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c6c
 */

double recovered_10007c6c(uint param_1,uint param_2)

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
 * Address: 0x10007cb4
 */

double recovered_10007cb4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10007c6c(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10007c6c(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cdc
 */

float recovered_10007cdc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007c6c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cf8
 */

float recovered_10007cf8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007cb4(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
