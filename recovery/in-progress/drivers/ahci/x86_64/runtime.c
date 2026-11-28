/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002970
#define DAT_10002970 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(int *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#undef UNK_10002978
#define UNK_10002978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#undef _DAT_10002970
#define _DAT_10002970 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef str_10002b83
#define str_10002b83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10002b95
#define str_10002b95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x232U)))
#undef str_10002ba2
#define str_10002ba2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_10002bb0
#define str_10002bb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
#undef uRam0000000010002978
#define uRam0000000010002978 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x15U)))
#define local_230 (*(code * *)(pf_stack_frame + 48))
#define local_220 (*(undefined1 (*)[544])(pf_stack_frame + 64))
#define local_1e0 (*(undefined1 (*)[480])(pf_stack_frame + 128))
#define local_1a0 (*(undefined1 (*)[416])(pf_stack_frame + 192))
#define local_140 (*(undefined1 (*)[320])(pf_stack_frame + 288))
#define local_78 (*(int * *)(pf_stack_frame + 488))
#define local_6c (*(byte (*)[108])(pf_stack_frame + 500))
#define local_68 (*(int *)(pf_stack_frame + 504))
#define local_64 (*(undefined4 *)(pf_stack_frame + 508))
#define local_60 (*(undefined4 *)(pf_stack_frame + 512))
#define local_5c (*(undefined4 *)(pf_stack_frame + 516))
#define local_58 (*(undefined4 *)(pf_stack_frame + 520))
#define local_54 (*(undefined4 *)(pf_stack_frame + 524))
#define local_50 (*(undefined4 *)(pf_stack_frame + 528))
#define local_4c (*(undefined4 *)(pf_stack_frame + 532))
#define local_48 (*(undefined4 *)(pf_stack_frame + 536))
#define local_44 (*(undefined4 *)(pf_stack_frame + 540))
#define local_40 (*(undefined4 *)(pf_stack_frame + 544))
#define local_3c (*(uint *)(pf_stack_frame + 548))
#define local_38 (*(uint *)(pf_stack_frame + 552))
#define local_34 (*(uint *)(pf_stack_frame + 556))
#define uStack_240 (*(undefined8 *)(pf_stack_frame + 32))
#define local_248 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000475(void *api)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10004000 = 0;
    DAT_10004004 = 0;
    recovered_10000765(((uintptr_t)pf_module_state+0x16adU),0x50);
    recovered_10000765(((uintptr_t)pf_module_state+0x16fdU),0x7c0);
    DAT_10004820 = api;
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      iVar5 = 0;
      local_78 = api;
      for (uVar6 = 0; uVar6 != 0x100; uVar6 = uVar6 + 1) {
        local_38 = uVar6 & 0xff;
        uVar3 = 0;
        local_34 = uVar6;
        while (uVar3 != 0x20) {
          local_3c = uVar3;
          iVar1 = recovered_10001691(api,local_38,uVar3 & 0xff,0,(undefined1 *)&local_248);
          if (iVar1 != 0) {
            uVar4 = recovered_10000780(api,(byte *)&local_248);
            iVar5 = (int)uVar4 + iVar5;
            if (((int8_t)PF_PART1(uStack_240, 4)) < '\0') {
              for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                iVar2 = recovered_10001691(api,local_38,uVar3 & 0xff,iVar1 + 8U & 0xff,local_6c);
                if (iVar2 != 0) {
                  uVar4 = recovered_10000780(api,local_6c);
                  iVar5 = iVar5 + (int)uVar4;
                }
                api = local_78;
              }
            }
            uVar6 = local_34;
          }
          uVar3 = local_3c + 1;
        }
      }
      if (DAT_10004004 != 0 && iVar5 != 0) {
        local_68 = DAT_10004004;
        local_6c[0] = 3;
        local_6c[1] = 0;
        local_6c[2] = 0;
        local_6c[3] = 0;
        local_64 = 0x1000145a;
        local_60 = 0x100014e1;
        local_5c = 0x100014ee;
        local_58 = 0x100014fc;
        local_54 = 0x100015d5;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        recovered_10000765((long)&local_248,0x1c8);
        local_248 = _DAT_10002970;
        uStack_240 = uRam0000000010002978;
        local_230 = recovered_10002811;
        recovered_10001890(local_220,0x40,str_10002b83);
        recovered_10001890(local_1e0,0x40,str_10002b95);
        recovered_10001890(local_1a0,0x60,str_10002ba2);
        recovered_10001890(local_140,0xc0,str_10002bb0);
        if (((DAT_10004820 != (int *)0x0) && (*DAT_10004820 == 0x54584b57)) &&
           (((0xef < (uint)DAT_10004820[2] &&
             (((((code *)(ulong)(uint)DAT_10004820[0x3b] != (code *)0x0 &&
                (iVar5 = (*(code *)(ulong)(uint)DAT_10004820[0x3b])(&local_248), iVar5 != 0)) &&
               (*(int *)api == 0x54584b57)) &&
              ((0xd3 < *(uint *)((long)api + 8) &&
               ((code *)(ulong)*(uint *)((long)api + 0xd0) != (code *)0x0)))))) &&
            (iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_6c), iVar5 != 0)))) {
          return 1;
        }
      }
    }
    recovered_1000140b();
  }
  return 0;
}

#undef DAT_10002970
#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004820
#undef UNK_10002978
#undef _DAT_10002970
#undef str_10002b83
#undef str_10002b95
#undef str_10002ba2
#undef str_10002bb0
#undef uRam0000000010002978
#undef local_230
#undef local_220
#undef local_1e0
#undef local_1a0
#undef local_140
#undef local_78
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef uStack_240
#undef local_248

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000765
 */

void recovered_10000765(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


#undef DAT_100029aa
#define DAT_100029aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_10002af0
#define DAT_10002af0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18dU)))
#undef DAT_10002b63
#define DAT_10002b63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef DAT_10002b65
#define DAT_10002b65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef DAT_10002b67
#define DAT_10002b67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x204U)))
#undef DAT_10002b6c
#define DAT_10002b6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef DAT_10002b6f
#define DAT_10002b6f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20cU)))
#undef DAT_10002b71
#define DAT_10002b71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20eU)))
#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16adU)))
#undef DAT_10004014
#define DAT_10004014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16b1U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c1U)))
#undef DAT_10004025
#define DAT_10004025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c2U)))
#undef DAT_10004026
#define DAT_10004026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c3U)))
#undef DAT_10004027
#define DAT_10004027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c4U)))
#undef DAT_10004028
#define DAT_10004028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c5U)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c9U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004064
#define DAT_10004064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1701U)))
#undef DAT_10004068
#define DAT_10004068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1705U)))
#undef DAT_10004070
#define DAT_10004070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x170dU)))
#undef DAT_10004078
#define DAT_10004078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1715U)))
#undef DAT_10004080
#define DAT_10004080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171dU)))
#undef DAT_10004088
#define DAT_10004088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1725U)))
#undef DAT_1000408c
#define DAT_1000408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef DAT_10004098
#define DAT_10004098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1735U)))
#undef DAT_100040e0
#define DAT_100040e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177dU)))
#undef DAT_10004120
#define DAT_10004120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17bdU)))
#undef DAT_10004124
#define DAT_10004124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c1U)))
#undef DAT_10004125
#define DAT_10004125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c2U)))
#undef DAT_10004126
#define DAT_10004126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c3U)))
#undef DAT_10004127
#define DAT_10004127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c4U)))
#undef DAT_10004128
#define DAT_10004128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c5U)))
#undef DAT_10004129
#define DAT_10004129 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c6U)))
#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#undef str_100029ab
#define str_100029ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48U)))
#undef str_100029d2
#define str_100029d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fU)))
#undef str_100029ed
#define str_100029ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aU)))
#undef str_10002a0c
#define str_10002a0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_10002a25
#define str_10002a25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc2U)))
#undef str_10002a43
#define str_10002a43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0U)))
#undef str_10002a63
#define str_10002a63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_10002a7f
#define str_10002a7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cU)))
#undef str_10002a87
#define str_10002a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10002a90
#define str_10002a90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_10002a9e
#define str_10002a9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bU)))
#undef str_10002ab3
#define str_10002ab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_10002ac5
#define str_10002ac5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#undef str_10002ad7
#define str_10002ad7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_10002aff
#define str_10002aff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19cU)))
#undef str_10002b26
#define str_10002b26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10002b46
#define str_10002b46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#define local_8d8 (*(char (*)[2264])(pf_stack_frame + 24))
#define local_4d8 (*(uint (*)[310])(pf_stack_frame + 1048))
#define local_d8 (*(uint (*)[54])(pf_stack_frame + 2072))
#define local_70 (*(long *)(pf_stack_frame + 2176))
#define local_68 (*(int * *)(pf_stack_frame + 2184))
#define local_60 (*(ulong *)(pf_stack_frame + 2192))
#define local_58 (*(ulong *)(pf_stack_frame + 2200))
#define local_50 (*(uint *)(pf_stack_frame + 2208))
#define local_4c (*(uint *)(pf_stack_frame + 2212))
#define local_48 (*(int * *)(pf_stack_frame + 2216))
#define local_3c (*(uint *)(pf_stack_frame + 2228))
#define local_38 (*(undefined4 * *)(pf_stack_frame + 2232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000780
 */

undefined8 recovered_10000780(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2320] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  undefined8 uVar9;
  ulong uVar10;
  undefined7 extraout_var = 0;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  char cVar15;
  uint uVar16;
  char cVar17;
  undefined4 *puVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  bool bVar23;

  local_50 = 0;
  local_4c = 0;
  sVar7 = *(short *)(param_2 + 6);
  if (((param_2[8] != 1) || (param_2[9] != 6)) || (param_2[10] != 1)) {
    if (param_2[8] != 1) {
      return 0;
    }
    if (param_2[9] != 4) {
      return 0;
    }
    if (*(short *)(param_2 + 4) != -0x7f7a) {
      return 0;
    }
    if (((sVar7 != 0x282a) && (sVar7 != -0x62f9)) && (sVar7 != -0x62fb)) {
      return 0;
    }
  }
  uVar11 = (ulong)DAT_10004000;
  if (1 < uVar11) {
    return 0;
  }
  lVar21 = uVar11 * 0x28;
  puVar18 = &DAT_10004010 + uVar11 * 10;
  local_48 = param_1;
  recovered_10000765((long)puVar18,0x28);
  piVar2 = local_48;
  *(uint *)(&DAT_10004014 + lVar21) = DAT_10004000;
  bVar4 = *param_2;
  (&DAT_10004024)[lVar21] = bVar4;
  bVar5 = param_2[1];
  (&DAT_10004025)[lVar21] = bVar5;
  bVar6 = param_2[2];
  (&DAT_10004026)[lVar21] = bVar6;
  *(uint *)(&DAT_1000402c + lVar21) =
       (uint)bVar6 << 8 | (uint)bVar5 << 0xb | (uint)bVar4 << 0x10 | 0x80000000;
  recovered_10001890(local_8d8,0x400,&DAT_100029aa);
  uVar9 = recovered_10001843(piVar2,*param_2,param_2[1],param_2[2],4,2,(long)&local_50);
  if ((int)uVar9 == 0) {
    recovered_100018a4(piVar2,str_100029ab);
    return 0;
  }
  local_4d8[0] = 0;
  *(undefined2 *)(&DAT_10004028 + lVar21) = (undefined2)local_50;
  (&DAT_10004027)[lVar21] = 1;
  pcVar14 = str_10002ab3;
  if (((piVar2 != (int *)0x0) && (*piVar2 == 0x54584b57)) &&
     ((99 < (uint)piVar2[2] && (piVar2[0x18] != 0)))) {
    uVar9 = recovered_10001843(piVar2,*param_2,param_2[1],param_2[2],4,2,(long)local_4d8);
    if ((int)uVar9 == 0) {
      pcVar14 = str_10002ac5;
    }
    else {
      uVar20 = 0;
      for (lVar21 = 5; lVar21 != 0xb; lVar21 = lVar21 + 1) {
        uVar13 = uVar20 | 1;
        uVar16 = uVar20 | 2;
        if (*(uint *)(param_2 + lVar21 * 4) == 0) {
          uVar16 = uVar20;
        }
        uVar20 = uVar16;
        if ((*(uint *)(param_2 + lVar21 * 4) & 1) != 0) {
          uVar20 = uVar13;
        }
      }
      local_38 = puVar18;
      lVar21 = recovered_10001d5f(((uintptr_t)pf_module_state+0x31U));
      piVar2 = local_48;
      uVar16 = uVar20 | 4;
      if (lVar21 == 0) {
        uVar16 = uVar20;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar16 = uVar16 | 2;
      }
      local_d8[0] = local_4d8[0] | uVar16;
      uVar9 = recovered_10001d25(local_48,*param_2,param_2[1],param_2[2],local_d8[0]);
      if ((int)uVar9 != 0) {
        recovered_10001843(piVar2,*param_2,param_2[1],param_2[2],4,2,(long)local_d8);
        puVar18 = local_38;
        if ((uVar16 & ~local_d8[0]) == 0) {
          puVar1 = (ulong *)(local_38 + 2);
          iVar8 = recovered_10001ab0(piVar2,param_2,0x100,puVar1);
          if ((iVar8 == 0) || (*puVar1 == 0)) {
            uVar20 = *(uint *)(param_2 + 0x28);
            pcVar14 = str_100029ed;
          }
          else {
            local_4d8[0] = 0;
            local_d8[0] = 0;
            local_3c = 0;
            uVar9 = recovered_10001bc5(DAT_10004820,*puVar1,4,local_4d8);
            if (local_4d8[0] != 0xffffffff && (int)uVar9 != 0) {
              local_4d8[0] = local_4d8[0] & 0x7ffffffd | 0x80000000;
              uVar9 = recovered_10001ff8(DAT_10004820,*puVar1,4,local_4d8[0]);
              if ((int)uVar9 != 0) {
                uVar9 = recovered_10001bc5(DAT_10004820,*(long *)(puVar18 + 2),0,puVar18 + 4);
                if ((((int)uVar9 != 0) &&
                    (uVar9 = recovered_10001bc5(DAT_10004820,*puVar1,0x24,local_d8), (int)uVar9 != 0
                    )) && (uVar9 = recovered_10001bc5(DAT_10004820,*puVar1,0x28,&local_3c),
                          (int)uVar9 != 0)) {
                  if ((local_d8[0] & local_3c & 1) == 0) {
LAB_10000bf5:
                    local_68 = puVar18 + 4;
                    uVar9 = recovered_10001bc5(local_48,*puVar1,0xc,&local_4c);
                    if (local_4c + 1 < 2 || (int)uVar9 == 0) {
                      pcVar14 = str_10002a25;
                    }
                    else {
                      uVar20 = 0;
                      uVar16 = 0;
                      while (uVar20 != 0x20) {
                        uVar13 = uVar20 & 0x1f;
                        uVar20 = uVar20 + 1;
                        if ((local_4c >> uVar13 & 1) != 0) {
                          uVar16 = uVar20;
                        }
                      }
                      iVar8 = recovered_10001ab0(local_48,param_2,uVar16 * 0x80 + 0x100,puVar1);
                      if ((iVar8 != 0) && (*puVar1 != 0)) {
                        *local_38 = 1;
                        local_60 = (ulong)DAT_10004004;
                        uVar11 = 0;
                        uVar20 = DAT_10004004;
                        do {
                          if ((0x1f < uVar11) || (7 < uVar20)) {
                            uVar20 = uVar20 - (int)local_60;
                            if (uVar20 == 0) {
                              recovered_100019f7(local_38);
                              recovered_100018a4(local_48,str_10002a63);
                              return 0;
                            }
                            DAT_10004000 = DAT_10004000 + 1;
                            recovered_10001890(local_8d8,0x400,&DAT_100029aa);
                            recovered_10001c5a((long)local_8d8,0x400,(ulong)uVar20);
                            pcVar14 = str_10002a87;
                            if (uVar20 == 1) {
                              pcVar14 = str_10002a7f;
                            }
                            recovered_10001cd1((long)local_8d8,0x400,pcVar14);
                            recovered_10001cd1((long)local_8d8,0x400,&DAT_10004128 + local_60 * 0xf8
                                              );
                            recovered_10001890((undefined1 *)local_d8,0x60,str_10002a90);
                            recovered_10001cd1((long)local_d8,0x60,&DAT_10002b63);
                            recovered_10001d7f((long)local_d8,0x60,(uint)*param_2,2);
                            recovered_10001cd1((long)local_d8,0x60,&DAT_10002af0);
                            recovered_10001d7f((long)local_d8,0x60,(uint)param_2[1],2);
                            recovered_10001cd1((long)local_d8,0x60,&DAT_10002b65);
                            recovered_10001c5a((long)local_d8,0x60,(ulong)param_2[2]);
                            recovered_10001890((undefined1 *)local_4d8,0x400,&DAT_10002b67);
                            recovered_10001d7f((long)local_4d8,0x400,(uint)*param_2,2);
                            recovered_10001cd1((long)local_4d8,0x400,&DAT_10002af0);
                            recovered_10001d7f((long)local_4d8,0x400,(uint)param_2[1],2);
                            recovered_10001cd1((long)local_4d8,0x400,&DAT_10002b65);
                            recovered_10001c5a((long)local_4d8,0x400,(ulong)param_2[2]);
                            recovered_10001cd1((long)local_4d8,0x400,&DAT_10002b6c);
                            recovered_10001d7f((long)local_4d8,0x400,(uint)*(ushort *)(param_2 + 4),
                                               4);
                            recovered_10001cd1((long)local_4d8,0x400,&DAT_10002af0);
                            recovered_10001d7f((long)local_4d8,0x400,(uint)*(ushort *)(param_2 + 6),
                                               4);
                            recovered_10001cd1((long)local_4d8,0x400,&DAT_10002b6f);
                            if (local_8d8[0] != '\0') {
                              recovered_10001cd1((long)local_4d8,0x400,&DAT_10002b71);
                              recovered_10001cd1((long)local_4d8,0x400,local_8d8);
                            }
                            if ((code *)(ulong)(uint)local_48[3] != (code *)0x0) {
                              (*(code *)(ulong)(uint)local_48[3])(local_d8,str_10002a9e,local_4d8);
                            }
                            return 1;
                          }
                          if ((local_4c >> ((uint)uVar11 & 0x1f) & 1) != 0) {
                            uVar10 = (ulong)uVar20;
                            lVar21 = uVar10 * 0xf8;
                            local_4d8[0] = 0;
                            piVar2 = &DAT_10004060 + uVar10 * 0x3e;
                            local_d8[0] = 0;
                            recovered_10000765((long)piVar2,0xf8);
                            (&DAT_10004064)[uVar10 * 0x3e] = local_38[1];
                            *(uint *)(&DAT_10004068 + lVar21) = (uint)uVar11;
                            *(ulong *)(&DAT_10004070 + lVar21) =
                                 *(long *)(local_38 + 2) + uVar11 * 0x80 + 0x100;
                            local_70 = lVar21;
                            local_58 = uVar11;
                            recovered_10001f49((long)piVar2,0x28,local_4d8);
                            if ((((extraout_EAX == 0) || ((local_4d8[0] & 0xf0f) != 0x103)) ||
                                (recovered_10001f49((long)piVar2,0x24,local_d8),
                                extraout_EAX_00 == 0)) || (local_d8[0] != 0x101)) {
                              *(undefined8 *)(&DAT_10004070 + lVar21) = 0;
                            }
                            else {
                              bVar23 = recovered_10001e78((long)piVar2);
                              if ((int)CONCAT71(extraout_var,bVar23) == 0) {
                                recovered_100018a4(DAT_10004820,str_10002b26);
                                *(undefined8 *)(&DAT_10004070 + lVar21) = 0;
                              }
                              else {
                                uVar11 = recovered_10002556(DAT_10004820,0x1000,
                                                            &DAT_10004078 + uVar10 * 0x1f);
                                *(ulong *)(&DAT_10004080 + lVar21) = uVar11;
                                uVar11 = recovered_10002556(DAT_10004820,0x10000,
                                                            (long *)(lVar21 + ((uintptr_t)pf_module_state+0x172dU)));
                                *(ulong *)(&DAT_10004098 + lVar21) = uVar11;
                                if (uVar11 != 0 && *(long *)(&DAT_10004080 + lVar21) != 0) {
                                  uVar9 = recovered_100025af(DAT_10004820,local_38[7],
                                                             *(long *)(&DAT_10004080 + lVar21),
                                                             (long)(&DAT_10004088 + lVar21));
                                  if ((((int)uVar9 != 0) &&
                                      ((*(ushort *)(&DAT_10004088 + lVar21) & 0xfff) == 0)) &&
                                     ((*(int *)(&DAT_1000408c + lVar21) == 0 || (*local_68 < 0)))) {
                                    lVar22 = 0;
                                    piVar19 = (int *)(&DAT_100040e0 + lVar21);
LAB_10000e42:
                                    if (lVar22 != 0x10000) {
                                      uVar9 = recovered_100025af(DAT_10004820,local_38[7],
                                                                 *(long *)(&DAT_10004098 + lVar21) +
                                                                 lVar22,(long)(piVar19 + -0x10));
                                      if (((int)uVar9 != 0) &&
                                         ((*(ushort *)(piVar19 + -0x10) & 0xfff) == 0))
                                      goto code_r0x10000e7f;
                                      goto LAB_10000e03;
                                    }
                                    recovered_10000765(*(long *)(&DAT_10004080 + lVar21),0x1000);
                                    recovered_10000765(*(long *)(&DAT_10004098 + lVar21),0x10000);
                                    puVar18 = local_38;
                                    recovered_100025e8(DAT_10004820,local_38[7],
                                                       *(undefined8 *)(&DAT_10004080 + lVar21),
                                                       0x1000);
                                    recovered_100025e8(DAT_10004820,puVar18[7],
                                                       *(undefined8 *)(&DAT_10004098 + lVar21),
                                                       0x10000);
                                    recovered_10001f66((long)piVar2,0x14,0);
                                    if (((((extraout_EAX_01 == 0) ||
                                          (recovered_10001f66((long)piVar2,0,
                                                              *(undefined4 *)
                                                               (&DAT_10004088 + lVar21)),
                                          extraout_EAX_02 == 0)) ||
                                         (recovered_10001f66((long)piVar2,4,
                                                             *(undefined4 *)(&DAT_1000408c + lVar21)
                                                            ), extraout_EAX_03 == 0)) ||
                                        (((recovered_10001f66((long)piVar2,8,
                                                              *(int *)(&DAT_10004088 + lVar21) +
                                                              0x400), extraout_EAX_04 == 0 ||
                                          (recovered_10001f66((long)piVar2,0xc,
                                                              *(undefined4 *)
                                                               (&DAT_1000408c + lVar21)),
                                          extraout_EAX_05 == 0)) ||
                                         (recovered_10001f66((long)piVar2,0x30,0xffffffff),
                                         extraout_EAX_06 == 0)))) ||
                                       ((recovered_10001f66((long)piVar2,0x10,0xffffffff),
                                        extraout_EAX_07 == 0 ||
                                        (iVar8 = recovered_100020a9((long)piVar2), iVar8 == 0))))
                                    goto LAB_10000e03;
                                    *piVar2 = 1;
                                    uVar9 = recovered_100021ad((long)local_38,piVar2,0xec,0,0,0x200,
                                                               0);
                                    if ((((int)uVar9 == 0) ||
                                        (((lVar22 = *(long *)(&DAT_10004098 + lVar21), lVar22 == 0
                                          || (*(char *)(lVar22 + 1) < '\0')) ||
                                         ((~*(byte *)(lVar22 + 99) & 3) != 0)))) ||
                                       (((*(byte *)(lVar22 + 0xd5) & 0xd0) == 0x50 &&
                                        (*(int *)(lVar22 + 0xea) != 0x100)))) {
LAB_100010e5:
                                      recovered_100018a4(DAT_10004820,str_10002b46);
                                      goto LAB_10000e03;
                                    }
                                    bVar4 = *(byte *)(lVar22 + 0xa7);
                                    (&DAT_10004126)[lVar21] = (bVar4 & 0xd0) == 0x50;
                                    (&DAT_10004127)[lVar21] = (bVar4 & 0xe0) == 0x60;
                                    bVar23 = (bVar4 & 0xc4) == 0x44;
                                    (&DAT_10004125)[lVar21] = bVar23;
                                    uVar20 = *(uint *)(lVar22 + 0x78);
                                    if (bVar23) {
                                      uVar11 = *(ulong *)(lVar22 + 200);
                                      if (*(ulong *)(lVar22 + 200) == 0) {
                                        (&DAT_10004125)[lVar21] = 0;
                                        goto LAB_1000106b;
                                      }
                                    }
                                    else {
LAB_1000106b:
                                      uVar11 = (ulong)uVar20;
                                      if ((ulong)uVar20 == 0) goto LAB_100010e5;
                                    }
                                    (&DAT_10004124)[lVar21] = uVar11 >> 0x20 != 0;
                                    if (0xfffffffe < uVar11) {
                                      uVar11 = 0xffffffff;
                                    }
                                    (&DAT_10004120)[uVar10 * 0x3e] = (int)uVar11;
                                    for (uVar11 = 0; uVar11 < 0x28; uVar11 = uVar11 + 2) {
                                      cVar15 = *(char *)(lVar22 + 0x37 + uVar11);
                                      if (0x5e < (byte)(cVar15 - 0x20U)) {
                                        cVar15 = ' ';
                                      }
                                      cVar17 = *(char *)(lVar22 + 0x36 + uVar11);
                                      (&DAT_10004128)[uVar11 + local_70] = cVar15;
                                      if (0x5e < (byte)(cVar17 - 0x20U)) {
                                        cVar17 = ' ';
                                      }
                                      (&DAT_10004129)[uVar11 + local_70] = cVar17;
                                    }
                                    lVar22 = 0;
                                    do {
                                      lVar12 = lVar22;
                                      if (lVar12 == -0x28) break;
                                      lVar22 = lVar12 + -1;
                                    } while ((&DAT_10004128)[(ulong)((int)lVar12 + 0x27) + lVar21]
                                             == ' ');
                                    *(undefined1 *)(lVar12 + 0xf0 + (long)piVar2) = 0;
                                    uVar20 = DAT_10004004 + 1;
                                    uVar11 = local_58;
                                    DAT_10004004 = uVar20;
                                    goto LAB_10000e1d;
                                  }
                                }
LAB_10000e03:
                                recovered_10001e16(piVar2);
                              }
                            }
                            uVar11 = local_58;
                            uVar20 = DAT_10004004;
                          }
LAB_10000e1d:
                          uVar11 = uVar11 + 1;
                        } while( true );
                      }
                      pcVar14 = str_10002a43;
                    }
                    recovered_100018cb((long)param_2,pcVar14,local_4c);
                    puVar18 = local_38;
                    goto LAB_10001196;
                  }
                  uVar9 = recovered_10001ff8(DAT_10004820,*puVar1,0x28,local_3c | 2);
                  if ((int)uVar9 != 0) {
                    iVar8 = 0x7ea;
                    while (bVar23 = iVar8 != 0, iVar8 = iVar8 + -1, bVar23) {
                      uVar9 = recovered_10001bc5(DAT_10004820,*puVar1,0x28,&local_3c);
                      if ((int)uVar9 == 0) goto LAB_10001161;
                      if ((local_3c & 0x13) == 2) goto LAB_10000bf5;
                      recovered_1000205c(DAT_10004820,1000);
                    }
                    recovered_100018a4(DAT_10004820,str_10002aff);
                  }
                }
              }
            }
LAB_10001161:
            local_4d8[0] = 0;
            recovered_10001bc5(local_48,*(long *)(puVar18 + 2),4,local_4d8);
            pcVar14 = str_10002a0c;
            uVar20 = local_4d8[0];
          }
          recovered_100018cb((long)param_2,pcVar14,uVar20);
LAB_10001196:
          recovered_100019f7(puVar18);
          return 0;
        }
        goto LAB_10000bb7;
      }
      pcVar14 = str_10002ad7;
      puVar18 = local_38;
    }
  }
  recovered_10001cd1((long)local_8d8,0x400,pcVar14);
LAB_10000bb7:
  recovered_100018cb((long)param_2,str_100029d2,local_50);
  recovered_100019f7(puVar18);
  return 0;
code_r0x10000e7f:
  piVar3 = piVar19 + 1;
  lVar22 = lVar22 + 0x1000;
  iVar8 = *piVar19;
  piVar19 = piVar3;
  if ((iVar8 == 0) || (*local_68 < 0)) goto LAB_10000e42;
  goto LAB_10000e03;
}

#undef DAT_100029aa
#undef DAT_10002af0
#undef DAT_10002b63
#undef DAT_10002b65
#undef DAT_10002b67
#undef DAT_10002b6c
#undef DAT_10002b6f
#undef DAT_10002b71
#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004014
#undef DAT_10004024
#undef DAT_10004025
#undef DAT_10004026
#undef DAT_10004027
#undef DAT_10004028
#undef DAT_1000402c
#undef DAT_10004060
#undef DAT_10004064
#undef DAT_10004068
#undef DAT_10004070
#undef DAT_10004078
#undef DAT_10004080
#undef DAT_10004088
#undef DAT_1000408c
#undef DAT_10004098
#undef DAT_100040e0
#undef DAT_10004120
#undef DAT_10004124
#undef DAT_10004125
#undef DAT_10004126
#undef DAT_10004127
#undef DAT_10004128
#undef DAT_10004129
#undef DAT_10004820
#undef str_100029ab
#undef str_100029d2
#undef str_100029ed
#undef str_10002a0c
#undef str_10002a25
#undef str_10002a43
#undef str_10002a63
#undef str_10002a7f
#undef str_10002a87
#undef str_10002a90
#undef str_10002a9e
#undef str_10002ab3
#undef str_10002ac5
#undef str_10002ad7
#undef str_10002aff
#undef str_10002b26
#undef str_10002b46
#undef local_8d8
#undef local_4d8
#undef local_d8
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16adU)))
#undef DAT_10004027
#define DAT_10004027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c4U)))
#undef DAT_10004820
#define DAT_10004820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000140b
 */

void recovered_1000140b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  for (lVar1 = 0; lVar1 != 0x50; lVar1 = lVar1 + 0x28) {
    if ((*(int *)((long)&DAT_10004010 + lVar1) != 0) || ((&DAT_10004027)[lVar1] != '\0')) {
      recovered_100019f7((undefined4 *)((long)&DAT_10004010 + lVar1));
    }
  }
  DAT_10004000 = 0;
  DAT_10004004 = 0;
  DAT_10004820 = 0;
  return;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004027
#undef DAT_10004820

#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004120
#define DAT_10004120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17bdU)))
#undef DAT_10004128
#define DAT_10004128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c5U)))
#undef str_10002b74
#define str_10002b74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000145a
 */

undefined8 recovered_1000145a(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;

  uVar1 = 0;
  if (((param_1 < DAT_10004004) && (param_2 != (undefined4 *)0x0)) &&
     (uVar4 = (ulong)param_1, (&DAT_10004060)[uVar4 * 0x3e] != 0)) {
    *param_2 = (&DAT_10004120)[uVar4 * 0x3e];
    uVar1 = 1;
    if (param_4 != 0 && param_3 != 0) {
      pcVar3 = str_10002b74;
      if ((&DAT_10004128)[uVar4 * 0xf8] != '\0') {
        pcVar3 = &DAT_10004128 + uVar4 * 0xf8;
      }
      for (uVar4 = 0; uVar2 = (ulong)(param_4 - 1), param_4 - 1 != uVar4; uVar4 = uVar4 + 1) {
        if (pcVar3[uVar4] == '\0') {
          uVar2 = uVar4;
          break;
        }
        *(char *)(param_3 + uVar4) = pcVar3[uVar4];
      }
      *(undefined1 *)(param_3 + uVar2) = 0;
    }
  }
  return uVar1;
}

#undef DAT_10004004
#undef DAT_10004060
#undef DAT_10004120
#undef DAT_10004128
#undef str_10002b74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e1
 */

void recovered_100014e1(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002613(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014ee
 */

void recovered_100014ee(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002613(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16adU)))
#undef DAT_10004030
#define DAT_10004030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cdU)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004820
#define DAT_10004820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014fc
 */

undefined8 recovered_100014fc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;

  uVar2 = 0;
  if (param_1 < DAT_10004004) {
    piVar4 = (int *)0x0;
    if ((&DAT_10004060)[(ulong)param_1 * 0x3e] != 0) {
      piVar4 = &DAT_10004060 + (ulong)param_1 * 0x3e;
    }
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (((piVar4 != (int *)0x0) && (DAT_10004820 != 0)) &&
     (uVar3 = (ulong)(uint)piVar4[1], (uint)piVar4[1] < DAT_10004000)) {
    bVar1 = *(byte *)((long)piVar4 + 199);
    if ((bVar1 == 0) && (*(char *)((long)piVar4 + 0xc6) != '\x01')) {
      uVar2 = 1;
    }
    else {
      recovered_100027f6((long)(&DAT_10004010 + uVar3 * 10));
      uVar2 = 0;
      if (((&DAT_10004010)[uVar3 * 10] != 0) && (*piVar4 != 0)) {
        uVar2 = recovered_100021ad((long)(&DAT_10004010 + uVar3 * 10),piVar4,
                                   (bVar1 & *(byte *)((long)piVar4 + 0xc5)) * '\x03' - 0x19,0,0,0,0)
        ;
      }
      *(undefined4 *)(&DAT_10004030 + uVar3 * 0x28) = 0;
    }
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004030
#undef DAT_10004060
#undef DAT_10004820

#undef DAT_10002b7e
#define DAT_10002b7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21bU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c1U)))
#undef DAT_10004025
#define DAT_10004025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c2U)))
#undef DAT_10004026
#define DAT_10004026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c3U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004064
#define DAT_10004064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1701U)))
#undef DAT_10004068
#define DAT_10004068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1705U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d5
 */

undefined8 recovered_100015d5(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;

  uVar6 = 0;
  if ((param_1 < DAT_10004004) && (uVar5 = (ulong)param_1, (&DAT_10004060)[uVar5 * 0x3e] != 0)) {
    uVar4 = *(uint *)(&DAT_10004068 + uVar5 * 0xf8);
    lVar8 = (ulong)(uint)(&DAT_10004064)[uVar5 * 0x3e] * 0x28;
    uVar1 = (&DAT_10004024)[lVar8];
    uVar2 = (&DAT_10004025)[lVar8];
    uVar3 = (&DAT_10004026)[lVar8];
    for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 1) {
      *(undefined1 *)(param_2 + lVar8) = 0;
    }
    for (lVar8 = 0; lVar8 != 4; lVar8 = lVar8 + 1) {
      *(undefined1 *)(param_2 + lVar8) = (&DAT_10002b7e)[lVar8];
    }
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    *(undefined1 *)(param_2 + 6) = uVar3;
    puVar7 = (undefined1 *)(param_2 + 8);
    for (lVar8 = 0; lVar8 != 0x20; lVar8 = lVar8 + 8) {
      *puVar7 = (char)(uVar4 >> ((byte)lVar8 & 0x1f));
      puVar7 = puVar7 + 1;
    }
    uVar6 = 1;
    for (lVar8 = 0; lVar8 != 8; lVar8 = lVar8 + 1) {
      *(undefined1 *)(param_2 + 0x10 + lVar8) = 0;
    }
  }
  return uVar6;
}

#undef DAT_10002b7e
#undef DAT_10004004
#undef DAT_10004024
#undef DAT_10004025
#undef DAT_10004026
#undef DAT_10004060
#undef DAT_10004064
#undef DAT_10004068

#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001691
 */

undefined4
recovered_10001691(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_10001843(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_10001843(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10001843(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001843(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_10001843(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
        }
      }
    }
  }
  return local_34;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001843
 */

undefined8
recovered_10001843(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000188a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

void recovered_10001890(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001cd1((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a4
 */

void recovered_100018a4(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     ((code *)(ulong)(uint)param_1[10] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100018c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10002af0
#define DAT_10002af0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18dU)))
#undef DAT_10002afa
#define DAT_10002afa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x197U)))
#undef DAT_10002afd
#define DAT_10002afd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#undef str_10002aea
#define str_10002aea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x187U)))
#undef str_10002af2
#define str_10002af2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18fU)))
#define local_438 (*(undefined1 (*)[1080])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018cb
 */

void recovered_100018cb(long param_1,char *param_2,uint param_3)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};


  recovered_10001890(local_438,0x400,str_10002aea);
  recovered_10001d7f((long)local_438,0x400,(uint)*(ushort *)(param_1 + 4),4);
  recovered_10001cd1((long)local_438,0x400,&DAT_10002af0);
  recovered_10001d7f((long)local_438,0x400,(uint)*(ushort *)(param_1 + 6),4);
  recovered_10001cd1((long)local_438,0x400,str_10002af2);
  recovered_10001d7f((long)local_438,0x400,(uint)*(byte *)(param_1 + 8),2);
  recovered_10001d7f((long)local_438,0x400,(uint)*(byte *)(param_1 + 9),2);
  recovered_10001cd1((long)local_438,0x400,&DAT_10002afa);
  recovered_10001cd1((long)local_438,0x400,param_2);
  recovered_10001cd1((long)local_438,0x400,&DAT_10002afd);
  recovered_10001d7f((long)local_438,0x400,param_3,8);
  recovered_100018a4(DAT_10004820,local_438);
  return;
}

#undef DAT_10002af0
#undef DAT_10002afa
#undef DAT_10002afd
#undef DAT_10004820
#undef str_10002aea
#undef str_10002af2
#undef local_438

#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f7
 */

void recovered_100019f7(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;

  if ((param_1 != (undefined4 *)0x0) && (DAT_10004820 != (int *)0x0)) {
    *param_1 = 0;
    uVar5 = 1;
    piVar4 = &DAT_10004060;
    uVar1 = DAT_10004004;
    for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      if ((piVar4[1] == param_1[1]) && ((*piVar4 != 0 || (*(long *)(piVar4 + 6) != 0)))) {
        uVar2 = recovered_10001e16(piVar4);
        if ((int)uVar2 == 0) {
          uVar5 = uVar2;
        }
        uVar5 = uVar5 & 0xffffffff;
        uVar1 = DAT_10004004;
      }
      piVar4 = piVar4 + 0x3e;
    }
    if (*(char *)((long)param_1 + 0x17) != '\0') {
      uVar1 = param_1[6] & 0xfffffffb;
      if ((int)uVar5 != 0) {
        uVar1 = param_1[6];
      }
      recovered_10001d25(DAT_10004820,*(undefined1 *)(param_1 + 5),
                         *(undefined1 *)((long)param_1 + 0x15),*(undefined1 *)((long)param_1 + 0x16)
                         ,uVar1 & 0xffff);
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
  }
  return;
}

#undef DAT_10004004
#undef DAT_10004060
#undef DAT_10004820

#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab0
 */

undefined4 recovered_10001ab0(int *param_1,undefined1 *param_2,int param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((((param_4 != (ulong *)0x0 && param_2 != (undefined1 *)0x0) &&
       ((*(uint *)(param_2 + 0x24) & 7) != 4)) &&
      (local_38 = *(uint *)(param_2 + 0x28), (local_38 & 1) == 0 && local_38 != 0)) &&
     (recovered_10001843(param_1,*param_2,param_2[1],param_2[2],0x24,4,(long)&local_38),
     (local_38 & 7) != 4)) {
    uVar3 = 0xfffffffc;
    if ((local_38 & 1) == 0) {
      uVar3 = 0xfffffff0;
    }
    if ((param_3 != 0) && (uVar3 = uVar3 & local_38, uVar3 != 0)) {
      *param_4 = 0;
      local_34 = 0;
      uVar1 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
        if ((uint)param_1[2] < 0xbc) {
          if ((uint)param_1[2] < 0x68) {
            return 0;
          }
        }
        else if ((code *)(ulong)(uint)param_1[0x2e] != (code *)0x0) {
          uVar1 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,0,param_3,param_4);
          return uVar1;
        }
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          uVar1 = 0;
          iVar2 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,param_3,&local_34);
          if (iVar2 != 0) {
            *param_4 = (ulong)local_34;
            uVar1 = 1;
          }
        }
      }
    }
  }
  return uVar1;
}

#undef local_38
#undef local_34

#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bc5
 */

undefined8 recovered_10001bc5(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 uVar3;

  local_1c = 0;
  uVar3 = 0;
  if (((param_2 != 0 && param_4 != (undefined4 *)0x0) && (param_1 != (int *)0x0)) &&
     (*param_1 == 0x54584b57)) {
    uVar2 = (param_3 & 0xffffffff) + param_2;
    if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
      if (uVar2 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
      if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4,&local_1c);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4,&local_1c);
    }
    if (iVar1 != 0) {
      *param_4 = local_1c;
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef local_1c

#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c5a
 */

void recovered_10001c5a(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10001ddc(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10001ddc(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd1
 */

void recovered_10001cd1(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001d5f(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d25
 */

undefined8
recovered_10001d25(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d5f
 */

long recovered_10001d5f(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d7f
 */

void recovered_10001d7f(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_10001ddc(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ddc
 */

void recovered_10001ddc(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001d5f(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e16
 */

undefined8 recovered_10001e16(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;

  *param_1 = 0;
  if ((*(long *)(param_1 + 4) != 0) &&
     (bVar1 = recovered_10001e78((long)param_1), (int)CONCAT71(extraout_var,bVar1) == 0)) {
    return 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    recovered_10002082(DAT_10004820,*(long *)(param_1 + 6));
  }
  if (*(long *)(param_1 + 0xc) != 0) {
    recovered_10002082(DAT_10004820,*(long *)(param_1 + 0xc));
  }
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return 1;
}

#undef DAT_10004820

#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e78
 */

bool recovered_10001e78(long param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  undefined8 uVar1;

  local_1c = 0;
  recovered_10001f49(param_1,0x18,&local_1c);
  if (local_1c == 0xffffffff || extraout_EAX == 0) {
    return false;
  }
  if ((local_1c & 0x8001) != 0) {
    recovered_10001f66(param_1,0x18,local_1c & 0xfffffffe);
    if (extraout_EAX_00 == 0) {
      return false;
    }
    uVar1 = recovered_10001f82(param_1,0x8000);
    if ((int)uVar1 == 0) {
      return false;
    }
  }
  recovered_10001f49(param_1,0x18,&local_1c);
  if (extraout_EAX_01 == 0) {
    return false;
  }
  if ((local_1c & 0x4010) != 0) {
    recovered_10001f66(param_1,0x18,local_1c & 0xffffffef);
    if (extraout_EAX_02 == 0) {
      return false;
    }
    uVar1 = recovered_10001f82(param_1,0x4000);
    if ((int)uVar1 == 0) {
      return false;
    }
  }
  recovered_10001f49(param_1,0x18,&local_1c);
  return extraout_EAX_03 != 0 && (local_1c & 0xc011) == 0;
}

#undef local_1c

#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f49
 */

void recovered_10001f49(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001bc5(DAT_10004820,*(long *)(param_1 + 0x10),param_2 & 0xffffffff,param_3);
  return;
}

#undef DAT_10004820

#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f66
 */

void recovered_10001f66(long param_1,ulong param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001ff8(DAT_10004820,*(long *)(param_1 + 0x10),param_2 & 0xffffffff,param_3);
  return;
}

#undef DAT_10004820

#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f82
 */

undefined8 recovered_10001f82(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  ulong in_RAX;
  int iVar1;
  bool bVar2;

  iVar1 = 0x1f5;
  uStack_38 = in_RAX;
  while( true ) {
    bVar2 = iVar1 == 0;
    iVar1 = iVar1 + -1;
    if (bVar2) {
      return 0;
    }
    uStack_38 = uStack_38 & 0xffffffff;
    recovered_10001f49(param_1,0x18,(undefined4 *)((long)&uStack_38 + 4));
    if (extraout_EAX == 0) {
      return 0;
    }
    if (PF_PART4(uStack_38, 4) == 0xffffffff) {
      return 0;
    }
    if ((PF_PART4(uStack_38, 4) & param_2) == 0) break;
    recovered_1000205c(DAT_10004820,1000);
  }
  return 1;
}

#undef DAT_10004820
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff8
 */

undefined8 recovered_10001ff8(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000205c
 */

void recovered_1000205c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000207e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002082
 */

void recovered_10002082(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x3c)) ||
     ((code *)(ulong)(uint)param_1[0xe] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100020a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xe])(param_2);
  return;
}


#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a9
 */

undefined4 recovered_100020a9(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  undefined4 extraout_EAX_03 = 0;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;

  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  recovered_10001f49(param_1,0x18,&local_3c);
  uVar1 = 0;
  if (extraout_EAX != 0) {
    local_3c = local_3c & 0xfffffe9 | 0x10000016;
    recovered_10001f66(param_1,0x18,local_3c);
    if (extraout_EAX_00 != 0) {
      iVar2 = 0x3e9;
      while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
        recovered_10001f49(param_1,0x20,&local_38);
        if ((extraout_EAX_01 == 0) ||
           (recovered_10001f49(param_1,0x28,&local_34), extraout_EAX_02 == 0)) {
          return 0;
        }
        if (((local_38 & 0x88) == 0) && ((local_34 & 0xf0f) == 0x103)) break;
        recovered_1000205c(DAT_10004820,1000);
      }
      uVar1 = 0;
      if (((local_38 & 0x88) == 0) && ((local_34 & 0xf0f) == 0x103)) {
        recovered_10001f66(param_1,0x18,local_3c | 1);
        uVar1 = extraout_EAX_03;
      }
    }
  }
  return uVar1;
}

#undef DAT_10004820
#undef local_34
#undef local_3c
#undef local_38

#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ad
 */

undefined8
recovered_100021ad(long param_1,int *param_2,byte param_3,undefined4 param_4,undefined4 param_5,
                  uint param_6,int param_7)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int iVar8;
  undefined7 extraout_var = 0;
  int iVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;

  if ((((param_6 & 1) == 0) && (param_6 < 0x10001)) && (*param_2 != 0)) {
    pbVar4 = *(byte **)(param_2 + 8);
    local_34 = param_6 + 0xfff >> 0xc;
    iVar8 = param_2[10];
    iVar9 = iVar8 + 0x800;
    local_38 = param_5;
    recovered_10000765((long)(pbVar4 + 0x800),0x180);
    uVar13 = local_34;
    cVar1 = *(char *)((long)param_2 + 0xc5);
    for (lVar10 = 0x800; lVar10 != 0x814; lVar10 = lVar10 + 1) {
      pbVar4[lVar10] = 0;
    }
    pbVar4[0x800] = 0x27;
    pbVar4[0x801] = 0x80;
    pbVar4[0x802] = param_3;
    pbVar4[0x804] = (byte)param_4;
    pbVar4[0x805] = (byte)((uint)param_4 >> 8);
    pbVar4[0x806] = (byte)((uint)param_4 >> 0x10);
    bVar11 = (byte)((uint)param_4 >> 0x18);
    if (cVar1 == '\0') {
      bVar11 = bVar11 & 0xf | 0x40;
    }
    else {
      pbVar4[0x808] = bVar11;
      pbVar4[0x80d] = (byte)((uint)local_38 >> 8);
      bVar11 = 0x40;
    }
    pbVar4[0x807] = bVar11;
    pbVar4[0x80c] = (byte)local_38;
    lVar10 = 0x220;
    for (lVar12 = 0; (ulong)(local_34 << 0xc) + lVar12 != 0; lVar12 = lVar12 + -0x1000) {
      if ((ulong)param_6 + lVar12 == 0) {
        return 0;
      }
      uVar2 = *(uint *)((long)param_2 + lVar10 + -0x1e0);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      uVar6 = param_6 + (int)lVar12;
      if (0xfff < uVar6) {
        uVar6 = 0x1000;
      }
      *(uint *)(pbVar4 + lVar10 * 4) = uVar2;
      uVar3 = *(undefined4 *)((long)param_2 + lVar10 + -0x1a0);
      pbVar4[lVar10 * 4 + 4] = (byte)uVar3;
      pbVar4[lVar10 * 4 + 5] = (byte)((uint)uVar3 >> 8);
      pbVar4[lVar10 * 4 + 6] = (byte)((uint)uVar3 >> 0x10);
      pbVar4[lVar10 * 4 + 7] = (byte)((uint)uVar3 >> 0x18);
      iVar7 = uVar6 + 0x3fffff;
      pbVar4[lVar10 * 4 + 0xc] = (byte)iVar7;
      pbVar4[lVar10 * 4 + 0xd] = (byte)((uint)iVar7 >> 8);
      pbVar4[lVar10 * 4 + 0xe] = (byte)((uint)iVar7 >> 0x10) & 0x3f;
      pbVar4[lVar10 * 4 + 0xf] = 0;
      lVar10 = lVar10 + 4;
    }
    recovered_10000765((long)pbVar4,0x20);
    *pbVar4 = (param_7 != 0) << 6 | 5;
    pbVar4[1] = 0;
    pbVar4[2] = (byte)uVar13;
    pbVar4[3] = 0;
    pbVar4[8] = (byte)iVar8;
    pbVar4[9] = (byte)((uint)iVar9 >> 8);
    pbVar4[10] = (byte)((uint)iVar9 >> 0x10);
    pbVar4[0xb] = (byte)((uint)iVar9 >> 0x18);
    *(int *)(pbVar4 + 0xc) = param_2[0xb];
    if (param_6 != 0) {
      recovered_100025e8(DAT_10004820,*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_2 + 0xe)
                         ,param_6);
    }
    recovered_100025e8(DAT_10004820,*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_2 + 8),
                       0x1000);
    if (((DAT_10004820 != (int *)0x0) && (*DAT_10004820 == 0x54584b57)) &&
       ((0x7b < (uint)DAT_10004820[2] && ((code *)(ulong)(uint)DAT_10004820[0x1e] != (code *)0x0))))
    {
      (*(code *)(ulong)(uint)DAT_10004820[0x1e])();
    }
    recovered_10001f66((long)param_2,0x30,0xffffffff);
    if (((extraout_EAX != 0) &&
        (recovered_10001f66((long)param_2,0x10,0xffffffff), extraout_EAX_00 != 0)) &&
       (recovered_10001f66((long)param_2,0x38,1), extraout_EAX_01 != 0)) {
      for (uVar13 = 0; uVar13 < 15000000; uVar13 = uVar13 + 100) {
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        recovered_10001f49((long)param_2,0x38,&local_44);
        if ((((extraout_EAX_02 == 0) ||
             (recovered_10001f49((long)param_2,0x10,&local_40), extraout_EAX_03 == 0)) ||
            (recovered_10001f49((long)param_2,0x20,&local_3c), extraout_EAX_04 == 0)) ||
           (local_44 == 0xffffffff)) break;
        if ((local_3c & 1) != 0 || (local_40 & 0x78000000) != 0) {
          bVar5 = recovered_10001e78((long)param_2);
          if ((((int)CONCAT71(extraout_var,bVar5) != 0) &&
              (recovered_10001f66((long)param_2,0x30,0xffffffff), extraout_EAX_05 != 0)) &&
             ((recovered_10001f66((long)param_2,0x10,0xffffffff), extraout_EAX_06 != 0 &&
              (iVar8 = recovered_100020a9((long)param_2), iVar8 != 0)))) {
            return 0;
          }
          break;
        }
        if ((local_44 & 1) == 0) {
          if (param_7 == 0 && param_6 != 0) {
            recovered_100025e8(DAT_10004820,*(undefined4 *)(param_1 + 0x1c),
                               *(undefined8 *)(param_2 + 0xe),param_6);
          }
          return 1;
        }
        recovered_1000205c(DAT_10004820,100);
      }
      recovered_10001e16(param_2);
    }
  }
  return 0;
}

#undef DAT_10004820
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002556
 */

ulong recovered_10002556(int *param_1,int param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == (long *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x38)) ||
     (((code *)(ulong)(uint)param_1[0xd] == (code *)0x0 ||
      (lVar1 = (*(code *)(ulong)(uint)param_1[0xd])(param_2 + 0xfff), lVar1 == 0)))) {
    return 0;
  }
  *param_3 = lVar1;
  return lVar1 + 0xfffU & 0xfffffffffffff000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025af
 */

undefined8 recovered_100025af(int *param_1,undefined4 param_2,long param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100025e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,0x1000);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e8
 */

void recovered_100025e8(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000260f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16adU)))
#undef DAT_10004030
#define DAT_10004030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cdU)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004820
#define DAT_10004820 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ebdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002613
 */

undefined8 recovered_10002613(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;

  uVar7 = 0;
  if (param_1 < DAT_10004004) {
    piVar9 = (int *)0x0;
    if ((&DAT_10004060)[(ulong)param_1 * 0x3e] != 0) {
      piVar9 = &DAT_10004060 + (ulong)param_1 * 0x3e;
    }
  }
  else {
    piVar9 = (int *)0x0;
  }
  if ((((param_4 != 0) && (param_3 != 0)) && (piVar9 != (int *)0x0)) &&
     ((DAT_10004820 != 0 && (uVar3 = (ulong)(uint)piVar9[1], (uint)piVar9[1] < DAT_10004000)))) {
    recovered_100027f6((long)(&DAT_10004010 + uVar3 * 10));
    uVar7 = 0;
    if (((&DAT_10004010)[uVar3 * 10] != 0) &&
       ((*piVar9 != 0 && (param_4 <= piVar9[0x30] - param_2 && param_2 <= (uint)piVar9[0x30])))) {
      for (; param_4 != 0; param_4 = param_4 - uVar8) {
        uVar8 = 0x80;
        if (param_4 < 0x80) {
          uVar8 = param_4;
        }
        cVar1 = *(char *)((long)piVar9 + 0xc5);
        bVar5 = 0xca;
        if (cVar1 != '\0') {
          bVar5 = 0x35;
        }
        bVar2 = 200;
        if (cVar1 != '\0') {
          bVar2 = 0x25;
        }
        if (param_5 != 0) {
          bVar2 = bVar5;
        }
        uVar7 = 0;
        if ((((uint)piVar9[0x30] < param_2) || (piVar9[0x30] - param_2 < uVar8)) ||
           ((cVar1 == '\0' && (0x10000000 < (ulong)uVar8 + (ulong)param_2)))) goto LAB_100027d9;
        uVar10 = (ulong)(uVar8 << 9);
        if (param_5 != 0) {
          for (uVar6 = 0; uVar10 != uVar6; uVar6 = uVar6 + 1) {
            *(undefined1 *)(*(long *)(piVar9 + 0xe) + uVar6) = *(undefined1 *)(param_3 + uVar6);
          }
        }
        uVar4 = recovered_100021ad((long)(&DAT_10004010 + uVar3 * 10),piVar9,bVar2,param_2,uVar8,
                                   uVar8 << 9,param_5);
        uVar7 = 0;
        if ((int)uVar4 == 0) goto LAB_100027d9;
        if (param_5 == 0) {
          for (uVar6 = 0; uVar10 != uVar6; uVar6 = uVar6 + 1) {
            *(undefined1 *)(param_3 + uVar6) = *(undefined1 *)(*(long *)(piVar9 + 0xe) + uVar6);
          }
        }
        param_3 = param_3 + uVar10;
        param_2 = param_2 + uVar8;
      }
      uVar7 = 1;
    }
LAB_100027d9:
    *(undefined4 *)(&DAT_10004030 + uVar3 * 0x28) = 0;
  }
  return uVar7;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004030
#undef DAT_10004060
#undef DAT_10004820

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f6
 */

void recovered_100027f6(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(param_1 + 0x20)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(param_1 + 0x20) != 0);
  }
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x169dU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x16a1U)))
#undef DAT_10004060
#define DAT_10004060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16fdU)))
#undef DAT_10004120
#define DAT_10004120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17bdU)))
#undef DAT_10004820
#define DAT_10004820 (*(int * *)(((uintptr_t)pf_module_state + 0x1ebdU)))
#undef str_10002b83
#define str_10002b83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10002b95
#define str_10002b95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x232U)))
#undef str_10002bde
#define str_10002bde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27bU)))
#undef str_10002bf1
#define str_10002bf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002811
 */

undefined8 recovered_10002811(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;

  uVar2 = 0;
  if (DAT_10004004 != 0 && (DAT_10004820 != (int *)0x0 && param_1 != (undefined8 *)0x0)) {
    lVar4 = 0;
    uVar5 = 0;
    for (lVar3 = 0; (ulong)DAT_10004004 * 0xf8 != lVar3; lVar3 = lVar3 + 0xf8) {
      if (*(int *)((long)&DAT_10004060 + lVar3) != 0) {
        lVar4 = lVar4 + (ulong)*(uint *)((long)&DAT_10004120 + lVar3);
        uVar5 = uVar5 + 1;
      }
    }
    recovered_10000765((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    uVar1 = 9;
    if (uVar5 == DAT_10004004) {
      uVar1 = 0x13;
    }
    *(undefined4 *)(param_1 + 2) = uVar1;
    uVar1 = 0;
    if ((((DAT_10004820 != (int *)0x0) && (*DAT_10004820 == 0x54584b57)) &&
        (0x2f < (uint)DAT_10004820[2])) && ((code *)(ulong)(uint)DAT_10004820[0xb] != (code *)0x0))
    {
      uVar1 = (*(code *)(ulong)(uint)DAT_10004820[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10004000;
    *(uint *)(param_1 + 9) = uVar5;
    *(int *)((long)param_1 + 0x4c) = (int)lVar4;
    *(int *)(param_1 + 10) = (int)((ulong)lVar4 >> 0x20);
    recovered_10001890((undefined1 *)((long)param_1 + 0x54),0x40,str_10002b83);
    recovered_10001890((undefined1 *)((long)param_1 + 0x94),0x40,str_10002b95);
    recovered_10001890((undefined1 *)((long)param_1 + 0xd4),0x60,str_10002bde);
    recovered_10001890((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002bf1);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004060
#undef DAT_10004120
#undef DAT_10004820
#undef str_10002b83
#undef str_10002b95
#undef str_10002bde
#undef str_10002bf1

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
