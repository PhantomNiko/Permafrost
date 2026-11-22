/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c074
#define DAT_1000c074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa95U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000960
 */

void recovered_10000960(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c074 = 0;
  recovered_10000970();
  return;
}

#undef DAT_1000c074

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
#undef DAT_1000c074
#define DAT_1000c074 (*(char *)(((uintptr_t)pf_module_state + 0xa95U)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa99U)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0xa9dU)))
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
 * Address: 0x10000970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000970(void)

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
  if (DAT_1000c074 != '\0') {
    return;
  }
  DAT_1000c078 = 0;
  DAT_1000c07c = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_100009cb;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_100009cb:
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
        if (iVar9 == 0) goto LAB_10000b10;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10003d10(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000c078 != 0) goto LAB_10000c16;
    }
  }
LAB_10000b10:
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
      puVar6 = &DAT_1000c078;
      if (DAT_1000c078 != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_1000c07c == 0) {
        DAT_1000c074 = 1;
        DAT_1000c07c = 0x300000;
        return;
      }
      DAT_1000c074 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1000c078;
    if (DAT_1000c078 != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_1000c07c == 0) {
      DAT_1000c07c = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1000c078;
      if (DAT_1000c078 != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_1000c07c == 0) {
        DAT_1000c074 = 1;
        DAT_1000c07c = 0x2000000;
        return;
      }
      DAT_1000c074 = 1;
      return;
    }
  }
LAB_10000c16:
  if (DAT_1000c07c == 0) {
    DAT_1000c07c = DAT_1000c078;
    DAT_1000c074 = 1;
    return;
  }
  DAT_1000c074 = 1;
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
#undef DAT_1000c074
#undef DAT_1000c078
#undef DAT_1000c07c
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

#undef DAT_1000c078
#define DAT_1000c078 (*(int * *)(((uintptr_t)pf_module_state + 0xa99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c90
 */

int recovered_10000c90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000970();
  iVar1 = 0;
  for (piVar2 = DAT_1000c078; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(int *)(((uintptr_t)pf_module_state + 0xa99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd0
 */

void recovered_10000cd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000970();
  for (iVar1 = DAT_1000c078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(int * *)(((uintptr_t)pf_module_state + 0xa99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d10
 */

int recovered_10000d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000970();
  iVar2 = 0;
  for (piVar1 = DAT_1000c078; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(int *)(((uintptr_t)pf_module_state + 0xa99U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

void recovered_10000d40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000970();
  for (iVar1 = DAT_1000c078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(uint * *)(((uintptr_t)pf_module_state + 0xa99U)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint * *)(((uintptr_t)pf_module_state + 0xa9dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d80
 */

uint * recovered_10000d80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000970();
    puVar4 = DAT_1000c078;
    if (DAT_1000c07c != (uint *)0x0) {
      puVar4 = DAT_1000c07c;
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
            DAT_1000c07c = DAT_1000c078;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_1000c07c = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1000c078;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000c078
#undef DAT_1000c07c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e40
 */

longlong recovered_10000e40(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10000e80
 */

ulonglong recovered_10000e80(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10000ec0
 */

undefined8 recovered_10000ec0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10000f10
 */

undefined8 recovered_10000f10(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10000ff0
 */

undefined8 recovered_10000ff0(uint param_1,uint param_2,uint param_3,uint param_4)

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


#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001060
 */

undefined8 recovered_10001060(uint param_1,uint param_2,uint param_3,uint param_4)

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

#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a0
 */

undefined8 recovered_100011a0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001260
 */

void recovered_10001260(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001280
 */

int recovered_10001280(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100012a0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_100012e0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001320(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001360
 */

void * recovered_10001360(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10001387;
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
LAB_10001387:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001420
 */

void * recovered_10001420(void *destination,void *source,ulong count)

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
 * Address: 0x100015f0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100015f0(void *destination,int value,ulong count)

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
 * Address: 0x100016a0
 */

void recovered_100016a0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001740
 */

void recovered_10001740(undefined4 *param_1,uint param_2)

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
 * Address: 0x100017e0
 */

int recovered_100017e0(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1000187e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10001895;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_100018c6:
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
      if (uVar8 != uVar9) goto LAB_100018c6;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_100018c6;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_100018c6;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10001910(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1000187e:
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
LAB_10001895:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

int recovered_10001910(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001950
 */

bool recovered_10001950(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001970
 */

bool recovered_10001970(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001990
 */

bool recovered_10001990(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

bool recovered_100019b0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019e0
 */

bool recovered_100019e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a00
 */

bool recovered_10001a00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

int recovered_10001a20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

int recovered_10001a40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a60
 */

ulong recovered_10001a60(char *text)

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
 * Address: 0x10001a90
 */

int recovered_10001a90(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10001ac6;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001ac6:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad0
 */

int recovered_10001ad0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001b06;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001b06:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

void recovered_10001b10(int param_1,int param_2)

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
 * Address: 0x10001b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10001b30(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10001c41;
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
LAB_10001c41:
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
 * Address: 0x10001c70
 */

char * recovered_10001c70(char *param_1,char param_2)

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
 * Address: 0x10001cb0
 */

int recovered_10001cb0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10001ceb:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10001ceb;
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
 * Address: 0x10001d00
 */

char * recovered_10001d00(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

char * recovered_10001d50(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;

  pcVar3 = param_1;
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      pcVar3 = (char *)0x0;
    }
    else {
      do {
        iVar2 = 0;
        cVar4 = *param_2;
        while (param_1[iVar2] == cVar4) {
          cVar4 = param_2[iVar2 + 1];
          iVar2 = iVar2 + 1;
          pcVar3 = param_1;
          if (cVar4 == '\0') goto LAB_10001d93;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001d93:
  return pcVar3;
}


#undef DAT_1000ba9a
#define DAT_1000ba9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001da0
 */

undefined * recovered_10001da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ba9a;
}

#undef DAT_1000ba9a

#undef PTR_DAT_1000c004
#define PTR_DAT_1000c004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa25U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

undefined ** recovered_10001db0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c004;
}

#undef PTR_DAT_1000c004

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
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001dc0(undefined4 *param_1)

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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c

#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001e50(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000b5e0;
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

#undef DAT_1000b5e0
#undef _DAT_1000b5e0

#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001e80(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)_DAT_1000b5e0;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_1000b5e0 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_1000b5e0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_1000b5e0
#undef _DAT_1000b5e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f60
 */

longdouble recovered_10001f60(double param_1,double param_2)

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
 * Address: 0x10001fc0
 */

longdouble recovered_10001fc0(double param_1,double param_2)

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
 * Address: 0x10002060
 */

longdouble recovered_10002060(double param_1)

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
 * Address: 0x100020b0
 */

longdouble recovered_100020b0(double param_1)

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
 * Address: 0x10002110
 */

void recovered_10002110(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000b5e4
#define DAT_1000b5e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000b5e8
#define DAT_1000b5e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000b5ec
#define DAT_1000b5ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000b5f0
#define DAT_1000b5f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000b5f4
#define DAT_1000b5f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1000b5f8
#define DAT_1000b5f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000b5fc
#define DAT_1000b5fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef DAT_1000b600
#define DAT_1000b600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000b604
#define DAT_1000b604 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_1000b608
#define DAT_1000b608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000b60c
#define DAT_1000b60c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1000b610
#define DAT_1000b610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000b638
#define DAT_1000b638 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e4
#define _DAT_1000b5e4 (*(float *)(((uintptr_t)pf_module_state + 0x5U)))
#undef _DAT_1000b5e8
#define _DAT_1000b5e8 (*(float *)(((uintptr_t)pf_module_state + 0x9U)))
#undef _DAT_1000b5ec
#define _DAT_1000b5ec (*(float *)(((uintptr_t)pf_module_state + 0xdU)))
#undef _DAT_1000b5f0
#define _DAT_1000b5f0 (*(float *)(((uintptr_t)pf_module_state + 0x11U)))
#undef _DAT_1000b5f4
#define _DAT_1000b5f4 (*(float *)(((uintptr_t)pf_module_state + 0x15U)))
#undef _DAT_1000b5f8
#define _DAT_1000b5f8 (*(float *)(((uintptr_t)pf_module_state + 0x19U)))
#undef _DAT_1000b5fc
#define _DAT_1000b5fc (*(float *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef _DAT_1000b600
#define _DAT_1000b600 (*(float *)(((uintptr_t)pf_module_state + 0x21U)))
#undef _DAT_1000b604
#define _DAT_1000b604 (*(float *)(((uintptr_t)pf_module_state + 0x25U)))
#undef _DAT_1000b608
#define _DAT_1000b608 (*(float *)(((uintptr_t)pf_module_state + 0x29U)))
#undef _DAT_1000b60c
#define _DAT_1000b60c (*(float *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef _DAT_1000b610
#define _DAT_1000b610 (*(float *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000b638
#define _DAT_1000b638 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002210(double param_1)

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
    lVar2 = (longdouble)_DAT_1000b5e4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_1000b5e8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000b5e0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_1000b5e8 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_1000b5ec) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_1000b5ec);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_1000b610 +
            lVar9 / (longdouble)_DAT_1000b60c +
            lVar8 / (longdouble)_DAT_1000b608 +
            lVar7 / (longdouble)_DAT_1000b604 +
            lVar6 / (longdouble)_DAT_1000b600 +
            lVar5 / (longdouble)_DAT_1000b5fc +
            lVar4 / (longdouble)_DAT_1000b5f8 +
            lVar3 / (longdouble)_DAT_1000b5f4 +
            (lVar10 * lVar2) / (longdouble)_DAT_1000b5f0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_1000b638;
  }
  return lVar2;
}

#undef DAT_1000b5e0
#undef DAT_1000b5e4
#undef DAT_1000b5e8
#undef DAT_1000b5ec
#undef DAT_1000b5f0
#undef DAT_1000b5f4
#undef DAT_1000b5f8
#undef DAT_1000b5fc
#undef DAT_1000b600
#undef DAT_1000b604
#undef DAT_1000b608
#undef DAT_1000b60c
#undef DAT_1000b610
#undef DAT_1000b638
#undef _DAT_1000b5e0
#undef _DAT_1000b5e4
#undef _DAT_1000b5e8
#undef _DAT_1000b5ec
#undef _DAT_1000b5f0
#undef _DAT_1000b5f4
#undef _DAT_1000b5f8
#undef _DAT_1000b5fc
#undef _DAT_1000b600
#undef _DAT_1000b604
#undef _DAT_1000b608
#undef _DAT_1000b60c
#undef _DAT_1000b610
#undef _DAT_1000b638

#undef DAT_1000b660
#define DAT_1000b660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002330
 */

longlong recovered_10002330(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000b660 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000b660

#undef DAT_1000b614
#define DAT_1000b614 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1000b618
#define DAT_1000b618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000b61c
#define DAT_1000b61c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1000b640
#define DAT_1000b640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000b650
#define DAT_1000b650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef _DAT_1000b614
#define _DAT_1000b614 (*(float *)(((uintptr_t)pf_module_state + 0x35U)))
#undef _DAT_1000b618
#define _DAT_1000b618 (*(float *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000b61c
#define _DAT_1000b61c (*(float *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1000b640
#define _DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000b650
#define _DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef _DAT_1000b658
#define _DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002380(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000b640 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000b648;
    } while ((longdouble)_DAT_1000b640 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000b650) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000b658;
    } while (lVar1 < (longdouble)_DAT_1000b650);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_1000b61c +
         (lVar2 * lVar2) / (longdouble)_DAT_1000b618 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_1000b614) * lVar1;
}

#undef DAT_1000b614
#undef DAT_1000b618
#undef DAT_1000b61c
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b614
#undef _DAT_1000b618
#undef _DAT_1000b61c
#undef _DAT_1000b640
#undef _DAT_1000b648
#undef _DAT_1000b650
#undef _DAT_1000b658

#undef DAT_1000b620
#define DAT_1000b620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000b624
#define DAT_1000b624 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1000b628
#define DAT_1000b628 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000b640
#define DAT_1000b640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000b650
#define DAT_1000b650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef _DAT_1000b620
#define _DAT_1000b620 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
#undef _DAT_1000b624
#define _DAT_1000b624 (*(float *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_1000b628
#define _DAT_1000b628 (*(float *)(((uintptr_t)pf_module_state + 0x49U)))
#undef _DAT_1000b640
#define _DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000b650
#define _DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef _DAT_1000b658
#define _DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002420(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000b640 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000b648;
    } while ((longdouble)_DAT_1000b640 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000b650) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000b658;
    } while (lVar1 < (longdouble)_DAT_1000b650);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_1000b628 +
         (lVar1 * lVar1) / (longdouble)_DAT_1000b624 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_1000b620;
}

#undef DAT_1000b620
#undef DAT_1000b624
#undef DAT_1000b628
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b620
#undef _DAT_1000b624
#undef _DAT_1000b628
#undef _DAT_1000b640
#undef _DAT_1000b648
#undef _DAT_1000b650
#undef _DAT_1000b658

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024c0
 */

void recovered_100024c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_100024e0(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100025c0(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10002670(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_100026e0(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002790
 */

void recovered_10002790(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100027f0(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_1000b5e0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_1000b5e0 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_1000b5e0);
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

#undef DAT_1000b5e0
#undef _DAT_1000b5e0

#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100028e0(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_1000b5e0;
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

#undef DAT_1000b5e0
#undef _DAT_1000b5e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

longdouble recovered_10002920(float param_1,float param_2)

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
 * Address: 0x100029c0
 */

longdouble recovered_100029c0(float param_1)

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
 * Address: 0x10002a10
 */

longdouble recovered_10002a10(float param_1)

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
 * Address: 0x10002a80
 */

longdouble recovered_10002a80(double param_1)

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
 * Address: 0x10002af0
 */

longdouble recovered_10002af0(float param_1)

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
 * Address: 0x10002b70
 */

longdouble recovered_10002b70(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002110();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000b5e4
#define DAT_1000b5e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000b5e8
#define DAT_1000b5e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000b5ec
#define DAT_1000b5ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000b5f0
#define DAT_1000b5f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000b5f4
#define DAT_1000b5f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1000b5f8
#define DAT_1000b5f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000b5fc
#define DAT_1000b5fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef DAT_1000b600
#define DAT_1000b600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000b604
#define DAT_1000b604 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_1000b608
#define DAT_1000b608 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000b60c
#define DAT_1000b60c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1000b610
#define DAT_1000b610 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000b638
#define DAT_1000b638 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b5e4
#define _DAT_1000b5e4 (*(float *)(((uintptr_t)pf_module_state + 0x5U)))
#undef _DAT_1000b5e8
#define _DAT_1000b5e8 (*(float *)(((uintptr_t)pf_module_state + 0x9U)))
#undef _DAT_1000b5ec
#define _DAT_1000b5ec (*(float *)(((uintptr_t)pf_module_state + 0xdU)))
#undef _DAT_1000b5f0
#define _DAT_1000b5f0 (*(float *)(((uintptr_t)pf_module_state + 0x11U)))
#undef _DAT_1000b5f4
#define _DAT_1000b5f4 (*(float *)(((uintptr_t)pf_module_state + 0x15U)))
#undef _DAT_1000b5f8
#define _DAT_1000b5f8 (*(float *)(((uintptr_t)pf_module_state + 0x19U)))
#undef _DAT_1000b5fc
#define _DAT_1000b5fc (*(float *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef _DAT_1000b600
#define _DAT_1000b600 (*(float *)(((uintptr_t)pf_module_state + 0x21U)))
#undef _DAT_1000b604
#define _DAT_1000b604 (*(float *)(((uintptr_t)pf_module_state + 0x25U)))
#undef _DAT_1000b608
#define _DAT_1000b608 (*(float *)(((uintptr_t)pf_module_state + 0x29U)))
#undef _DAT_1000b60c
#define _DAT_1000b60c (*(float *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef _DAT_1000b610
#define _DAT_1000b610 (*(float *)(((uintptr_t)pf_module_state + 0x31U)))
#undef _DAT_1000b638
#define _DAT_1000b638 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002b90(float param_1)

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

  fVar1 = _DAT_1000b5e4;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_1000b5e8 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_1000b5e0;
        iVar10 = iVar10 + 1;
      } while (_DAT_1000b5e8 < param_1);
    }
    for (; param_1 < _DAT_1000b5ec; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_1000b610 +
            fVar9 / _DAT_1000b60c +
            fVar8 / _DAT_1000b608 +
            fVar7 / _DAT_1000b604 +
            fVar6 / _DAT_1000b600 +
            fVar5 / _DAT_1000b5fc +
            fVar4 / _DAT_1000b5f8 +
            fVar3 / _DAT_1000b5f4 + (fVar1 * fVar2) / _DAT_1000b5f0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_1000b638;
  }
  return (longdouble)fVar1;
}

#undef DAT_1000b5e0
#undef DAT_1000b5e4
#undef DAT_1000b5e8
#undef DAT_1000b5ec
#undef DAT_1000b5f0
#undef DAT_1000b5f4
#undef DAT_1000b5f8
#undef DAT_1000b5fc
#undef DAT_1000b600
#undef DAT_1000b604
#undef DAT_1000b608
#undef DAT_1000b60c
#undef DAT_1000b610
#undef DAT_1000b638
#undef _DAT_1000b5e0
#undef _DAT_1000b5e4
#undef _DAT_1000b5e8
#undef _DAT_1000b5ec
#undef _DAT_1000b5f0
#undef _DAT_1000b5f4
#undef _DAT_1000b5f8
#undef _DAT_1000b5fc
#undef _DAT_1000b600
#undef _DAT_1000b604
#undef _DAT_1000b608
#undef _DAT_1000b60c
#undef _DAT_1000b610
#undef _DAT_1000b638

#undef DAT_1000b660
#define DAT_1000b660 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc0
 */

undefined4 recovered_10002cc0(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000b660 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_1000b660
#undef local_14

#undef DAT_1000b614
#define DAT_1000b614 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1000b618
#define DAT_1000b618 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000b61c
#define DAT_1000b61c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1000b640
#define DAT_1000b640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000b650
#define DAT_1000b650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef _DAT_1000b614
#define _DAT_1000b614 (*(float *)(((uintptr_t)pf_module_state + 0x35U)))
#undef _DAT_1000b618
#define _DAT_1000b618 (*(float *)(((uintptr_t)pf_module_state + 0x39U)))
#undef _DAT_1000b61c
#define _DAT_1000b61c (*(float *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef _DAT_1000b640
#define _DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000b650
#define _DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef _DAT_1000b658
#define _DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002d10(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000b640 < param_1; param_1 = param_1 + (float)_DAT_1000b648) {
  }
  for (; param_1 < (float)_DAT_1000b650; param_1 = param_1 + (float)_DAT_1000b658) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_1000b61c +
          (fVar1 * fVar1) / _DAT_1000b618 + fVar1 / _DAT_1000b614 + 1.0) * param_1);
}

#undef DAT_1000b614
#undef DAT_1000b618
#undef DAT_1000b61c
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b614
#undef _DAT_1000b618
#undef _DAT_1000b61c
#undef _DAT_1000b640
#undef _DAT_1000b648
#undef _DAT_1000b650
#undef _DAT_1000b658

#undef DAT_1000b620
#define DAT_1000b620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000b624
#define DAT_1000b624 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1000b628
#define DAT_1000b628 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000b640
#define DAT_1000b640 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000b648
#define DAT_1000b648 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000b650
#define DAT_1000b650 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000b658
#define DAT_1000b658 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x79U)))
#undef _DAT_1000b620
#define _DAT_1000b620 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
#undef _DAT_1000b624
#define _DAT_1000b624 (*(float *)(((uintptr_t)pf_module_state + 0x45U)))
#undef _DAT_1000b628
#define _DAT_1000b628 (*(float *)(((uintptr_t)pf_module_state + 0x49U)))
#undef _DAT_1000b640
#define _DAT_1000b640 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef _DAT_1000b648
#define _DAT_1000b648 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef _DAT_1000b650
#define _DAT_1000b650 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef _DAT_1000b658
#define _DAT_1000b658 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002db0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000b640 < param_1; param_1 = param_1 + (float)_DAT_1000b648) {
  }
  for (; param_1 < (float)_DAT_1000b650; param_1 = param_1 + (float)_DAT_1000b658) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_1000b628 +
         (fVar1 * fVar1) / _DAT_1000b624 + fVar1 * _DAT_1000b620 + 1.0);
}

#undef DAT_1000b620
#undef DAT_1000b624
#undef DAT_1000b628
#undef DAT_1000b640
#undef DAT_1000b648
#undef DAT_1000b650
#undef DAT_1000b658
#undef _DAT_1000b620
#undef _DAT_1000b624
#undef _DAT_1000b628
#undef _DAT_1000b640
#undef _DAT_1000b648
#undef _DAT_1000b650
#undef _DAT_1000b658

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e50
 */

void recovered_10002e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e70
 */

int recovered_10002e70(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_10002f9c:
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
    if (param_3 <= uVar7) goto LAB_10002f9c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fc0
 */

int recovered_10002fc0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_100030ec:
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
    if (param_3 <= uVar7) goto LAB_100030ec;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000b630
#define DAT_1000b630 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b630
#define _DAT_1000b630 (*(float *)(((uintptr_t)pf_module_state + 0x51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003110(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)_DAT_1000b630 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_1000b630 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_1000b630;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_100031d1;
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
LAB_100031d1:
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
              lVar10 = lVar10 * (longdouble)_DAT_1000b5e0;
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

#undef DAT_1000b5e0
#undef DAT_1000b630
#undef _DAT_1000b5e0
#undef _DAT_1000b630

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032b0
 */

longdouble recovered_100032b0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003110(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000b630
#define DAT_1000b630 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51U)))
#undef _DAT_1000b630
#define _DAT_1000b630 (*(float *)(((uintptr_t)pf_module_state + 0x51U)))
#undef str_1000ba9f
#define str_1000ba9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_1000baa6
#define str_1000baa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c7U)))
#undef str_1000bab7
#define str_1000bab7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d8U)))
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
 * Address: 0x100032e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100032e0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003313;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10003313;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_100033f2;
          goto LAB_100033c7;
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
LAB_100033c7:
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
LAB_100033f2:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_10003461;
    default:
      cVar8 = '\0';
      goto LAB_10003461;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_10003461;
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
LAB_10003461:
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
        goto LAB_10003668;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10003668:
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
        abStack_c5[iVar11 + 1] = str_1000bab7[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003a50;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_10003a46;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10003313;
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
        goto LAB_10003887;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003887;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003887:
      pcVar12 = str_1000baa6;
      if (*local_3c != 0x58) {
        pcVar12 = str_1000bab7;
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
LAB_10003313:
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
          abStack_c5[iVar11 + 1] = str_1000bab7[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003861;
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
LAB_10003861:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_1000b630;
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
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_1000b630;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_1000b630;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_1000b630;
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
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_1000b630);
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
        abStack_c5[iVar11 + 1] = str_1000bab7[uVar9 & 0xf];
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
LAB_100035f4:
      break;
    case 0x73:
      pbVar5 = (byte *)str_1000ba9f;
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
        goto LAB_100035f4;
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
        goto LAB_10003993;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003993;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003993:
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
        abStack_c5[iVar11 + 1] = str_1000bab7[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003a50:
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
LAB_10003a46:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_1000b630
#undef _DAT_1000b630
#undef str_1000ba9f
#undef str_1000baa6
#undef str_1000bab7
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
int recovered_10003ce0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100032e0(buffer,capacity,format,(void *)args);
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
#undef DAT_1000c078
#define DAT_1000c078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xa99U)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int * *)(((uintptr_t)pf_module_state + 0xa9dU)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003d10(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&DAT_1000c078;
        if (DAT_1000c078 != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_1000c07c == (int *)0x0) {
          DAT_1000c07c = piVar1;
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
    puVar2 = &DAT_1000c078;
    if (DAT_1000c078 != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_1000c07c != (int *)0x0) {
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
    puVar2 = &DAT_1000c078;
    if (DAT_1000c078 != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_1000c07c != (int *)0x0) {
      return;
    }
  }
  DAT_1000c07c = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000c078
#undef DAT_1000c07c
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
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa1U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa5U)))
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
 * Address: 0x10003e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003e90(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c080 != 0) {
          DAT_1000c080 = DAT_1000c080 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000c080 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10001360(local_210,&DAT_1000c084,DAT_1000c080);
            uVar3 = DAT_1000c080;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000c080 = 0;
        }
        else {
          if (DAT_1000c080 - 0x1ff < 0xfffffe00) {
            recovered_10001360(local_210,&DAT_1000c084,DAT_1000c080);
            local_210[DAT_1000c080] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_1000c080 = 0;
          }
          pcVar1 = &DAT_1000c084 + DAT_1000c080;
          DAT_1000c080 = DAT_1000c080 + 1;
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
#undef DAT_1000c080
#undef DAT_1000c084
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
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa1U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa5U)))
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
 * Address: 0x10004030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004030(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000c080 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10001360(local_204,&DAT_1000c084,DAT_1000c080);
    uVar1 = DAT_1000c080;
  }
  local_204[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_1000c080 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000c080
#undef DAT_1000c084
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
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa1U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa5U)))
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
 * Address: 0x100040c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100040c0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000c080 != 0) {
    recovered_10001360(local_208,&DAT_1000c084,DAT_1000c080);
    local_208[DAT_1000c080] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000c080 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000c080
#undef DAT_1000c084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000ba9e
#define DAT_1000ba9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bfU)))
#undef DAT_1000bac8
#define DAT_1000bac8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e9U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004150
 */

void recovered_10004150(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined *puVar2;

  format = &DAT_1000bac8;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000ba9e;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10003ce0(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10003e90(local_148,iVar1);
  }
  return;
}

#undef DAT_1000ba9e
#undef DAT_1000bac8
#undef local_148

#undef DAT_1000bae6
#define DAT_1000bae6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
#undef str_1000bacb
#define str_1000bacb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041b0
 */

void recovered_100041b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001a60(str_1000bacb);
  recovered_10003e90(str_1000bacb,uVar1);
  uVar1 = recovered_10001a60(&DAT_1000bae6);
  recovered_10003e90(&DAT_1000bae6,uVar1);
  return;
}

#undef DAT_1000bae6
#undef str_1000bacb

#undef DAT_1000bae6
#define DAT_1000bae6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
#undef str_1000bae9
#define str_1000bae9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004200
 */

void recovered_10004200(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001a60(str_1000bae9);
  recovered_10003e90(str_1000bae9,uVar1);
  uVar1 = recovered_10001a60(&DAT_1000bae6);
  recovered_10003e90(&DAT_1000bae6,uVar1);
  return;
}

#undef DAT_1000bae6
#undef str_1000bae9

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
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa1U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa5U)))
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
 * Address: 0x10004250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004250(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000c080 != 0) {
      recovered_10001360(local_210,&DAT_1000c084,DAT_1000c080);
      local_210[DAT_1000c080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_1000c080 = 0;
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
#undef DAT_1000c080
#undef DAT_1000c084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004340
 */

undefined4 recovered_10004340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004350
 */

void recovered_10004350(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004360
 */

undefined1 recovered_10004360(void)

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
#undef DAT_1000bac8
#define DAT_1000bac8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e9U)))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_1000bb7d
#define str_1000bb7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59eU)))
#undef str_1000bb8a
#define str_1000bb8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5abU)))
#undef str_1000bb98
#define str_1000bb98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b9U)))
#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10004370(char *param_1,int param_2)

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
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10001a90(param_1,str_1000bb7d);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_10001a90(param_1,str_1000bb8a);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_10001a90(param_1,str_1000bb98);
      if (iVar4 != 0) {
        puVar5 = recovered_100012a0(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100015f0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10001c70((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001c70((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001c70((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_10001c70((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001c70((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001c70((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_10001c70((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_10003ce0__4_((char *)(puVar5 + 1),0xf1,&DAT_1000bac8,(uint)param_1);
          recovered_100015f0(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001c70((char *)param_2,'w');
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
                  destination = recovered_10001320((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000c000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_1000468e;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10001360(destination,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x1000466c;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000c000 = 2;
LAB_1000468e:
            recovered_100012e0(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x1000466c:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_100044f6;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_100012a0(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100015f0(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_10003ce0__4_((char *)(puVar5 + 1),0xf1,&DAT_1000bac8,(uint)param_1);
    return puVar5;
  }
LAB_100044f6:
  *(undefined4 *)PTR_DAT_1000c000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1000bac8
#undef PTR_DAT_1000c000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000bb7d
#undef str_1000bb8a
#undef str_1000bb98
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
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100046f0(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_1000479d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10004783;
      }
    }
    *(undefined4 *)PTR_DAT_1000c000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10004783:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_100012e0((void *)param_3[0x3f]);
  }
  recovered_100012e0(param_3);
LAB_1000479d:
  recovered_10004370(param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000c000
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
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100047b0(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000c000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_100012e0((void *)param_1[0x3f]);
  }
  recovered_100012e0(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000c000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

uint recovered_10004880(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10001360(param_1,(void *)(uVar2 + param_4[0x3e]),uVar1);
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
          uVar3 = recovered_10004980(param_4);
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
#undef DAT_1000ba9e
#define DAT_1000ba9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bfU)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xaa1U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa5U)))
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
 * Address: 0x10004980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004980(int *param_1)

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
LAB_100049d7:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000c080 != 0) {
      recovered_10001360(local_20c,&DAT_1000c084,DAT_1000c080);
      local_20c[DAT_1000c080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000c080 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000ba9e,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10001a60((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_100049d7;
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
#undef DAT_1000ba9e
#undef DAT_1000c080
#undef DAT_1000c084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b30
 */

int recovered_10004b30(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10004c7e:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10003e90(param_1,count);
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
      pvVar3 = recovered_10001320((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000c000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10004c7e;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100015f0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10001360((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000c000

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c90
 */

undefined4 recovered_10004c90(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10004c9f;
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
LAB_10004c9f:
  *(undefined4 *)PTR_DAT_1000c000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000c000

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d10
 */

undefined4 recovered_10004d10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_1000c000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004d40(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000c000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000c000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df0
 */

undefined1 recovered_10004df0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e10
 */

undefined1 recovered_10004e10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e30
 */

void recovered_10004e30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e50
 */

uint recovered_10004e50(uint param_1,int param_2)

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
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004e80(int param_1)

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
  *(undefined4 *)PTR_DAT_1000c000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef PTR_DAT_1000c000
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
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xa21U)))
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
 * Address: 0x10004ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004ef0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
  }
  else {
    recovered_100015f0(&local_1c,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000c000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef PTR_DAT_1000c000
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
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005060(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_100015f0(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      destination = recovered_100012a0(local_18 + (local_18 == 0));
      if (destination == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_10001360(destination,local_1c,local_18);
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
 * Address: 0x10005130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005130(int param_1,int param_2,int param_3)

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
 * Address: 0x100051a0
 */

undefined4 recovered_100051a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051b0
 */

void recovered_100051b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051c0
 */

undefined4 recovered_100051c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051d0
 */

undefined4 recovered_100051d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051e0
 */

undefined4 recovered_100051e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f0
 */

char * recovered_100051f0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10005220
 */

int recovered_10005220(char *left,char *right,ulong count)

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


#undef DAT_1000bb0c
#define DAT_1000bb0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52dU)))
#undef str_1000bb0f
#define str_1000bb0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x530U)))
#undef str_1000bb1c
#define str_1000bb1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53dU)))
#undef str_1000bb26
#define str_1000bb26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x547U)))
#undef str_1000bb3a
#define str_1000bb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55bU)))
#undef str_1000bb48
#define str_1000bb48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_1000bb5a
#define str_1000bb5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_1000bb66
#define str_1000bb66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x587U)))
#undef str_1000bb77
#define str_1000bb77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005270
 */

char * recovered_10005270(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000bb0c;
  default:
    return str_1000bb77;
  case 2:
    return str_1000bb0f;
  case 5:
    return str_1000bb1c;
  case 9:
    return str_1000bb26;
  case 0xc:
    return str_1000bb3a;
  case 0xd:
    return str_1000bb48;
  case 0x11:
    return str_1000bb5a;
  case 0x16:
    return str_1000bb66;
  }
}

#undef DAT_1000bb0c
#undef str_1000bb0f
#undef str_1000bb1c
#undef str_1000bb26
#undef str_1000bb3a
#undef str_1000bb48
#undef str_1000bb5a
#undef str_1000bb66
#undef str_1000bb77

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

undefined4 recovered_100052d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

undefined4 recovered_100052e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c284
#define DAT_1000c284 (*(int *)(((uintptr_t)pf_module_state + 0xca5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052f0
 */

void recovered_100052f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c284 = DAT_1000c284 + 1;
  return;
}

#undef DAT_1000c284

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10005310(void *context){__asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\nmovl 36(%eax),%edx\njmpl *%edx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10005320(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10005350(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_100053bd
#define DAT_100053bd (*(uint8_t *)(0x100053bdU))
#undef DAT_1000bf64
#define DAT_1000bf64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x985U)))
#define local_44 (*(undefined4 *)(frame + 156))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005380
 */

void recovered_10005380(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100053e0;
  local_28 = &DAT_1000bf64;
  local_20 = &DAT_100053bd;
  local_40 = 1;
  recovered_100058a0(&local_44);
  recovered_10001260();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_100053bd
#undef DAT_1000bf64
#undef local_44
#undef auStack_18
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053e0
 */

undefined4 recovered_100053e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053f0
 */

void recovered_100053f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005410(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}


#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0xca9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005410
 */

int recovered_10005410(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000c288;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000c288 = param_1;
  iVar1 = recovered_10005740(param_1);
  return iVar1;
}

#undef DAT_1000c288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005440
 */

void * recovered_10005440(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_100012a0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001260();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005470
 */

void * recovered_10005470(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_100012a0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10001260();
  }
  return pvVar1;
}


#undef DAT_1000bf74
#define DAT_1000bf74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x995U)))
#undef LAB_100054f4
#define LAB_100054f4 (*(uint8_t *)(0x100054f4U))
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
 * Address: 0x100054a0
 */

void recovered_100054a0(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100053e0;
  local_28 = &DAT_1000bf74;
  local_20 = &LAB_100054f4;
  local_40 = 1;
  recovered_100058a0(&local_44);
  recovered_100012e0(param_1);
  recovered_100058c0(&local_44);
  return;
}

#undef DAT_1000bf74
#undef LAB_100054f4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_1000bf84
#define DAT_1000bf84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a5U)))
#undef LAB_10005574
#define LAB_10005574 (*(uint8_t *)(0x10005574U))
#define local_44 (*(undefined4 *)(frame + 156))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005520
 */

void recovered_10005520(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100053e0;
  local_28 = &DAT_1000bf84;
  local_20 = &LAB_10005574;
  local_40 = 1;
  recovered_100058a0(&local_44);
  recovered_100012e0(param_1);
  recovered_100058c0(&local_44);
  return;
}

#undef DAT_1000bf84
#undef LAB_10005574
#undef local_44
#undef auStack_18
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_1000bf94
#define DAT_1000bf94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9b5U)))
#undef LAB_100055f4
#define LAB_100055f4 (*(uint8_t *)(0x100055f4U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055a0
 */

void recovered_100055a0(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100053e0;
  local_28 = &DAT_1000bf94;
  local_20 = &LAB_100055f4;
  local_40 = 1;
  recovered_100058a0(&local_44);
  recovered_100012e0(param_1);
  recovered_100058c0(&local_44);
  return;
}

#undef DAT_1000bf94
#undef LAB_100055f4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef auStackY_cc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_1000bfa4
#define DAT_1000bfa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9c5U)))
#undef LAB_10005674
#define LAB_10005674 (*(uint8_t *)(0x10005674U))
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
 * Address: 0x10005620
 */

void recovered_10005620(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100053e0;
  local_28 = &DAT_1000bfa4;
  local_20 = &LAB_10005674;
  local_40 = 1;
  recovered_100058a0(&local_44);
  recovered_100012e0(param_1);
  recovered_100058c0(&local_44);
  return;
}

#undef DAT_1000bfa4
#undef LAB_10005674
#undef local_24
#undef local_20
#undef auStack_18
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

undefined4 recovered_100056a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b0
 */

uint recovered_100056b0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056c0
 */

void recovered_100056c0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void recovered_100056d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

undefined1 * recovered_100056e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_100012a0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005380();
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
 * Address: 0x10005720
 */

void recovered_10005720(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_100012e0((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

int recovered_10005740(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000c288
#define DAT_1000c288 (*(void * *)(((uintptr_t)pf_module_state + 0xca9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005750
 */

void recovered_10005750(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_1000c288;
  if (DAT_1000c288 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000c288 + 8);
    DAT_1000c288 = *(void **)((int)DAT_1000c288 + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_100012e0(pointer);
    }
  }
  return;
}

#undef DAT_1000c288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

void recovered_100057a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100057e0(param_1 + -0x1c);
}


#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0xca9U)))
#undef DAT_1000c28c
#define DAT_1000c28c (*(int * *)(((uintptr_t)pf_module_state + 0xcadU)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

void recovered_100057e0(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1000c28c != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000c28c;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10006170((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005930(local_14);
        in_ECX_00 = DAT_1000c288;
        if (DAT_1000c288 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10005380();
        }
        *(undefined1 *)(DAT_1000c288 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100057e0(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}

#undef DAT_1000c288
#undef DAT_1000c28c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0xca9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005860
 */

void recovered_10005860(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000c288;
  if (DAT_1000c288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10005380();
  }
  *(undefined1 *)(DAT_1000c288 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100057e0(in_ECX);
}

#undef DAT_1000c288

#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcadU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058a0
 */

void recovered_100058a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c28c;
  DAT_1000c28c = param_1;
  return;
}

#undef DAT_1000c28c

#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcadU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c0
 */

void recovered_100058c0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c28c;
  if (DAT_1000c28c == param_1) {
    puVar2 = &DAT_1000c28c;
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

#undef DAT_1000c28c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f0
 */

void recovered_100058f0(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100057e0(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005900
 */

void recovered_10005900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}


#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xcadU)))
#define iStack_34 (*(int *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define uStack_24 (*(undefined4 *)(frame + 44))
#define uStack_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005910
 */

undefined4 recovered_10005910(int in_stack_00000004)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000c28c != (undefined4 *)0x0) {
    DAT_1000c28c = (undefined4 *)*DAT_1000c28c;
  }
  recovered_10005930(in_stack_00000004);
  if (DAT_1000c28c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000c28c;
      if (DAT_1000c28c == puVar1) {
        DAT_1000c28c[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_100059ab:
        puVar2[1] = uVar3;
        recovered_10005310((int)puVar2);
        recovered_10005910(iStack_34);
        return 0;
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_10006170((int)DAT_1000c28c,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_100059ab;
      }
      DAT_1000c28c = (undefined4 *)*puVar2;
    } while (DAT_1000c28c != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}

#undef DAT_1000c28c
#undef iStack_34
#undef uStack_28
#undef uStack_24
#undef uStack_20

#undef DAT_1000c28c
#define DAT_1000c28c (*(int * *)(((uintptr_t)pf_module_state + 0xcadU)))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
#define iStack_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005930
 */

undefined4 recovered_10005930(int in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000c28c != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1000c28c;
      if (DAT_1000c28c == piVar1) {
        DAT_1000c28c[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_100059ab:
        piVar2[1] = iVar3;
        recovered_10005310((int)piVar2);
        recovered_10005910(iStack_28);
        return 0;
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_10006170((int)DAT_1000c28c,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_100059ab;
      }
      DAT_1000c28c = (int *)*piVar2;
    } while (DAT_1000c28c != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}

#undef DAT_1000c28c
#undef local_1c
#undef local_18
#undef local_14
#undef iStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059c0
 */

undefined4 recovered_100059c0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005910(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059e0
 */

undefined4 recovered_100059e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059f0
 */

void recovered_100059f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005380();
}


#undef DAT_1000c05c
#define DAT_1000c05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7dU)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a00
 */

int recovered_10005a00(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10005ab0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10005ab0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000c05c) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10005ab0:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000c05c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ad0
 */

void recovered_10005ad0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001260();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae0
 */

undefined4 recovered_10005ae0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005af0
 */

bool recovered_10005af0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b10
 */

bool recovered_10005b10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b40
 */

bool recovered_10005b40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

bool recovered_10005b70(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

bool recovered_10005b90(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

byte recovered_10005bb0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bf0
 */

bool recovered_10005bf0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10005c10(double value) {
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
float recovered_10005d40(float value){return (float)recovered_10005c10((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10005e80(long double value){return (long double)recovered_10005c10((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10005fb0(long end,long start){return (double)end-(double)start;}


#undef DAT_1000b5e0
#define DAT_1000b5e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000b620
#define DAT_1000b620 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x41U)))
#undef _DAT_1000b5e0
#define _DAT_1000b5e0 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef _DAT_1000b620
#define _DAT_1000b620 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005fd0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10002060(param_1);
  if ((longdouble)_DAT_1000b5e0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_1000b620 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000b5e0
#undef DAT_1000b620
#undef _DAT_1000b5e0
#undef _DAT_1000b620

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006020
 */

ulonglong recovered_10006020(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_100060cd;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_100060cd;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_100060cd;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_100060cd;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_100060cd:
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
 * Address: 0x10006160
 */

void recovered_10006160(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006020(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_1000b8e8
#define DAT_1000b8e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x309U)))
#undef DAT_1000c05c
#define DAT_1000c05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa7dU)))
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
 * Address: 0x10006170
 */

undefined4 recovered_10006170(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_100064f0((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10006300;
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
LAB_10006300:
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
    if (0x1f < uVar5) goto LAB_100063a8;
LAB_10006499:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_100063b0;
LAB_100064a4:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10006499;
LAB_100063a8:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_100064a4;
LAB_100063b0:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_100064cf:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_1000b8e8 + local_38 * 4) * local_20;
      pbVar9 = recovered_100064f0(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_100064cf;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_100064cf;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_100064cf;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000c05c) goto LAB_100064ab;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_100064cf;
    }
  }
LAB_100064ab:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10006300;
}

#undef DAT_1000b8e8
#undef DAT_1000c05c
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
 * Address: 0x100064f0
 */

byte * recovered_100064f0(uint in_ECX,int *in_EDX)

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
    goto LAB_100065c5;
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
    goto LAB_100065c5;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000651d_caseD_5;
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
LAB_100065c5:
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
switchD_1000651d_caseD_5:
  return pbVar3;
}


#undef str_1000bba6
#define str_1000bba6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006600
 */

char * recovered_10006600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return str_1000bba6;
}

#undef str_1000bba6

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006968
#define DAT_00006968 (*(uint8_t *)(0x6968U))
#undef DAT_1000ba9e
#define DAT_1000ba9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bfU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006968
#define _DAT_00006968 (*(code * *)(0x6968U))
#define local_18 (*(int *)(frame + 40))
#define local_28 (*(undefined1 (*)[8])(frame + 24))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006610(void *context,void *io,char *hostname)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  ulong count;
  int iVar2;
  char *text;
  uint uVar3;

  if (context != (void *)0x0) {
    recovered_100015f0(context,0,0x1f8);
    if (io != (void *)0x0) {
      *(undefined4 *)((int)context + 0x10) = *(undefined4 *)((int)io + 0x10);
      *(undefined4 *)((int)context + 0xc) = *(undefined4 *)((int)io + 0xc);
      *(undefined4 *)((int)context + 8) = *(undefined4 *)((int)io + 8);
      uVar1 = *(undefined4 *)io;
      *(undefined4 *)((int)context + 4) = *(undefined4 *)((int)io + 4);
      *(undefined4 *)context = uVar1;
    }
    text = &DAT_1000ba9e;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    count = recovered_10001a60(text);
    if (0x7e < count) {
      count = 0x7f;
    }
    recovered_10001360((void *)((int)context + 0x14),text,count);
    *(undefined1 *)((int)context + count + 0x14) = 0;
    recovered_100015f0(local_28,0,0x18);
    uVar3 = 0x574d544c;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x16b < _DAT_00006808 && (_DAT_00006968 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006968)(local_28);
      if (iVar2 != 0) {
        uVar3 = local_1c * 0x3c6ef35f ^ local_20 ^ local_18 * 0x19660d ^ 0x574d544c;
      }
    }
    *(uint *)((int)context + 0x1f0) = uVar3 ^ (uint)context ^ *(uint *)((int)context + 0x1f0);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006968
#undef DAT_1000ba9e
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006968
#undef local_18
#undef local_28
#undef local_20
#undef local_1c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_1000b934
#define DAT_1000b934 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x355U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
#undef str_1000bb3a
#define str_1000bb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55bU)))
#undef str_1000bbd4
#define str_1000bbd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f5U)))
#undef str_1000bbef
#define str_1000bbef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x610U)))
#undef str_1000bc0c
#define str_1000bc0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62dU)))
#undef str_1000bc14
#define str_1000bc14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x635U)))
#undef str_1000bc21
#define str_1000bc21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x642U)))
#undef str_1000bc62
#define str_1000bc62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x683U)))
#undef str_1000bc84
#define str_1000bc84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a5U)))
#define local_622 (*(undefined4 *)(frame + 78))
#define local_61e (*(undefined2 *)(frame + 82))
#define local_61c (*(undefined1 *)(frame + 84))
#define local_61b (*(undefined1 *)(frame + 85))
#define local_61a (*(undefined1 *)(frame + 86))
#define local_619 (*(undefined1 (*)[465])(frame + 87))
#define local_448 (*(undefined1 (*)[32])(frame + 552))
#define local_428 (*(undefined1 (*)[32])(frame + 584))
#define local_408 (*(undefined1 (*)[32])(frame + 616))
#define local_3e8 (*(undefined1 (*)[32])(frame + 648))
#define local_3c8 (*(undefined1 (*)[32])(frame + 680))
#define local_3a8 (*(ushort *)(frame + 712))
#define local_3a6 (*(undefined1 *)(frame + 714))
#define local_3a5 (*(undefined1 *)(frame + 715))
#define local_3a4 (*(undefined1 *)(frame + 716))
#define local_3a3 (*(undefined1 (*)[4])(frame + 717))
#define local_1a0 (*(undefined1 (*)[32])(frame + 1232))
#define local_180 (*(undefined1 (*)[32])(frame + 1264))
#define local_160 (*(undefined1 (*)[32])(frame + 1296))
#define local_140 (*(undefined4 *)(frame + 1328))
#define local_13c (*(undefined4 *)(frame + 1332))
#define local_138 (*(undefined4 *)(frame + 1336))
#define local_134 (*(undefined2 *)(frame + 1340))
#define local_40 (*(undefined1 (*)[32])(frame + 1584))
#define local_20 (*(ulong *)(frame + 1616))
#define local_1c (*(undefined4 * *)(frame + 1620))
#define local_18 (*(char * *)(frame + 1624))
#define local_14 (*(uint *)(frame + 1628))
#define uStack_39f (*(undefined4 *)(frame + 721))
#define auStack_39b (*(undefined1 (*)[3])(frame + 725))
#define uStack_398 (*(undefined4 *)(frame + 728))
#define auStack_394 (*(undefined1 (*)[4])(frame + 732))
#define uStack_390 (*(undefined4 *)(frame + 736))
#define auStack_38c (*(undefined1 (*)[14])(frame + 740))
#define uStack_37e (*(undefined4 *)(frame + 754))
#define auStack_37a (*(undefined1 (*)[474])(frame + 758))
#define format (*(char * *)(frame + 28))
#define local_648 (*(undefined1 *)(frame + 40))
#define local_647 (*(undefined1 *)(frame + 41))
#define local_646 (*(undefined1 *)(frame + 42))
#define local_645 (*(undefined1 *)(frame + 43))
#define local_644 (*(undefined2 *)(frame + 44))
#define local_642 (*(undefined1 (*)[32])(frame + 46))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10006730(void *context,char *error,ulong capacity)

{
  unsigned char frame[1680] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  byte *in_ECX;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  byte bVar8;

  bVar8 = 0;
  local_14 = 0;
  if ((((context == (void *)0x0) || (*(int *)((int)context + 4) == 0)) ||
      (*(int *)((int)context + 8) == 0)) || (*(char *)((int)context + 0x14) == '\0')) {
    format = str_1000bbd4;
  }
  else {
    local_18 = (char *)((int)context + 0x14);
    uVar2 = recovered_10001a60(local_18);
    if (uVar2 - 0xb5 < 0xffffff4c) {
      format = str_1000bbef;
    }
    else {
      recovered_10009fa0(context,local_40);
      recovered_10009fa0(context,local_1a0);
      recovered_100071b0(local_180,local_1a0,&DAT_1000b934);
      recovered_100015f0(&local_3a8,0,0x200);
      recovered_100015f0(&local_140,0,0x100);
      local_140 = (uint)CONCAT11((char)(uVar2 + 3),(char)(uVar2 + 3 >> 8));
      local_13c = CONCAT31(PF_PART3(local_13c, 1),(char)uVar2);
      recovered_10001360((void *)((int)&local_13c + 1),local_18,uVar2);
      uVar5 = uVar2 & 0xffff;
      local_20 = uVar5 + 5;
      local_3a8 = 0;
      local_3a6 = (undefined1)(local_20 >> 8);
      local_3a5 = (undefined1)local_20;
      recovered_10001360(&local_3a4,&local_140,local_20);
      local_140 = CONCAT13(PF_PART1(local_140, 3),0x40302);
      *(undefined4 *)(local_3a3 + uVar5 + 4) = 0x3002b00;
      recovered_10001360(auStack_39b + uVar5,&local_140,3);
      local_140 = 0x1d000200;
      *(undefined4 *)(auStack_39b + uVar5 + 3) = 0x4000a00;
      recovered_10001360(auStack_394 + uVar5,&local_140,4);
      local_140 = 0x3040c00;
      local_13c = 0x1040408;
      local_138 = 0x5080105;
      local_134 = 0x608;
      *(undefined4 *)(auStack_394 + uVar5 + 4) = 0xe000d00;
      recovered_10001360(auStack_38c + uVar5,&local_140,0xe);
      local_140 = 0x1d002400;
      local_13c = CONCAT22(PF_PART2(local_13c, 2),0x2000);
      recovered_10001360((void *)((int)&local_13c + 2),local_180,0x20);
      *(undefined4 *)(auStack_38c + uVar5 + 0xe) = 0x26003300;
      recovered_10001360(auStack_37a + uVar5,&local_140,0x26);
      uVar2 = uVar5 + 0x54;
      local_648 = 1;
      local_644 = 0x303;
      recovered_10001360(local_642,local_40,0x20);
      local_622 = 0x13020000;
      local_61e = 0x103;
      local_61c = 0;
      local_61b = (undefined1)(uVar2 >> 8);
      local_61a = (undefined1)uVar2;
      recovered_10001360(local_619,&local_3a8,uVar2);
      local_647 = 0;
      local_646 = (undefined1)(uVar5 + 0x7f >> 8);
      local_645 = (undefined1)(uVar5 + 0x7f);
      uVar2 = uVar5 + 0x83;
      local_1c = (undefined4 *)((int)context + 0x94);
      *(undefined4 *)((int)context + 0x94) = 0x6a09e667;
      *(undefined4 *)((int)context + 0x98) = 0xbb67ae85;
      *(undefined4 *)((int)context + 0x9c) = 0x3c6ef372;
      *(undefined4 *)((int)context + 0xa0) = 0xa54ff53a;
      *(undefined4 *)((int)context + 0xa4) = 0x510e527f;
      *(undefined4 *)((int)context + 0xa8) = 0x9b05688c;
      *(undefined4 *)((int)context + 0xac) = 0x1f83d9ab;
      *(undefined4 *)((int)context + 0xb0) = 0x5be0cd19;
      *(undefined4 *)((int)context + 0xb8) = 0;
      *(undefined4 *)((int)context + 0xb4) = 0;
      *(undefined4 *)((int)context + 0xfc) = 0;
      recovered_10006d50(local_1c,&local_648,uVar2);
      local_3a8 = 0x316;
      local_3a6 = 1;
      local_3a5 = (undefined1)(uVar2 >> 8);
      local_3a4 = (undefined1)uVar2;
      recovered_10001360(local_3a3,&local_648,uVar2);
      if (*(code **)((int)context + 8) == (code *)0x0) {
        format = str_1000bc62;
      }
      else {
        cVar1 = (**(code **)((int)context + 8))
                          (*(undefined4 *)context,&local_3a8,local_20 + 0x83,error,capacity);
        if (cVar1 == '\0') {
          return 0;
        }
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
            ((0xb < _DAT_00006808 && ((0x4f < _DAT_00006808 && (_DAT_0000684c != (code *)0x0))))))
           && (in_ECX = (byte *)(*_DAT_0000684c)(0x4100), in_ECX != (byte *)0x0)) {
          local_3a8 = local_3a8 & 0xff00;
          uVar5 = recovered_100098d0(context,(void *)0x0,(byte *)&local_3a8,in_ECX,0x4100,&local_14,
                                     error,capacity);
          if ((char)uVar5 != '\0') {
            if ((char)local_3a8 == '\x16') {
              uVar3 = recovered_10006ff0((char *)in_ECX,local_14,&local_140,error,capacity);
              puVar6 = local_1c;
              if ((char)uVar3 != '\0') {
                recovered_10006d50(local_1c,in_ECX,local_14);
                recovered_10006fa0();
                recovered_100071b0(local_40,local_1a0,&local_140);
                recovered_100015f0(local_448,0,0x20);
                recovered_10008900(local_448,local_448,local_428);
                recovered_10008990(local_428,str_1000bc0c,(void *)0x0,local_408);
                recovered_10008900(local_408,local_40,local_160);
                puVar7 = &local_3a8;
                for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(undefined4 *)puVar7 = *puVar6;
                  puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                  puVar7 = puVar7 + ((uint)bVar8 * -2 + 1) * 2;
                }
                recovered_1000a760(&local_3a8,local_3e8);
                recovered_1000a830(local_160,str_1000bc14,local_3e8,0x20,&local_3a8,0x20);
                recovered_1000a830(local_160,str_1000bc21,local_3e8,0x20,local_3c8,0x20);
                recovered_10008a30((void *)((int)context + 0x100),&local_3a8);
                recovered_10008a30((void *)((int)context + 0x134),local_3c8);
                *(undefined1 *)((int)context + 500) = 1;
                uVar3 = recovered_10008aa0((int)context,local_3c8,local_160,&local_3a8,error,
                                           capacity);
                if ((char)uVar3 == '\0') {
                  return 0;
                }
                uVar3 = 0;
                if ((*(code **)((int)context + 0x10) == (code *)0x0) ||
                   (uVar3 = (**(code **)((int)context + 0x10))
                                      (*(undefined4 *)context,local_18,(int)context + 0x1d0,
                                       *(undefined1 *)((int)context + 0x1f6),error,capacity),
                   (char)uVar3 != '\0')) {
                  return CONCAT31((int3)((uint)uVar3 >> 8),1);
                }
                return 0;
              }
            }
            else {
              pf_varargs_10003ce0___(error,capacity,str_1000bc84);
            }
          }
          recovered_10006fa0();
          return 0;
        }
        format = str_1000bb3a;
      }
    }
  }
  pf_varargs_10003ce0___(error,capacity,format);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_1000b934
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef str_1000bb3a
#undef str_1000bbd4
#undef str_1000bbef
#undef str_1000bc0c
#undef str_1000bc14
#undef str_1000bc21
#undef str_1000bc62
#undef str_1000bc84
#undef local_622
#undef local_61e
#undef local_61c
#undef local_61b
#undef local_61a
#undef local_619
#undef local_448
#undef local_428
#undef local_408
#undef local_3e8
#undef local_3c8
#undef local_3a8
#undef local_3a6
#undef local_3a5
#undef local_3a4
#undef local_3a3
#undef local_1a0
#undef local_180
#undef local_160
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_40
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef uStack_39f
#undef auStack_39b
#undef uStack_398
#undef auStack_394
#undef uStack_390
#undef auStack_38c
#undef uStack_37e
#undef auStack_37a
#undef format
#undef local_648
#undef local_647
#undef local_646
#undef local_645
#undef local_644
#undef local_642

#undef DAT_1000ba54
#define DAT_1000ba54 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x475U)))
#define local_160 (*(uint (*)[65])(frame + 16))
#define local_5c (*(void * *)(frame + 276))
#define local_58 (*(uint *)(frame + 280))
#define local_54 (*(uint *)(frame + 284))
#define local_50 (*(uint *)(frame + 288))
#define local_4c (*(uint *)(frame + 292))
#define local_48 (*(uint *)(frame + 296))
#define local_44 (*(uint *)(frame + 300))
#define local_40 (*(uint *)(frame + 304))
#define local_3c (*(uint *)(frame + 308))
#define local_38 (*(int *)(frame + 312))
#define local_34 (*(ulong *)(frame + 316))
#define local_30 (*(uint *)(frame + 320))
#define local_2c (*(uint *)(frame + 324))
#define local_28 (*(uint *)(frame + 328))
#define local_24 (*(uint * *)(frame + 332))
#define local_20 (*(uint *)(frame + 336))
#define local_1c (*(uint *)(frame + 340))
#define local_18 (*(uint *)(frame + 344))
#define local_14 (*(uint *)(frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d50
 */

void recovered_10006d50(void *context,void *data,ulong size)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  if ((context != (void *)0x0) && (data != (void *)0x0 || size == 0)) {
    puVar1 = (uint *)((int)context + 0x20);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + size;
    *(int *)((int)context + 0x24) = *(int *)((int)context + 0x24) + (uint)CARRY4(uVar4,size);
    if (size != 0) {
      local_160[0x40] = (int)context + 0x28;
      uVar4 = *(uint *)((int)context + 0x68);
      local_24 = context;
      do {
        local_34 = 0x40 - uVar4;
        if (size <= 0x40 - uVar4) {
          local_34 = size;
        }
        recovered_10001360((void *)(uVar4 + local_160[0x40]),data,local_34);
        uVar4 = *(uint *)((int)context + 0x68) + local_34;
        *(uint *)((int)context + 0x68) = uVar4;
        if (uVar4 == 0x40) {
          local_58 = size;
          iVar5 = -0x40;
          do {
            uVar4 = *(uint *)((int)context + iVar5 + 0x68);
            *(uint *)((int)local_160 + iVar5 + 0x40) =
                 uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
            iVar5 = iVar5 + 4;
          } while (iVar5 != 0);
          local_5c = data;
          iVar5 = -0xc0;
          uVar4 = local_160[0];
          do {
            local_14 = *(uint *)((int)local_160 + iVar5 + 0xc4);
            uVar11 = *(uint *)((int)local_160 + iVar5 + 0xf8);
            *(uint *)((int)local_160 + iVar5 + 0x100) =
                 uVar4 + *(int *)((int)local_160 + iVar5 + 0xe4) +
                 (local_14 >> 3 ^
                 (local_14 << 0xe | local_14 >> 0x12) ^ (local_14 << 0x19 | local_14 >> 7)) +
                 (uVar11 >> 10 ^ (uVar11 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 0xf | uVar11 >> 0x11)
                 );
            iVar5 = iVar5 + 4;
            uVar4 = local_14;
          } while (iVar5 != 0);
          local_28 = *local_24;
          local_44 = local_24[1];
          local_2c = local_24[2];
          local_30 = local_24[3];
          local_48 = local_24[4];
          local_4c = local_24[5];
          local_50 = local_24[6];
          local_54 = local_24[7];
          local_38 = -0x100;
          uVar8 = local_28;
          uVar7 = local_54;
          uVar4 = local_50;
          uVar11 = local_48;
          local_20 = local_4c;
          local_1c = local_2c;
          local_18 = local_44;
          local_14 = local_30;
          do {
            uVar10 = uVar11;
            local_3c = uVar4;
            uVar6 = uVar8;
            uVar11 = local_14;
            uVar3 = local_18;
            uVar2 = local_1c;
            uVar4 = local_20;
            local_40 = local_20;
            uVar9 = local_20 ^ local_3c;
            local_20 = uVar10;
            local_14 = local_1c;
            uVar8 = local_1c ^ local_18;
            local_18 = uVar6;
            local_1c = uVar3;
            iVar5 = (uVar9 & uVar10 ^ local_3c) +
                    ((uVar10 << 7 | uVar10 >> 0x19) ^
                    (uVar10 << 0x15 | uVar10 >> 0xb) ^ (uVar10 << 0x1a | uVar10 >> 6)) + uVar7 +
                    *(int *)((int)&DAT_1000ba54 + local_38) +
                    *(int *)((int)local_160 + local_38 + 0x100);
            uVar11 = uVar11 + iVar5;
            uVar8 = (uVar2 & uVar3 ^ uVar8 & uVar6) +
                    ((uVar6 << 10 | uVar6 >> 0x16) ^
                    (uVar6 << 0x13 | uVar6 >> 0xd) ^ (uVar6 << 0x1e | uVar6 >> 2)) + iVar5;
            local_38 = local_38 + 4;
            uVar7 = local_3c;
          } while (local_38 != 0);
          *local_24 = uVar8 + local_28;
          local_24[1] = uVar6 + local_44;
          local_24[2] = uVar3 + local_2c;
          local_24[3] = uVar2 + local_30;
          local_24[4] = uVar11 + local_48;
          local_24[5] = uVar10 + local_4c;
          local_24[6] = uVar4 + local_50;
          local_24[7] = local_3c + local_54;
          local_24[0x1a] = 0;
          uVar4 = 0;
          context = local_24;
          data = local_5c;
          size = local_58;
        }
        data = (void *)((int)data + local_34);
        size = size - local_34;
      } while (size != 0);
    }
  }
  return;
}

#undef DAT_1000ba54
#undef local_160
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
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
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006fa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))) {
    (*_DAT_00006850)();
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850

#undef str_1000bca2
#define str_1000bca2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c3U)))
#undef str_1000bcbb
#define str_1000bcbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6dcU)))
#undef str_1000bcd5
#define str_1000bcd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f6U)))
#undef str_1000bcf1
#define str_1000bcf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x712U)))
#undef str_1000bd0b
#define str_1000bd0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72cU)))
#undef str_1000bd37
#define str_1000bd37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x758U)))
#undef str_1000bd50
#define str_1000bd50 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x771U)))
#undef str_1000bd69
#define str_1000bd69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78aU)))
#undef str_1000bd7f
#define str_1000bd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

undefined4 recovered_10006ff0(char *in_ECX,uint in_EDX,void *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char *format;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;

  format = str_1000bca2;
  if ((((3 < in_EDX) && (*in_ECX == '\x02')) &&
      (uVar5 = (uint)(byte)in_ECX[2] << 8 | (uint)(byte)in_ECX[1] << 0x10, format = str_1000bcbb,
      0x25 < uVar5 + (byte)in_ECX[3] && (byte)in_ECX[3] + 4 + uVar5 <= in_EDX)) &&
     ((format = str_1000bcd5, in_ECX[4] == '\x03' && (in_ECX[5] == '\x03')))) {
    uVar5 = (uint)(byte)in_ECX[0x26];
    format = str_1000bcf1;
    if (((uVar5 + 0x2b <= in_EDX) &&
        ((format = str_1000bd0b,
         (ushort)(*(ushort *)(in_ECX + uVar5 + 0x27) << 8 | *(ushort *)(in_ECX + uVar5 + 0x27) >> 8)
         == 0x1303 && (format = str_1000bd37, in_ECX[uVar5 + 0x29] == '\0')))) &&
       (uVar3 = uVar5 + 0x2c, uVar3 <= in_EDX)) {
      uVar7 = (ushort)(*(ushort *)(in_ECX + uVar5 + 0x2a) << 8 |
                      *(ushort *)(in_ECX + uVar5 + 0x2a) >> 8) + uVar3;
      format = str_1000bd50;
      if (uVar7 <= in_EDX) {
        uVar5 = uVar5 + 0x30;
        format = str_1000bd7f;
        if (uVar5 <= uVar7) {
          bVar1 = 0;
          bVar8 = false;
          do {
            uVar2 = *(ushort *)(in_ECX + uVar3 + 2) << 8 | *(ushort *)(in_ECX + uVar3 + 2) >> 8;
            uVar4 = uVar2 + uVar5;
            if (uVar7 < uVar4) {
              format = str_1000bd69;
              goto LAB_10007192;
            }
            uVar6 = *(ushort *)(in_ECX + uVar3) << 8 | *(ushort *)(in_ECX + uVar3) >> 8;
            if ((uVar6 == 0x2b) && (1 < uVar2)) {
              bVar8 = (ushort)(*(ushort *)(in_ECX + uVar5) << 8 | *(ushort *)(in_ECX + uVar5) >> 8)
                      == 0x304;
            }
            else if ((uVar6 == 0x33) &&
                    (((0x23 < uVar2 &&
                      ((ushort)(*(ushort *)(in_ECX + uVar5) << 8 | *(ushort *)(in_ECX + uVar5) >> 8)
                       == 0x1d)) &&
                     ((ushort)(*(ushort *)(in_ECX + uVar5 + 2) << 8 |
                              *(ushort *)(in_ECX + uVar5 + 2) >> 8) == 0x20)))) {
              recovered_10001360(param_3,in_ECX + uVar5 + 4,0x20);
              bVar1 = 1;
            }
            uVar5 = uVar4 + 4;
            uVar3 = uVar4;
          } while (uVar5 <= uVar7);
          if ((bool)(bVar8 & bVar1)) {
            return CONCAT31((int3)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
LAB_10007192:
  pf_varargs_10003ce0___(param_4,param_5,format);
  return 0;
}

#undef str_1000bca2
#undef str_1000bcbb
#undef str_1000bcd5
#undef str_1000bcf1
#undef str_1000bd0b
#undef str_1000bd37
#undef str_1000bd50
#undef str_1000bd69
#undef str_1000bd7f

/* Recovered X25519 over the reference's seventeen radix-2^15 limbs.
 * Pooka's Free Software License. */
typedef struct {uint32_t limb[17];} pf_tls_field;
static pf_tls_field pf_tls_reduce(uint64_t value[17]){
 for(unsigned pass=0;pass<4;++pass){
  uint64_t carry=0;
  for(unsigned i=0;i<17;++i){uint64_t word=value[i]+carry;value[i]=word&32767;carry=word>>15;}
  value[0]+=19*carry;
 }
 pf_tls_field out;
 for(unsigned i=0;i<17;++i)out.limb[i]=(uint32_t)value[i];
 unsigned top=1;for(unsigned i=1;i<17;++i)top&=out.limb[i]==32767;
 if(top&&out.limb[0]>=32749){out.limb[0]-=32749;for(unsigned i=1;i<17;++i)out.limb[i]=0;}
 return out;
}
static pf_tls_field pf_tls_add(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_sub(pf_tls_field a,pf_tls_field b){
 uint64_t words[17];for(unsigned i=0;i<17;++i)words[i]=(uint64_t)a.limb[i]+2*(i?32767:32749)-b.limb[i];return pf_tls_reduce(words);
}
static pf_tls_field pf_tls_mul(pf_tls_field a,pf_tls_field b){
 uint64_t words[34]={0};
 for(unsigned i=0;i<17;++i)for(unsigned j=0;j<17;++j)words[i+j]+=(uint64_t)a.limb[i]*b.limb[j];
 for(unsigned i=33;i>16;--i)words[i-17]+=19*words[i];
 return pf_tls_reduce(words);
}
static void pf_tls_swap(pf_tls_field *a,pf_tls_field *b,unsigned bit){
 uint32_t mask=0U-bit;for(unsigned i=0;i<17;++i){uint32_t change=mask&(a->limb[i]^b->limb[i]);a->limb[i]^=change;b->limb[i]^=change;}
}
void recovered_100071b0(void *output,void *scalar,void *point){
 if(!output||!scalar||!point)return;
 uint8_t key[32];for(unsigned i=0;i<32;++i)key[i]=((uint8_t *)scalar)[i];key[0]&=248;key[31]=(key[31]&127)|64;
 pf_tls_field x1={{0}},x2={{1}},z2={{0}},x3,z3={{1}},a24={{121665&32767,121665>>15}};
 for(unsigned i=0;i<255;++i)x1.limb[i/15]|=(uint32_t)((((uint8_t *)point)[i/8]>>(i&7))&1)<<(i%15);
 x3=x1;unsigned previous=0;
 for(int i=254;i>=0;--i){
  unsigned bit=(key[i/8]>>(i&7))&1;pf_tls_swap(&x2,&x3,previous^bit);pf_tls_swap(&z2,&z3,previous^bit);previous=bit;
  pf_tls_field a=pf_tls_add(x2,z2),b=pf_tls_sub(x2,z2),aa=pf_tls_mul(a,a),bb=pf_tls_mul(b,b),e=pf_tls_sub(aa,bb);
  pf_tls_field c=pf_tls_add(x3,z3),d=pf_tls_sub(x3,z3),da=pf_tls_mul(d,a),cb=pf_tls_mul(c,b);
  pf_tls_field sum=pf_tls_add(da,cb),difference=pf_tls_sub(da,cb);
  x3=pf_tls_mul(sum,sum);z3=pf_tls_mul(x1,pf_tls_mul(difference,difference));x2=pf_tls_mul(aa,bb);z2=pf_tls_mul(e,pf_tls_add(aa,pf_tls_mul(a24,e)));
 }
 pf_tls_swap(&x2,&x3,previous);pf_tls_swap(&z2,&z3,previous);
 pf_tls_field inverse={{1}};
 for(int bit=254;bit>=0;--bit){inverse=pf_tls_mul(inverse,inverse);if(bit!=4&&bit!=2)inverse=pf_tls_mul(inverse,z2);}
 pf_tls_field result=pf_tls_mul(x2,inverse);
 for(unsigned i=0;i<32;++i)((uint8_t *)output)[i]=0;
 for(unsigned i=0;i<255;++i)((uint8_t *)output)[i/8]|=(uint8_t)(((result.limb[i/15]>>(i%15))&1)<<(i&7));
}


#define local_128 (*(undefined1 (*)[108])(frame + 24))
#define local_bc (*(undefined1 (*)[108])(frame + 132))
#define local_50 (*(undefined1 (*)[32])(frame + 240))
#define local_30 (*(undefined1 (*)[32])(frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008900
 */

void recovered_10008900(void *salt,void *input,void *output)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    salt = local_30;
    recovered_100015f0(salt,0,0x20);
  }
  recovered_1000a620(local_128,local_bc,salt);
  recovered_10006d50(local_128,input,0x20);
  recovered_1000a760(local_128,local_50);
  recovered_10006d50(local_bc,local_50,0x20);
  recovered_1000a760(local_bc,output);
  return;
}

#undef local_128
#undef local_bc
#undef local_50
#undef local_30

#define local_9c (*(undefined1 (*)[32])(frame + 20))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(undefined4 *)(frame + 56))
#define local_74 (*(undefined4 *)(frame + 60))
#define local_70 (*(undefined4 *)(frame + 64))
#define local_6c (*(undefined4 *)(frame + 68))
#define local_68 (*(undefined4 *)(frame + 72))
#define local_64 (*(undefined4 *)(frame + 76))
#define local_60 (*(undefined4 *)(frame + 80))
#define local_5c (*(undefined4 *)(frame + 84))
#define local_58 (*(undefined4 *)(frame + 88))
#define local_14 (*(undefined4 *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008990
 */

void recovered_10008990(void *secret,char *label,void *hash,void *output)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    local_7c = 0x6a09e667;
    local_78 = 0xbb67ae85;
    local_74 = 0x3c6ef372;
    local_70 = 0xa54ff53a;
    local_6c = 0x510e527f;
    local_68 = 0x9b05688c;
    local_64 = 0x1f83d9ab;
    local_60 = 0x5be0cd19;
    local_14 = 0;
    local_58 = 0;
    local_5c = 0;
    hash = local_9c;
    recovered_1000a760(&local_7c,hash);
  }
  recovered_1000a830(secret,label,hash,0x20,output,0x20);
  return;
}

#undef local_9c
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
#undef local_14

#undef DAT_1000bdb2
#define DAT_1000bdb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d3U)))
#undef DAT_1000bdb6
#define DAT_1000bdb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a30
 */

void recovered_10008a30(void *output,void *secret)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (secret != (void *)0x0 && output != (void *)0x0) {
    recovered_100015f0(output,0,0x34);
    recovered_1000a830(secret,&DAT_1000bdb2,(void *)0x0,0,output,0x20);
    recovered_1000a830(secret,&DAT_1000bdb6,(void *)0x0,0,(void *)((int)output + 0x20),0xc);
    *(undefined4 *)((int)output + 0x30) = 0;
    *(undefined4 *)((int)output + 0x2c) = 0;
  }
  return;
}

#undef DAT_1000bdb2
#undef DAT_1000bdb6

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_1000bdb2
#define DAT_1000bdb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d3U)))
#undef DAT_1000bdb6
#define DAT_1000bdb6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d7U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#undef str_1000bb3a
#define str_1000bb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55bU)))
#undef str_1000bc0c
#define str_1000bc0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62dU)))
#undef str_1000bdb9
#define str_1000bdb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7daU)))
#undef str_1000bdcf
#define str_1000bdcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f0U)))
#undef str_1000bde7
#define str_1000bde7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x808U)))
#undef str_1000be03
#define str_1000be03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x824U)))
#undef str_1000be0c
#define str_1000be0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_1000be2d
#define str_1000be2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84eU)))
#undef str_1000be3a
#define str_1000be3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#define local_8c (*(undefined4 *)(frame + 596))
#define local_88 (*(undefined4 *)(frame + 600))
#define local_84 (*(undefined4 *)(frame + 604))
#define local_40 (*(undefined4 *)(frame + 672))
#define local_3c (*(undefined4 * *)(frame + 676))
#define local_38 (*(void * *)(frame + 680))
#define local_34 (*(undefined4 * *)(frame + 684))
#define local_30 (*(void * *)(frame + 688))
#define local_2c (*(int *)(frame + 692))
#define local_28 (*(uint *)(frame + 696))
#define local_24 (*(uint *)(frame + 700))
#define local_20 (*(undefined4 * *)(frame + 704))
#define local_1c (*(void * *)(frame + 708))
#define local_18 (*(byte * *)(frame + 712))
#define local_14 (*(undefined4 * *)(frame + 716))
#define local_2b8 (*(undefined1 (*)[32])(frame + 40))
#define local_298 (*(undefined1 (*)[32])(frame + 72))
#define local_278 (*(undefined1 (*)[32])(frame + 104))
#define local_258 (*(undefined1 (*)[108])(frame + 136))
#define local_1ec (*(undefined1 (*)[32])(frame + 244))
#define local_1cc (*(byte (*)[32])(frame + 276))
#define local_1ac (*(byte (*)[32])(frame + 308))
#define local_18c (*(undefined1 (*)[32])(frame + 340))
#define local_16c (*(undefined1 (*)[32])(frame + 372))
#define local_14c (*(undefined1 (*)[32])(frame + 404))
#define local_12c (*(undefined1 (*)[32])(frame + 436))
#define local_10c (*(undefined4 *)(frame + 468))
#define local_108 (*(undefined1 (*)[32])(frame + 472))
#define local_e8 (*(byte (*)[32])(frame + 504))
#define local_c8 (*(uint (*)[8])(frame + 536))
#define local_a8 (*(undefined4 *)(frame + 568))
#define local_a4 (*(undefined4 *)(frame + 572))
#define format (*(char * *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 576))
#define local_9c (*(undefined4 *)(frame + 580))
#define local_98 (*(undefined4 *)(frame + 584))
#define local_94 (*(undefined4 *)(frame + 588))
#define local_90 (*(undefined4 *)(frame + 592))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008aa0
 */

/* WARNING: Removing unreachable block (ram,0x10008ca4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10008aa0(int in_ECX,void *in_EDX,void *param_3,void *param_4,char *param_5,ulong param_6)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  void *destination;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *source;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  byte bVar13;

  bVar13 = 0;
  source = (byte *)0x0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x4f < _DAT_00006808 && (_DAT_0000684c != (code *)0x0)))) {
    source = (byte *)(*_DAT_0000684c)(0x4100);
  }
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 && ((0x4f < _DAT_00006808 && (_DAT_0000684c != (code *)0x0)))))) {
    local_38 = in_EDX;
    local_14 = (undefined4 *)in_ECX;
    destination = (void *)(*_DAT_0000684c)(0x8000);
    puVar9 = local_14;
    bVar12 = destination != (void *)0x0;
    if (source != (byte *)0x0 && bVar12) {
      local_3c = local_14 + 0x4d;
      local_e8[0] = 0;
      local_c8[0] = 0;
      uVar3 = recovered_100098d0(local_14,local_3c,local_e8,source,0x4100,local_c8,param_5,param_6);
      if ((char)uVar3 == '\0') {
LAB_100093e1:
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))) {
LAB_10009417:
          (*_DAT_00006850)(source);
        }
LAB_1000941c:
        if (_DAT_00006800 != 0x50414d57) {
          return 0;
        }
        if (_DAT_00006804 == 0) {
          return 0;
        }
        if (_DAT_00006808 < 0xc) {
          return 0;
        }
        if (_DAT_00006808 < 0x54) {
          return 0;
        }
        if (_DAT_00006850 == (code *)0x0) {
          return 0;
        }
        (*_DAT_00006850)(destination);
        return 0;
      }
      local_34 = puVar9 + 0x74;
      local_20 = puVar9 + 0x25;
      uVar3 = 0;
      local_1c = destination;
      local_18 = source;
LAB_10008c86:
      if (local_e8[0] == 0x16) {
        if (0x8000 - uVar3 < local_c8[0]) {
          format = str_1000bdcf;
          goto LAB_100093d3;
        }
        recovered_10001360((void *)((int)destination + uVar3),source,local_c8[0]);
        local_24 = uVar3 + local_c8[0];
        if (3 < local_24) {
          uVar3 = 0;
LAB_10008d18:
          uVar4 = (uint)*(byte *)((int)destination + uVar3 + 3) |
                  (uint)*(byte *)((int)destination + uVar3 + 2) << 8 |
                  (uint)*(byte *)((int)destination + uVar3 + 1) << 0x10;
          if (uVar3 + 4 + uVar4 <= local_24) {
            local_30 = (void *)((int)destination + uVar3);
            if (*(char *)((int)destination + uVar3) != '\x14') goto code_r0x10008d51;
            if (uVar4 == 0x20) {
              puVar9 = local_20;
              puVar10 = &local_a8;
              local_28 = uVar3;
              for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
              }
              recovered_1000a760(&local_a8,local_1ec);
              recovered_1000a830(local_38,str_1000be03,(void *)0x0,0,local_2b8,0x20);
              recovered_1000a620(&local_a8,local_258,local_2b8);
              recovered_10006d50(&local_a8,local_1ec,0x20);
              recovered_1000a760(&local_a8,&local_10c);
              recovered_10006d50(local_258,&local_10c,0x20);
              recovered_1000a760(local_258,local_1cc);
              iVar8 = -0x20;
              bVar2 = 0;
              do {
                bVar2 = bVar2 | *(byte *)((int)local_30 + iVar8 + 0x24) ^ local_1ac[iVar8];
                iVar8 = iVar8 + 1;
              } while (iVar8 != 0);
              if (bVar2 == 0) {
                recovered_10006d50(local_20,local_30,0x24);
                uVar3 = local_28 + 0x24;
                bVar12 = true;
                destination = local_1c;
                goto LAB_10008f6d;
              }
              pf_varargs_10003ce0___(param_5,param_6,str_1000be0c);
              destination = local_1c;
              source = local_18;
            }
            else {
              pf_varargs_10003ce0___(param_5,param_6,str_1000bde7);
              source = local_18;
            }
            local_18 = source;
            if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc))
               || ((_DAT_00006808 < 0x54 || (_DAT_00006850 == (code *)0x0)))) goto LAB_1000941c;
            goto LAB_10009417;
          }
          bVar12 = false;
          goto LAB_10008f6d;
        }
        puVar9 = local_14;
        goto LAB_10008c40;
      }
      if (local_e8[0] != 0x15) {
        local_24 = uVar3;
        goto LAB_10008c40;
      }
      format = str_1000bdb9;
LAB_100093d3:
      pf_varargs_10003ce0___(param_5,param_6,format);
      goto LAB_100093e1;
    }
    if (source != (byte *)0x0) goto LAB_10008be2;
  }
  else {
    destination = (void *)0x0;
    bVar12 = false;
    if (source == (byte *)0x0) goto LAB_100093a0;
LAB_10008be2:
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))))) {
      (*_DAT_00006850)(source);
    }
  }
  if ((((bVar12) && (_DAT_00006800 == 0x50414d57)) && (_DAT_00006804 != 0)) &&
     (((0xb < _DAT_00006808 && (0x53 < _DAT_00006808)) && (_DAT_00006850 != (code *)0x0)))) {
    (*_DAT_00006850)(destination);
  }
LAB_100093a0:
  pf_varargs_10003ce0___(param_5,param_6,str_1000bb3a);
  return 0;
code_r0x10008d51:
  uVar1 = local_28;
  if ((*(char *)((int)destination + uVar3) == '\v') && (6 < uVar4)) {
    uVar5 = (uint)*(byte *)((int)local_30 + 4);
    uVar1 = uVar5 + 4;
    if (uVar1 <= uVar4) {
      local_2c = (int)local_30 + 4;
      destination = local_1c;
      if (*(char *)((int)local_30 + uVar5 + 7) != '\0' ||
          (*(char *)((int)local_30 + uVar5 + 6) != '\0' ||
          *(char *)((int)local_30 + uVar5 + 5) != '\0')) {
        uVar6 = uVar5 + 7;
        if (uVar6 <= uVar4) {
          local_28 = (uint)*(byte *)((int)local_30 + uVar5 + 10) |
                     (uint)*(byte *)((int)local_30 + uVar5 + 9) << 8 |
                     (uint)*(byte *)(local_2c + uVar1) << 0x10;
          if ((local_28 != 0) && (local_28 + uVar6 <= uVar4)) {
            local_a8 = 0x6a09e667;
            local_a4 = 0xbb67ae85;
            local_a0 = 0x3c6ef372;
            local_9c = 0xa54ff53a;
            local_98 = 0x510e527f;
            local_94 = 0x9b05688c;
            local_90 = 0x1f83d9ab;
            local_8c = 0x5be0cd19;
            local_84 = 0;
            local_88 = 0;
            local_40 = 0;
            recovered_10006d50(&local_a8,(void *)(local_2c + uVar6),local_28);
            recovered_1000a760(&local_a8,local_34);
            *(undefined1 *)((int)local_14 + 0x1f6) = 1;
            uVar1 = local_28;
          }
        }
      }
    }
  }
  local_28 = uVar1;
  recovered_10006d50(local_20,local_30,uVar4 + 4);
  uVar1 = uVar4 + 4 + uVar3;
  uVar4 = uVar4 + 8 + uVar3;
  uVar3 = uVar1;
  if (local_24 < uVar4) goto LAB_10008f69;
  goto LAB_10008d18;
LAB_10008f69:
  bVar12 = false;
LAB_10008f6d:
  source = local_18;
  puVar9 = local_14;
  if (uVar3 != 0) {
    local_24 = local_24 - uVar3;
    if (local_24 == 0) {
      local_24 = 0;
    }
    else {
      recovered_10001420(destination,(void *)(uVar3 + (int)destination),local_24);
      puVar9 = local_14;
    }
  }
  local_14 = puVar9;
  if (bVar12) {
    puVar10 = local_20;
    puVar11 = &local_a8;
    for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    recovered_1000a760(&local_a8,local_e8);
    local_a8 = 0x6a09e667;
    local_a4 = 0xbb67ae85;
    local_a0 = 0x3c6ef372;
    local_9c = 0xa54ff53a;
    local_98 = 0x510e527f;
    local_94 = 0x9b05688c;
    local_90 = 0x1f83d9ab;
    local_8c = 0x5be0cd19;
    local_40 = 0;
    local_84 = 0;
    local_88 = 0;
    recovered_1000a760(&local_a8,local_258);
    recovered_1000a830(param_3,str_1000bc0c,local_258,0x20,local_1ac,0x20);
    recovered_100015f0(local_14c,0,0x20);
    recovered_1000a620(&local_a8,local_258,local_1ac);
    recovered_10006d50(&local_a8,local_14c,0x20);
    recovered_1000a760(&local_a8,&local_10c);
    recovered_10006d50(local_258,&local_10c,0x20);
    recovered_1000a760(local_258,local_298);
    recovered_1000a830(local_298,str_1000be2d,local_e8,0x20,local_18c,0x20);
    recovered_1000a830(local_298,str_1000be3a,local_e8,0x20,local_16c,0x20);
    recovered_100015f0(puVar9 + 0x5a,0,0x34);
    recovered_1000a830(local_18c,&DAT_1000bdb2,(void *)0x0,0,puVar9 + 0x5a,0x20);
    recovered_1000a830(local_18c,&DAT_1000bdb6,(void *)0x0,0,puVar9 + 0x62,0xc);
    puVar9[0x66] = 0;
    puVar9[0x65] = 0;
    recovered_100015f0(puVar9 + 0x67,0,0x34);
    recovered_1000a830(local_16c,&DAT_1000bdb2,(void *)0x0,0,puVar9 + 0x67,0x20);
    recovered_1000a830(local_16c,&DAT_1000bdb6,(void *)0x0,0,puVar9 + 0x6f,0xc);
    puVar9[0x73] = 0;
    puVar9[0x72] = 0;
    *(undefined1 *)((int)puVar9 + 0x1f5) = 1;
    local_10c = 0x20000014;
    puVar9 = local_20;
    puVar10 = &local_a8;
    for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    }
    recovered_1000a760(&local_a8,local_12c);
    recovered_1000a830(param_4,str_1000be03,(void *)0x0,0,local_278,0x20);
    recovered_1000a620(&local_a8,local_258,local_278);
    recovered_10006d50(&local_a8,local_12c,0x20);
    recovered_1000a760(&local_a8,local_c8);
    recovered_10006d50(local_258,local_c8,0x20);
    recovered_1000a760(local_258,local_108);
    uVar7 = recovered_10009570(local_14,local_14 + 0x40,0x16,&local_10c,0x24,param_5,param_6);
    if ((char)uVar7 != '\0') {
      recovered_10006d50(local_20,&local_10c,0x24);
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))))) {
      (*_DAT_00006850)(local_18);
    }
    if (_DAT_00006800 != 0x50414d57) {
      return uVar7;
    }
    if (_DAT_00006804 == 0) {
      return uVar7;
    }
    if (_DAT_00006808 < 0xc) {
      return uVar7;
    }
    if (_DAT_00006808 < 0x54) {
      return uVar7;
    }
    if (_DAT_00006850 == (code *)0x0) {
      return uVar7;
    }
    (*_DAT_00006850)(local_1c);
    return uVar7;
  }
LAB_10008c40:
  local_e8[0] = 0;
  local_c8[0] = 0;
  uVar4 = recovered_100098d0(puVar9,local_3c,local_e8,source,0x4100,local_c8,param_5,param_6);
  uVar3 = local_24;
  if ((char)uVar4 == '\0') goto LAB_100093e1;
  goto LAB_10008c86;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef DAT_1000bdb2
#undef DAT_1000bdb6
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef str_1000bb3a
#undef str_1000bc0c
#undef str_1000bdb9
#undef str_1000bdcf
#undef str_1000bde7
#undef str_1000be03
#undef str_1000be0c
#undef str_1000be2d
#undef str_1000be3a
#undef local_8c
#undef local_88
#undef local_84
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
#undef local_2b8
#undef local_298
#undef local_278
#undef local_258
#undef local_1ec
#undef local_1cc
#undef local_1ac
#undef local_18c
#undef local_16c
#undef local_14c
#undef local_12c
#undef local_10c
#undef local_108
#undef local_e8
#undef local_c8
#undef local_a8
#undef local_a4
#undef format
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90

#undef str_1000bc2e
#define str_1000bc2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009500
 */

int recovered_10009500(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((context == (void *)0x0) || (*(char *)((int)context + 0x1f5) != '\x01')) ||
     (data == (void *)0x0 && size != 0)) {
    pf_varargs_10003ce0___(error,capacity,str_1000bc2e);
    return 0;
  }
  iVar1 = recovered_10009570(context,(void *)((int)context + 0x168),0x17,data,size,error,capacity);
  return iVar1;
}

#undef str_1000bc2e

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#undef str_1000bb3a
#define str_1000bb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55bU)))
#undef str_1000bc62
#define str_1000bc62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x683U)))
#define local_78 (*(byte (*)[64])(frame + 24))
#define local_38 (*(uint *)(frame + 88))
#define local_34 (*(undefined4 * *)(frame + 92))
#define local_30 (*(int *)(frame + 96))
#define local_2c (*(uint *)(frame + 100))
#define local_28 (*(undefined1 (*)[4])(frame + 104))
#define local_24 (*(byte *)(frame + 108))
#define local_23 (*(byte *)(frame + 109))
#define local_22 (*(byte *)(frame + 110))
#define local_21 (*(byte *)(frame + 111))
#define local_20 (*(byte *)(frame + 112))
#define local_1f (*(byte *)(frame + 113))
#define local_1e (*(byte *)(frame + 114))
#define local_1d (*(byte *)(frame + 115))
#define local_1c (*(void * *)(frame + 116))
#define local_18 (*(undefined2 * *)(frame + 120))
#define local_14 (*(void * *)(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10009570(undefined4 *in_ECX,void *in_EDX,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;

  if ((in_EDX != (void *)0x0) && (param_4 != (void *)0x0 || param_5 == 0)) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x4f < _DAT_00006808)))) &&
       (_DAT_0000684c != (code *)0x0)) {
      iVar10 = param_5 + 0x16;
      local_34 = in_ECX;
      local_14 = in_EDX;
      local_18 = (undefined2 *)(*_DAT_0000684c)(iVar10);
      if (local_18 != (undefined2 *)0x0) {
        local_2c = param_5 + 1;
        *local_18 = 0x317;
        *(undefined1 *)(local_18 + 1) = 3;
        *(char *)((int)local_18 + 3) = (char)(param_5 + 0x11 >> 8);
        *(char *)(local_18 + 2) = (char)(param_5 + 0x11);
        local_1c = (void *)((int)local_18 + 5);
        local_30 = iVar10;
        if (param_5 != 0) {
          recovered_10001360(local_1c,param_4,param_5);
        }
        *(undefined1 *)((int)local_1c + param_5) = param_3;
        recovered_10001360(local_28,(void *)((int)local_14 + 0x20),0xc);
        uVar8 = *(undefined4 *)((int)local_14 + 0x2c);
        uVar4 = *(undefined4 *)((int)local_14 + 0x30);
        local_1d = local_1d ^ (byte)uVar8;
        local_1e = local_1e ^ (byte)((uint)uVar8 >> 8);
        local_1f = local_1f ^ (byte)((uint)uVar8 >> 0x10);
        local_20 = local_20 ^ (byte)((uint)uVar8 >> 0x18);
        local_21 = local_21 ^ (byte)uVar4;
        local_22 = local_22 ^ (byte)((uint)uVar4 >> 8);
        local_23 = local_23 ^ (byte)((uint)uVar4 >> 0x10);
        local_24 = local_24 ^ (byte)((uint)uVar4 >> 0x18);
        if (local_2c != 0) {
          uVar9 = 1;
          uVar11 = 0;
          do {
            uVar5 = local_2c;
            uVar12 = local_2c - uVar11;
            if (0x3f < uVar12) {
              uVar12 = 0x40;
            }
            local_38 = uVar9;
            recovered_1000b2d0(local_14,uVar9,local_28,local_78);
            if (uVar5 != uVar11) {
              iVar10 = 0;
              do {
                pbVar3 = (byte *)((int)local_1c + iVar10 + uVar11);
                *pbVar3 = *pbVar3 ^ local_78[iVar10];
                iVar10 = iVar10 + 1;
              } while (uVar12 + (uVar12 == 0) != iVar10);
            }
            uVar9 = local_38 + 1;
            uVar11 = uVar11 + uVar12;
          } while (uVar11 < local_2c);
        }
        pvVar7 = local_14;
        pvVar6 = local_1c;
        uVar9 = local_2c;
        recovered_1000aad0(local_14,local_28,local_18,local_1c,local_2c,local_78);
        recovered_10001360((void *)((int)pvVar6 + uVar9),local_78,0x10);
        puVar1 = (uint *)((int)pvVar7 + 0x2c);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + 1;
        piVar2 = (int *)((int)pvVar7 + 0x30);
        *piVar2 = *piVar2 + (uint)(0xfffffffe < uVar9);
        if ((code *)local_34[2] == (code *)0x0) {
          pf_varargs_10003ce0___(param_6,param_7,str_1000bc62);
          uVar8 = 0;
        }
        else {
          uVar8 = (*(code *)local_34[2])(*local_34,local_18,local_30,param_6,param_7);
        }
        if (_DAT_00006800 != 0x50414d57) {
          return uVar8;
        }
        if (_DAT_00006804 == 0) {
          return uVar8;
        }
        if (_DAT_00006808 < 0xc) {
          return uVar8;
        }
        if (_DAT_00006808 < 0x54) {
          return uVar8;
        }
        if (_DAT_00006850 == (code *)0x0) {
          return uVar8;
        }
        (*_DAT_00006850)(local_18);
        return uVar8;
      }
    }
    pf_varargs_10003ce0___(param_6,param_7,str_1000bb3a);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef str_1000bb3a
#undef str_1000bc62
#undef local_78
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_1f
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_18
#undef local_14

#undef str_1000bc2e
#define str_1000bc2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64fU)))
#undef str_1000bc51
#define str_1000bc51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
#define format (*(char * *)(frame + 28))
#define local_18 (*(uint *)(frame + 40))
#define local_11 (*(byte *)(frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097f0
 */

int recovered_100097f0(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     (*(char *)((int)context + 0x1f5) == '\0')) {
    format = str_1000bc2e;
  }
  else {
    do {
      local_11 = 0;
      local_18 = 0;
      uVar1 = recovered_100098d0(context,(void *)((int)context + 0x19c),&local_11,data,size,
                                 &local_18,error,capacity);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      if (local_11 == 0x17) {
        if (read == (ulong *)0x0) {
          return 1;
        }
        *read = local_18;
        return 1;
      }
    } while (local_11 != 0x15);
    format = str_1000bc51;
  }
  pf_varargs_10003ce0___(error,capacity,format);
  return 0;
}

#undef str_1000bc2e
#undef str_1000bc51
#undef format
#undef local_18
#undef local_11

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000684c
#define DAT_0000684c (*(uint8_t *)(0x684cU))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef _DAT_00006800
#define _DAT_00006800 (*(uint *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#undef str_1000bb3a
#define str_1000bb3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55bU)))
#undef str_1000be47
#define str_1000be47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x868U)))
#undef str_1000be61
#define str_1000be61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x882U)))
#undef str_1000be80
#define str_1000be80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a1U)))
#undef str_1000bead
#define str_1000bead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8ceU)))
#undef str_1000beea
#define str_1000beea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90bU)))
#undef str_1000bf0b
#define str_1000bf0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92cU)))
#undef str_1000bf20
#define str_1000bf20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x941U)))
#undef str_1000bf41
#define str_1000bf41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x962U)))
#define in_stack_ffffff58 (*(byte * *)(frame + 24))
#define in_stack_ffffff5c (*(char * *)(frame + 28))
#define local_98 (*(byte (*)[64])(frame + 40))
#define local_58 (*(uint *)(frame + 104))
#define local_54 (*(void * *)(frame + 108))
#define local_50 (*(undefined1 (*)[4])(frame + 112))
#define local_4c (*(byte *)(frame + 116))
#define local_4b (*(byte *)(frame + 117))
#define local_4a (*(byte *)(frame + 118))
#define local_49 (*(byte *)(frame + 119))
#define local_48 (*(byte *)(frame + 120))
#define local_47 (*(byte *)(frame + 121))
#define local_46 (*(byte *)(frame + 122))
#define local_45 (*(byte *)(frame + 123))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(char * *)(frame + 128))
#define local_39 (*(byte *)(frame + 135))
#define local_38 (*(byte *)(frame + 136))
#define local_37 (*(byte *)(frame + 137))
#define local_36 (*(byte *)(frame + 138))
#define local_35 (*(byte *)(frame + 139))
#define local_34 (*(byte *)(frame + 140))
#define local_33 (*(byte *)(frame + 141))
#define local_32 (*(byte *)(frame + 142))
#define local_31 (*(byte *)(frame + 143))
#define local_30 (*(byte *)(frame + 144))
#define local_2f (*(byte *)(frame + 145))
#define local_2e (*(byte *)(frame + 146))
#define local_2d (*(byte *)(frame + 147))
#define local_2c (*(byte *)(frame + 148))
#define local_2b (*(byte *)(frame + 149))
#define local_2a (*(byte *)(frame + 150))
#define local_29 (*(byte *)(frame + 151))
#define local_28 (*(byte *)(frame + 152))
#define local_27 (*(byte *)(frame + 153))
#define local_26 (*(ushort *)(frame + 154))
#define local_24 (*(void * *)(frame + 156))
#define local_20 (*(undefined4 * *)(frame + 160))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(char * *)(frame + 168))
#define local_14 (*(byte * *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100098d0(undefined4 *in_ECX,void *in_EDX,byte *param_3,byte *param_4,uint param_5,
                       uint *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  code *pcVar7;
  byte *pbVar8;
  uint uVar9;
  uint vararg1;
  ushort uVar10;
  int iVar11;
  bool bVar12;
  char *pcVar13;

  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    pcVar7 = (code *)in_ECX[1];
    local_24 = in_EDX;
    if (pcVar7 != (code *)0x0) {
      local_54 = (void *)((int)in_EDX + 0x20);
      local_20 = in_ECX;
      do {
        cVar6 = (*pcVar7)(*local_20,&local_29,5,param_7,param_8);
        if (cVar6 == '\0') {
          return 0;
        }
        uVar10 = local_26 << 8 | local_26 >> 8;
        if ((ushort)(uVar10 + 0xb7ff) < 0xb800) {
          pcVar13 = str_1000be47;
          goto LAB_10009eac;
        }
        local_18 = (char *)(uint)uVar10;
        if (local_24 == (void *)0x0) {
          if (param_5 < local_18) {
            pcVar13 = str_1000be61;
            goto LAB_10009eac;
          }
          if ((code *)local_20[1] == (code *)0x0) break;
          cVar6 = (*(code *)local_20[1])(*local_20,param_4,local_18,param_7,param_8);
          if (cVar6 == '\0') {
            return 0;
          }
          if (local_29 != 0x14) {
            if (local_29 == 0x15) {
              uVar9 = 0;
              if (1 < uVar10) {
                uVar9 = (uint)param_4[1];
              }
              pf_varargs_10003ce0__4__4_(param_7,param_8,str_1000be80,(uint)*param_4,uVar9);
              return 0;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = local_29;
            }
            if (param_6 == (uint *)0x0) {
              return 1;
            }
            *param_6 = (uint)local_18;
            return CONCAT31((int3)((uint)param_6 >> 8),1);
          }
        }
        else {
          if (((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
              ((_DAT_00006808 < 0x50 || (_DAT_0000684c == (code *)0x0)))) ||
             (pbVar8 = (byte *)(*_DAT_0000684c)(local_18), pbVar8 == (byte *)0x0)) {
            pcVar13 = str_1000bb3a;
            goto LAB_10009eac;
          }
          local_14 = pbVar8;
          if ((code *)local_20[1] == (code *)0x0) {
            pf_varargs_10003ce0___(param_7,param_8,str_1000beea);
LAB_10009ef9:
            if (_DAT_00006800 != 0x50414d57) {
              return 0;
            }
            if (_DAT_00006804 == 0) {
              return 0;
            }
            if (_DAT_00006808 < 0xc) {
              return 0;
            }
            if (_DAT_00006808 < 0x54) {
              return 0;
            }
            if (_DAT_00006850 == (code *)0x0) {
              return 0;
            }
            (*_DAT_00006850)(local_14);
            return 0;
          }
          cVar6 = (*(code *)local_20[1])(*local_20,pbVar8,local_18,param_7,param_8);
          if (cVar6 == '\0') goto LAB_10009ef9;
          uVar9 = (uint)local_29;
          if (uVar9 == 0x14) {
            if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
               ((0xb < _DAT_00006808 && ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))))
               ) {
              (*_DAT_00006850)(local_14);
            }
            goto LAB_10009930;
          }
          if (uVar9 != 0x17) {
            if (uVar9 == 0x15) {
              uVar9 = (uint)*local_14;
              vararg1 = 0;
              if (1 < uVar10) {
                vararg1 = (uint)local_14[1];
              }
              pcVar13 = str_1000be80;
            }
            else {
              vararg1 = (uint)local_28;
              in_stack_ffffff58 = (byte *)(uint)local_27;
              pcVar13 = str_1000bead;
              in_stack_ffffff5c = local_18;
            }
            pf_varargs_10003ce0__4__4__4__4_
                      (param_7,param_8,pcVar13,uVar9,vararg1,(uint)in_stack_ffffff58,
                       (uint)in_stack_ffffff5c);
            goto LAB_10009ef9;
          }
          if (param_6 != (uint *)0x0) {
            *param_6 = 0;
          }
          if (param_3 != (byte *)0x0) {
            *param_3 = 0;
          }
          if (uVar10 < 0x10) {
            local_1c = 1;
          }
          else {
            local_1c = 1;
            in_stack_ffffff5c = local_18 + -0x10;
            if (param_5 < in_stack_ffffff5c) {
              in_stack_ffffff5c = str_1000bf0b;
            }
            else {
              recovered_10001360(local_50,local_54,0xc);
              pbVar8 = local_14;
              uVar3 = *(undefined4 *)((int)local_24 + 0x2c);
              uVar4 = *(undefined4 *)((int)local_24 + 0x30);
              local_45 = local_45 ^ (byte)uVar3;
              local_46 = local_46 ^ (byte)((uint)uVar3 >> 8);
              local_47 = local_47 ^ (byte)((uint)uVar3 >> 0x10);
              local_48 = local_48 ^ (byte)((uint)uVar3 >> 0x18);
              local_49 = local_49 ^ (byte)uVar4;
              local_4a = local_4a ^ (byte)((uint)uVar4 >> 8);
              local_4b = local_4b ^ (byte)((uint)uVar4 >> 0x10);
              local_4c = local_4c ^ (byte)((uint)uVar4 >> 0x18);
              in_stack_ffffff58 = local_14;
              local_40 = in_stack_ffffff5c;
              recovered_1000aad0(local_24,local_50,&local_29,local_14,(ulong)in_stack_ffffff5c,
                                 &local_39);
              if (((((((pbVar8[(int)local_40] == local_39) &&
                      ((pbVar8 + 1)[(int)local_40] == local_38)) &&
                     ((pbVar8 + 2)[(int)local_40] == local_37)) &&
                    (((pbVar8 + 3)[(int)local_40] == local_36 &&
                     ((pbVar8 + 4)[(int)local_40] == local_35)))) &&
                   ((((pbVar8 + 5)[(int)local_40] == local_34 &&
                     (((pbVar8 + 6)[(int)local_40] == local_33 &&
                      ((pbVar8 + 7)[(int)local_40] == local_32)))) &&
                    ((pbVar8 + 8)[(int)local_40] == local_31)))) &&
                  ((((pbVar8 + 9)[(int)local_40] == local_30 &&
                    ((pbVar8 + 10)[(int)local_40] == local_2f)) &&
                   ((pbVar8 + 0xb)[(int)local_40] == local_2e)))) &&
                 ((((pbVar8 + 0xc)[(int)local_40] == local_2d &&
                   ((pbVar8 + 0xd)[(int)local_40] == local_2c)) &&
                  (((pbVar8 + 0xe)[(int)local_40] == local_2b &&
                   ((pbVar8 + 0xf)[(int)local_40] == local_2a)))))) {
                if (local_40 == (char *)0x0) {
                  puVar1 = (uint *)((int)local_24 + 0x2c);
                  uVar9 = *puVar1;
                  *puVar1 = *puVar1 + 1;
                  *(int *)((int)local_24 + 0x30) =
                       *(int *)((int)local_24 + 0x30) + (uint)(0xfffffffe < uVar9);
                  local_1c = 0;
                }
                else {
                  uVar9 = 1;
                  pcVar13 = (char *)0x0;
                  do {
                    pcVar5 = local_40;
                    local_44 = (int)local_40 - (int)pcVar13;
                    if (0x3f < local_44) {
                      local_44 = 0x40;
                    }
                    in_stack_ffffff58 = local_98;
                    local_58 = uVar9;
                    recovered_1000b2d0(local_24,uVar9,local_50,in_stack_ffffff58);
                    if (pcVar5 != pcVar13) {
                      iVar11 = 0;
                      do {
                        (param_4 + (int)pcVar13)[iVar11] =
                             local_98[iVar11] ^ (local_14 + (int)pcVar13)[iVar11];
                        iVar11 = iVar11 + 1;
                      } while (local_44 + (local_44 == 0) != iVar11);
                    }
                    uVar9 = local_58 + 1;
                    pcVar13 = pcVar13 + local_44;
                  } while (pcVar13 < local_40);
                  puVar1 = (uint *)((int)local_24 + 0x2c);
                  uVar9 = *puVar1;
                  *puVar1 = *puVar1 + 1;
                  *(int *)((int)local_24 + 0x30) =
                       *(int *)((int)local_24 + 0x30) + (uint)(0xfffffffe < uVar9);
                  pcVar13 = local_18 + -0x11;
                  do {
                    bVar2 = param_4[(int)pcVar13];
                    if (bVar2 != 0) {
                      local_18 = pcVar13;
                      if ((bVar2 & 0xfc) == 0x14) {
                        if (param_3 != (byte *)0x0) {
                          *param_3 = bVar2;
                        }
                        if (param_6 != (uint *)0x0) {
                          *param_6 = (uint)pcVar13;
                        }
                        local_1c = 0;
                      }
                      else {
                        in_stack_ffffff5c = str_1000bf41;
                        in_stack_ffffff58 = (byte *)param_8;
                        pf_varargs_10003ce0__4_(param_7,param_8,str_1000bf41,(uint)bVar2);
                      }
                      goto LAB_10009cfd;
                    }
                    bVar12 = pcVar13 != (char *)0x0;
                    pcVar13 = pcVar13 + -1;
                  } while (bVar12);
                  local_1c = 0;
                }
                goto LAB_10009cfd;
              }
              in_stack_ffffff5c = str_1000bf20;
            }
            in_stack_ffffff58 = (byte *)param_8;
            pf_varargs_10003ce0___(param_7,param_8,in_stack_ffffff5c);
          }
LAB_10009cfd:
          uVar9 = _DAT_00006800;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((uVar9 = _DAT_00006808, 0xb < _DAT_00006808 &&
              ((0x53 < _DAT_00006808 && (uVar9 = 0, _DAT_00006850 != (code *)0x0)))))) {
            uVar9 = (*_DAT_00006850)(local_14);
          }
          if (param_3 == (byte *)0x0 || (char)local_1c != '\0') {
            return local_1c ^ 1;
          }
          uVar9 = CONCAT31((int3)(uVar9 >> 8),1);
          if (param_6 == (uint *)0x0) {
            return uVar9;
          }
          if (*param_3 != 0) {
            return uVar9;
          }
          if (*param_6 != 0) {
            return uVar9;
          }
        }
LAB_10009930:
        pcVar7 = (code *)local_20[1];
      } while (pcVar7 != (code *)0x0);
    }
    pcVar13 = str_1000beea;
LAB_10009eac:
    pf_varargs_10003ce0___(param_7,param_8,pcVar13);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_00006850
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_00006850
#undef str_1000bb3a
#undef str_1000be47
#undef str_1000be61
#undef str_1000be80
#undef str_1000bead
#undef str_1000beea
#undef str_1000bf0b
#undef str_1000bf20
#undef str_1000bf41
#undef in_stack_ffffff58
#undef in_stack_ffffff5c
#undef local_98
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_40
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_27
#undef local_26
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f50
 */

int recovered_10009f50(void *context,void *output)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;

  if ((output == (void *)0x0 || context == (void *)0x0) ||
     (*(char *)((int)context + 0x1f6) != '\x01')) {
    iVar2 = 0;
  }
  else {
    pvVar1 = recovered_10001360(output,(void *)((int)context + 0x1d0),0x20);
    iVar2 = CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
  return iVar2;
}


/* Native entropy callback and fallback state evolution; Pooka's Free Software License. */
void recovered_10009fa0(void *opaque,void *output){
 uintptr_t *context=(uintptr_t *)opaque;
 uint32_t date[6]={0},seed=0x574d544cU;
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]==0x50414d57U&&api[1]&&api[2]>=364&&api[90]&&((int (*)(void *))(uintptr_t)api[90])(date))
  seed^=date[3]*0x3c6ef35fU^date[2]^date[4]*0x19660dU;
 if(!output)return;
 uint32_t *stored=(uint32_t *)((uint8_t *)opaque+0x1f0);
 seed^=(uint32_t)(uintptr_t)opaque^*stored;
 if(!context[3]||!((unsigned char (*)(void *,void *,unsigned long))context[3])((void *)context[0],output,32)){
  for(unsigned i=0;i<32;++i){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;((uint8_t *)output)[i]=(uint8_t)(seed>>((i*8)&24));}
 }else{
  uint32_t folded=0;for(unsigned i=0;i<8;++i)folded^=((uint32_t *)output)[i];
  seed^=folded;
 }
 *stored=seed;
}


#define local_d0 (*(byte (*)[64])(frame + 16))
#define local_90 (*(byte (*)[64])(frame + 80))
#define local_50 (*(byte (*)[64])(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a620
 */

void recovered_1000a620(void *inner,void *outer,void *key)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_100015f0(local_d0,0,0x40);
  if (key != (void *)0x0) {
    recovered_10001360(local_d0,key,0x20);
  }
  iVar1 = -0x40;
  do {
    local_50[iVar1] = local_90[iVar1] ^ 0x36;
    local_50[iVar1 + 0x40] = local_90[iVar1] ^ 0x5c;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  if (inner != (void *)0x0) {
    *(undefined4 *)inner = 0x6a09e667;
    *(undefined4 *)((int)inner + 4) = 0xbb67ae85;
    *(undefined4 *)((int)inner + 8) = 0x3c6ef372;
    *(undefined4 *)((int)inner + 0xc) = 0xa54ff53a;
    *(undefined4 *)((int)inner + 0x10) = 0x510e527f;
    *(undefined4 *)((int)inner + 0x14) = 0x9b05688c;
    *(undefined4 *)((int)inner + 0x18) = 0x1f83d9ab;
    *(undefined4 *)((int)inner + 0x1c) = 0x5be0cd19;
    *(undefined4 *)((int)inner + 0x24) = 0;
    *(undefined4 *)((int)inner + 0x20) = 0;
    *(undefined4 *)((int)inner + 0x68) = 0;
  }
  recovered_10006d50(inner,local_90,0x40);
  if (outer != (void *)0x0) {
    *(undefined4 *)outer = 0x6a09e667;
    *(undefined4 *)((int)outer + 4) = 0xbb67ae85;
    *(undefined4 *)((int)outer + 8) = 0x3c6ef372;
    *(undefined4 *)((int)outer + 0xc) = 0xa54ff53a;
    *(undefined4 *)((int)outer + 0x10) = 0x510e527f;
    *(undefined4 *)((int)outer + 0x14) = 0x9b05688c;
    *(undefined4 *)((int)outer + 0x18) = 0x1f83d9ab;
    *(undefined4 *)((int)outer + 0x1c) = 0x5be0cd19;
    *(undefined4 *)((int)outer + 0x24) = 0;
    *(undefined4 *)((int)outer + 0x20) = 0;
    *(undefined4 *)((int)outer + 0x68) = 0;
  }
  recovered_10006d50(outer,local_50,0x40);
  return;
}

#undef local_d0
#undef local_90
#undef local_50

#undef DAT_1000ba98
#define DAT_1000ba98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b9U)))
#undef DAT_1000bda9
#define DAT_1000bda9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7caU)))
#define local_14 (*(uint *)(frame + 28))
#define local_10 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a760
 */

void recovered_1000a760(void *context,void *output)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined *data;

  if (output != (void *)0x0 && context != (void *)0x0) {
    uVar1 = *(uint *)((int)context + 0x20);
    uVar2 = *(uint *)((int)context + 0x24) << 3;
    local_10 = (uVar1 & 0x1fffffff) >> 0x15 | (uVar1 << 3 & 0xff0000) >> 8 |
               (uVar1 << 3 & 0xff00) << 8 | uVar1 << 0x1b;
    local_14 = (*(uint *)((int)context + 0x24) & 0x1fffffff) >> 0x15 | (uVar2 & 0xff0000) >> 8 |
               (uVar2 & 0xff00) << 8 | (uVar2 | uVar1 >> 0x1d) << 0x18;
    data = &DAT_1000bda9;
    while( true ) {
      recovered_10006d50(context,data,1);
      if (*(int *)((int)context + 0x68) == 0x38) break;
      data = &DAT_1000ba98;
    }
    recovered_10006d50(context,&local_14,8);
    uVar1 = *(uint *)context;
    *(uint *)output =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 4);
    *(uint *)((int)output + 4) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 8);
    *(uint *)((int)output + 8) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0xc);
    *(uint *)((int)output + 0xc) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x10);
    *(uint *)((int)output + 0x10) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x14);
    *(uint *)((int)output + 0x14) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x18);
    *(uint *)((int)output + 0x18) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *(uint *)((int)context + 0x1c);
    *(uint *)((int)output + 0x1c) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  return;
}

#undef DAT_1000ba98
#undef DAT_1000bda9
#undef local_14
#undef local_10

#undef str_1000bdab
#define str_1000bdab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ccU)))
#define local_1c4 (*(undefined1 (*)[108])(frame + 28))
#define local_158 (*(undefined1 (*)[108])(frame + 136))
#define local_ec (*(undefined1 (*)[32])(frame + 244))
#define local_cc (*(undefined1 (*)[128])(frame + 276))
#define local_4c (*(undefined1 (*)[32])(frame + 404))
#define local_2c (*(int *)(frame + 436))
#define local_28 (*(int *)(frame + 440))
#define local_24 (*(uint *)(frame + 444))
#define local_20 (*(uint *)(frame + 448))
#define local_1c (*(uint *)(frame + 452))
#define local_18 (*(void * *)(frame + 456))
#define local_11 (*(char *)(frame + 463))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a830
 */

void recovered_1000a830(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char frame[512] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong count;

  uVar2 = recovered_10001a60(str_1000bdab);
  if (((label != (char *)0x0) &&
      (count = recovered_10001a60(label), output != (void *)0x0 && secret != (void *)0x0)) &&
     (local_1c = count + uVar2, local_1c < 0x100)) {
    local_2c = count + 3 + uVar2;
    local_20 = context_length + 1 + local_2c;
    if (local_20 < 0x81) {
      local_24 = count + 4 + uVar2;
      local_28 = uVar2 + 3;
      local_cc[0] = (undefined1)(output_length >> 8);
      local_cc[1] = (undefined1)output_length;
      local_cc[2] = (undefined1)local_1c;
      local_18 = secret;
      recovered_10001360(local_cc + 3,str_1000bdab,uVar2);
      recovered_10001360(local_cc + local_28,label,count);
      local_cc[local_2c] = (char)context_length;
      if (context_length == 0) {
        local_20 = local_24;
      }
      else {
        recovered_10001360(local_cc + local_24,context,context_length);
      }
      local_11 = '\x01';
      if (output_length != 0) {
        recovered_1000a620(local_1c4,local_158,local_18);
        recovered_10006d50(local_1c4,local_cc,local_20);
        recovered_10006d50(local_1c4,&local_11,1);
        recovered_1000a760(local_1c4,local_ec);
        recovered_10006d50(local_158,local_ec,0x20);
        recovered_1000a760(local_158,local_4c);
        uVar2 = output_length;
        if (0x1f < output_length) {
          uVar2 = 0x20;
        }
        recovered_10001360(output,local_4c,uVar2);
        local_11 = local_11 + '\x01';
        if ((output_length < 0x21 || local_11 != '\0') && (0x20 < output_length)) {
          do {
            local_1c = uVar2;
            recovered_1000a620(local_1c4,local_158,local_18);
            recovered_10006d50(local_1c4,local_4c,0x20);
            recovered_10006d50(local_1c4,local_cc,local_20);
            recovered_10006d50(local_1c4,&local_11,1);
            uVar1 = local_1c;
            recovered_1000a760(local_1c4,local_ec);
            recovered_10006d50(local_158,local_ec,0x20);
            recovered_1000a760(local_158,local_4c);
            uVar2 = output_length - uVar1;
            if (0x1f < uVar2) {
              uVar2 = 0x20;
            }
            recovered_10001360((void *)((int)output + uVar1),local_4c,uVar2);
            uVar2 = uVar1 + uVar2;
            local_11 = local_11 + '\x01';
          } while (((local_11 != '\0') || (output_length <= uVar2)) && (uVar2 < output_length));
        }
      }
    }
  }
  return;
}

#undef str_1000bdab
#undef local_1c4
#undef local_158
#undef local_ec
#undef local_cc
#undef local_4c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11

/* Recovered TLS record authentication: padded AAD/ciphertext followed by
 * little-endian lengths, using the reference's clamped Poly1305 key.
 * Pooka's Free Software License. */
static uint32_t pf_tls_load32(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static void pf_tls_store32(uint8_t *p,uint32_t value){for(unsigned i=0;i<4;++i)p[i]=(uint8_t)(value>>(8*i));}
void recovered_1000aad0(void *key,void *nonce,void *associated,void *ciphertext,unsigned long size,void *output){
 uint8_t one_time[64];recovered_1000b2d0(key,0,nonce,one_time);
 unsigned long padded=(size+15)&~15UL,total=padded+32;
 uint8_t *message=(uint8_t *)recovered_100012a0(total);
 if(!message){for(unsigned i=0;i<16;++i)((uint8_t *)output)[i]=0;return;}
 for(unsigned long i=0;i<total;++i)message[i]=0;
 for(unsigned i=0;i<5;++i)message[i]=((uint8_t *)associated)[i];
 for(unsigned long i=0;i<size;++i)message[16+i]=((uint8_t *)ciphertext)[i];
 message[16+padded]=5;
 for(unsigned i=0;i<8;++i)message[24+padded+i]=(uint8_t)((uint64_t)size>>(8*i));
 uint8_t clamp[16];for(unsigned i=0;i<16;++i)clamp[i]=one_time[i];
 clamp[3]&=15;clamp[7]&=15;clamp[11]&=15;clamp[15]&=15;clamp[4]&=252;clamp[8]&=252;clamp[12]&=252;
 const uint32_t mask=0x3ffffffU;
 uint32_t r[5]={pf_tls_load32(clamp)&mask,(pf_tls_load32(clamp+3)>>2)&mask,(pf_tls_load32(clamp+6)>>4)&mask,(pf_tls_load32(clamp+9)>>6)&mask,pf_tls_load32(clamp+12)>>8};
 uint32_t h[5]={0};
 for(unsigned long offset=0;offset<total;offset+=16){
  uint8_t *p=message+offset;
  h[0]+=pf_tls_load32(p)&mask;h[1]+=(pf_tls_load32(p+3)>>2)&mask;h[2]+=(pf_tls_load32(p+6)>>4)&mask;h[3]+=(pf_tls_load32(p+9)>>6)&mask;h[4]+=(pf_tls_load32(p+12)>>8)|(1U<<24);
  uint64_t d[5]={0};
  for(unsigned i=0;i<5;++i)for(unsigned j=0;j<5;++j){unsigned index=(i+5-j)%5;uint64_t coefficient=r[index];if(j>i)coefficient*=5;d[i]+=(uint64_t)h[j]*coefficient;}
  for(unsigned i=0;i<4;++i){h[i]=(uint32_t)d[i]&mask;d[i+1]+=d[i]>>26;}
  h[4]=(uint32_t)d[4]&mask;h[0]+=(uint32_t)(d[4]>>26)*5;h[1]+=h[0]>>26;h[0]&=mask;
 }
 for(unsigned pass=0;pass<3;++pass){uint32_t carry=0;for(unsigned i=0;i<5;++i){uint32_t value=h[i]+carry;h[i]=value&mask;carry=value>>26;}h[0]+=carry*5;}
 uint32_t g[5],carry=5;
 for(unsigned i=0;i<4;++i){uint32_t value=h[i]+carry;g[i]=value&mask;carry=value>>26;}
 g[4]=h[4]+carry-(1U<<26);uint32_t select=(g[4]>>31)-1;g[4]&=mask;
 for(unsigned i=0;i<5;++i)h[i]=(h[i]&~select)|(g[i]&select);
 uint32_t words[4]={h[0]|h[1]<<26,h[1]>>6|h[2]<<20,h[2]>>12|h[3]<<14,h[3]>>18|h[4]<<8};
 uint64_t high=0;
 for(unsigned i=0;i<4;++i){uint64_t value=(uint64_t)words[i]+pf_tls_load32(one_time+16+4*i)+high;pf_tls_store32((uint8_t *)output+4*i,(uint32_t)value);high=value>>32;}
 recovered_100012e0(message);
}


/* Recovered twenty-round ChaCha block transform; Pooka's Free Software License. */
static uint32_t pf_tls_chacha_load(const uint8_t *p){return (uint32_t)p[0]|(uint32_t)p[1]<<8|(uint32_t)p[2]<<16|(uint32_t)p[3]<<24;}
static uint32_t pf_tls_chacha_rotate(uint32_t word,unsigned bits){return word<<bits|word>>(32-bits);}
static void pf_tls_chacha_quarter(uint32_t *x,unsigned a,unsigned b,unsigned c,unsigned d){
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],16);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],12);
 x[a]+=x[b];x[d]=pf_tls_chacha_rotate(x[d]^x[a],8);x[c]+=x[d];x[b]=pf_tls_chacha_rotate(x[b]^x[c],7);
}
void recovered_1000b2d0(void *key,uint counter,void *nonce,void *output){
 uint32_t initial[16]={0x61707865U,0x3320646eU,0x79622d32U,0x6b206574U};
 for(unsigned i=0;i<8;++i)initial[4+i]=pf_tls_chacha_load((uint8_t *)key+4*i);
 initial[12]=counter;for(unsigned i=0;i<3;++i)initial[13+i]=pf_tls_chacha_load((uint8_t *)nonce+4*i);
 uint32_t x[16];for(unsigned i=0;i<16;++i)x[i]=initial[i];
 for(unsigned round=0;round<10;++round){
  pf_tls_chacha_quarter(x,0,4,8,12);pf_tls_chacha_quarter(x,1,5,9,13);pf_tls_chacha_quarter(x,2,6,10,14);pf_tls_chacha_quarter(x,3,7,11,15);
  pf_tls_chacha_quarter(x,0,5,10,15);pf_tls_chacha_quarter(x,1,6,11,12);pf_tls_chacha_quarter(x,2,7,8,13);pf_tls_chacha_quarter(x,3,4,9,14);
 }
 for(unsigned i=0;i<16;++i){uint32_t value=x[i]+initial[i];for(unsigned j=0;j<4;++j)((uint8_t *)output)[4*i+j]=(uint8_t)(value>>(8*j));}
}
