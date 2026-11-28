/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10003000
#define DAT_10003000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10003000;
}

#undef DAT_10003000

#undef DAT_10002a40
#define DAT_10002a40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef DAT_10004004
#define DAT_10004004 (*(int *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_100045f0
#define DAT_100045f0 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
#undef DAT_100045f8
#define DAT_100045f8 (*(int *)(((uintptr_t)pf_module_state + 0x1bb8U)))
#undef UNK_10002a48
#define UNK_10002a48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_10002a40
#define _DAT_10002a40 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10002a50
#define str_10002a50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10U)))
#undef str_10002bb1
#define str_10002bb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002bc5
#define str_10002bc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x185U)))
#undef str_10002bd2
#define str_10002bd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_10002be0
#define str_10002be0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef uRam0000000010002a48
#define uRam0000000010002a48 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#define local_6c (*(int *)(pf_stack_frame + 484))
#define local_68 (*(undefined4 *)(pf_stack_frame + 488))
#define local_64 (*(undefined4 *)(pf_stack_frame + 492))
#define local_60 (*(undefined4 *)(pf_stack_frame + 496))
#define local_5c (*(undefined4 *)(pf_stack_frame + 500))
#define local_58 (*(undefined4 *)(pf_stack_frame + 504))
#define local_54 (*(undefined4 *)(pf_stack_frame + 508))
#define local_50 (*(undefined4 *)(pf_stack_frame + 512))
#define local_4c (*(undefined4 *)(pf_stack_frame + 516))
#define local_48 (*(undefined4 *)(pf_stack_frame + 520))
#define local_44 (*(undefined4 *)(pf_stack_frame + 524))
#define local_40 (*(uint *)(pf_stack_frame + 528))
#define local_3c (*(uint *)(pf_stack_frame + 532))
#define local_38 (*(uint *)(pf_stack_frame + 536))
#define local_34 (*(uint *)(pf_stack_frame + 540))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 32))
#define local_238 (*(undefined8 *)(pf_stack_frame + 24))
#define local_220 (*(code * *)(pf_stack_frame + 48))
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 64))
#define local_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 128))
#define local_190 (*(undefined1 (*)[400])(pf_stack_frame + 192))
#define local_130 (*(undefined1 (*)[304])(pf_stack_frame + 288))
#define local_70 (*(byte (*)[112])(pf_stack_frame + 480))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000475(void *api)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((long)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((long)api + 8) < 0xf8) {
    return 0;
  }
  DAT_10004000 = 0;
  DAT_10004004 = 0;
  recovered_10000797(((uintptr_t)pf_module_state+0x15d0U),0x540);
  recovered_10000797(((uintptr_t)pf_module_state+0x1b10U),0xa0);
  DAT_100045f8 = 0;
  iVar5 = 0;
  DAT_100045f0 = api;
  if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
     (*(int *)((long)api + 0x5c) != 0)) {
    iVar5 = 0;
    for (uVar4 = 0; uVar4 != 0x100; uVar4 = uVar4 + 1) {
      local_38 = uVar4 & 0xff;
      local_3c = uVar4;
      for (uVar6 = 0; uVar6 != 0x20; uVar6 = uVar6 + 1) {
        local_40 = uVar6 & 0xff;
        iVar1 = recovered_10001826(api,local_38,local_40,0,(undefined1 *)&local_238);
        if (iVar1 != 0) {
          local_34 = uVar6;
          uVar3 = recovered_100007b2(api,(byte *)&local_238);
          iVar5 = (int)uVar3 + iVar5;
          if (((int8_t)PF_PART1(uStack_230, 4)) < '\0') {
            for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
              iVar2 = recovered_10001826(api,local_38,local_40,iVar1 + 8U & 0xff,local_70);
              if (iVar2 != 0) {
                uVar3 = recovered_100007b2(api,local_70);
                iVar5 = iVar5 + (int)uVar3;
              }
            }
            uVar4 = local_3c;
          }
          else {
          }
          uVar6 = local_34;
        }
      }
    }
    if (DAT_100045f8 != 0) goto LAB_1000060b;
  }
  recovered_10001534(api,str_10002a50);
LAB_1000060b:
  if (DAT_10004004 != 0 && iVar5 != 0) {
    local_6c = DAT_10004004;
    local_70[0] = 3;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_68 = 0x100015d7;
    local_64 = 0x10001663;
    local_60 = 0x10001670;
    local_5c = 0x1000167e;
    local_58 = 0x1000176a;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    if (((*(int *)api == 0x54584b57) && (0xd3 < *(uint *)((long)api + 8))) &&
       (((code *)(ulong)*(uint *)((long)api + 0xd0) != (code *)0x0 &&
        (iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_70), iVar5 != 0)))) {
      recovered_10000797((long)&local_238,0x1c8);
      local_238 = _DAT_10002a40;
      uStack_230 = uRam0000000010002a48;
      local_220 = recovered_1000290d;
      recovered_10001a25(local_210,0x40,str_10002bb1);
      recovered_10001a25(local_1d0,0x40,str_10002bc5);
      recovered_10001a25(local_190,0x60,str_10002bd2);
      recovered_10001a25(local_130,0xc0,str_10002be0);
      if (((DAT_100045f0 != (int *)0x0) && (*DAT_100045f0 == 0x54584b57)) &&
         ((0xef < (uint)DAT_100045f0[2] &&
          (((code *)(ulong)(uint)DAT_100045f0[0x3b] != (code *)0x0 &&
           (iVar5 = (*(code *)(ulong)(uint)DAT_100045f0[0x3b])(&local_238), iVar5 != 0)))))) {
        return 1;
      }
    }
  }
  recovered_1000155b(api);
  return 0;
}

#undef DAT_10002a40
#undef DAT_10004000
#undef DAT_10004004
#undef DAT_100045f0
#undef DAT_100045f8
#undef UNK_10002a48
#undef _DAT_10002a40
#undef str_10002a50
#undef str_10002bb1
#undef str_10002bc5
#undef str_10002bd2
#undef str_10002be0
#undef uRam0000000010002a48
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
#undef uStack_230
#undef local_238
#undef local_220
#undef local_210
#undef local_1d0
#undef local_190
#undef local_130
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000797
 */

void recovered_10000797(long param_1,long param_2)

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


#undef DAT_10002aa3
#define DAT_10002aa3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_10002b8f
#define DAT_10002b8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14fU)))
#undef DAT_10002b91
#define DAT_10002b91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x151U)))
#undef DAT_10002b93
#define DAT_10002b93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x153U)))
#undef DAT_10002b95
#define DAT_10002b95 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155U)))
#undef DAT_10002b9a
#define DAT_10002b9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15aU)))
#undef DAT_10002b9d
#define DAT_10002b9d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dU)))
#undef DAT_10002b9f
#define DAT_10002b9f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fU)))
#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d0U)))
#undef DAT_10004014
#define DAT_10004014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d4U)))
#undef DAT_10004018
#define DAT_10004018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d8U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e0U)))
#undef DAT_10004021
#define DAT_10004021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e1U)))
#undef DAT_10004022
#define DAT_10004022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e2U)))
#undef DAT_10004023
#define DAT_10004023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e3U)))
#undef DAT_10004024
#define DAT_10004024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_10004028
#define DAT_10004028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e8U)))
#undef DAT_1000402c
#define DAT_1000402c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15ecU)))
#undef DAT_10004030
#define DAT_10004030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f0U)))
#undef DAT_10004034
#define DAT_10004034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f4U)))
#undef DAT_10004038
#define DAT_10004038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15f8U)))
#undef DAT_1000403c
#define DAT_1000403c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fcU)))
#undef DAT_100040c8
#define DAT_100040c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1688U)))
#undef DAT_100040cc
#define DAT_100040cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x168cU)))
#undef DAT_10004100
#define DAT_10004100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c0U)))
#undef DAT_10004104
#define DAT_10004104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16c4U)))
#undef DAT_10004128
#define DAT_10004128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16e8U)))
#undef DAT_10004138
#define DAT_10004138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16f8U)))
#undef DAT_10004140
#define DAT_10004140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1700U)))
#undef DAT_10004148
#define DAT_10004148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1708U)))
#undef DAT_10004158
#define DAT_10004158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1718U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_10004554
#define DAT_10004554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_10004558
#define DAT_10004558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b18U)))
#undef DAT_1000455c
#define DAT_1000455c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b1cU)))
#undef DAT_10004560
#define DAT_10004560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef DAT_100045f8
#define DAT_100045f8 (*(int *)(((uintptr_t)pf_module_state + 0x1bb8U)))
#undef str_10002aa4
#define str_10002aa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64U)))
#undef str_10002acb
#define str_10002acb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bU)))
#undef str_10002ae9
#define str_10002ae9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_10002b08
#define str_10002b08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8U)))
#undef str_10002b23
#define str_10002b23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_10002b2e
#define str_10002b2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_10002b3a
#define str_10002b3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfaU)))
#undef str_10002b48
#define str_10002b48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
#undef str_10002b58
#define str_10002b58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118U)))
#undef str_10002b6a
#define str_10002b6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_10002b7c
#define str_10002b7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#define local_8d8 (*(char (*)[2264])(pf_stack_frame + 24))
#define local_4d8 (*(uint (*)[310])(pf_stack_frame + 1048))
#define local_d8 (*(uint (*)[54])(pf_stack_frame + 2072))
#define local_70 (*(ulong *)(pf_stack_frame + 2176))
#define local_68 (*(ushort * *)(pf_stack_frame + 2184))
#define local_60 (*(byte * *)(pf_stack_frame + 2192))
#define local_54 (*(uint *)(pf_stack_frame + 2204))
#define local_50 (*(uint *)(pf_stack_frame + 2208))
#define local_4c (*(uint *)(pf_stack_frame + 2212))
#define local_48 (*(uint *)(pf_stack_frame + 2216))
#define local_44 (*(undefined4 *)(pf_stack_frame + 2220))
#define local_40 (*(long * *)(pf_stack_frame + 2224))
#define local_38 (*(int * *)(pf_stack_frame + 2232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007b2
 */

undefined8 recovered_100007b2(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[2320] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long extraout_RAX;
  undefined7 extraout_var = 0;
  long extraout_RAX_00;
  undefined7 extraout_var_00 = 0;
  long extraout_RAX_01;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;

  uVar19 = DAT_10004000;
  local_44 = 0;
  if (param_2[8] != 1) {
    return 0;
  }
  if (param_2[9] != 8) {
    return 0;
  }
  if (param_2[10] != 2) {
    return 0;
  }
  DAT_100045f8 = DAT_100045f8 + 1;
  uVar14 = (ulong)DAT_10004000;
  if (3 < uVar14) {
    return 0;
  }
  lVar20 = uVar14 * 0x150;
  puVar3 = (undefined4 *)(&DAT_10004010 + lVar20);
  local_60 = param_2;
  local_38 = param_1;
  recovered_10000797((long)puVar3,0x150);
  piVar18 = local_38;
  pbVar8 = local_60;
  *(uint *)(&DAT_10004014 + lVar20) = uVar19;
  bVar5 = *local_60;
  (&DAT_10004020)[lVar20] = bVar5;
  bVar6 = local_60[1];
  (&DAT_10004021)[lVar20] = bVar6;
  bVar7 = local_60[2];
  (&DAT_10004022)[lVar20] = bVar7;
  *(uint *)(&DAT_10004028 + lVar20) =
       (uint)bVar7 << 8 | (uint)bVar6 << 0xb | (uint)bVar5 << 0x10 | 0x80000000;
  local_70 = uVar14;
  recovered_10001a25(local_8d8,0x400,&DAT_10002aa3);
  uVar12 = recovered_100019d8(piVar18,*pbVar8,pbVar8[1],pbVar8[2],4,2,(long)&local_44);
  if ((int)uVar12 == 0) {
    pcVar16 = str_10002aa4;
    goto LAB_10000b43;
  }
  local_4d8[0] = 0;
  *(undefined2 *)(&DAT_10004024 + lVar20) = (undefined2)local_44;
  (&DAT_10004023)[lVar20] = 1;
  pcVar16 = str_10002b58;
  if ((((piVar18 == (int *)0x0) || (*piVar18 != 0x54584b57)) || ((uint)piVar18[2] < 100)) ||
     (piVar18[0x18] == 0)) {
LAB_10000b20:
    recovered_10001c1c((long)local_8d8,0x400,pcVar16);
  }
  else {
    uVar12 = recovered_100019d8(piVar18,*pbVar8,pbVar8[1],pbVar8[2],4,2,(long)local_4d8);
    if ((int)uVar12 == 0) {
      pcVar16 = str_10002b6a;
      goto LAB_10000b20;
    }
    uVar19 = 0;
    for (lVar13 = 5; lVar13 != 0xb; lVar13 = lVar13 + 1) {
      uVar15 = uVar19 | 1;
      uVar17 = uVar19 | 2;
      if (*(uint *)(pbVar8 + lVar13 * 4) == 0) {
        uVar17 = uVar19;
      }
      uVar19 = uVar17;
      if ((*(uint *)(pbVar8 + lVar13 * 4) & 1) != 0) {
        uVar19 = uVar15;
      }
    }
    lVar13 = recovered_10001caa(((uintptr_t)pf_module_state+0x51U));
    piVar18 = local_38;
    uVar17 = uVar19 | 4;
    if (lVar13 == 0) {
      uVar17 = uVar19;
    }
    if ((pbVar8[8] == 6) && (pbVar8[9] != 0)) {
      uVar17 = uVar17 | 2;
    }
    local_d8[0] = local_4d8[0] | uVar17;
    uVar12 = recovered_10001c70(local_38,*pbVar8,pbVar8[1],pbVar8[2],local_d8[0]);
    if ((int)uVar12 == 0) {
      pcVar16 = str_10002b7c;
      goto LAB_10000b20;
    }
    recovered_100019d8(piVar18,*pbVar8,pbVar8[1],pbVar8[2],4,2,(long)local_d8);
    if ((uVar17 & ~local_d8[0]) == 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_d8[0] = 0;
      uVar19 = *(uint *)(pbVar8 + 0x14);
      if ((uVar19 & 1) == 0 && uVar19 != 0) {
        local_54 = uVar19;
        recovered_100019d8(local_38,*pbVar8,pbVar8[1],pbVar8[2],0x10,4,(long)&local_54);
        uVar19 = 0;
        if ((local_54 & 7) == 4) {
          local_d8[0] = *(uint *)(pbVar8 + 0x18);
          recovered_100019d8(local_38,*pbVar8,pbVar8[1],pbVar8[2],0x14,4,(long)local_d8);
          uVar19 = local_d8[0];
        }
        uVar17 = 0xfffffffc;
        if ((local_54 & 1) == 0) {
          uVar17 = 0xfffffff0;
        }
        uVar17 = uVar17 & local_54;
        if (uVar17 != 0 || uVar19 != 0) {
          puVar1 = (ulong *)(&DAT_10004018 + lVar20);
          *puVar1 = 0;
          local_4d8[0] = 0;
          if (*local_38 == 0x54584b57) {
            if (((uint)local_38[2] < 0xbc) || ((code *)(ulong)(uint)local_38[0x2e] == (code *)0x0))
            {
              if ((0x67 < (uint)local_38[2] && uVar19 == 0) &&
                 (((code *)(ulong)(uint)local_38[0x19] != (code *)0x0 &&
                  (iVar10 = (*(code *)(ulong)(uint)local_38[0x19])(uVar17,0,0x4000,local_4d8),
                  iVar10 != 0)))) {
                uVar14 = (ulong)local_4d8[0];
                *puVar1 = uVar14;
                goto LAB_10000ba1;
              }
            }
            else {
              iVar10 = (*(code *)(ulong)(uint)local_38[0x2e])(uVar17,uVar19,0x4000,puVar1);
              if (iVar10 != 0) {
                uVar14 = *puVar1;
LAB_10000ba1:
                if ((((uVar14 != 0) &&
                     (uVar12 = recovered_10001cca(local_38,(long)puVar3,0,&local_50),
                     (int)uVar12 != 0)) &&
                    (uVar12 = recovered_10001cca(local_38,(long)puVar3,4,&local_4c),
                    (int)uVar12 != 0)) &&
                   (((local_4c & 0xf0020) == 0x20 &&
                    (uVar19 = 4 << ((byte)local_4c & 0xf),
                    *(uint *)(&DAT_1000402c + lVar20) = uVar19, uVar19 < 0x401)))) {
                  uVar17 = local_50 & 0xffff;
                  uVar19 = 0x10;
                  if (uVar17 < 0x10) {
                    uVar19 = uVar17 + 1;
                  }
                  *(uint *)(&DAT_10004034 + lVar20) = uVar19;
                  uVar15 = 0x20;
                  if (uVar17 < 0x20) {
                    uVar15 = uVar17 + 1;
                  }
                  *(uint *)(&DAT_10004038 + lVar20) = uVar15;
                  if (1 < uVar15 && 1 < uVar19) {
                    uVar17 = (local_50 >> 0x18) * 500 + 500;
                    *(uint *)(&DAT_10004030 + lVar20) = uVar17;
                    *(undefined4 *)(&DAT_1000403c + lVar20) = 0x2000;
                    lVar13 = *(long *)(&DAT_10004018 + lVar20) + 0x1000;
                    plVar2 = (long *)(lVar20 + ((uintptr_t)pf_module_state+0x1608U));
                    uVar12 = recovered_10001ef3(local_38,(long)puVar3,plVar2,uVar19,0x40,0,lVar13);
                    if ((int)uVar12 != 0) {
                      local_40 = (long *)(lVar20 + ((uintptr_t)pf_module_state+0x1640U));
                      uVar12 = recovered_10001ef3(local_38,(long)puVar3,local_40,
                                                  *(int *)(&DAT_10004034 + lVar20),0x10,0,
                                                  (ulong)*(uint *)(&DAT_1000402c + lVar20) + lVar13)
                      ;
                      if ((((int)uVar12 != 0) &&
                          (uVar12 = recovered_10001ef3(local_38,(long)puVar3,
                                                       (long *)(lVar20 + ((uintptr_t)pf_module_state+0x1678U)),
                                                       *(int *)(&DAT_10004038 + lVar20),0x40,1,
                                                       (ulong)(uint)(*(int *)(&DAT_1000402c + lVar20
                                                                             ) * 2) + lVar13),
                          (int)uVar12 != 0)) &&
                         (uVar12 = recovered_10001ef3(local_38,(long)puVar3,
                                                      (long *)(lVar20 + ((uintptr_t)pf_module_state+0x16b0U)),
                                                      *(int *)(&DAT_10004038 + lVar20),0x10,1,
                                                      lVar13 + (ulong)(uint)(*(int *)(&DAT_1000402c
                                                                                     + lVar20) * 3))
                         , piVar18 = local_38, (int)uVar12 != 0)) {
                        uVar14 = recovered_10001fcc(local_38,0x2000,(long *)(lVar20 + ((uintptr_t)pf_module_state+0x16f0U)));
                        *(ulong *)(&DAT_10004128 + lVar20) = uVar14;
                        uVar14 = recovered_10001fcc(piVar18,0x1000,(long *)(lVar20 + ((uintptr_t)pf_module_state+0x1710U)));
                        *(ulong *)(&DAT_10004148 + lVar20) = uVar14;
                        if (uVar14 != 0 && *(long *)(&DAT_10004128 + lVar20) != 0) {
                          uVar12 = recovered_10002033(local_38,(long)puVar3,
                                                      *(long *)(&DAT_10004128 + lVar20),0x1000,
                                                      (long)(&DAT_10004138 + lVar20),
                                                      lVar20 + ((uintptr_t)pf_module_state+0x16fcU));
                          if ((int)uVar12 != 0) {
                            uVar12 = recovered_10002033(local_38,(long)puVar3,
                                                        *(long *)(&DAT_10004128 + lVar20) + 0x1000,
                                                        0x1000,(long)(&DAT_10004140 + lVar20),
                                                        lVar20 + ((uintptr_t)pf_module_state+0x1704U));
                            if ((int)uVar12 != 0) {
                              local_68 = (ushort *)(&DAT_10004158 + lVar20);
                              uVar12 = recovered_10002033(local_38,(long)puVar3,
                                                          *(long *)(&DAT_10004148 + lVar20),0x1000,
                                                          (long)local_68,lVar20 + ((uintptr_t)pf_module_state+0x171cU));
                              if (((((int)uVar12 != 0) &&
                                   ((*(ushort *)(&DAT_10004138 + lVar20) & 0xfff) == 0)) &&
                                  ((*(ushort *)(&DAT_10004140 + lVar20) & 0xfff) == 0)) &&
                                 ((*local_68 & 0xfff) == 0)) {
                                recovered_10000797(*(long *)(&DAT_10004128 + lVar20),0x2000);
                                recovered_10000797(*(long *)(&DAT_10004148 + lVar20),0x1000);
                                piVar18 = local_38;
                                recovered_10002075(local_38,*(undefined4 *)(&DAT_10004028 + lVar20),
                                                   *(undefined8 *)(&DAT_10004128 + lVar20),0x2000);
                                recovered_10002075(piVar18,*(undefined4 *)(&DAT_10004028 + lVar20),
                                                   *(undefined8 *)(&DAT_10004148 + lVar20),0x1000);
                                recovered_10001d83(piVar18);
                                uVar12 = recovered_10001cca(piVar18,(long)puVar3,0x14,&local_48);
                                if (((((((int)uVar12 != 0) &&
                                       (((local_48 & 1) == 0 ||
                                        (uVar12 = recovered_10001d65(local_38,(long)puVar3,0x14),
                                        (int)uVar12 != 0)))) &&
                                      (uVar12 = recovered_10001da7(local_38,(long)puVar3,0,uVar17),
                                      (int)uVar12 != 0)) &&
                                     (((uVar12 = recovered_10001d65(local_38,(long)puVar3,0x24),
                                       (int)uVar12 != 0 &&
                                       (uVar12 = recovered_10001d65(local_38,(long)puVar3,0x28),
                                       (int)uVar12 != 0)) &&
                                      ((uVar12 = recovered_10001d65(local_38,(long)puVar3,0x2c),
                                       (int)uVar12 != 0 &&
                                       (((uVar12 = recovered_10001d65(local_38,(long)puVar3,0x30),
                                         (int)uVar12 != 0 &&
                                         (uVar12 = recovered_10001d65(local_38,(long)puVar3,0x34),
                                         (int)uVar12 != 0)) &&
                                        (uVar12 = recovered_10001d65(local_38,(long)puVar3,0xc),
                                        (int)uVar12 != 0)))))))) &&
                                    ((uVar12 = recovered_10001d65(local_38,(long)puVar3,0x14),
                                     (int)uVar12 != 0 &&
                                     (uVar12 = recovered_10001d65(local_38,(long)puVar3,0x14),
                                     (int)uVar12 != 0)))) &&
                                   (uVar12 = recovered_10001da7(local_38,(long)puVar3,1,uVar17),
                                   (int)uVar12 != 0)) {
                                  local_d8[0] = local_d8[0] & 0xffff0000;
                                  recovered_100020a0((long)puVar3,(long)plVar2,9,0,
                                                     (undefined2 *)local_d8);
                                  *(undefined8 *)(extraout_RAX + 0x28) = 7;
                                  bVar9 = recovered_100020f1(local_38,puVar3,(long)plVar2,
                                                             (long)local_40,(short)local_d8[0],
                                                             local_4d8);
                                  if ((int)CONCAT71(extraout_var,bVar9) != 0) {
                                    local_4d8[0] = local_4d8[0] & 0xffff0000;
                                    recovered_100020a0((long)puVar3,(long)plVar2,5,0,
                                                       (undefined2 *)local_4d8);
                                    recovered_10002395(extraout_RAX_00,
                                                       *(undefined4 *)(&DAT_10004100 + lVar20),
                                                       *(undefined4 *)(&DAT_10004104 + lVar20),0,0);
                                    iVar10 = *(int *)(&DAT_10004038 + lVar20) * 0x10000 + -0xffff;
                                    *(undefined2 *)(extraout_RAX_00 + 0x28) = 1;
                                    *(char *)(extraout_RAX_00 + 0x2a) = (char)((uint)iVar10 >> 0x10)
                                    ;
                                    *(char *)(extraout_RAX_00 + 0x2b) = (char)((uint)iVar10 >> 0x18)
                                    ;
                                    *(undefined4 *)(extraout_RAX_00 + 0x2c) = 1;
                                    bVar9 = recovered_100020f1(local_38,puVar3,(long)plVar2,
                                                               (long)local_40,(short)local_4d8[0],
                                                               (undefined4 *)0x0);
                                    if ((int)CONCAT71(extraout_var_00,bVar9) != 0) {
                                      recovered_100020a0((long)puVar3,(long)plVar2,1,0,
                                                         (undefined2 *)local_4d8);
                                      recovered_10002395(extraout_RAX_01,
                                                         *(undefined4 *)(&DAT_100040c8 + lVar20),
                                                         *(undefined4 *)(&DAT_100040cc + lVar20),0,0
                                                        );
                                      iVar10 = *(int *)(&DAT_10004038 + lVar20) * 0x10000 + -0xffff;
                                      *(undefined2 *)(extraout_RAX_01 + 0x28) = 1;
                                      *(char *)(extraout_RAX_01 + 0x2a) =
                                           (char)((uint)iVar10 >> 0x10);
                                      *(char *)(extraout_RAX_01 + 0x2b) =
                                           (char)((uint)iVar10 >> 0x18);
                                      *(undefined4 *)(extraout_RAX_01 + 0x2c) = 0x10001;
                                      bVar9 = recovered_100020f1(local_38,puVar3,(long)plVar2,
                                                                 (long)local_40,(short)local_4d8[0],
                                                                 (undefined4 *)0x0);
                                      if ((int)CONCAT71(extraout_var_01,bVar9) != 0) {
                                        *puVar3 = 1;
                                        uVar19 = DAT_10004004;
                                        bVar9 = recovered_100023f3(local_38,puVar3,1,0);
                                        if ((int)CONCAT71(extraout_var_02,bVar9) != 0) {
                                          bVar5 = *(byte *)(*(long *)(&DAT_10004148 + lVar20) + 0x4d
                                                           );
                                          if (((byte)(bVar5 - 1) < 0x13) &&
                                             (uVar17 = 0x1000 << (bVar5 & 0x1f),
                                             uVar17 < *(uint *)(&DAT_1000403c + lVar20))) {
                                            *(uint *)(&DAT_1000403c + lVar20) = uVar17;
                                          }
                                          uVar15 = recovered_10002368(*(long *)(&DAT_10004148 +
                                                                               lVar20),0x204);
                                          uVar17 = 8;
                                          if (uVar15 < 8) {
                                            uVar17 = uVar15;
                                          }
                                          local_40 = (long *)CONCAT44(PF_PART4(local_40, 4),1);
                                          while (((uint)local_40 <= uVar17 && (DAT_10004004 < 8))) {
                                            bVar9 = recovered_100023f3(local_38,puVar3,0,
                                                                       (uint)local_40);
                                            if ((int)CONCAT71(extraout_var_03,bVar9) != 0) {
                                              lVar13 = *(long *)(&DAT_10004148 + lVar20);
                                              iVar10 = recovered_10002368(lVar13,0);
                                              uVar11 = recovered_10002368(lVar13,4);
                                              if ((((CONCAT44(uVar11,iVar10) != 0) &&
                                                   (uVar15 = *(byte *)(lVar13 + 0x1a) & 0xf,
                                                   (byte)uVar15 <= (*(byte *)(lVar13 + 0x19) & 0xf))
                                                   ) && ((bVar5 = *(byte *)(lVar13 + 0x82 +
                                                                           (ulong)uVar15 * 4),
                                                         bVar5 == 0xc || (bVar5 == 9)))) &&
                                                 (((lVar4 = (ulong)uVar15 * 4 + 0x80,
                                                   *(char *)(lVar13 + lVar4) == '\0' &&
                                                   (*(char *)(lVar13 + 1 + lVar4) == '\0')) &&
                                                  (CONCAT44(uVar11,iVar10) <=
                                                   0xffffffffUL >> (bVar5 - 9 & 0x3f))))) {
                                                uVar14 = (ulong)DAT_10004004;
                                                (&DAT_10004554)[uVar14 * 5] = (int)local_70;
                                                *(uint *)(&DAT_10004558 + uVar14 * 0x14) =
                                                     (uint)local_40;
                                                *(int *)(&DAT_1000455c + uVar14 * 0x14) =
                                                     1 << (bVar5 & 0x1f);
                                                (&DAT_10004560)[uVar14 * 5] =
                                                     iVar10 << (bVar5 - 9 & 0x3f);
                                                (&DAT_10004550)[uVar14 * 5] = 1;
                                                DAT_10004004 = DAT_10004004 + 1;
                                              }
                                            }
                                            local_40 = (long *)CONCAT44(PF_PART4(local_40, 4),
                                                                        (uint)local_40 + 1);
                                          }
                                        }
                                        piVar18 = local_38;
                                        uVar19 = DAT_10004004 - uVar19;
                                        if (uVar19 != 0) {
                                          DAT_10004000 = DAT_10004000 + 1;
                                          recovered_10001a25(local_8d8,0x400,&DAT_10002aa3);
                                          recovered_10001ba5((long)local_8d8,0x400,(ulong)uVar19);
                                          pcVar16 = str_10002b2e;
                                          if (uVar19 == 1) {
                                            pcVar16 = str_10002b23;
                                          }
                                          recovered_10001c1c((long)local_8d8,0x400,pcVar16);
                                          recovered_10001a25((undefined1 *)local_d8,0x60,
                                                             str_10002b3a);
                                          recovered_10001c1c((long)local_d8,0x60,&DAT_10002b8f);
                                          pbVar8 = local_60;
                                          recovered_100024fa((long)local_d8,0x60,(uint)*local_60,2);
                                          recovered_10001c1c((long)local_d8,0x60,&DAT_10002b91);
                                          recovered_100024fa((long)local_d8,0x60,(uint)pbVar8[1],2);
                                          recovered_10001c1c((long)local_d8,0x60,&DAT_10002b93);
                                          recovered_10001ba5((long)local_d8,0x60,(ulong)pbVar8[2]);
                                          recovered_10001a25((undefined1 *)local_4d8,0x400,
                                                             &DAT_10002b95);
                                          recovered_100024fa((long)local_4d8,0x400,(uint)*pbVar8,2);
                                          recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b91);
                                          recovered_100024fa((long)local_4d8,0x400,(uint)pbVar8[1],2
                                                            );
                                          recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b93);
                                          recovered_10001ba5((long)local_4d8,0x400,(ulong)pbVar8[2])
                                          ;
                                          recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b9a);
                                          recovered_100024fa((long)local_4d8,0x400,
                                                             (uint)*(ushort *)(pbVar8 + 4),4);
                                          recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b91);
                                          recovered_100024fa((long)local_4d8,0x400,
                                                             (uint)*(ushort *)(pbVar8 + 6),4);
                                          recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b9d);
                                          if (local_8d8[0] != '\0') {
                                            recovered_10001c1c((long)local_4d8,0x400,&DAT_10002b9f);
                                            recovered_10001c1c((long)local_4d8,0x400,local_8d8);
                                          }
                                          if ((code *)(ulong)(uint)local_38[3] != (code *)0x0) {
                                            (*(code *)(ulong)(uint)local_38[3])
                                                      (local_d8,str_10002b48,local_4d8);
                                          }
                                          return 1;
                                        }
                                        recovered_10001a39(local_38,puVar3);
                                        pcVar16 = str_10002b08;
                                        goto LAB_10000e42;
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
                  }
                }
              }
            }
          }
        }
      }
      piVar18 = local_38;
      recovered_10001a39(local_38,puVar3);
      pcVar16 = str_10002ae9;
LAB_10000e42:
      recovered_10001534(piVar18,pcVar16);
      return 0;
    }
  }
  recovered_10001a39(piVar18,puVar3);
  pcVar16 = str_10002acb;
LAB_10000b43:
  recovered_10001534(piVar18,pcVar16);
  return 0;
}

#undef DAT_10002aa3
#undef DAT_10002b8f
#undef DAT_10002b91
#undef DAT_10002b93
#undef DAT_10002b95
#undef DAT_10002b9a
#undef DAT_10002b9d
#undef DAT_10002b9f
#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004014
#undef DAT_10004018
#undef DAT_10004020
#undef DAT_10004021
#undef DAT_10004022
#undef DAT_10004023
#undef DAT_10004024
#undef DAT_10004028
#undef DAT_1000402c
#undef DAT_10004030
#undef DAT_10004034
#undef DAT_10004038
#undef DAT_1000403c
#undef DAT_100040c8
#undef DAT_100040cc
#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004128
#undef DAT_10004138
#undef DAT_10004140
#undef DAT_10004148
#undef DAT_10004158
#undef DAT_10004550
#undef DAT_10004554
#undef DAT_10004558
#undef DAT_1000455c
#undef DAT_10004560
#undef DAT_100045f8
#undef str_10002aa4
#undef str_10002acb
#undef str_10002ae9
#undef str_10002b08
#undef str_10002b23
#undef str_10002b2e
#undef str_10002b3a
#undef str_10002b48
#undef str_10002b58
#undef str_10002b6a
#undef str_10002b7c
#undef local_8d8
#undef local_4d8
#undef local_d8
#undef local_70
#undef local_68
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001534
 */

void recovered_10001534(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     ((code *)(ulong)(uint)param_1[10] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d0U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_100045f0
#define DAT_100045f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000155b
 */

void recovered_1000155b(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;

  puVar2 = (undefined4 *)&DAT_10004010;
  for (uVar3 = 0; uVar3 < DAT_10004000; uVar3 = uVar3 + 1) {
    recovered_10001a39(param_1,puVar2);
    puVar2 = puVar2 + 0x54;
  }
  for (lVar1 = 0; (ulong)DAT_10004004 * 0x14 != lVar1; lVar1 = lVar1 + 0x14) {
    *(undefined4 *)((long)&DAT_10004550 + lVar1) = 0;
  }
  DAT_10004000 = 0;
  DAT_10004004 = 0;
  DAT_100045f0 = 0;
  return;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004550
#undef DAT_100045f0

#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_10004560
#define DAT_10004560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef str_10002ba2
#define str_10002ba2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d7
 */

undefined8 recovered_100015d7(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;

  uVar4 = 0;
  if (((param_1 < DAT_10004004) && (param_2 != (undefined4 *)0x0)) &&
     ((&DAT_10004550)[(ulong)param_1 * 5] != 0)) {
    *param_2 = (&DAT_10004560)[(ulong)param_1 * 5];
    uVar4 = 1;
    if (param_4 != 0 && param_3 != 0) {
      uVar2 = param_4 - 1;
      uVar3 = 9;
      if (uVar2 < 9) {
        uVar3 = (ulong)uVar2;
      }
      for (uVar1 = 0; uVar3 != uVar1; uVar1 = uVar1 + 1) {
        *(char *)(param_3 + uVar1) = str_10002ba2[uVar1];
      }
      if (uVar1 < uVar2) {
        *(byte *)(param_3 + uVar3) = (byte)((ulong)param_1 % 10) | 0x30;
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      *(undefined1 *)(param_3 + uVar3) = 0;
    }
  }
  return uVar4;
}

#undef DAT_10004004
#undef DAT_10004550
#undef DAT_10004560
#undef str_10002ba2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001663
 */

void recovered_10001663(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002557(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001670
 */

void recovered_10001670(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002557(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d0U)))
#undef DAT_10004040
#define DAT_10004040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1600U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_100045f0
#define DAT_100045f0 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000167e
 */

bool recovered_1000167e(uint param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong in_RAX;
  long lVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulong uVar6;

  uVar1 = DAT_10004004;
  bVar2 = false;
  uVar6 = (ulong)param_1;
  if (param_1 < DAT_10004004) {
    puVar5 = (undefined4 *)0x0;
    if ((&DAT_10004550)[uVar6 * 5] != 0) {
      puVar5 = &DAT_10004550 + uVar6 * 5;
    }
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  uStack_38 = in_RAX & 0xffffffffffff;
  if ((puVar5 != (undefined4 *)0x0) && (DAT_100045f0 != (int *)0x0)) {
    lVar3 = (ulong)(uint)puVar5[1] * 0x150;
    piVar4 = (int *)(&DAT_10004010 + lVar3);
    recovered_1000278a((long)piVar4);
    bVar2 = false;
    if ((param_1 < uVar1) && (((&DAT_10004550)[uVar6 * 5] != 0 && (*piVar4 != 0)))) {
      recovered_100020a0((long)piVar4,lVar3 + ((uintptr_t)pf_module_state+0x1678U),0,puVar5[2],
                         (undefined2 *)((long)&uStack_38 + 6));
      bVar2 = recovered_100020f1(DAT_100045f0,piVar4,lVar3 + ((uintptr_t)pf_module_state+0x1678U),lVar3 + ((uintptr_t)pf_module_state+0x16b0U),
                                 PF_PART2(uStack_38, 6),(undefined4 *)0x0);
    }
    *(undefined4 *)(&DAT_10004040 + lVar3) = 0;
  }
  return bVar2;
}

#undef DAT_10004004
#undef DAT_10004010
#undef DAT_10004040
#undef DAT_10004550
#undef DAT_100045f0
#undef uStack_38

#undef DAT_10002bac
#define DAT_10002bac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004020
#define DAT_10004020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e0U)))
#undef DAT_10004021
#define DAT_10004021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e1U)))
#undef DAT_10004022
#define DAT_10004022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15e2U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_10004554
#define DAT_10004554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_10004558
#define DAT_10004558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000176a
 */

undefined8 recovered_1000176a(uint param_1,long param_2)

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
  if ((param_1 < DAT_10004004) && (uVar5 = (ulong)param_1, (&DAT_10004550)[uVar5 * 5] != 0)) {
    uVar4 = *(uint *)(&DAT_10004558 + uVar5 * 0x14);
    lVar8 = (ulong)(uint)(&DAT_10004554)[uVar5 * 5] * 0x150;
    uVar1 = (&DAT_10004020)[lVar8];
    uVar2 = (&DAT_10004021)[lVar8];
    uVar3 = (&DAT_10004022)[lVar8];
    for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 1) {
      *(undefined1 *)(param_2 + lVar8) = 0;
    }
    for (lVar8 = 0; lVar8 != 4; lVar8 = lVar8 + 1) {
      *(undefined1 *)(param_2 + lVar8) = (&DAT_10002bac)[lVar8];
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

#undef DAT_10002bac
#undef DAT_10004004
#undef DAT_10004020
#undef DAT_10004021
#undef DAT_10004022
#undef DAT_10004550
#undef DAT_10004554
#undef DAT_10004558

#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001826
 */

undefined4
recovered_10001826(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_100019d8(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100019d8(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100019d8(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100019d8(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_100019d8(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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

#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_50
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019d8
 */

undefined8
recovered_100019d8(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a25
 */

void recovered_10001a25(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001c1c((long)param_1,param_2,param_3);
  return;
}


#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004554
#define DAT_10004554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b14U)))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a39
 */

void recovered_10001a39(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  bool bVar6;

  uStack_28 = (ulong)in_EAX;
  if (param_2 == (undefined4 *)0x0 || param_1 == (int *)0x0) {
    return;
  }
  *param_2 = 0;
  uVar1 = (ulong)DAT_10004004;
  piVar4 = &DAT_10004554;
  for (uVar5 = 0; uVar5 < uVar1; uVar5 = uVar5 + 1) {
    if (*piVar4 == param_2[1]) {
      piVar4[-1] = 0;
    }
    piVar4 = piVar4 + 5;
  }
  if (*(long *)(param_2 + 2) == 0) {
    bVar6 = false;
  }
  else {
    uVar2 = recovered_10001cca(param_1,(long)param_2,0x14,(undefined4 *)((long)&uStack_28 + 4));
    bVar6 = true;
    if (((int)uVar2 != 0) &&
       (((uStack_28 & 0x100000000) == 0 ||
        (uVar2 = recovered_10001d65(param_1,(long)param_2,0x14), (int)uVar2 != 0)))) {
      recovered_10001d83(param_1);
      uVar3 = 5000;
      if (param_2[8] != 0) {
        uVar3 = param_2[8];
      }
      uVar2 = recovered_10001da7(param_1,(long)param_2,0,uVar3);
      bVar6 = (int)uVar2 == 0;
    }
  }
  if (*(char *)((long)param_2 + 0x13) != '\0') {
    uVar3 = param_2[5] & 0xfffffffb;
    if (!bVar6) {
      uVar3 = param_2[5];
    }
    recovered_10001c70(param_1,*(undefined1 *)(param_2 + 4),*(undefined1 *)((long)param_2 + 0x11),
                       *(undefined1 *)((long)param_2 + 0x12),uVar3 & 0xffff);
    *(undefined1 *)((long)param_2 + 0x13) = 0;
  }
  if (!bVar6) {
    recovered_10001e9b(param_1,(long *)(param_2 + 0xe));
    recovered_10001e9b(param_1,(long *)(param_2 + 0x1c));
    recovered_10001e9b(param_1,(long *)(param_2 + 0x2a));
    recovered_10001e9b(param_1,(long *)(param_2 + 0x38));
    if (*(long *)(param_2 + 0x48) != 0) {
      recovered_10001ecc(param_1,*(long *)(param_2 + 0x48));
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      recovered_10001ecc(param_1,*(long *)(param_2 + 0x50));
    }
    *(undefined8 *)(param_2 + 0x46) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x4e) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  return;
}

#undef DAT_10004004
#undef DAT_10004554
#undef uStack_28

#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba5
 */

void recovered_10001ba5(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_100024c0(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_100024c0(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c1c
 */

void recovered_10001c1c(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001caa(param_1);
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
 * Address: 0x10001c70
 */

undefined8
recovered_10001c70(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001caa
 */

long recovered_10001caa(long param_1)

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


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cca
 */

undefined8 recovered_10001cca(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 uVar3;

  local_1c = 0;
  uVar3 = 0;
  if (((*(long *)(param_2 + 8) != 0 && param_4 != (undefined4 *)0x0) && (param_1 != (int *)0x0)) &&
     (*param_1 == 0x54584b57)) {
    uVar2 = *(long *)(param_2 + 8) + (param_3 & 0xffffffff);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d65
 */

undefined8 recovered_10001d65(int *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  uVar1 = recovered_10001e20(param_1,*(long *)(param_2 + 8) + (param_3 & 0xffffffff));
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d83
 */

void recovered_10001d83(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da7
 */

undefined8 recovered_10001da7(int *param_1,long param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong in_RAX;
  undefined8 uVar1;
  uint uVar2;

  uVar2 = 0;
  uStack_38 = in_RAX;
  while( true ) {
    if (param_4 < uVar2) {
      return 0;
    }
    uStack_38 = uStack_38 & 0xffffffff;
    uVar1 = recovered_10001cca(param_1,param_2,0x1c,(undefined4 *)((long)&uStack_38 + 4));
    if (((int)uVar1 == 0) || ((uStack_38 & 0x200000000) != 0)) break;
    if ((param_3 == 0) != (bool)((byte)(uStack_38 >> 0x20) & 1)) {
      return 1;
    }
    recovered_10001e75(param_1,1000);
    uVar2 = uVar2 + 1;
  }
  return 0;
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e20
 */

undefined8 recovered_10001e20(int *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001e4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10001e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e75
 */

void recovered_10001e75(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e9b
 */

void recovered_10001e9b(int *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      recovered_10001ecc(param_1,*param_2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[6] = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ecc
 */

void recovered_10001ecc(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x3c)) ||
     ((code *)(ulong)(uint)param_1[0xe] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xe])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef3
 */

undefined8
recovered_10001ef3(int *param_1,long param_2,long *param_3,int param_4,int param_5,
                  undefined2 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;

  uVar4 = param_5 * param_4;
  uVar1 = recovered_10001fcc(param_1,uVar4,param_3);
  param_3[1] = uVar1;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    for (uVar1 = 0; uVar4 != uVar1; uVar1 = uVar1 + 1) {
      *(undefined1 *)(param_3[1] + uVar1) = 0;
    }
    uVar2 = recovered_10002033(param_1,param_2,param_3[1],uVar4,(long)(param_3 + 2),
                               (long)param_3 + 0x14);
    uVar3 = 0;
    if (((int)uVar2 != 0) && ((*(ushort *)(param_3 + 2) & 0xfff) == 0)) {
      *(int *)(param_3 + 3) = param_4;
      *(int *)((long)param_3 + 0x1c) = param_5;
      *(undefined2 *)((long)param_3 + 0x2c) = param_6;
      param_3[6] = param_7;
      param_3[4] = 0;
      *(undefined4 *)(param_3 + 5) = 1;
      recovered_10002075(param_1,*(undefined4 *)(param_2 + 0x18),param_3[1],uVar4);
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fcc
 */

ulong recovered_10001fcc(int *param_1,int param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_2 + 0xfffU < 0x1000 || param_3 == (long *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x38)) ||
     (((code *)(ulong)(uint)param_1[0xd] == (code *)0x0 ||
      (lVar1 = (*(code *)(ulong)(uint)param_1[0xd])(param_2 + 0xfffU), lVar1 == 0)))) {
    return 0;
  }
  *param_3 = lVar1;
  return lVar1 + 0xfffU & 0xfffffffffffff000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002033
 */

undefined8
recovered_10002033(int *param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0x54584b57)) ||
     ((((uint)param_1[2] < 0x74 || (param_5 == 0)) || ((param_3 == 0 || (param_1[0x1c] == 0)))))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])
                    (*(undefined4 *)(param_2 + 0x18),param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002075
 */

void recovered_10002075(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000209c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020a0
 */

void recovered_100020a0(long param_1,long param_2,undefined1 param_3,undefined4 param_4,
                       undefined2 *param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  long lVar3;

  puVar1 = (undefined1 *)
           ((ulong)*(uint *)(param_2 + 0x1c) * (ulong)*(uint *)(param_2 + 0x20) +
           *(long *)(param_2 + 8));
  iVar2 = *(int *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = (short)iVar2;
  for (lVar3 = 0; lVar3 != 0x40; lVar3 = lVar3 + 1) {
    puVar1[lVar3] = 0;
  }
  *puVar1 = param_3;
  puVar1[2] = (char)iVar2;
  puVar1[3] = (char)((uint)iVar2 >> 8);
  puVar1[4] = (char)param_4;
  puVar1[5] = (char)((uint)param_4 >> 8);
  puVar1[6] = (char)((uint)param_4 >> 0x10);
  puVar1[7] = (char)((uint)param_4 >> 0x18);
  *param_5 = (short)iVar2;
  return;
}


#define local_40 (*(uint *)(pf_stack_frame + 16))
#define local_3c (*(int *)(pf_stack_frame + 20))
#define local_38 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f1
 */

bool recovered_100020f1(int *param_1,undefined4 *param_2,long param_3,long param_4,short param_5,
                       undefined4 *param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  uint128 auVar9;

  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  PF_PART4(auVar9, 0) = -(uint)(param_1 == (int *)0x0);
  PF_PART4(auVar9, 4) = -(uint)(param_2 == (undefined4 *)0x0);
  PF_PART4(auVar9, 8) = -(uint)(param_3 == 0);
  PF_PART4(auVar9, 12) = -(uint)(param_4 == 0);
  iVar5 = movmskps((int)param_4,auVar9);
  if ((((iVar5 == 0) && (*(long *)(param_3 + 8) != 0)) && (*(long *)(param_4 + 8) != 0)) &&
     ((*(int *)(param_3 + 0x18) != 0 && (*(int *)(param_4 + 0x18) != 0)))) {
    uVar2 = 5000000;
    if (param_2[8] != 0) {
      uVar2 = param_2[8] * 1000;
    }
    recovered_10002075(param_1,param_2[6],*(long *)(param_3 + 8),
                       *(int *)(param_3 + 0x18) * *(int *)(param_3 + 0x1c));
    local_3c = 0;
    *(uint *)(param_3 + 0x20) = (*(int *)(param_3 + 0x20) + 1U) % *(uint *)(param_3 + 0x18);
    recovered_10001d83(param_1);
    uVar4 = recovered_10001e20(param_1,*(ulong *)(param_3 + 0x30));
    piVar7 = param_1;
    if ((int)uVar4 != 0) {
      local_38 = param_1;
      for (uVar6 = 0; piVar7 = local_38, uVar6 < uVar2; uVar6 = uVar6 + 100) {
        lVar8 = (ulong)*(uint *)(param_4 + 0x24) * (ulong)*(uint *)(param_4 + 0x1c) +
                *(long *)(param_4 + 8);
        recovered_10002075(local_38,param_2[6],*(long *)(param_4 + 8),
                           *(int *)(param_4 + 0x18) * *(uint *)(param_4 + 0x1c));
        uVar1 = recovered_10002368(lVar8,0xc);
        piVar7 = local_38;
        iVar5 = local_3c;
        if ((uVar1 >> 0x10 & 1) == *(uint *)(param_4 + 0x28)) {
          uVar2 = recovered_10002368(lVar8,8);
          piVar7 = local_38;
          if ((((short)uVar1 == param_5) && (uVar2 >> 0x10 == (uint)*(ushort *)(param_3 + 0x2c))) &&
             (((uVar2 & 0xffff) < *(uint *)(param_3 + 0x18) &&
              ((uVar2 & 0xffff) == *(uint *)(param_3 + 0x20))))) {
            if (param_6 != (undefined4 *)0x0) {
              uVar3 = recovered_10002368(lVar8,0);
              *param_6 = uVar3;
            }
            piVar7 = local_38;
            uVar2 = (*(int *)(param_4 + 0x24) + 1U) % *(uint *)(param_4 + 0x18);
            *(uint *)(param_4 + 0x24) = uVar2;
            if (uVar2 == 0) {
              *(byte *)(param_4 + 0x28) = *(byte *)(param_4 + 0x28) ^ 1;
            }
            uVar4 = recovered_10001e20(local_38,*(ulong *)(param_4 + 0x30));
            if ((int)uVar4 != 0) {
              return uVar1 < 0x20000;
            }
          }
          break;
        }
        if ((uVar6 / 1000) * 1000 + local_3c == 0) {
          local_40 = 0;
          uVar4 = recovered_10001cca(local_38,(long)param_2,0x1c,&local_40);
          if (((int)uVar4 == 0) || ((local_40 & 2) != 0)) break;
        }
        recovered_10001e75(piVar7,100);
        local_3c = iVar5 + -100;
      }
    }
    recovered_10001a39(piVar7,param_2);
  }
  return false;
}

#undef local_40
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002368
 */

undefined4 recovered_10002368(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = (long)(int)param_2;
  return CONCAT13(*(undefined1 *)(param_1 + 3 + lVar1),
                  CONCAT12(*(undefined1 *)(param_1 + 2 + lVar1),
                           CONCAT11(*(undefined1 *)(param_1 + 1 + lVar1),
                                    *(undefined1 *)(param_1 + (ulong)param_2))));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002395
 */

void recovered_10002395(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(char *)(param_1 + 0x18) = (char)param_2;
  *(char *)(param_1 + 0x19) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x1c) = (char)param_3;
  *(char *)(param_1 + 0x1d) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x20) = (char)param_4;
  *(char *)(param_1 + 0x21) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x22) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x23) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x24) = (char)param_5;
  *(char *)(param_1 + 0x25) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x26) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x27) = (char)((uint)param_5 >> 0x18);
  return;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f3
 */

bool recovered_100023f3(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong in_RAX;
  long extraout_RAX;
  undefined7 extraout_var = 0;

  uStack_38 = in_RAX & 0xffffffffffff;
  recovered_100020a0((long)param_2,(long)(param_2 + 0xe),6,param_4,
                     (undefined2 *)((long)&uStack_38 + 6));
  recovered_10002395(extraout_RAX,param_2[0x52],param_2[0x53],0,0);
  *(undefined4 *)(extraout_RAX + 0x28) = param_3;
  recovered_10000797(*(long *)(param_2 + 0x4e),0x1000);
  recovered_10002075(param_1,param_2[6],*(undefined8 *)(param_2 + 0x4e),0x1000);
  bVar1 = recovered_100020f1(param_1,param_2,(long)(param_2 + 0xe),(long)(param_2 + 0x1c),
                             PF_PART2(uStack_38, 6),(undefined4 *)0x0);
  bVar1 = (int)CONCAT71(extraout_var,bVar1) != 0;
  if (bVar1) {
    recovered_10002075(param_1,param_2[6],*(undefined8 *)(param_2 + 0x4e),0x1000);
  }
  return bVar1;
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c0
 */

void recovered_100024c0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001caa(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024fa
 */

void recovered_100024fa(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_100024c0(param_1,param_2,cVar4);
  }
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(uint *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004010
#define DAT_10004010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d0U)))
#undef DAT_1000403c
#define DAT_1000403c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15fcU)))
#undef DAT_10004040
#define DAT_10004040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1600U)))
#undef DAT_10004128
#define DAT_10004128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16e8U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_10004554
#define DAT_10004554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_10004558
#define DAT_10004558 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b18U)))
#undef DAT_1000455c
#define DAT_1000455c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b1cU)))
#undef DAT_10004560
#define DAT_10004560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef DAT_100045f0
#define DAT_100045f0 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002557
 */

undefined8 recovered_10002557(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined7 extraout_var = 0;
  ulong uVar7;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;

  uVar12 = 0;
  if (((param_1 < DAT_10004004) &&
      (uVar8 = (ulong)param_1, lVar5 = uVar8 * 0x14, (&DAT_10004550)[uVar8 * 5] != 0)) &&
     ((uint)(&DAT_10004554)[uVar8 * 5] < DAT_10004000)) {
    lVar6 = (ulong)(uint)(&DAT_10004554)[uVar8 * 5] * 0x150;
    piVar13 = (int *)(&DAT_10004010 + lVar6);
    recovered_1000278a((long)piVar13);
    uVar12 = 0;
    if (((param_4 != 0) && (param_3 != 0)) &&
       ((DAT_100045f0 != (int *)0x0 &&
        ((param_4 <= (&DAT_10004560)[uVar8 * 5] - param_2 &&
          param_2 <= (uint)(&DAT_10004560)[uVar8 * 5] && (*piVar13 != 0)))))) {
      uVar1 = *(uint *)(&DAT_1000455c + lVar5);
      for (; uVar12 = 1, param_4 != 0; param_4 = param_4 - (uVar2 >> 9)) {
        uVar8 = (ulong)param_2 / (ulong)(uVar1 >> 9);
        uVar9 = param_2 % (uVar1 >> 9);
        uVar11 = uVar9 * 0x200;
        uVar4 = *(uint *)(&DAT_1000403c + lVar6) -
                (*(uint *)(&DAT_1000403c + lVar6) & 0x1ff | uVar11);
        uVar2 = param_4 << 9;
        if ((ulong)uVar4 <= (ulong)param_4 << 9) {
          uVar2 = uVar4;
        }
        uVar4 = *(uint *)(&DAT_1000455c + lVar5);
        uVar10 = ((uVar4 + uVar2 + uVar11) - 1) / uVar4;
        uVar14 = (ulong)uVar2;
        if (param_5 != 0) {
          if (((uVar2 + uVar11) % uVar4 == 0 && uVar9 == 0) ||
             (bVar3 = recovered_100027a5(DAT_100045f0,piVar13,*(undefined4 *)(&DAT_10004558 + lVar5)
                                         ,'\x02',uVar8,uVar10,uVar4),
             (int)CONCAT71(extraout_var,bVar3) != 0)) {
            for (uVar7 = 0; uVar14 != uVar7; uVar7 = uVar7 + 1) {
              *(undefined1 *)(*(long *)(&DAT_10004128 + lVar6) + (ulong)(uVar11 + (int)uVar7)) =
                   *(undefined1 *)(param_3 + uVar7);
            }
            bVar3 = recovered_100027a5(DAT_100045f0,piVar13,*(undefined4 *)(&DAT_10004558 + lVar5),
                                       '\x01',uVar8,uVar10,*(int *)(&DAT_1000455c + lVar5));
            if ((int)CONCAT71(extraout_var_00,bVar3) != 0) goto LAB_10002754;
          }
LAB_1000276d:
          uVar12 = 0;
          break;
        }
        bVar3 = recovered_100027a5(DAT_100045f0,piVar13,*(undefined4 *)(&DAT_10004558 + lVar5),
                                   '\x02',uVar8,uVar10,uVar4);
        if ((int)CONCAT71(extraout_var_01,bVar3) == 0) goto LAB_1000276d;
        for (uVar8 = 0; uVar14 != uVar8; uVar8 = uVar8 + 1) {
          *(undefined1 *)(param_3 + uVar8) =
               *(undefined1 *)(*(long *)(&DAT_10004128 + lVar6) + (ulong)(uVar11 + (int)uVar8));
        }
LAB_10002754:
        param_3 = param_3 + uVar14;
        param_2 = param_2 + (uVar2 >> 9);
      }
    }
    *(undefined4 *)(&DAT_10004040 + lVar6) = 0;
  }
  return uVar12;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004010
#undef DAT_1000403c
#undef DAT_10004040
#undef DAT_10004128
#undef DAT_10004550
#undef DAT_10004554
#undef DAT_10004558
#undef DAT_1000455c
#undef DAT_10004560
#undef DAT_100045f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000278a
 */

void recovered_1000278a(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(param_1 + 0x30)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(param_1 + 0x30) != 0);
  }
  return;
}


#define local_32 (*(short *)(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a5
 */

bool recovered_100027a5(int *param_1,undefined4 *param_2,undefined4 param_3,char param_4,
                       undefined8 param_5,int param_6,int param_7)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long extraout_RAX;
  undefined7 extraout_var = 0;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  local_32 = 0;
  uVar5 = param_7 * param_6;
  bVar1 = false;
  if ((0xffffdfff < uVar5 - 0x2001) && (param_2[0xb] == 0 || uVar5 <= (uint)param_2[0xb])) {
    if ((byte)(param_4 - 1U) < 2) {
      recovered_10002075(param_1,param_2[6],*(undefined8 *)(param_2 + 0x46),uVar5);
    }
    recovered_100020a0((long)param_2,(long)(param_2 + 0x2a),param_4,param_3,&local_32);
    uVar2 = 0;
    uVar4 = 0;
    if (0x1000 < uVar5) {
      uVar2 = param_2[0x4c];
      uVar4 = param_2[0x4d];
    }
    recovered_10002395(extraout_RAX,param_2[0x4a],param_2[0x4b],uVar2,uVar4);
    *(char *)(extraout_RAX + 0x28) = (char)param_5;
    *(char *)(extraout_RAX + 0x29) = (char)((ulong)param_5 >> 8);
    *(char *)(extraout_RAX + 0x2a) = (char)((ulong)param_5 >> 0x10);
    *(char *)(extraout_RAX + 0x2b) = (char)((ulong)param_5 >> 0x18);
    *(undefined4 *)(extraout_RAX + 0x2c) = 0;
    iVar3 = param_6 + -1;
    *(char *)(extraout_RAX + 0x30) = (char)iVar3;
    *(char *)(extraout_RAX + 0x31) = (char)((uint)iVar3 >> 8);
    *(char *)(extraout_RAX + 0x32) = (char)((uint)iVar3 >> 0x10);
    *(char *)(extraout_RAX + 0x33) = (char)((uint)iVar3 >> 0x18);
    bVar1 = recovered_100020f1(param_1,param_2,(long)(param_2 + 0x2a),(long)(param_2 + 0x38),
                               local_32,(undefined4 *)0x0);
    bVar1 = (int)CONCAT71(extraout_var,bVar1) != 0;
    if (bVar1 && param_4 == '\x02') {
      recovered_10002075(param_1,param_2[6],*(undefined8 *)(param_2 + 0x46),uVar5);
      bVar1 = true;
    }
  }
  return bVar1;
}

#undef local_32

#undef DAT_10004000
#define DAT_10004000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15c0U)))
#undef DAT_10004004
#define DAT_10004004 (*(uint *)(((uintptr_t)pf_module_state + 0x15c4U)))
#undef DAT_10004550
#define DAT_10004550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_10004560
#define DAT_10004560 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b20U)))
#undef DAT_100045f0
#define DAT_100045f0 (*(int * *)(((uintptr_t)pf_module_state + 0x1bb0U)))
#undef str_10002bb1
#define str_10002bb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_10002bc5
#define str_10002bc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x185U)))
#undef str_10002c0e
#define str_10002c0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_10002c21
#define str_10002c21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000290d
 */

undefined8 recovered_1000290d(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;

  uVar2 = 0;
  if (DAT_10004004 != 0 && (DAT_100045f0 != (int *)0x0 && param_1 != (undefined8 *)0x0)) {
    lVar4 = 0;
    for (lVar3 = 0; (ulong)DAT_10004004 * 0x14 != lVar3; lVar3 = lVar3 + 0x14) {
      if (*(int *)((long)&DAT_10004550 + lVar3) != 0) {
        lVar4 = lVar4 + (ulong)*(uint *)((long)&DAT_10004560 + lVar3);
      }
    }
    recovered_10000797((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(undefined8 *)((long)param_1 + 0xc) = 0x1300000011;
    uVar1 = 0;
    if ((((DAT_100045f0 != (int *)0x0) && (*DAT_100045f0 == 0x54584b57)) &&
        (0x2f < (uint)DAT_100045f0[2])) && ((code *)(ulong)(uint)DAT_100045f0[0xb] != (code *)0x0))
    {
      uVar1 = (*(code *)(ulong)(uint)DAT_100045f0[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10004000;
    *(uint *)(param_1 + 9) = DAT_10004004;
    *(int *)((long)param_1 + 0x4c) = (int)lVar4;
    *(int *)(param_1 + 10) = (int)((ulong)lVar4 >> 0x20);
    recovered_10001a25((undefined1 *)((long)param_1 + 0x54),0x40,str_10002bb1);
    recovered_10001a25((undefined1 *)((long)param_1 + 0x94),0x40,str_10002bc5);
    recovered_10001a25((undefined1 *)((long)param_1 + 0xd4),0x60,str_10002c0e);
    recovered_10001a25((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002c21);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10004000
#undef DAT_10004004
#undef DAT_10004550
#undef DAT_10004560
#undef DAT_100045f0
#undef str_10002bb1
#undef str_10002bc5
#undef str_10002c0e
#undef str_10002c21

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
