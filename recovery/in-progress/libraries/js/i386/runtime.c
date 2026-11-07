/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c074
#define DAT_1000c074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bb8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc0
 */

void recovered_10000bc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c074 = 0;
  recovered_10000bd0();
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
#define DAT_1000c074 (*(char *)(((uintptr_t)pf_module_state + 0x1bb8U)))
#undef DAT_1000c078
#define DAT_1000c078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bbcU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int *)(((uintptr_t)pf_module_state + 0x1bc0U)))
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
 * Address: 0x10000bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000bd0(void)

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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_10000c2b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_10000c2b:
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
        if (iVar9 == 0) goto LAB_10000d70;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10003f70(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000c078 != 0) goto LAB_10000e76;
    }
  }
LAB_10000d70:
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
LAB_10000e76:
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
#define DAT_1000c078 (*(int * *)(((uintptr_t)pf_module_state + 0x1bbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ef0
 */

int recovered_10000ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000bd0();
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
#define DAT_1000c078 (*(int *)(((uintptr_t)pf_module_state + 0x1bbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

void recovered_10000f30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000bd0();
  for (iVar1 = DAT_1000c078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(int * *)(((uintptr_t)pf_module_state + 0x1bbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f70
 */

int recovered_10000f70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000bd0();
  iVar2 = 0;
  for (piVar1 = DAT_1000c078; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(int *)(((uintptr_t)pf_module_state + 0x1bbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa0
 */

void recovered_10000fa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000bd0();
  for (iVar1 = DAT_1000c078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c078

#undef DAT_1000c078
#define DAT_1000c078 (*(uint * *)(((uintptr_t)pf_module_state + 0x1bbcU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(uint * *)(((uintptr_t)pf_module_state + 0x1bc0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

uint * recovered_10000fe0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000bd0();
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
 * Address: 0x100010a0
 */

longlong recovered_100010a0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100010e0
 */

ulonglong recovered_100010e0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001120
 */

undefined8 recovered_10001120(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001170
 */

undefined8 recovered_10001170(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001250
 */

undefined8 recovered_10001250(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100012c0
 */

undefined8 recovered_100012c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001400
 */

undefined8 recovered_10001400(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100014c0
 */

void recovered_100014c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014e0
 */

int recovered_100014e0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001500(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001540(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001580(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c0
 */

void recovered_100015c0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_100015e7;
    if (((uint)param_1 & 3) != 0) {
      puVar4 = param_1;
      do {
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        uVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        bVar5 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar5) break;
      } while (((uint)puVar4 & 3) != 0);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 == 0) {
    return;
  }
LAB_100015e7:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

undefined4 * recovered_10001680(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  if (param_3 != 0 && param_1 != param_2) {
    if ((param_1 < param_2) || (puVar5 = (undefined4 *)((int)param_2 + param_3), puVar5 <= param_1))
    {
      puVar5 = param_1;
      if ((7 < param_3) && (puVar7 = param_1, (((uint)param_2 ^ (uint)param_1) & 3) == 0)) {
        do {
          if (((uint)puVar7 & 3) == 0) break;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          uVar2 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          *(undefined1 *)puVar5 = uVar2;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          bVar8 = param_3 != 1;
          param_3 = param_3 - 1;
        } while (bVar8);
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *puVar5 = *param_2;
          puVar5[1] = param_2[1];
          puVar5[2] = param_2[2];
          puVar5[3] = param_2[3];
          puVar5 = puVar5 + 4;
          param_2 = param_2 + 4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar5 + 1;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar5 + uVar4) = *(undefined1 *)((int)param_2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    else {
      uVar4 = (int)param_1 + param_3;
      if ((7 < param_3) && ((((uint)puVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)param_1 + (param_3 - 1)) =
                 *(undefined1 *)((int)param_2 + (param_3 - 1));
            uVar1 = param_3 - 1;
            if (param_3 == 1) break;
            iVar6 = param_3 - 1;
            param_3 = uVar1;
          } while (((int)param_1 + iVar6 & 3U) != 0);
          puVar5 = (undefined4 *)((int)param_2 + uVar1);
          uVar4 = (int)param_1 + uVar1;
          param_3 = uVar1;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          *(undefined4 *)(uVar4 - 4) = puVar5[-1];
          *(undefined4 *)(uVar4 - 8) = puVar5[-2];
          *(undefined4 *)(uVar4 - 0xc) = puVar5[-3];
          *(undefined4 *)(uVar4 - 0x10) = puVar5[-4];
          uVar4 = uVar4 - 0x10;
          puVar5 = puVar5 + -4;
        }
        for (; 3 < param_3; param_3 = param_3 - 4) {
          puVar7 = puVar5 + -1;
          puVar5 = puVar5 + -1;
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (param_3 == 0) {
          return param_1;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)puVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != param_3);
    }
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001850
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_10001850(byte *param_1,byte param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;

  pbVar1 = param_1;
  if (7 < param_3) {
    if (((uint)param_1 & 3) != 0) {
      pbVar2 = param_1;
      do {
        pbVar2 = pbVar2 + 1;
        *pbVar1 = param_2;
        pbVar1 = pbVar1 + 1;
        bVar4 = param_3 == 1;
        param_3 = param_3 - 1;
        if (bVar4) break;
      } while (((uint)pbVar2 & 3) != 0);
    }
    iVar3 = (uint)param_2 * 0x1010101;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *(int *)pbVar1 = iVar3;
      *(int *)(pbVar1 + 4) = iVar3;
      *(int *)(pbVar1 + 8) = iVar3;
      *(int *)(pbVar1 + 0xc) = iVar3;
      pbVar1 = pbVar1 + 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *(int *)pbVar1 = iVar3;
      pbVar1 = pbVar1 + 4;
    }
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *pbVar1 = param_2;
    pbVar1 = pbVar1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001900
 */

void recovered_10001900(undefined4 *param_1,uint param_2)

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
 * Address: 0x100019a0
 */

void recovered_100019a0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001a40
 */

int recovered_10001a40(uint *param_1,uint *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001ade;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10001af5;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10001b26:
        if ((char)uVar7 == (char)uVar8) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar8 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar8 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar8 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar8 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar8 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar8;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = param_1[1];
      uVar8 = param_2[1];
      if (uVar7 != uVar8) goto LAB_10001b26;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10001b26;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10001b26;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10001b70((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10001ade:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)((int)param_1 + uVar7);
    bVar2 = *(byte *)((int)param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_10001af5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b70
 */

int recovered_10001b70(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001bb0
 */

bool recovered_10001bb0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

bool recovered_10001bd0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bf0
 */

bool recovered_10001bf0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

bool recovered_10001c10(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c40
 */

bool recovered_10001c40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

bool recovered_10001c60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c80
 */

int recovered_10001c80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca0
 */

int recovered_10001ca0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

int recovered_10001cc0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;

  if (param_1 == 0) {
    return 0;
  }
  iVar3 = -1;
  do {
    iVar1 = iVar3 + 1;
    pcVar2 = (char *)(param_1 + 1 + iVar3);
    iVar3 = iVar1;
  } while (*pcVar2 != '\0');
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf0
 */

int recovered_10001cf0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001d26;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001d26:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d30
 */

int recovered_10001d30(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001d66;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001d66:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d70
 */

void recovered_10001d70(int param_1,int param_2)

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
 * Address: 0x10001d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10001d90(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10001ea1;
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
LAB_10001ea1:
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
 * Address: 0x10001ed0
 */

char * recovered_10001ed0(char *param_1,char param_2)

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
 * Address: 0x10001f10
 */

int recovered_10001f10(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10001f4b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10001f4b;
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
 * Address: 0x10001f60
 */

char * recovered_10001f60(char *param_1,char *param_2)

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
 * Address: 0x10001fb0
 */

char * recovered_10001fb0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10001ff3;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001ff3:
  return pcVar3;
}


#undef DAT_1000abac
#define DAT_1000abac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002000
 */

undefined * recovered_10002000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000abac;
}

#undef DAT_1000abac

#undef PTR_DAT_1000c004
#define PTR_DAT_1000c004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002010
 */

undefined ** recovered_10002010(void)

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
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002020(undefined4 *param_1)

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
#undef local_14
#undef local_10
#undef local_c
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100020b0(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000a4c0;
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

#undef DAT_1000a4c0
#undef _DAT_1000a4c0

#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100020e0(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)_DAT_1000a4c0;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_1000a4c0 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_1000a4c0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_1000a4c0
#undef _DAT_1000a4c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

longdouble recovered_100021c0(double param_1,double param_2)

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
 * Address: 0x10002220
 */

longdouble recovered_10002220(double param_1,double param_2)

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
 * Address: 0x100022c0
 */

longdouble recovered_100022c0(double param_1)

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
 * Address: 0x10002310
 */

longdouble recovered_10002310(double param_1)

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
 * Address: 0x10002370
 */

void recovered_10002370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000a4c4
#define DAT_1000a4c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000a4c8
#define DAT_1000a4c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000a4cc
#define DAT_1000a4cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000a4d0
#define DAT_1000a4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000a4d4
#define DAT_1000a4d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000a4d8
#define DAT_1000a4d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000a4dc
#define DAT_1000a4dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000a4e0
#define DAT_1000a4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000a4e4
#define DAT_1000a4e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000a4e8
#define DAT_1000a4e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000a4ec
#define DAT_1000a4ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000a4f0
#define DAT_1000a4f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000a518
#define DAT_1000a518 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c4
#define _DAT_1000a4c4 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_1000a4c8
#define _DAT_1000a4c8 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_1000a4cc
#define _DAT_1000a4cc (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_1000a4d0
#define _DAT_1000a4d0 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_1000a4d4
#define _DAT_1000a4d4 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_1000a4d8
#define _DAT_1000a4d8 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_1000a4dc
#define _DAT_1000a4dc (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_1000a4e0
#define _DAT_1000a4e0 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_1000a4e4
#define _DAT_1000a4e4 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_1000a4e8
#define _DAT_1000a4e8 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_1000a4ec
#define _DAT_1000a4ec (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_1000a4f0
#define _DAT_1000a4f0 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1000a518
#define _DAT_1000a518 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002470
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002470(double param_1)

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
    lVar2 = (longdouble)_DAT_1000a4c4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_1000a4c8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000a4c0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_1000a4c8 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_1000a4cc) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_1000a4cc);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_1000a4f0 +
            lVar9 / (longdouble)_DAT_1000a4ec +
            lVar8 / (longdouble)_DAT_1000a4e8 +
            lVar7 / (longdouble)_DAT_1000a4e4 +
            lVar6 / (longdouble)_DAT_1000a4e0 +
            lVar5 / (longdouble)_DAT_1000a4dc +
            lVar4 / (longdouble)_DAT_1000a4d8 +
            lVar3 / (longdouble)_DAT_1000a4d4 +
            (lVar10 * lVar2) / (longdouble)_DAT_1000a4d0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_1000a518;
  }
  return lVar2;
}

#undef DAT_1000a4c0
#undef DAT_1000a4c4
#undef DAT_1000a4c8
#undef DAT_1000a4cc
#undef DAT_1000a4d0
#undef DAT_1000a4d4
#undef DAT_1000a4d8
#undef DAT_1000a4dc
#undef DAT_1000a4e0
#undef DAT_1000a4e4
#undef DAT_1000a4e8
#undef DAT_1000a4ec
#undef DAT_1000a4f0
#undef DAT_1000a518
#undef _DAT_1000a4c0
#undef _DAT_1000a4c4
#undef _DAT_1000a4c8
#undef _DAT_1000a4cc
#undef _DAT_1000a4d0
#undef _DAT_1000a4d4
#undef _DAT_1000a4d8
#undef _DAT_1000a4dc
#undef _DAT_1000a4e0
#undef _DAT_1000a4e4
#undef _DAT_1000a4e8
#undef _DAT_1000a4ec
#undef _DAT_1000a4f0
#undef _DAT_1000a518

#undef DAT_1000a540
#define DAT_1000a540 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

longlong recovered_10002590(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000a540 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000a540

#undef DAT_1000a4f4
#define DAT_1000a4f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000a4f8
#define DAT_1000a4f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000a4fc
#define DAT_1000a4fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000a520
#define DAT_1000a520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000a528
#define DAT_1000a528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000a530
#define DAT_1000a530 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000a538
#define DAT_1000a538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_1000a4f4
#define _DAT_1000a4f4 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000a4f8
#define _DAT_1000a4f8 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000a4fc
#define _DAT_1000a4fc (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000a520
#define _DAT_1000a520 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000a528
#define _DAT_1000a528 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000a530
#define _DAT_1000a530 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_1000a538
#define _DAT_1000a538 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100025e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000a520 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000a528;
    } while ((longdouble)_DAT_1000a520 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000a530) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000a538;
    } while (lVar1 < (longdouble)_DAT_1000a530);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_1000a4fc +
         (lVar2 * lVar2) / (longdouble)_DAT_1000a4f8 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_1000a4f4) * lVar1;
}

#undef DAT_1000a4f4
#undef DAT_1000a4f8
#undef DAT_1000a4fc
#undef DAT_1000a520
#undef DAT_1000a528
#undef DAT_1000a530
#undef DAT_1000a538
#undef _DAT_1000a4f4
#undef _DAT_1000a4f8
#undef _DAT_1000a4fc
#undef _DAT_1000a520
#undef _DAT_1000a528
#undef _DAT_1000a530
#undef _DAT_1000a538

#undef DAT_1000a500
#define DAT_1000a500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000a504
#define DAT_1000a504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000a508
#define DAT_1000a508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000a520
#define DAT_1000a520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000a528
#define DAT_1000a528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000a530
#define DAT_1000a530 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000a538
#define DAT_1000a538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_1000a500
#define _DAT_1000a500 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_1000a504
#define _DAT_1000a504 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef _DAT_1000a508
#define _DAT_1000a508 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_1000a520
#define _DAT_1000a520 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000a528
#define _DAT_1000a528 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000a530
#define _DAT_1000a530 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_1000a538
#define _DAT_1000a538 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002680(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000a520 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000a528;
    } while ((longdouble)_DAT_1000a520 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000a530) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000a538;
    } while (lVar1 < (longdouble)_DAT_1000a530);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_1000a508 +
         (lVar1 * lVar1) / (longdouble)_DAT_1000a504 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_1000a500;
}

#undef DAT_1000a500
#undef DAT_1000a504
#undef DAT_1000a508
#undef DAT_1000a520
#undef DAT_1000a528
#undef DAT_1000a530
#undef DAT_1000a538
#undef _DAT_1000a500
#undef _DAT_1000a504
#undef _DAT_1000a508
#undef _DAT_1000a520
#undef _DAT_1000a528
#undef _DAT_1000a530
#undef _DAT_1000a538

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002720
 */

void recovered_10002720(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10002740(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10002820(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100028d0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10002940(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f0
 */

void recovered_100029f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002a50(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_1000a4c0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_1000a4c0 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_1000a4c0);
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

#undef DAT_1000a4c0
#undef _DAT_1000a4c0

#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002b40(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_1000a4c0;
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

#undef DAT_1000a4c0
#undef _DAT_1000a4c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b80
 */

longdouble recovered_10002b80(float param_1,float param_2)

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
 * Address: 0x10002c20
 */

longdouble recovered_10002c20(float param_1)

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
 * Address: 0x10002c70
 */

longdouble recovered_10002c70(float param_1)

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
 * Address: 0x10002ce0
 */

longdouble recovered_10002ce0(double param_1)

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
 * Address: 0x10002d50
 */

longdouble recovered_10002d50(float param_1)

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
 * Address: 0x10002dd0
 */

longdouble recovered_10002dd0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002370();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000a4c4
#define DAT_1000a4c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000a4c8
#define DAT_1000a4c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1000a4cc
#define DAT_1000a4cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1000a4d0
#define DAT_1000a4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1000a4d4
#define DAT_1000a4d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000a4d8
#define DAT_1000a4d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1000a4dc
#define DAT_1000a4dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1000a4e0
#define DAT_1000a4e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000a4e4
#define DAT_1000a4e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000a4e8
#define DAT_1000a4e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1000a4ec
#define DAT_1000a4ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1000a4f0
#define DAT_1000a4f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1000a518
#define DAT_1000a518 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a4c4
#define _DAT_1000a4c4 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_1000a4c8
#define _DAT_1000a4c8 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_1000a4cc
#define _DAT_1000a4cc (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_1000a4d0
#define _DAT_1000a4d0 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_1000a4d4
#define _DAT_1000a4d4 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_1000a4d8
#define _DAT_1000a4d8 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_1000a4dc
#define _DAT_1000a4dc (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_1000a4e0
#define _DAT_1000a4e0 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_1000a4e4
#define _DAT_1000a4e4 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_1000a4e8
#define _DAT_1000a4e8 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_1000a4ec
#define _DAT_1000a4ec (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_1000a4f0
#define _DAT_1000a4f0 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_1000a518
#define _DAT_1000a518 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002df0(float param_1)

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

  fVar1 = _DAT_1000a4c4;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_1000a4c8 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_1000a4c0;
        iVar10 = iVar10 + 1;
      } while (_DAT_1000a4c8 < param_1);
    }
    for (; param_1 < _DAT_1000a4cc; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_1000a4f0 +
            fVar9 / _DAT_1000a4ec +
            fVar8 / _DAT_1000a4e8 +
            fVar7 / _DAT_1000a4e4 +
            fVar6 / _DAT_1000a4e0 +
            fVar5 / _DAT_1000a4dc +
            fVar4 / _DAT_1000a4d8 +
            fVar3 / _DAT_1000a4d4 + (fVar1 * fVar2) / _DAT_1000a4d0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_1000a518;
  }
  return (longdouble)fVar1;
}

#undef DAT_1000a4c0
#undef DAT_1000a4c4
#undef DAT_1000a4c8
#undef DAT_1000a4cc
#undef DAT_1000a4d0
#undef DAT_1000a4d4
#undef DAT_1000a4d8
#undef DAT_1000a4dc
#undef DAT_1000a4e0
#undef DAT_1000a4e4
#undef DAT_1000a4e8
#undef DAT_1000a4ec
#undef DAT_1000a4f0
#undef DAT_1000a518
#undef _DAT_1000a4c0
#undef _DAT_1000a4c4
#undef _DAT_1000a4c8
#undef _DAT_1000a4cc
#undef _DAT_1000a4d0
#undef _DAT_1000a4d4
#undef _DAT_1000a4d8
#undef _DAT_1000a4dc
#undef _DAT_1000a4e0
#undef _DAT_1000a4e4
#undef _DAT_1000a4e8
#undef _DAT_1000a4ec
#undef _DAT_1000a4f0
#undef _DAT_1000a518

#undef DAT_1000a540
#define DAT_1000a540 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

undefined4 recovered_10002f20(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000a540 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_1000a540
#undef local_14

#undef DAT_1000a4f4
#define DAT_1000a4f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1000a4f8
#define DAT_1000a4f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1000a4fc
#define DAT_1000a4fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1000a520
#define DAT_1000a520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000a528
#define DAT_1000a528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000a530
#define DAT_1000a530 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000a538
#define DAT_1000a538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_1000a4f4
#define _DAT_1000a4f4 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_1000a4f8
#define _DAT_1000a4f8 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_1000a4fc
#define _DAT_1000a4fc (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_1000a520
#define _DAT_1000a520 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000a528
#define _DAT_1000a528 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000a530
#define _DAT_1000a530 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_1000a538
#define _DAT_1000a538 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002f70(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000a520 < param_1; param_1 = param_1 + (float)_DAT_1000a528) {
  }
  for (; param_1 < (float)_DAT_1000a530; param_1 = param_1 + (float)_DAT_1000a538) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_1000a4fc +
          (fVar1 * fVar1) / _DAT_1000a4f8 + fVar1 / _DAT_1000a4f4 + 1.0) * param_1);
}

#undef DAT_1000a4f4
#undef DAT_1000a4f8
#undef DAT_1000a4fc
#undef DAT_1000a520
#undef DAT_1000a528
#undef DAT_1000a530
#undef DAT_1000a538
#undef _DAT_1000a4f4
#undef _DAT_1000a4f8
#undef _DAT_1000a4fc
#undef _DAT_1000a520
#undef _DAT_1000a528
#undef _DAT_1000a530
#undef _DAT_1000a538

#undef DAT_1000a500
#define DAT_1000a500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1000a504
#define DAT_1000a504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1000a508
#define DAT_1000a508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1000a520
#define DAT_1000a520 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_1000a528
#define DAT_1000a528 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1000a530
#define DAT_1000a530 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1000a538
#define DAT_1000a538 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_1000a500
#define _DAT_1000a500 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_1000a504
#define _DAT_1000a504 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef _DAT_1000a508
#define _DAT_1000a508 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_1000a520
#define _DAT_1000a520 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_1000a528
#define _DAT_1000a528 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_1000a530
#define _DAT_1000a530 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_1000a538
#define _DAT_1000a538 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003010
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003010(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000a520 < param_1; param_1 = param_1 + (float)_DAT_1000a528) {
  }
  for (; param_1 < (float)_DAT_1000a530; param_1 = param_1 + (float)_DAT_1000a538) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_1000a508 +
         (fVar1 * fVar1) / _DAT_1000a504 + fVar1 * _DAT_1000a500 + 1.0);
}

#undef DAT_1000a500
#undef DAT_1000a504
#undef DAT_1000a508
#undef DAT_1000a520
#undef DAT_1000a528
#undef DAT_1000a530
#undef DAT_1000a538
#undef _DAT_1000a500
#undef _DAT_1000a504
#undef _DAT_1000a508
#undef _DAT_1000a520
#undef _DAT_1000a528
#undef _DAT_1000a530
#undef _DAT_1000a538

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030b0
 */

void recovered_100030b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

int recovered_100030d0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_100031fc:
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
    if (param_3 <= uVar7) goto LAB_100031fc;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003220
 */

int recovered_10003220(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000334c:
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
    if (param_3 <= uVar7) goto LAB_1000334c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000a510
#define DAT_1000a510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a510
#define _DAT_1000a510 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003370(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)_DAT_1000a510 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_1000a510 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_1000a510;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003431;
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
LAB_10003431:
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
              lVar10 = lVar10 * (longdouble)_DAT_1000a4c0;
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

#undef DAT_1000a4c0
#undef DAT_1000a510
#undef _DAT_1000a4c0
#undef _DAT_1000a510

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003510
 */

longdouble recovered_10003510(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003370(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000a510
#define DAT_1000a510 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef _DAT_1000a510
#define _DAT_1000a510 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef str_1000abb1
#define str_1000abb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f5U)))
#undef str_1000abb8
#define str_1000abb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_1000abc9
#define str_1000abc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70dU)))
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
 * Address: 0x10003540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10003540(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003573;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10003573;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_10003652;
          goto LAB_10003627;
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
LAB_10003627:
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
LAB_10003652:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_100036c1;
    default:
      cVar8 = '\0';
      goto LAB_100036c1;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_100036c1;
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
LAB_100036c1:
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
        goto LAB_100038c8;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_100038c8:
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
        abStack_c5[iVar11 + 1] = str_1000abc9[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003cb0;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_10003ca6;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10003573;
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
        goto LAB_10003ae7;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003ae7;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003ae7:
      pcVar12 = str_1000abb8;
      if (*local_3c != 0x58) {
        pcVar12 = str_1000abc9;
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
LAB_10003573:
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
          abStack_c5[iVar11 + 1] = str_1000abc9[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003ac1;
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
LAB_10003ac1:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_1000a510;
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
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_1000a510;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_1000a510;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_1000a510;
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
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_1000a510);
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
        abStack_c5[iVar11 + 1] = str_1000abc9[uVar9 & 0xf];
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
LAB_10003854:
      break;
    case 0x73:
      pbVar5 = (byte *)str_1000abb1;
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
        goto LAB_10003854;
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
        goto LAB_10003bf3;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003bf3;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003bf3:
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
        abStack_c5[iVar11 + 1] = str_1000abc9[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003cb0:
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
LAB_10003ca6:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_1000a510
#undef _DAT_1000a510
#undef str_1000abb1
#undef str_1000abb8
#undef str_1000abc9
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
int recovered_10003f40(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10003540(buffer,capacity,format,(void *)args);
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
#define DAT_1000c078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1bbcU)))
#undef DAT_1000c07c
#define DAT_1000c07c (*(int * *)(((uintptr_t)pf_module_state + 0x1bc0U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003f70(uint in_ECX,uint in_EDX,uint *param_3)

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
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x1bc4U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_210 (*(undefined4 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100040f0(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

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
            recovered_100015c0(local_210,(undefined4 *)&DAT_1000c084,DAT_1000c080);
            uVar3 = DAT_1000c080;
          }
          *(undefined1 *)((int)local_210 + uVar3) = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000c080 = 0;
        }
        else {
          if (DAT_1000c080 - 0x1ff < 0xfffffe00) {
            recovered_100015c0(local_210,(undefined4 *)&DAT_1000c084,DAT_1000c080);
            *(undefined1 *)((int)local_210 + DAT_1000c080) = 0;
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
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x1bc4U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_204 (*(undefined4 (*)[128])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004290(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000c080 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_100015c0(local_204,(undefined4 *)&DAT_1000c084,DAT_1000c080);
    uVar1 = DAT_1000c080;
  }
  *(undefined1 *)((int)local_204 + uVar1) = 0;
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
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x1bc4U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006840
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined4 (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004320(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000c080 != 0) {
    recovered_100015c0(local_208,(undefined4 *)&DAT_1000c084,DAT_1000c080);
    *(undefined1 *)((int)local_208 + DAT_1000c080) = 0;
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

#undef DAT_1000abb0
#define DAT_1000abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef DAT_1000abda
#define DAT_1000abda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71eU)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b0
 */

void recovered_100043b0(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined *puVar2;

  format = &DAT_1000abda;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000abb0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10003f40(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_100040f0(local_148,iVar1);
  }
  return;
}

#undef DAT_1000abb0
#undef DAT_1000abda
#undef local_148

#undef DAT_1000abf8
#define DAT_1000abf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73cU)))
#undef str_1000abdd
#define str_1000abdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x721U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004410
 */

void recovered_10004410(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x721U));
  recovered_100040f0(str_1000abdd,iVar1);
  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x73cU));
  recovered_100040f0(&DAT_1000abf8,iVar1);
  return;
}

#undef DAT_1000abf8
#undef str_1000abdd

#undef DAT_1000abf8
#define DAT_1000abf8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73cU)))
#undef str_1000abfb
#define str_1000abfb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004460
 */

void recovered_10004460(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x73fU));
  recovered_100040f0(str_1000abfb,iVar1);
  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x73cU));
  recovered_100040f0(&DAT_1000abf8,iVar1);
  return;
}

#undef DAT_1000abf8
#undef str_1000abfb

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
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x1bc4U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
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
#define local_210 (*(undefined4 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100044b0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000c080 != 0) {
      recovered_100015c0(local_210,(undefined4 *)&DAT_1000c084,DAT_1000c080);
      *(undefined1 *)((int)local_210 + DAT_1000c080) = 0;
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
 * Address: 0x100045a0
 */

undefined4 recovered_100045a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045b0
 */

void recovered_100045b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c0
 */

undefined1 recovered_100045c0(void)

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
#undef DAT_1000abda
#define DAT_1000abda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x71eU)))
#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_1000ac8f
#define str_1000ac8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d3U)))
#undef str_1000ac9c
#define str_1000ac9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e0U)))
#undef str_1000acaa
#define str_1000acaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eeU)))
#define local_1c (*(undefined4 * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100045d0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  bool bVar10;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10001cf0((byte *)param_1,(byte *)str_1000ac8f);
  if (iVar3 == 0) {
    uVar9 = 1;
  }
  else {
    iVar4 = recovered_10001cf0((byte *)param_1,(byte *)str_1000ac9c);
    if (iVar4 == 0) {
      uVar9 = 2;
    }
    else {
      iVar4 = recovered_10001cf0((byte *)param_1,(byte *)str_1000acaa);
      if (iVar4 != 0) {
        pbVar5 = recovered_10001500(800);
        if (pbVar5 != (byte *)0x0) {
          recovered_10001850(pbVar5,0,800);
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pcVar6 = recovered_10001ed0((char *)param_2,'r');
          bVar10 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001ed0((char *)param_2,'+');
            bVar10 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001ed0((char *)param_2,'a');
              bVar10 = pcVar6 != (char *)0x0;
            }
          }
          pbVar5[0x110] = bVar10;
          pcVar6 = recovered_10001ed0((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001ed0((char *)param_2,'a');
            bVar10 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001ed0((char *)param_2,'+');
              bVar10 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar10 = true;
          }
          pbVar5[0x111] = bVar10;
          pcVar6 = recovered_10001ed0((char *)param_2,'a');
          pbVar5[0x112] = pcVar6 != (char *)0x0;
          pbVar5[0x10c] = 0xff;
          pbVar5[0x10d] = 0xff;
          pbVar5[0x10e] = 0xff;
          pbVar5[0x10f] = 0xff;
          pf_varargs_10003f40__4_((char *)(pbVar5 + 4),0xf1,&DAT_1000abda,param_1);
          recovered_10001850((byte *)&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001ed0((char *)param_2,'w');
            if (local_18 != 0 && pcVar6 == (char *)0x0) {
              if (pbVar5[0x111] == 1) {
                uVar7 = *(uint *)(pbVar5 + 0x104);
                if (uVar7 < local_18) {
                  uVar2 = 0x100;
                  if (uVar7 != 0) {
                    uVar2 = uVar7;
                  }
                  do {
                    uVar7 = uVar2;
                    uVar2 = uVar7 * 2;
                  } while (uVar7 < local_18);
                  puVar8 = recovered_10001580(*(void **)(pbVar5 + 0xfc),uVar7);
                  if (puVar8 == (undefined4 *)0x0) {
                    *(undefined4 *)PTR_DAT_1000c000 = 0xc;
                    pbVar5[0x115] = 1;
                    goto LAB_100048ee;
                  }
                  *(undefined4 **)(pbVar5 + 0xfc) = puVar8;
                  *(uint *)(pbVar5 + 0x104) = uVar7;
                  *(undefined4 **)(pbVar5 + 0xf8) = puVar8;
                }
                else {
                  puVar8 = *(undefined4 **)(pbVar5 + 0xfc);
                }
                recovered_100015c0(puVar8,local_1c,local_18);
              }
              else {
                *(undefined4 **)(pbVar5 + 0xf8) = local_1c;
              }
              *(uint *)(pbVar5 + 0x100) = local_18;
              bVar1 = pbVar5[0x112];
              goto joined_r0x100048cc;
            }
          }
          else if (pbVar5[0x111] == 0) {
            *(undefined4 *)PTR_DAT_1000c000 = 2;
LAB_100048ee:
            recovered_10001540(pbVar5);
            return (undefined4 *)0x0;
          }
          bVar1 = pbVar5[0x112];
joined_r0x100048cc:
          if (bVar1 == 1) {
            *(undefined4 *)(pbVar5 + 0x108) = *(undefined4 *)(pbVar5 + 0x100);
            return (undefined4 *)pbVar5;
          }
          return (undefined4 *)pbVar5;
        }
        goto LAB_10004756;
      }
      uVar9 = 3;
    }
  }
  pbVar5 = recovered_10001500(800);
  if (pbVar5 != (byte *)0x0) {
    recovered_10001850(pbVar5,0,800);
    *(undefined4 *)pbVar5 = uVar9;
    pbVar5[0x110] = iVar3 == 0;
    pbVar5[0x111] = iVar3 != 0;
    pbVar5[0x10c] = 0xff;
    pbVar5[0x10d] = 0xff;
    pbVar5[0x10e] = 0xff;
    pbVar5[0x10f] = 0xff;
    pf_varargs_10003f40__4_((char *)(pbVar5 + 4),0xf1,&DAT_1000abda,param_1);
    return (undefined4 *)pbVar5;
  }
LAB_10004756:
  *(undefined4 *)PTR_DAT_1000c000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1000abda
#undef PTR_DAT_1000c000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000ac8f
#undef str_1000ac9c
#undef str_1000acaa
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
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004950(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_100049fd;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_100049e3;
      }
    }
    *(undefined4 *)PTR_DAT_1000c000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_100049e3:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10001540((void *)param_3[0x3f]);
  }
  recovered_10001540(param_3);
LAB_100049fd:
  recovered_100045d0(param_1,param_2);
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
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004a10(int *param_1)

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
    recovered_10001540((void *)param_1[0x3f]);
  }
  recovered_10001540(param_1);
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
 * Address: 0x10004ae0
 */

uint recovered_10004ae0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_100015c0((undefined4 *)param_1,(undefined4 *)(uVar2 + param_4[0x3e]),uVar1);
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
          uVar3 = recovered_10004be0(param_4);
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
#undef DAT_1000abb0
#define DAT_1000abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint *)(((uintptr_t)pf_module_state + 0x1bc4U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
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
#define local_20c (*(undefined4 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004be0(int *param_1)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x44] != '\x01') {
    return 0xffffffff;
  }
  uVar2 = param_1[0x43];
  if (uVar2 != 0xffffffff) {
    param_1[0x43] = -1;
    return uVar2;
  }
  if (*param_1 == 1) {
    uVar2 = param_1[199];
    if (uVar2 < (uint)param_1[0xc6]) {
LAB_10004c37:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000c080 != 0) {
      recovered_100015c0(local_20c,(undefined4 *)&DAT_1000c084,DAT_1000c080);
      *(undefined1 *)((int)local_20c + DAT_1000c080) = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000c080 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((int)param_1 + 0x116,0x1fe,&DAT_1000abb0,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10001cc0((int)param_1 + 0x116);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)((int)param_1 + iVar1 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10004c37;
      }
    }
  }
  else {
    uVar2 = param_1[0x42];
    if (uVar2 < (uint)param_1[0x40]) {
      param_1[0x42] = uVar2 + 1;
      return (uint)*(byte *)(param_1[0x3e] + uVar2);
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
#undef DAT_1000abb0
#undef DAT_1000c080
#undef DAT_1000c084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d90
 */

int recovered_10004d90(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10004ede:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_100040f0((char *)param_1,uVar5);
      param_4[0x42] = param_4[0x42] + uVar5;
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
    if (uVar2 < uVar4 + uVar5) {
      uVar1 = 0x100;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 * 2;
      } while (uVar2 < uVar4 + uVar5);
      pvVar3 = recovered_10001580((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000c000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10004ede;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001850((byte *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_100015c0((undefined4 *)(uVar4 + param_4[0x3f]),(undefined4 *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000c000

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

undefined4 recovered_10004ef0(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10004eff;
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
LAB_10004eff:
  *(undefined4 *)PTR_DAT_1000c000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000c000

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f70
 */

undefined4 recovered_10004f70(int param_1)

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
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004fa0(int *param_1)

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
 * Address: 0x10005050
 */

undefined1 recovered_10005050(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005070
 */

undefined1 recovered_10005070(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005090
 */

void recovered_10005090(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b0
 */

uint recovered_100050b0(uint param_1,int param_2)

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
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100050e0(int param_1)

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
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1b44U)))
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
 * Address: 0x10005150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005150(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000c000 = 0x16;
  }
  else {
    recovered_10001850((byte *)&local_1c,0,0xc);
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
#define local_1c (*(undefined4 * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100052c0(int param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;

  if (param_3 != (int *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_10001850((byte *)&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      puVar2 = recovered_10001500(local_18 + (local_18 == 0));
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_100015c0(puVar2,local_1c,local_18);
        uVar3 = local_18;
      }
      *param_2 = puVar2;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
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
 * Address: 0x10005390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005390(int param_1,int param_2,int param_3)

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
 * Address: 0x10005400
 */

undefined4 recovered_10005400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005410
 */

void recovered_10005410(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005420
 */

undefined4 recovered_10005420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005430
 */

undefined4 recovered_10005430(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005440
 */

undefined4 recovered_10005440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

char * recovered_10005450(char *param_1,char param_2,int param_3)

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
 * Address: 0x10005480
 */

int recovered_10005480(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  bool bVar3;

  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      bVar1 = *(byte *)(param_1 + iVar2);
      if (bVar1 != *(byte *)(param_2 + iVar2)) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar3 = param_3 + -1 == iVar2;
      iVar2 = iVar2 + 1;
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = (uint)bVar1 - (uint)*(byte *)(param_2 + iVar2);
  }
  return iVar2;
}


#undef DAT_1000ac1e
#define DAT_1000ac1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x762U)))
#undef str_1000ac21
#define str_1000ac21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x765U)))
#undef str_1000ac2e
#define str_1000ac2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x772U)))
#undef str_1000ac38
#define str_1000ac38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77cU)))
#undef str_1000ac4c
#define str_1000ac4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x790U)))
#undef str_1000ac5a
#define str_1000ac5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79eU)))
#undef str_1000ac6c
#define str_1000ac6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b0U)))
#undef str_1000ac78
#define str_1000ac78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7bcU)))
#undef str_1000ac89
#define str_1000ac89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7cdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054d0
 */

char * recovered_100054d0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ac1e;
  default:
    return str_1000ac89;
  case 2:
    return str_1000ac21;
  case 5:
    return str_1000ac2e;
  case 9:
    return str_1000ac38;
  case 0xc:
    return str_1000ac4c;
  case 0xd:
    return str_1000ac5a;
  case 0x11:
    return str_1000ac6c;
  case 0x16:
    return str_1000ac78;
  }
}

#undef DAT_1000ac1e
#undef str_1000ac21
#undef str_1000ac2e
#undef str_1000ac38
#undef str_1000ac4c
#undef str_1000ac5a
#undef str_1000ac6c
#undef str_1000ac78
#undef str_1000ac89

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

undefined4 recovered_10005530(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005540
 */

undefined4 recovered_10005540(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c284
#define DAT_1000c284 (*(int *)(((uintptr_t)pf_module_state + 0x1dc8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

void recovered_10005550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c284 = DAT_1000c284 + 1;
  return;
}

#undef DAT_1000c284

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10005570(void *context){__asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\nmovl 36(%eax),%edx\njmpl *%edx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10005580(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100055b0(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_1000561d
#define DAT_1000561d (*(uint8_t *)(0x1000561dU))
#undef DAT_1000af68
#define DAT_1000af68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaacU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void recovered_100055e0(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005640;
  local_28 = &DAT_1000af68;
  local_20 = &DAT_1000561d;
  local_40 = 1;
  recovered_10005b00(&local_44);
  recovered_100014c0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000561d
#undef DAT_1000af68
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005640
 */

undefined4 recovered_10005640(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

void recovered_10005650(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005670(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}


#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0x1dccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

int recovered_10005670(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000c288;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000c288 = param_1;
  iVar1 = recovered_100059a0(param_1);
  return iVar1;
}

#undef DAT_1000c288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

void * recovered_100056a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001500(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100014c0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void * recovered_100056d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001500(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100014c0();
  }
  return pvVar1;
}


#undef DAT_1000af78
#define DAT_1000af78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabcU)))
#undef LAB_10005754
#define LAB_10005754 (*(uint8_t *)(0x10005754U))
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
 * Address: 0x10005700
 */

void recovered_10005700(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005640;
  local_28 = &DAT_1000af78;
  local_20 = &LAB_10005754;
  local_40 = 1;
  recovered_10005b00(&local_44);
  recovered_10001540(param_1);
  recovered_10005b20(&local_44);
  return;
}

#undef DAT_1000af78
#undef LAB_10005754
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_1000af88
#define DAT_1000af88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaccU)))
#undef LAB_100057d4
#define LAB_100057d4 (*(uint8_t *)(0x100057d4U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

void recovered_10005780(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005640;
  local_28 = &DAT_1000af88;
  local_20 = &LAB_100057d4;
  local_40 = 1;
  recovered_10005b00(&local_44);
  recovered_10001540(param_1);
  recovered_10005b20(&local_44);
  return;
}

#undef DAT_1000af88
#undef LAB_100057d4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

#undef DAT_1000af98
#define DAT_1000af98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadcU)))
#undef LAB_10005854
#define LAB_10005854 (*(uint8_t *)(0x10005854U))
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
 * Address: 0x10005800
 */

void recovered_10005800(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005640;
  local_28 = &DAT_1000af98;
  local_20 = &LAB_10005854;
  local_40 = 1;
  recovered_10005b00(&local_44);
  recovered_10001540(param_1);
  recovered_10005b20(&local_44);
  return;
}

#undef DAT_1000af98
#undef LAB_10005854
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_1000afa8
#define DAT_1000afa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaecU)))
#undef LAB_100058d4
#define LAB_100058d4 (*(uint8_t *)(0x100058d4U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005880
 */

void recovered_10005880(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005640;
  local_28 = &DAT_1000afa8;
  local_20 = &LAB_100058d4;
  local_40 = 1;
  recovered_10005b00(&local_44);
  recovered_10001540(param_1);
  recovered_10005b20(&local_44);
  return;
}

#undef DAT_1000afa8
#undef LAB_100058d4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_cc
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005900
 */

undefined4 recovered_10005900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005910
 */

uint recovered_10005910(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005920
 */

void recovered_10005920(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005930
 */

void recovered_10005930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005940
 */

undefined1 * recovered_10005940(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001500(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100055e0();
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
 * Address: 0x10005980
 */

void recovered_10005980(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10001540((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a0
 */

int recovered_100059a0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000c288
#define DAT_1000c288 (*(void * *)(((uintptr_t)pf_module_state + 0x1dccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059b0
 */

void recovered_100059b0(void)

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
      recovered_10001540(pointer);
    }
  }
  return;
}

#undef DAT_1000c288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a00
 */

void recovered_10005a00(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005a40(param_1 + -0x1c);
}


#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0x1dccU)))
#undef DAT_1000c28c
#define DAT_1000c28c (*(int * *)(((uintptr_t)pf_module_state + 0x1dd0U)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a40
 */

void recovered_10005a40(int in_ECX)

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
      uVar1 = recovered_100063d0((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005b90(local_14);
        in_ECX_00 = DAT_1000c288;
        if (DAT_1000c288 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_100055e0();
        }
        *(undefined1 *)(DAT_1000c288 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005a40(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}

#undef DAT_1000c288
#undef DAT_1000c28c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000c288
#define DAT_1000c288 (*(int *)(((uintptr_t)pf_module_state + 0x1dccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

void recovered_10005ac0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000c288;
  if (DAT_1000c288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100055e0();
  }
  *(undefined1 *)(DAT_1000c288 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005a40(in_ECX);
}

#undef DAT_1000c288

#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b00
 */

void recovered_10005b00(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c28c;
  DAT_1000c28c = param_1;
  return;
}

#undef DAT_1000c28c

#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1dd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b20
 */

void recovered_10005b20(undefined4 *param_1)

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
 * Address: 0x10005b50
 */

void recovered_10005b50(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005a40(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

void recovered_10005b60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}


#undef DAT_1000c28c
#define DAT_1000c28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1dd0U)))
#define iStack_34 (*(int *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define uStack_24 (*(undefined4 *)(frame + 44))
#define uStack_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

undefined4 recovered_10005b70(int in_stack_00000004)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000c28c != (undefined4 *)0x0) {
    DAT_1000c28c = (undefined4 *)*DAT_1000c28c;
  }
  recovered_10005b90(in_stack_00000004);
  if (DAT_1000c28c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000c28c;
      if (DAT_1000c28c == puVar1) {
        DAT_1000c28c[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_10005c0b:
        puVar2[1] = uVar3;
        recovered_10005570((int)puVar2);
        recovered_10005b70(iStack_34);
        return 0;
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_100063d0((int)DAT_1000c28c,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_10005c0b;
      }
      DAT_1000c28c = (undefined4 *)*puVar2;
    } while (DAT_1000c28c != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}

#undef DAT_1000c28c
#undef iStack_34
#undef uStack_28
#undef uStack_24
#undef uStack_20

#undef DAT_1000c28c
#define DAT_1000c28c (*(int * *)(((uintptr_t)pf_module_state + 0x1dd0U)))
#define local_1c (*(undefined4 *)(frame + 36))
#define iStack_28 (*(int *)(frame + 24))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

undefined4 recovered_10005b90(int in_ECX)

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
LAB_10005c0b:
        piVar2[1] = iVar3;
        recovered_10005570((int)piVar2);
        recovered_10005b70(iStack_28);
        return 0;
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_100063d0((int)DAT_1000c28c,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_10005c0b;
      }
      DAT_1000c28c = (int *)*piVar2;
    } while (DAT_1000c28c != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}

#undef DAT_1000c28c
#undef local_1c
#undef iStack_28
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

undefined4 recovered_10005c20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005b70(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c40
 */

undefined4 recovered_10005c40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c50
 */

void recovered_10005c50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100055e0();
}


#undef DAT_1000c05c
#define DAT_1000c05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ba0U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

int recovered_10005c60(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10005d10;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10005d10;
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
LAB_10005d10:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000c05c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d30
 */

void recovered_10005d30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100014c0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d40
 */

undefined4 recovered_10005d40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d50
 */

bool recovered_10005d50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d70
 */

bool recovered_10005d70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005da0
 */

bool recovered_10005da0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005dd0
 */

bool recovered_10005dd0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005df0
 */

bool recovered_10005df0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e10
 */

byte recovered_10005e10(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e50
 */

bool recovered_10005e50(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10005e70(double value) {
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
float recovered_10005fa0(float value){return (float)recovered_10005e70((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_100060e0(long double value){return (long double)recovered_10005e70((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10006210(long end,long start){return (double)end-(double)start;}


#undef DAT_1000a4c0
#define DAT_1000a4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_1000a500
#define DAT_1000a500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_1000a4c0
#define _DAT_1000a4c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_1000a500
#define _DAT_1000a500 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10006230(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_100022c0(param_1);
  if ((longdouble)_DAT_1000a4c0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_1000a500 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000a4c0
#undef DAT_1000a500
#undef _DAT_1000a4c0
#undef _DAT_1000a500

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006280
 */

ulonglong recovered_10006280(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_1000632d;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_1000632d;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_1000632d;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_1000632d;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_1000632d:
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
 * Address: 0x100063c0
 */

void recovered_100063c0(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006280(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_1000a7c8
#define DAT_1000a7c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_1000c05c
#define DAT_1000c05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ba0U)))
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
 * Address: 0x100063d0
 */

undefined4 recovered_100063d0(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_10006750((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10006560;
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
LAB_10006560:
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
    if (0x1f < uVar5) goto LAB_10006608;
LAB_100066f9:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10006610;
LAB_10006704:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_100066f9;
LAB_10006608:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10006704;
LAB_10006610:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_1000672f:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_1000a7c8 + local_38 * 4) * local_20;
      pbVar9 = recovered_10006750(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_1000672f;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_1000672f;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_1000672f;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000c05c) goto LAB_1000670b;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_1000672f;
    }
  }
LAB_1000670b:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10006560;
}

#undef DAT_1000a7c8
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
 * Address: 0x10006750
 */

byte * recovered_10006750(uint in_ECX,int *in_EDX)

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
    goto LAB_10006825;
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
    goto LAB_10006825;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000677d_caseD_5;
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
LAB_10006825:
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
switchD_1000677d_caseD_5:
  return pbVar3;
}


#undef DAT_1000acb8
#define DAT_1000acb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006860
 */

undefined * recovered_10006860(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000acb8;
}

#undef DAT_1000acb8

#undef PTR_str_1000ade9_1000b000
#define PTR_str_1000ade9_1000b000 (*(char * *)(((uintptr_t)pf_module_state + 0xb44U)))
#undef str_1000acbc
#define str_1000acbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x800U)))
#undef str_1000accc
#define str_1000accc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x810U)))
#undef str_1000aced
#define str_1000aced (*(char (*)[1])(((uintptr_t)pf_module_state + 0x831U)))
#undef str_1000ada4
#define str_1000ada4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e8U)))
#undef str_1000adad
#define str_1000adad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f1U)))
#undef str_1000adc2
#define str_1000adc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x906U)))
#undef str_1000add0
#define str_1000add0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x914U)))
#undef str_1000ade0
#define str_1000ade0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x924U)))
#define local_34 (*(byte * *)(frame + 4220))
#define local_30 (*(byte * *)(frame + 4224))
#define local_2c (*(uint *)(frame + 4228))
#define local_28 (*(byte * *)(frame + 4232))
#define local_24 (*(byte * *)(frame + 4236))
#define local_20 (*(byte * *)(frame + 4240))
#define local_19 (*(byte *)(frame + 4247))
#define local_18 (*(byte * *)(frame + 4248))
#define local_14 (*(byte * *)(frame + 4252))
#define local_1094 (*(char (*)[4096])(frame + 28))
#define local_94 (*(byte (*)[96])(frame + 4124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006870
 */

byte * recovered_10006870(byte *param_1,byte *param_2,char *param_3,byte *param_4,char *param_5,
                         int param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10,
                         uint param_11)

{
  unsigned char frame[4304] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;

  if (param_2 == (byte *)0x0) {
    local_14 = (byte *)0x0;
  }
  else {
    iVar2 = recovered_10001cc0((int)param_2);
    local_14 = param_2 + iVar2;
  }
  local_24 = param_2;
  if (param_6 != 0 && param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  local_19 = param_10 == 0 || param_9 == (char *)0x0;
  if (param_10 != 0 && param_9 != (char *)0x0) {
    *param_9 = '\0';
  }
  if (param_8 != 0 && param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (param_2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  local_94[0] = 0;
  pbVar13 = param_2;
  do {
    pbVar3 = pbVar13 + 1;
    uVar9 = (uint)*pbVar13;
    if (0x17 < uVar9 - 9) break;
    pbVar13 = pbVar3;
  } while ((0x800013U >> (uVar9 - 9 & 0x1f) & 1) != 0);
  uVar12 = 0;
  while ((((bVar11 = (byte)uVar9, (byte)(bVar11 - 0x30U) < 10 ||
           ((byte)((bVar11 & 0xdf) + 0xbf) < 0x1a)) || (bVar11 == 0x5f)) || (uVar9 == 0x24))) {
    if (uVar12 + 1 < 0x60) {
      local_94[uVar12] = bVar11;
      uVar12 = uVar12 + 1;
    }
    bVar11 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar9 = (uint)bVar11;
  }
  local_94[uVar12] = 0;
  pbVar13 = local_14;
  while ((uVar9 - 9 < 0x18 && ((0x800013U >> (uVar9 - 9 & 0x1f) & 1) != 0))) {
    uVar9 = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  pbVar3 = local_14;
  if ((uVar12 == 0) || ((char)uVar9 != '(')) goto LAB_10006c0d;
  if (param_1 == (byte *)0x0) {
    local_30 = (byte *)0x0;
LAB_10006be5:
    local_20 = (byte *)0x0;
  }
  else {
    local_30 = (byte *)0x0;
    if (local_94[0] == 0) goto LAB_10006be5;
    iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8e8U));
    local_20 = (byte *)0x0;
    if (iVar2 != 0) {
      local_30 = (byte *)0x0;
LAB_10006a37:
      if (*param_1 != 0) {
        do {
          iVar10 = 0;
          while( true ) {
            bVar11 = param_1[iVar10];
            if (bVar11 == 0) break;
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            bVar8 = str_1000ada4[iVar10];
            if ((byte)(bVar8 + 0xbf) < 0x1a) {
              bVar8 = bVar8 | 0x20;
            }
            pbVar13 = local_14;
            if (bVar11 != bVar8) break;
            iVar10 = iVar10 + 1;
            if (iVar2 == iVar10) goto LAB_10006ab0;
          }
          if (iVar2 == iVar10) goto LAB_10006ab0;
          pbVar3 = param_1 + 1;
          param_1 = param_1 + 1;
          if (*pbVar3 == 0) break;
        } while( true );
      }
      goto LAB_10006be5;
    }
  }
LAB_10006bec:
  pbVar3 = local_30;
  local_24 = local_20;
  if (local_20 == (byte *)0x0 || local_30 == (byte *)0x0) {
    pbVar3 = pbVar13;
    local_24 = param_2;
  }
LAB_10006c0d:
  uVar9 = 0;
  local_14 = pbVar3;
  if (((param_11 & 2) != 0) && (pbVar3 != (byte *)0x0)) {
    iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x800U));
    pbVar13 = local_14;
    uVar9 = 0;
    if ((local_24 <= pbVar3) &&
       (((local_24 != (byte *)0x0 && (iVar2 != 0)) && (local_24 + iVar2 <= pbVar3)))) {
      pbVar5 = local_24;
      do {
        if (*pbVar5 == 0) {
          uVar9 = 0;
          break;
        }
        iVar10 = 0;
        while ((pbVar5 + iVar10 < pbVar3 && (bVar11 = pbVar5[iVar10], bVar11 != 0))) {
          if ((byte)(bVar11 + 0xbf) < 0x1a) {
            bVar11 = bVar11 | 0x20;
          }
          bVar8 = str_1000acbc[iVar10];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar11 != bVar8) break;
          iVar10 = iVar10 + 1;
          pbVar3 = local_14;
          if (iVar2 == iVar10) goto joined_r0x10006d2b;
        }
        if (iVar2 == iVar10) {
joined_r0x10006d2b:
          uVar9 = 4;
          pbVar3 = pbVar13;
          if (local_19 == 0) {
            uVar9 = 4;
            if (*param_9 == '\0') {
              uVar9 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x810U));
              if (param_10 <= uVar9) {
                uVar9 = param_10 - 1;
              }
              if (uVar9 != 0) {
                recovered_100015c0((undefined4 *)param_9,(undefined4 *)str_1000accc,uVar9);
              }
              param_9[uVar9] = '\0';
              uVar9 = 4;
            }
          }
          break;
        }
        pbVar4 = pbVar5 + iVar2 + 1;
        pbVar5 = pbVar5 + 1;
        uVar9 = 0;
        pbVar3 = pbVar13;
      } while (pbVar4 <= local_14);
    }
  }
  local_2c = uVar9;
  if (param_5 == (char *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if ((param_6 != 0) && (pbVar3 != (byte *)0x0)) {
      if (local_24 < pbVar3) {
        local_34 = pbVar3 + -1;
        pbVar13 = local_24;
        do {
          local_18 = pbVar13;
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8f1U));
          local_20 = (byte *)0x0;
          pbVar13 = (byte *)0x0;
          if (((local_18 != (byte *)0x0) && (iVar2 != 0)) && (local_18 + iVar2 <= pbVar3)) {
            pbVar13 = local_18;
            do {
              if (*pbVar13 == 0) break;
              iVar10 = 0;
              while( true ) {
                if (pbVar3 <= pbVar13 + iVar10) break;
                bVar11 = pbVar13[iVar10];
                if (bVar11 == 0) break;
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                bVar8 = str_1000adad[iVar10];
                if ((byte)(bVar8 + 0xbf) < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                pbVar3 = local_14;
                if (bVar11 != bVar8) break;
                iVar10 = iVar10 + 1;
                if (iVar2 == iVar10) goto LAB_10006e00;
              }
              if (iVar2 == iVar10) goto LAB_10006e00;
              pbVar5 = pbVar13 + iVar2 + 1;
              pbVar13 = pbVar13 + 1;
            } while (pbVar5 <= pbVar3);
            pbVar13 = (byte *)0x0;
          }
LAB_10006e00:
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x906U));
          if (local_18 != (byte *)0x0) {
            if (iVar2 != 0) {
              pbVar5 = local_18;
              if (local_18 + iVar2 <= pbVar3) {
                do {
                  if (*pbVar5 == 0) break;
                  iVar10 = 0;
                  while( true ) {
                    local_20 = pbVar5;
                    if ((pbVar3 <= pbVar5 + iVar10) || (bVar11 = pbVar5[iVar10], bVar11 == 0))
                    break;
                    if ((byte)(bVar11 + 0xbf) < 0x1a) {
                      bVar11 = bVar11 | 0x20;
                    }
                    bVar8 = str_1000adc2[iVar10];
                    if ((byte)(bVar8 + 0xbf) < 0x1a) {
                      bVar8 = bVar8 | 0x20;
                    }
                    if (bVar11 != bVar8) break;
                    iVar10 = iVar10 + 1;
                    pbVar3 = local_14;
                    if (iVar2 == iVar10) {
                      goto LAB_10006e93;
                    }
                  }
                  if (iVar2 == iVar10) {
                    pbVar3 = local_14;
                    goto LAB_10006e93;
                  }
                  pbVar4 = pbVar5 + iVar2 + 1;
                  pbVar5 = pbVar5 + 1;
                  pbVar3 = local_14;
                } while (pbVar4 <= local_14);
                local_20 = (byte *)0x0;
              }
            }
          }
LAB_10006e93:
          local_30 = pbVar13;
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x914U));
          local_28 = (byte *)0x0;
          pbVar13 = (byte *)0x0;
          if (((local_18 != (byte *)0x0) && (iVar2 != 0)) && (local_18 + iVar2 <= pbVar3)) {
            pbVar13 = local_18;
            do {
              if (*pbVar13 == 0) break;
              iVar10 = 0;
              while( true ) {
                if (pbVar3 <= pbVar13 + iVar10) break;
                bVar11 = pbVar13[iVar10];
                if (bVar11 == 0) break;
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                bVar8 = str_1000add0[iVar10];
                if ((byte)(bVar8 + 0xbf) < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                pbVar3 = local_14;
                if (bVar11 != bVar8) break;
                iVar10 = iVar10 + 1;
                if (iVar2 == iVar10) goto LAB_10006f20;
              }
              if (iVar2 == iVar10) goto LAB_10006f20;
              pbVar5 = pbVar13 + iVar2 + 1;
              pbVar13 = pbVar13 + 1;
            } while (pbVar5 <= pbVar3);
            pbVar13 = (byte *)0x0;
          }
LAB_10006f20:
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x924U));
          if (local_18 != (byte *)0x0) {
            if (iVar2 != 0) {
              pbVar5 = local_18;
              if (local_18 + iVar2 <= pbVar3) {
                do {
                  if (*pbVar5 == 0) goto LAB_10006fb3;
                  iVar10 = 0;
                  while( true ) {
                    if (pbVar3 <= pbVar5 + iVar10) break;
                    bVar11 = pbVar5[iVar10];
                    if (bVar11 == 0) break;
                    if ((byte)(bVar11 + 0xbf) < 0x1a) {
                      bVar11 = bVar11 | 0x20;
                    }
                    bVar8 = str_1000ade0[iVar10];
                    if ((byte)(bVar8 + 0xbf) < 0x1a) {
                      bVar8 = bVar8 | 0x20;
                    }
                    pbVar3 = local_14;
                    if (bVar11 != bVar8) break;
                    iVar10 = iVar10 + 1;
                    if (iVar2 == iVar10) {
                      local_28 = pbVar5;
                      goto LAB_10006fb3;
                    }
                  }
                  if (iVar2 == iVar10) {
                    local_28 = pbVar5;
                    goto LAB_10006fb3;
                  }
                  pbVar4 = pbVar5 + iVar2 + 1;
                  pbVar5 = pbVar5 + 1;
                } while (pbVar4 <= pbVar3);
                local_28 = (byte *)0x0;
              }
            }
          }
LAB_10006fb3:
          pbVar5 = local_20;
          if (local_30 == (byte *)0x0) {
            if (local_20 != (byte *)0x0) goto LAB_10006fe8;
            if (pbVar13 != (byte *)0x0) goto LAB_10006ffb;
LAB_10007003:
            pbVar13 = local_28;
          }
          else {
            if (local_30 <= local_20) {
              pbVar5 = local_30;
            }
            if (local_20 == (byte *)0x0) {
              pbVar5 = local_30;
            }
LAB_10006fe8:
            pbVar4 = pbVar13;
            if (pbVar5 <= pbVar13) {
              pbVar4 = pbVar5;
            }
            bVar14 = pbVar13 == (byte *)0x0;
            pbVar13 = pbVar4;
            if (bVar14) {
              pbVar13 = pbVar5;
            }
LAB_10006ffb:
            if ((local_28 != (byte *)0x0) && (local_28 < pbVar13)) goto LAB_10007003;
          }
          if ((pbVar13 == (byte *)0x0) || (pbVar3 <= pbVar13)) break;
          if ((((local_24 < pbVar13) &&
               ((((bVar11 = pbVar13[-1], (byte)(bVar11 - 0x30U) < 10 ||
                  ((byte)((bVar11 & 0xdf) + 0xbf) < 0x1a)) || (bVar11 == 0x24)) ||
                ((bVar11 == 0x5f || (bVar11 == 0x2e)))))) ||
              (pbVar5 = (byte *)recovered_10001ed0((char *)pbVar13,'='), pbVar5 == (byte *)0x0)) ||
             (pbVar3 <= pbVar5)) {
            pbVar13 = pbVar13 + 1;
          }
          else {
            pbVar4 = pbVar5 + 1;
            pbVar13 = pbVar4;
            if (pbVar4 < pbVar3) {
              iVar2 = (int)local_34 - (int)pbVar5;
              do {
                bVar11 = *pbVar13;
                if (((bVar11 == 10) || (bVar11 == 0xd)) || (bVar11 == 0x3b)) goto LAB_100070b0;
                pbVar13 = pbVar13 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              pbVar13 = pbVar3;
            }
LAB_100070b0:
            *param_5 = '\0';
            uVar9 = recovered_10008660(param_5,param_6,(char *)pbVar4,(char *)pbVar13,param_3,
                                       (char *)param_4);
            if (((uVar9 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_1000726a;
          }
        } while (pbVar13 < pbVar3);
      }
      local_18 = (byte *)0x0;
      do {
        if (local_24 < pbVar3) {
          puVar1 = (&PTR_str_1000ade9_1000b000)[(int)local_18];
          pbVar13 = local_24;
LAB_10007158:
          iVar2 = recovered_10001cc0((int)puVar1);
          if (((pbVar13 != (byte *)0x0) && (iVar2 != 0)) && (pbVar13 + iVar2 <= pbVar3)) {
            do {
              if (*pbVar13 == 0) break;
              iVar10 = 0;
              while( true ) {
                if (pbVar3 <= pbVar13 + iVar10) break;
                bVar11 = pbVar13[iVar10];
                if (bVar11 == 0) break;
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                bVar8 = puVar1[iVar10];
                if ((byte)(bVar8 + 0xbf) < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                pbVar3 = local_14;
                if (bVar11 != bVar8) break;
                iVar10 = iVar10 + 1;
                if (iVar2 == iVar10) goto LAB_100071e0;
              }
              if (iVar2 == iVar10) goto LAB_100071e0;
              pbVar5 = pbVar13 + iVar2 + 1;
              pbVar13 = pbVar13 + 1;
              if (pbVar3 < pbVar5) break;
            } while( true );
          }
        }
LAB_10007120:
        local_18 = local_18 + 1;
      } while (local_18 != (byte *)0x5);
      uVar9 = 0;
    }
  }
LAB_1000726a:
  pbVar13 = (byte *)(uVar9 | local_2c);
  if (((param_11 & 1) != 0) && (pbVar3 != (byte *)0x0)) {
    uVar9 = (int)pbVar3 - (int)local_24;
    if (0xffe < uVar9) {
      uVar9 = 0xfff;
    }
    local_14 = pbVar13;
    recovered_100015c0((undefined4 *)local_1094,(undefined4 *)local_24,uVar9);
    local_1094[uVar9] = '\0';
    local_18 = (byte *)recovered_100073f0(local_1094,param_7,param_8);
    uVar9 = recovered_10007610(local_1094,param_7,param_8);
    uVar12 = recovered_10007ce0(local_1094,param_7,param_8);
    uVar7 = recovered_10007e60(local_1094,param_7,param_8);
    pbVar13 = (byte *)((uint)local_14 | uVar7 | uVar12 | uVar9 | (uint)local_18);
  }
  bVar14 = pbVar13 != (byte *)0x0;
  if (!bVar14) {
    pbVar13 = (byte *)0x8;
  }
  local_19 = local_19 | bVar14;
  if ((local_19 == 0) && (pbVar13 = (byte *)0x8, *param_9 == '\0')) {
    uVar9 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x831U));
    if (param_10 <= uVar9) {
      uVar9 = param_10 - 1;
    }
    if (uVar9 != 0) {
      recovered_100015c0((undefined4 *)param_9,(undefined4 *)str_1000aced,uVar9);
    }
    param_9[uVar9] = '\0';
    pbVar13 = (byte *)0x8;
  }
  return pbVar13;
LAB_10006ab0:
  pbVar3 = param_1 + 8;
  while ((*pbVar3 - 9 < 0x18 && ((0x800013U >> (*pbVar3 - 9 & 0x1f) & 1) != 0))) {
    pbVar3 = pbVar3 + 1;
  }
  local_18 = param_1;
  local_28 = (byte *)recovered_10001cc0((int)local_94);
  iVar2 = recovered_10005480((int)pbVar3,(int)local_94,(int)local_28);
  if (iVar2 == 0) {
    uVar9 = pbVar3[(int)local_28] - 9;
    pbVar5 = local_30;
    pbVar4 = local_20;
    if ((uVar9 < 0x20) && ((0x80800013U >> (uVar9 & 0x1f) & 1) != 0)) {
      local_2c = uVar9;
      pcVar6 = recovered_10001ed0((char *)(pbVar3 + (int)local_28),'{');
      local_20 = (byte *)0x0;
      uVar9 = local_2c;
      pbVar5 = local_30;
      pbVar4 = local_20;
      if (pcVar6 != (char *)0x0) {
        local_34 = (byte *)(pcVar6 + 1);
        local_28 = (byte *)0x1;
        pbVar3 = local_34;
LAB_10006b40:
        bVar11 = *pbVar3;
        if (bVar11 < 0x27) {
          if (bVar11 == 0x22) goto LAB_10006b75;
          pbVar5 = local_30;
          pbVar4 = local_20;
          if (bVar11 == 0) goto joined_r0x10006bc5;
        }
        else {
          if (bVar11 == 0x27) {
LAB_10006b75:
            pbVar3 = pbVar3 + 1;
LAB_10006b89:
            do {
              bVar8 = *pbVar3;
              if (bVar8 == 0x5c) {
                if (pbVar3[1] != 0) {
                  pbVar3 = pbVar3 + 2;
                  goto LAB_10006b89;
                }
              }
              else if (bVar8 == 0) break;
              pbVar3 = pbVar3 + 1;
            } while (bVar8 != bVar11);
            goto LAB_10006b40;
          }
          if (bVar11 == 0x7b) {
            local_28 = local_28 + 1;
          }
          else {
            if (bVar11 != 0x7d) goto LAB_10006b33;
            local_28 = local_28 + -1;
            pbVar5 = pbVar3;
            pbVar4 = local_34;
            if (local_28 == (byte *)0x0) goto joined_r0x10006bc5;
          }
        }
LAB_10006b33:
        pbVar3 = pbVar3 + 1;
        goto LAB_10006b40;
      }
    }
joined_r0x10006bc5:
    local_20 = pbVar4;
    local_30 = pbVar5;
    if ((uVar9 < 0x20) && ((0x80800013U >> (uVar9 & 0x1f) & 1) != 0)) goto LAB_10006bec;
  }
  param_1 = local_18 + 1;
  iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8e8U));
  if (iVar2 == 0) goto LAB_10006be5;
  goto LAB_10006a37;
LAB_100071e0:
  if (pbVar3 <= pbVar13) goto LAB_10007120;
  pcVar6 = recovered_10001ed0((char *)pbVar13,'(');
  if (pcVar6 != (char *)0x0) {
    pbVar3 = (byte *)recovered_10009370(pcVar6);
    if ((pbVar3 != (byte *)0x0) && (pbVar3 <= local_14)) {
      *param_5 = '\0';
      uVar9 = recovered_10008660(param_5,param_6,pcVar6 + 1,(char *)pbVar3,param_3,(char *)param_4);
      pbVar13 = pbVar3;
      if (((uVar9 & 0x10) != 0) && (pbVar3 = local_14, *param_5 != '\0')) goto LAB_1000726a;
    }
  }
  pbVar13 = pbVar13 + 1;
  pbVar3 = local_14;
  if (local_14 <= pbVar13) goto LAB_10007120;
  goto LAB_10007158;
}

#undef PTR_str_1000ade9_1000b000
#undef str_1000acbc
#undef str_1000accc
#undef str_1000aced
#undef str_1000ada4
#undef str_1000adad
#undef str_1000adc2
#undef str_1000add0
#undef str_1000ade0
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_19
#undef local_18
#undef local_14
#undef local_1094
#undef local_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007380
 */

void recovered_10007380(char *buffer,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((text != (char *)0x0 && (capacity != 0 && buffer != (char *)0x0)) && (*buffer == '\0')) {
    uVar1 = recovered_10001cc0((int)text);
    if (capacity <= uVar1) {
      uVar1 = capacity - 1;
    }
    if (uVar1 != 0) {
      recovered_100015c0((undefined4 *)buffer,(undefined4 *)text,uVar1);
    }
    buffer[uVar1] = '\0';
  }
  return;
}


#undef str_1000ad49
#define str_1000ad49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef str_1000af00
#define str_1000af00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa44U)))
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(byte * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f0
 */

uint recovered_100073f0(char *script,char *output,uint capacity)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *last;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte *first;

  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x88dU));
  if (iVar1 == 0 || script == (char *)0x0) {
    return 0;
  }
  local_1c = 0;
LAB_10007444:
  if (*script == 0) {
    return local_1c;
  }
  first = (byte *)script;
  do {
    first = first + 1;
    iVar3 = 0;
    while (bVar5 = script[iVar3], bVar5 != 0) {
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      bVar6 = str_1000ad49[iVar3];
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar5 != bVar6) break;
      iVar3 = iVar3 + 1;
      if (iVar1 == iVar3) goto LAB_100074b0;
    }
    if (iVar1 == iVar3) break;
    pbVar4 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar4 == 0) {
      return local_1c;
    }
  } while( true );
LAB_100074b0:
  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa44U));
  local_18 = (byte *)0x0;
  if ((iVar1 != 0) && (*script != 0)) {
    local_18 = (byte *)script;
    do {
      iVar3 = 0;
      while (bVar5 = local_18[iVar3], bVar5 != 0) {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        bVar6 = str_1000af00[iVar3];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar5 != bVar6) break;
        iVar3 = iVar3 + 1;
        if (iVar1 == iVar3) goto LAB_10007555;
      }
      if (iVar1 == iVar3) goto LAB_10007555;
      pbVar4 = local_18 + 1;
      local_18 = local_18 + 1;
    } while (*pbVar4 != 0);
    local_18 = (byte *)0x0;
  }
LAB_10007555:
  pbVar4 = (byte *)script;
  while( true ) {
    if (*pbVar4 == 0) {
      return local_1c;
    }
    if (*pbVar4 == 0x28) break;
    pbVar4 = pbVar4 + 1;
    first = first + 1;
  }
  while ((*first - 9 < 0x18 && ((0x800013U >> (*first - 9 & 0x1f) & 1) != 0))) {
    first = first + 1;
  }
  last = recovered_10009370((char *)pbVar4);
  if (last != (char *)0x0) {
    uVar2 = recovered_10009e00(output,capacity,(char *)first,last);
    if (uVar2 != 0) {
      local_1c = 1;
    }
    if (local_18 == (byte *)script) {
      local_1c = 1;
    }
    if (local_18 == (byte *)script && (capacity != 0 && output != (char *)0x0)) {
      iVar1 = recovered_10001cc0((int)output);
      local_1c = 1;
      if (iVar1 + 1U < capacity) {
        (output + iVar1)[0] = '\n';
        (output + iVar1)[1] = '\0';
      }
    }
    first = (byte *)(last + 1);
  }
  script = (char *)first;
  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x88dU));
  if (iVar1 == 0) {
    return local_1c;
  }
  goto LAB_10007444;
}

#undef str_1000ad49
#undef str_1000af00
#undef local_1c
#undef local_18

#undef PTR_str_1000af2c_1000b014
#define PTR_str_1000af2c_1000b014 (*(char * *)(((uintptr_t)pf_module_state + 0xb58U)))
#undef str_1000af16
#define str_1000af16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5aU)))
#undef str_1000af21
#define str_1000af21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa65U)))
#undef str_1000af44
#define str_1000af44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa88U)))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10007610(char *script,char *output,uint capacity)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;

  local_14 = 0;
  if (capacity != 0 && (output != (char *)0x0 && script != (char *)0x0)) {
    iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa5aU));
    if (iVar4 != 0) {
      local_14 = 0;
      pcVar5 = script;
LAB_10007687:
      if (*pcVar5 != '\0') {
        do {
          iVar10 = 0;
          while (bVar11 = pcVar5[iVar10], bVar11 != 0) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            bVar12 = str_1000af16[iVar10];
            if ((byte)(bVar12 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | 0x20;
            }
            if (bVar11 != bVar12) break;
            iVar10 = iVar10 + 1;
            if (iVar4 == iVar10) goto LAB_100076f0;
          }
          if (iVar4 == iVar10) goto LAB_100076f0;
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar6 == '\0') break;
        } while( true );
      }
      goto LAB_1000774d;
    }
    local_14 = 0;
LAB_1000774d:
    iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa65U));
    if (iVar4 != 0) {
      pcVar5 = script;
LAB_10007787:
      if (*pcVar5 != '\0') {
        do {
          iVar10 = 0;
          while (bVar11 = pcVar5[iVar10], bVar11 != 0) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            bVar12 = str_1000af21[iVar10];
            if ((byte)(bVar12 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | 0x20;
            }
            if (bVar11 != bVar12) break;
            iVar10 = iVar10 + 1;
            if (iVar4 == iVar10) goto LAB_100077f0;
          }
          if (iVar4 == iVar10) goto LAB_100077f0;
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar6 == '\0') break;
        } while( true );
      }
    }
LAB_10007846:
    iVar4 = 0;
    bVar3 = true;
    do {
      bVar2 = bVar3;
      puVar1 = (&PTR_str_1000af2c_1000b014)[iVar4];
      pcVar5 = script;
LAB_10007887:
      iVar4 = recovered_10001cc0((int)puVar1);
      if ((iVar4 != 0) && (*pcVar5 != '\0')) {
        do {
          iVar10 = 0;
          while (bVar11 = pcVar5[iVar10], bVar11 != 0) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            bVar12 = puVar1[iVar10];
            if ((byte)(bVar12 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | 0x20;
            }
            if (bVar11 != bVar12) break;
            iVar10 = iVar10 + 1;
            if (iVar4 == iVar10) goto LAB_10007900;
          }
          if (iVar4 == iVar10) goto LAB_10007900;
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar6 == '\0') break;
        } while( true );
      }
LAB_10007850:
      iVar4 = 1;
      bVar3 = false;
    } while (bVar2);
    iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa88U));
    if (iVar4 != 0) {
LAB_10007a6b:
      if (*script != '\0') {
        do {
          iVar10 = 0;
          while (bVar11 = script[iVar10], bVar11 != 0) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            bVar12 = str_1000af44[iVar10];
            if ((byte)(bVar12 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | 0x20;
            }
            if (bVar11 != bVar12) break;
            iVar10 = iVar10 + 1;
            if (iVar4 == iVar10) goto LAB_10007ae0;
          }
          if (iVar4 == iVar10) goto LAB_10007ae0;
          pcVar5 = script + 1;
          script = script + 1;
          if (*pcVar5 == '\0') {
            return local_14;
          }
        } while( true );
      }
    }
  }
  return local_14;
LAB_100076f0:
  pcVar5 = recovered_10001ed0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_1000774d;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000a1c0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar7 = recovered_10009e00(output,capacity,pcVar5,pcVar6);
    if (uVar7 != 0) {
      local_14 = 1;
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
  }
  iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa5aU));
  if (iVar4 == 0) goto LAB_1000774d;
  goto LAB_10007687;
LAB_100077f0:
  pcVar5 = recovered_10001ed0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_10007846;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000a1c0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar7 = recovered_10009e00(output,capacity,pcVar5,pcVar6);
    if (uVar7 != 0) {
      local_14 = 1;
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
  }
  iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa65U));
  if (iVar4 == 0) goto LAB_10007846;
  goto LAB_10007787;
LAB_10007900:
  pcVar5 = recovered_10001ed0(pcVar5,'=');
  if (pcVar5 == (char *)0x0) goto LAB_10007850;
  pcVar5 = pcVar5 + 1;
  pcVar6 = recovered_1000a1c0(pcVar5);
  if (pcVar6 != (char *)0x0) {
    uVar8 = recovered_10001cc0((int)output);
    uVar7 = uVar8 + 1;
    uVar9 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar8)[0] = '<';
      (output + uVar8)[1] = '\0';
      uVar9 = uVar8 + 2;
      uVar8 = uVar7;
    }
    if (uVar9 < capacity) {
      output[uVar8] = 'p';
      output[uVar9] = '\0';
      uVar7 = uVar9 + 1;
    }
    else {
      uVar7 = uVar9;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '>';
      output[uVar7] = '\0';
    }
    recovered_1000a2c0(output,capacity,pcVar5,pcVar6);
    uVar9 = recovered_10001cc0((int)output);
    uVar7 = uVar9 + 1;
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar9)[0] = '<';
      (output + uVar9)[1] = '\0';
      uVar8 = uVar9 + 2;
      uVar9 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = '/';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    else {
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'p';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = '>';
      output[uVar8] = '\0';
    }
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar6 + 1;
    }
    local_14 = 1;
  }
  goto LAB_10007887;
LAB_10007ae0:
  pcVar5 = recovered_10001ed0(script,'=');
  if (pcVar5 == (char *)0x0) {
    return local_14;
  }
  script = pcVar5 + 1;
  pcVar5 = recovered_1000a1c0(script);
  if (pcVar5 != (char *)0x0) {
    uVar9 = recovered_10001cc0((int)output);
    uVar7 = uVar9 + 1;
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      (output + uVar9)[0] = '<';
      (output + uVar9)[1] = '\0';
      uVar8 = uVar9 + 2;
      uVar9 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      output[uVar9] = 'i';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      output[uVar9] = 'l';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 'e';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '>';
      output[uVar7] = '\0';
    }
    recovered_1000a2c0(output,capacity,script,pcVar5);
    uVar9 = recovered_10001cc0((int)output);
    uVar7 = uVar9 + 1;
    if (uVar7 < capacity) {
      (output + uVar9)[0] = '<';
      (output + uVar9)[1] = '\0';
      uVar8 = uVar9 + 2;
      uVar9 = uVar7;
      uVar7 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = '/';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    else {
      uVar8 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 't';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    if (uVar7 < capacity) {
      output[uVar9] = 'i';
      output[uVar7] = '\0';
      uVar9 = uVar7;
      uVar7 = uVar7 + 1;
    }
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      output[uVar9] = 't';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    uVar7 = uVar8;
    if (uVar8 < capacity) {
      output[uVar9] = 'l';
      output[uVar8] = '\0';
      uVar7 = uVar8 + 1;
      uVar9 = uVar8;
    }
    uVar8 = uVar7;
    if (uVar7 < capacity) {
      output[uVar9] = 'e';
      output[uVar7] = '\0';
      uVar8 = uVar7 + 1;
      uVar9 = uVar7;
    }
    if (uVar8 < capacity) {
      output[uVar9] = '>';
      output[uVar8] = '\0';
    }
    if (*pcVar5 != '\0') {
      script = pcVar5 + 1;
    }
    local_14 = 1;
  }
  iVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa88U));
  if (iVar4 == 0) {
    return local_14;
  }
  goto LAB_10007a6b;
}

#undef PTR_str_1000af2c_1000b014
#undef str_1000af16
#undef str_1000af21
#undef str_1000af44
#undef local_14

#undef str_1000af53
#define str_1000af53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa97U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ce0
 */

uint recovered_10007ce0(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  byte *last;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;

  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa97U));
  if (iVar1 == 0 || script == (char *)0x0) {
    return 0;
  }
  uVar8 = 0;
LAB_10007d33:
  if (*script == 0) {
    return uVar8;
  }
  do {
    iVar4 = 0;
    while (bVar5 = script[iVar4], bVar5 != 0) {
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      bVar6 = str_1000af53[iVar4];
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar5 != bVar6) break;
      iVar4 = iVar4 + 1;
      if (iVar1 == iVar4) goto LAB_10007da0;
    }
    if (iVar1 == iVar4) break;
    pbVar2 = (byte *)(script + 1);
    script = script + 1;
    if (*pbVar2 == 0) {
      return uVar8;
    }
  } while( true );
LAB_10007da0:
  pbVar2 = (byte *)recovered_10001ed0(script,'(');
  if (pbVar2 == (byte *)0x0) {
    return uVar8;
  }
  last = (byte *)recovered_10009370((char *)pbVar2);
  if (last != (byte *)0x0) {
    pbVar7 = pbVar2 + 1;
joined_r0x10007dce:
    pbVar2 = last;
    if (pbVar7 < last) {
      bVar5 = *pbVar7;
      if (bVar5 < 0x2c) {
        if ((bVar5 == 0x22) || (bVar5 == 0x27)) goto LAB_10007e05;
LAB_10007ddb:
        pbVar7 = pbVar7 + 1;
      }
      else {
        if (bVar5 != 0x60) {
          if (bVar5 != 0x2c) goto LAB_10007ddb;
          uVar3 = recovered_10009e00(output,capacity,(char *)(pbVar7 + 1),(char *)last);
          if (uVar3 != 0) {
            uVar8 = 1;
          }
          goto LAB_10007d22;
        }
LAB_10007e05:
        pbVar2 = pbVar7 + 1;
        if (last <= pbVar7 + 1) goto LAB_10007ddb;
        do {
          pbVar7 = pbVar2 + 1;
          if ((*pbVar2 == 0x5c) && (pbVar7 < last)) {
            pbVar7 = pbVar2 + 2;
          }
          else if (*pbVar2 == bVar5) break;
          pbVar2 = pbVar7;
        } while (pbVar7 < last);
      }
      goto joined_r0x10007dce;
    }
  }
LAB_10007d22:
  script = (char *)(pbVar2 + 1);
  iVar1 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa97U));
  if (iVar1 == 0) {
    return uVar8;
  }
  goto LAB_10007d33;
}

#undef str_1000af53

#undef str_1000ad8b
#define str_1000ad8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cfU)))
#undef str_1000ad97
#define str_1000ad97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dbU)))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e60
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10007e60(char *script,char *output,uint capacity)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  char *pcVar9;
  byte bVar10;
  char *pcVar11;
  bool bVar12;

  local_18 = 0;
  if (script != (char *)0x0) {
    if (*script != '\0') {
      local_18 = 0;
      do {
        iVar3 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8cfU));
        pcVar11 = (char *)0x0;
        if ((iVar3 != 0) && (*script != '\0')) {
          pcVar11 = script;
          do {
            iVar7 = 0;
            while (bVar8 = pcVar11[iVar7], bVar8 != 0) {
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar10 = str_1000ad8b[iVar7];
              if ((byte)(bVar10 + 0xbf) < 0x1a) {
                bVar10 = bVar10 | 0x20;
              }
              if (bVar8 != bVar10) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_10007f20;
            }
            if (iVar3 == iVar7) goto LAB_10007f20;
            pcVar5 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar5 != '\0');
          pcVar11 = (char *)0x0;
        }
LAB_10007f20:
        iVar3 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8dbU));
        pcVar5 = (char *)0x0;
        if ((iVar3 == 0) || (*script == '\0')) {
joined_r0x10007fa4:
          if (pcVar11 != (char *)0x0) goto LAB_10007fa6;
LAB_10007fc0:
          if (pcVar5 == (char *)0x0) {
            return local_18;
          }
        }
        else {
          do {
            iVar7 = 0;
            while( true ) {
              bVar8 = script[iVar7];
              pcVar5 = script;
              if (bVar8 == 0) break;
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar10 = str_1000ad97[iVar7];
              if ((byte)(bVar10 + 0xbf) < 0x1a) {
                bVar10 = bVar10 | 0x20;
              }
              if (bVar8 != bVar10) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto joined_r0x10007fa4;
            }
            if (iVar3 == iVar7) goto joined_r0x10007fa4;
            pcVar5 = script + 1;
            script = script + 1;
          } while (*pcVar5 != '\0');
          pcVar5 = (char *)0x0;
          if (pcVar11 == (char *)0x0) goto LAB_10007fc0;
LAB_10007fa6:
          pcVar4 = pcVar5;
          if (pcVar11 <= pcVar5) {
            pcVar4 = pcVar11;
          }
          bVar12 = pcVar5 == (char *)0x0;
          pcVar5 = pcVar4;
          if (bVar12) {
            pcVar5 = pcVar11;
          }
        }
        pcVar11 = recovered_10001ed0(pcVar5,'(');
        if (pcVar11 == (char *)0x0) {
          return local_18;
        }
        pcVar5 = recovered_10009370(pcVar11);
        if (pcVar5 != (char *)0x0) {
          bVar12 = false;
LAB_10008000:
          do {
            pcVar4 = pcVar11 + 1;
            if (pcVar5 <= pcVar4) break;
            iVar3 = 1;
            pcVar9 = pcVar4;
            do {
              cVar1 = *pcVar9;
              if ((cVar1 == '\"') || (cVar1 == '\'')) {
                iVar3 = iVar3 + 1;
                do {
                  while( true ) {
                    if (pcVar5 <= pcVar11 + iVar3) goto LAB_10008026;
                    pcVar9 = pcVar11 + iVar3;
                    if ((*pcVar9 != '\\') || (pcVar5 <= pcVar11 + iVar3 + 1)) break;
                    iVar3 = iVar3 + 2;
                  }
                  iVar3 = iVar3 + 1;
                } while (*pcVar9 != cVar1);
              }
              else {
                if (cVar1 == ',') {
                  bVar2 = true;
                  goto LAB_10008092;
                }
                iVar3 = iVar3 + 1;
              }
LAB_10008026:
              pcVar9 = pcVar11 + iVar3;
            } while (pcVar9 < pcVar5);
            bVar2 = false;
LAB_10008092:
            pcVar11 = pcVar9;
            if (1 < iVar3) {
              if ((bVar12 && (output != (char *)0x0 && capacity != 0)) &&
                 (iVar3 = recovered_10001cc0((int)output), iVar3 + 1U < capacity)) {
                (output + iVar3)[0] = ' ';
                (output + iVar3)[1] = '\0';
              }
              uVar6 = recovered_10009e00(output,capacity,pcVar4,pcVar9);
              if (uVar6 != 0) {
                bVar12 = true;
              }
              if (!bVar2) break;
              goto LAB_10008000;
            }
          } while (bVar2);
          if (bVar12) {
            local_18 = 1;
          }
          pcVar11 = pcVar5;
          if (bVar12 && (output != (char *)0x0 && capacity != 0)) {
            iVar3 = recovered_10001cc0((int)output);
            local_18 = 1;
            if (iVar3 + 1U < capacity) {
              (output + iVar3)[0] = '\n';
              (output + iVar3)[1] = '\0';
            }
          }
        }
        script = pcVar11 + 1;
      } while (pcVar11[1] != '\0');
    }
  }
  return local_18;
}

#undef str_1000ad8b
#undef str_1000ad97
#undef local_18

#undef DAT_1000ad09
#define DAT_1000ad09 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84dU)))
#undef str_1000acbc
#define str_1000acbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x800U)))
#undef str_1000accc
#define str_1000accc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x810U)))
#undef str_1000aced
#define str_1000aced (*(char (*)[1])(((uintptr_t)pf_module_state + 0x831U)))
#undef str_1000ad10
#define str_1000ad10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x854U)))
#undef str_1000ad3f
#define str_1000ad3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x883U)))
#undef str_1000ad49
#define str_1000ad49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef str_1000ad58
#define str_1000ad58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89cU)))
#undef str_1000ad62
#define str_1000ad62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_1000ad6e
#define str_1000ad6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b2U)))
#undef str_1000ad78
#define str_1000ad78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bcU)))
#undef str_1000ad8b
#define str_1000ad8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cfU)))
#undef str_1000ad97
#define str_1000ad97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dbU)))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008150
 */

uint recovered_10008150(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;

  bVar11 = status != (char *)0x0;
  bVar12 = status_capacity != 0;
  if (bVar12 && bVar11) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    if ((flags & 1) != 0) {
      uVar2 = recovered_100073f0(script,output,capacity);
      uVar3 = recovered_10007610(script,output,capacity);
      uVar4 = recovered_10007ce0(script,output,capacity);
      uVar5 = recovered_10007e60(script,output,capacity);
      local_14 = uVar5 | uVar4 | uVar3 | uVar2;
    }
    iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x84dU));
    if ((iVar6 != 0) && (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = (&DAT_1000ad09)[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_10008256;
        }
        if (iVar6 == iVar9) {
LAB_10008256:
          local_14 = local_14 | 2;
          if ((bVar12 && bVar11) && (*status == '\0')) {
            uVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x854U));
            if (status_capacity <= uVar2) {
              uVar2 = status_capacity - 1;
            }
            if (uVar2 != 0) {
              recovered_100015c0((undefined4 *)status,(undefined4 *)str_1000ad10,uVar2);
            }
            status[uVar2] = '\0';
          }
          break;
        }
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    if ((((flags & 2) != 0) && (iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x800U)), iVar6 != 0)) &&
       (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = str_1000acbc[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_100082ef;
        }
        if (iVar6 == iVar9) {
LAB_100082ef:
          local_14 = local_14 | 4;
          if ((bVar12 && bVar11) && (*status == '\0')) {
            uVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x810U));
            if (status_capacity <= uVar2) {
              uVar2 = status_capacity - 1;
            }
            if (uVar2 != 0) {
              recovered_100015c0((undefined4 *)status,(undefined4 *)str_1000accc,uVar2);
            }
            status[uVar2] = '\0';
          }
          break;
        }
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x883U));
    if ((iVar6 != 0) && (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = str_1000ad3f[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_1000852b;
        }
        if (iVar6 == iVar9) goto LAB_1000852b;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x88dU));
    if ((iVar6 != 0) && (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = str_1000ad49[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_1000852b;
        }
        if (iVar6 == iVar9) goto LAB_1000852b;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x89cU));
    if ((iVar6 != 0) && (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = str_1000ad58[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_1000852b;
        }
        if (iVar6 == iVar9) goto LAB_1000852b;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    iVar6 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x8a6U));
    if ((iVar6 != 0) && (*script != '\0')) {
      pcVar7 = script;
      do {
        iVar9 = 0;
        while (bVar10 = pcVar7[iVar9], bVar10 != 0) {
          if ((byte)(bVar10 + 0xbf) < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          bVar8 = str_1000ad62[iVar9];
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar10 != bVar8) break;
          iVar9 = iVar9 + 1;
          if (iVar6 == iVar9) goto LAB_1000852b;
        }
        if (iVar6 == iVar9) goto LAB_1000852b;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar7 = recovered_100085e0(script,str_1000ad6e);
    if (((((pcVar7 == (char *)0x0) &&
          (pcVar7 = recovered_100085e0(script,str_1000ad78), pcVar7 == (char *)0x0)) &&
         (pcVar7 = recovered_100085e0(script,str_1000ad8b), pcVar7 == (char *)0x0)) &&
        ((pcVar7 = recovered_100085e0(script,str_1000ad97), pcVar7 == (char *)0x0 &&
         (pcVar7 = recovered_100085e0(script,&DAT_1000ad09), pcVar7 == (char *)0x0)))) &&
       ((pcVar7 = recovered_100085e0(script,str_1000acbc), pcVar7 == (char *)0x0 &&
        (*script != '\0')))) {
      local_14 = local_14 | 8;
      recovered_10007380(status,status_capacity,str_1000aced);
    }
  }
LAB_1000852b:
  return local_14;
}

#undef DAT_1000ad09
#undef str_1000acbc
#undef str_1000accc
#undef str_1000aced
#undef str_1000ad10
#undef str_1000ad3f
#undef str_1000ad49
#undef str_1000ad58
#undef str_1000ad62
#undef str_1000ad6e
#undef str_1000ad78
#undef str_1000ad8b
#undef str_1000ad97
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085e0
 */

char * recovered_100085e0(char *text,char *pattern)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;

  if ((pattern != (char *)0x0) &&
     (iVar3 = recovered_10001cc0((int)pattern), iVar3 != 0 && text != (char *)0x0)) {
    cVar2 = *text;
    while (cVar2 != '\0') {
      iVar4 = 0;
      while (bVar5 = text[iVar4], bVar5 != 0) {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        bVar6 = pattern[iVar4];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar5 != bVar6) break;
        iVar4 = iVar4 + 1;
        if (iVar3 == iVar4) {
          return text;
        }
      }
      if (iVar3 == iVar4) {
        return text;
      }
      pcVar1 = text + 1;
      text = text + 1;
      cVar2 = *pcVar1;
    }
  }
  return (char *)0x0;
}


#undef DAT_1000abb0
#define DAT_1000abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef str_1000ae45
#define str_1000ae45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x989U)))
#undef str_1000ae58
#define str_1000ae58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99cU)))
#undef str_1000ae62
#define str_1000ae62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a6U)))
#undef str_1000ae7a
#define str_1000ae7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9beU)))
#undef str_1000ae8f
#define str_1000ae8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d3U)))
#undef str_1000ae96
#define str_1000ae96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9daU)))
#undef str_1000aead
#define str_1000aead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f1U)))
#undef str_1000aeb8
#define str_1000aeb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fcU)))
#define local_22c (*(char (*)[512])(frame + 20))
#define local_2c (*(char * *)(frame + 532))
#define local_28 (*(char * *)(frame + 536))
#define local_24 (*(char * *)(frame + 540))
#define local_20 (*(char * *)(frame + 544))
#define local_1c (*(byte * *)(frame + 548))
#define local_18 (*(uint *)(frame + 552))
#define local_14 (*(byte * *)(frame + 556))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008660
 */

uint recovered_10008660(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *last_00;
  char *pcVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;

  if (last <= first || first == (char *)0x0) {
    return 0x10;
  }
  local_2c = &DAT_1000abb0;
  if (html != (char *)0x0) {
    local_2c = html;
  }
  local_28 = local_2c + 1;
  local_20 = output;
  do {
    bVar9 = *first;
    switch((uintptr_t)(bVar9)) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2b:
      first = first + 1;
      goto joined_r0x10008bd9;
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
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
      goto switchD_100086ae_caseD_b;
    case 0x22:
    case 0x27:
      pbVar11 = (byte *)(first + 1);
      local_14 = (byte *)0x0;
      if (pbVar11 < last) {
        pbVar5 = pbVar11;
        do {
          pbVar6 = pbVar5 + 1;
          if (pbVar6 < last && *pbVar5 == 0x5c) {
            pbVar6 = pbVar5 + 2;
          }
          else if (*pbVar5 == bVar9) {
            local_14 = (byte *)0x1;
            pbVar6 = pbVar5;
            break;
          }
          pbVar5 = pbVar6;
        } while (pbVar6 < last);
        local_18 = capacity;
      }
      else {
        pbVar6 = pbVar11;
      }
      recovered_10008fb0(local_20,capacity,(char *)pbVar11,(char *)pbVar6);
      pbVar11 = local_14;
LAB_10008bca:
      first = (char *)(pbVar11 + (int)pbVar6);
      goto LAB_10008bcc;
    }
    if (bVar9 == 0x60) {
      local_18 = capacity;
LAB_10008726:
      capacity = local_18;
      local_14 = (byte *)(first + 1);
      pbVar11 = (byte *)0x0;
      pbVar6 = local_14;
      if (local_14 < last) {
        pbVar5 = local_14;
        do {
          bVar9 = *pbVar5;
          pbVar6 = pbVar5 + 1;
          if (pbVar6 < last && bVar9 == 0x5c) {
            pbVar6 = pbVar5 + 2;
          }
          else if (bVar9 == 0x24) {
            if ((pbVar6 < last) && (*pbVar6 == 0x7b)) goto code_r0x1000878a;
          }
          else if (bVar9 == 0x60) {
            pbVar11 = (byte *)0x1;
            pbVar6 = pbVar5;
            break;
          }
          pbVar5 = pbVar6;
          if (last <= pbVar6) break;
        } while( true );
      }
      recovered_10008fb0(local_20,local_18,(char *)local_14,(char *)pbVar6);
      goto LAB_10008bca;
    }
switchD_100086ae_caseD_b:
    local_18 = capacity;
    iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x989U));
    pbVar6 = (byte *)0x0;
    if ((iVar2 != 0) && (*first != 0)) {
      pbVar6 = (byte *)first;
      do {
        iVar8 = 0;
        while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
          if ((byte)(bVar9 + 0xbf) < 0x1a) {
            bVar9 = bVar9 | 0x20;
          }
          bVar4 = str_1000ae45[iVar8];
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar9 != bVar4) break;
          iVar8 = iVar8 + 1;
          if (iVar2 == iVar8) goto LAB_10008915;
        }
        if (iVar2 == iVar8) goto LAB_10008915;
        pbVar11 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar11 != 0);
      pbVar6 = (byte *)0x0;
    }
LAB_10008915:
    if ((byte *)first == pbVar6) {
LAB_10008a0b:
      pcVar3 = recovered_10001ed0(first,'(');
      if (pcVar3 == (char *)0x0) {
        return 8;
      }
      last_00 = recovered_10009370(pcVar3);
      capacity = local_18;
      if (last_00 == (char *)0x0) {
        return 8;
      }
      if (last < last_00) {
        return 8;
      }
      uVar1 = recovered_100093f0(local_20,local_18,pcVar3 + 1,last_00,url,html,1);
      if ((uVar1 & 8) != 0) {
        return uVar1;
      }
      first = last_00 + 1;
    }
    else {
      iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x99cU));
      pbVar6 = (byte *)0x0;
      if ((iVar2 != 0) && (*first != 0)) {
        pbVar6 = (byte *)first;
        do {
          iVar8 = 0;
          while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar9 = bVar9 | 0x20;
            }
            bVar4 = str_1000ae58[iVar8];
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar9 != bVar4) break;
            iVar8 = iVar8 + 1;
            if (iVar2 == iVar8) goto LAB_1000898b;
          }
          if (iVar2 == iVar8) goto LAB_1000898b;
          pbVar11 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar11 != 0);
        pbVar6 = (byte *)0x0;
      }
LAB_1000898b:
      if ((byte *)first == pbVar6) goto LAB_10008a0b;
      iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9a6U));
      pbVar6 = (byte *)0x0;
      if ((iVar2 != 0) && (*first != 0)) {
        pbVar6 = (byte *)first;
        do {
          iVar8 = 0;
          while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar9 = bVar9 | 0x20;
            }
            bVar4 = str_1000ae62[iVar8];
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar9 != bVar4) break;
            iVar8 = iVar8 + 1;
            if (iVar2 == iVar8) goto LAB_10008a7a;
          }
          if (iVar2 == iVar8) goto LAB_10008a7a;
          pbVar11 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar11 != 0);
        pbVar6 = (byte *)0x0;
      }
LAB_10008a7a:
      if ((byte *)first == pbVar6) {
        pcVar3 = recovered_10001ed0(first,'(');
        if (pcVar3 == (char *)0x0) {
          return 8;
        }
        local_24 = recovered_10009370(pcVar3);
        if (local_24 == (char *)0x0) {
          return 8;
        }
        if (last < local_24) {
          return 8;
        }
        iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9beU));
        pbVar6 = (byte *)0x0;
        if ((iVar2 != 0) && (*first != 0)) {
          pbVar6 = (byte *)first;
          do {
            iVar8 = 0;
            while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar9 = bVar9 | 0x20;
              }
              bVar4 = str_1000ae7a[iVar8];
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if (bVar9 != bVar4) break;
              iVar8 = iVar8 + 1;
              if (iVar2 == iVar8) goto LAB_10008be7;
            }
            if (iVar2 == iVar8) goto LAB_10008be7;
            pbVar11 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar11 != 0);
          pbVar6 = (byte *)0x0;
        }
LAB_10008be7:
        local_1c = (byte *)(local_24 + 1);
        if ((((byte *)first != pbVar6) && (iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9beU)), iVar2 != 0)) &&
           (*local_1c != 0)) {
          pbVar6 = (byte *)0x1;
          pcVar3 = local_24;
LAB_10008c25:
          local_14 = pbVar6;
          pcVar3 = pcVar3 + 1;
          iVar8 = 0;
          while (bVar9 = pcVar3[iVar8], bVar9 != 0) {
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar9 = bVar9 | 0x20;
            }
            bVar4 = str_1000ae7a[iVar8];
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar9 != bVar4) break;
            iVar8 = iVar8 + 1;
            if (iVar2 == iVar8) goto LAB_10008e1a;
          }
          if (iVar2 != iVar8) goto code_r0x10008c69;
LAB_10008e1a:
          if (local_14 == (byte *)0x1) {
            local_22c[0] = '\0';
            uVar1 = recovered_10001cc0((int)local_22c);
            cVar7 = *local_2c;
            if (cVar7 != '\0') {
              pcVar3 = local_28;
              do {
                if (uVar1 + 1 < 0x200) {
                  if ((byte)(cVar7 + 0x9fU) < 0x1a) {
                    cVar7 = cVar7 + -0x20;
                  }
                  local_22c[uVar1] = cVar7;
                  local_22c[uVar1 + 1] = '\0';
                  uVar1 = uVar1 + 1;
                }
                cVar7 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar7 != '\0');
            }
            uVar1 = local_18;
            pbVar6 = (byte *)recovered_100093f0(local_20,local_18,first,last,url,local_22c,0);
            iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9beU));
            goto LAB_10008f83;
          }
        }
LAB_10008e86:
        capacity = local_18;
        local_14 = (byte *)recovered_100093f0(local_20,local_18,first,last,url,html,0);
        iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9d3U));
        uVar1 = local_18;
        pbVar6 = local_14;
        first = (char *)local_1c;
        if (iVar2 == 0) {
LAB_10008f45:
        }
        else if (*local_1c != 0) {
          iVar8 = 1;
          pcVar3 = local_24;
LAB_10008ed3:
          pcVar3 = pcVar3 + 1;
          iVar10 = 0;
          while( true ) {
            bVar9 = pcVar3[iVar10];
            capacity = local_18;
            if (bVar9 == 0) break;
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar9 = bVar9 | 0x20;
            }
            bVar4 = str_1000ae8f[iVar10];
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar9 != bVar4) break;
            iVar10 = iVar10 + 1;
            if (iVar2 == iVar10) goto LAB_10008f2b;
          }
          if (iVar2 != iVar10) goto code_r0x10008f10;
LAB_10008f2b:
          if (iVar8 == 1) {
            iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9d3U));
            pbVar6 = local_14;
LAB_10008f83:
            capacity = uVar1;
            first = (char *)(local_1c + iVar2);
            goto LAB_10008f8b;
          }
          goto LAB_10008f45;
        }
LAB_10008f8b:
        if (((uint)pbVar6 & 8) != 0) {
          return (uint)pbVar6;
        }
      }
      else {
        iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9daU));
        pbVar6 = (byte *)0x0;
        if ((iVar2 != 0) && (*first != 0)) {
          pbVar6 = (byte *)first;
          do {
            iVar8 = 0;
            while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar9 = bVar9 | 0x20;
              }
              bVar4 = str_1000ae96[iVar8];
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if (bVar9 != bVar4) break;
              iVar8 = iVar8 + 1;
              if (iVar2 == iVar8) goto LAB_10008c85;
            }
            if (iVar2 == iVar8) goto LAB_10008c85;
            pbVar11 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar11 != 0);
          pbVar6 = (byte *)0x0;
        }
LAB_10008c85:
        if ((byte *)first == pbVar6) {
LAB_10008dc4:
          capacity = local_18;
          uVar1 = recovered_100093f0(local_20,local_18,first,last,url,html,0);
          if ((uVar1 & 8) != 0) {
            return uVar1;
          }
          if (last <= first) goto LAB_10008bcc;
          do {
            if (((byte)*first - 0x2b < 0x11) &&
               ((0x10003U >> ((byte)*first - 0x2b & 0x1f) & 1) != 0)) goto LAB_10008bcc;
            first = first + 1;
          } while (first < last);
        }
        else {
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9f1U));
          pbVar6 = (byte *)0x0;
          if ((iVar2 != 0) && (*first != 0)) {
            pbVar6 = (byte *)first;
            do {
              iVar8 = 0;
              while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
                if ((byte)(bVar9 + 0xbf) < 0x1a) {
                  bVar9 = bVar9 | 0x20;
                }
                bVar4 = str_1000aead[iVar8];
                if ((byte)(bVar4 + 0xbf) < 0x1a) {
                  bVar4 = bVar4 | 0x20;
                }
                if (bVar9 != bVar4) break;
                iVar8 = iVar8 + 1;
                if (iVar2 == iVar8) goto LAB_10008cfb;
              }
              if (iVar2 == iVar8) goto LAB_10008cfb;
              pbVar11 = pbVar6 + 1;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar11 != 0);
            pbVar6 = (byte *)0x0;
          }
LAB_10008cfb:
          if ((byte *)first == pbVar6) goto LAB_10008dc4;
          iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9fcU));
          capacity = local_18;
          pbVar6 = (byte *)0x0;
          if ((iVar2 != 0) && (*first != 0)) {
            pbVar6 = (byte *)first;
            do {
              iVar8 = 0;
              while (bVar9 = pbVar6[iVar8], bVar9 != 0) {
                if ((byte)(bVar9 + 0xbf) < 0x1a) {
                  bVar9 = bVar9 | 0x20;
                }
                bVar4 = str_1000aeb8[iVar8];
                if ((byte)(bVar4 + 0xbf) < 0x1a) {
                  bVar4 = bVar4 | 0x20;
                }
                if (bVar9 != bVar4) break;
                iVar8 = iVar8 + 1;
                if (iVar2 == iVar8) goto LAB_10008d6d;
              }
              if (iVar2 == iVar8) goto LAB_10008d6d;
              pbVar11 = pbVar6 + 1;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar11 != 0);
            pbVar6 = (byte *)0x0;
          }
LAB_10008d6d:
          if ((byte *)first == pbVar6) goto LAB_10008dc4;
          uVar1 = recovered_10009980(local_20,local_18,first,last,url,html,0);
          if ((uVar1 & 8) != 0) {
            return 8;
          }
          if (last <= first) goto LAB_10008bcc;
          do {
            if (((byte)*first - 0x2b < 0x11) &&
               ((0x10003U >> ((byte)*first - 0x2b & 0x1f) & 1) != 0)) goto LAB_10008bcc;
            first = first + 1;
          } while (first < last);
        }
        first = last;
      }
    }
LAB_10008bcc:
    if ((byte *)first == (byte *)0x0) {
      return 0x10;
    }
joined_r0x10008bd9:
    if (last <= first) {
      return 0x10;
    }
  } while( true );
code_r0x1000878a:
  local_1c = pbVar5 + 2;
  if (last <= local_1c) {
    return 8;
  }
  local_24 = (char *)0x1;
  first = (char *)local_1c;
LAB_100087b6:
  bVar9 = *first;
  if (bVar9 < 0x60) {
    if ((bVar9 == 0x22) || (bVar9 == 0x27)) goto LAB_100087d2;
  }
  else {
    if (bVar9 == 0x60) {
LAB_100087d2:
      first = first + 1;
      if (first < last) {
        pbVar6 = (byte *)first;
        do {
          first = (char *)(pbVar6 + 1);
          if (first < last && *pbVar6 == 0x5c) {
            first = (char *)(pbVar6 + 2);
          }
          else if (*pbVar6 == bVar9) break;
          pbVar6 = (byte *)first;
        } while (first < last);
      }
      goto joined_r0x100087b0;
    }
    if (bVar9 == 0x7b) {
      local_24 = local_24 + 1;
      goto LAB_10008822;
    }
    if ((bVar9 == 0x7d) && (local_24 = local_24 + -1, local_24 == (char *)0x0)) goto LAB_1000882d;
  }
LAB_10008822:
  first = first + 1;
joined_r0x100087b0:
  if (last <= first) {
    return 8;
  }
  goto LAB_100087b6;
LAB_1000882d:
  recovered_10008fb0(local_20,local_18,(char *)local_14,(char *)pbVar5);
  uVar1 = recovered_10008660(local_20,capacity,(char *)local_1c,first,url,html);
  if ((uVar1 & 8) != 0) {
    return uVar1;
  }
  goto LAB_10008726;
code_r0x10008c69:
  pbVar6 = local_14 + 1;
  if ((local_24 + 1)[(int)local_14] == '\0') goto LAB_10008e86;
  goto LAB_10008c25;
code_r0x10008f10:
  iVar10 = iVar8 + 1;
  iVar8 = iVar8 + 1;
  if (local_24[iVar10] == '\0') goto LAB_10008f8b;
  goto LAB_10008ed3;
}

#undef DAT_1000abb0
#undef str_1000ae45
#undef str_1000ae58
#undef str_1000ae62
#undef str_1000ae7a
#undef str_1000ae8f
#undef str_1000ae96
#undef str_1000aead
#undef str_1000aeb8
#undef local_22c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_20 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fb0
 */

uint recovered_10008fb0(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;

  uVar6 = 0;
  if (((((output != (char *)0x0) && (capacity != 0)) && (first <= last)) &&
      ((first != (char *)0x0 && (last != (char *)0x0)))) &&
     (uVar3 = recovered_10001cc0((int)output), first < last)) {
    uVar6 = 0;
    do {
      if ((*first == '\\') && (pcVar5 = first + 1, pcVar5 < last)) {
        switch((uintptr_t)(*pcVar5)) {
        case '\"':
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = '\"';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        default:
          uVar6 = 1;
          if (uVar3 + 1 < capacity) {
            output[uVar3] = *pcVar5;
            output[uVar3 + 1] = '\0';
            uVar4 = uVar3 + 1;
            goto LAB_1000901d;
          }
          break;
        case '\'':
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = '\'';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        case '\\':
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = '\\';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        case 'b':
        case 'f':
        case 'v':
          uVar6 = 1;
          break;
        case 'n':
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = '\n';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        case 'r':
          break;
        case 't':
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = ' ';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        case 'u':
          pcVar1 = first + 5;
          if (pcVar1 < last) {
            cVar2 = first[2];
            iVar7 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar7 = iVar7 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar7 = iVar7 + -0x57;
            }
            else {
              if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_10009335;
              iVar7 = iVar7 + -0x37;
            }
            if (-1 < iVar7) {
              cVar2 = first[3];
              iVar9 = (int)cVar2;
              if ((byte)(cVar2 - 0x30U) < 10) {
                iVar9 = iVar9 + -0x30;
              }
              else if ((byte)(cVar2 + 0x9fU) < 6) {
                iVar9 = iVar9 + -0x57;
              }
              else {
                if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_10009335;
                iVar9 = iVar9 + -0x37;
              }
              if (-1 < iVar9) {
                cVar2 = first[4];
                iVar8 = (int)cVar2;
                if ((byte)(cVar2 - 0x30U) < 10) {
                  uVar6 = iVar8 - 0x30;
                }
                else if ((byte)(cVar2 + 0x9fU) < 6) {
                  uVar6 = iVar8 - 0x57;
                }
                else {
                  if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_10009335;
                  uVar6 = iVar8 - 0x37;
                }
                if (-1 < (int)uVar6) {
                  cVar2 = *pcVar1;
                  iVar8 = (int)cVar2;
                  if ((byte)(cVar2 - 0x30U) < 10) {
                    local_20 = iVar8 - 0x30;
                  }
                  else if ((byte)(cVar2 + 0x9fU) < 6) {
                    local_20 = iVar8 - 0x57;
                  }
                  else {
                    if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_10009335;
                    local_20 = iVar8 - 0x37;
                  }
                  if (-1 < (int)local_20) {
                    pcVar5 = pcVar1;
                    if (capacity <= uVar3 + 1) goto LAB_10009356;
                    local_20 = local_20 | (uVar6 | iVar9 << 4 | iVar7 << 8) << 4;
                    if (0x5e < local_20 - 0x20) {
                      local_20 = 0x20;
                    }
                    bVar10 = (byte)local_20;
                    goto LAB_10009281;
                  }
                }
              }
            }
          }
LAB_10009335:
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = 'u';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
          break;
        case 'x':
          pcVar1 = first + 3;
          if (pcVar1 < last) {
            cVar2 = first[2];
            iVar7 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar7 = iVar7 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar7 = iVar7 + -0x57;
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              iVar7 = iVar7 + -0x37;
            }
            else {
              iVar7 = -1;
            }
            cVar2 = *pcVar1;
            iVar9 = (int)cVar2;
            if ((byte)(cVar2 - 0x30U) < 10) {
              iVar9 = iVar9 + -0x30;
            }
            else if ((byte)(cVar2 + 0x9fU) < 6) {
              iVar9 = iVar9 + -0x57;
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              iVar9 = iVar9 + -0x37;
            }
            else {
              iVar9 = -1;
            }
            if ((-1 < iVar7) && (-1 < iVar9)) {
              pcVar5 = pcVar1;
              if (uVar3 + 1 < capacity) {
                bVar10 = (byte)iVar9 | (byte)(iVar7 << 4);
LAB_10009281:
                uVar6 = 1;
                output[uVar3] = bVar10;
                output[uVar3 + 1] = '\0';
                uVar4 = uVar3 + 1;
              }
              else {
LAB_10009356:
                uVar6 = 1;
                uVar4 = uVar3;
              }
              goto LAB_1000901d;
            }
          }
          uVar4 = uVar3 + 1;
          uVar6 = 1;
          if (uVar4 < capacity) {
            (output + uVar3)[0] = 'x';
            (output + uVar3)[1] = '\0';
            goto LAB_1000901d;
          }
        }
        uVar4 = uVar3;
      }
      else {
        uVar4 = uVar3 + 1;
        uVar6 = 1;
        if (uVar4 < capacity) {
          output[uVar3] = *first;
          output[uVar3 + 1] = '\0';
        }
        else {
          uVar4 = uVar3;
        }
        pcVar5 = first;
      }
LAB_1000901d:
      first = pcVar5 + 1;
      uVar3 = uVar4;
    } while (first < last);
  }
  return uVar6;
}

#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009370
 */

char * recovered_10009370(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
    return (char *)0x0;
  }
  iVar3 = 1;
switchD_10009398_caseD_1:
  first = first + 1;
LAB_10009390:
  cVar1 = *first;
  switch((uintptr_t)(cVar1)) {
  case '\0':
    first = (char *)0x0;
    break;
  default:
    goto switchD_10009398_caseD_1;
  case '\"':
  case '\'':
    goto switchD_10009398_caseD_22;
  case '(':
    iVar3 = iVar3 + 1;
    goto switchD_10009398_caseD_1;
  case ')':
    iVar3 = iVar3 + -1;
    if (iVar3 != 0) goto switchD_10009398_caseD_1;
  }
  return first;
switchD_10009398_caseD_22:
  first = first + 1;
LAB_100093b9:
  do {
    cVar2 = *first;
    if (cVar2 == '\\') {
      if (first[1] != '\0') {
        first = first + 2;
        goto LAB_100093b9;
      }
    }
    else if (cVar2 == '\0') break;
    first = first + 1;
  } while (cVar2 != cVar1);
  goto LAB_10009390;
}


#undef DAT_1000abb0
#define DAT_1000abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef str_1000ae62
#define str_1000ae62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a6U)))
#undef str_1000ae96
#define str_1000ae96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9daU)))
#undef str_1000aead
#define str_1000aead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f1U)))
#undef str_1000aeb8
#define str_1000aeb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fcU)))
#undef str_1000aecb
#define str_1000aecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0fU)))
#define local_dc (*(byte (*)[96])(frame + 20))
#define local_7c (*(byte (*)[96])(frame + 116))
#define local_1c (*(uint *)(frame + 212))
#define local_18 (*(byte * *)(frame + 216))
#define local_14 (*(char * *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093f0
 */

uint recovered_100093f0(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;

  if (last <= first || first == (char *)0x0) {
    return 8;
  }
  local_1c = capacity;
  local_14 = output;
  iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9a6U));
  pcVar12 = (char *)0x0;
  if ((iVar2 != 0) && (*first != '\0')) {
    pcVar12 = first;
    do {
      iVar7 = 0;
      while (bVar8 = pcVar12[iVar7], bVar8 != 0) {
        if ((byte)(bVar8 + 0xbf) < 0x1a) {
          bVar8 = bVar8 | 0x20;
        }
        bVar6 = str_1000ae62[iVar7];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar8 != bVar6) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000949e;
      }
      if (iVar2 == iVar7) goto LAB_1000949e;
      pcVar5 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar5 != '\0');
    pcVar12 = (char *)0x0;
  }
LAB_1000949e:
  if (pcVar12 != first) {
    iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9daU));
    uVar4 = local_1c;
    pcVar12 = (char *)0x0;
    if ((iVar2 != 0) && (*first != '\0')) {
      pcVar12 = first;
      do {
        iVar7 = 0;
        while (bVar8 = pcVar12[iVar7], bVar8 != 0) {
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          bVar6 = str_1000ae96[iVar7];
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar8 != bVar6) break;
          iVar7 = iVar7 + 1;
          if (iVar2 == iVar7) goto LAB_1000952e;
        }
        if (iVar2 == iVar7) goto LAB_1000952e;
        pcVar5 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar5 != '\0');
      pcVar12 = (char *)0x0;
    }
LAB_1000952e:
    if (pcVar12 != first) {
      uVar3 = recovered_10009980(local_14,local_1c,first,last,url,html,depth);
      if ((uVar3 & 8) == 0) {
        return uVar3;
      }
      iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9f1U));
      pcVar12 = (char *)0x0;
      if ((iVar2 != 0) && (*first != '\0')) {
        pcVar12 = first;
        do {
          iVar7 = 0;
          while (bVar8 = pcVar12[iVar7], bVar8 != 0) {
            if ((byte)(bVar8 + 0xbf) < 0x1a) {
              bVar8 = bVar8 | 0x20;
            }
            bVar6 = str_1000aead[iVar7];
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if (bVar8 != bVar6) break;
            iVar7 = iVar7 + 1;
            if (iVar2 == iVar7) goto LAB_100095d6;
          }
          if (iVar2 == iVar7) goto LAB_100095d6;
          pcVar5 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar5 != '\0');
        pcVar12 = (char *)0x0;
      }
LAB_100095d6:
      if (pcVar12 != first) {
        iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9fcU));
        pcVar12 = (char *)0x0;
        if ((iVar2 != 0) && (*first != '\0')) {
          pcVar12 = first;
          do {
            iVar7 = 0;
            while (bVar8 = pcVar12[iVar7], bVar8 != 0) {
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar6 = str_1000aeb8[iVar7];
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if (bVar8 != bVar6) break;
              iVar7 = iVar7 + 1;
              if (iVar2 == iVar7) goto LAB_10009646;
            }
            if (iVar2 == iVar7) goto LAB_10009646;
            pcVar5 = pcVar12 + 1;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar5 != '\0');
          pcVar12 = (char *)0x0;
        }
LAB_10009646:
        if (pcVar12 != first) {
          return 8;
        }
      }
      pcVar12 = &DAT_1000abb0;
      if (html != (char *)0x0) {
        pcVar12 = html;
      }
      if (depth == 0) {
        if (local_14 == (char *)0x0) {
          return 0x10;
        }
        uVar3 = recovered_10001cc0((int)local_14);
        cVar1 = *pcVar12;
        while (cVar1 != '\0') {
          pcVar12 = pcVar12 + 1;
          if ((uVar4 != 0) && (uVar3 + 1 < uVar4)) {
            local_14[uVar3] = cVar1;
            local_14[uVar3 + 1] = '\0';
            uVar3 = uVar3 + 1;
          }
          cVar1 = *pcVar12;
        }
        return 0x10;
      }
      pcVar5 = html;
      goto LAB_10009673;
    }
  }
  pcVar12 = recovered_10001ed0(first,'(');
  if ((last <= pcVar12 || pcVar12 == (char *)0x0) || last <= pcVar12 + 1) {
    return 8;
  }
  iVar2 = 0;
  while( true ) {
    uVar4 = (byte)pcVar12[iVar2 + 1] - 9;
    if (0x1e < uVar4) {
      return 8;
    }
    if ((0x800013U >> (uVar4 & 0x1f) & 1) == 0) break;
    iVar7 = iVar2 + 2;
    iVar2 = iVar2 + 1;
    if (pcVar12 + iVar7 == last) {
      return 8;
    }
  }
  if ((0x42000000U >> (uVar4 & 0x1f) & 1) == 0) {
    return 8;
  }
  pbVar9 = (byte *)(pcVar12 + iVar2 + 2);
  pbVar13 = pbVar9;
  if (pbVar9 < last) {
    do {
      if (*pbVar13 == pcVar12[iVar2 + 1]) goto LAB_1000971b;
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 < last);
    pbVar13 = (byte *)last;
  }
LAB_1000971b:
  pbVar10 = pbVar13 + ((-2 - (int)pcVar12) - iVar2);
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = (byte *)0x0;
  }
  else if (*pbVar9 == 0x23) {
    pbVar9 = (byte *)(pcVar12 + iVar2 + 3);
    pbVar10 = pbVar13 + (-iVar2 - (int)pcVar12) + -3;
  }
  if ((byte *)0x5e < pbVar10) {
    pbVar10 = (byte *)0x5f;
  }
  pbVar13 = local_7c;
  recovered_100015c0((undefined4 *)pbVar13,(undefined4 *)pbVar9,(uint)pbVar10);
  local_7c[(int)pbVar10] = 0;
  if (url == (char *)0x0) {
    return 8;
  }
  if (*url == '\0') {
    return 8;
  }
  iVar2 = recovered_10001cf0(pbVar13,(byte *)url);
  if (iVar2 != 0) {
    iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa0fU));
    if (iVar2 == 0) {
      return 8;
    }
    if (local_7c[0] == 0) {
      return 8;
    }
    local_18 = local_7c + 6;
    do {
      iVar7 = 0;
      while (bVar8 = pbVar13[iVar7], bVar8 != 0) {
        if ((byte)(bVar8 + 0xbf) < 0x1a) {
          bVar8 = bVar8 | 0x20;
        }
        bVar6 = str_1000aecb[iVar7];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar8 != bVar6) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000983a;
      }
      if (iVar2 == iVar7) goto LAB_1000983a;
      local_18 = local_18 + 1;
      pbVar9 = pbVar13 + 1;
      pbVar13 = pbVar13 + 1;
      if (*pbVar9 == 0) {
        return 8;
      }
    } while( true );
  }
  goto LAB_100098da;
LAB_1000983a:
  do {
    uVar4 = (uint)local_18[-1];
    switch((uintptr_t)(uVar4)) {
    case 9:
    case 0x20:
      local_18 = local_18 + 1;
      break;
    default:
      goto switchD_10009849_caseD_a;
    case 0x22:
    case 0x27:
      uVar3 = (uint)*local_18;
      goto LAB_10009861;
    }
  } while( true );
switchD_10009849_caseD_a:
  local_18 = local_18 + -1;
  uVar3 = uVar4;
  uVar4 = 0;
LAB_10009861:
  uVar11 = 0;
  if (uVar4 != (int)(char)uVar3 && (char)uVar3 != '\0') {
    uVar14 = 0;
    while ((uVar4 != 0 ||
           ((((byte)uVar3 != 9 && ((uVar3 & 0xff) != 0x20)) && ((uVar3 & 0xff) != 0x5d))))) {
      uVar11 = uVar14 + 1;
      local_dc[uVar14] = (byte)uVar3;
      uVar3 = (uint)(char)local_18[uVar14 + 1];
      if (((uVar3 == 0) || (0x5e < uVar11)) || (uVar14 = uVar11, uVar4 == uVar3)) goto LAB_100098b5;
    }
    uVar11 = uVar14;
  }
LAB_100098b5:
  local_dc[uVar11] = 0;
  iVar2 = recovered_10001cf0(local_dc,(byte *)url);
  if (iVar2 != 0) {
    return 8;
  }
LAB_100098da:
  pcVar5 = &DAT_1000abb0;
  if (html != (char *)0x0) {
    pcVar5 = html;
  }
  if (depth == 0) {
    recovered_10009d30(local_14,local_1c,pcVar5);
    return 0x10;
  }
  uVar4 = local_1c;
  pcVar12 = pcVar5;
LAB_10009673:
  recovered_10009bf0((uint)pcVar5,local_14,uVar4,pcVar12);
  return 0x10;
}

#undef DAT_1000abb0
#undef str_1000ae62
#undef str_1000ae96
#undef str_1000aead
#undef str_1000aeb8
#undef str_1000aecb
#undef local_dc
#undef local_7c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009910
 */

uint recovered_10009910(uint in_EAX,char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  if (capacity != 0) {
    if (output == (char *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = recovered_10001cc0((int)output);
    }
    cVar1 = *(char *)capacity;
    while (cVar1 != '\0') {
      capacity = capacity + 1;
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      if ((output != (char *)0x0) && (in_EAX + 1 < 0x200)) {
        output[in_EAX] = cVar1;
        output[in_EAX + 1] = '\0';
        in_EAX = in_EAX + 1;
      }
      cVar1 = *(char *)capacity;
    }
  }
  return in_EAX;
}


#undef DAT_1000abb0
#define DAT_1000abb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f4U)))
#undef str_1000ae8f
#define str_1000ae8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d3U)))
#undef str_1000aee2
#define str_1000aee2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa26U)))
#undef str_1000aef1
#define str_1000aef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa35U)))
#define local_27c (*(char (*)[512])(frame + 36))
#define local_7c (*(byte (*)[96])(frame + 548))
#define local_1c (*(char * *)(frame + 644))
#define local_18 (*(uint *)(frame + 648))
#define local_14 (*(char * *)(frame + 652))
#define text_00 (*(char * *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009980
 */

uint recovered_10009980(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  char *text;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;

  if (last == (char *)0x0 || first == (char *)0x0) {
    return 8;
  }
  if (((url == (char *)0x0 || last <= first) || (*url == '\0')) ||
     ((bVar7 = *first, 0x19 < (byte)((bVar7 & 0xdf) + 0xbf) && ((bVar7 != 0x5f && (bVar7 != 0x24))))
     )) {
    return 8;
  }
  uVar4 = 0;
  local_1c = output;
  local_18 = capacity;
  do {
    bVar7 = *first;
    if ((((9 < (byte)(bVar7 - 0x30U)) && (0x19 < (byte)((bVar7 & 0xdf) + 0xbf))) && (bVar7 != 0x5f))
       && (bVar7 != 0x24)) goto LAB_10009a32;
    if (uVar4 + 1 < 0x60) {
      local_7c[uVar4] = bVar7;
      uVar4 = uVar4 + 1;
    }
    first = first + 1;
  } while (first != last);
  first = last;
LAB_10009a32:
  local_7c[uVar4] = 0;
  iVar2 = recovered_10001cf0(local_7c,(byte *)url);
  if (iVar2 != 0) {
    return 8;
  }
  iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9d3U));
  pbVar5 = (byte *)0x0;
  if ((iVar2 != 0) && (local_14 = (char *)iVar2, *first != 0)) {
    pbVar5 = (byte *)first;
    do {
      iVar9 = 0;
      while (bVar7 = pbVar5[iVar9], bVar7 != 0) {
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        bVar3 = str_1000ae8f[iVar9];
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar7 != bVar3) break;
        iVar9 = iVar9 + 1;
        if (iVar2 == iVar9) goto LAB_10009adf;
      }
      if (iVar2 == iVar9) goto LAB_10009adf;
      pbVar8 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar8 != 0);
    pbVar5 = (byte *)0x0;
  }
LAB_10009adf:
  if (pbVar5 != (byte *)first) {
    return 8;
  }
  iVar2 = recovered_10001cc0(((uintptr_t)pf_module_state + 0x9d3U));
  local_14 = &DAT_1000abb0;
  if (html != (char *)0x0) {
    local_14 = html;
  }
  pbVar8 = (byte *)(first + iVar2);
  text_00 = str_1000aee2;
  uVar4 = recovered_10001cc0(((uintptr_t)pf_module_state + 0xa26U));
  pbVar5 = (byte *)0x0;
  if ((uVar4 != 0) && (*pbVar8 != 0)) {
    pbVar5 = pbVar8;
    do {
      uVar6 = 0;
      while (bVar7 = pbVar5[uVar6], bVar7 != 0) {
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        bVar3 = str_1000aee2[uVar6];
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar7 != bVar3) break;
        uVar6 = uVar6 + 1;
        if (uVar4 == uVar6) goto LAB_10009b73;
      }
      if (uVar4 == uVar6) goto LAB_10009b73;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar1 != 0);
    pbVar5 = (byte *)0x0;
  }
LAB_10009b73:
  if (pbVar5 == pbVar8) {
    local_27c[0] = '\0';
    recovered_10009910(uVar4,local_27c,(uint)local_14,text_00);
  }
  else {
    pbVar5 = (byte *)recovered_100085e0((char *)pbVar8,str_1000aef1);
    text = local_14;
    if (pbVar5 != pbVar8) goto LAB_10009bbb;
    local_27c[0] = '\0';
    recovered_10009d90((uint)local_14,local_27c,(uint)local_14,text_00);
  }
  text = local_27c;
LAB_10009bbb:
  if (depth == 0) {
    recovered_10009d30(local_1c,local_18,text);
  }
  else {
    recovered_10009bf0((uint)text,local_1c,local_18,text);
  }
  return 0x10;
}

#undef DAT_1000abb0
#undef str_1000ae8f
#undef str_1000aee2
#undef str_1000aef1
#undef local_27c
#undef local_7c
#undef local_1c
#undef local_18
#undef local_14
#undef text_00

#undef str_1000aed1
#define str_1000aed1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa15U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bf0
 */

uint recovered_10009bf0(uint in_EAX,char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;

  if (text != (char *)0x0) {
    if (output == (char *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = recovered_10001cc0((int)output);
    }
    bVar2 = *text;
    if (bVar2 != 0) {
      bVar3 = capacity != 0 && output != (char *)0x0;
      uVar4 = in_EAX;
      do {
        if (((byte)(bVar2 - 0x30U) < 10) || ((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a)) {
LAB_10009cb8:
          in_EAX = uVar4 + 1;
          if (bVar3 && in_EAX < capacity) {
LAB_10009c50:
            output[uVar4] = bVar2;
            output[in_EAX] = '\0';
            uVar4 = in_EAX;
          }
        }
        else {
          in_EAX = (uint)bVar2;
          if (in_EAX < 0x5f) {
            if (1 < in_EAX - 0x2d) {
              if (in_EAX != 0x20) goto LAB_10009cbe;
              bVar2 = 0x2b;
            }
            goto LAB_10009cb8;
          }
          if ((in_EAX == 0x7e) || (in_EAX == 0x5f)) goto LAB_10009cb8;
LAB_10009cbe:
          if (bVar3) {
            uVar1 = uVar4 + 1;
            if (uVar1 < capacity) {
              (output + uVar4)[0] = '%';
              (output + uVar4)[1] = '\0';
              uVar5 = uVar4 + 2;
              uVar4 = uVar1;
              uVar1 = uVar5;
            }
            in_EAX = uVar1;
            if (uVar1 < capacity) {
              output[uVar4] = str_1000aed1[(byte)*text >> 4];
              output[uVar1] = '\0';
              in_EAX = uVar1 + 1;
              uVar4 = uVar1;
            }
            if (capacity <= in_EAX) goto LAB_10009c5c;
            bVar2 = str_1000aed1[(byte)*text & 0xf];
            goto LAB_10009c50;
          }
        }
LAB_10009c5c:
        bVar2 = text[1];
        text = text + 1;
      } while (bVar2 != 0);
    }
  }
  return in_EAX;
}

#undef str_1000aed1

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d30
 */

uint recovered_10009d30(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;

  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),output == (char *)0x0);
  if (text != (char *)0x0 && output != (char *)0x0) {
    uVar2 = recovered_10001cc0((int)output);
    cVar1 = *text;
    while (cVar1 != '\0') {
      text = text + 1;
      if ((capacity != 0) && (uVar2 + 1 < capacity)) {
        output[uVar2] = cVar1;
        output[uVar2 + 1] = '\0';
        uVar2 = uVar2 + 1;
      }
      cVar1 = *text;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d90
 */

uint recovered_10009d90(uint in_EAX,char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (capacity != 0) {
    if (output == (char *)0x0) {
      in_EAX = 0;
    }
    else {
      in_EAX = recovered_10001cc0((int)output);
    }
    bVar1 = *(byte *)capacity;
    while (bVar1 != 0) {
      capacity = capacity + 1;
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((output != (char *)0x0) && (in_EAX + 1 < 0x200)) {
        output[in_EAX] = bVar1;
        output[in_EAX + 1] = '\0';
        in_EAX = in_EAX + 1;
      }
      bVar1 = *(byte *)capacity;
    }
  }
  return in_EAX;
}


#define local_24 (*(int *)(frame + 28))
#define local_14 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e00
 */

uint recovered_10009e00(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *last_00;

  if ((((first == (char *)0x0) || (last <= first)) || (output == (char *)0x0)) || (capacity == 0)) {
    return 0;
  }
  uVar4 = 0;
LAB_10009e39:
  pbVar5 = (byte *)first;
  do {
    bVar2 = *first;
    switch((uintptr_t)(bVar2)) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2b:
      first = first + 1;
      pbVar5 = pbVar5 + 1;
      if (last <= first) {
        return uVar4;
      }
      break;
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
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
      goto switchD_10009e4e_caseD_b;
    case 0x22:
    case 0x27:
      pbVar10 = (byte *)(first + 1);
      local_14 = 0;
      pbVar5 = pbVar10;
      if (pbVar10 < last) goto LAB_10009e8f;
      goto LAB_1000a06b;
    default:
      if (bVar2 == 0x60) {
        pbVar10 = (byte *)(first + 1);
        local_14 = 0;
        pbVar5 = pbVar10;
        if (last <= pbVar10) goto LAB_1000a144;
        goto LAB_10009ed5;
      }
      goto switchD_10009e4e_caseD_b;
    }
  } while( true );
LAB_10009ed5:
  pbVar5 = pbVar10;
  do {
    bVar2 = *pbVar5;
    pbVar9 = pbVar5 + 1;
    if (pbVar9 < last && bVar2 == 0x5c) {
      pbVar9 = pbVar5 + 2;
    }
    else if (bVar2 == 0x24) {
      if ((pbVar9 < last) && (*pbVar9 == 0x7b)) break;
    }
    else if (bVar2 == 0x60) {
      local_14 = 1;
      goto LAB_1000a144;
    }
    pbVar5 = pbVar9;
    if (last <= pbVar9) {
      local_14 = 0;
      goto LAB_1000a144;
    }
  } while( true );
  pbVar9 = pbVar5 + 2;
  if (last <= pbVar9) {
    return 0;
  }
  local_24 = 1;
  last_00 = pbVar9;
LAB_10009f53:
  bVar2 = *last_00;
  if (bVar2 < 0x60) {
    if ((bVar2 == 0x22) || (bVar2 == 0x27)) goto LAB_10009f75;
  }
  else {
    if (bVar2 == 0x60) {
LAB_10009f75:
      last_00 = last_00 + 1;
      if (last_00 < last) {
        do {
          bVar3 = *last_00;
          pbVar1 = last_00 + 1;
          if (pbVar1 < last && bVar3 == 0x5c) {
            last_00 = last_00 + 2;
          }
          else {
            last_00 = pbVar1;
            if (bVar3 == bVar2) break;
          }
        } while (last_00 < last);
      }
      goto joined_r0x10009f4d;
    }
    if (bVar2 != 0x7b) {
      if ((bVar2 != 0x7d) || (local_24 = local_24 + -1, local_24 != 0)) goto LAB_10009fc3;
      recovered_10008fb0(output,capacity,(char *)pbVar10,(char *)pbVar5);
      uVar4 = recovered_10009e00(output,capacity,(char *)pbVar9,(char *)last_00);
      if (uVar4 == 0) {
        return 0;
      }
      pbVar10 = last_00 + 1;
      if (last <= pbVar10) goto code_r0x1000a013;
      goto LAB_10009ed5;
    }
    local_24 = local_24 + 1;
  }
LAB_10009fc3:
  last_00 = last_00 + 1;
joined_r0x10009f4d:
  if (last <= last_00) {
    return 0;
  }
  goto LAB_10009f53;
code_r0x1000a013:
  local_14 = 0;
  pbVar5 = pbVar10;
LAB_1000a144:
  uVar4 = recovered_10008fb0(output,capacity,(char *)pbVar10,(char *)pbVar5);
  if ((uVar4 == 0) && (pbVar10 != pbVar5)) {
    return 0;
  }
  goto LAB_1000a16b;
LAB_10009e8f:
  do {
    if (pbVar5 + 1 < last && *pbVar5 == 0x5c) {
      pbVar9 = pbVar5 + 2;
    }
    else {
      pbVar9 = pbVar5 + 1;
      if (*pbVar5 == bVar2) {
        local_14 = 1;
        goto LAB_1000a06b;
      }
    }
    pbVar5 = pbVar9;
  } while (pbVar5 < last);
  local_14 = 0;
LAB_1000a06b:
  uVar4 = recovered_10008fb0(output,capacity,(char *)pbVar10,(char *)pbVar5);
  if (uVar4 == 0) {
    return 0;
  }
LAB_1000a16b:
  first = (char *)(pbVar5 + local_14);
LAB_1000a16e:
  uVar4 = 1;
  if (last <= first) {
    return 1;
  }
  goto LAB_10009e39;
switchD_10009e4e_caseD_b:
  pbVar10 = (byte *)first;
  if (first < last) {
    do {
      if ((byte)(*pbVar10 - 0x2b) < 2) goto LAB_1000a040;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < last);
    pbVar10 = (byte *)last;
  }
LAB_1000a040:
  if (first < pbVar10) {
    pbVar5 = (byte *)(first + ((int)pbVar10 - (int)pbVar5));
    do {
      if ((0x17 < (byte)*first - 9) || ((0x800013U >> ((byte)*first - 9 & 0x1f) & 1) == 0))
      goto LAB_1000a098;
      first = first + 1;
    } while ((byte *)first != pbVar10);
    first = (char *)pbVar5;
  }
LAB_1000a098:
  if (pbVar10 <= first) {
    return 0;
  }
  pbVar9 = (byte *)(first + (4 - (int)pbVar10));
  pbVar5 = pbVar10;
  while ((pbVar5[-1] - 9 < 0x18 && ((0x800013U >> (pbVar5[-1] - 9 & 0x1f) & 1) != 0))) {
    pbVar5 = pbVar5 + -1;
    pbVar9 = pbVar9 + 1;
    if (pbVar5 <= first) {
      return 0;
    }
  }
  if ((pbVar9 != (byte *)0x0) || (iVar6 = recovered_10005480((int)first,((uintptr_t)pf_module_state + 0xa55U),4), iVar6 != 0))
  {
    pbVar9 = (byte *)first;
    if (pbVar5 <= first) {
      recovered_10001cc0((int)output);
      first = (char *)pbVar10;
      goto LAB_1000a16e;
    }
    do {
      uVar8 = CONCAT11(*pbVar9,*pbVar9) & 0xdfff;
      cVar7 = (char)uVar8;
      if (((((byte)((char)(uVar8 >> 8) + 0xa5U) < 0xe6) && (cVar7 != '+')) &&
          ((byte)(cVar7 - 0x3aU) < 0xf6)) && ((byte)(cVar7 - 0x2fU) < 0xfe)) {
        return 0;
      }
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 < pbVar5);
    uVar4 = recovered_10001cc0((int)output);
    do {
      if (uVar4 + 1 < capacity) {
        output[uVar4] = *first;
        output[uVar4 + 1] = '\0';
        uVar4 = uVar4 + 1;
      }
      first = first + 1;
    } while (first < pbVar5);
  }
  first = (char *)pbVar10;
  goto LAB_1000a16e;
}

#undef local_24
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1c0
 */

char * recovered_1000a1c0(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
LAB_1000a1e0:
  do {
    bVar1 = *first;
    if (0x26 < bVar1) {
      if ((bVar1 == 0x27) || (bVar1 == 0x60)) {
LAB_1000a205:
        first = first + 1;
LAB_1000a219:
        do {
          bVar2 = *first;
          if (bVar2 == 0x5c) {
            if (first[1] != 0) {
              first = first + 2;
              goto LAB_1000a219;
            }
          }
          else if (bVar2 == 0) break;
          first = first + 1;
        } while (bVar2 != bVar1);
      }
      else {
        if (bVar1 != 0x28) goto LAB_1000a234;
        iVar3 = iVar3 + 1;
        first = first + 1;
      }
      goto LAB_1000a1e0;
    }
    if (bVar1 == 0x22) goto LAB_1000a205;
    if (bVar1 == 0) {
      return first;
    }
LAB_1000a234:
    if (iVar3 < 1 || bVar1 != 0x29) {
      if (bVar1 == 0x5b) {
        iVar5 = iVar5 + 1;
        first = first + 1;
      }
      else if (iVar5 < 1 || bVar1 != 0x5d) {
        if (bVar1 == 0x7b) {
          iVar4 = iVar4 + 1;
          first = first + 1;
        }
        else if (iVar4 < 1 || bVar1 != 0x7d) {
          if ((bVar1 == 10) || (bVar1 == 0x3b)) {
            if (iVar3 == 0) goto LAB_1000a2a8;
          }
          else if (bVar1 == 0xd && iVar3 == 0) {
LAB_1000a2a8:
            iVar3 = 0;
            if (iVar5 == 0 && iVar4 == 0) {
              return first;
            }
          }
          first = first + 1;
        }
        else {
          iVar4 = iVar4 + -1;
          first = first + 1;
        }
      }
      else {
        iVar5 = iVar5 + -1;
        first = first + 1;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      first = first + 1;
    }
  } while( true );
}


#define local_41c (*(byte (*)[1024])(frame + 20))
#define local_1c (*(uint *)(frame + 1044))
#define local_18 (*(uint *)(frame + 1048))
#define local_11 (*(bool *)(frame + 1055))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2c0
 */

uint recovered_1000a2c0(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *output_00;

  local_41c[0] = 0;
  output_00 = local_41c;
  uVar2 = recovered_10009e00((char *)output_00,0x400,first,last);
  if (uVar2 == 0) {
    return 0;
  }
  if (output == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001cc0((int)output);
  }
  local_11 = capacity != 0 && output != (char *)0x0;
  local_18 = capacity;
LAB_1000a339:
  while (bVar1 = *output_00, bVar1 < 0x3c) {
    if (bVar1 == 0x26) {
      if (output != (char *)0x0) {
        uVar2 = recovered_10001cc0((int)output);
        if (capacity != 0) {
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = '&';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'a';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'm';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = 'p';
            (output + uVar2)[1] = '\0';
            uVar2 = uVar2 + 1;
          }
          if (uVar2 + 1 < capacity) {
            (output + uVar2)[0] = ';';
            (output + uVar2)[1] = '\0';
          }
        }
        goto LAB_1000a330;
      }
      uVar2 = 0;
      output_00 = output_00 + 1;
    }
    else {
      if (bVar1 == 0) {
        return uVar2;
      }
LAB_1000a3db:
      if (local_11 == false) goto LAB_1000a338;
      local_1c = uVar2 + 1;
      if (local_1c < capacity) {
        output[uVar2] = bVar1;
        output[uVar2 + 1] = '\0';
        uVar2 = local_1c;
      }
      output_00 = output_00 + 1;
      capacity = local_18;
    }
  }
  if (bVar1 == 0x3c) {
    if (output == (char *)0x0) {
      uVar2 = 0;
      output_00 = output_00 + 1;
      goto LAB_1000a339;
    }
    uVar2 = recovered_10001cc0((int)output);
    if (capacity != 0) {
      if (uVar2 + 1 < capacity) {
        (output + uVar2)[0] = '&';
        (output + uVar2)[1] = '\0';
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar2 + 1;
      if (uVar3 < capacity) {
        (output + uVar2)[0] = 'l';
        (output + uVar2)[1] = '\0';
      }
      else {
LAB_1000a488:
        uVar3 = uVar2;
      }
LAB_1000a48a:
      if (uVar3 + 1 < capacity) {
        (output + uVar3)[0] = 't';
        (output + uVar3)[1] = '\0';
        uVar3 = uVar3 + 1;
      }
      if (uVar3 + 1 < capacity) {
        (output + uVar3)[0] = ';';
        (output + uVar3)[1] = '\0';
      }
    }
  }
  else {
    if (bVar1 != 0x3e) goto LAB_1000a3db;
    if (output == (char *)0x0) {
      uVar2 = 0;
      output_00 = output_00 + 1;
      goto LAB_1000a339;
    }
    uVar2 = recovered_10001cc0((int)output);
    if (capacity != 0) {
      if (uVar2 + 1 < capacity) {
        (output + uVar2)[0] = '&';
        (output + uVar2)[1] = '\0';
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar2 + 1;
      if (capacity <= uVar3) goto LAB_1000a488;
      (output + uVar2)[0] = 'g';
      (output + uVar2)[1] = '\0';
      goto LAB_1000a48a;
    }
  }
LAB_1000a330:
  uVar2 = recovered_10001cc0((int)output);
LAB_1000a338:
  output_00 = output_00 + 1;
  goto LAB_1000a339;
}

#undef local_41c
#undef local_1c
#undef local_18
#undef local_11
