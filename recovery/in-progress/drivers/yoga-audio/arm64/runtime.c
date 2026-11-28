/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e9cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10001170
#define DAT_10001170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10001180
#define DAT_10001180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10001190
#define DAT_10001190 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_100011a0
#define DAT_100011a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10004028
#define DAT_10004028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2ec4U)))
#undef DAT_10004030
#define DAT_10004030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2eccU)))
#undef DAT_10004038
#define DAT_10004038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ed4U)))
#undef DAT_10004370
#define DAT_10004370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x320cU)))
#undef DAT_10004374
#define DAT_10004374 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3210U)))
#undef DAT_10004378
#define DAT_10004378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3214U)))
#undef DAT_10004384
#define DAT_10004384 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3220U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6e9cU)))
#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ea4U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eb4U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6ec4U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eccU)))
#undef DAT_10008038
#define DAT_10008038 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ed4U)))
#undef DAT_10008040
#define DAT_10008040 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6edcU)))
#undef DAT_10008048
#define DAT_10008048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ee4U)))
#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#undef PTR_str_1000162b_10004048
#define PTR_str_1000162b_10004048 (*(char * *)(((uintptr_t)pf_module_state + 0x2ee4U)))
#undef PTR_str_10001715_10004390
#define PTR_str_10001715_10004390 (*(char * *)(((uintptr_t)pf_module_state + 0x322cU)))
#undef UNK_10001178
#define UNK_10001178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef UNK_10001188
#define UNK_10001188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef UNK_10001198
#define UNK_10001198 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef UNK_10008010
#define UNK_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eacU)))
#undef UNK_10008020
#define UNK_10008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ebcU)))
#undef _DAT_10001170
#define _DAT_10001170 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_10001180
#define _DAT_10001180 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_10001190
#define _DAT_10001190 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_10008008
#define _DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ea4U)))
#undef _DAT_10008018
#define _DAT_10008018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eb4U)))
#undef _DAT_10008028
#define _DAT_10008028 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ec4U)))
#undef _DAT_10008030
#define _DAT_10008030 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eccU)))
#undef str_100011e8
#define str_100011e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84U)))
#undef str_10001224
#define str_10001224 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0U)))
#undef str_10001242
#define str_10001242 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeU)))
#undef str_10001282
#define str_10001282 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11eU)))
#undef str_100012c3
#define str_100012c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10001357
#define str_10001357 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f3U)))
#undef str_100013d4
#define str_100013d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x270U)))
#undef str_100013f7
#define str_100013f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x293U)))
#undef str_10001436
#define str_10001436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d2U)))
#undef str_10001476
#define str_10001476 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_1000150a
#define str_1000150a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a6U)))
#undef str_1000158b
#define str_1000158b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef uRam0000000010001178
#define uRam0000000010001178 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef uRam0000000010001188
#define uRam0000000010001188 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef uRam0000000010001198
#define uRam0000000010001198 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef uRam0000000010008010
#define uRam0000000010008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6eacU)))
#undef uRam0000000010008020
#define uRam0000000010008020 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ebcU)))
#define local_6c (*(uint (*)[27])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong *puVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api != 0x54584b57) || (*(int *)((long)api + 4) != 1100000)) ||
     (*(uint *)((long)api + 8) < 0xf8)) {
    return 0;
  }
  recovered_100007f4((undefined1 *)&DAT_10008000,0x58);
  lVar10 = 1;
  for (lVar16 = 0; lVar16 != 0x15; lVar16 = lVar16 + 1) {
    if ((&DAT_10004028)[lVar16 * 10] != (int)(lVar16 + 1)) {
      DAT_10008000 = api;
      return 0;
    }
    uVar12 = (&DAT_10004030)[lVar16 * 5];
    if (uVar12 == 0) {
      DAT_10008000 = api;
      return 0;
    }
    uVar13 = (&DAT_10004038)[lVar16 * 5];
    if (uVar13 == 0) {
      DAT_10008000 = api;
      return 0;
    }
    if (CARRY8(uVar12,uVar13)) {
      DAT_10008000 = api;
      return 0;
    }
    if ((&PTR_str_1000162b_10004048)[lVar16 * 5] == (undefined *)0x0) {
      DAT_10008000 = api;
      return 0;
    }
    plVar15 = &DAT_10004038;
    lVar14 = lVar10;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      puVar2 = (ulong *)(plVar15 + -1);
      lVar3 = *plVar15;
      plVar15 = plVar15 + 5;
      if (*puVar2 < uVar13 + uVar12 && uVar12 < lVar3 + *puVar2) {
        DAT_10008000 = api;
        return 0;
      }
    }
    lVar10 = lVar10 + 1;
  }
  puVar11 = &DAT_10004384;
  for (lVar10 = 0; lVar10 != 4; lVar10 = lVar10 + 1) {
    if ((&PTR_str_10001715_10004390)[lVar10 * 5] == (undefined *)0x0) {
      DAT_10008000 = api;
      return 0;
    }
    uVar5 = (&DAT_10004370)[lVar10 * 10];
    if (uVar5 != 3 && uVar5 != 0) {
      DAT_10008000 = api;
      return 0;
    }
    if (1 < (uint)(&DAT_10004374)[lVar10 * 10]) {
      DAT_10008000 = api;
      return 0;
    }
    iVar6 = 0xc;
    if (2 < uVar5) {
      iVar6 = 0xd;
    }
    if ((&DAT_10004378)[lVar10 * 10] != iVar6) {
      DAT_10008000 = api;
      return 0;
    }
    puVar17 = &DAT_10004374;
    for (lVar16 = lVar10; lVar16 != 0; lVar16 = lVar16 + -1) {
      if ((uVar5 == puVar17[-1]) && ((&DAT_10004374)[lVar10 * 10] == *puVar17)) {
        DAT_10008000 = api;
        return 0;
      }
      puVar17 = puVar17 + 10;
    }
    lVar16 = 0;
    while (lVar16 != 6) {
      pbVar1 = puVar11 + lVar16;
      lVar16 = lVar16 + 1;
      if (*pbVar1 - 0xe < 0xfffffff3) {
        DAT_10008000 = api;
        return 0;
      }
    }
    puVar11 = puVar11 + 0x28;
  }
  uRam0000000010008010 = uRam0000000010001178;
  _DAT_10008008 = _DAT_10001170;
  uRam0000000010008020 = uRam0000000010001188;
  _DAT_10008018 = _DAT_10001180;
  _DAT_10008030 = uRam0000000010001198;
  _DAT_10008028 = _DAT_10001190;
  DAT_10008038 = DAT_100011a0;
  DAT_10008040 = 4;
  local_6c[0] = 0;
  DAT_10008000 = api;
  if (*(int *)api == 0x54584b57) {
    if (*(uint *)((long)api + 8) < 0xbc) {
      if (0x67 < *(uint *)((long)api + 8)) goto LAB_100006ec;
    }
    else {
      if (*(uint *)((long)api + 0xb8) == 0) {
LAB_100006ec:
        if ((*(uint *)((long)api + 100) == 0) ||
           (iVar6 = (*(code *)(ulong)*(uint *)((long)api + 100))(0x15000000,0,0x1000,local_6c),
           iVar6 == 0)) goto LAB_10000730;
        DAT_10008048 = (ulong)local_6c[0];
      }
      else {
        iVar6 = (*(code *)(ulong)*(uint *)((long)api + 0xb8))(0x15000000,0,0x1000,&DAT_10008048);
        if (iVar6 == 0) goto LAB_10000730;
      }
      uVar7 = recovered_10000808(1,(undefined8 *)local_6c);
      if ((int)uVar7 != 0) {
        DAT_10008050 = 1;
        pcVar9 = str_100012c3;
        pcVar8 = str_10001242;
        goto LAB_10000770;
      }
    }
  }
LAB_10000730:
  recovered_100009bc(api,str_100011e8);
  pcVar8 = str_10001282;
  if (DAT_10008050 != 0) {
    pcVar8 = str_10001242;
  }
  pcVar9 = str_10001357;
  if (DAT_10008050 != 0) {
    pcVar9 = str_100012c3;
  }
LAB_10000770:
  bVar4 = recovered_100009f4(0xe,recovered_10000b38,str_10001224,pcVar8,pcVar9);
  uVar5 = (uint)bVar4;
  if (bVar4) {
    pcVar8 = str_10001436;
    if (DAT_10008050 != 0) {
      pcVar8 = str_100013f7;
    }
    pcVar9 = str_1000150a;
    if (DAT_10008050 != 0) {
      pcVar9 = str_10001476;
    }
    bVar4 = recovered_100009f4(0xf,recovered_10000c68,str_100013d4,pcVar8,pcVar9);
    if (!bVar4) {
      recovered_100009bc(api,str_1000158b);
    }
    recovered_10000da0();
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_10001170
#undef DAT_10001180
#undef DAT_10001190
#undef DAT_100011a0
#undef DAT_10004028
#undef DAT_10004030
#undef DAT_10004038
#undef DAT_10004370
#undef DAT_10004374
#undef DAT_10004378
#undef DAT_10004384
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_10008028
#undef DAT_10008030
#undef DAT_10008038
#undef DAT_10008040
#undef DAT_10008048
#undef DAT_10008050
#undef PTR_str_1000162b_10004048
#undef PTR_str_10001715_10004390
#undef UNK_10001178
#undef UNK_10001188
#undef UNK_10001198
#undef UNK_10008010
#undef UNK_10008020
#undef _DAT_10001170
#undef _DAT_10001180
#undef _DAT_10001190
#undef _DAT_10008008
#undef _DAT_10008018
#undef _DAT_10008028
#undef _DAT_10008030
#undef str_100011e8
#undef str_10001224
#undef str_10001242
#undef str_10001282
#undef str_100012c3
#undef str_10001357
#undef str_100013d4
#undef str_100013f7
#undef str_10001436
#undef str_10001476
#undef str_1000150a
#undef str_1000158b
#undef uRam0000000010001178
#undef uRam0000000010001188
#undef uRam0000000010001198
#undef uRam0000000010008010
#undef uRam0000000010008020
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f4
 */

void recovered_100007f4(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#undef DAT_100011a8
#define DAT_100011a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_100011b0
#define DAT_100011b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e9cU)))
#undef DAT_10008048
#define DAT_10008048 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6ee4U)))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000808
 */

undefined8 recovered_10000808(int param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;

  local_48 = 0;
  if (((param_2 != (undefined8 *)0x0) && (DAT_10008000 != (int *)0x0)) && (DAT_10008048 != 0)) {
    recovered_10000e90(DAT_10008000);
    uVar5 = recovered_10000ec4(DAT_10008000,DAT_10008048 + 0x20,(long)&local_48 + 4);
    if (((int)uVar5 != 0) &&
       (uVar5 = recovered_10000ec4(DAT_10008000,DAT_10008048 + 0x24,(long)&local_48),
       (int)uVar5 != 0)) {
      recovered_10000e90(DAT_10008000);
      uVar10 = local_48;
      uVar2 = (uint)local_48;
      uVar3 = PF_PART4(local_48, 4);
      if (((DAT_10008000 == (int *)0x0) ||
          ((*DAT_10008000 != 0x54584b57 || ((uint)DAT_10008000[2] < 0x30)))) ||
         (DAT_10008000[0xb] == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(code *)(ulong)(uint)DAT_10008000[0xb])();
      }
      uVar5 = DAT_100011a8;
      if ((0xfffffffd < param_1 - 3U) && (1 < uVar3 + 1 && 1 < uVar2 + 1)) {
        lVar8 = 2L << ((ulong)(uVar2 >> 0x1c) & 7);
        uVar6 = 0x11;
        if ((uVar10 & 0x800000000000000) != 0) {
          uVar6 = 0x13;
        }
        iVar9 = 0xc;
        if ((int)uVar2 < 0) {
          iVar9 = 0x10;
        }
        uVar10 = lVar8 << iVar9;
        iVar7 = (int)lVar8;
        uVar6 = uVar6 | uVar3 >> 6 & 4;
        if ((int)uVar2 < 0) {
          uVar6 = uVar6 | 8;
        }
        *(undefined4 *)(param_2 + 1) = 1;
        *(int *)((long)param_2 + 0xc) = param_1;
        *param_2 = uVar5;
        *(undefined4 *)(param_2 + 2) = uVar4;
        uVar1 = uVar6 | 0x20;
        if (0x7f < ((uVar2 & 0xff) - 1 | (uVar3 & 0xff) - 1)) {
          uVar1 = uVar6;
        }
        *(undefined8 *)((long)param_2 + 0x14) = DAT_100011b0;
        uVar6 = uVar1 | 0x40;
        if (0x100000 < uVar10) {
          uVar6 = uVar1;
        }
        uVar1 = uVar6 | 0x80;
        if (0x100000 < (ulong)(iVar7 + (uVar2 & 0xff)) << iVar9) {
          uVar1 = uVar6;
        }
        *(uint *)((long)param_2 + 0x1c) = uVar1;
        *(uint *)(param_2 + 4) = uVar3;
        *(uint *)((long)param_2 + 0x24) = uVar2;
        *(uint *)(param_2 + 5) = uVar3 & 0xff;
        *(uint *)((long)param_2 + 0x2c) = uVar2 & 0xff;
        *(int *)(param_2 + 6) = iVar7;
        *(int *)((long)param_2 + 0x34) = iVar9;
        *(int *)(param_2 + 7) = (int)uVar10;
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_100011a8
#undef DAT_100011b0
#undef DAT_10008000
#undef DAT_10008048
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009bc
 */

void recovered_100009bc(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100009ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


#undef DAT_100011b8
#define DAT_100011b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_100011c0
#define DAT_100011c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef DAT_100011c8
#define DAT_100011c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e9cU)))
#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#undef str_10001749
#define str_10001749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 288))
#define local_1f8 (*(code * *)(pf_stack_frame + 56))
#define local_218 (*(undefined8 *)(pf_stack_frame + 24))
#define auStack_1f0 (*(undefined1 (*)[496])(pf_stack_frame + 64))
#define local_210 (*(int *)(pf_stack_frame + 32))
#define auStack_1b0 (*(undefined1 (*)[432])(pf_stack_frame + 128))
#define local_20c (*(ulong *)(pf_stack_frame + 36))
#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 192))
#define local_200 (*(undefined8 *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009f4
 */

bool recovered_100009f4(int param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_100007f4((undefined1 *)&local_218,0x1c8);
  local_218 = DAT_100011b8;
  local_20c = DAT_100011c0 ^
              (DAT_100011c0 ^ DAT_100011c8) &
              CONCAT44(-(uint)((int)((uint)(DAT_10008050 == 0) << 0x1f) < 0),
                       -(uint)((int)((uint)(DAT_10008050 == 0) << 0x1f) < 0));
  if ((DAT_10008050 != 0) && (local_1f8 = recovered_10000f34, param_1 != 0xe)) {
    local_1f8 = recovered_10000f40;
  }
  local_210 = param_1;
  local_200 = param_2;
  recovered_10000f4c(auStack_1f0,0x40,param_3);
  recovered_10000f4c(auStack_1b0,0x40,str_10001749);
  recovered_10000f4c(auStack_170,0x60,param_4);
  recovered_10000f4c(auStack_110,0xc0,param_5);
  if ((((DAT_10008000 == (int *)0x0) || (*DAT_10008000 != 0x54584b57)) ||
      ((uint)DAT_10008000[2] < 0xf0)) || (DAT_10008000[0x3b] == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = (*(code *)(ulong)(uint)DAT_10008000[0x3b])(&local_218);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

#undef DAT_100011b8
#undef DAT_100011c0
#undef DAT_100011c8
#undef DAT_10008000
#undef DAT_10008050
#undef str_10001749
#undef auStack_110
#undef local_1f8
#undef local_218
#undef auStack_1f0
#undef local_210
#undef auStack_1b0
#undef local_20c
#undef auStack_170
#undef local_200

#undef DAT_100011d0
#define DAT_100011d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_100011d8
#define DAT_100011d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eb4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eb8U)))
#undef DAT_10008024
#define DAT_10008024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ec0U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ec4U)))
#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#undef str_10001224
#define str_10001224 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0U)))
#undef str_10001749
#define str_10001749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_10001763
#define str_10001763 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_100017a1
#define str_100017a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63dU)))
#undef str_100017e0
#define str_100017e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67cU)))
#undef str_1000187f
#define str_1000187f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71bU)))
#define auStack_6c (*(undefined8 (*)[13])(pf_stack_frame + 20))
#define uStack_5c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_40 (*(undefined4 (*)[16])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b38
 */

undefined8 recovered_10000b38(undefined8 *param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 unaff_w21;

  uVar5 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_10008050 == 0) {
      bVar4 = false;
    }
    else {
      uVar5 = recovered_10000808(1,auStack_6c);
      bVar4 = (int)uVar5 != 0;
      unaff_w21 = uStack_5c;
    }
    recovered_100007f4((undefined1 *)param_1,500);
    *param_1 = DAT_100011d0;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_100011d8;
    uVar6 = 0x400;
    if (!bVar4) {
      uVar6 = 0;
      unaff_w21 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = unaff_w21;
    pcVar1 = str_100017e0;
    if (!bVar4) {
      pcVar1 = str_1000187f;
    }
    pcVar2 = str_10001763;
    if (!bVar4) {
      pcVar2 = str_100017a1;
    }
    if ((DAT_10008050 != 0) || (bVar4)) {
      uVar6 = 0x1000d;
      if (DAT_10008050 == 0) {
        uVar6 = 0xd;
      }
      if (!bVar4) {
        uVar6 = 0x10009;
      }
      *(undefined4 *)(param_1 + 2) = uVar6;
    }
    puVar3 = &uStack_4c;
    if (!bVar4) {
      puVar3 = &DAT_10008018;
    }
    *(undefined4 *)((long)param_1 + 0x44) = *puVar3;
    puVar3 = &uStack_48;
    if (!bVar4) {
      puVar3 = &DAT_1000801c;
    }
    *(undefined4 *)(param_1 + 9) = *puVar3;
    puVar3 = &uStack_44;
    if (!bVar4) {
      puVar3 = &DAT_10008024;
    }
    *(undefined4 *)((long)param_1 + 0x4c) = *puVar3;
    puVar3 = auStack_40;
    if (!bVar4) {
      puVar3 = &DAT_10008028;
    }
    *(undefined4 *)(param_1 + 10) = *puVar3;
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x54),0x40,str_10001224);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x94),0x40,str_10001749);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar2);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar1);
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_100011d0
#undef DAT_100011d8
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_10008050
#undef str_10001224
#undef str_10001749
#undef str_10001763
#undef str_100017a1
#undef str_100017e0
#undef str_1000187f
#undef auStack_6c
#undef uStack_5c
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef auStack_40

#undef DAT_100011d0
#define DAT_100011d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_100011e0
#define DAT_100011e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eb4U)))
#undef DAT_1000801c
#define DAT_1000801c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eb8U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6eccU)))
#undef DAT_10008034
#define DAT_10008034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6ed0U)))
#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#undef str_100013d4
#define str_100013d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x270U)))
#undef str_10001749
#define str_10001749 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#undef str_1000190e
#define str_1000190e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aaU)))
#undef str_1000194b
#define str_1000194b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e7U)))
#undef str_10001989
#define str_10001989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x825U)))
#undef str_10001a28
#define str_10001a28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c4U)))
#define auStack_6c (*(undefined8 (*)[13])(pf_stack_frame + 20))
#define uStack_5c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_4c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 60))
#define auStack_40 (*(undefined4 (*)[16])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c68
 */

undefined8 recovered_10000c68(undefined8 *param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 unaff_w21;

  uVar5 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_10008050 == 0) {
      bVar4 = false;
    }
    else {
      uVar5 = recovered_10000808(2,auStack_6c);
      bVar4 = (int)uVar5 != 0;
      unaff_w21 = uStack_5c;
    }
    recovered_100007f4((undefined1 *)param_1,500);
    *param_1 = DAT_100011d0;
    *(undefined8 *)((long)param_1 + 0xc) = DAT_100011e0;
    uVar6 = 0x400;
    if (!bVar4) {
      uVar6 = 0;
      unaff_w21 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = unaff_w21;
    pcVar1 = str_10001989;
    if (!bVar4) {
      pcVar1 = str_10001a28;
    }
    pcVar2 = str_1000190e;
    if (!bVar4) {
      pcVar2 = str_1000194b;
    }
    if ((DAT_10008050 != 0) || (bVar4)) {
      uVar6 = 0x1000d;
      if (DAT_10008050 == 0) {
        uVar6 = 0xd;
      }
      if (!bVar4) {
        uVar6 = 0x10009;
      }
      *(undefined4 *)(param_1 + 2) = uVar6;
    }
    puVar3 = &uStack_4c;
    if (!bVar4) {
      puVar3 = &DAT_10008018;
    }
    *(undefined4 *)((long)param_1 + 0x44) = *puVar3;
    puVar3 = &uStack_48;
    if (!bVar4) {
      puVar3 = &DAT_1000801c;
    }
    *(undefined4 *)(param_1 + 9) = *puVar3;
    puVar3 = &uStack_44;
    if (!bVar4) {
      puVar3 = &DAT_10008030;
    }
    *(undefined4 *)((long)param_1 + 0x4c) = *puVar3;
    puVar3 = auStack_40;
    if (!bVar4) {
      puVar3 = &DAT_10008034;
    }
    *(undefined4 *)(param_1 + 10) = *puVar3;
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x54),0x40,str_100013d4);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x94),0x40,str_10001749);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar2);
    recovered_10000f4c((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar1);
    uVar5 = 1;
  }
  return uVar5;
}

#undef DAT_100011d0
#undef DAT_100011e0
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008030
#undef DAT_10008034
#undef DAT_10008050
#undef str_100013d4
#undef str_10001749
#undef str_1000190e
#undef str_1000194b
#undef str_10001989
#undef str_10001a28
#undef auStack_6c
#undef uStack_5c
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef auStack_40

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x6e9cU)))
#undef str_10001ab6
#define str_10001ab6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x952U)))
#undef str_10001bc1
#define str_10001bc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5dU)))
#undef str_10001bd3
#define str_10001bd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6fU)))
#undef str_10001c03
#define str_10001c03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9fU)))
#undef str_10001c30
#define str_10001c30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaccU)))
#undef str_10001d2d
#define str_10001d2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc9U)))
#undef str_10001d45
#define str_10001d45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe1U)))
#undef str_10001d6b
#define str_10001d6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc07U)))
#undef str_10001d9b
#define str_10001d9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc37U)))
#undef str_10001eab
#define str_10001eab (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd47U)))
#undef str_10001ec1
#define str_10001ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5dU)))
#undef str_10001eea
#define str_10001eea (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd86U)))
#define auStack_320 (*(undefined1 (*)[800])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da0
 */

void recovered_10000da0(void)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000f4c(auStack_320,0x300,str_10001ab6);
  if (((DAT_10008000 == (int *)0x0) || (DAT_10008000[3] == 0)) ||
     (iVar1 = (*(code *)(ulong)(uint)DAT_10008000[3])(str_10001bc1,str_10001bd3,auStack_320),
     iVar1 == 0)) {
    recovered_100009bc(DAT_10008000,str_10001c03);
  }
  recovered_10000f4c(auStack_320,0x300,str_10001c30);
  if (((DAT_10008000 == (int *)0x0) || (DAT_10008000[3] == 0)) ||
     (iVar1 = (*(code *)(ulong)(uint)DAT_10008000[3])(str_10001d2d,str_10001d45,auStack_320),
     iVar1 == 0)) {
    recovered_100009bc(DAT_10008000,str_10001d6b);
  }
  recovered_10000f4c(auStack_320,0x300,str_10001d9b);
  if (((DAT_10008000 == (int *)0x0) || (DAT_10008000[3] == 0)) ||
     (iVar1 = (*(code *)(ulong)(uint)DAT_10008000[3])(str_10001eab,str_10001ec1,auStack_320),
     iVar1 == 0)) {
    recovered_100009bc(DAT_10008000,str_10001eea);
  }
  return;
}

#undef DAT_10008000
#undef str_10001ab6
#undef str_10001bc1
#undef str_10001bd3
#undef str_10001c03
#undef str_10001c30
#undef str_10001d2d
#undef str_10001d45
#undef str_10001d6b
#undef str_10001d9b
#undef str_10001eab
#undef str_10001ec1
#undef str_10001eea
#undef auStack_320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e90
 */

void recovered_10000e90(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec4
 */

undefined8 recovered_10000ec4(int *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_3 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_3 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#define auStack_5c (*(undefined8 (*)[11])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f34
 */

undefined8 recovered_10000f34(int *param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (DAT_10008050 != 0)) {
    if ((((*param_1 == 0x38) &&
         ((((param_1[1] == 0x10 && (param_1[2] == 0)) && (param_1[3] == 0)) &&
          ((param_1[4] == 0 && (param_1[5] == 0)))))) && (*(long *)(param_1 + 6) == 0)) &&
       ((param_1[8] == 0 && (puVar3 = *(undefined1 **)(param_1 + 10), puVar3 != (undefined1 *)0x0)))
       ) {
      uVar1 = 0;
      if ((puVar3 < (undefined1 *)0xffffffffffffffc4) && (param_1[0xc] == 0x3c)) {
        recovered_100007f4(puVar3,0x3c);
        uVar1 = recovered_10000808(1,auStack_5c);
        if ((int)uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          lVar2 = *(long *)(param_1 + 10);
          if (lVar2 != 0) {
            for (lVar4 = 0; lVar4 != 0x3c; lVar4 = lVar4 + 1) {
              *(undefined1 *)(lVar2 + lVar4) = *(undefined1 *)((long)auStack_5c + lVar4);
            }
          }
          uVar1 = 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_10008050
#undef auStack_5c

#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#define auStack_5c (*(undefined8 (*)[11])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

undefined8 recovered_10000f40(int *param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (DAT_10008050 != 0)) {
    if ((((*param_1 == 0x38) &&
         ((((param_1[1] == 0x10 && (param_1[2] == 0)) && (param_1[3] == 0)) &&
          ((param_1[4] == 0 && (param_1[5] == 0)))))) && (*(long *)(param_1 + 6) == 0)) &&
       ((param_1[8] == 0 && (puVar3 = *(undefined1 **)(param_1 + 10), puVar3 != (undefined1 *)0x0)))
       ) {
      uVar1 = 0;
      if ((puVar3 < (undefined1 *)0xffffffffffffffc4) && (param_1[0xc] == 0x3c)) {
        recovered_100007f4(puVar3,0x3c);
        uVar1 = recovered_10000808(2,auStack_5c);
        if ((int)uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          lVar2 = *(long *)(param_1 + 10);
          if (lVar2 != 0) {
            for (lVar4 = 0; lVar4 != 0x3c; lVar4 = lVar4 + 1) {
              *(undefined1 *)(lVar2 + lVar4) = *(undefined1 *)((long)auStack_5c + lVar4);
            }
          }
          uVar1 = 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_10008050
#undef auStack_5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f4c
 */

void recovered_10000f4c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if (param_1 != (undefined1 *)0x0) {
    uVar2 = 0;
    *param_1 = 0;
    do {
      pcVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    if (param_3 != (char *)0x0) {
      while( true ) {
        if (*param_3 == '\0' || param_2 <= uVar2) break;
        param_1[uVar2 - 1] = *param_3;
        uVar2 = uVar2 + 1;
        param_3 = param_3 + 1;
      }
      param_1[uVar2 - 1] = 0;
    }
  }
  return;
}


#undef DAT_10008050
#define DAT_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x6eecU)))
#define local_5c (*(undefined8 (*)[11])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f94
 */

undefined8 recovered_10000f94(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;

  uVar1 = 0;
  if ((param_2 != (int *)0x0) && (DAT_10008050 != 0)) {
    if ((((*param_2 == 0x38) &&
         ((((param_2[1] == 0x10 && (param_2[2] == 0)) && (param_2[3] == 0)) &&
          ((param_2[4] == 0 && (param_2[5] == 0)))))) && (*(long *)(param_2 + 6) == 0)) &&
       ((param_2[8] == 0 && (puVar3 = *(undefined1 **)(param_2 + 10), puVar3 != (undefined1 *)0x0)))
       ) {
      uVar1 = 0;
      if ((puVar3 < (undefined1 *)0xffffffffffffffc4) && (param_2[0xc] == 0x3c)) {
        recovered_100007f4(puVar3,0x3c);
        uVar1 = recovered_10000808(param_1,local_5c);
        if ((int)uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          lVar2 = *(long *)(param_2 + 10);
          if (lVar2 != 0) {
            for (lVar4 = 0; lVar4 != 0x3c; lVar4 = lVar4 + 1) {
              *(undefined1 *)(lVar2 + lVar4) = *(undefined1 *)((long)local_5c + lVar4);
            }
          }
          uVar1 = 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_10008050
#undef local_5c

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
