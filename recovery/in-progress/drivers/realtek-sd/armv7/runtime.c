/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100024d4
#define DAT_100024d4 (*(uint32_t *)(0x100024d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c8
 */

void * recovered_100024c8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x4508U));
}

#undef DAT_100024d4

#undef DAT_1000289c
#define DAT_1000289c (*(uint *)(0x1000289cU))
#undef DAT_100028a0
#define DAT_100028a0 (*(uint64_t *)(0x100028a0U))
#undef DAT_100028a8
#define DAT_100028a8 (*(uint64_t *)(0x100028a8U))
#undef DAT_100028b0
#define DAT_100028b0 (*(int *)(0x100028b0U))
#undef DAT_100028b4
#define DAT_100028b4 (*(int *)(0x100028b4U))
#undef DAT_100028b8
#define DAT_100028b8 (*(int *)(0x100028b8U))
#undef DAT_100028bc
#define DAT_100028bc (*(int *)(0x100028bcU))
#undef DAT_100028c0
#define DAT_100028c0 (*(int *)(0x100028c0U))
#undef DAT_100028c4
#define DAT_100028c4 (*(int *)(0x100028c4U))
#undef DAT_100028c8
#define DAT_100028c8 (*(int *)(0x100028c8U))
#undef DAT_100028cc
#define DAT_100028cc (*(int *)(0x100028ccU))
#undef DAT_100028d0
#define DAT_100028d0 (*(int *)(0x100028d0U))
#undef DAT_100028d4
#define DAT_100028d4 (*(int *)(0x100028d4U))
#undef DAT_100028d8
#define DAT_100028d8 (*(int *)(0x100028d8U))
#undef DAT_100028dc
#define DAT_100028dc (*(int *)(0x100028dcU))
#undef DAT_100028e0
#define DAT_100028e0 (*(int *)(0x100028e0U))
#undef DAT_100028e4
#define DAT_100028e4 (*(int *)(0x100028e4U))
#undef DAT_100028e8
#define DAT_100028e8 (*(int *)(0x100028e8U))
#undef DAT_100028ec
#define DAT_100028ec (*(int *)(0x100028ecU))
#undef DAT_100028f0
#define DAT_100028f0 (*(int *)(0x100028f0U))
#undef DAT_100028f4
#define DAT_100028f4 (*(int *)(0x100028f4U))
#undef DAT_100028f8
#define DAT_100028f8 (*(int *)(0x100028f8U))
#undef DAT_100028fc
#define DAT_100028fc (*(int *)(0x100028fcU))
#undef DAT_10002900
#define DAT_10002900 (*(int *)(0x10002900U))
#define uStack_1f0 (*(undefined4 *)(pf_stack_frame + 48))
#define uStack_1ec (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_1e8 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_1d8 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1c4 (*(undefined1 (*)[452])(pf_stack_frame + 92))
#define auStack_184 (*(undefined1 (*)[388])(pf_stack_frame + 156))
#define auStack_144 (*(undefined1 (*)[324])(pf_stack_frame + 220))
#define auStack_e4 (*(undefined1 (*)[228])(pf_stack_frame + 316))
#define local_210 (*(byte (*)[528])(pf_stack_frame + 16))
#define local_20c (*(int *)(pf_stack_frame + 20))
#define local_208 (*(int *)(pf_stack_frame + 24))
#define local_204 (*(int *)(pf_stack_frame + 28))
#define local_200 (*(int *)(pf_stack_frame + 32))
#define local_1fc (*(int *)(pf_stack_frame + 36))
#define local_1f8 (*(int *)(pf_stack_frame + 40))
#define local_1f4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_1e4 (*(undefined4 *)(pf_stack_frame + 60))
#define local_1e0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_1cc (*(int *)(pf_stack_frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d8
 */

uint recovered_100024d8(void *api)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  int *piVar9;
  uint extraout_r1_04 = 0;
  uint uVar10;
  uint extraout_r1_05 = 0;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r2_01 = 0;
  undefined4 extraout_r2_02 = 0;
  undefined4 extraout_r2_03 = 0;
  byte *pbVar11;
  char *pcVar12;
  undefined4 extraout_r2_04 = 0;
  undefined4 extraout_r2_05 = 0;
  undefined4 extraout_r2_06 = 0;
  undefined4 uVar13;
  undefined4 extraout_r2_07 = 0;
  int *extraout_r3 = 0;
  int *extraout_r3_00 = 0;
  int *extraout_r3_01 = 0;
  int *extraout_r3_02 = 0;
  int *extraout_r3_03 = 0;
  int *extraout_r3_04 = 0;
  int *extraout_r3_05 = 0;
  int *extraout_r3_06 = 0;
  int *extraout_r3_07 = 0;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  undefined8 uVar17;

  uVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
  if ((((api != (void *)0x0) && (*(uint *)api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
      (*(int *)((int)api + 4) == 1100000)) &&
     ((0xf7 < *(uint *)((int)api + 8) && (*(int *)(((uintptr_t)pf_module_state + 0x7d0U)) == 0)))) {
    puVar8 = (undefined4 *)(((uintptr_t)pf_module_state + 0x7d0U));
    *(undefined4 *)(((uintptr_t)pf_module_state + 0x7d4U)) = 0;
    *puVar8 = api;
    recovered_10002904((undefined1 *)(((uintptr_t)pf_module_state + 0x520U)),0x2b0);
    uVar10 = extraout_r1;
    uVar13 = extraout_r2;
    piVar9 = extraout_r3;
    if ((*(uint *)api == uVar2) &&
       ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
      for (uVar2 = 0; uVar2 != 0x100; uVar2 = uVar2 + 1) {
        for (uVar16 = 0; uVar16 != 0x20; uVar16 = uVar16 + 1) {
          uVar3 = recovered_10004914(api,uVar2 & 0xff,uVar16 & 0xff,0,&local_1e0);
          uVar10 = extraout_r1_00;
          uVar13 = extraout_r2_00;
          piVar9 = extraout_r3_00;
          if (uVar3 != 0) {
            recovered_10002928(api,(byte *)&local_1e0);
            uVar10 = extraout_r1_01;
            uVar13 = extraout_r2_01;
            piVar9 = extraout_r3_01;
            if (((int8_t)PF_PART1(uStack_1d8, 4)) < '\0') {
              for (uVar3 = 1; uVar3 != 8; uVar3 = uVar3 + 1) {
                uVar4 = recovered_10004914(api,uVar2 & 0xff,uVar16 & 0xff,uVar3 & 0xff,local_210);
                uVar10 = extraout_r1_02;
                uVar13 = extraout_r2_02;
                piVar9 = extraout_r3_02;
                if (uVar4 != 0) {
                  recovered_10002928(api,local_210);
                  uVar10 = extraout_r1_03;
                  uVar13 = extraout_r2_03;
                  piVar9 = extraout_r3_03;
                }
              }
            }
          }
        }
      }
    }
    if (*(int *)(((uintptr_t)pf_module_state + 0x7d4U)) != 0) {
      recovered_10002904(local_210,0x30);
      pbVar11 = (byte *)(((uintptr_t)pf_module_state + 0x55eU));
      local_20c = *(int *)(((uintptr_t)pf_module_state + 0x7d4U));
      bVar15 = 0;
      for (iVar5 = local_20c; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar7 = 1;
        if ((bVar15 & 1) == 0) {
          bVar7 = *pbVar11 ^ 1;
        }
        pbVar11 = pbVar11 + 0xac;
        bVar15 = bVar7;
      }
      uStack_1f0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
      uStack_1ec = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
      uStack_1e8 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
      bVar14 = false;
      local_1f4 = 0;
      local_1e4 = 0;
      local_1f8 = ((uintptr_t)&recovered_10004748);
      local_1fc = ((uintptr_t)&recovered_10004698);
      local_204 = ((uintptr_t)&recovered_10004660);
      local_208 = ((uintptr_t)&recovered_10004594);
      local_210[0] = 3;
      local_210[1] = 0;
      local_210[2] = 0;
      local_210[3] = 0;
      local_200 = ((uintptr_t)&recovered_1000467c);
      if ((bVar15 & 1) == 0) {
        local_200 = 0;
      }
      piVar9 = (int *)(((uintptr_t)pf_module_state + 0x5b0U));
      for (iVar5 = local_20c; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar1 = !bVar14;
        bVar14 = true;
        if ((bVar1) && (bVar14 = false, *piVar9 != 0)) {
          bVar14 = true;
        }
        piVar9 = piVar9 + 0x2b;
      }
      recovered_10002904((undefined1 *)&local_1e0,0x1bc);
      local_1e0 = (*(uint64_t *)(uint64_t[]){0x1000001bcULL});
      uStack_1d8 = (*(uint64_t *)(uint64_t[]){0x1300000011ULL});
      local_1cc = ((uintptr_t)&recovered_10007250);
      recovered_10004e1c(auStack_1c4,0x40,(char *)(((uintptr_t)pf_module_state + 0x2b9U)));
      recovered_10004e1c(auStack_184,0x40,(char *)(((uintptr_t)pf_module_state + 0x2d4U)));
      pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x303U));
      if (bVar14) {
        pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x2e1U));
      }
      recovered_10004e1c(auStack_144,0x60,pcVar12);
      recovered_10004e1c(auStack_e4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x324U)));
      uVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
      puVar6 = *(uint **)(((uintptr_t)pf_module_state + 0x7d0U));
      uVar10 = extraout_r1_04;
      uVar13 = extraout_r2_04;
      piVar9 = extraout_r3_04;
      if (((puVar6 != (uint *)0x0) && (uVar10 = *puVar6, uVar10 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) &&
         (uVar10 = puVar6[2], 0xef < uVar10)) {
        uVar10 = 0;
        if ((code *)puVar6[0x3b] != (code *)0x0) {
          uVar17 = (*(code *)puVar6[0x3b])(&local_1e0);
          uVar10 = (uint)((ulonglong)uVar17 >> 0x20);
          uVar13 = extraout_r2_05;
          piVar9 = extraout_r3_05;
          if ((((int)uVar17 != 0) && (*(uint *)api == uVar2)) && (0xd3 < *(uint *)((int)api + 8))) {
            uVar10 = 0;
            if (*(code **)((int)api + 0xd0) != (code *)0x0) {
              uVar17 = (**(code **)((int)api + 0xd0))(local_210);
              uVar10 = (uint)((ulonglong)uVar17 >> 0x20);
              uVar13 = extraout_r2_06;
              piVar9 = extraout_r3_06;
              if ((int)uVar17 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
    iVar5 = (*(uint32_t *)(uint32_t[]){0x5a68ULL});
    puVar8 = (undefined4 *)(((uintptr_t)pf_module_state + 0x7d0U));
    pbVar11 = (byte *)(((uintptr_t)pf_module_state + 0x520U));
    for (uVar2 = 0; uVar2 < *(uint *)(((uintptr_t)pf_module_state+0x7d4U)); uVar2 = uVar2 + 1) {
      recovered_10004894(pbVar11,uVar10,uVar13,piVar9);
      pbVar11 = pbVar11 + 0xac;
      uVar10 = extraout_r1_05;
      uVar13 = extraout_r2_07;
      piVar9 = extraout_r3_07;
    }
    *puVar8 = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x7d4U)) = 0;
  }
  return 0;
}

#undef DAT_1000289c
#undef DAT_100028a0
#undef DAT_100028a8
#undef DAT_100028b0
#undef DAT_100028b4
#undef DAT_100028b8
#undef DAT_100028bc
#undef DAT_100028c0
#undef DAT_100028c4
#undef DAT_100028c8
#undef DAT_100028cc
#undef DAT_100028d0
#undef DAT_100028d4
#undef DAT_100028d8
#undef DAT_100028dc
#undef DAT_100028e0
#undef DAT_100028e4
#undef DAT_100028e8
#undef DAT_100028ec
#undef DAT_100028f0
#undef DAT_100028f4
#undef DAT_100028f8
#undef DAT_100028fc
#undef DAT_10002900
#undef uStack_1f0
#undef uStack_1ec
#undef uStack_1e8
#undef uStack_1d8
#undef auStack_1c4
#undef auStack_184
#undef auStack_144
#undef auStack_e4
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1e4
#undef local_1e0
#undef local_1cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002904
 */

void recovered_10002904(undefined1 *param_1,int param_2)

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


#undef DAT_100038a0
#define DAT_100038a0 (*(int *)(0x100038a0U))
#undef DAT_100038a4
#define DAT_100038a4 (*(int *)(0x100038a4U))
#undef DAT_100038a8
#define DAT_100038a8 (*(int *)(0x100038a8U))
#undef DAT_100038ac
#define DAT_100038ac (*(int *)(0x100038acU))
#undef DAT_100038b0
#define DAT_100038b0 (*(int *)(0x100038b0U))
#undef DAT_100038b4
#define DAT_100038b4 (*(int *)(0x100038b4U))
#undef DAT_10003ae4
#define DAT_10003ae4 (*(int *)(0x10003ae4U))
#undef DAT_10003ae8
#define DAT_10003ae8 (*(int *)(0x10003ae8U))
#undef DAT_10003aec
#define DAT_10003aec (*(int *)(0x10003aecU))
#undef DAT_10003af0
#define DAT_10003af0 (*(int *)(0x10003af0U))
#undef DAT_10003af4
#define DAT_10003af4 (*(int *)(0x10003af4U))
#undef DAT_10003af8
#define DAT_10003af8 (*(int *)(0x10003af8U))
#undef DAT_10003df4
#define DAT_10003df4 (*(int *)(0x10003df4U))
#undef DAT_10003df8
#define DAT_10003df8 (*(int *)(0x10003df8U))
#undef DAT_10003ff0
#define DAT_10003ff0 (*(int *)(0x10003ff0U))
#undef DAT_10003ff4
#define DAT_10003ff4 (*(int *)(0x10003ff4U))
#undef DAT_10003ff8
#define DAT_10003ff8 (*(int *)(0x10003ff8U))
#undef DAT_10003ffc
#define DAT_10003ffc (*(int *)(0x10003ffcU))
#undef DAT_10004128
#define DAT_10004128 (*(int *)(0x10004128U))
#undef DAT_1000417c
#define DAT_1000417c (*(int *)(0x1000417cU))
#undef DAT_10004230
#define DAT_10004230 (*(uint32_t *)(0x10004230U))
#undef DAT_1000424c
#define DAT_1000424c (*(int *)(0x1000424cU))
#undef DAT_10004250
#define DAT_10004250 (*(int *)(0x10004250U))
#undef DAT_10004404
#define DAT_10004404 (*(int *)(0x10004404U))
#undef DAT_10004464
#define DAT_10004464 (*(int *)(0x10004464U))
#undef DAT_1000451c
#define DAT_1000451c (*(int *)(0x1000451cU))
#undef DAT_10004520
#define DAT_10004520 (*(uint *)(0x10004520U))
#undef DAT_10004524
#define DAT_10004524 (*(uint32_t *)(0x10004524U))
#undef DAT_10004528
#define DAT_10004528 (*(int *)(0x10004528U))
#undef DAT_1000452c
#define DAT_1000452c (*(int *)(0x1000452cU))
#undef DAT_10004530
#define DAT_10004530 (*(int *)(0x10004530U))
#undef DAT_10004534
#define DAT_10004534 (*(int *)(0x10004534U))
#undef DAT_10004538
#define DAT_10004538 (*(int *)(0x10004538U))
#undef DAT_1000453c
#define DAT_1000453c (*(int *)(0x1000453cU))
#undef DAT_10004540
#define DAT_10004540 (*(int *)(0x10004540U))
#undef DAT_10004544
#define DAT_10004544 (*(int *)(0x10004544U))
#undef DAT_10004548
#define DAT_10004548 (*(int *)(0x10004548U))
#undef DAT_1000454c
#define DAT_1000454c (*(int *)(0x1000454cU))
#undef DAT_10004550
#define DAT_10004550 (*(int *)(0x10004550U))
#undef DAT_10004554
#define DAT_10004554 (*(int *)(0x10004554U))
#undef DAT_10004558
#define DAT_10004558 (*(int *)(0x10004558U))
#undef DAT_1000455c
#define DAT_1000455c (*(int *)(0x1000455cU))
#undef DAT_10004560
#define DAT_10004560 (*(int *)(0x10004560U))
#undef DAT_10004564
#define DAT_10004564 (*(int *)(0x10004564U))
#undef DAT_10004568
#define DAT_10004568 (*(int *)(0x10004568U))
#undef DAT_1000456c
#define DAT_1000456c (*(int *)(0x1000456cU))
#undef DAT_10004570
#define DAT_10004570 (*(int *)(0x10004570U))
#undef DAT_10004574
#define DAT_10004574 (*(int *)(0x10004574U))
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
#define local_4b8 (*(uint *)(pf_stack_frame + 24))
#define local_4b4 (*(uint *)(pf_stack_frame + 28))
#define local_4ac (*(char * *)(pf_stack_frame + 36))
#define local_4a8 (*(uint *)(pf_stack_frame + 40))
#define local_4a4 (*(uint *)(pf_stack_frame + 44))
#define local_4a0 (*(int *)(pf_stack_frame + 48))
#define local_49c (*(int *)(pf_stack_frame + 52))
#define local_498 (*(int *)(pf_stack_frame + 56))
#define local_494 (*(uint *)(pf_stack_frame + 60))
#define local_490 (*(uint *)(pf_stack_frame + 64))
#define local_48c (*(uint *)(pf_stack_frame + 68))
#define local_488 (*(uint *)(pf_stack_frame + 72))
#define local_484 (*(uint (*)[289])(pf_stack_frame + 76))
#define local_84 (*(uint (*)[33])(pf_stack_frame + 1100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002928
 */

void recovered_10002928(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *api;
  short sVar9;
  uint extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  undefined4 extraout_r1_02 = 0;
  uint uVar10;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  undefined4 extraout_r2_01 = 0;
  undefined4 extraout_r2_02 = 0;
  undefined4 extraout_r2_03 = 0;
  undefined4 extraout_r2_04 = 0;
  undefined4 extraout_r2_05 = 0;
  undefined4 extraout_r2_06 = 0;
  undefined4 extraout_r2_07 = 0;
  undefined4 extraout_r2_08 = 0;
  undefined4 extraout_r2_09 = 0;
  int *extraout_r3 = 0;
  int *extraout_r3_00 = 0;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  byte *device;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;

  sVar1 = *(short *)(param_2 + 4);
  sVar9 = 0x10ec;
  bVar17 = sVar1 == 0x10ec;
  if (bVar17) {
    sVar1 = *(short *)(param_2 + 6);
    sVar9 = 0x525a;
  }
  if (!bVar17 || sVar1 != sVar9) {
    return;
  }
  iVar16 = ((uintptr_t)pf_module_state + 0x7d0U);
  if (3 < *(uint *)(((uintptr_t)pf_module_state + 0x7d4U))) {
    return;
  }
  device = (byte *)(*(uint *)(((uintptr_t)pf_module_state + 0x7d4U)) * 0xac + ((uintptr_t)pf_module_state + 0x520U));
  recovered_10002904(device,0xac);
  recovered_10007b20(device,param_2,0x2c);
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 4;
  device[0x4b] = 0;
  device[0x44] = 1;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  local_4a8 = 0;
  uVar2 = recovered_10004ad8(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,&local_4a8
                            );
  uVar6 = local_4a8;
  if (uVar2 == 0) {
    recovered_10004b4c(device,(char *)(((uintptr_t)pf_module_state + 0x60U)));
    return;
  }
  *(undefined2 *)(device + 0x60) = (undefined2)local_4a8;
  bVar17 = recovered_10004cb8(device,local_4a8 & 0xfffb | 0x402);
  if (!bVar17) goto LAB_10002a80;
  device[0x44] = 2;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 6;
  device[0x4b] = 0;
  local_484[0] = 0;
  local_84[0] = 0;
  uVar3 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,(uint)device[1],
                             (uint)device[2],6,2,local_484);
  uVar2 = extraout_r1;
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar2 = 0xffff;
    uVar4 = local_484[0];
  }
  if (uVar3 == 0 || uVar4 == uVar2) goto LAB_10002a80;
  if ((uVar4 & 0x10) != 0) {
    device[0x48] = 0;
    device[0x49] = 0;
    device[0x4a] = 0x34;
    device[0x4b] = 0;
    uVar2 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,(uint)device[1],
                               (uint)device[2],0x34,1,local_84);
    if (uVar2 == 0) goto LAB_10002a80;
    bVar17 = false;
    for (uVar2 = 0; (local_84[0] != 0 && (uVar2 < 0x30)); uVar2 = uVar2 + 1) {
      local_488 = 0;
      *(uint *)(device + 0x48) = local_84[0] << 0x10;
      if ((0xbc < local_84[0] - 0x40) ||
         (((local_84[0] & 3) != 0 ||
          (uVar4 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                      (uint)device[1],(uint)device[2],local_84[0] & 0xffff,2,
                                      &local_488), uVar4 == 0)))) goto LAB_10002cd8;
      if ((local_488 & 0xff) == 1) {
        bVar17 = false;
        local_48c = 0;
        uVar2 = (local_84[0] + 4) * 0x10000;
        *(uint *)(device + 0x48) = uVar2;
        if (0xf8 < local_84[0]) goto LAB_10002cd8;
        uVar12 = local_84[0] + 4 & 0xffff;
        uVar5 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                   (uint)device[1],(uint)device[2],uVar12,2,&local_48c);
        uVar4 = extraout_r1_01;
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar4 = 0xffff;
          uVar3 = local_48c;
        }
        if (!(uVar5 != 0 && uVar3 != uVar4)) goto LAB_10002cd8;
        *(uint *)(device + 0x48) = *(uint *)(device + 0x48) | uVar3;
        if ((uVar3 & 3) != 0) {
          iVar16 = recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                      (uint)device[1],(uint)device[2],uVar12,uVar3 & 0xffff7ffc);
          if (iVar16 == 0) goto LAB_10002cd8;
          uVar11 = 1000;
          if ((local_48c & 3) == 3) {
            uVar11 = 10000;
          }
          recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),uVar11);
        }
        uVar4 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                   (uint)device[1],(uint)device[2],uVar12,2,&local_48c);
        if (uVar4 != 0) {
          *(uint *)(device + 0x48) = local_48c | uVar2;
          bVar17 = (local_48c & 3) == 0;
        }
        goto LAB_10002cd8;
      }
      local_84[0] = (local_488 & 0xffff) >> 8;
    }
    bVar17 = local_84[0] == 0;
LAB_10002cd8:
    iVar16 = ((uintptr_t)pf_module_state + 0x7d0U);
    if (!bVar17) goto LAB_10002a80;
  }
  bVar17 = recovered_10004cb8(device,uVar6 & 0xfffb | 0x402);
  if (!bVar17) goto LAB_10002a80;
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 0x14;
  device[0x4b] = 0;
  device[0x44] = 5;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_10004ad8(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x14,4,
                             device + 0x18);
  if (uVar6 == 0) goto LAB_10002a80;
  *(uint *)(device + 0x48) = *(uint *)(device + 0x18);
  if (((*(uint *)(device + 0x18) & 7) == 4) &&
     (uVar6 = recovered_10004ad8(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x18,4,
                                 device + 0x1c), uVar6 == 0)) {
    uVar11 = 0x180000;
LAB_10002eb4:
    *(undefined4 *)(device + 0x48) = uVar11;
    goto LAB_10002a80;
  }
  local_84[0] = 0;
  uVar6 = *(uint *)(device + 0x14) & 7;
  bVar17 = uVar6 != 4;
  if (bVar17) {
    uVar6 = *(uint *)(device + 0x18);
  }
  if ((!bVar17 || uVar6 == 0) || ((uVar6 & 1) != 0)) goto LAB_10002a80;
  local_488 = uVar6;
  recovered_10004ad8(param_1,(uint)*device,(uint)device[1],(uint)device[2],0x14,4,&local_488);
  uVar6 = 0;
  if ((local_488 & 7) == 4) {
    local_84[0] = *(uint *)(device + 0x1c);
    recovered_10004ad8(param_1,(uint)*device,(uint)device[1],(uint)device[2],0x18,4,local_84);
    uVar6 = local_84[0];
  }
  uVar2 = 0xfffffffc;
  if ((local_488 & 1) == 0) {
    uVar2 = 0xfffffff0;
  }
  uVar2 = uVar2 & local_488;
  if (uVar2 == 0 && uVar6 == 0) goto LAB_10002a80;
  puVar13 = (uint *)(device + 0x2c);
  local_484[0] = 0;
  *puVar13 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) goto LAB_10002a80;
  if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
    if ((((uVar6 != 0) || ((uint)param_1[2] < 0x68)) || ((code *)param_1[0x19] == (code *)0x0)) ||
       (iVar7 = (*(code *)param_1[0x19])(uVar2,0,0x1000,local_484), iVar7 == 0)) goto LAB_10002a80;
    *puVar13 = local_484[0];
  }
  else {
    iVar7 = (*(code *)param_1[0x2e])(uVar2,uVar6,0x1000,puVar13);
    if (iVar7 == 0) goto LAB_10002a80;
  }
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 0x18;
  device[0x4b] = 0;
  device[0x44] = 6;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_10004d9c(device,0x18,0);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 4;
  device[0x4b] = 0;
  device[0x44] = 7;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_10004d9c(device,4,0x10000000);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x48] = 0;
  device[0x49] = 0;
  device[0x4a] = 0xc;
  device[0x4b] = 0;
  device[0x44] = 8;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_10004d9c(device,0xc,0x10000000);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x44] = 9;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  local_484[0] = 0;
  local_84[0] = 0;
  local_488 = local_488 & 0xffffff00;
  uVar6 = recovered_100050b4(device,0xfc00,3);
  if (uVar6 == 0) goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),200);
  device[0x44] = 10;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfe60,3);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x44] = 0xb;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfe57,0x3f);
  if (uVar6 == 0) goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),10000);
  device[0x44] = 0xc;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfe2c,0x80);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x44] = 0xd;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfe34,0x80);
  if (uVar6 == 0) goto LAB_10002a80;
  recovered_100050e0(device,extraout_r1_02,extraout_r2_00,extraout_r3_00);
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),100000);
  device[0x44] = 0xe;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  bVar17 = recovered_1000516c((int)device,((uintptr_t)pf_module_state + 0x42cU),0x1e);
  if (!bVar17) goto LAB_10002a80;
  device[0x44] = 0xf;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfd6a,0xff);
  if (uVar6 == 0) goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),100);
  uVar6 = recovered_100050b4(device,0xfd6a,3);
  if (uVar6 == 0) goto LAB_10002a80;
  uVar6 = recovered_10004d9c(device,0x14,0x2c00000);
  if (uVar6 == 0) {
    uVar11 = 0x140000;
    goto LAB_10002eb4;
  }
  device[0x44] = 0x10;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,(uint)device[1],
                             (uint)device[2],0x724,4,local_484);
  if (((((uVar6 != 0) && ((local_484[0] & 0x1000000) == 0)) &&
       ((uVar6 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                    (uint)device[1],(uint)device[2],0x814,4,local_84), uVar6 != 0 &&
        ((uVar6 = recovered_100050b4(device,0xff03,0x30), uVar6 == 0 ||
         (uVar6 = recovered_100050b4(device,0xfd53,0x40), uVar6 == 0)))))) ||
      (uVar6 = recovered_100050b4(device,0xfd73,0x52), uVar6 == 0)) ||
     (((((uVar6 = recovered_100050b4(device,0xfd5a,0xff), uVar6 == 0 ||
         (uVar6 = recovered_100050b4(device,0xfd5e,0xff), uVar6 == 0)) ||
        (uVar6 = recovered_100050b4(device,0xfd5f,0xff), uVar6 == 0)) ||
       ((uVar6 = recovered_100050b4(device,0xfe78,3), uVar6 == 0 ||
        (uVar6 = recovered_100050b4(device,0xfe78,3), uVar6 == 0)))) ||
      ((uVar6 = recovered_100051d8(device,0xfe90,&local_488), uVar6 == 0 ||
       (((local_488 & 0xf) == 0 &&
        (bVar17 = recovered_1000516c((int)device,((uintptr_t)pf_module_state + 0x4b0U),7), !bVar17))))))))
  goto LAB_10002a80;
  device[0x44] = 0x11;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  bVar17 = recovered_10005204((int)device,1);
  if (!bVar17) goto LAB_10002a80;
  device[0x44] = 0x12;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  uVar6 = recovered_100050b4(device,0xfd69,4);
  if (((uVar6 == 0) || (uVar6 = recovered_100050b4(device,0xfd50,3), uVar6 == 0)) ||
     (uVar6 = recovered_100050b4(device,0xfe75,6), uVar6 == 0)) goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),5000);
  uVar6 = recovered_100050b4(device,0xfd50,3);
  if ((uVar6 == 0) || (uVar6 = recovered_100050b4(device,0xfe75,6), uVar6 == 0)) goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),10000);
  uVar6 = recovered_100050b4(device,0xfd55,4);
  if ((uVar6 == 0) || (uVar6 = recovered_100050b4(device,0xfda5,0x80), uVar6 == 0))
  goto LAB_10002a80;
  recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),2000);
  uVar6 = recovered_100050b4(device,0xfda5,0x80);
  if (uVar6 == 0) goto LAB_10002a80;
  device[0x44] = 0x13;
  device[0x45] = 0;
  device[0x46] = 0;
  device[0x47] = 0;
  iVar7 = recovered_1000540c((int)device,(uint *)0x0,(uint3)extraout_r2_01);
  if (iVar7 == 0) goto LAB_10002a80;
  local_84[0] = 0;
  local_488 = 0;
  bVar17 = recovered_10005b90((int)device,0,0,4,(uint *)0x0,0);
  if (!bVar17) goto LAB_10002a80;
  local_4b8 = 0;
  bVar17 = recovered_10005b90((int)device,8,0x1aa,1,local_84,0);
  if (bVar17) {
    if ((local_84[0] & 0x400000) != 0) goto LAB_100035bc;
    if ((local_84[0] & 0xfff) == 0x1aa) {
      local_4b8 = 1;
      goto LAB_100035bc;
    }
  }
  else {
    if (((device[0x48] & 1) == 0) ||
       (iVar7 = recovered_1000540c((int)device,(uint *)0x0,(uint3)extraout_r2_02), iVar7 == 0))
    goto LAB_10002a80;
    recovered_10005760((int)device);
    local_4b8 = 0;
    bVar17 = recovered_10005b90((int)device,0,0,4,(uint *)0x0,0);
    if (!bVar17) goto LAB_10002a80;
LAB_100035bc:
    for (iVar7 = 1000; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar8 = recovered_10005d40((int)device,0x37,0,0);
      if ((iVar8 == 0) ||
         (bVar17 = recovered_10005b90((int)device,0x29,0x300000,5,&local_488,0), !bVar17))
      goto LAB_10002a80;
      if (((local_488 & 0x81000000) == 0x80000000) && ((local_488 & 0x300000) != 0)) {
        bVar17 = true;
        goto LAB_10003654;
      }
      recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),1000);
    }
    bVar17 = (local_488 & 0x300000) != 0;
LAB_10003654:
    if (((((bVar17) && ((local_488 & 0x81000000) == 0x80000000)) &&
         (bVar17 = recovered_10005b90((int)device,2,0,2,(uint *)0x0,(int)(device + 0x62)), bVar17))
        && ((bVar17 = recovered_10005b90((int)device,3,0,1,local_84,0), bVar17 &&
            (0xffff < local_84[0])))) && ((local_84[0] & 0xe000) == 0)) {
      local_4b4 = 0;
      *(uint *)(device + 0x40) = local_84[0] & 0xffff0000;
      bVar17 = recovered_10005b90((int)device,9,(uint3)(local_84[0] & 0xffff0000),2,(uint *)0x0,
                                  (int)local_484);
      uVar6 = local_488;
      if (!bVar17) goto LAB_10002a80;
      uVar2 = recovered_10006110((int)local_484,0x7f,0x7e);
      uVar4 = recovered_10006110((int)local_484,0x53,0x50);
      uVar3 = recovered_10006110((int)local_484,0x19,0x16);
      uVar5 = recovered_10006110((int)local_484,0x5f,0x54);
      uVar12 = recovered_10006110((int)local_484,0x67,0x60);
      uVar10 = (uVar12 & 0x7f) >> 3;
      if ((((uVar12 & 0x80) == 0) && ((uVar12 & 7) < 4)) && (uVar10 != 0)) {
        local_4b4 = *(int *)(((uintptr_t)pf_module_state + 0x4dcU) + (uVar12 & 7) * 4) *
                    (uint)*(byte *)(((uintptr_t)pf_module_state + 0x4ccU) + uVar10);
      }
      bVar17 = (uVar5 & 4) != 0;
      uVar12 = uVar5;
      if (bVar17) {
        uVar12 = local_4b4;
      }
      if (!bVar17 || uVar12 == 0) goto LAB_10002a80;
      local_4b8 = local_4b8 & (uVar6 & 0x40000000) >> 0x1e;
      if (uVar2 == 1) {
        if ((local_4b8 & uVar4 == 9) != 1) goto LAB_10002a80;
        uVar6 = recovered_10006110((int)local_484,0x45,0x30);
        iVar7 = uVar6 * 0x400 + 0x400;
        uVar6 = (uVar6 >> 0x16) + (uint)(0xfffffbff < uVar6 * 0x400);
      }
      else {
        if (((uVar2 != 0) || (local_4b8 != 0 || uVar4 - 0xc < 0xfffffffd)) ||
           ((9 < uVar4 && (uVar6 = recovered_10006110((int)local_484,0x4f,0x4f), uVar6 == 0))))
        goto LAB_10002a80;
        uVar6 = recovered_10006110((int)local_484,0x49,0x3e);
        uVar12 = recovered_10006110((int)local_484,0x31,0x2f);
        iVar8 = uVar4 + uVar12;
        uVar4 = uVar6 + 1;
        uVar6 = uVar4 >> (0x27U - iVar8 & 0xff) | (uint)(0xfffffffe < uVar6) << (iVar8 - 7U & 0xff);
        iVar7 = uVar4 << (iVar8 - 7U & 0xff);
        if (-1 < (int)(iVar8 - 0x27U)) {
          uVar6 = uVar4 << (iVar8 - 0x27U & 0xff);
          iVar7 = 0;
        }
      }
      if (uVar6 != 0) {
        iVar7 = -1;
      }
      uVar4 = recovered_10006110((int)local_484,0xd,0xc);
      bVar17 = true;
      if (((uVar4 == 0) && ((uVar5 & 0x10) != 0)) && (0xfffffffc < uVar3 - 0xc)) {
        bVar17 = uVar2 == 1 && uVar3 != 9;
      }
      device[0x3d] = (byte)local_4b8;
      device[0x3e] = bVar17;
      *(uint *)(device + 0x38) = local_4b4;
      device[0x3c] = uVar6 != 0;
      *(int *)(device + 0x34) = iVar7;
      iVar7 = recovered_10005d40((int)device,7,(uint3)*(undefined4 *)(device + 0x40),1);
      if ((((iVar7 == 0) ||
           ((device[0x3d] == 0 && (iVar7 = recovered_10005d40((int)device,0x10,0x200,0), iVar7 == 0)
            ))) || (bVar17 = recovered_10005204((int)device,0), !bVar17)) ||
         (iVar7 = recovered_10005da8((int)device), iVar7 == 0)) goto LAB_10002a80;
      local_48c = 0;
      iVar7 = recovered_1000540c((int)device,&local_48c,(uint3)extraout_r2_03);
      if ((iVar7 == 0) || (uVar6 = recovered_10004d9c(device,0x14,0x2000000), uVar6 == 0))
      goto LAB_10002a80;
      uVar2 = 0;
      local_498 = 0;
      device[0x58] = 1;
      device[0x59] = 0;
      device[0x5a] = 0;
      device[0x5b] = 0;
      device[0x54] = 1;
      device[0x55] = 0;
      device[0x56] = 0;
      device[0x57] = 0;
      local_49c = 0;
      local_4a0 = 0;
      device[0x3e] = device[0x3e] | (byte)((local_48c & 0x80000) >> 0x13);
      local_4a4 = 0;
      uVar6 = recovered_10006170(device);
      api = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
      if ((api == (int *)0x0) || ((uVar2 = api[2], *api != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}) || (uVar2 < 0x7c)))) {
LAB_10003ab4:
        uVar11 = 0x163;
        *(uint *)(device + 0x48) = uVar2;
      }
      else {
        iVar7 = 0;
        if (api[0x1e] != 0) {
          iVar7 = api[0xd];
        }
        if (api[0x1e] == 0 || iVar7 == 0) goto LAB_10003ab4;
        iVar7 = 0;
        if (api[0xe] != 0) {
          iVar7 = api[0x1c];
        }
        if ((api[0xe] == 0 || iVar7 == 0) || (api[0x1d] == 0)) goto LAB_10003ab4;
        local_484[0] = 0;
        local_84[0] = 0;
        local_488 = 0;
        uVar2 = recovered_10004ad8(api,(uint)*device,(uint)device[1],(uint)device[2],4,2,local_484);
        if (uVar2 == 0) {
          device[0x48] = 0;
          device[0x49] = 0;
          device[0x4a] = 4;
          device[0x4b] = 0;
          uVar11 = 0x155;
        }
        else {
          if ((local_484[0] & 0x406) != 0x402) {
            uVar6 = local_484[0] | 0x40000;
            device[0x44] = 0x56;
            device[0x45] = 1;
            device[0x46] = 0;
            device[0x47] = 0;
LAB_10004194:
            *(uint *)(device + 0x48) = uVar6;
            goto LAB_10003ac4;
          }
          uVar2 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                     (uint)device[1],(uint)device[2],6,2,local_84);
          if (uVar2 == 0) {
            device[0x48] = 0;
            device[0x49] = 0;
            device[0x4a] = 6;
            device[0x4b] = 0;
            uVar11 = 0x157;
          }
          else if (local_84[0] == 0xffff) {
            *(undefined4 *)(device + 0x48) = (*(uint32_t *)(uint32_t[]){0x6ffffULL});
            uVar11 = 0x158;
          }
          else {
            uVar11 = extraout_r2_04;
            if ((local_84[0] & 0x10) == 0) {
LAB_10004254:
              iVar7 = recovered_1000540c((int)device,&local_4a4,(uint3)uVar11);
              if (iVar7 == 0) {
                uVar11 = 0x164;
              }
              else {
                bVar17 = recovered_100055b8((int)device,4,&local_49c);
                if (bVar17) {
                  if (local_49c < 0) {
                    *(int *)(device + 0x48) = local_49c;
                    uVar11 = 0x166;
                  }
                  else {
                    bVar17 = recovered_100055b8((int)device,0xc,&local_4a0);
                    if (bVar17) {
                      if (local_4a0 < 0) {
                        *(int *)(device + 0x48) = local_4a0;
                        uVar11 = 0x168;
                      }
                      else {
                        if ((local_4a4 & 0x1000000) == 0) {
LAB_100042f4:
                          device[0x9c] = 1;
                          device[0x9d] = 0;
                          device[0x9e] = 0;
                          device[0x9f] = 0;
                          uVar2 = recovered_10006198((uint *)(device + 0x78));
                          *(uint *)(device + 0x80) = uVar2;
                          if (uVar2 == 0) {
                            recovered_10005980((int)device);
                            device[0x48] = 0xff;
                            device[0x49] = 0x1f;
                            device[0x4a] = 0;
                            device[0x4b] = 0;
                            uVar11 = 0x16a;
                          }
                          else {
                            uVar2 = recovered_10006198((uint *)(device + 0x7c));
                            *(uint *)(device + 0x84) = uVar2;
                            if (uVar2 == 0) {
                              recovered_10005980((int)device);
                              device[0x48] = 0xff;
                              device[0x49] = 0x1f;
                              device[0x4a] = 0;
                              device[0x4b] = 0;
                              uVar11 = 0x16b;
                            }
                            else {
                              iVar7 = recovered_10006230(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),uVar6,
                                                         *(int *)(device + 0x80),
                                                         (int)(device + 0x88));
                              if (iVar7 != 0) {
                                uVar2 = *(uint *)(device + 0x88);
                                if ((uVar2 - 1 < 0xfffff000) &&
                                   ((uVar2 & 0xfff) == 0 && local_498 == 0)) {
                                  local_498 = 0;
                                  iVar7 = recovered_10006230(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),
                                                             uVar6,*(int *)(device + 0x84),
                                                             (int)(device + 0x8c));
                                  if (iVar7 == 0) {
                                    recovered_10005980((int)device);
                                    device[0x48] = 0;
                                    device[0x49] = 0x10;
                                    device[0x4a] = 0;
                                    device[0x4b] = 0;
                                    uVar11 = 0x16e;
                                    goto LAB_100044f4;
                                  }
                                  uVar6 = *(uint *)(device + 0x8c);
                                  if ((uVar6 - 1 < (*(uint32_t *)(uint32_t[]){0xfffff000ULL})) &&
                                     ((uVar6 & 0xfff) == 0 && local_498 == 0)) {
                                    recovered_10002904(*(undefined1 **)(device + 0x80),0x1000);
                                    recovered_10002904(*(undefined1 **)(device + 0x84),0x1000);
                                    device[0x90] = 1;
                                    device[0x91] = 0;
                                    device[0x92] = 0;
                                    device[0x93] = 0;
                                    goto LAB_10003ac4;
                                  }
                                  recovered_10005980((int)device);
                                  uVar11 = 0x16f;
                                }
                                else {
                                  recovered_10005980((int)device);
                                  uVar11 = 0x16d;
                                }
                                *(undefined4 *)(device + 0x44) = uVar11;
                                *(int *)(device + 0x48) = local_498;
                                goto LAB_10003ac4;
                              }
                              recovered_10005980((int)device);
                              device[0x48] = 0;
                              device[0x49] = 0x10;
                              device[0x4a] = 0;
                              device[0x4b] = 0;
                              uVar11 = 0x16c;
                            }
                          }
LAB_100044f4:
                          *(undefined4 *)(device + 0x44) = uVar11;
                          goto LAB_10003ac4;
                        }
                        uVar2 = recovered_10004d9c(device,0x14,0x1000000);
                        if (uVar2 != 0) {
                          iVar7 = recovered_1000540c((int)device,&local_4a4,(uint3)extraout_r2_09);
                          if (iVar7 == 0) {
                            uVar11 = 0x169;
                            goto LAB_10003ac0;
                          }
                          if ((local_4a4 & 0x1000000) == 0) goto LAB_100042f4;
                        }
                        *(uint *)(device + 0x48) = local_4a4;
                        uVar11 = 0x169;
                      }
                    }
                    else {
                      device[0x48] = 0;
                      device[0x49] = 0;
                      device[0x4a] = 0xc;
                      device[0x4b] = 0;
                      uVar11 = 0x167;
                    }
                  }
                }
                else {
                  device[0x48] = 0;
                  device[0x49] = 0;
                  device[0x4a] = 4;
                  device[0x4b] = 0;
                  uVar11 = 0x165;
                }
              }
            }
            else {
              uVar2 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                         (uint)device[1],(uint)device[2],0x34,1,&local_488);
              if (uVar2 == 0) {
                device[0x48] = 0;
                device[0x49] = 0;
                device[0x4a] = 0x34;
                device[0x4b] = 0;
                uVar11 = 0x159;
              }
              else {
                if (local_488 == 0) {
                  device[0x44] = 0x5a;
                  device[0x45] = 1;
                  device[0x46] = 0;
                  device[0x47] = 0;
                  uVar6 = local_84[0];
LAB_10004170:
                  *(uint *)(device + 0x48) = uVar6 << 0x10;
                  goto LAB_10003ac4;
                }
                uVar11 = extraout_r2_05;
                for (uVar2 = 0; (uVar4 = local_488, local_488 != 0 && (uVar2 < 0x30));
                    uVar2 = uVar2 + 1) {
                  local_48c = 0;
                  if ((0xbc < local_488 - 0x40) || ((local_488 & 3) != 0)) {
                    uVar11 = 0x15b;
                    goto LAB_10004244;
                  }
                  uVar4 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                             (uint)device[1],(uint)device[2],local_488 & 0xffff,2,
                                             &local_48c);
                  if (uVar4 == 0) {
                    device[0x44] = 0x5c;
                    device[0x45] = 1;
                    device[0x46] = 0;
                    device[0x47] = 0;
                    uVar6 = local_488;
                    goto LAB_10004170;
                  }
                  uVar4 = local_48c & 0xff;
                  if (uVar4 == 0xff || uVar4 == 0) {
                    device[0x44] = 0x5c;
                    device[0x45] = 1;
                    device[0x46] = 0;
                    device[0x47] = 0;
                    uVar6 = local_48c | local_488 << 0x10;
                    goto LAB_10004194;
                  }
                  if (uVar4 == 0x11) {
LAB_10003efc:
                    local_490 = 0;
                    local_494 = 0;
                    uVar3 = (local_488 & 0xffff) + 2;
                    uVar12 = uVar3 & 0xffff;
                    uVar5 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                               (uint)device[1],(uint)device[2],uVar12,2,&local_490);
                    if (uVar5 == 0) {
                      uVar11 = 0x15d;
LAB_100041c4:
                      uVar3 = uVar3 * 0x10000;
                    }
                    else {
                      uVar5 = local_490 & 0xffff3fff | 0x4000;
                      if (uVar4 == 5) {
                        uVar5 = local_490 & 0xfffffffe;
                      }
                      local_490 = uVar5;
                      iVar7 = recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                                 (uint)device[1],(uint)device[2],uVar12,uVar5);
                      if (iVar7 != 0) {
                        uVar5 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),
                                                   (uint)*device,(uint)device[1],(uint)device[2],
                                                   uVar12,2,&local_494);
                        if (uVar5 != 0) {
                          uVar11 = extraout_r2_07;
                          if (uVar4 == 5) {
                            if ((local_494 & 1) != 0) goto LAB_100041cc;
                          }
                          else {
                            if ((local_494 & 0xc000) != 0x4000) {
LAB_100041cc:
                              uVar3 = local_494 | uVar3 * 0x10000;
                              uVar11 = 0x160;
                              goto LAB_100041d8;
                            }
                            if (uVar4 == 0x10) goto LAB_10004018;
                          }
                          goto LAB_10004100;
                        }
                        uVar11 = 0x15f;
                        goto LAB_100041c4;
                      }
                      uVar3 = local_490 | uVar3 * 0x10000;
                      uVar11 = 0x15e;
                    }
LAB_100041d8:
                    *(uint *)(device + 0x48) = uVar3;
                    *(undefined4 *)(device + 0x44) = uVar11;
                    goto LAB_10003ac4;
                  }
                  if (uVar4 == 0x10) {
LAB_10004018:
                    local_490 = 0;
                    local_494 = 0;
                    if (local_488 < 0xf5) {
                      uVar4 = local_488 + 8;
                      uVar5 = uVar4 & 0xffff;
                      uVar3 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*device,
                                                 (uint)device[1],(uint)device[2],uVar5,2,&local_490)
                      ;
                      if (uVar3 == 0) {
                        uVar4 = uVar4 * 0x10000;
                      }
                      else {
                        if (local_490 != 0xffff) {
                          if (((local_490 & 0x800) == 0) ||
                             (iVar7 = recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),
                                                         (uint)*device,(uint)device[1],
                                                         (uint)device[2],uVar5,
                                                         local_490 & 0xfffff7ff), iVar7 != 0)) {
                            uVar3 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),
                                                       (uint)*device,(uint)device[1],(uint)device[2]
                                                       ,uVar5,2,&local_494);
                            if (uVar3 == 0) {
                              uVar11 = 0x176;
                              uVar4 = uVar4 * 0x10000;
                            }
                            else {
                              uVar11 = extraout_r2_08;
                              if ((local_494 & 0x800) == 0) goto LAB_10004100;
                              uVar11 = 0x177;
                              uVar4 = local_494 | uVar4 * 0x10000;
                            }
                          }
                          else {
                            uVar11 = 0x175;
                            uVar4 = local_490 | uVar4 * 0x10000;
                          }
                          goto LAB_10004244;
                        }
                        uVar4 = uVar4 * 0x10000 | 0xffff;
                      }
                      uVar11 = 0x174;
                    }
                    else {
                      uVar11 = 0x173;
                      uVar4 = local_488;
                    }
                    goto LAB_10004244;
                  }
                  uVar11 = extraout_r2_06;
                  if (uVar4 == 5) goto LAB_10003efc;
LAB_10004100:
                  local_488 = local_48c >> 8 & 0xff;
                }
                if (local_488 == 0) goto LAB_10004254;
                uVar11 = 0x161;
LAB_10004244:
                *(uint *)(device + 0x48) = uVar4;
              }
            }
          }
        }
      }
LAB_10003ac0:
      *(undefined4 *)(device + 0x44) = uVar11;
LAB_10003ac4:
      if (*(int *)(device + 0x90) == 0) {
        local_4ac = (char *)(((uintptr_t)pf_module_state + 0x11dU));
        if (device[0x3e] != 0) {
          local_4ac = (char *)(((uintptr_t)pf_module_state + 0xeaU));
        }
      }
      else {
        local_4ac = (char *)(((uintptr_t)pf_module_state + 0xa9U));
      }
      recovered_10004e1c((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x78U)));
      recovered_10004e94((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x19eU)));
      recovered_10004e34((int)local_84,0x60,(uint)*param_2,2);
      pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x182U));
      recovered_10004e94((int)local_84,0x60,pcVar15);
      recovered_10004e34((int)local_84,0x60,(uint)param_2[1],2);
      pcVar14 = (char *)(((uintptr_t)pf_module_state + 0x184U));
      recovered_10004e94((int)local_84,0x60,pcVar14);
      recovered_10004ee8((int)local_84,0x60,(uint)param_2[2]);
      recovered_10004e1c((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1a0U)));
      recovered_10004e34((int)local_484,0x400,(uint)*param_2,2);
      recovered_10004e94((int)local_484,0x400,pcVar15);
      recovered_10004e34((int)local_484,0x400,(uint)param_2[1],2);
      recovered_10004e94((int)local_484,0x400,pcVar14);
      recovered_10004ee8((int)local_484,0x400,(uint)param_2[2]);
      recovered_10004e94((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1a5U)));
      recovered_10004e34((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
      recovered_10004e94((int)local_484,0x400,pcVar15);
      recovered_10004e34((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
      recovered_10004e94((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1a8U)));
      if (*local_4ac != '\0') {
        recovered_10004e94((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1aaU)));
        recovered_10004e94((int)local_484,0x400,local_4ac);
      }
      if ((code *)param_1[3] != (code *)0x0) {
        (*(code *)param_1[3])(local_84,((uintptr_t)pf_module_state + 0x91U),local_484);
      }
      *(int *)(iVar16 + 4) = *(int *)(iVar16 + 4) + 1;
      return;
    }
  }
  *(uint *)(device + 0x48) = local_84[0];
LAB_10002a80:
  uVar11 = *(undefined4 *)(device + 0x48);
  recovered_10004b4c(device,(char *)(((uintptr_t)pf_module_state + 0x151U)));
  recovered_10004894(device,extraout_r1_00,extraout_r2,extraout_r3);
  *(undefined4 *)(device + 0x48) = uVar11;
  return;
}

#undef DAT_100038a0
#undef DAT_100038a4
#undef DAT_100038a8
#undef DAT_100038ac
#undef DAT_100038b0
#undef DAT_100038b4
#undef DAT_10003ae4
#undef DAT_10003ae8
#undef DAT_10003aec
#undef DAT_10003af0
#undef DAT_10003af4
#undef DAT_10003af8
#undef DAT_10003df4
#undef DAT_10003df8
#undef DAT_10003ff0
#undef DAT_10003ff4
#undef DAT_10003ff8
#undef DAT_10003ffc
#undef DAT_10004128
#undef DAT_1000417c
#undef DAT_10004230
#undef DAT_1000424c
#undef DAT_10004250
#undef DAT_10004404
#undef DAT_10004464
#undef DAT_1000451c
#undef DAT_10004520
#undef DAT_10004524
#undef DAT_10004528
#undef DAT_1000452c
#undef DAT_10004530
#undef DAT_10004534
#undef DAT_10004538
#undef DAT_1000453c
#undef DAT_10004540
#undef DAT_10004544
#undef DAT_10004548
#undef DAT_1000454c
#undef DAT_10004550
#undef DAT_10004554
#undef DAT_10004558
#undef DAT_1000455c
#undef DAT_10004560
#undef DAT_10004564
#undef DAT_10004568
#undef DAT_1000456c
#undef DAT_10004570
#undef DAT_10004574
#undef DAT_10004578
#undef DAT_1000457c
#undef DAT_10004580
#undef DAT_10004584
#undef DAT_10004588
#undef DAT_1000458c
#undef DAT_10004590
#undef local_4b8
#undef local_4b4
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

#undef DAT_10004654
#define DAT_10004654 (*(int *)(0x10004654U))
#undef DAT_10004658
#define DAT_10004658 (*(int *)(0x10004658U))
#undef DAT_1000465c
#define DAT_1000465c (*(int *)(0x1000465cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004594
 */

undefined4 recovered_10004594(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  int *extraout_r3 = 0;
  byte *pbVar2;
  undefined4 uVar3;

  pbVar2 = (byte *)0x0;
  uVar3 = 0;
  if (param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x7d4U))) {
    pbVar2 = (byte *)(param_1 * 0xac + ((uintptr_t)pf_module_state + 0x520U));
  }
  if (param_2 != (undefined4 *)0x0 && param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x7d4U))) {
    recovered_10006290((int)pbVar2);
    if (*(int *)(pbVar2 + 0x58) != 0) {
      iVar1 = recovered_1000540c((int)pbVar2,(uint *)0x0,(uint3)extraout_r2);
      if (iVar1 == 0) {
        if (*(int *)(pbVar2 + 0x58) != 0) {
          recovered_100050e0(pbVar2,extraout_r1,extraout_r2_00,extraout_r3);
        }
      }
      else {
        *param_2 = *(undefined4 *)(pbVar2 + 0x34);
        recovered_10004e1c(param_3,param_4,(char *)(((uintptr_t)pf_module_state + 0x91U)));
        uVar3 = 1;
      }
    }
    DataMemoryBarrier(0xb);
    pbVar2[0x30] = 0;
    pbVar2[0x31] = 0;
    pbVar2[0x32] = 0;
    pbVar2[0x33] = 0;
  }
  return uVar3;
}

#undef DAT_10004654
#undef DAT_10004658
#undef DAT_1000465c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004660
 */

void recovered_10004660(uint param_1,uint param_2,int param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100062c4(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000467c
 */

void recovered_1000467c(uint param_1,uint param_2,int param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100062c4(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_1000473c
#define DAT_1000473c (*(int *)(0x1000473cU))
#undef DAT_10004740
#define DAT_10004740 (*(int *)(0x10004740U))
#undef DAT_10004744
#define DAT_10004744 (*(int *)(0x10004744U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004698
 */

undefined4 recovered_10004698(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r2 = 0;
  int *extraout_r3 = 0;
  byte *pbVar3;

  if (*(uint *)(((uintptr_t)pf_module_state + 0x7d4U)) <= param_1) {
    return 0;
  }
  pbVar3 = (byte *)(param_1 * 0xac + ((uintptr_t)pf_module_state + 0x520U));
  recovered_10006290((int)pbVar3);
  uVar1 = 0;
  if (*(int *)(pbVar3 + 0x58) != 0) {
    iVar2 = recovered_10005da8((int)pbVar3);
    uVar1 = 1;
    if ((iVar2 == 0) && (uVar1 = 0, *(int *)(pbVar3 + 0x58) != 0)) {
      recovered_10004b4c(pbVar3,(char *)(((uintptr_t)pf_module_state + 0x294U)));
      recovered_100050e0(pbVar3,extraout_r1,extraout_r2,extraout_r3);
      uVar1 = 0;
    }
  }
  DataMemoryBarrier(0xb);
  pbVar3[0x30] = 0;
  pbVar3[0x31] = 0;
  pbVar3[0x32] = 0;
  pbVar3[0x33] = 0;
  return uVar1;
}

#undef DAT_1000473c
#undef DAT_10004740
#undef DAT_10004744

#undef DAT_10004888
#define DAT_10004888 (*(int *)(0x10004888U))
#undef DAT_1000488c
#define DAT_1000488c (*(int *)(0x1000488cU))
#undef DAT_10004890
#define DAT_10004890 (*(int *)(0x10004890U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004748
 */

int recovered_10004748(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 extraout_r2 = 0;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;

  puVar5 = (undefined1 *)0x0;
  iVar6 = 0;
  if (param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x7d4U))) {
    puVar5 = (undefined1 *)(param_1 * 0xac + ((uintptr_t)pf_module_state + 0x520U));
  }
  if (param_2 != 0 && param_1 < *(uint *)(((uintptr_t)pf_module_state + 0x7d4U))) {
    recovered_10006290((int)puVar5);
    if ((*(int *)(puVar5 + 0x58) != 0) &&
       (iVar4 = recovered_1000540c((int)puVar5,(uint *)0x0,(uint3)extraout_r2), iVar4 != 0)) {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      for (iVar6 = 0; iVar6 != 0x40; iVar6 = iVar6 + 1) {
        *(undefined1 *)(param_2 + iVar6) = 0;
      }
      iVar6 = ((uintptr_t)pf_module_state + 0x2b4U);
      for (iVar7 = 0; iVar7 != 4; iVar7 = iVar7 + 1) {
        *(undefined1 *)(param_2 + iVar7) = *(undefined1 *)(iVar6 + iVar7);
      }
      *(undefined1 *)(param_2 + 6) = uVar3;
      *(undefined1 *)(param_2 + 5) = uVar2;
      *(undefined1 *)(param_2 + 4) = uVar1;
      for (iVar6 = 0; iVar6 != 4; iVar6 = iVar6 + 1) {
        *(undefined1 *)(param_2 + 8 + iVar6) = 0;
      }
      for (iVar6 = 0; iVar6 != 8; iVar6 = iVar6 + 1) {
        *(undefined1 *)(param_2 + 0x10 + iVar6) = 0;
      }
      for (iVar6 = 0; iVar6 != 0x10; iVar6 = iVar6 + 1) {
        *(undefined1 *)(param_2 + 0x20 + iVar6) = puVar5[iVar6 + 0x62];
      }
      iVar6 = iVar4;
    }
    DataMemoryBarrier(0xb);
    *(undefined4 *)(puVar5 + 0x30) = 0;
  }
  return iVar6;
}

#undef DAT_10004888
#undef DAT_1000488c
#undef DAT_10004890

#undef DAT_10004910
#define DAT_10004910 (*(int *)(0x10004910U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004894
 */

void recovered_10004894(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0x2c) != 0) {
    recovered_100050e0(param_1,param_2,param_3,param_4);
    recovered_10004d9c(param_1,0x18,0);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,(uint)param_1[1],
                       (uint)param_1[2],4,*(ushort *)(param_1 + 0x60) & 0xfffffffb | 0x400);
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
  }
  return;
}

#undef DAT_10004910

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10004914(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10004ad8((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10004ad8((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10004ad8((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10004ad8((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10004ad8((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10004b48
#define DAT_10004b48 (*(uint8_t * *)(0x10004b48U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ad8
 */

uint recovered_10004ad8(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;

  if (((api != (int *)0x0) && ((code *)*api == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x5f < (uint)api[2])) {
    pcVar2 = (*(uint32_t *)(uint32_t[]){0x54584b57ULL});
    if (out != (void *)0x0) {
      pcVar2 = (code *)api[0x17];
    }
    if (out != (void *)0x0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(bus,slot,function,offset,width,out);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10004b48

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
#define auStack_d4 (*(undefined1 (*)[212])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b4c
 */

void recovered_10004b4c(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;

  recovered_10004e1c(auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x172U)));
  recovered_10004e34((int)auStack_d4,0xc0,(uint)*param_1,2);
  recovered_10004e94((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x182U)));
  recovered_10004e34((int)auStack_d4,0xc0,(uint)param_1[1],2);
  recovered_10004e94((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x184U)));
  recovered_10004ee8((int)auStack_d4,0xc0,(uint)param_1[2]);
  recovered_10004e94((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x186U)));
  recovered_10004e94((int)auStack_d4,0xc0,param_2);
  recovered_10004e94((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x189U)));
  recovered_10004ee8((int)auStack_d4,0xc0,*(int *)(param_1 + 0x44));
  recovered_10004e94((int)auStack_d4,0xc0,(char *)(((uintptr_t)pf_module_state + 0x192U)));
  recovered_10004e34((int)auStack_d4,0xc0,*(uint *)(param_1 + 0x48),8);
  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
  if ((((piVar1 != (int *)0x0) && (*piVar1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) && (0x2b < (uint)piVar1[2])) &&
     ((code *)piVar1[10] != (code *)0x0)) {
    (*(code *)piVar1[10])(auStack_d4);
  }
  param_1[0x4c] = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return;
}

#undef DAT_10004c98
#undef DAT_10004c9c
#undef DAT_10004ca0
#undef DAT_10004ca4
#undef DAT_10004ca8
#undef DAT_10004cac
#undef DAT_10004cb0
#undef DAT_10004cb4
#undef auStack_d4

#undef DAT_10004d94
#define DAT_10004d94 (*(int *)(0x10004d94U))
#undef DAT_10004d98
#define DAT_10004d98 (*(int *)(0x10004d98U))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb8
 */

bool recovered_10004cb8(byte *param_1,uint param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  bVar3 = false;
  param_1[0x44] = 3;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(uint *)(param_1 + 0x48) = param_2 | 0x40000;
  local_1c = 0;
  iVar1 = recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,(uint)param_1[1],
                             (uint)param_1[2],4,param_2);
  if (iVar1 != 0) {
    param_1[0x44] = 4;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 4;
    param_1[0x4b] = 0;
    param_1[0x5c] = 1;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    uVar2 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,(uint)param_1[1],
                               (uint)param_1[2],4,2,&local_1c);
    if (uVar2 != 0) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | local_1c;
      bVar3 = (local_1c & 0x406) == 0x402;
    }
  }
  return bVar3;
}

#undef DAT_10004d94
#undef DAT_10004d98
#undef local_1c

#undef DAT_10004e14
#define DAT_10004e14 (*(int *)(0x10004e14U))
#undef DAT_10004e18
#define DAT_10004e18 (*(int *)(0x10004e18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d9c
 */

uint recovered_10004d9c(void *device,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_r3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;

  iVar2 = *(int *)((int)device + 0x2c);
  if (iVar2 != 0) {
    in_r3 = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
  }
  if ((iVar2 != 0 && in_r3 != (int *)0x0) && (*in_r3 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)in_r3[2] < 0xc4) {
      if ((uint)in_r3[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)in_r3[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_10004e04;
    }
    UNRECOVERED_JUMPTABLE = (code *)in_r3[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_10004e04:
                    /* WARNING: Could not recover jumptable at 0x10004e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(iVar2 + offset,4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10004e14
#undef DAT_10004e18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e1c
 */

void recovered_10004e1c(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0 || param_2 == 0) {
    return;
  }
  *param_1 = 0;
  recovered_10004e94((int)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e34
 */

void recovered_10004e34(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_10004f98(param_1,param_2,bVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e94
 */

void recovered_10004e94(int param_1,uint param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10004fd4(param_1);
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
 * Address: 0x10004ee8
 */

void recovered_10004ee8(int param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10004f98(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100074c0(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10004f98(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f98
 */

void recovered_10004f98(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10004fd4(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd4
 */

int recovered_10004fd4(int param_1)

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


#undef DAT_1000506c
#define DAT_1000506c (*(int *)(0x1000506cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ffc
 */

undefined4
recovered_10004ffc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_1000506c

#undef DAT_100050b0
#define DAT_100050b0 (*(int *)(0x100050b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005070
 */

undefined4 recovered_10005070(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x34)) ||
     ((code *)param_1[0xc] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100050a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0xc])(param_2);
  return uVar1;
}

#undef DAT_100050b0

#define abStackY_90 (*(byte (*)[144])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b4
 */

uint recovered_100050b4(void *device,uint offset,uint value)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100054b4((int)device,offset,1,(int *)value,abStackY_90 + 0x87);
  return uVar1;
}

#undef abStackY_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e0
 */

void recovered_100050e0(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    recovered_10005794(param_1);
  }
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  recovered_10005980((int)param_1);
  recovered_10005760((int)param_1);
  recovered_100050b4(param_1,0xfd55,4);
  recovered_100050b4(param_1,0xfd69,4);
  recovered_100050b4(param_1,0xfd50,3);
  recovered_100050b4(param_1,0xfe75,6);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000516c
 */

bool recovered_1000516c(int param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar4 = 0;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (param_3 == uVar3) break;
    uVar2 = recovered_100050b4((void *)param_1,(uint)*(ushort *)(param_2 + iVar4),
                               (uint)*(byte *)(param_2 + uVar3 * 4 + 2));
    iVar4 = iVar4 + 4;
    uVar1 = uVar3 + 1;
  } while (uVar2 != 0);
  return param_3 <= uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051d8
 */

uint recovered_100051d8(void *device,uint offset,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (out != (void *)0x0) {
    *(undefined1 *)out = 0;
  }
  uVar1 = recovered_100054b4((int)device,offset,0,(int *)0x0,out);
  return uVar1;
}


#undef DAT_100053fc
#define DAT_100053fc (*(uint *)(0x100053fcU))
#undef DAT_10005400
#define DAT_10005400 (*(uint *)(0x10005400U))
#undef DAT_10005404
#define DAT_10005404 (*(uint *)(0x10005404U))
#undef DAT_10005408
#define DAT_10005408 (*(int *)(0x10005408U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005204
 */

bool recovered_10005204(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;

  uVar1 = (*(uint32_t *)(uint32_t[]){0x39386ULL});
  uVar2 = *(uint *)(param_1 + 0x38);
  if (((*(uint32_t *)(uint32_t[]){0x39386ULL}) < uVar2) || (bVar6 = false, param_2 != 0)) {
    uVar4 = 0x1e;
    bVar7 = uVar2 < (*(uint32_t *)(uint32_t[]){0x5b8d80ULL});
    if (!bVar7 && param_2 == 0) {
      uVar4 = (*(uint32_t *)(uint32_t[]){0x17d7840ULL});
      if (uVar2 < (*(uint32_t *)(uint32_t[]){0x17d7840ULL})) {
        uVar4 = uVar2;
      }
      uVar4 = recovered_100074c0(uVar4,1000000);
      uVar4 = uVar4 << 1;
    }
    uVar2 = uVar4 - 2;
    bVar5 = 1;
    while( true ) {
      bVar8 = 0x4e < uVar2;
      bVar6 = uVar2 == 0x4f;
      if (uVar2 < 0x50) {
        bVar8 = 2 < bVar5;
        bVar6 = bVar5 == 3;
      }
      if (bVar8 && !bVar6) break;
      uVar2 = uVar2 * 2 + 2;
      bVar5 = bVar5 + 1;
    }
    bVar6 = false;
    if (uVar2 - 0x50 < 0x81) {
      uVar2 = recovered_100050b4((void *)param_1,0xfc02,1);
      iVar3 = uVar4 * 500000;
      if (bVar7 || param_2 != 0) {
        iVar3 = uVar1 + 1;
      }
      if (uVar2 != 0) {
        recovered_100074c0(0x7d,uVar4);
        uVar1 = recovered_100050b4((void *)param_1,0xfc03,0xff);
        if ((((uVar1 != 0) && (uVar1 = recovered_100050b4((void *)param_1,0xfc11,0xff), uVar1 != 0))
            && (uVar1 = recovered_100050b4((void *)param_1,0xfc12,7), uVar1 != 0)) &&
           ((uVar1 = recovered_100050b4((void *)param_1,0xfc0f,0xff), uVar1 != 0 &&
            (uVar1 = recovered_100050b4((void *)param_1,0xfc11,0x80), uVar1 != 0)))) {
          recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),1000);
          uVar1 = recovered_100050b4((void *)param_1,0xfc02,1);
          if (uVar1 != 0) {
            uVar1 = recovered_100050b4((void *)param_1,0xfda0,0xff);
            bVar6 = uVar1 != 0;
            if (bVar6) {
              *(int *)(param_1 + 0x50) = iVar3;
            }
          }
        }
      }
    }
  }
  return bVar6;
}

#undef DAT_100053fc
#undef DAT_10005400
#undef DAT_10005404
#undef DAT_10005408

#define uStack_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000540c
 */

undefined4 recovered_1000540c(int param_1,uint *param_2,uint3 param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;

  local_18 = 0;
  uStack_1c = (uint)param_3;
  bVar1 = recovered_100055b8(param_1,0x14,&local_18);
  if (bVar1) {
    if ((local_18 & 0xc10000) == 0x10000) {
      bVar1 = (local_18 & 0x2000000) != 0;
      iVar3 = 0x10000;
      if (bVar1) {
        iVar3 = *(int *)(param_1 + 0x54);
      }
      if (!bVar1 || iVar3 == 0) {
        uVar2 = recovered_100051d8((void *)param_1,0xfd6e,(void *)((int)&uStack_1c + 3));
        if (uVar2 == 0) {
          return 0;
        }
        if ((uStack_1c & 0x6000000) == 0) {
          if (param_2 == (uint *)0x0) {
            return 1;
          }
          *param_2 = local_18;
          return 1;
        }
        local_18 = local_18 | uStack_1c >> 0x18;
      }
    }
  }
  else {
    local_18 = 0x140000;
  }
  *(uint *)(param_1 + 0x48) = local_18;
  return 0;
}

#undef uStack_1c
#undef local_18

#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b4
 */

undefined4 recovered_100054b4(int param_1,uint param_2,int param_3,int *param_4,byte *param_5)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 0;
  local_24 = 0;
  if (param_5 != (byte *)0x0) {
    uVar2 = 0x80000000;
    if (param_3 != 0) {
      uVar2 = 0xc0000000;
    }
    uVar2 = uVar2 | (param_2 & 0x3fff) << 0x10;
    if (param_3 != 0) {
      uVar2 = uVar2 | (uint)*param_5 | (int)param_4 << 8;
    }
    uVar2 = recovered_10004d9c((void *)param_1,0x10,uVar2);
    if (uVar2 != 0) {
      iVar3 = 0x3e9;
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) break;
        bVar1 = recovered_100055b8(param_1,0x10,&local_24);
        uVar2 = 0;
        if (bVar1) {
          uVar2 = local_24;
        }
        if (!bVar1 || uVar2 == 0xffffffff) break;
        if (-1 < (int)uVar2) {
          if ((param_3 == 0) || ((uint)*param_5 == (uVar2 & 0xff))) {
            *param_5 = (byte)uVar2;
            return 1;
          }
          goto LAB_1000556c;
        }
        bVar1 = recovered_10005664(param_1,1);
      } while (bVar1);
      uVar2 = local_24 & 0xffff;
LAB_1000556c:
      uVar2 = (uVar2 & 0xffff) + param_2 * 0x10000;
      goto LAB_10005580;
    }
    uVar2 = (uint)*param_5;
  }
  uVar2 = uVar2 | param_2 << 0x10;
LAB_10005580:
  *(uint *)(param_1 + 0x48) = uVar2;
  return 0;
}

#undef local_24

#undef DAT_1000565c
#define DAT_1000565c (*(int *)(0x1000565cU))
#undef DAT_10005660
#define DAT_10005660 (*(int *)(0x10005660U))
#define local_14 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b8
 */

bool recovered_100055b8(int param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  code *pcVar3;

  piVar2 = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
  local_14 = 0;
  if (param_3 == (undefined4 *)0x0) {
    return false;
  }
  if (*(int *)(param_1 + 0x2c) == 0 || piVar2 == (int *)0x0) {
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
    if (pcVar3 != (code *)0x0) goto LAB_10005638;
  }
  pcVar3 = (code *)piVar2[0x1a];
  if (pcVar3 == (code *)0x0) {
    return false;
  }
LAB_10005638:
  iVar1 = (*pcVar3)(*(int *)(param_1 + 0x2c) + param_2,4,&local_14);
  if (iVar1 != 0) {
    *param_3 = local_14;
  }
  return iVar1 != 0;
}

#undef DAT_1000565c
#undef DAT_10005660
#undef local_14

#undef DAT_100056c4
#define DAT_100056c4 (*(int *)(0x100056c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005664
 */

bool recovered_10005664(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;

  bVar1 = recovered_100056c8(param_1);
  if (bVar1) {
    puVar2 = *(uint **)(param_1 + 0x74);
    if (puVar2 != (uint *)0x0) {
      uVar4 = *puVar2;
      if (uVar4 < param_2) {
        param_2 = uVar4;
      }
      *puVar2 = uVar4 - param_2;
    }
    iVar3 = recovered_10005070(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),param_2);
    return iVar3 != 0;
  }
  return false;
}

#undef DAT_100056c4

#undef DAT_1000571c
#define DAT_1000571c (*(int *)(0x1000571cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056c8
 */

bool recovered_100056c8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 == (int *)0x0) {
    return true;
  }
  if (*piVar2 == 0) {
    return false;
  }
  iVar1 = recovered_10005720(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
  return (uint)(iVar1 - piVar2[1]) < 0x5c;
}

#undef DAT_1000571c

#undef DAT_1000575c
#define DAT_1000575c (*(int *)(0x1000575cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005720
 */

undefined4 recovered_10005720(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x30)) ||
     ((code *)param_1[0xb] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10005750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0xb])();
  return uVar1;
}

#undef DAT_1000575c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

void recovered_10005760(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100050b4((void *)param_1,0xfd54,0x44);
  recovered_100050b4((void *)param_1,0xfda5,0xc0);
  return;
}


#undef DAT_10005978
#define DAT_10005978 (*(int *)(0x10005978U))
#undef DAT_1000597c
#define DAT_1000597c (*(int *)(0x1000597cU))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005794
 */

uint recovered_10005794(void *device)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint dma_first=0;
  byte control_status=0;

  local_24 = 0;
  uVar4 = recovered_10004d9c(device,4,0x10000000);
  uVar5 = recovered_10004d9c(device,0xc,0x10000000);
  uVar6 = recovered_100050b4(device,0xfe2c,0x80);
  uVar7 = recovered_100050b4(device,0xfe34,0x80);
  uVar8 = recovered_10004d9c(device,0x18,0);
  recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
  iVar10 = 0x3e9;
  bVar2 = 0;
  do {
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) break;
    local_24 = 0;
    bVar3 = recovered_100055b8((int)device,4,&dma_first);
    if (!bVar3 || dma_first==0xffffffffU) goto LAB_10005908;
    bVar3 = recovered_100055b8((int)device,0xc,&local_24);
    iVar1 = 0;
    if (bVar3) {
      iVar1 = local_24;
    }
    if ((!bVar3 || iVar1 == -1) ||
       (uVar9 = recovered_100051d8(device,0xfe2c,&control_status),
       uVar9 == 0)) goto LAB_10005908;
    if (((int)(dma_first | (uint)local_24)>=0) && !(control_status&4)) {
      bVar2 = 1;
      goto LAB_10005908;
    }
    bVar3 = recovered_10005664((int)device,10);
  } while (bVar3);
  bVar2 = 0;
LAB_10005908:
  uVar9 = 0;
  bVar3 = recovered_10005a2c(device,0);
  recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
  if (((bool)(((((uVar8 != 0 && uVar7 != 0) && uVar6 != 0) && uVar5 != 0) && uVar4 != 0) & bVar2))
     && (bVar3)) {
    uVar9 = 1;
    iVar10 = 0x94;
  }
  else {
    *(undefined4 *)((int)device + 0x98) = 1;
    iVar10 = 0x90;
  }
  *(undefined4 *)((int)device + iVar10) = 0;
  return uVar9;
}

#undef DAT_10005978
#undef DAT_1000597c
#undef local_24

#undef DAT_100059e8
#define DAT_100059e8 (*(int *)(0x100059e8U))
#undef DAT_100059ec
#define DAT_100059ec (*(int *)(0x100059ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005980
 */

void recovered_10005980(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = *(int *)(param_1 + 0x94);
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x98);
  }
  if (bVar2 && iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 != 0) {
      recovered_10005b50(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),iVar1);
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      recovered_10005b50(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),*(int *)(param_1 + 0x7c));
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4)
    ;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8)
    ;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12)
    ;
    return;
  }
  return;
}

#undef DAT_100059e8
#undef DAT_100059ec

#undef DAT_10005a28
#define DAT_10005a28 (*(int *)(0x10005a28U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f0
 */

void recovered_100059f0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_10005a28

#undef DAT_10005b44
#define DAT_10005b44 (*(int *)(0x10005b44U))
#undef DAT_10005b48
#define DAT_10005b48 (*(int *)(0x10005b48U))
#undef DAT_10005b4c
#define DAT_10005b4c (*(int *)(0x10005b4cU))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a2c
 */

bool recovered_10005a2c(byte *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1 = 0;
  uint uVar4;
  bool bVar5;
  uint pci_confirm=0;

  bVar5 = false;
  local_20 = 0;
  uVar2 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,(uint)param_1[1],
                             (uint)param_1[2],4,2,&local_20);
  uVar4 = extraout_r1;
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar4 = 0xffff;
    uVar1 = local_20;
  }
  if (uVar2 != 0 && uVar1 != uVar4) {
    local_20 = uVar1 & 0xfffffffb | 0x402;
    if (param_2 != 0) {
      local_20 = uVar1 | 0x406;
    }
    iVar3 = recovered_10004ffc(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,(uint)param_1[1],
                               (uint)param_1[2],4,local_20);
    if ((iVar3 != 0) &&
       (uVar4 = recovered_10004ad8(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),(uint)*param_1,
                                   (uint)param_1[1],(uint)param_1[2],4,2,
                                   &pci_confirm), uVar4 != 0)) {
      iVar3 = 0x402;
      if (param_2 != 0) {
        iVar3 = 0x406;
      }
      bVar5 = (pci_confirm & 0x406U) == (uint)iVar3;
    }
  }
  return bVar5;
}

#undef DAT_10005b44
#undef DAT_10005b48
#undef DAT_10005b4c
#undef local_20

#undef DAT_10005b8c
#define DAT_10005b8c (*(int *)(0x10005b8cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

void recovered_10005b50(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x3c) {
      return;
    }
    if ((code *)param_1[0xe] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10005b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0xe])(param_2);
      return;
    }
  }
  return;
}

#undef DAT_10005b8c

#define abStack_b0 (*(byte (*)[176])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

bool recovered_10005b90(int param_1,int param_2,uint3 param_3,int param_4,uint *param_5,int param_6)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte unaff_r4;
  int iVar5;
  int iVar6;

  *(int *)(param_1 + 0x44) = param_2 + 100;
  bVar2 = false;
  iVar3 = recovered_1000540c(param_1,(uint *)0x0,param_3);
  if ((((iVar3 != 0) && (bVar1 = recovered_10005e9c(param_1), bVar1)) &&
      (uVar4 = recovered_100050b4((void *)param_1,0xfda1,0xff), uVar4 != 0)) &&
     ((uVar4 = recovered_100050b4((void *)param_1,0xfd5b,1), uVar4 != 0 &&
      (uVar4 = recovered_100050b4((void *)param_1,0xfdb3,0xff), uVar4 != 0)))) {
    iVar3 = 1000;
    if (param_4 == 9) {
      iVar3 = 5000;
    }
    iVar3 = recovered_10005f28(param_1,1,(uint)(param_4 - 6U < 0xfffffffe),iVar3);
    if ((iVar3 != 0) && (bVar2 = true, param_4 != 4)) {
      iVar3 = 0xfda9;
      iVar5 = 5;
      if (param_4 == 2) {
        iVar3 = 64000;
        iVar5 = 0x10;
      }
      iVar6 = 0;
      bVar2 = false;
      do {
        if (iVar5 == iVar6) {
          if (param_4 != 2) {
            bVar2 = recovered_100060dc(abStack_b0 + 0x80,param_5);
            return bVar2;
          }
          if (param_6 == 0) {
            return false;
          }
          if (0x3f < unaff_r4) {
            return false;
          }
          for (iVar3 = 0; iVar3 != 0xf; iVar3 = iVar3 + 1) {
            *(byte *)(param_6 + iVar3) = abStack_b0[iVar3 + 0x81];
          }
          *(undefined1 *)(param_6 + 0xf) = 1;
          return true;
        }
        uVar4 = recovered_100051d8((void *)param_1,iVar3 + iVar6 & 0xffff,abStack_b0 + iVar6 + 0x80)
        ;
        iVar6 = iVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  return bVar2;
}

#undef abStack_b0

#undef DAT_10005da4
#define DAT_10005da4 (*(uint *)(0x10005da4U))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d40
 */

undefined4 recovered_10005d40(int param_1,int param_2,uint3 param_3,int param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  iVar2 = 1;
  local_14 = 0;
  if (param_4 != 0) {
    iVar2 = 9;
  }
  bVar1 = recovered_10005b90(param_1,param_2,param_3,iVar2,&local_14,0);
  if (bVar1) {
    if ((local_14 & (*(uint32_t *)(uint64_t[]){0xe92d40f0fff9a008ULL})) == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x48) = local_14;
  }
  return 0;
}

#undef DAT_10005da4
#undef local_14

#undef DAT_10005e90
#define DAT_10005e90 (*(uint32_t *)(0x10005e90U))
#undef DAT_10005e94
#define DAT_10005e94 (*(uint32_t *)(0x10005e94U))
#undef DAT_10005e98
#define DAT_10005e98 (*(int *)(0x10005e98U))
#define auStack_22 (*(undefined1 (*)[34])(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005da8
 */

/* WARNING: Removing unreachable block (ram,0x10005e78) */

undefined4 recovered_10005da8(int param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10005720(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
  iVar2 = 0x1389;
  *(undefined1 **)(param_1 + 0x74) = auStack_22 + -6;
  while (((iVar2 = iVar2 + -1, iVar2 != 0 && (bVar1 = recovered_100056c8(param_1), bVar1)) &&
         (bVar1 = recovered_10005b90(param_1,0xd,(uint3)*(undefined4 *)(param_1 + 0x40),1,
                                     (uint *)(auStack_22 + -10),0), bVar1))) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    bVar1 = recovered_100056c8(param_1);
    if ((!bVar1) || (bVar1 = recovered_10005664(param_1,1000), !bVar1)) break;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return 0;
}

#undef DAT_10005e90
#undef DAT_10005e94
#undef DAT_10005e98
#undef auStack_22

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e9c
 */

bool recovered_10005e9c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = recovered_100050b4((void *)param_1,0xfda9,0xff);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = 0;
    do {
      uVar4 = uVar2;
      if (uVar4 == 4) break;
      uVar3 = recovered_100050b4((void *)param_1,uVar4 - 0x256 & 0xffff,0xff);
      uVar2 = uVar4 + 1;
    } while (uVar3 != 0);
    bVar1 = 3 < uVar4;
  }
  return bVar1;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f28
 */

undefined4 recovered_10005f28(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r2 = 0;
  byte bVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;

  uVar9 = 0xffffffbf;
  uVar8 = 0;
  if (param_2 != 0) {
    uVar9 = 0xffffff9f;
  }
  uStack_24 = 0;
  iVar2 = param_3;
  while (uVar8 < (uint)(param_4 * 1000)) {
    iVar2 = recovered_1000540c(param_1,(uint *)0x0,(uint3)iVar2);
    if ((iVar2 == 0) ||
       (uVar3 = recovered_100051d8((void *)param_1,0xfdb3,(void *)((int)&uStack_24 + 3)), uVar3 == 0
       )) goto LAB_100060bc;
    if ((uStack_24 & 0x10000000) != 0) break;
    if ((uVar9 | uStack_24 >> 0x18) == 0xffffffff) {
      bVar5 = 0xe2;
      bVar7 = 0x62;
      if (param_2 != 0) {
        bVar5 = 0x80;
      }
      if (param_3 != 0) {
        bVar7 = 0xe2;
      }
      uVar8 = recovered_100051d8((void *)param_1,0xfda3,(void *)((int)&uStack_24 + 2));
      if ((uVar8 == 0) ||
         (uVar8 = recovered_100051d8((void *)param_1,0xfda4,(void *)((int)&uStack_24 + 1)),
         uVar8 == 0)) goto LAB_100060bc;
      if (((bVar7 & bVar5 & PF_PART1(uStack_24, 2)) == 0) && ((uStack_24 & 0x100) == 0)) {
        return 1;
      }
      break;
    }
    uVar3 = 1000;
    uVar4 = param_4 * 1000 - uVar8;
    if (uVar8 < 1000) {
      uVar3 = 10;
    }
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    bVar1 = recovered_10005664(param_1,uVar3);
    uVar8 = uVar3 + uVar8;
    iVar2 = extraout_r2;
    if (!bVar1) break;
  }
  uVar8 = recovered_100051d8((void *)param_1,0xfda3,(void *)((int)&uStack_24 + 2));
  if ((uVar8 != 0) &&
     (uVar8 = recovered_100051d8((void *)param_1,0xfda4,(void *)((int)&uStack_24 + 1)), uVar8 != 0))
  {
    *(uint *)(param_1 + 0x48) =
         (uStack_24 >> 0x10 & 0xff) << 8 | (uStack_24 >> 0x18) << 0x10 | uStack_24 >> 8 & 0xff;
  }
LAB_100060bc:
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  recovered_10005760(param_1);
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  return 0;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060dc
 */

bool recovered_100060dc(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  if (param_1 == (byte *)0x0 || param_2 == (uint *)0x0) {
    return false;
  }
  bVar1 = *param_1;
  if (bVar1 < 0x40) {
    uVar2 = *(uint *)(param_1 + 1);
    *param_2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  }
  return bVar1 < 0x40;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006110
 */

uint recovered_10006110(int param_1,uint param_2,uint param_3)

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
 * Address: 0x10006170
 */

uint recovered_10006170(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 0xb | (uint)param_1[2] << 8 | 0x80000000;
  }
  return uVar1;
}


#undef DAT_10006228
#define DAT_10006228 (*(int *)(0x10006228U))
#undef DAT_1000622c
#define DAT_1000622c (*(int *)(0x1000622cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006198
 */

uint recovered_10006198(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;

  uVar1 = 0;
  piVar2 = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
  if ((piVar2 == (int *)0x0) || (*piVar2 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) goto LAB_10006200;
  if ((uint)piVar2[2] < 0xfc) {
    if ((uint)piVar2[2] < 0x38) goto LAB_10006200;
LAB_100061ec:
    pcVar4 = (code *)piVar2[0xd];
    if (pcVar4 == (code *)0x0) goto LAB_10006200;
  }
  else {
    pcVar4 = (code *)piVar2[0x3e];
    if (pcVar4 == (code *)0x0) goto LAB_100061ec;
  }
  uVar1 = (*pcVar4)(0x1fff);
LAB_10006200:
  *param_1 = uVar1;
  uVar3 = uVar1 + 0xfff & 0xfffff000;
  if (0xfffff000 < uVar1) {
    uVar3 = 0;
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_10006228
#undef DAT_1000622c

#undef DAT_1000628c
#define DAT_1000628c (*(int *)(0x1000628cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006230
 */

undefined4 recovered_10006230(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) || ((uint)param_1[2] < 0x74)) ||
     ((param_4 == 0 || param_3 == 0 || ((code *)param_1[0x1c] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x1c])(param_2,param_3,0x1000);
  return uVar1;
}

#undef DAT_1000628c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006290
 */

void recovered_10006290(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = (int *)(param_1 + 0x30);
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


#undef DAT_10006e54
#define DAT_10006e54 (*(uint32_t *)(0x10006e54U))
#undef DAT_10006e58
#define DAT_10006e58 (*(uint32_t *)(0x10006e58U))
#undef DAT_10006e5c
#define DAT_10006e5c (*(uint *)(0x10006e5cU))
#undef DAT_10006e60
#define DAT_10006e60 (*(int *)(0x10006e60U))
#undef DAT_10006e64
#define DAT_10006e64 (*(int *)(0x10006e64U))
#undef DAT_10006e68
#define DAT_10006e68 (*(int *)(0x10006e68U))
#undef DAT_10006e6c
#define DAT_10006e6c (*(int *)(0x10006e6cU))
#undef DAT_10006e70
#define DAT_10006e70 (*(int *)(0x10006e70U))
#undef DAT_10006e74
#define DAT_10006e74 (*(int *)(0x10006e74U))
#undef DAT_10006e78
#define DAT_10006e78 (*(int *)(0x10006e78U))
#undef DAT_10006e7c
#define DAT_10006e7c (*(int *)(0x10006e7cU))
#undef DAT_10006e80
#define DAT_10006e80 (*(int *)(0x10006e80U))
#undef DAT_10006e84
#define DAT_10006e84 (*(int *)(0x10006e84U))
#undef DAT_10006e88
#define DAT_10006e88 (*(int *)(0x10006e88U))
#undef DAT_10006e8c
#define DAT_10006e8c (*(int *)(0x10006e8cU))
#undef DAT_10006e90
#define DAT_10006e90 (*(int *)(0x10006e90U))
#undef DAT_10006e94
#define DAT_10006e94 (*(int *)(0x10006e94U))
#undef DAT_10006e98
#define DAT_10006e98 (*(int *)(0x10006e98U))
#undef DAT_10006e9c
#define DAT_10006e9c (*(int *)(0x10006e9cU))
#undef DAT_10006ea0
#define DAT_10006ea0 (*(int *)(0x10006ea0U))
#undef DAT_10006ea4
#define DAT_10006ea4 (*(int *)(0x10006ea4U))
#undef DAT_10006ea8
#define DAT_10006ea8 (*(int *)(0x10006ea8U))
#undef DAT_10006eac
#define DAT_10006eac (*(int *)(0x10006eacU))
#undef DAT_10006eb0
#define DAT_10006eb0 (*(int *)(0x10006eb0U))
#undef DAT_10006eb4
#define DAT_10006eb4 (*(int *)(0x10006eb4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#define local_1de (*(undefined2 *)(pf_stack_frame + 242))
#define local_1dc (*(undefined2 *)(pf_stack_frame + 244))
#define local_1da (*(undefined2 *)(pf_stack_frame + 246))
#define local_1d8 (*(undefined2 *)(pf_stack_frame + 248))
#define local_1d6 (*(undefined2 *)(pf_stack_frame + 250))
#define local_2bc (*(uint *)(pf_stack_frame + 20))
#define local_2b4 (*(uint *)(pf_stack_frame + 28))
#define local_2b0 (*(byte *)(pf_stack_frame + 32))
#define local_2af (*(byte *)(pf_stack_frame + 33))
#define local_2ae (*(byte *)(pf_stack_frame + 34))
#define local_2ad (*(byte *)(pf_stack_frame + 35))
#define local_2ac (*(uint (*)[171])(pf_stack_frame + 36))
#define local_22c (*(uint *)(pf_stack_frame + 164))
#define local_228 (*(undefined1 * *)(pf_stack_frame + 168))
#define local_224 (*(undefined4 *)(pf_stack_frame + 172))
#define local_220 (*(undefined4 *)(pf_stack_frame + 176))
#define local_21c (*(undefined2 *)(pf_stack_frame + 180))
#define local_21a (*(undefined2 *)(pf_stack_frame + 182))
#define local_218 (*(undefined2 *)(pf_stack_frame + 184))
#define local_216 (*(undefined1 *)(pf_stack_frame + 186))
#define local_215 (*(undefined1 *)(pf_stack_frame + 187))
#define local_214 (*(undefined2 *)(pf_stack_frame + 188))
#define local_212 (*(undefined1 *)(pf_stack_frame + 190))
#define local_211 (*(undefined1 *)(pf_stack_frame + 191))
#define local_210 (*(undefined2 *)(pf_stack_frame + 192))
#define bStack_2b8 (*(byte *)(pf_stack_frame + 24))
#define local_20e (*(undefined1 *)(pf_stack_frame + 194))
#define local_20d (*(undefined1 *)(pf_stack_frame + 195))
#define local_20c (*(undefined2 *)(pf_stack_frame + 196))
#define local_20a (*(undefined1 *)(pf_stack_frame + 198))
#define local_209 (*(undefined1 *)(pf_stack_frame + 199))
#define local_208 (*(undefined2 *)(pf_stack_frame + 200))
#define local_206 (*(undefined1 *)(pf_stack_frame + 202))
#define local_205 (*(undefined1 *)(pf_stack_frame + 203))
#define local_204 (*(undefined2 *)(pf_stack_frame + 204))
#define local_202 (*(undefined2 *)(pf_stack_frame + 206))
#define local_200 (*(undefined2 *)(pf_stack_frame + 208))
#define local_1fe (*(undefined2 *)(pf_stack_frame + 210))
#define local_1fc (*(undefined2 *)(pf_stack_frame + 212))
#define local_1fa (*(undefined2 *)(pf_stack_frame + 214))
#define local_1f8 (*(undefined2 *)(pf_stack_frame + 216))
#define local_1f6 (*(undefined2 *)(pf_stack_frame + 218))
#define local_1f4 (*(undefined2 *)(pf_stack_frame + 220))
#define local_1f2 (*(undefined2 *)(pf_stack_frame + 222))
#define local_1f0 (*(undefined2 *)(pf_stack_frame + 224))
#define local_1ee (*(undefined1 *)(pf_stack_frame + 226))
#define local_1ed (*(undefined1 *)(pf_stack_frame + 227))
#define local_1ec (*(undefined2 *)(pf_stack_frame + 228))
#define local_1ea (*(undefined2 *)(pf_stack_frame + 230))
#define local_1e8 (*(undefined2 *)(pf_stack_frame + 232))
#define local_1e6 (*(undefined2 *)(pf_stack_frame + 234))
#define local_1e4 (*(undefined2 *)(pf_stack_frame + 236))
#define local_1e2 (*(undefined4 *)(pf_stack_frame + 238))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062c4
 */

undefined1 *
recovered_100062c4(uint param_1,uint param_2,int param_3,undefined1 *param_4,uint param_5)

{
  unsigned char pf_stack_frame[752] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint extraout_r1 = 0;
  undefined4 *extraout_r2 = 0;
  undefined4 *extraout_r2_00 = 0;
  undefined4 *extraout_r2_01 = 0;
  undefined4 *extraout_r2_02 = 0;
  undefined4 *extraout_r2_03 = 0;
  undefined4 extraout_r2_04 = 0;
  undefined4 *extraout_r2_05 = 0;
  undefined4 *puVar10;
  undefined4 *extraout_r2_06 = 0;
  undefined4 *extraout_r2_07 = 0;
  char *pcVar11;
  undefined4 *extraout_r2_08 = 0;
  int *piVar12;
  int *extraout_r3 = 0;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  byte *device;
  undefined1 *puVar16;
  bool bVar17;
  bool bVar18;

  puVar14 = (undefined1 *)0x0;
  device = (byte *)(param_1 * 0xac + ((uintptr_t)pf_module_state + 0x520U));
  if (*(uint *)(((uintptr_t)pf_module_state + 0x7d4U)) <= param_1) {
    device = (byte *)0x0;
  }
  if (param_3 == 0) {
    return (undefined1 *)0x0;
  }
  if ((uint)param_4 >> 0x17 != 0) {
    return (undefined1 *)0x0;
  }
  if (*(uint *)(((uintptr_t)pf_module_state + 0x7d4U)) <= param_1) {
    return (undefined1 *)0x0;
  }
  recovered_10006290((int)device);
  device[0x4c] = 0;
  device[0x4d] = 0;
  device[0x4e] = 0;
  device[0x4f] = 0;
  bVar17 = *(int *)(device + 0x58) == 0;
  puVar4 = (undefined1 *)0x0;
  uVar3 = 0;
  bVar18 = bVar17;
  if (!bVar17) {
    uVar3 = *(uint *)(device + 0x34);
    puVar4 = (undefined1 *)(uVar3 - param_2);
    bVar18 = puVar4 == (undefined1 *)0x0;
  }
  if (((bVar17 || param_2 <= uVar3) && !bVar18) && (param_4 + -1 < puVar4)) {
    bVar17 = CARRY4((uint)param_4,param_2);
    bVar18 = ((undefined1 *)0x800000 < param_4 + param_2) <= bVar17;
    if ((device[0x3d] != 0 || !bVar17 && bVar18) && param_5 != 0) {
      if (device[0x3e] != 0) goto LAB_10006344;
    }
    else if ((device[0x3d] & 1) == 0 && (bVar17 || !bVar18)) goto LAB_10006344;
LAB_100063bc:
    if (puVar14 < param_4) {
      if ((param_5 == 0) && (*(int *)(device + 0x90) != 0)) {
        piVar5 = (int *)(param_4 + -(int)puVar14);
        piVar12 = (int *)&SupervisorCall;
        if (piVar5 < &SupervisorCall) {
          piVar12 = piVar5;
        }
        if (piVar5 < (int *)0x2) goto LAB_1000642c;
        puVar6 = (undefined4 *)recovered_10006170(device);
        device[0x44] = 0x3e;
        device[0x45] = 1;
        device[0x46] = 0;
        device[0x47] = 0;
        iVar9 = 0;
        if ((*(int *)(device + 0x9c) != 0) && (*(int *)(device + 0x94) == 0)) {
          bVar1 = device[0x3d];
          puVar4 = puVar14 + param_2;
          if ((puVar4 < (undefined1 *)0x800000) || (puVar10 = puVar6, bVar1 != 0)) {
            iVar7 = recovered_1000540c((int)device,(uint *)0x0,(uint3)puVar6);
            iVar9 = 0;
            puVar10 = extraout_r2_00;
            if (iVar7 != 0) {
              local_1f6 = 0x8080;
              local_1fa = 0x2ff;
              local_1d6 = 0x8eff;
              local_1e8 = 0xfe2b;
              local_1da = 0x21ff;
              local_1ec = 0xfe2a;
              local_1de = 1;
              iVar9 = 0;
              local_1f0 = 0xfe29;
              local_1e2 = (*(uint32_t *)(uint32_t[]){0xfd5b2333ULL});
              local_1f4 = 0xfe28;
              local_1f8 = 0xfe21;
              local_1e6 = 0xff;
              local_1ea = 0xff;
              local_1ee = 0xff;
              local_1f2 = 0xff;
              local_1fe = 0xff;
              local_202 = 0xff;
              local_206 = 0xff;
              local_20a = 0xff;
              local_20e = 0xff;
              local_212 = 0xff;
              local_216 = 0xff;
              local_21a = 0x52ff;
              local_1fc = 0xfdb0;
              local_200 = 0xfdaf;
              local_1d8 = 0xfdb3;
              local_204 = 0xfdb2;
              local_1dc = 0xfda1;
              local_208 = 0xfdb1;
              local_20c = 0xfdad;
              local_1e4 = 0xfe2c;
              local_224 = 0x80fe2c;
              local_210 = 0xfdac;
              local_1ed = (char)((int)piVar12 << 1);
              local_214 = 0xfdab;
              local_218 = 0xfdaa;
              local_21c = 0xfda9;
              puVar16 = puVar4;
              if (bVar1 == 0) {
                puVar16 = (undefined1 *)((int)(uintptr_t)puVar4 * 0x200);
              }
              local_220 = 0x80fe34;
              local_20d = (char)((uint)puVar16 >> 8);
              local_209 = (char)puVar16;
              local_205 = (char)piVar12;
              local_211 = (char)((uint)puVar16 >> 0x10);
              local_215 = (char)((uint)puVar16 >> 0x18);
              local_2b4 = 0;
              do {
                if (iVar9 == 0x50) {
                  iVar9 = recovered_100071d8(*(int *)(device + 0x84),&local_2b4,2,0xfdb3,0x40,0x40);
                  puVar10 = extraout_r2_02;
                  if (iVar9 != 0) {
                    iVar9 = recovered_100071d8(*(int *)(device + 0x84),&local_2b4,0,0xfdb3,0,0);
                    uVar3 = local_2b4;
                    puVar10 = extraout_r2_03;
                    if ((iVar9 == 0) || (local_2b4 - 0x101 < 0xffffff00)) goto LAB_10006a80;
                    device[0xa8] = 0;
                    recovered_10007190(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),puVar6,
                                       *(undefined4 *)(device + 0x80),(int)piVar12 << 9);
                    recovered_10007190(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),puVar6,
                                       *(undefined4 *)(device + 0x84),0x1000);
                    recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
                    uVar8 = recovered_10004d9c(device,0x14,0xf0000000);
                    if ((uVar8 == 0) ||
                       (((uVar8 = recovered_10004d9c(device,0,*(uint *)(device + 0x8c)), uVar8 == 0
                         || (uVar8 = recovered_10004d9c(device,8,*(uint *)(device + 0x88)),
                            uVar8 == 0)) ||
                        (uVar8 = recovered_10004d9c(device,0x18,0x30000000), uVar8 == 0))))
                    goto LAB_10006a64;
                    recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
                    device[0x94] = 1;
                    device[0x95] = 0;
                    device[0x96] = 0;
                    device[0x97] = 0;
                    bVar18 = recovered_10005a2c(device,1);
                    if (((!bVar18) ||
                        (uVar3 = recovered_10004d9c(device,4,uVar3 << 2 | 0xc0000000), uVar3 == 0))
                       || (uVar3 = recovered_10004d9c(device,0xc,(int)piVar12 << 9 | 0xa0000000),
                          uVar3 == 0)) goto LAB_10006a64;
                    local_224 = (*(uint32_t *)(uint32_t[]){0x4c4b40ULL});
                    local_220 = recovered_10005720(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
                    bVar18 = false;
                    uVar3 = 0;
                    *(undefined4 **)(device + 0x74) = &local_224;
                    goto LAB_1000680c;
                  }
                  break;
                }
                iVar7 = recovered_100071d8(*(int *)(device + 0x84),&local_2b4,1,
                                           (uint)*(ushort *)((int)&local_224 + iVar9),
                                           (uint)*(byte *)((int)&local_224 + iVar9 + 2),
                                           (uint)*(byte *)((int)&local_224 + iVar9 + 3));
                iVar9 = iVar9 + 4;
                puVar10 = extraout_r2_01;
              } while (iVar7 != 0);
              puVar6 = puVar10;
              iVar9 = 0;
              goto LAB_10006424;
            }
          }
          goto LAB_10006448;
        }
        goto LAB_10006424;
      }
LAB_1000642c:
      iVar9 = recovered_10006eb8((int)device,(uint)(puVar14 + param_2),
                                 param_3 + (int)(uintptr_t)puVar14 * 0x200,param_5);
      piVar12 = (int *)0x1;
      puVar10 = extraout_r2;
      goto LAB_10006448;
    }
    puVar14 = (undefined1 *)0x1;
  }
LAB_10006344:
  DataMemoryBarrier(0xb);
  device[0x30] = 0;
  device[0x31] = 0;
  device[0x32] = 0;
  device[0x33] = 0;
  return puVar14;
LAB_1000680c:
  bVar17 = recovered_100056c8((int)device);
  if (!bVar17) goto LAB_10006a18;
  local_2ac[0] = 0;
  local_2ad = 0;
  iVar9 = recovered_1000540c((int)device,local_2ac,(uint3)extraout_r2_04);
  if (iVar9 == 0) goto LAB_10006a5c;
  uVar8 = local_2ac[0];
  if ((local_2ac[0] & 0x11000000) != 0) {
LAB_10006a58:
    *(uint *)(device + 0x48) = uVar8;
    goto LAB_10006a5c;
  }
  if ((local_2ac[0] & 0x20000000) != 0) {
    local_2ae = 0;
    local_2af = 0;
    local_2b0 = 0;
    local_22c = 0;
    local_2bc = 0;
    uVar8 = recovered_100051d8(device,0xfdb3,&local_2ad);
    if (uVar8 == 0) goto LAB_10006a5c;
    bVar17 = recovered_100055b8((int)device,4,&local_22c);
    uVar8 = 0;
    if (bVar17) {
      uVar8 = local_22c;
    }
    if (!bVar17 || uVar8 == 0xffffffff) goto LAB_10006a5c;
    bVar17 = recovered_100055b8((int)device,0xc,&local_2bc);
    uVar8 = 0;
    if (bVar17) {
      uVar8 = local_2bc;
    }
    if ((!bVar17 || uVar8 == 0xffffffff) ||
       (uVar8 = recovered_100051d8(device,0xfe2c,&local_2b0), uVar8 == 0)) goto LAB_10006a5c;
    if ((local_2ad & 0x10) != 0) {
      uVar8 = (uint)local_2ad << 0x10;
      goto LAB_10006a58;
    }
    if ((((local_2ad & 0x40) != 0) && (-1 < (int)(local_2bc | local_22c))) && ((local_2b0 & 4) == 0)
       ) {
      uVar8 = recovered_100051d8(device,0xfda3,&local_2ae);
      if (((uVar8 == 0) || (uVar8 = recovered_100051d8(device,0xfda4,&local_2af), uVar8 == 0)) ||
         (*(uint *)(device + 0x48) =
               (uint)local_2ae << 8 | (uint)local_2ad << 0x10 | (uint)local_2af,
         (local_2ae & 0xe2) != 0 || (local_2af & 1) != 0)) goto LAB_10006a5c;
      piVar5 = *(int **)(((uintptr_t)pf_module_state + 0x7d0U));
      uVar8 = recovered_10006170(device);
      recovered_10007190(piVar5,uVar8,*(undefined4 *)(device + 0x84),0x1000);
      recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
      bVar1 = *(byte *)(*(int *)(device + 0x84) + 1);
      uVar8 = (uint)bVar1;
      device[0xa8] = bVar1;
      if ((bVar1 & 0x10) != 0) {
        device[0x44] = 0x7d;
        device[0x45] = 1;
        device[0x46] = 0;
        device[0x47] = 0;
        goto LAB_10006a58;
      }
      bVar18 = true;
      if ((bVar1 & 0x40) != 0) {
        uVar3 = recovered_10004d9c(device,0x14,local_2ac[0] & 0xf0000000);
        device[0x74] = 0;
        device[0x75] = 0;
        device[0x76] = 0;
        device[0x77] = 0;
        if (uVar3 == 0) goto LAB_10006a64;
        iVar9 = 0;
        goto LAB_10006ac0;
      }
    }
  }
  uVar8 = 1000;
  if (uVar3 < 1000) {
    uVar8 = 10;
  }
  *(uint *)(device + 0x48) = local_2ac[0];
  bVar17 = recovered_10005664((int)device,uVar8);
  if (!bVar17) goto LAB_10006a18;
  uVar3 = uVar8 + uVar3;
  goto LAB_1000680c;
  while( true ) {
    uVar3 = recovered_100051d8(device,iVar9 - 599U & 0xffff,(void *)((int)local_2ac + iVar9 + -0x10)
                              );
    iVar9 = iVar9 + 1;
    if (uVar3 == 0) break;
LAB_10006ac0:
    if (iVar9 == 5) {
      uVar3 = 0;
      if ((byte)local_2bc < 0x40) {
        uVar3 = CONCAT13(bStack_2b8,PF_PART3(local_2bc, 1)) << 0x18 |
                ((PF_PART3(local_2bc, 1) & 0xff00) >> 8) << 0x10 | (uint)(PF_PART3(local_2bc, 1) >> 0x10) << 8 |
                (uint)bStack_2b8;
        if ((uVar3 & (*(uint32_t *)(uint64_t[]){0x1d30fff9a008ULL})) == 0) {
          iVar9 = recovered_10005d40((int)device,0xc,0,1);
          if ((iVar9 != 0) && (iVar9 = recovered_10005da8((int)device), iVar9 != 0)) {
            device[0x44] = 0x4a;
            device[0x45] = 1;
            device[0x46] = 0;
            device[0x47] = 0;
            uVar3 = recovered_10005794(device);
            if (uVar3 != 0) {
              recovered_10007190(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),puVar6,
                                 *(undefined4 *)(device + 0x80),(int)piVar12 << 9);
              recovered_10007190(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)),puVar6,
                                 *(undefined4 *)(device + 0x84),0x1000);
              recovered_100059f0(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
              device[0xa8] = *(byte *)(*(int *)(device + 0x84) + 1);
              puVar6 = extraout_r2_06;
              if ((1 < *(uint *)(device + 0xa0)) ||
                 ((*(uint *)(device + 0xa0) == 1 && (*(undefined1 **)(device + 0xa4) == puVar4))))
              goto LAB_10006bd0;
              iVar9 = 0;
              local_228 = (undefined1 *)((int)piVar12 + -1);
              local_22c = 0;
              goto LAB_10006c14;
            }
          }
          break;
        }
      }
      *(uint *)(device + 0x48) = uVar3;
      break;
    }
  }
LAB_10006a64:
  uVar15 = *(undefined4 *)(device + 0x48);
  recovered_10005794(device);
  *(undefined4 *)(device + 0x48) = uVar15;
  puVar10 = extraout_r2_05;
LAB_10006a80:
  iVar9 = 0;
LAB_10006448:
  if (iVar9 != 1) {
    if (iVar9 == 0) {
      if (*(int *)(device + 0x4c) == 0) {
        pcVar11 = (char *)(((uintptr_t)pf_module_state + 0x1ceU));
        if (param_5 != 0) {
          pcVar11 = (char *)(((uintptr_t)pf_module_state + 0x1adU));
        }
        recovered_10004e1c((undefined1 *)&local_224,0x80,pcVar11);
        recovered_10004ee8((int)&local_224,0x80,param_2);
        recovered_10004e94((int)&local_224,0x80,(char *)(((uintptr_t)pf_module_state + 0x1eeU)));
        recovered_10004ee8((int)&local_224,0x80,(int)puVar14);
        recovered_10004e94((int)&local_224,0x80,(char *)(((uintptr_t)pf_module_state + 0x1fdU)));
        recovered_10004ee8((int)&local_224,0x80,(int)param_4);
        recovered_10004b4c(device,(char *)&local_224);
        param_5 = extraout_r1;
        puVar10 = extraout_r2_08;
        piVar12 = extraout_r3;
      }
      recovered_100050e0(device,param_5,puVar10,piVar12);
    }
    puVar14 = (undefined1 *)0x0;
    goto LAB_10006344;
  }
  puVar14 = (undefined1 *)((int)piVar12 + (int)puVar14);
  goto LAB_100063bc;
LAB_10006c14:
  if (iVar9 == 2) goto LAB_10006d4c;
  uVar3 = (&local_22c)[iVar9];
  puVar16 = puVar4 + uVar3;
  iVar7 = recovered_10006eb8((int)device,(uint)puVar16,(int)&local_224,0);
  if (iVar7 != 1) {
    recovered_10004e1c((undefined1 *)local_2ac,0x60,(char *)(((uintptr_t)pf_module_state + 0x232U)));
    recovered_10004ee8((int)local_2ac,0x60,(int)puVar16);
LAB_10006d3c:
    recovered_10004b4c(device,(char *)local_2ac);
    goto LAB_10006a64;
  }
  iVar7 = 0;
  puVar6 = extraout_r2_07;
  for (iVar13 = 0; iVar13 != 0x200; iVar13 = iVar13 + 1) {
    puVar6 = &local_224;
    bVar1 = *(byte *)(*(int *)(device + 0x80) + uVar3 * 0x200 + iVar13);
    bVar2 = *(byte *)((int)puVar6 + iVar13);
    if ((uint)bVar1 != (uint)bVar2) {
      device[0x44] = 0x72;
      device[0x45] = 1;
      device[0x46] = 0;
      device[0x47] = 0;
      *(uint *)(device + 0x48) = (uint)CONCAT11(bVar2,bVar1) - iVar7;
      recovered_10004e1c((undefined1 *)local_2ac,0x80,(char *)(((uintptr_t)pf_module_state + 0x25eU)));
      recovered_10004ee8((int)local_2ac,0x80,(int)puVar16);
      recovered_10004e94((int)local_2ac,0x80,(char *)(((uintptr_t)pf_module_state + 0x27eU)));
      recovered_10004ee8((int)local_2ac,0x80,iVar13);
      recovered_10004e94((int)local_2ac,0x80,(char *)(((uintptr_t)pf_module_state + 0x286U)));
      recovered_10004e34((int)local_2ac,0x80,(uint)bVar2,2);
      recovered_10004e94((int)local_2ac,0x80,(char *)(((uintptr_t)pf_module_state + 0x28dU)));
      recovered_10004e34((int)local_2ac,0x80,(uint)bVar1,2);
      goto LAB_10006d3c;
    }
    iVar7 = iVar7 + -0x10000;
  }
  iVar9 = iVar9 + 1;
  goto LAB_10006c14;
LAB_10006d4c:
  if (*(int *)(device + 0xa0) == 0) {
    *(undefined1 **)(device + 0xa4) = puVar4;
  }
  *(int *)(device + 0xa0) = *(int *)(device + 0xa0) + 1;
LAB_10006bd0:
  for (iVar9 = 0; (int)piVar12 * -0x200 != iVar9; iVar9 = iVar9 + -1) {
    puVar6 = (undefined4 *)(uint)*(byte *)(*(int *)(device + 0x80) - iVar9);
    *(byte *)((param_3 + (int)(uintptr_t)puVar14 * 0x200) - iVar9) = *(byte *)(*(int *)(device + 0x80) - iVar9)
    ;
  }
  iVar9 = 1;
LAB_10006424:
  puVar10 = puVar6;
  goto LAB_10006448;
LAB_10006a18:
  if ((bVar18) && (bVar18 = recovered_100056c8((int)device), !bVar18)) {
    device[0x44] = 0x7c;
    device[0x45] = 1;
    device[0x46] = 0;
    device[0x47] = 0;
    *(uint *)(device + 0x48) = (uint)device[0xa8];
    recovered_10004b4c(device,(char *)(((uintptr_t)pf_module_state + 0x208U)));
  }
LAB_10006a5c:
  device[0x74] = 0;
  device[0x75] = 0;
  device[0x76] = 0;
  device[0x77] = 0;
  goto LAB_10006a64;
}

#undef DAT_10006e54
#undef DAT_10006e58
#undef DAT_10006e5c
#undef DAT_10006e60
#undef DAT_10006e64
#undef DAT_10006e68
#undef DAT_10006e6c
#undef DAT_10006e70
#undef DAT_10006e74
#undef DAT_10006e78
#undef DAT_10006e7c
#undef DAT_10006e80
#undef DAT_10006e84
#undef DAT_10006e88
#undef DAT_10006e8c
#undef DAT_10006e90
#undef DAT_10006e94
#undef DAT_10006e98
#undef DAT_10006e9c
#undef DAT_10006ea0
#undef DAT_10006ea4
#undef DAT_10006ea8
#undef DAT_10006eac
#undef DAT_10006eb0
#undef DAT_10006eb4
#undef EXT_00000008
#undef local_1de
#undef local_1dc
#undef local_1da
#undef local_1d8
#undef local_1d6
#undef local_2bc
#undef local_2b4
#undef local_2b0
#undef local_2af
#undef local_2ae
#undef local_2ad
#undef local_2ac
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_21a
#undef local_218
#undef local_216
#undef local_215
#undef local_214
#undef local_212
#undef local_211
#undef local_210
#undef bStack_2b8
#undef local_20e
#undef local_20d
#undef local_20c
#undef local_20a
#undef local_209
#undef local_208
#undef local_206
#undef local_205
#undef local_204
#undef local_202
#undef local_200
#undef local_1fe
#undef local_1fc
#undef local_1fa
#undef local_1f8
#undef local_1f6
#undef local_1f4
#undef local_1f2
#undef local_1f0
#undef local_1ee
#undef local_1ed
#undef local_1ec
#undef local_1ea
#undef local_1e8
#undef local_1e6
#undef local_1e4
#undef local_1e2

#undef DAT_1000718c
#define DAT_1000718c (*(uint *)(0x1000718cU))
#define auStack_ac (*(undefined1 (*)[172])(pf_stack_frame + 20))
#define local_24 (*(uint *)(pf_stack_frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb8
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_10006eb8(int param_1,uint param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  uint unaff_r6;
  bool bVar6;

  local_24 = 0;
  if ((0x7fffff < param_2) && (*(char *)(param_1 + 0x3d) == '\0')) {
    return 0;
  }
  if (*(char *)(param_1 + 0x3d) == '\0') {
    param_2 = param_2 << 9;
  }
  iVar1 = recovered_1000540c(param_1,&local_24,(uint3)param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0xd9;
    bVar6 = recovered_10005e9c(param_1);
    if (!bVar6) {
      return 0;
    }
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x3e);
    bVar6 = uVar2 == 0;
    if (bVar6) {
      uVar2 = local_24 >> 0x10 & 0xff;
    }
    if (!bVar6 || (uVar2 & 8) != 0) {
      return 2;
    }
    iVar1 = recovered_10005da8(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0xe0;
    iVar1 = recovered_10005d40(param_1,0x18,(uint3)param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 0;
    while (uVar2 != 0x200) {
      uVar3 = recovered_100050b4((void *)param_1,uVar2 & 0xffff | 64000,0xff);
      uVar2 = uVar2 + 1;
      if (uVar3 == 0) {
        return 0;
      }
    }
  }
  iVar1 = 0;
  uVar2 = recovered_100050b4((void *)param_1,0xfdaf,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfdb0,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfdb1,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfdb2,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfd5b,1);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfda1,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_100050b4((void *)param_1,0xfdb3,0xff);
  if (uVar2 == 0) {
    return 0;
  }
  iVar4 = recovered_10005f28(param_1,0,param_4 ^ 1,5000);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    uVar5 = recovered_10005da8(param_1);
    return uVar5;
  }
  while (iVar1 != 5) {
    uVar2 = recovered_100051d8((void *)param_1,iVar1 - 599U & 0xffff,auStack_ac + iVar1 + 0x83);
    iVar1 = iVar1 + 1;
    if (uVar2 == 0) {
      return 0;
    }
  }
  if ((0x3f < (byte)((uint)unaff_r5 >> 0x18)) ||
     (local_24 = unaff_r6 << 0x18 | (unaff_r6 >> 8 & 0xff) << 0x10 | (unaff_r6 >> 0x10 & 0xff) << 8
                 | unaff_r6 >> 0x18, (local_24 & (*(uint32_t *)(uint64_t[]){0xe3500000fff9a008ULL})) != 0)) {
    *(uint *)(param_1 + 0x48) = local_24;
    return 0;
  }
  uVar2 = 0;
  do {
    if (uVar2 == 0x200) {
      return 1;
    }
    uVar3 = recovered_100051d8((void *)param_1,uVar2 & 0xffff | 64000,(void *)(param_3 + uVar2));
    uVar2 = uVar2 + 1;
  } while (uVar3 != 0);
  return 0;
}

#undef DAT_1000718c
#undef auStack_ac
#undef local_24

#undef DAT_100071d4
#define DAT_100071d4 (*(int *)(0x100071d4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007190
 */

void recovered_10007190(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (*(uint32_t *)(uint32_t[]){0x54584b57ULL}))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100071cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(param_2,param_3,param_4);
      return;
    }
  }
  return;
}

#undef DAT_100071d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071d8
 */

undefined4
recovered_100071d8(int param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if ((param_1 != 0 && param_2 != (uint *)0x0) && (*param_2 < 0x100)) {
    for (uVar1 = 0; uVar1 != 0x20; uVar1 = uVar1 + 8) {
      *(char *)(param_1 + *param_2 * 4) =
           (char)(((param_4 & 0x3fff) << 0x10 | param_3 << 0x1e | param_5 << 8 | param_6) >>
                 (uVar1 & 0xff));
      param_1 = param_1 + 1;
    }
    uVar2 = 1;
    *param_2 = *param_2 + 1;
  }
  return uVar2;
}


#undef DAT_10007484
#define DAT_10007484 (*(int *)(0x10007484U))
#undef DAT_10007488
#define DAT_10007488 (*(int *)(0x10007488U))
#undef DAT_1000748c
#define DAT_1000748c (*(int *)(0x1000748cU))
#undef DAT_10007490
#define DAT_10007490 (*(int *)(0x10007490U))
#undef DAT_10007494
#define DAT_10007494 (*(int *)(0x10007494U))
#undef DAT_10007498
#define DAT_10007498 (*(int *)(0x10007498U))
#undef DAT_1000749c
#define DAT_1000749c (*(int *)(0x1000749cU))
#undef DAT_100074a0
#define DAT_100074a0 (*(int *)(0x100074a0U))
#undef DAT_100074a4
#define DAT_100074a4 (*(int *)(0x100074a4U))
#undef DAT_100074a8
#define DAT_100074a8 (*(int *)(0x100074a8U))
#undef DAT_100074ac
#define DAT_100074ac (*(int *)(0x100074acU))
#undef DAT_100074b0
#define DAT_100074b0 (*(int *)(0x100074b0U))
#undef DAT_100074b4
#define DAT_100074b4 (*(int *)(0x100074b4U))
#undef DAT_100074b8
#define DAT_100074b8 (*(int *)(0x100074b8U))
#define local_24 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007250
 */

undefined4 recovered_10007250(undefined4 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_r1 = 0;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_r2 = 0;
  undefined4 extraout_r2_00 = 0;
  char *pcVar5;
  int *extraout_r3 = 0;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  uVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    bVar13 = *(int *)(((uintptr_t)pf_module_state + 0x7d0U)) != 0;
    uVar2 = 0;
    if (bVar13) {
      uVar2 = *(uint *)(((uintptr_t)pf_module_state + 0x7d4U));
    }
    if (bVar13 && uVar2 != 0) {
      uVar11 = 0;
      iVar10 = 0;
      iVar8 = 0;
      pbVar6 = (byte *)(((uintptr_t)pf_module_state + 0x520U));
      uVar9 = 0;
      local_24 = 0;
      for (uVar12 = 0; uVar12 < uVar2; uVar12 = uVar12 + 1) {
        recovered_10006290((int)pbVar6);
        if (*(int *)(pbVar6 + 0x58) != 0) {
          iVar1 = recovered_1000540c((int)pbVar6,(uint *)0x0,(uint3)extraout_r2);
          if (iVar1 == 0) {
            recovered_100050e0(pbVar6,extraout_r1,extraout_r2_00,extraout_r3);
          }
          if (*(int *)(pbVar6 + 0x58) != 0) {
            iVar8 = iVar8 + 1;
            if (*(int *)(pbVar6 + 0x90) != 0) {
              local_24 = local_24 + 1;
            }
            if (uVar9 < *(uint *)(pbVar6 + 0x50)) {
              uVar9 = *(uint *)(pbVar6 + 0x50);
            }
            bVar13 = CARRY4(uVar11,*(uint *)(pbVar6 + 0x34));
            uVar11 = uVar11 + *(uint *)(pbVar6 + 0x34);
            iVar10 = iVar10 + (uint)bVar13;
          }
        }
        DataMemoryBarrier(0xb);
        pbVar6[0x30] = 0;
        pbVar6[0x31] = 0;
        pbVar6[0x32] = 0;
        pbVar6[0x33] = 0;
        pbVar6 = pbVar6 + 0xac;
        uVar2 = *(uint *)(((uintptr_t)pf_module_state + 0x7d4U));
      }
      recovered_10002904((undefined1 *)param_1,500);
      *param_1 = 500;
      param_1[1] = 1;
      param_1[3] = 0x11;
      iVar1 = (*(uint32_t *)(uint32_t[]){0xf50ULL});
      uVar4 = 9;
      if (iVar8 == *(int *)(((uintptr_t)pf_module_state + 0x7d4U))) {
        uVar4 = 0x13;
      }
      param_1[4] = uVar4;
      uVar4 = recovered_10005720(*(int **)(((uintptr_t)pf_module_state + 0x7d0U)));
      param_1[6] = uVar4;
      param_1[0x11] = *(undefined4 *)(((uintptr_t)pf_module_state+0x7d4U));
      param_1[0x14] = iVar10;
      param_1[0x13] = uVar11;
      param_1[0x12] = iVar8;
      recovered_10004e1c((undefined1 *)(param_1 + 0x15),0x40,(char *)(((uintptr_t)pf_module_state + 0x2b9U)));
      recovered_10004e1c((undefined1 *)(param_1 + 0x25),0x40,(char *)(((uintptr_t)pf_module_state + 0x2d4U)));
      pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x2e1U));
      if (local_24 == 0) {
        pcVar3 = (char *)(((uintptr_t)pf_module_state + 0x303U));
      }
      pcVar5 = (char *)(((uintptr_t)pf_module_state + 0x374U));
      if (iVar8 != 0) {
        pcVar5 = pcVar3;
      }
      recovered_10004e1c((undefined1 *)(param_1 + 0x35),0x60,pcVar5);
      puVar7 = param_1 + 0x4d;
      recovered_10004e1c((undefined1 *)puVar7,0xc0,(char *)(((uintptr_t)pf_module_state + 0x397U)));
      recovered_10004ee8((int)puVar7,0xc0,uVar9);
      recovered_10004e94((int)puVar7,0xc0,(char *)(((uintptr_t)pf_module_state + 0x3c8U)));
      recovered_10004ee8((int)puVar7,0xc0,local_24);
      recovered_10004e94((int)puVar7,0xc0,(char *)(((uintptr_t)pf_module_state + 0x3dfU)));
      uVar4 = 1;
    }
  }
  return uVar4;
}

#undef DAT_10007484
#undef DAT_10007488
#undef DAT_1000748c
#undef DAT_10007490
#undef DAT_10007494
#undef DAT_10007498
#undef DAT_1000749c
#undef DAT_100074a0
#undef DAT_100074a4
#undef DAT_100074a8
#undef DAT_100074ac
#undef DAT_100074b0
#undef DAT_100074b4
#undef DAT_100074b8
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c0
 */

uint recovered_100074c0(uint param_1,uint param_2)

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
 * Address: 0x10007510
 */

uint recovered_10007510(uint param_1,uint param_2)

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
 * Address: 0x10007548
 */

uint recovered_10007548(uint param_1,uint param_2)

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
 * Address: 0x100075b8
 */

uint recovered_100075b8(uint param_1,uint param_2)

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
 * Address: 0x10007620
 */

undefined8 recovered_10007620(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007704
 */

undefined8 recovered_10007704(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10007784
 */

undefined8 recovered_10007784(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100078a4
 */

undefined8 recovered_100078a4(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_100079e0
#define DAT_100079e0 (*(double *)(0x100079e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

undefined8 recovered_10007960(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100079e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079e8
 */

undefined8 recovered_100079e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007960(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007960(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a34
 */

undefined8 recovered_10007a34(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10007960(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return uVar1;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x504U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a44
 */

void recovered_10007a44(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state+0x4ecU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a54
 */

double recovered_10007a54(uint param_1,uint param_2)

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
 * Address: 0x10007a9c
 */

double recovered_10007a9c(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((int)param_2 < 0) {
    dVar1 = recovered_10007a54(-param_1,-(param_2 + (param_1 != 0)));
    return -dVar1;
  }
  dVar1 = recovered_10007a54(param_1,param_2);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ac4
 */

float recovered_10007ac4(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007a54(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ae0
 */

float recovered_10007ae0(uint param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007a9c(param_1,param_2);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Freestanding memcpy import; Pooka's Free Software License. */
void *recovered_10007b20(void *dest,const void *source,size_t bytes) {
 volatile unsigned char *out=dest;const volatile unsigned char *in=source;
 for(size_t i=0;i<bytes;i++)out[i]=in[i];return dest;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
