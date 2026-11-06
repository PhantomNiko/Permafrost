#include "codec32.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10017078
#define DAT_10017078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1168U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d0
 */

void recovered_100010d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10017078 = 0;
  recovered_100010e0();
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
#undef DAT_10017078
#define DAT_10017078 (*(char *)(((uintptr_t)pf_module_state + 0x1168U)))
#undef DAT_1001707c
#define DAT_1001707c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x116cU)))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#undef _DAT_00300000
#define _DAT_00300000 (*(int *)(0x300000U))
#undef _DAT_00300004
#define _DAT_00300004 (*(uint32_t *)(0x300004U))
#define local_18 (*(uint *)(frame + 152))
#define local_14 (*(int * *)(frame + 156))
#define auStack_a0 (*(uint (*)[34])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100010e0(void)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;

  if (DAT_10017078 != '\0') {
    return;
  }
  DAT_1001707c = 0;
  local_18 = _DAT_0000608c;
  if (0xf < _DAT_0000608c) {
    local_18 = 0x10;
  }
  if (_DAT_0000608c == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    uVar7 = 0;
    uVar1 = 0;
    do {
      local_14 = (int *)uVar1;
      uVar11 = *(uint *)(&DAT_00006090 + uVar7 * 8);
      uVar6 = *(uint *)(&DAT_00006094 + uVar7 * 8);
      uVar9 = uVar6 + uVar11;
      if (!(CARRY4(uVar6,uVar11) < (uVar9 < 0x300001) || uVar6 == 0)) {
        if (uVar11 < 0x300001) {
          uVar11 = 0x300000;
        }
        if (uVar1 < 0x10) {
          uVar6 = 0;
          if (uVar1 != 0) {
            do {
              if (auStack_a0[uVar1 * 2] <= uVar11) {
                uVar6 = uVar1;
                goto LAB_100011c4;
              }
              uVar6 = auStack_a0[uVar1 * 2];
              auStack_a0[uVar1 * 2 + 3] = auStack_a0[uVar1 * 2 + 1];
              auStack_a0[uVar1 * 2 + 2] = uVar6;
              uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
            uVar6 = 0;
          }
LAB_100011c4:
          auStack_a0[uVar6 * 2 + 2] = uVar11;
          auStack_a0[uVar6 * 2 + 3] = uVar9 - uVar11;
          local_14 = (int *)((int)local_14 + 1);
        }
      }
      uVar7 = uVar7 + 1;
      uVar1 = (uint)local_14;
    } while (uVar7 != local_18);
    piVar10 = (int *)0x0;
    if (local_14 != (int *)0x0) {
      iVar3 = 1;
      if (local_14 != (int *)0x1) {
        iVar2 = (int)local_14 - 1;
        puVar8 = auStack_a0 + 4;
        iVar3 = 1;
        do {
          uVar1 = auStack_a0[iVar3 * 2 + 1] + auStack_a0[iVar3 * 2];
          if (uVar1 < *puVar8) {
            uVar1 = *puVar8;
            auStack_a0[iVar3 * 2 + 3] = puVar8[1];
            auStack_a0[iVar3 * 2 + 2] = uVar1;
            iVar3 = iVar3 + 1;
          }
          else {
            uVar7 = *puVar8 + puVar8[1];
            if (uVar1 < uVar7) {
              auStack_a0[iVar3 * 2 + 1] = uVar7 - auStack_a0[iVar3 * 2];
            }
          }
          puVar8 = puVar8 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        piVar10 = (int *)0x0;
        if (iVar3 == 0) goto LAB_100012bc;
      }
      local_14 = (int *)0x0;
      puVar8 = auStack_a0 + 3;
      do {
        piVar10 = (int *)(puVar8[-1] + 0xf & 0xfffffff0);
        uVar1 = (int)piVar10 - puVar8[-1];
        uVar7 = *puVar8 - uVar1;
        if ((uVar1 <= *puVar8 && uVar7 != 0) && (uVar7 = uVar7 & 0xfffffff0, 0x1c < uVar7)) {
          *piVar10 = uVar7 - 0x10;
          piVar10[1] = 0;
          *(undefined1 *)(piVar10 + 2) = 1;
          puVar4 = (uint *)&DAT_1001707c;
          if (DAT_1001707c != 0) {
            puVar4 = (uint *)(local_14 + 1);
          }
          *puVar4 = (uint)piVar10;
          local_14 = piVar10;
        }
        puVar8 = puVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar10 = local_14;
      if (DAT_1001707c != 0) {
        DAT_10017078 = 1;
        return;
      }
    }
  }
LAB_100012bc:
  if (_DAT_00006088 < 0x300001) {
    uVar1 = 0x4000000;
  }
  else {
    uVar1 = _DAT_00006088 & 0xfffffff0;
  }
  uVar7 = 0x3d00000;
  if (0x30001c < uVar1) {
    uVar7 = uVar1 - 0x300000;
  }
  if (0x1c < uVar7) {
    _DAT_00300000 = uVar7 - 0x10;
    _DAT_00300004 = 0;
    DAT_00300008 = 1;
    piVar5 = &DAT_1001707c;
    if (DAT_1001707c != 0) {
      piVar5 = piVar10 + 1;
    }
    *piVar5 = 0x300000;
  }
  DAT_10017078 = 1;
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_10017078
#undef DAT_1001707c
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00300000
#undef _DAT_00300004
#undef local_18
#undef local_14
#undef auStack_a0

#undef DAT_1001707c
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0x116cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001330
 */

int recovered_10001330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_100010e0();
  iVar1 = 0;
  for (piVar2 = DAT_1001707c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_1001707c

#undef DAT_1001707c
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0x116cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

long recovered_10001370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int *piVar2;

  recovered_100010e0();
  lVar1 = 0;
  for (piVar2 = DAT_1001707c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[2] == '\x01') {
      lVar1 = lVar1 + *piVar2;
    }
  }
  return lVar1;
}

#undef DAT_1001707c

#undef DAT_1001707c
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0x116cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b0
 */

int recovered_100013b0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_100010e0();
  iVar2 = 0;
  for (piVar1 = DAT_1001707c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1001707c

#undef DAT_1001707c
#define DAT_1001707c (*(int * *)(((uintptr_t)pf_module_state + 0x116cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

long recovered_100013e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  recovered_100010e0();
  iVar2 = 0;
  for (piVar1 = DAT_1001707c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_1001707c

#undef DAT_1001707c
#define DAT_1001707c (*(uint * *)(((uintptr_t)pf_module_state + 0x116cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001420
 */

uint * recovered_10001420(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;

  if ((param_1 != 0) && (recovered_100010e0(), DAT_1001707c != (uint *)0x0)) {
    uVar3 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_1001707c;
    do {
      if ((char)puVar2[2] == '\x01') {
        uVar1 = *puVar2;
        if (uVar3 <= uVar1) {
          if (uVar3 + 0x20 <= uVar1) {
            *(uint *)((int)puVar2 + uVar3 + 0x10) = (uVar1 - uVar3) + -0x10;
            *(uint *)((int)puVar2 + uVar3 + 0x14) = puVar2[1];
            *(undefined1 *)((int)puVar2 + uVar3 + 0x18) = 1;
            *puVar2 = uVar3;
            puVar2[1] = (int)puVar2 + uVar3 + 0x10;
          }
          *(undefined1 *)(puVar2 + 2) = 0;
          return puVar2 + 4;
        }
      }
      puVar2 = (uint *)puVar2[1];
    } while (puVar2 != (uint *)0x0);
  }
  return (uint *)0x0;
}

#undef DAT_1001707c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a0
 */

longlong recovered_100014a0(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100014e0
 */

ulonglong recovered_100014e0(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001520
 */

undefined8 recovered_10001520(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001570
 */

undefined8 recovered_10001570(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001650
 */

undefined8 recovered_10001650(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100016c0
 */

undefined8 recovered_100016c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001800
 */

undefined8 recovered_10001800(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100018c0
 */

void recovered_100018c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

int recovered_100018e0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001900(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10001940(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10001980(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

void * recovered_100019c0(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (bytes != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)((int)dst + uVar1) = *(undefined1 *)((int)src + uVar1);
      uVar1 = uVar1 + 1;
    } while (bytes != uVar1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f0
 */

void * recovered_100019f0(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (bytes != 0 && dst != src) {
    if (dst < src) {
      uVar1 = 0;
      do {
        *(undefined1 *)((int)dst + uVar1) = *(undefined1 *)((int)src + uVar1);
        uVar1 = uVar1 + 1;
      } while (bytes != uVar1);
    }
    else {
      do {
        uVar1 = bytes - 1;
        *(undefined1 *)((int)dst + (bytes - 1)) = *(undefined1 *)((int)src + (bytes - 1));
        bytes = uVar1;
      } while (uVar1 != 0);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a50
 */

void * recovered_10001a50(void *dst,int byte,uint bytes)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = dst;
  if (bytes != 0) {
    do {
      *(char *)dst = (char)byte;
      dst = (void *)((int)dst + 1);
      bytes = bytes - 1;
    } while (bytes != 0);
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a80
 */

void recovered_10001a80(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != 0) {
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aa0
 */

void recovered_10001aa0(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != 0) {
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ac0
 */

int recovered_10001ac0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 != 0) {
    iVar1 = 0;
    do {
      if (*(byte *)(param_1 + iVar1) != *(byte *)(param_2 + iVar1)) {
        return (uint)*(byte *)(param_1 + iVar1) - (uint)*(byte *)(param_2 + iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b00
 */

bool recovered_10001b00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b20
 */

bool recovered_10001b20(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b40
 */

bool recovered_10001b40(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b60
 */

bool recovered_10001b60(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b90
 */

bool recovered_10001b90(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb0
 */

bool recovered_10001bb0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

int recovered_10001bd0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bf0
 */

int recovered_10001bf0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c10
 */

uint recovered_10001c10(char *text)

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

int recovered_10001c80(byte *param_1,byte *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

void recovered_10001cc0(int param_1,int param_2)

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
 * Address: 0x10001ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10001ce0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar4 = iVar1;
      iVar1 = iVar4 + 1;
    } while (*(char *)(param_1 + iVar4) != '\0');
    iVar2 = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x4f < _DAT_00006808 && (_DAT_0000684c != (code *)0x0)))) {
      iVar3 = (*_DAT_0000684c)(iVar1);
      iVar2 = 0;
      if (iVar3 != 0) {
        if (iVar1 != 0) {
          iVar2 = -1;
          do {
            *(undefined1 *)(iVar3 + 1 + iVar2) = *(undefined1 *)(param_1 + 1 + iVar2);
            iVar2 = iVar2 + 1;
          } while (iVar4 != iVar2);
        }
        iVar2 = iVar3;
      }
    }
  }
  return iVar2;
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
 * Address: 0x10001d80
 */

char * recovered_10001d80(char *param_1,char param_2)

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
 * Address: 0x10001dc0
 */

int recovered_10001dc0(char *param_1,char *param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e10
 */

char * recovered_10001e10(char *param_1,char *param_2)

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
 * Address: 0x10001e60
 */

char * recovered_10001e60(char *param_1,char *param_2)

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


#undef DAT_10016b34
#define DAT_10016b34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb0
 */

undefined * recovered_10001eb0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10016b34;
}

#undef DAT_10016b34

#undef PTR_DAT_10017008
#define PTR_DAT_10017008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ec0
 */

undefined ** recovered_10001ec0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10017008;
}

#undef PTR_DAT_10017008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed0
 */

undefined4 recovered_10001ed0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001ef0(double param_1,int param_2)

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

#undef DAT_10015f10
#undef _DAT_10015f10

#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10001f20(double param_1,int *param_2)

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

#undef DAT_10015f10
#undef _DAT_10015f10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002000
 */

double recovered_10002000(double left,double right)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002060
 */

double recovered_10002060(double left,double right)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

double recovered_10002100(double value)

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
 * Address: 0x10002150
 */

double recovered_10002150(double value)

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


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100021b0(double value)

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

#undef DAT_10015f10
#undef _DAT_10015f10

#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f14
#define DAT_10015f14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10015f18
#define DAT_10015f18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10015f1c
#define DAT_10015f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10015f20
#define DAT_10015f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10015f24
#define DAT_10015f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10015f28
#define DAT_10015f28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10015f2c
#define DAT_10015f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10015f30
#define DAT_10015f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10015f34
#define DAT_10015f34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10015f38
#define DAT_10015f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10015f3c
#define DAT_10015f3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10015f40
#define DAT_10015f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10015f68
#define DAT_10015f68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f14
#define _DAT_10015f14 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_10015f18
#define _DAT_10015f18 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_10015f1c
#define _DAT_10015f1c (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_10015f20
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10015f24
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10015f28
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_10015f2c
#define _DAT_10015f2c (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_10015f30
#define _DAT_10015f30 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_10015f34
#define _DAT_10015f34 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_10015f38
#define _DAT_10015f38 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_10015f3c
#define _DAT_10015f3c (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_10015f40
#define _DAT_10015f40 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10015f68
#define _DAT_10015f68 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100022b0(double value)

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

#undef DAT_10015f10
#undef DAT_10015f14
#undef DAT_10015f18
#undef DAT_10015f1c
#undef DAT_10015f20
#undef DAT_10015f24
#undef DAT_10015f28
#undef DAT_10015f2c
#undef DAT_10015f30
#undef DAT_10015f34
#undef DAT_10015f38
#undef DAT_10015f3c
#undef DAT_10015f40
#undef DAT_10015f68
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

#undef DAT_10015f90
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d0
 */

longlong recovered_100023d0(double param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10015f90

#undef DAT_10015f44
#define DAT_10015f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10015f48
#define DAT_10015f48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10015f4c
#define DAT_10015f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10015f70
#define DAT_10015f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10015f78
#define DAT_10015f78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10015f80
#define DAT_10015f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10015f88
#define DAT_10015f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef _DAT_10015f44
#define _DAT_10015f44 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10015f48
#define _DAT_10015f48 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_10015f4c
#define _DAT_10015f4c (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_10015f70
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10015f78
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_10015f80
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef _DAT_10015f88
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10002420(double value)

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

#undef DAT_10015f44
#undef DAT_10015f48
#undef DAT_10015f4c
#undef DAT_10015f70
#undef DAT_10015f78
#undef DAT_10015f80
#undef DAT_10015f88
#undef _DAT_10015f44
#undef _DAT_10015f48
#undef _DAT_10015f4c
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

/* Native cosine polynomial. Pooka's Free Software License. */
#include "numbers.h"
double recovered_100024c0(double value){return pf_cosine_polynomial(value);}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002560
 */

double recovered_10002560(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -value;
  if (-value <= value) {
    dVar1 = value;
  }
  return dVar1;
}


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f5c
#define DAT_10015f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f5c
#define _DAT_10015f5c (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002580(double param_1)

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

#undef DAT_10015f10
#undef DAT_10015f5c
#undef _DAT_10015f10
#undef _DAT_10015f5c

#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f5c
#define DAT_10015f5c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f5c
#define _DAT_10015f5c (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002660(double param_1)

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

#undef DAT_10015f10
#undef DAT_10015f5c
#undef _DAT_10015f10
#undef _DAT_10015f5c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002710
 */

longdouble recovered_10002710(uint param_1,uint param_2)

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
 * Address: 0x10002780
 */

longdouble recovered_10002780(uint param_1,uint param_2)

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
 * Address: 0x10002830
 */

float recovered_10002830(float left,float right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = 0.0;
  if ((right != 0.0) || (NAN(right))) {
    fVar1 = left - right * (float)(int)ROUND(left / right);
  }
  return fVar1;
}


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002890(float param_1,int *param_2)

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

#undef DAT_10015f10
#undef _DAT_10015f10

#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002980(float param_1,int param_2)

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

#undef DAT_10015f10
#undef _DAT_10015f10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

float recovered_100029c0(float left,float right)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a60
 */

float recovered_10002a60(float value)

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
 * Address: 0x10002ab0
 */

float recovered_10002ab0(float value)

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
 * Address: 0x10002b20
 */

double recovered_10002b20(double value)

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
 * Address: 0x10002b90
 */

float recovered_10002b90(float value)

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
 * Address: 0x10002c10
 */

float recovered_10002c10(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100021b0((double)value);
  return (float)dVar1;
}


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f14
#define DAT_10015f14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10015f18
#define DAT_10015f18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_10015f1c
#define DAT_10015f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10015f20
#define DAT_10015f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10015f24
#define DAT_10015f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10015f28
#define DAT_10015f28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10015f2c
#define DAT_10015f2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_10015f30
#define DAT_10015f30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10015f34
#define DAT_10015f34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10015f38
#define DAT_10015f38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10015f3c
#define DAT_10015f3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10015f40
#define DAT_10015f40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_10015f68
#define DAT_10015f68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x58U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f14
#define _DAT_10015f14 (*(float *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_10015f18
#define _DAT_10015f18 (*(float *)(((uintptr_t)pf_module_state + 0x8U)))
#undef _DAT_10015f1c
#define _DAT_10015f1c (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef _DAT_10015f20
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10015f24
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10015f28
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_10015f2c
#define _DAT_10015f2c (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef _DAT_10015f30
#define _DAT_10015f30 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef _DAT_10015f34
#define _DAT_10015f34 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef _DAT_10015f38
#define _DAT_10015f38 (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef _DAT_10015f3c
#define _DAT_10015f3c (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef _DAT_10015f40
#define _DAT_10015f40 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef _DAT_10015f68
#define _DAT_10015f68 (*(double *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002c30(float param_1)

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

#undef DAT_10015f10
#undef DAT_10015f14
#undef DAT_10015f18
#undef DAT_10015f1c
#undef DAT_10015f20
#undef DAT_10015f24
#undef DAT_10015f28
#undef DAT_10015f2c
#undef DAT_10015f30
#undef DAT_10015f34
#undef DAT_10015f38
#undef DAT_10015f3c
#undef DAT_10015f40
#undef DAT_10015f68
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

#undef DAT_10015f90
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d60
 */

undefined4 recovered_10002d60(double param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_10015f90
#undef local_14

#undef DAT_10015f44
#define DAT_10015f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_10015f48
#define DAT_10015f48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_10015f4c
#define DAT_10015f4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10015f70
#define DAT_10015f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10015f78
#define DAT_10015f78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10015f80
#define DAT_10015f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10015f88
#define DAT_10015f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef _DAT_10015f44
#define _DAT_10015f44 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef _DAT_10015f48
#define _DAT_10015f48 (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef _DAT_10015f4c
#define _DAT_10015f4c (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef _DAT_10015f70
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10015f78
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_10015f80
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef _DAT_10015f88
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10002db0(float value)

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

#undef DAT_10015f44
#undef DAT_10015f48
#undef DAT_10015f4c
#undef DAT_10015f70
#undef DAT_10015f78
#undef DAT_10015f80
#undef DAT_10015f88
#undef _DAT_10015f44
#undef _DAT_10015f48
#undef _DAT_10015f4c
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

#undef DAT_10015f50
#define DAT_10015f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10015f54
#define DAT_10015f54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10015f58
#define DAT_10015f58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_10015f70
#define DAT_10015f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10015f78
#define DAT_10015f78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x68U)))
#undef DAT_10015f80
#define DAT_10015f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef DAT_10015f88
#define DAT_10015f88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78U)))
#undef _DAT_10015f50
#define _DAT_10015f50 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10015f54
#define _DAT_10015f54 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef _DAT_10015f58
#define _DAT_10015f58 (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef _DAT_10015f70
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10015f78
#define _DAT_10015f78 (*(double *)(((uintptr_t)pf_module_state + 0x68U)))
#undef _DAT_10015f80
#define _DAT_10015f80 (*(double *)(((uintptr_t)pf_module_state + 0x70U)))
#undef _DAT_10015f88
#define _DAT_10015f88 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float recovered_10002e50(float value)

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

#undef DAT_10015f50
#undef DAT_10015f54
#undef DAT_10015f58
#undef DAT_10015f70
#undef DAT_10015f78
#undef DAT_10015f80
#undef DAT_10015f88
#undef _DAT_10015f50
#undef _DAT_10015f54
#undef _DAT_10015f58
#undef _DAT_10015f70
#undef _DAT_10015f78
#undef _DAT_10015f80
#undef _DAT_10015f88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

float recovered_10002ef0(float value)

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
 * Address: 0x10002f10
 */

int recovered_10002f10(byte *param_1,undefined4 *param_2,uint param_3)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003060
 */

int recovered_10003060(byte *param_1,undefined4 *param_2,uint param_3)

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


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f60
#define DAT_10015f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f60
#define _DAT_10015f60 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_100031b0(char *text,char **end)

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

#undef DAT_10015f10
#undef DAT_10015f60
#undef _DAT_10015f10
#undef _DAT_10015f60

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003350
 */

float recovered_10003350(char *text,char **end)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100031b0(text,end);
  return (float)dVar1;
}


#undef DAT_10015f60
#define DAT_10015f60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50U)))
#undef _DAT_10015f60
#define _DAT_10015f60 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10016b39
#define str_10016b39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc29U)))
#undef str_10016b40
#define str_10016b40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc30U)))
#undef str_10016b51
#define str_10016b51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc41U)))
#define local_3a (*(ushort *)(frame + 118))
#define local_38 (*(ushort *)(frame + 120))
#define local_36 (*(ushort *)(frame + 122))
#define local_34 (*(ushort *)(frame + 124))
#define local_24 (*(char * *)(frame + 140))
#define local_20 (*(double * *)(frame + 144))
#define local_1c (*(char * *)(frame + 148))
#define local_18 (*(uint *)(frame + 152))
#define local_14 (*(int *)(frame + 156))
#define acStack_95 (*(char (*)[33])(frame + 27))
#define local_74 (*(uint *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(uint *)(frame + 68))
#define local_68 (*(int *)(frame + 72))
#define local_64 (*(int *)(frame + 76))
#define local_60 (*(int *)(frame + 80))
#define local_5c (*(int *)(frame + 84))
#define local_58 (*(int *)(frame + 88))
#define local_54 (*(int *)(frame + 92))
#define local_50 (*(int *)(frame + 96))
#define local_4c (*(int *)(frame + 100))
#define local_48 (*(int *)(frame + 104))
#define local_44 (*(int *)(frame + 108))
#define local_40 (*(ushort *)(frame + 112))
#define local_3e (*(ushort *)(frame + 114))
#define local_3c (*(ushort *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10003380(char *out,uint capacity,char *format,void *args)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  double dVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort in_FPUControlWord = pf_fpu_control();

  if (capacity != 0) {
    *out = '\0';
  }
  local_14 = 0;
  local_18 = capacity;
LAB_100033b4:
  do {
    cVar4 = *format;
    if (cVar4 == '%') {
      cVar4 = format[1];
      format = format + 1;
      if (cVar4 != '%') {
        while ((byte)(cVar4 - 0x30U) < 10) {
          pcVar5 = format + 1;
          format = format + 1;
          cVar4 = *pcVar5;
        }
        if (cVar4 == '.') {
          do {
            cVar4 = format[1];
            format = format + 1;
          } while ((byte)(cVar4 - 0x30U) < 10);
        }
LAB_10003440:
        switch((uintptr_t)(cVar4)) {
        case 'I':
        case 'd':
        case 'i':
          local_1c = out;
          uVar7 = *(uint *)args;
          local_24 = format;
          if ((int)uVar7 < 0) {
            if (1 < local_18) {
              *out = '-';
              local_1c = out + 1;
              local_18 = local_18 - 1;
            }
            local_14 = local_14 + 1;
            uVar7 = -uVar7;
          }
          iVar6 = 0;
          do {
            acStack_95[iVar6 + 1] = str_10016b51[uVar7 % 10];
            iVar6 = iVar6 + 1;
            bVar2 = 9 < uVar7;
            uVar7 = uVar7 / 10;
          } while (bVar2);
          if (iVar6 != 0) {
            local_14 = local_14 + iVar6;
            do {
              if (1 < local_18) {
                *local_1c = acStack_95[iVar6];
                local_1c = local_1c + 1;
                local_18 = local_18 - 1;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
LAB_1000382a:
          args = (void *)((int)args + 4);
          format = local_24 + 1;
          out = local_1c;
          break;
        default:
          if (1 < local_18) {
            *out = '?';
            out = out + 1;
            local_18 = local_18 - 1;
          }
          goto LAB_100033b2;
        case 'X':
          local_24 = format;
          iVar6 = 0;
          uVar7 = *(uint *)args;
          do {
            acStack_95[iVar6 + 1] = str_10016b40[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          args = (void *)((int)args + 4);
          local_14 = local_14 + iVar6;
          do {
            if (1 < local_18) {
              *out = acStack_95[iVar6];
              out = out + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          format = local_24 + 1;
          break;
        case 'c':
          if (1 < local_18) {
            *out = *(char *)args;
            out = out + 1;
            local_18 = local_18 - 1;
          }
          args = (void *)((int)args + 4);
          goto LAB_100033b2;
        case 'f':
          dVar1 = *(double *)args;
          local_24 = format;
          if (0.0 <= dVar1) {
            local_1c = out;
          }
          else {
            if (1 < local_18) {
              *out = '-';
              out = out + 1;
              local_18 = local_18 - 1;
            }
            local_1c = out;
            local_14 = local_14 + 1;
            dVar1 = -dVar1;
          }
          args = (void *)((int)args + 8);
          local_40 = in_FPUControlWord | 0xc00;
          local_74 = (uint)ROUND(dVar1);
          iVar6 = 0;
          local_20 = (double *)local_74;
          uVar7 = local_74;
          do {
            acStack_95[iVar6 + 1] = str_10016b51[uVar7 % 10];
            iVar6 = iVar6 + 1;
            bVar2 = 9 < uVar7;
            uVar7 = uVar7 / 10;
          } while (bVar2);
          if (iVar6 != 0) {
            local_14 = local_14 + iVar6;
            do {
              if (1 < local_18) {
                *local_1c = acStack_95[iVar6];
                local_1c = local_1c + 1;
                local_18 = local_18 - 1;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (1 < local_18) {
            *local_1c = '.';
            if (local_18 - 1 < 2) {
              local_1c = local_1c + 1;
              local_18 = local_18 - 1;
            }
            else {
              local_6c = (uint)local_20;
              dVar1 = (dVar1 - (double)(int)local_20) * (double)_DAT_10015f60;
              local_3e = in_FPUControlWord | 0xc00;
              local_70 = (int)ROUND(dVar1);
              local_1c[1] = (char)local_70 + '0';
              uVar8 = local_18 & 0xfffffffe;
              uVar7 = 1;
              if (uVar8 == 2) {
                local_1c = local_1c + 2;
              }
              else {
                local_64 = local_70;
                dVar1 = (dVar1 - (double)local_70) * (double)_DAT_10015f60;
                local_3c = in_FPUControlWord | 0xc00;
                local_68 = (int)ROUND(dVar1);
                local_20 = (double *)local_68;
                local_1c[2] = (char)local_68 + '0';
                if (local_18 - 5 < 0xfffffffe) {
                  local_5c = local_68;
                  dVar1 = (dVar1 - (double)local_68) * (double)_DAT_10015f60;
                  local_3a = in_FPUControlWord | 0xc00;
                  local_60 = (int)ROUND(dVar1);
                  local_1c[3] = (char)local_60 + '0';
                  if (uVar8 == 4) {
                    local_1c = local_1c + 4;
                  }
                  else {
                    local_4c = local_60;
                    dVar3 = (double)_DAT_10015f60;
                    dVar1 = (dVar1 - (double)local_60) * dVar3;
                    local_38 = in_FPUControlWord | 0xc00;
                    local_50 = (int)ROUND(dVar1);
                    local_1c[4] = (char)local_50 + '0';
                    local_54 = local_50;
                    dVar3 = (dVar1 - (double)local_50) * dVar3;
                    local_36 = in_FPUControlWord | 0xc00;
                    local_58 = (int)ROUND(dVar3);
                    if (local_18 - 7 < 0xfffffffe) {
                      local_1c[5] = (char)local_58 + '0';
                      if (uVar8 == 6) {
                        local_1c = local_1c + 6;
                      }
                      else {
                        local_44 = local_58;
                        local_34 = in_FPUControlWord | 0xc00;
                        local_48 = (int)ROUND((dVar3 - (double)local_58) * (double)_DAT_10015f60);
                        local_1c[6] = (char)local_48 + '0';
                        local_1c = local_1c + 7;
                        uVar7 = local_18 - 7;
                      }
                    }
                    else {
                      local_1c = local_1c + 5;
                    }
                  }
                }
                else {
                  local_1c = local_1c + 3;
                }
              }
              local_18 = uVar7;
            }
          }
          local_14 = local_14 + 7;
          format = local_24 + 1;
          out = local_1c;
          break;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_1000344f_caseD_68;
        case 'p':
          uVar7 = *(uint *)args;
          if (1 < local_18) {
            *out = '0';
            if (local_18 - 3 < 0xfffffffe) {
              out[1] = 'x';
              out = out + 2;
              local_18 = local_18 - 2;
            }
            else {
              out = out + 1;
              local_18 = 1;
            }
          }
          local_20 = (double *)((int)args + 4);
          iVar6 = 0;
          do {
            acStack_95[iVar6 + 1] = str_10016b51[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          local_14 = local_14 + 2 + iVar6;
          do {
            if (1 < local_18) {
              *out = acStack_95[iVar6];
              out = out + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          format = format + 1;
          args = local_20;
          break;
        case 's':
          pcVar5 = str_10016b39;
          if (*(char **)args != (char *)0x0) {
            pcVar5 = *(char **)args;
          }
          args = (void *)((int)args + 4);
          cVar4 = *pcVar5;
          if (cVar4 == '\0') {
            format = format + 1;
          }
          else {
            local_20 = args;
            do {
              pcVar5 = pcVar5 + 1;
              if (1 < local_18) {
                *out = cVar4;
                out = out + 1;
                local_18 = local_18 - 1;
              }
              local_14 = local_14 + 1;
              cVar4 = *pcVar5;
            } while (cVar4 != '\0');
            format = format + 1;
          }
          break;
        case 'u':
          local_24 = format;
          local_1c = out;
          iVar6 = 0;
          uVar7 = *(uint *)args;
          do {
            acStack_95[iVar6 + 1] = str_10016b51[uVar7 % 10];
            iVar6 = iVar6 + 1;
            bVar2 = 9 < uVar7;
            uVar7 = uVar7 / 10;
          } while (bVar2);
          if (iVar6 != 0) {
            local_14 = local_14 + iVar6;
            do {
              if (1 < local_18) {
                *local_1c = acStack_95[iVar6];
                local_1c = local_1c + 1;
                local_18 = local_18 - 1;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          goto LAB_1000382a;
        case 'x':
          local_24 = format;
          local_1c = out;
          iVar6 = 0;
          uVar7 = *(uint *)args;
          local_20 = args;
          do {
            acStack_95[iVar6 + 1] = str_10016b51[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          args = (void *)((int)local_20 + 4);
          local_20 = args;
          local_14 = local_14 + iVar6;
          out = local_1c;
          do {
            if (1 < local_18) {
              *out = acStack_95[iVar6];
              out = out + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          format = local_24 + 1;
        }
        goto LAB_100033b4;
      }
      if (1 < local_18) {
        *out = '%';
LAB_100033b0:
        out = out + 1;
        local_18 = local_18 - 1;
      }
    }
    else {
      if (cVar4 == '\0') {
        if (capacity != 0) {
          *out = '\0';
        }
        return local_14;
      }
      if (1 < local_18) {
        *out = cVar4;
        goto LAB_100033b0;
      }
    }
LAB_100033b2:
    local_14 = local_14 + 1;
    format = format + 1;
  } while( true );
switchD_1000344f_caseD_68:
  cVar4 = format[1];
  format = format + 1;
  goto LAB_10003440;
}

#undef DAT_10015f60
#undef _DAT_10015f60
#undef str_10016b39
#undef str_10016b40
#undef str_10016b51
#undef local_3a
#undef local_38
#undef local_36
#undef local_34
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef acStack_95
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
#undef local_3e
#undef local_3c

/* Preserve the native variadic arguments. Pooka's Free Software License. */
int recovered_10003a70(char *out,unsigned int capacity,char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10003380(out,capacity,format,args);__builtin_va_end(args);return result;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006840
#define DAT_00006840 (*(uint8_t *)(0x6840U))
#undef DAT_10017080
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0x1170U)))
#undef DAT_10017084
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1174U)))
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
 * Address: 0x10003aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003aa0(char *param_1,int param_2)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10017080 != 0) {
          DAT_10017080 = DAT_10017080 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_10017080 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_100019c0(local_210,&DAT_10017084,DAT_10017080);
            uVar3 = DAT_10017080;
          }
          local_210[uVar3] = 0;
          if (((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) &&
             ((0xb < _DAT_00006808 && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0))))))
          {
            (*_DAT_00006840)(local_210);
          }
          DAT_10017080 = 0;
        }
        else {
          if (DAT_10017080 - 0x1ff < 0xfffffe00) {
            recovered_100019c0(local_210,&DAT_10017084,DAT_10017080);
            local_210[DAT_10017080] = 0;
            if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808))
               && ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
              (*_DAT_00006840)(local_210);
            }
            DAT_10017080 = 0;
          }
          pcVar1 = &DAT_10017084 + DAT_10017080;
          DAT_10017080 = DAT_10017080 + 1;
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
#undef DAT_10017080
#undef DAT_10017084
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
#undef DAT_10017080
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0x1170U)))
#undef DAT_10017084
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1174U)))
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
 * Address: 0x10003c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003c40(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (DAT_10017080 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_100019c0(local_204,&DAT_10017084,DAT_10017080);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_10017080
#undef DAT_10017084
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
#undef DAT_10017080
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0x1170U)))
#undef DAT_10017084
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1174U)))
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
 * Address: 0x10003cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003cd0(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_10017080 != 0) {
    recovered_100019c0(local_208,&DAT_10017084,DAT_10017080);
    local_208[DAT_10017080] = 0;
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       ((0x43 < _DAT_00006808 && (_DAT_00006840 != (code *)0x0)))) {
      (*_DAT_00006840)(local_208);
    }
    DAT_10017080 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef local_208

#undef DAT_10016b38
#define DAT_10016b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc28U)))
#undef DAT_10016b62
#define DAT_10016b62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc52U)))
#define local_148 (*(char (*)[320])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d60
 */

void recovered_10003d60(undefined *param_1,undefined *param_2)

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
  iVar1 = recovered_10003a70(local_148,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10003aa0(local_148,iVar1);
  }
  return;
}

#undef DAT_10016b38
#undef DAT_10016b62
#undef local_148

#undef DAT_10016c4c
#define DAT_10016c4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3cU)))
#undef str_10016b65
#define str_10016b65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc55U)))
#undef str_10016b88
#define str_10016b88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc78U)))
#undef str_10016bc1
#define str_10016bc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb1U)))
#undef str_10016bf6
#define str_10016bf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce6U)))
#undef str_10016c1c
#define str_10016c1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

void recovered_10003dc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10001c10(str_10016b65);
  recovered_10003aa0(str_10016b65,uVar1);
  uVar1 = recovered_10001c10(str_10016b88);
  recovered_10003aa0(str_10016b88,uVar1);
  uVar1 = recovered_10001c10(str_10016bc1);
  recovered_10003aa0(str_10016bc1,uVar1);
  uVar1 = recovered_10001c10(str_10016bf6);
  recovered_10003aa0(str_10016bf6,uVar1);
  uVar1 = recovered_10001c10(str_10016c1c);
  recovered_10003aa0(str_10016c1c,uVar1);
  uVar1 = recovered_10001c10(&DAT_10016c4c);
  recovered_10003aa0(&DAT_10016c4c,uVar1);
  return;
}

#undef DAT_10016c4c
#undef str_10016b65
#undef str_10016b88
#undef str_10016bc1
#undef str_10016bf6
#undef str_10016c1c

#undef DAT_10016c4c
#define DAT_10016c4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3cU)))
#undef str_10016c4f
#define str_10016c4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

void recovered_10003e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = recovered_10001c10(str_10016c4f);
  recovered_10003aa0(str_10016c4f,uVar1);
  uVar1 = recovered_10001c10(&DAT_10016c4c);
  recovered_10003aa0(&DAT_10016c4c,uVar1);
  return;
}

#undef DAT_10016c4c
#undef str_10016c4f

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
#undef DAT_10017080
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0x1170U)))
#undef DAT_10017084
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1174U)))
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
 * Address: 0x10003ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003ed0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_10017080 != 0) {
      recovered_100019c0(local_210,&DAT_10017084,DAT_10017080);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fc0
 */

undefined4 recovered_10003fc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd0
 */

void recovered_10003fd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fe0
 */

undefined1 recovered_10003fe0(void)

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
#undef DAT_10016b62
#define DAT_10016b62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc52U)))
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006834
#define _DAT_00006834 (*(code * *)(0x6834U))
#undef str_10016ce3
#define str_10016ce3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd3U)))
#undef str_10016cf0
#define str_10016cf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde0U)))
#undef str_10016cfe
#define str_10016cfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdeeU)))
#define local_1c (*(void * *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10003ff0(int param_1,int param_2)

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
  iVar3 = recovered_10001c40((byte *)param_1,(byte *)str_10016ce3);
  if (iVar3 == 0) {
    uVar8 = 1;
  }
  else {
    iVar4 = recovered_10001c40((byte *)param_1,(byte *)str_10016cf0);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = recovered_10001c40((byte *)param_1,(byte *)str_10016cfe);
      if (iVar4 != 0) {
        puVar5 = recovered_10001900(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_10001a50(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10001d80((char *)param_2,'r');
          bVar9 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001d80((char *)param_2,'+');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001d80((char *)param_2,'a');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar9;
          pcVar6 = recovered_10001d80((char *)param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10001d80((char *)param_2,'a');
            bVar9 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10001d80((char *)param_2,'+');
              bVar9 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar9 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar9;
          pcVar6 = recovered_10001d80((char *)param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          pf_varargs_10003a70__4_((char *)(puVar5 + 1),0xf1,&DAT_10016b62,param_1);
          recovered_10001a50(&local_1c,0,0xc);
          if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
             (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00006834)(param_1,&local_1c), iVar3 != 0)))) {
            pcVar6 = recovered_10001d80((char *)param_2,'w');
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
                  dst = recovered_10001980((void *)puVar5[0x3f],uVar7);
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
                recovered_100019c0(dst,local_1c,local_18);
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
            recovered_10001940(puVar5);
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
  puVar5 = recovered_10001900(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_10001a50(puVar5,0,800);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_10016b62
#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006834
#undef str_10016ce3
#undef str_10016cf0
#undef str_10016cfe
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
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10004370(int param_1,int param_2,int *param_3)

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
    recovered_10001940((void *)param_3[0x3f]);
  }
  recovered_10001940(param_3);
LAB_1000441d:
  puVar2 = recovered_10003ff0(param_1,param_2);
  return puVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_10017000
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
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004430(int *param_1)

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
    recovered_10001940((void *)param_1[0x3f]);
  }
  recovered_10001940(param_1);
  return uVar2;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004500
 */

int recovered_10004500(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;

  iVar1 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     ((param_4 != (int *)0x0 && ((char)param_4[0x44] == '\x01')))) {
    iVar2 = 0;
    iVar1 = param_2;
    puVar4 = param_1;
    do {
      do {
        uVar3 = recovered_10004580(param_4);
        if (uVar3 == 0xffffffff) {
          return iVar2;
        }
        *param_1 = (char)uVar3;
        param_1 = param_1 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar2 = iVar2 + 1;
      param_1 = puVar4 + param_2;
      iVar1 = param_2;
      puVar4 = param_1;
    } while (iVar2 != param_3);
    iVar1 = param_3;
  }
  return iVar1;
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
#undef DAT_10016b38
#define DAT_10016b38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc28U)))
#undef DAT_10017080
#define DAT_10017080 (*(uint *)(((uintptr_t)pf_module_state + 0x1170U)))
#undef DAT_10017084
#define DAT_10017084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1174U)))
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
 * Address: 0x10004580
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004580(int *param_1)

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
      recovered_100019c0(local_20c,&DAT_10017084,DAT_10017080);
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
        uVar2 = recovered_10001c10((char *)((int)param_1 + 0x116));
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006840
#undef DAT_00006844
#undef DAT_10016b38
#undef DAT_10017080
#undef DAT_10017084
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006840
#undef _DAT_00006844
#undef local_20c

#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004730
 */

int recovered_10004730(int param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10003aa0((char *)param_1,uVar5);
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
      pvVar3 = recovered_10001980((void *)param_4[0x3f],uVar2);
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
      recovered_10001a50((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_100019c0((void *)(uVar4 + param_4[0x3f]),(void *)param_1,uVar5);
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

#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004890
 */

undefined4 recovered_10004890(int *param_1,uint param_2,int param_3)

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

#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004910
 */

undefined4 recovered_10004910(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_10017000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006838
#define DAT_00006838 (*(uint8_t *)(0x6838U))
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_00006838
#define _DAT_00006838 (*(code * *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004940(int *param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006838
#undef PTR_DAT_10017000
#undef _DAT_00006800
#undef _DAT_00006804
#undef _DAT_00006808
#undef _DAT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f0
 */

undefined1 recovered_100049f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a10
 */

undefined1 recovered_10004a10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a30
 */

void recovered_10004a30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a50
 */

uint recovered_10004a50(uint param_1,int param_2)

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
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
#undef _DAT_00006800
#define _DAT_00006800 (*(int *)(0x6800U))
#undef _DAT_00006804
#define _DAT_00006804 (*(int *)(0x6804U))
#undef _DAT_00006808
#define _DAT_00006808 (*(uint *)(0x6808U))
#undef _DAT_0000683c
#define _DAT_0000683c (*(code * *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004a80(int param_1)

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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0000683c
#undef PTR_DAT_10017000
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
#undef PTR_DAT_10017000
#define PTR_DAT_10017000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f0U)))
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
 * Address: 0x10004af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004af0(int param_1,int param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10017000 = 0x16;
  }
  else {
    recovered_10001a50(&local_1c,0,0xc);
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

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006834
#undef DAT_00006838
#undef DAT_0000683c
#undef PTR_DAT_10017000
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
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004c60(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *dst;
  uint uVar2;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_10001a50(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      dst = recovered_10001900(local_18 + (local_18 == 0));
      if (dst == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_100019c0(dst,local_1c,local_18);
        uVar2 = local_18;
      }
      *param_2 = (int)dst;
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
 * Address: 0x10004d30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10004d30(int param_1,int param_2,int param_3)

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
 * Address: 0x10004da0
 */

undefined4 recovered_10004da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004db0
 */

void recovered_10004db0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
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

undefined4 recovered_10004de0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004df0
 */

char * recovered_10004df0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10004e20
 */

int recovered_10004e20(int param_1,int param_2,int param_3)

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


#undef DAT_10016c72
#define DAT_10016c72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd62U)))
#undef str_10016c75
#define str_10016c75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd65U)))
#undef str_10016c82
#define str_10016c82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd72U)))
#undef str_10016c8c
#define str_10016c8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd7cU)))
#undef str_10016ca0
#define str_10016ca0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd90U)))
#undef str_10016cae
#define str_10016cae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9eU)))
#undef str_10016cc0
#define str_10016cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_10016ccc
#define str_10016ccc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbcU)))
#undef str_10016cdd
#define str_10016cdd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdcdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e70
 */

char * recovered_10004e70(undefined4 param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ed0
 */

undefined4 recovered_10004ed0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee0
 */

undefined4 recovered_10004ee0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10017284
#define DAT_10017284 (*(int *)(((uintptr_t)pf_module_state + 0x1374U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ef0
 */

void recovered_10004ef0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10017284 = DAT_10017284 + 1;
  return;
}

#undef DAT_10017284

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f10
 */

void recovered_10004f10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Could not recover jumptable at 0x10004f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10004f20(void *context){__asm__ volatile("movl 4(%esp),%eax; movl %ebx,0(%eax); movl %esi,4(%eax); movl %edi,8(%eax); movl %ebp,12(%eax); leal 4(%esp),%edx; movl %edx,16(%eax); movl (%esp),%edx; movl %edx,20(%eax); xorl %eax,%eax; ret");}


/* Native context ABI in a C translation unit. Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10004f50(void *context,int value){__asm__ volatile("movl 4(%esp),%edx; movl 8(%esp),%eax; testl %eax,%eax; jnz 1f; movl $1,%eax; 1: movl 0(%edx),%ebx; movl 4(%edx),%esi; movl 8(%edx),%edi; movl 12(%edx),%ebp; movl 16(%edx),%esp; movl 20(%edx),%ecx; jmp *%ecx");}


#undef DAT_10004fbd
#define DAT_10004fbd (*(uint8_t *)(0x10004fbdU))
#undef DAT_10016d70
#define DAT_10016d70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe60U)))
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
 * Address: 0x10004f80
 */

void recovered_10004f80(void)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fe0;
  local_28 = &DAT_10016d70;
  local_20 = &DAT_10004fbd;
  local_40 = 1;
  recovered_100054a0(&local_44);
  recovered_100018c0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_10004fbd
#undef DAT_10016d70
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
 * Address: 0x10004fe0
 */

undefined4 recovered_10004fe0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ff0
 */

void recovered_10004ff0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005010(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004f80();
}


#undef DAT_10017288
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0x1378U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005010
 */

int recovered_10005010(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_10017288;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_10017288 = param_1;
  iVar1 = recovered_10005340(param_1);
  return iVar1;
}

#undef DAT_10017288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005040
 */

void * recovered_10005040(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001900(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100018c0();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005070
 */

void * recovered_10005070(uint size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10001900(size + (size == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_100018c0();
  }
  return pvVar1;
}


#undef DAT_10016d80
#define DAT_10016d80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe70U)))
#undef LAB_100050f4
#define LAB_100050f4 (*(uint8_t *)(0x100050f4U))
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
 * Address: 0x100050a0
 */

void recovered_100050a0(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fe0;
  local_28 = &DAT_10016d80;
  local_20 = &LAB_100050f4;
  local_40 = 1;
  recovered_100054a0(&local_44);
  recovered_10001940(pointer);
  recovered_100054c0(&local_44);
  return;
}

#undef DAT_10016d80
#undef LAB_100050f4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10016d90
#define DAT_10016d90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe80U)))
#undef LAB_10005174
#define LAB_10005174 (*(uint8_t *)(0x10005174U))
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
 * Address: 0x10005120
 */

void recovered_10005120(void *pointer)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fe0;
  local_28 = &DAT_10016d90;
  local_20 = &LAB_10005174;
  local_40 = 1;
  recovered_100054a0(&local_44);
  recovered_10001940(pointer);
  recovered_100054c0(&local_44);
  return;
}

#undef DAT_10016d90
#undef LAB_10005174
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef auStackY_cc
#undef local_20
#undef local_1c

#undef DAT_10016da0
#define DAT_10016da0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe90U)))
#undef LAB_100051f4
#define LAB_100051f4 (*(uint8_t *)(0x100051f4U))
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
 * Address: 0x100051a0
 */

void recovered_100051a0(void *pointer,uint size)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fe0;
  local_28 = &DAT_10016da0;
  local_20 = &LAB_100051f4;
  local_40 = 1;
  recovered_100054a0(&local_44);
  recovered_10001940(pointer);
  recovered_100054c0(&local_44);
  return;
}

#undef DAT_10016da0
#undef LAB_100051f4
#undef auStack_18
#undef local_44
#undef local_40
#undef local_2c
#undef auStackY_cc
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10016db0
#define DAT_10016db0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xea0U)))
#undef LAB_10005274
#define LAB_10005274 (*(uint8_t *)(0x10005274U))
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
 * Address: 0x10005220
 */

void recovered_10005220(void *pointer,uint size)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_10004fe0;
  local_28 = &DAT_10016db0;
  local_20 = &LAB_10005274;
  local_40 = 1;
  recovered_100054a0(&local_44);
  recovered_10001940(pointer);
  recovered_100054c0(&local_44);
  return;
}

#undef DAT_10016db0
#undef LAB_10005274
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
 * Address: 0x100052a0
 */

undefined4 recovered_100052a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052b0
 */

uint recovered_100052b0(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052c0
 */

void recovered_100052c0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052d0
 */

void recovered_100052d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

undefined1 * recovered_100052e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10001900(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f80();
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
 * Address: 0x10005320
 */

void recovered_10005320(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10001940((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005340
 */

int recovered_10005340(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return in_ECX + 0x1c;
}


#undef DAT_10017288
#define DAT_10017288 (*(void * *)(((uintptr_t)pf_module_state + 0x1378U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005350
 */

void recovered_10005350(void)

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
      recovered_10001940(pointer);
    }
  }
  return;
}

#undef DAT_10017288

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053a0
 */

void recovered_100053a0(int param_1,uchar *param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uchar **)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100053e0(param_1 + -0x1c,param_2);
}


#undef DAT_10017288
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0x1378U)))
#undef DAT_1001728c
#define DAT_1001728c (*(int * *)(((uintptr_t)pf_module_state + 0x137cU)))
#define local_20 (*(undefined4 *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053e0
 */

void recovered_100053e0(int in_ECX,uchar *in_EDX)

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
      uVar1 = recovered_100059b0((int)in_ECX_01,in_EDX_00,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_10005530(local_14);
        in_ECX_00 = DAT_10017288;
        if (DAT_10017288 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10004f80();
        }
        *(undefined1 *)(DAT_10017288 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100053e0(in_ECX_00,in_EDX_01);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004f80();
}

#undef DAT_10017288
#undef DAT_1001728c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10017288
#define DAT_10017288 (*(int *)(((uintptr_t)pf_module_state + 0x1378U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005460
 */

void recovered_10005460(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX_00;
  uchar *in_EDX;

  in_ECX_00 = DAT_10017288;
  if (DAT_10017288 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004f80();
  }
  *(undefined1 *)(DAT_10017288 + 0x18) = 1;
  *(undefined4 *)(in_ECX_00 + 0xc) = 0;
  *(undefined4 *)(in_ECX_00 + 0x10) = 0;
  *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100053e0(in_ECX_00,in_EDX);
}

#undef DAT_10017288

#undef DAT_1001728c
#define DAT_1001728c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x137cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054a0
 */

void recovered_100054a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1001728c;
  DAT_1001728c = param_1;
  return;
}

#undef DAT_1001728c

#undef DAT_1001728c
#define DAT_1001728c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x137cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054c0
 */

void recovered_100054c0(undefined4 *param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054f0
 */

void recovered_100054f0(int in_stack_00000004)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar *in_EDX;

                    /* WARNING: Subroutine does not return */
  recovered_100053e0(in_stack_00000004,in_EDX);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005500
 */

void recovered_10005500(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f80();
}


#undef DAT_1001728c
#define DAT_1001728c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x137cU)))
#define uStack_28 (*(undefined4 *)(frame + 24))
#define uStack_24 (*(undefined4 *)(frame + 28))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define in_stack_00000004 (*(int *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005510
 */

void recovered_10005510(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_1001728c != (undefined4 *)0x0) {
    DAT_1001728c = (undefined4 *)*DAT_1001728c;
  }
  recovered_10005530(in_stack_00000004);
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
        recovered_10004f10((int)puVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005510();
      }
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      recovered_100059b0((int)DAT_1001728c,(byte *)*extraout_ECX,(undefined2 *)&uStack_28);
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
  recovered_10004f80();
}

#undef DAT_1001728c
#undef uStack_28
#undef uStack_24
#undef uStack_20
#undef in_stack_00000004

#undef DAT_1001728c
#define DAT_1001728c (*(int * *)(((uintptr_t)pf_module_state + 0x137cU)))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005530
 */

void recovered_10005530(int in_ECX)

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
        recovered_10004f10((int)piVar2);
                    /* WARNING: Subroutine does not return */
        recovered_10005510();
      }
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      recovered_100059b0((int)DAT_1001728c,*(byte **)in_ECX,(undefined2 *)&local_1c);
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
  recovered_10004f80();
}

#undef DAT_1001728c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055c0
 */

void recovered_100055c0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10005510();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

undefined4 recovered_100055e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055f0
 */

void recovered_100055f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004f80();
}


#undef DAT_10017060
#define DAT_10017060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1150U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005600
 */

int recovered_10005600(int *param_1,undefined4 param_2,undefined4 *param_3)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void recovered_100056d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100018c0();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e0
 */

undefined4 recovered_100056e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056f0
 */

bool recovered_100056f0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005710
 */

bool recovered_10005710(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

bool recovered_10005740(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005770
 */

bool recovered_10005770(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005790
 */

bool recovered_10005790(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057b0
 */

byte recovered_100057b0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100057f0
 */

bool recovered_100057f0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f50
#define DAT_10015f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f50
#define _DAT_10015f50 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double recovered_10005810(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10002100(value);
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

#undef DAT_10015f10
#undef DAT_10015f50
#undef _DAT_10015f10
#undef _DAT_10015f50

#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005860
 */

ulonglong recovered_10005860(byte *param_1,undefined4 *param_2,uint param_3)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059a0
 */

void recovered_100059a0(byte *in_stack_00000004,undefined4 *in_stack_00000008,uint in_stack_0000000c
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10005860(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}


#undef DAT_10016110
#define DAT_10016110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x200U)))
#undef DAT_10017060
#define DAT_10017060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1150U)))
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
 * Address: 0x100059b0
 */

undefined4 recovered_100059b0(int in_ECX,byte *in_EDX,undefined2 *param_3)

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
      recovered_10005d30((uint)*pbVar9,(int *)&local_2c);
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
      pbVar9 = recovered_10005d30(local_34,(int *)&local_4c);
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
 * Address: 0x10005d30
 */

byte * recovered_10005d30(uint in_ECX,int *in_EDX)

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
 * Address: 0x10005e40
 */

int recovered_10005e40(char *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 < 8) {
    if (param_2 < 2) goto LAB_10005ef9;
  }
  else {
    iVar1 = recovered_10001ac0((int)param_1,((uintptr_t)pf_module_state+0x7b0U),8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*param_1 == 'B') {
    if (param_1[1] == 'M') {
      return 2;
    }
    if (param_2 < 3) goto LAB_10005ef9;
  }
  else {
    if (param_2 < 3) goto LAB_10005ef9;
    if (((*param_1 == -1) && (param_1[1] == -0x28)) && (param_1[2] == -1)) {
      return 4;
    }
  }
  if (param_2 < 0xe) {
    if (param_2 < 8) goto LAB_10005ef9;
  }
  else {
    iVar1 = recovered_10001ac0((int)param_1,((uintptr_t)pf_module_state+0xdfcU),9);
    if (iVar1 == 0) {
      return 5;
    }
  }
  iVar1 = recovered_10001ac0((int)param_1,((uintptr_t)pf_module_state+0x7b8U),8);
  if (iVar1 == 0) {
    return 6;
  }
LAB_10005ef9:
  uVar2 = recovered_10005f20((byte *)param_1,param_2);
  return (uVar2 & 0xff) * 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f20
 */

undefined4 recovered_10005f20(byte *in_ECX,uint in_EDX)

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
      (iVar4 = recovered_10001ac0((int)(in_ECX + (in_EDX - 0x12)),((uintptr_t)pf_module_state+0xe13U),0x11), iVar4 == 0)) &&
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


#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10015f20
#define DAT_10015f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10015f24
#define DAT_10015f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10015f28
#define DAT_10015f28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10015f50
#define DAT_10015f50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_10015f70
#define DAT_10015f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10015f90
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_10016148
#define DAT_10016148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
#undef DAT_10016150
#define DAT_10016150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x240U)))
#undef DAT_10016158
#define DAT_10016158 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x248U)))
#undef DAT_10016160
#define DAT_10016160 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x250U)))
#undef DAT_10016168
#define DAT_10016168 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
#undef DAT_10016170
#define DAT_10016170 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x260U)))
#undef DAT_100161b0
#define DAT_100161b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_100161b4
#define DAT_100161b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_100161b8
#define DAT_100161b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef DAT_100161bc
#define DAT_100161bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_100161c0
#define DAT_100161c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
#undef DAT_100166d0
#define DAT_100166d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c0U)))
#undef DAT_10016dc0
#define DAT_10016dc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeb0U)))
#undef DAT_10017290
#define DAT_10017290 (*(char *)(((uintptr_t)pf_module_state + 0x1380U)))
#undef DAT_10017298
#define DAT_10017298 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1388U)))
#undef DAT_100172a0
#define DAT_100172a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1390U)))
#undef DAT_100172a8
#define DAT_100172a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1398U)))
#undef DAT_100172b0
#define DAT_100172b0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13a0U)))
#undef DAT_100172b8
#define DAT_100172b8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13a8U)))
#undef DAT_100172c0
#define DAT_100172c0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13b0U)))
#undef DAT_100172c8
#define DAT_100172c8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13b8U)))
#undef DAT_100172d0
#define DAT_100172d0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x13c0U)))
#undef LAB_1000ab1a
#define LAB_1000ab1a (*(uint8_t *)(0x1000ab1aU))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10015f20
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10015f24
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10015f28
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_10015f50
#define _DAT_10015f50 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef _DAT_10015f70
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10016148
#define _DAT_10016148 (*(double *)(((uintptr_t)pf_module_state + 0x238U)))
#undef _DAT_10016150
#define _DAT_10016150 (*(double *)(((uintptr_t)pf_module_state + 0x240U)))
#undef _DAT_10016158
#define _DAT_10016158 (*(double *)(((uintptr_t)pf_module_state + 0x248U)))
#undef _DAT_10016160
#define _DAT_10016160 (*(double *)(((uintptr_t)pf_module_state + 0x250U)))
#undef _DAT_10016168
#define _DAT_10016168 (*(double *)(((uintptr_t)pf_module_state + 0x258U)))
#undef _DAT_10016170
#define _DAT_10016170 (*(double *)(((uintptr_t)pf_module_state + 0x260U)))
#undef _DAT_100161b0
#define _DAT_100161b0 (*(float *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef _DAT_100161b4
#define _DAT_100161b4 (*(float *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef _DAT_100161b8
#define _DAT_100161b8 (*(float *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef _DAT_100161bc
#define _DAT_100161bc (*(float *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef _DAT_100161c0
#define _DAT_100161c0 (*(float *)(((uintptr_t)pf_module_state + 0x2b0U)))
#define local_bb4 (*(uint *********** *)(frame + 172))
#define local_bb0 (*(uint *********** *)(frame + 176))
#define local_bac (*(uint *********** *)(frame + 180))
#define local_ba8 (*(uint *********** *)(frame + 184))
#define local_ba4 (*(uint *)(frame + 188))
#define local_ba0 (*(uint *********** *)(frame + 192))
#define local_b9c (*(uint *)(frame + 196))
#define local_b98 (*(undefined4 *)(frame + 200))
#define local_b94 (*(undefined4 *)(frame + 204))
#define local_b90 (*(undefined4 *)(frame + 208))
#define local_78c (*(char (*)[4])(frame + 1236))
#define local_788 (*(int (*)[3])(frame + 1240))
#define local_77c (*(undefined1 *)(frame + 1252))
#define local_778 (*(undefined4 *)(frame + 1256))
#define local_774 (*(undefined4 *)(frame + 1260))
#define local_770 (*(undefined4 *)(frame + 1264))
#define local_76c (*(undefined1 *)(frame + 1268))
#define local_768 (*(undefined4 *)(frame + 1272))
#define local_764 (*(undefined4 *)(frame + 1276))
#define local_760 (*(undefined4 *)(frame + 1280))
#define local_75c (*(undefined1 *)(frame + 1284))
#define local_758 (*(undefined4 *)(frame + 1288))
#define local_754 (*(undefined4 *)(frame + 1292))
#define local_750 (*(undefined4 *)(frame + 1296))
#define local_74c (*(char (*)[4])(frame + 1300))
#define local_748 (*(int (*)[3])(frame + 1304))
#define local_73c (*(undefined1 *)(frame + 1316))
#define local_738 (*(void * *)(frame + 1320))
#define local_734 (*(undefined4 *)(frame + 1324))
#define local_730 (*(undefined4 *)(frame + 1328))
#define local_72c (*(undefined1 *)(frame + 1332))
#define local_728 (*(void * *)(frame + 1336))
#define local_724 (*(undefined4 *)(frame + 1340))
#define local_720 (*(undefined4 *)(frame + 1344))
#define local_71c (*(undefined1 *)(frame + 1348))
#define local_718 (*(void * *)(frame + 1352))
#define local_714 (*(undefined4 *)(frame + 1356))
#define local_710 (*(undefined4 *)(frame + 1360))
#define local_70c (*(uint *********** *)(frame + 1364))
#define local_708 (*(uint *********** *)(frame + 1368))
#define local_704 (*(undefined4 *)(frame + 1372))
#define local_700 (*(undefined4 * *)(frame + 1376))
#define local_6fc (*(int *)(frame + 1380))
#define auStackY_c4c (*(undefined1 (*)[128])(frame + 20))
#define local_6f8 (*(undefined4 *)(frame + 1384))
#define local_6f4 (*(uint *********** *)(frame + 1388))
#define local_6f0 (*(uint *********** *)(frame + 1392))
#define local_6e8 (*(undefined4 *)(frame + 1400))
#define local_6e4 (*(uint *********** *)(frame + 1404))
#define local_6e0 (*(uint *********** *)(frame + 1408))
#define local_6dc (*(uint * *)(frame + 1412))
#define local_6d8 (*(uint *********** *)(frame + 1416))
#define local_6d4 (*(void ** *)(frame + 1420))
#define local_6d0 (*(uint *********** *)(frame + 1424))
#define local_6cc (*(undefined4 *)(frame + 1428))
#define local_6c8 (*(uint ************ *)(frame + 1432))
#define local_6c4 (*(uint * *)(frame + 1436))
#define local_6c0 (*(uint *********** *)(frame + 1440))
#define local_6bc (*(uint ********** *)(frame + 1444))
#define local_6b8 (*(int *)(frame + 1448))
#define local_6b4 (*(uint ********** *)(frame + 1452))
#define local_6b0 (*(uint ********** *)(frame + 1456))
#define local_6ac (*(int *)(frame + 1460))
#define local_6a8 (*(void * *)(frame + 1464))
#define local_6a4 (*(undefined4 *)(frame + 1468))
#define local_6a0 (*(undefined4 *)(frame + 1472))
#define local_69c (*(void * *)(frame + 1476))
#define local_698 (*(int *)(frame + 1480))
#define local_694 (*(undefined4 *)(frame + 1484))
#define local_2bc (*(undefined4 *)(frame + 2468))
#define local_2b8 (*(undefined4 *)(frame + 2472))
#define local_2b4 (*(undefined4 *)(frame + 2476))
#define local_2ac (*(undefined4 *)(frame + 2484))
#define local_2a8 (*(undefined4 *)(frame + 2488))
#define local_2a4 (*(undefined4 *)(frame + 2492))
#define local_29c (*(undefined4 *)(frame + 2500))
#define local_298 (*(undefined4 *)(frame + 2504))
#define local_294 (*(undefined4 *)(frame + 2508))
#define local_28c (*(undefined4 *)(frame + 2516))
#define local_288 (*(undefined4 *)(frame + 2520))
#define local_284 (*(undefined4 *)(frame + 2524))
#define local_27c (*(undefined4 *)(frame + 2532))
#define local_278 (*(undefined4 *)(frame + 2536))
#define local_274 (*(undefined4 *)(frame + 2540))
#define local_26c (*(undefined4 *)(frame + 2548))
#define local_268 (*(undefined4 *)(frame + 2552))
#define local_264 (*(undefined4 *)(frame + 2556))
#define local_25c (*(undefined4 *)(frame + 2564))
#define local_258 (*(undefined4 *)(frame + 2568))
#define local_254 (*(undefined4 *)(frame + 2572))
#define local_250 (*(undefined1 *)(frame + 2576))
#define local_24c (*(undefined4 *)(frame + 2580))
#define local_248 (*(undefined4 *)(frame + 2584))
#define local_244 (*(undefined4 *)(frame + 2588))
#define local_240 (*(uint *********** *)(frame + 2592))
#define local_23c (*(uint *********** *)(frame + 2596))
#define local_238 (*(undefined4 *)(frame + 2600))
#define local_234 (*(undefined4 * *)(frame + 2604))
#define local_230 (*(int *)(frame + 2608))
#define local_22c (*(undefined4 *)(frame + 2612))
#define local_228 (*(uint *********** *)(frame + 2616))
#define local_224 (*(uint *********** *)(frame + 2620))
#define local_220 (*(uint *)(frame + 2624))
#define local_21c (*(uint ********** *)(frame + 2628))
#define local_218 (*(int *)(frame + 2632))
#define local_214 (*(uint * *)(frame + 2636))
#define local_210 (*(uint ************ *)(frame + 2640))
#define local_20c (*(void ** *)(frame + 2644))
#define local_208 (*(uint *********** *)(frame + 2648))
#define local_204 (*(uint * *)(frame + 2652))
#define local_200 (*(uint *********** *)(frame + 2656))
#define local_1fc (*(uint *********** *)(frame + 2660))
#define local_1f8 (*(uint *********** *)(frame + 2664))
#define aiStack_5e8 (*(int (*)[203])(frame + 1656))
#define local_1f4 (*(int *)(frame + 2668))
#define local_1f0 (*(int *)(frame + 2672))
#define local_1ec (*(int *)(frame + 2676))
#define local_1e8 (*(int *)(frame + 2680))
#define local_1e4 (*(int *)(frame + 2684))
#define local_1e0 (*(int *)(frame + 2688))
#define local_1dc (*(int *)(frame + 2692))
#define local_1d8 (*(int *)(frame + 2696))
#define local_1d4 (*(uint *)(frame + 2700))
#define local_1d0 (*(uint *)(frame + 2704))
#define local_1cc (*(uint *********** *)(frame + 2708))
#define local_1c8 (*(uint *)(frame + 2712))
#define local_1c4 (*(uint *********** *)(frame + 2716))
#define local_1c0 (*(int *)(frame + 2720))
#define local_1bc (*(uint *)(frame + 2724))
#define local_1b8 (*(uint *)(frame + 2728))
#define local_1b4 (*(uint *)(frame + 2732))
#define local_1b0 (*(uint *********** *)(frame + 2736))
#define local_1ac (*(uint *********** *)(frame + 2740))
#define local_1a8 (*(undefined4 * *)(frame + 2744))
#define local_1a4 (*(uint *********** *)(frame + 2748))
#define local_1a0 (*(uint *)(frame + 2752))
#define local_19c (*(uint ********** *)(frame + 2756))
#define local_196 (*(ushort *)(frame + 2762))
#define local_194 (*(ushort *)(frame + 2764))
#define local_192 (*(ushort *)(frame + 2766))
#define local_190 (*(ushort *)(frame + 2768))
#define local_18e (*(ushort *)(frame + 2770))
#define local_18c (*(ushort *)(frame + 2772))
#define local_18a (*(ushort *)(frame + 2774))
#define local_188 (*(ushort *)(frame + 2776))
#define local_186 (*(ushort *)(frame + 2778))
#define local_184 (*(uint *)(frame + 2780))
#define local_180 (*(byte * *)(frame + 2784))
#define local_17c (*(undefined4 * *)(frame + 2788))
#define local_178 (*(uint *)(frame + 2792))
#define local_174 (*(uint *)(frame + 2796))
#define local_170 (*(uint ********** *)(frame + 2800))
#define local_16c (*(int *)(frame + 2804))
#define local_168 (*(uint ********** *)(frame + 2808))
#define local_164 (*(uint ********** *)(frame + 2812))
#define local_160 (*(uint *)(frame + 2816))
#define local_15c (*(uint *)(frame + 2820))
#define local_158 (*(undefined4 *)(frame + 2824))
#define local_154 (*(uint *)(frame + 2828))
#define local_150 (*(undefined4 *)(frame + 2832))
#define local_14c (*(uint *)(frame + 2836))
#define local_148 (*(undefined4 *)(frame + 2840))
#define local_144 (*(uint *)(frame + 2844))
#define local_140 (*(undefined4 *)(frame + 2848))
#define local_13c (*(uint *)(frame + 2852))
#define local_138 (*(undefined4 *)(frame + 2856))
#define local_134 (*(uint *)(frame + 2860))
#define local_130 (*(undefined4 *)(frame + 2864))
#define local_12c (*(uint *)(frame + 2868))
#define local_128 (*(undefined4 *)(frame + 2872))
#define local_124 (*(double *)(frame + 2876))
#define local_11c (*(double *)(frame + 2884))
#define local_114 (*(double *)(frame + 2892))
#define local_10c (*(uint ********** *)(frame + 2900))
#define local_108 (*(int *)(frame + 2904))
#define local_104 (*(int *)(frame + 2908))
#define local_100 (*(void * *)(frame + 2912))
#define local_fc (*(undefined4 *)(frame + 2916))
#define local_f8 (*(undefined4 *)(frame + 2920))
#define local_f4 (*(uint ********** *)(frame + 2924))
#define local_f0 (*(double *)(frame + 2928))
#define local_e8 (*(double *)(frame + 2936))
#define local_e0 (*(undefined8 *)(frame + 2944))
#define local_d8 (*(uint *)(frame + 2952))
#define local_d4 (*(double *)(frame + 2956))
#define local_cc (*(uint *********** *)(frame + 2964))
#define local_c8 (*(undefined4 *)(frame + 2968))
#define local_be (*(ushort *)(frame + 2978))
#define local_b0 (*(double *)(frame + 2992))
#define local_a8 (*(byte * *)(frame + 3000))
#define local_a4 (*(void * *)(frame + 3004))
#define local_a0 (*(double *)(frame + 3008))
#define local_98 (*(uint *)(frame + 3016))
#define local_94 (*(uint *)(frame + 3020))
#define local_90 (*(void * *)(frame + 3024))
#define local_8c (*(undefined4 *)(frame + 3028))
#define local_88 (*(undefined4 *)(frame + 3032))
#define local_74 (*(undefined * *)(frame + 3052))
#define local_70 (*(undefined * *)(frame + 3056))
#define local_6c (*(undefined1 * *)(frame + 3060))
#define local_68 (*(undefined1 * *)(frame + 3064))
#define local_64 (*(undefined1 * *)(frame + 3068))
#define local_54 (*(double *)(frame + 3084))
#define local_4c (*(uint *********** *)(frame + 3092))
#define local_48 (*(uint *********** *)(frame + 3096))
#define local_44 (*(uint *********** *)(frame + 3100))
#define local_40 (*(undefined8 *)(frame + 3104))
#define local_38 (*(double *)(frame + 3112))
#define local_30 (*(undefined8 *)(frame + 3120))
#define local_28 (*(uint *********** *)(frame + 3128))
#define local_24 (*(uint *********** *)(frame + 3132))
#define local_20 (*(uint *********** *)(frame + 3136))
#define local_1c (*(undefined8 *)(frame + 3140))
#define local_14 (*(uint *********** *)(frame + 3148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060a0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint pf_i386_decode_other(uint *******param_1,uint *******param_2,int *param_3){
  unsigned char frame[3200] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint ******ppppppuVar2;
  uint ******ppppppuVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  ushort uVar13;
  int iVar14;
  uint *******pppppppuVar15;
  void *pvVar16;
  uint uVar17;
  int *piVar18;
  uint **********ppppppppppuVar19;
  byte *pbVar20;
  undefined4 uVar21;
  uint **********ppppppppppuVar22;
  undefined4 extraout_EAX = 0;
  uint ***********pppppppppppuVar23;
  ushort *puVar24;
  uint ***********pppppppppppuVar25;
  uint ***********pppppppppppuVar26;
  uint *******pppppppuVar27;
  int iVar28;
  uint uVar29;
  byte bVar30;
  char *pcVar31;
  uint *******pppppppuVar32;
  uint **********ppppppppppuVar33;
  uint **********ppppppppppuVar34;
  undefined8 *puVar35;
  uint *puVar36;
  short sVar37;
  uint ***********pppppppppppuVar38;
  byte *pbVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint ************pointer;
  byte *pbVar43;
  uint *******pppppppuVar44;
  bool bVar45;
  ushort in_FPUControlWord = pf_fpu_control();
  undefined8 uVar46;
  double dVar47;

  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  recovered_100050a0((void *)param_3[2]);
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  recovered_100050a0((void *)0x0);
  local_64 = auStackY_c4c + 0x80;
  local_74 = PTR_recovered_10004fe0_10017004;
  local_70 = &DAT_10016dc0;
  local_68 = &LAB_1000ab1a;
  local_6c = (undefined1 *)((int)(uintptr_t)(frame + 3168) + -4);
  recovered_100054a0(&local_8c);
  if (param_2 == (uint *******)0x0 || param_1 == (uint *******)0x0) {
LAB_1000612e:
    pppppppppppuVar25 = (uint ***********)0x0;
    goto LAB_10006136;
  }
  local_88 = 0xffffffff;
  local_14 = (uint ***********)param_1;
  iVar14 = recovered_10005e40((char *)param_1,(uint)param_2);
  if (5 < iVar14 - 1U) goto LAB_1000612e;
  pppppppppppuVar25 = (uint ***********)(param_3 + 2);
  switch((uintptr_t)(iVar14)) {
  case 1:
    pppppppuVar32 = (uint *******)0x4;
    do {
      pppppppuVar15 = pppppppuVar32;
      pppppppuVar32 = (uint *******)((int)pppppppuVar15 * 2);
    } while (pppppppuVar15 < param_2);
    local_88 = 0xffffffff;
    local_a4 = recovered_10005040((uint)pppppppuVar15);
    recovered_100050a0((void *)0x0);
    pppppppuVar32 = (uint *******)0x0;
    do {
      *(undefined1 *)((int)local_a4 + (int)pppppppuVar32) =
           *(undefined1 *)((int)param_1 + (int)pppppppuVar32);
      pppppppuVar32 = (uint *******)((int)pppppppuVar32 + 1);
    } while (param_2 != pppppppuVar32);
    local_6e8 = (uint ***********)0x0;
    local_6e4 = (uint ***********)0x0;
    local_6e0 = (uint ***********)0x0;
    local_6dc = (uint *)0x0;
    local_6d8 = (uint ***********)0x0;
    local_6d4 = (void **)0x0;
    local_6d0 = (uint ***********)0x0;
    local_6cc = (uint *)((uint)PF_PART1(local_6cc, 3) << 0x18);
    local_6c8 = (uint ************)0x0;
    local_6c4 = (uint *)0x0;
    recovered_100050a0((void *)0x0);
    local_6c0 = (uint ***********)0x0;
    local_6bc = (uint **********)0x0;
    local_6b8 = 0;
    recovered_100050a0((void *)0x0);
    local_6b4 = (uint **********)0x0;
    local_6b0 = (uint **********)0x0;
    local_6ac = 0;
    recovered_100050a0((void *)0x0);
    local_6a8 = (void *)0x0;
    local_6a4 = 0;
    local_6a0 = 0;
    recovered_100050a0((void *)0x0);
    local_69c = (void *)0x0;
    local_698 = 0;
    local_694 = 0;
    recovered_100050a0((void *)0x0);
    recovered_100050a0((void *)0x0);
    recovered_100050a0((void *)0x0);
    recovered_100050a0((void *)0x0);
    if (param_2 < (uint *******)0x8) {
LAB_10006362:
      local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
      iVar14 = local_698;
    }
    else {
      local_88 = 0x28;
      iVar14 = recovered_10001ac0((int)local_a4,((uintptr_t)pf_module_state+0x7b0U),8);
      if (iVar14 != 0) goto LAB_10006362;
      if ((uint *******)0x13 < param_2) {
        pbVar39 = (byte *)0x8;
        local_40 = ((uint64_t)local_40 & 0xffffffff00000000ULL);
LAB_10007d36:
        uVar42 = *(uint *)((int)local_a4 + (int)pbVar39);
        pppppppppppuVar25 =
             (uint ***********)
             (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18);
        pbVar20 = pbVar39 + 8;
        if ((uint ***********)((int)param_2 - (int)pbVar20) < pppppppppppuVar25 + 1)
        goto LAB_10006362;
        pppppppppppuVar38 = (uint ***********)((int)local_a4 + (int)pbVar20);
        local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),(byte *)((int)pppppppppppuVar25 + (int)pbVar20))));
        local_14 = *(uint ************)((int)local_a4 + (int)pppppppppppuVar25 + (int)pbVar20);
        local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),pbVar39 + (int)local_a4 + 4)));
        uVar42 = recovered_10014cc0(0,pbVar39 + (int)local_a4 + 4,4);
        local_4c = pppppppppppuVar38;
        if (pppppppppppuVar25 != (uint ***********)0x0) {
          uVar42 = recovered_10014cc0(uVar42,(uchar *)pppppppppppuVar38,(int)pppppppppppuVar25);
        }
        if (uVar42 != ((uint)local_14 >> 0x18 | ((uint)local_14 & 0xff0000) >> 8 |
                       ((uint)local_14 & 0xff00) << 8 | (int)local_14 << 0x18)) goto LAB_10006362;
        local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),pbVar20));
        local_14 = pppppppppppuVar25;
        if ((char)local_6cc == '\0') {
          local_88 = 0x29;
          iVar40 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe09U),4);
          uVar8 = (ulonglong)local_1c >> 0x20;
          local_1c = pf_double_bits((double)(uVar8 << 0x20));
          iVar14 = local_698;
          if ((local_14 != (uint ***********)0xd) || (iVar40 != 0)) goto joined_r0x10006375;
          ppppppppppuVar19 = *local_4c;
          local_6e8 = (uint ***********)
                      ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8 |
                       ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18);
          ppppppppppuVar19 = local_4c[1];
          local_6e4 = (uint ***********)
                      ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8 |
                       ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18);
          bVar30 = *(byte *)(local_4c + 2);
          local_6e0 = (uint ***********)(uint)bVar30;
          local_1c = pf_double_bits((double)(uVar8 << 0x20));
          local_6dc = (uint *)(uint)*(byte *)((int)local_4c + 9);
          local_6d8 = (uint ***********)(uint)*(byte *)((int)local_4c + 10);
          local_6d4 = (void **)(uint)*(byte *)((int)local_4c + 0xb);
          local_6d0 = (uint ***********)(uint)*(byte *)(local_4c + 3);
          local_6cc = (uint *)CONCAT31(PF_PART3(local_6cc, 1),1);
          if ((local_6e8 == (uint ***********)0x0) ||
             ((local_6e4 == (uint ***********)0x0 ||
              (local_1c = pf_double_bits((double)(uVar8 << 0x20)), (uint *)0x6 < local_6dc))))
          goto joined_r0x10006375;
          if ((0x55U >> ((uint)local_6dc & 0x1f) & 1) == 0) {
            if (local_6dc != (uint *)0x3) goto joined_r0x10006375;
            bVar30 = bVar30 - 8;
          }
          else {
            bVar30 = bVar30 - 8 & 0xf7;
          }
          local_1c = pf_double_bits((double)(uVar8 << 0x20));
          if ((((bVar30 != 0) || (*(byte *)((int)local_4c + 10) != 0)) ||
              (*(byte *)((int)local_4c + 0xb) != 0)) || (1 < *(byte *)(local_4c + 3)))
          goto joined_r0x10006375;
        }
        else {
          local_88 = 0x2a;
          iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe30U),4);
          if (iVar14 == 0) {
            if (((local_14 != (uint ***********)0x8) || (((ulonglong)local_40 & 1) != 0)) ||
               (PF_PART1(local_6cc, 2) != '\0')) goto LAB_10006362;
            PF_PART3(local_6cc, 0) = CONCAT12(1,(undefined2)local_6cc);
            ppppppppppuVar19 = *local_4c;
            local_6c8 = (uint ************)
                        ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8 |
                         ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18);
          }
          else {
            local_88 = 0x2b;
            iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe35U),4);
            if (iVar14 == 0) {
              if ((local_14 != (uint ***********)0x1a) || (PF_PART1(local_6cc, 2) != '\x01'))
              goto LAB_10006362;
              local_b98 = 0;
              local_b94 = 0;
              local_b90 = 0;
              ppppppppppuVar19 = local_4c[1];
              local_bb4 = (uint ***********)
                          ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8
                           | ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18)
              ;
              ppppppppppuVar19 = local_4c[2];
              local_bb0 = (uint ***********)
                          ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8
                           | ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18)
              ;
              ppppppppppuVar19 = local_4c[3];
              local_bac = (uint ***********)
                          ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8
                           | ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18)
              ;
              ppppppppppuVar19 = local_4c[4];
              local_ba8 = (uint ***********)
                          ((uint)ppppppppppuVar19 >> 0x18 | ((uint)ppppppppppuVar19 & 0xff0000) >> 8
                           | ((uint)ppppppppppuVar19 & 0xff00) << 8 | (int)ppppppppppuVar19 << 0x18)
              ;
              local_ba4 = (uint)*(byte *)(local_4c + 6);
              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),local_ba4)));
              local_ba0 = (uint ***********)(uint)*(byte *)((int)local_4c + 0x19);
              local_b9c = CONCAT31(PF_PART3(local_b9c, 1),~SUB81(local_40,0) & local_698 == 0);
              if ((((local_bb4 == (uint ***********)0x0) ||
                   ((((local_bb0 == (uint ***********)0x0 || (local_6e8 < local_bac)) ||
                     ((uint ***********)((int)local_6e8 - (int)local_bac) < local_bb4)) ||
                    ((local_6e4 < local_ba8 ||
                     ((uint ***********)((int)local_6e4 - (int)local_ba8) < local_bb0)))))) ||
                  (2 < *(byte *)(local_4c + 6))) || (1 < *(byte *)((int)local_4c + 0x19))) {
                local_4c = local_ba0;
                recovered_100050a0((void *)0x0);
                goto LAB_10006362;
              }
              local_88 = 0x2c;
              local_4c = local_ba0;
              recovered_10014db0((int *)&local_69c,&local_bb4);
              recovered_100050a0((void *)0x0);
            }
            else {
              local_88 = 0x2d;
              iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe3aU),4);
              if (iVar14 == 0) {
                if (local_14 == (uint ***********)0x0) goto LAB_10006362;
                local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
                iVar14 = local_698;
                if ((uint ***********)0x300 < local_14) goto joined_r0x10006375;
                pppppppppppuVar25 = &local_6bc;
                pppppppppppuVar38 = (uint ***********)&local_6c0;
                if (local_14 != (uint ***********)(((uint)local_14 / 3) * 3))
                goto joined_r0x10006375;
              }
              else {
                local_88 = 0x2f;
                iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe3fU),4);
                if (iVar14 != 0) {
                  local_88 = 0x30;
                  iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe44U),4);
                  if (iVar14 == 0) {
                    local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),1)));
                    if (local_14 != (uint ***********)0x0) {
                      local_bb4 = local_4c;
                      local_bb0 = local_14;
                      local_88 = 0x31;
                      recovered_10014fa0((int *)&local_6a8,&local_bb4);
                      if ((local_698 != 0) &&
                         (*(char *)((int)local_69c + local_698 * 0x28 + -0x10) == '\x01')) {
                        local_88 = 0x32;
                        recovered_10014fa0((int *)((int)local_69c + local_698 * 0x28 + -0xc),
                                           &local_bb4);
                      }
                      local_6c4 = (uint *)((int)local_6c4 + (int)local_14);
                    }
                  }
                  else {
                    local_88 = 0x33;
                    iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe49U),4);
                    if (iVar14 != 0) {
                      local_88 = 0x35;
                      iVar14 = recovered_10001ac0(SUB84(local_1c,0),((uintptr_t)pf_module_state+0xe0eU),4);
                      if (iVar14 != 0) {
                        if ((*(byte *)(uint ***********)local_1c & 0x20) != 0) goto LAB_10007d19;
                        goto LAB_10006362;
                      }
                      if (local_14 != (uint ***********)0x0) goto LAB_10006362;
                      PF_PART2(local_6cc, 0) = CONCAT11(1,(char)local_6cc);
                      goto LAB_100073dc;
                    }
                    if (PF_PART1(local_6cc, 2) != '\x01') goto LAB_10006362;
                    if ((local_14 < (uint ***********)0x5) || (local_698 == 0)) goto LAB_10008789;
                    local_bb4 = local_4c + 1;
                    local_bb0 = local_14 + -1;
                    local_88 = 0x34;
                    recovered_10015040((int *)((int)local_69c + local_698 * 0x28 + -0xc),&local_bb4)
                    ;
                  }
                  goto LAB_10007d19;
                }
                if ((local_14 != (uint ***********)0x2 && local_6dc == (uint *)0x0) ||
                   (local_14 != (uint ***********)0x6 && local_6dc == (uint *)0x2))
                goto LAB_10006362;
                if (local_6dc == (uint *)0x3) {
                  pppppppppppuVar25 = &local_6b0;
                  pppppppppppuVar38 = &local_6b4;
                  if ((uint ***********)((uint)local_6bc / 3) < local_14) goto LAB_10006362;
                }
                else {
                  local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
                  iVar14 = local_698;
                  if (local_6dc == (uint *)0x4) goto joined_r0x10006375;
                  pppppppppppuVar25 = &local_6b0;
                  pppppppppppuVar38 = &local_6b4;
                  if (local_6dc == (uint *)0x6) goto joined_r0x10006375;
                }
              }
              *pppppppppppuVar25 = (uint **********)0x0;
              local_88 = 0x2e;
              recovered_10012650((int *)pppppppppppuVar38,(int)*pppppppppppuVar38,
                                 (undefined1 *)local_4c,(byte *)((int)local_14 + (int)local_4c));
            }
          }
        }
LAB_10007d19:
        pbVar39 = (byte *)((int)local_14 + (int)PF_PART4(local_38, 0) + 4);
        if (param_2 < (uint *******)((int)(uint ***********)local_30 + 0x10U)) goto LAB_100073dc;
        goto LAB_10007d36;
      }
LAB_100073dc:
      if ((char)local_6cc != '\x01') goto LAB_10006362;
      local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
      iVar14 = local_698;
      if ((PF_PART1(local_6cc, 1) == '\x01') && (local_6c4 != (uint *)0x0)) {
        if ((local_6dc == (uint *)0x3) && ((uint ***********)local_6bc == (uint ***********)0x0))
        goto LAB_10006362;
        if (PF_PART1(local_6cc, 2) == '\x01') {
          if (local_6c8 == (uint ************)0x0) goto LAB_10006362;
          if (local_6c8 <= (uint ************)(local_698 - 1U)) {
LAB_10008789:
            local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
            iVar14 = local_698;
            goto joined_r0x10006375;
          }
          iVar14 = local_698 * 0x28;
          piVar18 = (int *)((int)local_69c + 0x20);
          do {
            if (*piVar18 == 0) goto LAB_10006362;
            piVar18 = piVar18 + 10;
            iVar14 = iVar14 + -0x28;
          } while (iVar14 != 0);
        }
        recovered_100050a0((void *)0x0);
        local_bb4 = (uint ***********)0x0;
        local_bb0 = (uint ***********)0x0;
        local_bac = (uint ***********)0x0;
        local_ba8 = (uint ***********)0x0;
        local_ba4 = 0;
        local_ba0 = (uint ***********)0x0;
        local_b9c = 0;
        local_b98 = local_b98 & 0xffff0000;
        recovered_100050a0((void *)0x0);
        uVar42 = PF_PART4(local_1c, 4);
        if (local_6dc == (uint *)0x0) {
          pppppppppppuVar25 = (uint ***********)0x0;
          if (local_6b0 != (uint **********)0x0) {
            if (local_6b0 != (uint **********)0x2) goto LAB_10008850;
            local_ba8 = (uint ***********)
                        (uint)(ushort)(*(ushort *)local_6b4 << 8 | *(ushort *)local_6b4 >> 8);
            local_b98 = CONCAT31(PF_PART3(local_b98, 1),1);
          }
LAB_10008a71:
          local_164 = (uint **********)0x0;
          local_160 = 0;
          local_15c = 0;
          local_1a4 = pppppppppppuVar25;
          if ((PF_PART1(local_6cc, 2) == '\x01') && (local_698 != 0)) {
            local_88 = 0x37;
            uVar42 = recovered_1000ad10(&local_6e8,(int)&local_bb4,(int *)&local_164);
            local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),uVar42)));
          }
          else {
            local_88 = 0x38;
            uVar42 = recovered_1000b0f0(&local_6e8,(uint *)&local_6a8,(int)&local_bb4,
                                        (int *)&local_164);
            local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),uVar42)));
          }
          if ((char)local_1c == '\0') {
            ppppppppppuVar19 = local_164;
          }
          else {
            *param_3 = (int)local_6e8;
            param_3[1] = (int)local_6e4;
            param_3[3] = 0;
            recovered_100050a0((void *)param_3[2]);
            param_3[2] = (int)local_164;
            param_3[3] = local_160;
            param_3[4] = local_15c;
            ppppppppppuVar19 = (uint **********)0x0;
          }
          recovered_100050a0(ppppppppppuVar19);
          pppppppppppuVar25 = local_1a4;
        }
        else {
          if (local_6dc == (uint *)0x2) {
            pppppppppppuVar25 = (uint ***********)0x0;
            if (local_6b0 != (uint **********)0x0) {
              if (local_6b0 != (uint **********)0x6) goto LAB_10008850;
              local_ba4 = (uint)(ushort)(*(ushort *)local_6b4 << 8 | *(ushort *)local_6b4 >> 8);
              local_ba0 = (uint ***********)
                          (uint)(ushort)(*(ushort *)((int)local_6b4 + 2) << 8 |
                                        *(ushort *)((int)local_6b4 + 2) >> 8);
              local_b9c = (uint)(ushort)(*(ushort *)(local_6b4 + 1) << 8 |
                                        *(ushort *)(local_6b4 + 1) >> 8);
              PF_PART2(local_b98, 0) = CONCAT11(1,(undefined1)local_b98);
            }
            goto LAB_10008a71;
          }
          if (local_6dc == (uint *)0x3) {
            if ((uint ***********)local_6bc == (uint ***********)0x0) {
LAB_10008850:
              pppppppppppuVar25 = (uint ***********)0x0;
              local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
            }
            else {
              pppppppppppuVar38 = (uint ***********)((uint)local_6bc / 3);
              local_14 = (uint ***********)local_6bc;
              local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
              pppppppppppuVar25 = (uint ***********)0x0;
              if ((uint ***********)local_6bc == (uint ***********)((int)pppppppppppuVar38 * 3)) {
                uVar17 = (int)pppppppppppuVar38 * 4;
                local_bb0 = (uint ***********)0x0;
                local_1c = pf_double_bits(pf_bits_double(CONCAT44(uVar42,uVar17)));
                local_4c = pppppppppppuVar38;
                if (uVar17 == 0) {
                  pppppppppppuVar25 = (uint ***********)0x0;
                }
                else {
                  local_88 = 0x36;
                  pppppppppppuVar25 = recovered_10005040(uVar17);
                  recovered_100050a0((void *)0x0);
                  local_bac = (uint ***********)local_1c;
                  local_bb0 = (uint ***********)0x0;
                  do {
                    *(byte *)((int)pppppppppppuVar25 + (int)local_bb0) = 0xff;
                    local_bb0 = (uint ***********)((int)local_bb0 + 1);
                  } while (local_bb0 < (uint ***********)local_1c);
                  local_bb4 = pppppppppppuVar25;
                }
                if ((uint ***********)0x2 < local_14) {
                  puVar24 = (ushort *)((int)pppppppppppuVar25 + 2);
                  pbVar39 = (byte *)((int)local_6c0 + 2);
                  pppppppppppuVar38 = local_4c;
                  do {
                    *(byte *)(puVar24 + -1) = pbVar39[-2];
                    *(byte *)((int)puVar24 + -1) = pbVar39[-1];
                    *(byte *)puVar24 = *pbVar39;
                    puVar24 = puVar24 + 2;
                    pbVar39 = pbVar39 + 3;
                    pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 - 1);
                  } while (pppppppppppuVar38 != (uint ***********)0x0);
                }
                if (local_6b0 != (uint **********)0x0) {
                  uVar42 = 0;
                  do {
                    *(byte *)((int)pppppppppppuVar25 + uVar42 * 4 + 3) =
                         *(byte *)((int)local_6b4 + uVar42);
                    uVar42 = uVar42 + 1;
                  } while (uVar42 < local_6b0);
                }
                goto LAB_10008a71;
              }
            }
          }
          else {
            pppppppppppuVar25 = (uint ***********)0x0;
            local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
            if (local_6b0 == (uint **********)0x0) goto LAB_10008a71;
          }
        }
        local_bb0 = (uint ***********)0x0;
        recovered_100050a0(pppppppppppuVar25);
        iVar14 = local_698;
      }
    }
joined_r0x10006375:
    if (iVar14 != 0) {
      iVar40 = iVar14 * 0x28 + -8;
      local_698 = iVar14;
      do {
        *(undefined4 *)((int)local_69c + iVar40) = 0;
        recovered_100050a0(*(void **)((int)local_69c + iVar40 + -4));
        iVar40 = iVar40 + -0x28;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_698 = 0;
    recovered_100050a0(local_69c);
    local_6a4 = 0;
    recovered_100050a0(local_6a8);
    local_6b0 = (uint **********)0x0;
    recovered_100050a0(local_6b4);
    local_6bc = (uint **********)0x0;
    recovered_100050a0(local_6c0);
    recovered_100050a0(local_a4);
    break;
  case 2:
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    local_4c = pppppppppppuVar25;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_100050a0((void *)0x0);
    if (((((uint *******)0x19 < param_2) && (*(char *)param_1 == 'B')) &&
        (*(char *)((int)param_1 + 1) == 'M')) &&
       (uVar42 = *(uint *)((int)param_1 + 0xe), uVar42 == 0xc || 0x27 < uVar42)) {
      pppppppuVar32 = *(uint ********)((int)param_1 + 10);
      local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),pppppppuVar32)));
      if (uVar42 == 0xc) {
        pppppppppppuVar25 = (uint ***********)(uint)*(ushort *)((int)param_1 + 0x12);
        uVar17 = (uint)*(ushort *)(param_1 + 5);
        sVar37 = *(short *)((int)param_1 + 0x16);
        local_38 = pf_bits_double(CONCAT62(PF_PART6(local_38, 2),*(undefined2 *)(param_1 + 6)));
        local_24 = (uint ***********)0x0;
        local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),0x1a)));
        local_30 = pf_double_bits((double)((ulonglong)PF_PART4(local_30, 4) << 0x20));
        local_20 = (uint ***********)0x0;
LAB_1000724b:
        local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),uVar17));
        iVar14 = (int)param_2 - (int)pppppppuVar32;
        if (((param_2 < pppppppuVar32 || iVar14 == 0) || sVar37 != 1) ||
            (uVar17 == 0 || pppppppppppuVar25 == (uint ***********)0x0)) goto LAB_1000612e;
        local_28 = pppppppppppuVar25;
        if ((uint ***********)local_30 == (uint ***********)0x0) {
          uVar21 = 0;
          iVar40 = 0;
          local_44 = (uint ***********)0x0;
          iVar28 = 0;
        }
        else {
          if (((uint ***********)local_30 != (uint ***********)0x6) &&
             ((uint ***********)local_30 != (uint ***********)0x3)) goto LAB_1000612e;
          local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),iVar14));
          if (uVar42 < 0x34) {
            pppppppppppuVar25 = (uint ***********)0x0;
            if (param_2 < (uint *******)
                          ((uint)((uint ***********)local_30 == (uint ***********)0x6) * 4 + 0x42))
            goto LAB_10006136;
            iVar40 = *(int *)((int)param_1 + 0x36);
            local_44 = *(uint ************)((int)param_1 + 0x3a);
            iVar28 = *(int *)((int)param_1 + 0x3e);
            uVar21 = 0;
            if ((uint ***********)local_30 == (uint ***********)0x6) goto LAB_10008630;
          }
          else {
            iVar40 = *(int *)((int)param_1 + 0x36);
            local_44 = *(uint ************)((int)param_1 + 0x3a);
            iVar28 = *(int *)((int)param_1 + 0x3e);
            uVar21 = 0;
            if (0x37 < uVar42) {
LAB_10008630:
              uVar21 = *(undefined4 *)((int)param_1 + 0x42);
            }
          }
        }
        local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),iVar14));
        local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),uVar21));
        uVar17 = (uint)PF_PART2(local_38, 0);
        bVar6 = iVar40 == 0;
        bVar7 = local_44 == (uint ***********)0x0;
        bVar5 = uVar17 == 0x10;
        bVar45 = iVar28 == 0;
        iVar14 = 0x1f;
        if ((((bVar6 && bVar7) && bVar5) && bVar45) ||
           (iVar14 = iVar28, ((bVar6 && bVar7) && bVar5) && bVar45)) {
          local_44 = (uint ***********)0x3e0;
          iVar28 = iVar14;
          iVar14 = 0x7c00;
          if (((!bVar6 || !bVar7) || !bVar5) || !bVar45) goto LAB_10008676;
        }
        else {
          iVar14 = 0x7c00;
          if (((!bVar6 || !bVar7) || !bVar5) || !bVar45) {
LAB_10008676:
            iVar14 = iVar40;
          }
        }
        local_6e8 = (uint ***********)0x0;
        local_6e4 = (uint ***********)0x0;
        local_6e0 = (uint ***********)0x0;
        local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar17)));
        if ((((uVar17 == 0x20) && (iVar14 == 0)) && (local_44 == (uint ***********)0x0)) &&
           (iVar28 == 0)) {
          local_f0 = pf_bits_double(CONCAT44(PF_PART4(local_f0, 4),0xff));
          local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),0xff000000));
          local_44 = (uint ***********)0xff00;
          local_e8 = pf_bits_double(CONCAT44(PF_PART4(local_e8, 4),0xff0000));
LAB_1000898e:
          if ((int)(ZEXT48(local_28) * ((ulonglong)local_30 & 0xffffffff) >> 0x20) == 0) {
            uVar42 = (int)local_28 * (int)(uint ***********)local_30 + 0x1fU >> 3 & 0x1ffffffc;
            if (uVar42 != 0) {
              if ((int)((ulonglong)uVar42 * (pf_double_bits(local_54) & 0xffffffff) >> 0x20) == 0) {
                local_98 = uVar42;
                if (((uVar42 * (int)PF_PART4(local_54, 0) <= PF_PART4(local_b0, 0)) &&
                    ((int)(ZEXT48(local_28) * (pf_double_bits(local_54) & 0xffffffff) >> 0x20) == 0)) &&
                   ((uint)((int)local_28 * (int)PF_PART4(local_54, 0)) < 0x40000000)) {
                  local_88 = 2;
                  recovered_10010890((int *)&local_bb4,(int)local_28 * (int)PF_PART4(local_54, 0) * 4);
                  local_14 = (uint ***********)((int)local_14 + (int)(uint ***********)local_1c);
                  local_d4 = pf_bits_double(CONCAT44(PF_PART4(local_d4, 4),(uint)(uint ***********)local_30 >> 3));
                  local_180 = (byte *)((int)local_28 * 4);
                  local_a8 = (byte *)0x0;
                  local_124 = pf_bits_double(CONCAT44(PF_PART4(local_124, 4),(int)(uint ***********)local_30 - 1));
                  local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
                  local_94 = 0;
                  local_e0 = ((uint64_t)local_e0 & 0xffffffff00000000ULL);
                  do {
                    uVar42 = local_94;
                    if ((char)local_20 == '\0') {
                      uVar42 = ~local_94 + (int)PF_PART4(local_54, 0);
                    }
                    pppppppppppuVar25 = (uint ***********)(uVar42 * local_98 + (int)local_14);
                    pppppppppppuVar38 = (uint ***********)0x0;
                    local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),2));
                    local_11c = pf_bits_double(CONCAT44(PF_PART4(local_11c, 4),pppppppppppuVar25));
                    local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),pppppppppppuVar25)));
                    pbVar39 = local_a8;
                    do {
                      pppppppppppuVar26 = local_44;
                      pppppppppppuVar25 = local_bb4;
                      local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),pbVar39));
                      local_24 = pppppppppppuVar38;
                      switch((uintptr_t)(PF_PART4(local_124, 0))) {
                      case 0x0:
                        uVar42 = (uint)((*(byte *)(PF_PART4(local_11c, 0) + ((uint)pppppppppppuVar38 >> 3))
                                         >> ((byte)~(byte)pppppppppppuVar38 & 7) & 1) != 0);
                        break;
                      default:
                        if ((uint ***********)local_30 == (uint ***********)0x10) {
                          uVar42 = (uint)(ushort)*(uint ***********)local_40;
                        }
                        else {
                          uVar42 = (uint)*(uint ***********)local_40;
                        }
                        local_114 = pf_bits_double(CONCAT44(PF_PART4(local_114, 4),uVar42));
                        uVar17 = recovered_10010920(uVar42,PF_PART4(local_e8, 0));
                        *(byte *)((int)pppppppppppuVar25 + (int)PF_PART4(local_38, 0)) = (byte)uVar17;
                        uVar17 = recovered_10010920(uVar42,(uint)pppppppppppuVar26);
                        iVar14 = (int)PF_PART4(local_38, 0);
                        *(byte *)((int)pppppppppppuVar25 + (int)PF_PART4(local_38, 0) + 1) = (byte)uVar17;
                        uVar42 = recovered_10010920(uVar42,PF_PART4(local_f0, 0));
                        *(byte *)((int)pppppppppppuVar25 + iVar14 + 2) = (byte)uVar42;
                        if (PF_PART4(local_a0, 0) == 0) {
                          bVar30 = 0xff;
                        }
                        else {
                          uVar42 = recovered_10010920(PF_PART4(local_114, 0),PF_PART4(local_a0, 0));
                          bVar30 = (byte)uVar42;
                        }
                        *(byte *)((int)pppppppppppuVar25 + (int)PF_PART4(local_38, 0) + 3) = bVar30;
                        local_e0 = pf_double_bits(pf_bits_double((CONCAT44(PF_PART4(local_e0, 4),
                                                     CONCAT31((int3)((ulonglong)local_e0 >> 8),
                                                              SUB81(local_e0,0) | bVar30 != 0)) &
                                           0xffffffffffffff01)));
                        goto LAB_10008fc7;
                      case 0x3:
                        bVar30 = *(byte *)(PF_PART4(local_11c, 0) + ((uint)pppppppppppuVar38 >> 1));
                        if (((uint)pppppppppppuVar38 & 1) == 0) {
                          uVar42 = (uint)(bVar30 >> 4);
                        }
                        else {
                          uVar42 = bVar30 & 0xf;
                        }
                        break;
                      case 0x7:
                        uVar42 = (uint)*(byte *)(PF_PART4(local_11c, 0) + (int)pppppppppppuVar38);
                        break;
                      case 0x17:
                        *(byte *)((int)local_bb4 + (int)pbVar39) =
                             *(byte *)(PF_PART4(local_11c, 0) + PF_PART4(local_b0, 0));
                        ((byte *)((int)local_bb4 + 1))[(int)pbVar39] =
                             *(byte *)(PF_PART4(local_11c, 0) + -1 + PF_PART4(local_b0, 0));
                        *(byte *)((int)((int)local_bb4 + 2U) + (int)pbVar39) =
                             *(byte *)(PF_PART4(local_11c, 0) + -2 + PF_PART4(local_b0, 0));
                        ((byte *)((int)local_bb4 + 3))[(int)pbVar39] = 0xff;
                        goto LAB_10008fc7;
                      }
                      if (local_6e4 <= (uint ***********)(uVar42 * 4 + 3)) goto LAB_10009373;
                      local_88 = 3;
                      recovered_100019c0((byte *)((int)local_bb4 + (int)pbVar39),local_6e8 + uVar42,
                                         4);
LAB_10008fc7:
                      pppppppppppuVar38 = (uint ***********)((int)local_24 + 1);
                      local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),
                                                  (int)(uint ***********)local_40 + PF_PART4(local_d4, 0))));
                      local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),PF_PART4(local_b0, 0) + 3));
                      pbVar39 = (byte *)((int)PF_PART4(local_38, 0) + 4);
                    } while (local_28 != pppppppppppuVar38);
                    local_94 = local_94 + 1;
                    local_a8 = local_a8 + (int)local_180;
                    local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                                CONCAT31((int3)((uint)local_a8 >> 8),
                                                         PF_PART4(local_54, 0) <= local_94))));
                  } while ((uint ***********)local_94 != PF_PART4(local_54, 0));
                  if ((((uint ***********)local_30 == (uint ***********)0x20) &&
                      (PF_PART4(local_a0, 0) != 0)) &&
                     ((((ulonglong)local_e0 & 1) == 0 && ((uint ***********)0x3 < local_bb0)))) {
                    pppppppppppuVar25 = (uint ***********)0x3;
                    do {
                      *(byte *)((int)local_bb4 + (int)pppppppppppuVar25) = 0xff;
                      pppppppppppuVar25 = pppppppppppuVar25 + 1;
                    } while (pppppppppppuVar25 < local_bb0);
                  }
                  *param_3 = (int)local_28;
                  param_3[1] = (int)PF_PART4(local_54, 0);
                  if (local_4c == &local_bb4) {
                    local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                                CONCAT31((int3)((uint)&local_bb4 >> 8),1))));
                  }
                  else {
                    param_3[3] = 0;
                    recovered_100050a0((void *)param_3[2]);
                    pppppppppppuVar25 = local_bac;
                    param_3[2] = (int)local_bb4;
                    param_3[3] = (int)local_bb0;
                    param_3[4] = (int)local_bac;
                    local_bb4 = (uint ***********)0x0;
                    local_bac = (uint ***********)0x0;
                    local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                                CONCAT31((int3)((uint)pppppppppppuVar25 >> 8),1))));
                  }
LAB_10009373:
                  local_bb0 = (uint ***********)0x0;
                  recovered_100050a0(local_bb4);
                  pppppppppppuVar25 = (uint ***********)local_1c;
                  goto LAB_100089e1;
                }
              }
            }
          }
          pppppppppppuVar25 = (uint ***********)0x0;
        }
        else {
          local_e8 = pf_bits_double(CONCAT44(PF_PART4(local_e8, 4),iVar14));
          local_f0 = pf_bits_double(CONCAT44(PF_PART4(local_f0, 4),iVar28));
          if (PF_PART2(local_38, 0) < 9) {
            pppppppppppuVar38 = (uint ***********)(1 << (SUB81(local_38,0) & 0x1f));
            if (local_24 != (uint ***********)0x0) {
              pppppppppppuVar38 = local_24;
            }
            local_24 = (uint ***********)((uVar42 != 0xc) + 3);
            pppppppppppuVar25 = (uint ***********)0x0;
            if ((int)(ZEXT48(pppppppppppuVar38) * ZEXT48(local_24) >> 0x20) == 0) {
              if ((uint ***********)local_40 <= param_2) {
                if ((uint)((int)pppppppppppuVar38 * (int)local_24) <=
                    (uint)((int)param_2 - (int)(uint ***********)local_40)) {
                  local_bb4 = (uint ***********)CONCAT31(PF_PART3(local_bb4, 1),0xff);
                  local_88 = 1;
                  PF_PART4(local_38, 0) = pppppppppppuVar38;
                  recovered_10010800(&local_6e8,(int)pppppppppppuVar38 * 4,(undefined1 *)&local_bb4)
                  ;
                  pbVar20 = (byte *)((int)PF_PART4(local_38, 0) +
                                    (uint)(PF_PART4(local_38, 0) == (uint ***********)0x0));
                  local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),pbVar20));
                  pbVar39 = (byte *)((int)(uint ***********)local_40 + 2 + (int)param_1);
                  pbVar43 = (byte *)0x0;
                  do {
                    *(byte *)(local_6e8 + (int)pbVar43) = *pbVar39;
                    *(byte *)((int)local_6e8 + (int)pbVar43 * 4 + 1) = pbVar39[-1];
                    *(byte *)((int)local_6e8 + (int)pbVar43 * 4 + 2) = pbVar39[-2];
                    pbVar43 = pbVar43 + 1;
                    pbVar39 = pbVar39 + (int)local_24;
                    uVar17 = (uint)(uint ***********)local_30;
                  } while (pbVar20 != pbVar43);
                  goto LAB_10008970;
                }
                goto LAB_100089e1;
              }
            }
          }
          else {
LAB_10008970:
            pppppppppppuVar25 = (uint ***********)0x0;
            if (uVar17 - 1 < 0x20) {
              if ((0x80808089U >> (uVar17 - 1 & 0x1f) & 1) != 0) goto LAB_1000898e;
              goto LAB_100089e1;
            }
          }
          pppppppppppuVar25 = (uint ***********)0x0;
        }
LAB_100089e1:
        local_6e4 = (uint ***********)0x0;
        pppppppppppuVar38 = local_6e8;
        goto LAB_10007cb7;
      }
      if ((uint *******)(uVar42 + 0xe) <= param_2) {
        local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),(uint *******)(uVar42 + 0xe))));
        pppppppppppuVar25 = *(uint ************)((int)param_1 + 0x12);
        uVar17 = *(uint *)((int)param_1 + 0x16);
        if (uVar17 != 0 && 0 < (int)pppppppppppuVar25) {
          local_20 = (uint ***********)(uVar17 >> 0x1f);
          uVar17 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
          sVar37 = *(short *)((int)param_1 + 0x1a);
          local_38 = pf_bits_double(CONCAT62(PF_PART6(local_38, 2),*(undefined2 *)(param_1 + 7)));
          iVar14 = *(int *)((int)param_1 + 0x1e);
          local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14)));
          local_24 = *(uint ************)((int)param_1 + 0x2e);
          if (uVar42 == 0x28) {
            if ((iVar14 == 6) || (iVar14 == 3)) {
              local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),(uint)(iVar14 == 6)));
              local_28 = (uint ***********)CONCAT22(PF_PART2(local_28, 2),sVar37);
              local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),(uint)(iVar14 == 6) * 4 + 0x42)));
            }
            else {
              local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),0x36)));
            }
          }
          goto LAB_1000724b;
        }
      }
    }
LAB_10007a4e:
    pppppppppppuVar25 = (uint ***********)0x0;
    goto LAB_10006136;
  case 3:
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    local_4c = pppppppppppuVar25;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_100050a0((void *)0x0);
    local_88 = 0xffffffff;
    uVar21 = recovered_10005f20((byte *)param_1,(uint)param_2);
    uVar8 = (ulonglong)local_1c;
    if ((char)uVar21 == '\0') goto LAB_10007a4e;
    local_1c = pf_double_bits(pf_bits_double(CONCAT71(PF_PART7(local_1c, 1),*(char *)((int)param_1 + 1))));
    local_21c = (uint **********)(uint)*(byte *)((int)param_1 + 2);
    local_10c = (uint **********)(uint)*(ushort *)((int)param_1 + 3);
    local_100 = (void *)(uint)*(ushort *)((int)param_1 + 5);
    local_14 = (uint ***********)(uint)*(byte *)((int)param_1 + 7);
    local_cc = (uint ***********)(uint)*(ushort *)(param_1 + 3);
    local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),local_cc));
    local_184 = (uint)*(ushort *)((int)param_1 + 0xe);
    local_1a0 = (uint)*(byte *)(param_1 + 4);
    local_220 = (uint)*(byte *)((int)param_1 + 0x11);
    local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),local_21c)));
    if ((uint **********)0x7 < local_21c) {
      local_21c = local_21c + -2;
    }
    pppppppppppuVar25 = (uint ***********)(*(byte *)param_1 + 0x12);
    local_bb4 = (uint ***********)0x0;
    local_bb0 = (uint ***********)0x0;
    local_bac = (uint ***********)0x0;
    if (*(char *)((int)param_1 + 1) == '\x01') {
      uVar42 = (int)param_2 - (int)pppppppppppuVar25;
      if (param_2 < pppppppppppuVar25) {
LAB_1000793b:
        pppppppppppuVar25 = (uint ***********)0x0;
      }
      else {
        local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),pppppppppppuVar25)));
        uVar41 = (uint)((int)local_14 + 7U) >> 3;
        uVar17 = uVar41 * (int)local_100;
        local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),uVar17));
        pppppppppppuVar25 = (uint ***********)0x0;
        if (uVar17 <= uVar42) {
          local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),uVar41));
          if (local_100 == (void *)0x0) {
            pppppppppppuVar38 = (uint ***********)0x0;
          }
          else {
            local_88 = 4;
            PF_PART4(local_1c, 4) = SUB84(uVar8,4);
            local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),(int)local_100 * 4)));
            pppppppppppuVar26 = recovered_10005040((int)local_100 * 4);
            pppppppppppuVar38 = local_bb0;
            if (local_bb0 != (uint ***********)0x0) {
              pppppppppppuVar23 = (uint ***********)0x0;
              do {
                *(byte *)((int)pppppppppppuVar26 + (int)pppppppppppuVar23) =
                     *(byte *)((int)local_bb4 + (int)pppppppppppuVar23);
                pppppppppppuVar23 = (uint ***********)((int)pppppppppppuVar23 + 1);
              } while (local_bb0 != pppppppppppuVar23);
            }
            recovered_100050a0(local_bb4);
            local_bac = (uint ***********)local_1c;
            local_bb4 = pppppppppppuVar26;
          }
          while (pppppppppppuVar38 < local_bac) {
            *(byte *)((int)local_bb4 + (int)pppppppppppuVar38) = 0xff;
            pppppppppppuVar38 = (uint ***********)((int)local_bb0 + 1);
            local_bb0 = pppppppppppuVar38;
          }
          if (local_100 != (void *)0x0) {
            puVar24 = (ushort *)((int)(uint ***********)local_40 + (int)param_1);
            local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),(byte *)((int)local_14 - 0xfU))));
            pvVar16 = (void *)0x0;
            do {
              if ((char)local_14 == '\b') {
                uVar13 = *puVar24;
                *(byte *)(local_bb4 + (int)pvVar16) = (byte)uVar13;
                *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 1) = (byte)uVar13;
                pppppppppppuVar25 = (uint ***********)0x0;
                *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 2) = (byte)*puVar24;
LAB_100075f6:
                pppppppppppuVar25 =
                     (uint ***********)CONCAT31((int3)((uint)pppppppppppuVar25 >> 8),0xff);
              }
              else {
                if ((byte *)((int)local_14 - 0xfU) < (byte *)0x2) {
                  uVar13 = *puVar24;
                  *(byte *)(local_bb4 + (int)pvVar16) =
                       (byte)((uVar13 >> 10 & 0x1f) * 0x20e7f7 >> 0x12);
                  pppppppppppuVar25 = (uint ***********)((uVar13 >> 5 & 0x1f) * 0x20e7f7 >> 0x12);
                  *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 1) = (byte)pppppppppppuVar25;
                  *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 2) =
                       (byte)((uVar13 & 0x1f) * 0x20e7f7 >> 0x12);
                  goto LAB_100075f6;
                }
                if (local_14 != (uint ***********)0x20) {
                  if (local_14 == (uint ***********)0x18) {
                    *(byte *)(local_bb4 + (int)pvVar16) = (byte)puVar24[1];
                    *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 1) = *(byte *)((int)puVar24 + 1);
                    *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 2) = (byte)*puVar24;
                    goto LAB_100075f6;
                  }
                  goto LAB_1000793b;
                }
                *(byte *)(local_bb4 + (int)pvVar16) = (byte)puVar24[1];
                *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 1) = *(byte *)((int)puVar24 + 1);
                *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 2) = (byte)*puVar24;
                pppppppppppuVar25 = (uint ***********)(uint)*(byte *)((int)puVar24 + 3);
              }
              *(byte *)((int)local_bb4 + (int)pvVar16 * 4 + 3) = (byte)pppppppppppuVar25;
              pvVar16 = (void *)((int)pvVar16 + 1);
              puVar24 = (ushort *)((int)puVar24 + (int)PF_PART4(local_38, 0));
            } while (pvVar16 < local_100);
          }
          local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),
                                      (int)(uint ***********)local_40 + (int)PF_PART4(local_54, 0))));
          goto LAB_100076db;
        }
      }
    }
    else {
      local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),pppppppppppuVar25)));
LAB_100076db:
      bVar30 = SUB81(local_30,0);
      if (((local_cc == (uint ***********)0x0) ||
          ((int)(ZEXT48(local_cc) * (ulonglong)local_184 >> 0x20) == 0)) &&
         (local_f4 = (uint **********)((int)local_cc * local_184),
         local_f4 < (uint **********)0x40000000)) {
        local_164 = (uint **********)0x0;
        local_160 = 0;
        local_15c = 0;
        if (local_f4 != (uint **********)0x0) {
          local_88 = 5;
          local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),(int)local_f4 * 4));
          ppppppppppuVar19 = recovered_10005040((int)local_f4 * 4);
          uVar42 = local_160;
          if (local_160 != 0) {
            uVar17 = 0;
            do {
              *(undefined1 *)((int)ppppppppppuVar19 + uVar17) =
                   *(undefined1 *)((int)local_164 + uVar17);
              uVar17 = uVar17 + 1;
            } while (local_160 != uVar17);
          }
          recovered_100050a0(local_164);
          local_15c = (uint)PF_PART4(local_38, 0);
          bVar30 = SUB81(local_30,0);
          while (local_164 = ppppppppppuVar19, uVar42 < PF_PART4(local_38, 0)) {
            *(undefined1 *)((int)ppppppppppuVar19 + uVar42) = 0;
            uVar42 = local_160 + 1;
            local_160 = uVar42;
          }
        }
        uVar42 = local_1a0 + 7 >> 3;
        local_19c = (uint **********)0x0;
        local_6e8 = &local_19c;
        local_6e4 = &local_f4;
        local_6e0 = &local_21c;
        local_6dc = &local_1a0;
        local_6d8 = &local_10c;
        local_6d4 = &local_100;
        local_6d0 = (uint ***********)&local_bb4;
        local_6cc = &local_220;
        local_6c8 = &local_cc;
        local_6c4 = &local_184;
        local_6c0 = &local_164;
        local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),uVar42));
        if (bVar30 < 8) {
          if (local_f4 == (uint **********)0x0) {
            if (param_2 < (uint ***********)local_40) goto LAB_10007c23;
            goto LAB_10007c27;
          }
          if ((int)(ZEXT48(local_f4) * (ulonglong)uVar42 >> 0x20) == 0) {
            pppppppppppuVar25 = (uint ***********)0x0;
            if (((uint ***********)local_40 <= param_2) &&
               ((int)local_f4 * uVar42 <= (uint)((int)param_2 - (int)(uint ***********)local_40))) {
              pppppppppppuVar38 = (uint ***********)((int)param_1 + (int)(uint ***********)local_40)
              ;
              ppppppppppuVar19 = (uint **********)0x0;
              do {
                local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),ppppppppppuVar19)));
                local_88 = 6;
                local_14 = pppppppppppuVar38;
                uVar21 = recovered_100109b0(&local_6e8,(ushort *)pppppppppppuVar38);
                if ((char)uVar21 == '\0') goto LAB_10007c23;
                ppppppppppuVar19 = (uint **********)((int)(uint ***********)local_1c + 1);
                pppppppppppuVar38 = (uint ***********)((int)local_14 + (int)PF_PART4(local_38, 0));
              } while (ppppppppppuVar19 < local_f4);
              goto LAB_10007c27;
            }
          }
          else {
LAB_10007c23:
            pppppppppppuVar25 = (uint ***********)0x0;
          }
        }
        else {
          if (local_f4 != (uint **********)0x0) {
            local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),(int)param_2 + -1));
            pppppppppppuVar38 = (uint ***********)local_40;
            do {
              if (param_2 <= pppppppppppuVar38) goto LAB_10007c23;
              pppppppppppuVar26 = (uint ***********)((int)pppppppppppuVar38 + 1);
              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                          (*(byte *)((int)param_1 + (int)pppppppppppuVar38) & 0x7f)
                                          + 1)));
              local_14 = pppppppppppuVar26;
              if ((char)*(byte *)((int)param_1 + (int)pppppppppppuVar38) < '\0') {
                if ((uint)((int)param_2 - (int)pppppppppppuVar26) < uVar42) goto LAB_10007c23;
                local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),
                                            (byte *)((int)param_1 + (int)pppppppppppuVar26))));
                pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar26 + uVar42);
                local_14 = pppppppppppuVar25;
                do {
                  local_88 = 7;
                  uVar21 = recovered_100109b0(&local_6e8,(ushort *)(uint ***********)local_30);
                  if ((char)uVar21 == '\0') goto LAB_10007c23;
                  iVar14 = (int)(uint ***********)local_1c + -1;
                  local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),iVar14)));
                } while (iVar14 != 0);
                pppppppppppuVar26 = local_14;
              }
              else {
                uVar17 = (int)PF_PART4(local_54, 0) - (int)pppppppppppuVar38;
                do {
                  pppppppppppuVar25 = (uint ***********)0x0;
                  if ((param_2 < pppppppppppuVar26) || (uVar17 < uVar42)) goto LAB_10007c89;
                  local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar17 - uVar42)));
                  local_88 = 8;
                  local_14 = pppppppppppuVar26;
                  uVar21 = recovered_100109b0(&local_6e8,
                                              (ushort *)((int)param_1 + (int)pppppppppppuVar26));
                  if ((char)uVar21 == '\0') goto LAB_10007c23;
                  pppppppppppuVar26 = (uint ***********)((int)local_14 + (int)PF_PART4(local_38, 0));
                  iVar14 = (int)(uint ***********)local_1c + -1;
                  local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),iVar14)));
                  uVar17 = (uint)(uint ***********)local_30;
                  uVar42 = (uint)PF_PART4(local_38, 0);
                } while (iVar14 != 0);
              }
              pppppppppppuVar38 = pppppppppppuVar26;
              uVar42 = (uint)PF_PART4(local_38, 0);
            } while (local_19c < local_f4);
          }
LAB_10007c27:
          *param_3 = (int)local_cc;
          param_3[1] = local_184;
          pppppppppppuVar25 = (uint ***********)CONCAT31((int3)((uint)pppppppppppuVar25 >> 8),1);
          if (local_4c != &local_164) {
            param_3[3] = 0;
            recovered_100050a0((void *)param_3[2]);
            param_3[2] = (int)local_164;
            param_3[3] = local_160;
            param_3[4] = local_15c;
            local_164 = (uint **********)0x0;
            local_15c = 0;
          }
        }
LAB_10007c89:
        local_160 = 0;
        recovered_100050a0(local_164);
      }
      else {
        pppppppppppuVar25 = (uint ***********)0x0;
      }
    }
    local_bb0 = (uint ***********)0x0;
    pppppppppppuVar38 = local_bb4;
LAB_10007cb7:
    recovered_100050a0(pppppppppppuVar38);
    goto LAB_10006136;
  case 4:
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    local_4c = pppppppppppuVar25;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_100050a0((void *)0x0);
    local_72c = 0;
    local_730 = 0;
    local_734 = 0;
    local_738 = (void *)0x0;
    local_728 = (void *)0x0;
    local_724 = 0;
    local_720 = 0;
    local_71c = 0;
    local_718 = (void *)0x0;
    local_714 = 0;
    local_710 = 0;
    local_70c = (uint ***********)0x0;
    local_708 = (uint ***********)0x0;
    local_704 = 0;
    local_700 = (undefined4 *)0x0;
    local_6fc = 0;
    local_6f8 = 0;
    local_6f4 = (uint ***********)0x0;
    local_6f0 = (uint ***********)0x0;
    local_6e8 = (uint ***********)0x0;
    local_6e4 = (uint ***********)0x0;
    local_6e0 = (uint ***********)0x1;
    local_6dc = (uint *)0x1;
    local_6d8 = (uint ***********)0x0;
    local_6d4 = (void **)0x0;
    recovered_10001aa0((undefined1 *)&local_6d0,0x4b0);
    recovered_100019c0(&local_bb4,&local_6e8,0x428);
    local_78c[0] = '\0';
    recovered_100050a0((void *)0x0);
    local_788[0] = 0;
    local_788[1] = 0;
    local_788[2] = 0;
    local_2bc = 0;
    local_2b8 = 0;
    local_2b4 = 0;
    local_77c = 0;
    recovered_100050a0((void *)0x0);
    local_778 = 0;
    local_774 = 0;
    local_770 = 0;
    local_2ac = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_76c = 0;
    recovered_100050a0((void *)0x0);
    local_768 = 0;
    local_764 = 0;
    local_760 = 0;
    local_29c = 0;
    local_298 = 0;
    local_294 = 0;
    local_75c = 0;
    recovered_100050a0((void *)0x0);
    local_758 = 0;
    local_754 = 0;
    local_750 = 0;
    local_28c = 0;
    local_288 = 0;
    local_284 = 0;
    local_74c[0] = '\0';
    recovered_100050a0((void *)0x0);
    local_748[0] = 0;
    local_748[1] = 0;
    local_748[2] = 0;
    local_27c = 0;
    local_278 = 0;
    local_274 = 0;
    local_73c = 0;
    recovered_100050a0(local_738);
    local_738 = (void *)0x0;
    local_734 = 0;
    local_730 = 0;
    local_26c = 0;
    local_268 = 0;
    local_264 = 0;
    local_72c = 0;
    recovered_100050a0(local_728);
    local_728 = (void *)0x0;
    local_724 = 0;
    local_720 = 0;
    local_25c = 0;
    local_258 = 0;
    local_254 = 0;
    local_71c = local_250;
    recovered_100050a0(local_718);
    pppppppppppuVar25 = local_70c;
    local_718 = (void *)local_24c;
    local_714 = local_248;
    local_710 = local_244;
    local_24c = 0;
    local_248 = 0;
    local_244 = 0;
    if (local_708 != (uint ***********)0x0) {
      pppppppppppuVar38 = local_70c + (int)local_708 * 0xc + -2;
      pppppppppppuVar26 = local_708;
      do {
        *pppppppppppuVar38 = (uint **********)0x0;
        recovered_100050a0(pppppppppppuVar38[-1]);
        pppppppppppuVar38 = pppppppppppuVar38 + -0xc;
        pppppppppppuVar26 = (uint ***********)((int)pppppppppppuVar26 + -1);
      } while (pppppppppppuVar26 != (uint ***********)0x0);
    }
    recovered_100050a0(pppppppppppuVar25);
    local_70c = local_240;
    local_708 = local_23c;
    local_704 = local_238;
    local_240 = (uint ***********)0x0;
    local_23c = (uint ***********)0x0;
    local_238 = 0;
    recovered_100050a0(local_700);
    local_700 = local_234;
    local_6fc = local_230;
    local_6f8 = local_22c;
    local_234 = (undefined4 *)0x0;
    local_230 = 0;
    local_22c = 0;
    local_6f0 = local_224;
    local_6f4 = local_228;
    recovered_10010bc0((int)&local_6e8);
    if ((((uint *******)0x3 < param_2) && (*(char *)param_1 == -1)) &&
       (*(char *)((int)param_1 + 1) == -0x28)) {
      pppppppuVar32 = (uint *******)0x2;
      iVar14 = (int)param_1 + 0xb;
      do {
        if (param_2 <= pppppppuVar32) goto LAB_10008e2d;
        pppppppppppuVar25 = (uint ***********)(iVar14 + (int)pppppppuVar32);
        while (*(byte *)((int)param_1 + (int)pppppppuVar32) != 0xff) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar32 + 1);
          pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar25 + 1);
          if (param_2 == pppppppuVar32) goto LAB_10008e2d;
        }
        pppppppuVar15 = pppppppuVar32;
        if (param_2 <= pppppppuVar32) goto LAB_10008e2d;
        while( true ) {
          bVar30 = *(byte *)((int)param_1 + (int)pppppppuVar15);
          uVar42 = (uint)bVar30;
          pppppppuVar32 = (uint *******)((int)pppppppuVar15 + 1);
          if (uVar42 != 0xff) break;
          pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar25 + 1);
          local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
          pppppppuVar15 = pppppppuVar32;
          if (param_2 <= pppppppuVar32) goto LAB_10008e34;
        }
        if (uVar42 == 0xd9) goto LAB_10008e2d;
        local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14)));
        if (((bVar30 & 0xf8) != 0xd0) && (9 < (byte)(bVar30 + 0x30) && uVar42 != 1)) {
          pppppppppppuVar38 = (uint ***********)((int)pppppppuVar15 + 3);
          if (param_2 < pppppppppppuVar38) goto LAB_10008e2d;
          uVar13 = *(ushort *)((int)param_1 + 1 + (int)pppppppuVar15);
          uVar13 = uVar13 << 8 | uVar13 >> 8;
          if (uVar13 < 2) goto LAB_10008e2d;
          uVar17 = uVar13 - 2;
          if ((uint)((int)param_2 - (int)pppppppppppuVar38) < uVar17) goto LAB_10008e2d;
          local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),uVar17));
          local_24 = pppppppppppuVar38;
          if (uVar42 - 0xc0 < 0x2f) {
            local_14 = (uint ***********)((int)param_1 + (int)pppppppppppuVar38);
            switch((uintptr_t)(uVar42)) {
            case 0xc0:
              if ((uVar17 < 6) || (*(byte *)local_14 != 8)) goto LAB_10008e2d;
              local_bb0 = (uint ***********)
                          (uint)(ushort)(*(ushort *)((int)local_14 + 1) << 8 |
                                        *(ushort *)((int)local_14 + 1) >> 8);
              uVar13 = *(ushort *)((int)local_14 + 3) << 8 | *(ushort *)((int)local_14 + 3) >> 8;
              local_bb4 = (uint ***********)(uint)uVar13;
              uVar8 = (ulonglong)PF_PART4(local_1c, 4);
              local_1c = pf_double_bits((double)(uVar8 << 0x20));
              if ((uVar13 == 0) || (local_bb0 == (uint ***********)0x0)) goto LAB_10008e34;
              uVar42 = (uint)*(byte *)((int)local_14 + 5);
              local_1c = pf_double_bits((double)(uVar8 << 0x20));
              local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),uVar42)));
              if ((4 < uVar42) || ((0x1aU >> (uVar42 & 0x1f) & 1) == 0)) goto LAB_10008e34;
              if (uVar17 < uVar42 * 3 + 6) goto LAB_10008e2d;
              if (local_708 != (uint ***********)0x0) {
                pppppppppppuVar38 = local_70c + (int)local_708 * 0xc + -2;
                pppppppppppuVar26 = local_708;
                do {
                  *pppppppppppuVar38 = (uint **********)0x0;
                  recovered_100050a0(pppppppppppuVar38[-1]);
                  pppppppppppuVar38 = pppppppppppuVar38 + -0xc;
                  pppppppppppuVar26 = (uint ***********)((int)pppppppppppuVar26 - 1);
                } while (pppppppppppuVar26 != (uint ***********)0x0);
              }
              local_708 = (uint ***********)0x0;
              local_bac = (uint ***********)0x1;
              local_ba8 = (uint ***********)0x1;
              do {
                local_6d8 = (uint ***********)0x0;
                local_6d4 = (void **)0x0;
                local_6d0 = (uint ***********)0x0;
                local_6cc = (uint *)0x0;
                local_6c8 = (uint ************)0x0;
                local_6c4 = (uint *)0x0;
                local_6c0 = (uint ***********)0x0;
                local_6bc = (uint **********)0x0;
                local_6e8 = (uint ***********)(uint)(byte)*(ushort *)((int)pppppppppppuVar25 - 2);
                local_6e4 = (uint ***********)(uint)(*(byte *)((int)pppppppppppuVar25 - 1) >> 4);
                local_6e0 = (uint ***********)(*(byte *)((int)pppppppppppuVar25 - 1) & 0xf);
                local_6dc = (uint *)(uint)*(byte *)pppppppppppuVar25;
                local_14 = pppppppppppuVar25;
                if ((((byte *)0x3 < (byte *)((int)local_6e4 - 1U)) ||
                    ((byte *)0x3 < (byte *)((int)local_6e0 - 1U))) ||
                   (3 < *(byte *)pppppppppppuVar25)) {
                  recovered_100050a0((void *)0x0);
                  goto LAB_10008e2d;
                }
                if (local_bac <= local_6e4) {
                  local_bac = local_6e4;
                }
                if (local_ba8 <= local_6e0) {
                  local_ba8 = local_6e0;
                }
                local_88 = 10;
                recovered_10010ea0((int *)&local_70c,&local_6e8);
                recovered_100050a0((void *)0x0);
                pppppppppppuVar25 = (uint ***********)((int)local_14 + 3);
                iVar14 = (int)(uint ***********)local_40 + -1;
                local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),iVar14)));
              } while (iVar14 != 0);
              break;
            default:
              goto switchD_10006d14_caseD_c1;
            case 0xc4:
              local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),(byte *)((int)local_14 + 1))));
              uVar42 = 0;
              while( true ) {
                dVar47 = local_54;
                if (PF_PART4(local_38, 0) <= uVar42) break;
                if ((int)PF_PART4(local_38, 0) - uVar42 < 0x11) goto LAB_10008e2d;
                bVar30 = *(byte *)((int)local_14 + uVar42);
                uVar8 = (ulonglong)local_1c >> 0x20;
                local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
                if (0x1f < bVar30) goto LAB_10008e34;
                local_54 = pf_bits_double(CONCAT71(PF_PART7(local_54, 1),bVar30));
                if (3 < (byte)(bVar30 & 0xf)) goto LAB_10008e34;
                uVar17 = (uint)*(byte *)((int)(uint ***********)local_40 + 0xf + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 0xe + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 0xd + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 0xc + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 0xb + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 10 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 9 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 8 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 7 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 6 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 5 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 4 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 3 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 2 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + 1 + uVar42) +
                         (uint)*(byte *)((int)(uint ***********)local_40 + uVar42);
                iVar14 = uVar42 + 0x11;
                if ((uint)((int)PF_PART4(local_38, 0) - iVar14) < uVar17) goto LAB_10008e2d;
                pcVar31 = local_78c;
                if (0xf < bVar30) {
                  pcVar31 = local_74c;
                }
                PF_PART4(local_54, 4) = SUB84(dVar47,4);
                local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),iVar14));
                local_88 = 9;
                PF_PART4(local_1c, 0) = (uint ***********)uVar17;
                PF_PART4(local_1c, 4) = (uint)uVar8;
                uVar21 = recovered_10010d00(uVar42 + (int)(uint ***********)local_40,
                                            (int)((int)local_14 + iVar14),uVar17,
                                            pcVar31 + (bVar30 & 0xf) * 0x10);
                uVar42 = (int)(uint ***********)local_1c + (int)PF_PART4(local_54, 0);
                local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
                if ((char)uVar21 == '\0') goto LAB_10008e34;
              }
              break;
            case 0xda:
              uVar8 = (ulonglong)PF_PART4(local_1c, 4);
              local_1c = pf_double_bits((double)(uVar8 << 0x20));
              if ((5 < uVar17) && (local_708 != (uint ***********)0x0)) {
                uVar42 = (uint)*(byte *)local_14;
                local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar42)));
                if (uVar42 == 0) goto LAB_10008e2d;
                local_40 = pf_double_bits((double)((ulonglong)PF_PART4(local_40, 4) << 0x20));
                local_1c = pf_double_bits((double)(uVar8 << 0x20));
                if (uVar42 * 2 + 4 <= uVar17) {
                  local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),uVar42 * 2));
                  local_6fc = 0;
                  goto LAB_100091c2;
                }
              }
              goto LAB_10008e34;
            case 0xdb:
              if (uVar17 != 0) {
                uVar42 = 0;
                do {
                  bVar30 = *(byte *)((int)local_14 + uVar42);
                  uVar8 = (ulonglong)local_1c >> 0x20;
                  local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
                  if (0x1f < bVar30) goto LAB_10008e34;
                  uVar17 = bVar30 & 0xf;
                  if (3 < (byte)uVar17) goto LAB_10008e34;
                  uVar42 = uVar42 + 1;
                  if ((int)PF_PART4(local_38, 0) - uVar42 < (uint)(0xf < bVar30) * 0x40 + 0x40)
                  goto LAB_10008e2d;
                  local_1c = pf_double_bits(pf_bits_double(CONCAT44((int)uVar8,uVar17 * 0x104)));
                  iVar14 = -0x100;
                  do {
                    if (bVar30 < 0x10) {
                      uVar41 = (uint)*(byte *)((int)local_14 + uVar42);
                      uVar42 = uVar42 + 1;
                    }
                    else {
                      uVar41 = (uint)(ushort)(*(ushort *)((int)local_14 + uVar42) << 8 |
                                             *(ushort *)((int)local_14 + uVar42) >> 8);
                      uVar42 = uVar42 + 2;
                    }
                    (&local_b98)[uVar17 * 0x41 + *(int *)(iVar14 + ((uintptr_t)pf_module_state+0x8c0U))] = uVar41;
                    iVar14 = iVar14 + 4;
                  } while (iVar14 != 0);
                  *(undefined1 *)((int)&local_b9c + (int)(uint ***********)local_1c) = 1;
                } while (uVar42 < PF_PART4(local_38, 0));
              }
              break;
            case 0xdd:
              if (uVar17 != 4) goto LAB_10008e2d;
              local_ba4 = (uint)(ushort)(*(ushort *)local_14 << 8 | *(ushort *)local_14 >> 8);
              break;
            case 0xee:
              if (0xb < uVar17) {
                local_88 = 0xb;
                iVar14 = recovered_10001ac0((int)local_14,((uintptr_t)pf_module_state+0xe25U),5);
                if (iVar14 == 0) {
                  local_ba0 = (uint ***********)(uint)*(byte *)((int)local_14 + 0xb);
                }
              }
            }
          }
          else {
switchD_10006d14_caseD_c1:
            if (uVar42 != 200 && (byte)(bVar30 + 0x3f) < 0xf) goto LAB_10008e2d;
          }
          pppppppuVar32 = (uint *******)((int)PF_PART4(local_38, 0) + (int)local_24);
        }
        local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
        iVar14 = (int)(uint ***********)local_30;
      } while ((uint *******)((int)pppppppuVar32 + 1U) < param_2);
      goto LAB_10008e34;
    }
    goto LAB_10008e2d;
  case 5:
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    local_4c = pppppppppppuVar25;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_100050a0((void *)0x0);
    if ((uint *******)0x1d < param_2) {
      local_88 = 0xffffffff;
      iVar14 = recovered_10001ac0((int)param_1,((uintptr_t)pf_module_state+0xdfcU),9);
      if ((iVar14 == 0) && (*(char *)((int)param_1 + 0xd) == '\0')) {
        local_6d4 = (void **)0x0;
        local_6d0 = (uint ***********)0x0;
        local_6cc = (uint *)0x0;
        local_6c8 = (uint ************)0x0;
        local_14 = (uint ***********)((int)param_1 + 9);
        local_88 = 0x1f;
        iVar14 = recovered_10001ac0((int)local_14,((uintptr_t)pf_module_state+0xe2bU),4);
        if (iVar14 == 0) {
          local_6dc = (uint *)0x0;
          local_6d8 = (uint ***********)0x4;
          bVar45 = false;
LAB_10007a69:
          uVar42 = *(uint *)((int)param_1 + 0xe);
          local_6e8 = (uint ***********)
                      (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                      uVar42 << 0x18);
          uVar42 = *(uint *)((int)param_1 + 0x12);
          local_6e4 = (uint ***********)
                      (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                      uVar42 << 0x18);
          uVar42 = *(uint *)((int)param_1 + 0x16);
          local_6e0 = (uint ***********)
                      (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                      uVar42 << 0x18);
          local_c8 = 0;
          local_cc = (uint ***********)0x1a;
          pppppppppppuVar25 = (uint ***********)0x0;
          if (((local_6e8 != (uint ***********)0x0) && (local_6e4 != (uint ***********)0x0)) &&
             (local_6e0 < (uint ***********)0x3)) {
            if (bVar45) {
              uVar42 = *(uint *)((int)param_1 + 0x1a);
              uVar42 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                       uVar42 << 0x18;
              local_c8 = 0;
              local_cc = (uint ***********)0x1e;
              if (((uVar42 != 0) && (uVar42 != 0x96)) && (uVar42 != 100)) {
                pppppppppppuVar25 = (uint ***********)0x0;
                goto LAB_100088b4;
              }
            }
            local_c8 = 0;
            local_88 = 0x20;
            uVar46 = recovered_100110c0((int)param_1,(uint)param_2,(uint *)&local_cc,(int)&local_6e8
                                       );
            pppppppppppuVar25 = (uint ***********)0x0;
            if ((char)uVar46 != '\0') {
              local_164 = (uint **********)0x0;
              local_160 = 0;
              local_15c = 0;
              local_14 = local_cc;
              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),local_c8)));
              local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),local_6d8)));
              pppppppppppuVar25 = local_6d8;
              while( true ) {
                if (pppppppppppuVar25 == (uint ***********)0x4) {
                  if (((uint ***********)local_1c != (uint ***********)0x0 ||
                       (uint)-(int)(uint ***********)local_1c < (uint)(param_2 < local_14)) ||
                     ((uint)((int)param_2 - (int)local_14) < 4)) goto LAB_10008894;
                  uVar42 = *(uint *)((int)param_1 + (int)local_14);
                  local_bb4 = (uint ***********)
                              (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                              uVar42 << 0x18);
                  local_bb0 = (uint ***********)0x0;
                }
                else {
                  if (((uint ***********)local_1c != (uint ***********)0x0 ||
                       (uint)-(int)(uint ***********)local_1c < (uint)(param_2 < local_14)) ||
                     ((uint)((int)param_2 - (int)local_14) < 8)) goto LAB_10008894;
                  uVar42 = *(uint *)((int)param_1 + (int)local_14);
                  uVar17 = *(uint *)((int)(param_1 + 1) + (int)local_14);
                  local_bb0 = (uint ***********)
                              (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                              uVar42 << 0x18);
                  local_bb4 = (uint ***********)
                              (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                              uVar17 << 0x18);
                }
                bVar45 = CARRY4((uint)local_14,(uint)pppppppppppuVar25);
                local_14 = (uint ***********)((int)local_14 + (int)pppppppppppuVar25);
                local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                            (int)(uint ***********)local_1c + (uint)bVar45)));
                if (local_bb4 == (uint ***********)0x0 && local_bb0 == (uint ***********)0x0) break;
                if ((uint ***********)(uint)(local_bb4 < param_2) <= local_bb0) goto LAB_10008894;
                local_88 = 0x21;
                recovered_10011330((int *)&local_164,&local_bb4);
                pppppppppppuVar25 = (uint ***********)local_30;
              }
              if ((local_160 != 0) &&
                 ((local_6e8 == (uint ***********)0x0 ||
                  ((int)(ZEXT48(local_6e8) * ZEXT48(local_6e4) >> 0x20) == 0)))) {
                local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),local_6e4));
                local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),local_6e8)));
                if ((uint)((int)local_6e4 * (int)local_6e8) < 0x40000000) {
                  local_bb4 = (uint ***********)((uint)local_bb4 & 0xffffff00);
                  local_88 = 0x22;
                  recovered_100113d0((int *)&local_10c,(int)local_6e4 * (int)local_6e8 * 4,
                                     (undefined1 *)&local_bb4);
                  if (local_160 == 0) goto LAB_10008e4d;
                  local_e8 = pf_bits_double(CONCAT44(PF_PART4(local_e8, 4),(int)(uint ***********)local_40 * 4));
                  uVar42 = local_160;
                  goto LAB_10008c02;
                }
              }
LAB_10008894:
              pppppppppppuVar25 = (uint ***********)0x0;
              goto LAB_10008896;
            }
          }
          goto LAB_100088b4;
        }
        pppppppppppuVar25 = (uint ***********)0x0;
        pointer = (uint ************)0x0;
        if (*(byte *)local_14 == 0x76) {
          pointer = (uint ************)0x0;
          if ((byte)(*(byte *)((int)param_1 + 10) - 0x30U) < 10) {
            pppppppppppuVar25 = (uint ***********)0x0;
            pointer = (uint ************)0x0;
            if ((byte)(*(byte *)((int)param_1 + 0xb) - 0x30U) < 10) {
              local_14 = (uint ***********)(uint)*(byte *)(param_1 + 3);
              pppppppppppuVar25 = (uint ***********)0x0;
              pointer = (uint ************)0x0;
              if ((byte)(*(byte *)(param_1 + 3) - 0x30U) < 10) {
                local_6dc = (uint *)((int)local_14 +
                                    (uint)*(byte *)((int)param_1 + 10) * 100 +
                                    (uint)*(byte *)((int)param_1 + 0xb) * 10 + -0x14d0);
                local_6d8 = (uint ***********)((uint)((uint *)0xa < local_6dc) * 4 + 4);
                bVar45 = (uint *)0x3 < local_6dc;
                goto LAB_10007a69;
              }
            }
          }
        }
        goto LAB_100088ba;
      }
    }
    goto LAB_1000612e;
  case 6:
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    recovered_100050a0((void *)0x0);
    if (param_2 < (uint *******)0x14) goto LAB_1000612e;
    local_88 = 0xffffffff;
    iVar14 = recovered_10001ac0((int)param_1,((uintptr_t)pf_module_state+0x7b8U),8);
    if (iVar14 != 0) goto LAB_1000612e;
    ppppppuVar2 = param_1[2];
    ppppppuVar3 = param_1[3];
    local_11c = pf_bits_double(CONCAT44(PF_PART4(local_11c, 4),param_1[4]));
    if (param_1[4] == (uint ******)0x0 ||
        (ppppppuVar3 == (uint ******)0x0 || ppppppuVar2 == (uint ******)0x0)) goto LAB_1000612e;
    if ((int)(ZEXT48(ppppppuVar2) * ZEXT48(ppppppuVar3) >> 0x20) != 0) goto LAB_10007a4e;
    local_e8 = pf_bits_double(CONCAT44(PF_PART4(local_e8, 4),ppppppuVar3));
    local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),ppppppuVar2));
    uVar42 = (int)ppppppuVar3 * (int)ppppppuVar2;
    pppppppppppuVar25 = (uint ***********)0x0;
    if (0x3fffffff < uVar42) goto LAB_10006136;
    if (uVar42 == 0) {
      local_98 = 0;
      pvVar16 = (void *)0x0;
    }
    else {
      uVar42 = uVar42 * 4;
      local_88 = 0xffffffff;
      pvVar16 = recovered_10005040(uVar42);
      recovered_100050a0((void *)0x0);
      uVar17 = 0;
      do {
        *(undefined1 *)((int)pvVar16 + uVar17) = 0;
        uVar17 = uVar17 + 1;
      } while (uVar42 != uVar17);
      local_98 = uVar42;
    }
    local_e0 = ((uint64_t)local_e0 & 0xffffffff00000000ULL);
    uVar8 = (ulonglong)local_1c >> 0x20;
    local_1c = pf_double_bits((double)(uVar8 << 0x20));
    local_90 = pvVar16;
    if ((uint *******)0x1b < param_2 + -5) {
      local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),(int)PF_PART4(local_38, 0) * 4));
      pppppppuVar32 = (uint *******)0x14;
      local_1c = pf_double_bits((double)(uVar8 << 0x20));
      while( true ) {
        local_14 = *(uint ************)((int)param_1 + (int)pppppppuVar32);
        local_124 = pf_bits_double(CONCAT44(PF_PART4(local_124, 4),
                                     *(int *)((int)(param_1 + 1) + (int)pppppppuVar32)));
        local_f0 = pf_bits_double(CONCAT44(PF_PART4(local_f0, 4),*(int *)((int)(param_1 + 2) + (int)pppppppuVar32)
                                   ));
        pppppppppppuVar25 = *(uint ************)((int)(param_1 + 3) + (int)pppppppuVar32);
        pppppppppppuVar38 = *(uint ************)((int)(param_1 + 4) + (int)pppppppuVar32);
        local_d4 = pf_bits_double(CONCAT44(PF_PART4(local_d4, 4),pppppppuVar32));
        local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),
                                    (uint)*(byte *)((int)(param_1 + 5) + (int)pppppppuVar32))));
        pvVar16 = local_90;
        if (pppppppppppuVar25 != (uint ***********)0x0) {
          if ((int)(ZEXT48(pppppppppppuVar25) * ZEXT48(pppppppppppuVar38) >> 0x20) != 0)
          goto LAB_1000877c;
        }
        local_44 = pppppppppppuVar38;
        local_20 = pppppppppppuVar25;
        if (0x3fffffff < (uint)((int)pppppppppppuVar38 * (int)pppppppppppuVar25)) goto LAB_1000877c;
        pppppppuVar15 = pppppppuVar32 + 7;
        local_114 = pf_bits_double(CONCAT44(PF_PART4(local_114, 4),pppppppuVar15));
        if (param_2 < pppppppuVar15) break;
        uVar42 = (int)pppppppppppuVar38 * (int)pppppppppppuVar25 * 4;
        if ((uint)((int)param_2 - (int)pppppppuVar15) < uVar42) goto LAB_1000877c;
        local_d4 = pf_bits_double(CONCAT44(PF_PART4(local_d4, 4),uVar42));
        iVar14 = (int)PF_PART4(local_38, 0);
        if ((pppppppppppuVar38 != (uint ***********)0x0 & (byte)local_14) == 1) {
          local_28 = (uint ***********)((int)param_1 + (int)pppppppuVar15);
          local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),(int)pppppppppppuVar25 * 4));
          local_24 = (uint ***********)
                     (((int)PF_PART4(local_38, 0) * *(int *)((int)(param_1 + 2) + (int)pppppppuVar32) +
                      *(int *)((int)(param_1 + 1) + (int)pppppppuVar32)) * 4 + (int)local_90);
          local_54 = pf_bits_double((pf_double_bits(local_54) & 0xffffffff00000000));
          do {
            if (local_20 != (uint ***********)0x0) {
              if ((-1 < (int)((int)PF_PART4(local_54, 0) + PF_PART4(local_f0, 0))) &&
                 ((int)((int)PF_PART4(local_54, 0) + PF_PART4(local_f0, 0)) < (int)PF_PART4(local_e8, 0))) {
                local_4c = local_24;
                local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),local_28)));
                pppppppppppuVar25 = PF_PART4(local_124, 0);
                pppppppppppuVar38 = local_20;
                do {
                  local_14 = pppppppppppuVar25;
                  if ((int)pppppppppppuVar25 < iVar14 && -1 < (int)pppppppppppuVar25) {
                    local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),pppppppppppuVar38)));
                    local_88 = 0x26;
                    recovered_100019c0(&local_6e8,SUB84(local_1c,0),4);
                    local_6e8 = (uint ***********)
                                CONCAT13((char)((ulonglong)
                                                (((uint)local_6e8 >> 0x18) *
                                                 (int)(uint ***********)local_40 + 0x7f) * 0x1010102
                                               >> 0x20),(undefined3)local_6e8);
                    local_88 = 0x27;
                    recovered_10012080((byte *)local_4c,(byte *)&local_6e8);
                    iVar14 = (int)PF_PART4(local_38, 0);
                    pppppppppppuVar38 = (uint ***********)local_30;
                  }
                  local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),(int)(uint ***********)local_1c + 4)));
                  local_4c = local_4c + 1;
                  pppppppppppuVar25 = (uint ***********)((int)local_14 + 1);
                  pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 - 1);
                } while (pppppppppppuVar38 != (uint ***********)0x0);
              }
            }
            pppppppppppuVar25 = (uint ***********)((int)PF_PART4(local_54, 0) + 1);
            local_28 = (uint ***********)((int)local_28 + PF_PART4(local_a0, 0));
            local_24 = (uint ***********)((int)local_24 + PF_PART4(local_b0, 0));
            local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),pppppppppppuVar25));
          } while (pppppppppppuVar25 != local_44);
        }
        uVar42 = (int)local_e0 + 1;
        if (uVar42 == PF_PART4(local_11c, 0)) {
          *param_3 = iVar14;
          param_3[1] = PF_PART4(local_e8, 0);
          param_3[3] = 0;
          recovered_100050a0((void *)param_3[2]);
          param_3[2] = (int)local_90;
          param_3[3] = local_98;
          param_3[4] = local_98;
          local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),CONCAT31((int3)(local_98 >> 8),1))));
          pvVar16 = (void *)0x0;
          break;
        }
        pppppppuVar32 = (uint *******)(PF_PART4(local_d4, 0) + PF_PART4(local_114, 0));
        local_e0 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_e0, 4),uVar42)));
        local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),
                                    CONCAT31((int3)(pf_double_bits(local_11c) >> 8),
                                             PF_PART4(local_11c, 0) <= uVar42))));
        pvVar16 = local_90;
        if ((param_2 < pppppppuVar32) || ((uint)((int)param_2 - (int)pppppppuVar32) < 0x1c))
        goto LAB_1000877c;
      }
    }
LAB_1000877c:
    recovered_100050a0(pvVar16);
  }
LAB_10008e45:
  pppppppppppuVar25 = (uint ***********)local_1c;
LAB_10006136:
  recovered_100054c0(&local_8c);
  return (uint)pppppppppppuVar25 & 0xffffff01;
  while( true ) {
    if (((char)local_ba8 == '\x01') && (local_ba4 != 0)) {
      local_100 = (void *)0x0;
      local_fc = 0;
      local_f8 = 0;
      local_88 = 0x24;
      uVar21 = recovered_10011810((int)param_1,(uint)param_2,(int)&local_6e8,(uint *)&local_bb4,
                                  (int *)&local_100);
      if ((char)uVar21 == '\0') {
        local_fc = 0;
        recovered_100050a0(local_100);
        goto LAB_10009145;
      }
      local_44 = local_bb0;
      if (local_bb0 != (uint ***********)0x0) {
        local_28 = local_bb4;
        local_f0 = pf_bits_double(CONCAT44(PF_PART4(local_f0, 4),(int)local_bb4 * 4));
        local_b0 = pf_bits_double(CONCAT44(PF_PART4(local_b0, 4),local_b9c));
        local_124 = pf_bits_double(CONCAT44(PF_PART4(local_124, 4),local_ba0));
        local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),
                                    (int)((int)(uint ***********)local_40 * local_b9c +
                                         (int)local_ba0) * 4));
        local_24 = (uint ***********)0x0;
        pppppppppppuVar38 = (uint ***********)0x0;
        do {
          local_20 = pppppppppppuVar38;
          if ((-1 < (int)((int)pppppppppppuVar38 + PF_PART4(local_b0, 0)) &&
              local_28 != (uint ***********)0x0) &&
              (int)((int)pppppppppppuVar38 + PF_PART4(local_b0, 0)) < (int)PF_PART4(local_a0, 0)) {
            local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),PF_PART4(local_54, 0))));
            local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),local_24));
            pppppppppppuVar38 = local_28;
            pppppppppppuVar26 = PF_PART4(local_124, 0);
            do {
              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),pppppppppppuVar38)));
              local_14 = pppppppppppuVar26;
              if ((int)pppppppppppuVar26 < (int)(uint ***********)local_40 &&
                  -1 < (int)pppppppppppuVar26) {
                local_88 = 0x25;
                recovered_10012080((byte *)((int)local_10c + (int)(uint ***********)local_30),
                                   (byte *)((int)local_100 + (int)PF_PART4(local_38, 0)));
              }
              local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),(int)PF_PART4(local_38, 0) + 4));
              local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),(int)(uint ***********)local_30 + 4)));
              pppppppppppuVar26 = (uint ***********)((int)local_14 + 1);
              pppppppppppuVar38 = (uint ***********)((int)(uint ***********)local_1c - 1);
            } while (pppppppppppuVar38 != (uint ***********)0x0);
          }
          pppppppppppuVar38 = (uint ***********)((int)local_20 + 1);
          local_24 = (uint ***********)((int)local_24 + PF_PART4(local_f0, 0));
          local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),(int)PF_PART4(local_54, 0) + PF_PART4(local_e8, 0)));
        } while (pppppppppppuVar38 != local_44);
      }
      local_fc = 0;
      recovered_100050a0(local_100);
    }
    uVar42 = PF_PART4(local_d4, 0) + -1;
    if (uVar42 == 0) break;
LAB_10008c02:
    local_bb4 = (uint ***********)0x0;
    local_bb0 = (uint ***********)0x0;
    local_bac = (uint ***********)0x0;
    local_ba8 = (uint ***********)CONCAT31(PF_PART3(local_ba8, 1),1);
    local_ba4 = 0xff;
    local_ba0 = (uint ***********)0x0;
    local_b9c = 0;
    local_b94 = 0;
    local_b98 = 0;
    local_d4 = pf_bits_double(CONCAT44(PF_PART4(local_d4, 4),uVar42));
    local_88 = 0x23;
    bVar45 = recovered_10011460((int)param_1,(uint)param_2,(int)&local_6e8,
                                (uint)local_164[uVar42 * 2 + -2],(int)local_164[uVar42 * 2 + -1],
                                (uint *)&local_bb4);
    if (!bVar45) {
LAB_10009145:
      pppppppppppuVar25 = (uint ***********)0x0;
      goto LAB_10009147;
    }
  }
LAB_10008e4d:
  *param_3 = (int)(uint ***********)local_40;
  param_3[1] = PF_PART4(local_a0, 0);
  pppppppppppuVar25 = (uint ***********)CONCAT31((int3)((uint)pppppppppppuVar25 >> 8),1);
  if (local_4c != &local_10c) {
    param_3[3] = 0;
    recovered_100050a0((void *)param_3[2]);
    param_3[2] = (int)local_10c;
    param_3[3] = local_108;
    param_3[4] = local_104;
    local_10c = (uint **********)0x0;
    local_104 = 0;
  }
LAB_10009147:
  local_108 = 0;
  recovered_100050a0(local_10c);
LAB_10008896:
  local_160 = 0;
  recovered_100050a0(local_164);
LAB_100088b4:
  pointer = (uint ************)local_6d0;
LAB_100088ba:
  recovered_100050a0(pointer);
  goto LAB_10006136;
  while( true ) {
    bVar30 = *(byte *)((int)local_14 + (int)(uint ***********)local_40 * 2 + 2);
    pppppppppppuVar38 = local_70c + 5;
    while (pppppppppppuVar38[-5] !=
           (uint **********)(uint)*(byte *)((int)local_14 + (int)(uint ***********)local_40 * 2 + 1)
          ) {
      pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar25 + 1);
      pppppppppppuVar38 = pppppppppppuVar38 + 0xc;
      local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
      if (local_708 == pppppppppppuVar25) goto LAB_10008e34;
    }
    if ((int)pppppppppppuVar25 < 0) goto LAB_10008e2d;
    pppppppppppuVar38[-1] = (uint **********)(uint)(bVar30 >> 4);
    *pppppppppppuVar38 = (uint **********)(bVar30 & 0xf);
    local_1c = pf_double_bits((double)((ulonglong)PF_PART4(local_1c, 4) << 0x20));
    if (0x3f < bVar30) goto LAB_10008e34;
    if ((uint **********)0x3 < (uint **********)(bVar30 & 0xf)) goto LAB_10008e34;
    local_88 = 0xc;
    local_6e8 = pppppppppppuVar25;
    recovered_10011030((int *)&local_700,&local_6e8);
    iVar14 = (int)(uint ***********)local_40 + 1;
    local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),iVar14)));
    if ((uint ***********)iVar14 == (uint ***********)local_30) break;
LAB_100091c2:
    pppppppppppuVar25 = (uint ***********)0x0;
    if (local_708 == (uint ***********)0x0) goto LAB_10008e2d;
  }
  if (((*(byte *)((int)local_14 + (int)PF_PART4(local_54, 0) + 1) == 0) &&
      (*(byte *)((int)local_14 + (int)PF_PART4(local_54, 0) + 2) == 0x3f)) &&
     (*(byte *)((int)local_14 + (int)PF_PART4(local_54, 0) + 3) == 0)) {
    pppppppuVar32 = (uint *******)((int)PF_PART4(local_38, 0) + (int)local_24);
    pppppppuVar15 = (uint *******)((int)PF_PART4(local_38, 0) + 1 + (int)local_24);
    pppppppuVar44 = pppppppuVar32;
    if (pppppppuVar15 < param_2) {
      do {
        pppppppuVar27 = pppppppuVar15;
        if (*(byte *)((int)param_1 + (int)pppppppuVar44) == 0xff) {
          if (param_2 <= pppppppuVar27) break;
          while( true ) {
            pppppppuVar27 = (uint *******)((int)pppppppuVar27 + 1);
            bVar30 = *(byte *)((int)param_1 + -1 + (int)pppppppuVar27);
            if (bVar30 != 0xff) break;
            if ((byte *)((1 - (int)param_2) + (int)pppppppuVar27) == (byte *)0x1) goto LAB_100093d3;
          }
          if (bVar30 != 0 && (bVar30 & 0xf8) != 0xd0) break;
        }
        pppppppuVar15 = (uint *******)((int)pppppppuVar27 + 1);
        pppppppuVar44 = pppppppuVar27;
      } while ((uint *******)((int)pppppppuVar27 + 1) < param_2);
    }
LAB_100093d3:
    local_14 = (uint ***********)((int)param_1 + (int)pppppppuVar32);
    local_6f4 = (uint ***********)((int)param_1 + (int)pppppppuVar32);
    local_24 = (uint ***********)((int)pppppppuVar44 - (int)pppppppuVar32);
    local_6f0 = local_24;
    if (((local_24 == (uint ***********)0x0) || (local_bb4 == (uint ***********)0x0)) ||
       (local_bb0 == (uint ***********)0x0)) goto LAB_10008e2d;
    local_180 = (byte *)((int)local_bb4 + (int)local_bac * 8 + -1);
    local_20 = (uint ***********)((int)local_bb0 + (int)local_ba8 * 8 + -1);
    local_a8 = (byte *)((int)local_bac << 3);
    local_94 = (uint)local_180 / (uint)((int)local_bac << 3);
    local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),(int)local_ba8 * 8));
    local_98 = (uint)local_20 / (uint)((int)local_ba8 * 8);
    if (local_708 != (uint ***********)0x0) {
      local_14 = local_70c;
      local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),local_70c + (int)local_708 * 0xc)));
      local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),local_94 * 8)));
      local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),local_98 * 8));
      do {
        if ((((char)(&local_b9c)[(int)local_14[3] * 0x41] != '\x01') ||
            (local_78c[(int)local_14[4] * 0x10] != '\x01')) ||
           (local_74c[(int)local_14[5] * 0x10] != '\x01')) goto LAB_10008e2d;
        ppppppppppuVar19 = (uint **********)((int)local_14[1] * (int)(uint ***********)local_30);
        local_14[7] = ppppppppppuVar19;
        ppppppppppuVar33 = (uint **********)((int)local_14[2] * (int)PF_PART4(local_38, 0));
        local_14[8] = ppppppppppuVar33;
        if ((ppppppppppuVar19 != (uint **********)0x0) &&
           ((int)(ZEXT48(ppppppppppuVar19) * ZEXT48(ppppppppppuVar33) >> 0x20) != 0))
        goto LAB_10008e2d;
        ppppppppppuVar33 = (uint **********)((int)ppppppppppuVar33 * (int)ppppppppppuVar19);
        local_14[10] = (uint **********)0x0;
        ppppppppppuVar19 = (uint **********)0x0;
        local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),ppppppppppuVar33)));
        if (local_14[0xb] < ppppppppppuVar33) {
          local_88 = 0xd;
          ppppppppppuVar22 = recovered_10005040((uint)ppppppppppuVar33);
          ppppppppppuVar19 = local_14[9];
          ppppppppppuVar33 = local_14[10];
          if (ppppppppppuVar33 != (uint **********)0x0) {
            ppppppppppuVar34 = (uint **********)0x0;
            do {
              *(undefined1 *)((int)ppppppppppuVar22 + (int)ppppppppppuVar34) =
                   *(undefined1 *)((int)ppppppppppuVar19 + (int)ppppppppppuVar34);
              ppppppppppuVar34 = (uint **********)((int)ppppppppppuVar34 + 1);
            } while (ppppppppppuVar33 != ppppppppppuVar34);
          }
          recovered_100050a0(ppppppppppuVar19);
          local_14[9] = ppppppppppuVar22;
          local_14[0xb] = (uint **********)(uint ***********)local_1c;
          ppppppppppuVar19 = local_14[10];
        }
        while (ppppppppppuVar19 < (uint ***********)local_1c) {
          *(undefined1 *)((int)local_14[9] + (int)ppppppppppuVar19) = 0;
          ppppppppppuVar19 = (uint **********)((int)local_14[10] + 1);
          local_14[10] = ppppppppppuVar19;
        }
        local_14[6] = (uint **********)0x0;
        local_14 = local_14 + 0xc;
      } while (local_14 != (uint ***********)local_40);
      local_14 = local_6f4;
      local_24 = local_6f0;
    }
    local_128 = 0;
    local_12c = 0;
    local_130 = 0;
    local_134 = 0;
    local_138 = 0;
    local_13c = 0;
    local_140 = 0;
    local_144 = 0;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_154 = 0;
    local_158 = 0;
    local_15c = 0;
    local_160 = 0;
    local_164 = (uint **********)0x0;
    local_6f4 = local_14;
    local_6f0 = local_24;
    if (PF_PART4(local_54, 0) <= local_20) {
      local_d8 = 0;
      local_178 = 0;
      local_28 = (uint ***********)0x0;
      local_44 = (uint ***********)0x0;
      local_20 = (uint ***********)0x0;
      do {
        if (local_a8 <= local_180) {
          local_174 = 0;
          do {
            if (local_d8 == local_ba4 && local_ba4 != 0) {
              if ((local_20 < local_24) && (*(byte *)((int)local_14 + (int)local_20) == 0xff)) {
                local_20 = (uint ***********)((int)local_20 + 1);
                do {
                  pppppppppppuVar25 = local_20;
                  if (local_24 == local_20) goto LAB_10008e2d;
                  bVar30 = *(byte *)((int)local_14 + (int)local_20);
                  local_20 = (uint ***********)((int)local_20 + 1);
                } while (bVar30 == 0xff);
                if ((bVar30 & 0xf8) != 0xd0) {
                  if (bVar30 != 0) goto LAB_10008e2d;
                  local_20 = (uint ***********)((int)pppppppppppuVar25 - 1);
                }
              }
              local_28 = (uint ***********)0x0;
              if (local_708 != (uint ***********)0x0) {
                iVar14 = (int)local_708 * 0x30;
                pppppppppppuVar25 = local_70c + 6;
                do {
                  *pppppppppppuVar25 = (uint **********)0x0;
                  pppppppppppuVar25 = pppppppppppuVar25 + 0xc;
                  iVar14 = iVar14 + -0x30;
                } while (iVar14 != 0);
              }
              local_d8 = 0;
            }
            if (local_6fc != 0) {
              local_17c = local_700;
              local_1a8 = local_700 + local_6fc;
              do {
                pppppppppppuVar25 = (uint ***********)*local_17c;
                if (local_708 <= pppppppppppuVar25) goto LAB_10008e2d;
                ppppppppppuVar19 = local_70c[(int)pppppppppppuVar25 * 0xc + 2];
                if (ppppppppppuVar19 != (uint **********)0x0) {
                  local_48 = local_70c + (int)pppppppppppuVar25 * 0xc;
                  ppppppppppuVar33 = (local_70c + (int)pppppppppppuVar25 * 0xc)[1];
                  local_170 = (uint **********)0x0;
LAB_10009de6:
                  if (ppppppppppuVar33 != (uint **********)0x0) {
                    local_168 = (uint **********)0x0;
LAB_10009df8:
                    ppppppppppuVar19 = local_48[3];
                    if (ppppppppppuVar19 < (uint **********)0x4) {
                      ppppppppppuVar33 = local_48[4];
                      if (ppppppppppuVar33 < (uint **********)0x4) {
                        local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),local_48[5])));
                        if (local_48[5] < (uint **********)0x4) {
                          local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),(int)ppppppppppuVar19 * 0x104)));
                          if ((char)(&local_b9c)[(int)ppppppppppuVar19 * 0x41] == '\x01') {
                            recovered_10001aa0((undefined1 *)&local_6e4,0xfc);
                            if (local_78c[(int)ppppppppppuVar33 * 0x10] != '\0') {
                              iVar40 = (int)(uint ***********)local_30;
                              local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),
                                                          (int)&local_b9c +
                                                          (int)(uint ***********)local_30)));
                              iVar14 = local_788[(int)ppppppppppuVar33 * 4 + 1];
                              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),iVar14)));
                              local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),iVar14 * 0xc));
                              uVar42 = 1;
                              uVar17 = 0;
                              bVar45 = true;
                              do {
                                if (local_28 == (uint ***********)0x0) {
                                  if (local_24 <= local_20) break;
                                  pppppppppppuVar25 = (uint ***********)((int)local_20 + 1);
                                  while( true ) {
                                    local_44 = (uint ***********)
                                               (uint)((byte *)((int)local_14 - 1))
                                                     [(int)pppppppppppuVar25];
                                    local_28 = (uint ***********)0x8;
                                    if (((byte *)((int)local_14 - 1))[(int)pppppppppppuVar25] !=
                                        0xff) break;
                                    local_44 = (uint ***********)0xff;
                                    if (local_24 <= pppppppppppuVar25) goto LAB_10008e2d;
                                    local_20 = (uint ***********)((int)pppppppppppuVar25 + 1);
                                    if (*(byte *)((int)local_14 + (int)pppppppppppuVar25) == 0) {
                                      local_44 = (uint ***********)0xff;
                                      goto LAB_10009eb9;
                                    }
                                    if ((*(byte *)((int)local_14 + (int)pppppppppppuVar25) & 0xf8)
                                        != 0xd0) goto LAB_10008e2d;
                                    pppppppppppuVar25 =
                                         (uint ***********)((int)pppppppppppuVar25 + 2);
                                    if (local_24 <= local_20) goto LAB_10008e2d;
                                  }
                                  local_20 = pppppppppppuVar25;
                                }
LAB_10009eb9:
                                uVar41 = (uint)local_44 >> 7;
                                local_44 = (uint ***********)
                                           CONCAT31((int3)((uint)local_44 >> 8),
                                                    (char)local_44 * '\x02');
                                local_28 = (uint ***********)((int)local_28 - 1);
                                uVar17 = (uVar41 & 1) + uVar17 * 2;
                                if (iVar14 != 0) {
                                  iVar28 = iVar14 * 0xc;
                                  puVar36 = (uint *)(local_788[(int)ppppppppppuVar33 * 4] + 8);
                                  do {
                                    if ((puVar36[-1] == uVar42) && (puVar36[-2] == uVar17)) {
                                      uVar42 = *puVar36;
                                      local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),uVar42)));
                                      if (!(bool)(bVar45 & uVar42 < 0xc)) goto LAB_10008e2d;
                                      pppppppppppuVar25 = local_20;
                                      if (uVar42 != 0) {
                                        uVar17 = 0;
                                        bVar45 = false;
                                        uVar41 = 0;
                                        goto LAB_10009f88;
                                      }
                                      iVar14 = 0;
                                      goto LAB_1000a04c;
                                    }
                                    puVar36 = puVar36 + 3;
                                    iVar28 = iVar28 + -0xc;
                                  } while (iVar28 != 0);
                                }
                                bVar45 = uVar42 < 0x10;
                                uVar42 = uVar42 + 1;
                              } while (uVar42 != 0x11);
                            }
                          }
                        }
                      }
                    }
                    goto LAB_10008e2d;
                  }
                  ppppppppppuVar33 = (uint **********)0x0;
                  goto LAB_1000aa07;
                }
LAB_1000aa1c:
                local_17c = local_17c + 1;
              } while (local_17c != local_1a8);
            }
            local_d8 = local_d8 + 1;
            local_174 = local_174 + 1;
          } while (local_174 < local_94);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_98);
    }
    if ((local_bb4 != (uint ***********)0x0) &&
       ((int)(ZEXT48(local_bb4) * ZEXT48(local_bb0) >> 0x20) != 0)) goto LAB_10008e2d;
    if (0x3fffffff < (uint)((int)local_bb0 * (int)local_bb4)) goto LAB_10008e2d;
    local_88 = 0x1e;
    recovered_10010890(&local_6e8,(int)local_bb0 * (int)local_bb4 * 4);
    if (local_bb0 == (uint ***********)0x0) {
      pppppppppppuVar25 = (uint ***********)0x0;
    }
    else {
      local_38 = pf_bits_double((pf_double_bits(local_38) & 0xffffffff00000000));
      local_14 = local_bb4;
      do {
        pppppppppppuVar38 = (uint ***********)0x0;
        if (local_14 != (uint ***********)0x0) {
          local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
          do {
            uVar42 = (int)local_70c[7] - 1;
            local_24 = local_bac;
            uVar17 = (uint)((int)local_70c[1] * (int)(uint ***********)local_1c) / (uint)local_bac;
            if (uVar42 <= uVar17) {
              uVar17 = uVar42;
            }
            local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),local_6e8)));
            local_20 = local_708;
            local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),local_ba8));
            uVar42 = (uint)((int)local_70c[2] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
            if ((int)local_70c[8] - 1U <= uVar42) {
              uVar42 = (int)local_70c[8] - 1U;
            }
            bVar30 = *(byte *)((int)local_70c[9] + uVar17 + uVar42 * (int)local_70c[7]);
            uVar42 = (uint)bVar30;
            local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),uVar42)));
            iVar14 = (int)local_14 * (int)PF_PART4(local_38, 0) + (int)(uint ***********)local_1c;
            if (local_708 == (uint ***********)0x3) {
              uVar42 = (int)local_70c[0x13] - 1;
              local_20 = (uint ***********)0x0;
              uVar17 = (uint)((int)local_70c[0xd] * (int)(uint ***********)local_1c) /
                       (uint)local_bac;
              if (uVar42 <= uVar17) {
                uVar17 = uVar42;
              }
              uVar42 = (uint)((int)local_70c[0xe] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
              if ((int)local_70c[0x14] - 1U <= uVar42) {
                uVar42 = (int)local_70c[0x14] - 1U;
              }
              local_28 = (uint ***********)
                         (uint)*(byte *)((int)local_70c[0x15] +
                                        uVar17 + uVar42 * (int)local_70c[0x13]);
              uVar42 = (int)local_70c[0x1f] - 1;
              uVar17 = (uint)((int)local_70c[0x19] * (int)(uint ***********)local_1c) /
                       (uint)local_bac;
              if (uVar42 <= uVar17) {
                uVar17 = uVar42;
              }
              uVar42 = (uint)((int)local_70c[0x1a] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
              if ((int)local_70c[0x20] - 1U <= uVar42) {
                uVar42 = (int)local_70c[0x20] - 1U;
              }
              local_1c0 = *(byte *)((int)local_70c[0x21] + uVar17 + uVar42 * (int)local_70c[0x1f]) -
                          0x80;
              local_196 = (ushort)bVar30;
              dVar11 = (double)local_196;
              dVar47 = (double)local_1c0 * _DAT_10016158 + dVar11;
              dVar10 = (double)_DAT_10015f10;
              dVar9 = (double)_DAT_10015f50;
              dVar1 = dVar10;
              if (dVar47 < 0.0) {
                dVar1 = dVar9;
              }
              local_190 = in_FPUControlWord | 0xc00;
              local_1c8 = (uint)ROUND(dVar1 + dVar47);
              uVar42 = 0xff;
              if (local_1c8 < 0xff) {
                uVar42 = local_1c8;
              }
              bVar30 = 0;
              if (0 < (int)local_1c8) {
                bVar30 = (byte)uVar42;
              }
              local_1c4 = local_28 + -0x20;
              *(byte *)(local_6e8 + iVar14) = bVar30;
              dVar1 = (double)local_1c0 * _DAT_10016168 +
                      (double)(int)local_1c4 * _DAT_10016160 + dVar11;
              dVar47 = dVar10;
              if (dVar1 < 0.0) {
                dVar47 = dVar9;
              }
              local_18e = in_FPUControlWord | 0xc00;
              local_1d0 = (uint)ROUND(dVar47 + dVar1);
              uVar42 = 0xff;
              if (local_1d0 < 0xff) {
                uVar42 = local_1d0;
              }
              bVar30 = 0;
              if (0 < (int)local_1d0) {
                bVar30 = (byte)uVar42;
              }
              *(byte *)((int)local_6e8 + iVar14 * 4 + 1) = bVar30;
              dVar11 = (double)(int)local_1c4 * _DAT_10016170 + dVar11;
              if (dVar11 < 0.0) {
                dVar10 = dVar9;
              }
              local_18c = in_FPUControlWord | 0xc00;
              local_1cc = (uint ***********)(int)ROUND(dVar10 + dVar11);
              pppppppppppuVar25 = (uint ***********)0xff;
              if (local_1cc < (uint ***********)0xff) {
                pppppppppppuVar25 = local_1cc;
              }
              if (0 < (int)local_1cc) {
                local_20 = pppppppppppuVar25;
              }
              pppppppppppuVar25 = local_20;
LAB_10009cb6:
              local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),pppppppppppuVar25)));
            }
            else if (local_708 == (uint ***********)0x1) {
              *(byte *)(local_6e8 + iVar14) = bVar30;
              *(byte *)((int)local_6e8 + iVar14 * 4 + 1) = bVar30;
            }
            else {
              uVar17 = (int)local_70c[0x13] - 1;
              uVar41 = (uint)((int)local_70c[0xd] * (int)(uint ***********)local_1c) /
                       (uint)local_bac;
              if (uVar17 <= uVar41) {
                uVar41 = uVar17;
              }
              uVar17 = (uint)((int)local_70c[0xe] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
              if ((int)local_70c[0x14] - 1U <= uVar17) {
                uVar17 = (int)local_70c[0x14] - 1U;
              }
              local_28 = (uint ***********)
                         (uint)*(byte *)((int)local_70c[0x15] +
                                        uVar41 + uVar17 * (int)local_70c[0x13]);
              uVar17 = (int)local_70c[0x1f] - 1;
              uVar41 = (uint)((int)local_70c[0x19] * (int)(uint ***********)local_1c) /
                       (uint)local_bac;
              if (uVar17 <= uVar41) {
                uVar41 = uVar17;
              }
              uVar17 = (uint)((int)local_70c[0x1a] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
              if ((int)local_70c[0x20] - 1U <= uVar17) {
                uVar17 = (int)local_70c[0x20] - 1U;
              }
              local_20 = (uint ***********)
                         (uint)*(byte *)((int)local_70c[0x21] +
                                        uVar41 + uVar17 * (int)local_70c[0x1f]);
              uVar17 = (int)local_70c[0x2b] - 1;
              uVar41 = (uint)((int)local_70c[0x25] * (int)(uint ***********)local_1c) /
                       (uint)local_bac;
              if (uVar17 <= uVar41) {
                uVar41 = uVar17;
              }
              uVar17 = (uint)((int)local_70c[0x26] * (int)PF_PART4(local_38, 0)) / (uint)local_ba8;
              if ((int)local_70c[0x2c] - 1U <= uVar17) {
                uVar17 = (int)local_70c[0x2c] - 1U;
              }
              uVar17 = (uint)*(byte *)((int)local_70c[0x2d] + uVar41 + uVar17 * (int)local_70c[0x2b]
                                      );
              if (local_ba0 == (uint ***********)0x2) {
                local_1b0 = local_20 + -0x20;
                local_194 = (ushort)bVar30;
                dVar11 = (double)local_194;
                dVar47 = (double)(int)local_1b0 * _DAT_10016158 + dVar11;
                dVar10 = (double)_DAT_10015f10;
                dVar9 = (double)_DAT_10015f50;
                dVar1 = dVar10;
                if (dVar47 < 0.0) {
                  dVar1 = dVar9;
                }
                local_18a = in_FPUControlWord | 0xc00;
                local_1b8 = (uint)ROUND(dVar1 + dVar47);
                local_20 = (uint ***********)0xff;
                if (local_1b8 < 0xff) {
                  uVar42 = local_1b8 & 0xff;
                }
                else {
                  uVar42 = 0xff;
                }
                if ((int)local_1b8 < 1) {
                  uVar42 = 0;
                }
                local_1ac = local_28 + -0x20;
                dVar1 = (double)(int)local_1b0 * _DAT_10016168 +
                        (double)(int)local_1ac * _DAT_10016160 + dVar11;
                dVar47 = dVar10;
                if (dVar1 < 0.0) {
                  dVar47 = dVar9;
                }
                local_188 = in_FPUControlWord | 0xc00;
                local_1bc = (uint)ROUND(dVar47 + dVar1);
                if (local_1bc < 0xff) {
                  local_28 = (uint ***********)(local_1bc & 0xff);
                }
                else {
                  local_28 = (uint ***********)0xff;
                }
                if ((int)local_1bc < 1) {
                  local_28 = (uint ***********)0x0;
                }
                dVar11 = (double)(int)local_1ac * _DAT_10016170 + dVar11;
                if (dVar11 < 0.0) {
                  dVar10 = dVar9;
                }
                local_186 = in_FPUControlWord | 0xc00;
                local_1b4 = (uint)ROUND(dVar10 + dVar11);
                if (local_1b4 < 0xff) {
                  local_20 = (uint ***********)(local_1b4 & 0xff);
                }
                if ((int)local_1b4 < 1) {
                  local_20 = (uint ***********)0x0;
                }
              }
              uVar42 = uVar42 + uVar17;
              local_30 = pf_double_bits((double)((ulonglong)PF_PART4(local_30, 4) << 0x20));
              bVar45 = 0xfe < uVar42;
              if (bVar45) {
                uVar42 = 0xff;
              }
              bVar30 = 0;
              if (!bVar45) {
                bVar30 = ~(byte)uVar42;
              }
              *(byte *)(local_6e8 + iVar14) = bVar30;
              pbVar39 = (byte *)((int)local_28 + uVar17);
              bVar45 = (byte *)0xfe < pbVar39;
              if (bVar45) {
                pbVar39 = (byte *)0xff;
              }
              bVar30 = 0;
              if (!bVar45) {
                bVar30 = ~(byte)pbVar39;
              }
              *(byte *)((int)local_6e8 + iVar14 * 4 + 1) = bVar30;
              pbVar39 = (byte *)((int)local_20 + uVar17);
              if (pbVar39 < (byte *)0xff) {
                pppppppppppuVar25 =
                     (uint ***********)CONCAT31((int3)((uint)pbVar39 >> 8),~(byte)pbVar39);
                goto LAB_10009cb6;
              }
            }
            *(byte *)((int)local_6e8 + iVar14 * 4 + 2) = SUB81(local_30,0);
            *(byte *)((int)local_6e8 + iVar14 * 4 + 3) = 0xff;
            pppppppppppuVar25 = (uint ***********)((int)(uint ***********)local_1c + 1);
            local_14 = local_bb4;
            local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),pppppppppppuVar25)));
          } while (pppppppppppuVar25 < local_bb4);
          pppppppppppuVar38 = local_bb4;
        }
        pppppppppppuVar26 = (uint ***********)((int)PF_PART4(local_38, 0) + 1);
        local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),pppppppppppuVar26));
        pppppppppppuVar25 = local_bb0;
        local_14 = pppppppppppuVar38;
      } while (pppppppppppuVar26 < local_bb0);
    }
    *param_3 = (int)local_bb4;
    param_3[1] = (int)pppppppppppuVar25;
    if (local_4c != (uint ***********)&local_6e8) {
      param_3[3] = 0;
      recovered_100050a0((void *)param_3[2]);
      param_3[2] = (int)local_6e8;
      param_3[3] = (int)local_6e4;
      param_3[4] = (int)local_6e0;
      local_6e8 = (uint ***********)0x0;
      local_6e0 = (uint ***********)0x0;
    }
    local_6e4 = (uint ***********)0x0;
    recovered_100050a0(local_6e8);
    local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),CONCAT31((int3)((uint)extraout_EAX >> 8),1))));
  }
  else {
LAB_10008e2d:
    local_1c = ((uint64_t)local_1c & 0xffffffff00000000ULL);
  }
LAB_10008e34:
  recovered_10010bc0((int)&local_bb4);
  goto LAB_10008e45;
LAB_10009f88:
  pppppppppppuVar38 = pppppppppppuVar25;
  if (local_28 == (uint ***********)0x0) {
    do {
      if (local_24 <= pppppppppppuVar38) {
LAB_1000a01c:
        local_28 = (uint ***********)0x0;
        pppppppppppuVar25 = pppppppppppuVar38;
        if (bVar45) goto LAB_1000a02b;
        goto LAB_10008e2d;
      }
      pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar38 + 1);
      local_20 = pppppppppppuVar25;
      if (*(byte *)((int)local_14 + (int)pppppppppppuVar38) != 0xff) {
        local_28 = (uint ***********)0x7;
        local_44 = (uint ***********)(uint)*(byte *)((int)local_14 + (int)pppppppppppuVar38);
        goto LAB_10009f91;
      }
      if (local_24 <= pppppppppppuVar25) {
        pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 + 1);
LAB_1000a019:
        local_20 = pppppppppppuVar38;
        goto LAB_1000a01c;
      }
      pbVar39 = (byte *)((int)local_14 + 1) + (int)pppppppppppuVar38;
      pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 + 2);
      if (*pbVar39 == 0) goto LAB_1000a000;
      if ((*pbVar39 & 0xf8) != 0xd0) goto LAB_1000a019;
      local_20 = pppppppppppuVar38;
    } while( true );
  }
  local_28 = (uint ***********)((int)local_28 - 1);
  goto LAB_10009f91;
LAB_1000a000:
  local_28 = (uint ***********)0x7;
  local_20 = pppppppppppuVar38;
  pppppppppppuVar25 = pppppppppppuVar38;
  local_44 = (uint ***********)0xff;
LAB_10009f91:
  uVar29 = (uint)local_44 >> 7;
  local_44 = (uint ***********)CONCAT31((int3)((uint)local_44 >> 8),(char)local_44 * '\x02');
  uVar17 = (uVar29 & 1) + uVar17 * 2;
  uVar41 = uVar41 + 1;
  bVar45 = uVar42 <= uVar41;
  if (uVar41 == uVar42) goto LAB_1000a02b;
  goto LAB_10009f88;
LAB_1000a02b:
  if (uVar17 >> ((byte)uVar42 - 1 & 0x1f) == 0) {
    uVar42 = -1 << ((byte)uVar42 & 0x1f) | 1;
  }
  else {
    uVar42 = 0;
  }
  iVar14 = uVar42 + uVar17;
LAB_1000a04c:
  ppppppppppuVar19 = local_48[6];
  local_48[6] = (uint **********)(iVar14 + (int)ppppppppppuVar19);
  local_6e8 = (uint ***********)
              ((iVar14 + (int)ppppppppppuVar19) * *(int *)((int)&local_b98 + iVar40));
  if (local_74c[(int)(uint ***********)local_40 * 0x10] == '\x01') {
    iVar14 = (int)(uint ***********)local_40 * 4;
    local_40 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_40, 4),local_748[(int)(uint ***********)local_40 * 4] + 8)));
    local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),local_748[iVar14 + 1]));
    local_54 = pf_bits_double(CONCAT44(PF_PART4(local_54, 4),local_748[iVar14 + 1] * 0xc));
    local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),1));
LAB_1000a0a2:
    uVar17 = 0;
    local_1c = pf_double_bits(pf_bits_double(CONCAT71(PF_PART7(local_1c, 1),1)));
    uVar42 = 1;
    do {
      if (local_28 == (uint ***********)0x0) {
        if (local_24 <= pppppppppppuVar25) break;
        pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar25 + 1);
        while( true ) {
          local_44 = (uint ***********)(uint)((byte *)((int)local_14 - 1))[(int)pppppppppppuVar25];
          local_28 = (uint ***********)0x8;
          if (((byte *)((int)local_14 - 1))[(int)pppppppppppuVar25] != 0xff) break;
          local_44 = (uint ***********)0xff;
          if (local_24 <= pppppppppppuVar25) goto LAB_10008e2d;
          local_20 = (uint ***********)((int)pppppppppppuVar25 + 1);
          if (*(byte *)((int)local_14 + (int)pppppppppppuVar25) == 0) {
            local_44 = (uint ***********)0xff;
            pppppppppppuVar25 = local_20;
            goto LAB_1000a0c8;
          }
          if ((*(byte *)((int)local_14 + (int)pppppppppppuVar25) & 0xf8) != 0xd0) goto LAB_10008e2d;
          pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar25 + 2);
          if (local_24 <= local_20) goto LAB_10008e2d;
        }
        local_20 = pppppppppppuVar25;
      }
LAB_1000a0c8:
      uVar41 = (uint)local_44 >> 7;
      local_44 = (uint ***********)CONCAT31((int3)((uint)local_44 >> 8),(char)local_44 * '\x02');
      local_28 = (uint ***********)((int)local_28 - 1);
      uVar17 = (uVar41 & 1) + uVar17 * 2;
      if (PF_PART4(local_38, 0) != (uint ***********)0x0) {
        iVar14 = (int)PF_PART4(local_54, 0);
        puVar36 = (uint *)(uint ***********)local_40;
        do {
          if ((puVar36[-1] == uVar42) && (puVar36[-2] == uVar17)) {
            if ((char)local_1c == '\0') goto LAB_10008e2d;
            uVar42 = *puVar36 >> 4;
            uVar17 = *puVar36 & 0xf;
            if (uVar17 != 0) {
              uVar42 = uVar42 + PF_PART4(local_a0, 0);
              local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),uVar42)));
              if (0x3f < uVar42) goto LAB_10008e2d;
              uVar41 = 0;
              bVar45 = false;
              uVar29 = 0;
              goto LAB_1000a1a0;
            }
            if (uVar42 != 0xf) goto LAB_1000a292;
            local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),PF_PART4(local_a0, 0) + 0x10));
            goto LAB_1000a285;
          }
          puVar36 = puVar36 + 3;
          iVar14 = iVar14 + -0xc;
        } while (iVar14 != 0);
      }
      bVar45 = uVar42 < 0x10;
      uVar42 = uVar42 + 1;
      local_1c = pf_double_bits(pf_bits_double(CONCAT71(PF_PART7(local_1c, 1),bVar45)));
    } while (uVar42 != 0x11);
  }
  goto LAB_10008e2d;
LAB_1000a1a0:
  pppppppppppuVar38 = pppppppppppuVar25;
  if (local_28 == (uint ***********)0x0) {
    do {
      if (local_24 <= pppppppppppuVar38) {
LAB_1000a235:
        local_28 = (uint ***********)0x0;
        pppppppppppuVar25 = pppppppppppuVar38;
        if (bVar45) goto LAB_1000a245;
        goto LAB_10008e2d;
      }
      pppppppppppuVar25 = (uint ***********)((int)pppppppppppuVar38 + 1);
      local_20 = pppppppppppuVar25;
      if (*(byte *)((int)local_14 + (int)pppppppppppuVar38) != 0xff) {
        local_28 = (uint ***********)0x7;
        local_44 = (uint ***********)(uint)*(byte *)((int)local_14 + (int)pppppppppppuVar38);
        goto LAB_1000a1a9;
      }
      if (local_24 <= pppppppppppuVar25) {
        pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 + 1);
LAB_1000a232:
        local_20 = pppppppppppuVar38;
        goto LAB_1000a235;
      }
      pbVar39 = (byte *)((int)local_14 + 1) + (int)pppppppppppuVar38;
      pppppppppppuVar38 = (uint ***********)((int)pppppppppppuVar38 + 2);
      if (*pbVar39 == 0) goto LAB_1000a212;
      if ((*pbVar39 & 0xf8) != 0xd0) goto LAB_1000a232;
      local_20 = pppppppppppuVar38;
    } while( true );
  }
  local_28 = (uint ***********)((int)local_28 - 1);
  goto LAB_1000a1a9;
LAB_1000a212:
  local_44 = (uint ***********)0xff;
  local_28 = (uint ***********)0x7;
  local_20 = pppppppppppuVar38;
  pppppppppppuVar25 = pppppppppppuVar38;
LAB_1000a1a9:
  uVar4 = (uint)local_44 >> 7;
  local_44 = (uint ***********)CONCAT31((int3)((uint)local_44 >> 8),(char)local_44 * '\x02');
  uVar41 = (uVar4 & 1) + uVar41 * 2;
  uVar29 = uVar29 + 1;
  bVar45 = uVar17 <= uVar29;
  if (uVar29 == uVar17) goto LAB_1000a245;
  goto LAB_1000a1a0;
LAB_1000a245:
  if (uVar41 >> ((sbyte)uVar17 - 1U & 0x1f) == 0) {
    uVar17 = -1 << (sbyte)uVar17 | 1;
  }
  else {
    uVar17 = 0;
  }
  (&local_6e8)[(&DAT_100166d0)[uVar42]] =
       (uVar17 + uVar41) *
       *(int *)((int)(uint ***********)local_30 + 4 + (&DAT_100166d0)[uVar42] * 4);
  local_a0 = pf_bits_double(CONCAT44(PF_PART4(local_a0, 4),uVar42 + 1));
LAB_1000a285:
  if (0x3f < PF_PART4(local_a0, 0)) goto LAB_1000a292;
  goto LAB_1000a0a2;
LAB_1000a292:
  if (DAT_10017290 == '\0') {
    local_38 = pf_bits_double((pf_double_bits(local_38) & 0xffffffff00000000));
    PF_PART4(local_1c, 0) = (uint ***********)&DAT_100172d0;
    do {
      local_218 = (int)PF_PART4(local_38, 0);
      local_30 = pf_double_bits((double)(int)PF_PART4(local_38, 0) + (double)(int)PF_PART4(local_38, 0) + 1.0);
      local_88 = 0xe;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * 0.0 * _DAT_10015f70 * (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x38) = dVar47;
      local_88 = 0xf;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * _DAT_10015f70 * (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x30) = dVar47;
      local_88 = 0x10;
      dVar47 = recovered_100024c0((pf_bits_double(local_30) + pf_bits_double(local_30)) * _DAT_10015f70 * (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x28) = dVar47;
      local_88 = 0x11;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * (double)_DAT_10015f20 * _DAT_10015f70 *
                                  (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x20) = dVar47;
      local_88 = 0x12;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * (double)_DAT_100161b4 * _DAT_10015f70 *
                                  (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x18) = dVar47;
      local_88 = 0x13;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * (double)_DAT_10015f24 * _DAT_10015f70 *
                                  (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -0x10) = dVar47;
      local_88 = 0x14;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * (double)_DAT_100161b8 * _DAT_10015f70 *
                                  (double)_DAT_100161b0);
      *(double *)((int)(uint ***********)local_1c + -8) = dVar47;
      local_88 = 0x15;
      dVar47 = recovered_100024c0(pf_bits_double(local_30) * (double)_DAT_10015f28 * _DAT_10015f70 *
                                  (double)_DAT_100161b0);
      *(double *)(uint ***********)local_1c = dVar47;
      iVar14 = (int)PF_PART4(local_38, 0) + 1;
      PF_PART4(local_1c, 0) = (uint ***********)((int)(uint ***********)local_1c + 0x40);
      local_38 = pf_bits_double(CONCAT44(PF_PART4(local_38, 4),iVar14));
    } while (iVar14 != 8);
    DAT_10017290 = '\x01';
  }
  local_214 = local_6cc;
  local_b0 = _DAT_10016148 * (double)(int)local_6cc;
  local_210 = (uint ************)local_6d0;
  local_f0 = _DAT_10016148 * (double)(int)local_6d0;
  local_20c = local_6d4;
  local_e8 = _DAT_10016148 * (double)(int)local_6d4;
  local_208 = local_6d8;
  local_124 = _DAT_10016148 * (double)(int)local_6d8;
  local_204 = local_6dc;
  local_d4 = _DAT_10016148 * (double)(int)local_6dc;
  local_200 = local_6e0;
  local_11c = _DAT_10016148 * (double)(int)local_6e0;
  local_1fc = local_6e4;
  local_114 = _DAT_10016148 * (double)(int)local_6e4;
  local_1f8 = local_6e8;
  local_e0 = pf_double_bits((double)(int)local_6e8 * _DAT_10016150);
  local_16c = 0;
  puVar35 = &DAT_100172a0;
  do {
    local_a0 = (double)(&DAT_10017298)[local_16c * 8];
    iVar14 = 0;
    do {
      local_1c = pf_double_bits((double)(&DAT_10017298)[iVar14 * 8]);
      local_30 = pf_double_bits((double)(&DAT_100172a0)[iVar14 * 8]);
      local_38 = (double)(&DAT_100172a8)[iVar14 * 8];
      local_40 = pf_double_bits((double)(&DAT_100172b0)[iVar14 * 8]);
      local_54 = (double)(&DAT_100172b8)[iVar14 * 8];
      dVar47 = local_b0 * (double)(&DAT_100172d0)[iVar14 * 8] * local_a0 +
               local_f0 * (double)(&DAT_100172c8)[iVar14 * 8] * local_a0 +
               local_e8 * (double)(&DAT_100172c0)[iVar14 * 8] * local_a0 +
               local_54 * local_124 * local_a0 +
               local_40 * local_d4 * local_a0 +
               local_38 * local_11c * local_a0 +
               local_30 * local_114 * local_a0 + local_1c * local_e0 * local_a0 + 0.0;
      iVar40 = -0x38;
      do {
        dVar1 = *(double *)((int)puVar35 + iVar40 + 0x38);
        local_1f4 = aiStack_5e8[iVar40];
        local_1f0 = aiStack_5e8[iVar40 + 1];
        local_1ec = aiStack_5e8[iVar40 + 2];
        local_1e8 = aiStack_5e8[iVar40 + 3];
        local_1e4 = aiStack_5e8[iVar40 + 4];
        local_1e0 = aiStack_5e8[iVar40 + 5];
        local_1dc = aiStack_5e8[iVar40 + 6];
        local_1d8 = aiStack_5e8[iVar40 + 7];
        dVar47 = (double)(&DAT_100172d0)[iVar14 * 8] * (double)aiStack_5e8[iVar40 + 7] * dVar1 +
                 (double)(&DAT_100172c8)[iVar14 * 8] * (double)aiStack_5e8[iVar40 + 6] * dVar1 +
                 (double)(&DAT_100172c0)[iVar14 * 8] * (double)aiStack_5e8[iVar40 + 5] * dVar1 +
                 local_54 * (double)aiStack_5e8[iVar40 + 4] * dVar1 +
                 local_40 * (double)aiStack_5e8[iVar40 + 3] * dVar1 +
                 local_38 * (double)aiStack_5e8[iVar40 + 2] * dVar1 +
                 local_30 * (double)aiStack_5e8[iVar40 + 1] * dVar1 +
                 local_1c * (double)aiStack_5e8[iVar40] * _DAT_10016148 * dVar1 + dVar47;
        iVar40 = iVar40 + 8;
      } while (iVar40 != 0);
      dVar47 = dVar47 * (double)_DAT_100161bc + (double)_DAT_100161c0;
      local_be = in_FPUControlWord;
      local_192 = in_FPUControlWord | 0xc00;
      local_1d4 = (uint)ROUND(dVar47 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= dVar47) * 8));
      uVar42 = 0xff;
      if (local_1d4 < 0xff) {
        uVar42 = local_1d4;
      }
      uVar12 = (undefined1)uVar42;
      if ((int)local_1d4 < 1) {
        uVar12 = 0;
      }
      *(undefined1 *)((int)&local_164 + iVar14 + local_16c * 8) = uVar12;
      iVar14 = iVar14 + 1;
    } while (iVar14 != 8);
    local_16c = local_16c + 1;
    puVar35 = puVar35 + 8;
  } while (local_16c != 8);
  ppppppppppuVar33 = (uint **********)((int)((int)local_48[2] * local_178 + (int)local_170) * 8);
  iVar14 = (int)((int)local_48[1] * local_174 + (int)local_168) * 8;
  local_30 = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_30, 4),iVar14)));
  ppppppppppuVar19 = local_48[8];
  local_1c = pf_double_bits(pf_bits_double(CONCAT44(PF_PART4(local_1c, 4),ppppppppppuVar33)));
  if (ppppppppppuVar33 < ppppppppppuVar19) {
    local_88 = 0x16;
    recovered_100019c0((void *)((int)local_48[9] + iVar14 + (int)local_48[7] * (int)ppppppppppuVar33
                               ),&local_164,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 1) < ppppppppppuVar19) {
    local_88 = 0x17;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 1) * (int)local_48[7]),
                       &local_15c,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 2) < ppppppppppuVar19) {
    local_88 = 0x18;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 2) * (int)local_48[7]),
                       &local_154,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 3) < ppppppppppuVar19) {
    local_88 = 0x19;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 3) * (int)local_48[7]),
                       &local_14c,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 4) < ppppppppppuVar19) {
    local_88 = 0x1a;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 4) * (int)local_48[7]),
                       &local_144,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 5) < ppppppppppuVar19) {
    local_88 = 0x1b;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 5) * (int)local_48[7]),
                       &local_13c,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 6) < ppppppppppuVar19) {
    local_88 = 0x1c;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 6) * (int)local_48[7]),
                       &local_134,8);
    ppppppppppuVar19 = local_48[8];
  }
  if ((uint **********)((uint)(uint ***********)local_1c | 7) < ppppppppppuVar19) {
    local_88 = 0x1d;
    recovered_100019c0((void *)((int)local_48[9] +
                               (int)(uint ***********)local_30 +
                               (int)((uint)(uint ***********)local_1c | 7) * (int)local_48[7]),
                       &local_12c,8);
  }
  local_168 = (uint **********)((int)local_168 + 1);
  ppppppppppuVar33 = local_48[1];
  if (ppppppppppuVar33 <= local_168) goto code_r0x1000a9fd;
  goto LAB_10009df8;
code_r0x1000a9fd:
  ppppppppppuVar19 = local_48[2];
LAB_1000aa07:
  local_170 = (uint **********)((int)local_170 + 1);
  if (ppppppppppuVar19 <= local_170) goto LAB_1000aa1c;
  goto LAB_10009de6;
}
uint recovered_100060a0(uint *******param_1,uint *******param_2,int *param_3){if((uintptr_t)param_2<2 || ((const uint8_t *)param_1)[0]!=255 || ((const uint8_t *)param_1)[1]!=216)return pf_i386_decode_other(param_1,param_2,param_3);pf_png32_init();return (uint)pf_png32_10007644((byte *)param_1,(ulonglong *)(uintptr_t)param_2,(uint *)param_3);}

#undef DAT_10015f10
#undef DAT_10015f20
#undef DAT_10015f24
#undef DAT_10015f28
#undef DAT_10015f50
#undef DAT_10015f70
#undef DAT_10015f90
#undef DAT_10016148
#undef DAT_10016150
#undef DAT_10016158
#undef DAT_10016160
#undef DAT_10016168
#undef DAT_10016170
#undef DAT_100161b0
#undef DAT_100161b4
#undef DAT_100161b8
#undef DAT_100161bc
#undef DAT_100161c0
#undef DAT_100166d0
#undef DAT_10016dc0
#undef DAT_10017290
#undef DAT_10017298
#undef DAT_100172a0
#undef DAT_100172a8
#undef DAT_100172b0
#undef DAT_100172b8
#undef DAT_100172c0
#undef DAT_100172c8
#undef DAT_100172d0
#undef LAB_1000ab1a
#undef PTR_recovered_10004fe0_10017004
#undef _DAT_10015f10
#undef _DAT_10015f20
#undef _DAT_10015f24
#undef _DAT_10015f28
#undef _DAT_10015f50
#undef _DAT_10015f70
#undef _DAT_10016148
#undef _DAT_10016150
#undef _DAT_10016158
#undef _DAT_10016160
#undef _DAT_10016168
#undef _DAT_10016170
#undef _DAT_100161b0
#undef _DAT_100161b4
#undef _DAT_100161b8
#undef _DAT_100161bc
#undef _DAT_100161c0
#undef local_bb4
#undef local_bb0
#undef local_bac
#undef local_ba8
#undef local_ba4
#undef local_ba0
#undef local_b9c
#undef local_b98
#undef local_b94
#undef local_b90
#undef local_78c
#undef local_788
#undef local_77c
#undef local_778
#undef local_774
#undef local_770
#undef local_76c
#undef local_768
#undef local_764
#undef local_760
#undef local_75c
#undef local_758
#undef local_754
#undef local_750
#undef local_74c
#undef local_748
#undef local_73c
#undef local_738
#undef local_734
#undef local_730
#undef local_72c
#undef local_728
#undef local_724
#undef local_720
#undef local_71c
#undef local_718
#undef local_714
#undef local_710
#undef local_70c
#undef local_708
#undef local_704
#undef local_700
#undef local_6fc
#undef auStackY_c4c
#undef local_6f8
#undef local_6f4
#undef local_6f0
#undef local_6e8
#undef local_6e4
#undef local_6e0
#undef local_6dc
#undef local_6d8
#undef local_6d4
#undef local_6d0
#undef local_6cc
#undef local_6c8
#undef local_6c4
#undef local_6c0
#undef local_6bc
#undef local_6b8
#undef local_6b4
#undef local_6b0
#undef local_6ac
#undef local_6a8
#undef local_6a4
#undef local_6a0
#undef local_69c
#undef local_698
#undef local_694
#undef local_2bc
#undef local_2b8
#undef local_2b4
#undef local_2ac
#undef local_2a8
#undef local_2a4
#undef local_29c
#undef local_298
#undef local_294
#undef local_28c
#undef local_288
#undef local_284
#undef local_27c
#undef local_278
#undef local_274
#undef local_26c
#undef local_268
#undef local_264
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_23c
#undef local_238
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef aiStack_5e8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_196
#undef local_194
#undef local_192
#undef local_190
#undef local_18e
#undef local_18c
#undef local_18a
#undef local_188
#undef local_186
#undef local_184
#undef local_180
#undef local_17c
#undef local_178
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
#undef local_11c
#undef local_114
#undef local_10c
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d4
#undef local_cc
#undef local_c8
#undef local_be
#undef local_b0
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_54
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_38
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_14

#undef DAT_10016e34
#define DAT_10016e34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf24U)))
#undef LAB_1000b086
#define LAB_1000b086 (*(uint8_t *)(0x1000b086U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define auStackY_13c (*(undefined1 (*)[128])(frame + 20))
#define local_a4 (*(undefined4 *)(frame + 172))
#define local_a0 (*(undefined4 *)(frame + 176))
#define local_8c (*(undefined * *)(frame + 196))
#define local_88 (*(undefined * *)(frame + 200))
#define local_84 (*(undefined1 * *)(frame + 204))
#define local_80 (*(undefined1 * *)(frame + 208))
#define local_7c (*(undefined1 * *)(frame + 212))
#define local_70 (*(byte * *)(frame + 224))
#define local_6c (*(byte * *)(frame + 228))
#define local_68 (*(byte * *)(frame + 232))
#define local_64 (*(int *)(frame + 236))
#define local_60 (*(undefined4 * *)(frame + 240))
#define local_5c (*(byte * *)(frame + 244))
#define local_58 (*(undefined4 *)(frame + 248))
#define local_54 (*(undefined4 *)(frame + 252))
#define local_50 (*(byte * *)(frame + 256))
#define local_4c (*(int *)(frame + 260))
#define local_48 (*(uint *)(frame + 264))
#define local_44 (*(uint *)(frame + 268))
#define local_40 (*(uint *)(frame + 272))
#define local_3c (*(uint *)(frame + 276))
#define local_38 (*(uint *)(frame + 280))
#define local_34 (*(undefined4 * *)(frame + 284))
#define local_30 (*(int *)(frame + 288))
#define local_2c (*(uint *)(frame + 292))
#define local_28 (*(int *)(frame + 296))
#define local_24 (*(byte * *)(frame + 300))
#define local_20 (*(int *)(frame + 304))
#define local_1c (*(byte * *)(frame + 308))
#define local_18 (*(byte * *)(frame + 312))
#define local_14 (*(uint * *)(frame + 316))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad10
 */

uint recovered_1000ad10(uint *in_ECX,int in_EDX,int *param_3)

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
  recovered_100054a0(&local_a4);
  if ((uVar4 == 0) || ((int)((ulonglong)uVar4 * (ulonglong)uVar10 >> 0x20) == 0)) {
    uVar10 = uVar10 * uVar4;
    uVar4 = 0;
    if (uVar10 < 0x40000000) {
      uVar10 = uVar10 * 4;
      param_3[1] = 0;
      if ((uint)param_3[2] < uVar10) {
        local_a0 = 0xffffffff;
        pvVar2 = recovered_10005040(uVar10);
        pointer = (void *)*param_3;
        iVar1 = param_3[1];
        if (iVar1 != 0) {
          iVar6 = 0;
          do {
            *(undefined1 *)((int)pvVar2 + iVar6) = *(undefined1 *)((int)pointer + iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        recovered_100050a0(pointer);
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
        uVar4 = recovered_1000b0f0(local_14,local_14 + 0x10,local_28,(int *)&local_50);
        iVar1 = local_4c;
        if (((char)uVar4 == '\0') || (local_4c != param_3[1])) {
          pbVar3 = local_50;
LAB_1000b055:
          recovered_100050a0(pbVar3);
          uVar4 = 0;
          goto LAB_1000b06f;
        }
        param_3[1] = 0;
        recovered_100050a0((void *)*param_3);
        *param_3 = (int)local_50;
        param_3[1] = iVar1;
        param_3[2] = local_48;
        recovered_100050a0((void *)0x0);
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
          uVar4 = recovered_1000b0f0((uint *)&local_50,puVar9 + 7,local_28,(int *)&local_5c);
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
                    recovered_100019c0(in_ECX_00,in_EDX_00,4);
                  }
                  else {
                    local_a0 = 4;
                    recovered_10012080(in_ECX_00,in_EDX_00);
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
          recovered_100050a0(local_24);
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
  recovered_100054c0(&local_a4);
  return uVar4;
}

#undef DAT_10016e34
#undef LAB_1000b086
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_13c
#undef local_a4
#undef local_a0
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
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

#undef DAT_100169f4
#define DAT_100169f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_10016a10
#define DAT_10016a10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb00U)))
#undef DAT_10016a2c
#define DAT_10016a2c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb1cU)))
#undef DAT_10016a48
#define DAT_10016a48 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb38U)))
#undef DAT_10016b00
#define DAT_10016b00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbf0U)))
#undef DAT_10016e40
#define DAT_10016e40 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf30U)))
#undef LAB_1000c3d6
#define LAB_1000c3d6 (*(uint8_t *)(0x1000c3d6U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define auStackY_15c (*(undefined1 (*)[128])(frame + 20))
#define local_b4 (*(uint *)(frame + 188))
#define local_ac (*(undefined4 *)(frame + 196))
#define local_a8 (*(undefined4 *)(frame + 200))
#define local_94 (*(undefined * *)(frame + 220))
#define local_90 (*(undefined * *)(frame + 224))
#define local_8c (*(undefined1 * *)(frame + 228))
#define local_88 (*(undefined1 * *)(frame + 232))
#define local_84 (*(undefined1 * *)(frame + 236))
#define local_74 (*(void * *)(frame + 252))
#define local_70 (*(undefined4 *)(frame + 256))
#define local_6c (*(undefined4 *)(frame + 260))
#define local_68 (*(void * *)(frame + 264))
#define local_64 (*(uint * *)(frame + 268))
#define local_60 (*(undefined4 *)(frame + 272))
#define local_5c (*(uint * *)(frame + 276))
#define local_58 (*(byte * *)(frame + 280))
#define local_54 (*(uint *)(frame + 284))
#define local_50 (*(byte * *)(frame + 288))
#define local_4c (*(byte * *)(frame + 292))
#define local_48 (*(uint * *)(frame + 296))
#define local_44 (*(uint * *)(frame + 300))
#define local_40 (*(byte * *)(frame + 304))
#define local_3c (*(uint *)(frame + 308))
#define local_38 (*(uint * *)(frame + 312))
#define local_34 (*(uint * *)(frame + 316))
#define local_30 (*(uint * *)(frame + 320))
#define local_2c (*(uint *)(frame + 324))
#define local_28 (*(uint *)(frame + 328))
#define local_24 (*(uint * *)(frame + 332))
#define local_20 (*(uint * *)(frame + 336))
#define local_1c (*(uint * *)(frame + 340))
#define local_18 (*(uint * *)(frame + 344))
#define local_14 (*(undefined4 *)(frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0f0
 */

uint recovered_1000b0f0(uint *in_ECX,uint *in_EDX,int param_3,int *param_4)

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
  recovered_100054a0(&local_ac);
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
        pvVar6 = recovered_10005040((uint)puVar12);
        pvVar5 = (void *)*param_4;
        iVar25 = param_4[1];
        if (iVar25 != 0) {
          iVar20 = 0;
          do {
            *(undefined1 *)((int)pvVar6 + iVar20) = *(undefined1 *)((int)pvVar5 + iVar20);
            iVar20 = iVar20 + 1;
          } while (iVar25 != iVar20);
        }
        recovered_100050a0(pvVar5);
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
    uVar7 = recovered_100150e0((int *)&local_74,(int *)local_14);
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
    local_40 = recovered_10005040(local_54);
    recovered_100050a0((void *)0x0);
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
          recovered_100019c0(local_40,(void *)((int)local_5c + (int)local_68),local_54);
          local_1c = (uint *)((int)local_1c + 1);
          local_5c = local_14;
          local_a8 = 4;
          uVar7 = recovered_100151e0((uint)*local_40,(void *)*param_4,(int)local_1c,0,(uint)local_20
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
                recovered_100019c0(local_40,(void *)((int)local_5c + (int)local_68),local_54);
                local_5c = local_24;
                local_a8 = 6;
                uVar7 = recovered_100151e0((uint)*local_40,
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
        puVar11 = recovered_10005040((uint)local_20);
        recovered_100050a0((void *)0x0);
        puVar9 = (uint *)0x0;
        do {
          *(undefined1 *)((int)puVar11 + (int)puVar9) = 0;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while (local_20 != puVar9);
        local_a8 = 8;
        puVar9 = recovered_10005040((uint)local_20);
        recovered_100050a0((void *)0x0);
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
          recovered_100019c0(local_40,(void *)((int)local_5c + (int)local_68),local_54);
          local_5c = local_14;
          local_a8 = 10;
          uVar7 = recovered_100151e0((uint)*local_40,local_18,(int)local_4c,(int)local_1c,
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
                recovered_100019c0(puVar10,(void *)((uint)*(byte *)((int)local_18 + (int)puVar11) *
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
              recovered_100019c0((void *)(iVar25 + local_2c * (int)local_14 * 4),local_18,
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
      recovered_100050a0(puVar9);
      recovered_100050a0(puVar11);
    }
    recovered_100050a0(local_40);
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
      pvVar6 = recovered_10005040(uVar23);
      pvVar5 = (void *)*param_4;
      iVar25 = param_4[1];
      if (iVar25 != 0) {
        iVar20 = 0;
        do {
          *(undefined1 *)((int)pvVar6 + iVar20) = *(undefined1 *)((int)pvVar5 + iVar20);
          iVar20 = iVar20 + 1;
        } while (iVar25 != iVar20);
      }
      recovered_100050a0(pvVar5);
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
    uVar7 = recovered_100150e0((int *)&local_74,(int *)local_14);
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
          local_58 = recovered_10005040((uint)local_50);
          recovered_100050a0((void *)0x0);
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
            puVar9 = recovered_10005040((uint)local_4c);
            recovered_100050a0((void *)0x0);
            local_20 = (uint *)(local_4c + (local_4c == (byte *)0x0));
            puVar11 = (uint *)0x0;
            do {
              *(undefined1 *)((int)puVar9 + (int)puVar11) = 0;
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (local_20 != puVar11);
            local_a8 = 0x10;
            puVar11 = recovered_10005040((uint)local_4c);
            recovered_100050a0((void *)0x0);
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
              recovered_100050a0(local_30);
              recovered_100050a0(puVar10);
              recovered_100050a0(local_58);
              uVar22 = 0;
              goto LAB_1000c397;
            }
            local_a8 = 0x11;
            local_20 = (uint *)(local_50 + (int)local_5c);
            recovered_100019c0(local_58,(void *)((int)local_5c + (int)local_68),(uint)local_50);
            local_5c = local_20;
            local_a8 = 0x12;
            uVar7 = recovered_100151e0((uint)*local_58,local_30,(int)pbVar8,(int)local_1c,
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
                recovered_100019c0(dst,(void *)((int)(uint)(byte)*puVar9 * 4 + *(int *)param_3),4);
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
                  recovered_100019c0(local_1c,puVar9,4);
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
          recovered_100050a0(puVar10);
          recovered_100050a0(local_30);
          recovered_100050a0(local_58);
          puVar9 = local_24;
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != 7);
    uVar22 = (uint)(local_5c == local_64);
  }
LAB_1000c397:
  local_64 = (uint *)0x0;
  recovered_100050a0(local_68);
  local_70 = 0;
  recovered_100050a0(local_74);
LAB_1000c3bb:
  recovered_100054c0(&local_ac);
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
#undef local_b4
#undef local_ac
#undef local_a8
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4f0
 */

void recovered_1000c4f0(int in_ECX)

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
      recovered_100050a0(*(void **)(iVar1 + -4 + iVar2));
      iVar2 = iVar2 + -0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(in_ECX + 0x50) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x40));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x34));
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x28));
  return;
}


#undef DAT_10016e6c
#define DAT_10016e6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf5cU)))
#undef LAB_1000c7a5
#define LAB_1000c7a5 (*(uint8_t *)(0x1000c7a5U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_24 (*(uint ******* *)(frame + 220))
#define local_20 (*(uint ******* *)(frame + 224))
#define local_1c (*(int * *)(frame + 228))
#define local_18 (*(uint ******* *)(frame + 232))
#define local_11 (*(bool *)(frame + 239))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c580
 */

uint recovered_1000c580(undefined4 *param_1,undefined4 *param_2)

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
  recovered_100050a0((void *)param_2[2]);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  recovered_100050a0((void *)0x0);
  local_34 = auStackY_ec + 0x80;
  local_44 = PTR_recovered_10004fe0_10017004;
  local_40 = &DAT_10016e6c;
  local_38 = &LAB_1000c7a5;
  local_3c = auStackY_ec + 0xe8;
  recovered_100054a0(&local_5c);
  if (param_1 == (undefined4 *)0x0) {
LAB_1000c668:
    pppppppuVar3 = (uint *******)0x0;
  }
  else {
    local_18 = (uint *******)0x0;
    local_58 = 1;
    piVar1 = recovered_10003ff0((int)param_1,((uintptr_t)pf_module_state+0xe4eU));
    if (piVar1 == (int *)0x0) goto LAB_1000c668;
    local_18 = (uint *******)0x0;
    local_58 = 2;
    local_1c = piVar1;
    iVar2 = recovered_10004890(piVar1,0,2);
    if (iVar2 != 0) {
LAB_1000c64c:
      local_18 = (uint *******)0x0;
      local_58 = 7;
      recovered_10004430(local_1c);
      uVar6 = 0;
      pppppppuVar3 = (uint *******)0x0;
      goto LAB_1000c66c;
    }
    local_18 = (uint *******)0x0;
    local_58 = 3;
    pppppppuVar3 = (uint *******)recovered_10004910((int)local_1c);
    if ((int)pppppppuVar3 < 0) goto LAB_1000c64c;
    local_18 = (uint *******)0x0;
    local_58 = 4;
    local_24 = pppppppuVar3;
    iVar2 = recovered_10004890(local_1c,0,0);
    if (iVar2 != 0) goto LAB_1000c64c;
    if (local_24 == (uint *******)0x0) {
      local_11 = true;
      local_20 = (uint *******)0x0;
    }
    else {
      local_18 = (uint *******)0x0;
      local_58 = 5;
      pppppppuVar4 = recovered_10005040((uint)local_24);
      piVar1 = local_1c;
      pppppppuVar3 = local_24;
      recovered_100050a0((void *)0x0);
      pppppppuVar5 = (uint *******)0x0;
      do {
        *(undefined1 *)((int)pppppppuVar4 + (int)pppppppuVar5) = 0;
        pppppppuVar5 = (uint *******)((int)pppppppuVar5 + 1);
      } while (pppppppuVar3 != pppppppuVar5);
      local_58 = 6;
      local_20 = pppppppuVar4;
      local_18 = pppppppuVar4;
      pppppppuVar3 = (uint *******)
                     recovered_10004500((undefined1 *)pppppppuVar4,1,(int)pppppppuVar3,piVar1);
      local_11 = pppppppuVar3 == local_24;
    }
    local_58 = 8;
    local_18 = local_20;
    iVar2 = recovered_10004430(local_1c);
    pppppppuVar3 = local_20;
    if ((local_11 & iVar2 == 0) != 0) {
      local_18 = local_20;
      local_58 = 9;
      uVar6 = recovered_100060a0(local_20,local_24,param_2);
      pppppppuVar3 = local_20;
      goto LAB_1000c66c;
    }
  }
  uVar6 = 0;
LAB_1000c66c:
  recovered_100050a0(pppppppuVar3);
  recovered_100054c0(&local_5c);
  return uVar6;
}

#undef DAT_10016e6c
#undef LAB_1000c7a5
#undef PTR_recovered_10004fe0_10017004
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef auStackY_ec

/* Native PNG stream construction. Pooka's Free Software License. */
#include "png_encode.h"
int recovered_1000c7e0(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_png_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d380
 */

bool recovered_1000d380(uint *in_ECX,int in_EDX,int param_3,uint param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_3 != 0 || param_4 == 0) {
    local_18 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
    uVar1 = recovered_10014cc0(0,(uchar *)in_EDX,4);
    if (param_4 != 0) {
      uVar1 = recovered_10014cc0(uVar1,(uchar *)param_3,param_4);
    }
    local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    iVar2 = recovered_10004730((int)&local_18,1,4,in_ECX);
    if (((iVar2 == 4) && (iVar2 = recovered_10004730(in_EDX,1,4,in_ECX), iVar2 == 4)) &&
       ((param_4 == 0 || (uVar1 = recovered_10004730(param_3,1,param_4,in_ECX), uVar1 == param_4))))
    {
      iVar2 = recovered_10004730((int)&local_14,1,4,in_ECX);
      return iVar2 == 4;
    }
  }
  return false;
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d440
 */

void recovered_1000d440(int in_stack_00000004,int in_stack_00000008,uint in_stack_0000000c,
                       char *in_stack_00000010)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000c7e0(in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}


#undef DAT_10016ea0
#define DAT_10016ea0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf90U)))
#undef LAB_1000d7a2
#define LAB_1000d7a2 (*(uint8_t *)(0x1000d7a2U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define auStackY_16c (*(undefined1 (*)[128])(frame + 20))
#define local_d8 (*(undefined4 *)(frame + 168))
#define local_d4 (*(undefined1 *)(frame + 172))
#define local_d3 (*(undefined1 *)(frame + 173))
#define local_d2 (*(undefined1 *)(frame + 174))
#define local_d1 (*(undefined1 *)(frame + 175))
#define local_d0 (*(undefined1 *)(frame + 176))
#define local_cf (*(undefined1 *)(frame + 177))
#define local_ce (*(undefined1 *)(frame + 178))
#define local_cd (*(undefined1 *)(frame + 179))
#define local_cc (*(undefined4 *)(frame + 180))
#define local_c8 (*(undefined4 *)(frame + 184))
#define local_c4 (*(undefined1 *)(frame + 188))
#define local_c3 (*(undefined1 *)(frame + 189))
#define local_c2 (*(undefined1 *)(frame + 190))
#define local_c1 (*(undefined1 *)(frame + 191))
#define local_c0 (*(undefined4 *)(frame + 192))
#define local_bc (*(undefined4 *)(frame + 196))
#define local_b8 (*(undefined1 (*)[10])(frame + 200))
#define local_ae (*(undefined1 *)(frame + 210))
#define local_ab (*(undefined1 *)(frame + 213))
#define local_a8 (*(undefined1 *)(frame + 216))
#define local_a4 (*(undefined1 *)(frame + 220))
#define local_a1 (*(undefined4 *)(frame + 223))
#define local_9d (*(undefined1 *)(frame + 227))
#define local_6c (*(undefined4 *)(frame + 276))
#define local_68 (*(undefined4 *)(frame + 280))
#define local_54 (*(undefined * *)(frame + 300))
#define local_50 (*(undefined * *)(frame + 304))
#define local_4c (*(undefined1 * *)(frame + 308))
#define local_48 (*(undefined1 * *)(frame + 312))
#define local_44 (*(undefined1 * *)(frame + 316))
#define local_34 (*(int *)(frame + 332))
#define local_30 (*(int *)(frame + 336))
#define local_2a (*(undefined2 *)(frame + 342))
#define local_28 (*(undefined1 *)(frame + 344))
#define local_27 (*(undefined1 *)(frame + 345))
#define local_26 (*(undefined1 *)(frame + 346))
#define local_25 (*(undefined1 *)(frame + 347))
#define local_24 (*(undefined4 *)(frame + 348))
#define local_20 (*(undefined4 *)(frame + 352))
#define local_1c (*(uint * *)(frame + 356))
#define local_18 (*(uint *)(frame + 360))
#define local_14 (*(undefined4 *)(frame + 364))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d450
 */

byte recovered_1000d450(undefined4 *param_1,int param_2,uint param_3,uint param_4)

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
  recovered_100054a0(&local_6c);
  bVar4 = 0;
  if ((((param_3 < 0x40000000) && (param_1 != (undefined4 *)0x0)) && (param_2 != 0)) &&
     ((0 < (int)param_3 && (0 < (int)param_4)))) {
    uVar5 = param_3 * 4;
    if (((int)((ulonglong)uVar5 * (ulonglong)param_4 >> 0x20) == 0) &&
       (uVar2 = uVar5 * param_4, uVar2 < 0xffffff86)) {
      local_68 = 0xffffffff;
      local_18 = uVar5;
      local_1c = recovered_10003ff0((int)param_1,((uintptr_t)pf_module_state+0xe06U));
      if (local_1c != (uint *)0x0) {
        local_24 = 0;
        local_2a = 0x4d42;
        iVar3 = uVar2 + 0x7a;
        local_28 = (undefined1)iVar3;
        local_27 = (undefined1)((uint)iVar3 >> 8);
        local_26 = (undefined1)((uint)iVar3 >> 0x10);
        local_25 = (undefined1)((uint)iVar3 >> 0x18);
        local_20 = 0x7a;
        recovered_10001aa0(local_b8,0x4c);
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
        iVar3 = recovered_10004730((int)&local_2a,1,0xe,local_1c);
        uVar5 = 0;
        bVar7 = false;
        if (iVar3 == 0xe) {
          local_68 = 0xffffffff;
          iVar3 = recovered_10004730((int)&local_d8,1,0x6c,puVar1);
          bVar7 = iVar3 == 0x6c;
        }
        uVar2 = local_18;
        local_68 = 0xffffffff;
        local_14 = recovered_10005040(local_18);
        recovered_100050a0((void *)0x0);
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
            uVar2 = recovered_10004730((int)local_14,1,local_18,local_1c);
            uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar2 == local_18);
            if (uVar2 != local_18) break;
            iVar3 = local_30 + 1;
            iVar6 = local_34 + local_18;
          } while (iVar3 < (int)param_4);
        }
        local_68 = 1;
        local_18 = uVar5;
        iVar3 = recovered_10004430((int *)local_1c);
        bVar4 = (byte)local_18 & iVar3 == 0;
        recovered_100050a0(local_14);
        goto LAB_1000d78d;
      }
    }
    bVar4 = 0;
  }
LAB_1000d78d:
  recovered_100054c0(&local_6c);
  return bVar4;
}

#undef DAT_10016ea0
#undef LAB_1000d7a2
#undef PTR_recovered_10004fe0_10017004
#undef auStackY_16c
#undef local_d8
#undef local_d4
#undef local_d3
#undef local_d2
#undef local_d1
#undef local_d0
#undef local_cf
#undef local_ce
#undef local_cd
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c3
#undef local_c2
#undef local_c1
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_ae
#undef local_ab
#undef local_a8
#undef local_a4
#undef local_a1
#undef local_9d
#undef local_6c
#undef local_68
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_34
#undef local_30
#undef local_2a
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10016ea8
#define DAT_10016ea8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf98U)))
#undef LAB_1000da31
#define LAB_1000da31 (*(uint8_t *)(0x1000da31U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define auStackY_fc (*(undefined1 (*)[128])(frame + 20))
#define local_6c (*(undefined4 *)(frame + 164))
#define local_68 (*(undefined4 *)(frame + 168))
#define local_54 (*(undefined * *)(frame + 188))
#define local_50 (*(undefined * *)(frame + 192))
#define local_4c (*(undefined1 * *)(frame + 196))
#define local_48 (*(undefined1 * *)(frame + 200))
#define local_44 (*(undefined1 * *)(frame + 204))
#define local_38 (*(undefined4 *)(frame + 216))
#define local_34 (*(undefined4 *)(frame + 220))
#define local_30 (*(undefined4 *)(frame + 224))
#define local_2c (*(undefined1 *)(frame + 228))
#define local_2b (*(undefined1 *)(frame + 229))
#define local_2a (*(undefined1 *)(frame + 230))
#define local_29 (*(undefined1 *)(frame + 231))
#define local_28 (*(undefined2 *)(frame + 232))
#define local_24 (*(int *)(frame + 236))
#define local_20 (*(uint *)(frame + 240))
#define local_1c (*(uint * *)(frame + 244))
#define local_18 (*(int *)(frame + 248))
#define local_14 (*(undefined4 *)(frame + 252))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7e0
 */

byte recovered_1000d7e0(undefined4 *param_1,int param_2,int param_3,int param_4)

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
  recovered_100054a0(&local_6c);
  if ((0 < param_4 && 0 < param_3) && (param_2 != 0 && param_1 != (undefined4 *)0x0)) {
    local_68 = 0xffffffff;
    puVar1 = recovered_10003ff0((int)param_1,((uintptr_t)pf_module_state+0xe06U));
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
      iVar2 = recovered_10004730((int)&local_38,1,0x12,puVar1);
      local_20 = param_3 * 4;
      local_14 = (void *)0x0;
      if (local_20 != 0) {
        local_68 = 0xffffffff;
        local_14 = recovered_10005040(local_20);
        recovered_100050a0((void *)0x0);
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
            uVar3 = recovered_10004730((int)local_14,1,local_20,local_1c);
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
        iVar2 = recovered_10004730(((uintptr_t)pf_module_state+0xb54U),1,0x1a,local_1c);
        local_18 = CONCAT31((int3)((uint)extraout_ECX >> 8),iVar2 == 0x1a);
      }
LAB_1000d9f2:
      local_68 = 3;
      iVar2 = recovered_10004430((int *)local_1c);
      bVar5 = (byte)local_18 & iVar2 == 0;
      recovered_100050a0(local_14);
      goto LAB_1000da1f;
    }
  }
  bVar5 = 0;
LAB_1000da1f:
  recovered_100054c0(&local_6c);
  return bVar5;
}

#undef DAT_10016ea8
#undef LAB_1000da31
#undef PTR_recovered_10004fe0_10017004
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
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_10015f10
#define DAT_10015f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10016178
#define DAT_10016178 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x268U)))
#undef DAT_10016180
#define DAT_10016180 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_10016188
#define DAT_10016188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef DAT_10016190
#define DAT_10016190 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_10016198
#define DAT_10016198 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_100161a0
#define DAT_100161a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_100161a8
#define DAT_100161a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_100161c4
#define DAT_100161c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b4U)))
#undef DAT_100166d0
#define DAT_100166d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c0U)))
#undef DAT_10016eb4
#define DAT_10016eb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfa4U)))
#undef LAB_1000ea2a
#define LAB_1000ea2a (*(uint8_t *)(0x1000ea2aU))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#undef _DAT_10015f10
#define _DAT_10015f10 (*(float *)(((uintptr_t)pf_module_state + 0x0U)))
#undef _DAT_10016178
#define _DAT_10016178 (*(double *)(((uintptr_t)pf_module_state + 0x268U)))
#undef _DAT_10016180
#define _DAT_10016180 (*(double *)(((uintptr_t)pf_module_state + 0x270U)))
#undef _DAT_10016188
#define _DAT_10016188 (*(double *)(((uintptr_t)pf_module_state + 0x278U)))
#undef _DAT_10016190
#define _DAT_10016190 (*(double *)(((uintptr_t)pf_module_state + 0x280U)))
#undef _DAT_10016198
#define _DAT_10016198 (*(double *)(((uintptr_t)pf_module_state + 0x288U)))
#undef _DAT_100161a0
#define _DAT_100161a0 (*(double *)(((uintptr_t)pf_module_state + 0x290U)))
#undef _DAT_100161a8
#define _DAT_100161a8 (*(double *)(((uintptr_t)pf_module_state + 0x298U)))
#undef _DAT_100161c4
#define _DAT_100161c4 (*(float *)(((uintptr_t)pf_module_state + 0x2b4U)))
#define local_4e4 (*(undefined2 *)(frame + 5036))
#define local_2ec (*(undefined4 *)(frame + 5540))
#define local_2e8 (*(undefined1 * *)(frame + 5544))
#define local_2e4 (*(undefined4 *)(frame + 5548))
#define local_2e0 (*(undefined1 *)(frame + 5552))
#define local_ec (*(double *)(frame + 6052))
#define local_e4 (*(int (*)[4])(frame + 6060))
#define local_d4 (*(int *)(frame + 6076))
#define local_d0 (*(int *)(frame + 6080))
#define local_cc (*(int *)(frame + 6084))
#define local_c8 (*(undefined1 * *)(frame + 6088))
#define local_c4 (*(undefined1 * *)(frame + 6092))
#define local_c0 (*(undefined4 *)(frame + 6096))
#define local_bc (*(undefined1 * *)(frame + 6100))
#define local_b8 (*(undefined1 * *)(frame + 6104))
#define local_b4 (*(undefined4 *)(frame + 6108))
#define local_b0 (*(undefined1 * *)(frame + 6112))
#define local_ac (*(undefined1 * *)(frame + 6116))
#define local_a8 (*(undefined4 *)(frame + 6120))
#define local_a4 (*(undefined1 * *)(frame + 6124))
#define local_a0 (*(undefined1 * *)(frame + 6128))
#define local_9c (*(undefined4 *)(frame + 6132))
#define local_98 (*(undefined1 * *)(frame + 6136))
#define local_94 (*(void * *)(frame + 6140))
#define local_90 (*(undefined1 * *)(frame + 6144))
#define local_8c (*(undefined4 *)(frame + 6148))
#define local_88 (*(byte *)(frame + 6152))
#define local_84 (*(int *)(frame + 6156))
#define local_7e (*(ushort *)(frame + 6162))
#define local_7c (*(ushort *)(frame + 6164))
#define local_7a (*(ushort *)(frame + 6166))
#define local_78 (*(undefined1 * *)(frame + 6168))
#define local_74 (*(undefined1 * *)(frame + 6172))
#define local_70 (*(undefined1 * *)(frame + 6176))
#define local_6c (*(undefined1 * *)(frame + 6180))
#define local_68 (*(int *)(frame + 6184))
#define local_64 (*(undefined4 *)(frame + 6188))
#define local_60 (*(undefined4 *)(frame + 6192))
#define local_4c (*(undefined * *)(frame + 6212))
#define local_48 (*(undefined * *)(frame + 6216))
#define local_44 (*(undefined1 * *)(frame + 6220))
#define local_40 (*(undefined1 * *)(frame + 6224))
#define local_3c (*(undefined1 * *)(frame + 6228))
#define local_30 (*(undefined1 * *)(frame + 6240))
#define local_2c (*(undefined1 * *)(frame + 6244))
#define local_28 (*(undefined1 * *)(frame + 6248))
#define local_24 (*(undefined1 * *)(frame + 6252))
#define local_20 (*(undefined1 * *)(frame + 6256))
#define local_1c (*(uint * *)(frame + 6260))
#define local_18 (*(undefined1 * *)(frame + 6264))
#define local_14 (*(undefined1 * *)(frame + 6268))
#define auStackY_187c (*(undefined1 (*)[128])(frame + 20))
#define uStack_2df (*(undefined1 *)(frame + 5553))
#define uStack_2de (*(undefined1 *)(frame + 5554))
#define local_17ec (*(uchar (*)[2048])(frame + 164))
#define local_fec (*(uint (*)[512])(frame + 2212))
#define local_7ec (*(int (*)[64])(frame + 4260))
#define local_6ec (*(undefined4 * *)(frame + 4516))
#define local_6e8 (*(undefined4 *)(frame + 4520))
#define local_4ec (*(undefined4 *)(frame + 5028))
#define local_4e8 (*(undefined1 * *)(frame + 5032))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte recovered_1000da70(int param_1,int param_2,int param_3,int param_4)

{pf_png32_init();return (byte)pf_png32_1000e770(param_1,param_2,param_3,param_4);}

#undef DAT_10015f10
#undef DAT_10016178
#undef DAT_10016180
#undef DAT_10016188
#undef DAT_10016190
#undef DAT_10016198
#undef DAT_100161a0
#undef DAT_100161a8
#undef DAT_100161c4
#undef DAT_100166d0
#undef DAT_10016eb4
#undef LAB_1000ea2a
#undef PTR_recovered_10004fe0_10017004
#undef _DAT_10015f10
#undef _DAT_10016178
#undef _DAT_10016180
#undef _DAT_10016188
#undef _DAT_10016190
#undef _DAT_10016198
#undef _DAT_100161a0
#undef _DAT_100161a8
#undef _DAT_100161c4
#undef local_4e4
#undef local_2ec
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef local_ec
#undef local_e4
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
#undef local_7e
#undef local_7c
#undef local_7a
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
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
#undef auStackY_187c
#undef uStack_2df
#undef uStack_2de
#undef local_17ec
#undef local_fec
#undef local_7ec
#undef local_6ec
#undef local_6e8
#undef local_4ec
#undef local_4e8

#undef DAT_10016f04
#define DAT_10016f04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xff4U)))
#undef LAB_10010218
#define LAB_10010218 (*(uint8_t *)(0x10010218U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#undef str_10016d67
#define str_10016d67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe57U)))
#define auStackY_16c (*(undefined1 (*)[128])(frame + 20))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb40
 */

byte recovered_1000eb40(char *param_1,char *param_2,char *param_3,uint param_4)

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
  local_5c = PTR_recovered_10004fe0_10017004;
  local_a4 = (uint *)param_2;
  local_58 = &DAT_10016f04;
  local_50 = &LAB_10010218;
  recovered_100054a0(&local_74);
  if ((0 < (int)param_4 && 0 < (int)param_3) && (param_2 != (char *)0x0 && param_1 != (char *)0x0))
  {
    uVar15 = (uint)(param_3 + 0x3f) >> 6;
    uVar22 = param_4 + 0x3f >> 6;
    if (((int)((ulonglong)uVar15 * (ulonglong)uVar22 >> 0x20) == 0) &&
       (local_2c = (uint *)(uVar22 * uVar15), local_2c < (uint *)0x40000000)) {
      local_70 = 1;
      puVar3 = recovered_10005040(0x10);
      recovered_100050a0((void *)0x0);
      *puVar3 = 0x706d6967;
      puVar3[1] = 0x66637820;
      puVar3[2] = 0x30307620;
      *(undefined2 *)(puVar3 + 3) = 0x33;
      local_70 = 2;
      local_18 = puVar3;
      puVar4 = recovered_10005040(0x20);
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
      recovered_100050a0(local_18);
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
      puVar4 = recovered_10005040(0x40);
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
      recovered_100050a0(local_18);
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
      puVar5 = recovered_10005040((uint)local_14);
      iVar6 = -0x3f;
      do {
        *(undefined1 *)((int)puVar5 + iVar6 + 0x3f) = *(undefined1 *)((int)local_18 + iVar6 + 0x3f);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      recovered_100050a0(local_18);
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
        puVar5 = recovered_10005040((uint)local_14);
        iVar6 = -0x43;
        do {
          *(undefined1 *)((int)puVar5 + iVar6 + 0x43) =
               *(undefined1 *)((int)local_18 + iVar6 + 0x43);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        recovered_100050a0(local_18);
      }
      *(undefined4 *)((int)puVar5 + 0x43) = 0x1000000;
      local_70 = 6;
      local_28 = puVar5;
      local_18 = puVar5;
      puVar5 = (uint *)recovered_10001c10(str_10016d67);
      puVar7 = local_14;
      if (local_14 < (uint *)0x4b) {
        do {
          local_20 = puVar7;
          puVar7 = (uint *)((int)local_20 * 2);
        } while (local_20 < (uint *)0x4b);
        local_28 = local_18;
        local_70 = 7;
        local_1c = puVar5;
        puVar7 = recovered_10005040((uint)local_20);
        puVar5 = local_1c;
        iVar6 = -0x47;
        do {
          *(undefined1 *)((int)puVar7 + iVar6 + 0x47) =
               *(undefined1 *)((int)local_18 + iVar6 + 0x47);
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
        recovered_100050a0(local_18);
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
          puVar7 = recovered_10005040((uint)local_14);
          puVar9 = local_18;
          puVar5 = local_1c;
          iVar6 = -0x4b;
          do {
            *(undefined1 *)((int)puVar7 + iVar6 + 0x4b) =
                 *(undefined1 *)((int)local_24 + iVar6 + 0x4b);
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0);
          recovered_100050a0(local_24);
        }
        puVar8 = (uint *)0x0;
        do {
          *(undefined1 *)((int)puVar7 + 0x4b + (int)puVar8) =
               *(undefined1 *)((int)puVar8 + ((uintptr_t)pf_module_state+0xe57U));
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
          puVar7 = recovered_10005040((uint)puVar5);
          puVar9 = local_18;
          if (local_20 != (uint *)0x0) {
            puVar5 = (uint *)0x0;
            do {
              *(undefined1 *)((int)puVar7 + (int)puVar5) =
                   *(undefined1 *)((int)local_24 + (int)puVar5);
              puVar5 = (uint *)((int)puVar5 + 1);
            } while (local_20 != puVar5);
          }
          recovered_100050a0(local_24);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar9 = local_18;
        if (local_24 != (uint *)0x0) {
          iVar6 = 0;
          do {
            *(undefined1 *)((int)puVar7 + iVar6) = *(undefined1 *)((int)local_1c + iVar6);
            iVar6 = iVar6 + 1;
          } while (local_24 != (uint *)iVar6);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_24 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050a0(local_24);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_1c != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_20 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_1c != puVar9);
        }
        recovered_100050a0(local_20);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        local_34 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        local_34 = local_18;
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_24;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_24;
        if (local_24 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_20 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_24 != puVar9);
        }
        recovered_100050a0(local_20);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_24;
        if (local_34 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_34 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_20 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_20 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar5 = local_18;
        if (local_24 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar9) =
                 *(undefined1 *)((int)local_1c + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_24 != puVar9);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar9 = local_24;
        if (local_20 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_1c + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_20 != puVar5);
        }
        recovered_100050a0(local_1c);
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
        puVar7 = recovered_10005040((uint)local_14);
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
        recovered_100050a0(local_20);
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
        puVar7 = recovered_10005040((uint)local_14);
        puVar9 = local_24;
        if (local_34 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_34 != puVar5);
        }
        recovered_100050a0(local_20);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_1c != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_1c != puVar5);
        }
        recovered_100050a0(local_20);
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
        puVar7 = recovered_10005040((uint)local_14);
        if (local_24 != (uint *)0x0) {
          puVar5 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar7 + (int)puVar5) =
                 *(undefined1 *)((int)local_20 + (int)puVar5);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (local_24 != puVar5);
        }
        recovered_100050a0(local_20);
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
        pvVar10 = recovered_10005040((int)local_2c * 4);
        recovered_100050a0((void *)0x0);
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
            puVar7 = recovered_10005040((uint)local_14);
            puVar23 = local_38;
            if (local_38 != (uint *)0x0) {
              puVar9 = (uint *)0x0;
              do {
                *(undefined1 *)((int)puVar7 + (int)puVar9) =
                     *(undefined1 *)((int)puVar5 + (int)puVar9);
                puVar9 = (uint *)((int)puVar9 + 1);
              } while (local_38 != puVar9);
            }
            recovered_100050a0(puVar5);
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
        puVar5 = recovered_10005040((uint)local_14);
        if (local_18 != (uint *)0x0) {
          puVar9 = (uint *)0x0;
          do {
            *(undefined1 *)((int)puVar5 + (int)puVar9) = *(undefined1 *)((int)puVar7 + (int)puVar9);
            puVar9 = (uint *)((int)puVar9 + 1);
          } while (local_18 != puVar9);
        }
        recovered_100050a0(puVar7);
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
                  puVar7 = recovered_10005040((uint)local_14);
                  puVar5 = local_2c;
                  if (local_2c != (uint *)0x0) {
                    puVar9 = (uint *)0x0;
                    do {
                      *(undefined1 *)((int)puVar7 + (int)puVar9) =
                           *(undefined1 *)((int)puVar8 + (int)puVar9);
                      puVar9 = (uint *)((int)puVar9 + 1);
                    } while (local_2c != puVar9);
                  }
                  recovered_100050a0(puVar8);
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
      puVar5 = recovered_10003ff0((int)param_1,((uintptr_t)pf_module_state+0xe06U));
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
          puVar5 = (uint *)recovered_10004730((int)local_40,1,(int)local_2c,puVar5);
          local_18 = (uint *)CONCAT31((int3)((uint)puVar5 >> 8),puVar5 == local_2c);
          puVar5 = local_30;
        }
        local_70 = 0x28;
        iVar6 = recovered_10004430((int *)puVar5);
        bVar19 = (byte)local_18 & iVar6 == 0;
      }
      recovered_100050a0(local_3c);
      recovered_100050a0(local_40);
      goto LAB_1000ebc7;
    }
  }
  bVar19 = 0;
LAB_1000ebc7:
  recovered_100054c0(&local_74);
  return bVar19;
}

#undef DAT_10016f04
#undef LAB_10010218
#undef PTR_recovered_10004fe0_10017004
#undef str_10016d67
#undef auStackY_16c
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

/* Native REI stream construction. Pooka's Free Software License. */
#include "rei_encode.h"
int recovered_10010300(const char *name,const uint8_t *pixels,int width,int height){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x54)return 0;
 return pf_rei_write_rgba(name,pixels,width,height,
  (void *(*)(uint32_t))(uintptr_t)api[0x4c/4],
  (void (*)(void *))(uintptr_t)api[0x50/4],
  (int (*)(const char *,const void *,uint32_t))(uintptr_t)api[0x38/4]);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010800
 */

void recovered_10010800(int *param_1,uint param_2,undefined1 *param_3)

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
    pvVar3 = recovered_10005040(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050a0(pointer);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010890
 */

void recovered_10010890(int *param_1,uint param_2)

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
    pvVar2 = recovered_10005040(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050a0(pointer);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010920
 */

uint recovered_10010920(uint in_ECX,uint in_EDX)

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


#define local_14 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100109b0
 */

undefined4 recovered_100109b0(undefined4 *in_ECX,ushort *in_EDX)

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
    recovered_100019c0(&local_14,(void *)(uVar7 * 4 + *(int *)in_ECX[6]),4);
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
  recovered_100019c0((void *)((uVar6 * uVar7 + uVar5) * 4 + *(int *)in_ECX[10]),&local_14,4);
  piVar3 = (int *)*in_ECX;
  *piVar3 = *piVar3 + 1;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010bc0
 */

void recovered_10010bc0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  *(undefined4 *)(in_ECX + 0x4b8) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x4b4));
  iVar3 = *(int *)(in_ECX + 0x4ac);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x30 + -8;
    do {
      iVar1 = *(int *)(in_ECX + 0x4a8);
      *(undefined4 *)(iVar1 + iVar2) = 0;
      recovered_100050a0(*(void **)(iVar1 + -4 + iVar2));
      iVar2 = iVar2 + -0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(in_ECX + 0x4ac) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x4a8));
  *(undefined4 *)(in_ECX + 0x4a0) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x49c));
  *(undefined4 *)(in_ECX + 0x490) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x48c));
  *(undefined4 *)(in_ECX + 0x480) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x47c));
  *(undefined4 *)(in_ECX + 0x470) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x46c));
  *(undefined4 *)(in_ECX + 0x460) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x45c));
  *(undefined4 *)(in_ECX + 0x450) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x44c));
  *(undefined4 *)(in_ECX + 0x440) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x43c));
  *(undefined4 *)(in_ECX + 0x430) = 0;
  recovered_100050a0(*(void **)(in_ECX + 0x42c));
  return;
}


#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010d00
 */

undefined4 recovered_10010d00(int in_ECX,int in_EDX,uint param_3,undefined1 *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  void *pointer;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;

  *param_4 = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  recovered_100050a0(*(void **)(param_4 + 4));
  *(undefined4 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  recovered_100050a0((void *)0x0);
  uVar9 = 0;
  iVar6 = 1;
  uVar12 = 0;
  while( true ) {
    uVar3 = (uint)*(byte *)(in_ECX + -1 + iVar6);
    if (uVar3 != 0) {
      uVar7 = 0;
      local_14 = 0;
      if (uVar12 <= param_3) {
        local_14 = param_3 - uVar12;
      }
      do {
        if (uVar7 == local_14) {
          return 0;
        }
        bVar1 = *(byte *)(in_EDX + uVar12);
        uVar4 = *(uint *)(param_4 + 8);
        if (uVar4 == *(uint *)(param_4 + 0xc)) {
          uVar11 = 4;
          if (uVar4 != 0) {
            uVar11 = uVar4 * 2;
          }
          if (uVar4 < uVar11) {
            pvVar5 = recovered_10005040(uVar11 * 0xc);
            pointer = *(void **)(param_4 + 4);
            iVar8 = *(int *)(param_4 + 8);
            if (iVar8 != 0) {
              iVar10 = 0;
              do {
                *(undefined4 *)((int)pvVar5 + iVar10 + 8) =
                     *(undefined4 *)((int)pointer + iVar10 + 8);
                uVar2 = *(undefined4 *)((int)pointer + iVar10);
                *(undefined4 *)((int)pvVar5 + iVar10 + 4) =
                     *(undefined4 *)((int)pointer + iVar10 + 4);
                *(undefined4 *)((int)pvVar5 + iVar10) = uVar2;
                iVar10 = iVar10 + 0xc;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            recovered_100050a0(pointer);
            *(void **)(param_4 + 4) = pvVar5;
            *(uint *)(param_4 + 0xc) = uVar11;
            uVar4 = *(uint *)(param_4 + 8);
          }
        }
        iVar8 = *(int *)(param_4 + 4);
        *(uint *)(iVar8 + uVar4 * 0xc) = uVar9;
        *(int *)(iVar8 + 4 + uVar4 * 0xc) = iVar6;
        *(uint *)(iVar8 + 8 + uVar4 * 0xc) = (uint)bVar1;
        *(uint *)(param_4 + 8) = uVar4 + 1;
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
    uVar3 = 1 << ((byte)iVar6 & 0x1f);
    if (uVar3 < uVar9) break;
    uVar9 = uVar9 * 2;
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x11) {
      *param_4 = uVar12 == param_3;
      return CONCAT31((int3)(uVar3 >> 8),uVar12 == param_3);
    }
  }
  return 0;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010ea0
 */

void recovered_10010ea0(int *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;

  bVar11 = 0;
  uVar2 = in_ECX[1];
  if (uVar2 == in_ECX[2]) {
    uVar5 = 4;
    if (uVar2 != 0) {
      uVar5 = uVar2 * 2;
    }
    if (uVar2 < uVar5) {
      pvVar1 = recovered_10005040(uVar5 * 0x30);
      if (in_ECX[1] != 0) {
        uVar2 = 0;
        iVar7 = 0x2c;
        do {
          iVar3 = *in_ECX;
          puVar8 = (undefined4 *)(iVar3 + -0x2c + iVar7);
          puVar9 = (undefined4 *)((int)pvVar1 + iVar7 + -0x2c);
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          *(undefined4 *)((int)pvVar1 + iVar7 + -8) = *(undefined4 *)(iVar3 + -8 + iVar7);
          *(undefined4 *)((int)pvVar1 + iVar7 + -4) = *(undefined4 *)(iVar3 + -4 + iVar7);
          *(undefined4 *)((int)pvVar1 + iVar7) = *(undefined4 *)(iVar3 + iVar7);
          *(undefined4 *)(iVar3 + -8 + iVar7) = 0;
          *(undefined4 *)(iVar3 + iVar7) = 0;
          *(undefined4 *)(iVar3 + -4 + iVar7) = 0;
          recovered_100050a0((void *)0x0);
          uVar2 = uVar2 + 1;
          iVar7 = iVar7 + 0x30;
        } while (uVar2 < (uint)in_ECX[1]);
      }
      recovered_100050a0((void *)*in_ECX);
      *in_ECX = (int)pvVar1;
      in_ECX[2] = uVar5;
      uVar2 = in_ECX[1];
    }
  }
  iVar7 = *in_ECX;
  iVar3 = uVar2 * 0x30;
  puVar8 = (undefined4 *)(iVar7 + iVar3);
  puVar9 = in_EDX;
  puVar10 = puVar8;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  *(undefined4 *)(iVar7 + 0x24 + iVar3) = 0;
  *(undefined4 *)(iVar7 + 0x28 + iVar3) = 0;
  *(undefined4 *)(iVar7 + 0x2c + iVar3) = 0;
  uVar2 = in_EDX[10];
  uVar5 = 0;
  if (uVar2 != 0) {
    pvVar4 = recovered_10005040(uVar2);
    pvVar1 = (void *)puVar8[9];
    iVar7 = puVar8[10];
    if (iVar7 != 0) {
      iVar3 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar3) = *(undefined1 *)((int)pvVar1 + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar7 != iVar3);
    }
    recovered_100050a0(pvVar1);
    puVar8[9] = pvVar4;
    puVar8[0xb] = uVar2;
    if (in_EDX[10] != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(puVar8[9] + uVar2) = *(undefined1 *)(in_EDX[9] + uVar2);
        uVar2 = uVar2 + 1;
        uVar5 = in_EDX[10];
      } while (uVar2 < uVar5);
    }
  }
  puVar8[10] = uVar5;
  in_ECX[1] = in_ECX[1] + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011030
 */

void recovered_10011030(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  uVar3 = param_1[1];
  if (uVar3 == param_1[2]) {
    uVar4 = 4;
    if (uVar3 != 0) {
      uVar4 = uVar3 * 2;
    }
    if (uVar3 < uVar4) {
      pvVar2 = recovered_10005040(uVar4 * 4);
      pointer = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          *(undefined4 *)((int)pvVar2 + iVar5 * 4) = *(undefined4 *)((int)pointer + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      recovered_100050a0(pointer);
      *param_1 = (int)pvVar2;
      param_1[2] = uVar4;
      uVar3 = param_1[1];
    }
  }
  *(undefined4 *)(*param_1 + uVar3 * 4) = *param_2;
  param_1[1] = uVar3 + 1;
  return;
}


#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100110c0
 */

undefined8 recovered_100110c0(int in_ECX,uint in_EDX,uint *param_3,int param_4)

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
            pvVar4 = recovered_10005040(uVar8);
            pointer = *(void **)(param_4 + 0x18);
            iVar1 = *(int *)(param_4 + 0x1c);
            if (iVar1 != 0) {
              iVar9 = 0;
              do {
                *(undefined1 *)((int)pvVar4 + iVar9) = *(undefined1 *)((int)pointer + iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar1 != iVar9);
            }
            recovered_100050a0(pointer);
            *(void **)(param_4 + 0x18) = pvVar4;
            *(uint *)(param_4 + 0x20) = uVar8;
            uVar6 = *(uint *)(param_4 + 0x1c);
          }
          while (uVar6 < uVar8) {
            *(undefined1 *)(*(int *)(param_4 + 0x18) + uVar6) = 0;
            uVar6 = *(int *)(param_4 + 0x1c) + 1;
            *(uint *)(param_4 + 0x1c) = uVar6;
          }
          recovered_100019c0(*(void **)(param_4 + 0x18),puVar3 + 1,uVar6);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100112c0
 */

undefined4 recovered_100112c0(int in_ECX,uint in_EDX,uint *param_3,uint param_4,uint *param_5)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011330
 */

void recovered_10011330(int *param_1,undefined4 *param_2)

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
      pvVar3 = recovered_10005040(uVar5 * 8);
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
      recovered_100050a0(pointer);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113d0
 */

void recovered_100113d0(int *param_1,uint param_2,undefined1 *param_3)

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
    pvVar2 = recovered_10005040(param_2);
    pointer = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)pointer + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_100050a0(pointer);
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


#undef DAT_10015f90
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100161c8
#define DAT_100161c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef _DAT_100161c8
#define _DAT_100161c8 (*(float *)(((uintptr_t)pf_module_state + 0x2b8U)))
#define local_20 (*(uint *)(frame + 48))
#define local_1c (*(int *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
#define local_34 (*(float (*)[2])(frame + 28))
#define local_2c (*(uint *)(frame + 36))
#define local_28 (*(int *)(frame + 40))
#define local_24 (*(ushort *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011460
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10011460(int in_ECX,uint in_EDX,int param_3,uint param_4,int param_5,uint *param_6)

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
                recovered_100019c0(local_34,&local_2c,4);
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
              uVar3 = recovered_100112c0(local_18,in_EDX,&local_2c,local_20,(uint *)local_34);
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
#undef DAT_100161c8
#undef _DAT_100161c8
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_34
#undef local_2c
#undef local_28
#undef local_24

#undef DAT_10016b1c
#define DAT_10016b1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0cU)))
#undef DAT_10016f6c
#define DAT_10016f6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x105cU)))
#undef LAB_10012010
#define LAB_10012010 (*(uint8_t *)(0x10012010U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_18 (*(uint *)(frame + 376))
#define local_14 (*(undefined4 *)(frame + 380))
#define auStackY_17c (*(undefined1 (*)[128])(frame + 20))
#define uStack_22 (*(undefined1 *)(frame + 366))
#define uStack_21 (*(undefined1 *)(frame + 367))
#define local_d4 (*(uint *)(frame + 188))
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
#define local_24 (*(undefined1 (*)[2])(frame + 364))
#define local_20 (*(uint *)(frame + 368))
#define local_1c (*(uint *)(frame + 372))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011810
 */

undefined4
recovered_10011810(int in_ECX,uint in_EDX,int param_3,uint *param_4,int *in_stack_0000000c)

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
  local_ac = PTR_recovered_10004fe0_10017004;
  local_a8 = &DAT_10016f6c;
  local_a0 = &LAB_10012010;
  local_30 = in_ECX;
  recovered_100054a0(&local_c4);
  local_14 = 0;
  local_28 = in_EDX;
  local_1c = uVar10;
  if (local_3c != 0 || -local_3c < (uint)(in_EDX < uVar10)) goto LAB_100118cc;
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
          if (iVar11 != 0 || (uint)-iVar11 < (uint)(in_EDX < uVar12)) goto LAB_100118cc;
          uVar6 = 0;
          local_14 = 0;
          if (in_EDX - uVar12 < 4) goto LAB_100118cc;
          uVar10 = *(uint *)(local_30 + uVar12);
        }
        else {
          local_14 = 0;
          if (iVar11 != 0 || (uint)-iVar11 < (uint)(in_EDX < uVar12)) goto LAB_100118cc;
          if (in_EDX - uVar12 < 8) goto LAB_100118c5;
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
            if (uVar10 == 0 && uVar6 == 0) goto LAB_100118cc;
            uVar13 = local_18;
            if (param_4[2] < 6) {
              local_38 = local_38 * 0x1000000;
              local_2c = local_2c * 0x10000;
              local_20 = local_20 << 8;
              uVar13 = (local_38 + local_2c | local_20) + local_34;
              local_14 = 0;
              if (uVar13 != *(uint *)(&DAT_10016b1c + param_4[2] * 4)) goto LAB_100118cc;
              local_14 = 0;
              if (uVar6 == 0 && (uint)(in_EDX < uVar10) <= -uVar6) {
                local_14 = 0;
                local_64 = uVar13;
                if (3 < in_EDX - uVar10) {
                  uVar13 = uVar10 + 4;
                  iVar11 = uVar6 + (0xfffffffb < uVar10);
                  if (iVar11 == 0 && (uint)(in_EDX < uVar13) <= (uint)-iVar11) {
                    if (in_EDX - uVar13 < 4) {
LAB_10011a5d:
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
                        goto LAB_10011a5d;
                        uVar10 = local_5c * local_50;
                        local_c0 = 0xffffffff;
                        recovered_10012180((int *)&local_8c,uVar10);
                        if (uVar10 != 0) {
                          iVar11 = 0;
                          do {
                            uVar7 = recovered_100112c0(local_30,local_28,&local_d4,
                                                       *(uint *)(param_3 + 0x10),
                                                       (uint *)((int)local_8c + iVar11));
                            if (((char)uVar7 == '\0') ||
                               (*(int *)((int)local_8c + iVar11) == 0 &&
                                *(int *)((int)local_8c + iVar11 + 4) == 0)) goto LAB_10011bb0;
                            iVar11 = iVar11 + 8;
                            uVar10 = uVar10 - 1;
                          } while (uVar10 != 0);
                        }
                        local_c8 = 0;
                        local_cc = 0;
                        uVar7 = recovered_100112c0(local_30,local_28,&local_d4,
                                                   *(uint *)(param_3 + 0x10),&local_cc);
                        local_14 = 0;
                        if (((char)uVar7 != '\0') && (local_c8 == 0 && local_cc == 0)) {
                          uVar10 = *param_4;
                          if (((uVar10 == 0) ||
                              ((int)((ulonglong)uVar10 * (ulonglong)param_4[1] >> 0x20) == 0)) &&
                             (uVar10 = param_4[1] * uVar10, uVar10 < 0x40000000)) {
                            local_48 = (void *)((uint)local_48 & 0xffffff00);
                            local_c0 = 1;
                            recovered_10010800(in_stack_0000000c,uVar10 * 4,(undefined1 *)&local_48)
                            ;
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
                                    if ((local_1c < local_28) <= local_20) goto LAB_10011bb0;
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
                                    goto LAB_10011bb0;
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
                                        uVar7 = recovered_10012530(local_1c + local_30,local_18,
                                                                   (int)&local_48);
                                        if (((byte)uVar7 & local_44 == local_20) == 1)
                                        goto LAB_10011e2c;
                                      }
LAB_10011ff9:
                                      local_44 = 0;
                                      recovered_100050a0(local_48);
                                      goto LAB_10011bb0;
                                    }
                                    if (iVar8 == 1) {
                                      local_c0 = 3;
                                      uVar7 = recovered_10012220(local_1c + local_30,local_18,uVar5,
                                                                 local_64,(int *)&local_48);
                                      if ((char)uVar7 == '\0') goto LAB_10011ff9;
                                    }
                                    else {
                                      if ((iVar8 != 0) || (uVar10 < local_20)) goto LAB_10011ff9;
                                      local_c0 = 2;
                                      recovered_10012650((int *)&local_48,0,
                                                         (undefined1 *)(local_1c + local_30),
                                                         (undefined1 *)(local_1c + local_30) +
                                                         local_20);
                                    }
LAB_10011e2c:
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
                                            PF_PART4(local_24,0) = 0;
                                            uVar9 = 0xff;
                                            if (uVar2 < 6) {
                                              if ((3U >> (uVar2 & 0x1f) & 1) == 0) {
                                                if ((0xcU >> (uVar2 & 0x1f) & 1) == 0) {
                                                  if ((uint)*(byte *)((int)local_48 + uVar6) * 3 + 2
                                                      < *(uint *)(param_3 + 0x1c)) {
                                                    iVar4 = (uint)*(byte *)((int)local_48 + uVar6) *
                                                            3;
                                                    iVar14 = *(int *)(param_3 + 0x18);
                                                    PF_PART2(local_24,0) = (uint16_t)
                                                               CONCAT11(*(undefined1 *)
                                                                         (iVar14 + 1 + iVar4),
                                                                        *(undefined1 *)
                                                                         (iVar14 + iVar4));
                                                    PF_PART4(local_24,0) = CONCAT12(*(undefined1 *)
                                                                          (iVar14 + 2 + iVar4),PF_PART2(local_24,0));
                                                  }
                                                  bVar15 = uVar2 == 5;
                                                }
                                                else {
                                                  PF_PART2(local_24,0) = (uint16_t)
                                                             CONCAT11(*(undefined1 *)
                                                                       ((int)local_48 + uVar6),
                                                                      *(undefined1 *)
                                                                       ((int)local_48 + uVar6));
                                                  PF_PART4(local_24,0) = CONCAT12(*(undefined1 *)
                                                                        ((int)local_48 + uVar6),PF_PART2(local_24,0));
                                                  bVar15 = uVar2 == 3;
                                                }
                                                iVar14 = 1;
                                              }
                                              else {
                                                PF_PART2(local_24,0) = (uint16_t)
                                                           CONCAT11(*(undefined1 *)
                                                                     ((int)local_48 + uVar6 + 1),
                                                                    *(undefined1 *)
                                                                     ((int)local_48 + uVar6));
                                                PF_PART4(local_24,0) = CONCAT12(*(undefined1 *)
                                                                      ((int)local_48 + uVar6 + 2),PF_PART2(local_24,0));
                                                iVar14 = 3;
                                                bVar15 = uVar2 == 1;
                                              }
                                              local_2c = uVar3;
                                              if (bVar15) {
                                                uVar9 = (uint)*(byte *)((int)local_48 +
                                                                       uVar6 + iVar14);
                                              }
                                            }
                                            PF_PART4(local_24,0) = CONCAT13((char)((uVar9 * uVar3 + 0x7f) /
                                                                       0xff),PF_PART4(local_24,0));
                                            local_c0 = 5;
                                            local_20 = uVar5;
                                            local_1c = uVar12;
                                            local_18 = uVar6;
                                            recovered_100019c0((void *)((*param_4 * local_34 +
                                                                        uVar12) * 4 +
                                                                       *in_stack_0000000c),local_24,
                                                               4);
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
                                    recovered_100050a0(local_48);
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
LAB_10011bb0:
                            local_14 = 0;
                          }
                        }
                        local_88 = 0;
                        recovered_100050a0(local_8c);
                      }
                    }
                  }
                }
              }
              goto LAB_100118cc;
            }
          }
        }
      }
    }
  }
LAB_100118c5:
  local_18 = uVar13;
  local_14 = 0;
LAB_100118cc:
  recovered_100054c0(&local_c4);
  return local_14;
}

#undef DAT_10016b1c
#undef DAT_10016f6c
#undef LAB_10012010
#undef PTR_recovered_10004fe0_10017004
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012080
 */

void recovered_10012080(byte *in_ECX,byte *in_EDX)

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
  recovered_100019c0(in_ECX,in_EDX,4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012180
 */

void recovered_10012180(int *param_1,uint param_2)

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
    pvVar3 = recovered_10005040(param_2 * 8);
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
    recovered_100050a0(pointer);
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


#define local_30 (*(undefined4 *)(frame + 16))
#define local_28 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012220
 */

undefined4 recovered_10012220(int in_ECX,uint in_EDX,uint param_3,uint param_4,int *param_5)

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
    pvVar4 = recovered_10005040(uVar10);
    pointer = (void *)*param_5;
    iVar11 = param_5[1];
    if (iVar11 != 0) {
      iVar8 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar8) = *(undefined1 *)((int)pointer + iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar11 != iVar8);
    }
    recovered_100050a0(pointer);
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

#undef local_30
#undef local_28

#undef DAT_10016f7c
#define DAT_10016f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x106cU)))
#undef LAB_10012616
#define LAB_10012616 (*(uint8_t *)(0x10012616U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_34 (*(undefined1 * *)(frame + 204))
#define local_24 (*(void * *)(frame + 220))
#define local_20 (*(uint *)(frame + 224))
#define local_1c (*(uint *)(frame + 228))
#define local_18 (*(void * *)(frame + 232))
#define local_11 (*(char *)(frame + 239))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 20))
#define local_5c (*(undefined4 *)(frame + 164))
#define local_58 (*(undefined4 *)(frame + 168))
#define local_44 (*(undefined * *)(frame + 188))
#define local_40 (*(undefined * *)(frame + 192))
#define local_3c (*(undefined1 * *)(frame + 196))
#define local_38 (*(undefined1 * *)(frame + 200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012530
 */

undefined4 recovered_10012530(int in_ECX,uint in_EDX,int param_3)

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
  recovered_100054a0(&local_5c);
  if (local_11 == '\0') {
    uVar1 = 4;
    do {
      size = uVar1;
      uVar1 = size * 2;
    } while (size < in_EDX);
    local_58 = 0xffffffff;
    local_18 = recovered_10005040(size);
    recovered_100050a0((void *)0x0);
    local_24 = local_18;
    uVar1 = 0;
    do {
      *(undefined1 *)((int)local_18 + uVar1) = *(undefined1 *)(in_ECX + uVar1);
      uVar1 = uVar1 + 1;
    } while (in_EDX != uVar1);
    local_58 = 1;
    local_20 = in_EDX;
    local_1c = size;
    uVar2 = recovered_10012760((int *)&local_24,(uint *)param_3);
    recovered_100050a0(local_18);
  }
  else {
    uVar2 = 0;
  }
  recovered_100054c0(&local_5c);
  return uVar2;
}

#undef DAT_10016f7c
#undef LAB_10012616
#undef PTR_recovered_10004fe0_10017004
#undef local_34
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef auStackY_ec
#undef local_5c
#undef local_58
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012650
 */

int recovered_10012650(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

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
      pvVar2 = recovered_10005040((uint)puVar7);
      pointer = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined1 *)((int)pvVar2 + iVar5) = *(undefined1 *)((int)pointer + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_100050a0(pointer);
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


#undef DAT_10016f84
#define DAT_10016f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1074U)))
#undef DAT_100174ec
#define DAT_100174ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15dcU)))
#undef DAT_10017548
#define DAT_10017548 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1638U)))
#undef LAB_10013a16
#define LAB_10013a16 (*(uint8_t *)(0x10013a16U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_b0 (*(undefined4 *)(frame + 480))
#define local_9c (*(undefined * *)(frame + 500))
#define local_98 (*(undefined * *)(frame + 504))
#define local_94 (*(undefined1 * *)(frame + 508))
#define local_90 (*(undefined1 * *)(frame + 512))
#define local_8c (*(undefined1 * *)(frame + 516))
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
#define local_54 (*(uint * *)(frame + 572))
#define local_50 (*(uint *)(frame + 576))
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
#define local_1e8 (*(int (*)[16])(frame + 168))
#define local_1a8 (*(void * *)(frame + 232))
#define local_1a4 (*(undefined4 *)(frame + 236))
#define local_198 (*(undefined1 *)(frame + 248))
#define local_194 (*(uint (*)[16])(frame + 252))
#define local_154 (*(void * *)(frame + 316))
#define local_150 (*(byte * *)(frame + 320))
#define local_148 (*(uint *)(frame + 328))
#define local_144 (*(char *)(frame + 332))
#define local_140 (*(int (*)[16])(frame + 336))
#define local_100 (*(void * *)(frame + 400))
#define local_fc (*(undefined4 *)(frame + 404))
#define local_f8 (*(undefined4 *)(frame + 408))
#define local_f4 (*(undefined4 *)(frame + 412))
#define local_f0 (*(undefined1 *)(frame + 416))
#define local_ec (*(uint *)(frame + 420))
#define local_e8 (*(uint *)(frame + 424))
#define local_e4 (*(int * *)(frame + 428))
#define local_e0 (*(byte * *)(frame + 432))
#define local_dc (*(void * *)(frame + 436))
#define local_d8 (*(undefined4 * *)(frame + 440))
#define local_d4 (*(undefined4 *)(frame + 444))
#define local_d0 (*(undefined4 *)(frame + 448))
#define local_cc (*(void * *)(frame + 452))
#define local_c8 (*(undefined4 *)(frame + 456))
#define local_c4 (*(undefined4 *)(frame + 460))
#define local_c0 (*(int * *)(frame + 464))
#define local_bc (*(int *)(frame + 468))
#define local_b8 (*(undefined4 *)(frame + 472))
#define local_b4 (*(undefined4 *)(frame + 476))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012760
 */

undefined4 recovered_10012760(int *in_ECX,uint *in_EDX)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  void *pointer;
  int iVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;

  bVar10 = 0;
  local_94 = (undefined1 *)((int)(uintptr_t)(frame + 656) + -4);
  local_8c = auStackY_27c + 0x80;
  in_EDX[1] = 0;
  uVar12 = in_ECX[1];
  local_9c = PTR_recovered_10004fe0_10017004;
  local_98 = &DAT_10016f84;
  local_90 = &LAB_10013a16;
  local_54 = in_EDX;
  recovered_100054a0(&local_b4);
  if (5 < uVar12) {
    pbVar8 = (byte *)*in_ECX;
    if ((*pbVar8 & 0xf) == 8) {
      uVar15 = 0;
      uVar5 = local_20;
      if ((pbVar8[1] & 0x20) != 0) goto switchD_10012987_caseD_3;
      uVar2 = CONCAT11(*pbVar8,pbVar8[1]);
      uVar17 = (uint)uVar2 * 0x843 >> 0x10;
      local_e4 = in_ECX;
      if ((ushort)((short)(((uVar2 - uVar17 & 0xffff) >> 1) + uVar17 >> 4) * -0x1f + uVar2) != 0)
      goto switchD_10012987_caseD_3;
      local_30 = uVar12 - 6;
      local_34 = pbVar8 + 2;
      local_2c = 0;
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      local_e8 = 5;
      do {
        if (local_20 == 0) {
          if (local_30 <= local_2c) goto LAB_10013969;
          uVar12 = local_2c + 1;
          local_74 = local_34[local_2c] | local_28;
          local_28 = (local_24 >> 1) << 0x1e | (local_24 << 0x1f | local_74 >> 1) >> 2;
          local_24 = local_24 >> 3;
          local_20 = local_e8;
          uVar15 = 0;
          uVar5 = local_e8;
          local_2c = uVar12;
          switch((uintptr_t)(local_74 >> 1 & 3)) {
          case 0:
switchD_10012987_caseD_0:
            bVar9 = (byte)uVar5 & 7;
            local_28 = local_28 >> bVar9 | local_24 << 0x20 - bVar9;
            uVar12 = local_24 >> bVar9;
            local_20 = uVar5 & 0xfffffff8;
            local_194[0] = 0;
            if (uVar5 < 8) {
              iVar20 = 1;
              local_24 = uVar12;
              if (local_30 <= local_2c) goto LAB_100128a5;
              local_14 = (uint)local_34[local_2c] | local_28 & 0xff;
              local_20 = 0;
              local_2c = local_2c + 1;
              uVar5 = local_28 >> 8 | uVar12 << 0x18;
              uVar17 = local_20;
LAB_10012da1:
              local_20 = uVar17;
              local_28 = uVar5;
              local_24 = uVar12 >> 8;
              iVar20 = 1;
              if (local_2c < local_30) {
                uVar5 = local_34[local_2c] | local_28;
                local_28 = local_28 >> 8 | local_24 << 0x18;
                local_20 = 0;
                local_2c = local_2c + 1;
                uVar17 = local_20;
LAB_10012dde:
                local_20 = uVar17;
                local_24 = uVar12 >> 0x10;
                iVar20 = 1;
                local_40 = local_28;
                if (local_2c < local_30) {
                  local_40 = local_28 | local_34[local_2c];
                  local_2c = local_2c + 1;
                  goto LAB_10012e01;
                }
              }
            }
            else {
              uVar5 = uVar12 << 0x18 | local_28 >> 8;
              local_14 = local_28 & 0xff;
              uVar17 = local_20 - 8;
              if (local_20 - 8 == 0) goto LAB_10012da1;
              local_40 = local_28 >> 0x10 | uVar12 << 0x10;
              local_28 = local_40;
              uVar17 = local_20 - 0x10;
              if (local_20 - 0x10 == 0) goto LAB_10012dde;
              local_20 = local_20 - 0x18;
LAB_10012e01:
              local_28 = (uVar12 >> 0x10) << 0x18 | local_40 >> 8;
              local_24 = uVar12 >> 0x18;
              uVar12 = recovered_10013ba0((int *)&local_34,8,local_194);
              iVar20 = 1;
              if (((char)uVar12 != '\0') &&
                 (uVar12 = (uVar5 & 0xff) * 0x100 + local_14,
                 ((local_194[0] << 8 | local_40 & 0xff) ^ uVar12) == 0xffff)) {
                if (uVar12 != 0) {
                  uVar5 = 0;
                  local_44 = uVar12;
                  do {
                    puVar21 = local_54;
                    if (local_20 < 8) {
                      if (local_30 <= local_2c) {
                        iVar20 = 1;
                        goto LAB_100128a5;
                      }
                      bVar9 = (byte)local_20 & 0x1f;
                      uVar19 = (uint)local_34[local_2c] << ((byte)local_20 & 0x1f);
                      uVar17 = 0 << bVar9 | (uint)(local_34[local_2c] >> 0x20 - bVar9);
                      uVar13 = uVar19;
                      if ((local_20 & 0x20) != 0) {
                        uVar13 = 0;
                        uVar17 = uVar19;
                      }
                      local_24 = uVar17 | local_24;
                      local_28 = uVar13 | local_28;
                      local_20 = local_20 | 8;
                      local_2c = local_2c + 1;
                    }
                    uVar13 = local_24 << 0x18 | local_28 >> 8;
                    local_24 = local_24 >> 8;
                    local_20 = local_20 - 8;
                    uVar17 = local_54[1];
                    local_14 = local_28;
                    if (uVar17 == local_54[2]) {
                      uVar19 = 4;
                      if (uVar17 != 0) {
                        uVar19 = uVar17 * 2;
                      }
                      if (uVar17 < uVar19) {
                        local_b0 = 0xffffffff;
                        local_28 = uVar13;
                        local_18 = uVar19;
                        pvVar6 = recovered_10005040(uVar19);
                        pointer = (void *)*puVar21;
                        uVar12 = puVar21[1];
                        if (uVar12 != 0) {
                          uVar17 = 0;
                          do {
                            *(undefined1 *)((int)pvVar6 + uVar17) =
                                 *(undefined1 *)((int)pointer + uVar17);
                            uVar17 = uVar17 + 1;
                          } while (uVar12 != uVar17);
                        }
                        recovered_100050a0(pointer);
                        *local_54 = (uint)pvVar6;
                        local_54[2] = local_18;
                        uVar17 = local_54[1];
                        uVar12 = local_44;
                        uVar13 = local_28;
                      }
                    }
                    else {
                    }
                    local_28 = uVar13;
                    *(char *)(*local_54 + uVar17) = (char)local_14;
                    local_54[1] = local_54[1] + 1;
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != uVar12);
                }
                iVar20 = 3;
              }
            }
LAB_100128a5:
            if (iVar20 != 3) goto LAB_10013969;
            break;
          case 1:
            goto switchD_10012987_caseD_1;
          case 2:
            goto switchD_10012987_caseD_2;
          case 3:
            goto switchD_10012987_caseD_3;
          }
        }
        else {
          uVar17 = local_24 >> 1;
          local_74 = local_28;
          uVar12 = local_24 << 0x1f | local_28 >> 1;
          uVar5 = local_20 - 1;
          if (local_20 < 3) {
            uVar15 = 0;
            local_28 = uVar12;
            local_24 = uVar17;
            local_14 = uVar5;
            if (local_30 <= local_2c) goto switchD_10012987_caseD_3;
            bVar9 = (byte)uVar5 & 0x1f;
            uVar18 = (uint)local_34[local_2c] << ((byte)uVar5 & 0x1f);
            uVar13 = 0 << bVar9 | (uint)(local_34[local_2c] >> 0x20 - bVar9);
            uVar19 = uVar18;
            if ((uVar5 & 0x20) != 0) {
              uVar19 = 0;
              uVar13 = uVar18;
            }
            uVar17 = uVar17 | uVar13;
            uVar12 = uVar12 | uVar19;
            uVar5 = local_20 + 7;
            local_2c = local_2c + 1;
          }
          local_28 = uVar17 << 0x1e | uVar12 >> 2;
          local_24 = uVar17 >> 2;
          local_20 = uVar5 - 2;
          uVar15 = 0;
          uVar5 = local_20;
          switch((uintptr_t)(uVar12 & 3)) {
          case 0:
            goto switchD_10012987_caseD_0;
          case 1:
switchD_10012987_caseD_1:
            if ((DAT_100174ec == '\0') &&
               (uVar12 = recovered_100052b0((uint *)&DAT_100174ec), uVar12 != 0)) {
              local_b0 = 1;
              recovered_10014290();
              recovered_100052a0();
              recovered_100052c0((byte *)&DAT_100174ec);
            }
            if ((DAT_10017548 == '\0') &&
               (uVar12 = recovered_100052b0((uint *)&DAT_10017548), uVar12 != 0)) {
              local_b0 = 2;
              recovered_10014940();
              recovered_100052a0();
              recovered_100052c0((byte *)&DAT_10017548);
            }
            local_b0 = 0xffffffff;
            uVar15 = recovered_10013c90((int *)&local_34,((uintptr_t)pf_module_state+0x1588U),((uintptr_t)pf_module_state+0x15e4U),(int *)local_54);
            if ((char)uVar15 == '\0') goto LAB_10013969;
            break;
          case 2:
switchD_10012987_caseD_2:
            uVar5 = local_24;
            uVar12 = local_28;
            piVar11 = local_1e8;
            local_14 = local_20;
            for (iVar20 = 0x14; iVar20 != 0; iVar20 = iVar20 + -1) {
              *piVar11 = 0;
              piVar11 = piVar11 + (uint)bVar10 * -2 + 1;
            }
            local_198 = 0;
            piVar11 = local_140;
            for (iVar20 = 0x14; iVar20 != 0; iVar20 = iVar20 + -1) {
              *piVar11 = 0;
              piVar11 = piVar11 + (uint)bVar10 * -2 + 1;
            }
            local_f0 = 0;
            if (local_14 < 5) {
              iVar20 = 1;
              if (local_2c < local_30) {
                bVar9 = (byte)local_14 & 0x1f;
                uVar19 = (uint)local_34[local_2c] << ((byte)local_14 & 0x1f);
                uVar17 = uVar19;
                uVar13 = 0 << bVar9 | (uint)(local_34[local_2c] >> 0x20 - bVar9);
                if ((local_14 & 0x20) != 0) {
                  uVar17 = 0;
                  uVar13 = uVar19;
                }
                uVar5 = uVar5 | uVar13;
                uVar12 = uVar12 | uVar17;
                local_14 = local_14 | 8;
                local_2c = local_2c + 1;
                goto LAB_10012ac2;
              }
            }
            else {
LAB_10012ac2:
              local_28 = uVar5 << 0x1b | uVar12 >> 5;
              local_24 = uVar5 >> 5;
              uVar5 = local_14 - 5;
              local_40 = uVar12;
              if (uVar5 < 5) {
                iVar20 = 1;
                local_20 = uVar5;
                if (local_30 <= local_2c) goto LAB_10012875;
                bVar9 = (byte)uVar5 & 0x1f;
                uVar13 = (uint)local_34[local_2c] << ((byte)uVar5 & 0x1f);
                uVar12 = uVar13;
                uVar17 = 0 << bVar9 | (uint)(local_34[local_2c] >> 0x20 - bVar9);
                if ((uVar5 & 0x20) != 0) {
                  uVar12 = 0;
                  uVar17 = uVar13;
                }
                local_24 = local_24 | uVar17;
                local_28 = local_28 | uVar12;
                uVar5 = local_14 + 3;
                local_2c = local_2c + 1;
              }
              local_18 = local_24 << 0x1b | local_28 >> 5;
              local_24 = local_24 >> 5;
              local_20 = uVar5 - 5;
              local_48 = local_28;
              if (local_20 < 4) {
                iVar20 = 1;
                local_28 = local_18;
                if (local_30 <= local_2c) goto LAB_10012875;
                bVar9 = (byte)local_20 & 0x1f;
                uVar13 = (uint)local_34[local_2c] << ((byte)local_20 & 0x1f);
                uVar12 = uVar13;
                uVar17 = 0 << bVar9 | (uint)(local_34[local_2c] >> 0x20 - bVar9);
                if ((local_20 & 0x20) != 0) {
                  uVar12 = 0;
                  uVar17 = uVar13;
                }
                local_24 = local_24 | uVar17;
                local_18 = local_18 | uVar12;
                local_20 = uVar5 + 3;
                local_2c = local_2c + 1;
              }
              local_28 = local_24 << 0x1c | local_18 >> 4;
              local_24 = local_24 >> 4;
              local_20 = local_20 - 4;
              local_b0 = 3;
              local_1c = recovered_10005040(0x4c);
              uVar5 = local_40 & 0x1f;
              local_48 = local_48 & 0x1f;
              recovered_100050a0((void *)0x0);
              local_d8 = local_1c;
              local_d0 = 0x13;
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
              local_78 = (undefined4 *)(uVar5 + 0x101);
              local_d4 = 0x13;
              local_44 = local_2c;
              local_70 = local_34;
              local_7c = local_30;
              local_18 = (local_18 & 0xf) << 2;
              uVar12 = 0xfffffff0;
              do {
                uVar17 = uVar12;
                local_40 = uVar5;
                if (local_20 < 3) {
                  if (local_30 <= local_44) goto LAB_10012865;
                  local_2c = local_44 + 1;
                  bVar9 = (byte)local_20 & 0x1f;
                  uVar19 = (uint)local_34[local_44] << ((byte)local_20 & 0x1f);
                  uVar12 = 0 << bVar9 | (uint)(local_34[local_44] >> 0x20 - bVar9);
                  uVar13 = uVar19;
                  if ((local_20 & 0x20) != 0) {
                    uVar13 = 0;
                    uVar12 = uVar19;
                  }
                  local_24 = local_24 | uVar12;
                  local_28 = local_28 | uVar13;
                  local_20 = local_20 | 8;
                  local_44 = local_2c;
                }
                uVar13 = local_24 << 0x1d | local_28 >> 3;
                local_24 = local_24 >> 3;
                local_20 = local_20 - 3;
                local_1c[*(int *)(uVar17 + ((uintptr_t)pf_module_state+0xaa8U))] = local_28 & 7;
                uVar12 = uVar17 + 4;
                local_28 = uVar13;
                local_14 = uVar17;
              } while (local_18 != uVar17 + 4);
              puVar21 = local_194;
              for (iVar20 = 0x14; iVar20 != 0; iVar20 = iVar20 + -1) {
                *puVar21 = 0;
                puVar21 = puVar21 + (uint)bVar10 * -2 + 1;
              }
              local_144 = '\0';
              local_b0 = 4;
              cVar4 = recovered_10014560((int *)&local_d8,(int *)local_194,0);
              if (cVar4 == '\0') {
                local_150 = (byte *)0x0;
                recovered_100050a0(local_154);
LAB_10012865:
                puVar7 = local_1c;
              }
              else {
                local_b0 = 5;
                puVar7 = recovered_10005040((local_40 + local_48) * 4 + 0x408);
                recovered_100050a0((void *)0x0);
                if (local_144 == '\x01') {
                  uVar12 = local_40 + 0x102 + local_48;
                  local_dc = local_154;
                  local_e0 = local_150;
                  local_3c = 0;
                  local_50 = uVar12;
                  do {
                    local_4c = uVar12;
                    local_38 = puVar7;
                    local_ec = local_148;
                    if (local_148 == 0) goto LAB_10013579;
                    local_68 = local_34;
                    local_6c = local_30;
                    local_48 = local_2c;
                    local_18 = local_24;
                    local_14 = local_28;
                    uVar17 = 1;
                    local_44 = 0;
                    pbVar8 = (byte *)0x0;
                    uVar5 = 0;
                    while( true ) {
                      local_70 = pbVar8;
                      local_7c = uVar5;
                      if (local_20 == 0) {
                        local_28 = local_14;
                        local_24 = local_18;
                        if (local_30 <= local_48) goto LAB_10013579;
                        local_2c = local_48 + 1;
                        local_14 = local_14 | local_34[local_48];
                        uVar13 = 8;
                        local_48 = local_48 + 1;
                      }
                      else {
                        uVar13 = local_20;
                      }
                      uVar16 = local_18 << 0x1f | local_14 >> 1;
                      uVar18 = local_14 & 1 | local_44;
                      uVar14 = local_18 >> 1;
                      local_18 = uVar14;
                      local_24 = uVar14;
                      local_14 = uVar16;
                      local_28 = uVar16;
                      local_20 = uVar13 - 1;
                      local_40 = local_20;
                      uVar19 = local_194[uVar17] + uVar5;
                      if (uVar18 < uVar19) break;
                      pbVar8 = pbVar8 + local_194[uVar17];
                      uVar5 = uVar19 * 2;
                      uVar17 = uVar17 + 1;
                      local_44 = uVar18 * 2;
                      if (local_148 < uVar17) goto LAB_10013579;
                    }
                    if (local_e0 <= pbVar8 + (uVar18 - uVar5)) goto LAB_10013579;
                    uVar5 = (uint)*(ushort *)((int)local_dc + (int)(pbVar8 + (uVar18 - uVar5)) * 2);
                    if (uVar5 < 0x10) {
                      uVar17 = local_3c;
                      if (local_3c == uVar12) {
                        uVar13 = 4;
                        if (local_3c != 0) {
                          uVar13 = local_3c * 2;
                        }
                        uVar12 = local_3c;
                        if (local_3c < uVar13) {
                          local_b0 = 6;
                          local_18 = uVar13;
                          local_14 = uVar5;
                          puVar7 = recovered_10005040(uVar13 * 4);
                          uVar17 = local_3c;
                          if (local_3c != 0) {
                            uVar12 = 0;
                            do {
                              puVar7[uVar12] = local_38[uVar12];
                              uVar12 = uVar12 + 1;
                            } while (local_3c != uVar12);
                          }
                          recovered_100050a0(local_38);
                          uVar5 = local_14;
                          uVar12 = local_18;
                        }
                      }
                      puVar7[uVar17] = uVar5;
                      local_3c = uVar17 + 1;
                      uVar17 = local_50;
                    }
                    else {
                      bVar9 = (byte)local_20;
                      uVar17 = local_50;
                      if (uVar5 == 0x12) {
                        if (uVar13 < 8) {
                          if (local_30 <= local_48) goto LAB_10013579;
                          local_2c = local_48 + 1;
                          uVar19 = (uint)local_34[local_48] << (bVar9 & 0x1f);
                          uVar5 = uVar19;
                          uVar13 = 0 << (bVar9 & 0x1f) |
                                   (uint)(local_34[local_48] >> 0x20 - (bVar9 & 0x1f));
                          if ((local_20 & 0x20) != 0) {
                            uVar5 = 0;
                            uVar13 = uVar19;
                          }
                          uVar14 = uVar14 | uVar13;
                          uVar16 = uVar16 | uVar5;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar14 >> 7;
                        local_28 = uVar14 << 0x19 | uVar16 >> 7;
                        local_20 = local_20 - 7;
                        if (local_3c < local_50) {
                          local_14 = (uVar16 & 0x7f) + 0xb;
                          uVar13 = 0;
                          uVar5 = local_3c;
                          do {
                            local_64 = puVar7;
                            if (uVar5 == uVar12) {
                              uVar19 = 4;
                              if (uVar5 != 0) {
                                uVar19 = uVar5 * 2;
                              }
                              uVar12 = uVar5;
                              if (uVar5 < uVar19) {
                                local_b0 = 9;
                                local_44 = uVar19;
                                local_3c = uVar5;
                                local_18 = uVar13;
                                puVar7 = recovered_10005040(uVar19 * 4);
                                uVar5 = local_3c;
                                if (local_3c != 0) {
                                  uVar12 = 0;
                                  do {
                                    puVar7[uVar12] = local_64[uVar12];
                                    uVar12 = uVar12 + 1;
                                  } while (local_3c != uVar12);
                                }
                                recovered_100050a0(local_64);
                                uVar17 = local_50;
                                uVar13 = local_18;
                                uVar12 = local_44;
                              }
                            }
                            puVar7[uVar5] = 0;
                            local_3c = uVar5 + 1;
                            uVar13 = uVar13 + 1;
                            if (local_14 <= uVar13) break;
                            uVar5 = local_3c;
                          } while (local_3c < uVar17);
                        }
                      }
                      else if (uVar5 == 0x11) {
                        if (uVar13 < 4) {
                          if (local_30 <= local_48) goto LAB_10013579;
                          local_2c = local_48 + 1;
                          uVar19 = (uint)local_34[local_48] << (bVar9 & 0x1f);
                          uVar5 = uVar19;
                          uVar13 = 0 << (bVar9 & 0x1f) |
                                   (uint)(local_34[local_48] >> 0x20 - (bVar9 & 0x1f));
                          if ((local_20 & 0x20) != 0) {
                            uVar5 = 0;
                            uVar13 = uVar19;
                          }
                          uVar14 = uVar14 | uVar13;
                          uVar16 = uVar16 | uVar5;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar14 >> 3;
                        local_28 = uVar14 << 0x1d | uVar16 >> 3;
                        local_20 = local_20 - 3;
                        if (local_3c < local_50) {
                          local_14 = (uVar16 & 7) + 3;
                          uVar13 = 0;
                          uVar5 = local_3c;
                          do {
                            local_60 = puVar7;
                            if (uVar5 == local_4c) {
                              uVar12 = 4;
                              if (uVar5 != 0) {
                                uVar12 = uVar5 * 2;
                              }
                              local_4c = uVar5;
                              if (uVar5 < uVar12) {
                                local_b0 = 8;
                                local_44 = uVar12;
                                local_3c = uVar5;
                                local_18 = uVar13;
                                puVar7 = recovered_10005040(uVar12 * 4);
                                uVar5 = local_3c;
                                if (local_3c != 0) {
                                  uVar12 = 0;
                                  do {
                                    puVar7[uVar12] = local_60[uVar12];
                                    uVar12 = uVar12 + 1;
                                  } while (local_3c != uVar12);
                                }
                                recovered_100050a0(local_60);
                                local_4c = local_44;
                                uVar13 = local_18;
                              }
                            }
                            puVar7[uVar5] = 0;
                            local_3c = uVar5 + 1;
                            uVar13 = uVar13 + 1;
                            uVar17 = local_50;
                            uVar12 = local_4c;
                          } while ((uVar13 < local_14) && (uVar5 = local_3c, local_3c < local_50));
                        }
                      }
                      else {
                        if ((uVar5 != 0x10) || (local_3c == 0)) goto LAB_10013579;
                        if (uVar13 < 3) {
                          if (local_30 <= local_48) goto LAB_10013579;
                          local_2c = local_48 + 1;
                          uVar19 = (uint)local_34[local_48] << (bVar9 & 0x1f);
                          uVar5 = uVar19;
                          uVar13 = 0 << (bVar9 & 0x1f) |
                                   (uint)(local_34[local_48] >> 0x20 - (bVar9 & 0x1f));
                          if ((local_20 & 0x20) != 0) {
                            uVar5 = 0;
                            uVar13 = uVar19;
                          }
                          uVar14 = uVar14 | uVar13;
                          uVar16 = uVar16 | uVar5;
                          local_20 = local_20 | 8;
                        }
                        local_24 = uVar14 >> 2;
                        local_28 = uVar14 << 0x1e | uVar16 >> 2;
                        local_20 = local_20 - 2;
                        local_44 = puVar7[local_3c - 1];
                        if (local_3c < local_50) {
                          uVar13 = (uVar16 & 3) + 3;
                          local_18 = 0;
                          uVar5 = local_3c;
                          local_14 = uVar13;
                          do {
                            local_5c = puVar7;
                            if (uVar5 == uVar12) {
                              uVar12 = uVar5;
                              if (0 < (int)uVar5) {
                                local_b0 = 7;
                                local_3c = uVar5;
                                puVar7 = recovered_10005040(uVar5 * 8);
                                uVar5 = local_3c;
                                uVar12 = local_3c * 2;
                                uVar17 = 0;
                                do {
                                  puVar7[uVar17] = local_5c[uVar17];
                                  uVar17 = uVar17 + 1;
                                } while (local_3c != uVar17);
                                recovered_100050a0(local_5c);
                                uVar17 = local_50;
                                uVar13 = local_14;
                              }
                            }
                            puVar7[uVar5] = local_44;
                            local_3c = uVar5 + 1;
                            local_18 = local_18 + 1;
                          } while ((local_18 < uVar13) && (uVar5 = local_3c, local_3c < uVar17));
                        }
                      }
                    }
                    local_58 = puVar7;
                  } while (local_3c < uVar17);
                  local_78 = puVar7 + (int)local_78;
                  local_cc = (void *)0x0;
                  local_c8 = 0;
                  local_c4 = 0;
                  local_b0 = 10;
                  recovered_10014b80((int *)&local_cc,0,puVar7,local_78);
                  local_c0 = (int *)0x0;
                  local_bc = 0;
                  local_b8 = 0;
                  local_b0 = 0xb;
                  recovered_10014b80((int *)&local_c0,0,local_78,local_58 + local_3c);
                  local_b0 = 0xc;
                  cVar4 = recovered_10014560((int *)&local_cc,local_1e8,0);
                  if (cVar4 == '\0') {
                    cVar4 = '\0';
                  }
                  else {
                    if (local_bc != 0) {
                      iVar20 = local_bc << 2;
                      piVar11 = local_c0;
                      bVar9 = 0;
                      do {
                        bVar3 = bVar9;
                        iVar1 = *piVar11;
                        piVar11 = piVar11 + 1;
                        iVar20 = iVar20 + -4;
                        bVar9 = bVar3 | iVar1 != 0;
                      } while (iVar20 != 0);
                      if ((bool)(bVar3 | iVar1 != 0)) {
                        local_b0 = 0xd;
                        cVar4 = recovered_10014560((int *)&local_c0,local_140,1);
                        goto LAB_100137c3;
                      }
                    }
                    local_140[0xf] = 0;
                    local_140[0xe] = 0;
                    local_140[0xd] = 0;
                    local_140[0xc] = 0;
                    local_140[0xb] = 0;
                    local_140[10] = 0;
                    local_140[9] = 0;
                    local_140[8] = 0;
                    local_140[7] = 0;
                    local_140[6] = 0;
                    local_140[5] = 0;
                    local_140[4] = 0;
                    local_140[3] = 0;
                    local_140[2] = 0;
                    local_140[1] = 0;
                    local_140[0] = 0;
                    recovered_100050a0(local_100);
                    local_100 = (void *)0x0;
                    local_fc = 0;
                    local_f8 = 0;
                    local_f4 = 0;
                    recovered_100050a0((void *)0x0);
                    local_f0 = 1;
                    cVar4 = '\x01';
                  }
LAB_100137c3:
                  local_bc = 0;
                  recovered_100050a0(local_c0);
                  local_c8 = 0;
                  recovered_100050a0(local_cc);
                  recovered_100050a0(local_58);
                  puVar7 = local_d8;
                  local_150 = (byte *)0x0;
                  recovered_100050a0(local_154);
                  recovered_100050a0(puVar7);
                  iVar20 = 1;
                  if (cVar4 != '\0') {
                    local_b0 = 0xe;
                    uVar12 = recovered_10013c90((int *)&local_34,(int)local_1e8,(int)local_140,
                                                (int *)local_54);
                    iVar20 = (uVar12 & 0xff) * 2 + 1;
                  }
                  goto LAB_10012875;
                }
LAB_10013579:
                recovered_100050a0(puVar7);
                puVar7 = local_d8;
                local_150 = (byte *)0x0;
                recovered_100050a0(local_154);
              }
              recovered_100050a0(puVar7);
              iVar20 = 1;
            }
LAB_10012875:
            local_fc = 0;
            recovered_100050a0(local_100);
            local_1a4 = 0;
            recovered_100050a0(local_1a8);
            goto LAB_100128a5;
          case 3:
            goto switchD_10012987_caseD_3;
          }
        }
      } while ((local_74 & 1) == 0);
      bVar10 = (byte)local_20 & 7;
      uVar12 = local_24 >> bVar10;
      local_28 = local_28 >> bVar10 | local_24 << 0x20 - bVar10;
      local_20 = local_20 & 0xfffffff8;
      local_24 = uVar12;
      if (local_2c == local_30 && local_20 == 0) {
        uVar12 = *(uint *)(*local_e4 + -4 + local_e4[1]);
        uVar5 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
        uVar12 = local_54[1];
        if (uVar12 == 0) {
          uVar17 = 1;
        }
        else {
          local_44 = *local_54;
          uVar19 = 0;
          uVar17 = 1;
          uVar13 = 0;
          do {
            uVar18 = uVar12 - uVar19;
            if (0x15af < uVar18) {
              uVar18 = 0x15b0;
            }
            if (uVar12 != uVar19) {
              pbVar8 = (byte *)(local_44 + uVar19);
              iVar20 = uVar18 + (uVar18 == 0);
              do {
                uVar17 = uVar17 + *pbVar8;
                uVar13 = uVar13 + uVar17;
                pbVar8 = pbVar8 + 1;
                iVar20 = iVar20 + -1;
              } while (iVar20 != 0);
              uVar17 = uVar17 % 0xfff1;
              uVar13 = uVar13 % 0xfff1;
              local_14 = uVar18;
            }
            uVar19 = uVar19 + uVar18;
          } while (uVar19 < uVar12);
          uVar17 = uVar17 + uVar13 * 0x10000;
          local_74 = uVar5;
          local_18 = uVar12;
        }
        uVar15 = CONCAT31((int3)(uVar12 >> 8),uVar17 == uVar5);
        uVar5 = local_20;
        goto switchD_10012987_caseD_3;
      }
    }
  }
LAB_10013969:
  uVar15 = 0;
  uVar5 = local_20;
switchD_10012987_caseD_3:
  local_20 = uVar5;
  recovered_100054c0(&local_b4);
  return uVar15;
}

#undef DAT_10016f84
#undef DAT_100174ec
#undef DAT_10017548
#undef LAB_10013a16
#undef PTR_recovered_10004fe0_10017004
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
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_27c
#undef local_1e8
#undef local_1a8
#undef local_1a4
#undef local_198
#undef local_194
#undef local_154
#undef local_150
#undef local_148
#undef local_144
#undef local_140
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ba0
 */

uint recovered_10013ba0(int *in_ECX,uint in_EDX,uint *param_3)

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
      uVar8 = 0 << bVar1 | (uint)(bVar3 >> 0x20 - bVar1);
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


#undef DAT_100168b8
#define DAT_100168b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a8U)))
#undef DAT_10016930
#define DAT_10016930 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa20U)))
#undef PTR_caseD_1_10016440
#define PTR_caseD_1_10016440 (*(void * *)(((uintptr_t)pf_module_state + 0x530U)))
#undef PTR_caseD_28_100163cc
#define PTR_caseD_28_100163cc (*(void * *)(((uintptr_t)pf_module_state + 0x4bcU)))
#define local_2c (*(uint *)(frame + 20))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(undefined * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c90
 */

undefined4 recovered_10013c90(int *in_ECX,int in_EDX,int param_3,int *param_4)

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
          pvVar8 = recovered_10005040(uVar7);
          pvVar4 = (void *)*param_4;
          iVar2 = param_4[1];
          if (iVar2 != 0) {
            iVar6 = 0;
            do {
              *(undefined1 *)((int)pvVar8 + iVar6) = *(undefined1 *)((int)pvVar4 + iVar6);
              iVar6 = iVar6 + 1;
            } while (iVar2 != iVar6);
          }
          recovered_100050a0(pvVar4);
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
            uVar17 = 0 << bVar10 | (uint)(*(byte *)(iVar2 + local_2c) >> 0x20 - bVar10);
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
          uVar17 = uVar12 >> (bVar10 & 0x1f) | local_18 << 0x20 - (bVar10 & 0x1f);
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
            uVar16 = 0 << bVar5 | (uint)(bVar10 >> 0x20 - bVar5);
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
          uVar17 = uVar12 >> (bVar10 & 0x1f) | local_18 << 0x20 - (bVar10 & 0x1f);
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
              pvVar8 = recovered_10005040(uVar16);
              pointer = (void *)*param_4;
              iVar2 = param_4[1];
              if (iVar2 != 0) {
                iVar11 = 0;
                do {
                  *(undefined1 *)((int)pvVar8 + iVar11) = *(undefined1 *)((int)pointer + iVar11);
                  iVar11 = iVar11 + 1;
                } while (iVar2 != iVar11);
              }
              recovered_100050a0(pointer);
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
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014270
 */

void recovered_10014270(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x44) = 0;
  recovered_100050a0(*(void **)(param_1 + 0x40));
  return;
}


#undef DAT_10016fa4
#define DAT_10016fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1094U)))
#undef DAT_10017498
#define DAT_10017498 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1588U)))
#undef DAT_100174e8
#define DAT_100174e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15d8U)))
#undef LAB_10014511
#define LAB_10014511 (*(uint8_t *)(0x10014511U))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_18 (*(undefined4 *)(frame + 216))
#define local_14 (*(undefined4 *)(frame + 220))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
#define local_54 (*(undefined4 *)(frame + 156))
#define local_50 (*(undefined4 *)(frame + 160))
#define local_3c (*(undefined * *)(frame + 180))
#define local_38 (*(undefined * *)(frame + 184))
#define local_34 (*(undefined1 * *)(frame + 188))
#define local_30 (*(undefined1 * *)(frame + 192))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_20 (*(void * *)(frame + 208))
#define local_1c (*(undefined4 *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014290
 */

void recovered_10014290(void)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  local_14 = recovered_10005040(0x480);
  recovered_100050a0((void *)0x0);
  local_2c = auStackY_dc + 0x80;
  local_20 = local_14;
  local_18 = 0x120;
  local_3c = PTR_recovered_10004fe0_10017004;
  local_38 = &DAT_10016fa4;
  local_30 = &LAB_10014511;
  local_34 = auStackY_dc + 0xd8;
  recovered_100054a0(&local_54);
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
  recovered_10014560((int *)&local_20,&DAT_10017498,0);
  recovered_100050a0(local_14);
  recovered_100054c0(&local_54);
  return;
}

#undef DAT_10016fa4
#undef DAT_10017498
#undef DAT_100174e8
#undef LAB_10014511
#undef PTR_recovered_10004fe0_10017004
#undef local_18
#undef local_14
#undef auStackY_dc
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c

#define local_70 (*(int *)(frame + 96))
#define local_6c (*(int *)(frame + 100))
#define local_68 (*(int *)(frame + 104))
#define local_64 (*(int *)(frame + 108))
#define local_60 (*(int *)(frame + 112))
#define local_5c (*(int *)(frame + 116))
#define local_58 (*(int *)(frame + 120))
#define local_54 (*(int *)(frame + 124))
#define local_50 (*(int *)(frame + 128))
#define local_4c (*(int *)(frame + 132))
#define local_48 (*(int *)(frame + 136))
#define local_44 (*(int *)(frame + 140))
#define local_40 (*(int *)(frame + 144))
#define local_3c (*(void * *)(frame + 148))
#define local_38 (*(int *)(frame + 152))
#define local_34 (*(int *)(frame + 156))
#define local_30 (*(int *)(frame + 160))
#define local_2c (*(int *)(frame + 164))
#define local_28 (*(uint *)(frame + 168))
#define local_24 (*(int *)(frame + 172))
#define local_20 (*(int *)(frame + 176))
#define local_1c (*(int * *)(frame + 180))
#define local_18 (*(int *)(frame + 184))
#define local_14 (*(int *)(frame + 188))
#define local_a4 (*(int *)(frame + 44))
#define aiStack_b4 (*(int (*)[4])(frame + 28))
#define local_a0 (*(int *)(frame + 48))
#define local_9c (*(int *)(frame + 52))
#define local_98 (*(int *)(frame + 56))
#define local_94 (*(int *)(frame + 60))
#define local_90 (*(int *)(frame + 64))
#define local_8c (*(int *)(frame + 68))
#define local_88 (*(int *)(frame + 72))
#define local_84 (*(int *)(frame + 76))
#define local_80 (*(int *)(frame + 80))
#define local_7c (*(int *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(int *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014560
 */

undefined1 recovered_10014560(int *in_ECX,int *in_EDX,byte param_3)

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
  recovered_100050a0((void *)in_EDX[0x10]);
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  in_EDX[0x12] = 0;
  in_EDX[0x13] = 0;
  *(undefined1 *)(in_EDX + 0x14) = 0;
  recovered_100050a0((void *)0x0);
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
                                    pvVar4 = recovered_10005040(local_28 * 2);
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
                                    recovered_100050a0(local_3c);
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
#undef local_a4
#undef aiStack_b4
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

#undef DAT_10016fac
#define DAT_10016fac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x109cU)))
#undef DAT_100174f4
#define DAT_100174f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x15e4U)))
#undef DAT_10017544
#define DAT_10017544 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1634U)))
#undef LAB_10014b2c
#define LAB_10014b2c (*(uint8_t *)(0x10014b2cU))
#undef PTR_recovered_10004fe0_10017004
#define PTR_recovered_10004fe0_10017004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x10f4U)))
#define local_54 (*(undefined4 *)(frame + 156))
#define local_50 (*(undefined4 *)(frame + 160))
#define local_3c (*(undefined * *)(frame + 180))
#define local_38 (*(undefined * *)(frame + 184))
#define auStackY_dc (*(undefined1 (*)[128])(frame + 20))
#define local_34 (*(undefined1 * *)(frame + 188))
#define local_30 (*(undefined1 * *)(frame + 192))
#define local_2c (*(undefined1 * *)(frame + 196))
#define local_20 (*(undefined4 * *)(frame + 208))
#define local_1c (*(undefined4 *)(frame + 212))
#define local_18 (*(undefined4 *)(frame + 216))
#define local_14 (*(uint * *)(frame + 220))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014940
 */

void recovered_10014940(void)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;
  byte bVar3;

  bVar3 = 0;
  local_14 = recovered_10005040(0x80);
  recovered_100050a0((void *)0x0);
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
  recovered_100054a0(&local_54);
  recovered_10014560((int *)&local_20,&DAT_100174f4,0);
  recovered_100050a0(local_14);
  recovered_100054c0(&local_54);
  return;
}

#undef DAT_10016fac
#undef DAT_100174f4
#undef DAT_10017544
#undef LAB_10014b2c
#undef PTR_recovered_10004fe0_10017004
#undef local_54
#undef local_50
#undef local_3c
#undef local_38
#undef auStackY_dc
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_14 (*(void * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014b80
 */

int recovered_10014b80(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

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
      local_14 = recovered_10005040(uVar3 * 4);
      pvVar4 = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          *(undefined4 *)((int)local_14 + iVar6 * 4) = *(undefined4 *)((int)pvVar4 + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_100050a0(pvVar4);
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

#undef DAT_10017550
#define DAT_10017550 (*(char *)(((uintptr_t)pf_module_state + 0x1640U)))
#undef DAT_10017554
#define DAT_10017554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1644U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014cc0
 */

uint recovered_10014cc0(uint in_ECX,uchar *in_EDX,int param_3)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014db0
 */

void recovered_10014db0(int *in_ECX,undefined4 *in_EDX)

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
      pvVar4 = recovered_10005040(uVar6 * 0x28);
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
          recovered_100050a0((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + 0x28;
        } while (uVar8 < (uint)in_ECX[1]);
      }
      recovered_100050a0((void *)*in_ECX);
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
    pvVar5 = recovered_10005040(iVar1 * 8);
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
    recovered_100050a0(pvVar4);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014fa0
 */

void recovered_10014fa0(int *in_ECX,undefined4 *in_EDX)

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
      pvVar3 = recovered_10005040(uVar5 * 8);
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
      recovered_100050a0(pointer);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015040
 */

void recovered_10015040(int *in_ECX,undefined4 *in_EDX)

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
      pvVar3 = recovered_10005040(uVar5 * 8);
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
      recovered_100050a0(pointer);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100150e0
 */

undefined4 recovered_100150e0(int *in_ECX,int *in_EDX)

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
      pvVar4 = recovered_10005040(size);
      pointer = (void *)*in_ECX;
      iVar6 = in_ECX[1];
      if (iVar6 != 0) {
        iVar3 = 0;
        do {
          *(undefined1 *)((int)pvVar4 + iVar3) = *(undefined1 *)((int)pointer + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar6 != iVar3);
      }
      recovered_100050a0(pointer);
      *in_ECX = (int)pvVar4;
      in_ECX[2] = size;
      puVar7 = (undefined4 *)*in_EDX;
      iVar6 = in_EDX[1];
    }
    if (iVar6 != 0) {
      puVar1 = puVar7 + iVar6 * 2;
      do {
        recovered_10012650(in_ECX,*in_ECX + in_ECX[1],(undefined1 *)*puVar7,
                           (undefined1 *)*puVar7 + puVar7[1]);
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar1);
    }
  }
  uVar5 = recovered_10012760(in_ECX,(uint *)(in_ECX + 3));
  return uVar5;
}


#define local_18 (*(char *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100151e0
 */

undefined4
recovered_100151e0(undefined4 in_ECX,void *in_EDX,int param_3,int param_4,uint param_5,uint param_6)

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
        *(undefined1 *)((int)in_EDX + uVar7) = *(undefined1 *)(param_3 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    uVar1 = CONCAT31((int3)(uVar5 >> 8),1);
    if (param_5 <= param_6) {
      return uVar1;
    }
    iVar13 = param_5 - uVar5;
    pcVar9 = (char *)((int)in_EDX + uVar5);
    pcVar14 = (char *)(param_3 + uVar5);
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
          *(char *)((int)in_EDX + uVar5) = *(char *)(param_4 + uVar5) + *(char *)(param_3 + uVar5);
          uVar5 = uVar5 + 1;
        } while (param_5 != uVar5);
      }
      break;
    }
  case 0:
    pvVar4 = recovered_100019c0(in_EDX,(void *)param_3,param_5);
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
            *(undefined1 *)((int)in_EDX + (int)pvVar6) = *(undefined1 *)(param_3 + (int)pvVar6);
            pvVar6 = (void *)((int)pvVar6 + 1);
          } while (pvVar4 != pvVar6);
          pvVar6 = pvVar4;
        }
        if (pvVar6 < param_5) {
          iVar13 = param_5 - (int)pvVar4;
          pcVar9 = (char *)((int)in_EDX + (int)pvVar4);
          pcVar14 = (char *)(param_3 + (int)pvVar4);
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
             (char)(uVar7 + *(byte *)(param_4 + uVar5) >> 1) + *(char *)(param_3 + uVar5);
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
          *(undefined1 *)((int)in_EDX + uVar7) = *(undefined1 *)(param_3 + uVar7);
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      uVar1 = CONCAT31((int3)(uVar5 >> 8),1);
      if (param_5 <= param_6) {
        return uVar1;
      }
      iVar13 = param_5 - uVar5;
      pcVar9 = (char *)((int)in_EDX + uVar5);
      pcVar14 = (char *)(param_3 + uVar5);
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
        *(char *)((int)in_EDX + uVar5) = local_18 + *(char *)(param_3 + uVar5);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015450
 */

void recovered_10015450(char in_CL,uchar *in_EDX,int *param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  recovered_10001aa0(in_EDX,0x800);
  param_3[1] = 0;
  uVar2 = 0;
  if ((uint)param_3[2] < 0x10) {
    pvVar3 = recovered_10005040(0x10);
    pvVar1 = (void *)*param_3;
    iVar6 = param_3[1];
    if (iVar6 != 0) {
      iVar5 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar6 != iVar5);
    }
    recovered_100050a0(pvVar1);
    *param_3 = (int)pvVar3;
    param_3[2] = 0x10;
    uVar2 = param_3[1];
    if (0xf < uVar2) goto LAB_100154e2;
  }
  do {
    *(undefined1 *)(*param_3 + uVar2) = 0;
    uVar2 = param_3[1] + 1;
    param_3[1] = uVar2;
  } while (uVar2 < 0x10);
LAB_100154e2:
  param_4[1] = 0;
  if (in_CL == '\0') {
    *(undefined1 *)(*param_3 + 7) = 1;
    *(undefined1 *)(*param_3 + 8) = 0xff;
    uVar2 = param_4[1];
    iVar6 = 0;
    do {
      if (uVar2 == param_4[2]) {
        uVar4 = 4;
        if (uVar2 != 0) {
          uVar4 = uVar2 * 2;
        }
        if (uVar2 < uVar4) {
          pvVar3 = recovered_10005040(uVar4);
          pvVar1 = (void *)*param_4;
          iVar5 = param_4[1];
          if (iVar5 != 0) {
            iVar7 = 0;
            do {
              *(undefined1 *)((int)pvVar3 + iVar7) = *(undefined1 *)((int)pvVar1 + iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar5 != iVar7);
          }
          recovered_100050a0(pvVar1);
          *param_4 = (int)pvVar3;
          param_4[2] = uVar4;
          uVar2 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar2) = (char)iVar6;
      uVar2 = param_4[1] + 1;
      param_4[1] = uVar2;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
  }
  else {
    *(undefined1 *)(*param_3 + 3) = 0xc;
    uVar2 = param_4[1];
    iVar6 = 0;
    do {
      if (uVar2 == param_4[2]) {
        uVar4 = 4;
        if (uVar2 != 0) {
          uVar4 = uVar2 * 2;
        }
        if (uVar2 < uVar4) {
          pvVar3 = recovered_10005040(uVar4);
          pvVar1 = (void *)*param_4;
          iVar5 = param_4[1];
          if (iVar5 != 0) {
            iVar7 = 0;
            do {
              *(undefined1 *)((int)pvVar3 + iVar7) = *(undefined1 *)((int)pvVar1 + iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar5 != iVar7);
          }
          recovered_100050a0(pvVar1);
          *param_4 = (int)pvVar3;
          param_4[2] = uVar4;
          uVar2 = param_4[1];
        }
      }
      *(char *)(*param_4 + uVar2) = (char)iVar6;
      uVar2 = param_4[1] + 1;
      param_4[1] = uVar2;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xc);
  }
  iVar6 = *param_3;
  iVar5 = *param_4;
  iVar8 = 0;
  iVar9 = 1;
  iVar7 = 0;
  do {
    if (*(char *)(iVar6 + -1 + iVar9) != '\0') {
      uVar2 = 0;
      do {
        uVar4 = (uint)*(byte *)(iVar5 + iVar8 + uVar2);
        *(uint *)(in_EDX + uVar4 * 4) = iVar7 + uVar2;
        *(int *)(in_EDX + uVar4 * 4 + 0x400) = iVar9;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(iVar6 + -1 + iVar9));
      iVar8 = iVar8 + uVar2;
      iVar7 = iVar7 + uVar2;
    }
    iVar7 = iVar7 * 2;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x11);
  return;
}


#undef DAT_10015f20
#define DAT_10015f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10015f24
#define DAT_10015f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10015f28
#define DAT_10015f28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10015f70
#define DAT_10015f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x60U)))
#undef DAT_10015f90
#define DAT_10015f90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_10016148
#define DAT_10016148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x238U)))
#undef DAT_100161b0
#define DAT_100161b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_100161b4
#define DAT_100161b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_100161b8
#define DAT_100161b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a8U)))
#undef DAT_10017954
#define DAT_10017954 (*(char *)(((uintptr_t)pf_module_state + 0x1a44U)))
#undef DAT_10017958
#define DAT_10017958 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a48U)))
#undef DAT_10017998
#define DAT_10017998 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a88U)))
#undef DAT_100179d8
#define DAT_100179d8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1ac8U)))
#undef DAT_10017a18
#define DAT_10017a18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b08U)))
#undef DAT_10017a58
#define DAT_10017a58 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b48U)))
#undef DAT_10017a98
#define DAT_10017a98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b88U)))
#undef DAT_10017ad8
#define DAT_10017ad8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1bc8U)))
#undef DAT_10017b18
#define DAT_10017b18 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c08U)))
#undef _DAT_10015f20
#define _DAT_10015f20 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_10015f24
#define _DAT_10015f24 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10015f28
#define _DAT_10015f28 (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef _DAT_10015f70
#define _DAT_10015f70 (*(double *)(((uintptr_t)pf_module_state + 0x60U)))
#undef _DAT_10016148
#define _DAT_10016148 (*(double *)(((uintptr_t)pf_module_state + 0x238U)))
#undef _DAT_100161b0
#define _DAT_100161b0 (*(float *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef _DAT_100161b4
#define _DAT_100161b4 (*(float *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef _DAT_100161b8
#define _DAT_100161b8 (*(float *)(((uintptr_t)pf_module_state + 0x2a8U)))
#define local_38 (*(double *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10015690(int in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;

  if (DAT_10017954 == '\0') {
    dVar1 = 0.0;
    iVar6 = -0x200;
    do {
      dVar3 = _DAT_10015f70;
      dVar9 = dVar1 + dVar1 + 1.0;
      dVar2 = (double)_DAT_100161b0;
      dVar8 = recovered_100024c0(dVar2 * _DAT_10015f70 * dVar9 * 0.0);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c48U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * dVar9);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c50U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * (dVar9 + dVar9));
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c58U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * dVar9 * (double)_DAT_10015f20);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c60U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * dVar9 * (double)_DAT_100161b4);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c68U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * dVar9 * (double)_DAT_10015f24);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c70U)) = dVar8;
      dVar8 = recovered_100024c0(dVar2 * dVar3 * dVar9 * (double)_DAT_100161b8);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c78U)) = dVar8;
      dVar9 = recovered_100024c0(dVar2 * dVar3 * dVar9 * (double)_DAT_10015f28);
      *(double *)(iVar6 + ((uintptr_t)pf_module_state+0x1c80U)) = dVar9;
      dVar1 = dVar1 + 1.0;
      iVar6 = iVar6 + 0x40;
    } while (iVar6 != 0);
    DAT_10017954 = '\x01';
  }
  iVar6 = 0;
  puVar7 = &DAT_10017958;
  do {
    local_38 = _DAT_10016148;
    if (iVar6 != 0) {
      local_38 = 1.0;
    }
    iVar5 = 0;
    do {
      iVar4 = -0x200;
      dVar1 = 0.0;
      do {
        dVar9 = *(double *)((int)puVar7 + iVar4 + 0x200);
        dVar1 = (double)(&DAT_10017b18)[iVar5] * *(double *)(in_ECX + 0x238 + iVar4) * dVar9 +
                (double)(&DAT_10017ad8)[iVar5] * *(double *)(in_ECX + 0x230 + iVar4) * dVar9 +
                (double)(&DAT_10017a98)[iVar5] * *(double *)(in_ECX + 0x228 + iVar4) * dVar9 +
                (double)(&DAT_10017a58)[iVar5] * *(double *)(in_ECX + 0x220 + iVar4) * dVar9 +
                (double)(&DAT_10017a18)[iVar5] * *(double *)(in_ECX + 0x218 + iVar4) * dVar9 +
                (double)(&DAT_100179d8)[iVar5] * *(double *)(in_ECX + 0x210 + iVar4) * dVar9 +
                (double)(&DAT_10017998)[iVar5] * *(double *)(in_ECX + 0x208 + iVar4) * dVar9 +
                (double)(&DAT_10017958)[iVar5] * *(double *)(in_ECX + 0x200 + iVar4) * dVar9 + dVar1
        ;
        iVar4 = iVar4 + 0x40;
      } while (iVar4 != 0);
      iVar4 = iVar5 + iVar6 * 8;
      dVar1 = (local_38 * *(double *)((uint)(iVar5 == 0) * 8 + ((uintptr_t)pf_module_state+0x2c0U)) * dVar1) /
              (double)*(byte *)(in_EDX + iVar4);
      *(int *)(param_3 + iVar4 * 4) =
           (int)ROUND(dVar1 + *(double *)(&DAT_10015f90 + (uint)(0.0 <= dVar1) * 8));
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 8);
  return;
}

#undef DAT_10015f20
#undef DAT_10015f24
#undef DAT_10015f28
#undef DAT_10015f70
#undef DAT_10015f90
#undef DAT_10016148
#undef DAT_100161b0
#undef DAT_100161b4
#undef DAT_100161b8
#undef DAT_10017954
#undef DAT_10017958
#undef DAT_10017998
#undef DAT_100179d8
#undef DAT_10017a18
#undef DAT_10017a58
#undef DAT_10017a98
#undef DAT_10017ad8
#undef DAT_10017b18
#undef _DAT_10015f20
#undef _DAT_10015f24
#undef _DAT_10015f28
#undef _DAT_10015f70
#undef _DAT_10016148
#undef _DAT_100161b0
#undef _DAT_100161b4
#undef _DAT_100161b8
#undef local_38

#undef DAT_100166d0
#define DAT_100166d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7c0U)))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015990
 */

void recovered_10015990(int in_ECX,int *in_EDX,int *param_3,int param_4,uint *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;

  uVar7 = 0;
  uVar4 = *in_EDX - *param_3;
  *param_3 = *in_EDX;
  uVar5 = (int)uVar4 >> 0x1f;
  if (uVar4 != 0) {
    uVar7 = 0;
    uVar6 = (uVar4 ^ uVar5) - uVar5;
    do {
      uVar7 = uVar7 + 1;
      bVar12 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar12);
  }
  iVar1 = *(int *)(param_4 + 0x400 + uVar7 * 4);
  if (iVar1 != 0) {
    uVar6 = *(uint *)(param_4 + uVar7 * 4);
    cVar2 = *(char *)(in_ECX + 0xc);
    local_14 = *(int *)(in_ECX + 0x10);
    uVar9 = iVar1 - 1;
    do {
      while( true ) {
        cVar2 = ((uVar6 >> (uVar9 & 0x1f) & 1) != 0) + cVar2 * '\x02';
        *(char *)(in_ECX + 0xc) = cVar2;
        local_14 = local_14 + 1;
        *(int *)(in_ECX + 0x10) = local_14;
        if (local_14 != 8) break;
        recovered_10015e40((int *)in_ECX,cVar2);
        *(undefined1 *)(in_ECX + 0xc) = 0;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        local_14 = 0;
        cVar2 = '\0';
        bVar12 = uVar9 == 0;
        uVar9 = uVar9 - 1;
        if (bVar12) goto LAB_10015a4b;
      }
      bVar12 = uVar9 != 0;
      uVar9 = uVar9 - 1;
    } while (bVar12);
  }
LAB_10015a4b:
  if (uVar7 != 0) {
    bVar3 = (byte)uVar7;
    cVar2 = *(char *)(in_ECX + 0xc);
    iVar1 = *(int *)(in_ECX + 0x10);
    do {
      uVar7 = uVar7 - 1;
      cVar2 = (((uVar5 & ~(-1 << (bVar3 & 0x1f))) + uVar4 >> (uVar7 & 0x1f) & 1) != 0) +
              cVar2 * '\x02';
      *(char *)(in_ECX + 0xc) = cVar2;
      iVar1 = iVar1 + 1;
      *(int *)(in_ECX + 0x10) = iVar1;
      if (iVar1 == 8) {
        recovered_10015e40((int *)in_ECX,cVar2);
        *(undefined1 *)(in_ECX + 0xc) = 0;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        iVar1 = 0;
        cVar2 = '\0';
      }
    } while (uVar7 != 0);
  }
  iVar1 = 1;
  uVar4 = 0;
  do {
    while (uVar5 = in_EDX[(&DAT_100166d0)[iVar1]], uVar5 == 0) {
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + 1;
      if (iVar1 == 0x40) {
        if ((uVar4 != 0) && (uVar4 = param_5[0x100], uVar4 != 0)) {
          uVar5 = *param_5;
          cVar2 = *(char *)(in_ECX + 0xc);
          iVar1 = *(int *)(in_ECX + 0x10);
          do {
            uVar4 = uVar4 - 1;
            cVar2 = ((uVar5 >> (uVar4 & 0x1f) & 1) != 0) + cVar2 * '\x02';
            *(char *)(in_ECX + 0xc) = cVar2;
            iVar1 = iVar1 + 1;
            *(int *)(in_ECX + 0x10) = iVar1;
            if (iVar1 == 8) {
              recovered_10015e40((int *)in_ECX,cVar2);
              *(undefined1 *)(in_ECX + 0xc) = 0;
              *(undefined4 *)(in_ECX + 0x10) = 0;
              iVar1 = 0;
              cVar2 = '\0';
            }
          } while (uVar4 != 0);
        }
        return;
      }
    }
    for (; 0xf < uVar4; uVar4 = uVar4 - 0x10) {
      uVar7 = param_5[0x1f0];
      if (uVar7 != 0) {
        uVar6 = param_5[0xf0];
        cVar2 = *(char *)(in_ECX + 0xc);
        iVar10 = *(int *)(in_ECX + 0x10);
        do {
          uVar7 = uVar7 - 1;
          cVar2 = ((uVar6 >> (uVar7 & 0x1f) & 1) != 0) + cVar2 * '\x02';
          *(char *)(in_ECX + 0xc) = cVar2;
          iVar10 = iVar10 + 1;
          *(int *)(in_ECX + 0x10) = iVar10;
          if (iVar10 == 8) {
            recovered_10015e40((int *)in_ECX,cVar2);
            *(undefined1 *)(in_ECX + 0xc) = 0;
            *(undefined4 *)(in_ECX + 0x10) = 0;
            iVar10 = 0;
            cVar2 = '\0';
          }
        } while (uVar7 != 0);
      }
    }
    uVar9 = (int)uVar5 >> 0x1f;
    uVar7 = (uVar5 ^ uVar9) - uVar9;
    uVar6 = 0;
    iVar10 = -1;
    do {
      iVar8 = iVar10;
      uVar11 = uVar6;
      iVar10 = iVar8 + 1;
      bVar12 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
      uVar6 = uVar11 + 1;
    } while (bVar12);
    uVar7 = uVar4 << 6 | iVar10 * 4 + 4U;
    uVar4 = *(uint *)((int)param_5 + uVar7 + 0x400);
    cVar2 = *(char *)(in_ECX + 0xc);
    local_14 = *(int *)(in_ECX + 0x10);
    if (uVar4 != 0) {
      uVar7 = *(uint *)((int)param_5 + uVar7);
      do {
        uVar4 = uVar4 - 1;
        cVar2 = ((uVar7 >> (uVar4 & 0x1f) & 1) != 0) + cVar2 * '\x02';
        *(char *)(in_ECX + 0xc) = cVar2;
        local_14 = local_14 + 1;
        *(int *)(in_ECX + 0x10) = local_14;
        if (local_14 == 8) {
          recovered_10015e40((int *)in_ECX,cVar2);
          *(undefined1 *)(in_ECX + 0xc) = 0;
          *(undefined4 *)(in_ECX + 0x10) = 0;
          local_14 = 0;
          cVar2 = '\0';
        }
      } while (uVar4 != 0);
    }
    do {
      cVar2 = (((uVar9 & ~(-2 << ((byte)iVar10 & 0x1f))) + uVar5 >> (uVar11 & 0x1f) & 1) != 0) +
              cVar2 * '\x02';
      *(char *)(in_ECX + 0xc) = cVar2;
      local_14 = local_14 + 1;
      *(int *)(in_ECX + 0x10) = local_14;
      if (local_14 == 8) {
        recovered_10015e40((int *)in_ECX,cVar2);
        *(undefined1 *)(in_ECX + 0xc) = 0;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        local_14 = 0;
        cVar2 = '\0';
      }
      uVar11 = uVar11 - 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != -2);
    iVar1 = iVar1 + 1;
    uVar4 = 0;
  } while (iVar1 != 0x40);
  return;
}

#undef DAT_100166d0
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015d40
 */

void recovered_10015d40(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint size;
  int iVar5;
  undefined1 *puVar6;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pvVar3 = recovered_10005040(param_3);
    pvVar1 = (void *)*param_1;
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      iVar5 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    recovered_100050a0(pvVar1);
    *param_1 = (int)pvVar3;
    param_1[2] = param_3;
    puVar6 = param_2 + param_3;
    uVar4 = param_1[1];
    do {
      if (uVar4 == param_1[2]) {
        size = 4;
        if (uVar4 != 0) {
          size = uVar4 * 2;
        }
        if (uVar4 < size) {
          pvVar3 = recovered_10005040(size);
          pvVar1 = (void *)*param_1;
          iVar2 = param_1[1];
          if (iVar2 != 0) {
            iVar5 = 0;
            do {
              *(undefined1 *)((int)pvVar3 + iVar5) = *(undefined1 *)((int)pvVar1 + iVar5);
              iVar5 = iVar5 + 1;
            } while (iVar2 != iVar5);
          }
          recovered_100050a0(pvVar1);
          *param_1 = (int)pvVar3;
          param_1[2] = size;
          uVar4 = param_1[1];
        }
      }
      *(undefined1 *)(*param_1 + uVar4) = *param_2;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
      param_2 = param_2 + 1;
    } while (param_2 != puVar6);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015e40
 */

void recovered_10015e40(int *in_ECX,char in_DL)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
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
      pvVar3 = recovered_10005040(uVar5);
      pvVar1 = (void *)*in_ECX;
      iVar2 = in_ECX[1];
      if (iVar2 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      recovered_100050a0(pvVar1);
      *in_ECX = (int)pvVar3;
      in_ECX[2] = uVar5;
      uVar4 = in_ECX[1];
    }
  }
  *(char *)(*in_ECX + uVar4) = in_DL;
  uVar4 = in_ECX[1] + 1;
  in_ECX[1] = uVar4;
  if (in_DL == -1) {
    if (uVar4 == in_ECX[2]) {
      uVar5 = 4;
      if (uVar4 != 0) {
        uVar5 = uVar4 * 2;
      }
      if (uVar4 < uVar5) {
        pvVar3 = recovered_10005040(uVar5);
        pvVar1 = (void *)*in_ECX;
        iVar2 = in_ECX[1];
        if (iVar2 != 0) {
          iVar6 = 0;
          do {
            *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar2 != iVar6);
        }
        recovered_100050a0(pvVar1);
        *in_ECX = (int)pvVar3;
        in_ECX[2] = uVar5;
        uVar4 = in_ECX[1];
      }
    }
    *(undefined1 *)(*in_ECX + uVar4) = 0;
    in_ECX[1] = in_ECX[1] + 1;
  }
  return;
}

