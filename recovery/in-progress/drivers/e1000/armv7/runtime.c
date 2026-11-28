/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10001d14
#define DAT_10001d14 (*(uint32_t *)(0x10001d14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d08
 */

void * recovered_10001d08(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0xc110U));
}

#undef DAT_10001d14

#undef DAT_10001ee0
#define DAT_10001ee0 (*(int *)(0x10001ee0U))
#undef DAT_10001ee4
#define DAT_10001ee4 (*(int *)(0x10001ee4U))
#undef DAT_10001ee8
#define DAT_10001ee8 (*(int *)(0x10001ee8U))
#undef DAT_10001eec
#define DAT_10001eec (*(int *)(0x10001eecU))
#undef DAT_10001ef0
#define DAT_10001ef0 (*(int *)(0x10001ef0U))
#undef DAT_10001ef4
#define DAT_10001ef4 (*(int *)(0x10001ef4U))
#define auStack_480 (*(undefined1 (*)[1152])(pf_stack_frame + 16))
#define local_80 (*(int *)(pf_stack_frame + 1040))
#define local_44 (*(char *)(pf_stack_frame + 1100))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 1044))
#define abStack_50 (*(byte (*)[80])(pf_stack_frame + 1088))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d18
 */

uint recovered_10001d18(void *api)

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
    recovered_10001ef8(auStack_480,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    if (((*(code **)((int)api + 0xc) != (code *)0x0) &&
        (iVar1 = (**(code **)((int)api + 0xc))
                           (((uintptr_t)pf_module_state + 0x24U),((uintptr_t)pf_module_state + 0x25U),auStack_480),
        iVar1 != 0)) &&
       ((*(int *)api == iVar2 &&
        ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))))) {
      for (uVar3 = 0; uVar3 != 0x20; uVar3 = uVar3 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          iVar2 = recovered_10002b48(api,uVar3 & 0xff,uVar4 & 0xff,0,abStack_50);
          if ((iVar2 != 0) && (recovered_10001f0c(api,abStack_50,&local_80), local_44 < '\0')) {
            for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
              iVar2 = recovered_10002b48(api,uVar3 & 0xff,uVar4 & 0xff,uVar5 & 0xff,abStack_7c);
              if (iVar2 != 0) {
                recovered_10001f0c(api,abStack_7c,&local_80);
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

#undef DAT_10001ee0
#undef DAT_10001ee4
#undef DAT_10001ee8
#undef DAT_10001eec
#undef DAT_10001ef0
#undef DAT_10001ef4
#undef auStack_480
#undef local_80
#undef local_44
#undef abStack_7c
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef8
 */

void recovered_10001ef8(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002acc((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10002a2c
#define DAT_10002a2c (*(int *)(0x10002a2cU))
#undef DAT_10002a30
#define DAT_10002a30 (*(uint32_t *)(0x10002a30U))
#undef DAT_10002a34
#define DAT_10002a34 (*(uint32_t *)(0x10002a34U))
#undef DAT_10002a38
#define DAT_10002a38 (*(uint32_t *)(0x10002a38U))
#undef DAT_10002a3c
#define DAT_10002a3c (*(int *)(0x10002a3cU))
#undef DAT_10002a40
#define DAT_10002a40 (*(int *)(0x10002a40U))
#undef DAT_10002a44
#define DAT_10002a44 (*(int *)(0x10002a44U))
#undef DAT_10002a48
#define DAT_10002a48 (*(int *)(0x10002a48U))
#undef DAT_10002a4c
#define DAT_10002a4c (*(int *)(0x10002a4cU))
#undef DAT_10002a50
#define DAT_10002a50 (*(int *)(0x10002a50U))
#undef DAT_10002a54
#define DAT_10002a54 (*(int *)(0x10002a54U))
#undef DAT_10002a58
#define DAT_10002a58 (*(int *)(0x10002a58U))
#undef DAT_10002a5c
#define DAT_10002a5c (*(int *)(0x10002a5cU))
#undef DAT_10002a60
#define DAT_10002a60 (*(int *)(0x10002a60U))
#undef DAT_10002a64
#define DAT_10002a64 (*(int *)(0x10002a64U))
#undef DAT_10002a68
#define DAT_10002a68 (*(int *)(0x10002a68U))
#undef DAT_10002a6c
#define DAT_10002a6c (*(int *)(0x10002a6cU))
#undef DAT_10002a70
#define DAT_10002a70 (*(int *)(0x10002a70U))
#undef DAT_10002a74
#define DAT_10002a74 (*(int *)(0x10002a74U))
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
#undef DAT_10002a90
#define DAT_10002a90 (*(int *)(0x10002a90U))
#undef DAT_10002a94
#define DAT_10002a94 (*(int *)(0x10002a94U))
#undef DAT_10002a98
#define DAT_10002a98 (*(int *)(0x10002a98U))
#undef DAT_10002a9c
#define DAT_10002a9c (*(int *)(0x10002a9cU))
#undef DAT_10002aa0
#define DAT_10002aa0 (*(int *)(0x10002aa0U))
#undef DAT_10002aa4
#define DAT_10002aa4 (*(int *)(0x10002aa4U))
#undef DAT_10002aa8
#define DAT_10002aa8 (*(int *)(0x10002aa8U))
#undef DAT_10002aac
#define DAT_10002aac (*(int *)(0x10002aacU))
#undef DAT_10002ab0
#define DAT_10002ab0 (*(int *)(0x10002ab0U))
#undef DAT_10002ab4
#define DAT_10002ab4 (*(int *)(0x10002ab4U))
#undef DAT_10002ab8
#define DAT_10002ab8 (*(int *)(0x10002ab8U))
#undef DAT_10002abc
#define DAT_10002abc (*(int *)(0x10002abcU))
#undef DAT_10002ac0
#define DAT_10002ac0 (*(int *)(0x10002ac0U))
#undef DAT_10002ac4
#define DAT_10002ac4 (*(int *)(0x10002ac4U))
#undef DAT_10002ac8
#define DAT_10002ac8 (*(int *)(0x10002ac8U))
#define auStack_444 (*(undefined1 (*)[1092])(pf_stack_frame + 1132))
#define auStack_404 (*(undefined1 (*)[1028])(pf_stack_frame + 1196))
#define local_894 (*(undefined1 * *)(pf_stack_frame + 28))
#define local_890 (*(char (*)[2192])(pf_stack_frame + 32))
#define local_490 (*(uint *)(pf_stack_frame + 1056))
#define local_48c (*(uint *)(pf_stack_frame + 1060))
#define local_488 (*(uint *)(pf_stack_frame + 1064))
#define local_484 (*(uint *)(pf_stack_frame + 1068))
#define local_480 (*(uint *)(pf_stack_frame + 1072))
#define local_47c (*(undefined4 *)(pf_stack_frame + 1076))
#define local_478 (*(undefined4 *)(pf_stack_frame + 1080))
#define local_474 (*(undefined1 (*)[1140])(pf_stack_frame + 1084))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 2092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f0c
 */

void recovered_10001f0c(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2256] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;

  piVar5 = param_1;
  if (param_3 != (int *)0x0) {
    piVar5 = (int *)*param_3;
  }
  if (param_3 != (int *)0x0 && piVar5 != (int *)0x0) {
    return;
  }
  recovered_10001ef8(local_890,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  iVar11 = (*(uint32_t *)(uint32_t[]){0xa34cULL});
  local_48c = 0;
  local_490 = 0;
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != -0x7f7a) {
    return;
  }
  bVar1 = param_2[8];
  bVar15 = bVar1 == 2;
  if (bVar15) {
    bVar1 = param_2[9];
  }
  if (!bVar15 || bVar1 != 0) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x100e) {
    return;
  }
  puVar14 = (undefined4 *)(((uintptr_t)pf_module_state + 0x840cU));
  recovered_10002ff4((undefined1 *)(((uintptr_t)pf_module_state + 0x8410U)),0x30);
  *puVar14 = 0;
  *(int **)(((uintptr_t)pf_module_state+0x8410U)) = param_1;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  bVar3 = param_2[2];
  *(byte *)(((uintptr_t)pf_module_state+0x8418U)) = bVar1;
  *(byte *)(((uintptr_t)pf_module_state+0x8419U)) = bVar2;
  *(byte *)(((uintptr_t)pf_module_state+0x841aU)) = bVar3;
  *(uint *)(((uintptr_t)pf_module_state+0x8420U)) =
       (uint)bVar1 << 0x10 | (uint)bVar2 << 0xb | (uint)bVar3 << 8 | 0x80000000;
  iVar6 = recovered_10002d0c(param_1,(uint)bVar1,(uint)bVar2,(uint)bVar3,4,2,(int)&local_48c);
  if (iVar6 == 0) {
    return;
  }
  *(short *)(((uintptr_t)pf_module_state+0x841cU)) = (short)local_48c;
  *(undefined1 *)(((uintptr_t)pf_module_state+0x841bU)) = 1;
  uVar7 = *(uint *)(param_2 + 0x14);
  local_84[0] = 0;
  if ((uVar7 != 0) && ((uVar7 & 1) == 0)) {
    local_488 = uVar7;
    recovered_10002d0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x10,4,
                       (int)&local_488);
    uVar7 = 0;
    if ((local_488 & 7) == 4) {
      local_84[0] = *(uint *)(param_2 + 0x18);
      recovered_10002d0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x14,4,
                         (int)local_84);
      uVar7 = local_84[0];
    }
    uVar12 = 0xfffffffc;
    if ((local_488 & 1) == 0) {
      uVar12 = 0xfffffff0;
    }
    uVar12 = uVar12 & local_488;
    if (uVar12 != 0 || uVar7 != 0) {
      *(undefined4 *)(((uintptr_t)pf_module_state+0x8414U)) = 0;
      iVar6 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
      local_484 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
        if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
          if ((((uVar7 != 0) || ((uint)param_1[2] < 0x68)) || ((code *)param_1[0x19] == (code *)0x0)
              ) || (iVar8 = (*(code *)param_1[0x19])(uVar12,0,0x6000,&local_484), iVar8 == 0))
          goto LAB_10002340;
          *(uint *)(((uintptr_t)pf_module_state+0x8414U)) = local_484;
        }
        else {
          iVar8 = (*(code *)param_1[0x2e])(uVar12,uVar7,0x6000,((uintptr_t)pf_module_state+0x8414U));
          if (iVar8 == 0) goto LAB_10002340;
        }
        local_484 = 0;
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xa3U));
        if (((*param_1 == iVar6) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
          iVar8 = recovered_10002d0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                                     (int)&local_484);
          if (iVar8 == 0) {
            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xb5U));
          }
          else {
            iVar8 = 5;
            uVar7 = 0;
            while (iVar8 != 0xb) {
              iVar9 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              uVar12 = uVar7;
              if (*(uint *)(param_2 + iVar9) != 0) {
                uVar12 = uVar7 | 2;
              }
              if ((*(uint *)(param_2 + iVar9) & 1) != 0) {
                uVar12 = uVar7 | 1;
              }
              uVar7 = uVar12;
            }
            iVar8 = recovered_10002b20(((uintptr_t)pf_module_state + 0x57U));
            if (iVar8 != 0) {
              uVar7 = uVar7 | 4;
            }
            if ((param_2[8] == 6) && (param_2[9] != 0)) {
              uVar7 = uVar7 | 2;
            }
            local_84[0] = local_484 | uVar7;
            iVar8 = recovered_10003148(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       local_84[0]);
            if (iVar8 != 0) {
              recovered_10002d0c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                                 (int)local_84);
              if ((local_84[0] & uVar7) == uVar7) {
                local_484 = 0;
                bVar15 = recovered_10003018(0,&local_484);
                if (((bVar15) && (iVar8 = recovered_100030c8(0xd8,0xffffffff), iVar8 != 0)) &&
                   (iVar8 = recovered_100030c8(0,local_484 | 0x4000000), iVar8 != 0)) {
                  for (iVar8 = 200; iVar8 != 0; iVar8 = iVar8 + -1) {
                    recovered_100031b8(*(int **)(((uintptr_t)pf_module_state+0x8410U)),100);
                    bVar15 = recovered_10003018(0,&local_484);
                    if ((bVar15) && ((local_484 & 0x4000000) == 0)) {
                      recovered_100030c8(0xd8,0xffffffff);
                      recovered_10003018(0xc0,&local_484);
                      local_484 = 0;
                      local_84[0] = 0;
                      bVar15 = recovered_10003018(0x5400,&local_484);
                      if ((bVar15) && (bVar15 = recovered_10003018(0x5404,local_84), bVar15)) {
                        *(uint *)(((uintptr_t)pf_module_state+0x8438U)) = local_484;
                        *(short *)(((uintptr_t)pf_module_state+0x843cU)) = (short)local_84[0];
                        if (((0x7fffffff < local_84[0]) && ((local_484 & 1) == 0)) &&
                           (((local_484 >> 0x10 | local_484 | local_484 >> 8 | local_484 >> 0x18 |
                              local_84[0] | local_84[0] >> 8) & 0xff) != 0)) {
                          recovered_10002ff4((undefined1 *)(((uintptr_t)pf_module_state + 0x20cU)),0x80);
                          local_894 = (undefined1 *)(((uintptr_t)pf_module_state + 0x30cU));
                          recovered_10002ff4(local_894,0x4000);
                          iVar8 = 0;
                          goto LAB_10002408;
                        }
                      }
                      break;
                    }
                  }
                }
              }
              goto LAB_10002340;
            }
            pcVar13 = (char *)(((uintptr_t)pf_module_state + 0xc7U));
          }
        }
        recovered_10002acc((int)local_890,0x400,pcVar13);
      }
    }
  }
  goto LAB_10002340;
LAB_10002408:
  if (iVar8 == 0x80) goto LAB_10002474;
  local_484 = 0;
  local_84[0] = 0;
  iVar9 = recovered_100031f8(*(undefined4 **)(((uintptr_t)pf_module_state+0x8410U)),
                             *(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),(int)local_894,0x800,
                             (int)&local_484,local_84);
  if (iVar9 == 0) goto LAB_10002340;
  recovered_10003270((undefined1 *)(((uintptr_t)pf_module_state + 0x20cU) + iVar8),local_484,local_84[0]);
  iVar8 = iVar8 + 0x10;
  local_894 = local_894 + 0x800;
  goto LAB_10002408;
LAB_10002750:
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x74U));
  if ((uVar7 & 2) == 0) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x84U));
  }
  recovered_10002acc((int)local_890,0x400,pcVar13);
  recovered_10002de0((int)local_890,0x400,0x5dc);
  recovered_10001ef8((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x96U)));
  recovered_10002acc((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xdaU)));
  recovered_10002d80((int)local_84,0x60,(uint)*param_2,2);
  recovered_10002acc((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x72U)));
  recovered_10002d80((int)local_84,0x60,(uint)param_2[1],2);
  recovered_10002acc((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xdcU)));
  recovered_10002de0((int)local_84,0x60,(uint)param_2[2]);
  recovered_10001ef8((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xdeU)));
  recovered_10002d80((int)&local_484,0x400,(uint)*param_2,2);
  recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x72U)));
  recovered_10002d80((int)&local_484,0x400,(uint)param_2[1],2);
  recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xdcU)));
  recovered_10002de0((int)&local_484,0x400,(uint)param_2[2]);
  recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe3U)));
  recovered_10002d80((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x72U)));
  recovered_10002d80((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe6U)));
  if (local_890[0] != '\0') {
    recovered_10002acc((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe8U)));
    recovered_10002acc((int)&local_484,0x400,local_890);
  }
  if ((code *)param_1[3] != (code *)0x0) {
    iVar8 = (*(code *)param_1[3])(local_84,((uintptr_t)pf_module_state + 0x25U),&local_484);
    if (iVar8 != 0) {
      recovered_10002ff4((undefined1 *)&local_484,0xc0);
      local_484 = 0xc0;
      local_478 = 0x800;
      local_47c = 0x5dc;
      local_480 = *(uint *)(((uintptr_t)pf_module_state+0x8428U)) & 2 | 0xd;
      for (iVar11 = 0; iVar11 != 6; iVar11 = iVar11 + 1) {
        local_474[iVar11] = *(undefined1 *)((int)puVar14 + iVar11 + 0x2c);
      }
      recovered_10001ef8(auStack_444,0x40,(char *)(((uintptr_t)pf_module_state + 0x25U)));
      recovered_10001ef8(auStack_404,0x40,(char *)(((uintptr_t)pf_module_state + 0xebU)));
      if (((*param_1 == iVar6) && (0xcb < (uint)param_1[2])) &&
         (((code *)param_1[0x32] != (code *)0x0 &&
          (iVar11 = (*(code *)param_1[0x32])
                              (&local_484,((uintptr_t)&recovered_10003404),((uintptr_t)&recovered_10003634)),
          iVar11 != 0)))) {
        if (param_3 == (int *)0x0) {
          return;
        }
        *param_3 = *param_3 + 1;
        return;
      }
    }
  }
  goto LAB_10002340;
LAB_10002474:
  iVar8 = ((uintptr_t)pf_module_state + 0x20cU);
  recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),iVar8,0x80)
  ;
  recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                     ((uintptr_t)pf_module_state + 0x30cU),0x4000);
  iVar8 = recovered_100032fc(0x2800,0x2804,iVar8);
  if ((((iVar8 != 0) && (iVar8 = recovered_100030c8(0x2808,0x80), iVar8 != 0)) &&
      (iVar8 = recovered_100030c8(0x2810,0), iVar8 != 0)) &&
     (iVar8 = recovered_100030c8(0x2818,7), iVar8 != 0)) {
    for (iVar8 = 0x5200; uVar4 = (*(uint32_t *)(uint32_t[]){0x4008012ULL}), iVar8 != 0x5400; iVar8 = iVar8 + 4) {
      recovered_100030c8(iVar8,0);
    }
    *(undefined4 *)(iVar11 + 0x10001fd8) = 0;
    *(undefined4 *)(iVar11 + 0x10001fd4) = uVar4;
    iVar8 = recovered_100030c8(0x100,uVar4);
    if (iVar8 != 0) {
      recovered_10002ff4((undefined1 *)(((uintptr_t)pf_module_state + 0x430cU)),0x80);
      local_894 = (undefined1 *)(((uintptr_t)pf_module_state + 0x440cU));
      recovered_10002ff4(local_894,0x4000);
      for (iVar8 = 0; iVar8 != 0x80; iVar8 = iVar8 + 0x10) {
        local_484 = 0;
        local_84[0] = 0;
        iVar9 = recovered_100031f8(*(undefined4 **)(((uintptr_t)pf_module_state+0x8410U)),
                                   *(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),(int)local_894,0x800,
                                   (int)&local_484,local_84);
        if (iVar9 == 0) goto LAB_10002340;
        puVar10 = (undefined1 *)(((uintptr_t)pf_module_state + 0x430cU) + iVar8);
        recovered_10003270(puVar10,local_484,local_84[0]);
        puVar10[0xc] = 1;
        local_894 = local_894 + 0x800;
      }
      iVar8 = ((uintptr_t)pf_module_state + 0x430cU);
      recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),iVar8,
                         0x80);
      iVar8 = recovered_100032fc(0x3800,0x3804,iVar8);
      if (((iVar8 != 0) && (iVar8 = recovered_100030c8(0x3808,0x80), iVar8 != 0)) &&
         ((iVar8 = recovered_100030c8(0x3810,0), iVar8 != 0 &&
          ((iVar8 = recovered_100030c8(0x3818,0), iVar8 != 0 &&
           (iVar8 = recovered_100030c8(0x410,(*(uint32_t *)(uint32_t[]){0x60200aULL})), uVar4 = (*(uint32_t *)(uint32_t[]){0x4010aULL}), iVar8 != 0)))))) {
        *(undefined4 *)(iVar11 + 0x10001fdc) = 0;
        iVar8 = recovered_100030c8(0x400,uVar4);
        if ((iVar8 != 0) &&
           (((bVar15 = recovered_10003018(0,&local_490), bVar15 &&
             (iVar8 = recovered_100030c8(0,local_490 | 0x40), iVar8 != 0)) &&
            (bVar15 = recovered_10003018(8,&local_48c), uVar7 = local_48c, bVar15)))) {
          *(uint *)(((uintptr_t)pf_module_state+0x8428U)) = local_48c;
          *(undefined4 *)(iVar11 + 0x10001fcc) = 1;
          recovered_10001ef8(local_890,0x400,(char *)(((uintptr_t)pf_module_state + 0x24U)));
          recovered_10002acc((int)local_890,0x400,(char *)(((uintptr_t)pf_module_state + 0x6dU)));
          iVar8 = 0;
          do {
            if (iVar8 != 0) {
              if (iVar8 == 6) goto LAB_10002750;
              recovered_10002acc((int)local_890,0x400,(char *)(((uintptr_t)pf_module_state + 0x72U)));
            }
            recovered_10002d80((int)local_890,0x400,(uint)*(byte *)((int)puVar14 + iVar8 + 0x2c),2);
            iVar8 = iVar8 + 1;
          } while( true );
        }
      }
    }
  }
LAB_10002340:
  recovered_10002e90();
  return;
}

#undef DAT_10002a2c
#undef DAT_10002a30
#undef DAT_10002a34
#undef DAT_10002a38
#undef DAT_10002a3c
#undef DAT_10002a40
#undef DAT_10002a44
#undef DAT_10002a48
#undef DAT_10002a4c
#undef DAT_10002a50
#undef DAT_10002a54
#undef DAT_10002a58
#undef DAT_10002a5c
#undef DAT_10002a60
#undef DAT_10002a64
#undef DAT_10002a68
#undef DAT_10002a6c
#undef DAT_10002a70
#undef DAT_10002a74
#undef DAT_10002a78
#undef DAT_10002a7c
#undef DAT_10002a80
#undef DAT_10002a84
#undef DAT_10002a88
#undef DAT_10002a8c
#undef DAT_10002a90
#undef DAT_10002a94
#undef DAT_10002a98
#undef DAT_10002a9c
#undef DAT_10002aa0
#undef DAT_10002aa4
#undef DAT_10002aa8
#undef DAT_10002aac
#undef DAT_10002ab0
#undef DAT_10002ab4
#undef DAT_10002ab8
#undef DAT_10002abc
#undef DAT_10002ac0
#undef DAT_10002ac4
#undef DAT_10002ac8
#undef auStack_444
#undef auStack_404
#undef local_894
#undef local_890
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002acc
 */

void recovered_10002acc(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002b20(param_1);
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
 * Address: 0x10002b20
 */

int recovered_10002b20(int param_1)

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
undefined4 recovered_10002b48(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10002d0c((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10002d0c((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10002d0c((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10002d0c((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10002d0c((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002d7c
#define DAT_10002d7c (*(uint8_t * *)(0x10002d7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d0c
 */

undefined4
recovered_10002d0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_10002d7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d80
 */

void recovered_10002d80(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_1000338c(param_1,param_2,bVar3);
  }
  return;
}


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002de0
 */

void recovered_10002de0(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_1000338c(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100038b8(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_1000338c(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

#undef DAT_10002ff0
#define DAT_10002ff0 (*(int *)(0x10002ff0U))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

void recovered_10002e90(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x944cULL});
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state + 0x8424U)) = 0;
  if (*(int *)(((uintptr_t)pf_module_state+0x8410U)) != 0) {
    if (*(int *)(((uintptr_t)pf_module_state+0x8414U)) == 0) {
      uVar5 = 1;
    }
    else {
      uVar3 = recovered_100030c8(0xd8,0xffffffff);
      bVar2 = recovered_10003018(0x100,&local_1c);
      uVar5 = 0;
      uVar4 = 0;
      if (bVar2) {
        uVar4 = recovered_100030c8(0x100,local_1c & 0xfffffffd);
        uVar4 = uVar4 & uVar3;
      }
      bVar2 = recovered_10003018(0x400,&local_20);
      if (bVar2) {
        uVar5 = recovered_100030c8(0x400,local_20 & 0xfffffffd);
        uVar5 = uVar5 & uVar4;
      }
      recovered_10003018(0xc0,&local_24);
      recovered_100033c8(*(int **)(((uintptr_t)pf_module_state+0x8410U)));
      recovered_100031b8(*(int **)(((uintptr_t)pf_module_state+0x8410U)),10);
      bVar2 = recovered_10003018(0x100,&local_1c);
      if (((bVar2) && ((local_1c & 2) == 0)) && (bVar2 = recovered_10003018(0x400,&local_20), bVar2)
         ) {
        if ((local_20 & 2) != 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    if (*(char *)(((uintptr_t)pf_module_state+0x841bU)) != '\0') {
      uVar3 = (uint)*(ushort *)(((uintptr_t)pf_module_state+0x841cU));
      if (uVar5 == 0) {
        uVar3 = uVar3 & 0xfffffffb;
      }
      recovered_10003148(*(int **)(((uintptr_t)pf_module_state+0x8410U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0x8418U)),
                         (uint)*(byte *)(((uintptr_t)pf_module_state+0x8419U)),(uint)*(byte *)(((uintptr_t)pf_module_state+0x841aU)),
                         uVar3);
      *(undefined1 *)(((uintptr_t)pf_module_state+0x841bU)) = 0;
    }
  }
  return;
}

#undef DAT_10002ff0
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

void recovered_10002ff4(undefined1 *param_1,int param_2)

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


#undef DAT_100030c0
#define DAT_100030c0 (*(int *)(0x100030c0U))
#undef DAT_100030c4
#define DAT_100030c4 (*(int *)(0x100030c4U))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003018
 */

bool recovered_10003018(int param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  code *pcVar3;

  local_14 = 0;
  piVar2 = *(int **)(((uintptr_t)pf_module_state + 0x8410U));
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
  if (*(int *)(((uintptr_t)pf_module_state + 0x8414U)) == 0 || piVar2 == (int *)0x0) {
    return false;
  }
  if (*piVar2 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL})) {
    return false;
  }
  if ((uint)piVar2[2] < 0xc0) {
    if ((uint)piVar2[2] < 0x6c) {
      return false;
    }
  }
  else {
    pcVar3 = (code *)piVar2[0x2f];
    if (pcVar3 != (code *)0x0) goto LAB_1000309c;
  }
  pcVar3 = (code *)piVar2[0x1a];
  if (pcVar3 == (code *)0x0) {
    return false;
  }
LAB_1000309c:
  iVar1 = (*pcVar3)(*(int *)(((uintptr_t)pf_module_state + 0x8414U)) + param_1,4,&local_14);
  if (iVar1 != 0) {
    *param_2 = local_14;
  }
  return iVar1 != 0;
}

#undef DAT_100030c0
#undef DAT_100030c4
#undef local_14

#undef DAT_10003140
#define DAT_10003140 (*(int *)(0x10003140U))
#undef DAT_10003144
#define DAT_10003144 (*(int *)(0x10003144U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c8
 */

undefined4 recovered_100030c8(int param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;

  piVar3 = (int *)(((uintptr_t)pf_module_state + 0x840cU));
  iVar2 = *(int *)(((uintptr_t)pf_module_state + 0x8414U));
  if (iVar2 != 0) {
    piVar3 = *(int **)(((uintptr_t)pf_module_state + 0x8410U));
  }
  if ((iVar2 != 0 && piVar3 != (int *)0x0) && (*piVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)piVar3[2] < 0xc4) {
      if ((uint)piVar3[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)piVar3[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10003130;
    }
    UNRECOVERED_JUMPTABLE = (code *)piVar3[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10003130:
                    /* WARNING: Could not recover jumptable at 0x1000313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(iVar2 + param_1,4,param_2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003140
#undef DAT_10003144

#undef DAT_100031b4
#define DAT_100031b4 (*(int *)(0x100031b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003148
 */

undefined4
recovered_10003148(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100031b4

#undef DAT_100031f4
#define DAT_100031f4 (*(int *)(0x100031f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b8
 */

void recovered_100031b8(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100031ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_100031f4

#undef DAT_1000326c
#define DAT_1000326c (*(uint8_t * *)(0x1000326cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

undefined4
recovered_100031f8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5
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

#undef DAT_1000326c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

void recovered_10003270(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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


#undef DAT_100032f8
#define DAT_100032f8 (*(int *)(0x100032f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b4
 */

void recovered_100032b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100032f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_100032f8

#undef DAT_10003388
#define DAT_10003388 (*(int *)(0x10003388U))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032fc
 */

undefined4 recovered_100032fc(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = recovered_100031f8(*(undefined4 **)(((uintptr_t)pf_module_state + 0x8410U)),
                             *(undefined4 *)(((uintptr_t)pf_module_state + 0x8420U)),param_3,0x80,(int)&local_18,
                             &local_1c);
  if ((((iVar1 != 0) && ((local_18 & 0x7f) == 0)) &&
      (iVar1 = recovered_100030c8(param_1,local_18), iVar1 != 0)) &&
     (iVar1 = recovered_100030c8(param_2,local_1c), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10003388
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000338c
 */

void recovered_1000338c(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002b20(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10003400
#define DAT_10003400 (*(int *)(0x10003400U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033c8
 */

void recovered_100033c8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100033f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10003400

#undef DAT_1000361c
#define DAT_1000361c (*(int *)(0x1000361cU))
#undef DAT_10003620
#define DAT_10003620 (*(int *)(0x10003620U))
#undef DAT_10003624
#define DAT_10003624 (*(int *)(0x10003624U))
#undef DAT_10003628
#define DAT_10003628 (*(int *)(0x10003628U))
#undef DAT_1000362c
#define DAT_1000362c (*(int *)(0x1000362cU))
#undef DAT_10003630
#define DAT_10003630 (*(int *)(0x10003630U))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003404
 */

undefined4 recovered_10003404(undefined1 *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint extraout_r0 = 0;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;

  local_24 = 0;
  recovered_100037ec();
  uVar3 = extraout_r0;
  if (param_3 != (uint *)0x0) {
    uVar3 = 0;
  }
  uVar5 = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3;
  }
  iVar1 = (*(uint32_t *)(uint32_t[]){0x8ebcULL});
  puVar7 = (undefined4 *)(((uintptr_t)pf_module_state + 0x840cU));
  if (param_1 != (undefined1 *)0x0) {
    uVar3 = *(uint *)(((uintptr_t)pf_module_state + 0x8424U));
  }
  if (param_1 != (undefined1 *)0x0 && uVar3 != 0) {
    iVar4 = *(int *)(((uintptr_t)pf_module_state + 0x8430U));
    iVar6 = ((uintptr_t)pf_module_state + 0x20cU);
    recovered_100032b4(*(int **)(((uintptr_t)pf_module_state + 0x8410U)),
                       *(undefined4 *)(((uintptr_t)pf_module_state + 0x8420U)),iVar6,0x80);
    iVar6 = iVar6 + iVar4 * 0x10;
    uVar5 = 0;
    if ((*(byte *)(iVar6 + 0xc) & 1) != 0) {
      local_24 = 0;
      iVar4 = recovered_100030c8(0x100,*(uint *)(((uintptr_t)pf_module_state+0x842cU)) & 0xfffffffd);
      if (iVar4 != 0) {
        recovered_100033c8(*(int **)(((uintptr_t)pf_module_state+0x8410U)));
        recovered_100031b8(*(int **)(((uintptr_t)pf_module_state+0x8410U)),10);
        bVar2 = recovered_10003018(0x100,&local_24);
        if ((bVar2) && ((local_24 & 2) == 0)) {
          recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                             ((uintptr_t)pf_module_state + 0x20cU),0x80);
          if ((*(byte *)(iVar6 + 0xc) & 1) != 0) {
            uVar3 = (uint)*(ushort *)(iVar6 + 8);
            if (uVar3 < 0x801) {
              recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                                 ((uintptr_t)pf_module_state + 0x30cU) + *(int *)(((uintptr_t)pf_module_state+0x8430U)) * 0x800,
                                 0x800);
              uVar5 = 0;
              if (((((*(byte *)(iVar6 + 0xc) & 2) != 0) && (uVar3 <= param_2)) && (0xd < uVar3)) &&
                 (*(char *)(iVar6 + 0xd) == '\0')) {
                recovered_1000388c(param_1,(undefined1 *)
                                           (((uintptr_t)pf_module_state + 0x30cU) +
                                           *(int *)(((uintptr_t)pf_module_state+0x8430U)) * 0x800),uVar3);
                uVar5 = 1;
                if (param_3 != (uint *)0x0) {
                  *param_3 = uVar3;
                }
              }
              *(undefined2 *)(iVar6 + 0xc) = 0;
              recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                                 ((uintptr_t)pf_module_state + 0x20cU),0x80);
              iVar4 = recovered_100030c8(0x2818,*(undefined4 *)(((uintptr_t)pf_module_state+0x8430U)));
              if ((iVar4 != 0) && (uVar3 = recovered_10003828(), uVar3 != 0)) {
                *(uint *)(((uintptr_t)pf_module_state+0x8430U)) = *(int *)(((uintptr_t)pf_module_state+0x8430U)) + 1U & 7;
                goto LAB_1000344c;
              }
            }
            recovered_10002e90();
            uVar5 = 0;
            goto LAB_1000344c;
          }
          uVar3 = recovered_10003828();
          if (uVar3 != 0) goto LAB_1000344c;
        }
      }
      recovered_10002e90();
    }
  }
LAB_1000344c:
  DataMemoryBarrier(0xb);
  *puVar7 = 0;
  return uVar5;
}

#undef DAT_1000361c
#undef DAT_10003620
#undef DAT_10003624
#undef DAT_10003628
#undef DAT_1000362c
#undef DAT_10003630
#undef local_24

#undef DAT_100037d8
#define DAT_100037d8 (*(int *)(0x100037d8U))
#undef DAT_100037dc
#define DAT_100037dc (*(int *)(0x100037dcU))
#undef DAT_100037e0
#define DAT_100037e0 (*(int *)(0x100037e0U))
#undef DAT_100037e4
#define DAT_100037e4 (*(int *)(0x100037e4U))
#undef DAT_100037e8
#define DAT_100037e8 (*(int *)(0x100037e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003634
 */

undefined4 recovered_10003634(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;

  recovered_100037ec();
  iVar1 = (*(uint32_t *)(uint32_t[]){0x8c94ULL});
  iVar2 = -0x7f3;
  puVar6 = (undefined4 *)(((uintptr_t)pf_module_state + 0x840cU));
  uVar7 = 0;
  if (0xfffff80c < param_2 - 0x801U) {
    if (param_1 != (undefined1 *)0x0) {
      iVar2 = *(int *)(((uintptr_t)pf_module_state + 0x8424U));
    }
    if (param_1 != (undefined1 *)0x0 && iVar2 != 0) {
      iVar2 = 999;
      iVar8 = ((uintptr_t)pf_module_state + 0x430cU);
      iVar10 = iVar8 + *(int *)(((uintptr_t)pf_module_state + 0x8434U)) * 0x10;
      while (recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                                iVar8,0x80), (*(byte *)(iVar10 + 0xc) & 1) == 0) {
        if (iVar2 == 0) goto LAB_100037a4;
        recovered_100031b8(*(int **)(((uintptr_t)pf_module_state+0x8410U)),100);
        iVar2 = iVar2 + -1;
      }
      puVar5 = (undefined1 *)(((uintptr_t)pf_module_state + 0x440cU) + *(int *)(((uintptr_t)pf_module_state+0x8434U)) * 0x800);
      recovered_1000388c(puVar5,param_1,param_2);
      uVar4 = *(undefined4 *)(((uintptr_t)pf_module_state+0x8420U));
      *(undefined4 *)(iVar10 + 10) = 0xb00;
      *(char *)(iVar10 + 9) = (char)((uint)param_2 >> 8);
      uVar7 = 0;
      piVar3 = *(int **)(((uintptr_t)pf_module_state+0x8410U));
      *(undefined2 *)(iVar10 + 0xe) = 0;
      *(char *)(iVar10 + 8) = (char)param_2;
      recovered_100032b4(piVar3,uVar4,puVar5,param_2);
      recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),
                         ((uintptr_t)pf_module_state + 0x430cU),0x80);
      uVar9 = *(int *)(((uintptr_t)pf_module_state+0x8434U)) + 1U & 7;
      iVar2 = recovered_100030c8(0x3818,uVar9);
      if (iVar2 == 0) {
        recovered_10002e90();
      }
      else {
        iVar8 = ((uintptr_t)pf_module_state + 0x430cU);
        for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
          recovered_100032b4(*(int **)(((uintptr_t)pf_module_state+0x8410U)),*(undefined4 *)(((uintptr_t)pf_module_state+0x8420U)),iVar8
                             ,0x80);
          if ((*(byte *)(iVar10 + 0xc) & 1) != 0) {
            *(uint *)(((uintptr_t)pf_module_state+0x8434U)) = uVar9;
            uVar7 = 1;
            goto LAB_100037c4;
          }
          recovered_100031b8(*(int **)(((uintptr_t)pf_module_state+0x8410U)),100);
        }
LAB_100037a4:
        recovered_10002e90();
        uVar7 = 0;
      }
    }
  }
LAB_100037c4:
  DataMemoryBarrier(0xb);
  *puVar6 = 0;
  return uVar7;
}

#undef DAT_100037d8
#undef DAT_100037dc
#undef DAT_100037e0
#undef DAT_100037e4
#undef DAT_100037e8

#undef DAT_10003824
#define DAT_10003824 (*(int *)(0x10003824U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037ec
 */

void recovered_100037ec(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(((uintptr_t)pf_module_state + 0x840cU));
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

#undef DAT_10003824

#undef DAT_10003888
#define DAT_10003888 (*(int *)(0x10003888U))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003828
 */

uint recovered_10003828(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x8ab8ULL});
  uVar4 = 0;
  local_14 = 0;
  iVar3 = recovered_100030c8(0x100,*(undefined4 *)(((uintptr_t)pf_module_state + 0x842cU)));
  if (iVar3 != 0) {
    recovered_100033c8(*(int **)(((uintptr_t)pf_module_state+0x8410U)));
    bVar2 = recovered_10003018(0x100,&local_14);
    uVar4 = (uint)bVar2 & (local_14 & 2) >> 1;
  }
  return uVar4;
}

#undef DAT_10003888
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000388c
 */

void recovered_1000388c(undefined1 *param_1,undefined1 *param_2,int param_3)

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
 * Address: 0x100038b8
 */

uint recovered_100038b8(uint param_1,uint param_2)

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
 * Address: 0x10003908
 */

uint recovered_10003908(uint param_1,uint param_2)

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
 * Address: 0x10003940
 */

uint recovered_10003940(uint param_1,uint param_2)

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
 * Address: 0x100039b0
 */

uint recovered_100039b0(uint param_1,uint param_2)

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
 * Address: 0x10003a18
 */

undefined8 recovered_10003a18(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003afc
 */

undefined8 recovered_10003afc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003b7c
 */

undefined8 recovered_10003b7c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003c9c
 */

undefined8 recovered_10003c9c(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003dd8
#define DAT_10003dd8 (*(double *)(0x10003dd8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d58
 */

undefined8 recovered_10003d58(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003dd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

undefined8 recovered_10003de0(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003d58(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003d58(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e2c
 */

undefined8 recovered_10003e2c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10003d58(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x10cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e3c
 */

void recovered_10003e3c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0xf4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e4c
 */

double recovered_10003e4c(uint param_1,uint param_2)

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
 * Address: 0x10003e94
 */

double recovered_10003e94(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10003e4c(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10003e4c(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ebc
 */

float recovered_10003ebc(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003e4c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ed8
 */

float recovered_10003ed8(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003e94(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
