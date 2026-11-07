/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f098
#define DAT_1000f098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2253U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cd0
 */

void recovered_10000cd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f098 = 0;
  recovered_10000ce0();
  return;
}

#undef DAT_1000f098

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
#undef DAT_1000f098
#define DAT_1000f098 (*(char *)(((uintptr_t)pf_module_state + 0x2253U)))
#undef DAT_1000f09c
#define DAT_1000f09c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2257U)))
#undef DAT_1000f0a0
#define DAT_1000f0a0 (*(int *)(((uintptr_t)pf_module_state + 0x225bU)))
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
#define local_1c (*(uint *)(frame + 164))
#define auStack_a4 (*(uint (*)[34])(frame + 28))
#define local_18 (*(uint *)(frame + 168))
#define local_14 (*(uint *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000ce0(void)

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
  if (DAT_1000f098 != '\0') {
    return;
  }
  DAT_1000f09c = 0;
  DAT_1000f0a0 = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_10000d3b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_10000d3b:
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
        if (iVar9 == 0) goto LAB_10000e80;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10004080(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000f09c != 0) goto LAB_10000f86;
    }
  }
LAB_10000e80:
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
      puVar6 = &DAT_1000f09c;
      if (DAT_1000f09c != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_1000f0a0 == 0) {
        DAT_1000f098 = 1;
        DAT_1000f0a0 = 0x300000;
        return;
      }
      DAT_1000f098 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1000f09c;
    if (DAT_1000f09c != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_1000f0a0 == 0) {
      DAT_1000f0a0 = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1000f09c;
      if (DAT_1000f09c != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_1000f0a0 == 0) {
        DAT_1000f098 = 1;
        DAT_1000f0a0 = 0x2000000;
        return;
      }
      DAT_1000f098 = 1;
      return;
    }
  }
LAB_10000f86:
  if (DAT_1000f0a0 == 0) {
    DAT_1000f0a0 = DAT_1000f09c;
    DAT_1000f098 = 1;
    return;
  }
  DAT_1000f098 = 1;
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
#undef DAT_1000f098
#undef DAT_1000f09c
#undef DAT_1000f0a0
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00300000
#undef _DAT_00300004
#undef _DAT_00300008
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008
#undef local_1c
#undef auStack_a4
#undef local_18
#undef local_14

#undef DAT_1000f09c
#define DAT_1000f09c (*(int * *)(((uintptr_t)pf_module_state + 0x2257U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

int recovered_10001000(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000ce0();
  iVar1 = 0;
  for (piVar2 = DAT_1000f09c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000f09c

#undef DAT_1000f09c
#define DAT_1000f09c (*(int *)(((uintptr_t)pf_module_state + 0x2257U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

void recovered_10001040(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000ce0();
  for (iVar1 = DAT_1000f09c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000f09c

#undef DAT_1000f09c
#define DAT_1000f09c (*(int * *)(((uintptr_t)pf_module_state + 0x2257U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

int recovered_10001080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000ce0();
  iVar2 = 0;
  for (piVar1 = DAT_1000f09c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000f09c

#undef DAT_1000f09c
#define DAT_1000f09c (*(int *)(((uintptr_t)pf_module_state + 0x2257U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b0
 */

void recovered_100010b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000ce0();
  for (iVar1 = DAT_1000f09c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000f09c

#undef DAT_1000f09c
#define DAT_1000f09c (*(uint * *)(((uintptr_t)pf_module_state + 0x2257U)))
#undef DAT_1000f0a0
#define DAT_1000f0a0 (*(uint * *)(((uintptr_t)pf_module_state + 0x225bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f0
 */

uint * recovered_100010f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000ce0();
    puVar4 = DAT_1000f09c;
    if (DAT_1000f0a0 != (uint *)0x0) {
      puVar4 = DAT_1000f0a0;
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
            DAT_1000f0a0 = DAT_1000f09c;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_1000f0a0 = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1000f09c;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000f09c
#undef DAT_1000f0a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011b0
 */

longlong recovered_100011b0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100011f0
 */

ulonglong recovered_100011f0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001230
 */

undefined8 recovered_10001230(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001280
 */

undefined8 recovered_10001280(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001360
 */

undefined8 recovered_10001360(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100013d0
 */

undefined8 recovered_100013d0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001510
 */

undefined8 recovered_10001510(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100015d0
 */

void recovered_100015d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f0
 */

int recovered_100015f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001610(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001650(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001690(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d0
 */

void * recovered_100016d0(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_100016f7;
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
LAB_100016f7:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001790
 */

void * recovered_10001790(void *destination,void *source,ulong count)

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
 * Address: 0x10001960
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_10001960(void *destination,int value,ulong count)

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
 * Address: 0x10001a10
 */

void recovered_10001a10(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001ab0
 */

void recovered_10001ab0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001b50
 */

int recovered_10001b50(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_10001bee;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10001c05;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_10001c36:
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
      if (uVar8 != uVar9) goto LAB_10001c36;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_10001c36;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_10001c36;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10001c80(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10001bee:
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
LAB_10001c05:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c80
 */

int recovered_10001c80(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001cc0
 */

bool recovered_10001cc0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce0
 */

bool recovered_10001ce0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

bool recovered_10001d00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d20
 */

bool recovered_10001d20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

bool recovered_10001d50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d70
 */

bool recovered_10001d70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d90
 */

int recovered_10001d90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

int recovered_10001db0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

ulong recovered_10001dd0(char *text)

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
 * Address: 0x10001e00
 */

int recovered_10001e00(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_10001e36;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001e36:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e40
 */

int recovered_10001e40(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001e76;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001e76:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

void recovered_10001e80(int param_1,int param_2)

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
 * Address: 0x10001ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10001ea0(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10001fb1;
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
LAB_10001fb1:
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
 * Address: 0x10001fe0
 */

char * recovered_10001fe0(char *param_1,char param_2)

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
 * Address: 0x10002020
 */

int recovered_10002020(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000205b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000205b;
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
 * Address: 0x10002070
 */

char * recovered_10002070(char *param_1,char *param_2)

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
 * Address: 0x100020c0
 */

char * recovered_100020c0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002103;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002103:
  return pcVar3;
}


#undef DAT_1000dd4e
#define DAT_1000dd4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf09U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002110
 */

undefined * recovered_10002110(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000dd4e;
}

#undef DAT_1000dd4e

#undef PTR_DAT_1000f00c
#define PTR_DAT_1000f00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002120
 */

undefined ** recovered_10002120(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000f00c;
}

#undef PTR_DAT_1000f00c

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
 * Address: 0x10002130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002130(undefined4 *param_1)

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

#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100021c0(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000ce50;
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

#undef DAT_1000ce50
#undef _DAT_1000ce50

#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100021f0(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)_DAT_1000ce50;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_1000ce50 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_1000ce50);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_1000ce50
#undef _DAT_1000ce50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d0
 */

longdouble recovered_100022d0(double param_1,double param_2)

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
 * Address: 0x10002330
 */

longdouble recovered_10002330(double param_1,double param_2)

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
 * Address: 0x100023d0
 */

longdouble recovered_100023d0(double param_1)

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
 * Address: 0x10002420
 */

longdouble recovered_10002420(double param_1)

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
 * Address: 0x10002480
 */

void recovered_10002480(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ce54
#define DAT_1000ce54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000ce58
#define DAT_1000ce58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000ce5c
#define DAT_1000ce5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000ce60
#define DAT_1000ce60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000ce64
#define DAT_1000ce64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000ce68
#define DAT_1000ce68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000ce6c
#define DAT_1000ce6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000ce70
#define DAT_1000ce70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000ce74
#define DAT_1000ce74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000ce78
#define DAT_1000ce78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000ce7c
#define DAT_1000ce7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000ce80
#define DAT_1000ce80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000cea8
#define DAT_1000cea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63U)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce54
#define _DAT_1000ce54 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_1000ce58
#define _DAT_1000ce58 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef _DAT_1000ce5c
#define _DAT_1000ce5c (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef _DAT_1000ce60
#define _DAT_1000ce60 (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef _DAT_1000ce64
#define _DAT_1000ce64 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef _DAT_1000ce68
#define _DAT_1000ce68 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef _DAT_1000ce6c
#define _DAT_1000ce6c (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef _DAT_1000ce70
#define _DAT_1000ce70 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_1000ce74
#define _DAT_1000ce74 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef _DAT_1000ce78
#define _DAT_1000ce78 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef _DAT_1000ce7c
#define _DAT_1000ce7c (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef _DAT_1000ce80
#define _DAT_1000ce80 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_1000cea8
#define _DAT_1000cea8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002580(double param_1)

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
    lVar2 = (longdouble)_DAT_1000ce54;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_1000ce58 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_1000ce50;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_1000ce58 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_1000ce5c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_1000ce5c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_1000ce80 +
            lVar9 / (longdouble)_DAT_1000ce7c +
            lVar8 / (longdouble)_DAT_1000ce78 +
            lVar7 / (longdouble)_DAT_1000ce74 +
            lVar6 / (longdouble)_DAT_1000ce70 +
            lVar5 / (longdouble)_DAT_1000ce6c +
            lVar4 / (longdouble)_DAT_1000ce68 +
            lVar3 / (longdouble)_DAT_1000ce64 +
            (lVar10 * lVar2) / (longdouble)_DAT_1000ce60 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_1000cea8;
  }
  return lVar2;
}

#undef DAT_1000ce50
#undef DAT_1000ce54
#undef DAT_1000ce58
#undef DAT_1000ce5c
#undef DAT_1000ce60
#undef DAT_1000ce64
#undef DAT_1000ce68
#undef DAT_1000ce6c
#undef DAT_1000ce70
#undef DAT_1000ce74
#undef DAT_1000ce78
#undef DAT_1000ce7c
#undef DAT_1000ce80
#undef DAT_1000cea8
#undef _DAT_1000ce50
#undef _DAT_1000ce54
#undef _DAT_1000ce58
#undef _DAT_1000ce5c
#undef _DAT_1000ce60
#undef _DAT_1000ce64
#undef _DAT_1000ce68
#undef _DAT_1000ce6c
#undef _DAT_1000ce70
#undef _DAT_1000ce74
#undef _DAT_1000ce78
#undef _DAT_1000ce7c
#undef _DAT_1000ce80
#undef _DAT_1000cea8

#undef DAT_1000ced0
#define DAT_1000ced0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

longlong recovered_100026a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000ced0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000ced0

#undef DAT_1000ce84
#define DAT_1000ce84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000ce88
#define DAT_1000ce88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000ce8c
#define DAT_1000ce8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000ceb0
#define DAT_1000ceb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ceb8
#define DAT_1000ceb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000cec8
#define DAT_1000cec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_1000ce84
#define _DAT_1000ce84 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_1000ce88
#define _DAT_1000ce88 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_1000ce8c
#define _DAT_1000ce8c (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_1000ceb0
#define _DAT_1000ceb0 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_1000ceb8
#define _DAT_1000ceb8 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_1000cec0
#define _DAT_1000cec0 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_1000cec8
#define _DAT_1000cec8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100026f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000ceb0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000ceb8;
    } while ((longdouble)_DAT_1000ceb0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000cec0) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000cec8;
    } while (lVar1 < (longdouble)_DAT_1000cec0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_1000ce8c +
         (lVar2 * lVar2) / (longdouble)_DAT_1000ce88 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_1000ce84) * lVar1;
}

#undef DAT_1000ce84
#undef DAT_1000ce88
#undef DAT_1000ce8c
#undef DAT_1000ceb0
#undef DAT_1000ceb8
#undef DAT_1000cec0
#undef DAT_1000cec8
#undef _DAT_1000ce84
#undef _DAT_1000ce88
#undef _DAT_1000ce8c
#undef _DAT_1000ceb0
#undef _DAT_1000ceb8
#undef _DAT_1000cec0
#undef _DAT_1000cec8

#undef DAT_1000ce90
#define DAT_1000ce90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000ce94
#define DAT_1000ce94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ce98
#define DAT_1000ce98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000ceb0
#define DAT_1000ceb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ceb8
#define DAT_1000ceb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000cec8
#define DAT_1000cec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_1000ce90
#define _DAT_1000ce90 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef _DAT_1000ce94
#define _DAT_1000ce94 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_1000ce98
#define _DAT_1000ce98 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef _DAT_1000ceb0
#define _DAT_1000ceb0 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_1000ceb8
#define _DAT_1000ceb8 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_1000cec0
#define _DAT_1000cec0 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_1000cec8
#define _DAT_1000cec8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002790(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_1000ceb0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000ceb8;
    } while ((longdouble)_DAT_1000ceb0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_1000cec0) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_1000cec8;
    } while (lVar1 < (longdouble)_DAT_1000cec0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_1000ce98 +
         (lVar1 * lVar1) / (longdouble)_DAT_1000ce94 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_1000ce90;
}

#undef DAT_1000ce90
#undef DAT_1000ce94
#undef DAT_1000ce98
#undef DAT_1000ceb0
#undef DAT_1000ceb8
#undef DAT_1000cec0
#undef DAT_1000cec8
#undef _DAT_1000ce90
#undef _DAT_1000ce94
#undef _DAT_1000ce98
#undef _DAT_1000ceb0
#undef _DAT_1000ceb8
#undef _DAT_1000cec0
#undef _DAT_1000cec8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002830
 */

void recovered_10002830(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10002850(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10002930(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100029e0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10002a50(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b00
 */

void recovered_10002b00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002b60(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_1000ce50;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_1000ce50 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_1000ce50);
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

#undef DAT_1000ce50
#undef _DAT_1000ce50

#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002c50(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_1000ce50;
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

#undef DAT_1000ce50
#undef _DAT_1000ce50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c90
 */

longdouble recovered_10002c90(float param_1,float param_2)

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
 * Address: 0x10002d30
 */

longdouble recovered_10002d30(float param_1)

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
 * Address: 0x10002d80
 */

longdouble recovered_10002d80(float param_1)

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
 * Address: 0x10002df0
 */

longdouble recovered_10002df0(double param_1)

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
 * Address: 0x10002e60
 */

longdouble recovered_10002e60(float param_1)

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
 * Address: 0x10002ee0
 */

longdouble recovered_10002ee0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002480();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ce54
#define DAT_1000ce54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfU)))
#undef DAT_1000ce58
#define DAT_1000ce58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13U)))
#undef DAT_1000ce5c
#define DAT_1000ce5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17U)))
#undef DAT_1000ce60
#define DAT_1000ce60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef DAT_1000ce64
#define DAT_1000ce64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef DAT_1000ce68
#define DAT_1000ce68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23U)))
#undef DAT_1000ce6c
#define DAT_1000ce6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_1000ce70
#define DAT_1000ce70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_1000ce74
#define DAT_1000ce74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_1000ce78
#define DAT_1000ce78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000ce7c
#define DAT_1000ce7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_1000ce80
#define DAT_1000ce80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_1000cea8
#define DAT_1000cea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63U)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce54
#define _DAT_1000ce54 (*(float *)(((uintptr_t)pf_module_state + 0xfU)))
#undef _DAT_1000ce58
#define _DAT_1000ce58 (*(float *)(((uintptr_t)pf_module_state + 0x13U)))
#undef _DAT_1000ce5c
#define _DAT_1000ce5c (*(float *)(((uintptr_t)pf_module_state + 0x17U)))
#undef _DAT_1000ce60
#define _DAT_1000ce60 (*(float *)(((uintptr_t)pf_module_state + 0x1bU)))
#undef _DAT_1000ce64
#define _DAT_1000ce64 (*(float *)(((uintptr_t)pf_module_state + 0x1fU)))
#undef _DAT_1000ce68
#define _DAT_1000ce68 (*(float *)(((uintptr_t)pf_module_state + 0x23U)))
#undef _DAT_1000ce6c
#define _DAT_1000ce6c (*(float *)(((uintptr_t)pf_module_state + 0x27U)))
#undef _DAT_1000ce70
#define _DAT_1000ce70 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_1000ce74
#define _DAT_1000ce74 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef _DAT_1000ce78
#define _DAT_1000ce78 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef _DAT_1000ce7c
#define _DAT_1000ce7c (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef _DAT_1000ce80
#define _DAT_1000ce80 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_1000cea8
#define _DAT_1000cea8 (*(double *)(((uintptr_t)pf_module_state + 0x63U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002f00(float param_1)

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

  fVar1 = _DAT_1000ce54;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_1000ce58 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_1000ce50;
        iVar10 = iVar10 + 1;
      } while (_DAT_1000ce58 < param_1);
    }
    for (; param_1 < _DAT_1000ce5c; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_1000ce80 +
            fVar9 / _DAT_1000ce7c +
            fVar8 / _DAT_1000ce78 +
            fVar7 / _DAT_1000ce74 +
            fVar6 / _DAT_1000ce70 +
            fVar5 / _DAT_1000ce6c +
            fVar4 / _DAT_1000ce68 +
            fVar3 / _DAT_1000ce64 + (fVar1 * fVar2) / _DAT_1000ce60 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_1000cea8;
  }
  return (longdouble)fVar1;
}

#undef DAT_1000ce50
#undef DAT_1000ce54
#undef DAT_1000ce58
#undef DAT_1000ce5c
#undef DAT_1000ce60
#undef DAT_1000ce64
#undef DAT_1000ce68
#undef DAT_1000ce6c
#undef DAT_1000ce70
#undef DAT_1000ce74
#undef DAT_1000ce78
#undef DAT_1000ce7c
#undef DAT_1000ce80
#undef DAT_1000cea8
#undef _DAT_1000ce50
#undef _DAT_1000ce54
#undef _DAT_1000ce58
#undef _DAT_1000ce5c
#undef _DAT_1000ce60
#undef _DAT_1000ce64
#undef _DAT_1000ce68
#undef _DAT_1000ce6c
#undef _DAT_1000ce70
#undef _DAT_1000ce74
#undef _DAT_1000ce78
#undef _DAT_1000ce7c
#undef _DAT_1000ce80
#undef _DAT_1000cea8

#undef DAT_1000ced0
#define DAT_1000ced0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003030
 */

undefined4 recovered_10003030(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000ced0 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_1000ced0
#undef local_14

#undef DAT_1000ce84
#define DAT_1000ce84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_1000ce88
#define DAT_1000ce88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_1000ce8c
#define DAT_1000ce8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_1000ceb0
#define DAT_1000ceb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ceb8
#define DAT_1000ceb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000cec8
#define DAT_1000cec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_1000ce84
#define _DAT_1000ce84 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_1000ce88
#define _DAT_1000ce88 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_1000ce8c
#define _DAT_1000ce8c (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_1000ceb0
#define _DAT_1000ceb0 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_1000ceb8
#define _DAT_1000ceb8 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_1000cec0
#define _DAT_1000cec0 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_1000cec8
#define _DAT_1000cec8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003080(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000ceb0 < param_1; param_1 = param_1 + (float)_DAT_1000ceb8) {
  }
  for (; param_1 < (float)_DAT_1000cec0; param_1 = param_1 + (float)_DAT_1000cec8) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_1000ce8c +
          (fVar1 * fVar1) / _DAT_1000ce88 + fVar1 / _DAT_1000ce84 + 1.0) * param_1);
}

#undef DAT_1000ce84
#undef DAT_1000ce88
#undef DAT_1000ce8c
#undef DAT_1000ceb0
#undef DAT_1000ceb8
#undef DAT_1000cec0
#undef DAT_1000cec8
#undef _DAT_1000ce84
#undef _DAT_1000ce88
#undef _DAT_1000ce8c
#undef _DAT_1000ceb0
#undef _DAT_1000ceb8
#undef _DAT_1000cec0
#undef _DAT_1000cec8

#undef DAT_1000ce90
#define DAT_1000ce90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_1000ce94
#define DAT_1000ce94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_1000ce98
#define DAT_1000ce98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_1000ceb0
#define DAT_1000ceb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_1000ceb8
#define DAT_1000ceb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_1000cec0
#define DAT_1000cec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef DAT_1000cec8
#define DAT_1000cec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_1000ce90
#define _DAT_1000ce90 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef _DAT_1000ce94
#define _DAT_1000ce94 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_1000ce98
#define _DAT_1000ce98 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef _DAT_1000ceb0
#define _DAT_1000ceb0 (*(double *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_1000ceb8
#define _DAT_1000ceb8 (*(double *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_1000cec0
#define _DAT_1000cec0 (*(double *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_1000cec8
#define _DAT_1000cec8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003120(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_1000ceb0 < param_1; param_1 = param_1 + (float)_DAT_1000ceb8) {
  }
  for (; param_1 < (float)_DAT_1000cec0; param_1 = param_1 + (float)_DAT_1000cec8) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_1000ce98 +
         (fVar1 * fVar1) / _DAT_1000ce94 + fVar1 * _DAT_1000ce90 + 1.0);
}

#undef DAT_1000ce90
#undef DAT_1000ce94
#undef DAT_1000ce98
#undef DAT_1000ceb0
#undef DAT_1000ceb8
#undef DAT_1000cec0
#undef DAT_1000cec8
#undef _DAT_1000ce90
#undef _DAT_1000ce94
#undef _DAT_1000ce98
#undef _DAT_1000ceb0
#undef _DAT_1000ceb8
#undef _DAT_1000cec0
#undef _DAT_1000cec8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031c0
 */

void recovered_100031c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e0
 */

int recovered_100031e0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000330c:
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
    if (param_3 <= uVar7) goto LAB_1000330c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003330
 */

int recovered_10003330(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000345c:
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
    if (param_3 <= uVar7) goto LAB_1000345c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000cea0
#define DAT_1000cea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000cea0
#define _DAT_1000cea0 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003480(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)_DAT_1000cea0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_1000cea0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_1000cea0;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003541;
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
LAB_10003541:
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
              lVar10 = lVar10 * (longdouble)_DAT_1000ce50;
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

#undef DAT_1000ce50
#undef DAT_1000cea0
#undef _DAT_1000ce50
#undef _DAT_1000cea0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003620
 */

longdouble recovered_10003620(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003480(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000cea0
#define DAT_1000cea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef _DAT_1000cea0
#define _DAT_1000cea0 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef str_1000dd53
#define str_1000dd53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0eU)))
#undef str_1000dd5a
#define str_1000dd5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf15U)))
#undef str_1000dd6b
#define str_1000dd6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf26U)))
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
 * Address: 0x10003650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10003650(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003683;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10003683;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_10003762;
          goto LAB_10003737;
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
LAB_10003737:
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
LAB_10003762:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_100037d1;
    default:
      cVar8 = '\0';
      goto LAB_100037d1;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_100037d1;
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
LAB_100037d1:
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
        goto LAB_100039d8;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_100039d8:
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
        abStack_c5[iVar11 + 1] = str_1000dd6b[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003dc0;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_10003db6;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10003683;
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
        goto LAB_10003bf7;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003bf7;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003bf7:
      pcVar12 = str_1000dd5a;
      if (*local_3c != 0x58) {
        pcVar12 = str_1000dd6b;
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
LAB_10003683:
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
          abStack_c5[iVar11 + 1] = str_1000dd6b[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003bd1;
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
LAB_10003bd1:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_1000cea0;
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
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_1000cea0;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_1000cea0;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_1000cea0;
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
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_1000cea0);
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
        abStack_c5[iVar11 + 1] = str_1000dd6b[uVar9 & 0xf];
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
LAB_10003964:
      break;
    case 0x73:
      pbVar5 = (byte *)str_1000dd53;
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
        goto LAB_10003964;
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
        goto LAB_10003d03;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003d03;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003d03:
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
        abStack_c5[iVar11 + 1] = str_1000dd6b[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003dc0:
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
LAB_10003db6:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_1000cea0
#undef _DAT_1000cea0
#undef str_1000dd53
#undef str_1000dd5a
#undef str_1000dd6b
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
int recovered_10004050(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10003650(buffer,capacity,format,(void *)args);
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
#undef DAT_1000f09c
#define DAT_1000f09c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2257U)))
#undef DAT_1000f0a0
#define DAT_1000f0a0 (*(int * *)(((uintptr_t)pf_module_state + 0x225bU)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004080(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&DAT_1000f09c;
        if (DAT_1000f09c != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_1000f0a0 == (int *)0x0) {
          DAT_1000f0a0 = piVar1;
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
    puVar2 = &DAT_1000f09c;
    if (DAT_1000f09c != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_1000f0a0 != (int *)0x0) {
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
    puVar2 = &DAT_1000f09c;
    if (DAT_1000f09c != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_1000f0a0 != (int *)0x0) {
      return;
    }
  }
  DAT_1000f0a0 = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000f09c
#undef DAT_1000f0a0
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
#undef DAT_1000f0a4
#define DAT_1000f0a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_1000f0a8
#define DAT_1000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2263U)))
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
 * Address: 0x10004200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004200(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000f0a4 != 0) {
          DAT_1000f0a4 = DAT_1000f0a4 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000f0a4 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_100016d0(local_210,&DAT_1000f0a8,DAT_1000f0a4);
            uVar3 = DAT_1000f0a4;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000f0a4 = 0;
        }
        else {
          if (DAT_1000f0a4 - 0x1ff < 0xfffffe00) {
            recovered_100016d0(local_210,&DAT_1000f0a8,DAT_1000f0a4);
            local_210[DAT_1000f0a4] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_1000f0a4 = 0;
          }
          pcVar1 = &DAT_1000f0a8 + DAT_1000f0a4;
          DAT_1000f0a4 = DAT_1000f0a4 + 1;
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
#undef DAT_1000f0a4
#undef DAT_1000f0a8
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
#undef DAT_1000f0a4
#define DAT_1000f0a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_1000f0a8
#define DAT_1000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2263U)))
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
 * Address: 0x100043a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100043a0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000f0a4 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_100016d0(local_204,&DAT_1000f0a8,DAT_1000f0a4);
    uVar1 = DAT_1000f0a4;
  }
  local_204[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_1000f0a4 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f0a4
#undef DAT_1000f0a8
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
#undef DAT_1000f0a4
#define DAT_1000f0a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_1000f0a8
#define DAT_1000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2263U)))
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
 * Address: 0x10004430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004430(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000f0a4 != 0) {
    recovered_100016d0(local_208,&DAT_1000f0a8,DAT_1000f0a4);
    local_208[DAT_1000f0a4] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000f0a4 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000f0a4
#undef DAT_1000f0a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000dd7c
#define DAT_1000dd7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf37U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044c0
 */

void recovered_100044c0(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined1 *puVar2;

  format = &DAT_1000dd7c;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000dd52;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10004050(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10004200(local_148,iVar1);
  }
  return;
}

#undef DAT_1000dd52
#undef DAT_1000dd7c
#undef local_148

#undef DAT_1000dd9a
#define DAT_1000dd9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf55U)))
#undef str_1000dd7f
#define str_1000dd7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004520
 */

void recovered_10004520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001dd0(str_1000dd7f);
  recovered_10004200(str_1000dd7f,uVar1);
  uVar1 = recovered_10001dd0(&DAT_1000dd9a);
  recovered_10004200(&DAT_1000dd9a,uVar1);
  return;
}

#undef DAT_1000dd9a
#undef str_1000dd7f

#undef DAT_1000dd9a
#define DAT_1000dd9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf55U)))
#undef str_1000dd9d
#define str_1000dd9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

void recovered_10004570(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001dd0(str_1000dd9d);
  recovered_10004200(str_1000dd9d,uVar1);
  uVar1 = recovered_10001dd0(&DAT_1000dd9a);
  recovered_10004200(&DAT_1000dd9a,uVar1);
  return;
}

#undef DAT_1000dd9a
#undef str_1000dd9d

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
#undef DAT_1000f0a4
#define DAT_1000f0a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_1000f0a8
#define DAT_1000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2263U)))
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
 * Address: 0x100045c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100045c0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000f0a4 != 0) {
      recovered_100016d0(local_210,&DAT_1000f0a8,DAT_1000f0a4);
      local_210[DAT_1000f0a4] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_1000f0a4 = 0;
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
#undef DAT_1000f0a4
#undef DAT_1000f0a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046b0
 */

undefined4 recovered_100046b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046c0
 */

void recovered_100046c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046d0
 */

undefined1 recovered_100046d0(void)

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
#undef DAT_1000dd7c
#define DAT_1000dd7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf37U)))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_1000de31
#define str_1000de31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfecU)))
#undef str_1000de3e
#define str_1000de3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff9U)))
#undef str_1000de4c
#define str_1000de4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1007U)))
#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100046e0(char *param_1,int param_2)

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
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10001e00(param_1,str_1000de31);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_10001e00(param_1,str_1000de3e);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_10001e00(param_1,str_1000de4c);
      if (iVar4 != 0) {
        puVar5 = recovered_10001610(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_10001960(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10001fe0((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001fe0((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001fe0((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_10001fe0((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001fe0((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001fe0((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_10001fe0((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_10004050__4_((char *)(puVar5 + 1),0xf1,&DAT_1000dd7c,(uint)param_1);
          recovered_10001960(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001fe0((char *)param_2,'w');
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
                  destination = recovered_10001690((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000f000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_100049fe;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_100016d0(destination,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x100049dc;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000f000 = 2;
LAB_100049fe:
            recovered_10001650(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x100049dc:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10004866;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_10001610(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_10001960(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_10004050__4_((char *)(puVar5 + 1),0xf1,&DAT_1000dd7c,(uint)param_1);
    return puVar5;
  }
LAB_10004866:
  *(undefined4 *)PTR_DAT_1000f000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_1000dd7c
#undef PTR_DAT_1000f000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_1000de31
#undef str_1000de3e
#undef str_1000de4c
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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004a60(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10004b0d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10004af3;
      }
    }
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10004af3:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10001650((void *)param_3[0x3f]);
  }
  recovered_10001650(param_3);
LAB_10004b0d:
  recovered_100046e0(param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000f000
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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004b20(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000f000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10001650((void *)param_1[0x3f]);
  }
  recovered_10001650(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000f000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bf0
 */

uint recovered_10004bf0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_100016d0(param_1,(void *)(uVar2 + param_4[0x3e]),uVar1);
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
          uVar3 = recovered_10004cf0(param_4);
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
#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000f0a4
#define DAT_1000f0a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x225fU)))
#undef DAT_1000f0a8
#define DAT_1000f0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2263U)))
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
 * Address: 0x10004cf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004cf0(int *param_1)

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
LAB_10004d47:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000f0a4 != 0) {
      recovered_100016d0(local_20c,&DAT_1000f0a8,DAT_1000f0a4);
      local_20c[DAT_1000f0a4] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000f0a4 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000dd52,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10001dd0((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10004d47;
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
#undef DAT_1000dd52
#undef DAT_1000f0a4
#undef DAT_1000f0a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ea0
 */

int recovered_10004ea0(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10004fee:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10004200(param_1,count);
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
      pvVar3 = recovered_10001690((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000f000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10004fee;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001960((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_100016d0((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

undefined4 recovered_10005000(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000500f;
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
LAB_1000500f:
  *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000f000

#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005080
 */

undefined4 recovered_10005080(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_1000f000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100050b0(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000f000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000f000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005160
 */

undefined1 recovered_10005160(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005180
 */

undefined1 recovered_10005180(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051a0
 */

void recovered_100051a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051c0
 */

uint recovered_100051c0(uint param_1,int param_2)

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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100051f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100051f0(int param_1)

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
  *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef PTR_DAT_1000f000
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
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
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
 * Address: 0x10005260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005260(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000f000 = 0x16;
  }
  else {
    recovered_10001960(&local_1c,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000f000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef PTR_DAT_1000f000
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
 * Address: 0x100053d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100053d0(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_10001960(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      destination = recovered_10001610(local_18 + (local_18 == 0));
      if (destination == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_100016d0(destination,local_1c,local_18);
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
 * Address: 0x100054a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100054a0(int param_1,int param_2,int param_3)

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
 * Address: 0x10005510
 */

undefined4 recovered_10005510(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005520
 */

void recovered_10005520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


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

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005550
 */

undefined4 recovered_10005550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005560
 */

char * recovered_10005560(char *param_1,char param_2,int param_3)

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
 * Address: 0x10005590
 */

int recovered_10005590(char *left,char *right,ulong count)

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


#undef DAT_1000ddc0
#define DAT_1000ddc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf7bU)))
#undef str_1000ddc3
#define str_1000ddc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7eU)))
#undef str_1000ddd0
#define str_1000ddd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8bU)))
#undef str_1000ddda
#define str_1000ddda (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf95U)))
#undef str_1000ddee
#define str_1000ddee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa9U)))
#undef str_1000ddfc
#define str_1000ddfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb7U)))
#undef str_1000de0e
#define str_1000de0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfc9U)))
#undef str_1000de1a
#define str_1000de1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd5U)))
#undef str_1000de2b
#define str_1000de2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

char * recovered_100055e0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_1000ddc0;
  default:
    return str_1000de2b;
  case 2:
    return str_1000ddc3;
  case 5:
    return str_1000ddd0;
  case 9:
    return str_1000ddda;
  case 0xc:
    return str_1000ddee;
  case 0xd:
    return str_1000ddfc;
  case 0x11:
    return str_1000de0e;
  case 0x16:
    return str_1000de1a;
  }
}

#undef DAT_1000ddc0
#undef str_1000ddc3
#undef str_1000ddd0
#undef str_1000ddda
#undef str_1000ddee
#undef str_1000ddfc
#undef str_1000de0e
#undef str_1000de1a
#undef str_1000de2b

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

undefined4 recovered_10005650(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000f2a8
#define DAT_1000f2a8 (*(int *)(((uintptr_t)pf_module_state + 0x2463U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005660
 */

void recovered_10005660(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000f2a8 = DAT_1000f2a8 + 1;
  return;
}

#undef DAT_1000f2a8

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10005680(void *context){__asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\nmovl 36(%eax),%edx\njmpl *%edx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10005690(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100056c0(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_1000572d
#define DAT_1000572d (*(uint8_t *)(0x1000572dU))
#undef DAT_1000de5c
#define DAT_1000de5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1017U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

void recovered_100056f0(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005750;
  local_28 = &DAT_1000de5c;
  local_20 = &DAT_1000572d;
  local_40 = 1;
  recovered_10005c10(&local_44);
  recovered_100015d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000572d
#undef DAT_1000de5c
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef auStackY_cc
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005750
 */

undefined4 recovered_10005750(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

void recovered_10005760(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005780(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}


#undef DAT_1000f2ac
#define DAT_1000f2ac (*(int *)(((uintptr_t)pf_module_state + 0x2467U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

int recovered_10005780(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000f2ac;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000f2ac = param_1;
  iVar1 = recovered_10005ab0(param_1);
  return iVar1;
}

#undef DAT_1000f2ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057b0
 */

void * recovered_100057b0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001610(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100015d0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

void * recovered_100057e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001610(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100015d0();
  }
  return pvVar1;
}


#undef DAT_1000de6c
#define DAT_1000de6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1027U)))
#undef LAB_10005864
#define LAB_10005864 (*(uint8_t *)(0x10005864U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005810
 */

void recovered_10005810(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005750;
  local_28 = &DAT_1000de6c;
  local_20 = &LAB_10005864;
  local_40 = 1;
  recovered_10005c10(&local_44);
  recovered_10001650(param_1);
  recovered_10005c30(&local_44);
  return;
}

#undef DAT_1000de6c
#undef LAB_10005864
#undef auStack_18
#undef local_44
#undef local_40
#undef auStackY_cc
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_1000de7c
#define DAT_1000de7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1037U)))
#undef LAB_100058e4
#define LAB_100058e4 (*(uint8_t *)(0x100058e4U))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005890
 */

void recovered_10005890(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005750;
  local_28 = &DAT_1000de7c;
  local_20 = &LAB_100058e4;
  local_40 = 1;
  recovered_10005c10(&local_44);
  recovered_10001650(param_1);
  recovered_10005c30(&local_44);
  return;
}

#undef DAT_1000de7c
#undef LAB_100058e4
#undef local_20
#undef local_1c
#undef auStack_18
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_1000de8c
#define DAT_1000de8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1047U)))
#undef LAB_10005964
#define LAB_10005964 (*(uint8_t *)(0x10005964U))
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
 * Address: 0x10005910
 */

void recovered_10005910(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005750;
  local_28 = &DAT_1000de8c;
  local_20 = &LAB_10005964;
  local_40 = 1;
  recovered_10005c10(&local_44);
  recovered_10001650(param_1);
  recovered_10005c30(&local_44);
  return;
}

#undef DAT_1000de8c
#undef LAB_10005964
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_1000de9c
#define DAT_1000de9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1057U)))
#undef LAB_100059e4
#define LAB_100059e4 (*(uint8_t *)(0x100059e4U))
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
 * Address: 0x10005990
 */

void recovered_10005990(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005750;
  local_28 = &DAT_1000de9c;
  local_20 = &LAB_100059e4;
  local_40 = 1;
  recovered_10005c10(&local_44);
  recovered_10001650(param_1);
  recovered_10005c30(&local_44);
  return;
}

#undef DAT_1000de9c
#undef LAB_100059e4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a10
 */

undefined4 recovered_10005a10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a20
 */

uint recovered_10005a20(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a30
 */

void recovered_10005a30(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a40
 */

void recovered_10005a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a50
 */

undefined1 * recovered_10005a50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001610(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100056f0();
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
 * Address: 0x10005a90
 */

void recovered_10005a90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10001650((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ab0
 */

int recovered_10005ab0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000f2ac
#define DAT_1000f2ac (*(void * *)(((uintptr_t)pf_module_state + 0x2467U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

void recovered_10005ac0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_1000f2ac;
  if (DAT_1000f2ac != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000f2ac + 8);
    DAT_1000f2ac = *(void **)((int)DAT_1000f2ac + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10001650(pointer);
    }
  }
  return;
}

#undef DAT_1000f2ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b10
 */

void recovered_10005b10(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005b50(param_1 + -0x1c);
}


#undef DAT_1000f2ac
#define DAT_1000f2ac (*(int *)(((uintptr_t)pf_module_state + 0x2467U)))
#undef DAT_1000f2b0
#define DAT_1000f2b0 (*(int * *)(((uintptr_t)pf_module_state + 0x246bU)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

void recovered_10005b50(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1000f2b0 != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000f2b0;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_100064e0((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005ca0(local_14);
        in_ECX_00 = DAT_1000f2ac;
        if (DAT_1000f2ac == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_100056f0();
        }
        *(undefined1 *)(DAT_1000f2ac + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005b50(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}

#undef DAT_1000f2ac
#undef DAT_1000f2b0
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000f2ac
#define DAT_1000f2ac (*(int *)(((uintptr_t)pf_module_state + 0x2467U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd0
 */

void recovered_10005bd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000f2ac;
  if (DAT_1000f2ac == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100056f0();
  }
  *(undefined1 *)(DAT_1000f2ac + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005b50(in_ECX);
}

#undef DAT_1000f2ac

#undef DAT_1000f2b0
#define DAT_1000f2b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x246bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c10
 */

void recovered_10005c10(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000f2b0;
  DAT_1000f2b0 = param_1;
  return;
}

#undef DAT_1000f2b0

#undef DAT_1000f2b0
#define DAT_1000f2b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x246bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c30
 */

void recovered_10005c30(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000f2b0;
  if (DAT_1000f2b0 == param_1) {
    puVar2 = &DAT_1000f2b0;
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

#undef DAT_1000f2b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

void recovered_10005c60(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005b50(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c70
 */

void recovered_10005c70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}


#undef DAT_1000f2b0
#define DAT_1000f2b0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x246bU)))
#define iStack_34 (*(int *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define uStack_24 (*(undefined4 *)(frame + 44))
#define uStack_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

void recovered_10005c80(int in_stack_00000004)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000f2b0 != (undefined4 *)0x0) {
    DAT_1000f2b0 = (undefined4 *)*DAT_1000f2b0;
  }
  recovered_10005ca0(in_stack_00000004);
  if (DAT_1000f2b0 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000f2b0;
      if (DAT_1000f2b0 == puVar1) {
        DAT_1000f2b0[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_10005d1b:
        puVar2[1] = uVar3;
        recovered_10005680((int)puVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005c80(iStack_34);
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_100064e0((int)DAT_1000f2b0,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_10005d1b;
      }
      DAT_1000f2b0 = (undefined4 *)*puVar2;
    } while (DAT_1000f2b0 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}

#undef DAT_1000f2b0
#undef iStack_34
#undef uStack_28
#undef uStack_24
#undef uStack_20

#undef DAT_1000f2b0
#define DAT_1000f2b0 (*(int * *)(((uintptr_t)pf_module_state + 0x246bU)))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
#define iStack_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ca0
 */

void recovered_10005ca0(int in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000f2b0 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1000f2b0;
      if (DAT_1000f2b0 == piVar1) {
        DAT_1000f2b0[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_10005d1b:
        piVar2[1] = iVar3;
        recovered_10005680((int)piVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005c80(iStack_28);
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_100064e0((int)DAT_1000f2b0,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_10005d1b;
      }
      DAT_1000f2b0 = (int *)*piVar2;
    } while (DAT_1000f2b0 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}

#undef DAT_1000f2b0
#undef local_1c
#undef local_18
#undef local_14
#undef iStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d30
 */

void recovered_10005d30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005c80(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d50
 */

undefined4 recovered_10005d50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d60
 */

void recovered_10005d60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100056f0();
}


#undef DAT_1000f080
#define DAT_1000f080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x223bU)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d70
 */

int recovered_10005d70(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10005e20;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10005e20;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000f080) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10005e20:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000f080
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e40
 */

void recovered_10005e40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100015d0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e50
 */

undefined4 recovered_10005e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e60
 */

bool recovered_10005e60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e80
 */

bool recovered_10005e80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb0
 */

bool recovered_10005eb0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee0
 */

bool recovered_10005ee0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f00
 */

bool recovered_10005f00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f20
 */

byte recovered_10005f20(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f60
 */

bool recovered_10005f60(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10005f80(double value) {
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
float recovered_100060b0(float value){return (float)recovered_10005f80((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_100061f0(long double value){return (long double)recovered_10005f80((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10006320(long end,long start){return (double)end-(double)start;}


#undef DAT_1000ce50
#define DAT_1000ce50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbU)))
#undef DAT_1000ce90
#define DAT_1000ce90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef _DAT_1000ce50
#define _DAT_1000ce50 (*(float *)(((uintptr_t)pf_module_state + 0xbU)))
#undef _DAT_1000ce90
#define _DAT_1000ce90 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10006340(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_100023d0(param_1);
  if ((longdouble)_DAT_1000ce50 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_1000ce90 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000ce50
#undef DAT_1000ce90
#undef _DAT_1000ce50
#undef _DAT_1000ce90

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006390
 */

ulonglong recovered_10006390(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_1000643d;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_1000643d;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_1000643d;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_1000643d;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_1000643d:
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
 * Address: 0x100064d0
 */

longlong recovered_100064d0(char *text,char **end,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006390((byte *)text,end,base);
  return uVar1;
}


#undef DAT_1000d158
#define DAT_1000d158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x313U)))
#undef DAT_1000f080
#define DAT_1000f080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x223bU)))
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
 * Address: 0x100064e0
 */

undefined4 recovered_100064e0(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_10006860((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10006670;
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
LAB_10006670:
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
    if (0x1f < uVar5) goto LAB_10006718;
LAB_10006809:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10006720;
LAB_10006814:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10006809;
LAB_10006718:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10006814;
LAB_10006720:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_1000683f:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_1000d158 + local_38 * 4) * local_20;
      pbVar9 = recovered_10006860(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_1000683f;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_1000683f;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_1000683f;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000f080) goto LAB_1000681b;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_1000683f;
    }
  }
LAB_1000681b:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10006670;
}

#undef DAT_1000d158
#undef DAT_1000f080
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
 * Address: 0x10006860
 */

byte * recovered_10006860(uint in_ECX,int *in_EDX)

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
    goto LAB_10006935;
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
    goto LAB_10006935;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000688d_caseD_5;
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
LAB_10006935:
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
switchD_1000688d_caseD_5:
  return pbVar3;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000deac
#define DAT_1000deac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1067U)))
#undef LAB_10006a2e
#define LAB_10006a2e (*(uint8_t *)(0x10006a2eU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_4c (*(undefined4 *)(frame + 164))
#define local_48 (*(undefined4 *)(frame + 168))
#define local_34 (*(undefined * *)(frame + 188))
#define local_30 (*(undefined * *)(frame + 192))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_28 (*(undefined1 * *)(frame + 200))
#define local_24 (*(undefined1 * *)(frame + 204))
#define local_14 (*(undefined4 *)(frame + 220))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006970
 */

undefined1 * recovered_10006970(undefined1 *param_1,int *param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 *puVar2;

  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  piVar1 = (int *)(param_1 + 4);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *piVar1 = 0;
  *param_1 = 0;
  local_34 = PTR_recovered_10005750_1000f008;
  local_30 = &DAT_1000deac;
  local_28 = &LAB_10006a2e;
  local_14 = piVar1;
  recovered_10005c10(&local_4c);
  if (piVar1 != param_2) {
    puVar2 = &DAT_1000dd52;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_48 = 1;
    recovered_10009f80(local_14,(int)puVar2,param_2[1]);
  }
  param_1[0x1c] = 0;
  recovered_10005c30(&local_4c);
  return param_1;
}

#undef DAT_1000dd52
#undef DAT_1000deac
#undef LAB_10006a2e
#undef PTR_recovered_10005750_1000f008
#undef local_4c
#undef local_48
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_14
#undef auStackY_dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a60
 */

undefined1 * recovered_10006a60(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10005810((void *)0x0);
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_1[0x1c] = 0;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af0
 */

void recovered_10006af0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b30
 */

void recovered_10006b30(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 2;
  *(uint *)(param_1 + 0x18) = param_2 + (uint)(param_2 == 0);
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

void recovered_10006b70(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

void recovered_10006ba0(undefined1 *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((int *)(param_1 + 4) != param_2) {
    puVar1 = &DAT_1000dd52;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_10009f80((int *)(param_1 + 4),(int)puVar1,param_2[1]);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

#undef DAT_1000dd52

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bf0
 */

void recovered_10006bf0(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10005810(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    *(undefined4 *)(param_1 + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c50
 */

void recovered_10006c50(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#define bStack_65 (*(byte *)(frame + 59))
#define local_84 (*(undefined1 (*)[31])(frame + 28))
#define local_64 (*(undefined4 *)(frame + 60))
#define local_60 (*(int *)(frame + 64))
#define local_5c (*(int *)(frame + 68))
#define local_20 (*(uint *)(frame + 128))
#define local_1c (*(uint *)(frame + 132))
#define local_18 (*(uint *)(frame + 136))
#define local_14 (*(uint *)(frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c80
 */

int * recovered_10006c80(int *param_1,char *param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if (*param_2 == '\x02') {
    local_14 = *(uint *)(param_2 + 0x14);
    uVar3 = (int)local_14 >> 0x1f;
    uVar6 = (*(uint *)(param_2 + 0x10) ^ uVar3) - uVar3;
    uVar3 = ((local_14 ^ uVar3) - uVar3) - (uint)((*(uint *)(param_2 + 0x10) ^ uVar3) < uVar3);
    uVar10 = 0;
    do {
      uVar8 = uVar10;
      uVar4 = uVar3 << 0x1f | uVar6 >> 1;
      uVar7 = uVar3 >> 1;
      uVar9 = (uVar4 + uVar7 + (uint)CARRY4(uVar4,uVar7)) % 5;
      uVar5 = uVar4 - uVar9;
      lVar1 = (ulonglong)uVar5 * 0xcccccccd;
      local_20 = uVar8;
      local_1c = uVar3;
      local_18 = uVar6;
      local_84[uVar8 + 0x20] = (char)uVar6 + (char)lVar1 * -10 | 0x30;
      uVar10 = uVar8 + 1;
      bVar11 = 9 < uVar6;
      uVar6 = (uint)lVar1;
      uVar3 = (uVar7 - (uVar4 < uVar9)) * -0x33333333 +
              uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
    } while (local_1c != 0 || -local_1c < (uint)bVar11);
    if ((int)local_14 < 0) {
      local_84[uVar8 + 0x21] = 0x2d;
      uVar10 = uVar8 + 2;
    }
    if (uVar10 < 0x21) {
      if (uVar10 != 0) {
        puVar2 = local_84;
        uVar6 = uVar10;
        do {
          *puVar2 = local_84[uVar6 + 0x1f];
          puVar2 = puVar2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      recovered_10009f80(&local_64,(int)local_84,uVar10);
    }
    else {
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
    }
    *param_1 = local_64;
    param_1[1] = local_60;
    param_1[2] = local_5c;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    recovered_10005810((void *)0x0);
  }
  else if (*param_2 == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar2 = &DAT_1000dd52;
    if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 4);
    }
    recovered_10009f80(param_1,(int)puVar2,*(uint *)(param_2 + 8));
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return param_1;
}

#undef DAT_1000dd52
#undef bStack_65
#undef local_84
#undef local_64
#undef local_60
#undef local_5c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef PTR_DAT_1000f000
#define PTR_DAT_1000f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bbU)))
#define local_14 (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e20
 */

longlong recovered_10006e20(void *variable)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;

  if (*(char *)variable == '\x01') {
    if (*(int *)((int)variable + 8) != 0) {
      local_14 = (char *)0x0;
      *(undefined4 *)PTR_DAT_1000f000 = 0;
      pcVar1 = &DAT_1000dd52;
      if (*(char **)((int)variable + 4) != (char *)0x0) {
        pcVar1 = *(char **)((int)variable + 4);
      }
      lVar3 = recovered_100064d0(pcVar1,&local_14,10);
      pcVar1 = &DAT_1000dd52;
      if (*(char **)((int)variable + 4) != (char *)0x0) {
        pcVar1 = *(char **)((int)variable + 4);
      }
      if (((local_14 != (char *)0x0 && local_14 != pcVar1) && (*local_14 == '\0')) &&
         (*(int *)PTR_DAT_1000f000 != 0x22)) {
        return lVar3;
      }
      if (((2 < *(uint *)((int)variable + 8)) && (*pcVar1 == '0')) &&
         ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
        local_14 = (char *)0x0;
        *(undefined4 *)PTR_DAT_1000f000 = 0;
        lVar3 = recovered_100064d0(pcVar1 + 2,&local_14,0x10);
        puVar2 = &DAT_1000dd52;
        if (*(undefined1 **)((int)variable + 4) != (undefined1 *)0x0) {
          puVar2 = *(undefined1 **)((int)variable + 4);
        }
        if (((local_14 != (char *)0x0) && (local_14 != puVar2 + 2)) &&
           ((*local_14 == '\0' && (*(int *)PTR_DAT_1000f000 != 0x22)))) {
          return lVar3;
        }
      }
    }
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(char *)variable == '\x02') {
      lVar3 = *(longlong *)((int)variable + 0x10);
    }
  }
  return lVar3;
}

#undef DAT_1000dd52
#undef PTR_DAT_1000f000
#undef local_14

#undef DAT_1000deb4
#define DAT_1000deb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x106fU)))
#undef LAB_10007027
#define LAB_10007027 (*(uint8_t *)(0x10007027U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_34 (*(undefined * *)(frame + 188))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
#define local_30 (*(undefined * *)(frame + 192))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_28 (*(undefined1 * *)(frame + 200))
#define local_24 (*(undefined1 * *)(frame + 204))
#define local_18 (*(int * *)(frame + 216))
#define local_14 (*(uint * *)(frame + 220))
#define local_4c (*(undefined4 *)(frame + 164))
#define local_48 (*(undefined4 *)(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f30
 */

void recovered_10006f30(int *param_1,int param_2)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  local_2c = auStackY_dc + 0xd8;
  local_24 = auStackY_dc + 0x80;
  *param_1 = param_2;
  local_14 = param_1 + 1;
  *local_14 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_18 = param_1 + 4;
  *local_18 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  local_34 = PTR_recovered_10005750_1000f008;
  local_30 = &DAT_1000deb4;
  local_28 = &LAB_10007027;
  local_48 = 1;
  recovered_10005c10(&local_4c);
  recovered_10007060(param_1);
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (piVar1[2] != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar2;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  recovered_10005c30(&local_4c);
  return;
}

#undef DAT_1000deb4
#undef LAB_10007027
#undef PTR_recovered_10005750_1000f008
#undef local_34
#undef auStackY_dc
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_18
#undef local_14
#undef local_4c
#undef local_48

#undef DAT_1000debc
#define DAT_1000debc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1077U)))
#undef LAB_10007f6b
#define LAB_10007f6b (*(uint8_t *)(0x10007f6bU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#undef PTR_recovered_1000a330_1000e008
#define PTR_recovered_1000a330_1000e008 (*(void * *)(((uintptr_t)pf_module_state + 0x11c3U)))
#undef PTR_recovered_1000a5f0_1000e034
#define PTR_recovered_1000a5f0_1000e034 (*(void * *)(((uintptr_t)pf_module_state + 0x11efU)))
#undef PTR_recovered_1000ae20_1000e058
#define PTR_recovered_1000ae20_1000e058 (*(void * *)(((uintptr_t)pf_module_state + 0x1213U)))
#undef PTR_recovered_1000af40_1000e07c
#define PTR_recovered_1000af40_1000e07c (*(void * *)(((uintptr_t)pf_module_state + 0x1237U)))
#undef PTR_recovered_1000b010_1000e0a0
#define PTR_recovered_1000b010_1000e0a0 (*(void * *)(((uintptr_t)pf_module_state + 0x125bU)))
#undef PTR_recovered_1000b1d0_1000e0c4
#define PTR_recovered_1000b1d0_1000e0c4 (*(void * *)(((uintptr_t)pf_module_state + 0x127fU)))
#undef PTR_recovered_1000b320_1000e0e8
#define PTR_recovered_1000b320_1000e0e8 (*(void * *)(((uintptr_t)pf_module_state + 0x12a3U)))
#undef PTR_recovered_1000b500_1000e10c
#define PTR_recovered_1000b500_1000e10c (*(void * *)(((uintptr_t)pf_module_state + 0x12c7U)))
#undef PTR_recovered_1000b650_1000e130
#define PTR_recovered_1000b650_1000e130 (*(void * *)(((uintptr_t)pf_module_state + 0x12ebU)))
#undef PTR_recovered_1000ba70_1000e154
#define PTR_recovered_1000ba70_1000e154 (*(void * *)(((uintptr_t)pf_module_state + 0x130fU)))
#undef PTR_recovered_1000bb30_1000e178
#define PTR_recovered_1000bb30_1000e178 (*(void * *)(((uintptr_t)pf_module_state + 0x1333U)))
#undef PTR_recovered_1000bc00_1000e19c
#define PTR_recovered_1000bc00_1000e19c (*(void * *)(((uintptr_t)pf_module_state + 0x1357U)))
#undef PTR_recovered_1000c010_1000e1c0
#define PTR_recovered_1000c010_1000e1c0 (*(void * *)(((uintptr_t)pf_module_state + 0x137bU)))
#undef PTR_recovered_1000c220_1000e1e4
#define PTR_recovered_1000c220_1000e1e4 (*(void * *)(((uintptr_t)pf_module_state + 0x139fU)))
#undef PTR_recovered_1000c300_1000e208
#define PTR_recovered_1000c300_1000e208 (*(void * *)(((uintptr_t)pf_module_state + 0x13c3U)))
#undef PTR_recovered_1000c420_1000e22c
#define PTR_recovered_1000c420_1000e22c (*(void * *)(((uintptr_t)pf_module_state + 0x13e7U)))
#undef PTR_recovered_1000c500_1000e250
#define PTR_recovered_1000c500_1000e250 (*(void * *)(((uintptr_t)pf_module_state + 0x140bU)))
#undef PTR_recovered_1000c620_1000e274
#define PTR_recovered_1000c620_1000e274 (*(void * *)(((uintptr_t)pf_module_state + 0x142fU)))
#undef PTR_recovered_1000c710_1000e298
#define PTR_recovered_1000c710_1000e298 (*(void * *)(((uintptr_t)pf_module_state + 0x1453U)))
#undef PTR_recovered_1000c830_1000e2bc
#define PTR_recovered_1000c830_1000e2bc (*(void * *)(((uintptr_t)pf_module_state + 0x1477U)))
#undef PTR_recovered_1000c930_1000e2e0
#define PTR_recovered_1000c930_1000e2e0 (*(void * *)(((uintptr_t)pf_module_state + 0x149bU)))
#undef PTR_recovered_1000ca70_1000e304
#define PTR_recovered_1000ca70_1000e304 (*(void * *)(((uintptr_t)pf_module_state + 0x14bfU)))
#define local_148 (*(int * *)(frame + 280))
#define local_144 (*(undefined4 *)(frame + 284))
#define local_13c (*(int * *)(frame + 292))
#define local_138 (*(undefined4 *)(frame + 296))
#define local_130 (*(int * *)(frame + 304))
#define local_12c (*(undefined4 *)(frame + 308))
#define local_124 (*(int * *)(frame + 316))
#define local_120 (*(undefined4 *)(frame + 320))
#define local_118 (*(int * *)(frame + 328))
#define local_114 (*(undefined4 *)(frame + 332))
#define local_10c (*(int * *)(frame + 340))
#define local_108 (*(undefined4 *)(frame + 344))
#define local_100 (*(int * *)(frame + 352))
#define local_fc (*(undefined4 *)(frame + 356))
#define local_f4 (*(int * *)(frame + 364))
#define local_f0 (*(undefined4 *)(frame + 368))
#define local_e8 (*(int * *)(frame + 376))
#define local_e4 (*(undefined4 *)(frame + 380))
#define local_dc (*(int * *)(frame + 388))
#define local_d8 (*(undefined4 *)(frame + 392))
#define local_d0 (*(int * *)(frame + 400))
#define local_cc (*(undefined4 *)(frame + 404))
#define local_c4 (*(int * *)(frame + 412))
#define local_c0 (*(undefined4 *)(frame + 416))
#define local_b8 (*(int * *)(frame + 424))
#define local_b4 (*(undefined4 *)(frame + 428))
#define local_ac (*(int * *)(frame + 436))
#define local_a8 (*(int * *)(frame + 440))
#define local_a4 (*(int * *)(frame + 444))
#define local_a0 (*(int * *)(frame + 448))
#define local_9c (*(int * *)(frame + 452))
#define local_98 (*(int * *)(frame + 456))
#define local_94 (*(int * *)(frame + 460))
#define local_90 (*(int * *)(frame + 464))
#define local_8c (*(int * *)(frame + 468))
#define local_88 (*(int * *)(frame + 472))
#define local_84 (*(int * *)(frame + 476))
#define local_80 (*(int * *)(frame + 480))
#define local_7c (*(int * *)(frame + 484))
#define local_78 (*(int * *)(frame + 488))
#define local_74 (*(int * *)(frame + 492))
#define local_70 (*(int * *)(frame + 496))
#define local_6c (*(int * *)(frame + 500))
#define local_68 (*(int * *)(frame + 504))
#define local_64 (*(int * *)(frame + 508))
#define local_60 (*(int * *)(frame + 512))
#define local_5c (*(int * *)(frame + 516))
#define local_58 (*(int * *)(frame + 520))
#define local_54 (*(undefined4 *)(frame + 524))
#define local_50 (*(undefined4 *)(frame + 528))
#define local_3c (*(undefined * *)(frame + 548))
#define local_38 (*(undefined * *)(frame + 552))
#define local_34 (*(undefined1 * *)(frame + 556))
#define local_30 (*(undefined1 * *)(frame + 560))
#define local_2c (*(undefined1 * *)(frame + 564))
#define local_1c (*(undefined2 * *)(frame + 580))
#define local_18 (*(undefined4 *)(frame + 584))
#define local_13 (*(undefined2 *)(frame + 589))
#define local_11 (*(undefined1 *)(frame + 591))
#define auStackY_24c (*(undefined1 (*)[128])(frame + 20))
#define local_1b4 (*(int * *)(frame + 172))
#define local_1b0 (*(undefined4 *)(frame + 176))
#define local_1a8 (*(int * *)(frame + 184))
#define local_1a4 (*(undefined4 *)(frame + 188))
#define local_19c (*(int * *)(frame + 196))
#define local_198 (*(undefined4 *)(frame + 200))
#define local_190 (*(int * *)(frame + 208))
#define local_18c (*(undefined4 *)(frame + 212))
#define local_184 (*(int * *)(frame + 220))
#define local_180 (*(undefined4 *)(frame + 224))
#define local_178 (*(int * *)(frame + 232))
#define local_174 (*(undefined4 *)(frame + 236))
#define local_16c (*(int * *)(frame + 244))
#define local_168 (*(undefined4 *)(frame + 248))
#define local_160 (*(int * *)(frame + 256))
#define local_15c (*(undefined4 *)(frame + 260))
#define local_154 (*(int * *)(frame + 268))
#define local_150 (*(undefined4 *)(frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007060
 */

void recovered_10007060(int *param_1)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  local_34 = (undefined1 *)((int)(uintptr_t)(frame + 608) + -4);
  local_2c = auStackY_24c + 0x80;
  iVar2 = param_1[5];
  local_3c = PTR_recovered_10005750_1000f008;
  local_38 = &DAT_1000debc;
  local_30 = &LAB_10007f6b;
  recovered_10005c10(&local_54);
  if (iVar2 != 0) {
    iVar3 = iVar2 * 0x10 + -4;
    do {
      iVar1 = param_1[4];
      if (*(int **)(iVar1 + iVar3) != (int *)0x0) {
        (*(void (**)(void *))(**(int **)(iVar1 + iVar3) + 4))((void *)(*(int **)(iVar1 + iVar3)));
      }
      *(undefined4 *)(iVar1 + -8 + iVar3) = 0;
      recovered_10005810(*(void **)(iVar1 + -0xc + iVar3));
      iVar3 = iVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[5] = 0;
  local_13 = (ushort)PF_PART1(local_13, 1) << 8;
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_1b4,(undefined1 *)local_1c,1);
  local_50 = 1;
  local_ac = recovered_100057b0(8);
  *local_ac = (int)&PTR_recovered_1000a330_1000e008;
  local_50 = 2;
  recovered_10009590(param_1,1,&local_1b4,&local_ac);
  if (local_ac != (int *)0x0) {
    (*(void (**)(void *))(*local_ac + 4))((void *)(local_ac));
  }
  local_1b0 = 0;
  recovered_10005810(local_1b4);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_1a8,(undefined1 *)local_1c,1);
  local_50 = 3;
  local_a8 = recovered_100057b0(8);
  *local_a8 = (int)&PTR_recovered_1000a5f0_1000e034;
  local_50 = 4;
  recovered_10009590(param_1,2,&local_1a8,&local_a8);
  if (local_a8 != (int *)0x0) {
    (*(void (**)(void *))(*local_a8 + 4))((void *)(local_a8));
  }
  local_1a4 = 0;
  recovered_10005810(local_1a8);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_19c,(undefined1 *)local_1c,1);
  local_50 = 5;
  local_a4 = recovered_100057b0(8);
  *local_a4 = (int)&PTR_recovered_1000ae20_1000e058;
  local_50 = 6;
  recovered_10009590(param_1,3,&local_19c,&local_a4);
  if (local_a4 != (int *)0x0) {
    (*(void (**)(void *))(*local_a4 + 4))((void *)(local_a4));
  }
  local_198 = 0;
  recovered_10005810(local_19c);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_190,(undefined1 *)local_1c,1);
  local_50 = 7;
  local_a0 = recovered_100057b0(8);
  *local_a0 = (int)&PTR_recovered_1000af40_1000e07c;
  local_50 = 8;
  recovered_10009590(param_1,4,&local_190,&local_a0);
  if (local_a0 != (int *)0x0) {
    (*(void (**)(void *))(*local_a0 + 4))((void *)(local_a0));
  }
  local_18c = 0;
  recovered_10005810(local_190);
  local_13 = local_13 & 0xff00;
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_184,(undefined1 *)local_1c,1);
  local_50 = 9;
  local_9c = recovered_100057b0(8);
  *local_9c = (int)&PTR_recovered_1000b010_1000e0a0;
  local_50 = 10;
  recovered_10009590(param_1,5,&local_184,&local_9c);
  if (local_9c != (int *)0x0) {
    (*(void (**)(void *))(*local_9c + 4))((void *)(local_9c));
  }
  local_180 = 0;
  recovered_10005810(local_184);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_178,(undefined1 *)local_1c,1);
  local_50 = 0xb;
  local_98 = recovered_100057b0(8);
  *local_98 = (int)&PTR_recovered_1000b1d0_1000e0c4;
  local_50 = 0xc;
  recovered_10009590(param_1,6,&local_178,&local_98);
  if (local_98 != (int *)0x0) {
    (*(void (**)(void *))(*local_98 + 4))((void *)(local_98));
  }
  local_174 = 0;
  recovered_10005810(local_178);
  local_13 = CONCAT11(PF_PART1(local_13, 1),2);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_16c,(undefined1 *)local_1c,1);
  local_50 = 0xd;
  local_94 = recovered_100057b0(8);
  *local_94 = (int)&PTR_recovered_1000b320_1000e0e8;
  local_50 = 0xe;
  recovered_10009590(param_1,7,&local_16c,&local_94);
  if (local_94 != (int *)0x0) {
    (*(void (**)(void *))(*local_94 + 4))((void *)(local_94));
  }
  local_168 = 0;
  recovered_10005810(local_16c);
  local_13 = 0x101;
  local_11 = 1;
  local_1c = &local_13;
  local_18 = 3;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_160,(undefined1 *)local_1c,3);
  local_50 = 0xf;
  local_90 = recovered_100057b0(8);
  *local_90 = (int)&PTR_recovered_1000b500_1000e10c;
  local_50 = 0x10;
  recovered_10009590(param_1,8,&local_160,&local_90);
  if (local_90 != (int *)0x0) {
    (*(void (**)(void *))(*local_90 + 4))((void *)(local_90));
  }
  local_15c = 0;
  recovered_10005810(local_160);
  local_13 = 0x101;
  local_11 = 0;
  local_1c = &local_13;
  local_18 = 3;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_154,(undefined1 *)local_1c,3);
  local_50 = 0x11;
  local_8c = recovered_100057b0(8);
  *local_8c = (int)&PTR_recovered_1000b650_1000e130;
  local_50 = 0x12;
  recovered_10009590(param_1,9,&local_154,&local_8c);
  if (local_8c != (int *)0x0) {
    (*(void (**)(void *))(*local_8c + 4))((void *)(local_8c));
  }
  local_150 = 0;
  recovered_10005810(local_154);
  local_13 = 0x101;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_148,(undefined1 *)local_1c,2);
  local_50 = 0x13;
  local_88 = recovered_100057b0(8);
  *local_88 = (int)&PTR_recovered_1000ba70_1000e154;
  local_50 = 0x14;
  recovered_10009590(param_1,10,&local_148,&local_88);
  if (local_88 != (int *)0x0) {
    (*(void (**)(void *))(*local_88 + 4))((void *)(local_88));
  }
  local_144 = 0;
  recovered_10005810(local_148);
  local_13 = CONCAT11(PF_PART1(local_13, 1),1);
  local_1c = &local_13;
  local_18 = 1;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_13c,(undefined1 *)local_1c,1);
  local_50 = 0x15;
  local_84 = recovered_100057b0(8);
  *local_84 = (int)&PTR_recovered_1000bb30_1000e178;
  local_50 = 0x16;
  recovered_10009590(param_1,0xb,&local_13c,&local_84);
  if (local_84 != (int *)0x0) {
    (*(void (**)(void *))(*local_84 + 4))((void *)(local_84));
  }
  local_138 = 0;
  recovered_10005810(local_13c);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_130,(undefined1 *)local_1c,2);
  local_50 = 0x17;
  local_80 = recovered_100057b0(8);
  *local_80 = (int)&PTR_recovered_1000bc00_1000e19c;
  local_50 = 0x18;
  recovered_10009590(param_1,0xc,&local_130,&local_80);
  if (local_80 != (int *)0x0) {
    (*(void (**)(void *))(*local_80 + 4))((void *)(local_80));
  }
  local_12c = 0;
  recovered_10005810(local_130);
  local_13 = 2;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_124,(undefined1 *)local_1c,2);
  local_50 = 0x19;
  local_7c = recovered_100057b0(8);
  *local_7c = (int)&PTR_recovered_1000c010_1000e1c0;
  local_50 = 0x1a;
  recovered_10009590(param_1,0xd,&local_124,&local_7c);
  if (local_7c != (int *)0x0) {
    (*(void (**)(void *))(*local_7c + 4))((void *)(local_7c));
  }
  local_120 = 0;
  recovered_10005810(local_124);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_118,(undefined1 *)local_1c,2);
  local_50 = 0x1b;
  local_78 = recovered_100057b0(8);
  *local_78 = (int)&PTR_recovered_1000c220_1000e1e4;
  local_50 = 0x1c;
  recovered_10009590(param_1,0xe,&local_118,&local_78);
  if (local_78 != (int *)0x0) {
    (*(void (**)(void *))(*local_78 + 4))((void *)(local_78));
  }
  local_114 = 0;
  recovered_10005810(local_118);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_10c,(undefined1 *)local_1c,2);
  local_50 = 0x1d;
  local_74 = recovered_100057b0(8);
  *local_74 = (int)&PTR_recovered_1000c300_1000e208;
  local_50 = 0x1e;
  recovered_10009590(param_1,0xf,&local_10c,&local_74);
  if (local_74 != (int *)0x0) {
    (*(void (**)(void *))(*local_74 + 4))((void *)(local_74));
  }
  local_108 = 0;
  recovered_10005810(local_10c);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_100,(undefined1 *)local_1c,2);
  local_50 = 0x1f;
  local_70 = recovered_100057b0(8);
  *local_70 = (int)&PTR_recovered_1000c420_1000e22c;
  local_50 = 0x20;
  recovered_10009590(param_1,0x10,&local_100,&local_70);
  if (local_70 != (int *)0x0) {
    (*(void (**)(void *))(*local_70 + 4))((void *)(local_70));
  }
  local_fc = 0;
  recovered_10005810(local_100);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_f4,(undefined1 *)local_1c,2);
  local_50 = 0x21;
  local_6c = recovered_100057b0(8);
  *local_6c = (int)&PTR_recovered_1000c500_1000e250;
  local_50 = 0x22;
  recovered_10009590(param_1,0x11,&local_f4,&local_6c);
  if (local_6c != (int *)0x0) {
    (*(void (**)(void *))(*local_6c + 4))((void *)(local_6c));
  }
  local_f0 = 0;
  recovered_10005810(local_f4);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_e8,(undefined1 *)local_1c,2);
  local_50 = 0x23;
  local_68 = recovered_100057b0(8);
  *local_68 = (int)&PTR_recovered_1000c620_1000e274;
  local_50 = 0x24;
  recovered_10009590(param_1,0x12,&local_e8,&local_68);
  if (local_68 != (int *)0x0) {
    (*(void (**)(void *))(*local_68 + 4))((void *)(local_68));
  }
  local_e4 = 0;
  recovered_10005810(local_e8);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_dc,(undefined1 *)local_1c,2);
  local_50 = 0x25;
  local_64 = recovered_100057b0(8);
  *local_64 = (int)&PTR_recovered_1000c710_1000e298;
  local_50 = 0x26;
  recovered_10009590(param_1,0x13,&local_dc,&local_64);
  if (local_64 != (int *)0x0) {
    (*(void (**)(void *))(*local_64 + 4))((void *)(local_64));
  }
  local_d8 = 0;
  recovered_10005810(local_dc);
  local_13 = 0x102;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_d0,(undefined1 *)local_1c,2);
  local_50 = 0x27;
  local_60 = recovered_100057b0(8);
  *local_60 = (int)&PTR_recovered_1000c830_1000e2bc;
  local_50 = 0x28;
  recovered_10009590(param_1,0x14,&local_d0,&local_60);
  if (local_60 != (int *)0x0) {
    (*(void (**)(void *))(*local_60 + 4))((void *)(local_60));
  }
  local_cc = 0;
  recovered_10005810(local_d0);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_c4,(undefined1 *)local_1c,2);
  local_50 = 0x29;
  local_5c = recovered_100057b0(8);
  *local_5c = (int)&PTR_recovered_1000c930_1000e2e0;
  local_50 = 0x2a;
  recovered_10009590(param_1,0x15,&local_c4,&local_5c);
  if (local_5c != (int *)0x0) {
    (*(void (**)(void *))(*local_5c + 4))((void *)(local_5c));
  }
  local_c0 = 0;
  recovered_10005810(local_c4);
  local_13 = 0x202;
  local_1c = &local_13;
  local_18 = 2;
  local_50 = 0xffffffff;
  recovered_1000a230((int *)&local_b8,(undefined1 *)local_1c,2);
  local_50 = 0x2b;
  local_58 = recovered_100057b0(8);
  *local_58 = (int)&PTR_recovered_1000ca70_1000e304;
  local_50 = 0x2c;
  recovered_10009590(param_1,0x16,&local_b8,&local_58);
  if (local_58 != (int *)0x0) {
    (*(void (**)(void *))(*local_58 + 4))((void *)(local_58));
  }
  local_b4 = 0;
  recovered_10005810(local_b8);
  recovered_10005c30(&local_54);
  return;
}

#undef DAT_1000debc
#undef LAB_10007f6b
#undef PTR_recovered_10005750_1000f008
#undef PTR_recovered_1000a330_1000e008
#undef PTR_recovered_1000a5f0_1000e034
#undef PTR_recovered_1000ae20_1000e058
#undef PTR_recovered_1000af40_1000e07c
#undef PTR_recovered_1000b010_1000e0a0
#undef PTR_recovered_1000b1d0_1000e0c4
#undef PTR_recovered_1000b320_1000e0e8
#undef PTR_recovered_1000b500_1000e10c
#undef PTR_recovered_1000b650_1000e130
#undef PTR_recovered_1000ba70_1000e154
#undef PTR_recovered_1000bb30_1000e178
#undef PTR_recovered_1000bc00_1000e19c
#undef PTR_recovered_1000c010_1000e1c0
#undef PTR_recovered_1000c220_1000e1e4
#undef PTR_recovered_1000c300_1000e208
#undef PTR_recovered_1000c420_1000e22c
#undef PTR_recovered_1000c500_1000e250
#undef PTR_recovered_1000c620_1000e274
#undef PTR_recovered_1000c710_1000e298
#undef PTR_recovered_1000c830_1000e2bc
#undef PTR_recovered_1000c930_1000e2e0
#undef PTR_recovered_1000ca70_1000e304
#undef local_148
#undef local_144
#undef local_13c
#undef local_138
#undef local_130
#undef local_12c
#undef local_124
#undef local_120
#undef local_118
#undef local_114
#undef local_10c
#undef local_108
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_dc
#undef local_d8
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_b8
#undef local_b4
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
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_13
#undef local_11
#undef auStackY_24c
#undef local_1b4
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_19c
#undef local_198
#undef local_190
#undef local_18c
#undef local_184
#undef local_180
#undef local_178
#undef local_174
#undef local_16c
#undef local_168
#undef local_160
#undef local_15c
#undef local_154
#undef local_150

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008430
 */

void recovered_10008430(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  bool bVar2;

  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  piVar1 = (int *)*param_1;
  bVar2 = true;
  if (((piVar1 != (int *)0x0) && (piVar1[2] != 0)) && (0 < *piVar1)) {
    bVar2 = piVar1[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar2;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008480
 */

void recovered_10008480(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar3 = iVar4 * 0x10 + -4;
    do {
      iVar1 = *param_1;
      piVar2 = *(int **)(iVar1 + iVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      *(undefined4 *)(iVar1 + -8 + iVar3) = 0;
      recovered_10005810(*(void **)(iVar1 + -0xc + iVar3));
      iVar3 = iVar3 + -0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = 0;
  recovered_10005810((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084f0
 */

void recovered_100084f0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0x18 + -0x14;
    do {
      recovered_10005810(*(void **)(*param_1 + iVar1));
      iVar1 = iVar1 + -0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10005810((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008540
 */

void recovered_10008540(int *in_stack_00000004,int in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006f30(in_stack_00000004,in_stack_00000008);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008550
 */

void recovered_10008550(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  *param_1 = param_2;
  param_1[7] = 1;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0xfff;
  bVar1 = true;
  if (((param_2 != (int *)0x0) && (param_2[2] != 0)) && (0 < *param_2)) {
    bVar1 = param_2[1] < 1;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085a0
 */

undefined4 recovered_100085a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


#undef DAT_1000df18
#define DAT_1000df18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10d3U)))
#undef LAB_100090f1
#define LAB_100090f1 (*(uint8_t *)(0x100090f1U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_28 (*(byte * *)(frame + 328))
#define local_24 (*(byte * *)(frame + 332))
#define local_20 (*(byte * *)(frame + 336))
#define local_1c (*(byte * *)(frame + 340))
#define local_18 (*(byte * *)(frame + 344))
#define local_14 (*(undefined4 *)(frame + 348))
#define auStackY_15c (*(undefined1 (*)[128])(frame + 20))
#define local_b4 (*(undefined4 *)(frame + 188))
#define local_b0 (*(undefined4 *)(frame + 192))
#define local_9c (*(undefined * *)(frame + 212))
#define local_98 (*(undefined * *)(frame + 216))
#define local_94 (*(undefined1 * *)(frame + 220))
#define local_90 (*(undefined1 * *)(frame + 224))
#define local_8c (*(undefined1 * *)(frame + 228))
#define local_7c (*(byte * *)(frame + 244))
#define local_78 (*(byte * *)(frame + 248))
#define local_74 (*(undefined1 * *)(frame + 252))
#define local_70 (*(byte * *)(frame + 256))
#define local_6c (*(byte * *)(frame + 260))
#define local_68 (*(uint *)(frame + 264))
#define local_64 (*(uint *)(frame + 268))
#define local_60 (*(byte * *)(frame + 272))
#define local_5c (*(undefined1 *)(frame + 276))
#define local_58 (*(uint *)(frame + 280))
#define local_54 (*(undefined1 * *)(frame + 284))
#define local_50 (*(byte * *)(frame + 288))
#define local_4c (*(byte * *)(frame + 292))
#define local_48 (*(uint *)(frame + 296))
#define local_44 (*(byte * *)(frame + 300))
#define local_40 (*(byte * *)(frame + 304))
#define local_3c (*(byte * *)(frame + 308))
#define local_38 (*(int *)(frame + 312))
#define local_34 (*(undefined4 *)(frame + 316))
#define local_30 (*(byte * *)(frame + 320))
#define local_2c (*(byte * *)(frame + 324))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085b0
 */

byte recovered_100085b0(undefined4 *param_1)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  byte **ppbVar11;
  byte *pbVar12;
  byte bVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;

  local_94 = (undefined1 *)((int)(uintptr_t)(frame + 368) + -4);
  local_8c = auStackY_15c + 0x80;
  cVar1 = *(char *)(param_1 + 0xb);
  local_9c = PTR_recovered_10005750_1000f008;
  local_98 = &DAT_1000df18;
  local_90 = &LAB_100090f1;
  recovered_10005c10(&local_b4);
  if (cVar1 == '\0') {
    puVar5 = (undefined4 *)*param_1;
    if (puVar5 != (undefined4 *)0x0) {
      pbVar12 = (byte *)puVar5[2];
      if (pbVar12 != (byte *)0x0) {
        pbVar16 = (byte *)*puVar5;
        if (0 < (int)pbVar16) {
          local_28 = (byte *)param_1[7];
          local_1c = (byte *)param_1[8];
          local_20 = (byte *)puVar5[1];
          local_18 = pbVar12;
          local_14 = pbVar16;
          if ((local_28 <= pbVar16 &&
              ((0 < (int)local_1c && 0 < (int)local_28) && 0 < (int)local_20)) &&
              local_1c <= local_20) {
            pbVar4 = local_28 + (int)(local_1c + -1) * (int)pbVar16;
            uVar9 = (uint)pbVar12[(int)pbVar4 * 4 + -2] |
                    (uint)pbVar12[(int)pbVar4 * 4 + -3] << 8 |
                    (uint)pbVar12[(int)pbVar4 * 4 + -4] << 0x10;
            bVar13 = 0;
            if (uVar9 == 0) {
              bVar3 = *(byte *)(param_1 + 9);
              if (bVar3 < 4) {
                bVar3 = (byte)(0x30201 >> ((bVar3 & 3) << 3));
                *(byte *)(param_1 + 9) = bVar3;
              }
              local_78 = local_28;
              local_3c = local_1c;
              if (bVar3 < 4) {
                iVar15 = 1;
                ppbVar11 = &local_78;
                switch((uintptr_t)(bVar3)) {
                case 2:
                  iVar15 = -1;
                  break;
                case 3:
                  iVar15 = -1;
                case 1:
                  ppbVar11 = &local_3c;
                }
                *ppbVar11 = *ppbVar11 + iVar15;
              }
              param_1[7] = local_78;
              param_1[8] = local_3c;
              if ((pbVar16 < local_78 || ((int)local_3c < 1 || (int)local_78 < 1)) ||
                  local_20 < local_3c) {
                *(undefined1 *)(param_1 + 0xb) = 1;
LAB_1000888a:
                bVar13 = 1;
              }
LAB_1000888c:
              bVar13 = bVar13 ^ 1;
            }
            else {
              if (uVar9 == 0xffffff) {
                param_1[10] = 0xfff;
                local_78 = local_28;
                local_3c = local_1c;
                if (*(byte *)(param_1 + 9) < 4) {
                  iVar15 = 1;
                  ppbVar11 = &local_78;
                  switch((uintptr_t)(*(byte *)(param_1 + 9))) {
                  case 2:
                    iVar15 = -1;
                    break;
                  case 3:
                    iVar15 = -1;
                  case 1:
                    ppbVar11 = &local_3c;
                  }
                  *ppbVar11 = *ppbVar11 + iVar15;
                }
                param_1[7] = local_78;
                param_1[8] = local_3c;
                if ((pbVar16 < local_78 || ((int)local_3c < 1 || (int)local_78 < 1)) ||
                    local_20 < local_3c) {
                  *(undefined1 *)(param_1 + 0xb) = 1;
                }
                bVar13 = (pbVar16 >= local_78 && ((int)local_3c >= 1 && (int)local_78 >= 1)) &&
                         local_20 >= local_3c;
                goto LAB_100086e2;
              }
              uVar6 = param_1[10];
              if (*(char *)((int)param_1 + 0x2d) == '\x01') {
                local_18 = (byte *)(uVar9 - uVar6);
                if (uVar9 < uVar6) {
                  local_18 = (byte *)-(uVar9 - uVar6);
                }
                param_1[10] = uVar9;
                *(undefined1 *)((int)param_1 + 0x2d) = 0;
              }
              else {
                local_18 = (byte *)(uVar9 - uVar6);
                if (uVar9 < uVar6) {
                  local_18 = (byte *)-(uVar9 - uVar6);
                }
                param_1[10] = uVar9;
                *(undefined1 *)((int)param_1 + 0x2d) = 0;
                if (uVar6 == uVar9) {
                  local_78 = local_28;
                  local_3c = local_1c;
                  if (*(byte *)(param_1 + 9) < 4) {
                    iVar15 = 1;
                    ppbVar11 = &local_78;
                    switch((uintptr_t)(*(byte *)(param_1 + 9))) {
                    case 2:
                      iVar15 = -1;
                      break;
                    case 3:
                      iVar15 = -1;
                    case 1:
                      ppbVar11 = &local_3c;
                    }
                    *ppbVar11 = *ppbVar11 + iVar15;
                  }
                  param_1[7] = local_78;
                  param_1[8] = local_3c;
                  if ((pbVar16 < local_78 || ((int)local_3c < 1 || (int)local_78 < 1)) ||
                      local_20 < local_3c) {
                    *(undefined1 *)(param_1 + 0xb) = 1;
                    goto LAB_1000888a;
                  }
                  goto LAB_1000888c;
                }
              }
              local_50 = local_28;
              local_40 = local_1c;
              if (*(byte *)(param_1 + 9) < 4) {
                iVar15 = 1;
                ppbVar11 = &local_50;
                switch((uintptr_t)(*(byte *)(param_1 + 9))) {
                case 2:
                  iVar15 = -1;
                  break;
                case 3:
                  iVar15 = -1;
                case 1:
                  ppbVar11 = &local_40;
                }
                *ppbVar11 = *ppbVar11 + iVar15;
              }
              local_3c = (byte *)0x0;
              local_38 = 0;
              local_34 = 0;
              if ((local_18 < (byte *)param_1[5]) && (param_1[4] != 0)) {
                puVar5 = (undefined4 *)(param_1[4] + (int)local_18 * 0x10);
                local_b0 = 1;
                recovered_100091c0((int *)&local_3c,puVar5[1]);
                if (puVar5[1] != 0) {
                  pcVar14 = (char *)*puVar5;
                  pcVar10 = pcVar14 + puVar5[1];
                  do {
                    cVar1 = *pcVar14;
                    pbVar12 = (byte *)*param_1;
                    local_4c = (byte *)(uint)*(byte *)(param_1 + 9);
                    local_78 = local_50;
                    local_1c = local_40;
                    local_44 = local_40;
                    local_14 = local_50;
                    if ((pbVar12 == (byte *)0x0) || (iVar15 = *(int *)(pbVar12 + 8), iVar15 == 0)) {
                      pbVar7 = (byte *)0x0;
LAB_10009097:
                      param_1[7] = local_14;
                      param_1[8] = local_1c;
                      *(undefined1 *)(param_1 + 0xb) = 1;
                      local_78 = local_14;
                      local_44 = local_1c;
                      recovered_10005810(pbVar7);
                      goto LAB_100090af;
                    }
                    pbVar16 = (byte *)0x0;
                    local_2c = (byte *)0x0;
                    local_24 = (byte *)0x0;
                    pbVar4 = (byte *)0x0;
                    pbVar7 = (byte *)0x0;
                    local_20 = pbVar12;
                    while( true ) {
                      local_78 = local_14;
                      pbVar12 = *(byte **)local_20;
                      local_30 = pbVar7;
                      local_28 = pbVar4;
                      if ((int)pbVar12 < 1) goto LAB_10009097;
                      local_18 = pbVar16;
                      if ((((pbVar12 < local_14) || ((int)local_1c < 1)) || ((int)local_14 < 1)) ||
                         (((int)*(byte **)(local_20 + 4) < 1 ||
                          (*(byte **)(local_20 + 4) < local_1c)))) goto LAB_10009097;
                      pbVar12 = local_14 + (int)pbVar12 * (int)(local_1c + -1);
                      bVar13 = *(byte *)(iVar15 + -4 + (int)pbVar12 * 4);
                      local_58 = (uint)bVar13;
                      uVar6 = (uint)*(byte *)(iVar15 + -3 + (int)pbVar12 * 4);
                      uVar9 = (uint)*(byte *)(iVar15 + -2 + (int)pbVar12 * 4);
                      local_44 = local_1c;
                      if ((uVar6 << 8 | (uint)bVar13 << 0x10 | uVar9) == 0xffffff) break;
                      PF_PART1(local_28, 0) = (char)pbVar4;
                      if ((char)local_28 == '\0') {
                        pbVar7 = local_24;
                        if (bVar13 == 0xff) {
                          pbVar4 = (byte *)0x1;
                        }
                        else {
                          local_1c = (byte *)uVar6;
                          if (pbVar16 == local_2c) {
                            local_14 = (byte *)0x4;
                            if (pbVar16 != (byte *)0x0) {
                              local_14 = (byte *)((int)pbVar16 * 2);
                            }
                            if (local_14 <= pbVar16) goto LAB_10008aa3;
                            local_7c = local_24;
                            local_b0 = 2;
                            local_48 = uVar9;
                            pbVar7 = recovered_100057b0((int)local_14);
                            pbVar12 = local_18;
                            if (local_18 != (byte *)0x0) {
                              pbVar16 = (byte *)0x0;
                              do {
                                pbVar7[(int)pbVar16] = local_24[(int)pbVar16];
                                pbVar16 = pbVar16 + 1;
                              } while (local_18 != pbVar16);
                            }
                            recovered_10005810(local_24);
                            uVar9 = local_48;
                          }
                          else {
LAB_10008aa3:
                            local_14 = local_2c;
                            pbVar12 = pbVar16;
                          }
                          pbVar7[(int)pbVar12] = (byte)local_58;
                          pbVar16 = pbVar12 + 1;
                          if ((byte)local_1c != 0xff) {
                            if (pbVar16 == local_14) {
                              pbVar16 = (byte *)0x4;
                              if (local_14 != (byte *)0x0) {
                                pbVar16 = (byte *)((int)local_14 * 2);
                              }
                              if (pbVar16 <= local_14) goto LAB_10008b3c;
                              local_b0 = 3;
                              local_7c = pbVar7;
                              local_48 = uVar9;
                              local_28 = pbVar16;
                              local_18 = pbVar7;
                              pbVar7 = recovered_100057b0((int)pbVar16);
                              pbVar16 = local_14;
                              if (local_14 != (byte *)0x0) {
                                pbVar12 = (byte *)0x0;
                                do {
                                  pbVar7[(int)pbVar12] = local_18[(int)pbVar12];
                                  pbVar12 = pbVar12 + 1;
                                } while (local_14 != pbVar12);
                              }
                              recovered_10005810(local_18);
                              pbVar7[(int)pbVar16] = (byte)local_1c;
                              pbVar16 = pbVar16 + 1;
                              local_14 = local_28;
                              uVar9 = local_48;
                            }
                            else {
LAB_10008b3c:
                              (pbVar7 + 1)[(int)pbVar12] = (byte)local_1c;
                              pbVar16 = pbVar12 + 2;
                            }
                            if ((char)uVar9 != -1) {
                              local_48 = uVar9;
                              if (pbVar16 == local_14) {
                                local_2c = (byte *)0x4;
                                if (local_14 != (byte *)0x0) {
                                  local_2c = (byte *)((int)local_14 * 2);
                                }
                                if (local_2c <= local_14) goto LAB_10008bd4;
                                local_b0 = 4;
                                local_7c = pbVar7;
                                local_18 = pbVar7;
                                pbVar7 = recovered_100057b0((int)local_2c);
                                pbVar16 = local_14;
                                if (local_14 != (byte *)0x0) {
                                  pbVar12 = (byte *)0x0;
                                  do {
                                    pbVar7[(int)pbVar12] = local_18[(int)pbVar12];
                                    pbVar12 = pbVar12 + 1;
                                  } while (local_14 != pbVar12);
                                }
                                recovered_10005810(local_18);
                                pbVar12 = pbVar7 + (int)pbVar16;
                              }
                              else {
LAB_10008bd4:
                                pbVar12 = pbVar7 + (int)pbVar16;
                                local_2c = local_14;
                              }
                              *pbVar12 = (byte)local_48;
                              pbVar16 = pbVar16 + 1;
                              pbVar4 = (byte *)0x0;
                              local_24 = pbVar7;
                              goto LAB_10008bed;
                            }
                          }
                          local_2c = local_14;
                          pbVar4 = (byte *)CONCAT31((int3)((uint)local_14 >> 8),1);
                          local_24 = pbVar7;
                        }
                      }
                      else {
                        pbVar4 = (byte *)0x1;
                      }
LAB_10008bed:
                      iVar15 = 1;
                      switch((uintptr_t)(local_4c)) {
                      case 0x2:
                        iVar15 = -1;
                      case 0x0:
                        ppbVar11 = &local_78;
                        break;
                      case 0x3:
                        iVar15 = -1;
                      case 0x1:
                        ppbVar11 = &local_44;
                        break;
                      default:
                        goto switchD_10008bff_default;
                      }
                      *ppbVar11 = *ppbVar11 + iVar15;
switchD_10008bff_default:
                      local_14 = local_78;
                      local_1c = local_44;
                      iVar15 = *(int *)(local_20 + 8);
                      if (iVar15 == 0) goto LAB_10009097;
                    }
                    iVar15 = 1;
                    switch((uintptr_t)(local_4c)) {
                    case 0x0:
                      ppbVar11 = &local_78;
                      break;
                    case 0x2:
                      iVar15 = -1;
                      ppbVar11 = &local_78;
                      break;
                    case 0x3:
                      iVar15 = -1;
                    case 0x1:
                      ppbVar11 = &local_44;
                      break;
                    default:
                      goto switchD_10008c28_default;
                    }
                    *ppbVar11 = *ppbVar11 + iVar15;
                    local_14 = local_78;
                    local_1c = local_44;
switchD_10008c28_default:
                    PF_PART3(local_78, 1) = (undefined3)((uint)local_14 >> 8);
                    local_44 = local_1c;
                    if (cVar1 == '\x02') {
                      uVar9 = 0;
                      if (pbVar16 == (byte *)0x0) {
LAB_10008dd1:
                        local_60 = (byte *)(uVar9 + 1);
                      }
                      else {
                        uVar6 = 0;
                        pbVar12 = pbVar16;
                        do {
                          local_60 = (byte *)0xffffffff;
                          if (0xffffff < uVar6) goto LAB_10008eeb;
                          uVar2 = uVar9 >> 0x18;
                          uVar6 = uVar6 << 8 | uVar2;
                          uVar9 = uVar9 << 8 | (uint)*pbVar7;
                          pbVar7 = pbVar7 + 1;
                          pbVar12 = pbVar12 + -1;
                        } while (pbVar12 != (byte *)0x0);
                        if (uVar6 >> 1 == 0 &&
                            (uint)(0x7ffffffe < (uVar2 << 0x1f | uVar9 >> 1)) <= -(uVar6 >> 1))
                        goto LAB_10008dd1;
                      }
LAB_10008eeb:
                      local_5c = pbVar16 == (byte *)0x0;
                      local_64 = 0;
                      local_68 = 0;
                      local_6c = (byte *)0x0;
                      local_70 = (byte *)0x0;
                      local_74 = (undefined1 *)0x0;
                      local_78 = (byte *)CONCAT31(PF_PART3(local_78, 1),2);
                      local_b0 = 9;
                      local_18 = local_60;
                      recovered_1000a0d0((int *)&local_3c,(undefined1 *)&local_78);
                      if ((byte *)param_1[2] < local_18) {
                        local_b0 = 10;
                        recovered_10009780(param_1 + 1,(uint)local_18);
                      }
LAB_10008f63:
                      puVar8 = local_74;
LAB_10008f69:
                      recovered_10005810(puVar8);
                    }
                    else {
                      if (cVar1 == '\x01') {
                        local_68 = 0;
                        if (pbVar16 == (byte *)0x0) {
                          local_64 = 0;
                        }
                        else {
                          local_64 = 0;
                          pbVar12 = pbVar16;
                          do {
                            if (0xffffff < local_64) {
                              local_68 = 0xffffffff;
                              local_64 = 0xffffffff;
                              break;
                            }
                            local_64 = local_64 << 8 | local_68 >> 0x18;
                            local_68 = local_68 << 8 | (uint)*pbVar7;
                            pbVar7 = pbVar7 + 1;
                            pbVar12 = pbVar12 + -1;
                          } while (pbVar12 != (byte *)0x0);
                        }
                        if ((int)local_64 < 0) {
                          local_68 = 0xffffffff;
                          local_64 = 0x7fffffff;
                        }
                        local_5c = pbVar16 == (byte *)0x0;
                        local_60 = (byte *)0x0;
                        local_6c = (byte *)0x0;
                        local_70 = (byte *)0x0;
                        local_74 = (undefined1 *)0x0;
                        local_78 = (byte *)CONCAT31(PF_PART3(local_78, 1),1);
                        local_b0 = 8;
                        recovered_1000a0d0((int *)&local_3c,(undefined1 *)&local_78);
                        goto LAB_10008f63;
                      }
                      local_78 = local_14;
                      if (cVar1 == '\0') {
                        if (pbVar16 == (byte *)0x0) {
                          local_28 = (byte *)0x0;
                          puVar8 = (undefined1 *)0x0;
                        }
                        else {
                          local_b0 = 5;
                          puVar8 = recovered_100057b0((int)(pbVar16 + 1));
                          *puVar8 = 0;
                          recovered_10005810((void *)0x0);
                          pbVar16 = local_30 + (int)local_18;
                          pbVar12 = (byte *)0x0;
                          local_28 = local_18;
                          pbVar4 = local_30;
                          local_24 = pbVar16;
                          do {
                            bVar13 = *pbVar4;
                            local_54 = puVar8;
                            if (pbVar12 == local_28) {
                              pbVar7 = (byte *)0x10;
                              if (pbVar12 != (byte *)0x0) {
                                pbVar7 = (byte *)((int)pbVar12 * 2);
                              }
                              if (pbVar12 < pbVar7) {
                                local_58 = CONCAT31(PF_PART3(local_58, 1),bVar13);
                                local_b0 = 7;
                                local_4c = pbVar12;
                                local_28 = pbVar7;
                                local_20 = pbVar4;
                                puVar8 = recovered_100057b0((uint)pbVar7 | 1);
                                pbVar12 = local_4c;
                                *puVar8 = 0;
                                if (local_4c != (byte *)0x0) {
                                  pbVar16 = (byte *)0x0;
                                  do {
                                    puVar8[(int)pbVar16] = local_54[(int)pbVar16];
                                    pbVar16 = pbVar16 + 1;
                                  } while (local_4c != pbVar16);
                                }
                                puVar8[(int)local_4c] = 0;
                                recovered_10005810(local_54);
                                pbVar16 = local_24;
                                pbVar4 = local_20;
                                bVar13 = (byte)local_58;
                              }
                            }
                            puVar8[(int)pbVar12] = bVar13;
                            (puVar8 + 1)[(int)pbVar12] = 0;
                            pbVar12 = pbVar12 + 1;
                            pbVar4 = pbVar4 + 1;
                          } while (pbVar4 != pbVar16);
                        }
                        local_5c = 0;
                        local_60 = (byte *)0x0;
                        local_64 = 0;
                        local_68 = 0;
                        local_6c = (byte *)0x0;
                        local_70 = (byte *)0x0;
                        local_74 = (undefined1 *)0x0;
                        local_78 = (byte *)((uint)local_78 & 0xffffff00);
                        recovered_10005810((void *)0x0);
                        local_5c = local_18 == (byte *)0x0;
                        local_70 = local_18;
                        local_6c = local_28;
                        local_b0 = 6;
                        local_74 = puVar8;
                        recovered_1000a0d0((int *)&local_3c,(undefined1 *)&local_78);
                        recovered_10005810(local_74);
                        puVar8 = (undefined1 *)0x0;
                        goto LAB_10008f69;
                      }
                    }
                    local_50 = local_14;
                    local_40 = local_1c;
                    recovered_10005810(local_30);
                    pcVar14 = pcVar14 + 1;
                  } while (pcVar14 != pcVar10);
                }
                param_1[7] = local_50;
                param_1[8] = local_40;
                pbVar12 = local_50;
                pbVar16 = local_40;
                if ((int *)puVar5[3] != (int *)0x0) {
                  local_b0 = 0xb;
                  (**(code **)(*(int *)puVar5[3] + 8))();
                  pbVar12 = (byte *)param_1[7];
                  pbVar16 = (byte *)param_1[8];
                }
              }
              else {
                param_1[7] = local_50;
                param_1[8] = local_40;
                pbVar12 = local_50;
                pbVar16 = local_40;
              }
              puVar5 = (undefined4 *)*param_1;
              if (((puVar5 == (undefined4 *)0x0) || (puVar5[2] == 0)) ||
                 (((int)*puVar5 < 1 ||
                  (((byte *)puVar5[1] < pbVar16 || (byte *)*puVar5 < pbVar12) ||
                   (((int)pbVar16 < 1 || (int)pbVar12 < 1) || (int)puVar5[1] < 1))))) {
                *(undefined1 *)(param_1 + 0xb) = 1;
LAB_100090af:
                bVar13 = 0;
              }
              else {
                bVar13 = *(byte *)(param_1 + 0xb) ^ 1;
              }
              if (local_38 != 0) {
                iVar17 = local_38 * 0x20 + -0x1c;
                iVar15 = local_38;
                do {
                  recovered_10005810(*(void **)(local_3c + iVar17));
                  iVar17 = iVar17 + -0x20;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              local_38 = 0;
              recovered_10005810(local_3c);
            }
            goto LAB_100086e2;
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  bVar13 = 0;
LAB_100086e2:
  recovered_10005c30(&local_b4);
  return bVar13 & 1;
}

#undef DAT_1000df18
#undef LAB_100090f1
#undef PTR_recovered_10005750_1000f008
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_15c
#undef local_b4
#undef local_b0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091a0
 */

void recovered_100091a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x24) & 3) << 3));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091c0
 */

void recovered_100091c0(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;

  if ((uint)param_1[2] < param_2) {
    pvVar3 = recovered_100057b0(param_2 << 5);
    if (param_1[1] != 0) {
      uVar5 = 0;
      iVar4 = 0x10;
      do {
        iVar1 = *param_1;
        *(undefined1 *)((int)pvVar3 + iVar4 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -8) = *(undefined4 *)(iVar1 + -8 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + -4) = *(undefined4 *)(iVar1 + -4 + iVar4);
        *(undefined4 *)(iVar1 + -0xc + iVar4) = 0;
        *(undefined4 *)(iVar1 + -8 + iVar4) = 0;
        *(undefined4 *)(iVar1 + -4 + iVar4) = 0;
        *(undefined1 *)((int)pvVar3 + iVar4 + 0xc) = *(undefined1 *)(iVar1 + 0xc + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + 8) = *(undefined4 *)(iVar1 + 8 + iVar4);
        uVar2 = *(undefined4 *)(iVar1 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4 + 4) = *(undefined4 *)(iVar1 + 4 + iVar4);
        *(undefined4 *)((int)pvVar3 + iVar4) = uVar2;
        recovered_10005810((void *)0x0);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar5 < (uint)param_1[1]);
    }
    recovered_10005810((void *)*param_1);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092a0
 */

int recovered_100092a0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_10009780((int *)(param_1 + 4),uVar1);
  }
  return *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092e0
 */

void recovered_100092e0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0x20 + -0x1c;
    do {
      recovered_10005810(*(void **)(*param_1 + iVar1));
      iVar1 = iVar1 + -0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10005810((void *)*param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009330
 */

void recovered_10009330(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_100085b0(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009360
 */

undefined1 recovered_10009360(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009370
 */

void recovered_10009370(int param_1,uint param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_10009440((int *)(param_1 + 0x10),param_2 + 1);
  }
  piVar8 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  if (piVar8 != param_3) {
    iVar6 = param_3[1];
    if (iVar6 == 0) {
      pvVar4 = (void *)0x0;
      iVar5 = 0;
    }
    else {
      pvVar4 = recovered_100057b0(iVar6);
      recovered_10005810((void *)0x0);
      iVar5 = param_3[1];
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar1 = *param_3;
        iVar7 = 0;
        do {
          *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)(iVar1 + iVar7);
          iVar7 = iVar7 + 1;
        } while (iVar5 != iVar7);
      }
    }
    pvVar2 = (void *)*piVar8;
    *piVar8 = (int)pvVar4;
    piVar8[1] = iVar5;
    piVar8[2] = iVar6;
    recovered_10005810(pvVar2);
    piVar3 = (int *)param_3[3];
    iVar6 = 0;
    if (piVar3 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    piVar3 = (int *)piVar8[3];
    piVar8[3] = iVar6;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009440
 */

void recovered_10009440(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  uVar4 = param_1[1];
  if (param_2 < uVar4) {
    iVar3 = uVar4 * 0x10 + -4;
    do {
      iVar5 = *param_1;
      piVar1 = *(int **)(iVar5 + iVar3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      *(undefined4 *)(iVar5 + -8 + iVar3) = 0;
      recovered_10005810(*(void **)(iVar5 + -0xc + iVar3));
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + -0x10;
    } while (param_2 < uVar4);
    param_1[1] = param_2;
  }
  else if (uVar4 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar2 = recovered_100057b0(param_2 << 4);
      if (param_1[1] != 0) {
        uVar4 = 0;
        iVar3 = 0xc;
        do {
          iVar5 = *param_1;
          *(undefined4 *)((int)pvVar2 + iVar3 + -0xc) = *(undefined4 *)(iVar5 + -0xc + iVar3);
          *(undefined4 *)((int)pvVar2 + iVar3 + -8) = *(undefined4 *)(iVar5 + -8 + iVar3);
          *(undefined4 *)((int)pvVar2 + iVar3 + -4) = *(undefined4 *)(iVar5 + -4 + iVar3);
          *(undefined4 *)(iVar5 + -0xc + iVar3) = 0;
          *(undefined4 *)(iVar5 + -4 + iVar3) = 0;
          *(undefined4 *)((int)pvVar2 + iVar3) = *(undefined4 *)(iVar5 + iVar3);
          *(undefined4 *)(iVar5 + iVar3) = 0;
          *(undefined4 *)(iVar5 + -8 + iVar3) = 0;
          recovered_10005810((void *)0x0);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (uVar4 < (uint)param_1[1]);
      }
      recovered_10005810((void *)*param_1);
      *param_1 = (int)pvVar2;
      param_1[2] = param_2;
      uVar4 = param_1[1];
    }
    while (uVar4 < param_2) {
      iVar3 = *param_1;
      iVar5 = uVar4 * 0x10;
      *(undefined4 *)(iVar3 + 0xc + iVar5) = 0;
      *(undefined4 *)(iVar3 + 8 + iVar5) = 0;
      *(undefined4 *)(iVar3 + 4 + iVar5) = 0;
      *(undefined4 *)(iVar3 + iVar5) = 0;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    }
  }
  return;
}


#undef DAT_1000df34
#define DAT_1000df34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10efU)))
#undef LAB_1000968f
#define LAB_1000968f (*(uint8_t *)(0x1000968fU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_54 (*(undefined4 *)(frame + 172))
#define local_50 (*(undefined4 *)(frame + 176))
#define local_3c (*(undefined * *)(frame + 196))
#define local_38 (*(undefined * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_30 (*(undefined1 * *)(frame + 208))
#define local_2c (*(undefined1 * *)(frame + 212))
#define local_20 (*(int * *)(frame + 224))
#define local_1c (*(int * *)(frame + 228))
#define local_18 (*(int * *)(frame + 232))
#define local_14 (*(int * *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009590
 */

void recovered_10009590(int *param_1,uint param_2,int **param_3,int **param_4)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};


  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_3c = PTR_recovered_10005750_1000f008;
  local_38 = &DAT_1000df34;
  local_30 = &LAB_1000968f;
  recovered_10005c10(&local_54);
  if (&local_20 != param_3) {
    recovered_10005810((void *)0x0);
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = param_3[2];
    *param_3 = (int *)0x0;
    param_3[1] = (int *)0x0;
    param_3[2] = (int *)0x0;
  }
  if ((int **)&local_14 != param_4) {
    if (local_14 != (int *)0x0) {
      (*(void (**)(void *))(*local_14 + 4))((void *)(local_14));
    }
    local_14 = *param_4;
    *param_4 = (int *)0x0;
  }
  local_50 = 1;
  recovered_10009370((int)param_1,param_2,(int *)&local_20);
  if (local_14 != (int *)0x0) {
    (*(void (**)(void *))(*local_14 + 4))((void *)(local_14));
  }
  local_1c = (int *)0x0;
  recovered_10005810(local_20);
  recovered_10005c30(&local_54);
  return;
}

#undef DAT_1000df34
#undef LAB_1000968f
#undef PTR_recovered_10005750_1000f008
#undef auStackY_ec
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096e0
 */

void recovered_100096e0(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  int iVar3;

  if (param_2 < *(uint *)(param_1 + 0x14)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = param_2 * 0x10;
    *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
    recovered_10005810(*(void **)(iVar1 + iVar3));
    *(undefined4 *)(iVar1 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
    *(undefined4 *)(iVar1 + 8 + iVar3) = 0;
    piVar2 = *(int **)(iVar1 + 0xc + iVar3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(iVar1 + iVar3 + 0xc) = 0;
    recovered_10005810((void *)0x0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009760
 */

int recovered_10009760(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009770
 */

int recovered_10009770(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009780
 */

void recovered_10009780(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;

  uVar4 = param_1[1];
  if (param_2 < uVar4) {
    iVar5 = uVar4 * 0x18 + -0x14;
    do {
      recovered_10005810(*(void **)(*param_1 + iVar5));
      uVar4 = uVar4 - 1;
      iVar5 = iVar5 + -0x18;
    } while (param_2 < uVar4);
    param_1[1] = param_2;
  }
  else if (uVar4 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar3 = recovered_100057b0(param_2 * 0x18);
      if (param_1[1] != 0) {
        uVar4 = 0;
        iVar5 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar5 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -8) = *(undefined4 *)(iVar1 + -8 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + -4) = *(undefined4 *)(iVar1 + -4 + iVar5);
          *(undefined4 *)(iVar1 + -0xc + iVar5) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar5) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar5) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5 + 4) = *(undefined4 *)(iVar1 + 4 + iVar5);
          *(undefined4 *)((int)pvVar3 + iVar5) = uVar2;
          recovered_10005810((void *)0x0);
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 0x18;
        } while (uVar4 < (uint)param_1[1]);
      }
      recovered_10005810((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = param_2;
      uVar4 = param_1[1];
    }
    while (uVar4 < param_2) {
      iVar5 = *param_1;
      *(undefined4 *)(iVar5 + 0x14 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x10 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 0xc + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 8 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + 4 + uVar4 * 0x18) = 0;
      *(undefined4 *)(iVar5 + uVar4 * 0x18) = 0;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098d0
 */

int recovered_100098d0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = param_2 + (uint)(param_2 == 0);
  iVar1 = 0;
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + -0x18 + uVar2 * 0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009900
 */

void recovered_10009900(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000cbb0((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009930
 */

void recovered_10009930(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000cd10((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000df3c
#define DAT_1000df3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10f7U)))
#undef LAB_10009a3b
#define LAB_10009a3b (*(uint8_t *)(0x10009a3bU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_28 (*(undefined1 (*)[4])(frame + 216))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(undefined4 *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009960
 */

undefined4 recovered_10009960(int param_1,int *param_2)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 *puVar2;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (void *)0x0;
  local_28[0] = 1;
  local_44 = PTR_recovered_10005750_1000f008;
  local_40 = &DAT_1000df3c;
  local_38 = &LAB_10009a3b;
  recovered_10005c10(&local_5c);
  if (&local_24 != (void **)param_2) {
    puVar2 = &DAT_1000dd52;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_2;
    }
    local_58 = 1;
    recovered_10009f80((int *)&local_24,(int)puVar2,param_2[1]);
  }
  local_14 = 0;
  local_18 = 0;
  local_58 = 2;
  recovered_1000cd10((int *)(param_1 + 4),local_28);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10005810(local_24);
  recovered_10005c30(&local_5c);
  return uVar1;
}

#undef DAT_1000dd52
#undef DAT_1000df3c
#undef LAB_10009a3b
#undef PTR_recovered_10005750_1000f008
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec

#undef DAT_1000df44
#define DAT_1000df44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10ffU)))
#undef LAB_10009b55
#define LAB_10009b55 (*(uint8_t *)(0x10009b55U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_28 (*(undefined1 (*)[4])(frame + 216))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(undefined4 *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a70
 */

undefined4 recovered_10009a70(int param_1,undefined4 *param_2)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = (void *)0x0;
  local_28[0] = 1;
  local_44 = PTR_recovered_10005750_1000f008;
  local_40 = &DAT_1000df44;
  local_38 = &LAB_10009b55;
  recovered_10005c10(&local_5c);
  if (&local_24 != (void **)param_2) {
    recovered_10005810((void *)0x0);
    local_24 = (void *)*param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  local_14 = 0;
  local_18 = 0;
  local_58 = 1;
  recovered_1000cd10((int *)(param_1 + 4),local_28);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10005810(local_24);
  recovered_10005c30(&local_5c);
  return uVar1;
}

#undef DAT_1000df44
#undef LAB_10009b55
#undef PTR_recovered_10005750_1000f008
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec

#undef DAT_1000df4c
#define DAT_1000df4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1107U)))
#undef LAB_10009c2a
#define LAB_10009c2a (*(uint8_t *)(0x10009c2aU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_28 (*(undefined1 (*)[4])(frame + 216))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(undefined4 *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b90
 */

undefined4 recovered_10009b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  local_1c = 0;
  local_20 = 0;
  local_24 = (void *)0x0;
  local_28[0] = 2;
  local_14 = param_3;
  local_18 = param_2;
  local_44 = PTR_recovered_10005750_1000f008;
  local_40 = &DAT_1000df4c;
  local_38 = &LAB_10009c2a;
  local_58 = 1;
  recovered_10005c10(&local_5c);
  recovered_1000cd10((int *)(param_1 + 4),local_28);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  recovered_10005810(local_24);
  recovered_10005c30(&local_5c);
  return uVar1;
}

#undef DAT_1000df4c
#undef LAB_10009c2a
#undef PTR_recovered_10005750_1000f008
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec
#undef local_5c
#undef local_58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c60
 */

void recovered_10009c60(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_10009780((int *)(param_1 + 4),uVar1);
  }
  recovered_1000cbb0((int *)(param_1 + 4),
                     (undefined1 *)(*(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cb0
 */

void recovered_10009cb0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;

  uVar5 = param_2 + (uint)(param_2 == 0);
  *(uint *)(param_1 + 0x30) = uVar5;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < uVar5) {
    recovered_10009780((int *)(param_1 + 4),uVar5);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if (uVar4 < uVar5) {
    recovered_10009780((int *)(param_1 + 4),uVar5);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + uVar5 * 0x18;
  *(undefined1 *)(iVar2 + -0x18 + uVar5 * 0x18) = 0;
  *(undefined4 *)(iVar2 + -0x10 + uVar5 * 0x18) = 0;
  puVar3 = *(undefined1 **)(iVar2 + -0x14 + uVar5 * 0x18);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d30
 */

void recovered_10009d30(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_2 + (uint)(param_2 == 0);
  *(uint *)(param_1 + 0x30) = uVar1;
  if (*(uint *)(param_1 + 8) < uVar1) {
    recovered_10009780((int *)(param_1 + 4),uVar1);
    return;
  }
  return;
}


#undef DAT_1000df54
#define DAT_1000df54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x110fU)))
#undef LAB_10009e76
#define LAB_10009e76 (*(uint8_t *)(0x10009e76U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_64 (*(undefined4 *)(frame + 156))
#define local_60 (*(undefined4 *)(frame + 160))
#define local_4c (*(undefined * *)(frame + 180))
#define local_48 (*(undefined * *)(frame + 184))
#define local_44 (*(undefined1 * *)(frame + 188))
#define local_40 (*(undefined1 * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_30 (*(undefined1 (*)[4])(frame + 208))
#define local_2c (*(void * *)(frame + 212))
#define local_28 (*(undefined4 *)(frame + 216))
#define local_24 (*(undefined4 *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(uint *)(frame + 232))
#define local_14 (*(int * *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d70
 */

int recovered_10009d70(int param_1)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  local_44 = local_30 + 0x2c;
  local_3c = auStackY_ec + 0x80;
  uVar1 = *(uint *)(param_1 + 0x30);
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000df54;
  local_40 = &LAB_10009e76;
  recovered_10005c10(&local_64);
  if (uVar1 == 0) {
    local_30[0] = 0;
    local_14 = (int *)(param_1 + 4);
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_60 = 1;
    recovered_1000cd10(local_14,local_30);
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x30) = iVar2;
    uVar1 = iVar2 + (uint)(iVar2 == 0);
    if (iVar2 == 0) {
      local_60 = 2;
      local_18 = uVar1;
      recovered_10009780(local_14,uVar1);
      uVar1 = local_18;
    }
    iVar2 = uVar1 * 0x18 + *local_14;
    recovered_10005810(local_2c);
  }
  else {
    if (*(uint *)(param_1 + 8) < uVar1) {
      local_60 = 0xffffffff;
      recovered_10009780((int *)(param_1 + 4),uVar1);
    }
    iVar2 = uVar1 * 0x18 + *(int *)(param_1 + 4);
  }
  recovered_10005c30(&local_64);
  return iVar2 + -0x18;
}

#undef DAT_1000df54
#undef LAB_10009e76
#undef PTR_recovered_10005750_1000f008
#undef auStackY_ec
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009eb0
 */

int recovered_10009eb0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = 0;
  if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 8))) {
    iVar2 = *(int *)(param_1 + 4) + -0x18 + uVar1 * 0x18;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ed0
 */

int recovered_10009ed0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ee0
 */

int recovered_10009ee0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ef0
 */

undefined4 recovered_10009ef0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f00
 */

undefined4 recovered_10009f00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f10
 */

undefined4 recovered_10009f10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f20
 */

undefined1 recovered_10009f20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f30
 */

void recovered_10009f30(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f50
 */

undefined4 recovered_10009f50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f60
 */

void recovered_10009f60(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f80
 */

void recovered_10009f80(int *param_1,int param_2,uint param_3)

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
        recovered_10009f80((int *)&local_1c,(int)(puVar3 + uVar4),uVar6);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_1c;
        iVar2 = param_1[1];
        param_1[1] = local_18;
        iVar5 = param_1[2];
        param_1[2] = local_14;
        local_1c = pvVar1;
        local_18 = iVar2;
        local_14 = iVar5;
        recovered_10005810(pvVar1);
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
      puVar3 = recovered_100057b0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100057b0(uVar6 + 1);
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
      recovered_10005810(pvVar1);
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
 * Address: 0x1000a0d0
 */

int recovered_1000a0d0(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5 * 2;
    }
    if (uVar5 < uVar4) {
      pvVar2 = recovered_100057b0(uVar4 << 5);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 0x10;
        do {
          iVar3 = *param_1;
          *(undefined1 *)((int)pvVar2 + iVar6 + -0x10) = *(undefined1 *)(iVar3 + -0x10 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -0xc) = *(undefined4 *)(iVar3 + -0xc + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -8) = *(undefined4 *)(iVar3 + -8 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -4) = *(undefined4 *)(iVar3 + -4 + iVar6);
          *(undefined4 *)(iVar3 + -0xc + iVar6) = 0;
          *(undefined4 *)(iVar3 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar3 + -4 + iVar6) = 0;
          *(undefined1 *)((int)pvVar2 + iVar6 + 0xc) = *(undefined1 *)(iVar3 + 0xc + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + 8) = *(undefined4 *)(iVar3 + 8 + iVar6);
          uVar1 = *(undefined4 *)(iVar3 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + 4) = *(undefined4 *)(iVar3 + 4 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6) = uVar1;
          recovered_10005810((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x20;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10005810((void *)*param_1);
      *param_1 = (int)pvVar2;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  iVar3 = uVar5 * 0x20;
  *(undefined1 *)(iVar6 + iVar3) = *param_2;
  *(undefined4 *)(iVar6 + 4 + iVar3) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar6 + 8 + iVar3) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0xc + iVar3) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(iVar6 + 0x1c + iVar3) = param_2[0x1c];
  *(undefined4 *)(iVar6 + 0x18 + iVar3) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x14 + iVar3) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar6 + 0x10 + iVar3) = uVar1;
  iVar6 = param_1[1];
  param_1[1] = iVar6 + 1;
  return *param_1 + -0x20 + (iVar6 + 1) * 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a230
 */

void recovered_1000a230(int *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pvVar4 = recovered_100057b0(param_3);
    pvVar2 = (void *)*param_1;
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)((int)pvVar2 + iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    recovered_10005810(pvVar2);
    *param_1 = (int)pvVar4;
    param_1[2] = param_3;
    puVar1 = param_2 + param_3;
    uVar5 = param_1[1];
    do {
      if (uVar5 == param_3) {
        uVar6 = 4;
        if (param_3 != 0) {
          uVar6 = param_3 * 2;
        }
        uVar5 = param_3;
        if (param_3 < uVar6) {
          pvVar4 = recovered_100057b0(uVar6);
          pvVar2 = (void *)*param_1;
          iVar3 = param_1[1];
          if (iVar3 != 0) {
            iVar7 = 0;
            do {
              *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)((int)pvVar2 + iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar3 != iVar7);
          }
          recovered_10005810(pvVar2);
          *param_1 = (int)pvVar4;
          param_1[2] = uVar6;
          uVar5 = param_1[1];
          param_3 = uVar6;
        }
      }
      *(undefined1 *)((int)pvVar4 + uVar5) = *param_2;
      uVar5 = uVar5 + 1;
      param_1[1] = uVar5;
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a330
 */

void recovered_1000a330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a340
 */

void recovered_1000a340(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000df5c
#define DAT_1000df5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1117U)))
#undef LAB_1000a593
#define LAB_1000a593 (*(uint8_t *)(0x1000a593U))
#undef PTR_DAT_1000f004
#define PTR_DAT_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bfU)))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_11 (*(undefined1 *)(frame + 255))
#define local_64 (*(undefined4 *)(frame + 172))
#define local_60 (*(undefined4 *)(frame + 176))
#define local_4c (*(undefined * *)(frame + 196))
#define local_48 (*(undefined * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_40 (*(undefined1 * *)(frame + 208))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_3c (*(undefined1 * *)(frame + 212))
#define local_2c (*(undefined1 * *)(frame + 228))
#define local_28 (*(undefined1 * *)(frame + 232))
#define local_20 (*(undefined1 * *)(frame + 240))
#define local_1c (*(uint *)(frame + 244))
#define local_18 (*(undefined1 * *)(frame + 248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a350
 */

void recovered_1000a350(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;

  local_44 = auStackY_fc + 0xf8;
  local_3c = auStackY_fc + 0x80;
  iVar7 = param_3[1];
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000df5c;
  local_40 = &LAB_1000a593;
  recovered_10005c10(&local_64);
  puVar2 = PTR_DAT_1000f004;
  if (iVar7 != 0) {
    iVar7 = *param_3;
    if (*(char *)(iVar7 + 0x1c) == '\x01') {
      if ((*(int *)(param_2 + 0x30) - 1U < *(uint *)(param_2 + 8)) &&
         (pcVar3 = (char *)(*(int *)(param_2 + 0x30) * 0x18 + *(int *)(param_2 + 4) + -0x18),
         pcVar3 != (char *)0x0)) {
        local_60 = 0xffffffff;
        recovered_10006c80((int *)&local_2c,pcVar3);
        local_20 = &DAT_1000dd52;
        if (local_2c != (undefined1 *)0x0) {
          local_20 = local_2c;
        }
        puVar1 = *(undefined1 **)(PTR_DAT_1000f004 + 0x14);
        local_18 = local_28;
        uVar6 = (int)puVar1 - (int)local_28;
        if ((local_28 <= puVar1 && uVar6 != 0) && 0 < (int)puVar1) {
          puVar4 = (undefined4 *)PTR_DAT_1000f004;
          do {
            puVar5 = puVar4;
            if ((undefined4 *)puVar4[1] != (undefined4 *)0x0) {
              puVar5 = (undefined4 *)puVar4[1];
            }
            if ((uint *)*puVar5 != (uint *)0x0) {
              local_11 = *(undefined1 *)(puVar4 + 6);
              local_60 = 1;
              local_1c = uVar6;
              recovered_10004ea0(&local_11,1,1,(uint *)*puVar5);
              uVar6 = local_1c;
              puVar4 = (undefined4 *)PTR_DAT_1000f004;
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)PTR_DAT_1000f004;
        *(undefined4 *)(PTR_DAT_1000f004 + 0x14) = 0;
        puVar4 = *(undefined4 **)((int)puVar5 + 4);
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = puVar4;
        }
        if (local_18 != (undefined1 *)0x0 && (uint *)*puVar5 != (uint *)0x0) {
          local_60 = 2;
          recovered_10004ea0(local_20,1,(int)local_18,(uint *)*puVar5);
        }
        recovered_10005810(local_2c);
      }
    }
    else {
      local_1c = *(uint *)(iVar7 + 8);
      local_18 = &DAT_1000dd52;
      if (*(undefined1 **)(iVar7 + 4) != (undefined1 *)0x0) {
        local_18 = *(undefined1 **)(iVar7 + 4);
      }
      puVar4 = *(undefined4 **)(PTR_DAT_1000f004 + 4);
      uVar6 = *(uint *)(PTR_DAT_1000f004 + 0x14);
      iVar7 = uVar6 - local_1c;
      if ((local_1c <= uVar6 && iVar7 != 0) && 0 < (int)uVar6) {
        do {
          puVar5 = (undefined4 *)puVar2;
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = puVar4;
          }
          if ((uint *)*puVar5 != (uint *)0x0) {
            local_2c = (undefined1 *)CONCAT31(PF_PART3(local_2c, 1),puVar2[0x18]);
            local_60 = 0xffffffff;
            recovered_10004ea0(&local_2c,1,1,(uint *)*puVar5);
            puVar4 = *(undefined4 **)(puVar2 + 4);
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      puVar5 = (undefined4 *)PTR_DAT_1000f004;
      *(undefined4 *)(PTR_DAT_1000f004 + 0x14) = 0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = puVar4;
      }
      if ((local_1c != 0) && ((uint *)*puVar5 != (uint *)0x0)) {
        local_60 = 0xffffffff;
        recovered_10004ea0(local_18,1,local_1c,(uint *)*puVar5);
      }
    }
  }
  recovered_10005c30(&local_64);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000df5c
#undef LAB_1000a593
#undef PTR_DAT_1000f004
#undef PTR_recovered_10005750_1000f008
#undef local_11
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef auStackY_fc
#undef local_3c
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c
#undef local_18

#undef PTR_recovered_1000a330_1000e008
#define PTR_recovered_1000a330_1000e008 (*(void * *)(((uintptr_t)pf_module_state + 0x11c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5d0
 */

void recovered_1000a5d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000a330_1000e008;
  return;
}

#undef PTR_recovered_1000a330_1000e008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5f0
 */

void recovered_1000a5f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a600
 */

void recovered_1000a600(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef PTR_DAT_1000f004
#define PTR_DAT_1000f004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a610
 */

void recovered_1000a610(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *variable;
  longlong lVar1;

  if (param_3[1] == 0) {
    return;
  }
  if (*(char *)(*param_3 + 0x1c) == '\x01') {
    if (*(uint *)(param_2 + 8) <= *(int *)(param_2 + 0x30) - 1U) {
      return;
    }
    variable = (void *)(*(int *)(param_2 + 0x30) * 0x18 + *(int *)(param_2 + 4) + -0x18);
    if (variable == (void *)0x0) {
      return;
    }
    lVar1 = recovered_10006e20(variable);
  }
  else {
    lVar1 = *(longlong *)(*param_3 + 0x10);
  }
  recovered_1000a6a0((int *)PTR_DAT_1000f004,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20));
  return;
}

#undef PTR_DAT_1000f004

#undef PTR_recovered_1000a5f0_1000e034
#define PTR_recovered_1000a5f0_1000e034 (*(void * *)(((uintptr_t)pf_module_state + 0x11efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a680
 */

void recovered_1000a680(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000a5f0_1000e034;
  return;
}

#undef PTR_recovered_1000a5f0_1000e034

#undef DAT_1000df64
#define DAT_1000df64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x111fU)))
#undef LAB_1000a962
#define LAB_1000a962 (*(uint8_t *)(0x1000a962U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_b8 (*(undefined1 (*)[31])(frame + 168))
#define local_98 (*(undefined4 *)(frame + 200))
#define local_94 (*(uint *)(frame + 204))
#define local_90 (*(undefined4 *)(frame + 208))
#define local_54 (*(undefined4 *)(frame + 268))
#define local_50 (*(undefined4 *)(frame + 272))
#define local_3c (*(undefined * *)(frame + 292))
#define local_38 (*(undefined * *)(frame + 296))
#define local_34 (*(undefined1 * *)(frame + 300))
#define local_30 (*(undefined1 * *)(frame + 304))
#define auStackY_14c (*(undefined1 (*)[128])(frame + 20))
#define local_2c (*(undefined1 * *)(frame + 308))
#define local_20 (*(undefined1 * *)(frame + 320))
#define bStack_99 (*(byte *)(frame + 199))
#define local_1c (*(uint *)(frame + 324))
#define local_18 (*(undefined1 * *)(frame + 328))
#define local_14 (*(undefined4 *)(frame + 332))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6a0
 */

int * recovered_1000a6a0(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  local_34 = (undefined1 *)((int)(uintptr_t)(frame + 352) + -4);
  local_2c = auStackY_14c + 0x80;
  iVar1 = param_1[3];
  local_3c = PTR_recovered_10005750_1000f008;
  local_38 = &DAT_1000df64;
  local_30 = &LAB_1000a962;
  recovered_10005c10(&local_54);
  if (iVar1 == 10) {
    uVar3 = (int)param_3 >> 0x1f;
    uVar8 = ((param_3 ^ uVar3) - uVar3) - (uint)((param_2 ^ uVar3) < uVar3);
    uVar12 = 0;
    uVar3 = (param_2 ^ uVar3) - uVar3;
    do {
      uVar10 = uVar12;
      uVar6 = uVar8 << 0x1f | uVar3 >> 1;
      uVar9 = uVar8 >> 1;
      uVar11 = (uVar6 + uVar9 + (uint)CARRY4(uVar6,uVar9)) % 5;
      uVar7 = uVar6 - uVar11;
      lVar2 = (ulonglong)uVar7 * 0xcccccccd;
      local_1c = uVar10;
      local_14 = uVar8;
      local_b8[uVar10 + 0x20] = (char)uVar3 + (char)lVar2 * -10 | 0x30;
      uVar12 = uVar10 + 1;
      bVar13 = 9 < uVar3;
      uVar8 = (uVar9 - (uVar6 < uVar11)) * -0x33333333 +
              uVar7 * -0x33333334 + (int)((ulonglong)lVar2 >> 0x20);
      uVar3 = (uint)lVar2;
    } while (local_14 != 0 || -local_14 < (uint)bVar13);
    if ((int)param_3 < 0) {
      local_b8[uVar10 + 0x21] = 0x2d;
      uVar12 = uVar10 + 2;
    }
    if (uVar12 < 0x21) {
      if (uVar12 != 0) {
        puVar4 = local_b8;
        uVar8 = uVar12;
        do {
          *puVar4 = local_b8[uVar8 + 0x1f];
          puVar4 = puVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      local_98 = (undefined1 *)0x0;
      local_94 = 0;
      local_90 = 0;
      local_50 = 0xffffffff;
      recovered_10009f80(&local_98,(int)local_b8,uVar12);
      local_14 = local_94;
      local_18 = local_98;
    }
    else {
      local_14 = 0;
      local_18 = (undefined1 *)0x0;
    }
    local_98 = (undefined1 *)0x0;
    local_94 = 0;
    local_90 = 0;
    recovered_10005810((void *)0x0);
    if (local_18 == (undefined1 *)0x0) {
      local_20 = (undefined1 *)0x0;
      local_50 = 1;
      local_18 = recovered_100057b0(1);
      *local_18 = 0;
    }
    uVar8 = param_1[5];
    uVar12 = uVar8 - local_14;
    if ((local_14 <= uVar8 && uVar12 != 0) && 0 < (int)uVar8) {
      do {
        piVar5 = param_1;
        if ((int *)param_1[1] != (int *)0x0) {
          piVar5 = (int *)param_1[1];
        }
        if ((uint *)*piVar5 != (uint *)0x0) {
          local_98 = (undefined1 *)CONCAT31(PF_PART3(local_98, 1),(char)param_1[6]);
          local_50 = 2;
          local_1c = uVar12;
          recovered_10004ea0(&local_98,1,1,(uint *)*piVar5);
          uVar12 = local_1c;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    param_1[5] = 0;
    piVar5 = param_1;
    if ((int *)param_1[1] != (int *)0x0) {
      piVar5 = (int *)param_1[1];
    }
    if ((local_14 != 0) && ((uint *)*piVar5 != (uint *)0x0)) {
      local_20 = local_18;
      local_50 = 3;
      recovered_10004ea0(local_18,1,local_14,(uint *)*piVar5);
    }
    recovered_10005810(local_18);
    recovered_10005c30(&local_54);
  }
  else {
    local_50 = 0xffffffff;
    param_1 = recovered_1000a9b0(param_1,param_2,param_3);
    recovered_10005c30(&local_54);
  }
  return param_1;
}

#undef DAT_1000df64
#undef LAB_1000a962
#undef PTR_recovered_10005750_1000f008
#undef local_b8
#undef local_98
#undef local_94
#undef local_90
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef auStackY_14c
#undef local_2c
#undef local_20
#undef bStack_99
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000df70
#define DAT_1000df70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x112bU)))
#undef LAB_1000adb2
#define LAB_1000adb2 (*(uint8_t *)(0x1000adb2U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#undef str_1000dd5a
#define str_1000dd5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf15U)))
#undef str_1000dd6b
#define str_1000dd6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf26U)))
#define abStack_aa (*(byte (*)[2])(frame + 198))
#define local_c8 (*(byte (*)[30])(frame + 168))
#define local_a8 (*(undefined1 * *)(frame + 200))
#define local_a4 (*(uint *)(frame + 204))
#define local_a0 (*(undefined4 *)(frame + 208))
#define local_64 (*(undefined4 *)(frame + 268))
#define local_60 (*(undefined4 *)(frame + 272))
#define local_4c (*(undefined * *)(frame + 292))
#define local_48 (*(undefined * *)(frame + 296))
#define local_44 (*(undefined1 * *)(frame + 300))
#define local_40 (*(undefined1 * *)(frame + 304))
#define local_3c (*(undefined1 * *)(frame + 308))
#define local_2c (*(uint *)(frame + 324))
#define local_28 (*(undefined1 * *)(frame + 328))
#define local_24 (*(undefined1 * *)(frame + 332))
#define local_20 (*(undefined1 * *)(frame + 336))
#define local_1c (*(uint *)(frame + 340))
#define local_18 (*(uint *)(frame + 344))
#define local_14 (*(char * *)(frame + 348))
#define auStackY_15c (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9b0
 */

int * recovered_1000a9b0(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;

  local_44 = (undefined1 *)((int)(uintptr_t)(frame + 368) + -4);
  local_3c = auStackY_15c + 0x80;
  iVar2 = param_1[3];
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000df70;
  local_40 = &LAB_1000adb2;
  recovered_10005c10(&local_64);
  if (iVar2 == 10) {
    uVar14 = 0;
    do {
      uVar12 = uVar14;
      local_14 = (char *)param_2;
      local_18 = uVar12;
      uVar6 = param_3 << 0x1f | param_2 >> 1;
      uVar13 = param_3 >> 1;
      uVar11 = (uVar6 + uVar13 + (uint)CARRY4(uVar6,uVar13)) % 5;
      uVar7 = uVar6 - uVar11;
      lVar1 = (ulonglong)uVar7 * 0xcccccccd;
      local_1c = (uint)lVar1;
      abStack_aa[uVar12 + 2] = (char)param_2 + (char)lVar1 * -10 | 0x30;
      uVar14 = uVar12 + 1;
      bVar15 = 9 < param_2;
      bVar16 = param_3 != 0;
      uVar10 = -param_3;
      param_2 = local_1c;
      param_3 = (uVar13 - (uVar6 < uVar11)) * -0x33333333 +
                uVar7 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
    } while (bVar16 || uVar10 < bVar15);
    if (uVar14 < 0x21) {
      if (uVar14 != 0) {
        iVar2 = uVar12 + 2;
        pbVar8 = local_c8;
        uVar10 = uVar14;
        do {
          *pbVar8 = abStack_aa[iVar2];
          pbVar8 = pbVar8 + 1;
          iVar2 = iVar2 + -1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_a8 = (undefined1 *)0x0;
      local_a4 = 0;
      local_a0 = 0;
      local_60 = 1;
      recovered_10009f80((int *)&local_a8,(int)local_c8,uVar14);
      local_14 = (char *)local_a4;
      puVar3 = local_a8;
    }
    else {
      local_14 = (char *)0x0;
      puVar3 = (undefined1 *)0x0;
    }
    local_a8 = (undefined1 *)0x0;
    local_a4 = 0;
    local_a0 = 0;
    recovered_10005810((void *)0x0);
    recovered_10005810((void *)0x0);
    recovered_10005810((void *)0x0);
  }
  else {
    local_14 = str_1000dd5a;
    if ((char)param_1[4] == '\0') {
      local_14 = str_1000dd6b;
    }
    local_18 = (uint)(iVar2 != 8) * 8 + 7;
    sVar5 = (iVar2 != 8) + 3;
    uVar14 = 0;
    do {
      abStack_aa[uVar14 + 2] = local_14[param_2 & local_18];
      uVar14 = uVar14 + 1;
      param_2 = param_2 >> sVar5 | param_3 << 0x20 - sVar5;
      param_3 = param_3 >> sVar5;
    } while (param_2 != 0 || param_3 != 0);
    if (uVar14 == 0) {
      uVar10 = 0;
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = (undefined1 *)0x0;
      uVar6 = 0;
      local_14 = (char *)0;
      do {
        local_20 = puVar3;
        bVar9 = abStack_aa[uVar14 + 1];
        if (local_14 == (char *)uVar6) {
          uVar10 = 0x10;
          if (local_14 != (char *)0x0) {
            uVar10 = (int)local_14 * 2;
          }
          if (uVar10 <= local_14) goto LAB_1000ac20;
          local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar9);
          local_60 = 2;
          local_2c = uVar10;
          local_18 = uVar14;
          puVar3 = recovered_100057b0(uVar10 | 1);
          uVar14 = (uint)local_14;
          *puVar3 = 0;
          if (local_14 != (char *)0x0) {
            uVar10 = 0;
            do {
              puVar3[uVar10] = local_20[uVar10];
              uVar10 = uVar10 + 1;
            } while (local_14 != (char *)uVar10);
          }
          puVar3[(int)local_14] = 0;
          recovered_10005810(local_20);
          uVar6 = local_2c;
          local_14 = (char *)uVar14;
LAB_1000ab95:
          uVar14 = local_18;
          bVar9 = (byte)local_1c;
        }
        else {
LAB_1000ac20:
          if (puVar3 == (undefined1 *)0x0) {
            local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar9);
            local_60 = 3;
            local_18 = uVar14;
            puVar3 = recovered_100057b0(1);
            *puVar3 = 0;
            uVar6 = 0;
            goto LAB_1000ab95;
          }
        }
        uVar14 = uVar14 - 1;
        uVar10 = (int)local_14 + 1;
        puVar3[(int)local_14] = bVar9;
        puVar3[(int)local_14 + 1] = 0;
        local_14 = (char *)uVar10;
      } while (uVar14 != 0);
    }
    local_14 = (char *)uVar10;
  }
  if (puVar3 == (undefined1 *)0x0) {
    local_28 = (undefined1 *)0x0;
    local_60 = 4;
    puVar3 = recovered_100057b0(1);
    *puVar3 = 0;
  }
  uVar14 = param_1[5];
  local_24 = puVar3;
  if ((0 < (int)uVar14) && (uVar10 = uVar14 - (int)local_14, local_14 <= uVar14 && uVar10 != 0)) {
    do {
      piVar4 = param_1;
      if ((int *)param_1[1] != (int *)0x0) {
        piVar4 = (int *)param_1[1];
      }
      if ((uint *)*piVar4 != (uint *)0x0) {
        local_a8 = (undefined1 *)CONCAT31(PF_PART3(local_a8, 1),(char)param_1[6]);
        local_60 = 5;
        local_18 = uVar10;
        recovered_10004ea0(&local_a8,1,1,(uint *)*piVar4);
        uVar10 = local_18;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  param_1[5] = 0;
  piVar4 = param_1;
  if ((int *)param_1[1] != (int *)0x0) {
    piVar4 = (int *)param_1[1];
  }
  if ((local_14 != (char *)0x0) && ((uint *)*piVar4 != (uint *)0x0)) {
    local_28 = local_24;
    local_60 = 6;
    recovered_10004ea0(local_24,1,(int)local_14,(uint *)*piVar4);
  }
  recovered_10005810(local_24);
  recovered_10005c30(&local_64);
  return param_1;
}

#undef DAT_1000df70
#undef LAB_1000adb2
#undef PTR_recovered_10005750_1000f008
#undef str_1000dd5a
#undef str_1000dd6b
#undef abStack_aa
#undef local_c8
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_15c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae20
 */

void recovered_1000ae20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae30
 */

void recovered_1000ae30(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae40
 */

void recovered_1000ae40(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar4;
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 < uVar4) {
    recovered_10009780((int *)(param_2 + 4),uVar4);
    uVar3 = *(uint *)(param_2 + 8);
    uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_10009780((int *)(param_2 + 4),uVar4);
  }
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + uVar4 * 0x18;
  recovered_10006c80((int *)&local_1c,(char *)(iVar2 + -0x18 + uVar4 * 0x18));
  *(undefined1 *)(iVar2 + -0x18 + uVar4 * 0x18) = 1;
  if ((void **)(iVar2 + -0x14 + uVar4 * 0x18) != &local_1c) {
    recovered_10005810(*(void **)(iVar1 + -0x14));
    *(void **)(iVar1 + -0x14) = local_1c;
    *(undefined4 *)(iVar1 + -0x10) = local_18;
    *(undefined4 *)(iVar1 + -0xc) = local_14;
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10005810(local_1c);
  return;
}

#undef local_1c
#undef local_18
#undef local_14

#undef PTR_recovered_1000ae20_1000e058
#define PTR_recovered_1000ae20_1000e058 (*(void * *)(((uintptr_t)pf_module_state + 0x1213U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af20
 */

void recovered_1000af20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000ae20_1000e058;
  return;
}

#undef PTR_recovered_1000ae20_1000e058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af40
 */

void recovered_1000af40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af50
 */

void recovered_1000af50(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af60
 */

void recovered_1000af60(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;

  uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar4;
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 < uVar4) {
    recovered_10009780((int *)(param_2 + 4),uVar4);
    uVar3 = *(uint *)(param_2 + 8);
    uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar3 < uVar4) {
    recovered_10009780((int *)(param_2 + 4),uVar4);
  }
  iVar1 = *(int *)(param_2 + 4);
  lVar5 = recovered_10006e20((void *)(iVar1 + -0x18 + uVar4 * 0x18));
  *(undefined1 *)(iVar1 + -0x18 + uVar4 * 0x18) = 2;
  *(int *)(iVar1 + -4 + uVar4 * 0x18) = (int)((ulonglong)lVar5 >> 0x20);
  *(int *)(iVar1 + -8 + uVar4 * 0x18) = (int)lVar5;
  *(undefined4 *)(iVar1 + -0x10 + uVar4 * 0x18) = 0;
  puVar2 = *(undefined1 **)(iVar1 + -0x14 + uVar4 * 0x18);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return;
}


#undef PTR_recovered_1000af40_1000e07c
#define PTR_recovered_1000af40_1000e07c (*(void * *)(((uintptr_t)pf_module_state + 0x1237U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aff0
 */

void recovered_1000aff0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000af40_1000e07c;
  return;
}

#undef PTR_recovered_1000af40_1000e07c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b010
 */

void recovered_1000b010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b020
 */

void recovered_1000b020(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000df80
#define DAT_1000df80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x113bU)))
#undef LAB_1000b175
#define LAB_1000b175 (*(uint8_t *)(0x1000b175U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_28 (*(undefined1 (*)[4])(frame + 216))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(undefined4 *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b030
 */

void recovered_1000b030(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  iVar1 = *(int *)(param_2 + 0x30);
  local_44 = PTR_recovered_10005750_1000f008;
  local_40 = &DAT_1000df80;
  local_38 = &LAB_1000b175;
  recovered_10005c10(&local_5c);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)*param_3;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = (void *)0x0;
    local_28[0] = 1;
    if (local_28 != puVar2) {
      puVar3 = &DAT_1000dd52;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
      }
      local_58 = 1;
      recovered_10009f80((int *)&local_24,(int)puVar3,*(uint *)(puVar2 + 8));
    }
    local_14 = 0;
    local_18 = 0;
    local_58 = 2;
    recovered_1000cd10((int *)(param_2 + 4),local_28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 8);
    recovered_10005810(local_24);
  }
  else {
    local_58 = 0xffffffff;
    puVar3 = (undefined1 *)recovered_10009d70(param_2);
    puVar2 = (undefined1 *)*param_3;
    *puVar3 = 1;
    if (puVar3 != puVar2) {
      puVar4 = &DAT_1000dd52;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(puVar2 + 4);
      }
      local_58 = 0xffffffff;
      recovered_10009f80((int *)(puVar3 + 4),(int)puVar4,*(uint *)(puVar2 + 8));
    }
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
  }
  recovered_10005c30(&local_5c);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000df80
#undef LAB_1000b175
#undef PTR_recovered_10005750_1000f008
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec

#undef PTR_recovered_1000b010_1000e0a0
#define PTR_recovered_1000b010_1000e0a0 (*(void * *)(((uintptr_t)pf_module_state + 0x125bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1b0
 */

void recovered_1000b1b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000b010_1000e0a0;
  return;
}

#undef PTR_recovered_1000b010_1000e0a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1d0
 */

void recovered_1000b1d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1e0
 */

void recovered_1000b1e0(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000df88
#define DAT_1000df88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1143U)))
#undef LAB_1000b2c7
#define LAB_1000b2c7 (*(uint8_t *)(0x1000b2c7U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_28 (*(undefined1 (*)[4])(frame + 216))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(undefined4 *)(frame + 224))
#define local_1c (*(undefined4 *)(frame + 228))
#define local_18 (*(undefined4 *)(frame + 232))
#define local_14 (*(undefined4 *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1f0
 */

void recovered_1000b1f0(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;

  local_3c = local_28 + 0x24;
  local_34 = auStackY_ec + 0x80;
  iVar1 = *(int *)(param_2 + 0x30);
  local_44 = PTR_recovered_10005750_1000f008;
  local_40 = &DAT_1000df88;
  local_38 = &LAB_1000b2c7;
  recovered_10005c10(&local_5c);
  if (iVar1 == 0) {
    local_18 = *(undefined4 *)(*param_3 + 0x10);
    local_14 = *(undefined4 *)(*param_3 + 0x14);
    local_1c = 0;
    local_20 = 0;
    local_24 = (void *)0x0;
    local_28[0] = 2;
    local_58 = 1;
    recovered_1000cd10((int *)(param_2 + 4),local_28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 8);
    recovered_10005810(local_24);
  }
  else {
    local_58 = 0xffffffff;
    puVar4 = (undefined1 *)recovered_10009d70(param_2);
    uVar2 = *(undefined4 *)(*param_3 + 0x10);
    uVar3 = *(undefined4 *)(*param_3 + 0x14);
    *puVar4 = 2;
    *(undefined4 *)(puVar4 + 0x10) = uVar2;
    *(undefined4 *)(puVar4 + 0x14) = uVar3;
    *(undefined4 *)(puVar4 + 8) = 0;
    if (*(undefined1 **)(puVar4 + 4) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar4 + 4) = 0;
    }
  }
  recovered_10005c30(&local_5c);
  return;
}

#undef DAT_1000df88
#undef LAB_1000b2c7
#undef PTR_recovered_10005750_1000f008
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec

#undef PTR_recovered_1000b1d0_1000e0c4
#define PTR_recovered_1000b1d0_1000e0c4 (*(void * *)(((uintptr_t)pf_module_state + 0x127fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b300
 */

void recovered_1000b300(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000b1d0_1000e0c4;
  return;
}

#undef PTR_recovered_1000b1d0_1000e0c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b320
 */

void recovered_1000b320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b330
 */

void recovered_1000b330(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000df90
#define DAT_1000df90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114bU)))
#undef LAB_1000b4a6
#define LAB_1000b4a6 (*(uint8_t *)(0x1000b4a6U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_64 (*(undefined4 *)(frame + 172))
#define local_60 (*(undefined4 *)(frame + 176))
#define local_4c (*(undefined * *)(frame + 196))
#define local_48 (*(undefined * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_40 (*(undefined1 * *)(frame + 208))
#define local_3c (*(undefined1 * *)(frame + 212))
#define local_2c (*(undefined1 (*)[4])(frame + 228))
#define local_28 (*(undefined1 * *)(frame + 232))
#define local_24 (*(uint *)(frame + 236))
#define local_20 (*(undefined4 *)(frame + 240))
#define local_1c (*(int *)(frame + 244))
#define local_18 (*(int *)(frame + 248))
#define local_14 (*(undefined4 *)(frame + 252))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b340
 */

void recovered_1000b340(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;

  local_44 = auStackY_fc + 0xf8;
  local_3c = auStackY_fc + 0x80;
  uVar6 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  local_14 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(param_2 + 8);
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000df90;
  local_40 = &LAB_1000b4a6;
  recovered_10005c10(&local_64);
  if (uVar1 < uVar6) {
    local_60 = 0xffffffff;
    recovered_10009780(local_14,uVar6);
  }
  iVar2 = *(int *)(param_2 + 4);
  local_2c[0] = *(undefined1 *)(iVar2 + -0x18 + uVar6 * 0x18);
  local_28 = (undefined1 *)0x0;
  local_24 = 0;
  local_20 = 0;
  puVar4 = *(undefined1 **)(iVar2 + -0x14 + uVar6 * 0x18);
  puVar5 = &DAT_1000dd52;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  local_60 = 0xffffffff;
  recovered_10009f80((int *)&local_28,(int)puVar5,*(uint *)(iVar2 + -0x10 + uVar6 * 0x18));
  local_1c = *(int *)(iVar2 + -8 + uVar6 * 0x18);
  local_18 = *(int *)(iVar2 + -4 + uVar6 * 0x18);
  if (*(int *)(param_2 + 0x30) == 0) {
    local_60 = 1;
    recovered_1000cbb0(local_14,local_2c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 8);
  }
  else {
    local_60 = 2;
    piVar3 = (int *)recovered_10009d70(param_2);
    *(undefined1 *)piVar3 = local_2c[0];
    if (piVar3 != (int *)local_2c) {
      puVar4 = &DAT_1000dd52;
      if (local_28 != (undefined1 *)0x0) {
        puVar4 = local_28;
      }
      local_60 = 3;
      local_14 = piVar3;
      recovered_10009f80(piVar3 + 1,(int)puVar4,local_24);
      piVar3 = local_14;
    }
    piVar3[5] = local_18;
    piVar3[4] = local_1c;
  }
  recovered_10005810(local_28);
  recovered_10005c30(&local_64);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000df90
#undef LAB_1000b4a6
#undef PTR_recovered_10005750_1000f008
#undef auStackY_fc
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef PTR_recovered_1000b320_1000e0e8
#define PTR_recovered_1000b320_1000e0e8 (*(void * *)(((uintptr_t)pf_module_state + 0x12a3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b4e0
 */

void recovered_1000b4e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000b320_1000e0e8;
  return;
}

#undef PTR_recovered_1000b320_1000e0e8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b500
 */

void recovered_1000b500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b510
 */

void recovered_1000b510(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b520
 */

void recovered_1000b520(undefined4 param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar7;
  uint uVar6;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;

  iVar1 = *param_3;
  uVar5 = *(uint *)(iVar1 + 0x10);
  iVar9 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar9) != SBORROW4(-1 - iVar9,(uint)(0x80000000 < uVar5))) ==
      (int)((-1 - iVar9) - (uint)(0x80000000 < uVar5)) < 0) {
    iVar9 = -1;
    uVar5 = 0x80000000;
  }
  if ((int)(uint)(uVar5 < 0x7fffffff) <= iVar9) {
    uVar5 = 0x7fffffff;
  }
  uVar10 = *(uint *)(iVar1 + 0x30);
  iVar9 = *(int *)(iVar1 + 0x34);
  if ((SBORROW4(-1,iVar9) != SBORROW4(-1 - iVar9,(uint)(0x80000000 < uVar10))) ==
      (int)((-1 - iVar9) - (uint)(0x80000000 < uVar10)) < 0) {
    iVar9 = -1;
    uVar10 = 0x80000000;
  }
  puVar2 = (uint *)*param_2;
  if ((int)(uint)(uVar10 < 0x7fffffff) <= iVar9) {
    uVar10 = 0x7fffffff;
  }
  if (((puVar2 != (uint *)0x0) && (uVar3 = puVar2[2], uVar3 != 0)) &&
     (uVar4 = *puVar2, 0 < (int)uVar4)) {
    if (((uVar10 <= puVar2[1]) && (uVar5 <= uVar4)) &&
       ((0 < (int)uVar10 && ((0 < (int)uVar5 && (0 < (int)puVar2[1])))))) {
      uVar6 = *(uint *)(iVar1 + 0x50);
      iVar9 = uVar5 + uVar4 * (uVar10 - 1);
      iVar1 = iVar9 * 4 + -4;
      iVar9 = iVar9 * 4 + -3;
      uVar7 = (undefined1)(uVar6 >> 8);
      uVar8 = (undefined1)(uVar6 >> 0x10);
      if ((uVar6 & 0xff000000) == 0) {
        *(undefined1 *)(uVar3 + iVar1) = uVar8;
        *(undefined1 *)(puVar2[2] + iVar9) = uVar7;
        *(char *)(puVar2[2] + 2 + iVar1) = (char)uVar6;
        uVar6 = 0xff;
      }
      else {
        *(char *)(uVar3 + iVar1) = (char)(uVar6 >> 0x18);
        *(undefined1 *)(puVar2[2] + iVar9) = uVar8;
        *(undefined1 *)(puVar2[2] + 2 + iVar1) = uVar7;
      }
      *(char *)(puVar2[2] + 3 + iVar1) = (char)uVar6;
    }
  }
  return;
}


#undef PTR_recovered_1000b500_1000e10c
#define PTR_recovered_1000b500_1000e10c (*(void * *)(((uintptr_t)pf_module_state + 0x12c7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b630
 */

void recovered_1000b630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000b500_1000e10c;
  return;
}

#undef PTR_recovered_1000b500_1000e10c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b650
 */

void recovered_1000b650(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b660
 */

void recovered_1000b660(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000df9c
#define DAT_1000df9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1157U)))
#undef LAB_1000ba07
#define LAB_1000ba07 (*(uint8_t *)(0x1000ba07U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_28 (*(byte * *)(frame + 216))
#define local_24 (*(uint *)(frame + 220))
#define local_20 (*(byte * *)(frame + 224))
#define local_1c (*(uint *)(frame + 228))
#define local_18 (*(uint *)(frame + 232))
#define local_14 (*(char * *)(frame + 236))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_64 (*(undefined4 *)(frame + 156))
#define local_60 (*(undefined4 *)(frame + 160))
#define local_4c (*(undefined * *)(frame + 180))
#define local_48 (*(undefined * *)(frame + 184))
#define local_44 (*(undefined1 * *)(frame + 188))
#define local_40 (*(undefined1 * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_30 (*(uint *)(frame + 208))
#define local_2c (*(char * *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b670
 */

void recovered_1000b670(undefined4 param_1,int *param_2,uint *param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar9;
  byte *pbVar8;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  local_44 = auStackY_ec + 0xe8;
  local_3c = auStackY_ec + 0x80;
  uVar13 = *param_3;
  uVar5 = *(uint *)(uVar13 + 0x48);
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000df9c;
  local_40 = &LAB_1000ba07;
  recovered_10005c10(&local_64);
  if (uVar5 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    local_60 = 1;
    local_1c = uVar13;
    local_18 = uVar5;
    local_14 = recovered_100057b0(uVar5 + 1);
    *local_14 = '\0';
    recovered_10005810((void *)0x0);
    pbVar10 = &DAT_1000dd52;
    if (*(byte **)(local_1c + 0x44) != (byte *)0x0) {
      pbVar10 = *(byte **)(local_1c + 0x44);
    }
    if (*(int *)(local_1c + 0x48) != 0) {
      pbVar8 = pbVar10 + *(int *)(local_1c + 0x48);
      uVar13 = 0;
      uVar5 = local_18;
      local_28 = pbVar8;
      do {
        local_1c = (uint)*pbVar10;
        if ((0x1a < local_1c - 9) || ((0x4800013U >> (local_1c - 9 & 0x1f) & 1) == 0)) {
          if (uVar13 == uVar5) {
            uVar12 = 0x10;
            if (uVar5 != 0) {
              uVar12 = uVar5 * 2;
            }
            if (uVar12 <= uVar5) goto LAB_1000b7c1;
            local_2c = local_14;
            local_60 = 2;
            local_30 = uVar12;
            local_24 = uVar13;
            local_20 = pbVar10;
            local_18 = uVar5;
            pcVar3 = recovered_100057b0(uVar12 | 1);
            *pcVar3 = '\0';
            if (local_18 != 0) {
              uVar13 = 0;
              do {
                pcVar3[uVar13] = local_14[uVar13];
                uVar13 = uVar13 + 1;
              } while (local_18 != uVar13);
            }
            pcVar3[local_18] = '\0';
            recovered_10005810(local_14);
            uVar5 = local_30;
LAB_1000b713:
            local_14 = pcVar3;
            pbVar8 = local_28;
            pbVar10 = local_20;
            uVar13 = local_24;
          }
          else {
LAB_1000b7c1:
            if (local_14 == (char *)0x0) {
              local_2c = (char *)0x0;
              local_60 = 3;
              local_24 = uVar13;
              local_20 = pbVar10;
              pcVar3 = recovered_100057b0(1);
              *pcVar3 = '\0';
              uVar5 = 0;
              goto LAB_1000b713;
            }
          }
          local_14[uVar13] = (char)local_1c;
          local_14[uVar13 + 1] = '\0';
          uVar13 = uVar13 + 1;
        }
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar8);
      if (1 < uVar13) {
        if ((*local_14 == '0') && ((byte)(local_14[1] | 0x20U) == 0x78)) {
          if (uVar13 != 2) {
            iVar4 = uVar13 - 2;
            pcVar3 = local_14 + 2;
            do {
              pcVar3[-2] = *pcVar3;
              pcVar3 = pcVar3 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_14[uVar13 - 2] = '\0';
          uVar13 = uVar13 - 2;
        }
        if ((uVar13 == 6) || (pcVar3 = local_14, uVar13 == 8)) {
          uVar5 = 0;
          uVar12 = 0;
          do {
            cVar6 = local_14[uVar5];
            bVar7 = cVar6 - 0x30;
            if (9 < bVar7) {
              if ((byte)(cVar6 + 0x9fU) < 6) {
                bVar7 = cVar6 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar6 + 0xbfU)) goto LAB_1000b89e;
                bVar7 = cVar6 - 0x37;
              }
            }
            uVar11 = uVar12 << 4;
            uVar12 = bVar7 | uVar11;
            uVar5 = uVar5 + 1;
          } while (uVar13 != uVar5);
          local_1c = uVar11;
          recovered_10005810(local_14);
          uVar13 = *param_3;
          uVar5 = *(uint *)(uVar13 + 0x10);
          iVar4 = *(int *)(uVar13 + 0x14);
          if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar5))) ==
              (int)((-1 - iVar4) - (uint)(0x80000000 < uVar5)) < 0) {
            iVar4 = -1;
            uVar5 = 0x80000000;
          }
          if ((int)(uint)(uVar5 < 0x7fffffff) <= iVar4) {
            uVar5 = 0x7fffffff;
          }
          iVar4 = *(int *)(uVar13 + 0x34);
          uVar13 = *(uint *)(uVar13 + 0x30);
          if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar13))) ==
              (int)((-1 - iVar4) - (uint)(0x80000000 < uVar13)) < 0) {
            iVar4 = -1;
            uVar13 = 0x80000000;
          }
          puVar2 = (uint *)*param_2;
          if ((int)(uint)(uVar13 < 0x7fffffff) <= iVar4) {
            uVar13 = 0x7fffffff;
          }
          if (puVar2 != (uint *)0x0) {
            pcVar3 = (char *)puVar2[2];
            if (pcVar3 != (char *)0x0) {
              uVar11 = *puVar2;
              if (0 < (int)uVar11) {
                local_18 = puVar2[1];
                local_14 = pcVar3;
                if ((((uVar13 <= local_18) && (uVar5 <= uVar11)) && (0 < (int)uVar13)) &&
                   ((0 < (int)uVar5 && (0 < (int)local_18)))) {
                  iVar4 = uVar5 + uVar11 * (uVar13 - 1);
                  pcVar1 = (char *)(iVar4 * 4 + -4);
                  local_18 = iVar4 * 4 - 3;
                  cVar9 = (char)(local_1c >> 8);
                  cVar6 = (char)(local_1c >> 0x10);
                  if (local_1c < 0x1000000) {
                    pcVar3[(int)pcVar1] = cVar6;
                    *(char *)(puVar2[2] + local_18) = cVar9;
                    pcVar1[puVar2[2] + 2] = (char)uVar12;
                    uVar12 = 0xff;
                  }
                  else {
                    pcVar3[(int)pcVar1] = (char)(local_1c >> 0x18);
                    *(char *)(puVar2[2] + local_18) = cVar6;
                    pcVar1[puVar2[2] + 2] = cVar9;
                    local_14 = pcVar1;
                  }
                  pcVar1[puVar2[2] + 3] = (char)uVar12;
                }
              }
            }
          }
          goto LAB_1000b8ad;
        }
        goto LAB_1000b8a5;
      }
    }
LAB_1000b89e:
    pcVar3 = local_14;
  }
LAB_1000b8a5:
  recovered_10005810(pcVar3);
LAB_1000b8ad:
  recovered_10005c30(&local_64);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000df9c
#undef LAB_1000ba07
#undef PTR_recovered_10005750_1000f008
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_30
#undef local_2c

#undef PTR_recovered_1000b650_1000e130
#define PTR_recovered_1000b650_1000e130 (*(void * *)(((uintptr_t)pf_module_state + 0x12ebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba50
 */

void recovered_1000ba50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000b650_1000e130;
  return;
}

#undef PTR_recovered_1000b650_1000e130

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba70
 */

void recovered_1000ba70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba80
 */

void recovered_1000ba80(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba90
 */

void recovered_1000ba90(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar1 = *param_3;
  uVar2 = *(uint *)(iVar1 + 0x10);
  iVar4 = *(int *)(iVar1 + 0x14);
  if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar2))) ==
      (int)((-1 - iVar4) - (uint)(0x80000000 < uVar2)) < 0) {
    iVar4 = -1;
    uVar2 = 0x80000000;
  }
  if ((int)(uint)(uVar2 < 0x7fffffff) <= iVar4) {
    uVar2 = 0x7fffffff;
  }
  iVar4 = *(int *)(iVar1 + 0x34);
  uVar3 = *(uint *)(iVar1 + 0x30);
  if ((SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar3))) ==
      (int)((-1 - iVar4) - (uint)(0x80000000 < uVar3)) < 0) {
    iVar4 = -1;
    uVar3 = 0x80000000;
  }
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar4) {
    uVar3 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x1c) = uVar2;
  *(uint *)(param_2 + 0x20) = uVar3;
  return;
}


#undef PTR_recovered_1000ba70_1000e154
#define PTR_recovered_1000ba70_1000e154 (*(void * *)(((uintptr_t)pf_module_state + 0x130fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb10
 */

void recovered_1000bb10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000ba70_1000e154;
  return;
}

#undef PTR_recovered_1000ba70_1000e154

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb30
 */

void recovered_1000bb30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb40
 */

void recovered_1000bb40(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb50
 */

void recovered_1000bb50(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;

  uVar6 = *(uint *)(*param_3 + 0x10);
  piVar1 = (int *)(*param_3 + 0x14);
  iVar2 = -*piVar1;
  if ((SBORROW4(0,*piVar1) != SBORROW4(iVar2,(uint)(1 < uVar6))) ==
      (int)(iVar2 - (uint)(1 < uVar6)) < 0) {
    uVar6 = 1;
  }
  uVar6 = uVar6 + (uVar6 == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    uVar5 = *(uint *)(param_2 + 8);
  }
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = iVar3 + uVar6 * 0x18;
  *(undefined1 *)(iVar3 + -0x18 + uVar6 * 0x18) = 0;
  *(undefined4 *)(iVar3 + -0x10 + uVar6 * 0x18) = 0;
  puVar4 = *(undefined1 **)(iVar3 + -0x14 + uVar6 * 0x18);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


#undef PTR_recovered_1000bb30_1000e178
#define PTR_recovered_1000bb30_1000e178 (*(void * *)(((uintptr_t)pf_module_state + 0x1333U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bbe0
 */

void recovered_1000bbe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000bb30_1000e178;
  return;
}

#undef PTR_recovered_1000bb30_1000e178

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc00
 */

void recovered_1000bc00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc10
 */

void recovered_1000bc10(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000dfa8
#define DAT_1000dfa8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1163U)))
#undef LAB_1000be16
#define LAB_1000be16 (*(uint8_t *)(0x1000be16U))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define local_74 (*(undefined4 *)(frame + 172))
#define local_70 (*(undefined4 *)(frame + 176))
#define local_5c (*(undefined * *)(frame + 196))
#define local_58 (*(undefined * *)(frame + 200))
#define local_54 (*(undefined1 * *)(frame + 204))
#define local_50 (*(undefined1 * *)(frame + 208))
#define local_4c (*(undefined1 * *)(frame + 212))
#define local_3c (*(undefined1 * *)(frame + 228))
#define local_38 (*(uint *)(frame + 232))
#define local_30 (*(int *)(frame + 240))
#define local_2c (*(int *)(frame + 244))
#define local_28 (*(void * *)(frame + 248))
#define local_24 (*(undefined4 *)(frame + 252))
#define local_20 (*(undefined4 *)(frame + 256))
#define local_1c (*(void * *)(frame + 260))
#define local_18 (*(undefined4 *)(frame + 264))
#define local_14 (*(undefined4 *)(frame + 268))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc20
 */

void recovered_1000bc20(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  local_54 = (undefined1 *)((int)(uintptr_t)(frame + 288) + -4);
  local_4c = auStackY_10c + 0x80;
  iVar5 = *param_3;
  uVar8 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar8;
  uVar7 = *(uint *)(param_2 + 8);
  local_5c = PTR_recovered_10005750_1000f008;
  local_58 = &DAT_1000dfa8;
  local_50 = &LAB_1000be16;
  recovered_10005c10(&local_74);
  if (uVar7 < uVar8) {
    local_70 = 0xffffffff;
    recovered_10009780((int *)(param_2 + 4),uVar8);
    iVar5 = *param_3;
    uVar7 = *(uint *)(param_2 + 8);
    uVar8 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  }
  piVar1 = (int *)(param_2 + 4);
  if (uVar7 < uVar8) {
    local_70 = 0xffffffff;
    recovered_10009780(piVar1,uVar8);
    iVar5 = *param_3;
    uVar7 = *(uint *)(param_2 + 8);
  }
  iVar3 = *piVar1;
  local_2c = uVar8 * 3;
  iVar2 = iVar3 + -0x18;
  uVar6 = *(int *)(iVar5 + 0x38) + (uint)(*(int *)(iVar5 + 0x38) == 0);
  local_30 = iVar3;
  if (uVar7 < uVar6) {
    local_70 = 0xffffffff;
    recovered_10009780(piVar1,uVar6);
    iVar3 = *piVar1;
  }
  local_70 = 0xffffffff;
  recovered_10006c80((int *)&local_3c,(char *)(iVar3 + -0x18 + uVar6 * 0x18));
  local_70 = 1;
  recovered_10006c80((int *)&local_28,(char *)(iVar2 + uVar8 * 0x18));
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  puVar4 = &DAT_1000dd52;
  if (local_3c != (undefined1 *)0x0) {
    puVar4 = local_3c;
  }
  local_70 = 2;
  recovered_1000be90((int *)&local_1c,(int)puVar4,local_38);
  iVar5 = local_30 + local_2c * 8;
  *(undefined1 *)(iVar5 + -0x18) = 1;
  if ((void **)(iVar5 + -0x14) != &local_1c) {
    recovered_10005810(*(void **)(iVar5 + -0x14));
    *(void **)(iVar5 + -0x14) = local_1c;
    *(undefined4 *)(iVar5 + -0x10) = local_18;
    *(undefined4 *)(iVar5 + -0xc) = local_14;
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
  }
  *(undefined4 *)(iVar5 + -4) = 0;
  *(undefined4 *)(iVar5 + -8) = 0;
  recovered_10005810(local_1c);
  recovered_10005810(local_28);
  recovered_10005810(local_3c);
  recovered_10005c30(&local_74);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000dfa8
#undef LAB_1000be16
#undef PTR_recovered_10005750_1000f008
#undef local_74
#undef local_70
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_3c
#undef local_38
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_10c

#undef PTR_recovered_1000bc00_1000e19c
#define PTR_recovered_1000bc00_1000e19c (*(void * *)(((uintptr_t)pf_module_state + 0x1357U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be70
 */

void recovered_1000be70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000bc00_1000e19c;
  return;
}

#undef PTR_recovered_1000bc00_1000e19c

#define local_18 (*(undefined1 * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be90
 */

int * recovered_1000be90(int *param_1,int param_2,uint param_3)

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
LAB_1000bed0:
      if (uVar7 != uVar2) goto code_r0x1000bed8;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_18 = recovered_100057b0(uVar2 + 1);
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
        recovered_10005810(pvVar1);
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
        goto LAB_1000bff4;
      }
      goto LAB_1000bff6;
    }
    uVar6 = param_1[1];
LAB_1000bee2:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100057b0(uVar6 + 1);
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
      recovered_10005810(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_1000bff4:
    local_18 = (undefined1 *)*param_1;
LAB_1000bff6:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_18[iVar4] = 0;
  }
  return param_1;
code_r0x1000bed8:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_1000bee2;
  goto LAB_1000bed0;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c010
 */

void recovered_1000c010(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c020
 */

void recovered_1000c020(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
#undef DAT_1000dfb0
#define DAT_1000dfb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x116bU)))
#undef LAB_1000c1bf
#define LAB_1000c1bf (*(uint8_t *)(0x1000c1bfU))
#undef PTR_recovered_10005750_1000f008
#define PTR_recovered_10005750_1000f008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x21c3U)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_64 (*(undefined4 *)(frame + 172))
#define local_60 (*(undefined4 *)(frame + 176))
#define local_4c (*(undefined * *)(frame + 196))
#define local_48 (*(undefined * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_40 (*(undefined1 * *)(frame + 208))
#define local_3c (*(undefined1 * *)(frame + 212))
#define local_30 (*(int *)(frame + 224))
#define local_2c (*(int *)(frame + 228))
#define local_28 (*(void * *)(frame + 232))
#define local_24 (*(undefined4 *)(frame + 236))
#define local_20 (*(undefined4 *)(frame + 240))
#define local_1c (*(void * *)(frame + 244))
#define local_18 (*(undefined4 *)(frame + 248))
#define local_14 (*(undefined4 *)(frame + 252))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c030
 */

void recovered_1000c030(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;

  local_44 = auStackY_fc + 0xf8;
  local_3c = auStackY_fc + 0x80;
  uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar4;
  uVar5 = *(uint *)(param_2 + 8);
  local_4c = PTR_recovered_10005750_1000f008;
  local_48 = &DAT_1000dfb0;
  local_40 = &LAB_1000c1bf;
  recovered_10005c10(&local_64);
  if (uVar5 < uVar4) {
    local_60 = 0xffffffff;
    recovered_10009780((int *)(param_2 + 4),uVar4);
    uVar5 = *(uint *)(param_2 + 8);
    uVar4 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar5 < uVar4) {
    local_60 = 0xffffffff;
    recovered_10009780((int *)(param_2 + 4),uVar4);
  }
  local_30 = *(int *)(param_2 + 4);
  local_2c = uVar4 * 3;
  local_60 = 0xffffffff;
  recovered_10006c80((int *)&local_28,(char *)(local_30 + -0x18 + uVar4 * 0x18));
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  puVar2 = *(undefined1 **)(*param_3 + 0x24);
  puVar3 = &DAT_1000dd52;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_60 = 1;
  recovered_1000be90((int *)&local_1c,(int)puVar3,*(uint *)(*param_3 + 0x28));
  iVar1 = local_30 + local_2c * 8;
  *(undefined1 *)(iVar1 + -0x18) = 1;
  if ((void **)(iVar1 + -0x14) != &local_1c) {
    recovered_10005810(*(void **)(iVar1 + -0x14));
    *(void **)(iVar1 + -0x14) = local_1c;
    *(undefined4 *)(iVar1 + -0x10) = local_18;
    *(undefined4 *)(iVar1 + -0xc) = local_14;
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10005810(local_1c);
  recovered_10005810(local_28);
  recovered_10005c30(&local_64);
  return;
}

#undef DAT_1000dd52
#undef DAT_1000dfb0
#undef LAB_1000c1bf
#undef PTR_recovered_10005750_1000f008
#undef auStackY_fc
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef PTR_recovered_1000c010_1000e1c0
#define PTR_recovered_1000c010_1000e1c0 (*(void * *)(((uintptr_t)pf_module_state + 0x137bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c200
 */

void recovered_1000c200(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c010_1000e1c0;
  return;
}

#undef PTR_recovered_1000c010_1000e1c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c220
 */

void recovered_1000c220(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c230
 */

void recovered_1000c230(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c240
 */

void recovered_1000c240(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;

  uVar7 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar7;
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar6 < uVar7) {
    recovered_10009780((int *)(param_2 + 4),uVar7);
    uVar6 = *(uint *)(param_2 + 8);
    uVar7 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar6 < uVar7) {
    recovered_10009780((int *)(param_2 + 4),uVar7);
  }
  iVar2 = *(int *)(param_2 + 4);
  lVar8 = recovered_10006e20((void *)(iVar2 + -0x18 + uVar7 * 0x18));
  puVar1 = (uint *)(*param_3 + 0x30);
  uVar6 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*param_3 + 0x34);
  *(undefined1 *)(iVar2 + -0x18 + uVar7 * 0x18) = 2;
  *(uint *)(iVar2 + -8 + uVar7 * 0x18) = (uint)lVar8 + uVar3;
  *(uint *)(iVar2 + -4 + uVar7 * 0x18) =
       (int)((ulonglong)lVar8 >> 0x20) + iVar4 + (uint)CARRY4((uint)lVar8,uVar6);
  *(undefined4 *)(iVar2 + -0x10 + uVar7 * 0x18) = 0;
  puVar5 = *(undefined1 **)(iVar2 + -0x14 + uVar7 * 0x18);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  return;
}


#undef PTR_recovered_1000c220_1000e1e4
#define PTR_recovered_1000c220_1000e1e4 (*(void * *)(((uintptr_t)pf_module_state + 0x139fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2e0
 */

void recovered_1000c2e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c220_1000e1e4;
  return;
}

#undef PTR_recovered_1000c220_1000e1e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c300
 */

void recovered_1000c300(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c310
 */

void recovered_1000c310(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c320
 */

void recovered_1000c320(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *param_3;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)(param_2 + 4);
  if (uVar4 < uVar6) {
    recovered_10009780(piVar1,uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_10009780(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10006e20((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10006e20((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar8 + lVar9;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000c300_1000e208
#define PTR_recovered_1000c300_1000e208 (*(void * *)(((uintptr_t)pf_module_state + 0x13c3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c400
 */

void recovered_1000c400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c300_1000e208;
  return;
}

#undef PTR_recovered_1000c300_1000e208

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c420
 */

void recovered_1000c420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c430
 */

void recovered_1000c430(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c440
 */

void recovered_1000c440(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;

  uVar7 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar7;
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar6 < uVar7) {
    recovered_10009780((int *)(param_2 + 4),uVar7);
    uVar6 = *(uint *)(param_2 + 8);
    uVar7 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar6 < uVar7) {
    recovered_10009780((int *)(param_2 + 4),uVar7);
  }
  iVar2 = *(int *)(param_2 + 4);
  lVar8 = recovered_10006e20((void *)(iVar2 + -0x18 + uVar7 * 0x18));
  puVar1 = (uint *)(*param_3 + 0x30);
  uVar6 = *puVar1;
  uVar3 = *puVar1;
  iVar4 = *(int *)(*param_3 + 0x34);
  *(undefined1 *)(iVar2 + -0x18 + uVar7 * 0x18) = 2;
  *(uint *)(iVar2 + -8 + uVar7 * 0x18) = (uint)lVar8 - uVar3;
  *(uint *)(iVar2 + -4 + uVar7 * 0x18) =
       ((int)((ulonglong)lVar8 >> 0x20) - iVar4) - (uint)((uint)lVar8 < uVar6);
  *(undefined4 *)(iVar2 + -0x10 + uVar7 * 0x18) = 0;
  puVar5 = *(undefined1 **)(iVar2 + -0x14 + uVar7 * 0x18);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  return;
}


#undef PTR_recovered_1000c420_1000e22c
#define PTR_recovered_1000c420_1000e22c (*(void * *)(((uintptr_t)pf_module_state + 0x13e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4e0
 */

void recovered_1000c4e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c420_1000e22c;
  return;
}

#undef PTR_recovered_1000c420_1000e22c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c500
 */

void recovered_1000c500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c510
 */

void recovered_1000c510(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c520
 */

void recovered_1000c520(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *param_3;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)(param_2 + 4);
  if (uVar4 < uVar6) {
    recovered_10009780(piVar1,uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_10009780(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10006e20((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10006e20((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar9 - lVar8;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000c500_1000e250
#define PTR_recovered_1000c500_1000e250 (*(void * *)(((uintptr_t)pf_module_state + 0x140bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c600
 */

void recovered_1000c600(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c500_1000e250;
  return;
}

#undef PTR_recovered_1000c500_1000e250

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c620
 */

void recovered_1000c620(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c630
 */

void recovered_1000c630(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c640
 */

void recovered_1000c640(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;

  uVar6 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
  }
  iVar1 = *(int *)(param_2 + 4);
  uVar7 = recovered_10006e20((void *)(iVar1 + -0x18 + uVar6 * 0x18));
  uVar5 = *(uint *)(*param_3 + 0x30);
  lVar4 = (ulonglong)uVar5 * (uVar7 & 0xffffffff);
  iVar2 = *(int *)(*param_3 + 0x34);
  *(undefined1 *)(iVar1 + -0x18 + uVar6 * 0x18) = 2;
  *(int *)(iVar1 + -8 + uVar6 * 0x18) = (int)lVar4;
  *(uint *)(iVar1 + -4 + uVar6 * 0x18) =
       (int)uVar7 * iVar2 + (int)((ulonglong)lVar4 >> 0x20) + (int)(uVar7 >> 0x20) * uVar5;
  *(undefined4 *)(iVar1 + -0x10 + uVar6 * 0x18) = 0;
  puVar3 = *(undefined1 **)(iVar1 + -0x14 + uVar6 * 0x18);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  return;
}


#undef PTR_recovered_1000c620_1000e274
#define PTR_recovered_1000c620_1000e274 (*(void * *)(((uintptr_t)pf_module_state + 0x142fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6f0
 */

void recovered_1000c6f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c620_1000e274;
  return;
}

#undef PTR_recovered_1000c620_1000e274

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c710
 */

void recovered_1000c710(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c720
 */

void recovered_1000c720(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c730
 */

void recovered_1000c730(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;

  iVar3 = *param_3;
  uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar4 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(iVar3 + 0x18) + (uint)(*(int *)(iVar3 + 0x18) == 0);
  }
  piVar1 = (int *)(param_2 + 4);
  if (uVar4 < uVar6) {
    recovered_10009780(piVar1,uVar6);
    iVar3 = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
  }
  iVar5 = *piVar1;
  uVar7 = *(int *)(iVar3 + 0x38) + (uint)(*(int *)(iVar3 + 0x38) == 0);
  iVar3 = iVar5 + uVar6 * 0x18;
  iVar2 = iVar5 + -0x18;
  if (uVar4 < uVar7) {
    recovered_10009780(piVar1,uVar7);
    iVar5 = *piVar1;
  }
  lVar8 = recovered_10006e20((void *)(iVar5 + -0x18 + uVar7 * 0x18));
  lVar9 = recovered_10006e20((void *)(iVar2 + uVar6 * 0x18));
  *(undefined1 *)(iVar3 + -0x18) = 2;
  *(longlong *)(iVar3 + -8) = lVar8 * lVar9;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000c710_1000e298
#define PTR_recovered_1000c710_1000e298 (*(void * *)(((uintptr_t)pf_module_state + 0x1453U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c810
 */

void recovered_1000c810(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c710_1000e298;
  return;
}

#undef PTR_recovered_1000c710_1000e298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c830
 */

void recovered_1000c830(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c840
 */

void recovered_1000c840(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c850
 */

void recovered_1000c850(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;

  iVar1 = *param_3;
  uVar2 = *(uint *)(iVar1 + 0x34);
  uVar3 = *(uint *)(iVar1 + 0x30);
  uVar6 = *(int *)(iVar1 + 0x18) + (uint)(*(int *)(iVar1 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(*param_3 + 0x18) + (uint)(*(int *)(*param_3 + 0x18) == 0);
  }
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
  }
  iVar4 = *(int *)(param_2 + 4);
  iVar1 = iVar4 + uVar6 * 0x18;
  if (uVar3 == 0 && uVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = recovered_10006e20((void *)(iVar4 + -0x18 + uVar6 * 0x18));
    uVar8 = recovered_100013d0((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),uVar3,uVar2);
  }
  *(undefined1 *)(iVar1 + -0x18) = 2;
  *(undefined8 *)(iVar1 + -8) = uVar8;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  if (*(undefined1 **)(iVar1 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar1 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000c830_1000e2bc
#define PTR_recovered_1000c830_1000e2bc (*(void * *)(((uintptr_t)pf_module_state + 0x1477U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c910
 */

void recovered_1000c910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c830_1000e2bc;
  return;
}

#undef PTR_recovered_1000c830_1000e2bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c930
 */

void recovered_1000c930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c940
 */

void recovered_1000c940(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c950
 */

void recovered_1000c950(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;

  iVar4 = *param_3;
  uVar6 = *(int *)(iVar4 + 0x18) + (uint)(*(int *)(iVar4 + 0x18) == 0);
  *(uint *)(param_2 + 0x30) = uVar6;
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 < uVar6) {
    recovered_10009780((int *)(param_2 + 4),uVar6);
    iVar4 = *param_3;
    uVar5 = *(uint *)(param_2 + 8);
    uVar6 = *(int *)(iVar4 + 0x18) + (uint)(*(int *)(iVar4 + 0x18) == 0);
  }
  piVar1 = (int *)(param_2 + 4);
  if (uVar5 < uVar6) {
    recovered_10009780(piVar1,uVar6);
    iVar4 = *param_3;
    uVar5 = *(uint *)(param_2 + 8);
  }
  iVar3 = *piVar1;
  uVar7 = *(int *)(iVar4 + 0x38) + (uint)(*(int *)(iVar4 + 0x38) == 0);
  iVar4 = iVar3;
  if (uVar5 < uVar7) {
    recovered_10009780(piVar1,uVar7);
    iVar4 = *piVar1;
  }
  iVar2 = iVar3 + uVar6 * 0x18;
  lVar8 = recovered_10006e20((void *)(iVar4 + -0x18 + uVar7 * 0x18));
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = recovered_10006e20((void *)(iVar3 + -0x18 + uVar6 * 0x18));
    uVar10 = recovered_100013d0((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),(uint)lVar8,
                                (uint)((ulonglong)lVar8 >> 0x20));
  }
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(undefined8 *)(iVar2 + -8) = uVar10;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef PTR_recovered_1000c930_1000e2e0
#define PTR_recovered_1000c930_1000e2e0 (*(void * *)(((uintptr_t)pf_module_state + 0x149bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca50
 */

void recovered_1000ca50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000c930_1000e2e0;
  return;
}

#undef PTR_recovered_1000c930_1000e2e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca70
 */

void recovered_1000ca70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca80
 */

void recovered_1000ca80(void *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005810(in_stack_00000004);
  return;
}


#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca90
 */

void recovered_1000ca90(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;

  iVar5 = *param_3;
  uVar9 = *(int *)(iVar5 + 0x18) + (uint)(*(int *)(iVar5 + 0x18) == 0);
  uVar7 = *(uint *)(param_2 + 8);
  piVar1 = (int *)(param_2 + 4);
  if (uVar7 < uVar9) {
    recovered_10009780(piVar1,uVar9);
    iVar5 = *param_3;
    uVar7 = *(uint *)(param_2 + 8);
  }
  iVar3 = *piVar1;
  iVar8 = iVar3 + uVar9 * 0x18;
  uVar9 = *(int *)(iVar5 + 0x38) + (uint)(*(int *)(iVar5 + 0x38) == 0);
  if (uVar7 < uVar9) {
    recovered_10009780(piVar1,uVar9);
    iVar3 = *piVar1;
  }
  cVar2 = *(char *)(iVar8 + -0x18);
  if (cVar2 != *(char *)(iVar3 + -0x18 + uVar9 * 0x18)) {
    return;
  }
  if (cVar2 != '\0') {
    iVar3 = iVar3 + uVar9 * 0x18;
    if (cVar2 == '\x02') {
      if (*(int *)(iVar8 + -8) != *(int *)(iVar3 + -8) ||
          *(int *)(iVar8 + -4) != *(int *)(iVar3 + -4)) {
        return;
      }
    }
    else {
      if (cVar2 != '\x01') {
        return;
      }
      puVar6 = &DAT_1000dd52;
      if (*(undefined1 **)(iVar8 + -0x14) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(iVar8 + -0x14);
      }
      iVar5 = *(int *)(iVar8 + -0x10);
      puVar4 = &DAT_1000dd52;
      if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(iVar3 + -0x14);
      }
      if (iVar5 != *(int *)(iVar3 + -0x10)) {
        return;
      }
      if (iVar5 != 0) {
        iVar8 = 0;
        do {
          if (puVar6[iVar8] != puVar4[iVar8]) {
            return;
          }
          iVar8 = iVar8 + 1;
        } while (iVar5 != iVar8);
      }
    }
  }
  if (*(byte *)(param_2 + 0x24) < 4) {
    *(char *)(param_2 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_2 + 0x24) & 3) << 3));
  }
  return;
}

#undef DAT_1000dd52

#undef PTR_recovered_1000ca70_1000e304
#define PTR_recovered_1000ca70_1000e304 (*(void * *)(((uintptr_t)pf_module_state + 0x14bfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb90
 */

void recovered_1000cb90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_100057b0(8);
  *puVar1 = &PTR_recovered_1000ca70_1000e304;
  return;
}

#undef PTR_recovered_1000ca70_1000e304

#undef DAT_1000dd52
#define DAT_1000dd52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf0dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbb0
 */

int recovered_1000cbb0(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;

  uVar6 = param_1[1];
  if (uVar6 == param_1[2]) {
    uVar4 = 4;
    if (uVar6 != 0) {
      uVar4 = uVar6 * 2;
    }
    if (uVar6 < uVar4) {
      pvVar3 = recovered_100057b0(uVar4 * 0x18);
      if (param_1[1] != 0) {
        uVar6 = 0;
        iVar7 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar7 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -8) = *(undefined4 *)(iVar1 + -8 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + -4) = *(undefined4 *)(iVar1 + -4 + iVar7);
          *(undefined4 *)(iVar1 + -0xc + iVar7) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar7) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar7) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7 + 4) = *(undefined4 *)(iVar1 + 4 + iVar7);
          *(undefined4 *)((int)pvVar3 + iVar7) = uVar2;
          recovered_10005810((void *)0x0);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x18;
        } while (uVar6 < (uint)param_1[1]);
      }
      recovered_10005810((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar4;
      uVar6 = param_1[1];
    }
  }
  iVar7 = *param_1;
  *(undefined1 *)(iVar7 + uVar6 * 0x18) = *param_2;
  *(undefined4 *)(iVar7 + 4 + uVar6 * 0x18) = 0;
  *(undefined4 *)(iVar7 + 8 + uVar6 * 0x18) = 0;
  *(undefined4 *)(iVar7 + 0xc + uVar6 * 0x18) = 0;
  puVar5 = &DAT_1000dd52;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 4);
  }
  recovered_10009f80((int *)(iVar7 + 4 + uVar6 * 0x18),(int)puVar5,*(uint *)(param_2 + 8));
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar7 + 0x14 + uVar6 * 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar7 + 0x10 + uVar6 * 0x18) = uVar2;
  iVar7 = param_1[1];
  param_1[1] = iVar7 + 1;
  return iVar7 * 0x18 + *param_1;
}

#undef DAT_1000dd52

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cd10
 */

int recovered_1000cd10(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5 * 2;
    }
    if (uVar5 < uVar4) {
      pvVar3 = recovered_100057b0(uVar4 * 0x18);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 0x10;
        do {
          iVar1 = *param_1;
          *(undefined1 *)((int)pvVar3 + iVar6 + -0x10) = *(undefined1 *)(iVar1 + -0x10 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -0xc) = *(undefined4 *)(iVar1 + -0xc + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -8) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + -4) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)(iVar1 + -0xc + iVar6) = 0;
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          uVar2 = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6 + 4) = *(undefined4 *)(iVar1 + 4 + iVar6);
          *(undefined4 *)((int)pvVar3 + iVar6) = uVar2;
          recovered_10005810((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x18;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10005810((void *)*param_1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  *(undefined1 *)(iVar6 + uVar5 * 0x18) = *param_2;
  *(undefined4 *)(iVar6 + 4 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar6 + 8 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0xc + uVar5 * 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x14 + uVar5 * 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar6 + 0x10 + uVar5 * 0x18) = uVar2;
  param_1[1] = uVar5 + 1;
  return iVar6 + uVar5 * 0x18;
}
