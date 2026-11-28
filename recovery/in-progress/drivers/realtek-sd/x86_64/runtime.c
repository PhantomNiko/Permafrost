/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10005000
#define DAT_10005000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10005000;
}

#undef DAT_10005000

#undef DAT_100048e0
#define DAT_100048e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef DAT_10006056
#define DAT_10006056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177fU)))
#undef DAT_100060c0
#define DAT_100060c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef UNK_100048e8
#define UNK_100048e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11U)))
#undef _DAT_100048e0
#define _DAT_100048e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9U)))
#undef str_10004c69
#define str_10004c69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x392U)))
#undef str_10004c84
#define str_10004c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3adU)))
#undef str_10004c91
#define str_10004c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_10004cb3
#define str_10004cb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10004cd4
#define str_10004cd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef uRam00000000100048e8
#define uRam00000000100048e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x11U)))
#define local_238 (*(undefined8 *)(pf_stack_frame + 24))
#define local_220 (*(code * *)(pf_stack_frame + 48))
#define local_210 (*(undefined1 (*)[528])(pf_stack_frame + 64))
#define local_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 128))
#define local_190 (*(undefined1 (*)[400])(pf_stack_frame + 192))
#define local_130 (*(undefined1 (*)[304])(pf_stack_frame + 288))
#define local_70 (*(byte (*)[112])(pf_stack_frame + 480))
#define local_6c (*(uint *)(pf_stack_frame + 484))
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
#define local_38 (*(int * *)(pf_stack_frame + 536))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000475(void *api)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  char *pcVar8;
  ulong uVar9;
  byte bVar10;
  int *piVar11;
  undefined1 *puVar12;
  bool bVar13;

  if (api == (void *)0x0) {
    return 0;
  }
  if ((((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
      (0xf7 < *(uint *)((long)api + 8))) && (DAT_10006000 == (int *)0x0)) {
    DAT_10006008 = 0;
    DAT_10006000 = api;
    recovered_100007e0(((uintptr_t)pf_module_state+0x1739U),0x340);
    local_38 = api;
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      uVar4 = 0;
      piVar11 = api;
      while (uVar4 != 0x100) {
        uVar5 = 0;
        local_3c = uVar4;
        while (uVar5 != 0x20) {
          local_40 = uVar5;
          iVar2 = recovered_1000233d(piVar11,uVar4 & 0xff,uVar5 & 0xff,0,(undefined1 *)&local_238);
          if (iVar2 != 0) {
            recovered_100007fb(local_38,(byte *)&local_238);
            if (((int8_t)PF_PART1(uStack_230, 4)) < '\0') {
              for (iVar2 = -7; iVar2 != 0; iVar2 = iVar2 + 1) {
                iVar3 = recovered_1000233d(api,uVar4 & 0xff,uVar5 & 0xff,iVar2 + 8U & 0xff,local_70)
                ;
                if (iVar3 != 0) {
                  recovered_100007fb(api,local_70);
                }
              }
            }
          }
          piVar11 = local_38;
          uVar5 = local_40 + 1;
        }
        uVar4 = local_3c + 1;
      }
    }
    puVar12 = &DAT_10006010;
    if (DAT_10006008 != 0) {
      recovered_100007e0((long)local_70,0x30);
      local_6c = DAT_10006008;
      bVar7 = 0;
      for (lVar6 = 0; (ulong)DAT_10006008 * 0xd0 != lVar6; lVar6 = lVar6 + 0xd0) {
        bVar10 = 1;
        if ((bVar7 & 1) == 0) {
          bVar10 = (&DAT_10006056)[lVar6] ^ 1;
        }
        bVar7 = bVar10;
      }
      local_70[0] = 3;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_68 = 0x1000209c;
      local_64 = 0x1000214a;
      local_60 = 0x10002157;
      lVar6 = 0;
      if ((bVar7 & 1) == 0) {
        local_60 = 0;
      }
      local_5c = 0x10002165;
      local_58 = 0x100021d8;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      bVar13 = false;
      for (; (ulong)DAT_10006008 * 0xd0 != lVar6; lVar6 = lVar6 + 0xd0) {
        bVar1 = !bVar13;
        bVar13 = true;
        if (bVar1) {
          bVar13 = *(int *)((long)&DAT_100060c0 + lVar6) != 0;
        }
      }
      recovered_100007e0((long)&local_238,0x1c8);
      local_238 = _DAT_100048e0;
      uStack_230 = uRam00000000100048e8;
      local_220 = recovered_100046ce;
      recovered_10002793(local_210,0x40,str_10004c69);
      recovered_10002793(local_1d0,0x40,str_10004c84);
      pcVar8 = str_10004cb3;
      if (bVar13) {
        pcVar8 = str_10004c91;
      }
      recovered_10002793(local_190,0x60,pcVar8);
      recovered_10002793(local_130,0xc0,str_10004cd4);
      if (((DAT_10006000 != (int *)0x0) && (*DAT_10006000 == 0x54584b57)) &&
         (((0xef < (uint)DAT_10006000[2] &&
           (((((code *)(ulong)(uint)DAT_10006000[0x3b] != (code *)0x0 &&
              (iVar2 = (*(code *)(ulong)(uint)DAT_10006000[0x3b])(&local_238), iVar2 != 0)) &&
             (*local_38 == 0x54584b57)) &&
            ((0xd3 < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x34] != (code *)0x0))))))
          && (iVar2 = (*(code *)(ulong)(uint)local_38[0x34])(local_70), iVar2 != 0)))) {
        return 1;
      }
    }
    for (uVar9 = 0; uVar9 < DAT_10006008; uVar9 = uVar9 + 1) {
      recovered_100022d9(puVar12);
      puVar12 = puVar12 + 0xd0;
    }
    DAT_10006008 = 0;
    DAT_10006000 = (int *)0x0;
  }
  return 0;
}

#undef DAT_100048e0
#undef DAT_10006000
#undef DAT_10006008
#undef DAT_10006010
#undef DAT_10006056
#undef DAT_100060c0
#undef UNK_100048e8
#undef _DAT_100048e0
#undef str_10004c69
#undef str_10004c84
#undef str_10004c91
#undef str_10004cb3
#undef str_10004cd4
#undef uRam00000000100048e8
#undef local_238
#undef local_220
#undef local_210
#undef local_1d0
#undef local_190
#undef local_130
#undef local_70
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
#undef uStack_230

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007e0
 */

void recovered_100007e0(long param_1,long param_2)

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


#undef DAT_10004988
#define DAT_10004988 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1U)))
#undef DAT_10004989
#define DAT_10004989 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_1000498a
#define DAT_1000498a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb3U)))
#undef DAT_100049c0
#define DAT_100049c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe9U)))
#undef DAT_100049d0
#define DAT_100049d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf9U)))
#undef DAT_10004b32
#define DAT_10004b32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25bU)))
#undef DAT_10004b34
#define DAT_10004b34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_10004b4e
#define DAT_10004b4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_10004b50
#define DAT_10004b50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x279U)))
#undef DAT_10004b55
#define DAT_10004b55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27eU)))
#undef DAT_10004b58
#define DAT_10004b58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_10004b5a
#define DAT_10004b5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x283U)))
#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef DAT_10006011
#define DAT_10006011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173aU)))
#undef DAT_10006012
#define DAT_10006012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x173bU)))
#undef DAT_10006020
#define DAT_10006020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1749U)))
#undef DAT_10006024
#define DAT_10006024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x174dU)))
#undef DAT_10006028
#define DAT_10006028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1751U)))
#undef DAT_1000602c
#define DAT_1000602c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1755U)))
#undef DAT_10006040
#define DAT_10006040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1769U)))
#undef DAT_1000604c
#define DAT_1000604c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1775U)))
#undef DAT_10006050
#define DAT_10006050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1779U)))
#undef DAT_10006054
#define DAT_10006054 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177dU)))
#undef DAT_10006055
#define DAT_10006055 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177eU)))
#undef DAT_10006056
#define DAT_10006056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x177fU)))
#undef DAT_10006058
#define DAT_10006058 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1781U)))
#undef DAT_1000605c
#define DAT_1000605c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1785U)))
#undef DAT_10006060
#define DAT_10006060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1789U)))
#undef DAT_1000606c
#define DAT_1000606c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1795U)))
#undef DAT_10006078
#define DAT_10006078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17a1U)))
#undef DAT_100060a8
#define DAT_100060a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d1U)))
#undef DAT_100060b0
#define DAT_100060b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17d9U)))
#undef DAT_100060b8
#define DAT_100060b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef DAT_100060bc
#define DAT_100060bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e5U)))
#undef DAT_100060c0
#define DAT_100060c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef DAT_100060cc
#define DAT_100060cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f5U)))
#undef str_10004a10
#define str_10004a10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_10004a28
#define str_10004a28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10004a41
#define str_10004a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_10004a59
#define str_10004a59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10004a9a
#define str_10004a9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10004acd
#define str_10004acd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f6U)))
#undef str_10004b01
#define str_10004b01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22aU)))
#define local_4e8 (*(uint (*)[314])(pf_stack_frame + 24))
#define local_e8 (*(uint (*)[58])(pf_stack_frame + 1048))
#define local_88 (*(undefined8 *)(pf_stack_frame + 1144))
#define local_7c (*(uint *)(pf_stack_frame + 1156))
#define local_78 (*(undefined8 *)(pf_stack_frame + 1160))
#define local_6c (*(uint *)(pf_stack_frame + 1172))
#define local_68 (*(uint *)(pf_stack_frame + 1176))
#define local_64 (*(uint *)(pf_stack_frame + 1180))
#define local_60 (*(uint *)(pf_stack_frame + 1184))
#define local_5c (*(uint *)(pf_stack_frame + 1188))
#define local_58 (*(uint *)(pf_stack_frame + 1192))
#define local_54 (*(uint *)(pf_stack_frame + 1196))
#define local_50 (*(undefined8 *)(pf_stack_frame + 1200))
#define local_48 (*(int * *)(pf_stack_frame + 1208))
#define local_3c (*(uint *)(pf_stack_frame + 1220))
#define local_38 (*(uint *)(pf_stack_frame + 1224))
#define local_34 (*(uint *)(pf_stack_frame + 1228))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007fb
 */

void recovered_100007fb(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1312] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  int extraout_EAX_09 = 0;
  int extraout_EAX_10 = 0;
  int extraout_EAX_11 = 0;
  int extraout_EAX_12 = 0;
  int extraout_EAX_13 = 0;
  int extraout_EAX_14 = 0;
  int extraout_EAX_15 = 0;
  int extraout_EAX_16 = 0;
  int extraout_EAX_17 = 0;
  int extraout_EAX_18 = 0;
  int extraout_EAX_19 = 0;
  int extraout_EAX_20 = 0;
  int extraout_EAX_21 = 0;
  int extraout_EAX_22 = 0;
  ulong uVar10;
  undefined8 uVar11;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  ulong uVar12;
  undefined4 extraout_var_03 = 0;
  undefined4 extraout_var_04 = 0;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;

  if (*(short *)(param_2 + 4) != 0x10ec) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x525a) {
    return;
  }
  uVar10 = (ulong)DAT_10006008;
  if (3 < uVar10) {
    return;
  }
  lVar14 = uVar10 * 0xd0;
  pbVar1 = &DAT_10006010 + lVar14;
  recovered_100007e0((long)pbVar1,0xd0);
  uVar11 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(&DAT_1000602c + lVar14) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(lVar14 + ((uintptr_t)pf_module_state+0x175dU)) = uVar6;
  *(undefined8 *)(&DAT_10006020 + lVar14) = uVar4;
  *(undefined8 *)(&DAT_10006028 + lVar14) = uVar5;
  *(undefined8 *)(&DAT_10006010 + lVar14) = uVar11;
  *(undefined8 *)(lVar14 + ((uintptr_t)pf_module_state+0x1741U)) = uVar3;
  local_7c = 0;
  *(undefined8 *)(&DAT_1000605c + lVar14) = 0x4000000000001;
  uVar11 = recovered_100024ef(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_7c);
  if ((int)uVar11 == 0) {
    recovered_1000253c(pbVar1,str_10004a10);
    return;
  }
  *(short *)(&DAT_10006078 + lVar14) = (short)local_7c;
  uVar16 = local_7c & 0xfbf9 | 0x402;
  bVar7 = recovered_10002684(pbVar1,uVar16);
  if ((int)CONCAT71(extraout_var,bVar7) == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 2;
  local_4e8[0] = 0;
  local_e8[0] = 0;
  *(undefined4 *)(&DAT_10006060 + lVar14) = 0x60000;
  uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14],6
                              ,2,(long)local_4e8);
  if (local_4e8[0] == 0xffff || (int)uVar11 == 0) goto LAB_10000ccc;
  if ((local_4e8[0] & 0x10) != 0) {
    *(undefined4 *)(&DAT_10006060 + lVar14) = 0x340000;
    uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14]
                                ,0x34,1,(long)local_e8);
    if ((int)uVar11 == 0) goto LAB_10000ccc;
    uVar18 = 0;
    bVar7 = false;
    local_48 = param_1;
    while( true ) {
      uVar13 = local_e8[0];
      if ((local_e8[0] == 0) || (0x2f < uVar18)) goto LAB_10000a2e;
      local_34 = 0;
      *(uint *)(&DAT_10006060 + lVar14) = local_e8[0] << 0x10;
      if ((0xbc < local_e8[0] - 0x40) ||
         (((local_e8[0] & 3) != 0 ||
          (uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                       (&DAT_10006012)[lVar14],(short)local_e8[0],2,(long)&local_34)
          , (int)uVar11 == 0)))) goto LAB_10000b3c;
      if ((char)local_34 == '\x01') break;
      local_e8[0] = local_34 >> 8 & 0xff;
      uVar18 = uVar18 + 1;
    }
    local_38 = 0;
    iVar9 = local_e8[0] + 4;
    *(int *)(&DAT_10006060 + lVar14) = iVar9 * 0x10000;
    bVar7 = false;
    if (0xf8 < local_e8[0]) goto LAB_10000b3c;
    local_50 = CONCAT44(PF_PART4(local_50, 4),iVar9) & 0xffffffff0000ffff;
    uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14]
                                ,(short)iVar9,2,(long)&local_38);
    if (local_38 == 0xffff || (int)uVar11 == 0) goto LAB_10000b3c;
    *(uint *)(&DAT_10006060 + lVar14) = *(uint *)(&DAT_10006060 + lVar14) | local_38;
    if ((local_38 & 3) != 0) {
      uVar11 = recovered_10002934(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                  (&DAT_10006012)[lVar14],(short)local_50);
      if ((int)uVar11 == 0) goto LAB_10000b3c;
      uVar15 = 1000;
      if ((~local_38 & 3) == 0) {
        uVar15 = 10000;
      }
      recovered_1000296c(DAT_10006000,uVar15);
    }
    uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14]
                                ,(short)local_50,2,(long)&local_38);
    if ((int)uVar11 == 0) goto LAB_10000b3c;
    *(uint *)(&DAT_10006060 + lVar14) = iVar9 * 0x10000 | local_38;
    uVar13 = local_38 & 3;
LAB_10000a2e:
    bVar7 = uVar13 == 0;
LAB_10000b3c:
    param_1 = local_48;
    if (!bVar7) goto LAB_10000ccc;
  }
  bVar7 = recovered_10002684(pbVar1,uVar16);
  if ((int)CONCAT71(extraout_var_00,bVar7) == 0) goto LAB_10000ccc;
  *(undefined8 *)(&DAT_1000605c + lVar14) = 0x14000000000005;
  uVar11 = recovered_100024ef(param_1,*param_2,param_2[1],param_2[2],0x14,4,
                              (long)(&DAT_10006028 + lVar14));
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  *(uint *)(&DAT_10006060 + lVar14) = *(uint *)(&DAT_10006028 + lVar14);
  if (((*(uint *)(&DAT_10006028 + lVar14) & 7) == 4) &&
     (uVar11 = recovered_100024ef(param_1,*param_2,param_2[1],param_2[2],0x18,4,
                                  (long)(&DAT_1000602c + lVar14)), (int)uVar11 == 0)) {
    *(undefined4 *)(&DAT_10006060 + lVar14) = 0x180000;
    goto LAB_10000ccc;
  }
  local_e8[0] = 0;
  if (((*(uint *)(&DAT_10006024 + lVar14) & 7) == 4) ||
     (uVar16 = *(uint *)(&DAT_10006028 + lVar14), (uVar16 & 1) != 0 || uVar16 == 0))
  goto LAB_10000ccc;
  local_34 = uVar16;
  recovered_100024ef(param_1,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14],0x14,4,
                     (long)&local_34);
  uVar16 = 0;
  if ((local_34 & 7) == 4) {
    local_e8[0] = *(uint *)(&DAT_1000602c + lVar14);
    recovered_100024ef(param_1,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14],0x18,4,
                       (long)local_e8);
    uVar16 = local_e8[0];
  }
  uVar18 = 0xfffffffc;
  if ((local_34 & 1) == 0) {
    uVar18 = 0xfffffff0;
  }
  uVar18 = uVar18 & local_34;
  if (uVar18 == 0 && uVar16 == 0) goto LAB_10000ccc;
  *(ulong *)(&DAT_10006040 + lVar14) = 0;
  local_4e8[0] = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) goto LAB_10000ccc;
  if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
    if ((((uint)param_1[2] < 0x68 || uVar16 != 0) ||
        ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) ||
       (iVar9 = (*(code *)(ulong)(uint)param_1[0x19])(uVar18,0,0x1000), iVar9 == 0))
    goto LAB_10000ccc;
    *(ulong *)(&DAT_10006040 + lVar14) = (ulong)local_4e8[0];
  }
  else {
    iVar9 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar18,uVar16,0x1000);
    if (iVar9 == 0) goto LAB_10000ccc;
  }
  *(undefined8 *)(&DAT_1000605c + lVar14) = 0x18000000000006;
  uVar11 = recovered_1000272f((long)pbVar1,0x18);
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  *(undefined8 *)(&DAT_1000605c + lVar14) = 0x4000000000007;
  uVar11 = recovered_1000272f((long)pbVar1,4);
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  *(undefined8 *)(&DAT_1000605c + lVar14) = 0xc000000000008;
  uVar11 = recovered_1000272f((long)pbVar1,0xc);
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  local_4e8[0] = 0;
  local_e8[0] = 0;
  local_34 = local_34 & 0xffffff00;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 9;
  recovered_10002994((long)pbVar1,0xfc00,3,0);
  if (extraout_EAX == 0) goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,200);
  *(undefined4 *)(&DAT_1000605c + lVar14) = 10;
  recovered_10002994((long)pbVar1,0xfe60,3,0);
  if (extraout_EAX_00 == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0xb;
  recovered_10002994((long)pbVar1,0xfe57,0x3f,0x30);
  if (extraout_EAX_01 == 0) goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,10000);
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0xc;
  recovered_10002994((long)pbVar1,0xfe2c,0x80,0x80);
  if (extraout_EAX_02 == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0xd;
  recovered_10002994((long)pbVar1,0xfe34,0x80,0x80);
  if (extraout_EAX_03 == 0) goto LAB_10000ccc;
  recovered_100029b5(pbVar1);
  recovered_1000296c(DAT_10006000,100000);
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0xe;
  bVar7 = recovered_10002a3b((long)pbVar1,((uintptr_t)pf_module_state+0x39U),0x1e);
  if ((int)CONCAT71(extraout_var_01,bVar7) == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0xf;
  recovered_10002994((long)pbVar1,0xfd6a,0xff,0xb);
  if (extraout_EAX_04 == 0) goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,100);
  recovered_10002994((long)pbVar1,0xfd6a,3,0);
  if (extraout_EAX_05 == 0) goto LAB_10000ccc;
  uVar11 = recovered_1000272f((long)pbVar1,0x14);
  if ((int)uVar11 == 0) {
    *(undefined4 *)(&DAT_10006060 + lVar14) = 0x140000;
    goto LAB_10000ccc;
  }
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0x10;
  uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14],
                              0x724,4,(long)local_4e8);
  uVar12 = 3;
  if (((int)uVar11 != 0) && ((local_4e8[0] & 0x1000000) == 0)) {
    uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],(&DAT_10006012)[lVar14]
                                ,0x814,4,(long)local_e8);
    uVar16 = local_e8[0];
    if ((int)uVar11 != 0) {
      bVar8 = (byte)(local_e8[0] >> 0x12) & 0x30;
      if ((local_e8[0] >> 0xe & 1) != 0) {
        bVar8 = 0x30;
      }
      recovered_10002994((long)pbVar1,0xff03,0x30,bVar8);
      if ((extraout_EAX_06 == 0) ||
         (recovered_10002994((long)pbVar1,0xfd53,0x40,(byte)(local_4e8[0] >> 0x13) & 0x40),
         extraout_EAX_07 == 0)) goto LAB_10000ccc;
      uVar12 = (ulong)(uVar16 >> 5 & 3);
    }
  }
  recovered_10002994((long)pbVar1,0xfd73,0x52,0);
  if (extraout_EAX_08 == 0) goto LAB_10000ccc;
  lVar2 = uVar12 * 3;
  recovered_10002994((long)pbVar1,0xfd5a,0xff,(&DAT_10004988)[lVar2]);
  if (((((extraout_EAX_09 == 0) ||
        (recovered_10002994((long)pbVar1,0xfd5e,0xff,(&DAT_10004989)[lVar2]), extraout_EAX_10 == 0))
       || (recovered_10002994((long)pbVar1,0xfd5f,0xff,(&DAT_1000498a)[lVar2]), extraout_EAX_11 == 0
          )) || ((recovered_10002994((long)pbVar1,0xfe78,3,0), extraout_EAX_12 == 0 ||
                 (recovered_10002994((long)pbVar1,0xfe78,3,1), extraout_EAX_13 == 0)))) ||
     ((recovered_10002a8c((long)pbVar1,0xfe90,(byte *)&local_34), extraout_EAX_14 == 0 ||
      (((local_34 & 0xf) == 0 &&
       (bVar7 = recovered_10002a3b((long)pbVar1,((uintptr_t)pf_module_state+0xc9U),7),
       (int)CONCAT71(extraout_var_02,bVar7) == 0)))))) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0x11;
  uVar11 = recovered_10002aa9((long)pbVar1,1);
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0x12;
  recovered_10002994((long)pbVar1,0xfd69,4,4);
  if (((extraout_EAX_15 == 0) || (recovered_10002994((long)pbVar1,0xfd50,3,2), extraout_EAX_16 == 0)
      ) || (recovered_10002994((long)pbVar1,0xfe75,6,2), extraout_EAX_17 == 0)) goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,5000);
  recovered_10002994((long)pbVar1,0xfd50,3,0);
  if ((extraout_EAX_18 == 0) || (recovered_10002994((long)pbVar1,0xfe75,6,6), extraout_EAX_19 == 0))
  goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,10000);
  recovered_10002994((long)pbVar1,0xfd55,4,4);
  if ((extraout_EAX_20 == 0) ||
     (recovered_10002994((long)pbVar1,0xfda5,0x80,0x80), extraout_EAX_21 == 0)) goto LAB_10000ccc;
  recovered_1000296c(DAT_10006000,2000);
  recovered_10002994((long)pbVar1,0xfda5,0x80,0);
  if (extraout_EAX_22 == 0) goto LAB_10000ccc;
  *(undefined4 *)(&DAT_1000605c + lVar14) = 0x13;
  uVar11 = recovered_10002c6d((long)pbVar1,(uint *)0x0);
  if ((int)uVar11 == 0) goto LAB_10000ccc;
  local_e8[0] = 0;
  local_34 = 0;
  uVar12 = recovered_100032c1((long)pbVar1,0,0,4,(uint *)0x0,0);
  if ((int)uVar12 == 0) goto LAB_10000ccc;
  uVar12 = recovered_100032c1((long)pbVar1,8,0x1aa,1,local_e8,0);
  if ((int)uVar12 == 0) {
    if ((((&DAT_10006060)[lVar14] & 1) == 0) ||
       (uVar11 = recovered_10002c6d((long)pbVar1,(uint *)0x0), (int)uVar11 == 0)) goto LAB_10000ccc;
    recovered_10002f5a((long)pbVar1);
    local_48 = (int *)0x0;
    uVar12 = recovered_100032c1((long)pbVar1,0,0,4,(uint *)0x0,0);
    if ((int)uVar12 == 0) goto LAB_10000ccc;
    uVar16 = 0x300000;
LAB_10001331:
    iVar9 = 1000;
    while (bVar7 = iVar9 != 0, iVar9 = iVar9 + -1, bVar7) {
      uVar11 = recovered_10003452((long)pbVar1,0x37,0,0);
      if (((int)uVar11 == 0) ||
         (uVar12 = recovered_100032c1((long)pbVar1,0x29,uVar16,5,&local_34,0), (int)uVar12 == 0))
      goto LAB_10000ccc;
      if (SBORROW4(0,local_34 & 0x81000000) && (local_34 & 0x300000) != 0) {
        bVar7 = true;
        goto LAB_100013b0;
      }
      recovered_1000296c(DAT_10006000,1000);
    }
    bVar7 = (local_34 & 0x300000) != 0;
LAB_100013b0:
    if ((((!(bool)(bVar7 ^ 1U | !SBORROW4(0,local_34 & 0x81000000))) &&
         (uVar12 = recovered_100032c1((long)pbVar1,2,0,2,(uint *)0x0,lVar14 + ((uintptr_t)pf_module_state+0x17a3U)),
         (int)uVar12 != 0)) &&
        (uVar12 = recovered_100032c1((long)pbVar1,3,0,1,local_e8,0), (int)uVar12 != 0)) &&
       (0xffff < local_e8[0] && (local_e8[0] & 0xe000) == 0)) {
      *(uint *)(&DAT_10006058 + lVar14) = local_e8[0] & 0xffff0000;
      local_50 = 0;
      uVar12 = recovered_100032c1((long)pbVar1,9,local_e8[0] & 0xffff0000,2,(uint *)0x0,
                                  (long)local_4e8);
      uVar16 = local_34;
      if ((int)uVar12 == 0) goto LAB_10000ccc;
      local_54 = recovered_10003791((long)local_4e8,0x7f,0x7e);
      iVar9 = recovered_10003791((long)local_4e8,0x53,0x50);
      local_78 = CONCAT44(extraout_var_03,iVar9);
      iVar9 = recovered_10003791((long)local_4e8,0x19,0x16);
      local_88 = CONCAT44(extraout_var_04,iVar9);
      local_5c = recovered_10003791((long)local_4e8,0x5f,0x54);
      uVar18 = recovered_10003791((long)local_4e8,0x67,0x60);
      uVar13 = uVar18 >> 3 & 0xf;
      if (uVar13 != 0 && ((uVar18 & 7) < 4 && -1 < (char)uVar18)) {
        local_50 = (ulong)((uint)(byte)(&DAT_100049c0)[uVar13] *
                          *(int *)(&DAT_100049d0 + (ulong)(uVar18 & 7) * 4));
      }
      if (((local_5c & 4) == 0) || ((int)local_50 == 0)) goto LAB_10000ccc;
      bVar8 = (byte)local_48 & (byte)(uVar16 >> 0x1e) & 1;
      local_48 = (int *)CONCAT71((int7)((ulong)local_48 >> 8),bVar8);
      if (local_54 == 1) {
        if (((uint)local_78 == 9 & bVar8) != 1) goto LAB_10000ccc;
        uVar16 = recovered_10003791((long)local_4e8,0x45,0x30);
        uVar12 = (ulong)uVar16 * 0x400 + 0x400;
      }
      else {
        if (((local_54 != 0) || ((uint)local_78 - 0xc < 0xfffffffd || bVar8 != 0)) ||
           ((9 < (uint)local_78 &&
            (iVar9 = recovered_10003791((long)local_4e8,0x4f,0x4f), iVar9 == 0))))
        goto LAB_10000ccc;
        uVar16 = recovered_10003791((long)local_4e8,0x49,0x3e);
        iVar9 = recovered_10003791((long)local_4e8,0x31,0x2f);
        uVar12 = (ulong)uVar16 + 1 << (((char)local_78 + (char)iVar9) - 7U & 0x3f);
      }
      uVar17 = 0xffffffff;
      if (uVar12 < 0xffffffff) {
        uVar17 = uVar12;
      }
      iVar9 = recovered_10003791((long)local_4e8,0xd,0xc);
      bVar7 = true;
      if ((iVar9 == 0) && (0xfffffffc < (int)local_88 - 0xcU && (local_5c & 0x10) != 0)) {
        bVar7 = (int)local_88 != 9 && local_54 == 1;
      }
      (&DAT_1000604c)[uVar10 * 0x34] = (int)uVar17;
      *(int *)(&DAT_10006050 + lVar14) = (int)local_50;
      (&DAT_10006054)[lVar14] = uVar12 >> 0x20 != 0;
      (&DAT_10006055)[lVar14] = (char)local_48;
      (&DAT_10006056)[lVar14] = bVar7;
      uVar11 = recovered_10003452((long)pbVar1,7,*(uint *)(&DAT_10006058 + lVar14),1);
      if (((int)uVar11 == 0) ||
         (((((&DAT_10006055)[lVar14] == '\0' &&
            (uVar11 = recovered_10003452((long)pbVar1,0x10,0x200,0), (int)uVar11 == 0)) ||
           (uVar11 = recovered_10002aa9((long)pbVar1,0), (int)uVar11 == 0)) ||
          (uVar11 = recovered_1000349b((long)pbVar1), (int)uVar11 == 0)))) goto LAB_10000ccc;
      local_38 = 0;
      uVar11 = recovered_10002c6d((long)pbVar1,&local_38);
      if (((int)uVar11 == 0) || (uVar11 = recovered_1000272f((long)pbVar1,0x14), (int)uVar11 == 0))
      goto LAB_10000ccc;
      (&DAT_10006056)[lVar14] = (&DAT_10006056)[lVar14] | (byte)(local_38 >> 0x13) & 1;
      local_58 = 0;
      local_6c = 0;
      local_68 = 0;
      *(undefined8 *)(&DAT_1000606c + lVar14) = 0x100000001;
      local_60 = 0;
      uVar16 = recovered_100037e8(pbVar1);
      local_48 = (int *)CONCAT44(PF_PART4(local_48, 4),uVar16);
      if (DAT_10006000 == (int *)0x0) {
        uVar16 = 0;
LAB_10001822:
        *(undefined4 *)(&DAT_1000605c + lVar14) = 0x163;
      }
      else {
        uVar16 = DAT_10006000[2];
        if (((uVar16 < 0x7c || *DAT_10006000 != 0x54584b57) || (DAT_10006000[0x1e] == 0)) ||
           ((DAT_10006000[0xd] == 0 ||
            (((DAT_10006000[0xe] == 0 || (DAT_10006000[0x1c] == 0)) || (DAT_10006000[0x1d] == 0)))))
           ) goto LAB_10001822;
        local_4e8[0] = 0;
        local_e8[0] = 0;
        local_34 = 0;
        uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                    (&DAT_10006012)[lVar14],4,2,(long)local_4e8);
        if ((int)uVar11 == 0) {
          uVar11 = 0x4000000000155;
          goto LAB_1000207b;
        }
        if ((local_4e8[0] & 0x406) != 0x402) {
          uVar16 = local_4e8[0] | 0x40000;
          *(undefined4 *)(&DAT_1000605c + lVar14) = 0x156;
          goto LAB_1000182a;
        }
        uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                    (&DAT_10006012)[lVar14],6,2,(long)local_e8);
        if ((int)uVar11 == 0) {
          uVar11 = 0x6000000000157;
LAB_1000207b:
          *(undefined8 *)(&DAT_1000605c + lVar14) = uVar11;
          goto LAB_1000182e;
        }
        if (local_e8[0] == 0xffff) {
          uVar11 = 0x6ffff00000158;
          goto LAB_1000207b;
        }
        if ((local_e8[0] & 0x10) != 0) {
          uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                      (&DAT_10006012)[lVar14],0x34,1,(long)&local_34);
          if ((int)uVar11 == 0) {
            uVar11 = 0x34000000000159;
            goto LAB_1000207b;
          }
          if (local_34 == 0) {
            uVar16 = local_e8[0] << 0x10;
            *(undefined4 *)(&DAT_1000605c + lVar14) = 0x15a;
            goto LAB_1000182a;
          }
          for (local_5c = 0; (local_34 != 0 && (local_5c < 0x30)); local_5c = local_5c + 1) {
            local_38 = 0;
            if ((0xbc < local_34 - 0x40) || ((local_34 & 3) != 0)) {
              *(undefined4 *)(&DAT_1000605c + lVar14) = 0x15b;
              goto LAB_10001d54;
            }
            uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                        (&DAT_10006012)[lVar14],(short)local_34,2,(long)&local_38);
            if ((int)uVar11 == 0) {
              *(undefined4 *)(&DAT_1000605c + lVar14) = 0x15c;
              uVar16 = local_34 << 0x10;
              goto LAB_1000182a;
            }
            if ((char)local_38 == -1) {
LAB_10001d70:
              *(undefined4 *)(&DAT_1000605c + lVar14) = 0x15c;
              *(uint *)(&DAT_10006060 + lVar14) = local_34 << 0x10 | local_38;
              goto LAB_1000182e;
            }
            local_50 = CONCAT44(PF_PART4(local_50, 4),local_38) & 0xffffffff000000ff;
            if ((local_38 & 0xff) == 0) goto LAB_10001d70;
            if ((char)local_38 != '\x11') {
              if ((int)local_50 != 0x10) {
                if ((int)local_50 == 5) goto LAB_10001b3e;
                goto LAB_10001d06;
              }
LAB_10001c32:
              local_3c = 0;
              local_64 = 0;
              if (local_34 < 0xf5) {
                iVar9 = local_34 + 8;
                local_50 = CONCAT44(PF_PART4(local_50, 4),iVar9) & 0xffffffff0000ffff;
                uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                            (&DAT_10006012)[lVar14],(short)iVar9,2,(long)&local_3c);
                if ((int)uVar11 == 0) {
                  uVar16 = iVar9 * 0x10000;
                }
                else {
                  if (local_3c != 0xffff) {
                    if (((local_3c >> 0xb & 1) == 0) ||
                       (uVar11 = recovered_10002934(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                                    (&DAT_10006012)[lVar14],(short)local_50),
                       (int)uVar11 != 0)) {
                      uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                                  (&DAT_10006012)[lVar14],(short)local_50,2,
                                                  (long)&local_64);
                      if ((int)uVar11 == 0) {
                        uVar15 = 0x176;
                        uVar16 = iVar9 * 0x10000;
                      }
                      else {
                        if ((local_64 >> 0xb & 1) == 0) goto LAB_10001d06;
                        uVar15 = 0x177;
                        uVar16 = iVar9 * 0x10000 | local_64;
                      }
                    }
                    else {
                      uVar15 = 0x175;
                      uVar16 = iVar9 * 0x10000 | local_3c;
                    }
                    goto LAB_10001dfc;
                  }
                  uVar16 = iVar9 * 0x10000 | 0xffff;
                }
                uVar15 = 0x174;
              }
              else {
                uVar15 = 0x173;
                uVar16 = local_34;
              }
LAB_10001dfc:
              *(undefined4 *)(&DAT_1000605c + lVar14) = uVar15;
              *(uint *)(&DAT_10006060 + lVar14) = uVar16;
              goto LAB_1000182e;
            }
LAB_10001b3e:
            local_3c = 0;
            local_64 = 0;
            uVar16 = local_34 + 2;
            local_54 = uVar16 & 0xffff;
            uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                        (&DAT_10006012)[lVar14],(short)uVar16,2,(long)&local_3c);
            if ((int)uVar11 == 0) {
              uVar16 = uVar16 * 0x10000;
              uVar15 = 0x15d;
LAB_10001db6:
              *(undefined4 *)(&DAT_1000605c + lVar14) = uVar15;
              goto LAB_1000182a;
            }
            uVar18 = local_3c & 0xfffffffe;
            local_3c = local_3c & 0xffff3fff | 0x4000;
            if ((int)local_50 == 5) {
              local_3c = uVar18;
            }
            uVar11 = recovered_10002934(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                        (&DAT_10006012)[lVar14],(short)local_54);
            if ((int)uVar11 == 0) {
              uVar16 = uVar16 * 0x10000 | local_3c;
              uVar15 = 0x15e;
              goto LAB_10001db6;
            }
            uVar11 = recovered_100024ef(DAT_10006000,*pbVar1,(&DAT_10006011)[lVar14],
                                        (&DAT_10006012)[lVar14],(short)local_54,2,(long)&local_64);
            if ((int)uVar11 == 0) {
              uVar16 = uVar16 * 0x10000;
              uVar15 = 0x15f;
              goto LAB_10001db6;
            }
            if ((int)local_50 == 5) {
              if ((local_64 & 1) != 0) {
LAB_10001dac:
                uVar16 = local_64 | uVar16 * 0x10000;
                uVar15 = 0x160;
                goto LAB_10001db6;
              }
            }
            else {
              if ((local_64 & 0xc000) != 0x4000) goto LAB_10001dac;
              if ((int)local_50 == 0x10) goto LAB_10001c32;
            }
LAB_10001d06:
            local_34 = local_38 >> 8 & 0xff;
          }
          if (local_34 != 0) {
            *(undefined4 *)(&DAT_1000605c + lVar14) = 0x161;
LAB_10001d54:
            *(uint *)(&DAT_10006060 + lVar14) = local_34;
            goto LAB_1000182e;
          }
        }
        uVar11 = recovered_10002c6d((long)pbVar1,&local_60);
        if ((int)uVar11 == 0) {
          *(undefined4 *)(&DAT_1000605c + lVar14) = 0x164;
          goto LAB_1000182e;
        }
        uVar11 = recovered_10002e0d((long)pbVar1,4,&local_6c);
        if ((int)uVar11 == 0) {
          uVar11 = 0x4000000000165;
          goto LAB_1000207b;
        }
        if ((int)local_6c < 0) {
          *(undefined4 *)(&DAT_1000605c + lVar14) = 0x166;
          uVar16 = local_6c;
        }
        else {
          uVar11 = recovered_10002e0d((long)pbVar1,0xc,&local_68);
          if ((int)uVar11 == 0) {
            uVar11 = 0xc000000000167;
            goto LAB_1000207b;
          }
          if ((int)local_68 < 0) {
            *(undefined4 *)(&DAT_1000605c + lVar14) = 0x168;
            uVar16 = local_68;
          }
          else {
            if ((local_60 & 0x1000000) == 0) {
LAB_10001ea0:
              *(undefined4 *)(&DAT_100060cc + lVar14) = 1;
              uVar12 = recovered_10003814((ulong *)(lVar14 + ((uintptr_t)pf_module_state+0x17c1U)));
              *(ulong *)(&DAT_100060a8 + lVar14) = uVar12;
              if (uVar12 == 0) {
                recovered_10003112((long)pbVar1);
                uVar11 = 0x1fff0000016a;
              }
              else {
                uVar12 = recovered_10003814((ulong *)(lVar14 + ((uintptr_t)pf_module_state+0x17c9U)));
                *(ulong *)(&DAT_100060b0 + lVar14) = uVar12;
                if (uVar12 == 0) {
                  recovered_10003112((long)pbVar1);
                  uVar11 = 0x1fff0000016b;
                }
                else {
                  uVar11 = recovered_1000388f(DAT_10006000,PF_PART4(local_48, 0),
                                              *(long *)(&DAT_100060a8 + lVar14),
                                              (long)(&DAT_100060b8 + lVar14));
                  if ((int)uVar11 != 0) {
                    uVar16 = *(uint *)(&DAT_100060b8 + lVar14);
                    if ((uVar16 - 1 < 0xfffff000) && ((uVar16 & 0xfff) == 0 && local_58 == 0)) {
                      local_58 = 0;
                      uVar11 = recovered_1000388f(DAT_10006000,PF_PART4(local_48, 0),
                                                  *(long *)(&DAT_100060b0 + lVar14),
                                                  (long)(&DAT_100060bc + lVar14));
                      if ((int)uVar11 == 0) {
                        recovered_10003112((long)pbVar1);
                        uVar11 = 0x10000000016e;
                        goto LAB_1000207b;
                      }
                      uVar16 = *(uint *)(&DAT_100060bc + lVar14);
                      if ((uVar16 - 1 < 0xfffff000) && ((uVar16 & 0xfff) == 0 && local_58 == 0)) {
                        recovered_100007e0(*(long *)(&DAT_100060a8 + lVar14),0x1000);
                        recovered_100007e0(*(long *)(&DAT_100060b0 + lVar14),0x1000);
                        (&DAT_100060c0)[uVar10 * 0x34] = 1;
                        goto LAB_1000182e;
                      }
                      recovered_10003112((long)pbVar1);
                      *(undefined4 *)(&DAT_1000605c + lVar14) = 0x16f;
                      uVar16 = local_58;
                    }
                    else {
                      recovered_10003112((long)pbVar1);
                      *(undefined4 *)(&DAT_1000605c + lVar14) = 0x16d;
                      uVar16 = local_58;
                    }
                    goto LAB_1000182a;
                  }
                  recovered_10003112((long)pbVar1);
                  uVar11 = 0x10000000016c;
                }
              }
              goto LAB_1000207b;
            }
            uVar11 = recovered_1000272f((long)pbVar1,0x14);
            if ((int)uVar11 != 0) {
              uVar11 = recovered_10002c6d((long)pbVar1,&local_60);
              if ((int)uVar11 == 0) {
                *(undefined4 *)(&DAT_1000605c + lVar14) = 0x169;
                goto LAB_1000182e;
              }
              if ((local_60 >> 0x18 & 1) == 0) goto LAB_10001ea0;
            }
            *(undefined4 *)(&DAT_1000605c + lVar14) = 0x169;
            uVar16 = local_60;
          }
        }
      }
LAB_1000182a:
      *(uint *)(&DAT_10006060 + lVar14) = uVar16;
LAB_1000182e:
      if ((&DAT_100060c0)[uVar10 * 0x34] == 0) {
        local_48 = (int *)str_10004acd;
        if ((&DAT_10006056)[lVar14] != '\0') {
          local_48 = (int *)str_10004a9a;
        }
      }
      else {
        local_48 = (int *)str_10004a59;
      }
      recovered_10002793((undefined1 *)local_e8,0x60,str_10004a28);
      recovered_1000280f((long)local_e8,0x60,&DAT_10004b4e);
      recovered_100027b2((long)local_e8,0x60,(uint)*param_2,2);
      recovered_1000280f((long)local_e8,0x60,&DAT_10004b32);
      recovered_100027b2((long)local_e8,0x60,(uint)param_2[1],2);
      recovered_1000280f((long)local_e8,0x60,&DAT_10004b34);
      recovered_10002863((long)local_e8,0x60,(ulong)param_2[2]);
      recovered_10002793((undefined1 *)local_4e8,0x400,&DAT_10004b50);
      recovered_100027b2((long)local_4e8,0x400,(uint)*param_2,2);
      recovered_1000280f((long)local_4e8,0x400,&DAT_10004b32);
      recovered_100027b2((long)local_4e8,0x400,(uint)param_2[1],2);
      recovered_1000280f((long)local_4e8,0x400,&DAT_10004b34);
      recovered_10002863((long)local_4e8,0x400,(ulong)param_2[2]);
      recovered_1000280f((long)local_4e8,0x400,&DAT_10004b55);
      recovered_100027b2((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 4),4);
      recovered_1000280f((long)local_4e8,0x400,&DAT_10004b32);
      recovered_100027b2((long)local_4e8,0x400,(uint)*(ushort *)(param_2 + 6),4);
      recovered_1000280f((long)local_4e8,0x400,&DAT_10004b58);
      if ((char)*local_48 != '\0') {
        recovered_1000280f((long)local_4e8,0x400,&DAT_10004b5a);
        recovered_1000280f((long)local_4e8,0x400,(char *)local_48);
      }
      if ((code *)(ulong)(uint)param_1[3] != (code *)0x0) {
        (*(code *)(ulong)(uint)param_1[3])(local_e8,str_10004a41,local_4e8);
      }
      DAT_10006008 = DAT_10006008 + 1;
      return;
    }
  }
  else {
    if ((local_e8[0] >> 0x16 & 1) != 0) {
      uVar16 = 0x300000;
      local_48 = (int *)0x0;
      goto LAB_10001331;
    }
    if ((local_e8[0] & 0xfff) == 0x1aa) {
      uVar16 = 0x40300000;
      local_48 = (int *)CONCAT71((uint7)(uint3)(local_e8[0] >> 8),1);
      goto LAB_10001331;
    }
  }
  *(uint *)(&DAT_10006060 + lVar14) = local_e8[0];
LAB_10000ccc:
  uVar15 = *(undefined4 *)(&DAT_10006060 + lVar14);
  recovered_1000253c(pbVar1,str_10004b01);
  recovered_100022d9(pbVar1);
  *(undefined4 *)(&DAT_10006060 + lVar14) = uVar15;
  return;
}

#undef DAT_10004988
#undef DAT_10004989
#undef DAT_1000498a
#undef DAT_100049c0
#undef DAT_100049d0
#undef DAT_10004b32
#undef DAT_10004b34
#undef DAT_10004b4e
#undef DAT_10004b50
#undef DAT_10004b55
#undef DAT_10004b58
#undef DAT_10004b5a
#undef DAT_10006000
#undef DAT_10006008
#undef DAT_10006010
#undef DAT_10006011
#undef DAT_10006012
#undef DAT_10006020
#undef DAT_10006024
#undef DAT_10006028
#undef DAT_1000602c
#undef DAT_10006040
#undef DAT_1000604c
#undef DAT_10006050
#undef DAT_10006054
#undef DAT_10006055
#undef DAT_10006056
#undef DAT_10006058
#undef DAT_1000605c
#undef DAT_10006060
#undef DAT_1000606c
#undef DAT_10006078
#undef DAT_100060a8
#undef DAT_100060b0
#undef DAT_100060b8
#undef DAT_100060bc
#undef DAT_100060c0
#undef DAT_100060cc
#undef str_10004a10
#undef str_10004a28
#undef str_10004a41
#undef str_10004a59
#undef str_10004a9a
#undef str_10004acd
#undef str_10004b01
#undef local_4e8
#undef local_e8
#undef local_88
#undef local_7c
#undef local_78
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef str_10004a41
#define str_10004a41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

undefined8 recovered_1000209c(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;

  puVar2 = &DAT_10006010 + (ulong)param_1 * 0xd0;
  uVar3 = 0;
  if (DAT_10006008 <= param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  if (param_2 != (undefined4 *)0x0 && param_1 < DAT_10006008) {
    recovered_100038c8((long)puVar2);
    if (*(int *)(puVar2 + 0x60) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar1 = recovered_10002c6d((long)puVar2,(uint *)0x0);
      if ((int)uVar1 == 0) {
        if (*(int *)(puVar2 + 0x60) != 0) {
          recovered_100029b5(puVar2);
        }
      }
      else {
        *param_2 = *(undefined4 *)(puVar2 + 0x3c);
        recovered_10002793(param_3,(ulong)param_4,str_10004a41);
        uVar3 = 1;
      }
    }
    *(undefined4 *)(puVar2 + 0x38) = 0;
  }
  return uVar3;
}

#undef DAT_10006008
#undef DAT_10006010
#undef str_10004a41

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000214a
 */

void recovered_1000214a(uint param_1,ulong param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038e3(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002157
 */

void recovered_10002157(uint param_1,ulong param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100038e3(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef DAT_10006048
#define DAT_10006048 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1771U)))
#undef DAT_10006070
#define DAT_10006070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1799U)))
#undef str_10004c44
#define str_10004c44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002165
 */

undefined8 recovered_10002165(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;

  uVar3 = 0;
  if (param_1 < DAT_10006008) {
    uVar1 = (ulong)param_1;
    pbVar4 = &DAT_10006010 + uVar1 * 0xd0;
    recovered_100038c8((long)pbVar4);
    uVar3 = 0;
    if ((&DAT_10006070)[uVar1 * 0x34] != 0) {
      uVar2 = recovered_1000349b((long)pbVar4);
      if ((int)uVar2 == 0) {
        if ((&DAT_10006070)[uVar1 * 0x34] != 0) {
          recovered_1000253c(pbVar4,str_10004c44);
          recovered_100029b5(pbVar4);
        }
      }
      else {
        uVar3 = 1;
      }
    }
    (&DAT_10006048)[uVar1 * 0x34] = 0;
  }
  return uVar3;
}

#undef DAT_10006008
#undef DAT_10006010
#undef DAT_10006048
#undef DAT_10006070
#undef str_10004c44

#undef DAT_10004c64
#define DAT_10004c64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38dU)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021d8
 */

ulong recovered_100021d8(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;

  puVar5 = &DAT_10006010 + (ulong)param_1 * 0xd0;
  uVar7 = 0;
  if (DAT_10006008 <= param_1) {
    puVar5 = (undefined *)0x0;
  }
  if (param_2 != 0 && param_1 < DAT_10006008) {
    recovered_100038c8((long)puVar5);
    if (*(int *)(puVar5 + 0x60) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar4 = recovered_10002c6d((long)puVar5,(uint *)0x0);
      if ((int)uVar4 != 0) {
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + lVar6) = (&DAT_10004c64)[lVar6];
        }
        *(undefined1 *)(param_2 + 4) = uVar1;
        *(undefined1 *)(param_2 + 5) = uVar2;
        *(undefined1 *)(param_2 + 6) = uVar3;
        for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + 8 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 8; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + 0x10 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 0x10; lVar6 = lVar6 + 1) {
          *(undefined *)(param_2 + 0x20 + lVar6) = puVar5[lVar6 + 0x6a];
        }
        uVar7 = uVar4 & 0xffffffff;
      }
    }
    *(undefined4 *)(puVar5 + 0x38) = 0;
  }
  return uVar7;
}

#undef DAT_10004c64
#undef DAT_10006008
#undef DAT_10006010

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d9
 */

void recovered_100022d9(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(long *)(param_1 + 0x30) != 0) {
    recovered_100029b5(param_1);
    recovered_1000272f((long)param_1,0x18);
  }
  if (*(int *)(param_1 + 100) != 0) {
    recovered_10002934(DAT_10006000,*param_1,param_1[1],param_1[2],4);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

#undef DAT_10006000

#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000233d
 */

undefined4
recovered_1000233d(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_100024ef(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_100024ef(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_100024ef(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100024ef(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_100024ef(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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
 * Address: 0x100024ef
 */

undefined8
recovered_100024ef(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10004b32
#define DAT_10004b32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25bU)))
#undef DAT_10004b34
#define DAT_10004b34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25dU)))
#undef DAT_10004b36
#define DAT_10004b36 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25fU)))
#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef str_10004b22
#define str_10004b22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24bU)))
#undef str_10004b39
#define str_10004b39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_10004b42
#define str_10004b42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26bU)))
#define local_e8 (*(undefined1 (*)[232])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000253c
 */

void recovered_1000253c(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};


  recovered_10002793(local_e8,0xc0,str_10004b22);
  recovered_100027b2((long)local_e8,0xc0,(uint)*param_1,2);
  recovered_1000280f((long)local_e8,0xc0,&DAT_10004b32);
  recovered_100027b2((long)local_e8,0xc0,(uint)param_1[1],2);
  recovered_1000280f((long)local_e8,0xc0,&DAT_10004b34);
  recovered_10002863((long)local_e8,0xc0,(ulong)param_1[2]);
  recovered_1000280f((long)local_e8,0xc0,&DAT_10004b36);
  recovered_1000280f((long)local_e8,0xc0,param_2);
  recovered_1000280f((long)local_e8,0xc0,str_10004b39);
  recovered_10002863((long)local_e8,0xc0,(ulong)*(uint *)(param_1 + 0x4c));
  recovered_1000280f((long)local_e8,0xc0,str_10004b42);
  recovered_100027b2((long)local_e8,0xc0,*(uint *)(param_1 + 0x50),8);
  if ((((DAT_10006000 != (int *)0x0) && (*DAT_10006000 == 0x54584b57)) &&
      (0x2b < (uint)DAT_10006000[2])) && ((code *)(ulong)(uint)DAT_10006000[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)DAT_10006000[10])(local_e8);
  }
  param_1[0x54] = 1;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}

#undef DAT_10004b32
#undef DAT_10004b34
#undef DAT_10004b36
#undef DAT_10006000
#undef str_10004b22
#undef str_10004b39
#undef str_10004b42
#undef local_e8

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002684
 */

bool recovered_10002684(undefined1 *param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  local_1c = 0;
  *(undefined4 *)(param_1 + 0x4c) = 3;
  *(int *)(param_1 + 0x50) = param_2 + 0x40000;
  uVar1 = recovered_10002934(DAT_10006000,*param_1,param_1[1],param_1[2],4);
  bVar2 = false;
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined8 *)(param_1 + 0x4c) = 0x4000000000004;
    uVar1 = recovered_100024ef(DAT_10006000,*param_1,param_1[1],param_1[2],4,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | local_1c;
      bVar2 = (local_1c & 0x406) == 0x402;
    }
  }
  return bVar2;
}

#undef DAT_10006000
#undef local_1c

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000272f
 */

undefined8 recovered_1000272f(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (((*(long *)(param_1 + 0x30) != 0) && (DAT_10006000 != (int *)0x0)) &&
     (*DAT_10006000 == 0x54584b57)) {
    uVar2 = *(long *)(param_1 + 0x30) + (param_2 & 0xffffffff);
    if ((0xc3 < (uint)DAT_10006000[2]) && ((code *)(ulong)(uint)DAT_10006000[0x30] != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x10002770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)DAT_10006000[0x30])(uVar2,4);
      return uVar1;
    }
    if ((uVar2 >> 0x20 == 0) &&
       ((0x6f < (uint)DAT_10006000[2] && ((code *)(ulong)(uint)DAT_10006000[0x1b] != (code *)0x0))))
    {
                    /* WARNING: Could not recover jumptable at 0x1000278d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)DAT_10006000[0x1b])(uVar2,4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002793
 */

void recovered_10002793(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_1000280f((long)param_1,param_2,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b2
 */

void recovered_100027b2(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_100028da(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000280f
 */

void recovered_1000280f(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002914(param_1);
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


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002863
 */

void recovered_10002863(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_100028da(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_100028da(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028da
 */

void recovered_100028da(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002914(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002914
 */

long recovered_10002914(long param_1)

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
 * Address: 0x10002934
 */

undefined8
recovered_10002934(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,param_5,2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000296c
 */

undefined8 recovered_1000296c(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000298e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return uVar1;
}


#define local_9 (*(byte *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002994
 */

void recovered_10002994(long param_1,int param_2,uint param_3,byte param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_9 = param_4;
  recovered_10002d08(param_1,param_2,'\x01',(ulong)param_3,&local_9);
  return;
}

#undef local_9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b5
 */

void recovered_100029b5(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    recovered_10002f8c(param_1);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  recovered_10003112((long)param_1);
  recovered_10002f5a((long)param_1);
  recovered_10002994((long)param_1,0xfd55,4,0);
  recovered_10002994((long)param_1,0xfd69,4,0);
  recovered_10002994((long)param_1,0xfd50,3,3);
  recovered_10002994((long)param_1,0xfe75,6,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a3b
 */

bool recovered_10002a3b(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int extraout_EAX = 0;
  ulong uVar2;

  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (param_3 == uVar2) break;
    recovered_10002994(param_1,(uint)*(ushort *)(param_2 + uVar2 * 4),
                       (uint)*(byte *)(param_2 + 2 + uVar2 * 4),*(byte *)(param_2 + 3 + uVar2 * 4));
    uVar1 = uVar2 + 1;
  } while (extraout_EAX != 0);
  return param_3 <= uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a8c
 */

void recovered_10002a8c(long param_1,ushort param_2,byte *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  recovered_10002d08(param_1,(uint)param_2,'\0',0,param_3);
  return;
}


#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002aa9
 */

undefined8 recovered_10002aa9(long param_1,byte param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;

  uVar7 = *(uint *)(param_1 + 0x40);
  uVar6 = 0;
  if ((uVar7 < 0x39387 & (param_2 ^ 1)) == 0) {
    bVar3 = uVar7 < 6000000 | param_2;
    if (bVar3 == 0) {
      uVar5 = 25000000;
      if (uVar7 < 25000000) {
        uVar5 = uVar7;
      }
      uVar7 = (uVar5 / 1000000) * 2;
    }
    else {
      uVar7 = 0x1e;
    }
    uVar5 = uVar7 - 2;
    bVar4 = 0x10;
    for (bVar1 = 1; (uVar5 < 0x50 && (bVar1 < 4)); bVar1 = bVar1 + 1) {
      uVar5 = uVar5 * 2 + 2;
      bVar4 = bVar4 + 0x10;
    }
    if (uVar5 - 0x50 < 0x81) {
      iVar2 = 0x39387;
      if (bVar3 == 0) {
        iVar2 = uVar7 * 500000;
      }
      recovered_10002994(param_1,0xfc02,1,1);
      if (extraout_EAX != 0) {
        uVar6 = 0;
        recovered_10002994(param_1,0xfc03,0xff,(char)(0x7d / (ulong)uVar7) + 3U | bVar4);
        if (extraout_EAX_00 != 0) {
          recovered_10002994(param_1,0xfc11,0xff,0x50);
          if (extraout_EAX_01 != 0) {
            uVar6 = 0;
            recovered_10002994(param_1,0xfc12,7,0);
            if (extraout_EAX_02 != 0) {
              recovered_10002994(param_1,0xfc0f,0xff,(byte)uVar5);
              if (extraout_EAX_03 != 0) {
                recovered_10002994(param_1,0xfc11,0x80,0x80);
                if (extraout_EAX_04 != 0) {
                  recovered_1000296c(DAT_10006000,1000);
                  uVar6 = 0;
                  recovered_10002994(param_1,0xfc02,1,0);
                  if (extraout_EAX_05 != 0) {
                    recovered_10002994(param_1,0xfda0,0xff,bVar3 << 7 | 0x10);
                    if (extraout_EAX_06 != 0) {
                      *(int *)(param_1 + 0x58) = iVar2;
                      uVar6 = 1;
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
  return uVar6;
}

#undef DAT_10006000

#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_19 (*(byte *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c6d
 */

undefined8 recovered_10002c6d(long param_1,uint *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int extraout_EAX = 0;
  undefined8 uVar1;

  local_20 = 0;
  local_19 = 0;
  uVar1 = recovered_10002e0d(param_1,0x14,&local_20);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0x140000;
  }
  else {
    if (((local_20 & 0xc10000) == 0x10000) &&
       (((local_20 >> 0x19 & 1) == 0 || (*(int *)(param_1 + 0x5c) == 0)))) {
      recovered_10002a8c(param_1,0xfd6e,&local_19);
      if (extraout_EAX == 0) {
        return 0;
      }
      if ((local_19 & 6) != 0) {
        *(uint *)(param_1 + 0x50) = local_19 | local_20;
        return 0;
      }
      if (param_2 == (uint *)0x0) {
        return 1;
      }
      *param_2 = local_20;
      return 1;
    }
    *(uint *)(param_1 + 0x50) = local_20;
  }
  return 0;
}

#undef local_20
#undef local_19

#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d08
 */

undefined8
recovered_10002d08(long param_1,int param_2,char param_3,undefined8 param_4,byte *param_5)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined7 extraout_var = 0;
  int iVar4;

  local_34 = 0;
  uVar2 = 0;
  if (param_5 != (byte *)0x0) {
    uVar3 = recovered_1000272f(param_1,0x10);
    if ((int)uVar3 != 0) {
      iVar4 = 0x3e9;
      do {
        iVar4 = iVar4 + -1;
        if (((iVar4 == 0) || (uVar3 = recovered_10002e0d(param_1,0x10,&local_34), (int)uVar3 == 0))
           || (local_34 == 0xffffffff)) break;
        if (-1 < (int)local_34) {
          if ((param_3 == '\0') || (*param_5 == (byte)local_34)) {
            *param_5 = (byte)local_34;
            return 1;
          }
          goto LAB_10002dc4;
        }
        bVar1 = recovered_10002ea8(param_1,1);
      } while ((int)CONCAT71(extraout_var,bVar1) != 0);
      local_34 = local_34 & 0xffff;
LAB_10002dc4:
      *(uint *)(param_1 + 0x50) = local_34 & 0xffff | param_2 << 0x10;
      return 0;
    }
    uVar2 = (uint)*param_5;
  }
  *(uint *)(param_1 + 0x50) = param_2 << 0x10 | uVar2;
  return 0;
}

#undef local_34

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e0d
 */

undefined8 recovered_10002e0d(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;

  local_1c = 0;
  uVar2 = 0;
  if (((*(long *)(param_1 + 0x30) != 0 && param_3 != (undefined4 *)0x0) &&
      (DAT_10006000 != (int *)0x0)) && (*DAT_10006000 == 0x54584b57)) {
    uVar3 = *(long *)(param_1 + 0x30) + (param_2 & 0xffffffff);
    if (((uint)DAT_10006000[2] < 0xc0) || ((code *)(ulong)(uint)DAT_10006000[0x2f] == (code *)0x0))
    {
      if (uVar3 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)DAT_10006000[2] < 0x6c) {
        return 0;
      }
      if ((code *)(ulong)(uint)DAT_10006000[0x1a] == (code *)0x0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)DAT_10006000[0x1a])(uVar3,4,&local_1c);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)DAT_10006000[0x2f])(uVar3,4,&local_1c);
    }
    if (iVar1 != 0) {
      *param_3 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_10006000
#undef local_1c

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea8
 */

bool recovered_10002ea8(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  bool bVar3;
  undefined7 extraout_var = 0;
  undefined8 uVar4;

  bVar3 = recovered_10002ef4(param_1);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    bVar3 = false;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x80);
    if (puVar2 != (uint *)0x0) {
      uVar1 = *puVar2;
      if (uVar1 < param_2) {
        param_2 = uVar1;
      }
      *puVar2 = uVar1 - param_2;
    }
    uVar4 = recovered_1000296c(DAT_10006000,param_2);
    bVar3 = (int)uVar4 != 0;
  }
  return bVar3;
}

#undef DAT_10006000

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef4
 */

bool recovered_10002ef4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined8 uVar2;
  bool bVar3;

  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 == (int *)0x0) {
    bVar3 = true;
  }
  else if (*piVar1 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = recovered_10002f34(DAT_10006000);
    bVar3 = (uint)((int)uVar2 - piVar1[1]) < 0x5c;
  }
  return bVar3;
}

#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f34
 */

undefined8 recovered_10002f34(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     ((code *)(ulong)(uint)param_1[0xb] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f5a
 */

void recovered_10002f5a(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002994(param_1,0xfd54,0x44,0x44);
  recovered_10002994(param_1,0xfda5,0xc0,0);
  return;
}


#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#define local_31 (*(byte *)(pf_stack_frame + 31))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f8c
 */

undefined8 recovered_10002f8c(undefined1 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  int iVar7;

  uVar3 = recovered_1000272f((long)param_1,4);
  uVar4 = recovered_1000272f((long)param_1,0xc);
  recovered_10002994((long)param_1,0xfe2c,0x80,0x80);
  recovered_10002994((long)param_1,0xfe34,0x80,0x80);
  uVar5 = recovered_1000272f((long)param_1,0x18);
  recovered_1000317e(DAT_10006000);
  iVar7 = 0x3e9;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) break;
    local_3c = 0;
    local_38 = 0;
    local_31 = 0;
    uVar6 = recovered_10002e0d((long)param_1,4,&local_38);
    bVar1 = 0;
    if (((int)uVar6 == 0) || (local_38 == 0xffffffff)) goto LAB_100030b4;
    uVar6 = recovered_10002e0d((long)param_1,0xc,&local_3c);
    bVar1 = 0;
    if (((int)uVar6 == 0) || (local_3c == 0xffffffff)) goto LAB_100030b4;
    recovered_10002a8c((long)param_1,0xfe2c,&local_31);
    if (extraout_EAX_01 == 0) break;
    if ((-1 < (int)(local_38 | local_3c)) && ((local_31 & 4) == 0)) {
      bVar1 = 1;
      goto LAB_100030b4;
    }
    bVar2 = recovered_10002ea8((long)param_1,10);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  bVar1 = 0;
LAB_100030b4:
  uVar6 = 0;
  bVar2 = recovered_100031a2(param_1,0);
  recovered_1000317e(DAT_10006000);
  if (((bool)((((extraout_EAX != 0 && (int)uVar4 != 0) && ((int)uVar5 != 0 && extraout_EAX_00 != 0))
              && (int)uVar3 != 0) & bVar1)) && ((int)CONCAT71(extraout_var_00,bVar2) != 0)) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    uVar6 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return uVar6;
}

#undef DAT_10006000
#undef local_31
#undef local_3c
#undef local_38

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003112
 */

void recovered_10003112(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0xb4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(long *)(param_1 + 0x88) != 0) {
      recovered_1000329a(DAT_10006000,*(long *)(param_1 + 0x88));
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      recovered_1000329a(DAT_10006000,*(long *)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000317e
 */

void recovered_1000317e(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000319e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a2
 */

bool recovered_100031a2(undefined1 *param_1,byte param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  bool bVar3;

  local_28 = 0;
  local_24 = 0;
  uVar2 = recovered_100024ef(DAT_10006000,*param_1,param_1[1],param_1[2],4,2,(long)&local_28);
  bVar3 = false;
  if (local_28 != 0xffff && (int)uVar2 != 0) {
    uVar1 = local_28 & 0xfffffbf9;
    local_28 = local_28 | 0x406;
    if (param_2 == 0) {
      local_28 = uVar1 | 0x402;
    }
    uVar2 = recovered_10002934(DAT_10006000,*param_1,param_1[1],param_1[2],4);
    if ((int)uVar2 != 0) {
      uVar2 = recovered_100024ef(DAT_10006000,*param_1,param_1[1],param_1[2],4,2,(long)&local_24);
      if ((int)uVar2 != 0) {
        bVar3 = (local_24 & 0x406) == (uint)param_2 * 4 + 0x402;
      }
    }
  }
  return bVar3;
}

#undef DAT_10006000
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000329a
 */

void recovered_1000329a(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x3c)) ||
     ((code *)(ulong)(uint)param_1[0xe] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100032bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xe])(param_2);
  return;
}


#define local_38 (*(long *)(pf_stack_frame + 40))
#define local_48 (*(byte (*)[72])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c1
 */

ulong recovered_100032c1(long param_1,int param_2,uint param_3,int param_4,uint *param_5,
                        long param_6)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  undefined8 uVar2;
  undefined7 extraout_var = 0;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  short sVar7;

  *(int *)(param_1 + 0x4c) = param_2 + 100;
  uVar4 = 0;
  local_38 = param_6;
  uVar2 = recovered_10002c6d(param_1,(uint *)0x0);
  if (((((int)uVar2 != 0) &&
       (bVar1 = recovered_1000356f(param_1,(byte)param_2,param_3),
       (int)CONCAT71(extraout_var,bVar1) != 0)) &&
      (recovered_10002994(param_1,0xfda1,0xff,(byte)param_4), extraout_EAX != 0)) &&
     ((recovered_10002994(param_1,0xfd5b,1,1), extraout_EAX_00 != 0 &&
      (recovered_10002994(param_1,0xfdb3,0xff,0x88), extraout_EAX_01 != 0)))) {
    iVar5 = 1000;
    if (param_4 == 9) {
      iVar5 = 5000;
    }
    uVar2 = recovered_100035ed(param_1,1,param_4 - 6U < 0xfffffffe,iVar5);
    if ((int)uVar2 != 0) {
      if (param_4 != 4) {
        lVar3 = 5;
        if (param_4 == 2) {
          lVar3 = 0x10;
        }
        sVar7 = -599;
        if (param_4 == 2) {
          sVar7 = -0x600;
        }
        lVar6 = 0;
        while (lVar3 != lVar6) {
          recovered_10002a8c(param_1,sVar7 + (short)lVar6,local_48 + lVar6);
          lVar6 = lVar6 + 1;
          if (extraout_EAX_02 == 0) {
            return 0;
          }
        }
        if (param_4 != 2) {
          uVar4 = recovered_10003769(local_48,param_5);
          return uVar4 & 0xff;
        }
        if (local_38 == 0) {
          return 0;
        }
        if (0x3f < local_48[0]) {
          return 0;
        }
        for (lVar3 = 0; lVar3 != 0xf; lVar3 = lVar3 + 1) {
          *(byte *)(local_38 + lVar3) = local_48[lVar3 + 1];
        }
        *(undefined1 *)(local_38 + 0xf) = 1;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

#undef local_38
#undef local_48

#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003452
 */

undefined8 recovered_10003452(long param_1,int param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  uVar1 = recovered_100032c1(param_1,param_2,param_3,param_4 * 8 + 1,&local_1c,0);
  if ((int)uVar1 != 0) {
    if ((local_1c & 0xfff9a008) == 0) {
      uVar2 = 1;
    }
    else {
      *(uint *)(param_1 + 0x50) = local_1c;
    }
  }
  return uVar2;
}

#undef local_1c

#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#define local_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000349b
 */

undefined8 recovered_1000349b(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  undefined7 extraout_var = 0;
  ulong uVar3;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  int iVar4;

  local_3c = 5000000;
  uVar2 = recovered_10002f34(DAT_10006000);
  local_38 = (undefined4)uVar2;
  *(undefined4 **)(param_1 + 0x80) = &local_3c;
  iVar4 = 0x1389;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    local_34 = 0;
    bVar1 = recovered_10002ef4(param_1);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) break;
    uVar2 = 0;
    uVar3 = recovered_100032c1(param_1,0xd,*(uint *)(param_1 + 0x48),1,&local_34,0);
    if (((int)uVar3 == 0) || (*(uint *)(param_1 + 0x50) = local_34, (local_34 & 0xfff9a008) != 0))
    goto LAB_10003555;
    bVar1 = recovered_10002ef4(param_1);
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) goto LAB_10003555;
    if ((local_34 & 0xfff9bf08) == 0x900) {
      uVar2 = 1;
      goto LAB_10003555;
    }
    bVar1 = recovered_10002ea8(param_1,1000);
  } while ((int)CONCAT71(extraout_var_01,bVar1) != 0);
  uVar2 = 0;
LAB_10003555:
  *(undefined8 *)(param_1 + 0x80) = 0;
  return uVar2;
}

#undef DAT_10006000
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000356f
 */

bool recovered_1000356f(long param_1,byte param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  uint uVar2;
  byte bVar3;
  bool bVar4;

  recovered_10002994(param_1,0xfda9,0xff,param_2 | 0x40);
  if (extraout_EAX == 0) {
    bVar4 = false;
  }
  else {
    bVar3 = 0x18;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if (uVar2 == 4) break;
      recovered_10002994(param_1,uVar2 + 0xfdaa & 0xffff,0xff,(byte)(param_3 >> (bVar3 & 0x1f)));
      bVar3 = bVar3 - 8;
      uVar1 = uVar2 + 1;
    } while (extraout_EAX_00 != 0);
    bVar4 = 3 < uVar2;
  }
  return bVar4;
}


#define local_33 (*(byte *)(pf_stack_frame + 29))
#define local_32 (*(byte *)(pf_stack_frame + 30))
#define local_31 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ed
 */

undefined8 recovered_100035ed(long param_1,byte param_2,char param_3,int param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int extraout_EAX = 0;
  uint uVar3;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  undefined8 uVar4;
  undefined7 extraout_var = 0;
  uint uVar5;
  byte bVar6;
  uint uVar7;

  uVar7 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  while (uVar5 = param_4 * 1000 - uVar7, uVar7 <= (uint)(param_4 * 1000) && uVar5 != 0) {
    uVar4 = recovered_10002c6d(param_1,(uint *)0x0);
    if (((int)uVar4 == 0) || (recovered_10002a8c(param_1,0xfdb3,&local_33), extraout_EAX == 0))
    goto LAB_10003748;
    if ((local_33 & 0x10) != 0) break;
    if (((uint)local_33 | (uint)(param_2 ^ 1) << 5 | 0xffffff9f) == 0xffffffff) {
      bVar6 = 0xe2;
      if (param_2 != 0) {
        bVar6 = 0x80;
      }
      recovered_10002a8c(param_1,0xfda3,&local_32);
      if ((extraout_EAX_00 == 0) ||
         (recovered_10002a8c(param_1,0xfda4,&local_31), extraout_EAX_01 == 0)) goto LAB_10003748;
      if ((((param_3 << 7 | 0x62U) & bVar6 & local_32) == 0) && ((local_31 & 1) == 0)) {
        return 1;
      }
      break;
    }
    uVar3 = 10;
    if (999 < uVar7) {
      uVar3 = 1000;
    }
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    bVar2 = recovered_10002ea8(param_1,uVar5);
    uVar7 = uVar7 + uVar5;
    if ((int)CONCAT71(extraout_var,bVar2) == 0) break;
  }
  recovered_10002a8c(param_1,0xfda3,&local_32);
  if ((extraout_EAX_02 != 0) && (recovered_10002a8c(param_1,0xfda4,&local_31), extraout_EAX_03 != 0)
     ) {
    *(uint *)(param_1 + 0x50) = (uint)local_31 | (uint)local_32 << 8 | (uint)local_33 << 0x10;
  }
LAB_10003748:
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  recovered_10002f5a(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return 0;
}

#undef local_33
#undef local_32
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003769
 */

undefined8 recovered_10003769(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if ((param_2 == (uint *)0x0 || param_1 == (byte *)0x0) || (0x3f < *param_1)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *param_2 = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003791
 */

int recovered_10003791(long param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = 0;
  if (param_2 - param_3 < 0x20 && (param_3 <= param_2 && param_1 != 0)) {
    uVar2 = 0x7f - param_2;
    iVar1 = 0;
    do {
      iVar1 = (uint)((*(byte *)(param_1 + (ulong)(uVar2 >> 3)) >> (param_2 & 7) & 1) != 0) +
              iVar1 * 2;
      param_2 = param_2 - 1;
      uVar2 = uVar2 + 1;
    } while (param_3 - 1 != param_2);
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e8
 */

uint recovered_100037e8(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)param_1[2] << 8 | (uint)param_1[1] << 0xb | (uint)*param_1 << 0x10 | 0x80000000;
  }
  return uVar1;
}


#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003814
 */

ulong recovered_10003814(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((DAT_10006000 != (int *)0x0) && (*DAT_10006000 == 0x54584b57)) {
    if (0xfb < (uint)DAT_10006000[2]) {
      uVar1 = DAT_10006000[0x3e];
      if (uVar1 == 0) goto LAB_1000384d;
LAB_10003854:
      uVar2 = (*(code *)(ulong)uVar1)(0x1fff);
      goto LAB_10003861;
    }
    if (0x37 < (uint)DAT_10006000[2]) {
LAB_1000384d:
      uVar1 = DAT_10006000[0xd];
      if (uVar1 != 0) goto LAB_10003854;
    }
  }
  uVar2 = 0;
LAB_10003861:
  *param_1 = uVar2;
  uVar3 = 0;
  if (uVar2 < 0xfffffffffffff001) {
    uVar3 = uVar2 + 0xfff & 0xfffffffffffff000;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_10006000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000388f
 */

undefined8 recovered_1000388f(int *param_1,undefined4 param_2,long param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100038c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,0x1000);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038c8
 */

void recovered_100038c8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  while( true ) {
    iVar1 = __atomic_exchange_n(&(*(int *)(param_1 + 0x38)),1,__ATOMIC_SEQ_CST);
    if (iVar1 == 0) break;
    do {
    } while (*(int *)(param_1 + 0x38) != 0);
  }
  return;
}


#undef DAT_100048f0
#define DAT_100048f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_10004900
#define DAT_10004900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef UNK_100048f8
#define UNK_100048f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21U)))
#undef UNK_10004908
#define UNK_10004908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_100048f0
#define _DAT_100048f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x19U)))
#undef _DAT_10004900
#define _DAT_10004900 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_10004b5d
#define str_10004b5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x286U)))
#undef str_10004b7e
#define str_10004b7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a7U)))
#undef str_10004b9e
#define str_10004b9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_10004bad
#define str_10004bad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_10004bb8
#define str_10004bb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e1U)))
#undef str_10004be2
#define str_10004be2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30bU)))
#undef str_10004c0e
#define str_10004c0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10004c2e
#define str_10004c2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x357U)))
#undef str_10004c36
#define str_10004c36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35fU)))
#undef str_10004c3d
#define str_10004c3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x366U)))
#undef uRam00000000100048f8
#define uRam00000000100048f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21U)))
#undef uRam0000000010004908
#define uRam0000000010004908 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x31U)))
#define local_318 (*(uint (*)[198])(pf_stack_frame + 24))
#define local_298 (*(undefined8 *)(pf_stack_frame + 152))
#define local_290 (*(undefined4 *)(pf_stack_frame + 160))
#define local_28c (*(undefined2 *)(pf_stack_frame + 164))
#define local_28a (*(undefined1 *)(pf_stack_frame + 166))
#define local_289 (*(undefined1 *)(pf_stack_frame + 167))
#define local_288 (*(undefined2 *)(pf_stack_frame + 168))
#define local_286 (*(undefined1 *)(pf_stack_frame + 170))
#define local_285 (*(undefined1 *)(pf_stack_frame + 171))
#define local_284 (*(undefined2 *)(pf_stack_frame + 172))
#define local_282 (*(undefined1 *)(pf_stack_frame + 174))
#define local_281 (*(undefined1 *)(pf_stack_frame + 175))
#define local_280 (*(undefined2 *)(pf_stack_frame + 176))
#define local_27e (*(undefined1 *)(pf_stack_frame + 178))
#define local_27d (*(undefined1 *)(pf_stack_frame + 179))
#define local_27c (*(undefined2 *)(pf_stack_frame + 180))
#define local_27a (*(undefined1 *)(pf_stack_frame + 182))
#define local_279 (*(char *)(pf_stack_frame + 183))
#define local_278 (*(undefined8 *)(pf_stack_frame + 184))
#define local_268 (*(undefined4 *)(pf_stack_frame + 200))
#define local_264 (*(undefined2 *)(pf_stack_frame + 204))
#define local_262 (*(undefined1 *)(pf_stack_frame + 206))
#define local_261 (*(char *)(pf_stack_frame + 207))
#define local_260 (*(undefined8 *)(pf_stack_frame + 208))
#define local_250 (*(undefined8 *)(pf_stack_frame + 224))
#define local_90 (*(long *)(pf_stack_frame + 672))
#define local_88 (*(ulong *)(pf_stack_frame + 680))
#define local_7c (*(uint *)(pf_stack_frame + 692))
#define local_78 (*(ulong *)(pf_stack_frame + 696))
#define local_6c (*(uint *)(pf_stack_frame + 708))
#define local_68 (*(ulong *)(pf_stack_frame + 712))
#define local_60 (*(uint (*)[24])(pf_stack_frame + 720))
#define uStack_29b (*(ushort *)(pf_stack_frame + 149))
#define bStack_299 (*(byte *)(pf_stack_frame + 151))
#define local_50 (*(uint *)(pf_stack_frame + 736))
#define local_4c (*(uint *)(pf_stack_frame + 740))
#define local_44 (*(uint *)(pf_stack_frame + 748))
#define local_40 (*(int * *)(pf_stack_frame + 752))
#define local_38 (*(uint *)(pf_stack_frame + 760))
#define local_34 (*(byte *)(pf_stack_frame + 764))
#define local_33 (*(byte *)(pf_stack_frame + 765))
#define local_32 (*(byte *)(pf_stack_frame + 766))
#define local_31 (*(byte *)(pf_stack_frame + 767))
#define uStack_270 (*(undefined8 *)(pf_stack_frame + 192))
#define uStack_258 (*(undefined8 *)(pf_stack_frame + 216))
#define bStack_48 (*(byte *)(pf_stack_frame + 744))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100038e3(uint param_1,ulong param_2,long param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  uint uVar7;
  int extraout_EAX_03 = 0;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;

  pbVar12 = &DAT_10006010 + (ulong)param_1 * 0xd0;
  uVar17 = 0;
  if (DAT_10006008 <= param_1) {
    pbVar12 = (byte *)0x0;
  }
  if (param_3 != 0 && param_1 < DAT_10006008) {
    local_90 = param_3;
    local_68 = param_2;
    recovered_100038c8((long)pbVar12);
    pbVar12[0x54] = 0;
    pbVar12[0x55] = 0;
    pbVar12[0x56] = 0;
    pbVar12[0x57] = 0;
    uVar17 = 0;
    if (*(int *)(pbVar12 + 0x60) != 0) {
      if (((uint)local_68 < *(uint *)(pbVar12 + 0x3c)) &&
         (param_4 - 1 < *(uint *)(pbVar12 + 0x3c) - (uint)local_68)) {
        bVar3 = (ulong)param_4 + (local_68 & 0xffffffff) < 0x800001 | pbVar12[0x45];
        if ((bVar3 & (byte)param_5) == 1) {
          if (pbVar12[0x46] == 0) {
LAB_1000399d:
            local_7c = param_5 & 0xff;
            uVar14 = 0;
            local_88 = (ulong)param_4;
            local_6c = param_5;
LAB_100039b3:
            uVar17 = 1;
            uVar13 = (uint)uVar14;
            uVar5 = (uint)local_88 - uVar13;
            if (uVar13 <= (uint)local_88 && uVar5 != 0) {
              if (((char)local_6c == '\0') && (*(int *)(pbVar12 + 0xb0) != 0)) {
                uVar7 = 8;
                if (uVar5 < 8) {
                  uVar7 = uVar5;
                }
                if (uVar5 < 2) goto LAB_10003bb1;
                uVar5 = recovered_100037e8(pbVar12);
                pbVar12[0x4c] = 0x3e;
                pbVar12[0x4d] = 1;
                pbVar12[0x4e] = 0;
                pbVar12[0x4f] = 0;
                iVar8 = 0;
                uVar17 = uVar7;
                if ((*(int *)(pbVar12 + 0xbc) == 0) || (*(int *)(pbVar12 + 0xb4) != 0))
                goto LAB_10003bd7;
                uVar6 = (int)local_68 + uVar13;
                if ((0x7fffff < uVar6) && (pbVar12[0x45] == 0)) goto LAB_10003bd7;
                local_40 = (int *)CONCAT71(PF_PART7(local_40, 1),pbVar12[0x45]);
                local_78 = (ulong)uVar6;
                local_44 = uVar5;
                uVar9 = recovered_10002c6d((long)pbVar12,(uint *)0x0);
                if ((int)uVar9 != 0) {
                  lVar15 = uVar14 * 0x200 + local_90;
                  local_60[3] = uVar7 - 1;
                  local_60[2] = uVar7 << 9;
                  local_38 = uVar7 << 9 | 0xa0000000;
                  iVar8 = (int)local_78 << 9;
                  if ((char)local_40 != '\0') {
                    iVar8 = (int)local_78;
                  }
                  local_298 = 0x80fe340080fe2c;
                  local_290 = 0x52fffda9;
                  local_28c = 0xfdaa;
                  local_28a = 0xff;
                  local_289 = (char)((uint)iVar8 >> 0x18);
                  local_288 = 0xfdab;
                  local_286 = 0xff;
                  local_285 = (char)((uint)iVar8 >> 0x10);
                  local_284 = 0xfdac;
                  local_282 = 0xff;
                  local_281 = (char)((uint)iVar8 >> 8);
                  local_280 = 0xfdad;
                  local_27e = 0xff;
                  local_27d = (char)iVar8;
                  local_27c = 0xfdb1;
                  local_27a = 0xff;
                  local_279 = (char)uVar7;
                  local_278 = _DAT_100048f0;
                  uStack_270 = uRam00000000100048f8;
                  local_268 = 0xfffe28;
                  local_264 = 0xfe29;
                  local_262 = 0xff;
                  local_261 = (char)uVar7 * '\x02';
                  local_260 = _DAT_10004900;
                  uStack_258 = uRam0000000010004908;
                  local_250 = 0x8efffdb321fffda1;
                  local_50 = 0;
                  lVar16 = 3;
                  do {
                    if (lVar16 == 0x53) {
                      uVar10 = recovered_10004665(*(long *)(pbVar12 + 0xa0),&local_50,2,0xfdb3,0x40,
                                                  0x40);
                      if ((((char)uVar10 != '\0') &&
                          (uVar10 = recovered_10004665(*(long *)(pbVar12 + 0xa0),&local_50,0,0xfdb3,
                                                       0,0), uVar5 = local_44, (char)uVar10 != '\0')
                          ) && (0xfffffeff < local_50 - 0x101)) {
                        pbVar12[200] = 0;
                        local_40 = (int *)(ulong)local_50;
                        recovered_1000463a(DAT_10006000,local_44,*(undefined8 *)(pbVar12 + 0x98),
                                           local_60[2]);
                        recovered_1000463a(DAT_10006000,uVar5,*(undefined8 *)(pbVar12 + 0xa0),0x1000
                                          );
                        recovered_1000317e(DAT_10006000);
                        uVar9 = recovered_1000272f((long)pbVar12,0x14);
                        if ((((int)uVar9 == 0) ||
                            (uVar9 = recovered_1000272f((long)pbVar12,0), (int)uVar9 == 0)) ||
                           ((uVar9 = recovered_1000272f((long)pbVar12,8), (int)uVar9 == 0 ||
                            (uVar9 = recovered_1000272f((long)pbVar12,0x18), (int)uVar9 == 0))))
                        goto LAB_10003fb7;
                        recovered_1000317e(DAT_10006000);
                        pbVar12[0xb4] = 1;
                        pbVar12[0xb5] = 0;
                        pbVar12[0xb6] = 0;
                        pbVar12[0xb7] = 0;
                        bVar4 = recovered_100031a2(pbVar12,1);
                        if ((((int)CONCAT71(extraout_var,bVar4) == 0) ||
                            (uVar9 = recovered_1000272f((long)pbVar12,4), (int)uVar9 == 0)) ||
                           (uVar9 = recovered_1000272f((long)pbVar12,0xc), (int)uVar9 == 0))
                        goto LAB_10003fb7;
                        local_298 = CONCAT44(PF_PART4(local_298, 4),5000000);
                        uVar9 = recovered_10002f34(DAT_10006000);
                        local_298 = CONCAT44((int)uVar9,(undefined4)local_298);
                        *(undefined8 **)(pbVar12 + 0x80) = &local_298;
                        local_38 = 0;
                        uVar5 = 0;
                        goto LAB_10003d8b;
                      }
                      break;
                    }
                    uVar10 = recovered_10004665(*(long *)(pbVar12 + 0xa0),&local_50,1,
                                                (uint)*(ushort *)((long)local_318 + lVar16 + 0x7d),
                                                *(byte *)((long)local_318 + lVar16 + 0x7f),
                                                *(byte *)((long)local_318 + lVar16 + 0x80));
                    lVar16 = lVar16 + 4;
                  } while ((char)uVar10 != '\0');
                }
                goto LAB_10003fcb;
              }
LAB_10003bb1:
              uVar10 = recovered_10004390((long)pbVar12,uVar13 + (int)local_68,
                                          uVar14 * 0x200 + local_90,(byte)local_7c);
              iVar8 = (int)uVar10;
              goto LAB_10003bd7;
            }
          }
        }
        else if (bVar3 != 0) goto LAB_1000399d;
      }
    }
LAB_10004374:
    pbVar12[0x38] = 0;
    pbVar12[0x39] = 0;
    pbVar12[0x3a] = 0;
    pbVar12[0x3b] = 0;
  }
  return uVar17;
LAB_10003d8b:
  bVar4 = recovered_10002ef4((long)pbVar12);
  if ((int)CONCAT71(extraout_var_00,bVar4) == 0) goto LAB_10003f75;
  local_318[0] = 0;
  local_31 = 0;
  uVar9 = recovered_10002c6d((long)pbVar12,local_318);
  if ((int)uVar9 == 0) goto LAB_10003faf;
  uVar7 = local_318[0];
  if ((local_318[0] & 0x11000000) != 0) {
LAB_10003fac:
    *(uint *)(pbVar12 + 0x50) = uVar7;
    goto LAB_10003faf;
  }
  if ((local_318[0] >> 0x1d & 1) != 0) {
    local_34 = 0;
    local_33 = 0;
    local_60[0] = 0;
    local_32 = 0;
    local_4c = 0;
    recovered_10002a8c((long)pbVar12,0xfdb3,&local_31);
    if (((((extraout_EAX == 0) ||
          (uVar9 = recovered_10002e0d((long)pbVar12,4,local_60), (int)uVar9 == 0)) ||
         (local_60[0] == 0xffffffff)) ||
        ((uVar9 = recovered_10002e0d((long)pbVar12,0xc,&local_4c), (int)uVar9 == 0 ||
         (local_4c == 0xffffffff)))) ||
       (recovered_10002a8c((long)pbVar12,0xfe2c,&local_32), extraout_EAX_00 == 0))
    goto LAB_10003faf;
    if ((local_31 & 0x10) != 0) {
      uVar7 = (uint)local_31 << 0x10;
      goto LAB_10003fac;
    }
    if ((((local_31 & 0x40) != 0) && (-1 < (int)(local_4c | local_60[0]))) && ((local_32 & 4) == 0))
    {
      recovered_10002a8c((long)pbVar12,0xfda3,&local_34);
      if (((extraout_EAX_01 == 0) ||
          (recovered_10002a8c((long)pbVar12,0xfda4,&local_33), extraout_EAX_02 == 0)) ||
         (*(uint *)(pbVar12 + 0x50) = (uint)local_34 << 8 | (uint)local_31 << 0x10 | (uint)local_33,
         (local_33 & 1) != 0 || (local_34 & 0xe2) != 0)) goto LAB_10003faf;
      local_40 = DAT_10006000;
      uVar7 = recovered_100037e8(pbVar12);
      uVar9 = 0x1000;
      recovered_1000463a(local_40,uVar7,*(undefined8 *)(pbVar12 + 0xa0),0x1000);
      recovered_1000317e(DAT_10006000);
      bVar3 = *(byte *)(*(long *)(pbVar12 + 0xa0) + 1);
      uVar7 = (uint)bVar3;
      pbVar12[200] = bVar3;
      if ((bVar3 & 0x10) != 0) {
        pbVar12[0x4c] = 0x7d;
        pbVar12[0x4d] = 1;
        pbVar12[0x4e] = 0;
        pbVar12[0x4f] = 0;
        goto LAB_10003fac;
      }
      local_38 = (uint)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      if ((bVar3 & 0x40) != 0) {
        uVar9 = recovered_1000272f((long)pbVar12,0x14);
        pbVar12[0x80] = 0;
        pbVar12[0x81] = 0;
        pbVar12[0x82] = 0;
        pbVar12[0x83] = 0;
        pbVar12[0x84] = 0;
        pbVar12[0x85] = 0;
        pbVar12[0x86] = 0;
        pbVar12[0x87] = 0;
        if ((int)uVar9 == 0) goto LAB_10003fb7;
        lVar16 = 0;
        goto LAB_10004002;
      }
    }
  }
  *(uint *)(pbVar12 + 0x50) = local_318[0];
  uVar7 = 1000;
  if (uVar5 < 1000) {
    uVar7 = 10;
  }
  local_40 = (int *)CONCAT44(PF_PART4(local_40, 4),uVar7);
  bVar4 = recovered_10002ea8((long)pbVar12,uVar7);
  if ((int)CONCAT71(extraout_var_01,bVar4) == 0) goto LAB_10003f75;
  uVar5 = uVar5 + (int)local_40;
  goto LAB_10003d8b;
  while( true ) {
    recovered_10002a8c((long)pbVar12,(short)lVar16 - 599,(byte *)((long)local_60 + lVar16 + 0x14));
    lVar16 = lVar16 + 1;
    if (extraout_EAX_03 == 0) break;
LAB_10004002:
    if (lVar16 == 5) {
      uVar5 = 0;
      if ((byte)local_4c < 0x40) {
        uVar7 = (uint)bStack_48 | (PF_PART3(local_4c, 1) & 0xff0000) >> 8 | (PF_PART3(local_4c, 1) & 0xff00) << 8;
        uVar6 = CONCAT13(bStack_48,PF_PART3(local_4c, 1)) << 0x18;
        uVar5 = uVar7 | uVar6;
        if ((uVar7 & 0xfff9a008) == 0 && uVar6 == 0) {
          uVar9 = recovered_10003452((long)pbVar12,0xc,0,1);
          if (((int)uVar9 != 0) && (uVar9 = recovered_1000349b((long)pbVar12), (int)uVar9 != 0)) {
            pbVar12[0x4c] = 0x4a;
            pbVar12[0x4d] = 1;
            pbVar12[0x4e] = 0;
            pbVar12[0x4f] = 0;
            uVar9 = recovered_10002f8c(pbVar12);
            uVar5 = local_44;
            if ((int)uVar9 != 0) {
              recovered_1000463a(DAT_10006000,local_44,*(undefined8 *)(pbVar12 + 0x98),local_60[2]);
              recovered_1000463a(DAT_10006000,uVar5,*(undefined8 *)(pbVar12 + 0xa0),0x1000);
              recovered_1000317e(DAT_10006000);
              pbVar12[200] = *(byte *)(*(long *)(pbVar12 + 0xa0) + 1);
              if ((1 < *(uint *)(pbVar12 + 0xc0)) ||
                 ((*(uint *)(pbVar12 + 0xc0) == 1 && (*(int *)(pbVar12 + 0xc4) == (int)local_78))))
              goto LAB_100040e3;
              local_60[0] = 0;
              local_60[1] = local_60[3];
              local_40 = (int *)0x0;
              goto LAB_1000412d;
            }
          }
          break;
        }
      }
      *(uint *)(pbVar12 + 0x50) = uVar5;
      break;
    }
  }
LAB_10003fb7:
  uVar2 = *(undefined4 *)(pbVar12 + 0x50);
  recovered_10002f8c(pbVar12);
  *(undefined4 *)(pbVar12 + 0x50) = uVar2;
LAB_10003fcb:
  iVar8 = 0;
LAB_10003bd7:
  if (iVar8 != 1) {
    uVar17 = 0;
    if (iVar8 == 0) {
      if (*(int *)(pbVar12 + 0x54) == 0) {
        pcVar11 = str_10004b7e;
        if ((char)local_6c != '\0') {
          pcVar11 = str_10004b5d;
        }
        recovered_10002793((undefined1 *)&local_298,0x80,pcVar11);
        recovered_10002863((long)&local_298,0x80,local_68);
        recovered_1000280f((long)&local_298,0x80,str_10004b9e);
        recovered_10002863((long)&local_298,0x80,uVar14);
        recovered_1000280f((long)&local_298,0x80,str_10004bad);
        recovered_10002863((long)&local_298,0x80,local_88);
        recovered_1000253c(pbVar12,(char *)&local_298);
      }
      recovered_100029b5(pbVar12);
    }
    goto LAB_10004374;
  }
  uVar14 = (ulong)(uVar17 + uVar13);
  goto LAB_100039b3;
LAB_1000412d:
  if (local_40 == (int *)0x2) goto LAB_10004274;
  uVar5 = local_60[(long)local_40];
  local_44 = uVar5 + (int)local_78;
  uVar10 = recovered_10004390((long)pbVar12,local_44,(long)&local_298,0);
  if ((int)uVar10 != 1) {
    recovered_10002793((undefined1 *)local_318,0x60,str_10004be2);
    recovered_10002863((long)local_318,0x60,(ulong)local_44);
LAB_1000426a:
    recovered_1000253c(pbVar12,(char *)local_318);
    goto LAB_10003fb7;
  }
  iVar8 = 0;
  for (uVar10 = 0; uVar10 != 0x200; uVar10 = uVar10 + 1) {
    bVar3 = *(byte *)((ulong)(uVar5 << 9) + *(long *)(pbVar12 + 0x98) + uVar10);
    bVar1 = *(byte *)((long)local_318 + uVar10 + 0x80);
    if (bVar3 != bVar1) {
      local_38 = (uint)bVar3;
      local_60[3] = (uint)bVar1;
      pbVar12[0x4c] = 0x72;
      pbVar12[0x4d] = 1;
      pbVar12[0x4e] = 0;
      pbVar12[0x4f] = 0;
      *(uint *)(pbVar12 + 0x50) = (uint)CONCAT11(bVar1,bVar3) - iVar8;
      recovered_10002793((undefined1 *)local_318,0x80,str_10004c0e);
      recovered_10002863((long)local_318,0x80,(ulong)local_44);
      recovered_1000280f((long)local_318,0x80,str_10004c2e);
      recovered_10002863((long)local_318,0x80,uVar10 & 0xffffffff);
      recovered_1000280f((long)local_318,0x80,str_10004c36);
      recovered_100027b2((long)local_318,0x80,local_60[3],2);
      recovered_1000280f((long)local_318,0x80,str_10004c3d);
      recovered_100027b2((long)local_318,0x80,local_38,2);
      goto LAB_1000426a;
    }
    iVar8 = iVar8 + -0x10000;
  }
  local_40 = (int *)((long)local_40 + 1);
  goto LAB_1000412d;
LAB_10004274:
  if (*(int *)(pbVar12 + 0xc0) == 0) {
    *(int *)(pbVar12 + 0xc4) = (int)local_78;
  }
  *(int *)(pbVar12 + 0xc0) = *(int *)(pbVar12 + 0xc0) + 1;
LAB_100040e3:
  for (uVar10 = 0; local_60[2] != uVar10; uVar10 = uVar10 + 1) {
    *(undefined1 *)(lVar15 + uVar10) = *(undefined1 *)(*(long *)(pbVar12 + 0x98) + uVar10);
  }
  iVar8 = 1;
  goto LAB_10003bd7;
LAB_10003f75:
  if (((local_38 & 1) != 0) &&
     (bVar4 = recovered_10002ef4((long)pbVar12), (int)CONCAT71(extraout_var_02,bVar4) == 0)) {
    pbVar12[0x4c] = 0x7c;
    pbVar12[0x4d] = 1;
    pbVar12[0x4e] = 0;
    pbVar12[0x4f] = 0;
    *(uint *)(pbVar12 + 0x50) = (uint)pbVar12[200];
    recovered_1000253c(pbVar12,str_10004bb8);
  }
LAB_10003faf:
  pbVar12[0x80] = 0;
  pbVar12[0x81] = 0;
  pbVar12[0x82] = 0;
  pbVar12[0x83] = 0;
  pbVar12[0x84] = 0;
  pbVar12[0x85] = 0;
  pbVar12[0x86] = 0;
  pbVar12[0x87] = 0;
  goto LAB_10003fb7;
}

#undef DAT_100048f0
#undef DAT_10004900
#undef DAT_10006000
#undef DAT_10006008
#undef DAT_10006010
#undef UNK_100048f8
#undef UNK_10004908
#undef _DAT_100048f0
#undef _DAT_10004900
#undef str_10004b5d
#undef str_10004b7e
#undef str_10004b9e
#undef str_10004bad
#undef str_10004bb8
#undef str_10004be2
#undef str_10004c0e
#undef str_10004c2e
#undef str_10004c36
#undef str_10004c3d
#undef uRam00000000100048f8
#undef uRam0000000010004908
#undef local_318
#undef local_298
#undef local_290
#undef local_28c
#undef local_28a
#undef local_289
#undef local_288
#undef local_286
#undef local_285
#undef local_284
#undef local_282
#undef local_281
#undef local_280
#undef local_27e
#undef local_27d
#undef local_27c
#undef local_27a
#undef local_279
#undef local_278
#undef local_268
#undef local_264
#undef local_262
#undef local_261
#undef local_260
#undef local_250
#undef local_90
#undef local_88
#undef local_7c
#undef local_78
#undef local_6c
#undef local_68
#undef local_60
#undef uStack_29b
#undef bStack_299
#undef local_50
#undef local_4c
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef uStack_270
#undef uStack_258
#undef bStack_48

#define local_39 (*(byte *)(pf_stack_frame + 23))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004390
 */

ulong recovered_10004390(long param_1,uint param_2,long param_3,byte param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_EAX = 0;
  int extraout_EAX_00 = 0;
  int extraout_EAX_01 = 0;
  int extraout_EAX_02 = 0;
  int extraout_EAX_03 = 0;
  int extraout_EAX_04 = 0;
  int extraout_EAX_05 = 0;
  int extraout_EAX_06 = 0;
  int extraout_EAX_07 = 0;
  int extraout_EAX_08 = 0;
  undefined8 uVar2;
  undefined7 extraout_var = 0;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;

  local_34 = 0;
  if ((0x7fffff < param_2 & (*(byte *)(param_1 + 0x45) ^ 1)) != 0) {
    return 0;
  }
  uVar5 = param_2 << 9;
  if (*(byte *)(param_1 + 0x45) != 0) {
    uVar5 = param_2;
  }
  uVar2 = recovered_10002c6d(param_1,&local_34);
  if ((int)uVar2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0xd9;
    bVar1 = recovered_1000356f(param_1,0x11,uVar5);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      return 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x46) != '\0') {
      return 2;
    }
    if ((local_34 & 0x80000) != 0) {
      return 2;
    }
    uVar2 = recovered_1000349b(param_1);
    if ((int)uVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0xe0;
    uVar2 = recovered_10003452(param_1,0x18,uVar5,0);
    if ((int)uVar2 == 0) {
      return 0;
    }
    lVar6 = 0;
    while (lVar6 != 0x200) {
      recovered_10002994(param_1,(int)lVar6 + 64000U & 0xffff,0xff,*(byte *)(param_3 + lVar6));
      lVar6 = lVar6 + 1;
      if (extraout_EAX == 0) {
        return 0;
      }
    }
  }
  recovered_10002994(param_1,0xfdaf,0xff,0);
  if (extraout_EAX_00 == 0) {
    return 0;
  }
  recovered_10002994(param_1,0xfdb0,0xff,2);
  if (extraout_EAX_01 == 0) {
    return 0;
  }
  recovered_10002994(param_1,0xfdb1,0xff,1);
  if (extraout_EAX_02 == 0) {
    return 0;
  }
  recovered_10002994(param_1,0xfdb2,0xff,0);
  if (extraout_EAX_03 == 0) {
    return 0;
  }
  recovered_10002994(param_1,0xfd5b,1,1);
  if (extraout_EAX_04 == 0) {
    return 0;
  }
  bVar4 = 0x20;
  if (param_4 == 0) {
    bVar4 = 1;
  }
  recovered_10002994(param_1,0xfda1,0xff,bVar4);
  if (extraout_EAX_05 == 0) {
    return 0;
  }
  bVar4 = 0x8c;
  if (param_4 != 0) {
    bVar4 = 0x81;
  }
  recovered_10002994(param_1,0xfdb3,0xff,bVar4);
  if (extraout_EAX_06 == 0) {
    return 0;
  }
  uVar2 = recovered_100035ed(param_1,0,param_4 ^ 1,5000);
  if ((int)uVar2 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    uVar3 = recovered_1000349b(param_1);
    return uVar3 & 0xffffffff;
  }
  lVar6 = 0;
  while (lVar6 != 5) {
    recovered_10002a8c(param_1,(short)lVar6 - 599,&local_39 + lVar6);
    lVar6 = lVar6 + 1;
    if (extraout_EAX_07 == 0) {
      return 0;
    }
  }
  if ((0x3f < local_39) ||
     (uVar5 = local_38 >> 0x18 | (local_38 & 0xff0000) >> 8 | (local_38 & 0xff00) << 8,
     local_34 = uVar5 | local_38 << 0x18, (uVar5 & 0xfff9a008) != 0 || local_38 << 0x18 != 0)) {
    *(uint *)(param_1 + 0x50) = local_34;
    return 0;
  }
  lVar6 = 0;
  do {
    if (lVar6 == 0x200) {
      return 1;
    }
    recovered_10002a8c(param_1,(short)lVar6 - 0x600,(byte *)(param_3 + lVar6));
    lVar6 = lVar6 + 1;
  } while (extraout_EAX_08 != 0);
  return 0;
}

#undef local_39
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000463a
 */

void recovered_1000463a(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10004661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004665
 */

ulong recovered_10004665(long param_1,uint *param_2,int param_3,uint param_4,byte param_5,
                        byte param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  if (param_2 == (uint *)0x0 || param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*param_2 < 0x100) {
      for (iVar2 = 0; iVar2 != 4; iVar2 = iVar2 + 1) {
        *(char *)(param_1 + (ulong)(iVar2 + *param_2 * 4)) =
             (char)(((uint)param_6 |
                    (uint)param_5 << 8 | (param_4 & 0x3fff) << 0x10 | param_3 << 0x1e) >>
                   ((byte)uVar1 & 0x1f));
        uVar1 = (ulong)((int)uVar1 + 8);
      }
      *param_2 = *param_2 + 1;
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1;
}


#undef DAT_10006000
#define DAT_10006000 (*(int * *)(((uintptr_t)pf_module_state + 0x1729U)))
#undef DAT_10006008
#define DAT_10006008 (*(uint *)(((uintptr_t)pf_module_state + 0x1731U)))
#undef DAT_10006010
#define DAT_10006010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1739U)))
#undef str_10004c69
#define str_10004c69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x392U)))
#undef str_10004c84
#define str_10004c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3adU)))
#undef str_10004c91
#define str_10004c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_10004cb3
#define str_10004cb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10004d24
#define str_10004d24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44dU)))
#undef str_10004d47
#define str_10004d47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x470U)))
#undef str_10004d78
#define str_10004d78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a1U)))
#undef str_10004d8f
#define str_10004d8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b8U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046ce
 */

undefined8 recovered_100046ce(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;

  uVar2 = 0;
  if (DAT_10006008 != 0 && (DAT_10006000 != (int *)0x0 && param_1 != (undefined8 *)0x0)) {
    puVar6 = &DAT_10006010;
    lVar5 = 0;
    uVar7 = 0;
    uVar9 = 0;
    local_34 = 0;
    for (uVar8 = 0; uVar8 < DAT_10006008; uVar8 = uVar8 + 1) {
      recovered_100038c8((long)puVar6);
      if (*(int *)(puVar6 + 0x60) != 0) {
        uVar2 = recovered_10002c6d((long)puVar6,(uint *)0x0);
        if ((int)uVar2 == 0) {
          recovered_100029b5(puVar6);
        }
        if (*(int *)(puVar6 + 0x60) != 0) {
          uVar7 = uVar7 + 1;
          local_34 = (local_34 + 1) - (uint)(*(int *)(puVar6 + 0xb0) == 0);
          lVar5 = lVar5 + (ulong)*(uint *)(puVar6 + 0x3c);
          if (uVar9 < *(uint *)(puVar6 + 0x58)) {
            uVar9 = *(uint *)(puVar6 + 0x58);
          }
        }
      }
      *(undefined4 *)(puVar6 + 0x38) = 0;
      puVar6 = puVar6 + 0xd0;
    }
    recovered_100007e0((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    uVar1 = 9;
    if (uVar7 == DAT_10006008) {
      uVar1 = 0x13;
    }
    *(undefined4 *)(param_1 + 2) = uVar1;
    uVar2 = recovered_10002f34(DAT_10006000);
    *(int *)(param_1 + 3) = (int)uVar2;
    *(uint *)((long)param_1 + 0x44) = DAT_10006008;
    *(uint *)(param_1 + 9) = uVar7;
    *(int *)((long)param_1 + 0x4c) = (int)lVar5;
    *(int *)(param_1 + 10) = (int)((ulong)lVar5 >> 0x20);
    recovered_10002793((undefined1 *)((long)param_1 + 0x54),0x40,str_10004c69);
    recovered_10002793((undefined1 *)((long)param_1 + 0x94),0x40,str_10004c84);
    pcVar3 = str_10004c91;
    if (local_34 == 0) {
      pcVar3 = str_10004cb3;
    }
    pcVar4 = str_10004d24;
    if (uVar7 != 0) {
      pcVar4 = pcVar3;
    }
    recovered_10002793((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar4);
    puVar6 = (undefined1 *)((long)param_1 + 0x134);
    recovered_10002793(puVar6,0xc0,str_10004d47);
    recovered_10002863((long)puVar6,0xc0,(ulong)uVar9);
    recovered_1000280f((long)puVar6,0xc0,str_10004d78);
    recovered_10002863((long)puVar6,0xc0,(ulong)local_34);
    recovered_1000280f((long)puVar6,0xc0,str_10004d8f);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_10006000
#undef DAT_10006008
#undef DAT_10006010
#undef str_10004c69
#undef str_10004c84
#undef str_10004c91
#undef str_10004cb3
#undef str_10004d24
#undef str_10004d47
#undef str_10004d78
#undef str_10004d8f
#undef local_34

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
