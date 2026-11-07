/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b080
#define DAT_1000b080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad0
 */

void recovered_10000ad0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b080 = 0;
  recovered_10000ae0();
  return;
}

#undef DAT_1000b080

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
#undef DAT_1000b080
#define DAT_1000b080 (*(char *)(((uintptr_t)pf_module_state + 0x171bU)))
#undef DAT_1000b084
#define DAT_1000b084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x171fU)))
#undef DAT_1000b088
#define DAT_1000b088 (*(int *)(((uintptr_t)pf_module_state + 0x1723U)))
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
 * Address: 0x10000ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000ae0(void)

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
  if (DAT_1000b080 != '\0') {
    return;
  }
  DAT_1000b084 = 0;
  DAT_1000b088 = 0;
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
              if (auStack_a4[uVar2 * 2] <= uVar10) goto LAB_10000b3b;
              uVar1 = auStack_a4[uVar2 * 2];
              auStack_a4[uVar2 * 2 + 3] = auStack_a4[uVar2 * 2 + 1];
              auStack_a4[uVar2 * 2 + 2] = uVar1;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar2 = 0;
          }
LAB_10000b3b:
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
        if (iVar9 == 0) goto LAB_10000c80;
      }
      puVar3 = auStack_a4 + 3;
      do {
        recovered_10003e80(puVar3[-1],*puVar3,&local_14);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000b084 != 0) goto LAB_10000d86;
    }
  }
LAB_10000c80:
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
      puVar6 = &DAT_1000b084;
      if (DAT_1000b084 != 0) {
        puVar6 = (undefined4 *)(local_14 + 4);
      }
      *puVar6 = 0x300000;
      if (DAT_1000b088 == 0) {
        DAT_1000b080 = 1;
        DAT_1000b088 = 0x300000;
        return;
      }
      DAT_1000b080 = 1;
      return;
    }
  }
  else {
    _DAT_00300000 = 0x14ffff0;
    _DAT_00300004 = 0;
    _DAT_00300008 = local_14;
    DAT_0030000c = 1;
    puVar6 = &DAT_1000b084;
    if (DAT_1000b084 != 0) {
      puVar6 = (undefined4 *)(local_14 + 4);
    }
    *puVar6 = 0x300000;
    if (DAT_1000b088 == 0) {
      DAT_1000b088 = 0x300000;
    }
    if ((0x2000000 < uVar7) && (0x20 < (uVar7 & 0xfffffff0) + 0xfe000000)) {
      _DAT_02000000 = (uVar7 & 0xfffffff0) + 0xfdfffff0;
      _DAT_02000004 = 0;
      _DAT_02000008 = 0x300000;
      DAT_0200000c = 1;
      puVar6 = &DAT_1000b084;
      if (DAT_1000b084 != 0) {
        puVar6 = (undefined4 *)&DAT_00300004;
      }
      *puVar6 = 0x2000000;
      if (DAT_1000b088 == 0) {
        DAT_1000b080 = 1;
        DAT_1000b088 = 0x2000000;
        return;
      }
      DAT_1000b080 = 1;
      return;
    }
  }
LAB_10000d86:
  if (DAT_1000b088 == 0) {
    DAT_1000b088 = DAT_1000b084;
    DAT_1000b080 = 1;
    return;
  }
  DAT_1000b080 = 1;
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
#undef DAT_1000b080
#undef DAT_1000b084
#undef DAT_1000b088
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

#undef DAT_1000b084
#define DAT_1000b084 (*(int * *)(((uintptr_t)pf_module_state + 0x171fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e00
 */

int recovered_10000e00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10000ae0();
  iVar1 = 0;
  for (piVar2 = DAT_1000b084; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1000b084

#undef DAT_1000b084
#define DAT_1000b084 (*(int *)(((uintptr_t)pf_module_state + 0x171fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e40
 */

void recovered_10000e40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000ae0();
  for (iVar1 = DAT_1000b084; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000b084

#undef DAT_1000b084
#define DAT_1000b084 (*(int * *)(((uintptr_t)pf_module_state + 0x171fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

int recovered_10000e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_10000ae0();
  iVar2 = 0;
  for (piVar1 = DAT_1000b084; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1000b084

#undef DAT_1000b084
#define DAT_1000b084 (*(int *)(((uintptr_t)pf_module_state + 0x171fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb0
 */

void recovered_10000eb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10000ae0();
  for (iVar1 = DAT_1000b084; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000b084

#undef DAT_1000b084
#define DAT_1000b084 (*(uint * *)(((uintptr_t)pf_module_state + 0x171fU)))
#undef DAT_1000b088
#define DAT_1000b088 (*(uint * *)(((uintptr_t)pf_module_state + 0x1723U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ef0
 */

uint * recovered_10000ef0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;

  if (param_1 != 0) {
    recovered_10000ae0();
    puVar4 = DAT_1000b084;
    if (DAT_1000b088 != (uint *)0x0) {
      puVar4 = DAT_1000b088;
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
            DAT_1000b088 = DAT_1000b084;
            *(undefined1 *)(puVar3 + 3) = 0;
            if (puVar4 != (uint *)0x0) {
              DAT_1000b088 = puVar4;
            }
            return puVar3 + 4;
          }
        }
        puVar1 = puVar3 + 1;
        puVar3 = DAT_1000b084;
        if ((uint *)*puVar1 != (uint *)0x0) {
          puVar3 = (uint *)*puVar1;
        }
      } while ((puVar3 != (uint *)0x0) && (puVar3 != puVar4));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000b084
#undef DAT_1000b088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb0
 */

longlong recovered_10000fb0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10000ff0
 */

ulonglong recovered_10000ff0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001030
 */

undefined8 recovered_10001030(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001080
 */

undefined8 recovered_10001080(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001160
 */

undefined8 recovered_10001160(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100011d0
 */

undefined8 recovered_100011d0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001310
 */

undefined8 recovered_10001310(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100013d0
 */

void recovered_100013d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f0
 */

int recovered_100013f0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001410(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001450(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001490(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014d0
 */

void recovered_100014d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_100014f7;
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
LAB_100014f7:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001590
 */

undefined4 * recovered_10001590(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10001760
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_10001760(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x10001810
 */

void recovered_10001810(undefined4 *param_1,uint param_2)

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
 * Address: 0x100018b0
 */

void recovered_100018b0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10001950
 */

int recovered_10001950(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_100019ee;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_10001a05;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10001a36:
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
      if (uVar7 != uVar8) goto LAB_10001a36;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10001a36;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10001a36;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10001a80((char *)param_1,(char *)param_2);
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100019ee:
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
LAB_10001a05:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a80
 */

int recovered_10001a80(char *in_ECX,char *in_EDX)

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
 * Address: 0x10001ac0
 */

bool recovered_10001ac0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae0
 */

bool recovered_10001ae0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b00
 */

bool recovered_10001b00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b20
 */

bool recovered_10001b20(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b50
 */

bool recovered_10001b50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b70
 */

bool recovered_10001b70(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b90
 */

int recovered_10001b90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb0
 */

int recovered_10001bb0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

int recovered_10001bd0(int param_1)

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
 * Address: 0x10001c00
 */

int recovered_10001c00(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10001c36;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001c36:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c40
 */

int recovered_10001c40(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c80
 */

void recovered_10001c80(int param_1,int param_2)

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
 * Address: 0x10001ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10001ca0(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10001db1;
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
LAB_10001db1:
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
 * Address: 0x10001de0
 */

char * recovered_10001de0(char *param_1,char param_2)

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
 * Address: 0x10001e20
 */

int recovered_10001e20(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_10001e5b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_10001e5b;
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
 * Address: 0x10001e70
 */

char * recovered_10001e70(char *param_1,char *param_2)

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
 * Address: 0x10001ec0
 */

char * recovered_10001ec0(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10001f03;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001f03:
  return pcVar3;
}


#undef DAT_10009d50
#define DAT_10009d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ebU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f10
 */

undefined * recovered_10001f10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10009d50;
}

#undef DAT_10009d50

#undef PTR_DAT_1000b010
#define PTR_DAT_1000b010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x16abU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

undefined ** recovered_10001f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000b010;
}

#undef PTR_DAT_1000b010

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
#define local_c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f30(undefined4 *param_1)

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
#undef local_c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001fc0(double param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_10009990;
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

#undef DAT_10009990
#undef _DAT_10009990

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001ff0(double param_1,int *param_2)

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
        dVar1 = dVar1 * (double)_DAT_10009990;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_10009990 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_10009990);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_10009990
#undef _DAT_10009990

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020d0
 */

uchar recovered_100020d0(uint param_1,undefined4 in_stack_00000008,double in_stack_0000000c)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = '\0';
  if ((in_stack_0000000c != 0.0) || (NAN(in_stack_0000000c))) {
    uVar1 = (uchar)(int)ROUND(pf_bits_double(CONCAT44(in_stack_00000008,param_1)) / in_stack_0000000c);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002130
 */

longdouble recovered_10002130(double param_1,double param_2)

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
 * Address: 0x100021d0
 */

longdouble recovered_100021d0(double param_1)

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
 * Address: 0x10002220
 */

longdouble recovered_10002220(double param_1)

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
 * Address: 0x10002280
 */

void recovered_10002280(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_10009994
#define DAT_10009994 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10009998
#define DAT_10009998 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000999c
#define DAT_1000999c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_100099a0
#define DAT_100099a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_100099a4
#define DAT_100099a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_100099a8
#define DAT_100099a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_100099ac
#define DAT_100099ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_100099b0
#define DAT_100099b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_100099b4
#define DAT_100099b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_100099b8
#define DAT_100099b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_100099bc
#define DAT_100099bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_100099c0
#define DAT_100099c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_100099e8
#define DAT_100099e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009994
#define _DAT_10009994 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef _DAT_10009998
#define _DAT_10009998 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef _DAT_1000999c
#define _DAT_1000999c (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef _DAT_100099a0
#define _DAT_100099a0 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_100099a4
#define _DAT_100099a4 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_100099a8
#define _DAT_100099a8 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_100099ac
#define _DAT_100099ac (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_100099b0
#define _DAT_100099b0 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef _DAT_100099b4
#define _DAT_100099b4 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_100099b8
#define _DAT_100099b8 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef _DAT_100099bc
#define _DAT_100099bc (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef _DAT_100099c0
#define _DAT_100099c0 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef _DAT_100099e8
#define _DAT_100099e8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002380(double param_1)

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
    lVar2 = (longdouble)_DAT_10009994;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_10009998 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_10009990;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_10009998 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_1000999c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_1000999c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_100099c0 +
            lVar9 / (longdouble)_DAT_100099bc +
            lVar8 / (longdouble)_DAT_100099b8 +
            lVar7 / (longdouble)_DAT_100099b4 +
            lVar6 / (longdouble)_DAT_100099b0 +
            lVar5 / (longdouble)_DAT_100099ac +
            lVar4 / (longdouble)_DAT_100099a8 +
            lVar3 / (longdouble)_DAT_100099a4 +
            (lVar10 * lVar2) / (longdouble)_DAT_100099a0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_100099e8;
  }
  return lVar2;
}

#undef DAT_10009990
#undef DAT_10009994
#undef DAT_10009998
#undef DAT_1000999c
#undef DAT_100099a0
#undef DAT_100099a4
#undef DAT_100099a8
#undef DAT_100099ac
#undef DAT_100099b0
#undef DAT_100099b4
#undef DAT_100099b8
#undef DAT_100099bc
#undef DAT_100099c0
#undef DAT_100099e8
#undef _DAT_10009990
#undef _DAT_10009994
#undef _DAT_10009998
#undef _DAT_1000999c
#undef _DAT_100099a0
#undef _DAT_100099a4
#undef _DAT_100099a8
#undef _DAT_100099ac
#undef _DAT_100099b0
#undef _DAT_100099b4
#undef _DAT_100099b8
#undef _DAT_100099bc
#undef _DAT_100099c0
#undef _DAT_100099e8

#undef DAT_10009a10
#define DAT_10009a10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024a0
 */

longlong recovered_100024a0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10009a10 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10009a10

#undef DAT_100099c4
#define DAT_100099c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_100099c8
#define DAT_100099c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_100099cc
#define DAT_100099cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_100099f0
#define DAT_100099f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef DAT_100099f8
#define DAT_100099f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_10009a00
#define DAT_10009a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10009a08
#define DAT_10009a08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef _DAT_100099c4
#define _DAT_100099c4 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef _DAT_100099c8
#define _DAT_100099c8 (*(float *)(((uintptr_t)pf_module_state + 0x63U)))
#undef _DAT_100099cc
#define _DAT_100099cc (*(float *)(((uintptr_t)pf_module_state + 0x67U)))
#undef _DAT_100099f0
#define _DAT_100099f0 (*(double *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_100099f8
#define _DAT_100099f8 (*(double *)(((uintptr_t)pf_module_state + 0x93U)))
#undef _DAT_10009a00
#define _DAT_10009a00 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10009a08
#define _DAT_10009a08 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100024f0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_100099f0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100099f8;
    } while ((longdouble)_DAT_100099f0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10009a00) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009a08;
    } while (lVar1 < (longdouble)_DAT_10009a00);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_100099cc +
         (lVar2 * lVar2) / (longdouble)_DAT_100099c8 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_100099c4) * lVar1;
}

#undef DAT_100099c4
#undef DAT_100099c8
#undef DAT_100099cc
#undef DAT_100099f0
#undef DAT_100099f8
#undef DAT_10009a00
#undef DAT_10009a08
#undef _DAT_100099c4
#undef _DAT_100099c8
#undef _DAT_100099cc
#undef _DAT_100099f0
#undef _DAT_100099f8
#undef _DAT_10009a00
#undef _DAT_10009a08

#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_100099d4
#define DAT_100099d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_100099d8
#define DAT_100099d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_100099f0
#define DAT_100099f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef DAT_100099f8
#define DAT_100099f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_10009a00
#define DAT_10009a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10009a08
#define DAT_10009a08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_100099d4
#define _DAT_100099d4 (*(float *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef _DAT_100099d8
#define _DAT_100099d8 (*(float *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_100099f0
#define _DAT_100099f0 (*(double *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_100099f8
#define _DAT_100099f8 (*(double *)(((uintptr_t)pf_module_state + 0x93U)))
#undef _DAT_10009a00
#define _DAT_10009a00 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10009a08
#define _DAT_10009a08 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002590(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_100099f0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_100099f8;
    } while ((longdouble)_DAT_100099f0 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10009a00) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10009a08;
    } while (lVar1 < (longdouble)_DAT_10009a00);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_100099d8 +
         (lVar1 * lVar1) / (longdouble)_DAT_100099d4 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_100099d0;
}

#undef DAT_100099d0
#undef DAT_100099d4
#undef DAT_100099d8
#undef DAT_100099f0
#undef DAT_100099f8
#undef DAT_10009a00
#undef DAT_10009a08
#undef _DAT_100099d0
#undef _DAT_100099d4
#undef _DAT_100099d8
#undef _DAT_100099f0
#undef _DAT_100099f8
#undef _DAT_10009a00
#undef _DAT_10009a08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002630
 */

void recovered_10002630(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099dc
#define DAT_100099dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77U)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099dc
#define _DAT_100099dc (*(float *)(((uintptr_t)pf_module_state + 0x77U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002650
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002650(double param_1)

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
    dVar3 = (double)_DAT_100099dc;
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
      dVar3 = dVar3 * (double)_DAT_10009990;
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

#undef DAT_10009990
#undef DAT_100099dc
#undef _DAT_10009990
#undef _DAT_100099dc

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099dc
#define DAT_100099dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x77U)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099dc
#define _DAT_100099dc (*(float *)(((uintptr_t)pf_module_state + 0x77U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002730(double param_1)

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
    dVar2 = (double)_DAT_100099dc;
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
      dVar2 = dVar2 * (double)_DAT_10009990;
      bVar10 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar4,uVar7);
}

#undef DAT_10009990
#undef DAT_100099dc
#undef _DAT_10009990
#undef _DAT_100099dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027e0
 */

longdouble recovered_100027e0(uint param_1,uint param_2)

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
 * Address: 0x10002850
 */

longdouble recovered_10002850(uint param_1,uint param_2)

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
 * Address: 0x10002900
 */

void recovered_10002900(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002960(float param_1,int *param_2)

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
        lVar3 = lVar3 * (longdouble)_DAT_10009990;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_10009990 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_10009990);
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

#undef DAT_10009990
#undef _DAT_10009990

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002a50(float param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_10009990;
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

#undef DAT_10009990
#undef _DAT_10009990

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

longdouble recovered_10002a90(float param_1,float param_2)

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
 * Address: 0x10002b30
 */

longdouble recovered_10002b30(float param_1)

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
 * Address: 0x10002b80
 */

longdouble recovered_10002b80(float param_1)

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
 * Address: 0x10002bf0
 */

longdouble recovered_10002bf0(double param_1)

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
 * Address: 0x10002c60
 */

longdouble recovered_10002c60(float param_1)

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
 * Address: 0x10002ce0
 */

longdouble recovered_10002ce0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002280();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_10009994
#define DAT_10009994 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef DAT_10009998
#define DAT_10009998 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33U)))
#undef DAT_1000999c
#define DAT_1000999c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37U)))
#undef DAT_100099a0
#define DAT_100099a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef DAT_100099a4
#define DAT_100099a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef DAT_100099a8
#define DAT_100099a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x43U)))
#undef DAT_100099ac
#define DAT_100099ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x47U)))
#undef DAT_100099b0
#define DAT_100099b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef DAT_100099b4
#define DAT_100099b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef DAT_100099b8
#define DAT_100099b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53U)))
#undef DAT_100099bc
#define DAT_100099bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57U)))
#undef DAT_100099c0
#define DAT_100099c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef DAT_100099e8
#define DAT_100099e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x83U)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_10009994
#define _DAT_10009994 (*(float *)(((uintptr_t)pf_module_state + 0x2fU)))
#undef _DAT_10009998
#define _DAT_10009998 (*(float *)(((uintptr_t)pf_module_state + 0x33U)))
#undef _DAT_1000999c
#define _DAT_1000999c (*(float *)(((uintptr_t)pf_module_state + 0x37U)))
#undef _DAT_100099a0
#define _DAT_100099a0 (*(float *)(((uintptr_t)pf_module_state + 0x3bU)))
#undef _DAT_100099a4
#define _DAT_100099a4 (*(float *)(((uintptr_t)pf_module_state + 0x3fU)))
#undef _DAT_100099a8
#define _DAT_100099a8 (*(float *)(((uintptr_t)pf_module_state + 0x43U)))
#undef _DAT_100099ac
#define _DAT_100099ac (*(float *)(((uintptr_t)pf_module_state + 0x47U)))
#undef _DAT_100099b0
#define _DAT_100099b0 (*(float *)(((uintptr_t)pf_module_state + 0x4bU)))
#undef _DAT_100099b4
#define _DAT_100099b4 (*(float *)(((uintptr_t)pf_module_state + 0x4fU)))
#undef _DAT_100099b8
#define _DAT_100099b8 (*(float *)(((uintptr_t)pf_module_state + 0x53U)))
#undef _DAT_100099bc
#define _DAT_100099bc (*(float *)(((uintptr_t)pf_module_state + 0x57U)))
#undef _DAT_100099c0
#define _DAT_100099c0 (*(float *)(((uintptr_t)pf_module_state + 0x5bU)))
#undef _DAT_100099e8
#define _DAT_100099e8 (*(double *)(((uintptr_t)pf_module_state + 0x83U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002d00(float param_1)

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

  fVar1 = _DAT_10009994;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_10009998 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_10009990;
        iVar10 = iVar10 + 1;
      } while (_DAT_10009998 < param_1);
    }
    for (; param_1 < _DAT_1000999c; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_100099c0 +
            fVar9 / _DAT_100099bc +
            fVar8 / _DAT_100099b8 +
            fVar7 / _DAT_100099b4 +
            fVar6 / _DAT_100099b0 +
            fVar5 / _DAT_100099ac +
            fVar4 / _DAT_100099a8 +
            fVar3 / _DAT_100099a4 + (fVar1 * fVar2) / _DAT_100099a0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_100099e8;
  }
  return (longdouble)fVar1;
}

#undef DAT_10009990
#undef DAT_10009994
#undef DAT_10009998
#undef DAT_1000999c
#undef DAT_100099a0
#undef DAT_100099a4
#undef DAT_100099a8
#undef DAT_100099ac
#undef DAT_100099b0
#undef DAT_100099b4
#undef DAT_100099b8
#undef DAT_100099bc
#undef DAT_100099c0
#undef DAT_100099e8
#undef _DAT_10009990
#undef _DAT_10009994
#undef _DAT_10009998
#undef _DAT_1000999c
#undef _DAT_100099a0
#undef _DAT_100099a4
#undef _DAT_100099a8
#undef _DAT_100099ac
#undef _DAT_100099b0
#undef _DAT_100099b4
#undef _DAT_100099b8
#undef _DAT_100099bc
#undef _DAT_100099c0
#undef _DAT_100099e8

#undef DAT_10009a10
#define DAT_10009a10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

undefined4 recovered_10002e30(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10009a10 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_10009a10
#undef local_14

#undef DAT_100099c4
#define DAT_100099c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef DAT_100099c8
#define DAT_100099c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63U)))
#undef DAT_100099cc
#define DAT_100099cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67U)))
#undef DAT_100099f0
#define DAT_100099f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef DAT_100099f8
#define DAT_100099f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_10009a00
#define DAT_10009a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10009a08
#define DAT_10009a08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef _DAT_100099c4
#define _DAT_100099c4 (*(float *)(((uintptr_t)pf_module_state + 0x5fU)))
#undef _DAT_100099c8
#define _DAT_100099c8 (*(float *)(((uintptr_t)pf_module_state + 0x63U)))
#undef _DAT_100099cc
#define _DAT_100099cc (*(float *)(((uintptr_t)pf_module_state + 0x67U)))
#undef _DAT_100099f0
#define _DAT_100099f0 (*(double *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_100099f8
#define _DAT_100099f8 (*(double *)(((uintptr_t)pf_module_state + 0x93U)))
#undef _DAT_10009a00
#define _DAT_10009a00 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10009a08
#define _DAT_10009a08 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002e80(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_100099f0 < param_1; param_1 = param_1 + (float)_DAT_100099f8) {
  }
  for (; param_1 < (float)_DAT_10009a00; param_1 = param_1 + (float)_DAT_10009a08) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_100099cc +
          (fVar1 * fVar1) / _DAT_100099c8 + fVar1 / _DAT_100099c4 + 1.0) * param_1);
}

#undef DAT_100099c4
#undef DAT_100099c8
#undef DAT_100099cc
#undef DAT_100099f0
#undef DAT_100099f8
#undef DAT_10009a00
#undef DAT_10009a08
#undef _DAT_100099c4
#undef _DAT_100099c8
#undef _DAT_100099cc
#undef _DAT_100099f0
#undef _DAT_100099f8
#undef _DAT_10009a00
#undef _DAT_10009a08

#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_100099d4
#define DAT_100099d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef DAT_100099d8
#define DAT_100099d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x73U)))
#undef DAT_100099f0
#define DAT_100099f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef DAT_100099f8
#define DAT_100099f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x93U)))
#undef DAT_10009a00
#define DAT_10009a00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef DAT_10009a08
#define DAT_10009a08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa3U)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_100099d4
#define _DAT_100099d4 (*(float *)(((uintptr_t)pf_module_state + 0x6fU)))
#undef _DAT_100099d8
#define _DAT_100099d8 (*(float *)(((uintptr_t)pf_module_state + 0x73U)))
#undef _DAT_100099f0
#define _DAT_100099f0 (*(double *)(((uintptr_t)pf_module_state + 0x8bU)))
#undef _DAT_100099f8
#define _DAT_100099f8 (*(double *)(((uintptr_t)pf_module_state + 0x93U)))
#undef _DAT_10009a00
#define _DAT_10009a00 (*(double *)(((uintptr_t)pf_module_state + 0x9bU)))
#undef _DAT_10009a08
#define _DAT_10009a08 (*(double *)(((uintptr_t)pf_module_state + 0xa3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002f20(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  for (; (float)_DAT_100099f0 < param_1; param_1 = param_1 + (float)_DAT_100099f8) {
  }
  for (; param_1 < (float)_DAT_10009a00; param_1 = param_1 + (float)_DAT_10009a08) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_100099d8 +
         (fVar1 * fVar1) / _DAT_100099d4 + fVar1 * _DAT_100099d0 + 1.0);
}

#undef DAT_100099d0
#undef DAT_100099d4
#undef DAT_100099d8
#undef DAT_100099f0
#undef DAT_100099f8
#undef DAT_10009a00
#undef DAT_10009a08
#undef _DAT_100099d0
#undef _DAT_100099d4
#undef _DAT_100099d8
#undef _DAT_100099f0
#undef _DAT_100099f8
#undef _DAT_10009a00
#undef _DAT_10009a08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fc0
 */

void recovered_10002fc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fe0
 */

int recovered_10002fe0(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000310c:
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
    if (param_3 <= uVar7) goto LAB_1000310c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003130
 */

int recovered_10003130(byte *param_1,undefined4 *param_2,uint param_3)

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
LAB_1000325c:
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
    if (param_3 <= uVar7) goto LAB_1000325c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099e0
#define DAT_100099e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099e0
#define _DAT_100099e0 (*(float *)(((uintptr_t)pf_module_state + 0x7bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10003280(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)_DAT_100099e0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_100099e0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_100099e0;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003341;
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
LAB_10003341:
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
              lVar10 = lVar10 * (longdouble)_DAT_10009990;
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

#undef DAT_10009990
#undef DAT_100099e0
#undef _DAT_10009990
#undef _DAT_100099e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003420
 */

longdouble recovered_10003420(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003280(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_100099e0
#define DAT_100099e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef _DAT_100099e0
#define _DAT_100099e0 (*(float *)(((uintptr_t)pf_module_state + 0x7bU)))
#undef str_10009d5c
#define str_10009d5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f7U)))
#undef str_10009d6d
#define str_10009d6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#define iStack_70 (*(int *)(frame + 112))
#define iStack_6c (*(int *)(frame + 116))
#define iStack_68 (*(int *)(frame + 120))
#define iStack_64 (*(int *)(frame + 124))
#define iStack_60 (*(int *)(frame + 128))
#define iStack_5c (*(int *)(frame + 132))
#define iStack_58 (*(int *)(frame + 136))
#define iStack_54 (*(int *)(frame + 140))
#define uStack_50 (*(uint *)(frame + 144))
#define uStack_4a (*(ushort *)(frame + 150))
#define uStack_48 (*(ushort *)(frame + 152))
#define uStack_46 (*(ushort *)(frame + 154))
#define uStack_44 (*(ushort *)(frame + 156))
#define uStack_42 (*(ushort *)(frame + 158))
#define uStack_40 (*(ushort *)(frame + 160))
#define uStack_3e (*(ushort *)(frame + 162))
#define uStack_28 (*(uint *)(frame + 184))
#define uStack_24 (*(uint *)(frame + 188))
#define pbStack_20 (*(byte * *)(frame + 192))
#define local_3c (*(byte * *)(frame + 164))
#define local_1c (*(uint *)(frame + 196))
#define local_18 (*(double * *)(frame + 200))
#define local_14 (*(int *)(frame + 204))
#define abStack_c5 (*(byte (*)[65])(frame + 27))
#define uStack_84 (*(uint *)(frame + 92))
#define iStack_80 (*(int *)(frame + 96))
#define uStack_7c (*(uint *)(frame + 100))
#define iStack_78 (*(int *)(frame + 104))
#define iStack_74 (*(int *)(frame + 108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10003450(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
  pbStack_20 = param_1;
  do {
    bVar7 = *param_3;
    if (bVar7 != 0x25) {
      if (bVar7 == 0) {
        if (param_2 != 0) {
          *pbStack_20 = 0;
        }
        return local_14;
      }
      if (1 < local_1c) {
        *pbStack_20 = bVar7;
        pbStack_20 = pbStack_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3;
      goto LAB_10003483;
    }
    bVar7 = param_3[1];
    if (bVar7 == 0x25) {
      if (1 < local_1c) {
        *pbStack_20 = 0x25;
        pbStack_20 = pbStack_20 + 1;
        local_1c = local_1c - 1;
      }
      local_3c = param_3 + 1;
      goto LAB_10003483;
    }
    local_3c = param_3 + 2;
    while( true ) {
      uVar9 = bVar7 - 0x20;
      if (0x10 < uVar9) break;
      if ((0x12809U >> (uVar9 & 0x1f) & 1) == 0) {
        if (uVar9 == 10) {
          local_18 = (double *)((int)local_18 + 4);
          bVar7 = *local_3c;
          if (bVar7 != 0x2e) goto LAB_10003562;
          goto LAB_10003537;
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
LAB_10003537:
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
LAB_10003562:
    bVar16 = false;
    switch((uintptr_t)(bVar7)) {
    case 0x4c:
      local_3c = local_3c + 1;
      cVar8 = '\b';
      bVar16 = true;
      goto LAB_100035d1;
    default:
      cVar8 = '\0';
      goto LAB_100035d1;
    case 0x68:
      pbVar5 = local_3c + 1;
      pbVar1 = local_3c + 1;
      local_3c = local_3c + 2;
      if (*pbVar1 != 0x68) {
        local_3c = pbVar5;
      }
      cVar8 = (*pbVar1 != 0x68) + '\x01';
      bVar16 = false;
      goto LAB_100035d1;
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
LAB_100035d1:
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
        goto code_r0x100037d8;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar9 = (int)uVar10 >> 0x1f;
code_r0x100037d8:
      if ((int)uVar9 < 0) {
        if (1 < local_1c) {
          *pbStack_20 = 0x2d;
          pbStack_20 = pbStack_20 + 1;
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
        uStack_28 = uVar10;
        uVar13 = uVar9 << 0x1f | uVar10 >> 1;
        uStack_24 = uVar9;
        uVar9 = uVar9 >> 1;
        uVar15 = (uVar13 + uVar9 + (uint)CARRY4(uVar13,uVar9)) % 5;
        uVar14 = uVar13 - uVar15;
        lVar3 = (ulonglong)uVar14 * 0xcccccccd;
        uVar6 = (uint)lVar3;
        uVar9 = (uVar9 - (uVar13 < uVar15)) * -0x33333333 +
                uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        abStack_c5[iVar11 + 1] = str_10009d6d[uVar6 * -10 + uVar10];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar10;
        uVar10 = uVar6;
      } while (uStack_24 != 0 || -uStack_24 < (uint)bVar16);
      if (iVar11 == 0) goto code_r0x10003bc0;
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *pbStack_20 = abStack_c5[iVar11];
          pbStack_20 = pbStack_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      goto code_r0x10003bb6;
    default:
      if (1 < local_1c) {
        *pbStack_20 = 0x3f;
        pbStack_20 = pbStack_20 + 1;
        local_1c = local_1c - 1;
      }
      goto LAB_10003483;
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
        goto code_r0x100039f7;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto code_r0x100039f7;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
code_r0x100039f7:
      pcVar12 = str_10009d5c;
      if (*local_3c != 0x58) {
        pcVar12 = str_10009d6d;
      }
      iVar11 = 0;
      do {
        uStack_24 = uVar10;
        abStack_c5[iVar11 + 1] = pcVar12[uVar9 & 0xf];
        iVar11 = iVar11 + 1;
        uVar6 = uVar10 << 0x1c;
        uVar10 = uVar10 >> 4;
        bVar16 = 0xf < uVar9;
        uVar9 = uVar6 | uVar9 >> 4;
      } while (uStack_24 != 0 || -uStack_24 < (uint)bVar16);
      local_14 = local_14 + iVar11;
      do {
        if (1 < local_1c) {
          *pbStack_20 = abStack_c5[iVar11];
          pbStack_20 = pbStack_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      break;
    case 99:
      if (1 < local_1c) {
        *pbStack_20 = *(byte *)local_18;
        pbStack_20 = pbStack_20 + 1;
        local_1c = local_1c - 1;
      }
      local_18 = (double *)((int)local_18 + 4);
LAB_10003483:
      local_14 = local_14 + 1;
      break;
    case 0x66:
      if (bVar16) {
        uVar9 = local_1c;
        if (1 < local_1c) {
          *pbStack_20 = 0x30;
          uVar9 = 1;
          if (local_1c - 3 < 0xfffffffe) {
            pbStack_20[1] = 0x2e;
            uVar10 = local_1c & 0xfffffffe;
            if (uVar10 == 2) {
              pbStack_20 = pbStack_20 + 2;
            }
            else {
              pbStack_20[2] = 0x30;
              if (local_1c - 5 < 0xfffffffe) {
                pbStack_20[3] = 0x30;
                if (uVar10 == 4) {
                  pbStack_20 = pbStack_20 + 4;
                }
                else {
                  pbStack_20[4] = 0x30;
                  if (local_1c - 7 < 0xfffffffe) {
                    pbStack_20[5] = 0x30;
                    if (uVar10 == 6) {
                      pbStack_20 = pbStack_20 + 6;
                    }
                    else {
                      pbStack_20[6] = 0x30;
                      if (local_1c - 9 < 0xfffffffe) {
                        pbStack_20[7] = 0x30;
                        pbStack_20 = pbStack_20 + 8;
                        uVar9 = local_1c - 8;
                      }
                      else {
                        pbStack_20 = pbStack_20 + 7;
                      }
                    }
                  }
                  else {
                    pbStack_20 = pbStack_20 + 5;
                  }
                }
              }
              else {
                pbStack_20 = pbStack_20 + 3;
              }
            }
          }
          else {
            pbStack_20 = pbStack_20 + 1;
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
            *pbStack_20 = 0x2d;
            pbStack_20 = pbStack_20 + 1;
            local_1c = local_1c - 1;
          }
          local_14 = local_14 + 1;
          dVar2 = -dVar2;
        }
        local_18 = local_18 + 1;
        uStack_4a = in_FPUControlWord | 0xc00;
        uStack_84 = (uint)ROUND(dVar2);
        iVar11 = 0;
        uStack_50 = uStack_84;
        uVar10 = 0;
        uVar9 = uStack_84;
        do {
          uStack_28 = uVar9;
          uVar13 = uVar10 << 0x1f | uVar9 >> 1;
          uStack_24 = uVar10;
          uVar10 = uVar10 >> 1;
          uVar15 = (uVar13 + uVar10 + (uint)CARRY4(uVar13,uVar10)) % 5;
          uVar14 = uVar13 - uVar15;
          lVar3 = (ulonglong)uVar14 * 0xcccccccd;
          uVar6 = (uint)lVar3;
          uVar10 = (uVar10 - (uVar13 < uVar15)) * -0x33333333 +
                   uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
          abStack_c5[iVar11 + 1] = str_10009d6d[uVar6 * -10 + uVar9];
          iVar11 = iVar11 + 1;
          bVar16 = 9 < uVar9;
          uVar9 = uVar6;
        } while (uStack_24 != 0 || -uStack_24 < (uint)bVar16);
        if (iVar11 == 0) {
          uVar9 = local_1c;
          if (1 < local_1c) goto code_r0x100039d1;
        }
        else {
          local_14 = local_14 + iVar11;
          do {
            if (1 < local_1c) {
              *pbStack_20 = abStack_c5[iVar11];
              pbStack_20 = pbStack_20 + 1;
              local_1c = local_1c - 1;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar9 = local_1c;
          if (1 < local_1c) {
code_r0x100039d1:
            *pbStack_20 = 0x2e;
            local_1c = uVar9 - 1;
            if (local_1c < 2) {
              pbStack_20 = pbStack_20 + 1;
            }
            else {
              uStack_7c = uStack_50;
              dVar2 = (dVar2 - (double)(int)uStack_50) * (double)_DAT_100099e0;
              uStack_48 = in_FPUControlWord | 0xc00;
              iStack_80 = (int)ROUND(dVar2);
              pbStack_20[1] = (char)iStack_80 + 0x30;
              uVar10 = uVar9 & 0xfffffffe;
              local_1c = 1;
              if (uVar10 == 2) {
                pbStack_20 = pbStack_20 + 2;
              }
              else {
                iStack_74 = iStack_80;
                dVar2 = (dVar2 - (double)iStack_80) * (double)_DAT_100099e0;
                uStack_46 = in_FPUControlWord | 0xc00;
                iStack_78 = (int)ROUND(dVar2);
                pbStack_20[2] = (char)iStack_78 + 0x30;
                if (uVar9 - 5 < 0xfffffffe) {
                  iStack_6c = iStack_78;
                  dVar2 = (dVar2 - (double)iStack_78) * (double)_DAT_100099e0;
                  uStack_44 = in_FPUControlWord | 0xc00;
                  iStack_70 = (int)ROUND(dVar2);
                  pbStack_20[3] = (char)iStack_70 + 0x30;
                  if (uVar10 == 4) {
                    pbStack_20 = pbStack_20 + 4;
                  }
                  else {
                    iStack_5c = iStack_70;
                    dVar4 = (double)_DAT_100099e0;
                    dVar2 = (dVar2 - (double)iStack_70) * dVar4;
                    uStack_42 = in_FPUControlWord | 0xc00;
                    iStack_60 = (int)ROUND(dVar2);
                    pbStack_20[4] = (char)iStack_60 + 0x30;
                    iStack_64 = iStack_60;
                    dVar4 = (dVar2 - (double)iStack_60) * dVar4;
                    uStack_40 = in_FPUControlWord | 0xc00;
                    iStack_68 = (int)ROUND(dVar4);
                    if (uVar9 - 7 < 0xfffffffe) {
                      pbStack_20[5] = (char)iStack_68 + 0x30;
                      if (uVar10 == 6) {
                        pbStack_20 = pbStack_20 + 6;
                      }
                      else {
                        iStack_54 = iStack_68;
                        uStack_3e = in_FPUControlWord | 0xc00;
                        iStack_58 = (int)ROUND((dVar4 - (double)iStack_68) * (double)_DAT_100099e0);
                        pbStack_20[6] = (char)iStack_58 + 0x30;
                        pbStack_20 = pbStack_20 + 7;
                        local_1c = uVar9 - 7;
                      }
                    }
                    else {
                      pbStack_20 = pbStack_20 + 5;
                    }
                  }
                }
                else {
                  pbStack_20 = pbStack_20 + 3;
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
        *pbStack_20 = 0x30;
        if (local_1c - 3 < 0xfffffffe) {
          pbStack_20[1] = 0x78;
          pbStack_20 = pbStack_20 + 2;
          local_1c = local_1c - 2;
        }
        else {
          pbStack_20 = pbStack_20 + 1;
          local_1c = 1;
        }
      }
      local_18 = (double *)((int)local_18 + 4);
      iVar11 = 0;
      do {
        abStack_c5[iVar11 + 1] = str_10009d6d[uVar9 & 0xf];
        iVar11 = iVar11 + 1;
        bVar16 = 0xf < uVar9;
        uVar9 = uVar9 >> 4;
      } while (bVar16);
      local_14 = local_14 + 2 + iVar11;
      do {
        if (1 < local_1c) {
          *pbStack_20 = abStack_c5[iVar11];
          pbStack_20 = pbStack_20 + 1;
          local_1c = local_1c - 1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
code_r0x10003764:
      break;
    case 0x73:
      pbVar5 = (byte *)0x10009d55;
      if (*(byte **)local_18 != (byte *)0x0) {
        pbVar5 = *(byte **)local_18;
      }
      local_18 = (double *)((int)local_18 + 4);
      bVar7 = *pbVar5;
      if (bVar7 != 0) {
        do {
          pbVar5 = pbVar5 + 1;
          if (1 < local_1c) {
            *pbStack_20 = bVar7;
            pbStack_20 = pbStack_20 + 1;
            local_1c = local_1c - 1;
          }
          local_14 = local_14 + 1;
          bVar7 = *pbVar5;
        } while (bVar7 != 0);
        goto code_r0x10003764;
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
        goto code_r0x10003b03;
      case '\x06':
        uVar9 = *(uint *)local_18;
        local_18 = (double *)((int)local_18 + 4);
        uVar10 = (int)uVar9 >> 0x1f;
        goto code_r0x10003b03;
      }
      local_18 = (double *)((int)local_18 + 4);
      uVar10 = 0;
code_r0x10003b03:
      iVar11 = 0;
      do {
        uStack_28 = uVar9;
        uVar13 = uVar10 << 0x1f | uVar9 >> 1;
        uStack_24 = uVar10;
        uVar10 = uVar10 >> 1;
        uVar15 = (uVar13 + uVar10 + (uint)CARRY4(uVar13,uVar10)) % 5;
        uVar14 = uVar13 - uVar15;
        lVar3 = (ulonglong)uVar14 * 0xcccccccd;
        uVar6 = (uint)lVar3;
        uVar10 = (uVar10 - (uVar13 < uVar15)) * -0x33333333 +
                 uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
        abStack_c5[iVar11 + 1] = str_10009d6d[uVar6 * -10 + uVar9];
        iVar11 = iVar11 + 1;
        bVar16 = 9 < uVar9;
        uVar9 = uVar6;
      } while (uStack_24 != 0 || -uStack_24 < (uint)bVar16);
      if (iVar11 == 0) {
code_r0x10003bc0:
      }
      else {
        local_14 = local_14 + iVar11;
        do {
          if (1 < local_1c) {
            *pbStack_20 = abStack_c5[iVar11];
            pbStack_20 = pbStack_20 + 1;
            local_1c = local_1c - 1;
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
code_r0x10003bb6:
      }
    }
    param_3 = local_3c + 1;
  } while( true );
}

#undef DAT_100099e0
#undef _DAT_100099e0
#undef str_10009d5c
#undef str_10009d6d
#undef iStack_70
#undef iStack_6c
#undef iStack_68
#undef iStack_64
#undef iStack_60
#undef iStack_5c
#undef iStack_58
#undef iStack_54
#undef uStack_50
#undef uStack_4a
#undef uStack_48
#undef uStack_46
#undef uStack_44
#undef uStack_42
#undef uStack_40
#undef uStack_3e
#undef uStack_28
#undef uStack_24
#undef pbStack_20
#undef local_3c
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_c5
#undef uStack_84
#undef iStack_80
#undef uStack_7c
#undef iStack_78
#undef iStack_74

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10003e50(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10003450(buffer,capacity,format,(void *)args);
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
#undef DAT_1000b084
#define DAT_1000b084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x171fU)))
#undef DAT_1000b088
#define DAT_1000b088 (*(int * *)(((uintptr_t)pf_module_state + 0x1723U)))
#undef _DAT_02000000
#define _DAT_02000000 (*(int *)(0x2000000U))
#undef _DAT_02000004
#define _DAT_02000004 (*(uint32_t *)(0x2000004U))
#undef _DAT_02000008
#define _DAT_02000008 (*(uint *)(0x2000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003e80(uint in_ECX,uint in_EDX,uint *param_3)

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
        puVar5 = (uint *)&DAT_1000b084;
        if (DAT_1000b084 != 0) {
          puVar5 = (uint *)(uVar4 + 4);
        }
        *puVar5 = (uint)piVar1;
        *param_3 = (uint)piVar1;
        if (DAT_1000b088 == (int *)0x0) {
          DAT_1000b088 = piVar1;
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
    puVar2 = &DAT_1000b084;
    if (DAT_1000b084 != 0) {
      puVar2 = (undefined4 *)(_DAT_02000008 + 4);
    }
    *puVar2 = 0x2000000;
    *param_3 = 0x2000000;
    if (DAT_1000b088 != (int *)0x0) {
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
    puVar2 = &DAT_1000b084;
    if (DAT_1000b084 != 0) {
      puVar2 = (undefined4 *)(uVar3 + 4);
    }
    *puVar2 = piVar1;
    *param_3 = (uint)piVar1;
    if (DAT_1000b088 != (int *)0x0) {
      return;
    }
  }
  DAT_1000b088 = piVar1;
  return;
}

#undef DAT_02000000
#undef DAT_02000004
#undef DAT_02000008
#undef DAT_0200000c
#undef DAT_1000b084
#undef DAT_1000b088
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
#undef DAT_1000b08c
#define DAT_1000b08c (*(uint *)(((uintptr_t)pf_module_state + 0x1727U)))
#undef DAT_1000b090
#define DAT_1000b090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172bU)))
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
 * Address: 0x10004000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004000(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000b08c != 0) {
          DAT_1000b08c = DAT_1000b08c - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000b08c == 0) {
            uVar3 = 0;
          }
          else {
            recovered_100014d0(local_210,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
            uVar3 = DAT_1000b08c;
          }
          *(undefined1 *)((int)local_210 + uVar3) = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_1000b08c = 0;
        }
        else {
          if (DAT_1000b08c - 0x1ff < 0xfffffe00) {
            recovered_100014d0(local_210,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
            *(undefined1 *)((int)local_210 + DAT_1000b08c) = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_1000b08c = 0;
          }
          pcVar1 = &DAT_1000b090 + DAT_1000b08c;
          DAT_1000b08c = DAT_1000b08c + 1;
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
#undef DAT_1000b08c
#undef DAT_1000b090
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
#undef DAT_1000b08c
#define DAT_1000b08c (*(uint *)(((uintptr_t)pf_module_state + 0x1727U)))
#undef DAT_1000b090
#define DAT_1000b090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172bU)))
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
 * Address: 0x100041a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041a0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_1000b08c == 0) {
    uVar1 = 0;
  }
  else {
    recovered_100014d0(local_204,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
    uVar1 = DAT_1000b08c;
  }
  *(undefined1 *)((int)local_204 + uVar1) = 0;
  if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
     ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
    (*_DAT_00006840)(local_204);
  }
  DAT_1000b08c = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000b08c
#undef DAT_1000b090
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
#undef DAT_1000b08c
#define DAT_1000b08c (*(uint *)(((uintptr_t)pf_module_state + 0x1727U)))
#undef DAT_1000b090
#define DAT_1000b090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172bU)))
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
 * Address: 0x10004230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004230(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000b08c != 0) {
    recovered_100014d0(local_208,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
    *(undefined1 *)((int)local_208 + DAT_1000b08c) = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_1000b08c = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_1000b08c
#undef DAT_1000b090
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_10009d54
#define DAT_10009d54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3efU)))
#undef DAT_10009d7e
#define DAT_10009d7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#define local_148 (*(byte (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042c0
 */

void recovered_100042c0(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int extraout_EAX = 0;
  undefined1 *puVar2;

  pbVar1 = &DAT_10009d7e;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = param_1;
  }
  puVar2 = &DAT_10009d54;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  recovered_10003e50(local_148,0x140,pbVar1,(char)puVar2);
  if (0 < extraout_EAX) {
    recovered_10004000((char *)local_148,extraout_EAX);
  }
  return;
}

#undef DAT_10009d54
#undef DAT_10009d7e
#undef local_148

#undef DAT_10009d9c
#define DAT_10009d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x437U)))
#undef str_10009d81
#define str_10009d81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004320
 */

void recovered_10004320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10001bd0(((uintptr_t)pf_module_state + 0x41cU));
  recovered_10004000(str_10009d81,iVar1);
  iVar1 = recovered_10001bd0(((uintptr_t)pf_module_state + 0x437U));
  recovered_10004000(&DAT_10009d9c,iVar1);
  return;
}

#undef DAT_10009d9c
#undef str_10009d81

#undef DAT_10009d9c
#define DAT_10009d9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x437U)))
#undef str_10009d9f
#define str_10009d9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004370
 */

void recovered_10004370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10001bd0(((uintptr_t)pf_module_state + 0x43aU));
  recovered_10004000(str_10009d9f,iVar1);
  iVar1 = recovered_10001bd0(((uintptr_t)pf_module_state + 0x437U));
  recovered_10004000(&DAT_10009d9c,iVar1);
  return;
}

#undef DAT_10009d9c
#undef str_10009d9f

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
#undef DAT_1000b08c
#define DAT_1000b08c (*(uint *)(((uintptr_t)pf_module_state + 0x1727U)))
#undef DAT_1000b090
#define DAT_1000b090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172bU)))
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
 * Address: 0x100043c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100043c0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000b08c != 0) {
      recovered_100014d0(local_210,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
      *(undefined1 *)((int)local_210 + DAT_1000b08c) = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_210);
      }
      DAT_1000b08c = 0;
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
#undef DAT_1000b08c
#undef DAT_1000b090
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

undefined4 recovered_100044b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044c0
 */

void recovered_100044c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044d0
 */

undefined1 recovered_100044d0(void)

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
#undef DAT_10009d7e
#define DAT_10009d7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_10009e33
#define str_10009e33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ceU)))
#undef str_10009e40
#define str_10009e40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dbU)))
#undef str_10009e4e
#define str_10009e4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e9U)))
#define local_1c (*(undefined4 * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100044e0(int param_1,int param_2)

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
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10001c00((byte *)param_1,(byte *)str_10009e33);
  if (iVar3 == 0) {
    uVar9 = 1;
  }
  else {
    iVar4 = recovered_10001c00((byte *)param_1,(byte *)str_10009e40);
    if (iVar4 == 0) {
      uVar9 = 2;
    }
    else {
      iVar4 = recovered_10001c00((byte *)param_1,(byte *)str_10009e4e);
      if (iVar4 != 0) {
        pbVar5 = recovered_10001410(800);
        if (pbVar5 != (byte *)0x0) {
          recovered_10001760(pbVar5,0,800);
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pcVar6 = recovered_10001de0((char *)param_2,'r');
          bVar10 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001de0((char *)param_2,'+');
            bVar10 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001de0((char *)param_2,'a');
              bVar10 = pcVar6 != (char *)0x0;
            }
          }
          pbVar5[0x110] = bVar10;
          pcVar6 = recovered_10001de0((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001de0((char *)param_2,'a');
            bVar10 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001de0((char *)param_2,'+');
              bVar10 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar10 = true;
          }
          pbVar5[0x111] = bVar10;
          pcVar6 = recovered_10001de0((char *)param_2,'a');
          pbVar5[0x112] = pcVar6 != (char *)0x0;
          pbVar5[0x10c] = 0xff;
          pbVar5[0x10d] = 0xff;
          pbVar5[0x10e] = 0xff;
          pbVar5[0x10f] = 0xff;
          recovered_10003e50(pbVar5 + 4,0xf1,&DAT_10009d7e,(char)param_1);
          recovered_10001760((byte *)&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001de0((char *)param_2,'w');
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
                  puVar8 = recovered_10001490(*(void **)(pbVar5 + 0xfc),uVar7);
                  if (puVar8 == (undefined4 *)0x0) {
                    *(undefined4 *)PTR_DAT_1000b000 = 0xc;
                    pbVar5[0x115] = 1;
                    goto LAB_100047fe;
                  }
                  *(undefined4 **)(pbVar5 + 0xfc) = puVar8;
                  *(uint *)(pbVar5 + 0x104) = uVar7;
                  *(undefined4 **)(pbVar5 + 0xf8) = puVar8;
                }
                else {
                  puVar8 = *(undefined4 **)(pbVar5 + 0xfc);
                }
                recovered_100014d0(puVar8,local_1c,local_18);
              }
              else {
                *(undefined4 **)(pbVar5 + 0xf8) = local_1c;
              }
              *(uint *)(pbVar5 + 0x100) = local_18;
              bVar1 = pbVar5[0x112];
              goto joined_r0x100047dc;
            }
          }
          else if (pbVar5[0x111] == 0) {
            *(undefined4 *)PTR_DAT_1000b000 = 2;
LAB_100047fe:
            recovered_10001450(pbVar5);
            return (undefined4 *)0x0;
          }
          bVar1 = pbVar5[0x112];
joined_r0x100047dc:
          if (bVar1 == 1) {
            *(undefined4 *)(pbVar5 + 0x108) = *(undefined4 *)(pbVar5 + 0x100);
            return (undefined4 *)pbVar5;
          }
          return (undefined4 *)pbVar5;
        }
        goto LAB_10004666;
      }
      uVar9 = 3;
    }
  }
  pbVar5 = recovered_10001410(800);
  if (pbVar5 != (byte *)0x0) {
    recovered_10001760(pbVar5,0,800);
    *(undefined4 *)pbVar5 = uVar9;
    pbVar5[0x110] = iVar3 == 0;
    pbVar5[0x111] = iVar3 != 0;
    pbVar5[0x10c] = 0xff;
    pbVar5[0x10d] = 0xff;
    pbVar5[0x10e] = 0xff;
    pbVar5[0x10f] = 0xff;
    recovered_10003e50(pbVar5 + 4,0xf1,&DAT_10009d7e,(char)param_1);
    return (undefined4 *)pbVar5;
  }
LAB_10004666:
  *(undefined4 *)PTR_DAT_1000b000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_10009d7e
#undef PTR_DAT_1000b000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_10009e33
#undef str_10009e40
#undef str_10009e4e
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004860
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004860(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_1000490d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_100048f3;
      }
    }
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_100048f3:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10001450((void *)param_3[0x3f]);
  }
  recovered_10001450(param_3);
LAB_1000490d:
  recovered_100044e0(param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004920(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000b000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10001450((void *)param_1[0x3f]);
  }
  recovered_10001450(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000b000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f0
 */

uint recovered_100049f0(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_100014d0((undefined4 *)param_1,(undefined4 *)(uVar2 + param_4[0x3e]),uVar1);
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
          uVar3 = recovered_10004af0(param_4);
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
#undef DAT_10009d54
#define DAT_10009d54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3efU)))
#undef DAT_1000b08c
#define DAT_1000b08c (*(uint *)(((uintptr_t)pf_module_state + 0x1727U)))
#undef DAT_1000b090
#define DAT_1000b090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x172bU)))
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
 * Address: 0x10004af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004af0(int *param_1)

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
LAB_10004b47:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_1000b08c != 0) {
      recovered_100014d0(local_20c,(undefined4 *)&DAT_1000b090,DAT_1000b08c);
      *(undefined1 *)((int)local_20c + DAT_1000b08c) = 0;
      if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
         ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
        (*_DAT_00006840)(local_20c);
      }
      DAT_1000b08c = 0;
    }
    if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
       ((0xb < _DAT_00006808 && ((0x47 < _DAT_00006808 && (_DAT_00006844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00006844)((int)param_1 + 0x116,0x1fe,&DAT_10009d54,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10001bd0((int)param_1 + 0x116);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)((int)param_1 + iVar1 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar2 = 0;
        goto LAB_10004b47;
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
#undef DAT_10009d54
#undef DAT_1000b08c
#undef DAT_1000b090
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ca0
 */

int recovered_10004ca0(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10004dee:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10004000((char *)param_1,uVar5);
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
      pvVar3 = recovered_10001490((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000b000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10004dee;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10001760((byte *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_100014d0((undefined4 *)(uVar4 + param_4[0x3f]),(undefined4 *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e00
 */

undefined4 recovered_10004e00(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10004e0f;
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
LAB_10004e0f:
  *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e80
 */

undefined4 recovered_10004e80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_1000b000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004eb0(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_1000b000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f60
 */

undefined1 recovered_10004f60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f80
 */

undefined1 recovered_10004f80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fa0
 */

void recovered_10004fa0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc0
 */

uint recovered_10004fc0(uint param_1,int param_2)

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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004ff0(int param_1)

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
  *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169bU)))
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
 * Address: 0x10005060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10005060(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  }
  else {
    recovered_10001760((byte *)&local_1c,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef PTR_DAT_1000b000
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
 * Address: 0x100051d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100051d0(int param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  uint uVar3;

  if (param_3 != (int *)0x0 && (param_2 != (undefined4 *)0x0 && param_1 != 0)) {
    recovered_10001760((byte *)&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      puVar2 = recovered_10001410(local_18 + (local_18 == 0));
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_100014d0(puVar2,local_1c,local_18);
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
 * Address: 0x100052a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100052a0(int param_1,int param_2,int param_3)

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
 * Address: 0x10005310
 */

undefined4 recovered_10005310(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005320
 */

void recovered_10005320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005330
 */

undefined4 recovered_10005330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

undefined4 recovered_10005340(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


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

char * recovered_10005360(char *param_1,char param_2,int param_3)

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
 * Address: 0x10005390
 */

int recovered_10005390(int param_1,int param_2,int param_3)

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


#undef DAT_10009dc2
#define DAT_10009dc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_10009dc5
#define str_10009dc5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x460U)))
#undef str_10009dd2
#define str_10009dd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46dU)))
#undef str_10009ddc
#define str_10009ddc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x477U)))
#undef str_10009df0
#define str_10009df0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_10009dfe
#define str_10009dfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x499U)))
#undef str_10009e10
#define str_10009e10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4abU)))
#undef str_10009e1c
#define str_10009e1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b7U)))
#undef str_10009e2d
#define str_10009e2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053e0
 */

char * recovered_100053e0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10009dc2;
  default:
    return str_10009e2d;
  case 2:
    return str_10009dc5;
  case 5:
    return str_10009dd2;
  case 9:
    return str_10009ddc;
  case 0xc:
    return str_10009df0;
  case 0xd:
    return str_10009dfe;
  case 0x11:
    return str_10009e10;
  case 0x16:
    return str_10009e1c;
  }
}

#undef DAT_10009dc2
#undef str_10009dc5
#undef str_10009dd2
#undef str_10009ddc
#undef str_10009df0
#undef str_10009dfe
#undef str_10009e10
#undef str_10009e1c
#undef str_10009e2d

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

undefined4 recovered_10005450(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000b290
#define DAT_1000b290 (*(int *)(((uintptr_t)pf_module_state + 0x192bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005460
 */

void recovered_10005460(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b290 = DAT_1000b290 + 1;
  return;
}

#undef DAT_1000b290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005480
 */

void recovered_10005480(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x1000548d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10005490(void *context) { __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nxorl %eax,%eax\nretl"); }


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100054c0(void *context,int value) { __asm__ volatile("movl 4(%esp),%ecx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njnz 1f\nincl %eax\n1:\nmovl 0(%ecx),%ebx\nmovl 4(%ecx),%esi\nmovl 8(%ecx),%edi\nmovl 12(%ecx),%ebp\nmovl 16(%ecx),%esp\nmovl 20(%ecx),%edx\njmpl *%edx"); }


#undef DAT_1000552d
#define DAT_1000552d (*(uint8_t *)(0x1000552dU))
#undef DAT_10009e98
#define DAT_10009e98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x533U)))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(code * *)(frame + 180))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054f0
 */

void recovered_100054f0(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005550;
  local_28 = &DAT_10009e98;
  local_20 = &DAT_1000552d;
  local_40 = 1;
  recovered_10005a10(&local_44);
  recovered_100013d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000552d
#undef DAT_10009e98
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

void recovered_10005560(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005580(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}


#undef DAT_1000b294
#define DAT_1000b294 (*(int *)(((uintptr_t)pf_module_state + 0x192fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005580
 */

int recovered_10005580(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_1000b294;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_1000b294 = param_1;
  iVar1 = recovered_100058b0(param_1);
  return iVar1;
}

#undef DAT_1000b294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

void * recovered_100055b0(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001410(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100013d0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

void * recovered_100055e0(ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001410(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100013d0();
  }
  return pvVar1;
}


#undef DAT_10009ea8
#define DAT_10009ea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x543U)))
#undef LAB_10005664
#define LAB_10005664 (*(uint8_t *)(0x10005664U))
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
 * Address: 0x10005610
 */

void recovered_10005610(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005550;
  local_28 = &DAT_10009ea8;
  local_20 = &LAB_10005664;
  local_40 = 1;
  recovered_10005a10(&local_44);
  recovered_10001450(pointer);
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009ea8
#undef LAB_10005664
#undef local_44
#undef local_40
#undef auStack_18
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10009eb8
#define DAT_10009eb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x553U)))
#undef LAB_100056e4
#define LAB_100056e4 (*(uint8_t *)(0x100056e4U))
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
 * Address: 0x10005690
 */

void recovered_10005690(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005550;
  local_28 = &DAT_10009eb8;
  local_20 = &LAB_100056e4;
  local_40 = 1;
  recovered_10005a10(&local_44);
  recovered_10001450(pointer);
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009eb8
#undef LAB_100056e4
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_10009ec8
#define DAT_10009ec8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x563U)))
#undef LAB_10005764
#define LAB_10005764 (*(uint8_t *)(0x10005764U))
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
 * Address: 0x10005710
 */

void recovered_10005710(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005550;
  local_28 = &DAT_10009ec8;
  local_20 = &LAB_10005764;
  local_40 = 1;
  recovered_10005a10(&local_44);
  recovered_10001450(param_1);
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009ec8
#undef LAB_10005764
#undef local_20
#undef local_1c
#undef auStack_18
#undef auStackY_cc
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10009ed8
#define DAT_10009ed8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x573U)))
#undef LAB_100057e4
#define LAB_100057e4 (*(uint8_t *)(0x100057e4U))
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
 * Address: 0x10005790
 */

void recovered_10005790(void *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10005550;
  local_28 = &DAT_10009ed8;
  local_20 = &LAB_100057e4;
  local_40 = 1;
  recovered_10005a10(&local_44);
  recovered_10001450(param_1);
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009ed8
#undef LAB_100057e4
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
 * Address: 0x10005810
 */

undefined4 recovered_10005810(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005820
 */

uint recovered_10005820(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005830
 */

void recovered_10005830(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005840
 */

void recovered_10005840(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005850
 */

undefined1 * recovered_10005850(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001410(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100054f0();
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
 * Address: 0x10005890
 */

void recovered_10005890(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10001450((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058b0
 */

int recovered_100058b0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_1000b294
#define DAT_1000b294 (*(void * *)(((uintptr_t)pf_module_state + 0x192fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058c0
 */

void recovered_100058c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_1000b294;
  if (DAT_1000b294 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_1000b294 + 8);
    DAT_1000b294 = *(void **)((int)DAT_1000b294 + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10001450(pointer);
    }
  }
  return;
}

#undef DAT_1000b294

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005910
 */

void recovered_10005910(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005950(param_1 + -0x1c);
}


#undef DAT_1000b294
#define DAT_1000b294 (*(int *)(((uintptr_t)pf_module_state + 0x192fU)))
#undef DAT_1000b298
#define DAT_1000b298 (*(int * *)(((uintptr_t)pf_module_state + 0x1933U)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005950
 */

void recovered_10005950(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  int in_ECX_00;
  undefined4 uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_1000b298 != (int *)0x0) {
    in_EDX = *(byte **)in_ECX;
    in_ECX_01 = DAT_1000b298;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_100062e0((int)in_ECX_01,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005aa0(local_14);
        in_ECX_00 = DAT_1000b294;
        if (DAT_1000b294 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_100054f0();
        }
        *(undefined1 *)(DAT_1000b294 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10005950(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}

#undef DAT_1000b294
#undef DAT_1000b298
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000b294
#define DAT_1000b294 (*(int *)(((uintptr_t)pf_module_state + 0x192fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059d0
 */

void recovered_100059d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;

  in_ECX = DAT_1000b294;
  if (DAT_1000b294 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_100054f0();
  }
  *(undefined1 *)(DAT_1000b294 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10005950(in_ECX);
}

#undef DAT_1000b294

#undef DAT_1000b298
#define DAT_1000b298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1933U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a10
 */

void recovered_10005a10(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000b298;
  DAT_1000b298 = param_1;
  return;
}

#undef DAT_1000b298

#undef DAT_1000b298
#define DAT_1000b298 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1933U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a30
 */

void recovered_10005a30(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000b298;
  if (DAT_1000b298 == param_1) {
    puVar2 = &DAT_1000b298;
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

#undef DAT_1000b298

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a60
 */

void recovered_10005a60(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005950(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a70
 */

void recovered_10005a70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}


#undef DAT_1000b298
#define DAT_1000b298 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1933U)))
#define iStack_34 (*(int *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 40))
#define uStack_24 (*(undefined4 *)(frame + 44))
#define uStack_20 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a80
 */

undefined4 recovered_10005a80(int in_stack_00000004)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1000b298 != (undefined4 *)0x0) {
    DAT_1000b298 = (undefined4 *)*DAT_1000b298;
  }
  recovered_10005aa0(in_stack_00000004);
  if (DAT_1000b298 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_1000b298;
      if (DAT_1000b298 == puVar1) {
        DAT_1000b298[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_10005b1b:
        puVar2[1] = uVar3;
        recovered_10005480((int)puVar2);
        recovered_10005a80(iStack_34);
        return 0;
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_100062e0((int)DAT_1000b298,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
      if (((char)uStack_28 == '\x01') && (PF_PART1(uStack_28, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_10005b1b;
      }
      DAT_1000b298 = (undefined4 *)*puVar2;
    } while (DAT_1000b298 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}

#undef DAT_1000b298
#undef iStack_34
#undef uStack_28
#undef uStack_24
#undef uStack_20

#undef DAT_1000b298
#define DAT_1000b298 (*(int * *)(((uintptr_t)pf_module_state + 0x1933U)))
#define iStack_28 (*(int *)(frame + 24))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005aa0
 */

undefined4 recovered_10005aa0(int in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000b298 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_1000b298;
      if (DAT_1000b298 == piVar1) {
        DAT_1000b298[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_10005b1b:
        piVar2[1] = iVar3;
        recovered_10005480((int)piVar2);
        recovered_10005a80(iStack_28);
        return 0;
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_100062e0((int)DAT_1000b298,*(byte **)in_ECX,(undefined2 *)&local_1c);
      if (((char)local_1c == '\x01') && (PF_PART1(local_1c, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_10005b1b;
      }
      DAT_1000b298 = (int *)*piVar2;
    } while (DAT_1000b298 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}

#undef DAT_1000b298
#undef iStack_28
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b30
 */

undefined4 recovered_10005b30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005a80(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

undefined4 recovered_10005b50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

void recovered_10005b60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100054f0();
}


#undef DAT_1000b068
#define DAT_1000b068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1703U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

int recovered_10005b70(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_10005c20;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10005c20;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000b068) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10005c20:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_1000b068
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c40
 */

void recovered_10005c40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013d0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c50
 */

undefined4 recovered_10005c50(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

bool recovered_10005c60(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

bool recovered_10005c80(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cb0
 */

bool recovered_10005cb0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ce0
 */

bool recovered_10005ce0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d00
 */

bool recovered_10005d00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d20
 */

byte recovered_10005d20(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d60
 */

bool recovered_10005d60(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_10009cd0
#define DAT_10009cd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef DAT_10009cd8
#define DAT_10009cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_10009ce0
#define DAT_10009ce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10009cd0
#define _DAT_10009cd0 (*(double *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef _DAT_10009cd8
#define _DAT_10009cd8 (*(double *)(((uintptr_t)pf_module_state + 0x373U)))
#undef _DAT_10009ce0
#define _DAT_10009ce0 (*(float *)(((uintptr_t)pf_module_state + 0x37bU)))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005d80(double param_1)

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
    if ((longdouble)_DAT_10009cd0 < lVar5) {
      return (longdouble)_DAT_10009ce0;
    }
    if (lVar5 < (longdouble)_DAT_10009cd8) {
      return (longdouble)0;
    }
    uStack_8 = (uint)((ulonglong)param_1 >> 0x20);
    if ((~uStack_8 & 0x7ff00000) == 0) {
      bVar1 = lVar5 <= (longdouble)0;
      lVar5 = (longdouble)_DAT_10009ce0;
      if (bVar1) {
        lVar5 = (longdouble)0;
      }
    }
    else {
      lVar6 = (longdouble)_DAT_10009990;
      iVar4 = 0;
      if (lVar6 < lVar5) {
        iVar4 = 0;
        do {
          lVar5 = lVar5 * lVar6;
          iVar4 = iVar4 + 1;
        } while (lVar6 < lVar5);
      }
      lVar6 = lVar5;
      if (lVar5 < (longdouble)_DAT_100099d0) {
        do {
          lVar6 = lVar6 * (longdouble)_DAT_10009990;
          iVar4 = iVar4 + 1;
        } while (lVar6 < (longdouble)_DAT_100099d0);
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

#undef DAT_10009990
#undef DAT_100099d0
#undef DAT_10009cd0
#undef DAT_10009cd8
#undef DAT_10009ce0
#undef _DAT_10009990
#undef _DAT_100099d0
#undef _DAT_10009cd0
#undef _DAT_10009cd8
#undef _DAT_10009ce0
#undef uStack_8

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_10009cd0
#define DAT_10009cd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef DAT_10009cd8
#define DAT_10009cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_10009ce0
#define DAT_10009ce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10009cd0
#define _DAT_10009cd0 (*(double *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef _DAT_10009cd8
#define _DAT_10009cd8 (*(double *)(((uintptr_t)pf_module_state + 0x373U)))
#undef _DAT_10009ce0
#define _DAT_10009ce0 (*(float *)(((uintptr_t)pf_module_state + 0x37bU)))
#define uStack_10 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005eb0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;

  if (!NAN(param_1)) {
    fVar3 = _DAT_10009ce0;
    if (((float)_DAT_10009cd0 < param_1) || (fVar3 = 0.0, param_1 < (float)_DAT_10009cd8))
    goto LAB_10005fdd;
    uStack_10 = (uint)((ulonglong)(double)param_1 >> 0x20);
    if ((~uStack_10 & 0x7ff00000) == 0) {
      bVar1 = param_1 <= 0.0;
      param_1 = _DAT_10009ce0;
      if (bVar1) {
        param_1 = 0.0;
      }
    }
    else {
      iVar6 = 0;
      fVar3 = param_1;
      if (_DAT_10009990 < param_1) {
        iVar6 = 0;
        do {
          param_1 = param_1 * _DAT_10009990;
          iVar6 = iVar6 + 1;
          fVar3 = param_1;
        } while (_DAT_10009990 < param_1);
      }
      for (; fVar3 < _DAT_100099d0; fVar3 = fVar3 * _DAT_10009990) {
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
        goto LAB_10005fdd;
      }
    }
  }
  fVar3 = param_1;
LAB_10005fdd:
  return (longdouble)fVar3;
}

#undef DAT_10009990
#undef DAT_100099d0
#undef DAT_10009cd0
#undef DAT_10009cd8
#undef DAT_10009ce0
#undef _DAT_10009990
#undef _DAT_100099d0
#undef _DAT_10009cd0
#undef _DAT_10009cd8
#undef _DAT_10009ce0
#undef uStack_10

#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef DAT_10009cd0
#define DAT_10009cd0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef DAT_10009cd8
#define DAT_10009cd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_10009ce0
#define DAT_10009ce0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x37bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10009cd0
#define _DAT_10009cd0 (*(double *)(((uintptr_t)pf_module_state + 0x36bU)))
#undef _DAT_10009cd8
#define _DAT_10009cd8 (*(double *)(((uintptr_t)pf_module_state + 0x373U)))
#undef _DAT_10009ce0
#define _DAT_10009ce0 (*(float *)(((uintptr_t)pf_module_state + 0x37bU)))
#define uStack_8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10005ff0(longdouble param_1)

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
    if ((longdouble)_DAT_10009cd0 < lVar5) {
      return (longdouble)_DAT_10009ce0;
    }
    if (lVar5 < (longdouble)_DAT_10009cd8) {
      return (longdouble)0;
    }
    uStack_8 = (uint)((ulonglong)(double)param_1 >> 0x20);
    if ((~uStack_8 & 0x7ff00000) == 0) {
      bVar1 = lVar5 <= (longdouble)0;
      lVar5 = (longdouble)_DAT_10009ce0;
      if (bVar1) {
        lVar5 = (longdouble)0;
      }
    }
    else {
      lVar6 = (longdouble)_DAT_10009990;
      iVar4 = 0;
      if (lVar6 < lVar5) {
        iVar4 = 0;
        do {
          lVar5 = lVar5 * lVar6;
          iVar4 = iVar4 + 1;
        } while (lVar6 < lVar5);
      }
      lVar6 = lVar5;
      if (lVar5 < (longdouble)_DAT_100099d0) {
        do {
          lVar6 = lVar6 * (longdouble)_DAT_10009990;
          iVar4 = iVar4 + 1;
        } while (lVar6 < (longdouble)_DAT_100099d0);
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

#undef DAT_10009990
#undef DAT_100099d0
#undef DAT_10009cd0
#undef DAT_10009cd8
#undef DAT_10009ce0
#undef _DAT_10009990
#undef _DAT_100099d0
#undef _DAT_10009cd0
#undef _DAT_10009cd8
#undef _DAT_10009ce0
#undef uStack_8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006120
 */

longdouble recovered_10006120(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longdouble)param_1 - (longdouble)param_2;
}


#undef DAT_10009990
#define DAT_10009990 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef DAT_100099d0
#define DAT_100099d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6bU)))
#undef _DAT_10009990
#define _DAT_10009990 (*(float *)(((uintptr_t)pf_module_state + 0x2bU)))
#undef _DAT_100099d0
#define _DAT_100099d0 (*(float *)(((uintptr_t)pf_module_state + 0x6bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006140
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10006140(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_100021d0(param_1);
  if ((longdouble)_DAT_10009990 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_100099d0 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_10009990
#undef DAT_100099d0
#undef _DAT_10009990
#undef _DAT_100099d0

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006190
 */

ulonglong recovered_10006190(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_1000623d;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_1000623d;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_1000623d;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_1000623d;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_1000623d:
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
 * Address: 0x100062d0
 */

void recovered_100062d0(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006190(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_10009c98
#define DAT_10009c98 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_1000b068
#define DAT_1000b068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1703U)))
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
 * Address: 0x100062e0
 */

undefined4 recovered_100062e0(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_10006660((uint)*pbVar9,(int *)&local_2c);
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
          goto LAB_10006470;
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
LAB_10006470:
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
    if (0x1f < uVar5) goto LAB_10006518;
LAB_10006609:
    bVar14 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_10006520;
LAB_10006614:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10006609;
LAB_10006518:
    bVar14 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_10006614;
LAB_10006520:
    local_20 = local_20 | uVar6;
    if (!bVar14 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_1000663f:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_10009c98 + local_38 * 4) * local_20;
      pbVar9 = recovered_10006660(local_34,(int *)&local_4c);
      if (pbVar9 == (byte *)0x0) goto LAB_1000663f;
      cVar15 = local_11;
      if ((local_28 != (byte *)0x0) && (pbVar9 != local_28)) {
        iVar8 = *(int *)(pbVar9 + 4);
        pbVar10 = local_28;
        do {
          iVar3 = *(int *)(pbVar10 + 4);
          if ((iVar8 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar8) goto LAB_1000663f;
          }
          else {
            iVar11 = 0;
            do {
              cVar15 = *(char *)(iVar3 + iVar11);
              cVar2 = *(char *)(iVar8 + iVar11);
              if ((cVar15 == '\0') || (cVar2 == '\0')) {
                if (cVar15 == cVar2) goto LAB_1000663f;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (cVar15 == cVar2);
          }
          if (*(undefined **)pbVar10 != &DAT_1000b068) goto LAB_1000661b;
          pbVar10 = *(byte **)(pbVar10 + 8);
          cVar15 = pbVar10 != (byte *)0x0;
        } while ((pbVar10 != pbVar9) && (pbVar10 != (byte *)0x0));
      }
      if (cVar15 != '\0') goto LAB_1000663f;
    }
  }
LAB_1000661b:
  if ((uVar13 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar13 | local_24);
  bVar14 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar14) {
    return 0;
  }
  goto LAB_10006470;
}

#undef DAT_10009c98
#undef DAT_1000b068
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
 * Address: 0x10006660
 */

byte * recovered_10006660(uint in_ECX,int *in_EDX)

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
    goto LAB_10006735;
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
    goto LAB_10006735;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto LAB_1000675c;
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
LAB_10006735:
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
LAB_1000675c:
  return pbVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006770
 */

void recovered_10006770(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006790
 */

void recovered_10006790(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


#undef DAT_10009ee8
#define DAT_10009ee8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#undef LAB_1000691e
#define LAB_1000691e (*(uint8_t *)(0x1000691eU))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define local_6c (*(undefined4 *)(frame + 164))
#define local_68 (*(undefined4 *)(frame + 168))
#define local_54 (*(undefined * *)(frame + 188))
#define local_50 (*(undefined * *)(frame + 192))
#define local_4c (*(undefined1 * *)(frame + 196))
#define local_48 (*(undefined1 * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_34 (*(void * *)(frame + 220))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_30 (*(uint *)(frame + 224))
#define local_2c (*(undefined4 *)(frame + 228))
#define local_28 (*(void * *)(frame + 232))
#define local_24 (*(undefined4 *)(frame + 236))
#define local_20 (*(undefined4 *)(frame + 240))
#define local_1c (*(int *)(frame + 244))
#define local_18 (*(short *)(frame + 248))
#define local_12 (*(undefined2 *)(frame + 254))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b0
 */

undefined4 * recovered_100067b0(int param_1)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;

  local_4c = auStackY_fc + 0xf8;
  local_44 = auStackY_fc + 0x80;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_54 = PTR_recovered_10005550_1000b004;
  local_50 = &DAT_10009ee8;
  local_48 = &LAB_1000691e;
  recovered_10005a10(&local_6c);
  if (param_1 != 0) {
    local_12 = 2;
    local_34 = (void *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_68 = 1;
    uVar2 = recovered_10007fe0(param_1,(int *)&local_34);
    if ((char)uVar2 == '\0') {
      cVar1 = '\0';
    }
    else {
      local_68 = 2;
      uVar3 = recovered_100082c0((int)local_34,local_30,&local_28,&local_12);
      cVar1 = (char)uVar3;
    }
    local_30 = 0;
    recovered_10005610(local_34);
    if (((cVar1 != '\0') && (local_18 == 2)) && (local_1c != 0)) {
      local_68 = 3;
      puVar4 = recovered_100055b0(0x18);
      puVar4[4] = 0;
      recovered_10005610((void *)0x0);
      *puVar4 = local_28;
      puVar4[1] = local_24;
      puVar4[2] = local_20;
      local_28 = (void *)0x0;
      local_20 = 0;
      *(short *)(puVar4 + 4) = local_18;
      puVar4[3] = local_1c;
      puVar4[5] = 0;
      goto LAB_100068fa;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_100068fa:
  local_24 = 0;
  recovered_10005610(local_28);
  recovered_10005a30(&local_6c);
  return puVar4;
}

#undef DAT_10009ee8
#undef LAB_1000691e
#undef PTR_recovered_10005550_1000b004
#undef local_6c
#undef local_68
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_34
#undef auStackY_fc
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_12

/* Recovered track generator; Pooka's Free Software License. */
long * recovered_10006970(uint frequency,uint duration,long waveform,uintptr_t side) {
 struct track { short *samples; unsigned long count,capacity; uint rate; ushort channels; unsigned long mixer; };
 const char *wave=(const char *)waveform,*channel=(const char *)(uintptr_t)side;
 if((int)(frequency|duration)<0||!wave||!channel)return 0;
 const char *waves[3]={"square","sine","saw"},*channels[3]={"left","right","both"};
 int kind=-1,mode=-1;
 for(int k=0;k<3;++k){unsigned i=0;while(wave[i]&&wave[i]==waves[k][i])++i;if(wave[i]==waves[k][i])kind=k;}
 for(int k=0;k<3;++k){unsigned i=0;while(channel[i]&&channel[i]==channels[k][i])++i;if(channel[i]==channels[k][i])mode=k;}
 if(kind<0||mode<0)return 0;
 struct track *out=(struct track *)recovered_100055b0(sizeof(struct track));
 if(!out)return 0;
 out->samples=0;out->count=out->capacity=0;out->rate=44100;out->channels=2;out->mixer=0;
 unsigned long frames=(unsigned long)((long double)duration*44100.0L/1000.0L+0.5L);
 if(!frames)return (long *)out;
 out->samples=(short *)recovered_100055b0(frames*4);
 if(!out->samples){recovered_10005610(out);return 0;}
 out->count=out->capacity=frames*2;
 for(unsigned long i=0;i<frames;++i){
  short sample=0;
  if(frequency){
   double cycle=((double)i*(double)frequency)/44100.0;
   double phase=cycle-(double)(long)cycle,value;
   if(kind==0)value=phase<0.5?1.0:-1.0;
   else if(kind==2)value=phase+phase-1.0;
   else {
    double x=cycle*6.283185307179586;
    while(x>3.141592653589793)x-=6.283185307179586;
    while(x< -3.141592653589793)x+=6.283185307179586;
    double square=x*x,fourth=square*square,sixth=square*fourth;
    value=((square/ -6.0+1.0+fourth/120.0)-sixth/5040.0)*x;
   }
   double scaled=(value*0.75)*32767.0;
   sample=scaled<= -32768.0?-32768:scaled>=32767.0?32767:(short)(long)(scaled+(scaled>=0.0?0.5:-0.5));
  }
  out->samples[i*2]=mode==1?0:sample;
  out->samples[i*2+1]=mode==0?0:sample;
 }
 return (long *)out;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070c0
 */

int recovered_100070c0(void *track,void *view)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  int iVar3;

  if (view != (void *)0x0) {
    *(undefined4 *)view = 0;
    *(undefined4 *)((int)view + 8) = 0;
    *(undefined4 *)((int)view + 4) = 0;
    *(undefined4 *)((int)view + 0xc) = 0;
    *(undefined2 *)((int)view + 0x10) = 0;
    if ((((track != (void *)0x0) && (iVar2 = *(int *)((int)track + 4), iVar2 != 0)) &&
        (iVar3 = *(int *)((int)track + 0xc), iVar3 != 0)) &&
       (sVar1 = *(short *)((int)track + 0x10), sVar1 != 0)) {
      *(undefined4 *)view = *(undefined4 *)track;
      *(int *)((int)view + 4) = iVar2;
      *(undefined4 *)((int)view + 8) = 0;
      *(int *)((int)view + 0xc) = iVar3;
      *(short *)((int)view + 0x10) = sVar1;
      return CONCAT31((int3)((uint)view >> 8),1);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007130
 */

int recovered_10007130(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 == 0 || param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = recovered_10007160(param_2,param_1);
  return iVar1;
}


#undef DAT_10009f04
#define DAT_10009f04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59fU)))
#undef LAB_100072e7
#define LAB_100072e7 (*(uint8_t *)(0x100072e7U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define auStackY_11c (*(undefined1 (*)[128])(frame + 20))
#define local_84 (*(undefined4 *)(frame + 172))
#define local_80 (*(undefined4 *)(frame + 176))
#define local_6c (*(undefined * *)(frame + 196))
#define local_68 (*(undefined * *)(frame + 200))
#define local_64 (*(undefined1 * *)(frame + 204))
#define local_60 (*(undefined1 * *)(frame + 208))
#define local_5c (*(undefined1 * *)(frame + 212))
#define local_4c (*(uint * *)(frame + 228))
#define local_48 (*(bool *)(frame + 232))
#define local_44 (*(undefined4 *)(frame + 236))
#define local_40 (*(undefined4 *)(frame + 240))
#define local_3c (*(uint * *)(frame + 244))
#define local_38 (*(undefined4 *)(frame + 248))
#define local_34 (*(undefined1 *)(frame + 252))
#define local_30 (*(undefined4 *)(frame + 256))
#define local_2c (*(undefined1 *)(frame + 260))
#define local_28 (*(undefined4 *)(frame + 264))
#define local_24 (*(undefined1 *)(frame + 268))
#define local_20 (*(void * *)(frame + 272))
#define local_1c (*(int *)(frame + 276))
#define local_18 (*(undefined4 *)(frame + 280))
#define local_14 (*(undefined4 *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007160
 */

int recovered_10007160(int param_1,undefined4 *param_2)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX = 0;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 304) + -4);
  local_5c = auStackY_11c + 0x80;
  local_6c = PTR_recovered_10005550_1000b004;
  local_68 = &DAT_10009f04;
  local_60 = &LAB_100072e7;
  recovered_10005a10(&local_84);
  if (param_1 == 0) {
    iVar2 = 0;
    goto LAB_100072d2;
  }
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_80 = 1;
  uVar1 = recovered_10008f80(param_2,&local_20);
  if ((char)uVar1 == '\0') {
LAB_100072bb:
    iVar2 = 0;
  }
  else {
    local_4c = (uint *)0x0;
    local_3c = (uint *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 10;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x20;
    local_48 = false;
    local_40 = 0;
    local_44 = 0;
    local_80 = 2;
    local_4c = recovered_100044e0(param_1,((uintptr_t)pf_module_state + 0x4f7U));
    local_48 = local_4c != (uint *)0x0;
    local_40 = 0;
    local_44 = 0;
    local_38 = 0;
    local_3c = local_4c;
    if (local_4c == (uint *)0x0) goto LAB_100072bb;
    if (local_1c == 0 || local_20 != (void *)0x0) {
      local_80 = 3;
      local_14 = local_1c;
      iVar2 = recovered_10004ca0((int)local_20,1,local_1c,local_4c);
      local_48 = iVar2 == local_14;
      iVar2 = CONCAT31((int3)((uint)extraout_ECX >> 8),local_48);
      if (local_4c == (uint *)0x0) goto LAB_100072bb;
    }
    else {
      local_48 = false;
      iVar2 = 0;
    }
    local_80 = 4;
    local_14 = iVar2;
    recovered_10004920((int *)local_4c);
    iVar2 = local_14;
  }
  local_1c = 0;
  recovered_10005610(local_20);
LAB_100072d2:
  recovered_10005a30(&local_84);
  return iVar2;
}

#undef DAT_10009f04
#undef LAB_100072e7
#undef PTR_recovered_10005550_1000b004
#undef auStackY_11c
#undef local_84
#undef local_80
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
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

#undef DAT_10009d1c
#define DAT_10009d1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_10009d20
#define DAT_10009d20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef DAT_10009d24
#define DAT_10009d24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bfU)))
#undef DAT_10009d38
#define DAT_10009d38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d3U)))
#undef _DAT_10009d1c
#define _DAT_10009d1c (*(float *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef _DAT_10009d20
#define _DAT_10009d20 (*(float *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef _DAT_10009d24
#define _DAT_10009d24 (*(float *)(((uintptr_t)pf_module_state + 0x3bfU)))
#undef _DAT_10009d38
#define _DAT_10009d38 (*(double *)(((uintptr_t)pf_module_state + 0x3d3U)))
#define local_a4 (*(uint *)(frame + 28))
#define local_9c (*(int *)(frame + 36))
#define local_94 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007370(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort in_FPUControlWord = pf_fpu_control();
  longdouble lVar14;
  longdouble lVar15;
  longlong lVar16;

  if ((((param_4 < 0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) ||
       ((short)param_1[4] != 2)) || ((short)param_2[4] != 2)) ||
     ((param_1[3] == 0 || (param_2[3] == 0)))) {
    return 0;
  }
  uVar10 = param_1[1];
  uVar12 = param_2[1];
  if (1 < uVar12 && 1 < uVar10) {
    if (param_3 == 0 && param_4 == 0) {
      uVar13 = 0;
    }
    else {
      lVar14 = ((longdouble)(uint)param_1[3] * (longdouble)CONCAT44(param_4,param_3)) /
               (longdouble)_DAT_10009d1c;
      lVar15 = (longdouble)_DAT_10009d38;
      param_4 = CONCAT22((short)((uint)param_4 >> 0x10),
                         (ushort)(lVar14 < lVar15) << 8 | (ushort)(NAN(lVar14) || NAN(lVar15)) << 10
                         | (ushort)(lVar14 == lVar15) << 0xe);
      if (lVar14 < lVar15 == 0) goto LAB_1000779c;
      lVar16 = recovered_10009966(lVar14);
      uVar13 = (uint)lVar16;
    }
    uVar10 = uVar10 >> 1;
    uVar11 = uVar10 - uVar13;
    param_4 = uVar13;
    if (uVar13 <= uVar10 && uVar11 != 0) {
      uVar10 = param_2[3];
      uVar2 = param_1[3];
      lVar14 = recovered_10002220((double)(uVar12 >> 1) / ((double)uVar10 / (double)uVar2));
      param_4 = in_FPUControlWord | 0xc00;
      local_a4 = (uint)(longlong)ROUND(lVar14);
      if (uVar11 <= local_a4) {
        local_a4 = uVar11;
      }
      if (local_a4 != 0) {
        param_4 = *param_1;
        iVar8 = uVar13 * 4;
        uVar12 = 0;
        dVar6 = 0.0;
        do {
          dVar4 = ((double)uVar10 / (double)uVar2) * dVar6;
          sVar1 = *(short *)(param_4 + iVar8 + uVar12 * 4);
          uVar13 = (uint)*(ushort *)(param_2 + 4);
          dVar5 = 0.0;
          if (uVar13 != 0) {
            dVar5 = 0.0;
            uVar11 = param_2[1];
            if (uVar11 != 0 && 0.0 <= dVar4) {
              dVar5 = 0.0;
              if ((uVar13 <= uVar11) && (dVar4 < (double)(uVar11 / uVar13))) {
                lVar14 = recovered_100021d0(dVar4);
                local_9c = (int)(longlong)ROUND(lVar14);
                uVar13 = uVar11 / uVar13 - 1;
                if (local_9c + 1U <= uVar13) {
                  uVar13 = local_9c + 1U;
                }
                dVar5 = (double)*(short *)(*param_2 + local_9c * (uint)*(ushort *)(param_2 + 4) * 2)
                ;
                dVar5 = dVar5 + ((double)*(short *)(*param_2 + uVar13 * *(ushort *)(param_2 + 4) * 2
                                                   ) - dVar5) *
                                (dVar4 - (double)((longlong)ROUND(lVar14) & 0xffffffff));
              }
            }
          }
          dVar5 = dVar5 + (double)sVar1;
          uVar9 = 0x8000;
          if (((double)_DAT_10009d24 < dVar5) && (uVar9 = 0x7fff, dVar5 < (double)_DAT_10009d20)) {
            uVar7 = recovered_10002e30(dVar5);
            uVar9 = (undefined2)uVar7;
          }
          iVar3 = *param_1;
          *(undefined2 *)(iVar3 + iVar8 + uVar12 * 4) = uVar9;
          sVar1 = *(short *)(iVar3 + iVar8 + 2 + uVar12 * 4);
          uVar13 = (uint)*(ushort *)(param_2 + 4);
          dVar5 = 0.0;
          if (uVar13 != 0) {
            uVar11 = param_2[1];
            dVar5 = 0.0;
            if ((uVar11 == 0) || (*(ushort *)(param_2 + 4) == 1)) {
LAB_10007740:
              dVar5 = 0.0;
            }
            else if (0.0 <= dVar4) {
              dVar5 = 0.0;
              if (uVar11 < uVar13) goto LAB_10007740;
              if (dVar4 < (double)(int)(uVar11 / uVar13)) {
                lVar14 = recovered_100021d0(dVar4);
                local_94 = (int)(longlong)ROUND(lVar14);
                uVar13 = uVar11 / uVar13 - 1;
                if (local_94 + 1U <= uVar13) {
                  uVar13 = local_94 + 1U;
                }
                dVar5 = (double)*(short *)(*param_2 + 2 +
                                          local_94 * (uint)*(ushort *)(param_2 + 4) * 2);
                dVar5 = dVar5 + ((double)*(short *)(*param_2 + 2 +
                                                   uVar13 * *(ushort *)(param_2 + 4) * 2) - dVar5) *
                                (dVar4 - (double)((longlong)ROUND(lVar14) & 0xffffffff));
              }
            }
          }
          dVar5 = (double)sVar1 + dVar5;
          uVar9 = 0x8000;
          if (((double)_DAT_10009d24 < dVar5) && (uVar9 = 0x7fff, dVar5 < (double)_DAT_10009d20)) {
            uVar7 = recovered_10002e30(dVar5);
            uVar9 = (undefined2)uVar7;
          }
          param_4 = *param_1;
          *(undefined2 *)(param_4 + iVar8 + 2 + uVar12 * 4) = uVar9;
          dVar6 = dVar6 + 1.0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_a4);
      }
      param_1[5] = 0;
    }
  }
LAB_1000779c:
  return CONCAT31((int3)((uint)param_4 >> 8),1);
}

#undef DAT_10009d1c
#undef DAT_10009d20
#undef DAT_10009d24
#undef DAT_10009d38
#undef _DAT_10009d1c
#undef _DAT_10009d20
#undef _DAT_10009d24
#undef _DAT_10009d38
#undef local_a4
#undef local_9c
#undef local_94

#undef DAT_10009d1c
#define DAT_10009d1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef DAT_10009d38
#define DAT_10009d38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d3U)))
#undef DAT_10009f18
#define DAT_10009f18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b3U)))
#undef LAB_10007a04
#define LAB_10007a04 (*(uint8_t *)(0x10007a04U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#undef _DAT_10009d1c
#define _DAT_10009d1c (*(float *)(((uintptr_t)pf_module_state + 0x3b7U)))
#undef _DAT_10009d38
#define _DAT_10009d38 (*(double *)(((uintptr_t)pf_module_state + 0x3d3U)))
#define auStackY_10c (*(undefined1 (*)[128])(frame + 20))
#define local_7c (*(undefined4 *)(frame + 164))
#define uStack_40 (*(uint *)(frame + 224))
#define local_78 (*(undefined4 *)(frame + 168))
#define local_64 (*(undefined * *)(frame + 188))
#define uStack_38 (*(undefined4 *)(frame + 232))
#define local_60 (*(undefined * *)(frame + 192))
#define local_5c (*(undefined1 * *)(frame + 196))
#define uStack_30 (*(uint *)(frame + 240))
#define local_58 (*(undefined1 * *)(frame + 200))
#define local_54 (*(undefined1 * *)(frame + 204))
#define uStack_28 (*(undefined4 *)(frame + 248))
#define local_44 (*(uint *)(frame + 220))
#define local_3c (*(void * *)(frame + 228))
#define local_34 (*(uint *)(frame + 236))
#define local_2c (*(void * *)(frame + 244))
#define local_24 (*(uint *)(frame + 252))
#define local_20 (*(void * *)(frame + 256))
#define local_1c (*(void * *)(frame + 260))
#define local_18 (*(void * *)(frame + 264))
#define local_14 (*(undefined4 *)(frame + 268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100077b0(void **param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longdouble lVar5;
  longlong lVar6;

  local_5c = (undefined1 *)((int)(uintptr_t)(frame + 288) + -4);
  local_54 = auStackY_10c + 0x80;
  local_64 = PTR_recovered_10005550_1000b004;
  local_60 = &DAT_10009f18;
  local_58 = &LAB_10007a04;
  recovered_10005a10(&local_7c);
  uVar4 = 0;
  if ((((SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2))) !=
        (int)((param_5 - param_3) - (uint)(param_4 < param_2)) < 0) || (param_1 == (void **)0x0)) ||
     ((int)(param_5 | param_3) < 0)) goto LAB_100079ef;
  if (*(ushort *)(param_1 + 4) == 0) {
    uVar4 = 0;
    goto LAB_100079ef;
  }
  local_14 = param_1[3];
  uVar4 = 0;
  if (local_14 == (void *)0x0) goto LAB_100079ef;
  local_24 = (uint)param_1[1] / (uint)*(ushort *)(param_1 + 4);
  if ((int)(uint)(param_2 == 0) <= (int)param_3) {
    local_44 = param_2;
    uStack_40 = param_3;
    uStack_38 = 0;
    lVar5 = ((longdouble)local_14 * (longdouble)CONCAT44(param_3,param_2)) /
            (longdouble)_DAT_10009d1c;
    uVar4 = 0x7fffffff;
    local_3c = local_14;
    if (lVar5 < (longdouble)_DAT_10009d38) {
      local_78 = 0xffffffff;
      lVar6 = recovered_10009966(lVar5);
      uVar4 = (uint)lVar6;
      local_14 = param_1[3];
    }
  }
  uVar1 = local_24;
  uVar3 = 0;
  if (local_14 != (void *)0x0 && (int)(uint)(param_4 == 0) <= (int)param_5) {
    local_34 = param_4;
    uStack_30 = param_5;
    uStack_28 = 0;
    lVar5 = ((longdouble)local_14 * (longdouble)CONCAT44(param_5,param_4)) /
            (longdouble)_DAT_10009d1c;
    uVar3 = 0x7fffffff;
    local_2c = local_14;
    if (lVar5 < (longdouble)_DAT_10009d38) {
      local_78 = 0xffffffff;
      lVar6 = recovered_10009966(lVar5);
      uVar3 = (uint)lVar6;
    }
  }
  if (uVar1 < uVar4) {
    uVar2 = uVar1;
    if (uVar1 < uVar3) goto LAB_10007928;
LAB_100079c5:
    if (uVar3 <= uVar2) {
LAB_1000792c:
      uVar3 = uVar2;
    }
  }
  else {
    uVar2 = uVar4;
    if (uVar3 <= uVar1) goto LAB_100079c5;
LAB_10007928:
    uVar3 = uVar1;
    if (uVar1 <= uVar2) goto LAB_1000792c;
  }
  local_20 = (void *)0x0;
  local_18 = (void *)0x0;
  local_1c = (void *)0x0;
  local_78 = 1;
  recovered_10009830((int *)&local_20,0,
                     (undefined2 *)((int)*param_1 + uVar2 * *(ushort *)(param_1 + 4) * 2),
                     (undefined2 *)((int)*param_1 + uVar3 * *(ushort *)(param_1 + 4) * 2));
  if (&local_20 != param_1) {
    param_1[1] = (void *)0x0;
    recovered_10005610(*param_1);
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    local_20 = (void *)0x0;
    local_18 = (void *)0x0;
  }
  param_1[5] = (void *)0x0;
  local_1c = (void *)0x0;
  recovered_10005610(local_20);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
LAB_100079ef:
  recovered_10005a30(&local_7c);
  return uVar4;
}

#undef DAT_10009d1c
#undef DAT_10009d38
#undef DAT_10009f18
#undef LAB_10007a04
#undef PTR_recovered_10005550_1000b004
#undef _DAT_10009d1c
#undef _DAT_10009d38
#undef auStackY_10c
#undef local_7c
#undef uStack_40
#undef local_78
#undef local_64
#undef uStack_38
#undef local_60
#undef local_5c
#undef uStack_30
#undef local_58
#undef local_54
#undef uStack_28
#undef local_44
#undef local_3c
#undef local_34
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_10 (*(undefined2 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a40
 */

undefined4 recovered_10007a40(undefined4 *param_1,double param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  double dVar4;

  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    dVar4 = param_2;
    bVar1 = recovered_10005d60(SUB84(param_2,0),(uint)((ulonglong)param_2 >> 0x20));
    uVar3 = 0;
    if ((0.0 < param_2) && (CONCAT31(extraout_var,bVar1) != 0)) {
      uVar3 = 1;
      if (((param_2 != 1.0) || (NAN(param_2))) &&
         ((uVar2 = (uint)*(ushort *)(param_1 + 4), uVar2 != 0 && (uVar2 <= (uint)param_1[1])))) {
        recovered_10007b00(&local_20,param_1,(uint)param_1[1] / uVar2,
                           (int)(pf_double_bits(dVar4) >> 0x20),param_2);
        param_1[1] = 0;
        recovered_10005610((void *)*param_1);
        *param_1 = local_20;
        param_1[1] = local_1c;
        param_1[2] = local_18;
        param_1[3] = local_14;
        *(undefined2 *)(param_1 + 4) = local_10;
        recovered_10005610((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar3;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10

#undef DAT_10009d20
#define DAT_10009d20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef DAT_10009d24
#define DAT_10009d24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bfU)))
#undef DAT_10009f20
#define DAT_10009f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bbU)))
#undef LAB_10007dfc
#define LAB_10007dfc (*(uint8_t *)(0x10007dfcU))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#undef _DAT_10009d20
#define _DAT_10009d20 (*(float *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef _DAT_10009d24
#define _DAT_10009d24 (*(float *)(((uintptr_t)pf_module_state + 0x3bfU)))
#define local_88 (*(undefined * *)(frame + 200))
#define local_84 (*(undefined1 * *)(frame + 204))
#define local_80 (*(undefined1 * *)(frame + 208))
#define local_7c (*(undefined1 * *)(frame + 212))
#define local_6c (*(double *)(frame + 228))
#define local_64 (*(uint *)(frame + 236))
#define local_5c (*(uint *)(frame + 244))
#define local_54 (*(int *)(frame + 252))
#define local_48 (*(void * *)(frame + 264))
#define local_44 (*(uint *)(frame + 268))
#define local_40 (*(undefined4 * *)(frame + 272))
#define local_3c (*(double *)(frame + 276))
#define local_34 (*(void * *)(frame + 284))
#define local_30 (*(uint *)(frame + 288))
#define local_2c (*(uint *)(frame + 292))
#define local_26 (*(short *)(frame + 298))
#define local_24 (*(short *)(frame + 300))
#define local_22 (*(ushort *)(frame + 302))
#define local_20 (*(uint *)(frame + 304))
#define local_1a (*(ushort *)(frame + 310))
#define local_18 (*(int * *)(frame + 312))
#define local_14 (*(undefined4 * *)(frame + 316))
#define auStackY_13c (*(undefined1 (*)[128])(frame + 20))
#define uStack_60 (*(undefined4 *)(frame + 240))
#define uStack_58 (*(undefined4 *)(frame + 248))
#define uStack_50 (*(undefined4 *)(frame + 256))
#define local_ac (*(int *)(frame + 164))
#define local_a4 (*(undefined4 *)(frame + 172))
#define local_a0 (*(undefined4 *)(frame + 176))
#define local_8c (*(undefined * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
recovered_10007b00(undefined4 *in_ECX,int *in_EDX,uint param_3,undefined4 param_4,double param_5)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  double dVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort in_FPUControlWord = pf_fpu_control();
  longdouble lVar9;

  local_84 = (undefined1 *)((int)(uintptr_t)(frame + 336) + -4);
  local_7c = auStackY_13c + 0x80;
  *in_ECX = 0;
  in_ECX[2] = 0;
  iVar8 = in_EDX[3];
  in_ECX[3] = iVar8;
  uVar5 = *(ushort *)(in_EDX + 4);
  *(ushort *)(in_ECX + 4) = uVar5;
  local_6c = param_5;
  in_ECX[1] = 0;
  local_8c = PTR_recovered_10005550_1000b004;
  local_30 = (uint)uVar5;
  uVar6 = local_30 * param_3;
  local_88 = &DAT_10009f20;
  local_80 = &LAB_10007dfc;
  local_40 = in_ECX;
  local_18 = in_EDX;
  local_14 = in_ECX;
  recovered_10005a10(&local_a4);
  local_1a = uVar5;
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    local_a0 = 1;
    local_20 = uVar6;
    pvVar3 = recovered_100055b0(uVar6 * 2);
    recovered_10005610((void *)0x0);
    *local_14 = pvVar3;
    local_14[2] = local_20;
    uVar6 = 0;
    do {
      *(undefined2 *)((int)pvVar3 + uVar6 * 2) = 0;
      uVar6 = uVar6 + 1;
    } while (local_20 != uVar6);
    local_14[1] = local_20;
    uVar5 = *(ushort *)(local_18 + 4);
    iVar8 = local_18[3];
  }
  local_34 = pvVar3;
  if ((((0.0 < local_6c) && (uVar5 != 0)) && (iVar8 != 0)) && (param_3 != 0 && local_18[1] != 0)) {
    uVar6 = 0;
    uVar5 = local_1a;
    do {
      uStack_60 = 0;
      local_3c = local_6c * (double)uVar6;
      local_64 = uVar6;
      local_2c = uVar6;
      if (uVar5 != 0) {
        local_48 = (void *)(uVar6 * local_30 * 2 + (int)local_34);
        uVar6 = 0;
        do {
          uVar7 = (uint)*(ushort *)(local_18 + 4);
          dVar1 = 0.0;
          local_20 = uVar6;
          if (((uVar7 == 0) || (uVar7 <= uVar6)) ||
             ((local_3c < 0.0 || (uVar6 = local_18[1], uVar6 == 0)))) {
LAB_10007dc0:
            local_a0 = 3;
            uVar4 = recovered_10002e30(dVar1);
            uVar2 = (undefined2)uVar4;
          }
          else {
            local_5c = uVar6 / uVar7;
            uStack_58 = 0;
            dVar1 = 0.0;
            if ((double)local_5c <= local_3c || uVar6 < uVar7) goto LAB_10007dc0;
            local_a0 = 2;
            local_44 = local_5c;
            lVar9 = recovered_100021d0(local_3c);
            local_22 = in_FPUControlWord | 0xc00;
            local_ac = (int)(longlong)ROUND(lVar9);
            uVar6 = local_44 - 1;
            if (local_ac + 1U <= local_44 - 1) {
              uVar6 = local_ac + 1U;
            }
            local_54 = local_ac;
            uStack_50 = 0;
            local_24 = *(short *)(*local_18 + local_ac * (uint)*(ushort *)(local_18 + 4) * 2 +
                                 local_20 * 2);
            local_26 = *(short *)(*local_18 + uVar6 * *(ushort *)(local_18 + 4) * 2 + local_20 * 2);
            dVar1 = (double)local_24 +
                    ((double)local_26 - (double)local_24) *
                    (local_3c - (double)((longlong)ROUND(lVar9) & 0xffffffff));
            uVar2 = 0x8000;
            if (((double)_DAT_10009d24 < dVar1) && (uVar2 = 0x7fff, dVar1 < (double)_DAT_10009d20))
            goto LAB_10007dc0;
          }
          *(undefined2 *)((int)local_48 + local_20 * 2) = uVar2;
          uVar6 = local_20 + 1;
          uVar5 = local_1a;
        } while (uVar6 != local_30);
      }
      uVar6 = local_2c + 1;
    } while (uVar6 != param_3);
  }
  recovered_10005a30(&local_a4);
  return local_40;
}

#undef DAT_10009d20
#undef DAT_10009d24
#undef DAT_10009f20
#undef LAB_10007dfc
#undef PTR_recovered_10005550_1000b004
#undef _DAT_10009d20
#undef _DAT_10009d24
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_6c
#undef local_64
#undef local_5c
#undef local_54
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_34
#undef local_30
#undef local_2c
#undef local_26
#undef local_24
#undef local_22
#undef local_20
#undef local_1a
#undef local_18
#undef local_14
#undef auStackY_13c
#undef uStack_60
#undef uStack_58
#undef uStack_50
#undef local_ac
#undef local_a4
#undef local_a0
#undef local_8c

#define local_38 (*(undefined4 *)(frame + 24))
#define local_34 (*(undefined4 *)(frame + 28))
#define uStack_18 (*(undefined4 *)(frame + 56))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_2c (*(undefined4 *)(frame + 36))
#define local_28 (*(undefined2 *)(frame + 40))
#define local_24 (*(double *)(frame + 44))
#define local_1c (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e60
 */

undefined4 recovered_10007e60(undefined4 *param_1,double param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar6;
  double dVar5;

  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_24 = param_2;
    bVar1 = recovered_10005d60(SUB84(param_2,0),(uint)((ulonglong)param_2 >> 0x20));
    uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
    uVar3 = 0;
    if ((0.0 < local_24) && (CONCAT31(extraout_var,bVar1) != 0)) {
      uVar3 = 1;
      if (((local_24 != 1.0) || (NAN(local_24))) &&
         ((local_1c = (uint)*(ushort *)(param_1 + 4), local_1c != 0 &&
          (local_1c <= (uint)param_1[1])))) {
        uVar2 = 0;
        local_1c = (uint)param_1[1] / local_1c;
        uStack_18 = 0;
        dVar5 = (double)local_1c / local_24;
        if (0.0 < dVar5) {
          lVar4 = recovered_100024a0(dVar5);
          uVar6 = (undefined4)(pf_double_bits(dVar5) >> 0x20);
          uVar2 = (uint)lVar4;
        }
        recovered_10007b00(&local_38,param_1,uVar2,uVar6,local_24);
        param_1[1] = 0;
        recovered_10005610((void *)*param_1);
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        *(undefined2 *)(param_1 + 4) = local_28;
        recovered_10005610((void *)0x0);
        param_1[5] = 0;
      }
    }
  }
  return uVar3;
}

#undef local_38
#undef local_34
#undef uStack_18
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f60
 */

undefined4 recovered_10007f60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f70
 */

undefined8 recovered_10007f70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f80
 */

undefined8 recovered_10007f80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f90
 */

void recovered_10007f90(void *track)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (track == (void *)0x0) {
    return;
  }
  *(undefined4 *)((int)track + 0x14) = 0;
  *(undefined4 *)((int)track + 4) = 0;
  recovered_10005610(*(void **)track);
  recovered_10005610(track);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fd0
 */

void recovered_10007fd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10009f2c
#define DAT_10009f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c7U)))
#undef LAB_10008243
#define LAB_10008243 (*(uint8_t *)(0x10008243U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_6c (*(undefined4 *)(frame + 164))
#define local_68 (*(undefined4 *)(frame + 168))
#define local_54 (*(undefined * *)(frame + 188))
#define local_50 (*(undefined * *)(frame + 192))
#define local_4c (*(undefined1 * *)(frame + 196))
#define local_48 (*(undefined1 * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_38 (*(int * *)(frame + 216))
#define local_34 (*(bool *)(frame + 220))
#define local_30 (*(uint *)(frame + 224))
#define local_2c (*(undefined4 *)(frame + 228))
#define local_28 (*(int * *)(frame + 232))
#define local_24 (*(undefined4 *)(frame + 236))
#define local_20 (*(undefined4 *)(frame + 240))
#define local_1c (*(undefined4 *)(frame + 244))
#define local_18 (*(undefined4 *)(frame + 248))
#define local_14 (*(undefined4 *)(frame + 252))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fe0
 */

uint recovered_10007fe0(int param_1,int *param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar6;
  undefined4 unaff_EBX = 0;
  undefined4 uVar5;
  uint uVar7;

  local_4c = auStackY_fc + 0xf8;
  local_44 = auStackY_fc + 0x80;
  local_54 = PTR_recovered_10005550_1000b004;
  local_50 = &DAT_10009f2c;
  local_48 = &LAB_10008243;
  recovered_10005a10(&local_6c);
  bVar6 = param_2 == (int *)0x0 || param_1 == 0;
  uVar5 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar6,param_1 == 0));
  if (bVar6) {
    uVar2 = 0;
    goto LAB_10008231;
  }
  local_38 = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_34 = false;
  local_2c = 0;
  local_30 = 0;
  local_68 = 1;
  local_38 = recovered_100044e0(param_1,((uintptr_t)pf_module_state + 0x4faU));
  local_34 = local_38 != (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_28 = local_38;
  if (local_34) {
    local_68 = 2;
    iVar1 = recovered_10004e00(local_38,0,2);
    local_34 = iVar1 == 0;
    if (local_38 != (int *)0x0) {
      local_68 = 3;
      uVar2 = recovered_10004e80((int)local_38);
      if ((int)uVar2 < 0) {
        local_34 = false;
LAB_10008142:
        uVar2 = 0;
        if (local_38 == (int *)0x0) goto LAB_10008231;
      }
      else {
        local_34 = true;
        if (uVar2 == 0) goto LAB_10008142;
        local_14 = uVar2;
        if (local_38 == (int *)0x0) {
          local_34 = false;
        }
        else {
          local_68 = 4;
          iVar1 = recovered_10004e00(local_38,0,0);
          local_34 = iVar1 == 0;
        }
        uVar2 = param_2[1];
        uVar7 = local_14;
        if (local_14 < uVar2) {
          param_2[1] = local_14;
        }
        else if (uVar2 < local_14) {
          if ((uint)param_2[2] < local_14) {
            local_68 = 5;
            pvVar3 = recovered_100055b0(local_14);
            pointer = (void *)*param_2;
            iVar1 = param_2[1];
            if (iVar1 != 0) {
              iVar4 = 0;
              do {
                uVar5 = 0;
                *(undefined1 *)((int)pvVar3 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
                iVar4 = iVar4 + 1;
              } while (iVar1 != iVar4);
            }
            recovered_10005610(pointer);
            *param_2 = (int)pvVar3;
            param_2[2] = local_14;
            uVar2 = param_2[1];
            uVar7 = local_14;
          }
          while (uVar2 < uVar7) {
            *(undefined1 *)(*param_2 + uVar2) = 0;
            uVar2 = param_2[1] + 1;
            param_2[1] = uVar2;
          }
        }
        if ((undefined1 *)*param_2 == (undefined1 *)0x0 || local_38 == (int *)0x0) {
          uVar2 = 0;
          local_30 = 0;
        }
        else {
          local_68 = 6;
          local_30 = recovered_100049f0((undefined1 *)*param_2,1,uVar7,local_38);
          uVar2 = CONCAT31((int3)((uint)uVar5 >> 8),local_30 == local_14);
        }
        local_34 = SUB41(uVar2,0);
        local_2c = 0;
        if (local_38 == (int *)0x0) goto LAB_1000822c;
      }
      local_68 = 7;
      local_14 = uVar2;
      recovered_10004920(local_38);
      uVar2 = local_14;
      goto LAB_10008231;
    }
  }
LAB_1000822c:
  uVar2 = 0;
LAB_10008231:
  recovered_10005a30(&local_6c);
  return uVar2;
}

#undef DAT_10009f2c
#undef LAB_10008243
#undef PTR_recovered_10005550_1000b004
#undef auStackY_fc
#undef local_6c
#undef local_68
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
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

#undef DAT_10009d40
#define DAT_10009d40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dbU)))
#undef DAT_10009e62
#define DAT_10009e62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fdU)))
#undef DAT_10009e67
#define DAT_10009e67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x502U)))
#undef DAT_10009e6c
#define DAT_10009e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
#undef DAT_10009e71
#define DAT_10009e71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50cU)))
#undef DAT_10009f48
#define DAT_10009f48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e3U)))
#undef LAB_10008a29
#define LAB_10008a29 (*(uint8_t *)(0x10008a29U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define local_1c (*(uint *)(frame + 324))
#define local_18 (*(uint *)(frame + 328))
#define local_14 (*(undefined4 *)(frame + 332))
#define local_9c (*(int *)(frame + 196))
#define local_90 (*(uint *)(frame + 208))
#define local_8c (*(undefined4 *)(frame + 212))
#define local_88 (*(undefined4 *)(frame + 216))
#define auStackY_14c (*(undefined1 (*)[128])(frame + 20))
#define local_74 (*(undefined * *)(frame + 236))
#define local_70 (*(undefined * *)(frame + 240))
#define local_6c (*(undefined1 * *)(frame + 244))
#define local_68 (*(undefined1 * *)(frame + 248))
#define local_64 (*(undefined1 * *)(frame + 252))
#define local_58 (*(uint *)(frame + 264))
#define local_54 (*(void * *)(frame + 268))
#define local_50 (*(void * *)(frame + 272))
#define local_4c (*(void * *)(frame + 276))
#define local_48 (*(void * *)(frame + 280))
#define local_44 (*(short *)(frame + 284))
#define local_40 (*(double *)(frame + 288))
#define local_38 (*(uint *)(frame + 296))
#define local_34 (*(undefined8 *)(frame + 300))
#define local_2c (*(undefined8 *)(frame + 308))
#define local_24 (*(uint3 * *)(frame + 316))
#define local_20 (*(uint3 * *)(frame + 320))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082c0
 */

undefined4 recovered_100082c0(int param_1,uint param_2,void **param_3,ushort *param_4)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  uint3 *puVar12;
  uint uVar13;
  uint3 *puVar14;
  undefined4 uVar15;
  short sVar16;
  undefined2 uVar17;
  uint uVar18;
  longdouble lVar19;

  local_6c = (undefined1 *)((int)(uintptr_t)(frame + 352) + -4);
  local_64 = auStackY_14c + 0x80;
  local_74 = PTR_recovered_10005550_1000b004;
  local_70 = &DAT_10009f48;
  local_68 = &LAB_10008a29;
  recovered_10005a10(&local_8c);
  uVar15 = 0;
  if (((0xb < param_2) && (param_1 != 0)) && (param_3 != (void **)0x0)) {
    local_88 = 0xffffffff;
    iVar4 = recovered_10001950((uint *)param_1,(uint *)&DAT_10009e62,4);
    if (iVar4 == 0) {
      local_88 = 0xffffffff;
      iVar4 = recovered_10001950((uint *)(param_1 + 8),(uint *)&DAT_10009e67,4);
      local_20 = (uint3 *)0x0;
      uVar15 = 0;
      if (iVar4 == 0) {
        if (param_2 < 0x14) {
          bVar9 = 1;
          local_24 = (uint3 *)0x0;
          local_2c = pf_double_bits((double)((ulonglong)PF_PART4(local_2c, 4) << 0x20));
          local_34 = pf_double_bits((double)((ulonglong)PF_PART4(local_34, 4) << 0x20));
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          iVar4 = 0xc;
          local_40 = pf_bits_double((pf_double_bits(local_40) & 0xffffffff00000000));
          local_20 = (uint3 *)0x0;
          uVar13 = 0x14;
          local_34 = pf_double_bits((double)((ulonglong)PF_PART4(local_34, 4) << 0x20));
          local_14 = 0;
          local_2c = pf_double_bits((double)((ulonglong)PF_PART4(local_2c, 4) << 0x20));
          local_1c = 0;
          local_24 = (uint3 *)0x0;
          do {
            uVar7 = *(uint *)(param_1 + 4 + iVar4);
            if (param_2 < uVar7 + uVar13) goto LAB_1000869f;
            local_88 = 0xffffffff;
            local_18 = uVar7 + uVar13;
            iVar5 = recovered_10001950((uint *)(iVar4 + param_1),(uint *)&DAT_10009e6c,4);
            if (iVar5 == 0) {
              if (uVar7 < 0x10) goto LAB_1000869f;
              uVar3 = *(ushort *)(param_1 + uVar13);
              local_40 = pf_bits_double(CONCAT44(PF_PART4(local_40, 4),(uint)*(ushort *)(param_1 + 2 + uVar13)));
              local_34 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_34, 4),*(undefined4 *)(param_1 + 4 + uVar13))));
              uVar1 = *(ushort *)(param_1 + 0xe + uVar13);
              local_14 = (uint)uVar1;
              if ((uVar3 == 0xfffe) &&
                 (((uVar7 < 0x28 || (*(ushort *)(param_1 + 0x10 + uVar13) < 0x16)) ||
                  (uVar3 = *(ushort *)(param_1 + 0x18 + uVar13), (uVar3 & 0xfffd) != 1))))
              goto LAB_1000869f;
              if (uVar3 == 1) {
                uVar13 = local_14 - 8;
                if ((uVar13 & 0xffe7) != 0) goto LAB_10008335;
                local_1c = CONCAT31((int3)(uVar13 >> 8),1);
                local_24 = (uint3 *)CONCAT22((short)(uVar13 >> 0x10),1);
              }
              else {
                if (uVar3 != 3) goto LAB_10008335;
                local_1c = 1;
                local_24 = (uint3 *)0x3;
                if ((uVar1 != 0x20) && (local_14 != 0x40)) goto LAB_10008335;
              }
            }
            else {
              local_88 = 0xffffffff;
              iVar4 = recovered_10001950((uint *)(iVar4 + param_1),(uint *)&DAT_10009e71,4);
              if (iVar4 == 0 && local_20 == (uint3 *)0x0) {
                local_20 = (uint3 *)(uVar13 + param_1);
                local_2c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),uVar7)));
              }
            }
            iVar4 = local_18 + (uVar7 & 1);
            uVar13 = local_18 + 8 + (uVar7 & 1);
          } while (uVar13 <= param_2);
          bVar9 = (byte)local_1c ^ 1;
          uVar13 = local_14;
          uVar7 = PF_PART4(local_40, 0);
        }
        uVar15 = 0;
        if ((((((bVar9 & 1) == 0) && (local_20 != (uint3 *)0x0)) && ((uint)local_2c != 0)) &&
            (((short)uVar7 != 0 && ((void *)local_34 != (void *)0x0)))) &&
           (uVar15 = 0, 7 < (ushort)uVar13)) {
          uVar6 = uVar7 & 0xffff;
          local_18 = uVar13 & 0xffff;
          local_1c = local_18 >> 3;
          uVar13 = uVar6 * local_1c;
          if ((uVar13 != 0) && (uVar13 <= (uint)local_2c)) {
            uVar18 = (uint)*param_4;
            if (*param_4 == 0) {
              uVar18 = uVar7;
            }
            sVar16 = (short)uVar18;
            if (sVar16 == 0) {
LAB_1000869f:
              uVar15 = 0;
            }
            else {
              local_40 = pf_bits_double(CONCAT44(PF_PART4(local_40, 4),uVar7));
              local_58 = uVar18 & 0xffff;
              local_9c = 0;
              uVar7 = (uint)local_2c / uVar13;
              local_54 = (void *)0x0;
              local_50 = (void *)0x0;
              local_4c = (void *)0x0;
              local_48 = (void *)local_34;
              local_88 = 1;
              local_44 = sVar16;
              recovered_10008c40((int *)&local_54,uVar7 * local_58);
              local_90 = local_1c;
              if (SUB82(local_40,0) < 2) {
                local_90 = 0;
              }
              uVar8 = PF_PART4(local_40, 0) & 0xffff;
              uVar18 = PF_PART4(local_40, 0) - 1;
              iVar4 = local_58 * 2;
              local_14 = (uint)local_24 & 0xffff;
              local_40 = -1.0;
              uVar11 = 0;
              puVar14 = local_20;
              do {
                puVar12 = (uint3 *)(uVar11 * uVar13 + (int)local_20);
                local_34 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_34, 4),puVar12)));
                local_38 = uVar11;
                if (sVar16 == 2) {
                  local_88 = 4;
                  lVar19 = recovered_10008cd0(puVar12,(short)local_14,(ushort)local_18);
                  local_2c = pf_double_bits((double)lVar19);
                  local_88 = 5;
                  lVar19 = recovered_10008cd0((uint3 *)((int)(void *)local_34 + local_90),
                                              (short)local_14,(ushort)local_18);
                  uVar10 = 0x8000;
                  if ((local_40 < local_2c) && (uVar10 = 0x7fff, pf_bits_double(local_2c) < 1.0)) {
                    dVar2 = local_2c * *(double *)(&DAT_10009d40 + (uint)(pf_bits_double(local_2c) < 0.0) * 8);
                    local_88 = 6;
                    local_2c = pf_double_bits((double)lVar19);
                    uVar15 = recovered_10002e30(dVar2);
                    uVar10 = (undefined2)uVar15;
                    lVar19 = (longdouble)local_2c;
                  }
                  uVar17 = 0x8000;
                  *(undefined2 *)((int)local_54 + local_38 * 4) = uVar10;
                  if (((longdouble)local_40 < lVar19) && (uVar17 = 0x7fff, lVar19 < (longdouble)1))
                  {
                    local_88 = 7;
                    uVar15 = recovered_10002e30((double)(lVar19 * (longdouble)
                                                                  *(double *)
                                                                   (&DAT_10009d40 +
                                                                   (uint)(lVar19 < (longdouble)0) *
                                                                   8)));
                    uVar17 = (undefined2)uVar15;
                  }
                  *(undefined2 *)((int)local_54 + local_38 * 4 + 2) = uVar17;
                }
                else if (local_58 == 1) {
                  lVar19 = (longdouble)0;
                  uVar11 = uVar6;
                  puVar12 = puVar14;
                  do {
                    local_34 = pf_double_bits((double)lVar19);
                    local_2c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),uVar11)));
                    local_88 = 3;
                    local_24 = puVar12;
                    lVar19 = recovered_10008cd0(puVar12,(short)local_14,(ushort)local_18);
                    lVar19 = (longdouble)local_34 + lVar19;
                    puVar12 = (uint3 *)((int)local_24 + local_1c);
                    uVar11 = (uint)local_2c - 1;
                  } while (uVar11 != 0);
                  lVar19 = lVar19 / (longdouble)uVar8;
                  uVar10 = 0x8000;
                  if (((longdouble)local_40 < lVar19) && (uVar10 = 0x7fff, lVar19 < (longdouble)1))
                  {
                    local_88 = 2;
                    uVar15 = recovered_10002e30((double)(lVar19 * (longdouble)
                                                                  *(double *)
                                                                   (&DAT_10009d40 +
                                                                   (uint)(lVar19 < (longdouble)0) *
                                                                   8)));
                    uVar10 = (undefined2)uVar15;
                  }
                  *(undefined2 *)((int)local_54 + local_38 * 2) = uVar10;
                }
                else {
                  uVar11 = 0;
                  do {
                    local_2c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_2c, 4),uVar11)));
                    if (uVar6 <= uVar11) {
                      uVar11 = uVar18;
                    }
                    local_88 = 8;
                    lVar19 = recovered_10008cd0((uint3 *)((uVar11 & 0xffff) * local_1c +
                                                         (int)(void *)local_34),(short)local_14,
                                                (ushort)local_18);
                    uVar10 = 0x8000;
                    if (((longdouble)local_40 < lVar19) && (uVar10 = 0x7fff, lVar19 < (longdouble)1)
                       ) {
                      local_88 = 9;
                      uVar15 = recovered_10002e30((double)(lVar19 * (longdouble)
                                                                    *(double *)
                                                                     (&DAT_10009d40 +
                                                                     (uint)(lVar19 < (longdouble)0)
                                                                     * 8)));
                      uVar10 = (undefined2)uVar15;
                    }
                    *(undefined2 *)((int)local_54 + (uint)local_2c * 2 + local_9c) = uVar10;
                    uVar11 = (uint)local_2c + 1;
                  } while (local_58 != uVar11);
                }
                uVar11 = local_38 + 1;
                puVar14 = (uint3 *)((int)puVar14 + uVar13);
                local_9c = local_9c + iVar4;
              } while (uVar11 < uVar7);
              if (&local_54 != param_3) {
                param_3[1] = (void *)0x0;
                recovered_10005610(*param_3);
                *param_3 = local_54;
                param_3[1] = local_50;
                param_3[2] = local_4c;
                local_54 = (void *)0x0;
                local_4c = (void *)0x0;
              }
              *(short *)(param_3 + 4) = local_44;
              param_3[3] = local_48;
              local_50 = (void *)0x0;
              recovered_10005610(local_54);
              uVar15 = 1;
            }
          }
        }
      }
    }
    else {
LAB_10008335:
      uVar15 = 0;
    }
  }
  recovered_10005a30(&local_8c);
  return uVar15;
}

#undef DAT_10009d40
#undef DAT_10009e62
#undef DAT_10009e67
#undef DAT_10009e6c
#undef DAT_10009e71
#undef DAT_10009f48
#undef LAB_10008a29
#undef PTR_recovered_10005550_1000b004
#undef local_1c
#undef local_18
#undef local_14
#undef local_9c
#undef local_90
#undef local_8c
#undef local_88
#undef auStackY_14c
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_2c
#undef local_24
#undef local_20

#undef DAT_10009f60
#define DAT_10009f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5fbU)))
#undef LAB_10008b16
#define LAB_10008b16 (*(uint8_t *)(0x10008b16U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(undefined * *)(frame + 180))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008aa0
 */

void recovered_10008aa0(int *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  piVar1 = (int *)*param_1;
  local_2c = PTR_recovered_10005550_1000b004;
  local_28 = &DAT_10009f60;
  local_20 = &LAB_10008b16;
  recovered_10005a10(&local_44);
  if (piVar1 != (int *)0x0) {
    local_40 = 1;
    recovered_10004920(piVar1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009f60
#undef LAB_10008b16
#undef PTR_recovered_10005550_1000b004
#undef local_40
#undef local_2c
#undef auStack_18
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc
#undef local_44

#undef DAT_10009f70
#define DAT_10009f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60bU)))
#undef LAB_10008bb6
#define LAB_10008bb6 (*(uint8_t *)(0x10008bb6U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(undefined * *)(frame + 180))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b40
 */

void recovered_10008b40(int *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  piVar1 = (int *)*param_1;
  local_2c = PTR_recovered_10005550_1000b004;
  local_28 = &DAT_10009f70;
  local_20 = &LAB_10008bb6;
  recovered_10005a10(&local_44);
  if (piVar1 != (int *)0x0) {
    local_40 = 1;
    recovered_10004920(piVar1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009f70
#undef LAB_10008bb6
#undef PTR_recovered_10005550_1000b004
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
 * Address: 0x10008be0
 */

void recovered_10008be0(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  int iVar3;

  if ((uint)param_1[2] < param_2) {
    pvVar2 = recovered_100055b0(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar3) = *(undefined1 *)((int)pointer + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
    recovered_10005610(pointer);
    *param_1 = pvVar2;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c40
 */

void recovered_10008c40(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;

  uVar2 = param_1[1];
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) {
      return;
    }
    if ((uint)param_1[2] < param_2) {
      pvVar1 = recovered_100055b0(param_2 * 2);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined2 *)((int)pvVar1 + iVar5 * 2) = *(undefined2 *)((int)pointer + iVar5 * 2);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_10005610(pointer);
      *param_1 = (int)pvVar1;
      param_1[2] = param_2;
      uVar2 = param_1[1];
    }
    iVar4 = param_2 - uVar2;
    if (param_2 < uVar2 || iVar4 == 0) {
      return;
    }
    puVar3 = (undefined2 *)(uVar2 * 2 + *param_1);
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}


#undef DAT_10009d28
#define DAT_10009d28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c3U)))
#undef DAT_10009d2c
#define DAT_10009d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c7U)))
#undef DAT_10009d30
#define DAT_10009d30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef DAT_10009d34
#define DAT_10009d34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cfU)))
#undef _DAT_10009d28
#define _DAT_10009d28 (*(float *)(((uintptr_t)pf_module_state + 0x3c3U)))
#undef _DAT_10009d2c
#define _DAT_10009d2c (*(float *)(((uintptr_t)pf_module_state + 0x3c7U)))
#undef _DAT_10009d30
#define _DAT_10009d30 (*(float *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef _DAT_10009d34
#define _DAT_10009d34 (*(float *)(((uintptr_t)pf_module_state + 0x3cfU)))
#define local_14 (*(double (*)[2])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10008cd0(uint3 *param_1,short param_2,ushort param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;

  lVar5 = (longdouble)0;
  if (param_2 == 3) {
    if (param_3 == 0x40) {
      local_14[0] = 0.0;
      recovered_100014d0((undefined4 *)local_14,(undefined4 *)param_1,8);
      lVar4 = (longdouble)(uintptr_t)local_14[0];
      lVar3 = (longdouble)1;
      lVar2 = lVar3;
      if (lVar4 <= lVar3) {
        lVar2 = lVar4;
      }
      lVar5 = -lVar3;
      if (-lVar3 <= lVar4) {
        lVar5 = lVar2;
      }
    }
    else if (param_3 == 0x20) {
      local_14[0] = (double)((ulonglong)local_14[0] & 0xffffffff00000000);
      recovered_100014d0((undefined4 *)local_14,(undefined4 *)param_1,4);
      lVar2 = (longdouble)PF_PART4(local_14[0], 0);
      lVar5 = (longdouble)1;
      lVar3 = lVar5;
      if (lVar2 <= lVar5) {
        lVar3 = lVar2;
      }
      lVar5 = -lVar5;
      if (-(longdouble)1 <= lVar2) {
        lVar5 = lVar3;
      }
    }
  }
  else if (param_2 == 1) {
    switch((uintptr_t)((uint)param_3 << 0x1d | param_3 - 8 >> 3)) {
    case 0:
      lVar5 = (longdouble)(int)((byte)*param_1 - 0x80) * (longdouble)_DAT_10009d34;
      break;
    case 1:
      lVar5 = (longdouble)(short)*param_1 * (longdouble)_DAT_10009d30;
      break;
    case 2:
      if ((char)*(byte *)((int)param_1 + 2) < '\0') {
        uVar1 = (uint)*(byte *)((int)param_1 + 2) * 0x10000 + -0x1000000 + (uint)(ushort)*param_1;
      }
      else {
        uVar1 = (uint)*param_1;
      }
      lVar5 = (longdouble)(int)uVar1 * (longdouble)_DAT_10009d2c;
      break;
    case 3:
      lVar5 = (longdouble)*(int *)param_1 * (longdouble)_DAT_10009d28;
    }
  }
  return lVar5;
}

#undef DAT_10009d28
#undef DAT_10009d2c
#undef DAT_10009d30
#undef DAT_10009d34
#undef _DAT_10009d28
#undef _DAT_10009d2c
#undef _DAT_10009d30
#undef _DAT_10009d34
#undef local_14

#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e30
 */

void recovered_10008e30(int *param_1,int param_2,uint param_3)

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
        recovered_10008e30((int *)&local_1c,(int)(puVar3 + uVar4),uVar6);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_1c;
        iVar2 = param_1[1];
        param_1[1] = local_18;
        iVar5 = param_1[2];
        param_1[2] = local_14;
        local_1c = pvVar1;
        local_18 = iVar2;
        local_14 = iVar5;
        recovered_10005610(pvVar1);
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
      puVar3 = recovered_100055b0(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_100055b0(uVar6 + 1);
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
      recovered_10005610(pvVar1);
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

#undef DAT_10009e62
#define DAT_10009e62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fdU)))
#undef DAT_10009e66
#define DAT_10009e66 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x501U)))
#undef DAT_10009e67
#define DAT_10009e67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x502U)))
#undef DAT_10009e6b
#define DAT_10009e6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x506U)))
#undef DAT_10009e6c
#define DAT_10009e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x507U)))
#undef DAT_10009e70
#define DAT_10009e70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50bU)))
#undef DAT_10009e71
#define DAT_10009e71 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50cU)))
#undef DAT_10009e75
#define DAT_10009e75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x510U)))
#undef DAT_10009f80
#define DAT_10009f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x61bU)))
#undef LAB_10009368
#define LAB_10009368 (*(uint8_t *)(0x10009368U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define local_3c (*(undefined1 * *)(frame + 212))
#define local_2c (*(undefined2 * *)(frame + 228))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_28 (*(uint *)(frame + 232))
#define local_24 (*(undefined2 * *)(frame + 236))
#define local_20 (*(void * *)(frame + 240))
#define local_1c (*(void * *)(frame + 244))
#define local_18 (*(void * *)(frame + 248))
#define local_14 (*(undefined4 *)(frame + 252))
#define local_64 (*(undefined4 *)(frame + 172))
#define local_60 (*(undefined4 *)(frame + 176))
#define local_4c (*(undefined * *)(frame + 196))
#define local_48 (*(undefined * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_40 (*(undefined1 * *)(frame + 208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f80
 */

uint recovered_10008f80(undefined4 *param_1,void **param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  void *pvVar2;
  undefined2 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;

  local_44 = auStackY_fc + 0xf8;
  local_3c = auStackY_fc + 0x80;
  local_4c = PTR_recovered_10005550_1000b004;
  local_48 = &DAT_10009f80;
  local_40 = &LAB_10009368;
  recovered_10005a10(&local_64);
  if ((param_2 != (void **)0x0) && (param_1[3] != 0)) {
    uVar6 = (uint)*(ushort *)(param_1 + 4);
    if (uVar6 != 0) {
      local_28 = param_1[1];
      uVar5 = 0;
      if (local_28 % uVar6 != 0) goto LAB_10008ff5;
      local_24 = (undefined2 *)(uVar6 * 2);
      lVar1 = (ulonglong)(uint)param_1[3] * ZEXT48(local_24);
      if (-1 < (short)*(ushort *)(param_1 + 4) && (int)((ulonglong)lVar1 >> 0x20) == 0) {
        local_20 = (void *)(local_28 * 2);
        local_1c = (void *)0x0;
        local_18 = (void *)0x0;
        local_14 = (void *)0x0;
        local_60 = 1;
        local_2c = (undefined2 *)lVar1;
        recovered_10008be0(&local_1c,(int)local_20 + 0x2c);
        local_60 = 2;
        recovered_10009720((int *)&local_1c,(int)local_1c + (int)local_18,&DAT_10009e62,
                           &DAT_10009e66);
        local_60 = 3;
        recovered_10009490((int *)&local_1c,local_28 * 2 + 0x24);
        local_60 = 4;
        recovered_10009720((int *)&local_1c,(int)local_1c + (int)local_18,&DAT_10009e67,
                           &DAT_10009e6b);
        local_60 = 5;
        recovered_10009720((int *)&local_1c,(int)local_1c + (int)local_18,&DAT_10009e6c,
                           &DAT_10009e70);
        local_60 = 6;
        recovered_10009490((int *)&local_1c,0x10);
        local_60 = 7;
        recovered_10009640((int *)&local_1c,1);
        local_60 = 8;
        recovered_10009640((int *)&local_1c,*(undefined2 *)(param_1 + 4));
        local_60 = 9;
        recovered_10009490((int *)&local_1c,param_1[3]);
        local_60 = 10;
        recovered_10009490((int *)&local_1c,local_2c);
        local_60 = 0xb;
        recovered_10009640((int *)&local_1c,(short)local_24);
        local_60 = 0xc;
        recovered_10009640((int *)&local_1c,0x10);
        local_60 = 0xd;
        recovered_10009720((int *)&local_1c,(int)local_1c + (int)local_18,&DAT_10009e71,
                           &DAT_10009e75);
        local_60 = 0xe;
        recovered_10009490((int *)&local_1c,local_20);
        if (param_1[1] != 0) {
          puVar3 = (undefined2 *)*param_1;
          puVar7 = puVar3 + param_1[1];
          local_2c = puVar7;
          do {
            local_28 = CONCAT22(PF_PART2(local_28, 2),*puVar3);
            if (local_18 == local_14) {
              pvVar2 = (void *)0x4;
              if (local_18 != (void *)0x0) {
                pvVar2 = (void *)((int)local_18 * 2);
              }
              if (local_18 < pvVar2) {
                local_60 = 0xf;
                local_24 = puVar3;
                local_20 = pvVar2;
                pvVar2 = recovered_100055b0((ulong)pvVar2);
                if (local_18 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    *(undefined1 *)((int)pvVar2 + (int)pvVar4) =
                         *(undefined1 *)((int)local_1c + (int)pvVar4);
                    pvVar4 = (void *)((int)pvVar4 + 1);
                  } while (local_18 != pvVar4);
                }
                recovered_10005610(local_1c);
                local_14 = local_20;
                puVar3 = local_24;
                puVar7 = local_2c;
                local_1c = pvVar2;
              }
            }
            *(char *)((int)local_1c + (int)local_18) = (char)local_28;
            local_18 = (void *)((int)local_18 + 1);
            if (local_18 == local_14) {
              pvVar2 = (void *)0x4;
              if (local_18 != (void *)0x0) {
                pvVar2 = (void *)((int)local_18 * 2);
              }
              if (local_18 < pvVar2) {
                local_60 = 0x10;
                local_24 = puVar3;
                local_20 = pvVar2;
                pvVar2 = recovered_100055b0((ulong)pvVar2);
                if (local_18 != (void *)0x0) {
                  pvVar4 = (void *)0x0;
                  do {
                    *(undefined1 *)((int)pvVar2 + (int)pvVar4) =
                         *(undefined1 *)((int)local_1c + (int)pvVar4);
                    pvVar4 = (void *)((int)pvVar4 + 1);
                  } while (local_18 != pvVar4);
                }
                recovered_10005610(local_1c);
                local_14 = local_20;
                puVar3 = local_24;
                puVar7 = local_2c;
                local_1c = pvVar2;
              }
            }
            uVar5 = local_28 & 0xffff;
            *(char *)((int)local_1c + (int)local_18) = (char)(local_28 >> 8);
            local_18 = (void *)((int)local_18 + 1);
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar7);
        }
        if (&local_1c != param_2) {
          param_2[1] = (void *)0x0;
          recovered_10005610(*param_2);
          *param_2 = local_1c;
          param_2[1] = local_18;
          param_2[2] = local_14;
          local_1c = (void *)0x0;
          local_14 = (void *)0x0;
        }
        local_18 = (void *)0x0;
        recovered_10005610(local_1c);
        uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
        goto LAB_10008ff5;
      }
    }
  }
  uVar5 = 0;
LAB_10008ff5:
  recovered_10005a30(&local_64);
  return uVar5;
}

#undef DAT_10009e62
#undef DAT_10009e66
#undef DAT_10009e67
#undef DAT_10009e6b
#undef DAT_10009e6c
#undef DAT_10009e70
#undef DAT_10009e71
#undef DAT_10009e75
#undef DAT_10009f80
#undef LAB_10009368
#undef PTR_recovered_10005550_1000b004
#undef local_3c
#undef local_2c
#undef auStackY_fc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_44
#undef local_40

#undef DAT_10009fa4
#define DAT_10009fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63fU)))
#undef LAB_10009466
#define LAB_10009466 (*(uint8_t *)(0x10009466U))
#undef PTR_recovered_10005550_1000b004
#define PTR_recovered_10005550_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x169fU)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 200))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_2c (*(undefined * *)(frame + 180))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 20))
#define local_28 (*(undefined * *)(frame + 184))
#define local_24 (*(undefined1 * *)(frame + 188))
#define local_20 (*(undefined1 * *)(frame + 192))
#define local_1c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100093f0
 */

void recovered_100093f0(int *param_1)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  piVar1 = (int *)*param_1;
  local_2c = PTR_recovered_10005550_1000b004;
  local_28 = &DAT_10009fa4;
  local_20 = &LAB_10009466;
  recovered_10005a10(&local_44);
  if (piVar1 != (int *)0x0) {
    local_40 = 1;
    recovered_10004920(piVar1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  recovered_10005a30(&local_44);
  return;
}

#undef DAT_10009fa4
#undef LAB_10009466
#undef PTR_recovered_10005550_1000b004
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
 * Address: 0x10009490
 */

void recovered_10009490(int *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
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
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)param_2;
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 8);
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 0x10);
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((uint)param_2 >> 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(int *param_1,undefined2 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
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
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)param_2;
  uVar4 = param_1[1] + 1;
  param_1[1] = uVar4;
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_100055b0(uVar5);
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_10005610(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  *(char *)(*param_1 + uVar4) = (char)((ushort)param_2 >> 8);
  param_1[1] = param_1[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009720
 */

int recovered_10009720(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      pvVar2 = recovered_100055b0((ulong)puVar7);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = *(undefined1 *)((int)pointer + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_10005610(pointer);
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


#define local_14 (*(void * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009830
 */

void * recovered_10009830(int *param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  local_14 = (void *)*param_1;
  bVar11 = local_14 == (void *)0x0;
  if (bVar11) {
    uVar10 = param_1[1];
  }
  else {
    uVar10 = param_2 - (int)local_14 >> 1;
  }
  if (param_3 != param_4) {
    uVar4 = (uint)((int)param_4 + (-2 - (int)param_3)) >> 1;
    uVar9 = param_1[1];
    uVar1 = param_1[2];
    uVar8 = uVar9 + 1 + uVar4;
    if (uVar1 < uVar8) {
      uVar3 = 4;
      if (uVar1 != 0) {
        uVar3 = uVar1;
      }
      do {
        uVar9 = uVar3;
        uVar3 = uVar9 * 2;
      } while (uVar9 < uVar8);
      local_14 = recovered_100055b0(uVar9 * 2);
      pvVar5 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar7 = 0;
        do {
          *(undefined2 *)((int)local_14 + iVar7 * 2) = *(undefined2 *)((int)pvVar5 + iVar7 * 2);
          iVar7 = iVar7 + 1;
        } while (iVar2 != iVar7);
      }
      recovered_10005610(pvVar5);
      *param_1 = (int)local_14;
      param_1[2] = uVar9;
      uVar9 = param_1[1];
    }
    if (uVar10 < uVar9) {
      uVar8 = uVar9;
      do {
        *(undefined2 *)((int)local_14 + uVar8 * 2 + uVar4 * 2) =
             *(undefined2 *)((int)local_14 + uVar8 * 2 + -2);
        uVar8 = uVar8 - 1;
      } while (uVar10 < uVar8);
    }
    puVar6 = (undefined2 *)((int)local_14 + uVar10 * 2);
    do {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    } while (param_3 != param_4);
    param_1[1] = uVar9 + uVar4 + 1;
    bVar11 = local_14 == (void *)0x0;
  }
  pvVar5 = (void *)0x0;
  if (!bVar11) {
    pvVar5 = (void *)((int)local_14 + uVar10 * 2);
  }
  return pvVar5;
}

#undef local_14

/* Duration rounding import, replaced by C; Pooka's Free Software License. */
long long recovered_10009966(long double value) {
 if(!(value<9223372036854775808.0L)||value< -9223372036854775808.0L)return (long long)0x8000000000000000ULL;
 return (long long)(value<0.0L?value-0.5L:value+0.5L);
}

