/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb04U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

undefined * recovered_10000480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_100036e2
#define DAT_100036e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
#undef DAT_10008000
#define DAT_10008000 (*(char *)(((uintptr_t)pf_module_state + 0x4b04U)))
#undef UNK_10003500
#define UNK_10003500 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef UNK_10003508
#define UNK_10003508 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef str_10003544
#define str_10003544 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48U)))
#undef str_10003559
#define str_10003559 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dU)))
#undef str_1000358b
#define str_1000358b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8fU)))
#undef str_1000359a
#define str_1000359a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eU)))
#undef str_100035aa
#define str_100035aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaeU)))
#undef str_100035b7
#define str_100035b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbU)))
#undef str_100035c2
#define str_100035c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6U)))
#undef str_100035ce
#define str_100035ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_100035d7
#define str_100035d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
#undef str_100035e5
#define str_100035e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9U)))
#undef str_100035f1
#define str_100035f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5U)))
#undef str_100035fd
#define str_100035fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_1000360a
#define str_1000360a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10eU)))
#undef str_10003614
#define str_10003614 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x118U)))
#undef str_1000361f
#define str_1000361f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x123U)))
#undef str_1000362b
#define str_1000362b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12fU)))
#undef str_10003634
#define str_10003634 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#undef str_10003645
#define str_10003645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x149U)))
#undef str_10003655
#define str_10003655 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_1000365f
#define str_1000365f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x163U)))
#undef str_10003665
#define str_10003665 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x169U)))
#undef str_10003670
#define str_10003670 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_1000367c
#define str_1000367c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_1000369a
#define str_1000369a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_100036bd
#define str_100036bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_100036cc
#define str_100036cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_100036e3
#define str_100036e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e7U)))
#undef str_100036f3
#define str_100036f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef str_10003702
#define str_10003702 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x206U)))
#undef str_10003dfd
#define str_10003dfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x901U)))
#undef str_10003e19
#define str_10003e19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91dU)))
#undef str_10003e2e
#define str_10003e2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x932U)))
#undef str_10003e3a
#define str_10003e3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93eU)))
#undef str_10003e4a
#define str_10003e4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94eU)))
#undef uRam0000000010003500
#define uRam0000000010003500 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef uRam0000000010003508
#define uRam0000000010003508 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#define uStack_160 (*(uint *)(frame + 1120))
#define uStack_140 (*(undefined8 *)(frame + 1152))
#define uStack_138 (*(undefined8 *)(frame + 1160))
#define auStack_130 (*(undefined1 (*)[64])(frame + 1168))
#define auStack_f0 (*(undefined1 (*)[20])(frame + 1232))
#define uStack_dc (*(uint *)(frame + 1252))
#define uStack_a0 (*(uint *)(frame + 1312))
#define uStack_9c (*(uint *)(frame + 1316))
#define abStack_94 (*(byte (*)[52])(frame + 1324))
#define local_144 (*(uint *)(frame + 1148))
#define auStack_5ac (*(undefined1 (*)[1024])(frame + 20))
#define aiStack_1ac (*(int (*)[4])(frame + 1044))
#define uStack_19c (*(uint *)(frame + 1060))
#define uStack_198 (*(uint *)(frame + 1064))
#define uStack_194 (*(uint *)(frame + 1068))
#define aiStack_178 (*(int (*)[4])(frame + 1096))
#define uStack_168 (*(uint *)(frame + 1112))
#define uStack_164 (*(uint *)(frame + 1116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

int recovered_1000048c(int *api)

{
  unsigned char frame[1504] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;

  local_144 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  recovered_10000b08(auStack_5ac,0x60,str_10003544);
  recovered_10001ce8((long)auStack_5ac,0x60,str_100036bd);
  recovered_10001d38((long)auStack_5ac,0x60,api[1]);
  recovered_10001ce8((long)auStack_5ac,0x60,str_100036cc);
  if (((*api == 0x54584b57) && (0x2b < (uint)api[2])) && (api[10] != 0)) {
    (*(code *)(ulong)(uint)api[10])(auStack_5ac);
  }
  DAT_10008000 = '\0';
  recovered_10000a78((undefined1 *)aiStack_178,0x34);
  recovered_10000a78((undefined1 *)aiStack_1ac,0x34);
  uVar9 = recovered_10000a90(api,(long)aiStack_178);
  iVar6 = (int)uVar9;
  if ((iVar6 == 0) || (bVar2 = recovered_10000ac8(aiStack_178), !bVar2)) {
    if (api[5] == 0) {
      iVar7 = 0;
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = (*(code *)(ulong)(uint)api[5])(0x500,800,0x20);
      if (iVar3 == 0) {
        iVar7 = 0;
        iVar4 = 0;
      }
      else {
        if (((*api == 0x54584b57) && (0xa3 < (uint)api[2])) && (api[0x28] != 0)) {
          iVar4 = (*(code *)(ulong)(uint)api[0x28])();
        }
        else {
          iVar4 = 0;
        }
        uVar9 = recovered_10000a90(api,(long)aiStack_1ac);
        iVar7 = (int)uVar9;
      }
    }
  }
  else {
    for (lVar10 = 0; lVar10 != 0x34; lVar10 = lVar10 + 1) {
      *(undefined1 *)((long)aiStack_1ac + lVar10) = *(undefined1 *)((long)aiStack_178 + lVar10);
    }
    iVar3 = 0;
    iVar4 = 1;
    iVar7 = iVar6;
  }
  if ((*api == 0x54584b57) && (0xb7 < (uint)api[2])) {
    pcVar15 = str_10003655;
    if (api[0x2d] != 0) {
      uVar8 = (*(code *)(ulong)(uint)api[0x2d])(1);
      pcVar15 = str_10003655;
      if ((uVar8 & 1) != 0) {
        pcVar15 = str_10003645;
      }
    }
  }
  else {
    pcVar15 = str_10003655;
  }
  bVar2 = recovered_10000ac8(aiStack_178);
  if (bVar2) {
    piVar11 = aiStack_178;
LAB_10000654:
    uVar12 = piVar11[4];
    uVar13 = piVar11[5];
    if ((uVar12 != 0) && (uVar13 != 0)) goto LAB_100006a0;
  }
  else {
    bVar2 = recovered_10000ac8(aiStack_1ac);
    if (bVar2) {
      piVar11 = aiStack_1ac;
      goto LAB_10000654;
    }
    uVar12 = 0x3c0;
    uVar13 = 0x220;
LAB_100006a0:
    bVar2 = recovered_10000ac8(aiStack_178);
    if ((((!bVar2) && (bVar2 = recovered_10000ac8(aiStack_1ac), !bVar2)) && (api[7] != 0)) &&
       (iVar5 = (*(code *)(ulong)(uint)api[7])(uVar12,uVar13,0x20), iVar5 != 0)) {
      uVar9 = recovered_10000a90(api,(long)aiStack_1ac);
      iVar7 = (int)uVar9;
      pcVar16 = str_10003665;
      goto LAB_100006f0;
    }
  }
  pcVar16 = str_10003670;
LAB_100006f0:
  recovered_10000b08(auStack_5ac,0x400,str_10003559);
  recovered_10000b18((long)auStack_5ac,str_1000358b,0x500);
  recovered_10000b18((long)auStack_5ac,str_1000359a,800);
  recovered_10000b18((long)auStack_5ac,str_100035aa,0x20);
  recovered_10000b18((long)auStack_5ac,str_100035b7,uVar12);
  recovered_10000b18((long)auStack_5ac,str_100035c2,uVar13);
  recovered_10000b18((long)auStack_5ac,str_100035ce,0x20);
  recovered_10000b68((long)auStack_5ac,str_100035d7,iVar3);
  recovered_10000b68((long)auStack_5ac,str_100035e5,iVar4);
  if (iVar6 != 0) {
    recovered_10000b18((long)auStack_5ac,str_100035f1,uStack_168);
    recovered_10000b18((long)auStack_5ac,str_100035fd,uStack_164);
    recovered_10000b18((long)auStack_5ac,str_1000360a,uStack_160);
  }
  if (iVar7 != 0) {
    recovered_10000b18((long)auStack_5ac,str_10003614,uStack_19c);
    recovered_10000b18((long)auStack_5ac,str_1000361f,uStack_198);
    recovered_10000b18((long)auStack_5ac,str_1000362b,uStack_194);
  }
  recovered_10000b84((long)auStack_5ac,str_10003634,pcVar15);
  recovered_10000b84((long)auStack_5ac,str_1000365f,pcVar16);
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
     ((api[0xf] != 0 && (iVar6 = (*(code *)(ulong)(uint)api[0xf])(&uStack_140), iVar6 != 0)))) {
    recovered_10000b18((long)auStack_5ac,str_100036e3,uStack_dc);
    recovered_10001e38((long)auStack_5ac,str_100036f3,uStack_a0);
    recovered_10000b18((long)auStack_5ac,str_10003702,uStack_9c);
  }
  if (api[3] == 0) {
    return 0;
  }
  iVar6 = (*(code *)(ulong)(uint)api[3])(&DAT_100036e2,str_1000367c,auStack_5ac);
  if (iVar6 == 0) {
    return 0;
  }
  if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
    for (uVar12 = 0; uVar12 != 8; uVar12 = uVar12 + 1) {
      for (uVar13 = 0; uVar13 != 0x20; uVar13 = uVar13 + 1) {
        uVar9 = recovered_10001f04(api,(ulong)(uVar12 & 0xff),(ulong)(uVar13 & 0xff),0,
                                   (undefined1 *)&uStack_140);
        if ((int)uVar9 != 0) {
          recovered_10000be4(api,(byte *)&uStack_140,(int *)&local_144);
          if (((int8_t)PF_PART1(uStack_138, 4)) < '\0') {
            for (uVar14 = 1; uVar14 != 8; uVar14 = uVar14 + 1) {
              uVar9 = recovered_10001f04(api,(ulong)(uVar12 & 0xff),(ulong)(uVar13 & 0xff),
                                         (ulong)(uVar14 & 0xff),abStack_94);
              if ((int)uVar9 != 0) {
                recovered_10000be4(api,abStack_94,(int *)&local_144);
              }
            }
          }
        }
      }
    }
  }
  cVar1 = DAT_10008000;
  recovered_10000a78((undefined1 *)&uStack_140,0x90);
  uStack_138 = uRam0000000010003508;
  uStack_140 = uRam0000000010003500;
  pcVar15 = str_10003dfd;
  if (cVar1 == '\0') {
    pcVar15 = str_10003e19;
  }
  recovered_10000b08(auStack_130,0x40,pcVar15);
  recovered_10000b08(auStack_f0,0x40,str_10003544);
  if ((*api == 0x54584b57) && (199 < (uint)api[2])) {
    pcVar15 = str_10003670;
    if (api[0x31] != 0) {
      iVar6 = (*(code *)(ulong)(uint)api[0x31])(&uStack_140,recovered_10002d40);
      pcVar16 = str_10003e3a;
      if (cVar1 == '\0') {
        pcVar16 = str_10003e4a;
      }
      pcVar15 = str_10003670;
      if (iVar6 != 0) {
        pcVar15 = pcVar16;
      }
    }
  }
  else {
    pcVar15 = str_10003670;
  }
  recovered_10000b84((long)auStack_5ac,str_10003e2e,pcVar15);
  recovered_10000b18((long)auStack_5ac,str_1000369a,local_144);
  if (api[3] != 0) {
    (*(code *)(ulong)(uint)api[3])(&DAT_100036e2,str_1000367c,auStack_5ac);
  }
  return 1;
}

/* Freestanding compiler service; Pooka's Free Software License. */
void bzero(void *p,unsigned long n)
{
 volatile unsigned char *d=p;while(n--)*d++=0;
}

#undef DAT_100036e2
#undef DAT_10008000
#undef UNK_10003500
#undef UNK_10003508
#undef str_10003544
#undef str_10003559
#undef str_1000358b
#undef str_1000359a
#undef str_100035aa
#undef str_100035b7
#undef str_100035c2
#undef str_100035ce
#undef str_100035d7
#undef str_100035e5
#undef str_100035f1
#undef str_100035fd
#undef str_1000360a
#undef str_10003614
#undef str_1000361f
#undef str_1000362b
#undef str_10003634
#undef str_10003645
#undef str_10003655
#undef str_1000365f
#undef str_10003665
#undef str_10003670
#undef str_1000367c
#undef str_1000369a
#undef str_100036bd
#undef str_100036cc
#undef str_100036e3
#undef str_100036f3
#undef str_10003702
#undef str_10003dfd
#undef str_10003e19
#undef str_10003e2e
#undef str_10003e3a
#undef str_10003e4a
#undef uRam0000000010003500
#undef uRam0000000010003508
#undef uStack_160
#undef uStack_140
#undef uStack_138
#undef auStack_130
#undef auStack_f0
#undef uStack_dc
#undef uStack_a0
#undef uStack_9c
#undef abStack_94
#undef local_144
#undef auStack_5ac
#undef aiStack_1ac
#undef uStack_19c
#undef uStack_198
#undef uStack_194
#undef aiStack_178
#undef uStack_168
#undef uStack_164

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a78
 */

void recovered_10000a78(undefined1 *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a90
 */

undefined8 recovered_10000a90(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x44)) ||
     ((param_2 == 0 || (param_1[0x10] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x10])(param_2);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac8
 */

bool recovered_10000ac8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != (int *)0x0) {
    if ((((*param_1 == 0) && (param_1[1] == 0)) || (param_1[3] == 0)) ||
       ((param_1[4] == 0 || (param_1[5] == 0)))) {
      return false;
    }
    bVar1 = param_1[6] != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b08
 */

void recovered_10000b08(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001ddc((long)param_1);
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


#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define abStack_3b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b18
 */

void recovered_10000b18(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  recovered_10001ce8(param_1,0x400,&DAT_100036d3);
  recovered_10001ce8(param_1,0x400,param_2);
  recovered_10001ce8(param_1,0x400,&DAT_100036d5);
  if (param_3 == 0) {
    lVar1 = recovered_10001ddc(param_1);
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
    recovered_10001df8(param_1,0x400,abStack_3b[uVar2]);
  }
  return;
}

#undef DAT_100036d3
#undef DAT_100036d5
#undef abStack_3b

#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef DAT_100036d7
#define DAT_100036d7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dbU)))
#undef DAT_100036e2
#define DAT_100036e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
#undef str_100036dc
#define str_100036dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b68
 */

void recovered_10000b68(long param_1,char *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  pcVar2 = str_100036dc;
  if (param_3 != 0) {
    pcVar2 = &DAT_100036d7;
  }
  recovered_10001ce8(param_1,0x400,&DAT_100036d3);
  recovered_10001ce8(param_1,0x400,param_2);
  recovered_10001ce8(param_1,0x400,&DAT_100036d5);
  pcVar3 = &DAT_100036e2;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  uVar1 = recovered_10001ddc(param_1);
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

#undef DAT_100036d3
#undef DAT_100036d5
#undef DAT_100036d7
#undef DAT_100036e2
#undef str_100036dc

#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef DAT_100036e2
#define DAT_100036e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b84
 */

void recovered_10000b84(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  recovered_10001ce8(param_1,0x400,&DAT_100036d3);
  recovered_10001ce8(param_1,0x400,param_2);
  recovered_10001ce8(param_1,0x400,&DAT_100036d5);
  pcVar3 = &DAT_100036e2;
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar1 = recovered_10001ddc(param_1);
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

#undef DAT_100036d3
#undef DAT_100036d5
#undef DAT_100036e2

#undef DAT_10003510
#define DAT_10003510 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10003518
#define DAT_10003518 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#undef DAT_10003b72
#define DAT_10003b72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x676U)))
#undef DAT_10003c52
#define DAT_10003c52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x756U)))
#undef DAT_10003c54
#define DAT_10003c54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x758U)))
#undef DAT_10003c5a
#define DAT_10003c5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x75eU)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b04U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b14U)))
#undef DAT_10008014
#define DAT_10008014 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4b18U)))
#undef DAT_10008020
#define DAT_10008020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b24U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2cU)))
#undef DAT_10008040
#define DAT_10008040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b44U)))
#undef DAT_10008060
#define DAT_10008060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b64U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4b6cU)))
#undef DAT_10008070
#define DAT_10008070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b74U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b7cU)))
#undef DAT_1000807c
#define DAT_1000807c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4b80U)))
#undef DAT_10008080
#define DAT_10008080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b84U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bacU)))
#undef UNK_10008022
#define UNK_10008022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b26U)))
#undef UNK_10008023
#define UNK_10008023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b27U)))
#undef str_10003711
#define str_10003711 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x215U)))
#undef str_1000371e
#define str_1000371e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x222U)))
#undef str_10003734
#define str_10003734 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10003748
#define str_10003748 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
#undef str_10003766
#define str_10003766 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26aU)))
#undef str_10003774
#define str_10003774 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x278U)))
#undef str_10003784
#define str_10003784 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x288U)))
#undef str_10003798
#define str_10003798 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29cU)))
#undef str_100037b0
#define str_100037b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b4U)))
#undef str_100037c8
#define str_100037c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2ccU)))
#undef str_100037e1
#define str_100037e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e5U)))
#undef str_100037f2
#define str_100037f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f6U)))
#undef str_10003802
#define str_10003802 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x306U)))
#undef str_10003811
#define str_10003811 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#undef str_1000381a
#define str_1000381a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31eU)))
#undef str_10003836
#define str_10003836 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_10003841
#define str_10003841 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_10003851
#define str_10003851 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x355U)))
#undef str_10003858
#define str_10003858 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35cU)))
#undef str_10003868
#define str_10003868 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_10003875
#define str_10003875 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000388b
#define str_1000388b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_100038a1
#define str_100038a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a5U)))
#undef str_100038b7
#define str_100038b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_100038cd
#define str_100038cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d1U)))
#undef str_100038e6
#define str_100038e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3eaU)))
#undef str_100038fe
#define str_100038fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x402U)))
#undef str_1000390b
#define str_1000390b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_1000391c
#define str_1000391c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_10003930
#define str_10003930 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x434U)))
#undef str_10003940
#define str_10003940 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x444U)))
#undef str_10003957
#define str_10003957 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45bU)))
#undef str_1000396a
#define str_1000396a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#undef str_10003974
#define str_10003974 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x478U)))
#undef str_10003987
#define str_10003987 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_1000399e
#define str_1000399e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a2U)))
#undef str_100039aa
#define str_100039aa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#undef str_100039b6
#define str_100039b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_100039c3
#define str_100039c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c7U)))
#undef str_100039cd
#define str_100039cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d1U)))
#undef str_100039e1
#define str_100039e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#undef str_100039f0
#define str_100039f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f4U)))
#undef str_10003a03
#define str_10003a03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x507U)))
#undef str_10003a15
#define str_10003a15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x519U)))
#undef str_10003a2b
#define str_10003a2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52fU)))
#undef str_10003a34
#define str_10003a34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x538U)))
#undef str_10003a3c
#define str_10003a3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x540U)))
#undef str_10003a44
#define str_10003a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x548U)))
#undef str_10003a4e
#define str_10003a4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x552U)))
#undef str_10003a5a
#define str_10003a5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55eU)))
#undef str_10003a6f
#define str_10003a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_10003a77
#define str_10003a77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_10003a7f
#define str_10003a7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x583U)))
#undef str_10003a87
#define str_10003a87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58bU)))
#undef str_10003a93
#define str_10003a93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x597U)))
#undef str_10003a9b
#define str_10003a9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59fU)))
#undef str_10003aa3
#define str_10003aa3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a7U)))
#undef str_10003aab
#define str_10003aab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5afU)))
#undef str_10003ab3
#define str_10003ab3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b7U)))
#undef str_10003abe
#define str_10003abe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c2U)))
#undef str_10003ac4
#define str_10003ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c8U)))
#undef str_10003ace
#define str_10003ace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d2U)))
#undef str_10003ae3
#define str_10003ae3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e7U)))
#undef str_10003af4
#define str_10003af4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f8U)))
#undef str_10003b00
#define str_10003b00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x604U)))
#undef str_10003b0c
#define str_10003b0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x610U)))
#undef str_10003b18
#define str_10003b18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61cU)))
#undef str_10003b27
#define str_10003b27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62bU)))
#undef str_10003b31
#define str_10003b31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x635U)))
#undef str_10003b3f
#define str_10003b3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x643U)))
#undef str_10003b50
#define str_10003b50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_10003b5c
#define str_10003b5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x660U)))
#undef str_10003b68
#define str_10003b68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66cU)))
#undef str_10003b77
#define str_10003b77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67bU)))
#undef str_10003b80
#define str_10003b80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x684U)))
#undef str_10003b9e
#define str_10003b9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a2U)))
#undef str_10003bba
#define str_10003bba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6beU)))
#undef str_10003bd0
#define str_10003bd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d4U)))
#undef str_10003bea
#define str_10003bea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eeU)))
#undef str_10003bfa
#define str_10003bfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6feU)))
#undef str_10003c07
#define str_10003c07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70bU)))
#undef str_10003c17
#define str_10003c17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71bU)))
#undef str_10003c21
#define str_10003c21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x725U)))
#undef str_10003c29
#define str_10003c29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72dU)))
#undef str_10003c32
#define str_10003c32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x736U)))
#undef str_10003c3a
#define str_10003c3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73eU)))
#undef str_10003c46
#define str_10003c46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74aU)))
#undef str_10003c5f
#define str_10003c5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x763U)))
#undef str_10003c68
#define str_10003c68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76cU)))
#undef str_10003c71
#define str_10003c71 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x775U)))
#undef str_10003c79
#define str_10003c79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77dU)))
#undef str_10003c84
#define str_10003c84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x788U)))
#undef uRam0000000010008022
#define uRam0000000010008022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b26U)))
#undef uRam0000000010008023
#define uRam0000000010008023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b27U)))
#define acStack_8f4 (*(char (*)[1024])(frame + 28))
#define uStack_4f4 (*(uint *)(frame + 1052))
#define uStack_4f0 (*(undefined8 *)(frame + 1056))
#define uStack_4e8 (*(undefined8 *)(frame + 1064))
#define uStack_4e0 (*(ulong *)(frame + 1072))
#define uStack_4d8 (*(undefined8 *)(frame + 1080))
#define uStack_4d0 (*(undefined8 *)(frame + 1088))
#define uStack_4c8 (*(undefined8 *)(frame + 1096))
#define uStack_4b8 (*(ulong *)(frame + 1112))
#define uStack_4b0 (*(ulong *)(frame + 1120))
#define uStack_4a8 (*(uint *)(frame + 1128))
#define uStack_4a4 (*(uint *)(frame + 1132))
#define uStack_498 (*(uint *)(frame + 1144))
#define uStack_494 (*(uint *)(frame + 1148))
#define uStack_490 (*(uint *)(frame + 1152))
#define uStack_48c (*(uint *)(frame + 1156))
#define uStack_488 (*(uint *)(frame + 1160))
#define uStack_484 (*(uint *)(frame + 1164))
#define uStack_480 (*(uint *)(frame + 1168))
#define uStack_47c (*(uint *)(frame + 1172))
#define uStack_478 (*(uint *)(frame + 1176))
#define uStack_474 (*(uint *)(frame + 1180))
#define uStack_470 (*(uint *)(frame + 1184))
#define uStack_468 (*(ulong *)(frame + 1192))
#define uStack_460 (*(uint *)(frame + 1200))
#define auStack_c8 (*(uint (*)[26])(frame + 2120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000be4
 */

void recovered_10000be4(int *param_1,byte *param_2,int *param_3)

{
  int firmware_framebuffer[13]={0};
  if (param_2 && *(unsigned short *)(param_2+4)==0x1af4 &&
      *(unsigned short *)(param_2+6)==0x1050 &&
      recovered_10000a90(param_1,(long)firmware_framebuffer) &&
      recovered_10000ac8(firmware_framebuffer)) return;
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  undefined4 *puVar23;

  if (((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
     (*(short *)(param_2 + 6) != 0x1050)) {
    bVar4 = *(short *)(param_2 + 6) == 0x1050;
    if (param_2[8] != 3 && *(short *)(param_2 + 6) != 0x1050) {
      return;
    }
  }
  else {
    bVar4 = true;
  }
  pbVar22 = param_2 + 8;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  recovered_10000b08(acStack_8f4,0x400,str_10003711);
  if (bVar4) {
    pcVar17 = str_1000371e;
LAB_10000cc8:
    recovered_10001ce8((long)acStack_8f4,0x400,pcVar17);
  }
  else {
    if (*(short *)(param_2 + 4) == 0x1013) {
      pcVar17 = str_10003748;
      goto LAB_10000cc8;
    }
    if ((*(short *)(param_2 + 4) == 0x1234) && (*(short *)(param_2 + 6) == 0x1111)) {
      pcVar17 = str_10003734;
      goto LAB_10000cc8;
    }
  }
  iVar8 = recovered_10002344((long)param_2);
  uStack_4c8 = (ulong)PF_PART4(uStack_4c8, 4) << 0x20;
  if (((param_1 == (int *)0x0) || (param_2 == (byte *)0x0)) ||
     ((*param_1 != 0x54584b57 || (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))))) {
    pcVar17 = str_10003798;
LAB_10000d58:
    recovered_10001ce8((long)acStack_8f4,0x400,pcVar17);
    bVar4 = false;
  }
  else {
    uVar15 = recovered_10002050(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                (long)&uStack_4c8);
    if ((int)uVar15 == 0) {
      pcVar17 = str_100037b0;
      goto LAB_10000d58;
    }
    uVar9 = 0;
    for (lVar18 = 0x14; lVar18 != 0x2c; lVar18 = lVar18 + 4) {
      uVar21 = uVar9 | 1;
      if (*(uint *)(param_2 + lVar18) != 0) {
        uVar9 = uVar9 | 2;
      }
      if ((*(uint *)(param_2 + lVar18) & 1) != 0) {
        uVar9 = uVar21;
      }
    }
    lVar18 = recovered_10001ddc(((uintptr_t)pf_module_state + 0x262U));
    if (lVar18 != 0) {
      uVar9 = uVar9 | 4;
    }
    if (*pbVar22 == 6) {
      if (param_2[9] != 0) {
        uVar9 = uVar9 | 2;
      }
    }
    auStack_c8[0] = (uint)uStack_4c8 | uVar9;
    if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) ||
       (iVar10 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
       iVar10 == 0)) {
      pcVar17 = str_100037c8;
      goto LAB_10000d58;
    }
    recovered_10002050(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_c8);
    recovered_10001e38((long)acStack_8f4,str_100037e1,(uint)uStack_4c8);
    uVar21 = auStack_c8[0];
    recovered_10001e38((long)acStack_8f4,str_100037f2,auStack_c8[0]);
    recovered_10001e38((long)acStack_8f4,str_10003802,uVar9);
    bVar4 = (uVar9 & (uVar21 ^ 0xffffffff)) == 0;
  }
  if (iVar8 == -1) {
    uStack_4c8 = 0;
    auStack_c8[0] = 0;
    uStack_4d0 = 0;
    uStack_4d8 = uStack_4d8 & 0xffffffff;
    if ((*pbVar22 == 1) && (param_2[9] == 6)) {
      uVar15 = recovered_100027c4(param_1,(long)param_2,5,0x1000,&uStack_4c8);
      uVar16 = uStack_4c8;
      if ((int)uVar15 == 0) {
        recovered_10001ce8((long)acStack_8f4,0x400,str_10003a15);
        goto LAB_10001148;
      }
      recovered_10002a84((long)acStack_8f4,str_10003a2b,uStack_4c8);
      recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
      recovered_10002940(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
      recovered_10002940(param_1,uStack_4c8,0xc,(long)&uStack_4d0);
      recovered_10002940(param_1,uStack_4c8,0x10,(long)&uStack_4d8 + 4);
      uVar9 = PF_PART4(uStack_4d0, 4);
      if (-1 < (long)uStack_4d0) {
        recovered_1000292c(param_1,uStack_4c8,4,(ulong)(PF_PART4(uStack_4d0, 4) | 0x80000000));
        recovered_10002940(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
        uVar9 = PF_PART4(uStack_4d0, 4);
      }
      recovered_10001e38((long)acStack_8f4,str_10003a34,auStack_c8[0]);
      recovered_10001e38((long)acStack_8f4,str_10003a3c,uVar9);
      recovered_10001e38((long)acStack_8f4,str_10003a44,(uint)uStack_4d0);
      recovered_10001e38((long)acStack_8f4,str_10003a4e,PF_PART4(uStack_4d8, 4));
      bVar1 = 1;
    }
    else {
LAB_10001148:
      bVar1 = 0;
    }
    uStack_4c8 = 0;
    auStack_c8[0] = 0;
    uStack_4d0 = 0;
    if ((*pbVar22 == 4) && (param_2[9] == 3)) {
      uVar15 = recovered_100027c4(param_1,(long)param_2,0,0x1000,&uStack_4c8);
      uVar16 = uStack_4c8;
      if ((int)uVar15 == 0) {
        recovered_10001ce8((long)acStack_8f4,0x400,str_10003a5a);
        goto LAB_10001224;
      }
      recovered_10002a84((long)acStack_8f4,str_10003a6f,uStack_4c8);
      recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
      recovered_10002940(param_1,uStack_4c8,8,(long)&uStack_4d0 + 4);
      if ((uStack_4d0 & 0x100000000) == 0) {
        recovered_1000292c(param_1,uStack_4c8,8,(ulong)(PF_PART4(uStack_4d0, 4) | 1));
        recovered_10002940(param_1,uStack_4c8,8,(long)&uStack_4d0 + 4);
      }
      recovered_100029b4(param_1,uStack_4c8 + 0xe,2,(long)&uStack_4d0);
      recovered_10001e38((long)acStack_8f4,str_10003a77,auStack_c8[0]);
      recovered_10001e38((long)acStack_8f4,str_10003a7f,PF_PART4(uStack_4d0, 4));
      recovered_10001e38((long)acStack_8f4,str_10003a87,(uint)uStack_4d0);
      bVar3 = 1;
    }
    else {
LAB_10001224:
      bVar3 = 0;
    }
    uStack_4c8 = 0;
    auStack_c8[0] = 0;
    uStack_4d0 = 0;
    if ((*pbVar22 == 0xc) && (param_2[9] == 3)) {
      uVar15 = recovered_100027c4(param_1,(long)param_2,0,0x1000,&uStack_4c8);
      uVar16 = uStack_4c8;
      if ((int)uVar15 == 0) {
        for (lVar18 = 0; lVar18 != 6; lVar18 = lVar18 + 1) {
          uStack_4d8 = uStack_4d8 & 0xffffffff;
          uVar9 = *(uint *)(param_2 + lVar18 * 4 + 0x14);
          if (((uVar9 & 1) != 0) &&
             (uVar15 = recovered_10002b38(param_1,(ulong)(uVar9 & 0xfffc),2,(long)&uStack_4d8 + 4),
             (int)uVar15 != 0)) {
            recovered_10001ce8((long)acStack_8f4,0x400,str_10003ab3);
            recovered_10001d38((long)acStack_8f4,0x400,(uint)lVar18);
            recovered_10001e38((long)acStack_8f4,str_10003abe,uVar9 & 0xfffffffc);
            pcVar17 = str_10003ac4;
            uVar9 = PF_PART4(uStack_4d8, 4);
            goto LAB_100012b0;
          }
        }
        recovered_10001ce8((long)acStack_8f4,0x400,str_10003ace);
        goto LAB_100013a0;
      }
      recovered_10002a84((long)acStack_8f4,str_10003a93,uStack_4c8);
      recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
      recovered_10002940(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
      recovered_10002940(param_1,uStack_4c8,8,(long)&uStack_4d0);
      recovered_10001e38((long)acStack_8f4,str_10003a9b,auStack_c8[0]);
      recovered_10001e38((long)acStack_8f4,str_10003aa3,PF_PART4(uStack_4d0, 4));
      pcVar17 = str_10003aab;
      uVar9 = (uint)uStack_4d0;
LAB_100012b0:
      recovered_10001e38((long)acStack_8f4,pcVar17,uVar9);
      bVar2 = 1;
    }
    else {
LAB_100013a0:
      bVar2 = 0;
    }
    bVar2 = bVar3 | bVar1 | bVar2;
    uStack_4c8 = 0;
    auStack_c8[0] = 0;
    uStack_4d0 = uStack_4d0 & 0xffffffff;
    bVar1 = *pbVar22;
    if (bVar1 == 2) {
      for (lVar18 = 0; lVar18 != 6; lVar18 = lVar18 + 1) {
        uVar9 = (uint)lVar18;
        uVar15 = recovered_100027c4(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
        if ((int)uVar15 != 0) {
          recovered_10001ce8((long)acStack_8f4,0x400,str_10003ae3);
          recovered_10001d38((long)acStack_8f4,0x400,uVar9);
          uVar16 = uStack_4c8;
          recovered_10002a84((long)acStack_8f4,str_10003af4,uStack_4c8);
          recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
          recovered_10002940(param_1,uStack_4c8,4,(long)&uStack_4d0 + 4);
          recovered_10001e38((long)acStack_8f4,str_10003b00,auStack_c8[0]);
          pcVar17 = str_10003b0c;
          uVar9 = PF_PART4(uStack_4d0, 4);
LAB_1000147c:
          recovered_10001e38((long)acStack_8f4,pcVar17,uVar9);
          break;
        }
        uVar21 = *(uint *)(param_2 + lVar18 * 4 + 0x14);
        if (((uVar21 & 1) != 0) &&
           (uVar15 = recovered_10002b38(param_1,(ulong)(uVar21 & 0xfffc),2,(long)auStack_c8),
           (int)uVar15 != 0)) {
          recovered_10001ce8((long)acStack_8f4,0x400,str_10003b18);
          recovered_10001d38((long)acStack_8f4,0x400,uVar9);
          recovered_10001e38((long)acStack_8f4,str_10003b27,uVar21 & 0xfffffffc);
          pcVar17 = str_10003b31;
          uVar9 = auStack_c8[0];
          goto LAB_1000147c;
        }
      }
      if (lVar18 != 6) {
        bVar2 = 1;
      }
      bVar1 = *pbVar22;
    }
    uStack_4c8 = 0;
    bVar5 = false;
    auStack_c8[0] = 0;
    if (bVar1 == 3) {
      for (uVar9 = 0; uVar9 != 6; uVar9 = uVar9 + 1) {
        uVar15 = recovered_100027c4(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
        if ((int)uVar15 != 0) {
          recovered_10001ce8((long)acStack_8f4,0x400,str_10003b3f);
          recovered_10001d38((long)acStack_8f4,0x400,uVar9);
          uVar16 = uStack_4c8;
          recovered_10002a84((long)acStack_8f4,str_10003b50,uStack_4c8);
          uVar15 = recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
          if ((int)uVar15 != 0) {
            recovered_10001e38((long)acStack_8f4,str_10003b5c,auStack_c8[0]);
          }
          break;
        }
      }
      bVar5 = uVar9 != 6;
    }
    bVar5 = (bool)(bVar2 | bVar4 | bVar5);
    if (!bVar5) {
      uStack_4c8 = 0;
      auStack_c8[0] = 0;
      if (param_2 == (byte *)0x0) {
        bVar5 = false;
      }
      else {
        for (uVar9 = 0; uVar9 != 6; uVar9 = uVar9 + 1) {
          uVar15 = recovered_100027c4(param_1,(long)param_2,uVar9,0x1000,&uStack_4c8);
          if ((int)uVar15 != 0) {
            recovered_10001ce8((long)acStack_8f4,0x400,str_10003b68);
            recovered_10001d38((long)acStack_8f4,0x400,uVar9);
            uVar16 = uStack_4c8;
            recovered_10002a84((long)acStack_8f4,&DAT_10003b72,uStack_4c8);
            uVar15 = recovered_10002940(param_1,uVar16,0,(long)auStack_c8);
            if ((int)uVar15 != 0) {
              recovered_10001e38((long)acStack_8f4,str_10003b77,auStack_c8[0]);
            }
            break;
          }
        }
        bVar5 = uVar9 != 6;
      }
    }
  }
  else {
    uVar9 = recovered_10002344((long)param_2);
    if (uVar9 == 0xffffffff) {
LAB_10001014:
      bVar1 = 0;
    }
    else {
      recovered_10000b18((long)acStack_8f4,str_10003811,uVar9);
      uVar16 = recovered_1000238c(param_1,param_2,&uStack_4c8);
      if ((int)uVar16 == 0) {
        if (uStack_494 != 0) {
          recovered_10000b18((long)acStack_8f4,str_10003836,uStack_494);
        }
        if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
          for (lVar18 = 0; lVar18 != 6; lVar18 = lVar18 + 1) {
            uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
            auStack_c8[0] = 0;
            if ((*(uint *)(param_2 + lVar18 * 4 + 0x14) & 1) != 0) {
              uVar21 = *(uint *)(param_2 + lVar18 * 4 + 0x14) & 0xfffffffc;
              uVar9 = uVar21 + 0x12;
              uVar15 = recovered_10002b38(param_1,(ulong)(uVar9 & 0xfffe),1,(long)&uStack_4c8);
              if ((int)uVar15 != 0) {
                recovered_10000b84((long)acStack_8f4,str_10003841,str_100039c3);
                recovered_10001ce8((long)acStack_8f4,0x400,str_100039cd);
                recovered_10001d38((long)acStack_8f4,0x400,(uint)lVar18);
                recovered_10001e38((long)acStack_8f4,str_100039e1,uVar21);
                recovered_10001e38((long)acStack_8f4,str_100039f0,(uint)uStack_4c8);
                recovered_10002b74(param_1,(ulong)(uVar9 & 0xffff));
                recovered_10002b74(param_1,(ulong)(uVar9 & 0xffff));
                uVar15 = recovered_10002b38(param_1,(ulong)(uVar9 & 0xffff),1,(long)auStack_c8);
                if ((int)uVar15 != 0) {
                  recovered_10001e38((long)acStack_8f4,str_10003a03,auStack_c8[0]);
                }
                goto LAB_10000efc;
              }
            }
          }
        }
        recovered_10001ce8((long)acStack_8f4,0x400,str_1000381a);
        goto LAB_10001014;
      }
      recovered_100025c4(param_1,&uStack_4c8);
      recovered_10000b84((long)acStack_8f4,str_10003841,str_10003851);
      recovered_10000b18((long)acStack_8f4,str_10003836,uStack_494);
      recovered_10000b18((long)acStack_8f4,str_10003858,uStack_4a8);
      recovered_10002a84((long)acStack_8f4,str_10003868,uStack_4c8);
      recovered_10001e38((long)acStack_8f4,str_10003875,uStack_490);
      recovered_10001e38((long)acStack_8f4,str_1000388b,uStack_48c);
      recovered_10001e38((long)acStack_8f4,str_100038a1,uStack_488);
      recovered_10001e38((long)acStack_8f4,str_100038b7,uStack_484);
      recovered_10001e38((long)acStack_8f4,str_100038cd,uStack_480);
      uVar9 = uStack_47c;
      recovered_10001e38((long)acStack_8f4,str_100038e6,uStack_47c);
      recovered_10000b18((long)acStack_8f4,str_100038fe,uStack_478);
      recovered_10000b18((long)acStack_8f4,str_1000390b,uStack_474);
      recovered_10000b18((long)acStack_8f4,str_1000391c,uStack_470);
      uVar16 = uStack_468;
      if (uStack_468 != 0) {
        recovered_10000b18((long)acStack_8f4,str_10003930,uStack_4a4);
        recovered_10001e38((long)acStack_8f4,str_10003940,uStack_498);
        recovered_10002a84((long)acStack_8f4,str_10003957,uVar16);
      }
      if (uStack_4b8 != 0) {
        recovered_10002a84((long)acStack_8f4,str_1000396a,uStack_4b8);
      }
      if (uStack_4b0 != 0) {
        recovered_10002a84((long)acStack_8f4,str_10003974,uStack_4b0);
      }
      recovered_10000b18((long)acStack_8f4,str_10003987,uStack_460);
      pcVar17 = str_100039b6;
      if ((uVar9 & 8) != 0) {
        pcVar17 = str_100039aa;
      }
      recovered_10000b84((long)acStack_8f4,str_1000399e,pcVar17);
LAB_10000efc:
      bVar1 = 1;
    }
    bVar5 = (bool)(bVar1 | bVar4);
  }
  pcVar17 = str_10003784;
  if (bVar5) {
    pcVar17 = str_10003774;
  }
  recovered_10001ce8((long)acStack_8f4,0x400,pcVar17);
  auStack_c8[0] = 0;
  uStack_4d0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4f4 = 0;
  if ((((param_2 != (byte *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
      (*(short *)(param_2 + 6) == 0x1050)) || (*(short *)(param_2 + 6) == 0x1050)) {
    uVar16 = recovered_1000238c(param_1,param_2,&uStack_4c8);
    if ((int)uVar16 == 0) {
      pcVar17 = str_10003b80;
    }
    else {
      recovered_100025c4(param_1,&uStack_4c8);
      if (((byte)uStack_47c >> 3 & 1) == 0) {
        pcVar17 = str_10003b9e;
      }
      else {
        pcVar17 = str_10003bba;
        if ((1 < uStack_474) && (uStack_468 != 0)) {
          recovered_10000a78(&DAT_10008060,0x20);
          recovered_10000a78((undefined1 *)&DAT_10008010,8);
          recovered_10000a78(&DAT_10008020,0x14);
          recovered_10000a78((undefined1 *)&DAT_10008040,0x18);
          recovered_10000a78(&DAT_10008080,0x198);
          uVar15 = recovered_10002bb0(param_1,((uintptr_t)pf_module_state + 0x4b64U),0x20,(long)auStack_c8);
          if (((((int)uVar15 != 0) &&
               ((uVar15 = recovered_10002bb0(param_1,((uintptr_t)pf_module_state + 0x4b14U),8,(long)&uStack_4d0),
                (int)uVar15 != 0 &&
                (uVar15 = recovered_10002bb0(param_1,((uintptr_t)pf_module_state + 0x4b24U),0x14,(long)&uStack_4d8),
                (int)uVar15 != 0)))) &&
              (uVar15 = recovered_10002bb0(param_1,((uintptr_t)pf_module_state + 0x4b44U),0x18,(long)&uStack_4e0),
              (int)uVar15 != 0)) &&
             (uVar15 = recovered_10002bb0(param_1,((uintptr_t)pf_module_state + 0x4b84U),0x198,(long)&uStack_4e8),
             (int)uVar15 != 0)) {
            DAT_10008040 = 0x100;
            recovered_10002bec(&DAT_10008060,(undefined4)uStack_4e0,PF_PART4(uStack_4e8, 4));
            DAT_10008068 = DAT_10003510;
            recovered_10002bec(&DAT_10008070,(undefined4)uStack_4e8,PF_PART4(uStack_4f0, 4));
            DAT_10008078 = (undefined4)DAT_10003518;
            DAT_1000807c = 2;
            DAT_10008010 = 0x10000;
            DAT_10008014 = 0;
            recovered_100029a0(param_1,uStack_4c8,0x16,0);
            recovered_100029a0(param_1,uStack_4c8,0x18,2);
            recovered_10002c2c(param_1,uStack_4c8,0x20,(ulong)auStack_c8[0],uStack_4d0 >> 0x20);
            recovered_10002c2c(param_1,uStack_4c8,0x28,uStack_4d0 & 0xffffffff,uStack_4d8 >> 0x20);
            recovered_10002c2c(param_1,uStack_4c8,0x30,uStack_4d8 & 0xffffffff,uStack_4e0 >> 0x20);
            recovered_10002c7c(param_1);
            recovered_10002c7c(param_1);
            recovered_10002c7c(param_1);
            recovered_10002c7c(param_1);
            recovered_10002c7c(param_1);
            recovered_100029a0(param_1,uStack_4c8,0x1c,1);
            recovered_10002988(param_1,uStack_4c8,0x1c,(long)&uStack_4f0);
            recovered_100028fc(param_1,uStack_4c8,0x14,(long)&uStack_4f4);
            recovered_10002914(param_1,uStack_4c8,(ulong)(uStack_4f4 | 4));
            recovered_100028fc(param_1,uStack_4c8,0x14,(long)&uStack_4f4);
            recovered_10002958(param_1);
            recovered_100029a0(param_1,uStack_468,0,0);
            iVar8 = 100;
            do {
              recovered_10002c7c(param_1);
              uVar9 = (uint)CONCAT11(uRam0000000010008023,uRam0000000010008022);
              if (uVar9 != 0) goto LAB_100018d8;
              if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
                  (0x33 < (uint)param_1[2])) && (param_1[0xc] != 0)) {
                (*(code *)(ulong)(uint)param_1[0xc])(100);
              }
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            uVar9 = 0;
LAB_100018d8:
            recovered_10002c7c(param_1);
            if (uVar9 == 0) {
              uVar21 = 0;
              uVar13 = 0;
              uVar14 = 0;
              uVar12 = 0;
              uVar11 = 0;
            }
            else {
              uVar11 = recovered_10002cb0((undefined4 *)&DAT_10008028);
              puVar23 = (undefined4 *)&DAT_100080a8;
              uVar12 = recovered_10002cb0((undefined4 *)&DAT_10008080);
              uVar21 = 0;
              lVar18 = 0x10;
              uVar20 = 0;
              uVar19 = 0;
              do {
                uVar13 = recovered_10002cb0(puVar23 + -2);
                uVar14 = recovered_10002cb0(puVar23 + -1);
                iVar8 = recovered_10002cb0(puVar23);
                bVar4 = uVar21 != 0;
                bVar5 = iVar8 != 0;
                bVar6 = uVar13 != 0;
                bVar7 = uVar14 != 0;
                if ((bVar5 && bVar6) && bVar7) {
                  uVar21 = uVar21 + 1;
                }
                if (((!bVar5 || !bVar6) || !bVar7) || bVar4) {
                  uVar13 = uVar20;
                }
                if (((!bVar5 || !bVar6) || !bVar7) || bVar4) {
                  uVar14 = uVar19;
                }
                puVar23 = puVar23 + 6;
                lVar18 = lVar18 + -1;
                uVar20 = uVar13;
                uVar19 = uVar14;
              } while (lVar18 != 0);
            }
            recovered_10001ce8((long)acStack_8f4,0x400,str_10003bea);
            recovered_10000b18((long)acStack_8f4,str_10003bfa,2);
            recovered_10000b18((long)acStack_8f4,str_10003c07,(uint)uStack_4f0);
            recovered_10001e38((long)acStack_8f4,str_10003c17,uStack_4f4);
            recovered_10000b18((long)acStack_8f4,str_10003c21,uVar9);
            recovered_10000b18((long)acStack_8f4,str_10003c29,uVar11);
            recovered_10001e38((long)acStack_8f4,str_10003c32,uVar12);
            recovered_10000b18((long)acStack_8f4,str_10003c3a,uVar21);
            if ((uVar13 != 0) && (uVar14 != 0)) {
              recovered_10001ce8((long)acStack_8f4,0x400,str_10003c46);
              recovered_10001d38((long)acStack_8f4,0x400,0);
              recovered_10001ce8((long)acStack_8f4,0x400,&DAT_100036d5);
              recovered_10001d38((long)acStack_8f4,0x400,uVar13);
              recovered_10001ce8((long)acStack_8f4,0x400,&DAT_10003c52);
              recovered_10001d38((long)acStack_8f4,0x400,uVar14);
            }
            if (uVar12 == 0x1101) {
              DAT_10008000 = 1;
            }
            goto LAB_10001988;
          }
          pcVar17 = str_10003bd0;
        }
      }
    }
    recovered_10001ce8((long)acStack_8f4,0x400,pcVar17);
  }
LAB_10001988:
  pcVar17 = recovered_1000209c((long)param_2);
  if (param_2 != (byte *)0x0) {
    recovered_10000b08((undefined1 *)auStack_c8,0x60,str_10003766);
    recovered_10001ce8((long)auStack_c8,0x60,&DAT_10003c54);
    recovered_10001e8c((long)auStack_c8,0x60,(uint)*param_2,2);
    recovered_10001ce8((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state + 0x75aU));
    recovered_10001e8c((long)auStack_c8,0x60,(uint)param_2[1],2);
    recovered_10001ce8((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state + 0x75cU));
    recovered_10001d38((long)auStack_c8,0x60,(uint)param_2[2]);
    recovered_10000b08((undefined1 *)&uStack_4c8,0x400,&DAT_10003c5a);
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)*param_2,2);
    recovered_10001ce8((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x75aU));
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)param_2[1],2);
    recovered_10001ce8((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x75cU));
    recovered_10001d38((long)&uStack_4c8,0x400,(uint)param_2[2]);
    recovered_10001ce8((long)&uStack_4c8,0x400,str_10003c5f);
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
    recovered_10001ce8((long)&uStack_4c8,0x400,str_10003c68);
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
    recovered_10001ce8((long)&uStack_4c8,0x400,str_10003c71);
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)param_2[8],2);
    recovered_10001ce8((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x75cU));
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)param_2[9],2);
    recovered_10001ce8((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x75cU));
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)param_2[10],2);
    recovered_10001ce8((long)&uStack_4c8,0x400,str_10003c79);
    recovered_10001e8c((long)&uStack_4c8,0x400,(uint)param_2[0xb],2);
    recovered_10001e38((long)&uStack_4c8,str_10003c84,*(uint *)(param_2 + 0x10));
    for (lVar18 = 0; lVar18 != 6; lVar18 = lVar18 + 1) {
      uVar9 = *(uint *)(param_2 + lVar18 * 4 + 0x14);
      if (uVar9 != 0) {
        recovered_10001ce8((long)&uStack_4c8,0x400,(char *)((uintptr_t)pf_module_state + 0x790U));
        recovered_10001d38((long)&uStack_4c8,0x400,(uint)lVar18);
        recovered_10001ce8((long)&uStack_4c8,0x400,&DAT_100036d5);
        recovered_10001e8c((long)&uStack_4c8,0x400,uVar9,8);
      }
    }
    if (acStack_8f4[0] != '\0') {
      recovered_10001ce8((long)&uStack_4c8,0x400,&DAT_100036d3);
      recovered_10001ce8((long)&uStack_4c8,0x400,acStack_8f4);
    }
    if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
      (*(code *)(ulong)(uint)param_1[3])(auStack_c8,pcVar17,&uStack_4c8);
    }
  }
  return;
}

#undef DAT_10003510
#undef DAT_10003518
#undef DAT_100036d3
#undef DAT_100036d5
#undef DAT_10003b72
#undef DAT_10003c52
#undef DAT_10003c54
#undef DAT_10003c5a
#undef DAT_10008000
#undef DAT_10008010
#undef DAT_10008014
#undef DAT_10008020
#undef DAT_10008028
#undef DAT_10008040
#undef DAT_10008060
#undef DAT_10008068
#undef DAT_10008070
#undef DAT_10008078
#undef DAT_1000807c
#undef DAT_10008080
#undef DAT_100080a8
#undef UNK_10008022
#undef UNK_10008023
#undef str_10003711
#undef str_1000371e
#undef str_10003734
#undef str_10003748
#undef str_10003766
#undef str_10003774
#undef str_10003784
#undef str_10003798
#undef str_100037b0
#undef str_100037c8
#undef str_100037e1
#undef str_100037f2
#undef str_10003802
#undef str_10003811
#undef str_1000381a
#undef str_10003836
#undef str_10003841
#undef str_10003851
#undef str_10003858
#undef str_10003868
#undef str_10003875
#undef str_1000388b
#undef str_100038a1
#undef str_100038b7
#undef str_100038cd
#undef str_100038e6
#undef str_100038fe
#undef str_1000390b
#undef str_1000391c
#undef str_10003930
#undef str_10003940
#undef str_10003957
#undef str_1000396a
#undef str_10003974
#undef str_10003987
#undef str_1000399e
#undef str_100039aa
#undef str_100039b6
#undef str_100039c3
#undef str_100039cd
#undef str_100039e1
#undef str_100039f0
#undef str_10003a03
#undef str_10003a15
#undef str_10003a2b
#undef str_10003a34
#undef str_10003a3c
#undef str_10003a44
#undef str_10003a4e
#undef str_10003a5a
#undef str_10003a6f
#undef str_10003a77
#undef str_10003a7f
#undef str_10003a87
#undef str_10003a93
#undef str_10003a9b
#undef str_10003aa3
#undef str_10003aab
#undef str_10003ab3
#undef str_10003abe
#undef str_10003ac4
#undef str_10003ace
#undef str_10003ae3
#undef str_10003af4
#undef str_10003b00
#undef str_10003b0c
#undef str_10003b18
#undef str_10003b27
#undef str_10003b31
#undef str_10003b3f
#undef str_10003b50
#undef str_10003b5c
#undef str_10003b68
#undef str_10003b77
#undef str_10003b80
#undef str_10003b9e
#undef str_10003bba
#undef str_10003bd0
#undef str_10003bea
#undef str_10003bfa
#undef str_10003c07
#undef str_10003c17
#undef str_10003c21
#undef str_10003c29
#undef str_10003c32
#undef str_10003c3a
#undef str_10003c46
#undef str_10003c5f
#undef str_10003c68
#undef str_10003c71
#undef str_10003c79
#undef str_10003c84
#undef uRam0000000010008022
#undef uRam0000000010008023
#undef acStack_8f4
#undef uStack_4f4
#undef uStack_4f0
#undef uStack_4e8
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef uStack_4c8
#undef uStack_4b8
#undef uStack_4b0
#undef uStack_4a8
#undef uStack_4a4
#undef uStack_498
#undef uStack_494
#undef uStack_490
#undef uStack_48c
#undef uStack_488
#undef uStack_484
#undef uStack_480
#undef uStack_47c
#undef uStack_478
#undef uStack_474
#undef uStack_470
#undef uStack_468
#undef uStack_460
#undef auStack_c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce8
 */

void recovered_10001ce8(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001ddc(param_1);
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
 * Address: 0x10001d38
 */

void recovered_10001d38(long param_1,ulong param_2,uint param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001ddc(param_1);
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
    recovered_10001df8(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ddc
 */

long recovered_10001ddc(long param_1)

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
 * Address: 0x10001df8
 */

void recovered_10001df8(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001ddc(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e38
 */

void recovered_10001e38(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_10001ce8(param_1,0x400,&DAT_100036d3);
  recovered_10001ce8(param_1,0x400,param_2);
  recovered_10001ce8(param_1,0x400,&DAT_100036d5);
  iVar4 = 8;
  uVar5 = 0x1c;
  do {
    uVar3 = param_3 >> (ulong)(uVar5 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10001df8(param_1,0x400,bVar2);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 4;
  } while (iVar4 != 0);
  return;
}

#undef DAT_100036d3
#undef DAT_100036d5

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e8c
 */

void recovered_10001e8c(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001df8(param_1,param_2,bVar2);
  }
  return;
}


#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(undefined8 *)(frame + 24))
#define uStack_50 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f04
 */

undefined8
recovered_10001f04(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10002050(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != -1)) &&
         (uVar2 = recovered_10002050(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10002050(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10002050(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10002050(param_1,param_2,param_3,param_4,
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
 * Address: 0x10002050
 */

undefined8
recovered_10002050(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_10003dc6
#define DAT_10003dc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8caU)))
#undef DAT_10003dcb
#define DAT_10003dcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfU)))
#undef DAT_10003dd0
#define DAT_10003dd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d4U)))
#undef DAT_10003dd5
#define DAT_10003dd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d9U)))
#undef str_10003c91
#define str_10003c91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x795U)))
#undef str_10003c9c
#define str_10003c9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
#undef str_10003cab
#define str_10003cab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7afU)))
#undef str_10003cbc
#define str_10003cbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c0U)))
#undef str_10003ccf
#define str_10003ccf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_10003ce2
#define str_10003ce2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e6U)))
#undef str_10003cf2
#define str_10003cf2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f6U)))
#undef str_10003d01
#define str_10003d01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x805U)))
#undef str_10003d10
#define str_10003d10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x814U)))
#undef str_10003d21
#define str_10003d21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_10003d2c
#define str_10003d2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x830U)))
#undef str_10003d38
#define str_10003d38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83cU)))
#undef str_10003d42
#define str_10003d42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x846U)))
#undef str_10003d4b
#define str_10003d4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_10003d56
#define str_10003d56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85aU)))
#undef str_10003d5f
#define str_10003d5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x863U)))
#undef str_10003d67
#define str_10003d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86bU)))
#undef str_10003d70
#define str_10003d70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x874U)))
#undef str_10003d77
#define str_10003d77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87bU)))
#undef str_10003d8a
#define str_10003d8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88eU)))
#undef str_10003d9d
#define str_10003d9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a1U)))
#undef str_10003db0
#define str_10003db0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b4U)))
#undef str_10003dda
#define str_10003dda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8deU)))
#undef str_10003de5
#define str_10003de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e9U)))
#undef str_10003dee
#define str_10003dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

char * recovered_1000209c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_100022b0_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_10003d4b;
    }
LAB_10002284:
    pcVar4 = str_10003d77;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10003d9d;
      break;
    case 2:
      pcVar4 = str_10003d8a;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10003db0;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_100022e4:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10003dee;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_10003dcb;
        }
        pcVar1 = str_10003dda;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10003dd5;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003dd0;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10003de5;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10003dc6;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_100022b0_caseD_5:
      pcVar4 = str_10003c91;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_10003d42;
      }
      goto LAB_10002284;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_100021f8:
        return str_10003d70;
      }
      goto LAB_10002284;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_100021f8;
      goto LAB_10002284;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_10003d67;
      }
      goto LAB_10002284;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_10003d56;
      }
      goto LAB_10002284;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_10003d2c;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_100022e4;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_10003d38;
      }
      goto LAB_10002284;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_10003d5f;
      }
      goto LAB_10002284;
    }
    if (sVar3 != 0x1af4) goto LAB_10002284;
    pcVar4 = str_10003c9c;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10002140_caseD_1042:
      pcVar4 = str_10003cab;
      break;
    case 0x1043:
switchD_10002140_caseD_1043:
      pcVar4 = str_10003ccf;
      break;
    case 0x1044:
switchD_10002140_caseD_1044:
      pcVar4 = str_10003cf2;
      break;
    case 0x1045:
switchD_10002140_caseD_1045:
      pcVar4 = str_10003cbc;
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
switchD_10002140_caseD_1046:
      pcVar4 = str_10003d21;
      break;
    case 0x1048:
switchD_10002140_caseD_1048:
      pcVar4 = str_10003ce2;
      break;
    case 0x1050:
      pcVar4 = str_10003d01;
      break;
    case 0x1052:
      pcVar4 = str_10003d10;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10002140_caseD_1042;
      case 0x1002:
        goto switchD_10002140_caseD_1045;
      case 0x1003:
        goto switchD_10002140_caseD_1043;
      case 0x1004:
        goto switchD_10002140_caseD_1048;
      case 0x1005:
        goto switchD_10002140_caseD_1044;
      default:
        goto switchD_10002140_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_10003dc6
#undef DAT_10003dcb
#undef DAT_10003dd0
#undef DAT_10003dd5
#undef str_10003c91
#undef str_10003c9c
#undef str_10003cab
#undef str_10003cbc
#undef str_10003ccf
#undef str_10003ce2
#undef str_10003cf2
#undef str_10003d01
#undef str_10003d10
#undef str_10003d21
#undef str_10003d2c
#undef str_10003d38
#undef str_10003d42
#undef str_10003d4b
#undef str_10003d56
#undef str_10003d5f
#undef str_10003d67
#undef str_10003d70
#undef str_10003d77
#undef str_10003d8a
#undef str_10003d9d
#undef str_10003db0
#undef str_10003dda
#undef str_10003de5
#undef str_10003dee

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002344
 */

int recovered_10002344(long param_1)

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


#define uStack_5c (*(undefined4 *)(frame + 20))
#define local_34 (*(uint *)(frame + 60))
#define uStack_58 (*(ulong *)(frame + 24))
#define uStack_4c (*(uint *)(frame + 36))
#define uStack_48 (*(undefined8 *)(frame + 40))
#define uStack_40 (*(undefined8 *)(frame + 48))
#define iStack_38 (*(int *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000238c
 */

ulong recovered_1000238c(int *param_1,undefined1 *param_2,ulong *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;

  local_34 = 0;
  if (((param_3 == (ulong *)0x0) ||
      (recovered_10000a78((undefined1 *)param_3,0x70), param_2 == (undefined1 *)0x0)) ||
     (((byte)param_2[0x12] >> 4 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                               (ulong)(byte)param_2[2],0x34,1,(long)&local_34);
    if ((int)uVar1 != 0) {
      uVar4 = 0;
      while ((uVar4 < 0x20 && (local_34 - 0x40 < 0xb0))) {
        iStack_38 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_4c = 0;
        uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                   (ulong)(byte)param_2[2],(ulong)(local_34 & 0xffff),1,
                                   (long)&iStack_38);
        if (((int)uVar2 == 0) ||
           (uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                       (ulong)(byte)param_2[2],
                                       (ulong)((local_34 & 0xffff) + 1 & 0xffff),1,
                                       (long)&uStack_40 + 4), (int)uVar2 == 0)) break;
        if ((((iStack_38 == 9) &&
             (uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 3 & 0xffff),1,
                                         (long)&uStack_40), (int)uVar2 != 0)) &&
            (uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 4 & 0xffff),1,
                                        (long)&uStack_48 + 4), (int)uVar2 != 0)) &&
           ((uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 8 & 0xffff),4,(long)&uStack_48
                                       ), (int)uVar2 != 0 &&
            (uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                        (ulong)(byte)param_2[2],
                                        (ulong)((local_34 & 0xffff) + 0xc & 0xffff),4,
                                        (long)&uStack_4c), (int)uVar2 != 0)))) {
          uStack_58 = 0;
          *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + 1;
          if ((int)uStack_40 == 1) {
            uVar2 = recovered_10002760(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              *param_3 = uStack_58;
              *(uint *)(param_3 + 4) = PF_PART4(uStack_48, 4);
              goto LAB_10002594;
            }
          }
          iVar3 = (int)uStack_40;
          if ((int)uStack_40 == 2) {
            uVar2 = recovered_10002760(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              uStack_5c = 0;
              param_3[1] = uStack_58;
              *(uint *)((long)param_3 + 0x24) = PF_PART4(uStack_48, 4);
              uVar2 = recovered_10002050(param_1,(ulong)(byte)*param_2,(ulong)(byte)param_2[1],
                                         (ulong)(byte)param_2[2],
                                         (ulong)((local_34 & 0xffff) + 0x10 & 0xffff),4,
                                         (long)&uStack_5c);
              if ((int)uVar2 != 0) {
                *(undefined4 *)(param_3 + 6) = uStack_5c;
              }
              goto LAB_10002594;
            }
            iVar3 = (int)uStack_40;
          }
          if (iVar3 == 3) {
            uVar2 = recovered_10002760(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                       uStack_4c,&uStack_58);
            if ((int)uVar2 != 0) {
              param_3[2] = uStack_58;
              *(uint *)(param_3 + 5) = PF_PART4(uStack_48, 4);
              goto LAB_10002594;
            }
            iVar3 = (int)uStack_40;
          }
          if ((iVar3 == 4) &&
             (uVar2 = recovered_10002760(param_1,(long)param_2,PF_PART4(uStack_48, 4),(uint)uStack_48,
                                         uStack_4c,&uStack_58), (int)uVar2 != 0)) {
            param_3[3] = uStack_58;
            *(uint *)((long)param_3 + 0x2c) = PF_PART4(uStack_48, 4);
          }
        }
LAB_10002594:
        if ((PF_PART4(uStack_40, 4) == 0) || (PF_PART4(uStack_40, 4) == local_34)) break;
        uVar4 = uVar4 + 1;
        local_34 = PF_PART4(uStack_40, 4);
      }
      uVar1 = (ulong)(*param_3 != 0);
    }
  }
  return uVar1;
}

#undef uStack_5c
#undef local_34
#undef uStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_40
#undef iStack_38

#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c4
 */

void recovered_100025c4(int *param_1,long *param_2)

{
  int firmware_framebuffer[13] = {0};
  /* Keep firmware-owned presentation queues intact when a framebuffer exists. */
  if (recovered_10000a90(param_1,(long)firmware_framebuffer) &&
      recovered_10000ac8(firmware_framebuffer)) return;
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_24 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    recovered_100028fc(param_1,*param_2,0x14,(long)(param_2 + 9));
    recovered_10002914(param_1,*param_2,0);
    recovered_1000292c(param_1,*param_2,0,0);
    recovered_10002940(param_1,*param_2,4,(long)(param_2 + 7));
    recovered_1000292c(param_1,*param_2,0,1);
    recovered_10002940(param_1,*param_2,4,(long)param_2 + 0x3c);
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
    recovered_1000292c(param_1,*param_2,8,0);
    recovered_1000292c(param_1,*param_2,0xc,(ulong)*(uint *)(param_2 + 8));
    recovered_1000292c(param_1,*param_2,8,1);
    recovered_1000292c(param_1,*param_2,0xc,(ulong)*(uint *)((long)param_2 + 0x44));
    recovered_10002958(param_1);
    recovered_10002914(param_1,*param_2,1);
    recovered_10002914(param_1,*param_2,3);
    recovered_10002914(param_1,*param_2,0xb);
    recovered_100028fc(param_1,*param_2,0x14,(long)param_2 + 0x4c);
    recovered_10002988(param_1,*param_2,0x12,(long)(param_2 + 10));
    recovered_100028fc(param_1,*param_2,0x15,(long)(param_2 + 0xd));
    recovered_100029a0(param_1,*param_2,0x16,0);
    recovered_10002988(param_1,*param_2,0x18,(long)param_2 + 0x54);
    recovered_10002988(param_1,*param_2,0x1c,(long)(param_2 + 0xb));
    uVar1 = recovered_10002988(param_1,*param_2,0x1e,(long)&local_24);
    if ((int)uVar1 != 0) {
      *(uint *)((long)param_2 + 0x5c) = local_24;
      if (param_2[1] != 0) {
        param_2[0xc] = param_2[1] + (ulong)*(uint *)(param_2 + 6) * (ulong)local_24;
      }
    }
  }
  return;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002760
 */

undefined8
recovered_10002760(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
     ((param_6 != (ulong *)0x0 &&
      (uVar1 = recovered_100027c4(param_1,param_2,param_3,(ulong)(param_5 + param_4),param_6),
      (int)uVar1 != 0)))) {
    *param_6 = *param_6 + (ulong)param_4;
    uVar1 = 1;
  }
  return uVar1;
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c4
 */

undefined8
recovered_100027c4(int *param_1,long param_2,uint param_3,undefined8 param_4,ulong *param_5)

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
 * Address: 0x100028fc
 */

int * recovered_100028fc(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return piVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002914
 */

int * recovered_10002914(int *param_1,long param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000292c
 */

undefined8 recovered_1000292c(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002940
 */

undefined8 recovered_10002940(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,4,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002958
 */

void recovered_10002958(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002988
 */

undefined8 recovered_10002988(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a0
 */

int * recovered_100029a0(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return piVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029b4
 */

undefined8 recovered_100029b4(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a1c
 */

undefined8 recovered_10002a1c(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_100036d3
#define DAT_100036d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100036d5
#define DAT_100036d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d9U)))
#define abStack_32 (*(byte (*)[2])(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a84
 */

void recovered_10002a84(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;

  recovered_10001ce8(param_1,0x400,&DAT_100036d3);
  recovered_10001ce8(param_1,0x400,param_2);
  recovered_10001ce8(param_1,0x400,&DAT_100036d5);
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
    recovered_10001ce8(param_1,0x400,(char *)abStack_32);
    uVar4 = uVar4 - 4;
  }
  return;
}

#undef DAT_100036d3
#undef DAT_100036d5
#undef abStack_32

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b38
 */

undefined8 recovered_10002b38(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (param_4 == 0)) ||
     (((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x58)) || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10010f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b74
 */

void recovered_10002b74(int *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || ((int)param_2 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x5c || (param_1[0x16] == 0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb0
 */

undefined8 recovered_10002bb0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_4 == 0 || (param_2 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(0);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bec
 */

void recovered_10002bec(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    param_1[3] = (char)((uint)param_2 >> 0x18);
    param_1[4] = (char)param_3;
    param_1[5] = (char)((uint)param_3 >> 8);
    param_1[6] = (char)((uint)param_3 >> 0x10);
    param_1[7] = (char)((uint)param_3 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c2c
 */

undefined8
recovered_10002c2c(int *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar2 = recovered_1000292c(param_1,param_2,(ulong)(uint)param_3,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (ulong)(param_3 + 4);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_5);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_5);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c7c
 */

void recovered_10002c7c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cb0
 */

undefined4 recovered_10002cb0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10003dc6
#define DAT_10003dc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8caU)))
#undef DAT_10003dcb
#define DAT_10003dcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cfU)))
#undef DAT_10003dd0
#define DAT_10003dd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d4U)))
#undef DAT_10003dd5
#define DAT_10003dd5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d9U)))
#undef str_10003dda
#define str_10003dda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8deU)))
#undef str_10003de5
#define str_10003de5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e9U)))
#undef str_10003dee
#define str_10003dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd4
 */

char * recovered_10002cd4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10003dee;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10003dcb;
  }
  pcVar2 = str_10003dda;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10003dd5;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003dd0;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10003de5;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10003dc6;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10003dc6
#undef DAT_10003dcb
#undef DAT_10003dd0
#undef DAT_10003dd5
#undef str_10003dda
#undef str_10003de5
#undef str_10003dee

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

bool recovered_10002d40(long param_1,uint param_2)

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
        bVar7 = recovered_10003160(piVar32 + 2);
        if (!bVar7) goto LAB_10003004;
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
          lVar22 = recovered_100031dc(piVar32 + 0x10,piVar12,iVar6,iVar5);
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
            lVar9 = recovered_100031dc(piVar12,piVar23,uVar1,uVar2);
            lVar10 = recovered_100031dc(piVar23,piVar32 + 0x10,uVar1,uVar2);
            lVar22 = recovered_100031dc(piVar32 + 0x10,piVar12,uVar1,uVar2);
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
          if (iVar15 != 1) goto LAB_10003004;
          iVar15 = piVar32[5];
          iVar17 = piVar32[6];
          uVar19 = piVar32[0xe];
          uVar11 = 0;
          uVar13 = 0;
        }
        uVar8 = recovered_1000302c(piVar32 + 2,uVar11,uVar13,iVar15,iVar17,uVar19);
        if ((int)uVar8 == 0) {
          goto LAB_10003004;
        }
      }
      puVar33 = puVar33 + 0x1c;
    }
    uVar34 = uVar28;
LAB_10003004:
    bVar7 = uVar28 <= uVar34;
  }
  return bVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000302c
 */

undefined8
recovered_1000302c(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6)

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

  bVar7 = recovered_10003160(param_1);
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
      lVar9 = recovered_100031ac(param_1);
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
            recovered_100031cc(puVar11,param_6);
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
 * Address: 0x10003160
 */

bool recovered_10003160(int *param_1)

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
 * Address: 0x100031ac
 */

undefined8 recovered_100031ac(int *param_1)

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
 * Address: 0x100031cc
 */

void recovered_100031cc(uint *param_1,uint param_2)

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
 * Address: 0x100031dc
 */

long recovered_100031dc(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((long)param_2[1] - (long)param_1[1]) * ((long)param_3 - (long)*param_1) -
         ((long)*param_2 - (long)*param_1) * ((long)param_4 - (long)param_1[1]);
}

