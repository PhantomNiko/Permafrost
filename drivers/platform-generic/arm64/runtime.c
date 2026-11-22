/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000310d
#define DAT_1000310d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x4fc4U)))
#undef UNK_10003048
#define UNK_10003048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_10003040
#define _DAT_10003040 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef str_1000305c
#define str_1000305c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20U)))
#undef str_10003074
#define str_10003074 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38U)))
#undef str_10003086
#define str_10003086 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aU)))
#undef str_100030a9
#define str_100030a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dU)))
#undef str_100030cc
#define str_100030cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#undef str_100030fd
#define str_100030fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1U)))
#undef str_10003106
#define str_10003106 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcaU)))
#undef str_10003621
#define str_10003621 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_10003775
#define str_10003775 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x739U)))
#undef str_1000378c
#define str_1000378c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x750U)))
#undef str_100037a9
#define str_100037a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76dU)))
#undef str_100037c1
#define str_100037c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#undef str_100037df
#define str_100037df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a3U)))
#undef str_100037f8
#define str_100037f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#undef str_1000381a
#define str_1000381a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7deU)))
#undef str_10003836
#define str_10003836 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7faU)))
#undef str_10003850
#define str_10003850 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x814U)))
#undef str_10003865
#define str_10003865 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x829U)))
#undef str_1000387b
#define str_1000387b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83fU)))
#undef uRam0000000010003048
#define uRam0000000010003048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#define auStack_510 (*(undefined1 (*)[768])(frame + 16))
#define auStack_210 (*(uint (*)[13])(frame + 784))
#define uStack_1dc (*(undefined4 *)(frame + 836))
#define uStack_1d8 (*(uint *)(frame + 840))
#define iStack_1c0 (*(int *)(frame + 864))
#define auStack_1bc (*(undefined1 (*)[100])(frame + 868))
#define uStack_158 (*(uint *)(frame + 968))
#define auStack_114 (*(undefined1 (*)[16])(frame + 1036))
#define uStack_104 (*(uint *)(frame + 1052))
#define uStack_100 (*(uint *)(frame + 1056))
#define uStack_fc (*(uint *)(frame + 1060))
#define uStack_e0 (*(undefined8 *)(frame + 1088))
#define uStack_d8 (*(undefined8 *)(frame + 1096))
#define auStack_d0 (*(undefined1 (*)[64])(frame + 1104))
#define auStack_90 (*(undefined1 (*)[64])(frame + 1168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1000048c(int *api)

{
  unsigned char frame[1344] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint unaff_w22;
  uint unaff_w23;

  bVar3 = recovered_10000960(api);
  if (!bVar3) {
    return (uint)bVar3;
  }
  recovered_10001d04(auStack_510,0x70,str_1000305c);
  recovered_10001cb0((long)auStack_510,0x70,str_100030fd);
  if (api == (int *)0x0) {
    uVar8 = 0;
LAB_10000540:
    recovered_10001d14((long)auStack_510,0x70,uVar8);
  }
  else {
    uVar2 = api[1];
    uVar8 = uVar2;
    if (uVar2 < 1000000) goto LAB_10000540;
    uVar8 = uVar2 % 1000;
    recovered_10001d14((long)auStack_510,0x70,uVar2 / 1000000);
    recovered_10001cb0((long)auStack_510,0x70,&DAT_1000310d);
    recovered_10001d14((long)auStack_510,0x70,(uVar2 / 1000) % 1000);
    if (uVar8 != 0) {
      recovered_10001cb0((long)auStack_510,0x70,&DAT_1000310d);
      goto LAB_10000540;
    }
  }
  recovered_10001cb0((long)auStack_510,0x70,str_10003106);
  if (api == (int *)0x0) {
    recovered_10000988(auStack_1bc,0xa8);
    recovered_10000988((undefined1 *)auStack_210,0x54);
  }
  else {
    if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
      (*(code *)(ulong)(uint)api[10])(auStack_510);
    }
    recovered_10000988(auStack_1bc,0xa8);
    recovered_10000988((undefined1 *)auStack_210,0x54);
    if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) && (api[0xf] != 0)) {
      iVar4 = (*(code *)(ulong)(uint)api[0xf])(auStack_1bc);
      uVar8 = (uint)(iVar4 == 0);
      goto LAB_100005e4;
    }
  }
  uVar8 = 1;
LAB_100005e4:
  recovered_1000099c(api,recovered_10000aa4,auStack_210);
  bVar3 = recovered_10000bb4(api);
  if (bVar3) {
    recovered_10000c20(api,recovered_10000c90,auStack_210);
  }
  puVar1 = (undefined1 *)0x0;
  if (uVar8 == 0) {
    puVar1 = auStack_1bc;
  }
  recovered_10000cf8((long)puVar1,auStack_210,auStack_510);
  if ((api == (int *)0x0) || (api[3] == 0)) {
    iVar4 = 0;
  }
  else {
    iVar5 = (*(code *)(ulong)(uint)api[3])(str_10003074,str_10003086,auStack_510);
    iVar4 = 0;
    if (iVar5 != 0) {
      if (api[4] != 0) {
        if (uStack_158 < 2) {
          uStack_158 = 1;
        }
        if (0x3f < uStack_158) {
          uStack_158 = 0x40;
        }
        if (uVar8 != 0) {
          uStack_158 = 1;
        }
        (*(code *)(ulong)(uint)api[4])(uStack_158,uStack_158 * 0x60);
      }
      if (api[6] != 0) {
        (*(code *)(ulong)(uint)api[6])(0x80,0x100,0x100,0x10,3);
      }
      recovered_1000099c(api,recovered_10000ebc,auStack_210);
      bVar3 = recovered_10000bb4(api);
      if (bVar3) {
        recovered_10000c20(api,recovered_10001798,auStack_210);
      }
      if (iStack_1c0 == 0) {
        DAT_10008000 = api;
        if ((api[8] == 0) ||
           (iVar4 = (*(code *)(ulong)(uint)api[8])(recovered_1000288c,3,str_100030cc), iVar4 == 0))
        {
          uVar8 = 0;
          pcVar7 = str_1000378c;
        }
        else {
          uVar8 = 1;
          pcVar7 = str_10003775;
        }
        recovered_10001cb0((long)auStack_510,0x300,pcVar7);
        if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) && (api[0x29] != 0)) &&
           (iVar4 = (*(code *)(ulong)(uint)api[0x29])(recovered_100028ac,7,str_100030cc), iVar4 != 0
           )) {
          uVar8 = 1;
          pcVar7 = str_100037a9;
        }
        else {
          pcVar7 = str_100037c1;
        }
        recovered_10001cb0((long)auStack_510,0x300,pcVar7);
        uStack_1d8 = uVar8;
      }
      else {
        recovered_10001cb0((long)auStack_510,0x300,str_100030a9);
      }
      if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) && (api[0x10] != 0)) {
        iVar4 = (*(code *)(ulong)(uint)api[0x10])(auStack_114);
        bVar3 = iVar4 == 0;
        uVar8 = uStack_fc;
        unaff_w23 = uStack_104;
        unaff_w22 = uStack_100;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) || (unaff_w23 == 0)) || ((unaff_w22 == 0 || (uVar8 == 0)))) {
        recovered_10001cb0((long)auStack_510,0x300,str_100037df);
        uVar9 = 0;
      }
      else {
        recovered_10001cb0((long)auStack_510,0x300,&DAT_10003280);
        recovered_10001cb0((long)auStack_510,0x300,str_10003621);
        recovered_10001cb0((long)auStack_510,0x300,&DAT_10003282);
        recovered_10001d14((long)auStack_510,0x300,unaff_w23);
        recovered_10001cb0((long)auStack_510,0x300,(char *)((uintptr_t)pf_module_state + 0x812U));
        recovered_10001d14((long)auStack_510,0x300,unaff_w22);
        recovered_10001cb0((long)auStack_510,0x300,(char *)((uintptr_t)pf_module_state + 0x812U));
        recovered_10001d14((long)auStack_510,0x300,uVar8);
        if ((((*api == 0x54584b57) && (0xb7 < (uint)api[2])) && (api[0x2d] != 0)) &&
           (uVar6 = (*(code *)(ulong)(uint)api[0x2d])(1), (uVar6 & 1) != 0)) {
          pcVar7 = str_100037f8;
        }
        else {
          pcVar7 = str_1000381a;
        }
        recovered_10001cb0((long)auStack_510,0x300,pcVar7);
        recovered_10000988((undefined1 *)&uStack_e0,0x90);
        uStack_d8 = uRam0000000010003048;
        uStack_e0 = _DAT_10003040;
        recovered_10001d04(auStack_d0,0x40,str_10003836);
        recovered_10001d04(auStack_90,0x40,str_10003850);
        if (((*api == 0x54584b57) && (199 < (uint)api[2])) &&
           ((api[0x31] != 0 &&
            (iVar4 = (*(code *)(ulong)(uint)api[0x31])(&uStack_e0,recovered_100028e8), iVar4 != 0)))
           ) {
          uVar9 = 1;
          pcVar7 = str_10003865;
        }
        else {
          uVar9 = 0;
          pcVar7 = str_1000387b;
        }
        recovered_10001cb0((long)auStack_510,0x300,pcVar7);
      }
      uStack_1dc = uVar9;
      recovered_10000cf8((long)puVar1,auStack_210,auStack_510);
      if (api[3] != 0) {
        (*(code *)(ulong)(uint)api[3])(str_10003074,str_10003086,auStack_510);
      }
      iVar4 = 1;
    }
  }
  return iVar4;
}

#undef DAT_10003040
#undef DAT_1000310d
#undef DAT_10003280
#undef DAT_10003282
#undef DAT_10008000
#undef UNK_10003048
#undef _DAT_10003040
#undef str_1000305c
#undef str_10003074
#undef str_10003086
#undef str_100030a9
#undef str_100030cc
#undef str_100030fd
#undef str_10003106
#undef str_10003621
#undef str_10003775
#undef str_1000378c
#undef str_100037a9
#undef str_100037c1
#undef str_100037df
#undef str_100037f8
#undef str_1000381a
#undef str_10003836
#undef str_10003850
#undef str_10003865
#undef str_1000387b
#undef uRam0000000010003048
#undef auStack_510
#undef auStack_210
#undef uStack_1dc
#undef uStack_1d8
#undef iStack_1c0
#undef auStack_1bc
#undef uStack_158
#undef auStack_114
#undef uStack_104
#undef uStack_100
#undef uStack_fc
#undef uStack_e0
#undef uStack_d8
#undef auStack_d0
#undef auStack_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000960
 */

bool recovered_10000960(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x54584b57) {
      return false;
    }
    bVar1 = 0xf < (uint)param_1[2];
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000988
 */

void recovered_10000988(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#define auStack_a8 (*(undefined1 (*)[44])(frame + 24))
#define auStack_7c (*(undefined1 (*)[12])(frame + 68))
#define cStack_70 (*(char *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000099c
 */

void recovered_1000099c(int *param_1,undefined *param_2,undefined8 param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((((param_1 != (int *)0x0) && (param_2 != (undefined *)0x0)) && (*param_1 == 0x54584b57)) &&
     ((0x5f < (uint)param_1[2] && (param_1[0x17] != 0)))) {
    for (uVar2 = 0; uVar2 != 0x10; uVar2 = uVar2 + 1) {
      for (uVar3 = 0; uVar3 != 0x20; uVar3 = uVar3 + 1) {
        uVar1 = recovered_10001e20(param_1,(ulong)(uVar2 & 0xff),(ulong)(uVar3 & 0xff),0,auStack_7c)
        ;
        if (((int)uVar1 != 0) && ((*(code *)param_2)(param_1,auStack_7c,param_3), cStack_70 < '\0'))
        {
          for (uVar4 = 1; uVar4 != 8; uVar4 = uVar4 + 1) {
            uVar1 = recovered_10001e20(param_1,(ulong)(uVar2 & 0xff),(ulong)(uVar3 & 0xff),
                                       (ulong)(uVar4 & 0xff),auStack_a8);
            if ((int)uVar1 != 0) {
              (*(code *)param_2)(param_1,auStack_a8,param_3);
            }
          }
        }
      }
    }
  }
  return;
}

#undef auStack_a8
#undef auStack_7c
#undef cStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000aa4
 */

undefined8 recovered_10000aa4(undefined8 param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;

  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_2 + 4);
  if (sVar1 == 0x106b) {
    lVar4 = 0x40;
  }
  else if (sVar1 == -0x7f7a) {
    uVar2 = *(ushort *)(param_2 + 6);
    uVar3 = uVar2 - 0x2815;
    if ((0x36 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x400023f8100001U) == 0)) {
      if (uVar2 != 0x2a02 && uVar2 != 0x2a00) goto LAB_10000b5c;
      *(undefined4 *)(param_3 + 0x48) = 1;
      uVar3 = uVar2 - 0x2815;
      if ((0x36 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x400023f8100001U) == 0))
      goto LAB_10000b5c;
    }
    lVar4 = 0x4c;
  }
  else {
    if (sVar1 != 0x10de) goto LAB_10000b5c;
    uVar2 = *(ushort *)(param_2 + 6);
    lVar4 = 0x44;
    uVar3 = uVar2 - 0xaa2;
    if ((((0x1e < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x408040b9U) == 0)) && (uVar2 != 0x863))
       && (uVar2 != 0x867)) goto LAB_10000b5c;
  }
  *(undefined4 *)(param_3 + lVar4) = 1;
LAB_10000b5c:
  recovered_10001fb8(param_3);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb4
 */

bool recovered_10000bb4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;

  bVar2 = recovered_10000960(param_1);
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (bVar2)) {
    if ((*param_1 == 0x54584b57) && ((0x9b < (uint)param_1[2] && (param_1[0x20] != 0)))) {
      bVar1 = param_1[0x26] != 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


#define auStack_2c4 (*(undefined1 (*)[8])(frame + 28))
#define uStack_2bc (*(uint *)(frame + 36))
#define uStack_2b8 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

int * recovered_10000c20(int *param_1,undefined *param_2,undefined8 param_3)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;

  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x84)) ||
     ((param_1[0x20] == 0 ||
      (piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x20])(), (int)piVar2 == 0)))) {
    return piVar2;
  }
  if (param_2 == (undefined *)0x0) {
    return (int *)0x0;
  }
  piVar4 = (int *)0x0;
LAB_10002064:
  if ((int)piVar2 == 0) {
    return piVar4;
  }
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    uVar3 = param_1[2];
    if (0x9b < uVar3) {
      if (param_1[0x26] == 0) goto LAB_100020e8;
      iVar1 = (*(code *)(ulong)(uint)param_1[0x26])(piVar2,auStack_2c4);
      if (iVar1 == 0) {
        if (*param_1 != 0x54584b57) goto LAB_10002114;
        uVar3 = param_1[2];
        goto LAB_10002084;
      }
      uVar3 = (int)piVar4 + 1;
      (*(code *)param_2)(param_1,auStack_2c4,10,param_3);
      if (uStack_2bc != 0) {
        iVar1 = recovered_10002014(param_1,(ulong)uStack_2bc,9,param_2,param_3);
        uVar3 = iVar1 + uVar3;
      }
      piVar4 = (int *)(ulong)uVar3;
      piVar2 = (int *)(ulong)uStack_2b8;
      goto LAB_10002064;
    }
LAB_10002084:
    if (0x8b < uVar3) {
LAB_100020e8:
      if (param_1[0x22] == 0) goto LAB_10002114;
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x22])(piVar2);
      goto LAB_10002064;
    }
  }
LAB_10002114:
  piVar2 = (int *)0x0;
  goto LAB_10002064;
}

#undef auStack_2c4
#undef uStack_2bc
#undef uStack_2b8

#undef DAT_1000311d
#define DAT_1000311d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
#undef str_1000310f
#define str_1000310f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3U)))
#undef str_10003117
#define str_10003117 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c90
 */

undefined8 recovered_10000c90(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((param_2 != 0) && (param_4 != 0)) {
    bVar1 = recovered_1000212c(param_2,(byte *)str_1000310f);
    if ((bVar1) ||
       ((bVar1 = recovered_1000212c(param_2,(byte *)str_10003117), bVar1 ||
        (bVar1 = recovered_1000212c(param_2,&DAT_1000311d), bVar1)))) {
      *(undefined4 *)(param_4 + 0x3c) = 1;
    }
    recovered_10001fb8(param_4);
  }
  return 0;
}

#undef DAT_1000311d
#undef str_1000310f
#undef str_10003117

#undef DAT_100031f5
#define DAT_100031f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_10003284
#define DAT_10003284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef str_10003122
#define str_10003122 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6U)))
#undef str_10003186
#define str_10003186 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14aU)))
#undef str_10003196
#define str_10003196 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#undef str_100031a0
#define str_100031a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x164U)))
#undef str_100031ab
#define str_100031ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16fU)))
#undef str_100031b9
#define str_100031b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17dU)))
#undef str_100031c9
#define str_100031c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18dU)))
#undef str_100031dc
#define str_100031dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_100031e5
#define str_100031e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_100031ed
#define str_100031ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_100031f9
#define str_100031f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_100031ff
#define str_100031ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10003205
#define str_10003205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_1000320c
#define str_1000320c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10003213
#define str_10003213 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d7U)))
#undef str_1000321b
#define str_1000321b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dfU)))
#undef str_1000322f
#define str_1000322f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f3U)))
#undef str_1000323d
#define str_1000323d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_1000324b
#define str_1000324b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#undef str_10003257
#define str_10003257 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21bU)))
#undef str_10003261
#define str_10003261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_1000326b
#define str_1000326b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_10003275
#define str_10003275 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x239U)))
#undef str_10003289
#define str_10003289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf8
 */

void recovered_10000cf8(long param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001d04(param_3,0x300,str_10003122);
  if (param_1 != 0) {
    recovered_10002228((long)param_3,str_10003186,*(uint *)(param_1 + 100));
    recovered_1000228c((long)param_3,0x300,str_10003196,(char *)(param_1 + 4));
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  recovered_10002228((long)param_3,str_100031a0,*param_2);
  recovered_10002228((long)param_3,str_100031ab,param_2[1]);
  recovered_10002228((long)param_3,str_100031b9,param_2[2]);
  recovered_10002228((long)param_3,str_100031c9,param_2[3]);
  recovered_10002228((long)param_3,str_100031dc,param_2[4]);
  recovered_10002228((long)param_3,str_100031e5,param_2[5]);
  recovered_10002228((long)param_3,str_100031ed,param_2[6]);
  recovered_10002228((long)param_3,&DAT_100031f5,param_2[7]);
  recovered_10002228((long)param_3,str_100031f9,param_2[8]);
  recovered_10002228((long)param_3,str_100031ff,param_2[9]);
  recovered_10002228((long)param_3,str_10003205,param_2[10]);
  recovered_10002228((long)param_3,str_1000320c,param_2[0xb]);
  recovered_10002228((long)param_3,str_10003213,param_2[0xc]);
  recovered_10002304((long)param_3,str_1000321b,param_2[0xd]);
  recovered_10002304((long)param_3,str_1000322f,param_2[0xe]);
  recovered_10002304((long)param_3,str_1000323d,param_2[0xf]);
  recovered_10002304((long)param_3,str_1000324b,param_2[0x10]);
  recovered_10002304((long)param_3,str_10003257,param_2[0x11]);
  recovered_10002304((long)param_3,str_10003261,param_2[0x12]);
  recovered_10002304((long)param_3,str_1000326b,param_2[0x13]);
  pcVar3 = str_10003289;
  if (param_2[0x14] != 0) {
    pcVar3 = &DAT_10003284;
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    return;
  }
  recovered_10001cb0((long)param_3,0x300,&DAT_10003280);
  recovered_10001cb0((long)param_3,0x300,str_10003275);
  recovered_10001cb0((long)param_3,0x300,&DAT_10003282);
  uVar1 = recovered_10001e04((long)param_3);
  if ((param_3 != (undefined1 *)0x0) && (pcVar3 != (char *)0x0)) {
    pcVar2 = param_3 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0x2ff < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_100031f5
#undef DAT_10003280
#undef DAT_10003282
#undef DAT_10003284
#undef str_10003122
#undef str_10003186
#undef str_10003196
#undef str_100031a0
#undef str_100031ab
#undef str_100031b9
#undef str_100031c9
#undef str_100031dc
#undef str_100031e5
#undef str_100031ed
#undef str_100031f9
#undef str_100031ff
#undef str_10003205
#undef str_1000320c
#undef str_10003213
#undef str_1000321b
#undef str_1000322f
#undef str_1000323d
#undef str_1000324b
#undef str_10003257
#undef str_10003261
#undef str_1000326b
#undef str_10003275
#undef str_10003289

#undef DAT_1000310d
#define DAT_1000310d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1U)))
#undef DAT_100031f5
#define DAT_100031f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_10003479
#define DAT_10003479 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43dU)))
#undef DAT_10003487
#define DAT_10003487 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef DAT_1000348b
#define DAT_1000348b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44fU)))
#undef str_100030e3
#define str_100030e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7U)))
#undef str_100031dc
#define str_100031dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_100031e5
#define str_100031e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_100031ed
#define str_100031ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_100031f9
#define str_100031f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_10003205
#define str_10003205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_1000320c
#define str_1000320c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_1000328f
#define str_1000328f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x253U)))
#undef str_10003295
#define str_10003295 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_100032a9
#define str_100032a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_100032b0
#define str_100032b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x274U)))
#undef str_100032d4
#define str_100032d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x298U)))
#undef str_100032ea
#define str_100032ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aeU)))
#undef str_100032f3
#define str_100032f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b7U)))
#undef str_10003303
#define str_10003303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_10003317
#define str_10003317 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dbU)))
#undef str_1000332f
#define str_1000332f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f3U)))
#undef str_10003347
#define str_10003347 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30bU)))
#undef str_10003360
#define str_10003360 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x324U)))
#undef str_10003371
#define str_10003371 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x335U)))
#undef str_10003381
#define str_10003381 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_10003390
#define str_10003390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x354U)))
#undef str_100033a6
#define str_100033a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_100033af
#define str_100033af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_100033b7
#define str_100033b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37bU)))
#undef str_100033bf
#define str_100033bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x383U)))
#undef str_100033c9
#define str_100033c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38dU)))
#undef str_100033d5
#define str_100033d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_100033ea
#define str_100033ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_100033f2
#define str_100033f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b6U)))
#undef str_100033fa
#define str_100033fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_10003402
#define str_10003402 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c6U)))
#undef str_1000340e
#define str_1000340e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d2U)))
#undef str_10003427
#define str_10003427 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_1000342d
#define str_1000342d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f1U)))
#undef str_10003435
#define str_10003435 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f9U)))
#undef str_1000343d
#define str_1000343d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_10003457
#define str_10003457 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41bU)))
#undef str_1000345f
#define str_1000345f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x423U)))
#undef str_10003467
#define str_10003467 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x42bU)))
#undef str_1000346f
#define str_1000346f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x433U)))
#undef str_1000347e
#define str_1000347e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x442U)))
#undef str_10003490
#define str_10003490 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x454U)))
#undef str_10003499
#define str_10003499 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_100034a2
#define str_100034a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x466U)))
#undef str_100034aa
#define str_100034aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#define acStack_5cc (*(char (*)[640])(frame + 20))
#define uStack_34c (*(uint *)(frame + 660))
#define uStack_348 (*(undefined8 *)(frame + 664))
#define auStack_340 (*(uint (*)[160])(frame + 672))
#define auStack_c0 (*(uint (*)[24])(frame + 1312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ebc
 */

undefined8 recovered_10000ebc(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1536] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  bVar1 = param_2[8];
  pcVar10 = str_100031dc;
  switch((uintptr_t)(bVar1)) {
  case 1:
    pcVar10 = str_100031e5;
    break;
  case 2:
    pcVar10 = str_100031ed;
    break;
  case 3:
    break;
  case 4:
    pcVar10 = str_100031f9;
    break;
  default:
switchD_10000f18_caseD_5:
    pcVar9 = str_10003205;
    if (bVar1 != 6) {
      pcVar9 = str_100032a9;
    }
    pcVar10 = str_1000320c;
    if (bVar1 != 7) {
      pcVar10 = pcVar9;
    }
    break;
  case 0xc:
    if (param_2[9] != 3) goto switchD_10000f18_caseD_5;
    pcVar10 = &DAT_100031f5;
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = *param_3 + 1;
  recovered_1000232c((long)param_3,(long)pcVar10);
  recovered_10001d04(acStack_5cc,0x280,str_1000328f);
  recovered_10001cb0((long)acStack_5cc,0x280,pcVar10);
  recovered_10001cb0((long)acStack_5cc,0x280,str_10003295);
  bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100032a9);
  if (bVar6) goto LAB_100014c8;
  if (((param_3[0x14] == 0) || (param_2[8] != 0xc)) || (param_2[9] != 3)) {
    auStack_340[0] = 0;
    if (((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) ||
       (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
      pcVar9 = str_10003317;
LAB_10001084:
      recovered_10001cb0((long)acStack_5cc,0x280,pcVar9);
      bVar6 = false;
    }
    else {
      uVar8 = recovered_10001f6c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                 (long)auStack_340);
      if ((int)uVar8 == 0) {
        pcVar9 = str_1000332f;
        goto LAB_10001084;
      }
      uVar11 = 0;
      for (lVar12 = 0x14; lVar12 != 0x2c; lVar12 = lVar12 + 4) {
        uVar2 = uVar11 | 1;
        if (*(uint *)(param_2 + lVar12) != 0) {
          uVar11 = uVar11 | 2;
        }
        if ((*(uint *)(param_2 + lVar12) & 1) != 0) {
          uVar11 = uVar2;
        }
      }
      bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031e5);
      if (((bVar6) || (bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031ed), bVar6)) ||
         ((bVar6 = recovered_10002198((byte *)pcVar10,&DAT_100031f5), bVar6 ||
          ((bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100032ea), bVar6 ||
           (bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031f9), bVar6)))))) {
        uVar11 = uVar11 | 4;
      }
      else {
        bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031dc);
        if (bVar6) {
          uVar11 = uVar11 | 4;
        }
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar11 = uVar11 | 2;
        }
      }
      auStack_c0[0] = auStack_340[0] | uVar11;
      if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) ||
         (iVar7 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
         iVar7 == 0)) {
        pcVar9 = str_10003347;
        goto LAB_10001084;
      }
      recovered_10001f6c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                         (long)auStack_c0);
      recovered_10002620((long)acStack_5cc,str_10003360,auStack_340[0]);
      uVar2 = auStack_c0[0];
      recovered_10002620((long)acStack_5cc,str_10003371,auStack_c0[0]);
      recovered_10002620((long)acStack_5cc,str_10003381,uVar11);
      bVar6 = (uVar11 & (uVar2 ^ 0xffffffff)) == 0;
    }
    auStack_340[0] = 0;
    auStack_c0[0] = 0;
    uStack_348 = 0;
    uStack_34c = 0;
    if ((param_2[8] == 1) && (param_2[9] == 6)) {
      uVar8 = recovered_100026ec(param_1,(long)param_2,5,auStack_340);
      uVar11 = auStack_340[0];
      if ((int)uVar8 == 0) {
        recovered_10001cb0((long)acStack_5cc,0x280,str_10003390);
        goto LAB_1000117c;
      }
      recovered_10002760((long)acStack_5cc,0x280,str_100033a6,auStack_340[0]);
      recovered_100027b8(param_1,uVar11,0,(long)auStack_c0);
      recovered_100027b8(param_1,auStack_340[0],4,(long)&uStack_348 + 4);
      recovered_100027b8(param_1,auStack_340[0],0xc,(long)&uStack_348);
      recovered_100027b8(param_1,auStack_340[0],0x10,(long)&uStack_34c);
      uVar11 = PF_PART4(uStack_348, 4);
      if (-1 < (long)uStack_348) {
        recovered_100027d0(param_1,auStack_340[0],4,(ulong)(PF_PART4(uStack_348, 4) | 0x80000000));
        recovered_100027b8(param_1,auStack_340[0],4,(long)&uStack_348 + 4);
        uVar11 = PF_PART4(uStack_348, 4);
      }
      recovered_10002760((long)acStack_5cc,0x280,str_100033af,auStack_c0[0]);
      recovered_10002760((long)acStack_5cc,0x280,str_100033b7,uVar11);
      recovered_10002760((long)acStack_5cc,0x280,str_100033bf,(uint)uStack_348);
      recovered_10002760((long)acStack_5cc,0x280,str_100033c9,uStack_34c);
      bVar1 = 1;
    }
    else {
LAB_1000117c:
      bVar1 = 0;
    }
    auStack_340[0] = 0;
    auStack_c0[0] = 0;
    uStack_348 = 0;
    if ((param_2[8] == 4) && (param_2[9] == 3)) {
      uVar8 = recovered_100026ec(param_1,(long)param_2,0,auStack_340);
      uVar11 = auStack_340[0];
      if ((int)uVar8 == 0) {
        recovered_10001cb0((long)acStack_5cc,0x280,str_100033d5);
        goto LAB_10001250;
      }
      recovered_10002760((long)acStack_5cc,0x280,str_100033ea,auStack_340[0]);
      recovered_100027b8(param_1,uVar11,0,(long)auStack_c0);
      recovered_100027b8(param_1,auStack_340[0],8,(long)&uStack_348 + 4);
      if ((uStack_348 & 0x100000000) == 0) {
        recovered_100027d0(param_1,auStack_340[0],8,(ulong)(PF_PART4(uStack_348, 4) | 1));
        recovered_100027b8(param_1,auStack_340[0],8,(long)&uStack_348 + 4);
      }
      recovered_10002810(param_1,(ulong)(auStack_340[0] + 0xe),2,(long)&uStack_348);
      recovered_10002760((long)acStack_5cc,0x280,str_100033f2,auStack_c0[0]);
      recovered_10002760((long)acStack_5cc,0x280,str_100033fa,PF_PART4(uStack_348, 4));
      recovered_10002760((long)acStack_5cc,0x280,str_10003402,(uint)uStack_348);
      bVar4 = 1;
    }
    else {
LAB_10001250:
      bVar4 = 0;
    }
    auStack_340[0] = 0;
    auStack_c0[0] = 0;
    uStack_348 = uStack_348 & 0xffffffff;
    if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
      if (param_2[10] == 0) {
        uStack_348 = 0;
        uStack_34c = 0;
        if (((*(uint *)(param_2 + 0x24) & 1) == 0) ||
           (uVar11 = *(uint *)(param_2 + 0x24) & 0xffffffe0, uVar11 == 0)) {
          lVar12 = 0;
          do {
            if (lVar12 == 0x18) goto LAB_100014a0;
            lVar5 = lVar12 + 0x14;
            lVar12 = lVar12 + 4;
          } while ((*(uint *)(param_2 + lVar5) & 1) == 0);
          uVar11 = *(uint *)(param_2 + lVar5) & 0xfffffffc;
          if (uVar11 == 0) {
LAB_100014a0:
            pcVar9 = str_1000340e;
            goto LAB_100014a8;
          }
        }
        recovered_10002850(param_1,(ulong)(uVar11 & 0xffff),(long)&uStack_348);
        recovered_10002850(param_1,(ulong)(uVar11 & 0xffff | 2),(long)&uStack_34c);
        recovered_10002760((long)acStack_5cc,0x280,str_10003427,uVar11);
        recovered_10002620((long)acStack_5cc,str_1000342d,(uint)uStack_348);
        recovered_10002620((long)acStack_5cc,str_10003435,uStack_34c);
      }
      else {
        uVar8 = recovered_100026ec(param_1,(long)param_2,0,auStack_340);
        uVar11 = auStack_340[0];
        if ((int)uVar8 == 0) {
          pcVar9 = str_1000343d;
LAB_100014a8:
          recovered_10001cb0((long)acStack_5cc,0x280,pcVar9);
          goto LAB_100014ac;
        }
        recovered_10002760((long)acStack_5cc,0x280,str_10003457,auStack_340[0]);
        recovered_100027b8(param_1,uVar11,0,(long)auStack_c0);
        recovered_100027b8(param_1,auStack_340[0],4,(long)&uStack_348 + 4);
        recovered_10002760((long)acStack_5cc,0x280,str_1000345f,auStack_c0[0]);
        recovered_10002760((long)acStack_5cc,0x280,str_10003467,PF_PART4(uStack_348, 4));
      }
      bVar3 = 1;
    }
    else {
LAB_100014ac:
      bVar3 = 0;
    }
    if ((bool)(bVar1 | bVar6 | bVar4 | bVar3)) {
LAB_100014b8:
      pcVar10 = str_100032f3;
    }
    else {
      bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031dc);
      if ((((bVar6) || (bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100031ed), bVar6)) ||
          (bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100032ea), bVar6)) ||
         (bVar6 = recovered_10002198((byte *)pcVar10,(byte *)str_100030e3), bVar6)) {
        pcVar10 = str_10003303;
        uVar13 = 0;
        while (uVar11 = (uint)uVar13, uVar11 != 6) {
          auStack_340[0] = 0;
          auStack_c0[0] = 0;
          uVar8 = recovered_100026ec(param_1,(long)param_2,uVar13,auStack_340);
          if ((int)uVar8 != 0) {
            recovered_10001cb0((long)acStack_5cc,0x280,str_1000346f);
            recovered_10001d14((long)acStack_5cc,0x280,uVar11);
            uVar11 = auStack_340[0];
            recovered_10002760((long)acStack_5cc,0x280,&DAT_10003479,auStack_340[0]);
            uVar8 = recovered_100027b8(param_1,uVar11,0,(long)auStack_c0);
            if ((int)uVar8 != 0) {
              recovered_10002760((long)acStack_5cc,0x280,str_1000347e,auStack_c0[0]);
            }
            goto LAB_100014b8;
          }
          uVar13 = (ulong)(uVar11 + 1);
        }
      }
      else {
        pcVar10 = str_10003303;
      }
    }
  }
  else {
    pcVar10 = str_100032b0;
  }
  recovered_10001cb0((long)acStack_5cc,0x280,pcVar10);
LAB_100014c8:
  pcVar10 = recovered_10002420((long)param_2);
  recovered_10001d04((undefined1 *)auStack_c0,0x60,str_100032d4);
  recovered_10001cb0((long)auStack_c0,0x60,&DAT_10003487);
  recovered_10002678((long)auStack_c0,0x60,(uint)*param_2,2);
  recovered_10001cb0((long)auStack_c0,0x60,(char *)((uintptr_t)pf_module_state + 0x44dU));
  recovered_10002678((long)auStack_c0,0x60,(uint)param_2[1],2);
  recovered_10001cb0((long)auStack_c0,0x60,&DAT_1000310d);
  recovered_10001d14((long)auStack_c0,0x60,(uint)param_2[2]);
  recovered_10001d04((undefined1 *)auStack_340,0x280,&DAT_1000348b);
  recovered_10002678((long)auStack_340,0x280,(uint)*param_2,2);
  recovered_10001cb0((long)auStack_340,0x280,(char *)((uintptr_t)pf_module_state + 0x44dU));
  recovered_10002678((long)auStack_340,0x280,(uint)param_2[1],2);
  recovered_10001cb0((long)auStack_340,0x280,&DAT_1000310d);
  recovered_10001d14((long)auStack_340,0x280,(uint)param_2[2]);
  recovered_10001cb0((long)auStack_340,0x280,str_10003490);
  recovered_10002678((long)auStack_340,0x280,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001cb0((long)auStack_340,0x280,str_10003499);
  recovered_10002678((long)auStack_340,0x280,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001cb0((long)auStack_340,0x280,str_100034a2);
  recovered_10002678((long)auStack_340,0x280,(uint)param_2[8],2);
  recovered_10001cb0((long)auStack_340,0x280,&DAT_1000310d);
  recovered_10002678((long)auStack_340,0x280,(uint)param_2[9],2);
  recovered_10001cb0((long)auStack_340,0x280,&DAT_1000310d);
  recovered_10002678((long)auStack_340,0x280,(uint)param_2[10],2);
  recovered_10001cb0((long)auStack_340,0x280,str_100034aa);
  recovered_10002678((long)auStack_340,0x280,(uint)param_2[0xb],2);
  for (lVar12 = 0; lVar12 != 6; lVar12 = lVar12 + 1) {
    uVar11 = *(uint *)(param_2 + lVar12 * 4 + 0x14);
    if (uVar11 != 0) {
      recovered_10001cb0((long)auStack_340,0x280,(char *)((uintptr_t)pf_module_state + 0x479U));
      recovered_10001d14((long)auStack_340,0x280,(uint)lVar12);
      recovered_10001cb0((long)auStack_340,0x280,&DAT_10003282);
      recovered_10002678((long)auStack_340,0x280,uVar11,8);
    }
  }
  if (acStack_5cc[0] != '\0') {
    recovered_10001cb0((long)auStack_340,0x280,&DAT_10003280);
    recovered_10001cb0((long)auStack_340,0x280,acStack_5cc);
  }
  if (((param_1 != (int *)0x0) && (param_1[3] != 0)) &&
     (iVar7 = (*(code *)(ulong)(uint)param_1[3])(auStack_c0,pcVar10,auStack_340), iVar7 != 0)) {
    param_3[1] = param_3[1] + 1;
  }
  return 1;
}

#undef DAT_1000310d
#undef DAT_100031f5
#undef DAT_10003280
#undef DAT_10003282
#undef DAT_10003479
#undef DAT_10003487
#undef DAT_1000348b
#undef str_100030e3
#undef str_100031dc
#undef str_100031e5
#undef str_100031ed
#undef str_100031f9
#undef str_10003205
#undef str_1000320c
#undef str_1000328f
#undef str_10003295
#undef str_100032a9
#undef str_100032b0
#undef str_100032d4
#undef str_100032ea
#undef str_100032f3
#undef str_10003303
#undef str_10003317
#undef str_1000332f
#undef str_10003347
#undef str_10003360
#undef str_10003371
#undef str_10003381
#undef str_10003390
#undef str_100033a6
#undef str_100033af
#undef str_100033b7
#undef str_100033bf
#undef str_100033c9
#undef str_100033d5
#undef str_100033ea
#undef str_100033f2
#undef str_100033fa
#undef str_10003402
#undef str_1000340e
#undef str_10003427
#undef str_1000342d
#undef str_10003435
#undef str_1000343d
#undef str_10003457
#undef str_1000345f
#undef str_10003467
#undef str_1000346f
#undef str_1000347e
#undef str_10003490
#undef str_10003499
#undef str_100034a2
#undef str_100034aa
#undef acStack_5cc
#undef uStack_34c
#undef uStack_348
#undef auStack_340
#undef auStack_c0

#undef DAT_100031f5
#define DAT_100031f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_10003487
#define DAT_10003487 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44bU)))
#undef DAT_1000362d
#define DAT_1000362d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f1U)))
#undef DAT_10003631
#define DAT_10003631 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f5U)))
#undef DAT_1000363c
#define DAT_1000363c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x600U)))
#undef DAT_10003641
#define DAT_10003641 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x605U)))
#undef DAT_10003645
#define DAT_10003645 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x609U)))
#undef DAT_1000366a
#define DAT_1000366a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62eU)))
#undef DAT_1000366f
#define DAT_1000366f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633U)))
#undef DAT_10003674
#define DAT_10003674 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x638U)))
#undef DAT_10003678
#define DAT_10003678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63cU)))
#undef DAT_1000368b
#define DAT_1000368b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64fU)))
#undef DAT_10003690
#define DAT_10003690 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x654U)))
#undef DAT_100036bc
#define DAT_100036bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x680U)))
#undef DAT_10003744
#define DAT_10003744 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x708U)))
#undef str_100031dc
#define str_100031dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_100031e5
#define str_100031e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_100031ed
#define str_100031ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_100031ff
#define str_100031ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10003205
#define str_10003205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_1000320c
#define str_1000320c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_100032a9
#define str_100032a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26dU)))
#undef str_100035f7
#define str_100035f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bbU)))
#undef str_10003612
#define str_10003612 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d6U)))
#undef str_1000361a
#define str_1000361a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5deU)))
#undef str_10003621
#define str_10003621 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_10003636
#define str_10003636 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5faU)))
#undef str_1000364a
#define str_1000364a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60eU)))
#undef str_10003653
#define str_10003653 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x617U)))
#undef str_10003659
#define str_10003659 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_10003661
#define str_10003661 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x625U)))
#undef str_1000367d
#define str_1000367d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x641U)))
#undef str_10003695
#define str_10003695 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x659U)))
#undef str_1000369b
#define str_1000369b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65fU)))
#undef str_100036a6
#define str_100036a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_100036ad
#define str_100036ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x671U)))
#undef str_100036b3
#define str_100036b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x677U)))
#undef str_100036c1
#define str_100036c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef str_100036d1
#define str_100036d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x695U)))
#undef str_100036d8
#define str_100036d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69cU)))
#undef str_100036ef
#define str_100036ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b3U)))
#undef str_100036fa
#define str_100036fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6beU)))
#undef str_10003709
#define str_10003709 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cdU)))
#undef str_10003712
#define str_10003712 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d6U)))
#undef str_1000371b
#define str_1000371b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dfU)))
#undef str_10003731
#define str_10003731 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f5U)))
#undef str_10003738
#define str_10003738 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_10003749
#define str_10003749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70dU)))
#undef str_10003753
#define str_10003753 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x717U)))
#undef str_1000375f
#define str_1000375f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x723U)))
#define auStack_310 (*(undefined1 (*)[384])(frame + 16))
#define auStack_190 (*(undefined1 (*)[256])(frame + 400))
#define uStack_90 (*(uint *)(frame + 656))
#define auStack_8c (*(undefined1 (*)[8])(frame + 660))
#define uStack_84 (*(uint *)(frame + 668))
#define uStack_80 (*(uint *)(frame + 672))
#define uStack_7c (*(uint *)(frame + 676))
#define uStack_78 (*(uint *)(frame + 680))
#define uStack_74 (*(uint *)(frame + 684))
#define uStack_70 (*(uint *)(frame + 688))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001798
 */

undefined8 recovered_10001798(int *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[832] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint *puVar6;

  bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003612);
  if ((((bVar2) || (bVar2 = recovered_1000212c((long)param_2,(byte *)str_1000361a), bVar2)) ||
      (bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003621), bVar2)) ||
     (bVar2 = recovered_1000212c((long)param_2,&DAT_1000362d), bVar2)) {
    pcVar5 = str_100031dc;
  }
  else {
    bVar2 = recovered_1000212c((long)param_2,&DAT_10003631);
    if ((bVar2) || (bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003636), bVar2)) {
      pcVar5 = str_100031e5;
    }
    else {
      pcVar5 = str_100031e5;
      bVar2 = recovered_1000212c((long)param_2,(byte *)str_100031e5);
      if (((!bVar2) && (bVar2 = recovered_1000212c((long)param_2,&DAT_1000363c), !bVar2)) &&
         ((bVar2 = recovered_1000212c((long)param_2,&DAT_10003641), !bVar2 &&
          (bVar2 = recovered_1000212c((long)param_2,&DAT_10003645), !bVar2)))) {
        bVar2 = recovered_1000212c((long)param_2,(byte *)str_1000364a);
        if (((bVar2) || (bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003653), bVar2)) ||
           (bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003659), bVar2)) {
          pcVar5 = str_100031ff;
        }
        else {
          pcVar5 = str_100031ff;
          bVar2 = recovered_1000212c((long)param_2,(byte *)str_100031ff);
          if (!bVar2) {
            pcVar5 = &DAT_100031f5;
            bVar2 = recovered_1000212c((long)param_2,&DAT_100031f5);
            if (!bVar2) {
              bVar2 = recovered_1000212c((long)param_2,(byte *)str_10003661);
              pcVar5 = str_100031ed;
              if (((!bVar2) &&
                  (bVar2 = recovered_1000212c((long)param_2,(byte *)str_100031ed), !bVar2)) &&
                 (bVar2 = recovered_1000212c((long)param_2,&DAT_1000366a), !bVar2)) {
                pcVar5 = str_1000320c;
                bVar2 = recovered_1000212c((long)param_2,(byte *)str_1000320c);
                if ((!bVar2) && (bVar2 = recovered_1000212c((long)param_2,&DAT_1000366f), !bVar2)) {
                  bVar2 = recovered_1000212c((long)param_2,&DAT_10003674);
                  pcVar5 = str_10003205;
                  if (!bVar2) {
                    bVar2 = recovered_1000212c((long)param_2,&DAT_10003678);
                    pcVar5 = (char *)0x0;
                    if (bVar2) {
                      pcVar5 = str_10003205;
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
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  if ((byte *)pcVar5 == (byte *)0x0) {
    return 0;
  }
  recovered_1000232c(param_4,(long)pcVar5);
  recovered_10001d04(auStack_190,0x100,str_100035f7);
  puVar6 = param_2 + 9;
  if ((char)*puVar6 == '\0') {
    recovered_10001cb0((long)auStack_190,0x100,str_100036d1);
    recovered_10002678((long)auStack_190,0x100,*param_2,8);
  }
  else {
    if ((char)*puVar6 != '/') {
      recovered_10001cb0((long)auStack_190,0x100,&DAT_10003487);
    }
    recovered_10001cb0((long)auStack_190,0x100,(char *)puVar6);
  }
  recovered_10001d04(auStack_310,0x180,str_1000367d);
  recovered_10002678((long)auStack_310,0x180,*param_2,8);
  recovered_1000228c((long)auStack_310,0x180,&DAT_1000368b,(char *)puVar6);
  puVar6 = param_2 + 0x41;
  recovered_1000228c((long)auStack_310,0x180,&DAT_10003690,(char *)puVar6);
  puVar1 = param_2 + 0x51;
  recovered_1000228c((long)auStack_310,0x180,str_10003695,(char *)puVar1);
  recovered_1000228c((long)auStack_310,0x180,str_1000369b,(char *)(param_2 + 0x69));
  if (((byte)param_2[4] >> 4 & 1) != 0) {
    recovered_10002760((long)auStack_310,0x180,str_100036a6,param_2[5]);
    recovered_10002760((long)auStack_310,0x180,str_100032a9,param_2[6]);
    recovered_10002760((long)auStack_310,0x180,str_100036ad,param_2[7]);
    recovered_10002760((long)auStack_310,0x180,str_100036b3,param_2[8]);
  }
  recovered_1000228c((long)auStack_310,0x180,&DAT_100036bc,pcVar5);
  uStack_90 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0xa0)) ||
     ((param_1[0x27] == 0 ||
      (iVar3 = (*(code *)(ulong)(uint)param_1[0x27])(*param_2,0,auStack_8c), iVar3 == 0)))) {
    pcVar5 = str_100036d8;
  }
  else {
    recovered_10002760((long)auStack_310,0x180,str_100036ef,uStack_80);
    recovered_10002760((long)auStack_310,0x180,str_100036fa,uStack_7c);
    recovered_10002760((long)auStack_310,0x180,str_10003709,uStack_78);
    recovered_10002760((long)auStack_310,0x180,str_10003712,uStack_84);
    if ((uStack_84 >> 5 & 1) == 0) {
      pcVar5 = str_1000371b;
    }
    else {
      recovered_10002760((long)auStack_310,0x180,str_10003731,uStack_74);
      recovered_10002760((long)auStack_310,0x180,str_10003738,uStack_70);
      if ((3 < uStack_70) &&
         (uVar4 = recovered_10002810(param_1,(ulong)uStack_74,4,(long)&uStack_90), (int)uVar4 != 0))
      {
        recovered_10002760((long)auStack_310,0x180,&DAT_10003744,uStack_90);
      }
      bVar2 = recovered_10002198((byte *)pcVar5,&DAT_100031f5);
      if (((((bVar2) || (bVar2 = recovered_10002198((byte *)pcVar5,(byte *)str_100031e5), bVar2)) ||
           (bVar2 = recovered_10002198((byte *)pcVar5,(byte *)str_100031ed), bVar2)) ||
          (((bVar2 = recovered_10002198((byte *)pcVar5,(byte *)str_100031dc), bVar2 ||
            (bVar2 = recovered_10002198((byte *)pcVar5,(byte *)str_10003749), bVar2)) ||
           (bVar2 = recovered_10002198((byte *)pcVar5,(byte *)str_10003753), bVar2)))) &&
         (((*param_1 == 0x54584b57 && (0x7b < (uint)param_1[2])) && (param_1[0x1e] != 0)))) {
        (*(code *)(ulong)(uint)param_1[0x1e])();
      }
      pcVar5 = str_1000375f;
    }
  }
  recovered_10001cb0((long)auStack_310,0x180,pcVar5);
  if ((char)param_2[0x31] == '\0') {
    if (((char)*puVar6 == '\0') && (puVar6 = (uint *)str_100036c1, (char)*puVar1 != '\0')) {
      puVar6 = puVar1;
    }
  }
  else {
    puVar6 = param_2 + 0x31;
  }
  if (((param_1 != (int *)0x0) && (param_1[3] != 0)) &&
     (iVar3 = (*(code *)(ulong)(uint)param_1[3])(auStack_190,puVar6,auStack_310), iVar3 != 0)) {
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
  }
  return 1;
}

#undef DAT_100031f5
#undef DAT_10003487
#undef DAT_1000362d
#undef DAT_10003631
#undef DAT_1000363c
#undef DAT_10003641
#undef DAT_10003645
#undef DAT_1000366a
#undef DAT_1000366f
#undef DAT_10003674
#undef DAT_10003678
#undef DAT_1000368b
#undef DAT_10003690
#undef DAT_100036bc
#undef DAT_10003744
#undef str_100031dc
#undef str_100031e5
#undef str_100031ed
#undef str_100031ff
#undef str_10003205
#undef str_1000320c
#undef str_100032a9
#undef str_100035f7
#undef str_10003612
#undef str_1000361a
#undef str_10003621
#undef str_10003636
#undef str_1000364a
#undef str_10003653
#undef str_10003659
#undef str_10003661
#undef str_1000367d
#undef str_10003695
#undef str_1000369b
#undef str_100036a6
#undef str_100036ad
#undef str_100036b3
#undef str_100036c1
#undef str_100036d1
#undef str_100036d8
#undef str_100036ef
#undef str_100036fa
#undef str_10003709
#undef str_10003712
#undef str_1000371b
#undef str_10003731
#undef str_10003738
#undef str_10003749
#undef str_10003753
#undef str_1000375f
#undef auStack_310
#undef auStack_190
#undef uStack_90
#undef auStack_8c
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef uStack_78
#undef uStack_74
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb0
 */

void recovered_10001cb0(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001e04(param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d04
 */

void recovered_10001d04(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001e04((long)param_1);
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


#define local_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d14
 */

void recovered_10001d14(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001e04(param_1);
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
    recovered_10001dc4(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc4
 */

void recovered_10001dc4(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001e04(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e04
 */

long recovered_10001e04(long param_1)

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


#define uStack_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e20
 */

undefined8
recovered_10001e20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001f6c(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001f6c(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001f6c(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001f6c(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001f6c(param_1,param_2,param_3,param_4,
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
 * Address: 0x10001f6c
 */

undefined8
recovered_10001f6c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb8
 */

void recovered_10001fb8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (*(int *)(param_1 + 0x44) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x3c) == 0) goto LAB_10001ff0;
    }
    else {
      if ((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x3c) != 0)) goto LAB_10001fc0;
LAB_10001ff0:
      uVar1 = (uint)(*(int *)(param_1 + 0x40) != 0);
      if ((*(int *)(param_1 + 0x48) != 0) || (*(int *)(param_1 + 0x40) == 0)) goto LAB_10001fc4;
    }
    uVar1 = (uint)(*(int *)(param_1 + 0x4c) != 0);
  }
  else {
LAB_10001fc0:
    uVar1 = 1;
  }
LAB_10001fc4:
  *(uint *)(param_1 + 0x50) = uVar1;
  return;
}


#define local_2bc (*(uint *)(frame + 36))
#define local_2b8 (*(uint *)(frame + 40))
#define auStack_2c4 (*(undefined1 (*)[8])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002014
 */

int recovered_10002014(int *param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                      undefined8 param_5)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  if (((int)param_3 == 0) || (param_4 == (undefined *)0x0)) {
    return 0;
  }
  iVar3 = 0;
LAB_10002064:
  if ((int)param_2 == 0) {
    return iVar3;
  }
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    uVar2 = param_1[2];
    if (0x9b < uVar2) {
      if (param_1[0x26] == 0) goto LAB_100020e8;
      iVar1 = (*(code *)(ulong)(uint)param_1[0x26])(param_2,auStack_2c4);
      if (iVar1 == 0) {
        if (*param_1 != 0x54584b57) goto LAB_10002114;
        uVar2 = param_1[2];
        goto LAB_10002084;
      }
      iVar3 = iVar3 + 1;
      (*(code *)param_4)(param_1,auStack_2c4,param_3,param_5);
      if (local_2bc != 0) {
        iVar1 = recovered_10002014(param_1,(ulong)local_2bc,(ulong)((int)param_3 - 1),param_4,
                                   param_5);
        iVar3 = iVar1 + iVar3;
      }
      param_2 = (ulong)local_2b8;
      goto LAB_10002064;
    }
LAB_10002084:
    if (uVar2 < 0x8c) goto LAB_10002114;
LAB_100020e8:
    if (param_1[0x22] != 0) {
      param_2 = (*(code *)(ulong)(uint)param_1[0x22])(param_2);
      goto LAB_10002064;
    }
  }
LAB_10002114:
  param_2 = 0;
  goto LAB_10002064;
}

#undef local_2bc
#undef local_2b8
#undef auStack_2c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000212c
 */

bool recovered_1000212c(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = recovered_10002198((byte *)(param_1 + 0x24),param_2);
    if ((((bVar1) || (bVar1 = recovered_10002198((byte *)(param_1 + 0xc4),param_2), bVar1)) ||
        (bVar1 = recovered_10002198((byte *)(param_1 + 0x104),param_2), bVar1)) ||
       (bVar1 = recovered_10002198((byte *)(param_1 + 0x144),param_2), bVar1)) {
      bVar1 = true;
    }
    else {
      bVar1 = recovered_10002198((byte *)(param_1 + 0x1a4),param_2);
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002198
 */

bool recovered_10002198(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;

  bVar4 = false;
  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (bVar4 = false, *param_2 != 0)) {
    pbVar5 = param_1;
    do {
      pbVar5 = pbVar5 + 1;
      bVar2 = *param_1;
      if (bVar2 == 0) break;
      pbVar6 = pbVar5;
      pbVar7 = param_2;
      bVar3 = bVar2;
      while( true ) {
        uVar9 = (uint)bVar3;
        bVar3 = *pbVar7;
        uVar8 = (uint)bVar3;
        if (uVar9 == 0) break;
        if (bVar3 == 0) {
          return true;
        }
        uVar1 = uVar9 + 0x20;
        if (0x19 < uVar9 - 0x41) {
          uVar1 = uVar9;
        }
        uVar9 = uVar8 + 0x20;
        if (0x19 < bVar3 - 0x41U) {
          uVar9 = uVar8;
        }
        if (uVar1 != uVar9) break;
        pbVar7 = pbVar7 + 1;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      }
      param_1 = param_1 + 1;
    } while (uVar8 != 0);
    bVar4 = bVar2 != 0;
  }
  return bVar4;
}


#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002228
 */

void recovered_10002228(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001cb0(param_1,0x300,&DAT_10003280);
  recovered_10001cb0(param_1,0x300,param_2);
  recovered_10001cb0(param_1,0x300,&DAT_10003282);
  if (param_3 == 0) {
    lVar1 = recovered_10001e04(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < 0x300)) {
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
    recovered_10001dc4(param_1,0x300,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_10003280
#undef DAT_10003282
#undef abStack_3b

#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000228c
 */

void recovered_1000228c(long param_1,ulong param_2,char *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    return;
  }
  recovered_10001cb0(param_1,param_2,&DAT_10003280);
  recovered_10001cb0(param_1,param_2,param_3);
  recovered_10001cb0(param_1,param_2,&DAT_10003282);
  uVar1 = recovered_10001e04(param_1);
  if ((param_1 != 0) && (param_4 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_4 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_4;
      pcVar2 = pcVar2 + 1;
      param_4 = param_4 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10003280
#undef DAT_10003282

#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
#undef DAT_10003284
#define DAT_10003284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef str_10003289
#define str_10003289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002304
 */

void recovered_10002304(long param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar3 = str_10003289;
  if (param_3 != 0) {
    pcVar3 = &DAT_10003284;
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    return;
  }
  recovered_10001cb0(param_1,0x300,&DAT_10003280);
  recovered_10001cb0(param_1,0x300,param_2);
  recovered_10001cb0(param_1,0x300,&DAT_10003282);
  uVar1 = recovered_10001e04(param_1);
  if ((param_1 != 0) && (pcVar3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*pcVar3 == '\0' || 0x2ff < uVar1) break;
      *pcVar2 = *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}

#undef DAT_10003280
#undef DAT_10003282
#undef DAT_10003284
#undef str_10003289

#undef DAT_100031f5
#define DAT_100031f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef str_100031dc
#define str_100031dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a0U)))
#undef str_100031e5
#define str_100031e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_100031ed
#define str_100031ed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_100031f9
#define str_100031f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bdU)))
#undef str_100031ff
#define str_100031ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c3U)))
#undef str_10003205
#define str_10003205 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c9U)))
#undef str_1000320c
#define str_1000320c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000232c
 */

void recovered_1000232c(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  if (param_2 != 0) {
    bVar1 = recovered_10002198((byte *)param_2,(byte *)str_100031dc);
    if (bVar1) {
      lVar2 = 0x10;
    }
    else {
      bVar1 = recovered_10002198((byte *)param_2,(byte *)str_100031e5);
      if (bVar1) {
        lVar2 = 0x14;
      }
      else {
        bVar1 = recovered_10002198((byte *)param_2,(byte *)str_100031ed);
        if (bVar1) {
          lVar2 = 0x18;
        }
        else {
          bVar1 = recovered_10002198((byte *)param_2,&DAT_100031f5);
          if (bVar1) {
            lVar2 = 0x1c;
          }
          else {
            bVar1 = recovered_10002198((byte *)param_2,(byte *)str_100031f9);
            if (bVar1) {
              lVar2 = 0x20;
            }
            else {
              bVar1 = recovered_10002198((byte *)param_2,(byte *)str_100031ff);
              if (bVar1) {
                lVar2 = 0x24;
              }
              else {
                bVar1 = recovered_10002198((byte *)param_2,(byte *)str_10003205);
                if (bVar1) {
                  lVar2 = 0x28;
                }
                else {
                  bVar1 = recovered_10002198((byte *)param_2,(byte *)str_1000320c);
                  lVar2 = 0x30;
                  if (bVar1) {
                    lVar2 = 0x2c;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(int *)(param_1 + lVar2) = *(int *)(param_1 + lVar2) + 1;
  }
  return;
}

#undef DAT_100031f5
#undef str_100031dc
#undef str_100031e5
#undef str_100031ed
#undef str_100031f9
#undef str_100031ff
#undef str_10003205
#undef str_1000320c

#undef DAT_100034c5
#define DAT_100034c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x489U)))
#undef DAT_100034ca
#define DAT_100034ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48eU)))
#undef DAT_100035c0
#define DAT_100035c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x584U)))
#undef DAT_100035c5
#define DAT_100035c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x589U)))
#undef DAT_100035ca
#define DAT_100035ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58eU)))
#undef DAT_100035cf
#define DAT_100035cf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x593U)))
#undef PTR_str_10003585_10004020
#define PTR_str_10003585_10004020 (*(char * *)(((uintptr_t)pf_module_state + 0xfe4U)))
#undef str_100034ba
#define str_100034ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47eU)))
#undef str_100034ce
#define str_100034ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x492U)))
#undef str_100034dd
#define str_100034dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a1U)))
#undef str_100034e8
#define str_100034e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4acU)))
#undef str_100034f6
#define str_100034f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_10003508
#define str_10003508 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ccU)))
#undef str_10003512
#define str_10003512 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d6U)))
#undef str_1000351e
#define str_1000351e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e2U)))
#undef str_10003528
#define str_10003528 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ecU)))
#undef str_10003539
#define str_10003539 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fdU)))
#undef str_10003547
#define str_10003547 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50bU)))
#undef str_10003550
#define str_10003550 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x514U)))
#undef str_100035d4
#define str_100035d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_100035df
#define str_100035df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a3U)))
#undef str_100035e8
#define str_100035e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002420
 */

char * recovered_10002420(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;

  bVar1 = *(byte *)(param_1 + 8);
  uVar5 = (uint)bVar1;
  if (bVar1 == 0xc) {
    if (*(char *)(param_1 + 9) == '\x03') {
      cVar2 = *(char *)(param_1 + 10);
      if (cVar2 == '\0') {
        return &DAT_100035c0;
      }
      pcVar6 = str_100035e8;
      if (cVar2 == '\x10') {
        pcVar6 = &DAT_100035c5;
      }
      pcVar7 = str_100035d4;
      if (cVar2 != -0x80) {
        pcVar7 = pcVar6;
      }
      pcVar6 = &DAT_100035cf;
      if (cVar2 != '0') {
        pcVar6 = pcVar7;
      }
      pcVar7 = &DAT_100035ca;
      if (cVar2 != ' ') {
        pcVar7 = pcVar6;
      }
      pcVar6 = str_100035df;
      if (cVar2 != -2) {
        pcVar6 = pcVar7;
      }
      return pcVar6;
    }
  }
  else if (bVar1 == 4) {
    if (*(char *)(param_1 + 9) == '\x03') {
      return &DAT_100034ca;
    }
  }
  else if ((uVar5 == 1) && (*(char *)(param_1 + 9) == '\x06')) {
    return &DAT_100034c5;
  }
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x106b) {
    return str_10003550;
  }
  if (sVar3 == -0x7f7a) {
    if (uVar5 == 3) {
      return str_100034e8;
    }
    if (uVar5 != 6) {
      if ((uVar5 == 0xc) && (*(char *)(param_1 + 9) == '\x05')) {
        return str_10003512;
      }
      return str_1000351e;
    }
    pcVar6 = str_10003508;
    if (*(char *)(param_1 + 9) != '\x01') {
      pcVar6 = str_1000351e;
    }
    pcVar7 = str_100034f6;
    bVar4 = *(char *)(param_1 + 9) == '\0';
  }
  else {
    if (sVar3 == 0x1180) {
      return str_10003547;
    }
    if (sVar3 == 0x11ab) {
      return str_10003539;
    }
    if (sVar3 == 0x14e4) {
      return str_10003528;
    }
    if (sVar3 != 0x10de) {
      if (uVar5 - 1 < 6) {
        return (&PTR_str_10003585_10004020)[(ulong)(uVar5 - 1) & 0xff];
      }
      return str_100034ba;
    }
    pcVar6 = str_100034dd;
    pcVar7 = str_100034ce;
    bVar4 = uVar5 == 3;
  }
  if (!bVar4) {
    pcVar7 = pcVar6;
  }
  return pcVar7;
}

#undef DAT_100034c5
#undef DAT_100034ca
#undef DAT_100035c0
#undef DAT_100035c5
#undef DAT_100035ca
#undef DAT_100035cf
#undef PTR_str_10003585_10004020
#undef str_100034ba
#undef str_100034ce
#undef str_100034dd
#undef str_100034e8
#undef str_100034f6
#undef str_10003508
#undef str_10003512
#undef str_1000351e
#undef str_10003528
#undef str_10003539
#undef str_10003547
#undef str_10003550
#undef str_100035d4
#undef str_100035df
#undef str_100035e8

#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002620
 */

void recovered_10002620(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001cb0(param_1,0x280,&DAT_10003280);
  recovered_10001cb0(param_1,0x280,param_2);
  recovered_10001cb0(param_1,0x280,&DAT_10003282);
  iVar4 = 4;
  uVar5 = 0xc;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001dc4(param_1,0x280,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_10003280
#undef DAT_10003282

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002678
 */

void recovered_10002678(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001dc4(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026ec
 */

undefined8 recovered_100026ec(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  uint uVar3;

  if (param_4 != (undefined4 *)0x0) {
    uVar3 = *(uint *)(param_2 + 0x14 + (param_3 & 0xffffffff) * 4);
    if ((uVar3 != 0) && ((uVar3 & 1) == 0)) {
      *param_4 = 0;
      uVar1 = *(uint *)(param_2 + 0x14 + (param_3 & 0xffffffff) * 4);
      uVar3 = 0xfffffff0;
      if ((uVar1 & 1) != 0) {
        uVar3 = 0xfffffffc;
      }
      if ((((param_1 != (int *)0x0) && (uVar3 = uVar3 & uVar1, uVar3 != 0)) &&
          (*param_1 == 0x54584b57)) && ((0x67 < (uint)param_1[2] && (param_1[0x19] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
        return uVar2;
      }
    }
  }
  return 0;
}


#undef DAT_10003280
#define DAT_10003280 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_10003282
#define DAT_10003282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

void recovered_10002760(long param_1,ulong param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001cb0(param_1,param_2,&DAT_10003280);
  recovered_10001cb0(param_1,param_2,param_3);
  recovered_10001cb0(param_1,param_2,&DAT_10003282);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_4 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001dc4(param_1,param_2,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_10003280
#undef DAT_10003282

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b8
 */

undefined8 recovered_100027b8(int *param_1,int param_2,int param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x6c)) ||
     ((param_4 == 0 || (param_1[0x1a] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000284c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_3 + param_2,4,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d0
 */

void recovered_100027d0(int *param_1,int param_2,int param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x70 || (param_1[0x1b] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1b])(param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

undefined8 recovered_10002810(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x6c)) ||
     ((param_4 == 0 || (param_1[0x1a] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000284c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002850
 */

void recovered_10002850(int *param_1,undefined8 param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x58)) ||
     ((param_3 == 0 || (param_1[0x15] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x15])(param_2,2);
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4fc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000288c
 */

undefined8 recovered_1000288c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((DAT_10008000 == 0) || (param_1 == 0)) || (*(uint *)(DAT_10008000 + 0x24) == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100028a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)*(uint *)(DAT_10008000 + 0x24))(param_1);
  return uVar1;
}

#undef DAT_10008000

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x4fc4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028ac
 */

undefined8 recovered_100028ac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_10008000 == (int *)0x0) || (*DAT_10008000 != 0x54584b57)) ||
      ((uint)DAT_10008000[2] < 0xac)) || (DAT_10008000[0x2a] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100028e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_10008000[0x2a])();
  return uVar1;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e8
 */

bool recovered_100028e8(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  int *piVar32;
  uint *puVar33;
  ulong uVar34;

  bVar7 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar33 = (uint *)(param_1 + 0x54);
    uVar28 = (ulong)param_2;
    for (uVar34 = 0; uVar34 != uVar28; uVar34 = uVar34 + 1) {
      piVar32 = (int *)(param_1 + uVar34 * 0x70);
      iVar15 = *piVar32;
      if (iVar15 == 3) {
        uVar11 = piVar32[0xe];
        bVar7 = recovered_10002d08(piVar32 + 2);
        if (!bVar7) goto LAB_10002bac;
        uVar19 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        lVar22 = 2;
        uVar11 = piVar32[0x10];
        uVar13 = piVar32[0x11];
        puVar25 = puVar33;
        uVar31 = uVar11;
        uVar27 = uVar11;
        uVar26 = uVar13;
        uVar29 = uVar13;
        do {
          uVar3 = puVar25[-1];
          uVar4 = *puVar25;
          uVar1 = uVar3;
          if ((int)uVar27 <= (int)uVar3) {
            uVar1 = uVar27;
          }
          uVar2 = uVar4;
          if ((int)uVar29 <= (int)uVar4) {
            uVar2 = uVar29;
          }
          if ((int)uVar3 <= (int)uVar31) {
            uVar3 = uVar31;
          }
          if ((int)uVar4 <= (int)uVar26) {
            uVar4 = uVar26;
          }
          puVar25 = puVar25 + 4;
          lVar22 = lVar22 + -1;
          uVar31 = uVar3;
          uVar27 = uVar1;
          uVar26 = uVar4;
          uVar29 = uVar2;
        } while (lVar22 != 0);
        if ((((-1 < (int)uVar3) && (-1 < (int)uVar4)) && (iVar15 = piVar32[5], (int)uVar1 < iVar15))
           && (iVar17 = piVar32[6], (int)uVar2 < iVar17)) {
          piVar23 = piVar32 + 0x18;
          iVar6 = *piVar23;
          piVar12 = piVar32 + 0x14;
          iVar5 = piVar32[0x19];
          lVar22 = recovered_10002d84(piVar32 + 0x10,piVar12,iVar6,iVar5);
          if (lVar22 != 0) {
            if (iVar17 <= (int)uVar4) {
              uVar4 = iVar17 - 1;
            }
            if (iVar15 <= (int)uVar3) {
              uVar3 = iVar15 - 1;
            }
            uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
            iVar15 = piVar32[0x14];
            iVar17 = piVar32[0x15];
            uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
            uVar30 = (ulong)uVar2;
            lVar9 = recovered_10002d84(piVar12,piVar23,uVar1,uVar2);
            lVar10 = recovered_10002d84(piVar23,piVar32 + 0x10,uVar1,uVar2);
            lVar22 = recovered_10002d84(piVar32 + 0x10,piVar12,uVar1,uVar2);
            if (piVar32[2] == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = CONCAT44(piVar32[3],piVar32[2]);
            }
            for (; (long)uVar30 <= (long)(int)uVar4; uVar30 = uVar30 + 1) {
              lVar14 = lVar24 + (ulong)uVar1 * 4 + 1 + uVar30 * (uint)piVar32[7];
              lVar18 = lVar9;
              lVar20 = lVar10;
              lVar21 = lVar22;
              for (uVar16 = (ulong)uVar1; (long)uVar16 <= (long)(int)uVar3; uVar16 = uVar16 + 1) {
                if (((((-1 < lVar18) && (-1 < lVar20)) && (-1 < lVar21)) ||
                    ((lVar18 < 1 && lVar20 < 1) && lVar21 < 1)) && (lVar24 != 0)) {
                  *(uint *)(lVar14 + -1) = uVar19 >> 0x10 | uVar19 << 0x10;
                }
                lVar18 = lVar18 + (iVar5 - iVar17);
                lVar20 = lVar20 + (int)(uVar13 - iVar5);
                lVar21 = lVar21 + (int)(iVar17 - uVar13);
                lVar14 = lVar14 + 4;
              }
              lVar9 = lVar9 - (iVar6 - iVar15);
              lVar10 = lVar10 - (int)(uVar11 - iVar6);
              lVar22 = lVar22 - (int)(iVar15 - uVar11);
            }
          }
        }
      }
      else {
        if (iVar15 == 2) {
          uVar11 = piVar32[10];
          uVar13 = piVar32[0xb];
          iVar15 = piVar32[0xc];
          iVar17 = piVar32[0xd];
          uVar19 = piVar32[0xe];
        }
        else {
          if (iVar15 != 1) goto LAB_10002bac;
          iVar15 = piVar32[5];
          iVar17 = piVar32[6];
          uVar19 = piVar32[0xe];
          uVar11 = 0;
          uVar13 = 0;
        }
        uVar8 = recovered_10002bd4(piVar32 + 2,uVar11,uVar13,iVar15,iVar17,uVar19);
        if ((int)uVar8 == 0) {
          goto LAB_10002bac;
        }
      }
      puVar33 = puVar33 + 0x1c;
    }
    uVar34 = uVar28;
LAB_10002bac:
    bVar7 = uVar28 <= uVar34;
  }
  return bVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd4
 */

undefined8
recovered_10002bd4(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;

  bVar7 = recovered_10002d08(param_1);
  uVar8 = 0;
  if ((0 < param_5 && 0 < param_4) && (bVar7)) {
    iVar1 = param_4 + param_2;
    iVar2 = param_5 + param_3;
    if ((0 < iVar1 && 0 < iVar2) &&
       ((iVar3 = param_1[3], (int)param_2 < iVar3 && (iVar4 = param_1[4], (int)param_3 < iVar4)))) {
      uVar6 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
      if (iVar3 <= iVar1) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      uVar12 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
      lVar9 = recovered_10002d54(param_1);
      for (uVar13 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
          (long)uVar13 < (long)iVar2; uVar13 = uVar13 + 1) {
        uVar5 = param_1[5];
        puVar11 = (uint *)(lVar9 + uVar12 * 4 + uVar13 * uVar5);
        uVar10 = uVar12;
        if (((ulong)puVar11 & 3) == 0) {
          for (; (int)uVar10 < iVar1; uVar10 = uVar10 + 1) {
            *(uint *)(lVar9 + uVar13 * uVar5 + uVar10 * 4) = uVar6 >> 0x10 | uVar6 << 0x10;
          }
        }
        else {
          for (; (int)uVar10 < iVar1; uVar10 = (ulong)((int)uVar10 + 1)) {
            recovered_10002d74(puVar11,param_6);
            puVar11 = puVar11 + 1;
          }
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d08
 */

bool recovered_10002d08(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if ((((param_1[6] != 1 || param_1[3] == 0) || param_1[4] == 0) ||
         (ulong)(uint)param_1[5] < (ulong)(uint)param_1[3] * 4) ||
       ((param_1[2] != 0 &&
        ((ulong)(uint)param_1[2] < (ulong)(uint)param_1[4] * (ulong)(uint)param_1[5])))) {
      return false;
    }
    bVar1 = *param_1 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d54
 */

undefined8 recovered_10002d54(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      return 0;
    }
    uVar1 = CONCAT44(param_1[1],*param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d74
 */

void recovered_10002d74(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0) {
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d84
 */

long recovered_10002d84(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
