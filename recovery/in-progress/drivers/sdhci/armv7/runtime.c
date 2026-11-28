/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10000cb4
#define DAT_10000cb4 (*(uint32_t *)(0x10000cb4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca8
 */

void * recovered_10000ca8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4258U));
}

#undef DAT_10000cb4

#undef DAT_10000f98
#define DAT_10000f98 (*(int *)(0x10000f98U))
#undef DAT_10000f9c
#define DAT_10000f9c (*(uint64_t *)(0x10000f9cU))
#undef DAT_10000fa4
#define DAT_10000fa4 (*(uint64_t *)(0x10000fa4U))
#undef DAT_10000fac
#define DAT_10000fac (*(int *)(0x10000facU))
#undef DAT_10000fb0
#define DAT_10000fb0 (*(int *)(0x10000fb0U))
#undef DAT_10000fb4
#define DAT_10000fb4 (*(int *)(0x10000fb4U))
#undef DAT_10000fb8
#define DAT_10000fb8 (*(int *)(0x10000fb8U))
#undef DAT_10000fbc
#define DAT_10000fbc (*(int *)(0x10000fbcU))
#undef DAT_10000fc0
#define DAT_10000fc0 (*(int *)(0x10000fc0U))
#undef DAT_10000fc4
#define DAT_10000fc4 (*(int *)(0x10000fc4U))
#undef DAT_10000fc8
#define DAT_10000fc8 (*(int *)(0x10000fc8U))
#undef DAT_10000fcc
#define DAT_10000fcc (*(int *)(0x10000fccU))
#undef DAT_10000fd0
#define DAT_10000fd0 (*(int *)(0x10000fd0U))
#undef DAT_10000fd4
#define DAT_10000fd4 (*(int *)(0x10000fd4U))
#undef DAT_10000fd8
#define DAT_10000fd8 (*(int *)(0x10000fd8U))
#undef DAT_10000fdc
#define DAT_10000fdc (*(int *)(0x10000fdcU))
#undef DAT_10000fe0
#define DAT_10000fe0 (*(int *)(0x10000fe0U))
#undef DAT_10000fe4
#define DAT_10000fe4 (*(int *)(0x10000fe4U))
#define local_210 (*(byte (*)[528])(pf_stack_frame + 16))
#define local_20c (*(int *)(pf_stack_frame + 20))
#define local_208 (*(int *)(pf_stack_frame + 24))
#define local_204 (*(int *)(pf_stack_frame + 28))
#define local_200 (*(int *)(pf_stack_frame + 32))
#define local_1fc (*(int *)(pf_stack_frame + 36))
#define local_1f8 (*(int *)(pf_stack_frame + 40))
#define uStack_1f0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_1f4 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_1ec (*(undefined4 *)(pf_stack_frame + 52))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_1e8 (*(undefined4 *)(pf_stack_frame + 56))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_1cc (*(int *)(pf_stack_frame + 84))
#define uStack_1d8 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1c4 (*(undefined1 (*)[452])(pf_stack_frame + 92))
#define auStack_184 (*(undefined1 (*)[388])(pf_stack_frame + 156))
#define auStack_144 (*(undefined1 (*)[324])(pf_stack_frame + 220))
#define auStack_e4 (*(undefined1 (*)[228])(pf_stack_frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb8
 */

uint recovered_10000cb8(void *api)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;

  iVar4 = (*(uint32_t *)(uint32_t[]){0x3558ULL});
  iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if ((((api != (void *)0x0) && (*(int *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) && (0xf7 < *(uint *)((int)api + 8))) {
    puVar5 = (undefined4 *)(((uintptr_t)pf_module_state + 0x4c0U));
    *(undefined4 *)(((uintptr_t)pf_module_state + 0x4c8U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x4c4U)) = 0;
    *puVar5 = api;
    recovered_10000fe8((undefined1 *)(((uintptr_t)pf_module_state + 0x270U)),0xd0);
    recovered_10000fe8((undefined1 *)(((uintptr_t)pf_module_state + 0x340U)),0x180);
    if (((*(int *)api == iVar2) && (0x5f < *(uint *)((int)api + 8))) &&
       (*(int *)((int)api + 0x5c) != 0)) {
      for (uVar1 = 0; uVar1 != 0x100; uVar1 = uVar1 + 1) {
        for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
          iVar2 = recovered_10002350(api,uVar1 & 0xff,uVar6 & 0xff,0,(undefined1 *)&local_1e0);
          if (iVar2 != 0) {
            recovered_1000100c((byte *)&local_1e0);
            if (((int8_t)PF_PART1(uStack_1d8, 4)) < '\0') {
              for (uVar7 = 1; uVar7 != 8; uVar7 = uVar7 + 1) {
                iVar2 = recovered_10002350(api,uVar1 & 0xff,uVar6 & 0xff,uVar7 & 0xff,local_210);
                if (iVar2 != 0) {
                  recovered_1000100c(local_210);
                }
              }
            }
          }
        }
      }
    }
    iVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (*(int *)(((uintptr_t)pf_module_state + 0x4c8U)) != 0) {
      uStack_1f0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      uStack_1ec = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      uStack_1e8 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      local_1f4 = 0;
      local_1e4 = 0;
      local_1f8 = ((uintptr_t)&recovered_10002248);
      local_1fc = ((uintptr_t)&recovered_100021c0);
      local_200 = ((uintptr_t)&recovered_100021a4);
      local_204 = ((uintptr_t)&recovered_10002188);
      local_208 = ((uintptr_t)&recovered_100020f0);
      local_210[0] = 3;
      local_210[1] = 0;
      local_210[2] = 0;
      local_210[3] = 0;
      local_20c = *(int *)(((uintptr_t)pf_module_state + 0x4c8U));
      recovered_10000fe8((undefined1 *)&local_1e0,0x1bc);
      local_1e0 = (*(uint64_t *)(uint64_t[]){0x1000001bcULL});
      uStack_1d8 = (*(uint64_t *)(uint64_t[]){0x1300000011ULL});
      local_1cc = ((uintptr_t)&recovered_100035d0);
      recovered_10003024(auStack_1c4,0x40,(char *)(((uintptr_t)pf_module_state + 0x12fU)));
      recovered_10003024(auStack_184,0x40,(char *)(((uintptr_t)pf_module_state + 0x143U)));
      recovered_10003024(auStack_144,0x60,(char *)(((uintptr_t)pf_module_state + 0x151U)));
      recovered_10003024(auStack_e4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x164U)));
      piVar3 = *(int **)(((uintptr_t)pf_module_state + 0x4c0U));
      if (((piVar3 != (int *)0x0) && (*piVar3 == iVar2)) &&
         (((0xef < (uint)piVar3[2] &&
           (((((code *)piVar3[0x3b] != (code *)0x0 &&
              (iVar4 = (*(code *)piVar3[0x3b])(&local_1e0), iVar4 != 0)) && (*(int *)api == iVar2))
            && ((0xd3 < *(uint *)((int)api + 8) && (*(code **)((int)api + 0xd0) != (code *)0x0))))))
          && (iVar2 = (**(code **)((int)api + 0xd0))(local_210), iVar2 != 0)))) {
        return 1;
      }
    }
    recovered_1000206c();
  }
  return 0;
}

#undef DAT_10000f98
#undef DAT_10000f9c
#undef DAT_10000fa4
#undef DAT_10000fac
#undef DAT_10000fb0
#undef DAT_10000fb4
#undef DAT_10000fb8
#undef DAT_10000fbc
#undef DAT_10000fc0
#undef DAT_10000fc4
#undef DAT_10000fc8
#undef DAT_10000fcc
#undef DAT_10000fd0
#undef DAT_10000fd4
#undef DAT_10000fd8
#undef DAT_10000fdc
#undef DAT_10000fe0
#undef DAT_10000fe4
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef uStack_1f0
#undef local_1f4
#undef uStack_1ec
#undef local_1e4
#undef uStack_1e8
#undef local_1e0
#undef local_1cc
#undef uStack_1d8
#undef auStack_1c4
#undef auStack_184
#undef auStack_144
#undef auStack_e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe8
 */

void recovered_10000fe8(undefined1 *param_1,int param_2)

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


#undef DAT_10001fd8
#define DAT_10001fd8 (*(int *)(0x10001fd8U))
#undef DAT_10001fdc
#define DAT_10001fdc (*(uint *)(0x10001fdcU))
#undef DAT_10001fe0
#define DAT_10001fe0 (*(uint *)(0x10001fe0U))
#undef DAT_10001fe4
#define DAT_10001fe4 (*(int *)(0x10001fe4U))
#undef DAT_10001fe8
#define DAT_10001fe8 (*(int *)(0x10001fe8U))
#undef DAT_10001fec
#define DAT_10001fec (*(int *)(0x10001fecU))
#undef DAT_10001ff0
#define DAT_10001ff0 (*(int *)(0x10001ff0U))
#undef DAT_10001ff4
#define DAT_10001ff4 (*(int *)(0x10001ff4U))
#undef DAT_10001ff8
#define DAT_10001ff8 (*(int *)(0x10001ff8U))
#undef DAT_10001ffc
#define DAT_10001ffc (*(int *)(0x10001ffcU))
#undef DAT_10002000
#define DAT_10002000 (*(int *)(0x10002000U))
#undef DAT_10002004
#define DAT_10002004 (*(int *)(0x10002004U))
#undef DAT_10002008
#define DAT_10002008 (*(int *)(0x10002008U))
#undef DAT_1000200c
#define DAT_1000200c (*(int *)(0x1000200cU))
#undef DAT_10002010
#define DAT_10002010 (*(int *)(0x10002010U))
#undef DAT_10002014
#define DAT_10002014 (*(int *)(0x10002014U))
#undef DAT_10002018
#define DAT_10002018 (*(int *)(0x10002018U))
#undef DAT_1000201c
#define DAT_1000201c (*(int *)(0x1000201cU))
#undef DAT_10002020
#define DAT_10002020 (*(int *)(0x10002020U))
#undef DAT_10002024
#define DAT_10002024 (*(int *)(0x10002024U))
#undef DAT_10002028
#define DAT_10002028 (*(int *)(0x10002028U))
#undef DAT_1000202c
#define DAT_1000202c (*(int *)(0x1000202cU))
#undef DAT_10002030
#define DAT_10002030 (*(int *)(0x10002030U))
#undef DAT_10002034
#define DAT_10002034 (*(int *)(0x10002034U))
#undef DAT_10002038
#define DAT_10002038 (*(int *)(0x10002038U))
#undef DAT_1000203c
#define DAT_1000203c (*(int *)(0x1000203cU))
#undef DAT_10002040
#define DAT_10002040 (*(int *)(0x10002040U))
#undef DAT_10002044
#define DAT_10002044 (*(int *)(0x10002044U))
#undef DAT_10002048
#define DAT_10002048 (*(int *)(0x10002048U))
#undef DAT_1000204c
#define DAT_1000204c (*(int *)(0x1000204cU))
#undef DAT_10002050
#define DAT_10002050 (*(int *)(0x10002050U))
#undef DAT_10002054
#define DAT_10002054 (*(int *)(0x10002054U))
#undef DAT_10002058
#define DAT_10002058 (*(int *)(0x10002058U))
#undef DAT_1000205c
#define DAT_1000205c (*(int *)(0x1000205cU))
#undef DAT_10002060
#define DAT_10002060 (*(int *)(0x10002060U))
#undef DAT_10002064
#define DAT_10002064 (*(int *)(0x10002064U))
#undef DAT_10002068
#define DAT_10002068 (*(int *)(0x10002068U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_4b8 (*(uint *)(pf_stack_frame + 24))
#define local_4a0 (*(uint *)(pf_stack_frame + 48))
#define local_49c (*(uint *)(pf_stack_frame + 52))
#define local_498 (*(uint *)(pf_stack_frame + 56))
#define local_494 (*(uint *)(pf_stack_frame + 60))
#define local_490 (*(uint *)(pf_stack_frame + 64))
#define local_48c (*(uint *)(pf_stack_frame + 68))
#define local_488 (*(uint *)(pf_stack_frame + 72))
#define local_484 (*(undefined4 *)(pf_stack_frame + 76))
#define local_479 (*(byte *)(pf_stack_frame + 87))
#define local_478 (*(int (*)[286])(pf_stack_frame + 88))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 1100))
#define iStack_480 (*(int *)(pf_stack_frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000100c
 */

void recovered_1000100c(byte *param_1)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  int extraout_r0_05 = 0;
  int extraout_r0_06 = 0;
  int extraout_r0_07 = 0;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r1 = 0;
  uint uVar12;
  uint uVar13;
  undefined4 extraout_r2 = 0;
  uint uVar14;
  undefined4 extraout_r2_00 = 0;
  undefined4 uVar15;
  undefined4 extraout_r2_01 = 0;
  uint extraout_r3 = 0;
  uint extraout_r3_00 = 0;
  uint extraout_r3_01 = 0;
  code *extraout_r3_02;
  code *pcVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  byte *pbVar20;
  int *piVar21;
  char *pcVar22;
  uint uVar23;
  uint *puVar24;
  bool bVar25;

  iVar6 = (*(uint32_t *)(uint32_t[]){0x3204ULL});
  bVar1 = param_1[8];
  bVar25 = bVar1 == 8;
  if (bVar25) {
    bVar1 = param_1[9];
  }
  if ((((bVar25 && bVar1 == 5) && (param_1[10] < 2)) && ((param_1[0xc] & 0x7f) == 0)) &&
     (iVar17 = ((uintptr_t)pf_module_state + 0x4c0U), *(uint *)(((uintptr_t)pf_module_state + 0x4c4U)) < 4)) {
    uVar3 = *(uint *)(((uintptr_t)pf_module_state + 0x4c8U));
    iVar4 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,
                               (uint)param_1[1],(uint)param_1[2],0x40,1,(int)&local_49c);
    if ((iVar4 != 0) && (uVar23 = (local_49c & 0x7f) >> 4, (local_49c & 0x88) == 0)) {
      uVar5 = local_49c & 7;
      bVar25 = 4 < uVar5;
      if (uVar5 < 6) {
        bVar25 = 6 - uVar5 <= uVar23;
      }
      if (!bVar25) {
        pbVar20 = (byte *)(*(int *)(((uintptr_t)pf_module_state+0x4c4U)) * 0x34 + ((uintptr_t)pf_module_state + 0x270U));
        recovered_10000fe8(pbVar20,0x34);
        recovered_10003dd0(pbVar20,param_1,0x2c);
        if ((param_1[0x12] & 0x10) != 0) {
          iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,
                                     (uint)param_1[1],(uint)param_1[2],0x34,1,(int)&local_484);
          if (iVar6 == 0) {
            return;
          }
          bVar25 = false;
          for (uVar18 = 0; (local_484 != 0 && (uVar18 < 0x30)); uVar18 = uVar18 + 1) {
            if ((0xbc < local_484 - 0x40) ||
               (((local_484 & 3) != 0 ||
                (iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),
                                            (uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                                            local_484 & 0xffff,2,(int)local_84), iVar6 == 0))))
            goto LAB_100011e4;
            if ((local_84[0] & 0xff) == 1) {
              if (local_484 < 0xf9) {
                iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),
                                           (uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                                           local_484 + 4 & 0xffff,2,(int)&local_488);
                if ((iVar6 != 0) &&
                   (iVar6 = recovered_10002588(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,
                                               (uint)param_1[1],(uint)param_1[2],
                                               (local_484 & 0xffff) + 4 & 0xffff,
                                               local_488 & 0xffff7ffc), iVar6 != 0)) {
                  recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),10000);
                  iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),
                                             (uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                                             (local_484 & 0xffff) + 4 & 0xffff,2,(int)&local_488);
                  bVar25 = iVar6 != 0 && (local_488 & 3) == 0;
                }
              }
              goto LAB_100011e4;
            }
            local_484 = local_84[0] >> 8;
          }
          bVar25 = local_484 == 0;
LAB_100011e4:
          iVar17 = ((uintptr_t)pf_module_state + 0x4c0U);
          if (!bVar25) {
            return;
          }
        }
        iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,
                                   (uint)param_1[1],(uint)param_1[2],4,2,(int)(pbVar20 + 0x2c));
        if (iVar6 != 0) {
          pbVar20[0x30] = 1;
          pbVar20[0x31] = 0;
          pbVar20[0x32] = 0;
          pbVar20[0x33] = 0;
          local_4a0 = *(uint *)(pbVar20 + 0x2c) & 0xfffffffb | 0x402;
          iVar6 = recovered_10002588(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,
                                     (uint)param_1[1],(uint)param_1[2],4,local_4a0);
          if (((iVar6 != 0) &&
              (iVar6 = recovered_10002514(*(undefined4 **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1
                                          ,(uint)param_1[1],(uint)param_1[2],4,2,(int)&local_4a0),
              iVar6 != 0)) && ((local_4a0 & 0x406) == 0x402)) {
            uVar18 = 0;
LAB_100012d4:
            uVar7 = *(uint *)(iVar17 + 8);
            bVar25 = uVar23 <= uVar18;
            if (uVar18 <= uVar23) {
              bVar25 = 7 < uVar7;
            }
            if (!bVar25) {
              puVar24 = (uint *)(((uintptr_t)pf_module_state + 0x340U) + uVar7 * 0x30);
              recovered_10000fe8((undefined1 *)puVar24,0x30);
              puVar24[1] = *(uint *)(iVar17 + 4);
              puVar24[2] = uVar18;
              piVar21 = *(int **)(((uintptr_t)pf_module_state + 0x4c0U));
              local_84[0] = 0;
              uVar7 = uVar18 + uVar5;
              if (((4 < uVar7 - 1) || ((*(uint *)(param_1 + (uVar7 - 1) * 4 + 0x14) & 7) != 4)) &&
                 ((uVar8 = *(uint *)(param_1 + uVar7 * 4 + 0x14), uVar8 != 0 && ((uVar8 & 1) == 0)))
                 ) {
                local_488 = uVar8;
                recovered_10002514(piVar21,(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                                   uVar7 * 4 + 0x10 & 0xffff,4,(int)&local_488);
                uVar8 = 0;
                if ((local_488 & 7) == 4) {
                  if (4 < uVar7) goto LAB_1000150c;
                  local_84[0] = *(uint *)(param_1 + uVar7 * 4 + 0x18);
                  recovered_10002514(piVar21,(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                                     uVar7 * 4 + 0x14 & 0xffff,4,(int)local_84);
                  uVar8 = local_84[0];
                }
                uVar7 = 0xfffffffc;
                if ((local_488 & 1) == 0) {
                  uVar7 = 0xfffffff0;
                }
                uVar7 = uVar7 & local_488;
                if (uVar7 == 0 && uVar8 == 0) goto LAB_1000150c;
                *puVar24 = 0;
                local_484 = 0;
                if ((piVar21 == (int *)0x0) || (*piVar21 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) goto LAB_1000150c;
                if ((0xbb < (uint)piVar21[2]) && ((code *)piVar21[0x2e] != (code *)0x0)) {
                  iVar6 = (*(code *)piVar21[0x2e])(uVar7,uVar8,0x100,puVar24);
                  if (iVar6 != 0) goto LAB_100014b0;
                  goto LAB_1000150c;
                }
                if ((((uVar8 != 0) || ((uint)piVar21[2] < 0x68)) ||
                    ((code *)piVar21[0x19] == (code *)0x0)) ||
                   (iVar6 = (*(code *)piVar21[0x19])(uVar7,0,0x100,&local_484), iVar6 == 0))
                goto LAB_1000150c;
                *puVar24 = local_484;
LAB_100014b0:
                iVar6 = recovered_100027e0((int *)puVar24,1);
                if (iVar6 != 0) {
                  iVar6 = recovered_10002880((int *)puVar24,0xfe,(int *)0x2,(int *)&local_494);
                  uVar7 = extraout_r1;
                  uVar8 = 0;
                  if (iVar6 != 0) {
                    uVar7 = 0xffff;
                    uVar8 = local_494;
                  }
                  if (((iVar6 != 0 && uVar8 != uVar7) &&
                      (iVar6 = recovered_10002880((int *)puVar24,0x40,(int *)&UndefinedInstruction,
                                                  (int *)&local_490), iVar6 != 0)) &&
                     (local_490 != 0xffffffff && (local_490 & 0x1000000) != 0)) {
                    puVar24[3] = local_494 & 0xff;
                    uVar7 = 0x3f;
                    if (1 < (local_494 & 0xff)) {
                      uVar7 = 0xff;
                    }
                    puVar24[4] = (uVar7 & local_490 >> 8) * 1000000;
                    recovered_1000296c((int *)puVar24,0x38,4,0);
                    if ((((extraout_r0 != 0) &&
                         (recovered_1000296c((int *)puVar24,0x34,4,0xffff80f3), extraout_r0_00 != 0)
                         ) && ((recovered_1000296c((int *)puVar24,0x30,4,0xffffffff),
                               extraout_r0_01 != 0 &&
                               ((recovered_1000296c((int *)puVar24,0x29,1,0), extraout_r0_02 != 0 &&
                                (recovered_1000296c((int *)puVar24,0x28,1,0), extraout_r0_03 != 0)))
                               ))) &&
                       ((puVar24[3] < 2 ||
                        (recovered_1000296c((int *)puVar24,0x3e,2,0), extraout_r0_04 != 0)))) {
                      recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),10000);
                      recovered_1000296c((int *)puVar24,0x29,1,0xe);
                      if ((extraout_r0_05 != 0) &&
                         (recovered_1000296c((int *)puVar24,0x29,1,0xf), extraout_r0_06 != 0)) {
                        recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),10000);
                        iVar6 = 999;
                        while( true ) {
                          iVar4 = recovered_10002880((int *)puVar24,0x24,
                                                     (int *)&UndefinedInstruction,(int *)&local_498)
                          ;
                          uVar7 = 0;
                          if (iVar4 != 0) {
                            uVar7 = local_498;
                          }
                          if (iVar4 == 0 || uVar7 == 0xffffffff) goto LAB_100014ec;
                          if ((uVar7 & 0x30000) == 0x30000) break;
                          if (iVar6 == 0) goto LAB_100014ec;
                          recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),1000);
                          iVar6 = iVar6 + -1;
                        }
                        iVar6 = recovered_100029ac((int *)puVar24,400000,extraout_r2,extraout_r3);
                        if ((iVar6 != 0) &&
                           (recovered_1000296c((int *)puVar24,0x2e,1,0xe), extraout_r0_07 != 0)) {
                          recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),1000);
                          local_48c = 0;
                          bVar25 = recovered_10002bc0((int *)puVar24,0,0,0,0,0,(int *)0x0);
                          if (bVar25) {
                            bVar25 = recovered_10002bc0((int *)puVar24,8,0x1aa,2,0x18,0,
                                                        (int *)&local_488);
                            if (bVar25) {
                              if ((local_488 & 0xfff) == 0x1aa) {
                                local_4b8 = 0x40300000;
LAB_100017cc:
                                iVar6 = 100;
                                goto LAB_100017d0;
                              }
                            }
                            else if (*(short *)((int)puVar24 + 0x1a) == 1) {
                              iVar6 = recovered_100027e0((int *)puVar24,6);
                              local_4b8 = 0x300000;
                              if (iVar6 != 0) goto LAB_100017cc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_100014ec;
              }
              goto LAB_1000150c;
            }
            if (uVar7 != uVar3) {
              *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
              iVar6 = *(int *)(((uintptr_t)pf_module_state + 0x4c0U));
              recovered_10003024((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x74U)));
              recovered_1000303c((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0xdbU)));
              recovered_10003140((int)local_84,0x60,(uint)*param_1,2);
              pcVar22 = (char *)(((uintptr_t)pf_module_state + 0xddU));
              recovered_1000303c((int)local_84,0x60,pcVar22);
              recovered_10003140((int)local_84,0x60,(uint)param_1[1],2);
              pcVar19 = (char *)(((uintptr_t)pf_module_state + 0xdfU));
              recovered_1000303c((int)local_84,0x60,pcVar19);
              recovered_10003090((int)local_84,0x60,(uint)param_1[2]);
              recovered_10003024((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe1U)))
              ;
              recovered_10003140((int)&local_484,0x400,(uint)*param_1,2);
              recovered_1000303c((int)&local_484,0x400,pcVar22);
              recovered_10003140((int)&local_484,0x400,(uint)param_1[1],2);
              recovered_1000303c((int)&local_484,0x400,pcVar19);
              recovered_10003090((int)&local_484,0x400,(uint)param_1[2]);
              recovered_1000303c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe6U)));
              recovered_10003140((int)&local_484,0x400,(uint)*(ushort *)(param_1 + 4),4);
              recovered_1000303c((int)&local_484,0x400,pcVar22);
              recovered_10003140((int)&local_484,0x400,(uint)*(ushort *)(param_1 + 6),4);
              recovered_1000303c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xe9U)));
              recovered_1000303c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xebU)));
              recovered_1000303c((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x9aU)));
              pcVar16 = extraout_r3_02;
              if (iVar6 != 0) {
                pcVar16 = *(code **)(iVar6 + 0xc);
              }
              if (iVar6 != 0 && pcVar16 != (code *)0x0) {
                (*pcVar16)(local_84,((uintptr_t)pf_module_state + 0x83U),&local_484);
                return;
              }
              return;
            }
          }
          recovered_100025fc(pbVar20);
        }
      }
    }
  }
  return;
LAB_100017d0:
  if (iVar6 == 0) goto LAB_10001884;
  bVar2 = recovered_10002bc0((int *)puVar24,0x37,0,2,0x18,0,(int *)&local_488);
  if (((!bVar2) || ((local_488 & (*(uint32_t *)(uint64_t[]){0x17d7840fff9a008ULL}) + 0x20) != 0x20)) ||
     (bVar2 = recovered_10002bc0((int *)puVar24,0x29,local_4b8,2,0,0,(int *)&local_48c), !bVar2))
  goto LAB_100014ec;
  if (((local_48c & 0x81000000) == 0x80000000) && ((local_48c & 0x300000) != 0)) {
    bVar2 = true;
    goto LAB_10001898;
  }
  recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),10000);
  iVar6 = iVar6 + -1;
  goto LAB_100017d0;
LAB_10001884:
  bVar2 = (local_48c & 0x300000) != 0;
LAB_10001898:
  if ((((bVar2) && ((local_48c & 0x81000000) == 0x80000000)) &&
      ((bVar25 || ((local_48c & 0x40000000) == 0)))) &&
     ((((bVar25 = recovered_10002bc0((int *)puVar24,2,0,1,8,0,(int *)0x0), bVar25 &&
        (bVar25 = recovered_10002bc0((int *)puVar24,3,0,2,0x18,0,(int *)&local_488), bVar25)) &&
       (0xffff < local_488)) && ((local_488 & 0xe000) == 0)))) {
    puVar24[5] = local_488 & 0xffff0000;
    bVar25 = recovered_10002bc0((int *)puVar24,9,local_488 & 0xffff0000,1,8,0,(int *)0x0);
    if (bVar25) {
      iVar6 = 0;
LAB_1000196c:
      uVar7 = local_48c;
      if (iVar6 + 4 != 0x14) goto code_r0x10001978;
      for (iVar6 = 0; iVar6 != 0x10; iVar6 = iVar6 + 4) {
        iVar4 = -iVar6;
        uVar8 = (int)local_478 + iVar4 + -0xc;
        if (iVar6 != 0xc) {
          uVar8 = (uint)*(byte *)((int)local_478 + iVar4 + -1);
        }
        uVar12 = *(int *)((int)local_478 + iVar4) << 8;
        if (iVar6 != 0xc) {
          uVar12 = uVar8 | uVar12;
        }
        *(uint *)((int)local_84 + iVar6) =
             uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
             uVar12 >> 0x18;
      }
      uVar8 = recovered_10002fc4((int)local_84,0x7f,0x7e);
      uVar12 = recovered_10002fc4((int)local_84,0x53,0x50);
      uVar9 = recovered_10002fc4((int)local_84,0x19,0x16);
      uVar10 = recovered_10002fc4((int)local_84,0x5f,0x54);
      uVar11 = recovered_10002fc4((int)local_84,0x67,0x60);
      uVar13 = (uVar11 & 0x7f) >> 3;
      local_4b8 = 0;
      if ((((uVar11 & 0x80) == 0) && ((uVar11 & 7) < 4)) && (uVar13 != 0)) {
        local_4b8 = *(int *)(((uintptr_t)pf_module_state + 0x228U) + (uVar11 & 7) * 4) *
                    (uint)*(byte *)(((uintptr_t)pf_module_state + 0x218U) + uVar13);
      }
      bVar25 = (uVar10 & 4) != 0;
      uVar11 = uVar10;
      if (bVar25) {
        uVar11 = local_4b8;
      }
      if (!bVar25 || uVar11 == 0) goto LAB_100014ec;
      uVar11 = uVar7 & 0x40000000;
      if (uVar8 == 1) {
        if ((uVar11 != 0) && (uVar12 == 9)) {
          uVar11 = recovered_10002fc4((int)local_84,0x45,0x30);
          uVar12 = uVar11 * 0x400 + 0x400;
          uVar11 = (uVar11 >> 0x16) + (uint)(0xfffffbff < uVar11 * 0x400);
          goto LAB_10001b98;
        }
        goto LAB_100014ec;
      }
      if (((uVar8 != 0 || uVar11 != 0) || (uVar12 - 0xc < 0xfffffffd)) ||
         ((9 < uVar12 && (uVar11 = recovered_10002fc4((int)local_84,0x4f,0x4f), uVar11 == 0))))
      goto LAB_100014ec;
      uVar11 = recovered_10002fc4((int)local_84,0x49,0x3e);
      uVar13 = recovered_10002fc4((int)local_84,0x31,0x2f);
      uVar14 = uVar11 + 1;
      iVar6 = uVar12 + uVar13;
      uVar11 = uVar14 >> (0x27U - iVar6 & 0xff) | (uint)(0xfffffffe < uVar11) << (iVar6 - 7U & 0xff)
      ;
      uVar12 = uVar14 << (iVar6 - 7U & 0xff);
      if (-1 < (int)(iVar6 - 0x27U)) {
        uVar11 = uVar14 << (iVar6 - 0x27U & 0xff);
        uVar12 = 0;
      }
LAB_10001b98:
      if (uVar11 != 0) {
        uVar12 = 0xffffffff;
      }
      uVar13 = recovered_10002fc4((int)local_84,0xd,0xc);
      bVar25 = true;
      if (((uVar13 == 0) && ((uVar10 & 0x10) != 0)) && (0xfffffffc < uVar9 - 0xc)) {
        bVar25 = uVar8 == 1 && uVar9 != 9;
      }
      *(byte *)((int)puVar24 + 0x2d) = ((byte)(uVar7 >> 0x18) & 0x7f) >> 6;
      puVar24[10] = local_4b8;
      *(bool *)((int)puVar24 + 0x2e) = bVar25;
      *(bool *)(puVar24 + 0xb) = uVar11 != 0;
      puVar24[9] = uVar12;
      bVar25 = recovered_10002bc0((int *)puVar24,7,puVar24[5],3,0x18,0,(int *)&local_488);
      if (((!bVar25) || ((local_488 & (*(uint32_t *)(uint64_t[]){0x17d7840fff9a008ULL})) != 0)) ||
         ((uVar15 = extraout_r2_00, uVar7 = extraout_r3_00, *(char *)((int)puVar24 + 0x2d) == '\0'
          && ((bVar25 = recovered_10002bc0((int *)puVar24,0x10,0x200,2,0x18,0,(int *)&local_488),
              !bVar25 ||
              (uVar15 = extraout_r2_01, uVar7 = extraout_r3_01, (local_488 & (*(uint32_t *)(uint64_t[]){0x17d7840fff9a008ULL})) != 0)))))
         ) goto LAB_100014ec;
      uVar8 = puVar24[10];
      if ((*(uint32_t *)(uint32_t[]){0x17d7840ULL}) <= puVar24[10]) {
        uVar8 = (*(uint32_t *)(uint32_t[]){0x17d7840ULL});
      }
      iVar6 = recovered_100029ac((int *)puVar24,uVar8,uVar15,uVar7);
      if ((iVar6 == 0) || (iVar6 = recovered_10002d98((int *)puVar24), iVar6 == 0))
      goto LAB_100014ec;
      puVar24[7] = 1;
      *(int *)(iVar17 + 8) = *(int *)(iVar17 + 8) + 1;
      goto LAB_1000150c;
    }
  }
LAB_100014ec:
  recovered_10002650((int)puVar24,(char *)(((uintptr_t)pf_module_state + 0x57U)));
  recovered_10002734((int *)puVar24);
LAB_1000150c:
  uVar18 = uVar18 + 1;
  goto LAB_100012d4;
code_r0x10001978:
  iVar4 = recovered_10002880((int *)puVar24,iVar6 + 0x10,(int *)&UndefinedInstruction,
                             (int *)((int)local_478 + iVar6 + -0xc));
  iVar6 = iVar6 + 4;
  if (iVar4 == 0) goto LAB_100014ec;
  goto LAB_1000196c;
}

#undef DAT_10001fd8
#undef DAT_10001fdc
#undef DAT_10001fe0
#undef DAT_10001fe4
#undef DAT_10001fe8
#undef DAT_10001fec
#undef DAT_10001ff0
#undef DAT_10001ff4
#undef DAT_10001ff8
#undef DAT_10001ffc
#undef DAT_10002000
#undef DAT_10002004
#undef DAT_10002008
#undef DAT_1000200c
#undef DAT_10002010
#undef DAT_10002014
#undef DAT_10002018
#undef DAT_1000201c
#undef DAT_10002020
#undef DAT_10002024
#undef DAT_10002028
#undef DAT_1000202c
#undef DAT_10002030
#undef DAT_10002034
#undef DAT_10002038
#undef DAT_1000203c
#undef DAT_10002040
#undef DAT_10002044
#undef DAT_10002048
#undef DAT_1000204c
#undef DAT_10002050
#undef DAT_10002054
#undef DAT_10002058
#undef DAT_1000205c
#undef DAT_10002060
#undef DAT_10002064
#undef DAT_10002068
#undef EXT_00000004
#undef local_4b8
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_479
#undef local_478
#undef local_84
#undef iStack_480

#undef DAT_100020e4
#define DAT_100020e4 (*(int *)(0x100020e4U))
#undef DAT_100020e8
#define DAT_100020e8 (*(int *)(0x100020e8U))
#undef DAT_100020ec
#define DAT_100020ec (*(int *)(0x100020ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

void recovered_1000206c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;

  iVar1 = (*(uint32_t *)(uint32_t[]){0x21e0ULL});
  piVar2 = (int *)(((uintptr_t)pf_module_state + 0x340U));
  for (uVar4 = 0; uVar4 < *(uint *)(((uintptr_t)pf_module_state+0x4c8U)); uVar4 = uVar4 + 1) {
    recovered_10002734(piVar2);
    piVar2 = piVar2 + 0xc;
  }
  pbVar3 = (byte *)(((uintptr_t)pf_module_state + 0x270U));
  for (uVar4 = 0; uVar4 < *(uint *)(((uintptr_t)pf_module_state+0x4c4U)); uVar4 = uVar4 + 1) {
    recovered_100025fc(pbVar3);
    pbVar3 = pbVar3 + 0x34;
  }
  *(undefined4 *)(((uintptr_t)pf_module_state+0x4c4U)) = 0;
  *(undefined4 *)(((uintptr_t)pf_module_state+0x4c8U)) = 0;
  return;
}

#undef DAT_100020e4
#undef DAT_100020e8
#undef DAT_100020ec

#undef DAT_10002178
#define DAT_10002178 (*(int *)(0x10002178U))
#undef DAT_1000217c
#define DAT_1000217c (*(int *)(0x1000217cU))
#undef DAT_10002180
#define DAT_10002180 (*(int *)(0x10002180U))
#undef DAT_10002184
#define DAT_10002184 (*(int *)(0x10002184U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

undefined4 recovered_100020f0(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  uint in_r12;

  if (param_2 != (undefined4 *)0x0) {
    in_r12 = *(uint *)(((uintptr_t)pf_module_state + 0x4c8U));
  }
  if (param_2 != (undefined4 *)0x0 && param_1 < in_r12) {
    iVar1 = ((uintptr_t)pf_module_state + 0x340U) + param_1 * 0x30;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      return 0;
    }
    *param_2 = *(undefined4 *)(iVar1 + 0x24);
    pcVar2 = (char *)(((uintptr_t)pf_module_state + 0x103U));
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      pcVar2 = (char *)(((uintptr_t)pf_module_state + 0xeeU));
    }
    recovered_10003024(param_3,param_4,pcVar2);
    return 1;
  }
  return 0;
}

#undef DAT_10002178
#undef DAT_1000217c
#undef DAT_10002180
#undef DAT_10002184

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002188
 */

void recovered_10002188(uint param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003204(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021a4
 */

void recovered_100021a4(uint param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003204(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10002240
#define DAT_10002240 (*(int *)(0x10002240U))
#undef DAT_10002244
#define DAT_10002244 (*(int *)(0x10002244U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

undefined4 recovered_100021c0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  if (*(uint *)(((uintptr_t)pf_module_state + 0x4c8U)) <= param_1) {
    return 0;
  }
  piVar3 = (int *)(((uintptr_t)pf_module_state + 0x340U) + param_1 * 0x30);
  recovered_1000359c((int)piVar3);
  if (piVar3[7] != 0) {
    iVar1 = recovered_10002d98(piVar3);
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_1000222c;
  }
  recovered_10002734(piVar3);
  uVar2 = 0;
LAB_1000222c:
  DataMemoryBarrier(0xb);
  piVar3[8] = 0;
  return uVar2;
}

#undef DAT_10002240
#undef DAT_10002244

#undef DAT_10002340
#define DAT_10002340 (*(int *)(0x10002340U))
#undef DAT_10002344
#define DAT_10002344 (*(int *)(0x10002344U))
#undef DAT_10002348
#define DAT_10002348 (*(int *)(0x10002348U))
#undef DAT_1000234c
#define DAT_1000234c (*(int *)(0x1000234cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002248
 */

undefined4 recovered_10002248(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;

  if (param_2 != 0) {
    param_4 = *(uint *)(((uintptr_t)pf_module_state + 0x4c8U));
  }
  if (param_2 != 0 && param_1 < param_4) {
    iVar4 = ((uintptr_t)pf_module_state + 0x340U) + param_1 * 0x30;
    uVar5 = *(uint *)(iVar4 + 8);
    puVar6 = (undefined1 *)(((uintptr_t)pf_module_state + 0x270U) + *(int *)(iVar4 + 4) * 0x34);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    for (iVar4 = 0; iVar4 != 0x40; iVar4 = iVar4 + 1) {
      *(undefined1 *)(param_2 + iVar4) = 0;
    }
    iVar4 = ((uintptr_t)pf_module_state + 0x12aU);
    for (iVar7 = 0; iVar7 != 4; iVar7 = iVar7 + 1) {
      *(undefined1 *)(param_2 + iVar7) = *(undefined1 *)(iVar4 + iVar7);
    }
    *(undefined1 *)(param_2 + 6) = uVar3;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 4) = uVar1;
    puVar6 = (undefined1 *)(param_2 + 8);
    for (uVar8 = 0; uVar8 != 0x20; uVar8 = uVar8 + 8) {
      *puVar6 = (char)(uVar5 >> (uVar8 & 0xff));
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 8; iVar4 = iVar4 + 1) {
      *(undefined1 *)(param_2 + 0x10 + iVar4) = 0;
    }
    return 1;
  }
  return 0;
}

#undef DAT_10002340
#undef DAT_10002344
#undef DAT_10002348
#undef DAT_1000234c

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002350(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10002514((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10002514((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10002514((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10002514((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10002514((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002584
#define DAT_10002584 (*(uint8_t * *)(0x10002584U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002514
 */

undefined4
recovered_10002514(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_10002584

#undef DAT_100025f8
#define DAT_100025f8 (*(int *)(0x100025f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002588
 */

undefined4
recovered_10002588(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     ((code *)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)param_1[0x18])(param_2,param_3,param_4,param_5,2,param_6);
  return uVar1;
}

#undef DAT_100025f8

#undef DAT_1000264c
#define DAT_1000264c (*(int *)(0x1000264cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025fc
 */

void recovered_100025fc(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0x30) != 0) {
    recovered_10002588(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),(uint)*param_1,(uint)param_1[1],
                       (uint)param_1[2],4,*(undefined4 *)(param_1 + 0x2c));
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  return;
}

#undef DAT_1000264c

#undef DAT_10002720
#define DAT_10002720 (*(int *)(0x10002720U))
#undef DAT_10002724
#define DAT_10002724 (*(int *)(0x10002724U))
#undef DAT_10002728
#define DAT_10002728 (*(int *)(0x10002728U))
#undef DAT_1000272c
#define DAT_1000272c (*(int *)(0x1000272cU))
#undef DAT_10002730
#define DAT_10002730 (*(int *)(0x10002730U))
#define auStack_d4 (*(undefined1 (*)[212])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002650
 */

void recovered_10002650(int param_1,char *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;

  recovered_10003024(auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0xc1U)));
  recovered_1000303c((int)auStack_d4,0xc0,param_2);
  recovered_1000303c((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0xc9U)));
  recovered_10003090((int)auStack_d4,0xc0,*(int *)(param_1 + 8));
  recovered_1000303c((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0xd1U)));
  recovered_10003140((int)auStack_d4,0xc0,*(uint *)(param_1 + 0x18),8);
  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x4c0U));
  if ((((piVar1 != (int *)0x0) && (*piVar1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x2b < (uint)piVar1[2])) &&
     ((code *)piVar1[10] != (code *)0x0)) {
    (*(code *)piVar1[10])(auStack_d4);
  }
  return;
}

#undef DAT_10002720
#undef DAT_10002724
#undef DAT_10002728
#undef DAT_1000272c
#undef DAT_10002730
#undef auStack_d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002734
 */

void recovered_10002734(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[7] = 0;
  if (*param_1 == 0) {
    return;
  }
  recovered_1000296c(param_1,0x38,4,0);
  recovered_100027e0(param_1,1);
  recovered_1000296c(param_1,0x2c,2,0);
  recovered_1000296c(param_1,0x29,1,0);
  return;
}


#undef DAT_100027dc
#define DAT_100027dc (*(int *)(0x100027dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a0
 */

void recovered_100027a0(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x34) {
      return;
    }
    if ((code *)param_1[0xc] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100027d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xc])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_100027dc

#undef DAT_1000287c
#define DAT_1000287c (*(int *)(0x1000287cU))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

undefined4 recovered_100027e0(int *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;
  int iVar2;

  local_20 = 0;
  recovered_1000296c(param_1,0x2f,1,param_2);
  if (extraout_r0 != 0) {
    for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = recovered_10002880(param_1,0x2f,(int *)0x1,&local_20);
      if (iVar1 == 0) {
        return 0;
      }
      if ((local_20 & param_2) == 0) {
        return 1;
      }
      recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),100);
    }
  }
  return 0;
}

#undef DAT_1000287c
#undef local_20

#undef DAT_10002960
#define DAT_10002960 (*(int *)(0x10002960U))
#undef DAT_10002964
#define DAT_10002964 (*(int *)(0x10002964U))
#undef DAT_10002968
#define DAT_10002968 (*(int *)(0x10002968U))
#define local_18 (*(int * *)(pf_stack_frame + 24))
#define local_14 (*(int * *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002880
 */

undefined4 recovered_10002880(int *param_1,int param_2,int *param_3,int *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  local_14 = param_4;
  if (param_3 == (int *)0x2) {
    local_18 = (int *)0x0;
    if (param_4 == (int *)0x0 || *param_1 == 0) {
      return 0;
    }
    iVar2 = recovered_10002af0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),*param_1 + param_2,2,
                               (int)&local_18);
    if (iVar2 == 0) {
      return 0;
    }
    local_14 = local_18;
  }
  else {
    local_18 = param_3;
    if (param_3 == (int *)0x1) {
      if (param_4 != (int *)0x0) {
        param_1 = (int *)*param_1;
      }
      if (!(param_4 != (int *)0x0 && param_1 != (int *)0x0)) {
        return 0;
      }
      uVar1 = recovered_10002af0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),(int)param_1 + param_2,1,
                                 (int)param_4);
      return uVar1;
    }
    local_14 = (int *)0x0;
    if (param_4 == (int *)0x0 || *param_1 == 0) {
      return 0;
    }
    iVar2 = recovered_10002af0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),*param_1 + param_2,4,
                               (int)&local_14);
    if (iVar2 == 0) {
      return 0;
    }
  }
  *param_4 = (int)local_14;
  return 1;
}

#undef DAT_10002960
#undef DAT_10002964
#undef DAT_10002968
#undef local_18
#undef local_14

#undef DAT_100029a8
#define DAT_100029a8 (*(uint32_t *)(0x100029a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000296c
 */

void recovered_1000296c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_3 == 2) {
    uVar1 = 2;
  }
  else if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 4;
  }
  if (*param_1 == 0) {
    return;
  }
  recovered_10002b5c(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),*param_1 + param_2,uVar1,param_4);
  return;
}

#undef DAT_100029a8

#undef DAT_10002aec
#define DAT_10002aec (*(int *)(0x10002aecU))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029ac
 */

undefined4 recovered_100029ac(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int iVar2;
  undefined4 extraout_r0_01 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;

  local_24 = 0;
  uVar1 = param_1[3];
  uVar3 = 0x100;
  uVar7 = 0;
  if (1 < uVar1) {
    uVar3 = 0x7fe;
  }
  if (uVar1 < 6) {
    if (param_2 != 0) {
      param_4 = param_1[4];
    }
    if (param_2 != 0 && param_4 != 0) {
      uVar6 = 1;
      while (uVar4 = (uint)((ulonglong)param_2 * (ulonglong)uVar6 >> 0x20),
            uVar4 == 0 && (param_4 <= (uint)((ulonglong)param_2 * (ulonglong)uVar6)) <= uVar4) {
        if (uVar3 <= uVar6) {
          return 0;
        }
        uVar4 = uVar6 + 2;
        if (uVar6 == 1) {
          uVar4 = 2;
        }
        if (uVar1 < 2) {
          uVar4 = uVar6 << 1;
        }
        uVar6 = uVar4;
      }
      uVar7 = 0;
      recovered_1000296c(param_1,0x2c,2,0);
      if (extraout_r0 != 0) {
        uVar1 = uVar6 >> 3 & 0xc0 | (uVar6 & 0x1fe) << 7;
        recovered_1000296c(param_1,0x2c,2,uVar1 | 1);
        if (extraout_r0_00 != 0) {
          iVar5 = 0x5dc;
          while( true ) {
            if (iVar5 == 0) {
              return 0;
            }
            iVar2 = recovered_10002880(param_1,0x2c,(int *)0x2,&local_24);
            if (iVar2 == 0) {
              return 0;
            }
            if ((local_24 & 2) != 0) break;
            recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),100);
            iVar5 = iVar5 + -1;
          }
          recovered_1000296c(param_1,0x2c,2,uVar1 | 5);
          uVar7 = extraout_r0_01;
        }
      }
    }
  }
  return uVar7;
}

#undef DAT_10002aec
#undef local_24

#undef DAT_10002b58
#define DAT_10002b58 (*(uint8_t * *)(0x10002b58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002af0
 */

undefined4 recovered_10002af0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002b48;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002b48:
                    /* WARNING: Could not recover jumptable at 0x10002b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002b58

#undef DAT_10002bbc
#define DAT_10002bbc (*(int *)(0x10002bbcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b5c
 */

undefined4 recovered_10002b5c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10002ba4;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10002ba4:
                    /* WARNING: Could not recover jumptable at 0x10002bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10002bbc

#undef DAT_10002d90
#define DAT_10002d90 (*(int *)(0x10002d90U))
#undef DAT_10002d94
#define DAT_10002d94 (*(int *)(0x10002d94U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc0
 */

bool recovered_10002bc0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                       int *param_7)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  uint uVar4;

  local_24 = 0;
  param_1[6] = 0;
  uVar4 = 1;
  if (param_6 != 0) {
    uVar4 = 3;
  }
  if (param_4 == 3) {
    uVar4 = 3;
  }
  iVar2 = recovered_10002e48(param_1,param_2,param_3,param_4);
  if (iVar2 != 0) {
    for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar3 = recovered_10002880(param_1,0x24,(int *)&UndefinedInstruction,&local_24);
      uVar1 = 0;
      if (iVar3 != 0) {
        uVar1 = local_24;
      }
      if (iVar3 == 0 || uVar1 == 0xffffffff) {
        return false;
      }
      if ((uVar1 & uVar4) == 0) {
        recovered_1000296c(param_1,0x30,4,0xffffff7f);
        if (extraout_r0 == 0) {
          return false;
        }
        recovered_1000296c(param_1,8,4,param_3);
        if (extraout_r0_00 == 0) {
          return false;
        }
        recovered_10002ec0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)));
        uVar4 = param_5 | param_2 << 8;
        if (param_6 != 0) {
          uVar4 = uVar4 | 0x20;
        }
        recovered_1000296c(param_1,0xe,2,uVar4 | param_4);
        if (extraout_r0_01 == 0) {
          return false;
        }
        iVar2 = recovered_10002efc(param_1,1,10000);
        if (iVar2 == 0) {
          return false;
        }
        recovered_1000296c(param_1,0x30,4,1);
        if (extraout_r0_02 == 0) {
          return false;
        }
        if ((param_7 != (int *)0x0) &&
           (iVar2 = recovered_10002880(param_1,0x10,(int *)&UndefinedInstruction,param_7),
           iVar2 == 0)) {
          return false;
        }
        if (param_4 != 3) {
          return true;
        }
        iVar2 = recovered_10002efc(param_1,2,20000);
        if (iVar2 == 0) {
          return false;
        }
        recovered_1000296c(param_1,0x30,4,2);
        return extraout_r0_03 != 0;
      }
      recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),100);
    }
  }
  return false;
}

#undef DAT_10002d90
#undef DAT_10002d94
#undef EXT_00000004
#undef local_24

#undef DAT_10002e40
#define DAT_10002e40 (*(uint *)(0x10002e40U))
#undef DAT_10002e44
#define DAT_10002e44 (*(int *)(0x10002e44U))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d98
 */

undefined4 recovered_10002d98(int *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;

  uVar1 = (*(uint32_t *)(uint32_t[]){0xfff9a008ULL});
  local_24 = 0;
  iVar3 = 5000;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = recovered_10002bc0(param_1,0xd,param_1[5],2,0x18,0,&local_24);
    if (!bVar2) {
      return 0;
    }
    if ((local_24 & uVar1) != 0) {
      return 0;
    }
    if ((local_24 & 0x1f00) == 0x900) break;
    if ((local_24 & 0x1c00) != 0xc00) {
      return 0;
    }
    recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),1000);
    iVar3 = iVar3 + -1;
  }
  return 1;
}

#undef DAT_10002e40
#undef DAT_10002e44
#undef local_24

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_14 (*(uint *)(pf_stack_frame + 28))
#define local_10 (*(uint *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e48
 */

undefined4 recovered_10002e48(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  local_14 = param_3;
  local_10 = param_4;
  iVar2 = recovered_10002880(param_1,0x24,(int *)&UndefinedInstruction,(int *)&local_10);
  if (iVar2 != 0) {
    iVar2 = recovered_10002880(param_1,0x30,(int *)&UndefinedInstruction,(int *)&local_14);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = local_10;
    }
    if (((iVar2 != 0 && uVar1 != 0xffffffff) && (local_14 != 0xffffffff && (uVar1 & 0x10000) != 0))
       && ((local_14 & 0x80) == 0)) {
      return 1;
    }
  }
  param_1[7] = 0;
  return 0;
}

#undef EXT_00000004
#undef local_14
#undef local_10

#undef DAT_10002ef8
#define DAT_10002ef8 (*(int *)(0x10002ef8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ec0
 */

void recovered_10002ec0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10002ef8

#undef DAT_10002fbc
#define DAT_10002fbc (*(uint *)(0x10002fbcU))
#undef DAT_10002fc0
#define DAT_10002fc0 (*(int *)(0x10002fc0U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define local_24 (*(int * *)(pf_stack_frame + 540))
#define aiStack_228 (*(int (*)[138])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002efc
 */

undefined4 recovered_10002efc(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint unaff_r6;

  local_24 = aiStack_228 + 0x88;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar2 = recovered_10002880(param_1,0x30,(int *)&UndefinedInstruction,(int *)&local_24);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = recovered_10002880(param_1,0x24,(int *)&UndefinedInstruction,aiStack_228 + 0x80);
    uVar1 = (*(uint32_t *)(uint32_t[]){0xffff8080ULL});
    if (iVar2 == 0) {
      return 0;
    }
    param_1[6] = (int)local_24;
    if (((uint)local_24 & uVar1) != 0) break;
    if ((unaff_r6 & 0x10000) == 0) {
      return 0;
    }
    if (((uint)local_24 & param_2) != 0) {
      return 1;
    }
    recovered_100027a0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)),100);
    param_3 = param_3 + -1;
  }
  return 0;
}

#undef DAT_10002fbc
#undef DAT_10002fc0
#undef EXT_00000004
#undef local_24
#undef aiStack_228

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fc4
 */

uint recovered_10002fc4(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = 0;
  if ((param_1 != 0) && (param_3 <= param_2)) {
    if (0x1f < param_2 - param_3) {
      return 0;
    }
    uVar3 = 0x7f - param_2;
    uVar2 = 0;
    do {
      uVar1 = uVar3 >> 3;
      uVar4 = param_2 & 7;
      param_2 = param_2 - 1;
      uVar3 = uVar3 + 1;
      uVar2 = *(byte *)(param_1 + uVar1) >> uVar4 & 1 | uVar2 << 1;
    } while (param_3 - 1 != param_2);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003024
 */

void recovered_10003024(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0 || param_2 == 0) {
    return;
  }
  *param_1 = 0;
  recovered_1000303c((int)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000303c
 */

void recovered_1000303c(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100031a0(param_1);
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


#define abStack_a8 (*(byte (*)[168])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

void recovered_10003090(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_100031c8(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003770(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_100031c8(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003140
 */

void recovered_10003140(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_100031c8(param_1,param_2,bVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a0
 */

int recovered_100031a0(int param_1)

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
 * Address: 0x100031c8
 */

void recovered_100031c8(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100031a0(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10003584
#define DAT_10003584 (*(uint *)(0x10003584U))
#undef DAT_10003588
#define DAT_10003588 (*(int *)(0x10003588U))
#undef DAT_1000358c
#define DAT_1000358c (*(int *)(0x1000358cU))
#undef DAT_10003590
#define DAT_10003590 (*(int *)(0x10003590U))
#undef DAT_10003594
#define DAT_10003594 (*(int *)(0x10003594U))
#undef DAT_10003598
#define DAT_10003598 (*(int *)(0x10003598U))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#define uStack_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_24 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003204
 */

undefined4 recovered_10003204(uint param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int extraout_r0_01 = 0;
  int extraout_r0_02 = 0;
  int extraout_r0_03 = 0;
  int extraout_r0_04 = 0;
  uint uVar5;
  char *pcVar6;
  uint extraout_r3 = 0;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;

  if (param_4 >> 0x17 != 0) {
    return 0;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = *(uint *)(((uintptr_t)pf_module_state + 0x4c8U));
  }
  if (param_3 == 0 || uVar5 <= param_1) {
    return 0;
  }
  piVar7 = (int *)(((uintptr_t)pf_module_state + 0x340U) + param_1 * 0x30);
  recovered_1000359c((int)piVar7);
  bVar9 = piVar7[7] == 0;
  uVar2 = 0;
  uVar5 = 0;
  bVar10 = bVar9;
  if (!bVar9) {
    uVar5 = piVar7[9];
    uVar2 = uVar5 - param_2;
    bVar10 = uVar2 == 0;
  }
  if (((bVar9 || param_2 <= uVar5) && !bVar10) && (param_4 - 1 < uVar2)) {
    if (((*(byte *)((int)piVar7 + 0x2d) != 0) ||
        (-(uint)CARRY4(param_4,param_2) < (uint)(param_4 + param_2 < 0x800001))) &&
       (iVar3 = recovered_10002e48(piVar7,(uint)CARRY4(param_4,param_2),
                                   (uint)*(byte *)((int)piVar7 + 0x2d),extraout_r3), iVar3 != 0)) {
      if (param_5 == 0) {
        local_30 = 0x20;
        local_38 = 0x12;
        iVar3 = 0x11;
LAB_10003330:
        uVar5 = 0;
        uVar8 = 1;
        do {
          if (uVar5 == param_4) {
LAB_10003574:
            DataMemoryBarrier(0xb);
            piVar7[8] = 0;
            return uVar8;
          }
          uVar2 = uVar5 + param_2;
          cVar1 = *(char *)((int)piVar7 + 0x2d);
          if ((0x7fffff < uVar2) && (cVar1 == '\0')) {
LAB_10003544:
            pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x111U));
            if (param_5 == 0) {
              pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x11eU));
            }
            recovered_10002650((int)piVar7,pcVar6);
            recovered_10002734(piVar7);
            uVar8 = 0;
            goto LAB_10003574;
          }
          iVar4 = recovered_10002880(piVar7,0x24,(int *)&UndefinedInstruction,&uStack_28);
          if (cVar1 == '\0') {
            uVar2 = uVar2 * 0x200;
          }
          if (((iVar4 == 0) ||
              (((param_5 != 0 &&
                ((*(char *)((int)piVar7 + 0x2e) != '\0' || ((PF_PART1(uStack_28, 2) & 8) == 0)))) ||
               (recovered_1000296c(piVar7,4,2,0x200), extraout_r0 == 0)))) ||
             ((((recovered_1000296c(piVar7,6,2,1), extraout_r0_00 == 0 ||
                (recovered_1000296c(piVar7,0xc,2,local_38), extraout_r0_01 == 0)) ||
               (bVar10 = recovered_10002bc0(piVar7,iVar3,uVar2,2,0x18,1,(int *)&local_24), !bVar10))
              || ((((local_24 & (*(uint32_t *)(uint64_t[]){0x1034fff9a008ULL})) != 0 ||
                   (iVar4 = recovered_10002efc(piVar7,local_30,20000), iVar4 == 0)) ||
                  (recovered_1000296c(piVar7,0x30,4,local_30), extraout_r0_02 == 0))))))
          goto LAB_10003544;
          for (uVar2 = 0; uVar2 >> 9 == 0; uVar2 = uVar2 + 4) {
            if (param_5 == 0) {
              iVar4 = recovered_10002880(piVar7,0x20,(int *)&UndefinedInstruction,&local_2c);
              if (iVar4 == 0) goto LAB_10003544;
              *(int *)(param_3 + uVar2) = local_2c;
            }
            else {
              local_2c = *(int *)(param_3 + uVar2);
              recovered_1000296c(piVar7,0x20,4,local_2c);
              if (extraout_r0_03 == 0) goto LAB_10003544;
            }
          }
          recovered_10002ec0(*(int **)(((uintptr_t)pf_module_state + 0x4c0U)));
          iVar4 = recovered_10002efc(piVar7,2,20000);
          if (iVar4 == 0) goto LAB_10003544;
          recovered_1000296c(piVar7,0x30,4,2);
          iVar4 = extraout_r0_04;
          if (param_5 != 0 && extraout_r0_04 != 0) {
            iVar4 = recovered_10002d98(piVar7);
          }
          if (iVar4 == 0) goto LAB_10003544;
          param_3 = param_3 + 0x200;
          uVar5 = uVar5 + 1;
        } while( true );
      }
      if (*(char *)((int)piVar7 + 0x2e) == '\0') {
        iVar3 = recovered_10002880(piVar7,0x24,(int *)&UndefinedInstruction,(int *)&local_24);
        uVar5 = 0;
        if (iVar3 != 0) {
          uVar5 = local_24 >> 0x10 & 0xff;
        }
        if (iVar3 != 0 && (uVar5 & 8) != 0) {
          local_30 = 0x10;
          local_38 = 2;
          iVar3 = 0x18;
          goto LAB_10003330;
        }
      }
    }
  }
  DataMemoryBarrier(0xb);
  piVar7[8] = 0;
  return 0;
}

#undef DAT_10003584
#undef DAT_10003588
#undef DAT_1000358c
#undef DAT_10003590
#undef DAT_10003594
#undef DAT_10003598
#undef EXT_00000004
#undef uStack_28
#undef local_38
#undef local_30
#undef local_2c
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000359c
 */

void recovered_1000359c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(param_1 + 0x20);
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


#undef DAT_10003748
#define DAT_10003748 (*(int *)(0x10003748U))
#undef DAT_1000374c
#define DAT_1000374c (*(int *)(0x1000374cU))
#undef DAT_10003750
#define DAT_10003750 (*(int *)(0x10003750U))
#undef DAT_10003754
#define DAT_10003754 (*(int *)(0x10003754U))
#undef DAT_10003758
#define DAT_10003758 (*(int *)(0x10003758U))
#undef DAT_1000375c
#define DAT_1000375c (*(int *)(0x1000375cU))
#undef DAT_10003760
#define DAT_10003760 (*(int *)(0x10003760U))
#undef DAT_10003764
#define DAT_10003764 (*(int *)(0x10003764U))
#undef DAT_10003768
#define DAT_10003768 (*(int *)(0x10003768U))
#undef DAT_1000376c
#define DAT_1000376c (*(int *)(0x1000376cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035d0
 */

undefined4 recovered_100035d0(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;

  uVar8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    bVar9 = *(int *)(((uintptr_t)pf_module_state + 0x4c0U)) != 0;
    iVar1 = 0;
    if (bVar9) {
      iVar1 = *(int *)(((uintptr_t)pf_module_state + 0x4c8U));
    }
    if (bVar9 && iVar1 != 0) {
      iVar7 = 0;
      uVar5 = 0;
      iVar6 = 0;
      piVar3 = (int *)(((uintptr_t)pf_module_state + 0x35cU));
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*piVar3 != 0) {
          iVar7 = iVar7 + 1;
          bVar9 = CARRY4(uVar5,piVar3[2]);
          uVar5 = uVar5 + piVar3[2];
          iVar6 = iVar6 + (uint)bVar9;
        }
        piVar3 = piVar3 + 0xc;
      }
      recovered_10000fe8((undefined1 *)param_1,500);
      uVar8 = 1;
      *param_1 = 500;
      param_1[1] = 1;
      iVar1 = (*(uint32_t *)(uint32_t[]){0xbe4ULL});
      uVar4 = 9;
      param_1[3] = 0x11;
      uVar2 = 0;
      if (iVar7 == *(int *)(((uintptr_t)pf_module_state+0x4c8U))) {
        uVar4 = 0x13;
      }
      param_1[4] = uVar4;
      piVar3 = *(int **)(((uintptr_t)pf_module_state + 0x4c0U));
      if ((((piVar3 != (int *)0x0) && (*piVar3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x2f < (uint)piVar3[2])) &&
         ((code *)piVar3[0xb] != (code *)0x0)) {
        uVar2 = (*(code *)piVar3[0xb])();
      }
      param_1[6] = uVar2;
      param_1[0x11] = *(undefined4 *)(((uintptr_t)pf_module_state+0x4c4U));
      param_1[0x13] = uVar5;
      param_1[0x12] = iVar7;
      param_1[0x14] = iVar6;
      recovered_10003024((undefined1 *)(param_1 + 0x15),0x40,(char *)(((uintptr_t)pf_module_state + 0x12fU)));
      recovered_10003024((undefined1 *)(param_1 + 0x25),0x40,(char *)(((uintptr_t)pf_module_state + 0x143U)));
      recovered_10003024((undefined1 *)(param_1 + 0x35),0x60,(char *)(((uintptr_t)pf_module_state + 0x151U)));
      recovered_10003024((undefined1 *)(param_1 + 0x4d),0xc0,(char *)(((uintptr_t)pf_module_state + 0x1a1U)));
    }
  }
  return uVar8;
}

#undef DAT_10003748
#undef DAT_1000374c
#undef DAT_10003750
#undef DAT_10003754
#undef DAT_10003758
#undef DAT_1000375c
#undef DAT_10003760
#undef DAT_10003764
#undef DAT_10003768
#undef DAT_1000376c

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

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x238U). Too many branches */
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


/* Freestanding memcpy import; Pooka's Free Software License. */
void *recovered_10003dd0(void *dest,const void *source,size_t bytes) {
 volatile unsigned char *out=dest;const volatile unsigned char *in=source;
 for(size_t i=0;i<bytes;i++)out[i]=in[i];return dest;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
