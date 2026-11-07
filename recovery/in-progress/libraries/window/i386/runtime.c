/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100090a8
#define DAT_100090a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x180aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000590
 */

void recovered_10000590(void)

{
  unsigned char frame[64] = {0};

  DAT_100090a8 = 0;
  recovered_100005a0();
  return;
}

#undef DAT_100090a8

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
#undef DAT_100090a8
#define DAT_100090a8 (*(char *)(((uintptr_t)pf_module_state + 0x180aU)))
#undef DAT_100090ac
#define DAT_100090ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x180eU)))
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
 * Address: 0x100005a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005a0(void)

{
  unsigned char frame[208] = {0};

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

  if (DAT_100090a8 != '\0') {
    return;
  }
  DAT_100090ac = 0;
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
                goto LAB_10000684;
              }
              uVar6 = auStack_a0[uVar1 * 2];
              auStack_a0[uVar1 * 2 + 3] = auStack_a0[uVar1 * 2 + 1];
              auStack_a0[uVar1 * 2 + 2] = uVar6;
              uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
            uVar6 = 0;
          }
LAB_10000684:
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
        if (iVar3 == 0) goto LAB_1000077c;
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
          puVar4 = (uint *)&DAT_100090ac;
          if (DAT_100090ac != 0) {
            puVar4 = (uint *)(local_14 + 1);
          }
          *puVar4 = (uint)piVar10;
          local_14 = piVar10;
        }
        puVar8 = puVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar10 = local_14;
      if (DAT_100090ac != 0) {
        DAT_100090a8 = 1;
        return;
      }
    }
  }
LAB_1000077c:
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
    piVar5 = &DAT_100090ac;
    if (DAT_100090ac != 0) {
      piVar5 = piVar10 + 1;
    }
    *piVar5 = 0x300000;
  }
  DAT_100090a8 = 1;
  return;
}

#undef DAT_00006088
#undef DAT_0000608c
#undef DAT_00006090
#undef DAT_00006094
#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_100090a8
#undef DAT_100090ac
#undef _DAT_00006088
#undef _DAT_0000608c
#undef _DAT_00300000
#undef _DAT_00300004
#undef local_18
#undef local_14
#undef auStack_a0

#undef DAT_100090ac
#define DAT_100090ac (*(int * *)(((uintptr_t)pf_module_state + 0x180eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

int recovered_100007f0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_100005a0();
  iVar1 = 0;
  for (piVar2 = DAT_100090ac; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

#undef DAT_100090ac

#undef DAT_100090ac
#define DAT_100090ac (*(int *)(((uintptr_t)pf_module_state + 0x180eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000830
 */

void recovered_10000830(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100005a0();
  for (iVar1 = DAT_100090ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_100090ac

#undef DAT_100090ac
#define DAT_100090ac (*(int * *)(((uintptr_t)pf_module_state + 0x180eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000870
 */

int recovered_10000870(void)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;

  recovered_100005a0();
  iVar2 = 0;
  for (piVar1 = DAT_100090ac; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  return iVar2;
}

#undef DAT_100090ac

#undef DAT_100090ac
#define DAT_100090ac (*(int *)(((uintptr_t)pf_module_state + 0x180eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a0
 */

void recovered_100008a0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;

  recovered_100005a0();
  for (iVar1 = DAT_100090ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_100090ac

#undef DAT_100090ac
#define DAT_100090ac (*(uint * *)(((uintptr_t)pf_module_state + 0x180eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008e0
 */

uint * recovered_100008e0(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;

  if ((param_1 != 0) && (recovered_100005a0(), DAT_100090ac != (uint *)0x0)) {
    uVar3 = param_1 + 0xfU & 0xfffffff0;
    puVar2 = DAT_100090ac;
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

#undef DAT_100090ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000960
 */

longlong recovered_10000960(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100009a0
 */

ulonglong recovered_100009a0(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100009e0
 */

undefined8 recovered_100009e0(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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


#define local_18 (*(uint *)(frame + 16))
#define local_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a30
 */

undefined8 recovered_10000a30(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[72] = {0};

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
 * Address: 0x10000b10
 */

undefined8 recovered_10000b10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

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


#define local_24 (*(uint *)(frame + 16))
#define local_20 (*(uint *)(frame + 20))
#define local_1c (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b80
 */

undefined8 recovered_10000b80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[84] = {0};

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
 * Address: 0x10000cc0
 */

undefined8 recovered_10000cc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000d80
 */

void recovered_10000d80(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000da0
 */

int recovered_10000da0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000dc0(size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[19]){return 0;}
 return ((void *(*)(size_t))(uintptr_t)api[0x4c/4])(size);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void recovered_10000e00(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);
}


/* Preserve the native WMAP tail-call arguments. Pooka's Free Software License. */
void * recovered_10000e40(void *pointer,size_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x6800;
 if(api[0]!=0x50414d57 || api[2]<0x58 || !api[21]){return 0;}
 return ((void *(*)(void *,size_t))(uintptr_t)api[0x54/4])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e80
 */

void * recovered_10000e80(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000eb0
 */

void * recovered_10000eb0(void *dst,void *src,uint bytes)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000f10
 */

void * recovered_10000f10(void *dst,int byte,uint bytes)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000f40
 */

void recovered_10000f40(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000f60
 */

void recovered_10000f60(undefined1 *param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000f80
 */

int recovered_10000f80(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10000fc0
 */

bool recovered_10000fc0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fe0
 */

bool recovered_10000fe0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001000
 */

bool recovered_10001000(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001020
 */

bool recovered_10001020(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

bool recovered_10001050(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001070
 */

bool recovered_10001070(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001090
 */

int recovered_10001090(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b0
 */

int recovered_100010b0(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d0
 */

uint recovered_100010d0(char *text)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001100
 */

int recovered_10001100(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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
      if (bVar1 != *param_2) goto LAB_10001136;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001136:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001140
 */

int recovered_10001140(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

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
      if (bVar1 != *param_2) goto LAB_10001176;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10001176:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001180
 */

void recovered_10001180(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100011a0
 */

int recovered_100011a0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;

  if (param_1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar6 = 0;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (*(char *)(param_1 + uVar7) != '\0');
    iVar1 = Ram00006800;
    pvVar4 = (void *)0x0;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x4f < uVar2 &&
        (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x684c), pcVar3 != (code *)0x0)))) {
      pvVar5 = (*pcVar3)(uVar6);
      pvVar4 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        if (uVar6 != 0) {
          uVar6 = 0xffffffff;
          do {
            *(undefined1 *)((int)pvVar5 + uVar6 + 1) = *(undefined1 *)(param_1 + 1 + uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar7 != uVar6);
        }
        pvVar4 = pvVar5;
      }
    }
  }
  return (int)pvVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001240
 */

char * recovered_10001240(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001280
 */

int recovered_10001280(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_100012bb:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_100012bb;
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
 * Address: 0x100012d0
 */

char * recovered_100012d0(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001320
 */

char * recovered_10001320(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

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
          if (cVar4 == '\0') goto LAB_10001363;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10001363:
  return pcVar3;
}


#undef DAT_10007d4c
#define DAT_10007d4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001370
 */

undefined * recovered_10001370(void)

{
  unsigned char frame[64] = {0};

  return &DAT_10007d4c;
}

#undef DAT_10007d4c

#undef PTR_DAT_10009008
#define PTR_DAT_10009008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x176aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001380
 */

undefined ** recovered_10001380(void)

{
  unsigned char frame[64] = {0};

  return &PTR_DAT_10009008;
}

#undef PTR_DAT_10009008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

undefined4 recovered_10001390(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x574d4236;
  }
  return 0x574d4236;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100013b0(double param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)_DAT_100078a0;
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

#undef DAT_100078a0
#undef _DAT_100078a0

#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100013e0(double param_1,int *param_2)

{
  unsigned char frame[64] = {0};

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
        dVar1 = dVar1 * (double)_DAT_100078a0;
        iVar2 = iVar2 + 1;
      } while (1.0 <= dVar1);
    }
    if (dVar1 < (double)_DAT_100078a0 && 0.0 < dVar1) {
      do {
        dVar1 = dVar1 + dVar1;
        iVar2 = iVar2 + -1;
        if (dVar1 <= 0.0) break;
      } while (dVar1 < (double)_DAT_100078a0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
  }
  return;
}

#undef DAT_100078a0
#undef _DAT_100078a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014c0
 */

longdouble recovered_100014c0(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001520
 */

longdouble recovered_10001520(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100015c0
 */

longdouble recovered_100015c0(double param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001610
 */

longdouble recovered_10001610(double param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001670
 */

void recovered_10001670(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078a4
#define DAT_100078a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6U)))
#undef DAT_100078a8
#define DAT_100078a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_100078ac
#define DAT_100078ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_100078b0
#define DAT_100078b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_100078b4
#define DAT_100078b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100078b8
#define DAT_100078b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_100078bc
#define DAT_100078bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_100078c0
#define DAT_100078c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_100078c4
#define DAT_100078c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_100078c8
#define DAT_100078c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_100078cc
#define DAT_100078cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100078d0
#define DAT_100078d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_100078f8
#define DAT_100078f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a4
#define _DAT_100078a4 (*(float *)(((uintptr_t)pf_module_state + 0x6U)))
#undef _DAT_100078a8
#define _DAT_100078a8 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef _DAT_100078ac
#define _DAT_100078ac (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef _DAT_100078b0
#define _DAT_100078b0 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef _DAT_100078b4
#define _DAT_100078b4 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef _DAT_100078b8
#define _DAT_100078b8 (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef _DAT_100078bc
#define _DAT_100078bc (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef _DAT_100078c0
#define _DAT_100078c0 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef _DAT_100078c4
#define _DAT_100078c4 (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef _DAT_100078c8
#define _DAT_100078c8 (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef _DAT_100078cc
#define _DAT_100078cc (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef _DAT_100078d0
#define _DAT_100078d0 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_100078f8
#define _DAT_100078f8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001770(double param_1)

{
  unsigned char frame[64] = {0};

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
    lVar2 = (longdouble)_DAT_100078a4;
  }
  else {
    iVar1 = 0;
    if ((longdouble)_DAT_100078a8 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)_DAT_100078a0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)_DAT_100078a8 < lVar2);
    }
    if (lVar2 < (longdouble)_DAT_100078ac) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)_DAT_100078ac);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)_DAT_100078d0 +
            lVar9 / (longdouble)_DAT_100078cc +
            lVar8 / (longdouble)_DAT_100078c8 +
            lVar7 / (longdouble)_DAT_100078c4 +
            lVar6 / (longdouble)_DAT_100078c0 +
            lVar5 / (longdouble)_DAT_100078bc +
            lVar4 / (longdouble)_DAT_100078b8 +
            lVar3 / (longdouble)_DAT_100078b4 +
            (lVar10 * lVar2) / (longdouble)_DAT_100078b0 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)_DAT_100078f8;
  }
  return lVar2;
}

#undef DAT_100078a0
#undef DAT_100078a4
#undef DAT_100078a8
#undef DAT_100078ac
#undef DAT_100078b0
#undef DAT_100078b4
#undef DAT_100078b8
#undef DAT_100078bc
#undef DAT_100078c0
#undef DAT_100078c4
#undef DAT_100078c8
#undef DAT_100078cc
#undef DAT_100078d0
#undef DAT_100078f8
#undef _DAT_100078a0
#undef _DAT_100078a4
#undef _DAT_100078a8
#undef _DAT_100078ac
#undef _DAT_100078b0
#undef _DAT_100078b4
#undef _DAT_100078b8
#undef _DAT_100078bc
#undef _DAT_100078c0
#undef _DAT_100078c4
#undef _DAT_100078c8
#undef _DAT_100078cc
#undef _DAT_100078d0
#undef _DAT_100078f8

#undef DAT_10007920
#define DAT_10007920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

longlong recovered_10001890(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_10007920 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_10007920

#undef DAT_100078d4
#define DAT_100078d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100078d8
#define DAT_100078d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_100078dc
#define DAT_100078dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_10007900
#define DAT_10007900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_10007908
#define DAT_10007908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_10007910
#define DAT_10007910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_10007918
#define DAT_10007918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100078d4
#define _DAT_100078d4 (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef _DAT_100078d8
#define _DAT_100078d8 (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_100078dc
#define _DAT_100078dc (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_10007900
#define _DAT_10007900 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_10007908
#define _DAT_10007908 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_10007910
#define _DAT_10007910 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_10007918
#define _DAT_10007918 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100018e0(double param_1)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_10007900 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10007908;
    } while ((longdouble)_DAT_10007900 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10007910) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10007918;
    } while (lVar1 < (longdouble)_DAT_10007910);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)_DAT_100078dc +
         (lVar2 * lVar2) / (longdouble)_DAT_100078d8 +
         (longdouble)1 + lVar2 / (longdouble)_DAT_100078d4) * lVar1;
}

#undef DAT_100078d4
#undef DAT_100078d8
#undef DAT_100078dc
#undef DAT_10007900
#undef DAT_10007908
#undef DAT_10007910
#undef DAT_10007918
#undef _DAT_100078d4
#undef _DAT_100078d8
#undef _DAT_100078dc
#undef _DAT_10007900
#undef _DAT_10007908
#undef _DAT_10007910
#undef _DAT_10007918

#undef DAT_100078e0
#define DAT_100078e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_100078e4
#define DAT_100078e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_100078e8
#define DAT_100078e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10007900
#define DAT_10007900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_10007908
#define DAT_10007908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_10007910
#define DAT_10007910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_10007918
#define DAT_10007918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100078e0
#define _DAT_100078e0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_100078e4
#define _DAT_100078e4 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_100078e8
#define _DAT_100078e8 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef _DAT_10007900
#define _DAT_10007900 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_10007908
#define _DAT_10007908 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_10007910
#define _DAT_10007910 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_10007918
#define _DAT_10007918 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001980(double param_1)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)_DAT_10007900 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10007908;
    } while ((longdouble)_DAT_10007900 < lVar1);
  }
  if (lVar1 < (longdouble)_DAT_10007910) {
    do {
      lVar1 = lVar1 + (longdouble)_DAT_10007918;
    } while (lVar1 < (longdouble)_DAT_10007910);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)_DAT_100078e8 +
         (lVar1 * lVar1) / (longdouble)_DAT_100078e4 +
         (longdouble)1 + lVar1 * (longdouble)_DAT_100078e0;
}

#undef DAT_100078e0
#undef DAT_100078e4
#undef DAT_100078e8
#undef DAT_10007900
#undef DAT_10007908
#undef DAT_10007910
#undef DAT_10007918
#undef _DAT_100078e0
#undef _DAT_100078e4
#undef _DAT_100078e8
#undef _DAT_10007900
#undef _DAT_10007908
#undef _DAT_10007910
#undef _DAT_10007918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

void recovered_10001a20(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078ec
#define DAT_100078ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078ec
#define _DAT_100078ec (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001a40(double param_1)

{
  unsigned char frame[64] = {0};

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
    dVar3 = (double)_DAT_100078ec;
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
      dVar3 = dVar3 * (double)_DAT_100078a0;
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

#undef DAT_100078a0
#undef DAT_100078ec
#undef _DAT_100078a0
#undef _DAT_100078ec

#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078ec
#define DAT_100078ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078ec
#define _DAT_100078ec (*(float *)(((uintptr_t)pf_module_state + 0x4eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001b20(double param_1)

{
  unsigned char frame[64] = {0};

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
    dVar2 = (double)_DAT_100078ec;
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
      dVar2 = dVar2 * (double)_DAT_100078a0;
      bVar10 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar4,uVar7);
}

#undef DAT_100078a0
#undef DAT_100078ec
#undef _DAT_100078a0
#undef _DAT_100078ec

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd0
 */

longdouble recovered_10001bd0(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001c40
 */

longdouble recovered_10001c40(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001cf0
 */

void recovered_10001cf0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001d50(float param_1,int *param_2)

{
  unsigned char frame[64] = {0};

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
        lVar3 = lVar3 * (longdouble)_DAT_100078a0;
        iVar1 = iVar1 + 1;
      } while ((longdouble)1 <= lVar3);
    }
    if (!((longdouble)_DAT_100078a0 <= lVar3 || lVar3 <= (longdouble)0)) {
      do {
        lVar3 = lVar3 + lVar3;
        iVar1 = iVar1 + -1;
        if (lVar3 <= (longdouble)0) break;
      } while (lVar3 < (longdouble)_DAT_100078a0);
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

#undef DAT_100078a0
#undef _DAT_100078a0

#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10001e40(float param_1,int param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * _DAT_100078a0;
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

#undef DAT_100078a0
#undef _DAT_100078a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e80
 */

longdouble recovered_10001e80(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001f20
 */

longdouble recovered_10001f20(float param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001f70
 */

longdouble recovered_10001f70(float param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10001fe0
 */

longdouble recovered_10001fe0(double param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x10002050
 */

longdouble recovered_10002050(float param_1)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100020d0
 */

longdouble recovered_100020d0(float param_1)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_10001670();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078a4
#define DAT_100078a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6U)))
#undef DAT_100078a8
#define DAT_100078a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaU)))
#undef DAT_100078ac
#define DAT_100078ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_100078b0
#define DAT_100078b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12U)))
#undef DAT_100078b4
#define DAT_100078b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef DAT_100078b8
#define DAT_100078b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef DAT_100078bc
#define DAT_100078bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_100078c0
#define DAT_100078c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22U)))
#undef DAT_100078c4
#define DAT_100078c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_100078c8
#define DAT_100078c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef DAT_100078cc
#define DAT_100078cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef DAT_100078d0
#define DAT_100078d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32U)))
#undef DAT_100078f8
#define DAT_100078f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5aU)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078a4
#define _DAT_100078a4 (*(float *)(((uintptr_t)pf_module_state + 0x6U)))
#undef _DAT_100078a8
#define _DAT_100078a8 (*(float *)(((uintptr_t)pf_module_state + 0xaU)))
#undef _DAT_100078ac
#define _DAT_100078ac (*(float *)(((uintptr_t)pf_module_state + 0xeU)))
#undef _DAT_100078b0
#define _DAT_100078b0 (*(float *)(((uintptr_t)pf_module_state + 0x12U)))
#undef _DAT_100078b4
#define _DAT_100078b4 (*(float *)(((uintptr_t)pf_module_state + 0x16U)))
#undef _DAT_100078b8
#define _DAT_100078b8 (*(float *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef _DAT_100078bc
#define _DAT_100078bc (*(float *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef _DAT_100078c0
#define _DAT_100078c0 (*(float *)(((uintptr_t)pf_module_state + 0x22U)))
#undef _DAT_100078c4
#define _DAT_100078c4 (*(float *)(((uintptr_t)pf_module_state + 0x26U)))
#undef _DAT_100078c8
#define _DAT_100078c8 (*(float *)(((uintptr_t)pf_module_state + 0x2aU)))
#undef _DAT_100078cc
#define _DAT_100078cc (*(float *)(((uintptr_t)pf_module_state + 0x2eU)))
#undef _DAT_100078d0
#define _DAT_100078d0 (*(float *)(((uintptr_t)pf_module_state + 0x32U)))
#undef _DAT_100078f8
#define _DAT_100078f8 (*(double *)(((uintptr_t)pf_module_state + 0x5aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_100020f0(float param_1)

{
  unsigned char frame[64] = {0};

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

  fVar1 = _DAT_100078a4;
  if (0.0 < param_1) {
    iVar10 = 0;
    if (_DAT_100078a8 < param_1) {
      iVar10 = 0;
      do {
        param_1 = param_1 * _DAT_100078a0;
        iVar10 = iVar10 + 1;
      } while (_DAT_100078a8 < param_1);
    }
    for (; param_1 < _DAT_100078ac; param_1 = param_1 + param_1) {
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
    fVar1 = (fVar9 * fVar2) / _DAT_100078d0 +
            fVar9 / _DAT_100078cc +
            fVar8 / _DAT_100078c8 +
            fVar7 / _DAT_100078c4 +
            fVar6 / _DAT_100078c0 +
            fVar5 / _DAT_100078bc +
            fVar4 / _DAT_100078b8 +
            fVar3 / _DAT_100078b4 + (fVar1 * fVar2) / _DAT_100078b0 + fVar1 + 0.0;
    fVar1 = fVar1 + fVar1 + (float)iVar10 * (float)_DAT_100078f8;
  }
  return (longdouble)fVar1;
}

#undef DAT_100078a0
#undef DAT_100078a4
#undef DAT_100078a8
#undef DAT_100078ac
#undef DAT_100078b0
#undef DAT_100078b4
#undef DAT_100078b8
#undef DAT_100078bc
#undef DAT_100078c0
#undef DAT_100078c4
#undef DAT_100078c8
#undef DAT_100078cc
#undef DAT_100078d0
#undef DAT_100078f8
#undef _DAT_100078a0
#undef _DAT_100078a4
#undef _DAT_100078a8
#undef _DAT_100078ac
#undef _DAT_100078b0
#undef _DAT_100078b4
#undef _DAT_100078b8
#undef _DAT_100078bc
#undef _DAT_100078c0
#undef _DAT_100078c4
#undef _DAT_100078c8
#undef _DAT_100078cc
#undef _DAT_100078d0
#undef _DAT_100078f8

#undef DAT_10007920
#define DAT_10007920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x82U)))
#define local_14 (*(undefined4 *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002220
 */

undefined4 recovered_10002220(double param_1)

{
  unsigned char frame[68] = {0};


  local_14 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_10007920 + (uint)(0.0 <= param_1) * 8));
  return local_14;
}

#undef DAT_10007920
#undef local_14

#undef DAT_100078d4
#define DAT_100078d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x36U)))
#undef DAT_100078d8
#define DAT_100078d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef DAT_100078dc
#define DAT_100078dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef DAT_10007900
#define DAT_10007900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_10007908
#define DAT_10007908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_10007910
#define DAT_10007910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_10007918
#define DAT_10007918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100078d4
#define _DAT_100078d4 (*(float *)(((uintptr_t)pf_module_state + 0x36U)))
#undef _DAT_100078d8
#define _DAT_100078d8 (*(float *)(((uintptr_t)pf_module_state + 0x3aU)))
#undef _DAT_100078dc
#define _DAT_100078dc (*(float *)(((uintptr_t)pf_module_state + 0x3eU)))
#undef _DAT_10007900
#define _DAT_10007900 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_10007908
#define _DAT_10007908 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_10007910
#define _DAT_10007910 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_10007918
#define _DAT_10007918 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002270(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;

  for (; (float)_DAT_10007900 < param_1; param_1 = param_1 + (float)_DAT_10007908) {
  }
  for (; param_1 < (float)_DAT_10007910; param_1 = param_1 + (float)_DAT_10007918) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / _DAT_100078dc +
          (fVar1 * fVar1) / _DAT_100078d8 + fVar1 / _DAT_100078d4 + 1.0) * param_1);
}

#undef DAT_100078d4
#undef DAT_100078d8
#undef DAT_100078dc
#undef DAT_10007900
#undef DAT_10007908
#undef DAT_10007910
#undef DAT_10007918
#undef _DAT_100078d4
#undef _DAT_100078d8
#undef _DAT_100078dc
#undef _DAT_10007900
#undef _DAT_10007908
#undef _DAT_10007910
#undef _DAT_10007918

#undef DAT_100078e0
#define DAT_100078e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef DAT_100078e4
#define DAT_100078e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x46U)))
#undef DAT_100078e8
#define DAT_100078e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef DAT_10007900
#define DAT_10007900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62U)))
#undef DAT_10007908
#define DAT_10007908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef DAT_10007910
#define DAT_10007910 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x72U)))
#undef DAT_10007918
#define DAT_10007918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7aU)))
#undef _DAT_100078e0
#define _DAT_100078e0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_100078e4
#define _DAT_100078e4 (*(float *)(((uintptr_t)pf_module_state + 0x46U)))
#undef _DAT_100078e8
#define _DAT_100078e8 (*(float *)(((uintptr_t)pf_module_state + 0x4aU)))
#undef _DAT_10007900
#define _DAT_10007900 (*(double *)(((uintptr_t)pf_module_state + 0x62U)))
#undef _DAT_10007908
#define _DAT_10007908 (*(double *)(((uintptr_t)pf_module_state + 0x6aU)))
#undef _DAT_10007910
#define _DAT_10007910 (*(double *)(((uintptr_t)pf_module_state + 0x72U)))
#undef _DAT_10007918
#define _DAT_10007918 (*(double *)(((uintptr_t)pf_module_state + 0x7aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002310(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;

  for (; (float)_DAT_10007900 < param_1; param_1 = param_1 + (float)_DAT_10007908) {
  }
  for (; param_1 < (float)_DAT_10007910; param_1 = param_1 + (float)_DAT_10007918) {
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / _DAT_100078e8 +
         (fVar1 * fVar1) / _DAT_100078e4 + fVar1 * _DAT_100078e0 + 1.0);
}

#undef DAT_100078e0
#undef DAT_100078e4
#undef DAT_100078e8
#undef DAT_10007900
#undef DAT_10007908
#undef DAT_10007910
#undef DAT_10007918
#undef _DAT_100078e0
#undef _DAT_100078e4
#undef _DAT_100078e8
#undef _DAT_10007900
#undef _DAT_10007908
#undef _DAT_10007910
#undef _DAT_10007918

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023b0
 */

void recovered_100023b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d0
 */

int recovered_100023d0(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
LAB_100024fc:
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
    if (param_3 <= uVar7) goto LAB_100024fc;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002520
 */

int recovered_10002520(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

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
LAB_1000264c:
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
    if (param_3 <= uVar7) goto LAB_1000264c;
    iVar4 = iVar4 * param_3 + uVar7;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while( true );
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078f0
#define DAT_100078f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078f0
#define _DAT_100078f0 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10002670(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

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
      lVar9 = lVar9 * (longdouble)_DAT_100078f0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)_DAT_100078f0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)_DAT_100078f0;
        pbVar5 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar5,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar5 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10002731;
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
LAB_10002731:
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
              lVar10 = lVar10 * (longdouble)_DAT_100078a0;
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

#undef DAT_100078a0
#undef DAT_100078f0
#undef _DAT_100078a0
#undef _DAT_100078f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

longdouble recovered_10002810(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10002670(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_100078f0
#define DAT_100078f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef _DAT_100078f0
#define _DAT_100078f0 (*(float *)(((uintptr_t)pf_module_state + 0x52U)))
#undef str_10007d51
#define str_10007d51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b3U)))
#undef str_10007d58
#define str_10007d58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4baU)))
#undef str_10007d69
#define str_10007d69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cbU)))
#define local_74 (*(uint *)(frame + 49))
#define local_70 (*(int *)(frame + 53))
#define local_6c (*(uint *)(frame + 57))
#define local_68 (*(int *)(frame + 61))
#define local_64 (*(int *)(frame + 65))
#define local_60 (*(int *)(frame + 69))
#define local_5c (*(int *)(frame + 73))
#define local_58 (*(int *)(frame + 77))
#define local_54 (*(int *)(frame + 81))
#define local_50 (*(int *)(frame + 85))
#define local_4c (*(int *)(frame + 89))
#define acStack_95 (*(char (*)[33])(frame + 16))
#define local_48 (*(int *)(frame + 93))
#define local_44 (*(int *)(frame + 97))
#define local_40 (*(ushort *)(frame + 101))
#define local_3e (*(ushort *)(frame + 103))
#define local_3c (*(ushort *)(frame + 105))
#define local_3a (*(ushort *)(frame + 107))
#define local_38 (*(ushort *)(frame + 109))
#define local_36 (*(ushort *)(frame + 111))
#define local_34 (*(ushort *)(frame + 113))
#define local_24 (*(char * *)(frame + 129))
#define local_20 (*(double * *)(frame + 133))
#define local_1c (*(char * *)(frame + 137))
#define local_18 (*(uint *)(frame + 141))
#define local_14 (*(int *)(frame + 145))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002840(char *param_1,uint param_2,char *param_3,double *param_4)

{
  unsigned char frame[197] = {0};

  double dVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort in_FPUControlWord = pf_fpu_control();

  if (param_2 != 0) {
    *param_1 = '\0';
  }
  local_14 = 0;
  local_18 = param_2;
LAB_10002874:
  do {
    cVar4 = *param_3;
    if (cVar4 == '%') {
      cVar4 = param_3[1];
      param_3 = param_3 + 1;
      if (cVar4 != '%') {
        while ((byte)(cVar4 - 0x30U) < 10) {
          pcVar5 = param_3 + 1;
          param_3 = param_3 + 1;
          cVar4 = *pcVar5;
        }
        if (cVar4 == '.') {
          do {
            cVar4 = param_3[1];
            param_3 = param_3 + 1;
          } while ((byte)(cVar4 - 0x30U) < 10);
        }
LAB_10002900:
        switch((uintptr_t)(cVar4)) {
        case 'I':
        case 'd':
        case 'i':
          local_1c = param_1;
          uVar7 = *(uint *)param_4;
          local_24 = param_3;
          if ((int)uVar7 < 0) {
            if (1 < local_18) {
              *param_1 = '-';
              local_1c = param_1 + 1;
              local_18 = local_18 - 1;
            }
            local_14 = local_14 + 1;
            uVar7 = -uVar7;
          }
          iVar6 = 0;
          do {
            acStack_95[iVar6 + 1] = str_10007d69[uVar7 % 10];
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
LAB_10002cea:
          param_4 = (double *)((int)param_4 + 4);
          param_3 = local_24 + 1;
          param_1 = local_1c;
          break;
        default:
          if (1 < local_18) {
            *param_1 = '?';
            param_1 = param_1 + 1;
            local_18 = local_18 - 1;
          }
          goto LAB_10002872;
        case 'X':
          local_24 = param_3;
          iVar6 = 0;
          uVar7 = *(uint *)param_4;
          do {
            acStack_95[iVar6 + 1] = str_10007d58[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          param_4 = (double *)((int)param_4 + 4);
          local_14 = local_14 + iVar6;
          do {
            if (1 < local_18) {
              *param_1 = acStack_95[iVar6];
              param_1 = param_1 + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          param_3 = local_24 + 1;
          break;
        case 'c':
          if (1 < local_18) {
            *param_1 = *(char *)param_4;
            param_1 = param_1 + 1;
            local_18 = local_18 - 1;
          }
          param_4 = (double *)((int)param_4 + 4);
          goto LAB_10002872;
        case 'f':
          dVar1 = *param_4;
          local_24 = param_3;
          if (0.0 <= dVar1) {
            local_1c = param_1;
          }
          else {
            if (1 < local_18) {
              *param_1 = '-';
              param_1 = param_1 + 1;
              local_18 = local_18 - 1;
            }
            local_1c = param_1;
            local_14 = local_14 + 1;
            dVar1 = -dVar1;
          }
          param_4 = param_4 + 1;
          local_40 = in_FPUControlWord | 0xc00;
          local_74 = (uint)ROUND(dVar1);
          iVar6 = 0;
          local_20 = (double *)local_74;
          uVar7 = local_74;
          do {
            acStack_95[iVar6 + 1] = str_10007d69[uVar7 % 10];
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
              dVar1 = (dVar1 - (double)(int)local_20) * (double)_DAT_100078f0;
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
                dVar1 = (dVar1 - (double)local_70) * (double)_DAT_100078f0;
                local_3c = in_FPUControlWord | 0xc00;
                local_68 = (int)ROUND(dVar1);
                local_20 = (double *)local_68;
                local_1c[2] = (char)local_68 + '0';
                if (local_18 - 5 < 0xfffffffe) {
                  local_5c = local_68;
                  dVar1 = (dVar1 - (double)local_68) * (double)_DAT_100078f0;
                  local_3a = in_FPUControlWord | 0xc00;
                  local_60 = (int)ROUND(dVar1);
                  local_1c[3] = (char)local_60 + '0';
                  if (uVar8 == 4) {
                    local_1c = local_1c + 4;
                  }
                  else {
                    local_4c = local_60;
                    dVar3 = (double)_DAT_100078f0;
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
                        local_48 = (int)ROUND((dVar3 - (double)local_58) * (double)_DAT_100078f0);
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
          param_3 = local_24 + 1;
          param_1 = local_1c;
          break;
        case 'h':
        case 'l':
        case 't':
        case 'z':
          goto switchD_1000290f_caseD_68;
        case 'p':
          uVar7 = *(uint *)param_4;
          if (1 < local_18) {
            *param_1 = '0';
            if (local_18 - 3 < 0xfffffffe) {
              param_1[1] = 'x';
              param_1 = param_1 + 2;
              local_18 = local_18 - 2;
            }
            else {
              param_1 = param_1 + 1;
              local_18 = 1;
            }
          }
          local_20 = (double *)((int)param_4 + 4);
          iVar6 = 0;
          do {
            acStack_95[iVar6 + 1] = str_10007d69[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          local_14 = local_14 + 2 + iVar6;
          do {
            if (1 < local_18) {
              *param_1 = acStack_95[iVar6];
              param_1 = param_1 + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          param_3 = param_3 + 1;
          param_4 = local_20;
          break;
        case 's':
          pcVar5 = str_10007d51;
          if (*(char **)param_4 != (char *)0x0) {
            pcVar5 = *(char **)param_4;
          }
          param_4 = (double *)((int)param_4 + 4);
          cVar4 = *pcVar5;
          if (cVar4 == '\0') {
            param_3 = param_3 + 1;
          }
          else {
            local_20 = param_4;
            do {
              pcVar5 = pcVar5 + 1;
              if (1 < local_18) {
                *param_1 = cVar4;
                param_1 = param_1 + 1;
                local_18 = local_18 - 1;
              }
              local_14 = local_14 + 1;
              cVar4 = *pcVar5;
            } while (cVar4 != '\0');
            param_3 = param_3 + 1;
          }
          break;
        case 'u':
          local_24 = param_3;
          local_1c = param_1;
          iVar6 = 0;
          uVar7 = *(uint *)param_4;
          do {
            acStack_95[iVar6 + 1] = str_10007d69[uVar7 % 10];
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
          goto LAB_10002cea;
        case 'x':
          local_24 = param_3;
          local_1c = param_1;
          iVar6 = 0;
          uVar7 = *(uint *)param_4;
          local_20 = param_4;
          do {
            acStack_95[iVar6 + 1] = str_10007d69[uVar7 & 0xf];
            iVar6 = iVar6 + 1;
            bVar2 = 0xf < uVar7;
            uVar7 = uVar7 >> 4;
          } while (bVar2);
          param_4 = (double *)((int)local_20 + 4);
          local_20 = param_4;
          local_14 = local_14 + iVar6;
          param_1 = local_1c;
          do {
            if (1 < local_18) {
              *param_1 = acStack_95[iVar6];
              param_1 = param_1 + 1;
              local_18 = local_18 - 1;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          param_3 = local_24 + 1;
        }
        goto LAB_10002874;
      }
      if (1 < local_18) {
        *param_1 = '%';
LAB_10002870:
        param_1 = param_1 + 1;
        local_18 = local_18 - 1;
      }
    }
    else {
      if (cVar4 == '\0') {
        if (param_2 != 0) {
          *param_1 = '\0';
        }
        return;
      }
      if (1 < local_18) {
        *param_1 = cVar4;
        goto LAB_10002870;
      }
    }
LAB_10002872:
    local_14 = local_14 + 1;
    param_3 = param_3 + 1;
  } while( true );
switchD_1000290f_caseD_68:
  cVar4 = param_3[1];
  param_3 = param_3 + 1;
  goto LAB_10002900;
}

#undef DAT_100078f0
#undef _DAT_100078f0
#undef str_10007d51
#undef str_10007d58
#undef str_10007d69
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
#undef acStack_95
#undef local_48
#undef local_44
#undef local_40
#undef local_3e
#undef local_3c
#undef local_3a
#undef local_38
#undef local_36
#undef local_34
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

void recovered_10002f30(char *param_1,uint param_2,char *param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  recovered_10002840(param_1,param_2,param_3,(double *)&param_4);
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint *)(((uintptr_t)pf_module_state + 0x1812U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1816U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_210 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f60
 */

void recovered_10002f60(char *param_1,int param_2)

{
  unsigned char frame[576] = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_100090b0 != 0) {
          DAT_100090b0 = DAT_100090b0 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_100090b0 == 0) {
            uVar5 = 0;
          }
          else {
            recovered_10000e80(local_210,&DAT_100090b4,DAT_100090b0);
            uVar5 = DAT_100090b0;
          }
          local_210[uVar5] = '\0';
          iVar3 = Ram00006800;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
             ((uVar5 = Ram00006808, 0xb < uVar5 &&
              ((uVar5 = Ram00006808, 0x43 < uVar5 &&
               (pcVar4 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar4 != (code *)0x0)))))) {
            (*pcVar4)(local_210);
          }
          DAT_100090b0 = 0;
        }
        else {
          if (DAT_100090b0 - 0x1ff < 0xfffffe00) {
            recovered_10000e80(local_210,&DAT_100090b4,DAT_100090b0);
            local_210[DAT_100090b0] = '\0';
            iVar3 = Ram00006800;
            if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
                (uVar5 = Ram00006808, 0xb < uVar5)) &&
               ((uVar5 = Ram00006808, 0x43 < uVar5 &&
                (pcVar4 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar4 != (code *)0x0)))) {
              (*pcVar4)(local_210);
            }
            DAT_100090b0 = 0;
          }
          pcVar1 = &DAT_100090b4 + DAT_100090b0;
          DAT_100090b0 = DAT_100090b0 + 1;
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
#undef DAT_100090b0
#undef DAT_100090b4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006840
#undef local_210

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint *)(((uintptr_t)pf_module_state + 0x1812U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1816U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_204 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003100
 */

void recovered_10003100(void)

{
  unsigned char frame[564] = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (DAT_100090b0 == 0) {
    uVar3 = 0;
  }
  else {
    recovered_10000e80(local_204,&DAT_100090b4,DAT_100090b0);
    uVar3 = DAT_100090b0;
  }
  local_204[uVar3] = '\0';
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x43 < uVar3 && (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)(local_204);
  }
  DAT_100090b0 = 0;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100090b0
#undef DAT_100090b4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006840
#undef local_204

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint *)(((uintptr_t)pf_module_state + 0x1812U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1816U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#define local_208 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003190
 */

void recovered_10003190(void)

{
  unsigned char frame[568] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (DAT_100090b0 != 0) {
    recovered_10000e80(local_208,&DAT_100090b4,DAT_100090b0);
    local_208[DAT_100090b0] = '\0';
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x43 < uVar2 &&
        (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar3 != (code *)0x0)))) {
      (*pcVar3)(local_208);
    }
    DAT_100090b0 = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100090b0
#undef DAT_100090b4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006840
#undef local_208

#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_10007d7a
#define DAT_10007d7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dcU)))
#define local_148 (*(char (*)[320])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003220
 */

void recovered_10003220(undefined *param_1,undefined1 *param_2)

{
  unsigned char frame[376] = {0};

  char *pcVar1;
  int extraout_EAX = 0;
  undefined1 *puVar2;

  pcVar1 = &DAT_10007d7a;
  if (param_1 != (undefined *)0x0) {
    pcVar1 = param_1;
  }
  puVar2 = &DAT_10007d50;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  recovered_10002f30(local_148,0x140,pcVar1,(char)puVar2);
  if (0 < extraout_EAX) {
    recovered_10002f60(local_148,extraout_EAX);
  }
  return;
}

#undef DAT_10007d50
#undef DAT_10007d7a
#undef local_148

#undef DAT_10007e64
#define DAT_10007e64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_10007d7d
#define str_10007d7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
#undef str_10007da0
#define str_10007da0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x502U)))
#undef str_10007dd9
#define str_10007dd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53bU)))
#undef str_10007e0e
#define str_10007e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x570U)))
#undef str_10007e34
#define str_10007e34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x596U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

void recovered_10003280(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_100010d0(str_10007d7d);
  recovered_10002f60(str_10007d7d,uVar1);
  uVar1 = recovered_100010d0(str_10007da0);
  recovered_10002f60(str_10007da0,uVar1);
  uVar1 = recovered_100010d0(str_10007dd9);
  recovered_10002f60(str_10007dd9,uVar1);
  uVar1 = recovered_100010d0(str_10007e0e);
  recovered_10002f60(str_10007e0e,uVar1);
  uVar1 = recovered_100010d0(str_10007e34);
  recovered_10002f60(str_10007e34,uVar1);
  uVar1 = recovered_100010d0(&DAT_10007e64);
  recovered_10002f60(&DAT_10007e64,uVar1);
  return;
}

#undef DAT_10007e64
#undef str_10007d7d
#undef str_10007da0
#undef str_10007dd9
#undef str_10007e0e
#undef str_10007e34

#undef DAT_10007e64
#define DAT_10007e64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_10007e67
#define str_10007e67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003340
 */

void recovered_10003340(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_100010d0(str_10007e67);
  recovered_10002f60(str_10007e67,uVar1);
  uVar1 = recovered_100010d0(&DAT_10007e64);
  recovered_10002f60(&DAT_10007e64,uVar1);
  return;
}

#undef DAT_10007e64
#undef str_10007e67

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint *)(((uintptr_t)pf_module_state + 0x1812U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1816U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_00006844
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_210 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003390
 */

bool recovered_10003390(int param_1,int param_2,char *param_3,byte param_4)

{
  unsigned char frame[576] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_100090b0 != 0) {
      recovered_10000e80(local_210,&DAT_100090b4,DAT_100090b0);
      local_210[DAT_100090b0] = '\0';
      iVar3 = Ram00006800;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
          (uVar1 = Ram00006808, 0xb < uVar1)) &&
         ((uVar1 = Ram00006808, 0x43 < uVar1 &&
          (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar2 != (code *)0x0)))) {
        (*pcVar2)(local_210);
      }
      DAT_100090b0 = 0;
    }
    iVar3 = Ram00006800;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
       ((uVar1 = Ram00006808, 0xb < uVar1 &&
        ((uVar1 = Ram00006808, 0x47 < uVar1 &&
         (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6844), pcVar2 != (code *)0x0)))))) {
      iVar3 = (*pcVar2)((char *)param_1,param_2,param_3,(uint)param_4);
      return iVar3 != 0;
    }
  }
  return false;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100090b0
#undef DAT_100090b4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_210

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003480
 */

undefined4 recovered_10003480(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003490
 */

void recovered_10003490(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a0
 */

undefined1 recovered_100034a0(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10007d7a
#define DAT_10007d7a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef str_10007efb
#define str_10007efb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_10007f08
#define str_10007f08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66aU)))
#undef str_10007f16
#define str_10007f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x678U)))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034b0
 */

undefined4 * recovered_100034b0(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  void *dst;
  undefined4 uVar9;
  bool bVar10;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar4 = recovered_10001100((byte *)param_1,(byte *)str_10007efb);
  if (iVar4 == 0) {
    uVar9 = 1;
  }
  else {
    iVar5 = recovered_10001100((byte *)param_1,(byte *)str_10007f08);
    if (iVar5 == 0) {
      uVar9 = 2;
    }
    else {
      iVar5 = recovered_10001100((byte *)param_1,(byte *)str_10007f16);
      if (iVar5 != 0) {
        puVar6 = recovered_10000dc0(800);
        if (puVar6 != (undefined4 *)0x0) {
          recovered_10000f10(puVar6,0,800);
          *puVar6 = 0;
          pcVar7 = recovered_10001240((char *)param_2,'r');
          bVar10 = true;
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10001240((char *)param_2,'+');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_10001240((char *)param_2,'a');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          *(bool *)(puVar6 + 0x44) = bVar10;
          pcVar7 = recovered_10001240((char *)param_2,'w');
          if (pcVar7 == (char *)0x0) {
            pcVar7 = recovered_10001240((char *)param_2,'a');
            bVar10 = true;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = recovered_10001240((char *)param_2,'+');
              bVar10 = pcVar7 != (char *)0x0;
            }
          }
          else {
            bVar10 = true;
          }
          *(bool *)((int)puVar6 + 0x111) = bVar10;
          pcVar7 = recovered_10001240((char *)param_2,'a');
          *(bool *)((int)puVar6 + 0x112) = pcVar7 != (char *)0x0;
          puVar6[0x43] = 0xffffffff;
          recovered_10002f30((char *)(puVar6 + 1),0xf1,&DAT_10007d7a,(char)param_1);
          recovered_10000f10(&local_1c,0,0xc);
          iVar4 = Ram00006800;
          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
              (uVar8 = Ram00006808, 0xb < uVar8)) &&
             (((uVar8 = Ram00006808, 0x37 < uVar8 &&
               (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6834), pcVar2 != (code *)0x0)) &&
              (iVar4 = (*pcVar2)((char *)param_1,&local_1c), iVar4 != 0)))) {
            pcVar7 = recovered_10001240((char *)param_2,'w');
            if (local_18 != 0 && pcVar7 == (char *)0x0) {
              if (*(char *)((int)puVar6 + 0x111) == '\x01') {
                uVar8 = puVar6[0x41];
                if (uVar8 < local_18) {
                  uVar3 = 0x100;
                  if (uVar8 != 0) {
                    uVar3 = uVar8;
                  }
                  do {
                    uVar8 = uVar3;
                    uVar3 = uVar8 * 2;
                  } while (uVar8 < local_18);
                  dst = recovered_10000e40((void *)puVar6[0x3f],uVar8);
                  if (dst == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_10009000 = 0xc;
                    *(undefined1 *)((int)puVar6 + 0x115) = 1;
                    goto LAB_100037ce;
                  }
                  puVar6[0x3f] = dst;
                  puVar6[0x41] = uVar8;
                  puVar6[0x3e] = dst;
                }
                else {
                  dst = (void *)puVar6[0x3f];
                }
                recovered_10000e80(dst,local_1c,local_18);
              }
              else {
                puVar6[0x3e] = local_1c;
              }
              puVar6[0x40] = local_18;
              cVar1 = *(char *)((int)puVar6 + 0x112);
              goto joined_r0x100037ac;
            }
          }
          else if (*(char *)((int)puVar6 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_10009000 = 2;
LAB_100037ce:
            recovered_10000e00(puVar6);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar6 + 0x112);
joined_r0x100037ac:
          if (cVar1 == '\x01') {
            puVar6[0x42] = puVar6[0x40];
            return puVar6;
          }
          return puVar6;
        }
        goto LAB_10003636;
      }
      uVar9 = 3;
    }
  }
  puVar6 = recovered_10000dc0(800);
  if (puVar6 != (undefined4 *)0x0) {
    recovered_10000f10(puVar6,0,800);
    *puVar6 = uVar9;
    *(bool *)(puVar6 + 0x44) = iVar4 == 0;
    *(bool *)((int)puVar6 + 0x111) = iVar4 != 0;
    puVar6[0x43] = 0xffffffff;
    recovered_10002f30((char *)(puVar6 + 1),0xf1,&DAT_10007d7a,(char)param_1);
    return puVar6;
  }
LAB_10003636:
  *(undefined4 *)PTR_DAT_10009000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10007d7a
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef str_10007efb
#undef str_10007f08
#undef str_10007f16
#undef local_1c
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003830
 */

void recovered_10003830(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  if (param_3 == (int *)0x0) goto LAB_100038dd;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    iVar3 = Ram00006800;
    if (((iVar3 == 0x50414d57) &&
        (((iVar3 = Ram00006804, iVar3 != 0 && (uVar1 = Ram00006808, 0xb < uVar1)) &&
         (uVar1 = Ram00006808, 0x3b < uVar1)))) &&
       (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 != (code *)0x0)) {
      iVar3 = (*pcVar2)((char *)(param_3 + 1),(void *)param_3[0x3e],param_3[0x40]);
      if (iVar3 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_100038c3;
      }
    }
    *(undefined4 *)PTR_DAT_10009000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_100038c3:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10000e00((void *)param_3[0x3f]);
  }
  recovered_10000e00(param_3);
LAB_100038dd:
  recovered_100034b0(param_1,param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038f0
 */

undefined4 recovered_100038f0(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar3 = Ram00006800;
    if (((iVar3 == 0x50414d57) &&
        (((iVar3 = Ram00006804, iVar3 != 0 && (uVar1 = Ram00006808, 0xb < uVar1)) &&
         (uVar1 = Ram00006808, 0x3b < uVar1)))) &&
       ((pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 != (code *)0x0 &&
        (iVar3 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), iVar3 != 0)))
       ) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined4 *)PTR_DAT_10009000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar4 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10000e00((void *)param_1[0x3f]);
  }
  recovered_10000e00(param_1);
  return uVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c0
 */

int recovered_100039c0(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  unsigned char frame[64] = {0};

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
        uVar3 = recovered_10003a40(param_4);
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
#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_100090b0
#define DAT_100090b0 (*(uint *)(((uintptr_t)pf_module_state + 0x1812U)))
#undef DAT_100090b4
#define DAT_100090b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1816U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006840
#define UINT_00006840 (*(uint *)(0x6840U))
#undef UINT_00006844
#define UINT_00006844 (*(uint *)(0x6844U))
#define local_20c (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a40
 */

uint recovered_10003a40(int *param_1)

{
  unsigned char frame[572] = {0};

  code *pcVar1;
  int iVar2;
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
LAB_10003a97:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_100090b0 != 0) {
      recovered_10000e80(local_20c,&DAT_100090b4,DAT_100090b0);
      local_20c[DAT_100090b0] = '\0';
      iVar2 = Ram00006800;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
          (uVar3 = Ram00006808, 0xb < uVar3)) &&
         ((uVar3 = Ram00006808, 0x43 < uVar3 &&
          (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6840), pcVar1 != (code *)0x0)))) {
        (*pcVar1)(local_20c);
      }
      DAT_100090b0 = 0;
    }
    iVar2 = Ram00006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 &&
        ((uVar3 = Ram00006808, 0x47 < uVar3 &&
         (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6844), pcVar1 != (code *)0x0)))))) {
      iVar2 = (*pcVar1)((char *)((int)param_1 + 0x116),0x1fe,&DAT_10007d50,0);
      if (iVar2 != 0) {
        uVar3 = recovered_100010d0((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar3 + 1;
        *(undefined1 *)((int)param_1 + uVar3 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10003a97;
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
#undef DAT_10007d50
#undef DAT_100090b0
#undef DAT_100090b4
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006840
#undef UINT_00006844
#undef local_20c

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bf0
 */

int recovered_10003bf0(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_10003d3e:
    param_3 = 0;
  }
  else {
    uVar5 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10002f60((char *)param_1,uVar5);
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
      pvVar3 = recovered_10000e40((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_10009000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_10003d3e;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_10000f10((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10000e80((void *)(uVar4 + param_4[0x3f]),(void *)param_1,uVar5);
    uVar5 = uVar5 + param_4[0x42];
    param_4[0x42] = uVar5;
    if (param_4[0x40] < uVar5) {
      param_4[0x40] = uVar5;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_10009000

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d50
 */

undefined4 recovered_10003d50(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10003d5f;
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
LAB_10003d5f:
  *(undefined4 *)PTR_DAT_10009000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_10009000

#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd0
 */

undefined4 recovered_10003dd0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef PTR_DAT_10009000

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e00
 */

undefined4 recovered_10003e00(int *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (*(char *)((int)param_1 + 0x113) == '\x01')) {
    iVar4 = Ram00006800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
        ((uVar1 = Ram00006808, 0xb < uVar1 &&
         ((uVar1 = Ram00006808, 0x3b < uVar1 &&
          (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 != (code *)0x0)))))) &&
       (iVar4 = (*pcVar2)((char *)(param_1 + 1),(void *)param_1[0x3e],param_1[0x40]), iVar4 != 0)) {
      *(undefined1 *)((int)param_1 + 0x113) = 0;
      return 0;
    }
    *(undefined4 *)PTR_DAT_10009000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003eb0
 */

undefined1 recovered_10003eb0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ed0
 */

undefined1 recovered_10003ed0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ef0
 */

void recovered_10003ef0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f10
 */

uint recovered_10003f10(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

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
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

undefined4 recovered_10003f40(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;

  if (param_1 == 0) {
    uVar4 = 0x16;
  }
  else {
    iVar3 = Ram00006800;
    uVar4 = 5;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar1 = Ram00006808, 0xb < uVar1)) &&
       (((uVar1 = Ram00006808, 0x3f < uVar1 &&
         (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x683c), pcVar2 != (code *)0x0)) &&
        (iVar3 = (*pcVar2)((char *)param_1), iVar3 != 0)))) {
      return 0;
    }
  }
  *(undefined4 *)PTR_DAT_10009000 = uVar4;
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000683c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef PTR_DAT_10009000
#define PTR_DAT_10009000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb0
 */

undefined4 recovered_10003fb0(int param_1,int param_2)

{
  unsigned char frame[76] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_10009000 = 0x16;
  }
  else {
    recovered_10000f10(&local_1c,0,0xc);
    iVar3 = Ram00006800;
    uVar4 = 2;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar1 = Ram00006808, 0xb < uVar1)) &&
       ((uVar1 = Ram00006808, 0x37 < uVar1 &&
        (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6834), pcVar2 != (code *)0x0)))) {
      iVar3 = (*pcVar2)((char *)param_1,&local_1c);
      uVar4 = 2;
      if (iVar3 != 0) {
        iVar3 = Ram00006800;
        if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
           ((uVar1 = Ram00006808, 0xb < uVar1 &&
            (((uVar1 = Ram00006808, 0x3b < uVar1 &&
              (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 != (code *)0x0)) &&
             (iVar3 = (*pcVar2)((char *)param_2,local_1c,local_18), iVar3 != 0)))))) {
          iVar3 = Ram00006800;
          uVar4 = 5;
          if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
             ((uVar1 = Ram00006808, 0xb < uVar1 &&
              ((uVar1 = Ram00006808, 0x3f < uVar1 &&
               (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x683c), pcVar2 != (code *)0x0)))))) {
            iVar3 = (*pcVar2)((char *)param_1);
            uVar4 = 5;
            if (iVar3 != 0) {
              return 0;
            }
          }
        }
        else {
          uVar4 = 5;
        }
      }
    }
    *(undefined4 *)PTR_DAT_10009000 = uVar4;
  }
  return 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef PTR_DAT_10009000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000683c
#undef local_1c
#undef local_18

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
#define local_1c (*(void * *)(frame + 16))
#define local_18 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004120
 */

undefined4 recovered_10004120(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[76] = {0};

  code *pcVar1;
  int iVar2;
  void *dst;
  uint uVar3;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_10000f10(&local_1c,0,0xc);
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       (((uVar3 = Ram00006808, 0x37 < uVar3 &&
         (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6834), pcVar1 != (code *)0x0)) &&
        (iVar2 = (*pcVar1)((char *)param_1,&local_1c), iVar2 != 0)))) {
      dst = recovered_10000dc0(local_18 + (local_18 == 0));
      if (dst == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_10000e80(dst,local_1c,local_18);
        uVar3 = local_18;
      }
      *param_2 = (int)dst;
      *param_3 = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef local_1c
#undef local_18

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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f0
 */

bool recovered_100041f0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  if ((((param_1 == 0) || (param_2 == 0 && param_3 != 0)) ||
      (iVar3 = Ram00006800, iVar3 != 0x50414d57)) ||
     (((iVar3 = Ram00006804, iVar3 == 0 || (uVar1 = Ram00006808, uVar1 < 0xc)) ||
      ((uVar1 = Ram00006808, uVar1 < 0x3c || (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6838), pcVar2 == (code *)0x0)
       ))))) {
    return false;
  }
  iVar3 = (*pcVar2)((char *)param_1,(void *)param_2,param_3);
  return iVar3 != 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004260
 */

undefined4 recovered_10004260(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004270
 */

void recovered_10004270(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004280
 */

undefined4 recovered_10004280(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004290
 */

undefined4 recovered_10004290(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a0
 */

undefined4 recovered_100042a0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b0
 */

char * recovered_100042b0(char *param_1,char param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
 * Address: 0x100042e0
 */

int recovered_100042e0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

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


#undef DAT_10007e8a
#define DAT_10007e8a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5ecU)))
#undef str_10007e8d
#define str_10007e8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5efU)))
#undef str_10007e9a
#define str_10007e9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef str_10007ea4
#define str_10007ea4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x606U)))
#undef str_10007eb8
#define str_10007eb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61aU)))
#undef str_10007ec6
#define str_10007ec6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#undef str_10007ed8
#define str_10007ed8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63aU)))
#undef str_10007ee4
#define str_10007ee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x646U)))
#undef str_10007ef5
#define str_10007ef5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x657U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004330
 */

char * recovered_10004330(undefined4 param_1)

{
  unsigned char frame[64] = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10007e8a;
  default:
    return str_10007ef5;
  case 2:
    return str_10007e8d;
  case 5:
    return str_10007e9a;
  case 9:
    return str_10007ea4;
  case 0xc:
    return str_10007eb8;
  case 0xd:
    return str_10007ec6;
  case 0x11:
    return str_10007ed8;
  case 0x16:
    return str_10007ee4;
  }
}

#undef DAT_10007e8a
#undef str_10007e8d
#undef str_10007e9a
#undef str_10007ea4
#undef str_10007eb8
#undef str_10007ec6
#undef str_10007ed8
#undef str_10007ee4
#undef str_10007ef5

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004390
 */

undefined4 recovered_10004390(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043a0
 */

undefined4 recovered_100043a0(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_100092b4
#define DAT_100092b4 (*(int *)(((uintptr_t)pf_module_state + 0x1a16U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b0
 */

void recovered_100043b0(void)

{
  unsigned char frame[64] = {0};

  DAT_100092b4 = DAT_100092b4 + 1;
  return;
}

#undef DAT_100092b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043d0
 */

void recovered_100043d0(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x100043dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x24))();
  return;
}


#define unaff_retaddr (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e0
 */

undefined4 recovered_100043e0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 unaff_EBX = 0;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;

  *param_1 = unaff_EBX;
  param_1[1] = unaff_ESI;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_EBP;
  param_1[4] = &param_1;
  param_1[5] = unaff_retaddr;
  return 0;
}

#undef unaff_retaddr

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004410
 */

void recovered_10004410(int param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10004432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}


#undef DAT_1000447d
#define DAT_1000447d (*(uint8_t *)(0x1000447dU))
#undef DAT_10007f34
#define DAT_10007f34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x696U)))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_44 (*(undefined4 *)(frame + 152))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004440
 */

void recovered_10004440(void)

{
  unsigned char frame[252] = {0};

  code *pcVar1;

  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100044a0;
  local_28 = &DAT_10007f34;
  local_20 = &DAT_1000447d;
  local_40 = 1;
  recovered_10004960(&local_44);
  recovered_10000d80();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000447d
#undef DAT_10007f34
#undef auStack_18
#undef local_44
#undef auStackY_cc
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044a0
 */

undefined4 recovered_100044a0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b0
 */

void recovered_100044b0(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_100044d0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}


#undef DAT_100092b8
#define DAT_100092b8 (*(int *)(((uintptr_t)pf_module_state + 0x1a1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044d0
 */

int recovered_100044d0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = DAT_100092b8;
  *(undefined1 *)(param_1 + 0x18) = 0;
  DAT_100092b8 = param_1;
  iVar1 = recovered_10004800(param_1);
  return iVar1;
}

#undef DAT_100092b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004500
 */

int recovered_10004500(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000dc0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000d80();
  }
  return (int)pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

int recovered_10004530(int param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  pvVar1 = recovered_10000dc0(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10000d80();
  }
  return (int)pvVar1;
}


#undef DAT_10007f44
#define DAT_10007f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6U)))
#undef LAB_100045b4
#define LAB_100045b4 (*(uint8_t *)(0x100045b4U))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define in_stack_00000004 (*(void * *)(frame + 224))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004560
 */

void recovered_10004560(void)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100044a0;
  local_28 = &DAT_10007f44;
  local_20 = &LAB_100045b4;
  local_40 = 1;
  recovered_10004960(&local_44);
  recovered_10000e00(in_stack_00000004);
  recovered_10004980(&local_44);
  return;
}

#undef DAT_10007f44
#undef LAB_100045b4
#undef local_44
#undef local_40
#undef auStack_18
#undef local_2c
#undef local_28
#undef in_stack_00000004
#undef local_24
#undef local_20
#undef local_1c
#undef auStackY_cc

#undef DAT_10007f54
#define DAT_10007f54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6b6U)))
#undef LAB_10004634
#define LAB_10004634 (*(uint8_t *)(0x10004634U))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define in_stack_00000004 (*(void * *)(frame + 224))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_2c (*(code * *)(frame + 176))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045e0
 */

void recovered_100045e0(void)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100044a0;
  local_28 = &DAT_10007f54;
  local_20 = &LAB_10004634;
  local_40 = 1;
  recovered_10004960(&local_44);
  recovered_10000e00(in_stack_00000004);
  recovered_10004980(&local_44);
  return;
}

#undef DAT_10007f54
#undef LAB_10004634
#undef local_28
#undef local_24
#undef auStack_18
#undef local_20
#undef local_1c
#undef in_stack_00000004
#undef local_44
#undef local_40
#undef auStackY_cc
#undef local_2c

#undef DAT_10007f64
#define DAT_10007f64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c6U)))
#undef LAB_100046b4
#define LAB_100046b4 (*(uint8_t *)(0x100046b4U))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define in_stack_00000004 (*(void * *)(frame + 224))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
#define local_1c (*(undefined1 * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004660
 */

void recovered_10004660(void)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100044a0;
  local_28 = &DAT_10007f64;
  local_20 = &LAB_100046b4;
  local_40 = 1;
  recovered_10004960(&local_44);
  recovered_10000e00(in_stack_00000004);
  recovered_10004980(&local_44);
  return;
}

#undef DAT_10007f64
#undef LAB_100046b4
#undef auStack_18
#undef in_stack_00000004
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStackY_cc
#undef local_1c

#undef DAT_10007f74
#define DAT_10007f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d6U)))
#undef LAB_10004734
#define LAB_10004734 (*(uint8_t *)(0x10004734U))
#define local_44 (*(undefined4 *)(frame + 152))
#define local_40 (*(undefined4 *)(frame + 156))
#define local_2c (*(code * *)(frame + 176))
#define local_28 (*(undefined * *)(frame + 180))
#define local_24 (*(undefined1 * *)(frame + 184))
#define local_20 (*(undefined1 * *)(frame + 188))
#define local_1c (*(undefined1 * *)(frame + 192))
#define auStack_18 (*(undefined1 (*)[8])(frame + 196))
#define in_stack_00000004 (*(void * *)(frame + 224))
#define auStackY_cc (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046e0
 */

void recovered_100046e0(void)

{
  unsigned char frame[252] = {0};


  local_24 = auStack_18 + 0x14;
  local_1c = auStackY_cc + 0x80;
  local_2c = recovered_100044a0;
  local_28 = &DAT_10007f74;
  local_20 = &LAB_10004734;
  local_40 = 1;
  recovered_10004960(&local_44);
  recovered_10000e00(in_stack_00000004);
  recovered_10004980(&local_44);
  return;
}

#undef DAT_10007f74
#undef LAB_10004734
#undef local_44
#undef local_40
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef auStack_18
#undef in_stack_00000004
#undef auStackY_cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004760
 */

undefined4 recovered_10004760(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004770
 */

uint recovered_10004770(uint *param_1)

{
  unsigned char frame[64] = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004780
 */

void recovered_10004780(byte *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004790
 */

void recovered_10004790(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047a0
 */

undefined1 * recovered_100047a0(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint size;

  size = param_1 + 0x1c + (uint)(param_1 == 0);
  puVar1 = recovered_10000dc0(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004440();
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
 * Address: 0x100047e0
 */

void recovered_100047e0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    recovered_10000e00((void *)(param_1 + -0x1c));
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004800
 */

int recovered_10004800(int in_ECX)

{
  unsigned char frame[64] = {0};

  return in_ECX + 0x1c;
}


#undef DAT_100092b8
#define DAT_100092b8 (*(void * *)(((uintptr_t)pf_module_state + 0x1a1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004810
 */

void recovered_10004810(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  void *pointer;

  pointer = DAT_100092b8;
  if (DAT_100092b8 != (void *)0x0) {
    puVar1 = (undefined4 *)((int)DAT_100092b8 + 8);
    DAT_100092b8 = *(void **)((int)DAT_100092b8 + 8);
    *puVar1 = 0;
    if (*(char *)((int)pointer + 0x18) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
      }
      recovered_10000e00(pointer);
    }
  }
  return;
}

#undef DAT_100092b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004860
 */

void recovered_10004860(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100048a0(param_1 + -0x1c);
}


#undef DAT_100092b8
#define DAT_100092b8 (*(int *)(((uintptr_t)pf_module_state + 0x1a1aU)))
#undef DAT_100092bc
#define DAT_100092bc (*(int * *)(((uintptr_t)pf_module_state + 0x1a1eU)))
#define local_20 (*(ushort *)(frame + 16))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(undefined4 *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
#define cStack_1e (*(char *)(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048a0
 */

void recovered_100048a0(int in_ECX)

{
  unsigned char frame[80] = {0};

  uchar *in_EDX;
  int in_ECX_00;
  uint uVar1;
  int *in_ECX_01;

  local_14 = in_ECX;
  if (DAT_100092bc != (int *)0x0) {
    in_EDX = *(uchar **)in_ECX;
    in_ECX_01 = DAT_100092bc;
    do {
      local_18 = 0;
      local_1c = 0;
      PF_PART4(local_20,0) = 0;
      uVar1 = recovered_10004e70((int)in_ECX_01,in_EDX,&local_20);
      if (((char)uVar1 != '\0') && (cStack_1e == '\x01')) {
        *(int **)(local_14 + 0xc) = in_ECX_01;
        *(undefined4 *)(local_14 + 0x10) = local_1c;
        *(undefined4 *)(local_14 + 0x14) = local_18;
        recovered_100049f0(local_14);
        in_ECX_00 = DAT_100092b8;
        if (DAT_100092b8 == 0) {
                    /* WARNING: Subroutine does not return */
          recovered_10004440();
        }
        *(undefined1 *)(DAT_100092b8 + 0x18) = 1;
        *(undefined4 *)(in_ECX_00 + 0xc) = 0;
        *(undefined4 *)(in_ECX_00 + 0x10) = 0;
        *(undefined4 *)(in_ECX_00 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_100048a0(in_ECX_00);
      }
      in_ECX_01 = (int *)*in_ECX_01;
    } while (in_ECX_01 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}

#undef DAT_100092b8
#undef DAT_100092bc
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef cStack_1e

#undef DAT_100092b8
#define DAT_100092b8 (*(int *)(((uintptr_t)pf_module_state + 0x1a1aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004920
 */

void recovered_10004920(void)

{
  unsigned char frame[64] = {0};

  int in_ECX;

  in_ECX = DAT_100092b8;
  if (DAT_100092b8 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004440();
  }
  *(undefined1 *)(DAT_100092b8 + 0x18) = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100048a0(in_ECX);
}

#undef DAT_100092b8

#undef DAT_100092bc
#define DAT_100092bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004960
 */

void recovered_10004960(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_100092bc;
  DAT_100092bc = param_1;
  return;
}

#undef DAT_100092bc

#undef DAT_100092bc
#define DAT_100092bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a1eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004980
 */

void recovered_10004980(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_100092bc;
  if (DAT_100092bc == param_1) {
    puVar2 = &DAT_100092bc;
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

#undef DAT_100092bc

#define in_stack_00000004 (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049b0
 */

void recovered_100049b0(void)

{
  unsigned char frame[64] = {0};


                    /* WARNING: Subroutine does not return */
  recovered_100048a0(in_stack_00000004);
}

#undef in_stack_00000004

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049c0
 */

void recovered_100049c0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}


#undef DAT_100092bc
#define DAT_100092bc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a1eU)))
#define acStack_28 (*(char (*)[4])(frame + 16))
#define uStack_24 (*(undefined4 *)(frame + 20))
#define uStack_20 (*(undefined4 *)(frame + 24))
#define in_stack_00000004 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049d0
 */

void recovered_100049d0(void)

{
  unsigned char frame[88] = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX = 0;

  if (DAT_100092bc != (undefined4 *)0x0) {
    DAT_100092bc = (undefined4 *)*DAT_100092bc;
  }
  recovered_100049f0(in_stack_00000004);
  if (DAT_100092bc != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[3];
    do {
      puVar2 = DAT_100092bc;
      if (DAT_100092bc == puVar1) {
        DAT_100092bc[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[5];
        uVar3 = extraout_ECX[4];
LAB_10004a6b:
        puVar2[1] = uVar3;
        recovered_100043d0((int)puVar2);
                    /* WARNING: Subroutine does not return */
        recovered_100049d0();
      }
      uStack_20 = 0;
      uStack_24 = 0;
      acStack_28[0] = '\0';
      acStack_28[1] = '\0';
      acStack_28[2] = '\0';
      acStack_28[3] = '\0';
      recovered_10004e70((int)DAT_100092bc,(uchar *)*extraout_ECX,(ushort *)acStack_28);
      if ((acStack_28[0] == '\x01') && (acStack_28[1] == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_24;
        goto LAB_10004a6b;
      }
      DAT_100092bc = (undefined4 *)*puVar2;
    } while (DAT_100092bc != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}

#undef DAT_100092bc
#undef acStack_28
#undef uStack_24
#undef uStack_20
#undef in_stack_00000004

#undef DAT_100092bc
#define DAT_100092bc (*(int * *)(((uintptr_t)pf_module_state + 0x1a1eU)))
#define local_1c (*(char (*)[4])(frame + 16))
#define local_18 (*(int *)(frame + 20))
#define local_14 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049f0
 */

void recovered_100049f0(int in_ECX)

{
  unsigned char frame[76] = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_100092bc != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0xc);
    do {
      piVar2 = DAT_100092bc;
      if (DAT_100092bc == piVar1) {
        DAT_100092bc[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x14);
        iVar3 = *(int *)(in_ECX + 0x10);
LAB_10004a6b:
        piVar2[1] = iVar3;
        recovered_100043d0((int)piVar2);
                    /* WARNING: Subroutine does not return */
        recovered_100049d0();
      }
      local_14 = 0;
      local_18 = 0;
      local_1c[0] = '\0';
      local_1c[1] = '\0';
      local_1c[2] = '\0';
      local_1c[3] = '\0';
      recovered_10004e70((int)DAT_100092bc,*(uchar **)in_ECX,(ushort *)local_1c);
      if ((local_1c[0] == '\x01') && (local_1c[1] == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_18;
        goto LAB_10004a6b;
      }
      DAT_100092bc = (int *)*piVar2;
    } while (DAT_100092bc != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}

#undef DAT_100092bc
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a80
 */

void recovered_10004a80(undefined4 param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100049d0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa0
 */

undefined4 recovered_10004aa0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ab0
 */

void recovered_10004ab0(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004440();
}


#undef DAT_10009060
#define DAT_10009060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c2U)))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ac0
 */

int recovered_10004ac0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[68] = {0};

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
          if (iVar4 == iVar3) goto LAB_10004b70;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_10004b70;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_10009060) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_10004b70:
      local_14 = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_14;
}

#undef DAT_10009060
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b90
 */

void recovered_10004b90(void)

{
  unsigned char frame[64] = {0};

  recovered_10000d80();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ba0
 */

undefined4 recovered_10004ba0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bb0
 */

bool recovered_10004bb0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bd0
 */

bool recovered_10004bd0(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c00
 */

bool recovered_10004c00(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c30
 */

bool recovered_10004c30(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c50
 */

bool recovered_10004c50(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c70
 */

byte recovered_10004c70(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb0
 */

bool recovered_10004cb0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


#undef DAT_100078a0
#define DAT_100078a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2U)))
#undef DAT_100078e0
#define DAT_100078e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42U)))
#undef _DAT_100078a0
#define _DAT_100078a0 (*(float *)(((uintptr_t)pf_module_state + 0x2U)))
#undef _DAT_100078e0
#define _DAT_100078e0 (*(float *)(((uintptr_t)pf_module_state + 0x42U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble recovered_10004cd0(double param_1)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_100015c0(param_1);
  if ((longdouble)_DAT_100078a0 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)_DAT_100078e0 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_100078a0
#undef DAT_100078e0
#undef _DAT_100078a0
#undef _DAT_100078e0

#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d20
 */

ulonglong recovered_10004d20(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[68] = {0};

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
      goto LAB_10004dcd;
    }
  }
  else {
    if (param_3 != 0) {
      local_14 = param_3;
      goto LAB_10004dcd;
    }
    if (*pbVar7 != 0x30) {
      local_14 = 10;
      goto LAB_10004dcd;
    }
    if ((pbVar7[1] | 0x20) != 0x78) {
      local_14 = 8;
      goto LAB_10004dcd;
    }
    pbVar7 = pbVar7 + 2;
  }
  local_14 = 0x10;
LAB_10004dcd:
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

#define in_stack_00000004 (*(byte * *)(frame + 36))
#define in_stack_00000008 (*(undefined4 * *)(frame + 40))
#define in_stack_0000000c (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e60
 */

void recovered_10004e60(void)

{
  unsigned char frame[64] = {0};


  recovered_10004d20(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

#undef DAT_10007aa0
#define DAT_10007aa0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef DAT_10009060
#define DAT_10009060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17c2U)))
#define local_4c (*(byte * *)(frame + 16))
#define local_48 (*(byte * *)(frame + 20))
#define local_44 (*(uint *)(frame + 24))
#define local_40 (*(uint *)(frame + 28))
#define local_3c (*(uint *)(frame + 32))
#define local_38 (*(uint *)(frame + 36))
#define local_34 (*(uint *)(frame + 40))
#define local_30 (*(byte * *)(frame + 44))
#define local_2c (*(byte * *)(frame + 48))
#define local_28 (*(uchar * *)(frame + 52))
#define local_24 (*(uint *)(frame + 56))
#define local_20 (*(uint *)(frame + 60))
#define local_19 (*(char *)(frame + 67))
#define local_18 (*(uint *)(frame + 68))
#define local_11 (*(char *)(frame + 75))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e70
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_10004e70(int in_ECX,uchar *in_EDX,ushort *param_3)

{
  unsigned char frame[124] = {0};

  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  uchar *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  char cVar16;

  pbVar10 = *(byte **)(in_ECX + 0x1c);
  if (pbVar10 != (byte *)0x0) {
    local_2c = pbVar10 + 1;
    local_28 = in_EDX;
    if (*pbVar10 != 0xff) {
      recovered_100051f0((uint)*pbVar10,(int *)&local_2c);
    }
    local_34 = (uint)*local_2c;
    local_30 = (byte *)0x0;
    if (local_34 != 0xff) {
      bVar8 = 0;
      uVar4 = 0;
      pbVar10 = local_2c + 1;
      do {
        local_2c = pbVar10;
        uVar4 = uVar4 | (*local_2c & 0x7f) << (bVar8 & 0x1f);
        bVar8 = bVar8 + 7;
        pbVar10 = local_2c + 1;
      } while ((char)*local_2c < '\0');
      local_30 = local_2c + 1 + uVar4;
    }
    bVar8 = 0;
    local_2c = local_2c + 2;
    uVar4 = 0;
    pbVar10 = local_2c;
    do {
      bVar1 = *pbVar10;
      uVar4 = uVar4 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
      pbVar10 = pbVar10 + 1;
      bVar8 = bVar8 + 7;
    } while ((char)bVar1 < '\0');
    if ((0 < *(int *)(in_ECX + 4)) && (0 < (int)uVar4)) {
      local_48 = pbVar10 + uVar4;
      iVar9 = 0;
      do {
        bVar8 = 0;
        uVar4 = 0;
        do {
          bVar1 = *pbVar10;
          uVar4 = uVar4 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar10 = pbVar10 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        bVar8 = 0;
        uVar5 = 0;
        do {
          bVar1 = *pbVar10;
          uVar5 = uVar5 | (bVar1 & 0x7f) << (bVar8 & 0x1f);
          pbVar10 = pbVar10 + 1;
          bVar8 = bVar8 + 7;
        } while ((char)bVar1 < '\0');
        if (iVar9 == *(int *)(in_ECX + 4) + -1) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(uint *)(param_3 + 2) = uVar4;
          param_3[4] = 0;
          param_3[5] = 0;
          if (uVar5 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          local_48 = local_48 + (uVar5 - 1);
          local_38 = local_34 & 0xf;
          local_11 = local_28 != (uchar *)0x0;
          local_19 = (byte)local_38 < 0xd && local_30 != (byte *)0x0;
          local_44 = 0;
          local_3c = 0x1c1dU >> (byte)local_38 ^ 1;
          goto LAB_10005000;
        }
        iVar9 = iVar9 + 1;
      } while (pbVar10 < local_48);
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  return 0;
LAB_10005000:
  local_20 = 0;
  uVar4 = 0;
  do {
    bVar8 = *local_48;
    local_18 = (uint)bVar8;
    local_20 = local_20 | (local_18 & 0x7f) << ((byte)uVar4 & 0x1f);
    local_48 = local_48 + 1;
    uVar4 = uVar4 + 7;
  } while ((char)bVar8 < '\0');
  local_40 = -1 << ((byte)uVar4 & 0x1f);
  uVar14 = 0;
  uVar5 = 0;
  pbVar10 = local_48;
  do {
    bVar1 = *pbVar10;
    uVar14 = uVar14 | (bVar1 & 0x7f) << ((byte)uVar5 & 0x1f);
    pbVar10 = pbVar10 + 1;
    uVar5 = uVar5 + 7;
  } while ((char)bVar1 < '\0');
  local_24 = 0;
  uVar13 = 0;
  if (0x3f < bVar8) {
    uVar13 = local_40;
  }
  uVar6 = 0;
  if (uVar4 < 0x20) {
    uVar6 = uVar13;
  }
  uVar4 = 0;
  if (bVar1 < 0x40) {
    if (0x1f < uVar5) goto LAB_100050a8;
LAB_10005199:
    bVar15 = local_20 == 0 && uVar6 == 0;
    local_24 = uVar4;
    if (local_20 != 0 || uVar6 != 0) goto LAB_100050b0;
LAB_100051a4:
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else {
    uVar4 = -1 << ((byte)uVar5 & 0x1f);
    if (uVar5 < 0x20) goto LAB_10005199;
LAB_100050a8:
    bVar15 = local_20 == 0 && uVar6 == 0;
    if (local_20 == 0 && uVar6 == 0) goto LAB_100051a4;
LAB_100050b0:
    local_20 = local_20 | uVar6;
    if (!bVar15 && -1 < (int)local_20) {
      if ((local_19 == '\0') || ((local_3c & 1) != 0)) {
LAB_100051cf:
        *(undefined1 *)(param_3 + 1) = 1;
        *(uint *)(param_3 + 4) = local_20;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      local_4c = local_30 + *(int *)(&DAT_10007aa0 + local_38 * 4) * local_20;
      puVar7 = recovered_100051f0(local_34,(int *)&local_4c);
      if (puVar7 == (uchar *)0x0) goto LAB_100051cf;
      cVar16 = local_11;
      if ((local_28 != (uchar *)0x0) && (puVar7 != local_28)) {
        iVar9 = *(int *)(puVar7 + 4);
        puVar11 = local_28;
        do {
          iVar3 = *(int *)(puVar11 + 4);
          if ((iVar9 == 0) || (iVar3 == 0)) {
            if (iVar3 == iVar9) goto LAB_100051cf;
          }
          else {
            iVar12 = 0;
            do {
              cVar16 = *(char *)(iVar3 + iVar12);
              cVar2 = *(char *)(iVar9 + iVar12);
              if ((cVar16 == '\0') || (cVar2 == '\0')) {
                if (cVar16 == cVar2) goto LAB_100051cf;
                break;
              }
              iVar12 = iVar12 + 1;
            } while (cVar16 == cVar2);
          }
          if (*(undefined **)puVar11 != &DAT_10009060) goto LAB_100051ab;
          puVar11 = *(uchar **)(puVar11 + 8);
          cVar16 = puVar11 != (uchar *)0x0;
        } while ((puVar11 != puVar7) && (puVar11 != (uchar *)0x0));
      }
      if (cVar16 != '\0') goto LAB_100051cf;
    }
  }
LAB_100051ab:
  if ((uVar14 | local_24) == 0) {
    return 0;
  }
  local_48 = local_48 + (uVar14 | local_24);
  bVar15 = 0x3e < local_44;
  local_44 = local_44 + 1;
  if (bVar15) {
    return 0;
  }
  goto LAB_10005000;
}

#undef DAT_10007aa0
#undef DAT_10009060
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
 * Address: 0x100051f0
 */

uchar * recovered_100051f0(uint in_ECX,int *in_EDX)

{
  unsigned char frame[64] = {0};

  ushort *puVar1;
  ushort uVar2;
  uchar *puVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uchar *unaff_EDI;
  uint uVar9;

  puVar3 = (uchar *)0x0;
  if (in_ECX == 0xff) {
    return (uchar *)0x0;
  }
  if (0xc < (in_ECX & 0xf)) {
    return (uchar *)0x0;
  }
  puVar1 = (ushort *)*in_EDX;
  switch((uintptr_t)(in_ECX & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    unaff_EDI = *(uchar **)puVar1;
    puVar6 = puVar1 + 2;
    goto LAB_100052c5;
  case 1:
    bVar4 = 0;
    unaff_EDI = (uchar *)0x0;
    puVar6 = puVar1;
    do {
      *in_EDX = (int)puVar6 + 1;
      uVar2 = *puVar6;
      unaff_EDI = (uchar *)((uint)unaff_EDI | ((byte)uVar2 & 0x7f) << (bVar4 & 0x1f));
      bVar4 = bVar4 + 7;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    unaff_EDI = (uchar *)(uint)*puVar1;
    puVar6 = puVar1 + 1;
    goto LAB_100052c5;
  case 4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_1000521d_caseD_5;
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
    unaff_EDI = (uchar *)(uVar9 | uVar7);
    break;
  case 10:
    unaff_EDI = (uchar *)((uint)(-1 < (char)*(byte *)((int)puVar1 + 1)) * 0x10000 + -0x10000 +
                         (uint)*puVar1);
    puVar6 = puVar1 + 1;
LAB_100052c5:
    *in_EDX = (int)puVar6;
  }
  puVar3 = unaff_EDI;
  if ((in_ECX & 0x70) != 0) {
    if ((in_ECX & 0x70) != 0x10) {
      return (uchar *)0x0;
    }
    puVar3 = unaff_EDI + (int)puVar1;
  }
  if (((char)in_ECX < '\0') && (puVar3 != (uchar *)0x0)) {
    puVar3 = *(uchar **)puVar3;
  }
switchD_1000521d_caseD_5:
  return puVar3;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_100092c0
#define DAT_100092c0 (*(int * *)(((uintptr_t)pf_module_state + 0x1a22U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a0
#define UINT_000068a0 (*(uint *)(0x68a0U))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
#undef str_10007f24
#define str_10007f24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005300
 */

int * recovered_10005300(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  code *pcVar1;
  int *in_ECX;
  uint uVar2;
  char *pcVar3;
  int iVar4;

  in_ECX = (int *)recovered_10004500(0x2a4);
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  *(undefined1 *)((int)in_ECX + 0x21) = 0;
  *(undefined1 *)((int)in_ECX + 0x22) = 0xf6;
  *(undefined1 *)((int)in_ECX + 0x23) = 0xf6;
  *(undefined1 *)(in_ECX + 9) = 0xf6;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  *(undefined1 *)((int)in_ECX + 0x31) = 0;
  *(undefined1 *)((int)in_ECX + 0x32) = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  pcVar3 = str_10007f24;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  recovered_10000f60((undefined1 *)(in_ECX + 0x21),0x220);
  uVar2 = 0xffffffff;
  do {
    iVar4 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (pcVar3[iVar4] != '\0');
  recovered_10007330(in_ECX,(int)pcVar3,uVar2);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  in_ECX[4] = param_2;
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  in_ECX[5] = param_3;
  in_ECX[10] = param_2 >> 1;
  in_ECX[0xb] = param_3 >> 1;
  pcVar3 = &DAT_10007d50;
  if ((char *)*in_ECX != (char *)0x0) {
    pcVar3 = (char *)*in_ECX;
  }
  iVar4 = Ram00006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0xa3 < uVar2 && (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68a0), pcVar1 != (code *)0x0))
     )) {
    uVar2 = (*pcVar1)(pcVar3,param_2,param_3);
    in_ECX[3] = uVar2;
    if (uVar2 != 0) {
      DAT_100092c0 = in_ECX;
      recovered_100055b0((int)in_ECX);
      if (in_ECX[3] == 0) {
        return in_ECX;
      }
      iVar4 = Ram00006800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
         ((uVar2 = Ram00006808, 0xb < uVar2 &&
          (((uVar2 = Ram00006808, 0xb7 < uVar2 &&
            (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68b4), pcVar1 != (code *)0x0)) &&
           (iVar4 = (*pcVar1)(in_ECX[3],in_ECX + 0x12), iVar4 != 0)))))) {
        in_ECX[6] = in_ECX[0x1c];
        in_ECX[7] = in_ECX[0x1d];
        if ((*(byte *)(in_ECX + 0x1b) & 1) == 0) {
          return in_ECX;
        }
      }
      *(undefined1 *)(in_ECX + 8) = 1;
      return in_ECX;
    }
  }
  else {
    in_ECX[3] = 0;
  }
  in_ECX[0xe] = 0;
  recovered_10004560();
  recovered_10004560();
  recovered_10004560();
  return (int *)0x0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10007d50
#undef DAT_100092c0
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068a0
#undef UINT_000068b4
#undef str_10007f24

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_10007f84
#define DAT_10007f84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6e6U)))
#undef LAB_1000591b
#define LAB_1000591b (*(uint8_t *)(0x1000591bU))
#undef PTR_recovered_100044a0_10009004
#define PTR_recovered_100044a0_10009004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1766U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a4
#define UINT_000068a4 (*(uint *)(0x68a4U))
#define local_38 (*(uint *)(frame + 260))
#define local_34 (*(void * *)(frame + 264))
#define local_30 (*(uint *)(frame + 268))
#define local_2c (*(int *)(frame + 272))
#define local_28 (*(int *)(frame + 276))
#define local_24 (*(uint *)(frame + 280))
#define local_20 (*(uint *)(frame + 284))
#define local_1c (*(int * *)(frame + 288))
#define local_18 (*(code * *)(frame + 292))
#define local_14 (*(undefined4 *)(frame + 296))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 16))
#define local_84 (*(undefined4 *)(frame + 184))
#define local_80 (*(undefined4 *)(frame + 188))
#define local_6c (*(undefined * *)(frame + 208))
#define local_68 (*(undefined * *)(frame + 212))
#define local_64 (*(undefined1 * *)(frame + 216))
#define local_60 (*(undefined1 * *)(frame + 220))
#define local_5c (*(undefined1 * *)(frame + 224))
#define local_4c (*(code * *)(frame + 240))
#define local_48 (*(int *)(frame + 244))
#define local_44 (*(int *)(frame + 248))
#define local_40 (*(uint *)(frame + 252))
#define local_3c (*(void * *)(frame + 256))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_100055b0(int in_ECX)

{
  unsigned char frame[348] = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  code *pcVar10;
  code *pcVar11;
  void *pvVar12;
  code *pcVar13;
  undefined8 uVar14;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 316) + -4);
  local_5c = auStackY_12c + 0x80;
  local_6c = PTR_recovered_100044a0_10009004;
  local_68 = &DAT_10007f84;
  local_60 = &LAB_1000591b;
  recovered_10004960(&local_84);
  if ((in_ECX == 0) || (*(int *)(in_ECX + 0xc) == 0)) goto LAB_1000590b;
  uVar3 = *(uint *)(in_ECX + 0x10);
  uVar7 = *(uint *)(in_ECX + 0x14);
  local_38 = uVar3;
  if ((int)uVar3 < 2) {
    local_38 = 1;
  }
  local_40 = uVar7;
  if ((int)uVar7 < 2) {
    local_40 = 1;
  }
  pvVar12 = (void *)0x0;
  local_1c = (int *)in_ECX;
  if (((*(int *)(in_ECX + 0x38) != 0) && (0 < *(int *)(in_ECX + 0x40))) &&
     (0 < *(int *)(in_ECX + 0x44))) {
    local_14 = uVar3 * uVar7 * 4;
    if (local_14 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      local_80 = 1;
      pvVar12 = (void *)recovered_10004500(local_14);
      recovered_10004560();
      uVar3 = 0;
      do {
        *(undefined1 *)((int)pvVar12 + uVar3) = 0;
        uVar3 = uVar3 + 1;
      } while (local_14 != uVar3);
      uVar1 = *(undefined1 *)((int)local_1c + 0x22);
      uVar2 = *(undefined1 *)((int)local_1c + 0x23);
      iVar4 = local_1c[9];
      uVar3 = 0;
      do {
        *(undefined1 *)((int)pvVar12 + uVar3) = uVar1;
        *(undefined1 *)((int)pvVar12 + uVar3 + 1) = uVar2;
        *(char *)((int)pvVar12 + uVar3 + 2) = (char)iVar4;
        *(undefined1 *)((int)pvVar12 + uVar3 + 3) = 0xff;
        uVar3 = uVar3 + 4;
      } while (uVar3 < local_14);
    }
    in_ECX = (int)local_1c;
    uVar3 = local_1c[4];
    local_24 = local_1c[0x11];
    local_30 = (uint)((ulonglong)((longlong)(int)local_24 * (longlong)(int)uVar3) >> 0x20);
    local_20 = (uint)((longlong)(int)local_24 * (longlong)(int)uVar3);
    local_18 = (code *)local_1c[0x10];
    local_14 = local_1c[5];
    uVar14 = recovered_10000b80(local_20,local_30,(uint)local_18,(int)local_18 >> 0x1f);
    iVar4 = (int)uVar14;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    if ((int)local_14 < iVar4) {
      uVar14 = recovered_10000b80((uint)((longlong)(int)local_14 * (longlong)(int)local_18),
                                  (uint)((ulonglong)
                                         ((longlong)(int)local_14 * (longlong)(int)local_18) >> 0x20
                                        ),local_24,(int)local_24 >> 0x1f);
      uVar7 = (uint)uVar14;
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      if ((int)local_14 < 1) goto LAB_10005845;
      iVar8 = (int)(uVar3 - uVar7) / 2;
      iVar5 = 0;
      local_28 = local_14;
      local_30 = uVar7;
    }
    else {
      iVar5 = (int)(local_14 - iVar4) / 2;
      iVar8 = 0;
      local_30 = uVar3;
      local_28 = iVar4;
    }
    local_44 = local_24 - 1;
    local_4c = local_18 + -1;
    local_14 = (int)pvVar12 + iVar8 * 4 + iVar5 * uVar3 * 4 + 3;
    local_48 = uVar3 * 4;
    local_2c = 0;
    do {
      if (0 < (int)local_30) {
        iVar5 = (int)(local_24 * local_2c) / local_28;
        iVar4 = local_44;
        if (iVar5 <= local_44) {
          iVar4 = iVar5;
        }
        pcVar13 = (code *)0x0;
        iVar8 = 0;
        if (-1 < iVar5) {
          iVar8 = iVar4;
        }
        local_20 = iVar8 * (int)local_18;
        iVar4 = local_1c[0xd];
        uVar3 = 0;
        do {
          pcVar6 = (code *)((int)pcVar13 / (int)local_30);
          pcVar11 = local_4c;
          if ((int)pcVar6 <= (int)local_4c) {
            pcVar11 = pcVar6;
          }
          pcVar10 = (code *)0x0;
          if (-1 < (int)pcVar6) {
            pcVar10 = pcVar11;
          }
          pcVar10 = pcVar10 + local_20;
          *(undefined1 *)(local_14 + -3 + uVar3 * 4) = *(undefined1 *)(iVar4 + (int)pcVar10 * 4);
          *(undefined1 *)(local_14 + -2 + uVar3 * 4) = *(undefined1 *)(iVar4 + 1 + (int)pcVar10 * 4)
          ;
          *(undefined1 *)(local_14 + -1 + uVar3 * 4) = *(undefined1 *)(iVar4 + 2 + (int)pcVar10 * 4)
          ;
          *(undefined1 *)(local_14 + uVar3 * 4) = *(undefined1 *)(iVar4 + 3 + (int)pcVar10 * 4);
          uVar3 = uVar3 + 1;
          pcVar13 = pcVar13 + (int)local_18;
        } while (local_30 != uVar3);
      }
      local_2c = local_2c + 1;
      local_14 = local_14 + local_48;
    } while (local_2c != local_28);
    in_ECX = (int)local_1c;
    local_3c = pvVar12;
  }
LAB_10005845:
  pcVar9 = &DAT_10007d50;
  if (*(char **)in_ECX != (char *)0x0) {
    pcVar9 = *(char **)in_ECX;
  }
  local_14 = *(uint *)(in_ECX + 0xc);
  iVar4 = Ram00006800;
  iVar5 = 0;
  local_34 = pvVar12;
  if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      ((uVar3 = Ram00006808, 0xa7 < uVar3 &&
       (local_18 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68a4), local_18 != (code *)0x0)))))) {
    local_20 = local_38 * 4;
    local_80 = 2;
    iVar5 = (*local_18)(local_14,pcVar9,pvVar12,local_38,local_40,local_20,
                        (uint)*(byte *)(in_ECX + 0x23) << 8 | (uint)*(byte *)(in_ECX + 0x22) << 0x10
                        | (uint)*(byte *)(in_ECX + 0x24));
  }
  *(bool *)((int)local_1c + 0x21) = iVar5 != 0;
  recovered_10004560();
LAB_1000590b:
  recovered_10004980(&local_84);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10007d50
#undef DAT_10007f84
#undef LAB_1000591b
#undef PTR_recovered_100044a0_10009004
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068a4
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
#undef auStackY_12c
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
#undef UINT_000068b0
#define UINT_000068b0 (*(uint *)(0x68b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

void recovered_10005960(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (*(uint *)(param_1 + 0xc) != 0) {
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar2 = Ram00006808, 0xb < uVar2)) &&
         ((uVar2 = Ram00006808, 0xb3 < uVar2 &&
          (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68b0), pcVar3 != (code *)0x0)))) {
        (*pcVar3)(*(uint *)(param_1 + 0xc),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),1,1);
      }
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068b0

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100092c0
#define DAT_100092c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x1a22U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068a8
#define UINT_000068a8 (*(uint *)(0x68a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059d0
 */

void recovered_100059d0(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_100092c0 == param_1) {
    DAT_100092c0 = (undefined4 *)0x0;
  }
  if ((((param_1[3] != 0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57)) &&
      (iVar1 = Ram00006804, iVar1 != 0)) &&
     (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0xab < uVar2)) &&
      (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68a8), pcVar3 != (code *)0x0)))) {
    (*pcVar3)(param_1[3]);
  }
  param_1[0xe] = 0;
  recovered_10004560();
  recovered_10004560();
  recovered_10004560();
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100092c0
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068a8

#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_10007f8c
#define DAT_10007f8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6eeU)))
#undef LAB_10005b3f
#define LAB_10005b3f (*(uint8_t *)(0x10005b3fU))
#undef PTR_recovered_100044a0_10009004
#define PTR_recovered_100044a0_10009004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1766U)))
#define local_38 (*(undefined * *)(frame + 196))
#define local_34 (*(undefined1 * *)(frame + 200))
#define local_30 (*(undefined1 * *)(frame + 204))
#define local_2c (*(undefined1 * *)(frame + 208))
#define local_20 (*(void * *)(frame + 220))
#define local_1c (*(undefined1 * *)(frame + 224))
#define local_18 (*(int *)(frame + 228))
#define local_14 (*(undefined4 *)(frame + 232))
#define auStackY_ec (*(undefined1 (*)[128])(frame + 16))
#define local_54 (*(undefined4 *)(frame + 168))
#define local_50 (*(undefined4 *)(frame + 172))
#define local_3c (*(undefined * *)(frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a60
 */

int recovered_10005a60(undefined4 *param_1)

{
  unsigned char frame[284] = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;

  local_34 = auStackY_ec + 0xe8;
  local_2c = auStackY_ec + 0x80;
  local_1c = (undefined1 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_3c = PTR_recovered_100044a0_10009004;
  local_38 = &DAT_10007f8c;
  local_30 = &LAB_10005b3f;
  recovered_10004960(&local_54);
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = 1;
  }
  else {
    puVar3 = &DAT_10007d50;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*param_1;
    }
    local_50 = 0xffffffff;
    recovered_10007330((int *)&local_1c,(int)puVar3,param_1[1]);
    iVar2 = local_18 + 1;
  }
  local_50 = 1;
  local_20 = (void *)recovered_10004530(iVar2);
  puVar3 = &DAT_10007d50;
  if (local_1c != (undefined1 *)0x0) {
    puVar3 = local_1c;
  }
  local_50 = 2;
  recovered_10000e80(local_20,puVar3,local_18 + 1);
  pvVar1 = local_20;
  recovered_10004560();
  recovered_10004980(&local_54);
  return (int)pvVar1;
}

#undef DAT_10007d50
#undef DAT_10007f8c
#undef LAB_10005b3f
#undef PTR_recovered_100044a0_10009004
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStackY_ec
#undef local_54
#undef local_50
#undef local_3c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b70
 */

void recovered_10005b70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

void recovered_10005bb0(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

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
  *(int *)(param_1 + 0x10) = param_2;
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x14) = param_3;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = param_2 + -1;
  if (iVar2 <= param_2 + -1) {
    iVar3 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar4 = 0;
  if (-1 < iVar2) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  iVar2 = param_3 + -1;
  if (iVar1 <= param_3 + -1) {
    iVar2 = iVar1;
  }
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  recovered_100055b0(param_1);
  return;
}


#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c20
 */

void recovered_10005c20(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = &DAT_10007d50;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar3 = 0xffffffff;
  do {
    iVar1 = uVar3 + 1;
    uVar3 = uVar3 + 1;
  } while (puVar2[iVar1] != '\0');
  recovered_10007330(param_1,(int)puVar2,uVar3);
  recovered_100055b0((int)param_1);
  return;
}

#undef DAT_10007d50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c70
 */

void recovered_10005c70(int param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  if ((((param_2 == (int *)0x0 || param_1 == 0) ||
       (puVar1 = (undefined1 *)param_2[2], puVar1 == (undefined1 *)0x0)) ||
      (iVar2 = *param_2, iVar2 < 1)) || (iVar3 = param_2[1], iVar3 < 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  recovered_10007790((int *)(param_1 + 0x34),*(int *)(param_1 + 0x34),puVar1,
                     puVar1 + iVar2 * iVar3 * 4);
  *(int *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x44) = param_2[1];
  recovered_100055b0(param_1);
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
#undef UINT_0000687c
#define UINT_0000687c (*(uint *)(0x687cU))
#undef UINT_00006880
#define UINT_00006880 (*(uint *)(0x6880U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
#define local_78 (*(int *)(frame + 16))
#define local_74 (*(int *)(frame + 20))
#define local_70 (*(int *)(frame + 24))
#define local_6c (*(uint *)(frame + 28))
#define local_68 (*(uint *)(frame + 32))
#define local_64 (*(int *)(frame + 36))
#define local_60 (*(int *)(frame + 40))
#define local_5c (*(int *)(frame + 44))
#define local_58 (*(undefined4 *)(frame + 48))
#define local_54 (*(int *)(frame + 52))
#define local_50 (*(undefined4 *)(frame + 56))
#define local_4c (*(int *)(frame + 60))
#define local_48 (*(undefined4 *)(frame + 64))
#define local_44 (*(uint *)(frame + 68))
#define local_40 (*(int *)(frame + 72))
#define local_3c (*(uint *)(frame + 76))
#define local_38 (*(uint *)(frame + 80))
#define local_34 (*(uint *)(frame + 84))
#define local_30 (*(uint *)(frame + 88))
#define local_2c (*(int *)(frame + 92))
#define local_28 (*(int *)(frame + 96))
#define local_24 (*(uint *)(frame + 100))
#define local_20 (*(uint *)(frame + 104))
#define local_1c (*(int *)(frame + 108))
#define local_18 (*(int *)(frame + 112))
#define local_14 (*(int *)(frame + 116))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ce0
 */

void recovered_10005ce0(int param_1)

{
  unsigned char frame[168] = {0};

  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX = 0;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;

  if (param_1 == 0) {
    return;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    iVar3 = Ram00006800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar4 = Ram00006808, 0xb < uVar4)) &&
       (((uVar4 = Ram00006808, 0xb7 < uVar4 &&
         (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68b4), pcVar2 != (code *)0x0)) &&
        (iVar3 = (*pcVar2)(*(uint *)(param_1 + 0xc),(void *)(param_1 + 0x48)), iVar3 != 0)))) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x74);
      if ((*(byte *)(param_1 + 0x6c) & 1) == 0) goto LAB_10005d94;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
LAB_10005d94:
  iVar3 = Ram00006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
     ((uVar4 = Ram00006808, 0xb < uVar4 &&
      (((uVar4 = Ram00006808, 0x83 < uVar4 &&
        (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6880), pcVar2 != (code *)0x0)) &&
       (iVar3 = (*pcVar2)(&local_3c), iVar3 != 0)))))) {
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    iVar3 = Ram00006800;
    local_14 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    iVar6 = 0;
    if (((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
       ((uVar4 = Ram00006808, 0xb < uVar4 &&
        ((uVar4 = Ram00006808, 0x7f < uVar4 &&
         (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x687c), pcVar2 != (code *)0x0)))))) {
      iVar3 = (*pcVar2)(&local_78);
      if (iVar3 == 0) {
        local_44 = 0;
        iVar6 = 0;
      }
      else {
        local_44 = 0;
        iVar6 = 0;
        if (local_74 == 0 &&
            ((local_68 <= local_6c >> 2 &&
             (local_4c != 0 && (local_54 != 0 && (local_5c != 0 && local_60 == 0x20)))) &&
            ((local_64 != 0 && (local_68 != 0 && (local_6c != 0 && local_70 != 0))) &&
            (local_78 != 0 || local_74 != 0)))) {
          local_14 = 0;
          local_44 = local_68;
          iVar6 = local_64;
        }
      }
    }
    else {
      local_44 = 0;
    }
    local_1c = *(int *)(param_1 + 0x18);
    local_18 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x28);
    if (((local_3c & 2) == 0) || (local_40 = iVar3, local_2c == 0 && local_28 == 0)) {
      if ((byte)(((byte)local_14 ^ 1) & (byte)local_3c) == 0) {
        iVar6 = *(int *)(param_1 + 0x2c);
      }
      else {
        uVar4 = 0;
        if (1 < local_44) {
          if (local_24 == 0) {
            uVar5 = local_44 - 1;
            if (local_34 <= local_44 - 1) {
              uVar5 = local_34;
            }
            uVar4 = 0;
            if (-1 < (int)local_34) {
              uVar4 = uVar5;
            }
          }
          else {
            uVar4 = local_34;
            if ((int)local_34 < 1) {
              uVar4 = 0;
            }
            if (local_24 <= uVar4) {
              uVar4 = local_24;
            }
            lVar1 = (ulonglong)uVar4 * (ulonglong)(local_44 - 1);
            local_14 = iVar6;
            uVar12 = recovered_10000a30((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_24,0);
            iVar6 = local_14;
            uVar4 = (uint)uVar12;
          }
        }
        uVar5 = 0;
        if (1 < iVar6) {
          if (local_20 == 0) {
            uVar7 = iVar6 - 1U;
            if (local_30 <= iVar6 - 1U) {
              uVar7 = local_30;
            }
            uVar5 = 0;
            if (-1 < (int)local_30) {
              uVar5 = uVar7;
            }
          }
          else {
            uVar5 = local_30;
            if ((int)local_30 < 1) {
              uVar5 = 0;
            }
            if (local_20 <= uVar5) {
              uVar5 = local_20;
            }
            lVar1 = (ulonglong)uVar5 * (ulonglong)(iVar6 - 1);
            uVar12 = recovered_10000a30((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_20,0);
            uVar5 = (uint)uVar12;
          }
        }
        iVar3 = (uVar4 - local_1c) + -0xe;
        iVar6 = (uVar5 - local_18) + -0x26;
      }
    }
    else {
      iVar6 = local_28 + *(int *)(param_1 + 0x2c);
      iVar3 = iVar3 + local_2c;
    }
    bVar11 = (*(uint *)(param_1 + 0x6c) & 6) == 2;
    *(byte *)(param_1 + 0x30) = (byte)local_38 & bVar11;
    *(byte *)(param_1 + 0x31) = (byte)((local_38 & 2) >> 1) & bVar11;
    *(byte *)(param_1 + 0x32) = (byte)((local_38 & 4) >> 2) & bVar11;
    iVar8 = *(int *)(param_1 + 0x10);
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    iVar9 = iVar8 + -1;
    if (iVar3 <= iVar8 + -1) {
      iVar9 = iVar3;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    iVar10 = 0;
    if (-1 < iVar3) {
      iVar10 = iVar9;
    }
    *(int *)(param_1 + 0x28) = iVar10;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    iVar3 = iVar8 + -1;
    if (iVar6 <= iVar8 + -1) {
      iVar3 = iVar6;
    }
    iVar8 = 0;
    if (-1 < iVar6) {
      iVar8 = iVar3;
    }
    *(int *)(param_1 + 0x2c) = iVar8;
  }
  recovered_100060f0();
  if (*(char *)(param_1 + 0x21) == '\0') {
    recovered_100055b0(param_1);
  }
  iVar3 = Ram00006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) &&
     ((uVar4 = Ram00006808, 0x9f < uVar4 && (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x689c), pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)();
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000687c
#undef UINT_00006880
#undef UINT_0000689c
#undef UINT_000068b4
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

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10009078
#define DAT_10009078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17daU)))
#undef DAT_10009079
#define DAT_10009079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dbU)))
#undef DAT_1000907a
#define DAT_1000907a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dcU)))
#undef DAT_1000907b
#define DAT_1000907b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ddU)))
#undef DAT_1000907c
#define DAT_1000907c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17deU)))
#undef DAT_1000907d
#define DAT_1000907d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dfU)))
#undef DAT_1000907e
#define DAT_1000907e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e0U)))
#undef DAT_1000907f
#define DAT_1000907f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef DAT_10009080
#define DAT_10009080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e2U)))
#undef DAT_10009081
#define DAT_10009081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e3U)))
#undef DAT_10009082
#define DAT_10009082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e4U)))
#undef DAT_10009083
#define DAT_10009083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e5U)))
#undef DAT_10009084
#define DAT_10009084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e6U)))
#undef DAT_10009085
#define DAT_10009085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e7U)))
#undef DAT_10009086
#define DAT_10009086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e8U)))
#undef DAT_10009087
#define DAT_10009087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eaU)))
#undef DAT_10009089
#define DAT_10009089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ebU)))
#undef DAT_1000908a
#define DAT_1000908a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ecU)))
#undef DAT_1000908b
#define DAT_1000908b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17edU)))
#undef DAT_1000908c
#define DAT_1000908c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eeU)))
#undef DAT_1000908d
#define DAT_1000908d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17efU)))
#undef DAT_1000908e
#define DAT_1000908e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f0U)))
#undef DAT_1000908f
#define DAT_1000908f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_10009090
#define DAT_10009090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f2U)))
#undef DAT_10009091
#define DAT_10009091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f3U)))
#undef DAT_10009092
#define DAT_10009092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f4U)))
#undef DAT_10009093
#define DAT_10009093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f5U)))
#undef DAT_10009094
#define DAT_10009094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f6U)))
#undef DAT_10009095
#define DAT_10009095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f7U)))
#undef DAT_10009096
#define DAT_10009096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f8U)))
#undef DAT_10009097
#define DAT_10009097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f9U)))
#undef DAT_10009098
#define DAT_10009098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17faU)))
#undef DAT_10009099
#define DAT_10009099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fbU)))
#undef DAT_1000909a
#define DAT_1000909a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1000909b
#define DAT_1000909b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fdU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_1000909d
#define DAT_1000909d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ffU)))
#undef DAT_1000909e
#define DAT_1000909e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1800U)))
#undef DAT_1000909f
#define DAT_1000909f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef DAT_100090a0
#define DAT_100090a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1802U)))
#undef DAT_100090a1
#define DAT_100090a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1803U)))
#undef DAT_100090a2
#define DAT_100090a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1804U)))
#undef DAT_100090a3
#define DAT_100090a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1805U)))
#undef DAT_100090a4
#define DAT_100090a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1806U)))
#undef DAT_100090a5
#define DAT_100090a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1807U)))
#undef DAT_100090a6
#define DAT_100090a6 (*(char *)(((uintptr_t)pf_module_state + 0x1808U)))
#undef DAT_100092c0
#define DAT_100092c0 (*(int *)(((uintptr_t)pf_module_state + 0x1a22U)))
#undef DAT_100092c4
#define DAT_100092c4 (*(int *)(((uintptr_t)pf_module_state + 0x1a26U)))
#undef PTR_DAT_10008000
#define PTR_DAT_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x762U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060f0
 */

void recovered_100060f0(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  char in_CL;
  ushort uVar3;
  int iVar4;
  undefined2 extraout_var = 0;
  int iVar5;
  byte bVar6;

  iVar5 = DAT_100092c0;
  DAT_10009078 = 0;
  DAT_10009079 = 0;
  DAT_1000907a = 0;
  DAT_1000907b = 0;
  DAT_1000907c = 0;
  DAT_1000907d = 0;
  DAT_1000907e = 0;
  DAT_1000907f = 0;
  DAT_10009080 = 0;
  DAT_10009081 = 0;
  DAT_10009082 = 0;
  DAT_10009083 = 0;
  DAT_10009084 = 0;
  DAT_10009085 = 0;
  DAT_10009086 = 0;
  DAT_10009087 = 0;
  DAT_10009088 = 0;
  DAT_10009089 = 0;
  DAT_1000908a = 0;
  DAT_1000908b = 0;
  DAT_1000908c = 0;
  DAT_1000908d = 0;
  DAT_1000908e = 0;
  DAT_1000908f = 0;
  DAT_10009090 = 0;
  DAT_10009091 = 0;
  DAT_10009092 = 0;
  DAT_10009093 = 0;
  DAT_10009094 = 0;
  DAT_10009095 = 0;
  DAT_10009096 = 0;
  DAT_10009097 = 0;
  DAT_10009098 = 0;
  DAT_10009099 = 0;
  DAT_1000909a = 0;
  DAT_1000909b = 0;
  DAT_1000909c = 0;
  DAT_1000909d = 0;
  DAT_1000909e = 0;
  DAT_1000909f = 0;
  DAT_100090a0 = 0;
  DAT_100090a1 = 0;
  DAT_100090a2 = 0;
  DAT_100090a3 = 0;
  DAT_100090a4 = 0;
  DAT_100090a5 = 0;
  DAT_100090a6 = '\0';
  if ((DAT_100092c0 != 0) && (*(uint *)(DAT_100092c0 + 0xc) != 0)) {
    iVar4 = Ram00006800;
    if (((iVar4 == 0x50414d57) &&
        (((iVar4 = Ram00006804, iVar4 != 0 && (uVar1 = Ram00006808, 0xb < uVar1)) &&
         (uVar1 = Ram00006808, 0xb7 < uVar1)))) &&
       ((pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68b4), pcVar2 != (code *)0x0 &&
        (iVar4 = (*pcVar2)(*(uint *)(DAT_100092c0 + 0xc),(void *)(DAT_100092c0 + 0x48)), iVar4 != 0)
        ))) {
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x70);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x74);
      if ((*(uint *)(iVar5 + 0x6c) & 1) != 0) {
        *(undefined1 *)(iVar5 + 0x20) = 1;
      }
      if ((*(uint *)(iVar5 + 0x6c) & 6) == 2) {
switchD_100064da_caseD_f:
        do {
          iVar5 = Ram00006800;
          if (iVar5 != 0x50414d57) {
            return;
          }
          iVar5 = Ram00006804;
          if (iVar5 == 0) {
            return;
          }
          uVar1 = Ram00006808;
          if (uVar1 < 0xc) {
            return;
          }
          uVar1 = Ram00006808;
          if (uVar1 < 0x30) {
            return;
          }
          pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x682c);
          if (pcVar2 == (code *)0x0) {
            return;
          }
          uVar3 = (*pcVar2)();
          iVar5 = DAT_100092c0;
          if (CONCAT22(extraout_var,uVar3) == 0) {
            return;
          }
          in_CL = (char)uVar3;
          if (in_CL == '\0') goto LAB_1000635f;
        } while (DAT_100092c0 == 0);
        if (DAT_100092c4 == 2) {
          DAT_100092c4 = 0;
          switch((uintptr_t)(in_CL)) {
          case 'A':
            DAT_10009079 = 1;
            break;
          case 'B':
            DAT_1000907a = 1;
            break;
          case 'C':
            DAT_1000907c = 1;
            break;
          case 'D':
            DAT_1000907b = 1;
          }
        }
        else if (DAT_100092c4 == 1) {
          DAT_100092c4 = (uint)(in_CL == '[') * 2;
        }
        else if (in_CL == '\x1b') {
          DAT_100092c4 = 1;
        }
        else if ((byte)(in_CL - 0x20U) < 0x5f) {
          DAT_100090a6 = in_CL;
          if ((byte)(in_CL + 0x9fU) < 0x1a) {
            **(undefined1 **)
              ((int)&PTR_DAT_10008000 +
              (CONCAT22(extraout_var,uVar3) * 0x1000000 + -0x61000000 >> 0x16)) = 1;
          }
          else {
            bVar6 = in_CL + 0xbf;
            if (bVar6 < 0x1a) {
              if (bVar6 < 0x1a) {
                *(&PTR_DAT_10008000)[bVar6] = 1;
              }
              goto switchD_10006492_caseD_5;
            }
            if (9 < (byte)(in_CL - 0x30U)) goto LAB_10006487;
            recovered_10007480(in_CL);
            iVar5 = DAT_100092c0;
            if (DAT_100092c0 == 0) goto switchD_100064da_caseD_f;
          }
        }
        else {
LAB_10006487:
          switch((uintptr_t)(in_CL)) {
          case '\x03':
          case '\x04':
            *(undefined1 *)(DAT_100092c0 + 0x20) = 1;
            break;
          case '\x05':
          case '\x06':
          case '\a':
          case '\t':
          case '\v':
          case '\f':
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
          case '%':
          case '&':
          case '\'':
          case '(':
          case ')':
          case '*':
          case '+':
          case ',':
            break;
          case '\b':
switchD_10006492_caseD_8:
            DAT_100090a3 = 1;
            break;
          case '\n':
          case '\r':
            DAT_10009078 = 1;
            break;
          case ' ':
            DAT_100090a5 = 1;
            break;
          case '-':
            DAT_100090a1 = 1;
            break;
          case '.':
            DAT_100090a2 = 1;
            break;
          default:
            if (in_CL == '\x7f') goto switchD_10006492_caseD_8;
          }
        }
        goto switchD_10006492_caseD_5;
      }
    }
    else {
      *(undefined1 *)(iVar5 + 0x20) = 1;
    }
  }
  return;
LAB_1000635f:
  if (DAT_100092c0 == 0) goto switchD_100064da_caseD_f;
  switch((uintptr_t)(uVar3 >> 8)) {
  case 1:
    DAT_10009079 = 1;
    goto switchD_100064da_caseD_f;
  case 2:
    DAT_1000907a = 1;
    goto switchD_100064da_caseD_f;
  case 3:
    DAT_1000907c = 1;
    goto switchD_100064da_caseD_f;
  case 4:
    DAT_1000907b = 1;
    goto switchD_100064da_caseD_f;
  case 0x17:
switchD_10006374_caseD_17:
    *(undefined1 *)(iVar5 + 0x20) = 1;
    goto switchD_100064da_caseD_f;
  }
switchD_10006492_caseD_5:
  switch((uintptr_t)(uVar3 >> 8)) {
  case 0xe:
    DAT_100090a3 = 1;
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
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
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
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
    goto switchD_100064da_caseD_f;
  case 0x1c:
    DAT_10009078 = 1;
    goto switchD_100064da_caseD_f;
  case 0x48:
    DAT_10009079 = 1;
    goto switchD_100064da_caseD_f;
  case 0x4b:
    DAT_1000907b = 1;
    goto switchD_100064da_caseD_f;
  case 0x4d:
    DAT_1000907c = 1;
    goto switchD_100064da_caseD_f;
  case 0x50:
    DAT_1000907a = 1;
    goto switchD_100064da_caseD_f;
  case 0x53:
    DAT_100090a4 = 1;
    goto switchD_100064da_caseD_f;
  default:
    if (uVar3 >> 8 != 1) goto switchD_100064da_caseD_f;
  }
  goto switchD_10006374_caseD_17;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10009078
#undef DAT_10009079
#undef DAT_1000907a
#undef DAT_1000907b
#undef DAT_1000907c
#undef DAT_1000907d
#undef DAT_1000907e
#undef DAT_1000907f
#undef DAT_10009080
#undef DAT_10009081
#undef DAT_10009082
#undef DAT_10009083
#undef DAT_10009084
#undef DAT_10009085
#undef DAT_10009086
#undef DAT_10009087
#undef DAT_10009088
#undef DAT_10009089
#undef DAT_1000908a
#undef DAT_1000908b
#undef DAT_1000908c
#undef DAT_1000908d
#undef DAT_1000908e
#undef DAT_1000908f
#undef DAT_10009090
#undef DAT_10009091
#undef DAT_10009092
#undef DAT_10009093
#undef DAT_10009094
#undef DAT_10009095
#undef DAT_10009096
#undef DAT_10009097
#undef DAT_10009098
#undef DAT_10009099
#undef DAT_1000909a
#undef DAT_1000909b
#undef DAT_1000909c
#undef DAT_1000909d
#undef DAT_1000909e
#undef DAT_1000909f
#undef DAT_100090a0
#undef DAT_100090a1
#undef DAT_100090a2
#undef DAT_100090a3
#undef DAT_100090a4
#undef DAT_100090a5
#undef DAT_100090a6
#undef DAT_100092c0
#undef DAT_100092c4
#undef PTR_DAT_10008000
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000682c
#undef UINT_000068b4

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
#undef UINT_000068b4
#define UINT_000068b4 (*(uint *)(0x68b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006560
 */

undefined1 recovered_10006560(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;

  if (param_1 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0xc) != 0) {
    iVar3 = Ram00006800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar1 = Ram00006808, 0xb < uVar1)) &&
       (((uVar1 = Ram00006808, 0xb7 < uVar1 &&
         (pcVar2 = (code *)(*(volatile uint32_t *)(uintptr_t)0x68b4), pcVar2 != (code *)0x0)) &&
        (iVar3 = (*pcVar2)(*(uint *)(param_1 + 0xc),(void *)(param_1 + 0x48)), iVar3 != 0)))) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x74);
      if ((*(byte *)(param_1 + 0x6c) & 1) == 0) goto LAB_100065d4;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
LAB_100065d4:
  return *(undefined1 *)(param_1 + 0x20);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065f0
 */

void recovered_100065f0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x22) = param_2;
  *(undefined1 *)(param_1 + 0x23) = param_3;
  *(undefined1 *)(param_1 + 0x24) = param_4;
  recovered_100055b0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006620
 */

int * recovered_10006620(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  void *dst;
  int iVar5;
  uint bytes;
  int iVar6;
  uint uVar7;

  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)recovered_10004500(0x18);
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    *piVar4 = iVar5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x14);
    }
    piVar4[1] = iVar6;
    bytes = iVar5 * iVar6 * 4;
    dst = (void *)recovered_10004530(bytes);
    piVar4[2] = (int)dst;
    if (((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x40) != iVar5)) ||
       (*(int *)(param_1 + 0x44) != iVar6)) {
      if (bytes != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x22);
        uVar2 = *(undefined1 *)(param_1 + 0x23);
        uVar3 = *(undefined1 *)(param_1 + 0x24);
        uVar7 = 0;
        do {
          *(undefined1 *)((int)dst + uVar7) = uVar1;
          *(undefined1 *)((int)dst + uVar7 + 1) = uVar2;
          *(undefined1 *)((int)dst + uVar7 + 2) = uVar3;
          *(undefined1 *)((int)dst + uVar7 + 3) = 0xff;
          uVar7 = uVar7 + 4;
        } while (uVar7 < bytes);
      }
    }
    else {
      recovered_10000e80(dst,*(void **)(param_1 + 0x34),bytes);
    }
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  return piVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f0
 */

void recovered_100066f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

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
      *param_2 = *(undefined4 *)(param_1 + 0x28);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006730
 */

undefined1 recovered_10006730(int param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 < 3 && param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x30 + param_2);
  }
  return 0;
}


#undef DAT_10009078
#define DAT_10009078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17daU)))
#undef DAT_10009079
#define DAT_10009079 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dbU)))
#undef DAT_1000907a
#define DAT_1000907a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dcU)))
#undef DAT_1000907b
#define DAT_1000907b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ddU)))
#undef DAT_1000907c
#define DAT_1000907c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17deU)))
#undef DAT_1000907d
#define DAT_1000907d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17dfU)))
#undef DAT_1000907e
#define DAT_1000907e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e0U)))
#undef DAT_1000907f
#define DAT_1000907f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e1U)))
#undef DAT_10009080
#define DAT_10009080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e2U)))
#undef DAT_10009081
#define DAT_10009081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e3U)))
#undef DAT_10009082
#define DAT_10009082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e4U)))
#undef DAT_10009083
#define DAT_10009083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e5U)))
#undef DAT_10009084
#define DAT_10009084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e6U)))
#undef DAT_10009085
#define DAT_10009085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e7U)))
#undef DAT_10009086
#define DAT_10009086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e8U)))
#undef DAT_10009087
#define DAT_10009087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17e9U)))
#undef DAT_10009088
#define DAT_10009088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eaU)))
#undef DAT_10009089
#define DAT_10009089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ebU)))
#undef DAT_1000908a
#define DAT_1000908a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ecU)))
#undef DAT_1000908b
#define DAT_1000908b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17edU)))
#undef DAT_1000908c
#define DAT_1000908c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17eeU)))
#undef DAT_1000908d
#define DAT_1000908d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17efU)))
#undef DAT_1000908e
#define DAT_1000908e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f0U)))
#undef DAT_1000908f
#define DAT_1000908f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f1U)))
#undef DAT_10009090
#define DAT_10009090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f2U)))
#undef DAT_10009091
#define DAT_10009091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f3U)))
#undef DAT_10009092
#define DAT_10009092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f4U)))
#undef DAT_10009093
#define DAT_10009093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f5U)))
#undef DAT_10009094
#define DAT_10009094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f6U)))
#undef DAT_10009095
#define DAT_10009095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f7U)))
#undef DAT_10009096
#define DAT_10009096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f8U)))
#undef DAT_10009097
#define DAT_10009097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17f9U)))
#undef DAT_10009098
#define DAT_10009098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17faU)))
#undef DAT_10009099
#define DAT_10009099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fbU)))
#undef DAT_1000909a
#define DAT_1000909a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fcU)))
#undef DAT_1000909b
#define DAT_1000909b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17fdU)))
#undef DAT_1000909c
#define DAT_1000909c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17feU)))
#undef DAT_1000909d
#define DAT_1000909d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x17ffU)))
#undef DAT_1000909e
#define DAT_1000909e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1800U)))
#undef DAT_1000909f
#define DAT_1000909f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1801U)))
#undef DAT_100090a0
#define DAT_100090a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1802U)))
#undef DAT_100090a1
#define DAT_100090a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1803U)))
#undef DAT_100090a2
#define DAT_100090a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1804U)))
#undef DAT_100090a3
#define DAT_100090a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1805U)))
#undef DAT_100090a4
#define DAT_100090a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1806U)))
#undef DAT_100090a5
#define DAT_100090a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1807U)))
#undef DAT_100090a6
#define DAT_100090a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1808U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006760
 */

void recovered_10006760(void)

{
  unsigned char frame[64] = {0};

  DAT_10009078 = 0;
  DAT_10009079 = 0;
  DAT_1000907a = 0;
  DAT_1000907b = 0;
  DAT_1000907c = 0;
  DAT_1000907d = 0;
  DAT_1000907e = 0;
  DAT_1000907f = 0;
  DAT_10009080 = 0;
  DAT_10009081 = 0;
  DAT_10009082 = 0;
  DAT_10009083 = 0;
  DAT_10009084 = 0;
  DAT_10009085 = 0;
  DAT_10009086 = 0;
  DAT_10009087 = 0;
  DAT_10009088 = 0;
  DAT_10009089 = 0;
  DAT_1000908a = 0;
  DAT_1000908b = 0;
  DAT_1000908c = 0;
  DAT_1000908d = 0;
  DAT_1000908e = 0;
  DAT_1000908f = 0;
  DAT_10009090 = 0;
  DAT_10009091 = 0;
  DAT_10009092 = 0;
  DAT_10009093 = 0;
  DAT_10009094 = 0;
  DAT_10009095 = 0;
  DAT_10009096 = 0;
  DAT_10009097 = 0;
  DAT_10009098 = 0;
  DAT_10009099 = 0;
  DAT_1000909a = 0;
  DAT_1000909b = 0;
  DAT_1000909c = 0;
  DAT_1000909d = 0;
  DAT_1000909e = 0;
  DAT_1000909f = 0;
  DAT_100090a0 = 0;
  DAT_100090a1 = 0;
  DAT_100090a2 = 0;
  DAT_100090a3 = 0;
  DAT_100090a4 = 0;
  DAT_100090a5 = 0;
  DAT_100090a6 = 0;
  return;
}

#undef DAT_10009078
#undef DAT_10009079
#undef DAT_1000907a
#undef DAT_1000907b
#undef DAT_1000907c
#undef DAT_1000907d
#undef DAT_1000907e
#undef DAT_1000907f
#undef DAT_10009080
#undef DAT_10009081
#undef DAT_10009082
#undef DAT_10009083
#undef DAT_10009084
#undef DAT_10009085
#undef DAT_10009086
#undef DAT_10009087
#undef DAT_10009088
#undef DAT_10009089
#undef DAT_1000908a
#undef DAT_1000908b
#undef DAT_1000908c
#undef DAT_1000908d
#undef DAT_1000908e
#undef DAT_1000908f
#undef DAT_10009090
#undef DAT_10009091
#undef DAT_10009092
#undef DAT_10009093
#undef DAT_10009094
#undef DAT_10009095
#undef DAT_10009096
#undef DAT_10009097
#undef DAT_10009098
#undef DAT_10009099
#undef DAT_1000909a
#undef DAT_1000909b
#undef DAT_1000909c
#undef DAT_1000909d
#undef DAT_1000909e
#undef DAT_1000909f
#undef DAT_100090a0
#undef DAT_100090a1
#undef DAT_100090a2
#undef DAT_100090a3
#undef DAT_100090a4
#undef DAT_100090a5
#undef DAT_100090a6

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068b0
 */

void recovered_100068b0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068c0
 */

void recovered_100068c0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068d0
 */

undefined4 recovered_100068d0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e0
 */

void recovered_100068e0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f0
 */

undefined4 recovered_100068f0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10007d4e
#define DAT_10007d4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b0U)))
#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
#undef DAT_10007f31
#define DAT_10007f31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x693U)))
#undef DAT_10007f94
#define DAT_10007f94 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6f6U)))
#undef LAB_10007003
#define LAB_10007003 (*(uint8_t *)(0x10007003U))
#undef PTR_recovered_100044a0_10009004
#define PTR_recovered_100044a0_10009004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1766U)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#define local_9c (*(void * *)(frame + 160))
#define local_98 (*(int *)(frame + 164))
#define local_94 (*(uint *)(frame + 168))
#define local_90 (*(int *)(frame + 172))
#define local_8c (*(int *)(frame + 176))
#define local_88 (*(undefined4 *)(frame + 180))
#define local_84 (*(undefined4 *)(frame + 184))
#define local_80 (*(undefined4 *)(frame + 188))
#define local_6c (*(undefined * *)(frame + 208))
#define local_68 (*(undefined * *)(frame + 212))
#define local_64 (*(undefined1 * *)(frame + 216))
#define local_60 (*(undefined1 * *)(frame + 220))
#define local_5c (*(undefined1 * *)(frame + 224))
#define local_4c (*(char * *)(frame + 240))
#define local_48 (*(void * *)(frame + 244))
#define local_44 (*(undefined4 *)(frame + 248))
#define local_40 (*(char * *)(frame + 252))
#define local_3c (*(int *)(frame + 256))
#define local_38 (*(undefined4 *)(frame + 260))
#define local_34 (*(int *)(frame + 264))
#define local_30 (*(void * *)(frame + 268))
#define local_2c (*(undefined4 *)(frame + 272))
#define local_28 (*(uint *)(frame + 276))
#define local_24 (*(void * *)(frame + 280))
#define local_20 (*(char * *)(frame + 284))
#define local_1c (*(void * *)(frame + 288))
#define local_18 (*(void * *)(frame + 292))
#define local_14 (*(undefined4 *)(frame + 296))
#define auStackY_12c (*(undefined1 (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006900
 */

void * recovered_10006900(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[348] = {0};

  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  void *unaff_EBX;
  uint uVar9;
  void *pvVar10;
  uint uVar11;

  local_64 = (undefined1 *)((int)(uintptr_t)(frame + 316) + -4);
  local_5c = auStackY_12c + 0x80;
  local_6c = PTR_recovered_100044a0_10009004;
  local_68 = &DAT_10007f94;
  local_60 = &LAB_10007003;
  recovered_10004960(&local_84);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    pvVar3 = (void *)0x0;
    goto LAB_10006fee;
  }
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = (void *)0x0;
  local_4c = (char *)0x0;
  local_48 = (void *)0x0;
  local_44 = 0;
  uVar2 = 0xffffffff;
  do {
    pcVar5 = (char *)(param_1 + 1 + uVar2);
    uVar2 = uVar2 + 1;
  } while (*pcVar5 != '\0');
  local_80 = 0xffffffff;
  recovered_10007330((int *)&local_4c,param_1,uVar2);
  local_34 = 0;
  local_30 = (void *)0x0;
  local_2c = 0;
  pvVar3 = (void *)0x0;
  if (local_48 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    pcVar5 = &DAT_10007d50;
    if (local_4c != (char *)0x0) {
      pcVar5 = local_4c;
    }
    local_28 = CONCAT31((int3)((uint)local_4c >> 8),*pcVar5 == '/');
  }
  do {
    uVar2 = (int)local_48 - (int)pvVar3;
    if (local_48 < pvVar3 || uVar2 == 0) break;
    pcVar5 = &DAT_10007d50;
    if (local_4c != (char *)0x0) {
      pcVar5 = local_4c;
    }
    pvVar10 = pvVar3;
    do {
      if (pcVar5[(int)pvVar10] == '/') {
        if (pvVar10 != (void *)0xffffffff) {
          local_24 = (void *)0x0;
          local_14 = pvVar10;
          goto LAB_10006abc;
        }
        break;
      }
      pvVar10 = (void *)((int)pvVar10 + 1);
    } while (local_48 != pvVar10);
    local_14 = (void *)0xffffffff;
    unaff_EBX = (void *)CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    pvVar10 = local_48;
    local_24 = unaff_EBX;
LAB_10006abc:
    uVar9 = (int)pvVar10 - (int)pvVar3;
    uVar11 = uVar2;
    if (uVar9 <= uVar2) {
      uVar11 = uVar9;
    }
    if (uVar9 != 0xffffffff) {
      uVar2 = uVar11;
    }
    local_20 = (char *)0x0;
    local_1c = (void *)0x0;
    local_18 = (void *)0x0;
    local_80 = 1;
    recovered_10007330((int *)&local_20,(int)(pcVar5 + (int)pvVar3),uVar2);
    pvVar3 = local_14;
    if (local_1c != (void *)0x0) {
      pcVar5 = &DAT_10007d50;
      if (local_20 != (char *)0x0) {
        pcVar5 = local_20;
      }
      if (local_1c == (void *)0x1) {
        if (*pcVar5 == '.') goto LAB_10006a3c;
      }
      else if (((local_1c == (void *)0x2) && (*pcVar5 == '.')) && (pcVar5[1] == '.')) {
        if (local_30 != (void *)0x0) {
          pcVar5 = *(char **)(local_34 + -0xc + (int)local_30 * 0xc);
          pcVar7 = &DAT_10007d50;
          if (pcVar5 != (char *)0x0) {
            pcVar7 = pcVar5;
          }
          if (((*(int *)(local_34 + -8 + (int)local_30 * 0xc) != 2) || (*pcVar7 != '.')) ||
             (pcVar7[1] != '.')) {
            recovered_10004560();
            local_30 = (void *)((int)local_30 - 1);
            goto LAB_10006a3c;
          }
        }
        if ((char)local_28 != '\0') goto LAB_10006a3c;
      }
      local_80 = 2;
      recovered_100074f0(&local_34,&local_20);
      pvVar3 = local_14;
    }
LAB_10006a3c:
    pvVar3 = (void *)((int)pvVar3 + 1);
    recovered_10004560();
  } while ((char)local_24 == '\0');
  puVar4 = &DAT_10007f31;
  if ((char)local_28 == '\0') {
    puVar4 = &DAT_10007d50;
  }
  local_20 = (char *)0x0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  uVar2 = 0xffffffff;
  do {
    iVar6 = uVar2 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar4[iVar6] != '\0');
  local_80 = 3;
  recovered_10007330((int *)&local_20,(int)puVar4,uVar2);
  if (local_30 != (void *)0x0) {
    pvVar3 = (void *)0x0;
    do {
      local_14 = pvVar3;
      if (pvVar3 != (void *)0x0 || (local_28 & 1) != 0) {
        if (local_1c == local_18) {
          pvVar3 = (void *)0x10;
          if (local_1c != (void *)0x0) {
            pvVar3 = (void *)((int)local_1c * 2);
          }
          if (pvVar3 <= local_1c) goto LAB_10006c80;
          local_80 = 4;
          local_24 = pvVar3;
          pcVar5 = (char *)recovered_10004500((uint)pvVar3 | 1);
          *pcVar5 = '\0';
          if (local_1c != (void *)0x0) {
            pvVar3 = (void *)0x0;
            do {
              pcVar5[(int)pvVar3] = local_20[(int)pvVar3];
              pvVar3 = (void *)((int)pvVar3 + 1);
            } while (local_1c != pvVar3);
          }
          pcVar5[(int)local_1c] = '\0';
          recovered_10004560();
          local_18 = local_24;
LAB_10006ca4:
          local_20 = pcVar5;
        }
        else {
LAB_10006c80:
          if (local_20 == (char *)0x0) {
            local_80 = 5;
            pcVar5 = (char *)recovered_10004500(1);
            *pcVar5 = '\0';
            local_18 = (void *)0x0;
            goto LAB_10006ca4;
          }
        }
        local_20[(int)local_1c] = '/';
        local_20[(int)local_1c + 1] = '\0';
        local_1c = (void *)((int)local_1c + 1);
      }
      puVar4 = *(undefined1 **)(local_34 + (int)local_14 * 0xc);
      puVar8 = &DAT_10007d50;
      if (puVar4 != (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      local_80 = 6;
      recovered_10007610((int *)&local_20,(int)puVar8,*(uint *)(local_34 + 4 + (int)local_14 * 0xc))
      ;
      pvVar3 = (void *)((int)local_14 + 1);
    } while (pvVar3 < local_30);
  }
  if (local_1c == (void *)0x0) {
    pcVar5 = &DAT_10007f31;
    if ((char)local_28 == '\0') {
      pcVar5 = &DAT_10007d4e;
    }
    pvVar3 = (void *)0xffffffff;
    do {
      pcVar7 = pcVar5 + 1 + (int)pvVar3;
      pvVar3 = (void *)((int)pvVar3 + 1);
    } while (*pcVar7 != '\0');
  }
  else {
    pcVar5 = &DAT_10007d50;
    pvVar3 = local_1c;
    if (local_20 != (char *)0x0) {
      pcVar5 = local_20;
    }
  }
  local_38 = 0;
  local_3c = 0;
  local_40 = (char *)0x0;
  local_80 = 7;
  recovered_10007330((int *)&local_40,(int)pcVar5,(uint)pvVar3);
  recovered_10004560();
  for (pvVar3 = local_30; pvVar3 != (void *)0x0; pvVar3 = (void *)((int)pvVar3 - 1)) {
    recovered_10004560();
  }
  local_30 = (void *)0x0;
  recovered_10004560();
  recovered_10004560();
  pcVar5 = &DAT_10007d50;
  if (local_40 != (char *)0x0) {
    pcVar5 = local_40;
  }
  iVar6 = Ram00006800;
  if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
     ((uVar2 = Ram00006808, 0xb < uVar2 &&
      ((uVar2 = Ram00006808, 0x5b < uVar2 && (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6858), pcVar1 != (code *)0x0)
       ))))) {
    local_80 = 8;
    iVar6 = (*pcVar1)(pcVar5,&local_9c);
    if (iVar6 == 0) goto LAB_10006e40;
LAB_10006f00:
    pvVar3 = (void *)0x0;
    if (((local_98 == 0) && (local_14 = local_9c, local_9c != (void *)0x0)) &&
       ((local_94 != 0 && ((local_90 != 0 && (local_8c != 0)))))) {
      local_80 = 10;
      local_24 = (void *)recovered_10004530(local_94);
      local_80 = 0xb;
      recovered_10000e80(local_24,local_14,local_94);
      iVar6 = Ram00006800;
      if ((iVar6 == 0x50414d57) &&
         ((((iVar6 = Ram00006804, iVar6 != 0 && (uVar2 = Ram00006808, 0xb < uVar2)) &&
           (uVar2 = Ram00006808, 0x53 < uVar2)) &&
          (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6850), pcVar1 != (code *)0x0)))) {
        local_80 = 0xc;
        (*pcVar1)();
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_90;
      }
      pvVar3 = local_24;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_8c;
      }
    }
  }
  else {
LAB_10006e40:
    iVar6 = -1;
    do {
      pcVar5 = (char *)(param_1 + 1 + iVar6);
      iVar6 = iVar6 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = &DAT_10007d50;
    if (local_40 != (char *)0x0) {
      pcVar5 = local_40;
    }
    if (local_3c == iVar6) {
      if (local_3c != 0) {
        iVar6 = 0;
        do {
          if (pcVar5[iVar6] != *(char *)(param_1 + iVar6)) goto LAB_10006e95;
          iVar6 = iVar6 + 1;
        } while (local_3c != iVar6);
      }
      pvVar3 = (void *)0x0;
    }
    else {
LAB_10006e95:
      iVar6 = Ram00006800;
      pvVar3 = (void *)0x0;
      if ((((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
          (uVar2 = Ram00006808, 0xb < uVar2)) &&
         ((uVar2 = Ram00006808, 0x5b < uVar2 &&
          (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6858), pcVar1 != (code *)0x0)))) {
        local_80 = 9;
        iVar6 = (*pcVar1)((char *)param_1,&local_9c);
        pvVar3 = (void *)0x0;
        if (iVar6 != 0) goto LAB_10006f00;
      }
    }
  }
  recovered_10004560();
LAB_10006fee:
  recovered_10004980(&local_84);
  return pvVar3;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10007d4e
#undef DAT_10007d50
#undef DAT_10007f31
#undef DAT_10007f94
#undef LAB_10007003
#undef PTR_recovered_100044a0_10009004
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006858
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
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
#undef auStackY_12c

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
#undef UINT_00006868
#define UINT_00006868 (*(uint *)(0x6868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007070
 */

void * recovered_10007070(char *param_1,float param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x6b < uVar2 && (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6868), pcVar3 != (code *)0x0))
     )) {
    pvVar4 = (*pcVar3)(param_1,param_2);
  }
  else {
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006868

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
#undef UINT_00006870
#define UINT_00006870 (*(uint *)(0x6870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070d0
 */

void recovered_100070d0(void *param_1,float param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x73 < uVar2 && (pcVar3 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6870), pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(param_1,param_2);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006870

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10007d48
#define DAT_10007d48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4aaU)))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006874
#define UINT_00006874 (*(uint *)(0x6874U))
#undef _DAT_10007d48
#define _DAT_10007d48 (*(float *)(((uintptr_t)pf_module_state + 0x4aaU)))
#define local_34 (*(uint *)(frame + 16))
#define local_2c (*(void * *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 28))
#define local_24 (*(uint *)(frame + 32))
#define local_20 (*(int *)(frame + 36))
#define local_1c (*(int *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define local_14 (*(ushort *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10007120(int param_1,int param_2,uint param_3,uint param_4,uint param_5,
                        double param_6)

{
  unsigned char frame[100] = {0};

  code *pcVar1;
  double dVar2;
  double dVar3;
  void *src;
  int iVar4;
  uint uVar5;
  void *dst;
  int *piVar6;
  ushort in_FPUControlWord = pf_fpu_control();

  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (void *)0x0;
  piVar6 = (int *)0x0;
  if (param_2 != 0 && param_1 != 0) {
    dVar2 = 1.0;
    if (param_6 <= 1.0) {
      dVar2 = param_6;
    }
    dVar3 = 0.0;
    if (0.0 <= param_6) {
      dVar3 = dVar2 * (double)_DAT_10007d48;
    }
    local_14 = in_FPUControlWord | 0xc00;
    local_34 = (uint)(longlong)ROUND(dVar3);
    iVar4 = Ram00006800;
    if (((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
         (uVar5 = Ram00006808, 0xb < uVar5)) &&
        ((uVar5 = Ram00006808, 0x77 < uVar5 &&
         (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6874), pcVar1 != (code *)0x0)))) &&
       (iVar4 = (*pcVar1)((void *)param_1,(char *)param_2,param_3,param_4,param_5,local_34,&local_2c
                         ), src = local_2c, iVar4 != 0)) {
      if (local_1c == 0 || (local_20 == 0 || local_2c == (void *)0x0)) {
        if (local_2c == (void *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        uVar5 = local_24;
        if (local_24 == 0) {
          uVar5 = local_20 * local_1c * 4;
        }
        piVar6 = (int *)recovered_10004500(0x18);
        *piVar6 = local_20;
        piVar6[1] = local_1c;
        dst = (void *)recovered_10004530(uVar5);
        piVar6[2] = (int)dst;
        recovered_10000e80(dst,src,uVar5);
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
      }
      iVar4 = Ram00006800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
         ((uVar5 = Ram00006808, 0xb < uVar5 &&
          ((uVar5 = Ram00006808, 0x53 < uVar5 &&
           (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6850), pcVar1 != (code *)0x0)))))) {
        (*pcVar1)(src);
      }
    }
  }
  return piVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10007d48
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006874
#undef _DAT_10007d48
#undef local_34
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
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006878
#define UINT_00006878 (*(uint *)(0x6878U))
#define in_stack_00000004 (*(void * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f0
 */

void recovered_100072f0(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x7b < uVar2 &&
      (UNRECOVERED_JUMPTABLE = (code *)(*(volatile uint32_t *)(uintptr_t)0x6878), UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10007326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(in_stack_00000004);
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
#undef UINT_00006878
#undef in_stack_00000004

#define local_1c (*(int *)(frame + 16))
#define local_18 (*(int *)(frame + 20))
#define local_14 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007330
 */

void recovered_10007330(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[76] = {0};

  int iVar1;
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
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        recovered_10007330(&local_1c,(int)(puVar3 + uVar4),uVar6);
        iVar1 = *param_1;
        *param_1 = local_1c;
        iVar2 = param_1[1];
        param_1[1] = local_18;
        iVar5 = param_1[2];
        param_1[2] = local_14;
        local_1c = iVar1;
        local_18 = iVar2;
        local_14 = iVar5;
        recovered_10004560();
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
      puVar3 = (undefined1 *)recovered_10004500(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = (undefined1 *)recovered_10004500(uVar6 + 1);
      *puVar3 = 0;
      iVar1 = *param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)(iVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      recovered_10004560();
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

#undef PTR_DAT_10008068
#define PTR_DAT_10008068 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7caU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

void recovered_10007480(char in_CL)

{
  unsigned char frame[64] = {0};

  if ((byte)(in_CL - 0x30U) < 10) {
    *(&PTR_DAT_10008068)[(byte)(in_CL - 0x30U)] = 1;
  }
  return;
}

#undef PTR_DAT_10008068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a0
 */

void recovered_100074a0(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10004560();
  }
  param_1[1] = 0;
  recovered_10004560();
  return;
}


#undef DAT_10007d50
#define DAT_10007d50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074f0
 */

int recovered_100074f0(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
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
      iVar2 = recovered_10004500(uVar3 * 0xc);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 8;
        do {
          iVar1 = *param_1;
          *(undefined4 *)(iVar2 + -8 + iVar6) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)(iVar2 + -4 + iVar6) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6) = 0;
          recovered_10004560();
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10004560();
      *param_1 = iVar2;
      param_1[2] = uVar3;
      uVar5 = param_1[1];
    }
  }
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar2 + 4 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar2 + 8 + uVar5 * 0xc) = 0;
  puVar4 = &DAT_10007d50;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)*param_2;
  }
  recovered_10007330((int *)(iVar2 + uVar5 * 0xc),(int)puVar4,param_2[1]);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0xc + *param_1;
}

#undef DAT_10007d50

#define local_18 (*(undefined1 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

int * recovered_10007610(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[72] = {0};

  int iVar1;
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
LAB_10007650:
      if (uVar7 != uVar2) goto code_r0x10007658;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_18 = (undefined1 *)recovered_10004500(uVar2 + 1);
        *local_18 = 0;
        iVar4 = *param_1;
        iVar1 = param_1[1];
        if (iVar1 != 0) {
          iVar5 = 0;
          do {
            local_18[iVar5] = *(undefined1 *)(iVar4 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
        local_18[iVar1] = 0;
        recovered_10004560();
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
        goto LAB_10007774;
      }
      goto LAB_10007776;
    }
    uVar6 = param_1[1];
LAB_10007662:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = (undefined1 *)recovered_10004500(uVar6 + 1);
      *puVar3 = 0;
      iVar4 = *param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)(iVar4 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      puVar3[iVar1] = 0;
      recovered_10004560();
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_10007774:
    local_18 = (undefined1 *)*param_1;
LAB_10007776:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_18[iVar4] = 0;
  }
  return param_1;
code_r0x10007658:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_10007662;
  goto LAB_10007650;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007790
 */

int recovered_10007790(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
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
    uVar3 = param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    if (puVar8 < param_4 + (uVar3 - (int)param_3)) {
      puVar1 = (undefined1 *)0x4;
      if (puVar8 != (undefined1 *)0x0) {
        puVar1 = puVar8;
      }
      do {
        puVar8 = puVar1;
        puVar1 = (undefined1 *)((int)puVar8 * 2);
      } while (puVar8 < param_4 + (uVar3 - (int)param_3));
      iVar2 = recovered_10004500((int)puVar8);
      iVar5 = *param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)(iVar2 + iVar6) = *(undefined1 *)(iVar5 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
      }
      recovered_10004560();
      *param_1 = iVar2;
      param_1[2] = (int)puVar8;
      uVar3 = param_1[1];
    }
    for (; uVar7 < uVar3; uVar3 = uVar3 - 1) {
      param_4[((uVar3 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar3 - 1) + *param_1);
    }
    uVar3 = uVar7;
    puVar8 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar3) = *puVar8;
      puVar8 = puVar8 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar8 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar5 = *param_1;
    bVar9 = iVar5 == 0;
  }
  iVar4 = 0;
  if (!bVar9) {
    iVar4 = iVar5 + uVar7;
  }
  return iVar4;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double pf_release_exp(double value) {
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
float pf_release_expf(float value){return (float)pf_release_exp((double)value);}
long double pf_release_expl(long double value){return (long double)pf_release_exp((double)value);}
double pf_release_difftime(long end,long start){return (double)end-(double)start;}
