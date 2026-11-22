/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Pooka's Free Software License. Native descriptor address. */
void *recovered_10000ac0(void){return pf_module_state+0x46c8;}


#undef DAT_10000afc
#define DAT_10000afc (*(int *)(0x10000afcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad0
 */

undefined4 recovered_10000ad0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((*(int *)(((uintptr_t)pf_module_state + 0x6dcU)) == 0 || param_1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(((uintptr_t)pf_module_state + 0x6dcU)) + 0x24),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}

#undef DAT_10000afc

#undef DAT_10000b44
#define DAT_10000b44 (*(int *)(0x10000b44U))
#undef DAT_10000b48
#define DAT_10000b48 (*(int *)(0x10000b48U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b00
 */

undefined4 recovered_10000b00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;

  piVar1 = *(int **)(((uintptr_t)pf_module_state + 0x6dcU));
  if ((((piVar1 == (int *)0x0) || (*piVar1 != (0x54584b57U))) || ((uint)piVar1[2] < 0xac)) ||
     ((code *)piVar1[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar1[0x2a])();
  return uVar2;
}

#undef DAT_10000b44
#undef DAT_10000b48

#undef DAT_10000dd4
#define DAT_10000dd4 (*(int *)(0x10000dd4U))
#undef DAT_10000dd8
#define DAT_10000dd8 (*(int *)(0x10000dd8U))
#undef DAT_10000ddc
#define DAT_10000ddc (*(int *)(0x10000ddcU))
#undef DAT_10000de0
#define DAT_10000de0 (*(int *)(0x10000de0U))
#undef DAT_10000de4
#define DAT_10000de4 (*(int *)(0x10000de4U))
#undef DAT_10000de8
#define DAT_10000de8 (*(int *)(0x10000de8U))
#undef DAT_10000dec
#define DAT_10000dec (*(int *)(0x10000decU))
#undef DAT_10000df0
#define DAT_10000df0 (*(int *)(0x10000df0U))
#undef DAT_10000df4
#define DAT_10000df4 (*(int *)(0x10000df4U))
#undef DAT_10000df8
#define DAT_10000df8 (*(int *)(0x10000df8U))
#undef DAT_10000dfc
#define DAT_10000dfc (*(int *)(0x10000dfcU))
#undef DAT_10000e00
#define DAT_10000e00 (*(int *)(0x10000e00U))
#undef DAT_10000e04
#define DAT_10000e04 (*(int *)(0x10000e04U))
#undef DAT_10000e08
#define DAT_10000e08 (*(int *)(0x10000e08U))
#undef DAT_10000e0c
#define DAT_10000e0c (*(int *)(0x10000e0cU))
#define auStack_480 (*(undefined1 (*)[1024])(frame + 16))
#define abStack_7c (*(byte (*)[44])(frame + 1044))
#define abStack_50 (*(byte (*)[12])(frame + 1088))
#define local_80 (*(uint *)(frame + 1040))
#define local_44 (*(char *)(frame + 1100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b4c
 */

int recovered_10000b4c(int *api)

{
  unsigned char frame[1200] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  iVar1 = (0x54584b57U);
  iVar3 = 0;
  local_80 = 0;
  if (((api != (int *)0x0) && (*api == (0x54584b57U))) && (0xf < (uint)api[2])) {
    *(int **)(((uintptr_t)pf_module_state + 0x6dcU)) = api;
    recovered_10000e10(auStack_480,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    recovered_10002618((int)auStack_480,0x60,(char *)(((uintptr_t)pf_module_state + 0xb7U)));
    recovered_1000266c((int)auStack_480,0x60,api[1]);
    recovered_10002618((int)auStack_480,0x60,(char *)(((uintptr_t)pf_module_state + 0xc6U)));
    if (((*api == iVar1) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(auStack_480);
    }
    recovered_10000e10(auStack_480,0x400,(char *)(((uintptr_t)pf_module_state + 0x38U)));
    recovered_10000e24((int)auStack_480,(char *)(((uintptr_t)pf_module_state + 0x57U)),3);
    iVar4 = ((uintptr_t)pf_module_state + 0xd1U);
    recovered_100027e0((int)auStack_480,(char *)(((uintptr_t)pf_module_state + 0x5dU)),iVar4);
    recovered_100027e0((int)auStack_480,(char *)(((uintptr_t)pf_module_state + 0x6dU)),iVar4);
    if (((code *)api[3] != (code *)0x0) &&
       (iVar4 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0xd7U),((uintptr_t)pf_module_state + 0x7eU),auStack_480),
       iVar4 != 0)) {
      uVar2 = 0;
      if ((*api == iVar1) && ((0x5f < (uint)api[2] && (api[0x17] != 0)))) {
        for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
          for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
            iVar1 = recovered_10002854(api,uVar2 & 0xff,uVar5 & 0xff,0,abStack_50);
            if ((iVar1 != 0) &&
               (recovered_10000e8c(api,abStack_50,(int *)&local_80), local_44 < '\0')) {
              for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
                iVar1 = recovered_10002854(api,uVar2 & 0xff,uVar5 & 0xff,uVar6 & 0xff,abStack_7c);
                if (iVar1 != 0) {
                  recovered_10000e8c(api,abStack_7c,(int *)&local_80);
                }
              }
            }
          }
        }
        uVar2 = local_80;
      }
      recovered_100025b4((int)auStack_480,(char *)(((uintptr_t)pf_module_state + 0x92U)),uVar2);
      iVar3 = 1;
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(((uintptr_t)pf_module_state + 0xd7U),((uintptr_t)pf_module_state + 0x7eU),auStack_480);
      }
    }
  }
  return iVar3;
}

#undef DAT_10000dd4
#undef DAT_10000dd8
#undef DAT_10000ddc
#undef DAT_10000de0
#undef DAT_10000de4
#undef DAT_10000de8
#undef DAT_10000dec
#undef DAT_10000df0
#undef DAT_10000df4
#undef DAT_10000df8
#undef DAT_10000dfc
#undef DAT_10000e00
#undef DAT_10000e04
#undef DAT_10000e08
#undef DAT_10000e0c
#undef auStack_480
#undef abStack_7c
#undef abStack_50
#undef local_80
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e10
 */

void recovered_10000e10(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002618((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10000e84
#define DAT_10000e84 (*(int *)(0x10000e84U))
#undef DAT_10000e88
#define DAT_10000e88 (*(int *)(0x10000e88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e24
 */

void recovered_10000e24(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
  recovered_10002618(param_1,0x400,param_2);
  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcfU)));
  recovered_10002780(param_1,0x400,param_3,8);
  return;
}

#undef DAT_10000e84
#undef DAT_10000e88

#undef DAT_10001e64
#define DAT_10001e64 (*(int *)(0x10001e64U))
#undef DAT_10001e68
#define DAT_10001e68 (*(int *)(0x10001e68U))
#undef DAT_10001f5c
#define DAT_10001f5c (*(int *)(0x10001f5cU))
#undef DAT_10001f6c
#define DAT_10001f6c (*(int *)(0x10001f6cU))
#undef DAT_10001f70
#define DAT_10001f70 (*(int *)(0x10001f70U))
#undef DAT_1000200c
#define DAT_1000200c (*(uint32_t *)(0x1000200cU))
#undef DAT_100020cc
#define DAT_100020cc (*(int *)(0x100020ccU))
#undef DAT_100020d0
#define DAT_100020d0 (*(int *)(0x100020d0U))
#undef DAT_100020d4
#define DAT_100020d4 (*(int *)(0x100020d4U))
#undef DAT_100020d8
#define DAT_100020d8 (*(int *)(0x100020d8U))
#undef DAT_100020dc
#define DAT_100020dc (*(int *)(0x100020dcU))
#undef DAT_100020e0
#define DAT_100020e0 (*(int *)(0x100020e0U))
#undef DAT_100020e4
#define DAT_100020e4 (*(int *)(0x100020e4U))
#undef DAT_100020e8
#define DAT_100020e8 (*(int *)(0x100020e8U))
#undef DAT_100020ec
#define DAT_100020ec (*(int *)(0x100020ecU))
#undef DAT_100020f0
#define DAT_100020f0 (*(int *)(0x100020f0U))
#undef DAT_10002430
#define DAT_10002430 (*(int *)(0x10002430U))
#undef DAT_10002434
#define DAT_10002434 (*(int *)(0x10002434U))
#undef DAT_100024a4
#define DAT_100024a4 (*(int *)(0x100024a4U))
#undef DAT_100024a8
#define DAT_100024a8 (*(int *)(0x100024a8U))
#undef DAT_100024ac
#define DAT_100024ac (*(int *)(0x100024acU))
#undef DAT_100024b0
#define DAT_100024b0 (*(int *)(0x100024b0U))
#undef DAT_100024b4
#define DAT_100024b4 (*(int *)(0x100024b4U))
#undef DAT_100024b8
#define DAT_100024b8 (*(int *)(0x100024b8U))
#undef DAT_100024bc
#define DAT_100024bc (*(int *)(0x100024bcU))
#undef DAT_100024c0
#define DAT_100024c0 (*(int *)(0x100024c0U))
#undef DAT_100024c4
#define DAT_100024c4 (*(int *)(0x100024c4U))
#undef DAT_100024c8
#define DAT_100024c8 (*(int *)(0x100024c8U))
#undef DAT_100024cc
#define DAT_100024cc (*(int *)(0x100024ccU))
#undef DAT_100024d0
#define DAT_100024d0 (*(int *)(0x100024d0U))
#undef DAT_100024d4
#define DAT_100024d4 (*(int *)(0x100024d4U))
#undef DAT_100024d8
#define DAT_100024d8 (*(int *)(0x100024d8U))
#undef DAT_100024dc
#define DAT_100024dc (*(int *)(0x100024dcU))
#undef DAT_100024e0
#define DAT_100024e0 (*(int *)(0x100024e0U))
#undef DAT_100024e4
#define DAT_100024e4 (*(int *)(0x100024e4U))
#undef DAT_100024e8
#define DAT_100024e8 (*(int *)(0x100024e8U))
#undef DAT_100024ec
#define DAT_100024ec (*(int *)(0x100024ecU))
#undef DAT_100024f0
#define DAT_100024f0 (*(int *)(0x100024f0U))
#undef DAT_100024f4
#define DAT_100024f4 (*(int *)(0x100024f4U))
#undef DAT_100024f8
#define DAT_100024f8 (*(int *)(0x100024f8U))
#undef DAT_100024fc
#define DAT_100024fc (*(int *)(0x100024fcU))
#undef DAT_10002500
#define DAT_10002500 (*(int *)(0x10002500U))
#undef DAT_10002504
#define DAT_10002504 (*(int *)(0x10002504U))
#undef DAT_10002508
#define DAT_10002508 (*(int *)(0x10002508U))
#undef DAT_1000250c
#define DAT_1000250c (*(int *)(0x1000250cU))
#undef DAT_10002510
#define DAT_10002510 (*(int *)(0x10002510U))
#undef DAT_10002514
#define DAT_10002514 (*(int *)(0x10002514U))
#undef DAT_10002518
#define DAT_10002518 (*(int *)(0x10002518U))
#undef DAT_1000251c
#define DAT_1000251c (*(int *)(0x1000251cU))
#undef DAT_10002520
#define DAT_10002520 (*(int *)(0x10002520U))
#undef DAT_10002524
#define DAT_10002524 (*(int *)(0x10002524U))
#undef DAT_10002528
#define DAT_10002528 (*(int *)(0x10002528U))
#undef DAT_1000252c
#define DAT_1000252c (*(int *)(0x1000252cU))
#undef DAT_10002530
#define DAT_10002530 (*(int *)(0x10002530U))
#undef DAT_10002534
#define DAT_10002534 (*(int *)(0x10002534U))
#undef DAT_10002538
#define DAT_10002538 (*(int *)(0x10002538U))
#undef DAT_1000253c
#define DAT_1000253c (*(int *)(0x1000253cU))
#undef DAT_10002540
#define DAT_10002540 (*(int *)(0x10002540U))
#undef DAT_10002544
#define DAT_10002544 (*(int *)(0x10002544U))
#undef DAT_10002548
#define DAT_10002548 (*(int *)(0x10002548U))
#undef DAT_1000254c
#define DAT_1000254c (*(int *)(0x1000254cU))
#undef DAT_10002550
#define DAT_10002550 (*(int *)(0x10002550U))
#undef DAT_10002554
#define DAT_10002554 (*(int *)(0x10002554U))
#undef DAT_10002558
#define DAT_10002558 (*(int *)(0x10002558U))
#undef DAT_1000255c
#define DAT_1000255c (*(int *)(0x1000255cU))
#undef DAT_10002560
#define DAT_10002560 (*(int *)(0x10002560U))
#undef DAT_10002564
#define DAT_10002564 (*(int *)(0x10002564U))
#undef DAT_10002568
#define DAT_10002568 (*(int *)(0x10002568U))
#undef DAT_1000256c
#define DAT_1000256c (*(int *)(0x1000256cU))
#undef DAT_10002570
#define DAT_10002570 (*(int *)(0x10002570U))
#undef DAT_10002574
#define DAT_10002574 (*(int *)(0x10002574U))
#undef DAT_10002578
#define DAT_10002578 (*(int *)(0x10002578U))
#undef DAT_1000257c
#define DAT_1000257c (*(int *)(0x1000257cU))
#undef DAT_10002580
#define DAT_10002580 (*(int *)(0x10002580U))
#undef DAT_10002584
#define DAT_10002584 (*(int *)(0x10002584U))
#undef DAT_10002588
#define DAT_10002588 (*(int *)(0x10002588U))
#undef DAT_1000258c
#define DAT_1000258c (*(int *)(0x1000258cU))
#undef DAT_10002590
#define DAT_10002590 (*(int *)(0x10002590U))
#undef DAT_10002594
#define DAT_10002594 (*(int *)(0x10002594U))
#undef DAT_10002598
#define DAT_10002598 (*(int *)(0x10002598U))
#undef DAT_1000259c
#define DAT_1000259c (*(int *)(0x1000259cU))
#undef DAT_100025a0
#define DAT_100025a0 (*(int *)(0x100025a0U))
#undef DAT_100025a4
#define DAT_100025a4 (*(int *)(0x100025a4U))
#undef DAT_100025a8
#define DAT_100025a8 (*(int *)(0x100025a8U))
#undef DAT_100025ac
#define DAT_100025ac (*(int *)(0x100025acU))
#undef DAT_100025b0
#define DAT_100025b0 (*(int *)(0x100025b0U))
#define local_8a4 (*(char (*)[1024])(frame + 28))
#define local_4a4 (*(uint *)(frame + 1052))
#define local_4a0 (*(uint *)(frame + 1056))
#define local_49c (*(uint *)(frame + 1060))
#define local_498 (*(uint *)(frame + 1064))
#define local_494 (*(uint *)(frame + 1068))
#define local_490 (*(uint *)(frame + 1072))
#define local_48c (*(uint *)(frame + 1076))
#define local_488 (*(uint *)(frame + 1080))
#define local_484 (*(uint *)(frame + 1084))
#define local_480 (*(uint *)(frame + 1088))
#define local_47c (*(uint *)(frame + 1092))
#define local_478 (*(uint *)(frame + 1096))
#define local_474 (*(uint *)(frame + 1100))
#define local_470 (*(uint *)(frame + 1104))
#define local_46c (*(uint *)(frame + 1108))
#define local_468 (*(uint *)(frame + 1112))
#define local_464 (*(uint *)(frame + 1116))
#define local_460 (*(uint *)(frame + 1120))
#define local_45c (*(uint *)(frame + 1124))
#define local_458 (*(uint *)(frame + 1128))
#define local_454 (*(uint *)(frame + 1132))
#define local_450 (*(uint *)(frame + 1136))
#define local_44c (*(uint *)(frame + 1140))
#define local_448 (*(uint *)(frame + 1144))
#define local_444 (*(uint *)(frame + 1148))
#define local_440 (*(uint *)(frame + 1152))
#define local_43c (*(uint *)(frame + 1156))
#define local_438 (*(uint *)(frame + 1160))
#define local_434 (*(uint *)(frame + 1164))
#define local_430 (*(uint (*)[235])(frame + 1168))
#define local_84 (*(uint (*)[25])(frame + 2108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e8c
 */

void recovered_10000e8c(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int iVar9;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  uint extraout_r1_05 = 0;
  uint extraout_r1_06 = 0;
  uint extraout_r1_07 = 0;
  uint extraout_r1_08 = 0;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 uVar10;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  code *extraout_r3_09;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *pcVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  bool bVar17;

  if ((((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
      (*(short *)(param_2 + 6) != 0x1052)) && (*(short *)(param_2 + 6) != 0x1052)) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000e10(local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0xd8U)));
  iVar6 = recovered_10002e00((int)param_2);
  iVar9 = (0x54584b57U);
  bVar2 = false;
  local_484 = 0;
  if (((param_1 == (int *)0x0 || param_2 == (byte *)0x0) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
    recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x131U)));
  }
  else {
    iVar8 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)&local_484);
    if (iVar8 == 0) {
      pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x149U));
    }
    else {
      iVar8 = 5;
      uVar7 = 0;
      while (iVar8 != 0xb) {
        iVar1 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        uVar14 = uVar7;
        if (*(uint *)(param_2 + iVar1) != 0) {
          uVar14 = uVar7 | 2;
        }
        if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
          uVar14 = uVar7 | 1;
        }
        uVar7 = uVar14;
      }
      iVar8 = recovered_1000271c(((uintptr_t)pf_module_state + 0xfaU));
      if (iVar8 != 0) {
        uVar7 = uVar7 | 4;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar7 = uVar7 | 2;
      }
      local_84[0] = local_484 | uVar7;
      if ((((*param_1 == iVar9) && (99 < (uint)param_1[2])) &&
          ((code *)param_1[0x18] != (code *)0x0)) &&
         (iVar9 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
         iVar9 != 0)) {
        recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                           (int)local_84);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x17aU)),local_484);
        uVar14 = local_84[0];
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x18bU)),local_84[0]);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x19bU)),uVar7);
        bVar2 = (uVar14 & uVar7) == uVar7;
        goto LAB_10000f40;
      }
      pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x161U));
    }
    recovered_10002618((int)local_8a4,0x400,pcVar12);
    bVar2 = false;
  }
LAB_10000f40:
  if (iVar6 == -1) {
    bVar4 = param_2[8];
    bVar3 = 0;
    bVar5 = 0;
    local_484 = 0;
    bVar16 = bVar4 == 1;
    local_84[0] = 0;
    if (bVar16) {
      bVar4 = param_2[9];
    }
    local_488 = 0;
    local_48c = 0;
    local_490 = 0;
    if (bVar16 && bVar4 == 6) {
      uVar14 = recovered_10002ea4(param_1,(int)param_2,5,0x1000,&local_484);
      uVar7 = local_484;
      if (uVar14 == 0) {
        recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x3aeU)));
      }
      else {
        recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3c4U)),local_484,
                           extraout_r3_00);
        recovered_10003020(param_1,uVar7,0,(int)local_84);
        recovered_10003020(param_1,local_484,4,(int)&local_488);
        recovered_10003020(param_1,local_484,0xc,(int)&local_48c);
        recovered_10003020(param_1,local_484,0x10,(int)&local_490);
        if (-1 < (int)local_488) {
          recovered_1000300c(param_1,local_484,4,local_488 | 0x80000000);
          recovered_10003020(param_1,local_484,4,(int)&local_488);
        }
        uVar7 = local_488;
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3cdU)),local_84[0]);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3d5U)),uVar7);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3ddU)),local_48c);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x3e7U)),local_490);
        bVar5 = 1;
      }
    }
    bVar4 = param_2[8];
    local_484 = 0;
    bVar16 = bVar4 == 4;
    local_84[0] = 0;
    if (bVar16) {
      bVar4 = param_2[9];
    }
    local_488 = 0;
    local_48c = 0;
    if (bVar16 && bVar4 == 3) {
      uVar14 = recovered_10002ea4(param_1,(int)param_2,0,0x1000,&local_484);
      uVar7 = local_484;
      if (uVar14 == 0) {
        recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x3f3U)));
      }
      else {
        recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x408U)),local_484,
                           extraout_r3_01);
        recovered_10003020(param_1,uVar7,0,(int)local_84);
        recovered_10003020(param_1,local_484,8,(int)&local_488);
        if ((local_488 & 1) == 0) {
          recovered_1000300c(param_1,local_484,8,local_488 | 1);
          recovered_10003020(param_1,local_484,8,(int)&local_488);
        }
        recovered_10003058(param_1,local_484 + 0xe,2,(int)&local_48c);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x410U)),local_84[0]);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x418U)),local_488);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x420U)),local_48c);
        bVar3 = 1;
      }
    }
    bVar4 = 0;
    local_484 = 0;
    local_84[0] = 0;
    local_488 = 0;
    local_48c = 0;
    if ((param_2[8] == 0xc) && (bVar4 = 0, param_2[9] == 3)) {
      uVar14 = recovered_10002ea4(param_1,(int)param_2,0,0x1000,&local_484);
      uVar7 = local_484;
      if (uVar14 == 0) {
        for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
          uVar14 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
          local_490 = 0;
          if (((uVar14 & 1) != 0) &&
             (iVar9 = recovered_100031d0(param_1,uVar14 & 0xfffc,2,(int)&local_490), iVar9 != 0)) {
            recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x44cU)));
            recovered_1000266c((int)local_8a4,0x400,uVar7);
            recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x457U)),
                               uVar14 & 0xfffffffc);
            recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x45dU)),local_490);
            bVar4 = 1;
            goto LAB_10001ecc;
          }
        }
        recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x467U)));
        bVar4 = 0;
      }
      else {
        recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x42cU)),local_484,extraout_r3)
        ;
        recovered_10003020(param_1,uVar7,0,(int)local_84);
        recovered_10003020(param_1,local_484,4,(int)&local_488);
        recovered_10003020(param_1,local_484,8,(int)&local_48c);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x434U)),local_84[0]);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x43cU)),local_488);
        recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x444U)),local_48c);
        bVar4 = 1;
      }
    }
LAB_10001ecc:
    bVar4 = bVar3 | bVar5 | bVar4;
    bVar5 = param_2[8];
    local_484 = 0;
    local_84[0] = 0;
    local_488 = 0;
    if (bVar5 == 2) {
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar14 = recovered_10002ea4(param_1,(int)param_2,uVar7,0x1000,&local_484);
        if (uVar14 != 0) {
          recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x47cU)));
          recovered_1000266c((int)local_8a4,0x400,uVar7);
          uVar14 = local_484;
          recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x48dU)),local_484,
                             extraout_r3_07);
          recovered_10003020(param_1,uVar14,0,(int)local_84);
          recovered_10003020(param_1,local_484,4,(int)&local_488);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x499U)),local_84[0]);
          pcVar12 = (char *)((int)&(*(uint32_t *)(uint64_t[]){0xe59f254800002c9cULL}) + (0x1dd5U));
          uVar14 = local_488;
LAB_10002060:
          recovered_10000e24((int)local_8a4,pcVar12,uVar14);
          break;
        }
        uVar14 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
        if (((uVar14 & 1) != 0) &&
           (iVar9 = recovered_100031d0(param_1,uVar14 & 0xfffc,2,(int)local_84), iVar9 != 0)) {
          recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4b1U)));
          recovered_1000266c((int)local_8a4,0x400,uVar7);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4c0U)),uVar14 & 0xfffffffc)
          ;
          pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x4caU));
          uVar14 = local_84[0];
          goto LAB_10002060;
        }
      }
      bVar5 = param_2[8];
      if (uVar7 != 6) {
        bVar4 = 1;
      }
    }
    local_484 = 0;
    bVar3 = 0;
    local_84[0] = 0;
    if (bVar5 == 3) {
      for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
        uVar14 = recovered_10002ea4(param_1,(int)param_2,uVar7,0x1000,&local_484);
        if (uVar14 != 0) {
          recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x4d8U)));
          recovered_1000266c((int)local_8a4,0x400,uVar7);
          uVar14 = local_484;
          recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4e9U)),local_484,
                             extraout_r3_08);
          recovered_10003020(param_1,uVar14,0,(int)local_84);
          if (extraout_r0_00 != 0) {
            recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x4f5U)),local_84[0]);
          }
          break;
        }
      }
      bVar3 = 0;
      if (uVar7 != 6) {
        bVar3 = 1;
      }
    }
    bVar16 = (bool)(bVar3 | bVar4);
  }
  else {
    uVar7 = recovered_10002e00((int)param_2);
    if (uVar7 != 0xffffffff) {
      recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1aaU)),uVar7);
      bVar4 = 0;
      local_84[0] = 0;
      for (iVar9 = 0; iVar9 != 0x58; iVar9 = iVar9 + 1) {
        *(undefined1 *)((int)local_430 + iVar9 + -0x54) = 0;
      }
      if (param_2 != (byte *)0x0) {
        bVar4 = param_2[0x12];
      }
      if ((param_2 != (byte *)0x0 && (bVar4 & 0x10) != 0) &&
         (iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],0x34,1
                                     ,(int)local_84), iVar9 != 0)) {
        uVar7 = 0;
        while( true ) {
          bVar17 = 0x1e < uVar7;
          bVar16 = uVar7 == 0x1f;
          if (uVar7 < 0x20) {
            bVar17 = 0xae < local_84[0] - 0x40;
            bVar16 = local_84[0] - 0x40 == 0xaf;
          }
          if (bVar17 && !bVar16) break;
          local_488 = 0;
          local_48c = 0;
          local_490 = 0;
          local_494 = 0;
          local_498 = 0;
          local_49c = 0;
          iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                     local_84[0] & 0xffff,1,(int)&local_488);
          if ((iVar9 == 0) ||
             (iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_84[0] & 0xffff) + 1 & 0xffff,1,(int)&local_48c),
             iVar9 == 0)) break;
          uVar14 = extraout_r1;
          if (local_488 == 9) {
            iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                       (local_84[0] & 0xffff) + 3 & 0xffff,1,(int)&local_490);
            uVar14 = extraout_r1_00;
            if (iVar9 != 0) {
              iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                         (local_84[0] & 0xffff) + 4 & 0xffff,1,(int)&local_494);
              uVar14 = extraout_r1_01;
              if (iVar9 != 0) {
                iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],
                                           (local_84[0] & 0xffff) + 8 & 0xffff,4,(int)&local_498);
                uVar14 = extraout_r1_02;
                if (iVar9 != 0) {
                  iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],
                                             (uint)param_2[2],(local_84[0] & 0xffff) + 0xc & 0xffff,
                                             4,(int)&local_49c);
                  uVar14 = extraout_r1_03;
                  if (iVar9 != 0) {
                    local_4a0 = 0;
                    local_460 = local_460 + 1;
                    if (local_490 == 1) {
                      bVar16 = recovered_10002e40(param_1,(int)param_2,local_494,local_498,local_49c
                                                  ,(int *)&local_4a0);
                      uVar14 = extraout_r1_04;
                      if (bVar16) {
                        local_484 = local_4a0;
                        local_474 = local_494;
                        goto LAB_100017c0;
                      }
                    }
                    if (local_490 == 2) {
                      bVar16 = recovered_10002e40(param_1,(int)param_2,local_494,local_498,local_49c
                                                  ,(int *)&local_4a0);
                      uVar14 = extraout_r1_05;
                      if (bVar16) {
                        local_4a4 = 0;
                        local_480 = local_4a0;
                        local_470 = local_494;
                        iVar9 = recovered_10002a18(param_1,(uint)*param_2,(uint)param_2[1],
                                                   (uint)param_2[2],
                                                   (local_84[0] & 0xffff) + 0x10 & 0xffff,4,
                                                   (int)&local_4a4);
                        uVar14 = extraout_r1_06;
                        if (iVar9 != 0) {
                          local_464 = local_4a4;
                        }
                        goto LAB_100017c0;
                      }
                    }
                    if (local_490 == 3) {
                      bVar16 = recovered_10002e40(param_1,(int)param_2,local_494,local_498,local_49c
                                                  ,(int *)&local_4a0);
                      uVar14 = extraout_r1_07;
                      if (bVar16) {
                        local_47c = local_4a0;
                        local_46c = local_494;
                        goto LAB_100017c0;
                      }
                    }
                    if (local_490 == 4) {
                      bVar16 = recovered_10002e40(param_1,(int)param_2,local_494,local_498,local_49c
                                                  ,(int *)&local_4a0);
                      uVar14 = extraout_r1_08;
                      if (bVar16) {
                        local_478 = local_4a0;
                        local_468 = local_494;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_100017c0:
          if (local_48c != 0) {
            uVar14 = local_84[0];
          }
          if (local_48c == 0 || local_48c == uVar14) break;
          local_84[0] = local_48c;
          uVar7 = uVar7 + 1;
        }
        if (local_484 != 0) {
          local_84[0] = 0;
          recovered_10002fdc(param_1,local_484,0x14,(int)&local_44c);
          recovered_10002ff4(param_1,local_484,0);
          recovered_1000300c(param_1,local_484,0,0);
          recovered_10003020(param_1,local_484,4,(int)&local_45c);
          recovered_1000300c(param_1,local_484,0,1);
          recovered_10003020(param_1,local_484,4,(int)&local_458);
          local_450 = local_458 & 1;
          local_454 = 0;
          recovered_1000300c(param_1,local_484,8,0);
          recovered_1000300c(param_1,local_484,0xc,local_454);
          recovered_1000300c(param_1,local_484,8,1);
          recovered_1000300c(param_1,local_484,0xc,local_450);
          if ((((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) && (0x7b < (uint)param_1[2]))
             && ((code *)param_1[0x1e] != (code *)0x0)) {
            (*(code *)param_1[0x1e])();
          }
          recovered_10002ff4(param_1,local_484,1);
          recovered_10002ff4(param_1,local_484,3);
          recovered_10002ff4(param_1,local_484,0xb);
          recovered_10002fdc(param_1,local_484,0x14,(int)&local_448);
          recovered_1000303c(param_1,local_484,0x12,(int)&local_444);
          recovered_10002fdc(param_1,local_484,0x15,(int)local_430);
          uVar7 = 0;
          if (local_484 != 0) {
            recovered_100030c4(param_1,local_484 + 0x16,2,0);
            uVar7 = local_484;
          }
          recovered_1000303c(param_1,uVar7,0x18,(int)&local_440);
          recovered_1000303c(param_1,local_484,0x1c,(int)&local_43c);
          recovered_1000303c(param_1,local_484,0x1e,(int)local_84);
          if ((extraout_r0 != 0) && (local_438 = local_84[0], local_480 != 0)) {
            local_434 = local_464 * local_84[0] + local_480;
          }
          recovered_100027e0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1daU)),
                             ((uintptr_t)pf_module_state + 0x1eaU));
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1cfU)),local_460);
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1f1U)),local_474);
          recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x201U)),local_484,
                             extraout_r3_02);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x20eU)),local_45c);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x224U)),local_458);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x23aU)),local_454);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x250U)),local_450);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x266U)),local_44c);
          recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x27fU)),local_448);
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x297U)),local_444);
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2a4U)),local_440);
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2b5U)),local_43c);
          uVar7 = local_434;
          uVar10 = extraout_r3_03;
          if (local_434 != 0) {
            recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2c9U)),local_470);
            recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2d9U)),local_464);
            recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x2f0U)),uVar7,
                               extraout_r3_04);
            uVar10 = extraout_r3_05;
          }
          if (local_47c != 0) {
            recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x303U)),local_47c,uVar10);
            uVar10 = extraout_r3_06;
          }
          if (local_478 != 0) {
            recovered_10003128((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x30dU)),local_478,uVar10);
          }
          recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x320U)),local_430[0]);
          iVar9 = ((uintptr_t)pf_module_state + 0x343U);
          if ((local_448 & 8) == 0) {
            iVar9 = ((uintptr_t)pf_module_state + 0x34fU);
          }
          recovered_100027e0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x337U)),iVar9);
          bVar16 = true;
          goto LAB_10002178;
        }
      }
      if (local_460 != 0) {
        recovered_100025b4((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1cfU)),local_460);
      }
      if ((param_2 != (byte *)0x0) && (*(ushort *)(param_2 + 6) >> 6 < 0x41)) {
        for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
          local_484 = 0;
          local_84[0] = 0;
          if ((*(uint *)(param_2 + uVar7 * 4 + 0x14) & 1) != 0) {
            uVar13 = *(uint *)(param_2 + uVar7 * 4 + 0x14) & 0xfffffffc;
            uVar14 = uVar13 + 0x12 & 0xffff;
            iVar9 = recovered_100031d0(param_1,uVar14,1,(int)&local_484);
            if (iVar9 != 0) {
              recovered_100027e0((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x1daU)),
                                 ((uintptr_t)pf_module_state + 0x35cU));
              recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x366U)));
              recovered_1000266c((int)local_8a4,0x400,uVar7);
              recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x37aU)),uVar13);
              recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x389U)),local_484);
              recovered_10003228(param_1,uVar14);
              recovered_10003228(param_1,uVar14);
              bVar16 = true;
              iVar9 = recovered_100031d0(param_1,uVar14,1,(int)local_84);
              if (iVar9 != 0) {
                recovered_10000e24((int)local_8a4,(char *)(((uintptr_t)pf_module_state + 0x39cU)),local_84[0]);
              }
              goto LAB_10002178;
            }
          }
        }
      }
      recovered_10002618((int)local_8a4,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
    }
    bVar16 = false;
  }
LAB_10002178:
  pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x10dU));
  if (!bVar16 && !bVar2) {
    pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x11dU));
  }
  recovered_10002618((int)local_8a4,0x400,pcVar12);
  iVar9 = recovered_10002a8c((int)param_2);
  if (param_2 != (byte *)0x0) {
    recovered_10000e10((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x100U)));
    recovered_10002618((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x501U)));
    recovered_10002780((int)local_84,0x60,(uint)*param_2,2);
    pcVar12 = (char *)(((uintptr_t)pf_module_state + 0x503U));
    recovered_10002618((int)local_84,0x60,pcVar12);
    recovered_10002780((int)local_84,0x60,(uint)param_2[1],2);
    pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x505U));
    recovered_10002618((int)local_84,0x60,pcVar15);
    recovered_1000266c((int)local_84,0x60,(uint)param_2[2]);
    recovered_10000e10((undefined1 *)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x507U)));
    recovered_10002780((int)&local_484,0x400,(uint)*param_2,2);
    recovered_10002618((int)&local_484,0x400,pcVar12);
    recovered_10002780((int)&local_484,0x400,(uint)param_2[1],2);
    recovered_10002618((int)&local_484,0x400,pcVar15);
    recovered_1000266c((int)&local_484,0x400,(uint)param_2[2]);
    recovered_10002618((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x50cU)));
    recovered_10002780((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_10002618((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x515U)));
    recovered_10002780((int)&local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_10002618((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x51eU)));
    recovered_10002780((int)&local_484,0x400,(uint)param_2[8],2);
    recovered_10002618((int)&local_484,0x400,pcVar15);
    recovered_10002780((int)&local_484,0x400,(uint)param_2[9],2);
    recovered_10002618((int)&local_484,0x400,pcVar15);
    recovered_10002780((int)&local_484,0x400,(uint)param_2[10],2);
    recovered_10002618((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x526U)));
    recovered_10002780((int)&local_484,0x400,(uint)param_2[0xb],2);
    recovered_10000e24((int)&local_484,(char *)(((uintptr_t)pf_module_state + 0x531U)),*(uint *)(param_2 + 0x10)
                      );
    pcVar15 = (char *)(((uintptr_t)pf_module_state + 0x539U));
    pcVar12 = (char *)(((uintptr_t)pf_module_state + 0xcfU));
    pcVar11 = extraout_r3_09;
    for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
      uVar14 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
      if (uVar14 != 0) {
        recovered_10002618((int)&local_484,0x400,pcVar15);
        recovered_1000266c((int)&local_484,0x400,uVar7);
        recovered_10002618((int)&local_484,0x400,pcVar12);
        recovered_10002780((int)&local_484,0x400,uVar14,8);
        pcVar11 = extraout_r3_10;
      }
    }
    if (local_8a4[0] != '\0') {
      recovered_10002618((int)&local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
      recovered_10002618((int)&local_484,0x400,local_8a4);
      pcVar11 = extraout_r3_11;
    }
    if (param_1 != (int *)0x0) {
      pcVar11 = (code *)param_1[3];
    }
    if (param_1 != (int *)0x0 && pcVar11 != (code *)0x0) {
      (*pcVar11)(local_84,iVar9,&local_484);
    }
  }
  return;
}

#undef DAT_10001e64
#undef DAT_10001e68
#undef DAT_10001f5c
#undef DAT_10001f6c
#undef DAT_10001f70
#undef DAT_1000200c
#undef DAT_100020cc
#undef DAT_100020d0
#undef DAT_100020d4
#undef DAT_100020d8
#undef DAT_100020dc
#undef DAT_100020e0
#undef DAT_100020e4
#undef DAT_100020e8
#undef DAT_100020ec
#undef DAT_100020f0
#undef DAT_10002430
#undef DAT_10002434
#undef DAT_100024a4
#undef DAT_100024a8
#undef DAT_100024ac
#undef DAT_100024b0
#undef DAT_100024b4
#undef DAT_100024b8
#undef DAT_100024bc
#undef DAT_100024c0
#undef DAT_100024c4
#undef DAT_100024c8
#undef DAT_100024cc
#undef DAT_100024d0
#undef DAT_100024d4
#undef DAT_100024d8
#undef DAT_100024dc
#undef DAT_100024e0
#undef DAT_100024e4
#undef DAT_100024e8
#undef DAT_100024ec
#undef DAT_100024f0
#undef DAT_100024f4
#undef DAT_100024f8
#undef DAT_100024fc
#undef DAT_10002500
#undef DAT_10002504
#undef DAT_10002508
#undef DAT_1000250c
#undef DAT_10002510
#undef DAT_10002514
#undef DAT_10002518
#undef DAT_1000251c
#undef DAT_10002520
#undef DAT_10002524
#undef DAT_10002528
#undef DAT_1000252c
#undef DAT_10002530
#undef DAT_10002534
#undef DAT_10002538
#undef DAT_1000253c
#undef DAT_10002540
#undef DAT_10002544
#undef DAT_10002548
#undef DAT_1000254c
#undef DAT_10002550
#undef DAT_10002554
#undef DAT_10002558
#undef DAT_1000255c
#undef DAT_10002560
#undef DAT_10002564
#undef DAT_10002568
#undef DAT_1000256c
#undef DAT_10002570
#undef DAT_10002574
#undef DAT_10002578
#undef DAT_1000257c
#undef DAT_10002580
#undef DAT_10002584
#undef DAT_10002588
#undef DAT_1000258c
#undef DAT_10002590
#undef DAT_10002594
#undef DAT_10002598
#undef DAT_1000259c
#undef DAT_100025a0
#undef DAT_100025a4
#undef DAT_100025a8
#undef DAT_100025ac
#undef DAT_100025b0
#undef local_8a4
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_84

#undef DAT_10002610
#define DAT_10002610 (*(int *)(0x10002610U))
#undef DAT_10002614
#define DAT_10002614 (*(int *)(0x10002614U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b4
 */

void recovered_100025b4(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
  recovered_10002618(param_1,0x400,param_2);
  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcfU)));
  recovered_1000266c(param_1,0x400,param_3);
  return;
}

#undef DAT_10002610
#undef DAT_10002614

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002618
 */

void recovered_10002618(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_1000271c(param_1);
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


#define abStack_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000266c
 */

void recovered_1000266c(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10002744(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10003300(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10002744(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000271c
 */

int recovered_1000271c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002744
 */

void recovered_10002744(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_1000271c(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002780
 */

void recovered_10002780(int param_1,uint param_2,uint param_3,int param_4)

{
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
    recovered_10002744(param_1,param_2,bVar3);
  }
  return;
}



#undef DAT_10002848
#define DAT_10002848 (*(int *)(0x10002848U))
#undef DAT_1000284c
#define DAT_1000284c (*(int *)(0x1000284cU))
#undef DAT_10002850
#define DAT_10002850 (*(int *)(0x10002850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

void recovered_100027e0(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
  recovered_10002618(param_1,0x400,param_2);
  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcfU)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0xd7U));
  if (param_3 != 0) {
    pcVar1 = (char *)param_3;
  }
  recovered_10002618(param_1,0x400,pcVar1);
  return;
}

#undef DAT_10002848
#undef DAT_1000284c
#undef DAT_10002850

/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002854(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_10002a18((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_10002a18((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_10002a18((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_10002a18((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_10002a18((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10002a88
#define DAT_10002a88 (*(uint8_t * *)(0x10002a88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a18
 */

undefined4
recovered_10002a18(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
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

#undef DAT_10002a88

#undef DAT_10002c94
#define DAT_10002c94 (*(uint *)(0x10002c94U))
#undef DAT_10002da8
#define DAT_10002da8 (*(uint32_t *)(0x10002da8U))
#undef DAT_10002dac
#define DAT_10002dac (*(int *)(0x10002dacU))
#undef DAT_10002db0
#define DAT_10002db0 (*(int *)(0x10002db0U))
#undef DAT_10002db4
#define DAT_10002db4 (*(int *)(0x10002db4U))
#undef DAT_10002db8
#define DAT_10002db8 (*(int *)(0x10002db8U))
#undef DAT_10002dbc
#define DAT_10002dbc (*(int *)(0x10002dbcU))
#undef DAT_10002dc0
#define DAT_10002dc0 (*(int *)(0x10002dc0U))
#undef DAT_10002dc4
#define DAT_10002dc4 (*(int *)(0x10002dc4U))
#undef DAT_10002dc8
#define DAT_10002dc8 (*(int *)(0x10002dc8U))
#undef DAT_10002dcc
#define DAT_10002dcc (*(int *)(0x10002dccU))
#undef DAT_10002dd0
#define DAT_10002dd0 (*(int *)(0x10002dd0U))
#undef DAT_10002dd4
#define DAT_10002dd4 (*(int *)(0x10002dd4U))
#undef DAT_10002dd8
#define DAT_10002dd8 (*(int *)(0x10002dd8U))
#undef DAT_10002ddc
#define DAT_10002ddc (*(int *)(0x10002ddcU))
#undef DAT_10002de0
#define DAT_10002de0 (*(int *)(0x10002de0U))
#undef DAT_10002de4
#define DAT_10002de4 (*(int *)(0x10002de4U))
#undef DAT_10002de8
#define DAT_10002de8 (*(int *)(0x10002de8U))
#undef DAT_10002dec
#define DAT_10002dec (*(int *)(0x10002decU))
#undef DAT_10002df0
#define DAT_10002df0 (*(int *)(0x10002df0U))
#undef DAT_10002df4
#define DAT_10002df4 (*(int *)(0x10002df4U))
#undef DAT_10002df8
#define DAT_10002df8 (*(int *)(0x10002df8U))
#undef DAT_10002dfc
#define DAT_10002dfc (*(int *)(0x10002dfcU))
#undef switchdataD_10002c94
#define switchdataD_10002c94 (*(uint *)(0x10002c94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a8c
 */

int recovered_10002a8c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10002c90_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x5f8U);
    }
LAB_10002c70:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10002c90_caseD_5;
    iVar3 = (int)&DAT_10002c94 + (0x12ccU);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x64aU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x637U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x65dU);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10002cf4:
        iVar3 = recovered_10003270((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10002c90_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x53eU);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x5efU);
      }
      goto LAB_10002c70;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10002c30:
        return ((uintptr_t)pf_module_state + 0x61dU);
      }
      goto LAB_10002c70;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10002c30;
      goto LAB_10002c70;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x614U);
      }
      goto LAB_10002c70;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x603U);
      }
      goto LAB_10002c70;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x5d9U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10002cf4;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return (int)&(*(uint32_t *)(uint64_t[]){0x135d000013deULL}) + (0x1179U);
        }
      }
      goto LAB_10002c70;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x60cU);
      }
      goto LAB_10002c70;
    }
    if (sVar2 != 0x1af4) goto LAB_10002c70;
    iVar3 = ((uintptr_t)pf_module_state + 0x549U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002b30_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x558U);
      break;
    case 0x1043:
switchD_10002b30_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x57cU);
      break;
    case 0x1044:
switchD_10002b30_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x59fU);
      break;
    case 0x1045:
switchD_10002b30_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x569U);
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
switchD_10002b30_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x5ceU);
      break;
    case 0x1048:
switchD_10002b30_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x58fU);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x5aeU);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x5bdU);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002b30_caseD_1042;
      case 0x1002:
        goto switchD_10002b30_caseD_1045;
      case 0x1003:
        goto switchD_10002b30_caseD_1043;
      case 0x1004:
        goto switchD_10002b30_caseD_1048;
      case 0x1005:
        goto switchD_10002b30_caseD_1044;
      default:
        goto switchD_10002b30_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10002c94
#undef DAT_10002da8
#undef DAT_10002dac
#undef DAT_10002db0
#undef DAT_10002db4
#undef DAT_10002db8
#undef DAT_10002dbc
#undef DAT_10002dc0
#undef DAT_10002dc4
#undef DAT_10002dc8
#undef DAT_10002dcc
#undef DAT_10002dd0
#undef DAT_10002dd4
#undef DAT_10002dd8
#undef DAT_10002ddc
#undef DAT_10002de0
#undef DAT_10002de4
#undef DAT_10002de8
#undef DAT_10002dec
#undef DAT_10002df0
#undef DAT_10002df4
#undef DAT_10002df8
#undef DAT_10002dfc
#undef switchdataD_10002c94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e00
 */

int recovered_10002e00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = -1;
  if (param_1 == 0) {
    return -1;
  }
  if (*(short *)(param_1 + 4) == 0x1af4) {
    uVar2 = (uint)*(ushort *)(param_1 + 6);
    if ((uVar2 & 0xffffffc0) == 0x1000) {
      return uVar2 - 0x1000;
    }
    if ((uVar2 & 0xffffffc0) == 0x1040) {
      iVar1 = uVar2 - 0x1040;
    }
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e40
 */

bool recovered_10002e40(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_10002ea4(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_10002fd8
#define DAT_10002fd8 (*(int *)(0x10002fd8U))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea4
 */

uint recovered_10002ea4(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar3 = 0;
  if ((param_5 != (undefined4 *)0x0) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + param_3 * 4 + 0x10) & 7) != 4)))) {
    uVar4 = *(uint *)(param_2 + 0x14 + param_3 * 4);
    if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
      iVar2 = 0;
      if ((uVar4 & 6) == 4) {
        if (4 < param_3) {
          return 0;
        }
        iVar2 = *(int *)(param_2 + 0x14 + param_3 * 4 + 4);
      }
      if ((param_4 != 0) && (uVar4 = uVar4 & 0xfffffff0, uVar4 != 0 || iVar2 != 0)) {
        *param_5 = 0;
        local_1c = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
          if (((uint)param_1[2] < 0xbc) || ((code *)param_1[0x2e] == (code *)0x0)) {
            if ((iVar2 == 0) &&
               ((0x67 < (uint)param_1[2] && ((code *)param_1[0x19] != (code *)0x0)))) {
              iVar2 = (*(code *)param_1[0x19])(uVar4,0,param_4,&local_1c);
              bVar5 = iVar2 != 0;
              uVar1 = 0;
              if (bVar5) {
                uVar1 = local_1c;
              }
              uVar3 = (uint)bVar5;
              if (bVar5) {
                *param_5 = uVar1;
              }
            }
          }
          else {
            uVar3 = (*(code *)param_1[0x2e])(uVar4,iVar2,param_4,param_5);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10002fd8
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fdc
 */

void recovered_10002fdc(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10003058(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

void recovered_10002ff4(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100030c4(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000300c
 */

void recovered_1000300c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_100030c4(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003020
 */

void recovered_10003020(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10003058(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000303c
 */

void recovered_1000303c(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_10003058(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_100030c0
#define DAT_100030c0 (*(uint8_t * *)(0x100030c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003058
 */

undefined4 recovered_10003058(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (0x54584b57U))) {
    UNRECOVERED_JUMPTABLE = (0x54584b57U);
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100030b0;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100030b0:
                    /* WARNING: Could not recover jumptable at 0x100030bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100030c0

#undef DAT_10003124
#define DAT_10003124 (*(int *)(0x10003124U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c4
 */

undefined4 recovered_100030c4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0xc4) {
      if ((uint)param_1[2] < 0x70) {
        return 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x30];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_1000310c;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_1000310c:
                    /* WARNING: Could not recover jumptable at 0x10003118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003124

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003128
 */

void recovered_10003128(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcdU)));
  recovered_10002618(param_1,0x400,param_2);
  recovered_10002618(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0xcfU)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_10002618(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}



#undef DAT_10003224
#define DAT_10003224 (*(int *)(0x10003224U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d0
 */

undefined4 recovered_100031d0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10003220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_10003224

#undef DAT_1000326c
#define DAT_1000326c (*(int *)(0x1000326cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003228
 */

void recovered_10003228(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_1000326c

#undef DAT_100032e4
#define DAT_100032e4 (*(uint32_t *)(0x100032e4U))
#undef DAT_100032e8
#define DAT_100032e8 (*(int *)(0x100032e8U))
#undef DAT_100032ec
#define DAT_100032ec (*(int *)(0x100032ecU))
#undef DAT_100032f0
#define DAT_100032f0 (*(int *)(0x100032f0U))
#undef DAT_100032f4
#define DAT_100032f4 (*(int *)(0x100032f4U))
#undef DAT_100032f8
#define DAT_100032f8 (*(int *)(0x100032f8U))
#undef DAT_100032fc
#define DAT_100032fc (*(int *)(0x100032fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

int recovered_10003270(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return (int)&(*(uint32_t *)(uint64_t[]){0xcf400000ccbULL}) + (*(uint32_t *)(uint64_t[]){0xcf400000ccbULL});
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x692U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x67dU);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x682U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x687U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x678U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x69bU);
  }
  return iVar1;
}

#undef DAT_100032e4
#undef DAT_100032e8
#undef DAT_100032ec
#undef DAT_100032f0
#undef DAT_100032f4
#undef DAT_100032f8
#undef DAT_100032fc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003300
 */

uint recovered_10003300(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003350
 */

uint recovered_10003350(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003388
 */

uint recovered_10003388(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100033f8
 */

uint recovered_100033f8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003460
 */

undefined8 recovered_10003460(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10003544
 */

undefined8 recovered_10003544(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100035c4
 */

undefined8 recovered_100035c4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100036e4
 */

undefined8 recovered_100036e4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10003820
#define DAT_10003820 (*(double *)(0x10003820U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

undefined8 recovered_100037a0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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

#undef DAT_10003820

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003828
 */

undefined8 recovered_10003828(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_100037a0(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_100037a0(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003874
 */

void recovered_10003874(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100037a0(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x6c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003884
 */

void recovered_10003884(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x6acU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003894
 */

double recovered_10003894(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100038dc
 */

void recovered_100038dc(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10003894(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10003894(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003904
 */

float recovered_10003904(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003894(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003920
 */

float recovered_10003920(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_100038dc(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
