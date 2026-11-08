/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered driver descriptor; Pooka's Free Software License. */
int recovered_10003188(void)
{
 return (int)(pf_module_state + 0x4950);
}


#undef DAT_100038ec
#define DAT_100038ec (*(int *)(0x100038ecU))
#undef DAT_100038f0
#define DAT_100038f0 (*(uint64_t *)(0x100038f0U))
#undef DAT_100038f8
#define DAT_100038f8 (*(uint64_t *)(0x100038f8U))
#undef DAT_10003900
#define DAT_10003900 (*(int *)(0x10003900U))
#undef DAT_10003904
#define DAT_10003904 (*(int *)(0x10003904U))
#undef DAT_10003908
#define DAT_10003908 (*(int *)(0x10003908U))
#undef DAT_1000390c
#define DAT_1000390c (*(int *)(0x1000390cU))
#undef DAT_10003910
#define DAT_10003910 (*(int *)(0x10003910U))
#undef DAT_10003914
#define DAT_10003914 (*(int *)(0x10003914U))
#undef DAT_10003918
#define DAT_10003918 (*(int *)(0x10003918U))
#undef DAT_1000391c
#define DAT_1000391c (*(int *)(0x1000391cU))
#undef DAT_10003920
#define DAT_10003920 (*(int *)(0x10003920U))
#undef DAT_10003924
#define DAT_10003924 (*(int *)(0x10003924U))
#undef DAT_10003928
#define DAT_10003928 (*(int *)(0x10003928U))
#undef DAT_1000392c
#define DAT_1000392c (*(int *)(0x1000392cU))
#undef DAT_10003930
#define DAT_10003930 (*(int *)(0x10003930U))
#undef DAT_10003934
#define DAT_10003934 (*(int *)(0x10003934U))
#undef DAT_10003938
#define DAT_10003938 (*(int *)(0x10003938U))
#undef DAT_1000393c
#define DAT_1000393c (*(int *)(0x1000393cU))
#undef DAT_10003940
#define DAT_10003940 (*(int *)(0x10003940U))
#undef DAT_10003944
#define DAT_10003944 (*(int *)(0x10003944U))
#undef DAT_10003948
#define DAT_10003948 (*(int *)(0x10003948U))
#undef DAT_1000394c
#define DAT_1000394c (*(int *)(0x1000394cU))
#undef DAT_10003950
#define DAT_10003950 (*(int *)(0x10003950U))
#undef DAT_10003954
#define DAT_10003954 (*(int *)(0x10003954U))
#undef DAT_10003958
#define DAT_10003958 (*(int *)(0x10003958U))
#undef DAT_1000395c
#define DAT_1000395c (*(int *)(0x1000395cU))
#undef DAT_10003960
#define DAT_10003960 (*(int *)(0x10003960U))
#undef DAT_10003964
#define DAT_10003964 (*(int *)(0x10003964U))
#undef DAT_10003968
#define DAT_10003968 (*(int *)(0x10003968U))
#undef DAT_1000396c
#define DAT_1000396c (*(int *)(0x1000396cU))
#undef DAT_10003970
#define DAT_10003970 (*(int *)(0x10003970U))
#undef DAT_10003974
#define DAT_10003974 (*(int *)(0x10003974U))
#undef DAT_10003978
#define DAT_10003978 (*(int *)(0x10003978U))
#undef DAT_1000397c
#define DAT_1000397c (*(int *)(0x1000397cU))
#undef DAT_10003980
#define DAT_10003980 (*(int *)(0x10003980U))
#undef DAT_10003984
#define DAT_10003984 (*(int *)(0x10003984U))
#undef DAT_10003988
#define DAT_10003988 (*(int *)(0x10003988U))
#undef DAT_1000398c
#define DAT_1000398c (*(int *)(0x1000398cU))
#undef DAT_10003990
#define DAT_10003990 (*(int *)(0x10003990U))
#undef DAT_10003994
#define DAT_10003994 (*(int *)(0x10003994U))
#undef DAT_10003998
#define DAT_10003998 (*(int *)(0x10003998U))
#undef DAT_1000399c
#define DAT_1000399c (*(int *)(0x1000399cU))
#undef DAT_100039a0
#define DAT_100039a0 (*(int *)(0x100039a0U))
#undef DAT_100039a4
#define DAT_100039a4 (*(int *)(0x100039a4U))
#undef DAT_100039a8
#define DAT_100039a8 (*(int *)(0x100039a8U))
#undef DAT_100039ac
#define DAT_100039ac (*(int *)(0x100039acU))
#define auStack_564 (*(undefined1 (*)[1024])(frame + 28))
#define local_56c (*(char * *)(frame + 20))
#define local_568 (*(int *)(frame + 24))
#define local_164 (*(int (*)[4])(frame + 1052))
#define local_154 (*(uint *)(frame + 1068))
#define local_150 (*(uint *)(frame + 1072))
#define local_14c (*(uint *)(frame + 1076))
#define local_130 (*(int (*)[4])(frame + 1104))
#define local_120 (*(uint *)(frame + 1120))
#define uStack_f0 (*(undefined8 *)(frame + 1168))
#define auStack_e8 (*(undefined1 (*)[64])(frame + 1176))
#define local_11c (*(uint *)(frame + 1124))
#define auStack_a8 (*(undefined1 (*)[20])(frame + 1240))
#define local_118 (*(uint *)(frame + 1128))
#define local_fc (*(uint *)(frame + 1156))
#define local_f8 (*(undefined8 *)(frame + 1160))
#define abStack_50 (*(byte (*)[48])(frame + 1328))
#define local_94 (*(uint *)(frame + 1260))
#define local_58 (*(uint *)(frame + 1320))
#define local_54 (*(uint *)(frame + 1324))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003198
 */

int recovered_10003198(int *api)

{
  unsigned char frame[1440] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;

  iVar3 = (0x54584b57U);
  local_fc = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != (0x54584b57U)) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  recovered_10003a70(auStack_564,0x60,(char *)(((uintptr_t)pf_module_state + 0x24U)));
  recovered_100055b0((int)auStack_564,0x60,(char *)(((uintptr_t)pf_module_state + 0x19dU)));
  recovered_10005604((int)auStack_564,0x60,api[1]);
  recovered_100055b0((int)auStack_564,0x60,(char *)(((uintptr_t)pf_module_state + 0x1acU)));
  if (((*api == iVar3) && (0x2b < (uint)api[2])) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(auStack_564);
  }
  *(undefined1 *)(((uintptr_t)pf_module_state + 0xb2cU)) = 0;
  recovered_100039b0((undefined1 *)local_130,0x34);
  recovered_100039b0((undefined1 *)local_164,0x34);
  iVar3 = recovered_100039d4(api,(int)local_130);
  if ((iVar3 == 0) || (bVar2 = recovered_10003a1c(local_130), !bVar2)) {
    if ((code *)api[5] == (code *)0x0) {
      iVar10 = 0;
      iVar4 = 0;
      local_568 = 0;
    }
    else {
      iVar6 = (*(code *)api[5])(0x500,800,0x20);
      iVar10 = 0;
      local_568 = 0;
      iVar4 = 0;
      if (iVar6 != 0) {
        if (((*api == (0x54584b57U)) && (0xa3 < (uint)api[2])) && ((code *)api[0x28] != (code *)0x0))
        {
          iVar10 = (*(code *)api[0x28])();
        }
        local_568 = recovered_100039d4(api,(int)local_164);
        iVar4 = iVar6;
      }
    }
  }
  else {
    for (iVar4 = 0; iVar4 != 0x34; iVar4 = iVar4 + 1) {
      *(undefined1 *)((int)local_164 + iVar4) = *(undefined1 *)((int)local_130 + iVar4);
    }
    iVar10 = 1;
    local_568 = iVar3;
    iVar4 = 0;
  }
  pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x135U));
  if ((*api == (0x54584b57U)) && (0xb7 < (uint)api[2])) {
    if ((code *)api[0x2d] != (code *)0x0) {
      uVar5 = (*(code *)api[0x2d])(1);
      pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x125U));
      if ((uVar5 & 1) == 0) {
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x135U));
      }
    }
  }
  bVar2 = recovered_10003a1c(local_130);
  local_56c = (char *)(((uintptr_t)pf_module_state + 0x150U));
  if (bVar2) {
    piVar7 = local_130;
LAB_100033f8:
    uVar11 = piVar7[4];
    uVar5 = piVar7[5];
    if (uVar11 == 0) {
      uVar11 = 0;
      goto LAB_100034a4;
    }
    if (uVar5 == 0) {
      uVar5 = 0;
      goto LAB_100034a4;
    }
  }
  else {
    bVar2 = recovered_10003a1c(local_164);
    if (bVar2) {
      piVar7 = local_164;
      goto LAB_100033f8;
    }
    uVar11 = 0x3c0;
    uVar5 = 0x220;
  }
  bVar2 = recovered_10003a1c(local_130);
  if ((((!bVar2) && (bVar2 = recovered_10003a1c(local_164), !bVar2)) &&
      ((code *)api[7] != (code *)0x0)) && (iVar6 = (*(code *)api[7])(uVar11,uVar5,0x20), iVar6 != 0)
     ) {
    local_568 = recovered_100039d4(api,(int)local_164);
    local_56c = (char *)(((uintptr_t)pf_module_state + 0x145U));
  }
LAB_100034a4:
  recovered_10003a70(auStack_564,0x400,(char *)(((uintptr_t)pf_module_state + 0x39U)));
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x6bU)),0x500);
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x7aU)),800);
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x8aU)),0x20);
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x97U)),uVar11);
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xa2U)),uVar5);
  recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xaeU)),0x20);
  recovered_10003ae8((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xb7U)),iVar4);
  recovered_10003ae8((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xc5U)),iVar10);
  if (iVar3 != 0) {
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xd1U)),local_120);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xddU)),local_11c);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xeaU)),local_118);
  }
  if (local_568 != 0) {
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xf4U)),local_154);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0xffU)),local_150);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x10bU)),local_14c);
  }
  recovered_10003b10((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x114U)),pcVar9);
  recovered_10003b10((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x13fU)),local_56c);
  iVar3 = (0x54584b57U);
  if (((*api == (0x54584b57U)) && (0x3f < (uint)api[2])) &&
     (((code *)api[0xf] != (code *)0x0 && (iVar4 = (*(code *)api[0xf])(&local_f8), iVar4 != 0)))) {
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x1c3U)),local_94);
    recovered_10005718((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x1d3U)),local_58);
    iVar3 = (0x54584b57U);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x1e2U)),local_54);
  }
  iVar4 = 0;
  if (((code *)api[3] != (code *)0x0) &&
     (iVar10 = (*(code *)api[3])(((uintptr_t)pf_module_state + 0x1c2U),((uintptr_t)pf_module_state + 0x15cU),auStack_564),
     iVar10 != 0)) {
    if ((*api == iVar3) && ((0x5f < (uint)api[2] && (api[0x17] != 0)))) {
      for (uVar5 = 0; uVar5 != 8; uVar5 = uVar5 + 1) {
        for (uVar11 = 0; uVar11 != 0x20; uVar11 = uVar11 + 1) {
          iVar3 = recovered_100057e0(api,uVar5 & 0xff,uVar11 & 0xff,0,(undefined1 *)&local_f8);
          if (iVar3 != 0) {
            recovered_10003b84(api,(byte *)&local_f8,(int *)&local_fc);
            if (((int8_t)PF_PART1(uStack_f0, 4)) < '\0') {
              for (uVar12 = 1; uVar12 != 8; uVar12 = uVar12 + 1) {
                iVar3 = recovered_100057e0(api,uVar5 & 0xff,uVar11 & 0xff,uVar12 & 0xff,abStack_50);
                if (iVar3 != 0) {
                  recovered_10003b84(api,abStack_50,(int *)&local_fc);
                }
              }
            }
          }
        }
      }
    }
    cVar1 = *(char *)(((uintptr_t)pf_module_state + 0xb2cU));
    recovered_100039b0((undefined1 *)&local_f8,0x90);
    pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x8f9U));
    if (cVar1 != '\0') {
      pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x8ddU));
    }
    local_f8 = (0xc00000090U);
    uStack_f0 = (0x10000000007U);
    recovered_10003a70(auStack_e8,0x40,pcVar9);
    recovered_10003a70(auStack_a8,0x40,(char *)(((uintptr_t)pf_module_state + 0x24U)));
    pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x150U));
    if ((*api == (0x54584b57U)) && (199 < (uint)api[2])) {
      if ((code *)api[0x31] != (code *)0x0) {
        iVar3 = (*(code *)api[0x31])(&local_f8,recovered_100069dc);
        pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x92aU));
        if (cVar1 != '\0') {
          pcVar8 = (char *)(((uintptr_t)pf_module_state + 0x91aU));
        }
        pcVar9 = (char *)(((uintptr_t)pf_module_state + 0x150U));
        if (iVar3 != 0) {
          pcVar9 = pcVar8;
        }
      }
    }
    recovered_10003b10((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x90eU)),pcVar9);
    recovered_10003a84((int)auStack_564,(char *)(((uintptr_t)pf_module_state + 0x17aU)),local_fc);
    iVar4 = 1;
    if ((code *)api[3] != (code *)0x0) {
      (*(code *)api[3])(((uintptr_t)pf_module_state + 0x1c2U),((uintptr_t)pf_module_state + 0x15cU),auStack_564);
    }
  }
  return iVar4;
}

/* Freestanding compiler service; Pooka's Free Software License. */
void bzero(void *p,unsigned long n)
{
 volatile unsigned char *d=p;while(n--)*d++=0;
}

void *memset(void *p,int v,unsigned long n)
{
 volatile unsigned char *d=p;while(n--)*d++=(unsigned char)v;return p;
}

#undef DAT_100038ec
#undef DAT_100038f0
#undef DAT_100038f8
#undef DAT_10003900
#undef DAT_10003904
#undef DAT_10003908
#undef DAT_1000390c
#undef DAT_10003910
#undef DAT_10003914
#undef DAT_10003918
#undef DAT_1000391c
#undef DAT_10003920
#undef DAT_10003924
#undef DAT_10003928
#undef DAT_1000392c
#undef DAT_10003930
#undef DAT_10003934
#undef DAT_10003938
#undef DAT_1000393c
#undef DAT_10003940
#undef DAT_10003944
#undef DAT_10003948
#undef DAT_1000394c
#undef DAT_10003950
#undef DAT_10003954
#undef DAT_10003958
#undef DAT_1000395c
#undef DAT_10003960
#undef DAT_10003964
#undef DAT_10003968
#undef DAT_1000396c
#undef DAT_10003970
#undef DAT_10003974
#undef DAT_10003978
#undef DAT_1000397c
#undef DAT_10003980
#undef DAT_10003984
#undef DAT_10003988
#undef DAT_1000398c
#undef DAT_10003990
#undef DAT_10003994
#undef DAT_10003998
#undef DAT_1000399c
#undef DAT_100039a0
#undef DAT_100039a4
#undef DAT_100039a8
#undef DAT_100039ac
#undef auStack_564
#undef local_56c
#undef local_568
#undef local_164
#undef local_154
#undef local_150
#undef local_14c
#undef local_130
#undef local_120
#undef uStack_f0
#undef auStack_e8
#undef local_11c
#undef auStack_a8
#undef local_118
#undef local_fc
#undef local_f8
#undef abStack_50
#undef local_94
#undef local_58
#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039b0
 */

void recovered_100039b0(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_10003a18
#define DAT_10003a18 (*(int *)(0x10003a18U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d4
 */

undefined4 recovered_100039d4(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if (((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) &&
     (UNRECOVERED_JUMPTABLE = (code *)param_1[2], (code *)0x43 < UNRECOVERED_JUMPTABLE)) {
    if (param_2 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x10];
    }
    if (param_2 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10003a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003a18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a1c
 */

bool recovered_10003a1c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  bool bVar3;

  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[1];
  }
  bVar3 = bVar2 && iVar1 == 0;
  if (!bVar2 || iVar1 != 0) {
    bVar3 = param_1[3] == 0;
  }
  if (!bVar3) {
    iVar1 = 0;
    if (param_1[4] != 0) {
      iVar1 = param_1[5];
    }
    if (param_1[4] != 0 && iVar1 != 0) {
      return param_1[6] != 0;
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a70
 */

void recovered_10003a70(undefined1 *param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_100055b0((int)param_1,param_2,param_3);
  return;
}


#undef DAT_10003ae0
#define DAT_10003ae0 (*(int *)(0x10003ae0U))
#undef DAT_10003ae4
#define DAT_10003ae4 (*(int *)(0x10003ae4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a84
 */

void recovered_10003a84(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
  recovered_100055b0(param_1,0x400,param_2);
  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b5U)));
  recovered_10005604(param_1,0x400,param_3);
  return;
}

#undef DAT_10003ae0
#undef DAT_10003ae4

#undef DAT_10003b08
#define DAT_10003b08 (*(int *)(0x10003b08U))
#undef DAT_10003b0c
#define DAT_10003b0c (*(int *)(0x10003b0cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae8
 */

void recovered_10003ae8(int param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x1b7U));
  if (param_3 == 0) {
    pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x1bcU));
  }
  recovered_10003b10(param_1,param_2,pcVar1);
  return;
}

#undef DAT_10003b08
#undef DAT_10003b0c

#undef DAT_10003b78
#define DAT_10003b78 (*(int *)(0x10003b78U))
#undef DAT_10003b7c
#define DAT_10003b7c (*(int *)(0x10003b7cU))
#undef DAT_10003b80
#define DAT_10003b80 (*(int *)(0x10003b80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b10
 */

void recovered_10003b10(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
  recovered_100055b0(param_1,0x400,param_2);
  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b5U)));
  pcVar1 = (char *)(((uintptr_t)pf_module_state + 0x1c2U));
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  recovered_100055b0(param_1,0x400,pcVar1);
  return;
}

#undef DAT_10003b78
#undef DAT_10003b7c
#undef DAT_10003b80

#undef DAT_10004ae4
#define DAT_10004ae4 (*(uint32_t *)(0x10004ae4U))
#undef DAT_10004ae8
#define DAT_10004ae8 (*(int *)(0x10004ae8U))
#undef DAT_10004aec
#define DAT_10004aec (*(int *)(0x10004aecU))
#undef DAT_10004af0
#define DAT_10004af0 (*(int *)(0x10004af0U))
#undef DAT_10004af4
#define DAT_10004af4 (*(int *)(0x10004af4U))
#undef DAT_10004af8
#define DAT_10004af8 (*(int *)(0x10004af8U))
#undef DAT_10004afc
#define DAT_10004afc (*(int *)(0x10004afcU))
#undef DAT_10004b00
#define DAT_10004b00 (*(int *)(0x10004b00U))
#undef DAT_10004b04
#define DAT_10004b04 (*(int *)(0x10004b04U))
#undef DAT_10004b08
#define DAT_10004b08 (*(int *)(0x10004b08U))
#undef DAT_10004b0c
#define DAT_10004b0c (*(int *)(0x10004b0cU))
#undef DAT_10004b10
#define DAT_10004b10 (*(int *)(0x10004b10U))
#undef DAT_10004b14
#define DAT_10004b14 (*(int *)(0x10004b14U))
#undef DAT_10004b18
#define DAT_10004b18 (*(int *)(0x10004b18U))
#undef DAT_10004b1c
#define DAT_10004b1c (*(int *)(0x10004b1cU))
#undef DAT_10004dc4
#define DAT_10004dc4 (*(int *)(0x10004dc4U))
#undef DAT_10004dc8
#define DAT_10004dc8 (*(int *)(0x10004dc8U))
#undef DAT_10004dcc
#define DAT_10004dcc (*(int *)(0x10004dccU))
#undef DAT_10004dd0
#define DAT_10004dd0 (*(int *)(0x10004dd0U))
#undef DAT_10004dd4
#define DAT_10004dd4 (*(int *)(0x10004dd4U))
#undef DAT_10004e3c
#define DAT_10004e3c (*(int *)(0x10004e3cU))
#undef DAT_10004e40
#define DAT_10004e40 (*(int *)(0x10004e40U))
#undef DAT_10004e44
#define DAT_10004e44 (*(int *)(0x10004e44U))
#undef DAT_10004e48
#define DAT_10004e48 (*(int *)(0x10004e48U))
#undef DAT_10004e4c
#define DAT_10004e4c (*(int *)(0x10004e4cU))
#undef DAT_10004e50
#define DAT_10004e50 (*(int *)(0x10004e50U))
#undef DAT_10004e54
#define DAT_10004e54 (*(int *)(0x10004e54U))
#undef DAT_10004e58
#define DAT_10004e58 (*(int *)(0x10004e58U))
#undef DAT_10004e5c
#define DAT_10004e5c (*(int *)(0x10004e5cU))
#undef DAT_10004e60
#define DAT_10004e60 (*(int *)(0x10004e60U))
#undef DAT_10004e64
#define DAT_10004e64 (*(int *)(0x10004e64U))
#undef DAT_10004e68
#define DAT_10004e68 (*(int *)(0x10004e68U))
#undef DAT_10004e6c
#define DAT_10004e6c (*(int *)(0x10004e6cU))
#undef DAT_10004e70
#define DAT_10004e70 (*(int *)(0x10004e70U))
#undef DAT_10004e74
#define DAT_10004e74 (*(int *)(0x10004e74U))
#undef DAT_10004e78
#define DAT_10004e78 (*(int *)(0x10004e78U))
#undef DAT_10004e7c
#define DAT_10004e7c (*(int *)(0x10004e7cU))
#undef DAT_1000521c
#define DAT_1000521c (*(int *)(0x1000521cU))
#undef DAT_10005220
#define DAT_10005220 (*(int *)(0x10005220U))
#undef DAT_10005224
#define DAT_10005224 (*(int *)(0x10005224U))
#undef DAT_10005228
#define DAT_10005228 (*(int *)(0x10005228U))
#undef DAT_1000522c
#define DAT_1000522c (*(int *)(0x1000522cU))
#undef DAT_10005330
#define DAT_10005330 (*(uint32_t *)(0x10005330U))
#undef DAT_10005334
#define DAT_10005334 (*(int *)(0x10005334U))
#undef DAT_10005338
#define DAT_10005338 (*(int *)(0x10005338U))
#undef DAT_1000533c
#define DAT_1000533c (*(int *)(0x1000533cU))
#undef DAT_10005488
#define DAT_10005488 (*(int *)(0x10005488U))
#undef DAT_1000548c
#define DAT_1000548c (*(int *)(0x1000548cU))
#undef DAT_10005490
#define DAT_10005490 (*(int *)(0x10005490U))
#undef DAT_10005494
#define DAT_10005494 (*(int *)(0x10005494U))
#undef DAT_10005498
#define DAT_10005498 (*(int *)(0x10005498U))
#undef DAT_1000549c
#define DAT_1000549c (*(int *)(0x1000549cU))
#undef DAT_100054a0
#define DAT_100054a0 (*(int *)(0x100054a0U))
#undef DAT_100054a4
#define DAT_100054a4 (*(int *)(0x100054a4U))
#undef DAT_100054a8
#define DAT_100054a8 (*(int *)(0x100054a8U))
#undef DAT_100054ac
#define DAT_100054ac (*(int *)(0x100054acU))
#undef DAT_100054b0
#define DAT_100054b0 (*(int *)(0x100054b0U))
#undef DAT_100054b4
#define DAT_100054b4 (*(int *)(0x100054b4U))
#undef DAT_100054b8
#define DAT_100054b8 (*(int *)(0x100054b8U))
#undef DAT_100054bc
#define DAT_100054bc (*(int *)(0x100054bcU))
#undef DAT_100054c0
#define DAT_100054c0 (*(int *)(0x100054c0U))
#undef DAT_100054c4
#define DAT_100054c4 (*(int *)(0x100054c4U))
#undef DAT_100054c8
#define DAT_100054c8 (*(int *)(0x100054c8U))
#undef DAT_100054cc
#define DAT_100054cc (*(int *)(0x100054ccU))
#undef DAT_100054d0
#define DAT_100054d0 (*(int *)(0x100054d0U))
#undef DAT_100054d4
#define DAT_100054d4 (*(int *)(0x100054d4U))
#undef DAT_100054d8
#define DAT_100054d8 (*(int *)(0x100054d8U))
#undef DAT_100054dc
#define DAT_100054dc (*(int *)(0x100054dcU))
#undef DAT_100054e0
#define DAT_100054e0 (*(int *)(0x100054e0U))
#undef DAT_100054e4
#define DAT_100054e4 (*(int *)(0x100054e4U))
#undef DAT_100054e8
#define DAT_100054e8 (*(int *)(0x100054e8U))
#undef DAT_100054ec
#define DAT_100054ec (*(int *)(0x100054ecU))
#undef DAT_100054f0
#define DAT_100054f0 (*(int *)(0x100054f0U))
#undef DAT_100054f4
#define DAT_100054f4 (*(int *)(0x100054f4U))
#undef DAT_100054f8
#define DAT_100054f8 (*(int *)(0x100054f8U))
#undef DAT_100054fc
#define DAT_100054fc (*(int *)(0x100054fcU))
#undef DAT_10005500
#define DAT_10005500 (*(int *)(0x10005500U))
#undef DAT_10005504
#define DAT_10005504 (*(int *)(0x10005504U))
#undef DAT_10005508
#define DAT_10005508 (*(int *)(0x10005508U))
#undef DAT_1000550c
#define DAT_1000550c (*(int *)(0x1000550cU))
#undef DAT_10005510
#define DAT_10005510 (*(int *)(0x10005510U))
#undef DAT_10005514
#define DAT_10005514 (*(int *)(0x10005514U))
#undef DAT_10005518
#define DAT_10005518 (*(int *)(0x10005518U))
#undef DAT_1000551c
#define DAT_1000551c (*(int *)(0x1000551cU))
#undef DAT_10005520
#define DAT_10005520 (*(int *)(0x10005520U))
#undef DAT_10005524
#define DAT_10005524 (*(int *)(0x10005524U))
#undef DAT_10005528
#define DAT_10005528 (*(int *)(0x10005528U))
#undef DAT_1000552c
#define DAT_1000552c (*(int *)(0x1000552cU))
#undef DAT_10005530
#define DAT_10005530 (*(int *)(0x10005530U))
#undef DAT_10005534
#define DAT_10005534 (*(int *)(0x10005534U))
#undef DAT_10005538
#define DAT_10005538 (*(int *)(0x10005538U))
#undef DAT_1000553c
#define DAT_1000553c (*(uint32_t *)(0x1000553cU))
#undef DAT_10005540
#define DAT_10005540 (*(int *)(0x10005540U))
#undef DAT_10005544
#define DAT_10005544 (*(int *)(0x10005544U))
#undef DAT_10005548
#define DAT_10005548 (*(int *)(0x10005548U))
#undef DAT_1000554c
#define DAT_1000554c (*(int *)(0x1000554cU))
#undef DAT_10005550
#define DAT_10005550 (*(int *)(0x10005550U))
#undef DAT_10005554
#define DAT_10005554 (*(int *)(0x10005554U))
#undef DAT_10005558
#define DAT_10005558 (*(int *)(0x10005558U))
#undef DAT_1000555c
#define DAT_1000555c (*(int *)(0x1000555cU))
#undef DAT_10005560
#define DAT_10005560 (*(int *)(0x10005560U))
#undef DAT_10005564
#define DAT_10005564 (*(int *)(0x10005564U))
#undef DAT_10005568
#define DAT_10005568 (*(int *)(0x10005568U))
#undef DAT_1000556c
#define DAT_1000556c (*(int *)(0x1000556cU))
#undef DAT_10005570
#define DAT_10005570 (*(int *)(0x10005570U))
#undef DAT_10005574
#define DAT_10005574 (*(int *)(0x10005574U))
#undef DAT_10005578
#define DAT_10005578 (*(int *)(0x10005578U))
#undef DAT_1000557c
#define DAT_1000557c (*(int *)(0x1000557cU))
#undef DAT_10005580
#define DAT_10005580 (*(int *)(0x10005580U))
#undef DAT_10005584
#define DAT_10005584 (*(int *)(0x10005584U))
#undef DAT_10005588
#define DAT_10005588 (*(int *)(0x10005588U))
#undef DAT_1000558c
#define DAT_1000558c (*(int *)(0x1000558cU))
#undef DAT_10005590
#define DAT_10005590 (*(int *)(0x10005590U))
#undef DAT_10005594
#define DAT_10005594 (*(int *)(0x10005594U))
#undef DAT_10005598
#define DAT_10005598 (*(int *)(0x10005598U))
#undef DAT_1000559c
#define DAT_1000559c (*(int *)(0x1000559cU))
#undef DAT_100055a0
#define DAT_100055a0 (*(int *)(0x100055a0U))
#undef DAT_100055a4
#define DAT_100055a4 (*(int *)(0x100055a4U))
#undef DAT_100055a8
#define DAT_100055a8 (*(int *)(0x100055a8U))
#undef DAT_100055ac
#define DAT_100055ac (*(int *)(0x100055acU))
#define local_444 (*(uint *)(frame + 1180))
#define local_440 (*(uint *)(frame + 1184))
#define local_43c (*(uint *)(frame + 1188))
#define local_434 (*(uint *)(frame + 1196))
#define local_430 (*(uint *)(frame + 1200))
#define local_84 (*(uint (*)[25])(frame + 2140))
#define local_8c8 (*(uint *)(frame + 24))
#define local_8b8 (*(byte * *)(frame + 40))
#define local_8b0 (*(char (*)[1024])(frame + 48))
#define local_4b0 (*(uint *)(frame + 1072))
#define local_4ac (*(uint *)(frame + 1076))
#define local_4a8 (*(undefined4 *)(frame + 1080))
#define local_4a4 (*(undefined4 *)(frame + 1084))
#define local_4a0 (*(undefined4 *)(frame + 1088))
#define local_49c (*(undefined4 *)(frame + 1092))
#define local_498 (*(undefined4 *)(frame + 1096))
#define local_494 (*(undefined4 *)(frame + 1100))
#define local_490 (*(uint *)(frame + 1104))
#define local_48c (*(uint *)(frame + 1108))
#define local_488 (*(uint *)(frame + 1112))
#define local_484 (*(uint (*)[2])(frame + 1116))
#define local_47c (*(uint *)(frame + 1124))
#define local_478 (*(uint *)(frame + 1128))
#define local_474 (*(uint *)(frame + 1132))
#define local_470 (*(uint *)(frame + 1136))
#define local_464 (*(uint *)(frame + 1148))
#define local_460 (*(uint *)(frame + 1152))
#define local_45c (*(uint *)(frame + 1156))
#define local_458 (*(uint *)(frame + 1160))
#define local_454 (*(uint *)(frame + 1164))
#define local_450 (*(uint *)(frame + 1168))
#define local_44c (*(uint *)(frame + 1172))
#define local_448 (*(uint *)(frame + 1176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b84
 */

void recovered_10003b84(int *param_1,byte *param_2,int *param_3)

{
  int firmware_framebuffer[13]={0};
  if (param_2 && *(unsigned short *)(param_2+4)==0x1af4 &&
      *(unsigned short *)(param_2+6)==0x1050 &&
      recovered_100039d4(param_1,(int)firmware_framebuffer) &&
      recovered_10003a1c(firmware_framebuffer)) return;
  unsigned char frame[2304] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int extraout_r0 = 0;
  int extraout_r0_00 = 0;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 extraout_r3 = 0;
  undefined4 extraout_r3_00 = 0;
  undefined4 extraout_r3_01 = 0;
  undefined4 extraout_r3_02 = 0;
  undefined4 extraout_r3_03 = 0;
  undefined4 uVar14;
  undefined4 extraout_r3_04 = 0;
  undefined4 extraout_r3_05 = 0;
  undefined4 extraout_r3_06 = 0;
  undefined4 extraout_r3_07 = 0;
  undefined4 extraout_r3_08 = 0;
  undefined4 extraout_r3_09 = 0;
  code *extraout_r3_10;
  code *extraout_r3_11;
  code *extraout_r3_12;
  code *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  char *pcVar23;
  undefined1 *puVar24;
  uint uVar25;

  if (((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
     (*(short *)(param_2 + 6) != 0x1050)) {
    bVar6 = *(short *)(param_2 + 6) == 0x1050;
    if (param_2[8] != 3 && *(short *)(param_2 + 6) != 0x1050) {
      return;
    }
  }
  else {
    bVar6 = true;
  }
  local_8b8 = param_2 + 8;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10003a70(local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x1f1U)));
  if (bVar6) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x1feU));
LAB_10003c7c:
    recovered_100055b0((int)local_8b0,0x400,pcVar13);
  }
  else {
    if (*(short *)(param_2 + 4) == 0x1013) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x228U));
      goto LAB_10003c7c;
    }
    if ((*(short *)(param_2 + 4) == 0x1234) && (*(short *)(param_2 + 6) == 0x1111)) {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x214U));
      goto LAB_10003c7c;
    }
  }
  iVar7 = recovered_10005d8c((int)param_2);
  iVar9 = (0x54584b57U);
  bVar6 = false;
  local_484[0] = 0;
  if (((param_1 == (int *)0x0 || param_2 == (byte *)0x0) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
    recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x278U)));
  }
  else {
    iVar17 = recovered_100059a4(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,
                                local_484);
    if (iVar17 == 0) {
      recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x290U)));
      bVar6 = false;
    }
    else {
      iVar17 = 5;
      uVar8 = 0;
      while (iVar17 != 0xb) {
        iVar1 = iVar17 * 4;
        iVar17 = iVar17 + 1;
        uVar18 = uVar8;
        if (*(uint *)(param_2 + iVar1) != 0) {
          uVar18 = uVar8 | 2;
        }
        if ((*(uint *)(param_2 + iVar1) & 1) != 0) {
          uVar18 = uVar8 | 1;
        }
        uVar8 = uVar18;
      }
      iVar17 = recovered_100056b4(((uintptr_t)pf_module_state + 0x23eU));
      if (iVar17 != 0) {
        uVar8 = uVar8 | 4;
      }
      if ((*local_8b8 == 6) && (param_2[9] != 0)) {
        uVar8 = uVar8 | 2;
      }
      local_84[0] = local_484[0] | uVar8;
      if ((((*param_1 == iVar9) && (99 < (uint)param_1[2])) &&
          ((code *)param_1[0x18] != (code *)0x0)) &&
         (iVar9 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,local_84[0]),
         iVar9 != 0)) {
        recovered_100059a4(param_1,(uint)*param_2,(uint)param_2[1],(uint)param_2[2],4,2,local_84);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x2c1U)),local_484[0]);
        uVar18 = local_84[0];
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x2d2U)),local_84[0]);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x2e2U)),uVar8);
        bVar6 = (uVar18 & uVar8) == uVar8;
      }
      else {
        recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2a8U)));
        bVar6 = false;
      }
    }
  }
  if (iVar7 == -1) {
    bVar2 = 0;
    bVar5 = 0;
    local_484[0] = 0;
    local_84[0] = 0;
    bVar4 = *local_8b8;
    local_488 = 0;
    bVar3 = bVar4 == 1;
    local_48c = 0;
    if (bVar3) {
      bVar4 = param_2[9];
    }
    local_490 = 0;
    if (bVar3 && bVar4 == 6) {
      uVar18 = recovered_100063ec(param_1,(int)param_2,5,0x1000,local_484);
      uVar8 = local_484[0];
      if (uVar18 == 0) {
        recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4f5U)));
      }
      else {
        recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x50bU)),local_484[0],
                           extraout_r3_05);
        recovered_1000656c(param_1,uVar8,0,(int)local_84);
        recovered_1000656c(param_1,local_484[0],4,(int)&local_488);
        recovered_1000656c(param_1,local_484[0],0xc,(int)&local_48c);
        recovered_1000656c(param_1,local_484[0],0x10,(int)&local_490);
        if (-1 < (int)local_488) {
          recovered_10006554(param_1,local_484[0],4,local_488 | 0x80000000);
          recovered_1000656c(param_1,local_484[0],4,(int)&local_488);
        }
        uVar8 = local_488;
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x514U)),local_84[0]);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x51cU)),uVar8);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x524U)),local_48c);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x52eU)),local_490);
        bVar5 = 1;
      }
    }
    local_484[0] = 0;
    local_84[0] = 0;
    bVar4 = *local_8b8;
    local_488 = 0;
    bVar3 = bVar4 == 4;
    local_48c = 0;
    if (bVar3) {
      bVar4 = param_2[9];
    }
    if (bVar3 && bVar4 == 3) {
      uVar18 = recovered_100063ec(param_1,(int)param_2,0,0x1000,local_484);
      uVar8 = local_484[0];
      if (uVar18 == 0) {
        recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x53aU)));
      }
      else {
        recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x54fU)),local_484[0],
                           extraout_r3_06);
        recovered_1000656c(param_1,uVar8,0,(int)local_84);
        recovered_1000656c(param_1,local_484[0],8,(int)&local_488);
        if ((local_488 & 1) == 0) {
          recovered_10006554(param_1,local_484[0],8,local_488 | 1);
          recovered_1000656c(param_1,local_484[0],8,(int)&local_488);
        }
        recovered_100065f4(param_1,local_484[0] + 0xe,2,(int)&local_48c);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x557U)),local_84[0]);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x55fU)),local_488);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x567U)),local_48c);
        bVar2 = 1;
      }
    }
    local_484[0] = 0;
    local_84[0] = 0;
    bVar4 = 0;
    local_488 = 0;
    local_48c = 0;
    if ((*local_8b8 == 0xc) && (bVar4 = 0, param_2[9] == 3)) {
      uVar18 = recovered_100063ec(param_1,(int)param_2,0,0x1000,local_484);
      uVar8 = local_484[0];
      if (uVar18 == 0) {
        for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
          uVar18 = *(uint *)(param_2 + uVar8 * 4 + 0x14);
          local_490 = 0;
          if (((uVar18 & 1) != 0) &&
             (iVar9 = recovered_1000676c(param_1,uVar18 & 0xfffc,2,(int)&local_490), iVar9 != 0)) {
            recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x593U)));
            recovered_10005604((int)local_8b0,0x400,uVar8);
            recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x59eU)),
                               uVar18 & 0xfffffffc);
            recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x5a4U)),local_490);
            bVar4 = 1;
            goto LAB_100046d4;
          }
        }
        recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5aeU)));
        bVar4 = 0;
      }
      else {
        recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x573U)),local_484[0],
                           extraout_r3_04);
        recovered_1000656c(param_1,uVar8,0,(int)local_84);
        recovered_1000656c(param_1,local_484[0],4,(int)&local_488);
        recovered_1000656c(param_1,local_484[0],8,(int)&local_48c);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x57bU)),local_84[0]);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x583U)),local_488);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x58bU)),local_48c);
        bVar4 = 1;
      }
    }
LAB_100046d4:
    bVar4 = bVar2 | bVar5 | bVar4;
    local_484[0] = 0;
    local_84[0] = 0;
    bVar5 = *local_8b8;
    local_488 = 0;
    if (bVar5 == 2) {
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        uVar18 = recovered_100063ec(param_1,(int)param_2,uVar8,0x1000,local_484);
        if (uVar18 != 0) {
          recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5c3U)));
          recovered_10005604((int)local_8b0,0x400,uVar8);
          uVar18 = local_484[0];
          recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x5d4U)),local_484[0],
                             extraout_r3_07);
          recovered_1000656c(param_1,uVar18,0,(int)local_84);
          recovered_1000656c(param_1,local_484[0],4,(int)&local_488);
          recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x5e0U)),local_84[0]);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x5ecU));
          uVar18 = local_488;
LAB_10004858:
          recovered_10005718((int)local_8b0,pcVar13,uVar18);
          break;
        }
        uVar18 = *(uint *)(param_2 + uVar8 * 4 + 0x14);
        if (((uVar18 & 1) != 0) &&
           (iVar9 = recovered_1000676c(param_1,uVar18 & 0xfffc,2,(int)local_84), iVar9 != 0)) {
          recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x5f8U)));
          recovered_10005604((int)local_8b0,0x400,uVar8);
          recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x607U)),uVar18 & 0xfffffffc)
          ;
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x611U));
          uVar18 = local_84[0];
          goto LAB_10004858;
        }
      }
      if (uVar8 != 6) {
        bVar4 = 1;
      }
      bVar5 = *local_8b8;
    }
    local_484[0] = 0;
    bVar2 = 0;
    local_84[0] = 0;
    if (bVar5 == 3) {
      for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
        uVar18 = recovered_100063ec(param_1,(int)param_2,uVar8,0x1000,local_484);
        if (uVar18 != 0) {
          recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x61fU)));
          recovered_10005604((int)local_8b0,0x400,uVar8);
          uVar18 = local_484[0];
          recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x630U)),local_484[0],
                             extraout_r3_08);
          recovered_1000656c(param_1,uVar18,0,(int)local_84);
          if (extraout_r0 != 0) {
            recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x63cU)),local_84[0]);
          }
          break;
        }
      }
      bVar2 = 0;
      if (uVar8 != 6) {
        bVar2 = 1;
      }
    }
    bVar6 = (bool)(bVar4 | bVar2 | bVar6);
    if (!bVar6) {
      bVar6 = false;
      local_484[0] = 0;
      local_84[0] = 0;
      if (param_2 != (byte *)0x0) {
        for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
          uVar18 = recovered_100063ec(param_1,(int)param_2,uVar8,0x1000,local_484);
          if (uVar18 != 0) {
            recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x648U)));
            recovered_10005604((int)local_8b0,0x400,uVar8);
            uVar18 = local_484[0];
            recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x652U)),local_484[0],
                               extraout_r3_09);
            recovered_1000656c(param_1,uVar18,0,(int)local_84);
            if (extraout_r0_00 != 0) {
              recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x657U)),local_84[0]);
            }
            break;
          }
        }
        bVar6 = false;
        if (uVar8 != 6) {
          bVar6 = true;
        }
      }
    }
  }
  else {
    uVar8 = recovered_10005d8c((int)param_2);
    bVar4 = 0;
    if (uVar8 != 0xffffffff) {
      recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x2f1U)),uVar8);
      bVar3 = recovered_10005dcc(param_1,param_2,(int *)local_484);
      if (bVar3) {
        recovered_10006198(param_1,(int *)local_484);
        recovered_10003b10((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x321U)),
                           (char *)(((uintptr_t)pf_module_state + 0x331U)));
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x316U)),local_460);
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x338U)),local_474);
        recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x348U)),local_484[0],
                           extraout_r3);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x355U)),local_45c);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x36bU)),local_458);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x381U)),local_454);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x397U)),local_450);
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x3adU)),local_44c);
        uVar8 = local_448;
        recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x3c6U)),local_448);
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x3deU)),local_444);
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x3ebU)),local_440);
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x3fcU)),local_43c);
        uVar18 = local_434;
        uVar14 = extraout_r3_00;
        if (local_434 != 0) {
          recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x410U)),local_470);
          recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x420U)),local_464);
          recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x437U)),uVar18,
                             extraout_r3_01);
          uVar14 = extraout_r3_02;
        }
        if (local_47c != 0) {
          recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x44aU)),local_47c,uVar14);
          uVar14 = extraout_r3_03;
        }
        if (local_478 != 0) {
          recovered_100066c4((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x454U)),local_478,uVar14);
        }
        recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x467U)),local_430);
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x48aU));
        if ((uVar8 & 8) == 0) {
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x496U));
        }
        recovered_10003b10((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x47eU)),pcVar13);
        bVar4 = 1;
      }
      else {
        if (local_460 != 0) {
          recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x316U)),local_460);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
            local_484[0] = 0;
            local_84[0] = 0;
            if ((*(uint *)(param_2 + uVar8 * 4 + 0x14) & 1) != 0) {
              uVar21 = *(uint *)(param_2 + uVar8 * 4 + 0x14) & 0xfffffffc;
              uVar18 = uVar21 + 0x12 & 0xffff;
              iVar9 = recovered_1000676c(param_1,uVar18,1,(int)local_484);
              if (iVar9 != 0) {
                recovered_10003b10((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x321U)),
                                   (char *)(((uintptr_t)pf_module_state + 0x4a3U)));
                recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x4adU)));
                recovered_10005604((int)local_8b0,0x400,uVar8);
                recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x4c1U)),uVar21);
                recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x4d0U)),local_484[0]);
                recovered_100067c4(param_1,uVar18);
                recovered_100067c4(param_1,uVar18);
                bVar4 = 1;
                iVar9 = recovered_1000676c(param_1,uVar18,1,(int)local_84);
                if (iVar9 != 0) {
                  recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x4e3U)),local_84[0])
                  ;
                }
                goto LAB_10004130;
              }
            }
          }
        }
        recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x2faU)));
        bVar4 = 0;
      }
    }
LAB_10004130:
    bVar6 = (bool)(bVar4 | bVar6);
  }
  pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x254U));
  if (!bVar6) {
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x264U));
  }
  recovered_100055b0((int)local_8b0,0x400,pcVar13);
  local_84[0] = 0;
  local_488 = 0;
  local_48c = 0;
  local_490 = 0;
  local_494 = 0;
  local_498 = 0;
  local_49c = 0;
  local_4a0 = 0;
  local_4a4 = 0;
  local_4a8 = 0;
  local_4ac = 0;
  local_4b0 = 0;
  if ((((param_2 != (byte *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
      (*(short *)(param_2 + 6) == 0x1050)) || (*(short *)(param_2 + 6) == 0x1050)) {
    bVar6 = recovered_10005dcc(param_1,param_2,(int *)local_484);
    if (bVar6) {
      recovered_10006198(param_1,(int *)local_484);
      if (((byte)local_448 & 8) == 0) {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x67eU));
      }
      else {
        pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x69aU));
        if ((1 < local_440) && (local_434 != 0)) {
          puVar22 = (undefined1 *)(((uintptr_t)pf_module_state + 0x96cU));
          recovered_100039b0(puVar22,0x20);
          iVar9 = (0x331cU);
          puVar19 = (undefined1 *)(((uintptr_t)pf_module_state + 0xb3cU));
          recovered_100039b0(puVar19,8);
          puVar24 = (undefined1 *)(iVar9 + 0x10004ee4);
          recovered_100039b0(puVar24,0x14);
          puVar16 = (undefined1 *)(iVar9 + 0x10004f04);
          recovered_100039b0(puVar16,0x18);
          recovered_100039b0((undefined1 *)(((uintptr_t)pf_module_state + 0x98cU)),0x198);
          iVar9 = recovered_1000680c(param_1,(int)puVar22,0x20,(int)local_84);
          pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x6b0U));
          if ((((iVar9 != 0) &&
               ((iVar9 = recovered_1000680c(param_1,(int)puVar19,8,(int)&local_48c), iVar9 != 0 &&
                (iVar9 = recovered_1000680c(param_1,(int)puVar24,0x14,(int)&local_494), iVar9 != 0))
               )) && (iVar9 = recovered_1000680c(param_1,(int)puVar16,0x18,(int)&local_49c),
                     iVar9 != 0)) &&
             (iVar9 = recovered_1000680c(param_1,((uintptr_t)pf_module_state + 0x98cU),0x198,(int)&local_4a4),
             iVar9 != 0)) {
            *(undefined4 *)(((uintptr_t)pf_module_state + 0xb6cU)) = 0x100;
            iVar9 = (0x3020U);
            recovered_10006864((undefined1 *)(((uintptr_t)pf_module_state + 0x96cU)),local_49c,local_4a0);
            *(undefined4 *)(iVar9 + 0x1000500c) = 0x10001;
            *(undefined4 *)(iVar9 + 0x10005008) = 0x18;
            recovered_10006864((undefined1 *)(iVar9 + 0x10005010),local_4a4,local_4a8);
            *(undefined4 *)(iVar9 + 0x10005018) = 0x198;
            *(undefined2 *)(iVar9 + 0x1000501c) = 2;
            iVar9 = (0x3190U);
            *(undefined4 *)(((uintptr_t)pf_module_state + 0xb3cU)) = 0x10000;
            *(undefined2 *)(iVar9 + 0x10005064) = 0;
            recovered_100065e0(param_1,local_484[0],0x16,0);
            recovered_100065e0(param_1,local_484[0],0x18,2);
            recovered_100068a8(param_1,local_484[0],0x20,local_84[0],local_488);
            recovered_100068a8(param_1,local_484[0],0x28,local_48c,local_490);
            recovered_100068a8(param_1,local_484[0],0x30,local_494,local_498);
            recovered_100068e4(param_1);
            recovered_100068e4(param_1);
            iVar7 = (0x30e0U);
            puVar16 = (undefined1 *)(((uintptr_t)pf_module_state + 0xb2cU));
            recovered_100068e4(param_1);
            recovered_100068e4(param_1);
            recovered_100068e4(param_1);
            recovered_100065e0(param_1,local_484[0],0x1c,1);
            recovered_100065c4(param_1,local_484[0],0x1c,(int)&local_4ac);
            recovered_10006524(param_1,local_484[0],0x14,(int)&local_4b0);
            recovered_1000653c(param_1,local_484[0],local_4b0 | 4);
            recovered_10006524(param_1,local_484[0],0x14,(int)&local_4b0);
            recovered_10006588(param_1);
            recovered_100065e0(param_1,local_434,0,0);
            iVar9 = (0x54584b57U);
            for (iVar17 = 100; iVar17 != 0; iVar17 = iVar17 + -1) {
              recovered_100068e4(param_1);
              uVar8 = (uint)*(ushort *)(iVar7 + 0x10005122);
              if (uVar8 != 0) goto LAB_10005234;
              if ((((param_1 != (int *)0x0) && (*param_1 == iVar9)) && (0x33 < (uint)param_1[2])) &&
                 ((code *)param_1[0xc] != (code *)0x0)) {
                (*(code *)param_1[0xc])(100);
              }
            }
            uVar8 = 0;
LAB_10005234:
            puVar20 = (undefined4 *)(((uintptr_t)pf_module_state + 0x98cU));
            recovered_100068e4(param_1);
            if (uVar8 == 0) {
              uVar21 = 0;
              uVar25 = 0;
              uVar18 = 0;
              uVar10 = 0;
              local_8c8 = 0;
            }
            else {
              local_8c8 = recovered_10006924((undefined4 *)(iVar7 + 0x10005128));
              uVar10 = recovered_10006924(puVar20);
              uVar25 = 0;
              uVar18 = 0;
              uVar21 = 0;
              for (iVar9 = (0xfffffe80U); iVar9 != 0; iVar9 = iVar9 + 0x18) {
                iVar7 = ((uintptr_t)pf_module_state + 0x98cU) + iVar9;
                uVar11 = recovered_10006924((undefined4 *)(iVar7 + 0x1a0));
                uVar12 = recovered_10006924((undefined4 *)(iVar7 + 0x1a4));
                iVar7 = recovered_10006924((undefined4 *)(iVar7 + 0x1a8));
                bVar6 = (iVar7 != 0 && uVar11 != 0) && uVar12 != 0;
                if (bVar6 && uVar21 == 0) {
                  uVar25 = uVar11;
                  uVar18 = uVar12;
                }
                uVar21 = uVar21 + bVar6;
              }
              puVar16 = (undefined1 *)(((uintptr_t)pf_module_state + 0xb2cU));
            }
            recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x6caU)));
            recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x6daU)),2);
            recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x6e7U)),local_4ac);
            recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x6f7U)),local_4b0);
            recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x701U)),uVar8);
            recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x709U)),local_8c8);
            recovered_10005718((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x712U)),uVar10);
            recovered_10003a84((int)local_8b0,(char *)(((uintptr_t)pf_module_state + 0x71aU)),uVar21);
            if (uVar25 != 0 && uVar18 != 0) {
              recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x726U)));
              recovered_10005604((int)local_8b0,0x400,0);
              recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b5U)));
              recovered_10005604((int)local_8b0,0x400,uVar25);
              recovered_100055b0((int)local_8b0,0x400,(char *)(((uintptr_t)pf_module_state + 0x732U)));
              recovered_10005604((int)local_8b0,0x400,uVar18);
            }
            if (uVar10 == 0x1101) {
              *puVar16 = 1;
            }
            goto LAB_10004b38;
          }
        }
      }
    }
    else {
      pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x660U));
    }
    recovered_100055b0((int)local_8b0,0x400,pcVar13);
  }
LAB_10004b38:
  iVar9 = recovered_10005a18((int)param_2);
  if (param_2 != (byte *)0x0) {
    recovered_10003a70((undefined1 *)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x246U)));
    recovered_100055b0((int)local_84,0x60,(char *)(((uintptr_t)pf_module_state + 0x734U)));
    recovered_10005780((int)local_84,0x60,(uint)*param_2,2);
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x736U));
    recovered_100055b0((int)local_84,0x60,pcVar13);
    recovered_10005780((int)local_84,0x60,(uint)param_2[1],2);
    pcVar23 = (char *)(((uintptr_t)pf_module_state + 0x738U));
    recovered_100055b0((int)local_84,0x60,pcVar23);
    recovered_10005604((int)local_84,0x60,(uint)param_2[2]);
    recovered_10003a70((undefined1 *)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x73aU)));
    recovered_10005780((int)local_484,0x400,(uint)*param_2,2);
    recovered_100055b0((int)local_484,0x400,pcVar13);
    recovered_10005780((int)local_484,0x400,(uint)param_2[1],2);
    recovered_100055b0((int)local_484,0x400,pcVar23);
    recovered_10005604((int)local_484,0x400,(uint)param_2[2]);
    recovered_100055b0((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x73fU)));
    recovered_10005780((int)local_484,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_100055b0((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x748U)));
    recovered_10005780((int)local_484,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_100055b0((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x751U)));
    recovered_10005780((int)local_484,0x400,(uint)param_2[8],2);
    recovered_100055b0((int)local_484,0x400,pcVar23);
    recovered_10005780((int)local_484,0x400,(uint)param_2[9],2);
    recovered_100055b0((int)local_484,0x400,pcVar23);
    recovered_10005780((int)local_484,0x400,(uint)param_2[10],2);
    recovered_100055b0((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x759U)));
    recovered_10005780((int)local_484,0x400,(uint)param_2[0xb],2);
    recovered_10005718((int)local_484,(char *)(((uintptr_t)pf_module_state + 0x764U)),*(uint *)(param_2 + 0x10))
    ;
    pcVar23 = (char *)(((uintptr_t)pf_module_state + 0x76cU));
    pcVar13 = (char *)(((uintptr_t)pf_module_state + 0x1b5U));
    pcVar15 = extraout_r3_10;
    for (uVar8 = 0; uVar8 != 6; uVar8 = uVar8 + 1) {
      uVar18 = *(uint *)(param_2 + uVar8 * 4 + 0x14);
      if (uVar18 != 0) {
        recovered_100055b0((int)local_484,0x400,pcVar23);
        recovered_10005604((int)local_484,0x400,uVar8);
        recovered_100055b0((int)local_484,0x400,pcVar13);
        recovered_10005780((int)local_484,0x400,uVar18,8);
        pcVar15 = extraout_r3_11;
      }
    }
    if (local_8b0[0] != '\0') {
      recovered_100055b0((int)local_484,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
      recovered_100055b0((int)local_484,0x400,local_8b0);
      pcVar15 = extraout_r3_12;
    }
    if (param_1 != (int *)0x0) {
      pcVar15 = (code *)param_1[3];
    }
    if (param_1 != (int *)0x0 && pcVar15 != (code *)0x0) {
      (*pcVar15)(local_84,iVar9,local_484);
    }
  }
  return;
}

#undef DAT_10004ae4
#undef DAT_10004ae8
#undef DAT_10004aec
#undef DAT_10004af0
#undef DAT_10004af4
#undef DAT_10004af8
#undef DAT_10004afc
#undef DAT_10004b00
#undef DAT_10004b04
#undef DAT_10004b08
#undef DAT_10004b0c
#undef DAT_10004b10
#undef DAT_10004b14
#undef DAT_10004b18
#undef DAT_10004b1c
#undef DAT_10004dc4
#undef DAT_10004dc8
#undef DAT_10004dcc
#undef DAT_10004dd0
#undef DAT_10004dd4
#undef DAT_10004e3c
#undef DAT_10004e40
#undef DAT_10004e44
#undef DAT_10004e48
#undef DAT_10004e4c
#undef DAT_10004e50
#undef DAT_10004e54
#undef DAT_10004e58
#undef DAT_10004e5c
#undef DAT_10004e60
#undef DAT_10004e64
#undef DAT_10004e68
#undef DAT_10004e6c
#undef DAT_10004e70
#undef DAT_10004e74
#undef DAT_10004e78
#undef DAT_10004e7c
#undef DAT_1000521c
#undef DAT_10005220
#undef DAT_10005224
#undef DAT_10005228
#undef DAT_1000522c
#undef DAT_10005330
#undef DAT_10005334
#undef DAT_10005338
#undef DAT_1000533c
#undef DAT_10005488
#undef DAT_1000548c
#undef DAT_10005490
#undef DAT_10005494
#undef DAT_10005498
#undef DAT_1000549c
#undef DAT_100054a0
#undef DAT_100054a4
#undef DAT_100054a8
#undef DAT_100054ac
#undef DAT_100054b0
#undef DAT_100054b4
#undef DAT_100054b8
#undef DAT_100054bc
#undef DAT_100054c0
#undef DAT_100054c4
#undef DAT_100054c8
#undef DAT_100054cc
#undef DAT_100054d0
#undef DAT_100054d4
#undef DAT_100054d8
#undef DAT_100054dc
#undef DAT_100054e0
#undef DAT_100054e4
#undef DAT_100054e8
#undef DAT_100054ec
#undef DAT_100054f0
#undef DAT_100054f4
#undef DAT_100054f8
#undef DAT_100054fc
#undef DAT_10005500
#undef DAT_10005504
#undef DAT_10005508
#undef DAT_1000550c
#undef DAT_10005510
#undef DAT_10005514
#undef DAT_10005518
#undef DAT_1000551c
#undef DAT_10005520
#undef DAT_10005524
#undef DAT_10005528
#undef DAT_1000552c
#undef DAT_10005530
#undef DAT_10005534
#undef DAT_10005538
#undef DAT_1000553c
#undef DAT_10005540
#undef DAT_10005544
#undef DAT_10005548
#undef DAT_1000554c
#undef DAT_10005550
#undef DAT_10005554
#undef DAT_10005558
#undef DAT_1000555c
#undef DAT_10005560
#undef DAT_10005564
#undef DAT_10005568
#undef DAT_1000556c
#undef DAT_10005570
#undef DAT_10005574
#undef DAT_10005578
#undef DAT_1000557c
#undef DAT_10005580
#undef DAT_10005584
#undef DAT_10005588
#undef DAT_1000558c
#undef DAT_10005590
#undef DAT_10005594
#undef DAT_10005598
#undef DAT_1000559c
#undef DAT_100055a0
#undef DAT_100055a4
#undef DAT_100055a8
#undef DAT_100055ac
#undef local_444
#undef local_440
#undef local_43c
#undef local_434
#undef local_430
#undef local_84
#undef local_8c8
#undef local_8b8
#undef local_8b0
#undef local_4b0
#undef local_4ac
#undef local_4a8
#undef local_4a4
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(int param_1,uint param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_100056b4(param_1);
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
 * Address: 0x10005604
 */

void recovered_10005604(int param_1,uint param_2,uint param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_3 == 0) {
    recovered_100056dc(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    uVar1 = recovered_10007078(param_3,10);
    abStack_a8[uVar2 + 0x82] = (char)param_3 + (char)uVar1 * -10 | 0x30;
    param_3 = uVar1;
  }
  for (iVar3 = -uVar2; iVar3 != 0; iVar3 = iVar3 + 1) {
    recovered_100056dc(param_1,param_2,abStack_a8[0x81 - iVar3]);
  }
  return;
}

#undef abStack_a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b4
 */

int recovered_100056b4(int param_1)

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
 * Address: 0x100056dc
 */

void recovered_100056dc(int param_1,uint param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100056b4(param_1);
  if ((param_1 != 0) && (iVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + iVar1) = param_3;
    *(undefined1 *)(param_1 + iVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10005778
#define DAT_10005778 (*(int *)(0x10005778U))
#undef DAT_1000577c
#define DAT_1000577c (*(int *)(0x1000577cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005718
 */

void recovered_10005718(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
  recovered_100055b0(param_1,0x400,param_2);
  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b5U)));
  recovered_10005780(param_1,0x400,param_3,8);
  return;
}

#undef DAT_10005778
#undef DAT_1000577c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

void recovered_10005780(int param_1,uint param_2,uint param_3,int param_4)

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
    recovered_100056dc(param_1,param_2,bVar3);
  }
  return;
}


/* Pooka's Free Software License. PCI device records recovered from register stores. */
undefined4 recovered_100057e0(undefined4 *api,uint bus,uint slot,uint function,undefined1 *out)
{
 uint identity=0,classification=0,header=0,command=0,value=0;
 if(!out || !recovered_100059a4((int *)api,bus,slot,function,0,4,&identity) || !(identity&65535) || (identity&65535)==65535)return 0;
 if(!recovered_100059a4((int *)api,bus,slot,function,8,4,&classification))return 0;
 if(!recovered_100059a4((int *)api,bus,slot,function,4,4,&command))command=0;
 if(!recovered_100059a4((int *)api,bus,slot,function,12,4,&header))header=0;
 out[0]=(byte)bus;out[1]=(byte)slot;out[2]=(byte)function;
 __builtin_memcpy(out+4,&identity,4);out[8]=(byte)(classification>>24);out[9]=(byte)(classification>>16);out[10]=(byte)(classification>>8);out[11]=0;out[12]=(byte)(header>>16);
 __builtin_memcpy(out+16,&command,4);
 for(uint i=0;i<6;i++){value=0;recovered_100059a4((int *)api,bus,slot,function,16+i*4,4,&value);__builtin_memcpy(out+20+i*4,&value,4);}
 return 1;
}


#undef DAT_10005a14
#define DAT_10005a14 (*(uint8_t * *)(0x10005a14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a4
 */

int recovered_100059a4(int *api,uint bus,uint slot,uint function,uint offset,uint width,uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;

  if (((api != (int *)0x0) && ((code *)*api == (0x57U))) && (0x5f < (uint)api[2])) {
    pcVar2 = (0x57U);
    if (out != (uint *)0x0) {
      pcVar2 = (code *)api[0x17];
    }
    if (out != (uint *)0x0 && pcVar2 != (code *)0x0) {
      iVar1 = (*pcVar2)(bus,slot,function,offset,width,out);
      return iVar1;
    }
  }
  return 0;
}

#undef DAT_10005a14

#undef DAT_10005c20
#define DAT_10005c20 (*(uint *)(0x10005c20U))
#undef DAT_10005d34
#define DAT_10005d34 (*(uint32_t *)(0x10005d34U))
#undef DAT_10005d38
#define DAT_10005d38 (*(int *)(0x10005d38U))
#undef DAT_10005d3c
#define DAT_10005d3c (*(int *)(0x10005d3cU))
#undef DAT_10005d40
#define DAT_10005d40 (*(int *)(0x10005d40U))
#undef DAT_10005d44
#define DAT_10005d44 (*(int *)(0x10005d44U))
#undef DAT_10005d48
#define DAT_10005d48 (*(int *)(0x10005d48U))
#undef DAT_10005d4c
#define DAT_10005d4c (*(int *)(0x10005d4cU))
#undef DAT_10005d50
#define DAT_10005d50 (*(int *)(0x10005d50U))
#undef DAT_10005d54
#define DAT_10005d54 (*(int *)(0x10005d54U))
#undef DAT_10005d58
#define DAT_10005d58 (*(int *)(0x10005d58U))
#undef DAT_10005d5c
#define DAT_10005d5c (*(int *)(0x10005d5cU))
#undef DAT_10005d60
#define DAT_10005d60 (*(int *)(0x10005d60U))
#undef DAT_10005d64
#define DAT_10005d64 (*(int *)(0x10005d64U))
#undef DAT_10005d68
#define DAT_10005d68 (*(int *)(0x10005d68U))
#undef DAT_10005d6c
#define DAT_10005d6c (*(int *)(0x10005d6cU))
#undef DAT_10005d70
#define DAT_10005d70 (*(int *)(0x10005d70U))
#undef DAT_10005d74
#define DAT_10005d74 (*(int *)(0x10005d74U))
#undef DAT_10005d78
#define DAT_10005d78 (*(int *)(0x10005d78U))
#undef DAT_10005d7c
#define DAT_10005d7c (*(int *)(0x10005d7cU))
#undef DAT_10005d80
#define DAT_10005d80 (*(int *)(0x10005d80U))
#undef DAT_10005d84
#define DAT_10005d84 (*(int *)(0x10005d84U))
#undef DAT_10005d88
#define DAT_10005d88 (*(int *)(0x10005d88U))
#undef switchdataD_10005c20
#define switchdataD_10005c20 (*(uint *)(0x10005c20U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a18
 */

int recovered_10005a18(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  short sVar2;
  int iVar3;
  bool bVar4;

  if (param_1 == 0) goto switchD_10005c1c_caseD_5;
  sVar2 = *(short *)(param_1 + 4);
  if (sVar2 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return ((uintptr_t)pf_module_state + 0x82bU);
    }
LAB_10005bfc:
    if (0xb < *(byte *)(param_1 + 8) - 1) goto switchD_10005c1c_caseD_5;
    iVar3 = ((uintptr_t)pf_module_state + 0x857U);
    switch((uintptr_t)(*(byte *)(param_1 + 8))) {
    case 1:
      iVar3 = ((uintptr_t)pf_module_state + 0x87dU);
      break;
    case 2:
      iVar3 = ((uintptr_t)pf_module_state + 0x86aU);
      break;
    case 3:
      break;
    case 4:
      iVar3 = ((uintptr_t)pf_module_state + 0x890U);
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10005c80:
        iVar3 = recovered_1000694c((uint)*(byte *)(param_1 + 10));
        return iVar3;
      }
    default:
switchD_10005c1c_caseD_5:
      iVar3 = ((uintptr_t)pf_module_state + 0x771U);
    }
  }
  else {
    if (sVar2 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return ((uintptr_t)pf_module_state + 0x822U);
      }
      goto LAB_10005bfc;
    }
    if (sVar2 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10005bbc:
        return ((uintptr_t)pf_module_state + 0x850U);
      }
      goto LAB_10005bfc;
    }
    if (sVar2 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10005bbc;
      goto LAB_10005bfc;
    }
    if (sVar2 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return ((uintptr_t)pf_module_state + 0x847U);
      }
      goto LAB_10005bfc;
    }
    if (sVar2 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return ((uintptr_t)pf_module_state + 0x836U);
      }
      goto LAB_10005bfc;
    }
    if (sVar2 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return ((uintptr_t)pf_module_state + 0x80cU);
      }
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10005c80;
      }
      else {
        bVar4 = cVar1 == '\x04';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 9);
        }
        if (bVar4 && cVar1 == '\x03') {
          return ((uintptr_t)pf_module_state + 0x818U);
        }
      }
      goto LAB_10005bfc;
    }
    if (sVar2 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return ((uintptr_t)pf_module_state + 0x83fU);
      }
      goto LAB_10005bfc;
    }
    if (sVar2 != 0x1af4) goto LAB_10005bfc;
    iVar3 = ((uintptr_t)pf_module_state + 0x77cU);
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10005abc_caseD_1042:
      iVar3 = ((uintptr_t)pf_module_state + 0x78bU);
      break;
    case 0x1043:
switchD_10005abc_caseD_1043:
      iVar3 = ((uintptr_t)pf_module_state + 0x7afU);
      break;
    case 0x1044:
switchD_10005abc_caseD_1044:
      iVar3 = ((uintptr_t)pf_module_state + 0x7d2U);
      break;
    case 0x1045:
switchD_10005abc_caseD_1045:
      iVar3 = ((uintptr_t)pf_module_state + 0x79cU);
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
switchD_10005abc_caseD_1046:
      iVar3 = ((uintptr_t)pf_module_state + 0x801U);
      break;
    case 0x1048:
switchD_10005abc_caseD_1048:
      iVar3 = ((uintptr_t)pf_module_state + 0x7c2U);
      break;
    case 0x1050:
      iVar3 = ((uintptr_t)pf_module_state + 0x7e1U);
      break;
    case 0x1052:
      iVar3 = ((uintptr_t)pf_module_state + 0x7f0U);
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10005abc_caseD_1042;
      case 0x1002:
        goto switchD_10005abc_caseD_1045;
      case 0x1003:
        goto switchD_10005abc_caseD_1043;
      case 0x1004:
        goto switchD_10005abc_caseD_1048;
      case 0x1005:
        goto switchD_10005abc_caseD_1044;
      default:
        goto switchD_10005abc_caseD_1046;
      }
    }
  }
  return iVar3;
}

#undef DAT_10005c20
#undef DAT_10005d34
#undef DAT_10005d38
#undef DAT_10005d3c
#undef DAT_10005d40
#undef DAT_10005d44
#undef DAT_10005d48
#undef DAT_10005d4c
#undef DAT_10005d50
#undef DAT_10005d54
#undef DAT_10005d58
#undef DAT_10005d5c
#undef DAT_10005d60
#undef DAT_10005d64
#undef DAT_10005d68
#undef DAT_10005d6c
#undef DAT_10005d70
#undef DAT_10005d74
#undef DAT_10005d78
#undef DAT_10005d7c
#undef DAT_10005d80
#undef DAT_10005d84
#undef DAT_10005d88
#undef switchdataD_10005c20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d8c
 */

int recovered_10005d8c(int param_1)

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


#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(int *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(uint *)(frame + 48))
#define local_2c (*(int * *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(int * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dcc
 */

bool recovered_10005dcc(int *param_1,undefined1 *param_2,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint extraout_r0 = 0;
  uint uVar2;
  int iVar3;
  int *extraout_r1 = 0;
  int *extraout_r1_00 = 0;
  int *extraout_r1_01 = 0;
  int *extraout_r1_02 = 0;
  int *extraout_r1_03 = 0;
  int *extraout_r1_04 = 0;
  int *extraout_r1_05 = 0;
  int *extraout_r1_06 = 0;
  int *extraout_r1_07 = 0;
  int *extraout_r1_08 = 0;
  int *piVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = false;
  local_24 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    recovered_100039b0((undefined1 *)param_3,0x58);
    uVar2 = extraout_r0;
    if (param_2 != (undefined1 *)0x0) {
      uVar2 = (uint)(byte)param_2[0x12];
    }
    if ((param_2 != (undefined1 *)0x0 && (uVar2 & 0x10) != 0) &&
       (iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],0x34,1,(uint *)&local_24), iVar3 != 0)) {
      uVar2 = 0;
      while( true ) {
        bVar6 = 0x1e < uVar2;
        bVar5 = uVar2 == 0x1f;
        if (uVar2 < 0x20) {
          bVar6 = (int *)0xae < local_24 + -0x10;
          bVar5 = local_24 + -0x10 == (int *)0xaf;
        }
        if (bVar6 && !bVar5) break;
        local_28 = 0;
        local_2c = (int *)0x0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                   (uint)(byte)param_2[2],(uint)local_24 & 0xffff,1,&local_28);
        if ((iVar3 == 0) ||
           (iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],((uint)local_24 & 0xffff) + 1 & 0xffff
                                       ,1,(uint *)&local_2c), iVar3 == 0)) break;
        piVar4 = extraout_r1;
        if ((local_28 == 9) &&
           ((((iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 3 & 0xffff,1,&local_30),
              piVar4 = extraout_r1_00, iVar3 != 0 &&
              (iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                          (uint)(byte)param_2[2],
                                          ((uint)local_24 & 0xffff) + 4 & 0xffff,1,&local_34),
              piVar4 = extraout_r1_01, iVar3 != 0)) &&
             (iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                         (uint)(byte)param_2[2],
                                         ((uint)local_24 & 0xffff) + 8 & 0xffff,4,&local_38),
             piVar4 = extraout_r1_02, iVar3 != 0)) &&
            (iVar3 = recovered_100059a4(param_1,(uint)(byte)*param_2,(uint)(byte)param_2[1],
                                        (uint)(byte)param_2[2],
                                        ((uint)local_24 & 0xffff) + 0xc & 0xffff,4,&local_3c),
            piVar4 = extraout_r1_03, iVar3 != 0)))) {
          local_40 = 0;
          param_3[9] = param_3[9] + 1;
          piVar4 = param_3;
          if (local_30 == 1) {
            bVar5 = recovered_10006388(param_1,(int)param_2,local_34,local_38,local_3c,&local_40);
            if (bVar5) {
              *param_3 = local_40;
              param_3[4] = local_34;
              goto LAB_10006158;
            }
            piVar4 = extraout_r1_04;
          }
          if ((local_30 == 2) &&
             (bVar5 = recovered_10006388(param_1,(int)param_2,local_34,local_38,local_3c,&local_40),
             piVar4 = extraout_r1_05, bVar5)) {
            bVar1 = *param_2;
            param_3[1] = local_40;
            param_3[5] = local_34;
            local_44 = 0;
            iVar3 = recovered_100059a4(param_1,(uint)bVar1,(uint)(byte)param_2[1],
                                       (uint)(byte)param_2[2],
                                       ((uint)local_24 & 0xffff) + 0x10 & 0xffff,4,&local_44);
            piVar4 = extraout_r1_06;
            if (iVar3 != 0) {
              param_3[8] = local_44;
            }
          }
          else if ((local_30 == 3) &&
                  (bVar5 = recovered_10006388(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_07, bVar5)) {
            param_3[2] = local_40;
            param_3[6] = local_34;
            piVar4 = param_3;
          }
          else if ((local_30 == 4) &&
                  (bVar5 = recovered_10006388(param_1,(int)param_2,local_34,local_38,local_3c,
                                              &local_40), piVar4 = extraout_r1_08, bVar5)) {
            param_3[3] = local_40;
            param_3[7] = local_34;
            piVar4 = param_3;
          }
        }
LAB_10006158:
        if (local_2c != (int *)0x0) {
          piVar4 = local_24;
        }
        if (local_2c == (int *)0x0 || local_2c == piVar4) break;
        local_24 = local_2c;
        uVar2 = uVar2 + 1;
      }
      bVar5 = *param_3 != 0;
    }
  }
  return bVar5;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24

#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006198
 */

void recovered_10006198(int *param_1,int *param_2)

{
  int firmware_framebuffer[13] = {0};
  /* Keep firmware-owned presentation queues intact when a framebuffer exists. */
  if (recovered_100039d4(param_1,(int)firmware_framebuffer) &&
      recovered_10003a1c(firmware_framebuffer)) return;
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;
  int iVar1;
  int *unaff_r4;

  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    unaff_r4 = param_2;
  }
  local_18 = 0;
  if (param_2 != (int *)0x0 && iVar1 != 0) {
    recovered_10006524(param_1,iVar1,0x14,(int)(unaff_r4 + 0xe));
    recovered_1000653c(param_1,*unaff_r4,0);
    recovered_10006554(param_1,*unaff_r4,0,0);
    recovered_1000656c(param_1,*unaff_r4,4,(int)(unaff_r4 + 10));
    recovered_10006554(param_1,*unaff_r4,0,1);
    recovered_1000656c(param_1,*unaff_r4,4,(int)(unaff_r4 + 0xb));
    unaff_r4[0xd] = unaff_r4[0xb] & 1;
    unaff_r4[0xc] = 0;
    recovered_10006554(param_1,*unaff_r4,8,0);
    recovered_10006554(param_1,*unaff_r4,0xc,unaff_r4[0xc]);
    recovered_10006554(param_1,*unaff_r4,8,1);
    recovered_10006554(param_1,*unaff_r4,0xc,unaff_r4[0xd]);
    recovered_10006588(param_1);
    recovered_1000653c(param_1,*unaff_r4,1);
    recovered_1000653c(param_1,*unaff_r4,3);
    recovered_1000653c(param_1,*unaff_r4,0xb);
    recovered_10006524(param_1,*unaff_r4,0x14,(int)(unaff_r4 + 0xf));
    recovered_100065c4(param_1,*unaff_r4,0x12,(int)(unaff_r4 + 0x10));
    recovered_10006524(param_1,*unaff_r4,0x15,(int)(unaff_r4 + 0x15));
    recovered_100065e0(param_1,*unaff_r4,0x16,0);
    recovered_100065c4(param_1,*unaff_r4,0x18,(int)(unaff_r4 + 0x11));
    recovered_100065c4(param_1,*unaff_r4,0x1c,(int)(unaff_r4 + 0x12));
    recovered_100065c4(param_1,*unaff_r4,0x1e,(int)&local_18);
    if (extraout_r0 != 0) {
      unaff_r4[0x13] = local_18;
      if (unaff_r4[1] != 0) {
        unaff_r4[0x14] = unaff_r4[8] * local_18 + unaff_r4[1];
      }
    }
  }
  return;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006388
 */

bool recovered_10006388(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int *param_6
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
  {
    uVar1 = recovered_100063ec(param_1,param_2,param_3,param_5 + param_4,param_6);
    bVar2 = uVar1 != 0;
    if (bVar2) {
      *param_6 = *param_6 + param_4;
    }
  }
  return bVar2;
}


#undef DAT_10006520
#define DAT_10006520 (*(int *)(0x10006520U))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063ec
 */

uint recovered_100063ec(int *param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

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

#undef DAT_10006520
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006524
 */

void recovered_10006524(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_100065f4(param_1,param_3 + param_2,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000653c
 */

void recovered_1000653c(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006660(param_1,param_2 + 0x14,1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006554
 */

void recovered_10006554(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006660(param_1,param_3 + param_2,4,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000656c
 */

void recovered_1000656c(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_100065f4(param_1,param_3 + param_2,4,param_4);
  return;
}


#undef DAT_100065c0
#define DAT_100065c0 (*(int *)(0x100065c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006588
 */

void recovered_10006588(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x7c) {
      return;
    }
    if ((code *)param_1[0x1e] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100065b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1e])();
      return;
    }
  }
  return;
}

#undef DAT_100065c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065c4
 */

void recovered_100065c4(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0 || param_4 == 0) {
    return;
  }
  recovered_100065f4(param_1,param_3 + param_2,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065e0
 */

void recovered_100065e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return;
  }
  recovered_10006660(param_1,param_3 + param_2,2,param_4);
  return;
}


#undef DAT_1000665c
#define DAT_1000665c (*(uint8_t * *)(0x1000665cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065f4
 */

undefined4 recovered_100065f4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((param_1 != (int *)0x0) && ((code *)*param_1 == (0x57U))) {
    UNRECOVERED_JUMPTABLE = (0x57U);
    if ((uint)param_1[2] < 0xc0) {
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
    }
    else {
      if (param_4 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)param_1[0x2f];
      }
      if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_1000664c;
    }
    if (param_4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0x1a];
    }
    if (param_4 != 0 && UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_1000664c:
                    /* WARNING: Could not recover jumptable at 0x10006658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000665c

#undef DAT_100066c0
#define DAT_100066c0 (*(int *)(0x100066c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006660
 */

undefined4 recovered_10006660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_100066a8;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0x1b];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_100066a8:
                    /* WARNING: Could not recover jumptable at 0x100066b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_100066c0

#undef DAT_10006764
#define DAT_10006764 (*(int *)(0x10006764U))
#undef DAT_10006768
#define DAT_10006768 (*(int *)(0x10006768U))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066c4
 */

void recovered_100066c4(int param_1,char *param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;

  uStack_24 = 0;
  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b3U)));
  recovered_100055b0(param_1,0x400,param_2);
  recovered_100055b0(param_1,0x400,(char *)(((uintptr_t)pf_module_state + 0x1b5U)));
  for (uVar4 = 0x1c; uVar4 != 0xfffffffc; uVar4 = uVar4 - 4) {
    uVar2 = param_3 >> (uVar4 & 0xff) & 0xf;
    bVar1 = (byte)uVar2;
    bVar3 = bVar1 + 0x37;
    if (uVar2 < 10) {
      bVar3 = bVar1 | 0x30;
    }
    uStack_24 = (uint)CONCAT12(bVar3,(undefined2)uStack_24);
    recovered_100055b0(param_1,0x400,(char *)((int)&uStack_24 + 2));
  }
  return;
}

#undef DAT_10006764
#undef DAT_10006768
#undef uStack_24

#undef DAT_100067c0
#define DAT_100067c0 (*(int *)(0x100067c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000676c
 */

undefined4 recovered_1000676c(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (param_2 == 0 || param_4 == 0)) || (*param_1 != (0x54584b57U))) ||
     (((uint)param_1[2] < 0x58 || ((code *)param_1[0x15] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100067bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}

#undef DAT_100067c0

#undef DAT_10006808
#define DAT_10006808 (*(int *)(0x10006808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067c4
 */

void recovered_100067c4(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0 && param_2 != 0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x5c) {
      return;
    }
    if ((code *)param_1[0x16] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x16])(param_2,1);
      return;
    }
  }
  return;
}

#undef DAT_10006808

#undef DAT_10006860
#define DAT_10006860 (*(int *)(0x10006860U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000680c
 */

undefined4 recovered_1000680c(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != (0x54584b57U))) || ((uint)param_1[2] < 0x74)) ||
     ((param_4 == 0 || param_2 == 0 || ((code *)param_1[0x1c] == (code *)0x0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[0x1c])(0);
  return uVar1;
}

#undef DAT_10006860

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006864
 */

void recovered_10006864(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  param_1[4] = (char)param_3;
  param_1[7] = (char)((uint)param_3 >> 0x18);
  *param_1 = (char)param_2;
  param_1[5] = (char)((uint)param_3 >> 8);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  param_1[6] = (char)((uint)param_3 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a8
 */

void recovered_100068a8(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r0 = 0;

  recovered_10006554(param_1,param_2,param_3,param_4);
  if (extraout_r0 == 0) {
    return;
  }
  recovered_10006554(param_1,param_2,param_3 + 4,param_5);
  return;
}


#undef DAT_10006920
#define DAT_10006920 (*(int *)(0x10006920U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e4
 */

void recovered_100068e4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == (0x54584b57U))) {
    if ((uint)param_1[2] < 0x78) {
      return;
    }
    if ((code *)param_1[0x1d] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10006918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x1d])(0);
      return;
    }
  }
  return;
}

#undef DAT_10006920

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006924
 */

undefined4 recovered_10006924(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_100069c0
#define DAT_100069c0 (*(uint32_t *)(0x100069c0U))
#undef DAT_100069c4
#define DAT_100069c4 (*(int *)(0x100069c4U))
#undef DAT_100069c8
#define DAT_100069c8 (*(int *)(0x100069c8U))
#undef DAT_100069cc
#define DAT_100069cc (*(int *)(0x100069ccU))
#undef DAT_100069d0
#define DAT_100069d0 (*(int *)(0x100069d0U))
#undef DAT_100069d4
#define DAT_100069d4 (*(int *)(0x100069d4U))
#undef DAT_100069d8
#define DAT_100069d8 (*(int *)(0x100069d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000694c
 */

int recovered_1000694c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return ((uintptr_t)pf_module_state + 0x8a6U);
  }
  if (param_1 == 0xfe) {
    return ((uintptr_t)pf_module_state + 0x8c5U);
  }
  if (param_1 == 0x20) {
    return ((uintptr_t)pf_module_state + 0x8b0U);
  }
  if (param_1 == 0x30) {
    return ((uintptr_t)pf_module_state + 0x8b5U);
  }
  if (param_1 == 0x80) {
    return ((uintptr_t)pf_module_state + 0x8baU);
  }
  if (param_1 == 0x10) {
    iVar1 = ((uintptr_t)pf_module_state + 0x8abU);
  }
  else {
    iVar1 = ((uintptr_t)pf_module_state + 0x8ceU);
  }
  return iVar1;
}

#undef DAT_100069c0
#undef DAT_100069c4
#undef DAT_100069c8
#undef DAT_100069cc
#undef DAT_100069d0
#undef DAT_100069d4
#undef DAT_100069d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069dc
 */

undefined4 recovered_100069dc(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined8 uVar40;

  uVar3 = 0;
  if (param_1 != 0 && param_2 != 0) {
    iVar25 = param_1;
    for (uVar22 = 0; uVar22 != param_2; uVar22 = uVar22 + 1) {
      piVar19 = (int *)(param_1 + uVar22 * 0x70);
      iVar4 = *piVar19;
      if (iVar4 == 3) {
        uVar9 = piVar19[0xe];
        bVar2 = recovered_10006f80(piVar19 + 2);
        if (!bVar2) goto LAB_10006e38;
        uVar34 = piVar19[0x11];
        piVar5 = piVar19 + 0x10;
        uVar36 = piVar19[0x10];
        iVar4 = 0;
        uVar10 = uVar34;
        uVar14 = uVar34;
        uVar23 = uVar36;
        uVar30 = uVar36;
        while (iVar4 != 2) {
          iVar16 = iVar25 + iVar4 * 0x10;
          iVar4 = iVar4 + 1;
          uVar15 = *(uint *)(iVar16 + 0x50);
          uVar11 = *(uint *)(iVar16 + 0x54);
          if ((int)uVar14 < (int)uVar11) {
            uVar14 = uVar11;
          }
          if ((int)uVar30 < (int)uVar15) {
            uVar30 = uVar15;
          }
          if ((int)uVar11 < (int)uVar10) {
            uVar10 = uVar11;
          }
          if ((int)uVar15 < (int)uVar23) {
            uVar23 = uVar15;
          }
        }
        if (-1 < (int)uVar30 && -1 < (int)uVar14) {
          iVar16 = piVar19[5];
          bVar2 = SBORROW4(uVar23,iVar16);
          iVar4 = uVar23 - iVar16;
          piVar31 = piVar19;
          if ((int)uVar23 < iVar16) {
            piVar31 = (int *)piVar19[6];
            bVar2 = SBORROW4(uVar10,(int)piVar31);
            iVar4 = uVar10 - (int)piVar31;
          }
          if (iVar4 < 0 != bVar2) {
            piVar6 = piVar19 + 0x18;
            iVar4 = *piVar6;
            piVar12 = piVar19 + 0x14;
            iVar17 = piVar19[0x19];
            lVar38 = recovered_10007044(piVar5,piVar12,iVar4,iVar17);
            if ((int)piVar31 <= (int)uVar14) {
              uVar14 = (int)piVar31 - 1;
            }
            if (iVar16 <= (int)uVar30) {
              uVar30 = iVar16 - 1;
            }
            if (lVar38 != 0) {
              uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
              uVar23 = uVar23 & ~((int)uVar23 >> 0x1f);
              iVar16 = piVar19[0x15];
              iVar26 = piVar19[0x14];
              uVar39 = recovered_10007044(piVar12,piVar6,uVar23,uVar10);
              iVar28 = (int)((ulonglong)uVar39 >> 0x20);
              lVar38 = recovered_10007044(piVar6,piVar5,uVar23,uVar10);
              uVar40 = recovered_10007044(piVar5,piVar12,uVar23,uVar10);
              iVar18 = piVar19[2];
              if (iVar18 == 0) {
                iVar18 = 0;
              }
              else if (piVar19[3] != 0) {
                iVar18 = 0;
              }
              uVar15 = uVar36 - iVar4;
              uVar36 = iVar26 - uVar36;
              uVar7 = iVar4 - iVar26;
              uVar35 = iVar17 - iVar16;
              uVar29 = iVar16 - uVar34;
              uVar11 = (uint)uVar40;
              while( true ) {
                uVar1 = (ulonglong)lVar38 >> 0x20;
                uVar13 = (uint)lVar38;
                iVar4 = (int)((ulonglong)uVar40 >> 0x20);
                uVar32 = (uint)uVar39;
                if ((int)uVar14 < (int)uVar10) break;
                uVar24 = piVar19[7] * uVar10 + iVar18;
                iVar8 = piVar19[7] * uVar10 + iVar18;
                iVar16 = iVar28;
                iVar26 = iVar4;
                uVar27 = uVar11;
                uVar33 = uVar23;
                uVar37 = uVar32;
                while( true ) {
                  iVar20 = (int)((ulonglong)lVar38 >> 0x20);
                  if ((int)uVar30 < (int)uVar33) break;
                  if ((((-1 < iVar16 && -1 < lVar38) && (-1 < iVar26)) ||
                      (((int)-(iVar16 + (uint)(uVar37 != 0)) < 0 ==
                        (SBORROW4(0,iVar16) != SBORROW4(-iVar16,(uint)(uVar37 != 0))) &&
                       ((bVar2 = (int)lVar38 != 0,
                        (int)-(iVar20 + (uint)bVar2) < 0 ==
                        (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar2)) &&
                        ((int)-(iVar26 + (uint)(uVar27 != 0)) < 0 ==
                         (SBORROW4(0,iVar26) != SBORROW4(-iVar26,(uint)(uVar27 != 0))))))))) &&
                     (iVar18 != 0)) {
                    if ((uVar24 & 3) == 0) {
                      *(uint *)(iVar8 + uVar33 * 4) =
                           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18;
                    }
                    else {
                      puVar21 = (undefined1 *)(iVar8 + uVar33 * 4);
                      *puVar21 = (char)(uVar9 >> 0x18);
                      puVar21[3] = (char)uVar9;
                      puVar21[2] = (char)(uVar9 >> 8);
                      puVar21[1] = (char)(uVar9 >> 0x10);
                    }
                  }
                  bVar2 = CARRY4(uVar27,uVar29);
                  uVar27 = uVar27 + uVar29;
                  iVar26 = iVar26 + ((int)uVar29 >> 0x1f) + (uint)bVar2;
                  uVar24 = uVar24 + 4;
                  uVar33 = uVar33 + 1;
                  lVar38 = lVar38 + (int)(uVar34 - iVar17);
                  bVar2 = CARRY4(uVar37,uVar35);
                  uVar37 = uVar37 + uVar35;
                  iVar16 = iVar16 + ((int)uVar35 >> 0x1f) + (uint)bVar2;
                }
                uVar40 = CONCAT44(iVar4 - (((int)uVar36 >> 0x1f) + (uint)(uVar11 < uVar36)),uVar11);
                lVar38 = CONCAT44((int)uVar1 - (((int)uVar15 >> 0x1f) + (uint)(uVar13 < uVar15)),
                                  uVar13 - uVar15);
                uVar39 = CONCAT44(iVar28,uVar32 - uVar7);
                uVar10 = uVar10 + 1;
                iVar28 = iVar28 - (((int)uVar7 >> 0x1f) + (uint)(uVar32 < uVar7));
                uVar11 = uVar11 - uVar36;
              }
            }
          }
        }
      }
      else {
        if (iVar4 == 2) {
          iVar4 = piVar19[0xd];
          uVar10 = piVar19[10];
          uVar14 = piVar19[0xb];
          iVar16 = piVar19[0xc];
          uVar9 = piVar19[0xe];
        }
        else {
          if (iVar4 != 1) goto LAB_10006e38;
          iVar4 = piVar19[6];
          uVar14 = 0;
          uVar9 = piVar19[0xe];
          iVar16 = piVar19[5];
          uVar10 = 0;
        }
        iVar4 = recovered_10006e50(piVar19 + 2,uVar10,uVar14,iVar16,iVar4,uVar9);
        if (iVar4 == 0) {
          goto LAB_10006e38;
        }
      }
      iVar25 = iVar25 + 0x70;
    }
    uVar22 = param_2;
LAB_10006e38:
    uVar3 = 0;
    if (param_2 <= uVar22) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e50
 */

undefined4
recovered_10006e50(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r3 = 0;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  bVar1 = recovered_10006f80(param_1);
  uVar7 = 0;
  iVar3 = param_5;
  if (0 < param_5) {
    iVar3 = param_4;
  }
  if ((0 < iVar3) && (bVar1)) {
    uVar2 = param_4 + param_2;
    uVar7 = 1;
    uVar5 = uVar2;
    uVar9 = extraout_r1;
    if (0 < (int)uVar2) {
      uVar5 = param_5 + param_3;
      uVar9 = uVar5;
    }
    if (0 < (int)uVar5) {
      uVar10 = param_1[3];
      bVar11 = SBORROW4(uVar10,param_2);
      iVar3 = uVar10 - param_2;
      bVar1 = uVar10 == param_2;
      uVar5 = extraout_r3;
      if ((int)param_2 < (int)uVar10) {
        uVar5 = param_1[4];
        bVar11 = SBORROW4(uVar5,param_3);
        iVar3 = uVar5 - param_3;
        bVar1 = uVar5 == param_3;
      }
      if (!bVar1 && iVar3 < 0 == bVar11) {
        if ((int)uVar9 < (int)uVar5) {
          uVar5 = uVar9;
        }
        if ((int)uVar2 < (int)uVar10) {
          uVar10 = uVar2;
        }
        uVar2 = param_2 & ~((int)param_2 >> 0x1f);
        iVar3 = recovered_10007004(param_1,uVar9,1);
        for (uVar9 = param_3 & ~((int)param_3 >> 0x1f); (int)uVar9 < (int)uVar5; uVar9 = uVar9 + 1)
        {
          iVar4 = param_1[5];
          puVar8 = (uint *)(iVar4 * uVar9 + iVar3 + uVar2 * 4);
          uVar6 = uVar2;
          if (((uint)puVar8 & 3) == 0) {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              *(uint *)(iVar4 * uVar9 + iVar3 + uVar6 * 4) =
                   param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
                   param_6 >> 0x18;
            }
          }
          else {
            for (; (int)uVar6 < (int)uVar10; uVar6 = uVar6 + 1) {
              recovered_10007034(puVar8,param_6);
              puVar8 = puVar8 + 1;
            }
          }
        }
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f80
 */

bool recovered_10006f80(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint in_r12;

  if (param_1 == (int *)0x0) {
    return false;
  }
  bVar2 = false;
  if (param_1[6] == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      in_r12 = param_1[4];
    }
    if (uVar3 != 0 && in_r12 != 0) {
      if ((uint)(uVar3 << 2 <= (uint)param_1[5]) <= -(uVar3 >> 0x1e)) {
        return false;
      }
      if ((param_1[2] == 0) ||
         (lVar1 = (ulonglong)(uint)param_1[5] * (ulonglong)in_r12,
         (uint)-(int)((ulonglong)lVar1 >> 0x20) < (uint)((uint)lVar1 <= (uint)param_1[2]))) {
        if (*param_1 != 0) {
          bVar2 = param_1[1] == 0;
        }
        return bVar2;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007004
 */

int recovered_10007004(int *param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (int *)0x0) {
    param_3 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_3 != 0) {
    if (param_1[1] != 0) {
      param_3 = 0;
    }
    return param_3;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007034
 */

void recovered_10007034(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    *param_1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007044
 */

undefined8 recovered_10007044(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;

  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)(param_4 - param_1[1]);
  uVar4 = (uint)lVar1;
  lVar2 = (longlong)(param_2[1] - param_1[1]) * (longlong)(param_3 - *param_1);
  uVar3 = (uint)lVar2;
  return CONCAT44((int)((ulonglong)lVar2 >> 0x20) -
                  ((int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar3 < uVar4)),uVar3 - uVar4);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007078
 */

uint recovered_10007078(uint param_1,uint param_2)

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
 * Address: 0x100070c8
 */

uint recovered_100070c8(uint param_1,uint param_2)

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
 * Address: 0x10007100
 */

uint recovered_10007100(uint param_1,uint param_2)

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
 * Address: 0x10007170
 */

uint recovered_10007170(uint param_1,uint param_2)

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
 * Address: 0x100071d8
 */

undefined8 recovered_100071d8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100072bc
 */

undefined8 recovered_100072bc(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000733c
 */

undefined8 recovered_1000733c(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000745c
 */

undefined8 recovered_1000745c(uint param_1,uint param_2,uint param_3,uint param_4)

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


#undef DAT_10007598
#define DAT_10007598 (*(double *)(0x10007598U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007518
 */

undefined8 recovered_10007518(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10007598

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a0
 */

undefined8 recovered_100075a0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined8 uVar2;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (NAN(dVar1)) {
    return 0;
  }
  if (dVar1 < 0.0) {
    uVar2 = recovered_10007518(SUB84(-dVar1,0),(int)((ulonglong)-dVar1 >> 0x20));
    return CONCAT44(-((int)((ulonglong)uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = recovered_10007518(param_1,param_2);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075ec
 */

void recovered_100075ec(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007518(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(code * *)(((uintptr_t)pf_module_state + 0x94cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075fc
 */

void recovered_100075fc(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x934U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10008000)(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000760c
 */

double recovered_1000760c(uint param_1,uint param_2)

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
 * Address: 0x10007654
 */

void recovered_10007654(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 0) {
    recovered_1000760c(-param_1,-(param_2 + (uint)(param_1 != 0)));
    return;
  }
  recovered_1000760c(param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000767c
 */

float recovered_1000767c(uint in_r0,uint in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1000760c(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007698
 */

float recovered_10007698(int in_r0,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;

  recovered_10007654(in_r0,in_r1);
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}

