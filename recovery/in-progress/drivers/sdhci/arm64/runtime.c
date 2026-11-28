/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1840U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100027c0
#define DAT_100027c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10008004
#define DAT_10008004 (*(int *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef UNK_100027c8
#define UNK_100027c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_100027c0
#define _DAT_100027c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef str_100028f7
#define str_100028f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
#undef str_1000290b
#define str_1000290b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
#undef str_10002919
#define str_10002919 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_1000292c
#define str_1000292c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16cU)))
#undef uRam00000000100027c8
#define uRam00000000100027c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#define uStack_208 (*(undefined8 *)(pf_stack_frame + 72))
#define auStack_1e8 (*(undefined1 (*)[488])(pf_stack_frame + 104))
#define auStack_1a8 (*(undefined1 (*)[424])(pf_stack_frame + 168))
#define auStack_168 (*(undefined1 (*)[360])(pf_stack_frame + 232))
#define auStack_108 (*(undefined1 (*)[264])(pf_stack_frame + 328))
#define local_240 (*(byte (*)[576])(pf_stack_frame + 16))
#define local_238 (*(undefined4 *)(pf_stack_frame + 24))
#define local_230 (*(undefined4 *)(pf_stack_frame + 32))
#define local_228 (*(undefined4 *)(pf_stack_frame + 40))
#define local_220 (*(undefined4 *)(pf_stack_frame + 48))
#define local_218 (*(undefined4 *)(pf_stack_frame + 56))
#define local_210 (*(undefined8 *)(pf_stack_frame + 64))
#define local_1f8 (*(code * *)(pf_stack_frame + 88))
#define iStack_23c (*(int *)(pf_stack_frame + 20))
#define uStack_234 (*(undefined4 *)(pf_stack_frame + 28))
#define uStack_22c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_224 (*(undefined4 *)(pf_stack_frame + 44))
#define uStack_21c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_214 (*(undefined4 *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    _DAT_10008000 = 0;
    DAT_10008008 = api;
    recovered_1000070c(&DAT_10008010,0xd0);
    recovered_1000070c(&DAT_100080e0,0x1c0);
    if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
       (*(int *)((long)api + 0x5c) != 0)) {
      for (uVar3 = 0; uVar3 != 0x100; uVar3 = uVar3 + 1) {
        for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
          uVar2 = recovered_10001540(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,
                                     (undefined1 *)&local_210);
          if ((int)uVar2 != 0) {
            recovered_10000724((byte *)&local_210);
            if (((int8_t)PF_PART1(uStack_208, 4)) < '\0') {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                uVar2 = recovered_10001540(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                           (ulong)(uVar5 & 0xff),local_240);
                if ((int)uVar2 != 0) {
                  recovered_10000724(local_240);
                }
              }
            }
          }
        }
      }
    }
    if (DAT_10008004 != 0) {
      local_240[0] = 3;
      local_240[1] = 0;
      local_240[2] = 0;
      local_240[3] = 0;
      iStack_23c = DAT_10008004;
      local_238 = 0x10001368;
      uStack_234 = 0x100013ec;
      local_230 = 0x100013f4;
      uStack_22c = 0x100013fc;
      local_228 = 0x10001470;
      uStack_224 = 0;
      local_220 = 0;
      uStack_21c = 0;
      local_218 = 0;
      uStack_214 = 0;
      recovered_1000070c((undefined1 *)&local_210,0x1c8);
      uStack_208 = uRam00000000100027c8;
      local_210 = _DAT_100027c0;
      local_1f8 = recovered_100024c0;
      recovered_10001fa4(auStack_1e8,0x40,str_100028f7);
      recovered_10001fa4(auStack_1a8,0x40,str_1000290b);
      recovered_10001fa4(auStack_168,0x60,str_10002919);
      recovered_10001fa4(auStack_108,0xc0,str_1000292c);
      if (((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) &&
         (((0xef < (uint)DAT_10008008[2] &&
           ((((DAT_10008008[0x3b] != 0 &&
              (iVar1 = (*(code *)(ulong)(uint)DAT_10008008[0x3b])(&local_210), iVar1 != 0)) &&
             (*(int *)api == 0x54584b57)) &&
            ((0xd3 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xd0) != 0)))))) &&
          (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xd0))(local_240), iVar1 != 0)))) {
        return 1;
      }
    }
    recovered_100012f0();
  }
  return 0;
}

#undef DAT_100027c0
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_100080e0
#undef UNK_100027c8
#undef _DAT_100027c0
#undef _DAT_10008000
#undef str_100028f7
#undef str_1000290b
#undef str_10002919
#undef str_1000292c
#undef uRam00000000100027c8
#undef uStack_208
#undef auStack_1e8
#undef auStack_1a8
#undef auStack_168
#undef auStack_108
#undef local_240
#undef local_238
#undef local_230
#undef local_228
#undef local_220
#undef local_218
#undef local_210
#undef local_1f8
#undef iStack_23c
#undef uStack_234
#undef uStack_22c
#undef uStack_224
#undef uStack_21c
#undef uStack_214

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000070c
 */

void recovered_1000070c(undefined1 *param_1,long param_2)

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


#undef DAT_100028a3
#define DAT_100028a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe3U)))
#undef DAT_100028a9
#define DAT_100028a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe9U)))
#undef DAT_100028ae
#define DAT_100028ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeeU)))
#undef DAT_100028b1
#define DAT_100028b1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf1U)))
#undef DAT_100028b3
#define DAT_100028b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf3U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5860U)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x586cU)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef DAT_100080e8
#define DAT_100080e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5928U)))
#undef DAT_100080ec
#define DAT_100080ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x592cU)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef DAT_10008111
#define DAT_10008111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5951U)))
#undef DAT_10008112
#define DAT_10008112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5952U)))
#undef str_1000281f
#define str_1000281f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_1000283c
#define str_1000283c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cU)))
#undef str_1000284b
#define str_1000284b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bU)))
#undef str_10002862
#define str_10002862 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#define uStack_4e4 (*(uint *)(pf_stack_frame + 28))
#define uStack_4e0 (*(uint *)(pf_stack_frame + 32))
#define uStack_4dc (*(uint *)(pf_stack_frame + 36))
#define uStack_4d8 (*(uint *)(pf_stack_frame + 40))
#define uStack_4d4 (*(uint *)(pf_stack_frame + 44))
#define uStack_4d0 (*(uint *)(pf_stack_frame + 48))
#define uStack_4cc (*(uint *)(pf_stack_frame + 52))
#define auStack_4c8 (*(uint (*)[306])(pf_stack_frame + 56))
#define bStack_4bd (*(byte *)(pf_stack_frame + 67))
#define aiStack_4bc (*(int (*)[303])(pf_stack_frame + 68))
#define uStack_c8 (*(undefined4 *)(pf_stack_frame + 1080))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000724
 */

void recovered_10000724(byte *param_1)

{
  unsigned char pf_stack_frame[1312] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;

  uVar2 = DAT_10008004;
  if (((((param_1[8] == 8 && param_1[9] == 5) && param_1[10] < 2) &&
       ((param_1[0xc] & 0x7f) == 0 && DAT_10008000 < 4)) &&
      (uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],
                                   0x40,1,(long)&uStack_4e0), (int)uVar15 != 0)) &&
     ((uStack_4e0 & 0x88) == 0)) {
    uVar23 = (ulong)(uStack_4e0 >> 4) & 7;
    uVar21 = (uint)((ulong)uStack_4e0 & 7);
    if (uVar21 < 6 && (uint)uVar23 < 6 - uVar21) {
      lVar4 = (ulong)DAT_10008000 * 0x34;
      recovered_1000070c(&DAT_10008010 + lVar4,0x34);
      uVar24 = *(undefined8 *)(param_1 + 8);
      uVar15 = *(undefined8 *)param_1;
      uVar25 = *(undefined8 *)(param_1 + 0x18);
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      uVar26 = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x5874U)) = *(undefined8 *)(param_1 + 0x24);
      *(undefined8 *)(&DAT_1000802c + lVar4) = uVar26;
      *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x5858U)) = uVar24;
      *(undefined8 *)(&DAT_10008010 + lVar4) = uVar15;
      *(undefined8 *)(lVar4 + ((uintptr_t)pf_module_state+0x5868U)) = uVar25;
      *(undefined8 *)(&DAT_10008020 + lVar4) = uVar16;
      if ((param_1[0x12] >> 4 & 1) != 0) {
        uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2]
                                    ,0x34,1,(long)auStack_4c8);
        if ((int)uVar15 == 0) {
          return;
        }
        for (uVar21 = 0; (auStack_4c8[0] != 0 && (uVar21 < 0x30)); uVar21 = uVar21 + 1) {
          bVar7 = false;
          if ((0xbc < auStack_4c8[0] - 0x40) || ((auStack_4c8[0] & 3) != 0)) goto LAB_10000924;
          uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],
                                      (ulong)param_1[2],(ulong)(auStack_4c8[0] & 0xffff),2,
                                      (long)&uStack_c8);
          if ((int)uVar15 == 0) {
LAB_10000920:
            bVar7 = false;
            goto LAB_10000924;
          }
          if ((uStack_c8 & 0xff) == 1) {
            if (((0xf8 < auStack_4c8[0]) ||
                (uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],
                                             (ulong)param_1[2],(ulong)(auStack_4c8[0] + 4 & 0xffff),
                                             2,(long)&uStack_4cc), (int)uVar15 == 0)) ||
               (uVar15 = recovered_100016c8(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],
                                            (ulong)param_1[2],
                                            (ulong)((auStack_4c8[0] & 0xffff) + 4 & 0xffff)),
               (int)uVar15 == 0)) goto LAB_10000920;
            recovered_10001858(DAT_10008008,10000);
            uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],
                                        (ulong)param_1[2],
                                        (ulong)((auStack_4c8[0] & 0xffff) + 4 & 0xffff),2,
                                        (long)&uStack_4cc);
            bVar7 = (uStack_4cc & 3) == 0 && (int)uVar15 != 0;
            goto LAB_10000924;
          }
          auStack_4c8[0] = uStack_c8 >> 8;
        }
        bVar7 = auStack_4c8[0] == 0;
LAB_10000924:
        if (!bVar7) {
          return;
        }
      }
      uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4
                                  ,2,lVar4 + ((uintptr_t)pf_module_state+0x587cU));
      if ((int)uVar15 != 0) {
        uStack_4e4 = *(uint *)(lVar4 + ((uintptr_t)pf_module_state+0x587cU)) & 0xfffffffb | 0x402;
        *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x5880U)) = 1;
        uVar15 = recovered_100016c8(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2]
                                    ,4);
        if ((((int)uVar15 != 0) &&
            (uVar15 = recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],
                                         (ulong)param_1[2],4,2,(long)&uStack_4e4), (int)uVar15 != 0)
            ) && ((uStack_4e4 & 0x406) == 0x402)) {
          uVar22 = 0;
LAB_100009ac:
          piVar6 = DAT_10008008;
          if (uVar22 <= uVar23 && DAT_10008004 < 8) {
            uVar3 = (ulong)DAT_10008004;
            lVar5 = uVar3 * 0x38;
            puVar1 = (ulong *)(&DAT_100080e0 + lVar5);
            recovered_1000070c((undefined1 *)puVar1,0x38);
            *(uint *)(&DAT_100080e8 + lVar5) = DAT_10008000;
            *(int *)(&DAT_100080ec + lVar5) = (int)uVar22;
            piVar6 = DAT_10008008;
            uVar19 = uVar22 + ((ulong)uStack_4e0 & 7);
            uStack_c8 = 0;
            if (((4 < uVar19 - 1) || ((*(uint *)(param_1 + (uVar19 - 1) * 4 + 0x14) & 7) != 4)) &&
               ((uVar21 = *(uint *)(param_1 + uVar19 * 4 + 0x14), uVar21 != 0 && ((uVar21 & 1) == 0)
                ))) {
              iVar8 = (int)uVar19 * 4;
              uStack_4cc = uVar21;
              recovered_1000167c(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],
                                 (ulong)(iVar8 + 0x10U & 0xfffc),4,(long)&uStack_4cc);
              if ((uStack_4cc & 7) == 4) {
                if (4 < uVar19) goto LAB_100010e8;
                uStack_c8 = *(uint *)(param_1 + uVar19 * 4 + 0x18);
                recovered_1000167c(piVar6,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],
                                   (ulong)(iVar8 + 0x14U & 0xffff),4,(long)&uStack_c8);
                uVar21 = uStack_c8;
              }
              else {
                uVar21 = 0;
              }
              uVar9 = 0xfffffff0;
              if ((uStack_4cc & 1) != 0) {
                uVar9 = 0xfffffffc;
              }
              uVar9 = uVar9 & uStack_4cc;
              if (uVar9 == 0 && uVar21 == 0) goto LAB_100010e8;
              *puVar1 = 0;
              auStack_4c8[0] = 0;
              if ((piVar6 == (int *)0x0) || (*piVar6 != 0x54584b57)) goto LAB_100010e8;
              if (((uint)piVar6[2] < 0xbc) || (piVar6[0x2e] == 0)) {
                if ((((uVar21 == 0) && (0x67 < (uint)piVar6[2])) && (piVar6[0x19] != 0)) &&
                   (iVar8 = (*(code *)(ulong)(uint)piVar6[0x19])(uVar9,0,0x100,auStack_4c8),
                   iVar8 != 0)) {
                  *puVar1 = (ulong)auStack_4c8[0];
                  goto LAB_10000b20;
                }
                goto LAB_100010e8;
              }
              iVar8 = (*(code *)(ulong)(uint)piVar6[0x2e])(uVar9,uVar21,0x100,puVar1);
              if (iVar8 == 0) goto LAB_100010e8;
LAB_10000b20:
              uVar15 = recovered_1000188c((long *)puVar1,1);
              if (((((int)uVar15 != 0) &&
                   (uVar15 = recovered_10001910((long *)puVar1,0xfe,2,&uStack_4d8), (int)uVar15 != 0
                   )) && ((uStack_4d8 != 0xffff &&
                          ((uVar15 = recovered_10001910((long *)puVar1,0x40,4,&uStack_4d4),
                           (int)uVar15 != 0 && (uStack_4d4 != 0xffffffff)))))) &&
                 ((uStack_4d4 >> 0x18 & 1) != 0)) {
                uVar21 = 0xff;
                if ((byte)uStack_4d8 < 2) {
                  uVar21 = 0x3f;
                }
                *(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x5930U)) = uStack_4d8 & 0xff;
                *(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x5934U)) = (uVar21 & uStack_4d4 >> 8) * 1000000;
                uVar15 = recovered_100019f0((long *)puVar1,0x38,4,0);
                if ((((((int)uVar15 != 0) &&
                      (uVar15 = recovered_100019f0((long *)puVar1,0x34,4,0xffff80f3),
                      (int)uVar15 != 0)) &&
                     (uVar15 = recovered_100019f0((long *)puVar1,0x30,4,0xffffffff),
                     (int)uVar15 != 0)) &&
                    ((uVar15 = recovered_100019f0((long *)puVar1,0x29,1,0), (int)uVar15 != 0 &&
                     (uVar15 = recovered_100019f0((long *)puVar1,0x28,1,0), (int)uVar15 != 0)))) &&
                   ((*(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x5930U)) < 2 ||
                    (uVar15 = recovered_100019f0((long *)puVar1,0x3e,2,0), (int)uVar15 != 0)))) {
                  recovered_10001858(DAT_10008008,10000);
                  uVar15 = recovered_100019f0((long *)puVar1,0x29,1,0xe);
                  if (((int)uVar15 != 0) &&
                     (uVar15 = recovered_100019f0((long *)puVar1,0x29,1,0xf), (int)uVar15 != 0)) {
                    recovered_10001858(DAT_10008008,10000);
                    iVar8 = 999;
                    while( true ) {
                      uVar15 = recovered_10001910((long *)puVar1,0x24,4,&uStack_4dc);
                      if (((int)uVar15 == 0) || (uStack_4dc == 0xffffffff)) goto LAB_100010d0;
                      if (((uStack_4dc ^ 0xffffffff) & 0x30000) == 0) break;
                      if (iVar8 == 0) goto LAB_100010d0;
                      recovered_10001858(DAT_10008008,1000);
                      iVar8 = iVar8 + -1;
                    }
                    uVar15 = recovered_10001a38((long *)puVar1,400000);
                    if (((int)uVar15 != 0) &&
                       (uVar15 = recovered_100019f0((long *)puVar1,0x2e,1,0xe), (int)uVar15 != 0)) {
                      recovered_10001858(DAT_10008008,1000);
                      uStack_4d0 = 0;
                      uVar15 = recovered_10001c0c((long *)puVar1,0,0,0,0,0,(undefined4 *)0x0);
                      if ((int)uVar15 != 0) {
                        uVar15 = recovered_10001c0c((long *)puVar1,8,0x1aa,2,0x18,0,&uStack_4cc);
                        if ((int)uVar15 == 0) {
                          if ((*(short *)(lVar5 + ((uintptr_t)pf_module_state+0x593eU)) == 1) &&
                             (uVar24 = recovered_1000188c((long *)puVar1,6), (int)uVar24 != 0)) {
                            uVar24 = 0x300000;
                            goto LAB_10000d48;
                          }
                        }
                        else if ((uStack_4cc & 0xfff) == 0x1aa) {
                          uVar24 = 0x40300000;
LAB_10000d48:
                          iVar8 = 100;
                          goto LAB_10000d50;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_100010d0;
            }
            goto LAB_100010e8;
          }
          if (DAT_10008004 != uVar2) {
            DAT_10008000 = DAT_10008000 + 1;
            recovered_10001fa4((undefined1 *)&uStack_c8,0x60,str_1000283c);
            recovered_10001fb8((long)&uStack_c8,0x60,&DAT_100028a3);
            recovered_100020c0((long)&uStack_c8,0x60,(uint)*param_1,2);
            recovered_10001fb8((long)&uStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xe5U));
            recovered_100020c0((long)&uStack_c8,0x60,(uint)param_1[1],2);
            recovered_10001fb8((long)&uStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xe7U));
            recovered_10002010((long)&uStack_c8,0x60,(uint)param_1[2]);
            recovered_10001fa4((undefined1 *)auStack_4c8,0x400,&DAT_100028a9);
            recovered_100020c0((long)auStack_4c8,0x400,(uint)*param_1,2);
            recovered_10001fb8((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe5U));
            recovered_100020c0((long)auStack_4c8,0x400,(uint)param_1[1],2);
            recovered_10001fb8((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe7U));
            recovered_10002010((long)auStack_4c8,0x400,(uint)param_1[2]);
            recovered_10001fb8((long)auStack_4c8,0x400,&DAT_100028ae);
            recovered_100020c0((long)auStack_4c8,0x400,(uint)*(ushort *)(param_1 + 4),4);
            recovered_10001fb8((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xe5U));
            recovered_100020c0((long)auStack_4c8,0x400,(uint)*(ushort *)(param_1 + 6),4);
            recovered_10001fb8((long)auStack_4c8,0x400,&DAT_100028b1);
            recovered_10001fb8((long)auStack_4c8,0x400,&DAT_100028b3);
            recovered_10001fb8((long)auStack_4c8,0x400,str_10002862);
            if (piVar6 == (int *)0x0) {
              return;
            }
            uVar2 = piVar6[3];
            if (uVar2 == 0) {
              return;
            }
            (*(code *)(ulong)uVar2)(&uStack_c8,str_1000284b,auStack_4c8);
            return;
          }
        }
        recovered_1000170c(&DAT_10008010 + lVar4);
      }
    }
  }
  return;
  while( true ) {
    recovered_10001858(DAT_10008008,10000);
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) break;
LAB_10000d50:
    uVar16 = recovered_10001c0c((long *)puVar1,0x37,0,2,0x18,0,&uStack_4cc);
    if ((((int)uVar16 == 0) || ((uStack_4cc & 0xfff9a028) != 0x20)) ||
       (uVar16 = recovered_10001c0c((long *)puVar1,0x29,uVar24,2,0,0,&uStack_4d0), (int)uVar16 == 0)
       ) goto LAB_100010d0;
    if (((uStack_4d0 & 0x81000000) == 0x80000000) && ((uStack_4d0 & 0x300000) != 0)) {
      bVar7 = true;
      goto LAB_10000de4;
    }
  }
  bVar7 = (uStack_4d0 & 0x300000) != 0;
LAB_10000de4:
  if ((((bVar7 && (uStack_4d0 & 0x81000000) == 0x80000000) &&
       (((int)uVar15 != 0 || ((uStack_4d0 >> 0x1e & 1) == 0)))) &&
      (uVar15 = recovered_10001c0c((long *)puVar1,2,0,1,8,0,(undefined4 *)0x0), (int)uVar15 != 0))
     && (((uVar15 = recovered_10001c0c((long *)puVar1,3,0,2,0x18,0,&uStack_4cc), (int)uVar15 != 0 &&
          (0xffff < uStack_4cc)) && ((uStack_4cc & 0xe000) == 0)))) {
    *(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x5938U)) = uStack_4cc & 0xffff0000;
    uVar15 = recovered_10001c0c((long *)puVar1,9,(ulong)(uStack_4cc & 0xffff0000),1,8,0,
                                (undefined4 *)0x0);
    if ((int)uVar15 != 0) {
      lVar17 = 0;
LAB_10000e6c:
      uVar21 = uStack_4d0;
      if (lVar17 + 4 != 0x14) goto code_r0x10000e78;
      lVar17 = (long)&uStack_c8 + 3;
      for (lVar18 = 0; lVar18 != -0x10; lVar18 = lVar18 + -4) {
        uVar9 = *(int *)((long)aiStack_4bc + lVar18) << 8;
        if (lVar18 != -0xc) {
          uVar9 = *(byte *)((long)aiStack_4bc + lVar18 + -1) | uVar9;
        }
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        *(uint *)(lVar17 + -3) = uVar9 >> 0x10 | uVar9 << 0x10;
        lVar17 = lVar17 + 4;
      }
      uVar9 = recovered_10001f48((long)&uStack_c8,0x7f,0x7e);
      uVar10 = recovered_10001f48((long)&uStack_c8,0x53,0x50);
      uVar11 = recovered_10001f48((long)&uStack_c8,0x19,0x16);
      uVar12 = recovered_10001f48((long)&uStack_c8,0x5f,0x54);
      uVar13 = recovered_10001f48((long)&uStack_c8,0x67,0x60);
      iVar8 = 0;
      if ((((uVar13 >> 7 & 1) == 0) && ((uVar13 & 7) < 4)) &&
         (uVar19 = (ulong)(uVar13 >> 3) & 0xf, (int)uVar19 != 0)) {
        iVar8 = *(int *)((ulong)(uVar13 & 7) * 4 + ((uintptr_t)pf_module_state+0x28U)) *
                (uint)*(byte *)(uVar19 + ((uintptr_t)pf_module_state+0x18U));
      }
      if (((uVar12 >> 2 & 1) == 0) || (iVar8 == 0)) goto LAB_100010d0;
      uVar21 = uVar21 & 0x40000000;
      if (uVar9 == 1) {
        if ((uVar21 != 0) && (uVar10 == 9)) {
          uVar10 = recovered_10001f48((long)&uStack_c8,0x45,0x30);
          uVar19 = (ulong)uVar10 * 0x400 + 0x400;
          goto LAB_10001028;
        }
        goto LAB_100010d0;
      }
      if ((((uVar9 != 0) || (uVar21 != 0)) || (uVar10 - 0xc < 0xfffffffd)) ||
         ((9 < uVar10 && (uVar13 = recovered_10001f48((long)&uStack_c8,0x4f,0x4f), uVar13 == 0))))
      goto LAB_100010d0;
      uVar13 = recovered_10001f48((long)&uStack_c8,0x49,0x3e);
      uVar14 = recovered_10001f48((long)&uStack_c8,0x31,0x2f);
      uVar19 = (ulong)uVar13 + 1 << ((ulong)((uVar10 + uVar14) - 7) & 0x3f);
LAB_10001028:
      uVar20 = uVar19 >> 0x20;
      if (0xfffffffe < uVar19) {
        uVar19 = 0xffffffff;
      }
      uVar10 = recovered_10001f48((long)&uStack_c8,0xd,0xc);
      bVar7 = true;
      if (((uVar10 == 0) && ((uVar12 >> 4 & 1) != 0)) && (0xfffffffc < uVar11 - 0xc)) {
        bVar7 = uVar9 == 1 && uVar11 != 9;
      }
      (&DAT_10008108)[uVar3 * 0xe] = (int)uVar19;
      *(int *)(lVar5 + ((uintptr_t)pf_module_state+0x594cU)) = iVar8;
      *(bool *)(lVar5 + ((uintptr_t)pf_module_state+0x5950U)) = uVar20 != 0;
      (&DAT_10008111)[lVar5] = (byte)(uVar21 >> 0x1e);
      (&DAT_10008112)[lVar5] = bVar7;
      uVar15 = recovered_10001c0c((long *)puVar1,7,(ulong)*(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x5938U)),3,0x18,0,
                                  &uStack_4cc);
      if ((((int)uVar15 == 0) || ((uStack_4cc & 0xfff9a008) != 0)) ||
         ((((&DAT_10008111)[lVar5] & 1) == 0 &&
          ((uVar15 = recovered_10001c0c((long *)puVar1,0x10,0x200,2,0x18,0,&uStack_4cc),
           (int)uVar15 == 0 || ((uStack_4cc & 0xfff9a008) != 0)))))) goto LAB_100010d0;
      uVar21 = *(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x594cU));
      if (24999999 < *(uint *)(lVar5 + ((uintptr_t)pf_module_state+0x594cU))) {
        uVar21 = 25000000;
      }
      uVar15 = recovered_10001a38((long *)puVar1,uVar21);
      if (((int)uVar15 == 0) || (uVar15 = recovered_10001d88((long *)puVar1), (int)uVar15 == 0))
      goto LAB_100010d0;
      (&DAT_10008100)[uVar3 * 0xe] = 1;
      DAT_10008004 = DAT_10008004 + 1;
      goto LAB_100010e8;
    }
  }
LAB_100010d0:
  recovered_1000174c((long)puVar1,str_1000281f);
  recovered_100017fc((long *)puVar1);
LAB_100010e8:
  uVar22 = uVar22 + 1;
  goto LAB_100009ac;
code_r0x10000e78:
  uVar15 = recovered_10001910((long *)puVar1,(ulong)((uint)lVar17 | 0x10),4,
                              (undefined4 *)((long)auStack_4c8 + lVar17));
  lVar17 = lVar17 + 4;
  if ((int)uVar15 == 0) goto LAB_100010d0;
  goto LAB_10000e6c;
}

#undef DAT_100028a3
#undef DAT_100028a9
#undef DAT_100028ae
#undef DAT_100028b1
#undef DAT_100028b3
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008020
#undef DAT_1000802c
#undef DAT_100080e0
#undef DAT_100080e8
#undef DAT_100080ec
#undef DAT_10008100
#undef DAT_10008108
#undef DAT_10008111
#undef DAT_10008112
#undef str_1000281f
#undef str_1000283c
#undef str_1000284b
#undef str_10002862
#undef uStack_4e4
#undef uStack_4e0
#undef uStack_4dc
#undef uStack_4d8
#undef uStack_4d4
#undef uStack_4d0
#undef uStack_4cc
#undef auStack_4c8
#undef bStack_4bd
#undef aiStack_4bc
#undef uStack_c8

#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef _DAT_10008000
#define _DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5840U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100012f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  byte *pbVar2;
  ulong uVar3;

  plVar1 = (long *)&DAT_100080e0;
  for (uVar3 = 0; uVar3 < _DAT_10008000 >> 0x20; uVar3 = uVar3 + 1) {
    recovered_100017fc(plVar1);
    plVar1 = plVar1 + 7;
  }
  pbVar2 = &DAT_10008010;
  for (uVar3 = 0; uVar3 < (_DAT_10008000 & 0xffffffff); uVar3 = uVar3 + 1) {
    recovered_1000170c(pbVar2);
    pbVar2 = pbVar2 + 0x34;
  }
  _DAT_10008000 = 0;
  return;
}

#undef DAT_10008000
#undef DAT_10008010
#undef DAT_100080e0
#undef _DAT_10008000

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef DAT_10008111
#define DAT_10008111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5951U)))
#undef str_100028b6
#define str_100028b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_100028cb
#define str_100028cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001368
 */

undefined8 recovered_10001368(uint param_1,undefined4 *param_2,undefined1 *param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_1 < DAT_10008004)) {
    uVar2 = (ulong)param_1;
    if ((&DAT_10008100)[uVar2 * 0xe] == 0) {
      return 0;
    }
    *param_2 = (&DAT_10008108)[uVar2 * 0xe];
    pcVar1 = str_100028b6;
    if ((&DAT_10008111)[uVar2 * 0x38] == '\0') {
      pcVar1 = str_100028cb;
    }
    recovered_10001fa4(param_3,(ulong)param_4,pcVar1);
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_10008004
#undef DAT_10008100
#undef DAT_10008108
#undef DAT_10008111
#undef str_100028b6
#undef str_100028cb

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef DAT_10008111
#define DAT_10008111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5951U)))
#undef str_100028e6
#define str_100028e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x126U)))
#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013ec
 */

/* WARNING: Removing unreachable block (ram,0x1000239c) */
/* WARNING: Removing unreachable block (ram,0x100023b8) */
/* WARNING: Removing unreachable block (ram,0x10002240) */
/* WARNING: Removing unreachable block (ram,0x10002248) */
/* WARNING: Removing unreachable block (ram,0x10002258) */
/* WARNING: Removing unreachable block (ram,0x10002260) */
/* WARNING: Removing unreachable block (ram,0x100022cc) */
/* WARNING: Removing unreachable block (ram,0x100022d4) */
/* WARNING: Removing unreachable block (ram,0x10002454) */
/* WARNING: Removing unreachable block (ram,0x1000241c) */
/* WARNING: Removing unreachable block (ram,0x10002420) */

undefined8 recovered_100013ec(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;

  uVar4 = 0;
  if ((param_3 != 0) && (param_1 < DAT_10008004)) {
    uVar7 = (ulong)param_1;
    lVar3 = uVar7 * 0x38;
    plVar1 = (long *)(&DAT_100080e0 + lVar3);
    recovered_10002498((long)plVar1);
    if ((((&DAT_10008100)[uVar7 * 0xe] == 0) ||
        ((uint)(&DAT_10008108)[uVar7 * 0xe] <= param_2 ||
         (&DAT_10008108)[uVar7 * 0xe] - param_2 <= param_4 - 1)) ||
       (((((&DAT_10008111)[lVar3] & 1) == 0 && (0x800000 < (ulong)param_4 + (ulong)param_2)) ||
        (uVar4 = recovered_10001e18(plVar1), (int)uVar4 == 0)))) {
LAB_10002464:
      uVar4 = 0;
    }
    else {
      lStack_78 = param_3 + 1;
      for (uVar7 = 0; uVar7 != param_4; uVar7 = uVar7 + 1) {
        uVar2 = (int)uVar7 + param_2;
        if ((0x7fffff < uVar2) && ((&DAT_10008111)[lVar3] == '\0')) {
LAB_10002440:
          recovered_1000174c((long)plVar1,str_100028e6);
          recovered_100017fc(plVar1);
          goto LAB_10002464;
        }
        if ((&DAT_10008111)[lVar3] == '\0') {
          uVar2 = uVar2 * 0x200;
        }
        uVar4 = recovered_10001910(plVar1,0x24,4,&uStack_68);
        if ((((int)uVar4 == 0) || (uVar4 = recovered_100019f0(plVar1,4,2,0x200), (int)uVar4 == 0))
           || ((uVar4 = recovered_100019f0(plVar1,6,2,1), (int)uVar4 == 0 ||
               ((((uVar4 = recovered_100019f0(plVar1,0xc,2,0x12), (int)uVar4 == 0 ||
                  (uVar4 = recovered_10001c0c(plVar1,0x11,(ulong)uVar2,2,0x18,1,&uStack_64),
                  (int)uVar4 == 0)) || ((uStack_64 & 0xfff9a008) != 0)) ||
                ((uVar4 = recovered_10001eb0(plVar1,0x20,20000), (int)uVar4 == 0 ||
                 (uVar4 = recovered_100019f0(plVar1,0x30,4,0x20), (int)uVar4 == 0))))))))
        goto LAB_10002440;
        lVar6 = lStack_78;
        for (lVar5 = 3; lVar5 - 3U < 0x200; lVar5 = lVar5 + 4) {
          uVar4 = recovered_10001910(plVar1,0x20,4,&uStack_6c);
          if ((int)uVar4 == 0) goto LAB_10002440;
          *(undefined4 *)(lVar6 + -1) = uStack_6c;
          lVar6 = lVar6 + 4;
        }
        recovered_10001e80(DAT_10008008);
        uVar4 = recovered_10001eb0(plVar1,2,20000);
        if (((int)uVar4 == 0) || (uVar4 = recovered_100019f0(plVar1,0x30,4,2), (int)uVar4 == 0))
        goto LAB_10002440;
        lStack_78 = lStack_78 + 0x200;
      }
      uVar4 = 1;
    }
    *(undefined4 *)(lVar3 + ((uintptr_t)pf_module_state+0x5944U)) = 0;
  }
  return uVar4;
}

#undef DAT_10008004
#undef DAT_10008008
#undef DAT_100080e0
#undef DAT_10008100
#undef DAT_10008108
#undef DAT_10008111
#undef str_100028e6
#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef DAT_10008111
#define DAT_10008111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5951U)))
#undef DAT_10008112
#define DAT_10008112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5952U)))
#undef str_100028d9
#define str_100028d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f4
 */

/* WARNING: Removing unreachable block (ram,0x10002270) */
/* WARNING: Removing unreachable block (ram,0x100023bc) */
/* WARNING: Removing unreachable block (ram,0x100023d0) */

undefined8 recovered_100013f4(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;

  uVar5 = 0;
  if ((param_3 != 0) && (param_1 < DAT_10008004)) {
    uVar8 = (ulong)param_1;
    lVar3 = uVar8 * 0x38;
    plVar1 = (long *)(&DAT_100080e0 + lVar3);
    recovered_10002498((long)plVar1);
    if ((((&DAT_10008100)[uVar8 * 0xe] == 0) ||
        ((uint)(&DAT_10008108)[uVar8 * 0xe] <= param_2 ||
         (&DAT_10008108)[uVar8 * 0xe] - param_2 <= param_4 - 1)) ||
       (((((((&DAT_10008111)[lVar3] & 1) == 0 && (0x800000 < (ulong)param_4 + (ulong)param_2)) ||
          (uVar5 = recovered_10001e18(plVar1), (int)uVar5 == 0)) ||
         ((((&DAT_10008112)[lVar3] & 1) != 0 ||
          (uVar5 = recovered_10001910(plVar1,0x24,4,&uStack_64), (int)uVar5 == 0)))) ||
        ((PF_PART1(uStack_64, 2) >> 3 & 1) == 0)))) {
LAB_10002464:
      uVar5 = 0;
    }
    else {
      lStack_78 = param_3 + 1;
      for (uVar8 = 0; uVar8 != param_4; uVar8 = uVar8 + 1) {
        uVar2 = (int)uVar8 + param_2;
        if ((0x7fffff < uVar2) && ((&DAT_10008111)[lVar3] == '\0')) {
LAB_10002440:
          recovered_1000174c((long)plVar1,str_100028d9);
          recovered_100017fc(plVar1);
          goto LAB_10002464;
        }
        if ((&DAT_10008111)[lVar3] == '\0') {
          uVar2 = uVar2 * 0x200;
        }
        uVar5 = recovered_10001910(plVar1,0x24,4,&uStack_68);
        if ((((((int)uVar5 == 0) || (((&DAT_10008112)[lVar3] & 1) != 0)) ||
             ((PF_PART1(uStack_68, 2) >> 3 & 1) == 0)) ||
            (((uVar5 = recovered_100019f0(plVar1,4,2,0x200), (int)uVar5 == 0 ||
              (uVar5 = recovered_100019f0(plVar1,6,2,1), (int)uVar5 == 0)) ||
             ((uVar5 = recovered_100019f0(plVar1,0xc,2,2), (int)uVar5 == 0 ||
              ((uVar5 = recovered_10001c0c(plVar1,0x18,(ulong)uVar2,2,0x18,1,&uStack_64),
               (int)uVar5 == 0 || ((uStack_64 & 0xfff9a008) != 0)))))))) ||
           ((uVar5 = recovered_10001eb0(plVar1,0x10,20000), (int)uVar5 == 0 ||
            (uVar5 = recovered_100019f0(plVar1,0x30,4,0x10), (int)uVar5 == 0)))) goto LAB_10002440;
        lVar7 = lStack_78;
        for (lVar6 = 3; lVar6 - 3U < 0x200; lVar6 = lVar6 + 4) {
          uVar5 = recovered_100019f0(plVar1,0x20,4,(ulong)*(uint *)(lVar7 + -1));
          if ((int)uVar5 == 0) goto LAB_10002440;
          lVar7 = lVar7 + 4;
        }
        recovered_10001e80(DAT_10008008);
        uVar5 = recovered_10001eb0(plVar1,2,20000);
        if ((int)uVar5 == 0) goto LAB_10002440;
        uVar5 = recovered_100019f0(plVar1,0x30,4,2);
        iVar4 = 0;
        if ((int)uVar5 != 0) {
          uVar5 = recovered_10001d88(plVar1);
          iVar4 = (int)uVar5;
        }
        if (iVar4 == 0) goto LAB_10002440;
        lStack_78 = lStack_78 + 0x200;
      }
      uVar5 = 1;
    }
    *(undefined4 *)(lVar3 + ((uintptr_t)pf_module_state+0x5944U)) = 0;
  }
  return uVar5;
}

#undef DAT_10008004
#undef DAT_10008008
#undef DAT_100080e0
#undef DAT_10008100
#undef DAT_10008108
#undef DAT_10008111
#undef DAT_10008112
#undef str_100028d9
#undef lStack_78
#undef uStack_68
#undef uStack_64

#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013fc
 */

undefined8 recovered_100013fc(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  undefined8 uVar3;

  if (DAT_10008004 <= param_1) {
    return 0;
  }
  lVar2 = (ulong)param_1 * 0x38;
  plVar1 = (long *)(&DAT_100080e0 + lVar2);
  recovered_10002498((long)plVar1);
  if (((&DAT_10008100)[(ulong)param_1 * 0xe] == 0) ||
     (uVar3 = recovered_10001d88(plVar1), (int)uVar3 == 0)) {
    recovered_100017fc(plVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(lVar2 + ((uintptr_t)pf_module_state+0x5944U)) = 0;
  return uVar3;
}

#undef DAT_10008004
#undef DAT_100080e0
#undef DAT_10008100

#undef DAT_100028f2
#define DAT_100028f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x132U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef DAT_10008011
#define DAT_10008011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5851U)))
#undef DAT_10008012
#define DAT_10008012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5852U)))
#undef DAT_100080e8
#define DAT_100080e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5928U)))
#undef DAT_100080ec
#define DAT_100080ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x592cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001470
 */

undefined8 recovered_10001470(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;

  uVar5 = 0;
  if ((param_2 != 0) && (param_1 < DAT_10008004)) {
    uVar1 = *(uint *)(&DAT_100080ec + (ulong)param_1 * 0x38);
    lVar7 = (ulong)*(uint *)(&DAT_100080e8 + (ulong)param_1 * 0x38) * 0x34;
    uVar2 = (&DAT_10008010)[lVar7];
    uVar3 = (&DAT_10008011)[lVar7];
    uVar4 = (&DAT_10008012)[lVar7];
    for (lVar7 = 0; lVar7 != 0x40; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + lVar7) = 0;
    }
    for (lVar7 = 0; lVar7 != 4; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + lVar7) = (&DAT_100028f2)[lVar7];
    }
    *(undefined1 *)(param_2 + 4) = uVar2;
    *(undefined1 *)(param_2 + 5) = uVar3;
    *(undefined1 *)(param_2 + 6) = uVar4;
    puVar6 = (undefined1 *)(param_2 + 8);
    for (lVar7 = 0; lVar7 != 0x20; lVar7 = lVar7 + 8) {
      *puVar6 = (char)(uVar1 >> (ulong)((uint)lVar7 & 0x1f));
      puVar6 = puVar6 + 1;
    }
    for (lVar7 = 0; lVar7 != 8; lVar7 = lVar7 + 1) {
      *(undefined1 *)(param_2 + 0x10 + lVar7) = 0;
    }
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_100028f2
#undef DAT_10008004
#undef DAT_10008010
#undef DAT_10008011
#undef DAT_10008012
#undef DAT_100080e8
#undef DAT_100080ec

#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001540
 */

undefined8
recovered_10001540(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_1000167c(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_1000167c(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_1000167c(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_1000167c(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_1000167c(param_1,param_2,param_3,param_4,
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

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000167c
 */

undefined8
recovered_1000167c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100016c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016c8
 */

undefined8
recovered_100016c8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,param_5,2);
  return uVar1;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000170c
 */

void recovered_1000170c(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (*(int *)(param_1 + 0x30) != 0) {
    recovered_100016c8(DAT_10008008,(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2],4);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  return;
}

#undef DAT_10008008

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef str_10002889
#define str_10002889 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9U)))
#undef str_10002891
#define str_10002891 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_10002899
#define str_10002899 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9U)))
#define auStack_e0 (*(undefined1 (*)[224])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000174c
 */

void recovered_1000174c(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};


  recovered_10001fa4(auStack_e0,0xc0,str_10002889);
  recovered_10001fb8((long)auStack_e0,0xc0,param_2);
  recovered_10001fb8((long)auStack_e0,0xc0,str_10002891);
  recovered_10002010((long)auStack_e0,0xc0,*(uint *)(param_1 + 0xc));
  recovered_10001fb8((long)auStack_e0,0xc0,str_10002899);
  recovered_100020c0((long)auStack_e0,0xc0,*(uint *)(param_1 + 0x1c),8);
  if ((((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) &&
      (0x2b < (uint)DAT_10008008[2])) && (DAT_10008008[10] != 0)) {
    (*(code *)(ulong)(uint)DAT_10008008[10])(auStack_e0);
  }
  return;
}

#undef DAT_10008008
#undef str_10002889
#undef str_10002891
#undef str_10002899
#undef auStack_e0

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017fc
 */

/* WARNING: Removing unreachable block (ram,0x10001a1c) */
/* WARNING: Removing unreachable block (ram,0x10001a20) */
/* WARNING: Removing unreachable block (ram,0x10001a10) */
/* WARNING: Removing unreachable block (ram,0x10001a14) */

long * recovered_100017fc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  *(undefined4 *)(param_1 + 4) = 0;
  if (*param_1 == 0) {
    return param_1;
  }
  recovered_100019f0(param_1,0x38,4,0);
  recovered_1000188c(param_1,1);
  recovered_100019f0(param_1,0x2c,2,0);
  if (*param_1 == 0) {
    return (long *)0x0;
  }
  uVar1 = *param_1 + 0x29;
  if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
    if ((0xc3 < (uint)DAT_10008008[2]) && (DAT_10008008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(*(code *)(ulong)(uint)DAT_10008008[0x30])(uVar1,1,0);
      return plVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)DAT_10008008[2])) && (DAT_10008008[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(*(code *)(ulong)(uint)DAT_10008008[0x1b])(uVar1,1,0);
      return plVar2;
    }
  }
  return (long *)0x0;
}

#undef DAT_10008008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001858
 */

void recovered_10001858(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000188c
 */

undefined8 recovered_1000188c(long *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  uVar1 = recovered_100019f0(param_1,0x2f,1,param_2);
  if ((int)uVar1 != 0) {
    iVar2 = 1000;
    do {
      uVar1 = recovered_10001910(param_1,0x2f,1,&local_34);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if ((local_34 & (uint)param_2) == 0) {
        return 1;
      }
      recovered_10001858(DAT_10008008,100);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_10008008
#undef local_34

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

undefined8 recovered_10001910(long *param_1,ulong param_2,int param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_3 == 2) {
    local_28 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = recovered_10001b34(DAT_10008008,*param_1 + (param_2 & 0xffffffff),2,(long)&local_28);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    local_24 = local_28;
  }
  else {
    if (param_3 == 1) {
      if (param_4 == (undefined4 *)0x0) {
        return 0;
      }
      if (*param_1 == 0) {
        return 0;
      }
      uVar1 = *param_1 + (param_2 & 0xffffffff);
      if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
        if ((0xbf < (uint)DAT_10008008[2]) &&
           ((param_4 != (undefined4 *)0x0 && (DAT_10008008[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x2f])(uVar1,1,param_4);
          return uVar2;
        }
        if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)DAT_10008008[2])) &&
            (param_4 != (undefined4 *)0x0)) && (DAT_10008008[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x1a])(uVar1,1,param_4);
          return uVar2;
        }
      }
      return 0;
    }
    local_24 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = recovered_10001b34(DAT_10008008,*param_1 + (param_2 & 0xffffffff),4,(long)&local_24);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *param_4 = local_24;
  return 1;
}

#undef DAT_10008008
#undef local_28
#undef local_24

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f0
 */

undefined8 recovered_100019f0(long *param_1,ulong param_2,int param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  long lVar3;

  lVar3 = *param_1;
  if (param_3 == 2) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = 2;
  }
  else if (param_3 == 1) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = 4;
  }
  uVar1 = lVar3 + (param_2 & 0xffffffff);
  if ((DAT_10008008 != (int *)0x0) && (*DAT_10008008 == 0x54584b57)) {
    if ((0xc3 < (uint)DAT_10008008[2]) && (DAT_10008008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x30])(uVar1,uVar2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)DAT_10008008[2])) && (DAT_10008008[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_10008008[0x1b])(uVar1,uVar2,param_4);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10008008

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define abStack_34 (*(byte (*)[52])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a38
 */

undefined8 recovered_10001a38(long *param_1,uint param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;

  uVar2 = *(uint *)(param_1 + 2);
  uVar4 = 0x7fe;
  if (uVar2 < 2) {
    uVar4 = 0x100;
  }
  if ((5 < uVar2 || param_2 == 0) || *(uint *)((long)param_1 + 0x14) == 0) {
    return 0;
  }
  uVar6 = 1;
  while (uVar5 = (uint)uVar6, param_2 * uVar6 < (ulong)*(uint *)((long)param_1 + 0x14)) {
    if (uVar4 <= uVar5) goto LAB_10001b14;
    uVar1 = 2;
    if (uVar5 != 1) {
      uVar1 = uVar5 + 2;
    }
    if (uVar2 < 2) {
      uVar1 = uVar5 << 1;
    }
    uVar6 = (ulong)uVar1;
  }
  uVar3 = recovered_100019f0(param_1,0x2c,2,0);
  if ((int)uVar3 != 0) {
    uVar4 = uVar5 >> 3 & 0xc0 | (uVar5 >> 1 & 0xff) << 8;
    uVar3 = recovered_100019f0(param_1,0x2c,2,(ulong)(uVar4 | 1));
    if ((int)uVar3 != 0) {
      iVar7 = 0x5dc;
      do {
        uVar3 = recovered_10001910(param_1,0x2c,2,(undefined4 *)abStack_34);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if ((abStack_34[0] >> 1 & 1) != 0) {
          uVar3 = recovered_100019f0(param_1,0x2c,2,(ulong)(uVar4 | 5));
          return uVar3;
        }
        recovered_10001858(DAT_10008008,100);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
LAB_10001b14:
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef DAT_10008008
#undef abStack_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b34
 */

undefined8 recovered_10001b34(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba4
 */

undefined8 recovered_10001ba4(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define uStack_64 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c0c
 */

undefined8
recovered_10001c0c(long *param_1,int param_2,undefined8 param_3,uint param_4,uint param_5,
                  int param_6,undefined4 *param_7)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  int iVar3;

  uVar2 = 3;
  if (param_6 == 0 && param_4 != 3) {
    uVar2 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  uVar1 = recovered_10001e18(param_1);
  if ((int)uVar1 != 0) {
    iVar3 = 1000;
    do {
      uVar1 = recovered_10001910(param_1,0x24,4,&uStack_64);
      if (((int)uVar1 == 0) || (uStack_64 == 0xffffffff)) break;
      if ((uStack_64 & uVar2) == 0) {
        uVar1 = recovered_100019f0(param_1,0x30,4,0xffffff7f);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        uVar1 = recovered_100019f0(param_1,8,4,param_3);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        recovered_10001e80(DAT_10008008);
        uVar1 = recovered_100019f0(param_1,0xe,2,
                                   (ulong)(param_5 | param_2 << 8 | (uint)(param_6 != 0) << 5 |
                                          param_4));
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        uVar1 = recovered_10001eb0(param_1,1,10000);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        uVar1 = recovered_100019f0(param_1,0x30,4,1);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        if ((param_7 != (undefined4 *)0x0) &&
           (uVar1 = recovered_10001910(param_1,0x10,4,param_7), (int)uVar1 == 0)) {
          return uVar1;
        }
        if (param_4 == 3) {
          uVar1 = recovered_10001eb0(param_1,2,20000);
          if ((int)uVar1 == 0) {
            return uVar1;
          }
          uVar1 = recovered_100019f0(param_1,0x30,4,2);
          if ((int)uVar1 == 0) {
            return uVar1;
          }
        }
        return 1;
      }
      recovered_10001858(DAT_10008008,100);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_10008008
#undef uStack_64

#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define uStack_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d88
 */

undefined8 recovered_10001d88(long *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;

  iVar2 = 5000;
  while( true ) {
    uVar1 = recovered_10001c0c(param_1,0xd,(ulong)*(uint *)(param_1 + 3),2,0x18,0,&uStack_34);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if ((uStack_34 & 0xfff9a008) != 0) {
      return 0;
    }
    if ((uStack_34 & 0x1f00) == 0x900) {
      return 1;
    }
    if ((uStack_34 & 0x1c00) != 0xc00) break;
    recovered_10001858(DAT_10008008,1000);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

#undef DAT_10008008
#undef uStack_34

#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e18
 */

undefined8 recovered_10001e18(long *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10001910(param_1,0x24,4,&uStack_24);
  if ((((int)uVar1 == 0) || (uVar1 = recovered_10001910(param_1,0x30,4,&uStack_28), (int)uVar1 == 0)
      ) || (((uStack_24 == 0xffffffff || uStack_28 == 0xffffffff) || (uStack_24 & 0x10000) == 0) ||
            (uStack_28 & 0x80) != 0)) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_28
#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

void recovered_10001e80(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_44 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb0
 */

undefined8 recovered_10001eb0(long *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = recovered_10001910(param_1,0x30,4,&uStack_44);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar1 = recovered_10001910(param_1,0x24,4,&uStack_48);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    *(uint *)((long)param_1 + 0x1c) = uStack_44;
    if ((uStack_44 & 0xffff8080) != 0) break;
    if ((PF_PART1(uStack_48, 2) & 1) == 0) {
      return 0;
    }
    if ((uStack_44 & param_2) != 0) {
      return 1;
    }
    recovered_10001858(DAT_10008008,100);
    param_3 = param_3 + -1;
  }
  return 0;
}

#undef DAT_10008008
#undef uStack_48
#undef uStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f48
 */

uint recovered_10001f48(long param_1,uint param_2,uint param_3)

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
 * Address: 0x10001fa4
 */

void recovered_10001fa4(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10002138((long)param_1);
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
 * Address: 0x10001fb8
 */

void recovered_10001fb8(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10002138(param_1);
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
 * Address: 0x10002010
 */

void recovered_10002010(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10002138(param_1);
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
    recovered_10002154(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c0
 */

void recovered_100020c0(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10002154(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002138
 */

long recovered_10002138(long param_1)

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
 * Address: 0x10002154
 */

void recovered_10002154(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10002138(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5920U)))
#undef DAT_10008100
#define DAT_10008100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5940U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef DAT_10008111
#define DAT_10008111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5951U)))
#undef DAT_10008112
#define DAT_10008112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5952U)))
#undef str_100028d9
#define str_100028d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x119U)))
#undef str_100028e6
#define str_100028e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x126U)))
#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002194
 */

undefined8 recovered_10002194(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long *plVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;

  if (param_3 == 0) {
    return 0;
  }
  if (DAT_10008004 <= param_1) {
    return 0;
  }
  uVar12 = (ulong)param_1;
  lVar4 = uVar12 * 0x38;
  plVar1 = (long *)(&DAT_100080e0 + lVar4);
  recovered_10002498((long)plVar1);
  if (((((&DAT_10008100)[uVar12 * 0xe] == 0) ||
       ((uint)(&DAT_10008108)[uVar12 * 0xe] <= param_2 ||
        (&DAT_10008108)[uVar12 * 0xe] - param_2 <= param_4 - 1)) ||
      ((((&DAT_10008111)[lVar4] & 1) == 0 && (0x800000 < (ulong)param_4 + (ulong)param_2)))) ||
     (uVar6 = recovered_10001e18(plVar1), (int)uVar6 == 0)) {
LAB_10002464:
    uVar6 = 0;
  }
  else {
    if (param_5 == 0) {
      uVar6 = 0x20;
      uVar8 = 0x12;
      iVar9 = 0x11;
    }
    else {
      if (((((&DAT_10008112)[lVar4] & 1) != 0) ||
          (uVar6 = recovered_10001910(plVar1,0x24,4,&uStack_64), (int)uVar6 == 0)) ||
         ((PF_PART1(uStack_64, 2) >> 3 & 1) == 0)) goto LAB_10002464;
      uVar6 = 0x10;
      uVar8 = 2;
      iVar9 = 0x18;
    }
    lStack_78 = param_3 + 1;
    for (uVar12 = 0; uVar12 != param_4; uVar12 = uVar12 + 1) {
      uVar2 = (int)uVar12 + param_2;
      if ((0x7fffff < uVar2) && ((&DAT_10008111)[lVar4] == '\0')) {
LAB_10002440:
        pcVar3 = str_100028e6;
        if (param_5 != 0) {
          pcVar3 = str_100028d9;
        }
        recovered_1000174c((long)plVar1,pcVar3);
        recovered_100017fc(plVar1);
        goto LAB_10002464;
      }
      if ((&DAT_10008111)[lVar4] == '\0') {
        uVar2 = uVar2 * 0x200;
      }
      uVar7 = recovered_10001910(plVar1,0x24,4,&uStack_68);
      if ((((int)uVar7 == 0) ||
          ((param_5 != 0 &&
           ((((&DAT_10008112)[lVar4] & 1) != 0 || ((PF_PART1(uStack_68, 2) >> 3 & 1) == 0)))))) ||
         ((uVar7 = recovered_100019f0(plVar1,4,2,0x200), (int)uVar7 == 0 ||
          (((((uVar7 = recovered_100019f0(plVar1,6,2,1), (int)uVar7 == 0 ||
              (uVar7 = recovered_100019f0(plVar1,0xc,2,uVar8), (int)uVar7 == 0)) ||
             (uVar7 = recovered_10001c0c(plVar1,iVar9,(ulong)uVar2,2,0x18,1,&uStack_64),
             (int)uVar7 == 0)) ||
            (((uStack_64 & 0xfff9a008) != 0 ||
             (uVar7 = recovered_10001eb0(plVar1,(uint)uVar6,20000), (int)uVar7 == 0)))) ||
           (uVar7 = recovered_100019f0(plVar1,0x30,4,uVar6), (int)uVar7 == 0))))))
      goto LAB_10002440;
      lVar11 = lStack_78;
      for (lVar10 = 3; lVar10 - 3U < 0x200; lVar10 = lVar10 + 4) {
        if (param_5 == 0) {
          uVar7 = recovered_10001910(plVar1,0x20,4,&uStack_6c);
          if ((int)uVar7 == 0) goto LAB_10002440;
          *(uint *)(lVar11 + -1) = uStack_6c;
        }
        else {
          uStack_6c = *(uint *)(lVar11 + -1);
          uVar7 = recovered_100019f0(plVar1,0x20,4,(ulong)uStack_6c);
          if ((int)uVar7 == 0) goto LAB_10002440;
        }
        lVar11 = lVar11 + 4;
      }
      recovered_10001e80(DAT_10008008);
      uVar7 = recovered_10001eb0(plVar1,2,20000);
      if ((int)uVar7 == 0) goto LAB_10002440;
      uVar7 = recovered_100019f0(plVar1,0x30,4,2);
      iVar5 = (int)uVar7;
      if ((param_5 != 0) && (iVar5 != 0)) {
        uVar7 = recovered_10001d88(plVar1);
        iVar5 = (int)uVar7;
      }
      if (iVar5 == 0) goto LAB_10002440;
      lStack_78 = lStack_78 + 0x200;
    }
    uVar6 = 1;
  }
  *(undefined4 *)(lVar4 + ((uintptr_t)pf_module_state+0x5944U)) = 0;
  return uVar6;
}

#undef DAT_10008004
#undef DAT_10008008
#undef DAT_100080e0
#undef DAT_10008100
#undef DAT_10008108
#undef DAT_10008111
#undef DAT_10008112
#undef str_100028d9
#undef str_100028e6
#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002498
 */

void recovered_10002498(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;

  piVar1 = (int *)(param_1 + 0x24);
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


#undef DAT_100027d0
#define DAT_100027d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5840U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint *)(((uintptr_t)pf_module_state + 0x5844U)))
#undef DAT_10008008
#define DAT_10008008 (*(int * *)(((uintptr_t)pf_module_state + 0x5848U)))
#undef DAT_10008108
#define DAT_10008108 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5948U)))
#undef str_100028f7
#define str_100028f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
#undef str_1000290b
#define str_1000290b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14bU)))
#undef str_10002919
#define str_10002919 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_10002969
#define str_10002969 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c0
 */

undefined8 recovered_100024c0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;

  uVar2 = 0;
  if (((param_1 != (undefined8 *)0x0) && (DAT_10008008 != (int *)0x0)) &&
     (uVar3 = (ulong)DAT_10008004, DAT_10008004 != 0)) {
    uVar6 = 0;
    lVar5 = 0;
    puVar4 = &DAT_10008108;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar4[-2] != 0) {
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + (ulong)*puVar4;
      }
      puVar4 = puVar4 + 0xe;
    }
    recovered_1000070c((undefined1 *)param_1,500);
    *param_1 = DAT_100027d0;
    uVar1 = 0x13;
    if (uVar6 != DAT_10008004) {
      uVar1 = 9;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    *(undefined4 *)(param_1 + 2) = uVar1;
    if (((DAT_10008008 == (int *)0x0) || (*DAT_10008008 != 0x54584b57)) ||
       (((uint)DAT_10008008[2] < 0x30 || (DAT_10008008[0xb] == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(code *)(ulong)(uint)DAT_10008008[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar1;
    *(undefined4 *)((long)param_1 + 0x44) = DAT_10008000;
    *(uint *)(param_1 + 9) = uVar6;
    *(int *)((long)param_1 + 0x4c) = (int)lVar5;
    *(int *)(param_1 + 10) = (int)((ulong)lVar5 >> 0x20);
    recovered_10001fa4((undefined1 *)((long)param_1 + 0x54),0x40,str_100028f7);
    recovered_10001fa4((undefined1 *)((long)param_1 + 0x94),0x40,str_1000290b);
    recovered_10001fa4((undefined1 *)((long)param_1 + 0xd4),0x60,str_10002919);
    recovered_10001fa4((undefined1 *)((long)param_1 + 0x134),0xc0,str_10002969);
    uVar2 = 1;
  }
  return uVar2;
}

#undef DAT_100027d0
#undef DAT_10008000
#undef DAT_10008004
#undef DAT_10008008
#undef DAT_10008108
#undef str_100028f7
#undef str_1000290b
#undef str_10002919
#undef str_10002969

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
