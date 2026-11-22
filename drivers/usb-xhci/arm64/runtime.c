/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003e0
 */

void * recovered_100003e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002463
#define DAT_10002463 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_100023ac
#define str_100023ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_100023bc
#define str_100023bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34U)))
#undef str_100023e7
#define str_100023e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_100023fc
#define str_100023fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74U)))
#undef str_1000241b
#define str_1000241b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_1000242a
#define str_1000242a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_10002431
#define str_10002431 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9U)))
#undef str_10002441
#define str_10002441 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9U)))
#undef str_10002450
#define str_10002450 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8U)))
#define abStack_6c (*(byte (*)[44])(frame + 1220))
#define local_118 (*(uint *)(frame + 1048))
#define auStack_518 (*(undefined1 (*)[1024])(frame + 24))
#define abStack_114 (*(byte (*)[12])(frame + 1052))
#define cStack_108 (*(char *)(frame + 1064))
#define uStack_b0 (*(uint *)(frame + 1152))
#define uStack_74 (*(uint *)(frame + 1212))
#define uStack_70 (*(uint *)(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100003ec
 */

int recovered_100003ec(int *api)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  local_118 = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    recovered_10000634(auStack_518,0x60,str_100023ac);
    recovered_10001594((long)auStack_518,0x60,str_1000241b);
    recovered_100015e0((long)auStack_518,0x60,api[1]);
    recovered_10001594((long)auStack_518,0x60,str_1000242a);
    if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
      (*(code *)(ulong)(uint)api[10])(auStack_518);
    }
    recovered_10000634(auStack_518,0x400,str_100023bc);
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
       ((api[0xf] != 0 && (iVar1 = (*(code *)(ulong)(uint)api[0xf])(abStack_114), iVar1 != 0)))) {
      recovered_10001548((long)auStack_518,str_10002431,uStack_b0);
      recovered_100016e0((long)auStack_518,str_10002441,uStack_74);
      recovered_10001548((long)auStack_518,str_10002450,uStack_70);
    }
    if (api[3] != 0) {
      iVar1 = (*(code *)(ulong)(uint)api[3])(&DAT_10002463,str_100023e7,auStack_518);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_100017a8(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_114
                                      );
            if (((int)uVar2 != 0) &&
               (recovered_10000644(api,abStack_114,(int *)&local_118), cStack_108 < '\0')) {
              for (uVar5 = 1; uVar5 != 8; uVar5 = uVar5 + 1) {
                uVar2 = recovered_100017a8(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),
                                           (ulong)(uVar5 & 0xff),abStack_6c);
                if ((int)uVar2 != 0) {
                  recovered_10000644(api,abStack_6c,(int *)&local_118);
                }
              }
            }
          }
        }
        uVar3 = local_118;
      }
      else {
        uVar3 = 0;
      }
      recovered_10001548((long)auStack_518,str_100023fc,uVar3);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(&DAT_10002463,str_100023e7,auStack_518);
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_10002463
#undef str_100023ac
#undef str_100023bc
#undef str_100023e7
#undef str_100023fc
#undef str_1000241b
#undef str_1000242a
#undef str_10002431
#undef str_10002441
#undef str_10002450
#undef abStack_6c
#undef local_118
#undef auStack_518
#undef abStack_114
#undef cStack_108
#undef uStack_b0
#undef uStack_74
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000634
 */

void recovered_10000634(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001684((long)param_1);
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


#undef DAT_1000245f
#define DAT_1000245f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002461
#define DAT_10002461 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
#undef DAT_100028cc
#define DAT_100028cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x544U)))
#undef DAT_100028da
#define DAT_100028da (*(uint8_t *)(((uintptr_t)pf_module_state + 0x552U)))
#undef DAT_100028e0
#define DAT_100028e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x558U)))
#undef str_10002464
#define str_10002464 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdcU)))
#undef str_10002483
#define str_10002483 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbU)))
#undef str_100024ce
#define str_100024ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x146U)))
#undef str_100024de
#define str_100024de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x156U)))
#undef str_100024f2
#define str_100024f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_1000250a
#define str_1000250a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_10002522
#define str_10002522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19aU)))
#undef str_1000253b
#define str_1000253b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_1000254c
#define str_1000254c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c4U)))
#undef str_1000255c
#define str_1000255c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_1000256b
#define str_1000256b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3U)))
#undef str_10002574
#define str_10002574 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecU)))
#undef str_10002590
#define str_10002590 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x208U)))
#undef str_1000259b
#define str_1000259b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_100025ab
#define str_100025ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x223U)))
#undef str_100025b2
#define str_100025b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22aU)))
#undef str_100025c2
#define str_100025c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_100025cf
#define str_100025cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x247U)))
#undef str_100025e5
#define str_100025e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_100025fb
#define str_100025fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x273U)))
#undef str_10002611
#define str_10002611 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_10002627
#define str_10002627 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_10002640
#define str_10002640 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10002658
#define str_10002658 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d0U)))
#undef str_10002665
#define str_10002665 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ddU)))
#undef str_10002676
#define str_10002676 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eeU)))
#undef str_1000268a
#define str_1000268a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x302U)))
#undef str_1000269a
#define str_1000269a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_100026b1
#define str_100026b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x329U)))
#undef str_100026c4
#define str_100026c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33cU)))
#undef str_100026ce
#define str_100026ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#undef str_100026e1
#define str_100026e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x359U)))
#undef str_100026f8
#define str_100026f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x370U)))
#undef str_10002704
#define str_10002704 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37cU)))
#undef str_10002710
#define str_10002710 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1000271d
#define str_1000271d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x395U)))
#undef str_10002727
#define str_10002727 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39fU)))
#undef str_1000273b
#define str_1000273b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b3U)))
#undef str_1000274a
#define str_1000274a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c2U)))
#undef str_1000275d
#define str_1000275d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d5U)))
#undef str_1000276f
#define str_1000276f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e7U)))
#undef str_10002785
#define str_10002785 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3fdU)))
#undef str_1000278e
#define str_1000278e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x406U)))
#undef str_10002796
#define str_10002796 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40eU)))
#undef str_1000279e
#define str_1000279e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x416U)))
#undef str_100027a8
#define str_100027a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_100027b4
#define str_100027b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#undef str_100027c9
#define str_100027c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x441U)))
#undef str_100027d1
#define str_100027d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x449U)))
#undef str_100027d9
#define str_100027d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_100027e1
#define str_100027e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_100027ed
#define str_100027ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x465U)))
#undef str_100027f5
#define str_100027f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_100027fd
#define str_100027fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x475U)))
#undef str_10002805
#define str_10002805 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47dU)))
#undef str_1000280d
#define str_1000280d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x485U)))
#undef str_10002818
#define str_10002818 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x490U)))
#undef str_1000281e
#define str_1000281e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_10002828
#define str_10002828 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a0U)))
#undef str_1000283d
#define str_1000283d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b5U)))
#undef str_1000284e
#define str_1000284e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c6U)))
#undef str_1000285a
#define str_1000285a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d2U)))
#undef str_10002866
#define str_10002866 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4deU)))
#undef str_10002872
#define str_10002872 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#undef str_10002881
#define str_10002881 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f9U)))
#undef str_1000288b
#define str_1000288b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x503U)))
#undef str_10002899
#define str_10002899 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x511U)))
#undef str_100028aa
#define str_100028aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x522U)))
#undef str_100028b6
#define str_100028b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52eU)))
#undef str_100028c2
#define str_100028c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53aU)))
#undef str_100028d1
#define str_100028d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_100028e5
#define str_100028e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_100028ee
#define str_100028ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x566U)))
#undef str_100028f7
#define str_100028f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56fU)))
#undef str_100028ff
#define str_100028ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x577U)))
#undef str_1000290a
#define str_1000290a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x582U)))
#define uStack_48c (*(uint *)(frame + 1108))
#define uStack_488 (*(undefined4 *)(frame + 1112))
#define uStack_484 (*(undefined4 *)(frame + 1116))
#define uStack_480 (*(uint *)(frame + 1120))
#define uStack_47c (*(uint *)(frame + 1124))
#define uStack_478 (*(uint *)(frame + 1128))
#define uStack_474 (*(uint *)(frame + 1132))
#define uStack_470 (*(uint *)(frame + 1136))
#define uStack_46c (*(uint *)(frame + 1140))
#define uStack_468 (*(uint *)(frame + 1144))
#define uStack_464 (*(uint *)(frame + 1148))
#define uStack_460 (*(uint *)(frame + 1152))
#define uStack_45c (*(uint *)(frame + 1156))
#define uStack_458 (*(uint *)(frame + 1160))
#define uStack_454 (*(undefined4 *)(frame + 1164))
#define uStack_450 (*(ulong *)(frame + 1168))
#define auStack_448 (*(uint (*)[230])(frame + 1176))
#define auStack_b0 (*(ulong (*)[12])(frame + 2096))
#define acStack_8d0 (*(char (*)[1024])(frame + 16))
#define uStack_4d0 (*(uint *)(frame + 1040))
#define uStack_4cc (*(uint *)(frame + 1044))
#define uStack_4c8 (*(undefined8 *)(frame + 1048))
#define uStack_4c0 (*(undefined8 *)(frame + 1056))
#define uStack_4b8 (*(undefined8 *)(frame + 1064))
#define uStack_4b0 (*(undefined8 *)(frame + 1072))
#define uStack_4a8 (*(ulong *)(frame + 1080))
#define uStack_4a0 (*(ulong *)(frame + 1088))
#define uStack_498 (*(ulong *)(frame + 1096))
#define uStack_490 (*(uint *)(frame + 1104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000644
 */

void recovered_10000644(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;

  if (param_2[8] != 0xc) {
    return;
  }
  if (param_2[9] != 3) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000634(acStack_8d0,0x400,str_10002464);
  pcVar9 = recovered_10001944((uint)param_2[10]);
  recovered_10001594((long)acStack_8d0,0x400,pcVar9);
  iVar6 = recovered_10001c58((long)param_2);
  uStack_4b0 = (ulong)PF_PART4(uStack_4b0, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar9 = str_100024f2;
LAB_1000073c:
    recovered_10001594((long)acStack_8d0,0x400,pcVar9);
    bVar4 = false;
  }
  else {
    uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&uStack_4b0);
    if ((int)uVar10 == 0) {
      pcVar9 = str_1000250a;
      goto LAB_1000073c;
    }
    uVar7 = 0;
    for (lVar13 = 0x14; lVar13 != 0x2c; lVar13 = lVar13 + 4) {
      uVar12 = uVar7 | 1;
      if (*(uint *)(param_2 + lVar13) != 0) {
        uVar7 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + lVar13) & 1) != 0) {
        uVar7 = uVar12;
      }
    }
    lVar13 = recovered_10001684(((uintptr_t)pf_module_state + 0x86U));
    if (lVar13 != 0) {
      uVar7 = uVar7 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar7 = uVar7 | 2;
      }
    }
    auStack_b0[0] = CONCAT44(PF_PART4(auStack_b0[0], 4),(uint)uStack_4b0 | uVar7);
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
       ((param_1[0x18] == 0 ||
        (iVar8 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
        iVar8 == 0)))) {
      pcVar9 = str_10002522;
      goto LAB_1000073c;
    }
    recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_b0);
    recovered_100016e0((long)acStack_8d0,str_1000253b,(uint)uStack_4b0);
    uVar12 = (uint)auStack_b0[0];
    recovered_100016e0((long)acStack_8d0,str_1000254c,(uint)auStack_b0[0]);
    recovered_100016e0((long)acStack_8d0,str_1000255c,uVar7);
    bVar4 = (uVar7 & (uVar12 ^ 0xffffffff)) == 0;
  }
  if (iVar6 == -1) {
    uStack_4b0 = 0;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    uStack_4b8 = 0;
    uStack_4c0 = uStack_4c0 & 0xffffffff;
    if ((param_2[8] == 1) && (param_2[9] == 6)) {
      uVar10 = recovered_10001d04(param_1,(long)param_2,5,0x1000,&uStack_4b0);
      uVar11 = uStack_4b0;
      if ((int)uVar10 == 0) {
        recovered_10001594((long)acStack_8d0,0x400,str_1000276f);
        goto LAB_10000da4;
      }
      recovered_10001fe0((long)acStack_8d0,str_10002785,uStack_4b0);
      recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
      recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
      recovered_10001e80(param_1,uStack_4b0,0xc,(long)&uStack_4b8);
      recovered_10001e80(param_1,uStack_4b0,0x10,(long)&uStack_4c0 + 4);
      uVar7 = PF_PART4(uStack_4b8, 4);
      if (-1 < (long)uStack_4b8) {
        recovered_10001e6c(param_1,uStack_4b0,4,(ulong)(PF_PART4(uStack_4b8, 4) | 0x80000000));
        recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
        uVar7 = PF_PART4(uStack_4b8, 4);
      }
      recovered_100016e0((long)acStack_8d0,str_1000278e,(uint)auStack_b0[0]);
      recovered_100016e0((long)acStack_8d0,str_10002796,uVar7);
      recovered_100016e0((long)acStack_8d0,str_1000279e,(uint)uStack_4b8);
      recovered_100016e0((long)acStack_8d0,str_100027a8,PF_PART4(uStack_4c0, 4));
      bVar1 = 1;
    }
    else {
LAB_10000da4:
      bVar1 = 0;
    }
    uStack_4b0 = 0;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    uStack_4b8 = 0;
    if ((param_2[8] == 4) && (param_2[9] == 3)) {
      uVar10 = recovered_10001d04(param_1,(long)param_2,0,0x1000,&uStack_4b0);
      uVar11 = uStack_4b0;
      if ((int)uVar10 == 0) {
        recovered_10001594((long)acStack_8d0,0x400,str_100027b4);
        goto LAB_10000e80;
      }
      recovered_10001fe0((long)acStack_8d0,str_100027c9,uStack_4b0);
      recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
      recovered_10001e80(param_1,uStack_4b0,8,(long)&uStack_4b8 + 4);
      if ((uStack_4b8 & 0x100000000) == 0) {
        recovered_10001e6c(param_1,uStack_4b0,8,(ulong)(PF_PART4(uStack_4b8, 4) | 1));
        recovered_10001e80(param_1,uStack_4b0,8,(long)&uStack_4b8 + 4);
      }
      recovered_10001eb0(param_1,uStack_4b0 + 0xe,2,(long)&uStack_4b8);
      recovered_100016e0((long)acStack_8d0,str_100027d1,(uint)auStack_b0[0]);
      recovered_100016e0((long)acStack_8d0,str_100027d9,PF_PART4(uStack_4b8, 4));
      recovered_100016e0((long)acStack_8d0,str_100027e1,(uint)uStack_4b8);
      bVar3 = 1;
    }
    else {
LAB_10000e80:
      bVar3 = 0;
    }
    uStack_4b0 = 0;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    uStack_4b8 = 0;
    if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
      uVar10 = recovered_10001d04(param_1,(long)param_2,0,0x1000,&uStack_4b0);
      uVar11 = uStack_4b0;
      if ((int)uVar10 == 0) {
        for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
          uStack_4c0 = uStack_4c0 & 0xffffffff;
          uVar7 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
          if (((uVar7 & 1) != 0) &&
             (uVar10 = recovered_10002094(param_1,(ulong)(uVar7 & 0xfffc),2,(long)&uStack_4c0 + 4),
             (int)uVar10 != 0)) {
            recovered_10001594((long)acStack_8d0,0x400,str_1000280d);
            recovered_100015e0((long)acStack_8d0,0x400,(uint)lVar13);
            recovered_100016e0((long)acStack_8d0,str_10002818,uVar7 & 0xfffffffc);
            pcVar9 = str_1000281e;
            uVar7 = PF_PART4(uStack_4c0, 4);
            goto LAB_10000f0c;
          }
        }
        recovered_10001594((long)acStack_8d0,0x400,str_10002828);
        goto LAB_1000112c;
      }
      recovered_10001fe0((long)acStack_8d0,str_100027ed,uStack_4b0);
      recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
      recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
      recovered_10001e80(param_1,uStack_4b0,8,(long)&uStack_4b8);
      recovered_100016e0((long)acStack_8d0,str_100027f5,(uint)auStack_b0[0]);
      recovered_100016e0((long)acStack_8d0,str_100027fd,PF_PART4(uStack_4b8, 4));
      pcVar9 = str_10002805;
      uVar7 = (uint)uStack_4b8;
LAB_10000f0c:
      recovered_100016e0((long)acStack_8d0,pcVar9,uVar7);
      bVar2 = 1;
    }
    else {
LAB_1000112c:
      bVar2 = 0;
    }
    bVar2 = bVar3 | bVar1 | bVar2;
    uStack_4b0 = 0;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    uStack_4b8 = uStack_4b8 & 0xffffffff;
    bVar1 = param_2[8];
    if (bVar1 == 2) {
      for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
        uVar7 = (uint)lVar13;
        uVar10 = recovered_10001d04(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar10 != 0) {
          recovered_10001594((long)acStack_8d0,0x400,str_1000283d);
          recovered_100015e0((long)acStack_8d0,0x400,uVar7);
          uVar11 = uStack_4b0;
          recovered_10001fe0((long)acStack_8d0,str_1000284e,uStack_4b0);
          recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
          recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_4b8 + 4);
          recovered_100016e0((long)acStack_8d0,str_1000285a,(uint)auStack_b0[0]);
          pcVar9 = str_10002866;
          uVar7 = PF_PART4(uStack_4b8, 4);
LAB_10001208:
          recovered_100016e0((long)acStack_8d0,pcVar9,uVar7);
          break;
        }
        uVar12 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
        if (((uVar12 & 1) != 0) &&
           (uVar10 = recovered_10002094(param_1,(ulong)(uVar12 & 0xfffc),2,(long)auStack_b0),
           (int)uVar10 != 0)) {
          recovered_10001594((long)acStack_8d0,0x400,str_10002872);
          recovered_100015e0((long)acStack_8d0,0x400,uVar7);
          recovered_100016e0((long)acStack_8d0,str_10002881,uVar12 & 0xfffffffc);
          pcVar9 = str_1000288b;
          uVar7 = (uint)auStack_b0[0];
          goto LAB_10001208;
        }
      }
      if (lVar13 != 6) {
        bVar2 = 1;
      }
      bVar1 = param_2[8];
    }
    uStack_4b0 = 0;
    bVar5 = false;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    if (bVar1 == 3) {
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar10 = recovered_10001d04(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar10 != 0) {
          recovered_10001594((long)acStack_8d0,0x400,str_10002899);
          recovered_100015e0((long)acStack_8d0,0x400,uVar7);
          uVar11 = uStack_4b0;
          recovered_10001fe0((long)acStack_8d0,str_100028aa,uStack_4b0);
          uVar10 = recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
          if ((int)uVar10 != 0) {
            recovered_100016e0((long)acStack_8d0,str_100028b6,(uint)auStack_b0[0]);
          }
          break;
        }
      }
      bVar5 = uVar7 != 6;
    }
    bVar5 = (bool)(bVar2 | bVar4 | bVar5);
    if (!bVar5) {
      uStack_4b0 = 0;
      auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar10 = recovered_10001d04(param_1,(long)param_2,uVar7,0x1000,&uStack_4b0);
        if ((int)uVar10 != 0) {
          recovered_10001594((long)acStack_8d0,0x400,str_100028c2);
          recovered_100015e0((long)acStack_8d0,0x400,uVar7);
          uVar11 = uStack_4b0;
          recovered_10001fe0((long)acStack_8d0,&DAT_100028cc,uStack_4b0);
          uVar10 = recovered_10001e80(param_1,uVar11,0,(long)auStack_b0);
          if ((int)uVar10 != 0) {
            recovered_100016e0((long)acStack_8d0,str_100028d1,(uint)auStack_b0[0]);
          }
          break;
        }
      }
      bVar5 = uVar7 != 6;
    }
    goto LAB_100012f8;
  }
  uVar7 = recovered_10001c58((long)param_2);
  if (uVar7 == 0xffffffff) {
LAB_10000be0:
    bVar1 = 0;
  }
  else {
    recovered_10001548((long)acStack_8d0,str_1000256b,uVar7);
    uStack_4b8 = uStack_4b8 & 0xffffffff;
    for (lVar13 = 0; lVar13 != 0x70; lVar13 = lVar13 + 1) {
      *(undefined1 *)((long)auStack_448 + lVar13 + -0x68) = 0;
    }
    if (((param_2[0x12] >> 4 & 1) == 0) ||
       (uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x34
                                    ,1,(long)&uStack_4b8 + 4), (int)uVar10 == 0)) {
LAB_10000bb0:
      if (uStack_47c != 0) {
        recovered_10001548((long)acStack_8d0,str_10002590,uStack_47c);
      }
      if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
        for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
          uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
          auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
          if ((*(uint *)(param_2 + lVar13 * 4 + 0x14) & 1) != 0) {
            uVar12 = *(uint *)(param_2 + lVar13 * 4 + 0x14) & 0xfffffffc;
            uVar7 = uVar12 + 0x12;
            uVar10 = recovered_10002094(param_1,(ulong)(uVar7 & 0xfffe),1,(long)&uStack_4b0);
            if ((int)uVar10 != 0) {
              recovered_10001f88((long)acStack_8d0,str_1000259b,str_1000271d);
              recovered_10001594((long)acStack_8d0,0x400,str_10002727);
              recovered_100015e0((long)acStack_8d0,0x400,(uint)lVar13);
              recovered_100016e0((long)acStack_8d0,str_1000273b,uVar12);
              recovered_100016e0((long)acStack_8d0,str_1000274a,(uint)uStack_4b0);
              recovered_100020d4(param_1,(ulong)(uVar7 & 0xffff));
              recovered_100020d4(param_1,(ulong)(uVar7 & 0xffff));
              uVar10 = recovered_10002094(param_1,(ulong)(uVar7 & 0xffff),1,(long)auStack_b0);
              if ((int)uVar10 != 0) {
                recovered_100016e0((long)acStack_8d0,str_1000275d,(uint)auStack_b0[0]);
              }
              goto LAB_10001114;
            }
          }
        }
      }
      recovered_10001594((long)acStack_8d0,0x400,str_10002574);
      goto LAB_10000be0;
    }
    uVar7 = 0;
    uVar12 = PF_PART4(uStack_4b8, 4);
    while ((uVar7 < 0x20 && (uVar12 - 0x40 < 0xb0))) {
      uStack_4b8 = uStack_4b8 & 0xffffffff00000000;
      uStack_4c0 = 0;
      uStack_4c8 = 0;
      uStack_4cc = 0;
      uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                  (ulong)(uVar12 & 0xffff),1,(long)&uStack_4b8);
      if ((int)uVar10 == 0) break;
      uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                  (ulong)(PF_PART2(uStack_4b8, 4) + 1 & 0xffff),1,(long)&uStack_4c0 + 4);
      if ((int)uVar10 == 0) break;
      if ((uint)uStack_4b8 == 9) {
        uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                    (ulong)(PF_PART2(uStack_4b8, 4) + 3 & 0xffff),1,(long)&uStack_4c0);
        if ((int)uVar10 != 0) {
          uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      (ulong)(PF_PART2(uStack_4b8, 4) + 4 & 0xffff),1,(long)&uStack_4c8 + 4
                                     );
          if ((int)uVar10 != 0) {
            uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                        (ulong)(PF_PART2(uStack_4b8, 4) + 8 & 0xffff),4,(long)&uStack_4c8);
            if ((int)uVar10 != 0) {
              uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],(ulong)(PF_PART2(uStack_4b8, 4) + 0xc & 0xffff)
                                          ,4,(long)&uStack_4cc);
              if ((int)uVar10 != 0) {
                auStack_b0[0] = 0;
                uStack_47c = uStack_47c + 1;
                if ((int)uStack_4c0 == 1) {
                  uVar10 = recovered_10001ca0(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                              (uint)uStack_4c8,uStack_4cc,auStack_b0);
                  if ((int)uVar10 != 0) {
                    uStack_4b0 = auStack_b0[0];
                    uStack_490 = PF_PART4(uStack_4c8, 4);
                    goto LAB_10000950;
                  }
                }
                iVar6 = (int)uStack_4c0;
                if ((int)uStack_4c0 == 2) {
                  uVar10 = recovered_10001ca0(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                              (uint)uStack_4c8,uStack_4cc,auStack_b0);
                  if ((int)uVar10 != 0) {
                    uStack_4d0 = 0;
                    uStack_4a8 = auStack_b0[0];
                    uStack_48c = PF_PART4(uStack_4c8, 4);
                    uVar10 = recovered_100018f4(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                (ulong)param_2[2],
                                                (ulong)(PF_PART2(uStack_4b8, 4) + 0x10 & 0xffff),4,
                                                (long)&uStack_4d0);
                    if ((int)uVar10 != 0) {
                      uStack_480 = uStack_4d0;
                    }
                    goto LAB_10000950;
                  }
                  iVar6 = (int)uStack_4c0;
                }
                if (iVar6 == 3) {
                  uVar10 = recovered_10001ca0(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                              (uint)uStack_4c8,uStack_4cc,auStack_b0);
                  if ((int)uVar10 != 0) {
                    uStack_4a0 = auStack_b0[0];
                    uStack_488 = PF_PART4(uStack_4c8, 4);
                    goto LAB_10000950;
                  }
                  iVar6 = (int)uStack_4c0;
                }
                if (iVar6 == 4) {
                  uVar10 = recovered_10001ca0(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                              (uint)uStack_4c8,uStack_4cc,auStack_b0);
                  if ((int)uVar10 != 0) {
                    uStack_498 = auStack_b0[0];
                    uStack_484 = PF_PART4(uStack_4c8, 4);
                  }
                }
              }
            }
          }
        }
      }
LAB_10000950:
      if ((PF_PART4(uStack_4c0, 4) == 0) || (PF_PART4(uStack_4c0, 4) == PF_PART4(uStack_4b8, 4))) break;
      uStack_4b8 = CONCAT44(PF_PART4(uStack_4c0, 4),(uint)uStack_4b8);
      uVar7 = uVar7 + 1;
      uVar12 = PF_PART4(uStack_4c0, 4);
    }
    if (uStack_4b0 == 0) goto LAB_10000bb0;
    auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
    recovered_10001e3c(param_1,uStack_4b0,0x14,(long)&uStack_468);
    recovered_10001e54(param_1,uStack_4b0,0);
    recovered_10001e6c(param_1,uStack_4b0,0,0);
    recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_478);
    recovered_10001e6c(param_1,uStack_4b0,0,1);
    recovered_10001e80(param_1,uStack_4b0,4,(long)&uStack_474);
    uStack_46c = uStack_474 & 1;
    uStack_470 = 0;
    recovered_10001e6c(param_1,uStack_4b0,8,0);
    recovered_10001e6c(param_1,uStack_4b0,0xc,(ulong)uStack_470);
    recovered_10001e6c(param_1,uStack_4b0,8,1);
    recovered_10001e6c(param_1,uStack_4b0,0xc,(ulong)uStack_46c);
    if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x7b < (uint)param_1[2])) &&
       (param_1[0x1e] != 0)) {
      (*(code *)(ulong)(uint)param_1[0x1e])();
    }
    recovered_10001e54(param_1,uStack_4b0,1);
    recovered_10001e54(param_1,uStack_4b0,3);
    recovered_10001e54(param_1,uStack_4b0,0xb);
    recovered_10001e3c(param_1,uStack_4b0,0x14,(long)&uStack_464);
    recovered_10001e98(param_1,uStack_4b0,0x12,(long)&uStack_460);
    recovered_10001e3c(param_1,uStack_4b0,0x15,(long)auStack_448);
    if (uStack_4b0 == 0) {
      uVar11 = 0;
    }
    else {
      recovered_10001f1c(param_1,uStack_4b0 + 0x16,2,0);
      uVar11 = uStack_4b0;
    }
    recovered_10001e98(param_1,uVar11,0x18,(long)&uStack_45c);
    recovered_10001e98(param_1,uStack_4b0,0x1c,(long)&uStack_458);
    uVar10 = recovered_10001e98(param_1,uStack_4b0,0x1e,(long)auStack_b0);
    if ((int)uVar10 != 0) {
      uStack_454 = (uint)auStack_b0[0];
      if (uStack_4a8 != 0) {
        uStack_450 = uStack_4a8 + (ulong)uStack_480 * (auStack_b0[0] & 0xffffffff);
      }
    }
    recovered_10001f88((long)acStack_8d0,str_1000259b,str_100025ab);
    recovered_10001548((long)acStack_8d0,str_10002590,uStack_47c);
    recovered_10001548((long)acStack_8d0,str_100025b2,uStack_490);
    recovered_10001fe0((long)acStack_8d0,str_100025c2,uStack_4b0);
    recovered_100016e0((long)acStack_8d0,str_100025cf,uStack_478);
    recovered_100016e0((long)acStack_8d0,str_100025e5,uStack_474);
    recovered_100016e0((long)acStack_8d0,str_100025fb,uStack_470);
    recovered_100016e0((long)acStack_8d0,str_10002611,uStack_46c);
    recovered_100016e0((long)acStack_8d0,str_10002627,uStack_468);
    recovered_100016e0((long)acStack_8d0,str_10002640,uStack_464);
    recovered_10001548((long)acStack_8d0,str_10002658,uStack_460);
    recovered_10001548((long)acStack_8d0,str_10002665,uStack_45c);
    recovered_10001548((long)acStack_8d0,str_10002676,uStack_458);
    uVar11 = uStack_450;
    if (uStack_450 != 0) {
      recovered_10001548((long)acStack_8d0,str_1000268a,uStack_48c);
      recovered_100016e0((long)acStack_8d0,str_1000269a,uStack_480);
      recovered_10001fe0((long)acStack_8d0,str_100026b1,uVar11);
    }
    if (uStack_4a0 != 0) {
      recovered_10001fe0((long)acStack_8d0,str_100026c4,uStack_4a0);
    }
    if (uStack_498 != 0) {
      recovered_10001fe0((long)acStack_8d0,str_100026ce,uStack_498);
    }
    recovered_10001548((long)acStack_8d0,str_100026e1,auStack_448[0]);
    pcVar9 = str_10002710;
    if ((uStack_464 & 8) != 0) {
      pcVar9 = str_10002704;
    }
    recovered_10001f88((long)acStack_8d0,str_100026f8,pcVar9);
LAB_10001114:
    bVar1 = 1;
  }
  bVar5 = (bool)(bVar1 | bVar4);
LAB_100012f8:
  pcVar9 = str_100024de;
  if (bVar5) {
    pcVar9 = str_100024ce;
  }
  recovered_10001594((long)acStack_8d0,0x400,pcVar9);
  pcVar9 = recovered_100019b0((long)param_2);
  recovered_10000634((undefined1 *)auStack_b0,0x60,str_10002483);
  recovered_10001594((long)auStack_b0,0x60,&DAT_100028da);
  recovered_10001730((long)auStack_b0,0x60,(uint)*param_2,2);
  recovered_10001594((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x554U));
  recovered_10001730((long)auStack_b0,0x60,(uint)param_2[1],2);
  recovered_10001594((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x556U));
  recovered_100015e0((long)auStack_b0,0x60,(uint)param_2[2]);
  recovered_10000634((undefined1 *)&uStack_4b0,0x400,&DAT_100028e0);
  recovered_10001730((long)&uStack_4b0,0x400,(uint)*param_2,2);
  recovered_10001594((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x554U));
  recovered_10001730((long)&uStack_4b0,0x400,(uint)param_2[1],2);
  recovered_10001594((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x556U));
  recovered_100015e0((long)&uStack_4b0,0x400,(uint)param_2[2]);
  recovered_10001594((long)&uStack_4b0,0x400,str_100028e5);
  recovered_10001730((long)&uStack_4b0,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001594((long)&uStack_4b0,0x400,str_100028ee);
  recovered_10001730((long)&uStack_4b0,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001594((long)&uStack_4b0,0x400,str_100028f7);
  recovered_10001730((long)&uStack_4b0,0x400,(uint)param_2[8],2);
  recovered_10001594((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x556U));
  recovered_10001730((long)&uStack_4b0,0x400,(uint)param_2[9],2);
  recovered_10001594((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x556U));
  recovered_10001730((long)&uStack_4b0,0x400,(uint)param_2[10],2);
  recovered_10001594((long)&uStack_4b0,0x400,str_100028ff);
  recovered_10001730((long)&uStack_4b0,0x400,(uint)param_2[0xb],2);
  recovered_100016e0((long)&uStack_4b0,str_1000290a,*(uint *)(param_2 + 0x10));
  for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
    uVar7 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
    if (uVar7 != 0) {
      recovered_10001594((long)&uStack_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x58aU));
      recovered_100015e0((long)&uStack_4b0,0x400,(uint)lVar13);
      recovered_10001594((long)&uStack_4b0,0x400,&DAT_10002461);
      recovered_10001730((long)&uStack_4b0,0x400,uVar7,8);
    }
  }
  if (acStack_8d0[0] != '\0') {
    recovered_10001594((long)&uStack_4b0,0x400,&DAT_1000245f);
    recovered_10001594((long)&uStack_4b0,0x400,acStack_8d0);
  }
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    (*(code *)(ulong)(uint)param_1[3])(auStack_b0,pcVar9,&uStack_4b0);
  }
  return;
}

#undef DAT_1000245f
#undef DAT_10002461
#undef DAT_100028cc
#undef DAT_100028da
#undef DAT_100028e0
#undef str_10002464
#undef str_10002483
#undef str_100024ce
#undef str_100024de
#undef str_100024f2
#undef str_1000250a
#undef str_10002522
#undef str_1000253b
#undef str_1000254c
#undef str_1000255c
#undef str_1000256b
#undef str_10002574
#undef str_10002590
#undef str_1000259b
#undef str_100025ab
#undef str_100025b2
#undef str_100025c2
#undef str_100025cf
#undef str_100025e5
#undef str_100025fb
#undef str_10002611
#undef str_10002627
#undef str_10002640
#undef str_10002658
#undef str_10002665
#undef str_10002676
#undef str_1000268a
#undef str_1000269a
#undef str_100026b1
#undef str_100026c4
#undef str_100026ce
#undef str_100026e1
#undef str_100026f8
#undef str_10002704
#undef str_10002710
#undef str_1000271d
#undef str_10002727
#undef str_1000273b
#undef str_1000274a
#undef str_1000275d
#undef str_1000276f
#undef str_10002785
#undef str_1000278e
#undef str_10002796
#undef str_1000279e
#undef str_100027a8
#undef str_100027b4
#undef str_100027c9
#undef str_100027d1
#undef str_100027d9
#undef str_100027e1
#undef str_100027ed
#undef str_100027f5
#undef str_100027fd
#undef str_10002805
#undef str_1000280d
#undef str_10002818
#undef str_1000281e
#undef str_10002828
#undef str_1000283d
#undef str_1000284e
#undef str_1000285a
#undef str_10002866
#undef str_10002872
#undef str_10002881
#undef str_1000288b
#undef str_10002899
#undef str_100028aa
#undef str_100028b6
#undef str_100028c2
#undef str_100028d1
#undef str_100028e5
#undef str_100028ee
#undef str_100028f7
#undef str_100028ff
#undef str_1000290a
#undef uStack_48c
#undef uStack_488
#undef uStack_484
#undef uStack_480
#undef uStack_47c
#undef uStack_478
#undef uStack_474
#undef uStack_470
#undef uStack_46c
#undef uStack_468
#undef uStack_464
#undef uStack_460
#undef uStack_45c
#undef uStack_458
#undef uStack_454
#undef uStack_450
#undef auStack_448
#undef auStack_b0
#undef acStack_8d0
#undef uStack_4d0
#undef uStack_4cc
#undef uStack_4c8
#undef uStack_4c0
#undef uStack_4b8
#undef uStack_4b0
#undef uStack_4a8
#undef uStack_4a0
#undef uStack_498
#undef uStack_490

#undef DAT_1000245f
#define DAT_1000245f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002461
#define DAT_10002461 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001548
 */

void recovered_10001548(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001594(param_1,0x400,&DAT_1000245f);
  recovered_10001594(param_1,0x400,param_2);
  recovered_10001594(param_1,0x400,&DAT_10002461);
  if (param_3 == 0) {
    lVar1 = recovered_10001684(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x400)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    abStack_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_100016a0(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_1000245f
#undef DAT_10002461
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001594
 */

void recovered_10001594(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001684(param_1);
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


#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015e0
 */

void recovered_100015e0(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001684(param_1);
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
    recovered_100016a0(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001684
 */

long recovered_10001684(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100016a0
 */

void recovered_100016a0(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001684(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_1000245f
#define DAT_1000245f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002461
#define DAT_10002461 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e0
 */

void recovered_100016e0(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001594(param_1,0x400,&DAT_1000245f);
  recovered_10001594(param_1,0x400,param_2);
  recovered_10001594(param_1,0x400,&DAT_10002461);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_100016a0(param_1,0x400,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_1000245f
#undef DAT_10002461

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001730
 */

void recovered_10001730(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    recovered_100016a0(param_1,param_2,bVar2);
  }
  return;
}


#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017a8
 */

undefined8
recovered_100017a8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_100018f4(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != -1)) &&
         (uVar2 = recovered_100018f4(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_100018f4(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_100018f4(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_100018f4(param_1,param_2,param_3,param_4,
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
 * Address: 0x100018f4
 */

undefined8
recovered_100018f4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10002497
#define DAT_10002497 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef DAT_1000249c
#define DAT_1000249c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_100024a1
#define DAT_100024a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_100024a6
#define DAT_100024a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_100024ab
#define str_100024ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_100024b6
#define str_100024b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
#undef str_100024bf
#define str_100024bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001944
 */

char * recovered_10001944(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_100024bf;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_1000249c;
  }
  pcVar2 = str_100024ab;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_100024a6;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_100024a1;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_100024b6;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002497;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10002497
#undef DAT_1000249c
#undef DAT_100024a1
#undef DAT_100024a6
#undef str_100024ab
#undef str_100024b6
#undef str_100024bf

#undef DAT_10002497
#define DAT_10002497 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef DAT_1000249c
#define DAT_1000249c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_100024a1
#define DAT_100024a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x119U)))
#undef DAT_100024a6
#define DAT_100024a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_100024ab
#define str_100024ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_100024b6
#define str_100024b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12eU)))
#undef str_100024bf
#define str_100024bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x137U)))
#undef str_10002917
#define str_10002917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58fU)))
#undef str_10002922
#define str_10002922 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59aU)))
#undef str_10002931
#define str_10002931 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a9U)))
#undef str_10002942
#define str_10002942 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5baU)))
#undef str_10002955
#define str_10002955 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cdU)))
#undef str_10002968
#define str_10002968 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_10002978
#define str_10002978 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f0U)))
#undef str_10002987
#define str_10002987 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_10002996
#define str_10002996 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60eU)))
#undef str_100029a7
#define str_100029a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61fU)))
#undef str_100029b2
#define str_100029b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62aU)))
#undef str_100029be
#define str_100029be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x636U)))
#undef str_100029c8
#define str_100029c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x640U)))
#undef str_100029d1
#define str_100029d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x649U)))
#undef str_100029dc
#define str_100029dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_100029e5
#define str_100029e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_100029ed
#define str_100029ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x665U)))
#undef str_100029f6
#define str_100029f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66eU)))
#undef str_100029fd
#define str_100029fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x675U)))
#undef str_10002a10
#define str_10002a10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x688U)))
#undef str_10002a23
#define str_10002a23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
#undef str_10002a36
#define str_10002a36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

char * recovered_100019b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001bc4_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_100029d1;
    }
LAB_10001b98:
    pcVar4 = str_100029fd;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10002a23;
      break;
    case 2:
      pcVar4 = str_10002a10;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10002a36;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001bf8:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_100024bf;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_1000249c;
        }
        pcVar1 = str_100024ab;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_100024a6;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_100024a1;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_100024b6;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10002497;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001bc4_caseD_5:
      pcVar4 = str_10002917;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_100029c8;
      }
      goto LAB_10001b98;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001b0c:
        return str_100029f6;
      }
      goto LAB_10001b98;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001b0c;
      goto LAB_10001b98;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_100029ed;
      }
      goto LAB_10001b98;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_100029dc;
      }
      goto LAB_10001b98;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_100029b2;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001bf8;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_100029be;
      }
      goto LAB_10001b98;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_100029e5;
      }
      goto LAB_10001b98;
    }
    if (sVar3 != 0x1af4) goto LAB_10001b98;
    pcVar4 = str_10002922;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001a54_caseD_1042:
      pcVar4 = str_10002931;
      break;
    case 0x1043:
switchD_10001a54_caseD_1043:
      pcVar4 = str_10002955;
      break;
    case 0x1044:
switchD_10001a54_caseD_1044:
      pcVar4 = str_10002978;
      break;
    case 0x1045:
switchD_10001a54_caseD_1045:
      pcVar4 = str_10002942;
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
switchD_10001a54_caseD_1046:
      pcVar4 = str_100029a7;
      break;
    case 0x1048:
switchD_10001a54_caseD_1048:
      pcVar4 = str_10002968;
      break;
    case 0x1050:
      pcVar4 = str_10002987;
      break;
    case 0x1052:
      pcVar4 = str_10002996;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001a54_caseD_1042;
      case 0x1002:
        goto switchD_10001a54_caseD_1045;
      case 0x1003:
        goto switchD_10001a54_caseD_1043;
      case 0x1004:
        goto switchD_10001a54_caseD_1048;
      case 0x1005:
        goto switchD_10001a54_caseD_1044;
      default:
        goto switchD_10001a54_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10002497
#undef DAT_1000249c
#undef DAT_100024a1
#undef DAT_100024a6
#undef str_100024ab
#undef str_100024b6
#undef str_100024bf
#undef str_10002917
#undef str_10002922
#undef str_10002931
#undef str_10002942
#undef str_10002955
#undef str_10002968
#undef str_10002978
#undef str_10002987
#undef str_10002996
#undef str_100029a7
#undef str_100029b2
#undef str_100029be
#undef str_100029c8
#undef str_100029d1
#undef str_100029dc
#undef str_100029e5
#undef str_100029ed
#undef str_100029f6
#undef str_100029fd
#undef str_10002a10
#undef str_10002a23
#undef str_10002a36

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c58
 */

int recovered_10001c58(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ushort uVar3;

  if ((param_1 == 0) || (*(short *)(param_1 + 4) != 0x1af4)) {
    return -1;
  }
  uVar3 = *(ushort *)(param_1 + 6);
  uVar2 = uVar3 & 0xffc0;
  iVar1 = uVar3 - 0x1040;
  if (uVar2 != 0x1040) {
    iVar1 = -1;
  }
  if (uVar2 == 0x1000) {
    iVar1 = uVar3 - 0x1000;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca0
 */

undefined8
recovered_10001ca0(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_10001d04(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d04
 */

undefined8
recovered_10001d04(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;

  if (param_5 == (ulong *)0x0) {
    return 0;
  }
  if ((param_3 == 0) || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)) {
    uVar1 = *(uint *)(param_2 + 0x14 + (ulong)param_3 * 4);
    if (uVar1 == 0) {
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if ((uVar1 & 6) == 4) {
      if (4 < param_3) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x14 + (ulong)(param_3 + 1) * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar1 = uVar1 & 0xfffffff0;
    if ((int)param_4 == 0) {
      return 0;
    }
    if (uVar1 == 0 && iVar2 == 0) {
      return 0;
    }
    *param_5 = 0;
    local_24 = 0;
    if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
      if ((0xbb < (uint)param_1[2]) && (param_1[0x2e] != 0)) {
        uVar3 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar1,iVar2,param_4,param_5);
        return uVar3;
      }
      if (iVar2 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
      if (param_1[0x19] == 0) {
        return 0;
      }
      iVar2 = (*(code *)(ulong)(uint)param_1[0x19])(uVar1,0,param_4,&local_24);
      if (iVar2 != 0) {
        *param_5 = (ulong)local_24;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e3c
 */

int * recovered_10001e3c(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return piVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e54
 */

int * recovered_10001e54(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + 0x14;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e6c
 */

int * recovered_10001e6c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;

  if (param_2 == 0) {
    return param_1;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

undefined8 recovered_10001e80(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e98
 */

undefined8 recovered_10001e98(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb0
 */

undefined8 recovered_10001eb0(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f1c
 */

undefined8 recovered_10001f1c(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_1000245f
#define DAT_1000245f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002461
#define DAT_10002461 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
#undef DAT_10002463
#define DAT_10002463 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f88
 */

void recovered_10001f88(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001594(param_1,0x400,&DAT_1000245f);
  recovered_10001594(param_1,0x400,param_2);
  recovered_10001594(param_1,0x400,&DAT_10002461);
  pcVar3 = &DAT_10002463;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001684(param_1);
  if ((param_1 != 0) && (pcVar3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0x3ff < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_1000245f
#undef DAT_10002461
#undef DAT_10002463

#undef DAT_1000245f
#define DAT_1000245f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002461
#define DAT_10002461 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fe0
 */

void recovered_10001fe0(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_10001594(param_1,0x400,&DAT_1000245f);
  recovered_10001594(param_1,0x400,param_2);
  recovered_10001594(param_1,0x400,&DAT_10002461);
  lVar3 = 0x10;
  if (param_3 >> 0x20 == 0) {
    lVar3 = 8;
  }
  uVar4 = lVar3 * 4 + 0xfffffffc;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    uVar2 = param_3 >> (uVar4 & 0x3c);
    uVar1 = (uint)uVar2 & 0xf;
    abStack_32[0] = (byte)uVar2 & 0xf | 0x30;
    if (9 < uVar1) {
      abStack_32[0] = (char)uVar1 + 0x37;
    }
    abStack_32[1] = 0;
    recovered_10001594(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_1000245f
#undef DAT_10002461
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002094
 */

undefined8 recovered_10002094(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000cc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d4
 */

void recovered_100020d4(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
