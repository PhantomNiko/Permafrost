/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008000;
}

#undef DAT_10008000

#undef DAT_10004290
#define DAT_10004290 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef DAT_1000c056
#define DAT_1000c056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dd2U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7e3cU)))
#undef UNK_10004298
#define UNK_10004298 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10004290
#define _DAT_10004290 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef str_10004679
#define str_10004679 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_10004694
#define str_10004694 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x410U)))
#undef str_100046a1
#define str_100046a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_100046c3
#define str_100046c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_100046e4
#define str_100046e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x460U)))
#undef uRam0000000010004298
#define uRam0000000010004298 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#define local_22c (*(undefined4 *)(pf_stack_frame + 52))
#define local_224 (*(undefined4 *)(pf_stack_frame + 60))
#define local_220 (*(undefined8 *)(pf_stack_frame + 64))
#define local_208 (*(code * *)(pf_stack_frame + 88))
#define uStack_244 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_23c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_234 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_228 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_218 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1f8 (*(undefined1 (*)[504])(pf_stack_frame + 104))
#define auStack_1b8 (*(undefined1 (*)[440])(pf_stack_frame + 168))
#define auStack_178 (*(undefined1 (*)[376])(pf_stack_frame + 232))
#define auStack_118 (*(undefined1 (*)[280])(pf_stack_frame + 328))
#define local_250 (*(byte (*)[592])(pf_stack_frame + 16))
#define local_24c (*(uint *)(pf_stack_frame + 20))
#define local_248 (*(undefined4 *)(pf_stack_frame + 24))
#define local_240 (*(undefined4 *)(pf_stack_frame + 32))
#define local_238 (*(undefined4 *)(pf_stack_frame + 40))
#define local_230 (*(undefined4 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  int *piVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8) && DAT_1000c008 == (int *)0x0)) {
    DAT_1000c000 = 0;
    DAT_1000c008 = api;
    recovered_100007e0(&DAT_1000c010,0x340);
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      for (uVar10 = 0; uVar10 != 0x100; uVar10 = uVar10 + 1) {
        for (uVar11 = 0; uVar11 != 0x20; uVar11 = uVar11 + 1) {
          uVar4 = recovered_10001c88(api,(ulong)(uVar10 & 0xff),(ulong)(uVar11 & 0xff),0,
                                     (undefined1 *)&local_220);
          if ((int)uVar4 != 0) {
            recovered_100007f8(api,(byte *)&local_220);
            if (((int8_t)PF_PART1(uStack_218, 4)) < '\0') {
              for (uVar12 = 1; uVar12 != 8; uVar12 = uVar12 + 1) {
                uVar4 = recovered_10001c88(api,(ulong)(uVar10 & 0xff),(ulong)(uVar11 & 0xff),
                                           (ulong)(uVar12 & 0xff),local_250);
                if ((int)uVar4 != 0) {
                  recovered_100007f8(api,local_250);
                }
              }
            }
          }
        }
      }
    }
    if (DAT_1000c000 != 0) {
      recovered_100007e0(local_250,0x30);
      bVar6 = 0;
      pbVar8 = &DAT_1000c056;
      local_24c = DAT_1000c000;
      uVar5 = (ulong)DAT_1000c000;
      for (uVar9 = uVar5; uVar9 != 0; uVar9 = uVar9 - 1) {
        if ((bVar6 & 1) == 0) {
          bVar6 = *pbVar8 ^ 1;
        }
        else {
          bVar6 = 1;
        }
        pbVar8 = pbVar8 + 0xd0;
      }
      bVar2 = false;
      local_250[0] = 3;
      local_250[1] = 0;
      local_250[2] = 0;
      local_250[3] = 0;
      local_240 = ((uintptr_t)&recovered_10001ab8);
      if ((bVar6 & 1) == 0) {
        local_240 = 0;
      }
      local_248 = ((uintptr_t)&recovered_10001a10);
      uStack_244 = ((uintptr_t)&recovered_10001ab0);
      uStack_23c = ((uintptr_t)&recovered_10001ac0);
      local_238 = ((uintptr_t)&recovered_10001b34);
      uStack_234 = 0;
      local_230 = 0;
      local_22c = 0;
      uStack_228 = 0;
      piVar7 = &DAT_1000c0c0;
      local_224 = 0;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (bVar2) {
          bVar2 = true;
        }
        else {
          bVar2 = *piVar7 != 0;
        }
        piVar7 = piVar7 + 0x34;
      }
      recovered_100007e0((undefined1 *)&local_220,0x1c8);
      uStack_218 = uRam0000000010004298;
      local_220 = _DAT_10004290;
      local_208 = recovered_10003d2c;
      recovered_10001ffc(auStack_1f8,0x40,str_10004679);
      recovered_10001ffc(auStack_1b8,0x40,str_10004694);
      pcVar1 = str_100046a1;
      if (!bVar2) {
        pcVar1 = str_100046c3;
      }
      recovered_10001ffc(auStack_178,0x60,pcVar1);
      recovered_10001ffc(auStack_118,0xc0,str_100046e4);
      if (((DAT_1000c008 != (int *)0x0) && (*DAT_1000c008 == 0x54584b57)) &&
         (((0xef < (uint)DAT_1000c008[2] &&
           ((((DAT_1000c008[0x3b] != 0 &&
              (iVar3 = (*(code *)(ulong)(uint)DAT_1000c008[0x3b])(&local_220), iVar3 != 0)) &&
             (*(int *)api == 0x54584b57)) &&
            ((0xd3 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xd0) != 0)))))) &&
          (iVar3 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_250), iVar3 != 0)))) {
        return 1;
      }
    }
    pbVar8 = &DAT_1000c010;
    for (uVar9 = 0; uVar9 < DAT_1000c000; uVar9 = uVar9 + 1) {
      recovered_10001c34(pbVar8);
      pbVar8 = pbVar8 + 0xd0;
    }
    DAT_1000c000 = 0;
    DAT_1000c008 = (int *)0x0;
  }
  return 0;
}

#undef DAT_10004290
#undef DAT_1000c000
#undef DAT_1000c008
#undef DAT_1000c010
#undef DAT_1000c056
#undef DAT_1000c0c0
#undef UNK_10004298
#undef _DAT_10004290
#undef str_10004679
#undef str_10004694
#undef str_100046a1
#undef str_100046c3
#undef str_100046e4
#undef uRam0000000010004298
#undef local_22c
#undef local_224
#undef local_220
#undef local_208
#undef uStack_244
#undef uStack_23c
#undef uStack_234
#undef uStack_228
#undef uStack_218
#undef auStack_1f8
#undef auStack_1b8
#undef auStack_178
#undef auStack_118
#undef local_250
#undef local_24c
#undef local_248
#undef local_240
#undef local_238
#undef local_230

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007e0
 */

void recovered_100007e0(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


#undef DAT_100042a0
#define DAT_100042a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100042a8
#define DAT_100042a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100042b0
#define DAT_100042b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_100042b8
#define DAT_100042b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_100042c0
#define DAT_100042c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_100042c8
#define DAT_100042c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_100042d0
#define DAT_100042d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_100042d8
#define DAT_100042d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_100042e0
#define DAT_100042e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_100042e8
#define DAT_100042e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_100042f0
#define DAT_100042f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_100042f8
#define DAT_100042f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10004300
#define DAT_10004300 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10004308
#define DAT_10004308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x84U)))
#undef DAT_10004310
#define DAT_10004310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#undef DAT_10004318
#define DAT_10004318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x94U)))
#undef DAT_100043a8
#define DAT_100043a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x124U)))
#undef DAT_100043d0
#define DAT_100043d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14cU)))
#undef DAT_100043e0
#define DAT_100043e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15cU)))
#undef DAT_10004542
#define DAT_10004542 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef DAT_10004544
#define DAT_10004544 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef DAT_1000455e
#define DAT_1000455e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2daU)))
#undef DAT_10004560
#define DAT_10004560 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef DAT_10004565
#define DAT_10004565 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e1U)))
#undef DAT_10004568
#define DAT_10004568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#undef DAT_1000456a
#define DAT_1000456a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e6U)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef DAT_1000c020
#define DAT_1000c020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d9cU)))
#undef DAT_1000c02c
#define DAT_1000c02c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7da8U)))
#undef DAT_1000c056
#define DAT_1000c056 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dd2U)))
#undef DAT_1000c05c
#define DAT_1000c05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7dd8U)))
#undef DAT_1000c0c0
#define DAT_1000c0c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7e3cU)))
#undef str_10004420
#define str_10004420 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19cU)))
#undef str_10004438
#define str_10004438 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10004451
#define str_10004451 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
#undef str_10004469
#define str_10004469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_100044aa
#define str_100044aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
#undef str_100044dd
#define str_100044dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_10004511
#define str_10004511 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28dU)))
#define uStack_4f0 (*(uint *)(pf_stack_frame + 16))
#define uStack_4e8 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 40))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 48))
#define uStack_4cc (*(uint *)(pf_stack_frame + 52))
#define auStack_4c8 (*(uint (*)[306])(pf_stack_frame + 56))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 1080))
#define local_4ec (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f8
 */

void recovered_100007f8(int *param_1,byte *param_2)

{
  unsigned char pf_stack_frame[1312] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  int extraout_w0_03 = 0;
  int extraout_w0_04 = 0;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int extraout_w0_05 = 0;
  int extraout_w0_06 = 0;
  int extraout_w0_07 = 0;
  int extraout_w0_08 = 0;
  int extraout_w0_09 = 0;
  int extraout_w0_10 = 0;
  int extraout_w0_11 = 0;
  int extraout_w0_12 = 0;
  int extraout_w0_13 = 0;
  int extraout_w0_14 = 0;
  int extraout_w0_15 = 0;
  int extraout_w0_16 = 0;
  int extraout_w0_17 = 0;
  int extraout_w0_18 = 0;
  int extraout_w0_19 = 0;
  int extraout_w0_20 = 0;
  int extraout_w0_21 = 0;
  int extraout_w0_22 = 0;
  int extraout_w0_23 = 0;
  int extraout_w0_24 = 0;
  int extraout_w0_25 = 0;
  int extraout_w0_26 = 0;
  int extraout_w0_27 = 0;
  int extraout_w0_28 = 0;
  int extraout_w0_29 = 0;
  int extraout_w0_30 = 0;
  int extraout_w0_31 = 0;
  int extraout_w0_32 = 0;
  undefined8 uVar14;
  ulong uVar15;
  byte bVar16;
  undefined4 uVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;

  if (*(short *)(param_2 + 4) != 0x10ec || *(short *)(param_2 + 6) != 0x525a) {
    return;
  }
  if (3 < DAT_1000c000) {
    return;
  }
  uVar3 = (ulong)DAT_1000c000;
  lVar4 = uVar3 * 0xd0;
  pbVar1 = &DAT_1000c010 + lVar4;
  recovered_100007e0(pbVar1,0xd0);
  uVar20 = *(undefined8 *)(param_2 + 8);
  uVar14 = *(undefined8 *)param_2;
  uVar22 = *(undefined8 *)(param_2 + 0x18);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  uVar23 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x7db0U)) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(&DAT_1000c02c + lVar4) = uVar23;
  *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x7d94U)) = uVar20;
  *(undefined8 *)(&DAT_1000c010 + lVar4) = uVar14;
  *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x7da4U)) = uVar22;
  *(undefined8 *)(&DAT_1000c020 + lVar4) = uVar21;
  *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042a0;
  local_4ec = 0;
  uVar14 = recovered_10001dc4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                              (long)&local_4ec);
  if ((int)uVar14 == 0) {
    recovered_10001e10(pbVar1,str_10004420);
    return;
  }
  *(ushort *)(lVar4 + ((uintptr_t)pf_module_state+0x7df4U)) = (ushort)local_4ec;
  uVar2 = (ushort)local_4ec & 0xfffb | 0x402;
  uVar15 = recovered_10001f08(pbVar1,(uint)uVar2);
  if ((int)uVar15 == 0) goto LAB_100013f4;
  auStack_4c8[0] = 0;
  auStack_c8[0] = 0;
  *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042a8;
  uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),6,2,(long)auStack_4c8);
  if ((int)uVar14 == 0 || auStack_4c8[0] == 0xffff) goto LAB_100013f4;
  if ((auStack_4c8[0] >> 4 & 1) != 0) {
    *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = 0x340000;
    uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x34,1,(long)auStack_c8);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    uVar13 = 0;
    uVar8 = auStack_c8[0];
    if (auStack_c8[0] != 0) {
LAB_10000920:
      uVar8 = auStack_c8[0];
      if (0x2f < uVar13) goto LAB_10000984;
      bVar6 = false;
      uStack_4cc = 0;
      *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = auStack_c8[0] << 0x10;
      if ((0xbc < auStack_c8[0] - 0x40) || ((auStack_c8[0] & 3) != 0)) goto LAB_100009c0;
      uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                  (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                  (ulong)(auStack_c8[0] & 0xffff),2,(long)&uStack_4cc);
      if ((int)uVar14 != 0) {
        if ((uStack_4cc & 0xff) != 1) {
          uVar8 = uStack_4cc >> 8 & 0xff;
          uVar13 = uVar13 + 1;
          auStack_c8[0] = uVar8;
          if (uVar8 == 0) goto LAB_10000984;
          goto LAB_10000920;
        }
        uStack_4d0 = 0;
        uVar13 = auStack_c8[0] + 4;
        *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = uVar13 * 0x10000;
        if (0xf8 < auStack_c8[0]) goto LAB_100009bc;
        uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU))
                                    ,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),(ulong)(uVar13 & 0xffff),2
                                    ,(long)&uStack_4d0);
        bVar6 = false;
        if (((int)uVar14 == 0) || (uStack_4d0 == 0xffff)) goto LAB_100009c0;
        *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) | uStack_4d0;
        if ((uStack_4d0 & 3) != 0) {
          uVar14 = recovered_100021ec(DAT_1000c008,(ulong)*pbVar1,
                                      (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                      (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),(ulong)(uVar13 & 0xffff))
          ;
          if ((int)uVar14 == 0) goto LAB_100009bc;
          uVar8 = 10000;
          if (((uStack_4d0 ^ 0xffffffff) & 3) != 0) {
            uVar8 = 1000;
          }
          recovered_10002230(DAT_1000c008,(ulong)uVar8);
        }
        uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU))
                                    ,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),(ulong)(uVar13 & 0xffff),2
                                    ,(long)&uStack_4d0);
        if ((int)uVar14 != 0) {
          *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = uStack_4d0 | uVar13 * 0x10000;
          uVar8 = uStack_4d0 & 3;
          goto LAB_10000984;
        }
      }
LAB_100009bc:
      bVar6 = false;
      goto LAB_100009c0;
    }
LAB_10000984:
    bVar6 = uVar8 == 0;
LAB_100009c0:
    if (!bVar6) goto LAB_100013f4;
  }
  uVar15 = recovered_10001f08(pbVar1,(uint)uVar2);
  if ((int)uVar15 == 0) goto LAB_100013f4;
  *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042b0;
  uVar14 = recovered_10001dc4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x14,4,
                              lVar4 + ((uintptr_t)pf_module_state+0x7da4U));
  if ((int)uVar14 == 0) goto LAB_100013f4;
  *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7da4U));
  if (((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7da4U)) & 7) == 4) &&
     (uVar14 = recovered_10001dc4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x18,4
                                  ,(long)(&DAT_1000c02c + lVar4)), (int)uVar14 == 0)) {
    uVar13 = 0x180000;
  }
  else {
    auStack_c8[0] = 0;
    if ((((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7da0U)) & 7) == 4) ||
        (uVar13 = *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7da4U)), uVar13 == 0)) || ((uVar13 & 1) != 0))
    goto LAB_100013f4;
    uStack_4cc = uVar13;
    recovered_10001dc4(param_1,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                       (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x14,4,(long)&uStack_4cc);
    if ((uStack_4cc & 7) == 4) {
      auStack_c8[0] = *(uint *)(&DAT_1000c02c + lVar4);
      recovered_10001dc4(param_1,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                         (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x18,4,(long)auStack_c8);
      uVar13 = auStack_c8[0];
    }
    else {
      uVar13 = 0;
    }
    uVar8 = 0xfffffff0;
    if ((uStack_4cc & 1) != 0) {
      uVar8 = 0xfffffffc;
    }
    uVar8 = uVar8 & uStack_4cc;
    if (uVar8 == 0 && uVar13 == 0) goto LAB_100013f4;
    *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x7dbcU)) = 0;
    auStack_4c8[0] = 0;
    if ((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) goto LAB_100013f4;
    if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
      if ((((uVar13 != 0) || ((uint)param_1[2] < 0x68)) || (param_1[0x19] == 0)) ||
         (iVar7 = (*(code *)(ulong)(uint)param_1[0x19])(uVar8,0,0x1000,auStack_4c8), iVar7 == 0))
      goto LAB_100013f4;
      *(ulong *)(lVar4 + ((uintptr_t)pf_module_state+0x7dbcU)) = (ulong)auStack_4c8[0];
    }
    else {
      iVar7 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar8,uVar13,0x1000,lVar4 + ((uintptr_t)pf_module_state+0x7dbcU));
      if (iVar7 == 0) goto LAB_100013f4;
    }
    *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042b8;
    uVar14 = recovered_10001f90((long)pbVar1,0x18);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042c0;
    uVar14 = recovered_10001f90((long)pbVar1,4);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    *(undefined8 *)(&DAT_1000c05c + lVar4) = DAT_100042c8;
    uVar14 = recovered_10001f90((long)pbVar1,0xc);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    auStack_4c8[0] = 0;
    auStack_c8[0] = 0;
    uStack_4cc = uStack_4cc & 0xffffff00;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 9;
    recovered_10002264((long)pbVar1,0xfc00,3,0);
    if (extraout_w0_07 == 0) goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,200);
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 10;
    recovered_10002264((long)pbVar1,0xfe60,3,0);
    if (extraout_w0_08 == 0) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0xb;
    recovered_10002264((long)pbVar1,0xfe57,0x3f,0x30);
    if (extraout_w0 == 0) goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,10000);
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0xc;
    recovered_10002264((long)pbVar1,0xfe2c,0x80,0x80);
    if (extraout_w0_09 == 0) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0xd;
    recovered_10002264((long)pbVar1,0xfe34,0x80,0x80);
    if (extraout_w0_10 == 0) goto LAB_100013f4;
    recovered_10002294(pbVar1);
    recovered_10002230(DAT_1000c008,100000);
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0xe;
    bVar6 = recovered_10002314((long)pbVar1,((uintptr_t)pf_module_state+0xacU),0x1e);
    if (!bVar6) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0xf;
    recovered_10002264((long)pbVar1,0xfd6a,0xff,0xb);
    if (extraout_w0_00 == 0) goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,100);
    recovered_10002264((long)pbVar1,0xfd6a,3,0);
    if (extraout_w0_11 == 0) goto LAB_100013f4;
    uVar14 = recovered_10001f90((long)pbVar1,0x14);
    if ((int)uVar14 == 0) {
      uVar13 = 0x140000;
      goto LAB_10000a90;
    }
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0x10;
    uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x724,4,(long)auStack_4c8);
    if (((int)uVar14 == 0) || ((auStack_4c8[0] & 0x1000000) != 0)) {
LAB_10000dc0:
      uVar15 = 3;
    }
    else {
      uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                  (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x814,4,(long)auStack_c8);
      uVar13 = auStack_c8[0];
      if ((int)uVar14 == 0) goto LAB_10000dc0;
      bVar16 = (byte)(auStack_c8[0] >> 0x12) & 0x30;
      if ((auStack_c8[0] & 0x4000) != 0) {
        bVar16 = 0x30;
      }
      recovered_10002264((long)pbVar1,0xff03,0x30,bVar16);
      if ((extraout_w0_01 == 0) ||
         (recovered_10002264((long)pbVar1,0xfd53,0x40,(byte)(auStack_4c8[0] >> 0x13) & 0x40),
         extraout_w0_02 == 0)) goto LAB_100013f4;
      uVar15 = (ulong)(uVar13 >> 5) & 3;
    }
    recovered_10002264((long)pbVar1,0xfd73,0x52,0);
    if (extraout_w0_12 == 0) goto LAB_100013f4;
    lVar5 = uVar15 * 3;
    recovered_10002264((long)pbVar1,0xfd5a,0xff,(&DAT_100043a8)[lVar5]);
    if ((((((extraout_w0_13 == 0) ||
           (recovered_10002264((long)pbVar1,0xfd5e,0xff,*(byte *)(lVar5 + ((uintptr_t)pf_module_state+0x125U))),
           extraout_w0_14 == 0)) ||
          (recovered_10002264((long)pbVar1,0xfd5f,0xff,*(byte *)(lVar5 + ((uintptr_t)pf_module_state+0x126U))),
          extraout_w0_15 == 0)) ||
         ((recovered_10002264((long)pbVar1,0xfe78,3,0), extraout_w0_16 == 0 ||
          (recovered_10002264((long)pbVar1,0xfe78,3,1), extraout_w0_03 == 0)))) ||
        (uVar14 = recovered_1000236c((long)pbVar1,0xfe90,(byte *)&uStack_4cc), (int)uVar14 == 0)) ||
       (((uStack_4cc & 0xf) == 0 && (bVar6 = recovered_10002314((long)pbVar1,((uintptr_t)pf_module_state+0x130U),7), !bVar6))
       )) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0x11;
    uVar14 = recovered_10002384((long)pbVar1,1);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0x12;
    recovered_10002264((long)pbVar1,0xfd69,4,4);
    if (((extraout_w0_17 == 0) || (recovered_10002264((long)pbVar1,0xfd50,3,2), extraout_w0_18 == 0)
        ) || (recovered_10002264((long)pbVar1,0xfe75,6,2), extraout_w0_19 == 0)) goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,5000);
    recovered_10002264((long)pbVar1,0xfd50,3,0);
    if ((extraout_w0_20 == 0) || (recovered_10002264((long)pbVar1,0xfe75,6,6), extraout_w0_04 == 0))
    goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,10000);
    recovered_10002264((long)pbVar1,0xfd55,4,4);
    if ((extraout_w0_21 == 0) ||
       (recovered_10002264((long)pbVar1,0xfda5,0x80,0x80), extraout_w0_22 == 0)) goto LAB_100013f4;
    recovered_10002230(DAT_1000c008,2000);
    recovered_10002264((long)pbVar1,0xfda5,0x80,0);
    if (extraout_w0_23 == 0) goto LAB_100013f4;
    *(undefined4 *)(&DAT_1000c05c + lVar4) = 0x13;
    uVar14 = recovered_10002528((long)pbVar1,(uint *)0x0);
    if ((int)uVar14 == 0) goto LAB_100013f4;
    auStack_c8[0] = 0;
    uStack_4cc = 0;
    recovered_10002b60((long)pbVar1,0,0,4,(uint *)0x0,0);
    if (extraout_w0_24 == 0) goto LAB_100013f4;
    recovered_10002b60((long)pbVar1,8,0x1aa,1,auStack_c8,0);
    if (extraout_w0_25 == 0) {
      if (((*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) & 1) == 0) ||
         (uVar14 = recovered_10002528((long)pbVar1,(uint *)0x0), (int)uVar14 == 0))
      goto LAB_100013f4;
      recovered_10002850((long)pbVar1);
      recovered_10002b60((long)pbVar1,0,0,4,(uint *)0x0,0);
      if (extraout_w0_26 == 0) goto LAB_100013f4;
LAB_10000fd8:
      uStack_4f0 = 0;
      uVar13 = 0x300000;
    }
    else {
      if ((auStack_c8[0] >> 0x16 & 1) != 0) goto LAB_10000fd8;
      uVar13 = auStack_c8[0];
      if ((auStack_c8[0] & 0xfff) != 0x1aa) goto LAB_10000a90;
      uVar13 = 0x40300000;
      uStack_4f0 = 1;
    }
    iVar7 = 1000;
    do {
      recovered_10002cf0((long)pbVar1,0x37,0,0);
      if ((extraout_w0_27 == 0) ||
         (recovered_10002b60((long)pbVar1,0x29,uVar13,5,&uStack_4cc,0), extraout_w0_28 == 0))
      goto LAB_100013f4;
      if ((uStack_4cc & 0x81000000) == 0x80000000 && (uStack_4cc & 0x300000) != 0) {
        bVar6 = true;
        goto LAB_10001060;
      }
      recovered_10002230(DAT_1000c008,1000);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    bVar6 = (uStack_4cc & 0x300000) != 0;
LAB_10001060:
    if ((((bVar6 && (uStack_4cc & 0x81000000) == 0x80000000) &&
         (recovered_10002b60((long)pbVar1,2,0,2,(uint *)0x0,lVar4 + ((uintptr_t)pf_module_state+0x7df6U)), extraout_w0_29 != 0
         )) && (recovered_10002b60((long)pbVar1,3,0,1,auStack_c8,0), extraout_w0_30 != 0)) &&
       ((0xffff < auStack_c8[0] && ((auStack_c8[0] & 0xe000) == 0)))) {
      *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7dd4U)) = auStack_c8[0] & 0xffff0000;
      recovered_10002b60((long)pbVar1,9,auStack_c8[0] & 0xffff0000,2,(uint *)0x0,(long)auStack_4c8);
      uVar13 = uStack_4cc;
      if (extraout_w0_31 == 0) goto LAB_100013f4;
      uVar8 = recovered_10003020((long)auStack_4c8,0x7f,0x7e);
      uVar9 = recovered_10003020((long)auStack_4c8,0x53,0x50);
      uVar10 = recovered_10003020((long)auStack_4c8,0x19,0x16);
      uVar11 = recovered_10003020((long)auStack_4c8,0x5f,0x54);
      uVar12 = recovered_10003020((long)auStack_4c8,0x67,0x60);
      iVar7 = 0;
      if ((((uVar12 >> 7 & 1) == 0) && ((uVar12 & 7) < 4)) &&
         (uVar15 = (ulong)(uVar12 >> 3) & 0xf, (int)uVar15 != 0)) {
        iVar7 = *(int *)(&DAT_100043e0 + (ulong)(uVar12 & 7) * 4) *
                (uint)(byte)(&DAT_100043d0)[uVar15];
      }
      if (((uVar11 >> 2 & 1) == 0) || (iVar7 == 0)) goto LAB_100013f4;
      uStack_4f0 = uStack_4f0 & (uVar13 & 0x40000000) >> 0x1e;
      if (uVar8 == 1) {
        if ((uStack_4f0 == 0) || (uVar9 != 9)) goto LAB_100013f4;
        uVar13 = recovered_10003020((long)auStack_4c8,0x45,0x30);
        uVar15 = (ulong)uVar13 * 0x400 + 0x400;
      }
      else {
        if ((((uVar8 != 0) || (uStack_4f0 != 0)) || (uVar9 - 0xc < 0xfffffffd)) ||
           ((9 < uVar9 && (uVar13 = recovered_10003020((long)auStack_4c8,0x4f,0x4f), uVar13 == 0))))
        goto LAB_100013f4;
        uVar13 = recovered_10003020((long)auStack_4c8,0x49,0x3e);
        uVar12 = recovered_10003020((long)auStack_4c8,0x31,0x2f);
        uVar15 = (ulong)uVar13 + 1 << ((ulong)((uVar9 + uVar12) - 7) & 0x3f);
      }
      uVar18 = uVar15 >> 0x20;
      if (0xfffffffe < uVar15) {
        uVar15 = 0xffffffff;
      }
      uVar13 = recovered_10003020((long)auStack_4c8,0xd,0xc);
      bVar6 = true;
      if (((uVar13 == 0) && ((uVar11 >> 4 & 1) != 0)) && (0xfffffffc < uVar10 - 0xc)) {
        bVar6 = uVar8 == 1 && uVar10 != 9;
      }
      *(int *)(lVar4 + ((uintptr_t)pf_module_state+0x7dc8U)) = (int)uVar15;
      *(int *)(lVar4 + ((uintptr_t)pf_module_state+0x7dccU)) = iVar7;
      *(bool *)(lVar4 + ((uintptr_t)pf_module_state+0x7dd0U)) = uVar18 != 0;
      *(char *)(lVar4 + ((uintptr_t)pf_module_state+0x7dd1U)) = (char)uStack_4f0;
      (&DAT_1000c056)[lVar4] = bVar6;
      recovered_10002cf0((long)pbVar1,7,*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7dd4U)),1);
      if (((extraout_w0_05 == 0) ||
          ((((*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7dd1U)) & 1) == 0 &&
            (recovered_10002cf0((long)pbVar1,0x10,0x200,0), extraout_w0_32 == 0)) ||
           (uVar14 = recovered_10002384((long)pbVar1,0), (int)uVar14 == 0)))) ||
         (recovered_10002d40((long)pbVar1), extraout_w0_06 == 0)) goto LAB_100013f4;
      uStack_4d0 = 0;
      uVar14 = recovered_10002528((long)pbVar1,&uStack_4d0);
      if (((int)uVar14 == 0) || (uVar14 = recovered_10001f90((long)pbVar1,0x14), (int)uVar14 == 0))
      goto LAB_100013f4;
      (&DAT_1000c056)[lVar4] = (&DAT_1000c056)[lVar4] | (byte)((uStack_4d0 & 0x80000) >> 0x13);
      *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x7de8U)) = 0x100000001;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uVar13 = recovered_1000307c(pbVar1);
      if (DAT_1000c008 == (int *)0x0) {
        uVar8 = 0;
LAB_10001438:
        uVar17 = 0x163;
      }
      else {
        uVar8 = DAT_1000c008[2];
        if ((((*DAT_1000c008 != 0x54584b57) || (uVar8 < 0x7c)) ||
            ((DAT_1000c008[0x1e] == 0 ||
             (((DAT_1000c008[0xd] == 0 || (DAT_1000c008[0xe] == 0)) || (DAT_1000c008[0x1c] == 0)))))
            ) || (DAT_1000c008[0x1d] == 0)) goto LAB_10001438;
        uStack_4cc = 0;
        auStack_4c8[0] = 0;
        auStack_c8[0] = 0;
        uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU))
                                    ,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),4,2,(long)auStack_4c8);
        if ((int)uVar14 == 0) {
          uVar14 = DAT_10004318;
          goto LAB_100019f8;
        }
        if ((auStack_4c8[0] & 0x406) != 0x402) {
          uVar8 = auStack_4c8[0] | 0x40000;
          uVar17 = 0x156;
          goto LAB_1000143c;
        }
        uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU))
                                    ,(ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),6,2,(long)auStack_c8);
        if ((int)uVar14 == 0) {
          uVar14 = DAT_10004310;
LAB_100019f8:
          *(undefined8 *)(&DAT_1000c05c + lVar4) = uVar14;
          goto LAB_10001440;
        }
        if (auStack_c8[0] == 0xffff) {
          uVar14 = DAT_10004308;
          goto LAB_100019f8;
        }
        if ((auStack_c8[0] >> 4 & 1) != 0) {
          uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                      (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                      (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),0x34,1,(long)&uStack_4cc)
          ;
          if ((int)uVar14 != 0) {
            if (uStack_4cc == 0) {
              uVar8 = auStack_c8[0] << 0x10;
              uVar17 = 0x15a;
            }
            else {
              uVar8 = uStack_4cc;
              for (uVar9 = 0; (uStack_4cc = uVar8, uVar8 != 0 && (uVar9 < 0x30)); uVar9 = uVar9 + 1)
              {
                uStack_4d0 = 0;
                if ((0xbc < uVar8 - 0x40) || ((uVar8 & 3) != 0)) {
                  uVar17 = 0x15b;
                  goto LAB_1000143c;
                }
                uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                            (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                            (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                            (ulong)(uVar8 & 0xffff),2,(long)&uStack_4d0);
                if ((int)uVar14 == 0) {
                  uVar8 = uStack_4cc << 0x10;
LAB_100017ac:
                  uVar17 = 0x15c;
                  goto LAB_1000143c;
                }
                uVar10 = uStack_4d0 & 0xff;
                if ((uVar10 == 0xff) || (uVar10 == 0)) {
                  uVar8 = uStack_4d0 | uStack_4cc << 0x10;
                  goto LAB_100017ac;
                }
                uVar8 = uStack_4d0 & 0xff;
                if (uVar8 == 0x11) {
LAB_10001668:
                  uStack_4d8 = 0;
                  uVar8 = (uStack_4cc & 0xffff) + 2;
                  uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                              (ulong)(uVar8 & 0xffff),2,(long)&uStack_4d8 + 4);
                  if ((int)uVar14 == 0) {
                    uVar8 = uVar8 * 0x10000;
                    uVar17 = 0x15d;
                    goto LAB_1000143c;
                  }
                  uVar11 = PF_PART4(uStack_4d8, 4) & 0xfffffffe;
                  if (uVar10 != 5) {
                    uVar11 = PF_PART4(uStack_4d8, 4) & 0xffff3fff | 0x4000;
                  }
                  uStack_4d8 = CONCAT44(uVar11,(uint)uStack_4d8);
                  uVar14 = recovered_100021ec(DAT_1000c008,(ulong)*pbVar1,
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                              (ulong)(uVar8 & 0xffff));
                  if ((int)uVar14 == 0) {
                    uVar8 = PF_PART4(uStack_4d8, 4) | uVar8 * 0x10000;
                    uVar17 = 0x15e;
                    goto LAB_1000143c;
                  }
                  uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                              (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                              (ulong)(uVar8 & 0xffff),2,(long)&uStack_4d8);
                  if ((int)uVar14 == 0) {
                    uVar8 = uVar8 * 0x10000;
                    uVar17 = 0x15f;
                    goto LAB_1000143c;
                  }
                  if (uVar10 == 5) {
                    if ((uStack_4d8 & 1) != 0) goto LAB_100017dc;
                  }
                  else {
                    if (((uint)uStack_4d8 & 0xc000) != 0x4000) {
LAB_100017dc:
                      uVar17 = 0x160;
                      uVar8 = (uint)uStack_4d8 | uVar8 * 0x10000;
                      goto LAB_1000143c;
                    }
                    if (uVar10 == 0x10) goto LAB_100016f0;
                  }
                }
                else {
                  if (uVar8 == 0x10) {
LAB_100016f0:
                    uStack_4d8 = 0;
                    if (uStack_4cc < 0xf5) {
                      uVar8 = uStack_4cc + 8;
                      uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                                  (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                                  (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                                  (ulong)(uVar8 & 0xffff),2,(long)&uStack_4d8 + 4);
                      if ((int)uVar14 == 0) {
                        uVar8 = uVar8 * 0x10000;
                      }
                      else {
                        if (PF_PART4(uStack_4d8, 4) != 0xffff) {
                          if (((PF_PART4(uStack_4d8, 4) >> 0xb & 1) == 0) ||
                             (uVar14 = recovered_100021ec(DAT_1000c008,(ulong)*pbVar1,
                                                          (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                                          (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                                          (ulong)(uVar8 & 0xffff)), (int)uVar14 != 0
                             )) {
                            uVar14 = recovered_10001dc4(DAT_1000c008,(ulong)*pbVar1,
                                                        (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8dU)),
                                                        (ulong)*(byte *)(lVar4 + ((uintptr_t)pf_module_state+0x7d8eU)),
                                                        (ulong)(uVar8 & 0xffff),2,(long)&uStack_4d8)
                            ;
                            if ((int)uVar14 == 0) {
                              uVar8 = uVar8 * 0x10000;
                              uVar17 = 0x176;
                            }
                            else {
                              if (((uint)uStack_4d8 >> 0xb & 1) == 0) goto LAB_10001758;
                              uVar8 = (uint)uStack_4d8 | uVar8 * 0x10000;
                              uVar17 = 0x177;
                            }
                          }
                          else {
                            uVar8 = PF_PART4(uStack_4d8, 4) | uVar8 * 0x10000;
                            uVar17 = 0x175;
                          }
                          goto LAB_1000143c;
                        }
                        uVar8 = uVar8 * 0x10000 | 0xffff;
                      }
                      uVar17 = 0x174;
                    }
                    else {
                      uVar17 = 0x173;
                      uVar8 = uStack_4cc;
                    }
                    goto LAB_1000143c;
                  }
                  if (uVar8 == 5) goto LAB_10001668;
                }
LAB_10001758:
                uVar8 = uStack_4d0 >> 8 & 0xff;
              }
              if (uVar8 == 0) goto LAB_10001830;
              uVar17 = 0x161;
            }
            goto LAB_1000143c;
          }
          uVar14 = DAT_100042d0;
          goto LAB_100019f8;
        }
LAB_10001830:
        uVar14 = recovered_10002528((long)pbVar1,(uint *)&uStack_4e8);
        if ((int)uVar14 == 0) {
          uVar17 = 0x164;
LAB_100019a4:
          *(undefined4 *)(&DAT_1000c05c + lVar4) = uVar17;
          goto LAB_10001440;
        }
        uVar14 = recovered_100026bc((long)pbVar1,4,(undefined4 *)&uStack_4e0);
        if ((int)uVar14 == 0) {
          uVar14 = DAT_10004300;
          goto LAB_100019f8;
        }
        if ((int)(uint)uStack_4e0 < 0) {
          uVar17 = 0x166;
          uVar8 = (uint)uStack_4e0;
        }
        else {
          uVar14 = recovered_100026bc((long)pbVar1,0xc,(undefined4 *)((long)&uStack_4e8 + 4));
          if ((int)uVar14 == 0) {
            uVar14 = DAT_100042f8;
            goto LAB_100019f8;
          }
          if ((long)uStack_4e8 < 0) {
            uVar17 = 0x168;
            uVar8 = PF_PART4(uStack_4e8, 4);
          }
          else {
            if ((uStack_4e8 & 0x1000000) == 0) {
LAB_100018a4:
              *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x7e48U)) = 1;
              uVar15 = recovered_100030a0((ulong *)(lVar4 + ((uintptr_t)pf_module_state+0x7e14U)));
              *(ulong *)(lVar4 + ((uintptr_t)pf_module_state+0x7e24U)) = uVar15;
              if (uVar15 == 0) {
                recovered_100029e0((long)pbVar1);
                uVar14 = DAT_100042f0;
              }
              else {
                uVar15 = recovered_100030a0((ulong *)(lVar4 + ((uintptr_t)pf_module_state+0x7e1cU)));
                *(ulong *)(lVar4 + ((uintptr_t)pf_module_state+0x7e2cU)) = uVar15;
                if (uVar15 == 0) {
                  recovered_100029e0((long)pbVar1);
                  uVar14 = DAT_100042e8;
                }
                else {
                  uVar14 = recovered_10003120(DAT_1000c008,(ulong)uVar13,
                                              *(long *)(lVar4 + ((uintptr_t)pf_module_state+0x7e24U)),lVar4 + ((uintptr_t)pf_module_state+0x7e34U));
                  if ((int)uVar14 != 0) {
                    if ((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7e34U)) - 1 < 0xfffff000) &&
                       ((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7e34U)) & 0xfff) == 0 && PF_PART4(uStack_4e0, 4) == 0)) {
                      uStack_4e0 = uStack_4e0 & 0xffffffff;
                      uVar14 = recovered_10003120(DAT_1000c008,(ulong)uVar13,
                                                  *(long *)(lVar4 + ((uintptr_t)pf_module_state+0x7e2cU)),lVar4 + ((uintptr_t)pf_module_state+0x7e38U));
                      if ((int)uVar14 == 0) {
                        recovered_100029e0((long)pbVar1);
                        uVar14 = DAT_100042d8;
                        goto LAB_100019f8;
                      }
                      if ((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7e38U)) - 1 < 0xfffff000) &&
                         ((*(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7e38U)) & 0xfff) == 0 && PF_PART4(uStack_4e0, 4) == 0)) {
                        recovered_100007e0(*(undefined1 **)(lVar4 + ((uintptr_t)pf_module_state+0x7e24U)),0x1000);
                        recovered_100007e0(*(undefined1 **)(lVar4 + ((uintptr_t)pf_module_state+0x7e2cU)),0x1000);
                        (&DAT_1000c0c0)[uVar3 * 0x34] = 1;
                        goto LAB_10001440;
                      }
                      recovered_100029e0((long)pbVar1);
                      uVar17 = 0x16f;
                      uVar8 = PF_PART4(uStack_4e0, 4);
                    }
                    else {
                      recovered_100029e0((long)pbVar1);
                      uVar17 = 0x16d;
                      uVar8 = PF_PART4(uStack_4e0, 4);
                    }
                    goto LAB_1000143c;
                  }
                  recovered_100029e0((long)pbVar1);
                  uVar14 = DAT_100042e0;
                }
              }
              goto LAB_100019f8;
            }
            uVar14 = recovered_10001f90((long)pbVar1,0x14);
            if ((int)uVar14 == 0) {
              uVar8 = (uint)uStack_4e8;
            }
            else {
              uVar14 = recovered_10002528((long)pbVar1,(uint *)&uStack_4e8);
              if ((int)uVar14 == 0) {
                uVar17 = 0x169;
                goto LAB_100019a4;
              }
              uVar8 = (uint)uStack_4e8;
              if (((uint)uStack_4e8 >> 0x18 & 1) == 0) goto LAB_100018a4;
            }
            uVar17 = 0x169;
          }
        }
      }
LAB_1000143c:
      *(undefined4 *)(&DAT_1000c05c + lVar4) = uVar17;
      *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = uVar8;
LAB_10001440:
      if ((&DAT_1000c0c0)[uVar3 * 0x34] == 0) {
        pcVar19 = str_100044aa;
        if ((&DAT_1000c056)[lVar4] == '\0') {
          pcVar19 = str_100044dd;
        }
      }
      else {
        pcVar19 = str_10004469;
      }
      recovered_10001ffc((undefined1 *)auStack_c8,0x60,str_10004438);
      recovered_10002088((long)auStack_c8,0x60,&DAT_1000455e);
      recovered_10002010((long)auStack_c8,0x60,(uint)*param_2,2);
      recovered_10002088((long)auStack_c8,0x60,&DAT_10004542);
      recovered_10002010((long)auStack_c8,0x60,(uint)param_2[1],2);
      recovered_10002088((long)auStack_c8,0x60,&DAT_10004544);
      recovered_100020e0((long)auStack_c8,0x60,(uint)param_2[2]);
      recovered_10001ffc((undefined1 *)auStack_4c8,0x400,&DAT_10004560);
      recovered_10002010((long)auStack_4c8,0x400,(uint)*param_2,2);
      recovered_10002088((long)auStack_4c8,0x400,&DAT_10004542);
      recovered_10002010((long)auStack_4c8,0x400,(uint)param_2[1],2);
      recovered_10002088((long)auStack_4c8,0x400,&DAT_10004544);
      recovered_100020e0((long)auStack_4c8,0x400,(uint)param_2[2]);
      recovered_10002088((long)auStack_4c8,0x400,&DAT_10004565);
      recovered_10002010((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
      recovered_10002088((long)auStack_4c8,0x400,&DAT_10004542);
      recovered_10002010((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
      recovered_10002088((long)auStack_4c8,0x400,&DAT_10004568);
      if (*pcVar19 != '\0') {
        recovered_10002088((long)auStack_4c8,0x400,&DAT_1000456a);
        recovered_10002088((long)auStack_4c8,0x400,pcVar19);
      }
      if (param_1[3] != 0) {
        (*(code *)(ulong)(uint)param_1[3])(auStack_c8,str_10004451,auStack_4c8);
      }
      DAT_1000c000 = DAT_1000c000 + 1;
      return;
    }
    uVar13 = auStack_c8[0];
  }
LAB_10000a90:
  *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = uVar13;
LAB_100013f4:
  uVar17 = *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU));
  recovered_10001e10(pbVar1,str_10004511);
  recovered_10001c34(pbVar1);
  *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x7ddcU)) = uVar17;
  return;
}

#undef DAT_100042a0
#undef DAT_100042a8
#undef DAT_100042b0
#undef DAT_100042b8
#undef DAT_100042c0
#undef DAT_100042c8
#undef DAT_100042d0
#undef DAT_100042d8
#undef DAT_100042e0
#undef DAT_100042e8
#undef DAT_100042f0
#undef DAT_100042f8
#undef DAT_10004300
#undef DAT_10004308
#undef DAT_10004310
#undef DAT_10004318
#undef DAT_100043a8
#undef DAT_100043d0
#undef DAT_100043e0
#undef DAT_10004542
#undef DAT_10004544
#undef DAT_1000455e
#undef DAT_10004560
#undef DAT_10004565
#undef DAT_10004568
#undef DAT_1000456a
#undef DAT_1000c000
#undef DAT_1000c008
#undef DAT_1000c010
#undef DAT_1000c020
#undef DAT_1000c02c
#undef DAT_1000c056
#undef DAT_1000c05c
#undef DAT_1000c0c0
#undef str_10004420
#undef str_10004438
#undef str_10004451
#undef str_10004469
#undef str_100044aa
#undef str_100044dd
#undef str_10004511
#undef uStack_4f0
#undef uStack_4e8
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef uStack_4cc
#undef auStack_4c8
#undef auStack_c8
#undef local_4ec

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef str_10004451
#define str_10004451 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

undefined8 recovered_10001a10(uint param_1,undefined4 *param_2,undefined1 *param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 uVar2;

  pbVar1 = &DAT_1000c010 + (ulong)param_1 * 0xd0;
  if (DAT_1000c000 <= param_1) {
    pbVar1 = (byte *)0x0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_1000c000 <= param_1) {
    return 0;
  }
  recovered_10003164((long)pbVar1);
  if (*(int *)(pbVar1 + 0x60) != 0) {
    uVar2 = recovered_10002528((long)pbVar1,(uint *)0x0);
    if ((int)uVar2 != 0) {
      *param_2 = *(undefined4 *)(pbVar1 + 0x3c);
      recovered_10001ffc(param_3,param_4 & 0xffffffff,str_10004451);
      uVar2 = 1;
      goto LAB_10001aa4;
    }
    if (*(int *)(pbVar1 + 0x60) != 0) {
      recovered_10002294(pbVar1);
    }
  }
  uVar2 = 0;
LAB_10001aa4:
  pbVar1[0x38] = 0;
  pbVar1[0x39] = 0;
  pbVar1[0x3a] = 0;
  pbVar1[0x3b] = 0;
  return uVar2;
}

#undef DAT_1000c000
#undef DAT_1000c010
#undef str_10004451

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef str_1000458e
#define str_1000458e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_100045ae
#define str_100045ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_100045bd
#define str_100045bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_100045c8
#define str_100045c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_100045f2
#define str_100045f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36eU)))
#undef str_1000461e
#define str_1000461e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39aU)))
#undef str_1000463e
#define str_1000463e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_10004646
#define str_10004646 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c2U)))
#undef str_1000464d
#define str_1000464d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#define uStack_300 (*(uint *)(pf_stack_frame + 16))
#define uStack_2fc (*(undefined1 *)(pf_stack_frame + 20))
#define uStack_2f8 (*(uint *)(pf_stack_frame + 24))
#define uStack_2f4 (*(undefined2 *)(pf_stack_frame + 28))
#define bStack_2f2 (*(byte *)(pf_stack_frame + 30))
#define bStack_2f1 (*(byte *)(pf_stack_frame + 31))
#define auStack_2f0 (*(uint (*)[188])(pf_stack_frame + 32))
#define auStack_270 (*(uint (*)[156])(pf_stack_frame + 160))
#define uStack_268 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_260 (*(undefined4 *)(pf_stack_frame + 176))
#define uStack_25c (*(undefined2 *)(pf_stack_frame + 180))
#define uStack_25a (*(undefined1 *)(pf_stack_frame + 182))
#define uStack_259 (*(undefined1 *)(pf_stack_frame + 183))
#define uStack_258 (*(undefined2 *)(pf_stack_frame + 184))
#define uStack_256 (*(undefined1 *)(pf_stack_frame + 186))
#define uStack_255 (*(undefined1 *)(pf_stack_frame + 187))
#define uStack_254 (*(undefined2 *)(pf_stack_frame + 188))
#define uStack_252 (*(undefined1 *)(pf_stack_frame + 190))
#define uStack_251 (*(undefined1 *)(pf_stack_frame + 191))
#define uStack_250 (*(undefined2 *)(pf_stack_frame + 192))
#define uStack_24e (*(undefined1 *)(pf_stack_frame + 194))
#define uStack_24d (*(undefined1 *)(pf_stack_frame + 195))
#define uStack_24c (*(undefined2 *)(pf_stack_frame + 196))
#define uStack_24a (*(undefined1 *)(pf_stack_frame + 198))
#define uStack_249 (*(undefined1 *)(pf_stack_frame + 199))
#define uStack_248 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_240 (*(undefined8 *)(pf_stack_frame + 208))
#define uStack_238 (*(undefined4 *)(pf_stack_frame + 216))
#define uStack_234 (*(undefined2 *)(pf_stack_frame + 220))
#define uStack_232 (*(undefined1 *)(pf_stack_frame + 222))
#define uStack_231 (*(undefined1 *)(pf_stack_frame + 223))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 224))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 232))
#define uStack_220 (*(undefined8 *)(pf_stack_frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab0
 */

/* WARNING: Removing unreachable block (ram,0x10003230) */
/* WARNING: Removing unreachable block (ram,0x10003238) */

undefined8 recovered_10001ab0(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[816] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int extraout_w0 = 0;
  uint uVar10;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;

  uVar12 = 0;
  pbVar1 = &DAT_1000c010 + (ulong)param_1 * 0xd0;
  if (DAT_1000c000 <= param_1) {
    pbVar1 = (byte *)0x0;
  }
  if ((param_3 != 0) && (param_1 < DAT_1000c000)) {
    recovered_10003164((long)pbVar1);
    pbVar1[0x54] = 0;
    pbVar1[0x55] = 0;
    pbVar1[0x56] = 0;
    pbVar1[0x57] = 0;
    if ((*(int *)(pbVar1 + 0x60) == 0) ||
       ((*(uint *)(pbVar1 + 0x3c) <= param_2 || *(uint *)(pbVar1 + 0x3c) - param_2 <= param_4 - 1 ||
        ((pbVar1[0x45] & 1) == 0 && 0x800000 < (ulong)param_4 + (ulong)param_2)))) {
LAB_100031fc:
      uVar12 = 0;
    }
    else {
      uVar15 = 0;
LAB_1000324c:
      uVar8 = param_4 - uVar15;
      if (uVar15 <= param_4 && uVar8 != 0) {
        if (*(int *)(pbVar1 + 0xb0) == 0) {
LAB_10003294:
          recovered_10003a40((long)pbVar1,uVar15 + param_2,param_3 + (ulong)uVar15 * 0x200,0);
          uVar16 = 1;
          iVar9 = extraout_w0;
        }
        else {
          uVar16 = uVar8;
          if (7 < uVar8) {
            uVar16 = 8;
          }
          if (uVar8 < 2) goto LAB_10003294;
          uVar8 = recovered_1000307c(pbVar1);
          uVar13 = (ulong)uVar8;
          pbVar1[0x4c] = 0x3e;
          pbVar1[0x4d] = 1;
          pbVar1[0x4e] = 0;
          pbVar1[0x4f] = 0;
          if ((*(int *)(pbVar1 + 0xbc) == 0) || (*(int *)(pbVar1 + 0xb4) != 0)) {
            iVar9 = 0;
          }
          else {
            uVar8 = uVar15 + param_2;
            bVar3 = pbVar1[0x45];
            if ((uVar8 < 0x800000) || (bVar3 != 0)) {
              uVar12 = recovered_10002528((long)pbVar1,(uint *)0x0);
              iVar9 = 0;
              if ((int)uVar12 == 0) goto LAB_100032b0;
              uStack_268 = 0x80fe340080fe2c;
              uStack_260 = 0x52fffda9;
              uStack_25c = 0xfdaa;
              uVar17 = uVar8;
              if (bVar3 == 0) {
                uVar17 = uVar8 * 0x200;
              }
              uStack_25a = 0xff;
              uStack_259 = (char)(uVar17 >> 0x18);
              uStack_258 = 0xfdab;
              uStack_256 = 0xff;
              uStack_255 = (char)(uVar17 >> 0x10);
              uVar14 = (ulong)(uVar16 << 9);
              uStack_254 = 0xfdac;
              uStack_252 = 0xff;
              uStack_251 = (char)(uVar17 >> 8);
              uStack_250 = 0xfdad;
              uStack_24e = 0xff;
              uStack_24d = (char)uVar17;
              uStack_24c = 0xfdb1;
              uStack_24a = 0xff;
              uStack_249 = (char)uVar16;
              uStack_248 = 0xfffdaf00fffdb2;
              uStack_240 = 0x8080fe2102fffdb0;
              uStack_238 = 0xfffe28;
              uStack_234 = 0xfe29;
              uStack_232 = 0xff;
              uStack_231 = (char)(uVar16 << 1);
              uStack_230 = 0xfffe2b00fffe2a;
              uStack_228 = 0x1fd5b2333fe2c;
              uStack_220 = 0x8efffdb321fffda1;
              uStack_2f8 = 0;
              lVar18 = 0;
              do {
                if (lVar18 + 4 == 0x54) {
                  uVar11 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,2,0xfdb3,0x40,
                                              0x40);
                  if ((uVar11 & 1) != 0) {
                    uVar12 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,0,0xfdb3,0,0);
                    iVar9 = 0;
                    if ((int)uVar12 == 0) goto LAB_100032b0;
                    if (0xfffffeff < uStack_2f8 - 0x101) {
                      pbVar1[200] = 0;
                      recovered_10003c7c(DAT_1000c008,uVar13,*(undefined8 *)(pbVar1 + 0x98),uVar14);
                      recovered_10003c7c(DAT_1000c008,uVar13,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
                      recovered_10002a40(DAT_1000c008);
                      uVar12 = recovered_10001f90((long)pbVar1,0x14);
                      if (((((int)uVar12 == 0) ||
                           (uVar12 = recovered_10001f90((long)pbVar1,0), (int)uVar12 == 0)) ||
                          (uVar12 = recovered_10001f90((long)pbVar1,8), (int)uVar12 == 0)) ||
                         (uVar12 = recovered_10001f90((long)pbVar1,0x18), (int)uVar12 == 0))
                      goto LAB_10003734;
                      recovered_10002a40(DAT_1000c008);
                      pbVar1[0xb4] = 1;
                      pbVar1[0xb5] = 0;
                      pbVar1[0xb6] = 0;
                      pbVar1[0xb7] = 0;
                      uVar11 = recovered_10002a70(pbVar1,1);
                      if ((((int)uVar11 == 0) ||
                          (uVar12 = recovered_10001f90((long)pbVar1,4), (int)uVar12 == 0)) ||
                         (uVar12 = recovered_10001f90((long)pbVar1,0xc), (int)uVar12 == 0))
                      goto LAB_10003734;
                      uStack_268 = CONCAT44(PF_PART4(uStack_268, 4),5000000);
                      uVar12 = recovered_10002820(DAT_1000c008);
                      bVar7 = false;
                      uVar17 = 0;
                      uStack_268 = CONCAT44((int)uVar12,(undefined4)uStack_268);
                      *(undefined8 **)(pbVar1 + 0x80) = &uStack_268;
                      goto LAB_10003584;
                    }
                  }
                  break;
                }
                uVar11 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,1,
                                            (uint)*(ushort *)((long)auStack_270 + lVar18 + 8),
                                            (uint)*(byte *)((long)auStack_270 + lVar18 + 10),
                                            (uint)*(byte *)((long)auStack_270 + lVar18 + 0xb));
                lVar18 = lVar18 + 4;
              } while ((uVar11 & 1) != 0);
            }
            iVar9 = 0;
          }
        }
        goto LAB_100032b0;
      }
      uVar12 = 1;
    }
    pbVar1[0x38] = 0;
    pbVar1[0x39] = 0;
    pbVar1[0x3a] = 0;
    pbVar1[0x3b] = 0;
  }
  return uVar12;
LAB_10003584:
  bVar6 = recovered_100027d0((long)pbVar1);
  if (!bVar6) goto LAB_100036f8;
  auStack_2f0[0] = 0;
  bStack_2f1 = 0;
  uVar12 = recovered_10002528((long)pbVar1,auStack_2f0);
  if ((int)uVar12 == 0) goto LAB_10003730;
  uVar10 = auStack_2f0[0];
  if ((auStack_2f0[0] & 0x11000000) != 0) {
LAB_1000372c:
    *(uint *)(pbVar1 + 0x50) = uVar10;
    goto LAB_10003730;
  }
  if ((auStack_2f0[0] >> 0x1d & 1) != 0) {
    bStack_2f2 = 0;
    uStack_2f4 = 0;
    auStack_270[0] = 0;
    uStack_300 = 0;
    uVar12 = recovered_1000236c((long)pbVar1,0xfdb3,&bStack_2f1);
    if ((((int)uVar12 == 0) ||
        (uVar12 = recovered_100026bc((long)pbVar1,4,auStack_270), (int)uVar12 == 0)) ||
       ((auStack_270[0] == 0xffffffff ||
        (((uVar12 = recovered_100026bc((long)pbVar1,0xc,&uStack_300), (int)uVar12 == 0 ||
          (uStack_300 == 0xffffffff)) ||
         (uVar12 = recovered_1000236c((long)pbVar1,0xfe2c,(byte *)&uStack_2f4), (int)uVar12 == 0))))
       )) goto LAB_10003730;
    if ((bStack_2f1 >> 4 & 1) != 0) {
      uVar10 = (uint)bStack_2f1 << 0x10;
      goto LAB_1000372c;
    }
    if ((((bStack_2f1 >> 6 & 1) != 0) && (-1 < (int)(uStack_300 | auStack_270[0]))) &&
       (((byte)uStack_2f4 >> 2 & 1) == 0)) {
      uVar12 = recovered_1000236c((long)pbVar1,0xfda3,&bStack_2f2);
      if (((int)uVar12 == 0) ||
         (uVar12 = recovered_1000236c((long)pbVar1,0xfda4,(byte *)((long)&uStack_2f4 + 1)),
         (int)uVar12 == 0)) goto LAB_10003730;
      *(uint *)(pbVar1 + 0x50) =
           (uint)bStack_2f1 << 0x10 | (uint)bStack_2f2 << 8 | (uint)PF_PART1(uStack_2f4, 1);
      piVar5 = DAT_1000c008;
      if ((bStack_2f2 & 0xe2) != 0 || (uStack_2f4 & 0x100) != 0) goto LAB_10003730;
      uVar10 = recovered_1000307c(pbVar1);
      recovered_10003c7c(piVar5,(ulong)uVar10,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
      recovered_10002a40(DAT_1000c008);
      bVar3 = *(byte *)(*(long *)(pbVar1 + 0xa0) + 1);
      uVar10 = (uint)bVar3;
      pbVar1[200] = bVar3;
      if ((bVar3 >> 4 & 1) != 0) {
        pbVar1[0x4c] = 0x7d;
        pbVar1[0x4d] = 1;
        pbVar1[0x4e] = 0;
        pbVar1[0x4f] = 0;
        goto LAB_1000372c;
      }
      if ((bVar3 >> 6 & 1) != 0) {
        uVar12 = recovered_10001f90((long)pbVar1,0x14);
        pbVar1[0x80] = 0;
        pbVar1[0x81] = 0;
        pbVar1[0x82] = 0;
        pbVar1[0x83] = 0;
        pbVar1[0x84] = 0;
        pbVar1[0x85] = 0;
        pbVar1[0x86] = 0;
        pbVar1[0x87] = 0;
        if ((int)uVar12 == 0) goto LAB_10003734;
        lVar18 = 0;
        goto LAB_10003774;
      }
      bVar7 = true;
    }
  }
  *(uint *)(pbVar1 + 0x50) = auStack_2f0[0];
  uVar10 = 10;
  if (999 < uVar17) {
    uVar10 = 1000;
  }
  bVar6 = recovered_10002778((long)pbVar1,(ulong)uVar10);
  if (!bVar6) goto LAB_100036f8;
  uVar17 = uVar10 + uVar17;
  goto LAB_10003584;
  while( true ) {
    uVar12 = recovered_1000236c((long)pbVar1,(int)lVar18 - 599U & 0xffff,
                                (byte *)((long)auStack_2f0 + lVar18 + -0x10));
    lVar18 = lVar18 + 1;
    if ((int)uVar12 == 0) break;
LAB_10003774:
    if (lVar18 == 5) {
      if ((byte)uStack_300 < 0x40) {
        uVar17 = (CONCAT13(uStack_2fc,PF_PART3(uStack_300, 1)) & 0xff00ff00) >> 8 |
                 (PF_PART3(uStack_300, 1) & 0xff00ff) << 8;
        uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
        if ((uVar17 & 0xfff9a008) == 0) {
          recovered_10002cf0((long)pbVar1,0xc,0,1);
          if ((extraout_w0_00 != 0) && (recovered_10002d40((long)pbVar1), extraout_w0_02 != 0)) {
            pbVar1[0x4c] = 0x4a;
            pbVar1[0x4d] = 1;
            pbVar1[0x4e] = 0;
            pbVar1[0x4f] = 0;
            uVar12 = recovered_10002888(pbVar1);
            if ((int)uVar12 != 0) {
              recovered_10003c7c(DAT_1000c008,uVar13,*(undefined8 *)(pbVar1 + 0x98),uVar14);
              recovered_10003c7c(DAT_1000c008,uVar13,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
              recovered_10002a40(DAT_1000c008);
              pbVar1[200] = *(byte *)(*(long *)(pbVar1 + 0xa0) + 1);
              if ((1 < *(uint *)(pbVar1 + 0xc0)) ||
                 ((*(uint *)(pbVar1 + 0xc0) == 1 && (*(uint *)(pbVar1 + 0xc4) == uVar8))))
              goto LAB_10003800;
              lVar18 = 0;
              auStack_270[0] = 0;
              auStack_270[1] = uVar16 - 1;
              goto LAB_1000385c;
            }
          }
          break;
        }
      }
      else {
        uVar17 = 0;
      }
      *(uint *)(pbVar1 + 0x50) = uVar17;
      break;
    }
  }
LAB_10003734:
  uVar2 = *(undefined4 *)(pbVar1 + 0x50);
  recovered_10002888(pbVar1);
  iVar9 = 0;
  *(undefined4 *)(pbVar1 + 0x50) = uVar2;
LAB_100032b0:
  if (iVar9 != 1) {
    if (iVar9 == 0) {
      if (*(int *)(pbVar1 + 0x54) == 0) {
        recovered_10001ffc((undefined1 *)&uStack_268,0x80,str_1000458e)
        ;
        recovered_100020e0((long)&uStack_268,0x80,param_2);
        recovered_10002088((long)&uStack_268,0x80,str_100045ae);
        recovered_100020e0((long)&uStack_268,0x80,uVar15);
        recovered_10002088((long)&uStack_268,0x80,str_100045bd);
        recovered_100020e0((long)&uStack_268,0x80,param_4);
        recovered_10001e10(pbVar1,(char *)&uStack_268);
      }
      recovered_10002294(pbVar1);
    }
    goto LAB_100031fc;
  }
  uVar15 = uVar16 + uVar15;
  goto LAB_1000324c;
LAB_1000385c:
  if (lVar18 == 2) goto LAB_10003970;
  uVar17 = auStack_270[lVar18];
  recovered_10003a40((long)pbVar1,uVar17 + uVar8,(long)&uStack_268,0);
  if (extraout_w0_01 != 1) {
    recovered_10001ffc((undefined1 *)auStack_2f0,0x60,str_100045f2);
    recovered_100020e0((long)auStack_2f0,0x60,uVar17 + uVar8);
LAB_10003964:
    recovered_10001e10(pbVar1,(char *)auStack_2f0);
    goto LAB_10003734;
  }
  iVar9 = 0;
  for (lVar19 = 0; lVar19 != 0x200; lVar19 = lVar19 + 1) {
    bVar3 = *(byte *)(*(long *)(pbVar1 + 0x98) + (ulong)(uVar17 << 9) + lVar19);
    bVar4 = *(byte *)((long)auStack_270 + lVar19 + 8);
    if ((uint)bVar3 != (uint)bVar4) {
      pbVar1[0x4c] = 0x72;
      pbVar1[0x4d] = 1;
      pbVar1[0x4e] = 0;
      pbVar1[0x4f] = 0;
      *(uint *)(pbVar1 + 0x50) = (uint)CONCAT11(bVar4,bVar3) - iVar9;
      recovered_10001ffc((undefined1 *)auStack_2f0,0x80,str_1000461e);
      recovered_100020e0((long)auStack_2f0,0x80,uVar17 + uVar8);
      recovered_10002088((long)auStack_2f0,0x80,str_1000463e);
      recovered_100020e0((long)auStack_2f0,0x80,(uint)lVar19);
      recovered_10002088((long)auStack_2f0,0x80,str_10004646);
      recovered_10002010((long)auStack_2f0,0x80,(uint)bVar4,2);
      recovered_10002088((long)auStack_2f0,0x80,str_1000464d);
      recovered_10002010((long)auStack_2f0,0x80,(uint)bVar3,2);
      goto LAB_10003964;
    }
    iVar9 = iVar9 + -0x10000;
  }
  lVar18 = lVar18 + 1;
  goto LAB_1000385c;
LAB_10003970:
  if (*(int *)(pbVar1 + 0xc0) == 0) {
    *(uint *)(pbVar1 + 0xc4) = uVar8;
  }
  *(int *)(pbVar1 + 0xc0) = *(int *)(pbVar1 + 0xc0) + 1;
LAB_10003800:
  for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
    *(undefined1 *)(param_3 + (ulong)uVar15 * 0x200 + uVar13) =
         *(undefined1 *)(*(long *)(pbVar1 + 0x98) + uVar13);
  }
  iVar9 = 1;
  goto LAB_100032b0;
LAB_100036f8:
  if ((bVar7) && (bVar7 = recovered_100027d0((long)pbVar1), !bVar7)) {
    pbVar1[0x4c] = 0x7c;
    pbVar1[0x4d] = 1;
    pbVar1[0x4e] = 0;
    pbVar1[0x4f] = 0;
    *(uint *)(pbVar1 + 0x50) = (uint)pbVar1[200];
    recovered_10001e10(pbVar1,str_100045c8);
  }
LAB_10003730:
  pbVar1[0x80] = 0;
  pbVar1[0x81] = 0;
  pbVar1[0x82] = 0;
  pbVar1[0x83] = 0;
  pbVar1[0x84] = 0;
  pbVar1[0x85] = 0;
  pbVar1[0x86] = 0;
  pbVar1[0x87] = 0;
  goto LAB_10003734;
}

#undef DAT_1000c000
#undef DAT_1000c008
#undef DAT_1000c010
#undef str_1000458e
#undef str_100045ae
#undef str_100045bd
#undef str_100045c8
#undef str_100045f2
#undef str_1000461e
#undef str_1000463e
#undef str_10004646
#undef str_1000464d
#undef uStack_300
#undef uStack_2fc
#undef uStack_2f8
#undef uStack_2f4
#undef bStack_2f2
#undef bStack_2f1
#undef auStack_2f0
#undef auStack_270
#undef uStack_268
#undef uStack_260
#undef uStack_25c
#undef uStack_25a
#undef uStack_259
#undef uStack_258
#undef uStack_256
#undef uStack_255
#undef uStack_254
#undef uStack_252
#undef uStack_251
#undef uStack_250
#undef uStack_24e
#undef uStack_24d
#undef uStack_24c
#undef uStack_24a
#undef uStack_249
#undef uStack_248
#undef uStack_240
#undef uStack_238
#undef uStack_234
#undef uStack_232
#undef uStack_231
#undef uStack_230
#undef uStack_228
#undef uStack_220

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef str_1000456d
#define str_1000456d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_100045ae
#define str_100045ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_100045bd
#define str_100045bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#define acStack_268 (*(char (*)[616])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ab8
 */

/* WARNING: Removing unreachable block (ram,0x10003258) */
/* WARNING: Removing unreachable block (ram,0x10003260) */
/* WARNING: Removing unreachable block (ram,0x10003264) */
/* WARNING: Removing unreachable block (ram,0x10003270) */
/* WARNING: Removing unreachable block (ram,0x10003284) */
/* WARNING: Removing unreachable block (ram,0x1000328c) */
/* WARNING: Removing unreachable block (ram,0x100032c0) */
/* WARNING: Removing unreachable block (ram,0x100032d8) */
/* WARNING: Removing unreachable block (ram,0x100032dc) */
/* WARNING: Removing unreachable block (ram,0x100032e8) */
/* WARNING: Removing unreachable block (ram,0x10003320) */
/* WARNING: Removing unreachable block (ram,0x10003420) */
/* WARNING: Removing unreachable block (ram,0x10003458) */
/* WARNING: Removing unreachable block (ram,0x10003474) */
/* WARNING: Removing unreachable block (ram,0x10003494) */
/* WARNING: Removing unreachable block (ram,0x100034b4) */
/* WARNING: Removing unreachable block (ram,0x100034d0) */
/* WARNING: Removing unreachable block (ram,0x100034e4) */
/* WARNING: Removing unreachable block (ram,0x100034f8) */
/* WARNING: Removing unreachable block (ram,0x1000350c) */
/* WARNING: Removing unreachable block (ram,0x10003530) */
/* WARNING: Removing unreachable block (ram,0x10003548) */
/* WARNING: Removing unreachable block (ram,0x10003558) */
/* WARNING: Removing unreachable block (ram,0x10003584) */
/* WARNING: Removing unreachable block (ram,0x1000358c) */
/* WARNING: Removing unreachable block (ram,0x100035a4) */
/* WARNING: Removing unreachable block (ram,0x100035b4) */
/* WARNING: Removing unreachable block (ram,0x100035b8) */
/* WARNING: Removing unreachable block (ram,0x100035d4) */
/* WARNING: Removing unreachable block (ram,0x100035e0) */
/* WARNING: Removing unreachable block (ram,0x100035ec) */
/* WARNING: Removing unreachable block (ram,0x100035fc) */
/* WARNING: Removing unreachable block (ram,0x10003608) */
/* WARNING: Removing unreachable block (ram,0x10003614) */
/* WARNING: Removing unreachable block (ram,0x10003728) */
/* WARNING: Removing unreachable block (ram,0x1000361c) */
/* WARNING: Removing unreachable block (ram,0x10003620) */
/* WARNING: Removing unreachable block (ram,0x10003630) */
/* WARNING: Removing unreachable block (ram,0x10003638) */
/* WARNING: Removing unreachable block (ram,0x10003644) */
/* WARNING: Removing unreachable block (ram,0x10003650) */
/* WARNING: Removing unreachable block (ram,0x1000367c) */
/* WARNING: Removing unreachable block (ram,0x10003748) */
/* WARNING: Removing unreachable block (ram,0x1000372c) */
/* WARNING: Removing unreachable block (ram,0x100036bc) */
/* WARNING: Removing unreachable block (ram,0x10003754) */
/* WARNING: Removing unreachable block (ram,0x10003770) */
/* WARNING: Removing unreachable block (ram,0x10003774) */
/* WARNING: Removing unreachable block (ram,0x1000379c) */
/* WARNING: Removing unreachable block (ram,0x10003828) */
/* WARNING: Removing unreachable block (ram,0x100037a8) */
/* WARNING: Removing unreachable block (ram,0x100037b8) */
/* WARNING: Removing unreachable block (ram,0x100037cc) */
/* WARNING: Removing unreachable block (ram,0x100037d4) */
/* WARNING: Removing unreachable block (ram,0x100037e4) */
/* WARNING: Removing unreachable block (ram,0x1000383c) */
/* WARNING: Removing unreachable block (ram,0x10003840) */
/* WARNING: Removing unreachable block (ram,0x10003850) */
/* WARNING: Removing unreachable block (ram,0x1000385c) */
/* WARNING: Removing unreachable block (ram,0x10003970) */
/* WARNING: Removing unreachable block (ram,0x10003978) */
/* WARNING: Removing unreachable block (ram,0x10003980) */
/* WARNING: Removing unreachable block (ram,0x10003800) */
/* WARNING: Removing unreachable block (ram,0x10003804) */
/* WARNING: Removing unreachable block (ram,0x10003810) */
/* WARNING: Removing unreachable block (ram,0x10003834) */
/* WARNING: Removing unreachable block (ram,0x10003864) */
/* WARNING: Removing unreachable block (ram,0x1000398c) */
/* WARNING: Removing unreachable block (ram,0x1000388c) */
/* WARNING: Removing unreachable block (ram,0x100038a0) */
/* WARNING: Removing unreachable block (ram,0x100038a8) */
/* WARNING: Removing unreachable block (ram,0x100038d0) */
/* WARNING: Removing unreachable block (ram,0x10003964) */
/* WARNING: Removing unreachable block (ram,0x100038bc) */
/* WARNING: Removing unreachable block (ram,0x100038c8) */
/* WARNING: Removing unreachable block (ram,0x1000382c) */
/* WARNING: Removing unreachable block (ram,0x1000377c) */
/* WARNING: Removing unreachable block (ram,0x10003798) */
/* WARNING: Removing unreachable block (ram,0x100036c0) */
/* WARNING: Removing unreachable block (ram,0x100036c8) */
/* WARNING: Removing unreachable block (ram,0x100036cc) */
/* WARNING: Removing unreachable block (ram,0x100036dc) */
/* WARNING: Removing unreachable block (ram,0x100036f8) */
/* WARNING: Removing unreachable block (ram,0x10003700) */
/* WARNING: Removing unreachable block (ram,0x10003708) */
/* WARNING: Removing unreachable block (ram,0x10003730) */
/* WARNING: Removing unreachable block (ram,0x10003734) */
/* WARNING: Removing unreachable block (ram,0x100036f0) */
/* WARNING: Removing unreachable block (ram,0x10003430) */
/* WARNING: Removing unreachable block (ram,0x10003454) */
/* WARNING: Removing unreachable block (ram,0x100034a4) */
/* WARNING: Removing unreachable block (ram,0x100034a8) */
/* WARNING: Removing unreachable block (ram,0x100039d8) */

undefined8 recovered_10001ab8(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[672] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  int extraout_w0 = 0;
  undefined8 uVar3;
  uint uVar4;

  pbVar2 = &DAT_1000c010 + (ulong)param_1 * 0xd0;
  if (DAT_1000c000 <= param_1) {
    pbVar2 = (byte *)0x0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_1000c000 <= param_1) {
    return 0;
  }
  recovered_10003164((long)pbVar2);
  pbVar2[0x54] = 0;
  pbVar2[0x55] = 0;
  pbVar2[0x56] = 0;
  pbVar2[0x57] = 0;
  if ((*(int *)(pbVar2 + 0x60) != 0) &&
     (param_2 < *(uint *)(pbVar2 + 0x3c) && param_4 - 1 < *(uint *)(pbVar2 + 0x3c) - param_2)) {
    bVar1 = 0x800000 < (ulong)param_4 + (ulong)param_2;
    if ((pbVar2[0x45] & 1) == 0 && bVar1) {
      if ((pbVar2[0x45] & 1) != 0 || !bVar1) goto LAB_10003240;
    }
    else if ((pbVar2[0x46] & 1) == 0) {
LAB_10003240:
      for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
        recovered_10003a40((long)pbVar2,uVar4 + param_2,param_3 + (ulong)uVar4 * 0x200,1);
        if (extraout_w0 != 1) {
          if (extraout_w0 == 0) {
            if (*(int *)(pbVar2 + 0x54) == 0) {
              recovered_10001ffc(acStack_268,0x80,str_1000456d);
              recovered_100020e0((long)acStack_268,0x80,param_2);
              recovered_10002088((long)acStack_268,0x80,str_100045ae);
              recovered_100020e0((long)acStack_268,0x80,uVar4);
              recovered_10002088((long)acStack_268,0x80,str_100045bd);
              recovered_100020e0((long)acStack_268,0x80,param_4);
              recovered_10001e10(pbVar2,acStack_268);
            }
            recovered_10002294(pbVar2);
          }
          goto LAB_100031fc;
        }
      }
      uVar3 = 1;
      goto LAB_10003200;
    }
  }
LAB_100031fc:
  uVar3 = 0;
LAB_10003200:
  pbVar2[0x38] = 0;
  pbVar2[0x39] = 0;
  pbVar2[0x3a] = 0;
  pbVar2[0x3b] = 0;
  return uVar3;
}

#undef DAT_1000c000
#undef DAT_1000c010
#undef str_1000456d
#undef str_100045ae
#undef str_100045bd
#undef acStack_268

#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef DAT_1000c070
#define DAT_1000c070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7decU)))
#undef str_10004654
#define str_10004654 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ac0
 */

undefined8 recovered_10001ac0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;
  int extraout_w0 = 0;
  undefined8 uVar3;

  if (DAT_1000c000 <= param_1) {
    return 0;
  }
  uVar2 = (ulong)param_1;
  pbVar1 = &DAT_1000c010 + uVar2 * 0xd0;
  recovered_10003164((long)pbVar1);
  if ((&DAT_1000c070)[uVar2 * 0x34] != 0) {
    recovered_10002d40((long)pbVar1);
    if (extraout_w0 != 0) {
      uVar3 = 1;
      goto LAB_10001b28;
    }
    if ((&DAT_1000c070)[uVar2 * 0x34] != 0) {
      recovered_10001e10(pbVar1,str_10004654);
      recovered_10002294(pbVar1);
    }
  }
  uVar3 = 0;
LAB_10001b28:
  *(undefined4 *)(uVar2 * 0xd0 + ((uintptr_t)pf_module_state+0x7dc4U)) = 0;
  return uVar3;
}

#undef DAT_1000c000
#undef DAT_1000c010
#undef DAT_1000c070
#undef str_10004654

#undef DAT_10004674
#define DAT_10004674 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f0U)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b34
 */

undefined8 recovered_10001b34(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;

  uVar5 = 0;
  puVar1 = &DAT_1000c010 + (ulong)param_1 * 0xd0;
  if (DAT_1000c000 <= param_1) {
    puVar1 = (undefined *)0x0;
  }
  if ((param_2 != 0) && (param_1 < DAT_1000c000)) {
    recovered_10003164((long)puVar1);
    if (*(int *)(puVar1 + 0x60) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = recovered_10002528((long)puVar1,(uint *)0x0);
      if ((int)uVar5 != 0) {
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + lVar6) = (&DAT_10004674)[lVar6];
        }
        *(undefined1 *)(param_2 + 4) = uVar2;
        *(undefined1 *)(param_2 + 5) = uVar3;
        *(undefined1 *)(param_2 + 6) = uVar4;
        for (lVar6 = 0; lVar6 != 4; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + 8 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 8; lVar6 = lVar6 + 1) {
          *(undefined1 *)(param_2 + 0x10 + lVar6) = 0;
        }
        for (lVar6 = 0; lVar6 != 0x10; lVar6 = lVar6 + 1) {
          *(undefined *)(param_2 + 0x20 + lVar6) = puVar1[lVar6 + 0x6a];
        }
      }
    }
    *(undefined4 *)(puVar1 + 0x38) = 0;
  }
  return uVar5;
}

#undef DAT_10004674
#undef DAT_1000c000
#undef DAT_1000c010

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c34
 */

void recovered_10001c34(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(long *)(param_1 + 0x30) != 0) {
    recovered_10002294(param_1);
    recovered_10001f90((long)param_1,0x18);
  }
  if (*(int *)(param_1 + 100) != 0) {
    recovered_100021ec(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4);
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
  }
  return;
}

#undef DAT_1000c008

#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c88
 */

undefined8
recovered_10001c88(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001dc4(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001dc4(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001dc4(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001dc4(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
        if ((int)uVar2 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)(param_5 + 4) = PF_PART4(local_48, 4);
        *(ushort *)(param_5 + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        param_5[9] = (char)((ulong)local_48 >> 0x10);
        *param_5 = (char)param_2;
        param_5[1] = (char)param_3;
        param_5[2] = (char)param_4;
        param_5[8] = (char)((ulong)local_48 >> 0x18);
        param_5[0xc] = PF_PART1(local_4c, 2);
        for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
          uStack_50 = 0;
          uVar2 = recovered_10001dc4(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),4,(long)&uStack_50);
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)(param_5 + lVar3 * 4 + 0x14) = uVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_50
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc4
 */

undefined8
recovered_10001dc4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10004542
#define DAT_10004542 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2beU)))
#undef DAT_10004544
#define DAT_10004544 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef DAT_10004546
#define DAT_10004546 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2c2U)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef str_10004532
#define str_10004532 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aeU)))
#undef str_10004549
#define str_10004549 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c5U)))
#undef str_10004552
#define str_10004552 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ceU)))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e10
 */

void recovered_10001e10(byte *param_1,char *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};


  recovered_10001ffc(auStack_e0,0xc0,str_10004532);
  recovered_10002010((long)auStack_e0,0xc0,(uint)*param_1,2);
  recovered_10002088((long)auStack_e0,0xc0,&DAT_10004542);
  recovered_10002010((long)auStack_e0,0xc0,(uint)param_1[1],2);
  recovered_10002088((long)auStack_e0,0xc0,&DAT_10004544);
  recovered_100020e0((long)auStack_e0,0xc0,(uint)param_1[2]);
  recovered_10002088((long)auStack_e0,0xc0,&DAT_10004546);
  recovered_10002088((long)auStack_e0,0xc0,param_2);
  recovered_10002088((long)auStack_e0,0xc0,str_10004549);
  recovered_100020e0((long)auStack_e0,0xc0,*(uint *)(param_1 + 0x4c));
  recovered_10002088((long)auStack_e0,0xc0,str_10004552);
  recovered_10002010((long)auStack_e0,0xc0,*(uint *)(param_1 + 0x50),8);
  if ((((DAT_1000c008 != (int *)0x0) && (*DAT_1000c008 == 0x54584b57)) &&
      (0x2b < (uint)DAT_1000c008[2])) && (DAT_1000c008[10] != 0)) {
    (*(code *)(ulong)(uint)DAT_1000c008[10])(auStack_e0);
  }
  param_1[0x54] = 1;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}

#undef DAT_10004542
#undef DAT_10004544
#undef DAT_10004546
#undef DAT_1000c008
#undef str_10004532
#undef str_10004549
#undef str_10004552
#undef auStack_e0

#undef DAT_10004320
#define DAT_10004320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f08
 */

ulong recovered_10001f08(byte *param_1,uint param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uStack_24 = 0;
  param_1[0x4c] = 3;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(uint *)(param_1 + 0x50) = param_2 | 0x40000;
  uVar1 = recovered_100021ec(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4);
  if ((int)uVar1 != 0) {
    param_1[100] = 1;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    *(undefined8 *)(param_1 + 0x4c) = DAT_10004320;
    uVar1 = recovered_10001dc4(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4,2,
                               (long)&uStack_24);
    if ((int)uVar1 != 0) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | uStack_24;
      uVar1 = (ulong)((uStack_24 & 0x406) == 0x402);
    }
  }
  return uVar1;
}

#undef DAT_10004320
#undef DAT_1000c008
#undef uStack_24

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f90
 */

undefined8 recovered_10001f90(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (((*(long *)(param_1 + 0x30) != 0) && (DAT_1000c008 != (int *)0x0)) &&
     (*DAT_1000c008 == 0x54584b57)) {
    uVar1 = *(long *)(param_1 + 0x30) + (param_2 & 0xffffffff);
    if ((0xc3 < (uint)DAT_1000c008[2]) && (DAT_1000c008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_1000c008[0x30])(uVar1,4);
      return uVar2;
    }
    if ((uVar1 >> 0x20 == 0) && ((0x6f < (uint)DAT_1000c008[2] && (DAT_1000c008[0x1b] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_1000c008[0x1b])(uVar1,4);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ffc
 */

void recovered_10001ffc(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_100021d0((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002010
 */

void recovered_10002010(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10002190(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002088
 */

void recovered_10002088(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_100021d0(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020e0
 */

void recovered_100020e0(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_100021d0(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10002190(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

void recovered_10002190(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100021d0(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021d0
 */

long recovered_100021d0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ec
 */

undefined8
recovered_100021ec(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,param_5,2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002230
 */

undefined8 recovered_10002230(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return uVar1;
}


#define local_11 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002264
 */

void recovered_10002264(long param_1,int param_2,undefined8 param_3,byte param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_11 = param_4;
  recovered_100025d0(param_1,param_2,1,param_3,&local_11);
  return;
}

#undef local_11

#define abStack_a0 (*(byte (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002294
 */

void recovered_10002294(byte *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    recovered_10002888(param_1);
  }
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  recovered_100029e0((long)param_1);
  recovered_10002850((long)param_1);
  recovered_10002264((long)param_1,0xfd55,4,0);
  recovered_10002264((long)param_1,0xfd69,4,0);
  recovered_10002264((long)param_1,0xfd50,3,3);
  recovered_100025d0((long)param_1,0xfe75,1,6,abStack_a0 + 0x8f);
  return;
}

#undef abStack_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002314
 */

bool recovered_10002314(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int extraout_w0 = 0;
  ulong uVar2;
  byte *pbVar3;

  uVar1 = 0;
  pbVar3 = (byte *)(param_2 + 3);
  do {
    uVar2 = uVar1;
    if ((param_3 & 0xffffffff) == uVar2) break;
    recovered_10002264(param_1,(uint)*(ushort *)(pbVar3 + -3),(ulong)pbVar3[-1],*pbVar3);
    uVar1 = uVar2 + 1;
    pbVar3 = pbVar3 + 4;
  } while (extraout_w0 != 0);
  return (param_3 & 0xffffffff) <= uVar2;
}


#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000236c
 */

/* WARNING: Removing unreachable block (ram,0x100026a4) */

undefined8 recovered_1000236c(long param_1,int param_2,byte *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;

  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  uStack_44 = 0;
  if (param_3 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = recovered_10001f90(param_1,0x10);
    if ((int)uVar2 != 0) {
      iVar4 = 0x3e9;
      do {
        iVar4 = iVar4 + -1;
        if (((iVar4 == 0) || (uVar2 = recovered_100026bc(param_1,0x10,&uStack_44), (int)uVar2 == 0))
           || (uStack_44 == 0xffffffff)) break;
        if (-1 < (int)uStack_44) {
          *param_3 = (byte)uStack_44;
          return 1;
        }
        bVar1 = recovered_10002778(param_1,1);
      } while (bVar1);
      uVar3 = uStack_44 & 0xffff | param_2 << 0x10;
      goto LAB_10002694;
    }
    uVar3 = (uint)*param_3;
  }
  uVar3 = uVar3 | param_2 << 0x10;
LAB_10002694:
  *(uint *)(param_1 + 0x50) = uVar3;
  return 0;
}

#undef uStack_44

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002384
 */

undefined8 recovered_10002384(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  undefined8 extraout_x0 = 0;
  undefined8 uVar3;
  undefined8 extraout_x0_00 = 0;
  undefined8 extraout_x0_01 = 0;
  undefined8 extraout_x0_02 = 0;
  undefined8 extraout_x0_03 = 0;
  undefined8 extraout_x0_04 = 0;
  undefined8 extraout_x0_05 = 0;
  undefined8 extraout_x0_06 = 0;
  byte bVar4;
  uint uVar5;
  uint uVar6;

  uVar6 = *(uint *)(param_1 + 0x40);
  if (uVar6 < 0x39387 && param_2 == 0) {
    return 0;
  }
  if (uVar6 < 6000000) {
    param_2 = 1;
  }
  if ((param_2 & 1) == 0) {
    if (24999999 < uVar6) {
      uVar6 = 25000000;
    }
    uVar6 = uVar6 / 1000000 << 1;
  }
  else {
    uVar6 = 0x1e;
  }
  bVar4 = 1;
  for (uVar5 = uVar6 - 2; uVar5 < 0x50 && bVar4 < 4; uVar5 = uVar5 * 2 + 2) {
    bVar4 = bVar4 + 1;
  }
  if (uVar5 - 0x50 < 0x81) {
    iVar1 = uVar6 * 500000;
    if (param_2 != 0) {
      iVar1 = 0x39387;
    }
    recovered_10002264(param_1,0xfc02,1,1);
    uVar3 = extraout_x0_00;
    if ((int)extraout_x0_00 != 0) {
      cVar2 = '\0';
      if (uVar6 != 0) {
        cVar2 = (char)(0x7d / uVar6);
      }
      recovered_10002264(param_1,0xfc03,0xff,cVar2 + 3U | bVar4 << 4);
      uVar3 = extraout_x0_01;
      if (((((int)extraout_x0_01 != 0) &&
           (recovered_10002264(param_1,0xfc11,0xff,0x50), uVar3 = extraout_x0, (int)extraout_x0 != 0
           )) && (recovered_10002264(param_1,0xfc12,7,0), uVar3 = extraout_x0_02,
                 (int)extraout_x0_02 != 0)) &&
         ((recovered_10002264(param_1,0xfc0f,0xff,(byte)uVar5), uVar3 = extraout_x0_03,
          (int)extraout_x0_03 != 0 &&
          (recovered_10002264(param_1,0xfc11,0x80,0x80), uVar3 = extraout_x0_04,
          (int)extraout_x0_04 != 0)))) {
        recovered_10002230(DAT_1000c008,1000);
        recovered_10002264(param_1,0xfc02,1,0);
        uVar3 = extraout_x0_05;
        if ((int)extraout_x0_05 != 0) {
          bVar4 = 0x90;
          if (param_2 == 0) {
            bVar4 = 0x10;
          }
          recovered_10002264(param_1,0xfda0,0xff,bVar4);
          uVar3 = extraout_x0_06;
          if ((int)extraout_x0_06 != 0) {
            *(int *)(param_1 + 0x58) = iVar1;
            uVar3 = 1;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

#undef DAT_1000c008

#define bStack_25 (*(byte *)(pf_stack_frame + 27))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002528
 */

undefined8 recovered_10002528(long param_1,uint *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uStack_24 = 0;
  bStack_25 = 0;
  uVar1 = recovered_100026bc(param_1,0x14,&uStack_24);
  if ((int)uVar1 == 0) {
    uStack_24 = 0x140000;
  }
  else if (((uStack_24 & 0xc10000) == 0x10000) &&
          (((uStack_24 >> 0x19 & 1) == 0 || (*(int *)(param_1 + 0x5c) == 0)))) {
    uVar1 = recovered_1000236c(param_1,0xfd6e,&bStack_25);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if ((bStack_25 & 6) == 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uStack_24;
      }
      return 1;
    }
    uVar1 = 0;
    uStack_24 = uStack_24 | bStack_25;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x50) = uStack_24;
  return uVar1;
}

#undef bStack_25
#undef uStack_24

#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d0
 */

undefined8
recovered_100025d0(long param_1,int param_2,uint param_3,undefined8 param_4,byte *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;

  uStack_44 = 0;
  if (param_5 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = recovered_10001f90(param_1,0x10);
    if ((int)uVar2 != 0) {
      iVar4 = 0x3e9;
      do {
        iVar4 = iVar4 + -1;
        if (((iVar4 == 0) || (uVar2 = recovered_100026bc(param_1,0x10,&uStack_44), (int)uVar2 == 0))
           || (uStack_44 == 0xffffffff)) break;
        if (-1 < (int)uStack_44) {
          if (((param_3 & 1) == 0) || ((uint)*param_5 == (uStack_44 & 0xff))) {
            *param_5 = (byte)uStack_44;
            return 1;
          }
          goto LAB_10002674;
        }
        bVar1 = recovered_10002778(param_1,1);
      } while (bVar1);
      uStack_44 = uStack_44 & 0xffff;
LAB_10002674:
      uVar3 = uStack_44 & 0xffff | param_2 << 0x10;
      goto LAB_10002694;
    }
    uVar3 = (uint)*param_5;
  }
  uVar3 = uVar3 | param_2 << 0x10;
LAB_10002694:
  *(uint *)(param_1 + 0x50) = uVar3;
  return 0;
}

#undef uStack_44

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026bc
 */

undefined8 recovered_100026bc(long param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  undefined8 uVar3;

  local_24 = 0;
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  if ((DAT_1000c008 == (int *)0x0) || (*DAT_1000c008 != 0x54584b57)) {
LAB_1000276c:
    uVar3 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x30) + (param_2 & 0xffffffff);
    if (((uint)DAT_1000c008[2] < 0xc0) || (DAT_1000c008[0x2f] == 0)) {
      if (((uVar1 >> 0x20 != 0) || ((uint)DAT_1000c008[2] < 0x6c)) || (DAT_1000c008[0x1a] == 0))
      goto LAB_1000276c;
      uVar3 = (*(code *)(ulong)(uint)DAT_1000c008[0x1a])(uVar1,4,&local_24);
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = (*(code *)(ulong)(uint)DAT_1000c008[0x2f])(uVar1,4,&local_24);
      iVar2 = (int)uVar3;
    }
    if (iVar2 != 0) {
      *param_3 = local_24;
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_1000c008
#undef local_24

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002778
 */

bool recovered_10002778(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;

  bVar4 = recovered_100027d0(param_1);
  bVar3 = false;
  if (bVar4) {
    puVar6 = *(uint **)(param_1 + 0x80);
    if (puVar6 != (uint *)0x0) {
      uVar2 = *puVar6;
      uVar1 = uVar2;
      if ((uint)param_2 <= uVar2) {
        uVar1 = (uint)param_2;
      }
      param_2 = (ulong)uVar1;
      *puVar6 = uVar2 - uVar1;
    }
    uVar5 = recovered_10002230(DAT_1000c008,param_2);
    bVar3 = (int)uVar5 != 0;
  }
  return bVar3;
}

#undef DAT_1000c008

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d0
 */

bool recovered_100027d0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  int *piVar3;

  piVar3 = *(int **)(param_1 + 0x80);
  if (piVar3 == (int *)0x0) {
    bVar1 = true;
  }
  else if (*piVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = recovered_10002820(DAT_1000c008);
    bVar1 = (uint)((int)uVar2 - piVar3[1]) < 0x5c;
  }
  return bVar1;
}

#undef DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

undefined8 recovered_10002820(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x30)) ||
     (param_1[0xb] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0xb])();
  return uVar1;
}


#define abStack_a0 (*(byte (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002850
 */

void recovered_10002850(long param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};


  recovered_10002264(param_1,0xfd54,0x44,0x44);
  recovered_100025d0(param_1,0xfda5,1,0xc0,abStack_a0 + 0x8f);
  return;
}

#undef abStack_a0

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#define bStack_49 (*(byte *)(pf_stack_frame + 23))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002888
 */

undefined8 recovered_10002888(byte *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;

  uVar4 = recovered_10001f90((long)param_1,4);
  uVar5 = recovered_10001f90((long)param_1,0xc);
  recovered_10002264((long)param_1,0xfe2c,0x80,0x80);
  recovered_10002264((long)param_1,0xfe34,0x80,0x80);
  uVar6 = recovered_10001f90((long)param_1,0x18);
  recovered_10002a40(DAT_1000c008);
  iVar8 = 0x3e9;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
    uStack_48 = 0;
    bStack_49 = 0;
    uVar7 = recovered_100026bc((long)param_1,4,(undefined4 *)&uStack_48);
    bVar1 = 0;
    if (((int)uVar7 == 0) || ((uint)uStack_48 == -1)) goto LAB_1000298c;
    uVar7 = recovered_100026bc((long)param_1,0xc,(undefined4 *)((long)&uStack_48 + 4));
    bVar1 = 0;
    if (((int)uVar7 == 0) || (PF_PART4(uStack_48, 4) == -1)) goto LAB_1000298c;
    uVar7 = recovered_1000236c((long)param_1,0xfe2c,&bStack_49);
    if ((int)uVar7 == 0) break;
    if ((-1 < (int)((uint)uStack_48 | PF_PART4(uStack_48, 4))) && ((bStack_49 >> 2 & 1) == 0)) {
      bVar1 = 1;
      goto LAB_1000298c;
    }
    bVar2 = recovered_10002778((long)param_1,10);
  } while (bVar2);
  bVar1 = 0;
LAB_1000298c:
  uVar3 = recovered_10002a70(param_1,0);
  recovered_10002a40(DAT_1000c008);
  if (((bool)((((((int)uVar6 != 0 && extraout_w0_00 != 0) && extraout_w0 != 0) && (int)uVar5 != 0)
              && (int)uVar4 != 0) & bVar1)) && ((int)uVar3 != 0)) {
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    param_1[0xb8] = 1;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
  }
  return uVar4;
}

#undef DAT_1000c008
#undef bStack_49
#undef uStack_48

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029e0
 */

void recovered_100029e0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0xb4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(long *)(param_1 + 0x88) != 0) {
      recovered_10002b2c(DAT_1000c008,*(long *)(param_1 + 0x88));
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      recovered_10002b2c(DAT_1000c008,*(long *)(param_1 + 0x90));
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

#undef DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

void recovered_10002a40(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a70
 */

ulong recovered_10002a70(byte *param_1,int param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  local_38 = 0;
  uVar2 = recovered_10001dc4(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4,2,
                             (long)&local_38 + 4);
  if ((int)uVar2 == 0 || PF_PART4(local_38, 4) == 0xffff) {
    uVar1 = 0;
  }
  else {
    uVar3 = PF_PART4(local_38, 4) | 0x406;
    if (param_2 == 0) {
      uVar3 = PF_PART4(local_38, 4) & 0xfffffffb | 0x402;
    }
    local_38 = CONCAT44(uVar3,(uint)local_38);
    uVar1 = recovered_100021ec(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4);
    if (((int)uVar1 != 0) &&
       (uVar1 = recovered_10001dc4(DAT_1000c008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],
                                   4,2,(long)&local_38), (int)uVar1 != 0)) {
      uVar3 = 0x406;
      if (param_2 == 0) {
        uVar3 = 0x402;
      }
      uVar1 = (ulong)(((uint)local_38 & 0x406) == uVar3);
    }
  }
  return uVar1;
}

#undef DAT_1000c008
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b2c
 */

void recovered_10002b2c(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x3c)) ||
     (param_1[0xe] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xe])(param_2);
  return;
}


#define bStack_60 (*(byte *)(pf_stack_frame + 16))
#define auStack_5f (*(undefined1 (*)[95])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

void recovered_10002b60(long param_1,int param_2,uint param_3,int param_4,uint *param_5,long param_6
                       )

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  undefined8 uVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;

  pbVar3 = &bStack_60;
  *(int *)(param_1 + 0x4c) = param_2 + 100;
  uVar1 = recovered_10002528(param_1,(uint *)0x0);
  if (((((int)uVar1 != 0) && (recovered_10002e14(param_1,(byte)param_2,param_3), extraout_w0 != 0))
      && (recovered_10002264(param_1,0xfda1,0xff,(byte)param_4), extraout_w0_01 != 0)) &&
     ((recovered_10002264(param_1,0xfd5b,1,1), extraout_w0_02 != 0 &&
      (recovered_10002264(param_1,0xfdb3,0xff,0x88), extraout_w0_00 != 0)))) {
    iVar2 = 5000;
    if (param_4 != 9) {
      iVar2 = 1000;
    }
    uVar1 = recovered_10002e84(param_1,1,(uint)(param_4 - 6U < 0xfffffffe),iVar2);
    if (((int)uVar1 != 0) && (param_4 != 4)) {
      lVar4 = 0x10;
      if (param_4 != 2) {
        lVar4 = 5;
      }
      uVar5 = 64000;
      if (param_4 != 2) {
        uVar5 = 0xfda9;
      }
      do {
        if (lVar4 == 0) {
          if (param_4 != 2) {
            recovered_10002fec(&bStack_60,param_5);
            return;
          }
          if (param_6 == 0) {
            return;
          }
          if (0x3f < bStack_60) {
            return;
          }
          for (lVar4 = 0; lVar4 != 0xf; lVar4 = lVar4 + 1) {
            *(undefined1 *)(param_6 + lVar4) = auStack_5f[lVar4];
          }
          *(undefined1 *)(param_6 + 0xf) = 1;
          return;
        }
        uVar1 = recovered_1000236c(param_1,uVar5 & 0xffff,pbVar3);
        lVar4 = lVar4 + -1;
        uVar5 = uVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while ((int)uVar1 != 0);
    }
  }
  return;
}

#undef bStack_60
#undef auStack_5f

#define uStack_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cf0
 */

void recovered_10002cf0(long param_1,int param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int extraout_w0 = 0;
  int iVar1;

  uStack_24 = 0;
  iVar1 = 9;
  if (param_4 == 0) {
    iVar1 = 1;
  }
  recovered_10002b60(param_1,param_2,param_3,iVar1,&uStack_24,0);
  if ((extraout_w0 != 0) && ((uStack_24 & 0xfff9a008) != 0)) {
    *(uint *)(param_1 + 0x50) = uStack_24;
  }
  return;
}

#undef uStack_24

#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#define local_3c (*(uint (*)[15])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

void recovered_10002d40(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int extraout_w0 = 0;
  undefined8 uVar2;
  int iVar3;

  local_3c[1] = 5000000;
  uVar2 = recovered_10002820(DAT_1000c008);
  local_3c[2] = (uint)uVar2;
  *(uint **)(param_1 + 0x80) = local_3c + 1;
  iVar3 = 0x1389;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    local_3c[0] = 0;
    bVar1 = recovered_100027d0(param_1);
    if ((((!bVar1) ||
         (recovered_10002b60(param_1,0xd,*(uint *)(param_1 + 0x48),1,local_3c,0), extraout_w0 == 0))
        || (*(uint *)(param_1 + 0x50) = local_3c[0], (local_3c[0] & 0xfff9a008) != 0)) ||
       (((bVar1 = recovered_100027d0(param_1), !bVar1 || ((local_3c[0] & 0xfff9bf08) == 0x900)) ||
        (bVar1 = recovered_10002778(param_1,1000), !bVar1)))) break;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

#undef DAT_1000c008
#undef local_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e14
 */

void recovered_10002e14(long param_1,byte param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int iVar1;
  uint uVar2;

  recovered_10002264(param_1,0xfda9,0xff,param_2 | 0x40);
  if (extraout_w0 != 0) {
    iVar1 = 0;
    uVar2 = 0x18;
    do {
      if (iVar1 == 4) {
        return;
      }
      recovered_10002264(param_1,iVar1 - 0x256U & 0xffff,0xff,
                         (byte)(param_3 >> (ulong)(uVar2 & 0x1f)));
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 8;
    } while (extraout_w0_00 != 0);
  }
  return;
}


#define local_63 (*(byte *)(pf_stack_frame + 29))
#define local_62 (*(byte (*)[98])(pf_stack_frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e84
 */

undefined8 recovered_10002e84(long param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;

  uVar8 = 0;
  local_62[0] = 0;
  local_62[1] = 0;
  local_63 = 0;
  uVar6 = 0xffffff9f;
  if (param_2 == 0) {
    uVar6 = 0xffffffbf;
  }
  while (uVar2 = param_4 * 1000 - uVar8, uVar8 <= (uint)(param_4 * 1000) && uVar2 != 0) {
    uVar4 = recovered_10002528(param_1,(uint *)0x0);
    if (((int)uVar4 == 0) ||
       (uVar4 = recovered_1000236c(param_1,0xfdb3,local_62 + 1), (int)uVar4 == 0))
    goto LAB_10002fb8;
    if ((local_62[1] >> 4 & 1) != 0) break;
    if ((uVar6 | local_62[1]) == 0xffffffff) {
      bVar5 = 0x80;
      if (param_2 == 0) {
        bVar5 = 0xe2;
      }
      bVar7 = 0xe2;
      if (param_3 == 0) {
        bVar7 = 0x62;
      }
      uVar4 = recovered_1000236c(param_1,0xfda3,local_62);
      if (((int)uVar4 == 0) ||
         (uVar4 = recovered_1000236c(param_1,0xfda4,&local_63), (int)uVar4 == 0)) goto LAB_10002fb8;
      if (((bVar7 & bVar5 & local_62[0]) == 0) && ((local_63 & 1) == 0)) {
        return 1;
      }
      break;
    }
    uVar9 = 10;
    if (999 < uVar8) {
      uVar9 = 1000;
    }
    if (uVar2 <= uVar9) {
      uVar9 = uVar2;
    }
    bVar3 = recovered_10002778(param_1,(ulong)uVar9);
    uVar8 = uVar9 + uVar8;
    if (!bVar3) break;
  }
  uVar4 = recovered_1000236c(param_1,0xfda3,local_62);
  if (((int)uVar4 != 0) && (uVar4 = recovered_1000236c(param_1,0xfda4,&local_63), (int)uVar4 != 0))
  {
    *(uint *)(param_1 + 0x50) = (uint)local_62[1] << 0x10 | (uint)local_62[0] << 8 | (uint)local_63;
  }
LAB_10002fb8:
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  recovered_10002850(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return 0;
}

#undef local_63
#undef local_62

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fec
 */

undefined8 recovered_10002fec(byte *param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    if (0x3f < *param_1) {
      return 0;
    }
    uVar1 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar2 = 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003020
 */

uint recovered_10003020(long param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = 0;
  if ((param_1 != 0) && (param_3 <= param_2 && param_2 - param_3 < 0x20)) {
    uVar1 = 0;
    uVar2 = 0x7f - param_2;
    do {
      uVar1 = *(byte *)(param_1 + (ulong)(uVar2 >> 3)) >> (ulong)(param_2 & 7) & 1 | uVar1 << 1;
      param_2 = param_2 - 1;
      uVar2 = uVar2 + 1;
    } while (param_3 - 1 != param_2);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

uint recovered_1000307c(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (param_1 != (byte *)0x0) {
    uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 0xb | (uint)param_1[2] << 8 | 0x80000000;
  }
  return uVar1;
}


#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030a0
 */

ulong recovered_100030a0(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;

  if ((DAT_1000c008 != (int *)0x0) && (*DAT_1000c008 == 0x54584b57)) {
    if (0xfb < (uint)DAT_1000c008[2]) {
      uVar3 = DAT_1000c008[0x3e];
      if (uVar3 == 0) goto LAB_100030e0;
LAB_100030e8:
      uVar2 = (*(code *)(ulong)uVar3)(0x1fff);
      goto LAB_100030fc;
    }
    if (0x37 < (uint)DAT_1000c008[2]) {
LAB_100030e0:
      uVar3 = DAT_1000c008[0xd];
      if (uVar3 != 0) goto LAB_100030e8;
    }
  }
  uVar2 = 0;
LAB_100030fc:
  *param_1 = uVar2;
  uVar1 = 0;
  if (uVar2 < 0xfffffffffffff001 && uVar2 != 0) {
    uVar1 = uVar2 + 0xfff & 0xfffffffffffff000;
  }
  return uVar1;
}

#undef DAT_1000c008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

undefined8 recovered_10003120(int *param_1,undefined8 param_2,long param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10003160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,0x1000);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003164
 */

void recovered_10003164(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;

  piVar1 = (int *)(param_1 + 0x38);
  while( true ) {
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      { __typeof__(*piVar1) pf_exclusive_expected = iVar2;
bVar4 = __atomic_compare_exchange_n(&(*piVar1),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar3 = bVar4 ? 0 : 1;
}
    } while (cVar3 != '\0');
    if (iVar2 == 0) break;
    do {
    } while (*piVar1 != 0);
  }
  return;
}


#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef DAT_1000c010
#define DAT_1000c010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d8cU)))
#undef str_1000456d
#define str_1000456d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e9U)))
#undef str_1000458e
#define str_1000458e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#undef str_100045ae
#define str_100045ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32aU)))
#undef str_100045bd
#define str_100045bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x339U)))
#undef str_100045c8
#define str_100045c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#undef str_100045f2
#define str_100045f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36eU)))
#undef str_1000461e
#define str_1000461e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39aU)))
#undef str_1000463e
#define str_1000463e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3baU)))
#undef str_10004646
#define str_10004646 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c2U)))
#undef str_1000464d
#define str_1000464d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#define uStack_24e (*(undefined1 *)(pf_stack_frame + 194))
#define uStack_24d (*(undefined1 *)(pf_stack_frame + 195))
#define uStack_24c (*(undefined2 *)(pf_stack_frame + 196))
#define uStack_24a (*(undefined1 *)(pf_stack_frame + 198))
#define uStack_249 (*(undefined1 *)(pf_stack_frame + 199))
#define uStack_248 (*(undefined8 *)(pf_stack_frame + 200))
#define uStack_240 (*(undefined8 *)(pf_stack_frame + 208))
#define uStack_238 (*(undefined4 *)(pf_stack_frame + 216))
#define uStack_234 (*(undefined2 *)(pf_stack_frame + 220))
#define uStack_232 (*(undefined1 *)(pf_stack_frame + 222))
#define uStack_231 (*(undefined1 *)(pf_stack_frame + 223))
#define uStack_230 (*(undefined8 *)(pf_stack_frame + 224))
#define uStack_228 (*(undefined8 *)(pf_stack_frame + 232))
#define uStack_220 (*(undefined8 *)(pf_stack_frame + 240))
#define uStack_300 (*(uint *)(pf_stack_frame + 16))
#define uStack_2fc (*(undefined1 *)(pf_stack_frame + 20))
#define uStack_2f8 (*(uint *)(pf_stack_frame + 24))
#define uStack_2f4 (*(undefined2 *)(pf_stack_frame + 28))
#define bStack_2f2 (*(byte *)(pf_stack_frame + 30))
#define bStack_2f1 (*(byte *)(pf_stack_frame + 31))
#define auStack_2f0 (*(uint (*)[188])(pf_stack_frame + 32))
#define auStack_270 (*(uint (*)[156])(pf_stack_frame + 160))
#define uStack_268 (*(undefined8 *)(pf_stack_frame + 168))
#define uStack_260 (*(undefined4 *)(pf_stack_frame + 176))
#define uStack_25c (*(undefined2 *)(pf_stack_frame + 180))
#define uStack_25a (*(undefined1 *)(pf_stack_frame + 182))
#define uStack_259 (*(undefined1 *)(pf_stack_frame + 183))
#define uStack_258 (*(undefined2 *)(pf_stack_frame + 184))
#define uStack_256 (*(undefined1 *)(pf_stack_frame + 186))
#define uStack_255 (*(undefined1 *)(pf_stack_frame + 187))
#define uStack_254 (*(undefined2 *)(pf_stack_frame + 188))
#define uStack_252 (*(undefined1 *)(pf_stack_frame + 190))
#define uStack_251 (*(undefined1 *)(pf_stack_frame + 191))
#define uStack_250 (*(undefined2 *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000318c
 */

undefined8 recovered_1000318c(uint param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  unsigned char pf_stack_frame[816] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int extraout_w0 = 0;
  uint uVar11;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;

  pbVar1 = &DAT_1000c010 + (ulong)param_1 * 0xd0;
  if (DAT_1000c000 <= param_1) {
    pbVar1 = (byte *)0x0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_1000c000 <= param_1) {
    return 0;
  }
  recovered_10003164((long)pbVar1);
  pbVar1[0x54] = 0;
  pbVar1[0x55] = 0;
  pbVar1[0x56] = 0;
  pbVar1[0x57] = 0;
  if ((*(int *)(pbVar1 + 0x60) != 0) &&
     (param_2 < *(uint *)(pbVar1 + 0x3c) && param_4 - 1 < *(uint *)(pbVar1 + 0x3c) - param_2)) {
    bVar8 = 0x800000 < (ulong)param_4 + (ulong)param_2;
    if (((pbVar1[0x45] & 1) == 0 && bVar8) || (param_5 == 0)) {
      if ((pbVar1[0x45] & 1) != 0 || !bVar8) goto LAB_10003240;
    }
    else if ((pbVar1[0x46] & 1) == 0) {
LAB_10003240:
      uVar16 = 0;
LAB_1000324c:
      uVar9 = param_4 - uVar16;
      if (uVar16 <= param_4 && uVar9 != 0) {
        if (((param_5 & 1) == 0) && (*(int *)(pbVar1 + 0xb0) != 0)) {
          uVar17 = uVar9;
          if (7 < uVar9) {
            uVar17 = 8;
          }
          if (uVar9 < 2) goto LAB_10003294;
          uVar9 = recovered_1000307c(pbVar1);
          uVar14 = (ulong)uVar9;
          pbVar1[0x4c] = 0x3e;
          pbVar1[0x4d] = 1;
          pbVar1[0x4e] = 0;
          pbVar1[0x4f] = 0;
          if ((*(int *)(pbVar1 + 0xbc) == 0) || (*(int *)(pbVar1 + 0xb4) != 0)) {
            iVar10 = 0;
          }
          else {
            uVar9 = uVar16 + param_2;
            bVar4 = pbVar1[0x45];
            if ((uVar9 < 0x800000) || (bVar4 != 0)) {
              uVar12 = recovered_10002528((long)pbVar1,(uint *)0x0);
              iVar10 = 0;
              if ((int)uVar12 == 0) goto LAB_100032b0;
              uStack_268 = 0x80fe340080fe2c;
              uStack_260 = 0x52fffda9;
              uStack_25c = 0xfdaa;
              uVar18 = uVar9;
              if (bVar4 == 0) {
                uVar18 = uVar9 * 0x200;
              }
              uStack_25a = 0xff;
              uStack_259 = (char)(uVar18 >> 0x18);
              uStack_258 = 0xfdab;
              uStack_256 = 0xff;
              uStack_255 = (char)(uVar18 >> 0x10);
              uVar15 = (ulong)(uVar17 << 9);
              uStack_254 = 0xfdac;
              uStack_252 = 0xff;
              uStack_251 = (char)(uVar18 >> 8);
              uStack_250 = 0xfdad;
              uStack_24e = 0xff;
              uStack_24d = (char)uVar18;
              uStack_24c = 0xfdb1;
              uStack_24a = 0xff;
              uStack_249 = (char)uVar17;
              uStack_248 = 0xfffdaf00fffdb2;
              uStack_240 = 0x8080fe2102fffdb0;
              uStack_238 = 0xfffe28;
              uStack_234 = 0xfe29;
              uStack_232 = 0xff;
              uStack_231 = (char)(uVar17 << 1);
              uStack_230 = 0xfffe2b00fffe2a;
              uStack_228 = 0x1fd5b2333fe2c;
              uStack_220 = 0x8efffdb321fffda1;
              uStack_2f8 = 0;
              lVar19 = 0;
              do {
                if (lVar19 + 4 == 0x54) {
                  uVar13 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,2,0xfdb3,0x40,
                                              0x40);
                  if ((uVar13 & 1) != 0) {
                    uVar12 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,0,0xfdb3,0,0);
                    iVar10 = 0;
                    if ((int)uVar12 == 0) goto LAB_100032b0;
                    if (0xfffffeff < uStack_2f8 - 0x101) {
                      pbVar1[200] = 0;
                      recovered_10003c7c(DAT_1000c008,uVar14,*(undefined8 *)(pbVar1 + 0x98),uVar15);
                      recovered_10003c7c(DAT_1000c008,uVar14,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
                      recovered_10002a40(DAT_1000c008);
                      uVar12 = recovered_10001f90((long)pbVar1,0x14);
                      if (((((int)uVar12 == 0) ||
                           (uVar12 = recovered_10001f90((long)pbVar1,0), (int)uVar12 == 0)) ||
                          (uVar12 = recovered_10001f90((long)pbVar1,8), (int)uVar12 == 0)) ||
                         (uVar12 = recovered_10001f90((long)pbVar1,0x18), (int)uVar12 == 0))
                      goto LAB_10003734;
                      recovered_10002a40(DAT_1000c008);
                      pbVar1[0xb4] = 1;
                      pbVar1[0xb5] = 0;
                      pbVar1[0xb6] = 0;
                      pbVar1[0xb7] = 0;
                      uVar13 = recovered_10002a70(pbVar1,1);
                      if ((((int)uVar13 == 0) ||
                          (uVar12 = recovered_10001f90((long)pbVar1,4), (int)uVar12 == 0)) ||
                         (uVar12 = recovered_10001f90((long)pbVar1,0xc), (int)uVar12 == 0))
                      goto LAB_10003734;
                      uStack_268 = CONCAT44(PF_PART4(uStack_268, 4),5000000);
                      uVar12 = recovered_10002820(DAT_1000c008);
                      bVar8 = false;
                      uVar18 = 0;
                      uStack_268 = CONCAT44((int)uVar12,(undefined4)uStack_268);
                      *(undefined8 **)(pbVar1 + 0x80) = &uStack_268;
                      goto LAB_10003584;
                    }
                  }
                  break;
                }
                uVar13 = recovered_10003cb8(*(long *)(pbVar1 + 0xa0),&uStack_2f8,1,
                                            (uint)*(ushort *)((long)auStack_270 + lVar19 + 8),
                                            (uint)*(byte *)((long)auStack_270 + lVar19 + 10),
                                            (uint)*(byte *)((long)auStack_270 + lVar19 + 0xb));
                lVar19 = lVar19 + 4;
              } while ((uVar13 & 1) != 0);
            }
            iVar10 = 0;
          }
        }
        else {
LAB_10003294:
          recovered_10003a40((long)pbVar1,uVar16 + param_2,param_3 + (ulong)uVar16 * 0x200,param_5);
          uVar17 = 1;
          iVar10 = extraout_w0;
        }
        goto LAB_100032b0;
      }
      uVar12 = 1;
      goto LAB_10003200;
    }
  }
LAB_100031fc:
  uVar12 = 0;
LAB_10003200:
  pbVar1[0x38] = 0;
  pbVar1[0x39] = 0;
  pbVar1[0x3a] = 0;
  pbVar1[0x3b] = 0;
  return uVar12;
LAB_10003584:
  bVar7 = recovered_100027d0((long)pbVar1);
  if (!bVar7) goto LAB_100036f8;
  auStack_2f0[0] = 0;
  bStack_2f1 = 0;
  uVar12 = recovered_10002528((long)pbVar1,auStack_2f0);
  if ((int)uVar12 == 0) goto LAB_10003730;
  uVar11 = auStack_2f0[0];
  if ((auStack_2f0[0] & 0x11000000) != 0) {
LAB_1000372c:
    *(uint *)(pbVar1 + 0x50) = uVar11;
    goto LAB_10003730;
  }
  if ((auStack_2f0[0] >> 0x1d & 1) != 0) {
    bStack_2f2 = 0;
    uStack_2f4 = 0;
    auStack_270[0] = 0;
    uStack_300 = 0;
    uVar12 = recovered_1000236c((long)pbVar1,0xfdb3,&bStack_2f1);
    if ((((int)uVar12 == 0) ||
        (uVar12 = recovered_100026bc((long)pbVar1,4,auStack_270), (int)uVar12 == 0)) ||
       ((auStack_270[0] == 0xffffffff ||
        (((uVar12 = recovered_100026bc((long)pbVar1,0xc,&uStack_300), (int)uVar12 == 0 ||
          (uStack_300 == 0xffffffff)) ||
         (uVar12 = recovered_1000236c((long)pbVar1,0xfe2c,(byte *)&uStack_2f4), (int)uVar12 == 0))))
       )) goto LAB_10003730;
    if ((bStack_2f1 >> 4 & 1) != 0) {
      uVar11 = (uint)bStack_2f1 << 0x10;
      goto LAB_1000372c;
    }
    if ((((bStack_2f1 >> 6 & 1) != 0) && (-1 < (int)(uStack_300 | auStack_270[0]))) &&
       (((byte)uStack_2f4 >> 2 & 1) == 0)) {
      uVar12 = recovered_1000236c((long)pbVar1,0xfda3,&bStack_2f2);
      if (((int)uVar12 == 0) ||
         (uVar12 = recovered_1000236c((long)pbVar1,0xfda4,(byte *)((long)&uStack_2f4 + 1)),
         (int)uVar12 == 0)) goto LAB_10003730;
      *(uint *)(pbVar1 + 0x50) =
           (uint)bStack_2f1 << 0x10 | (uint)bStack_2f2 << 8 | (uint)PF_PART1(uStack_2f4, 1);
      piVar6 = DAT_1000c008;
      if ((bStack_2f2 & 0xe2) != 0 || (uStack_2f4 & 0x100) != 0) goto LAB_10003730;
      uVar11 = recovered_1000307c(pbVar1);
      recovered_10003c7c(piVar6,(ulong)uVar11,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
      recovered_10002a40(DAT_1000c008);
      bVar4 = *(byte *)(*(long *)(pbVar1 + 0xa0) + 1);
      uVar11 = (uint)bVar4;
      pbVar1[200] = bVar4;
      if ((bVar4 >> 4 & 1) != 0) {
        pbVar1[0x4c] = 0x7d;
        pbVar1[0x4d] = 1;
        pbVar1[0x4e] = 0;
        pbVar1[0x4f] = 0;
        goto LAB_1000372c;
      }
      if ((bVar4 >> 6 & 1) != 0) {
        uVar12 = recovered_10001f90((long)pbVar1,0x14);
        pbVar1[0x80] = 0;
        pbVar1[0x81] = 0;
        pbVar1[0x82] = 0;
        pbVar1[0x83] = 0;
        pbVar1[0x84] = 0;
        pbVar1[0x85] = 0;
        pbVar1[0x86] = 0;
        pbVar1[0x87] = 0;
        if ((int)uVar12 == 0) goto LAB_10003734;
        lVar19 = 0;
        goto LAB_10003774;
      }
      bVar8 = true;
    }
  }
  *(uint *)(pbVar1 + 0x50) = auStack_2f0[0];
  uVar11 = 10;
  if (999 < uVar18) {
    uVar11 = 1000;
  }
  bVar7 = recovered_10002778((long)pbVar1,(ulong)uVar11);
  if (!bVar7) goto LAB_100036f8;
  uVar18 = uVar11 + uVar18;
  goto LAB_10003584;
  while( true ) {
    uVar12 = recovered_1000236c((long)pbVar1,(int)lVar19 - 599U & 0xffff,
                                (byte *)((long)auStack_2f0 + lVar19 + -0x10));
    lVar19 = lVar19 + 1;
    if ((int)uVar12 == 0) break;
LAB_10003774:
    if (lVar19 == 5) {
      if ((byte)uStack_300 < 0x40) {
        uVar18 = (CONCAT13(uStack_2fc,PF_PART3(uStack_300, 1)) & 0xff00ff00) >> 8 |
                 (PF_PART3(uStack_300, 1) & 0xff00ff) << 8;
        uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
        if ((uVar18 & 0xfff9a008) == 0) {
          recovered_10002cf0((long)pbVar1,0xc,0,1);
          if ((extraout_w0_00 != 0) && (recovered_10002d40((long)pbVar1), extraout_w0_02 != 0)) {
            pbVar1[0x4c] = 0x4a;
            pbVar1[0x4d] = 1;
            pbVar1[0x4e] = 0;
            pbVar1[0x4f] = 0;
            uVar12 = recovered_10002888(pbVar1);
            if ((int)uVar12 != 0) {
              recovered_10003c7c(DAT_1000c008,uVar14,*(undefined8 *)(pbVar1 + 0x98),uVar15);
              recovered_10003c7c(DAT_1000c008,uVar14,*(undefined8 *)(pbVar1 + 0xa0),0x1000);
              recovered_10002a40(DAT_1000c008);
              pbVar1[200] = *(byte *)(*(long *)(pbVar1 + 0xa0) + 1);
              if ((1 < *(uint *)(pbVar1 + 0xc0)) ||
                 ((*(uint *)(pbVar1 + 0xc0) == 1 && (*(uint *)(pbVar1 + 0xc4) == uVar9))))
              goto LAB_10003800;
              lVar19 = 0;
              auStack_270[0] = 0;
              auStack_270[1] = uVar17 - 1;
              goto LAB_1000385c;
            }
          }
          break;
        }
      }
      else {
        uVar18 = 0;
      }
      *(uint *)(pbVar1 + 0x50) = uVar18;
      break;
    }
  }
LAB_10003734:
  uVar3 = *(undefined4 *)(pbVar1 + 0x50);
  recovered_10002888(pbVar1);
  iVar10 = 0;
  *(undefined4 *)(pbVar1 + 0x50) = uVar3;
LAB_100032b0:
  if (iVar10 != 1) {
    if (iVar10 == 0) {
      if (*(int *)(pbVar1 + 0x54) == 0) {
        pcVar2 = str_1000456d;
        if (param_5 == 0) {
          pcVar2 = str_1000458e;
        }
        recovered_10001ffc((undefined1 *)&uStack_268,0x80,pcVar2);
        recovered_100020e0((long)&uStack_268,0x80,param_2);
        recovered_10002088((long)&uStack_268,0x80,str_100045ae);
        recovered_100020e0((long)&uStack_268,0x80,uVar16);
        recovered_10002088((long)&uStack_268,0x80,str_100045bd);
        recovered_100020e0((long)&uStack_268,0x80,param_4);
        recovered_10001e10(pbVar1,(char *)&uStack_268);
      }
      recovered_10002294(pbVar1);
    }
    goto LAB_100031fc;
  }
  uVar16 = uVar17 + uVar16;
  goto LAB_1000324c;
LAB_1000385c:
  if (lVar19 == 2) goto LAB_10003970;
  uVar18 = auStack_270[lVar19];
  recovered_10003a40((long)pbVar1,uVar18 + uVar9,(long)&uStack_268,0);
  if (extraout_w0_01 != 1) {
    recovered_10001ffc((undefined1 *)auStack_2f0,0x60,str_100045f2);
    recovered_100020e0((long)auStack_2f0,0x60,uVar18 + uVar9);
LAB_10003964:
    recovered_10001e10(pbVar1,(char *)auStack_2f0);
    goto LAB_10003734;
  }
  iVar10 = 0;
  for (lVar20 = 0; lVar20 != 0x200; lVar20 = lVar20 + 1) {
    bVar4 = *(byte *)(*(long *)(pbVar1 + 0x98) + (ulong)(uVar18 << 9) + lVar20);
    bVar5 = *(byte *)((long)auStack_270 + lVar20 + 8);
    if ((uint)bVar4 != (uint)bVar5) {
      pbVar1[0x4c] = 0x72;
      pbVar1[0x4d] = 1;
      pbVar1[0x4e] = 0;
      pbVar1[0x4f] = 0;
      *(uint *)(pbVar1 + 0x50) = (uint)CONCAT11(bVar5,bVar4) - iVar10;
      recovered_10001ffc((undefined1 *)auStack_2f0,0x80,str_1000461e);
      recovered_100020e0((long)auStack_2f0,0x80,uVar18 + uVar9);
      recovered_10002088((long)auStack_2f0,0x80,str_1000463e);
      recovered_100020e0((long)auStack_2f0,0x80,(uint)lVar20);
      recovered_10002088((long)auStack_2f0,0x80,str_10004646);
      recovered_10002010((long)auStack_2f0,0x80,(uint)bVar5,2);
      recovered_10002088((long)auStack_2f0,0x80,str_1000464d);
      recovered_10002010((long)auStack_2f0,0x80,(uint)bVar4,2);
      goto LAB_10003964;
    }
    iVar10 = iVar10 + -0x10000;
  }
  lVar19 = lVar19 + 1;
  goto LAB_1000385c;
LAB_10003970:
  if (*(int *)(pbVar1 + 0xc0) == 0) {
    *(uint *)(pbVar1 + 0xc4) = uVar9;
  }
  *(int *)(pbVar1 + 0xc0) = *(int *)(pbVar1 + 0xc0) + 1;
LAB_10003800:
  for (uVar14 = 0; uVar15 != uVar14; uVar14 = uVar14 + 1) {
    *(undefined1 *)(param_3 + (ulong)uVar16 * 0x200 + uVar14) =
         *(undefined1 *)(*(long *)(pbVar1 + 0x98) + uVar14);
  }
  iVar10 = 1;
  goto LAB_100032b0;
LAB_100036f8:
  if ((bVar8) && (bVar8 = recovered_100027d0((long)pbVar1), !bVar8)) {
    pbVar1[0x4c] = 0x7c;
    pbVar1[0x4d] = 1;
    pbVar1[0x4e] = 0;
    pbVar1[0x4f] = 0;
    *(uint *)(pbVar1 + 0x50) = (uint)pbVar1[200];
    recovered_10001e10(pbVar1,str_100045c8);
  }
LAB_10003730:
  pbVar1[0x80] = 0;
  pbVar1[0x81] = 0;
  pbVar1[0x82] = 0;
  pbVar1[0x83] = 0;
  pbVar1[0x84] = 0;
  pbVar1[0x85] = 0;
  pbVar1[0x86] = 0;
  pbVar1[0x87] = 0;
  goto LAB_10003734;
}

#undef DAT_1000c000
#undef DAT_1000c008
#undef DAT_1000c010
#undef str_1000456d
#undef str_1000458e
#undef str_100045ae
#undef str_100045bd
#undef str_100045c8
#undef str_100045f2
#undef str_1000461e
#undef str_1000463e
#undef str_10004646
#undef str_1000464d
#undef uStack_24e
#undef uStack_24d
#undef uStack_24c
#undef uStack_24a
#undef uStack_249
#undef uStack_248
#undef uStack_240
#undef uStack_238
#undef uStack_234
#undef uStack_232
#undef uStack_231
#undef uStack_230
#undef uStack_228
#undef uStack_220
#undef uStack_300
#undef uStack_2fc
#undef uStack_2f8
#undef uStack_2f4
#undef bStack_2f2
#undef bStack_2f1
#undef auStack_2f0
#undef auStack_270
#undef uStack_268
#undef uStack_260
#undef uStack_25c
#undef uStack_25a
#undef uStack_259
#undef uStack_258
#undef uStack_256
#undef uStack_255
#undef uStack_254
#undef uStack_252
#undef uStack_251
#undef uStack_250

#define bStack_49 (*(byte *)(pf_stack_frame + 23))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a40
 */

void recovered_10003a40(long param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  int extraout_w0_01 = 0;
  int extraout_w0_02 = 0;
  int extraout_w0_03 = 0;
  int extraout_w0_04 = 0;
  int extraout_w0_05 = 0;
  int extraout_w0_06 = 0;
  int extraout_w0_07 = 0;
  int extraout_w0_08 = 0;
  int extraout_w0_09 = 0;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;

  uStack_44 = 0;
  if ((0x7fffff < param_2) && (*(char *)(param_1 + 0x45) == '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x45) == '\0') {
    param_2 = param_2 << 9;
  }
  uVar2 = recovered_10002528(param_1,&uStack_44);
  if ((int)uVar2 == 0) {
    return;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0xd9;
    recovered_10002e14(param_1,0x11,param_2);
    if (extraout_w0 == 0) {
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
      return;
    }
    if ((PF_PART1(uStack_44, 2) >> 3 & 1) != 0) {
      return;
    }
    recovered_10002d40(param_1);
    if (extraout_w0_01 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0xe0;
    recovered_10002cf0(param_1,0x18,param_2,0);
    if (extraout_w0_02 == 0) {
      return;
    }
    lVar4 = 0;
    while (lVar4 != 0x200) {
      recovered_10002264(param_1,(uint)lVar4 & 0xffff | 64000,0xff,*(byte *)(param_3 + lVar4));
      lVar4 = lVar4 + 1;
      if (extraout_w0_03 == 0) {
        return;
      }
    }
  }
  recovered_10002264(param_1,0xfdaf,0xff,0);
  if (extraout_w0_04 == 0) {
    return;
  }
  recovered_10002264(param_1,0xfdb0,0xff,2);
  if (extraout_w0_05 == 0) {
    return;
  }
  recovered_10002264(param_1,0xfdb1,0xff,1);
  if (extraout_w0_00 == 0) {
    return;
  }
  recovered_10002264(param_1,0xfdb2,0xff,0);
  if (extraout_w0_06 == 0) {
    return;
  }
  recovered_10002264(param_1,0xfd5b,1,1);
  if (extraout_w0_07 == 0) {
    return;
  }
  bVar3 = 0x20;
  if (param_4 == 0) {
    bVar3 = 1;
  }
  recovered_10002264(param_1,0xfda1,0xff,bVar3);
  if (extraout_w0_08 == 0) {
    return;
  }
  bVar3 = 0x81;
  if (param_4 == 0) {
    bVar3 = 0x8c;
  }
  recovered_10002264(param_1,0xfdb3,0xff,bVar3);
  if (extraout_w0_09 == 0) {
    return;
  }
  uVar2 = recovered_10002e84(param_1,0,param_4 ^ 1,5000);
  if ((int)uVar2 == 0) {
    return;
  }
  if ((param_4 & 1) != 0) {
    recovered_10002d40(param_1);
    return;
  }
  lVar4 = 0;
  while (lVar4 != 5) {
    uVar2 = recovered_1000236c(param_1,(int)lVar4 - 599U & 0xffff,&bStack_49 + lVar4);
    lVar4 = lVar4 + 1;
    if ((int)uVar2 == 0) {
      return;
    }
  }
  if ((0x3f < bStack_49) ||
     (uVar1 = (uStack_48 & 0xff00ff00) >> 8 | (uStack_48 & 0xff00ff) << 8,
     uStack_44 = uVar1 >> 0x10 | uVar1 << 0x10, (uStack_44 & 0xfff9a008) != 0)) {
    *(uint *)(param_1 + 0x50) = uStack_44;
    return;
  }
  lVar4 = 0;
  do {
    if (lVar4 == 0x200) {
      return;
    }
    uVar2 = recovered_1000236c(param_1,(uint)lVar4 & 0xffff | 64000,(byte *)(param_3 + lVar4));
    lVar4 = lVar4 + 1;
  } while ((int)uVar2 != 0);
  return;
}

#undef bStack_49
#undef uStack_48
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c7c
 */

void recovered_10003c7c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10003cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cb8
 */

undefined8
recovered_10003cb8(long param_1,uint *param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  int iVar3;

  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (*param_2 < 0x100) {
      uVar1 = 0;
      for (iVar3 = 0; iVar3 != 4; iVar3 = iVar3 + 1) {
        *(char *)(param_1 + (ulong)(iVar3 + *param_2 * 4)) =
             (char)((param_3 << 0x1e | (param_4 & 0x3fff) << 0x10 | param_5 << 8 | param_6) >>
                   (ulong)(uVar1 & 0x1f));
        uVar1 = uVar1 + 8;
      }
      *param_2 = *param_2 + 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


#undef DAT_1000c000
#define DAT_1000c000 (*(uint *)(((uintptr_t)pf_module_state + 0x7d7cU)))
#undef DAT_1000c008
#define DAT_1000c008 (*(int * *)(((uintptr_t)pf_module_state + 0x7d84U)))
#undef UNK_10004328
#define UNK_10004328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa4U)))
#undef str_10004679
#define str_10004679 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f5U)))
#undef str_10004694
#define str_10004694 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x410U)))
#undef str_100046a1
#define str_100046a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_100046c3
#define str_100046c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_10004734
#define str_10004734 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b0U)))
#undef str_10004757
#define str_10004757 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_10004788
#define str_10004788 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x504U)))
#undef str_1000479f
#define str_1000479f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51bU)))
#undef uRam0000000010004328
#define uRam0000000010004328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xa4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d2c
 */

undefined8 recovered_10003d2c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;

  uVar4 = 0;
  if (((param_1 != (undefined8 *)0x0) && (DAT_1000c008 != (int *)0x0)) &&
     (uVar5 = (ulong)DAT_1000c000, uVar5 != 0)) {
    lVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
    puVar13 = (uint *)((uintptr_t)pf_module_state+0x7de4U);
    for (uVar12 = 0; uVar12 < uVar5; uVar12 = uVar12 + 1) {
      puVar9 = puVar13 + -0x16;
      recovered_10003164((long)puVar9);
      if (puVar13[2] != 0) {
        uVar4 = recovered_10002528((long)puVar9,(uint *)0x0);
        if ((int)uVar4 == 0) {
          recovered_10002294((byte *)puVar9);
        }
        if (puVar13[2] != 0) {
          uVar10 = uVar10 + 1;
          if (puVar13[0x16] != 0) {
            uVar7 = uVar7 + 1;
          }
          lVar11 = lVar11 + (ulong)puVar13[-7];
          uVar1 = *puVar13;
          if (*puVar13 <= uVar8) {
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
        }
      }
      puVar13[-8] = 0;
      uVar5 = (ulong)DAT_1000c000;
      puVar13 = puVar13 + 0x34;
    }
    recovered_100007e0((undefined1 *)param_1,500);
    *param_1 = uRam0000000010004328;
    uVar6 = 0x13;
    if (uVar10 != DAT_1000c000) {
      uVar6 = 9;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    *(undefined4 *)(param_1 + 2) = uVar6;
    uVar4 = recovered_10002820(DAT_1000c008);
    *(int *)(param_1 + 3) = (int)uVar4;
    *(uint *)((long)param_1 + 0x44) = DAT_1000c000;
    *(uint *)(param_1 + 9) = uVar10;
    *(int *)((long)param_1 + 0x4c) = (int)lVar11;
    *(int *)(param_1 + 10) = (int)((ulong)lVar11 >> 0x20);
    recovered_10001ffc((undefined1 *)((long)param_1 + 0x54),0x40,str_10004679);
    recovered_10001ffc((undefined1 *)((long)param_1 + 0x94),0x40,str_10004694);
    pcVar2 = str_100046c3;
    if (uVar7 != 0) {
      pcVar2 = str_100046a1;
    }
    pcVar3 = str_10004734;
    if (uVar10 != 0) {
      pcVar3 = pcVar2;
    }
    recovered_10001ffc((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar3);
    recovered_10001ffc((undefined1 *)((long)param_1 + 0x134),0xc0,str_10004757);
    recovered_100020e0((long)param_1 + 0x134,0xc0,uVar8);
    recovered_10002088((long)param_1 + 0x134,0xc0,str_10004788);
    recovered_100020e0((long)param_1 + 0x134,0xc0,uVar7);
    recovered_10002088((long)param_1 + 0x134,0xc0,str_1000479f);
    uVar4 = 1;
  }
  return uVar4;
}

#undef DAT_1000c000
#undef DAT_1000c008
#undef UNK_10004328
#undef str_10004679
#undef str_10004694
#undef str_100046a1
#undef str_100046c3
#undef str_10004734
#undef str_10004757
#undef str_10004788
#undef str_1000479f
#undef uRam0000000010004328

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
