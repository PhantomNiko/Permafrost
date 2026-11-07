/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd17U)))
void recovered_10000590(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10017078 = 0;
  recovered_100005a0();
  return;
}

#undef DAT_10017078

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
#undef DAT_10012078
#define DAT_10012078 (*(char *)(((uintptr_t)pf_module_state + 0xd17U)))
#undef DAT_1001207c
#define DAT_1001207c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd1bU)))
#undef DAT_10012080
#define DAT_10012080 (*(int *)(((uintptr_t)pf_module_state + 0xd1fU)))
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
 * Address: 0x100005a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005a0(void)

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
  if (DAT_10012078 != '\0') {
    return;
  }
  DAT_1001207c = 0;
  DAT_10012080 = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_100005fb;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_100005fb:
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
        if (iVar9 == 0) goto LAB_10000740;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10003940(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1001207c != 0) goto LAB_10000846;
    }
  }
LAB_10000740:
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
      puVar6 = &DAT_1001207c;
      if (DAT_1001207c != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_10012080 == 0) {
        DAT_10012078 = 1;
        DAT_10012080 = 0x300000;
        return;
      }
      DAT_10012078 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1001207c;
    if (DAT_1001207c != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_10012080 == 0) {
      DAT_10012080 = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1001207c;
      if (DAT_1001207c != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_10012080 == 0) {
        DAT_10012078 = 1;
        DAT_10012080 = 0x2000000;
        return;
      }
      DAT_10012078 = 1;
      return;
    }
  }
LAB_10000846:
  if (DAT_10012080 == 0) {
    DAT_10012080 = DAT_1001207c;
    DAT_10012078 = 1;
    return;
  }
  DAT_10012078 = 1;
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
#undef DAT_10012078
#undef DAT_1001207c
#undef DAT_10012080
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

#undef DAT_1001207c
#define DAT_1001207c (*(int * *)(((uintptr_t)pf_module_state + 0xd1bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008c0
 */

int recovered_100008c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_100005a0();
  iVar1 = 0;
  for (piVar2 = DAT_1001207c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1001207c

#undef DAT_1001207c
#define DAT_1001207c (*(int * *)(((uintptr_t)pf_module_state + 0xd1bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000900
 */

long recovered_10000900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int *piVar2;

  recovered_100005a0();
  lVar1 = 0;
  for (piVar2 = DAT_1001207c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      lVar1 = lVar1 + *piVar2;
    }
  }
  return lVar1;
}

#undef DAT_1001207c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0xd1bU)))
int recovered_10000940(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_100005a0();
  iVar2 = 0;
  for (piVar1 = DAT_1001707c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1001707c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0xd1bU)))
long recovered_10000970(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_100005a0();
  iVar2 = 0;
  for (piVar1 = DAT_1001707c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1001707c

#undef DAT_1001207c
#define DAT_1001207c (*(uint * *)(((uintptr_t)pf_module_state + 0xd1bU)))
#undef DAT_10012080
#define DAT_10012080 (*(uint * *)(((uintptr_t)pf_module_state + 0xd1fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009b0
 */

uint * recovered_100009b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_100005a0();
    puVar4 = DAT_1001207c;
    if (DAT_10012080 != (uint *)0x0) {
      puVar4 = DAT_10012080;
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
            DAT_10012080 = DAT_1001207c;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_10012080 = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1001207c;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1001207c
#undef DAT_10012080

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longlong recovered_10000a70(uint param_1,int param_2,uint param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulonglong recovered_10000ab0(uint param_1,uint param_2,uint param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10000af0(uint param_1,uint param_2,uint param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
undefined8 recovered_10000b40(uint param_1,uint param_2,uint param_3,uint param_4)

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
        uVar3 = param_1 >> (bVar4 & 0x1f) | ((bVar4 & 31) == 0 ? 0 : param_2 << (32 - (bVar4 & 31)));
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

#undef local_14
#undef local_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10000c20(uint param_1,uint param_2,uint param_3,uint param_4)

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
        uVar7 = param_1 >> bVar1 | (bVar1 == 0 ? 0 : param_2 << (32 - bVar1));
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_1c (*(uint *)(frame + 36))
#define local_20 (*(uint *)(frame + 32))
#define local_24 (*(uint *)(frame + 28))
undefined8 recovered_10000c90(uint param_1,uint param_2,uint param_3,uint param_4)

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
        uVar4 = (param_1 ^ uVar1) - uVar1 >> (bVar5 & 0x1f) | ((bVar5 & 31) == 0 ? 0 : uVar12 << (32 - (bVar5 & 31)));
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

#undef local_1c
#undef local_20
#undef local_24

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10000dd0(uint param_1,uint param_2,uint param_3,uint param_4)

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
        uVar11 = (param_1 ^ uVar2) - uVar2 >> bVar1 | (bVar1 == 0 ? 0 : uVar13 << (32 - bVar1));
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10000eb0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000ed0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10000f10(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10000f50(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f90
 */

void * recovered_10000f90(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;

  pvVar3 = dst;
  if (7 < bytes) {
    if ((((uint)src ^ (uint)dst) & 3) != 0) goto LAB_10000fb7;
    if (((uint)dst & 3) != 0) {
      pvVar5 = dst;
      do {
        pvVar5 = (void *)((int)pvVar5 + 1);
        uVar1 = *(undefined1 *)src;
        src = (void *)((int)src + 1);
        *(undefined1 *)dst = uVar1;
        dst = (void *)((int)dst + 1);
        bVar6 = bytes == 1;
        bytes = bytes - 1;
        if (bVar6) break;
      } while (((uint)pvVar5 & 3) != 0);
    }
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *(undefined4 *)dst = *(undefined4 *)src;
      *(undefined4 *)((int)dst + 4) = *(undefined4 *)((int)src + 4);
      *(undefined4 *)((int)dst + 8) = *(undefined4 *)((int)src + 8);
      *(undefined4 *)((int)dst + 0xc) = *(undefined4 *)((int)src + 0xc);
      dst = (void *)((int)dst + 0x10);
      src = (void *)((int)src + 0x10);
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      uVar2 = *(undefined4 *)src;
      src = (void *)((int)src + 4);
      *(undefined4 *)dst = uVar2;
      dst = (void *)((int)dst + 4);
    }
  }
  if (bytes == 0) {
    return pvVar3;
  }
LAB_10000fb7:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)dst + uVar4) = *(undefined1 *)((int)src + uVar4);
    uVar4 = uVar4 + 1;
  } while (bytes != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

void * recovered_10001050(void *dst,void *src,uint bytes)

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

  if (bytes != 0 && dst != src) {
    if ((dst < src) || (pvVar5 = (void *)((int)src + bytes), pvVar5 <= dst)) {
      puVar7 = dst;
      if ((7 < bytes) && (pvVar5 = dst, (((uint)src ^ (uint)dst) & 3) == 0)) {
        do {
          if (((uint)pvVar5 & 3) == 0) break;
          pvVar5 = (void *)((int)pvVar5 + 1);
          uVar2 = *(undefined1 *)src;
          src = (void *)((int)src + 1);
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          bVar8 = bytes != 1;
          bytes = bytes - 1;
        } while (bVar8);
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *puVar7 = *(undefined4 *)src;
          puVar7[1] = *(undefined4 *)((int)src + 4);
          puVar7[2] = *(undefined4 *)((int)src + 8);
          puVar7[3] = *(undefined4 *)((int)src + 0xc);
          puVar7 = puVar7 + 4;
          src = (void *)((int)src + 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          uVar3 = *(undefined4 *)src;
          src = (void *)((int)src + 4);
          *puVar7 = uVar3;
          puVar7 = puVar7 + 1;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      uVar4 = 0;
      do {
        *(undefined1 *)((int)puVar7 + uVar4) = *(undefined1 *)((int)src + uVar4);
        uVar4 = uVar4 + 1;
      } while (bytes != uVar4);
    }
    else {
      uVar4 = (int)dst + bytes;
      if ((7 < bytes) && ((((uint)pvVar5 ^ uVar4) & 3) == 0)) {
        if ((uVar4 & 3) != 0) {
          do {
            *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
            uVar1 = bytes - 1;
            if (bytes == 1) break;
            iVar6 = bytes - 1;
            bytes = uVar1;
          } while (((int)dst + iVar6 & 3U) != 0);
          pvVar5 = (void *)((int)src + uVar1);
          uVar4 = (int)dst + uVar1;
          bytes = uVar1;
        }
        for (; 0xf < bytes; bytes = bytes - 0x10) {
          *(undefined4 *)(uVar4 - 4) = *(undefined4 *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 8) = *(undefined4 *)((int)pvVar5 - 8);
          *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)((int)pvVar5 - 0xc);
          *(undefined4 *)(uVar4 - 0x10) = *(undefined4 *)((int)pvVar5 - 0x10);
          uVar4 = uVar4 - 0x10;
          pvVar5 = (void *)((int)pvVar5 - 0x10);
        }
        for (; 3 < bytes; bytes = bytes - 4) {
          puVar7 = (undefined4 *)((int)pvVar5 - 4);
          pvVar5 = (void *)((int)pvVar5 - 4);
          *(undefined4 *)(uVar4 - 4) = *puVar7;
          uVar4 = uVar4 - 4;
        }
        if (bytes == 0) {
          return dst;
        }
      }
      iVar6 = 0;
      do {
        *(undefined1 *)((uVar4 - 1) + iVar6) = *(undefined1 *)((int)pvVar5 + iVar6 + -1);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

/* WARNING: Variable defined which should be unmapped: dst */

void * recovered_10001220(void *dst,int byte,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;

  piVar1 = dst;
  if (7 < bytes) {
    if (((uint)dst & 3) != 0) {
      pvVar2 = dst;
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        *(char *)piVar1 = (char)byte;
        piVar1 = (int *)((int)piVar1 + 1);
        bVar4 = bytes == 1;
        bytes = bytes - 1;
        if (bVar4) break;
      } while (((uint)pvVar2 & 3) != 0);
    }
    iVar3 = (byte & 0xffU) * 0x1010101;
    for (; 0xf < bytes; bytes = bytes - 0x10) {
      *piVar1 = iVar3;
      piVar1[1] = iVar3;
      piVar1[2] = iVar3;
      piVar1[3] = iVar3;
      piVar1 = piVar1 + 4;
    }
    for (; 3 < bytes; bytes = bytes - 4) {
      *piVar1 = iVar3;
      piVar1 = piVar1 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)piVar1 = (char)byte;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d0
 */

void recovered_100012d0(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

void recovered_10001370(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;

  puVar1 = param_1;
  if (7 < (uint)param_2) {
    do {
      if (((uint)puVar1 & 3) == 0) break;
      puVar1 = puVar1 + 1;
      *param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 1);
      bVar2 = param_2 != 1;
      param_2 = param_2 - 1;
    } while (bVar2);
    for (; 0xf < (uint)param_2; param_2 = param_2 - 0x10) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)((int)param_1 + 8) = 0;
      *(undefined4 *)((int)param_1 + 0xc) = 0;
      param_1 = (undefined1 *)((int)param_1 + 0x10);
    }
    for (; 3 < (uint)param_2; param_2 = param_2 - 4) {
      *(undefined4 *)param_1 = 0;
      param_1 = (undefined1 *)((int)param_1 + 4);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((int)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

int recovered_10001410(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (7 < (uint)param_3) {
    if (((param_2 ^ param_1) & 3U) != 0) goto LAB_100014ae;
    if ((param_1 & 3U) != 0) {
      uVar6 = param_3;
      uVar7 = param_1;
      do {
        uVar7 = uVar7 + 1;
        bVar1 = (byte)*(uint *)param_1;
        bVar2 = (byte)*(uint *)param_2;
        if (bVar1 != bVar2) goto LAB_100014c5;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        param_3 = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = param_3, (uVar7 & 3) != 0));
    }
    for (; 0xf < (uint)param_3; param_3 = param_3 - 0x10) {
      uVar7 = *(uint *)param_1;
      uVar6 = *(uint *)param_2;
      if (uVar7 != uVar6) {
LAB_100014f6:
        if ((char)uVar7 == (char)uVar6) {
          uVar5 = uVar7 >> 8;
          uVar4 = uVar6 >> 8;
          if ((char)(uVar7 >> 8) == (char)(uVar6 >> 8)) {
            uVar5 = uVar7 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((char)(uVar7 >> 0x10) == (char)(uVar6 >> 0x10)) {
              uVar5 = uVar7 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 == uVar4) {
                return 0;
              }
            }
          }
        }
        else {
          uVar5 = uVar7;
          uVar4 = uVar6;
        }
        return (uVar5 & 0xff) - (uVar4 & 0xff);
      }
      uVar7 = *(uint *)(param_1 + 4);
      uVar6 = *(uint *)(param_2 + 4);
      if (uVar7 != uVar6) goto LAB_100014f6;
      uVar7 = *(uint *)(param_1 + 8);
      uVar6 = *(uint *)(param_2 + 8);
      if (uVar7 != uVar6) goto LAB_100014f6;
      uVar7 = *(uint *)(param_1 + 0xc);
      uVar6 = *(uint *)(param_2 + 0xc);
      if (uVar7 != uVar6) goto LAB_100014f6;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    }
    for (; 3 < (uint)param_3; param_3 = param_3 - 4) {
      if (*(uint *)param_1 != *(uint *)param_2) {
        iVar3 = recovered_10001540((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100014ae:
  uVar7 = 0;
  while( true ) {
    bVar1 = *(byte *)(param_1 + uVar7);
    bVar2 = *(byte *)(param_2 + uVar7);
    if (bVar1 != bVar2) break;
    uVar7 = uVar7 + 1;
    if (param_3 == uVar7) {
      return 0;
    }
  }
LAB_100014c5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001540
 */

int recovered_10001540(char *in_ECX,char *in_EDX)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001580(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100015a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100015c0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100015e0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001610(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001630(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001650(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001670(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10001690(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100016c0(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001c76;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001c76:
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001700(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001cb6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001cb6:
  return uVar2 - *param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10001740(int param_1,int param_2)

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
 * Address: 0x10001760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001760(int param_1)

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

  if (param_1 == 0) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (*(char *)(param_1 + uVar5) != '\0');
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0x50) {
    return 0;
  }
  if (_DAT_0000684c == (code *)0x0) {
    return 0;
  }
  puVar4 = (undefined4 *)(*_DAT_0000684c)(uVar7);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = puVar4;
  if (7 < uVar7) {
    if ((((uint)puVar4 ^ param_1) & 3) != 0) goto LAB_10001871;
    if (((uint)puVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar4 + uVar8) = *(undefined1 *)(param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar4 + iVar3 & 3U) != 0);
      uVar7 = uVar7 - uVar1;
      param_1 = param_1 + uVar1;
      puVar6 = (undefined4 *)((int)puVar4 + uVar1);
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *puVar6 = *(undefined4 *)param_1;
      puVar6[1] = *(undefined4 *)(param_1 + 4);
      puVar6[2] = *(undefined4 *)(param_1 + 8);
      puVar6[3] = *(undefined4 *)(param_1 + 0xc);
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 4;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  if (uVar7 == 0) {
    return (int)puVar4;
  }
LAB_10001871:
  uVar5 = 0;
  do {
    *(undefined1 *)((int)puVar6 + uVar5) = *(undefined1 *)(param_1 + uVar5);
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return (int)puVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100018a0(char *param_1,char param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100018e0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10001dfb:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10001dfb;
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001930(char *param_1,char *param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001980(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10001ea3;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001ea3:
  return pcVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016b34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x943U)))
undefined * recovered_100019d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10016b34;
}

#undef DAT_10016b34

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca7U)))
undefined ** recovered_100019e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10017008;
}

#undef PTR_DAT_10017008

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
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100019f0(undefined4 *param_1)

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
  return local_18;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006968
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006968
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_20
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
longdouble recovered_10001a80(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_10015f10;
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

#undef _DAT_10015f10

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
ulong recovered_10001ab0(double param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined4 in_EAX = 0;
  int iVar2;
  ushort uVar3;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  uVar3 = (ushort)(param_1 < 0.0) << 8 | (ushort)NAN(param_1) << 10 |
          (ushort)(param_1 == 0.0) << 0xe;
  if (((param_1 == 0.0) == 0) || (NAN(param_1) != 0)) {
    dVar1 = -param_1;
    if (-param_1 <= param_1) {
      dVar1 = param_1;
    }
    iVar2 = 0;
    if (1.0 <= dVar1) {
      iVar2 = 0;
      do {
        dVar1 = dVar1 * (double)_DAT_10015f10;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_10015f10 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_10015f10);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    uVar3 = (ushort)(0.0 < param_1) << 8 | (ushort)NAN(param_1) << 10 |
            (ushort)(param_1 == 0.0) << 0xe;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),uVar3);
}

#undef _DAT_10015f10

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001b90(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((right != 0.0) || (NAN(right))) {
    dVar1 = left - right * (double)(int)ROUND(left / right);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001bf0(double left,double right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(right);
  dVar3 = 0.0;
  if ((((double)(int)uVar1 == right) && (!NAN((double)(int)uVar1) && !NAN(right))) &&
     (dVar3 = 1.0, uVar1 != 0)) {
    dVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        dVar3 = left * dVar3;
      }
      left = left * left;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      dVar3 = 1.0 / dVar3;
    }
  }
  return dVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001c90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  dVar2 = (double)((int)ROUND(value) + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  return dVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001ce0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  dVar2 = (double)((int)ROUND(value) + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  dVar1 = dVar2 + 1.0;
  if (value <= dVar2) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
double recovered_10001d40(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 0.0;
  if (0.0 < value) {
    dVar1 = value;
    if (value < 1.0) {
      dVar1 = 1.0;
    }
    dVar2 = (double)_DAT_10015f10;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar1 = (value / dVar1 + dVar1) * dVar2;
    dVar2 = dVar2 * (value / dVar1 + dVar1);
  }
  return dVar2;
}

#undef _DAT_10015f10

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f14 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#define _DAT_10015f18 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#define _DAT_10015f1c (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#define _DAT_10015f2c (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#define _DAT_10015f30 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#define _DAT_10015f34 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#define _DAT_10015f38 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#define _DAT_10015f3c (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#define _DAT_10015f40 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#define _DAT_10015f68 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
double recovered_10001e40(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;

  if (value <= 0.0) {
    dVar1 = (double)_DAT_10015f14;
  }
  else {
    iVar10 = 0;
    if ((double)_DAT_10015f18 < value) {
      iVar10 = 0;
      do {
        value = value * (double)_DAT_10015f10;
        iVar10 = iVar10 + 1;
      } while ((double)_DAT_10015f18 < value);
    }
    for (; value < (double)_DAT_10015f1c; value = value + value) {
      iVar10 = iVar10 + -1;
    }
    dVar1 = (value + -1.0) / (value + 1.0);
    dVar2 = dVar1 * dVar1;
    dVar3 = dVar1 * dVar2 * dVar2;
    dVar4 = dVar3 * dVar2;
    dVar5 = dVar4 * dVar2;
    dVar6 = dVar5 * dVar2;
    dVar7 = dVar6 * dVar2;
    dVar8 = dVar7 * dVar2;
    dVar9 = dVar8 * dVar2;
    dVar1 = (dVar9 * dVar2) / (double)_DAT_10015f40 +
            dVar9 / (double)_DAT_10015f3c +
            dVar8 / (double)_DAT_10015f38 +
            dVar7 / (double)_DAT_10015f34 +
            dVar6 / (double)_DAT_10015f30 +
            dVar5 / (double)_DAT_10015f2c +
            dVar4 / (double)_DAT_10015f28 +
            dVar3 / (double)_DAT_10015f24 + (dVar1 * dVar2) / (double)_DAT_10015f20 + dVar1 + 0.0;
    dVar1 = dVar1 + dVar1 + (double)iVar10 * _DAT_10015f68;
  }
  return dVar1;
}

#undef _DAT_10015f10
#undef _DAT_10015f14
#undef _DAT_10015f18
#undef _DAT_10015f1c
#undef _DAT_10015f20
#undef _DAT_10015f24
#undef _DAT_10015f28
#undef _DAT_10015f2c
#undef _DAT_10015f30
#undef _DAT_10015f34
#undef _DAT_10015f38
#undef _DAT_10015f3c
#undef _DAT_10015f40
#undef _DAT_10015f68

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
longlong recovered_10001f60(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10015f90

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f44 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#define _DAT_10015f48 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#define _DAT_10015f4c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
double recovered_10001fb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (; _DAT_10015f70 < value; value = value + _DAT_10015f78) {
  }
  for (; value < _DAT_10015f80; value = value + _DAT_10015f88) {
  }
  dVar1 = value * value;
  return ((dVar1 * dVar1 * dVar1) / (double)_DAT_10015f4c +
         (dVar1 * dVar1) / (double)_DAT_10015f48 + dVar1 / (double)_DAT_10015f44 + 1.0) * value;
}

#undef _DAT_10015f44
#undef _DAT_10015f48
#undef _DAT_10015f4c
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10002050(double value){return pf_cosine_polynomial(value);}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100020f0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (-value <= value) {
    dVar1 = value;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f5c (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
undefined8 recovered_10002110(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if ((param_1 != 0.0) || (uVar4 = 0, uVar7 = 0, NAN(param_1))) {
    dVar2 = -param_1;
    if (-param_1 <= param_1) {
      dVar2 = param_1;
    }
    uVar8 = 0;
    dVar3 = (double)_DAT_10015f5c;
    uVar4 = 0x3f;
    uVar10 = 0;
    do {
      bVar1 = (byte)uVar4 & 0x1f;
      uVar6 = 1 << ((byte)uVar4 & 0x1f);
      uVar7 = uVar6;
      uVar9 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar4 & 0x20) != 0) {
        uVar7 = 0;
        uVar9 = uVar6;
      }
      uVar6 = 0;
      uVar5 = 0;
      if (dVar3 <= dVar2) {
        uVar6 = uVar7;
        uVar5 = uVar9;
        dVar2 = dVar2 - dVar3;
      }
      uVar8 = uVar8 | uVar6;
      uVar10 = uVar10 | uVar5;
      dVar3 = dVar3 * (double)_DAT_10015f10;
      bVar11 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar11);
    uVar4 = -uVar8;
    uVar7 = -(uint)(uVar8 != 0) - uVar10;
    if (0.0 <= param_1) {
      uVar4 = uVar8;
      uVar7 = uVar10;
    }
  }
  return CONCAT44(uVar7,uVar4);
}

#undef _DAT_10015f10
#undef _DAT_10015f5c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f5c (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
undefined8 recovered_100021f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar7 = 0;
  uVar4 = 0;
  if (0.0 < param_1) {
    uVar7 = 0;
    dVar2 = (double)_DAT_10015f5c;
    uVar3 = 0x3f;
    uVar4 = 0;
    do {
      bVar1 = (byte)uVar3 & 0x1f;
      uVar5 = 1 << ((byte)uVar3 & 0x1f);
      uVar6 = uVar5;
      uVar8 = 0 << bVar1 | 1U >> 0x20 - bVar1;
      if ((uVar3 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      uVar5 = 0;
      uVar9 = 0;
      if (dVar2 <= param_1) {
        uVar5 = uVar6;
        uVar9 = uVar8;
        param_1 = param_1 - dVar2;
      }
      uVar7 = uVar7 | uVar5;
      uVar4 = uVar4 | uVar9;
      dVar2 = dVar2 * (double)_DAT_10015f10;
      bVar10 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar4,uVar7);
}

#undef _DAT_10015f10
#undef _DAT_10015f5c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_100022a0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  longdouble lVar5;
  longdouble lVar6;

  lVar6 = (longdouble)0;
  if (param_1 != 0 || param_2 != 0) {
    lVar6 = (longdouble)0;
    lVar5 = (longdouble)1;
    do {
      if ((param_1 & 1) != 0) {
        lVar6 = lVar6 + lVar5;
      }
      uVar1 = param_2 << 0x1f;
      lVar5 = lVar5 + lVar5;
      bVar3 = 1 < param_1;
      bVar4 = param_2 != 0;
      uVar2 = -param_2;
      param_2 = param_2 >> 1;
      param_1 = uVar1 | param_1 >> 1;
    } while (bVar4 || uVar2 < bVar3);
  }
  return lVar6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10002310(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longdouble lVar6;
  longdouble lVar7;

  if ((int)param_2 < 0) {
    lVar7 = (longdouble)0;
    lVar6 = (longdouble)1;
    uVar2 = -param_1;
    uVar3 = -(uint)(param_1 != 0) - param_2;
    do {
      if ((uVar2 & 1) != 0) {
        lVar7 = lVar6 + lVar7;
      }
      lVar6 = lVar6 + lVar6;
      bVar4 = 1 < uVar2;
      bVar5 = uVar3 != 0;
      uVar1 = -uVar3;
      uVar2 = uVar3 << 0x1f | uVar2 >> 1;
      uVar3 = uVar3 >> 1;
    } while (bVar5 || uVar1 < bVar4);
    lVar7 = -lVar7;
  }
  else {
    lVar7 = (longdouble)0;
    if (param_1 != 0 || param_2 != 0) {
      lVar7 = (longdouble)0;
      lVar6 = (longdouble)1;
      do {
        if ((param_1 & 1) != 0) {
          lVar7 = lVar6 + lVar7;
        }
        lVar6 = lVar6 + lVar6;
        bVar4 = 1 < param_1;
        bVar5 = param_2 != 0;
        uVar2 = -param_2;
        param_1 = param_2 << 0x1f | param_1 >> 1;
        param_2 = param_2 >> 1;
      } while (bVar5 || uVar2 < bVar4);
    }
  }
  return lVar7;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100023c0(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - right * (float)(int)ROUND(left / right);
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
longdouble recovered_10002420(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_10015f10;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_10015f10 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_10015f10);
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

#undef _DAT_10015f10

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
longdouble recovered_10002510(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_10015f10;
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

#undef _DAT_10015f10

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002550(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(right);
  fVar3 = 0.0;
  if ((((float)(int)uVar1 == right) && (!NAN((float)(int)uVar1) && !NAN(right))) &&
     (fVar3 = 1.0, uVar1 != 0)) {
    fVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        fVar3 = fVar3 * left;
      }
      left = left * left;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
  }
  return fVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100025f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  fVar2 = (float)((int)ROUND(value) + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002640(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  fVar2 = (float)((int)ROUND(value) + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (value <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_100026b0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(int)ROUND(value);
  dVar2 = (double)((int)ROUND(value) + -1);
  if (dVar1 <= value) {
    dVar2 = dVar1;
  }
  dVar1 = dVar2 + 1.0;
  if (value <= dVar2) {
    dVar1 = dVar2;
  }
  if (0.0 <= value) {
    dVar1 = dVar2;
  }
  return dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002720(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)ROUND(value);
  fVar2 = (float)((int)ROUND(value) + -1);
  if (fVar1 <= value) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 + 1.0;
  if (value <= fVar2) {
    fVar1 = fVar2;
  }
  if (0.0 <= value) {
    fVar1 = fVar2;
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100027a0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001d40((double)value);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f14 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#define _DAT_10015f18 (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#define _DAT_10015f1c (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#define _DAT_10015f2c (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#define _DAT_10015f30 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#define _DAT_10015f34 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#define _DAT_10015f38 (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#define _DAT_10015f3c (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#define _DAT_10015f40 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#define _DAT_10015f68 (*(double *)(((uintptr_t)pf_module_state + 0x67U)))
longdouble recovered_100027c0(float param_1)

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

  fVar1 = _DAT_10015f14;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_10015f18 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_10015f10;
        iVar10 = iVar10 + 1;
      } while (_DAT_10015f18 < param_1);
    }
    for (; param_1 < _DAT_10015f1c; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_10015f40 +
            fVar9 / _DAT_10015f3c +
            fVar8 / _DAT_10015f38 +
            fVar7 / _DAT_10015f34 +
            fVar6 / _DAT_10015f30 +
            fVar5 / _DAT_10015f2c +
            fVar4 / _DAT_10015f28 +
            fVar3 / _DAT_10015f24 + (fVar1 * fVar2) / _DAT_10015f20 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_10015f68;
  }
  return (longdouble)fVar1;
}

#undef _DAT_10015f10
#undef _DAT_10015f14
#undef _DAT_10015f18
#undef _DAT_10015f1c
#undef _DAT_10015f20
#undef _DAT_10015f24
#undef _DAT_10015f28
#undef _DAT_10015f2c
#undef _DAT_10015f30
#undef _DAT_10015f34
#undef _DAT_10015f38
#undef _DAT_10015f3c
#undef _DAT_10015f40
#undef _DAT_10015f68

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#define local_14 (*(undefined4 *)(frame + 28))
undefined4 recovered_100028f0(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_10015f90
#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f44 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#define _DAT_10015f48 (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#define _DAT_10015f4c (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
float recovered_10002940(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_10015f70 < value; value = value + (float)_DAT_10015f78) {
  }
  for (; value < (float)_DAT_10015f80; value = value + (float)_DAT_10015f88) {
  }
  fVar1 = value * value;
  return ((fVar1 * fVar1 * fVar1) / _DAT_10015f4c +
         (fVar1 * fVar1) / _DAT_10015f48 + fVar1 / _DAT_10015f44 + 1.0) * value;
}

#undef _DAT_10015f44
#undef _DAT_10015f48
#undef _DAT_10015f4c
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f50 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#define _DAT_10015f54 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#define _DAT_10015f58 (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x6fU)))
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x77U)))
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x7fU)))
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x87U)))
float recovered_100029e0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_10015f70 < value; value = value + (float)_DAT_10015f78) {
  }
  for (; value < (float)_DAT_10015f80; value = value + (float)_DAT_10015f88) {
  }
  fVar1 = value * value;
  return (fVar1 * fVar1 * fVar1) / _DAT_10015f58 +
         (fVar1 * fVar1) / _DAT_10015f54 + fVar1 * _DAT_10015f50 + 1.0;
}

#undef _DAT_10015f50
#undef _DAT_10015f54
#undef _DAT_10015f58
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002a80(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (-value <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002aa0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000303c:
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
    if (param_3 <= uVar7) goto LAB_1000303c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002bf0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000318c:
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
    if (param_3 <= uVar7) goto LAB_1000318c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f60 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
double recovered_10002d40(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;

  pbVar6 = (byte *)text;
  while( true ) {
    bVar7 = *pbVar6;
    if ((4 < bVar7 - 9) && (bVar7 != 0x20)) break;
    pbVar6 = pbVar6 + 1;
  }
  pbVar6 = pbVar6 + ((bVar7 - 0x2b & 0xfd) == 0);
  uVar5 = (uint)CONCAT11(*pbVar6,bVar7);
  bVar7 = *pbVar6 - 0x30U;
  fVar2 = 0.0;
  if (bVar7 < 10) {
    fVar2 = 0.0;
    do {
      fVar2 = fVar2 * _DAT_10015f60 + (float)(int)((uVar5 >> 8) - 0x30);
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
  }
  if ((char)(uVar5 >> 8) == '.') {
    pbVar8 = pbVar6 + 1;
    uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
    pbVar6 = pbVar6 + 1;
    if (9 < (byte)(*pbVar8 - 0x30U)) goto LAB_1000326a;
    fVar3 = 0.0;
    fVar4 = 1.0;
    do {
      fVar3 = fVar3 * _DAT_10015f60 + (float)(int)((uVar5 >> 8) - 0x30);
      fVar4 = fVar4 * _DAT_10015f60;
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
    fVar3 = fVar3 / fVar4;
  }
  else {
LAB_1000326a:
    fVar3 = 0.0;
    if (9 < bVar7) {
      fVar2 = 0.0;
      if (end != (char **)0x0) {
        *end = text;
      }
      goto LAB_10003324;
    }
  }
  fVar3 = fVar3 + fVar2;
  if ((uVar5 >> 8 | 0x20) == 0x65) {
    iVar9 = 1;
    if (pbVar6[1] == 0x2b) {
      pbVar8 = pbVar6 + 2;
    }
    else if (pbVar6[1] == 0x2d) {
      pbVar8 = pbVar6 + 2;
      iVar9 = -1;
    }
    else {
      pbVar8 = pbVar6 + 1;
    }
    uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
    bVar7 = *pbVar8 - 0x30U;
    if (bVar7 < 10) {
      iVar10 = 0;
      do {
        iVar10 = ((uVar5 >> 8) - 0x30) + iVar10 * 10;
        pbVar1 = pbVar8 + 1;
        uVar5 = (uint)CONCAT11(*pbVar1,(char)uVar5);
        pbVar8 = pbVar8 + 1;
      } while ((byte)(*pbVar1 - 0x30U) < 10);
      if (bVar7 < 10) {
        iVar10 = iVar10 * iVar9;
        pbVar6 = pbVar8;
        if (iVar10 < 1) {
          if (iVar10 < 0) {
            do {
              fVar3 = fVar3 * _DAT_10015f10;
              iVar10 = iVar10 + 1;
            } while (iVar10 != 0);
          }
        }
        else {
          uVar11 = iVar10 + 1;
          do {
            fVar3 = fVar3 + fVar3;
            uVar11 = uVar11 - 1;
          } while (1 < uVar11);
        }
      }
    }
  }
  if (end != (char **)0x0) {
    *end = (char *)pbVar6;
  }
  fVar2 = -fVar3;
  if ((char)uVar5 != '-') {
    fVar2 = fVar3;
  }
LAB_10003324:
  return (double)fVar2;
}

#undef _DAT_10015f10
#undef _DAT_10015f60

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002ee0(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10002d40(text,end);
  return (float)dVar1;
}


#undef DAT_100113c0
#define DAT_100113c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef _DAT_100113c0
#define _DAT_100113c0 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_10011ca9
#define str_10011ca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x948U)))
#undef str_10011cb0
#define str_10011cb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94fU)))
#undef str_10011cc1
#define str_10011cc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x960U)))
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
 * Address: 0x10002f10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002f10(char *out,uint capacity,char *format,void *args)

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

  if (capacity != 0) {
    *out = '\0';
  }
  local_18 = args;
  local_14 = 0;
  local_1c = capacity;
  local_20 = (byte *)out;
  do {
    bVar7 = *format;
    if (bVar7 != 0x25) {
      if (bVar7 == 0) {
        if (capacity != 0) {
          *local_20 = 0;
        }
        return local_14;
      }
      if (1 < local_1c) {
        *local_20 = bVar7;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = (byte *)format;
      goto LAB_10002f43;
    }
    bVar7 = format[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = (byte *)(format + 1);
      goto LAB_10002f43;
    }
    local_3c = (byte *)(format + 2);
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_10003022;
          goto LAB_10002ff7;
        }
        break;
      }
      format = format + 1;
      bVar7 = *local_3c;
      local_3c = local_3c + 1;
    }
    do {
      bVar7 = format[1];
      local_3c = (byte *)(format + 1);
      format = (char *)local_3c;
    } while ((byte)(bVar7 - 0x30U) < 10);
    if (bVar7 == 0x2e) {
LAB_10002ff7:
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
LAB_10003022:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_10003091;
    default:
      cVar8 = '\0';
      goto LAB_10003091;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_10003091;
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
LAB_10003091:
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
        goto LAB_10003298;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10003298:
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
        abStack_c5[iVar11 + 1] = str_10011cc1[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003680;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_10003676;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10002f43;
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
        goto LAB_100034b7;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_100034b7;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_100034b7:
      pcVar12 = str_10011cb0;
      if (*local_3c != 0x58) {
        pcVar12 = str_10011cc1;
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
LAB_10002f43:
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
          abStack_c5[iVar11 + 1] = str_10011cc1[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003491;
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
LAB_10003491:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_100113c0;
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
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_100113c0;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_100113c0;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_100113c0;
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
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_100113c0);
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
        abStack_c5[iVar11 + 1] = str_10011cc1[uVar9 & 0xf];
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
LAB_10003224:
      break;
    case 0x73:
      pbVar5 = (byte *)str_10011ca9;
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
        goto LAB_10003224;
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
        goto LAB_100035c3;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_100035c3;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_100035c3:
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
        abStack_c5[iVar11 + 1] = str_10011cc1[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003680:
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
LAB_10003676:
      }
    }
    format = (char *)(local_3c + 1);
  } while( true );
}

#undef DAT_100113c0
#undef _DAT_100113c0
#undef str_10011ca9
#undef str_10011cb0
#undef str_10011cc1
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
int recovered_10003910(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002f10(buffer,capacity,format,(void *)args);
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
#undef DAT_1001207c
#define DAT_1001207c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd1bU)))
#undef DAT_10012080
#define DAT_10012080 (*(int * *)(((uintptr_t)pf_module_state + 0xd1fU)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003940(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&DAT_1001207c;
        if (DAT_1001207c != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_10012080 == (int *)0x0) {
          DAT_10012080 = piVar1;
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
    puVar2 = &DAT_1001207c;
    if (DAT_1001207c != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_10012080 != (int *)0x0) {
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
    puVar2 = &DAT_1001207c;
    if (DAT_1001207c != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_10012080 != (int *)0x0) {
      return;
    }
  }
  DAT_10012080 = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1001207c
#undef DAT_10012080
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
#undef DAT_10012084
#define DAT_10012084 (*(uint *)(((uintptr_t)pf_module_state + 0xd23U)))
#undef DAT_10012088
#define DAT_10012088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd27U)))
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
 * Address: 0x10003ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003ac0(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10012084 != 0) {
          DAT_10012084 = DAT_10012084 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10012084 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000f90(local_210,&DAT_10012088,DAT_10012084);
            uVar3 = DAT_10012084;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_10012084 = 0;
        }
        else {
          if (DAT_10012084 - 0x1ff < 0xfffffe00) {
            recovered_10000f90(local_210,&DAT_10012088,DAT_10012084);
            local_210[DAT_10012084] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_10012084 = 0;
          }
          pcVar1 = &DAT_10012088 + DAT_10012084;
          DAT_10012084 = DAT_10012084 + 1;
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
#undef DAT_10012084
#undef DAT_10012088
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_210

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0xd23U)))
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd27U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_204 (*(undefined1 (*)[512])(frame + 28))
void recovered_10003c60(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_10017080 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000f90(local_204,&DAT_10017084,DAT_10017080);
    uVar1 = DAT_10017080;
  }
  local_204[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_10017080 = 0;
  return;
}

#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_204

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0xd23U)))
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd27U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(code * *)(0x6840U))
#define local_208 (*(undefined1 (*)[512])(frame + 24))
void recovered_10003cf0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_10017080 != 0) {
    recovered_10000f90(local_208,&DAT_10017084,DAT_10017080);
    local_208[DAT_10017080] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_10017080 = 0;
  }
  return;
}

#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x947U)))
#define DAT_10016b62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x971U)))
#define local_148 (*(char (*)[320])(frame + 24))
void recovered_10003d80(undefined *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined *puVar2;

  format = &DAT_10016b62;
  if (param_1 != (undefined *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10016b38;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10003910(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10003ac0(local_148,iVar1);
  }
  return;
}

#undef DAT_10016b38
#undef DAT_10016b62
#undef local_148

#undef DAT_10011cf0
#define DAT_10011cf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98fU)))
#undef str_10011cd5
#define str_10011cd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x974U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

void recovered_10003de0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10001690(str_10011cd5);
  recovered_10003ac0(str_10011cd5,uVar1);
  uVar1 = recovered_10001690(&DAT_10011cf0);
  recovered_10003ac0(&DAT_10011cf0,uVar1);
  return;
}

#undef DAT_10011cf0
#undef str_10011cd5

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016c4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98fU)))
#define str_10016c4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x992U)))
void recovered_10003e30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10001690(str_10016c4f);
  recovered_10003ac0(str_10016c4f,uVar1);
  uVar1 = recovered_10001690(&DAT_10016c4c);
  recovered_10003ac0(&DAT_10016c4c,uVar1);
  return;
}

#undef DAT_10016c4c
#undef str_10016c4f

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0xd23U)))
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd27U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(code * *)(0x6840U))
#define _DAT_00006844 (*(code * *)(0x6844U))
#define local_210 (*(undefined1 (*)[512])(frame + 16))
bool recovered_10003e80(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_10017080 != 0) {
      recovered_10000f90(local_210,&DAT_10017084,DAT_10017080);
      local_210[DAT_10017080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_10017080 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)(param_1,param_2,param_3,param_4);
      return iVar1 != 0;
    }
  }
  return false;
}

#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10003f70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003f80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10003f90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016b62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x971U)))
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(code * *)(0x6834U))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(void * *)(frame + 20))
#define str_10016ce3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa26U)))
#define str_10016cf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa33U)))
#define str_10016cfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa41U)))
undefined4 * recovered_10003fa0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  void *dst;
  undefined4 uVar8;
  bool bVar9;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_100016c0((byte *)param_1,(byte *)str_10016ce3);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_100016c0((byte *)param_1,(byte *)str_10016cf0);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_100016c0((byte *)param_1,(byte *)str_10016cfe);
      if (iVar4 != 0) {
        puVar5 = recovered_10000ed0(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_10001220(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_100018a0((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_100018a0((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_100018a0((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_100018a0((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_100018a0((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_100018a0((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_100018a0((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_10003a70__4_((char *)(puVar5 + 1),0xf1,&DAT_10016b62,param_1);
          recovered_10001220(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_100018a0((char *)param_2,'w');
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
                  dst = recovered_10000f50((void *)puVar5[0x3f],uVar7);
                  if (dst == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_10017000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_1000430e;
                  }
                  puVar5[0x3f] = dst;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = dst;
                }
                else {
                  dst = (void *)puVar5[0x3f];
                }
                recovered_10000f90(dst,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x100042ec;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_10017000 = 2;
LAB_1000430e:
            recovered_10000f10(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x100042ec:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10004176;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_10000ed0(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_10001220(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_10003a70__4_((char *)(puVar5 + 1),0xf1,&DAT_10016b62,param_1);
    return puVar5;
  }
LAB_10004176:
  *(undefined4 *)PTR_DAT_10017000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_10016b62
#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_18
#undef local_1c
#undef str_10016ce3
#undef str_10016cf0
#undef str_10016cfe

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(code * *)(0x6838U))
undefined4 * recovered_10004320(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (param_3 == (int *)0x0) goto LAB_1000441d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10004403;
      }
    }
    *(undefined4 *)PTR_DAT_10017000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10004403:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10000f10((void *)param_3[0x3f]);
  }
  recovered_10000f10(param_3);
LAB_1000441d:
  puVar2 = recovered_10003fa0(param_1,param_2);
  return puVar2;
}

#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(code * *)(0x6838U))
undefined4 recovered_100043e0(int *param_1)

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
      *(undefined4 *)PTR_DAT_10017000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10000f10((void *)param_1[0x3f]);
  }
  recovered_10000f10(param_1);
  return uVar2;
}

#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

int recovered_100044b0(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;

  uVar2 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    if ((*param_4 == 0) && (param_4[0x43] == -1)) {
      uVar1 = param_4[0x42];
      uVar6 = param_4[0x40] - uVar1;
      if ((uint)param_4[0x40] < uVar1 || uVar6 == 0) {
        *(undefined1 *)(param_4 + 0x45) = 1;
      }
      else {
        uVar4 = 0xffffffff;
        if ((int)((ulonglong)(uint)param_2 * (ulonglong)(uint)param_3 >> 0x20) == 0) {
          uVar4 = param_3 * param_2;
        }
        uVar2 = uVar6;
        if (uVar4 <= uVar6) {
          uVar2 = uVar4;
        }
        recovered_10000f90(param_1,(void *)(uVar1 + param_4[0x3e]),uVar2);
        param_4[0x42] = param_4[0x42] + uVar2;
        if (uVar6 < uVar4) {
          *(undefined1 *)(param_4 + 0x45) = 1;
        }
        uVar2 = uVar2 / (uint)param_2;
      }
    }
    else {
      iVar3 = 0;
      iVar7 = param_2;
      puVar5 = param_1;
      do {
        do {
          uVar2 = recovered_100045b0(param_4);
          if (uVar2 == 0xffffffff) {
            return iVar3;
          }
          *param_1 = (char)uVar2;
          param_1 = param_1 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar3 = iVar3 + 1;
        param_1 = puVar5 + param_2;
        iVar7 = param_2;
        puVar5 = param_1;
      } while (iVar3 != param_3);
      uVar2 = param_3;
    }
  }
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x947U)))
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0xd23U)))
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd27U)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006840 (*(code * *)(0x6840U))
#define _DAT_00006844 (*(code * *)(0x6844U))
#define local_20c (*(undefined1 (*)[512])(frame + 20))
uint recovered_100045b0(int *param_1)

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
LAB_100045d7:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_10017080 != 0) {
      recovered_10000f90(local_20c,&DAT_10017084,DAT_10017080);
      local_20c[DAT_10017080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_10017080 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10016b38,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10001690((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_100045d7;
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

#undef DAT_10016b38
#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
int recovered_10004760(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000487e:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10003ac0((char *)param_1,uVar5);
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
      pvVar3 = recovered_10000f50((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_10017000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000487e;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001220((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10000f90((void *)(uVar4 + param_4[0x3f]),(void *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_10017000

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
undefined4 recovered_100048c0(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000489f;
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
LAB_1000489f:
  *(undefined4 *)PTR_DAT_10017000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10017000

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
undefined4 recovered_10004940(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_10017000

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(code * *)(0x6838U))
undefined4 recovered_10004970(int *param_1)

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
    *(undefined4 *)PTR_DAT_10017000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10004a20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10004a40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004a60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10004a80(uint param_1,int param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_0000683c (*(code * *)(0x683cU))
undefined4 recovered_10004ab0(int param_1)

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
  *(undefined4 *)PTR_DAT_10017000 = uVar2;
  return 0xffffffff;
}

#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000683c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xc9fU)))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(code * *)(0x6834U))
#define _DAT_00006838 (*(code * *)(0x6838U))
#define _DAT_0000683c (*(code * *)(0x683cU))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
undefined4 recovered_10004b20(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
  }
  else {
    recovered_10001220(&local_1c,0,0xc);
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
    *(undefined4 *)PTR_DAT_10017000 = uVar2;
  }
  return 0xffffffff;
}

#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_00006838
#undef _DAT_0000683c
#undef local_18
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(code * *)(0x6834U))
#define local_18 (*(uint *)(frame + 24))
#define local_1c (*(void * *)(frame + 20))
undefined4 recovered_10004c90(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *dst;
  uint uVar2;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_10001220(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      dst = recovered_10000ed0(local_18 + (local_18 == 0));
      if (dst == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_10000f90(dst,local_1c,local_18);
        uVar2 = local_18;
      }
      *param_2 = (int)dst;
      *param_3 = uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return 0;
}

#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef local_18
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(code * *)(0x6838U))
bool recovered_10004d60(int param_1,int param_2,int param_3)

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

#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004dd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004de0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004df0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004e10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10004e20(char *param_1,char param_2,int param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10004e50(int param_1,int param_2,int param_3)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016c72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9b5U)))
#define str_10016c75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b8U)))
#define str_10016c82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c5U)))
#define str_10016c8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9cfU)))
#define str_10016ca0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e3U)))
#define str_10016cae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f1U)))
#define str_10016cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa03U)))
#define str_10016ccc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0fU)))
#define str_10016cdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa20U)))
char * recovered_10004ea0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10016c72;
  default:
    return str_10016cdd;
  case 2:
    return str_10016c75;
  case 5:
    return str_10016c82;
  case 9:
    return str_10016c8c;
  case 0xc:
    return str_10016ca0;
  case 0xd:
    return str_10016cae;
  case 0x11:
    return str_10016cc0;
  case 0x16:
    return str_10016ccc;
  }
}

#undef DAT_10016c72
#undef str_10016c75
#undef str_10016c82
#undef str_10016c8c
#undef str_10016ca0
#undef str_10016cae
#undef str_10016cc0
#undef str_10016ccc
#undef str_10016cdd

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10004f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017284 (*(int *)(((uintptr_t)pf_module_state + 0xf27U)))
void recovered_10004f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10017284 = DAT_10017284 + 1;
  return;
}

#undef DAT_10017284

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004f40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10004f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

__attribute__((naked,returns_twice)) int recovered_10004f50(void *context){__asm__ volatile("movl 4(%esp),%eax; movl %ebx,0(%eax); movl %esi,4(%eax); movl %edi,8(%eax); movl %ebp,12(%eax); leal 4(%esp),%edx; movl %edx,16(%eax); movl (%esp),%edx; movl %edx,20(%eax); xorl %eax,%eax; ret");}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

__attribute__((naked,noreturn)) void recovered_10004f80(void *context,int value){__asm__ volatile("movl 4(%esp),%edx; movl 8(%esp),%eax; testl %eax,%eax; jnz 1f; movl $1,%eax; 1: movl 0(%edx),%ebx; movl 4(%edx),%esi; movl 8(%edx),%edi; movl 12(%edx),%ebp; movl 16(%edx),%esp; movl 20(%edx),%ecx; jmp *%ecx");}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10004fbd (*(uint8_t *)(0x10004fbdU))
#define DAT_10016d70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaa7U)))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined * *)(frame + 192))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_28 (*(undefined * *)(frame + 184))
#define local_2c (*(code * *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_44 (*(undefined4 *)(frame + 156))
void recovered_10004fb0(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005010;
  local_28 = &DAT_10016d70;
  local_20 = &DAT_10004fbd;
  local_40 = 1;
  recovered_100054d0(&local_44);
  recovered_10000e90();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10004fbd
#undef DAT_10016d70
#undef auStackY_cc
#undef auStack_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_40
#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10005010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005020(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005040(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0xf2bU)))
int recovered_10005040(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_10017288;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_10017288 = param_1;
  iVar1 = recovered_10005370(param_1);
  return iVar1;
}

#undef DAT_10017288

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_10005070(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ed0(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e90();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_100050a0(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000ed0(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e90();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xab7U)))
#define LAB_100050f4 (*(uint8_t *)(0x100050f4U))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_28 (*(undefined * *)(frame + 184))
#define local_2c (*(code * *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_44 (*(undefined4 *)(frame + 156))
void recovered_100050d0(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005010;
  local_28 = &DAT_10016d80;
  local_20 = &LAB_100050f4;
  local_40 = 1;
  recovered_100054d0(&local_44);
  recovered_10000f10(pointer);
  recovered_100054f0(&local_44);
  return;
}

#undef DAT_10016d80
#undef LAB_100050f4
#undef auStackY_cc
#undef auStack_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_40
#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016d90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac7U)))
#define LAB_10005174 (*(uint8_t *)(0x10005174U))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_28 (*(undefined * *)(frame + 184))
#define local_2c (*(code * *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_44 (*(undefined4 *)(frame + 156))
void recovered_10005150(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005010;
  local_28 = &DAT_10016d90;
  local_20 = &LAB_10005174;
  local_40 = 1;
  recovered_100054d0(&local_44);
  recovered_10000f10(pointer);
  recovered_100054f0(&local_44);
  return;
}

#undef DAT_10016d90
#undef LAB_10005174
#undef auStackY_cc
#undef auStack_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_40
#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016da0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad7U)))
#define LAB_100051f4 (*(uint8_t *)(0x100051f4U))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_28 (*(undefined * *)(frame + 184))
#define local_2c (*(code * *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_44 (*(undefined4 *)(frame + 156))
void recovered_100051d0(void *pointer,uint size)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005010;
  local_28 = &DAT_10016da0;
  local_20 = &LAB_100051f4;
  local_40 = 1;
  recovered_100054d0(&local_44);
  recovered_10000f10(pointer);
  recovered_100054f0(&local_44);
  return;
}

#undef DAT_10016da0
#undef LAB_100051f4
#undef auStackY_cc
#undef auStack_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_40
#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016db0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae7U)))
#define LAB_10005274 (*(uint8_t *)(0x10005274U))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_1c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_28 (*(undefined * *)(frame + 184))
#define local_2c (*(code * *)(frame + 180))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_44 (*(undefined4 *)(frame + 156))
void recovered_10005250(void *pointer,uint size)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005010;
  local_28 = &DAT_10016db0;
  local_20 = &LAB_10005274;
  local_40 = 1;
  recovered_100054d0(&local_44);
  recovered_10000f10(pointer);
  recovered_100054f0(&local_44);
  return;
}

#undef DAT_10016db0
#undef LAB_10005274
#undef auStackY_cc
#undef auStack_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_40
#undef local_44

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100052d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_100052e0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100052f0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005300(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 * recovered_10005310(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10000ed0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004fb0();
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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005350(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10000f10((void *)(param_1 + -0x1c));
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10005370(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017288 (*(void * *)(((uintptr_t)pf_module_state + 0xf2bU)))
void recovered_10005380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_10017288;
  if (DAT_10017288 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_10017288 + 8);
    DAT_10017288 = *(void **)((int)DAT_10017288 + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10000f10(pointer);
    }
  }
  return;
}

#undef DAT_10017288

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100053d0(int param_1,uchar *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uchar **)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005410(param_1 + -0x1c,param_2);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0xf2bU)))
#define DAT_1001728c (*(int * *)(((uintptr_t)pf_module_state + 0xf2fU)))
#define local_14 (*(int *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_20 (*(undefined4 *)(frame + 16))
void recovered_10005410(int in_ECX,uchar *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX_00;
  int in_ECX_00;
  undefined4 uVar1;
  uchar *in_EDX_01;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1001728c != (int *)0x0) {
    in_EDX_00 = *(byte **)in_ECX;
    in_ECX_01 = DAT_1001728c;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10005da0((int)in_ECX_01,in_EDX_00,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005560(local_14);
        in_ECX_00 = DAT_10017288;
        if (DAT_10017288 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10004fb0();
        }
        *(undefined1 *)(DAT_10017288 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005410(in_ECX_00,in_EDX_01);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}

#undef DAT_10017288
#undef DAT_1001728c
#undef local_14
#undef local_18
#undef local_1c
#undef local_20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0xf2bU)))
void recovered_10005490(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX_00;
  uchar *in_EDX;

  in_ECX_00 = DAT_10017288;
  if (DAT_10017288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004fb0();
  }
  *(undefined1 *)(DAT_10017288 + 0x18) = 1;
  *(undefined4 *)(in_ECX_00 + 0xc) = 0;
  *(undefined4 *)(in_ECX_00 + 0x10) = 0;
  *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005410(in_ECX_00,in_EDX);
}

#undef DAT_10017288

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001728c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf2fU)))
void recovered_100054d0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001728c;
  DAT_1001728c = param_1;
  return;
}

#undef DAT_1001728c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001728c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf2fU)))
void recovered_100054f0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1001728c;
  if (DAT_1001728c == param_1) {
    puVar2 = &DAT_1001728c;
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

#undef DAT_1001728c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005520(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar *in_EDX;

                    /* WARNING: Subroutine does not return */
  recovered_10005410(in_stack_00000004,in_EDX);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005530(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001728c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf2fU)))
#define in_stack_00000004 (*(int *)(frame + 68))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define uStack_24 (*(undefined4 *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 24))
void recovered_10005540(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1001728c != (undefined4 *)0x0) {
    DAT_1001728c = (undefined4 *)*DAT_1001728c;
  }
  recovered_10005560(in_stack_00000004);
  if (DAT_1001728c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1001728c;
      if (DAT_1001728c == puVar1) {
        DAT_1001728c[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_100055ab:
        puVar2[1] = uVar3;
        recovered_10004f40((int)puVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005540();
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_10005da0((int)DAT_1001728c,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_100055ab;
      }
      DAT_1001728c = (undefined4 *)*puVar2;
    } while (DAT_1001728c != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}

#undef DAT_1001728c
#undef in_stack_00000004
#undef uStack_20
#undef uStack_24
#undef uStack_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_1001728c (*(int * *)(((uintptr_t)pf_module_state + 0xf2fU)))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_18 (*(int *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 20))
void recovered_10005560(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1001728c != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1001728c;
      if (DAT_1001728c == piVar1) {
        DAT_1001728c[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_100055ab:
        piVar2[1] = iVar3;
        recovered_10004f40((int)piVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005540();
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_10005da0((int)DAT_1001728c,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_100055ab;
      }
      DAT_1001728c = (int *)*piVar2;
    } while (DAT_1001728c != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}

#undef DAT_1001728c
#undef local_14
#undef local_18
#undef local_1c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100055f0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005540();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10005610(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004fb0();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcffU)))
#define local_14 (*(int *)(frame + 28))
int recovered_10005630(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100056b0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100056b0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_10017060) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100056b0:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_10017060
#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005700(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e90();
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10005710(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10005720(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10005740(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10005770(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100057a0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100057c0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte recovered_100057e0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10005820(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10011370
#define DAT_10011370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_100113b0
#define DAT_100113b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_100116b0
#define DAT_100116b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef DAT_100116b8
#define DAT_100116b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357U)))
#undef DAT_100116c0
#define DAT_100116c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef _DAT_10011370
#define _DAT_10011370 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_100113b0
#define _DAT_100113b0 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_100116b0
#define _DAT_100116b0 (*(double *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef _DAT_100116b8
#define _DAT_100116b8 (*(double *)(((uintptr_t)pf_module_state + 0x357U)))
#undef _DAT_100116c0
#define _DAT_100116c0 (*(float *)(((uintptr_t)pf_module_state + 0x35fU)))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005840(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  longdouble lVar2;
  int iVar3;
  int iVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;

  lVar5 = (longdouble)param_1;
  if (!NAN(lVar5)) {
    if ((longdouble)_DAT_100116b0 < lVar5) {
      return (longdouble)_DAT_100116c0;
    }
    if (lVar5 < (longdouble)_DAT_100116b8) {
      return (longdouble)0;
    }
    uStack_8 = (uint)((ulonglong)param_1 >> 0x20);
    if ((~uStack_8 & 0x7ff00000) == 0) {
      bVar1 = lVar5 <= (longdouble)0;
      lVar5 = (longdouble)_DAT_100116c0;
      if (bVar1) {
        lVar5 = (longdouble)0;
      }
    }
    else {
      lVar6 = (longdouble)_DAT_10011370;
      iVar4 = 0;
      if (lVar6 < lVar5) {
        iVar4 = 0;
        do {
          lVar5 = lVar5 * lVar6;
          iVar4 = iVar4 + 1;
        } while (lVar6 < lVar5);
      }
      lVar6 = lVar5;
      if (lVar5 < (longdouble)_DAT_100113b0) {
        do {
          lVar6 = lVar6 * (longdouble)_DAT_10011370;
          iVar4 = iVar4 + 1;
        } while (lVar6 < (longdouble)_DAT_100113b0);
      }
      lVar2 = (longdouble)1;
      iVar3 = 0x20;
      lVar8 = lVar2;
      lVar5 = lVar2;
      lVar7 = lVar2;
      do {
        lVar8 = (lVar6 / lVar7) * lVar8;
        lVar5 = lVar5 + lVar8;
        lVar7 = lVar7 + lVar2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar4 != 0) {
        do {
          lVar5 = lVar5 * lVar5;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return lVar5;
      }
    }
  }
  return lVar5;
}

#undef DAT_10011370
#undef DAT_100113b0
#undef DAT_100116b0
#undef DAT_100116b8
#undef DAT_100116c0
#undef _DAT_10011370
#undef _DAT_100113b0
#undef _DAT_100116b0
#undef _DAT_100116b8
#undef _DAT_100116c0
#undef uStack_8

#undef DAT_10011370
#define DAT_10011370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_100113b0
#define DAT_100113b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_100116b0
#define DAT_100116b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef DAT_100116b8
#define DAT_100116b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357U)))
#undef DAT_100116c0
#define DAT_100116c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef _DAT_10011370
#define _DAT_10011370 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_100113b0
#define _DAT_100113b0 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_100116b0
#define _DAT_100116b0 (*(double *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef _DAT_100116b8
#define _DAT_100116b8 (*(double *)(((uintptr_t)pf_module_state + 0x357U)))
#undef _DAT_100116c0
#define _DAT_100116c0 (*(float *)(((uintptr_t)pf_module_state + 0x35fU)))
#define uStack_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005970(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;

  if (!NAN(param_1)) {
    fVar3 = _DAT_100116c0;
    if (((float)_DAT_100116b0 < param_1) || (fVar3 = 0.0, param_1 < (float)_DAT_100116b8))
    goto LAB_10005a9d;
    uStack_10 = (uint)((ulonglong)(double)param_1 >> 0x20);
    if ((~uStack_10 & 0x7ff00000) == 0) {
      bVar1 = param_1 <= 0.0;
      param_1 = _DAT_100116c0;
      if (bVar1) {
        param_1 = 0.0;
      }
    }
    else {
      iVar6 = 0;
      fVar3 = param_1;
      if (_DAT_10011370 < param_1) {
        iVar6 = 0;
        do {
          param_1 = param_1 * _DAT_10011370;
          iVar6 = iVar6 + 1;
          fVar3 = param_1;
        } while (_DAT_10011370 < param_1);
      }
      for (; fVar3 < _DAT_100113b0; fVar3 = fVar3 * _DAT_10011370) {
        iVar6 = iVar6 + 1;
      }
      param_1 = 1.0;
      iVar5 = 0x20;
      fVar2 = param_1;
      fVar4 = param_1;
      do {
        fVar2 = (fVar3 / fVar4) * fVar2;
        param_1 = param_1 + fVar2;
        fVar4 = fVar4 + 1.0;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar6 != 0) {
        do {
          param_1 = param_1 * param_1;
          iVar6 = iVar6 + -1;
          fVar3 = param_1;
        } while (iVar6 != 0);
        goto LAB_10005a9d;
      }
    }
  }
  fVar3 = param_1;
LAB_10005a9d:
  return (longdouble)fVar3;
}

#undef DAT_10011370
#undef DAT_100113b0
#undef DAT_100116b0
#undef DAT_100116b8
#undef DAT_100116c0
#undef _DAT_10011370
#undef _DAT_100113b0
#undef _DAT_100116b0
#undef _DAT_100116b8
#undef _DAT_100116c0
#undef uStack_10

#undef DAT_10011370
#define DAT_10011370 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_100113b0
#define DAT_100113b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_100116b0
#define DAT_100116b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef DAT_100116b8
#define DAT_100116b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x357U)))
#undef DAT_100116c0
#define DAT_100116c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35fU)))
#undef _DAT_10011370
#define _DAT_10011370 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_100113b0
#define _DAT_100113b0 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_100116b0
#define _DAT_100116b0 (*(double *)(((uintptr_t)pf_module_state + 0x34fU)))
#undef _DAT_100116b8
#define _DAT_100116b8 (*(double *)(((uintptr_t)pf_module_state + 0x357U)))
#undef _DAT_100116c0
#define _DAT_100116c0 (*(float *)(((uintptr_t)pf_module_state + 0x35fU)))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005ab0(longdouble param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  longdouble lVar2;
  int iVar3;
  int iVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;

  lVar5 = (longdouble)(double)param_1;
  if (!NAN(lVar5)) {
    if ((longdouble)_DAT_100116b0 < lVar5) {
      return (longdouble)_DAT_100116c0;
    }
    if (lVar5 < (longdouble)_DAT_100116b8) {
      return (longdouble)0;
    }
    uStack_8 = (uint)((ulonglong)(double)param_1 >> 0x20);
    if ((~uStack_8 & 0x7ff00000) == 0) {
      bVar1 = lVar5 <= (longdouble)0;
      lVar5 = (longdouble)_DAT_100116c0;
      if (bVar1) {
        lVar5 = (longdouble)0;
      }
    }
    else {
      lVar6 = (longdouble)_DAT_10011370;
      iVar4 = 0;
      if (lVar6 < lVar5) {
        iVar4 = 0;
        do {
          lVar5 = lVar5 * lVar6;
          iVar4 = iVar4 + 1;
        } while (lVar6 < lVar5);
      }
      lVar6 = lVar5;
      if (lVar5 < (longdouble)_DAT_100113b0) {
        do {
          lVar6 = lVar6 * (longdouble)_DAT_10011370;
          iVar4 = iVar4 + 1;
        } while (lVar6 < (longdouble)_DAT_100113b0);
      }
      lVar2 = (longdouble)1;
      iVar3 = 0x20;
      lVar8 = lVar2;
      lVar5 = lVar2;
      lVar7 = lVar2;
      do {
        lVar8 = (lVar6 / lVar7) * lVar8;
        lVar5 = lVar5 + lVar8;
        lVar7 = lVar7 + lVar2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar4 != 0) {
        do {
          lVar5 = lVar5 * lVar5;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return lVar5;
      }
    }
  }
  return lVar5;
}

#undef DAT_10011370
#undef DAT_100113b0
#undef DAT_100116b0
#undef DAT_100116b8
#undef DAT_100116c0
#undef _DAT_10011370
#undef _DAT_100113b0
#undef _DAT_100116b0
#undef _DAT_100116b8
#undef _DAT_100116c0
#undef uStack_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005be0
 */

longdouble recovered_10005be0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#define _DAT_10015f50 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
double recovered_10005c00(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10001c90(value);
  if ((double)_DAT_10015f10 <= value - dVar2) {
    dVar1 = 1.0;
  }
  else {
    if ((double)_DAT_10015f50 < value - dVar2) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar1 + dVar2;
}

#undef _DAT_10015f10
#undef _DAT_10015f50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 28))
ulonglong recovered_10005c50(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_1000590d;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_1000590d;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_1000590d;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_1000590d;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_1000590d:
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005d90(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005c50(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x317U)))
#define DAT_10017060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcffU)))
#define local_11 (*(char *)(frame + 79))
#define local_18 (*(uint *)(frame + 72))
#define local_19 (*(char *)(frame + 71))
#define local_20 (*(uint *)(frame + 64))
#define local_24 (*(uint *)(frame + 60))
#define local_28 (*(byte * *)(frame + 56))
#define local_2c (*(byte * *)(frame + 52))
#define local_30 (*(byte * *)(frame + 48))
#define local_34 (*(uint *)(frame + 44))
#define local_38 (*(uint *)(frame + 40))
#define local_3c (*(uint *)(frame + 36))
#define local_40 (*(uint *)(frame + 32))
#define local_44 (*(uint *)(frame + 28))
#define local_48 (*(byte * *)(frame + 24))
#define local_4c (*(byte * *)(frame + 20))
undefined4 recovered_10005da0(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_10006120((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10005b40;
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
LAB_10005b40:
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
    if (0x1f < uVar5) goto LAB_10005be8;
LAB_10005cd9:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10005bf0;
LAB_10005ce4:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10005cd9;
LAB_10005be8:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10005ce4;
LAB_10005bf0:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_10005d0f:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_10016110 + local_38 * 4) * local_20;
      pbVar9 = recovered_10006120(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_10005d0f;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_10005d0f;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_10005d0f;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_10017060) goto LAB_10005ceb;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_10005d0f;
    }
  }
LAB_10005ceb:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10005b40;
}

#undef DAT_10016110
#undef DAT_10017060
#undef local_11
#undef local_18
#undef local_19
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_48
#undef local_4c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte * recovered_10006120(uint in_ECX,int *in_EDX)

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
    goto LAB_10005e05;
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
    goto LAB_10005e05;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_10005d5d_caseD_5;
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
LAB_10005e05:
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
switchD_10005d5d_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006230
 */

int recovered_10006230(char *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_1000629a;
  }
  else {
    iVar1 = recovered_10001410((int)param_1,((uintptr_t)pf_module_state + 0x653U),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if ((*param_1 == 'B') && (param_1[1] == 'M')) {
    return 2;
  }
  if ((0xd < param_2) && (iVar1 = recovered_10001410((int)param_1,((uintptr_t)pf_module_state + 0xa4fU),9), iVar1 == 0)) {
    return 4;
  }
LAB_1000629a:
  uVar2 = recovered_100062c0((byte *)param_1,param_2);
  return (uVar2 & 0xff) * 3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_100062c0(byte *in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (in_EDX < 0x12) {
    return 0;
  }
  if (((0x19 < in_EDX) &&
      (iVar4 = recovered_10001410((int)(in_ECX + (in_EDX - 0x12)),((uintptr_t)pf_module_state + 0xa66U),0x11), iVar4 == 0)) &&
     ((in_ECX + in_EDX)[-1] == 0)) {
    return CONCAT31((int3)((uint)(in_ECX + in_EDX) >> 8),1);
  }
  bVar1 = in_ECX[1];
  if (bVar1 < 2) {
    bVar2 = in_ECX[2];
    uVar7 = (uint)bVar2;
    if (((byte)(bVar2 - 0xb) < 0xfe && (byte)(bVar2 - 4) < 0xfd) && bVar2 != 0xb) {
      return 0;
    }
    if (*(short *)(in_ECX + 0xc) == 0) {
      return 0;
    }
    if (*(short *)(in_ECX + 0xe) == 0) {
      return 0;
    }
    uVar3 = *(ushort *)(in_ECX + 5);
    if (bVar1 != 0 || uVar3 == 0) {
      uVar5 = (uint)in_ECX[0x10];
      if (bVar1 == 1) {
        if (uVar3 == 0) {
          return 0;
        }
        uVar6 = in_ECX[7] - 0xf;
        if (0x11 < uVar6) {
          return 0;
        }
        if ((0x20203U >> (uVar6 & 0x1f) & 1) == 0) {
          return 0;
        }
      }
      if (7 < bVar2) {
        uVar7 = uVar7 - 8;
      }
      if (uVar7 == 3) {
        if ((uVar5 != 0x10) && (uVar5 != 8)) {
          return 0;
        }
      }
      else if (uVar7 == 2) {
        if (0x11 < uVar5 - 0xf) {
          return 0;
        }
        if ((0x20203U >> (uVar5 - 0xf & 0x1f) & 1) == 0) {
          return 0;
        }
      }
      else if (((uVar7 == 1) && (uVar5 != 8)) && (uVar5 != 0x10)) {
        return 0;
      }
      if (bVar1 == 1) {
        iVar4 = (in_ECX[7] + 7 >> 3) * (uint)uVar3;
      }
      else {
        iVar4 = 0;
      }
      uVar7 = *in_ECX + 0x12 + iVar4;
      return CONCAT31((int3)(uVar7 >> 8),uVar7 < in_EDX);
    }
  }
  return 0;
}


#undef DAT_10011e58
#define DAT_10011e58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf7U)))
#undef LAB_100085d9
#define LAB_100085d9 (*(uint8_t *)(0x100085d9U))
#undef PTR_recovered_10005010_10012004
#define PTR_recovered_10005010_10012004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_20c (*(undefined1 (*)[128])(frame + 20))
#define local_174 (*(uint *)(frame + 172))
#define local_170 (*(uint ************ *)(frame + 176))
#define local_16c (*(uint *)(frame + 180))
#define local_168 (*(int *)(frame + 184))
#define local_164 (*(uint ************ *)(frame + 188))
#define local_160 (*(uint *)(frame + 192))
#define local_15c (*(uint *********** *)(frame + 196))
#define local_158 (*(uint *)(frame + 200))
#define local_154 (*(char * *)(frame + 204))
#define local_150 (*(uint ************ *)(frame + 208))
#define local_14c (*(uint *********** *)(frame + 212))
#define local_148 (*(uint ************ *)(frame + 216))
#define local_144 (*(uint *********** *)(frame + 220))
#define local_140 (*(int *)(frame + 224))
#define local_13c (*(int *)(frame + 228))
#define local_138 (*(void * *)(frame + 232))
#define local_134 (*(undefined4 *)(frame + 236))
#define local_130 (*(undefined4 *)(frame + 240))
#define local_12c (*(uint ************ *)(frame + 244))
#define local_128 (*(uint ******* *)(frame + 248))
#define local_124 (*(uint *)(frame + 252))
#define local_120 (*(uint *)(frame + 256))
#define local_11c (*(uint *)(frame + 260))
#define local_118 (*(uint ************* *)(frame + 264))
#define local_114 (*(uint *********** *)(frame + 268))
#define local_110 (*(uint ************ *)(frame + 272))
#define local_108 (*(uint *********** *)(frame + 280))
#define local_104 (*(uint ************* *)(frame + 284))
#define local_100 (*(uint ************* *)(frame + 288))
#define local_fc (*(uint * *)(frame + 292))
#define local_f8 (*(uint ************ *)(frame + 296))
#define local_f4 (*(void ** *)(frame + 300))
#define local_f0 (*(uint ************ *)(frame + 304))
#define local_ec (*(undefined4 *)(frame + 308))
#define local_e8 (*(uint ************ *)(frame + 312))
#define local_e4 (*(uint * *)(frame + 316))
#define local_e0 (*(uint *********** *)(frame + 320))
#define local_dc (*(uint *********** *)(frame + 324))
#define local_d8 (*(undefined4 *)(frame + 328))
#define local_d4 (*(uint ********** *)(frame + 332))
#define local_d0 (*(uint ********** *)(frame + 336))
#define local_cc (*(undefined4 *)(frame + 340))
#define local_c8 (*(void * *)(frame + 344))
#define local_c4 (*(undefined4 *)(frame + 348))
#define local_c0 (*(undefined4 *)(frame + 352))
#define local_bc (*(void * *)(frame + 356))
#define local_b8 (*(int *)(frame + 360))
#define local_b4 (*(undefined4 *)(frame + 364))
#define local_b0 (*(uint ************ *)(frame + 368))
#define local_ac (*(uint ************ *)(frame + 372))
#define local_a8 (*(void * *)(frame + 376))
#define local_a4 (*(uint ******* *)(frame + 380))
#define local_a0 (*(uint ************ *)(frame + 384))
#define local_9c (*(uint *********** *)(frame + 388))
#define local_98 (*(uint ************ *)(frame + 392))
#define local_94 (*(uint ************ *)(frame + 396))
#define local_90 (*(uint ************* *)(frame + 400))
#define local_8c (*(uint *********** *)(frame + 404))
#define local_88 (*(uint ************ *)(frame + 408))
#define local_84 (*(uint *)(frame + 412))
#define local_80 (*(undefined4 *)(frame + 416))
#define local_7c (*(undefined4 *)(frame + 420))
#define local_78 (*(undefined4 *)(frame + 424))
#define local_74 (*(undefined4 *)(frame + 428))
#define local_70 (*(undefined4 *)(frame + 432))
#define local_5c (*(undefined * *)(frame + 452))
#define local_58 (*(undefined * *)(frame + 456))
#define local_54 (*(undefined1 * *)(frame + 460))
#define local_50 (*(undefined1 * *)(frame + 464))
#define local_4c (*(undefined1 * *)(frame + 468))
#define local_40 (*(uint ************ *)(frame + 480))
#define local_3c (*(uint ************* *)(frame + 484))
#define local_38 (*(uint ********** *)(frame + 488))
#define local_34 (*(uint ************ *)(frame + 492))
#define local_30 (*(uint *)(frame + 496))
#define local_2c (*(uint *********** *)(frame + 500))
#define local_28 (*(uint ******* *)(frame + 504))
#define local_24 (*(uint ************ *)(frame + 508))
#define local_20 (*(uint ************ *)(frame + 512))
#define local_1c (*(uint ************ *)(frame + 516))
#define local_18 (*(uint ************ *)(frame + 520))
#define local_14 (*(undefined4 *)(frame + 524))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006440
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10006440(uint *******param_1,uint *******param_2,int *param_3)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uchar uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint ************ppppppppppppuVar9;
  int *piVar10;
  uint **********ppppppppppuVar11;
  uint ***********pppppppppppuVar12;
  char *pcVar13;
  uint ***********pppppppppppuVar14;
  byte bVar15;
  uint ************ppppppppppppuVar16;
  ushort *puVar17;
  uint uVar18;
  uint *******pppppppuVar19;
  uint uVar20;
  uint ************ppppppppppppuVar21;
  short sVar22;
  void *pvVar23;
  uint uVar24;
  uint *************pppppppppppppuVar25;
  int iVar26;
  uint ************ppppppppppppuVar27;
  uint *******pppppppuVar28;
  bool bVar29;
  undefined8 uVar30;

  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  recovered_100050d0((void *)param_3[2]);
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  recovered_100050d0((void *)0x0);
  local_4c = auStackY_20c + 0x80;
  local_28 = param_1;
  local_5c = PTR_recovered_10005010_10012004;
  local_58 = &DAT_10011e58;
  local_50 = &LAB_100085d9;
  local_54 = (undefined1 *)((int)(uintptr_t)(frame + 544) + -4);
  recovered_100054d0(&local_74);
  if (param_2 == (uint *******)0x0 || param_1 == (uint *******)0x0) goto LAB_10006aee;
  local_2c = (uint ***********)(param_3 + 2);
  if ((uint *******)0x7 < param_2) {
    local_70 = 0xffffffff;
    iVar7 = recovered_10001410((int)param_1,((uintptr_t)pf_module_state + 0x653U),8);
    if (iVar7 != 0) goto LAB_10006517;
    pppppppuVar19 = (uint *******)0x4;
    do {
      pppppppuVar28 = pppppppuVar19;
      pppppppuVar19 = (uint *******)((int)pppppppuVar28 * 2);
    } while (pppppppuVar28 < param_2);
    local_70 = 0xffffffff;
    local_a8 = recovered_10005070((uint)pppppppuVar28);
    recovered_100050d0((void *)0x0);
    pppppppuVar19 = (uint *******)0x0;
    do {
      *(undefined1 *)((int)local_a8 + (int)pppppppuVar19) =
           *(undefined1 *)((int)param_1 + (int)pppppppuVar19);
      pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
    } while (param_2 != pppppppuVar19);
    local_108 = (uint ***********)0x0;
    local_104 = (uint *************)0x0;
    local_100 = (uint *************)0x0;
    local_fc = (uint *)0x0;
    local_f8 = (uint ************)0x0;
    local_f4 = (void **)0x0;
    local_f0 = (uint ************)0x0;
    local_ec = (uint *)((uint)PF_PART1(local_ec, 3) << 0x18);
    local_e8 = (uint ************)0x0;
    local_e4 = (uint *)0x0;
    recovered_100050d0((void *)0x0);
    local_e0 = (uint ***********)0x0;
    local_dc = (uint ***********)0x0;
    local_d8 = 0;
    recovered_100050d0((void *)0x0);
    local_d4 = (uint **********)0x0;
    local_d0 = (uint **********)0x0;
    local_cc = 0;
    recovered_100050d0((void *)0x0);
    local_c8 = (void *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    recovered_100050d0((void *)0x0);
    local_bc = (void *)0x0;
    local_b8 = 0;
    local_b4 = 0;
    recovered_100050d0((void *)0x0);
    recovered_100050d0((void *)0x0);
    recovered_100050d0((void *)0x0);
    recovered_100050d0((void *)0x0);
    local_70 = 0x10;
    iVar7 = recovered_10001410((int)local_a8,((uintptr_t)pf_module_state + 0x653U),8);
    if (iVar7 == 0) {
      if ((uint *******)0x13 < param_2) {
        pcVar13 = (char *)0x8;
        local_1c = (uint ************)0x0;
LAB_1000737a:
        uVar18 = *(uint *)((int)local_a8 + (int)pcVar13);
        pppppppuVar19 =
             (uint *******)
             (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
        ppppppppppppuVar21 = (uint ************)(pcVar13 + 8);
        if ((uint *******)((int)param_2 - (int)ppppppppppppuVar21) < pppppppuVar19 + 1)
        goto LAB_100069e6;
        local_2c = (uint ***********)(pcVar13 + (int)local_a8 + 4);
        ppppppppppppuVar9 = (uint ************)((int)local_a8 + (int)ppppppppppppuVar21);
        local_20 = (uint ************)((int)pppppppuVar19 + (int)ppppppppppppuVar21);
        local_28 = *(uint ********)((int)local_a8 + (int)local_20);
        uVar18 = recovered_10010b60(0,(byte *)local_2c,4);
        local_18 = ppppppppppppuVar9;
        if (pppppppuVar19 != (uint *******)0x0) {
          uVar18 = recovered_10010b60(uVar18,(byte *)ppppppppppppuVar9,(uint)pppppppuVar19);
        }
        if (uVar18 != ((uint)local_28 >> 0x18 | ((uint)local_28 & 0xff0000) >> 8 |
                       ((uint)local_28 & 0xff00) << 8 | (int)local_28 << 0x18)) goto LAB_100069e6;
        local_28 = pppppppuVar19;
        local_24 = ppppppppppppuVar21;
        if ((char)local_ec == '\0') {
          local_70 = 0x11;
          iVar26 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa5cU),4);
          local_14 = (uint ************)0x0;
          iVar7 = local_b8;
          if ((local_28 != (uint *******)0xd) || (iVar26 != 0)) goto joined_r0x10007abd;
          pppppppppppuVar12 = *local_18;
          local_108 = (uint ***********)
                      ((uint)pppppppppppuVar12 >> 0x18 | ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                       ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
          pppppppppppuVar12 = local_18[1];
          local_104 = (uint *************)
                      ((uint)pppppppppppuVar12 >> 0x18 | ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                       ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
          bVar15 = *(byte *)(local_18 + 2);
          local_100 = (uint *************)(uint)bVar15;
          local_14 = (uint ************)0x0;
          local_fc = (uint *)(uint)*(byte *)((int)local_18 + 9);
          local_f8 = (uint ************)(uint)*(byte *)((int)local_18 + 10);
          local_f4 = (void **)(uint)*(byte *)((int)local_18 + 0xb);
          local_f0 = (uint ************)(uint)*(byte *)(local_18 + 3);
          local_ec = (uint *)CONCAT31(PF_PART3(local_ec, 1),1);
          if ((local_108 == (uint ************)0x0) ||
             ((local_104 == (uint *************)0x0 ||
              (local_14 = (uint ************)0x0, (uint *)0x6 < local_fc))))
          goto joined_r0x10007abd;
          if ((0x55U >> ((uint)local_fc & 0x1f) & 1) == 0) {
            if (local_fc != (uint *)0x3) goto joined_r0x10007abd;
            bVar29 = bVar15 == 8;
          }
          else {
            bVar29 = (bVar15 - 8 & 0xf7) == 0;
          }
          local_14 = (uint ************)0x0;
          if ((((!bVar29) || (*(byte *)((int)local_18 + 10) != 0)) ||
              (*(byte *)((int)local_18 + 0xb) != 0)) || (1 < *(byte *)(local_18 + 3)))
          goto joined_r0x10007abd;
        }
        else {
          local_70 = 0x12;
          iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa7dU),4);
          if (iVar7 == 0) {
            if (((local_28 != (uint *******)0x8) || (((uint)local_1c & 1) != 0)) ||
               (PF_PART1(local_ec, 2) != '\0')) goto LAB_100069e6;
            PF_PART3(local_ec, 0) = CONCAT12(1,(undefined2)local_ec);
            pppppppppppuVar12 = *local_18;
            local_e8 = (uint ************)
                       ((uint)pppppppppppuVar12 >> 0x18 | ((uint)pppppppppppuVar12 & 0xff0000) >> 8
                        | ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
          }
          else {
            local_70 = 0x13;
            iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa82U),4);
            if (iVar7 == 0) {
              if ((local_28 != (uint *******)0x1a) || (PF_PART1(local_ec, 2) != '\x01')) goto LAB_100069e6;
              local_80 = 0;
              local_7c = 0;
              local_78 = 0;
              pppppppppppuVar12 = local_18[1];
              local_9c = (uint ***********)
                         ((uint)pppppppppppuVar12 >> 0x18 |
                          ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                          ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
              pppppppppppuVar12 = local_18[2];
              local_98 = (uint ************)
                         ((uint)pppppppppppuVar12 >> 0x18 |
                          ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                          ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
              pppppppppppuVar12 = local_18[3];
              local_94 = (uint ************)
                         ((uint)pppppppppppuVar12 >> 0x18 |
                          ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                          ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
              pppppppppppuVar12 = local_18[4];
              local_90 = (uint *************)
                         ((uint)pppppppppppuVar12 >> 0x18 |
                          ((uint)pppppppppppuVar12 & 0xff0000) >> 8 |
                          ((uint)pppppppppppuVar12 & 0xff00) << 8 | (int)pppppppppppuVar12 << 0x18);
              local_8c = (uint ***********)(uint)*(byte *)(local_18 + 6);
              local_88 = (uint ************)(uint)*(byte *)((int)local_18 + 0x19);
              local_84 = CONCAT31(PF_PART3(local_84, 1),~(byte)local_1c & local_b8 == 0);
              local_2c = local_8c;
              local_14 = local_88;
              if (((((local_9c == (uint ************)0x0) ||
                    (((local_98 == (uint ************)0x0 || (local_108 < local_94)) ||
                     ((uint ************)((int)local_108 - (int)local_94) < local_9c)))) ||
                   ((local_104 < local_90 ||
                    ((uint *******)((int)local_104 - (int)local_90) < local_98)))) ||
                  (2 < *(byte *)(local_18 + 6))) || (1 < *(byte *)((int)local_18 + 0x19))) {
                recovered_100050d0((void *)0x0);
                goto LAB_100069e6;
              }
              local_70 = 0x14;
              recovered_10010c50((int *)&local_bc,&local_9c);
              recovered_100050d0((void *)0x0);
            }
            else {
              local_70 = 0x15;
              iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa87U),4);
              if (iVar7 == 0) {
                if (local_28 == (uint *******)0x0) goto LAB_100069e6;
                local_14 = (uint ************)0x0;
                iVar7 = local_b8;
                if ((uint *******)0x300 < local_28) goto joined_r0x10007abd;
                pppppppppppuVar12 = (uint ***********)&local_dc;
                pppppppppppuVar14 = (uint ***********)&local_e0;
                if (local_28 != (uint *******)(((uint)local_28 / 3) * 3)) goto joined_r0x10007abd;
              }
              else {
                local_70 = 0x17;
                iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa8cU),4);
                if (iVar7 != 0) {
                  local_70 = 0x18;
                  iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa91U),4);
                  if (iVar7 == 0) {
                    local_1c = (uint ************)0x1;
                    if (local_28 != (uint *******)0x0) {
                      local_9c = (uint ***********)local_18;
                      local_98 = (uint ************)local_28;
                      local_70 = 0x19;
                      recovered_10010e40((int *)&local_c8,&local_9c);
                      if ((local_b8 != 0) &&
                         (*(char *)((int)local_bc + local_b8 * 0x28 + -0x10) == '\x01')) {
                        local_70 = 0x1a;
                        recovered_10010e40((int *)((int)local_bc + local_b8 * 0x28 + -0xc),&local_9c
                                          );
                      }
                      local_e4 = (uint *)((int)local_e4 + (int)local_28);
                    }
                  }
                  else {
                    local_70 = 0x1b;
                    iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa96U),4);
                    if (iVar7 != 0) {
                      local_70 = 0x1d;
                      iVar7 = recovered_10001410((int)local_2c,((uintptr_t)pf_module_state + 0xa61U),4);
                      if (iVar7 != 0) {
                        if (((uint)*local_2c & 0x20) != 0) goto LAB_1000735f;
                        goto LAB_100069e6;
                      }
                      if (local_28 != (uint *******)0x0) goto LAB_100069e6;
                      PF_PART2(local_ec, 0) = CONCAT11(1,(char)local_ec);
                      goto LAB_10006b22;
                    }
                    if (PF_PART1(local_ec, 2) != '\x01') goto LAB_100069e6;
                    if ((local_28 < (uint *******)0x5) || (local_b8 == 0)) goto LAB_10007ab4;
                    local_9c = (uint ***********)(local_18 + 1);
                    local_98 = (uint ************)(local_28 + -1);
                    local_70 = 0x1c;
                    recovered_10010ee0((int *)((int)local_bc + local_b8 * 0x28 + -0xc),&local_9c);
                  }
                  goto LAB_1000735f;
                }
                if ((local_28 != (uint *******)0x2 && local_fc == (uint *)0x0) ||
                   (local_28 != (uint *******)0x6 && local_fc == (uint *)0x2)) goto LAB_100069e6;
                if (local_fc == (uint *)0x3) {
                  pppppppppppuVar12 = &local_d0;
                  pppppppppppuVar14 = &local_d4;
                  if ((uint *******)((uint)local_dc / 3) < local_28) goto LAB_100069e6;
                }
                else {
                  local_14 = (uint ************)0x0;
                  iVar7 = local_b8;
                  if (local_fc == (uint *)0x4) goto joined_r0x10007abd;
                  pppppppppppuVar12 = &local_d0;
                  pppppppppppuVar14 = &local_d4;
                  if (local_fc == (uint *)0x6) goto joined_r0x10007abd;
                }
              }
              *pppppppppppuVar12 = (uint **********)0x0;
              local_70 = 0x16;
              recovered_1000e5d0((int *)pppppppppppuVar14,(int)*pppppppppppuVar14,
                                 (undefined1 *)local_18,(char *)((int)local_28 + (int)local_18));
            }
          }
        }
LAB_1000735f:
        pcVar13 = (char *)((int)(local_28 + 1) + (int)local_24);
        if (param_2 < local_20 + 4) goto LAB_10006b22;
        goto LAB_1000737a;
      }
LAB_10006b22:
      if ((char)local_ec != '\x01') goto LAB_100069e6;
      local_14 = (uint ************)0x0;
      iVar7 = local_b8;
      if ((PF_PART1(local_ec, 1) != '\x01') || (local_e4 == (uint *)0x0)) goto joined_r0x10007abd;
      if ((local_fc == (uint *)0x3) && (local_dc == (uint ***********)0x0)) goto LAB_100069e6;
      if (PF_PART1(local_ec, 2) == '\x01') {
        if (local_e8 == (uint ************)0x0) goto LAB_100069e6;
        if (local_e8 <= (uint ************)(local_b8 - 1U)) {
LAB_10007ab4:
          local_14 = (uint ************)0x0;
          iVar7 = local_b8;
          goto joined_r0x10007abd;
        }
        iVar7 = local_b8 * 0x28;
        piVar10 = (int *)((int)local_bc + 0x20);
        do {
          if (*piVar10 == 0) goto LAB_100069e6;
          piVar10 = piVar10 + 10;
          iVar7 = iVar7 + -0x28;
        } while (iVar7 != 0);
      }
      recovered_100050d0((void *)0x0);
      local_9c = (uint ***********)0x0;
      local_98 = (uint ************)0x0;
      local_94 = (uint ************)0x0;
      local_90 = (uint *************)0x0;
      local_8c = (uint ***********)0x0;
      local_88 = (uint ************)0x0;
      local_84 = 0;
      local_80 = local_80 & 0xffff0000;
      recovered_100050d0((void *)0x0);
      if (local_fc == (uint *)0x0) {
        ppppppppppppuVar21 = (uint ************)0x0;
        if (local_d0 != (uint **********)0x0) {
          if (local_d0 != (uint **********)0x2) goto LAB_10007c9c;
          local_90 = (uint *************)
                     (uint)(ushort)(*(ushort *)local_d4 << 8 | *(ushort *)local_d4 >> 8);
          local_80 = CONCAT31(PF_PART3(local_80, 1),1);
        }
LAB_10007e40:
        local_38 = (uint **********)0x0;
        local_34 = (uint ************)0x0;
        local_30 = 0;
        local_164 = ppppppppppppuVar21;
        if ((PF_PART1(local_ec, 2) == '\x01') && (local_b8 != 0)) {
          local_70 = 0x1f;
          ppppppppppppuVar9 =
               (uint ************)
               recovered_10008760((uint *)&local_108,(uint *)&local_9c,(uint *)&local_38);
        }
        else {
          local_70 = 0x20;
          ppppppppppppuVar9 =
               (uint ************)
               recovered_10008b40((uint *)&local_108,(uint *)&local_c8,(uint *)&local_9c,
                                  (uint *)&local_38);
        }
        if ((char)ppppppppppppuVar9 == '\0') {
          ppppppppppuVar11 = local_38;
        }
        else {
          *param_3 = (int)local_108;
          param_3[1] = (int)local_104;
          param_3[3] = 0;
          recovered_100050d0((void *)param_3[2]);
          param_3[2] = (int)local_38;
          param_3[3] = (int)local_34;
          param_3[4] = local_30;
          ppppppppppuVar11 = (uint **********)0x0;
        }
        recovered_100050d0(ppppppppppuVar11);
        ppppppppppppuVar21 = local_164;
      }
      else {
        if (local_fc == (uint *)0x2) {
          ppppppppppppuVar21 = (uint ************)0x0;
          if (local_d0 != (uint **********)0x0) {
            if (local_d0 != (uint **********)0x6) goto LAB_10007c9c;
            local_8c = (uint ***********)
                       (uint)(ushort)(*(ushort *)local_d4 << 8 | *(ushort *)local_d4 >> 8);
            local_88 = (uint ************)
                       (uint)(ushort)(*(ushort *)((int)local_d4 + 2) << 8 |
                                     *(ushort *)((int)local_d4 + 2) >> 8);
            local_84 = (uint)(ushort)(*(ushort *)(local_d4 + 1) << 8 |
                                     *(ushort *)(local_d4 + 1) >> 8);
            PF_PART2(local_80, 0) = CONCAT11(1,(undefined1)local_80);
          }
          goto LAB_10007e40;
        }
        if (local_fc == (uint *)0x3) {
          if (local_dc == (uint ***********)0x0) {
LAB_10007c9c:
            ppppppppppppuVar21 = (uint ************)0x0;
            ppppppppppppuVar9 = (uint ************)0x0;
          }
          else {
            pppppppuVar19 = (uint *******)((uint)local_dc / 3);
            ppppppppppppuVar9 = (uint ************)0x0;
            ppppppppppppuVar21 = (uint ************)0x0;
            if ((uint)local_dc % 3 == 0) {
              ppppppppppppuVar21 = (uint ************)((int)pppppppuVar19 * 4);
              local_98 = (uint ************)0x0;
              if (ppppppppppppuVar21 == (uint ************)0x0) {
                ppppppppppppuVar21 = (uint ************)0x0;
                pppppppppppuVar12 = local_dc;
              }
              else {
                local_2c = local_dc;
                local_70 = 0x1e;
                local_28 = pppppppuVar19;
                local_14 = ppppppppppppuVar21;
                ppppppppppppuVar21 = recovered_10005070((uint)ppppppppppppuVar21);
                recovered_100050d0((void *)0x0);
                local_94 = local_14;
                local_98 = (uint ************)0x0;
                do {
                  *(char *)((int)ppppppppppppuVar21 + (int)local_98) = -1;
                  local_98 = (uint ************)((int)local_98 + 1);
                } while (local_98 < local_14);
                pppppppuVar19 = local_28;
                pppppppppppuVar12 = local_2c;
                local_9c = (uint ***********)ppppppppppppuVar21;
              }
              if ((uint ***********)0x2 < pppppppppppuVar12) {
                puVar17 = (ushort *)((int)ppppppppppppuVar21 + 2);
                pcVar13 = (char *)((int)local_e0 + 2);
                do {
                  *(char *)(puVar17 + -1) = pcVar13[-2];
                  *(char *)((int)puVar17 + -1) = pcVar13[-1];
                  *(char *)puVar17 = *pcVar13;
                  puVar17 = puVar17 + 2;
                  pcVar13 = pcVar13 + 3;
                  pppppppuVar19 = (uint *******)((int)pppppppuVar19 + -1);
                } while (pppppppuVar19 != (uint *******)0x0);
              }
              if (local_d0 != (uint **********)0x0) {
                ppppppppppuVar11 = (uint **********)0x0;
                do {
                  *(char *)((int)ppppppppppppuVar21 + (int)ppppppppppuVar11 * 4 + 3) =
                       *(char *)((int)local_d4 + (int)ppppppppppuVar11);
                  ppppppppppuVar11 = (uint **********)((int)ppppppppppuVar11 + 1);
                } while (ppppppppppuVar11 < local_d0);
              }
              goto LAB_10007e40;
            }
          }
        }
        else {
          ppppppppppppuVar21 = (uint ************)0x0;
          ppppppppppppuVar9 = (uint ************)0x0;
          if (local_d0 == (uint **********)0x0) goto LAB_10007e40;
        }
      }
      local_98 = (uint ************)0x0;
      local_14 = ppppppppppppuVar9;
      recovered_100050d0(ppppppppppppuVar21);
      iVar7 = local_b8;
    }
    else {
LAB_100069e6:
      local_14 = (uint ************)0x0;
      iVar7 = local_b8;
    }
joined_r0x10007abd:
    if (iVar7 != 0) {
      iVar26 = iVar7 * 0x28 + -8;
      local_b8 = iVar7;
      do {
        *(undefined4 *)((int)local_bc + iVar26) = 0;
        recovered_100050d0(*(void **)((int)local_bc + iVar26 + -4));
        iVar26 = iVar26 + -0x28;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_b8 = 0;
    recovered_100050d0(local_bc);
    local_c4 = 0;
    recovered_100050d0(local_c8);
    local_d0 = (uint **********)0x0;
    recovered_100050d0(local_d4);
    local_dc = (uint ***********)0x0;
    recovered_100050d0(local_e0);
    recovered_100050d0(local_a8);
    ppppppppppppuVar21 = local_14;
    goto LAB_10006af3;
  }
  if (param_2 < (uint *******)0x2) {
LAB_10006683:
    local_70 = 0xffffffff;
    uVar8 = recovered_100062c0((byte *)param_1,(uint)param_2);
    if ((char)uVar8 != '\0') {
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      recovered_100050d0((void *)param_3[2]);
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      recovered_100050d0((void *)0x0);
      local_70 = 0xffffffff;
      uVar8 = recovered_100062c0((byte *)param_1,(uint)param_2);
      if ((char)uVar8 != '\0') {
        local_20 = (uint ************)CONCAT31(PF_PART3(local_20, 1),*(char *)((int)param_1 + 1));
        local_24 = (uint ************)(uint)*(byte *)((int)param_1 + 2);
        local_144 = (uint ***********)(uint)*(ushort *)((int)param_1 + 3);
        local_138 = (void *)(uint)*(ushort *)((int)param_1 + 5);
        local_14 = (uint ************)(uint)*(byte *)((int)param_1 + 7);
        local_114 = (uint ***********)(uint)*(ushort *)(param_1 + 3);
        local_158 = (uint)*(ushort *)((int)param_1 + 0xe);
        local_160 = (uint)*(byte *)(param_1 + 4);
        local_174 = (uint)*(byte *)((int)param_1 + 0x11);
        local_170 = local_24;
        if ((uint ************)0x7 < local_24) {
          local_170 = local_24 + -2;
        }
        local_18 = (uint ************)((int)(uint)*(byte *)param_1 + 0x12);
        local_9c = (uint ***********)0x0;
        local_98 = (uint ************)0x0;
        local_94 = (uint ************)0x0;
        local_1c = (uint ************)local_114;
        if (*(char *)((int)param_1 + 1) == '\x01') {
          ppppppppppppuVar9 = (uint ************)(uint)*(byte *)param_1;
          if (param_2 < local_18) {
LAB_1000709a:
            local_18 = ppppppppppppuVar9;
            ppppppppppppuVar21 = (uint ************)0x0;
          }
          else {
            local_1c = (uint ************)((uint)((int)local_14 + 7) >> 3);
            local_a0 = (uint ************)((int)local_1c * (int)local_138);
            ppppppppppppuVar21 = (uint ************)0x0;
            if (local_a0 <= (uint ************)((int)param_2 - (int)local_18)) {
              ppppppppppppuVar9 = (uint ************)((int)local_138 * 4);
              if (local_138 == (void *)0x0) {
                ppppppppppppuVar27 = (uint ************)0x0;
              }
              else {
                local_70 = 4;
                local_20 = ppppppppppppuVar9;
                ppppppppppppuVar9 = recovered_10005070((uint)ppppppppppppuVar9);
                ppppppppppppuVar27 = local_98;
                if (local_98 != (uint ************)0x0) {
                  ppppppppppppuVar16 = (uint ************)0x0;
                  do {
                    *(char *)((int)ppppppppppppuVar9 + (int)ppppppppppppuVar16) =
                         *(char *)((int)local_9c + (int)ppppppppppppuVar16);
                    ppppppppppppuVar16 = (uint ************)((int)ppppppppppppuVar16 + 1);
                  } while (local_98 != ppppppppppppuVar16);
                }
                recovered_100050d0(local_9c);
                local_94 = local_20;
                local_9c = (uint ***********)ppppppppppppuVar9;
                ppppppppppppuVar9 = local_20;
              }
              while (ppppppppppppuVar27 < ppppppppppppuVar9) {
                *(char *)((int)local_9c + (int)ppppppppppppuVar27) = -1;
                ppppppppppppuVar27 = (uint ************)((int)local_98 + 1);
                local_98 = ppppppppppppuVar27;
              }
              if (local_138 != (void *)0x0) {
                puVar17 = (ushort *)((int)local_18 + (int)param_1);
                local_20 = (uint ************)((int)local_14 - 0xf);
                pvVar23 = (void *)0x0;
                do {
                  if ((char)local_14 == '\b') {
                    uVar1 = *puVar17;
                    *(char *)(local_9c + (int)pvVar23) = (char)uVar1;
                    *(char *)((int)local_9c + (int)pvVar23 * 4 + 1) = (char)uVar1;
                    ppppppppppppuVar21 = (uint ************)0x0;
                    *(char *)((int)local_9c + (int)pvVar23 * 4 + 2) = (char)*puVar17;
LAB_10006d6e:
                    ppppppppppppuVar21 =
                         (uint ************)CONCAT31((int3)((uint)ppppppppppppuVar21 >> 8),0xff);
                  }
                  else {
                    if (local_20 < (uint ************)0x2) {
                      uVar1 = *puVar17;
                      *(char *)(local_9c + (int)pvVar23) =
                           (char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                      ppppppppppppuVar21 =
                           (uint ************)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                      *(char *)((int)local_9c + (int)pvVar23 * 4 + 1) = (char)ppppppppppppuVar21;
                      *(char *)((int)local_9c + (int)pvVar23 * 4 + 2) =
                           (char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12);
                      goto LAB_10006d6e;
                    }
                    if (local_14 != (uint ************)0x20) {
                      ppppppppppppuVar9 = local_18;
                      if (local_14 == (uint ************)0x18) {
                        *(char *)(local_9c + (int)pvVar23) = (char)puVar17[1];
                        *(char *)((int)local_9c + (int)pvVar23 * 4 + 1) =
                             *(char *)((int)puVar17 + 1);
                        *(char *)((int)local_9c + (int)pvVar23 * 4 + 2) = (char)*puVar17;
                        goto LAB_10006d6e;
                      }
                      goto LAB_1000709a;
                    }
                    *(char *)(local_9c + (int)pvVar23) = (char)puVar17[1];
                    *(char *)((int)local_9c + (int)pvVar23 * 4 + 1) = *(char *)((int)puVar17 + 1);
                    *(char *)((int)local_9c + (int)pvVar23 * 4 + 2) = (char)*puVar17;
                    ppppppppppppuVar21 = (uint ************)(uint)*(byte *)((int)puVar17 + 3);
                  }
                  *(char *)((int)local_9c + (int)pvVar23 * 4 + 3) = (char)ppppppppppppuVar21;
                  pvVar23 = (void *)((int)pvVar23 + 1);
                  puVar17 = (ushort *)((int)puVar17 + (int)local_1c);
                } while (pvVar23 < local_138);
              }
              local_18 = (uint ************)((int)local_18 + (int)local_a0);
              goto LAB_10006e56;
            }
          }
        }
        else {
          ppppppppppppuVar21 = (uint ************)param_2;
LAB_10006e56:
          bVar15 = (byte)local_24;
          if (((local_114 == (uint ************)0x0) ||
              ((int)(ZEXT48(local_114) * (ulonglong)local_158 >> 0x20) == 0)) &&
             (local_12c = (uint ************)((int)local_114 * local_158),
             local_12c < (uint ************)0x40000000)) {
            local_38 = (uint **********)0x0;
            local_34 = (uint ************)0x0;
            local_30 = 0;
            if (local_12c != (uint ************)0x0) {
              local_1c = (uint ************)((int)local_12c * 4);
              local_70 = 5;
              ppppppppppuVar11 = recovered_10005070((uint)local_1c);
              ppppppppppppuVar9 = local_34;
              if (local_34 != (uint ************)0x0) {
                uVar18 = 0;
                do {
                  *(undefined1 *)((int)ppppppppppuVar11 + uVar18) =
                       *(undefined1 *)((int)local_38 + uVar18);
                  uVar18 = uVar18 + 1;
                } while (local_34 != (uint ************)uVar18);
              }
              recovered_100050d0(local_38);
              local_30 = (uint)local_1c;
              bVar15 = (byte)local_24;
              while (local_38 = ppppppppppuVar11, ppppppppppppuVar9 < local_1c) {
                *(undefined1 *)((int)ppppppppppuVar11 + (int)ppppppppppppuVar9) = 0;
                ppppppppppppuVar9 = (uint ************)((int)local_34 + 1);
                local_34 = ppppppppppppuVar9;
              }
            }
            local_1c = (uint ************)(local_160 + 7 >> 3);
            local_15c = (uint ***********)0x0;
            local_108 = (uint ***********)&local_15c;
            local_104 = &local_12c;
            local_100 = &local_170;
            local_fc = &local_160;
            local_f8 = &local_144;
            local_f4 = &local_138;
            local_f0 = &local_9c;
            local_ec = &local_174;
            local_e8 = &local_114;
            local_e4 = &local_158;
            local_e0 = &local_38;
            if (bVar15 < 8) {
              if (local_12c == (uint ************)0x0) {
                if (param_2 < local_18) goto LAB_1000711a;
              }
              else {
                if ((int)(ZEXT48(local_12c) * ZEXT48(local_1c) >> 0x20) != 0) {
LAB_1000711a:
                  ppppppppppppuVar21 = (uint ************)0x0;
                  goto LAB_10007170;
                }
                ppppppppppppuVar21 = (uint ************)0x0;
                if ((param_2 < local_18) ||
                   ((uint)((int)param_2 - (int)local_18) < (uint)((int)local_12c * (int)local_1c)))
                goto LAB_10007170;
                pppppppuVar19 = (uint *******)((int)param_1 + (int)local_18);
                ppppppppppppuVar9 = (uint ************)0x0;
                do {
                  local_70 = 6;
                  local_28 = pppppppuVar19;
                  local_14 = ppppppppppppuVar9;
                  uVar8 = recovered_1000ce30(&local_108,(ushort *)pppppppuVar19);
                  if ((char)uVar8 == '\0') goto LAB_1000710c;
                  ppppppppppppuVar9 = (uint ************)((int)local_14 + 1);
                  pppppppuVar19 = (uint *******)((int)local_28 + (int)local_1c);
                } while (ppppppppppppuVar9 < local_12c);
              }
            }
            else {
              ppppppppppppuVar21 = local_18;
              if (local_12c != (uint ************)0x0) {
                local_24 = (uint ************)((int)param_2 - 1);
                do {
                  if (param_2 <= ppppppppppppuVar21) goto LAB_1000711a;
                  ppppppppppppuVar9 = (uint ************)((int)ppppppppppppuVar21 + 1);
                  local_20 = (uint ************)
                             ((*(byte *)((int)param_1 + (int)ppppppppppppuVar21) & 0x7f) + 1);
                  local_18 = ppppppppppppuVar21;
                  if ((char)*(byte *)((int)param_1 + (int)ppppppppppppuVar21) < '\0') {
                    if ((uint ************)((int)param_2 - (int)ppppppppppppuVar9) < local_1c)
                    goto LAB_1000711a;
                    local_14 = (uint ************)((int)param_1 + (int)ppppppppppppuVar9);
                    local_18 = (uint ************)((int)ppppppppppppuVar9 + (int)local_1c);
                    do {
                      local_70 = 7;
                      uVar8 = recovered_1000ce30(&local_108,(ushort *)local_14);
                      if ((char)uVar8 == '\0') goto LAB_1000710c;
                      local_20 = (uint ************)((int)local_20 - 1);
                    } while (local_20 != (uint ************)0x0);
                    ppppppppppppuVar21 = local_18;
                  }
                  else {
                    local_14 = (uint ************)((int)local_24 - (int)ppppppppppppuVar21);
                    do {
                      ppppppppppppuVar21 = (uint ************)0x0;
                      if ((param_2 < ppppppppppppuVar9) || (local_14 < local_1c)) goto LAB_10007170;
                      local_70 = 8;
                      local_18 = ppppppppppppuVar9;
                      local_14 = (uint ************)((int)local_14 - (int)local_1c);
                      uVar8 = recovered_1000ce30(&local_108,
                                                 (ushort *)((int)param_1 + (int)ppppppppppppuVar9));
                      if ((char)uVar8 == '\0') goto LAB_1000710c;
                      ppppppppppppuVar21 = (uint ************)((int)local_18 + (int)local_1c);
                      local_20 = (uint ************)((int)local_20 - 1);
                      ppppppppppppuVar9 = ppppppppppppuVar21;
                    } while (local_20 != (uint ************)0x0);
                  }
                } while (local_15c < local_12c);
              }
            }
            *param_3 = (int)local_114;
            param_3[1] = local_158;
            ppppppppppppuVar21 =
                 (uint ************)CONCAT31((int3)((uint)ppppppppppppuVar21 >> 8),1);
            if (local_2c != &local_38) {
              param_3[3] = 0;
              recovered_100050d0((void *)param_3[2]);
              param_3[2] = (int)local_38;
              param_3[3] = (int)local_34;
              param_3[4] = local_30;
              local_38 = (uint **********)0x0;
              local_30 = 0;
            }
            goto LAB_10007170;
          }
          ppppppppppppuVar21 = (uint ************)0x0;
        }
        goto LAB_1000718a;
      }
    }
LAB_10006aee:
    ppppppppppppuVar21 = (uint ************)0x0;
    goto LAB_10006af3;
  }
LAB_10006517:
  if ((*(char *)param_1 != 'B') || (*(char *)((int)param_1 + 1) != 'M')) {
    if ((uint *******)0xd < param_2) {
      local_70 = 0xffffffff;
      iVar7 = recovered_10001410((int)param_1,((uintptr_t)pf_module_state + 0xa4fU),9);
      if (iVar7 == 0) {
        param_3[1] = 0;
        *param_3 = 0;
        param_3[3] = 0;
        recovered_100050d0((void *)param_3[2]);
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        recovered_100050d0((void *)0x0);
        if (param_2 < (uint *******)0x1e) goto LAB_10006aee;
        local_70 = 0xffffffff;
        iVar7 = recovered_10001410((int)param_1,((uintptr_t)pf_module_state + 0xa4fU),9);
        if ((iVar7 != 0) || (*(char *)((int)param_1 + 0xd) != '\0')) goto LAB_10006cf6;
        local_f4 = (void **)0x0;
        local_f0 = (uint ************)0x0;
        local_ec = (uint *)0x0;
        local_e8 = (uint ************)0x0;
        local_14 = (uint ************)((int)param_1 + 9);
        local_70 = 9;
        iVar7 = recovered_10001410((int)local_14,((uintptr_t)pf_module_state + 0xa78U),4);
        if (iVar7 == 0) {
          local_fc = (uint *)0x0;
          local_f8 = (uint ************)0x4;
          bVar29 = false;
LAB_1000791f:
          uVar18 = *(uint *)((int)param_1 + 0xe);
          local_108 = (uint ***********)
                      (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18);
          uVar18 = *(uint *)((int)param_1 + 0x12);
          local_104 = (uint *************)
                      (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18);
          uVar18 = *(uint *)((int)param_1 + 0x16);
          local_100 = (uint *************)
                      (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                      uVar18 << 0x18);
          local_110 = (uint ************)0x0;
          local_114 = (uint ***********)0x1a;
          ppppppppppppuVar21 = (uint ************)0x0;
          if (((local_108 != (uint ************)0x0) && (local_104 != (uint *************)0x0)) &&
             (local_100 < (uint *************)0x3)) {
            if (bVar29) {
              uVar18 = *(uint *)((int)param_1 + 0x1a);
              uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                       uVar18 << 0x18;
              local_110 = (uint ************)0x0;
              local_114 = (uint ***********)0x1e;
              if (((uVar18 != 0) && (uVar18 != 0x96)) && (uVar18 != 100)) {
                ppppppppppppuVar21 = (uint ************)0x0;
                goto LAB_10007f6b;
              }
            }
            local_110 = (uint ************)0x0;
            local_70 = 10;
            uVar30 = recovered_1000d040((int)param_1,(uint)param_2,(int)&local_114,(uint)&local_108)
            ;
            ppppppppppppuVar21 = (uint ************)0x0;
            if ((char)uVar30 != '\0') {
              local_38 = (uint **********)0x0;
              local_34 = (uint ************)0x0;
              local_30 = 0;
              local_14 = (uint ************)local_114;
              local_18 = local_110;
              local_20 = local_f8;
              while( true ) {
                ppppppppppppuVar21 = local_20;
                if (local_20 == (uint ************)0x4) {
                  if ((local_18 != (uint ************)0x0 ||
                       (uint)-(int)local_18 < (uint)(param_2 < local_14)) ||
                     ((uint)((int)param_2 - (int)local_14) < 4)) goto LAB_10007f54;
                  uVar18 = *(uint *)((int)param_1 + (int)local_14);
                  local_9c = (uint ***********)
                             (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                             uVar18 << 0x18);
                  local_98 = (uint ************)0x0;
                }
                else {
                  if ((local_18 != (uint ************)0x0 ||
                       (uint)-(int)local_18 < (uint)(param_2 < local_14)) ||
                     ((uint)((int)param_2 - (int)local_14) < 8)) goto LAB_10007f54;
                  uVar18 = *(uint *)((int)param_1 + (int)local_14);
                  uVar20 = *(uint *)((int)(param_1 + 1) + (int)local_14);
                  local_98 = (uint ************)
                             (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                             uVar18 << 0x18);
                  local_9c = (uint ***********)
                             (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                             uVar20 << 0x18);
                }
                bVar29 = CARRY4((uint)local_14,(uint)local_20);
                local_14 = (uint ************)((int)local_14 + (int)local_20);
                local_18 = (uint ************)((int)local_18 + (uint)bVar29);
                if (local_9c == (uint ************)0x0 && local_98 == (uint ************)0x0) break;
                if ((uint *******)(uint)(local_9c < param_2) <= local_98) goto LAB_10007f54;
                local_70 = 0xb;
                recovered_1000d2b0((int *)&local_38,&local_9c);
              }
              if (local_34 != (uint ************)0x0) {
                local_3c = local_104;
                local_1c = (uint ************)local_108;
                if (((local_108 == (uint ************)0x0) ||
                    ((int)(ZEXT48(local_108) * ZEXT48(local_104) >> 0x20) == 0)) &&
                   ((uint)((int)local_104 * (int)local_108) < 0x40000000)) {
                  local_9c = (uint ***********)((uint)local_9c & 0xffffff00);
                  local_70 = 0xc;
                  recovered_1000d350((int *)&local_144,(int)local_104 * (int)local_108 * 4,
                                     (undefined1 *)&local_9c);
                  if (local_34 == (uint ************)0x0) goto LAB_10008477;
                  local_154 = (char *)((int)local_1c * 4);
                  ppppppppppppuVar9 = local_34;
                  goto LAB_10007fed;
                }
              }
LAB_10007f54:
              ppppppppppppuVar21 = (uint ************)0x0;
              goto LAB_10007f56;
            }
          }
          goto LAB_10007f6b;
        }
        ppppppppppppuVar21 = (uint ************)0x0;
        ppppppppppppuVar9 = (uint ************)0x0;
        if (*(char *)local_14 == 'v') {
          ppppppppppppuVar9 = (uint ************)0x0;
          if ((byte)(*(byte *)((int)param_1 + 10) - 0x30U) < 10) {
            ppppppppppppuVar21 = (uint ************)0x0;
            ppppppppppppuVar9 = (uint ************)0x0;
            if ((byte)(*(byte *)((int)param_1 + 0xb) - 0x30U) < 10) {
              local_14 = (uint ************)(uint)*(byte *)(param_1 + 3);
              ppppppppppppuVar21 = (uint ************)0x0;
              ppppppppppppuVar9 = (uint ************)0x0;
              if ((byte)(*(byte *)(param_1 + 3) - 0x30U) < 10) {
                local_fc = (uint *)((int)local_14 +
                                   (uint)*(byte *)((int)param_1 + 10) * 100 +
                                   (uint)*(byte *)((int)param_1 + 0xb) * 10 + -0x14d0);
                local_f8 = (uint ************)((uint)((uint *)0xa < local_fc) * 4 + 4);
                bVar29 = (uint *)0x3 < local_fc;
                goto LAB_1000791f;
              }
            }
          }
        }
        goto LAB_10007f71;
      }
    }
    goto LAB_10006683;
  }
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  recovered_100050d0((void *)param_3[2]);
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  recovered_100050d0((void *)0x0);
  if (param_2 < (uint *******)0x1a) goto LAB_10006aee;
  if ((*(char *)param_1 != 'B') || (*(char *)((int)param_1 + 1) != 'M')) {
LAB_10006cf6:
    ppppppppppppuVar21 = (uint ************)0x0;
    goto LAB_10006af3;
  }
  uVar18 = *(uint *)((int)param_1 + 0xe);
  if (uVar18 != 0xc && uVar18 < 0x28) goto LAB_10006cf6;
  local_14 = *(uint *************)((int)param_1 + 10);
  if (uVar18 != 0xc) {
    ppppppppppppuVar21 = (uint ************)(uVar18 + 0xe);
    if (ppppppppppppuVar21 <= param_2) {
      ppppppppppppuVar9 = *(uint *************)((int)param_1 + 0x12);
      uVar20 = *(uint *)((int)param_1 + 0x16);
      local_24 = ppppppppppppuVar21;
      if (uVar20 != 0 && 0 < (int)ppppppppppppuVar9) {
        local_a0 = (uint ************)(uVar20 >> 0x1f);
        pppppppppppppuVar25 =
             (uint *************)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f));
        sVar22 = *(short *)((int)param_1 + 0x1a);
        local_20 = (uint ************)CONCAT22(PF_PART2(local_20, 2),*(undefined2 *)(param_1 + 7));
        local_18 = *(uint *************)((int)param_1 + 0x1e);
        local_1c = *(uint *************)((int)param_1 + 0x2e);
        if (uVar18 == 0x28) {
          if ((local_18 == (uint ************)0x6) || (local_18 == (uint ************)0x3)) {
            local_24 = (uint ************)((uint)(local_18 == (uint ************)0x6) * 4 + 0x42);
          }
          else {
            local_24 = (uint ************)0x36;
          }
        }
        goto LAB_100065e4;
      }
    }
    goto LAB_10006cf6;
  }
  ppppppppppppuVar9 = (uint ************)(uint)*(ushort *)((int)param_1 + 0x12);
  pppppppppppppuVar25 = (uint *************)(uint)*(ushort *)(param_1 + 5);
  sVar22 = *(short *)((int)param_1 + 0x16);
  local_20 = (uint ************)CONCAT22(PF_PART2(local_20, 2),*(undefined2 *)(param_1 + 6));
  local_1c = (uint ************)0x0;
  local_24 = (uint ************)0x1a;
  local_18 = (uint ************)0x0;
  local_a0 = (uint ************)0x0;
LAB_100065e4:
  pppppppuVar19 = (uint *******)((int)param_2 - (int)local_14);
  if (((param_2 < local_14 || pppppppuVar19 == (uint *******)0x0) || sVar22 != 1) ||
      (pppppppppppppuVar25 == (uint *************)0x0 || ppppppppppppuVar9 == (uint ************)0x0
      )) goto LAB_10006aee;
  local_40 = ppppppppppppuVar9;
  if (local_18 == (uint ************)0x0) {
    uVar20 = 0;
    ppppppppppppuVar21 = (uint ************)0x0;
    uVar24 = 0;
    pppppppuVar28 = (uint *******)0x0;
  }
  else {
    if ((local_18 != (uint ************)0x6) && (local_18 != (uint ************)0x3))
    goto LAB_10006aee;
    if (uVar18 < 0x34) {
      ppppppppppppuVar21 = (uint ************)0x0;
      local_a4 = pppppppuVar19;
      local_3c = pppppppppppppuVar25;
      if (param_2 < (uint *******)((uint)(local_18 == (uint ************)0x6) * 4 + 0x42))
      goto LAB_10006af3;
      uVar20 = *(uint *)((int)param_1 + 0x36);
      pppppppuVar28 = *(uint ********)((int)param_1 + 0x3a);
      uVar24 = *(uint *)((int)param_1 + 0x3e);
      if (local_18 == (uint ************)0x6) goto LAB_10007ba3;
    }
    else {
      uVar20 = *(uint *)((int)param_1 + 0x36);
      pppppppuVar28 = *(uint ********)((int)param_1 + 0x3a);
      uVar24 = *(uint *)((int)param_1 + 0x3e);
      ppppppppppppuVar21 = (uint ************)0x0;
      if (0x37 < uVar18) {
LAB_10007ba3:
        ppppppppppppuVar21 = *(uint *************)((int)param_1 + 0x42);
      }
    }
  }
  local_18 = (uint ************)((uint)local_20 & 0xffff);
  bVar3 = uVar20 != 0;
  bVar4 = pppppppuVar28 != (uint *******)0x0;
  bVar2 = local_18 != (uint ************)0x10;
  bVar29 = uVar24 != 0;
  local_124 = 0x1f;
  if (((bVar3 || bVar4) || bVar2) || bVar29) {
    local_124 = uVar24;
  }
  local_128 = (uint *******)0x3e0;
  if (((bVar3 || bVar4) || bVar2) || bVar29) {
    local_128 = pppppppuVar28;
  }
  local_120 = 0x7c00;
  if (((bVar3 || bVar4) || bVar2) || bVar29) {
    local_120 = uVar20;
  }
  local_108 = (uint ***********)0x0;
  local_104 = (uint *************)0x0;
  local_100 = (uint *************)0x0;
  if ((((local_18 == (uint ************)0x20) && (local_120 == 0)) &&
      (local_128 == (uint *******)0x0)) && (local_124 == 0)) {
    local_124 = 0xff;
    local_b0 = (uint ************)0xff000000;
    local_128 = (uint *******)0xff00;
    local_120 = 0xff0000;
    local_a4 = pppppppuVar19;
    local_3c = pppppppppppppuVar25;
LAB_10007d61:
    if ((int)(ZEXT48(local_40) * ZEXT48(local_18) >> 0x20) == 0) {
      uVar18 = (int)local_40 * (int)local_18 + 0x1fU >> 3 & 0x1ffffffc;
      if (((uVar18 != 0) && ((int)((ulonglong)uVar18 * ZEXT48(local_3c) >> 0x20) == 0)) &&
         ((local_16c = uVar18, (uint *******)(uVar18 * (int)local_3c) <= local_a4 &&
          (((int)(ZEXT48(local_40) * ZEXT48(local_3c) >> 0x20) == 0 &&
           ((uint)((int)local_40 * (int)local_3c) < 0x40000000)))))) {
        local_70 = 2;
        recovered_1000cd10((int *)&local_9c,(int)local_40 * (int)local_3c * 4);
        local_28 = (uint *******)((int)local_28 + (int)local_14);
        local_150 = (uint ************)((uint)local_18 >> 3);
        local_168 = (int)local_40 * 4;
        local_148 = (uint ************)0x0;
        local_154 = (char *)((int)local_18 + -1);
        local_14 = (uint ************)0x0;
        local_118 = (uint *************)0x0;
        local_11c = 0;
        do {
          pppppppppppppuVar25 = local_118;
          if ((char)local_a0 == '\0') {
            pppppppppppppuVar25 = (uint *************)(~(uint)local_118 + (int)local_3c);
          }
          local_ac = (uint ************)((int)pppppppppppppuVar25 * local_16c + (int)local_28);
          ppppppppppppuVar9 = (uint ************)0x0;
          local_a4 = (uint *******)0x2;
          ppppppppppppuVar21 = local_148;
          local_24 = local_ac;
          do {
            pppppppppppuVar12 = local_9c;
            pppppppuVar19 = local_128;
            local_20 = ppppppppppppuVar21;
            local_1c = ppppppppppppuVar9;
            switch((uintptr_t)(local_154)) {
            case 0x0:
              uVar18 = (uint)((*(byte *)((int)local_ac + ((uint)ppppppppppppuVar9 >> 3)) >>
                               ((byte)~(byte)ppppppppppppuVar9 & 7) & 1) != 0);
              break;
            default:
              if (local_18 == (uint ************)0x10) {
                pppppppppppuVar14 = (uint ***********)(uint)*(ushort *)local_24;
              }
              else {
                pppppppppppuVar14 = *local_24;
              }
              local_14c = pppppppppppuVar14;
              uVar18 = recovered_1000cda0((uint)pppppppppppuVar14,local_120);
              *(char *)((int)pppppppppppuVar12 + (int)local_20) = (char)uVar18;
              uVar18 = recovered_1000cda0((uint)pppppppppppuVar14,(uint)pppppppuVar19);
              ppppppppppppuVar21 = local_20;
              ((char *)((int)pppppppppppuVar12 + 1))[(int)local_20] = (char)uVar18;
              uVar18 = recovered_1000cda0((uint)pppppppppppuVar14,local_124);
              *(char *)((int)((int)pppppppppppuVar12 + 2) + (int)ppppppppppppuVar21) = (char)uVar18;
              if (local_b0 == (uint ************)0x0) {
                cVar6 = -1;
              }
              else {
                uVar18 = recovered_1000cda0((uint)local_14c,(uint)local_b0);
                cVar6 = (char)uVar18;
              }
              ((char *)((int)pppppppppppuVar12 + 3))[(int)local_20] = cVar6;
              local_11c = CONCAT31((int3)(local_11c >> 8),(byte)local_11c | cVar6 != '\0') &
                          0xffffff01;
              goto LAB_10008315;
            case 0x3:
              bVar15 = *(byte *)((int)local_ac + ((uint)ppppppppppppuVar9 >> 1));
              if (((uint)ppppppppppppuVar9 & 1) == 0) {
                uVar18 = (uint)(bVar15 >> 4);
              }
              else {
                uVar18 = bVar15 & 0xf;
              }
              break;
            case 0x7:
              uVar18 = (uint)*(byte *)((int)local_ac + (int)ppppppppppppuVar9);
              break;
            case 0x17:
              *(char *)((int)local_9c + (int)ppppppppppppuVar21) =
                   *(char *)((int)local_ac + (int)local_a4);
              ((char *)((int)local_9c + 1))[(int)ppppppppppppuVar21] =
                   ((char *)((int)local_ac - 1))[(int)local_a4];
              *(char *)((int)((int)local_9c + 2) + (int)ppppppppppppuVar21) =
                   *(char *)((int)((int)local_ac - 2U) + (int)local_a4);
              ((char *)((int)local_9c + 3))[(int)ppppppppppppuVar21] = -1;
              goto LAB_10008315;
            }
            if (local_104 <= uVar18 * 4 + 3) goto LAB_100085bc;
            local_70 = 3;
            recovered_10000f90((char *)((int)local_9c + (int)ppppppppppppuVar21),local_108 + uVar18,
                               4);
LAB_10008315:
            ppppppppppppuVar9 = (uint ************)((int)local_1c + 1);
            local_24 = (uint ************)((int)local_24 + (int)local_150);
            local_a4 = (uint *******)((int)local_a4 + 3);
            ppppppppppppuVar21 = local_20 + 1;
          } while (local_40 != ppppppppppppuVar9);
          local_118 = (uint *************)((int)local_118 + 1);
          local_148 = (uint ************)((int)local_148 + local_168);
          local_14 = (uint ************)CONCAT31((int3)((uint)local_148 >> 8),local_3c <= local_118)
          ;
        } while (local_118 != local_3c);
        if ((((local_18 == (uint ************)0x20) && (local_b0 != (uint ************)0x0)) &&
            ((local_11c & 1) == 0)) && ((uint *******)0x3 < local_98)) {
          pppppppuVar19 = (uint *******)0x3;
          do {
            *(char *)((int)local_9c + (int)pppppppuVar19) = -1;
            pppppppuVar19 = pppppppuVar19 + 1;
          } while (pppppppuVar19 < local_98);
        }
        *param_3 = (int)local_40;
        param_3[1] = (int)local_3c;
        if (local_2c == &local_9c) {
          local_14 = (uint ************)CONCAT31((int3)((uint)param_3 >> 8),1);
        }
        else {
          param_3[3] = 0;
          recovered_100050d0((void *)param_3[2]);
          ppppppppppppuVar21 = local_94;
          param_3[2] = (int)local_9c;
          param_3[3] = (int)local_98;
          param_3[4] = (int)local_94;
          local_9c = (uint ***********)0x0;
          local_94 = (uint ************)0x0;
          local_14 = (uint ************)CONCAT31((int3)((uint)ppppppppppppuVar21 >> 8),1);
        }
LAB_100085bc:
        local_98 = (uint ************)0x0;
        recovered_100050d0(local_9c);
        ppppppppppppuVar21 = local_14;
        goto LAB_10007db4;
      }
    }
    ppppppppppppuVar21 = (uint ************)0x0;
  }
  else {
    local_b0 = ppppppppppppuVar21;
    local_a4 = pppppppuVar19;
    local_3c = pppppppppppppuVar25;
    if ((ushort)local_20 < 9) {
      ppppppppppppuVar9 = (uint ************)(1 << ((byte)local_20 & 0x1f));
      if (local_1c != (uint ************)0x0) {
        ppppppppppppuVar9 = local_1c;
      }
      local_1c = (uint ************)((uVar18 != 0xc) + 3);
      ppppppppppppuVar21 = (uint ************)0x0;
      if ((int)(ZEXT48(ppppppppppppuVar9) * ZEXT48(local_1c) >> 0x20) == 0) {
        if (local_24 <= param_2) {
          if ((uint)((int)ppppppppppppuVar9 * (int)local_1c) <= (uint)((int)param_2 - (int)local_24)
             ) {
            local_9c = (uint ***********)CONCAT31(PF_PART3(local_9c, 1),0xff);
            local_70 = 1;
            local_20 = ppppppppppppuVar9;
            recovered_1000cc80((int *)&local_108,(int)ppppppppppppuVar9 * 4,(undefined1 *)&local_9c)
            ;
            local_20 = (uint ************)
                       ((int)local_20 + (uint)(local_20 == (uint ************)0x0));
            pcVar13 = (char *)((int)((int)local_24 + 2U) + (int)param_1);
            ppppppppppppuVar21 = (uint ************)0x0;
            do {
              *(char *)(local_108 + (int)ppppppppppppuVar21) = *pcVar13;
              *(char *)((int)local_108 + (int)ppppppppppppuVar21 * 4 + 1) = pcVar13[-1];
              *(char *)((int)local_108 + (int)ppppppppppppuVar21 * 4 + 2) = pcVar13[-2];
              ppppppppppppuVar21 = (uint ************)((int)ppppppppppppuVar21 + 1);
              pcVar13 = pcVar13 + (int)local_1c;
            } while (local_20 != ppppppppppppuVar21);
            goto LAB_10007d46;
          }
          goto LAB_10007db4;
        }
      }
    }
    else {
LAB_10007d46:
      ppppppppppppuVar21 = (uint ************)0x0;
      if ((char *)((int)local_18 - 1U) < (char *)0x20) {
        if ((0x80808089U >> ((int)local_18 - 1U & 0x1f) & 1) != 0) goto LAB_10007d61;
        goto LAB_10007db4;
      }
    }
    ppppppppppppuVar21 = (uint ************)0x0;
  }
LAB_10007db4:
  local_104 = (uint *************)0x0;
  pppppppppppuVar12 = local_108;
  goto LAB_10007194;
  while( true ) {
    if (((char)local_90 == '\x01') && (local_8c != (uint ***********)0x0)) {
      local_138 = (void *)0x0;
      local_134 = 0;
      local_130 = 0;
      local_70 = 0xe;
      uVar8 = recovered_1000d790((int)param_1,(uint)param_2,(int)&local_108,(uint *)&local_9c,
                                 (int *)&local_138);
      if ((char)uVar8 == '\0') {
        local_134 = 0;
        recovered_100050d0(local_138);
        goto LAB_100084f0;
      }
      local_a4 = (uint *******)local_98;
      if (local_98 != (uint ************)0x0) {
        local_b0 = (uint ************)local_9c;
        local_120 = (int)local_9c * 4;
        local_124 = local_84;
        local_150 = local_88;
        local_a0 = (uint ************)((int)((int)local_1c * local_84 + (int)local_88) * 4);
        local_40 = (uint ************)0x0;
        pppppppuVar19 = (uint *******)0x0;
        do {
          local_128 = pppppppuVar19;
          if ((-1 < (int)((int)pppppppuVar19 + local_124) && local_b0 != (uint ************)0x0) &&
              (int)((int)pppppppuVar19 + local_124) < (int)local_3c) {
            local_20 = local_a0;
            local_24 = local_40;
            ppppppppppppuVar9 = local_b0;
            ppppppppppppuVar27 = local_150;
            do {
              local_18 = ppppppppppppuVar9;
              local_14 = ppppppppppppuVar27;
              if ((int)ppppppppppppuVar27 < (int)local_1c && -1 < (int)ppppppppppppuVar27) {
                local_70 = 0xf;
                recovered_1000e000((byte *)((int)local_144 + (int)local_20),
                                   (byte *)((int)local_138 + (int)local_24));
              }
              local_24 = local_24 + 1;
              local_20 = local_20 + 1;
              ppppppppppppuVar27 = (uint ************)((int)local_14 + 1);
              ppppppppppppuVar9 = (uint ************)((int)local_18 + -1);
            } while (ppppppppppppuVar9 != (uint ************)0x0);
          }
          pppppppuVar19 = (uint *******)((int)local_128 + 1);
          local_40 = (uint ************)((int)local_40 + local_120);
          local_a0 = (uint ************)((int)local_a0 + (int)local_154);
        } while (pppppppuVar19 != local_a4);
      }
      local_134 = 0;
      recovered_100050d0(local_138);
    }
    ppppppppppppuVar9 = (uint ************)((int)local_ac - 1);
    if (ppppppppppppuVar9 == (uint ************)0x0) break;
LAB_10007fed:
    local_9c = (uint ***********)0x0;
    local_98 = (uint ************)0x0;
    local_94 = (uint ************)0x0;
    local_90 = (uint *************)CONCAT31(PF_PART3(local_90, 1),1);
    local_8c = (uint ***********)0xff;
    local_88 = (uint ************)0x0;
    local_84 = 0;
    local_7c = 0;
    local_80 = 0;
    local_70 = 0xd;
    local_ac = ppppppppppppuVar9;
    uVar5 = recovered_1000d3e0((int)param_1,(uint)param_2,(int)&local_108,
                               (uint)local_38[(int)ppppppppppppuVar9 * 2 + -2],
                               (int)local_38[(int)ppppppppppppuVar9 * 2 + -1],(uint)&local_9c);
    if (uVar5 == '\0') {
LAB_100084f0:
      ppppppppppppuVar21 = (uint ************)0x0;
      goto LAB_100084f2;
    }
  }
LAB_10008477:
  *param_3 = (int)local_1c;
  param_3[1] = (int)local_3c;
  ppppppppppppuVar21 = (uint ************)CONCAT31((int3)((uint)ppppppppppppuVar21 >> 8),1);
  if (local_2c != &local_144) {
    param_3[3] = 0;
    recovered_100050d0((void *)param_3[2]);
    param_3[2] = (int)local_144;
    param_3[3] = local_140;
    param_3[4] = local_13c;
    local_144 = (uint ***********)0x0;
    local_13c = 0;
  }
LAB_100084f2:
  local_140 = 0;
  recovered_100050d0(local_144);
LAB_10007f56:
  local_34 = (uint ************)0x0;
  recovered_100050d0(local_38);
LAB_10007f6b:
  ppppppppppppuVar9 = local_f0;
LAB_10007f71:
  recovered_100050d0(ppppppppppppuVar9);
  goto LAB_10006af3;
LAB_1000710c:
  ppppppppppppuVar21 = (uint ************)0x0;
LAB_10007170:
  local_34 = (uint ************)0x0;
  recovered_100050d0(local_38);
LAB_1000718a:
  local_98 = (uint ************)0x0;
  pppppppppppuVar12 = local_9c;
LAB_10007194:
  recovered_100050d0(pppppppppppuVar12);
LAB_10006af3:
  recovered_100054f0(&local_74);
  return (uint)ppppppppppppuVar21 & 0xffffff01;
}

#undef DAT_10011e58
#undef LAB_100085d9
#undef PTR_recovered_10005010_10012004
#undef auStackY_20c
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016e34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb3bU)))
#define LAB_1000b086 (*(uint8_t *)(0x1000b086U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_13c (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(uint * *)(frame + 316))
#define local_18 (*(byte * *)(frame + 312))
#define local_1c (*(byte * *)(frame + 308))
#define local_20 (*(int *)(frame + 304))
#define local_24 (*(byte * *)(frame + 300))
#define local_28 (*(int *)(frame + 296))
#define local_2c (*(uint *)(frame + 292))
#define local_30 (*(int *)(frame + 288))
#define local_34 (*(undefined4 * *)(frame + 284))
#define local_38 (*(uint *)(frame + 280))
#define local_3c (*(uint *)(frame + 276))
#define local_40 (*(uint *)(frame + 272))
#define local_44 (*(uint *)(frame + 268))
#define local_48 (*(uint *)(frame + 264))
#define local_4c (*(int *)(frame + 260))
#define local_50 (*(byte * *)(frame + 256))
#define local_54 (*(undefined4 *)(frame + 252))
#define local_58 (*(undefined4 *)(frame + 248))
#define local_5c (*(byte * *)(frame + 244))
#define local_60 (*(undefined4 * *)(frame + 240))
#define local_64 (*(int *)(frame + 236))
#define local_68 (*(byte * *)(frame + 232))
#define local_6c (*(byte * *)(frame + 228))
#define local_70 (*(byte * *)(frame + 224))
#define local_7c (*(undefined1 * *)(frame + 212))
#define local_80 (*(undefined1 * *)(frame + 208))
#define local_84 (*(undefined1 * *)(frame + 204))
#define local_88 (*(undefined * *)(frame + 200))
#define local_8c (*(undefined * *)(frame + 196))
#define local_a0 (*(undefined4 *)(frame + 176))
#define local_a4 (*(undefined4 *)(frame + 172))
uint recovered_10008760(uint *in_ECX,int in_EDX,int *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *extraout_ECX = 0;
  undefined4 *puVar5;
  undefined4 extraout_ECX_00 = 0;
  int iVar6;
  undefined4 *puVar7;
  byte *in_EDX_00;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *in_ECX_00;

  local_84 = (undefined1 *)((int)(uintptr_t)(frame + 336) + -4);
  local_7c = auStackY_13c + 0x80;
  uVar4 = *in_ECX;
  uVar10 = in_ECX[1];
  local_8c = PTR_recovered_10004fe0_10017004;
  local_88 = &DAT_10016e34;
  local_80 = &LAB_1000b086;
  local_28 = in_EDX;
  local_14 = in_ECX;
  recovered_100054d0(&local_a4);
  if ((uVar4 == 0) || ((int)((ulonglong)uVar4 * (ulonglong)uVar10 >> 0x20) == 0)) {
    uVar10 = uVar10 * uVar4;
    uVar4 = 0;
    if (uVar10 < 0x40000000) {
      uVar10 = uVar10 * 4;
      param_3[1] = 0;
      if ((uint)param_3[2] < uVar10) {
        local_a0 = 0xffffffff;
        pvVar2 = recovered_10005070(uVar10);
        pointer = (void *)*param_3;
        iVar1 = param_3[1];
        if (iVar1 != 0) {
          iVar6 = 0;
          do {
            *(undefined1 *)((int)pvVar2 + iVar6) = *(undefined1 *)((int)pointer + iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        recovered_100050d0(pointer);
        *param_3 = (int)pvVar2;
        param_3[2] = uVar10;
        uVar4 = param_3[1];
      }
      while (uVar4 < uVar10) {
        *(undefined1 *)(*param_3 + uVar4) = 0;
        uVar4 = param_3[1] + 1;
        param_3[1] = uVar4;
      }
      uVar10 = local_14[0x14];
      if (uVar10 == 0) {
LAB_1000ae36:
        local_50 = (byte *)0x0;
        local_4c = 0;
        local_48 = 0;
        local_a0 = 1;
        uVar4 = recovered_10008b40(local_14,local_14 + 0x10,local_28,(int *)&local_50);
        iVar1 = local_4c;
        if (((char)uVar4 == '\0') || (local_4c != param_3[1])) {
          pbVar3 = local_50;
LAB_1000b055:
          recovered_100050d0(pbVar3);
          uVar4 = 0;
          goto LAB_1000b06f;
        }
        param_3[1] = 0;
        recovered_100050d0((void *)*param_3);
        *param_3 = (int)local_50;
        param_3[1] = iVar1;
        param_3[2] = local_48;
        recovered_100050d0((void *)0x0);
        puVar9 = (undefined4 *)local_14[0x13];
        uVar10 = local_14[0x14];
        puVar5 = extraout_ECX;
      }
      else {
        puVar9 = (undefined4 *)local_14[0x13];
        puVar5 = puVar9 + uVar10 * 10;
        bVar8 = 0;
        puVar7 = puVar9;
        do {
          while ((bVar8 & 1) == 0) {
            bVar8 = *(byte *)(puVar7 + 6);
            puVar7 = puVar7 + 10;
            if (puVar7 == puVar5) {
              if (bVar8 == 0) goto LAB_1000ae36;
              goto LAB_1000aeba;
            }
          }
          puVar7 = puVar7 + 10;
          bVar8 = 1;
        } while (puVar7 != puVar5);
      }
LAB_1000aeba:
      uVar4 = CONCAT31((int3)((uint)puVar5 >> 8),1);
      if (uVar10 != 0) {
        local_60 = puVar9 + uVar10 * 10;
        do {
          local_38 = local_14[6];
          local_3c = local_14[5];
          local_40 = local_14[4];
          local_44 = local_14[3];
          local_48 = local_14[2];
          local_50 = (byte *)*puVar9;
          local_4c = puVar9[1];
          local_5c = (byte *)0x0;
          local_58 = 0;
          local_54 = 0;
          local_a0 = 2;
          local_34 = puVar9;
          local_30 = local_4c;
          local_18 = local_50;
          uVar4 = recovered_10008b40((uint *)&local_50,puVar9 + 7,local_28,(int *)&local_5c);
          if ((char)uVar4 == '\0') {
            pbVar3 = local_5c;
            goto LAB_1000b055;
          }
          local_2c = *local_14;
          local_24 = local_5c;
          puVar9 = local_34;
          if (local_30 != 0) {
            local_64 = (int)local_18 * 4;
            local_2c = local_2c << 2;
            local_20 = 0;
            local_1c = local_5c;
            do {
              if (local_18 != (byte *)0x0) {
                in_ECX_00 = (byte *)(puVar9[2] * 4 + *param_3 + (puVar9[3] + local_20) * local_2c);
                pbVar3 = local_18;
                in_EDX_00 = local_1c;
                do {
                  local_70 = pbVar3;
                  local_6c = in_ECX_00;
                  local_68 = in_EDX_00;
                  if (puVar9[5] == 0) {
                    local_a0 = 3;
                    recovered_10000f90(in_ECX_00,in_EDX_00,4);
                  }
                  else {
                    local_a0 = 4;
                    recovered_1000e000(in_ECX_00,in_EDX_00);
                  }
                  in_ECX_00 = local_6c + 4;
                  in_EDX_00 = local_68 + 4;
                  pbVar3 = local_70 + -1;
                  puVar9 = local_34;
                } while (pbVar3 != (byte *)0x0);
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + local_64;
            } while (local_20 != local_30);
          }
          recovered_100050d0(local_24);
          puVar9 = puVar9 + 10;
        } while (puVar9 != local_60);
        uVar4 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
      }
    }
  }
  else {
    uVar4 = 0;
  }
LAB_1000b06f:
  recovered_100054f0(&local_a4);
  return uVar4;
}

#undef DAT_10016e34
#undef LAB_1000b086
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_13c
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_58
#undef local_5c
#undef local_60
#undef local_64
#undef local_68
#undef local_6c
#undef local_70
#undef local_7c
#undef local_80
#undef local_84
#undef local_88
#undef local_8c
#undef local_a0
#undef local_a4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100169f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x87fU)))
#define DAT_10016a10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89bU)))
#define DAT_10016a2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8b7U)))
#define DAT_10016a48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d3U)))
#define DAT_10016b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90bU)))
#define DAT_10016e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb47U)))
#define LAB_1000c3d6 (*(uint8_t *)(0x1000c3d6U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_15c (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(undefined4 *)(frame + 348))
#define local_18 (*(uint * *)(frame + 344))
#define local_1c (*(uint * *)(frame + 340))
#define local_20 (*(uint * *)(frame + 336))
#define local_24 (*(uint * *)(frame + 332))
#define local_28 (*(uint *)(frame + 328))
#define local_2c (*(uint *)(frame + 324))
#define local_30 (*(uint * *)(frame + 320))
#define local_34 (*(uint * *)(frame + 316))
#define local_38 (*(uint * *)(frame + 312))
#define local_3c (*(uint *)(frame + 308))
#define local_40 (*(byte * *)(frame + 304))
#define local_44 (*(uint * *)(frame + 300))
#define local_48 (*(uint * *)(frame + 296))
#define local_4c (*(byte * *)(frame + 292))
#define local_50 (*(byte * *)(frame + 288))
#define local_54 (*(uint *)(frame + 284))
#define local_58 (*(byte * *)(frame + 280))
#define local_5c (*(uint * *)(frame + 276))
#define local_60 (*(undefined4 *)(frame + 272))
#define local_64 (*(uint * *)(frame + 268))
#define local_68 (*(void * *)(frame + 264))
#define local_6c (*(undefined4 *)(frame + 260))
#define local_70 (*(undefined4 *)(frame + 256))
#define local_74 (*(void * *)(frame + 252))
#define local_84 (*(undefined1 * *)(frame + 236))
#define local_88 (*(undefined1 * *)(frame + 232))
#define local_8c (*(undefined1 * *)(frame + 228))
#define local_90 (*(undefined * *)(frame + 224))
#define local_94 (*(undefined * *)(frame + 220))
#define local_a8 (*(undefined4 *)(frame + 200))
#define local_ac (*(undefined4 *)(frame + 196))
#define local_b4 (*(uint *)(frame + 188))
uint recovered_10008b40(uint *in_ECX,uint *in_EDX,int param_3,int *param_4)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  int iVar20;
  uint uVar21;
  uint *dst;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;

  local_8c = (undefined1 *)((int)(uintptr_t)(frame + 368) + -4);
  local_84 = auStackY_15c + 0x80;
  uVar22 = in_ECX[6];
  uVar23 = *in_ECX;
  local_94 = PTR_recovered_10004fe0_10017004;
  local_90 = &DAT_10016e40;
  local_88 = &LAB_1000c3d6;
  local_14 = in_EDX;
  recovered_100054d0(&local_ac);
  if (uVar22 == 0) {
    uVar22 = in_ECX[3];
    uVar21 = 0;
    if ((uVar22 < 7) && ((0x5dU >> (uVar22 & 0x1f) & 1) != 0)) {
      uVar21 = in_ECX[2] * *(int *)(&DAT_10016b00 + uVar22 * 4);
    }
    if (uVar23 == 0) {
      uVar22 = in_ECX[1];
      puVar9 = (uint *)0x0;
    }
    else {
      if (((int)((ulonglong)uVar23 * (ulonglong)uVar21 >> 0x20) != 0) ||
         (uVar22 = in_ECX[1], (int)((ulonglong)uVar23 * (ulonglong)uVar22 >> 0x20) != 0))
      goto LAB_1000b2fa;
      puVar9 = (uint *)(uVar21 * uVar23 + 7 >> 3);
    }
    local_38 = in_ECX + 1;
    local_24 = in_ECX;
    if (0x3fffffff < uVar22 * uVar23) goto LAB_1000b2fa;
    puVar12 = (uint *)(uVar22 * uVar23 * 4);
    puVar11 = (uint *)param_4[1];
    local_20 = puVar9;
    if (puVar12 < puVar11) {
      param_4[1] = (int)puVar12;
    }
    else if (puVar11 < puVar12) {
      if ((uint *)param_4[2] < puVar12) {
        local_a8 = 0xffffffff;
        pvVar6 = recovered_10005070((uint)puVar12);
        pvVar5 = (void *)*param_4;
        iVar25 = param_4[1];
        if (iVar25 != 0) {
          iVar20 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + iVar20) = *(undefined1 *)((int)pvVar5 + iVar20);
            iVar20 = iVar20 + 1;
          } while (iVar25 != iVar20);
        }
        recovered_100050d0(pvVar5);
        *param_4 = (int)pvVar6;
        param_4[2] = (int)puVar12;
        puVar11 = (uint *)param_4[1];
      }
      while (puVar11 < puVar12) {
        *(undefined1 *)(*param_4 + (int)puVar11) = 0;
        puVar11 = (uint *)(param_4[1] + 1);
        param_4[1] = (int)puVar11;
      }
    }
    local_74 = (void *)0x0;
    local_70 = 0;
    local_6c = 0;
    local_68 = (void *)0x0;
    local_64 = (uint *)0x0;
    local_60 = 0;
    local_5c = (uint *)0x0;
    local_a8 = 1;
    uVar7 = recovered_10010f80((int *)&local_74,(int *)local_14);
    if ((char)uVar7 == '\0') {
LAB_1000bdb2:
      uVar22 = 0;
      goto LAB_1000c397;
    }
    uVar22 = local_24[3];
    local_50 = (byte *)0x1;
    if ((((uVar22 < 7) && ((0x5dU >> (uVar22 & 0x1f) & 1) != 0)) &&
        (7 < *(int *)(&DAT_10016b00 + uVar22 * 4) * local_24[2])) &&
       (local_50 = (byte *)0x0, (0x5dU >> (uVar22 & 0x1f) & 1) != 0)) {
      local_50 = (byte *)(local_24[2] * *(int *)(&DAT_10016b00 + uVar22 * 4) + 7 >> 3);
    }
    local_54 = (int)local_20 + 1;
    local_a8 = 2;
    local_40 = recovered_10005070(local_54);
    recovered_100050d0((void *)0x0);
    puVar9 = (uint *)0xffffffff;
    do {
      (local_40 + 1)[(int)puVar9] = 0;
      puVar9 = (uint *)((int)puVar9 + 1);
    } while (local_20 != puVar9);
    if ((local_24[3] == 6) && (local_24[2] == 8)) {
      if (*local_38 == 0) {
LAB_1000b5e2:
        uVar22 = CONCAT31((int3)((uint)puVar12 >> 8),local_5c == local_64);
      }
      else {
        if ((local_5c <= (uint *)(-2 - (int)local_20)) &&
           ((uint *)((int)local_5c + local_54) <= local_64)) {
          local_1c = (uint *)local_40;
          local_a8 = 3;
          local_44 = (uint *)(-2 - (int)local_20);
          local_14 = (uint *)((int)local_5c + local_54);
          recovered_10000f90(local_40,(void *)((int)local_5c + (int)local_68),local_54);
          local_1c = (uint *)((int)local_1c + 1);
          local_5c = local_14;
          local_a8 = 4;
          uVar7 = recovered_10011080((uint)*local_40,(void *)*param_4,(int)local_1c,0,(uint)local_20
                                     ,4);
          if ((char)uVar7 != '\0') {
            if (1 < *local_38) {
              uVar22 = 1;
              local_14 = (uint *)0x0;
              do {
                if ((local_44 < local_5c) || (local_64 < (uint *)((int)local_5c + local_54)))
                goto LAB_1000b684;
                local_a8 = 5;
                local_28 = uVar22;
                local_24 = (uint *)((int)local_5c + local_54);
                recovered_10000f90(local_40,(void *)((int)local_5c + (int)local_68),local_54);
                local_5c = local_24;
                local_a8 = 6;
                uVar7 = recovered_10011080((uint)*local_40,
                                           (void *)(*param_4 + (int)local_14 + (int)local_20),
                                           (int)local_1c,*param_4 + (int)local_14,(uint)local_20,4);
                if ((char)uVar7 == '\0') goto LAB_1000b684;
                uVar22 = local_28 + 1;
                local_14 = (uint *)((int)local_14 + (int)local_20);
              } while (uVar22 < *local_38);
            }
            goto LAB_1000b5e2;
          }
        }
LAB_1000b684:
        uVar22 = 0;
      }
    }
    else {
      if (local_20 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
        puVar9 = (uint *)0x0;
      }
      else {
        local_a8 = 7;
        puVar11 = recovered_10005070((uint)local_20);
        recovered_100050d0((void *)0x0);
        puVar9 = (uint *)0x0;
        do {
          *(undefined1 *)((int)puVar11 + (int)puVar9) = 0;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while (local_20 != puVar9);
        local_a8 = 8;
        puVar9 = recovered_10005070((uint)local_20);
        recovered_100050d0((void *)0x0);
        puVar10 = (uint *)0x0;
        do {
          *(undefined1 *)((int)puVar9 + (int)puVar10) = 0;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (local_20 != puVar10);
      }
      if (*local_38 == 0) {
      }
      else {
        local_34 = (uint *)(-2 - (int)local_20);
        local_4c = local_40 + 1;
        local_3c = 0;
        local_2c = 0;
        local_18 = puVar11;
        puVar11 = (uint *)0x0;
        local_48 = puVar9;
        do {
          puVar9 = local_18;
          puVar12 = local_48;
          if (local_34 < local_5c) {
LAB_1000c37a:
            local_18 = puVar12;
            local_48 = puVar9;
            uVar22 = 0;
            puVar9 = local_18;
            puVar11 = local_48;
            goto switchD_1000bf45_caseD_1;
          }
          local_14 = (uint *)((int)local_5c + local_54);
          puVar9 = local_18;
          puVar12 = local_48;
          if (local_64 < local_14) goto LAB_1000c37a;
          local_a8 = 9;
          puVar9 = local_48;
          local_48 = local_18;
          local_1c = puVar11;
          local_18 = puVar9;
          recovered_10000f90(local_40,(void *)((int)local_5c + (int)local_68),local_54);
          local_5c = local_14;
          local_a8 = 10;
          uVar7 = recovered_10011080((uint)*local_40,local_18,(int)local_4c,(int)local_1c,
                                     (uint)local_20,(uint)local_50);
          puVar9 = local_48;
          puVar12 = local_18;
          if ((char)uVar7 == '\0') goto LAB_1000c37a;
          local_14 = (uint *)*local_24;
          iVar25 = *param_4;
          local_28 = *(uint *)(param_3 + 4);
          uVar22 = 0;
          puVar9 = local_18;
          puVar11 = local_48;
          switch((uintptr_t)(local_24[3])) {
          case 0:
            if (local_24[2] == 8) {
              if (local_14 != (uint *)0x0) {
                iVar25 = iVar25 + 3 + (int)local_14 * local_3c;
                puVar9 = (uint *)0x0;
                do {
                  bVar2 = *(byte *)((int)local_18 + (int)puVar9);
                  uVar22 = *(uint *)(param_3 + 0xc);
                  bVar1 = *(byte *)(param_3 + 0x1c);
                  *(byte *)(iVar25 + -3 + (int)puVar9 * 4) = bVar2;
                  *(byte *)(iVar25 + -2 + (int)puVar9 * 4) = bVar2;
                  *(byte *)(iVar25 + -1 + (int)puVar9 * 4) = bVar2;
                  *(byte *)(iVar25 + (int)puVar9 * 4) = -(~bVar1 & 1 | uVar22 != bVar2);
                  puVar9 = (uint *)((int)puVar9 + 1);
                } while (local_14 != puVar9);
              }
            }
            else if (local_14 != (uint *)0x0) {
              iVar25 = iVar25 + 3 + (int)local_14 * local_3c;
              puVar9 = (uint *)0x0;
              do {
                uVar23 = (uint)CONCAT11(*(undefined1 *)((int)local_18 + (int)puVar9 * 2),
                                        *(undefined1 *)((int)local_18 + (int)puVar9 * 2 + 1));
                uVar22 = *(uint *)(param_3 + 0xc);
                bVar2 = *(byte *)(param_3 + 0x1c);
                uVar16 = (undefined1)((uVar23 * 0xff + 0x7fff) / 0xffff);
                *(undefined1 *)(iVar25 + -3 + (int)puVar9 * 4) = uVar16;
                *(undefined1 *)(iVar25 + -2 + (int)puVar9 * 4) = uVar16;
                *(undefined1 *)(iVar25 + -1 + (int)puVar9 * 4) = uVar16;
                *(byte *)(iVar25 + (int)puVar9 * 4) = -(~bVar2 & 1 | uVar23 != uVar22);
                puVar9 = (uint *)((int)puVar9 + 1);
              } while (local_14 != puVar9);
            }
            break;
          default:
            goto switchD_1000bf45_caseD_1;
          case 2:
            if (local_24[2] == 8) {
              if (local_14 != (uint *)0x0) {
                puVar15 = (undefined1 *)(iVar25 + 3 + (int)local_14 * local_3c);
                pbVar8 = (byte *)((int)local_18 + 2);
                puVar9 = local_14;
                do {
                  bVar2 = pbVar8[-2];
                  uVar19 = (undefined2)CONCAT31((uint3)bVar2,0xff);
                  if (((*(char *)(param_3 + 0x1d) == '\x01') &&
                      (*(uint *)(param_3 + 0x10) == (uint)(uint3)bVar2)) &&
                     (*(uint *)(param_3 + 0x14) == (uint)pbVar8[-1])) {
                    uVar19 = CONCAT11(bVar2,-(*(uint *)(param_3 + 0x18) != (uint)*pbVar8));
                  }
                  puVar15[-3] = (char)((ushort)uVar19 >> 8);
                  puVar15[-2] = pbVar8[-1];
                  puVar15[-1] = *pbVar8;
                  *puVar15 = (char)uVar19;
                  puVar15 = puVar15 + 4;
                  pbVar8 = pbVar8 + 3;
                  puVar9 = (uint *)((int)puVar9 - 1);
                } while (puVar9 != (uint *)0x0);
              }
            }
            else if (local_14 != (uint *)0x0) {
              pcVar24 = (char *)(iVar25 + 3 + (int)local_14 * local_3c);
              puVar9 = (uint *)((int)local_18 + 5);
              puVar11 = local_14;
              do {
                local_14 = puVar11;
                local_1c = puVar9;
                uVar21 = (uint)(ushort)(*(ushort *)((int)local_1c - 5) << 8 |
                                       *(ushort *)((int)local_1c - 5) >> 8);
                uVar27 = (uint)(ushort)(*(ushort *)((int)local_1c - 3) << 8 |
                                       *(ushort *)((int)local_1c - 3) >> 8);
                uVar26 = (uint)(ushort)(*(ushort *)((int)local_1c - 1) << 8 |
                                       *(ushort *)((int)local_1c - 1) >> 8);
                bVar2 = *(byte *)(param_3 + 0x1d);
                uVar22 = *(uint *)(param_3 + 0x10);
                bVar28 = uVar27 != *(uint *)(param_3 + 0x14);
                local_44 = (uint *)CONCAT31(PF_PART3(local_44, 1),bVar28);
                uVar23 = *(uint *)(param_3 + 0x18);
                pcVar24[-3] = (char)((uVar21 * 0xff + 0x7fff) / 0xffff);
                pcVar24[-2] = (char)((uVar27 * 0xff + 0x7fff) / 0xffff);
                pcVar24[-1] = (char)((uVar26 * 0xff + 0x7fff) / 0xffff);
                *pcVar24 = -((uVar26 != uVar23 || bVar28) | ~bVar2 & 1 | uVar21 != uVar22);
                pcVar24 = pcVar24 + 4;
                puVar9 = (uint *)((int)local_1c + 6);
                puVar11 = (uint *)((int)local_14 - 1U);
              } while ((uint *)((int)local_14 - 1U) != (uint *)0x0);
            }
            break;
          case 3:
            if (local_14 != (uint *)0x0) {
              local_28 = local_28 >> 2;
              puVar10 = (uint *)(iVar25 + (int)local_14 * local_3c);
              puVar11 = (uint *)0x0;
              do {
                puVar9 = local_48;
                puVar12 = local_18;
                if (local_28 <= *(byte *)((int)local_18 + (int)puVar11)) goto LAB_1000c37a;
                local_a8 = 0xb;
                local_44 = puVar11;
                local_1c = puVar10;
                recovered_10000f90(puVar10,(void *)((uint)*(byte *)((int)local_18 + (int)puVar11) *
                                                    4 + *(int *)param_3),4);
                puVar11 = (uint *)((int)local_44 + 1);
                puVar10 = local_1c + 1;
              } while (local_14 != puVar11);
            }
            break;
          case 4:
            if (local_24[2] == 8) {
              if (local_14 != (uint *)0x0) {
                iVar25 = iVar25 + 3 + (int)local_14 * local_3c;
                puVar9 = (uint *)0x0;
                do {
                  uVar16 = *(undefined1 *)((int)local_18 + (int)puVar9 * 2);
                  *(undefined1 *)(iVar25 + -3 + (int)puVar9 * 4) = uVar16;
                  *(undefined1 *)(iVar25 + -2 + (int)puVar9 * 4) = uVar16;
                  *(undefined1 *)(iVar25 + -1 + (int)puVar9 * 4) =
                       *(undefined1 *)((int)local_18 + (int)puVar9 * 2);
                  *(undefined1 *)(iVar25 + (int)puVar9 * 4) =
                       *(undefined1 *)((int)local_18 + (int)puVar9 * 2 + 1);
                  puVar9 = (uint *)((int)puVar9 + 1);
                } while (local_14 != puVar9);
              }
            }
            else if (local_14 != (uint *)0x0) {
              iVar25 = iVar25 + 3 + (int)local_14 * local_3c;
              puVar9 = (uint *)0x0;
              do {
                uVar16 = *(undefined1 *)((int)local_18 + (int)puVar9 * 4 + 2);
                uVar3 = *(undefined1 *)((int)local_18 + (int)puVar9 * 4 + 3);
                uVar18 = (undefined1)
                         (((uint)CONCAT11((char)local_18[(int)puVar9],
                                          *(undefined1 *)((int)local_18 + (int)puVar9 * 4 + 1)) *
                           0xff + 0x7fff) / 0xffff);
                *(undefined1 *)(iVar25 + -3 + (int)puVar9 * 4) = uVar18;
                *(undefined1 *)(iVar25 + -2 + (int)puVar9 * 4) = uVar18;
                *(undefined1 *)(iVar25 + -1 + (int)puVar9 * 4) = uVar18;
                *(char *)(iVar25 + (int)puVar9 * 4) =
                     (char)(((uint)CONCAT11(uVar16,uVar3) * 0xff + 0x7fff) / 0xffff);
                puVar9 = (uint *)((int)puVar9 + 1);
              } while (local_14 != puVar9);
            }
            break;
          case 6:
            if (local_24[2] == 8) {
              local_a8 = 0xc;
              recovered_10000f90((void *)(iVar25 + local_2c * (int)local_14 * 4),local_18,
                                 (int)local_14 << 2);
            }
            else if (local_14 != (uint *)0x0) {
              iVar25 = iVar25 + 3 + (int)local_14 * local_3c;
              puVar9 = (uint *)0x0;
              do {
                *(char *)(iVar25 + -3 + (int)puVar9 * 4) =
                     (char)(((uint)CONCAT11((char)local_18[(int)puVar9 * 2],
                                            *(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 1)) *
                             0xff + 0x7fff) / 0xffff);
                *(char *)(iVar25 + -2 + (int)puVar9 * 4) =
                     (char)(((uint)CONCAT11(*(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 2),
                                            *(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 3)) *
                             0xff + 0x7fff) / 0xffff);
                *(char *)(iVar25 + -1 + (int)puVar9 * 4) =
                     (char)(((uint)CONCAT11((char)local_18[(int)puVar9 * 2 + 1],
                                            *(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 5)) *
                             0xff + 0x7fff) / 0xffff);
                *(char *)(iVar25 + (int)puVar9 * 4) =
                     (char)(((uint)CONCAT11(*(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 6),
                                            *(undefined1 *)((int)local_18 + (int)puVar9 * 8 + 7)) *
                             0xff + 0x7fff) / 0xffff);
                puVar9 = (uint *)((int)puVar9 + 1);
              } while (local_14 != puVar9);
            }
          }
          local_2c = local_2c + 1;
          local_3c = local_3c + 4;
          puVar9 = local_48;
          puVar12 = local_18;
          puVar11 = local_18;
        } while (local_2c < *local_38);
      }
      uVar22 = CONCAT31((int3)((uint)puVar12 >> 8),local_5c == local_64);
switchD_1000bf45_caseD_1:
      recovered_100050d0(puVar9);
      recovered_100050d0(puVar11);
    }
    recovered_100050d0(local_40);
  }
  else {
    if ((uVar23 != 0) && ((int)((ulonglong)uVar23 * (ulonglong)in_ECX[1] >> 0x20) != 0)) {
LAB_1000b2fa:
      uVar22 = 0;
      goto LAB_1000c3bb;
    }
    uVar23 = in_ECX[1] * uVar23;
    uVar22 = 0;
    local_24 = in_ECX;
    if (0x3fffffff < uVar23) goto LAB_1000c3bb;
    uVar23 = uVar23 * 4;
    param_4[1] = 0;
    if ((uint)param_4[2] < uVar23) {
      local_a8 = 0xffffffff;
      pvVar6 = recovered_10005070(uVar23);
      pvVar5 = (void *)*param_4;
      iVar25 = param_4[1];
      if (iVar25 != 0) {
        iVar20 = 0;
        do {
          *(undefined1 *)((int)pvVar6 + iVar20) = *(undefined1 *)((int)pvVar5 + iVar20);
          iVar20 = iVar20 + 1;
        } while (iVar25 != iVar20);
      }
      recovered_100050d0(pvVar5);
      *param_4 = (int)pvVar6;
      param_4[2] = uVar23;
      uVar22 = param_4[1];
    }
    while (uVar22 < uVar23) {
      *(undefined1 *)(*param_4 + uVar22) = 0;
      uVar22 = param_4[1] + 1;
      param_4[1] = uVar22;
    }
    local_74 = (void *)0x0;
    local_70 = 0;
    local_6c = 0;
    local_68 = (void *)0x0;
    local_64 = (uint *)0x0;
    local_60 = 0;
    local_5c = (uint *)0x0;
    local_a8 = 0xd;
    uVar7 = recovered_10010f80((int *)&local_74,(int *)local_14);
    if ((char)uVar7 == '\0') goto LAB_1000bdb2;
    uVar22 = local_24[3];
    local_b4 = 1;
    if (((uVar22 < 7) && ((0x5dU >> (uVar22 & 0x1f) & 1) != 0)) &&
       ((7 < *(int *)(&DAT_10016b00 + uVar22 * 4) * local_24[2] &&
        (local_b4 = 0, (0x5dU >> (uVar22 & 0x1f) & 1) != 0)))) {
      local_b4 = local_24[2] * *(int *)(&DAT_10016b00 + uVar22 * 4) + 7 >> 3;
    }
    iVar25 = 0;
    puVar9 = local_24;
    do {
      local_2c = (&DAT_100169f4)[iVar25];
      local_28 = (&DAT_10016a10)[iVar25];
      local_14 = (uint *)(&DAT_10016a2c)[iVar25];
      local_54 = (&DAT_10016a48)[iVar25];
      puVar11 = (uint *)0x0;
      if (local_2c < *puVar9) {
        puVar11 = (uint *)((*puVar9 + ~local_2c) / (uint)local_14 + 1);
      }
      if (local_28 < puVar9[1]) {
        uVar22 = (puVar9[1] + ~local_28) / local_54;
        local_34 = puVar11;
        if ((puVar11 != (uint *)0x0) && (uVar22 != 0xffffffff)) {
          uVar23 = puVar9[3];
          uVar21 = 0;
          if ((uVar23 < 7) && ((0x5dU >> (uVar23 & 0x1f) & 1) != 0)) {
            uVar21 = puVar9[2] * *(int *)(&DAT_10016b00 + uVar23 * 4);
          }
          if ((int)(ZEXT48(puVar11) * (ulonglong)uVar21 >> 0x20) != 0) goto LAB_1000bdb2;
          local_20 = (uint *)(uVar21 * (int)puVar11 + 7);
          local_4c = (byte *)((uint)local_20 >> 3);
          local_50 = local_4c + 1;
          local_a8 = 0xe;
          local_58 = recovered_10005070((uint)local_50);
          recovered_100050d0((void *)0x0);
          pbVar8 = (byte *)0x0;
          do {
            local_58[(int)pbVar8] = 0;
            pbVar8 = pbVar8 + 1;
          } while (local_50 != pbVar8);
          local_1c = (uint *)0x0;
          puVar9 = (uint *)0x0;
          puVar11 = (uint *)0x0;
          if ((uint *)0x7 < local_20) {
            local_a8 = 0xf;
            puVar9 = recovered_10005070((uint)local_4c);
            recovered_100050d0((void *)0x0);
            local_20 = (uint *)(local_4c + (local_4c == (byte *)0x0));
            puVar11 = (uint *)0x0;
            do {
              *(undefined1 *)((int)puVar9 + (int)puVar11) = 0;
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (local_20 != puVar11);
            local_a8 = 0x10;
            puVar11 = recovered_10005070((uint)local_4c);
            recovered_100050d0((void *)0x0);
            puVar12 = (uint *)0x0;
            do {
              *(undefined1 *)((int)puVar11 + (int)puVar12) = 0;
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (local_20 != puVar12);
          }
          puVar12 = (uint *)(-2 - (int)local_4c);
          pbVar8 = local_58 + 1;
          local_2c = local_2c << 2;
          local_28 = local_28 << 2;
          local_54 = local_54 << 2;
          local_14 = (uint *)((int)local_14 << 2);
          uVar23 = 0;
          do {
            puVar10 = puVar9;
            local_3c = uVar23;
            local_30 = puVar11;
            if ((puVar12 < local_5c) || (local_64 < local_50 + (int)local_5c)) {
switchD_1000b964_caseD_1:
              recovered_100050d0(local_30);
              recovered_100050d0(puVar10);
              recovered_100050d0(local_58);
              uVar22 = 0;
              goto LAB_1000c397;
            }
            local_a8 = 0x11;
            local_20 = (uint *)(local_50 + (int)local_5c);
            recovered_10000f90(local_58,(void *)((int)local_5c + (int)local_68),(uint)local_50);
            local_5c = local_20;
            local_a8 = 0x12;
            uVar7 = recovered_10011080((uint)*local_58,local_30,(int)pbVar8,(int)local_1c,
                                       (uint)local_4c,local_b4);
            if (((char)uVar7 == '\0') || (6 < local_24[3])) goto switchD_1000b964_caseD_1;
            uVar23 = *local_24;
            iVar20 = *param_4;
            switch((uintptr_t)(local_24[3])) {
            case 0:
              if (local_24[2] == 8) {
                pcVar24 = (char *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                puVar9 = local_30;
                puVar11 = local_34;
                do {
                  bVar2 = (byte)*puVar9;
                  uVar23 = *(uint *)(param_3 + 0xc);
                  bVar1 = *(byte *)(param_3 + 0x1c);
                  pcVar24[-3] = bVar2;
                  pcVar24[-2] = bVar2;
                  pcVar24[-1] = bVar2;
                  *pcVar24 = -(~bVar1 & 1 | uVar23 != bVar2);
                  puVar9 = (uint *)((int)puVar9 + 1);
                  pcVar24 = pcVar24 + (int)local_14;
                  puVar11 = (uint *)((int)puVar11 - 1);
                } while (puVar11 != (uint *)0x0);
              }
              else {
                iVar14 = (int)local_30 + 1;
                pcVar24 = (char *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                puVar9 = local_34;
                do {
                  uVar21 = (uint)(ushort)(*(ushort *)(iVar14 + -1) << 8 |
                                         *(ushort *)(iVar14 + -1) >> 8);
                  uVar23 = *(uint *)(param_3 + 0xc);
                  bVar2 = *(byte *)(param_3 + 0x1c);
                  cVar17 = (char)((uVar21 * 0xff + 0x7fff) / 0xffff);
                  pcVar24[-3] = cVar17;
                  pcVar24[-2] = cVar17;
                  pcVar24[-1] = cVar17;
                  *pcVar24 = -(~bVar2 & 1 | uVar21 != uVar23);
                  iVar14 = iVar14 + 2;
                  pcVar24 = pcVar24 + (int)local_14;
                  puVar9 = (uint *)((int)puVar9 - 1);
                } while (puVar9 != (uint *)0x0);
              }
              break;
            default:
              goto switchD_1000b964_caseD_1;
            case 2:
              if (local_24[2] == 8) {
                pbVar13 = (byte *)((int)local_30 + 2);
                puVar15 = (undefined1 *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                puVar9 = local_34;
                do {
                  bVar2 = pbVar13[-2];
                  uVar19 = (undefined2)CONCAT31((uint3)bVar2,0xff);
                  if (((*(char *)(param_3 + 0x1d) == '\x01') &&
                      (*(uint *)(param_3 + 0x10) == (uint)(uint3)bVar2)) &&
                     (*(uint *)(param_3 + 0x14) == (uint)pbVar13[-1])) {
                    uVar19 = CONCAT11(bVar2,-(*(uint *)(param_3 + 0x18) != (uint)*pbVar13));
                  }
                  puVar15[-3] = (char)((ushort)uVar19 >> 8);
                  puVar15[-2] = pbVar13[-1];
                  puVar15[-1] = *pbVar13;
                  *puVar15 = (char)uVar19;
                  pbVar13 = pbVar13 + 3;
                  puVar15 = puVar15 + (int)local_14;
                  puVar9 = (uint *)((int)puVar9 - 1);
                } while (puVar9 != (uint *)0x0);
              }
              else {
                iVar14 = (int)local_30 + 5;
                pcVar24 = (char *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                puVar9 = local_34;
                do {
                  local_20 = puVar9;
                  uVar21 = (uint)(ushort)(*(ushort *)(iVar14 + -5) << 8 |
                                         *(ushort *)(iVar14 + -5) >> 8);
                  uVar26 = (uint)(ushort)(*(ushort *)(iVar14 + -3) << 8 |
                                         *(ushort *)(iVar14 + -3) >> 8);
                  local_44 = (uint *)(uint)(ushort)(*(ushort *)(iVar14 + -1) << 8 |
                                                   *(ushort *)(iVar14 + -1) >> 8);
                  bVar2 = *(byte *)(param_3 + 0x1d);
                  uVar23 = *(uint *)(param_3 + 0x10);
                  bVar28 = uVar26 != *(uint *)(param_3 + 0x14);
                  local_38 = (uint *)CONCAT31(PF_PART3(local_38, 1),bVar28);
                  puVar9 = *(uint **)(param_3 + 0x18);
                  pcVar24[-3] = (char)((uVar21 * 0xff + 0x7fff) / 0xffff);
                  pcVar24[-2] = (char)((uVar26 * 0xff + 0x7fff) / 0xffff);
                  pcVar24[-1] = (char)(((int)local_44 * 0xff + 0x7fffU) / 0xffff);
                  *pcVar24 = -((local_44 != puVar9 || bVar28) | ~bVar2 & 1 | uVar21 != uVar23);
                  iVar14 = iVar14 + 6;
                  pcVar24 = pcVar24 + (int)local_14;
                  puVar9 = (uint *)((int)local_20 - 1U);
                } while ((uint *)((int)local_20 - 1U) != (uint *)0x0);
              }
              break;
            case 3:
              local_44 = (uint *)(*(uint *)(param_3 + 4) >> 2);
              dst = (uint *)(uVar23 * local_28 + iVar20 + local_2c);
              puVar9 = local_30;
              puVar11 = local_34;
              do {
                if (local_44 <= (uint *)(uint)(byte)*puVar9) goto switchD_1000b964_caseD_1;
                local_a8 = 0x13;
                local_38 = puVar11;
                local_20 = puVar9;
                local_1c = dst;
                recovered_10000f90(dst,(void *)((int)(uint)(byte)*puVar9 * 4 + *(int *)param_3),4);
                dst = (uint *)((int)local_1c + (int)local_14);
                puVar9 = (uint *)((int)local_20 + 1);
                puVar11 = (uint *)((int)local_38 - 1);
              } while (puVar11 != (uint *)0x0);
              break;
            case 4:
              if (local_24[2] == 8) {
                puVar15 = (undefined1 *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                puVar9 = local_30;
                puVar11 = local_34;
                do {
                  uVar23 = *puVar9;
                  puVar15[-3] = (char)uVar23;
                  puVar15[-2] = (char)uVar23;
                  puVar15[-1] = (char)*puVar9;
                  *puVar15 = *(undefined1 *)((int)puVar9 + 1);
                  puVar15 = puVar15 + (int)local_14;
                  puVar9 = (uint *)((int)puVar9 + 2);
                  puVar11 = (uint *)((int)puVar11 - 1);
                } while (puVar11 != (uint *)0x0);
              }
              else {
                puVar15 = (undefined1 *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                iVar20 = (int)local_30 + 3;
                puVar9 = local_34;
                do {
                  uVar4 = *(ushort *)(iVar20 + -1);
                  uVar16 = (undefined1)
                           (((uint)(ushort)(*(ushort *)(iVar20 + -3) << 8 |
                                           *(ushort *)(iVar20 + -3) >> 8) * 0xff + 0x7fff) / 0xffff)
                  ;
                  puVar15[-3] = uVar16;
                  puVar15[-2] = uVar16;
                  puVar15[-1] = uVar16;
                  *puVar15 = (char)(((uint)(ushort)(uVar4 << 8 | uVar4 >> 8) * 0xff + 0x7fff) /
                                   0xffff);
                  puVar15 = puVar15 + (int)local_14;
                  iVar20 = iVar20 + 4;
                  puVar9 = (uint *)((int)puVar9 - 1);
                } while (puVar9 != (uint *)0x0);
              }
              break;
            case 6:
              if (local_24[2] == 8) {
                local_1c = (uint *)(uVar23 * local_28 + iVar20 + local_2c);
                puVar9 = local_30;
                puVar11 = local_34;
                do {
                  local_a8 = 0x14;
                  local_38 = puVar11;
                  local_20 = puVar9;
                  recovered_10000f90(local_1c,puVar9,4);
                  local_1c = (uint *)((int)local_1c + (int)local_14);
                  puVar9 = local_20 + 1;
                  puVar11 = (uint *)((int)local_38 - 1);
                } while (puVar11 != (uint *)0x0);
              }
              else {
                puVar15 = (undefined1 *)(uVar23 * local_28 + 3 + iVar20 + local_2c);
                iVar20 = (int)local_30 + 7;
                puVar9 = local_34;
                do {
                  puVar15[-3] = (char)(((uint)(ushort)(*(ushort *)(iVar20 + -7) << 8 |
                                                      *(ushort *)(iVar20 + -7) >> 8) * 0xff + 0x7fff
                                       ) / 0xffff);
                  puVar15[-2] = (char)(((uint)(ushort)(*(ushort *)(iVar20 + -5) << 8 |
                                                      *(ushort *)(iVar20 + -5) >> 8) * 0xff + 0x7fff
                                       ) / 0xffff);
                  puVar15[-1] = (char)(((uint)(ushort)(*(ushort *)(iVar20 + -3) << 8 |
                                                      *(ushort *)(iVar20 + -3) >> 8) * 0xff + 0x7fff
                                       ) / 0xffff);
                  *puVar15 = (char)(((uint)(ushort)(*(ushort *)(iVar20 + -1) << 8 |
                                                   *(ushort *)(iVar20 + -1) >> 8) * 0xff + 0x7fff) /
                                   0xffff);
                  puVar15 = puVar15 + (int)local_14;
                  iVar20 = iVar20 + 8;
                  puVar9 = (uint *)((int)puVar9 - 1);
                } while (puVar9 != (uint *)0x0);
              }
            }
            uVar23 = local_3c + 1;
            local_28 = local_28 + local_54;
            local_1c = local_30;
            puVar9 = local_30;
            puVar11 = puVar10;
          } while (uVar23 < uVar22 + 1);
          recovered_100050d0(puVar10);
          recovered_100050d0(local_30);
          recovered_100050d0(local_58);
          puVar9 = local_24;
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != 7);
    uVar22 = (uint)(local_5c == local_64);
  }
LAB_1000c397:
  local_64 = (uint *)0x0;
  recovered_100050d0(local_68);
  local_70 = 0;
  recovered_100050d0(local_74);
LAB_1000c3bb:
  recovered_100054f0(&local_ac);
  return uVar22;
}

#undef DAT_100169f4
#undef DAT_10016a10
#undef DAT_10016a2c
#undef DAT_10016a48
#undef DAT_10016b00
#undef DAT_10016e40
#undef LAB_1000c3d6
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_15c
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_58
#undef local_5c
#undef local_60
#undef local_64
#undef local_68
#undef local_6c
#undef local_70
#undef local_74
#undef local_84
#undef local_88
#undef local_8c
#undef local_90
#undef local_94
#undef local_a8
#undef local_ac
#undef local_b4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009f40(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(in_ECX + 0x50);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x28 + -8;
    do {
      iVar1 = *(int *)(in_ECX + 0x4c);
      *(undefined4 *)(iVar1 + iVar2) = 0;
      recovered_100050d0(*(void **)(iVar1 + -4 + iVar2));
      iVar2 = iVar2 + -0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(in_ECX + 0x50) = 0;
  recovered_100050d0(*(void **)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  recovered_100050d0(*(void **)(in_ECX + 0x40));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  recovered_100050d0(*(void **)(in_ECX + 0x34));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  recovered_100050d0(*(void **)(in_ECX + 0x28));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb73U)))
#define LAB_1000c7a5 (*(uint8_t *)(0x1000c7a5U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_11 (*(bool *)(frame + 239))
#define local_18 (*(uint ******* *)(frame + 232))
#define local_1c (*(int * *)(frame + 228))
#define local_20 (*(uint ******* *)(frame + 224))
#define local_24 (*(uint ******* *)(frame + 220))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_40 (*(undefined * *)(frame + 192))
#define local_44 (*(undefined * *)(frame + 188))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_5c (*(undefined4 *)(frame + 164))
uint recovered_10009fd0(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  uint *******pppppppuVar5;
  uint uVar6;

  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  recovered_100050d0((void *)param_2[2]);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  recovered_100050d0((void *)0x0);
  local_34 = auStackY_ec + 0x80;
  local_44 = PTR_recovered_10004fe0_10017004;
  local_40 = &DAT_10016e6c;
  local_38 = &LAB_1000c7a5;
  local_3c = auStackY_ec + 0xe8;
  recovered_100054d0(&local_5c);
  if (param_1 == (undefined4 *)0x0) {
LAB_1000c668:
    pppppppuVar3 = (uint *******)0x0;
  }
  else {
    local_18 = (uint *******)0x0;
    local_58 = 1;
    piVar1 = recovered_10003fa0((int)param_1,((uintptr_t)pf_module_state + 0xa9bU));
    if (piVar1 == (int *)0x0) goto LAB_1000c668;
    local_18 = (uint *******)0x0;
    local_58 = 2;
    local_1c = piVar1;
    iVar2 = recovered_100048c0(piVar1,0,2);
    if (iVar2 != 0) {
LAB_1000c64c:
      local_18 = (uint *******)0x0;
      local_58 = 7;
      recovered_100043e0(local_1c);
      uVar6 = 0;
      pppppppuVar3 = (uint *******)0x0;
      goto LAB_1000c66c;
    }
    local_18 = (uint *******)0x0;
    local_58 = 3;
    pppppppuVar3 = (uint *******)recovered_10004940((int)local_1c);
    if ((int)pppppppuVar3 < 0) goto LAB_1000c64c;
    local_18 = (uint *******)0x0;
    local_58 = 4;
    local_24 = pppppppuVar3;
    iVar2 = recovered_100048c0(local_1c,0,0);
    if (iVar2 != 0) goto LAB_1000c64c;
    if (local_24 == (uint *******)0x0) {
      local_11 = true;
      local_20 = (uint *******)0x0;
    }
    else {
      local_18 = (uint *******)0x0;
      local_58 = 5;
      pppppppuVar4 = recovered_10005070((uint)local_24);
      piVar1 = local_1c;
      pppppppuVar3 = local_24;
      recovered_100050d0((void *)0x0);
      pppppppuVar5 = (uint *******)0x0;
      do {
        *(undefined1 *)((int)pppppppuVar4 + (int)pppppppuVar5) = 0;
        pppppppuVar5 = (uint *******)((int)pppppppuVar5 + 1);
      } while (pppppppuVar3 != pppppppuVar5);
      local_58 = 6;
      local_20 = pppppppuVar4;
      local_18 = pppppppuVar4;
      pppppppuVar3 = (uint *******)
                     recovered_100044b0((undefined1 *)pppppppuVar4,1,(int)pppppppuVar3,piVar1);
      local_11 = pppppppuVar3 == local_24;
    }
    local_58 = 8;
    local_18 = local_20;
    iVar2 = recovered_100043e0(local_1c);
    pppppppuVar3 = local_20;
    if ((local_11 & iVar2 == 0) != 0) {
      local_18 = local_20;
      local_58 = 9;
      uVar6 = recovered_10006440(local_20,local_24,param_2);
      pppppppuVar3 = local_20;
      goto LAB_1000c66c;
    }
  }
  uVar6 = 0;
LAB_1000c66c:
  recovered_100050d0(pppppppuVar3);
  recovered_100054f0(&local_5c);
  return uVar6;
}

#undef DAT_10016e6c
#undef LAB_1000c7a5
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_ec
#undef local_11
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_58
#undef local_5c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000a230(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
bool recovered_1000add0(uint *in_ECX,int in_EDX,int param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_3 != 0 || param_4 == 0) {
    local_18 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
    uVar1 = recovered_10010b60(0,(uchar *)in_EDX,4);
    if (param_4 != 0) {
      uVar1 = recovered_10010b60(uVar1,(uchar *)param_3,param_4);
    }
    local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    iVar2 = recovered_10004760((int)&local_18,1,4,in_ECX);
    if (((iVar2 == 4) && (iVar2 = recovered_10004760(in_EDX,1,4,in_ECX), iVar2 == 4)) &&
       ((param_4 == 0 || (uVar1 = recovered_10004760(param_3,1,param_4,in_ECX), uVar1 == param_4))))
    {
      iVar2 = recovered_10004760((int)&local_14,1,4,in_ECX);
      return iVar2 == 4;
    }
  }
  return false;
}

#undef local_14
#undef local_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000ae90(int in_stack_00000004,int in_stack_00000008,uint in_stack_0000000c,
                       char *in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a230(in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba7U)))
#define LAB_1000d7a2 (*(uint8_t *)(0x1000d7a2U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_16c (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(undefined4 *)(frame + 364))
#define local_18 (*(uint *)(frame + 360))
#define local_1c (*(uint * *)(frame + 356))
#define local_20 (*(undefined4 *)(frame + 352))
#define local_24 (*(undefined4 *)(frame + 348))
#define local_25 (*(undefined1 *)(frame + 347))
#define local_26 (*(undefined1 *)(frame + 346))
#define local_27 (*(undefined1 *)(frame + 345))
#define local_28 (*(undefined1 *)(frame + 344))
#define local_2a (*(undefined2 *)(frame + 342))
#define local_30 (*(int *)(frame + 336))
#define local_34 (*(int *)(frame + 332))
#define local_44 (*(undefined1 * *)(frame + 316))
#define local_48 (*(undefined1 * *)(frame + 312))
#define local_4c (*(undefined1 * *)(frame + 308))
#define local_50 (*(undefined * *)(frame + 304))
#define local_54 (*(undefined * *)(frame + 300))
#define local_68 (*(undefined4 *)(frame + 280))
#define local_6c (*(undefined4 *)(frame + 276))
#define local_9d (*(undefined1 *)(frame + 227))
#define local_a1 (*(undefined4 *)(frame + 223))
#define local_a4 (*(undefined1 *)(frame + 220))
#define local_a8 (*(undefined1 *)(frame + 216))
#define local_ab (*(undefined1 *)(frame + 213))
#define local_ae (*(undefined1 *)(frame + 210))
#define local_b8 (*(undefined1 (*)[10])(frame + 200))
#define local_bc (*(undefined4 *)(frame + 196))
#define local_c0 (*(undefined4 *)(frame + 192))
#define local_c1 (*(undefined1 *)(frame + 191))
#define local_c2 (*(undefined1 *)(frame + 190))
#define local_c3 (*(undefined1 *)(frame + 189))
#define local_c4 (*(undefined1 *)(frame + 188))
#define local_c8 (*(undefined4 *)(frame + 184))
#define local_cc (*(undefined4 *)(frame + 180))
#define local_cd (*(undefined1 *)(frame + 179))
#define local_ce (*(undefined1 *)(frame + 178))
#define local_cf (*(undefined1 *)(frame + 177))
#define local_d0 (*(undefined1 *)(frame + 176))
#define local_d1 (*(undefined1 *)(frame + 175))
#define local_d2 (*(undefined1 *)(frame + 174))
#define local_d3 (*(undefined1 *)(frame + 173))
#define local_d4 (*(undefined1 *)(frame + 172))
#define local_d8 (*(undefined4 *)(frame + 168))
byte recovered_1000aea0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX = 0;
  byte bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;

  local_4c = (undefined1 *)((int)(uintptr_t)(frame + 384) + -4);
  local_44 = auStackY_16c + 0x80;
  local_54 = PTR_recovered_10004fe0_10017004;
  local_50 = &DAT_10016ea0;
  local_48 = &LAB_1000d7a2;
  recovered_100054d0(&local_6c);
  bVar4 = 0;
  if ((((param_3 < 0x40000000) && (param_1 != (undefined4 *)0x0)) && (param_2 != 0)) &&
     ((0 < (int)param_3 && (0 < (int)param_4)))) {
    uVar5 = param_3 * 4;
    if (((int)((ulonglong)uVar5 * (ulonglong)param_4 >> 0x20) == 0) &&
       (uVar2 = uVar5 * param_4, uVar2 < 0xffffff86)) {
      local_68 = 0xffffffff;
      local_18 = uVar5;
      local_1c = recovered_10003fa0((int)param_1,((uintptr_t)pf_module_state + 0xa59U));
      if (local_1c != (uint *)0x0) {
        local_24 = 0;
        local_2a = 0x4d42;
        iVar3 = uVar2 + 0x7a;
        local_28 = (undefined1)iVar3;
        local_27 = (undefined1)((uint)iVar3 >> 8);
        local_26 = (undefined1)((uint)iVar3 >> 0x10);
        local_25 = (undefined1)((uint)iVar3 >> 0x18);
        local_20 = 0x7a;
        recovered_10001370(local_b8,0x4c);
        puVar1 = local_1c;
        local_d8 = 0x6c;
        local_d4 = (undefined1)param_3;
        local_d3 = (undefined1)(param_3 >> 8);
        local_d2 = (undefined1)(param_3 >> 0x10);
        local_d1 = (undefined1)(param_3 >> 0x18);
        iVar3 = -param_4;
        local_d0 = (undefined1)iVar3;
        local_cf = (undefined1)((uint)iVar3 >> 8);
        local_ce = (undefined1)((uint)iVar3 >> 0x10);
        local_cd = (undefined1)((uint)iVar3 >> 0x18);
        local_cc = 0x200001;
        local_c8 = 3;
        local_c4 = (undefined1)uVar2;
        local_c3 = (undefined1)(uVar2 >> 8);
        local_c2 = (undefined1)(uVar2 >> 0x10);
        local_c1 = (undefined1)(uVar2 >> 0x18);
        local_c0 = 0xb13;
        local_bc = 0xb13;
        local_ae = 0xff;
        local_ab = 0xff;
        local_a8 = 0xff;
        local_a4 = 0;
        local_a1 = 0x524742ff;
        local_9d = 0x73;
        local_68 = 0xffffffff;
        iVar3 = recovered_10004760((int)&local_2a,1,0xe,local_1c);
        uVar5 = 0;
        bVar7 = false;
        if (iVar3 == 0xe) {
          local_68 = 0xffffffff;
          iVar3 = recovered_10004760((int)&local_d8,1,0x6c,puVar1);
          bVar7 = iVar3 == 0x6c;
        }
        uVar2 = local_18;
        local_68 = 0xffffffff;
        local_14 = recovered_10005070(local_18);
        recovered_100050d0((void *)0x0);
        do {
          *(undefined1 *)((int)local_14 + uVar5) = 0;
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
        iVar3 = 0;
        uVar5 = 0;
        if (bVar7) {
          iVar6 = param_2 + 3;
          do {
            uVar5 = 0;
            do {
              *(undefined1 *)((int)local_14 + uVar5 * 4) = *(undefined1 *)(iVar6 + -1 + uVar5 * 4);
              *(undefined1 *)((int)local_14 + uVar5 * 4 + 1) =
                   *(undefined1 *)(iVar6 + -2 + uVar5 * 4);
              *(undefined1 *)((int)local_14 + uVar5 * 4 + 2) =
                   *(undefined1 *)(iVar6 + -3 + uVar5 * 4);
              *(undefined1 *)((int)local_14 + uVar5 * 4 + 3) = *(undefined1 *)(iVar6 + uVar5 * 4);
              uVar5 = uVar5 + 1;
            } while (param_3 != uVar5);
            local_68 = 2;
            local_34 = iVar6;
            local_30 = iVar3;
            uVar2 = recovered_10004760((int)local_14,1,local_18,local_1c);
            uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar2 == local_18);
            if (uVar2 != local_18) break;
            iVar3 = local_30 + 1;
            iVar6 = local_34 + local_18;
          } while (iVar3 < (int)param_4);
        }
        local_68 = 1;
        local_18 = uVar5;
        iVar3 = recovered_100043e0((int *)local_1c);
        bVar4 = (byte)local_18 & iVar3 == 0;
        recovered_100050d0(local_14);
        goto LAB_1000d78d;
      }
    }
    bVar4 = 0;
  }
LAB_1000d78d:
  recovered_100054f0(&local_6c);
  return bVar4;
}

#undef DAT_10016ea0
#undef LAB_1000d7a2
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_16c
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_25
#undef local_26
#undef local_27
#undef local_28
#undef local_2a
#undef local_30
#undef local_34
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_68
#undef local_6c
#undef local_9d
#undef local_a1
#undef local_a4
#undef local_a8
#undef local_ab
#undef local_ae
#undef local_b8
#undef local_bc
#undef local_c0
#undef local_c1
#undef local_c2
#undef local_c3
#undef local_c4
#undef local_c8
#undef local_cc
#undef local_cd
#undef local_ce
#undef local_cf
#undef local_d0
#undef local_d1
#undef local_d2
#undef local_d3
#undef local_d4
#undef local_d8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016ea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbafU)))
#define LAB_1000da31 (*(uint8_t *)(0x1000da31U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(undefined4 *)(frame + 252))
#define local_18 (*(int *)(frame + 248))
#define local_1c (*(uint * *)(frame + 244))
#define local_20 (*(uint *)(frame + 240))
#define local_24 (*(int *)(frame + 236))
#define local_28 (*(undefined2 *)(frame + 232))
#define local_29 (*(undefined1 *)(frame + 231))
#define local_2a (*(undefined1 *)(frame + 230))
#define local_2b (*(undefined1 *)(frame + 229))
#define local_2c (*(undefined1 *)(frame + 228))
#define local_30 (*(undefined4 *)(frame + 224))
#define local_34 (*(undefined4 *)(frame + 220))
#define local_38 (*(undefined4 *)(frame + 216))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_48 (*(undefined1 * *)(frame + 200))
#define local_4c (*(undefined1 * *)(frame + 196))
#define local_50 (*(undefined * *)(frame + 192))
#define local_54 (*(undefined * *)(frame + 188))
#define local_68 (*(undefined4 *)(frame + 168))
#define local_6c (*(undefined4 *)(frame + 164))
byte recovered_1000b230(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX = 0;
  byte bVar5;

  local_4c = auStackY_fc + 0xf8;
  local_44 = auStackY_fc + 0x80;
  local_54 = PTR_recovered_10004fe0_10017004;
  local_24 = param_2;
  local_50 = &DAT_10016ea8;
  local_48 = &LAB_1000da31;
  recovered_100054d0(&local_6c);
  if ((0 < param_4 && 0 < param_3) && (param_2 != 0 && param_1 != (undefined4 *)0x0)) {
    local_68 = 0xffffffff;
    puVar1 = recovered_10003fa0((int)param_1,((uintptr_t)pf_module_state + 0xa59U));
    if (puVar1 != (uint *)0x0) {
      local_30 = 0;
      local_34 = 0;
      local_38 = 0x20000;
      local_2c = (undefined1)param_3;
      local_2b = (undefined1)((uint)param_3 >> 8);
      local_2a = (undefined1)param_4;
      local_29 = (undefined1)((uint)param_4 >> 8);
      local_28 = 0x2820;
      local_68 = 0xffffffff;
      local_1c = puVar1;
      iVar2 = recovered_10004760((int)&local_38,1,0x12,puVar1);
      local_20 = param_3 * 4;
      local_14 = (void *)0x0;
      if (local_20 != 0) {
        local_68 = 0xffffffff;
        local_14 = recovered_10005070(local_20);
        recovered_100050d0((void *)0x0);
        uVar3 = 0;
        do {
          *(undefined1 *)((int)local_14 + uVar3) = 0;
          uVar3 = uVar3 + 1;
        } while (local_20 != uVar3);
      }
      local_18 = 0;
      if (iVar2 == 0x12) {
        local_24 = local_24 + 3;
        iVar2 = local_18;
        do {
          while( true ) {
            local_18 = iVar2;
            iVar2 = local_18 * local_20 + local_24;
            iVar4 = 0;
            do {
              *(undefined1 *)((int)local_14 + iVar4 * 4) = *(undefined1 *)(iVar2 + -1 + iVar4 * 4);
              *(undefined1 *)((int)local_14 + iVar4 * 4 + 1) =
                   *(undefined1 *)(iVar2 + -2 + iVar4 * 4);
              *(undefined1 *)((int)local_14 + iVar4 * 4 + 2) =
                   *(undefined1 *)(iVar2 + -3 + iVar4 * 4);
              *(undefined1 *)((int)local_14 + iVar4 * 4 + 3) = *(undefined1 *)(iVar2 + iVar4 * 4);
              iVar4 = iVar4 + 1;
            } while (param_3 != iVar4);
            if (local_20 == 0) break;
            local_68 = 1;
            uVar3 = recovered_10004760((int)local_14,1,local_20,local_1c);
            if ((uVar3 != local_20) || (iVar2 = local_18 + 1, param_4 <= local_18 + 1)) {
              if (uVar3 != local_20) {
                local_18 = 0;
                goto LAB_1000d9f2;
              }
              goto LAB_1000d9ba;
            }
          }
          iVar2 = local_18 + 1;
        } while (local_18 + 1 < param_4);
LAB_1000d9ba:
        local_68 = 2;
        iVar2 = recovered_10004760(((uintptr_t)pf_module_state + 0x8efU),1,0x1a,local_1c);
        local_18 = CONCAT31((int3)((uint)extraout_ECX >> 8),iVar2 == 0x1a);
      }
LAB_1000d9f2:
      local_68 = 3;
      iVar2 = recovered_100043e0((int *)local_1c);
      bVar5 = (byte)local_18 & iVar2 == 0;
      recovered_100050d0(local_14);
      goto LAB_1000da1f;
    }
  }
  bVar5 = 0;
LAB_1000da1f:
  recovered_100054f0(&local_6c);
  return bVar5;
}

#undef DAT_10016ea8
#undef LAB_1000da31
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_fc
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_29
#undef local_2a
#undef local_2b
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_68
#undef local_6c

#undef DAT_10011f1c
#define DAT_10011f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbbU)))
#undef LAB_1000cb98
#define LAB_1000cb98 (*(uint8_t *)(0x1000cb98U))
#undef PTR_recovered_10005010_10012004
#define PTR_recovered_10005010_10012004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#undef str_10011dff
#define str_10011dff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9eU)))
#define local_ac (*(uint * *)(frame + 212))
#define local_a4 (*(uint * *)(frame + 220))
#define local_98 (*(int *)(frame + 232))
#define local_74 (*(undefined4 *)(frame + 268))
#define local_70 (*(undefined4 *)(frame + 272))
#define local_5c (*(undefined * *)(frame + 292))
#define local_58 (*(undefined * *)(frame + 296))
#define local_54 (*(undefined1 * *)(frame + 300))
#define local_50 (*(undefined1 * *)(frame + 304))
#define local_4c (*(undefined1 * *)(frame + 308))
#define local_40 (*(uint * *)(frame + 320))
#define local_3c (*(void * *)(frame + 324))
#define local_38 (*(uint * *)(frame + 328))
#define local_34 (*(uint * *)(frame + 332))
#define local_30 (*(uint * *)(frame + 336))
#define local_2c (*(uint * *)(frame + 340))
#define local_28 (*(uint * *)(frame + 344))
#define local_24 (*(uint * *)(frame + 348))
#define local_20 (*(uint * *)(frame + 352))
#define local_1c (*(uint * *)(frame + 356))
#define local_18 (*(uint * *)(frame + 360))
#define local_14 (*(undefined4 *)(frame + 364))
#define auStackY_16c (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4c0
 */

byte recovered_1000b4c0(char *param_1,char *param_2,char *param_3,uint param_4)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar12;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar13;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  void *pvVar10;
  uint uVar11;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  char *pcVar18;
  byte bVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  uint *puVar23;

  local_54 = (undefined1 *)((int)(uintptr_t)(frame + 384) + -4);
  local_4c = auStackY_16c + 0x80;
  local_5c = PTR_recovered_10005010_10012004;
  local_a4 = (uint *)param_2;
  local_58 = &DAT_10011f1c;
  local_50 = &LAB_1000cb98;
  recovered_100054d0(&local_74);
  if ((0 < (int)param_4 && 0 < (int)param_3) && (param_2 != (char *)0x0 && param_1 != (char *)0x0))
  {
    uVar15 = (uint)(param_3 + 0x3f) >> 6;
    uVar22 = param_4 + 0x3f >> 6;
    if (((int)((ulonglong)uVar15 * (ulonglong)uVar22 >> 0x20) == 0) &&
       (local_2c = (uint *)(uVar22 * uVar15), local_2c < (uint *)0x40000000)) {
      local_70 = 1;
      puVar3 = recovered_10005070(0x10);
      recovered_100050d0((void *)0x0);
      *puVar3 = 0x706d6967;
      puVar3[1] = 0x66637820;
      puVar3[2] = 0x30307620;
      *(undefined2 *)(puVar3 + 3) = 0x33;
      local_70 = 2;
      local_18 = puVar3;
      puVar4 = recovered_10005070(0x20);
      local_30 = (uint *)((uint)param_3 >> 0x18);
      *puVar4 = (char)*local_18;
      puVar4[1] = *(undefined1 *)((int)local_18 + 1);
      puVar4[2] = *(undefined1 *)((int)local_18 + 2);
      puVar4[3] = *(undefined1 *)((int)local_18 + 3);
      puVar4[4] = *(undefined1 *)(local_18 + 1);
      puVar4[5] = *(undefined1 *)((int)local_18 + 5);
      puVar4[6] = *(undefined1 *)((int)local_18 + 6);
      puVar4[7] = *(undefined1 *)((int)local_18 + 7);
      puVar4[8] = *(undefined1 *)(local_18 + 2);
      puVar4[9] = *(undefined1 *)((int)local_18 + 9);
      puVar4[10] = *(undefined1 *)((int)local_18 + 10);
      puVar4[0xb] = *(undefined1 *)((int)local_18 + 0xb);
      puVar4[0xc] = *(undefined1 *)(local_18 + 3);
      puVar4[0xd] = *(undefined1 *)((int)local_18 + 0xd);
      recovered_100050d0(local_18);
      puVar4[0xe] = (char)local_30;
      puVar4[0xf] = (char)((uint)param_3 >> 0x10);
      uVar12 = (undefined1)((uint)param_3 >> 8);
      puVar4[0x10] = uVar12;
      uVar1 = SUB41(param_3,0);
      puVar4[0x11] = uVar1;
      uVar14 = (undefined1)(param_4 >> 0x18);
      puVar4[0x12] = uVar14;
      uVar17 = (undefined1)(param_4 >> 0x10);
      puVar4[0x13] = uVar17;
      uVar13 = (undefined1)(param_4 >> 8);
      puVar4[0x14] = uVar13;
      uVar2 = (undefined1)param_4;
      puVar4[0x15] = uVar2;
      *(undefined4 *)(puVar4 + 0x16) = 0;
      *(undefined4 *)(puVar4 + 0x1a) = 0x11000000;
      local_70 = 3;
      local_38 = (uint *)((uint)param_3 >> 0x10);
      local_18 = (uint *)puVar4;
      puVar4 = recovered_10005070(0x40);
      *puVar4 = (char)*local_18;
      puVar4[1] = *(undefined1 *)((int)local_18 + 1);
      puVar4[2] = *(undefined1 *)((int)local_18 + 2);
      puVar4[3] = *(undefined1 *)((int)local_18 + 3);
      puVar4[4] = *(undefined1 *)((int)local_18 + 4);
      puVar4[5] = *(undefined1 *)((int)local_18 + 5);
      puVar4[6] = *(undefined1 *)((int)local_18 + 6);
      puVar4[7] = *(undefined1 *)((int)local_18 + 7);
      puVar4[8] = *(undefined1 *)((int)local_18 + 8);
      puVar4[9] = *(undefined1 *)((int)local_18 + 9);
      puVar4[10] = *(undefined1 *)((int)local_18 + 10);
      puVar4[0xb] = *(undefined1 *)((int)local_18 + 0xb);
      puVar4[0xc] = *(undefined1 *)((int)local_18 + 0xc);
      puVar4[0xd] = *(undefined1 *)((int)local_18 + 0xd);
      puVar4[0xe] = *(undefined1 *)((int)local_18 + 0xe);
      puVar4[0xf] = *(undefined1 *)((int)local_18 + 0xf);
      puVar4[0x10] = *(undefined1 *)((int)local_18 + 0x10);
      puVar4[0x11] = *(undefined1 *)((int)local_18 + 0x11);
      puVar4[0x12] = *(undefined1 *)((int)local_18 + 0x12);
      puVar4[0x13] = *(undefined1 *)((int)local_18 + 0x13);
      puVar4[0x14] = *(undefined1 *)((int)local_18 + 0x14);
      puVar4[0x15] = *(undefined1 *)((int)local_18 + 0x15);
      puVar4[0x16] = *(undefined1 *)((int)local_18 + 0x16);
      puVar4[0x17] = *(undefined1 *)((int)local_18 + 0x17);
      puVar4[0x18] = *(undefined1 *)((int)local_18 + 0x18);
      puVar4[0x19] = *(undefined1 *)((int)local_18 + 0x19);
      puVar4[0x1a] = *(undefined1 *)((int)local_18 + 0x1a);
      puVar4[0x1b] = *(undefined1 *)((int)local_18 + 0x1b);
      puVar4[0x1c] = *(undefined1 *)((int)local_18 + 0x1c);
      puVar4[0x1d] = *(undefined1 *)((int)local_18 + 0x1d);
      recovered_100050d0(local_18);
      *(undefined4 *)(puVar4 + 0x1e) = 0x1000000;
      *(undefined4 *)(puVar4 + 0x22) = 0;
      *(undefined4 *)(puVar4 + 0x26) = 0;
      *(undefined4 *)(puVar4 + 0x2a) = 0;
      *(undefined4 *)(puVar4 + 0x30) = 0;
      *(undefined4 *)(puVar4 + 0x34) = 0;
      *(undefined2 *)(puVar4 + 0x38) = 0;
      puVar4[0x3a] = 0;
      *(undefined2 *)(puVar4 + 0x2e) = 0x3b;
      puVar4[0x3b] = (char)local_30;
      puVar4[0x3c] = (char)local_38;
      puVar4[0x3d] = uVar12;
      puVar4[0x3e] = uVar1;
      puVar5 = (uint *)0x40;
      do {
        local_14 = puVar5;
        puVar5 = (uint *)((int)local_14 * 2);
      } while (local_14 < (uint *)0x43);
      local_70 = 4;
      local_28 = (uint *)puVar4;
      local_18 = (uint *)puVar4;
      puVar5 = recovered_10005070((uint)local_14);
      iVar6 = -0x3f;
      do {
        *(undefined1 *)((int)puVar5 + iVar6 + 0x3f) = *(undefined1 *)((int)local_18 + iVar6 + 0x3f);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      recovered_100050d0(local_18);
      *(undefined1 *)((int)puVar5 + 0x3f) = uVar14;
      *(undefined1 *)(puVar5 + 0x10) = uVar17;
      *(undefined1 *)((int)puVar5 + 0x41) = uVar13;
      *(undefined1 *)((int)puVar5 + 0x42) = uVar2;
      puVar7 = local_14;
      if (local_14 < (uint *)0x47) {
        do {
          local_14 = puVar7;
          puVar7 = (uint *)((int)local_14 * 2);
        } while (local_14 < (uint *)0x47);
        local_70 = 5;
        local_28 = puVar5;
        local_18 = puVar5;
        puVar5 = recovered_10005070((uint)local_14);
        iVar6 = -0x43;
        do {
          *(undefined1 *)((int)puVar5 + iVar6 + 0x43) =
               *(undefined1 *)((int)local_18 + iVar6 + 0x43);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        recovered_100050d0(local_18);
      }
      *(undefined4 *)((int)puVar5 + 0x43) = 0x1000000;
      local_70 = 6;
      local_28 = puVar5;
      local_18 = puVar5;
      puVar5 = (uint *)recovered_10001690(str_10011dff);
      puVar7 = local_14;
      if (local_14 < (uint *)0x4b) {
        do {
          local_20 = puVar7;
          puVar7 = (uint *)((int)local_20 * 2);
        } while (local_20 < (uint *)0x4b);
        local_28 = local_18;
        local_70 = 7;
        local_1c = puVar5;
        puVar7 = recovered_10005070((uint)local_20);
        puVar5 = local_1c;
        iVar6 = -0x47;
        do {
          *(undefined1 *)((int)puVar7 + iVar6 + 0x47) =
               *(undefined1 *)((int)local_18 + iVar6 + 0x47);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        recovered_100050d0(local_18);
      }
      else {
        local_20 = local_14;
        puVar7 = local_18;
      }
      iVar6 = (int)puVar5 + 1;
      *(char *)((int)puVar7 + 0x47) = (char)((uint)iVar6 >> 0x18);
      *(char *)(puVar7 + 0x12) = (char)((uint)iVar6 >> 0x10);
      *(char *)((int)puVar7 + 0x49) = (char)((uint)iVar6 >> 8);
      *(char *)((int)puVar7 + 0x4a) = (char)iVar6;
      local_14 = local_20;
      if (puVar5 == (uint *)0x0) {
        puVar9 = (uint *)0x4b;
      }
      else {
        puVar9 = (uint *)((int)puVar5 + 0x4b);
        puVar8 = local_20;
        if (local_20 < puVar9) {
          do {
            local_14 = puVar8;
            puVar8 = (uint *)((int)local_14 * 2);
          } while (local_14 < puVar9);
          local_70 = 8;
          local_28 = puVar7;
          local_24 = puVar7;
          local_1c = puVar5;
          local_18 = puVar9;
          puVar7 = recovered_10005070((uint)local_14);
          puVar9 = local_18;
          puVar5 = local_1c;
          iVar6 = -0x4b;
          do {
            *(undefined1 *)((int)puVar7 + iVar6 + 0x4b) =
                 *(undefined1 *)((int)local_24 + iVar6 + 0x4b);
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0);
          recovered_100050d0(local_24);
        }
        puVar8 = (uint *)0x0;
        do {
          *(undefined1 *)((int)puVar7 + 0x4b + (int)puVar8) =
               *(undefined1 *)((int)puVar8 + ((uintptr_t)pf_module_state + 0xa9eU));
          puVar8 = (uint *)((int)puVar8 + 1);
        } while (puVar5 != puVar8);
      }
      local_18 = puVar9;
      if (puVar9 == local_14) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = (uint *)((int)local_14 * 2);
        }
        if (local_14 < puVar5) {
          local_70 = 9;
          local_28 = puVar7;
          local_24 = puVar7;
          local_20 = local_14;
          local_14 = puVar5;
          puVar7 = recovered_10005070((uint)puVar5);
          puVar9 = local_18;
          if (local_20 != (uint *)0x0) {
            puVar5 = (uint *)0x0;
            do {
              *(undefined1 *)((int)puVar7 + (int)puVar5) =
                   *(undefined1 *)((int)local_24 + (int)puVar5);
              puVar5 = (uint *)((int)puVar5 + 1);
            } while (local_20 != puVar5);
          }
          recovered_100050d0(local_24);
        }
      }
      *(undefined1 *)((int)puVar7 + (int)puVar9) = 0;
      local_20 = (uint *)((int)puVar9 + 5);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        local_24 = (uint *)((int)puVar9 + 1);
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 10;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar9 = local_18;
        if (local_24 != (uint *)0x0) {
          iVar6 = 0;
          do {
            *(undefined1 *)((int)puVar7 + iVar6) = *(undefined1 *)((int)local_1c + iVar6);
            iVar6 = iVar6 + 1;
          } while (local_24 != (uint *)iVar6);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 1 + (int)puVar9) = 0x6000000;
      local_1c = (uint *)((int)puVar9 + 9);
      if (local_14 < local_1c) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_1c);
        local_70 = 0xb;
        local_28 = puVar7;
        local_24 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_24 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050d0(local_24);
      }
      *(undefined4 *)((int)puVar7 + 5 + (int)local_18) = 0x4000000;
      local_24 = (uint *)((int)local_18 + 0xd);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0xc;
        local_28 = puVar7;
        local_20 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_1c != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_20 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_1c != puVar9);
        }
        recovered_100050d0(local_20);
      }
      else {
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 9 + (int)puVar5) = 0xff000000;
      local_20 = (uint *)((int)puVar5 + 0x11);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0xd;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0xd + (int)local_18) = 0x7000000;
      local_24 = (uint *)((int)local_18 + 0x15);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0xe;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      else {
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x11 + (int)puVar5) = 0x4000000;
      local_20 = (uint *)((int)puVar5 + 0x19);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0xf;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0x15 + (int)local_18) = 0;
      local_24 = (uint *)((int)local_18 + 0x1d);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x10;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      else {
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x19 + (int)puVar5) = 0x8000000;
      local_20 = (uint *)((int)puVar5 + 0x21);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x11;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0x1d + (int)local_18) = 0x4000000;
      local_24 = (uint *)((int)local_18 + 0x25);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x12;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      else {
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x21 + (int)puVar5) = 0x1000000;
      local_20 = (uint *)((int)puVar5 + 0x29);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x13;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0x25 + (int)local_18) = 0xf000000;
      local_24 = (uint *)((int)local_18 + 0x2d);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x14;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      else {
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x29 + (int)puVar5) = 0x8000000;
      local_20 = (uint *)((int)puVar5 + 0x31);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x15;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0x2d + (int)local_18) = 0;
      local_24 = (uint *)((int)local_18 + 0x35);
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x16;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        local_34 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      else {
        local_34 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x31 + (int)local_34) = 0;
      local_20 = (uint *)((int)local_34 + 0x39);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x17;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        local_34 = local_18;
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined4 *)((int)puVar7 + 0x35 + (int)local_34) = 0;
      puVar5 = (uint *)((int)local_34 + 0x3d);
      local_24 = puVar5;
      if (local_14 < puVar5) {
        puVar9 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar9 = local_14;
        }
        do {
          local_14 = puVar9;
          puVar9 = (uint *)((int)local_14 * 2);
        } while (local_14 < puVar5);
        local_70 = 0x18;
        local_28 = puVar7;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_24;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
        local_34 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x39 + (int)local_34) = 0;
      local_34 = (uint *)((int)local_34 + 0x41);
      if (local_14 < local_34) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_34);
        local_70 = 0x19;
        local_20 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_24;
        if (local_24 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_20 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_24 != puVar9);
        }
        recovered_100050d0(local_20);
      }
      *(undefined4 *)((int)puVar7 + 0x3d + (int)local_18) = 0;
      local_20 = (uint *)((int)local_18 + 0x45);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x1a;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_24;
        if (local_34 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_34 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined1 *)((int)puVar7 + (int)local_34) = 0;
      *(undefined2 *)((int)puVar7 + 5 + (int)puVar5) = 0;
      *(undefined1 *)((int)puVar7 + 7 + (int)puVar5) = 0;
      if (local_34 <= local_20) {
        *(uint *)((int)puVar7 + (int)puVar5) =
             (uint)local_20 >> 0x18 | ((uint)local_20 & 0xff0000) >> 8 |
             ((uint)local_20 & 0xff00) << 8 | (int)local_20 << 0x18;
      }
      local_24 = (uint *)((int)local_18 + 0x49);
      local_1c = puVar7;
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x1b;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      else {
        puVar5 = local_18;
      }
      *(char *)((int)puVar7 + 0x45 + (int)puVar5) = (char)local_30;
      *(char *)((int)puVar7 + 0x46 + (int)puVar5) = (char)local_38;
      *(undefined1 *)((int)puVar7 + 0x47 + (int)puVar5) = uVar12;
      *(undefined1 *)((int)(puVar7 + 0x12) + (int)puVar5) = uVar1;
      local_20 = (uint *)((int)puVar5 + 0x4d);
      if (local_14 < local_20) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_20);
        local_70 = 0x1c;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        if (local_24 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_24 != puVar9);
        }
        recovered_100050d0(local_1c);
      }
      *(undefined1 *)((int)puVar7 + 0x49 + (int)puVar5) = uVar14;
      *(undefined1 *)((int)puVar7 + 0x4a + (int)puVar5) = uVar17;
      *(undefined1 *)((int)puVar7 + 0x4b + (int)puVar5) = uVar13;
      *(undefined1 *)((int)(puVar7 + 0x13) + (int)puVar5) = uVar2;
      puVar9 = (uint *)((int)puVar5 + 0x51);
      local_24 = puVar9;
      if (local_14 < puVar9) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < puVar9);
        local_70 = 0x1d;
        local_1c = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar9 = local_24;
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050d0(local_1c);
        puVar5 = local_18;
      }
      *(undefined4 *)((int)puVar7 + 0x4d + (int)puVar5) = 0x4000000;
      local_34 = (uint *)((int)puVar5 + 0x55);
      if (local_14 < local_34) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_34);
        local_70 = 0x1e;
        local_20 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar5 = local_18;
        puVar9 = local_24;
        if (local_24 != (uint *)0x0) {
          puVar8 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar8) =
                 *(undefined1 *)((int)local_20 + (int)puVar8);
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (local_24 != puVar8);
        }
        recovered_100050d0(local_20);
      }
      *(undefined4 *)((int)puVar7 + 0x51 + (int)puVar5) = 0;
      local_1c = (uint *)((int)puVar5 + 0x59);
      if (local_14 < local_1c) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_1c);
        local_70 = 0x1f;
        local_20 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        puVar9 = local_24;
        if (local_34 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_34 != puVar5);
        }
        recovered_100050d0(local_20);
        puVar5 = local_18;
      }
      *(undefined1 *)((int)puVar7 + (int)local_34) = 0;
      *(undefined2 *)((int)puVar7 + 5 + (int)puVar9) = 0;
      *(undefined1 *)((int)puVar7 + 7 + (int)puVar9) = 0;
      if (local_34 <= local_1c) {
        *(uint *)((int)puVar7 + (int)puVar9) =
             (uint)local_1c >> 0x18 | ((uint)local_1c & 0xff0000) >> 8 |
             ((uint)local_1c & 0xff00) << 8 | (int)local_1c << 0x18;
      }
      local_24 = (uint *)((int)puVar5 + 0x5d);
      local_20 = puVar7;
      if (local_14 < local_24) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_24);
        local_70 = 0x20;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_1c != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_1c != puVar5);
        }
        recovered_100050d0(local_20);
      }
      *(char *)((int)puVar7 + 0x59 + (int)local_18) = (char)local_30;
      *(char *)((int)puVar7 + 0x5a + (int)local_18) = (char)local_38;
      *(undefined1 *)((int)puVar7 + 0x5b + (int)local_18) = uVar12;
      *(undefined1 *)((int)(puVar7 + 0x17) + (int)local_18) = uVar1;
      local_18 = (uint *)((int)local_18 + 0x61);
      if (local_14 < local_18) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_18);
        local_70 = 0x21;
        local_20 = puVar7;
        puVar7 = recovered_10005070((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050d0(local_20);
      }
      *(undefined1 *)((int)puVar7 + (int)local_24) = uVar14;
      *(undefined1 *)((int)puVar7 + 5 + (int)local_1c) = uVar17;
      *(undefined1 *)((int)puVar7 + 6 + (int)local_1c) = uVar13;
      *(undefined1 *)((int)puVar7 + 7 + (int)local_1c) = uVar2;
      if (local_2c == (uint *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        local_70 = 0x22;
        pvVar10 = recovered_10005070((int)local_2c * 4);
        recovered_100050d0((void *)0x0);
        puVar5 = (uint *)0x0;
        do {
          *(undefined4 *)((int)pvVar10 + (int)puVar5 * 4) = 0;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (local_2c != puVar5);
        puVar9 = (uint *)0x0;
        puVar5 = puVar7;
        do {
          *(uint **)((int)pvVar10 + (int)puVar9 * 4) = local_18;
          puVar8 = local_18 + 1;
          puVar7 = puVar5;
          puVar23 = local_18;
          local_30 = puVar9;
          if (local_14 < puVar8) {
            puVar7 = (uint *)0x4;
            if (local_14 != (uint *)0x0) {
              puVar7 = local_14;
            }
            do {
              local_14 = puVar7;
              puVar7 = (uint *)((int)local_14 * 2);
            } while (local_14 < puVar8);
            local_70 = 0x24;
            local_38 = local_18;
            local_18 = puVar8;
            puVar7 = recovered_10005070((uint)local_14);
            puVar23 = local_38;
            if (local_38 != (uint *)0x0) {
              puVar9 = (uint *)0x0;
              do {
                *(undefined1 *)((int)puVar7 + (int)puVar9) =
                     *(undefined1 *)((int)puVar5 + (int)puVar9);
                puVar9 = (uint *)((int)puVar9 + 1);
              } while (local_38 != puVar9);
            }
            recovered_100050d0(puVar5);
            puVar8 = local_18;
          }
          local_18 = puVar8;
          *(undefined4 *)((int)puVar7 + (int)puVar23) = 0;
          puVar9 = (uint *)((int)local_30 + 1);
          puVar5 = puVar7;
        } while (puVar9 != local_2c);
      }
      local_2c = local_18 + 1;
      local_3c = pvVar10;
      if (local_14 < local_2c) {
        puVar5 = (uint *)0x4;
        if (local_14 != (uint *)0x0) {
          puVar5 = local_14;
        }
        do {
          local_14 = puVar5;
          puVar5 = (uint *)((int)local_14 * 2);
        } while (local_14 < local_2c);
        local_70 = 0x23;
        puVar5 = recovered_10005070((uint)local_14);
        if (local_18 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar5 + (int)puVar9) = *(undefined1 *)((int)puVar7 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_18 != puVar9);
        }
        recovered_100050d0(puVar7);
        puVar7 = puVar5;
      }
      *(undefined4 *)((int)puVar7 + (int)local_18) = 0;
      local_98 = 0;
      uVar16 = param_4;
      do {
        uVar11 = uVar16;
        if (0x3f < uVar16) {
          uVar11 = 0x40;
        }
        local_20 = (uint *)(uVar11 + (uVar11 == 0));
        local_34 = (uint *)0x0;
        local_ac = local_a4;
        pcVar21 = param_3;
        do {
          pcVar18 = pcVar21;
          if ((char *)0x3f < pcVar21) {
            pcVar18 = (char *)0x40;
          }
          iVar6 = *(int *)((int)local_3c + (local_98 * uVar15 + (int)local_34) * 4);
          if ((uint *)(iVar6 + 4U) <= local_2c) {
            *(uint *)((int)puVar7 + iVar6) =
                 (uint)local_2c >> 0x18 | ((uint)local_2c & 0xff0000) >> 8 |
                 ((uint)local_2c & 0xff00) << 8 | (int)local_2c << 0x18;
          }
          if (local_98 << 6 != param_4) {
            local_38 = (uint *)((int)local_34 * 0x40);
            pcVar20 = param_3 + (int)local_34 * -0x40;
            if ((char *)0x3f < pcVar20) {
              pcVar20 = (char *)0x40;
            }
            local_1c = (uint *)((int)pcVar18 << 2);
            puVar9 = (uint *)((int)pcVar20 << 2);
            iVar6 = 0;
            local_18 = local_ac;
            local_30 = local_2c;
            puVar5 = local_20;
            puVar8 = puVar7;
            local_24 = puVar9;
            do {
              puVar7 = puVar8;
              if ((uint *)param_3 != local_38) {
                if (local_14 < (uint *)((int)local_30 + (int)puVar9)) {
                  puVar5 = (uint *)0x4;
                  if (local_14 != (uint *)0x0) {
                    puVar5 = local_14;
                  }
                  do {
                    local_14 = puVar5;
                    puVar5 = (uint *)((int)local_14 * 2);
                  } while (local_14 < (uint *)((int)local_30 + (int)puVar9));
                  local_70 = 0x26;
                  puVar7 = recovered_10005070((uint)local_14);
                  puVar5 = local_2c;
                  if (local_2c != (uint *)0x0) {
                    puVar9 = (uint *)0x0;
                    do {
                      *(undefined1 *)((int)puVar7 + (int)puVar9) =
                           *(undefined1 *)((int)puVar8 + (int)puVar9);
                      puVar9 = (uint *)((int)puVar9 + 1);
                    } while (local_2c != puVar9);
                  }
                  recovered_100050d0(puVar8);
                  if (local_30 < puVar5) {
                    do {
                      *(undefined1 *)((int)puVar7 + (int)pcVar18 * 4 + -1 + (int)puVar5) =
                           *(undefined1 *)((int)puVar7 + -1 + (int)puVar5);
                      puVar5 = (uint *)((int)puVar5 + -1);
                    } while (local_30 < puVar5);
                  }
                }
                puVar5 = (uint *)0x0;
                do {
                  *(undefined1 *)((int)local_30 + (int)puVar7 + (int)puVar5) =
                       *(undefined1 *)((int)local_18 + (int)puVar5);
                  puVar5 = (uint *)((int)puVar5 + 1);
                } while (local_1c != puVar5);
                local_30 = (uint *)((int)local_2c + (int)local_24);
                puVar5 = local_20;
                puVar9 = local_24;
                local_2c = local_30;
              }
              iVar6 = iVar6 + 1;
              local_18 = local_18 + (int)param_3;
              puVar8 = puVar7;
            } while ((uint *)iVar6 != puVar5);
          }
          local_34 = (uint *)((int)local_34 + 1);
          pcVar21 = pcVar21 + -0x40;
          local_ac = local_ac + 0x40;
          local_40 = puVar7;
        } while (local_34 != (uint *)(uVar15 + (uVar15 == 0)));
        local_98 = local_98 + 1;
        uVar16 = uVar16 - 0x40;
        local_a4 = local_a4 + (int)param_3 * 0x40;
      } while (local_98 != uVar22 + (uVar22 == 0));
      local_70 = 0x25;
      puVar5 = recovered_10003fa0((int)param_1,((uintptr_t)pf_module_state + 0xa59U));
      if (puVar5 == (uint *)0x0) {
        bVar19 = 0;
      }
      else {
        if (local_2c == (uint *)0x0) {
          local_18 = (uint *)CONCAT31((int3)((uint)puVar5 >> 8),1);
        }
        else {
          local_70 = 0x27;
          local_30 = puVar5;
          puVar5 = (uint *)recovered_10004760((int)local_40,1,(int)local_2c,puVar5);
          local_18 = (uint *)CONCAT31((int3)((uint)puVar5 >> 8),puVar5 == local_2c);
          puVar5 = local_30;
        }
        local_70 = 0x28;
        iVar6 = recovered_100043e0((int *)puVar5);
        bVar19 = (byte)local_18 & iVar6 == 0;
      }
      recovered_100050d0(local_3c);
      recovered_100050d0(local_40);
      goto LAB_1000b547;
    }
  }
  bVar19 = 0;
LAB_1000b547:
  recovered_100054f0(&local_74);
  return bVar19;
}

#undef DAT_10011f1c
#undef LAB_1000cb98
#undef PTR_recovered_10005010_10012004
#undef str_10011dff
#undef local_ac
#undef local_a4
#undef local_98
#undef local_74
#undef local_70
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
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
#undef auStackY_16c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000cc80(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;

  param_1[1] = 0;
  uVar2 = 0;
  if ((uint)param_1[2] < param_2) {
    pvVar3 = recovered_10005070(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050d0(pointer);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar2 = param_1[1];
  }
  while (uVar2 < param_2) {
    *(undefined1 *)(*param_1 + uVar2) = *param_3;
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000cd10(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar2 = recovered_10005070(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050d0(pointer);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
      *(undefined1 *)(*param_1 + uVar3) = 0;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_1000cda0(uint in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (in_EDX == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  do {
    uVar3 = uVar3 + 1;
    if (0x1f < uVar3) break;
  } while ((1 << ((byte)uVar3 & 0x1f) & in_EDX) == 0);
  uVar2 = 0;
  uVar4 = in_EDX;
  do {
    uVar2 = uVar2 + (uVar4 & 1);
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  uVar4 = 0xffffffff;
  if (uVar2 < 0x1f) {
    uVar4 = ~(-1 << ((byte)uVar2 & 0x1f));
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ((uVar4 >> 1) + ((in_EDX & in_ECX) >> ((byte)uVar3 & 0x1f)) * 0xff) / uVar4;
  }
  return uVar4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(undefined4 *)(frame + 28))
undefined4 recovered_1000ce30(undefined4 *in_ECX,ushort *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined3 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;

  uVar5 = *(uint *)*in_ECX;
  if (*(uint *)in_ECX[1] <= uVar5) {
    return 0;
  }
  local_14 = 0xff000000;
  iVar2 = *(int *)in_ECX[2];
  if (iVar2 == 3) {
    uVar8 = (undefined1)*in_EDX;
    PF_PART2(local_14, 0) = CONCAT11(uVar8,uVar8);
    PF_PART3(local_14, 0) = CONCAT12(uVar8,(undefined2)local_14);
    uVar8 = 0xff;
    if (*(int *)in_ECX[3] == 0x10) {
      uVar8 = *(undefined1 *)((int)in_EDX + 1);
    }
    local_14 = CONCAT13(uVar8,(undefined3)local_14);
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)in_ECX[3];
    if (iVar2 == 8) {
      uVar8 = (undefined1)*in_EDX;
      PF_PART2(local_14, 0) = CONCAT11(uVar8,uVar8);
    }
    else {
      if (iVar2 - 0xfU < 2) {
        uVar1 = *in_EDX;
        uVar4 = CONCAT12((char)((uVar1 & 0x1f) * 0x20e7f7 >> 0x12),
                         CONCAT11((char)((uVar1 >> 5 & 0x1f) * 0x20e7f7 >> 0x12),
                                  (char)((uVar1 >> 10 & 0x1f) * 0x20e7f7 >> 0x12)));
        if (iVar2 == 0x10) {
          local_14 = CONCAT13(-((*(uint *)in_ECX[7] & 0xf) == 0) |
                              (byte)((uint)(int)(short)uVar1 >> 0xf),uVar4);
        }
        else {
          local_14 = CONCAT13(0xff,uVar4);
        }
        goto LAB_10010a35;
      }
      if (iVar2 == 0x20) {
        PF_PART2(local_14, 0) = CONCAT11(*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1]);
        PF_PART3(local_14, 0) = CONCAT12((char)*in_EDX,(undefined2)local_14);
        local_14 = CONCAT13(*(undefined1 *)((int)in_EDX + 3),(undefined3)local_14);
        goto LAB_10010a35;
      }
      if (iVar2 != 0x18) {
        return 0;
      }
      PF_PART2(local_14, 0) = CONCAT11(*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1]);
      uVar8 = (undefined1)*in_EDX;
    }
    PF_PART3(local_14, 0) = CONCAT12(uVar8,(undefined2)local_14);
    local_14 = CONCAT13(0xff,(undefined3)local_14);
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    if (*(int *)in_ECX[3] == 8) {
      uVar5 = (uint)(byte)*in_EDX;
    }
    else {
      uVar5 = (uint)*in_EDX;
    }
    uVar7 = uVar5 - *(uint *)in_ECX[4];
    if (uVar5 < *(uint *)in_ECX[4]) {
      return 0;
    }
    if (*(uint *)in_ECX[5] <= uVar7) {
      return 0;
    }
    recovered_10000f90(&local_14,(void *)(uVar7 * 4 + *(int *)in_ECX[6]),4);
    uVar5 = *(uint *)*in_ECX;
  }
LAB_10010a35:
  uVar7 = *(uint *)in_ECX[8];
  uVar6 = uVar5 / uVar7;
  uVar5 = uVar5 % uVar7;
  if ((*(uint *)in_ECX[7] & 0x10) != 0) {
    uVar5 = ~uVar5 + uVar7;
  }
  if ((*(uint *)in_ECX[7] & 0x20) == 0) {
    uVar6 = ~uVar6 + *(int *)in_ECX[9];
  }
  recovered_10000f90((void *)((uVar6 * uVar7 + uVar5) * 4 + *(int *)in_ECX[10]),&local_14,4);
  piVar3 = (int *)*in_ECX;
  *piVar3 = *piVar3 + 1;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_18 (*(uint *)(frame + 24))
undefined8 recovered_1000d040(int in_ECX,uint in_EDX,uint *param_3,int param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;

  uVar8 = *param_3;
  local_18 = param_3[1];
  uVar2 = 0;
  if (local_18 == 0 && (uint)(in_EDX < uVar8) <= -local_18) {
    while (uVar6 = local_18, 3 < in_EDX - uVar8) {
      uVar11 = uVar8 + 4;
      uVar6 = local_18 + (0xfffffffb < uVar8);
      uVar5 = *(uint *)(in_ECX + uVar8);
      param_3[1] = uVar6;
      *param_3 = uVar11;
      if ((uVar6 != 0 || -uVar6 < (uint)(in_EDX < uVar11)) || (in_EDX - uVar11 < 4)) break;
      uVar10 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar6 = *(uint *)(in_ECX + uVar11);
      uVar11 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar5 = uVar8 + 8;
      local_18 = local_18 + (0xfffffff7 < uVar8);
      *param_3 = uVar5;
      param_3[1] = local_18;
      if (uVar10 == 0) {
        uVar2 = CONCAT31((int3)((uint)param_3 >> 8),uVar11 == 0);
        goto LAB_100112a5;
      }
      uVar6 = local_18;
      if ((local_18 != 0 || -local_18 < (uint)(in_EDX < uVar5)) ||
         (uVar7 = -(uint)(in_EDX < uVar5) - local_18, uVar8 = (uint)(in_EDX - uVar5 < uVar11),
         uVar6 = uVar7 - uVar8, uVar7 < uVar8)) break;
      puVar3 = (uint *)(in_ECX + uVar5);
      if ((uVar10 == 1) && (3 < uVar11)) {
        uVar8 = *puVar3;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if ((uVar8 < 0x101) && (uVar8 * 3 + 4 <= uVar11)) {
          uVar8 = uVar8 * 3;
          *(undefined4 *)(param_4 + 0x1c) = 0;
          uVar6 = 0;
          if (*(uint *)(param_4 + 0x20) < uVar8) {
            pvVar4 = recovered_10005070(uVar8);
            pointer = *(void **)(param_4 + 0x18);
            iVar1 = *(int *)(param_4 + 0x1c);
            if (iVar1 != 0) {
              iVar9 = 0;
              do {
                *(undefined1 *)((int)pvVar4 + iVar9) = *(undefined1 *)((int)pointer + iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar1 != iVar9);
            }
            recovered_100050d0(pointer);
            *(void **)(param_4 + 0x18) = pvVar4;
            *(uint *)(param_4 + 0x20) = uVar8;
            uVar6 = *(uint *)(param_4 + 0x1c);
          }
          while (uVar6 < uVar8) {
            *(undefined1 *)(*(int *)(param_4 + 0x18) + uVar6) = 0;
            uVar6 = *(int *)(param_4 + 0x1c) + 1;
            *(uint *)(param_4 + 0x1c) = uVar6;
          }
          recovered_10000f90(*(void **)(param_4 + 0x18),puVar3 + 1,uVar6);
          uVar5 = *param_3;
          local_18 = param_3[1];
        }
      }
      else if ((uVar10 == 0x11) && (uVar11 != 0)) {
        *(uint *)(param_4 + 0x14) = (uint)(byte)*puVar3;
      }
      uVar8 = uVar5 + uVar11;
      local_18 = local_18 + CARRY4(uVar5,uVar11);
      *param_3 = uVar8;
      param_3[1] = local_18;
      uVar6 = local_18;
      if (local_18 != 0 || -local_18 < (uint)(in_EDX < uVar8)) break;
    }
    uVar2 = 0;
    local_18 = uVar6;
  }
LAB_100112a5:
  return CONCAT44(local_18,uVar2);
}

#undef local_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_1000d240(int in_ECX,uint in_EDX,uint *param_3,uint param_4,uint *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = *param_3;
  uVar1 = param_3[1];
  if (param_4 == 4) {
    if (uVar1 != 0 || -uVar1 < (uint)(in_EDX < uVar2)) {
      return 0;
    }
    uVar1 = 0;
    if (in_EDX - uVar2 < 4) {
      return 0;
    }
    uVar2 = *(uint *)(in_ECX + uVar2);
  }
  else {
    if (uVar1 != 0 || -uVar1 < (uint)(in_EDX < uVar2)) {
      return 0;
    }
    if (in_EDX - uVar2 < 8) {
      return 0;
    }
    uVar1 = *(uint *)(in_ECX + uVar2);
    uVar2 = *(uint *)(in_ECX + 4 + uVar2);
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *param_5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_5[1] = uVar1;
  uVar2 = *param_3;
  *param_3 = *param_3 + param_4;
  param_3[1] = param_3[1] + (uint)CARRY4(uVar2,param_4);
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d2b0(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_10005070(uVar5 * 8);
      pointer = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_100050d0(pointer);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  iVar1 = *param_1;
  uVar2 = *param_2;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = param_2[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  param_1[1] = uVar4 + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000d350(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar2 = recovered_10005070(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050d0(pointer);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
    uVar3 = param_1[1];
    if (uVar3 < param_2) {
      do {
        *(undefined1 *)(*param_1 + uVar3) = *param_3;
        uVar3 = param_1[1] + 1;
        param_1[1] = uVar3;
      } while (uVar3 < param_2);
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8fU)))
#define _DAT_100161c8 (*(float *)(((uintptr_t)pf_module_state + 0x93fU)))
#define local_14 (*(uint *)(frame + 60))
#define local_18 (*(int *)(frame + 56))
#define local_1c (*(int *)(frame + 52))
#define local_20 (*(uint *)(frame + 48))
#define local_24 (*(ushort *)(frame + 44))
#define local_28 (*(int *)(frame + 40))
#define local_2c (*(uint *)(frame + 36))
#define local_34 (*(float (*)[2])(frame + 28))
bool recovered_1000d3e0(int in_ECX,uint in_EDX,int param_3,uint param_4,int param_5,uint *param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  ushort in_FPUControlWord = pf_fpu_control();

  if (param_5 != 0 || (uint)-param_5 < (uint)(in_EDX < param_4)) {
    return false;
  }
  if (3 < in_EDX - param_4) {
    uVar1 = param_4 + 4;
    iVar5 = param_5 + (uint)(0xfffffffb < param_4);
    uVar2 = *(uint *)(in_ECX + param_4);
    *param_6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((iVar5 == 0 && (uint)(in_EDX < uVar1) <= (uint)-iVar5) && (3 < in_EDX - uVar1)) {
      uVar4 = param_4 + 8;
      iVar5 = param_5 + (uint)(0xfffffff7 < param_4);
      uVar2 = *(uint *)(in_ECX + uVar1);
      param_6[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if ((iVar5 == 0 && (uint)(in_EDX < uVar4) <= (uint)-iVar5) && (3 < in_EDX - uVar4)) {
        uVar1 = param_4 + 0xc;
        iVar5 = param_5 + (uint)(0xfffffff3 < param_4);
        uVar2 = *(uint *)(in_ECX + uVar4);
        param_6[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
        ;
        if ((iVar5 == 0 && (uint)(in_EDX < uVar1) <= (uint)-iVar5) && (3 < in_EDX - uVar1)) {
          uVar2 = *(uint *)(in_ECX + uVar1);
          uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          local_20 = param_4 + 0x10;
          local_1c = param_5 + (uint)(0xffffffef < param_4);
          if (uVar2 != 0) {
            if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < local_20)) {
              return false;
            }
            if (-(uint)(in_EDX < local_20) - local_1c < (uint)(in_EDX - local_20 < uVar2)) {
              return false;
            }
            bVar6 = CARRY4(local_20,uVar2);
            local_20 = local_20 + uVar2;
            local_1c = local_1c + (uint)bVar6;
          }
          if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < local_20)) {
            return false;
          }
          local_18 = in_ECX;
          if (3 < in_EDX - local_20) {
            while( true ) {
              uVar2 = local_20 + 4;
              iVar5 = local_1c + (uint)(0xfffffffb < local_20);
              if (iVar5 != 0 || (uint)-iVar5 < (uint)(in_EDX < uVar2)) {
                return false;
              }
              if (in_EDX - uVar2 < 4) {
                return false;
              }
              uVar1 = *(uint *)(local_18 + local_20);
              uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18;
              uVar2 = *(uint *)(local_18 + uVar2);
              local_14 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18;
              uVar2 = local_20 + 8;
              local_1c = local_1c + (uint)(0xfffffff7 < local_20);
              if (uVar1 == 0) break;
              if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < uVar2)) {
                return false;
              }
              if (-(uint)(in_EDX < uVar2) - local_1c < (uint)(in_EDX - uVar2 < local_14)) {
                return false;
              }
              if ((uVar1 == 6) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18;
                if (0xfe < uVar1) {
                  uVar1 = 0xff;
                }
                param_6[4] = uVar1;
              }
              else if ((uVar1 == 8) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                *(bool *)(param_6 + 3) =
                     ((uVar1 >> 0x18 != 0 || (uVar1 & 0xff0000) != 0) || (uVar1 & 0xff00) != 0) ||
                     (uVar1 & 0xff) != 0;
              }
              else if ((uVar1 == 0xf) && (7 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                param_6[5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
                uVar1 = *(uint *)(local_18 + 4 + uVar2);
                param_6[6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
              }
              else if ((uVar1 == 0x21) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18;
                local_34[0] = 0.0;
                recovered_10000f90(local_34,&local_2c,4);
                if (local_34[0] <= 0.0) {
                  param_6[4] = 0;
                }
                else if (1.0 <= local_34[0]) {
                  param_6[4] = 0xff;
                }
                else {
                  local_24 = in_FPUControlWord | 0xc00;
                  param_6[4] = (int)ROUND(local_34[0] * _DAT_100161c8 +
                                          (float)*(double *)
                                                  (&DAT_10015f90 +
                                                  (uint)(0.0 <= local_34[0] * _DAT_100161c8) * 8));
                }
              }
              local_20 = uVar2 + local_14;
              local_1c = local_1c + (uint)CARRY4(uVar2,local_14);
              if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < local_20)) {
                return false;
              }
              if (in_EDX - local_20 < 4) {
                return false;
              }
            }
            if (local_14 == 0) {
              local_20 = *(uint *)(param_3 + 0x10);
              if (local_20 == 4) {
                if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < uVar2)) {
                  return false;
                }
                if (in_EDX - uVar2 < 4) {
                  return false;
                }
                uVar4 = 0;
                uVar1 = *(uint *)(local_18 + uVar2);
              }
              else {
                if (local_1c != 0 || (uint)-local_1c < (uint)(in_EDX < uVar2)) {
                  return false;
                }
                if (in_EDX - uVar2 < 8) {
                  return false;
                }
                uVar4 = *(uint *)(local_18 + uVar2);
                uVar1 = *(uint *)(local_18 + 4 + uVar2);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
              }
              local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18;
              param_6[7] = local_14;
              param_6[8] = uVar4;
              local_2c = uVar2 + local_20;
              local_28 = local_1c + (uint)CARRY4(uVar2,local_20);
              uVar3 = recovered_1000d240(local_18,in_EDX,&local_2c,local_20,(uint *)local_34);
              if ((char)uVar3 != '\0') {
                return (local_14 != 0 || uVar4 != 0) && (param_6[1] != 0 && *param_6 != 0);
              }
            }
          }
        }
      }
    }
  }
  return false;
}

#undef DAT_10015f90
#undef _DAT_100161c8
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_34

#undef DAT_10011c88
#define DAT_10011c88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x927U)))
#undef DAT_10011f70
#define DAT_10011f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0fU)))
#undef LAB_1000df90
#define LAB_1000df90 (*(uint8_t *)(0x1000df90U))
#undef PTR_recovered_10005010_10012004
#define PTR_recovered_10005010_10012004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define local_18 (*(uint *)(frame + 376))
#define local_14 (*(undefined4 *)(frame + 380))
#define auStackY_17c (*(undefined1 (*)[128])(frame + 20))
#define uStack_22 (*(undefined1 *)(frame + 366))
#define uStack_21 (*(undefined1 *)(frame + 367))
#define local_d4 (*(int *)(frame + 188))
#define local_d0 (*(int *)(frame + 192))
#define local_cc (*(uint *)(frame + 196))
#define local_c8 (*(int *)(frame + 200))
#define local_c4 (*(undefined4 *)(frame + 204))
#define local_c0 (*(undefined4 *)(frame + 208))
#define local_ac (*(undefined * *)(frame + 228))
#define local_a8 (*(undefined * *)(frame + 232))
#define local_a4 (*(undefined1 * *)(frame + 236))
#define local_a0 (*(undefined1 * *)(frame + 240))
#define local_9c (*(undefined1 * *)(frame + 244))
#define local_8c (*(void * *)(frame + 260))
#define local_88 (*(uint *)(frame + 264))
#define local_80 (*(uint *)(frame + 272))
#define local_7c (*(uint *)(frame + 276))
#define local_78 (*(uint *)(frame + 280))
#define local_74 (*(uint *)(frame + 284))
#define local_70 (*(int *)(frame + 288))
#define local_6c (*(uint *)(frame + 292))
#define local_68 (*(int *)(frame + 296))
#define local_64 (*(uint *)(frame + 300))
#define local_60 (*(uint *)(frame + 304))
#define local_5c (*(uint *)(frame + 308))
#define local_58 (*(uint *)(frame + 312))
#define local_54 (*(uint *)(frame + 316))
#define local_50 (*(uint *)(frame + 320))
#define local_4c (*(uint *)(frame + 324))
#define local_48 (*(void * *)(frame + 328))
#define local_44 (*(uint *)(frame + 332))
#define local_40 (*(undefined4 *)(frame + 336))
#define local_3c (*(uint *)(frame + 340))
#define local_38 (*(uint *)(frame + 344))
#define local_34 (*(uint *)(frame + 348))
#define local_30 (*(int *)(frame + 352))
#define local_2c (*(uint *)(frame + 356))
#define local_28 (*(uint *)(frame + 360))
#define local_24 (*(uint *)(frame + 364))
#define local_20 (*(uint *)(frame + 368))
#define local_1c (*(uint *)(frame + 372))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d790
 */

undefined4 recovered_1000d790(int in_ECX,uint in_EDX,int param_3,uint *param_4,int *param_5)

{
  unsigned char frame[432] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_EAX = 0;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;

  local_a4 = local_24 + 0x20;
  local_9c = auStackY_17c + 0x80;
  uVar10 = param_4[7];
  local_3c = param_4[8];
  local_ac = PTR_recovered_10005010_10012004;
  local_a8 = &DAT_10011f70;
  local_a0 = &LAB_1000df90;
  local_30 = in_ECX;
  recovered_100054d0(&local_c4);
  local_14 = 0;
  local_28 = in_EDX;
  local_1c = uVar10;
  if (local_3c != 0 || -local_3c < (uint)(in_EDX < uVar10)) goto LAB_1000d84c;
  uVar13 = local_18;
  if (3 < in_EDX - uVar10) {
    uVar5 = uVar10 + 4;
    iVar11 = local_3c + (0xfffffffb < uVar10);
    if ((iVar11 == 0 && (uint)(in_EDX < uVar5) <= (uint)-iVar11) && (3 < in_EDX - uVar5)) {
      uVar12 = uVar10 + 8;
      iVar11 = local_3c + (0xfffffff7 < uVar10);
      if ((!(iVar11 != 0 || (uint)-iVar11 < (uint)(in_EDX < uVar12))) && (3 < in_EDX - uVar12)) {
        uVar13 = *(uint *)(local_30 + uVar5);
        local_38 = (uint)*(byte *)(local_30 + uVar12);
        local_2c = (uint)*(byte *)(local_30 + 1 + uVar12);
        local_20 = (uint)*(byte *)(local_30 + 2 + uVar12);
        local_34 = (uint)*(byte *)(local_30 + 3 + uVar12);
        uVar5 = *(uint *)(local_30 + uVar10);
        uVar12 = uVar10 + 0xc;
        iVar11 = local_3c + (0xfffffff3 < uVar10);
        local_18 = uVar13;
        if (*(int *)(param_3 + 0x10) == 4) {
          local_14 = 0;
          if (iVar11 != 0 || (uint)-iVar11 < (uint)(in_EDX < uVar12)) goto LAB_1000d84c;
          uVar6 = 0;
          local_14 = 0;
          if (in_EDX - uVar12 < 4) goto LAB_1000d84c;
          uVar10 = *(uint *)(local_30 + uVar12);
        }
        else {
          local_14 = 0;
          if (iVar11 != 0 || (uint)-iVar11 < (uint)(in_EDX < uVar12)) goto LAB_1000d84c;
          if (in_EDX - uVar12 < 8) goto LAB_1000d845;
          uVar6 = *(uint *)(local_30 + uVar12);
          uVar10 = *(uint *)(local_30 + 4 + uVar12);
          uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        }
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        local_3c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        if (local_3c == *param_4) {
          local_18 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
          if (local_18 == param_4[1]) {
            local_14 = 0;
            if (uVar10 == 0 && uVar6 == 0) goto LAB_1000d84c;
            uVar13 = local_18;
            if (param_4[2] < 6) {
              local_38 = local_38 * 0x1000000;
              local_2c = local_2c * 0x10000;
              local_20 = local_20 << 8;
              uVar13 = (local_38 + local_2c | local_20) + local_34;
              local_14 = 0;
              if (uVar13 != *(uint *)(&DAT_10011c88 + param_4[2] * 4)) goto LAB_1000d84c;
              local_14 = 0;
              if (uVar6 == 0 && (uint)(in_EDX < uVar10) <= -uVar6) {
                local_14 = 0;
                local_64 = uVar13;
                if (3 < in_EDX - uVar10) {
                  uVar13 = uVar10 + 4;
                  iVar11 = uVar6 + (0xfffffffb < uVar10);
                  if (iVar11 == 0 && (uint)(in_EDX < uVar13) <= (uint)-iVar11) {
                    if (in_EDX - uVar13 < 4) {
LAB_1000d9dd:
                      local_14 = 0;
                    }
                    else {
                      uVar5 = *(uint *)(local_30 + uVar10);
                      uVar13 = *(uint *)(local_30 + uVar13);
                      local_d4 = uVar10 + 8;
                      local_d0 = uVar6 + (0xfffffff7 < uVar10);
                      local_14 = 0;
                      if (((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18) == local_3c) &&
                         ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                          uVar13 << 0x18) == local_18)) {
                        local_3c = local_3c + 0x3f;
                        local_50 = local_3c >> 6;
                        local_18 = local_18 + 0x3f;
                        local_5c = local_18 >> 6;
                        if ((0x3f < local_3c) &&
                           ((int)((ulonglong)local_50 * (ulonglong)local_5c >> 0x20) != 0))
                        goto LAB_1000d9dd;
                        uVar10 = local_5c * local_50;
                        local_c0 = 0xffffffff;
                        recovered_1000e100((int *)&local_8c,uVar10);
                        if (uVar10 != 0) {
                          iVar11 = 0;
                          do {
                            uVar7 = recovered_1000d240(local_30,local_28,(int)&local_d4,
                                                       *(uint *)(param_3 + 0x10),
                                                       (uint *)((int)local_8c + iVar11));
                            if (((char)uVar7 == '\0') ||
                               (*(int *)((int)local_8c + iVar11) == 0 &&
                                *(int *)((int)local_8c + iVar11 + 4) == 0)) goto LAB_1000db30;
                            iVar11 = iVar11 + 8;
                            uVar10 = uVar10 - 1;
                          } while (uVar10 != 0);
                        }
                        local_c8 = 0;
                        local_cc = 0;
                        uVar7 = recovered_1000d240(local_30,local_28,(int)&local_d4,
                                                   *(uint *)(param_3 + 0x10),&local_cc);
                        local_14 = 0;
                        if (((char)uVar7 != '\0') && (local_c8 == 0 && local_cc == 0)) {
                          uVar10 = *param_4;
                          if (((uVar10 == 0) ||
                              ((int)((ulonglong)uVar10 * (ulonglong)param_4[1] >> 0x20) == 0)) &&
                             (uVar10 = param_4[1] * uVar10, uVar10 < 0x40000000)) {
                            local_48 = (void *)((uint)local_48 & 0xffffff00);
                            local_c0 = 1;
                            recovered_1000cc80(param_5,uVar10 * 4,(undefined1 *)&local_48);
                            local_14 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                            if (0x3f < local_18) {
                              local_38 = local_38 + local_2c + local_20 + local_34;
                              local_6c = 0;
                              local_68 = 0;
                              local_58 = 0;
                              do {
                                if (0x3f < local_3c) {
                                  iVar11 = local_58 * local_50;
                                  local_74 = local_58 << 6;
                                  local_78 = 0;
                                  local_70 = 0;
                                  local_4c = 0;
                                  do {
                                    iVar8 = local_4c + iVar11;
                                    local_1c = *(uint *)((int)local_8c + iVar8 * 8);
                                    local_20 = *(uint *)((int)local_8c + iVar8 * 8 + 4);
                                    if ((local_1c < local_28) <= local_20) goto LAB_1000db30;
                                    local_7c = *param_4;
                                    uVar13 = local_4c * 0x40;
                                    uVar10 = local_7c + local_4c * -0x40;
                                    if (0x3f < uVar10) {
                                      uVar10 = 0x40;
                                    }
                                    local_54 = param_4[1];
                                    uVar5 = local_54 - local_74;
                                    if (0x3f < uVar5) {
                                      uVar5 = 0x40;
                                    }
                                    uVar5 = uVar5 * uVar10;
                                    if ((uVar5 != 0) &&
                                       ((int)((ulonglong)uVar5 * (ulonglong)local_64 >> 0x20) != 0))
                                    goto LAB_1000db30;
                                    uVar10 = local_28 - local_1c;
                                    local_2c = iVar8 + 1;
                                    local_34 = local_88;
                                    local_18 = uVar10;
                                    if ((local_2c < local_88) &&
                                       (uVar12 = *(uint *)((int)local_8c + iVar8 * 8 + 8),
                                       puVar1 = (uint *)((int)local_8c + iVar8 * 8 + 0xc),
                                       local_20 < *puVar1 ||
                                       local_20 - *puVar1 < (uint)(local_1c < uVar12))) {
                                      local_18 = uVar12 - local_1c;
                                    }
                                    local_20 = uVar5 * local_64;
                                    local_48 = (void *)0x0;
                                    local_44 = 0;
                                    local_40 = 0;
                                    iVar8 = *(int *)(param_3 + 0x14);
                                    if (iVar8 == 2) {
                                      if (local_2c < local_88) {
                                        local_c0 = 4;
                                        uVar7 = recovered_1000e4b0(local_1c + local_30,local_18,
                                                                   (int)&local_48);
                                        if (((byte)uVar7 & local_44 == local_20) == 1)
                                        goto LAB_1000ddac;
                                      }
LAB_1000df79:
                                      local_44 = 0;
                                      recovered_100050d0(local_48);
                                      goto LAB_1000db30;
                                    }
                                    if (iVar8 == 1) {
                                      local_c0 = 3;
                                      uVar7 = recovered_1000e1a0(local_1c + local_30,local_18,uVar5,
                                                                 local_64,(uint)&local_48);
                                      if ((char)uVar7 == '\0') goto LAB_1000df79;
                                    }
                                    else {
                                      if ((iVar8 != 0) || (uVar10 < local_20)) goto LAB_1000df79;
                                      local_c0 = 2;
                                      recovered_1000e5d0((int *)&local_48,0,
                                                         (undefined1 *)(local_1c + local_30),
                                                         (undefined1 *)(local_1c + local_30) +
                                                         local_20);
                                    }
LAB_1000ddac:
                                    if (local_54 != local_74) {
                                      local_54 = local_54 + local_68;
                                      if (0x3f < local_54) {
                                        local_54 = 0x40;
                                      }
                                      uVar10 = local_7c + local_70;
                                      local_54 = local_54 + (local_54 == 0);
                                      if (0x3f < uVar10) {
                                        uVar10 = 0x40;
                                      }
                                      iVar8 = uVar10 * local_38;
                                      local_60 = 0;
                                      local_34 = local_6c;
                                      local_80 = 0;
                                      do {
                                        uVar5 = uVar10 + (uVar10 == 0);
                                        uVar12 = local_78;
                                        uVar6 = local_60;
                                        if (local_7c != uVar13) {
                                          do {
                                            uVar2 = param_4[2];
                                            uVar3 = param_4[4];
                                            local_24 = 0;
                                            uVar9 = 0xff;
                                            if (uVar2 < 6) {
                                              if ((3U >> (uVar2 & 0x1f) & 1) == 0) {
                                                if ((0xcU >> (uVar2 & 0x1f) & 1) == 0) {
                                                  if ((uint)*(byte *)((int)local_48 + uVar6) * 3 + 2
                                                      < *(uint *)(param_3 + 0x1c)) {
                                                    iVar4 = (uint)*(byte *)((int)local_48 + uVar6) *
                                                            3;
                                                    iVar14 = *(int *)(param_3 + 0x18);
                                                    local_24 = (ushort)
                                                               CONCAT11(*(undefined1 *)
                                                                         (iVar14 + 1 + iVar4),
                                                                        *(undefined1 *)
                                                                         (iVar14 + iVar4));
                                                    local_24 = CONCAT12(*(undefined1 *)
                                                                          (iVar14 + 2 + iVar4),
                                                                         local_24);
                                                  }
                                                  bVar15 = uVar2 == 5;
                                                }
                                                else {
                                                  local_24 = (ushort)
                                                             CONCAT11(*(undefined1 *)
                                                                       ((int)local_48 + uVar6),
                                                                      *(undefined1 *)
                                                                       ((int)local_48 + uVar6));
                                                  local_24 = CONCAT12(*(undefined1 *)
                                                                        ((int)local_48 + uVar6),
                                                                       local_24);
                                                  bVar15 = uVar2 == 3;
                                                }
                                                iVar14 = 1;
                                              }
                                              else {
                                                local_24 = (ushort)
                                                           CONCAT11(*(undefined1 *)
                                                                     ((int)local_48 + uVar6 + 1),
                                                                    *(undefined1 *)
                                                                     ((int)local_48 + uVar6));
                                                local_24 = CONCAT12(*(undefined1 *)
                                                                      ((int)local_48 + uVar6 + 2),
                                                                     local_24);
                                                iVar14 = 3;
                                                bVar15 = uVar2 == 1;
                                              }
                                              local_2c = uVar3;
                                              if (bVar15) {
                                                uVar9 = (uint)*(byte *)((int)local_48 +
                                                                       uVar6 + iVar14);
                                              }
                                            }
                                            local_24 = CONCAT13((char)((uVar9 * uVar3 + 0x7f) /
                                                                       0xff),local_24);
                                            local_c0 = 5;
                                            local_20 = uVar5;
                                            local_1c = uVar12;
                                            local_18 = uVar6;
                                            recovered_10000f90((void *)((*param_4 * local_34 +
                                                                        uVar12) * 4 + *param_5),
                                                               &local_24,4);
                                            uVar12 = local_1c + 1;
                                            uVar6 = local_18 + local_38;
                                            uVar5 = local_20 - 1;
                                          } while (uVar5 != 0);
                                        }
                                        local_80 = local_80 + 1;
                                        local_34 = local_34 + 1;
                                        local_60 = local_60 + iVar8;
                                      } while (local_80 != local_54);
                                    }
                                    local_44 = 0;
                                    recovered_100050d0(local_48);
                                    local_4c = local_4c + 1;
                                    local_70 = local_70 + -0x40;
                                    local_78 = local_78 + 0x40;
                                  } while (local_4c != local_50);
                                }
                                local_58 = local_58 + 1;
                                local_68 = local_68 + -0x40;
                                local_6c = local_6c + 0x40;
                              } while (local_58 != local_5c);
                            }
                          }
                          else {
LAB_1000db30:
                            local_14 = 0;
                          }
                        }
                        local_88 = 0;
                        recovered_100050d0(local_8c);
                      }
                    }
                  }
                }
              }
              goto LAB_1000d84c;
            }
          }
        }
      }
    }
  }
LAB_1000d845:
  local_18 = uVar13;
  local_14 = 0;
LAB_1000d84c:
  recovered_100054f0(&local_c4);
  return local_14;
}

#undef DAT_10011c88
#undef DAT_10011f70
#undef LAB_1000df90
#undef PTR_recovered_10005010_10012004
#undef local_18
#undef local_14
#undef auStackY_17c
#undef uStack_22
#undef uStack_21
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_8c
#undef local_88
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000e000(byte *in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  uVar4 = (uint)in_EDX[3];
  if (uVar4 != 0xff) {
    if (uVar4 == 0) {
      if (in_ECX[3] != 0) {
        return;
      }
    }
    else if (in_ECX[3] != 0) {
      iVar3 = (uVar4 ^ 0xff) * (uint)in_ECX[3];
      uVar2 = (iVar3 + 0x7fU & 0xffff) / 0xff + uVar4;
      uVar1 = uVar2 >> 1;
      *in_ECX = (byte)((*in_EDX * uVar4 + ((uint)*in_ECX * iVar3 + 0x7f) / 0xff + uVar1) / uVar2);
      in_ECX[1] = (byte)((in_EDX[1] * uVar4 + ((uint)in_ECX[1] * iVar3 + 0x7f) / 0xff + uVar1) /
                        uVar2);
      in_ECX[2] = (byte)((in_EDX[2] * uVar4 + ((uint)in_ECX[2] * iVar3 + 0x7f) / 0xff + uVar1) /
                        uVar2);
      in_ECX[3] = (byte)uVar2;
      return;
    }
  }
  recovered_10000f90(in_ECX,in_EDX,4);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000e100(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar3 = recovered_10005070(param_2 * 8);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        uVar2 = *(undefined4 *)((int)pointer + iVar5 * 8);
        *(undefined4 *)((int)pvVar3 + iVar5 * 8 + 4) = *(undefined4 *)((int)pointer + iVar5 * 8 + 4)
        ;
        *(undefined4 *)((int)pvVar3 + iVar5 * 8) = uVar2;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    recovered_100050d0(pointer);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar4 = param_1[1];
    if (uVar4 < param_2) {
      do {
        *(undefined4 *)((int)pvVar3 + uVar4 * 8 + 4) = 0;
        *(undefined4 *)((int)pvVar3 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
      param_1[1] = param_2;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_28 (*(uint *)(frame + 24))
#define local_30 (*(undefined4 *)(frame + 16))
undefined4 recovered_1000e1a0(int in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  ushort uVar2;
  void *pointer;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;

  uVar10 = param_4 * param_3;
  param_5[1] = 0;
  uVar3 = 0;
  if ((uint)param_5[2] < uVar10) {
    pvVar4 = recovered_10005070(uVar10);
    pointer = (void *)*param_5;
    iVar11 = param_5[1];
    if (iVar11 != 0) {
      iVar8 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar8) = *(undefined1 *)((int)pointer + iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar11 != iVar8);
    }
    recovered_100050d0(pointer);
    *param_5 = (int)pvVar4;
    param_5[2] = uVar10;
    uVar3 = param_5[1];
  }
  while (uVar3 < uVar10) {
    *(undefined1 *)(*param_5 + uVar3) = 0;
    uVar3 = param_5[1] + 1;
    param_5[1] = uVar3;
  }
  if (param_4 == 0) {
    local_30 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    local_30 = 0;
    uVar3 = 0;
    local_28 = 0;
    do {
      if (param_3 == 0) {
        bVar12 = false;
LAB_100124f4:
        if (bVar12) {
          return local_30;
        }
      }
      else {
        if (uVar3 < in_EDX) {
          uVar10 = 0;
          do {
            uVar9 = uVar3 + 1;
            uVar5 = (uint)*(byte *)(in_ECX + uVar3);
            if (uVar5 < 0x7f) {
              if (in_EDX <= uVar9) {
                return local_30;
              }
              if (param_3 - uVar10 <= uVar5) {
                return local_30;
              }
              uVar6 = uVar5 + 1;
              uVar1 = *(undefined1 *)(in_ECX + 1 + uVar3);
              uVar3 = uVar3 + 2;
              iVar11 = param_4 * uVar10 + local_28;
              uVar9 = uVar6;
              do {
                *(undefined1 *)(*param_5 + iVar11) = uVar1;
                iVar11 = iVar11 + param_4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            else {
              if (uVar5 == 0x80) {
                if (in_EDX - uVar9 < 2) {
                  return local_30;
                }
                uVar2 = *(ushort *)(in_ECX + 1 + uVar3);
                uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
                if (param_3 - uVar10 <= uVar6 - 1) {
                  return local_30;
                }
                uVar9 = uVar3 + 3;
                if (in_EDX - uVar9 < uVar6) {
                  return local_30;
                }
                puVar7 = (undefined1 *)(in_ECX + uVar9);
                iVar11 = param_4 * uVar10 + local_28;
                uVar3 = uVar6;
                do {
                  *(undefined1 *)(*param_5 + iVar11) = *puVar7;
                  iVar11 = iVar11 + param_4;
                  puVar7 = puVar7 + 1;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              else {
                if (uVar5 == 0x7f) {
                  if (in_EDX - uVar9 < 3) {
                    return local_30;
                  }
                  uVar2 = *(ushort *)(in_ECX + 1 + uVar3);
                  uVar6 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
                  if (param_3 - uVar10 <= uVar6 - 1) {
                    return local_30;
                  }
                  uVar1 = *(undefined1 *)(in_ECX + 3 + uVar3);
                  uVar3 = uVar3 + 4;
                  iVar11 = param_4 * uVar10 + local_28;
                  uVar9 = uVar6;
                  do {
                    *(undefined1 *)(*param_5 + iVar11) = uVar1;
                    iVar11 = iVar11 + param_4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                  goto LAB_100124ba;
                }
                uVar6 = 0x100 - uVar5;
                if (param_3 - uVar10 < uVar6) {
                  return local_30;
                }
                if (in_EDX - uVar9 < uVar6) {
                  return local_30;
                }
                puVar7 = (undefined1 *)(in_ECX + uVar9);
                uVar5 = uVar5 | 0xffffff00;
                iVar11 = param_4 * uVar10 + local_28;
                do {
                  *(undefined1 *)(*param_5 + iVar11) = *puVar7;
                  iVar11 = iVar11 + param_4;
                  puVar7 = puVar7 + 1;
                  uVar5 = uVar5 + 1;
                } while (uVar5 != 0);
              }
              uVar3 = uVar9 + uVar6;
            }
LAB_100124ba:
            uVar10 = uVar10 + uVar6;
            bVar12 = uVar10 < param_3;
            if (!bVar12) {
              if (bVar12) {
                return local_30;
              }
              goto LAB_100124f8;
            }
          } while (uVar3 < in_EDX);
          goto LAB_100124f4;
        }
        if (param_3 != 0) {
          return local_30;
        }
      }
LAB_100124f8:
      local_28 = local_28 + 1;
      local_30 = CONCAT31((int3)(local_28 >> 8),param_4 <= local_28);
    } while (local_28 != param_4);
  }
  return local_30;
}

#undef local_28
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1fU)))
#define LAB_10012616 (*(uint8_t *)(0x10012616U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_11 (*(char *)(frame + 239))
#define local_18 (*(void * *)(frame + 232))
#define local_1c (*(uint *)(frame + 228))
#define local_20 (*(uint *)(frame + 224))
#define local_24 (*(void * *)(frame + 220))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_40 (*(undefined * *)(frame + 192))
#define local_44 (*(undefined * *)(frame + 188))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_5c (*(undefined4 *)(frame + 164))
undefined4 recovered_1000e4b0(int in_ECX,uint in_EDX,int param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  uint size;
  uint uVar1;
  undefined4 uVar2;

  local_3c = auStackY_ec + 0xe8;
  local_34 = auStackY_ec + 0x80;
  *(undefined4 *)(param_3 + 4) = 0;
  local_11 = in_EDX == 0 || in_ECX == 0;
  local_44 = PTR_recovered_10004fe0_10017004;
  local_40 = &DAT_10016f7c;
  local_38 = &LAB_10012616;
  recovered_100054d0(&local_5c);
  if (local_11 == '\0') {
    uVar1 = 4;
    do {
      size = uVar1;
      uVar1 = size * 2;
    } while (size < in_EDX);
    local_58 = 0xffffffff;
    local_18 = recovered_10005070(size);
    recovered_100050d0((void *)0x0);
    local_24 = local_18;
    uVar1 = 0;
    do {
      *(undefined1 *)((int)local_18 + uVar1) = *(undefined1 *)(in_ECX + uVar1);
      uVar1 = uVar1 + 1;
    } while (in_EDX != uVar1);
    local_58 = 1;
    local_20 = in_EDX;
    local_1c = size;
    uVar2 = recovered_1000e6e0((int *)&local_24,(uint *)param_3);
    recovered_100050d0(local_18);
  }
  else {
    uVar2 = 0;
  }
  recovered_100054f0(&local_5c);
  return uVar2;
}

#undef DAT_10016f7c
#undef LAB_10012616
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_ec
#undef local_11
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_58
#undef local_5c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000e5d0(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  undefined1 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;

  iVar4 = *param_1;
  bVar8 = iVar4 == 0;
  if (bVar8) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_2 - iVar4;
  }
  if (param_3 != param_4) {
    uVar3 = param_1[1];
    puVar7 = (undefined1 *)param_1[2];
    if (puVar7 < param_4 + (uVar3 - (int)param_3)) {
      puVar1 = (undefined1 *)0x4;
      if (puVar7 != (undefined1 *)0x0) {
        puVar1 = puVar7;
      }
      do {
        puVar7 = puVar1;
        puVar1 = (undefined1 *)((int)puVar7 * 2);
      } while (puVar7 < param_4 + (uVar3 - (int)param_3));
      pvVar2 = recovered_10005070((uint)puVar7);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = *(undefined1 *)((int)pointer + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_100050d0(pointer);
      *param_1 = (int)pvVar2;
      param_1[2] = (int)puVar7;
      uVar3 = param_1[1];
    }
    for (; uVar6 < uVar3; uVar3 = uVar3 - 1) {
      param_4[((uVar3 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar3 - 1) + *param_1);
    }
    uVar3 = uVar6;
    puVar7 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar3) = *puVar7;
      puVar7 = puVar7 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar7 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar4 = *param_1;
    bVar8 = iVar4 == 0;
  }
  iVar5 = 0;
  if (!bVar8) {
    iVar5 = iVar4 + uVar6;
  }
  return iVar5;
}


#undef DAT_10011f88
#define DAT_10011f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc27U)))
#undef DAT_100122e8
#define DAT_100122e8 (*(char *)(((uintptr_t)pf_module_state + 0xf87U)))
#undef DAT_100122ec
#define DAT_100122ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf8bU)))
#undef DAT_10012340
#define DAT_10012340 (*(char *)(((uintptr_t)pf_module_state + 0xfdfU)))
#undef LAB_1000f8f6
#define LAB_1000f8f6 (*(uint8_t *)(0x1000f8f6U))
#undef PTR_recovered_10005010_10012004
#define PTR_recovered_10005010_10012004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define local_1e4 (*(int (*)[16])(frame + 172))
#define local_1a4 (*(void * *)(frame + 236))
#define local_1a0 (*(undefined4 *)(frame + 240))
#define local_194 (*(undefined1 *)(frame + 252))
#define local_190 (*(int (*)[16])(frame + 256))
#define local_150 (*(void * *)(frame + 320))
#define local_14c (*(byte * *)(frame + 324))
#define local_144 (*(uint *)(frame + 332))
#define local_140 (*(char *)(frame + 336))
#define local_13c (*(int *)(frame + 340))
#define local_138 (*(undefined4 *)(frame + 344))
#define local_134 (*(undefined4 *)(frame + 348))
#define local_130 (*(undefined4 *)(frame + 352))
#define local_12c (*(undefined4 *)(frame + 356))
#define local_128 (*(undefined4 *)(frame + 360))
#define local_124 (*(undefined4 *)(frame + 364))
#define local_120 (*(undefined4 *)(frame + 368))
#define local_11c (*(undefined4 *)(frame + 372))
#define local_118 (*(undefined4 *)(frame + 376))
#define local_114 (*(undefined4 *)(frame + 380))
#define local_110 (*(undefined4 *)(frame + 384))
#define local_10c (*(undefined4 *)(frame + 388))
#define local_108 (*(undefined4 *)(frame + 392))
#define local_104 (*(undefined4 *)(frame + 396))
#define local_100 (*(undefined4 *)(frame + 400))
#define local_fc (*(void * *)(frame + 404))
#define local_f8 (*(undefined4 *)(frame + 408))
#define local_f4 (*(undefined4 *)(frame + 412))
#define local_f0 (*(undefined4 *)(frame + 416))
#define local_ec (*(undefined1 *)(frame + 420))
#define local_e8 (*(uint *)(frame + 424))
#define local_e4 (*(uint *)(frame + 428))
#define local_e0 (*(int * *)(frame + 432))
#define local_dc (*(byte * *)(frame + 436))
#define local_d8 (*(void * *)(frame + 440))
#define local_d4 (*(undefined4 * *)(frame + 444))
#define local_d0 (*(undefined4 *)(frame + 448))
#define local_cc (*(undefined4 *)(frame + 452))
#define local_c8 (*(void * *)(frame + 456))
#define local_c4 (*(undefined4 *)(frame + 460))
#define local_c0 (*(undefined4 *)(frame + 464))
#define local_bc (*(undefined4 *)(frame + 468))
#define local_b8 (*(undefined4 *)(frame + 472))
#define local_a4 (*(undefined * *)(frame + 492))
#define local_a0 (*(undefined * *)(frame + 496))
#define local_9c (*(undefined1 * *)(frame + 500))
#define local_98 (*(undefined1 * *)(frame + 504))
#define local_94 (*(undefined1 * *)(frame + 508))
#define local_88 (*(int * *)(frame + 520))
#define local_84 (*(int *)(frame + 524))
#define local_80 (*(undefined4 *)(frame + 528))
#define local_7c (*(uint *)(frame + 532))
#define local_78 (*(undefined4 * *)(frame + 536))
#define local_74 (*(uint *)(frame + 540))
#define local_70 (*(byte * *)(frame + 544))
#define local_6c (*(uint *)(frame + 548))
#define local_68 (*(byte * *)(frame + 552))
#define local_64 (*(undefined4 * *)(frame + 556))
#define local_60 (*(undefined4 * *)(frame + 560))
#define local_5c (*(undefined4 * *)(frame + 564))
#define local_58 (*(undefined4 * *)(frame + 568))
#define local_54 (*(uint *)(frame + 572))
#define local_50 (*(uint * *)(frame + 576))
#define local_4c (*(uint *)(frame + 580))
#define local_48 (*(uint *)(frame + 584))
#define local_44 (*(uint *)(frame + 588))
#define local_40 (*(uint *)(frame + 592))
#define local_3c (*(uint *)(frame + 596))
#define local_38 (*(undefined4 * *)(frame + 600))
#define local_34 (*(byte * *)(frame + 604))
#define local_30 (*(uint *)(frame + 608))
#define local_2c (*(uint *)(frame + 612))
#define local_28 (*(uint *)(frame + 616))
#define local_24 (*(uint *)(frame + 620))
#define local_20 (*(uint *)(frame + 624))
#define local_1c (*(undefined4 * *)(frame + 628))
#define local_18 (*(uint *)(frame + 632))
#define local_14 (*(undefined4 *)(frame + 636))
#define auStackY_27c (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6e0
 */

undefined4 recovered_1000e6e0(int *in_ECX_00,uint *in_EDX_00)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  ushort uVar2;
  byte bVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;

  bVar11 = 0;
  local_9c = (undefined1 *)((int)(uintptr_t)(frame + 656) + -4);
  local_94 = auStackY_27c + 0x80;
  in_EDX_00[1] = 0;
  uVar13 = in_ECX_00[1];
  local_a4 = PTR_recovered_10005010_10012004;
  local_a0 = &DAT_10011f88;
  local_98 = &LAB_1000f8f6;
  local_50 = in_EDX_00;
  recovered_100054d0(&local_bc);
  if (5 < uVar13) {
    pbVar9 = (byte *)*in_ECX_00;
    if ((*pbVar9 & 0xf) == 8) {
      uVar16 = 0;
      uVar6 = local_20;
      if ((pbVar9[1] & 0x20) != 0) goto switchD_1000e907_caseD_3;
      uVar2 = CONCAT11(*pbVar9,pbVar9[1]);
      uVar18 = (uint)uVar2 * 0x843 >> 0x10;
      local_e0 = in_ECX_00;
      if ((ushort)((short)(((uVar2 - uVar18 & 0xffff) >> 1) + uVar18 >> 4) * -0x1f + uVar2) != 0)
      goto switchD_1000e907_caseD_3;
      local_30 = uVar13 - 6;
      local_34 = pbVar9 + 2;
      local_2c = 0;
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      local_e4 = 5;
      do {
        if (local_20 == 0) {
          if (local_30 <= local_2c) goto LAB_1000f853;
          uVar13 = local_2c + 1;
          local_74 = local_34[local_2c] | local_28;
          local_28 = (local_24 >> 1) << 0x1e | (local_24 << 0x1f | local_74 >> 1) >> 2;
          local_24 = local_24 >> 3;
          local_20 = local_e4;
          uVar16 = 0;
          uVar6 = local_e4;
          local_2c = uVar13;
          switch((uintptr_t)(local_74 >> 1 & 3)) {
          case 0:
switchD_1000e907_caseD_0:
            bVar10 = (byte)uVar6 & 7;
            local_28 = local_28 >> bVar10 | (bVar10 == 0 ? 0 : local_24 << (32 - bVar10));
            uVar13 = local_24 >> bVar10;
            local_20 = uVar6 & 0xfffffff8;
            local_190[0] = 0;
            if (uVar6 < 8) {
              iVar21 = 1;
              local_24 = uVar13;
              if (local_30 <= local_2c) goto LAB_1000e825;
              local_14 = (uint)local_34[local_2c] | local_28 & 0xff;
              local_20 = 0;
              local_2c = local_2c + 1;
              uVar6 = local_28 >> 8 | uVar13 << 0x18;
              uVar18 = local_20;
LAB_1000ed21:
              local_20 = uVar18;
              local_28 = uVar6;
              local_24 = uVar13 >> 8;
              iVar21 = 1;
              if (local_2c < local_30) {
                uVar6 = local_34[local_2c] | local_28;
                local_28 = local_28 >> 8 | local_24 << 0x18;
                local_20 = 0;
                local_2c = local_2c + 1;
                uVar18 = local_20;
LAB_1000ed5e:
                local_20 = uVar18;
                local_24 = uVar13 >> 0x10;
                iVar21 = 1;
                local_40 = local_28;
                if (local_2c < local_30) {
                  local_40 = local_28 | local_34[local_2c];
                  local_2c = local_2c + 1;
                  goto LAB_1000ed81;
                }
              }
            }
            else {
              uVar6 = uVar13 << 0x18 | local_28 >> 8;
              local_14 = local_28 & 0xff;
              uVar18 = local_20 - 8;
              if (local_20 - 8 == 0) goto LAB_1000ed21;
              local_40 = local_28 >> 0x10 | uVar13 << 0x10;
              local_28 = local_40;
              uVar18 = local_20 - 0x10;
              if (local_20 - 0x10 == 0) goto LAB_1000ed5e;
              local_20 = local_20 - 0x18;
LAB_1000ed81:
              local_28 = (uVar13 >> 0x10) << 0x18 | local_40 >> 8;
              local_24 = uVar13 >> 0x18;
              uVar13 = recovered_1000fa40((int *)&local_34,8,local_190);
              iVar21 = 1;
              if (((char)uVar13 != '\0') &&
                 (uVar13 = (uVar6 & 0xff) * 0x100 + local_14,
                 ((local_190[0] << 8 | local_40 & 0xff) ^ uVar13) == 0xffff)) {
                if (uVar13 != 0) {
                  uVar6 = 0;
                  local_44 = uVar13;
                  do {
                    puVar4 = local_50;
                    if (local_20 < 8) {
                      if (local_30 <= local_2c) {
                        iVar21 = 1;
                        goto LAB_1000e825;
                      }
                      bVar10 = (byte)local_20 & 0x1f;
                      uVar20 = (uint)local_34[local_2c] << ((byte)local_20 & 0x1f);
                      uVar18 = (bVar10 == 0 ? 0 : (uint)(local_34[local_2c] >> (32 - bVar10)));
                      uVar14 = uVar20;
                      if ((local_20 & 0x20) != 0) {
                        uVar14 = 0;
                        uVar18 = uVar20;
                      }
                      local_24 = uVar18 | local_24;
                      local_28 = uVar14 | local_28;
                      local_20 = local_20 | 8;
                      local_2c = local_2c + 1;
                    }
                    uVar14 = local_24 << 0x18 | local_28 >> 8;
                    local_24 = local_24 >> 8;
                    local_20 = local_20 - 8;
                    uVar18 = local_50[1];
                    local_14 = local_28;
                    if (uVar18 == local_50[2]) {
                      uVar20 = 4;
                      if (uVar18 != 0) {
                        uVar20 = uVar18 * 2;
                      }
                      if (uVar18 < uVar20) {
                        local_b8 = 0xffffffff;
                        local_28 = uVar14;
                        local_18 = uVar20;
                        pvVar7 = recovered_10005070(uVar20);
                        pointer = (void *)*puVar4;
                        uVar13 = puVar4[1];
                        if (uVar13 != 0) {
                          uVar18 = 0;
                          do {
                            *(undefined1 *)((int)pvVar7 + uVar18) =
                                 *(undefined1 *)((int)pointer + uVar18);
                            uVar18 = uVar18 + 1;
                          } while (uVar13 != uVar18);
                        }
                        recovered_100050d0(pointer);
                        *local_50 = (uint)pvVar7;
                        local_50[2] = local_18;
                        uVar18 = local_50[1];
                        uVar13 = local_44;
                        uVar14 = local_28;
                      }
                    }
                    else {
                    }
                    local_28 = uVar14;
                    *(char *)(*local_50 + uVar18) = (char)local_14;
                    local_50[1] = local_50[1] + 1;
                    uVar6 = uVar6 + 1;
                  } while (uVar6 != uVar13);
                }
                iVar21 = 3;
              }
            }
LAB_1000e825:
            if (iVar21 != 3) goto LAB_1000f853;
            break;
          case 1:
            goto switchD_1000e907_caseD_1;
          case 2:
            goto switchD_1000e907_caseD_2;
          case 3:
            goto switchD_1000e907_caseD_3;
          }
        }
        else {
          uVar18 = local_24 >> 1;
          local_74 = local_28;
          uVar13 = local_24 << 0x1f | local_28 >> 1;
          uVar6 = local_20 - 1;
          if (local_20 < 3) {
            uVar16 = 0;
            local_28 = uVar13;
            local_24 = uVar18;
            local_14 = uVar6;
            if (local_30 <= local_2c) goto switchD_1000e907_caseD_3;
            bVar10 = (byte)uVar6 & 0x1f;
            uVar19 = (uint)local_34[local_2c] << ((byte)uVar6 & 0x1f);
            uVar14 = (bVar10 == 0 ? 0 : (uint)(local_34[local_2c] >> (32 - bVar10)));
            uVar20 = uVar19;
            if ((uVar6 & 0x20) != 0) {
              uVar20 = 0;
              uVar14 = uVar19;
            }
            uVar18 = uVar18 | uVar14;
            uVar13 = uVar13 | uVar20;
            uVar6 = local_20 + 7;
            local_2c = local_2c + 1;
          }
          local_28 = uVar18 << 0x1e | uVar13 >> 2;
          local_24 = uVar18 >> 2;
          local_20 = uVar6 - 2;
          uVar16 = 0;
          uVar6 = local_20;
          switch((uintptr_t)(uVar13 & 3)) {
          case 0:
            goto switchD_1000e907_caseD_0;
          case 1:
switchD_1000e907_caseD_1:
            if (DAT_100122e8 == '\0') {
              local_b8 = 0xffffffff;
              recovered_100112f0();
            }
            if (DAT_10012340 == '\0') {
              local_b8 = 0xffffffff;
              recovered_10011330();
            }
            local_b8 = 0xffffffff;
            uVar16 = recovered_1000fb30((int *)&local_34,((uintptr_t)pf_module_state + 0xf33U),&DAT_100122ec,(int)local_50);
            if ((char)uVar16 == '\0') goto LAB_1000f853;
            break;
          case 2:
switchD_1000e907_caseD_2:
            uVar6 = local_24;
            uVar13 = local_28;
            piVar12 = local_1e4;
            local_14 = local_20;
            for (iVar21 = 0x14; iVar21 != 0; iVar21 = iVar21 + -1) {
              *piVar12 = 0;
              piVar12 = piVar12 + (uint)bVar11 * -2 + 1;
            }
            local_194 = 0;
            piVar12 = &local_13c;
            for (iVar21 = 0x14; iVar21 != 0; iVar21 = iVar21 + -1) {
              *piVar12 = 0;
              piVar12 = piVar12 + (uint)bVar11 * -2 + 1;
            }
            local_ec = 0;
            if (local_14 < 5) {
              iVar21 = 1;
              if (local_2c < local_30) {
                bVar10 = (byte)local_14 & 0x1f;
                uVar20 = (uint)local_34[local_2c] << ((byte)local_14 & 0x1f);
                uVar18 = uVar20;
                uVar14 = (bVar10 == 0 ? 0 : (uint)(local_34[local_2c] >> (32 - bVar10)));
                if ((local_14 & 0x20) != 0) {
                  uVar18 = 0;
                  uVar14 = uVar20;
                }
                uVar6 = uVar6 | uVar14;
                uVar13 = uVar13 | uVar18;
                local_14 = local_14 | 8;
                local_2c = local_2c + 1;
                goto LAB_1000ea42;
              }
            }
            else {
LAB_1000ea42:
              local_28 = uVar6 << 0x1b | uVar13 >> 5;
              local_24 = uVar6 >> 5;
              uVar6 = local_14 - 5;
              local_40 = uVar13;
              if (uVar6 < 5) {
                iVar21 = 1;
                local_20 = uVar6;
                if (local_30 <= local_2c) goto LAB_1000e7f5;
                bVar10 = (byte)uVar6 & 0x1f;
                uVar14 = (uint)local_34[local_2c] << ((byte)uVar6 & 0x1f);
                uVar13 = uVar14;
                uVar18 = (bVar10 == 0 ? 0 : (uint)(local_34[local_2c] >> (32 - bVar10)));
                if ((uVar6 & 0x20) != 0) {
                  uVar13 = 0;
                  uVar18 = uVar14;
                }
                local_24 = local_24 | uVar18;
                local_28 = local_28 | uVar13;
                uVar6 = local_14 + 3;
                local_2c = local_2c + 1;
              }
              local_18 = local_24 << 0x1b | local_28 >> 5;
              local_24 = local_24 >> 5;
              local_20 = uVar6 - 5;
              local_48 = local_28;
              if (local_20 < 4) {
                iVar21 = 1;
                local_28 = local_18;
                if (local_30 <= local_2c) goto LAB_1000e7f5;
                bVar10 = (byte)local_20 & 0x1f;
                uVar14 = (uint)local_34[local_2c] << ((byte)local_20 & 0x1f);
                uVar13 = uVar14;
                uVar18 = (bVar10 == 0 ? 0 : (uint)(local_34[local_2c] >> (32 - bVar10)));
                if ((local_20 & 0x20) != 0) {
                  uVar13 = 0;
                  uVar18 = uVar14;
                }
                local_24 = local_24 | uVar18;
                local_18 = local_18 | uVar13;
                local_20 = uVar6 + 3;
                local_2c = local_2c + 1;
              }
              local_28 = local_24 << 0x1c | local_18 >> 4;
              local_24 = local_24 >> 4;
              local_20 = local_20 - 4;
              local_b8 = 1;
              local_1c = recovered_10005070(0x4c);
              uVar6 = local_40 & 0x1f;
              local_48 = local_48 & 0x1f;
              recovered_100050d0((void *)0x0);
              local_d4 = local_1c;
              local_cc = 0x13;
              *local_1c = 0;
              local_1c[1] = 0;
              local_1c[2] = 0;
              local_1c[3] = 0;
              local_1c[4] = 0;
              local_1c[5] = 0;
              local_1c[6] = 0;
              local_1c[7] = 0;
              local_1c[8] = 0;
              local_1c[9] = 0;
              local_1c[10] = 0;
              local_1c[0xb] = 0;
              local_1c[0xc] = 0;
              local_1c[0xd] = 0;
              local_1c[0xe] = 0;
              local_1c[0xf] = 0;
              local_1c[0x10] = 0;
              local_1c[0x11] = 0;
              local_1c[0x12] = 0;
              local_78 = (undefined4 *)(uVar6 + 0x101);
              local_d0 = 0x13;
              local_44 = local_2c;
              local_70 = local_34;
              local_7c = local_30;
              local_18 = (local_18 & 0xf) << 2;
              uVar13 = 0xfffffff0;
              do {
                uVar18 = uVar13;
                local_40 = uVar6;
                if (local_20 < 3) {
                  if (local_30 <= local_44) goto LAB_1000e7e5;
                  local_2c = local_44 + 1;
                  bVar10 = (byte)local_20 & 0x1f;
                  uVar20 = (uint)local_34[local_44] << ((byte)local_20 & 0x1f);
                  uVar13 = (bVar10 == 0 ? 0 : (uint)(local_34[local_44] >> (32 - bVar10)));
                  uVar14 = uVar20;
                  if ((local_20 & 0x20) != 0) {
                    uVar14 = 0;
                    uVar13 = uVar20;
                  }
                  local_24 = local_24 | uVar13;
                  local_28 = local_28 | uVar14;
                  local_20 = local_20 | 8;
                  local_44 = local_2c;
                }
                uVar14 = local_24 << 0x1d | local_28 >> 3;
                local_24 = local_24 >> 3;
                local_20 = local_20 - 3;
                local_1c[*(int *)(uVar18 + ((uintptr_t)pf_module_state + 0x843U))] = local_28 & 7;
                uVar13 = uVar18 + 4;
                local_28 = uVar14;
                local_14 = uVar18;
              } while (local_18 != uVar18 + 4);
              piVar12 = local_190;
              for (iVar21 = 0x14; iVar21 != 0; iVar21 = iVar21 + -1) {
                *piVar12 = 0;
                piVar12 = piVar12 + (uint)bVar11 * -2 + 1;
              }
              local_140 = '\0';
              local_b8 = 2;
              cVar5 = recovered_10010400((int *)&local_d4,local_190,(int *)0x0);
              if (cVar5 == '\0') {
                local_14c = (byte *)0x0;
                recovered_100050d0(local_150);
LAB_1000e7e5:
                puVar8 = local_1c;
              }
              else {
                local_b8 = 3;
                puVar8 = recovered_10005070((local_40 + local_48) * 4 + 0x408);
                recovered_100050d0((void *)0x0);
                if (local_140 == '\x01') {
                  uVar13 = local_40 + 0x102 + local_48;
                  local_d8 = local_150;
                  local_dc = local_14c;
                  local_3c = 0;
                  local_4c = uVar13;
                  do {
                    local_54 = uVar13;
                    local_38 = puVar8;
                    local_e8 = local_144;
                    if (local_144 == 0) goto LAB_1000f4e5;
                    local_68 = local_34;
                    local_6c = local_30;
                    local_48 = local_2c;
                    local_18 = local_24;
                    local_14 = local_28;
                    uVar18 = 1;
                    local_44 = 0;
                    pbVar9 = (byte *)0x0;
                    uVar6 = 0;
                    while( true ) {
                      local_70 = pbVar9;
                      local_7c = uVar6;
                      if (local_20 == 0) {
                        local_28 = local_14;
                        local_24 = local_18;
                        if (local_30 <= local_48) goto LAB_1000f4e5;
                        local_2c = local_48 + 1;
                        local_14 = local_14 | local_34[local_48];
                        uVar14 = 8;
                        local_48 = local_48 + 1;
                      }
                      else {
                        uVar14 = local_20;
                      }
                      uVar17 = local_18 << 0x1f | local_14 >> 1;
                      uVar19 = local_14 & 1 | local_44;
                      uVar15 = local_18 >> 1;
                      local_18 = uVar15;
                      local_24 = uVar15;
                      local_14 = uVar17;
                      local_28 = uVar17;
                      local_20 = uVar14 - 1;
                      local_40 = local_20;
                      uVar20 = local_190[uVar18] + uVar6;
                      if (uVar19 < uVar20) break;
                      pbVar9 = pbVar9 + local_190[uVar18];
                      uVar6 = uVar20 * 2;
                      uVar18 = uVar18 + 1;
                      local_44 = uVar19 * 2;
                      if (local_144 < uVar18) goto LAB_1000f4e5;
                    }
                    if (local_dc <= pbVar9 + (uVar19 - uVar6)) goto LAB_1000f4e5;
                    uVar6 = (uint)*(ushort *)((int)local_d8 + (int)(pbVar9 + (uVar19 - uVar6)) * 2);
                    if (uVar6 < 0x10) {
                      uVar18 = local_3c;
                      local_14 = uVar6;
                      if (local_3c == uVar13) {
                        uVar6 = 4;
                        if (local_3c != 0) {
                          uVar6 = local_3c * 2;
                        }
                        uVar13 = local_3c;
                        if (local_3c < uVar6) {
                          local_b8 = 4;
                          local_18 = uVar6;
                          puVar8 = recovered_10005070(uVar6 * 4);
                          uVar18 = local_3c;
                          if (local_3c != 0) {
                            uVar13 = 0;
                            do {
                              puVar8[uVar13] = local_38[uVar13];
                              uVar13 = uVar13 + 1;
                            } while (local_3c != uVar13);
                          }
                          recovered_100050d0(local_38);
                          uVar13 = local_18;
                        }
                      }
                      puVar8[uVar18] = local_14;
                      local_3c = uVar18 + 1;
                    }
                    else {
                      bVar10 = (byte)local_20;
                      if (uVar6 == 0x12) {
                        if (uVar14 < 8) {
                          if (local_30 <= local_48) goto LAB_1000f4e5;
                          local_2c = local_48 + 1;
                          uVar14 = (uint)local_34[local_48] << (bVar10 & 0x1f);
                          uVar6 = uVar14;
                          uVar18 = ((bVar10 & 31) == 0 ? 0 : (uint)(local_34[local_48] >> (32 - (bVar10 & 31))));
                          if ((local_20 & 0x20) != 0) {
                            uVar6 = 0;
                            uVar18 = uVar14;
                          }
                          uVar15 = uVar15 | uVar18;
                          uVar17 = uVar17 | uVar6;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar15 >> 7;
                        local_28 = uVar15 << 0x19 | uVar17 >> 7;
                        local_20 = local_20 - 7;
                        if (local_3c < local_4c) {
                          uVar14 = (uVar17 & 0x7f) + 0xb;
                          uVar18 = 0;
                          uVar6 = local_3c;
                          local_14 = uVar14;
                          do {
                            local_64 = puVar8;
                            if (uVar6 == uVar13) {
                              uVar20 = 4;
                              if (uVar6 != 0) {
                                uVar20 = uVar6 * 2;
                              }
                              uVar13 = uVar6;
                              if (uVar6 < uVar20) {
                                local_b8 = 7;
                                local_44 = uVar20;
                                local_3c = uVar6;
                                local_18 = uVar18;
                                puVar8 = recovered_10005070(uVar20 * 4);
                                uVar6 = local_3c;
                                if (local_3c != 0) {
                                  uVar13 = 0;
                                  do {
                                    puVar8[uVar13] = local_64[uVar13];
                                    uVar13 = uVar13 + 1;
                                  } while (local_3c != uVar13);
                                }
                                recovered_100050d0(local_64);
                                uVar18 = local_18;
                                uVar14 = local_14;
                                uVar13 = local_44;
                              }
                            }
                            puVar8[uVar6] = 0;
                            local_3c = uVar6 + 1;
                            uVar18 = uVar18 + 1;
                          } while ((uVar18 < uVar14) && (uVar6 = local_3c, local_3c < local_4c));
                        }
                      }
                      else if (uVar6 == 0x11) {
                        if (uVar14 < 4) {
                          if (local_30 <= local_48) goto LAB_1000f4e5;
                          local_2c = local_48 + 1;
                          uVar14 = (uint)local_34[local_48] << (bVar10 & 0x1f);
                          uVar6 = uVar14;
                          uVar18 = ((bVar10 & 31) == 0 ? 0 : (uint)(local_34[local_48] >> (32 - (bVar10 & 31))));
                          if ((local_20 & 0x20) != 0) {
                            uVar6 = 0;
                            uVar18 = uVar14;
                          }
                          uVar15 = uVar15 | uVar18;
                          uVar17 = uVar17 | uVar6;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar15 >> 3;
                        local_28 = uVar15 << 0x1d | uVar17 >> 3;
                        local_20 = local_20 - 3;
                        if (local_3c < local_4c) {
                          local_14 = (uVar17 & 7) + 3;
                          uVar18 = 0;
                          uVar6 = local_3c;
                          do {
                            local_60 = puVar8;
                            if (uVar6 == uVar13) {
                              uVar14 = 4;
                              if (uVar6 != 0) {
                                uVar14 = uVar6 * 2;
                              }
                              uVar13 = uVar6;
                              if (uVar6 < uVar14) {
                                local_b8 = 6;
                                local_44 = uVar14;
                                local_3c = uVar6;
                                local_18 = uVar18;
                                puVar8 = recovered_10005070(uVar14 * 4);
                                uVar6 = local_3c;
                                if (local_3c != 0) {
                                  uVar13 = 0;
                                  do {
                                    puVar8[uVar13] = local_60[uVar13];
                                    uVar13 = uVar13 + 1;
                                  } while (local_3c != uVar13);
                                }
                                recovered_100050d0(local_60);
                                uVar18 = local_18;
                                uVar13 = local_44;
                              }
                            }
                            puVar8[uVar6] = 0;
                            local_3c = uVar6 + 1;
                            uVar18 = uVar18 + 1;
                          } while ((uVar18 < local_14) && (uVar6 = local_3c, local_3c < local_4c));
                        }
                      }
                      else {
                        if ((uVar6 != 0x10) || (local_3c == 0)) goto LAB_1000f4e5;
                        if (uVar14 < 3) {
                          if (local_30 <= local_48) goto LAB_1000f4e5;
                          local_2c = local_48 + 1;
                          uVar14 = (uint)local_34[local_48] << (bVar10 & 0x1f);
                          uVar6 = uVar14;
                          uVar18 = ((bVar10 & 31) == 0 ? 0 : (uint)(local_34[local_48] >> (32 - (bVar10 & 31))));
                          if ((local_20 & 0x20) != 0) {
                            uVar6 = 0;
                            uVar18 = uVar14;
                          }
                          uVar15 = uVar15 | uVar18;
                          uVar17 = uVar17 | uVar6;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar15 >> 2;
                        local_28 = uVar15 << 0x1e | uVar17 >> 2;
                        local_20 = local_20 - 2;
                        local_44 = puVar8[local_3c - 1];
                        if (local_3c < local_4c) {
                          uVar18 = (uVar17 & 3) + 3;
                          local_18 = 0;
                          uVar6 = local_3c;
                          local_14 = uVar18;
                          do {
                            local_5c = puVar8;
                            if (uVar6 == uVar13) {
                              uVar13 = uVar6;
                              if (0 < (int)uVar6) {
                                local_b8 = 5;
                                local_3c = uVar6;
                                puVar8 = recovered_10005070(uVar6 * 8);
                                uVar6 = local_3c;
                                uVar13 = local_3c * 2;
                                uVar18 = 0;
                                do {
                                  puVar8[uVar18] = local_5c[uVar18];
                                  uVar18 = uVar18 + 1;
                                } while (local_3c != uVar18);
                                recovered_100050d0(local_5c);
                                uVar18 = local_14;
                              }
                            }
                            puVar8[uVar6] = local_44;
                            local_3c = uVar6 + 1;
                            local_18 = local_18 + 1;
                          } while ((local_18 < uVar18) && (uVar6 = local_3c, local_3c < local_4c));
                        }
                      }
                    }
                    local_58 = puVar8;
                  } while (local_3c < local_4c);
                  local_78 = puVar8 + (int)local_78;
                  local_c8 = (void *)0x0;
                  local_c4 = 0;
                  local_c0 = 0;
                  local_b8 = 8;
                  recovered_10010a20((int *)&local_c8,0,puVar8,local_78);
                  local_88 = (int *)0x0;
                  local_84 = 0;
                  local_80 = 0;
                  local_b8 = 9;
                  recovered_10010a20((int *)&local_88,0,local_78,local_58 + local_3c);
                  local_b8 = 10;
                  cVar5 = recovered_10010400((int *)&local_c8,local_1e4,(int *)0x0);
                  if (cVar5 == '\0') {
                    cVar5 = '\0';
                  }
                  else {
                    if (local_84 != 0) {
                      iVar21 = local_84 << 2;
                      piVar12 = local_88;
                      bVar10 = 0;
                      do {
                        bVar3 = bVar10;
                        iVar1 = *piVar12;
                        piVar12 = piVar12 + 1;
                        iVar21 = iVar21 + -4;
                        bVar10 = bVar3 | iVar1 != 0;
                      } while (iVar21 != 0);
                      if ((bool)(bVar3 | iVar1 != 0)) {
                        local_b8 = 0xb;
                        cVar5 = recovered_10010400((int *)&local_88,&local_13c,(int *)0x1);
                        goto LAB_1000f726;
                      }
                    }
                    local_100 = 0;
                    local_104 = 0;
                    local_108 = 0;
                    local_10c = 0;
                    local_110 = 0;
                    local_114 = 0;
                    local_118 = 0;
                    local_11c = 0;
                    local_120 = 0;
                    local_124 = 0;
                    local_128 = 0;
                    local_12c = 0;
                    local_130 = 0;
                    local_134 = 0;
                    local_138 = 0;
                    local_13c = 0;
                    recovered_100050d0(local_fc);
                    local_fc = (void *)0x0;
                    local_f8 = 0;
                    local_f4 = 0;
                    local_f0 = 0;
                    recovered_100050d0((void *)0x0);
                    local_ec = 1;
                    cVar5 = '\x01';
                  }
LAB_1000f726:
                  local_84 = 0;
                  recovered_100050d0(local_88);
                  local_c4 = 0;
                  recovered_100050d0(local_c8);
                  recovered_100050d0(local_58);
                  puVar8 = local_d4;
                  local_14c = (byte *)0x0;
                  recovered_100050d0(local_150);
                  recovered_100050d0(puVar8);
                  iVar21 = 1;
                  if (cVar5 != '\0') {
                    local_b8 = 0xc;
                    uVar13 = recovered_1000fb30((int *)&local_34,(int)local_1e4,&local_13c,
                                                (int)local_50);
                    iVar21 = (uVar13 & 0xff) * 2 + 1;
                  }
                  goto LAB_1000e7f5;
                }
LAB_1000f4e5:
                recovered_100050d0(puVar8);
                puVar8 = local_d4;
                local_14c = (byte *)0x0;
                recovered_100050d0(local_150);
              }
              recovered_100050d0(puVar8);
              iVar21 = 1;
            }
LAB_1000e7f5:
            local_f8 = 0;
            recovered_100050d0(local_fc);
            local_1a0 = 0;
            recovered_100050d0(local_1a4);
            goto LAB_1000e825;
          case 3:
            goto switchD_1000e907_caseD_3;
          }
        }
      } while ((local_74 & 1) == 0);
      bVar11 = (byte)local_20 & 7;
      uVar13 = local_24 >> bVar11;
      local_28 = local_28 >> bVar11 | (bVar11 == 0 ? 0 : local_24 << (32 - bVar11));
      local_20 = local_20 & 0xfffffff8;
      local_24 = uVar13;
      if (local_2c == local_30 && local_20 == 0) {
        uVar13 = *(uint *)(*local_e0 + -4 + local_e0[1]);
        uVar6 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
        uVar13 = local_50[1];
        if (uVar13 == 0) {
          uVar18 = 1;
        }
        else {
          local_44 = *local_50;
          uVar20 = 0;
          uVar18 = 1;
          uVar14 = 0;
          do {
            uVar19 = uVar13 - uVar20;
            if (0x15af < uVar19) {
              uVar19 = 0x15b0;
            }
            if (uVar13 != uVar20) {
              pbVar9 = (byte *)(local_44 + uVar20);
              iVar21 = uVar19 + (uVar19 == 0);
              do {
                uVar18 = uVar18 + *pbVar9;
                uVar14 = uVar14 + uVar18;
                pbVar9 = pbVar9 + 1;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
              uVar18 = uVar18 % 0xfff1;
              uVar14 = uVar14 % 0xfff1;
              local_14 = uVar19;
            }
            uVar20 = uVar20 + uVar19;
          } while (uVar20 < uVar13);
          uVar18 = uVar18 + uVar14 * 0x10000;
          local_74 = uVar6;
          local_18 = uVar13;
        }
        uVar16 = CONCAT31((int3)(uVar13 >> 8),uVar18 == uVar6);
        uVar6 = local_20;
        goto switchD_1000e907_caseD_3;
      }
    }
  }
LAB_1000f853:
  uVar16 = 0;
  uVar6 = local_20;
switchD_1000e907_caseD_3:
  local_20 = uVar6;
  recovered_100054f0(&local_bc);
  return uVar16;
}

#undef DAT_10011f88
#undef DAT_100122e8
#undef DAT_100122ec
#undef DAT_10012340
#undef LAB_1000f8f6
#undef PTR_recovered_10005010_10012004
#undef local_1e4
#undef local_1a4
#undef local_1a0
#undef local_194
#undef local_190
#undef local_150
#undef local_14c
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_88
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
#undef auStackY_27c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_1000fa40(int *in_ECX,uint in_EDX,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if (0x18 < in_EDX) {
    return 0;
  }
  uVar4 = in_ECX[5];
  if (uVar4 < in_EDX) {
    uVar2 = in_ECX[2];
    uVar7 = uVar2;
    if (uVar2 <= (uint)in_ECX[1]) {
      uVar7 = in_ECX[1];
    }
    do {
      uVar2 = uVar2 + 1;
      if (uVar2 - uVar7 == 1) break;
      in_ECX[2] = uVar2;
      bVar3 = *(byte *)(*in_ECX + -1 + uVar2);
      bVar1 = (byte)uVar4 & 0x1f;
      uVar5 = (uint)bVar3 << ((byte)uVar4 & 0x1f);
      uVar6 = uVar5;
      uVar8 = (bVar1 == 0 ? 0 : (uint)(bVar3 >> (32 - bVar1)));
      if ((uVar4 & 0x20) != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
      }
      in_ECX[3] = in_ECX[3] | uVar6;
      in_ECX[4] = in_ECX[4] | uVar8;
      uVar4 = uVar4 + 8;
      in_ECX[5] = uVar4;
    } while (uVar4 < in_EDX);
  }
  uVar2 = 0;
  if (in_EDX <= uVar4) {
    bVar3 = (byte)in_EDX;
    uVar7 = (uint)in_ECX[4] >> (bVar3 & 0x1f);
    uVar4 = 0;
    if ((in_EDX & 0x20) == 0) {
      uVar4 = uVar7;
    }
    if ((in_EDX & 0x20) == 0) {
      uVar7 = (uint)in_ECX[3] >> (bVar3 & 0x1f) | in_ECX[4] << 0x20 - (bVar3 & 0x1f);
    }
    if ((in_EDX & 0x20) == 0) {
      uVar2 = -1 << (bVar3 & 0x1f);
    }
    *param_3 = in_ECX[3] & ~uVar2;
    in_ECX[4] = uVar4;
    in_ECX[3] = uVar7;
    in_ECX[5] = in_ECX[5] - in_EDX;
    uVar2 = CONCAT31((int3)(in_EDX >> 8),1);
  }
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_100168b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x743U)))
#define DAT_10016930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bbU)))
#define PTR_caseD_1_10016440 (*(void * *)(((uintptr_t)pf_module_state + 0x2cbU)))
#define PTR_caseD_28_100163cc (*(void * *)(((uintptr_t)pf_module_state + 0x257U)))
#define local_14 (*(undefined * *)(frame + 44))
#define local_18 (*(uint *)(frame + 40))
#define local_1c (*(uint *)(frame + 36))
#define local_20 (*(uint *)(frame + 32))
#define local_24 (*(uint *)(frame + 28))
#define local_2c (*(uint *)(frame + 20))
undefined4 recovered_1000fb30(int *in_ECX,int in_EDX,int param_3,int *param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pointer;
  byte bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;

  if (*(char *)(in_EDX + 0x50) != '\x01') {
    return 0;
  }
  do {
    uVar17 = *(uint *)(in_EDX + 0x4c);
    if (uVar17 == 0) {
      return 0;
    }
    local_1c = 0;
    iVar2 = *in_ECX;
    uVar7 = in_ECX[1];
    local_14 = (undefined *)in_ECX[5];
    local_2c = in_ECX[2];
    uVar16 = 1;
    iVar11 = 0;
    iVar6 = 0;
    local_20 = in_ECX[3];
    local_18 = in_ECX[4];
    while( true ) {
      if (local_14 == (undefined *)0x0) {
        if (uVar7 <= local_2c) {
          return 0;
        }
        in_ECX[2] = local_2c + 1;
        local_20 = local_20 | *(byte *)(iVar2 + local_2c);
        local_14 = (undefined *)0x8;
        local_2c = local_2c + 1;
      }
      else {
      }
      uVar12 = local_18 << 0x1f | local_20 >> 1;
      local_1c = local_20 & 1 | local_1c;
      uVar14 = local_18 >> 1;
      in_ECX[4] = uVar14;
      in_ECX[3] = uVar12;
      local_14 = local_14 + -1;
      in_ECX[5] = (int)local_14;
      iVar3 = *(int *)(in_EDX + uVar16 * 4);
      uVar9 = iVar3 + iVar6;
      local_18 = uVar14;
      if (local_1c < uVar9) break;
      iVar11 = iVar11 + iVar3;
      iVar6 = uVar9 * 2;
      local_1c = local_1c * 2;
      uVar16 = uVar16 + 1;
      local_20 = uVar12;
      if (uVar17 < uVar16) {
        return 0;
      }
    }
    uVar17 = (local_1c - iVar6) + iVar11;
    if (*(uint *)(in_EDX + 0x44) <= uVar17) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(in_EDX + 0x40) + uVar17 * 2);
    uVar17 = (uint)uVar1;
    if (uVar17 < 0x100) {
      uVar17 = param_4[1];
      if (uVar17 == param_4[2]) {
        uVar7 = 4;
        if (uVar17 != 0) {
          uVar7 = uVar17 * 2;
        }
        if (uVar17 < uVar7) {
          pvVar8 = recovered_10005070(uVar7);
          pvVar4 = (void *)*param_4;
          iVar2 = param_4[1];
          if (iVar2 != 0) {
            iVar6 = 0;
            do {
              *(undefined1 *)((int)pvVar8 + iVar6) = *(undefined1 *)((int)pvVar4 + iVar6);
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          recovered_100050d0(pvVar4);
          *param_4 = (int)pvVar8;
          param_4[2] = uVar7;
          uVar17 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar17) = (char)uVar1;
      param_4[1] = param_4[1] + 1;
    }
    else {
      if (uVar17 == 0x100) {
        return CONCAT31((int3)((uint)*(int *)(in_EDX + 0x40) >> 8),1);
      }
      if (0x11d < uVar17) {
        return 0;
      }
      puVar15 = (&PTR_caseD_28_100163cc)[uVar17];
      puVar13 = (&PTR_caseD_1_10016440)[uVar17];
      if (puVar13 != (undefined *)0x0) {
        if ((undefined *)0x18 < puVar13) {
          return 0;
        }
        if (local_14 < puVar13) {
          local_24 = local_2c;
          if (local_2c <= uVar7) {
            local_24 = uVar7;
          }
          do {
            if (local_24 == local_2c) {
              local_2c = local_24;
              break;
            }
            uVar9 = local_2c + 1;
            in_ECX[2] = uVar9;
            bVar10 = (byte)local_14 & 0x1f;
            uVar14 = (uint)*(byte *)(iVar2 + local_2c) << ((byte)local_14 & 0x1f);
            uVar17 = (bVar10 == 0 ? 0 : (uint)(*(byte *)(iVar2 + local_2c) >> (32 - bVar10)));
            uVar16 = uVar14;
            if (((uint)local_14 & 0x20) != 0) {
              uVar16 = 0;
              uVar17 = uVar14;
            }
            local_18 = local_18 | uVar17;
            uVar12 = uVar12 | uVar16;
            in_ECX[4] = local_18;
            in_ECX[3] = uVar12;
            local_14 = local_14 + 8;
            in_ECX[5] = (int)local_14;
            local_2c = uVar9;
          } while (local_14 < puVar13);
        }
        else {
        }
        bVar18 = local_14 < puVar13;
        local_14 = local_14 + -(int)puVar13;
        if (bVar18) {
          return 0;
        }
        bVar10 = (byte)puVar13;
        uVar17 = local_18 >> (bVar10 & 0x1f);
        uVar14 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar14 = uVar17;
        }
        if (((uint)puVar13 & 0x20) == 0) {
          uVar17 = uVar12 >> (bVar10 & 0x1f) | ((bVar10 & 31) == 0 ? 0 : local_18 << (32 - (bVar10 & 31)));
        }
        uVar16 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar16 = -1 << (bVar10 & 0x1f);
        }
        puVar15 = puVar15 + (uVar12 & ~uVar16);
        in_ECX[4] = uVar14;
        in_ECX[3] = uVar17;
        in_ECX[5] = (int)local_14;
        uVar12 = uVar17;
      }
      if (*(char *)(param_3 + 0x50) != '\x01') {
        return 0;
      }
      uVar17 = *(uint *)(param_3 + 0x4c);
      uVar16 = 0;
      if (uVar17 == 0) {
        return 0;
      }
      uVar9 = 1;
      iVar6 = 0;
      local_24 = 0;
      local_20 = uVar12;
      local_18 = uVar14;
      while( true ) {
        if (local_14 == (undefined *)0x0) {
          if (uVar7 <= local_2c) {
            return 0;
          }
          in_ECX[2] = local_2c + 1;
          local_20 = local_20 | *(byte *)(iVar2 + local_2c);
          local_14 = (undefined *)0x8;
          local_2c = local_2c + 1;
        }
        else {
        }
        uVar12 = local_18 << 0x1f | local_20 >> 1;
        uVar16 = local_20 & 1 | uVar16;
        local_18 = local_18 >> 1;
        in_ECX[4] = local_18;
        in_ECX[3] = uVar12;
        local_14 = local_14 + -1;
        in_ECX[5] = (int)local_14;
        iVar11 = *(int *)(param_3 + uVar9 * 4);
        uVar14 = iVar11 + local_24;
        if (uVar16 < uVar14) break;
        iVar6 = iVar6 + iVar11;
        local_24 = uVar14 * 2;
        uVar16 = uVar16 * 2;
        uVar9 = uVar9 + 1;
        local_20 = uVar12;
        if (uVar17 < uVar9) {
          return 0;
        }
      }
      uVar17 = (uVar16 - local_24) + iVar6;
      if (*(uint *)(param_3 + 0x44) <= uVar17) {
        return 0;
      }
      uVar17 = (uint)*(ushort *)(*(int *)(param_3 + 0x40) + uVar17 * 2);
      if (0x1d < uVar17) {
        return 0;
      }
      iVar6 = *(int *)(&DAT_100168b8 + uVar17 * 4);
      puVar13 = *(undefined **)(&DAT_10016930 + uVar17 * 4);
      if (puVar13 != (undefined *)0x0) {
        if ((undefined *)0x18 < puVar13) {
          return 0;
        }
        if (local_14 < puVar13) {
          uVar17 = local_2c;
          if (local_2c <= uVar7) {
            uVar17 = uVar7;
          }
          do {
            local_2c = local_2c + 1;
            if (local_2c - uVar17 == 1) break;
            in_ECX[2] = local_2c;
            bVar10 = *(byte *)(iVar2 + -1 + local_2c);
            bVar5 = (byte)local_14 & 0x1f;
            uVar9 = (uint)bVar10 << ((byte)local_14 & 0x1f);
            uVar7 = uVar9;
            uVar16 = (bVar5 == 0 ? 0 : (uint)(bVar10 >> (32 - bVar5)));
            if (((uint)local_14 & 0x20) != 0) {
              uVar7 = 0;
              uVar16 = uVar9;
            }
            local_18 = local_18 | uVar16;
            uVar12 = uVar12 | uVar7;
            in_ECX[4] = local_18;
            in_ECX[3] = uVar12;
            local_14 = local_14 + 8;
            in_ECX[5] = (int)local_14;
          } while (local_14 < puVar13);
        }
        local_1c = 0;
        if (local_14 < puVar13) {
          return 0;
        }
        bVar10 = (byte)puVar13;
        uVar17 = local_18 >> (bVar10 & 0x1f);
        uVar7 = 0;
        if (((uint)puVar13 & 0x20) == 0) {
          uVar7 = uVar17;
        }
        if (((uint)puVar13 & 0x20) == 0) {
          uVar17 = uVar12 >> (bVar10 & 0x1f) | ((bVar10 & 31) == 0 ? 0 : local_18 << (32 - (bVar10 & 31)));
        }
        if (((uint)puVar13 & 0x20) == 0) {
          local_1c = -1 << (bVar10 & 0x1f);
        }
        in_ECX[4] = uVar7;
        in_ECX[3] = uVar17;
        in_ECX[5] = (int)local_14 - (int)puVar13;
        iVar6 = iVar6 + (uVar12 & ~local_1c);
      }
      uVar17 = param_4[1];
      if (uVar17 <= iVar6 - 1U) {
        return 0;
      }
      if (puVar15 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          pvVar4 = (void *)*param_4;
          uVar7 = uVar17;
          pvVar8 = pvVar4;
          if (uVar17 == param_4[2]) {
            uVar16 = 4;
            if (uVar17 != 0) {
              uVar16 = uVar17 * 2;
            }
            if (uVar17 < uVar16) {
              pvVar8 = recovered_10005070(uVar16);
              pointer = (void *)*param_4;
              iVar2 = param_4[1];
              if (iVar2 != 0) {
                iVar11 = 0;
                do {
                  *(undefined1 *)((int)pvVar8 + iVar11) = *(undefined1 *)((int)pointer + iVar11);
                  iVar11 = iVar11 + 1;
                } while (iVar2 != iVar11);
              }
              recovered_100050d0(pointer);
              *param_4 = (int)pvVar8;
              param_4[2] = uVar16;
              uVar7 = param_4[1];
            }
          }
          *(undefined1 *)((int)pvVar8 + uVar7) = *(undefined1 *)((int)pvVar4 + (uVar17 - iVar6));
          uVar17 = param_4[1] + 1;
          param_4[1] = uVar17;
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar15);
      }
    }
    if (*(char *)(in_EDX + 0x50) == '\0') {
      return 0;
    }
  } while( true );
}

#undef DAT_100168b8
#undef DAT_10016930
#undef PTR_caseD_1_10016440
#undef PTR_caseD_28_100163cc
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_2c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10010110(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x44) = 0;
  recovered_100050d0(*(void **)(param_1 + 0x40));
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc43U)))
#define DAT_10017498 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf33U)))
#define DAT_100174e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf83U)))
#define LAB_10014511 (*(uint8_t *)(0x10014511U))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(undefined4 *)(frame + 220))
#define local_18 (*(undefined4 *)(frame + 216))
#define local_1c (*(undefined4 *)(frame + 212))
#define local_20 (*(void * *)(frame + 208))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_30 (*(undefined1 * *)(frame + 192))
#define local_34 (*(undefined1 * *)(frame + 188))
#define local_38 (*(undefined * *)(frame + 184))
#define local_3c (*(undefined * *)(frame + 180))
#define local_50 (*(undefined4 *)(frame + 160))
#define local_54 (*(undefined4 *)(frame + 156))
void recovered_10010130(void)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  local_14 = recovered_10005070(0x480);
  recovered_100050d0((void *)0x0);
  local_2c = auStackY_dc + 0x80;
  local_20 = local_14;
  local_18 = 0x120;
  local_3c = PTR_recovered_10004fe0_10017004;
  local_38 = &DAT_10016fa4;
  local_30 = &LAB_10014511;
  local_34 = auStackY_dc + 0xd8;
  recovered_100054d0(&local_54);
  iVar1 = -0x480;
  do {
    *(undefined4 *)((int)local_14 + iVar1 + 0x480) = 8;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  local_1c = 0x120;
  iVar1 = -0x1c0;
  do {
    *(undefined4 *)((int)local_14 + iVar1 + 0x400) = 9;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  *(undefined4 *)((int)local_14 + 0x400) = 7;
  *(undefined4 *)((int)local_14 + 0x404) = 7;
  *(undefined4 *)((int)local_14 + 0x408) = 7;
  *(undefined4 *)((int)local_14 + 0x40c) = 7;
  *(undefined4 *)((int)local_14 + 0x410) = 7;
  *(undefined4 *)((int)local_14 + 0x414) = 7;
  *(undefined4 *)((int)local_14 + 0x418) = 7;
  *(undefined4 *)((int)local_14 + 0x41c) = 7;
  *(undefined4 *)((int)local_14 + 0x420) = 7;
  *(undefined4 *)((int)local_14 + 0x424) = 7;
  *(undefined4 *)((int)local_14 + 0x428) = 7;
  *(undefined4 *)((int)local_14 + 0x42c) = 7;
  *(undefined4 *)((int)local_14 + 0x430) = 7;
  *(undefined4 *)((int)local_14 + 0x434) = 7;
  *(undefined4 *)((int)local_14 + 0x438) = 7;
  *(undefined4 *)((int)local_14 + 0x43c) = 7;
  *(undefined4 *)((int)local_14 + 0x440) = 7;
  *(undefined4 *)((int)local_14 + 0x444) = 7;
  *(undefined4 *)((int)local_14 + 0x448) = 7;
  *(undefined4 *)((int)local_14 + 0x44c) = 7;
  *(undefined4 *)((int)local_14 + 0x450) = 7;
  *(undefined4 *)((int)local_14 + 0x454) = 7;
  *(undefined4 *)((int)local_14 + 0x458) = 7;
  *(undefined4 *)((int)local_14 + 0x45c) = 7;
  *(undefined4 *)((int)local_14 + 0x460) = 8;
  *(undefined4 *)((int)local_14 + 0x464) = 8;
  *(undefined4 *)((int)local_14 + 0x468) = 8;
  *(undefined4 *)((int)local_14 + 0x46c) = 8;
  *(undefined4 *)((int)local_14 + 0x470) = 8;
  *(undefined4 *)((int)local_14 + 0x474) = 8;
  *(undefined4 *)((int)local_14 + 0x478) = 8;
  *(undefined4 *)((int)local_14 + 0x47c) = 8;
  puVar2 = &DAT_10017498;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  DAT_100174e8 = 0;
  local_50 = 1;
  recovered_10010400((int *)&local_20,&DAT_10017498,0);
  recovered_100050d0(local_14);
  recovered_100054f0(&local_54);
  return;
}

#undef DAT_10016fa4
#undef DAT_10017498
#undef DAT_100174e8
#undef LAB_10014511
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_dc
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_50
#undef local_54

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define aiStack_b4 (*(int (*)[4])(frame + 28))
#define local_14 (*(int *)(frame + 188))
#define local_18 (*(int *)(frame + 184))
#define local_1c (*(int * *)(frame + 180))
#define local_20 (*(int *)(frame + 176))
#define local_24 (*(int *)(frame + 172))
#define local_28 (*(uint *)(frame + 168))
#define local_2c (*(int *)(frame + 164))
#define local_30 (*(int *)(frame + 160))
#define local_34 (*(int *)(frame + 156))
#define local_38 (*(int *)(frame + 152))
#define local_3c (*(void * *)(frame + 148))
#define local_40 (*(int *)(frame + 144))
#define local_44 (*(int *)(frame + 140))
#define local_48 (*(int *)(frame + 136))
#define local_4c (*(int *)(frame + 132))
#define local_50 (*(int *)(frame + 128))
#define local_54 (*(int *)(frame + 124))
#define local_58 (*(int *)(frame + 120))
#define local_5c (*(int *)(frame + 116))
#define local_60 (*(int *)(frame + 112))
#define local_64 (*(int *)(frame + 108))
#define local_68 (*(int *)(frame + 104))
#define local_6c (*(int *)(frame + 100))
#define local_70 (*(int *)(frame + 96))
#define local_74 (*(int *)(frame + 92))
#define local_78 (*(int *)(frame + 88))
#define local_7c (*(int *)(frame + 84))
#define local_80 (*(int *)(frame + 80))
#define local_84 (*(int *)(frame + 76))
#define local_88 (*(int *)(frame + 72))
#define local_8c (*(int *)(frame + 68))
#define local_90 (*(int *)(frame + 64))
#define local_94 (*(int *)(frame + 60))
#define local_98 (*(int *)(frame + 56))
#define local_9c (*(int *)(frame + 52))
#define local_a0 (*(int *)(frame + 48))
#define local_a4 (*(int *)(frame + 44))
undefined1 recovered_10010400(int *in_ECX,int *in_EDX,byte param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;

  in_EDX[0xf] = 0;
  in_EDX[0xe] = 0;
  in_EDX[0xd] = 0;
  in_EDX[0xc] = 0;
  in_EDX[0xb] = 0;
  in_EDX[10] = 0;
  in_EDX[9] = 0;
  in_EDX[8] = 0;
  in_EDX[7] = 0;
  in_EDX[6] = 0;
  in_EDX[5] = 0;
  in_EDX[4] = 0;
  in_EDX[3] = 0;
  in_EDX[2] = 0;
  in_EDX[1] = 0;
  *in_EDX = 0;
  in_EDX[0x11] = 0;
  recovered_100050d0((void *)in_EDX[0x10]);
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  in_EDX[0x12] = 0;
  in_EDX[0x13] = 0;
  *(undefined1 *)(in_EDX + 0x14) = 0;
  recovered_100050d0((void *)0x0);
  iVar1 = in_ECX[1];
  if (iVar1 != 0) {
    puVar6 = (uint *)*in_ECX;
    iVar7 = iVar1 * 4;
    do {
      uVar3 = *puVar6;
      if (0xf < uVar3) goto LAB_100148fc;
      in_EDX[uVar3] = in_EDX[uVar3] + 1;
      uVar9 = in_EDX[0x13];
      if ((uint)in_EDX[0x13] <= uVar3) {
        uVar9 = uVar3;
      }
      in_EDX[0x13] = uVar9;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -4;
    } while (iVar7 != 0);
  }
  if (*in_EDX == iVar1) {
    uVar3 = (uint)param_3;
    *(byte *)(in_EDX + 0x14) = param_3;
  }
  else {
    iVar1 = in_EDX[1];
    if (iVar1 < 3) {
      iVar7 = 4 - (in_EDX[2] + iVar1 * 2);
      if (-1 < iVar7) {
        iVar7 = iVar7 * 2 - in_EDX[3];
        if (-1 < iVar7) {
          iVar7 = iVar7 * 2 - in_EDX[4];
          if (-1 < iVar7) {
            iVar7 = iVar7 * 2 - in_EDX[5];
            if (-1 < iVar7) {
              iVar7 = iVar7 * 2 - in_EDX[6];
              if (-1 < iVar7) {
                local_50 = in_EDX[7];
                iVar7 = iVar7 * 2 - local_50;
                if (-1 < iVar7) {
                  local_4c = in_EDX[8];
                  iVar7 = iVar7 * 2 - local_4c;
                  if (-1 < iVar7) {
                    local_48 = in_EDX[9];
                    iVar7 = iVar7 * 2 - local_48;
                    if (-1 < iVar7) {
                      local_44 = in_EDX[10];
                      iVar7 = iVar7 * 2 - local_44;
                      if (-1 < iVar7) {
                        local_40 = in_EDX[0xb];
                        iVar7 = iVar7 * 2 - local_40;
                        if (-1 < iVar7) {
                          local_34 = in_EDX[0xc];
                          iVar7 = iVar7 * 2 - local_34;
                          if (-1 < iVar7) {
                            local_38 = in_EDX[0xd];
                            iVar7 = iVar7 * 2 - local_38;
                            if (-1 < iVar7) {
                              local_30 = in_EDX[0xe];
                              iVar7 = iVar7 * 2 - local_30;
                              if (-1 < iVar7) {
                                local_2c = in_EDX[0xf];
                                uVar3 = 0;
                                if (local_2c <= iVar7 * 2) {
                                  local_54 = in_EDX[2] + iVar1;
                                  local_14 = in_EDX[3] + local_54;
                                  local_20 = in_EDX[4] + local_14;
                                  local_24 = in_EDX[5] + local_20;
                                  local_18 = in_EDX[6] + local_24;
                                  local_74 = local_50 + local_18;
                                  local_70 = local_4c + local_74;
                                  local_6c = local_48 + local_70;
                                  local_68 = local_44 + local_6c;
                                  local_64 = local_40 + local_68;
                                  in_EDX[0x11] = 0;
                                  local_60 = local_34 + local_64;
                                  local_5c = local_38 + local_60;
                                  local_58 = local_5c + local_30;
                                  local_28 = local_58 + local_2c;
                                  local_1c = in_ECX;
                                  if ((uint)in_EDX[0x12] < local_28) {
                                    pvVar4 = recovered_10005070(local_28 * 2);
                                    local_3c = (void *)in_EDX[0x10];
                                    iVar7 = in_EDX[0x11];
                                    if (iVar7 != 0) {
                                      iVar8 = 0;
                                      do {
                                        *(undefined2 *)((int)pvVar4 + iVar8 * 2) =
                                             *(undefined2 *)((int)local_3c + iVar8 * 2);
                                        iVar8 = iVar8 + 1;
                                      } while (iVar7 != iVar8);
                                    }
                                    recovered_100050d0(local_3c);
                                    in_EDX[0x10] = (int)pvVar4;
                                    in_EDX[0x12] = local_28;
                                    uVar3 = in_EDX[0x11];
                                  }
                                  if (uVar3 < local_28) {
                                    iVar7 = (local_38 + local_30 + local_2c +
                                            local_50 + local_4c + local_48 + local_44 + local_40 +
                                            local_34 + local_18) - uVar3;
                                    puVar5 = (undefined2 *)(uVar3 * 2 + in_EDX[0x10]);
                                    do {
                                      *puVar5 = 0;
                                      puVar5 = puVar5 + 1;
                                      iVar7 = iVar7 + -1;
                                    } while (iVar7 != 0);
                                    in_EDX[0x11] = local_28;
                                  }
                                  aiStack_b4[1] = 0;
                                  aiStack_b4[2] = iVar1;
                                  aiStack_b4[3] = local_54;
                                  local_a4 = local_14;
                                  local_a0 = local_20;
                                  local_9c = local_24;
                                  local_98 = local_18;
                                  local_94 = local_74;
                                  local_90 = local_70;
                                  local_8c = local_6c;
                                  local_88 = local_68;
                                  local_84 = local_64;
                                  local_80 = local_60;
                                  local_7c = local_5c;
                                  local_78 = local_58;
                                  local_14 = local_1c[1];
                                  if (local_1c[1] != 0) {
                                    iVar1 = *local_1c;
                                    local_1c = (int *)in_EDX[0x10];
                                    iVar7 = 0;
                                    do {
                                      iVar8 = *(int *)(iVar1 + iVar7 * 4);
                                      if (iVar8 != 0) {
                                        iVar2 = aiStack_b4[iVar8];
                                        aiStack_b4[iVar8] = iVar2 + 1;
                                        *(short *)((int)local_1c + iVar2 * 2) = (short)iVar7;
                                      }
                                      iVar7 = iVar7 + 1;
                                    } while (local_14 != iVar7);
                                  }
                                  *(undefined1 *)(in_EDX + 0x14) = 1;
                                  uVar3 = 1;
                                }
                                goto LAB_100148fe;
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
          }
        }
      }
    }
LAB_100148fc:
    uVar3 = 0;
  }
LAB_100148fe:
  return (char)uVar3;
}

#undef aiStack_b4
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_24
#undef local_28
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_40
#undef local_44
#undef local_48
#undef local_4c
#undef local_50
#undef local_54
#undef local_58
#undef local_5c
#undef local_60
#undef local_64
#undef local_68
#undef local_6c
#undef local_70
#undef local_74
#undef local_78
#undef local_7c
#undef local_80
#undef local_84
#undef local_88
#undef local_8c
#undef local_90
#undef local_94
#undef local_98
#undef local_9c
#undef local_a0
#undef local_a4

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10016fac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4bU)))
#define DAT_100174f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf8bU)))
#define DAT_10017544 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdbU)))
#define LAB_10014b2c (*(uint8_t *)(0x10014b2cU))
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xca3U)))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
#define local_14 (*(uint * *)(frame + 220))
#define local_18 (*(undefined4 *)(frame + 216))
#define local_1c (*(undefined4 *)(frame + 212))
#define local_20 (*(undefined4 * *)(frame + 208))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_30 (*(undefined1 * *)(frame + 192))
#define local_34 (*(undefined1 * *)(frame + 188))
#define local_38 (*(undefined * *)(frame + 184))
#define local_3c (*(undefined * *)(frame + 180))
#define local_50 (*(undefined4 *)(frame + 160))
#define local_54 (*(undefined4 *)(frame + 156))
void recovered_100107e0(void)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  local_14 = recovered_10005070(0x80);
  recovered_100050d0((void *)0x0);
  local_2c = auStackY_dc + 0x80;
  local_20 = local_14;
  local_18 = 0x20;
  *local_14 = 5;
  local_14[1] = 5;
  local_14[2] = 5;
  local_14[3] = 5;
  local_14[4] = 5;
  local_14[5] = 5;
  local_14[6] = 5;
  local_14[7] = 5;
  local_14[8] = 5;
  local_14[9] = 5;
  local_14[10] = 5;
  local_14[0xb] = 5;
  local_14[0xc] = 5;
  local_14[0xd] = 5;
  local_14[0xe] = 5;
  local_14[0xf] = 5;
  local_14[0x10] = 5;
  local_14[0x11] = 5;
  local_14[0x12] = 5;
  local_14[0x13] = 5;
  local_14[0x14] = 5;
  local_14[0x15] = 5;
  local_14[0x16] = 5;
  local_14[0x17] = 5;
  local_14[0x18] = 5;
  local_14[0x19] = 5;
  local_14[0x1a] = 5;
  local_14[0x1b] = 5;
  local_14[0x1c] = 5;
  local_14[0x1d] = 5;
  local_14[0x1e] = 5;
  local_14[0x1f] = 5;
  local_1c = 0x20;
  puVar2 = &DAT_100174f4;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  DAT_10017544 = 0;
  local_3c = PTR_recovered_10004fe0_10017004;
  local_38 = &DAT_10016fac;
  local_30 = &LAB_10014b2c;
  local_50 = 1;
  local_34 = auStackY_dc + 0xd8;
  recovered_100054d0(&local_54);
  recovered_10010400((int *)&local_20,&DAT_100174f4,0);
  recovered_100050d0(local_14);
  recovered_100054f0(&local_54);
  return;
}

#undef DAT_10016fac
#undef DAT_100174f4
#undef DAT_10017544
#undef LAB_10014b2c
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_dc
#undef local_14
#undef local_18
#undef local_1c
#undef local_20
#undef local_2c
#undef local_30
#undef local_34
#undef local_38
#undef local_3c
#undef local_50
#undef local_54

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(void * *)(frame + 28))
int recovered_10010a20(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  local_14 = (void *)*param_1;
  bVar10 = local_14 == (void *)0x0;
  if (bVar10) {
    uVar9 = param_1[1];
  }
  else {
    uVar9 = param_2 - (int)local_14 >> 2;
  }
  if (param_3 != param_4) {
    uVar2 = (uint)((int)param_4 + (-4 - (int)param_3)) >> 2;
    uVar8 = param_1[1];
    uVar3 = param_1[2];
    uVar7 = uVar8 + 1 + uVar2;
    if (uVar3 < uVar7) {
      uVar8 = 4;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 * 2;
      } while (uVar3 < uVar7);
      local_14 = recovered_10005070(uVar3 * 4);
      pvVar4 = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          *(undefined4 *)((int)local_14 + iVar6 * 4) = *(undefined4 *)((int)pvVar4 + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_100050d0(pvVar4);
      *param_1 = (int)local_14;
      param_1[2] = uVar3;
      uVar8 = param_1[1];
    }
    if (uVar9 < uVar8) {
      uVar7 = uVar8;
      do {
        *(undefined4 *)((int)local_14 + uVar7 * 4 + uVar2 * 4) =
             *(undefined4 *)((int)local_14 + uVar7 * 4 + -4);
        uVar7 = uVar7 - 1;
      } while (uVar9 < uVar7);
    }
    puVar5 = (undefined4 *)((int)local_14 + uVar9 * 4);
    do {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    } while (param_3 != param_4);
    param_1[1] = uVar8 + uVar2 + 1;
    bVar10 = local_14 == (void *)0x0;
  }
  pvVar4 = (void *)0x0;
  if (!bVar10) {
    pvVar4 = (void *)((int)local_14 + uVar9 * 4);
  }
  return (int)pvVar4;
}

#undef local_14

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define DAT_10017550 (*(char *)(((uintptr_t)pf_module_state + 0xfe0U)))
#define DAT_10017554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xfe3U)))
uint recovered_10010b60(uint in_ECX,uchar *in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if (DAT_10017550 == '\0') {
    uVar1 = 0;
    do {
      uVar2 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar2 = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      (&DAT_10017554)[uVar1] = -(uVar2 & 1) & 0xedb88320 ^ uVar2 >> 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x100);
    DAT_10017550 = '\x01';
  }
  if (param_3 != 0) {
    uVar1 = ~in_ECX;
    do {
      uVar1 = uVar1 >> 8 ^ (&DAT_10017554)[(byte)(*in_EDX ^ (byte)uVar1)];
      in_EDX = in_EDX + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    in_ECX = ~uVar1;
  }
  return in_ECX;
}

#undef DAT_10017550
#undef DAT_10017554

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10010c50(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  uVar8 = in_ECX[1];
  if (uVar8 == in_ECX[2]) {
    uVar6 = 4;
    if (uVar8 != 0) {
      uVar6 = uVar8 * 2;
    }
    if (uVar8 < uVar6) {
      pvVar4 = recovered_10005070(uVar6 * 0x28);
      if (in_ECX[1] != 0) {
        uVar8 = 0;
        iVar9 = 0x24;
        do {
          iVar1 = *in_ECX;
          *(undefined1 *)((int)pvVar4 + iVar9 + -0xc) = *(undefined1 *)(iVar1 + -0xc + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x10) = *(undefined4 *)(iVar1 + -0x10 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x14) = *(undefined4 *)(iVar1 + -0x14 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x18) = *(undefined4 *)(iVar1 + -0x18 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x1c) = *(undefined4 *)(iVar1 + -0x1c + iVar9);
          uVar2 = *(undefined4 *)(iVar1 + -0x24 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x20) = *(undefined4 *)(iVar1 + -0x20 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -0x24) = uVar2;
          *(undefined4 *)((int)pvVar4 + iVar9 + -8) = *(undefined4 *)(iVar1 + -8 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9 + -4) = *(undefined4 *)(iVar1 + -4 + iVar9);
          *(undefined4 *)((int)pvVar4 + iVar9) = *(undefined4 *)(iVar1 + iVar9);
          *(undefined4 *)(iVar1 + -8 + iVar9) = 0;
          *(undefined4 *)(iVar1 + iVar9) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar9) = 0;
          recovered_100050d0((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 0x28;
        } while (uVar8 < (uint)in_ECX[1]);
      }
      recovered_100050d0((void *)*in_ECX);
      *in_ECX = (int)pvVar4;
      in_ECX[2] = uVar6;
      uVar8 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  *(undefined1 *)(iVar1 + 0x18 + uVar8 * 0x28) = *(undefined1 *)(in_EDX + 6);
  *(undefined4 *)(iVar1 + 0x14 + uVar8 * 0x28) = in_EDX[5];
  *(undefined4 *)(iVar1 + 0x10 + uVar8 * 0x28) = in_EDX[4];
  *(undefined4 *)(iVar1 + 0xc + uVar8 * 0x28) = in_EDX[3];
  *(undefined4 *)(iVar1 + 8 + uVar8 * 0x28) = in_EDX[2];
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar8 * 0x28) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar8 * 0x28) = uVar2;
  iVar9 = iVar1 + uVar8 * 0x28;
  *(undefined4 *)(iVar1 + 0x1c + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x20 + uVar8 * 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24 + uVar8 * 0x28) = 0;
  iVar1 = in_EDX[8];
  uVar8 = 0;
  if (iVar1 != 0) {
    pvVar5 = recovered_10005070(iVar1 * 8);
    pvVar4 = *(void **)(iVar9 + 0x1c);
    iVar3 = *(int *)(iVar9 + 0x20);
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)((int)pvVar4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = *(undefined4 *)((int)pvVar4 + iVar7 * 8 + 4);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    recovered_100050d0(pvVar4);
    *(void **)(iVar9 + 0x1c) = pvVar5;
    *(int *)(iVar9 + 0x24) = iVar1;
    uVar8 = 0;
    if (in_EDX[8] != 0) {
      uVar6 = 0;
      do {
        iVar1 = *(int *)(iVar9 + 0x1c);
        uVar2 = *(undefined4 *)(in_EDX[7] + uVar6 * 8);
        *(undefined4 *)(iVar1 + 4 + uVar6 * 8) = *(undefined4 *)(in_EDX[7] + 4 + uVar6 * 8);
        *(undefined4 *)(iVar1 + uVar6 * 8) = uVar2;
        uVar6 = uVar6 + 1;
        uVar8 = in_EDX[8];
      } while (uVar6 < uVar8);
    }
  }
  *(uint *)(iVar9 + 0x20) = uVar8;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10010e40(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = in_ECX[1];
  if (uVar4 == in_ECX[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_10005070(uVar5 * 8);
      pointer = (void *)*in_ECX;
      iVar1 = in_ECX[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_100050d0(pointer);
      *in_ECX = (int)pvVar3;
      in_ECX[2] = uVar5;
      uVar4 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10010ee0(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = in_ECX[1];
  if (uVar4 == in_ECX[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_10005070(uVar5 * 8);
      pointer = (void *)*in_ECX;
      iVar1 = in_ECX[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)pointer + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) =
               *(undefined4 *)((int)pointer + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_100050d0(pointer);
      *in_ECX = (int)pvVar3;
      in_ECX[2] = uVar5;
      uVar4 = in_ECX[1];
    }
  }
  iVar1 = *in_ECX;
  uVar2 = *in_EDX;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = in_EDX[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10010f80(int *in_ECX,int *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint *puVar2;
  void *pointer;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint size;
  undefined4 *puVar7;
  bool bVar8;

  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  iVar6 = in_EDX[1];
  if (iVar6 != 0) {
    puVar7 = (undefined4 *)*in_EDX;
    iVar3 = 0;
    size = 0;
    do {
      puVar2 = (uint *)((int)puVar7 + iVar3 + 4);
      bVar8 = CARRY4(size,*puVar2);
      size = size + *puVar2;
      if (bVar8) {
        return 0;
      }
      iVar3 = iVar3 + 8;
    } while (iVar6 * 8 != iVar3);
    if ((uint)in_ECX[2] < size) {
      pvVar4 = recovered_10005070(size);
      pointer = (void *)*in_ECX;
      iVar6 = in_ECX[1];
      if (iVar6 != 0) {
        iVar3 = 0;
        do {
          *(undefined1 *)((int)pvVar4 + iVar3) = *(undefined1 *)((int)pointer + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar6 != iVar3);
      }
      recovered_100050d0(pointer);
      *in_ECX = (int)pvVar4;
      in_ECX[2] = size;
      puVar7 = (undefined4 *)*in_EDX;
      iVar6 = in_EDX[1];
    }
    if (iVar6 != 0) {
      puVar1 = puVar7 + iVar6 * 2;
      do {
        recovered_1000e5d0(in_ECX,*in_ECX + in_ECX[1],(undefined1 *)*puVar7,
                           (undefined1 *)*puVar7 + puVar7[1]);
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar1);
    }
  }
  uVar5 = recovered_1000e6e0(in_ECX,(uint *)(in_ECX + 3));
  return uVar5;
}


#define local_18 (*(char *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011080
 */

undefined4
recovered_10011080(undefined4 in_ECX,void *in_EDX,void *param_3,int param_4,uint param_5,
                  uint param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;

  pvVar4 = (void *)param_4;
  switch((uintptr_t)(in_ECX)) {
  case 1:
    uVar5 = param_6;
    if (param_5 <= param_6) {
      uVar5 = param_5;
    }
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        *(undefined1 *)((int)in_EDX + uVar7) = *(undefined1 *)((int)param_3 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    uVar1 = CONCAT31((int3)(uVar5 >> 8),1);
    if (param_5 <= param_6) {
      return uVar1;
    }
    iVar13 = param_5 - uVar5;
    pcVar9 = (char *)((int)in_EDX + uVar5);
    pcVar14 = (char *)((int)param_3 + uVar5);
    do {
      *pcVar9 = pcVar9[-param_6] + *pcVar14;
      pcVar9 = pcVar9 + 1;
      pcVar14 = pcVar14 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    return uVar1;
  case 2:
    if (param_4 != 0) {
      if (param_5 != 0) {
        uVar5 = 0;
        do {
          *(char *)((int)in_EDX + uVar5) =
               *(char *)(param_4 + uVar5) + *(char *)((int)param_3 + uVar5);
          uVar5 = uVar5 + 1;
        } while (param_5 != uVar5);
      }
      break;
    }
  case 0:
    pvVar4 = recovered_10000f90(in_EDX,param_3,param_5);
    break;
  case 3:
    if (param_4 == 0) {
      if (param_5 != 0) {
        pvVar4 = (void *)param_6;
        if (param_5 <= param_6) {
          pvVar4 = (void *)param_5;
        }
        pvVar6 = (void *)0x0;
        if (param_6 != 0) {
          do {
            *(undefined1 *)((int)in_EDX + (int)pvVar6) = *(undefined1 *)((int)param_3 + (int)pvVar6)
            ;
            pvVar6 = (void *)((int)pvVar6 + 1);
          } while (pvVar4 != pvVar6);
          pvVar6 = pvVar4;
        }
        if (pvVar6 < param_5) {
          iVar13 = param_5 - (int)pvVar4;
          pcVar9 = (char *)((int)in_EDX + (int)pvVar4);
          pcVar14 = (char *)((int)param_3 + (int)pvVar4);
          do {
            *pcVar9 = ((byte)pcVar9[-param_6] >> 1) + *pcVar14;
            pcVar9 = pcVar9 + 1;
            pcVar14 = pcVar14 + 1;
            iVar13 = iVar13 + -1;
            pvVar4 = (void *)0x0;
          } while (iVar13 != 0);
        }
      }
    }
    else if (param_5 != 0) {
      uVar5 = 0;
      do {
        if (uVar5 < param_6) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)*(byte *)((int)((int)in_EDX - param_6) + uVar5);
        }
        *(char *)((int)in_EDX + uVar5) =
             (char)(uVar7 + *(byte *)(param_4 + uVar5) >> 1) + *(char *)((int)param_3 + uVar5);
        uVar5 = uVar5 + 1;
        pvVar4 = (void *)((int)in_EDX - param_6);
      } while (param_5 != uVar5);
    }
    break;
  case 4:
    if (param_4 == 0) {
      uVar5 = param_6;
      if (param_5 <= param_6) {
        uVar5 = param_5;
      }
      if (uVar5 != 0) {
        uVar7 = 0;
        do {
          *(undefined1 *)((int)in_EDX + uVar7) = *(undefined1 *)((int)param_3 + uVar7);
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      uVar1 = CONCAT31((int3)(uVar5 >> 8),1);
      if (param_5 <= param_6) {
        return uVar1;
      }
      iVar13 = param_5 - uVar5;
      pcVar9 = (char *)((int)in_EDX + uVar5);
      pcVar14 = (char *)((int)param_3 + uVar5);
      do {
        *pcVar9 = pcVar9[-param_6] + *pcVar14;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      return uVar1;
    }
    if (param_5 != 0) {
      uVar5 = 0;
      do {
        uVar7 = 0;
        uVar11 = 0;
        if (param_6 <= uVar5) {
          uVar7 = (uint)*(byte *)((int)in_EDX + (uVar5 - param_6));
          uVar11 = (uint)*(byte *)((param_4 - param_6) + uVar5);
        }
        uVar10 = (uint)*(byte *)(param_4 + uVar5);
        uVar2 = uVar7 - uVar11;
        uVar3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
        uVar2 = (uVar2 + uVar10) - uVar11;
        uVar8 = (int)uVar2 >> 0x1f;
        uVar8 = (uVar2 ^ uVar8) - uVar8;
        uVar2 = uVar11;
        if (uVar3 <= uVar8) {
          uVar2 = uVar10;
        }
        uVar12 = (int)(uVar10 - uVar11) >> 0x1f;
        uVar12 = (uVar10 - uVar11 ^ uVar12) - uVar12;
        uVar11 = uVar2;
        if (uVar12 <= uVar8) {
          uVar11 = uVar7;
        }
        local_18 = (char)uVar2;
        if (uVar12 <= uVar3) {
          local_18 = (char)uVar11;
        }
        *(char *)((int)in_EDX + uVar5) = local_18 + *(char *)((int)param_3 + uVar5);
        uVar5 = uVar5 + 1;
      } while (param_5 != uVar5);
    }
    break;
  default:
    return 0;
  }
  return CONCAT31((int3)((uint)pvVar4 >> 8),1);
}

#undef local_18

#undef DAT_100122e8
#define DAT_100122e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf87U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112f0
 */

void recovered_100112f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10010130();
  recovered_100052d0();
  DAT_100122e8 = 1;
  return;
}

#undef DAT_100122e8

#undef DAT_10012340
#define DAT_10012340 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfdfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011330
 */

void recovered_10011330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100107e0();
  recovered_100052d0();
  DAT_10012340 = 1;
  return;
}

#undef DAT_10012340
