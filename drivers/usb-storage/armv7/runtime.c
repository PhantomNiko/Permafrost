/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002354
#define DAT_10002354 (*(uint32_t *)(0x10002354U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002348
 */

void * recovered_10002348(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (void *)(((uintptr_t)pf_module_state + 0x43d8U));
}

#undef DAT_10002354

#undef DAT_10002864
#define DAT_10002864 (*(int *)(0x10002864U))
#undef DAT_10002868
#define DAT_10002868 (*(int *)(0x10002868U))
#undef DAT_1000286c
#define DAT_1000286c (*(int *)(0x1000286cU))
#undef DAT_10002870
#define DAT_10002870 (*(int *)(0x10002870U))
#undef DAT_10002874
#define DAT_10002874 (*(int *)(0x10002874U))
#undef DAT_10002878
#define DAT_10002878 (*(int *)(0x10002878U))
#undef DAT_1000287c
#define DAT_1000287c (*(int *)(0x1000287cU))
#undef DAT_10002880
#define DAT_10002880 (*(int *)(0x10002880U))
#undef DAT_10002884
#define DAT_10002884 (*(int *)(0x10002884U))
#undef DAT_10002888
#define DAT_10002888 (*(int *)(0x10002888U))
#undef DAT_1000288c
#define DAT_1000288c (*(int *)(0x1000288cU))
#undef DAT_10002890
#define DAT_10002890 (*(int *)(0x10002890U))
#undef DAT_10002894
#define DAT_10002894 (*(int *)(0x10002894U))
#undef DAT_10002898
#define DAT_10002898 (*(int *)(0x10002898U))
#undef DAT_1000289c
#define DAT_1000289c (*(int *)(0x1000289cU))
#undef DAT_100028a0
#define DAT_100028a0 (*(int *)(0x100028a0U))
#undef DAT_100028a4
#define DAT_100028a4 (*(int *)(0x100028a4U))
#undef DAT_100028a8
#define DAT_100028a8 (*(int *)(0x100028a8U))
#undef DAT_100028ac
#define DAT_100028ac (*(int *)(0x100028acU))
#undef DAT_100028b0
#define DAT_100028b0 (*(int *)(0x100028b0U))
#undef DAT_100028b4
#define DAT_100028b4 (*(int *)(0x100028b4U))
#undef DAT_100028b8
#define DAT_100028b8 (*(int *)(0x100028b8U))
#undef DAT_100028bc
#define DAT_100028bc (*(int *)(0x100028bcU))
#undef DAT_100028c0
#define DAT_100028c0 (*(int *)(0x100028c0U))
#undef DAT_100028c4
#define DAT_100028c4 (*(int *)(0x100028c4U))
#undef DAT_100028c8
#define DAT_100028c8 (*(int *)(0x100028c8U))
#define abStack_fc (*(byte (*)[96])(frame + 1300))
#define auStack_9c (*(undefined1 (*)[64])(frame + 1396))
#define local_200 (*(uint *)(frame + 1040))
#define local_1f0 (*(char *)(frame + 1056))
#define local_198 (*(uint *)(frame + 1144))
#define local_15c (*(uint *)(frame + 1204))
#define local_158 (*(uint *)(frame + 1208))
#define local_5c (*(uint *)(frame + 1460))
#define local_58 (*(uint *)(frame + 1464))
#define local_54 (*(uint *)(frame + 1468))
#define local_50 (*(uint *)(frame + 1472))
#define auStack_600 (*(undefined1 (*)[1024])(frame + 16))
#define local_4c (*(uint *)(frame + 1476))
#define local_48 (*(uint *)(frame + 1480))
#define abStack_1fc (*(byte (*)[12])(frame + 1044))
#define local_44 (*(uint *)(frame + 1484))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002358
 */

int recovered_10002358(int *api)

{
  unsigned char frame[1584] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  local_200 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != (0x54584b57U)) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  recovered_100028cc(auStack_600,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  recovered_10002e08((int)auStack_600,0x60,(char *)(((uintptr_t)pf_module_state + 0xefU)));
  recovered_10002e5c((int)auStack_600,0x60,api[1]);
  recovered_10002e08((int)auStack_600,0x60,(char *)(((uintptr_t)pf_module_state + 0xfeU)));
  if (((*api == (0x54584b57U)) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(auStack_600);
  }
  recovered_100028cc(auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x38U)));
  recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x56U)),0x1000);
  recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x67U)),0x1000);
  recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x7bU)),0x1000);
  recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x90U)),1);
  recovered_1000294c((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0xa4U)),3);
  if (((*api == (0x54584b57U)) && (0x3f < (uint)api[2])) &&
     (((code *)api[0xf] != (code *)0x0 && (iVar1 = (*(code *)api[0xf])(abStack_1fc), iVar1 != 0))))
  {
    recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x109U)),local_198);
    recovered_1000294c((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x119U)),local_15c);
    recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0x128U)),local_158);
  }
  pcVar4 = (code *)auStack_600;
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0x137U),((uintptr_t)pf_module_state + 0xaaU),auStack_600);
  if (iVar1 != 0) {
    pcVar4 = (code *)api[6];
  }
  if (iVar1 == 0 || pcVar4 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar4)(0x1000,0x1000,0x1000,1,3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (*api == (0x54584b57U)) {
    uVar2 = api[2];
    if (0x5f < uVar2) {
      if (api[0x17] != 0) {
        for (uVar2 = 0; uVar2 != 8; uVar2 = uVar2 + 1) {
          for (uVar5 = 0; uVar5 != 0x20; uVar5 = uVar5 + 1) {
            iVar1 = recovered_10002fd0(api,uVar2 & 0xff,uVar5 & 0xff,0,abStack_1fc);
            if ((iVar1 != 0) &&
               (recovered_100029bc((int)api,abStack_1fc,(int *)&local_200), local_1f0 < '\0')) {
              for (uVar7 = 1; uVar7 != 8; uVar7 = uVar7 + 1) {
                iVar1 = recovered_10002fd0(api,uVar2 & 0xff,uVar5 & 0xff,uVar7 & 0xff,abStack_fc);
                if (iVar1 != 0) {
                  recovered_100029bc((int)api,abStack_fc,(int *)&local_200);
                }
              }
            }
          }
        }
        iVar1 = 0;
        if (*api != (0x54584b57U)) goto LAB_100026bc;
      }
      uVar2 = api[2];
    }
    iVar1 = 0;
    if ((0x47 < uVar2) && ((code *)api[0x11] != (code *)0x0)) {
      iVar1 = (*(code *)api[0x11])();
    }
  }
LAB_100026bc:
  iVar6 = 0;
  while (iVar1 != iVar6) {
    iVar6 = iVar6 + 1;
    if ((((*api == (0x54584b57U)) && (0x4b < (uint)api[2])) && ((code *)api[0x12] != (code *)0x0)) &&
       (iVar3 = (*(code *)api[0x12])(iVar6,&local_5c), iVar3 != 0)) {
      recovered_100028cc(auStack_9c,0x40,(char *)(((uintptr_t)pf_module_state + 0x35cU)));
      uVar2 = local_5c;
      recovered_10002e5c((int)auStack_9c,0x40,local_5c);
      recovered_100028cc(abStack_fc,0x60,(char *)(((uintptr_t)pf_module_state + 0x372U)));
      recovered_10002e5c((int)abStack_fc,0x60,uVar2);
      recovered_100028cc(abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0x385U)));
      recovered_10002f70((int)abStack_1fc,0x100,local_58,2);
      recovered_100028e0((int)abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0x38cU)),local_54);
      recovered_100028e0((int)abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0x395U)),local_50);
      recovered_100028e0((int)abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0x39dU)),local_4c);
      recovered_1000294c((int)abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0xa4U)),local_48);
      recovered_100028e0((int)abStack_1fc,0x100,(char *)(((uintptr_t)pf_module_state + 0x3acU)),local_44);
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(auStack_9c,abStack_fc,abStack_1fc);
      }
    }
  }
  recovered_100028e0((int)auStack_600,0x400,(char *)(((uintptr_t)pf_module_state + 0xc4U)),local_200);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(((uintptr_t)pf_module_state + 0x137U),((uintptr_t)pf_module_state + 0xaaU),auStack_600);
  }
  return 1;
}

#undef DAT_10002864
#undef DAT_10002868
#undef DAT_1000286c
#undef DAT_10002870
#undef DAT_10002874
#undef DAT_10002878
#undef DAT_1000287c
#undef DAT_10002880
#undef DAT_10002884
#undef DAT_10002888
#undef DAT_1000288c
#undef DAT_10002890
#undef DAT_10002894
#undef DAT_10002898
#undef DAT_1000289c
#undef DAT_100028a0
#undef DAT_100028a4
#undef DAT_100028a8
#undef DAT_100028ac
#undef DAT_100028b0
#undef DAT_100028b4
#undef DAT_100028b8
#undef DAT_100028bc
#undef DAT_100028c0
#undef DAT_100028c4
#undef DAT_100028c8
#undef abStack_fc
#undef auStack_9c
#undef local_200
#undef local_1f0
#undef local_198
#undef local_15c
#undef local_158
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef auStack_600
#undef local_4c
#undef local_48
#undef abStack_1fc
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028cc
 */

void recovered_100028cc(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10002e08((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10002944
#define DAT_10002944 (*(int *)(0x10002944U))
#undef DAT_10002948
#define DAT_10002948 (*(int *)(0x10002948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e0
 */

void recovered_100028e0(int param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002e08(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x105U)));
  recovered_10002e08(param_1,param_2,param_3);
  recovered_10002e08(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x107U)));
  recovered_10002e5c(param_1,param_2,param_4);
  return;
}

#undef DAT_10002944
#undef DAT_10002948

#undef DAT_100029b4
#define DAT_100029b4 (*(int *)(0x100029b4U))
#undef DAT_100029b8
#define DAT_100029b8 (*(int *)(0x100029b8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000294c
 */

void recovered_1000294c(int param_1,uint param_2,char *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002e08(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x105U)));
  recovered_10002e08(param_1,param_2,param_3);
  recovered_10002e08(param_1,param_2,(char *)(((uintptr_t)pf_module_state + 0x107U)));
  recovered_10002f70(param_1,param_2,param_4,8);
  return;
}

#undef DAT_100029b4
#undef DAT_100029b8

#undef DAT_10002dc0
#define DAT_10002dc0 (*(uint32_t *)(0x10002dc0U))
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
#undef DAT_10002e00
#define DAT_10002e00 (*(int *)(0x10002e00U))
#undef DAT_10002e04
#define DAT_10002e04 (*(int *)(0x10002e04U))
#define auStack_484 (*(undefined1 (*)[1024])(frame + 1052))
#define auStack_84 (*(undefined1 (*)[100])(frame + 2076))
#define local_884 (*(char (*)[1024])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029bc
 */

void recovered_100029bc(int param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  short sVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  short sVar5;
  code *extraout_r3;
  code *extraout_r3_00;
  code *extraout_r3_01;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;

  bVar2 = false;
  if (*(short *)(param_2 + 4) == 0x1af4) {
    sVar1 = *(short *)(param_2 + 6);
    bVar2 = true;
    if (sVar1 != 0x1001) {
      sVar5 = 0x1004;
      if (sVar1 != 0x1004) {
        sVar5 = 0x1042;
      }
      if (sVar1 != 0x1004 && sVar1 != sVar5) {
        if (sVar1 != 0x1048) {
          bVar2 = false;
        }
        goto LAB_10002a24;
      }
    }
  }
  else {
LAB_10002a24:
    if ((param_2[8] != 1) && (!bVar2)) {
      return;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_100028cc(local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x138U)));
  if (bVar2) {
    pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x145U));
  }
  else {
    if (param_2[8] != 1) goto LAB_10002aa4;
    if (param_2[9] == 6) {
      pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x15fU));
    }
    else {
      if (param_2[9] != 1) goto LAB_10002aa4;
      pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x16fU));
    }
  }
  recovered_10002e08((int)local_884,0x400,pcVar4);
LAB_10002aa4:
  recovered_10002e08((int)local_884,0x400,(char *)(((uintptr_t)pf_module_state + 0x17eU)));
  iVar3 = recovered_100031e8((int)param_2);
  recovered_100028cc(auStack_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x19bU)));
  recovered_10002e08((int)auStack_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
  recovered_10002f70((int)auStack_84,0x60,(uint)*param_2,2);
  pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x1b5U));
  recovered_10002e08((int)auStack_84,0x60,pcVar4);
  recovered_10002f70((int)auStack_84,0x60,(uint)param_2[1],2);
  pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x1b7U));
  recovered_10002e08((int)auStack_84,0x60,pcVar9);
  recovered_10002e5c((int)auStack_84,0x60,(uint)param_2[2]);
  recovered_100028cc(auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b9U)));
  recovered_10002f70((int)auStack_484,0x400,(uint)*param_2,2);
  recovered_10002e08((int)auStack_484,0x400,pcVar4);
  recovered_10002f70((int)auStack_484,0x400,(uint)param_2[1],2);
  recovered_10002e08((int)auStack_484,0x400,pcVar9);
  recovered_10002e5c((int)auStack_484,0x400,(uint)param_2[2]);
  recovered_10002e08((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1beU)));
  recovered_10002f70((int)auStack_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10002e08((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1c7U)));
  recovered_10002f70((int)auStack_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10002e08((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1d0U)));
  recovered_10002f70((int)auStack_484,0x400,(uint)param_2[8],2);
  recovered_10002e08((int)auStack_484,0x400,pcVar9);
  recovered_10002f70((int)auStack_484,0x400,(uint)param_2[9],2);
  recovered_10002e08((int)auStack_484,0x400,pcVar9);
  recovered_10002f70((int)auStack_484,0x400,(uint)param_2[10],2);
  recovered_10002e08((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1d8U)));
  recovered_10002f70((int)auStack_484,0x400,(uint)param_2[0xb],2);
  recovered_1000294c((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1e3U)),
                     *(uint *)(param_2 + 0x10));
  pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x1ebU));
  pcVar4 = (char *)(((uintptr_t)pf_module_state + 0x107U));
  pcVar6 = extraout_r3;
  for (uVar7 = 0; uVar7 != 6; uVar7 = uVar7 + 1) {
    uVar8 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
    if (uVar8 != 0) {
      recovered_10002e08((int)auStack_484,0x400,pcVar9);
      recovered_10002e5c((int)auStack_484,0x400,uVar7);
      recovered_10002e08((int)auStack_484,0x400,pcVar4);
      recovered_10002f70((int)auStack_484,0x400,uVar8,8);
      pcVar6 = extraout_r3_00;
    }
  }
  if (local_884[0] != '\0') {
    recovered_10002e08((int)auStack_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x105U)));
    recovered_10002e08((int)auStack_484,0x400,local_884);
    pcVar6 = extraout_r3_01;
  }
  if (param_1 != 0) {
    pcVar6 = *(code **)(param_1 + 0xc);
  }
  if (param_1 != 0 && pcVar6 != (code *)0x0) {
    (*pcVar6)(auStack_84,iVar3,auStack_484);
  }
  return;
}

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
#undef DAT_10002e00
#undef DAT_10002e04
#undef auStack_484
#undef auStack_84
#undef local_884

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e08
 */

void recovered_10002e08(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10002f0c(param_1);
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
 * Address: 0x10002e5c
 */

void recovered_10002e5c(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_10002f34(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_100035f0(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_10002f34(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f0c
 */

int recovered_10002f0c(int param_1)

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
 * Address: 0x10002f34
 */

void recovered_10002f34(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10002f0c(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f70
 */

void recovered_10002f70(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_10002f34(param_1,param_2,bVar3);
  }
  return;
}


#define local_24 (*(undefined4 *)(frame + 172))
#define auStackY_b8 (*(undefined1 (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd0
 */

undefined4
recovered_10002fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1 = 0;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;

  uVar5 = 0;
  local_24 = 0;
  if ((param_5 != (undefined1 *)0x0) &&
     (iVar2 = recovered_10003170(param_1,param_2,param_3,param_4,0,(int)&local_24), iVar2 != 0)) {
    uVar3 = local_24 & 0xffff;
    uVar4 = extraout_r1;
    if (uVar3 != 0) {
      uVar4 = 0xffff;
    }
    if ((uVar3 != 0 && uVar3 != uVar4) &&
       (iVar2 = recovered_10003170(param_1,param_2,param_3,param_4,8,(int)(auStackY_b8 + 0x90)),
       iVar2 != 0)) {
      iVar2 = recovered_10003170(param_1,param_2,param_3,param_4,4,(int)(param_5 + 0x10));
      if (iVar2 == 0) {
        *(undefined4 *)(param_5 + 0x10) = 0;
      }
      iVar2 = recovered_10003170(param_1,param_2,param_3,param_4,0xc,(int)(auStackY_b8 + 0x8c));
      bVar6 = iVar2 == 0;
      if (bVar6) {
        iVar2 = 0;
      }
      uVar1 = (undefined1)iVar2;
      *(uint *)(param_5 + 4) = local_24;
      if (!bVar6) {
        uVar1 = 0;
      }
      param_5[0xc] = uVar1;
      param_5[2] = (char)param_4;
      *(undefined2 *)(param_5 + 10) = 0;
      param_5[1] = (char)param_3;
      *param_5 = (char)param_2;
      param_5[9] = 0;
      param_5[8] = 0;
      for (iVar2 = 0; iVar2 != 6; iVar2 = iVar2 + 1) {
        recovered_10003170(param_1,param_2,param_3,param_4,iVar2 * 4 + 0x10U & 0xffff,
                           (int)(auStackY_b8 + 0x88));
        *(undefined4 *)(param_5 + iVar2 * 4 + 0x14) = 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

#undef local_24
#undef auStackY_b8

#undef DAT_100031e4
#define DAT_100031e4 (*(uint8_t * *)(0x100031e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

undefined4
recovered_10003170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *pcVar2;

  if (((param_1 != (undefined4 *)0x0) && ((code *)*param_1 == (0x54584b57U))) &&
     (0x5f < (uint)param_1[2])) {
    pcVar2 = (0x54584b57U);
    if (param_6 != 0) {
      pcVar2 = (code *)param_1[0x17];
    }
    if (param_6 != 0 && pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_2,param_3,param_4,param_5,4,param_6);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100031e4

#undef DAT_100033f0
#define DAT_100033f0 (*(uint *)(0x100033f0U))
#undef DAT_10003504
#define DAT_10003504 (*(uint32_t *)(0x10003504U))
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
#undef DAT_10003554
#define DAT_10003554 (*(int *)(0x10003554U))
#undef DAT_10003558
#define DAT_10003558 (*(int *)(0x10003558U))
#undef switchdataD_100033f0
#define switchdataD_100033f0 (*(uint *)(0x100033f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e8
 */

int recovered_100031e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_100033ec_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x2aaU);
    }
LAB_100033cc:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_100033ec_caseD_5;
    iVar3 = (int)&DAT_100033f0 + (0xb12U);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x2fcU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x2e9U);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x30fU);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10003450:
        iVar3 = recovered_1000355c((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_100033ec_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x1f0U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x2a1U);
      }
      goto LAB_100033cc;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_1000338c:
        return ((uintptr_t)pf_module_state + 0x2cfU);
      }
      goto LAB_100033cc;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_1000338c;
      goto LAB_100033cc;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x2c6U);
      }
      goto LAB_100033cc;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x2b5U);
      }
      goto LAB_100033cc;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x28bU);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10003450;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x297U);
        }
      }
      goto LAB_100033cc;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x2beU);
      }
      goto LAB_100033cc;
    }
    if (sVar2 != 0x1af4) goto LAB_100033cc;
    iVar3 = ((uintptr_t)pf_module_state + 0x1fbU);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_1000328c_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x20aU);
      break;
    case 0x1043:
switchD_1000328c_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x22eU);
      break;
    case 0x1044:
switchD_1000328c_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x251U);
      break;
    case 0x1045:
switchD_1000328c_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x21bU);
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
switchD_1000328c_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x280U);
      break;
    case 0x1048:
switchD_1000328c_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x241U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x260U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x26fU);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_1000328c_caseD_1042;
      case 0x1002:
        goto switchD_1000328c_caseD_1045;
      case 0x1003:
        goto switchD_1000328c_caseD_1043;
      case 0x1004:
        goto switchD_1000328c_caseD_1048;
      case 0x1005:
        goto switchD_1000328c_caseD_1044;
      default:
        goto switchD_1000328c_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_100033f0
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
#undef DAT_10003554
#undef DAT_10003558
#undef switchdataD_100033f0

#undef DAT_100035d0
#define DAT_100035d0 (*(uint32_t *)(0x100035d0U))
#undef DAT_100035d4
#define DAT_100035d4 (*(int *)(0x100035d4U))
#undef DAT_100035d8
#define DAT_100035d8 (*(int *)(0x100035d8U))
#undef DAT_100035dc
#define DAT_100035dc (*(int *)(0x100035dcU))
#undef DAT_100035e0
#define DAT_100035e0 (*(int *)(0x100035e0U))
#undef DAT_100035e4
#define DAT_100035e4 (*(int *)(0x100035e4U))
#undef DAT_100035e8
#define DAT_100035e8 (*(int *)(0x100035e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000355c
 */

int recovered_1000355c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x325U);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x344U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x32fU);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x334U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x339U);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x32aU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x34dU);
  }
  return iVar1;
}

#undef DAT_100035d0
#undef DAT_100035d4
#undef DAT_100035d8
#undef DAT_100035dc
#undef DAT_100035e0
#undef DAT_100035e4
#undef DAT_100035e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035f0
 */

uint recovered_100035f0(uint param_1,uint param_2)

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
 * Address: 0x10003640
 */

uint recovered_10003640(uint param_1,uint param_2)

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
 * Address: 0x10003678
 */

uint recovered_10003678(uint param_1,uint param_2)

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
 * Address: 0x100036e8
 */

uint recovered_100036e8(uint param_1,uint param_2)

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
 * Address: 0x10003750
 */

undefined8 recovered_10003750(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10003834
 */

undefined8 recovered_10003834(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100038b4
 */

undefined8 recovered_100038b4(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100039d4
 */

undefined8 recovered_100039d4(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10003b10
#define DAT_10003b10 (*(double *)(0x10003b10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a90
 */

undefined8 recovered_10003a90(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10003b10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b18
 */

undefined8 recovered_10003b18(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10003a90(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10003a90(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b64
 */

void recovered_10003b64(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003a90(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10004000
#define DAT_10004000 (*(code * *)(((uintptr_t)pf_module_state + 0x3d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b74
 */

void recovered_10003b74(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x3bcU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10004000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10004000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b84
 */

double recovered_10003b84(uint param_1,uint param_2)

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
 * Address: 0x10003bcc
 */

void recovered_10003bcc(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_10003b84(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_10003b84(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf4
 */

float recovered_10003bf4(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003b84(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c10
 */

float recovered_10003c10(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10003bcc(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
