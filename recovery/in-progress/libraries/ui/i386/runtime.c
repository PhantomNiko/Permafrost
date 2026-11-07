/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000a074
#define DAT_1000a074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000550
 */

void recovered_10000550(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000a074 = 0;
  recovered_10000560();
  return;
}

#undef DAT_1000a074

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
#undef DAT_1000a074
#define DAT_1000a074 (*(char *)(((uintptr_t)pf_module_state + 0x7b8U)))
#undef DAT_1000a078
#define DAT_1000a078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7bcU)))
#undef DAT_1000a07c
#define DAT_1000a07c (*(int *)(((uintptr_t)pf_module_state + 0x7c0U)))
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
 * Address: 0x10000560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000560(void)

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
  if (DAT_1000a074 != '\0') {
    return;
  }
  DAT_1000a078 = 0;
  DAT_1000a07c = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_100005bb;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_100005bb:
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
        if (iVar9 == 0) goto LAB_10000700;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10003900(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000a078 != 0) goto LAB_10000806;
    }
  }
LAB_10000700:
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
      puVar6 = &DAT_1000a078;
      if (DAT_1000a078 != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_1000a07c == 0) {
        DAT_1000a074 = 1;
        DAT_1000a07c = 0x300000;
        return;
      }
      DAT_1000a074 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1000a078;
    if (DAT_1000a078 != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_1000a07c == 0) {
      DAT_1000a07c = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1000a078;
      if (DAT_1000a078 != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_1000a07c == 0) {
        DAT_1000a074 = 1;
        DAT_1000a07c = 0x2000000;
        return;
      }
      DAT_1000a074 = 1;
      return;
    }
  }
LAB_10000806:
  if (DAT_1000a07c == 0) {
    DAT_1000a07c = DAT_1000a078;
    DAT_1000a074 = 1;
    return;
  }
  DAT_1000a074 = 1;
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
#undef DAT_1000a074
#undef DAT_1000a078
#undef DAT_1000a07c
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

#undef DAT_1000a078
#define DAT_1000a078 (*(int * *)(((uintptr_t)pf_module_state + 0x7bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000880
 */

int recovered_10000880(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000560();
  iVar1 = 0;
  for (piVar2 = DAT_1000a078; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000a078

#undef DAT_1000a078
#define DAT_1000a078 (*(int *)(((uintptr_t)pf_module_state + 0x7bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008c0
 */

void recovered_100008c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000560();
  for (iVar1 = DAT_1000a078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a078

#undef DAT_1000a078
#define DAT_1000a078 (*(int * *)(((uintptr_t)pf_module_state + 0x7bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000900
 */

int recovered_10000900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000560();
  iVar2 = 0;
  for (piVar1 = DAT_1000a078; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000a078

#undef DAT_1000a078
#define DAT_1000a078 (*(int *)(((uintptr_t)pf_module_state + 0x7bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000930
 */

void recovered_10000930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000560();
  for (iVar1 = DAT_1000a078; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000a078

#undef DAT_1000a078
#define DAT_1000a078 (*(uint * *)(((uintptr_t)pf_module_state + 0x7bcU)))
#undef DAT_1000a07c
#define DAT_1000a07c (*(uint * *)(((uintptr_t)pf_module_state + 0x7c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000970
 */

uint * recovered_10000970(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000560();
    puVar4 = DAT_1000a078;
    if (DAT_1000a07c != (uint *)0x0) {
      puVar4 = DAT_1000a07c;
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
            DAT_1000a07c = DAT_1000a078;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_1000a07c = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1000a078;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000a078
#undef DAT_1000a07c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a30
 */

longlong recovered_10000a30(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10000a70
 */

ulonglong recovered_10000a70(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10000ab0
 */

undefined8 recovered_10000ab0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10000b00
 */

undefined8 recovered_10000b00(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10000be0
 */

undefined8 recovered_10000be0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10000c50
 */

undefined8 recovered_10000c50(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10000d90
 */

undefined8 recovered_10000d90(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10000e50
 */

void recovered_10000e50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e70
 */

int recovered_10000e70(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000e90(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10000ed0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10000f10(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f50
 */

void * recovered_10000f50(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10000f77;
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
LAB_10000f77:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001010
 */

void * recovered_10001010(void *destination,void *source,ulong count)

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
 * Address: 0x100011e0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100011e0(void *destination,int value,ulong count)

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
 * Address: 0x10001290
 */

void recovered_10001290(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001330
 */

void recovered_10001330(undefined4 *param_1,uint param_2)

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
 * Address: 0x100013d0
 */

int recovered_100013d0(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_1000146e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10001485;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_100014b6:
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
      if (uVar8 != uVar9) goto LAB_100014b6;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_100014b6;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_100014b6;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10001500(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_1000146e:
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
LAB_10001485:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001500
 */

int recovered_10001500(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001540
 */

bool recovered_10001540(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001560
 */

bool recovered_10001560(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001580
 */

bool recovered_10001580(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015a0
 */

bool recovered_100015a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015d0
 */

bool recovered_100015d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015f0
 */

bool recovered_100015f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001610
 */

int recovered_10001610(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

int recovered_10001630(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001650
 */

ulong recovered_10001650(char *text)

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
 * Address: 0x10001680
 */

int recovered_10001680(char *left,char *right)

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
      if (bVar1 != *right) goto LAB_100016b6;
      right = right + 1;
      bVar1 = *left;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100016b6:
  return uVar2 - (byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016c0
 */

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
      if (bVar1 != *param_2) goto LAB_100016f6;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_100016f6:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001700
 */

void recovered_10001700(int param_1,int param_2)

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
 * Address: 0x10001720
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10001720(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10001831;
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
LAB_10001831:
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
 * Address: 0x10001860
 */

char * recovered_10001860(char *param_1,char param_2)

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
 * Address: 0x100018a0
 */

int recovered_100018a0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_100018db:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_100018db;
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
 * Address: 0x100018f0
 */

char * recovered_100018f0(char *param_1,char *param_2)

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
 * Address: 0x10001940
 */

char * recovered_10001940(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10001983;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001983:
  return pcVar3;
}


#undef DAT_10009e50
#define DAT_10009e50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x594U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001990
 */

undefined * recovered_10001990(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10009e50;
}

#undef DAT_10009e50

#undef PTR_DAT_1000a004
#define PTR_DAT_1000a004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x748U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a0
 */

undefined ** recovered_100019a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000a004;
}

#undef PTR_DAT_1000a004

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
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
#define local_c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100019b0(undefined4 *param_1)

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
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_20

#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001a40(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_100098c0;
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

#undef DAT_100098c0
#undef _DAT_100098c0

#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a70(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)_DAT_100098c0;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_100098c0 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_100098c0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_100098c0
#undef _DAT_100098c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b50
 */

longdouble recovered_10001b50(double param_1,double param_2)

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
 * Address: 0x10001bb0
 */

longdouble recovered_10001bb0(double param_1,double param_2)

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
 * Address: 0x10001c50
 */

longdouble recovered_10001c50(double param_1)

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
 * Address: 0x10001ca0
 */

longdouble recovered_10001ca0(double param_1)

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
 * Address: 0x10001d00
 */

void recovered_10001d00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100098c4
#define DAT_100098c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_100098c8
#define DAT_100098c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100098cc
#define DAT_100098cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100098d0
#define DAT_100098d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100098d4
#define DAT_100098d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100098d8
#define DAT_100098d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100098dc
#define DAT_100098dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100098e0
#define DAT_100098e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100098e4
#define DAT_100098e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_100098e8
#define DAT_100098e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_100098ec
#define DAT_100098ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_100098f0
#define DAT_100098f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10009918
#define DAT_10009918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c4
#define _DAT_100098c4 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_100098c8
#define _DAT_100098c8 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_100098cc
#define _DAT_100098cc (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_100098d0
#define _DAT_100098d0 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_100098d4
#define _DAT_100098d4 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_100098d8
#define _DAT_100098d8 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_100098dc
#define _DAT_100098dc (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_100098e0
#define _DAT_100098e0 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_100098e4
#define _DAT_100098e4 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_100098e8
#define _DAT_100098e8 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_100098ec
#define _DAT_100098ec (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_100098f0
#define _DAT_100098f0 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10009918
#define _DAT_10009918 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001e00(double param_1)

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
    lVar2 = (longdouble)_DAT_100098c4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_100098c8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_100098c0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_100098c8 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_100098cc) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_100098cc);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_100098f0 +
            lVar9 / (longdouble)_DAT_100098ec +
            lVar8 / (longdouble)_DAT_100098e8 +
            lVar7 / (longdouble)_DAT_100098e4 +
            lVar6 / (longdouble)_DAT_100098e0 +
            lVar5 / (longdouble)_DAT_100098dc +
            lVar4 / (longdouble)_DAT_100098d8 +
            lVar3 / (longdouble)_DAT_100098d4 +
            (lVar10 * lVar2) / (longdouble)_DAT_100098d0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_10009918;
  }
  return lVar2;
}

#undef DAT_100098c0
#undef DAT_100098c4
#undef DAT_100098c8
#undef DAT_100098cc
#undef DAT_100098d0
#undef DAT_100098d4
#undef DAT_100098d8
#undef DAT_100098dc
#undef DAT_100098e0
#undef DAT_100098e4
#undef DAT_100098e8
#undef DAT_100098ec
#undef DAT_100098f0
#undef DAT_10009918
#undef _DAT_100098c0
#undef _DAT_100098c4
#undef _DAT_100098c8
#undef _DAT_100098cc
#undef _DAT_100098d0
#undef _DAT_100098d4
#undef _DAT_100098d8
#undef _DAT_100098dc
#undef _DAT_100098e0
#undef _DAT_100098e4
#undef _DAT_100098e8
#undef _DAT_100098ec
#undef _DAT_100098f0
#undef _DAT_10009918

#undef DAT_10009940
#define DAT_10009940 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

longlong recovered_10001f20(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10009940 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10009940

#undef DAT_100098f4
#define DAT_100098f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_100098f8
#define DAT_100098f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_100098fc
#define DAT_100098fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10009920
#define DAT_10009920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10009928
#define DAT_10009928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10009930
#define DAT_10009930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10009938
#define DAT_10009938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_100098f4
#define _DAT_100098f4 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_100098f8
#define _DAT_100098f8 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_100098fc
#define _DAT_100098fc (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10009920
#define _DAT_10009920 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_10009928
#define _DAT_10009928 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_10009930
#define _DAT_10009930 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_10009938
#define _DAT_10009938 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001f70(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_10009920 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009928;
    } while ((longdouble)_DAT_10009920 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10009930) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009938;
    } while (lVar1 < (longdouble)_DAT_10009930);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_100098fc +
         (lVar2 * lVar2) / (longdouble)_DAT_100098f8 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_100098f4) * lVar1;
}

#undef DAT_100098f4
#undef DAT_100098f8
#undef DAT_100098fc
#undef DAT_10009920
#undef DAT_10009928
#undef DAT_10009930
#undef DAT_10009938
#undef _DAT_100098f4
#undef _DAT_100098f8
#undef _DAT_100098fc
#undef _DAT_10009920
#undef _DAT_10009928
#undef _DAT_10009930
#undef _DAT_10009938

#undef DAT_10009900
#define DAT_10009900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10009904
#define DAT_10009904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009908
#define DAT_10009908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10009920
#define DAT_10009920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10009928
#define DAT_10009928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10009930
#define DAT_10009930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10009938
#define DAT_10009938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_10009900
#define _DAT_10009900 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_10009904
#define _DAT_10009904 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef _DAT_10009908
#define _DAT_10009908 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_10009920
#define _DAT_10009920 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_10009928
#define _DAT_10009928 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_10009930
#define _DAT_10009930 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_10009938
#define _DAT_10009938 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002010
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002010(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_10009920 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009928;
    } while ((longdouble)_DAT_10009920 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10009930) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009938;
    } while (lVar1 < (longdouble)_DAT_10009930);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_10009908 +
         (lVar1 * lVar1) / (longdouble)_DAT_10009904 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_10009900;
}

#undef DAT_10009900
#undef DAT_10009904
#undef DAT_10009908
#undef DAT_10009920
#undef DAT_10009928
#undef DAT_10009930
#undef DAT_10009938
#undef _DAT_10009900
#undef _DAT_10009904
#undef _DAT_10009908
#undef _DAT_10009920
#undef _DAT_10009928
#undef _DAT_10009930
#undef _DAT_10009938

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

void recovered_100020b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_100020d0(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_100021b0(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10002260(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_100022d0(long long value){return pf_numeric_fallback___floatdidf(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002380
 */

void recovered_10002380(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100023e0(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_100098c0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_100098c0 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_100098c0);
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

#undef DAT_100098c0
#undef _DAT_100098c0

#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100024d0(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_100098c0;
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

#undef DAT_100098c0
#undef _DAT_100098c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002510
 */

longdouble recovered_10002510(float param_1,float param_2)

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
 * Address: 0x100025b0
 */

longdouble recovered_100025b0(float param_1)

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
 * Address: 0x10002600
 */

longdouble recovered_10002600(float param_1)

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
 * Address: 0x10002670
 */

longdouble recovered_10002670(double param_1)

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
 * Address: 0x100026e0
 */

longdouble recovered_100026e0(float param_1)

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
 * Address: 0x10002760
 */

longdouble recovered_10002760(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10001d00();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_100098c4
#define DAT_100098c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_100098c8
#define DAT_100098c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_100098cc
#define DAT_100098cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100098d0
#define DAT_100098d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_100098d4
#define DAT_100098d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100098d8
#define DAT_100098d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_100098dc
#define DAT_100098dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100098e0
#define DAT_100098e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100098e4
#define DAT_100098e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_100098e8
#define DAT_100098e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_100098ec
#define DAT_100098ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_100098f0
#define DAT_100098f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10009918
#define DAT_10009918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_100098c4
#define _DAT_100098c4 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_100098c8
#define _DAT_100098c8 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_100098cc
#define _DAT_100098cc (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_100098d0
#define _DAT_100098d0 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_100098d4
#define _DAT_100098d4 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_100098d8
#define _DAT_100098d8 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_100098dc
#define _DAT_100098dc (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_100098e0
#define _DAT_100098e0 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_100098e4
#define _DAT_100098e4 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_100098e8
#define _DAT_100098e8 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_100098ec
#define _DAT_100098ec (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_100098f0
#define _DAT_100098f0 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10009918
#define _DAT_10009918 (*(double *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002780(float param_1)

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

  fVar1 = _DAT_100098c4;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_100098c8 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_100098c0;
        iVar10 = iVar10 + 1;
      } while (_DAT_100098c8 < param_1);
    }
    for (; param_1 < _DAT_100098cc; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_100098f0 +
            fVar9 / _DAT_100098ec +
            fVar8 / _DAT_100098e8 +
            fVar7 / _DAT_100098e4 +
            fVar6 / _DAT_100098e0 +
            fVar5 / _DAT_100098dc +
            fVar4 / _DAT_100098d8 +
            fVar3 / _DAT_100098d4 + (fVar1 * fVar2) / _DAT_100098d0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_10009918;
  }
  return (longdouble)fVar1;
}

#undef DAT_100098c0
#undef DAT_100098c4
#undef DAT_100098c8
#undef DAT_100098cc
#undef DAT_100098d0
#undef DAT_100098d4
#undef DAT_100098d8
#undef DAT_100098dc
#undef DAT_100098e0
#undef DAT_100098e4
#undef DAT_100098e8
#undef DAT_100098ec
#undef DAT_100098f0
#undef DAT_10009918
#undef _DAT_100098c0
#undef _DAT_100098c4
#undef _DAT_100098c8
#undef _DAT_100098cc
#undef _DAT_100098d0
#undef _DAT_100098d4
#undef _DAT_100098d8
#undef _DAT_100098dc
#undef _DAT_100098e0
#undef _DAT_100098e4
#undef _DAT_100098e8
#undef _DAT_100098ec
#undef _DAT_100098f0
#undef _DAT_10009918

#undef DAT_10009940
#define DAT_10009940 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x84U)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

undefined4 recovered_100028b0(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10009940 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_10009940
#undef local_14

#undef DAT_100098f4
#define DAT_100098f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_100098f8
#define DAT_100098f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_100098fc
#define DAT_100098fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10009920
#define DAT_10009920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10009928
#define DAT_10009928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10009930
#define DAT_10009930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10009938
#define DAT_10009938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_100098f4
#define _DAT_100098f4 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_100098f8
#define _DAT_100098f8 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_100098fc
#define _DAT_100098fc (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10009920
#define _DAT_10009920 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_10009928
#define _DAT_10009928 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_10009930
#define _DAT_10009930 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_10009938
#define _DAT_10009938 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002900(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_10009920 < param_1; param_1 = param_1 + (float)_DAT_10009928) {
  }
  for (; param_1 < (float)_DAT_10009930; param_1 = param_1 + (float)_DAT_10009938) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_100098fc +
          (fVar1 * fVar1) / _DAT_100098f8 + fVar1 / _DAT_100098f4 + 1.0) * param_1);
}

#undef DAT_100098f4
#undef DAT_100098f8
#undef DAT_100098fc
#undef DAT_10009920
#undef DAT_10009928
#undef DAT_10009930
#undef DAT_10009938
#undef _DAT_100098f4
#undef _DAT_100098f8
#undef _DAT_100098fc
#undef _DAT_10009920
#undef _DAT_10009928
#undef _DAT_10009930
#undef _DAT_10009938

#undef DAT_10009900
#define DAT_10009900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10009904
#define DAT_10009904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10009908
#define DAT_10009908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_10009920
#define DAT_10009920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64U)))
#undef DAT_10009928
#define DAT_10009928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_10009930
#define DAT_10009930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_10009938
#define DAT_10009938 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef _DAT_10009900
#define _DAT_10009900 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_10009904
#define _DAT_10009904 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef _DAT_10009908
#define _DAT_10009908 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_10009920
#define _DAT_10009920 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
#undef _DAT_10009928
#define _DAT_10009928 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef _DAT_10009930
#define _DAT_10009930 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef _DAT_10009938
#define _DAT_10009938 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100029a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_10009920 < param_1; param_1 = param_1 + (float)_DAT_10009928) {
  }
  for (; param_1 < (float)_DAT_10009930; param_1 = param_1 + (float)_DAT_10009938) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_10009908 +
         (fVar1 * fVar1) / _DAT_10009904 + fVar1 * _DAT_10009900 + 1.0);
}

#undef DAT_10009900
#undef DAT_10009904
#undef DAT_10009908
#undef DAT_10009920
#undef DAT_10009928
#undef DAT_10009930
#undef DAT_10009938
#undef _DAT_10009900
#undef _DAT_10009904
#undef _DAT_10009908
#undef _DAT_10009920
#undef _DAT_10009928
#undef _DAT_10009930
#undef _DAT_10009938

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a40
 */

void recovered_10002a40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

int recovered_10002a60(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_10002b8c:
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
    if (param_3 <= uVar7) goto LAB_10002b8c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb0
 */

int recovered_10002bb0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_10002cdc:
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
    if (param_3 <= uVar7) goto LAB_10002cdc;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10009910
#define DAT_10009910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_10009910
#define _DAT_10009910 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002d00(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)_DAT_10009910 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_10009910 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_10009910;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10002dc1;
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
LAB_10002dc1:
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
              lVar10 = lVar10 * (longdouble)_DAT_100098c0;
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

#undef DAT_100098c0
#undef DAT_10009910
#undef _DAT_100098c0
#undef _DAT_10009910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ea0
 */

longdouble recovered_10002ea0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10002d00(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_10009910
#define DAT_10009910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54U)))
#undef _DAT_10009910
#define _DAT_10009910 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef str_10009e55
#define str_10009e55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x599U)))
#undef str_10009e5c
#define str_10009e5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a0U)))
#undef str_10009e6d
#define str_10009e6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b1U)))
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
 * Address: 0x10002ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10002ed0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10002f03;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *local_20 = 0x25;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10002f03;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_10002fe2;
          goto LAB_10002fb7;
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
LAB_10002fb7:
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
LAB_10002fe2:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_10003051;
    default:
      cVar8 = '\0';
      goto LAB_10003051;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_10003051;
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
LAB_10003051:
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
        goto LAB_10003258;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10003258:
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
        abStack_c5[iVar11 + 1] = str_10009e6d[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) goto LAB_10003640;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *local_20 = abStack_c5[iVar11];
          local_20 = local_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto LAB_10003636;
    default:
      if (1 < local_1c) {
        *local_20 = 0x3f;
        local_20 = local_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10002f03;
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
        goto LAB_10003477;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003477;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003477:
      pcVar12 = str_10009e5c;
      if (*local_3c != 0x58) {
        pcVar12 = str_10009e6d;
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
LAB_10002f03:
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
          abStack_c5[iVar11 + 1] = str_10009e6d[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (local_24 != 0 || -local_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto LAB_10003451;
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
LAB_10003451:
            *local_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              local_20 = local_20 + 1;
            }
            else {
              local_7c = local_50;
              dVar2 = (dVar2 - (double)(int)local_50) * (double)_DAT_10009910;
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
                dVar2 = (dVar2 - (double)local_80) * (double)_DAT_10009910;
                local_46 = in_FPUControlWord | 0xc00;
                local_78 = (int)ROUND(dVar2);
                local_20[2] = (char)local_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  local_6c = local_78;
                  dVar2 = (dVar2 - (double)local_78) * (double)_DAT_10009910;
                  local_44 = in_FPUControlWord | 0xc00;
                  local_70 = (int)ROUND(dVar2);
                  local_20[3] = (char)local_70 + 0x30;
                  if (uVar10 == 4) {
                    local_20 = local_20 + 4;
                  }
                  else {
                    local_5c = local_70;
                    dVar4 = (double)_DAT_10009910;
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
                        local_58 = (int)ROUND((dVar4 - (double)local_68) * (double)_DAT_10009910);
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
        abStack_c5[iVar11 + 1] = str_10009e6d[uVar9 & 0xf];
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
LAB_100031e4:
      break;
    case 0x73:
      pbVar5 = (byte *)str_10009e55;
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
        goto LAB_100031e4;
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
        goto LAB_10003583;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto LAB_10003583;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
LAB_10003583:
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
        abStack_c5[iVar11 + 1] = str_10009e6d[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (local_24 != 0 || -local_24 < (uint)bVar16);
      if (iVar11 == 0) {
LAB_10003640:
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
LAB_10003636:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_10009910
#undef _DAT_10009910
#undef str_10009e55
#undef str_10009e5c
#undef str_10009e6d
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
int recovered_100038d0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002ed0(buffer,capacity,format,(void *)args);
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
#undef DAT_1000a078
#define DAT_1000a078 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7bcU)))
#undef DAT_1000a07c
#define DAT_1000a07c (*(int * *)(((uintptr_t)pf_module_state + 0x7c0U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003900(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&DAT_1000a078;
        if (DAT_1000a078 != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_1000a07c == (int *)0x0) {
          DAT_1000a07c = piVar1;
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
    puVar2 = &DAT_1000a078;
    if (DAT_1000a078 != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_1000a07c != (int *)0x0) {
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
    puVar2 = &DAT_1000a078;
    if (DAT_1000a078 != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_1000a07c != (int *)0x0) {
      return;
    }
  }
  DAT_1000a07c = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000a078
#undef DAT_1000a07c
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
#undef DAT_1000a080
#define DAT_1000a080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c4U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
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
 * Address: 0x10003a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003a80(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000a080 != 0) {
          DAT_1000a080 = DAT_1000a080 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000a080 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10000f50(local_210,&DAT_1000a084,DAT_1000a080);
            uVar3 = DAT_1000a080;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000a080 = 0;
        }
        else {
          if (DAT_1000a080 - 0x1ff < 0xfffffe00) {
            recovered_10000f50(local_210,&DAT_1000a084,DAT_1000a080);
            local_210[DAT_1000a080] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_1000a080 = 0;
          }
          pcVar1 = &DAT_1000a084 + DAT_1000a080;
          DAT_1000a080 = DAT_1000a080 + 1;
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
#undef DAT_1000a080
#undef DAT_1000a084
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
#undef DAT_1000a080
#define DAT_1000a080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c4U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
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
 * Address: 0x10003c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003c20(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000a080 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10000f50(local_204,&DAT_1000a084,DAT_1000a080);
    uVar1 = DAT_1000a080;
  }
  local_204[uVar1] = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_1000a080 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000a080
#undef DAT_1000a084
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
#undef DAT_1000a080
#define DAT_1000a080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c4U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
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
 * Address: 0x10003cb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003cb0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000a080 != 0) {
    recovered_10000f50(local_208,&DAT_1000a084,DAT_1000a080);
    local_208[DAT_1000a080] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000a080 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000a080
#undef DAT_1000a084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef DAT_10009e7e
#define DAT_10009e7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c2U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d40
 */

void recovered_10003d40(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  char *format;
  int iVar1;
  undefined *puVar2;

  format = &DAT_10009e7e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_10009e54;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_100038d0(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10003a80(local_148,iVar1);
  }
  return;
}

#undef DAT_10009e54
#undef DAT_10009e7e
#undef local_148

#undef DAT_10009e9c
#define DAT_10009e9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_10009e81
#define str_10009e81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003da0
 */

void recovered_10003da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001650(str_10009e81);
  recovered_10003a80(str_10009e81,uVar1);
  uVar1 = recovered_10001650(&DAT_10009e9c);
  recovered_10003a80(&DAT_10009e9c,uVar1);
  return;
}

#undef DAT_10009e9c
#undef str_10009e81

#undef DAT_10009e9c
#define DAT_10009e9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_10009e9f
#define str_10009e9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003df0
 */

void recovered_10003df0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001650(str_10009e9f);
  recovered_10003a80(str_10009e9f,uVar1);
  uVar1 = recovered_10001650(&DAT_10009e9c);
  recovered_10003a80(&DAT_10009e9c,uVar1);
  return;
}

#undef DAT_10009e9c
#undef str_10009e9f

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
#undef DAT_1000a080
#define DAT_1000a080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c4U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
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
 * Address: 0x10003e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003e40(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000a080 != 0) {
      recovered_10000f50(local_210,&DAT_1000a084,DAT_1000a080);
      local_210[DAT_1000a080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_1000a080 = 0;
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
#undef DAT_1000a080
#undef DAT_1000a084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f30
 */

undefined4 recovered_10003f30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

void recovered_10003f40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f50
 */

undefined1 recovered_10003f50(void)

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
#undef DAT_10009e7e
#define DAT_10009e7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c2U)))
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_10009f33
#define str_10009f33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x677U)))
#undef str_10009f40
#define str_10009f40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x684U)))
#undef str_10009f4e
#define str_10009f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x692U)))
#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10003f60(char *param_1,int param_2)

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
  iVar3 = recovered_10001680(param_1,str_10009f33);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_10001680(param_1,str_10009f40);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_10001680(param_1,str_10009f4e);
      if (iVar4 != 0) {
        puVar5 = recovered_10000e90(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100011e0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10001860((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001860((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001860((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_10001860((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001860((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001860((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_10001860((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_100038d0__4_((char *)(puVar5 + 1),0xf1,&DAT_10009e7e,(uint)param_1);
          recovered_100011e0(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001860((char *)param_2,'w');
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
                  destination = recovered_10000f10((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000a000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_1000427e;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10000f50(destination,local_1c,local_18);
              }
              else {
                puVar5[0x3e] = local_1c;
              }
              puVar5[0x40] = local_18;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x1000425c;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000a000 = 2;
LAB_1000427e:
            recovered_10000ed0(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x1000425c:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_100040e6;
      }
      uVar8 = 3;
    }
  }
  puVar5 = recovered_10000e90(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100011e0(puVar5,0,800);
    *puVar5 = uVar8;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    pf_varargs_100038d0__4_((char *)(puVar5 + 1),0xf1,&DAT_10009e7e,(uint)param_1);
    return puVar5;
  }
LAB_100040e6:
  *(undefined4 *)PTR_DAT_1000a000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_10009e7e
#undef PTR_DAT_1000a000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_10009f33
#undef str_10009f40
#undef str_10009f4e
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
#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100042e0(char *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_1000438d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10004373;
      }
    }
    *(undefined4 *)PTR_DAT_1000a000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10004373:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10000ed0((void *)param_3[0x3f]);
  }
  recovered_10000ed0(param_3);
LAB_1000438d:
  recovered_10003f60(param_1,param_2);
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
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
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

undefined4 recovered_100043a0(int *param_1)

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
    recovered_10000ed0((void *)param_1[0x3f]);
  }
  recovered_10000ed0(param_1);
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
 * Address: 0x10004470
 */

uint recovered_10004470(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10000f50(param_1,(void *)(uVar2 + param_4[0x3e]),uVar1);
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
          uVar3 = recovered_10004570(param_4);
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
#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef DAT_1000a080
#define DAT_1000a080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c4U)))
#undef DAT_1000a084
#define DAT_1000a084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c8U)))
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
 * Address: 0x10004570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004570(int *param_1)

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
LAB_100045c7:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000a080 != 0) {
      recovered_10000f50(local_20c,&DAT_1000a084,DAT_1000a080);
      local_20c[DAT_1000a080] = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000a080 = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10009e54,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10001650((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_100045c7;
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
#undef DAT_10009e54
#undef DAT_1000a080
#undef DAT_1000a084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004720
 */

int recovered_10004720(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000486e:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10003a80(param_1,count);
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
      pvVar3 = recovered_10000f10((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000a000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000486e;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100011e0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10000f50((void *)(uVar4 + param_4[0x3f]),param_1,count);
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
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004880
 */

undefined4 recovered_10004880(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_1000488f;
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
LAB_1000488f:
  *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000a000

#undef PTR_DAT_1000a000
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004900
 */

undefined4 recovered_10004900(int param_1)

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
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004930(int *param_1)

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
 * Address: 0x100049e0
 */

undefined1 recovered_100049e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a00
 */

undefined1 recovered_10004a00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a20
 */

void recovered_10004a20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a40
 */

uint recovered_10004a40(uint param_1,int param_2)

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
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004a70(int param_1)

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
#define PTR_DAT_1000a000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x744U)))
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
 * Address: 0x10004ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004ae0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000a000 = 0x16;
  }
  else {
    recovered_100011e0(&local_1c,0,0xc);
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
 * Address: 0x10004c50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004c50(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_100011e0(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      destination = recovered_10000e90(local_18 + (local_18 == 0));
      if (destination == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_10000f50(destination,local_1c,local_18);
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
 * Address: 0x10004d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004d20(int param_1,int param_2,int param_3)

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
 * Address: 0x10004d90
 */

undefined4 recovered_10004d90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004da0
 */

void recovered_10004da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004db0
 */

undefined4 recovered_10004db0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dc0
 */

undefined4 recovered_10004dc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dd0
 */

undefined4 recovered_10004dd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004de0
 */

char * recovered_10004de0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10004e10
 */

int recovered_10004e10(char *left,char *right,ulong count)

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


#undef DAT_10009ec2
#define DAT_10009ec2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x606U)))
#undef str_10009ec5
#define str_10009ec5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x609U)))
#undef str_10009ed2
#define str_10009ed2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x616U)))
#undef str_10009edc
#define str_10009edc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x620U)))
#undef str_10009ef0
#define str_10009ef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x634U)))
#undef str_10009efe
#define str_10009efe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x642U)))
#undef str_10009f10
#define str_10009f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x654U)))
#undef str_10009f1c
#define str_10009f1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x660U)))
#undef str_10009f2d
#define str_10009f2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x671U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e60
 */

char * recovered_10004e60(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10009ec2;
  default:
    return str_10009f2d;
  case 2:
    return str_10009ec5;
  case 5:
    return str_10009ed2;
  case 9:
    return str_10009edc;
  case 0xc:
    return str_10009ef0;
  case 0xd:
    return str_10009efe;
  case 0x11:
    return str_10009f10;
  case 0x16:
    return str_10009f1c;
  }
}

#undef DAT_10009ec2
#undef str_10009ec5
#undef str_10009ed2
#undef str_10009edc
#undef str_10009ef0
#undef str_10009efe
#undef str_10009f10
#undef str_10009f1c
#undef str_10009f2d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ec0
 */

undefined4 recovered_10004ec0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ed0
 */

undefined4 recovered_10004ed0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000a284
#define DAT_1000a284 (*(int *)(((uintptr_t)pf_module_state + 0x9c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

void recovered_10004ee0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000a284 = DAT_1000a284 + 1;
  return;
}

#undef DAT_1000a284

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10004f00(void *context){__asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\nmovl 36(%eax),%edx\njmpl *%edx");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10004f10(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10004f40(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_10004fad
#define DAT_10004fad (*(uint8_t *)(0x10004fadU))
#undef DAT_10009f5c
#define DAT_10009f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a0U)))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f70
 */

void recovered_10004f70(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fd0;
  local_28 = &DAT_10009f5c;
  local_20 = &DAT_10004fad;
  local_40 = 1;
  recovered_10005490(&local_44);
  recovered_10000e50();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10004fad
#undef DAT_10009f5c
#undef local_44
#undef local_40
#undef auStack_18
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fd0
 */

undefined4 recovered_10004fd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe0
 */

void recovered_10004fe0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005000(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}


#undef DAT_1000a288
#define DAT_1000a288 (*(int *)(((uintptr_t)pf_module_state + 0x9ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005000
 */

int recovered_10005000(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000a288;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000a288 = param_1;
  iVar1 = recovered_10005330(param_1);
  return iVar1;
}

#undef DAT_1000a288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005030
 */

void * recovered_10005030(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000e90(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e50();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005060
 */

void * recovered_10005060(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10000e90(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000e50();
  }
  return pvVar1;
}


#undef DAT_10009f6c
#define DAT_10009f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b0U)))
#undef LAB_100050e4
#define LAB_100050e4 (*(uint8_t *)(0x100050e4U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define local_28 (*(undefined * *)(frame + 184))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005090
 */

void recovered_10005090(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fd0;
  local_28 = &DAT_10009f6c;
  local_20 = &LAB_100050e4;
  local_40 = 1;
  recovered_10005490(&local_44);
  recovered_10000ed0(param_1);
  recovered_100054b0(&local_44);
  return;
}

#undef DAT_10009f6c
#undef LAB_100050e4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef auStackY_cc
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10009f7c
#define DAT_10009f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c0U)))
#undef LAB_10005164
#define LAB_10005164 (*(uint8_t *)(0x10005164U))
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
 * Address: 0x10005110
 */

void recovered_10005110(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fd0;
  local_28 = &DAT_10009f7c;
  local_20 = &LAB_10005164;
  local_40 = 1;
  recovered_10005490(&local_44);
  recovered_10000ed0(param_1);
  recovered_100054b0(&local_44);
  return;
}

#undef DAT_10009f7c
#undef LAB_10005164
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_10009f8c
#define DAT_10009f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d0U)))
#undef LAB_100051e4
#define LAB_100051e4 (*(uint8_t *)(0x100051e4U))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005190
 */

void recovered_10005190(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fd0;
  local_28 = &DAT_10009f8c;
  local_20 = &LAB_100051e4;
  local_40 = 1;
  recovered_10005490(&local_44);
  recovered_10000ed0(param_1);
  recovered_100054b0(&local_44);
  return;
}

#undef DAT_10009f8c
#undef LAB_100051e4
#undef local_28
#undef local_24
#undef auStack_18
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c

#undef DAT_10009f9c
#define DAT_10009f9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e0U)))
#undef LAB_10005264
#define LAB_10005264 (*(uint8_t *)(0x10005264U))
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
 * Address: 0x10005210
 */

void recovered_10005210(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fd0;
  local_28 = &DAT_10009f9c;
  local_20 = &LAB_10005264;
  local_40 = 1;
  recovered_10005490(&local_44);
  recovered_10000ed0(param_1);
  recovered_100054b0(&local_44);
  return;
}

#undef DAT_10009f9c
#undef LAB_10005264
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef auStackY_cc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005290
 */

undefined4 recovered_10005290(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052a0
 */

uint recovered_100052a0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b0
 */

void recovered_100052b0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c0
 */

void recovered_100052c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

undefined1 * recovered_100052d0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10000e90(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f70();
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
 * Address: 0x10005310
 */

void recovered_10005310(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10000ed0((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005330
 */

int recovered_10005330(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000a288
#define DAT_1000a288 (*(void * *)(((uintptr_t)pf_module_state + 0x9ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

void recovered_10005340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_1000a288;
  if (DAT_1000a288 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000a288 + 8);
    DAT_1000a288 = *(void **)((int)DAT_1000a288 + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10000ed0(pointer);
    }
  }
  return;
}

#undef DAT_1000a288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005390
 */

void recovered_10005390(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100053d0(param_1 + -0x1c);
}


#undef DAT_1000a288
#define DAT_1000a288 (*(int *)(((uintptr_t)pf_module_state + 0x9ccU)))
#undef DAT_1000a28c
#define DAT_1000a28c (*(int * *)(((uintptr_t)pf_module_state + 0x9d0U)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

void recovered_100053d0(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1000a28c != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000a28c;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10005d60((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005520(local_14);
        in_ECX_00 = DAT_1000a288;
        if (DAT_1000a288 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10004f70();
        }
        *(undefined1 *)(DAT_1000a288 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100053d0(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}

#undef DAT_1000a288
#undef DAT_1000a28c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000a288
#define DAT_1000a288 (*(int *)(((uintptr_t)pf_module_state + 0x9ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005450
 */

void recovered_10005450(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000a288;
  if (DAT_1000a288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f70();
  }
  *(undefined1 *)(DAT_1000a288 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100053d0(in_ECX);
}

#undef DAT_1000a288

#undef DAT_1000a28c
#define DAT_1000a28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005490
 */

void recovered_10005490(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000a28c;
  DAT_1000a28c = param_1;
  return;
}

#undef DAT_1000a28c

#undef DAT_1000a28c
#define DAT_1000a28c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054b0
 */

void recovered_100054b0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000a28c;
  if (DAT_1000a28c == param_1) {
    puVar2 = &DAT_1000a28c;
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

#undef DAT_1000a28c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e0
 */

void recovered_100054e0(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100053d0(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054f0
 */

void recovered_100054f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}


#undef DAT_1000a28c
#define DAT_1000a28c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x9d0U)))
#define uStack_28 (*(undefined4 *)(frame + 24))
#define uStack_24 (*(undefined4 *)(frame + 28))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define in_stack_00000004 (*(int *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

undefined4 recovered_10005500(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000a28c != (undefined4 *)0x0) {
    DAT_1000a28c = (undefined4 *)*DAT_1000a28c;
  }
  recovered_10005520(in_stack_00000004);
  if (DAT_1000a28c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000a28c;
      if (DAT_1000a28c == puVar1) {
        DAT_1000a28c[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_1000559b:
        puVar2[1] = uVar3;
        recovered_10004f00((int)puVar2);
        recovered_10005500();
        return 0;
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_10005d60((int)DAT_1000a28c,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_1000559b;
      }
      DAT_1000a28c = (undefined4 *)*puVar2;
    } while (DAT_1000a28c != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}

#undef DAT_1000a28c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef in_stack_00000004

#undef DAT_1000a28c
#define DAT_1000a28c (*(int * *)(((uintptr_t)pf_module_state + 0x9d0U)))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005520
 */

undefined4 recovered_10005520(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000a28c != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1000a28c;
      if (DAT_1000a28c == piVar1) {
        DAT_1000a28c[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_1000559b:
        piVar2[1] = iVar3;
        recovered_10004f00((int)piVar2);
        recovered_10005500();
        return 0;
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_10005d60((int)DAT_1000a28c,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_1000559b;
      }
      DAT_1000a28c = (int *)*piVar2;
    } while (DAT_1000a28c != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}

#undef DAT_1000a28c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

undefined4 recovered_100055b0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005500();
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055d0
 */

undefined4 recovered_100055d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void recovered_100055e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f70();
}


#undef DAT_1000a05c
#define DAT_1000a05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a0U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

int recovered_100055f0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100056a0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100056a0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000a05c) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100056a0:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000a05c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056c0
 */

void recovered_100056c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e50();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

undefined4 recovered_100056d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

bool recovered_100056e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005700
 */

bool recovered_10005700(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005730
 */

bool recovered_10005730(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

bool recovered_10005760(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

bool recovered_10005780(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057a0
 */

byte recovered_100057a0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057e0
 */

bool recovered_100057e0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10005800(double value) {
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
float recovered_10005930(float value){return (float)recovered_10005800((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10005a70(long double value){return (long double)recovered_10005800((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10005ba0(long end,long start){return (double)end-(double)start;}


#undef DAT_100098c0
#define DAT_100098c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10009900
#define DAT_10009900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_100098c0
#define _DAT_100098c0 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_10009900
#define _DAT_10009900 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005bc0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10001c50(param_1);
  if ((longdouble)_DAT_100098c0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_10009900 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_100098c0
#undef DAT_10009900
#undef _DAT_100098c0
#undef _DAT_10009900

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c10
 */

ulonglong recovered_10005c10(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_10005cbd;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_10005cbd;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_10005cbd;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_10005cbd;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_10005cbd:
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
 * Address: 0x10005d50
 */

void recovered_10005d50(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005c10(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_10009bc8
#define DAT_10009bc8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30cU)))
#undef DAT_1000a05c
#define DAT_1000a05c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a0U)))
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
 * Address: 0x10005d60
 */

undefined4 recovered_10005d60(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_100060e0((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10005ef0;
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
LAB_10005ef0:
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
    if (0x1f < uVar5) goto LAB_10005f98;
LAB_10006089:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10005fa0;
LAB_10006094:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10006089;
LAB_10005f98:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10006094;
LAB_10005fa0:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_100060bf:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_10009bc8 + local_38 * 4) * local_20;
      pbVar9 = recovered_100060e0(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_100060bf;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_100060bf;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_100060bf;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000a05c) goto LAB_1000609b;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_100060bf;
    }
  }
LAB_1000609b:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10005ef0;
}

#undef DAT_10009bc8
#undef DAT_1000a05c
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
 * Address: 0x100060e0
 */

byte * recovered_100060e0(uint in_ECX,int *in_EDX)

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
    goto LAB_100061b5;
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
    goto LAB_100061b5;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000610d_caseD_5;
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
LAB_100061b5:
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
switchD_1000610d_caseD_5:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f0
 */

undefined4 *
recovered_100061f0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x34);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_3 << 2;
  param_1[4] = 0xf6f6f6;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  return param_1;
}


#define uStack0000001c (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006260
 */

void recovered_10006260(undefined4 *param_1,undefined4 param_2,uint in_stack_0000003c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (99 < in_stack_0000003c) {
    in_stack_0000003c = 100;
  }
  uStack0000001c = in_stack_0000003c;
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack0000001c

#define uStack00000020 (*(uint *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006290
 */

void recovered_10006290(undefined4 *param_1,undefined4 param_2,uint in_stack_0000003c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (99 < in_stack_0000003c) {
    in_stack_0000003c = 100;
  }
  uStack00000020 = in_stack_0000003c;
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack00000020

#define iStack00000024 (*(int *)(frame + 68))
#define uStack00000028 (*(uint *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062c0
 */

void recovered_100062c0(undefined4 *param_1,undefined4 param_2,int in_stack_0000003c,
                       uint in_stack_00000040)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (4 < in_stack_0000003c + 1U) {
    in_stack_0000003c = -1;
  }
  iStack00000024 = in_stack_0000003c;
  if (99 < in_stack_00000040) {
    in_stack_00000040 = 100;
  }
  uStack00000028 = in_stack_00000040;
  puVar2 = &param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack00000024
#undef uStack00000028

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006300
 */

void recovered_10006300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006360
 */

void recovered_10006360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c0
 */

void recovered_100063c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 2;
  param_1[8] = param_15;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006430
 */

void recovered_10006430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 param_12,undefined4 param_13,undefined4 param_14,uint param_15)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (99 < param_15) {
    param_15 = 100;
  }
  param_1[6] = param_8;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[7] = 3;
  param_1[8] = param_15;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xb] = param_13;
  param_1[0xc] = param_14;
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
#undef DAT_000068a0
#define DAT_000068a0 (*(uint8_t *)(0x68a0U))
#undef DAT_000068ec
#define DAT_000068ec (*(uint8_t *)(0x68ecU))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000684c
#define _DAT_0000684c (*(code * *)(0x684cU))
#undef _DAT_000068a0
#define _DAT_000068a0 (*(code * *)(0x68a0U))
#undef _DAT_000068ec
#define _DAT_000068ec (*(code * *)(0x68ecU))
#undef _DAT_00006960
#define _DAT_00006960 (*(code * *)(0x6960U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
#define local_14 (*(undefined * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100064a0(int *param_1,int *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;

  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  iVar7 = param_2[1];
  if (iVar7 == 0) {
    return 0;
  }
  uVar8 = param_2[2];
  if (uVar8 == 0) {
    return 0;
  }
  uVar15 = iVar7 * 4;
  uVar10 = uVar15;
  if (param_2[3] != 0) {
    uVar10 = param_2[3];
  }
  uVar13 = uVar15;
  if (uVar10 != 0) {
    uVar13 = uVar10;
  }
  if (uVar13 < uVar15) {
    return 0;
  }
  iVar5 = (int)((ulonglong)uVar13 * (ulonglong)uVar8);
  if ((int)((ulonglong)uVar13 * (ulonglong)uVar8 >> 0x20) != 0) {
    return 0;
  }
  iVar1 = *param_2;
  iVar2 = param_2[4];
  uVar15 = param_2[5];
  uVar13 = param_2[6];
  iVar11 = param_2[7];
  uVar9 = param_2[8];
  puVar12 = (undefined *)param_2[9];
  puVar14 = (undefined *)param_2[10];
  puVar3 = (undefined *)param_2[0xb];
  uVar4 = param_2[0xc];
  recovered_100011e0(param_1,0,0x340);
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0xa4) {
    return 0;
  }
  if (_DAT_000068a0 == (code *)0x0) {
    return 0;
  }
  iVar6 = (*_DAT_000068a0)(iVar1,iVar7,uVar8);
  if (iVar6 == 0) {
    return 0;
  }
  *param_1 = iVar6;
  param_1[1] = iVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  param_1[4] = iVar2;
  uVar8 = uVar15;
  if (99 < uVar15) {
    uVar8 = 100;
  }
  uVar10 = 0xf;
  if (uVar15 != 0xffffffff) {
    uVar10 = uVar8;
  }
  param_1[5] = uVar10;
  uVar8 = uVar13;
  if (99 < uVar13) {
    uVar8 = 100;
  }
  uVar10 = 0;
  if (uVar13 != 0xffffffff) {
    uVar10 = uVar8;
  }
  param_1[6] = uVar10;
  if (4 < iVar11 + 1U) {
    iVar11 = -1;
  }
  param_1[7] = iVar11;
  if (99 < uVar9) {
    uVar9 = 100;
  }
  param_1[8] = uVar9;
  param_1[0xc] = iVar1;
  if ((uVar4 & 1) == 0) {
LAB_10006647:
    if (((puVar12 != (undefined *)0x0 || puVar14 != (undefined *)0x0) || puVar3 != (undefined *)0x0)
       && (*param_1 != 0)) {
      local_14 = &DAT_10009e54;
      if (puVar12 != (undefined *)0x0) {
        local_14 = puVar12;
      }
      puVar12 = &DAT_10009e54;
      if (puVar14 != (undefined *)0x0) {
        puVar12 = puVar14;
      }
      puVar14 = &DAT_10009e54;
      if (puVar3 != (undefined *)0x0) {
        puVar14 = puVar3;
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0xef < _DAT_00006808 && (_DAT_000068ec != (code *)0x0)))) {
        (*_DAT_000068ec)(*param_1,local_14,puVar12,puVar14);
      }
    }
    if (((uVar15 & uVar13) != 0xffffffff) && (*param_1 != 0)) {
      uVar8 = param_1[5];
      uVar15 = param_1[6];
      if (99 < uVar8) {
        uVar8 = 100;
      }
      if (99 < uVar15) {
        uVar15 = 100;
      }
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         (((0x163 < _DAT_00006808 && (_DAT_00006960 != (code *)0x0)) &&
          (iVar7 = (*_DAT_00006960)(*param_1,(uVar8 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                                    (uVar15 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13), iVar7 != 0)))
         ) {
        param_1[5] = uVar8;
        param_1[6] = uVar15;
      }
    }
    uVar8 = param_1[7];
    if ((uVar8 != 0xffffffff) && (*param_1 != 0)) {
      uVar15 = param_1[8];
      uVar10 = 0xffffffff;
      if (uVar8 < 4) {
        uVar10 = uVar8;
      }
      if (99 < uVar15) {
        uVar15 = 100;
      }
      uVar13 = 0;
      if (uVar8 < 4) {
        uVar8 = param_1[1];
        if ((uint)param_1[2] <= (uint)param_1[1]) {
          uVar8 = param_1[2];
        }
        uVar13 = (uVar8 * uVar15 + 0x32) / 100;
      }
      if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) {
        if (((0x167 < _DAT_00006808) && (_DAT_00006964 != (code *)0x0)) &&
           (iVar7 = (*_DAT_00006964)(*param_1,uVar10,uVar13), iVar7 != 0)) {
          param_1[7] = uVar10;
          param_1[8] = uVar15;
        }
        return iVar6;
      }
    }
  }
  else {
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x4f < _DAT_00006808 && (_DAT_0000684c != (code *)0x0)))) {
      iVar7 = (*_DAT_0000684c)(iVar5);
      param_1[0xb] = iVar7;
      if (iVar7 != 0) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
        param_1[10] = iVar5;
        goto LAB_10006647;
      }
    }
    else {
      param_1[0xb] = 0;
    }
    recovered_100068e0();
    recovered_100011e0(param_1,0,0x340);
    iVar6 = 0;
  }
  return iVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000684c
#undef DAT_000068a0
#undef DAT_000068ec
#undef DAT_00006960
#undef DAT_00006964
#undef DAT_10009e54
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000684c
#undef _DAT_000068a0
#undef _DAT_000068ec
#undef _DAT_00006960
#undef _DAT_00006964
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(code * *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100068e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xab < _DAT_00006808 && (_DAT_000068a8 != (code *)0x0)))) {
    (*_DAT_000068a8)();
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068ec
#define DAT_000068ec (*(uint8_t *)(0x68ecU))
#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068ec
#define _DAT_000068ec (*(code * *)(0x68ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006930
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006930(int *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;

  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    puVar2 = &DAT_10009e54;
    if (param_2 != (undefined *)0x0) {
      puVar2 = param_2;
    }
    puVar4 = &DAT_10009e54;
    if (param_3 != (undefined *)0x0) {
      puVar4 = param_3;
    }
    puVar3 = &DAT_10009e54;
    if (param_4 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0xef < _DAT_00006808 && (_DAT_000068ec != (code *)0x0)))) {
      uVar1 = (*_DAT_000068ec)(*param_1,puVar2,puVar4,puVar3);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068ec
#undef DAT_10009e54
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068ec

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(code * *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100069c0(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && (_DAT_00006960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006960)(*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (param_3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = param_2;
        param_1[6] = param_3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006aa0(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (4 < param_2 + 1U) {
      param_2 = -1;
    }
    if (99 < param_3) {
      param_3 = 100;
    }
    uVar3 = 0;
    if (param_2 != -1) {
      uVar3 = param_1[1];
      if ((uint)param_1[2] <= (uint)param_1[1]) {
        uVar3 = param_1[2];
      }
      uVar3 = (uVar3 * param_3 + 0x32) / 100;
    }
    uVar1 = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && (_DAT_00006964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006964)(*param_1,param_2,uVar3);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[7] = param_2;
        param_1[8] = param_3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068a4
#define DAT_000068a4 (*(uint8_t *)(0x68a4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068a4
#define _DAT_000068a4 (*(code * *)(0x68a4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_10006b70(int *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  param_1[0xf] = 0;
  if (param_4 == 0) {
    param_4 = param_1[1];
  }
  if (param_5 == 0) {
    param_5 = param_1[2];
  }
  if (param_6 == 0) {
    param_6 = param_4 * 4;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = (byte *)param_1[0xc];
  }
  uVar4 = ((param_7 >> 0x10 & 0xff ^
           (param_7 >> 8 & 0xff ^
           (param_7 & 0xff ^
           ((param_6 >> 0x10 & 0xff ^
            (param_6 >> 8 & 0xff ^
            (param_6 & 0xff ^
            ((param_5 >> 0x10 & 0xff ^
             (param_5 >> 8 & 0xff ^
             (param_5 & 0xff ^
             ((param_4 >> 0x10 & 0xff ^
              (param_4 >> 8 & 0xff ^ (param_4 & 0xff ^ 0x811c9dc5) * 0x1000193) * 0x1000193) *
              0x1000193 ^ param_4 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^
            param_5 >> 0x18) * 0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_6 >> 0x18) *
           0x1000193) * 0x1000193) * 0x1000193) * 0x1000193 ^ param_7 >> 0x18) * 0x1000193;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      uVar4 = (bVar1 ^ uVar4) * 0x1000193;
      bVar1 = *pbVar3;
    }
  }
  if ((param_3 != (byte *)0x0) && (iVar2 = param_5 * param_6, iVar2 != 0)) {
    pbVar3 = param_3;
    do {
      uVar4 = (*pbVar3 ^ uVar4) * 0x1000193;
      pbVar3 = pbVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((param_1[0xe] == 0) || (uVar4 != param_1[0xd])) {
    if (_DAT_00006800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00006804 == 0) {
      return 0;
    }
    if (_DAT_00006808 < 0xc) {
      return 0;
    }
    if (_DAT_00006808 < 0xa8) {
      return 0;
    }
    if (_DAT_000068a4 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_000068a4)(*param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0xd] = uVar4;
    param_1[0xe] = 1;
  }
  param_1[0xc] = (int)param_2;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068a4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006dd0
 */

undefined4 recovered_10006dd0(int param_1,byte *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_1 == 0) {
      uVar2 = 0xf6f6f6;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    uVar1 = recovered_10006b70((int *)param_1,param_2,(byte *)param_3[3],*param_3,param_3[1],
                               param_3[2],uVar2);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e20
 */

undefined4 recovered_10006e20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    return 0;
  }
  uVar1 = recovered_10006b70((int *)param_1,*(byte **)(param_1 + 0x30),*(byte **)(param_1 + 0x2c),
                             *(uint *)(param_1 + 4),*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                             *(uint *)(param_1 + 0x10));
  return uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006854
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006854
#define _DAT_00006854 (*(code * *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006e60(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  lVar1 = (ulonglong)(uint)(param_2 * 4) * (ulonglong)param_3;
  iVar2 = (int)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    return 0;
  }
  iVar3 = param_1[0xb];
  if (param_1[10] == iVar2) {
    if (iVar3 != 0) goto LAB_10006ebd;
    iVar3 = 0;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0x58) {
    return 0;
  }
  if (_DAT_00006854 == (code *)0x0) {
    return 0;
  }
  iVar3 = (*_DAT_00006854)(iVar3,iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xb] = iVar3;
  param_1[10] = iVar2;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
LAB_10006ebd:
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_2 * 4;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006854
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006854

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006854
#define DAT_00006854 (*(uint8_t *)(0x6854U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006854
#define _DAT_00006854 (*(code * *)(0x6854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006f40(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar5 = 0;
LAB_10006f70:
    iVar4 = param_1[1];
  }
  else {
    iVar4 = *(int *)(param_2 + 0x50);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_2 + 0x18);
    }
    uVar5 = *(uint *)(param_2 + 0x54);
    if (uVar5 == 0) {
      uVar5 = *(uint *)(param_2 + 0x1c);
    }
    if (iVar4 == 0) goto LAB_10006f70;
  }
  if (uVar5 == 0) {
    uVar5 = param_1[2];
  }
  if (uVar5 == 0) {
    return 0;
  }
  if (iVar4 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  lVar1 = (ulonglong)(uint)(iVar4 * 4) * (ulonglong)uVar5;
  iVar2 = (int)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    return 0;
  }
  iVar3 = param_1[0xb];
  if (param_1[10] == iVar2) {
    if (iVar3 != 0) goto LAB_10006fc4;
    iVar3 = 0;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_00006804 == 0) {
    return 0;
  }
  if (_DAT_00006808 < 0xc) {
    return 0;
  }
  if (_DAT_00006808 < 0x58) {
    return 0;
  }
  if (_DAT_00006854 == (code *)0x0) {
    return 0;
  }
  iVar3 = (*_DAT_00006854)(iVar3,iVar2);
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0xb] = iVar3;
  param_1[10] = iVar2;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
LAB_10006fc4:
  param_1[1] = iVar4;
  param_1[2] = uVar5;
  param_1[3] = iVar4 * 4;
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006854
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006854

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b4
#define DAT_000068b4 (*(uint8_t *)(0x68b4U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b4
#define _DAT_000068b4 (*(code * *)(0x68b4U))
#define local_26c (*(int *)(frame + 52))
#define local_268 (*(int *)(frame + 56))
#define local_24c (*(uint *)(frame + 84))
#define local_248 (*(uint *)(frame + 88))
#define local_244 (*(int *)(frame + 92))
#define local_240 (*(uint *)(frame + 96))
#define local_14 (*(uint *)(frame + 652))
#define local_28c (*(undefined1 (*)[24])(frame + 20))
#define local_274 (*(uint *)(frame + 44))
#define local_270 (*(uint *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007040(int *param_1,void *param_2)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[0xf] == 0) {
    recovered_100011e0(local_28c,0,0x278);
    if (_DAT_00006800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00006804 == 0) {
      return 0;
    }
    if (_DAT_00006808 < 0xc) {
      return 0;
    }
    if (_DAT_00006808 < 0xb8) {
      return 0;
    }
    if (_DAT_000068b4 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*_DAT_000068b4)(*param_1,local_28c);
    if (iVar2 == 0) {
      return 0;
    }
    recovered_10000f50(param_1 + 0x10,local_28c,0x278);
    param_1[0xf] = 1;
    param_1[1] = local_274;
    param_1[2] = local_270;
    param_1[3] = local_26c;
    param_1[4] = local_268;
    if (local_24c == 0xffffffff) {
      uVar4 = 0xf;
    }
    else {
      if (0xfe < local_24c) {
        local_24c = 0xff;
      }
      uVar4 = (local_24c * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[5] = uVar4;
    local_14 = local_270;
    if (local_248 == 0xffffffff) {
      uVar4 = 0;
    }
    else {
      if (0xfe < local_248) {
        local_248 = 0xff;
      }
      uVar4 = (local_248 * 100 + 0x7f & 0xffff) / 0xff;
    }
    param_1[6] = uVar4;
    if (4 < local_244 + 1U) {
      local_244 = -1;
    }
    param_1[7] = local_244;
    if (local_270 <= local_274) {
      local_274 = local_270;
    }
    uVar3 = local_274 * 100 + 0x32;
    uVar4 = 0;
    if (99 < uVar3) {
      local_14 = uVar3 / 100;
      lVar1 = (ulonglong)local_240 * 100 + (ulonglong)(uVar3 / 200);
      uVar5 = recovered_10000b00((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_14,0);
      uVar4 = (uint)uVar5;
      if (99 < uVar4) {
        uVar4 = 100;
      }
    }
    param_1[8] = uVar4;
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10000f50(param_2,param_1 + 0x10,0x278);
  }
  else {
    if (param_2 == (void *)0x0) {
      return 1;
    }
    recovered_10000f50(param_2,param_1 + 0x10,0x278);
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b4
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b4
#undef local_26c
#undef local_268
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_14
#undef local_28c
#undef local_274
#undef local_270

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007260
 */

bool recovered_10007260(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return true;
  }
  return (*(byte *)(param_1 + 0x28) & 0x11) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007280
 */

void recovered_10007280(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_100011e0(param_1,0,0x18);
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
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(code * *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100072b0(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (param_1 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    recovered_100011e0(param_1,0,0x18);
    while ((((_DAT_00006800 == 0x50414d57 && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
           (((0x2f < _DAT_00006808 && (_DAT_0000682c != (code *)0x0)) &&
            (uVar1 = (*_DAT_0000682c)(), uVar1 != 0))))) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if ((byte)((char)uVar1 - 0x20U) < 0x5f) {
        *(uint *)(param_1 + 0x10) = uVar1 & 0xff;
      }
      switch((uintptr_t)(uVar1 & 0xff)) {
      case 8:
      case 0x7f:
        param_1[4] = 1;
        break;
      case 10:
      case 0xd:
        param_1[5] = 1;
        break;
      case 0x1b:
        param_1[6] = 1;
        break;
      case 0x41:
      case 0x61:
        param_1[7] = 1;
        break;
      case 0x44:
      case 100:
        param_1[8] = 1;
        break;
      case 0x51:
      case 0x71:
        param_1[9] = 1;
        break;
      case 0x52:
      case 0x72:
        param_1[10] = 1;
        break;
      case 0x53:
      case 0x73:
        param_1[0xb] = 1;
        break;
      case 0x57:
      case 0x77:
        param_1[0xc] = 1;
      }
      uVar1 = uVar1 >> 8 & 0xff;
      if (uVar1 < 0x48) {
        if (uVar1 == 1) {
          param_1[6] = 1;
        }
        else if (uVar1 == 0xe) {
          param_1[4] = 1;
        }
        else if (uVar1 == 0x1c) {
          param_1[5] = 1;
        }
      }
      else {
        switch((uintptr_t)(uVar1)) {
        case 0x48:
          *param_1 = 1;
          break;
        case 0x4b:
          param_1[2] = 1;
          break;
        case 0x4d:
          param_1[3] = 1;
          break;
        case 0x50:
          param_1[1] = 1;
        }
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c

#define local_27c (*(undefined1 (*)[40])(frame + 20))
#define local_254 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007410
 */

bool recovered_10007410(int *param_1)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10007040(param_1,local_27c);
  return (local_254 & 0x11) != 0 || iVar1 == 0;
}

#undef local_27c
#undef local_254

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_000068a8
#define DAT_000068a8 (*(uint8_t *)(0x68a8U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#undef _DAT_000068a8
#define _DAT_000068a8 (*(code * *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007450(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0xab < _DAT_00006808 && (_DAT_000068a8 != (code *)0x0)))) {
        uVar1 = (*_DAT_000068a8)(*param_1);
      }
    }
    if (((((*(byte *)(param_1 + 9) & 1) != 0) && (param_1[0xb] != 0)) &&
        ((_DAT_00006800 == 0x50414d57 &&
         (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x53 < _DAT_00006808)))))) &&
       (_DAT_00006850 != (code *)0x0)) {
      (*_DAT_00006850)(param_1[0xb]);
    }
    recovered_100011e0(param_1,0,0x340);
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_000068a8
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850
#undef _DAT_000068a8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(code * *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007520(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = param_1[6];
    if (99 < param_2) {
      param_2 = 100;
    }
    if (99 < uVar3) {
      uVar3 = 100;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && (_DAT_00006960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006960)(*param_1,(param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = param_2;
        param_1[6] = uVar3;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006960
#define DAT_00006960 (*(uint8_t *)(0x6960U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006960
#define _DAT_00006960 (*(code * *)(0x6960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007600(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar3 = param_1[5];
    if (99 < uVar3) {
      uVar3 = 100;
    }
    if (99 < param_2) {
      param_2 = 100;
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x163 < _DAT_00006808 && (_DAT_00006960 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006960)(*param_1,(uVar3 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13,
                               (param_2 * 0xff + 0x32 & 0xffff) * 0x147b >> 0x13);
      uVar1 = 0;
      if (iVar2 != 0) {
        param_1[5] = uVar3;
        param_1[6] = param_2;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006960
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006960

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100076e0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
     (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
      ((0x167 < _DAT_00006808 && (_DAT_00006964 != (code *)0x0)))))) {
    iVar2 = (*_DAT_00006964)(*param_1,0,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007760(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
     (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
      ((0x167 < _DAT_00006808 && (_DAT_00006964 != (code *)0x0)))))) {
    iVar2 = (*_DAT_00006964)(*param_1,1,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      param_1[7] = 1;
      param_1[8] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100077e0(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && (_DAT_00006964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006964)(*param_1,2,(uVar1 * param_2 + 0x32) / 100);
      if (iVar2 != 0) {
        param_1[7] = 2;
        param_1[8] = param_2;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006964
#define DAT_00006964 (*(uint8_t *)(0x6964U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006964
#define _DAT_00006964 (*(code * *)(0x6964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007890(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (99 < param_2) {
      param_2 = 100;
    }
    uVar1 = param_1[1];
    if ((uint)param_1[2] <= (uint)param_1[1]) {
      uVar1 = param_1[2];
    }
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x167 < _DAT_00006808 && (_DAT_00006964 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006964)(*param_1,3,(uVar1 * param_2 + 0x32) / 100);
      if (iVar2 != 0) {
        param_1[7] = 3;
        param_1[8] = param_2;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006964
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006964

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006900
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006900
#define _DAT_00006900 (*(code * *)(0x6900U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007940(int *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 != (int *)0x0) {
    if ((((param_2 != 0 && *param_1 != 0) && (_DAT_00006800 == 0x50414d57)) && (_DAT_00006804 != 0))
       && (((0xb < _DAT_00006808 && (0x103 < _DAT_00006808)) && (_DAT_00006900 != (code *)0x0)))) {
      uVar1 = (*_DAT_00006900)(*param_1,param_2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006900
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006900

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(code * *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100079b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && (_DAT_000068b0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x100079e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_000068b0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000697c
#define DAT_0000697c (*(uint8_t *)(0x697cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000697c
#define _DAT_0000697c (*(code * *)(0x697cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100079f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x17f < _DAT_00006808 && (_DAT_0000697c != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_0000697c)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000697c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000697c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068ac
#define DAT_000068ac (*(uint8_t *)(0x68acU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068ac
#define _DAT_000068ac (*(code * *)(0x68acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007a30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xaf < _DAT_00006808 && (_DAT_000068ac != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_000068ac)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068ac
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068ac

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068f0
#define DAT_000068f0 (*(uint8_t *)(0x68f0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068f0
#define _DAT_000068f0 (*(code * *)(0x68f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007a70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xf3 < _DAT_00006808 && (_DAT_000068f0 != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_000068f0)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068f0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068f0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068fc
#define DAT_000068fc (*(uint8_t *)(0x68fcU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068fc
#define _DAT_000068fc (*(code * *)(0x68fcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007ab0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xff < _DAT_00006808 && (_DAT_000068fc != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_000068fc)();
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068fc
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068fc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(code * *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && (_DAT_000068b0 != (code *)0x0)))) {
    uVar1 = (*_DAT_000068b0)(param_1,param_2,param_3,0xe,10);
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_000068b0
#define DAT_000068b0 (*(uint8_t *)(0x68b0U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_000068b0
#define _DAT_000068b0 (*(code * *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007b50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0xb3 < _DAT_00006808 && (_DAT_000068b0 != (code *)0x0)))) {
    uVar1 = (*_DAT_000068b0)(param_1,param_2,param_3,1,1);
    return uVar1;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_000068b0
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0000682c
#define DAT_0000682c (*(uint8_t *)(0x682cU))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000682c
#define _DAT_0000682c (*(code * *)(0x682cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007bb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  while( true ) {
    if ((((_DAT_00006800 != 0x50414d57) || (_DAT_00006804 == 0)) || (_DAT_00006808 < 0xc)) ||
       (((_DAT_00006808 < 0x30 || (_DAT_0000682c == (code *)0x0)) ||
        (uVar1 = (*_DAT_0000682c)(), uVar1 == 0)))) {
      return 0;
    }
    uVar2 = CONCAT31((int3)((uVar1 & 0xff00) >> 8),1);
    if ((uVar1 & 0xff00) == 0x100) {
      return 0x101;
    }
    if ((uVar1 & 0xdf) == 0x51) break;
    if ((uVar1 & 0xff) == 0x1b) {
      return uVar2;
    }
  }
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000682c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000682c

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
 * Address: 0x10007c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10007c30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; param_1 != 0; param_1 = param_1 + -1) {
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0)))) {
      (*_DAT_0000689c)();
    }
  }
  return;
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
 * Address: 0x10007c90
 */

void recovered_10007c90(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007cb0
 */

void recovered_10007cb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       ,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ce0
 */

void recovered_10007ce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d00
 */

void * recovered_10007d00(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  *(undefined4 *)((int)param_1 + 0x18) = 1;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x202020;
  *(undefined4 *)((int)param_1 + 0x20) = 0xf6f6f6;
  *(undefined4 *)((int)param_1 + 0x24) = 1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d40
 */

undefined4 * recovered_10007d40(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[6] = 1;
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 1;
  param_1[2] = param_2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d90
 */

undefined4 * recovered_10007d90(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[6] = 1;
  param_1[7] = 0x202020;
  param_1[9] = 1;
  *param_1 = 2;
  param_1[8] = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

undefined4 * recovered_10007de0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[6] = 1;
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 4;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e30
 */

undefined4 *
recovered_10007e30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[6] = 1;
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 3;
  param_1[2] = param_2;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e90
 */

undefined4 *
recovered_10007e90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 5;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = 1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ef0
 */

undefined4 *
recovered_10007ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 6;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = 1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f50
 */

undefined4 * recovered_10007f50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100011e0(param_1,0,0x48);
  param_1[7] = 0x202020;
  param_1[8] = 0xf6f6f6;
  param_1[9] = 1;
  *param_1 = 7;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[6] = 1;
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fb0
 */

void recovered_10007fb0(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

void recovered_10007ff0(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  param_3 = param_3 | 1;
  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008020
 */

void recovered_10008020(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  param_3 = param_3 | 2;
  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


#define iStack00000030 (*(int *)(frame + 80))
#define iStack00000034 (*(int *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(undefined4 *param_1,undefined4 param_2,byte param_3,int in_stack_00000050,
                       int in_stack_00000054)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (-1 < in_stack_00000050) {
    iStack00000030 = in_stack_00000050;
    param_3 = param_3 | 4;
  }
  if (-1 < in_stack_00000054) {
    iStack00000034 = in_stack_00000054;
    param_3 = param_3 | 8;
  }
  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack00000030
#undef iStack00000034

#define iStack0000002c (*(int *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

void recovered_10008090(undefined4 *param_1,undefined4 param_2,int in_stack_00000050)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  iStack0000002c = in_stack_00000050 + (uint)(in_stack_00000050 == 0);
  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef iStack0000002c

#define uStack00000020 (*(uint *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080c0
 */

void recovered_100080c0(undefined4 *param_1,undefined4 param_2,uint in_stack_00000050)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (3 < in_stack_00000050) {
    in_stack_00000050 = 1;
  }
  uStack00000020 = in_stack_00000050;
  puVar2 = &param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

#undef uStack00000020

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006978
#define _DAT_00006978 (*(code * *)(0x6978U))
#define local_3c (*(undefined1 (*)[12])(frame + 20))
#define local_30 (*(uint *)(frame + 32))
#define local_2c (*(uint *)(frame + 36))
#define local_24 (*(uint *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(uint *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100080f0(undefined4 *param_1,int param_2,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;

  if (param_1 == (undefined4 *)0x0) {
    iVar2 = 0;
    iVar6 = 0;
    goto LAB_1000853c;
  }
  iVar2 = param_1[0xd];
  iVar6 = param_1[0xf];
  local_14 = 0;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  uVar9 = param_2 - (iVar2 + iVar6);
  iVar2 = param_1[0xc];
  if ((int)uVar9 < 1) {
    uVar9 = 0;
  }
  iVar6 = param_1[0xe];
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  local_1c = param_3 - (iVar2 + iVar6);
  if ((int)local_1c < 1) {
    local_1c = 0;
  }
  local_24 = uVar9;
  switch((uintptr_t)(*param_1)) {
  case 1:
    puVar1 = (undefined *)param_1[2];
    iVar2 = param_1[9];
    recovered_100011e0(local_3c,0,0x18);
    puVar4 = &DAT_10009e54;
    if (puVar1 != (undefined *)0x0) {
      puVar4 = puVar1;
    }
    local_14 = 0;
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x17b < _DAT_00006808 && (_DAT_00006978 != (code *)0x0)))))) {
      iVar2 = (*_DAT_00006978)(puVar4,0xffffffff,iVar2 + (uint)(iVar2 == 0),0,local_3c);
      local_18 = 0;
      if (iVar2 != 0) {
        local_14 = local_30;
        if ((int)local_30 < 1) {
          local_14 = 0;
        }
        local_18 = local_2c;
        if ((int)local_2c < 1) goto LAB_10008205;
      }
    }
    else {
LAB_10008205:
      local_18 = 0;
    }
    break;
  case 2:
    local_14 = 0x10;
    local_18 = 0x10;
    break;
  case 3:
    puVar1 = (undefined *)param_1[2];
    iVar2 = param_1[9];
    recovered_100011e0(local_3c,0,0x18);
    puVar4 = &DAT_10009e54;
    if (puVar1 != (undefined *)0x0) {
      puVar4 = puVar1;
    }
    local_14 = 0x14;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x17b < _DAT_00006808 && (_DAT_00006978 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006978)(puVar4,0xffffffff,iVar2 + (uint)(iVar2 == 0),0,local_3c);
      local_18 = 0xc;
      if (iVar2 != 0) {
        local_14 = local_30;
        if ((int)local_30 < 1) {
          local_14 = 0;
        }
        if ((int)local_2c < 1) {
          local_2c = 0;
        }
        local_14 = local_14 + 0x14;
        local_18 = local_2c + 0xc;
      }
    }
    else {
      local_18 = 0xc;
    }
    if (local_18 < 0x19) {
      local_18 = 0x18;
    }
    break;
  default:
    local_18 = 0;
    break;
  case 5:
    uVar9 = param_1[4];
    if (uVar9 < 2) {
      local_18 = 0;
      uVar11 = 0;
      if (uVar9 != 0) goto LAB_100083ce;
    }
    else {
      local_18 = (uVar9 - 1) * param_1[5];
LAB_100083ce:
      uVar11 = local_18;
      iVar2 = 0;
      local_18 = 0;
      local_20 = 0;
      uVar10 = 0;
      do {
        piVar7 = (int *)param_1[3];
        if (piVar7 != (int *)0x0) {
          piVar7 = (int *)((int)piVar7 + iVar2);
        }
        if ((piVar7 == (int *)0x0) || (*piVar7 != 4)) {
          uVar12 = recovered_100080f0(piVar7,local_24,local_1c);
          uVar9 = (uint)((ulonglong)uVar12 >> 0x20);
          if ((int)local_18 <= (int)uVar9) {
            local_18 = uVar9;
          }
          uVar11 = uVar11 + (int)uVar12;
          uVar9 = param_1[4];
        }
        else {
          local_20 = local_20 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar2 = iVar2 + 0x48;
      } while (uVar10 < uVar9);
      local_14 = uVar11;
      if ((int)uVar11 <= (int)local_24) {
        local_14 = local_24;
      }
      if (local_20 != 0) break;
    }
    local_14 = uVar11;
    break;
  case 6:
    uVar9 = param_1[4];
    if (uVar9 < 2) {
      uVar11 = 0;
      local_14 = 0;
      if (uVar9 != 0) goto LAB_10008462;
    }
    else {
      uVar11 = (uVar9 - 1) * param_1[5];
LAB_10008462:
      iVar2 = 0;
      local_14 = 0;
      uVar10 = 0;
      local_20 = 0;
      do {
        piVar7 = (int *)param_1[3];
        if (piVar7 != (int *)0x0) {
          piVar7 = (int *)((int)piVar7 + iVar2);
        }
        if ((piVar7 == (int *)0x0) || (*piVar7 != 4)) {
          uVar12 = recovered_100080f0(piVar7,local_24,local_1c);
          if ((int)local_14 <= (int)(uint)uVar12) {
            local_14 = (uint)uVar12;
          }
          uVar11 = uVar11 + (int)((ulonglong)uVar12 >> 0x20);
          uVar9 = param_1[4];
        }
        else {
          local_20 = local_20 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar2 = iVar2 + 0x48;
      } while (uVar10 < uVar9);
      local_18 = uVar11;
      if ((int)uVar11 <= (int)local_1c) {
        local_18 = local_1c;
      }
      if (local_20 != 0) break;
    }
    local_18 = uVar11;
    break;
  case 7:
    local_18 = 0;
    if (param_1[4] != 0) {
      iVar2 = 0;
      uVar11 = 0;
      local_18 = 0;
      local_14 = 0;
      do {
        puVar3 = (undefined4 *)param_1[3];
        if (puVar3 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)((int)puVar3 + iVar2);
        }
        uVar12 = recovered_100080f0(puVar3,uVar9,local_1c);
        uVar10 = (uint)((ulonglong)uVar12 >> 0x20);
        if ((int)local_14 <= (int)(uint)uVar12) {
          local_14 = (uint)uVar12;
        }
        if ((int)local_18 <= (int)uVar10) {
          local_18 = uVar10;
        }
        uVar11 = uVar11 + 1;
        iVar2 = iVar2 + 0x48;
      } while (uVar11 < (uint)param_1[4]);
    }
  }
  if (((param_1[1] & 4) != 0) && (local_14 = param_1[10], (int)local_14 < 1)) {
    local_14 = 0;
  }
  if (((param_1[1] & 8) != 0) && (local_18 = param_1[0xb], (int)local_18 < 1)) {
    local_18 = 0;
  }
  iVar5 = param_1[0xd];
  iVar2 = param_1[0xf];
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar8 = param_1[0xc];
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar6 = param_1[0xe];
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  iVar2 = iVar5 + local_14 + iVar2;
  iVar6 = iVar8 + local_18 + iVar6;
LAB_1000853c:
  return CONCAT44(iVar6,iVar2);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006978
#undef DAT_10009e54
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006978
#undef local_3c
#undef local_30
#undef local_2c
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
#undef DAT_00006900
#define DAT_00006900 (*(uint8_t *)(0x6900U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006900
#define _DAT_00006900 (*(code * *)(0x6900U))
#define local_2c (*(undefined1 (*)[4])(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10008550(int *param_1,byte *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_2 == (byte *)0x0) {
    iVar1 = 0;
  }
  else {
    recovered_100011e0(param_2,0,0x2c);
    recovered_100011e0(local_2c,0,0x1c);
    iVar2 = 0;
    if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (_DAT_00006800 == 0x50414d57)) &&
       (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) &&
        ((0x103 < _DAT_00006808 && (_DAT_00006900 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006900)(*param_1,local_2c);
      if (iVar1 != 0) {
        *param_2 = *param_2 | 1;
        *(undefined4 *)(param_2 + 4) = local_18;
        *(undefined4 *)(param_2 + 8) = local_14;
        *(undefined4 *)(param_2 + 0xc) = local_28;
        *(undefined4 *)(param_2 + 0x10) = local_24;
        iVar2 = 1;
      }
    }
    *param_2 = *param_2 | 2;
    iVar1 = recovered_100072b0(param_2 + 0x14);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006900
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006900
#undef local_2c
#undef local_28
#undef local_24
#undef local_18
#undef local_14

#define local_2a0 (*(undefined1 (*)[40])(frame + 16))
#define local_278 (*(byte *)(frame + 56))
#define local_28 (*(int *)(frame + 648))
#define local_24 (*(int *)(frame + 652))
#define local_20 (*(int *)(frame + 656))
#define local_1c (*(int *)(frame + 660))
#define local_18 (*(undefined4 *)(frame + 664))
#define local_14 (*(int *)(frame + 668))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008620
 */

undefined4 recovered_10008620(int *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;

  uVar4 = 0;
  if ((param_2 != 0 && param_1 != (int *)0x0) && (*param_1 != 0)) {
    recovered_100011e0(local_2a0,0,0x278);
    iVar1 = recovered_10007040(param_1,local_2a0);
    if ((iVar1 != 0) && ((local_278 & 0x11) == 0)) {
      iVar1 = recovered_10006f40(param_1,(int)local_2a0);
      if ((iVar1 != 0) && (param_1[0xb] != 0)) {
        recovered_100011e0(&local_28,0,0x14);
        local_28 = param_1[0xb];
        local_24 = param_1[1];
        local_20 = param_1[2];
        local_1c = param_1[3];
        local_18 = param_3;
        iVar2 = local_20;
        iVar1 = local_24;
        if ((0 < local_20 && 0 < local_24) && local_28 != 0) {
          iVar1 = param_1[4];
          iVar2 = 0;
          do {
            puVar5 = (undefined1 *)(local_1c * iVar2 + local_28);
            iVar3 = local_24;
            do {
              *puVar5 = (char)((uint)iVar1 >> 0x10);
              puVar5[1] = (char)((uint)iVar1 >> 8);
              puVar5[2] = (char)iVar1;
              puVar5[3] = 0xff;
              puVar5 = puVar5 + 4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar2 = iVar2 + 1;
          } while (iVar2 != local_20);
          iVar1 = param_1[1];
          iVar2 = param_1[2];
          local_14 = local_24;
        }
        recovered_10008770(&local_28,(int *)param_2,0,0,iVar1,iVar2);
        uVar4 = recovered_10006b70(param_1,(byte *)param_1[0xc],(byte *)param_1[0xb],param_1[1],
                                   param_1[2],param_1[3],param_1[4]);
      }
    }
  }
  return uVar4;
}

#undef local_2a0
#undef local_278
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
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef DAT_10009e54
#define DAT_10009e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x598U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006978
#define _DAT_00006978 (*(code * *)(0x6978U))
#define local_2c (*(int *)(frame + 100))
#define local_28 (*(int *)(frame + 104))
#define local_24 (*(uint *)(frame + 108))
#define local_20 (*(int * *)(frame + 112))
#define local_1c (*(int * *)(frame + 116))
#define local_18 (*(uint *)(frame + 120))
#define local_14 (*(undefined * *)(frame + 124))
#define local_68 (*(undefined1 (*)[12])(frame + 40))
#define local_5c (*(uint *)(frame + 52))
#define local_58 (*(uint *)(frame + 56))
#define local_50 (*(uint *)(frame + 64))
#define local_4c (*(int *)(frame + 68))
#define local_48 (*(int *)(frame + 72))
#define local_44 (*(uint *)(frame + 76))
#define local_40 (*(uint *)(frame + 80))
#define local_3c (*(uint *)(frame + 84))
#define local_38 (*(undefined4 *)(frame + 88))
#define local_34 (*(int * *)(frame + 92))
#define local_30 (*(uint *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008770(int *in_ECX,int *in_EDX,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 uVar13;
  int iVar11;
  undefined4 uVar12;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  char cVar19;

  if (param_6 < 1 || (param_5 < 1 || (in_EDX == (int *)0x0 || in_ECX == (int *)0x0))) {
    return;
  }
  iVar2 = *in_EDX;
  if ((*(byte *)(in_EDX + 1) & 2) == 0) {
LAB_100087b0:
    iVar14 = iVar2;
  }
  else {
    iVar14 = 3;
    if (iVar2 != 3) {
      local_14 = (undefined *)param_3;
      if (param_3 < 1) {
        local_14 = (undefined *)0x0;
      }
      iVar6 = param_4;
      if (param_4 < 1) {
        iVar6 = 0;
      }
      local_18 = param_5 + param_3;
      if (in_ECX[1] <= param_5 + param_3) {
        local_18 = in_ECX[1];
      }
      iVar11 = param_6 + param_4;
      if (in_ECX[2] <= param_6 + param_4) {
        iVar11 = in_ECX[2];
      }
      if ((iVar11 <= iVar6) || (local_18 - (int)local_14 == 0 || (int)local_18 < (int)local_14))
      goto LAB_100087b0;
      iVar14 = iVar2;
      if (*in_ECX != 0) {
        iVar2 = in_EDX[8];
        do {
          puVar5 = (undefined1 *)(in_ECX[3] * iVar6 + *in_ECX + (int)local_14 * 4);
          iVar14 = local_18 - (int)local_14;
          do {
            *puVar5 = (char)((uint)iVar2 >> 0x10);
            puVar5[1] = (char)((uint)iVar2 >> 8);
            puVar5[2] = (char)iVar2;
            puVar5[3] = 0xff;
            puVar5 = puVar5 + 4;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          iVar6 = iVar6 + 1;
        } while (iVar6 != iVar11);
        iVar14 = *in_EDX;
      }
    }
  }
  local_28 = in_EDX[0xd];
  iVar2 = in_EDX[0xf];
  if (local_28 < 1) {
    local_28 = 0;
  }
  local_2c = in_EDX[0xc];
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar6 = in_EDX[0xe];
  if (local_2c < 1) {
    local_2c = 0;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  local_3c = param_5 - (iVar2 + local_28);
  local_14 = (undefined *)local_3c;
  if ((int)local_3c < 1) {
    local_14 = (undefined *)0x0;
  }
  local_44 = param_6 - (iVar6 + local_2c);
  local_18 = local_44;
  if ((int)local_44 < 1) {
    local_18 = 0;
  }
  if (6 < iVar14 - 1U) {
    return;
  }
  local_28 = local_28 + param_3;
  local_2c = local_2c + param_4;
  local_20 = in_EDX;
  local_1c = in_ECX;
  switch((uintptr_t)(iVar14)) {
  case 1:
    puVar7 = (undefined *)in_EDX[2];
    iVar2 = in_EDX[9];
    recovered_100011e0(local_68,0,0x18);
    puVar3 = &DAT_10009e54;
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
    }
    uVar15 = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x17b < _DAT_00006808 && (_DAT_00006978 != (code *)0x0)))) {
      iVar2 = (*_DAT_00006978)(puVar3,0xffffffff,iVar2 + (uint)(iVar2 == 0),0,local_68);
      uVar9 = 0;
      if (iVar2 != 0) {
        if ((int)local_5c < 1) {
          local_5c = 0;
        }
        uVar15 = local_5c;
        uVar9 = local_58;
        if ((int)local_58 < 1) {
          uVar9 = 0;
        }
      }
    }
    else {
      uVar9 = 0;
    }
    puVar7 = local_14;
    if (uVar15 <= local_14) {
      puVar7 = (undefined *)uVar15;
    }
    iVar2 = local_20[6];
    uVar15 = local_18;
    if (uVar9 <= local_18) {
      uVar15 = uVar9;
    }
    if (iVar2 == 1) {
      local_28 = local_28 + ((int)local_14 - (int)puVar7) / 2;
      local_2c = local_2c + (int)(local_18 - uVar15) / 2;
    }
    else if (iVar2 == 2) {
      local_28 = (local_28 + (int)local_14) - (int)puVar7;
      local_2c = (local_2c + local_18) - uVar15;
    }
    else if (iVar2 == 3) goto LAB_10008f5e;
    local_14 = puVar7;
    local_18 = uVar15;
LAB_10008f5e:
    puVar7 = &DAT_10009e54;
    if ((undefined *)local_20[2] != (undefined *)0x0) {
      puVar7 = (undefined *)local_20[2];
    }
    iVar14 = 0x202020;
    if ((*(byte *)(local_20 + 1) & 1) != 0) {
      iVar14 = local_20[7];
    }
    recovered_100092e0(local_1c,local_28,local_2c,(int)local_14,local_18,(int)puVar7,iVar14,
                       local_20[9] + (uint)(local_20[9] == 0),iVar2);
    return;
  case 2:
    iVar2 = 0xf4f4f4;
    if ((*(byte *)(in_EDX + 1) & 2) != 0) {
      iVar2 = in_EDX[8];
    }
    local_20 = (int *)local_28;
    if (local_28 < 1) {
      local_20 = (int *)0x0;
    }
    iVar14 = local_2c;
    if (local_2c < 1) {
      iVar14 = 0;
    }
    iVar6 = (int)local_14 + local_28;
    if (in_ECX[1] <= (int)local_14 + local_28) {
      iVar6 = in_ECX[1];
    }
    iVar11 = local_18 + local_2c;
    if (in_ECX[2] <= (int)(local_18 + local_2c)) {
      iVar11 = in_ECX[2];
    }
    if (((iVar14 < iVar11) && ((int)local_20 < iVar6)) &&
       ((*in_ECX != 0 && ((0 < (int)local_3c && (0 < (int)local_44)))))) {
      do {
        puVar5 = (undefined1 *)(in_ECX[3] * iVar14 + *in_ECX + (int)local_20 * 4);
        iVar16 = (int)local_20 - iVar6;
        do {
          *puVar5 = (char)((uint)iVar2 >> 0x10);
          puVar5[1] = (char)((uint)iVar2 >> 8);
          puVar5[2] = (char)iVar2;
          puVar5[3] = 0xff;
          puVar5 = puVar5 + 4;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar11);
    }
    break;
  case 3:
    pbVar1 = (byte *)in_ECX[4];
    if (pbVar1 == (byte *)0x0) {
LAB_10008c02:
      bVar4 = 0;
      local_38 = 0;
      local_50 = 0;
    }
    else {
      if ((*pbVar1 & 1) != 0) {
        bVar4 = 0;
        if ((local_28 <= *(int *)(pbVar1 + 4)) && (local_2c <= *(int *)(pbVar1 + 8))) {
          if (local_28 + (int)local_14 <= *(int *)(pbVar1 + 4)) goto LAB_10008c02;
          local_38 = 0;
          local_50 = 0;
          if (*(int *)(pbVar1 + 8) < (int)(local_2c + local_18)) {
            bVar4 = pbVar1[0xc] & 1;
            local_50 = (uint)(pbVar1[0x10] & 1);
            local_38 = CONCAT31((int3)((uint)pbVar1 >> 8),1);
          }
          goto LAB_10008c61;
        }
      }
      bVar4 = 0;
      local_38 = 0;
      local_50 = 0;
    }
LAB_10008c61:
    uVar15 = 0xf4f4f4;
    if ((*(byte *)(in_EDX + 1) & 2) != 0) {
      uVar15 = in_EDX[8];
    }
    if (bVar4 == 0) {
      if ((char)local_38 != '\0') {
        iVar6 = (uVar15 >> 0x10 & 0xff) * 0x52 + 0x1220;
        iVar14 = (uVar15 >> 8 & 0xff) * 0x52 + 0x1220;
        iVar2 = (uVar15 & 0xff) * 0x52 + 0x1220;
        goto LAB_10008cff;
      }
    }
    else {
      iVar6 = (uVar15 >> 0x10 & 0xff) * 0x58 + 0x32;
      iVar14 = (uVar15 >> 8 & 0xff) * 0x58 + 0x32;
      iVar2 = (uVar15 & 0xff) * 0x58 + 0x32;
LAB_10008cff:
      uVar15 = (uint)(iVar2 * 0x147b) >> 0x13 | (uint)(iVar14 * 0x147b) >> 0xb & 0x1ff00 |
               (uint)(iVar6 * 0x147b) >> 3 & 0x1ff0000;
    }
    local_30 = local_28;
    if (local_28 < 1) {
      local_30 = 0;
    }
    local_14 = (undefined *)((int)local_14 + local_28);
    local_48 = local_2c;
    if (local_2c < 1) {
      local_48 = 0;
    }
    local_40 = in_ECX[1];
    uVar9 = (uint)local_14;
    if ((int)local_40 <= (int)local_14) {
      uVar9 = local_40;
    }
    local_18 = local_18 + local_2c;
    local_4c = in_ECX[2];
    local_24 = local_18;
    if (local_4c <= (int)local_18) {
      local_24 = local_4c;
    }
    iVar2 = *in_ECX;
    if ((((local_48 < (int)local_24) &&
         (local_34 = (int *)(local_30 - uVar9), (int)local_30 < (int)uVar9)) && (iVar2 != 0)) &&
       ((0 < (int)local_3c && (0 < (int)local_44)))) {
      iVar2 = local_48;
      do {
        puVar5 = (undefined1 *)(in_ECX[3] * iVar2 + *in_ECX + local_30 * 4);
        iVar14 = (int)local_34;
        do {
          *puVar5 = (char)(uVar15 >> 0x10);
          puVar5[1] = (char)(uVar15 >> 8);
          puVar5[2] = (char)uVar15;
          puVar5[3] = 0xff;
          puVar5 = puVar5 + 4;
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != local_24);
      uVar12 = 0x286dc4;
      if ((char)local_38 == '\0') {
        uVar12 = 0x9a9a9a;
      }
      local_40 = in_ECX[1];
      uVar9 = (uint)local_14;
      if ((int)local_40 <= (int)local_14) {
        uVar9 = local_40;
      }
      iVar2 = *in_ECX;
      iVar14 = in_ECX[2];
    }
    else {
      uVar12 = 0x286dc4;
      if ((char)local_38 == '\0') {
        uVar12 = 0x9a9a9a;
      }
      if (((int)local_3c < 1) || (iVar14 = local_4c, (int)local_44 < 1)) goto LAB_100090bc;
    }
    local_24 = local_2c + 1;
    if (iVar14 <= local_2c + 1) {
      local_24 = iVar14;
    }
    uVar10 = (undefined1)uVar12;
    uVar13 = (undefined1)((uint)uVar12 >> 8);
    uVar8 = (undefined1)((uint)uVar12 >> 0x10);
    if (((uVar9 - local_30 != 0 && (int)local_30 <= (int)uVar9) && (iVar2 != 0)) &&
       (local_48 < (int)local_24)) {
      iVar2 = local_48;
      do {
        puVar5 = (undefined1 *)(in_ECX[3] * iVar2 + *in_ECX + local_30 * 4);
        iVar14 = uVar9 - local_30;
        do {
          *puVar5 = uVar8;
          puVar5[1] = uVar13;
          puVar5[2] = uVar10;
          puVar5[3] = 0xff;
          puVar5 = puVar5 + 4;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != local_24);
      local_40 = in_ECX[1];
      uVar9 = (uint)local_14;
      if ((int)local_40 <= (int)local_14) {
        uVar9 = local_40;
      }
      iVar2 = *in_ECX;
      iVar14 = in_ECX[2];
    }
    iVar6 = local_18;
    if ((int)local_18 < 2) {
      iVar6 = 1;
    }
    local_24 = local_18;
    if (iVar14 <= (int)local_18) {
      local_24 = iVar14;
    }
    iVar14 = uVar9 - local_30;
    uVar15 = local_40;
    if (((!(iVar14 == 0 || (int)uVar9 < (int)local_30)) && (iVar2 != 0)) && (iVar6 <= (int)local_24)
       ) {
      puVar5 = (undefined1 *)(iVar2 + (iVar6 + -1) * in_ECX[3] + local_30 * 4);
      do {
        *puVar5 = uVar8;
        puVar5[1] = uVar13;
        puVar5[2] = uVar10;
        puVar5[3] = 0xff;
        puVar5 = puVar5 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      local_24 = local_18;
      if (in_ECX[2] <= (int)local_18) {
        local_24 = in_ECX[2];
      }
      iVar2 = *in_ECX;
      uVar15 = in_ECX[1];
    }
    uVar9 = local_28 + 1U;
    if ((int)uVar15 <= (int)(local_28 + 1U)) {
      uVar9 = uVar15;
    }
    uVar17 = (uint)local_14;
    if (((local_48 < (int)local_24) && (iVar2 != 0)) &&
       (iVar14 = uVar9 - local_30, iVar14 != 0 && (int)local_30 <= (int)uVar9)) {
      local_30 = local_30 * 4;
      iVar2 = local_48;
      do {
        puVar5 = (undefined1 *)(in_ECX[3] * iVar2 + *in_ECX + local_30);
        iVar6 = iVar14;
        do {
          *puVar5 = uVar8;
          puVar5[1] = uVar13;
          puVar5[2] = uVar10;
          puVar5[3] = 0xff;
          puVar5 = puVar5 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != local_24);
      uVar9 = local_18;
      if (in_ECX[2] <= (int)local_18) {
        uVar9 = in_ECX[2];
      }
      uVar15 = in_ECX[1];
      local_34 = (int *)*in_ECX;
    }
    else {
      if ((int)local_14 < 2) {
        uVar17 = 1;
      }
      uVar9 = local_24;
      local_34 = (int *)iVar2;
    }
    if ((int)uVar15 <= (int)local_14) {
      local_14 = (undefined *)uVar15;
    }
    if (((local_48 < (int)uVar9) && (local_34 != (int *)0x0)) && ((int)uVar17 <= (int)local_14)) {
      local_18 = (uVar17 - 1) * 4;
      local_14 = (undefined *)(~(uint)local_14 + uVar17);
      iVar2 = local_48;
      do {
        puVar5 = (undefined1 *)(in_ECX[3] * iVar2 + *in_ECX + local_18);
        uVar15 = (uint)local_14;
        do {
          *puVar5 = uVar8;
          puVar5[1] = uVar13;
          puVar5[2] = uVar10;
          puVar5[3] = 0xff;
          puVar5 = puVar5 + 4;
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0);
        iVar2 = iVar2 + 1;
        local_24 = uVar9;
      } while (iVar2 != uVar9);
    }
LAB_100090bc:
    if (((char)local_50 != '\0') && ((code *)in_EDX[0x10] != (code *)0x0)) {
      (*(code *)in_EDX[0x10])(in_EDX[0x11]);
    }
    local_18 = 0x202020;
    if ((*(byte *)(in_EDX + 1) & 1) != 0) {
      local_18 = in_EDX[7];
    }
    local_14 = &DAT_10009e54;
    if ((undefined *)in_EDX[2] != (undefined *)0x0) {
      local_14 = (undefined *)in_EDX[2];
    }
    uVar15 = local_44;
    if ((int)local_44 < 0xd) {
      uVar15 = 0xc;
    }
    uVar9 = local_3c;
    if ((int)local_3c < 0x15) {
      uVar9 = 0x14;
    }
    recovered_100092e0(local_1c,local_28 + 10,local_2c + 6,uVar9 - 0x14,uVar15 - 0xc,(int)local_14,
                       local_18,in_EDX[9] + (uint)(in_EDX[9] == 0),1);
    return;
  case 5:
    cVar19 = '\x01';
    goto LAB_10008bb3;
  case 6:
    cVar19 = '\0';
LAB_10008bb3:
    recovered_10009600(in_ECX,(int)in_EDX,param_3,param_4,param_5,param_6,cVar19);
    return;
  case 7:
    if ((in_EDX[3] != 0) && (in_EDX[4] != 0)) {
      local_44 = local_28 + (int)local_14;
      local_3c = local_2c + local_18;
      iVar2 = 0;
      uVar15 = 0;
      do {
        puVar7 = local_14;
        local_34 = (int *)(local_20[3] + iVar2);
        uVar18 = recovered_100080f0(local_34,(int)local_14,local_18);
        uVar9 = (uint)((ulonglong)uVar18 >> 0x20);
        local_30 = (uint)puVar7;
        if ((int)(uint)uVar18 <= (int)puVar7) {
          local_30 = (uint)uVar18;
        }
        iVar14 = local_20[6];
        local_24 = local_18;
        if ((int)uVar9 <= (int)local_18) {
          local_24 = uVar9;
        }
        if (iVar14 == 1) {
          iVar6 = (int)((int)local_14 - local_30) / 2 + local_28;
          iVar11 = (int)(local_18 - local_24) / 2 + local_2c;
        }
        else if (iVar14 == 2) {
          iVar6 = local_44 - local_30;
          iVar11 = local_3c - local_24;
        }
        else {
          iVar6 = local_28;
          iVar11 = local_2c;
          if (iVar14 == 3) {
            local_24 = local_18;
            local_30 = (uint)local_14;
          }
        }
        recovered_10008770(local_1c,local_34,iVar6,iVar11,local_30,local_24);
        uVar15 = uVar15 + 1;
        iVar2 = iVar2 + 0x48;
      } while (uVar15 < (uint)local_20[4]);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006978
#undef DAT_10009e54
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006978
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_68
#undef local_5c
#undef local_58
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30

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
#define local_5c8 (*(int (*)[208])(frame + 24))
#define local_288 (*(undefined1 (*)[40])(frame + 856))
#define local_260 (*(uint *)(frame + 896))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009150
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009150(undefined4 *param_1)

{
  unsigned char frame[1536] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar3 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[0xe] != 0)) {
    recovered_100011e0(local_5c8,0,0x340);
    piVar2 = local_5c8;
    if ((int *)*param_1 != (int *)0x0) {
      piVar2 = (int *)*param_1;
    }
    if ((*piVar2 == 0) && (iVar1 = recovered_100064a0(piVar2,param_1 + 1), iVar1 == 0)) {
      return 0;
    }
    iVar1 = recovered_10007040(piVar2,local_288);
    if ((iVar1 != 0) && ((local_260 & 0x11) == 0)) {
      uVar4 = 0;
      while( true ) {
        recovered_100011e0(local_288,0,0x278);
        recovered_10007040(piVar2,local_288);
        if (((((code *)param_1[0xf] != (code *)0x0) &&
             (iVar1 = (*(code *)param_1[0xf])(piVar2,local_288,param_1[0x10]), iVar1 == 0)) ||
            (iVar1 = (*(code *)param_1[0xe])(piVar2,param_1[0x10]), iVar1 == 0)) ||
           (uVar4 = uVar4 + 1, param_1[0x11] - 1 < uVar4)) break;
        iVar1 = param_1[0x12] + (uint)(param_1[0x12] == 0);
        do {
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x9f < _DAT_00006808 && (_DAT_0000689c != (code *)0x0))))))
          {
            (*_DAT_0000689c)();
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = recovered_10007040(piVar2,local_288);
        if ((iVar1 == 0) || ((local_260 & 0x11) != 0)) break;
      }
    }
    recovered_10007450(piVar2);
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000689c
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_0000689c
#undef local_5c8
#undef local_288
#undef local_260

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006850
#define DAT_00006850 (*(uint8_t *)(0x6850U))
#undef DAT_00006978
#define DAT_00006978 (*(uint8_t *)(0x6978U))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006850
#define _DAT_00006850 (*(code * *)(0x6850U))
#undef _DAT_00006978
#define _DAT_00006978 (*(code * *)(0x6978U))
#define local_48 (*(int *)(frame + 40))
#define local_44 (*(int *)(frame + 44))
#define local_40 (*(int *)(frame + 48))
#define local_3c (*(int *)(frame + 52))
#define local_38 (*(int *)(frame + 56))
#define local_34 (*(int *)(frame + 60))
#define local_30 (*(int *)(frame + 64))
#define local_2c (*(uint *)(frame + 68))
#define local_28 (*(uint *)(frame + 72))
#define local_24 (*(int *)(frame + 76))
#define local_20 (*(uint *)(frame + 80))
#define local_1c (*(int *)(frame + 84))
#define local_18 (*(int *)(frame + 88))
#define local_14 (*(int *)(frame + 92))
#define local_60 (*(int (*)[3])(frame + 16))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(uint *)(frame + 32))
#define local_4c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100092e0(int *in_ECX,int in_EDX,int param_3,int param_4,int param_5,int param_6,
                       int param_7,undefined4 param_8,int param_9)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  local_14 = in_EDX;
  recovered_100011e0(local_60,0,0x18);
  if (in_ECX == (int *)0x0) {
    return;
  }
  local_34 = param_4;
  if ((param_5 < 1 || param_4 < 1) || (param_6 == 0 || *in_ECX == 0)) {
    return;
  }
  if (_DAT_00006800 != 0x50414d57) {
    return;
  }
  if (_DAT_00006804 == 0) {
    return;
  }
  if (_DAT_00006808 < 0xc) {
    return;
  }
  if (_DAT_00006808 < 0x17c) {
    return;
  }
  if (_DAT_00006978 == (code *)0x0) {
    return;
  }
  iVar2 = (*_DAT_00006978)(param_6,0xffffffff,param_8,param_7 << 8 | 0xff,local_60);
  if (iVar2 == 0) {
    return;
  }
  local_24 = local_60[0];
  if (local_60[0] == 0) {
    return;
  }
  if (param_9 == 2) {
    local_18 = local_14;
    if ((int)local_54 < param_4) {
      local_18 = (param_4 + local_14) - local_54;
    }
  }
  else {
    local_18 = local_14;
    if (param_9 == 1) {
      if (param_4 - local_54 != 0 && (int)local_54 <= param_4) {
        local_18 = (int)(param_4 - local_54) / 2 + local_14;
      }
    }
  }
  iVar2 = param_3;
  if (param_5 - local_50 != 0 && (int)local_50 <= param_5) {
    if (local_50 == 0) goto LAB_100095ad;
    iVar2 = (int)(param_5 - local_50) / 2 + param_3;
  }
  local_44 = param_5 + param_3;
  local_34 = local_34 + local_14;
  local_40 = local_60[0] + 1;
  local_38 = local_18 * 4;
  uVar4 = 0;
  local_30 = iVar2;
  do {
    iVar1 = uVar4 + iVar2;
    if (param_3 <= iVar1) {
      if (-1 < iVar1 && iVar1 < local_44) {
        local_48 = iVar1;
        if (local_54 != 0 && iVar1 < in_ECX[2]) {
          uVar6 = 0;
          do {
            iVar5 = local_18 + uVar6;
            if ((((local_14 <= iVar5) && (-1 < iVar5 && iVar5 < local_34)) && (iVar5 < in_ECX[1]))
               && ((*in_ECX != 0 && (iVar1 < in_ECX[2])))) {
              local_1c = local_4c * uVar4 + local_40;
              uVar3 = (uint)*(byte *)(local_1c + 2 + uVar6 * 4);
              if (uVar3 != 0) {
                iVar5 = *in_ECX + local_38 + in_ECX[3] * local_30;
                if (uVar3 == 0xff) {
                  *(undefined1 *)(iVar5 + uVar6 * 4) = *(undefined1 *)(local_1c + -1 + uVar6 * 4);
                  *(undefined1 *)(iVar5 + 1 + uVar6 * 4) = *(undefined1 *)(local_1c + uVar6 * 4);
                  *(undefined1 *)(iVar5 + 2 + uVar6 * 4) = *(undefined1 *)(local_1c + 1 + uVar6 * 4)
                  ;
                }
                else {
                  local_20 = uVar3 ^ 0xff;
                  *(char *)(iVar5 + uVar6 * 4) =
                       (char)((ulonglong)
                              (*(byte *)(local_1c + -1 + uVar6 * 4) * uVar3 + 0x7f +
                              *(byte *)(iVar5 + uVar6 * 4) * local_20) * 0x1010102 >> 0x20);
                  *(char *)(iVar5 + 1 + uVar6 * 4) =
                       (char)((ulonglong)
                              (*(byte *)(local_1c + uVar6 * 4) * uVar3 + 0x7f +
                              *(byte *)(iVar5 + 1 + uVar6 * 4) * local_20) * 0x1010102 >> 0x20);
                  *(char *)(iVar5 + 2 + uVar6 * 4) =
                       (char)((ulonglong)
                              (*(byte *)(local_1c + 1 + uVar6 * 4) * uVar3 + 0x7f +
                              *(byte *)(iVar5 + 2 + uVar6 * 4) * local_20) * 0x1010102 >> 0x20);
                  local_28 = uVar3;
                }
                *(undefined1 *)(iVar5 + 3 + uVar6 * 4) = 0xff;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_54);
          local_2c = uVar4;
        }
      }
    }
    uVar4 = uVar4 + 1;
    local_30 = local_30 + 1;
    local_3c = iVar2;
  } while (uVar4 < local_50);
LAB_100095ad:
  if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
     ((0xb < _DAT_00006808 && ((0x53 < _DAT_00006808 && (_DAT_00006850 != (code *)0x0)))))) {
    (*_DAT_00006850)(local_60[0]);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006850
#undef DAT_00006978
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006850
#undef _DAT_00006978
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
#undef local_60
#undef local_54
#undef local_50
#undef local_4c

#define local_3c (*(int *)(frame + 20))
#define local_38 (*(int *)(frame + 24))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_14 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009600
 */

void recovered_10009600(int *in_ECX,int in_EDX_00,int param_3,int param_4,int param_5,int param_6,
                       char param_7)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;

  iVar7 = *(int *)(in_EDX_00 + 0x34);
  iVar1 = *(int *)(in_EDX_00 + 0x3c);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  local_14 = *(int *)(in_EDX_00 + 0x30);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  local_28 = 0;
  iVar3 = *(int *)(in_EDX_00 + 0x38);
  if (local_14 < 1) {
    local_14 = 0;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar1 = param_5 - (iVar1 + iVar7);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  local_20 = param_6 - (iVar3 + local_14);
  if (local_20 < 1) {
    local_20 = 0;
  }
  uVar10 = *(uint *)(in_EDX_00 + 0x10);
  iVar7 = iVar7 + param_3;
  local_14 = local_14 + param_4;
  iVar3 = iVar7;
  if (param_7 == '\0') {
    iVar3 = local_14;
  }
  if (1 < uVar10) {
    local_28 = (uVar10 - 1) * *(int *)(in_EDX_00 + 0x14);
  }
  if (uVar10 != 0 && *(int *)(in_EDX_00 + 0xc) != 0) {
    iVar4 = 0;
    iVar9 = 0;
    uVar8 = 0;
    do {
      if (*(int *)(*(int *)(in_EDX_00 + 0xc) + iVar4) == 4) {
        iVar9 = iVar9 + 1;
      }
      else {
        uVar11 = recovered_100080f0((undefined4 *)(*(int *)(in_EDX_00 + 0xc) + iVar4),iVar1,local_20
                                   );
        iVar2 = (int)uVar11;
        if (param_7 == '\0') {
          iVar2 = (int)((ulonglong)uVar11 >> 0x20);
        }
        local_28 = local_28 + iVar2;
        uVar10 = *(uint *)(in_EDX_00 + 0x10);
      }
      uVar8 = uVar8 + 1;
      iVar4 = iVar4 + 0x48;
    } while (uVar8 < uVar10);
    if (iVar9 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = iVar1;
      if (param_7 == '\0') {
        local_38 = local_20;
      }
      local_38 = local_38 - local_28;
      if (local_38 < 1) {
        local_38 = 0;
      }
      local_38 = local_38 / iVar9;
    }
    if (uVar10 != 0) {
      iVar4 = 0;
      uVar10 = 0;
      do {
        iVar9 = *(int *)(in_EDX_00 + 0xc);
        in_EDX = (int *)(iVar9 + iVar4);
        uVar12 = recovered_100080f0(in_EDX,iVar1,local_20);
        iVar9 = *(int *)(iVar9 + iVar4);
        uVar11 = CONCAT44(local_20,iVar1);
        if (iVar9 != 4) {
          uVar11 = uVar12;
        }
        iVar5 = (int)((ulonglong)uVar11 >> 0x20);
        iVar6 = (int)uVar11;
        iVar2 = local_38;
        if (param_7 == '\0') {
          iVar5 = *(int *)(in_EDX_00 + 0x18);
          local_24 = iVar1;
          if (iVar5 != 3) {
            local_24 = iVar6;
          }
          if (iVar9 != 4) {
            iVar2 = (int)((ulonglong)uVar12 >> 0x20);
          }
          iVar9 = iVar3;
          local_3c = iVar2;
          if ((iVar5 == 1) && (local_24 < iVar1)) {
            iVar6 = (iVar1 - iVar6) / 2 + iVar7;
            goto LAB_10009775;
          }
          if (local_24 < iVar1) {
            iVar6 = (iVar7 + iVar1) - iVar6;
          }
          else {
            iVar6 = iVar7;
          }
          if (iVar5 != 2) {
            iVar6 = iVar7;
          }
        }
        else {
          if (iVar9 != 4) {
            iVar2 = (int)uVar12;
          }
          iVar6 = *(int *)(in_EDX_00 + 0x18);
          local_3c = local_20;
          if (iVar6 != 3) {
            local_3c = iVar5;
          }
          if ((iVar6 == 1) && (local_3c < local_20)) {
            iVar9 = (local_20 - iVar5) / 2 + local_14;
          }
          else {
            iVar9 = local_14;
            if (local_3c < local_20) {
              iVar9 = (local_14 + local_20) - iVar5;
            }
            if (iVar6 != 2) {
              iVar9 = local_14;
            }
          }
          iVar6 = iVar3;
          local_24 = iVar2;
LAB_10009775:
        }
        iVar3 = iVar3 + iVar2 + *(int *)(in_EDX_00 + 0x14);
        recovered_10008770(in_ECX,in_EDX,iVar6,iVar9,local_24,local_3c);
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x48;
      } while (uVar10 < *(uint *)(in_EDX_00 + 0x10));
    }
  }
  return;
}

#undef local_3c
#undef local_38
#undef local_28
#undef local_24
#undef local_20
#undef local_14
/* TerrorUI value operations */
PFUIInsets pf_ui_insets(int32_t all){return (PFUIInsets){all,all,all,all};}
PFUIInsets pf_ui_insets_xy(int32_t x,int32_t y){return (PFUIInsets){y,x,y,x};}
PFUIInsets pf_ui_insets_make(int32_t t,int32_t r,int32_t b,int32_t l){return (PFUIInsets){t,r,b,l};}
PFUIView pf_ui_view_empty(void){PFUIView v={0};v.alignment=1;v.foreground=0x202020;v.background=0xf6f6f6;v.scale=1;return v;}
PFUIView pf_ui_text(uintptr_t text){PFUIView v=pf_ui_view_empty();v.type=1;v.text=text;return v;}
PFUIView pf_ui_rectangle(uint32_t color){PFUIView v=pf_ui_view_empty();v.type=2;v.background=color;v.flags=2;return v;}
PFUIView pf_ui_spacer(void){PFUIView v=pf_ui_view_empty();v.type=4;return v;}
PFUIView pf_ui_button(uintptr_t text,uintptr_t callback,uintptr_t userdata){PFUIView v=pf_ui_text(text);v.type=3;v.callback=callback;v.userdata=userdata;return v;}
PFUIView pf_ui_hstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_view_empty();v.type=5;v.children=children;v.count=count;v.spacing=spacing;return v;}
PFUIView pf_ui_vstack(uintptr_t children,uint32_t count,int32_t spacing){PFUIView v=pf_ui_hstack(children,count,spacing);v.type=6;return v;}
PFUIView pf_ui_zstack(uintptr_t children,uint32_t count){PFUIView v=pf_ui_hstack(children,count,0);v.type=7;return v;}
PFUIView pf_ui_view_padding(PFUIView v,PFUIInsets padding){v.padding=padding;return v;}
PFUIView pf_ui_view_foreground(PFUIView v,uint32_t color){v.foreground=color;v.flags|=1;return v;}
PFUIView pf_ui_view_background(PFUIView v,uint32_t color){v.background=color;v.flags|=2;return v;}
PFUIView pf_ui_view_frame(PFUIView v,int32_t width,int32_t height){if(width>=0){v.flags|=4;v.width=width;}if(height>=0){v.flags|=8;v.height=height;}return v;}
PFUIView pf_ui_view_text_scale(PFUIView v,uint32_t scale){v.scale=scale?scale:1;return v;}
PFUIView pf_ui_view_alignment(PFUIView v,uint32_t alignment){v.alignment=alignment<4?alignment:1;return v;}
PFUIWindowSpec pf_ui_window_spec(uintptr_t title,uint32_t width,uint32_t height){PFUIWindowSpec s={0};s.title=title;s.width=width;s.height=height;s.stride=width*4;s.background=0xf6f6f6;s.transparency=~0U;s.shadow=~0U;s.mode=-1;return s;}
PFUIWindowSpec pf_ui_window_spec_transparency(PFUIWindowSpec s,uint32_t value){s.transparency=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_shadow(PFUIWindowSpec s,uint32_t value){s.shadow=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_mode(PFUIWindowSpec s,int32_t mode,uint32_t amount){s.mode=(uint32_t)mode+1<5?mode:-1;s.amount=amount<100?amount:100;return s;}
PFUIWindowSpec pf_ui_window_spec_solid(PFUIWindowSpec s){s.mode=0;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_clear(PFUIWindowSpec s){s.mode=1;s.amount=0;return s;}
PFUIWindowSpec pf_ui_window_spec_blur(PFUIWindowSpec s,uint32_t value){s.mode=2;s.amount=value<100?value:100;return s;}
PFUIWindowSpec pf_ui_window_spec_refract(PFUIWindowSpec s,uint32_t value){s.mode=3;s.amount=value<100?value:100;return s;}

/* Explicit service wrappers preserve arguments across native tail calls. */
static uintptr_t pf_ui_service(uint32_t offset){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x6800U;
#endif
 if(api[0]!=0x50414d57U||!api[1]||api[2]<offset+4)return 0;
 return api[offset/4];
}
uint32_t pf_ui_window_configure(uint32_t id,int32_t x,int32_t y,uint32_t a,uint32_t b){uintptr_t fn=pf_ui_service(0xb0);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t,uint32_t))fn)(id,x,y,a,b):0;}
uint32_t pf_ui_window_list(void *records,uint32_t capacity,void *count){uintptr_t fn=pf_ui_service(0xac);return fn?((uint32_t(*)(void*,uint32_t,void*))fn)(records,capacity,count):0;}
uint32_t pf_ui_window_menu_command(uint32_t id,uint32_t menu,uint32_t command){uintptr_t fn=pf_ui_service(0xf0);return fn?((uint32_t(*)(uint32_t,uint32_t,uint32_t))fn)(id,menu,command):0;}
uint32_t pf_ui_window_pointer_event(uint32_t id,int32_t x,int32_t y,uint32_t buttons){uintptr_t fn=pf_ui_service(0xfc);return fn?((uint32_t(*)(uint32_t,int32_t,int32_t,uint32_t))fn)(id,x,y,buttons):0;}
uint32_t pf_ui_window_pointer_state(uint32_t *window,void *state){uintptr_t fn=pf_ui_service(0x100);return window&&*window&&state&&fn?((uint32_t(*)(uint32_t,void*))fn)(*window,state):0;}
uint32_t pf_ui_window_focus(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,14,10);}
uint32_t pf_ui_window_request_close(uint32_t id,int32_t x,int32_t y){return pf_ui_window_configure(id,x,y,1,1);}
