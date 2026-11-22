/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

undefined8 recovered_10000484(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((DAT_10008000 == 0) || (param_1 == 0)) || (*(uint *)(DAT_10008000 + 0x24) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000049c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)*(uint *)(DAT_10008000 + 0x24))(param_1);
  return uVar1;
}

#undef DAT_10008000

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5bf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004a4
 */

undefined8 recovered_100004a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_10008000 == (int *)0x0) || (*DAT_10008000 != 0x54584b57)) ||
      ((uint)DAT_10008000[2] < 0xac)) || (DAT_10008000[0x2a] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100004d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_10008000[0x2a])();
  return uVar1;
}

#undef DAT_10008000

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef str_10002434
#define str_10002434 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24U)))
#undef str_10002448
#define str_10002448 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_10002467
#define str_10002467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57U)))
#undef str_1000246d
#define str_1000246d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dU)))
#undef str_1000247d
#define str_1000247d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dU)))
#undef str_1000248e
#define str_1000248e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_100024a2
#define str_100024a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92U)))
#undef str_100024c7
#define str_100024c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7U)))
#undef str_100024d6
#define str_100024d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_100024e1
#define str_100024e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#define auStack_49c (*(undefined1 (*)[1024])(frame + 20))
#define abStack_6c (*(byte (*)[44])(frame + 1092))
#define local_9c (*(uint (*)[12])(frame + 1044))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100004e0
 */

/* WARNING: Removing unreachable block (ram,0x10000668) */
/* WARNING: Removing unreachable block (ram,0x1000066c) */
/* WARNING: Removing unreachable block (ram,0x10000674) */
/* WARNING: Removing unreachable block (ram,0x10000690) */
/* WARNING: Removing unreachable block (ram,0x10000698) */

int recovered_100004e0(int *api)

{
  unsigned char frame[1232] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  local_9c[0] = 0;
  if (((api != (int *)0x0) && (*api == 0x54584b57)) && (0xf < (uint)api[2])) {
    DAT_10008000 = api;
    recovered_10000708(auStack_49c,0x60,str_10002434);
    recovered_100016a0((long)auStack_49c,0x60,str_100024c7);
    recovered_100016f4((long)auStack_49c,0x60,api[1]);
    recovered_100016a0((long)auStack_49c,0x60,str_100024d6);
    if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
      (*(code *)(ulong)(uint)api[10])(auStack_49c);
    }
    recovered_10000708(auStack_49c,0x400,str_10002448);
    recovered_10000718((long)auStack_49c,str_10002467,3);
    recovered_1000186c((long)auStack_49c,str_1000246d,str_100024e1);
    recovered_1000186c((long)auStack_49c,str_1000247d,str_100024e1);
    if (api[3] != 0) {
      iVar1 = (*(code *)(ulong)(uint)api[3])(str_100024e1 + 6,str_1000248e,auStack_49c);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_100018d0(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_6c)
            ;
            if ((int)uVar2 != 0) {
              recovered_10000774(api,abStack_6c,(int *)local_9c);
              if(abStack_6c[12]&0x80U){
                unsigned char pf_function_record[44];
                for(unsigned pf_function=1;pf_function<8;pf_function++)
                  if(recovered_100018d0(api,(ulong)(uVar3&0xff),(ulong)(uVar4&0xff),pf_function,pf_function_record))
                    recovered_10000774(api,pf_function_record,(int *)local_9c);
              }
            }
          }
        }
        uVar3 = local_9c[0];
      }
      else {
        uVar3 = 0;
      }
      recovered_10001648((long)auStack_49c,str_100024a2,uVar3);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(str_100024e1 + 6,str_1000248e,auStack_49c);
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_10008000
#undef str_10002434
#undef str_10002448
#undef str_10002467
#undef str_1000246d
#undef str_1000247d
#undef str_1000248e
#undef str_100024a2
#undef str_100024c7
#undef str_100024d6
#undef str_100024e1
#undef auStack_49c
#undef abStack_6c
#undef local_9c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000708
 */

void recovered_10000708(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001798((long)param_1);
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


#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_100024df
#define DAT_100024df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000718
 */

void recovered_10000718(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_100016a0(param_1,0x400,&DAT_100024dd);
  recovered_100016a0(param_1,0x400,param_2);
  recovered_100016a0(param_1,0x400,&DAT_100024df);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_100017b4(param_1,0x400,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_100024dd
#undef DAT_100024df

#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_100024df
#define DAT_100024df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef DAT_10002911
#define DAT_10002911 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501U)))
#undef DAT_10002917
#define DAT_10002917 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
#undef str_100024e8
#define str_100024e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd8U)))
#undef str_10002510
#define str_10002510 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100U)))
#undef str_1000251d
#define str_1000251d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dU)))
#undef str_1000252d
#define str_1000252d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11dU)))
#undef str_10002541
#define str_10002541 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#undef str_10002559
#define str_10002559 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10002571
#define str_10002571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x161U)))
#undef str_1000258a
#define str_1000258a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_1000259b
#define str_1000259b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_100025ab
#define str_100025ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19bU)))
#undef str_100025ba
#define str_100025ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
#undef str_100025c3
#define str_100025c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_100025df
#define str_100025df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cfU)))
#undef str_100025ea
#define str_100025ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_100025fa
#define str_100025fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#undef str_10002601
#define str_10002601 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1U)))
#undef str_10002611
#define str_10002611 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_1000261e
#define str_1000261e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#undef str_10002634
#define str_10002634 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x224U)))
#undef str_1000264a
#define str_1000264a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_10002660
#define str_10002660 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x250U)))
#undef str_10002676
#define str_10002676 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x266U)))
#undef str_1000268f
#define str_1000268f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_100026a7
#define str_100026a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x297U)))
#undef str_100026b4
#define str_100026b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a4U)))
#undef str_100026c5
#define str_100026c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b5U)))
#undef str_100026d9
#define str_100026d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c9U)))
#undef str_100026e9
#define str_100026e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d9U)))
#undef str_10002700
#define str_10002700 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#undef str_10002713
#define str_10002713 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_1000271d
#define str_1000271d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30dU)))
#undef str_10002730
#define str_10002730 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
#undef str_10002747
#define str_10002747 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10002753
#define str_10002753 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
#undef str_1000275f
#define str_1000275f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34fU)))
#undef str_1000276c
#define str_1000276c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35cU)))
#undef str_10002776
#define str_10002776 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x366U)))
#undef str_1000278a
#define str_1000278a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_10002799
#define str_10002799 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x389U)))
#undef str_100027ac
#define str_100027ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39cU)))
#undef str_100027be
#define str_100027be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_100027d4
#define str_100027d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c4U)))
#undef str_100027dd
#define str_100027dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cdU)))
#undef str_100027e5
#define str_100027e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d5U)))
#undef str_100027ed
#define str_100027ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ddU)))
#undef str_100027f7
#define str_100027f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e7U)))
#undef str_10002803
#define str_10002803 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f3U)))
#undef str_10002818
#define str_10002818 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_10002820
#define str_10002820 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x410U)))
#undef str_10002828
#define str_10002828 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_10002830
#define str_10002830 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000283c
#define str_1000283c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42cU)))
#undef str_10002844
#define str_10002844 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x434U)))
#undef str_1000284c
#define str_1000284c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43cU)))
#undef str_10002854
#define str_10002854 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x444U)))
#undef str_1000285c
#define str_1000285c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10002867
#define str_10002867 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x457U)))
#undef str_1000286d
#define str_1000286d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_10002877
#define str_10002877 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x467U)))
#undef str_1000288c
#define str_1000288c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47cU)))
#undef str_1000289d
#define str_1000289d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48dU)))
#undef str_100028a9
#define str_100028a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x499U)))
#undef str_100028b5
#define str_100028b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a5U)))
#undef str_100028c1
#define str_100028c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b1U)))
#undef str_100028d0
#define str_100028d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_100028da
#define str_100028da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4caU)))
#undef str_100028e8
#define str_100028e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d8U)))
#undef str_100028f9
#define str_100028f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e9U)))
#undef str_10002905
#define str_10002905 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f5U)))
#undef str_1000291c
#define str_1000291c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50cU)))
#undef str_10002925
#define str_10002925 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x515U)))
#undef str_1000292e
#define str_1000292e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51eU)))
#undef str_10002936
#define str_10002936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x526U)))
#undef str_10002941
#define str_10002941 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x531U)))
#define local_4b0 (*(undefined8 *)(frame + 1072))
#define acStack_8d0 (*(char (*)[1024])(frame + 16))
#define uStack_4d0 (*(uint *)(frame + 1040))
#define uStack_4cc (*(uint *)(frame + 1044))
#define uStack_4c8 (*(undefined8 *)(frame + 1048))
#define uStack_4c0 (*(undefined8 *)(frame + 1056))
#define uStack_4b8 (*(undefined8 *)(frame + 1064))
#define uStack_4a8 (*(ulong *)(frame + 1080))
#define uStack_4a0 (*(ulong *)(frame + 1088))
#define uStack_498 (*(ulong *)(frame + 1096))
#define uStack_490 (*(uint *)(frame + 1104))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000774
 */

void recovered_10000774(int *param_1,byte *param_2,int *param_3)

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

  if ((((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
      (*(short *)(param_2 + 6) != 0x1052)) && (*(short *)(param_2 + 6) != 0x1052)) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000708(acStack_8d0,0x400,str_100024e8);
  iVar6 = recovered_10001d14((long)param_2);
  local_4b0 = (ulong)PF_PART4(local_4b0, 4) << 0x20;
  if (((param_1 == (int *)0x0) || (param_2 == (byte *)0x0)) ||
     ((*param_1 != 0x54584b57 || (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))))) {
    pcVar9 = str_10002541;
LAB_1000087c:
    recovered_100016a0((long)acStack_8d0,0x400,pcVar9);
    bVar4 = false;
  }
  else {
    uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&local_4b0);
    if ((int)uVar10 == 0) {
      pcVar9 = str_10002559;
      goto LAB_1000087c;
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
    lVar13 = recovered_10001798(((uintptr_t)pf_module_state + 0xfaU));
    if (lVar13 != 0) {
      uVar7 = uVar7 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar7 = uVar7 | 2;
      }
    }
    auStack_b0[0] = CONCAT44(PF_PART4(auStack_b0[0], 4),(uint)local_4b0 | uVar7);
    if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) ||
       (iVar8 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
       iVar8 == 0)) {
      pcVar9 = str_10002571;
      goto LAB_1000087c;
    }
    recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_b0);
    recovered_10000718((long)acStack_8d0,str_1000258a,(uint)local_4b0);
    uVar12 = (uint)auStack_b0[0];
    recovered_10000718((long)acStack_8d0,str_1000259b,(uint)auStack_b0[0]);
    recovered_10000718((long)acStack_8d0,str_100025ab,uVar7);
    bVar4 = (uVar7 & (uVar12 ^ 0xffffffff)) == 0;
  }
  if (iVar6 != -1) {
    uVar7 = recovered_10001d14((long)param_2);
    if (uVar7 != 0xffffffff) {
      recovered_10001648((long)acStack_8d0,str_100025ba,uVar7);
      uStack_4b8 = uStack_4b8 & 0xffffffff;
      for (lVar13 = 0; lVar13 != 0x70; lVar13 = lVar13 + 1) {
        *(undefined1 *)((long)auStack_448 + lVar13 + -0x68) = 0;
      }
      if (((param_2 != (byte *)0x0) && ((param_2[0x12] >> 4 & 1) != 0)) &&
         (uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      0x34,1,(long)&uStack_4b8 + 4), (int)uVar10 != 0)) {
        uVar7 = 0;
        uVar12 = PF_PART4(uStack_4b8, 4);
        while ((uVar7 < 0x20 && (uVar12 - 0x40 < 0xb0))) {
          uStack_4b8 = uStack_4b8 & 0xffffffff00000000;
          uStack_4c0 = 0;
          uStack_4c8 = 0;
          uStack_4cc = 0;
          uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      (ulong)(uVar12 & 0xffff),1,(long)&uStack_4b8);
          if ((int)uVar10 == 0) break;
          uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                      (ulong)(PF_PART2(uStack_4b8, 4) + 1 & 0xffff),1,(long)&uStack_4c0 + 4
                                     );
          if ((int)uVar10 == 0) break;
          if ((uint)uStack_4b8 == 9) {
            uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                        (ulong)(PF_PART2(uStack_4b8, 4) + 3 & 0xffff),1,(long)&uStack_4c0);
            if ((int)uVar10 != 0) {
              uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],(ulong)(PF_PART2(uStack_4b8, 4) + 4 & 0xffff),1
                                          ,(long)&uStack_4c8 + 4);
              if ((int)uVar10 != 0) {
                uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],
                                            (ulong)param_2[2],(ulong)(PF_PART2(uStack_4b8, 4) + 8 & 0xffff)
                                            ,4,(long)&uStack_4c8);
                if ((int)uVar10 != 0) {
                  uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],
                                              (ulong)param_2[2],
                                              (ulong)(PF_PART2(uStack_4b8, 4) + 0xc & 0xffff),4,
                                              (long)&uStack_4cc);
                  if ((int)uVar10 != 0) {
                    auStack_b0[0] = 0;
                    uStack_47c = uStack_47c + 1;
                    if ((int)uStack_4c0 == 1) {
                      uVar10 = recovered_10001d5c(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                                  (uint)uStack_4c8,uStack_4cc,auStack_b0);
                      if ((int)uVar10 != 0) {
                        local_4b0 = auStack_b0[0];
                        uStack_490 = PF_PART4(uStack_4c8, 4);
                        goto LAB_10000a94;
                      }
                    }
                    iVar6 = (int)uStack_4c0;
                    if ((int)uStack_4c0 == 2) {
                      uVar10 = recovered_10001d5c(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                                  (uint)uStack_4c8,uStack_4cc,auStack_b0);
                      if ((int)uVar10 != 0) {
                        uStack_4d0 = 0;
                        uStack_4a8 = auStack_b0[0];
                        uStack_48c = PF_PART4(uStack_4c8, 4);
                        uVar10 = recovered_10001a1c(param_1,(ulong)*param_2,(ulong)param_2[1],
                                                    (ulong)param_2[2],
                                                    (ulong)(PF_PART2(uStack_4b8, 4) + 0x10 & 0xffff),4,
                                                    (long)&uStack_4d0);
                        if ((int)uVar10 != 0) {
                          uStack_480 = uStack_4d0;
                        }
                        goto LAB_10000a94;
                      }
                      iVar6 = (int)uStack_4c0;
                    }
                    if (iVar6 == 3) {
                      uVar10 = recovered_10001d5c(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
                                                  (uint)uStack_4c8,uStack_4cc,auStack_b0);
                      if ((int)uVar10 != 0) {
                        uStack_4a0 = auStack_b0[0];
                        uStack_488 = PF_PART4(uStack_4c8, 4);
                        goto LAB_10000a94;
                      }
                      iVar6 = (int)uStack_4c0;
                    }
                    if (iVar6 == 4) {
                      uVar10 = recovered_10001d5c(param_1,(long)param_2,PF_PART4(uStack_4c8, 4),
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
LAB_10000a94:
          if ((PF_PART4(uStack_4c0, 4) == 0) || (PF_PART4(uStack_4c0, 4) == PF_PART4(uStack_4b8, 4))) break;
          uStack_4b8 = CONCAT44(PF_PART4(uStack_4c0, 4),(uint)uStack_4b8);
          uVar7 = uVar7 + 1;
          uVar12 = PF_PART4(uStack_4c0, 4);
        }
        if (local_4b0 != 0) {
          auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
          recovered_10001ef8(param_1,local_4b0,0x14,(long)&uStack_468);
          recovered_10001f10(param_1,local_4b0,0);
          recovered_10001f28(param_1,local_4b0,0,0);
          recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_478);
          recovered_10001f28(param_1,local_4b0,0,1);
          recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_474);
          uStack_46c = uStack_474 & 1;
          uStack_470 = 0;
          recovered_10001f28(param_1,local_4b0,8,0);
          recovered_10001f28(param_1,local_4b0,0xc,(ulong)uStack_470);
          recovered_10001f28(param_1,local_4b0,8,1);
          recovered_10001f28(param_1,local_4b0,0xc,(ulong)uStack_46c);
          if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x7b < (uint)param_1[2]))
             && (param_1[0x1e] != 0)) {
            (*(code *)(ulong)(uint)param_1[0x1e])();
          }
          recovered_10001f10(param_1,local_4b0,1);
          recovered_10001f10(param_1,local_4b0,3);
          recovered_10001f10(param_1,local_4b0,0xb);
          recovered_10001ef8(param_1,local_4b0,0x14,(long)&uStack_464);
          recovered_10001f54(param_1,local_4b0,0x12,(long)&uStack_460);
          recovered_10001ef8(param_1,local_4b0,0x15,(long)auStack_448);
          if (local_4b0 == 0) {
            uVar11 = 0;
          }
          else {
            recovered_10001fd8(param_1,local_4b0 + 0x16,2,0);
            uVar11 = local_4b0;
          }
          recovered_10001f54(param_1,uVar11,0x18,(long)&uStack_45c);
          recovered_10001f54(param_1,local_4b0,0x1c,(long)&uStack_458);
          uVar10 = recovered_10001f54(param_1,local_4b0,0x1e,(long)auStack_b0);
          if ((int)uVar10 != 0) {
            uStack_454 = (uint)auStack_b0[0];
            if (uStack_4a8 != 0) {
              uStack_450 = uStack_4a8 + (ulong)uStack_480 * (auStack_b0[0] & 0xffffffff);
            }
          }
          recovered_1000186c((long)acStack_8d0,str_100025ea,str_100025fa);
          recovered_10001648((long)acStack_8d0,str_100025df,uStack_47c);
          recovered_10001648((long)acStack_8d0,str_10002601,uStack_490);
          recovered_10002044((long)acStack_8d0,str_10002611,local_4b0);
          recovered_10000718((long)acStack_8d0,str_1000261e,uStack_478);
          recovered_10000718((long)acStack_8d0,str_10002634,uStack_474);
          recovered_10000718((long)acStack_8d0,str_1000264a,uStack_470);
          recovered_10000718((long)acStack_8d0,str_10002660,uStack_46c);
          recovered_10000718((long)acStack_8d0,str_10002676,uStack_468);
          recovered_10000718((long)acStack_8d0,str_1000268f,uStack_464);
          recovered_10001648((long)acStack_8d0,str_100026a7,uStack_460);
          recovered_10001648((long)acStack_8d0,str_100026b4,uStack_45c);
          recovered_10001648((long)acStack_8d0,str_100026c5,uStack_458);
          uVar11 = uStack_450;
          if (uStack_450 != 0) {
            recovered_10001648((long)acStack_8d0,str_100026d9,uStack_48c);
            recovered_10000718((long)acStack_8d0,str_100026e9,uStack_480);
            recovered_10002044((long)acStack_8d0,str_10002700,uVar11);
          }
          if (uStack_4a0 != 0) {
            recovered_10002044((long)acStack_8d0,str_10002713,uStack_4a0);
          }
          if (uStack_498 != 0) {
            recovered_10002044((long)acStack_8d0,str_1000271d,uStack_498);
          }
          recovered_10001648((long)acStack_8d0,str_10002730,auStack_448[0]);
          pcVar9 = str_1000275f;
          if ((uStack_464 & 8) != 0) {
            pcVar9 = str_10002753;
          }
          recovered_1000186c((long)acStack_8d0,str_10002747,pcVar9);
LAB_1000160c:
          bVar2 = 1;
          goto LAB_10001228;
        }
      }
      if (uStack_47c != 0) {
        recovered_10001648((long)acStack_8d0,str_100025df,uStack_47c);
      }
      if ((param_2 != (byte *)0x0) && (*(ushort *)(param_2 + 6) >> 6 < 0x41)) {
        for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
          local_4b0 = local_4b0 & 0xffffffff00000000;
          auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
          if ((*(uint *)(param_2 + lVar13 * 4 + 0x14) & 1) != 0) {
            uVar12 = *(uint *)(param_2 + lVar13 * 4 + 0x14) & 0xfffffffc;
            uVar7 = uVar12 + 0x12;
            uVar10 = recovered_100020f8(param_1,(ulong)(uVar7 & 0xfffe),1,(long)&local_4b0);
            if ((int)uVar10 != 0) {
              recovered_1000186c((long)acStack_8d0,str_100025ea,str_1000276c);
              recovered_100016a0((long)acStack_8d0,0x400,str_10002776);
              recovered_100016f4((long)acStack_8d0,0x400,(uint)lVar13);
              recovered_10000718((long)acStack_8d0,str_1000278a,uVar12);
              recovered_10000718((long)acStack_8d0,str_10002799,(uint)local_4b0);
              recovered_10002138(param_1,(ulong)(uVar7 & 0xffff));
              recovered_10002138(param_1,(ulong)(uVar7 & 0xffff));
              uVar10 = recovered_100020f8(param_1,(ulong)(uVar7 & 0xffff),1,(long)auStack_b0);
              if ((int)uVar10 != 0) {
                recovered_10000718((long)acStack_8d0,str_100027ac,(uint)auStack_b0[0]);
              }
              goto LAB_1000160c;
            }
          }
        }
      }
      recovered_100016a0((long)acStack_8d0,0x400,str_100025c3);
    }
    bVar2 = 0;
    goto LAB_10001228;
  }
  local_4b0 = 0;
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  uStack_4b8 = 0;
  uStack_4c0 = uStack_4c0 & 0xffffffff;
  if ((param_2[8] == 1) && (param_2[9] == 6)) {
    uVar10 = recovered_10001dc0(param_1,(long)param_2,5,0x1000,&local_4b0);
    uVar11 = local_4b0;
    if ((int)uVar10 == 0) {
      recovered_100016a0((long)acStack_8d0,0x400,str_100027be);
      goto LAB_10000e58;
    }
    recovered_10002044((long)acStack_8d0,str_100027d4,local_4b0);
    recovered_10001f3c(param_1,uVar11,0,(long)auStack_b0);
    recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_4b8 + 4);
    recovered_10001f3c(param_1,local_4b0,0xc,(long)&uStack_4b8);
    recovered_10001f3c(param_1,local_4b0,0x10,(long)&uStack_4c0 + 4);
    uVar7 = PF_PART4(uStack_4b8, 4);
    if (-1 < (long)uStack_4b8) {
      recovered_10001f28(param_1,local_4b0,4,(ulong)(PF_PART4(uStack_4b8, 4) | 0x80000000));
      recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_4b8 + 4);
      uVar7 = PF_PART4(uStack_4b8, 4);
    }
    recovered_10000718((long)acStack_8d0,str_100027dd,(uint)auStack_b0[0]);
    recovered_10000718((long)acStack_8d0,str_100027e5,uVar7);
    recovered_10000718((long)acStack_8d0,str_100027ed,(uint)uStack_4b8);
    recovered_10000718((long)acStack_8d0,str_100027f7,PF_PART4(uStack_4c0, 4));
    bVar1 = 1;
  }
  else {
LAB_10000e58:
    bVar1 = 0;
  }
  local_4b0 = 0;
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  uStack_4b8 = 0;
  if ((param_2[8] == 4) && (param_2[9] == 3)) {
    uVar10 = recovered_10001dc0(param_1,(long)param_2,0,0x1000,&local_4b0);
    uVar11 = local_4b0;
    if ((int)uVar10 == 0) {
      recovered_100016a0((long)acStack_8d0,0x400,str_10002803);
      goto LAB_10000f34;
    }
    recovered_10002044((long)acStack_8d0,str_10002818,local_4b0);
    recovered_10001f3c(param_1,uVar11,0,(long)auStack_b0);
    recovered_10001f3c(param_1,local_4b0,8,(long)&uStack_4b8 + 4);
    if ((uStack_4b8 & 0x100000000) == 0) {
      recovered_10001f28(param_1,local_4b0,8,(ulong)(PF_PART4(uStack_4b8, 4) | 1));
      recovered_10001f3c(param_1,local_4b0,8,(long)&uStack_4b8 + 4);
    }
    recovered_10001f6c(param_1,local_4b0 + 0xe,2,(long)&uStack_4b8);
    recovered_10000718((long)acStack_8d0,str_10002820,(uint)auStack_b0[0]);
    recovered_10000718((long)acStack_8d0,str_10002828,PF_PART4(uStack_4b8, 4));
    recovered_10000718((long)acStack_8d0,str_10002830,(uint)uStack_4b8);
    bVar3 = 1;
  }
  else {
LAB_10000f34:
    bVar3 = 0;
  }
  local_4b0 = 0;
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  uStack_4b8 = 0;
  if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
    uVar10 = recovered_10001dc0(param_1,(long)param_2,0,0x1000,&local_4b0);
    uVar11 = local_4b0;
    if ((int)uVar10 == 0) {
      for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
        uStack_4c0 = uStack_4c0 & 0xffffffff;
        uVar7 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
        if (((uVar7 & 1) != 0) &&
           (uVar10 = recovered_100020f8(param_1,(ulong)(uVar7 & 0xfffc),2,(long)&uStack_4c0 + 4),
           (int)uVar10 != 0)) {
          recovered_100016a0((long)acStack_8d0,0x400,str_1000285c);
          recovered_100016f4((long)acStack_8d0,0x400,(uint)lVar13);
          recovered_10000718((long)acStack_8d0,str_10002867,uVar7 & 0xfffffffc);
          pcVar9 = str_1000286d;
          uVar7 = PF_PART4(uStack_4c0, 4);
          goto LAB_10000fc0;
        }
      }
      recovered_100016a0((long)acStack_8d0,0x400,str_10002877);
      goto LAB_100010a8;
    }
    recovered_10002044((long)acStack_8d0,str_1000283c,local_4b0);
    recovered_10001f3c(param_1,uVar11,0,(long)auStack_b0);
    recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_4b8 + 4);
    recovered_10001f3c(param_1,local_4b0,8,(long)&uStack_4b8);
    recovered_10000718((long)acStack_8d0,str_10002844,(uint)auStack_b0[0]);
    recovered_10000718((long)acStack_8d0,str_1000284c,PF_PART4(uStack_4b8, 4));
    pcVar9 = str_10002854;
    uVar7 = (uint)uStack_4b8;
LAB_10000fc0:
    recovered_10000718((long)acStack_8d0,pcVar9,uVar7);
    bVar2 = 1;
  }
  else {
LAB_100010a8:
    bVar2 = 0;
  }
  bVar2 = bVar3 | bVar1 | bVar2;
  local_4b0 = 0;
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  uStack_4b8 = uStack_4b8 & 0xffffffff;
  bVar1 = param_2[8];
  if (bVar1 == 2) {
    for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
      uVar7 = (uint)lVar13;
      uVar10 = recovered_10001dc0(param_1,(long)param_2,uVar7,0x1000,&local_4b0);
      if ((int)uVar10 != 0) {
        recovered_100016a0((long)acStack_8d0,0x400,str_1000288c);
        recovered_100016f4((long)acStack_8d0,0x400,uVar7);
        uVar11 = local_4b0;
        recovered_10002044((long)acStack_8d0,str_1000289d,local_4b0);
        recovered_10001f3c(param_1,uVar11,0,(long)auStack_b0);
        recovered_10001f3c(param_1,local_4b0,4,(long)&uStack_4b8 + 4);
        recovered_10000718((long)acStack_8d0,str_100028a9,(uint)auStack_b0[0]);
        pcVar9 = str_100028b5;
        uVar7 = PF_PART4(uStack_4b8, 4);
LAB_10001194:
        recovered_10000718((long)acStack_8d0,pcVar9,uVar7);
        break;
      }
      uVar12 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
      if (((uVar12 & 1) != 0) &&
         (uVar10 = recovered_100020f8(param_1,(ulong)(uVar12 & 0xfffc),2,(long)auStack_b0),
         (int)uVar10 != 0)) {
        recovered_100016a0((long)acStack_8d0,0x400,str_100028c1);
        recovered_100016f4((long)acStack_8d0,0x400,uVar7);
        recovered_10000718((long)acStack_8d0,str_100028d0,uVar12 & 0xfffffffc);
        pcVar9 = str_100028da;
        uVar7 = (uint)auStack_b0[0];
        goto LAB_10001194;
      }
    }
    if (lVar13 != 6) {
      bVar2 = 1;
    }
    bVar1 = param_2[8];
  }
  local_4b0 = 0;
  bVar5 = false;
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  if (bVar1 == 3) {
    for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
      uVar10 = recovered_10001dc0(param_1,(long)param_2,uVar7,0x1000,&local_4b0);
      if ((int)uVar10 != 0) {
        recovered_100016a0((long)acStack_8d0,0x400,str_100028e8);
        recovered_100016f4((long)acStack_8d0,0x400,uVar7);
        uVar11 = local_4b0;
        recovered_10002044((long)acStack_8d0,str_100028f9,local_4b0);
        uVar10 = recovered_10001f3c(param_1,uVar11,0,(long)auStack_b0);
        if ((int)uVar10 != 0) {
          recovered_10000718((long)acStack_8d0,str_10002905,(uint)auStack_b0[0]);
        }
        break;
      }
    }
    bVar5 = uVar7 != 6;
  }
  bVar2 = bVar5 | bVar2;
LAB_10001228:
  pcVar9 = str_1000252d;
  if ((bool)(bVar2 | bVar4)) {
    pcVar9 = str_1000251d;
  }
  recovered_100016a0((long)acStack_8d0,0x400,pcVar9);
  pcVar9 = recovered_10001a6c((long)param_2);
  if (param_2 != (byte *)0x0) {
    recovered_10000708((undefined1 *)auStack_b0,0x60,str_10002510);
    recovered_100016a0((long)auStack_b0,0x60,&DAT_10002911);
    recovered_100017f4((long)auStack_b0,0x60,(uint)*param_2,2);
    recovered_100016a0((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x503U));
    recovered_100017f4((long)auStack_b0,0x60,(uint)param_2[1],2);
    recovered_100016a0((long)auStack_b0,0x60,(char *)((uintptr_t)pf_module_state + 0x505U));
    recovered_100016f4((long)auStack_b0,0x60,(uint)param_2[2]);
    recovered_10000708((undefined1 *)&local_4b0,0x400,&DAT_10002917);
    recovered_100017f4((long)&local_4b0,0x400,(uint)*param_2,2);
    recovered_100016a0((long)&local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x503U));
    recovered_100017f4((long)&local_4b0,0x400,(uint)param_2[1],2);
    recovered_100016a0((long)&local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x505U));
    recovered_100016f4((long)&local_4b0,0x400,(uint)param_2[2]);
    recovered_100016a0((long)&local_4b0,0x400,str_1000291c);
    recovered_100017f4((long)&local_4b0,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_100016a0((long)&local_4b0,0x400,str_10002925);
    recovered_100017f4((long)&local_4b0,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_100016a0((long)&local_4b0,0x400,str_1000292e);
    recovered_100017f4((long)&local_4b0,0x400,(uint)param_2[8],2);
    recovered_100016a0((long)&local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x505U));
    recovered_100017f4((long)&local_4b0,0x400,(uint)param_2[9],2);
    recovered_100016a0((long)&local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x505U));
    recovered_100017f4((long)&local_4b0,0x400,(uint)param_2[10],2);
    recovered_100016a0((long)&local_4b0,0x400,str_10002936);
    recovered_100017f4((long)&local_4b0,0x400,(uint)param_2[0xb],2);
    recovered_10000718((long)&local_4b0,str_10002941,*(uint *)(param_2 + 0x10));
    for (lVar13 = 0; lVar13 != 6; lVar13 = lVar13 + 1) {
      uVar7 = *(uint *)(param_2 + lVar13 * 4 + 0x14);
      if (uVar7 != 0) {
        recovered_100016a0((long)&local_4b0,0x400,(char *)((uintptr_t)pf_module_state + 0x539U));
        recovered_100016f4((long)&local_4b0,0x400,(uint)lVar13);
        recovered_100016a0((long)&local_4b0,0x400,&DAT_100024df);
        recovered_100017f4((long)&local_4b0,0x400,uVar7,8);
      }
    }
    if (acStack_8d0[0] != '\0') {
      recovered_100016a0((long)&local_4b0,0x400,&DAT_100024dd);
      recovered_100016a0((long)&local_4b0,0x400,acStack_8d0);
    }
    if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
      (*(code *)(ulong)(uint)param_1[3])(auStack_b0,pcVar9,&local_4b0);
    }
  }
  return;
}

#undef DAT_100024dd
#undef DAT_100024df
#undef DAT_10002911
#undef DAT_10002917
#undef str_100024e8
#undef str_10002510
#undef str_1000251d
#undef str_1000252d
#undef str_10002541
#undef str_10002559
#undef str_10002571
#undef str_1000258a
#undef str_1000259b
#undef str_100025ab
#undef str_100025ba
#undef str_100025c3
#undef str_100025df
#undef str_100025ea
#undef str_100025fa
#undef str_10002601
#undef str_10002611
#undef str_1000261e
#undef str_10002634
#undef str_1000264a
#undef str_10002660
#undef str_10002676
#undef str_1000268f
#undef str_100026a7
#undef str_100026b4
#undef str_100026c5
#undef str_100026d9
#undef str_100026e9
#undef str_10002700
#undef str_10002713
#undef str_1000271d
#undef str_10002730
#undef str_10002747
#undef str_10002753
#undef str_1000275f
#undef str_1000276c
#undef str_10002776
#undef str_1000278a
#undef str_10002799
#undef str_100027ac
#undef str_100027be
#undef str_100027d4
#undef str_100027dd
#undef str_100027e5
#undef str_100027ed
#undef str_100027f7
#undef str_10002803
#undef str_10002818
#undef str_10002820
#undef str_10002828
#undef str_10002830
#undef str_1000283c
#undef str_10002844
#undef str_1000284c
#undef str_10002854
#undef str_1000285c
#undef str_10002867
#undef str_1000286d
#undef str_10002877
#undef str_1000288c
#undef str_1000289d
#undef str_100028a9
#undef str_100028b5
#undef str_100028c1
#undef str_100028d0
#undef str_100028da
#undef str_100028e8
#undef str_100028f9
#undef str_10002905
#undef str_1000291c
#undef str_10002925
#undef str_1000292e
#undef str_10002936
#undef str_10002941
#undef local_4b0
#undef acStack_8d0
#undef uStack_4d0
#undef uStack_4cc
#undef uStack_4c8
#undef uStack_4c0
#undef uStack_4b8
#undef uStack_4a8
#undef uStack_4a0
#undef uStack_498
#undef uStack_490
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

#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_100024df
#define DAT_100024df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001648
 */

void recovered_10001648(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_100016a0(param_1,0x400,&DAT_100024dd);
  recovered_100016a0(param_1,0x400,param_2);
  recovered_100016a0(param_1,0x400,&DAT_100024df);
  if (param_3 == 0) {
    lVar1 = recovered_10001798(param_1);
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
    recovered_100017b4(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_100024dd
#undef DAT_100024df
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016a0
 */

void recovered_100016a0(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001798(param_1);
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
 * Address: 0x100016f4
 */

void recovered_100016f4(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001798(param_1);
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
    recovered_100017b4(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001798
 */

long recovered_10001798(long param_1)

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
 * Address: 0x100017b4
 */

void recovered_100017b4(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001798(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f4
 */

void recovered_100017f4(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_100017b4(param_1,param_2,bVar2);
  }
  return;
}


#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_100024df
#define DAT_100024df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#undef str_100024e1
#define str_100024e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000186c
 */

void recovered_1000186c(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_100016a0(param_1,0x400,&DAT_100024dd);
  recovered_100016a0(param_1,0x400,param_2);
  recovered_100016a0(param_1,0x400,&DAT_100024df);
  pcVar3 = str_100024e1 + 6;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001798(param_1);
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

#undef DAT_100024dd
#undef DAT_100024df
#undef str_100024e1

#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d0
 */

undefined8
recovered_100018d0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001a1c(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001a1c(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001a1c(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001a1c(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001a1c(param_1,param_2,param_3,param_4,
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
 * Address: 0x10001a1c
 */

undefined8
recovered_10001a1c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10002a83
#define DAT_10002a83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x673U)))
#undef DAT_10002a88
#define DAT_10002a88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_10002a8d
#define DAT_10002a8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67dU)))
#undef DAT_10002a92
#define DAT_10002a92 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682U)))
#undef str_1000294e
#define str_1000294e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53eU)))
#undef str_10002959
#define str_10002959 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x549U)))
#undef str_10002968
#define str_10002968 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x558U)))
#undef str_10002979
#define str_10002979 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_1000298c
#define str_1000298c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57cU)))
#undef str_1000299f
#define str_1000299f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58fU)))
#undef str_100029af
#define str_100029af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_100029be
#define str_100029be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aeU)))
#undef str_100029cd
#define str_100029cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bdU)))
#undef str_100029de
#define str_100029de (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ceU)))
#undef str_100029e9
#define str_100029e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d9U)))
#undef str_100029f5
#define str_100029f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_100029ff
#define str_100029ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#undef str_10002a08
#define str_10002a08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f8U)))
#undef str_10002a13
#define str_10002a13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x603U)))
#undef str_10002a1c
#define str_10002a1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60cU)))
#undef str_10002a24
#define str_10002a24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x614U)))
#undef str_10002a2d
#define str_10002a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_10002a34
#define str_10002a34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x624U)))
#undef str_10002a47
#define str_10002a47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_10002a5a
#define str_10002a5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64aU)))
#undef str_10002a6d
#define str_10002a6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_10002a97
#define str_10002a97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_10002aa2
#define str_10002aa2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#undef str_10002aab
#define str_10002aab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a6c
 */

char * recovered_10001a6c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001c80_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10002a08;
    }
LAB_10001c54:
    pcVar4 = str_10002a34;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10002a5a;
      break;
    case 2:
      pcVar4 = str_10002a47;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10002a6d;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001cb4:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10002aab;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10002a88;
        }
        pcVar1 = str_10002a97;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10002a92;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10002a8d;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10002aa2;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10002a83;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001c80_caseD_5:
      pcVar4 = str_1000294e;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_100029ff;
      }
      goto LAB_10001c54;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001bc8:
        return str_10002a2d;
      }
      goto LAB_10001c54;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001bc8;
      goto LAB_10001c54;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10002a24;
      }
      goto LAB_10001c54;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10002a13;
      }
      goto LAB_10001c54;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_100029e9;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001cb4;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_100029f5;
      }
      goto LAB_10001c54;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10002a1c;
      }
      goto LAB_10001c54;
    }
    if (sVar3 != 0x1af4) goto LAB_10001c54;
    pcVar4 = str_10002959;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001b10_caseD_1042:
      pcVar4 = str_10002968;
      break;
    case 0x1043:
switchD_10001b10_caseD_1043:
      pcVar4 = str_1000298c;
      break;
    case 0x1044:
switchD_10001b10_caseD_1044:
      pcVar4 = str_100029af;
      break;
    case 0x1045:
switchD_10001b10_caseD_1045:
      pcVar4 = str_10002979;
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
switchD_10001b10_caseD_1046:
      pcVar4 = str_100029de;
      break;
    case 0x1048:
switchD_10001b10_caseD_1048:
      pcVar4 = str_1000299f;
      break;
    case 0x1050:
      pcVar4 = str_100029be;
      break;
    case 0x1052:
      pcVar4 = str_100029cd;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001b10_caseD_1042;
      case 0x1002:
        goto switchD_10001b10_caseD_1045;
      case 0x1003:
        goto switchD_10001b10_caseD_1043;
      case 0x1004:
        goto switchD_10001b10_caseD_1048;
      case 0x1005:
        goto switchD_10001b10_caseD_1044;
      default:
        goto switchD_10001b10_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10002a83
#undef DAT_10002a88
#undef DAT_10002a8d
#undef DAT_10002a92
#undef str_1000294e
#undef str_10002959
#undef str_10002968
#undef str_10002979
#undef str_1000298c
#undef str_1000299f
#undef str_100029af
#undef str_100029be
#undef str_100029cd
#undef str_100029de
#undef str_100029e9
#undef str_100029f5
#undef str_100029ff
#undef str_10002a08
#undef str_10002a13
#undef str_10002a1c
#undef str_10002a24
#undef str_10002a2d
#undef str_10002a34
#undef str_10002a47
#undef str_10002a5a
#undef str_10002a6d
#undef str_10002a97
#undef str_10002aa2
#undef str_10002aab

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d14
 */

int recovered_10001d14(long param_1)

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
 * Address: 0x10001d5c
 */

undefined8
recovered_10001d5c(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_10001dc0(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc0
 */

undefined8
recovered_10001dc0(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

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
 * Address: 0x10001ef8
 */

int * recovered_10001ef8(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return piVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f10
 */

int * recovered_10001f10(int *param_1,long param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x10002010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f28
 */

int * recovered_10001f28(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f3c
 */

undefined8 recovered_10001f3c(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f54
 */

undefined8 recovered_10001f54(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10001fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f6c
 */

undefined8 recovered_10001f6c(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd8
 */

undefined8 recovered_10001fd8(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_100024dd
#define DAT_100024dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcdU)))
#undef DAT_100024df
#define DAT_100024df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfU)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002044
 */

void recovered_10002044(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_100016a0(param_1,0x400,&DAT_100024dd);
  recovered_100016a0(param_1,0x400,param_2);
  recovered_100016a0(param_1,0x400,&DAT_100024df);
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
    recovered_100016a0(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_100024dd
#undef DAT_100024df
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f8
 */

undefined8 recovered_100020f8(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10010bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002138
 */

void recovered_10002138(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


#undef DAT_10002a83
#define DAT_10002a83 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x673U)))
#undef DAT_10002a88
#define DAT_10002a88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_10002a8d
#define DAT_10002a8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67dU)))
#undef DAT_10002a92
#define DAT_10002a92 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x682U)))
#undef str_10002a97
#define str_10002a97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_10002aa2
#define str_10002aa2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#undef str_10002aab
#define str_10002aab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002178
 */

char * recovered_10002178(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10002aab;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10002a88;
  }
  pcVar2 = str_10002a97;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10002a92;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002a8d;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10002aa2;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002a83;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10002a83
#undef DAT_10002a88
#undef DAT_10002a8d
#undef DAT_10002a92
#undef str_10002a97
#undef str_10002aa2
#undef str_10002aab

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
