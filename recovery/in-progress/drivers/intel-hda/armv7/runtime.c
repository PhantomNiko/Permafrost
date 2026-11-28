/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001624
#define DAT_10001624 (*(uint32_t *)(0x10001624U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001618
 */

void * recovered_10001618(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4258U));
}

#undef DAT_10001624

#undef DAT_100018d0
#define DAT_100018d0 (*(uint *)(0x100018d0U))
#undef DAT_100018d4
#define DAT_100018d4 (*(uint64_t *)(0x100018d4U))
#undef DAT_100018dc
#define DAT_100018dc (*(uint64_t *)(0x100018dcU))
#undef DAT_100018e4
#define DAT_100018e4 (*(int *)(0x100018e4U))
#undef DAT_100018e8
#define DAT_100018e8 (*(int *)(0x100018e8U))
#undef DAT_100018ec
#define DAT_100018ec (*(int *)(0x100018ecU))
#undef DAT_100018f0
#define DAT_100018f0 (*(int *)(0x100018f0U))
#undef DAT_100018f4
#define DAT_100018f4 (*(int *)(0x100018f4U))
#undef DAT_100018f8
#define DAT_100018f8 (*(int *)(0x100018f8U))
#undef DAT_100018fc
#define DAT_100018fc (*(int *)(0x100018fcU))
#undef DAT_10001900
#define DAT_10001900 (*(int *)(0x10001900U))
#undef DAT_10001904
#define DAT_10001904 (*(int *)(0x10001904U))
#undef DAT_10001908
#define DAT_10001908 (*(int *)(0x10001908U))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 1140))
#define abStack_50 (*(byte (*)[80])(pf_stack_frame + 1184))
#define local_dc (*(undefined8 *)(pf_stack_frame + 1044))
#define local_cc (*(undefined4 *)(pf_stack_frame + 1060))
#define local_c8 (*(undefined4 *)(pf_stack_frame + 1064))
#define local_80 (*(int *)(pf_stack_frame + 1136))
#define local_44 (*(char *)(pf_stack_frame + 1196))
#define auStack_4dc (*(undefined1 (*)[1244])(pf_stack_frame + 20))
#define uStack_d4 (*(undefined8 *)(pf_stack_frame + 1052))
#define auStack_c4 (*(undefined1 (*)[196])(pf_stack_frame + 1068))
#define iStack_84 (*(int *)(pf_stack_frame + 1132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001628
 */

uint recovered_10001628(void *api)

{
  unsigned char pf_stack_frame[1296] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1 = 0;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;

  uVar3 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if ((((api != (void *)0x0) && (*(uint *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    recovered_1000190c((undefined1 *)(((uintptr_t)pf_module_state + 0x354U)),0x2200);
    recovered_1000190c((undefined1 *)&iStack_84,8);
    recovered_1000190c((undefined1 *)&local_dc,0x58);
    recovered_10001930(auStack_4dc,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    if ((*(code **)((int)api + 0xc) != (code *)0x0) &&
       (iVar2 = (**(code **)((int)api + 0xc))
                          (((uintptr_t)pf_module_state + 0x80U),((uintptr_t)pf_module_state + 0x3fU),auStack_4dc),
       iVar2 != 0)) {
      if ((*(uint *)api == uVar3) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
            iVar2 = recovered_10002828(api,uVar3 & 0xff,uVar6 & 0xff,0,abStack_50);
            if ((iVar2 != 0) && (recovered_10001944(api,abStack_50,&iStack_84), local_44 < '\0')) {
              for (uVar4 = 1; uVar4 != 8; uVar4 = uVar4 + 1) {
                iVar2 = recovered_10002828(api,uVar3 & 0xff,uVar6 & 0xff,uVar4 & 0xff,abStack_7c);
                if (iVar2 != 0) {
                  recovered_10001944(api,abStack_7c,&iStack_84);
                }
              }
            }
          }
        }
      }
      if (local_80 != 0) {
        local_dc = (*(uint64_t *)(uint64_t[]){0x700000058ULL});
        uStack_d4 = (*(uint64_t *)(uint64_t[]){0x20000bb80ULL});
        local_cc = 0x10;
        local_c8 = 0x2000;
        recovered_10001930(auStack_c4,0x40,(char *)(((uintptr_t)pf_module_state + 0x4fU)));
        puVar5 = (undefined1 *)(((uintptr_t)pf_module_state + 0x554U));
        recovered_1000190c(puVar5,0x300);
        bVar1 = recovered_100022c4((int)puVar5,0x300,48000,2,0x10);
        uVar3 = 0;
        uVar6 = extraout_r1;
        if ((((bVar1) && (uVar3 = *(uint *)api, uVar6 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL}), uVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
            (uVar3 = *(uint *)((int)api + 8), 0xe3 < uVar3)) &&
           (*(code **)((int)api + 0xe0) != (code *)0x0)) {
          uVar7 = (**(code **)((int)api + 0xe0))
                            (&local_dc,((uintptr_t)&recovered_100022c4),((uintptr_t)&recovered_100026e0));
          uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
          uVar3 = 0;
          if ((int)uVar7 != 0) {
            if (*(code **)((int)api + 0xc) == (code *)0x0) {
              return 1;
            }
            (**(code **)((int)api + 0xc))
                      (((uintptr_t)pf_module_state + 0x80U),((uintptr_t)pf_module_state + 0x3fU),auStack_4dc);
            return 1;
          }
        }
        recovered_1000270c(uVar3,uVar6);
      }
    }
  }
  return 0;
}

#undef DAT_100018d0
#undef DAT_100018d4
#undef DAT_100018dc
#undef DAT_100018e4
#undef DAT_100018e8
#undef DAT_100018ec
#undef DAT_100018f0
#undef DAT_100018f4
#undef DAT_100018f8
#undef DAT_100018fc
#undef DAT_10001900
#undef DAT_10001904
#undef DAT_10001908
#undef abStack_7c
#undef abStack_50
#undef local_dc
#undef local_cc
#undef local_c8
#undef local_80
#undef local_44
#undef auStack_4dc
#undef uStack_d4
#undef auStack_c4
#undef iStack_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000190c
 */

void recovered_1000190c(undefined1 *param_1,int param_2)

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
 * Address: 0x10001930
 */

void recovered_10001930(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100027ac((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10002280
#define DAT_10002280 (*(int *)(0x10002280U))
#undef DAT_10002284
#define DAT_10002284 (*(int *)(0x10002284U))
#undef DAT_10002288
#define DAT_10002288 (*(int *)(0x10002288U))
#undef DAT_1000228c
#define DAT_1000228c (*(int *)(0x1000228cU))
#undef DAT_10002290
#define DAT_10002290 (*(int *)(0x10002290U))
#undef DAT_10002294
#define DAT_10002294 (*(int *)(0x10002294U))
#undef DAT_10002298
#define DAT_10002298 (*(int *)(0x10002298U))
#undef DAT_1000229c
#define DAT_1000229c (*(int *)(0x1000229cU))
#undef DAT_100022a0
#define DAT_100022a0 (*(int *)(0x100022a0U))
#undef DAT_100022a4
#define DAT_100022a4 (*(int *)(0x100022a4U))
#undef DAT_100022a8
#define DAT_100022a8 (*(int *)(0x100022a8U))
#undef DAT_100022ac
#define DAT_100022ac (*(int *)(0x100022acU))
#undef DAT_100022b0
#define DAT_100022b0 (*(int *)(0x100022b0U))
#undef DAT_100022b4
#define DAT_100022b4 (*(int *)(0x100022b4U))
#undef DAT_100022b8
#define DAT_100022b8 (*(int *)(0x100022b8U))
#undef DAT_100022bc
#define DAT_100022bc (*(int *)(0x100022bcU))
#undef DAT_100022c0
#define DAT_100022c0 (*(int *)(0x100022c0U))
#define local_89c (*(char (*)[2204])(pf_stack_frame + 20))
#define local_49c (*(int *)(pf_stack_frame + 1044))
#define local_498 (*(uint (*)[294])(pf_stack_frame + 1048))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001944
 */

void recovered_10001944(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint extraout_r0 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint extraout_r0_00 = 0;
  uint extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
  int extraout_r0_06 = 0;
  uint uVar7;
  int extraout_r0_07 = 0;
  int extraout_r0_08 = 0;
  int extraout_r0_09 = 0;
  int extraout_r0_10 = 0;
  int extraout_r0_11 = 0;
  int extraout_r0_12 = 0;
  int extraout_r0_13 = 0;
  uint stream;
  int iVar8;
  uint extraout_r0_14 = 0;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint uVar9;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint uVar10;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  uint extraout_r1_09 = 0;
  uint extraout_r1_10 = 0;
  uint uVar11;
  uint extraout_r1_11 = 0;
  uint extraout_r1_12 = 0;
  uint extraout_r1_13 = 0;
  uint extraout_r1_14 = 0;
  uint extraout_r1_15 = 0;
  uint extraout_r1_16 = 0;
  uint extraout_r1_17 = 0;
  uint extraout_r1_18 = 0;
  uint extraout_r1_19 = 0;
  uint extraout_r1_20 = 0;
  uint extraout_r1_21 = 0;
  uint extraout_r1_22 = 0;
  uint extraout_r1_23 = 0;
  uint extraout_r1_24 = 0;
  uint extraout_r1_25 = 0;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  bool bVar18;
  undefined8 uVar19;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != -0x7f7a) {
    return;
  }
  bVar1 = param_2[8];
  bVar18 = bVar1 == 4;
  if (bVar18) {
    bVar1 = param_2[9];
  }
  if (!bVar18 || bVar1 != 3) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  if (*(int *)(((uintptr_t)pf_module_state + 0x37cU)) != 0) {
    return;
  }
  recovered_10001930(local_89c,0x400,(char *)(((uintptr_t)pf_module_state + 0x80U)));
  iVar8 = (*(uint32_t *)(uint32_t[]){0x2700ULL});
  local_498[1] = 0;
  local_498[0] = 0;
  local_49c = 0;
  uVar4 = extraout_r0;
  uVar9 = extraout_r1;
  if (param_1 == (int *)0x0) goto LAB_10001ddc;
  puVar14 = (undefined4 *)(((uintptr_t)pf_module_state + 0x354U));
  recovered_1000190c((undefined1 *)puVar14,0x2200);
  uVar4 = *(uint *)(param_2 + 0x14);
  local_84[0] = 0;
  uVar9 = extraout_r1_00;
  if ((uVar4 == 0) || (uVar9 = uVar4 & 1, uVar9 != 0)) goto LAB_10001ddc;
  local_498[4] = uVar4;
  recovered_100029ec(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x10,4,
                     (int)(local_498 + 4));
  uVar9 = 0;
  if ((local_498[4] & 7) == 4) {
    local_84[0] = *(uint *)(param_2 + 0x18);
    recovered_100029ec(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x14,4,(int)local_84
                      );
    uVar9 = local_84[0];
  }
  iVar6 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  uVar4 = 0xfffffffc;
  if ((local_498[4] & 1) == 0) {
    uVar4 = 0xfffffff0;
  }
  uVar4 = uVar4 & local_498[4];
  if (uVar4 == 0 && uVar9 == 0) goto LAB_10001ddc;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x358U)) = 0;
  local_498[5] = 0;
  if (*param_1 != iVar6) goto LAB_10001ddc;
  if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
    if ((uVar9 != 0) || (((uint)param_1[2] < 0x68 || ((code *)param_1[0x19] == (code *)0x0))))
    goto LAB_10001ddc;
    uVar19 = (*(code *)param_1[0x19])(uVar4,0,0x1000,local_498 + 5);
    uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
    uVar4 = 0;
    if ((int)uVar19 == 0) goto LAB_10001ddc;
    *(uint *)(((uintptr_t)pf_module_state+0x358U)) = local_498[5];
  }
  else {
    uVar19 = (*(code *)param_1[0x2e])(uVar4,uVar9,0x1000,((uintptr_t)pf_module_state+0x358U));
    uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
    if ((int)uVar19 == 0) {
      uVar4 = 0;
      goto LAB_10001ddc;
    }
  }
  iVar5 = recovered_100029ec(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                             (int)(local_498 + 1));
  uVar4 = 0;
  uVar9 = extraout_r1_01;
  if (iVar5 == 0) goto LAB_10001ddc;
  *(short *)(((uintptr_t)pf_module_state+0x378U)) = (short)local_498[1];
  *puVar14 = param_1;
  *(undefined1 *)(((uintptr_t)pf_module_state+0x377U)) = 1;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)(((uintptr_t)pf_module_state+0x374U)) = bVar1;
  *(byte *)(((uintptr_t)pf_module_state+0x375U)) = bVar2;
  *(byte *)(((uintptr_t)pf_module_state+0x376U)) = bVar3;
  *(uint *)(((uintptr_t)pf_module_state+0x35cU)) =
       (uint)bVar1 << 0x10 | (uint)bVar2 << 0xb | (uint)bVar3 << 8 | 0x80000000;
  local_498[5] = 0;
  pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x90U));
  if (((*param_1 == iVar6) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    iVar6 = recovered_100029ec(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,(int)(local_498 + 5))
    ;
    if (iVar6 == 0) {
      pcVar15 = (char *)(((uintptr_t)pf_module_state + 0xa2U));
      goto LAB_10001dc8;
    }
    iVar6 = 5;
    uVar4 = 0;
    while (iVar6 != 0xb) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      uVar9 = uVar4;
      if (*(uint *)(param_2 + iVar5) != 0) {
        uVar9 = uVar4 | 2;
      }
      if ((*(uint *)(param_2 + iVar5) & 1) != 0) {
        uVar9 = uVar4 | 1;
      }
      uVar4 = uVar9;
    }
    iVar6 = recovered_10002800(((uintptr_t)pf_module_state + 0x70U));
    if (iVar6 != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar4 = uVar4 | 2;
    }
    local_84[0] = local_498[5] | uVar4;
    iVar6 = recovered_10002ff0(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],local_84[0])
    ;
    if (iVar6 == 0) {
      pcVar15 = (char *)(((uintptr_t)pf_module_state + 0xb4U));
      goto LAB_10001dc8;
    }
    recovered_100029ec(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,(int)local_84);
    uVar9 = local_84[0] & uVar4;
    uVar10 = extraout_r1_02;
    if (uVar9 == uVar4) {
      bVar18 = recovered_10002dc8(param_1,*(int *)(((uintptr_t)pf_module_state+0x358U)),0,
                                  (undefined4 *)(((uintptr_t)pf_module_state+0x360U)));
      uVar9 = 0;
      if (bVar18) {
        uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x360U));
      }
      uVar10 = extraout_r1_03;
      if (bVar18 && (uVar9 & 0xf000) != 0) {
        *(uint *)(((uintptr_t)pf_module_state+0x364U)) = (uVar9 >> 3 & 0x1e0) + 0x80;
        recovered_10002e14(param_1,*(uint *)(((uintptr_t)pf_module_state+0x358U)),8,0);
        bVar18 = recovered_10002e2c(0);
        uVar9 = 0;
        uVar10 = extraout_r1_04;
        if (bVar18) {
          uVar4 = recovered_10002e14(param_1,*(uint *)(((uintptr_t)pf_module_state+0x358U)),8,1);
          uVar9 = 0;
          uVar10 = extraout_r1_05;
          if (uVar4 != 0) {
            bVar18 = recovered_10002e2c(1);
            uVar9 = 0;
            uVar10 = extraout_r1_06;
            if (bVar18) {
              for (iVar6 = 10000; iVar6 != 0; iVar6 = iVar6 + -1) {
                bVar18 = recovered_10002dc8(param_1,*(int *)(((uintptr_t)pf_module_state+0x358U)),0xe,local_498);
                if ((bVar18) && (uVar10 = 0x7fff, (local_498[0] & 0x7fff) != 0)) goto LAB_10001dfc;
                recovered_10002ecc(param_1,10);
              }
              uVar9 = 0x7fff;
              uVar10 = local_498[0] & 0xffff;
              if ((local_498[0] & 0x7fff) != 0) {
LAB_10001dfc:
                uVar9 = 0;
                while (*(uint *)(((uintptr_t)pf_module_state+0x368U)) = uVar9, uVar9 < 0xf) {
                  uVar10 = local_498[0];
                  if ((((local_498[0] >> (uVar9 & 0xff) & 1) != 0) &&
                      (recovered_10002f0c(0,0,&local_49c), uVar10 = extraout_r1_09,
                      extraout_r0_02 != 0)) && (local_49c - 1U < 0xfffffffd || local_49c == -2)) {
                    local_498[5] = 0;
                    recovered_10002f0c(0,4,local_498 + 5);
                    uVar10 = extraout_r1_10;
                    if (extraout_r0_03 != 0) {
                      uVar11 = local_498[5] & 0xff;
                      uVar4 = local_498[5] & 0xffffff;
                      uVar10 = uVar11;
                      for (uVar12 = 0; uVar12 != uVar11; uVar12 = uVar12 + 1) {
                        local_84[0] = 0;
                        local_498[4] = 0;
                        uVar9 = uVar12 + (uVar4 >> 0x10);
                        recovered_10002f0c(uVar9,5,local_84);
                        uVar10 = extraout_r1_11;
                        if (((extraout_r0_04 != 0) && ((char)local_84[0] == '\x01')) &&
                           (recovered_10002f0c(uVar9,4,local_498 + 4), uVar10 = extraout_r1_12,
                           extraout_r0_05 != 0)) {
                          recovered_10002f1c(uVar9,0x705,0);
                          uVar9 = (local_498[4] & 0xffffff) >> 0x10;
                          uVar10 = extraout_r1_13;
                          for (uVar16 = local_498[4] & 0xff; uVar16 != 0; uVar16 = uVar16 - 1) {
                            local_498[3] = 0;
                            recovered_10002f0c(uVar9,9,local_498 + 3);
                            uVar10 = extraout_r1_14;
                            if (extraout_r0_06 != 0) {
                              uVar7 = (local_498[3] & 0xffffff) >> 0x14;
                              uVar10 = uVar7 | *(uint *)(((uintptr_t)pf_module_state+0x36cU));
                              if (uVar10 == 0) {
                                *(uint *)(((uintptr_t)pf_module_state+0x36cU)) = uVar9;
                              }
                              else {
                                bVar18 = uVar7 == 4;
                                if (bVar18) {
                                  uVar7 = *(uint *)(((uintptr_t)pf_module_state+0x370U));
                                }
                                if (bVar18 && uVar7 == 0) {
                                  local_498[2] = 0;
                                  recovered_10002f0c(uVar9,0xc,local_498 + 2);
                                  uVar7 = 0;
                                  if (extraout_r0_07 != 0) {
                                    uVar7 = local_498[2] & 0xff;
                                  }
                                  uVar10 = extraout_r1_15;
                                  if (extraout_r0_07 != 0 && (uVar7 & 0x10) != 0) {
                                    *(uint *)(((uintptr_t)pf_module_state+0x370U)) = uVar9;
                                  }
                                }
                              }
                            }
                            uVar9 = uVar9 + 1;
                          }
                          uVar9 = *(uint *)(((uintptr_t)pf_module_state+0x36cU));
                          if (uVar9 != 0) {
                            uVar10 = *(uint *)(((uintptr_t)pf_module_state+0x370U));
                          }
                          if (uVar9 != 0 && uVar10 != 0) {
                            uVar10 = *(uint *)(((uintptr_t)pf_module_state+0x368U));
                            if (0xe < uVar10) goto LAB_10001dd8;
                            recovered_10002f1c(uVar9,0x705,0);
                            uVar9 = 0;
                            uVar10 = extraout_r1_16;
                            if (extraout_r0_08 == 0) goto LAB_10001dd8;
                            recovered_10002f38(*(uint *)(((uintptr_t)pf_module_state+0x36cU)),0x200,0x11);
                            uVar9 = 0;
                            uVar10 = extraout_r1_17;
                            if (extraout_r0_09 == 0) goto LAB_10001dd8;
                            recovered_10002f1c(*(uint *)(((uintptr_t)pf_module_state+0x36cU)),0x706,0x10);
                            uVar9 = 0;
                            uVar10 = extraout_r1_18;
                            if (extraout_r0_10 == 0) goto LAB_10001dd8;
                            recovered_10002f1c(*(uint *)(((uintptr_t)pf_module_state+0x370U)),0x705,0);
                            uVar9 = 0;
                            uVar10 = extraout_r1_19;
                            if (extraout_r0_11 == 0) goto LAB_10001dd8;
                            recovered_10002f1c(*(uint *)(((uintptr_t)pf_module_state+0x370U)),0x707,0x40);
                            uVar9 = 0;
                            uVar10 = extraout_r1_20;
                            if (extraout_r0_12 == 0) goto LAB_10001dd8;
                            recovered_10002f1c(*(uint *)(((uintptr_t)pf_module_state+0x370U)),0x70c,2);
                            uVar9 = 0;
                            uVar10 = extraout_r1_21;
                            if (extraout_r0_13 == 0) goto LAB_10001dd8;
                            recovered_10002f38(*(uint *)(((uintptr_t)pf_module_state+0x36cU)),0x300,0xb04a);
                            uVar9 = 0;
                            uVar10 = extraout_r1_22;
                            if (stream == 0) goto LAB_10001dd8;
                            uVar4 = recovered_10002f54(stream);
                            uVar9 = 0;
                            uVar10 = extraout_r1_23;
                            if (uVar4 == 0) goto LAB_10001dd8;
                            *(undefined4 *)(((uintptr_t)pf_module_state+0x37cU)) = 1;
                            recovered_10001930(local_89c,0x400,(char *)(((uintptr_t)pf_module_state + 0x80U)));
                            iVar8 = recovered_10002a60((int)param_2);
                            recovered_10001930((undefined1 *)local_84,0x60,
                                               (char *)(((uintptr_t)pf_module_state + 0x81U)));
                            recovered_100027ac((int)local_84,0x60,
                                               (char *)(((uintptr_t)pf_module_state + 0xc7U)));
                            recovered_1000347c((int)local_84,0x60,(uint)*param_2,2);
                            pcVar17 = (char *)(((uintptr_t)pf_module_state + 0xc9U));
                            recovered_100027ac((int)local_84,0x60,pcVar17);
                            recovered_1000347c((int)local_84,0x60,(uint)param_2[1],2);
                            pcVar15 = (char *)(((uintptr_t)pf_module_state + 0xcbU));
                            recovered_100027ac((int)local_84,0x60,pcVar15);
                            recovered_100034dc((int)local_84,0x60,(uint)param_2[2]);
                            puVar13 = local_498 + 5;
                            recovered_10001930((undefined1 *)puVar13,0x400,
                                               (char *)(((uintptr_t)pf_module_state + 0xcdU)));
                            recovered_1000347c((int)puVar13,0x400,(uint)*param_2,2);
                            recovered_100027ac((int)puVar13,0x400,pcVar17);
                            recovered_1000347c((int)puVar13,0x400,(uint)param_2[1],2);
                            recovered_100027ac((int)puVar13,0x400,pcVar15);
                            recovered_100034dc((int)puVar13,0x400,(uint)param_2[2]);
                            recovered_100027ac((int)puVar13,0x400,
                                               (char *)(((uintptr_t)pf_module_state + 0xd2U)));
                            recovered_1000347c((int)puVar13,0x400,(uint)*(ushort *)(param_2 + 4),4);
                            recovered_100027ac((int)puVar13,0x400,pcVar17);
                            recovered_1000347c((int)puVar13,0x400,(uint)*(ushort *)(param_2 + 6),4);
                            recovered_100027ac((int)puVar13,0x400,
                                               (char *)(((uintptr_t)pf_module_state + 0xd5U)));
                            uVar4 = 0;
                            uVar9 = extraout_r1_24;
                            if (local_89c[0] != '\0') {
                              recovered_100027ac((int)(local_498 + 5),0x400,
                                                 (char *)(((uintptr_t)pf_module_state + 0xd7U)));
                              recovered_100027ac((int)(local_498 + 5),0x400,local_89c);
                              uVar4 = extraout_r0_14;
                              uVar9 = extraout_r1_25;
                            }
                            if ((code *)param_1[3] != (code *)0x0) {
                              uVar19 = (*(code *)param_1[3])(local_84,iVar8,local_498 + 5);
                              uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
                              uVar4 = 0;
                              if ((int)uVar19 != 0) {
                                if (param_3 == (int *)0x0) {
                                  return;
                                }
                                param_3[1] = param_3[1] + 1;
                                return;
                              }
                            }
                            goto LAB_10001ddc;
                          }
                        }
                      }
                    }
                  }
                  *(undefined4 *)(((uintptr_t)pf_module_state+0x370U)) = 0;
                  *(undefined4 *)(((uintptr_t)pf_module_state+0x36cU)) = 0;
                  uVar9 = *(int *)(((uintptr_t)pf_module_state+0x368U)) + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_10001dc8:
    recovered_100027ac((int)local_89c,0x400,pcVar15);
    uVar9 = extraout_r0_00;
    uVar10 = extraout_r1_07;
  }
LAB_10001dd8:
  recovered_1000270c(uVar9,uVar10);
  uVar4 = extraout_r0_01;
  uVar9 = extraout_r1_08;
LAB_10001ddc:
  recovered_1000270c(uVar4,uVar9);
  return;
}

#undef DAT_10002280
#undef DAT_10002284
#undef DAT_10002288
#undef DAT_1000228c
#undef DAT_10002290
#undef DAT_10002294
#undef DAT_10002298
#undef DAT_1000229c
#undef DAT_100022a0
#undef DAT_100022a4
#undef DAT_100022a8
#undef DAT_100022ac
#undef DAT_100022b0
#undef DAT_100022b4
#undef DAT_100022b8
#undef DAT_100022bc
#undef DAT_100022c0
#undef local_89c
#undef local_49c
#undef local_498
#undef local_84

#undef DAT_1000269c
#define DAT_1000269c (*(int *)(0x1000269cU))
#undef DAT_100026a0
#define DAT_100026a0 (*(int *)(0x100026a0U))
#undef DAT_100026a4
#define DAT_100026a4 (*(int *)(0x100026a4U))
#undef DAT_100026a8
#define DAT_100026a8 (*(int *)(0x100026a8U))
#undef DAT_100026ac
#define DAT_100026ac (*(int *)(0x100026acU))
#undef DAT_100026b0
#define DAT_100026b0 (*(int *)(0x100026b0U))
#undef DAT_100026b4
#define DAT_100026b4 (*(int *)(0x100026b4U))
#undef DAT_100026b8
#define DAT_100026b8 (*(int *)(0x100026b8U))
#undef DAT_100026bc
#define DAT_100026bc (*(int *)(0x100026bcU))
#undef DAT_100026c0
#define DAT_100026c0 (*(int *)(0x100026c0U))
#undef DAT_100026c4
#define DAT_100026c4 (*(int *)(0x100026c4U))
#undef DAT_100026c8
#define DAT_100026c8 (*(int *)(0x100026c8U))
#undef DAT_100026cc
#define DAT_100026cc (*(int *)(0x100026ccU))
#undef DAT_100026d0
#define DAT_100026d0 (*(int *)(0x100026d0U))
#undef DAT_100026d4
#define DAT_100026d4 (*(int *)(0x100026d4U))
#undef DAT_100026d8
#define DAT_100026d8 (*(int *)(0x100026d8U))
#undef DAT_100026dc
#define DAT_100026dc (*(int *)(0x100026dcU))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c4
 */

bool recovered_100022c4(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint extraout_r0 = 0;
  bool bVar3;
  int unaff_r6;
  uint uVar4;
  undefined1 *puVar5;
  int unaff_r11;
  bool bVar6;
  uint bdl_high=0,data_low=0,data_high=0;

  bVar6 = (param_2 & 3) == 0;
  bVar3 = false;
  iVar1 = param_1;
  if (bVar6) {
    iVar1 = param_5;
    unaff_r6 = param_1;
  }
  local_24 = 0;
  local_34 = 0;
  local_38 = 0;
  if (bVar6 && iVar1 == 0x10) {
    if (param_4 == 2) {
      iVar1 = 48000;
    }
    if ((param_4 == 2 && param_3 == iVar1) && (uVar2 = param_2 - 0x2001, 0xffffdfff < uVar2)) {
      if (unaff_r6 != 0) {
        unaff_r11 = ((uintptr_t)pf_module_state + 0x354U);
        uVar2 = *(uint *)(((uintptr_t)pf_module_state + 0x37cU));
      }
      if (unaff_r6 != 0 && uVar2 != 0) {
        recovered_10003658();
        puVar5 = (undefined1 *)(unaff_r11 + 0x100);
        iVar1 = recovered_10003694(*(undefined4 **)(((uintptr_t)pf_module_state + 0x354U)),
                                   *(undefined4 *)(unaff_r11 + 8),(int)puVar5,0x10,(int)&local_24,
                                   (int)&bdl_high);
        if (iVar1 != 0) {
          iVar1 = recovered_10003694(*(undefined4 **)(((uintptr_t)pf_module_state + 0x354U)),
                                     *(undefined4 *)(unaff_r11 + 8),unaff_r11 + 0x200,param_2,
                                     (int)&data_low,(int)&data_high
                                    );
          if (iVar1 != 0) {
            uVar2 = (uint)*(byte *)(unaff_r11 + 0xc);
            if ((*(byte *)(unaff_r11 + 0xc) & 1) == 0) {
              uVar2 = 0;
            }
            uVar2 = recovered_10002f54(uVar2);
            if (uVar2 != 0) {
              for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
                *(undefined1 *)(unaff_r11 + uVar2 + 0x200) = *(undefined1 *)(unaff_r6 + uVar2);
              }
              recovered_1000190c(puVar5,0x10);
              bVar3 = false;
              *(undefined2 *)(unaff_r11 + 0x10e) = 0;
              *(undefined4 *)(unaff_r11 + 0x10a) = 0x10000;
              *(char *)(unaff_r11 + 0x109) = (char)(param_2 >> 8);

              *(char *)(unaff_r11 + 0x108) = (char)param_2;





              __builtin_memcpy((void *)(unaff_r11+0x100),&data_low,4);
              __builtin_memcpy((void *)(unaff_r11+0x104),&data_high,4);

              recovered_1000370c(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(undefined4 *)(unaff_r11 + 8)
                                 ,unaff_r11 + 0x200,param_2);
              recovered_1000370c(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(undefined4 *)(unaff_r11 + 8)
                                 ,puVar5,0x10);
              uVar2 = recovered_10002e14(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                         *(uint *)(unaff_r11 + 4),*(int *)(unaff_r11 + 0x10) + 8,
                                         param_2);
              if ((((uVar2 != 0) &&
                   (uVar2 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                               *(uint *)(unaff_r11 + 4),
                                               *(int *)(unaff_r11 + 0x10) + 0xc,0), uVar2 != 0)) &&
                  (uVar2 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                              *(uint *)(unaff_r11 + 4),
                                              *(int *)(unaff_r11 + 0x10) + 0x12,0x11), uVar2 != 0))
                 && (((uVar2 = recovered_10002e14(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                  *(uint *)(unaff_r11 + 4),
                                                  *(int *)(unaff_r11 + 0x10) + 0x18,local_24),
                      uVar2 != 0 &&
                      (uVar2 = recovered_10002e14(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                  *(uint *)(unaff_r11 + 4),
                                                  *(int *)(unaff_r11 + 0x10) + 0x1c,bdl_high), uVar2 != 0))
                     && ((uVar2 = recovered_10003754(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                     *(uint *)(unaff_r11 + 4),
                                                     *(int *)(unaff_r11 + 0x10) + 3,0x1c),
                         uVar2 != 0 &&
                         ((uVar2 = recovered_10003754(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                      *(uint *)(unaff_r11 + 4),
                                                      *(int *)(unaff_r11 + 0x10) + 2,0x10),
                          uVar2 != 0 &&
                          (uVar2 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                      *(uint *)(unaff_r11 + 4),
                                                      *(uint *)(unaff_r11 + 0x10),2), uVar2 != 0))))
                        )))) {
                uVar2 = recovered_10003770((param_2 >> 2) * 1000000,48000);
                uVar2 = recovered_10003770(uVar2 + 50000,100);
                uVar4 = ~uVar2;
                while( true ) {
                  bVar3 = false;
                  if (uVar4 != 0) {
                    uVar2 = *(uint *)(unaff_r11 + 4);
                  }
                  if ((((uVar4 == 0 || uVar2 == 0) ||
                       (iVar1 = recovered_10003060(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                   uVar2 + *(int *)(unaff_r11 + 0x10) + 3,1,
                                                   (int)&local_34), iVar1 == 0)) ||
                      (bVar6 = recovered_10003130(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                                  *(int *)(unaff_r11 + 4),
                                                  *(int *)(unaff_r11 + 0x10) + 4,&local_38), !bVar6)
                      ) || ((bVar6 = (local_34 & 0x18) != 0, bVar3 = !bVar6,
                            bVar6 || (local_34 & 4) != 0 || (param_2 <= local_38)))) break;
                  recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x354U)),100);
                  uVar4 = uVar4 + 1;
                  uVar2 = extraout_r0;
                }
                recovered_100033e0();
              }
            }
          }
        }
        DataMemoryBarrier(0xb);
        *(undefined4 *)(((uintptr_t)pf_module_state + 0x2554U)) = 0;
      }
    }
  }
  return bVar3;
}

#undef DAT_1000269c
#undef DAT_100026a0
#undef DAT_100026a4
#undef DAT_100026a8
#undef DAT_100026ac
#undef DAT_100026b0
#undef DAT_100026b4
#undef DAT_100026b8
#undef DAT_100026bc
#undef DAT_100026c0
#undef DAT_100026c4
#undef DAT_100026c8
#undef DAT_100026cc
#undef DAT_100026d0
#undef DAT_100026d4
#undef DAT_100026d8
#undef DAT_100026dc
#undef local_38
#undef local_34
#undef local_24

#undef DAT_10002708
#define DAT_10002708 (*(int *)(0x10002708U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

bool recovered_100026e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 extraout_r0 = 0;

  recovered_10003658();
  recovered_100033e0();
  DataMemoryBarrier(0xb);
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x2554U)) = 0;
  return (bool)extraout_r0;
}

#undef DAT_10002708

#undef DAT_1000279c
#define DAT_1000279c (*(int *)(0x1000279cU))
#undef DAT_100027a0
#define DAT_100027a0 (*(int *)(0x100027a0U))
#undef DAT_100027a4
#define DAT_100027a4 (*(int *)(0x100027a4U))
#undef DAT_100027a8
#define DAT_100027a8 (*(int *)(0x100027a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000270c
 */

void recovered_1000270c(undefined4 param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *api;
  uint extraout_r1 = 0;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x19dcULL});
  api = *(int **)(((uintptr_t)pf_module_state + 0x354U));
  if (api != (int *)0x0) {
    param_2 = *(uint *)(((uintptr_t)pf_module_state + 0x358U));
  }
  if (api != (int *)0x0 && param_2 != 0) {
    if (*(int *)(((uintptr_t)pf_module_state + 0x364U)) != 0) {
      recovered_100033e0();
      param_2 = *(uint *)(((uintptr_t)pf_module_state+0x358U));
      api = *(int **)(((uintptr_t)pf_module_state + 0x354U));
    }
    recovered_10002e14(api,param_2,8,0);
    api = *(int **)(((uintptr_t)pf_module_state + 0x354U));
    param_2 = extraout_r1;
  }
  if (api != (int *)0x0) {
    param_2 = (uint)*(byte *)(((uintptr_t)pf_module_state+0x377U));
  }
  if (api != (int *)0x0 && param_2 != 0) {
    recovered_10002ff0(api,(uint)*(byte *)(((uintptr_t)pf_module_state+0x374U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0x375U)),
                       (uint)*(byte *)(((uintptr_t)pf_module_state+0x376U)),(uint)*(ushort *)(((uintptr_t)pf_module_state+0x378U)));
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x37cU)) = 0;
  return;
}

#undef DAT_1000279c
#undef DAT_100027a0
#undef DAT_100027a4
#undef DAT_100027a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027ac
 */

void recovered_100027ac(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002800(param_1);
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
 * Address: 0x10002800
 */

int recovered_10002800(int param_1)

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
undefined4 recovered_10002828(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_100029ec((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_100029ec((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_100029ec((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_100029ec((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_100029ec((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002a5c
#define DAT_10002a5c (*(uint8_t * *)(0x10002a5cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029ec
 */

undefined4
recovered_100029ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_10002a5c

#undef DAT_10002c58
#define DAT_10002c58 (*(uint *)(0x10002c58U))
#undef DAT_10002d70
#define DAT_10002d70 (*(uint32_t *)(0x10002d70U))
#undef DAT_10002d74
#define DAT_10002d74 (*(int *)(0x10002d74U))
#undef DAT_10002d78
#define DAT_10002d78 (*(int *)(0x10002d78U))
#undef DAT_10002d7c
#define DAT_10002d7c (*(int *)(0x10002d7cU))
#undef DAT_10002d80
#define DAT_10002d80 (*(int *)(0x10002d80U))
#undef DAT_10002d84
#define DAT_10002d84 (*(int *)(0x10002d84U))
#undef DAT_10002d88
#define DAT_10002d88 (*(int *)(0x10002d88U))
#undef DAT_10002d8c
#define DAT_10002d8c (*(int *)(0x10002d8cU))
#undef DAT_10002d90
#define DAT_10002d90 (*(int *)(0x10002d90U))
#undef DAT_10002d94
#define DAT_10002d94 (*(int *)(0x10002d94U))
#undef DAT_10002d98
#define DAT_10002d98 (*(int *)(0x10002d98U))
#undef DAT_10002d9c
#define DAT_10002d9c (*(int *)(0x10002d9cU))
#undef DAT_10002da0
#define DAT_10002da0 (*(int *)(0x10002da0U))
#undef DAT_10002da4
#define DAT_10002da4 (*(int *)(0x10002da4U))
#undef DAT_10002da8
#define DAT_10002da8 (*(int *)(0x10002da8U))
#undef DAT_10002dac
#define DAT_10002dac (*(int *)(0x10002dacU))
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
#undef switchdataD_10002c58
#define switchdataD_10002c58 (*(uint *)(0x10002c58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

int recovered_10002a60(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x18aU);
    }
LAB_10002c34:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10002c54_caseD_5;
    iVar3 = (int)&DAT_10002c58 + (*(uint32_t *)(uint32_t[]){0x130aULL});
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x1dcU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x1c9U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x1efU);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002cb8:
        iVar3 = recovered_100035c8((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10002c54_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0xdaU);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x181U);
      }
      goto LAB_10002c34;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10002bf4:
        return ((uintptr_t)pf_module_state + 0x1afU);
      }
      goto LAB_10002c34;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10002bf4;
      goto LAB_10002c34;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x1a6U);
      }
      goto LAB_10002c34;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x195U);
      }
      goto LAB_10002c34;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x175U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002cb8;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x76U);
        }
      }
      goto LAB_10002c34;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x19eU);
      }
      goto LAB_10002c34;
    }
    if (sVar2 != 0x1af4) goto LAB_10002c34;
    iVar3 = ((uintptr_t)pf_module_state + 0xe5U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002af4_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0xf4U);
      break;
    case 0x1043:
switchD_10002af4_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x118U);
      break;
    case 0x1044:
switchD_10002af4_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x13bU);
      break;
    case 0x1045:
switchD_10002af4_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x105U);
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
switchD_10002af4_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x16aU);
      break;
    case 0x1048:
switchD_10002af4_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x12bU);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x14aU);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x159U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002af4_caseD_1042;
      case 0x1002:
        goto switchD_10002af4_caseD_1045;
      case 0x1003:
        goto switchD_10002af4_caseD_1043;
      case 0x1004:
        goto switchD_10002af4_caseD_1048;
      case 0x1005:
        goto switchD_10002af4_caseD_1044;
      default:
        goto switchD_10002af4_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10002c58
#undef DAT_10002d70
#undef DAT_10002d74
#undef DAT_10002d78
#undef DAT_10002d7c
#undef DAT_10002d80
#undef DAT_10002d84
#undef DAT_10002d88
#undef DAT_10002d8c
#undef DAT_10002d90
#undef DAT_10002d94
#undef DAT_10002d98
#undef DAT_10002d9c
#undef DAT_10002da0
#undef DAT_10002da4
#undef DAT_10002da8
#undef DAT_10002dac
#undef DAT_10002db0
#undef DAT_10002db4
#undef DAT_10002db8
#undef DAT_10002dbc
#undef DAT_10002dc0
#undef DAT_10002dc4
#undef switchdataD_10002c58

#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc8
 */

bool recovered_10002dc8(int *param_1,int param_2,int param_3,undefined4 *param_4)

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
    iVar1 = recovered_10003060(param_1,param_3 + param_2,2,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e14
 */

uint recovered_10002e14(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_100030cc(api,offset + base,4,value);
  return uVar1;
}


#undef DAT_10002ec0
#define DAT_10002ec0 (*(int *)(0x10002ec0U))
#undef DAT_10002ec4
#define DAT_10002ec4 (*(int *)(0x10002ec4U))
#undef DAT_10002ec8
#define DAT_10002ec8 (*(int *)(0x10002ec8U))
#define local_20 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e2c
 */

bool recovered_10002e2c(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x12a8ULL});
  uVar3 = 0;
  local_20 = 0;
  while ((uVar3 != 10000 &&
         ((bVar2 = recovered_10003130(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                      *(int *)(((uintptr_t)pf_module_state+0x358U)),8,&local_20), !bVar2 ||
          ((local_20 & 1) != param_1))))) {
    recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x354U)),10);
    uVar3 = uVar3 + 1;
  }
  return uVar3 < 10000;
}

#undef DAT_10002ec0
#undef DAT_10002ec4
#undef DAT_10002ec8
#undef local_20

#undef DAT_10002f08
#define DAT_10002f08 (*(int *)(0x10002f08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ecc
 */

void recovered_10002ecc(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10002f08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f0c
 */

void recovered_10002f0c(uint param_1,uint param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000317c(param_1,0xf00,param_2 & 0xff,param_3);
  return;
}


#define auStack_20c (*(undefined4 (*)[131])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f1c
 */

void recovered_10002f1c(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  recovered_1000317c(param_1,param_2,param_3 & 0xff,auStack_20c + 0x80);
  return;
}

#undef auStack_20c

#define auStack_20c (*(undefined4 (*)[131])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f38
 */

void recovered_10002f38(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  recovered_1000317c(param_1,param_2,param_3 & 0xffff,auStack_20c + 0x80);
  return;
}

#undef auStack_20c

#undef DAT_10002fe4
#define DAT_10002fe4 (*(int *)(0x10002fe4U))
#undef DAT_10002fe8
#define DAT_10002fe8 (*(int *)(0x10002fe8U))
#undef DAT_10002fec
#define DAT_10002fec (*(int *)(0x10002fecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f54
 */

uint recovered_10002f54(uint stream)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int extraout_r0 = 0;
  uint uVar3;

  recovered_100033e0();
  iVar1 = (*(uint32_t *)(uint32_t[]){0x1188ULL});
  if (extraout_r0 != 0) {
    uVar3 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                               *(uint *)(((uintptr_t)pf_module_state + 0x358U)),
                               *(uint *)(((uintptr_t)pf_module_state + 0x364U)),1);
    if (((uVar3 != 0) && (bVar2 = recovered_10003328(*(int *)(((uintptr_t)pf_module_state+0x364U)),1,1), bVar2)) &&
       (uVar3 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                   *(uint *)(((uintptr_t)pf_module_state+0x358U)),*(uint *)(((uintptr_t)pf_module_state+0x364U)),0),
       uVar3 != 0)) {
      bVar2 = recovered_10003328(*(int *)(((uintptr_t)pf_module_state+0x364U)),1,0);
      return (uint)bVar2;
    }
  }
  return 0;
}

#undef DAT_10002fe4
#undef DAT_10002fe8
#undef DAT_10002fec

#undef DAT_1000305c
#define DAT_1000305c (*(int *)(0x1000305cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff0
 */

undefined4
recovered_10002ff0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_1000305c

#undef DAT_100030c8
#define DAT_100030c8 (*(uint8_t * *)(0x100030c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

undefined4 recovered_10003060(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100030b8;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100030b8:
                    /* WARNING: Could not recover jumptable at 0x100030c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100030c8

#undef DAT_1000312c
#define DAT_1000312c (*(int *)(0x1000312cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030cc
 */

undefined4 recovered_100030cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10003114;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10003114:
                    /* WARNING: Could not recover jumptable at 0x10003120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000312c

#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003130
 */

bool recovered_10003130(int *param_1,int param_2,int param_3,undefined4 *param_4)

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
    iVar1 = recovered_10003060(param_1,param_3 + param_2,4,(int)&local_14);
    bVar2 = iVar1 != 0;
    if (bVar2) {
      *unaff_r5 = local_14;
    }
  }
  return bVar2;
}

#undef local_14

#undef DAT_10003308
#define DAT_10003308 (*(int *)(0x10003308U))
#undef DAT_1000330c
#define DAT_1000330c (*(int *)(0x1000330cU))
#undef DAT_10003310
#define DAT_10003310 (*(int *)(0x10003310U))
#undef DAT_10003314
#define DAT_10003314 (*(int *)(0x10003314U))
#undef DAT_10003318
#define DAT_10003318 (*(int *)(0x10003318U))
#undef DAT_1000331c
#define DAT_1000331c (*(int *)(0x1000331cU))
#undef DAT_10003320
#define DAT_10003320 (*(int *)(0x10003320U))
#undef DAT_10003324
#define DAT_10003324 (*(int *)(0x10003324U))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000317c
 */

undefined4 recovered_1000317c(uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint codec_response=0;

  iVar1 = (*(uint32_t *)(uint32_t[]){0xf44ULL});
  uVar4 = 0;
  local_24 = 0;
  if (param_4 != (undefined4 *)0x0) {
    iVar5 = *(int *)(((uintptr_t)pf_module_state + 0x368U));
    bVar2 = recovered_10003328(0x68,1,0);
    if (bVar2) {
      recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(uint *)(((uintptr_t)pf_module_state+0x358U)),0x68,2);
      uVar3 = recovered_10002e14(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(uint *)(((uintptr_t)pf_module_state+0x358U)),
                                 0x60,(param_1 & 0xff) << 0x14 | iVar5 << 0x1c |
                                      (param_2 & 0xfff) << 8 | param_3);
      if ((uVar3 != 0) &&
         (uVar3 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                     *(uint *)(((uintptr_t)pf_module_state+0x358U)),0x68,1), uVar3 != 0)) {
        iVar5 = 1000;
        while ((iVar5 != 0 &&
               ((bVar2 = recovered_10002dc8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                            *(int *)(((uintptr_t)pf_module_state+0x358U)),0x68,&local_24), !bVar2 ||
                ((local_24 & 3) != 2))))) {
          recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x354U)),10);
          iVar5 = iVar5 + -1;
        }
        if (((local_24 & 3) == 2) &&
           (bVar2 = recovered_10003130(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                       *(int *)(((uintptr_t)pf_module_state+0x358U)),100,
                                       &codec_response), bVar2)) {
          recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(uint *)(((uintptr_t)pf_module_state+0x358U)),0x68
                             ,2);
          uVar4 = 1;
          *param_4 = codec_response;
        }
      }
    }
  }
  return uVar4;
}

#undef DAT_10003308
#undef DAT_1000330c
#undef DAT_10003310
#undef DAT_10003314
#undef DAT_10003318
#undef DAT_1000331c
#undef DAT_10003320
#undef DAT_10003324
#undef local_24

#undef DAT_100033bc
#define DAT_100033bc (*(int *)(0x100033bcU))
#undef DAT_100033c0
#define DAT_100033c0 (*(int *)(0x100033c0U))
#undef DAT_100033c4
#define DAT_100033c4 (*(int *)(0x100033c4U))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003328
 */

bool recovered_10003328(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;

  iVar1 = (*(uint32_t *)(uint32_t[]){0xda8ULL});
  uVar3 = 0;
  local_24 = 0;
  while ((uVar3 != 1000 &&
         ((bVar2 = recovered_10002dc8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),
                                      *(int *)(((uintptr_t)pf_module_state+0x358U)),param_1,&local_24), !bVar2 ||
          ((local_24 & param_2) != param_3))))) {
    recovered_10002ecc(*(int **)(((uintptr_t)pf_module_state + 0x354U)),10);
    uVar3 = uVar3 + 1;
  }
  return uVar3 < 1000;
}

#undef DAT_100033bc
#undef DAT_100033c0
#undef DAT_100033c4
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c8
 */

uint recovered_100033c8(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_100030cc(api,offset + base,2,value);
  return uVar1;
}


#undef DAT_10003470
#define DAT_10003470 (*(int *)(0x10003470U))
#undef DAT_10003474
#define DAT_10003474 (*(int *)(0x10003474U))
#undef DAT_10003478
#define DAT_10003478 (*(int *)(0x10003478U))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033e0
 */

void recovered_100033e0(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int in_r2;

  iVar1 = (*(uint32_t *)(uint32_t[]){0xcf4ULL});
  local_14 = 0;
  if (*(int **)(((uintptr_t)pf_module_state + 0x354U)) != (int *)0x0) {
    iVar3 = *(int *)(((uintptr_t)pf_module_state + 0x358U));
    if (iVar3 != 0) {
      in_r2 = *(int *)(((uintptr_t)pf_module_state + 0x364U));
    }
    if (iVar3 != 0 && in_r2 != 0) {
      recovered_10002dc8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),iVar3,in_r2,&local_14);
      local_14 = local_14 & 0xfffffffd;
      uVar2 = recovered_100033c8(*(int **)(((uintptr_t)pf_module_state + 0x354U)),*(uint *)(((uintptr_t)pf_module_state+0x358U)),
                                 *(uint *)(((uintptr_t)pf_module_state+0x364U)),local_14);
      if (uVar2 != 0) {
        recovered_10003328(*(int *)(((uintptr_t)pf_module_state+0x364U)),2,0);
      }
    }
  }
  return;
}

#undef DAT_10003470
#undef DAT_10003474
#undef DAT_10003478
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000347c
 */

void recovered_1000347c(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_1000358c(param_1,param_2,bVar3);
  }
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034dc
 */

void recovered_100034dc(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_1000358c(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003770(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_1000358c(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000358c
 */

void recovered_1000358c(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002800(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_1000363c
#define DAT_1000363c (*(uint32_t *)(0x1000363cU))
#undef DAT_10003640
#define DAT_10003640 (*(int *)(0x10003640U))
#undef DAT_10003644
#define DAT_10003644 (*(int *)(0x10003644U))
#undef DAT_10003648
#define DAT_10003648 (*(int *)(0x10003648U))
#undef DAT_1000364c
#define DAT_1000364c (*(int *)(0x1000364cU))
#undef DAT_10003650
#define DAT_10003650 (*(int *)(0x10003650U))
#undef DAT_10003654
#define DAT_10003654 (*(int *)(0x10003654U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

int recovered_100035c8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x205U);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x224U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x20fU);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x214U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x219U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x20aU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x22dU);
  }
  return iVar1;
}

#undef DAT_1000363c
#undef DAT_10003640
#undef DAT_10003644
#undef DAT_10003648
#undef DAT_1000364c
#undef DAT_10003650
#undef DAT_10003654

#undef DAT_10003690
#define DAT_10003690 (*(int *)(0x10003690U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003658
 */

void recovered_10003658(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(((uintptr_t)pf_module_state + 0x2554U));
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

#undef DAT_10003690

#undef DAT_10003708
#define DAT_10003708 (*(uint8_t * *)(0x10003708U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003694
 */

undefined4
recovered_10003694(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
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

#undef DAT_10003708

#undef DAT_10003750
#define DAT_10003750 (*(int *)(0x10003750U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000370c
 */

void recovered_1000370c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_10003750

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003754
 */

uint recovered_10003754(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_100030cc(api,offset + base,1,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003770
 */

uint recovered_10003770(uint param_1,uint param_2)

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
 * Address: 0x100037c0
 */

uint recovered_100037c0(uint param_1,uint param_2)

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
 * Address: 0x100037f8
 */

uint recovered_100037f8(uint param_1,uint param_2)

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
 * Address: 0x10003868
 */

uint recovered_10003868(uint param_1,uint param_2)

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
 * Address: 0x100038d0
 */

undefined8 recovered_100038d0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100039b4
 */

undefined8 recovered_100039b4(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003a34
 */

undefined8 recovered_10003a34(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003b54
 */

undefined8 recovered_10003b54(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003c90
#define DAT_10003c90 (*(double *)(0x10003c90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c10
 */

undefined8 recovered_10003c10(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003c90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c98
 */

undefined8 recovered_10003c98(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003c10(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003c10(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce4
 */

undefined8 recovered_10003ce4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003c10(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x254U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf4
 */

void recovered_10003cf4(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x23cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d04
 */

double recovered_10003d04(uint param_1,uint param_2)

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
 * Address: 0x10003d4c
 */

double recovered_10003d4c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003d04(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003d04(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d74
 */

float recovered_10003d74(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d04(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

float recovered_10003d90(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d4c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
