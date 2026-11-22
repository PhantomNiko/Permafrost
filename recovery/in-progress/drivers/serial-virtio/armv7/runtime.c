/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000244c
#define DAT_1000244c (*(uint32_t *)(0x1000244cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

void * recovered_10002440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x43e0U));
}

#undef DAT_1000244c

#undef DAT_10002720
#define DAT_10002720 (*(int *)(0x10002720U))
#undef DAT_10002724
#define DAT_10002724 (*(int *)(0x10002724U))
#undef DAT_10002728
#define DAT_10002728 (*(int *)(0x10002728U))
#undef DAT_1000272c
#define DAT_1000272c (*(int *)(0x1000272cU))
#undef DAT_10002730
#define DAT_10002730 (*(int *)(0x10002730U))
#undef DAT_10002734
#define DAT_10002734 (*(int *)(0x10002734U))
#undef DAT_10002738
#define DAT_10002738 (*(int *)(0x10002738U))
#undef DAT_1000273c
#define DAT_1000273c (*(int *)(0x1000273cU))
#undef DAT_10002740
#define DAT_10002740 (*(int *)(0x10002740U))
#undef DAT_10002744
#define DAT_10002744 (*(int *)(0x10002744U))
#undef DAT_10002748
#define DAT_10002748 (*(int *)(0x10002748U))
#undef DAT_1000274c
#define DAT_1000274c (*(int *)(0x1000274cU))
#undef DAT_10002750
#define DAT_10002750 (*(int *)(0x10002750U))
#undef DAT_10002754
#define DAT_10002754 (*(int *)(0x10002754U))
#undef DAT_10002758
#define DAT_10002758 (*(int *)(0x10002758U))
#undef DAT_1000275c
#define DAT_1000275c (*(int *)(0x1000275cU))
#define local_fc (*(uint *)(frame + 1044))
#define local_ec (*(char *)(frame + 1060))
#define local_94 (*(uint *)(frame + 1148))
#define local_58 (*(uint *)(frame + 1208))
#define local_54 (*(uint *)(frame + 1212))
#define auStack_4fc (*(undefined1 (*)[1024])(frame + 20))
#define abStack_f8 (*(byte (*)[12])(frame + 1048))
#define abStack_50 (*(byte (*)[48])(frame + 1216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002450
 */

int recovered_10002450(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  iVar2 = (0x54584b57U);
  iVar4 = 0;
  local_fc = 0;
  if (((api != (int *)0x0) && (*api == (0x54584b57U))) && (0xf < (uint)api[2])) {
    recovered_10002760(auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    recovered_10002d78((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x115U)));
    recovered_10002dcc((int)auStack_4fc,0x60,api[1]);
    recovered_10002d78((int)auStack_4fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x124U)));
    if (((*api == iVar2) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
      (*(code *)api[10])(auStack_4fc);
    }
    recovered_10002760(auStack_4fc,0x400,(char *)(((uintptr_t)pf_module_state + 0x37U)));
    if (((*api == iVar2) && (0x3f < (uint)api[2])) &&
       (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_f8), iVar1 != 0))))
    {
      recovered_10002d14((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x12bU)),local_94);
      recovered_10002ee0((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x13bU)),local_58);
      recovered_10002d14((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0x14aU)),local_54);
    }
    if (((code *)api[3] != (code *)0x0) &&
       (iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0x15dU),((uintptr_t)pf_module_state + 0x7bU),auStack_4fc),
       iVar1 != 0)) {
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(((uintptr_t)pf_module_state + 0x90U),((uintptr_t)pf_module_state + 0xaeU),
                          ((uintptr_t)pf_module_state + 0xc6U));
      }
      uVar3 = 0;
      if (((*api == iVar2) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
            iVar2 = recovered_10002fa8(api,uVar3 & 0xff,uVar5 & 0xff,0,abStack_f8);
            if ((iVar2 != 0) &&
               (recovered_10002774(api,abStack_f8,(int *)&local_fc), local_ec < '\0')) {
              for (uVar6 = 1; uVar6 != 8; uVar6 = uVar6 + 1) {
                iVar2 = recovered_10002fa8(api,uVar3 & 0xff,uVar5 & 0xff,uVar6 & 0xff,abStack_50);
                if (iVar2 != 0) {
                  recovered_10002774(api,abStack_50,(int *)&local_fc);
                }
              }
            }
          }
        }
        uVar3 = local_fc;
      }
      recovered_10002d14((int)auStack_4fc,(char *)(((uintptr_t)pf_module_state + 0xf1U)),uVar3);
      iVar4 = 1;
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(((uintptr_t)pf_module_state + 0x15dU),((uintptr_t)pf_module_state + 0x7bU),auStack_4fc);
      }
    }
  }
  return iVar4;
}

#undef DAT_10002720
#undef DAT_10002724
#undef DAT_10002728
#undef DAT_1000272c
#undef DAT_10002730
#undef DAT_10002734
#undef DAT_10002738
#undef DAT_1000273c
#undef DAT_10002740
#undef DAT_10002744
#undef DAT_10002748
#undef DAT_1000274c
#undef DAT_10002750
#undef DAT_10002754
#undef DAT_10002758
#undef DAT_1000275c
#undef local_fc
#undef local_ec
#undef local_94
#undef local_58
#undef local_54
#undef auStack_4fc
#undef abStack_f8
#undef abStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

void recovered_10002760(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002d78((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10002cb8
#define DAT_10002cb8 (*(uint32_t *)(0x10002cb8U))
#undef DAT_10002cbc
#define DAT_10002cbc (*(int *)(0x10002cbcU))
#undef DAT_10002cc0
#define DAT_10002cc0 (*(int *)(0x10002cc0U))
#undef DAT_10002cc4
#define DAT_10002cc4 (*(int *)(0x10002cc4U))
#undef DAT_10002cc8
#define DAT_10002cc8 (*(int *)(0x10002cc8U))
#undef DAT_10002ccc
#define DAT_10002ccc (*(int *)(0x10002cccU))
#undef DAT_10002cd0
#define DAT_10002cd0 (*(int *)(0x10002cd0U))
#undef DAT_10002cd4
#define DAT_10002cd4 (*(int *)(0x10002cd4U))
#undef DAT_10002cd8
#define DAT_10002cd8 (*(int *)(0x10002cd8U))
#undef DAT_10002cdc
#define DAT_10002cdc (*(int *)(0x10002cdcU))
#undef DAT_10002ce0
#define DAT_10002ce0 (*(int *)(0x10002ce0U))
#undef DAT_10002ce4
#define DAT_10002ce4 (*(int *)(0x10002ce4U))
#undef DAT_10002ce8
#define DAT_10002ce8 (*(int *)(0x10002ce8U))
#undef DAT_10002cec
#define DAT_10002cec (*(int *)(0x10002cecU))
#undef DAT_10002cf0
#define DAT_10002cf0 (*(int *)(0x10002cf0U))
#undef DAT_10002cf4
#define DAT_10002cf4 (*(int *)(0x10002cf4U))
#undef DAT_10002cf8
#define DAT_10002cf8 (*(int *)(0x10002cf8U))
#undef DAT_10002cfc
#define DAT_10002cfc (*(int *)(0x10002cfcU))
#undef DAT_10002d00
#define DAT_10002d00 (*(int *)(0x10002d00U))
#undef DAT_10002d04
#define DAT_10002d04 (*(int *)(0x10002d04U))
#undef DAT_10002d08
#define DAT_10002d08 (*(int *)(0x10002d08U))
#undef DAT_10002d0c
#define DAT_10002d0c (*(int *)(0x10002d0cU))
#undef DAT_10002d10
#define DAT_10002d10 (*(int *)(0x10002d10U))
#define local_884 (*(char (*)[1024])(frame + 28))
#define local_484 (*(uint (*)[256])(frame + 1052))
#define local_84 (*(uint (*)[25])(frame + 2076))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002774
 */

void recovered_10002774(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *extraout_r3;
  code *extraout_r3_00;
  code *extraout_r3_01;
  code *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if ((*(ushort *)(param_2 + 6) | 0x40) != 0x1043) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10002760(local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x15eU)));
  iVar3 = (*(uint32_t *)(uint64_t[]){0x15a254584b57ULL});
  local_484[0] = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != (*(uint32_t *)(uint64_t[]){0x15a254584b57ULL}))) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x1a2U));
  }
  else {
    iVar2 = recovered_1000316c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                               (int)local_484);
    if (iVar2 == 0) {
      pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x1baU));
    }
    else {
      iVar2 = 5;
      uVar7 = 0;
      while (iVar2 != 0xb) {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        uVar4 = uVar7;
        if (*(uint *)(param_2 + iVar1) != 0) {
          uVar4 = uVar7 | 2;
        }
        if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
          uVar4 = uVar7 | 1;
        }
        uVar7 = uVar4;
      }
      iVar2 = recovered_10002e7c(((uintptr_t)pf_module_state + 0x102U));
      if (iVar2 != 0) {
        uVar7 = uVar7 | 4;
      }
      if ((param_2[8] == 6) && (param_2[9] != 0)) {
        uVar7 = uVar7 | 2;
      }
      local_84[0] = local_484[0] | uVar7;
      if (((*param_1 == iVar3) && (99 < (uint)param_1[2])) &&
         (((code *)param_1[0x18] != (code *)0x0 &&
          (iVar3 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
          iVar3 != 0)))) {
        recovered_1000316c(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                           (int)local_84);
        recovered_10002ee0((int)local_884,(char *)(((uintptr_t)pf_module_state + 0x1ebU)),local_484[0]);
        recovered_10002ee0((int)local_884,(char *)(((uintptr_t)pf_module_state + 0x1fcU)),local_84[0]);
        recovered_10002ee0((int)local_884,(char *)(((uintptr_t)pf_module_state + 0x20cU)),uVar7);
        goto LAB_1000289c;
      }
      pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x1d2U));
    }
  }
  recovered_10002d78((int)local_884,0x400,pcVar6);
LAB_1000289c:
  recovered_10002d78((int)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x182U)));
  iVar3 = recovered_100031e0((int)param_2);
  recovered_10002760((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x196U)));
  recovered_10002d78((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x21bU)));
  recovered_10002f48((int)local_84,0x60,(uint)*param_2,2);
  pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x21dU));
  recovered_10002d78((int)local_84,0x60,pcVar6);
  recovered_10002f48((int)local_84,0x60,(uint)param_2[1],2);
  pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x21fU));
  recovered_10002d78((int)local_84,0x60,pcVar8);
  recovered_10002dcc((int)local_84,0x60,(uint)param_2[2]);
  recovered_10002760((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x221U)));
  recovered_10002f48((int)local_484,0x400,(uint)*param_2,2);
  recovered_10002d78((int)local_484,0x400,pcVar6);
  recovered_10002f48((int)local_484,0x400,(uint)param_2[1],2);
  recovered_10002d78((int)local_484,0x400,pcVar8);
  recovered_10002dcc((int)local_484,0x400,(uint)param_2[2]);
  recovered_10002d78((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x226U)));
  recovered_10002f48((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10002d78((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x22fU)));
  recovered_10002f48((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10002d78((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x238U)));
  recovered_10002f48((int)local_484,0x400,(uint)param_2[8],2);
  recovered_10002d78((int)local_484,0x400,pcVar8);
  recovered_10002f48((int)local_484,0x400,(uint)param_2[9],2);
  recovered_10002d78((int)local_484,0x400,pcVar8);
  recovered_10002f48((int)local_484,0x400,(uint)param_2[10],2);
  recovered_10002d78((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x240U)));
  recovered_10002f48((int)local_484,0x400,(uint)param_2[0xb],2);
  recovered_10002ee0((int)local_484,(char *)(((uintptr_t)pf_module_state + 0x24bU)),*(uint *)(param_2 + 0x10));
  pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x253U));
  pcVar6 = (char *)(((uintptr_t)pf_module_state + 0x15bU));
  pcVar5 = extraout_r3;
  for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
    uVar4 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
    if (uVar4 != 0) {
      recovered_10002d78((int)local_484,0x400,pcVar8);
      recovered_10002dcc((int)local_484,0x400,uVar7);
      recovered_10002d78((int)local_484,0x400,pcVar6);
      recovered_10002f48((int)local_484,0x400,uVar4,8);
      pcVar5 = extraout_r3_00;
    }
  }
  if (local_884[0] != '\0') {
    recovered_10002d78((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x159U)));
    recovered_10002d78((int)local_484,0x400,local_884);
    pcVar5 = extraout_r3_01;
  }
  if (param_1 != (int *)0x0) {
    pcVar5 = (code *)param_1[3];
  }
  if (param_1 != (int *)0x0 && pcVar5 != (code *)0x0) {
    (*pcVar5)(local_84,iVar3,local_484);
  }
  return;
}

#undef DAT_10002cb8
#undef DAT_10002cbc
#undef DAT_10002cc0
#undef DAT_10002cc4
#undef DAT_10002cc8
#undef DAT_10002ccc
#undef DAT_10002cd0
#undef DAT_10002cd4
#undef DAT_10002cd8
#undef DAT_10002cdc
#undef DAT_10002ce0
#undef DAT_10002ce4
#undef DAT_10002ce8
#undef DAT_10002cec
#undef DAT_10002cf0
#undef DAT_10002cf4
#undef DAT_10002cf8
#undef DAT_10002cfc
#undef DAT_10002d00
#undef DAT_10002d04
#undef DAT_10002d08
#undef DAT_10002d0c
#undef DAT_10002d10
#undef local_884
#undef local_484
#undef local_84

#undef DAT_10002d70
#define DAT_10002d70 (*(int *)(0x10002d70U))
#undef DAT_10002d74
#define DAT_10002d74 (*(int *)(0x10002d74U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d14
 */

void recovered_10002d14(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002d78(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x159U)));
  recovered_10002d78(param_1,0x400,param_2);
  recovered_10002d78(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x15bU)));
  recovered_10002dcc(param_1,0x400,param_3);
  return;
}

#undef DAT_10002d70
#undef DAT_10002d74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d78
 */

void recovered_10002d78(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002e7c(param_1);
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
 * Address: 0x10002dcc
 */

void recovered_10002dcc(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10002ea4(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100035e8(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10002ea4(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e7c
 */

int recovered_10002e7c(int param_1)

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
 * Address: 0x10002ea4
 */

void recovered_10002ea4(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002e7c(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10002f40
#define DAT_10002f40 (*(int *)(0x10002f40U))
#undef DAT_10002f44
#define DAT_10002f44 (*(int *)(0x10002f44U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ee0
 */

void recovered_10002ee0(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002d78(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x159U)));
  recovered_10002d78(param_1,0x400,param_2);
  recovered_10002d78(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x15bU)));
  recovered_10002f48(param_1,0x400,param_3,8);
  return;
}

#undef DAT_10002f40
#undef DAT_10002f44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f48
 */

void recovered_10002f48(int param_1,uint param_2,uint param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
    recovered_10002ea4(param_1,param_2,bVar3);
  }
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_10002fa8(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_1000316c((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_1000316c((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_1000316c((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_1000316c((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=(byte)classification;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_1000316c((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_100031dc
#define DAT_100031dc (*(uint8_t * *)(0x100031dcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000316c
 */

undefined4
recovered_1000316c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

#undef DAT_100031dc

#undef DAT_100033e8
#define DAT_100033e8 (*(uint *)(0x100033e8U))
#undef DAT_100034fc
#define DAT_100034fc (*(uint32_t *)(0x100034fcU))
#undef DAT_10003500
#define DAT_10003500 (*(int *)(0x10003500U))
#undef DAT_10003504
#define DAT_10003504 (*(int *)(0x10003504U))
#undef DAT_10003508
#define DAT_10003508 (*(int *)(0x10003508U))
#undef DAT_1000350c
#define DAT_1000350c (*(int *)(0x1000350cU))
#undef DAT_10003510
#define DAT_10003510 (*(int *)(0x10003510U))
#undef DAT_10003514
#define DAT_10003514 (*(int *)(0x10003514U))
#undef DAT_10003518
#define DAT_10003518 (*(int *)(0x10003518U))
#undef DAT_1000351c
#define DAT_1000351c (*(int *)(0x1000351cU))
#undef DAT_10003520
#define DAT_10003520 (*(int *)(0x10003520U))
#undef DAT_10003524
#define DAT_10003524 (*(int *)(0x10003524U))
#undef DAT_10003528
#define DAT_10003528 (*(int *)(0x10003528U))
#undef DAT_1000352c
#define DAT_1000352c (*(int *)(0x1000352cU))
#undef DAT_10003530
#define DAT_10003530 (*(int *)(0x10003530U))
#undef DAT_10003534
#define DAT_10003534 (*(int *)(0x10003534U))
#undef DAT_10003538
#define DAT_10003538 (*(int *)(0x10003538U))
#undef DAT_1000353c
#define DAT_1000353c (*(int *)(0x1000353cU))
#undef DAT_10003540
#define DAT_10003540 (*(int *)(0x10003540U))
#undef DAT_10003544
#define DAT_10003544 (*(int *)(0x10003544U))
#undef DAT_10003548
#define DAT_10003548 (*(int *)(0x10003548U))
#undef DAT_1000354c
#define DAT_1000354c (*(int *)(0x1000354cU))
#undef DAT_10003550
#define DAT_10003550 (*(int *)(0x10003550U))
#undef switchdataD_100033e8
#define switchdataD_100033e8 (*(uint *)(0x100033e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e0
 */

int recovered_100031e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_100033e4_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x312U);
    }
LAB_100033c4:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_100033e4_caseD_5;
    iVar3 = (int)&DAT_100033e8 + (0xb7aU);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x364U);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x351U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x377U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10003448:
        iVar3 = recovered_10003554((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_100033e4_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x258U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x309U);
      }
      goto LAB_100033c4;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10003384:
        return ((uintptr_t)pf_module_state + 0x337U);
      }
      goto LAB_100033c4;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10003384;
      goto LAB_100033c4;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x32eU);
      }
      goto LAB_100033c4;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x31dU);
      }
      goto LAB_100033c4;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x2f3U);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10003448;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x2ffU);
        }
      }
      goto LAB_100033c4;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x326U);
      }
      goto LAB_100033c4;
    }
    if (sVar2 != 0x1af4) goto LAB_100033c4;
    iVar3 = ((uintptr_t)pf_module_state + 0x263U);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10003284_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x272U);
      break;
    case 0x1043:
switchD_10003284_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x296U);
      break;
    case 0x1044:
switchD_10003284_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x2b9U);
      break;
    case 0x1045:
switchD_10003284_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x283U);
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
switchD_10003284_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x2e8U);
      break;
    case 0x1048:
switchD_10003284_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x2a9U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x2c8U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x2d7U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10003284_caseD_1042;
      case 0x1002:
        goto switchD_10003284_caseD_1045;
      case 0x1003:
        goto switchD_10003284_caseD_1043;
      case 0x1004:
        goto switchD_10003284_caseD_1048;
      case 0x1005:
        goto switchD_10003284_caseD_1044;
      default:
        goto switchD_10003284_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_100033e8
#undef DAT_100034fc
#undef DAT_10003500
#undef DAT_10003504
#undef DAT_10003508
#undef DAT_1000350c
#undef DAT_10003510
#undef DAT_10003514
#undef DAT_10003518
#undef DAT_1000351c
#undef DAT_10003520
#undef DAT_10003524
#undef DAT_10003528
#undef DAT_1000352c
#undef DAT_10003530
#undef DAT_10003534
#undef DAT_10003538
#undef DAT_1000353c
#undef DAT_10003540
#undef DAT_10003544
#undef DAT_10003548
#undef DAT_1000354c
#undef DAT_10003550
#undef switchdataD_100033e8

#undef DAT_100035c8
#define DAT_100035c8 (*(uint32_t *)(0x100035c8U))
#undef DAT_100035cc
#define DAT_100035cc (*(int *)(0x100035ccU))
#undef DAT_100035d0
#define DAT_100035d0 (*(int *)(0x100035d0U))
#undef DAT_100035d4
#define DAT_100035d4 (*(int *)(0x100035d4U))
#undef DAT_100035d8
#define DAT_100035d8 (*(int *)(0x100035d8U))
#undef DAT_100035dc
#define DAT_100035dc (*(int *)(0x100035dcU))
#undef DAT_100035e0
#define DAT_100035e0 (*(int *)(0x100035e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003554
 */

int recovered_10003554(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x38dU);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x3acU);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x397U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x39cU);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x3a1U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x392U);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x3b5U);
  }
  return iVar1;
}

#undef DAT_100035c8
#undef DAT_100035cc
#undef DAT_100035d0
#undef DAT_100035d4
#undef DAT_100035d8
#undef DAT_100035dc
#undef DAT_100035e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e8
 */

uint recovered_100035e8(uint param_1,uint param_2)

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
 * Address: 0x10003638
 */

uint recovered_10003638(uint param_1,uint param_2)

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
 * Address: 0x10003670
 */

uint recovered_10003670(uint param_1,uint param_2)

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
 * Address: 0x100036e0
 */

uint recovered_100036e0(uint param_1,uint param_2)

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
 * Address: 0x10003748
 */

undefined8 recovered_10003748(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000382c
 */

undefined8 recovered_1000382c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100038ac
 */

undefined8 recovered_100038ac(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100039cc
 */

undefined8 recovered_100039cc(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003b08
#define DAT_10003b08 (*(double *)(0x10003b08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a88
 */

undefined8 recovered_10003a88(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003b08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b10
 */

undefined8 recovered_10003b10(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003a88(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003a88(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b5c
 */

void recovered_10003b5c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003a88(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x3dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b6c
 */

void recovered_10003b6c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x3c4U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b7c
 */

double recovered_10003b7c(uint param_1,uint param_2)

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
 * Address: 0x10003bc4
 */

void recovered_10003bc4(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10003b7c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10003b7c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bec
 */

float recovered_10003bec(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003b7c(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c08
 */

float recovered_10003c08(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003bc4(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
