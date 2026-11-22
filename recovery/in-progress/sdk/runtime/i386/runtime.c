/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_0024d54c
#define DAT_0024d54c (*(uint8_t *)(0x24d54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b1f0
 */

void recovered_1003b1f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint8_t *)(((uintptr_t)pf_module_state+0x3399U))) = 0;
  recovered_1003b200();
  return;
}

#undef DAT_0024d54c

#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_0024d54c
#define DAT_0024d54c (*(char *)(0x24d54cU))
#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
#undef DAT_0024d554
#define DAT_0024d554 (*(uint8_t *)(0x24d554U))
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
#define local_18 (*(uint *)(frame + 168))
#define local_14 (*(uint *)(frame + 172))
#define auStack_a4 (*(uint (*)[34])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003b200(void)

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
  if ((*(char *)(((uintptr_t)pf_module_state+0x3399U))) != '\0') {
    return;
  }
  (*(int *)(((uintptr_t)pf_module_state+0x339dU))) = 0;
  (*(int *)(((uintptr_t)pf_module_state+0x33a1U))) = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_1003b25b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_1003b25b:
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
        if (iVar9 == 0) goto LAB_1003b3a0;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_1003e5a0(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) goto LAB_1003b4a6;
    }
  }
LAB_1003b3a0:
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
      puVar6 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
      if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if ((*(int *)(((uintptr_t)pf_module_state+0x33a1U))) == 0) {
        (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
        (*(int *)(((uintptr_t)pf_module_state+0x33a1U))) = 0x300000;
        return;
      }
      (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
    if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if ((*(int *)(((uintptr_t)pf_module_state+0x33a1U))) == 0) {
      (*(int *)(((uintptr_t)pf_module_state+0x33a1U))) = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
      if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if ((*(int *)(((uintptr_t)pf_module_state+0x33a1U))) == 0) {
        (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
        (*(int *)(((uintptr_t)pf_module_state+0x33a1U))) = 0x2000000;
        return;
      }
      (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
      return;
    }
  }
LAB_1003b4a6:
  if ((*(int *)(((uintptr_t)pf_module_state+0x33a1U))) == 0) {
    (*(int *)(((uintptr_t)pf_module_state+0x33a1U))) = (*(int *)(((uintptr_t)pf_module_state+0x339dU)));
    (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
    return;
  }
  (*(char *)(((uintptr_t)pf_module_state+0x3399U))) = 1;
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_0024d54c
#undef DAT_0024d550
#undef DAT_0024d554
#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00300000
#undef _DAT_00300004
#undef _DAT_00300008
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a4

#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1003b520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_1003b200();
  iVar1 = 0;
  for (piVar2 = (*(int * *)(((uintptr_t)pf_module_state+0x339dU))); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_0024d550

#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003b560(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003b200();
  for (iVar1 = (*(int *)(((uintptr_t)pf_module_state+0x339dU))); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_0024d550

#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b5a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1003b5a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_1003b200();
  iVar2 = 0;
  for (piVar1 = (*(int * *)(((uintptr_t)pf_module_state+0x339dU))); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_0024d550

#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003b5d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003b200();
  for (iVar1 = (*(int *)(((uintptr_t)pf_module_state+0x339dU))); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_0024d550

#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
#undef DAT_0024d554
#define DAT_0024d554 (*(uint8_t *)(0x24d554U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_1003b610(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_1003b200();
    puVar4 = (*(uint * *)(((uintptr_t)pf_module_state+0x339dU)));
    if ((*(uint * *)(((uintptr_t)pf_module_state+0x33a1U))) != (uint *)0x0) {
      puVar4 = (*(uint * *)(((uintptr_t)pf_module_state+0x33a1U)));
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
            (*(uint * *)(((uintptr_t)pf_module_state+0x33a1U))) = (*(uint * *)(((uintptr_t)pf_module_state+0x339dU)));
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              (*(uint * *)(((uintptr_t)pf_module_state+0x33a1U))) = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = (*(uint * *)(((uintptr_t)pf_module_state+0x339dU)));
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_0024d550
#undef DAT_0024d554

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b6d0
 */

longlong recovered_1003b6d0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x1003b710
 */

ulonglong recovered_1003b710(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x1003b750
 */

undefined8 recovered_1003b750(uint param_1,uint param_2,uint param_3)

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


#define local_14 (*(uint *)(frame + 28))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b7a0
 */

undefined8 recovered_1003b7a0(uint param_1,uint param_2,uint param_3,uint param_4)

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

#undef local_14
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003b880
 */

undefined8 recovered_1003b880(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1003b8f0
 */

undefined8 recovered_1003b8f0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1003ba30
 */

undefined8 recovered_1003ba30(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1003baf0
 */

void recovered_1003baf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bb10
 */

int recovered_1003bb10(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (value ^ value >> 0x1f) - (value >> 0x1f);
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_1003bb30(ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x50U && api[0x4c/4]) {return ((void * (*)(ulong))(uintptr_t)api[0x4c/4])(size);}
 return 0;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void recovered_1003bb70(void *pointer){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x54U && api[0x50/4]) {((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);return;}
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_1003bbb0(void *pointer,ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x6800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x58U && api[0x54/4]) {return ((void * (*)(void *,ulong))(uintptr_t)api[0x54/4])(pointer,size);}
 return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bbf0
 */

void * recovered_1003bbf0(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1003bc17;
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
LAB_1003bc17:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003bcb0
 */

void * recovered_1003bcb0(void *destination,void *source,ulong count)

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
 * Address: 0x1003be80
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_1003be80(void *destination,int value,ulong count)

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
 * Address: 0x1003bf30
 */

void recovered_1003bf30(undefined4 *param_1,uint param_2)

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
 * Address: 0x1003bfd0
 */

void recovered_1003bfd0(undefined4 *param_1,uint param_2)

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
 * Address: 0x1003c070
 */

int recovered_1003c070(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1003c10e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_1003c125;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_1003c156:
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
      if (uVar8 != uVar9) goto LAB_1003c156;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_1003c156;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_1003c156;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_1003c1a0(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1003c10e:
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
LAB_1003c125:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c1a0
 */

int recovered_1003c1a0(char *in_ECX,char *in_EDX)

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
 * Address: 0x1003c1e0
 */

int recovered_1003c1e0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x61U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c200
 */

int recovered_1003c200(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x41U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c220
 */

int recovered_1003c220(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c240
 */

int recovered_1003c240(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c270
 */

int recovered_1003c270(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value == 9 || value == 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c290
 */

int recovered_1003c290(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x20U < 0x5f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c2b0
 */

int recovered_1003c2b0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x5bU) {
    value = value + 0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c2d0
 */

int recovered_1003c2d0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x7bU) {
    value = value + -0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c2f0
 */

ulong recovered_1003c2f0(char *text)

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
 * Address: 0x1003c320
 */

int recovered_1003c320(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_1003c356;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_1003c356:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c360
 */

int recovered_1003c360(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_1003c396;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_1003c396:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c3a0
 */

char * recovered_1003c3a0(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;

  iVar2 = 0;
  do {
    cVar1 = source[iVar2];
    destination[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  return destination;
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
 * Address: 0x1003c3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_1003c3c0(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;

  if (text == (char *)0x0) {
    return (char *)0x0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7;
    uVar7 = uVar5 + 1;
  } while (text[uVar5] != '\0');
  if (_DAT_00006800 != 0x50414d57) {
    return (char *)0x0;
  }
  if (_DAT_00006804 == 0) {
    return (char *)0x0;
  }
  if (_DAT_00006808 < 0xc) {
    return (char *)0x0;
  }
  if (_DAT_00006808 < 0x50) {
    return (char *)0x0;
  }
  if (_DAT_0000684c == (code *)0x0) {
    return (char *)0x0;
  }
  pcVar4 = (char *)(*_DAT_0000684c)(uVar7);
  if (pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar6 = pcVar4;
  if (7 < uVar7) {
    if ((((uint)pcVar4 ^ (uint)text) & 3) != 0) goto LAB_1003c4d1;
    if (((uint)pcVar4 & 3) != 0) {
      uVar8 = 0;
      do {
        pcVar4[uVar8] = text[uVar8];
        uVar1 = uVar8 + 1;
        if (uVar5 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((uint)(pcVar4 + iVar3) & 3) != 0);
      uVar7 = uVar7 - uVar1;
      text = text + uVar1;
      pcVar6 = pcVar4 + uVar1;
    }
    for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
      *(undefined4 *)pcVar6 = *(undefined4 *)text;
      *(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(text + 4);
      *(undefined4 *)(pcVar6 + 8) = *(undefined4 *)(text + 8);
      *(undefined4 *)(pcVar6 + 0xc) = *(undefined4 *)(text + 0xc);
      text = text + 0x10;
      pcVar6 = pcVar6 + 0x10;
    }
    for (; 3 < uVar7; uVar7 = uVar7 - 4) {
      uVar2 = *(undefined4 *)text;
      text = text + 4;
      *(undefined4 *)pcVar6 = uVar2;
      pcVar6 = pcVar6 + 4;
    }
  }
  if (uVar7 == 0) {
    return pcVar4;
  }
LAB_1003c4d1:
  uVar5 = 0;
  do {
    pcVar6[uVar5] = text[uVar5];
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  return pcVar4;
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
 * Address: 0x1003c500
 */

char * recovered_1003c500(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = *text;
  while( true ) {
    if (cVar1 == '\0') {
      if ((char)value != '\0') {
        text = (char *)0x0;
      }
      return text;
    }
    if ((char)value == cVar1) break;
    cVar1 = text[1];
    text = text + 1;
  }
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c540
 */

ulong recovered_1003c540(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*text == '\0') {
LAB_1003c57b:
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*accept,*text);
    uVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1003c57b;
      pcVar5 = accept;
      while (pcVar5 = pcVar5 + 1, (char)uVar3 != cVar4) {
        cVar4 = *pcVar5;
        if (cVar4 == '\0') {
          return uVar2;
        }
      }
      iVar1 = uVar2 + 1;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),text[iVar1]);
      uVar2 = uVar2 + 1;
    } while (text[iVar1] != '\0');
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c590
 */

char * recovered_1003c590(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar2;
  uint uVar1;
  char *pcVar3;

  if (*text != '\0') {
    uVar1 = (uint)CONCAT11(*accept,*text);
    do {
      cVar2 = (char)(uVar1 >> 8);
      if (cVar2 != '\0') {
        pcVar3 = accept;
        do {
          pcVar3 = pcVar3 + 1;
          if ((char)uVar1 == cVar2) {
            return text;
          }
          cVar2 = *pcVar3;
        } while (cVar2 != '\0');
      }
      pcVar3 = text + 1;
      uVar1 = CONCAT31((int3)(uVar1 >> 8),*pcVar3);
      text = text + 1;
    } while (*pcVar3 != '\0');
  }
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c5e0
 */

char * recovered_1003c5e0(char *haystack,char *needle)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;

  pcVar3 = haystack;
  if (*needle != '\0') {
    if (*haystack == '\0') {
      pcVar3 = (char *)0x0;
    }
    else {
      do {
        iVar2 = 0;
        cVar4 = *needle;
        while (haystack[iVar2] == cVar4) {
          cVar4 = needle[iVar2 + 1];
          iVar2 = iVar2 + 1;
          pcVar3 = haystack;
          if (cVar4 == '\0') goto LAB_1003c623;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = haystack + 1;
        haystack = haystack + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_1003c623:
  return pcVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c630
 */

undefined * recovered_1003c630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (undefined *)((uintptr_t)pf_module_state+0x297dU);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c640
 */

undefined * recovered_1003c640(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (undefined *)((uintptr_t)pf_module_state+0x2f5dU);
}


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
 * Address: 0x1003c650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003c650(undefined4 *param_1)

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

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c6e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_1003c6e0(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
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

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003c710(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))) && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_0024add8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c7f0
 */

double recovered_1003c7f0(double x,double y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if ((y != 0.0) || (NAN(y))) {
    dVar1 = x - y * (double)(int)ROUND(x / y);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c850
 */

double recovered_1003c850(double base,double exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(exponent);
  dVar3 = 0.0;
  if ((((double)(int)uVar1 == exponent) && (!NAN((double)(int)uVar1) && !NAN(exponent))) &&
     (dVar3 = 1.0, uVar1 != 0)) {
    dVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        dVar3 = base * dVar3;
      }
      base = base * base;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      dVar3 = 1.0 / dVar3;
    }
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c8f0
 */

double recovered_1003c8f0(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c940
 */

double recovered_1003c940(double value)

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


#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003c9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1003c9a0(double value)

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
    dVar2 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
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

#undef DAT_0024add8

#undef DAT_0024a4d8
#define DAT_0024a4d8 (*(uint8_t *)(0x24a4d8U))
#undef DAT_0024a4dc
#define DAT_0024a4dc (*(uint8_t *)(0x24a4dcU))
#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024ade0
#define DAT_0024ade0 (*(uint8_t *)(0x24ade0U))
#undef DAT_0024ade4
#define DAT_0024ade4 (*(uint8_t *)(0x24ade4U))
#undef DAT_0024ade8
#define DAT_0024ade8 (*(uint8_t *)(0x24ade8U))
#undef DAT_0024adec
#define DAT_0024adec (*(uint8_t *)(0x24adecU))
#undef DAT_0024adf0
#define DAT_0024adf0 (*(uint8_t *)(0x24adf0U))
#undef DAT_0024adf4
#define DAT_0024adf4 (*(uint8_t *)(0x24adf4U))
#undef DAT_0024adf8
#define DAT_0024adf8 (*(uint8_t *)(0x24adf8U))
#undef DAT_0024adfc
#define DAT_0024adfc (*(uint8_t *)(0x24adfcU))
#undef DAT_0024ae00
#define DAT_0024ae00 (*(uint8_t *)(0x24ae00U))
#undef DAT_0024ae4c
#define DAT_0024ae4c (*(uint8_t *)(0x24ae4cU))
#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003caa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1003caa0(double value)

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
    dVar1 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc99U)));
  }
  else {
    iVar10 = 0;
    if ((double)(*(float *)(((uintptr_t)pf_module_state+0x325U))) < value) {
      iVar10 = 0;
      do {
        value = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
        iVar10 = iVar10 + 1;
      } while ((double)(*(float *)(((uintptr_t)pf_module_state+0x325U))) < value);
    }
    for (; value < (double)(*(float *)(((uintptr_t)pf_module_state+0x329U))); value = value + value) {
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
    dVar1 = (dVar9 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc4dU))) +
            dVar9 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc49U))) +
            dVar8 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc45U))) +
            dVar7 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc41U))) +
            dVar6 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc3dU))) +
            dVar5 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc39U))) +
            dVar4 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc35U))) +
            dVar3 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc31U))) + (dVar1 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc2dU))) + dVar1 + 0.0;
    dVar1 = dVar1 + dVar1 + (double)iVar10 * (*(double *)(((uintptr_t)pf_module_state+0xcbdU)));
  }
  return dVar1;
}

#undef DAT_0024a4d8
#undef DAT_0024a4dc
#undef DAT_0024add8
#undef DAT_0024ade0
#undef DAT_0024ade4
#undef DAT_0024ade8
#undef DAT_0024adec
#undef DAT_0024adf0
#undef DAT_0024adf4
#undef DAT_0024adf8
#undef DAT_0024adfc
#undef DAT_0024ae00
#undef DAT_0024ae4c
#undef DAT_0024ae70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cbc0
 */

longlong recovered_1003cbc0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(value + *(double *)((uint)(0.0 <= value) * 8 + ((uintptr_t)pf_module_state+0x35dU)));
}


#undef DAT_0024a4e0
#define DAT_0024a4e0 (*(uint8_t *)(0x24a4e0U))
#undef DAT_0024a4e4
#define DAT_0024a4e4 (*(uint8_t *)(0x24a4e4U))
#undef DAT_0024a4e8
#define DAT_0024a4e8 (*(uint8_t *)(0x24a4e8U))
#undef DAT_0024a4f8
#define DAT_0024a4f8 (*(uint8_t *)(0x24a4f8U))
#undef DAT_0024a500
#define DAT_0024a500 (*(uint8_t *)(0x24a500U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1003cc10(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (; (*(double *)(((uintptr_t)pf_module_state+0xcb5U))) < value; value = value + (*(double *)(((uintptr_t)pf_module_state+0x345U)))) {
  }
  for (; value < (*(double *)(((uintptr_t)pf_module_state+0xcadU))); value = value + (*(double *)(((uintptr_t)pf_module_state+0x34dU)))) {
  }
  dVar1 = value * value;
  return ((dVar1 * dVar1 * dVar1) / (double)(*(float *)(((uintptr_t)pf_module_state+0x335U))) +
         (dVar1 * dVar1) / (double)(*(float *)(((uintptr_t)pf_module_state+0x331U))) + dVar1 / (double)(*(float *)(((uintptr_t)pf_module_state+0x32dU))) + 1.0) * value;
}

#undef DAT_0024a4e0
#undef DAT_0024a4e4
#undef DAT_0024a4e8
#undef DAT_0024a4f8
#undef DAT_0024a500
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024a4ec
#define DAT_0024a4ec (*(uint8_t *)(0x24a4ecU))
#undef DAT_0024a4f8
#define DAT_0024a4f8 (*(uint8_t *)(0x24a4f8U))
#undef DAT_0024a500
#define DAT_0024a500 (*(uint8_t *)(0x24a500U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#undef DAT_0024ae38
#define DAT_0024ae38 (*(uint8_t *)(0x24ae38U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ccb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1003ccb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (; (*(double *)(((uintptr_t)pf_module_state+0xcb5U))) < value; value = value + (*(double *)(((uintptr_t)pf_module_state+0x345U)))) {
  }
  for (; value < (*(double *)(((uintptr_t)pf_module_state+0xcadU))); value = value + (*(double *)(((uintptr_t)pf_module_state+0x34dU)))) {
  }
  dVar1 = value * value;
  return (dVar1 * dVar1 * dVar1) / (double)(*(float *)(((uintptr_t)pf_module_state+0x339U))) +
         (dVar1 * dVar1) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc85U))) + dVar1 * (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))) + 1.0;
}

#undef DAT_0024a4ec
#undef DAT_0024a4f8
#undef DAT_0024a500
#undef DAT_0024addc
#undef DAT_0024ae38
#undef DAT_0024ae60
#undef DAT_0024ae68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cd50
 */

double recovered_1003cd50(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (-value <= value) {
    dVar1 = value;
  }
  return dVar1;
}


#undef DAT_0024a4f0
#define DAT_0024a4f0 (*(uint8_t *)(0x24a4f0U))
#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cd70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_1003cd70(double value)

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

  if ((value != 0.0) || (uVar4 = 0, uVar7 = 0, NAN(value))) {
    dVar2 = -value;
    if (-value <= value) {
      dVar2 = value;
    }
    uVar8 = 0;
    dVar3 = (double)(*(float *)(((uintptr_t)pf_module_state+0x33dU)));
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
      dVar3 = dVar3 * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
      bVar11 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar11);
    uVar4 = -uVar8;
    uVar7 = -(uint)(uVar8 != 0) - uVar10;
    if (0.0 <= value) {
      uVar4 = uVar8;
      uVar7 = uVar10;
    }
  }
  return CONCAT44(uVar7,uVar4);
}

#undef DAT_0024a4f0
#undef DAT_0024add8

#undef DAT_0024a4f0
#define DAT_0024a4f0 (*(uint8_t *)(0x24a4f0U))
#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ce50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong recovered_1003ce50(double value)

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
  if (0.0 < value) {
    uVar7 = 0;
    dVar2 = (double)(*(float *)(((uintptr_t)pf_module_state+0x33dU)));
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
      if (dVar2 <= value) {
        uVar5 = uVar6;
        uVar9 = uVar8;
        value = value - dVar2;
      }
      uVar7 = uVar7 | uVar5;
      uVar4 = uVar4 | uVar9;
      dVar2 = dVar2 * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
      bVar10 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar4,uVar7);
}

#undef DAT_0024a4f0
#undef DAT_0024add8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cf00
 */

double recovered_1003cf00(ulonglong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;

  dVar1 = 0.0;
  if (value != 0) {
    dVar1 = 0.0;
    dVar2 = 1.0;
    do {
      iVar3 = (int)(value >> 0x20);
      uVar4 = (uint)value;
      if ((value & 1) != 0) {
        dVar1 = dVar1 + dVar2;
      }
      value = value >> 1;
      dVar2 = dVar2 + dVar2;
    } while (iVar3 != 0 || (uint)-iVar3 < (uint)(1 < uVar4));
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003cf70
 */

double recovered_1003cf70(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;

  if (value < 0) {
    dVar2 = 0.0;
    dVar3 = 1.0;
    uVar4 = -(int)value;
    uVar6 = -(uint)((int)value != 0) - PF_PART4(value, 4);
    do {
      if ((uVar4 & 1) != 0) {
        dVar2 = dVar3 + dVar2;
      }
      dVar3 = dVar3 + dVar3;
      bVar7 = 1 < uVar4;
      bVar8 = uVar6 != 0;
      uVar1 = -uVar6;
      uVar4 = uVar6 << 0x1f | uVar4 >> 1;
      uVar6 = uVar6 >> 1;
    } while (bVar8 || uVar1 < bVar7);
    dVar2 = -dVar2;
  }
  else {
    dVar2 = 0.0;
    if (value != 0) {
      dVar2 = 0.0;
      dVar3 = 1.0;
      do {
        iVar5 = (int)((ulonglong)value >> 0x20);
        uVar4 = (uint)value;
        if ((value & 1U) != 0) {
          dVar2 = dVar3 + dVar2;
        }
        value = (ulonglong)value >> 1;
        dVar3 = dVar3 + dVar3;
      } while (iVar5 != 0 || (uint)-iVar5 < (uint)(1 < uVar4));
    }
  }
  return dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d020
 */

float recovered_1003d020(float x,float y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((y != 0.0) || (NAN(y))) {
    fVar1 = x - y * (float)(int)ROUND(x / y);
  }
  return fVar1;
}


#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_1003d080(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc25U))) <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
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

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_1003d170(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * (*(float *)(((uintptr_t)pf_module_state+0xc25U)));
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

#undef DAT_0024add8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d1b0
 */

float recovered_1003d1b0(float base,float exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;

  uVar1 = (uint)ROUND(exponent);
  fVar3 = 0.0;
  if ((((float)(int)uVar1 == exponent) && (!NAN((float)(int)uVar1) && !NAN(exponent))) &&
     (fVar3 = 1.0, uVar1 != 0)) {
    fVar3 = 1.0;
    uVar4 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    do {
      if ((uVar4 & 1) != 0) {
        fVar3 = fVar3 * base;
      }
      base = base * base;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar2);
    if ((int)uVar1 < 0) {
      fVar3 = 1.0 / fVar3;
    }
  }
  return fVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d250
 */

float recovered_1003d250(float value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d2a0
 */

float recovered_1003d2a0(float value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d310
 */

double recovered_1003d310(double value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d380
 */

float recovered_1003d380(float value)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d400
 */

float recovered_1003d400(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003c9a0((double)value);
  return (float)dVar1;
}


#undef DAT_0024a4d8
#define DAT_0024a4d8 (*(uint8_t *)(0x24a4d8U))
#undef DAT_0024a4dc
#define DAT_0024a4dc (*(uint8_t *)(0x24a4dcU))
#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024ade0
#define DAT_0024ade0 (*(uint8_t *)(0x24ade0U))
#undef DAT_0024ade4
#define DAT_0024ade4 (*(uint8_t *)(0x24ade4U))
#undef DAT_0024ade8
#define DAT_0024ade8 (*(uint8_t *)(0x24ade8U))
#undef DAT_0024adec
#define DAT_0024adec (*(uint8_t *)(0x24adecU))
#undef DAT_0024adf0
#define DAT_0024adf0 (*(uint8_t *)(0x24adf0U))
#undef DAT_0024adf4
#define DAT_0024adf4 (*(uint8_t *)(0x24adf4U))
#undef DAT_0024adf8
#define DAT_0024adf8 (*(uint8_t *)(0x24adf8U))
#undef DAT_0024adfc
#define DAT_0024adfc (*(uint8_t *)(0x24adfcU))
#undef DAT_0024ae00
#define DAT_0024ae00 (*(uint8_t *)(0x24ae00U))
#undef DAT_0024ae4c
#define DAT_0024ae4c (*(uint8_t *)(0x24ae4cU))
#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_1003d420(float value)

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

  fVar1 = (*(float *)(((uintptr_t)pf_module_state+0xc99U)));
  if (0.0 < value) {
    iVar10 = 0;
    if ((*(float *)(((uintptr_t)pf_module_state+0x325U))) < value) {
      iVar10 = 0;
      do {
        value = value * (*(float *)(((uintptr_t)pf_module_state+0xc25U)));
        iVar10 = iVar10 + 1;
      } while ((*(float *)(((uintptr_t)pf_module_state+0x325U))) < value);
    }
    for (; value < (*(float *)(((uintptr_t)pf_module_state+0x329U))); value = value + value) {
      iVar10 = iVar10 + -1;
    }
    fVar1 = (value + -1.0) / (value + 1.0);
    fVar2 = fVar1 * fVar1;
    fVar3 = fVar1 * fVar2 * fVar2;
    fVar4 = fVar3 * fVar2;
    fVar5 = fVar4 * fVar2;
    fVar6 = fVar5 * fVar2;
    fVar7 = fVar6 * fVar2;
    fVar8 = fVar7 * fVar2;
    fVar9 = fVar8 * fVar2;
    fVar1 = (fVar9 * fVar2) / (*(float *)(((uintptr_t)pf_module_state+0xc4dU))) +
            fVar9 / (*(float *)(((uintptr_t)pf_module_state+0xc49U))) +
            fVar8 / (*(float *)(((uintptr_t)pf_module_state+0xc45U))) +
            fVar7 / (*(float *)(((uintptr_t)pf_module_state+0xc41U))) +
            fVar6 / (*(float *)(((uintptr_t)pf_module_state+0xc3dU))) +
            fVar5 / (*(float *)(((uintptr_t)pf_module_state+0xc39U))) +
            fVar4 / (*(float *)(((uintptr_t)pf_module_state+0xc35U))) +
            fVar3 / (*(float *)(((uintptr_t)pf_module_state+0xc31U))) + (fVar1 * fVar2) / (*(float *)(((uintptr_t)pf_module_state+0xc2dU))) + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)(*(double *)(((uintptr_t)pf_module_state+0xcbdU)));
  }
  return fVar1;
}

#undef DAT_0024a4d8
#undef DAT_0024a4dc
#undef DAT_0024add8
#undef DAT_0024ade0
#undef DAT_0024ade4
#undef DAT_0024ade8
#undef DAT_0024adec
#undef DAT_0024adf0
#undef DAT_0024adf4
#undef DAT_0024adf8
#undef DAT_0024adfc
#undef DAT_0024ae00
#undef DAT_0024ae4c
#undef DAT_0024ae70

#define local_14 (*(long *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d550
 */

long recovered_1003d550(double value)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (long)(longlong)ROUND(value + *(double *)((uint)(0.0 <= value) * 8 + ((uintptr_t)pf_module_state+0x35dU)));
  return local_14;
}

#undef local_14

#undef DAT_0024a4e0
#define DAT_0024a4e0 (*(uint8_t *)(0x24a4e0U))
#undef DAT_0024a4e4
#define DAT_0024a4e4 (*(uint8_t *)(0x24a4e4U))
#undef DAT_0024a4e8
#define DAT_0024a4e8 (*(uint8_t *)(0x24a4e8U))
#undef DAT_0024a4f8
#define DAT_0024a4f8 (*(uint8_t *)(0x24a4f8U))
#undef DAT_0024a500
#define DAT_0024a500 (*(uint8_t *)(0x24a500U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d5a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_1003d5a0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)(*(double *)(((uintptr_t)pf_module_state+0xcb5U))) < value; value = value + (float)(*(double *)(((uintptr_t)pf_module_state+0x345U)))) {
  }
  for (; value < (float)(*(double *)(((uintptr_t)pf_module_state+0xcadU))); value = value + (float)(*(double *)(((uintptr_t)pf_module_state+0x34dU)))) {
  }
  fVar1 = value * value;
  return ((fVar1 * fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x335U))) +
         (fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x331U))) + fVar1 / (*(float *)(((uintptr_t)pf_module_state+0x32dU))) + 1.0) * value;
}

#undef DAT_0024a4e0
#undef DAT_0024a4e4
#undef DAT_0024a4e8
#undef DAT_0024a4f8
#undef DAT_0024a500
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024a4ec
#define DAT_0024a4ec (*(uint8_t *)(0x24a4ecU))
#undef DAT_0024a4f8
#define DAT_0024a4f8 (*(uint8_t *)(0x24a4f8U))
#undef DAT_0024a500
#define DAT_0024a500 (*(uint8_t *)(0x24a500U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#undef DAT_0024ae38
#define DAT_0024ae38 (*(uint8_t *)(0x24ae38U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_1003d640(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)(*(double *)(((uintptr_t)pf_module_state+0xcb5U))) < value; value = value + (float)(*(double *)(((uintptr_t)pf_module_state+0x345U)))) {
  }
  for (; value < (float)(*(double *)(((uintptr_t)pf_module_state+0xcadU))); value = value + (float)(*(double *)(((uintptr_t)pf_module_state+0x34dU)))) {
  }
  fVar1 = value * value;
  return (fVar1 * fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x339U))) +
         (fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0xc85U))) + fVar1 * (*(float *)(((uintptr_t)pf_module_state+0xc29U))) + 1.0;
}

#undef DAT_0024a4ec
#undef DAT_0024a4f8
#undef DAT_0024a500
#undef DAT_0024addc
#undef DAT_0024ae38
#undef DAT_0024ae60
#undef DAT_0024ae68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d6e0
 */

float recovered_1003d6e0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -value;
  if (-value <= value) {
    fVar1 = value;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d700
 */

long recovered_1003d700(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = (byte *)text;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < (byte)(bVar1 - 9)) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (endptr == (char **)0x0) {
      return 0;
    }
    *endptr = text;
    return 0;
  }
  lVar4 = 0;
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
LAB_1003d82c:
        if (endptr != (char **)0x0) {
          *endptr = text;
        }
        if (bVar1 == 0x2d) {
          lVar4 = -lVar4;
        }
        return lVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if ((uint)base <= uVar7) goto LAB_1003d82c;
    lVar4 = lVar4 * base + uVar7;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d850
 */

ulong recovered_1003d850(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  pbVar3 = (byte *)text;
  while( true ) {
    bVar1 = *pbVar3;
    if ((4 < (byte)(bVar1 - 9)) && (bVar1 != 0x20)) break;
    pbVar3 = pbVar3 + 1;
  }
  uVar7 = (uint)((bVar1 - 0x2b & 0xfd) == 0);
  pbVar5 = pbVar3 + uVar7;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar3[uVar7 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar3 + uVar7 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar3[uVar7 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar3 + uVar7 + 2;
        base = 0x10;
      }
      else {
        base = 8;
      }
    }
  }
  else if (base - 0x25U < 0xffffffdd) {
    if (endptr == (char **)0x0) {
      return 0;
    }
    *endptr = text;
    return 0;
  }
  uVar4 = 0;
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
LAB_1003d97c:
        if (endptr != (char **)0x0) {
          *endptr = text;
        }
        if (bVar1 == 0x2d) {
          uVar4 = -uVar4;
        }
        return uVar4;
      }
      uVar7 = iVar6 - 0x37;
    }
    if ((uint)base <= uVar7) goto LAB_1003d97c;
    uVar4 = uVar4 * base + uVar7;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024ae14
#define DAT_0024ae14 (*(uint8_t *)(0x24ae14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003d9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_1003d9a0(char *text,char **endptr)

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
      fVar2 = fVar2 * (*(float *)(((uintptr_t)pf_module_state+0xc61U))) + (float)(int)((uVar5 >> 8) - 0x30);
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
  }
  if ((char)(uVar5 >> 8) == '.') {
    pbVar8 = pbVar6 + 1;
    uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
    pbVar6 = pbVar6 + 1;
    if (9 < (byte)(*pbVar8 - 0x30U)) goto LAB_1003da5a;
    fVar3 = 0.0;
    fVar4 = 1.0;
    do {
      fVar3 = fVar3 * (*(float *)(((uintptr_t)pf_module_state+0xc61U))) + (float)(int)((uVar5 >> 8) - 0x30);
      fVar4 = fVar4 * (*(float *)(((uintptr_t)pf_module_state+0xc61U)));
      pbVar8 = pbVar6 + 1;
      uVar5 = (uint)CONCAT11(*pbVar8,(char)uVar5);
      pbVar6 = pbVar6 + 1;
    } while ((byte)(*pbVar8 - 0x30U) < 10);
    fVar3 = fVar3 / fVar4;
  }
  else {
LAB_1003da5a:
    fVar3 = 0.0;
    if (9 < bVar7) {
      fVar2 = 0.0;
      if (endptr != (char **)0x0) {
        *endptr = text;
      }
      goto LAB_1003db14;
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
              fVar3 = fVar3 * (*(float *)(((uintptr_t)pf_module_state+0xc25U)));
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
  if (endptr != (char **)0x0) {
    *endptr = (char *)pbVar6;
  }
  fVar2 = -fVar3;
  if ((char)uVar5 != '-') {
    fVar2 = fVar3;
  }
LAB_1003db14:
  return (double)fVar2;
}

#undef DAT_0024add8
#undef DAT_0024ae14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003db40
 */

float recovered_1003db40(char *text,char **endptr)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003d9a0(text,endptr);
  return (float)dVar1;
}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_1003db70(char *buffer,unsigned long size,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,size,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_1003e570(char *buffer,unsigned long size,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,size,format,args);__builtin_va_end(args);return result;}


#undef DAT_0024d550
#define DAT_0024d550 (*(uint8_t *)(0x24d550U))
#undef DAT_0024d554
#define DAT_0024d554 (*(uint8_t *)(0x24d554U))
#undef DAT_02000000
#define DAT_02000000 (*(uint8_t *)(0x2000000U))
#undef DAT_02000004
#define DAT_02000004 (*(uint8_t *)(0x2000004U))
#undef DAT_02000008
#define DAT_02000008 (*(uint8_t *)(0x2000008U))
#undef DAT_0200000c
#define DAT_0200000c (*(uint8_t *)(0x200000cU))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e5a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003e5a0(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
        if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if ((*(int * *)(((uintptr_t)pf_module_state+0x33a1U))) == (int *)0x0) {
          (*(int * *)(((uintptr_t)pf_module_state+0x33a1U))) = piVar1;
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
    puVar2 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
    if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if ((*(int * *)(((uintptr_t)pf_module_state+0x33a1U))) != (int *)0x0) {
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
    puVar2 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x339dU)));
    if ((*(int *)(((uintptr_t)pf_module_state+0x339dU))) != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if ((*(int * *)(((uintptr_t)pf_module_state+0x33a1U))) != (int *)0x0) {
      return;
    }
  }
  (*(int * *)(((uintptr_t)pf_module_state+0x33a1U))) = piVar1;
  return;
}

#undef DAT_0024d550
#undef DAT_0024d554
#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e720
 */

void recovered_1003e720(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < param_2 && param_1 != (int *)0x0) && (*param_1 == 0)) {
    do {
      *param_1 = 1;
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_0024e594
#define DAT_0024e594 (*(uint8_t *)(0x24e594U))
#undef DAT_0024e598
#define DAT_0024e598 (*(uint8_t *)(0x24e598U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003e750(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && ((*(int *)(((uintptr_t)pf_module_state+0x43e1U))) == 0)) &&
     ((*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) = (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) + 1, 0xffff < (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))))) {
    (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) = 0;
    (*(int *)(((uintptr_t)pf_module_state+0x43e1U))) = 1;
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))))) {
      (*_DAT_0000689c)();
    }
    (*(int *)(((uintptr_t)pf_module_state+0x43e1U))) = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef DAT_0024e594
#undef DAT_0024e598
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_0024e594
#define DAT_0024e594 (*(uint8_t *)(0x24e594U))
#undef DAT_0024e598
#define DAT_0024e598 (*(uint8_t *)(0x24e598U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e7e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003e7e0(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((*(int *)(((uintptr_t)pf_module_state+0x43e1U))) != 0) {
    return;
  }
  if ((*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) + 1 < 0x10000) {
    (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) = (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) + 1;
    return;
  }
  (*(uint *)(((uintptr_t)pf_module_state+0x43e5U))) = 0;
  (*(int *)(((uintptr_t)pf_module_state+0x43e1U))) = 1;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
    (*_DAT_0000689c)();
  }
  (*(int *)(((uintptr_t)pf_module_state+0x43e1U))) = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef DAT_0024e594
#undef DAT_0024e598
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e860
 */

void recovered_1003e860(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e870
 */

void recovered_1003e870(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003ce50((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e890
 */

void recovered_1003e890(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003cd70((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e8b0
 */

longdouble recovered_1003e8b0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003cf00(CONCAT44(param_2,param_1));
  return (longdouble)(float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003e8e0
 */

longdouble recovered_1003e8e0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003cf70(CONCAT44(param_2,param_1));
  return (longdouble)(float)dVar1;
}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003e910(uint8_t *pointer,...){pf_snow_atomic_enter();uint8_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003e940(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003e970(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003e9a0(uint8_t *pointer,uint8_t *expected,uint8_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003e9e0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003ea20(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003ea60(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003eaa0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003eae0(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_1003eb20(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003eb60(uint16_t *pointer,...){pf_snow_atomic_enter();uint16_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003eb90(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ebc0(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003ec00(uint16_t *pointer,uint16_t *expected,uint16_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ec50(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ec90(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ecd0(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ed10(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ed50(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1003ed90(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003edd0(uint32_t *pointer,...){pf_snow_atomic_enter();uint32_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003ee00(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003ee30(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003ee60(uint32_t *pointer,uint32_t *expected,uint32_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003eea0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003eee0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003ef20(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003ef60(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003efa0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_1003efe0(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f020(uint64_t *pointer,...){pf_snow_atomic_enter();uint64_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003f050(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f090(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f0d0(uint64_t *pointer,uint64_t *expected,uint64_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f130(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f170(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f1b0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f1f0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f230(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f270(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
bool recovered_1003f2b0(uint8_t *pointer,...){pf_snow_atomic_enter();bool old=*pointer!=0;*pointer=1;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003f2f0(uint8_t *pointer,...){pf_snow_atomic_enter();*pointer=0;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003f320(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)value[i]=pointer[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003f370(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)pointer[i]=value[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_1003f3c0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++){uint8_t old=pointer[i];pointer[i]=value[i];out[i]=old;}pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_1003f440(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...){pf_snow_atomic_enter();uint64_t result=value!=0;if(value){for(size_t i=0;i<size;i++)if(pointer[i]!=value[i])result=0;for(size_t i=0;i<size;i++){if(result)pointer[i]=desired[i];else value[i]=pointer[i];}}pf_snow_atomic_leave();return result;}


#undef DAT_0024e074
#define DAT_0024e074 (*(uint8_t *)(0x24e074U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f4d0
 */

void recovered_1003f4d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_1003bbf0((void *)((uintptr_t)pf_module_state+0x34a9U),(void *)param_1,0xa18);
  (*(uint8_t *)(((uintptr_t)pf_module_state+0x3ec1U))) = 1;
  recovered_1003f510((char *)((uintptr_t)pf_module_state+0x38c7U));
  return;
}

#undef DAT_0024e074

#undef DAT_0024d558
#define DAT_0024d558 (*(uint8_t *)(0x24d558U))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f510
 */

void recovered_1003f510(char *text)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;

  recovered_1003be80((void *)((uintptr_t)pf_module_state+0x43edU),0,0x800);
  recovered_1003be80(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x33a5U))),0,0x104);
  if (text != (char *)0x0) {
    cVar3 = *text;
    if (cVar3 == '\0') {
      local_14 = 0;
    }
    else {
      uVar2 = 0;
      local_14 = 0;
      do {
        iVar4 = 0;
        pcVar5 = text;
        while ((cVar3 != '\0' && (cVar3 != '\n'))) {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          iVar4 = iVar4 + -1;
          cVar3 = *pcVar1;
        }
        if ((iVar4 != 0) && (uVar6 = (uVar2 - iVar4) + 1, uVar6 < 0x800)) {
          *(void **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x33a5U))) + local_14 * 4) = (void *)(uVar2 + ((uintptr_t)pf_module_state+0x43edU));
          local_14 = local_14 + 1;
          recovered_1003bbf0((void *)(uVar2 + ((uintptr_t)pf_module_state+0x43edU)),text,-iVar4);
          cVar3 = *pcVar5;
          uVar2 = uVar6;
        }
        bVar7 = cVar3 == '\n';
        cVar3 = pcVar5[bVar7];
      } while ((cVar3 != '\0') && (text = pcVar5 + bVar7, local_14 < 0x40));
    }
    *(undefined4 *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x33a5U))) + local_14 * 4) = 0;
  }
  return;
}

#undef DAT_0024d558
#undef local_14

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_20 (*(uint *)(frame + 784))
#define local_1c (*(undefined * *)(frame + 788))
#define local_16 (*(byte *)(frame + 794))
#define local_15 (*(byte *)(frame + 795))
#define local_14 (*(undefined4 * *)(frame + 796))
#define local_312 (*(char (*)[241])(frame + 30))
#define local_221 (*(char (*)[241])(frame + 271))
#define local_130 (*(void * *)(frame + 512))
#define local_12c (*(uint *)(frame + 516))
#define local_124 (*(undefined4 *)(frame + 524))
#define local_120 (*(char (*)[244])(frame + 528))
#define local_2c (*(void * *)(frame + 772))
#define local_28 (*(uint *)(frame + 776))
#define local_24 (*(undefined4 *)(frame + 780))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_1003f610(char *path,char *mode)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined4 *pointer;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *destination;
  byte *pbVar7;
  char *pcVar8;

  local_1c = recovered_1003f970();
  if (mode == (char *)0x0) {
LAB_1003f7e5:
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return (void *)0x0;
  }
  pbVar7 = (byte *)mode;
  do {
    local_20 = (uint)*pbVar7;
    if (local_20 == 0x77) break;
    pbVar7 = pbVar7 + 1;
  } while (local_20 != 0);
  pcVar8 = mode;
  do {
    cVar1 = *pcVar8;
    if (cVar1 == 'a') break;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  do {
    cVar2 = *mode;
    if (cVar2 == '+') break;
    mode = mode + 1;
  } while (cVar2 != '\0');
  if (path == (char *)0x0 || local_1c == (undefined *)0x0) goto LAB_1003f7e5;
  uVar4 = recovered_1003fb20((int)local_1c,path,local_312);
  if ((char)uVar4 == '\0') {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x3f;
    return (void *)0x0;
  }
  local_14 = recovered_1003bb30(0x124);
  if (local_14 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
    return (void *)0x0;
  }
  recovered_1003be80(local_14,0,0x124);
  local_16 = cVar2 == '\0' && cVar1 == '\0';
  local_15 = (char)local_20 != '\0';
  uVar5 = 3;
  if (!(bool)local_15) {
    uVar5 = (uint)(cVar2 != '\0' || cVar1 != '\0') * 2 + 1;
  }
  *local_14 = 0x54474c46;
  local_14[1] = 4;
  if (cVar1 != '\0') {
    uVar5 = uVar5 | 4;
  }
  local_14[2] = uVar5;
  local_14[3] = 0xffffffff;
  local_14[5] = 0xffffffff;
  pf_varargs_1003e570__4_((char *)(local_14 + 6),0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_312);
  if ((local_16 & local_15) != 0) goto LAB_1003f917;
  recovered_1003be80(&local_130,0,0x104);
  uVar4 = recovered_1003fb20((int)local_1c,local_312,local_221);
  if ((char)uVar4 != '\0') {
    recovered_1003be80(&local_2c,0,0xc);
    iVar6 = recovered_10042700((int)local_1c,local_221,(int)&local_2c);
    if (local_2c != (void *)0x0 && iVar6 != 0) {
      local_130 = local_2c;
      local_12c = local_28;
      local_124 = local_24;
      pf_varargs_1003e570__4_(local_120,0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_221);
      local_14[0x43] = local_130;
      local_14[0x44] = local_12c;
      if (cVar1 == '\0') {
        if (cVar2 == '\0' || local_12c == 0) goto LAB_1003f917;
      }
      else if (local_12c == 0) goto LAB_1003f917;
      uVar5 = local_14[0x47];
      if (uVar5 < local_12c) {
        uVar3 = 0x100;
        if (uVar5 != 0) {
          uVar3 = uVar5;
        }
        do {
          uVar5 = uVar3;
          uVar3 = uVar5 * 2;
        } while (uVar5 < local_12c);
        destination = recovered_1003bbb0((void *)local_14[0x45],uVar5);
        if (destination == (void *)0x0) {
          *(undefined1 *)((int)local_14 + 0x11) = 1;
          uVar4 = 0xc;
          goto LAB_1003f7d0;
        }
        local_14[0x45] = destination;
        local_14[0x47] = uVar5;
      }
      else {
        destination = (void *)local_14[0x45];
      }
      recovered_1003bbf0(destination,local_130,local_12c);
      local_14[0x46] = local_12c;
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = local_12c;
      }
      local_14[0x48] = uVar5;
      goto LAB_1003f917;
    }
  }
  if ((cVar1 == '\0' && (char)local_20 == '\0') && cVar2 == '\0') {
    uVar4 = 2;
LAB_1003f7d0:
    recovered_1003bb70(local_14);
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = uVar4;
    return (void *)0x0;
  }
LAB_1003f917:
  iVar6 = recovered_1003fdc0((int)local_14);
  pointer = local_14;
  if (iVar6 < 0) {
    recovered_1003bb70((void *)local_14[0x45]);
    recovered_1003bb70(pointer);
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x18;
    return (void *)0x0;
  }
  return local_14;
}

#undef DAT_0024d024
#undef local_20
#undef local_1c
#undef local_16
#undef local_15
#undef local_14
#undef local_312
#undef local_221
#undef local_130
#undef local_12c
#undef local_124
#undef local_120
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_0024d769
#define DAT_0024d769 (*(uint8_t *)(0x24d769U))
#undef DAT_0024dc7c
#define DAT_0024dc7c (*(uint8_t *)(0x24dc7cU))
#undef DAT_0024dc80
#define DAT_0024dc80 (*(uint8_t *)(0x24dc80U))
#undef DAT_0024dd80
#define DAT_0024dd80 (*(uint8_t *)(0x24dd80U))
#undef DAT_0024e074
#define DAT_0024e074 (*(char *)(0x24e074U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f970
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x1003fa8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * recovered_1003f970(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;

  puVar1 = (undefined *)((uintptr_t)pf_module_state+0x34a9U);
  if ((*(char *)(((uintptr_t)pf_module_state+0x3ec1U))) == '\0') {
    recovered_1003be80((void *)((uintptr_t)pf_module_state+0x34a9U),0,0xa18);
    recovered_1003be80((void *)((uintptr_t)pf_module_state+0x34a9U),0,0xa18);
    puVar1 = (undefined *)0x0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006944)(((uintptr_t)pf_module_state+0x34a9U));
      puVar1 = (undefined *)0x0;
      if (iVar2 != 0) {
        pf_varargs_1003e570__4_((char *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3bcdU))),0x200,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x36c7U));
        if ((*(uint8_t *)(((uintptr_t)pf_module_state+0x3bcdU))) == 0) {
          uVar7 = 0;
        }
        else {
          pbVar3 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x3bcdU)));
          uVar5 = 0;
          bVar6 = (*(uint8_t *)(((uintptr_t)pf_module_state+0x3bcdU)));
          while( true ) {
            switch((uintptr_t)(bVar6)) {
            case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
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
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 9:
            case 10:
            case 0xd:
            case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            case 0x22:
            case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar7 = uVar5 + 1;
            *(byte **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3acdU))) + uVar5 * 4) = pbVar3;
            bVar6 = *pbVar3;
            if (bVar6 == 0) break;
            pbVar4 = pbVar3;
            while( true ) {
              pbVar3 = pbVar4 + 1;
              if ((bVar6 - 9 < 0x18) && ((0x800013U >> (bVar6 - 9 & 0x1f) & 1) != 0)) break;
              bVar6 = *pbVar3;
              pbVar4 = pbVar3;
              if (bVar6 == 0) goto LAB_1003fac9;
            }
            *pbVar4 = 0;
            bVar6 = *pbVar3;
            if ((bVar6 == 0) || (bVar8 = 0x3e < uVar5, uVar5 = uVar7, bVar8)) break;
          }
        }
LAB_1003fac9:
        puVar1 = (undefined *)((uintptr_t)pf_module_state+0xd10U);
        if ((*(uint8_t *)(((uintptr_t)pf_module_state+0x35b6U))) != '\0') {
          puVar1 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x35b6U)));
        }
        (*(uint *)(((uintptr_t)pf_module_state+0x3ac9U))) = uVar7;
        pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x3dcdU),0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)puVar1);
        (*(char *)(((uintptr_t)pf_module_state+0x3ec1U))) = '\x01';
        recovered_1003f510((char *)((uintptr_t)pf_module_state+0x38c7U));
        puVar1 = (undefined *)((uintptr_t)pf_module_state+0x34a9U);
      }
    }
  }
  return puVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_0024d769
#undef DAT_0024dc7c
#undef DAT_0024dc80
#undef DAT_0024dd80
#undef DAT_0024e074
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944

#undef DAT_0024b7aa
#define DAT_0024b7aa (*(uint8_t *)(0x24b7aaU))
#define local_14 (*(undefined4 * *)(frame + 796))
#define local_300 (*(undefined4 (*)[64])(frame + 48))
#define local_1fe (*(char *)(frame + 306))
#define local_1fd (*(char (*)[240])(frame + 307))
#define local_10d (*(char (*)[241])(frame + 547))
#define local_1c (*(uint *)(frame + 788))
#define local_18 (*(uint *)(frame + 792))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fb20
 */

undefined4 recovered_1003fb20(int in_ECX,char *in_EDX,undefined1 *param_3)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined3 uVar8;
  undefined4 uVar7;
  char *pcVar9;
  char *pcVar10;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  pcVar9 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x15f7U)));
  if (((in_EDX == (char *)0x0) || (cVar1 = *in_EDX, cVar1 == '\0')) ||
     ((pcVar9 = in_EDX, cVar1 != '\\' && (cVar1 != '/')))) {
    pcVar10 = (char *)((uintptr_t)pf_module_state+0xd10U);
    if (*(char *)(in_ECX + 0x924) != '\0') {
      pcVar10 = (char *)(in_ECX + 0x924);
    }
    iVar3 = recovered_1003c320(pcVar10,(char *)((uintptr_t)pf_module_state+0xd10U));
    if (iVar3 == 0) {
      pcVar10 = (char *)((uintptr_t)pf_module_state+0x27d2U);
      goto LAB_1003fbbe;
    }
    pf_varargs_1003e570__4__4_(local_10d,0xf1,(char *)((uintptr_t)pf_module_state+0x27d6U),(uint)pcVar10,(uint)pcVar9);
  }
  else {
    pcVar10 = (char *)((uintptr_t)pf_module_state+0xd0dU);
LAB_1003fbbe:
    pf_varargs_1003e570__4_(local_10d,0xf1,pcVar10,(uint)pcVar9);
  }
  pcVar9 = &local_1fe;
  pf_varargs_1003e570__4_(pcVar9,0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_10d);
  uVar6 = 0;
  if (local_1fe != '\0') {
    while( true ) {
      while ((local_1fe == '/' || (local_1fe == '\\'))) {
        pcVar10 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        local_1fe = *pcVar10;
      }
      pcVar10 = pcVar9;
      if (local_1fe == '\0') break;
      do {
        if ((local_1fe == '/') || (local_1fe == '\\')) {
          local_14 = (undefined4 *)0x1;
          goto LAB_1003fc68;
        }
        local_1fe = pcVar10[1];
        pcVar10 = pcVar10 + 1;
      } while (local_1fe != '\0');
      local_14 = (undefined4 *)0x0;
LAB_1003fc68:
      local_18 = uVar6;
      *pcVar10 = '\0';
      iVar3 = recovered_1003c320(pcVar9,&(*(uint8_t *)(((uintptr_t)pf_module_state+0x15f7U))));
      if (iVar3 == 0) {
        uVar6 = local_18;
        uVar2 = (uint)local_14 & 0xff;
      }
      else {
        local_1c = (uint)local_14 & 0xff;
        iVar3 = recovered_1003c320(pcVar9,(char *)((uintptr_t)pf_module_state+0x27dcU));
        uVar6 = local_18;
        if (iVar3 == 0) {
          uVar6 = 0;
          if (local_18 != 0) {
            uVar6 = local_18 - 1;
          }
          uVar2 = local_1c;
        }
        else {
          local_300[local_18] = pcVar9;
          uVar6 = uVar6 + 1;
          uVar2 = local_1c;
        }
      }
      pcVar9 = pcVar10 + uVar2;
      if ((((char)local_14 == '\0') || (local_1fe = *pcVar9, local_1fe == '\0')) || (0x3f < uVar6))
      break;
    }
  }
  uVar8 = (undefined3)((uint)param_3 >> 8);
  if (uVar6 == 0) {
    uVar7 = CONCAT31(uVar8,1);
LAB_1003fd98:
    pf_varargs_1003e570___(param_3,0xf1,(char *)((uintptr_t)pf_module_state+0xd10U));
  }
  else {
    if (uVar6 == 0x40) {
      for (; (cVar1 = *pcVar9, cVar1 == '/' || (cVar1 == '\\')); pcVar9 = pcVar9 + 1) {
      }
      if (cVar1 != '\0') {
LAB_1003fd96:
        uVar7 = 0;
        goto LAB_1003fd98;
      }
      *param_3 = 0;
    }
    else {
      *param_3 = 0;
    }
    local_14 = local_300;
    do {
      local_18 = uVar6;
      uVar4 = recovered_1003c2f0(param_3);
      pcVar9 = (char *)*local_14;
      uVar5 = recovered_1003c2f0(pcVar9);
      if (0xf1 < uVar4 + 2 + uVar5) goto LAB_1003fd96;
      param_3[uVar4] = 0x2f;
      pf_varargs_1003e570__4_(param_3 + uVar4 + 1,0xf0 - uVar4,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)pcVar9);
      local_14 = local_14 + 1;
      uVar6 = local_18 - 1;
    } while (uVar6 != 0);
    uVar7 = CONCAT31(uVar8,1);
  }
  return uVar7;
}

#undef DAT_0024b7aa
#undef local_14
#undef local_300
#undef local_1fe
#undef local_1fd
#undef local_10d
#undef local_1c
#undef local_18

#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
#undef DAT_0024d4d4
#define DAT_0024d4d4 (*(uint8_t *)(0x24d4d4U))
#undef DAT_0024d4d8
#define DAT_0024d4d8 (*(uint8_t *)(0x24d4d8U))
#undef DAT_0024d4dc
#define DAT_0024d4dc (*(uint8_t *)(0x24d4dcU))
#undef DAT_0024d4e0
#define DAT_0024d4e0 (*(uint8_t *)(0x24d4e0U))
#undef DAT_0024d4e4
#define DAT_0024d4e4 (*(uint8_t *)(0x24d4e4U))
#undef DAT_0024d4e8
#define DAT_0024d4e8 (*(uint8_t *)(0x24d4e8U))
#undef DAT_0024d4ec
#define DAT_0024d4ec (*(uint8_t *)(0x24d4ecU))
#undef DAT_0024d4f0
#define DAT_0024d4f0 (*(uint8_t *)(0x24d4f0U))
#undef DAT_0024d4f4
#define DAT_0024d4f4 (*(uint8_t *)(0x24d4f4U))
#undef DAT_0024d4f8
#define DAT_0024d4f8 (*(uint8_t *)(0x24d4f8U))
#undef DAT_0024d4fc
#define DAT_0024d4fc (*(uint8_t *)(0x24d4fcU))
#undef DAT_0024d500
#define DAT_0024d500 (*(uint8_t *)(0x24d500U))
#undef DAT_0024d504
#define DAT_0024d504 (*(uint8_t *)(0x24d504U))
#undef DAT_0024d508
#define DAT_0024d508 (*(uint8_t *)(0x24d508U))
#undef DAT_0024d50c
#define DAT_0024d50c (*(uint8_t *)(0x24d50cU))
#undef DAT_0024d510
#define DAT_0024d510 (*(uint8_t *)(0x24d510U))
#undef DAT_0024d514
#define DAT_0024d514 (*(uint8_t *)(0x24d514U))
#undef DAT_0024d518
#define DAT_0024d518 (*(uint8_t *)(0x24d518U))
#undef DAT_0024d51c
#define DAT_0024d51c (*(uint8_t *)(0x24d51cU))
#undef DAT_0024d520
#define DAT_0024d520 (*(uint8_t *)(0x24d520U))
#undef DAT_0024d524
#define DAT_0024d524 (*(uint8_t *)(0x24d524U))
#undef DAT_0024d528
#define DAT_0024d528 (*(uint8_t *)(0x24d528U))
#undef DAT_0024d52c
#define DAT_0024d52c (*(uint8_t *)(0x24d52cU))
#undef DAT_0024d530
#define DAT_0024d530 (*(uint8_t *)(0x24d530U))
#undef DAT_0024d534
#define DAT_0024d534 (*(uint8_t *)(0x24d534U))
#undef DAT_0024d538
#define DAT_0024d538 (*(uint8_t *)(0x24d538U))
#undef DAT_0024d53c
#define DAT_0024d53c (*(uint8_t *)(0x24d53cU))
#undef DAT_0024d540
#define DAT_0024d540 (*(uint8_t *)(0x24d540U))
#undef DAT_0024d544
#define DAT_0024d544 (*(uint8_t *)(0x24d544U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fdc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1003fdc0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((*(int *)(((uintptr_t)pf_module_state+0x3321U))) == 0) {
    iVar1 = 3;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3325U))) == 0) {
    iVar1 = 4;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3329U))) == 0) {
    iVar1 = 5;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x332dU))) == 0) {
    iVar1 = 6;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3331U))) == 0) {
    iVar1 = 7;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3335U))) == 0) {
    iVar1 = 8;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3339U))) == 0) {
    iVar1 = 9;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x333dU))) == 0) {
    iVar1 = 10;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3341U))) == 0) {
    iVar1 = 0xb;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3345U))) == 0) {
    iVar1 = 0xc;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3349U))) == 0) {
    iVar1 = 0xd;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x334dU))) == 0) {
    iVar1 = 0xe;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3351U))) == 0) {
    iVar1 = 0xf;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3355U))) == 0) {
    iVar1 = 0x10;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3359U))) == 0) {
    iVar1 = 0x11;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x335dU))) == 0) {
    iVar1 = 0x12;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3361U))) == 0) {
    iVar1 = 0x13;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3365U))) == 0) {
    iVar1 = 0x14;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3369U))) == 0) {
    iVar1 = 0x15;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x336dU))) == 0) {
    iVar1 = 0x16;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3371U))) == 0) {
    iVar1 = 0x17;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3375U))) == 0) {
    iVar1 = 0x18;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3379U))) == 0) {
    iVar1 = 0x19;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x337dU))) == 0) {
    iVar1 = 0x1a;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3381U))) == 0) {
    iVar1 = 0x1b;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3385U))) == 0) {
    iVar1 = 0x1c;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x3389U))) == 0) {
    iVar1 = 0x1d;
  }
  else if ((*(int *)(((uintptr_t)pf_module_state+0x338dU))) == 0) {
    iVar1 = 0x1e;
  }
  else {
    if ((*(int *)(((uintptr_t)pf_module_state+0x3391U))) != 0) {
      return -1;
    }
    iVar1 = 0x1f;
  }
  *(int *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + iVar1 * 4) = in_ECX;
  *(int *)(in_ECX + 0xc) = iVar1;
  return iVar1;
}

#undef DAT_0024d4c8
#undef DAT_0024d4d4
#undef DAT_0024d4d8
#undef DAT_0024d4dc
#undef DAT_0024d4e0
#undef DAT_0024d4e4
#undef DAT_0024d4e8
#undef DAT_0024d4ec
#undef DAT_0024d4f0
#undef DAT_0024d4f4
#undef DAT_0024d4f8
#undef DAT_0024d4fc
#undef DAT_0024d500
#undef DAT_0024d504
#undef DAT_0024d508
#undef DAT_0024d50c
#undef DAT_0024d510
#undef DAT_0024d514
#undef DAT_0024d518
#undef DAT_0024d51c
#undef DAT_0024d520
#undef DAT_0024d524
#undef DAT_0024d528
#undef DAT_0024d52c
#undef DAT_0024d530
#undef DAT_0024d534
#undef DAT_0024d538
#undef DAT_0024d53c
#undef DAT_0024d540
#undef DAT_0024d544

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d264
#define DAT_0024d264 (*(uint8_t *)(0x24d264U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10040040(char *path,char *mode,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  int iVar1;
  void *pvVar2;

  if (stream == (void *)0x0) goto LAB_1004011b;
  if (*(int *)stream != 0x54474c46) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    goto LAB_1004011b;
  }
  in_ECX = recovered_1003f970();
  if (*(int *)stream == 0x54474c46) {
    if ((2 < *(int *)((int)stream + 4) - 1U) && (*(char *)((int)stream + 0x12) == '\x01')) {
      if (in_ECX != (undefined *)0x0) {
        iVar1 = recovered_100403d0((int)in_ECX,(char *)((int)stream + 0x18),
                                   *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118));
        if (iVar1 != 0) {
          *(undefined1 *)((int)stream + 0x12) = 0;
          goto LAB_100400c2;
        }
      }
      *(undefined1 *)((int)stream + 0x11) = 1;
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
    }
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
LAB_100400c2:
  if (*(uint *)((int)stream + 0xc) < 0x20) {
    *(undefined4 *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + *(uint *)((int)stream + 0xc) * 4) = 0;
  }
  if ((((*(void * *)(((uintptr_t)pf_module_state+0x30b1U))) != stream) && ((*(void * *)(((uintptr_t)pf_module_state+0x31d9U))) != stream)) && ((*(void * *)(((uintptr_t)pf_module_state+0x3301U))) != stream)) {
    recovered_1003bb70(*(void **)((int)stream + 0x114));
    recovered_1003be80(stream,0,0x124);
    recovered_1003bb70(stream);
  }
LAB_1004011b:
  pvVar2 = recovered_1003f610(path,mode);
  return pvVar2;
}

#undef DAT_0024d024
#undef DAT_0024d264
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d264
#define DAT_0024d264 (*(uint8_t *)(0x24d264U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040140(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = recovered_10040310(stream);
    if (*(uint *)((int)stream + 0xc) < 0x20) {
      *(undefined4 *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + *(uint *)((int)stream + 0xc) * 4) = 0;
    }
    if ((((*(void * *)(((uintptr_t)pf_module_state+0x30b1U))) != stream) && ((*(void * *)(((uintptr_t)pf_module_state+0x31d9U))) != stream)) && ((*(void * *)(((uintptr_t)pf_module_state+0x3301U))) != stream)) {
      recovered_1003bb70(*(void **)((int)stream + 0x114));
      recovered_1003be80(stream,0,0x124);
      recovered_1003bb70(stream);
    }
  }
  return iVar1;
}

#undef DAT_0024d024
#undef DAT_0024d264
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef DAT_0024d4c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100401e0
 */

void recovered_100401e0(int in_stack_00000004,byte *in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003f610((char *)in_stack_00000004,(char *)in_stack_00000008);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100401f0
 */

void recovered_100401f0(int in_stack_00000004,byte *in_stack_00000008,int *in_stack_0000000c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040040((char *)in_stack_00000004,(char *)in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10040200(int fd,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;

  if ((((0x1f < (uint)fd) || (piVar2 = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + fd * 4), piVar2 == (int *)0x0)) ||
      (mode == (char *)0x0)) || (*piVar2 != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return (void *)0x0;
  }
  pcVar4 = mode;
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
      pcVar4 = mode;
      goto LAB_10040260;
    }
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != 'w');
  goto LAB_1004028d;
  while (pcVar4 = pcVar4 + 1, cVar1 != 'a') {
LAB_10040260:
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
      pcVar4 = mode;
      goto LAB_10040280;
    }
  }
  goto LAB_1004028d;
  while (pcVar4 = pcVar4 + 1, cVar1 != '+') {
LAB_10040280:
    cVar1 = *pcVar4;
    if (cVar1 == '\0') goto LAB_100402a0;
  }
LAB_1004028d:
  *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) | 2;
LAB_100402a0:
  do {
    cVar1 = *mode;
    if (cVar1 == '\0') {
      return piVar2;
    }
    mode = mode + 1;
  } while (cVar1 != 'a');
  *(byte *)(piVar2 + 2) = *(byte *)(piVar2 + 2) | 4;
  uVar3 = piVar2[0x46];
  if ((uint)piVar2[0x46] <= (uint)piVar2[0x44]) {
    uVar3 = piVar2[0x44];
  }
  piVar2[0x48] = uVar3;
  return piVar2;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100402d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_100402d0(char *command,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return (void *)0x0;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100402f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100402f0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return -1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d548
#define DAT_0024d548 (*(uint8_t *)(0x24d548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040310(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  int iVar1;

  in_ECX = recovered_1003f970();
  if (stream == (void *)0x0) {
    iVar1 = -0x80;
    do {
      if (*(void **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3395U))) + iVar1) != (void *)0x0) {
        recovered_10040310(*(void **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3395U))) + iVar1));
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0);
LAB_10040399:
    iVar1 = 0;
  }
  else {
    if (*(int *)stream == 0x54474c46) {
      if ((*(int *)((int)stream + 4) - 1U < 3) || (*(char *)((int)stream + 0x12) != '\x01'))
      goto LAB_10040399;
      if ((in_ECX != (undefined *)0x0) &&
         (iVar1 = recovered_100403d0((int)in_ECX,(char *)((int)stream + 0x18),
                                     *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118)),
         iVar1 != 0)) {
        *(undefined1 *)((int)stream + 0x12) = 0;
        return 0;
      }
      *(undefined1 *)((int)stream + 0x11) = 1;
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
    }
    else {
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    }
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_0024d024
#undef DAT_0024d548

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef DAT_000068d0
#define DAT_000068d0 (*(uint8_t *)(0x68d0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
#undef _DAT_000068d0
#define _DAT_000068d0 (*(code * *)(0x68d0U))
#define in_stack_fffffe00 (*(char * *)(frame + 32))
#define format (*(char * *)(frame + 28))
#define local_1fa (*(char (*)[241])(frame + 38))
#define local_109 (*(char (*)[249])(frame + 279))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100403d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100403d0(int in_ECX,char *in_EDX,int param_3,int param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if (((in_ECX != 0) && (-1 < *(int *)(in_ECX + 0x14))) && (param_3 != 0 || param_4 == 0)) {
    local_109[0] = '\0';
    uVar1 = recovered_1003fb20(in_ECX,in_EDX,local_1fa);
    if ((char)uVar1 == '\0') {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_1003c320(local_1fa,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar2 == 0) {
        format = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        format = (char *)((uintptr_t)pf_module_state+0x27c9U);
        in_stack_fffffe00 = local_1fa;
      }
      pf_varargs_1003e570__4_(local_109,0xf9,format,(uint)in_stack_fffffe00);
      uVar1 = 0;
      if (local_109[0] != '\0') {
        if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
           ((0xb < _DAT_00006808 && (0xd3 < _DAT_00006808)))) {
          if (_DAT_000068d0 != (code *)0x0) {
            uVar1 = (*_DAT_000068d0)(*(undefined4 *)(in_ECX + 0x14),local_109,param_3,param_4);
          }
        }
        else if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
                ((0xb < _DAT_00006808 && ((0x3b < _DAT_00006808 && (_DAT_00006838 != (code *)0x0))))
                )) {
          uVar1 = (*_DAT_00006838)(local_109,param_3,param_4);
        }
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef DAT_000068d0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838
#undef _DAT_000068d0
#undef in_stack_fffffe00
#undef format
#undef local_1fa
#undef local_109

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040520
 */

void recovered_10040520(int *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040310(in_stack_00000004);
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d264
#define DAT_0024d264 (*(uint8_t *)(0x24d264U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10040530(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return 0xffffffff;
  }
  in_ECX = recovered_1003f970();
  if (*param_1 == 0x54474c46) {
    uVar1 = 0;
    if ((param_1[1] - 1U < 3) || (*(char *)((int)param_1 + 0x12) != '\x01')) goto LAB_100405c3;
    if (in_ECX != (undefined *)0x0) {
      iVar2 = recovered_100403d0((int)in_ECX,(char *)(param_1 + 6),param_1[0x45],param_1[0x46]);
      uVar1 = 0;
      if (iVar2 != 0) {
        *(undefined1 *)((int)param_1 + 0x12) = 0;
        goto LAB_100405c3;
      }
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  uVar1 = 0xffffffff;
LAB_100405c3:
  if ((uint)param_1[3] < 0x20) {
    *(undefined4 *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1[3] * 4) = 0;
  }
  if ((((*(int * *)(((uintptr_t)pf_module_state+0x30b1U))) != param_1) && ((*(int * *)(((uintptr_t)pf_module_state+0x31d9U))) != param_1)) && ((*(int * *)(((uintptr_t)pf_module_state+0x3301U))) != param_1)) {
    recovered_1003bb70((void *)param_1[0x45]);
    recovered_1003be80(param_1,0,0x124);
    recovered_1003bb70(param_1);
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024d264
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef DAT_0024d4c8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000694c
#define DAT_0000694c (*(uint8_t *)(0x694cU))
#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024eda0
#define DAT_0024eda0 (*(uint8_t *)(0x24eda0U))
#undef DAT_0024eda4
#define DAT_0024eda4 (*(uint8_t *)(0x24eda4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000694c
#define _DAT_0000694c (*(code * *)(0x694cU))
#define local_213 (*(undefined1 (*)[511])(frame + 29))
#define local_14 (*(uint *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10040640(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint count_00;
  int iVar3;
  uint uVar4;

  if (stream == (void *)0x0 || ptr == (void *)0x0) {
    return 0;
  }
  if (count == 0) {
    return 0;
  }
  if (size == 0) {
    return 0;
  }
  if (*(int *)stream != 0x54474c46) {
    return 0;
  }
  uVar4 = count * size;
  if (*(int *)((int)stream + 4) == 1) {
    if (uVar4 == 0) {
      return 0;
    }
    if ((*(uint *)(((uintptr_t)pf_module_state+0x4bf1U))) <= (*(uint *)(((uintptr_t)pf_module_state+0x4bedU)))) {
      local_213[0] = 0;
      if (_DAT_00006800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_00006804 == 0) {
        return 0;
      }
      if (_DAT_00006808 < 0xc) {
        return 0;
      }
      if (_DAT_00006808 < 0x150) {
        return 0;
      }
      if (_DAT_0000694c == (code *)0x0) {
        return 0;
      }
      iVar3 = (*_DAT_0000694c)(0,local_213,0x1ff,&(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U))),0);
      if (iVar3 == 0) {
        return 0;
      }
      pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4bf5U),0x200,(char *)((uintptr_t)pf_module_state+0x2de8U),(uint)local_213);
      (*(uint *)(((uintptr_t)pf_module_state+0x4bedU))) = 0;
      (*(uint *)(((uintptr_t)pf_module_state+0x4bf1U))) = recovered_1003c2f0((char *)((uintptr_t)pf_module_state+0x4bf5U));
    }
    uVar1 = (*(uint *)(((uintptr_t)pf_module_state+0x4bedU)));
    count_00 = (*(uint *)(((uintptr_t)pf_module_state+0x4bf1U))) - (*(uint *)(((uintptr_t)pf_module_state+0x4bedU)));
    if (uVar4 <= (*(uint *)(((uintptr_t)pf_module_state+0x4bf1U))) - (*(uint *)(((uintptr_t)pf_module_state+0x4bedU)))) {
      count_00 = uVar4;
    }
    local_14 = (*(uint *)(((uintptr_t)pf_module_state+0x4bf1U)));
    recovered_1003bbf0(ptr,(void *)((*(uint *)(((uintptr_t)pf_module_state+0x4bedU))) + ((uintptr_t)pf_module_state+0x4bf5U)),count_00);
    (*(uint *)(((uintptr_t)pf_module_state+0x4bedU))) = (*(uint *)(((uintptr_t)pf_module_state+0x4bedU))) + count_00;
    if (local_14 == uVar1) {
      return 0;
    }
  }
  else if (uVar4 == 0 || *(int *)((int)stream + 0x14) == -1) {
    uVar1 = *(uint *)((int)stream + 0x120);
    local_14 = *(uint *)((int)stream + 0x110) - uVar1;
    if (*(uint *)((int)stream + 0x110) < uVar1 || local_14 == 0) {
      *(undefined1 *)((int)stream + 0x10) = 1;
      return 0;
    }
    count_00 = local_14;
    if (uVar4 <= local_14) {
      count_00 = uVar4;
    }
    recovered_1003bbf0(ptr,(void *)(uVar1 + *(int *)((int)stream + 0x10c)),count_00);
    *(int *)((int)stream + 0x120) = *(int *)((int)stream + 0x120) + count_00;
    if (local_14 < uVar4) {
      *(undefined1 *)((int)stream + 0x10) = 1;
    }
  }
  else {
    *(char *)ptr = (char)*(int *)((int)stream + 0x14);
    *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
    uVar2 = recovered_10040640((void *)((int)ptr + 1),1,uVar4 - 1,stream);
    count_00 = uVar2 + 1;
  }
  return count_00 / size;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000694c
#undef DAT_0024b1fa
#undef DAT_0024eda0
#undef DAT_0024eda4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000694c
#undef local_213
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006948
#define DAT_00006948 (*(uint8_t *)(0x6948U))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006948
#define _DAT_00006948 (*(code * *)(0x6948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10040820(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  ulong count_00;

  if ((((stream != (void *)0x0 && ptr != (void *)0x0) && (count != 0)) && (size != 0)) &&
     (*(int *)stream == 0x54474c46)) {
    count_00 = count * size;
    if ((*(uint *)((int)stream + 4) & 0xfffffffe) == 2) {
      uVar2 = 0;
      if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
         ((0xb < _DAT_00006808 && ((0x14b < _DAT_00006808 && (_DAT_00006948 != (code *)0x0)))))) {
        uVar2 = (*_DAT_00006948)((*(uint *)((int)stream + 4) == 3) + '\x01',ptr,count_00);
      }
      return uVar2 / size;
    }
    if ((*(byte *)((int)stream + 8) & 2) != 0) {
      uVar3 = *(uint *)((int)stream + 0x11c);
      iVar5 = *(int *)((int)stream + 0x120);
      uVar2 = iVar5 + count_00;
      if (uVar3 < uVar2) {
        uVar1 = 0x100;
        if (uVar3 != 0) {
          uVar1 = uVar3;
        }
        do {
          uVar3 = uVar1;
          uVar1 = uVar3 * 2;
        } while (uVar3 < uVar2);
        pvVar4 = recovered_1003bbb0(*(void **)((int)stream + 0x114),uVar3);
        if (pvVar4 == (void *)0x0) {
          *(undefined1 *)((int)stream + 0x11) = 1;
          *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
          return 0;
        }
        *(void **)((int)stream + 0x114) = pvVar4;
        *(uint *)((int)stream + 0x11c) = uVar3;
        iVar5 = *(int *)((int)stream + 0x120);
      }
      else {
        pvVar4 = *(void **)((int)stream + 0x114);
      }
      recovered_1003bbf0((void *)(iVar5 + (int)pvVar4),ptr,count_00);
      *(uint *)((int)stream + 0x120) = uVar2;
      if (*(uint *)((int)stream + 0x118) < uVar2) {
        *(uint *)((int)stream + 0x118) = uVar2;
      }
      *(undefined1 *)((int)stream + 0x12) = 1;
      return count;
    }
    *(undefined1 *)((int)stream + 0x11) = 1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006948
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006948

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040990
 */

void recovered_10040990(undefined1 *in_stack_00000004,uint in_stack_00000008,int in_stack_0000000c,
                       int *in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040640(in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100409a0
 */

void recovered_100409a0(int in_stack_00000004,uint in_stack_00000008,uint in_stack_0000000c,
                       int *in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10040820((void *)in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010
                    );
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100409b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100409b0(void *stream,long offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return -1;
  }
  uVar1 = 0;
  if (origin != 0) {
    if (origin == 2) {
      uVar1 = *(uint *)((int)stream + 0x118);
      if (*(uint *)((int)stream + 0x118) <= *(uint *)((int)stream + 0x110)) {
        uVar1 = *(uint *)((int)stream + 0x110);
      }
    }
    else {
      if (origin != 1) goto LAB_10040a0f;
      uVar1 = *(uint *)((int)stream + 0x120);
    }
  }
  if ((-1 < offset) || ((uint)-offset <= uVar1)) {
    *(uint *)((int)stream + 0x120) = uVar1 + offset;
    *(undefined1 *)((int)stream + 0x10) = 0;
    *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
    return 0;
  }
LAB_10040a0f:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return -1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10040a40(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return 0xffffffff;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    if (param_3 == 2) {
      uVar1 = param_1[0x46];
      if ((uint)param_1[0x46] <= (uint)param_1[0x44]) {
        uVar1 = param_1[0x44];
      }
    }
    else {
      if (param_3 != 1) goto LAB_10040a9f;
      uVar1 = param_1[0x48];
    }
  }
  if ((-1 < param_2) || ((uint)-param_2 <= uVar1)) {
    param_1[0x48] = uVar1 + param_2;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = -1;
    return 0;
  }
LAB_10040a9f:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10040ad0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return -1;
  }
  return *(long *)((int)stream + 0x120);
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040b00(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return -1;
  }
  return param_1[0x48];
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040b30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040b30(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return -1;
  }
  uVar1 = 0;
  if (origin != 0) {
    if (origin == 2) {
      uVar1 = *(uint *)((int)stream + 0x118);
      if (*(uint *)((int)stream + 0x118) <= *(uint *)((int)stream + 0x110)) {
        uVar1 = *(uint *)((int)stream + 0x110);
      }
    }
    else {
      if (origin != 1) goto LAB_10040b8f;
      uVar1 = *(uint *)((int)stream + 0x120);
    }
  }
  if ((-1 < (int)offset) || ((uint)-(int)offset <= uVar1)) {
    *(uint *)((int)stream + 0x120) = uVar1 + (int)offset;
    *(undefined1 *)((int)stream + 0x10) = 0;
    *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
    return 0;
  }
LAB_10040b8f:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return -1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10040bc0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)((int)stream + 0x120);
  }
  return (longlong)iVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040c00(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (pos == (long *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return -1;
  }
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)((int)stream + 0x120);
  }
  *pos = iVar1;
  return iVar1 >> 0x1f;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040c50(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (pos != (long *)0x0) {
    if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
      return -1;
    }
    if (-1 < *pos) {
      *(long *)((int)stream + 0x120) = *pos;
      *(undefined1 *)((int)stream + 0x10) = 0;
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      return 0;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return -1;
}

#undef DAT_0024d024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040cb0
 */

int recovered_10040cb0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    uVar1 = (uint)*(byte *)((int)stream + 0x10);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040cd0
 */

undefined1 recovered_10040cd0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    uVar1 = (undefined1)param_1[4];
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040cf0
 */

int recovered_10040cf0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    uVar1 = (uint)*(byte *)((int)stream + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040d10
 */

undefined1 recovered_10040d10(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040d30
 */

void recovered_10040d30(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream != (void *)0x0) && (*(int *)stream == 0x54474c46)) {
    *(undefined2 *)((int)stream + 0x10) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040d50
 */

void recovered_10040d50(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54474c46)) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040d70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040d70(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return -1;
  }
  return *(int *)((int)stream + 0xc);
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040da0(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  local_5 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  else {
    iVar1 = *(int *)((int)stream + 0x14);
    if (iVar1 != -1) {
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      return iVar1;
    }
    uVar2 = recovered_10040640(&local_5,1,1,stream);
    if (uVar2 == 1) {
      return (uint)local_5;
    }
  }
  return -1;
}

#undef DAT_0024d024
#undef local_5

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040e00(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  local_5 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  else {
    iVar1 = *(int *)((int)stream + 0x14);
    if (iVar1 != -1) {
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      return iVar1;
    }
    uVar2 = recovered_10040640(&local_5,1,1,stream);
    if (uVar2 == 1) {
      return (uint)local_5;
    }
  }
  return -1;
}

#undef DAT_0024d024
#undef local_5

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10040e60(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_5 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  else {
    uVar1 = param_1[5];
    if (uVar1 != 0xffffffff) {
      param_1[5] = -1;
      return uVar1;
    }
    uVar2 = recovered_10040640(&local_5,1,1,param_1);
    if (uVar2 == 1) {
      return (uint)local_5;
    }
  }
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_5

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000694c
#define DAT_0000694c (*(uint8_t *)(0x694cU))
#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000694c
#define _DAT_0000694c (*(code * *)(0x694cU))
#define local_6 (*(byte (*)[2])(frame + 26))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040ec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10040ec0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x14f < _DAT_00006808 && (_DAT_0000694c != (code *)0x0)))) {
    iVar1 = (*_DAT_0000694c)(0,local_6,2,&(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U))),0);
    bVar2 = 10;
    if (local_6[0] != 0) {
      bVar2 = local_6[0];
    }
    if (iVar1 != 0) {
      return (uint)bVar2;
    }
  }
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000694c
#undef DAT_0024b1fa
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000694c
#undef local_6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040f30
 */

int recovered_10040f30(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -1;
  if (((stream != (void *)0x0) && (ch != -1)) && (*(int *)stream == 0x54474c46)) {
    *(uint *)((int)stream + 0x14) = ch & 0xff;
    *(undefined1 *)((int)stream + 0x10) = 0;
    iVar1 = ch;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040f60
 */

uint recovered_10040f60(uint param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if (((param_2 != (int *)0x0) && (param_1 != 0xffffffff)) && (*param_2 == 0x54474c46)) {
    param_2[5] = param_1 & 0xff;
    *(undefined1 *)(param_2 + 4) = 0;
    uVar1 = param_1;
  }
  return uVar1;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10040f90(char *text,int count,void *stream)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;

  pcVar4 = (char *)0x0;
  if (((stream != (void *)0x0 && text != (char *)0x0) && 0 < count) &&
     (*(int *)stream == 0x54474c46)) {
    iVar3 = 0;
    do {
      if (count + -1 == iVar3) {
        iVar3 = count + -1;
        break;
      }
      local_11 = 0;
      if (*(int *)stream != 0x54474c46) {
        *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
        break;
      }
      uVar2 = *(uint *)((int)stream + 0x14);
      if (uVar2 == 0xffffffff) {
        uVar1 = recovered_10040640(&local_11,1,1,stream);
        if (uVar1 != 1) break;
        uVar2 = (uint)local_11;
      }
      else {
        *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      }
      text[iVar3] = (char)uVar2;
      iVar3 = iVar3 + 1;
    } while (uVar2 != 10);
    text[iVar3] = '\0';
    pcVar4 = (char *)0x0;
    if (iVar3 != 0) {
      pcVar4 = text;
    }
  }
  return pcVar4;
}

#undef DAT_0024d024
#undef local_11

#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041040
 */

int recovered_10041040(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_5 = (byte)ch;
  uVar1 = recovered_10040820(&local_5,1,1,stream);
  if (uVar1 == 1) {
    uVar2 = (uint)local_5;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef local_5

#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041080
 */

int recovered_10041080(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_5 = (byte)ch;
  uVar1 = recovered_10040820(&local_5,1,1,stream);
  if (uVar1 == 1) {
    uVar2 = (uint)local_5;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef local_5

#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#define local_5 (*(byte *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100410c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100410c0(int ch)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_5 = (byte)ch;
  uVar1 = recovered_10040820(&local_5,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x31d9U))));
  if (uVar1 == 1) {
    uVar2 = (uint)local_5;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_0024d38c
#undef local_5

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041100
 */

int recovered_10041100(char *text,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;

  if (text == (char *)0x0) {
    count = 0;
  }
  else {
    count = recovered_1003c2f0(text);
  }
  uVar1 = recovered_10040820(text,1,count,stream);
  return -(uint)(uVar1 != count);
}


#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10041150(char *text)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *stream;
  ulong uVar1;
  ulong uVar2;
  int iVar3;

  stream = (*(void * *)(((uintptr_t)pf_module_state+0x31d9U)));
  if (text == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1003c2f0(text);
  }
  uVar2 = recovered_10040820(text,1,uVar1,stream);
  iVar3 = -1;
  if (uVar2 == uVar1) {
    local_11 = 10;
    uVar1 = recovered_10040820(&local_11,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x31d9U))));
    iVar3 = -(uint)(uVar1 != 1);
  }
  return iVar3;
}

#undef DAT_0024d38c
#undef local_11

#define local_100c (*(char (*)[4096])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100411c0
 */

int recovered_100411c0(void *stream,char *format,void *args)

{
  unsigned char frame[4160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint count;

  uVar1 = recovered_1003db70(local_100c,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = uVar1;
    if (0xffe < uVar1) {
      count = 0xfff;
    }
    recovered_10040820(local_100c,1,count,stream);
  }
  return uVar1;
}

#undef local_100c

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_10041220(void *stream,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_100411c0(stream,format,(void *)args);__builtin_va_end(args);return result;}


#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#define local_1010 (*(char (*)[4096])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10041280(char *format,void *args)

{
  unsigned char frame[4160] __attribute__((aligned(16))) = {0};

  void *stream;
  uint uVar1;
  uint count;

  stream = (*(void * *)(((uintptr_t)pf_module_state+0x31d9U)));
  uVar1 = recovered_1003db70(local_1010,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = uVar1;
    if (0xffe < uVar1) {
      count = 0xfff;
    }
    recovered_10040820(local_1010,1,count,stream);
  }
  return uVar1;
}

#undef DAT_0024d38c
#undef local_1010

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_100412e0(char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10041280(format,(void *)args);__builtin_va_end(args);return result;}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10041340(char *buffer,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10041360(char *buffer,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);__builtin_va_end(args);return result;}


#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041390
 */

/* WARNING: Control flow encountered bad instruction data */

int recovered_10041390(char *buffer,char *format,void *args)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  if (buffer != (char *)0x0) {
    pcVar2 = buffer;
  }
  pcVar1 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  if (format != (char *)0x0) {
    pcVar1 = format;
  }
  while( true ) {
    switch((uintptr_t)(*pcVar1)) {
    case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\x0e':
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
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case ' ':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case '%':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*pcVar2 != *pcVar1) break;
    pcVar2 = pcVar2 + 1;
    pcVar1 = pcVar1 + 1;
  }
  return 0;
}

#undef DAT_0024b1fa

#define uStack0000000c (*(undefined1 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100418c0
 */

int recovered_100418c0(char *buffer,char *format,...)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10041390(buffer,format,&uStack0000000c);
  return iVar1;
}

#undef uStack0000000c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100418f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100418f0(void *stream,char *buffer,int mode,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (iVar1 = 0, *(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10041920(void *stream,char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  return;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#define local_d (*(undefined1 *)(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10041940(char *prefix)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  char *text;

  pvVar1 = (*(void * *)(((uintptr_t)pf_module_state+0x3301U)));
  if ((prefix != (char *)0x0) && (*prefix != '\0')) {
    uVar2 = recovered_1003c2f0(prefix);
    recovered_10040820(prefix,1,uVar2,pvVar1);
    pvVar1 = (*(void * *)(((uintptr_t)pf_module_state+0x3301U)));
    uVar2 = recovered_1003c2f0((char *)((uintptr_t)pf_module_state+0x29a8U));
    recovered_10040820((void *)((uintptr_t)pf_module_state+0x29a8U),1,uVar2,pvVar1);
  }
  text = recovered_100419f0(*(*(int * *)(((uintptr_t)pf_module_state+0x2e71U))));
  pvVar1 = (*(void * *)(((uintptr_t)pf_module_state+0x3301U)));
  uVar2 = recovered_1003c2f0(text);
  recovered_10040820(text,1,uVar2,pvVar1);
  local_d = 10;
  recovered_10040820(&local_d,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x3301U))));
  return;
}

#undef DAT_0024d024
#undef DAT_0024d4b4
#undef local_d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100419f0
 */

char * recovered_100419f0(int error_number)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if ((uint)error_number < 0x4f) {
                    /* WARNING: Could not emulate address calculation at 0x100419fb */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(error_number * 4 + ((uintptr_t)pf_module_state+0x7a5U)))();
    return pcVar1;
  }
  return (char *)((uintptr_t)pf_module_state+0x2c48U);
}


#undef DAT_0024e098
#define DAT_0024e098 (*(uint8_t *)(0x24e098U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10041aa0(char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *buffer_00;

  buffer_00 = (char *)((uintptr_t)pf_module_state+0x3ec2U);
  if (buffer != (char *)0x0) {
    buffer_00 = buffer;
  }
  (*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))) = (*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))) + 1;
  pf_varargs_1003e570__4_(buffer_00,0x20,(char *)((uintptr_t)pf_module_state+0x29abU),(*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))));
  return buffer_00;
}

#undef DAT_0024e098

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ae0
 */

int recovered_10041ae0(char *path)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10041af0(path);
  return iVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000683c
#define DAT_0000683c (*(uint8_t *)(0x683cU))
#undef DAT_000068d4
#define DAT_000068d4 (*(uint8_t *)(0x68d4U))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
#undef _DAT_000068d4
#define _DAT_000068d4 (*(code * *)(0x68d4U))
#define vararg0 (*(char * *)(frame + 32))
#define format (*(char * *)(frame + 28))
#define local_1f6 (*(char (*)[241])(frame + 42))
#define local_105 (*(char (*)[249])(frame + 283))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10041af0(char *in_stack_00000004)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;

  vararg0 = (char *)0x10041b00;
  in_ECX = recovered_1003f970();
  if ((in_ECX != (undefined *)0x0) && (-1 < *(int *)(in_ECX + 0x14))) {
    local_105[0] = '\0';
    uVar1 = recovered_1003fb20((int)in_ECX,in_stack_00000004,local_1f6);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_1003c320(local_1f6,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar2 == 0) {
        format = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        format = (char *)((uintptr_t)pf_module_state+0x27c9U);
        vararg0 = local_1f6;
      }
      pf_varargs_1003e570__4_(local_105,0xf9,format,(uint)vararg0);
      if (local_105[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xd7 < _DAT_00006808)) {
          if (_DAT_000068d4 == (code *)0x0) goto LAB_10041c1c;
          iVar2 = (*_DAT_000068d4)(*(undefined4 *)(in_ECX + 0x14),local_105);
        }
        else {
          if (((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) ||
             ((_DAT_00006808 < 0xc || ((_DAT_00006808 < 0x40 || (_DAT_0000683c == (code *)0x0))))))
          goto LAB_10041c1c;
          iVar2 = (*_DAT_0000683c)(local_105);
        }
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
  }
LAB_10041c1c:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef DAT_000068d4
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000683c
#undef _DAT_000068d4
#undef vararg0
#undef format
#undef local_1f6
#undef local_105

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041c40
 */

void recovered_10041c40(char *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10041af0(in_stack_00000004);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006888
#define DAT_00006888 (*(uint8_t *)(0x6888U))
#undef DAT_000068d8
#define DAT_000068d8 (*(uint8_t *)(0x68d8U))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006888
#define _DAT_00006888 (*(code * *)(0x6888U))
#undef _DAT_000068d8
#define _DAT_000068d8 (*(code * *)(0x68d8U))
#define vararg0 (*(char * *)(frame + 32))
#define local_2ef (*(char (*)[241])(frame + 49))
#define local_1fe (*(char (*)[249])(frame + 290))
#define local_105 (*(char (*)[249])(frame + 539))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10041c50(char *oldPath,char *newPath)

{
  unsigned char frame[832] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;

  vararg0 = (char *)0x10041c60;
  in_ECX = recovered_1003f970();
  if ((in_ECX != (undefined *)0x0) && (-1 < *(int *)(in_ECX + 0x14))) {
    local_1fe[0] = '\0';
    uVar1 = recovered_1003fb20((int)in_ECX,oldPath,local_2ef);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_1003c320(local_2ef,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar2 == 0) {
        pcVar3 = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        pcVar3 = (char *)((uintptr_t)pf_module_state+0x27c9U);
        vararg0 = local_2ef;
      }
      pf_varargs_1003e570__4_(local_1fe,0xf9,pcVar3,(uint)vararg0);
      if (local_1fe[0] != '\0') {
        local_105[0] = '\0';
        uVar1 = recovered_1003fb20((int)in_ECX,newPath,local_2ef);
        if ((char)uVar1 != '\0') {
          iVar2 = recovered_1003c320(local_2ef,(char *)((uintptr_t)pf_module_state+0xd10U));
          if (iVar2 == 0) {
            pcVar3 = (char *)((uintptr_t)pf_module_state+0x27c2U);
          }
          else {
            pcVar3 = (char *)((uintptr_t)pf_module_state+0x27c9U);
            vararg0 = local_2ef;
          }
          pf_varargs_1003e570__4_(local_105,0xf9,pcVar3,(uint)vararg0);
          if (local_105[0] != '\0') {
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && (0xdb < _DAT_00006808)) {
              if (_DAT_000068d8 == (code *)0x0) goto LAB_10041df8;
              iVar2 = (*_DAT_000068d8)(*(undefined4 *)(in_ECX + 0x14),local_1fe,local_105);
            }
            else {
              if (((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) ||
                 ((_DAT_00006808 < 0xc || ((_DAT_00006808 < 0x8c || (_DAT_00006888 == (code *)0x0)))
                  ))) goto LAB_10041df8;
              iVar2 = (*_DAT_00006888)(local_1fe,local_105);
            }
            if (iVar2 != 0) {
              return 0;
            }
          }
        }
      }
    }
  }
LAB_10041df8:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006888
#undef DAT_000068d8
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006888
#undef _DAT_000068d8
#undef vararg0
#undef local_2ef
#undef local_1fe
#undef local_105

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e20
 */

void recovered_10041e20(char *in_stack_00000004,char *in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10041c50(in_stack_00000004,in_stack_00000008);
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_80 (*(undefined1 (*)[108])(frame + 16))
#define local_14 (*(char (*)[4])(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10041e30(int param_1,uint param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint vararg0;
  void *pvVar2;

  if (((~param_2 & 0xa00) == 0) && (iVar1 = recovered_10041ee0(param_1,(int)local_80), iVar1 == 0))
  {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x11;
  }
  else {
    if ((param_2 & 2) == 0) {
      vararg0 = ((uintptr_t)pf_module_state+0x29c8U);
      if (((param_2 & 1) != 0) && (vararg0 = ((uintptr_t)pf_module_state+0x29c6U), (param_2 & 8) != 0)) {
        vararg0 = ((uintptr_t)pf_module_state+0x1a4cU);
      }
    }
    else {
      vararg0 = ((uintptr_t)pf_module_state+0x29c3U);
      if ((param_2 & 0x400) != 0) {
        vararg0 = ((uintptr_t)pf_module_state+0x29c0U);
      }
      if ((param_2 & 8) != 0) {
        vararg0 = ((uintptr_t)pf_module_state+0x29bdU);
      }
    }
    pf_varargs_1003e570__4_(local_14,4,(char *)((uintptr_t)pf_module_state+0xd0dU),vararg0);
    pvVar2 = recovered_1003f610((char *)param_1,local_14);
    if (pvVar2 != (void *)0x0) {
      return *(undefined4 *)((int)pvVar2 + 0xc);
    }
  }
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_80
#undef local_14

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_20 (*(undefined1 (*)[4])(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10041ee0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  int iVar1;
  undefined4 uVar2;

  in_ECX = recovered_1003f970();
  local_14 = 0;
  if (((param_2 == 0) || (param_1 == 0)) || (in_ECX == (undefined *)0x0)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
LAB_10041f9b:
    uVar2 = 0xffffffff;
  }
  else {
    recovered_1003be80(local_20,0,0xc);
    iVar1 = recovered_10042700((int)in_ECX,(char *)param_1,(int)local_20);
    if (iVar1 == 0) {
      iVar1 = recovered_10042840((int)in_ECX,(char *)param_1,0,0,&local_14);
      if (iVar1 == 0) {
        *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 2;
        goto LAB_10041f9b;
      }
      recovered_1003be80((void *)param_2,0,0x6c);
      *(undefined4 *)(param_2 + 8) = 0x41ed;
      *(undefined4 *)(param_2 + 0xc) = 1;
      *(undefined4 *)(param_2 + 0x10) = 1000;
      *(undefined4 *)(param_2 + 0x14) = 1000;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0x1000;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    else {
      recovered_1003be80((void *)param_2,0,0x6c);
      *(undefined4 *)(param_2 + 8) = 0x81a4;
      *(undefined4 *)(param_2 + 0xc) = 1;
      *(undefined4 *)(param_2 + 0x10) = 1000;
      *(undefined4 *)(param_2 + 0x14) = 1000;
      *(int *)(param_2 + 0x1c) = local_1c;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0x1000;
      *(uint *)(param_2 + 0x28) = local_1c + 0x1ffU >> 9;
      *(undefined4 *)(param_2 + 0x2c) = 0;
    }
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x38);
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_0024d024
#undef local_20
#undef local_1c
#undef local_14

#define local_10 (*(char (*)[4])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042060
 */

undefined4 recovered_10042060(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined4 uVar2;

  pf_varargs_1003e570__4_(local_10,4,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x29c6U));
  pvVar1 = recovered_1003f610((char *)param_1,local_10);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  return uVar2;
}

#undef local_10

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100420b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100420b0(uint param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  ulong uVar1;
  undefined4 uVar2;

  if (((param_1 < 0x20) && (stream = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), stream != (int *)0x0))
     && (*stream == 0x54474c46)) {
    uVar1 = recovered_10040640(param_2,1,param_3,stream);
    uVar2 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10042100(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  ulong uVar1;
  undefined4 uVar2;

  if (((param_1 < 0x20) && (stream = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), stream != (int *)0x0))
     && (*stream == 0x54474c46)) {
    uVar1 = recovered_10040820((void *)param_2,1,param_3,stream);
    uVar2 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d264
#define DAT_0024d264 (*(uint8_t *)(0x24d264U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042150(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *destination;
  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;

  if (((0x1f < param_1) ||
      (destination = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), destination == (int *)0x0)) ||
     (*destination != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return 0xffffffff;
  }
  in_ECX = recovered_1003f970();
  if (*destination == 0x54474c46) {
    uVar1 = 0;
    if ((destination[1] - 1U < 3) || (*(char *)((int)destination + 0x12) != '\x01'))
    goto LAB_100421ef;
    if (in_ECX != (undefined *)0x0) {
      iVar2 = recovered_100403d0((int)in_ECX,(char *)(destination + 6),destination[0x45],
                                 destination[0x46]);
      uVar1 = 0;
      if (iVar2 != 0) {
        *(undefined1 *)((int)destination + 0x12) = 0;
        goto LAB_100421ef;
      }
    }
    *(undefined1 *)((int)destination + 0x11) = 1;
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  uVar1 = 0xffffffff;
LAB_100421ef:
  if ((uint)destination[3] < 0x20) {
    *(undefined4 *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + destination[3] * 4) = 0;
  }
  if ((((*(int * *)(((uintptr_t)pf_module_state+0x30b1U))) != destination) && ((*(int * *)(((uintptr_t)pf_module_state+0x31d9U))) != destination)) &&
     ((*(int * *)(((uintptr_t)pf_module_state+0x3301U))) != destination)) {
    recovered_1003bb70((void *)destination[0x45]);
    recovered_1003be80(destination,0,0x124);
    recovered_1003bb70(destination);
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024d264
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10042260(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar2 = -1;
  iVar4 = -1;
  if (((param_1 < 0x20) && (piVar1 = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), piVar1 != (int *)0x0))
     && (*piVar1 == 0x54474c46)) {
    uVar3 = 0;
    if (param_4 != 0) {
      if (param_4 == 2) {
        uVar3 = piVar1[0x46];
        if ((uint)piVar1[0x46] <= (uint)piVar1[0x44]) {
          uVar3 = piVar1[0x44];
        }
      }
      else {
        if (param_4 != 1) {
          *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
          iVar2 = -1;
          goto LAB_1004230c;
        }
        uVar3 = piVar1[0x48];
      }
    }
    if ((param_2 < 0) && (uVar3 < (uint)-param_2)) {
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
      iVar2 = -1;
      iVar4 = -1;
    }
    else {
      iVar2 = uVar3 + param_2;
      piVar1[0x48] = iVar2;
      *(undefined1 *)(piVar1 + 4) = 0;
      piVar1[5] = -1;
      iVar4 = iVar2 >> 0x1f;
    }
  }
LAB_1004230c:
  return CONCAT44(iVar4,iVar2);
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042310(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *source;
  void *destination;
  void *destination_00;
  int iVar1;

  if (((0x1f < param_1) || (source = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), source == (int *)0x0))
     || (*source != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return 0xffffffff;
  }
  destination = recovered_1003bb30(0x124);
  if (destination == (void *)0x0) {
LAB_10042403:
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
  }
  else {
    recovered_1003bbf0(destination,source,0x124);
    *(undefined4 *)((int)destination + 0xc) = 0xffffffff;
    if ((source[0x45] != 0) && (source[0x47] != 0)) {
      destination_00 = recovered_1003bb30(source[0x47]);
      *(void **)((int)destination + 0x114) = destination_00;
      if (destination_00 == (void *)0x0) {
        recovered_1003bb70(destination);
        goto LAB_10042403;
      }
      recovered_1003bbf0(destination_00,(void *)source[0x45],source[0x47]);
    }
    iVar1 = recovered_1003fdc0((int)destination);
    if (-1 < iVar1) {
      return *(undefined4 *)((int)destination + 0xc);
    }
    recovered_1003bb70(*(void **)((int)destination + 0x114));
    recovered_1003bb70(destination);
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x18;
  }
  return 0xffffffff;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10042410(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *source;
  void *destination;
  void *destination_00;

  if ((((0x1f < param_1) || (source = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), source == (int *)0x0))
      || (0x1f < param_2)) || (*source != 0x54474c46)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    return 0xffffffff;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if (param_2 < 3) {
    *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_2 * 4) = source;
    return param_2;
  }
  if (((*(int *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_2 * 4) != 0) &&
      (recovered_10042150(param_2), *source != 0x54474c46)) ||
     (destination = recovered_1003bb30(0x124), destination == (void *)0x0)) {
LAB_1004250e:
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
    return 0xffffffff;
  }
  recovered_1003bbf0(destination,source,0x124);
  *(undefined4 *)((int)destination + 0xc) = 0xffffffff;
  if ((source[0x45] != 0) && (source[0x47] != 0)) {
    destination_00 = recovered_1003bb30(source[0x47]);
    *(void **)((int)destination + 0x114) = destination_00;
    if (destination_00 == (void *)0x0) {
      recovered_1003bb70(destination);
      goto LAB_1004250e;
    }
    recovered_1003bbf0(destination_00,(void *)source[0x45],source[0x47]);
  }
  *(uint *)((int)destination + 0xc) = param_2;
  *(void **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_2 * 4) = destination;
  return param_2;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042520(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x2f;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042570(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042590(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100425b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100425b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100425d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100425d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100425f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100425f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042610(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10042630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10042650(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042670(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (((param_1 < 0x20) && (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) != (int *)0x0)) &&
     (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) == 0x54474c46)) {
    if (param_2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x1004269c */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_2 * 4 + ((uintptr_t)pf_module_state+0x8e1U)))();
      return uVar1;
    }
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  return 0xffffffff;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006834
#define DAT_00006834 (*(uint8_t *)(0x6834U))
#undef DAT_000068c8
#define DAT_000068c8 (*(uint8_t *)(0x68c8U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef _DAT_000068c8
#define _DAT_000068c8 (*(code * *)(0x68c8U))
#define local_1fa (*(char (*)[241])(frame + 38))
#define local_109 (*(char (*)[249])(frame + 279))
#define format (*(char * *)(frame + 28))
#define in_stack_fffffe00 (*(char * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042700
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042700(int in_ECX,char *in_EDX,int param_3)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((param_3 != 0) && (-1 < *(int *)(in_ECX + 0x14))) {
    local_109[0] = '\0';
    uVar1 = recovered_1003fb20(in_ECX,in_EDX,local_1fa);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_1003c320(local_1fa,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar2 == 0) {
        format = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        format = (char *)((uintptr_t)pf_module_state+0x27c9U);
        in_stack_fffffe00 = local_1fa;
      }
      pf_varargs_1003e570__4_(local_109,0xf9,format,(uint)in_stack_fffffe00);
      if (local_109[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xcb < _DAT_00006808)) {
          if (_DAT_000068c8 == (code *)0x0) {
            return 0;
          }
          uVar3 = (*_DAT_000068c8)(*(undefined4 *)(in_ECX + 0x14),local_109,param_3);
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_00006804 == 0) {
            return 0;
          }
          if (_DAT_00006808 < 0xc) {
            return 0;
          }
          if (_DAT_00006808 < 0x38) {
            return 0;
          }
          if (_DAT_00006834 == (code *)0x0) {
            return 0;
          }
          uVar3 = (*_DAT_00006834)(local_109,param_3);
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_000068c8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef _DAT_000068c8
#undef local_1fa
#undef local_109
#undef format
#undef in_stack_fffffe00

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006884
#define DAT_00006884 (*(uint8_t *)(0x6884U))
#undef DAT_000068cc
#define DAT_000068cc (*(uint8_t *)(0x68ccU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006884
#define _DAT_00006884 (*(code * *)(0x6884U))
#undef _DAT_000068cc
#define _DAT_000068cc (*(code * *)(0x68ccU))
#define in_stack_fffffde0 (*(char * *)(frame + 32))
#define local_212 (*(char (*)[241])(frame + 46))
#define local_121 (*(char (*)[249])(frame + 287))
#define local_28 (*(uint *)(frame + 536))
#define local_24 (*(void * *)(frame + 540))
#define local_20 (*(uint *)(frame + 544))
#define local_1c (*(uint *)(frame + 548))
#define local_18 (*(uint *)(frame + 552))
#define local_14 (*(uint * *)(frame + 556))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042840(int in_ECX,char *in_EDX,int param_3,uint param_4,uint *param_5)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;

  local_28 = 0;
  uVar11 = 0;
  if (-1 < *(int *)(in_ECX + 0x14)) {
    local_121[0] = '\0';
    uVar5 = recovered_1003fb20(in_ECX,in_EDX,local_212);
    if ((char)uVar5 != '\0') {
      iVar6 = recovered_1003c320(local_212,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar6 == 0) {
        pcVar12 = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        pcVar12 = (char *)((uintptr_t)pf_module_state+0x27c9U);
        in_stack_fffffde0 = local_212;
      }
      pf_varargs_1003e570__4_(local_121,0xf9,pcVar12,(uint)in_stack_fffffde0);
      if (local_121[0] != '\0') {
        if (param_5 == (uint *)0x0) {
          param_5 = &local_28;
        }
        local_14 = param_5;
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xcf < _DAT_00006808)) {
          if (_DAT_000068cc == (code *)0x0) {
            return 0;
          }
          iVar6 = (*_DAT_000068cc)(*(undefined4 *)(in_ECX + 0x14),local_121,param_3,param_4,param_5)
          ;
        }
        else {
          if (_DAT_00006800 != 0x50414d57) {
            return 0;
          }
          if (_DAT_00006804 == 0) {
            return 0;
          }
          if (_DAT_00006808 < 0xc) {
            return 0;
          }
          if (_DAT_00006808 < 0x88) {
            return 0;
          }
          if (_DAT_00006884 == (code *)0x0) {
            return 0;
          }
          iVar6 = (*_DAT_00006884)(local_121,param_3,param_4,param_5);
        }
        puVar9 = local_14;
        if ((iVar6 != 0) && (uVar11 = 1, param_4 != 0 && param_3 != 0)) {
          uVar3 = *local_14;
          local_20 = uVar3;
          if (param_4 <= uVar3) {
            local_20 = param_4;
          }
          if (uVar3 == 0) {
            local_1c = 0;
          }
          else {
            local_18 = 0;
            local_1c = 0;
            do {
              iVar6 = local_18 * 0x1f8;
              cVar4 = *(char *)(param_3 + 0xf1 + iVar6);
              if (cVar4 == '\0') {
LAB_10042aa0:
              }
              else {
                local_24 = (void *)(param_3 + iVar6);
                pcVar10 = (char *)(param_3 + 0xf1 + iVar6);
                for (pcVar12 = local_121; (*pcVar12 == '/' || (*pcVar12 == '\\'));
                    pcVar12 = pcVar12 + 1) {
                }
                while ((cVar4 == '\\' || (cVar4 == '/'))) {
                  pcVar1 = pcVar10 + 1;
                  pcVar10 = pcVar10 + 1;
                  cVar4 = *pcVar1;
                }
                uVar7 = recovered_1003c2f0(pcVar12);
                uVar3 = local_1c;
                if (uVar7 != 0) {
                  uVar8 = 0;
                  do {
                    cVar4 = pcVar10[uVar8];
                    cVar2 = pcVar12[uVar8];
                    if (((cVar4 != cVar2) || (cVar4 == '\0')) || (cVar2 == '\0')) {
                      if (cVar4 != cVar2) goto LAB_10042a9d;
                      break;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar7 != uVar8);
                  if ((pcVar10[uVar7] == '\\') || (pcVar10[uVar7] == '/')) {
                    pcVar10 = pcVar10 + uVar7 + 1;
                    goto LAB_10042a70;
                  }
LAB_10042a9d:
                  puVar9 = local_14;
                  goto LAB_10042aa0;
                }
LAB_10042a70:
                cVar4 = *pcVar10;
                if (cVar4 == '\0') goto LAB_10042a9d;
                while (pcVar10 = pcVar10 + 1, cVar4 != '\0') {
                  if ((cVar4 == '/') || (cVar4 == '\\')) goto LAB_10042a9d;
                  cVar4 = *pcVar10;
                }
                if (local_1c != local_18) {
                  recovered_1003bbf0((void *)(local_1c * 0x1f8 + param_3),local_24,0x1f8);
                }
                local_1c = uVar3 + 1;
                puVar9 = local_14;
              }
              local_18 = local_18 + 1;
            } while (local_18 != local_20);
          }
          *puVar9 = local_1c;
        }
      }
    }
  }
  return uVar11;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006884
#undef DAT_000068cc
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006884
#undef _DAT_000068cc
#undef in_stack_fffffde0
#undef local_212
#undef local_121
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042af0
 */

void recovered_10042af0(int in_stack_00000004,int in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10041ee0(in_stack_00000004,in_stack_00000008);
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042b00(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined4 uVar2;
  uint uVar3;

  if ((((param_1 < 0x20) && (piVar1 = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), piVar1 != (int *)0x0))
      && (param_2 != 0)) && (*piVar1 == 0x54474c46)) {
    uVar3 = piVar1[0x46];
    if ((uint)piVar1[0x46] <= (uint)piVar1[0x44]) {
      uVar3 = piVar1[0x44];
    }
    recovered_1003be80((void *)param_2,0,0x6c);
    *(undefined4 *)(param_2 + 8) = 0x81a4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    *(undefined4 *)(param_2 + 0x10) = 1000;
    *(undefined4 *)(param_2 + 0x14) = 1000;
    *(uint *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0x1000;
    *(uint *)(param_2 + 0x28) = uVar3 + 0x1ff >> 9;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x38);
    uVar2 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042be0(int param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0 || param_2 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    recovered_1003be80(param_2,0,0x850);
    *param_2 = 0x1000;
    param_2[1] = 0x1000;
    param_2[3] = 0;
    param_2[2] = 0x40000;
    param_2[5] = 0;
    param_2[4] = 0x20000;
    param_2[7] = 0;
    param_2[6] = 0x20000;
    param_2[9] = 0;
    param_2[8] = 0x10000;
    param_2[0xb] = 0;
    param_2[10] = 0x8000;
    param_2[0xf] = 0x1000;
    recovered_1003bbf0(param_2 + 0x10,(void *)((uintptr_t)pf_module_state+0x11a5U),6);
    recovered_1003bbf0(param_2 + 0x14,(void *)((uintptr_t)pf_module_state+0xd10U),2);
    recovered_1003bbf0(param_2 + 0x114,(void *)((uintptr_t)pf_module_state+0x11abU),0xb);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042cd0(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((param_1 < 0x20) && (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) != (int *)0x0)) &&
      (param_2 != (undefined4 *)0x0)) && (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) == 0x54474c46)) {
    recovered_1003be80(param_2,0,0x850);
    *param_2 = 0x1000;
    param_2[1] = 0x1000;
    param_2[3] = 0;
    param_2[2] = 0x40000;
    param_2[5] = 0;
    param_2[4] = 0x20000;
    param_2[7] = 0;
    param_2[6] = 0x20000;
    param_2[9] = 0;
    param_2[8] = 0x10000;
    param_2[0xb] = 0;
    param_2[10] = 0x8000;
    param_2[0xf] = 0x1000;
    recovered_1003bbf0(param_2 + 0x10,(void *)((uintptr_t)pf_module_state+0x11a5U),6);
    recovered_1003bbf0(param_2 + 0x14,(void *)((uintptr_t)pf_module_state+0xd10U),2);
    recovered_1003bbf0(param_2 + 0x114,(void *)((uintptr_t)pf_module_state+0x11abU),0xb);
    uVar1 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000688c
#define DAT_0000688c (*(uint8_t *)(0x688cU))
#undef DAT_000068dc
#define DAT_000068dc (*(uint8_t *)(0x68dcU))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000688c
#define _DAT_0000688c (*(code * *)(0x688cU))
#undef _DAT_000068dc
#define _DAT_000068dc (*(code * *)(0x68dcU))
#define local_1f6 (*(char (*)[241])(frame + 42))
#define local_105 (*(char (*)[249])(frame + 283))
#define format (*(char * *)(frame + 28))
#define vararg0 (*(char * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042de0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042de0(char *in_stack_00000004)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;

  vararg0 = (char *)0x10042df0;
  in_ECX = recovered_1003f970();
  if ((in_ECX != (undefined *)0x0) && (-1 < *(int *)(in_ECX + 0x14))) {
    local_105[0] = '\0';
    uVar1 = recovered_1003fb20((int)in_ECX,in_stack_00000004,local_1f6);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_1003c320(local_1f6,(char *)((uintptr_t)pf_module_state+0xd10U));
      if (iVar2 == 0) {
        format = (char *)((uintptr_t)pf_module_state+0x27c2U);
      }
      else {
        format = (char *)((uintptr_t)pf_module_state+0x27c9U);
        vararg0 = local_1f6;
      }
      pf_varargs_1003e570__4_(local_105,0xf9,format,(uint)vararg0);
      if (local_105[0] != '\0') {
        if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (0xdf < _DAT_00006808)) {
          if (_DAT_000068dc == (code *)0x0) goto LAB_10042f0e;
          iVar2 = (*_DAT_000068dc)(*(undefined4 *)(in_ECX + 0x14),local_105);
        }
        else {
          if (((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) ||
             ((_DAT_00006808 < 0xc || ((_DAT_00006808 < 0x90 || (_DAT_0000688c == (code *)0x0))))))
          goto LAB_10042f0e;
          iVar2 = (*_DAT_0000688c)(local_105);
        }
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
  }
LAB_10042f0e:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 5;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000688c
#undef DAT_000068dc
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000688c
#undef _DAT_000068dc
#undef local_1f6
#undef local_105
#undef format
#undef vararg0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042f30
 */

void recovered_10042f30(char *in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10041af0(in_stack_00000004);
  return;
}


#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042f40
 */

void recovered_10042f40(int param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};


  recovered_10041ee0(param_1,(int)local_70);
  return;
}

#undef local_70

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042f60(uint param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (((param_1 < 0x20) && (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) != (int *)0x0)) &&
     (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) == 0x54474c46)) {
    recovered_1003be80(local_70,0,0x6c);
    uVar1 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024d4c8
#undef local_70

#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042fb0
 */

void recovered_10042fb0(int param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};


  recovered_10041ee0(param_1,(int)local_70);
  return;
}

#undef local_70

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10042fd0(uint param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (((param_1 < 0x20) && (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) != (int *)0x0)) &&
     (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4) == 0x54474c46)) {
    recovered_1003be80(local_70,0,0x6c);
    uVar1 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024d4c8
#undef local_70

#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043020
 */

void recovered_10043020(int param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};


  recovered_10041ee0(param_1,(int)local_70);
  return;
}

#undef local_70

#undef DAT_0024d4bc
#define DAT_0024d4bc (*(uint8_t *)(0x24d4bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043040(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = (*(uint32_t *)(((uintptr_t)pf_module_state+0x3309U)));
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x3309U))) = param_1;
  return uVar1;
}

#undef DAT_0024d4bc

#define local_70 (*(undefined1 (*)[108])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043060
 */

void recovered_10043060(int param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};


  recovered_10041ee0(param_1,(int)local_70);
  return;
}

#undef local_70

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_300 (*(undefined1 (*)[507])(frame + 16))
#define local_105 (*(char (*)[241])(frame + 523))
#define local_14 (*(uint *)(frame + 764))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043080(char *in_stack_00000004)

{
  unsigned char frame[816] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  int iVar2;

  in_ECX = recovered_1003f970();
  if (in_ECX != (undefined *)0x0) {
    local_14 = 0;
    uVar1 = recovered_1003fb20((int)in_ECX,in_stack_00000004,local_105);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_10042840((int)in_ECX,local_105,(int)local_300,1,&local_14);
      if (iVar2 != 0) {
        pf_varargs_1003e570__4_(in_ECX + 0x924,0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_105);
        pf_varargs_1003e570__4_(in_ECX + 0x10d,0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_105);
        return 0;
      }
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 2;
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_300
#undef local_105
#undef local_14

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043140(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  ulong uVar2;
  char *text;

  puVar1 = recovered_1003f970();
  if (puVar1 == (undefined *)0x0) {
    text = (char *)((uintptr_t)pf_module_state+0xd10U);
  }
  else {
    text = (char *)((uintptr_t)pf_module_state+0xd10U);
    if (puVar1[0x924] != '\0') {
      text = puVar1 + 0x924;
    }
  }
  if (param_1 == 0 || param_2 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    param_1 = 0;
  }
  else {
    uVar2 = recovered_1003c2f0(text);
    if (param_2 < uVar2 + 1) {
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x22;
      param_1 = 0;
    }
    else {
      pf_varargs_1003e570__4_((char *)param_1,param_2,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)text);
    }
  }
  return param_1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100431d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffffffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100431f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100431f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043210
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043210(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_211 (*(char (*)[241])(frame + 31))
#define local_120 (*(void * *)(frame + 272))
#define local_11c (*(uint *)(frame + 276))
#define local_114 (*(undefined4 *)(frame + 284))
#define local_110 (*(char (*)[244])(frame + 288))
#define local_1c (*(void * *)(frame + 532))
#define local_18 (*(uint *)(frame + 536))
#define local_14 (*(undefined4 *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043230(int param_1,uint param_2,int param_3)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  void *destination;
  int iVar2;
  uint count;

  in_ECX = recovered_1003f970();
  uVar1 = 0x16;
  if (((-1 < param_3) && (param_1 != 0)) && (in_ECX != (undefined *)0x0)) {
    destination = recovered_1003bb30(param_2 + (param_2 == 0));
    if (destination == (void *)0x0) {
      uVar1 = 0xc;
    }
    else {
      recovered_1003be80(destination,0,param_2);
      recovered_1003be80(&local_120,0,0x104);
      uVar1 = recovered_1003fb20((int)in_ECX,(char *)param_1,local_211);
      if ((char)uVar1 != '\0') {
        recovered_1003be80(&local_1c,0,0xc);
        iVar2 = recovered_10042700((int)in_ECX,local_211,(int)&local_1c);
        if (local_1c != (void *)0x0 && iVar2 != 0) {
          local_120 = local_1c;
          local_11c = local_18;
          local_114 = local_14;
          pf_varargs_1003e570__4_(local_110,0xf1,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)local_211);
          count = local_11c;
          if (param_2 <= local_11c) {
            count = param_2;
          }
          if (count != 0) {
            recovered_1003bbf0(destination,local_120,count);
          }
        }
      }
      iVar2 = recovered_100403d0((int)in_ECX,(char *)param_1,(int)destination,param_2);
      recovered_1003bb70(destination);
      if (iVar2 != 0) {
        return 0;
      }
      uVar1 = 5;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = uVar1;
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_211
#undef local_120
#undef local_11c
#undef local_114
#undef local_110
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100433b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100433b0(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;

  if ((((param_1 < 0x20) && (stream = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), stream != (int *)0x0))
      && (-1 < param_3)) && (*stream == 0x54474c46)) {
    if ((*(byte *)(stream + 2) & 2) != 0) {
      uVar2 = stream[0x47];
      if (uVar2 < param_2) {
        uVar1 = 0x100;
        if (uVar2 != 0) {
          uVar1 = uVar2;
        }
        do {
          uVar2 = uVar1;
          uVar1 = uVar2 * 2;
        } while (uVar2 < param_2);
        pvVar3 = recovered_1003bbb0((void *)stream[0x45],uVar2);
        if (pvVar3 == (void *)0x0) {
          *(undefined1 *)((int)stream + 0x11) = 1;
          *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
          return 0xffffffff;
        }
        stream[0x45] = (int)pvVar3;
        stream[0x47] = uVar2;
      }
      uVar2 = stream[0x46];
      if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
        recovered_1003be80((void *)(uVar2 + stream[0x45]),0,param_2 - uVar2);
      }
      stream[0x46] = param_2;
      if (param_2 < (uint)stream[0x48]) {
        stream[0x48] = param_2;
      }
      *(undefined1 *)((int)stream + 0x12) = 1;
      iVar4 = recovered_10040310(stream);
      return iVar4;
    }
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
  }
  return 0xffffffff;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100434b0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  int iVar1;

  if (((param_1 < 0x20) && (stream = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_1 * 4), stream != (int *)0x0))
     && (*stream == 0x54474c46)) {
    iVar1 = recovered_10040310(stream);
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    iVar1 = -1;
  }
  return iVar1;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_14 (*(uint *)(frame + 48412))
#define local_bd18 (*(undefined1 (*)[48384])(frame + 24))
#define local_18 (*(uint * *)(frame + 48408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100434f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_100434f0(char *in_stack_00000004)

{
  unsigned char frame[48464] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined *in_ECX;
  int iVar2;
  undefined4 uVar3;
  char *buffer;
  undefined1 *vararg0;
  uint uVar4;

  in_ECX = recovered_1003f970();
  local_14 = 0;
  if (in_ECX == (undefined *)0x0) {
    uVar3 = 0x16;
  }
  else {
    vararg0 = local_bd18;
    iVar2 = recovered_10042840((int)in_ECX,in_stack_00000004,(int)vararg0,0x60,&local_14);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      local_18 = recovered_1003bb30(0x6308);
      if (local_18 != (uint *)0x0) {
        recovered_1003be80(local_18,0,0x6308);
        if (0x60 < local_14) {
          local_14 = 0x60;
        }
        *local_18 = local_14;
        if (local_14 == 0) {
          return local_18;
        }
        buffer = (char *)((int)local_18 + 0xd);
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(uint *)(buffer + -5) = uVar4;
          cVar1 = '\x04';
          if (*(int *)(vararg0 + 0x1ec) != 2) {
            cVar1 = ((vararg0[0x1e8] & 2) == 0) * '\x04' + '\x04';
          }
          buffer[-1] = cVar1;
          pf_varargs_1003e570__4_(buffer,0x100,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)vararg0);
          vararg0 = vararg0 + 0x1f8;
          buffer = buffer + 0x108;
        } while (uVar4 < local_14);
        return local_18;
      }
      uVar3 = 0xc;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = uVar3;
  return (uint *)0x0;
}

#undef DAT_0024d024
#undef local_14
#undef local_bd18
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043610
 */

uint * recovered_10043610(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;

  puVar2 = (uint *)0x0;
  if ((param_1 != (uint *)0x0) && (uVar1 = param_1[1], uVar1 < *param_1)) {
    param_1[1] = uVar1 + 1;
    puVar2 = param_1 + uVar1 * 0x42 + 2;
  }
  return puVar2;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043640(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 9;
    uVar1 = 0xffffffff;
  }
  else {
    recovered_1003bb70((void *)param_1);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043670
 */

void recovered_10043670(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043690(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                      int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  void *destination;
  ulong uVar3;

  destination = recovered_1003bb30(param_2 + (param_2 == 0));
  if (destination == (void *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
    destination = (void *)0xffffffff;
  }
  else if ((int)param_5 < 0 || (param_4 >> 0xc & 1) != 0) {
    recovered_1003be80(destination,0,param_2);
  }
  else if (((param_5 < 0x20) &&
           (piVar1 = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_5 * 4), piVar1 != (int *)0x0)) &&
          (*piVar1 == 0x54474c46)) {
    iVar2 = piVar1[0x48];
    *(undefined1 *)(piVar1 + 4) = 0;
    piVar1[5] = -1;
    if (-1 < iVar2) {
      if (param_6 < 0) {
        *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
      }
      else {
        piVar1[0x48] = param_6;
        piVar1[5] = -1;
        uVar3 = recovered_10040640(destination,1,param_2,piVar1);
        if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
          recovered_1003be80((void *)((int)destination + uVar3),0,param_2 - uVar3);
        }
        piVar1 = *(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + param_5 * 4);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0x54474c46)) {
          piVar1[0x48] = iVar2;
          *(undefined1 *)(piVar1 + 4) = 0;
          piVar1[5] = -1;
        }
      }
    }
  }
  return (int)destination;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100437c0
 */

undefined4 recovered_100437c0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003bb70(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100437e0
 */

undefined4 recovered_100437e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100437f0
 */

undefined4 recovered_100437f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043800
 */

undefined4 recovered_10043800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_0024d558
#define DAT_0024d558 (*(uint8_t *)(0x24d558U))
#undef DAT_0024d55c
#define DAT_0024d55c (*(uint8_t *)(0x24d55cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043810(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong count;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;

  recovered_1003f970();
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar5 = param_1, cVar1 != '\0')) {
    while (cVar1 != '\0') {
      if (cVar1 == '=') {
        return 0;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    count = recovered_1003c2f0(param_1);
    if ((*(char * *)(((uintptr_t)pf_module_state+0x33a5U))) != (char *)0x0) {
      piVar4 = (int *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x33a9U)));
      pcVar5 = (*(char * *)(((uintptr_t)pf_module_state+0x33a5U)));
      do {
        uVar2 = recovered_1003c2f0(pcVar5);
        if (((count < uVar2) && (pcVar5[count] == '=')) &&
           (iVar3 = recovered_1003c070(pcVar5,param_1,count), iVar3 == 0)) {
          return piVar4[-1] + 1 + count;
        }
        pcVar5 = (char *)*piVar4;
        piVar4 = piVar4 + 1;
      } while (pcVar5 != (char *)0x0);
    }
  }
  return 0;
}

#undef DAT_0024d558
#undef DAT_0024d55c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100438c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100438c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 2;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100438e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100438e0(int param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;

  if (param_1 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  }
  else {
    if ((param_2 == (char *)0x0) || (cVar2 = *param_2, cVar2 == '\0')) {
      param_2 = (char *)((uintptr_t)pf_module_state+0x29caU);
      cVar2 = '/';
    }
    uVar3 = 1;
    do {
      *(char *)(param_1 + -1 + uVar3) = cVar2;
      cVar2 = param_2[uVar3];
      uVar1 = uVar3 + 1;
      if (cVar2 == '\0') break;
      bVar4 = uVar3 < 0xf0;
      uVar3 = uVar1;
    } while (bVar4);
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_110 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043940(char *param_1,int param_2,int param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;

  iVar3 = recovered_10043810(param_1);
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar2 = param_1, cVar1 != '\0')) {
    while (cVar1 != '\0') {
      if (cVar1 == '=') goto LAB_100439d6;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    if (param_2 != 0) {
      if ((param_3 == 0) && (iVar3 != 0)) {
        return 0;
      }
      uVar4 = recovered_1003c2f0(param_1);
      uVar5 = recovered_1003c2f0((char *)param_2);
      if ((uVar4 - 0xff) + uVar5 < 0xfffffeff) {
        *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
        return 0xffffffff;
      }
      pf_varargs_1003e570__4__4_(local_110,0x100,(char *)((uintptr_t)pf_module_state+0x29d5U),(uint)param_1,param_2);
      uVar6 = recovered_10043a20((uint *)param_1,local_110);
      return uVar6;
    }
  }
LAB_100439d6:
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_110

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d558
#define DAT_0024d558 (*(uint8_t *)(0x24d558U))
#undef DAT_0024d55c
#define DAT_0024d55c (*(uint8_t *)(0x24d55cU))
#define local_14 (*(int *)(frame + 2076))
#define local_820 (*(char (*)[2048])(frame + 16))
#define local_20 (*(ulong *)(frame + 2064))
#define local_1c (*(uint * *)(frame + 2068))
#define local_18 (*(char * *)(frame + 2072))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043a20(uint *in_ECX,char *in_EDX)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;

  local_14 = 0;
  local_20 = 0;
  local_18 = in_EDX;
  if (in_ECX != (uint *)0x0) {
    local_20 = recovered_1003c2f0((char *)in_ECX);
  }
  local_820[0] = '\0';
  local_1c = in_ECX;
  if ((*(char * *)(((uintptr_t)pf_module_state+0x33a5U))) != (char *)0x0) {
    local_14 = 0;
    piVar4 = (int *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x33a9U)));
    pcVar5 = (*(char * *)(((uintptr_t)pf_module_state+0x33a5U)));
    do {
      uVar1 = recovered_1003c2f0(pcVar5);
      uVar2 = recovered_1003c2f0(pcVar5);
      if (((uVar2 <= local_20) || (pcVar5[local_20] != '=')) ||
         (iVar3 = recovered_1003c070(pcVar5,local_1c,local_20), iVar3 != 0)) {
        if ((uVar1 - 0x7fe) + local_14 < 0xfffff800) goto LAB_10043b58;
        iVar3 = uVar1 + local_14;
        recovered_1003bbf0(local_820 + local_14,pcVar5,uVar1);
        (local_820 + iVar3)[0] = '\n';
        (local_820 + iVar3)[1] = '\0';
        local_14 = iVar3 + 1;
      }
      pcVar5 = (char *)*piVar4;
      piVar4 = piVar4 + 1;
    } while (pcVar5 != (char *)0x0);
  }
  pcVar5 = local_18;
  if ((local_18 != (char *)0x0) && (*local_18 != '\0')) {
    uVar1 = recovered_1003c2f0(local_18);
    if (0x7ff < uVar1 + 2 + local_14) {
LAB_10043b58:
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
      return 0xffffffff;
    }
    iVar3 = uVar1 + local_14;
    recovered_1003bbf0(local_820 + local_14,pcVar5,uVar1);
    (local_820 + iVar3)[0] = '\n';
    (local_820 + iVar3)[1] = '\0';
  }
  recovered_1003f510(local_820);
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024d558
#undef DAT_0024d55c
#undef local_14
#undef local_820
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043b80(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  undefined4 uVar3;

  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, pcVar2 = param_1, cVar1 != '\0')) {
    while( true ) {
      if (cVar1 == '\0') {
        uVar3 = recovered_10043a20((uint *)param_1,(char *)0x0);
        return uVar3;
      }
      if (cVar1 == '=') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_90 (*(uint (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043bd0(int param_1)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint count;
  undefined4 uVar2;

  if (param_1 != 0) {
    pcVar1 = recovered_1003c500((char *)param_1,0x3d);
    count = (int)pcVar1 - param_1;
    if (pcVar1 != (char *)0x0 && count != 0) {
      if (count < 0x80) {
        recovered_1003bbf0(local_90,(void *)param_1,count);
        *(undefined1 *)((int)local_90 + count) = 0;
        uVar2 = recovered_10043a20(local_90,(char *)param_1);
        return uVar2;
      }
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
      return 0xffffffff;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024
#undef local_90

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006954
#define DAT_00006954 (*(uint8_t *)(0x6954U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006954
#define _DAT_00006954 (*(code * *)(0x6954U))
#define local_20d (*(char (*)[512])(frame + 19))
#define local_d (*(undefined1 *)(frame + 531))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043c60(int param_1)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  void *stream;
  void *stream_00;
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;

  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    local_20d[0] = '\0';
    uVar1 = 0xffffffff;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x157 < _DAT_00006808 && (_DAT_00006954 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006954)(param_1,local_20d,0x200);
      stream_00 = (*(void * *)(((uintptr_t)pf_module_state+0x3301U)));
      stream = (*(void * *)(((uintptr_t)pf_module_state+0x31d9U)));
      if (iVar2 == 0) {
        if (local_20d[0] != '\0') {
          uVar3 = recovered_1003c2f0(local_20d);
          recovered_10040820(local_20d,1,uVar3,stream_00);
          local_d = 10;
          recovered_10040820(&local_d,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x3301U))));
        }
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
        if (local_20d[0] != '\0') {
          uVar3 = recovered_1003c2f0(local_20d);
          recovered_10040820(local_20d,1,uVar3,stream);
          local_d = 10;
          recovered_10040820(&local_d,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x31d9U))));
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006954
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006954
#undef local_20d
#undef local_d

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#define local_fd (*(char (*)[241])(frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10043d80(int param_1,int param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  undefined *in_ECX;
  undefined4 uVar1;
  ulong uVar2;

  in_ECX = recovered_1003f970();
  if (param_1 == 0 || in_ECX == (undefined *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  }
  else {
    uVar1 = recovered_1003fb20((int)in_ECX,(char *)param_1,local_fd);
    if ((char)uVar1 != '\0') {
      if (param_2 == 0) {
        uVar2 = recovered_1003c2f0(local_fd);
        param_2 = (int)recovered_1003bb30(uVar2 + 1);
        if ((char *)param_2 == (char *)0x0) {
          *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xc;
          return 0;
        }
      }
      recovered_1003c3a0((char *)param_2,local_fd);
      return (int)(char *)param_2;
    }
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x3f;
  }
  return 0;
}

#undef DAT_0024d024
#undef local_fd

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e098
#define DAT_0024e098 (*(uint8_t *)(0x24e098U))
#define local_f4 (*(undefined1 (*)[108])(frame + 28))
#define local_88 (*(undefined1 (*)[108])(frame + 136))
#define local_1c (*(char (*)[4])(frame + 244))
#define local_18 (*(int *)(frame + 248))
#define local_11 (*(undefined1 *)(frame + 255))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10043e20(int param_1,int param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;

  if ((param_1 != 0 && -1 < param_2) &&
     (uVar2 = recovered_1003c2f0((char *)param_1), param_2 + 6U <= uVar2)) {
    iVar5 = (uVar2 + param_1) - param_2;
    iVar3 = recovered_1003c070((void *)(iVar5 + -6),(void *)((uintptr_t)pf_module_state+0x2a1aU),6);
    if (iVar3 == 0) {
      local_18 = 0x80;
      do {
        uVar1 = (*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))) + 1;
        uVar6 = uVar1 / 0x3e;
        iVar3 = (*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))) + ((uintptr_t)pf_module_state+0x29dcU);
        (*(uint *)(((uintptr_t)pf_module_state+0x3ee5U))) = uVar1;
        *(undefined1 *)(iVar5 + -6) = *(undefined1 *)(iVar3 + uVar6 * -0x3e);
        *(undefined1 *)(iVar5 + -5) = *(undefined1 *)(uVar6 + ((uintptr_t)pf_module_state+0x29dbU) + (uVar6 / 0x3e) * -0x3e);
        local_11 = *(undefined1 *)(uVar1 / 0xf04 + ((uintptr_t)pf_module_state+0x29dbU) + ((uVar1 / 0xf04) / 0x3e) * -0x3e);
        *(undefined1 *)(iVar5 + -4) = local_11;
        *(undefined1 *)(iVar5 + -3) = *(undefined1 *)((uVar1 / 0x3a2f8) % 0x3e + ((uintptr_t)pf_module_state+0x29dbU));
        *(undefined1 *)(iVar5 + -2) = *(undefined1 *)((uVar1 / 0xe17810) % 0x3e + ((uintptr_t)pf_module_state+0x29dbU));
        *(undefined1 *)(iVar5 + -1) = *(undefined1 *)(uVar1 / 0x369b13e0 + ((uintptr_t)pf_module_state+0x29dbU));
        iVar3 = recovered_10041ee0(param_1,(int)local_88);
        if (iVar3 != 0) {
          iVar3 = recovered_10041ee0(param_1,(int)local_f4);
          if (iVar3 != 0) {
            pf_varargs_1003e570__4_(local_1c,4,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x29c3U));
            pvVar4 = recovered_1003f610((char *)param_1,local_1c);
            if (pvVar4 == (void *)0x0) {
              return 0xffffffff;
            }
            return *(undefined4 *)((int)pvVar4 + 0xc);
          }
          break;
        }
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x11;
      return 0xffffffff;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024
#undef DAT_0024e098
#undef local_f4
#undef local_88
#undef local_1c
#undef local_18
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044020
 */

void recovered_10044020(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10043e20(param_1,0);
  return;
}


#undef DAT_0024e09c
#define DAT_0024e09c (*(uint8_t *)(0x24e09cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044040(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0xffffffff;
  if ((*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) < 0x20 && param_1 != 0) {
    iVar1 = (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) * 4;
    (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) = (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) + 1;
    *(int *)(iVar1 + ((uintptr_t)pf_module_state+0x3eedU)) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_0024e09c

#undef DAT_0024e09c
#define DAT_0024e09c (*(uint8_t *)(0x24e09cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044080(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  uVar2 = 0xffffffff;
  if ((*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) < 0x20 && param_1 != 0) {
    iVar1 = (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) * 4;
    (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) = (*(uint *)(((uintptr_t)pf_module_state+0x3ee9U))) + 1;
    *(int *)(iVar1 + ((uintptr_t)pf_module_state+0x3eedU)) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_0024e09c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100440c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100440c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_10044100;
  if (_DAT_00006804 == 0) goto LAB_10044100;
  if (_DAT_00006808 < 0xc) goto LAB_10044100;
  pcVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_10044100;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_10044100:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (pcVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10044140(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_10044180;
  if (_DAT_00006804 == 0) goto LAB_10044180;
  if (_DAT_00006808 < 0xc) goto LAB_10044180;
  pcVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_10044180;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_10044180:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (pcVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_0024e09c
#define DAT_0024e09c (*(uint8_t *)(0x24e09cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100441c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100441c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  code *pcVar3;

  iVar2 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
  while (iVar2 != 0) {
    (*(int *)(((uintptr_t)pf_module_state+0x3ee9U))) = iVar2 + -1;
    iVar1 = iVar2 * 4;
    iVar2 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
    if (*(code **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3ee9U))) + iVar1) != (code *)0x0) {
      (**(code **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3ee9U))) + iVar1))();
      iVar2 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
    }
  }
  (*(int *)(((uintptr_t)pf_module_state+0x3ee9U))) = 0;
  if (_DAT_00006800 != 0x50414d57) goto LAB_10044240;
  if (_DAT_00006804 == 0) goto LAB_10044240;
  if (_DAT_00006808 < 0xc) goto LAB_10044240;
  pcVar3 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_10044240;
  do {
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
LAB_10044240:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (pcVar3 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef DAT_0024e09c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10044280(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_00006800 != 0x50414d57) goto LAB_100442c0;
  if (_DAT_00006804 == 0) goto LAB_100442c0;
  if (_DAT_00006808 < 0xc) goto LAB_100442c0;
  pcVar1 = _DAT_00006830;
  if (_DAT_00006808 < 0x34) goto LAB_100442c0;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_100442c0:
    do {
      do {
      } while (_DAT_00006800 != 0x50414d57);
    } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) ||
            (pcVar1 = _DAT_0000689c, _DAT_00006808 < 0xa0));
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044300
 */

bool recovered_10044300(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 < 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044310
 */

undefined4 recovered_10044310(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044320
 */

undefined4 recovered_10044320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044330
 */

undefined4 recovered_10044330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044340
 */

undefined4 recovered_10044340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044350(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != 1000) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044370(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != 1000) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044390(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003be80(local_628,0,0x620);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)) &&
      (iVar1 = (*_DAT_00006944)(local_628), iVar1 != 0)))) {
    return local_61c;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044410
 */

undefined4 recovered_10044410(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
#define local_620 (*(int *)(frame + 32))
#define local_62c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10044420(int param_1)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 != 0) {
    recovered_1003be80(local_62c,0,0x620);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006944)(local_62c), iVar1 != 0)))) {
      iVar1 = local_620;
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 != param_1) {
      *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 3;
      return -1;
    }
  }
  recovered_1003be80(local_62c,0,0x620);
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 &&
      (((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)) &&
       (iVar1 = (*_DAT_00006944)(local_62c), iVar1 != 0)))))) {
    return local_620;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_620
#undef local_62c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044520(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003be80(local_628,0,0x620);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)) &&
      (iVar1 = (*_DAT_00006944)(local_628), iVar1 != 0)))) {
    return local_61c;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100445a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100445a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0xffffffff;
}

#undef DAT_0024d024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100445c0
 */

void recovered_100445c0(int in_stack_00000004,int *in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100445d0(in_stack_00000004,in_stack_00000008);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006830
#define DAT_00006830 (*(uint8_t *)(0x6830U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e09c
#define DAT_0024e09c (*(uint8_t *)(0x24e09cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006830
#define _DAT_00006830 (*(uint8_t * *)(0x6830U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(uint8_t * *)(0x689cU))
#define local_218 (*(char (*)[512])(frame + 24))
#define local_18 (*(char * *)(frame + 536))
#define local_14 (*(int * *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100445d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100445d0(int in_ECX,int *in_EDX)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char *text;
  ulong count;
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;

  if (in_ECX == 0) {
    uVar1 = 0x16;
LAB_10044700:
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = uVar1;
  }
  else {
    local_218[0] = '\0';
    if ((in_EDX == (int *)0x0) || (text = (char *)*in_EDX, text == (char *)0x0)) {
      pf_varargs_1003e570__4_(local_218,0x200,(char *)((uintptr_t)pf_module_state+0xd0dU),in_ECX);
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
      local_14 = in_EDX;
      do {
        local_18 = text;
        count = recovered_1003c2f0(text);
        if (0x1ff < iVar3 + 2 + count) {
          uVar1 = 7;
          goto LAB_10044700;
        }
        if (iVar4 != 0) {
          local_218[iVar3] = ' ';
          iVar3 = iVar3 + 1;
        }
        recovered_1003bbf0(local_218 + iVar3,local_18,count);
        iVar3 = iVar3 + count;
        local_218[iVar3] = '\0';
        text = (char *)local_14[iVar4 + 1];
        iVar4 = iVar4 + 1;
      } while (text != (char *)0x0);
    }
    iVar4 = recovered_10043c60((int)local_218);
    iVar3 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
    if (iVar4 == 0) {
      while (iVar3 != 0) {
        (*(int *)(((uintptr_t)pf_module_state+0x3ee9U))) = iVar3 + -1;
        iVar4 = iVar3 * 4;
        iVar3 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
        if (*(code **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3ee9U))) + iVar4) != (code *)0x0) {
          (**(code **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3ee9U))) + iVar4))();
          iVar3 = (*(int *)(((uintptr_t)pf_module_state+0x3ee9U)));
        }
      }
      (*(int *)(((uintptr_t)pf_module_state+0x3ee9U))) = 0;
      if (_DAT_00006800 != 0x50414d57) goto LAB_10044720;
      if (_DAT_00006804 == 0) goto LAB_10044720;
      if (_DAT_00006808 < 0xc) goto LAB_10044720;
      if (_DAT_00006808 < 0x34) goto LAB_10044720;
      pcVar2 = _DAT_00006830;
      do {
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
        }
LAB_10044720:
        do {
          do {
          } while (_DAT_00006800 != 0x50414d57);
        } while (((_DAT_00006804 == 0) || (_DAT_00006808 < 0xc)) || (_DAT_00006808 < 0xa0));
        pcVar2 = _DAT_0000689c;
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006830
#undef DAT_0000689c
#undef DAT_0024d024
#undef DAT_0024e09c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006830
#undef _DAT_0000689c
#undef local_218
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044760
 */

void recovered_10044760(int in_stack_00000004,int *in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100445d0(in_stack_00000004,in_stack_00000008);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044770
 */

void recovered_10044770(int in_stack_00000004,int *in_stack_00000008)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100445d0(in_stack_00000004,in_stack_00000008);
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044780(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 - 1U < 0x46) {
                    /* WARNING: Could not emulate address calculation at 0x1004478e */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((param_1 - 1U) * 4 + ((uintptr_t)pf_module_state+0x909U)))();
    return uVar1;
  }
  if (param_1 - 200U < 2) {
    return 0x8000;
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100447e0
 */

undefined4 recovered_100447e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0x1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100447f0
 */

undefined4 recovered_100447f0(void)

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
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
    (*_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044850(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
    (*_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100448a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100448a0(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
    (*_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044900
 */

undefined4 recovered_10044900(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_EAX = 0;

  recovered_1003c650((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = extraout_EAX;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044950(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_EAX = 0;
  undefined4 uVar1;

  if (param_2 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    recovered_1003c650((undefined4 *)0x0);
    *param_2 = extraout_EAX;
    param_2[1] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044990
 */

undefined4 recovered_10044990(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100449b0
 */

undefined4 recovered_100449b0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100449d0
 */

undefined4 recovered_100449d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_4 != 0) {
    recovered_1003be80((void *)param_4,0,0x50);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044a10(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_2 == (undefined4 *)0x0) || (9 < param_1)) {
LAB_10044a94:
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  if ((0x13U >> (param_1 & 0x1f) & 1) == 0) {
    if ((0x20cU >> (param_1 & 0x1f) & 1) == 0) {
      if (param_1 != 8) goto LAB_10044a94;
      param_2[1] = 0;
      *param_2 = 0x20;
      param_2[3] = 0;
      param_2[2] = 0x20;
    }
    else {
      param_2[1] = 0;
      *param_2 = 0x8000000;
      param_2[3] = 0;
      param_2[2] = 0x8000000;
    }
  }
  else {
    param_2[1] = 0xffffffff;
    *param_2 = 0xffffffff;
    param_2[3] = 0xffffffff;
    param_2[2] = 0xffffffff;
  }
  return 0;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044ab0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 10) && ((799U >> (param_1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044ae0(undefined4 param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    recovered_1003be80((void *)param_2,0,0x50);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000689c
#define DAT_0000689c (*(uint8_t *)(0x689cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000689c
#define _DAT_0000689c (*(code * *)(0x689cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044b20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
    (*_DAT_0000689c)();
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b70
 */

undefined4 recovered_10044b70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b80
 */

undefined4 recovered_10044b80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b90
 */

undefined4 recovered_10044b90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ba0
 */

undefined4 recovered_10044ba0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bb0
 */

undefined4 recovered_10044bb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044bc0(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_2 = 0;
  return 0;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044bf0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    recovered_1003be80((void *)param_1,0,0xc0);
    pf_varargs_1003e570__4_((char *)param_1,0x20,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x2a21U));
    pf_varargs_1003e570__4_((char *)(param_1 + 0x20),0x20,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x11abU));
    pf_varargs_1003e570__4_((char *)(param_1 + 0x40),0x20,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x2a27U));
    pf_varargs_1003e570__4_((char *)(param_1 + 0x60),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x2a2bU));
    pf_varargs_1003e570__4_((char *)(param_1 + 0xa0),0x20,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0xf3cU));
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044cb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044cb0(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1003c2f0((char *)((uintptr_t)pf_module_state+0x11abU));
  if (param_1 == 0 || param_2 == 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
  }
  else {
    if (uVar1 < param_2) {
      recovered_1003bbf0((void *)param_1,(void *)((uintptr_t)pf_module_state+0x11abU),uVar1 + 1);
      return 0;
    }
    recovered_1003bbf0((void *)param_1,(void *)((uintptr_t)pf_module_state+0x11abU),param_2);
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x3f;
  }
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044d30(int param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_1 - 0x20U < 0xffffffe1) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  iVar2 = param_1 * 0x10;
  uVar1 = *(undefined4 *)(iVar2 + ((uintptr_t)pf_module_state+0x3f6dU));
  *(undefined4 *)(iVar2 + ((uintptr_t)pf_module_state+0x3f6dU)) = param_2;
  *(undefined4 *)(iVar2 + ((uintptr_t)pf_module_state+0x3f71U)) = 0;
  *(undefined4 *)(iVar2 + ((uintptr_t)pf_module_state+0x3f75U)) = 0;
  *(undefined4 *)(iVar2 + ((uintptr_t)pf_module_state+0x3f79U)) = 0;
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044d90(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_1 - 0x20U < 0xffffffe1) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      iVar3 = param_1 * 0x10;
      param_3[3] = *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f79U));
      param_3[2] = *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f75U));
      param_3[1] = *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f71U));
      *param_3 = *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f6dU));
    }
    uVar2 = 0;
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = param_1 * 0x10;
      *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f79U)) = param_2[3];
      *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f75U)) = param_2[2];
      uVar1 = *param_2;
      *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f71U)) = param_2[1];
      *(undefined4 *)(iVar3 + ((uintptr_t)pf_module_state+0x3f6dU)) = uVar1;
    }
  }
  return uVar2;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e320
#define DAT_0024e320 (*(uint8_t *)(0x24e320U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044e20(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_3 != (uint *)0x0) {
    *param_3 = (*(uint *)(((uintptr_t)pf_module_state+0x416dU)));
  }
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if (param_1 == 3) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = *param_2;
      return uVar1;
    }
    if (param_1 == 2) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) & ~*param_2;
      return uVar1;
    }
    if (param_1 == 1) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) | *param_2;
      return uVar1;
    }
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024e320

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e320
#define DAT_0024e320 (*(uint8_t *)(0x24e320U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044e80(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_3 != (uint *)0x0) {
    *param_3 = (*(uint *)(((uintptr_t)pf_module_state+0x416dU)));
  }
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if (param_1 == 3) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = *param_2;
      return uVar1;
    }
    if (param_1 == 2) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) & ~*param_2;
      return uVar1;
    }
    if (param_1 == 1) {
      (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) = (*(uint *)(((uintptr_t)pf_module_state+0x416dU))) | *param_2;
      return uVar1;
    }
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024e320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ee0
 */

undefined4 recovered_10044ee0(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
#define local_62c (*(undefined1 (*)[12])(frame + 20))
#define local_620 (*(int *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044ef0(int param_1)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  recovered_1003be80(local_62c,0,0x620);
  if (((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
      ((_DAT_00006808 < 0x148 || (_DAT_00006944 == (code *)0x0)))) ||
     (iVar1 = (*_DAT_00006944)(local_62c), iVar1 == 0)) {
    local_620 = 1;
  }
  uVar2 = 0;
  if ((param_1 != 0) && (local_620 != param_1)) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 3;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef DAT_0024d024
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_62c
#undef local_620

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044f90(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0;
  return 0;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044fc0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0xffffffff;
  return 0;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10044ff0(uint *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (uint *)0x0 || param_2 - 0x20U < 0xffffffe1) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *param_1 | 1 << ((byte)param_2 & 0x1f);
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10045030(uint *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;

  if (param_1 == (uint *)0x0 || param_2 - 0x20U < 0xffffffe1) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    bVar1 = (byte)param_2 & 0x1f;
    *param_1 = *param_1 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10045070(uint *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (uint *)0x0 || param_2 - 0x20 < 0xffffffe1) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)((*param_1 >> (param_2 & 0x1f) & 1) != 0);
  }
  return uVar1;
}

#undef DAT_0024d024

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e324
#define DAT_0024e324 (*(uint8_t *)(0x24e324U))
#undef DAT_0024e328
#define DAT_0024e328 (*(uint8_t *)(0x24e328U))
#undef DAT_0024e32c
#define DAT_0024e32c (*(uint8_t *)(0x24e32cU))
#undef DAT_0024e330
#define DAT_0024e330 (*(uint8_t *)(0x24e330U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100450b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100450b0(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;

  bVar4 = 0;
  if (param_1 < 3 && param_2 != (undefined4 *)0x0) {
    if ((*(int *)(((uintptr_t)pf_module_state+0x417dU))) == 0 && (*(int *)(((uintptr_t)pf_module_state+0x4179U))) == 0) {
      recovered_1003be80(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x4171U))),0,0x2c);
      (*(int *)(((uintptr_t)pf_module_state+0x417dU))) = 0x588;
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4175U))) = 1;
      (*(int *)(((uintptr_t)pf_module_state+0x4179U))) = 0xb00;
    }
    puVar3 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x4171U)));
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      param_2 = param_2 + (uint)bVar4 * -2 + 1;
    }
    uVar1 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x19;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024e324
#undef DAT_0024e328
#undef DAT_0024e32c
#undef DAT_0024e330

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e324
#define DAT_0024e324 (*(uint8_t *)(0x24e324U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10045130(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_1 < 3 && param_3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x4171U)));
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar1 = 0;
  }
  else {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x19;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_0024d024
#undef DAT_0024e324

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045170
 */

void recovered_10045170(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
    param_1[3] = param_1[3] & 0xfffffa77;
    *(byte *)((int)param_1 + 9) = *(byte *)((int)param_1 + 9) | 0xb;
  }
  return;
}


#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100451a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100451a0(uint param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 3) {
    if (param_2 == -0x7ffb9982) {
      return 0;
    }
    if (param_2 == 0x40087468) {
      if (param_3 == (undefined4 *)0x0) {
        *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
        return 0xffffffff;
      }
      *param_3 = 0x500019;
      param_3[1] = 0;
      return 0;
    }
  }
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x19;
  return 0xffffffff;
}

#undef DAT_0024d024

#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10045200(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  uint uVar3;

  if (param_1 < 1) {
    local_14 = 0;
  }
  else {
    uVar3 = param_1 - 1;
    local_18 = uVar3;
    if (0xfe < uVar3) {
      local_18 = 0xff;
    }
    if (param_2 == (uint *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = *param_2 & 1;
    }
    if ((param_3 != (uint *)0x0) && ((*param_3 & 1) != 0)) {
      if (((*(int * *)(((uintptr_t)pf_module_state+0x3315U))) == (int *)0x0) || (*(*(int * *)(((uintptr_t)pf_module_state+0x3315U))) != 0x54474c46)) {
        *param_3 = *param_3 & 0xfffffffe;
      }
      else {
        local_14 = local_14 + 1;
      }
    }
    if ((param_4 != (uint *)0x0) && ((*param_4 & 1) != 0)) {
      *param_4 = *param_4 & 0xfffffffe;
    }
    if (uVar3 != 0) {
      uVar3 = 1;
      do {
        bVar2 = (byte)uVar3;
        if (param_2 != (uint *)0x0) {
          if ((param_2[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
            param_2[uVar3 >> 5] = param_2[uVar3 >> 5] & ~(1 << (bVar2 & 0x1f));
          }
        }
        if (param_3 != (uint *)0x0) {
          if ((param_3[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
            if (((uVar3 < 0x20) && (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + uVar3 * 4) != (int *)0x0)) &&
               (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + uVar3 * 4) == 0x54474c46)) {
              local_14 = local_14 + 1;
            }
            else {
              param_3[uVar3 >> 5] = param_3[uVar3 >> 5] & ~(1 << (bVar2 & 0x1f));
            }
          }
        }
        if (param_4 != (uint *)0x0) {
          if ((param_4[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
            param_4[uVar3 >> 5] = param_4[uVar3 >> 5] & ~(1 << (bVar2 & 0x1f));
          }
        }
        iVar1 = (1 - local_18) + uVar3;
        uVar3 = uVar3 + 1;
      } while (iVar1 != 1);
    }
  }
  return local_14;
}

#undef DAT_0024d4c8
#undef local_18
#undef local_14

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024d4c8
#define DAT_0024d4c8 (*(uint8_t *)(0x24d4c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10045360(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;

  if (param_1 == 0 && param_2 != 0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0xe;
    iVar1 = -1;
  }
  else if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = (ushort *)(param_1 + 6);
    iVar1 = 0;
    do {
      *puVar2 = 0;
      uVar3 = 0x20;
      if ((((*(uint *)(puVar2 + -3) < 0x20) &&
           (*(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + *(uint *)(puVar2 + -3) * 4) != (int *)0x0)) &&
          (**(int **)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x3315U))) + *(uint *)(puVar2 + -3) * 4) == 0x54474c46)) &&
         (uVar3 = puVar2[-1] & 5, uVar3 == 0)) {
        iVar4 = 0;
      }
      else {
        *puVar2 = uVar3;
        iVar4 = 1;
      }
      iVar1 = iVar1 + iVar4;
      puVar2 = puVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

#undef DAT_0024d024
#undef DAT_0024d4c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100453f0
 */

undefined4 recovered_100453f0(int *param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0x16;
  if ((param_2 != (undefined *)0x0 && param_1 != (int *)0x0) && (uVar1 = 0, *param_1 == 0)) {
    *param_1 = 1;
    (*(code *)param_2)();
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_0024d4c0
#define DAT_0024d4c0 (*(uint8_t *)(0x24d4c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10045430(int *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_3 == (undefined *)0x0) {
    uVar2 = 0x16;
  }
  else {
    if (param_1 != (int *)0x0) {
      iVar1 = (*(int *)(((uintptr_t)pf_module_state+0x330dU))) + 1;
      *param_1 = (*(int *)(((uintptr_t)pf_module_state+0x330dU)));
      (*(int *)(((uintptr_t)pf_module_state+0x330dU))) = iVar1;
    }
    (*(code *)param_3)(param_4);
    uVar2 = 0;
  }
  return uVar2;
}

#undef DAT_0024d4c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045470
 */

undefined4 recovered_10045470(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045490
 */

undefined4 recovered_10045490(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100454a0
 */

undefined4 recovered_100454a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100454c0
 */

undefined4 recovered_100454c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100454d0
 */

undefined4 recovered_100454d0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100454f0
 */

undefined4 recovered_100454f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045500
 */

undefined4 recovered_10045500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045510
 */

undefined4 recovered_10045510(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045520
 */

undefined4 recovered_10045520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045530
 */

undefined4 recovered_10045530(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045550
 */

undefined4 recovered_10045550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045560
 */

undefined4 recovered_10045560(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045580
 */

undefined4 recovered_10045580(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455a0
 */

undefined4 recovered_100455a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455b0
 */

undefined4 recovered_100455b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455c0
 */

undefined4 recovered_100455c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455d0
 */

undefined4 recovered_100455d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455e0
 */

undefined4 recovered_100455e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_0024e351
#define DAT_0024e351 (*(char *)(0x24e351U))
#undef DAT_0024e352
#define DAT_0024e352 (*(char *)(0x24e352U))
#undef DAT_0024e353
#define DAT_0024e353 (*(char *)(0x24e353U))
#undef DAT_0024e354
#define DAT_0024e354 (*(char *)(0x24e354U))
#undef DAT_0024e355
#define DAT_0024e355 (*(char *)(0x24e355U))
#undef DAT_0024e356
#define DAT_0024e356 (*(char *)(0x24e356U))
#undef DAT_0024e357
#define DAT_0024e357 (*(char *)(0x24e357U))
#undef DAT_0024e358
#define DAT_0024e358 (*(char *)(0x24e358U))
#undef DAT_0024e359
#define DAT_0024e359 (*(char *)(0x24e359U))
#undef DAT_0024e35a
#define DAT_0024e35a (*(char *)(0x24e35aU))
#undef DAT_0024e35b
#define DAT_0024e35b (*(char *)(0x24e35bU))
#undef DAT_0024e35c
#define DAT_0024e35c (*(char *)(0x24e35cU))
#undef DAT_0024e35d
#define DAT_0024e35d (*(char *)(0x24e35dU))
#undef DAT_0024e35e
#define DAT_0024e35e (*(char *)(0x24e35eU))
#undef DAT_0024e35f
#define DAT_0024e35f (*(char *)(0x24e35fU))
#undef DAT_0024e360
#define DAT_0024e360 (*(char *)(0x24e360U))
#undef DAT_0024e361
#define DAT_0024e361 (*(char *)(0x24e361U))
#undef DAT_0024e362
#define DAT_0024e362 (*(char *)(0x24e362U))
#undef DAT_0024e363
#define DAT_0024e363 (*(char *)(0x24e363U))
#undef DAT_0024e364
#define DAT_0024e364 (*(char *)(0x24e364U))
#undef DAT_0024e365
#define DAT_0024e365 (*(char *)(0x24e365U))
#undef DAT_0024e366
#define DAT_0024e366 (*(char *)(0x24e366U))
#undef DAT_0024e367
#define DAT_0024e367 (*(char *)(0x24e367U))
#undef DAT_0024e368
#define DAT_0024e368 (*(char *)(0x24e368U))
#undef DAT_0024e369
#define DAT_0024e369 (*(char *)(0x24e369U))
#undef DAT_0024e36a
#define DAT_0024e36a (*(char *)(0x24e36aU))
#undef DAT_0024e36b
#define DAT_0024e36b (*(char *)(0x24e36bU))
#undef DAT_0024e36c
#define DAT_0024e36c (*(char *)(0x24e36cU))
#undef DAT_0024e36d
#define DAT_0024e36d (*(char *)(0x24e36dU))
#undef DAT_0024e36e
#define DAT_0024e36e (*(char *)(0x24e36eU))
#undef DAT_0024e36f
#define DAT_0024e36f (*(char *)(0x24e36fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100455f0
 */

undefined4 recovered_100455f0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  iVar1 = 1;
  if (((((((((*(char *)(((uintptr_t)pf_module_state+0x419eU))) != '\0') && (iVar1 = 2, (*(char *)(((uintptr_t)pf_module_state+0x419fU))) == '\x01')) &&
          (iVar1 = 3, (*(char *)(((uintptr_t)pf_module_state+0x41a0U))) == '\x01')) &&
         (((iVar1 = 4, (*(char *)(((uintptr_t)pf_module_state+0x41a1U))) == '\x01' && (iVar1 = 5, (*(char *)(((uintptr_t)pf_module_state+0x41a2U))) == '\x01')) &&
          ((iVar1 = 6, (*(char *)(((uintptr_t)pf_module_state+0x41a3U))) == '\x01' &&
           ((iVar1 = 7, (*(char *)(((uintptr_t)pf_module_state+0x41a4U))) == '\x01' && (iVar1 = 8, (*(char *)(((uintptr_t)pf_module_state+0x41a5U))) == '\x01')))))))) &&
        (iVar1 = 9, (*(char *)(((uintptr_t)pf_module_state+0x41a6U))) == '\x01')) &&
       (((iVar1 = 10, (*(char *)(((uintptr_t)pf_module_state+0x41a7U))) == '\x01' && (iVar1 = 0xb, (*(char *)(((uintptr_t)pf_module_state+0x41a8U))) == '\x01')) &&
        (iVar1 = 0xc, (*(char *)(((uintptr_t)pf_module_state+0x41a9U))) == '\x01')))) &&
      (((iVar1 = 0xd, (*(char *)(((uintptr_t)pf_module_state+0x41aaU))) == '\x01' && (iVar1 = 0xe, (*(char *)(((uintptr_t)pf_module_state+0x41abU))) == '\x01')) &&
       ((iVar1 = 0xf, (*(char *)(((uintptr_t)pf_module_state+0x41acU))) == '\x01' &&
        ((iVar1 = 0x10, (*(char *)(((uintptr_t)pf_module_state+0x41adU))) == '\x01' && (iVar1 = 0x11, (*(char *)(((uintptr_t)pf_module_state+0x41aeU))) == '\x01')))))))) &&
     (((iVar1 = 0x12, (*(char *)(((uintptr_t)pf_module_state+0x41afU))) == '\x01' &&
       (((((iVar1 = 0x13, (*(char *)(((uintptr_t)pf_module_state+0x41b0U))) == '\x01' && (iVar1 = 0x14, (*(char *)(((uintptr_t)pf_module_state+0x41b1U))) == '\x01')) &&
          (iVar1 = 0x15, (*(char *)(((uintptr_t)pf_module_state+0x41b2U))) == '\x01')) &&
         ((iVar1 = 0x16, (*(char *)(((uintptr_t)pf_module_state+0x41b3U))) == '\x01' && (iVar1 = 0x17, (*(char *)(((uintptr_t)pf_module_state+0x41b4U))) == '\x01')))) &&
        ((iVar1 = 0x18, (*(char *)(((uintptr_t)pf_module_state+0x41b5U))) == '\x01' &&
         ((iVar1 = 0x19, (*(char *)(((uintptr_t)pf_module_state+0x41b6U))) == '\x01' && (iVar1 = 0x1a, (*(char *)(((uintptr_t)pf_module_state+0x41b7U))) == '\x01')))))))) &&
      ((iVar1 = 0x1b, (*(char *)(((uintptr_t)pf_module_state+0x41b8U))) == '\x01' &&
       (((iVar1 = 0x1c, (*(char *)(((uintptr_t)pf_module_state+0x41b9U))) == '\x01' && (iVar1 = 0x1d, (*(char *)(((uintptr_t)pf_module_state+0x41baU))) == '\x01')) &&
        (iVar1 = 0x1e, (*(char *)(((uintptr_t)pf_module_state+0x41bbU))) == '\x01')))))))) {
    iVar1 = 0x1f;
    if ((*(char *)(((uintptr_t)pf_module_state+0x41bcU))) == '\x01') {
      return 0xb;
    }
  }
  *(undefined1 *)(iVar1 + ((uintptr_t)pf_module_state+0x419dU)) = 1;
  *(undefined4 *)(iVar1 * 4 + ((uintptr_t)pf_module_state+0x41bdU)) = 0;
  *param_1 = iVar1;
  return 0;
}

#undef DAT_0024e351
#undef DAT_0024e352
#undef DAT_0024e353
#undef DAT_0024e354
#undef DAT_0024e355
#undef DAT_0024e356
#undef DAT_0024e357
#undef DAT_0024e358
#undef DAT_0024e359
#undef DAT_0024e35a
#undef DAT_0024e35b
#undef DAT_0024e35c
#undef DAT_0024e35d
#undef DAT_0024e35e
#undef DAT_0024e35f
#undef DAT_0024e360
#undef DAT_0024e361
#undef DAT_0024e362
#undef DAT_0024e363
#undef DAT_0024e364
#undef DAT_0024e365
#undef DAT_0024e366
#undef DAT_0024e367
#undef DAT_0024e368
#undef DAT_0024e369
#undef DAT_0024e36a
#undef DAT_0024e36b
#undef DAT_0024e36c
#undef DAT_0024e36d
#undef DAT_0024e36e
#undef DAT_0024e36f

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045830
 */

undefined4 recovered_10045830(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0x16;
  if (param_1 < 0x20) {
    *(undefined1 *)(param_1 + ((uintptr_t)pf_module_state+0x419dU)) = 0;
    *(undefined4 *)(param_1 * 4 + ((uintptr_t)pf_module_state+0x41bdU)) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045860
 */

undefined4 recovered_10045860(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((param_1 < 0x20) && (*(char *)(param_1 + ((uintptr_t)pf_module_state+0x419dU)) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 * 4 + ((uintptr_t)pf_module_state+0x41bdU));
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045880
 */

undefined4 recovered_10045880(uint param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0x16;
  if ((param_1 < 0x20) && (*(char *)(param_1 + ((uintptr_t)pf_module_state+0x419dU)) == '\x01')) {
    *(undefined4 *)(param_1 * 4 + ((uintptr_t)pf_module_state+0x41bdU)) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458b0
 */

undefined4 recovered_100458b0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458d0
 */

undefined4 recovered_100458d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458e0
 */

undefined4 recovered_100458e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100458f0
 */

undefined4 recovered_100458f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045900
 */

undefined4 recovered_10045900(void)

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
#undef DAT_00006944
#define DAT_00006944 (*(uint8_t *)(0x6944U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006944
#define _DAT_00006944 (*(code * *)(0x6944U))
#define local_628 (*(undefined1 (*)[12])(frame + 24))
#define local_61c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10045910(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003be80(local_628,0,0x620);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x147 < _DAT_00006808 && (_DAT_00006944 != (code *)0x0)) &&
      (iVar1 = (*_DAT_00006944)(local_628), iVar1 != 0)))) {
    return local_61c;
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006944
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006944
#undef local_628
#undef local_61c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045990
 */

bool recovered_10045990(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459a0
 */

undefined4 recovered_100459a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  *param_1 = 0;
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459c0
 */

undefined4 recovered_100459c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459d0
 */

undefined4 recovered_100459d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459e0
 */

undefined4 recovered_100459e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100459f0
 */

undefined4 recovered_100459f0(void)

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
#undef DAT_00006954
#define DAT_00006954 (*(uint8_t *)(0x6954U))
#undef DAT_0024d38c
#define DAT_0024d38c (*(uint8_t *)(0x24d38cU))
#undef DAT_0024d4b4
#define DAT_0024d4b4 (*(uint8_t *)(0x24d4b4U))
#undef DAT_0024d548
#define DAT_0024d548 (*(uint8_t *)(0x24d548U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006954
#define _DAT_00006954 (*(code * *)(0x6954U))
#define local_411 (*(char (*)[512])(frame + 31))
#define local_211 (*(char (*)[512])(frame + 543))
#define local_11 (*(undefined1 *)(frame + 1055))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10045a00(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  void *stream;
  void *stream_00;
  char *text;
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (param_2 == 0) {
    uVar2 = 0x16;
  }
  else {
    local_211[0] = '\0';
    if ((param_5 == (int *)0x0) || (text = (char *)*param_5, text == (char *)0x0)) {
      pf_varargs_1003e570__4_(local_211,0x200,(char *)((uintptr_t)pf_module_state+0xd0dU),param_2);
    }
    else {
      iVar3 = 0;
      iVar4 = 0;
      do {
        uVar1 = recovered_1003c2f0(text);
        if (0x1ff < iVar4 + 2 + uVar1) {
          return 7;
        }
        if (iVar3 != 0) {
          local_211[iVar4] = ' ';
          iVar4 = iVar4 + 1;
        }
        recovered_1003bbf0(local_211 + iVar4,(void *)param_5[iVar3],uVar1);
        iVar4 = iVar4 + uVar1;
        local_211[iVar4] = '\0';
        text = (char *)param_5[iVar3 + 1];
        iVar3 = iVar3 + 1;
      } while (text != (char *)0x0);
    }
    local_411[0] = '\0';
    uVar2 = 2;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x157 < _DAT_00006808 && (_DAT_00006954 != (code *)0x0)))) {
      iVar3 = (*_DAT_00006954)(local_211,local_411,0x200);
      stream_00 = (*(void * *)(((uintptr_t)pf_module_state+0x3301U)));
      stream = (*(void * *)(((uintptr_t)pf_module_state+0x31d9U)));
      if (iVar3 == 0) {
        if (local_411[0] != '\0') {
          uVar1 = recovered_1003c2f0(local_411);
          recovered_10040820(local_411,1,uVar1,stream_00);
          local_11 = 10;
          recovered_10040820(&local_11,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x3301U))));
        }
        uVar2 = 2;
      }
      else {
        if (local_411[0] != '\0') {
          uVar1 = recovered_1003c2f0(local_411);
          recovered_10040820(local_411,1,uVar1,stream);
          local_11 = 10;
          recovered_10040820(&local_11,1,1,(*(void * *)(((uintptr_t)pf_module_state+0x31d9U))));
        }
        uVar2 = 0;
        if (param_1 != (int *)0x0) {
          (*(int *)(((uintptr_t)pf_module_state+0x3395U))) = (*(int *)(((uintptr_t)pf_module_state+0x3395U))) + 1;
          *param_1 = (*(int *)(((uintptr_t)pf_module_state+0x3395U)));
        }
      }
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006954
#undef DAT_0024d38c
#undef DAT_0024d4b4
#undef DAT_0024d548
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006954
#undef local_411
#undef local_211
#undef local_11

#define in_stack_ffffffec (*(undefined4 *)(frame + 28))
#define in_stack_fffffff0 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045bf0
 */

void recovered_10045bf0(int *param_1,int param_2,int *in_stack_00000014)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  recovered_10045a00(param_1,param_2,in_stack_ffffffec,in_stack_fffffff0,in_stack_00000014);
  return;
}

#undef in_stack_ffffffec
#undef in_stack_fffffff0

#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024e3f0
#define DAT_0024e3f0 (*(uint8_t *)(0x24e3f0U))
#undef DAT_0024e3f4
#define DAT_0024e3f4 (*(uint8_t *)(0x24e3f4U))
#undef DAT_0024e3f8
#define DAT_0024e3f8 (*(uint8_t *)(0x24e3f8U))
#undef DAT_0024e3fc
#define DAT_0024e3fc (*(uint8_t *)(0x24e3fcU))
#undef DAT_0024e400
#define DAT_0024e400 (*(uint8_t *)(0x24e400U))
#undef DAT_0024e404
#define DAT_0024e404 (*(uint8_t *)(0x24e404U))
#undef DAT_0024e408
#define DAT_0024e408 (*(uint8_t *)(0x24e408U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10045c20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  char *vararg0;

  if (param_1 == 0) {
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = ((uintptr_t)pf_module_state+0x2a3bU);
    puVar2 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x423dU)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 0;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = 0;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = ((uintptr_t)pf_module_state+0x2a3bU);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x2a40U);
  }
  else {
    pcVar1 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
    if (pcVar1 == (char *)0x0) {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
    }
    else {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      if (*pcVar1 != '\0') {
        vararg0 = pcVar1;
      }
    }
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4259U),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)vararg0);
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4299U),0x80,(char *)((uintptr_t)pf_module_state+0x2a50U),((uintptr_t)pf_module_state+0x4259U));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = ((uintptr_t)pf_module_state+0x4259U);
    puVar2 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x423dU)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 1000;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = 1000;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = ((uintptr_t)pf_module_state+0x4259U);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x4299U);
    if (param_1 != 1000) {
      puVar2 = (undefined1 *)0x0;
    }
  }
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
  (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  return puVar2;
}

#undef DAT_0024b1fa
#undef DAT_0024e3f0
#undef DAT_0024e3f4
#undef DAT_0024e3f8
#undef DAT_0024e3fc
#undef DAT_0024e400
#undef DAT_0024e404
#undef DAT_0024e408

#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024e3f0
#define DAT_0024e3f0 (*(uint8_t *)(0x24e3f0U))
#undef DAT_0024e3f4
#define DAT_0024e3f4 (*(uint8_t *)(0x24e3f4U))
#undef DAT_0024e3f8
#define DAT_0024e3f8 (*(uint8_t *)(0x24e3f8U))
#undef DAT_0024e3fc
#define DAT_0024e3fc (*(uint8_t *)(0x24e3fcU))
#undef DAT_0024e400
#define DAT_0024e400 (*(uint8_t *)(0x24e400U))
#undef DAT_0024e404
#define DAT_0024e404 (*(uint8_t *)(0x24e404U))
#undef DAT_0024e408
#define DAT_0024e408 (*(uint8_t *)(0x24e408U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10045d30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;

  if (param_1 == 0) {
LAB_10045d9a:
    puVar3 = (undefined1 *)0x0;
  }
  else {
    iVar1 = recovered_1003c320((char *)param_1,(char *)((uintptr_t)pf_module_state+0x2a3bU));
    if (iVar1 == 0) {
      uVar5 = ((uintptr_t)pf_module_state+0x2a3bU);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x2a40U);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 0;
    }
    else {
      pcVar2 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
      if (pcVar2 == (char *)0x0) {
        pcVar4 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      }
      else {
        pcVar4 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
        if (*pcVar2 != '\0') {
          pcVar4 = pcVar2;
        }
      }
      iVar1 = recovered_1003c320((char *)param_1,pcVar4);
      if (iVar1 != 0) goto LAB_10045d9a;
      pcVar2 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
      if (pcVar2 == (char *)0x0) {
        pcVar4 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      }
      else {
        pcVar4 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
        if (*pcVar2 != '\0') {
          pcVar4 = pcVar2;
        }
      }
      pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4259U),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)pcVar4);
      uVar5 = ((uintptr_t)pf_module_state+0x4259U);
      pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4299U),0x80,(char *)((uintptr_t)pf_module_state+0x2a50U),((uintptr_t)pf_module_state+0x4259U));
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x4299U);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 1000;
    }
    puVar3 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x423dU)));
    (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = uVar5;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = uVar5;
  }
  return puVar3;
}

#undef DAT_0024b1fa
#undef DAT_0024e3f0
#undef DAT_0024e3f4
#undef DAT_0024e3f8
#undef DAT_0024e3fc
#undef DAT_0024e400
#undef DAT_0024e404
#undef DAT_0024e408

#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024e3f0
#define DAT_0024e3f0 (*(uint8_t *)(0x24e3f0U))
#undef DAT_0024e3f4
#define DAT_0024e3f4 (*(uint8_t *)(0x24e3f4U))
#undef DAT_0024e3f8
#define DAT_0024e3f8 (*(uint8_t *)(0x24e3f8U))
#undef DAT_0024e3fc
#define DAT_0024e3fc (*(uint8_t *)(0x24e3fcU))
#undef DAT_0024e400
#define DAT_0024e400 (*(uint8_t *)(0x24e400U))
#undef DAT_0024e404
#define DAT_0024e404 (*(uint8_t *)(0x24e404U))
#undef DAT_0024e408
#define DAT_0024e408 (*(uint8_t *)(0x24e408U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045e50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10045e50(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *vararg0;
  int iVar3;

  if (param_5 == (int *)0x0 || (param_3 == 0 || param_2 == 0)) {
    return 0x16;
  }
  if (param_1 == 0) {
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = ((uintptr_t)pf_module_state+0x2a3bU);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 0;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = 0;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = ((uintptr_t)pf_module_state+0x2a3bU);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x2a40U);
  }
  else {
    pcVar1 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
    if (pcVar1 == (char *)0x0) {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
    }
    else {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      if (*pcVar1 != '\0') {
        vararg0 = pcVar1;
      }
    }
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4259U),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)vararg0);
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4299U),0x80,(char *)((uintptr_t)pf_module_state+0x2a50U),((uintptr_t)pf_module_state+0x4259U));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = ((uintptr_t)pf_module_state+0x4259U);
    (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 1000;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = 1000;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = ((uintptr_t)pf_module_state+0x4259U);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x4299U);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
    iVar3 = 0;
    iVar2 = 0;
    if (param_1 != 1000) goto LAB_10045f9d;
  }
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
  (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  iVar2 = recovered_10045fb0((undefined4 *)&(*(uint8_t *)(((uintptr_t)pf_module_state+0x423dU))),(byte *)param_2,param_3,param_4);
  iVar3 = param_2;
  if (iVar2 != 0) {
    iVar3 = 0;
  }
LAB_10045f9d:
  *param_5 = iVar3;
  return iVar2;
}

#undef DAT_0024b1fa
#undef DAT_0024e3f0
#undef DAT_0024e3f4
#undef DAT_0024e3f8
#undef DAT_0024e3fc
#undef DAT_0024e400
#undef DAT_0024e404
#undef DAT_0024e408

#define local_28 (*(int *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(byte * *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(undefined4 * *)(frame + 40))
#define local_14 (*(char * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045fb0
 */

undefined4 recovered_10045fb0(undefined4 *in_ECX,byte *in_EDX,int param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  bool bVar7;

  recovered_1003be80(in_EDX,0,0x1c);
  *(undefined4 *)(in_EDX + 8) = in_ECX[2];
  *(undefined4 *)(in_EDX + 0xc) = in_ECX[3];
  pcVar1 = (char *)*in_ECX;
  local_20 = in_EDX;
  local_18 = in_ECX;
  uVar2 = recovered_1003c2f0(pcVar1);
  uVar4 = uVar2 + 1;
  local_1c = param_4 - uVar4;
  if (uVar4 <= param_4) {
    recovered_1003bbf0((void *)param_3,pcVar1,uVar4);
    *(int *)local_20 = param_3;
    local_14 = (char *)local_18[1];
    uVar2 = recovered_1003c2f0(local_14);
    uVar5 = uVar2 + 1;
    bVar7 = uVar5 <= local_1c;
    local_1c = local_1c - uVar5;
    if (bVar7) {
      pvVar6 = (void *)(param_3 + uVar4);
      recovered_1003bbf0(pvVar6,local_14,uVar5);
      *(void **)(local_20 + 4) = pvVar6;
      pcVar1 = (char *)local_18[4];
      local_14 = pvVar6;
      uVar2 = recovered_1003c2f0(pcVar1);
      uVar4 = uVar2 + 1;
      bVar7 = uVar4 <= local_1c;
      local_1c = local_1c - uVar4;
      if (bVar7) {
        pvVar6 = (void *)((int)local_14 + uVar5);
        recovered_1003bbf0(pvVar6,pcVar1,uVar4);
        *(void **)(local_20 + 0x10) = pvVar6;
        pcVar1 = (char *)local_18[5];
        local_14 = pvVar6;
        uVar2 = recovered_1003c2f0(pcVar1);
        uVar5 = uVar2 + 1;
        bVar7 = local_1c < uVar5;
        local_1c = local_1c - uVar5;
        if (bVar7) {
          return 0x22;
        }
        pvVar6 = (void *)((int)local_14 + uVar4);
        recovered_1003bbf0(pvVar6,pcVar1,uVar5);
        *(void **)(local_20 + 0x14) = pvVar6;
        local_28 = (int)pvVar6 + uVar5;
        local_24 = local_1c;
        uVar3 = recovered_1004a160((undefined4 *)local_18[6],(int *)(local_20 + 0x18),&local_28,
                                   &local_24);
        return uVar3;
      }
    }
  }
  return 0x22;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046100
 */

int recovered_10046100(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *in_ECX;

  iVar1 = 0x16;
  if ((param_5 != (int *)0x0 && param_3 != 0) && (param_2 != 0 && param_1 != 0)) {
    in_ECX = (undefined4 *)recovered_10045d30(param_1);
    if (in_ECX == (undefined4 *)0x0) {
      param_2 = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = recovered_10045fb0(in_ECX,(byte *)param_2,param_3,param_4);
      if (iVar1 != 0) {
        param_2 = 0;
      }
    }
    *param_5 = param_2;
  }
  return iVar1;
}


#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024e3f0
#define DAT_0024e3f0 (*(uint8_t *)(0x24e3f0U))
#undef DAT_0024e3f4
#define DAT_0024e3f4 (*(uint8_t *)(0x24e3f4U))
#undef DAT_0024e3f8
#define DAT_0024e3f8 (*(uint8_t *)(0x24e3f8U))
#undef DAT_0024e3fc
#define DAT_0024e3fc (*(uint8_t *)(0x24e3fcU))
#undef DAT_0024e400
#define DAT_0024e400 (*(uint8_t *)(0x24e400U))
#undef DAT_0024e404
#define DAT_0024e404 (*(uint8_t *)(0x24e404U))
#undef DAT_0024e408
#define DAT_0024e408 (*(uint8_t *)(0x24e408U))
#undef DAT_0024e4cc
#define DAT_0024e4cc (*(uint8_t *)(0x24e4ccU))
#undef DAT_0024e4d0
#define DAT_0024e4d0 (*(uint8_t *)(0x24e4d0U))
#undef DAT_0024e4d4
#define DAT_0024e4d4 (*(uint8_t *)(0x24e4d4U))
#undef DAT_0024e4d8
#define DAT_0024e4d8 (*(uint8_t *)(0x24e4d8U))
#undef DAT_0024e4dc
#define DAT_0024e4dc (*(uint8_t *)(0x24e4dcU))
#undef DAT_0024e4e0
#define DAT_0024e4e0 (*(uint8_t *)(0x24e4e0U))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10046170(int param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined *puVar2;
  char *vararg0;
  undefined *puVar3;
  undefined4 uVar4;

  if (param_1 == 0) {
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x2a40U);
    uVar4 = ((uintptr_t)pf_module_state+0x2a3bU);
    local_14 = ((uintptr_t)pf_module_state+0x2a59U);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 0;
  }
  else {
    pcVar1 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
    if (pcVar1 == (char *)0x0) {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
    }
    else {
      vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      if (*pcVar1 != '\0') {
        vararg0 = pcVar1;
      }
    }
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4259U),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)vararg0);
    uVar4 = ((uintptr_t)pf_module_state+0x4259U);
    pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4299U),0x80,(char *)((uintptr_t)pf_module_state+0x2a50U),((uintptr_t)pf_module_state+0x4259U));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x4299U);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 1000;
    local_14 = ((uintptr_t)pf_module_state+0x2a5fU);
  }
  puVar3 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4319U)));
  if (param_1 != 1000) {
    puVar3 = (undefined *)0x0;
  }
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = uVar4;
  (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U)));
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = uVar4;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4329U))) = uVar4;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x432dU))) = 0;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4319U))) = local_14;
  (*(uint8_t * *)(((uintptr_t)pf_module_state+0x431dU))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  (*(int *)(((uintptr_t)pf_module_state+0x4321U))) = param_1;
  (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4325U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4329U)));
  puVar2 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4319U)));
  if (param_1 != 0) {
    puVar2 = puVar3;
  }
  return puVar2;
}

#undef DAT_0024b1fa
#undef DAT_0024e3f0
#undef DAT_0024e3f4
#undef DAT_0024e3f8
#undef DAT_0024e3fc
#undef DAT_0024e400
#undef DAT_0024e404
#undef DAT_0024e408
#undef DAT_0024e4cc
#undef DAT_0024e4d0
#undef DAT_0024e4d4
#undef DAT_0024e4d8
#undef DAT_0024e4dc
#undef DAT_0024e4e0
#undef local_14

#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
#undef DAT_0024e3f0
#define DAT_0024e3f0 (*(uint8_t *)(0x24e3f0U))
#undef DAT_0024e3f4
#define DAT_0024e3f4 (*(uint8_t *)(0x24e3f4U))
#undef DAT_0024e3f8
#define DAT_0024e3f8 (*(uint8_t *)(0x24e3f8U))
#undef DAT_0024e3fc
#define DAT_0024e3fc (*(uint8_t *)(0x24e3fcU))
#undef DAT_0024e400
#define DAT_0024e400 (*(uint8_t *)(0x24e400U))
#undef DAT_0024e404
#define DAT_0024e404 (*(uint8_t *)(0x24e404U))
#undef DAT_0024e408
#define DAT_0024e408 (*(uint8_t *)(0x24e408U))
#undef DAT_0024e4cc
#define DAT_0024e4cc (*(uint8_t *)(0x24e4ccU))
#undef DAT_0024e4d0
#define DAT_0024e4d0 (*(uint8_t *)(0x24e4d0U))
#undef DAT_0024e4d4
#define DAT_0024e4d4 (*(uint8_t *)(0x24e4d4U))
#undef DAT_0024e4d8
#define DAT_0024e4d8 (*(uint8_t *)(0x24e4d8U))
#undef DAT_0024e4dc
#define DAT_0024e4dc (*(uint8_t *)(0x24e4dcU))
#undef DAT_0024e4e0
#define DAT_0024e4e0 (*(uint8_t *)(0x24e4e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10046290(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *vararg0;
  undefined4 uVar4;

  if (param_1 == 0) {
LAB_100462c6:
    puVar2 = (undefined1 *)0x0;
  }
  else {
    iVar1 = recovered_1003c320((char *)param_1,(char *)((uintptr_t)pf_module_state+0x2a59U));
    if (iVar1 == 0) {
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4319U))) = ((uintptr_t)pf_module_state+0x2a59U);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x2a40U);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 0;
      uVar4 = ((uintptr_t)pf_module_state+0x2a3bU);
    }
    else {
      iVar1 = recovered_1003c320((char *)param_1,(char *)((uintptr_t)pf_module_state+0x2a5fU));
      if (iVar1 != 0) goto LAB_100462c6;
      pcVar3 = (char *)recovered_10043810((char *)((uintptr_t)pf_module_state+0x2a46U));
      if (pcVar3 == (char *)0x0) {
        vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
      }
      else {
        vararg0 = (char *)((uintptr_t)pf_module_state+0x2a4bU);
        if (*pcVar3 != '\0') {
          vararg0 = pcVar3;
        }
      }
      pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4259U),0x40,(char *)((uintptr_t)pf_module_state+0xd0dU),(uint)vararg0);
      uVar4 = ((uintptr_t)pf_module_state+0x4259U);
      pf_varargs_1003e570__4_((char *)((uintptr_t)pf_module_state+0x4299U),0x80,(char *)((uintptr_t)pf_module_state+0x2a50U),((uintptr_t)pf_module_state+0x4259U));
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4319U))) = ((uintptr_t)pf_module_state+0x2a5fU);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4251U))) = ((uintptr_t)pf_module_state+0x4299U);
      (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U))) = 1000;
    }
    (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4241U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4255U))) = ((uintptr_t)pf_module_state+0x29caU);
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x432dU))) = 0;
    puVar2 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4319U)));
    (*(uint8_t * *)(((uintptr_t)pf_module_state+0x431dU))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
    (*(uint8_t * *)(((uintptr_t)pf_module_state+0x4325U))) = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4329U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x423dU))) = uVar4;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4249U))) = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x424dU))) = uVar4;
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4321U))) = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4245U)));
    (*(uint32_t *)(((uintptr_t)pf_module_state+0x4329U))) = uVar4;
  }
  return puVar2;
}

#undef DAT_0024b1fa
#undef DAT_0024e3f0
#undef DAT_0024e3f4
#undef DAT_0024e3f8
#undef DAT_0024e3fc
#undef DAT_0024e400
#undef DAT_0024e404
#undef DAT_0024e408
#undef DAT_0024e4cc
#undef DAT_0024e4d0
#undef DAT_0024e4d4
#undef DAT_0024e4d8
#undef DAT_0024e4dc
#undef DAT_0024e4e0

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e4e4
#define DAT_0024e4e4 (*(uint8_t *)(0x24e4e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100463c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100463c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_1003e570__4_(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x4331U))),0x60,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x2a65U));
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e4e4

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e4e4
#define DAT_0024e4e4 (*(uint8_t *)(0x24e4e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_1003e570__4_(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x4331U))),0x60,(char *)((uintptr_t)pf_module_state+0xd0dU),((uintptr_t)pf_module_state+0x2a95U));
  *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x4e;
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e4e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046440
 */

undefined4 recovered_10046440(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_0024e4e4
#define DAT_0024e4e4 (*(uint8_t *)(0x24e4e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046450
 */

undefined1 * recovered_10046450(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)0x0;
  if ((*(uint8_t *)(((uintptr_t)pf_module_state+0x4331U))) != '\0') {
    puVar1 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x4331U)));
  }
  return puVar1;
}

#undef DAT_0024e4e4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046470
 */

ulong recovered_10046470(char *text,ulong max_length)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (max_length != 0 && text != (char *)0x0) {
    uVar1 = 0;
    do {
      if (text[uVar1] == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (max_length != uVar1);
    uVar1 = max_length;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100464a0
 */

int recovered_100464a0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  ulong count;

  count = 0;
  if (param_2 != 0 && param_1 != 0) {
    count = 0;
    do {
      if (*(char *)(param_1 + count) == '\0') goto LAB_100464cd;
      count = count + 1;
    } while (param_2 != count);
    count = param_2;
  }
LAB_100464cd:
  destination = recovered_1003bb30(count + 1);
  if (destination != (void *)0x0) {
    recovered_1003bbf0(destination,(void *)param_1,count);
    *(undefined1 *)((int)destination + count) = 0;
  }
  return (int)destination;
}


#undef DAT_0024b1fa
#define DAT_0024b1fa (*(uint8_t *)(0x24b1faU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046500
 */

int recovered_10046500(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;

  pcVar3 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  pbVar6 = &(*(uint8_t *)(((uintptr_t)pf_module_state+0x1047U)));
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
  }
  bVar7 = *pcVar3 != '\0';
  bVar2 = *pbVar6;
  uVar4 = CONCAT11(bVar2 != 0,*pcVar3);
  if (bVar7 || bVar2 != 0) {
    do {
      uVar5 = (uint)uVar4;
      if ((byte)((char)uVar4 + 0xbfU) < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 | 0x20;
      }
      if ((byte)uVar5 != bVar2) {
        return (uVar5 & 0xff) - (uint)bVar2;
      }
      pcVar1 = pcVar3 + bVar7;
      pcVar3 = pcVar3 + bVar7;
      bVar2 = pbVar6[uVar5 >> 8];
      pbVar6 = pbVar6 + (uVar5 >> 8);
      bVar7 = *pcVar1 != '\0';
      uVar4 = CONCAT11(bVar2 != 0,*pcVar1);
    } while (bVar7 || bVar2 != 0);
  }
  return 0;
}

#undef DAT_0024b1fa

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100465a0
 */

int recovered_100465a0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  if (param_3 != 0) {
    iVar4 = 0;
    do {
      uVar2 = 0;
      if (param_1 != 0) {
        bVar1 = *(byte *)(param_1 + iVar4);
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        uVar2 = (uint)bVar1;
      }
      if (param_2 == 0) {
        uVar3 = 0;
LAB_1004660c:
        return uVar2 - uVar3;
      }
      bVar1 = *(byte *)(param_2 + iVar4);
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      uVar3 = (uint)bVar1;
      if (((bVar1 == 0) || (uVar2 == 0)) || (uVar2 != uVar3)) goto LAB_1004660c;
      iVar4 = iVar4 + 1;
    } while (param_3 != iVar4);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046620
 */

int recovered_10046620(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (count != 0) {
    uVar3 = 0;
    do {
      uVar1 = 0;
      if (left != (char *)0x0) {
        uVar1 = (uint)(byte)left[uVar3];
      }
      if (right == (char *)0x0) {
        uVar2 = 0;
LAB_1004666c:
        return uVar1 - uVar2;
      }
      uVar2 = (uint)(byte)right[uVar3];
      if (((uVar2 == 0) || (uVar1 == 0)) || (uVar1 != uVar2)) goto LAB_1004666c;
      uVar3 = uVar3 + 1;
    } while (count != uVar3);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046680
 */

void recovered_10046680(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003bcb0(param_2,param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466a0
 */

void recovered_100466a0(uint *in_stack_00000004,uint *in_stack_00000008,uint in_stack_0000000c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003c070(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466b0
 */

undefined1 * recovered_100466b0(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *text;

  if (param_1 == 0) {
    if (param_3 == (int *)0x0) {
      return (undefined1 *)0x0;
    }
    param_1 = *param_3;
  }
  pcVar1 = (char *)0x0;
  if (((param_3 != (int *)0x0) && (param_2 != 0)) && ((char *)param_1 != (char *)0x0)) {
    uVar2 = recovered_1003c540((char *)param_1,(char *)param_2);
    text = (char *)(param_1 + uVar2);
    if (*(char *)(param_1 + uVar2) == '\0') {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar3 = recovered_1003c590(text,(char *)param_2);
      pcVar1 = text;
      if (pcVar3 == (char *)0x0) {
        uVar2 = recovered_1003c2f0(text);
        text = text + uVar2;
      }
      else {
        *pcVar3 = '\0';
        text = pcVar3 + 1;
      }
    }
    *param_3 = (int)text;
  }
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046730
 */

void * recovered_10046730(void *memory,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (count != 0) {
    do {
      if (*(char *)memory == (char)value) {
        return memory;
      }
      memory = (void *)((int)memory + 1);
      count = count - 1;
    } while (count != 0);
  }
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046760
 */

char * recovered_10046760(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (text == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar3 = (char *)0x0;
    do {
      cVar1 = *text;
      pcVar2 = text;
      if ((char)value != cVar1) {
        pcVar2 = pcVar3;
      }
      text = text + 1;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
  }
  return pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467a0
 */

undefined * recovered_100467a0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;

  puVar1 = (undefined *)((uintptr_t)pf_module_state+0x2cddU);
  if (param_1 - 1U < 0x14) {
    puVar1 = *(undefined **)(param_1 * 4 + ((uintptr_t)pf_module_state+0x2f09U));
  }
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467c0
 */

ulong recovered_100467c0(char *text,char *reject)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong uVar3;

  uVar3 = 0;
  if ((reject != (char *)0x0 && text != (char *)0x0) && (cVar1 = *text, cVar1 != '\0')) {
    uVar3 = 0;
    do {
      pcVar2 = recovered_1003c500(reject,(int)cVar1);
      if (pcVar2 != (char *)0x0) {
        return uVar3;
      }
      cVar1 = text[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (cVar1 != '\0');
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046820
 */

char * recovered_10046820(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  char *pcVar3;

  if (count == 0) {
    uVar2 = 0;
LAB_10046854:
    iVar1 = count - uVar2;
    if (uVar2 <= count && iVar1 != 0) {
      pcVar3 = destination + uVar2;
      do {
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    uVar2 = 0;
    do {
      if (source[uVar2] == '\0') goto LAB_10046854;
      destination[uVar2] = source[uVar2];
      uVar2 = uVar2 + 1;
    } while (count != uVar2);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046870
 */

char * recovered_10046870(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1003c2f0(destination);
  recovered_1003c3a0(destination + uVar1,source);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100468a0
 */

char * recovered_100468a0(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  uVar1 = recovered_1003c2f0(destination);
  if (count == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (source[uVar2] == '\0') break;
      destination[uVar2 + uVar1] = source[uVar2];
      uVar2 = uVar2 + 1;
      uVar3 = count;
    } while (count != uVar2);
  }
  destination[uVar3 + uVar1] = '\0';
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046900
 */

ulong recovered_10046900(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint count_00;

  if (source == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1003c2f0(source);
  }
  if (count != 0 && destination != (char *)0x0) {
    count_00 = uVar1;
    if (count - 1 <= uVar1) {
      count_00 = count - 1;
    }
    if (count_00 != 0) {
      recovered_1003bbf0(destination,source,count_00);
    }
    destination[count_00] = '\0';
  }
  return uVar1;
}


#undef DAT_0024e544
#define DAT_0024e544 (*(uint8_t *)(0x24e544U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_10046970(char *text,char *delimiters)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text_00;
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;

  if (text == (char *)0x0) {
    text = (*(char * *)(((uintptr_t)pf_module_state+0x4391U)));
  }
  pcVar3 = (char *)0x0;
  if (delimiters != (char *)0x0 && text != (char *)0x0) {
    uVar1 = recovered_1003c540(text,delimiters);
    text_00 = text + uVar1;
    if (text[uVar1] == '\0') {
      pcVar3 = (char *)0x0;
      (*(char * *)(((uintptr_t)pf_module_state+0x4391U))) = text_00;
    }
    else {
      pcVar2 = recovered_1003c590(text_00,delimiters);
      pcVar3 = text_00;
      if (pcVar2 == (char *)0x0) {
        uVar1 = recovered_1003c2f0(text_00);
        (*(char * *)(((uintptr_t)pf_module_state+0x4391U))) = text_00 + uVar1;
      }
      else {
        *pcVar2 = '\0';
        (*(char * *)(((uintptr_t)pf_module_state+0x4391U))) = pcVar2 + 1;
      }
    }
  }
  return pcVar3;
}

#undef DAT_0024e544

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100469f0
 */

void * recovered_100469f0(ulong count,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  ulong count_00;

  if ((size == 0) || ((int)((ulonglong)size * (ulonglong)count >> 0x20) == 0)) {
    count_00 = size * count;
    destination = recovered_1003bb30(count_00 + (count_00 == 0));
    if (destination != (void *)0x0) {
      recovered_1003be80(destination,0,count_00);
      return destination;
    }
  }
  return (void *)0x0;
}


#undef DAT_0024d4c4
#define DAT_0024d4c4 (*(uint8_t *)(0x24d4c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10046a40(uint seed)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(int *)(((uintptr_t)pf_module_state+0x3311U))) = seed + (seed == 0);
  return;
}

#undef DAT_0024d4c4

#undef DAT_0024d4c4
#define DAT_0024d4c4 (*(uint8_t *)(0x24d4c4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10046a60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint *)(((uintptr_t)pf_module_state+0x3311U))) = (*(uint *)(((uintptr_t)pf_module_state+0x3311U))) * 0x41c64e6d + 0x3039;
  return (*(uint *)(((uintptr_t)pf_module_state+0x3311U))) >> 0x10 & 0x7fff;
}

#undef DAT_0024d4c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046a90
 */

long recovered_10046a90(long value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (value ^ value >> 0x1f) - (value >> 0x1f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ab0
 */

longlong recovered_10046ab0(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (int)PF_PART4(value, 4) >> 0x1f;
  return CONCAT44(((PF_PART4(value, 4) ^ uVar1) - uVar1) - (uint)(((uint)value ^ uVar1) < uVar1),
                  ((uint)value ^ uVar1) - uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ad0
 */

int recovered_10046ad0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  return param_1 / param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046af0
 */

int recovered_10046af0(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0) {
    return 0;
  }
  return param_1 / param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b10
 */

longlong * recovered_10046b10(longlong *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;

  if (param_4 == 0 && param_5 == 0) {
    lVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
  }
  else {
    lVar5 = recovered_1003b8f0(param_2,param_3,param_4,param_5);
    lVar1 = lVar5 * CONCAT44(param_5,param_4);
    uVar2 = (uint)lVar1;
    iVar4 = param_2 - uVar2;
    iVar3 = (param_3 - (int)((ulonglong)lVar1 >> 0x20)) - (uint)(param_2 < uVar2);
  }
  *param_1 = lVar5;
  *(int *)(param_1 + 1) = iVar4;
  *(int *)((int)param_1 + 0xc) = iVar3;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b80
 */

longlong recovered_10046b80(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1003d700(text,endptr,base);
  return (longlong)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046bb0
 */

ulonglong recovered_10046bb0(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1003d850(text,endptr,base);
  return (ulonglong)uVar1;
}


#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046be0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046be0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) = (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) & (~param_1 | 0xffffff60);
  return 0;
}

#undef DAT_0024e548

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046c00(ushort *param_1,ushort param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_1 = param_2 & (ushort)(*(uint32_t *)(((uintptr_t)pf_module_state+0x4395U))) & 0x9f;
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548

#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046c40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) = (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) | param_1 & 0x9f;
  return 0;
}

#undef DAT_0024e548

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046c60(ushort *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) = (*param_1 ^ (*(uint *)(((uintptr_t)pf_module_state+0x4395U)))) & param_2 & 0x9f ^ (*(uint *)(((uintptr_t)pf_module_state+0x4395U)));
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548

#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10046ca0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 & (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) & 0x9f;
}

#undef DAT_0024e548

#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046cc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (*(uint32_t *)(((uintptr_t)pf_module_state+0x4399U)));
}

#undef DAT_0024e54c

#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046cd0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4399U))) = param_1;
  return 0;
}

#undef DAT_0024e54c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046ce0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_1 = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4395U)));
  param_1[1] = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4399U)));
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548
#undef DAT_0024e54c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046d20(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  *param_1 = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4395U)));
  param_1[1] = (*(uint32_t *)(((uintptr_t)pf_module_state+0x4399U)));
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4395U))) = 0;
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548
#undef DAT_0024e54c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046d60(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4395U))) = *param_1;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x4399U))) = param_1[1];
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548
#undef DAT_0024e54c

#undef DAT_0024d024
#define DAT_0024d024 (*(uint8_t *)(0x24d024U))
#undef DAT_0024e548
#define DAT_0024e548 (*(uint8_t *)(0x24e548U))
#undef DAT_0024e54c
#define DAT_0024e54c (*(uint8_t *)(0x24e54cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10046d90(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0) {
    *(*(uint32_t * *)(((uintptr_t)pf_module_state+0x2e71U))) = 0x16;
    return 0xffffffff;
  }
  (*(uint *)(((uintptr_t)pf_module_state+0x4399U))) = param_1[1];
  (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) = (*(uint *)(((uintptr_t)pf_module_state+0x4395U))) | *param_1;
  return 0;
}

#undef DAT_0024d024
#undef DAT_0024e548
#undef DAT_0024e54c

/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10046dc0(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10046df0(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e20
 */

bool recovered_10046e20(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e40
 */

bool recovered_10046e40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e60
 */

byte recovered_10046e60(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ea0
 */

bool recovered_10046ea0(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) == 0x7ff00000 && param_1 == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ec0
 */

bool recovered_10046ec0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) == 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ee0
 */

bool recovered_10046ee0(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((~param_3 & 0x7fff) == 0 && param_1 == 0) && param_2 == -0x80000000LL;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f10
 */

bool recovered_10046f10(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((param_2 & 0xfffff) != 0 || param_1 != 0) && (~param_2 & 0x7ff00000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f40
 */

bool recovered_10046f40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffff) != 0 && (~param_1 & 0x7f800000) == 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f70
 */

bool recovered_10046f70(longdouble param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return NAN(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046f90
 */

bool recovered_10046f90(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7ff00000) != 0x7ff00000 && (param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046fb0
 */

bool recovered_10046fb0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7f800000) != 0x7f800000 && (param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046fd0
 */

byte recovered_10046fd0(int param_1,int param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = (param_2 - 1U) + (uint)(param_1 != 0);
  uVar1 = (uint)(param_2 != 0 || CARRY4(param_2 - 1U,(uint)(param_1 != 0)));
  uVar2 = (param_3 & 0x7fff) - 1;
  return (byte)((uint)param_2 >> 0x1f) & ((param_3 & 0x7fff) - 1 & 0xffff) < 0x7ffe |
         ((param_3 & 0x7fff) != 0 || CARRY4(uVar2,uVar1)) - 1 <
         (uint)(uVar2 + uVar1 <
               (uint)(uVar3 < 0x7fffffff || uVar3 + 0x80000001 < (uint)(param_1 != 0)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047040
 */

uint recovered_10047040(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_2 >> 0x1f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047050
 */

uint recovered_10047050(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 >> 0x1f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047060
 */

bool recovered_10047060(longdouble param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  bool bVar2;

  lVar1 = (longdouble)0;
  bVar2 = true;
  if (lVar1 <= param_1) {
    if ((param_1 != lVar1) || (NAN(param_1) || NAN(lVar1))) {
      bVar2 = false;
    }
    else {
      bVar2 = (longdouble)1 / param_1 < lVar1;
    }
  }
  return bVar2;
}


#define uStack_10 (*(uint *)(frame + 32))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100470b0
 */

byte recovered_100470b0(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;

  local_14 = SUB84(param_1,0);
  uStack_10 = (uint)((ulonglong)param_1 >> 0x20);
  bVar1 = 1;
  if (((uStack_10 & 0x7ff00000) != 0x7ff00000 ||
       ((ulonglong)param_1 & 0xfffff00000000) == 0 && local_14 == 0) &&
     (bVar1 = 2, local_14 != 0 || (uStack_10 & 0x7fffffff) != 0x7ff00000)) {
    bVar1 = 3;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      bVar1 = ((uStack_10 & 0x7ff00000) == 0x7ff00000 ||
              ((ulonglong)param_1 & 0x7ff0000000000000) == 0) | 4;
    }
  }
  return bVar1;
}

#undef uStack_10
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047140
 */

byte recovered_10047140(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = (uint)param_1 & 0x7f800000;
  bVar1 = 1;
  if ((uVar2 != 0x7f800000 || ((uint)param_1 & 0x7fffff) == 0) &&
     (bVar1 = 2, ABS(param_1) != INFINITY)) {
    bVar1 = 3;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      bVar1 = (uVar2 == 0x7f800000 || uVar2 == 0) | 4;
    }
  }
  return bVar1;
}


/* Native extended-float classification; Pooka's Free Software License. */
int recovered_100471c0(long double value){if(__builtin_isnan(value))return 1;if(__builtin_isinf(value))return 2;if(value==0)return 3;return 4;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047230
 */

int recovered_10047230(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((~PF_PART4(value, 4) & 0x7ff00000) != 0);
}


#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047250(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10047290(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc25U)))));
  }
  else {
    dVar1 = recovered_1003c940((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc29U)))));
  }
  return (float)dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100472d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100472d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  if (0.0 <= dVar1) {
    dVar1 = recovered_1003c8f0(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047310(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10047350(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc25U)))));
  }
  else {
    dVar1 = recovered_1003c940((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc29U)))));
  }
  return (float)dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047390(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  if (0.0 <= dVar1) {
    dVar1 = recovered_1003c8f0(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100473d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100473d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10047410(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc25U)))));
  }
  else {
    dVar1 = recovered_1003c940((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc29U)))));
  }
  return (float)dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047450(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  if (0.0 <= dVar1) {
    dVar1 = recovered_1003c8f0(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10047490(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return (int)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100474f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_100474f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc25U)))));
  }
  else {
    dVar1 = recovered_1003c940((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc29U)))));
  }
  return (int)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long recovered_10047550(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  if (0.0 <= dVar1) {
    dVar1 = recovered_1003c8f0(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return (int)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100475b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_100475b0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(value + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return (longlong)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10047610(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  if (0.0 <= value) {
    dVar1 = recovered_1003c8f0((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc25U)))));
  }
  else {
    dVar1 = recovered_1003c940((double)(value + (*(float *)(((uintptr_t)pf_module_state+0xc29U)))));
  }
  return (longlong)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong recovered_10047670(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  if (0.0 <= dVar1) {
    dVar1 = recovered_1003c8f0(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))));
  }
  else {
    dVar1 = recovered_1003c940(dVar1 + (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))));
  }
  return (longlong)ROUND(dVar1);
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef in_stack_0000000c

#undef DAT_0024ade0
#define DAT_0024ade0 (*(uint8_t *)(0x24ade0U))
#undef DAT_0024ade4
#define DAT_0024ade4 (*(uint8_t *)(0x24ade4U))
#undef DAT_0024ade8
#define DAT_0024ade8 (*(uint8_t *)(0x24ade8U))
#undef DAT_0024adec
#define DAT_0024adec (*(uint8_t *)(0x24adecU))
#undef DAT_0024adf0
#define DAT_0024adf0 (*(uint8_t *)(0x24adf0U))
#undef DAT_0024adf4
#define DAT_0024adf4 (*(uint8_t *)(0x24adf4U))
#undef DAT_0024adf8
#define DAT_0024adf8 (*(uint8_t *)(0x24adf8U))
#undef DAT_0024adfc
#define DAT_0024adfc (*(uint8_t *)(0x24adfcU))
#undef DAT_0024ae00
#define DAT_0024ae00 (*(uint8_t *)(0x24ae00U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100476d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100476d0(double value)

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

  if (1.0 < value) {
    dVar1 = 1.0 / value;
    dVar2 = -dVar1 * dVar1;
    dVar9 = dVar1 * dVar2 * dVar2;
    dVar8 = dVar9 * dVar2;
    dVar7 = dVar8 * dVar2;
    dVar6 = dVar7 * dVar2;
    dVar5 = dVar6 * dVar2;
    dVar4 = dVar5 * dVar2;
    dVar3 = dVar4 * dVar2;
    return (*(double *)(((uintptr_t)pf_module_state+0xca5U))) -
           ((dVar3 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc4dU))) +
           dVar3 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc49U))) +
           dVar4 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc45U))) +
           dVar5 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc41U))) +
           dVar6 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc3dU))) +
           dVar7 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc39U))) +
           dVar8 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc35U))) +
           dVar9 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc31U))) + (dVar1 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc2dU))) + dVar1);
  }
  if (value < -1.0) {
    dVar1 = 1.0 / value;
    dVar2 = -dVar1 * dVar1;
    dVar9 = dVar1 * dVar2 * dVar2;
    dVar8 = dVar9 * dVar2;
    dVar7 = dVar8 * dVar2;
    dVar6 = dVar7 * dVar2;
    dVar5 = dVar6 * dVar2;
    dVar4 = dVar5 * dVar2;
    dVar3 = dVar4 * dVar2;
    return (*(double *)(((uintptr_t)pf_module_state+0xc9dU))) -
           ((dVar3 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc4dU))) +
           dVar3 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc49U))) +
           dVar4 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc45U))) +
           dVar5 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc41U))) +
           dVar6 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc3dU))) +
           dVar7 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc39U))) +
           dVar8 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc35U))) +
           dVar9 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc31U))) + (dVar1 * dVar2) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc2dU))) + dVar1);
  }
  dVar1 = -value * value;
  dVar8 = dVar1 * value * dVar1;
  dVar7 = dVar8 * dVar1;
  dVar6 = dVar7 * dVar1;
  dVar5 = dVar6 * dVar1;
  dVar4 = dVar5 * dVar1;
  dVar3 = dVar4 * dVar1;
  dVar2 = dVar3 * dVar1;
  return (dVar2 * dVar1) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc4dU))) +
         dVar2 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc49U))) +
         dVar3 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc45U))) +
         dVar4 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc41U))) +
         dVar5 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc3dU))) +
         dVar6 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc39U))) +
         dVar7 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc35U))) +
         dVar8 / (double)(*(float *)(((uintptr_t)pf_module_state+0xc31U))) + (dVar1 * value) / (double)(*(float *)(((uintptr_t)pf_module_state+0xc2dU))) + value;
}

#undef DAT_0024ade0
#undef DAT_0024ade4
#undef DAT_0024ade8
#undef DAT_0024adec
#undef DAT_0024adf0
#undef DAT_0024adf4
#undef DAT_0024adf8
#undef DAT_0024adfc
#undef DAT_0024ae00
#undef DAT_0024ae50
#undef DAT_0024ae58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047860
 */

float recovered_10047860(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100476d0((double)value);
  return (float)dVar1;
}


#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047880
 */

double recovered_10047880(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100476d0((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return dVar1;
}

#undef in_stack_0000000c

#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100478a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100478a0(double y,double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 0.0;
  if (0.0 < x) {
    dVar2 = recovered_100476d0(y / x);
    return dVar2;
  }
  if (y < 0.0 || 0.0 <= x) {
    if (y < 0.0 && x < 0.0) {
      dVar2 = recovered_100476d0(y / x);
      dVar1 = dVar2 + (*(double *)(((uintptr_t)pf_module_state+0xcadU)));
    }
    else {
      if (0.0 < y && x == 0.0) {
        return (*(double *)(((uintptr_t)pf_module_state+0xca5U)));
      }
      dVar1 = dVar2;
      if ((x == 0.0) && (!NAN(x))) {
        dVar1 = (*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
      }
      if (0.0 <= y) {
        dVar1 = dVar2;
      }
    }
  }
  else {
    dVar2 = recovered_100476d0(y / x);
    dVar1 = dVar2 + (*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
  }
  return dVar1;
}

#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10047990(float y,float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  double dVar3;

  if (x <= 0.0) {
    if (y < 0.0 || 0.0 <= x) {
      if (0.0 <= y || 0.0 <= x) {
        lVar2 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xca5U)));
        if (!(0.0 < y && x == 0.0)) {
          lVar1 = (longdouble)0;
          lVar2 = lVar1;
          if ((x == 0.0) && (!NAN(x))) {
            lVar2 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
          }
          if (0.0 <= y) {
            lVar2 = lVar1;
          }
        }
      }
      else {
        dVar3 = recovered_100476d0((double)(y / x));
        lVar2 = (longdouble)dVar3 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcadU)));
      }
    }
    else {
      dVar3 = recovered_100476d0((double)(y / x));
      lVar2 = (longdouble)dVar3 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
    }
  }
  else {
    dVar3 = recovered_100476d0((double)(y / x));
    lVar2 = (longdouble)dVar3;
  }
  return (float)lVar2;
}

#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047a90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10047a90(longdouble param_1,undefined4 param_2,longdouble param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  double dVar5;

  lVar2 = (longdouble)(double)param_1;
  lVar3 = (longdouble)(double)param_3;
  lVar1 = (longdouble)0;
  if (lVar3 <= lVar1) {
    if (lVar2 < lVar1 || lVar1 <= lVar3) {
      if (lVar1 <= lVar2 || lVar1 <= lVar3) {
        if (lVar1 < lVar2 && lVar3 == lVar1) {
          return (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xca5U)));
        }
        lVar4 = lVar1;
        if ((lVar3 == lVar1) && (!NAN(lVar3) && !NAN(lVar1))) {
          lVar4 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
        }
        if (lVar1 <= lVar2) {
          lVar4 = lVar1;
        }
      }
      else {
        dVar5 = recovered_100476d0((double)(lVar2 / lVar3));
        lVar4 = (longdouble)dVar5 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcadU)));
      }
    }
    else {
      dVar5 = recovered_100476d0((double)(lVar2 / lVar3));
      lVar4 = (longdouble)dVar5 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
    }
  }
  else {
    dVar5 = recovered_100476d0((double)(lVar2 / lVar3));
    lVar4 = (longdouble)dVar5;
  }
  return lVar4;
}

#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047b90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(value) <= 1.0) {
    dVar2 = recovered_1003c9a0(1.0 - value * value);
    dVar1 = 0.0;
    if (0.0 < dVar2) {
      dVar3 = recovered_100476d0(value / dVar2);
      return dVar3;
    }
    if (value < 0.0 || 0.0 <= dVar2) {
      if (0.0 <= value || 0.0 <= dVar2) {
        if (0.0 < value && dVar2 == 0.0) {
          return (*(double *)(((uintptr_t)pf_module_state+0xca5U)));
        }
        dVar3 = dVar1;
        if ((dVar2 == 0.0) && (!NAN(dVar2))) {
          dVar3 = (*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
        }
        if (0.0 <= value) {
          dVar3 = dVar1;
        }
      }
      else {
        dVar3 = recovered_100476d0(value / dVar2);
        dVar3 = dVar3 + (*(double *)(((uintptr_t)pf_module_state+0xcadU)));
      }
    }
    else {
      dVar3 = recovered_100476d0(value / dVar2);
      dVar3 = dVar3 + (*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
    }
  }
  return dVar3;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047cb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10047cb0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  double dVar6;

  lVar3 = (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(value) <= 1.0) {
    dVar6 = recovered_1003c9a0((double)(1.0 - value * value));
    lVar4 = (longdouble)dVar6;
    lVar1 = (longdouble)0;
    if (lVar4 <= lVar1) {
      lVar2 = (longdouble)0;
      lVar5 = (longdouble)value;
      if (lVar5 < lVar2 || lVar1 <= lVar4) {
        if (lVar2 <= lVar5 || lVar1 <= lVar4) {
          lVar3 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xca5U)));
          if (!(lVar2 < lVar5 && lVar4 == lVar1)) {
            lVar3 = lVar1;
            if ((lVar4 == lVar1) && (!NAN(lVar4) && !NAN(lVar1))) {
              lVar3 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
            }
            if (lVar2 <= lVar5) {
              lVar3 = lVar1;
            }
          }
        }
        else {
          dVar6 = recovered_100476d0((double)(lVar5 / lVar4));
          lVar3 = (longdouble)dVar6 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcadU)));
        }
      }
      else {
        dVar6 = recovered_100476d0((double)(lVar5 / lVar4));
        lVar3 = (longdouble)dVar6 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
      }
    }
    else {
      dVar6 = recovered_100476d0((double)((longdouble)value / lVar4));
      lVar3 = (longdouble)dVar6;
    }
  }
  return (float)lVar3;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047df0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  dVar4 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(dVar1) <= 1.0) {
    dVar3 = recovered_1003c9a0(1.0 - dVar1 * dVar1);
    dVar2 = 0.0;
    if (dVar3 <= 0.0) {
      if (dVar1 < 0.0 || 0.0 <= dVar3) {
        if (0.0 <= dVar1 || 0.0 <= dVar3) {
          if (0.0 < dVar1 && dVar3 == 0.0) {
            return (*(double *)(((uintptr_t)pf_module_state+0xca5U)));
          }
          dVar4 = dVar2;
          if ((dVar3 == 0.0) && (!NAN(dVar3))) {
            dVar4 = (*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
          }
          if (0.0 <= dVar1) {
            dVar4 = dVar2;
          }
        }
        else {
          dVar4 = recovered_100476d0(dVar1 / dVar3);
          dVar4 = dVar4 + (*(double *)(((uintptr_t)pf_module_state+0xcadU)));
        }
      }
      else {
        dVar4 = recovered_100476d0(dVar1 / dVar3);
        dVar4 = dVar4 + (*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
      }
    }
    else {
      dVar4 = recovered_100476d0(dVar1 / dVar3);
    }
  }
  return dVar4;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68
#undef in_stack_0000000c

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10047f20(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(value) <= 1.0) {
    dVar2 = recovered_1003c9a0(1.0 - value * value);
    if (-value < value) {
      dVar3 = recovered_100476d0(dVar2 / value);
      return dVar3;
    }
    dVar3 = 0.0;
    if (dVar2 < 0.0 || 0.0 <= value) {
      if (0.0 <= dVar2 || 0.0 <= value) {
        if (value == 0.0 && 0.0 < dVar2) {
          return (*(double *)(((uintptr_t)pf_module_state+0xca5U)));
        }
        dVar1 = (*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
        if (0.0 <= dVar2) {
          dVar1 = dVar3;
        }
        dVar2 = dVar3;
        if (value == 0.0) {
          dVar2 = dVar1;
          if (NAN(value)) goto LAB_1004803a;
        }
        dVar3 = dVar2;
      }
      else {
        dVar3 = recovered_100476d0(dVar2 / value);
        dVar3 = dVar3 + (*(double *)(((uintptr_t)pf_module_state+0xcadU)));
      }
    }
    else {
      dVar3 = recovered_100476d0(dVar2 / value);
      dVar3 = dVar3 + (*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
    }
  }
LAB_1004803a:
  return dVar3;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10048050(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  double dVar6;

  lVar5 = (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(value) <= 1.0) {
    dVar6 = recovered_1003c9a0((double)(1.0 - value * value));
    lVar2 = (longdouble)dVar6;
    lVar3 = (longdouble)value;
    lVar1 = (longdouble)0;
    if (lVar3 <= lVar1) {
      lVar4 = (longdouble)0;
      if (lVar2 < lVar4 || lVar1 <= lVar3) {
        if (lVar4 <= lVar2 || lVar1 <= lVar3) {
          lVar5 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xca5U)));
          if (lVar3 == lVar1 && lVar4 < lVar2) goto LAB_10048178;
          lVar5 = (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
          if (lVar4 <= lVar2) {
            lVar5 = lVar4;
          }
          if ((lVar3 == lVar1) && (!NAN(lVar3) && !NAN(lVar1))) {
            lVar4 = lVar5;
          }
        }
        else {
          dVar6 = recovered_100476d0((double)(lVar2 / lVar3));
          lVar4 = (longdouble)dVar6 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcadU)));
        }
      }
      else {
        dVar6 = recovered_100476d0((double)(lVar2 / lVar3));
        lVar4 = (longdouble)dVar6 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
      }
    }
    else {
      dVar6 = recovered_100476d0((double)(lVar2 / lVar3));
      lVar4 = (longdouble)dVar6;
    }
    lVar5 = lVar4;
  }
LAB_10048178:
  return (float)lVar5;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68

#undef DAT_0024ae04
#define DAT_0024ae04 (*(uint8_t *)(0x24ae04U))
#undef DAT_0024ae50
#define DAT_0024ae50 (*(uint8_t *)(0x24ae50U))
#undef DAT_0024ae58
#define DAT_0024ae58 (*(uint8_t *)(0x24ae58U))
#undef DAT_0024ae60
#define DAT_0024ae60 (*(uint8_t *)(0x24ae60U))
#undef DAT_0024ae68
#define DAT_0024ae68 (*(uint8_t *)(0x24ae68U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048190(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  dVar4 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc51U)));
  if (ABS(dVar1) <= 1.0) {
    dVar3 = recovered_1003c9a0(1.0 - dVar1 * dVar1);
    if (dVar1 <= -dVar1) {
      dVar4 = 0.0;
      if (dVar3 < 0.0 || 0.0 <= dVar1) {
        if (0.0 <= dVar3 || 0.0 <= dVar1) {
          if (dVar1 == 0.0 && 0.0 < dVar3) {
            return (*(double *)(((uintptr_t)pf_module_state+0xca5U)));
          }
          dVar2 = (*(double *)(((uintptr_t)pf_module_state+0xc9dU)));
          if (0.0 <= dVar3) {
            dVar2 = dVar4;
          }
          dVar3 = dVar4;
          if ((dVar1 != 0.0) || (dVar3 = dVar2, !NAN(dVar1))) {
            dVar4 = dVar3;
          }
        }
        else {
          dVar4 = recovered_100476d0(dVar3 / dVar1);
          dVar4 = dVar4 + (*(double *)(((uintptr_t)pf_module_state+0xcadU)));
        }
      }
      else {
        dVar4 = recovered_100476d0(dVar3 / dVar1);
        dVar4 = dVar4 + (*(double *)(((uintptr_t)pf_module_state+0xcb5U)));
      }
    }
    else {
      dVar4 = recovered_100476d0(dVar3 / dVar1);
    }
  }
  return dVar4;
}

#undef DAT_0024ae04
#undef DAT_0024ae50
#undef DAT_0024ae58
#undef DAT_0024ae60
#undef DAT_0024ae68
#undef in_stack_0000000c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100482d0
 */

double recovered_100482d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar2 = recovered_1003ccb0(value);
  dVar3 = recovered_1003cc10(value);
  dVar1 = *(double *)((uint)(0.0 <= dVar3) * 8 + ((uintptr_t)pf_module_state+0xcfdU));
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    dVar1 = dVar3 / dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048330
 */

float recovered_10048330(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  double dVar2;
  double dVar3;

  dVar2 = recovered_1003ccb0((double)value);
  dVar3 = recovered_1003cc10((double)value);
  lVar1 = (longdouble)*(double *)((uint)((longdouble)0 <= (longdouble)dVar3) * 8 + ((uintptr_t)pf_module_state+0xcfdU));
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    lVar1 = (longdouble)dVar3 / (longdouble)dVar2;
  }
  return (float)lVar1;
}


#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100483a0
 */

double recovered_100483a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar2 = recovered_1003ccb0((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  dVar3 = recovered_1003cc10((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  dVar1 = *(double *)((uint)(0.0 <= dVar3) * 8 + ((uintptr_t)pf_module_state+0xcfdU));
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    dVar1 = dVar3 / dVar2;
  }
  return dVar1;
}

#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#undef DAT_0024addc
#define DAT_0024addc (*(uint8_t *)(0x24addcU))
#undef DAT_0024ade0
#define DAT_0024ade0 (*(uint8_t *)(0x24ade0U))
#undef DAT_0024ade4
#define DAT_0024ade4 (*(uint8_t *)(0x24ade4U))
#undef DAT_0024ade8
#define DAT_0024ade8 (*(uint8_t *)(0x24ade8U))
#undef DAT_0024adec
#define DAT_0024adec (*(uint8_t *)(0x24adecU))
#undef DAT_0024adf0
#define DAT_0024adf0 (*(uint8_t *)(0x24adf0U))
#undef DAT_0024adf4
#define DAT_0024adf4 (*(uint8_t *)(0x24adf4U))
#undef DAT_0024adf8
#define DAT_0024adf8 (*(uint8_t *)(0x24adf8U))
#undef DAT_0024adfc
#define DAT_0024adfc (*(uint8_t *)(0x24adfcU))
#undef DAT_0024ae00
#define DAT_0024ae00 (*(uint8_t *)(0x24ae00U))
#undef DAT_0024ae08
#define DAT_0024ae08 (*(uint8_t *)(0x24ae08U))
#undef DAT_0024ae0c
#define DAT_0024ae0c (*(uint8_t *)(0x24ae0cU))
#undef DAT_0024ae10
#define DAT_0024ae10 (*(uint8_t *)(0x24ae10U))
#undef DAT_0024ae14
#define DAT_0024ae14 (*(uint8_t *)(0x24ae14U))
#undef DAT_0024ae18
#define DAT_0024ae18 (*(uint8_t *)(0x24ae18U))
#undef DAT_0024ae1c
#define DAT_0024ae1c (*(uint8_t *)(0x24ae1cU))
#undef DAT_0024ae20
#define DAT_0024ae20 (*(uint8_t *)(0x24ae20U))
#undef DAT_0024ae24
#define DAT_0024ae24 (*(uint8_t *)(0x24ae24U))
#undef DAT_0024ae28
#define DAT_0024ae28 (*(uint8_t *)(0x24ae28U))
#undef DAT_0024ae2c
#define DAT_0024ae2c (*(uint8_t *)(0x24ae2cU))
#undef DAT_0024ae30
#define DAT_0024ae30 (*(uint8_t *)(0x24ae30U))
#undef DAT_0024ae34
#define DAT_0024ae34 (*(uint8_t *)(0x24ae34U))
#undef DAT_0024ae38
#define DAT_0024ae38 (*(uint8_t *)(0x24ae38U))
#undef DAT_0024ae3c
#define DAT_0024ae3c (*(uint8_t *)(0x24ae3cU))
#undef DAT_0024ae40
#define DAT_0024ae40 (*(uint8_t *)(0x24ae40U))
#undef DAT_0024ae44
#define DAT_0024ae44 (*(uint8_t *)(0x24ae44U))
#undef DAT_0024ae48
#define DAT_0024ae48 (*(uint8_t *)(0x24ae48U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048410(double value)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  int iVar27;

  dVar1 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
  iVar27 = 0;
  if (dVar1 < value) {
    iVar27 = 0;
    do {
      value = value * dVar1;
      iVar27 = iVar27 + 1;
    } while (dVar1 < value);
  }
  for (; value < (double)(*(float *)(((uintptr_t)pf_module_state+0xc29U))); value = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)))) {
    iVar27 = iVar27 + 1;
  }
  dVar1 = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U))) * value;
  dVar20 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc2dU)))) * dVar1;
  dVar19 = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc55U))) * dVar20;
  dVar18 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc31U)))) * dVar19;
  dVar17 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc59U)))) * dVar18;
  dVar21 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc35U)))) * dVar17;
  dVar16 = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc5dU))) * dVar21;
  dVar15 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc39U)))) * dVar16;
  dVar14 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc61U)))) * dVar15;
  dVar22 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc3dU)))) * dVar14;
  dVar13 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc65U)))) * dVar22;
  dVar12 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc41U)))) * dVar13;
  dVar11 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc69U)))) * dVar12;
  dVar23 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc45U)))) * dVar11;
  dVar10 = value * (double)(*(float *)(((uintptr_t)pf_module_state+0xc6dU))) * dVar23;
  dVar9 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc49U)))) * dVar10;
  dVar8 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc71U)))) * dVar9;
  dVar24 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc4dU)))) * dVar8;
  dVar7 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc75U)))) * dVar24;
  dVar6 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc79U)))) * dVar7;
  dVar5 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc7dU)))) * dVar6;
  dVar25 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc81U)))) * dVar5;
  dVar4 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc85U)))) * dVar25;
  dVar3 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc89U)))) * dVar4;
  dVar2 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc8dU)))) * dVar3;
  dVar26 = (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc91U)))) * dVar2;
  dVar1 = value + 1.0 + dVar1 + dVar20 + dVar19 + dVar18 + dVar17 + dVar21 + dVar16 + dVar15 +
          dVar14 + dVar22 + dVar13 + dVar12 + dVar11 + dVar23 + dVar10 + dVar9 + dVar8 + dVar24 +
          dVar7 + dVar6 + dVar5 + dVar25 + dVar4 + dVar3 + dVar2 + dVar26 +
          (value / (double)(*(float *)(((uintptr_t)pf_module_state+0xc95U)))) * dVar26;
  for (; iVar27 != 0; iVar27 = iVar27 + -1) {
    dVar1 = dVar1 * dVar1;
  }
  return dVar1;
}

#undef DAT_0024add8
#undef DAT_0024addc
#undef DAT_0024ade0
#undef DAT_0024ade4
#undef DAT_0024ade8
#undef DAT_0024adec
#undef DAT_0024adf0
#undef DAT_0024adf4
#undef DAT_0024adf8
#undef DAT_0024adfc
#undef DAT_0024ae00
#undef DAT_0024ae08
#undef DAT_0024ae0c
#undef DAT_0024ae10
#undef DAT_0024ae14
#undef DAT_0024ae18
#undef DAT_0024ae1c
#undef DAT_0024ae20
#undef DAT_0024ae24
#undef DAT_0024ae28
#undef DAT_0024ae2c
#undef DAT_0024ae30
#undef DAT_0024ae34
#undef DAT_0024ae38
#undef DAT_0024ae3c
#undef DAT_0024ae40
#undef DAT_0024ae44
#undef DAT_0024ae48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100485e0
 */

float recovered_100485e0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)value);
  return (float)dVar1;
}


#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048600
 */

double recovered_10048600(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return dVar1;
}

#undef in_stack_0000000c

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048620(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410(value * (*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
  return dVar1;
}

#undef DAT_0024ae70

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10048640(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(value * (float)(*(double *)(((uintptr_t)pf_module_state+0xcbdU)))));
  return (float)dVar1;
}

#undef DAT_0024ae70

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048670(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(longdouble)CONCAT28(in_stack_0000000c,value) * (*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
  return dVar1;
}

#undef DAT_0024ae70
#undef in_stack_0000000c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100486a0
 */

longdouble recovered_100486a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410(param_1);
  return -(longdouble)1 + (longdouble)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100486c0
 */

longdouble recovered_100486c0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)param_1);
  return (longdouble)((float)dVar1 + -1.0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100486f0
 */

longdouble recovered_100486f0(longdouble param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)param_1);
  return -(longdouble)1 + (longdouble)dVar1;
}


#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048710(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410(value);
  return (-1.0 / dVar1 + dVar1) * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048740
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10048740(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)value);
  return (-1.0 / (float)dVar1 + (float)dVar1) * (*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048770(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return (-1.0 / dVar1 + dVar1) * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8
#undef in_stack_0000000c

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100487a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100487a0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410(value);
  return (1.0 / dVar1 + dVar1) * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100487d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100487d0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)value);
  return (1.0 / (float)dVar1 + (float)dVar1) * (*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8

#undef DAT_0024add8
#define DAT_0024add8 (*(uint8_t *)(0x24add8U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048800(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return (1.0 / dVar1 + dVar1) * (double)(*(float *)(((uintptr_t)pf_module_state+0xc25U)));
}

#undef DAT_0024add8
#undef in_stack_0000000c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048830
 */

double recovered_10048830(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410(value + value);
  return (dVar1 + -1.0) / (dVar1 + 1.0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048860
 */

float recovered_10048860(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(value + value));
  return ((float)dVar1 + -1.0) / ((float)dVar1 + 1.0);
}


#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048890
 */

double recovered_10048890(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10048410((double)(longdouble)CONCAT28(in_stack_0000000c,value) +
                             (double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return (dVar1 + -1.0) / (dVar1 + 1.0);
}

#undef in_stack_0000000c

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100488c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100488c0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0(value);
  return dVar1 / (*(double *)(((uintptr_t)pf_module_state+0xcbdU)));
}

#undef DAT_0024ae70

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100488e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100488e0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0((double)value);
  return (float)((longdouble)dVar1 / (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
}

#undef DAT_0024ae70

#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048910(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0((double)(longdouble)CONCAT28(in_stack_0000000c,value));
  return dVar1 / (*(double *)(((uintptr_t)pf_module_state+0xcbdU)));
}

#undef DAT_0024ae70
#undef in_stack_0000000c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048930
 */

double recovered_10048930(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0(value + 1.0);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048950
 */

float recovered_10048950(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0((double)(value + 1.0));
  return (float)dVar1;
}


#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048970
 */

double recovered_10048970(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0((double)(longdouble)CONCAT28(in_stack_0000000c,value) + 1.0);
  return dVar1;
}

#undef in_stack_0000000c

#undef DAT_0024ae4c
#define DAT_0024ae4c (*(uint8_t *)(0x24ae4cU))
#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048990(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc99U)));
  if ((value != 0.0) || (NAN(value))) {
    uStack_8 = (uint)((ulonglong)value >> 0x20);
    if ((~uStack_8 & 0x7ff00000) != 0) {
      dVar1 = recovered_1003cd50(value);
      dVar1 = recovered_1003caa0(dVar1);
      dVar1 = recovered_1003c8f0(dVar1 / (*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
      return dVar1;
    }
    dVar1 = value * value;
  }
  return dVar1;
}

#undef DAT_0024ae4c
#undef DAT_0024ae70
#undef uStack_8

#undef DAT_0024ae4c
#define DAT_0024ae4c (*(uint8_t *)(0x24ae4cU))
#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
#define uStack_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100489f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_100489f0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  double dVar2;

  if ((value != 0.0) || (fVar1 = (*(float *)(((uintptr_t)pf_module_state+0xc99U))), NAN(value))) {
    uStack_10 = (uint)((ulonglong)(double)value >> 0x20);
    if ((~uStack_10 & 0x7ff00000) == 0) {
      fVar1 = value * value;
    }
    else {
      dVar2 = recovered_1003cd50((double)value);
      dVar2 = recovered_1003caa0(dVar2);
      dVar2 = recovered_1003c8f0(dVar2 / (*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
      fVar1 = (float)dVar2;
    }
  }
  return fVar1;
}

#undef DAT_0024ae4c
#undef DAT_0024ae70
#undef uStack_10

#undef DAT_0024ae4c
#define DAT_0024ae4c (*(uint8_t *)(0x24ae4cU))
#undef DAT_0024ae70
#define DAT_0024ae70 (*(uint8_t *)(0x24ae70U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048a60(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  dVar2 = (double)(*(float *)(((uintptr_t)pf_module_state+0xc99U)));
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    uStack_8 = (uint)(pf_double_bits(dVar1) >> 0x20);
    if ((~uStack_8 & 0x7ff00000) == 0) {
      dVar2 = dVar1 * dVar1;
    }
    else {
      dVar1 = recovered_1003cd50(dVar1);
      dVar1 = recovered_1003caa0(dVar1);
      dVar2 = recovered_1003c8f0(dVar1 / (*(double *)(((uintptr_t)pf_module_state+0xcbdU))));
    }
  }
  return dVar2;
}

#undef DAT_0024ae4c
#undef DAT_0024ae70
#undef in_stack_0000000c
#undef uStack_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048ad0
 */

double recovered_10048ad0(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003d310(value);
  if (integer_part != (double *)0x0) {
    *integer_part = dVar1;
  }
  return value - dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048b00
 */

float recovered_10048b00(float value,float *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003d310((double)value);
  if (integer_part != (float *)0x0) {
    *integer_part = (float)dVar1;
  }
  return value - (float)dVar1;
}


#define in_stack_00000014 (*(longdouble * *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048b40
 */

double recovered_10048b40(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003d310((double)(longdouble)CONCAT28(PF_PART2(integer_part, 0),value));
  if (in_stack_00000014 != (longdouble *)0x0) {
    *in_stack_00000014 = (longdouble)dVar1;
  }
  return (double)((longdouble)(double)(longdouble)CONCAT28(PF_PART2(integer_part, 0),value) -
                 (longdouble)dVar1);
}

#undef in_stack_00000014

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048b80(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;

  dVar2 = -value;
  dVar1 = dVar2;
  if (dVar2 <= value) {
    dVar1 = value;
  }
  dVar3 = recovered_10048410(-dVar1 * dVar1);
  dVar1 = 1.0 / (dVar1 * (*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + 1.0);
  dVar1 = 1.0 - ((((dVar1 * (*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * dVar1 + (*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * dVar1 +
                 (*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * dVar1 + (*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * dVar1 * dVar3;
  dVar3 = -dVar1;
  if (dVar2 <= value) {
    dVar3 = dVar1;
  }
  return dVar3;
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10048c10(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  double dVar3;

  fVar1 = -value;
  if (0.0 <= value) {
    fVar1 = value;
  }
  dVar3 = recovered_10048410((double)(-fVar1 * fVar1));
  fVar1 = 1.0 / (fVar1 * (float)(*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + 1.0);
  fVar2 = 1.0 - ((((fVar1 * (float)(*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (float)(*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * fVar1 +
                  (float)(*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * fVar1 + (float)(*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * fVar1 +
                (float)(*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * fVar1 * (float)dVar3;
  fVar1 = -fVar2;
  if (0.0 <= value) {
    fVar1 = fVar2;
  }
  return fVar1;
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
#define in_stack_0000000c (*(undefined2 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048ca0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  dVar1 = (double)(longdouble)CONCAT28(in_stack_0000000c,value);
  dVar3 = -dVar1;
  dVar2 = dVar3;
  if (dVar3 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar4 = recovered_10048410(-dVar2 * dVar2);
  dVar2 = 1.0 / (dVar2 * (*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + 1.0);
  dVar2 = 1.0 - ((((dVar2 * (*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * dVar2 + (*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * dVar2 +
                 (*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * dVar2 + (*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * dVar2 * dVar4;
  dVar4 = -dVar2;
  if (dVar3 <= dVar1) {
    dVar4 = dVar2;
  }
  return dVar4;
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0
#undef in_stack_0000000c

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10048d30(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  double dVar2;
  double dVar3;
  longdouble lVar4;
  longdouble lVar5;
  double dVar6;

  dVar3 = -param_1;
  dVar2 = dVar3;
  if (dVar3 <= param_1) {
    dVar2 = param_1;
  }
  dVar6 = recovered_10048410(-dVar2 * dVar2);
  lVar1 = (longdouble)1;
  lVar4 = lVar1 / ((longdouble)dVar2 * (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + lVar1);
  lVar5 = lVar1 - ((((lVar4 * (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * lVar4 +
                    (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * lVar4 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * lVar4 +
                  (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * lVar4 * (longdouble)dVar6;
  lVar4 = -lVar5;
  if (dVar3 <= param_1) {
    lVar4 = lVar5;
  }
  return lVar1 - lVar4;
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10048dc0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  double dVar3;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  dVar3 = recovered_10048410((double)(-fVar1 * fVar1));
  fVar1 = 1.0 / (fVar1 * (float)(*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + 1.0);
  fVar2 = 1.0 - ((((fVar1 * (float)(*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (float)(*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * fVar1 +
                  (float)(*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * fVar1 + (float)(*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * fVar1 +
                (float)(*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * fVar1 * (float)dVar3;
  fVar1 = -fVar2;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  return (longdouble)(1.0 - fVar1);
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0

#undef DAT_0024ae78
#define DAT_0024ae78 (*(uint8_t *)(0x24ae78U))
#undef DAT_0024ae80
#define DAT_0024ae80 (*(uint8_t *)(0x24ae80U))
#undef DAT_0024ae88
#define DAT_0024ae88 (*(uint8_t *)(0x24ae88U))
#undef DAT_0024ae90
#define DAT_0024ae90 (*(uint8_t *)(0x24ae90U))
#undef DAT_0024ae98
#define DAT_0024ae98 (*(uint8_t *)(0x24ae98U))
#undef DAT_0024aea0
#define DAT_0024aea0 (*(uint8_t *)(0x24aea0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048e50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10048e50(longdouble param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longdouble lVar2;
  double dVar3;
  double dVar4;
  longdouble lVar5;
  longdouble lVar6;
  double dVar7;

  dVar1 = (double)param_1;
  dVar4 = -dVar1;
  dVar3 = dVar4;
  if (dVar4 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar7 = recovered_10048410(-dVar3 * dVar3);
  lVar2 = (longdouble)1;
  lVar5 = lVar2 / ((longdouble)dVar3 * (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcc5U))) + lVar2);
  lVar6 = lVar2 - ((((lVar5 * (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xccdU))) + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcd5U)))) * lVar5 +
                    (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcddU)))) * lVar5 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xce5U)))) * lVar5 +
                  (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcedU)))) * lVar5 * (longdouble)dVar7;
  lVar5 = -lVar6;
  if (dVar4 <= dVar1) {
    lVar5 = lVar6;
  }
  return lVar2 - lVar5;
}

#undef DAT_0024ae78
#undef DAT_0024ae80
#undef DAT_0024ae88
#undef DAT_0024ae90
#undef DAT_0024ae98
#undef DAT_0024aea0

#undef DAT_0024aea8
#define DAT_0024aea8 (*(uint8_t *)(0x24aea8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10048ee0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0(value);
  return dVar1 / (*(double *)(((uintptr_t)pf_module_state+0xcf5U)));
}

#undef DAT_0024aea8

#undef DAT_0024aea8
#define DAT_0024aea8 (*(uint8_t *)(0x24aea8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10048f00(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_1003caa0((double)value);
  return (float)((longdouble)dVar1 / (longdouble)(*(double *)(((uintptr_t)pf_module_state+0xcf5U))));
}

#undef DAT_0024aea8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f30
 */

int recovered_10048f30(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1003d700(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f50
 */

long recovered_10048f50(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1003d700(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f70
 */

longlong recovered_10048f70(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1003d700(text,(char **)0x0,10);
  return (longlong)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048fa0
 */

void recovered_10048fa0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003d9a0((char *)param_1,(char **)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048fc0
 */

void recovered_10048fc0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003d9a0((char *)param_1,(char **)0x0);
  return;
}


#define local_124 (*(undefined1 (*)[256])(frame + 28))
#define local_24 (*(uint *)(frame + 284))
#define local_20 (*(int *)(frame + 288))
#define local_1c (*(uint *)(frame + 292))
#define local_18 (*(void * *)(frame + 296))
#define local_14 (*(void * *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048fe0
 */

void recovered_10048fe0(void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *source;

  if ((compare != (pf_compare *)0x0 && (size != 0 && base != (void *)0x0)) && (count != 0)) {
    local_20 = -size;
    local_1c = 0;
    pvVar5 = base;
    local_18 = base;
    do {
      local_18 = (void *)((int)local_18 + size);
      local_24 = local_1c + 1;
      uVar2 = local_24;
      if (local_24 < count) {
        local_14 = (void *)(local_1c * size + (int)base);
        pvVar4 = local_18;
        local_1c = local_24;
        do {
          source = (void *)(local_24 * size + (int)base);
          iVar3 = (*compare)(local_14,source);
          if (0 < iVar3) {
            if (size < 0x101) {
              recovered_1003bbf0(local_124,local_14,size);
              recovered_1003bbf0(local_14,source,size);
              recovered_1003bbf0(source,local_124,size);
            }
            else {
              iVar3 = 0;
              do {
                uVar1 = *(undefined1 *)((int)pvVar5 + iVar3);
                *(undefined1 *)((int)pvVar5 + iVar3) = *(undefined1 *)((int)pvVar4 + iVar3);
                *(undefined1 *)((int)pvVar4 + iVar3) = uVar1;
                iVar3 = iVar3 + 1;
              } while (local_20 + iVar3 != 0);
            }
          }
          local_24 = local_24 + 1;
          pvVar4 = (void *)((int)pvVar4 + size);
          uVar2 = local_1c;
        } while (local_24 != count);
      }
      local_1c = uVar2;
      pvVar5 = (void *)((int)pvVar5 + size);
    } while (local_1c != count);
  }
  return;
}

#undef local_124
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049110
 */

void * recovered_10049110(void *key,void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;

  pvVar4 = (void *)0x0;
  if ((compare != (pf_compare *)0x0 && size != 0) && (base != (void *)0x0 && key != (void *)0x0)) {
    uVar3 = 0;
    do {
      while( true ) {
        if (count < uVar3 || count - uVar3 == 0) {
          return (void *)0x0;
        }
        uVar5 = count - uVar3 >> 1;
        uVar1 = uVar5 + uVar3;
        pvVar4 = (void *)(uVar1 * size + (int)base);
        iVar2 = (*compare)(key,pvVar4);
        if (-1 < iVar2) break;
        count = uVar1;
        if (iVar2 == 0) {
          return pvVar4;
        }
      }
      uVar3 = uVar5 + 1 + uVar3;
    } while (iVar2 != 0);
  }
  return pvVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100491a0
 */

int recovered_100491a0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((0x17 < value - 9U) || (uVar1 = 1, (0x80001bU >> (value - 9U & 0x1f) & 1) == 0)) {
    uVar1 = (uint)(value == 0xb);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100491d0
 */

int recovered_100491d0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100491f0
 */

int recovered_100491f0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((value & 0xffffffdfU) - 0x41 < 6 || value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049220
 */

int recovered_10049220(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if ((0x17 < value - 9U) || (uVar2 = 0, (0x80001bU >> (value - 9U & 0x1f) & 1) == 0)) {
    uVar2 = (uint)(value != 0xb);
  }
  uVar1 = 0;
  if ((0x19 < value - 0x61U && 9 < value - 0x30U) && 0x19 < value - 0x41U) {
    uVar1 = uVar2;
  }
  if (0x5d < value - 0x21U) {
    uVar1 = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049280
 */

int recovered_10049280(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value == 0x7f || (uint)value < 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100492a0
 */

int recovered_100492a0(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x21U < 0x5e);
}


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
#define local_20 (*(undefined1 (*)[16])(frame + 16))
#define local_10 (*(int *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100492c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100492c0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003be80(local_20,0,0x18);
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     (((0x16b < _DAT_00006808 && (_DAT_00006968 != (code *)0x0)) &&
      (iVar1 = (*_DAT_00006968)(local_20), iVar1 != 0)))) {
    return local_10 * 0x37;
  }
  return 0;
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
#undef local_10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049330
 */

double recovered_10049330(long end,long start)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (double)(end - start);
}


#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049350
 */

int recovered_10049350(uint *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint in_ECX;
  uint in_EDX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;

  if (param_1 == (uint *)0x0) {
    return -1;
  }
  uVar5 = param_1[5];
  if ((int)uVar5 < 0x46) {
    return -1;
  }
  in_EDX = param_1[4];
  if (0xb < in_EDX) {
    return -1;
  }
  uVar1 = param_1[3];
  if ((int)uVar1 < 1) {
    return -1;
  }
  in_ECX = uVar5 + 0x76c;
  if ((uVar5 & 3) == 0 && in_EDX == 1) {
    iVar7 = 0x1d;
    if (0x28f5c28 < (in_ECX * -0x3d70a3d7 >> 2 | uVar5 * 0x40000000)) {
      if (0x1d < (int)uVar1) {
        return -1;
      }
      goto LAB_100493ef;
    }
    if (in_ECX != (in_ECX / 400) * 400) goto LAB_100493df;
  }
  else {
LAB_100493df:
    iVar7 = *(int *)(in_EDX * 4 + ((uintptr_t)pf_module_state+0xbf5U));
  }
  if (iVar7 < (int)uVar1) {
    return -1;
  }
LAB_100493ef:
  iVar7 = -1;
  uVar2 = param_1[2];
  if (((uVar2 < 0x18) && (uVar3 = param_1[1], uVar3 < 0x3c)) && (uVar4 = *param_1, uVar4 < 0x3d)) {
    uVar8 = 0;
    iVar7 = 0;
    if (uVar5 != 0x46) {
      local_24 = in_ECX;
      if ((int)in_ECX < 0x7b4) {
        local_24 = 0x7b3;
      }
      uVar9 = 0x7b2;
      uVar8 = 0;
      iVar7 = 0;
      do {
        uVar6 = 0x16d;
        if ((uVar9 & 3) == 0) {
          uVar6 = ((uVar9 / 400) * -400 + 0x7b2 + uVar9 == 0x7b2 ||
                  (uVar9 / 100) * -100 + 0x7b2 + uVar9 != 0x7b2) + 0x16d;
        }
        bVar10 = CARRY4(uVar8,uVar6);
        uVar8 = uVar8 + uVar6;
        iVar7 = iVar7 + (uint)bVar10;
        uVar9 = uVar9 + 1;
      } while (local_24 != uVar9);
    }
    if (in_EDX != 0) {
      bVar10 = 0xffffffe0 < uVar8;
      uVar8 = uVar8 + 0x1f;
      iVar7 = iVar7 + (uint)bVar10;
      if (in_EDX != 1) {
        uVar5 = ((uVar5 & 3) != 0 ||
                0xa3d70a < (in_ECX * -0x3d70a3d7 >> 4 | in_ECX * -0x70000000) &&
                (in_ECX * -0x3d70a3d7 >> 2 | uVar5 * 0x40000000) < 0x28f5c29) ^ 0x1d;
        bVar10 = CARRY4(uVar8,uVar5);
        uVar8 = uVar8 + uVar5;
        iVar7 = iVar7 + (uint)bVar10;
        if (in_EDX != 2) {
          uVar5 = 2;
          do {
            uVar9 = *(uint *)(uVar5 * 4 + ((uintptr_t)pf_module_state+0xbf5U));
            bVar10 = CARRY4(uVar8,uVar9);
            uVar8 = uVar8 + uVar9;
            iVar7 = iVar7 + ((int)uVar9 >> 0x1f) + (uint)bVar10;
            uVar5 = uVar5 + 1;
          } while (in_EDX != uVar5);
        }
      }
    }
    uVar9 = uVar8 + uVar1;
    uVar5 = recovered_100495d0(in_ECX,in_EDX,uVar1);
    param_1[7] = uVar5;
    uVar11 = recovered_1003b880(uVar9 + 3,
                                ((int)uVar1 >> 0x1f) + iVar7 + (uint)CARRY4(uVar8,uVar1) +
                                (uint)(0xfffffffc < uVar9),7,0);
    param_1[6] = (uint)uVar11;
    uVar5 = 0x3b;
    if (uVar4 != 0x3c) {
      uVar5 = uVar4;
    }
    iVar7 = uVar9 * 0x15180 + -0x15180 + uVar3 * 0x3c + uVar2 * 0xe10 + uVar5;
  }
  return iVar7;
}

#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100495d0
 */

int recovered_100495d0(uint in_ECX,uint in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  if ((int)in_EDX < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x1f;
    if ((in_EDX != 1) &&
       (uVar2 = in_ECX * -0x3d70a3d7 + 0x51eb850,
       iVar1 = 0x3c - (uint)((in_ECX & 3) != 0 ||
                            0xa3d70a < (uVar2 >> 4 | in_ECX * -0x70000000) &&
                            (uVar2 >> 2 | in_ECX * 0x40000000) < 0x28f5c29), in_EDX != 2)) {
      uVar2 = 2;
      do {
        iVar3 = 0;
        if (uVar2 < 0xc) {
          iVar3 = *(int *)(uVar2 * 4 + ((uintptr_t)pf_module_state+0xbf5U));
        }
        iVar1 = iVar1 + iVar3;
        uVar2 = uVar2 + 1;
      } while (in_EDX != uVar2);
    }
  }
  return param_3 + -1 + iVar1;
}


#undef DAT_0024e550
#define DAT_0024e550 (*(uint8_t *)(0x24e550U))
#undef DAT_0024e554
#define DAT_0024e554 (*(uint8_t *)(0x24e554U))
#undef DAT_0024e558
#define DAT_0024e558 (*(uint8_t *)(0x24e558U))
#undef DAT_0024e55c
#define DAT_0024e55c (*(uint8_t *)(0x24e55cU))
#undef DAT_0024e560
#define DAT_0024e560 (*(uint8_t *)(0x24e560U))
#undef DAT_0024e564
#define DAT_0024e564 (*(uint8_t *)(0x24e564U))
#undef DAT_0024e568
#define DAT_0024e568 (*(uint8_t *)(0x24e568U))
#undef DAT_0024e56c
#define DAT_0024e56c (*(uint8_t *)(0x24e56cU))
#undef DAT_0024e570
#define DAT_0024e570 (*(uint8_t *)(0x24e570U))
#define local_20 (*(int *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_10049660(uint *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;

  recovered_1003be80(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x439dU))),0,0x24);
  if (param_1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
  }
  uVar5 = uVar2 / 0x15180;
  uVar4 = (uVar5 + 4 & 0xffff) * 0x2493 >> 0x10;
  (*(uint *)(((uintptr_t)pf_module_state+0x43b5U))) = uVar5 + 4 + ((((uVar5 + 4) - uVar4 & 0xffff) >> 1) + uVar4 >> 2) * -7 & 0xffff;
  local_1c = -0x7b1;
  local_20 = 0x45;
  local_14 = -0x7b2;
  uVar4 = 0x7b2;
  uVar3 = 0;
  do {
    uVar7 = uVar3;
    uVar9 = uVar4;
    (*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) = uVar5;
    uVar8 = 0x16d;
    if ((uVar9 & 3) == 0) {
      uVar8 = ((uVar9 / 400) * 400 + local_14 == 0 || (uVar9 / 100) * 100 + local_14 != 0) + 0x16d;
    }
    local_1c = local_1c + -1;
    (*(int *)(((uintptr_t)pf_module_state+0x43b1U))) = local_20 + 1;
    local_14 = local_14 + -1;
    uVar5 = (*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) - uVar8;
    uVar4 = uVar9 + 1;
    uVar3 = uVar7 - ((*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) < uVar8);
    local_20 = (*(int *)(((uintptr_t)pf_module_state+0x43b1U)));
  } while (((*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) < uVar8) <= uVar7);
  if (uVar7 < ((*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) < 0x1f)) {
    iVar6 = 0;
    uVar4 = (*(uint *)(((uintptr_t)pf_module_state+0x43b9U)));
  }
  else {
    uVar4 = (*(uint *)(((uintptr_t)pf_module_state+0x43b9U))) - 0x1f;
    uVar8 = (uVar7 - 1) + (uint)(0x1e < (*(uint *)(((uintptr_t)pf_module_state+0x43b9U))));
    uVar5 = local_1c * 0x3d70a3d7 + 0x51eb850;
    uVar5 = ((uVar9 & 3) != 0 ||
            0xa3d70a < (uVar5 >> 4 | local_1c * 0x70000000) &&
            (uVar5 >> 2 | local_1c * -0x40000000) < 0x28f5c29) ^ 0x1d;
    uVar3 = uVar4 - uVar5;
    uVar5 = (uint)(uVar4 < uVar5);
    uVar9 = uVar8 - uVar5;
    iVar6 = 1;
    if (uVar5 <= uVar8) {
      if (uVar9 < (uVar3 < 0x1f)) {
        iVar6 = 2;
      }
      else {
        uVar4 = uVar3 - 0x1f;
        iVar6 = 3;
        if ((uVar9 - 1) + (uint)(0x1e < uVar3) < (uint)(uVar4 < 0x1e)) goto LAB_100498f4;
        uVar4 = uVar3 - 0x3d;
        iVar6 = 4;
        if ((uVar9 - 1) + (uint)(0x3c < uVar3) < (uint)(uVar4 < 0x1f)) goto LAB_100498f4;
        uVar4 = uVar3 - 0x5c;
        iVar6 = 5;
        if ((uVar9 - 1) + (uint)(0x5b < uVar3) < (uint)(uVar4 < 0x1e)) goto LAB_100498f4;
        uVar4 = uVar3 - 0x7a;
        iVar6 = 6;
        if ((uVar9 - 1) + (uint)(0x79 < uVar3) < (uint)(uVar4 < 0x1f)) goto LAB_100498f4;
        uVar4 = uVar3 - 0x99;
        iVar6 = 7;
        if ((uVar9 - 1) + (uint)(0x98 < uVar3) < (uint)(uVar4 < 0x1f)) goto LAB_100498f4;
        uVar4 = uVar3 - 0xb8;
        iVar6 = 8;
        if ((uVar9 - 1) + (uint)(0xb7 < uVar3) < (uint)(uVar4 < 0x1e)) goto LAB_100498f4;
        uVar4 = uVar3 - 0xd6;
        iVar6 = 9;
        if ((uVar9 - 1) + (uint)(0xd5 < uVar3) < (uint)(uVar4 < 0x1f)) goto LAB_100498f4;
        uVar4 = uVar3 - 0xf5;
        iVar6 = 10;
        if ((uVar9 - 1) + (uint)(0xf4 < uVar3) < (uint)(uVar4 < 0x1e)) goto LAB_100498f4;
        uVar4 = uVar3 - 0x113;
        bVar1 = (uVar9 - 1) + (uint)(0x112 < uVar3) < (uint)(uVar4 < 0x1f);
        iVar6 = 0xc - (uint)bVar1;
        if (bVar1) goto LAB_100498f4;
        uVar3 = uVar3 - 0x132;
      }
      uVar4 = uVar3;
    }
  }
LAB_100498f4:
  uVar10 = recovered_1003b880(uVar2,0,0x15180,0);
  (*(int *)(((uintptr_t)pf_module_state+0x43adU))) = iVar6;
  (*(int *)(((uintptr_t)pf_module_state+0x43a9U))) = uVar4 + 1;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x43a5U))) = (int)((uVar10 & 0xffffffff) * 0x123457 >> 0x20);
  iVar6 = (int)((uVar10 & 0xffffffff) * 0x4444445 >> 0x20);
  (*(uint *)(((uintptr_t)pf_module_state+0x43a1U))) = iVar6 + ((uint)(iVar6 * 0x889) >> 0x11) * -0x3c & 0xffff;
  (*(int *)(((uintptr_t)pf_module_state+0x439dU))) = (int)uVar10 + iVar6 * -0x3c;
  (*(uint32_t *)(((uintptr_t)pf_module_state+0x43bdU))) = 0;
  return &(*(uint8_t *)(((uintptr_t)pf_module_state+0x439dU)));
}

#undef DAT_0024e550
#undef DAT_0024e554
#undef DAT_0024e558
#undef DAT_0024e55c
#undef DAT_0024e560
#undef DAT_0024e564
#undef DAT_0024e568
#undef DAT_0024e56c
#undef DAT_0024e570
#undef local_20
#undef local_1c
#undef local_14

#undef DAT_0024e550
#define DAT_0024e550 (*(uint8_t *)(0x24e550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049970
 */

undefined1 * recovered_10049970(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10049660(param_1);
  return &(*(uint8_t *)(((uintptr_t)pf_module_state+0x439dU)));
}

#undef DAT_0024e550

#undef DAT_0024d028
#define DAT_0024d028 (*(uint8_t *)(0x24d028U))
#undef DAT_0024d060
#define DAT_0024d060 (*(uint8_t *)(0x24d060U))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049990
 */

undefined * recovered_10049990(undefined4 *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint vararg5;
  uint uVar2;
  uint vararg3;
  uint vararg6;
  uint vararg4;

  if (param_1 == (undefined4 *)0x0) {
    vararg6 = 0x7b2;
    uVar2 = 1;
    local_14 = ((uintptr_t)pf_module_state+0x2cecU);
    uVar1 = ((uintptr_t)pf_module_state+0x2d08U);
    vararg5 = 0;
    vararg3 = 0;
    vararg4 = 0;
  }
  else {
    uVar1 = param_1[6];
    if (6 < uVar1) {
      uVar1 = 0;
    }
    uVar2 = param_1[4];
    if (0xb < uVar2) {
      uVar2 = 0;
    }
    local_14 = *(uint *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x2e75U))) + uVar1 * 4);
    uVar1 = *(uint *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x2eadU))) + uVar2 * 4);
    uVar2 = param_1[3];
    vararg6 = param_1[5] + 0x76c;
    vararg3 = param_1[2];
    vararg5 = *param_1;
    vararg4 = param_1[1];
  }
  pf_varargs_1003e570__4__4__4__4__4__4__4_
            ((char *)((uintptr_t)pf_module_state+0x43c1U),0x20,(char *)((uintptr_t)pf_module_state+0x2d38U),local_14,uVar1,uVar2,vararg3,vararg4,vararg5,
             vararg6);
  return (undefined *)((uintptr_t)pf_module_state+0x43c1U);
}

#undef DAT_0024d028
#undef DAT_0024d060
#undef local_14

#undef DAT_0024d028
#define DAT_0024d028 (*(uint8_t *)(0x24d028U))
#undef DAT_0024d060
#define DAT_0024d060 (*(uint8_t *)(0x24d060U))
#undef DAT_0024e550
#define DAT_0024e550 (*(uint8_t *)(0x24e550U))
#undef DAT_0024e554
#define DAT_0024e554 (*(uint8_t *)(0x24e554U))
#undef DAT_0024e558
#define DAT_0024e558 (*(uint8_t *)(0x24e558U))
#undef DAT_0024e55c
#define DAT_0024e55c (*(uint8_t *)(0x24e55cU))
#undef DAT_0024e560
#define DAT_0024e560 (*(uint8_t *)(0x24e560U))
#undef DAT_0024e564
#define DAT_0024e564 (*(uint8_t *)(0x24e564U))
#undef DAT_0024e568
#define DAT_0024e568 (*(uint8_t *)(0x24e568U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * recovered_10049a30(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  recovered_10049660(param_1);
  uVar1 = (*(uint *)(((uintptr_t)pf_module_state+0x43b5U)));
  if (6 < (*(uint *)(((uintptr_t)pf_module_state+0x43b5U)))) {
    uVar1 = 0;
  }
  uVar2 = (*(uint *)(((uintptr_t)pf_module_state+0x43adU)));
  if (0xb < (*(uint *)(((uintptr_t)pf_module_state+0x43adU)))) {
    uVar2 = 0;
  }
  pf_varargs_1003e570__4__4__4__4__4__4__4_
            ((char *)((uintptr_t)pf_module_state+0x43c1U),0x20,(char *)((uintptr_t)pf_module_state+0x2d38U),*(uint *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x2e75U))) + uVar1 * 4),
             *(uint *)(&(*(uint8_t *)(((uintptr_t)pf_module_state+0x2eadU))) + uVar2 * 4),(*(uint *)(((uintptr_t)pf_module_state+0x43a9U))),(*(uint *)(((uintptr_t)pf_module_state+0x43a5U))),(*(uint *)(((uintptr_t)pf_module_state+0x43a1U))),
             (*(uint *)(((uintptr_t)pf_module_state+0x439dU))),(*(int *)(((uintptr_t)pf_module_state+0x43b1U))) + 0x76c);
  return (undefined *)((uintptr_t)pf_module_state+0x43c1U);
}

#undef DAT_0024d028
#undef DAT_0024d060
#undef DAT_0024e550
#undef DAT_0024e554
#undef DAT_0024e558
#undef DAT_0024e55c
#undef DAT_0024e560
#undef DAT_0024e564
#undef DAT_0024e568

#define local_1a (*(byte (*)[2])(frame + 22))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049ab0
 */

int recovered_10049ab0(undefined1 *param_1,uint param_2,byte *param_3,int param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  int iVar3;

  local_14 = 0;
  iVar3 = 0;
  if ((param_4 != 0 && param_3 != (byte *)0x0) && (param_2 != 0 && param_1 != (undefined1 *)0x0)) {
    *param_1 = 0;
    bVar1 = *param_3;
    if (bVar1 != 0) {
      iVar3 = 0;
      do {
        if (bVar1 == 0x25) {
          bVar1 = param_3[iVar3 + 1];
          if (bVar1 < 0x71) {
                    /* WARNING: Could not emulate address calculation at 0x10049b7e */
                    /* WARNING: Treating indirect jump as call */
            iVar3 = (**(code **)((uint)bVar1 * 4 + ((uintptr_t)pf_module_state+0xa21U)))();
            return iVar3;
          }
          local_1a[1] = 0;
          local_1a[0] = bVar1;
          local_18 = iVar3 + 1;
          uVar2 = recovered_1003c2f0((char *)local_1a);
          if (param_2 <= local_14 + uVar2) {
            return 0;
          }
          recovered_1003bbf0(param_1 + local_14,local_1a,uVar2);
          local_14 = uVar2 + local_14;
          param_1[local_14] = 0;
          iVar3 = local_18;
        }
        else {
          local_1a[1] = 0;
          local_1a[0] = bVar1;
          uVar2 = recovered_1003c2f0((char *)local_1a);
          if (param_2 <= local_14 + uVar2) {
            return 0;
          }
          recovered_1003bbf0(param_1 + local_14,local_1a,uVar2);
          local_14 = uVar2 + local_14;
          param_1[local_14] = 0;
        }
        bVar1 = param_3[iVar3 + 1];
        iVar3 = iVar3 + 1;
      } while (bVar1 != 0);
    }
    iVar3 = local_14;
  }
  return iVar3;
}

#undef local_1a
#undef local_18
#undef local_14

#define local_24 (*(char (*)[16])(frame + 28))
#define local_14 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a090
 */

undefined4 recovered_1004a090(int in_ECX,uint in_EDX,int *param_3,uint param_4,int param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  ulong count;
  void *pvVar3;
  undefined4 uVar4;
  char *format;

  pcVar2 = (char *)((uintptr_t)pf_module_state+0x2df1U);
  if (param_5 != 4) {
    pcVar2 = (char *)((uintptr_t)pf_module_state+0x17a8U);
  }
  format = (char *)((uintptr_t)pf_module_state+0x2decU);
  if (param_5 != 2) {
    format = pcVar2;
  }
  local_14 = in_EDX;
  pf_varargs_1003e570__4_(local_24,0x10,format,param_4);
  count = recovered_1003c2f0(local_24);
  if ((param_3 == (int *)0x0 || in_ECX == 0) || (local_14 <= *param_3 + count)) {
    uVar4 = 0;
  }
  else {
    pvVar3 = recovered_1003bbf0((void *)(*param_3 + in_ECX),local_24,count);
    iVar1 = *param_3;
    *param_3 = count + iVar1;
    *(undefined1 *)(in_ECX + count + iVar1) = 0;
    uVar4 = CONCAT31((int3)((uint)pvVar3 >> 8),1);
  }
  return uVar4;
}

#undef local_24
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a120
 */

bool recovered_1004a120(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_EAX = 0;

  if (param_1 != (undefined4 *)0x0 && param_2 == 1) {
    recovered_1003c650((undefined4 *)0x0);
    *param_1 = extraout_EAX;
    param_1[1] = 0;
  }
  return param_1 != (undefined4 *)0x0 && param_2 == 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a160
 */

undefined4 recovered_1004a160(undefined4 *in_ECX,int *in_EDX,int *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint count;
  undefined4 uVar3;

  uVar2 = recovered_1003c2f0((char *)in_ECX);
  count = uVar2 + 1;
  uVar3 = 0x22;
  if (count <= *param_4) {
    recovered_1003bbf0((void *)*param_3,in_ECX,count);
    iVar1 = *param_3;
    *in_EDX = iVar1;
    *param_3 = iVar1 + count;
    *param_4 = *param_4 - count;
    uVar3 = 0;
  }
  return uVar3;
}



