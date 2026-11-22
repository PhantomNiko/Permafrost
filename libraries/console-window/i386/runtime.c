/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a0a8
#define DAT_1000a0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x193aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000610
 */

void recovered_10000610(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000a0a8 = 0;
  recovered_10000620();
  return;
}

#undef DAT_1000a0a8

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000004
#define DAT_02000004 (*(uint8_t *)(0x2000004U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_0200000c
#define DAT_0200000c (*(uint8_t *)(0x200000cU))
#undef DAT_1000a0a8
#define DAT_1000a0a8 (*(char *)(((uintptr_t)pf_module_state + 0x193aU)))
#undef DAT_1000a0ac
#define DAT_1000a0ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x193eU)))
#undef DAT_1000a0b0
#define DAT_1000a0b0 (*(int *)(((uintptr_t)pf_module_state + 0x1942U)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#undef _DAT_00300000
#define _DAT_00300000 (*(int *)(0x300000U))
#undef _DAT_00300004
#define _DAT_00300004 (*(uint32_t *)(0x300004U))
#undef _DAT_00300008
#define _DAT_00300008 (*(uint *)(0x300008U))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint32_t *)(0x2000008U))
#define auStack_a4 (*(uint (*)[34])(frame + 28))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(uint *)(frame + 168))
#define local_14 (*(uint *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000620(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;

  local_14 = 0;
  if (DAT_1000a0a8 != '\0') {
    return;
  }
  DAT_1000a0ac = 0;
  DAT_1000a0b0 = 0;
  local_1c = _DAT_0000608c;
  if (0xf < _DAT_0000608c) {
    local_1c = 0x10;
  }
  if (_DAT_0000608c != 0) {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar10 = *(uint *)(&DAT_00006090 + uVar4 * 8);
      uVar2 = *(uint *)(&DAT_00006094 + uVar4 * 8);
      uVar5 = uVar2 + uVar10;
      if ((uVar5 < 0x300001) <= CARRY4(uVar2,uVar10) && uVar2 != 0) {
        if (uVar10 < 0x300001) {
          uVar10 = 0x300000;
        }
        if (uVar7 < 0x10) {
          uVar2 = 0;
          if (uVar7 != 0) {
            local_18 = uVar7;
            uVar2 = uVar7;
            do {
              uVar7 = local_18;
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_1000067b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_1000067b:
          auStack_a4[uVar2 * 2 + 2] = uVar10;
          auStack_a4[uVar2 * 2 + 3] = uVar5 - uVar10;
          uVar7 = uVar7 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_1c);
    if (uVar7 != 0) {
      iVar9 = 1;
      if (uVar7 != 1) {
        iVar8 = uVar7 - 1;
        puVar3 = auStack_a4 + 4;
        iVar9 = 1;
        do {
          uVar7 = auStack_a4[iVar9 * 2 + 1] + auStack_a4[iVar9 * 2];
          if (uVar7 < *puVar3) {
            uVar7 = *puVar3;
            auStack_a4[iVar9 * 2 + 3] = puVar3[1];
            auStack_a4[iVar9 * 2 + 2] = uVar7;
            iVar9 = iVar9 + 1;
          }
          else {
            uVar4 = *puVar3 + puVar3[1];
            if (uVar7 < uVar4) {
              auStack_a4[iVar9 * 2 + 1] = uVar4 - auStack_a4[iVar9 * 2];
            }
          }
          puVar3 = puVar3 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (iVar9 == 0) goto LAB_100007c0;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_100039c0(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000a0ac != 0) goto LAB_100008c6;
    }
  }
LAB_100007c0:
  if (_DAT_00006088 < 0x300001) {
    uVar7 = 0x4000000;
  }
  else {
    uVar7 = _DAT_00006088 & 0xfffffff0;
  }
  uVar4 = 0x3d00000;
  if (0x300020 < uVar7) {
    uVar4 = uVar7 - 0x300000;
  }
  uVar7 = 0xffffffff;
  if (uVar4 < 0xffd00000) {
    uVar7 = uVar4 + 0x300000;
  }
  if (uVar7 < 0x1800001) {
    if (0x20 < uVar4) {
      _DAT_00300000 = uVar4 - 0x10;
      _DAT_00300004 = 0;
      _DAT_00300008 = local_14;
      DAT_0030000c = 1;
      puVar6 = &DAT_1000a0ac;
      if (DAT_1000a0ac != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_1000a0b0 == 0) {
        DAT_1000a0a8 = 1;
        DAT_1000a0b0 = 0x300000;
        return;
      }
      DAT_1000a0a8 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1000a0ac;
    if (DAT_1000a0ac != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_1000a0b0 == 0) {
      DAT_1000a0b0 = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1000a0ac;
      if (DAT_1000a0ac != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_1000a0b0 == 0) {
        DAT_1000a0a8 = 1;
        DAT_1000a0b0 = 0x2000000;
        return;
      }
      DAT_1000a0a8 = 1;
      return;
    }
  }
LAB_100008c6:
  if (DAT_1000a0b0 == 0) {
    DAT_1000a0b0 = DAT_1000a0ac;
    DAT_1000a0a8 = 1;
    return;
  }
  DAT_1000a0a8 = 1;
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000a0a8
#undef DAT_1000a0ac
#undef DAT_1000a0b0
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00300000
#undef _DAT_00300004
#undef _DAT_00300008
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008
#undef auStack_a4
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000a0ac
#define DAT_1000a0ac (*(int * *)(((uintptr_t)pf_module_state + 0x193eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000940
 */

int recovered_10000940(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000620();
  iVar1 = 0;
  for (piVar2 = DAT_1000a0ac; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000a0ac

#undef DAT_1000a0ac
#define DAT_1000a0ac (*(int *)(((uintptr_t)pf_module_state + 0x193eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000980
 */

void recovered_10000980(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000620();
  for (iVar1 = DAT_1000a0ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a0ac

#undef DAT_1000a0ac
#define DAT_1000a0ac (*(int * *)(((uintptr_t)pf_module_state + 0x193eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009c0
 */

int recovered_100009c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000620();
  iVar2 = 0;
  for (piVar1 = DAT_1000a0ac; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000a0ac

#undef DAT_1000a0ac
#define DAT_1000a0ac (*(int *)(((uintptr_t)pf_module_state + 0x193eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009f0
 */

void recovered_100009f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000620();
  for (iVar1 = DAT_1000a0ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a0ac

#undef DAT_1000a0ac
#define DAT_1000a0ac (*(uint * *)(((uintptr_t)pf_module_state + 0x193eU)))
#undef DAT_1000a0b0
#define DAT_1000a0b0 (*(uint * *)(((uintptr_t)pf_module_state + 0x1942U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a30
 */

uint * recovered_10000a30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000620();
    puVar4 = DAT_1000a0ac;
    if (DAT_1000a0b0 != (uint *)0x0) {
      puVar4 = DAT_1000a0b0;
    }
    if (puVar4 != (uint *)0x0) {
      uVar5 = param_1 + 0xfU & 0xfffffff0;
      puVar3 = puVar4;
      do {
        if ((char)puVar3[3] == '\x01') {
          uVar2 = *puVar3;
          if (uVar5 <= uVar2) {
            if (uVar2 < uVar5 + 0x20) {
              puVar4 = (uint *)puVar3[1];
            }
            else {
              puVar4 = (uint *)((int)puVar3 + uVar5 + 0x10);
              *(uint *)((int)puVar3 + uVar5 + 0x10) = (uVar2 - uVar5) + -0x10;
              uVar2 = puVar3[1];
              *(uint *)((int)puVar3 + uVar5 + 0x14) = uVar2;
              *(uint **)((int)puVar3 + uVar5 + 0x18) = puVar3;
              *(undefined1 *)((int)puVar3 + uVar5 + 0x1c) = 1;
              if (uVar2 != 0) {
                *(uint **)(uVar2 + 8) = puVar4;
              }
              *puVar3 = uVar5;
              puVar3[1] = (uint)puVar4;
            }
            DAT_1000a0b0 = DAT_1000a0ac;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_1000a0b0 = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1000a0ac;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000a0ac
#undef DAT_1000a0b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000af0
 */

longlong recovered_10000af0(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 << (bVar1 & 0x1f) | param_1 >> (0x20 - bVar1 & 0x1f),
                        param_1 << (bVar1 & 0x1f));
      }
      return (ulonglong)(param_1 << (bVar1 - 0x20 & 0x1f)) << 0x20;
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b30
 */

ulonglong recovered_10000b30(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (0 < (int)param_3) {
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44(param_2 >> (bVar1 & 0x1f),
                        param_1 >> (bVar1 & 0x1f) | param_2 << (0x20 - bVar1 & 0x1f));
      }
      return (ulonglong)(param_2 >> (bVar1 - 0x20 & 0x1f));
    }
    param_1 = 0;
    param_2 = 0;
  }
  return CONCAT44(param_2,param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b70
 */

undefined8 recovered_10000b70(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;

  uVar1 = param_1;
  if (0 < (int)param_3) {
    uVar1 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        return CONCAT44((int)param_2 >> (bVar2 & 0x1f),
                        param_1 >> (bVar2 & 0x1f) | param_2 << (0x20 - bVar2 & 0x1f));
      }
      return CONCAT44(uVar1,(int)param_2 >> (bVar2 - 0x20 & 0x1f));
    }
    param_2 = uVar1;
  }
  return CONCAT44(param_2,uVar1);
}


#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

undefined8 recovered_10000bc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  if (param_3 == 0 && param_4 == 0) {
    uVar1 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = 0;
    uVar5 = 0x3f;
    iVar10 = 0;
    uVar1 = 0;
    uVar6 = 0;
    do {
      bVar4 = (byte)uVar5;
      uVar8 = 1 << (bVar4 & 0x1f);
      uVar2 = 0;
      if ((uVar5 & 0x20) == 0) {
        uVar2 = uVar8;
      }
      if ((uVar5 & 0x20) == 0) {
        uVar8 = 0 << (bVar4 & 0x1f) | 1U >> 0x20 - (bVar4 & 0x1f);
      }
      uVar3 = param_2 >> (bVar4 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar3 = param_1 >> (bVar4 & 0x1f) | param_2 << 0x20 - (bVar4 & 0x1f);
      }
      uVar11 = iVar10 << 1 | uVar9 >> 0x1f;
      uVar3 = (uVar3 & 1) + uVar9 * 2;
      local_18 = 0;
      local_14 = 0;
      uVar9 = 0;
      uVar7 = 0;
      if (param_4 <= uVar11 && (uint)(uVar3 < param_3) <= uVar11 - param_4) {
        local_14 = param_4;
        uVar9 = uVar2;
        uVar7 = param_3;
        local_18 = uVar8;
      }
      uVar1 = uVar1 | uVar9;
      uVar6 = uVar6 | local_18;
      uVar9 = uVar3 - uVar7;
      iVar10 = (uVar11 - local_14) - (uint)(uVar3 < uVar7);
      bVar12 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar12);
  }
  return CONCAT44(uVar6,uVar1);
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca0
 */

undefined8 recovered_10000ca0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 0x3f;
    iVar4 = 0;
    do {
      bVar1 = (byte)uVar3 & 0x1f;
      uVar7 = param_2 >> ((byte)uVar3 & 0x1f);
      if ((uVar3 & 0x20) == 0) {
        uVar7 = param_1 >> bVar1 | param_2 << 0x20 - bVar1;
      }
      uVar5 = iVar4 << 1 | uVar2 >> 0x1f;
      uVar7 = (uVar7 & 1) + uVar2 * 2;
      uVar6 = 0;
      uVar8 = 0;
      if (param_4 <= uVar5 && (uint)(uVar7 < param_3) <= uVar5 - param_4) {
        uVar6 = param_4;
        uVar8 = param_3;
      }
      uVar2 = uVar7 - uVar8;
      iVar4 = (uVar5 - uVar6) - (uint)(uVar7 < uVar8);
      bVar9 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar9);
  }
  return CONCAT44(iVar4,uVar2);
}


#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d10
 */

undefined8 recovered_10000d10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;

  if (param_3 == 0 && param_4 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = (int)param_2 >> 0x1f;
    uVar11 = 0;
    uVar12 = ((param_2 ^ uVar1) - uVar1) - (uint)((param_1 ^ uVar1) < uVar1);
    uVar2 = (int)param_4 >> 0x1f;
    uVar8 = (param_3 ^ uVar2) - uVar2;
    uVar6 = ((param_4 ^ uVar2) - uVar2) - (uint)((param_3 ^ uVar2) < uVar2);
    uVar7 = 0x3f;
    iVar13 = 0;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar5 = (byte)uVar7;
      local_1c = 1 << (bVar5 & 0x1f);
      uVar10 = 0;
      if ((uVar7 & 0x20) == 0) {
        uVar10 = local_1c;
      }
      if ((uVar7 & 0x20) == 0) {
        local_1c = 0 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f);
      }
      uVar4 = uVar12 >> (bVar5 & 0x1f);
      if ((uVar7 & 0x20) == 0) {
        uVar4 = (param_1 ^ uVar1) - uVar1 >> (bVar5 & 0x1f) | uVar12 << 0x20 - (bVar5 & 0x1f);
      }
      uVar14 = iVar13 << 1 | uVar11 >> 0x1f;
      uVar4 = (uVar4 & 1) + uVar11 * 2;
      local_20 = 0;
      local_24 = 0;
      uVar9 = 0;
      uVar11 = 0;
      if (uVar6 <= uVar14 && (uint)(uVar4 < uVar8) <= uVar14 - uVar6) {
        local_20 = local_1c;
        uVar9 = uVar6;
        uVar11 = uVar10;
        local_24 = uVar8;
      }
      uVar3 = uVar3 | uVar11;
      uVar2 = uVar2 | local_20;
      uVar11 = uVar4 - local_24;
      iVar13 = (uVar14 - uVar9) - (uint)(uVar4 < local_24);
      bVar15 = uVar7 != 0;
      uVar7 = uVar7 - 1;
    } while (bVar15);
    uVar1 = uVar3;
    if (param_2 >> 0x1f != param_4 >> 0x1f) {
      uVar1 = -uVar3;
      uVar2 = -(uint)(uVar3 != 0) - uVar2;
    }
  }
  return CONCAT44(uVar2,uVar1);
}

#undef local_20
#undef local_1c
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e50
 */

undefined8 recovered_10000e50(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar2 = 0;
    iVar12 = 0;
  }
  else {
    uVar2 = (int)param_2 >> 0x1f;
    uVar13 = ((param_2 ^ uVar2) - uVar2) - (uint)((param_1 ^ uVar2) < uVar2);
    uVar3 = (int)param_4 >> 0x1f;
    uVar6 = (param_3 ^ uVar3) - uVar3;
    uVar4 = ((param_4 ^ uVar3) - uVar3) - (uint)((param_3 ^ uVar3) < uVar3);
    uVar3 = 0;
    uVar5 = 0x3f;
    iVar7 = 0;
    do {
      bVar1 = (byte)uVar5 & 0x1f;
      uVar11 = uVar13 >> ((byte)uVar5 & 0x1f);
      if ((uVar5 & 0x20) == 0) {
        uVar11 = (param_1 ^ uVar2) - uVar2 >> bVar1 | uVar13 << 0x20 - bVar1;
      }
      uVar8 = iVar7 << 1 | uVar3 >> 0x1f;
      uVar11 = (uVar11 & 1) + uVar3 * 2;
      uVar9 = 0;
      uVar10 = 0;
      if (uVar4 <= uVar8 && (uint)(uVar11 < uVar6) <= uVar8 - uVar4) {
        uVar9 = uVar6;
        uVar10 = uVar4;
      }
      uVar3 = uVar11 - uVar9;
      iVar7 = (uVar8 - uVar10) - (uint)(uVar11 < uVar9);
      bVar14 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar14);
    uVar2 = -uVar3;
    iVar12 = -(uint)(uVar3 != 0) - iVar7;
    if (-1 < (int)param_2) {
      uVar2 = uVar3;
      iVar12 = iVar7;
    }
  }
  return CONCAT44(iVar12,uVar2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f10
 */

void recovered_10000f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

int recovered_10000f30(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000f50(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000f90(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000fd0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001010
 */

void * recovered_10001010(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = destination;
  if (7 < count) {
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10001037;
    if (((uint)destination & 3) != 0) {
      pvVar5 = destination;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)source;
        source = (void *)((int)source + 1);
        *(undefined1 *)destination = uVar1;
        destination = (void *)((int)destination + 1);
        bVar6 = count == 1;
        count = count - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < count; count = count - 0x10) {
      *(undefined4 *)destination = *(undefined4 *)source;
      *(undefined4 *)((int)destination + 4) = *(undefined4 *)((int)source + 4);
      *(undefined4 *)((int)destination + 8) = *(undefined4 *)((int)source + 8);
      *(undefined4 *)((int)destination + 0xc) = *(undefined4 *)((int)source + 0xc);
      destination = (void *)((int)destination + 0x10);
      source = (void *)((int)source + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      uVar2 = *(undefined4 *)source;
      source = (void *)((int)source + 4);
      *(undefined4 *)destination = uVar2;
      destination = (void *)((int)destination + 4);
    }
  }
  if (count == 0) {
    return pvVar3;
  }
LAB_10001037:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d0
 */

void * recovered_100010d0(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (count != 0 && destination != source) {
    if ((destination < source) || (pvVar5 = (void *)((int)source + count), pvVar5 <= destination)) {
      puVar7 = destination;
      if ((7 < count) && (pvVar5 = destination, (((uint)source ^ (uint)destination) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)source;
          source = (void *)((int)source + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = count != 1;
          count = count - 1;
        } while (bVar8);
        for (; 0xf < count; count = count - 0x10) {
          *puVar7 = *(undefined4 *)source;
          puVar7[1] = *(undefined4 *)((int)source + 4);
          puVar7[2] = *(undefined4 *)((int)source + 8);
          puVar7[3] = *(undefined4 *)((int)source + 0xc);
          puVar7 = puVar7 + 4;
          source = (void *)((int)source + 0x10);
        }
        for (; 3 < count; count = count - 4) {
          uVar3 = *(undefined4 *)source;
          source = (void *)((int)source + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (count == 0) {
          return destination;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)source + uVar4);
        uVar4 = uVar4 + 1;
      } while (count != uVar4);
    }
    else {
      uVar4 = (int)destination + count;
      if ((7 < count) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)destination + (count - 1)) =
                 *(undefined1 *)((int)source + (count - 1));
            uVar1 = count - 1;
            if (count == 1) break;
            iVar6 = count - 1;
            count = uVar1;
          } while (((int)destination + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)source + uVar1);
          uVar4 = (int)destination + uVar1;
          count = uVar1;
        }
        for (; 0xf < count; count = count - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < count; count = count - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (count == 0) {
          return destination;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012a0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100012a0(void *destination,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = destination;
  if (7 < count) {
    if (((uint)destination & 3) != 0) {
      pvVar2 = destination;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)value;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = count == 1;
        count = count - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (value & 0xffU) * 0x1010101;
    for (; 0xf < count; count = count - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < count; count = count - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)piVar1 = (char)value;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

void recovered_10001350(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

void recovered_100013f0(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < param_2; param_2 = param_2 - 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
    for (; 3 < param_2; param_2 = param_2 - 4) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001490
 */

int recovered_10001490(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;

  if (7 < count) {
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1000152e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10001545;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_10001576:
        if ((char)uVar8 == (char)uVar9) {
          uVar5 = uVar8 >> 8;
          uVar4 = uVar9 >> 8;
          if ((char)(uVar8 >> 8) == (char)(uVar9 >> 8)) {
            uVar5 = uVar8 >> 0x10;
            uVar4 = uVar9 >> 0x10;
            if ((char)(uVar8 >> 0x10) == (char)(uVar9 >> 0x10)) {
              uVar5 = uVar8 >> 0x18;
              uVar4 = uVar9 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar8;
          uVar4 = uVar9;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar8 = *(uint *)((int)left + 4);
      uVar9 = *(uint *)((int)right + 4);
      if (uVar8 != uVar9) goto LAB_10001576;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_10001576;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_10001576;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_100015c0(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1000152e:
  uVar8 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)left + uVar8);
    bVar2 = *(byte *)((int)right + uVar8);
    if (bVar1 != bVar2) break;
    uVar8 = uVar8 + 1;
    if (count == uVar8) {
      return 0;
    }
  }
LAB_10001545:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c0
 */

int recovered_100015c0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (uint)CONCAT11(*in_EDX,*in_ECX);
  if ((((*in_ECX == *in_EDX) &&
       (uVar1 = (uint)CONCAT11(in_EDX[1],in_ECX[1]), in_ECX[1] == in_EDX[1])) &&
      (uVar1 = (uint)CONCAT11(in_EDX[2],in_ECX[2]), in_ECX[2] == in_EDX[2])) &&
     (uVar1 = (uint)CONCAT11(in_EDX[3],in_ECX[3]), in_ECX[3] == in_EDX[3])) {
    return 0;
  }
  return (uVar1 & 0xff) - (uVar1 >> 8);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001600
 */

bool recovered_10001600(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001620
 */

bool recovered_10001620(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001640
 */

bool recovered_10001640(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

bool recovered_10001660(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001690
 */

bool recovered_10001690(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016b0
 */

bool recovered_100016b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d0
 */

int recovered_100016d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f0
 */

int recovered_100016f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001710
 */

ulong recovered_10001710(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  ulong uVar3;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar1 = uVar3 + 1;
    iVar2 = uVar3 + 1;
    uVar3 = uVar1;
  } while (text[iVar2] != '\0');
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001740
 */

int recovered_10001740(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *left;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = (uint)bVar1;
      left = left + 1;
      if (bVar1 != *right) goto LAB_10001776;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001776:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001780
 */

int recovered_10001780(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = (uint)bVar1;
      param_1 = param_1 + 1;
      if (bVar1 != *param_2) goto LAB_100017b6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100017b6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017c0
 */

void recovered_100017c0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + iVar2);
    *(char *)(param_1 + iVar2) = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100017e0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)((int)param_1 + uVar5) != '\0');
  if (_DAT_00006800 != 0x50414d57) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00006804 == 0) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00006808 < 0xc) {
    return (undefined4 *)0x0;
  }
  if (_DAT_00006808 < 0x50) {
    return (undefined4 *)0x0;
  }
  if (_DAT_0000684c == (code *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)(*_DAT_0000684c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_100018f1;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)((int)param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6[2] = param_1[2];
      puVar6[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return puVar4;
  }
LAB_100018f1:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)((int)param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return puVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001920
 */

char * recovered_10001920(char *param_1,char param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == cVar1) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001960
 */

int recovered_10001960(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000199b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000199b;
      pcVar5 = param_2;
      while (pcVar5 = pcVar5 + 1, (char)uVar3 != cVar4) {
        cVar4 = *pcVar5;
        if (cVar4 == '\0') {
          return iVar2;
        }
      }
      iVar1 = iVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),param_1[iVar1]);
      iVar2 = iVar2 + 1;
    } while (param_1[iVar1] != '\0');
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

char * recovered_100019b0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar2;
  uint uVar1;
  char *pcVar3;

  if (*param_1 != '\0') {
    uVar1 = (uint)CONCAT11(*param_2,*param_1);
    do {
      cVar2 = (char)(uVar1 >> 8);
      if (cVar2 != '\0') {
        pcVar3 = param_2;
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)uVar1 == cVar2) {
            return param_1;
          }
          cVar2 = *pcVar3;
        } while (cVar2 != '\0');
      }
      pcVar3 = param_1 + 1;
      uVar1 = CONCAT31((int3)(uVar1 >> 8),*pcVar3);
      param_1 = param_1 + 1;
    } while (*pcVar3 != '\0');
  }
  return (char *)0x0;
}


#define in_stack_00000008 (*(char * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

void * recovered_10001a00(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;

  pvVar3 = (void *)size;
  if (*in_stack_00000008 != '\0') {
    if (*(char *)size == '\0') {
      pvVar3 = (void *)0x0;
    }
    else {
      do {
        iVar2 = 0;
        cVar4 = *in_stack_00000008;
        while (*(char *)(size + iVar2) == cVar4) {
          cVar4 = in_stack_00000008[iVar2 + 1];
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)size;
          if (cVar4 == '\0') goto LAB_10001a43;
        }
        pvVar3 = (void *)0x0;
        pcVar1 = (char *)(size + 1);
        size = size + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001a43:
  return pvVar3;
}

#undef in_stack_00000008

#undef DAT_10008e20
#define DAT_10008e20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a50
 */

undefined * recovered_10001a50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10008e20;
}

#undef DAT_10008e20

#undef PTR_DAT_1000a008
#define PTR_DAT_1000a008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x189aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a60
 */

undefined ** recovered_10001a60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000a008;
}

#undef PTR_DAT_1000a008

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006968
#define DAT_00006968 (*(uint8_t *)(0x6968U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006968
#define _DAT_00006968 (*(code * *)(0x6968U))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a70(undefined4 *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
     (((_DAT_00006808 < 0x16c || (_DAT_00006968 == (code *)0x0)) ||
      (iVar1 = (*_DAT_00006968)(&local_20), iVar1 == 0)))) {
    local_18 = 0x574d4236;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_18;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006968
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006968
#undef local_10
#undef local_c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001b00(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_10008770;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      lVar2 = lVar2 + lVar2;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return lVar2;
}

#undef DAT_10008770
#undef _DAT_10008770

#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001b30(double param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  int iVar2;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 != 0.0) || (NAN(param_1))) {
    dVar1 = -param_1;
    if (-param_1 <= param_1) {
      dVar1 = param_1;
    }
    iVar2 = 0;
    if (1.0 <= dVar1) {
      iVar2 = 0;
      do {
        dVar1 = dVar1 * (double)_DAT_10008770;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_10008770 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_10008770);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10008770
#undef _DAT_10008770

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

longdouble recovered_10001c10(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_2;
  if ((lVar1 != (longdouble)0) || (NAN(lVar1) || NAN((longdouble)0))) {
    lVar1 = (longdouble)param_1 - lVar1 * (longdouble)(int)ROUND((longdouble)param_1 / lVar1);
  }
  else {
    lVar1 = (longdouble)0;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c70
 */

longdouble recovered_10001c70(double param_1,double param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  longdouble lVar4;
  longdouble lVar5;

  lVar4 = (longdouble)param_1;
  uVar1 = (uint)ROUND(param_2);
  lVar5 = (longdouble)0;
  if ((((double)(int)uVar1 == param_2) && (!NAN((double)(int)uVar1) && !NAN(param_2))) &&
     (lVar5 = (longdouble)1, uVar1 != 0)) {
    lVar5 = (longdouble)1;
    uVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar4 * lVar5;
      }
      lVar4 = lVar4 * lVar4;
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      lVar5 = (longdouble)1 / lVar5;
    }
  }
  return lVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d10
 */

longdouble recovered_10001d10(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;

  iVar1 = (int)ROUND((longdouble)param_1);
  lVar2 = (longdouble)iVar1;
  lVar3 = (longdouble)(iVar1 + -1);
  if (lVar2 <= (longdouble)param_1) {
    lVar3 = lVar2;
  }
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

longdouble recovered_10001d60(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  lVar3 = (longdouble)((int)ROUND(lVar1) + -1);
  if (lVar2 <= lVar1) {
    lVar3 = lVar2;
  }
  lVar2 = (longdouble)1 + lVar3;
  if (lVar1 <= lVar3) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc0
 */

void recovered_10001dc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10008774
#define DAT_10008774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6U)))
#undef DAT_10008778
#define DAT_10008778 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000877c
#define DAT_1000877c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10008780
#define DAT_10008780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_10008784
#define DAT_10008784 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_10008788
#define DAT_10008788 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1000878c
#define DAT_1000878c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_10008790
#define DAT_10008790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_10008794
#define DAT_10008794 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_10008798
#define DAT_10008798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1000879c
#define DAT_1000879c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100087a0
#define DAT_100087a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_100087c8
#define DAT_100087c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008774
#define _DAT_10008774 (*(float *)(((uintptr_t)pf_module_state + 0x6U)))
#undef _DAT_10008778
#define _DAT_10008778 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef _DAT_1000877c
#define _DAT_1000877c (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef _DAT_10008780
#define _DAT_10008780 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef _DAT_10008784
#define _DAT_10008784 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef _DAT_10008788
#define _DAT_10008788 (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef _DAT_1000878c
#define _DAT_1000878c (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef _DAT_10008790
#define _DAT_10008790 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef _DAT_10008794
#define _DAT_10008794 (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef _DAT_10008798
#define _DAT_10008798 (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef _DAT_1000879c
#define _DAT_1000879c (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef _DAT_100087a0
#define _DAT_100087a0 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_100087c8
#define _DAT_100087c8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001ec0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;

  lVar2 = (longdouble)param_1;
  if (lVar2 <= (longdouble)0) {
    lVar2 = (longdouble)_DAT_10008774;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_10008778 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_10008770;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_10008778 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_1000877c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_1000877c);
    }
    lVar10 = (-(longdouble)1 + lVar2) / (lVar2 + (longdouble)1);
    lVar2 = lVar10 * lVar10;
    lVar3 = lVar10 * lVar2 * lVar2;
    lVar4 = lVar3 * lVar2;
    lVar5 = lVar4 * lVar2;
    lVar6 = lVar5 * lVar2;
    lVar7 = lVar6 * lVar2;
    lVar8 = lVar7 * lVar2;
    lVar9 = lVar8 * lVar2;
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_100087a0 +
            lVar9 / (longdouble)_DAT_1000879c +
            lVar8 / (longdouble)_DAT_10008798 +
            lVar7 / (longdouble)_DAT_10008794 +
            lVar6 / (longdouble)_DAT_10008790 +
            lVar5 / (longdouble)_DAT_1000878c +
            lVar4 / (longdouble)_DAT_10008788 +
            lVar3 / (longdouble)_DAT_10008784 +
            (lVar10 * lVar2) / (longdouble)_DAT_10008780 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_100087c8;
  }
  return lVar2;
}

#undef DAT_10008770
#undef DAT_10008774
#undef DAT_10008778
#undef DAT_1000877c
#undef DAT_10008780
#undef DAT_10008784
#undef DAT_10008788
#undef DAT_1000878c
#undef DAT_10008790
#undef DAT_10008794
#undef DAT_10008798
#undef DAT_1000879c
#undef DAT_100087a0
#undef DAT_100087c8
#undef _DAT_10008770
#undef _DAT_10008774
#undef _DAT_10008778
#undef _DAT_1000877c
#undef _DAT_10008780
#undef _DAT_10008784
#undef _DAT_10008788
#undef _DAT_1000878c
#undef _DAT_10008790
#undef _DAT_10008794
#undef _DAT_10008798
#undef _DAT_1000879c
#undef _DAT_100087a0
#undef _DAT_100087c8

#undef DAT_100087f0
#define DAT_100087f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fe0
 */

longlong recovered_10001fe0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_100087f0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_100087f0

#undef DAT_100087a4
#define DAT_100087a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100087a8
#define DAT_100087a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_100087ac
#define DAT_100087ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_100087d0
#define DAT_100087d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_100087d8
#define DAT_100087d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_100087e0
#define DAT_100087e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_100087e8
#define DAT_100087e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100087a4
#define _DAT_100087a4 (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef _DAT_100087a8
#define _DAT_100087a8 (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_100087ac
#define _DAT_100087ac (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_100087d0
#define _DAT_100087d0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_100087d8
#define _DAT_100087d8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_100087e0
#define _DAT_100087e0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_100087e8
#define _DAT_100087e8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002030(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_100087d0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100087d8;
    } while ((longdouble)_DAT_100087d0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_100087e0) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100087e8;
    } while (lVar1 < (longdouble)_DAT_100087e0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_100087ac +
         (lVar2 * lVar2) / (longdouble)_DAT_100087a8 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_100087a4) * lVar1;
}

#undef DAT_100087a4
#undef DAT_100087a8
#undef DAT_100087ac
#undef DAT_100087d0
#undef DAT_100087d8
#undef DAT_100087e0
#undef DAT_100087e8
#undef _DAT_100087a4
#undef _DAT_100087a8
#undef _DAT_100087ac
#undef _DAT_100087d0
#undef _DAT_100087d8
#undef _DAT_100087e0
#undef _DAT_100087e8

#undef DAT_100087b0
#define DAT_100087b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_100087b4
#define DAT_100087b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_100087b8
#define DAT_100087b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_100087d0
#define DAT_100087d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_100087d8
#define DAT_100087d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_100087e0
#define DAT_100087e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_100087e8
#define DAT_100087e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100087b0
#define _DAT_100087b0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_100087b4
#define _DAT_100087b4 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_100087b8
#define _DAT_100087b8 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef _DAT_100087d0
#define _DAT_100087d0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_100087d8
#define _DAT_100087d8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_100087e0
#define _DAT_100087e0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_100087e8
#define _DAT_100087e8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100020d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_100087d0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100087d8;
    } while ((longdouble)_DAT_100087d0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_100087e0) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100087e8;
    } while (lVar1 < (longdouble)_DAT_100087e0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_100087b8 +
         (lVar1 * lVar1) / (longdouble)_DAT_100087b4 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_100087b0;
}

#undef DAT_100087b0
#undef DAT_100087b4
#undef DAT_100087b8
#undef DAT_100087d0
#undef DAT_100087d8
#undef DAT_100087e0
#undef DAT_100087e8
#undef _DAT_100087b0
#undef _DAT_100087b4
#undef _DAT_100087b8
#undef _DAT_100087d0
#undef _DAT_100087d8
#undef _DAT_100087e0
#undef _DAT_100087e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002170
 */

void recovered_10002170(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10002190(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10002270(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10002320(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10002390(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

void recovered_10002440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100024a0(float param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;

  lVar2 = (longdouble)param_1;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  lVar3 = (longdouble)0;
  if ((lVar2 != lVar3) || (NAN(lVar2) || NAN(lVar3))) {
    lVar3 = -lVar2;
    if ((longdouble)0 <= lVar2) {
      lVar3 = lVar2;
    }
    iVar1 = 0;
    if ((longdouble)1 <= lVar3) {
      iVar1 = 0;
      do {
        lVar3 = lVar3 * (longdouble)_DAT_10008770;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_10008770 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_10008770);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    lVar4 = -lVar3;
    if ((longdouble)0 <= lVar2) {
      lVar4 = lVar3;
    }
    lVar3 = (longdouble)(float)lVar4;
  }
  return lVar3;
}

#undef DAT_10008770
#undef _DAT_10008770

#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002590(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_10008770;
        param_2 = param_2 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      param_1 = param_1 + param_1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return (longdouble)param_1;
}

#undef DAT_10008770
#undef _DAT_10008770

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025d0
 */

longdouble recovered_100025d0(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;
  longdouble lVar5;

  uVar1 = (uint)ROUND(param_2);
  lVar5 = (longdouble)0;
  if ((((float)(int)uVar1 == param_2) && (!NAN((float)(int)uVar1) && !NAN(param_2))) &&
     (lVar5 = (longdouble)1, uVar1 != 0)) {
    fVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        fVar3 = fVar3 * param_1;
      }
      param_1 = param_1 * param_1;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
    lVar5 = (longdouble)fVar3;
  }
  return lVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002670
 */

longdouble recovered_10002670(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  return (longdouble)fVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026c0
 */

longdouble recovered_100026c0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (param_1 <= fVar2) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002730
 */

longdouble recovered_10002730(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;

  lVar1 = (longdouble)param_1;
  lVar2 = (longdouble)(int)ROUND(lVar1);
  lVar3 = (longdouble)((int)ROUND(lVar1) + -1);
  if (lVar2 <= lVar1) {
    lVar3 = lVar2;
  }
  lVar2 = (longdouble)1 + lVar3;
  if (lVar1 <= lVar3) {
    lVar2 = lVar3;
  }
  if ((longdouble)0 <= lVar1) {
    lVar2 = lVar3;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a0
 */

longdouble recovered_100027a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(param_1);
  fVar2 = (float)((int)ROUND(param_1) + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (param_1 <= fVar2) {
    fVar1 = fVar2;
  }
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  return (longdouble)fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

longdouble recovered_10002820(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10001dc0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_10008774
#define DAT_10008774 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6U)))
#undef DAT_10008778
#define DAT_10008778 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_1000877c
#define DAT_1000877c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10008780
#define DAT_10008780 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_10008784
#define DAT_10008784 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_10008788
#define DAT_10008788 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_1000878c
#define DAT_1000878c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_10008790
#define DAT_10008790 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_10008794
#define DAT_10008794 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_10008798
#define DAT_10008798 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_1000879c
#define DAT_1000879c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100087a0
#define DAT_100087a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_100087c8
#define DAT_100087c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_10008774
#define _DAT_10008774 (*(float *)(((uintptr_t)pf_module_state + 0x6U)))
#undef _DAT_10008778
#define _DAT_10008778 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef _DAT_1000877c
#define _DAT_1000877c (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef _DAT_10008780
#define _DAT_10008780 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef _DAT_10008784
#define _DAT_10008784 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef _DAT_10008788
#define _DAT_10008788 (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef _DAT_1000878c
#define _DAT_1000878c (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef _DAT_10008790
#define _DAT_10008790 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef _DAT_10008794
#define _DAT_10008794 (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef _DAT_10008798
#define _DAT_10008798 (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef _DAT_1000879c
#define _DAT_1000879c (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef _DAT_100087a0
#define _DAT_100087a0 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_100087c8
#define _DAT_100087c8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002840(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;

  fVar1 = _DAT_10008774;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_10008778 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_10008770;
        iVar10 = iVar10 + 1;
      } while (_DAT_10008778 < param_1);
    }
    for (; param_1 < _DAT_1000877c; param_1 = param_1 + param_1) {
      iVar10 = iVar10 + -1;
    }
    fVar1 = (param_1 + -1.0) / (param_1 + 1.0);
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar1 * fVar2 * fVar2;
    fVar4 = fVar3 * fVar2;
    fVar5 = fVar4 * fVar2;
    fVar6 = fVar5 * fVar2;
    fVar7 = fVar6 * fVar2;
    fVar8 = fVar7 * fVar2;
    fVar9 = fVar8 * fVar2;
    fVar1 = (fVar9 * fVar2) / _DAT_100087a0 +
            fVar9 / _DAT_1000879c +
            fVar8 / _DAT_10008798 +
            fVar7 / _DAT_10008794 +
            fVar6 / _DAT_10008790 +
            fVar5 / _DAT_1000878c +
            fVar4 / _DAT_10008788 +
            fVar3 / _DAT_10008784 + (fVar1 * fVar2) / _DAT_10008780 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_100087c8;
  }
  return (longdouble)fVar1;
}

#undef DAT_10008770
#undef DAT_10008774
#undef DAT_10008778
#undef DAT_1000877c
#undef DAT_10008780
#undef DAT_10008784
#undef DAT_10008788
#undef DAT_1000878c
#undef DAT_10008790
#undef DAT_10008794
#undef DAT_10008798
#undef DAT_1000879c
#undef DAT_100087a0
#undef DAT_100087c8
#undef _DAT_10008770
#undef _DAT_10008774
#undef _DAT_10008778
#undef _DAT_1000877c
#undef _DAT_10008780
#undef _DAT_10008784
#undef _DAT_10008788
#undef _DAT_1000878c
#undef _DAT_10008790
#undef _DAT_10008794
#undef _DAT_10008798
#undef _DAT_1000879c
#undef _DAT_100087a0
#undef _DAT_100087c8

#undef DAT_100087f0
#define DAT_100087f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

undefined4 recovered_10002970(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_100087f0 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_100087f0
#undef local_14

#undef DAT_100087a4
#define DAT_100087a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100087a8
#define DAT_100087a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_100087ac
#define DAT_100087ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_100087d0
#define DAT_100087d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_100087d8
#define DAT_100087d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_100087e0
#define DAT_100087e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_100087e8
#define DAT_100087e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100087a4
#define _DAT_100087a4 (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef _DAT_100087a8
#define _DAT_100087a8 (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_100087ac
#define _DAT_100087ac (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_100087d0
#define _DAT_100087d0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_100087d8
#define _DAT_100087d8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_100087e0
#define _DAT_100087e0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_100087e8
#define _DAT_100087e8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100029c0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_100087d0 < param_1; param_1 = param_1 + (float)_DAT_100087d8) {
  }
  for (; param_1 < (float)_DAT_100087e0; param_1 = param_1 + (float)_DAT_100087e8) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_100087ac +
          (fVar1 * fVar1) / _DAT_100087a8 + fVar1 / _DAT_100087a4 + 1.0) * param_1);
}

#undef DAT_100087a4
#undef DAT_100087a8
#undef DAT_100087ac
#undef DAT_100087d0
#undef DAT_100087d8
#undef DAT_100087e0
#undef DAT_100087e8
#undef _DAT_100087a4
#undef _DAT_100087a8
#undef _DAT_100087ac
#undef _DAT_100087d0
#undef _DAT_100087d8
#undef _DAT_100087e0
#undef _DAT_100087e8

#undef DAT_100087b0
#define DAT_100087b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_100087b4
#define DAT_100087b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_100087b8
#define DAT_100087b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_100087d0
#define DAT_100087d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_100087d8
#define DAT_100087d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_100087e0
#define DAT_100087e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_100087e8
#define DAT_100087e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100087b0
#define _DAT_100087b0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_100087b4
#define _DAT_100087b4 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_100087b8
#define _DAT_100087b8 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef _DAT_100087d0
#define _DAT_100087d0 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_100087d8
#define _DAT_100087d8 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_100087e0
#define _DAT_100087e0 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_100087e8
#define _DAT_100087e8 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002a60(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_100087d0 < param_1; param_1 = param_1 + (float)_DAT_100087d8) {
  }
  for (; param_1 < (float)_DAT_100087e0; param_1 = param_1 + (float)_DAT_100087e8) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_100087b8 +
         (fVar1 * fVar1) / _DAT_100087b4 + fVar1 * _DAT_100087b0 + 1.0);
}

#undef DAT_100087b0
#undef DAT_100087b4
#undef DAT_100087b8
#undef DAT_100087d0
#undef DAT_100087d8
#undef DAT_100087e0
#undef DAT_100087e8
#undef _DAT_100087b0
#undef _DAT_100087b4
#undef _DAT_100087b8
#undef _DAT_100087d0
#undef _DAT_100087d8
#undef _DAT_100087e0
#undef _DAT_100087e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b00
 */

void recovered_10002b00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b20
 */

int recovered_10002b20(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  do {
    bVar2 = *pbVar5;
    iVar6 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar7 = iVar6 - 0x57;
    }
    else {
      if (0x19 < (byte)(bVar2 + 0xbf)) {
LAB_10002c4c:
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = param_1;
        }
        if (bVar1 == 0x2d) {
          iVar4 = -iVar4;
        }
        return iVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if (param_3 <= uVar7) goto LAB_10002c4c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c70
 */

int recovered_10002c70(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < bVar1 - 9) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
  }
  else if (param_3 - 0x25 < 0xffffffdd) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = 0;
  do {
    bVar2 = *pbVar5;
    iVar6 = (int)(char)bVar2;
    if ((byte)(bVar2 - 0x30U) < 10) {
      uVar7 = iVar6 - 0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 0x1a) {
      uVar7 = iVar6 - 0x57;
    }
    else {
      if (0x19 < (byte)(bVar2 + 0xbf)) {
LAB_10002d9c:
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = param_1;
        }
        if (bVar1 == 0x2d) {
          iVar4 = -iVar4;
        }
        return iVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if (param_3 <= uVar7) goto LAB_10002d9c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100087c0
#define DAT_100087c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100087c0
#define _DAT_100087c0 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002dc0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;

  pbVar3 = param_1;
  while( true ) {
    bVar4 = *pbVar3;
    if ((4 < bVar4 - 9) && (bVar4 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  pbVar3 = pbVar3 + ((bVar4 - 0x2b & 0xfd) == 0);
  uVar2 = (uint)CONCAT11(*pbVar3,bVar4);
  bVar4 = *pbVar3 - 0x30U;
  lVar9 = (longdouble)0;
  if (bVar4 < 10) {
    lVar9 = (longdouble)0;
    do {
      lVar9 = lVar9 * (longdouble)_DAT_100087c0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
      pbVar5 = pbVar3 + 1;
      uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
      pbVar3 = pbVar3 + 1;
    } while ((byte)(*pbVar5 - 0x30U) < 10);
  }
  if ((char)(uVar2 >> 8) == '.') {
    pbVar5 = pbVar3 + 1;
    uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
    pbVar3 = pbVar3 + 1;
    if ((byte)(*pbVar5 - 0x30U) < 10) {
      lVar10 = (longdouble)0;
      lVar11 = (longdouble)1;
      do {
        lVar10 = lVar10 * (longdouble)_DAT_100087c0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_100087c0;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10002e81;
    }
  }
  lVar10 = (longdouble)0;
  if (9 < bVar4) {
    if (param_2 == (undefined4 *)0x0) {
      return (longdouble)0;
    }
    *param_2 = param_1;
    return (longdouble)0;
  }
LAB_10002e81:
  lVar10 = lVar10 + lVar9;
  if ((uVar2 >> 8 | 0x20) == 0x65) {
    iVar6 = 1;
    if (pbVar3[1] == 0x2b) {
      pbVar5 = pbVar3 + 2;
    }
    else if (pbVar3[1] == 0x2d) {
      pbVar5 = pbVar3 + 2;
      iVar6 = -1;
    }
    else {
      pbVar5 = pbVar3 + 1;
    }
    uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
    bVar4 = *pbVar5 - 0x30U;
    if (bVar4 < 10) {
      iVar7 = 0;
      do {
        iVar7 = ((uVar2 >> 8) - 0x30) + iVar7 * 10;
        pbVar1 = pbVar5 + 1;
        uVar2 = (uint)CONCAT11(*pbVar1,(char)uVar2);
        pbVar5 = pbVar5 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar4 < 10) {
        iVar7 = iVar7 * iVar6;
        pbVar3 = pbVar5;
        if (iVar7 < 1) {
          if (iVar7 < 0) {
            do {
              lVar10 = lVar10 * (longdouble)_DAT_10008770;
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0);
          }
        }
        else {
          uVar8 = iVar7 + 1;
          do {
            lVar10 = lVar10 + lVar10;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
        }
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar3;
  }
  lVar9 = -lVar10;
  if ((char)uVar2 != '-') {
    lVar9 = lVar10;
  }
  return lVar9;
}

#undef DAT_10008770
#undef DAT_100087c0
#undef _DAT_10008770
#undef _DAT_100087c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

longdouble recovered_10002f60(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10002dc0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_100087c0
#define DAT_100087c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef _DAT_100087c0
#define _DAT_100087c0 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef str_10008e25
#define str_10008e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#undef str_10008e2c
#define str_10008e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6beU)))
#undef str_10008e3d
#define str_10008e3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cfU)))
#define local_84 (*(uint *)(frame + 92))
#define local_80 (*(int *)(frame + 96))
#define local_7c (*(uint *)(frame + 100))
#define local_78 (*(int *)(frame + 104))
#define local_74 (*(int *)(frame + 108))
#define local_70 (*(int *)(frame + 112))
#define local_6c (*(int *)(frame + 116))
#define local_68 (*(int *)(frame + 120))
#define local_64 (*(int *)(frame + 124))
#define local_60 (*(int *)(frame + 128))
#define local_5c (*(int *)(frame + 132))
#define local_58 (*(int *)(frame + 136))
#define local_54 (*(int *)(frame + 140))
#define local_50 (*(uint *)(frame + 144))
#define local_4a (*(ushort *)(frame + 150))
#define local_48 (*(ushort *)(frame + 152))
#define local_46 (*(ushort *)(frame + 154))
#define local_44 (*(ushort *)(frame + 156))
#define local_42 (*(ushort *)(frame + 158))
#define local_40 (*(ushort *)(frame + 160))
#define local_3e (*(ushort *)(frame + 162))
#define local_3c (*(byte * *)(frame + 164))
#define local_28 (*(uint *)(frame + 184))
#define local_24 (*(uint *)(frame + 188))
#define local_20 (*(byte * *)(frame + 192))
#define local_1c (*(uint *)(frame + 196))
#define local_18 (*(double * *)(frame + 200))
#define local_14 (*(int *)(frame + 204))
#define abStack_c5 (*(byte (*)[65])(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002f90(byte *param_1,uint param_2,byte *param_3,double *param_4)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ushort in_FPUControlWord = pf_fpu_control();

  if (param_2 != 0) {
    *param_1 = 0;
  }
  local_18 = param_4;
  local_14 = 0;
  local_1c = param_2;
  local_20 = param_1;
  do {
    bVar7 = *param_3;
    if (bVar7 != 0x25) {
      if (bVar7 == 0) {
        if (param_2 != 0) {
          *local_20 = 0;
        }
        return local_14;
      }
      if (1 < local_1c) {
        *local_20 = bVar7;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3;
      goto LAB_10002fc3;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10002fc3;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_100030a2;
          goto LAB_10003077;
        }
        break;
      }
      param_3 = param_3 + 1;
      bVar7 = *local_3c;
      local_3c = local_3c + 1;
    }
    do {
      bVar7 = param_3[1];
      local_3c = param_3 + 1;
      param_3 = local_3c;
    } while ((byte)(bVar7 - 0x30U) < 10);
    if (bVar7 == 0x2e) {
LAB_10003077:
      if (local_3c[1] == 0x2a) {
        local_18 = (double *)((int)local_18 + 4);
        bVar7 = local_3c[2];
        local_3c = local_3c + 2;
      }
      else {
        do {
          bVar7 = local_3c[1];
          local_3c = local_3c + 1;
        } while ((byte)(bVar7 - 0x30U) < 10);
      }
    }
LAB_100030a2:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_10003111;
    default:
      cVar8 = '\0';
      goto LAB_10003111;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_10003111;
    case 0x6a:
      local_3c = local_3c + 1;
      cVar8 = '\a';
      break;
    case 0x6c:
      pbVar5 = local_3c + 1;
      if (*pbVar5 == 0x6c) {
        local_3c = local_3c + 2;
      }
      else {
        local_3c = local_3c + 1;
      }
      cVar8 = (*pbVar5 == 0x6c) + '\x03';
      break;
    case 0x74:
      local_3c = local_3c + 1;
      cVar8 = '\x06';
      break;
    case 0x7a:
      local_3c = local_3c + 1;
      cVar8 = '\x05';
    }
    bVar16 = false;
LAB_10003111:
    switch((uintptr_t)(*local_3c)) {
    case 0x49:
    case 100:
    case 0x69:
      switch((uintptr_t)(cVar8)) {
      case '\x01':
        uVar10 = (uint)*(char *)local_18;
        break;
      case '\x02':
        uVar10 = (uint)*(short *)local_18;
        break;
      default:
        uVar10 = *(uint *)local_18;
        break;
      case '\x04':
      case '\a':
        uVar10 = *(uint *)local_18;
        uVar9 = *(uint *)((int)local_18 + 4);
        local_18 = local_18 + 1;
        goto LAB_10003318;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10003318:
      if ((int)uVar9 < 0) {
        if (1 < local_1c) {
          *local_20 = 0x2d;
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        local_14 = local_14 + 1;
        bVar16 = uVar10 != 0;
        uVar10 = -uVar10;
        uVar9 = -(uint)bVar16 - uVar9;
      }
      else {
      }
      iVar11 = 0;
      do {
        local_28 = uVar10;
        uVar13 = uVar9 << 0x1f | uVar10 >> 1;
        local_24 = uVar9;
        uVar9 = uVar9 >> 1;
        uVar15 = (uVar13 + uVar9 + (uint)CARRY4(uVar13,uVar9)) % 5;
        uVar14 = uVar13 - uVar15;
        lVar3 = (ulonglong)uVar14 * 0xcccccccd;
        uVar6 = (uint)lVar3;
        uVar9 = (uVar9 - (uVar13 < uVar15)) * -0x33333333 +
                uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        abStack_c5[iVar11 + 1] = str_10008e3d[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003700;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_100036f6;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10002fc3;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar8)) {
      case '\x01':
        uVar9 = (uint)*(byte *)local_18;
        break;
      case '\x02':
        uVar9 = (uint)*(ushort *)local_18;
        break;
      default:
        uVar9 = *(uint *)local_18;
        break;
      case '\x04':
      case '\a':
        uVar9 = *(uint *)local_18;
        uVar10 = *(uint *)((int)local_18 + 4);
        local_18 = local_18 + 1;
        goto LAB_10003537;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003537;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003537:
      pcVar12 = str_10008e2c;
      if (*local_3c != 0x58) {
        pcVar12 = str_10008e3d;
      }
      iVar11 = 0;
      do {
        local_24 = uVar10;
        abStack_c5[iVar11 + 1] = pcVar12[uVar9 & 0xf];
        iVar11 = iVar11 + 1;
        uVar6 = uVar10 << 0x1c;
        uVar10 = uVar10 >> 4;
        bVar16 = 0xf < uVar9;
        uVar9 = uVar6 | uVar9 >> 4;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      break;
    case 99:
      if (1 < local_1c) {
        *local_20 = *(byte *)local_18;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_18 = (double *)((int)local_18 + 4);
LAB_10002fc3:
      local_14 = local_14 + 1;
      break;
    case 0x66:
      if (bVar16) {
        uVar9 = local_1c;
        if (1 < local_1c) {
          *local_20 = 0x30;
          uVar9 = 1;
          if (local_1c - 3 < 0xfffffffe) {
            local_20[1] = 0x2e;
            uVar10 = local_1c & 0xfffffffe;
            if (uVar10 == 2) {
              local_20 = local_20 + 2;
            }
            else {
              local_20[2] = 0x30;
              if (local_1c - 5 < 0xfffffffe) {
                local_20[3] = 0x30;
                if (uVar10 == 4) {
                  local_20 = local_20 + 4;
                }
                else {
                  local_20[4] = 0x30;
                  if (local_1c - 7 < 0xfffffffe) {
                    local_20[5] = 0x30;
                    if (uVar10 == 6) {
                      local_20 = local_20 + 6;
                    }
                    else {
                      local_20[6] = 0x30;
                      if (local_1c - 9 < 0xfffffffe) {
                        local_20[7] = 0x30;
                        local_20 = local_20 + 8;
                        uVar9 = local_1c - 8;
                      }
                      else {
                        local_20 = local_20 + 7;
                      }
                    }
                  }
                  else {
                    local_20 = local_20 + 5;
                  }
                }
              }
              else {
                local_20 = local_20 + 3;
              }
            }
          }
          else {
            local_20 = local_20 + 1;
          }
        }
        local_18 = local_18 + 2;
        local_14 = local_14 + 8;
        local_1c = uVar9;
      }
      else {
        dVar2 = *local_18;
        if (0.0 <= dVar2) {
        }
        else {
          if (1 < local_1c) {
            *local_20 = 0x2d;
            local_20 = local_20 + 1;
            local_1c = local_1c - 1;
          }
          local_14 = local_14 + 1;
          dVar2 = -dVar2;
        }
        local_18 = local_18 + 1;
        local_4a = in_FPUControlWord | 0xc00;
        local_84 = (uint)ROUND(dVar2);
        iVar11 = 0;
        local_50 = local_84;
        uVar10 = 0;
        uVar9 = local_84;
        do {
          local_28 = uVar9;
          uVar13 = uVar10 << 0x1f | uVar9 >> 1;
          local_24 = uVar10;
          uVar10 = uVar10 >> 1;
          uVar15 = (uVar13 + uVar10 + (uint)CARRY4(uVar13,uVar10)) % 5;
          uVar14 = uVar13 - uVar15;
          lVar3 = (ulonglong)uVar14 * 0xcccccccd;
          uVar6 = (uint)lVar3;
          uVar10 = (uVar10 - (uVar13 < uVar15)) * -0x33333333 +
                   uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
          abStack_c5[iVar11 + 1] = str_10008e3d[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003511;
        }
        else {
          local_14 = local_14 + iVar11;
          do {
            if (1 < local_1c) {
              *local_20 = abStack_c5[iVar11];
              local_20 = local_20 + 1;
              local_1c = local_1c - 1;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar9 = local_1c;
          if (1 < local_1c) {
LAB_10003511:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_100087c0;
              local_48 = in_FPUControlWord | 0xc00;
              local_80 = (int)ROUND(dVar2);
              local_20[1] = (char)local_80 + 0x30;
              uVar10 = uVar9 & 0xfffffffe;
              local_1c = 1;
              if (uVar10 == 2) {
                local_20 = local_20 + 2;
              }
              else {
                local_74 = local_80;
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_100087c0;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_100087c0;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_100087c0;
                    dVar2 = (dVar2 - (double)local_70) * dVar4;
                    local_42 = in_FPUControlWord | 0xc00;
                    local_60 = (int)ROUND(dVar2);
                    local_20[4] = (char)local_60 + 0x30;
                    local_64 = local_60;
                    dVar4 = (dVar2 - (double)local_60) * dVar4;
                    local_40 = in_FPUControlWord | 0xc00;
                    local_68 = (int)ROUND(dVar4);
                    if (uVar9 - 7 < 0xfffffffe) {
                      local_20[5] = (char)local_68 + 0x30;
                      if (uVar10 == 6) {
                        local_20 = local_20 + 6;
                      }
                      else {
                        local_54 = local_68;
                        local_3e = in_FPUControlWord | 0xc00;
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_100087c0);
                        local_20[6] = (char)local_58 + 0x30;
                        local_20 = local_20 + 7;
                        local_1c = uVar9 - 7;
                      }
                    }
                    else {
                      local_20 = local_20 + 5;
                    }
                  }
                }
                else {
                  local_20 = local_20 + 3;
                }
              }
            }
          }
        }
        local_14 = local_14 + 7;
      }
      break;
    case 0x70:
      uVar9 = *(uint *)local_18;
      if (local_1c < 2) {
      }
      else {
        *local_20 = 0x30;
        if (local_1c - 3 < 0xfffffffe) {
          local_20[1] = 0x78;
          local_20 = local_20 + 2;
          local_1c = local_1c - 2;
        }
        else {
          local_20 = local_20 + 1;
          local_1c = 1;
        }
      }
      local_18 = (double *)((int)local_18 + 4);
      iVar11 = 0;
      do {
        abStack_c5[iVar11 + 1] = str_10008e3d[uVar9 & 0xf];
        iVar11 = iVar11 + 1;
        bVar16 = 0xf < uVar9;
        uVar9 = uVar9 >> 4;
      } while (bVar16);
      local_14 = local_14 + 2 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
LAB_100032a4:
      break;
    case 0x73:
      pbVar5 = (byte *)str_10008e25;
      if (*(byte **)local_18 != (byte *)0x0) {
        pbVar5 = *(byte **)local_18;
      }
      local_18 = (double *)((int)local_18 + 4);
      bVar7 = *pbVar5;
      if (bVar7 != 0) {
        do {
          pbVar5 = pbVar5 + 1;
          if (1 < local_1c) {
            *local_20 = bVar7;
            local_20 = local_20 + 1;
            local_1c = local_1c - 1;
          }
          local_14 = local_14 + 1;
          bVar7 = *pbVar5;
        } while (bVar7 != 0);
        goto LAB_100032a4;
      }
      break;
    case 0x75:
      switch((uintptr_t)(cVar8)) {
      case '\x01':
        uVar9 = (uint)*(byte *)local_18;
        break;
      case '\x02':
        uVar9 = (uint)*(ushort *)local_18;
        break;
      default:
        uVar9 = *(uint *)local_18;
        break;
      case '\x04':
      case '\a':
        uVar9 = *(uint *)local_18;
        uVar10 = *(uint *)((int)local_18 + 4);
        local_18 = local_18 + 1;
        goto LAB_10003643;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003643;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003643:
      iVar11 = 0;
      do {
        local_28 = uVar9;
        uVar13 = uVar10 << 0x1f | uVar9 >> 1;
        local_24 = uVar10;
        uVar10 = uVar10 >> 1;
        uVar15 = (uVar13 + uVar10 + (uint)CARRY4(uVar13,uVar10)) % 5;
        uVar14 = uVar13 - uVar15;
        lVar3 = (ulonglong)uVar14 * 0xcccccccd;
        uVar6 = (uint)lVar3;
        uVar10 = (uVar10 - (uVar13 < uVar15)) * -0x33333333 +
                 uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        abStack_c5[iVar11 + 1] = str_10008e3d[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003700:
      }
      else {
        local_14 = local_14 + iVar11;
        do {
          if (1 < local_1c) {
            *local_20 = abStack_c5[iVar11];
            local_20 = local_20 + 1;
            local_1c = local_1c - 1;
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
LAB_100036f6:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_100087c0
#undef _DAT_100087c0
#undef str_10008e25
#undef str_10008e2c
#undef str_10008e3d
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4a
#undef local_48
#undef local_46
#undef local_44
#undef local_42
#undef local_40
#undef local_3e
#undef local_3c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_c5

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10003990(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002f90(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000004
#define DAT_02000004 (*(uint8_t *)(0x2000004U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_0200000c
#define DAT_0200000c (*(uint8_t *)(0x200000cU))
#undef DAT_1000a0ac
#define DAT_1000a0ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x193eU)))
#undef DAT_1000a0b0
#define DAT_1000a0b0 (*(int * *)(((uintptr_t)pf_module_state + 0x1942U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100039c0(uint in_ECX,uint in_EDX,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;

  uVar3 = 0xffffffff;
  if (!CARRY4(in_ECX,in_EDX)) {
    uVar3 = in_ECX + in_EDX;
  }
  if (((in_ECX < 0x2000000) && (in_ECX < uVar3)) && (0x1800000 < uVar3)) {
    if (in_ECX < 0x1800000) {
      piVar1 = (int *)(in_ECX + 0xf & 0x3fffff0);
      uVar4 = (0x1800000 - in_ECX) - ((int)piVar1 - in_ECX);
      if ((((int)piVar1 - in_ECX <= 0x1800000 - in_ECX && uVar4 != 0) && param_3 != (uint *)0x0) &&
         (uVar4 = uVar4 & 0xfffffff0, 0x20 < uVar4)) {
        *piVar1 = uVar4 - 0x10;
        piVar1[1] = 0;
        uVar4 = *param_3;
        piVar1[2] = uVar4;
        *(undefined1 *)(piVar1 + 3) = 1;
        puVar5 = (uint *)&DAT_1000a0ac;
        if (DAT_1000a0ac != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_1000a0b0 == (int *)0x0) {
          DAT_1000a0b0 = piVar1;
        }
      }
    }
    if (param_3 == (uint *)0x0 || uVar3 < 0x2000001) {
      return;
    }
    if ((uVar3 & 0xfffffff0) + 0xfe000000 < 0x21) {
      return;
    }
    _DAT_02000000 = (uVar3 & 0xfffffff0) + 0xfdfffff0;
    _DAT_02000004 = 0;
    _DAT_02000008 = *param_3;
    DAT_0200000c = 1;
    puVar2 = &DAT_1000a0ac;
    if (DAT_1000a0ac != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_1000a0b0 != (int *)0x0) {
      return;
    }
    piVar1 = (int *)&DAT_02000000;
  }
  else {
    piVar1 = (int *)(in_ECX + 0xf & 0xfffffff0);
    uVar3 = in_EDX - ((int)piVar1 - in_ECX);
    if ((in_EDX < (int)piVar1 - in_ECX || uVar3 == 0) || param_3 == (uint *)0x0) {
      return;
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 < 0x21) {
      return;
    }
    *piVar1 = uVar3 - 0x10;
    piVar1[1] = 0;
    uVar3 = *param_3;
    piVar1[2] = uVar3;
    *(undefined1 *)(piVar1 + 3) = 1;
    puVar2 = &DAT_1000a0ac;
    if (DAT_1000a0ac != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_1000a0b0 != (int *)0x0) {
      return;
    }
  }
  DAT_1000a0b0 = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000a0ac
#undef DAT_1000a0b0
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000a0b4
#define DAT_1000a0b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000a0b8
#define DAT_1000a0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_210 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003b40(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000a0b4 != 0) {
          DAT_1000a0b4 = DAT_1000a0b4 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000a0b4 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001010(local_210,&DAT_1000a0b8,DAT_1000a0b4);
            uVar3 = DAT_1000a0b4;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000a0b4 = 0;
        }
        else {
          if (DAT_1000a0b4 - 0x1ff < 0xfffffe00) {
            recovered_10001010(local_210,&DAT_1000a0b8,DAT_1000a0b4);
            local_210[DAT_1000a0b4] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_1000a0b4 = 0;
          }
          pcVar1 = &DAT_1000a0b8 + DAT_1000a0b4;
          DAT_1000a0b4 = DAT_1000a0b4 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000a0b4
#undef DAT_1000a0b8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_210

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000a0b4
#define DAT_1000a0b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000a0b8
#define DAT_1000a0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_204 (*(undefined1 (*)[512])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003ce0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000a0b4 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001010(local_204,&DAT_1000a0b8,DAT_1000a0b4);
    uVar1 = DAT_1000a0b4;
  }
  local_204[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_1000a0b4 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000a0b4
#undef DAT_1000a0b8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_204

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_1000a0b4
#define DAT_1000a0b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000a0b8
#define DAT_1000a0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003d70(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000a0b4 != 0) {
    recovered_10001010(local_208,&DAT_1000a0b8,DAT_1000a0b4);
    local_208[DAT_1000a0b4] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000a0b4 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000a0b4
#undef DAT_1000a0b8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef DAT_10008e4e
#define DAT_10008e4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e0U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e00
 */

void recovered_10003e00(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_10008e4e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10008e24;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10003990(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10003b40(local_148,iVar1);
  }
  return;
}

#undef DAT_10008e24
#undef DAT_10008e4e
#undef local_148

#undef DAT_10008e6c
#define DAT_10008e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6feU)))
#undef str_10008e51
#define str_10008e51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e60
 */

void recovered_10003e60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001710(str_10008e51);
  recovered_10003b40(str_10008e51,uVar1);
  uVar1 = recovered_10001710(&DAT_10008e6c);
  recovered_10003b40(&DAT_10008e6c,uVar1);
  return;
}

#undef DAT_10008e6c
#undef str_10008e51

#undef DAT_10008e6c
#define DAT_10008e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6feU)))
#undef str_10008e6f
#define str_10008e6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x701U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003eb0
 */

void recovered_10003eb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001710(str_10008e6f);
  recovered_10003b40(str_10008e6f,uVar1);
  uVar1 = recovered_10001710(&DAT_10008e6c);
  recovered_10003b40(&DAT_10008e6c,uVar1);
  return;
}

#undef DAT_10008e6c
#undef str_10008e6f

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef DAT_1000a0b4
#define DAT_1000a0b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000a0b8
#define DAT_1000a0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#undef _DAT_00006844
#define _DAT_00006844 (*(code * *)(0x6844U))
#define local_210 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003f00(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000a0b4 != 0) {
      recovered_10001010(local_210,&DAT_1000a0b8,DAT_1000a0b4);
      local_210[DAT_1000a0b4] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_1000a0b4 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_1000a0b4
#undef DAT_1000a0b8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ff0
 */

undefined4 recovered_10003ff0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004000
 */

void recovered_10004000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004010
 */

undefined1 recovered_10004010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef DAT_10008e4e
#define DAT_10008e4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_10008f03
#define str_10008f03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x795U)))
#undef str_10008f10
#define str_10008f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a2U)))
#undef str_10008f1e
#define str_10008f1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b0U)))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(void * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10004020(char *param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *destination;
  undefined4 uVar8;
  bool bVar9;

  if (param_1 == (char *)0x0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10001740(param_1,str_10008f03);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_10001740(param_1,str_10008f10);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_10001740(param_1,str_10008f1e);
      if (iVar4 != 0) {
        puVar5 = recovered_10000f50(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100012a0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10001920((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001920((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001920((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_10001920((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001920((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001920((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_10001920((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_10003990__4_((char *)(puVar5 + 1),0xf1,&DAT_10008e4e,(uint)param_1);
          recovered_100012a0(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001920((char *)param_2,'w');
            if (local_18 != 0 && pcVar6 == (char *)0x0) {
              if (*(char *)((int)puVar5 + 0x111) == '\x01') {
                uVar7 = puVar5[0x41];
                if (uVar7 < local_18) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_18);
                  destination = recovered_10000fd0((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000a000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_1000433e;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10001010(destination,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x1000431c;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000a000 = 2;
LAB_1000433e:
            recovered_10000f90(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x1000431c:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_100041a6;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_10000f50(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100012a0(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_10003990__4_((char *)(puVar5 + 1),0xf1,&DAT_10008e4e,(uint)param_1);
    return puVar5;
  }
LAB_100041a6:
  *(undefined4 *)PTR_DAT_1000a000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_10008e4e
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_10008f03
#undef str_10008f10
#undef str_10008f1e
#undef local_18
#undef local_1c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100043a0(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_1000444d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10004433;
      }
    }
    *(undefined4 *)PTR_DAT_1000a000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10004433:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10000f90((void *)param_3[0x3f]);
  }
  recovered_10000f90(param_3);
LAB_1000444d:
  recovered_10004020(param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004460(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       ((_DAT_00006838 != (code *)0x0 &&
        (iVar1 = (*_DAT_00006838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined4 *)PTR_DAT_1000a000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10000f90((void *)param_1[0x3f]);
  }
  recovered_10000f90(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

uint recovered_10004530(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;

  uVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar2 = param_4[0x42];
      uVar3 = param_4[0x40] - uVar2;
      if ((uint)param_4[0x40] < uVar2 || uVar3 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar4 = 0xffffffff;
        if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
          uVar4 = param_3 * param_2;
        }
        uVar1 = uVar3;
        if (uVar4 <= uVar3) {
          uVar1 = uVar4;
        }
        recovered_10001010(param_1,(void *)(uVar2 + param_4[0x3e]),uVar1);
        param_4[0x42] = param_4[0x42] + uVar1;
        if (uVar3 < uVar4) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar1 = uVar1 / param_2;
      }
    }
    else {
      uVar2 = 0;
      uVar1 = param_2;
      puVar5 = param_1;
      do {
        do {
          uVar3 = recovered_10004630(param_4);
          if (uVar3 == 0xffffffff) {
            return uVar2;
          }
          *param_1 = (char)uVar3;
          param_1 = param_1 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        uVar2 = uVar2 + 1;
        param_1 = puVar5 + param_2;
        uVar1 = param_2;
        puVar5 = param_1;
      } while (uVar2 != param_3);
      uVar1 = param_3;
    }
  }
  return uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_00006844
#define DAT_00006844 (*(uint8_t *)(0x6844U))
#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef DAT_1000a0b4
#define DAT_1000a0b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1946U)))
#undef DAT_1000a0b8
#define DAT_1000a0b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x194aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#undef _DAT_00006844
#define _DAT_00006844 (*(code * *)(0x6844U))
#define local_20c (*(undefined1 (*)[512])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004630(int *param_1)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar3 = param_1[0x43];
  if (uVar3 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar3;
  }
  if (*param_1 == 1) {
    uVar3 = param_1[199];
    if (uVar3 < (uint)param_1[0xc6]) {
LAB_10004687:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000a0b4 != 0) {
      recovered_10001010(local_20c,&DAT_1000a0b8,DAT_1000a0b4);
      local_20c[DAT_1000a0b4] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000a0b4 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10008e24,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10001710((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10004687;
      }
    }
  }
  else {
    uVar3 = param_1[0x42];
    if (uVar3 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar3 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_10008e24
#undef DAT_1000a0b4
#undef DAT_1000a0b8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047e0
 */

int recovered_100047e0(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000492e:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10003b40(param_1,count);
      param_4[0x42] = param_4[0x42] + count;
      return param_3;
    }
    if (*(char *)((int)param_4 + 0x112) == '\0') {
      uVar4 = param_4[0x42];
    }
    else {
      uVar4 = param_4[0x40];
      param_4[0x42] = uVar4;
    }
    uVar2 = param_4[0x41];
    if (uVar2 < uVar4 + count) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + count);
      pvVar3 = recovered_10000fd0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000a000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000492e;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100012a0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10001010((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000a000

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004940
 */

undefined4 recovered_10004940(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000494f;
        iVar1 = 0x100;
      }
      param_2 = param_2 + *(int *)((int)param_1 + iVar1);
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      param_1[0x43] = -1;
      return 0;
    }
  }
LAB_1000494f:
  *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000a000

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c0
 */

undefined4 recovered_100049c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_1000a000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100049f0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
        ((0xb < _DAT_00006808 && ((0x3b < _DAT_00006808 && (_DAT_00006838 != (code *)0x0)))))) &&
       (iVar2 = (*_DAT_00006838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar2 != 0)) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
    *(undefined4 *)PTR_DAT_1000a000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa0
 */

undefined1 recovered_10004aa0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ac0
 */

undefined1 recovered_10004ac0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ae0
 */

void recovered_10004ae0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b00
 */

uint recovered_10004b00(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0xffffffff && param_2 != 0) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x10c) = uVar1;
    *(undefined1 *)(param_2 + 0x114) = 0;
  }
  return uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004b30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x3f < _DAT_00006808 && (_DAT_0000683c != (code *)0x0)) &&
        (iVar1 = (*_DAT_0000683c)(param_1), iVar1 != 0)))) {
      return 0;
    }
  }
  *(undefined4 *)PTR_DAT_1000a000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000683c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1892U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004ba0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  }
  else {
    recovered_100012a0(&local_1c,0,0xc);
    uVar2 = 2;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)))) {
      iVar1 = (*_DAT_00006834)(param_1,&local_1c);
      uVar2 = 2;
      if (iVar1 != 0) {
        if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
           ((0xb < _DAT_00006808 &&
            (((0x3b < _DAT_00006808 && (_DAT_00006838 != (code *)0x0)) &&
             (iVar1 = (*_DAT_00006838)(param_2,local_1c,local_18), iVar1 != 0)))))) {
          uVar2 = 5;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x3f < _DAT_00006808 && (_DAT_0000683c != (code *)0x0))))))
          {
            iVar1 = (*_DAT_0000683c)(param_1);
            uVar2 = 5;
            if (iVar1 != 0) {
              return 0;
            }
          }
        }
        else {
          uVar2 = 5;
        }
      }
    }
    *(undefined4 *)PTR_DAT_1000a000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef _DAT_0000683c
#undef local_1c
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004d10(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_100012a0(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      destination = recovered_10000f50(local_18 + (local_18 == 0));
      if (destination == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_10001010(destination,local_1c,local_18);
        uVar2 = local_18;
      }
      *param_2 = destination;
      *param_3 = uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_1c
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004de0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) || (_DAT_00006800 != 0x50414d57)) ||
     (((_DAT_00006804 == 0 || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0x3c || (_DAT_00006838 == (code *)0x0)))))) {
    return false;
  }
  iVar1 = (*_DAT_00006838)(param_1,param_2,param_3);
  return iVar1 != 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e50
 */

undefined4 recovered_10004e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e60
 */

void recovered_10004e60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e70
 */

undefined4 recovered_10004e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e80
 */

undefined4 recovered_10004e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e90
 */

undefined4 recovered_10004e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

char * recovered_10004ea0(char *param_1,char param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != 0) {
    do {
      if (*param_1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ed0
 */

int recovered_10004ed0(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (count == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = left[iVar2];
      if (bVar1 != right[iVar2]) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = count - 1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)(byte)right[iVar2];
  }
  return iVar2;
}


#undef DAT_10008e92
#define DAT_10008e92 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x724U)))
#undef str_10008e95
#define str_10008e95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x727U)))
#undef str_10008ea2
#define str_10008ea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x734U)))
#undef str_10008eac
#define str_10008eac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73eU)))
#undef str_10008ec0
#define str_10008ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x752U)))
#undef str_10008ece
#define str_10008ece (*(char (*)[1])(((uintptr_t)pf_module_state + 0x760U)))
#undef str_10008ee0
#define str_10008ee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x772U)))
#undef str_10008eec
#define str_10008eec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77eU)))
#undef str_10008efd
#define str_10008efd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f20
 */

char * recovered_10004f20(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10008e92;
  default:
    return str_10008efd;
  case 2:
    return str_10008e95;
  case 5:
    return str_10008ea2;
  case 9:
    return str_10008eac;
  case 0xc:
    return str_10008ec0;
  case 0xd:
    return str_10008ece;
  case 0x11:
    return str_10008ee0;
  case 0x16:
    return str_10008eec;
  }
}

#undef DAT_10008e92
#undef str_10008e95
#undef str_10008ea2
#undef str_10008eac
#undef str_10008ec0
#undef str_10008ece
#undef str_10008ee0
#undef str_10008eec
#undef str_10008efd

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

undefined4 recovered_10004f80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f90
 */

undefined4 recovered_10004f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000a2b8
#define DAT_1000a2b8 (*(int *)(((uintptr_t)pf_module_state + 0x1b4aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa0
 */

void recovered_10004fa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000a2b8 = DAT_1000a2b8 + 1;
  return;
}

#undef DAT_1000a2b8

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10004fc0(void *context){__asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\nmovl 36(%eax),%edx\njmpl *%edx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10004fd0(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10005000(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_1000506d
#define DAT_1000506d (*(uint8_t *)(0x1000506dU))
#undef DAT_10008f3c
#define DAT_10008f3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ceU)))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005030
 */

void recovered_10005030(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005090;
  local_28 = &DAT_10008f3c;
  local_20 = &DAT_1000506d;
  local_40 = 1;
  recovered_10005550(&local_44);
  recovered_10000f10();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000506d
#undef DAT_10008f3c
#undef local_28
#undef local_24
#undef auStack_18
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005090
 */

undefined4 recovered_10005090(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050a0
 */

void recovered_100050a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100050c0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000a2bc
#define DAT_1000a2bc (*(int *)(((uintptr_t)pf_module_state + 0x1b4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050c0
 */

int recovered_100050c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000a2bc;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000a2bc = param_1;
  iVar1 = recovered_100053f0(param_1);
  return iVar1;
}

#undef DAT_1000a2bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050f0
 */

void * recovered_100050f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f50(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005120
 */

void * recovered_10005120(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000f50(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000f10();
  }
  return pvVar1;
}


#undef DAT_10008f4c
#define DAT_10008f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7deU)))
#undef LAB_100051a4
#define LAB_100051a4 (*(uint8_t *)(0x100051a4U))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005150
 */

void recovered_10005150(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005090;
  local_28 = &DAT_10008f4c;
  local_20 = &LAB_100051a4;
  local_40 = 1;
  recovered_10005550(&local_44);
  recovered_10000f90(param_1);
  recovered_10005570(&local_44);
  return;
}

#undef DAT_10008f4c
#undef LAB_100051a4
#undef local_24
#undef local_20
#undef auStack_18
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28

#undef DAT_10008f5c
#define DAT_10008f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7eeU)))
#undef LAB_10005224
#define LAB_10005224 (*(uint8_t *)(0x10005224U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051d0
 */

void recovered_100051d0(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005090;
  local_28 = &DAT_10008f5c;
  local_20 = &LAB_10005224;
  local_40 = 1;
  recovered_10005550(&local_44);
  recovered_10000f90(param_1);
  recovered_10005570(&local_44);
  return;
}

#undef DAT_10008f5c
#undef LAB_10005224
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10008f6c
#define DAT_10008f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7feU)))
#undef LAB_100052a4
#define LAB_100052a4 (*(uint8_t *)(0x100052a4U))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005250
 */

void recovered_10005250(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005090;
  local_28 = &DAT_10008f6c;
  local_20 = &LAB_100052a4;
  local_40 = 1;
  recovered_10005550(&local_44);
  recovered_10000f90(param_1);
  recovered_10005570(&local_44);
  return;
}

#undef DAT_10008f6c
#undef LAB_100052a4
#undef local_44
#undef local_40
#undef auStack_18
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10008f7c
#define DAT_10008f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80eU)))
#undef LAB_10005324
#define LAB_10005324 (*(uint8_t *)(0x10005324U))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

void recovered_100052d0(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005090;
  local_28 = &DAT_10008f7c;
  local_20 = &LAB_10005324;
  local_40 = 1;
  recovered_10005550(&local_44);
  recovered_10000f90(param_1);
  recovered_10005570(&local_44);
  return;
}

#undef DAT_10008f7c
#undef LAB_10005324
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

undefined4 recovered_10005350(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005360
 */

uint recovered_10005360(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005370
 */

void recovered_10005370(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005380
 */

void recovered_10005380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005390
 */

undefined1 * recovered_10005390(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10000f50(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005030();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  return puVar1 + 0x1c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

void recovered_100053d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10000f90((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f0
 */

int recovered_100053f0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000a2bc
#define DAT_1000a2bc (*(void * *)(((uintptr_t)pf_module_state + 0x1b4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005400
 */

void recovered_10005400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_1000a2bc;
  if (DAT_1000a2bc != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000a2bc + 8);
    DAT_1000a2bc = *(void **)((int)DAT_1000a2bc + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10000f90(pointer);
    }
  }
  return;
}

#undef DAT_1000a2bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

void recovered_10005450(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005490(param_1 + -0x1c);
}


#undef DAT_1000a2bc
#define DAT_1000a2bc (*(int *)(((uintptr_t)pf_module_state + 0x1b4eU)))
#undef DAT_1000a2c0
#define DAT_1000a2c0 (*(int * *)(((uintptr_t)pf_module_state + 0x1b52U)))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005490
 */

void recovered_10005490(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1000a2c0 != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000a2c0;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10005e20((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_100055e0(local_14);
        in_ECX_00 = DAT_1000a2bc;
        if (DAT_1000a2bc == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10005030();
        }
        *(undefined1 *)(DAT_1000a2bc + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005490(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}

#undef DAT_1000a2bc
#undef DAT_1000a2c0
#undef local_1c
#undef local_18
#undef local_14
#undef local_20

#undef DAT_1000a2bc
#define DAT_1000a2bc (*(int *)(((uintptr_t)pf_module_state + 0x1b4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

void recovered_10005510(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000a2bc;
  if (DAT_1000a2bc == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005030();
  }
  *(undefined1 *)(DAT_1000a2bc + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005490(in_ECX);
}

#undef DAT_1000a2bc

#undef DAT_1000a2c0
#define DAT_1000a2c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b52U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

void recovered_10005550(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000a2c0;
  DAT_1000a2c0 = param_1;
  return;
}

#undef DAT_1000a2c0

#undef DAT_1000a2c0
#define DAT_1000a2c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b52U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005570
 */

void recovered_10005570(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000a2c0;
  if (DAT_1000a2c0 == param_1) {
    puVar2 = &DAT_1000a2c0;
  }
  else {
    do {
      puVar2 = puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != param_1);
  }
  *puVar2 = *param_1;
  return;
}

#undef DAT_1000a2c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055a0
 */

void recovered_100055a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005490(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void recovered_100055b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000a2c0
#define DAT_1000a2c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b52U)))
#define iStack_34 (*(int *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define uStack_24 (*(undefined4 *)(frame + 44))
#define uStack_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055c0
 */

void recovered_100055c0(int param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000a2c0 != (undefined4 *)0x0) {
    DAT_1000a2c0 = (undefined4 *)*DAT_1000a2c0;
  }
  recovered_100055e0(param_1);
  if (DAT_1000a2c0 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000a2c0;
      if (DAT_1000a2c0 == puVar1) {
        DAT_1000a2c0[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_1000565b:
        puVar2[1] = uVar3;
        recovered_10004fc0((int)puVar2);
                    /* WARNING: Subroutine does not return */
        recovered_100055c0(iStack_34);
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_10005e20((int)DAT_1000a2c0,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_1000565b;
      }
      DAT_1000a2c0 = (undefined4 *)*puVar2;
    } while (DAT_1000a2c0 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}

#undef DAT_1000a2c0
#undef iStack_34
#undef uStack_28
#undef uStack_24
#undef uStack_20

#undef DAT_1000a2c0
#define DAT_1000a2c0 (*(int * *)(((uintptr_t)pf_module_state + 0x1b52U)))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
#define iStack_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void recovered_100055e0(int in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000a2c0 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1000a2c0;
      if (DAT_1000a2c0 == piVar1) {
        DAT_1000a2c0[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_1000565b:
        piVar2[1] = iVar3;
        recovered_10004fc0((int)piVar2);
                    /* WARNING: Subroutine does not return */
        recovered_100055c0(iStack_28);
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_10005e20((int)DAT_1000a2c0,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_1000565b;
      }
      DAT_1000a2c0 = (int *)*piVar2;
    } while (DAT_1000a2c0 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}

#undef DAT_1000a2c0
#undef local_1c
#undef local_18
#undef local_14
#undef iStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

void recovered_10005670(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100055c0(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005690
 */

undefined4 recovered_10005690(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

void recovered_100056a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005030();
}


#undef DAT_1000a060
#define DAT_1000a060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18f2U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b0
 */

int recovered_100056b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;

  local_14 = 0;
  if (param_3 != (undefined4 *)0x0 && param_1 != (int *)0x0) {
    puVar6 = *(undefined4 **)(*param_1 + -4);
    bVar7 = puVar6 != (undefined4 *)0x0;
    if (puVar6 != param_3 && bVar7) {
      iVar3 = param_3[1];
      do {
        iVar4 = puVar6[1];
        if ((iVar3 == 0) || (iVar4 == 0)) {
          if (iVar4 == iVar3) goto LAB_10005760;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10005760;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000a060) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10005760:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000a060
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

void recovered_10005780(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000f10();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005790
 */

undefined4 recovered_10005790(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

bool recovered_100057a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057c0
 */

bool recovered_100057c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057f0
 */

bool recovered_100057f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005820
 */

bool recovered_10005820(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

bool recovered_10005840(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005860
 */

byte recovered_10005860(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058a0
 */

bool recovered_100058a0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100058c0(double value) {
 if(value!=value)return value;
 if(value>709.782712893384)return pf_bits_double(0x7ff0000000000000ULL);
 if(value< -745.1332191019411)return 0.0;
 unsigned halves=0;
 while(value>0.5){value*=0.5;++halves;}
 while(value< -0.5){value*=0.5;++halves;}
 double sum=1.0,term=1.0;
 for(int n=1;n<=32;++n){term=(value/(double)n)*term;sum=sum+term;}
 while(halves--){sum=sum*sum;}
 return sum;
}


/* Native exponential ABI; Pooka's Free Software License. */
float recovered_100059f0(float value){return (float)recovered_100058c0((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10005b30(long double value){return (long double)recovered_100058c0((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10005c60(long end,long start){return (double)end-(double)start;}


#undef DAT_10008770
#define DAT_10008770 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100087b0
#define DAT_100087b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_10008770
#define _DAT_10008770 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100087b0
#define _DAT_100087b0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005c80(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10001d10(param_1);
  if ((longdouble)_DAT_10008770 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_100087b0 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_10008770
#undef DAT_100087b0
#undef _DAT_10008770
#undef _DAT_100087b0

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cd0
 */

ulonglong recovered_10005cd0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;

  pbVar7 = param_1;
  if (param_1 == (byte *)0x0) {
    bVar8 = false;
    pbVar7 = (byte *)0x0;
  }
  else {
    while( true ) {
      uVar3 = (uint)*pbVar7;
      if ((4 < uVar3 - 9) && (uVar3 != 0x20)) break;
      pbVar7 = pbVar7 + 1;
    }
    if ((uVar3 == 0x2b) || (uVar3 == 0x2d)) {
      bVar8 = *pbVar7 == 0x2d;
      pbVar7 = pbVar7 + 1;
    }
    else {
      bVar8 = false;
    }
  }
  if (param_3 == 0x10) {
    if ((*pbVar7 == 0x30) && ((pbVar7[1] | 0x20) == 0x78)) {
      local_14 = 0x10;
      pbVar7 = pbVar7 + 2;
      goto LAB_10005d7d;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_10005d7d;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_10005d7d;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_10005d7d;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_10005d7d:
  iVar4 = 0;
  uVar1 = 0;
  while( true ) {
    iVar6 = (int)(uVar1 >> 0x20);
    uVar5 = (uint)pbVar7[iVar4];
    uVar3 = uVar5 - 0x30;
    if (9 < uVar3) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar3 = uVar5 - 0x57;
      }
      else if (uVar5 - 0x41 < 0x1a) {
        uVar3 = uVar5 - 0x37;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    if (((int)uVar3 < 0) || ((int)local_14 <= (int)uVar3)) break;
    uVar1 = (uVar1 & 0xffffffff) * (ulonglong)local_14 + CONCAT44(iVar6 * local_14,uVar3);
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (iVar4 != 0) {
      param_1 = pbVar7 + iVar4;
    }
    *param_2 = param_1;
  }
  uVar2 = CONCAT44(-(uint)((int)uVar1 != 0) - iVar6,-(int)uVar1);
  if (!bVar8) {
    uVar2 = uVar1;
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

void recovered_10005e10(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005cd0(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_10008a78
#define DAT_10008a78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30aU)))
#undef DAT_1000a060
#define DAT_1000a060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18f2U)))
#define local_4c (*(byte * *)(frame + 20))
#define local_48 (*(byte * *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(byte * *)(frame + 48))
#define local_2c (*(byte * *)(frame + 52))
#define local_28 (*(byte * *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_20 (*(uint *)(frame + 64))
#define local_19 (*(char *)(frame + 71))
#define local_18 (*(uint *)(frame + 72))
#define local_11 (*(char *)(frame + 79))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e20
 */

undefined4 recovered_10005e20(int in_ECX,byte *in_EDX,undefined2 *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  char cVar15;

  pbVar9 = *(byte **)(in_ECX + 0x1c);
  if (pbVar9 != (byte *)0x0) {
    local_2c = pbVar9 + 1;
    local_28 = in_EDX;
    if (*pbVar9 != 0xff) {
      recovered_100061a0((uint)*pbVar9,(int *)&local_2c);
    }
    local_34 = (uint)*local_2c;
    local_30 = (byte *)0x0;
    if (local_34 != 0xff) {
      bVar7 = 0;
      uVar4 = 0;
      pbVar9 = local_2c + 1;
      do {
        local_2c = pbVar9;
        uVar4 = uVar4 | (*local_2c & 0x7f) << (bVar7 & 0x1f);
        bVar7 = bVar7 + 7;
        pbVar9 = local_2c + 1;
      } while ((char)*local_2c < '\0');
      local_30 = local_2c + 1 + uVar4;
    }
    bVar7 = 0;
    local_2c = local_2c + 2;
    uVar4 = 0;
    pbVar9 = local_2c;
    do {
      bVar1 = *pbVar9;
      uVar4 = uVar4 | (bVar1 & 0x7f) << (bVar7 & 0x1f);
      pbVar9 = pbVar9 + 1;
      bVar7 = bVar7 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX + 4)) && (0 < (int)uVar4)) {
      local_48 = pbVar9 + uVar4;
      iVar8 = 0;
      do {
        bVar7 = 0;
        uVar4 = 0;
        do {
          bVar1 = *pbVar9;
          uVar4 = uVar4 | (bVar1 & 0x7f) << (bVar7 & 0x1f);
          pbVar9 = pbVar9 + 1;
          bVar7 = bVar7 + 7;
        } while ((char)bVar1 < '\0');
        bVar7 = 0;
        uVar5 = 0;
        do {
          bVar1 = *pbVar9;
          uVar5 = uVar5 | (bVar1 & 0x7f) << (bVar7 & 0x1f);
          pbVar9 = pbVar9 + 1;
          bVar7 = bVar7 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar8 == *(int *)(in_ECX + 4) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(uint *)(param_3 + 2) = uVar4;
          *(undefined4 *)(param_3 + 4) = 0;
          if (uVar5 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          local_48 = local_48 + (uVar5 - 1);
          local_38 = local_34 & 0xf;
          local_11 = local_28 != (byte *)0x0;
          local_19 = (byte)local_38 < 0xd && local_30 != (byte *)0x0;
          local_44 = 0;
          local_3c = 0x1c1dU >> (byte)local_38 ^ 1;
          goto LAB_10005fb0;
        }
        iVar8 = iVar8 + 1;
      } while (pbVar9 < local_48);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  return 0;
LAB_10005fb0:
  local_20 = 0;
  uVar4 = 0;
  do {
    bVar7 = *local_48;
    local_18 = (uint)bVar7;
    local_20 = local_20 | (local_18 & 0x7f) << ((byte)uVar4 & 0x1f);
    local_48 = local_48 + 1;
    uVar4 = uVar4 + 7;
  } while ((char)bVar7 < '\0');
  local_40 = -1 << ((byte)uVar4 & 0x1f);
  uVar13 = 0;
  uVar5 = 0;
  pbVar9 = local_48;
  do {
    bVar1 = *pbVar9;
    uVar13 = uVar13 | (bVar1 & 0x7f) << ((byte)uVar5 & 0x1f);
    pbVar9 = pbVar9 + 1;
    uVar5 = uVar5 + 7;
  } while ((char)bVar1 < '\0');
  local_24 = 0;
  uVar12 = 0;
  if (0x3f < bVar7) {
    uVar12 = local_40;
  }
  uVar6 = 0;
  if (uVar4 < 0x20) {
    uVar6 = uVar12;
  }
  uVar4 = 0;
  if (bVar1 < 0x40) {
    if (0x1f < uVar5) goto LAB_10006058;
LAB_10006149:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10006060;
LAB_10006154:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10006149;
LAB_10006058:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10006154;
LAB_10006060:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_1000617f:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_10008a78 + local_38 * 4) * local_20;
      pbVar9 = recovered_100061a0(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_1000617f;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_1000617f;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_1000617f;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000a060) goto LAB_1000615b;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_1000617f;
    }
  }
LAB_1000615b:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10005fb0;
}

#undef DAT_10008a78
#undef DAT_1000a060
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_19
#undef local_18
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061a0
 */

byte * recovered_100061a0(uint in_ECX,int *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_EDI;
  uint uVar9;

  pbVar3 = (byte *)0x0;
  if (in_ECX == 0xff) {
    return (byte *)0x0;
  }
  if (0xc < (in_ECX & 0xf)) {
    return (byte *)0x0;
  }
  puVar1 = (ushort *)*in_EDX;
  switch((uintptr_t)(in_ECX & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    unaff_EDI = *(byte **)puVar1;
    puVar6 = puVar1 + 2;
    goto LAB_10006275;
  case 1:
    bVar4 = 0;
    unaff_EDI = (byte *)0x0;
    puVar6 = puVar1;
    do {
      *in_EDX = (int)puVar6 + 1;
      uVar2 = *puVar6;
      unaff_EDI = (byte *)((uint)unaff_EDI | ((byte)uVar2 & 0x7f) << (bVar4 & 0x1f));
      bVar4 = bVar4 + 7;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    unaff_EDI = (byte *)(uint)*puVar1;
    puVar6 = puVar1 + 1;
    goto LAB_10006275;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_100061cd_caseD_5;
  case 9:
    uVar9 = 0;
    uVar5 = 0;
    puVar6 = puVar1;
    do {
      *in_EDX = (int)puVar6 + 1;
      bVar4 = (byte)*puVar6;
      uVar9 = uVar9 | (bVar4 & 0x7f) << ((byte)uVar5 & 0x1f);
      uVar5 = uVar5 + 7;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)bVar4 < '\0');
    uVar8 = 0;
    if (0x3f < bVar4) {
      uVar8 = -1 << ((byte)uVar5 & 0x1f);
    }
    uVar7 = 0;
    if (uVar5 < 0x20) {
      uVar7 = uVar8;
    }
    unaff_EDI = (byte *)(uVar9 | uVar7);
    break;
  case 10:
    unaff_EDI = (byte *)((uint)(-1 < (char)*(byte *)((int)puVar1 + 1)) * 0x10000 + -0x10000 +
                        (uint)*puVar1);
    puVar6 = puVar1 + 1;
LAB_10006275:
    *in_EDX = (int)puVar6;
  }
  pbVar3 = unaff_EDI;
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (byte *)0x0;
    }
    pbVar3 = unaff_EDI + (int)puVar1;
  }
  if (((char)in_ECX < '\0') && (pbVar3 != (byte *)0x0)) {
    pbVar3 = *(byte **)pbVar3;
  }
switchD_100061cd_caseD_5:
  return pbVar3;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006814
#define DAT_00006814 (*(uint8_t *)(0x6814U))
#undef DAT_1000a2c4
#define DAT_1000a2c4 (*(int * *)(((uintptr_t)pf_module_state + 0x1b56U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006814
#define _DAT_00006814 (*(code * *)(0x6814U))
#undef str_10008f2c
#define str_10008f2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_100062b0(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x17 < _DAT_00006808 && (_DAT_00006814 != (code *)0x0)))) {
    (*_DAT_00006814)();
  }
  in_ECX = recovered_100050f0(0x4c);
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  *(undefined1 *)((int)in_ECX + 0x1e) = 0;
  *(undefined1 *)((int)in_ECX + 0x1f) = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  *(undefined1 *)((int)in_ECX + 0x2a) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  pcVar3 = str_10008f2c;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  uVar5 = 0xffffffff;
  do {
    iVar2 = uVar5 + 1;
    uVar5 = uVar5 + 1;
  } while (pcVar3[iVar2] != '\0');
  recovered_10008220(in_ECX,(int)pcVar3,uVar5);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  in_ECX[3] = param_2;
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  in_ECX[4] = param_3;
  in_ECX[5] = param_2;
  in_ECX[6] = param_3;
  in_ECX[8] = param_2 >> 1;
  in_ECX[9] = param_3 >> 1;
  uVar7 = param_2 * param_3 * 4;
  in_ECX[0x11] = 0;
  uVar5 = 0;
  if ((uint)in_ECX[0x12] < uVar7) {
    pvVar4 = recovered_100050f0(uVar7);
    pvVar1 = (void *)in_ECX[0x10];
    iVar2 = in_ECX[0x11];
    if (iVar2 != 0) {
      iVar6 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar2 != iVar6);
    }
    recovered_10005150(pvVar1);
    in_ECX[0x10] = (int)pvVar4;
    in_ECX[0x12] = uVar7;
    uVar5 = in_ECX[0x11];
  }
  while (uVar5 < uVar7) {
    *(undefined1 *)(in_ECX[0x10] + uVar5) = 0;
    uVar5 = in_ECX[0x11] + 1;
    in_ECX[0x11] = uVar5;
  }
  DAT_1000a2c4 = in_ECX;
  recovered_10006490((int)in_ECX);
  recovered_100067b0((int)in_ECX);
  return in_ECX;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006814
#undef DAT_1000a2c4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006814
#undef str_10008f2c

#define local_24 (*(int *)(frame + 28))
#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined1 *)(frame + 44))
#define local_13 (*(undefined1 *)(frame + 45))
#define local_12 (*(undefined1 *)(frame + 46))
#define local_11 (*(undefined1 *)(frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006490
 */

void recovered_10006490(int in_ECX)

{pf_console_compose((void *)in_ECX);}


#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_13
#undef local_12
#undef local_11

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000687c
#define DAT_0000687c (*(uint8_t *)(0x687cU))
#undef DAT_1000a2c8
#define DAT_1000a2c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b5aU)))
#undef DAT_1000a2cc
#define DAT_1000a2cc (*(int *)(((uintptr_t)pf_module_state + 0x1b5eU)))
#undef DAT_1000a2d0
#define DAT_1000a2d0 (*(int *)(((uintptr_t)pf_module_state + 0x1b62U)))
#undef DAT_1000a2d4
#define DAT_1000a2d4 (*(uint *)(((uintptr_t)pf_module_state + 0x1b66U)))
#undef DAT_1000a2d8
#define DAT_1000a2d8 (*(uint *)(((uintptr_t)pf_module_state + 0x1b6aU)))
#undef DAT_1000a2dc
#define DAT_1000a2dc (*(uint *)(((uintptr_t)pf_module_state + 0x1b6eU)))
#undef DAT_1000a2e0
#define DAT_1000a2e0 (*(int *)(((uintptr_t)pf_module_state + 0x1b72U)))
#undef DAT_1000a2e4
#define DAT_1000a2e4 (*(uint *)(((uintptr_t)pf_module_state + 0x1b76U)))
#undef DAT_1000a2e8
#define DAT_1000a2e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b7aU)))
#undef DAT_1000a2ec
#define DAT_1000a2ec (*(uint *)(((uintptr_t)pf_module_state + 0x1b7eU)))
#undef DAT_1000a2f0
#define DAT_1000a2f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b82U)))
#undef DAT_1000a2f4
#define DAT_1000a2f4 (*(uint *)(((uintptr_t)pf_module_state + 0x1b86U)))
#undef DAT_1000a2f8
#define DAT_1000a2f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b8aU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000687c
#define _DAT_0000687c (*(code * *)(0x687cU))
#define local_50 (*(uint *)(frame + 16))
#define local_24 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100067b0(int in_ECX)

{pf_console_present((void *)in_ECX);}


#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000687c
#undef DAT_1000a2c8
#undef DAT_1000a2cc
#undef DAT_1000a2d0
#undef DAT_1000a2d4
#undef DAT_1000a2d8
#undef DAT_1000a2dc
#undef DAT_1000a2e0
#undef DAT_1000a2e4
#undef DAT_1000a2e8
#undef DAT_1000a2ec
#undef DAT_1000a2f0
#undef DAT_1000a2f4
#undef DAT_1000a2f8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000687c
#undef local_50
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

void recovered_10006ea0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006818
#define DAT_00006818 (*(uint8_t *)(0x6818U))
#undef DAT_1000a2c4
#define DAT_1000a2c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1b56U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006818
#define _DAT_00006818 (*(code * *)(0x6818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006eb0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    if (DAT_1000a2c4 == param_1) {
      DAT_1000a2c4 = (undefined4 *)0x0;
    }
    param_1[0x11] = 0;
    recovered_10005150((void *)param_1[0x10]);
    param_1[0xc] = 0;
    recovered_10005150((void *)param_1[0xb]);
    recovered_10005150((void *)*param_1);
    recovered_10005150(param_1);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x1b < _DAT_00006808 && (_DAT_00006818 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10006f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_00006818)();
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006818
#undef DAT_1000a2c4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006818

#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef DAT_10008f8c
#define DAT_10008f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81eU)))
#undef LAB_1000702f
#define LAB_1000702f (*(uint8_t *)(0x1000702fU))
#undef PTR_recovered_10005090_1000a004
#define PTR_recovered_10005090_1000a004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1896U)))
#define local_54 (*(undefined4 *)(frame + 172))
#define local_50 (*(undefined4 *)(frame + 176))
#define local_3c (*(undefined * *)(frame + 196))
#define local_38 (*(undefined * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_30 (*(undefined1 * *)(frame + 208))
#define local_2c (*(undefined1 * *)(frame + 212))
#define local_20 (*(void * *)(frame + 224))
#define local_1c (*(undefined1 * *)(frame + 228))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_18 (*(int *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f50
 */

void * recovered_10006f50(undefined4 *param_1)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_1c = (undefined1 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_3c = PTR_recovered_10005090_1000a004;
  local_38 = &DAT_10008f8c;
  local_30 = &LAB_1000702f;
  recovered_10005550(&local_54);
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = 1;
  }
  else {
    puVar3 = &DAT_10008e24;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*param_1;
    }
    local_50 = 0xffffffff;
    recovered_10008220((int *)&local_1c,(int)puVar3,param_1[1]);
    iVar2 = local_18 + 1;
  }
  local_50 = 1;
  local_20 = recovered_10005120(iVar2);
  puVar3 = &DAT_10008e24;
  if (local_1c != (undefined1 *)0x0) {
    puVar3 = local_1c;
  }
  local_50 = 2;
  recovered_10001010(local_20,puVar3,local_18 + 1);
  pvVar1 = local_20;
  recovered_10005150(local_1c);
  recovered_10005570(&local_54);
  return pvVar1;
}

#undef DAT_10008e24
#undef DAT_10008f8c
#undef LAB_1000702f
#undef PTR_recovered_10005090_1000a004
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef auStackY_ec
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007060
 */

void recovered_10007060(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070a0
 */

void recovered_100070a0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0xc) = param_2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = param_2 + -1;
  if (iVar2 <= param_2 + -1) {
    iVar3 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x20) = iVar4;
  iVar2 = param_3 + -1;
  if (iVar1 <= param_3 + -1) {
    iVar2 = iVar1;
  }
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x24) = iVar3;
  recovered_10006490(param_1);
  return;
}


#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007110
 */

void recovered_10007110(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = &DAT_10008e24;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar3 = 0xffffffff;
  do {
    iVar1 = uVar3 + 1;
    uVar3 = uVar3 + 1;
  } while (puVar2[iVar1] != '\0');
  recovered_10008220(param_1,(int)puVar2,uVar3);
  return;
}

#undef DAT_10008e24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007150
 */

void recovered_10007150(int param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar1 = (undefined1 *)param_2[2], puVar1 == (undefined1 *)0x0)) ||
      (iVar2 = *param_2, iVar2 < 1)) || (iVar3 = param_2[1], iVar3 < 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  recovered_10008660((int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c),puVar1,
                     puVar1 + iVar2 * iVar3 * 4);
  *(int *)(param_1 + 0x38) = *param_2;
  *(int *)(param_1 + 0x3c) = param_2[1];
  recovered_10006490(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071c0
 */

void recovered_100071c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100071f0();
  recovered_10006490(param_1);
  recovered_100067b0(param_1);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef DAT_00006880
#define DAT_00006880 (*(uint8_t *)(0x6880U))
#undef DAT_1000a078
#define DAT_1000a078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190aU)))
#undef DAT_1000a079
#define DAT_1000a079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190bU)))
#undef DAT_1000a07a
#define DAT_1000a07a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190cU)))
#undef DAT_1000a07b
#define DAT_1000a07b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190dU)))
#undef DAT_1000a07c
#define DAT_1000a07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190eU)))
#undef DAT_1000a07d
#define DAT_1000a07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190fU)))
#undef DAT_1000a07e
#define DAT_1000a07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1910U)))
#undef DAT_1000a07f
#define DAT_1000a07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1911U)))
#undef DAT_1000a080
#define DAT_1000a080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1912U)))
#undef DAT_1000a081
#define DAT_1000a081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1913U)))
#undef DAT_1000a082
#define DAT_1000a082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1914U)))
#undef DAT_1000a083
#define DAT_1000a083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1915U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1916U)))
#undef DAT_1000a085
#define DAT_1000a085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1917U)))
#undef DAT_1000a086
#define DAT_1000a086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1918U)))
#undef DAT_1000a087
#define DAT_1000a087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1919U)))
#undef DAT_1000a088
#define DAT_1000a088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191aU)))
#undef DAT_1000a089
#define DAT_1000a089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191bU)))
#undef DAT_1000a08a
#define DAT_1000a08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191cU)))
#undef DAT_1000a08b
#define DAT_1000a08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191dU)))
#undef DAT_1000a08c
#define DAT_1000a08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191eU)))
#undef DAT_1000a08d
#define DAT_1000a08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191fU)))
#undef DAT_1000a08e
#define DAT_1000a08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1920U)))
#undef DAT_1000a08f
#define DAT_1000a08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1921U)))
#undef DAT_1000a090
#define DAT_1000a090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1922U)))
#undef DAT_1000a091
#define DAT_1000a091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1923U)))
#undef DAT_1000a092
#define DAT_1000a092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1924U)))
#undef DAT_1000a093
#define DAT_1000a093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1925U)))
#undef DAT_1000a094
#define DAT_1000a094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1926U)))
#undef DAT_1000a095
#define DAT_1000a095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1927U)))
#undef DAT_1000a096
#define DAT_1000a096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1928U)))
#undef DAT_1000a097
#define DAT_1000a097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1929U)))
#undef DAT_1000a098
#define DAT_1000a098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192aU)))
#undef DAT_1000a099
#define DAT_1000a099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192bU)))
#undef DAT_1000a09a
#define DAT_1000a09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192cU)))
#undef DAT_1000a09b
#define DAT_1000a09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192dU)))
#undef DAT_1000a09c
#define DAT_1000a09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192eU)))
#undef DAT_1000a09d
#define DAT_1000a09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192fU)))
#undef DAT_1000a09e
#define DAT_1000a09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1930U)))
#undef DAT_1000a09f
#define DAT_1000a09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1931U)))
#undef DAT_1000a0a0
#define DAT_1000a0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1932U)))
#undef DAT_1000a0a1
#define DAT_1000a0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1933U)))
#undef DAT_1000a0a2
#define DAT_1000a0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1934U)))
#undef DAT_1000a0a3
#define DAT_1000a0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1935U)))
#undef DAT_1000a0a4
#define DAT_1000a0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1936U)))
#undef DAT_1000a0a5
#define DAT_1000a0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1937U)))
#undef DAT_1000a0a6
#define DAT_1000a0a6 (*(char *)(((uintptr_t)pf_module_state + 0x1938U)))
#undef DAT_1000a2c4
#define DAT_1000a2c4 (*(int *)(((uintptr_t)pf_module_state + 0x1b56U)))
#undef DAT_1000a2fc
#define DAT_1000a2fc (*(int *)(((uintptr_t)pf_module_state + 0x1b8eU)))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x892U)))
#undef PTR_DAT_10009068
#define PTR_DAT_10009068 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8faU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(code * *)(0x682cU))
#undef _DAT_00006880
#define _DAT_00006880 (*(code * *)(0x6880U))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100071f0(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  longlong lVar2;
  char cVar3;
  char cVar5;
  uint uVar4;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;

  if (DAT_1000a2c4 == 0) {
    DAT_1000a078 = 0;
    DAT_1000a079 = 0;
    DAT_1000a07a = 0;
    DAT_1000a07b = 0;
    DAT_1000a07c = 0;
    DAT_1000a07d = 0;
    DAT_1000a07e = 0;
    DAT_1000a07f = 0;
    DAT_1000a080 = 0;
    DAT_1000a081 = 0;
    DAT_1000a082 = 0;
    DAT_1000a083 = 0;
    DAT_1000a084 = 0;
    DAT_1000a085 = 0;
    DAT_1000a086 = 0;
    DAT_1000a087 = 0;
    DAT_1000a088 = 0;
    DAT_1000a089 = 0;
    DAT_1000a08a = 0;
    DAT_1000a08b = 0;
    DAT_1000a08c = 0;
    DAT_1000a08d = 0;
    DAT_1000a08e = 0;
    DAT_1000a08f = 0;
    DAT_1000a090 = 0;
    DAT_1000a091 = 0;
    DAT_1000a092 = 0;
    DAT_1000a093 = 0;
    DAT_1000a094 = 0;
    DAT_1000a095 = 0;
    DAT_1000a096 = 0;
    DAT_1000a097 = 0;
    DAT_1000a098 = 0;
    DAT_1000a099 = 0;
    DAT_1000a09a = 0;
    DAT_1000a09b = 0;
    DAT_1000a09c = 0;
    DAT_1000a09d = 0;
    DAT_1000a09e = 0;
    DAT_1000a09f = 0;
    DAT_1000a0a0 = 0;
    DAT_1000a0a1 = 0;
    DAT_1000a0a2 = 0;
    DAT_1000a0a3 = 0;
    DAT_1000a0a4 = 0;
    DAT_1000a0a5 = 0;
    DAT_1000a0a6 = 0;
    return;
  }
  iVar10 = DAT_1000a2c4;
  if (_DAT_00006800 == 0x50414d57) {
    do {
      if ((((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0x30)) ||
         (_DAT_0000682c == (code *)0x0)) break;
      uVar12 = (*_DAT_0000682c)();
      iVar10 = DAT_1000a2c4;
      if (uVar12 == 0) break;
      cVar3 = (char)uVar12;
      cVar5 = (char)(uVar12 >> 8);
      if (cVar3 == '\0') {
        if (DAT_1000a2c4 == 0) goto LAB_10007370;
        switch((uintptr_t)(cVar5)) {
        case '\x01':
        case 'H':
switchD_1000755a_caseD_48:
          DAT_1000a079 = 1;
          break;
        case '\x02':
        case 'P':
switchD_1000755a_caseD_50:
          DAT_1000a07a = 1;
          break;
        case '\x03':
        case 'M':
switchD_1000755a_caseD_4d:
          DAT_1000a07c = 1;
          break;
        case '\x04':
        case 'K':
switchD_1000755a_caseD_4b:
          DAT_1000a07b = 1;
          break;
        default:
          break;
        case '\x0e':
switchD_1000755a_caseD_e:
          DAT_1000a0a3 = 1;
          break;
        case '\x17':
switchD_10007415_caseD_17:
          *(undefined1 *)(iVar10 + 0x1c) = 1;
          break;
        case '\x1c':
switchD_1000755a_caseD_1c:
          DAT_1000a078 = 1;
          break;
        case 'S':
switchD_1000755a_caseD_53:
          DAT_1000a0a4 = 1;
        }
      }
      else if (DAT_1000a2c4 == 0) {
LAB_10007370:
        iVar10 = 0;
      }
      else {
        if (DAT_1000a2fc == 2) {
          DAT_1000a2fc = 0;
          switch((uintptr_t)(uVar12 & 0xff)) {
          case 0x41:
            DAT_1000a079 = 1;
            break;
          case 0x42:
            DAT_1000a07a = 1;
            break;
          case 0x43:
            DAT_1000a07c = 1;
            break;
          case 0x44:
            DAT_1000a07b = 1;
          }
        }
        else if (DAT_1000a2fc == 1) {
          DAT_1000a2fc = (uint)(cVar3 == '[') * 2;
        }
        else if (cVar3 == '\x1b') {
          DAT_1000a2fc = 1;
        }
        else if ((byte)(cVar3 - 0x20U) < 0x5f) {
          DAT_1000a0a6 = cVar3;
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            **(undefined1 **)
              ((int)&PTR_DAT_10009000 + ((int)(uVar12 * 0x1000000 + -0x61000000) >> 0x16)) = 1;
          }
          else {
            bVar6 = cVar3 + 0xbf;
            if (bVar6 < 0x1a) {
              if (bVar6 < 0x1a) {
                *(&PTR_DAT_10009000)[bVar6] = 1;
              }
            }
            else {
              if (9 < (byte)(cVar3 - 0x30U)) goto LAB_100074f4;
              *(&PTR_DAT_10009068)[uVar12 + 0xd0 & 0xff] = 1;
            }
          }
        }
        else {
LAB_100074f4:
          switch((uintptr_t)(uVar12 & 0xff)) {
          case 3:
          case 4:
            *(undefined1 *)(DAT_1000a2c4 + 0x1c) = 1;
            break;
          case 5:
          case 6:
          case 7:
          case 9:
          case 0xb:
          case 0xc:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
            break;
          case 8:
switchD_100074ff_caseD_8:
            DAT_1000a0a3 = 1;
            break;
          case 10:
          case 0xd:
            DAT_1000a078 = 1;
            break;
          case 0x20:
            DAT_1000a0a5 = 1;
            break;
          case 0x2d:
            DAT_1000a0a1 = 1;
            break;
          case 0x2e:
            DAT_1000a0a2 = 1;
            break;
          default:
            if ((uVar12 & 0xff) == 0x7f) goto switchD_100074ff_caseD_8;
          }
        }
        if ((uVar12 & 0xffff) != 0x11b) {
          switch((uintptr_t)(cVar5)) {
          case '\x0e':
            goto switchD_1000755a_caseD_e;
          case '\x0f':
          case '\x10':
          case '\x11':
          case '\x12':
          case '\x13':
          case '\x14':
          case '\x15':
          case '\x16':
          case '\x17':
          case '\x18':
          case '\x19':
          case '\x1a':
          case '\x1b':
          case '\x1d':
          case '\x1e':
          case '\x1f':
          case ' ':
          case '!':
          case '\"':
          case '#':
          case '$':
          case '%':
          case '&':
          case '\'':
          case '(':
          case ')':
          case '*':
          case '+':
          case ',':
          case '-':
          case '.':
          case '/':
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case ';':
          case '<':
          case '=':
          case '>':
          case '?':
          case '@':
          case 'A':
          case 'B':
          case 'C':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'I':
          case 'J':
          case 'L':
          case 'N':
          case 'O':
          case 'Q':
          case 'R':
            break;
          case '\x1c':
            goto switchD_1000755a_caseD_1c;
          case 'H':
            goto switchD_1000755a_caseD_48;
          case 'K':
            goto switchD_1000755a_caseD_4b;
          case 'M':
            goto switchD_1000755a_caseD_4d;
          case 'P':
            goto switchD_1000755a_caseD_50;
          case 'S':
            goto switchD_1000755a_caseD_53;
          default:
            if (cVar5 == '\x01') goto switchD_10007415_caseD_17;
          }
        }
      }
    } while (_DAT_00006800 == 0x50414d57);
    if (iVar10 == 0) {
      return;
    }
  }
  iVar9 = *(int *)(iVar10 + 0x14);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar1 = *(int *)(iVar10 + 0x20);
  iVar7 = iVar9 + -1;
  if (iVar1 <= iVar9 + -1) {
    iVar7 = iVar1;
  }
  iVar9 = *(int *)(iVar10 + 0x18);
  iVar11 = 0;
  if (-1 < iVar1) {
    iVar11 = iVar7;
  }
  *(int *)(iVar10 + 0x20) = iVar11;
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  iVar1 = *(int *)(iVar10 + 0x24);
  iVar7 = iVar9 + -1;
  if (iVar1 <= iVar9 + -1) {
    iVar7 = iVar1;
  }
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar7;
  }
  *(int *)(iVar10 + 0x24) = iVar9;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (_DAT_00006800 != 0x50414d57) {
    return;
  }
  if (_DAT_00006804 == 0) {
    return;
  }
  if (_DAT_00006808 < 0xc) {
    return;
  }
  if (_DAT_00006808 < 0x84) {
    return;
  }
  if (_DAT_00006880 == (code *)0x0) {
    return;
  }
  iVar9 = (*_DAT_00006880)(&local_30);
  if (iVar9 == 0) {
    return;
  }
  if ((local_30 & 1) == 0) {
    if ((local_30 & 2) == 0) {
      uVar12 = *(uint *)(iVar10 + 0x20);
      uVar8 = *(uint *)(iVar10 + 0x24);
    }
    else {
      uVar12 = *(uint *)(iVar10 + 0x20);
      uVar8 = *(uint *)(iVar10 + 0x24);
      if (local_20 != 0 || local_1c != 0) {
        uVar12 = uVar12 + local_20;
        uVar8 = *(uint *)(iVar10 + 0x24) + local_1c;
      }
    }
    goto LAB_10007763;
  }
  iVar9 = *(int *)(iVar10 + 0x14);
  uVar12 = 0;
  if (1 < iVar9) {
    if (local_18 == 0) {
      uVar8 = iVar9 - 1U;
      if (local_28 <= iVar9 - 1U) {
        uVar8 = local_28;
      }
      uVar12 = 0;
      if ((int)local_28 < 0) goto LAB_10007724;
    }
    else {
      uVar12 = local_28;
      if ((int)local_28 < 1) {
        uVar12 = 0;
      }
      if (local_18 <= uVar12) {
        uVar12 = local_18;
      }
      lVar2 = (ulonglong)(iVar9 - 1) * (ulonglong)uVar12;
      uVar14 = recovered_10000bc0((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_18,0);
      uVar8 = (uint)uVar14;
    }
    uVar12 = uVar8;
  }
LAB_10007724:
  iVar9 = *(int *)(iVar10 + 0x18);
  uVar8 = 0;
  if (1 < iVar9) {
    if (local_14 == 0) {
      uVar4 = iVar9 - 1U;
      if (local_24 <= iVar9 - 1U) {
        uVar4 = local_24;
      }
      uVar8 = 0;
      if ((int)local_24 < 0) goto LAB_10007763;
    }
    else {
      uVar8 = local_24;
      if ((int)local_24 < 1) {
        uVar8 = 0;
      }
      if (local_14 <= uVar8) {
        uVar8 = local_14;
      }
      lVar2 = (ulonglong)(iVar9 - 1) * (ulonglong)uVar8;
      uVar14 = recovered_10000bc0((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),local_14,0);
      uVar4 = (uint)uVar14;
    }
    uVar8 = uVar4;
  }
LAB_10007763:
  *(byte *)(iVar10 + 0x28) = (byte)local_2c & 1;
  *(byte *)(iVar10 + 0x29) = (byte)local_2c >> 1 & 1;
  *(byte *)(iVar10 + 0x2a) = (byte)local_2c >> 2 & 1;
  iVar9 = *(int *)(iVar10 + 0x14);
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  uVar4 = iVar9 - 1U;
  if ((int)uVar12 <= (int)(iVar9 - 1U)) {
    uVar4 = uVar12;
  }
  iVar9 = *(int *)(iVar10 + 0x18);
  uVar13 = 0;
  if (-1 < (int)uVar12) {
    uVar13 = uVar4;
  }
  *(uint *)(iVar10 + 0x20) = uVar13;
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  uVar12 = iVar9 - 1U;
  if ((int)uVar8 <= (int)(iVar9 - 1U)) {
    uVar12 = uVar8;
  }
  uVar4 = 0;
  if (-1 < (int)uVar8) {
    uVar4 = uVar12;
  }
  *(uint *)(iVar10 + 0x24) = uVar4;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef DAT_00006880
#undef DAT_1000a078
#undef DAT_1000a079
#undef DAT_1000a07a
#undef DAT_1000a07b
#undef DAT_1000a07c
#undef DAT_1000a07d
#undef DAT_1000a07e
#undef DAT_1000a07f
#undef DAT_1000a080
#undef DAT_1000a081
#undef DAT_1000a082
#undef DAT_1000a083
#undef DAT_1000a084
#undef DAT_1000a085
#undef DAT_1000a086
#undef DAT_1000a087
#undef DAT_1000a088
#undef DAT_1000a089
#undef DAT_1000a08a
#undef DAT_1000a08b
#undef DAT_1000a08c
#undef DAT_1000a08d
#undef DAT_1000a08e
#undef DAT_1000a08f
#undef DAT_1000a090
#undef DAT_1000a091
#undef DAT_1000a092
#undef DAT_1000a093
#undef DAT_1000a094
#undef DAT_1000a095
#undef DAT_1000a096
#undef DAT_1000a097
#undef DAT_1000a098
#undef DAT_1000a099
#undef DAT_1000a09a
#undef DAT_1000a09b
#undef DAT_1000a09c
#undef DAT_1000a09d
#undef DAT_1000a09e
#undef DAT_1000a09f
#undef DAT_1000a0a0
#undef DAT_1000a0a1
#undef DAT_1000a0a2
#undef DAT_1000a0a3
#undef DAT_1000a0a4
#undef DAT_1000a0a5
#undef DAT_1000a0a6
#undef DAT_1000a2c4
#undef DAT_1000a2fc
#undef PTR_DAT_10009000
#undef PTR_DAT_10009068
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c
#undef _DAT_00006880
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d0
 */

undefined1 recovered_100077d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 1;
  }
  return *(undefined1 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f0
 */

void recovered_100077f0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1d) = param_2;
    *(undefined1 *)(param_1 + 0x1e) = param_3;
    *(undefined1 *)(param_1 + 0x1f) = param_4;
    if (*(int *)(param_1 + 0x30) == 0) {
      recovered_10006490(param_1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007820
 */

int * recovered_10007820(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  void *destination;
  ulong count;
  int *piVar3;

  piVar3 = (int *)0x0;
  if (param_1 != 0) {
    recovered_10006490(param_1);
    if (*(int *)(param_1 + 0x44) != 0) {
      piVar3 = recovered_100050f0(0x18);
      iVar1 = *(int *)(param_1 + 0xc);
      *piVar3 = iVar1;
      iVar2 = *(int *)(param_1 + 0x10);
      piVar3[1] = iVar2;
      count = iVar1 * iVar2 * 4;
      destination = recovered_10005120(count);
      piVar3[2] = (int)destination;
      recovered_10001010(destination,*(void **)(param_1 + 0x40),count);
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a0
 */

void recovered_100078a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078e0
 */

undefined1 recovered_100078e0(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x28 + param_2);
  }
  return 0;
}


#undef DAT_1000a078
#define DAT_1000a078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190aU)))
#undef DAT_1000a079
#define DAT_1000a079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190bU)))
#undef DAT_1000a07a
#define DAT_1000a07a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190cU)))
#undef DAT_1000a07b
#define DAT_1000a07b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190dU)))
#undef DAT_1000a07c
#define DAT_1000a07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190eU)))
#undef DAT_1000a07d
#define DAT_1000a07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x190fU)))
#undef DAT_1000a07e
#define DAT_1000a07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1910U)))
#undef DAT_1000a07f
#define DAT_1000a07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1911U)))
#undef DAT_1000a080
#define DAT_1000a080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1912U)))
#undef DAT_1000a081
#define DAT_1000a081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1913U)))
#undef DAT_1000a082
#define DAT_1000a082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1914U)))
#undef DAT_1000a083
#define DAT_1000a083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1915U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1916U)))
#undef DAT_1000a085
#define DAT_1000a085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1917U)))
#undef DAT_1000a086
#define DAT_1000a086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1918U)))
#undef DAT_1000a087
#define DAT_1000a087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1919U)))
#undef DAT_1000a088
#define DAT_1000a088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191aU)))
#undef DAT_1000a089
#define DAT_1000a089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191bU)))
#undef DAT_1000a08a
#define DAT_1000a08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191cU)))
#undef DAT_1000a08b
#define DAT_1000a08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191dU)))
#undef DAT_1000a08c
#define DAT_1000a08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191eU)))
#undef DAT_1000a08d
#define DAT_1000a08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x191fU)))
#undef DAT_1000a08e
#define DAT_1000a08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1920U)))
#undef DAT_1000a08f
#define DAT_1000a08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1921U)))
#undef DAT_1000a090
#define DAT_1000a090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1922U)))
#undef DAT_1000a091
#define DAT_1000a091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1923U)))
#undef DAT_1000a092
#define DAT_1000a092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1924U)))
#undef DAT_1000a093
#define DAT_1000a093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1925U)))
#undef DAT_1000a094
#define DAT_1000a094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1926U)))
#undef DAT_1000a095
#define DAT_1000a095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1927U)))
#undef DAT_1000a096
#define DAT_1000a096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1928U)))
#undef DAT_1000a097
#define DAT_1000a097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1929U)))
#undef DAT_1000a098
#define DAT_1000a098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192aU)))
#undef DAT_1000a099
#define DAT_1000a099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192bU)))
#undef DAT_1000a09a
#define DAT_1000a09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192cU)))
#undef DAT_1000a09b
#define DAT_1000a09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192dU)))
#undef DAT_1000a09c
#define DAT_1000a09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192eU)))
#undef DAT_1000a09d
#define DAT_1000a09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x192fU)))
#undef DAT_1000a09e
#define DAT_1000a09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1930U)))
#undef DAT_1000a09f
#define DAT_1000a09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1931U)))
#undef DAT_1000a0a0
#define DAT_1000a0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1932U)))
#undef DAT_1000a0a1
#define DAT_1000a0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1933U)))
#undef DAT_1000a0a2
#define DAT_1000a0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1934U)))
#undef DAT_1000a0a3
#define DAT_1000a0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1935U)))
#undef DAT_1000a0a4
#define DAT_1000a0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1936U)))
#undef DAT_1000a0a5
#define DAT_1000a0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1937U)))
#undef DAT_1000a0a6
#define DAT_1000a0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1938U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007910
 */

void recovered_10007910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000a078 = 0;
  DAT_1000a079 = 0;
  DAT_1000a07a = 0;
  DAT_1000a07b = 0;
  DAT_1000a07c = 0;
  DAT_1000a07d = 0;
  DAT_1000a07e = 0;
  DAT_1000a07f = 0;
  DAT_1000a080 = 0;
  DAT_1000a081 = 0;
  DAT_1000a082 = 0;
  DAT_1000a083 = 0;
  DAT_1000a084 = 0;
  DAT_1000a085 = 0;
  DAT_1000a086 = 0;
  DAT_1000a087 = 0;
  DAT_1000a088 = 0;
  DAT_1000a089 = 0;
  DAT_1000a08a = 0;
  DAT_1000a08b = 0;
  DAT_1000a08c = 0;
  DAT_1000a08d = 0;
  DAT_1000a08e = 0;
  DAT_1000a08f = 0;
  DAT_1000a090 = 0;
  DAT_1000a091 = 0;
  DAT_1000a092 = 0;
  DAT_1000a093 = 0;
  DAT_1000a094 = 0;
  DAT_1000a095 = 0;
  DAT_1000a096 = 0;
  DAT_1000a097 = 0;
  DAT_1000a098 = 0;
  DAT_1000a099 = 0;
  DAT_1000a09a = 0;
  DAT_1000a09b = 0;
  DAT_1000a09c = 0;
  DAT_1000a09d = 0;
  DAT_1000a09e = 0;
  DAT_1000a09f = 0;
  DAT_1000a0a0 = 0;
  DAT_1000a0a1 = 0;
  DAT_1000a0a2 = 0;
  DAT_1000a0a3 = 0;
  DAT_1000a0a4 = 0;
  DAT_1000a0a5 = 0;
  DAT_1000a0a6 = 0;
  return;
}

#undef DAT_1000a078
#undef DAT_1000a079
#undef DAT_1000a07a
#undef DAT_1000a07b
#undef DAT_1000a07c
#undef DAT_1000a07d
#undef DAT_1000a07e
#undef DAT_1000a07f
#undef DAT_1000a080
#undef DAT_1000a081
#undef DAT_1000a082
#undef DAT_1000a083
#undef DAT_1000a084
#undef DAT_1000a085
#undef DAT_1000a086
#undef DAT_1000a087
#undef DAT_1000a088
#undef DAT_1000a089
#undef DAT_1000a08a
#undef DAT_1000a08b
#undef DAT_1000a08c
#undef DAT_1000a08d
#undef DAT_1000a08e
#undef DAT_1000a08f
#undef DAT_1000a090
#undef DAT_1000a091
#undef DAT_1000a092
#undef DAT_1000a093
#undef DAT_1000a094
#undef DAT_1000a095
#undef DAT_1000a096
#undef DAT_1000a097
#undef DAT_1000a098
#undef DAT_1000a099
#undef DAT_1000a09a
#undef DAT_1000a09b
#undef DAT_1000a09c
#undef DAT_1000a09d
#undef DAT_1000a09e
#undef DAT_1000a09f
#undef DAT_1000a0a0
#undef DAT_1000a0a1
#undef DAT_1000a0a2
#undef DAT_1000a0a3
#undef DAT_1000a0a4
#undef DAT_1000a0a5
#undef DAT_1000a0a6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a60
 */

void recovered_10007a60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a70
 */

void recovered_10007a70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a80
 */

undefined4 recovered_10007a80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a90
 */

void recovered_10007a90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007aa0
 */

undefined4 recovered_10007aa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_00006858
#define DAT_00006858 (*(uint8_t *)(0x6858U))
#undef DAT_10008e22
#define DAT_10008e22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b4U)))
#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef DAT_10008f37
#define DAT_10008f37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c9U)))
#undef DAT_10008f94
#define DAT_10008f94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x826U)))
#undef LAB_100081b3
#define LAB_100081b3 (*(uint8_t *)(0x100081b3U))
#undef PTR_recovered_10005090_1000a004
#define PTR_recovered_10005090_1000a004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1896U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006858
#define _DAT_00006858 (*(code * *)(0x6858U))
#define local_84 (*(undefined4 *)(frame + 188))
#define local_80 (*(undefined4 *)(frame + 192))
#define local_6c (*(undefined * *)(frame + 212))
#define local_68 (*(undefined * *)(frame + 216))
#define local_64 (*(undefined1 * *)(frame + 220))
#define local_60 (*(undefined1 * *)(frame + 224))
#define local_5c (*(undefined1 * *)(frame + 228))
#define local_4c (*(char * *)(frame + 244))
#define local_48 (*(uint *)(frame + 248))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 252))
#define local_40 (*(char * *)(frame + 256))
#define local_3c (*(uint *)(frame + 260))
#define local_38 (*(uint *)(frame + 264))
#define local_34 (*(void * *)(frame + 268))
#define local_30 (*(uint *)(frame + 272))
#define local_2c (*(undefined4 *)(frame + 276))
#define local_28 (*(uint *)(frame + 280))
#define local_24 (*(uint *)(frame + 284))
#define local_20 (*(char * *)(frame + 288))
#define local_1c (*(uint *)(frame + 292))
#define local_18 (*(uint *)(frame + 296))
#define local_14 (*(undefined4 *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

/* WARNING: Removing unreachable block (ram,0x100080ec) */
/* WARNING: Removing unreachable block (ram,0x100080d1) */
/* WARNING: Removing unreachable block (ram,0x100080df) */
/* WARNING: Removing unreachable block (ram,0x100080f9) */
/* WARNING: Removing unreachable block (ram,0x1000813a) */
/* WARNING: Removing unreachable block (ram,0x10008143) */
/* WARNING: Removing unreachable block (ram,0x1000814d) */
/* WARNING: Removing unreachable block (ram,0x10008157) */
/* WARNING: Removing unreachable block (ram,0x10008160) */
/* WARNING: Removing unreachable block (ram,0x10008172) */
/* WARNING: Removing unreachable block (ram,0x10008179) */
/* WARNING: Removing unreachable block (ram,0x10008181) */
/* WARNING: Removing unreachable block (ram,0x1000818b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007ab0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint unaff_EBX = 0;
  uint uVar7;
  uint uVar8;
  int iVar9;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 320) + -4);
  local_5c = auStackY_12c + 0x80;
  local_6c = PTR_recovered_10005090_1000a004;
  local_68 = &DAT_10008f94;
  local_60 = &LAB_100081b3;
  recovered_10005550(&local_84);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) goto LAB_1000819e;
  local_4c = (char *)0x0;
  local_48 = 0;
  local_44 = 0;
  uVar1 = 0xffffffff;
  do {
    pcVar3 = (char *)(param_1 + 1 + uVar1);
    uVar1 = uVar1 + 1;
  } while (*pcVar3 != '\0');
  local_80 = 0xffffffff;
  recovered_10008220((int *)&local_4c,param_1,uVar1);
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  uVar1 = 0;
  if (local_48 == 0) {
    local_28 = 0;
  }
  else {
    pcVar3 = &DAT_10008e24;
    if (local_4c != (char *)0x0) {
      pcVar3 = local_4c;
    }
    local_28 = CONCAT31((int3)((uint)local_4c >> 8),*pcVar3 == '/');
  }
  do {
    uVar4 = local_48 - uVar1;
    if (local_48 < uVar1 || uVar4 == 0) break;
    pcVar3 = &DAT_10008e24;
    if (local_4c != (char *)0x0) {
      pcVar3 = local_4c;
    }
    uVar7 = uVar1;
    do {
      if (pcVar3[uVar7] == '/') {
        if (uVar7 != 0xffffffff) {
          local_24 = 0;
          local_14 = uVar7;
          goto LAB_10007c6c;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (local_48 != uVar7);
    local_14 = 0xffffffff;
    unaff_EBX = CONCAT31((int3)(unaff_EBX >> 8),1);
    uVar7 = local_48;
    local_24 = unaff_EBX;
LAB_10007c6c:
    uVar7 = uVar7 - uVar1;
    uVar8 = uVar4;
    if (uVar7 <= uVar4) {
      uVar8 = uVar7;
    }
    if (uVar7 != 0xffffffff) {
      uVar4 = uVar8;
    }
    local_20 = (char *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_80 = 1;
    recovered_10008220((int *)&local_20,(int)(pcVar3 + uVar1),uVar4);
    uVar1 = local_14;
    if (local_1c != 0) {
      pcVar3 = &DAT_10008e24;
      if (local_20 != (char *)0x0) {
        pcVar3 = local_20;
      }
      if (local_1c == 1) {
        if (*pcVar3 == '.') goto LAB_10007bec;
      }
      else if (((local_1c == 2) && (*pcVar3 == '.')) && (pcVar3[1] == '.')) {
        if (local_30 != 0) {
          pcVar3 = *(char **)((int)local_34 + local_30 * 0xc + -0xc);
          pcVar5 = &DAT_10008e24;
          if (pcVar3 != (char *)0x0) {
            pcVar5 = pcVar3;
          }
          if (((*(int *)((int)local_34 + local_30 * 0xc + -8) != 2) || (*pcVar5 != '.')) ||
             (pcVar5[1] != '.')) {
            recovered_10005150(pcVar3);
            local_30 = local_30 - 1;
            goto LAB_10007bec;
          }
        }
        if ((char)local_28 != '\0') goto LAB_10007bec;
      }
      local_80 = 2;
      recovered_100083c0((int *)&local_34,&local_20);
      uVar1 = local_14;
    }
LAB_10007bec:
    uVar1 = uVar1 + 1;
    recovered_10005150(local_20);
  } while ((char)local_24 == '\0');
  puVar2 = &DAT_10008f37;
  if ((char)local_28 == '\0') {
    puVar2 = &DAT_10008e24;
  }
  local_20 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = 0xffffffff;
  do {
    iVar9 = uVar1 + 1;
    uVar1 = uVar1 + 1;
  } while (puVar2[iVar9] != '\0');
  local_80 = 3;
  recovered_10008220((int *)&local_20,(int)puVar2,uVar1);
  if (local_30 != 0) {
    uVar1 = 0;
    do {
      local_14 = uVar1;
      if (uVar1 != 0 || (local_28 & 1) != 0) {
        if (local_1c == local_18) {
          uVar1 = 0x10;
          if (local_1c != 0) {
            uVar1 = local_1c * 2;
          }
          if (uVar1 <= local_1c) goto LAB_10007e30;
          local_80 = 4;
          local_24 = uVar1;
          pcVar3 = recovered_100050f0(uVar1 | 1);
          *pcVar3 = '\0';
          if (local_1c != 0) {
            uVar1 = 0;
            do {
              pcVar3[uVar1] = local_20[uVar1];
              uVar1 = uVar1 + 1;
            } while (local_1c != uVar1);
          }
          pcVar3[local_1c] = '\0';
          recovered_10005150(local_20);
          local_18 = local_24;
LAB_10007e54:
          local_20 = pcVar3;
        }
        else {
LAB_10007e30:
          if (local_20 == (char *)0x0) {
            local_80 = 5;
            pcVar3 = recovered_100050f0(1);
            *pcVar3 = '\0';
            local_18 = 0;
            goto LAB_10007e54;
          }
        }
        local_20[local_1c] = '/';
        local_20[local_1c + 1] = '\0';
        local_1c = local_1c + 1;
      }
      puVar2 = *(undefined1 **)((int)local_34 + local_14 * 0xc);
      puVar6 = &DAT_10008e24;
      if (puVar2 != (undefined1 *)0x0) {
        puVar6 = puVar2;
      }
      local_80 = 6;
      recovered_100084e0((int *)&local_20,(int)puVar6,*(uint *)((int)local_34 + local_14 * 0xc + 4))
      ;
      uVar1 = local_14 + 1;
    } while (uVar1 < local_30);
  }
  if (local_1c == 0) {
    puVar2 = &DAT_10008f37;
    if ((char)local_28 == '\0') {
      puVar2 = &DAT_10008e22;
    }
    local_40 = (char *)0x0;
    local_3c = 0;
    local_38 = 0;
    uVar1 = 0xffffffff;
    do {
      iVar9 = uVar1 + 1;
      uVar1 = uVar1 + 1;
    } while (puVar2[iVar9] != '\0');
    local_80 = 7;
    recovered_10008220((int *)&local_40,(int)puVar2,uVar1);
  }
  else {
    local_40 = local_20;
    local_3c = local_1c;
    local_38 = local_18;
    local_20 = (char *)0x0;
    local_1c = 0;
    local_18 = 0;
  }
  recovered_10005150(local_20);
  if (local_30 != 0) {
    iVar9 = local_30 * 0xc;
    uVar1 = local_30;
    do {
      iVar9 = iVar9 + -0xc;
      recovered_10005150(*(void **)((int)local_34 + iVar9));
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  local_30 = 0;
  recovered_10005150(local_34);
  recovered_10005150(local_4c);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 && ((0x5b < _DAT_00006808 && (_DAT_00006858 != (code *)0x0)))))) {
    local_80 = 8;
    iVar9 = (*_DAT_00006858)();
    if (iVar9 == 0) goto LAB_10007ff0;
LAB_100080b0:
    local_14 = 0;
  }
  else {
LAB_10007ff0:
    uVar1 = 0xffffffff;
    do {
      pcVar3 = (char *)(param_1 + 1 + uVar1);
      uVar1 = uVar1 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = &DAT_10008e24;
    if (local_40 != (char *)0x0) {
      pcVar3 = local_40;
    }
    if (local_3c == uVar1) {
      if (local_3c != 0) {
        uVar1 = 0;
        do {
          if (pcVar3[uVar1] != *(char *)(param_1 + uVar1)) goto LAB_10008045;
          uVar1 = uVar1 + 1;
        } while (local_3c != uVar1);
      }
    }
    else {
LAB_10008045:
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x5b < _DAT_00006808 && (_DAT_00006858 != (code *)0x0)))) {
        local_80 = 9;
        iVar9 = (*_DAT_00006858)();
        if (iVar9 != 0) goto LAB_100080b0;
      }
    }
  }
  recovered_10005150(local_40);
LAB_1000819e:
  recovered_10005570(&local_84);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_00006858
#undef DAT_10008e22
#undef DAT_10008e24
#undef DAT_10008f37
#undef DAT_10008f94
#undef LAB_100081b3
#undef PTR_recovered_10005090_1000a004
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006858
#undef local_84
#undef local_80
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_4c
#undef local_48
#undef auStackY_12c
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008220
 */

void recovered_10008220(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = param_3;
  }
  puVar3 = (undefined1 *)*param_1;
  if (param_2 != 0 && puVar3 != (undefined1 *)0x0) {
    uVar4 = param_2 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = param_1[1] - uVar4;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        recovered_10008220((int *)&local_1c,(int)(puVar3 + uVar4),uVar6);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_1c;
        iVar2 = param_1[1];
        param_1[1] = local_18;
        iVar5 = param_1[2];
        param_1[2] = local_14;
        local_1c = pvVar1;
        local_18 = iVar2;
        local_14 = iVar5;
        recovered_10005150(pvVar1);
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  if (uVar6 == 0) {
    if (*param_1 == 0) {
      puVar3 = recovered_100050f0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100050f0(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      recovered_10005150(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar4 = 0;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
    param_1[1] = param_3;
    *(undefined1 *)(*param_1 + param_3) = 0;
  }
  return;
}

#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008370
 */

void recovered_10008370(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0xc;
    do {
      iVar1 = iVar1 + -0xc;
      recovered_10005150(*(void **)(*param_1 + iVar1));
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10005150((void *)*param_1);
  return;
}


#undef DAT_10008e24
#define DAT_10008e24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083c0
 */

int recovered_100083c0(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar3 = 4;
    if (uVar5 != 0) {
      uVar3 = uVar5 * 2;
    }
    if (uVar5 < uVar3) {
      pvVar2 = recovered_100050f0(uVar3 * 0xc);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 8;
        do {
          iVar1 = *param_1;
          *(undefined4 *)((int)pvVar2 + iVar6 + -8) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -4) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6) = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6) = 0;
          recovered_10005150((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10005150((void *)*param_1);
      *param_1 = (int)pvVar2;
      param_1[2] = uVar3;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  *(undefined4 *)(iVar6 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar6 + 4 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar6 + 8 + uVar5 * 0xc) = 0;
  puVar4 = &DAT_10008e24;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_2;
  }
  recovered_10008220((int *)(iVar6 + uVar5 * 0xc),(int)puVar4,param_2[1]);
  iVar6 = param_1[1];
  param_1[1] = iVar6 + 1;
  return iVar6 * 0xc + *param_1;
}

#undef DAT_10008e24

#define local_18 (*(undefined1 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e0
 */

int * recovered_100084e0(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 != 0 && param_2 != 0) {
    local_18 = (undefined1 *)*param_1;
    if (local_18 != (undefined1 *)0x0) {
      uVar6 = param_1[1];
      uVar7 = param_2 - (int)local_18;
      uVar2 = 0;
LAB_10008520:
      if (uVar7 != uVar2) goto code_r0x10008528;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_18 = recovered_100050f0(uVar2 + 1);
        *local_18 = 0;
        pvVar1 = (void *)*param_1;
        iVar4 = param_1[1];
        if (iVar4 != 0) {
          iVar5 = 0;
          do {
            local_18[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        local_18[iVar4] = 0;
        recovered_10005150(pvVar1);
        *param_1 = (int)local_18;
        param_1[2] = uVar2;
      }
      if (param_3 != 0) {
        uVar2 = param_3;
        do {
          *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar7);
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        goto LAB_10008644;
      }
      goto LAB_10008646;
    }
    uVar6 = param_1[1];
LAB_10008532:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100050f0(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      puVar3[iVar4] = 0;
      recovered_10005150(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_10008644:
    local_18 = (undefined1 *)*param_1;
LAB_10008646:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_18[iVar4] = 0;
  }
  return param_1;
code_r0x10008528:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10008532;
  goto LAB_10008520;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

int recovered_10008660(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;

  iVar5 = *param_1;
  bVar9 = iVar5 == 0;
  if (bVar9) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - iVar5;
  }
  if (param_3 != param_4) {
    uVar4 = param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    if (puVar8 < param_4 + (uVar4 - (int)param_3)) {
      puVar2 = (undefined1 *)0x4;
      if (puVar8 != (undefined1 *)0x0) {
        puVar2 = puVar8;
      }
      do {
        puVar8 = puVar2;
        puVar2 = (undefined1 *)((int)puVar8 * 2);
      } while (puVar8 < param_4 + (uVar4 - (int)param_3));
      pvVar3 = recovered_100050f0((int)puVar8);
      pvVar1 = (void *)*param_1;
      iVar5 = param_1[1];
      if (iVar5 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar5 != iVar6);
      }
      recovered_10005150(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = (int)puVar8;
      uVar4 = param_1[1];
    }
    for (; uVar7 < uVar4; uVar4 = uVar4 - 1) {
      param_4[((uVar4 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar4 - 1) + *param_1);
    }
    uVar4 = uVar7;
    puVar8 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *puVar8;
      puVar8 = puVar8 + 1;
      uVar4 = uVar4 + 1;
    } while (puVar8 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar5 = *param_1;
    bVar9 = iVar5 == 0;
  }
  iVar6 = 0;
  if (!bVar9) {
    iVar6 = iVar5 + uVar7;
  }
  return iVar6;
}


/* Console-window raster composition recovered from r232. Pooka's Free Software License. */
typedef struct {
 uintptr_t text,length,text_capacity;
 int32_t width,height,buffer_width,buffer_height;
 uint8_t closed,background[3];
 int32_t mouse_x,mouse_y;
 uint8_t buttons[3];
 uintptr_t image,image_length,image_capacity;
 int32_t image_width,image_height;
 uintptr_t output,output_length,output_capacity;
} PFConsoleWindow;
static volatile uint32_t *pf_console_api(void){return (volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x6800U;
#endif
}
static void *pf_console_allocate(uintptr_t size){volatile uint32_t *a=pf_console_api();if(a[0]!=0x50414d57||!a[1]||a[2]<0x50||!a[19])return 0;return ((void *(*)(uintptr_t))(uintptr_t)a[19])(size);}
static void pf_console_release(uintptr_t p){volatile uint32_t *a=pf_console_api();if(p&&a[0]==0x50414d57&&a[1]&&a[2]>=0x54&&a[20])((void(*)(void*))(uintptr_t)a[20])((void *)p);}
static void pf_console_compose(void *opaque){
 PFConsoleWindow *w=opaque;
 if(!w||w->width<1||w->height<1)return;
 uintptr_t size=(uintptr_t)w->width*w->height*4;
 w->output_length=0;
 if(w->output_capacity<size){uintptr_t p=(uintptr_t)pf_console_allocate(size);pf_console_release(w->output);w->output=p;w->output_capacity=size;}
 uint8_t *output=(uint8_t *)w->output;
 for(uintptr_t i=0;i<size;i++)output[i]=0;
 w->output_length=size;
 int32_t width=0,height=0,left=0,top=0;
 int has_image=w->image_length&&w->image_width>0&&w->image_height>0;
 if(has_image){
  float x=(float)w->width/(float)w->image_width;
  float y=(float)w->height/(float)w->image_height;
  float scale=x<=y?x:y;
  width=(int32_t)(scale*(float)w->image_width);if(width<2)width=1;
  height=(int32_t)((float)w->image_height*scale);if(height<2)height=1;
  left=(w->width-width)/2;top=(w->height-height)/2;
 }
 for(int32_t y=0;y<w->height;y++)for(int32_t x=0;x<w->width;x++){
  uint8_t *pixel=output+((uintptr_t)y*w->width+x)*4;
  const uint8_t *source=w->background;
  if(has_image&&left<=x&&x<left+width&&top<=y&&y<top+height){
   int32_t sx=(x-left)*w->image_width/width;
   int32_t sy=(y-top)*w->image_height/height;
   if(sx>=w->image_width)sx=w->image_width-1;if(sx<0)sx=0;
   if(sy>=w->image_height)sy=w->image_height-1;if(sy<0)sy=0;
   source=(uint8_t *)w->image+((uintptr_t)sy*w->image_width+sx)*4;
  }
  pixel[0]=source[0];pixel[1]=source[1];pixel[2]=source[2];pixel[3]=255;
 }
}
static uint32_t pf_console_channel(uint32_t c,uint32_t bits,uint32_t shift){
 uint32_t mask=bits>=32?0xffffffffU:((1U<<bits)-1);return ((c*mask+127)/255)<<(shift&31);
}
static void pf_console_present(void *opaque){
 PFConsoleWindow *w=opaque;if(!w||!w->output_length||w->width<1||w->height<1)return;
 struct __attribute__((packed,aligned(4))) {uint64_t address;uint32_t size,stride,width,height,bpp,rb,rs,gb,gs,bb,bs;} f={0};
 volatile uint32_t *api=pf_console_api();if(api[0]!=0x50414d57||!api[1]||api[2]<0x80||!api[31])return;
 if(!((uint32_t(*)(void*))(uintptr_t)api[31])(&f)||!f.address||!f.size||!f.stride||!f.width||!f.height||f.bpp!=32||!f.rb||!f.gb||!f.bb||f.stride/4<f.width)return;
 uint8_t *screen=(uint8_t *)(uintptr_t)f.address;
 uint32_t background=pf_console_channel(w->background[0],f.rb,f.rs)|pf_console_channel(w->background[1],f.gb,f.gs)|pf_console_channel(w->background[2],f.bb,f.bs);
 for(uint32_t y=0;y<f.height;y++)for(uint32_t x=0;x<f.width;x++)*(uint32_t *)(screen+(uintptr_t)y*f.stride+x*4)=background;
 uint32_t width=f.width,height=(uint64_t)f.width*(uint32_t)w->height/(uint32_t)w->width;if(height<2)height=1;
 uint32_t left=0,top=0;
 if(height>f.height){height=f.height;width=(uint64_t)f.height*(uint32_t)w->width/(uint32_t)w->height;if(width<2)width=1;left=(f.width-width)/2;}else top=(f.height-height)/2;
 for(uint32_t y=0;y<height;y++)for(uint32_t x=0;x<width;x++){
  uintptr_t sy=(uint64_t)y*(uint32_t)w->height/height,sx=(uint64_t)x*(uint32_t)w->width/width;
  const uint8_t *pixel=(const uint8_t *)w->output+(sy*(uint32_t)w->width+sx)*4;
  *(uint32_t *)(screen+(uintptr_t)(top+y)*f.stride+(left+x)*4)=pf_console_channel(pixel[0],f.rb,f.rs)|pf_console_channel(pixel[1],f.gb,f.gs)|pf_console_channel(pixel[2],f.bb,f.bs);
 }
 if(w->buffer_width>0&&w->buffer_height>0&&width&&height){
  int32_t mx=w->mouse_x;if(mx>=w->buffer_width)mx=w->buffer_width-1;if(mx<0)mx=0;
  int32_t my=w->mouse_y;if(my>=w->buffer_height)my=w->buffer_height-1;if(my<0)my=0;
  int32_t cx=left+(uint64_t)width*(uint32_t)mx/(uint32_t)w->buffer_width;
  int32_t cy=top+(uint64_t)height*(uint32_t)my/(uint32_t)w->buffer_height;
  uint32_t r=255,g=255,b=255;
  if(w->buttons[0]==1){g=b=60;}else if(w->buttons[1]==1){r=b=60;}else if(w->buttons[2]==1){r=80;g=130;}
  uint32_t color=pf_console_channel(r,f.rb,f.rs)|pf_console_channel(g,f.gb,f.gs)|pf_console_channel(b,f.bb,f.bs);
  for(int dy=-7;dy<=7;dy++)for(int dx=-7;dx<=7;dx++){
   int distance=(dx<0?-dx:dx)+(dy<0?-dy:dy);int32_t x=cx+dx,y=cy+dy;
   if(distance<8&&x>=0&&y>=0&&(uint32_t)x<f.width&&(uint32_t)y<f.height)*(uint32_t *)(screen+(uintptr_t)y*f.stride+(uint32_t)x*4)=distance<6?color:0;
  }
 }
#if defined(__aarch64__)
 uint64_t ctr;__asm__ volatile("mrs %0,ctr_el0":"=r"(ctr));uintptr_t line=4UL<<((ctr>>16)&15);uintptr_t end=(uintptr_t)screen+f.size;if(end<(uintptr_t)screen)end=~(uintptr_t)0;
 for(uintptr_t p=(uintptr_t)screen&-line;p<end;p+=line){__asm__ volatile("dc cvac,%0"::"r"(p):"memory");if(p+line<p)break;}
 __asm__ volatile("dsb sy\nisb":::"memory");
#endif
}
