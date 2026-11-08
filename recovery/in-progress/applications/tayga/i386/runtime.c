/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_01805034
#define DAT_01805034 (*(uint8_t *)(0x1805034U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d10
 */

void recovered_10000d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 0;
  recovered_10000d20();
  return;
}

#undef DAT_01805034

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
#undef DAT_01805034
#define DAT_01805034 (*(char *)(0x1805034U))
#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
#undef DAT_0180503c
#define DAT_0180503c (*(uint8_t *)(0x180503cU))
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
 * Address: 0x10000d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000d20(void)

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
  if ((*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) != '\0') {
    return;
  }
  (*(int *)(((uintptr_t)pf_module_state+0x3efU))) = 0;
  (*(int *)(((uintptr_t)pf_module_state+0x3f3U))) = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_10000d7b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_10000d7b:
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
        if (iVar9 == 0) goto LAB_10000ec0;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_100040c0(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) goto LAB_10000fc6;
    }
  }
LAB_10000ec0:
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
      puVar6 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
      if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if ((*(int *)(((uintptr_t)pf_module_state+0x3f3U))) == 0) {
        (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
        (*(int *)(((uintptr_t)pf_module_state+0x3f3U))) = 0x300000;
        return;
      }
      (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
    if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if ((*(int *)(((uintptr_t)pf_module_state+0x3f3U))) == 0) {
      (*(int *)(((uintptr_t)pf_module_state+0x3f3U))) = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
      if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if ((*(int *)(((uintptr_t)pf_module_state+0x3f3U))) == 0) {
        (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
        (*(int *)(((uintptr_t)pf_module_state+0x3f3U))) = 0x2000000;
        return;
      }
      (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
      return;
    }
  }
LAB_10000fc6:
  if ((*(int *)(((uintptr_t)pf_module_state+0x3f3U))) == 0) {
    (*(int *)(((uintptr_t)pf_module_state+0x3f3U))) = (*(int *)(((uintptr_t)pf_module_state+0x3efU)));
    (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
    return;
  }
  (*(uint8_t *)((uintptr_t)pf_module_state+0x3ebU)) = 1;
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
#undef DAT_01805034
#undef DAT_01805038
#undef DAT_0180503c
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

#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001040(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000d20();
  iVar1 = 0;
  for (piVar2 = (*(int * *)(((uintptr_t)pf_module_state+0x3efU))); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_01805038

#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000d20();
  for (iVar1 = (*(int *)(((uintptr_t)pf_module_state+0x3efU))); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_01805038

#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100010c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000d20();
  iVar2 = 0;
  for (piVar1 = (*(int * *)(((uintptr_t)pf_module_state+0x3efU))); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_01805038

#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100010f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000d20();
  for (iVar1 = (*(int *)(((uintptr_t)pf_module_state+0x3efU))); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_01805038

#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
#undef DAT_0180503c
#define DAT_0180503c (*(uint8_t *)(0x180503cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001130
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * recovered_10001130(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000d20();
    puVar4 = (*(uint * *)(((uintptr_t)pf_module_state+0x3efU)));
    if ((*(uint * *)(((uintptr_t)pf_module_state+0x3f3U))) != (uint *)0x0) {
      puVar4 = (*(uint * *)(((uintptr_t)pf_module_state+0x3f3U)));
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
            (*(uint * *)(((uintptr_t)pf_module_state+0x3f3U))) = (*(uint * *)(((uintptr_t)pf_module_state+0x3efU)));
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              (*(uint * *)(((uintptr_t)pf_module_state+0x3f3U))) = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = (*(uint * *)(((uintptr_t)pf_module_state+0x3efU)));
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_01805038
#undef DAT_0180503c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

longlong recovered_100011f0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10001230
 */

ulonglong recovered_10001230(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001270
 */

undefined8 recovered_10001270(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100012c0
 */

undefined8 recovered_100012c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100013a0
 */

undefined8 recovered_100013a0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001410
 */

undefined8 recovered_10001410(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001550
 */

undefined8 recovered_10001550(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001610
 */

void recovered_10001610(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

int recovered_10001630(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001650
 */

void * recovered_10001650(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x4f < uVar2 &&
      (UNRECOVERED_JUMPTABLE = (code *)UINT_0000684c, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001690
 */

void recovered_10001690(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x53 < uVar2 &&
      (UNRECOVERED_JUMPTABLE = (code *)UINT_00006850, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x100016c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006854
#define UINT_00006854 (*(uint *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d0
 */

void * recovered_100016d0(void *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x57 < uVar2 &&
      (UNRECOVERED_JUMPTABLE = (code *)UINT_00006854, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001710
 */

void recovered_10001710(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001737;
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
LAB_10001737:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d0
 */

undefined4 * recovered_100017d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x100019a0
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_100019a0(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x10001a50
 */

void recovered_10001a50(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001af0
 */

void recovered_10001af0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001b90
 */

int recovered_10001b90(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001c2e;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10001c45;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10001c76:
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
      if (uVar7 != uVar8) goto LAB_10001c76;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10001c76;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10001c76;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10001cc0((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_10001c2e:
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
LAB_10001c45:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

int recovered_10001cc0(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001d00
 */

bool recovered_10001d00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d20
 */

bool recovered_10001d20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d40
 */

bool recovered_10001d40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

bool recovered_10001d60(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d90
 */

bool recovered_10001d90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001db0
 */

bool recovered_10001db0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

int recovered_10001dd0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df0
 */

int recovered_10001df0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e10
 */

int recovered_10001e10(int param_1)

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

int recovered_10001e80(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001eb6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001eb6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

void recovered_10001ec0(int param_1,int param_2)

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
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ee0
 */

undefined4 * recovered_10001ee0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint size;
  uint uVar8;

  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  size = 0;
  do {
    uVar6 = size;
    size = uVar6 + 1;
  } while (*(char *)((int)param_1 + uVar6) != '\0');
  iVar3 = Ram00006800;
  if (iVar3 != 0x50414d57) {
    return (undefined4 *)0x0;
  }
  iVar3 = Ram00006804;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  uVar8 = Ram00006808;
  if (uVar8 < 0xc) {
    return (undefined4 *)0x0;
  }
  uVar8 = Ram00006808;
  if (uVar8 < 0x50) {
    return (undefined4 *)0x0;
  }
  pcVar4 = (code *)UINT_0000684c;
  if (pcVar4 == (code *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (*pcVar4)(size);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar7 = puVar5;
  if (7 < size) {
    if ((((uint)puVar5 ^ (uint)param_1) & 3) != 0) goto LAB_10001ff1;
    if (((uint)puVar5 & 3) != 0) {
      uVar8 = 0;
      do {
        *(undefined1 *)((int)puVar5 + uVar8) = *(undefined1 *)((int)param_1 + uVar8);
        uVar1 = uVar8 + 1;
        if (uVar6 == uVar8) break;
        iVar3 = uVar8 + 1;
        uVar8 = uVar1;
      } while (((int)puVar5 + iVar3 & 3U) != 0);
      size = size - uVar1;
      param_1 = (undefined4 *)((int)param_1 + uVar1);
      puVar7 = (undefined4 *)((int)puVar5 + uVar1);
    }
    for (; 0xf < size; size = size - 0x10) {
      *puVar7 = *param_1;
      puVar7[1] = param_1[1];
      puVar7[2] = param_1[2];
      puVar7[3] = param_1[3];
      param_1 = param_1 + 4;
      puVar7 = puVar7 + 4;
    }
    for (; 3 < size; size = size - 4) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    }
  }
  if (size == 0) {
    return puVar5;
  }
LAB_10001ff1:
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar7 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (size != uVar6);
  return puVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002020
 */

char * recovered_10002020(char *param_1,char param_2)

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
 * Address: 0x10002060
 */

int recovered_10002060(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000209b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000209b;
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
 * Address: 0x100020b0
 */

char * recovered_100020b0(char *param_1,char *param_2)

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
 * Address: 0x10002100
 */

char * recovered_10002100(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002143;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002143:
  return pcVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002150
 */

undefined4 recovered_10002150(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((uintptr_t)pf_module_state+0x267U);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002160
 */

undefined4 recovered_10002160(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ((uintptr_t)pf_module_state+0x3b7U);
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002170
 */

void recovered_10002170(undefined4 *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = Ram00006800;
  if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
      (uVar3 = Ram00006808, uVar3 < 0xc)) ||
     (((uVar3 = Ram00006808, uVar3 < 0x16c ||
       (pcVar2 = (code *)UINT_00006968, pcVar2 == (code *)0x0)) ||
      (uVar3 = (*pcVar2)(&local_20), uVar3 == 0)))) {
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
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006968
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c

#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002200
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002200(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
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

#undef DAT_01804c50

#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002230(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)(*(float *)(((uintptr_t)pf_module_state+0x7U))) && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)(*(float *)(((uintptr_t)pf_module_state+0x7U))));
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_01804c50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002310
 */

longdouble recovered_10002310(double param_1,double param_2)

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
 * Address: 0x10002370
 */

longdouble recovered_10002370(double param_1,double param_2)

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
 * Address: 0x10002410
 */

longdouble recovered_10002410(double param_1)

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
 * Address: 0x10002460
 */

longdouble recovered_10002460(double param_1)

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
 * Address: 0x100024c0
 */

void recovered_100024c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
#undef DAT_01804c54
#define DAT_01804c54 (*(uint8_t *)(0x1804c54U))
#undef DAT_01804c58
#define DAT_01804c58 (*(uint8_t *)(0x1804c58U))
#undef DAT_01804c5c
#define DAT_01804c5c (*(uint8_t *)(0x1804c5cU))
#undef DAT_01804c60
#define DAT_01804c60 (*(uint8_t *)(0x1804c60U))
#undef DAT_01804c64
#define DAT_01804c64 (*(uint8_t *)(0x1804c64U))
#undef DAT_01804c68
#define DAT_01804c68 (*(uint8_t *)(0x1804c68U))
#undef DAT_01804c6c
#define DAT_01804c6c (*(uint8_t *)(0x1804c6cU))
#undef DAT_01804c70
#define DAT_01804c70 (*(uint8_t *)(0x1804c70U))
#undef DAT_01804c74
#define DAT_01804c74 (*(uint8_t *)(0x1804c74U))
#undef DAT_01804c78
#define DAT_01804c78 (*(uint8_t *)(0x1804c78U))
#undef DAT_01804c7c
#define DAT_01804c7c (*(uint8_t *)(0x1804c7cU))
#undef DAT_01804c80
#define DAT_01804c80 (*(uint8_t *)(0x1804c80U))
#undef DAT_01804ca8
#define DAT_01804ca8 (*(uint8_t *)(0x1804ca8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100025c0(double param_1)

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
    lVar2 = (longdouble)(*(float *)(((uintptr_t)pf_module_state+0xbU)));
  }
  else {
    iVar1 = 0;
    if ((longdouble)(*(float *)(((uintptr_t)pf_module_state+0xfU))) < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
        iVar1 = iVar1 + 1;
      } while ((longdouble)(*(float *)(((uintptr_t)pf_module_state+0xfU))) < lVar2);
    }
    if (lVar2 < (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x13U)))) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x13U))));
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
    lVar2 = (lVar9 * lVar2) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x37U))) +
            lVar9 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x33U))) +
            lVar8 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x2fU))) +
            lVar7 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x2bU))) +
            lVar6 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x27U))) +
            lVar5 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x23U))) +
            lVar4 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x1fU))) +
            lVar3 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x1bU))) +
            (lVar10 * lVar2) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x17U))) + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x5fU)));
  }
  return lVar2;
}

#undef DAT_01804c50
#undef DAT_01804c54
#undef DAT_01804c58
#undef DAT_01804c5c
#undef DAT_01804c60
#undef DAT_01804c64
#undef DAT_01804c68
#undef DAT_01804c6c
#undef DAT_01804c70
#undef DAT_01804c74
#undef DAT_01804c78
#undef DAT_01804c7c
#undef DAT_01804c80
#undef DAT_01804ca8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

longlong recovered_100026e0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)((uint)(0.0 <= param_1) * 8 + ((uintptr_t)pf_module_state+0x87U)));
}


#undef DAT_01804c84
#define DAT_01804c84 (*(uint8_t *)(0x1804c84U))
#undef DAT_01804c88
#define DAT_01804c88 (*(uint8_t *)(0x1804c88U))
#undef DAT_01804c8c
#define DAT_01804c8c (*(uint8_t *)(0x1804c8cU))
#undef DAT_01804cb0
#define DAT_01804cb0 (*(uint8_t *)(0x1804cb0U))
#undef DAT_01804cb8
#define DAT_01804cb8 (*(uint8_t *)(0x1804cb8U))
#undef DAT_01804cc0
#define DAT_01804cc0 (*(uint8_t *)(0x1804cc0U))
#undef DAT_01804cc8
#define DAT_01804cc8 (*(uint8_t *)(0x1804cc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002730(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x6fU)));
    } while ((longdouble)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < lVar1);
  }
  if (lVar1 < (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x77U)))) {
    do {
      lVar1 = lVar1 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x7fU)));
    } while (lVar1 < (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x77U))));
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x43U))) +
         (lVar2 * lVar2) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x3fU))) +
         (longdouble)1 + lVar2 / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x3bU)))) * lVar1;
}

#undef DAT_01804c84
#undef DAT_01804c88
#undef DAT_01804c8c
#undef DAT_01804cb0
#undef DAT_01804cb8
#undef DAT_01804cc0
#undef DAT_01804cc8

#undef DAT_01804c90
#define DAT_01804c90 (*(uint8_t *)(0x1804c90U))
#undef DAT_01804c94
#define DAT_01804c94 (*(uint8_t *)(0x1804c94U))
#undef DAT_01804c98
#define DAT_01804c98 (*(uint8_t *)(0x1804c98U))
#undef DAT_01804cb0
#define DAT_01804cb0 (*(uint8_t *)(0x1804cb0U))
#undef DAT_01804cb8
#define DAT_01804cb8 (*(uint8_t *)(0x1804cb8U))
#undef DAT_01804cc0
#define DAT_01804cc0 (*(uint8_t *)(0x1804cc0U))
#undef DAT_01804cc8
#define DAT_01804cc8 (*(uint8_t *)(0x1804cc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100027d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x6fU)));
    } while ((longdouble)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < lVar1);
  }
  if (lVar1 < (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x77U)))) {
    do {
      lVar1 = lVar1 + (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x7fU)));
    } while (lVar1 < (longdouble)(*(double *)(((uintptr_t)pf_module_state+0x77U))));
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x4fU))) +
         (lVar1 * lVar1) / (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x4bU))) +
         (longdouble)1 + lVar1 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x47U)));
}

#undef DAT_01804c90
#undef DAT_01804c94
#undef DAT_01804c98
#undef DAT_01804cb0
#undef DAT_01804cb8
#undef DAT_01804cc0
#undef DAT_01804cc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002870
 */

void recovered_10002870(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
#undef DAT_01804c9c
#define DAT_01804c9c (*(uint8_t *)(0x1804c9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002890(double param_1)

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
    dVar3 = (double)(*(float *)(((uintptr_t)pf_module_state+0x53U)));
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
      dVar3 = dVar3 * (double)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
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

#undef DAT_01804c50
#undef DAT_01804c9c

#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
#undef DAT_01804c9c
#define DAT_01804c9c (*(uint8_t *)(0x1804c9cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002970(double param_1)

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
    dVar2 = (double)(*(float *)(((uintptr_t)pf_module_state+0x53U)));
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
      dVar2 = dVar2 * (double)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
      bVar10 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar4,uVar7);
}

#undef DAT_01804c50
#undef DAT_01804c9c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a20
 */

longdouble recovered_10002a20(uint param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

longdouble recovered_10002a90(uint param_1,uint param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b40
 */

void recovered_10002b40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002ba0(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U))) <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U))));
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

#undef DAT_01804c50

#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002c90(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * (*(float *)(((uintptr_t)pf_module_state+0x7U)));
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

#undef DAT_01804c50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd0
 */

longdouble recovered_10002cd0(float param_1,float param_2)

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
 * Address: 0x10002d70
 */

longdouble recovered_10002d70(float param_1)

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
 * Address: 0x10002dc0
 */

longdouble recovered_10002dc0(float param_1)

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
 * Address: 0x10002e30
 */

longdouble recovered_10002e30(double param_1)

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
 * Address: 0x10002ea0
 */

longdouble recovered_10002ea0(float param_1)

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
 * Address: 0x10002f20
 */

longdouble recovered_10002f20(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_100024c0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
#undef DAT_01804c54
#define DAT_01804c54 (*(uint8_t *)(0x1804c54U))
#undef DAT_01804c58
#define DAT_01804c58 (*(uint8_t *)(0x1804c58U))
#undef DAT_01804c5c
#define DAT_01804c5c (*(uint8_t *)(0x1804c5cU))
#undef DAT_01804c60
#define DAT_01804c60 (*(uint8_t *)(0x1804c60U))
#undef DAT_01804c64
#define DAT_01804c64 (*(uint8_t *)(0x1804c64U))
#undef DAT_01804c68
#define DAT_01804c68 (*(uint8_t *)(0x1804c68U))
#undef DAT_01804c6c
#define DAT_01804c6c (*(uint8_t *)(0x1804c6cU))
#undef DAT_01804c70
#define DAT_01804c70 (*(uint8_t *)(0x1804c70U))
#undef DAT_01804c74
#define DAT_01804c74 (*(uint8_t *)(0x1804c74U))
#undef DAT_01804c78
#define DAT_01804c78 (*(uint8_t *)(0x1804c78U))
#undef DAT_01804c7c
#define DAT_01804c7c (*(uint8_t *)(0x1804c7cU))
#undef DAT_01804c80
#define DAT_01804c80 (*(uint8_t *)(0x1804c80U))
#undef DAT_01804ca8
#define DAT_01804ca8 (*(uint8_t *)(0x1804ca8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002f40(float param_1)

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

  fVar1 = (*(float *)(((uintptr_t)pf_module_state+0xbU)));
  if (0.0 < param_1) {
    iVar10 = 0;
    if ((*(float *)(((uintptr_t)pf_module_state+0xfU))) < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * (*(float *)(((uintptr_t)pf_module_state+0x7U)));
        iVar10 = iVar10 + 1;
      } while ((*(float *)(((uintptr_t)pf_module_state+0xfU))) < param_1);
    }
    for (; param_1 < (*(float *)(((uintptr_t)pf_module_state+0x13U))); param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / (*(float *)(((uintptr_t)pf_module_state+0x37U))) +
            fVar9 / (*(float *)(((uintptr_t)pf_module_state+0x33U))) +
            fVar8 / (*(float *)(((uintptr_t)pf_module_state+0x2fU))) +
            fVar7 / (*(float *)(((uintptr_t)pf_module_state+0x2bU))) +
            fVar6 / (*(float *)(((uintptr_t)pf_module_state+0x27U))) +
            fVar5 / (*(float *)(((uintptr_t)pf_module_state+0x23U))) +
            fVar4 / (*(float *)(((uintptr_t)pf_module_state+0x1fU))) +
            fVar3 / (*(float *)(((uintptr_t)pf_module_state+0x1bU))) + (fVar1 * fVar2) / (*(float *)(((uintptr_t)pf_module_state+0x17U))) + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)(*(double *)(((uintptr_t)pf_module_state+0x5fU)));
  }
  return (longdouble)fVar1;
}

#undef DAT_01804c50
#undef DAT_01804c54
#undef DAT_01804c58
#undef DAT_01804c5c
#undef DAT_01804c60
#undef DAT_01804c64
#undef DAT_01804c68
#undef DAT_01804c6c
#undef DAT_01804c70
#undef DAT_01804c74
#undef DAT_01804c78
#undef DAT_01804c7c
#undef DAT_01804c80
#undef DAT_01804ca8

#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003070
 */

undefined4 recovered_10003070(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)((uint)(0.0 <= param_1) * 8 + ((uintptr_t)pf_module_state+0x87U)));
  return local_14;
}

#undef local_14

#undef DAT_01804c84
#define DAT_01804c84 (*(uint8_t *)(0x1804c84U))
#undef DAT_01804c88
#define DAT_01804c88 (*(uint8_t *)(0x1804c88U))
#undef DAT_01804c8c
#define DAT_01804c8c (*(uint8_t *)(0x1804c8cU))
#undef DAT_01804cb0
#define DAT_01804cb0 (*(uint8_t *)(0x1804cb0U))
#undef DAT_01804cb8
#define DAT_01804cb8 (*(uint8_t *)(0x1804cb8U))
#undef DAT_01804cc0
#define DAT_01804cc0 (*(uint8_t *)(0x1804cc0U))
#undef DAT_01804cc8
#define DAT_01804cc8 (*(uint8_t *)(0x1804cc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100030c0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < param_1; param_1 = param_1 + (float)(*(double *)(((uintptr_t)pf_module_state+0x6fU)))) {
  }
  for (; param_1 < (float)(*(double *)(((uintptr_t)pf_module_state+0x77U))); param_1 = param_1 + (float)(*(double *)(((uintptr_t)pf_module_state+0x7fU)))) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x43U))) +
          (fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x3fU))) + fVar1 / (*(float *)(((uintptr_t)pf_module_state+0x3bU))) + 1.0) * param_1);
}

#undef DAT_01804c84
#undef DAT_01804c88
#undef DAT_01804c8c
#undef DAT_01804cb0
#undef DAT_01804cb8
#undef DAT_01804cc0
#undef DAT_01804cc8

#undef DAT_01804c90
#define DAT_01804c90 (*(uint8_t *)(0x1804c90U))
#undef DAT_01804c94
#define DAT_01804c94 (*(uint8_t *)(0x1804c94U))
#undef DAT_01804c98
#define DAT_01804c98 (*(uint8_t *)(0x1804c98U))
#undef DAT_01804cb0
#define DAT_01804cb0 (*(uint8_t *)(0x1804cb0U))
#undef DAT_01804cb8
#define DAT_01804cb8 (*(uint8_t *)(0x1804cb8U))
#undef DAT_01804cc0
#define DAT_01804cc0 (*(uint8_t *)(0x1804cc0U))
#undef DAT_01804cc8
#define DAT_01804cc8 (*(uint8_t *)(0x1804cc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003160(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)(*(double *)(((uintptr_t)pf_module_state+0x67U))) < param_1; param_1 = param_1 + (float)(*(double *)(((uintptr_t)pf_module_state+0x6fU)))) {
  }
  for (; param_1 < (float)(*(double *)(((uintptr_t)pf_module_state+0x77U))); param_1 = param_1 + (float)(*(double *)(((uintptr_t)pf_module_state+0x7fU)))) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x4fU))) +
         (fVar1 * fVar1) / (*(float *)(((uintptr_t)pf_module_state+0x4bU))) + fVar1 * (*(float *)(((uintptr_t)pf_module_state+0x47U))) + 1.0);
}

#undef DAT_01804c90
#undef DAT_01804c94
#undef DAT_01804c98
#undef DAT_01804cb0
#undef DAT_01804cb8
#undef DAT_01804cc0
#undef DAT_01804cc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003200
 */

void recovered_10003200(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003370
 */

int recovered_10003370(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000349c:
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
    if (param_3 <= uVar7) goto LAB_1000349c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_01804c50
#define DAT_01804c50 (*(uint8_t *)(0x1804c50U))
#undef DAT_01804ca0
#define DAT_01804ca0 (*(uint8_t *)(0x1804ca0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100034c0(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x57U))) + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x57U))) + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x57U)));
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003581;
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
LAB_10003581:
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
              lVar10 = lVar10 * (longdouble)(*(float *)(((uintptr_t)pf_module_state+0x7U)));
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

#undef DAT_01804c50
#undef DAT_01804ca0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003660
 */

longdouble recovered_10003660(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_100034c0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#define local_3c (*(byte * *)(frame + 20))
#define local_1c (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003690
 */

int recovered_10003690(byte *param_1,uint param_2,byte *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  iVar3 = 0;
  local_1c = param_2;
  do {
    bVar1 = *param_3;
    if (bVar1 == 0x25) {
      bVar1 = param_3[1];
      if (bVar1 == 0x25) {
        if (1 < local_1c) {
          *param_1 = 0x25;
          param_1 = param_1 + 1;
          local_1c = local_1c - 1;
        }
        local_3c = param_3 + 1;
      }
      else {
        local_3c = param_3 + 2;
        while (uVar2 = bVar1 - 0x20, uVar2 < 0x11) {
          if ((0x12809U >> (uVar2 & 0x1f) & 1) == 0) {
            if (uVar2 == 10) {
              bVar1 = *local_3c;
              goto joined_r0x10003758;
            }
            break;
          }
          param_3 = param_3 + 1;
          bVar1 = *local_3c;
          local_3c = local_3c + 1;
        }
        do {
          bVar1 = param_3[1];
          param_3 = param_3 + 1;
          local_3c = param_3;
        } while ((byte)(bVar1 - 0x30U) < 10);
joined_r0x10003758:
        if (bVar1 == 0x2e) {
          if (local_3c[1] == 0x2a) {
            bVar1 = local_3c[2];
            local_3c = local_3c + 2;
          }
          else {
            do {
              bVar1 = local_3c[1];
              local_3c = local_3c + 1;
            } while ((byte)(bVar1 - 0x30U) < 10);
          }
        }
        if (bVar1 - 0x4c < 0x2f) {
                    /* WARNING: Could not emulate address calculation at 0x100037af */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)((bVar1 - 0x4c) * 4 + ((uintptr_t)pf_module_state+0x97U)))();
          return iVar3;
        }
        if (*local_3c - 0x49 < 0x30) {
                    /* WARNING: Could not emulate address calculation at 0x10003823 */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)((*local_3c - 0x49) * 4 + ((uintptr_t)pf_module_state+0x153U)))();
          return iVar3;
        }
        if (1 < local_1c) {
          *param_1 = 0x3f;
          param_1 = param_1 + 1;
          local_1c = local_1c - 1;
        }
      }
    }
    else {
      if (bVar1 == 0) {
        if (param_2 != 0) {
          *param_1 = 0;
        }
        return iVar3;
      }
      if (1 < local_1c) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3;
    }
    iVar3 = iVar3 + 1;
    param_3 = local_3c + 1;
  } while( true );
}

#undef local_3c
#undef local_1c

int recovered_10004090(char *buffer,size_t capacity,const char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,capacity,format,args);__builtin_va_end(args);return result;}


#undef DAT_01805038
#define DAT_01805038 (*(uint8_t *)(0x1805038U))
#undef DAT_0180503c
#define DAT_0180503c (*(uint8_t *)(0x180503cU))
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
 * Address: 0x100040c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100040c0(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
        if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if ((*(int * *)(((uintptr_t)pf_module_state+0x3f3U))) == (int *)0x0) {
          (*(int * *)(((uintptr_t)pf_module_state+0x3f3U))) = piVar1;
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
    puVar2 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
    if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if ((*(int * *)(((uintptr_t)pf_module_state+0x3f3U))) != (int *)0x0) {
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
    puVar2 = (undefined4 *)&(*(uint8_t *)((uintptr_t)pf_module_state+0x3efU));
    if ((*(int *)(((uintptr_t)pf_module_state+0x3efU))) != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if ((*(int * *)(((uintptr_t)pf_module_state+0x3f3U))) != (int *)0x0) {
      return;
    }
  }
  (*(int * *)(((uintptr_t)pf_module_state+0x3f3U))) = piVar1;
  return;
}

#undef DAT_01805038
#undef DAT_0180503c
#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef _DAT_02000000
#undef _DAT_02000004
#undef _DAT_02000008

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000693c
#define DAT_0000693c (*(uint8_t *)(0x693cU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram0000693c
#define Ram0000693c (*(uint32_t *)(0x693cU))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef UINT_000068c0
#define UINT_000068c0 (*(uint *)(0x68c0U))
#undef UINT_00006910
#define UINT_00006910 (*(uint *)(0x6910U))
#define local_406c (*(byte (*)[496])(frame + 20))
#define local_3e7c (*(int (*)[3908])(frame + 516))
#define local_16c (*(uint *)(frame + 16148))
#define local_168 (*(uint *)(frame + 16152))
#define local_127 (*(char (*)[99])(frame + 16217))
#define local_c4 (*(uint *)(frame + 16316))
#define local_c0 (*(char *)(frame + 16320))
#define local_7f (*(char (*)[99])(frame + 16385))
#define local_1c (*(int *)(frame + 16484))
#define local_18 (*(int *)(frame + 16488))
#define local_14 (*(uint *)(frame + 16492))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004240
 */

int recovered_10004240(void)

{
  unsigned char frame[16544] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;

  local_14 = 0;
  iVar1 = Ram00006800;
  iVar8 = -1;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) &&
     ((uVar4 = Ram00006808, 0xbf < uVar4 && (pcVar2 = (code *)UINT_000068bc, pcVar2 != (code *)0x0))
     )) {
    iVar8 = (*pcVar2)();
  }
  recovered_100019a0((byte *)&local_c4,0,0xa8);
  local_c4 = 0x180000;
  recovered_10004090(local_7f,0x20,(char *)((uintptr_t)pf_module_state+0x307U),((uintptr_t)pf_module_state+0x29eU));
  if ((iVar8 < 0) || (uVar3 = recovered_10004740(iVar8,&local_c4), (char)uVar3 == '\0')) {
    recovered_100019a0(local_406c,0,0x3f00);
    iVar1 = Ram00006800;
    if ((iVar1 == 0x50414d57) &&
       ((((iVar1 = Ram00006804, iVar1 != 0 && (uVar4 = Ram00006808, 0xb < uVar4)) &&
         (uVar4 = Ram00006808, 0xc3 < uVar4)) &&
        ((pcVar2 = (code *)UINT_000068c0, pcVar2 != (code *)0x0 &&
         (uVar4 = (*pcVar2)(local_406c,0x20,&local_14), uVar4 != 0)))))) {
      local_1c = iVar8;
      if (local_14 < 0x21) {
        if (local_14 != 0) goto LAB_10004374;
      }
      else {
        local_14 = 0x20;
LAB_10004374:
        uVar4 = 0;
        piVar7 = local_3e7c;
        do {
          recovered_100019a0((byte *)&local_16c,0,0xa8);
          local_16c = 0x180000;
          recovered_10004090(local_127,0x20,(char *)((uintptr_t)pf_module_state+0x307U),((uintptr_t)pf_module_state+0x29eU));
          uVar3 = recovered_10004740(*piVar7,&local_16c);
          if ((char)uVar3 != '\0') {
            recovered_10001710(&local_c4,&local_16c,0xa8);
            iVar8 = *piVar7;
            goto LAB_100043fc;
          }
          uVar4 = uVar4 + 1;
          piVar7 = piVar7 + 0x7e;
        } while (uVar4 < local_14);
      }
      iVar8 = local_1c;
    }
  }
LAB_100043fc:
  if (local_c4 == 0) {
    local_c4 = 0x180000;
  }
  local_14 = 0;
  iVar1 = Ram00006800;
  local_18 = -1;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
     ((uVar4 = Ram00006808, 0xb < uVar4 &&
      ((uVar4 = Ram00006808, 0xbf < uVar4 && (pcVar2 = (code *)UINT_000068bc, pcVar2 != (code *)0x0)
       ))))) {
    local_18 = (*pcVar2)();
  }
  recovered_100019a0(local_406c,0,0x3f00);
  iVar1 = Ram00006800;
  local_1c = iVar8;
  if ((((iVar1 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) &&
     (((uVar4 = Ram00006808, 0xc3 < uVar4 && (pcVar2 = (code *)UINT_000068c0, pcVar2 != (code *)0x0)
       ) && (uVar4 = (*pcVar2)(local_406c,0x20,&local_14), uVar4 != 0)))) {
    if (local_14 < 0x21) {
      if (local_14 == 0) goto LAB_100045aa;
    }
    else {
      local_14 = 0x20;
    }
    uVar4 = 0;
    piVar7 = local_3e7c;
    do {
      recovered_100019a0((byte *)&local_16c,0,0x8c);
      iVar8 = Ram00006800;
      if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
          ((uVar5 = Ram00006808, 0xb < uVar5 &&
           (((uVar5 = Ram00006808, 0x113 < uVar5 &&
             (pcVar2 = (code *)UINT_00006910, pcVar2 != (code *)0x0)) &&
            (uVar5 = (*pcVar2)(*piVar7,&local_16c), uVar5 != 0)))))) && ((local_168 & 10) == 2)) {
        if ((local_168 & 4) == 0) {
          local_18 = *piVar7;
          break;
        }
        if (local_18 < 0) {
          local_18 = *piVar7;
        }
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 0x7e;
    } while (uVar4 < local_14);
  }
LAB_100045aa:
  uVar4 = local_c4;
  pcVar6 = (char *)((uintptr_t)pf_module_state+0x29eU);
  if (local_7f[0] != '\0') {
    pcVar6 = local_7f;
  }
  recovered_10004090((char *)local_406c,0xf1,(char *)((uintptr_t)pf_module_state+0x295U),pcVar6);
  iVar8 = Ram00006800;
  if (((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
     ((uVar5 = Ram00006808, 0xb < uVar5 &&
      ((uVar5 = Ram00006808, 0x13f < uVar5 && (pcVar2 = (code *)Ram0000693c, pcVar2 != (code *)0x0))
      )))) {
    (*pcVar2)(0,local_18,local_1c,local_c4,uVar4 << 10,uVar4 >> 0x16,local_7f,local_406c);
  }
  iVar8 = Ram00006800;
  if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
      (uVar5 = Ram00006808, 0xb < uVar5)) &&
     ((uVar5 = Ram00006808, 0x43 < uVar5 && (pcVar2 = (code *)UINT_00006840, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)((char *)((uintptr_t)pf_module_state+0x2a3U));
  }
  if (local_c0 == '\x01') {
    iVar8 = Ram00006800;
    if ((((iVar8 != 0x50414d57) || (iVar8 = Ram00006804, iVar8 == 0)) ||
        (uVar4 = Ram00006808, uVar4 < 0xc)) || (uVar4 = Ram00006808, uVar4 < 0x44))
    goto LAB_10004700;
    pcVar2 = (code *)UINT_00006840;
    pcVar6 = (char *)((uintptr_t)pf_module_state+0x2bbU);
  }
  else {
    if (((uVar4 == 0) || (iVar8 = Ram00006800, iVar8 != 0x50414d57)) ||
       ((iVar8 = Ram00006804, iVar8 == 0 ||
        ((uVar4 = Ram00006808, uVar4 < 0xc || (uVar4 = Ram00006808, uVar4 < 0x44))))))
    goto LAB_10004700;
    pcVar2 = (code *)UINT_00006840;
    pcVar6 = (char *)((uintptr_t)pf_module_state+0x2deU);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(pcVar6);
  }
LAB_10004700:
  do {
    do {
      iVar8 = Ram00006800;
    } while (iVar8 != 0x50414d57);
    iVar8 = Ram00006804;
    if (((iVar8 != 0) && (uVar4 = Ram00006808, 0xb < uVar4)) &&
       ((uVar4 = Ram00006808, 0x9f < uVar4 &&
        (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)))) {
      (*pcVar2)();
    }
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000693c
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram0000693c
#undef UINT_00006840
#undef UINT_0000689c
#undef UINT_000068bc
#undef UINT_000068c0
#undef UINT_00006910
#undef local_406c
#undef local_3e7c
#undef local_16c
#undef local_168
#undef local_127
#undef local_c4
#undef local_c0
#undef local_7f
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define local_144 (*(byte (*)[128])(frame + 44))
#define local_c4 (*(byte (*)[48])(frame + 172))
#define local_94 (*(byte (*)[96])(frame + 220))
#define local_34 (*(int *)(frame + 316))
#define local_30 (*(uint *)(frame + 320))
#define local_28 (*(char * *)(frame + 328))
#define local_24 (*(char * *)(frame + 332))
#define local_20 (*(char * *)(frame + 336))
#define local_1c (*(int *)(frame + 340))
#define local_18 (*(uint *)(frame + 344))
#define local_14 (*(uint * *)(frame + 348))
#define buffer (*(char * *)(frame + 20))
#define capacity (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004740
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_10004740(int in_ECX,uint *in_EDX)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;

  if (in_EDX != (uint *)0x0) {
    local_14 = in_EDX;
    recovered_100019a0((byte *)&local_34,0,0xc);
    iVar6 = Ram00006800;
    if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
        (uVar5 = Ram00006808, 0xb < uVar5)) && (uVar5 = Ram00006808, 0xcb < uVar5)) {
      pcVar3 = (code *)UINT_000068c8;
      if (pcVar3 == (code *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*pcVar3)(in_ECX,(char *)((uintptr_t)pf_module_state+0x30aU),&local_34);
      }
    }
    else {
      iVar6 = Ram00006800;
      uVar5 = 0;
      if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
         ((uVar2 = Ram00006808, 0xb < uVar2 &&
          ((uVar2 = Ram00006808, 0x37 < uVar2 &&
           (pcVar3 = (code *)UINT_00006834, pcVar3 != (code *)0x0)))))) {
        uVar5 = (*pcVar3)((char *)((uintptr_t)pf_module_state+0x30aU),&local_34);
      }
    }
    if (local_34 != 0 && (local_30 != 0 && uVar5 != 0)) {
      local_20 = (char *)((int)local_14 + 0x65);
      local_24 = (char *)((int)local_14 + 0x45);
      local_28 = (char *)((int)local_14 + 5);
      local_18 = 0;
      local_1c = local_34;
LAB_10004851:
      iVar6 = 0;
      do {
        bVar4 = *(byte *)(local_1c + local_18 + iVar6);
        iVar1 = iVar6;
        if (bVar4 == 10) break;
        if (iVar6 == 0x7f) {
          iVar1 = 0x7f;
          break;
        }
        iVar1 = iVar6 + 1;
        local_144[iVar6] = bVar4;
        uVar5 = local_18 + 1 + iVar6;
        iVar6 = iVar1;
      } while (uVar5 < local_30);
      local_18 = local_18 + iVar6;
      if (local_18 < local_30) {
        do {
          local_18 = local_18 + 1;
          if (*(char *)(local_1c + -1 + local_18) == '\n') goto LAB_100048e0;
        } while ((1 - local_30) + local_18 != 1);
        local_18 = local_30;
      }
      else {
LAB_100048e0:
      }
      local_144[iVar1] = 0;
      pbVar8 = local_144;
      pbVar9 = pbVar8;
      while ((*pbVar8 - 9 < 0x18 && ((0x800013U >> (*pbVar8 - 9 & 0x1f) & 1) != 0))) {
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
      iVar6 = recovered_10001e10((int)pbVar8);
      pbVar7 = pbVar8 + iVar6;
      if (0 < iVar6) {
        do {
          if ((0x17 < pbVar7[-1] - 9) || ((0x800013U >> (pbVar7[-1] - 9 & 0x1f) & 1) == 0)) break;
          pbVar7 = pbVar7 + -1;
        } while (pbVar8 < pbVar7);
      }
      *pbVar7 = 0;
      pbVar7 = (byte *)recovered_10002020((char *)pbVar8,'=');
      if (pbVar7 != (byte *)0x0) {
        uVar5 = (int)pbVar7 - (int)pbVar9;
        if (uVar5 != 0) {
          pbVar9 = pbVar7;
          do {
            if ((0x17 < pbVar9[-1] - 9) || ((0x800013U >> (pbVar9[-1] - 9 & 0x1f) & 1) == 0))
            goto LAB_100049f0;
            pbVar9 = pbVar9 + -1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        goto LAB_10004995;
      }
      goto LAB_10004840;
    }
  }
  return 0;
  while( true ) {
    pbVar8 = pbVar8 + 1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_100049f0:
    if ((0x17 < *pbVar8 - 9) || ((0x800013U >> (*pbVar8 - 9 & 0x1f) & 1) == 0)) goto LAB_10004997;
  }
  pbVar8 = pbVar9;
LAB_10004995:
  uVar5 = 0;
LAB_10004997:
  if (0x2e < uVar5) {
    uVar5 = 0x2f;
  }
  recovered_10001710((undefined4 *)local_c4,(undefined4 *)pbVar8,uVar5);
  local_c4[uVar5] = 0;
  pbVar8 = pbVar7;
  while( true ) {
    pbVar8 = pbVar8 + 1;
    if ((0x17 < *pbVar8 - 9) || ((0x800013U >> (*pbVar8 - 9 & 0x1f) & 1) == 0)) break;
    pbVar7 = pbVar7 + 1;
  }
  uVar5 = recovered_10001e10((int)pbVar8);
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    pbVar7 = pbVar7 + uVar5;
    do {
      if ((0x17 < *pbVar7 - 9) || ((0x800013U >> (*pbVar7 - 9 & 0x1f) & 1) == 0)) goto LAB_10004a58;
      pbVar7 = pbVar7 + -1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = 0;
  }
LAB_10004a58:
  pbVar9 = local_94;
  if (0x5e < uVar5) {
    uVar5 = 0x5f;
  }
  recovered_10001710((undefined4 *)pbVar9,(undefined4 *)pbVar8,uVar5);
  local_94[uVar5] = 0;
  iVar6 = recovered_10001e40(local_c4,(byte *)((uintptr_t)pf_module_state+0x31bU));
  if (iVar6 == 0) {
    pbVar8 = local_94;
    while( true ) {
      pbVar8 = pbVar8 + 1;
      uVar5 = *pbVar9 - 9;
      if ((0x17 < uVar5) || ((0x800013U >> (uVar5 & 0x1f) & 1) == 0)) break;
      pbVar9 = pbVar9 + 1;
    }
    bVar4 = *pbVar9 - 0x30U;
    if (bVar4 < 10) {
      uVar5 = 0;
      do {
        if (~(uint)bVar4 / 10 < uVar5) goto LAB_10004b72;
        uVar5 = (uint)bVar4 + uVar5 * 10;
        bVar4 = *pbVar8 - 0x30U;
        pbVar8 = pbVar8 + 1;
      } while (bVar4 < 10);
    }
    else {
LAB_10004b72:
      uVar5 = 0x180000;
    }
    *local_14 = uVar5;
  }
  else {
    iVar6 = recovered_10001e40(local_c4,(byte *)((uintptr_t)pf_module_state+0x323U));
    if (iVar6 == 0) {
      pbVar8 = local_94;
      while ((*pbVar8 - 9 < 0x18 && ((0x800013U >> (*pbVar8 - 9 & 0x1f) & 1) != 0))) {
        pbVar8 = pbVar8 + 1;
      }
      iVar6 = recovered_10001e40(pbVar8,(byte *)((uintptr_t)pf_module_state+0x352U));
      bVar10 = true;
      if (((iVar6 != 0) && (iVar6 = recovered_10001e40(pbVar8,(byte *)((uintptr_t)pf_module_state+0x354U)), iVar6 != 0)) &&
         (iVar6 = recovered_10001e40(pbVar8,(byte *)((uintptr_t)pf_module_state+0x359U)), iVar6 != 0)) {
        iVar6 = recovered_10001e40(pbVar8,(byte *)((uintptr_t)pf_module_state+0x35dU));
        bVar10 = iVar6 == 0;
      }
      *(bool *)(local_14 + 1) = bVar10;
    }
    else {
      iVar6 = recovered_10001e40(local_c4,(byte *)((uintptr_t)pf_module_state+0x32dU));
      if (iVar6 == 0) {
        capacity = 0x40;
        buffer = local_28;
      }
      else {
        iVar6 = recovered_10001e40(local_c4,(byte *)((uintptr_t)pf_module_state+0x33bU));
        if (iVar6 == 0) {
          capacity = 0x20;
          buffer = local_24;
        }
        else {
          iVar6 = recovered_10001e40(local_c4,(byte *)((uintptr_t)pf_module_state+0x344U));
          if (iVar6 != 0) goto LAB_10004840;
          capacity = 0x40;
          buffer = local_20;
        }
      }
      recovered_10004090(buffer,capacity,(char *)((uintptr_t)pf_module_state+0x307U),local_94);
    }
  }
LAB_10004840:
  if (local_30 <= local_18) {
    return CONCAT31((int3)(local_30 >> 8),1);
  }
  goto LAB_10004851;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8
#undef local_144
#undef local_c4
#undef local_94
#undef local_34
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef buffer
#undef capacity
