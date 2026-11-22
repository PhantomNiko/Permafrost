/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f3c0
 */

uint recovered_1003f3c0(uint a,uint b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (b == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (b <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - b;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f410
 */

uint recovered_1003f410(uint a,uint b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (b != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = a >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - b;
      if (uVar2 < b) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f448
 */

int recovered_1003f448(int a,int b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = b;
  if (b < 0) {
    uVar4 = -b;
  }
  uVar3 = a;
  if (a < 0) {
    uVar3 = -a;
  }
  if (b == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0x1f;
    do {
      uVar2 = uVar3 >> (uVar1 & 0xff) & 1 | uVar2 << 1;
      if (uVar4 <= uVar2) {
        uVar5 = uVar5 | 1 << (uVar1 & 0xff);
        uVar2 = uVar2 - uVar4;
      }
      bVar6 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar6);
  }
  if ((b ^ a) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f4b8
 */

int recovered_1003f4b8(int a,int b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = b;
  if (b < 0) {
    uVar4 = -b;
  }
  uVar5 = a;
  if (a < 0) {
    uVar5 = -a;
  }
  if (b == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0x1f;
    do {
      uVar3 = uVar5 >> (uVar2 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar1 = uVar3;
      }
      bVar6 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar6);
  }
  if (a < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


#undef DAT_10054568
#define DAT_10054568 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2860U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f520
 */

void recovered_1003f520(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10054568 = 0;
  recovered_1003f538();
  return;
}

#undef DAT_10054568

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_10054568
#define DAT_10054568 (*(char *)(((uintptr_t)pf_module_state + 0x2860U)))
#undef DAT_1005456c
#define DAT_1005456c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2864U)))
#undef DAT_10054570
#define DAT_10054570 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2868U)))
#undef DAT_40010088
#define DAT_40010088 (*(uint8_t *)(0x40010088U))
#undef DAT_4001008c
#define DAT_4001008c (*(uint8_t *)(0x4001008cU))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#undef DAT_68000004
#define DAT_68000004 (*(uint8_t *)(0x68000004U))
#undef DAT_68000008
#define DAT_68000008 (*(uint8_t *)(0x68000008U))
#undef DAT_6800000c
#define DAT_6800000c (*(uint8_t *)(0x6800000cU))
#undef _DAT_00300000
#define _DAT_00300000 (*(int *)(0x300000U))
#undef _DAT_00300004
#define _DAT_00300004 (*(uint32_t *)(0x300004U))
#undef _DAT_00300008
#define _DAT_00300008 (*(int *)(0x300008U))
#undef _DAT_40010088
#define _DAT_40010088 (*(uint *)(0x40010088U))
#undef _DAT_4001008c
#define _DAT_4001008c (*(uint *)(0x4001008cU))
#undef _DAT_68000000
#define _DAT_68000000 (*(int *)(0x68000000U))
#undef _DAT_68000004
#define _DAT_68000004 (*(uint32_t *)(0x68000004U))
#undef _DAT_68000008
#define _DAT_68000008 (*(uint32_t *)(0x68000008U))
#define local_ac (*(uint (*)[34])(frame + 20))
#define local_24 (*(int *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f538
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1003f538(void)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;

  local_24 = 0;
  if (DAT_10054568 != '\0') {
    return;
  }
  DAT_10054570 = (undefined1 *)0x0;
  DAT_1005456c = 0;
  uVar10 = _DAT_4001008c;
  if (0xf < _DAT_4001008c) {
    uVar10 = 0x10;
  }
  if (_DAT_4001008c != 0) {
    uVar11 = 0;
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(uVar5 * 8 + 0x40010090);
      uVar4 = *(uint *)(uVar5 * 8 + 0x40010094);
      uVar1 = uVar4 + uVar6;
      if ((uVar4 != 0) && (CARRY4(uVar4,uVar6) || CARRY4(uVar4,uVar6) < (0x300000 < uVar1))) {
        if (uVar6 < 0x300001) {
          uVar6 = 0x300000;
        }
        if (uVar11 < 0x10) {
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar8 = uVar11;
            puVar7 = local_ac + uVar11 * 2 + 2;
            do {
              uVar4 = uVar8;
              if (puVar7[-2] <= uVar6) break;
              uVar8 = uVar4 - 1;
              puVar7[1] = puVar7[-1];
              *puVar7 = puVar7[-2];
              uVar4 = 0;
              puVar7 = puVar7 + -2;
            } while (uVar8 != 0);
          }
          uVar11 = uVar11 + 1;
          local_ac[uVar4 * 2 + 2] = uVar6;
          local_ac[uVar4 * 2 + 3] = uVar1 - uVar6;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar10);
    if (uVar11 != 0) {
      iVar12 = 1;
      if (uVar11 != 1) {
        iVar2 = uVar11 - 1;
        puVar7 = local_ac + 5;
        iVar12 = 1;
        do {
          uVar10 = puVar7[-1];
          uVar5 = local_ac[iVar12 * 2 + 1] + local_ac[iVar12 * 2];
          if (uVar5 < uVar10) {
            uVar10 = puVar7[-1];
            local_ac[iVar12 * 2 + 3] = *puVar7;
            local_ac[iVar12 * 2 + 2] = uVar10;
            iVar12 = iVar12 + 1;
          }
          else {
            uVar10 = *puVar7 + uVar10;
            if (uVar5 < uVar10) {
              local_ac[iVar12 * 2 + 1] = uVar10 - local_ac[iVar12 * 2];
            }
          }
          puVar7 = puVar7 + 2;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        if (iVar12 == 0) goto LAB_1003f748;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_10043664((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1005456c != 0) goto LAB_1003f880;
    }
  }
LAB_1003f748:
  iVar12 = (int)DAT_10054570;
  uVar10 = 0x4000000;
  if (0x300000 < _DAT_40010088) {
    uVar10 = _DAT_40010088 & 0xfffffff0;
  }
  uVar5 = uVar10 - 0x300000;
  if (uVar10 < 0x300021) {
    uVar5 = 0x3d00000;
  }
  puVar3 = (undefined1 *)(uVar5 + 0x300000);
  if (0xffcfffff < uVar5) {
    puVar3 = (undefined1 *)0xffffffff;
  }
  if (puVar3 < (undefined1 *)0x60000001) {
    if (0x20 < uVar5) {
      _DAT_00300000 = uVar5 - 0x10;
      _DAT_00300004 = 0;
      puVar3 = (undefined1 *)0x300000;
      _DAT_00300008 = local_24;
      DAT_0030000c = 1;
      puVar9 = &DAT_1005456c;
      if (DAT_1005456c != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x1003f928:
      if (iVar12 == 0) {
        DAT_10054568 = 1;
        DAT_10054570 = puVar3;
        return;
      }
      DAT_10054568 = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_1005456c;
    if (DAT_1005456c != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_10054570 == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_10054570;
    if (bVar13) {
      DAT_10054570 = (undefined1 *)0x300000;
      iVar12 = (int)DAT_10054570;
    }
    DAT_10054570 = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_1005456c;
      if (DAT_1005456c != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x1003f928;
    }
  }
LAB_1003f880:
  if (DAT_10054570 == (undefined1 *)0x0) {
    DAT_10054570 = (undefined1 *)DAT_1005456c;
    DAT_10054568 = 1;
    return;
  }
  DAT_10054568 = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_10054568
#undef DAT_1005456c
#undef DAT_10054570
#undef DAT_40010088
#undef DAT_4001008c
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_00300000
#undef _DAT_00300004
#undef _DAT_00300008
#undef _DAT_40010088
#undef _DAT_4001008c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008
#undef local_ac
#undef local_24

#undef DAT_1005456c
#define DAT_1005456c (*(uint * *)(((uintptr_t)pf_module_state + 0x2864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f930
 */

int recovered_1003f930(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_1003f538();
  iVar1 = 0;
  puVar2 = DAT_1005456c;
  while (puVar2 != (uint *)0x0) {
    uVar3 = (uint)(byte)puVar2[3];
    bVar4 = uVar3 == 1;
    if (bVar4) {
      uVar3 = *puVar2;
    }
    puVar2 = (uint *)puVar2[1];
    if (bVar4) {
      iVar1 = uVar3 + iVar1;
    }
  }
  return iVar1;
}

#undef DAT_1005456c

#undef DAT_1005456c
#define DAT_1005456c (*(int *)(((uintptr_t)pf_module_state + 0x2864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f974
 */

void recovered_1003f974(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003f538();
  for (iVar1 = DAT_1005456c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1005456c

#undef DAT_1005456c
#define DAT_1005456c (*(int * *)(((uintptr_t)pf_module_state + 0x2864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003f9c4
 */

int recovered_1003f9c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_1003f538();
  iVar1 = 0;
  for (piVar2 = DAT_1005456c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1005456c

#undef DAT_1005456c
#define DAT_1005456c (*(int *)(((uintptr_t)pf_module_state + 0x2864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fa00
 */

void recovered_1003fa00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_1003f538();
  for (iVar1 = DAT_1005456c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1005456c

#undef DAT_1005456c
#define DAT_1005456c (*(uint * *)(((uintptr_t)pf_module_state + 0x2864U)))
#undef DAT_10054570
#define DAT_10054570 (*(uint * *)(((uintptr_t)pf_module_state + 0x2868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fa44
 */

uint * recovered_1003fa44(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_1003f538();
    puVar5 = DAT_10054570;
    if (DAT_10054570 == (uint *)0x0) {
      puVar5 = DAT_1005456c;
    }
    if (puVar5 != (uint *)0x0) {
      uVar4 = param_1 + 0xfU & 0xfffffff0;
      puVar2 = puVar5;
      do {
        if (((char)puVar2[3] == '\x01') && (uVar6 = *puVar2, uVar4 <= uVar6)) {
          if (uVar6 < uVar4 + 0x20) {
            puVar5 = (uint *)puVar2[1];
          }
          else {
            uVar3 = puVar2[1];
            puVar5 = (uint *)((int)puVar2 + uVar4 + 0x10);
            *puVar5 = (uVar6 - uVar4) - 0x10;
            *puVar2 = uVar4;
            *(uint **)((int)puVar2 + uVar4 + 0x18) = puVar2;
            *(uint *)((int)puVar2 + uVar4 + 0x14) = uVar3;
            *(undefined1 *)((int)puVar2 + uVar4 + 0x1c) = 1;
            if (uVar3 != 0) {
              *(uint **)(uVar3 + 8) = puVar5;
            }
            puVar2[1] = (uint)puVar5;
          }
          DAT_10054570 = DAT_1005456c;
          if (puVar5 != (uint *)0x0) {
            DAT_10054570 = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_1005456c;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1005456c
#undef DAT_10054570

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fb50
 */

longlong recovered_1003fb50(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = 0;
  uVar2 = 0;
  if (param_3 < 0x40) {
    if (0x1f < param_3) {
      return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
    }
    uVar2 = param_2 << (param_3 & 0x1f) | (param_1 >> 1) >> (~param_3 & 0x1f);
    iVar1 = param_1 << (param_3 & 0xff);
  }
  return CONCAT44(uVar2,iVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fba4
 */

ulonglong recovered_1003fba4(uint param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = 0;
  uVar2 = 0;
  if (param_3 < 0x40) {
    if (0x1f < param_3) {
      return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
    }
    uVar1 = (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f);
    uVar2 = param_2 >> (param_3 & 0xff);
  }
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fbf8
 */

undefined8 recovered_1003fbf8(uint param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((int)param_3 < 1) {
    return CONCAT44(param_2,param_1);
  }
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    (param_2 << 1) << (~param_3 & 0x1f) | param_1 >> (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 - 0x20 & 0xff));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fc44
 */

ulonglong recovered_1003fc44(ulonglong a,ulonglong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;

  uVar2 = a >> 0x20;
  if (b == 0) {
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar11 = 0;
    uVar5 = 0x3f;
    do {
      uVar4 = (uint)(b >> 0x20);
      uVar3 = (uint)b;
      uVar8 = (uint)(a >> 0x20);
      uVar10 = uVar7 << 1 | uVar12 >> 0x1f;
      uVar6 = uVar5 - 0x20;
      uVar7 = (uint)a >> (uVar5 & 0xff) | uVar8 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar7 = uVar8 >> (uVar6 & 0xff);
      }
      uVar8 = uVar7 & 1 | uVar12 << 1;
      bVar13 = uVar10 <= uVar4;
      bVar1 = (uint)(uVar3 <= uVar8) <= uVar10 - uVar4;
      uVar7 = uVar10 - (uVar4 + (uVar3 > uVar8));
      uVar12 = uVar8 - uVar3;
      if (bVar13 && bVar1) {
        uVar7 = uVar10;
        uVar12 = uVar8;
      }
      uVar8 = 1 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar8 = 1 << (uVar6 & 0xff);
      }
      if (!bVar13 || !bVar1) {
        uVar11 = uVar11 | uVar8;
      }
      uVar8 = 1 << (uVar5 & 0xff);
      if (-1 < (int)uVar6) {
        uVar8 = 0;
      }
      a = CONCAT44((int)uVar2,(uint)a);
      if (!bVar13 || !bVar1) {
        uVar9 = uVar9 | uVar8;
      }
      bVar13 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar13);
  }
  return CONCAT44(uVar11,uVar9);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fd28
 */

ulonglong recovered_1003fd28(ulonglong a,ulonglong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;

  uVar4 = (uint)(b >> 0x20);
  uVar3 = (uint)b;
  uVar2 = (uint)(a >> 0x20);
  if (b == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar7 = 0;
  uVar8 = 0x3f;
  do {
    uVar6 = uVar7 << 1 | uVar1 >> 0x1f;
    uVar7 = (uint)a >> (uVar8 & 0xff) | uVar2 << (0x20 - uVar8 & 0xff);
    if (-1 < (int)(uVar8 - 0x20)) {
      uVar7 = uVar2 >> (uVar8 - 0x20 & 0xff);
    }
    uVar5 = uVar7 & 1 | uVar1 << 1;
    uVar1 = uVar5 - uVar3;
    uVar7 = uVar6 - (uVar4 + (uVar3 > uVar5));
    if (uVar6 <= uVar4 && (uint)(uVar3 <= uVar5) <= uVar6 - uVar4) {
      uVar1 = uVar5;
      uVar7 = uVar6;
    }
    bVar9 = uVar8 != 0;
    uVar8 = uVar8 - 1;
  } while (bVar9);
  return CONCAT44(uVar7,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fda8
 */

longlong recovered_1003fda8(longlong a,longlong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;

  uVar10 = (uint)((ulonglong)b >> 0x20);
  uVar4 = (uint)((ulonglong)a >> 0x20);
  if (b == 0) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = (int)uVar10 >> 0x1f;
    uVar6 = (uint)b ^ uVar3;
    uVar7 = uVar6 - uVar3;
    uVar8 = (uVar10 ^ uVar3) - (uVar3 + (uVar6 < uVar3));
    uVar3 = (int)uVar4 >> 0x1f;
    uVar2 = (uint)a ^ uVar3;
    uVar9 = (uVar4 ^ uVar3) - (uVar3 + (uVar2 < uVar3));
    uVar5 = 0;
    uVar6 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar14 = 0x3f;
    do {
      uVar11 = uVar6 << 1 | uVar5 >> 0x1f;
      uVar15 = uVar14 - 0x20;
      uVar6 = uVar2 - uVar3 >> (uVar14 & 0xff) | uVar9 << (0x20 - uVar14 & 0xff);
      if (-1 < (int)uVar15) {
        uVar6 = uVar9 >> (uVar15 & 0xff);
      }
      uVar16 = uVar6 & 1 | uVar5 << 1;
      bVar17 = uVar11 <= uVar8;
      bVar1 = (uint)(uVar7 <= uVar16) <= uVar11 - uVar8;
      uVar5 = uVar16 - uVar7;
      uVar6 = uVar11 - (uVar8 + (uVar7 > uVar16));
      if (bVar17 && bVar1) {
        uVar5 = uVar16;
        uVar6 = uVar11;
      }
      uVar11 = 1 >> (0x20 - uVar14 & 0xff);
      if (-1 < (int)uVar15) {
        uVar11 = 1 << (uVar15 & 0xff);
      }
      if (!bVar17 || !bVar1) {
        uVar12 = uVar12 | uVar11;
      }
      uVar11 = 1 << (uVar14 & 0xff);
      if (-1 < (int)uVar15) {
        uVar11 = 0;
      }
      if (!bVar17 || !bVar1) {
        uVar13 = uVar13 | uVar11;
      }
      bVar17 = uVar14 != 0;
      uVar14 = uVar14 - 1;
    } while (bVar17);
    uVar3 = -uVar13;
    uVar6 = -(uVar12 + (uVar13 != 0));
    if (uVar4 >> 0x1f == uVar10 >> 0x1f) {
      uVar3 = uVar13;
      uVar6 = uVar12;
    }
  }
  return CONCAT44(uVar6,uVar3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003fec0
 */

longlong recovered_1003fec0(longlong a,longlong b)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  uVar5 = (uint)((ulonglong)b >> 0x20);
  uVar6 = (uint)((ulonglong)a >> 0x20);
  if (b == 0) {
    return 0;
  }
  uVar4 = (int)uVar5 >> 0x1f;
  uVar3 = (uint)b ^ uVar4;
  uVar9 = uVar3 - uVar4;
  uVar2 = (int)uVar6 >> 0x1f;
  uVar1 = (uint)a ^ uVar2;
  uVar10 = (uVar5 ^ uVar4) - (uVar4 + (uVar3 < uVar4));
  uVar3 = (uVar6 ^ uVar2) - (uVar2 + (uVar1 < uVar2));
  uVar4 = 0;
  uVar6 = 0;
  uVar5 = 0x3f;
  do {
    uVar7 = uVar6 << 1 | uVar4 >> 0x1f;
    uVar6 = uVar1 - uVar2 >> (uVar5 & 0xff) | uVar3 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar6 = uVar3 >> (uVar5 - 0x20 & 0xff);
    }
    uVar8 = uVar6 & 1 | uVar4 << 1;
    uVar4 = uVar8 - uVar9;
    uVar6 = uVar7 - (uVar10 + (uVar9 > uVar8));
    if (uVar7 <= uVar10 && (uint)(uVar9 <= uVar8) <= uVar7 - uVar10) {
      uVar4 = uVar8;
      uVar6 = uVar7;
    }
    bVar11 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar11);
  uVar2 = -(uVar6 + (uVar4 != 0));
  uVar5 = -uVar4;
  if (-1 < a) {
    uVar2 = uVar6;
    uVar5 = uVar4;
  }
  return CONCAT44(uVar2,uVar5);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ff7c
 */

void recovered_1003ff7c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1003ff84
 */

int recovered_1003ff84(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (value < 0) {
    value = -value;
  }
  return value;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_1003ff90(ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x40010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x50U && api[0x4c/4]) {return ((void * (*)(ulong))(uintptr_t)api[0x4c/4])(size);}
 return 0;
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void recovered_1003ffe4(void *pointer){
 volatile uint32_t *api=(volatile uint32_t *)0x40010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x54U && api[0x50/4]) {((void (*)(void *))(uintptr_t)api[0x50/4])(pointer);return;}
}


/* Preserve the guest heap callback ABI; Pooka's Free Software License. */
void * recovered_10040034(void *pointer,ulong size){
 volatile uint32_t *api=(volatile uint32_t *)0x40010800U;
 if(api[0]==0x50414d57U && api[1] && api[2]>=0x58U && api[0x54/4]) {return ((void * (*)(void *,ulong))(uintptr_t)api[0x54/4])(pointer,size);}
 return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040088
 */

void * recovered_10040088(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;

  uVar8 = count;
  puVar3 = destination;
  if (count < 8) {
  }
  else {
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_100400c4;
    if (((uint)destination & 3) == 0) {
      puVar2 = source;
      puVar4 = destination;
    }
    else {
      *(undefined1 *)destination = *(undefined1 *)source;
      if (count - 1 == 0 || ((uint)((int)destination + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)source + 1);
        uVar8 = count - 1;
        puVar4 = (undefined8 *)((int)destination + 1);
      }
      else {
        *(undefined1 *)((int)destination + 1) = *(undefined1 *)((int)source + 1);
        puVar2 = (undefined8 *)((int)source + 2);
        uVar8 = count - 2;
        puVar4 = (undefined8 *)((int)destination + 2);
        if (count - 2 != 0 && ((uint)((int)destination + 2) & 3) != 0) {
          uVar8 = count - 3;
          *(undefined1 *)((int)destination + 2) = *(undefined1 *)((int)source + 2);
          puVar2 = (undefined8 *)((int)source + 3);
          puVar4 = (undefined8 *)((int)destination + 3);
          if ((uVar8 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar8 = count - 4;
            *(undefined1 *)((int)destination + 3) = *(undefined1 *)((int)source + 3);
            puVar4 = (undefined8 *)((int)destination + 4);
            puVar2 = (undefined8 *)((int)source + 4);
          }
        }
      }
    }
    puVar5 = puVar2;
    if (uVar8 < 0x10) {
      source = puVar2;
      puVar3 = puVar4;
    }
    else {
      if (0x2f < uVar8 - 0x10) {
        puVar3 = (undefined8 *)(uVar8 & 0xfffffff0);
        bVar10 = puVar4 < (undefined8 *)((int)puVar2 + (int)puVar3);
        if (bVar10) {
          puVar3 = (undefined8 *)((int)puVar4 + (int)puVar3);
        }
        if (!(bVar10 && puVar2 < puVar3)) {
          uVar6 = (uVar8 - 0x10 >> 4) + 1;
          uVar9 = uVar6 & 0xfffffffc;
          uVar8 = uVar8 + uVar9 * -0x10;
          puVar3 = puVar4 + uVar9 * 2;
          source = puVar2 + uVar9 * 2;
          uVar7 = uVar9;
          do {
            puVar5 = puVar2 + 8;
            uVar11 = puVar2[1];
            uVar7 = uVar7 - 4;
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            uVar14 = puVar2[4];
            uVar15 = puVar2[5];
            uVar16 = puVar2[6];
            uVar17 = puVar2[7];
            *puVar4 = *puVar2;
            puVar4[1] = uVar11;
            puVar4[2] = uVar12;
            puVar4[3] = uVar13;
            puVar4[4] = uVar14;
            puVar4[5] = uVar15;
            puVar4[6] = uVar16;
            puVar4[7] = uVar17;
            puVar2 = puVar5;
            puVar4 = puVar4 + 8;
          } while (uVar7 != 0);
          puVar2 = source;
          puVar4 = puVar3;
          if (uVar6 == uVar9) goto LAB_10040258;
        }
      }
      do {
        uVar8 = uVar8 - 0x10;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar2 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        puVar1 = (undefined4 *)((int)puVar2 + 0xc);
        puVar2 = puVar2 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        source = puVar2;
        puVar3 = puVar4;
      } while (0xf < uVar8);
    }
LAB_10040258:
    count = (ulong)source;
    if (uVar8 < 4) {
    }
    else {
      uVar7 = uVar8 - 4;
      bVar10 = uVar7 == 0xc;
      if (0xb < uVar7) {
        puVar5 = (undefined8 *)((int)puVar3 - (int)source);
        bVar10 = puVar5 == (undefined8 *)0xf;
      }
      if ((0xb < uVar7 && (undefined8 *)0xe < puVar5) && !bVar10) {
        uVar9 = (uVar7 >> 2) + 1;
        uVar6 = uVar9 & 0xfffffffc;
        uVar8 = uVar8 + uVar6 * -4;
        puVar4 = (undefined8 *)((int)puVar3 + uVar6 * 4);
        puVar2 = (undefined8 *)((int)source + uVar6 * 4);
        uVar7 = uVar6;
        do {
          uVar11 = *(undefined8 *)count;
          uVar12 = *(undefined8 *)(count + 8);
          count = count + 0x10;
          uVar7 = uVar7 - 4;
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3 = puVar3 + 2;
        } while (uVar7 != 0);
        source = puVar2;
        puVar3 = puVar4;
        if (uVar9 == uVar6) goto LAB_100400bc;
      }
      else {
        puVar2 = source;
        puVar4 = puVar3;
      }
      do {
        source = (void *)((int)puVar2 + 4);
        count = *(ulong *)puVar2;
        uVar8 = uVar8 - 4;
        puVar3 = (undefined8 *)((int)puVar4 + 4);
        *(ulong *)puVar4 = count;
        puVar2 = source;
        puVar4 = puVar3;
      } while (3 < uVar8);
    }
  }
LAB_100400bc:
  if (uVar8 == 0) {
    return destination;
  }
LAB_100400c4:
  if (0xf < uVar8) {
    count = (int)puVar3 - (int)source;
  }
  if (0xf < uVar8 && (undefined8 *)0xf < count) {
    uVar6 = uVar8 & 0xfffffff0;
    uVar9 = uVar8 & 0xf;
    puVar2 = (undefined8 *)((int)source + uVar6);
    puVar4 = (undefined8 *)((int)puVar3 + uVar6);
    uVar7 = uVar6;
    do {
      uVar11 = *(undefined8 *)source;
      uVar12 = *(undefined8 *)((int)source + 8);
      source = (void *)((int)source + 0x10);
      uVar7 = uVar7 - 0x10;
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3 = puVar3 + 2;
    } while (uVar7 != 0);
    if (uVar8 == uVar6) {
      return destination;
    }
  }
  else {
    puVar2 = source;
    puVar4 = puVar3;
    uVar9 = uVar8;
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 1);
    puVar4 = (undefined8 *)((int)puVar4 + 1);
  } while (uVar9 != 0);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004030c
 */

void * recovered_1004030c(void *destination,void *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_r5;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *in_r12;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;

  if (destination == source || count == 0) {
    return destination;
  }
  puVar10 = source;
  if (source <= destination) {
    puVar10 = (undefined8 *)((int)source + count);
    in_r12 = puVar10;
  }
  if ((source > destination || in_r12 < destination) || destination == puVar10) {
    uVar9 = count;
    if ((count < 8) || ((((uint)source ^ (uint)destination) & 3) != 0)) {
      puVar10 = destination;
      goto LAB_10040354;
    }
    if (((uint)destination & 3) == 0) {
      puVar2 = source;
      puVar4 = destination;
    }
    else {
      *(undefined1 *)destination = *(undefined1 *)source;
      if (count - 1 == 0 || ((uint)((int)destination + 1) & 3) == 0) {
        puVar2 = (undefined8 *)((int)source + 1);
        uVar9 = count - 1;
        puVar4 = (undefined8 *)((int)destination + 1);
      }
      else {
        *(undefined1 *)((int)destination + 1) = *(undefined1 *)((int)source + 1);
        puVar2 = (undefined8 *)((int)source + 2);
        uVar9 = count - 2;
        puVar4 = (undefined8 *)((int)destination + 2);
        if (count - 2 != 0 && ((uint)((int)destination + 2) & 3) != 0) {
          uVar9 = count - 3;
          puVar2 = (undefined8 *)((int)source + 3);
          puVar4 = (undefined8 *)((int)destination + 3);
          *(undefined1 *)((int)destination + 2) = *(undefined1 *)((int)source + 2);
          if ((uVar9 != 0) && (((uint)puVar4 & 3) != 0)) {
            uVar9 = count - 4;
            *(undefined1 *)((int)destination + 3) = *(undefined1 *)((int)source + 3);
            puVar4 = (undefined8 *)((int)destination + 4);
            puVar2 = (undefined8 *)((int)source + 4);
          }
        }
      }
    }
    if (uVar9 < 0x10) {
      source = puVar2;
      puVar10 = puVar4;
    }
    else {
      if (0x2f < uVar9 - 0x10) {
        count = uVar9 & 0xfffffff0;
        bVar11 = puVar4 < (undefined8 *)((int)puVar2 + count);
        if (bVar11) {
          count = (int)puVar4 + count;
        }
        if (!(bVar11 && puVar2 < count)) {
          puVar8 = (undefined8 *)((uVar9 - 0x10 >> 4) + 1);
          count = (uint)puVar8 & 0xfffffffc;
          uVar9 = uVar9 + count * -0x10;
          puVar10 = puVar4 + count * 2;
          source = puVar2 + count * 2;
          puVar6 = (undefined8 *)count;
          do {
            uVar12 = puVar2[1];
            puVar6 = (undefined8 *)((int)puVar6 + -4);
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            uVar15 = puVar2[4];
            uVar16 = puVar2[5];
            uVar17 = puVar2[6];
            uVar18 = puVar2[7];
            *puVar4 = *puVar2;
            puVar4[1] = uVar12;
            puVar4[2] = uVar13;
            puVar4[3] = uVar14;
            puVar4[4] = uVar15;
            puVar4[5] = uVar16;
            puVar4[6] = uVar17;
            puVar4[7] = uVar18;
            puVar2 = puVar2 + 8;
            puVar4 = puVar4 + 8;
          } while (puVar6 != (undefined8 *)0x0);
          puVar2 = source;
          puVar4 = puVar10;
          if (puVar8 == (undefined8 *)count) goto LAB_100405e0;
        }
      }
      do {
        uVar9 = uVar9 - 0x10;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar2 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        puVar1 = (undefined4 *)((int)puVar2 + 0xc);
        puVar2 = puVar2 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        source = puVar2;
        puVar10 = puVar4;
      } while (0xf < uVar9);
    }
LAB_100405e0:
    if (3 < uVar9) {
      uVar3 = uVar9 - 4;
      bVar11 = uVar3 == 0xc;
      if (0xb < uVar3) {
        count = (int)puVar10 - (int)source;
        bVar11 = (undefined8 *)count == (undefined8 *)0xf;
      }
      if ((0xb < uVar3 && (undefined8 *)0xe < count) && !bVar11) {
        count = (uVar3 >> 2) + 1;
        puVar8 = (undefined8 *)(count & 0xfffffffc);
        uVar9 = uVar9 + (int)puVar8 * -4;
        puVar6 = (undefined8 *)((int)puVar10 + (int)puVar8 * 4);
        puVar2 = (undefined8 *)((int)source + (int)puVar8 * 4);
        puVar4 = puVar8;
        do {
          uVar12 = *(undefined8 *)source;
          uVar13 = *(undefined8 *)((int)source + 8);
          source = (void *)((int)source + 0x10);
          puVar4 = (undefined8 *)((int)puVar4 + -4);
          *puVar10 = uVar12;
          puVar10[1] = uVar13;
          puVar10 = puVar10 + 2;
        } while (puVar4 != (undefined8 *)0x0);
        source = puVar2;
        puVar10 = puVar6;
        if ((undefined8 *)count == puVar8) goto LAB_1004065c;
      }
      else {
        puVar2 = source;
        puVar6 = puVar10;
      }
      do {
        count = *(ulong *)puVar2;
        uVar9 = uVar9 - 4;
        *(ulong *)puVar6 = count;
        source = (undefined8 *)((int)puVar2 + 4);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
        puVar10 = (undefined8 *)((int)puVar6 + 4);
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      } while (3 < uVar9);
    }
LAB_1004065c:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10040354:
    if (0xf < uVar9) {
      count = (int)puVar10 - (int)source;
    }
    if (0xf < uVar9 && (undefined8 *)0xf < count) {
      uVar7 = uVar9 & 0xfffffff0;
      uVar3 = uVar9 & 0xf;
      puVar4 = (undefined8 *)((int)source + uVar7);
      puVar2 = (undefined8 *)((int)puVar10 + uVar7);
      uVar5 = uVar7;
      do {
        uVar12 = *(undefined8 *)source;
        uVar13 = *(undefined8 *)((int)source + 8);
        source = (void *)((int)source + 0x10);
        uVar5 = uVar5 - 0x10;
        *puVar10 = uVar12;
        puVar10[1] = uVar13;
        puVar10 = puVar10 + 2;
      } while (uVar5 != 0);
      if (uVar9 == uVar7) {
        return destination;
      }
    }
    else {
      puVar2 = puVar10;
      uVar3 = uVar9;
      puVar4 = source;
    }
    do {
      uVar3 = uVar3 - 1;
      *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
      puVar2 = (undefined8 *)((int)puVar2 + 1);
      puVar4 = (undefined8 *)((int)puVar4 + 1);
    } while (uVar3 != 0);
    return destination;
  }
  puVar10 = (undefined8 *)((int)destination + count);
  if ((count < 8) || ((((uint)in_r12 ^ (uint)puVar10) & 3) != 0)) {
    uVar9 = count;
    goto LAB_100403d0;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_1004066c:
    uVar9 = count;
    puVar4 = in_r12;
  }
  else {
    puVar2 = (undefined8 *)((int)puVar10 + -1);
    *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -1);
    uVar9 = count - 1;
    puVar4 = (undefined8 *)((int)in_r12 + -1);
    if (count - 1 != 0 && ((uint)puVar2 & 3) != 0) {
      puVar2 = (undefined8 *)((int)puVar10 + -2);
      *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -2);
      uVar9 = count - 2;
      puVar4 = (undefined8 *)((int)in_r12 + -2);
      if (count - 2 != 0 && ((uint)puVar2 & 3) != 0) {
        puVar2 = (undefined8 *)((int)puVar10 + -3);
        *(undefined1 *)puVar2 = *(undefined1 *)((int)in_r12 + -3);
        uVar9 = count - 3;
        puVar4 = (undefined8 *)((int)in_r12 + -3);
        if (count - 3 != 0 && ((uint)puVar2 & 3) != 0) {
          in_r12 = (undefined8 *)((int)in_r12 + -4);
          *(undefined1 *)((int)puVar10 + -4) = *(undefined1 *)in_r12;
          count = count - 4;
          puVar2 = (undefined8 *)((int)puVar10 + -4);
          goto LAB_1004066c;
        }
      }
    }
  }
  in_r12 = puVar4;
  if (uVar9 < 0x10) {
    count = (ulong)puVar2;
  }
  else {
    if (0x2f < uVar9 - 0x10) {
      puVar10 = (undefined8 *)(uVar9 & 0xfffffff0);
      bVar11 = (undefined8 *)((int)puVar2 - (int)puVar10) < in_r12;
      if (bVar11) {
        puVar10 = (undefined8 *)((int)in_r12 - (int)puVar10);
      }
      if (!(bVar11 && puVar10 < puVar2)) {
        uVar5 = (uVar9 - 0x10 >> 4) + 1;
        uVar7 = uVar5 & 0xfffffffc;
        puVar10 = in_r12 + -8;
        count = (ulong)(puVar2 + uVar7 * -2);
        in_r12 = in_r12 + uVar7 * -2;
        uVar9 = uVar9 + uVar7 * -0x10;
        uVar3 = uVar7;
        do {
          unaff_r5 = puVar10 + -8;
          uVar12 = puVar10[1];
          uVar3 = uVar3 - 4;
          uVar13 = puVar10[2];
          uVar14 = puVar10[3];
          uVar15 = puVar10[4];
          uVar16 = puVar10[5];
          uVar17 = puVar10[6];
          uVar18 = puVar10[7];
          puVar2[-8] = *puVar10;
          puVar2[-7] = uVar12;
          puVar2[-6] = uVar13;
          puVar2[-5] = uVar14;
          puVar2[-4] = uVar15;
          puVar2[-3] = uVar16;
          puVar2[-2] = uVar17;
          puVar2[-1] = uVar18;
          puVar10 = unaff_r5;
          puVar2 = puVar2 + -8;
        } while (uVar3 != 0);
        puVar2 = (undefined8 *)count;
        if (uVar5 == uVar7) goto LAB_10040748;
      }
    }
    do {
      uVar9 = uVar9 - 0x10;
      *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)in_r12 + -4);
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(in_r12 + -1);
      *(undefined4 *)((int)puVar2 + -0xc) = *(undefined4 *)((int)in_r12 + -0xc);
      in_r12 = in_r12 + -2;
      puVar2 = puVar2 + -2;
      *(undefined4 *)puVar2 = *(undefined4 *)in_r12;
      count = (ulong)puVar2;
    } while (0xf < uVar9);
  }
LAB_10040748:
  puVar10 = (undefined8 *)count;
  if (3 < uVar9) {
    uVar3 = uVar9 - 4;
    bVar11 = uVar3 == 0xc;
    if (0xb < uVar3) {
      unaff_r5 = (undefined8 *)((int)in_r12 - count);
      bVar11 = unaff_r5 == (undefined8 *)0xf;
    }
    if ((0xb < uVar3 && (undefined8 *)0xe < unaff_r5) && !bVar11) {
      uVar7 = (uVar3 >> 2) + 1;
      uVar5 = uVar7 & 0xfffffffc;
      puVar10 = (undefined8 *)(count + uVar5 * -4);
      puVar2 = (undefined8 *)((int)in_r12 + uVar5 * -4);
      uVar9 = uVar9 + uVar5 * -4;
      count = count + -0x10;
      uVar3 = uVar5;
      do {
        uVar12 = in_r12[-1];
        uVar3 = uVar3 - 4;
        *(undefined8 *)count = in_r12[-2];
        *(undefined8 *)(count + 8) = uVar12;
        count = count + -0x10;
        in_r12 = in_r12 + -2;
      } while (uVar3 != 0);
      in_r12 = puVar2;
      if (uVar7 == uVar5) goto LAB_10040804;
    }
    else {
      puVar2 = in_r12;
    }
    do {
      puVar2 = (undefined8 *)((int)puVar2 + -4);
      count = *(ulong *)puVar2;
      uVar9 = uVar9 - 4;
      puVar10 = (undefined8 *)((int)puVar10 + -4);
      *(ulong *)puVar10 = count;
      in_r12 = puVar2;
    } while (3 < uVar9);
  }
LAB_10040804:
  if (uVar9 == 0) {
    return destination;
  }
LAB_100403d0:
  if (0xf < uVar9) {
    count = (int)in_r12 - (int)puVar10;
  }
  if (0xf < uVar9 && (undefined8 *)0xf < count) {
    uVar5 = uVar9 & 0xfffffff0;
    uVar3 = uVar5;
    puVar2 = puVar10;
    puVar4 = in_r12;
    do {
      uVar12 = puVar4[-1];
      uVar3 = uVar3 - 0x10;
      puVar2[-2] = puVar4[-2];
      puVar2[-1] = uVar12;
      puVar2 = puVar2 + -2;
      puVar4 = puVar4 + -2;
    } while (uVar3 != 0);
    bVar11 = uVar9 == uVar5;
    uVar9 = uVar9 & 0xf;
    puVar10 = (undefined8 *)((int)puVar10 - uVar5);
    in_r12 = (undefined8 *)((int)in_r12 - uVar5);
    if (bVar11) {
      return destination;
    }
  }
  do {
    uVar9 = uVar9 - 1;
    *(undefined1 *)((int)puVar10 + -1) = *(undefined1 *)((int)in_r12 + -1);
    puVar10 = (undefined8 *)((int)puVar10 + -1);
    in_r12 = (undefined8 *)((int)in_r12 + -1);
  } while (uVar9 != 0);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040818
 */

void * recovered_10040818(void *destination,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;

  uVar2 = (undefined1)value;
  uVar9 = count;
  piVar4 = destination;
  if (count < 8) goto joined_r0x100409a0;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x100408b8:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        piVar4 = piVar10;
      }
      else {
        uVar6 = (uVar9 - 0x10 >> 4) + 1;
        uVar7 = uVar6 & 0xfffffffc;
        uVar1 = CONCAT44(iVar8,iVar8);
        uVar9 = uVar9 + uVar7 * -0x10;
        piVar4 = piVar10 + uVar7 * 4;
        uVar5 = uVar7;
        do {
          *(undefined8 *)piVar10 = uVar1;
          *(undefined8 *)(piVar10 + 2) = uVar1;
          uVar5 = uVar5 - 4;
          *(undefined8 *)(piVar10 + 4) = uVar1;
          *(undefined8 *)(piVar10 + 6) = uVar1;
          *(undefined8 *)(piVar10 + 8) = uVar1;
          *(undefined8 *)(piVar10 + 10) = uVar1;
          *(undefined8 *)(piVar10 + 0xc) = uVar1;
          *(undefined8 *)(piVar10 + 0xe) = uVar1;
          piVar10 = piVar10 + 0x10;
        } while (uVar5 != 0);
        piVar10 = piVar4;
        if (uVar6 == uVar7) goto joined_r0x10040944;
      }
      do {
        uVar9 = uVar9 - 0x10;
        piVar4[3] = iVar8;
        piVar4[2] = iVar8;
        piVar4[1] = iVar8;
        piVar10 = piVar4 + 4;
        *piVar4 = iVar8;
        piVar4 = piVar10;
      } while (0xf < uVar9);
    }
  }
  else {
    piVar10 = (int *)((int)destination + 1);
    uVar9 = count - 1;
    *(undefined1 *)destination = uVar2;
    if (uVar9 != 0) {
      if (((uint)piVar10 & 3) != 0) {
        uVar9 = count - 2;
        piVar10 = (int *)((int)destination + 2);
        *(undefined1 *)((int)destination + 1) = uVar2;
        if (uVar9 != 0 && ((uint)piVar10 & 3) != 0) {
          uVar9 = count - 3;
          piVar10 = (int *)((int)destination + 3);
          *(undefined1 *)((int)destination + 2) = uVar2;
          if ((uVar9 != 0) && (((uint)piVar10 & 3) != 0)) {
            *(undefined1 *)((int)destination + 3) = uVar2;
            uVar9 = count - 4;
            piVar10 = (int *)((int)destination + 4);
          }
        }
      }
      goto joined_r0x100408b8;
    }
  }
joined_r0x10040944:
  piVar4 = piVar10;
  if (3 < uVar9) {
    if (uVar9 - 4 < 0xc) {
    }
    else {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar6 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar6 * -4;
      piVar4 = piVar10 + uVar6;
      uVar5 = uVar6;
      do {
        *(ulonglong *)piVar10 = CONCAT44(iVar8,iVar8);
        *(ulonglong *)(piVar10 + 2) = CONCAT44(iVar8,iVar8);
        piVar10 = piVar10 + 4;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
      if (uVar7 == uVar6) goto joined_r0x100409a0;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x100409a0:
  if (uVar9 != 0) {
    if (uVar9 < 0x10) {
      uVar5 = uVar9;
      piVar10 = piVar4;
    }
    else {
      uVar6 = uVar9 & 0xfffffff0;
      uVar3 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
      uVar1 = CONCAT44(uVar3,uVar3);
      piVar10 = (int *)((int)piVar4 + uVar6);
      uVar5 = uVar9 & 0xf;
      uVar7 = uVar6;
      do {
        *(undefined8 *)piVar4 = uVar1;
        *(undefined8 *)(piVar4 + 2) = uVar1;
        piVar4 = piVar4 + 4;
        uVar7 = uVar7 - 0x10;
      } while (uVar7 != 0);
      if (uVar9 == uVar6) {
        return destination;
      }
    }
    do {
      *(undefined1 *)piVar10 = uVar2;
      uVar5 = uVar5 - 1;
      piVar10 = (int *)((int)piVar10 + 1);
    } while (uVar5 != 0);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040a18
 */

void recovered_10040a18(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  puVar6 = param_1;
  uVar9 = param_2;
  if (param_2 < 8) goto joined_r0x10040b98;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10040ab4:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        puVar5 = puVar6;
      }
      else {
        uVar7 = (uVar9 - 0x10 >> 4) + 1;
        uVar8 = uVar7 & 0xfffffffc;
        uVar1 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        uVar2 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar9 = uVar9 + uVar8 * -0x10;
        puVar5 = puVar6 + uVar8 * 4;
        uVar4 = uVar8;
        do {
          *puVar6 = 0;
          puVar6[1] = uVar1;
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar4 = uVar4 - 4;
          puVar6[4] = 0;
          puVar6[5] = uVar1;
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          puVar6[8] = 0;
          puVar6[9] = uVar1;
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          puVar6[0xc] = 0;
          puVar6[0xd] = uVar1;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          puVar6 = puVar6 + 0x10;
        } while (uVar4 != 0);
        puVar6 = puVar5;
        if (uVar7 == uVar8) goto joined_r0x10040b38;
      }
      do {
        uVar9 = uVar9 - 0x10;
        *puVar5 = 0;
        puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar5 = puVar5 + 4;
        puVar6 = puVar5;
      } while (0xf < uVar9);
    }
  }
  else {
    puVar6 = (undefined4 *)((int)param_1 + 1);
    uVar9 = param_2 - 1;
    *(undefined1 *)param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)((int)param_1 + 2);
        *(undefined1 *)((int)param_1 + 1) = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            *(undefined1 *)((int)param_1 + 3) = 0;
            puVar6 = param_1 + 1;
          }
        }
      }
      goto joined_r0x10040ab4;
    }
  }
joined_r0x10040b38:
  if (3 < uVar9) {
    if (0xb < uVar9 - 4) {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar8 * -4;
      puVar5 = puVar6 + uVar8;
      uVar4 = uVar8;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      puVar6 = puVar5;
      if (uVar7 == uVar8) goto joined_r0x10040b98;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10040b98:
  if (uVar9 != 0) {
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0xfffffff0;
      puVar5 = (undefined4 *)((int)puVar6 + uVar7);
      uVar4 = uVar7;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      bVar10 = uVar9 == uVar7;
      uVar9 = uVar9 & 0xf;
      puVar6 = puVar5;
      if (bVar10) {
        return;
      }
    }
    do {
      *(undefined1 *)puVar6 = 0;
      uVar9 = uVar9 - 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (uVar9 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040c14
 */

void recovered_10040c14(undefined4 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  puVar6 = param_1;
  uVar9 = param_2;
  if (param_2 < 8) goto joined_r0x10040d94;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10040cb0:
    if (0xf < uVar9) {
      if (uVar9 - 0x10 < 0x30) {
        puVar5 = puVar6;
      }
      else {
        uVar7 = (uVar9 - 0x10 >> 4) + 1;
        uVar8 = uVar7 & 0xfffffffc;
        uVar1 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        uVar2 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        uVar3 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar9 = uVar9 + uVar8 * -0x10;
        puVar5 = puVar6 + uVar8 * 4;
        uVar4 = uVar8;
        do {
          *puVar6 = 0;
          puVar6[1] = uVar1;
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar4 = uVar4 - 4;
          puVar6[4] = 0;
          puVar6[5] = uVar1;
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          puVar6[8] = 0;
          puVar6[9] = uVar1;
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          puVar6[0xc] = 0;
          puVar6[0xd] = uVar1;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          puVar6 = puVar6 + 0x10;
        } while (uVar4 != 0);
        puVar6 = puVar5;
        if (uVar7 == uVar8) goto joined_r0x10040d34;
      }
      do {
        uVar9 = uVar9 - 0x10;
        *puVar5 = 0;
        puVar5[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar5[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar5[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar5 = puVar5 + 4;
        puVar6 = puVar5;
      } while (0xf < uVar9);
    }
  }
  else {
    puVar6 = (undefined4 *)((int)param_1 + 1);
    uVar9 = param_2 - 1;
    *(undefined1 *)param_1 = 0;
    if (uVar9 != 0) {
      if (((uint)puVar6 & 3) != 0) {
        uVar9 = param_2 - 2;
        puVar6 = (undefined4 *)((int)param_1 + 2);
        *(undefined1 *)((int)param_1 + 1) = 0;
        if (uVar9 != 0 && ((uint)puVar6 & 3) != 0) {
          uVar9 = param_2 - 3;
          puVar6 = (undefined4 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = 0;
          if ((uVar9 != 0) && (((uint)puVar6 & 3) != 0)) {
            uVar9 = param_2 - 4;
            *(undefined1 *)((int)param_1 + 3) = 0;
            puVar6 = param_1 + 1;
          }
        }
      }
      goto joined_r0x10040cb0;
    }
  }
joined_r0x10040d34:
  if (3 < uVar9) {
    if (0xb < uVar9 - 4) {
      uVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = uVar7 & 0xfffffffc;
      uVar9 = uVar9 + uVar8 * -4;
      puVar5 = puVar6 + uVar8;
      uVar4 = uVar8;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      puVar6 = puVar5;
      if (uVar7 == uVar8) goto joined_r0x10040d94;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10040d94:
  if (uVar9 != 0) {
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0xfffffff0;
      puVar5 = (undefined4 *)((int)puVar6 + uVar7);
      uVar4 = uVar7;
      do {
        *puVar6 = 0;
        puVar6[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar6[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar6[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      bVar10 = uVar9 == uVar7;
      uVar9 = uVar9 & 0xf;
      puVar6 = puVar5;
      if (bVar10) {
        return;
      }
    }
    do {
      *(undefined1 *)puVar6 = 0;
      uVar9 = uVar9 - 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (uVar9 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10040e10
 */

int recovered_10040e10(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;

  if (count < 8) {
LAB_10040f08:
    if (count == 0) {
      return 0;
    }
  }
  else if ((((uint)right ^ (uint)left) & 3) == 0) {
    uVar5 = count;
    puVar1 = right;
    puVar7 = left;
    if (((uint)left & 3) != 0) {
      uVar6 = (uint)*(byte *)right;
      uVar5 = (uint)*(byte *)left;
      if (uVar5 != uVar6) goto LAB_10041000;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10041000;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10041000;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10041000;
            uVar5 = count - 4;
            puVar1 = (uint *)((int)right + 4);
            puVar7 = (uint *)((int)left + 4);
          }
        }
      }
    }
    while (left = puVar7, right = puVar1, count = uVar5, 0xf < count) {
      uVar6 = *(uint *)right;
      uVar5 = *(uint *)left;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = *(uint *)((int)right + 4);
        uVar5 = *(uint *)((int)left + 4);
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = *(uint *)((int)right + 8);
        uVar5 = *(uint *)((int)left + 8);
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_10040f38:
        if ((uVar5 & 0xff) == (uVar6 & 0xff)) {
          if ((uVar5 & 0xffff) >> 8 == (uVar6 & 0xffff) >> 8) {
            uVar3 = uVar5 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((uVar5 >> 0x10 & 0xff) == (uVar6 >> 0x10 & 0xff)) {
              uVar3 = uVar5 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 >> 0x18 == uVar6 >> 0x18) {
                return 0;
              }
            }
          }
          else {
            uVar3 = uVar5 >> 8;
            uVar4 = uVar6 >> 8;
          }
        }
        else {
          uVar3 = uVar5;
          uVar4 = uVar6;
        }
        return (uVar3 & 0xff) - (uVar4 & 0xff);
      }
      uVar6 = *(uint *)((int)right + 0xc);
      uVar5 = *(uint *)((int)left + 0xc);
      if (uVar5 != uVar6) goto LAB_10040f38;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10041008(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10040f08;
  }
  while( true ) {
    uVar6 = (uint)(byte)*(uint *)right;
    uVar5 = (uint)(byte)*(uint *)left;
    if (uVar5 != uVar6) break;
    count = count - 1;
    right = (void *)((int)right + 1);
    left = (void *)((int)left + 1);
    if (count == 0) {
      return 0;
    }
  }
LAB_10041000:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041008
 */

int recovered_10041008(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = (uint)*param_2;
  uVar3 = (uint)*param_1;
  if (uVar3 == uVar2) {
    uVar2 = (uint)param_2[1];
    uVar3 = (uint)param_1[1];
    if (uVar3 == uVar2) {
      uVar2 = (uint)param_2[2];
      uVar3 = (uint)param_1[2];
      if (uVar3 == uVar2) {
        iVar1 = 0;
        if ((uint)param_1[3] != (uint)param_2[3]) {
          iVar1 = (uint)param_1[3] - (uint)param_2[3];
        }
        return iVar1;
      }
    }
  }
  return uVar3 - uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041058
 */

int recovered_10041058(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x61U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004106c
 */

int recovered_1004106c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x41U < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041080
 */

int recovered_10041080(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041098
 */

int recovered_10041098(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 0x1a);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100410c4
 */

int recovered_100410c4(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value == 0x20 || value == 9);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100410e4
 */

int recovered_100410e4(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x20U < 0x5f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100410f8
 */

int recovered_100410f8(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x5bU) {
    value = value + 0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041108
 */

int recovered_10041108(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < value - 0x7bU) {
    value = value + -0x20;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041118
 */

ulong recovered_10041118(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if (text == (char *)0x0) {
    return 0;
  }
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (text[uVar2] != '\0');
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041140
 */

int recovered_10041140(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *left;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_10041178:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10041178;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041184
 */

int recovered_10041184(char *left,char *right)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *left;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_100411bc:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_100411bc;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100411c8
 */

char * recovered_100411c8(char *destination,char *source)

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


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001084c
#define DAT_4001084c (*(uint8_t *)(0x4001084cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001084c
#define _DAT_4001084c (*(code * *)(0x4001084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100411e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * recovered_100411e4(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;

  if (text == (char *)0x0) {
    return (char *)0x0;
  }
  uVar9 = 0xfffffffc;
  do {
    uVar4 = uVar9;
    uVar9 = uVar4 + 1;
  } while (text[uVar4 + 4] != '\0');
  if (_DAT_40010800 != 0x50414d57) {
    return (char *)0x0;
  }
  if (_DAT_40010804 == 0) {
    return (char *)0x0;
  }
  if (_DAT_40010808 < 0x50) {
    return (char *)0x0;
  }
  if (_DAT_4001084c == (code *)0x0) {
    return (char *)0x0;
  }
  uVar9 = uVar4 + 5;
  uVar19 = (*_DAT_4001084c)(uVar9);
  pcVar2 = (char *)uVar19;
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  if (7 < uVar9) {
    uVar1 = CONCAT44((uint)pcVar2 ^ (uint)text,pcVar2);
    if ((((uint)pcVar2 ^ (uint)text) & 3) != 0) goto LAB_100412ac;
    if ((uVar19 & 3) == 0) {
      pcVar3 = pcVar2;
      pcVar6 = text;
    }
    else {
      *pcVar2 = *text;
      if (uVar4 == 0xfffffffc || ((uint)(pcVar2 + 1) & 3) == 0) {
        pcVar3 = pcVar2 + 1;
        pcVar6 = text + 1;
        uVar9 = uVar4 + 4;
      }
      else {
        pcVar2[1] = text[1];
        pcVar3 = pcVar2 + 2;
        pcVar6 = text + 2;
        uVar9 = uVar4 + 3;
        if (uVar4 != 0xfffffffd && ((uint)(pcVar2 + 2) & 3) != 0) {
          pcVar6 = text + 3;
          pcVar3 = pcVar2 + 3;
          pcVar2[2] = text[2];
          uVar9 = uVar4 + 2;
          if ((uVar4 != 0xfffffffe) && (((uint)pcVar3 & 3) != 0)) {
            pcVar3 = pcVar2 + 4;
            pcVar2[3] = text[3];
            pcVar6 = text + 4;
            uVar9 = uVar4 + 1;
          }
        }
      }
    }
    if (uVar9 < 0x10) {
      pcVar8 = pcVar3;
      pcVar5 = pcVar6;
    }
    else {
      if (0x2f < uVar9 - 0x10) {
        pcVar8 = (char *)(uVar9 & 0xfffffff0);
        text = pcVar6 + (int)pcVar8;
        if (pcVar3 < text) {
          pcVar8 = pcVar3 + (int)pcVar8;
        }
        if (!(pcVar3 < text && pcVar6 < pcVar8)) {
          uVar7 = (uVar9 - 0x10 >> 4) + 1;
          uVar10 = uVar7 & 0xfffffffc;
          uVar9 = uVar9 + uVar10 * -0x10;
          pcVar8 = pcVar3 + uVar10 * 0x10;
          pcVar5 = pcVar6 + uVar10 * 0x10;
          uVar4 = uVar10;
          do {
            uVar12 = *(undefined8 *)(pcVar6 + 8);
            text = pcVar3 + 0x40;
            uVar4 = uVar4 - 4;
            uVar13 = *(undefined8 *)(pcVar6 + 0x10);
            uVar14 = *(undefined8 *)(pcVar6 + 0x18);
            uVar15 = *(undefined8 *)(pcVar6 + 0x20);
            uVar16 = *(undefined8 *)(pcVar6 + 0x28);
            uVar17 = *(undefined8 *)(pcVar6 + 0x30);
            uVar18 = *(undefined8 *)(pcVar6 + 0x38);
            *(undefined8 *)pcVar3 = *(undefined8 *)pcVar6;
            *(undefined8 *)(pcVar3 + 8) = uVar12;
            *(undefined8 *)(pcVar3 + 0x10) = uVar13;
            *(undefined8 *)(pcVar3 + 0x18) = uVar14;
            *(undefined8 *)(pcVar3 + 0x20) = uVar15;
            *(undefined8 *)(pcVar3 + 0x28) = uVar16;
            *(undefined8 *)(pcVar3 + 0x30) = uVar17;
            *(undefined8 *)(pcVar3 + 0x38) = uVar18;
            pcVar3 = text;
            pcVar6 = pcVar6 + 0x40;
          } while (uVar4 != 0);
          pcVar3 = pcVar8;
          pcVar6 = pcVar5;
          if (uVar7 == uVar10) goto LAB_10041440;
        }
      }
      do {
        uVar9 = uVar9 - 0x10;
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
        *(undefined4 *)(pcVar3 + 4) = *(undefined4 *)(pcVar6 + 4);
        *(undefined4 *)(pcVar3 + 8) = *(undefined4 *)(pcVar6 + 8);
        pcVar8 = pcVar6 + 0xc;
        pcVar6 = pcVar6 + 0x10;
        *(undefined4 *)(pcVar3 + 0xc) = *(undefined4 *)pcVar8;
        pcVar3 = pcVar3 + 0x10;
        pcVar8 = pcVar3;
        pcVar5 = pcVar6;
      } while (0xf < uVar9);
    }
LAB_10041440:
    uVar19 = CONCAT44(pcVar8,pcVar8);
    if (uVar9 < 4) {
      text = pcVar5;
    }
    else {
      uVar4 = uVar9 - 4;
      bVar11 = uVar4 == 0xc;
      if (0xb < uVar4) {
        text = pcVar8 + -(int)pcVar5;
        bVar11 = text == (char *)0xf;
      }
      if ((0xb < uVar4 && (char *)0xe < text) && !bVar11) {
        uVar10 = (uVar4 >> 2) + 1;
        uVar7 = uVar10 & 0xfffffffc;
        uVar9 = uVar9 + uVar7 * -4;
        pcVar3 = pcVar8 + uVar7 * 4;
        pcVar6 = pcVar5 + uVar7 * 4;
        uVar4 = uVar7;
        do {
          uVar12 = *(undefined8 *)pcVar5;
          uVar13 = *(undefined8 *)(pcVar5 + 8);
          pcVar5 = pcVar5 + 0x10;
          uVar4 = uVar4 - 4;
          *(undefined8 *)pcVar8 = uVar12;
          *(undefined8 *)(pcVar8 + 8) = uVar13;
          pcVar8 = pcVar8 + 0x10;
          uVar19 = CONCAT44(pcVar8,pcVar3);
        } while (uVar4 != 0);
        text = pcVar6;
        if (uVar10 == uVar7) goto LAB_100412a4;
      }
      else {
        pcVar3 = pcVar8;
        pcVar6 = pcVar5;
      }
      do {
        text = pcVar6 + 4;
        uVar9 = uVar9 - 4;
        uVar19 = CONCAT44(*(undefined4 *)pcVar6,pcVar3 + 4);
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
        pcVar3 = pcVar3 + 4;
        pcVar6 = text;
      } while (3 < uVar9);
    }
  }
LAB_100412a4:
  uVar1 = uVar19;
  if (uVar9 == 0) {
    return pcVar2;
  }
LAB_100412ac:
  pcVar3 = (char *)(uVar1 >> 0x20);
  pcVar6 = (char *)uVar1;
  if (0xf < uVar9) {
    pcVar3 = pcVar6 + -(int)text;
  }
  if (0xf < uVar9 && (char *)0xf < pcVar3) {
    uVar10 = uVar9 & 0xfffffff0;
    uVar4 = uVar9 & 0xf;
    pcVar8 = text + uVar10;
    pcVar3 = pcVar6 + uVar10;
    uVar7 = uVar10;
    do {
      uVar12 = *(undefined8 *)text;
      uVar13 = *(undefined8 *)(text + 8);
      text = text + 0x10;
      uVar7 = uVar7 - 0x10;
      *(undefined8 *)pcVar6 = uVar12;
      *(undefined8 *)(pcVar6 + 8) = uVar13;
      pcVar6 = pcVar6 + 0x10;
    } while (uVar7 != 0);
    if (uVar9 == uVar10) {
      return pcVar2;
    }
  }
  else {
    uVar4 = uVar9;
    pcVar3 = pcVar6;
    pcVar8 = text;
  }
  do {
    uVar4 = uVar4 - 1;
    *pcVar3 = *pcVar8;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar4 != 0);
  return pcVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001084c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100414f8
 */

char * recovered_100414f8(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;

  cVar1 = *text;
  if (cVar1 != '\0') {
    do {
      if ((char)value == cVar1) {
        return text;
      }
      text = text + 1;
      cVar1 = *text;
    } while (cVar1 != '\0');
  }
  if ((value & 0xffU) != 0) {
    text = (char *)0x0;
  }
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004152c
 */

ulong recovered_1004152c(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char cVar4;

  cVar4 = *text;
  if (cVar4 != '\0') {
    uVar3 = 0;
    while (*accept != '\0') {
      pcVar1 = accept;
      cVar2 = *accept;
      while (pcVar1 = pcVar1 + 1, cVar4 != cVar2) {
        cVar2 = *pcVar1;
        if (cVar2 == '\0') {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      cVar4 = text[uVar3];
      if (cVar4 == '\0') {
        return uVar3;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041590
 */

char * recovered_10041590(char *text,char *accept)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;

  cVar3 = *text;
  if (cVar3 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*accept != '\0') {
      pcVar1 = accept;
      cVar2 = *accept;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar3 == cVar2) {
          return text;
        }
        cVar2 = *pcVar1;
      } while (cVar2 != '\0');
    }
    text = text + 1;
    cVar3 = *text;
  } while (cVar3 != '\0');
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100415f0
 */

char * recovered_100415f0(char *haystack,char *needle)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;

  if (*needle == '\0') {
    return haystack;
  }
  cVar2 = *haystack;
  do {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    iVar1 = 0;
    cVar2 = *needle;
    while (haystack[iVar1] == cVar2) {
      cVar2 = needle[iVar1 + 1];
      iVar1 = iVar1 + 1;
      if (cVar2 == '\0') {
        return haystack;
      }
    }
    haystack = haystack + 1;
    cVar2 = *haystack;
  } while( true );
}


#undef DAT_1005399c
#define DAT_1005399c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041654
 */

undefined * recovered_10041654(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1005399c;
}

#undef DAT_1005399c

#undef DAT_10054128
#define DAT_10054128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2420U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041664
 */

undefined * recovered_10041664(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10054128;
}

#undef DAT_10054128

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#define local_14 (*(undefined4 *)(frame + 44))
#define local_10 (*(undefined4 *)(frame + 48))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define local_24 (*(undefined4 *)(frame + 28))
#define uStack_18 (*(undefined4 *)(frame + 40))
#define local_1c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041674
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10041674(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  uStack_20 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_1c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  uStack_18 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_10 = 0;
  local_24 = 0;
  local_14 = 0;
  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x16c)) ||
     ((_DAT_40010968 == (code *)0x0 || (iVar1 = (*_DAT_40010968)(&local_24), iVar1 == 0)))) {
    local_1c = 0x574d4236;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_1c;
  }
  return local_1c;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef local_14
#undef local_10
#undef uStack_20
#undef local_24
#undef uStack_18
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041724
 */

double recovered_10041724(undefined4 param_1,undefined4 param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  if ((int)param_3 < 1) {
    if (0x7fffffff < param_3) {
      do {
        dVar3 = dVar3 * 0.5;
        bVar2 = param_3 != 0xffffffff;
        param_3 = param_3 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = param_3 + 1;
    do {
      dVar3 = dVar3 + dVar3;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041768
 */

double recovered_10041768(undefined4 param_1,undefined4 param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_2,param_1));
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (dVar2 == 0.0) {
    return 0.0;
  }
  iVar1 = 0;
  dVar3 = dVar2;
  if (dVar2 < 0.0) {
    dVar3 = -dVar2;
  }
  for (; 1.0 <= dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; (0.0 < dVar3 && (dVar3 < 0.5)); dVar3 = dVar3 + dVar3) {
    iVar1 = iVar1 + -1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  if (dVar2 < 0.0) {
    dVar3 = -dVar3;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041820
 */

double recovered_10041820(double x,double y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  uint in_fpscr;
  undefined4 uVar1;

  if (pf_bits_double(CONCAT44(in_r3,in_r2)) == 0.0) {
    return x;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(in_r1,in_r0)) / pf_bits_double(CONCAT44(in_r3,in_r2)),3);
  VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)x >> 0x20),uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041858
 */

double recovered_10041858(double base,double exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r2;
  undefined4 in_r3;
  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  uint uVar3;
  double dVar4;

  uVar3 = (uint)((ulonglong)base >> 0x20);
  uVar2 = VectorFloatToSigned(CONCAT44(in_r3,in_r2),3);
  dVar4 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar4 != pf_bits_double(CONCAT44(in_r3,in_r2))) {
    return pf_bits_double(CONCAT44(uVar3,uVar2));
  }
  if (uVar2 == 0) {
    return (double)((ulonglong)uVar3 << 0x20);
  }
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return pf_bits_double(CONCAT44(uVar3,uVar2));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100418d8
 */

double recovered_100418d8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041908
 */

double recovered_10041908(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004194c
 */

double recovered_1004194c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;

  if (0.0 < pf_bits_double(CONCAT44(in_r1,in_r0))) {
    iVar1 = 0x18;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return value;
}


#undef DAT_10041ac8
#define DAT_10041ac8 (*(uint64_t *)(0x10041ac8U))
#undef DAT_10041ad0
#define DAT_10041ad0 (*(uint64_t *)(0x10041ad0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041998
 */

double recovered_10041998(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 in_r0;
  int iVar2;
  undefined4 in_r1;
  uint in_fpscr;
  uint uVar3;
  double dVar4;

  dVar4 = pf_bits_double(CONCAT44(in_r1,in_r0));
  if (dVar4 < 0.0) {
    return value;
  }
  iVar2 = 0;
  uVar3 = in_fpscr & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4)) {
    do {
      dVar4 = dVar4 * 0.5;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
    } while (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4));
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar2 = iVar2 + -1;
  }
  VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar2));
}

#undef DAT_10041ac8
#undef DAT_10041ad0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041ad8
 */

longlong recovered_10041ad8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10041c98(dVar1 + pf_bits_double(CONCAT44(in_r1,in_r0)));
  return lVar2;
}


#undef DAT_10041b98
#define DAT_10041b98 (*(double *)(0x10041b98U))
#undef DAT_10041ba0
#define DAT_10041ba0 (*(double *)(0x10041ba0U))
#undef DAT_10041ba8
#define DAT_10041ba8 (*(double *)(0x10041ba8U))
#undef DAT_10041bb0
#define DAT_10041bb0 (*(double *)(0x10041bb0U))
#undef DAT_10041bb8
#define DAT_10041bb8 (*(uint64_t *)(0x10041bb8U))
#undef DAT_10041bc0
#define DAT_10041bc0 (*(uint64_t *)(0x10041bc0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041b08
 */

double recovered_10041b08(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  return value;
}

#undef DAT_10041b98
#undef DAT_10041ba0
#undef DAT_10041ba8
#undef DAT_10041bb0
#undef DAT_10041bb8
#undef DAT_10041bc0

#undef DAT_10041c50
#define DAT_10041c50 (*(double *)(0x10041c50U))
#undef DAT_10041c58
#define DAT_10041c58 (*(double *)(0x10041c58U))
#undef DAT_10041c60
#define DAT_10041c60 (*(double *)(0x10041c60U))
#undef DAT_10041c68
#define DAT_10041c68 (*(double *)(0x10041c68U))
#undef DAT_10041c70
#define DAT_10041c70 (*(uint64_t *)(0x10041c70U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041bc8
 */

double recovered_10041bc8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  return value;
}

#undef DAT_10041c50
#undef DAT_10041c58
#undef DAT_10041c60
#undef DAT_10041c68
#undef DAT_10041c70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041c78
 */

double recovered_10041c78(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return value;
}


#undef DAT_10041d50
#define DAT_10041d50 (*(double *)(0x10041d50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041c98
 */

longlong recovered_10041c98(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;

  dVar7 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  if (dVar7 == 0.0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = 0x3f;
  uVar4 = 0;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  dVar9 = dVar7;
  if (dVar7 < 0.0) {
    dVar9 = -dVar7;
  }
  do {
    uVar2 = 1 << (uVar1 & 0xff);
    uVar3 = uVar1 - 0x20;
    if (-1 < (int)uVar3) {
      uVar2 = 0;
    }
    if (dVar8 <= dVar9) {
      uVar5 = uVar5 | uVar2;
    }
    uVar2 = 1 >> (0x20 - uVar1 & 0xff);
    if (-1 < (int)uVar3) {
      uVar2 = 1 << (uVar3 & 0xff);
    }
    if (dVar8 <= dVar9) {
      uVar4 = uVar4 | uVar2;
      dVar9 = dVar9 - dVar8;
    }
    bVar6 = uVar1 != 0;
    uVar1 = uVar1 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  uVar2 = -(uVar4 + (uVar5 != 0));
  uVar1 = -uVar5;
  if (0.0 <= dVar7) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10041d50

#undef DAT_10041dd8
#define DAT_10041dd8 (*(double *)(0x10041dd8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041d58
 */

ulonglong recovered_10041d58(double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;

  dVar7 = (double)(((ulonglong)x & 0xffffffff00000000) + ((ulonglong)x & 0xffffffff));
  uVar1 = 0;
  uVar2 = 0;
  if (dVar7 <= 0.0) {
    return 0;
  }
  uVar3 = 0x3f;
  dVar8 = pf_bits_double(0x43e0000000000000ULL);
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    uVar5 = uVar3 - 0x20;
    if (-1 < (int)uVar5) {
      uVar4 = 0;
    }
    if (dVar8 <= dVar7) {
      uVar1 = uVar1 | uVar4;
    }
    uVar4 = 1 >> (0x20 - uVar3 & 0xff);
    if (-1 < (int)uVar5) {
      uVar4 = 1 << (uVar5 & 0xff);
    }
    if (dVar8 <= dVar7) {
      uVar2 = uVar2 | uVar4;
      dVar7 = dVar7 - dVar8;
    }
    bVar6 = uVar3 != 0;
    uVar3 = uVar3 - 1;
    dVar8 = dVar8 * 0.5;
  } while (bVar6);
  return CONCAT44(uVar2,uVar1);
}

#undef DAT_10041dd8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041de0
 */

double recovered_10041de0(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (x == 0) {
    return 0.0;
  }
  dVar3 = 1.0;
  dVar4 = 0.0;
  do {
    dVar5 = dVar4 + dVar3;
    dVar3 = dVar3 + dVar3;
    if ((x & 1) == 0) {
      dVar5 = dVar4;
    }
    dVar4 = dVar5;
    uVar1 = (uint)(x >> 0x21);
    uVar2 = (uint)((byte)(x >> 0x20) & 1) << 0x1f | (uint)x >> 1;
    x = CONCAT44(uVar1,uVar2);
  } while (uVar2 != 0 || uVar1 != 0);
  return dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041e28
 */

double recovered_10041e28(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (x < 0) {
    dVar5 = 1.0;
    uVar2 = -(int)x;
    uVar3 = -((int)((ulonglong)x >> 0x20) + (uint)((int)x != 0));
    dVar4 = 0.0;
    do {
      dVar6 = dVar5 + dVar4;
      dVar5 = dVar5 + dVar5;
      if ((uVar2 & 1) == 0) {
        dVar6 = dVar4;
      }
      dVar4 = dVar6;
      bVar1 = (byte)uVar3;
      uVar3 = uVar3 >> 1;
      uVar2 = (uint)(bVar1 & 1) << 0x1f | uVar2 >> 1;
    } while (uVar2 != 0 || uVar3 != 0);
    return -dVar4;
  }
  if (x == 0) {
    return 0.0;
  }
  dVar4 = 1.0;
  dVar5 = 0.0;
  do {
    dVar6 = dVar4 + dVar5;
    dVar4 = dVar4 + dVar4;
    if ((x & 1U) == 0) {
      dVar6 = dVar5;
    }
    uVar3 = (uint)((ulonglong)x >> 0x21);
    uVar2 = (uint)((byte)((ulonglong)x >> 0x20) & 1) << 0x1f | (uint)x >> 1;
    x = CONCAT44(uVar3,uVar2);
    dVar5 = dVar6;
  } while (uVar2 != 0 || uVar3 != 0);
  return dVar6;
}


#undef DAT_10041ef8
#define DAT_10041ef8 (*(float *)(0x10041ef8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041eb8
 */

float recovered_10041eb8(float x,float y)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  float in_r1;
  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (in_r1 == 0.0) {
    return pf_bits_float(0x0U);
  }
  uVar1 = VectorFloatToSigned((double)in_r0 / (double)in_r1,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)in_r0 - dVar2 * (double)in_r1);
}

#undef DAT_10041ef8

#undef DAT_10041fb4
#define DAT_10041fb4 (*(float *)(0x10041fb4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041efc
 */

float recovered_10041efc(float param_1,float *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = param_1;
  if (param_2 != (float *)0x0) {
    fVar1 = 0.0;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar1;
  }
  if (param_1 == 0.0) {
    return pf_bits_float(0x0U);
  }
  fVar2 = 0.0;
  fVar1 = param_1;
  if (param_1 < 0.0) {
    fVar1 = -param_1;
  }
  for (; 1.0 <= fVar1; fVar1 = fVar1 * 0.5) {
    fVar2 = (float)((int)fVar2 + 1);
  }
  for (; (0.0 < fVar1 && (fVar1 < 0.5)); fVar1 = fVar1 + fVar1) {
    fVar2 = (float)((int)fVar2 + -1);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar2;
  }
  if (param_1 < 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

#undef DAT_10041fb4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10041fb8
 */

float recovered_10041fb8(float param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  if ((int)param_2 < 1) {
    if (0x7fffffff < param_2) {
      do {
        param_1 = param_1 * 0.5;
        bVar2 = param_2 != 0xffffffff;
        param_2 = param_2 + 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = param_2 + 1;
    do {
      param_1 = param_1 + param_1;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return param_1;
}


#undef DAT_10042088
#define DAT_10042088 (*(float *)(0x10042088U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042004
 */

float recovered_10042004(float base,float exponent)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  float in_r0;
  uint uVar3;
  float in_r1;
  uint in_fpscr;
  uint uVar4;
  double dVar5;

  uVar4 = (uint)in_r1;
  dVar5 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != (double)in_r1) {
    return pf_bits_float(0x0U);
  }
  if (uVar4 == 0) {
    return 1.0;
  }
  uVar3 = uVar4;
  if ((int)uVar4 < 0) {
    uVar3 = -uVar4;
  }
  fVar2 = 1.0;
  do {
    fVar1 = fVar2 * in_r0;
    in_r0 = in_r0 * in_r0;
    if ((uVar3 & 1) == 0) {
      fVar1 = fVar2;
    }
    uVar3 = uVar3 >> 1;
    fVar2 = fVar1;
  } while (uVar3 != 0);
  if ((int)uVar4 < 0) {
    fVar1 = 1.0 / fVar1;
  }
  return fVar1;
}

#undef DAT_10042088

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004208c
 */

float recovered_1004208c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100420c4
 */

float recovered_100420c4(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  if (dVar3 < dVar5) {
    dVar3 = dVar3 + 1.0;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042110
 */

double recovered_10042110(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  uint in_fpscr;
  int iVar1;

  iVar1 = VectorFloatToSigned(CONCAT44(in_r1,in_r0),3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1 + -1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44((int)((ulonglong)value >> 0x20),iVar1 + -1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042164
 */

float recovered_10042164(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  float in_r0;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)in_r0;
  dVar3 = (double)VectorSignedToFloat((int)in_r0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)in_r0 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  dVar4 = dVar3;
  if (dVar3 < dVar5) {
    dVar4 = dVar3 + 1.0;
  }
  if (in_r0 < 0.0) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


#undef DAT_10042214
#define DAT_10042214 (*(float *)(0x10042214U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100421c0
 */

float recovered_100421c0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float in_r0;
  int iVar2;

  if (0.0 < in_r0) {
    iVar2 = 0x18;
    fVar1 = 1.0;
    if (1.0 <= in_r0) {
      fVar1 = in_r0;
    }
    do {
      iVar2 = iVar2 + -1;
      fVar1 = (fVar1 + in_r0 / fVar1) * 0.5;
    } while (iVar2 != 0);
    return fVar1;
  }
  return pf_bits_float(0x0U);
}

#undef DAT_10042214

#undef DAT_10042350
#define DAT_10042350 (*(double *)(0x10042350U))
#undef DAT_10042358
#define DAT_10042358 (*(float *)(0x10042358U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042218
 */

float recovered_10042218(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  float in_r0;
  int iVar2;
  uint in_fpscr;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;

  if (in_r0 < 0.0) {
    return pf_bits_float(0xff800000U);
  }
  iVar2 = 0;
  dVar4 = (double)in_r0;
  uVar3 = in_fpscr & 0xfffffff | (uint)(in_r0 < 1.5) << 0x1f | (uint)(in_r0 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(in_r0)) {
    do {
      dVar4 = dVar4 * 0.5;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 & 0xfffffff | (uint)(dVar4 < 1.5) << 0x1f | (uint)(dVar4 == 1.5) << 0x1e;
      bVar1 = (byte)(uVar3 >> 0x18);
    } while (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(dVar4));
  }
  for (; uVar3 = uVar3 & 0xfffffff, dVar4 < 0.75; dVar4 = dVar4 + dVar4) {
    iVar2 = iVar2 + -1;
  }
  dVar4 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar4 * dVar4;
  dVar7 = dVar5 * dVar4 * dVar5;
  dVar9 = dVar5 * dVar7;
  dVar12 = dVar5 * dVar9;
  dVar11 = dVar5 * dVar12;
  dVar6 = dVar5 * dVar11;
  dVar8 = dVar5 * dVar6;
  dVar10 = dVar5 * dVar8;
  dVar4 = dVar4 + 0.0 + (dVar4 * dVar5) / 3.0 + dVar7 / 5.0 + dVar9 / 7.0 + dVar12 / 9.0 +
          dVar11 / 11.0 + dVar6 / 13.0 + dVar8 / 15.0 + dVar10 / 17.0 + (dVar5 * dVar10) / 19.0;
  dVar5 = (double)VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return (float)(dVar4 + dVar4 + dVar5 * pf_bits_double(0x3fe62e42fefa39efULL));
}

#undef DAT_10042350
#undef DAT_10042358

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004235c
 */

long recovered_1004235c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10041c98(dVar1 + pf_bits_double(CONCAT44(in_r1,in_r0)));
  return (long)lVar2;
}


#undef DAT_10042428
#define DAT_10042428 (*(double *)(0x10042428U))
#undef DAT_10042430
#define DAT_10042430 (*(double *)(0x10042430U))
#undef DAT_10042438
#define DAT_10042438 (*(double *)(0x10042438U))
#undef DAT_10042440
#define DAT_10042440 (*(double *)(0x10042440U))
#undef DAT_10042448
#define DAT_10042448 (*(double *)(0x10042448U))
#undef DAT_10042450
#define DAT_10042450 (*(double *)(0x10042450U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042390
 */

float recovered_10042390(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;
  double dVar2;

  for (dVar1 = (double)in_r0; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / pf_bits_double(0x405e000000000000ULL) +
                         (dVar2 * dVar2 * dVar2) / pf_bits_double(0xc0b3b00000000000ULL)));
}

#undef DAT_10042428
#undef DAT_10042430
#undef DAT_10042438
#undef DAT_10042440
#undef DAT_10042448
#undef DAT_10042450

#undef DAT_100424e8
#define DAT_100424e8 (*(double *)(0x100424e8U))
#undef DAT_100424f0
#define DAT_100424f0 (*(double *)(0x100424f0U))
#undef DAT_100424f8
#define DAT_100424f8 (*(double *)(0x100424f8U))
#undef DAT_10042500
#define DAT_10042500 (*(double *)(0x10042500U))
#undef DAT_10042508
#define DAT_10042508 (*(double *)(0x10042508U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042458
 */

float recovered_10042458(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  double dVar1;

  for (dVar1 = (double)in_r0; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / pf_bits_double(0xc086800000000000ULL));
}

#undef DAT_100424e8
#undef DAT_100424f0
#undef DAT_100424f8
#undef DAT_10042500
#undef DAT_10042508

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042510
 */

float recovered_10042510(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;

  if (in_r0 < 0.0) {
    in_r0 = -in_r0;
  }
  return in_r0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004252c
 */

long recovered_1004252c(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  for (pbVar2 = (byte *)text; (uVar7 = (uint)*pbVar2, uVar7 - 9 < 5 || (uVar7 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  uVar3 = (uint)((uVar7 - 0x2b & 0xfffffffd) == 0);
  pbVar5 = pbVar2 + uVar3;
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar2[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar2 + uVar3 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar2[uVar3 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar2 + uVar3 + 2;
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
  iVar6 = 0;
  while( true ) {
    bVar1 = *pbVar5;
    iVar4 = (int)(char)bVar1;
    uVar3 = iVar4 - 0x30;
    if (9 < (uVar3 & 0xff)) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) {
        uVar3 = iVar4 - 0x57;
      }
      else {
        uVar3 = 0xffffffff;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          uVar3 = iVar4 - 0x37;
        }
      }
    }
    if ((uint)base <= uVar3) break;
    iVar6 = iVar6 * base + uVar3;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  if (uVar7 == 0x2d) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10042680
 */

ulong recovered_10042680(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;

  for (pbVar5 = (byte *)text; (uVar3 = (uint)*pbVar5, uVar3 - 9 < 5 || (uVar3 == 0x20));
      pbVar5 = pbVar5 + 1) {
  }
  if (uVar3 == 0x2b) {
    pbVar5 = pbVar5 + 1;
  }
  else if (uVar3 == 0x2d) {
    pbVar5 = pbVar5 + 1;
    bVar2 = true;
    goto joined_r0x100426fc;
  }
  bVar2 = false;
joined_r0x100426fc:
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar5[1] | 0x20) == 0x78)) {
      pbVar5 = pbVar5 + 2;
    }
  }
  else if (base == 0) {
    base = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar5[1] | 0x20) == 0x78) {
        pbVar5 = pbVar5 + 2;
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
  uVar6 = 0;
  while( true ) {
    bVar1 = *pbVar5;
    iVar4 = (int)(char)bVar1;
    uVar3 = iVar4 - 0x30;
    if (9 < (uVar3 & 0xff)) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) {
        uVar3 = iVar4 - 0x57;
      }
      else {
        uVar3 = 0xffffffff;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          uVar3 = iVar4 - 0x37;
        }
      }
    }
    if ((uint)base <= uVar3) break;
    uVar6 = uVar6 * base + uVar3;
    text = (char *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 1;
  }
  if (endptr != (char **)0x0) {
    *endptr = text;
  }
  if (bVar2) {
    uVar6 = -uVar6;
  }
  return uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100427e0
 */

double recovered_100427e0(char *text,char **endptr,int in_s0,undefined4 in_s1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;

  for (pbVar2 = (byte *)text; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  pbVar2 = pbVar2 + ((uVar1 - 0x2b & 0xfffffffd) == 0);
  uVar1 = (uint)*pbVar2;
  uVar7 = uVar1 - 0x30;
  uVar4 = uVar7;
  while (uVar4 < 10) {
    in_s0 = uVar1 - 0x30;
    pbVar2 = pbVar2 + 1;
    uVar1 = (uint)*pbVar2;
    uVar4 = uVar1 - 0x30;
    VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
  }
  if (uVar1 == 0x2e) {
    uVar1 = (uint)pbVar2[1];
    pbVar5 = pbVar2 + 1;
    if (9 < uVar1 - 0x30) goto LAB_100428c0;
    pbVar2 = pbVar2 + 2;
    do {
      pbVar5 = pbVar2;
      in_s0 = uVar1 - 0x30;
      uVar1 = (uint)*pbVar5;
      VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
      pbVar2 = pbVar5 + 1;
    } while (uVar1 - 0x30 < 10);
  }
  else {
    pbVar5 = pbVar2;
LAB_100428c0:
    if (9 < uVar7) {
      if (endptr != (char **)0x0) {
        *endptr = text;
        return pf_bits_double(CONCAT44(in_s1,in_s0));
      }
      goto LAB_100429ac;
    }
  }
  if ((uVar1 | 0x20) == 0x65) {
    iVar6 = 1;
    pbVar2 = pbVar5 + 1;
    if (*pbVar2 == 0x2b) {
      pbVar2 = pbVar5 + 2;
    }
    else if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar5 + 2;
      iVar6 = -1;
    }
    uVar1 = *pbVar2 - 0x30U;
    if (uVar1 < 10) {
      iVar3 = 0;
      uVar4 = (uint)*pbVar2;
      do {
        pbVar2 = pbVar2 + 1;
        iVar3 = uVar4 + iVar3 * 10 + -0x30;
        uVar4 = (uint)*pbVar2;
      } while (*pbVar2 - 0x30U < 10);
      if (uVar1 < 10) {
        uVar1 = iVar3 * iVar6;
        if ((int)uVar1 < 1) {
          if (0x7fffffff < uVar1) {
            do {
              bVar8 = uVar1 != 0xffffffff;
              uVar1 = uVar1 + 1;
            } while (bVar8);
          }
        }
        else {
          uVar1 = uVar1 + 1;
          do {
            uVar1 = uVar1 - 1;
          } while (1 < uVar1);
        }
        pbVar5 = pbVar2;
      }
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)pbVar5;
  }
LAB_100429ac:
  return pf_bits_double(CONCAT44(in_s1,in_s0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100429b4
 */

float recovered_100429b4(char *text,char **endptr)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined8 in_d0;

  recovered_100427e0(text,endptr,(int)in_d0,(int)((ulonglong)in_d0 >> 0x20));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_100429d0(char *buffer,unsigned long size,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,size,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10043634(char *buffer,unsigned long size,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,size,format,args);__builtin_va_end(args);return result;}


#undef DAT_1005456c
#define DAT_1005456c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2864U)))
#undef DAT_10054570
#define DAT_10054570 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2868U)))
#undef DAT_68000000
#define DAT_68000000 (*(uint8_t *)(0x68000000U))
#undef DAT_68000004
#define DAT_68000004 (*(uint8_t *)(0x68000004U))
#undef DAT_68000008
#define DAT_68000008 (*(uint8_t *)(0x68000008U))
#undef DAT_6800000c
#define DAT_6800000c (*(uint8_t *)(0x6800000cU))
#undef _DAT_68000000
#define _DAT_68000000 (*(int *)(0x68000000U))
#undef _DAT_68000004
#define _DAT_68000004 (*(uint32_t *)(0x68000004U))
#undef _DAT_68000008
#define _DAT_68000008 (*(int *)(0x68000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043664
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10043664(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint8_t *pcVar4;
  int *unaff_r9;
  int iVar5;
  bool bVar6;
  bool bVar7;

  pcVar4 = (uint8_t *)((int)param_1 + (int)param_2);
  if (CARRY4((uint)param_1,(uint)param_2)) {
    pcVar4 = (uint8_t *)0xffffffff;
  }
  if (param_1 < &DAT_68000000) {
    bVar7 = param_1 <= pcVar4;
    bVar6 = pcVar4 == (uint8_t *)param_1;
    if (bVar7 && !bVar6) {
      bVar7 = (uint8_t *)0x5fffffff < pcVar4;
      bVar6 = pcVar4 == ((uint8_t *)(uintptr_t)0x60000000U);
    }
    if (bVar7 && !bVar6) {
      if (param_1 < ((uint8_t *)(uintptr_t)0x60000000U)) {
        bVar6 = param_3 == (int *)0x0;
        if (!bVar6) {
          unaff_r9 = (int *)((int)param_1 + 0xfU & 0x7ffffff0);
          param_2 = (int *)((int)unaff_r9 - (int)param_1);
          param_1 = (int *)(0x60000000 - (int)param_1);
        }
        if (((bVar6 || param_2 <= param_1) && (!bVar6 && param_1 != param_2)) &&
           (uVar1 = (int)param_1 - (int)param_2 & 0xfffffff0, 0x20 < uVar1)) {
          unaff_r9[1] = 0;
          iVar5 = *param_3;
          bVar6 = DAT_1005456c != 0;
          piVar3 = &DAT_1005456c;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = (int *)DAT_10054570;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_10054570 = (uint8_t *)unaff_r9;
          }
        }
      }
      if (pcVar4 < (uint8_t *)0x68000001) {
        return;
      }
      if (param_3 == (int *)0x0) {
        return;
      }
      if (((uint)pcVar4 & 0xfffffff0) + 0x98000000 < 0x21) {
        return;
      }
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)pcVar4 & 0xfffffff0) + 0x97fffff0;
      _DAT_68000008 = *param_3;
      puVar2 = &DAT_1005456c;
      if (DAT_1005456c != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      pcVar4 = (uint8_t *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = (int *)DAT_10054570;
      goto LAB_100437b4;
    }
  }
  if (param_3 != (int *)0x0) {
    pcVar4 = (uint8_t *)((int)param_1 + 0xfU & 0xfffffff0);
    param_1 = (int *)(pcVar4 + -(int)param_1);
  }
  if ((param_3 == (int *)0x0 || param_2 <= param_1) ||
     (uVar1 = (int)param_2 - (int)param_1 & 0xfffffff0, uVar1 < 0x21)) {
    return;
  }
  *(undefined4 *)(pcVar4 + 4) = 0;
  iVar5 = *param_3;
  bVar6 = DAT_1005456c != 0;
  puVar2 = &DAT_1005456c;
  *(int *)(pcVar4 + 8) = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = pcVar4;
  *param_3 = (int)pcVar4;
  *(uint *)pcVar4 = uVar1 - 0x10;
  piVar3 = (int *)DAT_10054570;
  pcVar4[0xc] = (uint8_t)0x1;
LAB_100437b4:
  if (piVar3 == (int *)0x0) {
    DAT_10054570 = pcVar4;
    return;
  }
  return;
}

#undef DAT_1005456c
#undef DAT_10054570
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043850
 */

void recovered_10043850(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;

  if ((param_1 != (int *)0x0) && (param_1 < param_2)) {
    if (*param_1 != 0) {
      return;
    }
    piVar2 = param_1 + 1;
    if (param_1 + 1 < param_2) {
      piVar2 = param_2;
    }
    if ((int)piVar2 + ~(uint)param_1 < 0xc) {
      piVar2 = param_1;
    }
    else {
      uVar5 = ((int)piVar2 + ~(uint)param_1 >> 2) + 1;
      PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
      PF_PART8(auVar1, 0) = 0x100000001;
      auVar1 = auVar1 << 0x40 | auVar1;
      uVar6 = uVar5 & 0xfffffffc;
      piVar2 = param_1 + uVar6;
      uVar3 = uVar6;
      do {
        *param_1 = PF_PART4(auVar1, 0);
        param_1[1] = PF_PART4(auVar1, 4);
        param_1[2] = PF_PART4(auVar1, 8);
        param_1[3] = PF_PART4(auVar1, 12);
        param_1 = param_1 + 4;
        uVar3 = uVar3 - 4;
      } while (uVar3 != 0);
      if (uVar5 == uVar6) {
        return;
      }
    }
    do {
      piVar4 = piVar2 + 1;
      *piVar2 = 1;
      piVar2 = piVar4;
    } while (piVar4 < param_2);
  }
  return;
}


#undef DAT_100555b8
#define DAT_100555b8 (*(int *)(((uintptr_t)pf_module_state + 0x38b0U)))
#undef DAT_100555bc
#define DAT_100555bc (*(uint *)(((uintptr_t)pf_module_state + 0x38b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100438d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100438d8(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  if (DAT_100555b8 != 0) {
    return;
  }
  if (DAT_100555bc + 1 >> 0x10 == 0) {
    DAT_100555bc = DAT_100555bc + 1;
    return;
  }
  DAT_100555bc = 0;
  DAT_100555b8 = 1;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
  }
  DAT_100555b8 = 0;
  return;
}

#undef DAT_100555b8
#undef DAT_100555bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

#undef DAT_100555b8
#define DAT_100555b8 (*(int *)(((uintptr_t)pf_module_state + 0x38b0U)))
#undef DAT_100555bc
#define DAT_100555bc (*(uint *)(((uintptr_t)pf_module_state + 0x38b4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100439b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100439b8(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_100555b8 != 0) {
    return;
  }
  if (DAT_100555bc + 1 >> 0x10 == 0) {
    DAT_100555bc = DAT_100555bc + 1;
    return;
  }
  DAT_100555bc = 0;
  DAT_100555b8 = 1;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
  }
  DAT_100555b8 = 0;
  return;
}

#undef DAT_100555b8
#undef DAT_100555bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a84
 */

void recovered_10043a84(void *function,void *caller)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a88
 */

ulonglong recovered_10043a88(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10041d58((double)x);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043a98
 */

longlong recovered_10043a98(float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10041c98((double)x);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043aa8
 */

float recovered_10043aa8(ulonglong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041de0(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10043ac4
 */

float recovered_10043ac4(longlong x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041e28(x);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043ae0(uint8_t *pointer,...){pf_snow_atomic_enter();uint8_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10043b24(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043b68(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10043bb4(uint8_t *pointer,uint8_t *expected,uint8_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043c24(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043c74(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043cc4(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043d14(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043d64(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint8_t recovered_10043db4(uint8_t *pointer,uint8_t value,...){pf_snow_atomic_enter();uint8_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10043e08(uint16_t *pointer,...){pf_snow_atomic_enter();uint16_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10043e4c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10043e90(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10043edc(uint16_t *pointer,uint16_t *expected,uint16_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10043f4c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10043f9c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_10043fec(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1004403c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_1004408c(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint16_t recovered_100440dc(uint16_t *pointer,uint16_t value,...){pf_snow_atomic_enter();uint16_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10044130(uint32_t *pointer,...){pf_snow_atomic_enter();uint32_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10044174(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_100441b8(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044204(uint32_t *pointer,uint32_t *expected,uint32_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10044274(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_100442c4(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10044314(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10044364(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_100443b4(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint32_t recovered_10044404(uint32_t *pointer,uint32_t value,...){pf_snow_atomic_enter();uint32_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044458(uint64_t *pointer,...){pf_snow_atomic_enter();uint64_t old=*pointer;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_100444a4(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();*pointer=value;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100444f4(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=value;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044554(uint64_t *pointer,uint64_t *expected,uint64_t value,...){pf_snow_atomic_enter();uint64_t result=0;if(expected){if(*pointer==*expected){*pointer=value;result=1;}else *expected=*pointer;}pf_snow_atomic_leave();return result;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100445f0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old + value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044658(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old - value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100446c0(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044728(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old | value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044790(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=(old ^ value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_100447f8(uint64_t *pointer,uint64_t value,...){pf_snow_atomic_enter();uint64_t old=*pointer;*pointer=~(old & value);pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
bool recovered_10044868(uint8_t *pointer,...){pf_snow_atomic_enter();bool old=*pointer!=0;*pointer=1;pf_snow_atomic_leave();return old;}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_100448c0(uint8_t *pointer,...){pf_snow_atomic_enter();*pointer=0;pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10044904(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)value[i]=pointer[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_10044970(size_t size,uint8_t *pointer,uint8_t *value,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++)pointer[i]=value[i];pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
void recovered_100449e0(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *out,...){pf_snow_atomic_enter();for(size_t i=0;i<size;i++){uint8_t old=pointer[i];pointer[i]=value[i];out[i]=old;}pf_snow_atomic_leave();}


/* Recovered serialized atomic operations; Pooka's Free Software License. */
uint64_t recovered_10044a7c(size_t size,uint8_t *pointer,uint8_t *value,uint8_t *desired,...){pf_snow_atomic_enter();uint64_t result=value!=0;if(value){for(size_t i=0;i<size;i++)if(pointer[i]!=value[i])result=0;for(size_t i=0;i<size;i++){if(result)pointer[i]=desired[i];else value[i]=pointer[i];}}pf_snow_atomic_leave();return result;}


#undef DAT_10054680
#define DAT_10054680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2978U)))
#undef DAT_10054a9e
#define DAT_10054a9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d96U)))
#undef DAT_10055098
#define DAT_10055098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3390U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b38
 */

void recovered_10044b38(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  recovered_10040088(&DAT_10054680,param_1,0xa18);
  DAT_10055098 = 1;
  recovered_10044b88(&DAT_10054a9e);
  return;
}

#undef DAT_10054680
#undef DAT_10054a9e
#undef DAT_10055098

#undef DAT_10054578
#define DAT_10054578 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2870U)))
#undef DAT_100555c4
#define DAT_100555c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044b88
 */

void recovered_10044b88(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  ulong count;
  uint uVar3;
  uint uVar4;

  uVar4 = 0;
  recovered_10040818(&DAT_100555c4,0,0x800);
  recovered_10040818(&DAT_10054578,0,0x104);
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (cVar1 != '\0') {
      uVar2 = 0;
      do {
        count = 0;
        while (cVar1 != '\0' && cVar1 != '\n') {
          cVar1 = param_1[count + 1];
          count = count + 1;
        }
        if ((count != 0) && (uVar3 = uVar2 + count + 1, uVar3 >> 0xb == 0)) {
          (&DAT_10054578)[uVar4] = &DAT_100555c4 + uVar2;
          recovered_10040088(&DAT_100555c4 + uVar2,param_1,count);
          cVar1 = param_1[count];
          uVar4 = uVar4 + 1;
          uVar2 = uVar3;
        }
        if (cVar1 == '\n') {
          param_1 = param_1 + 1;
        }
        param_1 = param_1 + count;
        cVar1 = *param_1;
      } while ((cVar1 != '\0') && (uVar4 < 0x40));
    }
    (&DAT_10054578)[uVar4] = 0;
  }
  return;
}

#undef DAT_10054578
#undef DAT_100555c4

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_308 (*(char (*)[246])(frame + 40))
#define acStack_212 (*(char (*)[241])(frame + 286))
#define acStack_121 (*(char (*)[241])(frame + 527))
#define local_314 (*(uint *)(frame + 28))
#define local_30c (*(undefined4 *)(frame + 36))
#define local_30 (*(void * *)(frame + 768))
#define local_2c (*(uint *)(frame + 772))
#define local_28 (*(undefined4 *)(frame + 776))
#define pvStack_318 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044c70
 */

void * recovered_10044c70(char *path,char *mode)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *destination;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint size;

  puVar4 = recovered_10044f7c();
  if (mode != (char *)0x0) {
    pcVar8 = mode;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != 'w' && cVar1 != '\0');
    pcVar8 = mode;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != 'a' && cVar2 != '\0');
    do {
      cVar3 = *mode;
      mode = mode + 1;
    } while (cVar3 != '+' && cVar3 != '\0');
    if (path != (char *)0x0 && puVar4 != (undefined *)0x0) {
      iVar5 = recovered_10045234((int)puVar4,path,acStack_212);
      if (iVar5 == 0) {
        uVar9 = 0x3f;
        goto LAB_10044ce8;
      }
      destination = recovered_1003ff90(0x124);
      if (destination == (undefined4 *)0x0) {
        uVar9 = 0xc;
        goto LAB_10044ce8;
      }
      recovered_10040818(destination,0,0x124);
      destination[5] = 0xffffffff;
      destination[3] = 0xffffffff;
      destination[1] = 4;
      *destination = 0x54474c46;
      uVar6 = 3;
      if (cVar3 == '\0' && cVar2 == '\0') {
        uVar6 = 1;
      }
      if (cVar1 != '\0') {
        uVar6 = 3;
      }
      if (cVar2 != '\0') {
        uVar6 = uVar6 | 4;
      }
      destination[2] = uVar6;
      pf_varargs_10043634__4_((char *)(destination + 6),0xf1,&DAT_10051d2c,(uint)acStack_212);
      if ((cVar1 == '\0') || (cVar3 != '\0' || cVar2 != '\0')) {
        recovered_10040818(&pvStack_318,0,0x104);
        iVar5 = recovered_10045234((int)puVar4,acStack_212,acStack_121);
        if (iVar5 != 0) {
          recovered_10040818(&local_30,0,0xc);
          iVar5 = recovered_10048aec((int)puVar4,acStack_121,(int)&local_30);
          pvVar7 = (void *)0x0;
          if (iVar5 != 0) {
            pvVar7 = local_30;
          }
          if (iVar5 != 0 && pvVar7 != (void *)0x0) {
            local_314 = local_2c;
            local_30c = local_28;
            pvStack_318 = pvVar7;
            pf_varargs_10043634__4_(acStack_308,0xf1,&DAT_10051d2c,(uint)acStack_121);
            destination[0x43] = pvStack_318;
            destination[0x44] = local_314;
            if ((cVar2 != '\0' || cVar3 != '\0') && local_314 != 0) {
              uVar6 = destination[0x47];
              if (uVar6 < local_314) {
                if (uVar6 == 0) {
                  uVar6 = 0x100;
                }
                do {
                  size = uVar6;
                  uVar6 = size << 1;
                } while (size < local_314);
                pvVar7 = recovered_10040034((void *)destination[0x45],size);
                if (pvVar7 == (void *)0x0) {
                  uVar9 = 0xc;
                  *(undefined1 *)((int)destination + 0x11) = 1;
                  goto LAB_10044e2c;
                }
                destination[0x47] = size;
                destination[0x45] = pvVar7;
              }
              else {
                pvVar7 = (void *)destination[0x45];
              }
              recovered_10040088(pvVar7,pvStack_318,local_314);
              uVar6 = 0;
              if (cVar2 != '\0') {
                uVar6 = local_314;
              }
              destination[0x48] = uVar6;
              destination[0x46] = local_314;
            }
            goto LAB_10044f28;
          }
        }
        if ((cVar2 == '\0' && cVar1 == '\0') && cVar3 == '\0') {
          uVar9 = 2;
LAB_10044e2c:
          recovered_1003ffe4(destination);
          *DAT_10054038 = uVar9;
          return (void *)0x0;
        }
      }
LAB_10044f28:
      iVar5 = recovered_1004553c((int)destination);
      if (-1 < iVar5) {
        return destination;
      }
      recovered_1003ffe4((void *)destination[0x45]);
      recovered_1003ffe4(destination);
      uVar9 = 0x18;
      goto LAB_10044ce8;
    }
  }
  uVar9 = 0x16;
LAB_10044ce8:
  *DAT_10054038 = uVar9;
  return (void *)0x0;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef acStack_308
#undef acStack_212
#undef acStack_121
#undef local_314
#undef local_30c
#undef local_30
#undef local_2c
#undef local_28
#undef pvStack_318

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054680
#define DAT_10054680 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2978U)))
#undef DAT_1005478d
#define DAT_1005478d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a85U)))
#undef DAT_10054a9e
#define DAT_10054a9e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d96U)))
#undef DAT_10054ca0
#define DAT_10054ca0 (*(uint *)(((uintptr_t)pf_module_state + 0x2f98U)))
#undef DAT_10054ca4
#define DAT_10054ca4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2f9cU)))
#undef DAT_10054da4
#define DAT_10054da4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x309cU)))
#undef DAT_10054fa4
#define DAT_10054fa4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x329cU)))
#undef DAT_10055098
#define DAT_10055098 (*(char *)(((uintptr_t)pf_module_state + 0x3390U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10044f7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * recovered_10044f7c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;

  if (DAT_10055098 == '\0') {
    puVar5 = (undefined *)0x0;
    recovered_10040818(&DAT_10054680,0,0xa18);
    recovered_10040818(&DAT_10054680,0,0xa18);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x147 < _DAT_40010808)) &&
       ((_DAT_40010944 != (code *)0x0 && (iVar1 = (*_DAT_40010944)(&DAT_10054680), iVar1 != 0)))) {
      pbVar6 = &DAT_10054da4;
      pf_varargs_10043634__4_((char *)&DAT_10054da4,0x200,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x2b96U));
      uVar2 = (uint)DAT_10054da4;
      if (uVar2 != 0) {
        uVar4 = 0;
LAB_10045090:
        pbVar7 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        if (uVar2 < 0x28) {
LAB_1004509c:
          pbVar6 = pbVar7;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uintptr_t)(uVar2)) {
          case 0:
            DAT_10054ca0 = uVar4;
            goto LAB_100451dc;
          default:
            break;
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            goto switchD_100450a4_caseD_9;
          case 0x22:
          case 0x27:
            goto switchD_100450a4_caseD_22;
          }
        }
switchD_100450a4_caseD_1:
        pbVar7 = pbVar6 + -1;
        uVar2 = 0;
switchD_100450a4_caseD_22:
        (&DAT_10054ca4)[uVar4] = pbVar7;
        DAT_10054ca0 = uVar4 + 1;
        uVar3 = (uint)*pbVar7;
        if (uVar3 != 0) {
          do {
            pbVar6 = pbVar7 + 1;
            if (uVar2 == 0) {
              if ((uVar3 - 9 < 0x18) && ((1 << (uVar3 - 9 & 0xff) & 0x800013U) != 0))
              goto LAB_100451b0;
            }
            else if (uVar2 == (int)(char)uVar3) goto LAB_100451b0;
            uVar3 = (uint)*pbVar6;
            pbVar7 = pbVar6;
            if (uVar3 == 0) break;
          } while( true );
        }
        goto LAB_100451dc;
      }
      DAT_10054ca0 = 0;
LAB_100451dc:
      puVar5 = &DAT_1005478d;
      if (DAT_1005478d == '\0') {
        puVar5 = &DAT_10051d2f;
      }
      pf_varargs_10043634__4_(&DAT_10054fa4,0xf1,&DAT_10051d2c,(uint)puVar5);
      DAT_10055098 = '\x01';
      recovered_10044b88(&DAT_10054a9e);
      puVar5 = &DAT_10054680;
    }
  }
  else {
    puVar5 = &DAT_10054680;
  }
  return puVar5;
switchD_100450a4_caseD_9:
  pbVar6 = pbVar7 + 1;
  uVar2 = (uint)*pbVar7;
  pbVar7 = pbVar6;
  if (0x27 < uVar2) goto switchD_100450a4_caseD_1;
  goto LAB_1004509c;
LAB_100451b0:
  uVar2 = (uint)*pbVar6;
  *pbVar7 = 0;
  if ((uVar2 == 0) || (bVar8 = 0x3e < uVar4, uVar4 = DAT_10054ca0, bVar8)) goto LAB_100451dc;
  goto LAB_10045090;
}

#undef DAT_10051d2c
#undef DAT_10051d2f
#undef DAT_10054680
#undef DAT_1005478d
#undef DAT_10054a9e
#undef DAT_10054ca0
#undef DAT_10054ca4
#undef DAT_10054da4
#undef DAT_10054fa4
#undef DAT_10055098
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10052616
#define DAT_10052616 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x90eU)))
#undef DAT_100537f1
#define DAT_100537f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae9U)))
#undef DAT_100537fb
#define DAT_100537fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af3U)))
#undef str_100537f5
#define str_100537f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aedU)))
#define in_stack_fffffcf4 (*(char * *)(frame + 20))
#define acStack_115 (*(char (*)[245])(frame + 523))
#define local_308 (*(undefined4 (*)[64])(frame + 24))
#define local_206 (*(char *)(frame + 282))
#define local_205 (*(char (*)[240])(frame + 283))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045234
 */

undefined4 recovered_10045234(int param_1,char *param_2,char *param_3)

{
  unsigned char frame[832] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;

  if (param_3 == (char *)0x0) {
    return 0;
  }
  cVar5 = '\0';
  *param_3 = '\0';
  if (param_2 != (char *)0x0) {
    cVar5 = *param_2;
  }
  pcVar7 = &DAT_10052616;
  if (param_2 != (char *)0x0 && cVar5 != '\0') {
    if (cVar5 != '\\' && cVar5 != '/') {
      pcVar7 = param_2;
      goto LAB_10045278;
    }
    pcVar6 = &DAT_10051d2c;
  }
  else {
LAB_10045278:
    param_2 = (char *)(param_1 + 0x924);
    if (*param_2 == '\0') {
      param_2 = &DAT_10051d2f;
    }
    iVar1 = recovered_10041140(param_2,&DAT_10051d2f);
    if (iVar1 == 0) {
      pcVar6 = &DAT_100537f1;
      param_2 = pcVar7;
    }
    else {
      pcVar6 = str_100537f5;
      in_stack_fffffcf4 = pcVar7;
    }
  }
  pf_varargs_10043634__4__4_(acStack_115,0xf1,pcVar6,(uint)param_2,(uint)in_stack_fffffcf4);
  pcVar7 = &local_206;
  pf_varargs_10043634__4_(pcVar7,0xf1,&DAT_10051d2c,(uint)acStack_115);
  if (local_206 == '\0') {
    uVar10 = 0;
  }
  else {
    pcVar7 = &local_206;
    uVar10 = 0;
    while( true ) {
      while (local_206 == '/' || local_206 == '\\') {
        pcVar7 = pcVar7 + 1;
        local_206 = *pcVar7;
      }
      pcVar6 = pcVar7;
      if (local_206 == '\0') break;
      do {
        if (local_206 == '/' || local_206 == '\\') {
          iVar1 = 1;
          goto LAB_100453a8;
        }
        pcVar6 = pcVar6 + 1;
        local_206 = *pcVar6;
      } while (local_206 != '\0');
      iVar1 = 0;
LAB_100453a8:
      *pcVar6 = '\0';
      iVar2 = recovered_10041140(pcVar7,&DAT_10052616);
      if (iVar2 != 0) {
        iVar2 = recovered_10041140(pcVar7,&DAT_100537fb);
        if (iVar2 == 0) {
          bVar11 = uVar10 == 0;
          uVar10 = uVar10 - 1;
          if (bVar11) {
            uVar10 = 0;
          }
        }
        else {
          local_308[uVar10] = pcVar7;
          uVar10 = uVar10 + 1;
        }
      }
      pcVar7 = pcVar6 + iVar1;
      if (iVar1 == 0) break;
      pcVar7 = pcVar6 + iVar1;
      local_206 = *pcVar7;
      if ((local_206 == '\0') || (0x3f < uVar10)) break;
    }
  }
  if (uVar10 == 0) {
    uVar9 = 1;
LAB_1004550c:
    pf_varargs_10043634___(param_3,0xf1,&DAT_10051d2f);
  }
  else {
    if (uVar10 == 0x40) {
      for (; cVar5 = *pcVar7, cVar5 == '/' || cVar5 == '\\'; pcVar7 = pcVar7 + 1) {
      }
      if (cVar5 != '\0') {
        uVar9 = 0;
        goto LAB_1004550c;
      }
      *param_3 = '\0';
    }
    else {
      *param_3 = '\0';
    }
    puVar8 = local_308;
    do {
      uVar3 = recovered_10041118(param_3);
      pcVar7 = (char *)*puVar8;
      uVar4 = recovered_10041118(pcVar7);
      if (0xf1 < uVar3 + uVar4 + 2) {
        uVar9 = 0;
        goto LAB_1004550c;
      }
      param_3[uVar3] = '/';
      pf_varargs_10043634__4_(param_3 + uVar3 + 1,0xf0 - uVar3,&DAT_10051d2c,(uint)pcVar7);
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar9 = 1;
  }
  return uVar9;
}

#undef DAT_10051d2c
#undef DAT_10051d2f
#undef DAT_10052616
#undef DAT_100537f1
#undef DAT_100537fb
#undef str_100537f5
#undef in_stack_fffffcf4
#undef acStack_115
#undef local_308
#undef local_206
#undef local_205

#undef DAT_100544ec
#define DAT_100544ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27e4U)))
#undef DAT_100544f0
#define DAT_100544f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27e8U)))
#undef DAT_100544f4
#define DAT_100544f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27ecU)))
#undef DAT_100544f8
#define DAT_100544f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27f0U)))
#undef DAT_100544fc
#define DAT_100544fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27f4U)))
#undef DAT_10054500
#define DAT_10054500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27f8U)))
#undef DAT_10054504
#define DAT_10054504 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27fcU)))
#undef DAT_10054508
#define DAT_10054508 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2800U)))
#undef DAT_1005450c
#define DAT_1005450c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2804U)))
#undef DAT_10054510
#define DAT_10054510 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2808U)))
#undef DAT_10054514
#define DAT_10054514 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x280cU)))
#undef DAT_10054518
#define DAT_10054518 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2810U)))
#undef DAT_1005451c
#define DAT_1005451c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2814U)))
#undef DAT_10054520
#define DAT_10054520 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2818U)))
#undef DAT_10054524
#define DAT_10054524 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x281cU)))
#undef DAT_10054528
#define DAT_10054528 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2820U)))
#undef DAT_1005452c
#define DAT_1005452c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2824U)))
#undef DAT_10054530
#define DAT_10054530 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2828U)))
#undef DAT_10054534
#define DAT_10054534 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x282cU)))
#undef DAT_10054538
#define DAT_10054538 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2830U)))
#undef DAT_1005453c
#define DAT_1005453c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2834U)))
#undef DAT_10054540
#define DAT_10054540 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2838U)))
#undef DAT_10054544
#define DAT_10054544 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x283cU)))
#undef DAT_10054548
#define DAT_10054548 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2840U)))
#undef DAT_1005454c
#define DAT_1005454c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2844U)))
#undef DAT_10054550
#define DAT_10054550 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2848U)))
#undef DAT_10054554
#define DAT_10054554 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x284cU)))
#undef DAT_10054558
#define DAT_10054558 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2850U)))
#undef DAT_1005455c
#define DAT_1005455c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004553c
 */

undefined4 recovered_1004553c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *piVar2;

  piVar2 = &DAT_100544ec;
  if (DAT_100544ec == 0) {
    uVar1 = 3;
  }
  else {
    piVar2 = &DAT_100544f0;
    if (DAT_100544f0 == 0) {
      uVar1 = 4;
    }
    else {
      piVar2 = &DAT_100544f4;
      if (DAT_100544f4 == 0) {
        uVar1 = 5;
      }
      else {
        piVar2 = &DAT_100544f8;
        if (DAT_100544f8 == 0) {
          uVar1 = 6;
        }
        else {
          piVar2 = &DAT_100544fc;
          if (DAT_100544fc == 0) {
            uVar1 = 7;
          }
          else {
            piVar2 = &DAT_10054500;
            if (DAT_10054500 == 0) {
              uVar1 = 8;
            }
            else {
              piVar2 = &DAT_10054504;
              if (DAT_10054504 == 0) {
                uVar1 = 9;
              }
              else {
                piVar2 = &DAT_10054508;
                if (DAT_10054508 == 0) {
                  uVar1 = 10;
                }
                else {
                  piVar2 = &DAT_1005450c;
                  if (DAT_1005450c == 0) {
                    uVar1 = 0xb;
                  }
                  else {
                    piVar2 = &DAT_10054510;
                    if (DAT_10054510 == 0) {
                      uVar1 = 0xc;
                    }
                    else {
                      piVar2 = &DAT_10054514;
                      if (DAT_10054514 == 0) {
                        uVar1 = 0xd;
                      }
                      else {
                        piVar2 = &DAT_10054518;
                        if (DAT_10054518 == 0) {
                          uVar1 = 0xe;
                        }
                        else {
                          piVar2 = &DAT_1005451c;
                          if (DAT_1005451c == 0) {
                            uVar1 = 0xf;
                          }
                          else {
                            piVar2 = &DAT_10054520;
                            if (DAT_10054520 == 0) {
                              uVar1 = 0x10;
                            }
                            else {
                              piVar2 = &DAT_10054524;
                              if (DAT_10054524 == 0) {
                                uVar1 = 0x11;
                              }
                              else {
                                piVar2 = &DAT_10054528;
                                if (DAT_10054528 == 0) {
                                  uVar1 = 0x12;
                                }
                                else {
                                  piVar2 = &DAT_1005452c;
                                  if (DAT_1005452c == 0) {
                                    uVar1 = 0x13;
                                  }
                                  else {
                                    piVar2 = &DAT_10054530;
                                    if (DAT_10054530 == 0) {
                                      uVar1 = 0x14;
                                    }
                                    else {
                                      piVar2 = &DAT_10054534;
                                      if (DAT_10054534 == 0) {
                                        uVar1 = 0x15;
                                      }
                                      else {
                                        piVar2 = &DAT_10054538;
                                        if (DAT_10054538 == 0) {
                                          uVar1 = 0x16;
                                        }
                                        else {
                                          piVar2 = &DAT_1005453c;
                                          if (DAT_1005453c == 0) {
                                            uVar1 = 0x17;
                                          }
                                          else {
                                            piVar2 = &DAT_10054540;
                                            if (DAT_10054540 == 0) {
                                              uVar1 = 0x18;
                                            }
                                            else {
                                              piVar2 = &DAT_10054544;
                                              if (DAT_10054544 == 0) {
                                                uVar1 = 0x19;
                                              }
                                              else {
                                                piVar2 = &DAT_10054548;
                                                if (DAT_10054548 == 0) {
                                                  uVar1 = 0x1a;
                                                }
                                                else {
                                                  piVar2 = &DAT_1005454c;
                                                  if (DAT_1005454c == 0) {
                                                    uVar1 = 0x1b;
                                                  }
                                                  else {
                                                    piVar2 = &DAT_10054550;
                                                    if (DAT_10054550 == 0) {
                                                      uVar1 = 0x1c;
                                                    }
                                                    else {
                                                      piVar2 = &DAT_10054554;
                                                      if (DAT_10054554 == 0) {
                                                        uVar1 = 0x1d;
                                                      }
                                                      else {
                                                        piVar2 = &DAT_10054558;
                                                        if (DAT_10054558 == 0) {
                                                          uVar1 = 0x1e;
                                                        }
                                                        else {
                                                          if (DAT_1005455c != 0) {
                                                            return 0xffffffff;
                                                          }
                                                          uVar1 = 0x1f;
                                                          piVar2 = &DAT_1005455c;
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
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *piVar2 = param_1;
  return uVar1;
}

#undef DAT_100544ec
#undef DAT_100544f0
#undef DAT_100544f4
#undef DAT_100544f8
#undef DAT_100544fc
#undef DAT_10054500
#undef DAT_10054504
#undef DAT_10054508
#undef DAT_1005450c
#undef DAT_10054510
#undef DAT_10054514
#undef DAT_10054518
#undef DAT_1005451c
#undef DAT_10054520
#undef DAT_10054524
#undef DAT_10054528
#undef DAT_1005452c
#undef DAT_10054530
#undef DAT_10054534
#undef DAT_10054538
#undef DAT_1005453c
#undef DAT_10054540
#undef DAT_10054544
#undef DAT_10054548
#undef DAT_1005454c
#undef DAT_10054550
#undef DAT_10054554
#undef DAT_10054558
#undef DAT_1005455c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005427c
#define DAT_1005427c (*(void * *)(((uintptr_t)pf_module_state + 0x2574U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045810
 */

void * recovered_10045810(char *path,char *mode,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  void *pvVar3;

  if (stream != (void *)0x0) {
    if (*(int *)stream == 0x54474c46) {
      puVar1 = recovered_10044f7c();
      if (*(int *)stream == 0x54474c46) {
        if ((2 < *(int *)((int)stream + 4) - 1U) && (*(char *)((int)stream + 0x12) == '\x01')) {
          if ((puVar1 == (undefined *)0x0) ||
             (iVar2 = recovered_10045c8c((int)puVar1,(char *)((int)stream + 0x18),
                                         *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118)
                                        ), iVar2 == 0)) {
            *(undefined1 *)((int)stream + 0x11) = 1;
            *DAT_10054038 = 5;
          }
          else {
            *(undefined1 *)((int)stream + 0x12) = 0;
          }
        }
      }
      else {
        *DAT_10054038 = 9;
      }
      if (*(uint *)((int)stream + 0xc) < 0x20) {
        (&DAT_100544e0)[*(uint *)((int)stream + 0xc)] = 0;
      }
      if (((DAT_1005427c != stream) && (DAT_100543a4 != stream)) && (DAT_100544cc != stream)) {
        recovered_1003ffe4(*(void **)((int)stream + 0x114));
        recovered_10040818(stream,0,0x124);
        recovered_1003ffe4(stream);
      }
    }
    else {
      *DAT_10054038 = 9;
    }
  }
  pvVar3 = recovered_10044c70(path,mode);
  return pvVar3;
}

#undef DAT_10054038
#undef DAT_1005427c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005427c
#define DAT_1005427c (*(void * *)(((uintptr_t)pf_module_state + 0x2574U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004599c
 */

int recovered_1004599c(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  iVar1 = recovered_10045ba8(stream);
  if (*(uint *)((int)stream + 0xc) < 0x20) {
    (&DAT_100544e0)[*(uint *)((int)stream + 0xc)] = 0;
  }
  if (((DAT_1005427c != stream) && (DAT_100543a4 != stream)) && (DAT_100544cc != stream)) {
    recovered_1003ffe4(*(void **)((int)stream + 0x114));
    recovered_10040818(stream,0,0x124);
    recovered_1003ffe4(stream);
  }
  return iVar1;
}

#undef DAT_10054038
#undef DAT_1005427c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_100544e0

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_212 (*(char (*)[241])(frame + 286))
#define acStack_308 (*(char (*)[246])(frame + 40))
#define uStack_30c (*(undefined4 *)(frame + 36))
#define uStack_314 (*(uint *)(frame + 28))
#define uStack_28 (*(undefined4 *)(frame + 776))
#define uStack_2c (*(uint *)(frame + 772))
#define pvStack_30 (*(void * *)(frame + 768))
#define acStack_121 (*(char (*)[241])(frame + 527))
#define pvStack_318 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a70
 */

void * recovered_10045a70(char *path,char *mode)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *destination;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint size;

  puVar4 = recovered_10044f7c();
  if (mode != (char *)0x0) {
    pcVar8 = mode;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != 'w' && cVar1 != '\0');
    pcVar8 = mode;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != 'a' && cVar2 != '\0');
    do {
      cVar3 = *mode;
      mode = mode + 1;
    } while (cVar3 != '+' && cVar3 != '\0');
    if (path != (char *)0x0 && puVar4 != (undefined *)0x0) {
      iVar5 = recovered_10045234((int)puVar4,path,acStack_212);
      if (iVar5 == 0) {
        uVar9 = 0x3f;
        goto LAB_10044ce8;
      }
      destination = recovered_1003ff90(0x124);
      if (destination == (undefined4 *)0x0) {
        uVar9 = 0xc;
        goto LAB_10044ce8;
      }
      recovered_10040818(destination,0,0x124);
      destination[5] = 0xffffffff;
      destination[3] = 0xffffffff;
      destination[1] = 4;
      *destination = 0x54474c46;
      uVar6 = 3;
      if (cVar3 == '\0' && cVar2 == '\0') {
        uVar6 = 1;
      }
      if (cVar1 != '\0') {
        uVar6 = 3;
      }
      if (cVar2 != '\0') {
        uVar6 = uVar6 | 4;
      }
      destination[2] = uVar6;
      pf_varargs_10043634__4_((char *)(destination + 6),0xf1,&DAT_10051d2c,(uint)acStack_212);
      if ((cVar1 == '\0') || (cVar3 != '\0' || cVar2 != '\0')) {
        recovered_10040818(&pvStack_318,0,0x104);
        iVar5 = recovered_10045234((int)puVar4,acStack_212,acStack_121);
        if (iVar5 != 0) {
          recovered_10040818(&pvStack_30,0,0xc);
          iVar5 = recovered_10048aec((int)puVar4,acStack_121,(int)&pvStack_30);
          pvVar7 = (void *)0x0;
          if (iVar5 != 0) {
            pvVar7 = pvStack_30;
          }
          if (iVar5 != 0 && pvVar7 != (void *)0x0) {
            uStack_314 = uStack_2c;
            uStack_30c = uStack_28;
            pvStack_318 = pvVar7;
            pf_varargs_10043634__4_(acStack_308,0xf1,&DAT_10051d2c,(uint)acStack_121);
            destination[0x43] = pvStack_318;
            destination[0x44] = uStack_314;
            if ((cVar2 != '\0' || cVar3 != '\0') && uStack_314 != 0) {
              uVar6 = destination[0x47];
              if (uVar6 < uStack_314) {
                if (uVar6 == 0) {
                  uVar6 = 0x100;
                }
                do {
                  size = uVar6;
                  uVar6 = size << 1;
                } while (size < uStack_314);
                pvVar7 = recovered_10040034((void *)destination[0x45],size);
                if (pvVar7 == (void *)0x0) {
                  uVar9 = 0xc;
                  *(undefined1 *)((int)destination + 0x11) = 1;
                  goto LAB_10044e2c;
                }
                destination[0x47] = size;
                destination[0x45] = pvVar7;
              }
              else {
                pvVar7 = (void *)destination[0x45];
              }
              recovered_10040088(pvVar7,pvStack_318,uStack_314);
              uVar6 = 0;
              if (cVar2 != '\0') {
                uVar6 = uStack_314;
              }
              destination[0x48] = uVar6;
              destination[0x46] = uStack_314;
            }
            goto LAB_10044f28;
          }
        }
        if ((cVar2 == '\0' && cVar1 == '\0') && cVar3 == '\0') {
          uVar9 = 2;
LAB_10044e2c:
          recovered_1003ffe4(destination);
          *DAT_10054038 = uVar9;
          return (void *)0x0;
        }
      }
LAB_10044f28:
      iVar5 = recovered_1004553c((int)destination);
      if (-1 < iVar5) {
        return destination;
      }
      recovered_1003ffe4((void *)destination[0x45]);
      recovered_1003ffe4(destination);
      uVar9 = 0x18;
      goto LAB_10044ce8;
    }
  }
  uVar9 = 0x16;
LAB_10044ce8:
  *DAT_10054038 = uVar9;
  return (void *)0x0;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef acStack_212
#undef acStack_308
#undef uStack_30c
#undef uStack_314
#undef uStack_28
#undef uStack_2c
#undef pvStack_30
#undef acStack_121
#undef pvStack_318

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005427c
#define DAT_1005427c (*(void * *)(((uintptr_t)pf_module_state + 0x2574U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a74
 */

void * recovered_10045a74(char *path,char *mode,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  void *pvVar3;

  if (stream != (void *)0x0) {
    if (*(int *)stream == 0x54474c46) {
      puVar1 = recovered_10044f7c();
      if (*(int *)stream == 0x54474c46) {
        if ((2 < *(int *)((int)stream + 4) - 1U) && (*(char *)((int)stream + 0x12) == '\x01')) {
          if ((puVar1 == (undefined *)0x0) ||
             (iVar2 = recovered_10045c8c((int)puVar1,(char *)((int)stream + 0x18),
                                         *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118)
                                        ), iVar2 == 0)) {
            *(undefined1 *)((int)stream + 0x11) = 1;
            *DAT_10054038 = 5;
          }
          else {
            *(undefined1 *)((int)stream + 0x12) = 0;
          }
        }
      }
      else {
        *DAT_10054038 = 9;
      }
      if (*(uint *)((int)stream + 0xc) < 0x20) {
        (&DAT_100544e0)[*(uint *)((int)stream + 0xc)] = 0;
      }
      if (((DAT_1005427c != stream) && (DAT_100543a4 != stream)) && (DAT_100544cc != stream)) {
        recovered_1003ffe4(*(void **)((int)stream + 0x114));
        recovered_10040818(stream,0,0x124);
        recovered_1003ffe4(stream);
      }
    }
    else {
      *DAT_10054038 = 9;
    }
  }
  pvVar3 = recovered_10044c70(path,mode);
  return pvVar3;
}

#undef DAT_10054038
#undef DAT_1005427c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045a78
 */

void * recovered_10045a78(int fd,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;

  if (((0x1f < (uint)fd) ||
      (piVar2 = (int *)(&DAT_100544e0)[fd], piVar2 == (int *)0x0 || mode == (char *)0x0)) ||
     (*piVar2 != 0x54474c46)) {
    *DAT_10054038 = 9;
    return (void *)0x0;
  }
  pcVar3 = mode;
  do {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      pcVar3 = mode;
      goto LAB_10045af0;
    }
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 'w');
  goto LAB_10045b28;
  while (pcVar3 = pcVar3 + 1, cVar1 != 'a') {
LAB_10045af0:
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      pcVar3 = mode;
      goto LAB_10045b10;
    }
  }
  goto LAB_10045b28;
  while (pcVar3 = pcVar3 + 1, cVar1 != '+') {
LAB_10045b10:
    cVar1 = *pcVar3;
    if (cVar1 == '\0') goto LAB_10045b34;
  }
LAB_10045b28:
  piVar2[2] = piVar2[2] | 2;
LAB_10045b34:
  do {
    cVar1 = *mode;
    if (cVar1 == '\0') {
      return piVar2;
    }
    mode = mode + 1;
  } while (cVar1 != 'a');
  uVar4 = piVar2[0x44];
  if ((uint)piVar2[0x44] < (uint)piVar2[0x46]) {
    uVar4 = piVar2[0x46];
  }
  piVar2[2] = piVar2[2] | 4;
  piVar2[0x48] = uVar4;
  return piVar2;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b70
 */

void * recovered_10045b70(char *command,char *mode)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return (void *)0x0;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045b8c
 */

int recovered_10045b8c(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return -1;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045ba8
 */

int recovered_10045ba8(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = recovered_10044f7c();
  if (stream == (void *)0x0) {
    iVar2 = 0;
    do {
      if ((void *)(&DAT_100544e0)[iVar2] != (void *)0x0) {
        recovered_10045ba8((void *)(&DAT_100544e0)[iVar2]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    return 0;
  }
  if (*(int *)stream != 0x54474c46) {
    uVar3 = 9;
LAB_10045c64:
    *DAT_10054038 = uVar3;
    return -1;
  }
  if ((2 < *(int *)((int)stream + 4) - 1U) && (*(char *)((int)stream + 0x12) == '\x01')) {
    if ((puVar1 == (undefined *)0x0) ||
       (iVar2 = recovered_10045c8c((int)puVar1,(char *)((int)stream + 0x18),
                                   *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118)),
       iVar2 == 0)) {
      *(undefined1 *)((int)stream + 0x11) = 1;
      uVar3 = 5;
      goto LAB_10045c64;
    }
    *(undefined1 *)((int)stream + 0x12) = 0;
  }
  return 0;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef DAT_400108d0
#define DAT_400108d0 (*(uint8_t *)(0x400108d0U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
#undef _DAT_400108d0
#define _DAT_400108d0 (*(code * *)(0x400108d0U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define local_202 (*(char (*)[249])(frame + 30))
#define acStack_109 (*(char (*)[241])(frame + 279))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045c8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10045c8c(int param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  bool bVar3;

  uVar1 = 0;
  if (((param_1 != 0) && (-1 < *(int *)(param_1 + 0x14))) && ((param_3 != 0 || (param_4 == 0)))) {
    local_202[0] = '\0';
    iVar2 = recovered_10045234(param_1,param_2,acStack_109);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = recovered_10041140(acStack_109,&DAT_10051d2f);
      if (iVar2 == 0) {
        pf_varargs_10043634___(local_202,0xf9,str_100537e1);
      }
      else {
        pf_varargs_10043634__4_(local_202,0xf9,str_100537e8,(uint)acStack_109);
      }
      uVar1 = 0;
      if (local_202[0] != '\0') {
        if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
          bVar3 = _DAT_40010808 == 0xc;
          if (0xb < _DAT_40010808) {
            bVar3 = _DAT_40010808 == 0xd3;
          }
          if (0xd2 < _DAT_40010808 && !bVar3) {
            if (_DAT_400108d0 == (code *)0x0) {
              return 0;
            }
            uVar1 = (*_DAT_400108d0)(*(undefined4 *)(param_1 + 0x14),local_202);
            return uVar1;
          }
        }
        if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
           (_DAT_40010838 != (code *)0x0)) {
          uVar1 = (*_DAT_40010838)(local_202,param_3,param_4);
        }
      }
    }
  }
  return uVar1;
}

#undef DAT_10051d2f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef DAT_400108d0
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838
#undef _DAT_400108d0
#undef str_100537e1
#undef str_100537e8
#undef local_202
#undef acStack_109

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045e10
 */

int recovered_10045e10(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = recovered_10044f7c();
  if (stream == (void *)0x0) {
    iVar2 = 0;
    do {
      if ((void *)(&DAT_100544e0)[iVar2] != (void *)0x0) {
        recovered_10045ba8((void *)(&DAT_100544e0)[iVar2]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    return 0;
  }
  if (*(int *)stream != 0x54474c46) {
    uVar3 = 9;
LAB_10045c64:
    *DAT_10054038 = uVar3;
    return -1;
  }
  if ((2 < *(int *)((int)stream + 4) - 1U) && (*(char *)((int)stream + 0x12) == '\x01')) {
    if ((puVar1 == (undefined *)0x0) ||
       (iVar2 = recovered_10045c8c((int)puVar1,(char *)((int)stream + 0x18),
                                   *(int *)((int)stream + 0x114),*(int *)((int)stream + 0x118)),
       iVar2 == 0)) {
      *(undefined1 *)((int)stream + 0x11) = 1;
      uVar3 = 5;
      goto LAB_10045c64;
    }
    *(undefined1 *)((int)stream + 0x12) = 0;
  }
  return 0;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005427c
#define DAT_1005427c (*(int * *)(((uintptr_t)pf_module_state + 0x2574U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(int * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(int * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045e14
 */

undefined4 recovered_10045e14(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *DAT_10054038 = 9;
    return 0xffffffff;
  }
  puVar1 = recovered_10044f7c();
  if (*param_1 == 0x54474c46) {
    uVar2 = 0;
    if ((param_1[1] - 1U < 3) || (*(char *)((int)param_1 + 0x12) != '\x01')) goto LAB_10045edc;
    if ((puVar1 != (undefined *)0x0) &&
       (iVar3 = recovered_10045c8c((int)puVar1,(char *)(param_1 + 6),param_1[0x45],param_1[0x46]),
       iVar3 != 0)) {
      uVar2 = 0;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      goto LAB_10045edc;
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    uVar2 = 5;
  }
  else {
    uVar2 = 9;
  }
  *DAT_10054038 = uVar2;
  uVar2 = 0xffffffff;
LAB_10045edc:
  if ((uint)param_1[3] < 0x20) {
    (&DAT_100544e0)[param_1[3]] = 0;
  }
  if (((DAT_1005427c != param_1) && (DAT_100543a4 != param_1)) && (DAT_100544cc != param_1)) {
    recovered_1003ffe4((void *)param_1[0x45]);
    recovered_10040818(param_1,0,0x124);
    recovered_1003ffe4(param_1);
  }
  return uVar2;
}

#undef DAT_10054038
#undef DAT_1005427c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_100544e0

#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_10053e07
#define DAT_10053e07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20ffU)))
#undef DAT_10055dc4
#define DAT_10055dc4 (*(uint *)(((uintptr_t)pf_module_state + 0x40bcU)))
#undef DAT_10055dc8
#define DAT_10055dc8 (*(uint *)(((uintptr_t)pf_module_state + 0x40c0U)))
#undef DAT_10055dcc
#define DAT_10055dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40c4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001094c
#define DAT_4001094c (*(uint8_t *)(0x4001094cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001094c
#define _DAT_4001094c (*(code * *)(0x4001094cU))
#define local_223 (*(undefined1 (*)[515])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10045f84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10045f84(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (ptr == (void *)0x0 || stream == (void *)0x0) {
    return 0;
  }
  if (count == 0 || size == 0) {
    return 0;
  }
  if (*(int *)stream != 0x54474c46) {
    return 0;
  }
  uVar5 = count * size;
  iVar3 = *(int *)((int)stream + 4);
  uVar2 = uVar5;
  if (iVar3 == 1) {
    if (uVar5 == 0) {
      return 0;
    }
    if (DAT_10055dc8 <= DAT_10055dc4) {
      local_223[0] = 0;
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0x150) {
        return 0;
      }
      if (_DAT_4001094c == (code *)0x0) {
        return 0;
      }
      iVar3 = (*_DAT_4001094c)(0,local_223,0x1ff,&DAT_10052066,0);
      if (iVar3 == 0) {
        return 0;
      }
      pf_varargs_10043634__4_(&DAT_10055dcc,0x200,&DAT_10053e07,(uint)local_223);
      DAT_10055dc4 = 0;
      DAT_10055dc8 = recovered_10041118(&DAT_10055dcc);
    }
    uVar6 = DAT_10055dc8;
    uVar4 = DAT_10055dc4;
    if (DAT_10055dc8 - DAT_10055dc4 < uVar5) {
      uVar2 = DAT_10055dc8 - DAT_10055dc4;
    }
    recovered_10040088(ptr,&DAT_10055dcc + DAT_10055dc4,uVar2);
    DAT_10055dc4 = DAT_10055dc4 + uVar2;
    if (uVar6 == uVar4) {
      return 0;
    }
  }
  else {
    if (uVar5 != 0) {
      iVar3 = *(int *)((int)stream + 0x14);
    }
    if (uVar5 != 0 && iVar3 != -1) {
      *(char *)ptr = (char)iVar3;
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      uVar1 = recovered_10045f84((void *)((int)ptr + 1),1,uVar5 - 1,stream);
      uVar2 = uVar1 + 1;
    }
    else {
      uVar4 = *(uint *)((int)stream + 0x120);
      if (*(uint *)((int)stream + 0x110) <= uVar4) {
        *(undefined1 *)((int)stream + 0x10) = 1;
        return 0;
      }
      uVar6 = *(uint *)((int)stream + 0x110) - uVar4;
      if (uVar6 < uVar5) {
        uVar2 = uVar6;
      }
      recovered_10040088(ptr,(void *)(*(int *)((int)stream + 0x10c) + uVar4),uVar2);
      *(uint *)((int)stream + 0x120) = *(int *)((int)stream + 0x120) + uVar2;
      if (uVar6 < uVar5) {
        *(undefined1 *)((int)stream + 0x10) = 1;
      }
    }
  }
  uVar2 = recovered_1003f3c0(uVar2,size);
  return uVar2;
}

#undef DAT_10052066
#undef DAT_10053e07
#undef DAT_10055dc4
#undef DAT_10055dc8
#undef DAT_10055dcc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001094c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001094c
#undef local_223

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010948
#define DAT_40010948 (*(uint8_t *)(0x40010948U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010948
#define _DAT_40010948 (*(code * *)(0x40010948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046204
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_10046204(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint size_00;
  undefined4 uVar4;
  uint uVar5;
  ulong count_00;

  if ((((ptr == (void *)0x0) || (stream == (void *)0x0)) || (count == 0)) ||
     ((size == 0 || (*(int *)stream != 0x54474c46)))) {
    count = 0;
  }
  else {
    count_00 = count * size;
    if ((*(uint *)((int)stream + 4) & 0xfffffffe) == 2) {
      uVar4 = 1;
      if (*(uint *)((int)stream + 4) == 3) {
        uVar4 = 2;
      }
      uVar3 = 0;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x14b < _DAT_40010808 && (_DAT_40010948 != (code *)0x0)))) {
        uVar3 = (*_DAT_40010948)(uVar4,ptr,count_00);
      }
      count = recovered_1003f3c0(uVar3,size);
    }
    else if ((*(byte *)((int)stream + 8) & 2) == 0) {
      count = 0;
      *(undefined1 *)((int)stream + 0x11) = 1;
    }
    else {
      iVar2 = *(int *)((int)stream + 0x120);
      uVar3 = *(uint *)((int)stream + 0x11c);
      uVar5 = iVar2 + count_00;
      if (uVar3 < uVar5) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size_00 = uVar3;
          uVar3 = size_00 << 1;
        } while (size_00 < uVar5);
        pvVar1 = recovered_10040034(*(void **)((int)stream + 0x114),size_00);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)stream + 0x11) = 1;
          *DAT_10054038 = 0xc;
          return 0;
        }
        iVar2 = *(int *)((int)stream + 0x120);
        *(uint *)((int)stream + 0x11c) = size_00;
        *(void **)((int)stream + 0x114) = pvVar1;
      }
      else {
        pvVar1 = *(void **)((int)stream + 0x114);
      }
      recovered_10040088((void *)((int)pvVar1 + iVar2),ptr,count_00);
      *(uint *)((int)stream + 0x120) = uVar5;
      if (*(uint *)((int)stream + 0x118) < uVar5) {
        *(uint *)((int)stream + 0x118) = uVar5;
      }
      *(undefined1 *)((int)stream + 0x12) = 1;
    }
  }
  return count;
}

#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010948
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010948

#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_10053e07
#define DAT_10053e07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20ffU)))
#undef DAT_10055dc4
#define DAT_10055dc4 (*(uint *)(((uintptr_t)pf_module_state + 0x40bcU)))
#undef DAT_10055dc8
#define DAT_10055dc8 (*(uint *)(((uintptr_t)pf_module_state + 0x40c0U)))
#undef DAT_10055dcc
#define DAT_10055dcc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40c4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001094c
#define DAT_4001094c (*(uint8_t *)(0x4001094cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001094c
#define _DAT_4001094c (*(code * *)(0x4001094cU))
#define auStack_223 (*(undefined1 (*)[515])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100463c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100463c4(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (ptr == (void *)0x0 || stream == (void *)0x0) {
    return 0;
  }
  if (count == 0 || size == 0) {
    return 0;
  }
  if (*(int *)stream != 0x54474c46) {
    return 0;
  }
  uVar5 = count * size;
  iVar3 = *(int *)((int)stream + 4);
  uVar2 = uVar5;
  if (iVar3 == 1) {
    if (uVar5 == 0) {
      return 0;
    }
    if (DAT_10055dc8 <= DAT_10055dc4) {
      auStack_223[0] = 0;
      if (_DAT_40010800 != 0x50414d57) {
        return 0;
      }
      if (_DAT_40010804 == 0) {
        return 0;
      }
      if (_DAT_40010808 < 0x150) {
        return 0;
      }
      if (_DAT_4001094c == (code *)0x0) {
        return 0;
      }
      iVar3 = (*_DAT_4001094c)(0,auStack_223,0x1ff,&DAT_10052066,0);
      if (iVar3 == 0) {
        return 0;
      }
      pf_varargs_10043634__4_(&DAT_10055dcc,0x200,&DAT_10053e07,(uint)auStack_223);
      DAT_10055dc4 = 0;
      DAT_10055dc8 = recovered_10041118(&DAT_10055dcc);
    }
    uVar6 = DAT_10055dc8;
    uVar4 = DAT_10055dc4;
    if (DAT_10055dc8 - DAT_10055dc4 < uVar5) {
      uVar2 = DAT_10055dc8 - DAT_10055dc4;
    }
    recovered_10040088(ptr,&DAT_10055dcc + DAT_10055dc4,uVar2);
    DAT_10055dc4 = DAT_10055dc4 + uVar2;
    if (uVar6 == uVar4) {
      return 0;
    }
  }
  else {
    if (uVar5 != 0) {
      iVar3 = *(int *)((int)stream + 0x14);
    }
    if (uVar5 != 0 && iVar3 != -1) {
      *(char *)ptr = (char)iVar3;
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      uVar1 = recovered_10045f84((void *)((int)ptr + 1),1,uVar5 - 1,stream);
      uVar2 = uVar1 + 1;
    }
    else {
      uVar4 = *(uint *)((int)stream + 0x120);
      if (*(uint *)((int)stream + 0x110) <= uVar4) {
        *(undefined1 *)((int)stream + 0x10) = 1;
        return 0;
      }
      uVar6 = *(uint *)((int)stream + 0x110) - uVar4;
      if (uVar6 < uVar5) {
        uVar2 = uVar6;
      }
      recovered_10040088(ptr,(void *)(*(int *)((int)stream + 0x10c) + uVar4),uVar2);
      *(uint *)((int)stream + 0x120) = *(int *)((int)stream + 0x120) + uVar2;
      if (uVar6 < uVar5) {
        *(undefined1 *)((int)stream + 0x10) = 1;
      }
    }
  }
  uVar2 = recovered_1003f3c0(uVar2,size);
  return uVar2;
}

#undef DAT_10052066
#undef DAT_10053e07
#undef DAT_10055dc4
#undef DAT_10055dc8
#undef DAT_10055dcc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001094c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001094c
#undef auStack_223

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010948
#define DAT_40010948 (*(uint8_t *)(0x40010948U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010948
#define _DAT_40010948 (*(code * *)(0x40010948U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100463c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recovered_100463c8(void *ptr,ulong size,ulong count,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint size_00;
  undefined4 uVar4;
  uint uVar5;
  ulong count_00;

  if ((((ptr == (void *)0x0) || (stream == (void *)0x0)) || (count == 0)) ||
     ((size == 0 || (*(int *)stream != 0x54474c46)))) {
    count = 0;
  }
  else {
    count_00 = count * size;
    if ((*(uint *)((int)stream + 4) & 0xfffffffe) == 2) {
      uVar4 = 1;
      if (*(uint *)((int)stream + 4) == 3) {
        uVar4 = 2;
      }
      uVar3 = 0;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x14b < _DAT_40010808 && (_DAT_40010948 != (code *)0x0)))) {
        uVar3 = (*_DAT_40010948)(uVar4,ptr,count_00);
      }
      count = recovered_1003f3c0(uVar3,size);
    }
    else if ((*(byte *)((int)stream + 8) & 2) == 0) {
      count = 0;
      *(undefined1 *)((int)stream + 0x11) = 1;
    }
    else {
      iVar2 = *(int *)((int)stream + 0x120);
      uVar3 = *(uint *)((int)stream + 0x11c);
      uVar5 = iVar2 + count_00;
      if (uVar3 < uVar5) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size_00 = uVar3;
          uVar3 = size_00 << 1;
        } while (size_00 < uVar5);
        pvVar1 = recovered_10040034(*(void **)((int)stream + 0x114),size_00);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)stream + 0x11) = 1;
          *DAT_10054038 = 0xc;
          return 0;
        }
        iVar2 = *(int *)((int)stream + 0x120);
        *(uint *)((int)stream + 0x11c) = size_00;
        *(void **)((int)stream + 0x114) = pvVar1;
      }
      else {
        pvVar1 = *(void **)((int)stream + 0x114);
      }
      recovered_10040088((void *)((int)pvVar1 + iVar2),ptr,count_00);
      *(uint *)((int)stream + 0x120) = uVar5;
      if (*(uint *)((int)stream + 0x118) < uVar5) {
        *(uint *)((int)stream + 0x118) = uVar5;
      }
      *(undefined1 *)((int)stream + 0x12) = 1;
    }
  }
  return count;
}

#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010948
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010948

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100463cc
 */

int recovered_100463cc(void *stream,long offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    uVar1 = 9;
    goto LAB_10046458;
  }
  uVar2 = 0;
  if (origin == 0) {
LAB_10046404:
    if (-1 < offset) goto LAB_10046464;
LAB_1004643c:
    if ((uint)-offset <= uVar2) {
LAB_10046464:
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      *(undefined1 *)((int)stream + 0x10) = 0;
      *(uint *)((int)stream + 0x120) = uVar2 + offset;
      return 0;
    }
  }
  else {
    if (origin == 2) {
      uVar2 = *(uint *)((int)stream + 0x110);
      if (*(uint *)((int)stream + 0x110) < *(uint *)((int)stream + 0x118)) {
        uVar2 = *(uint *)((int)stream + 0x118);
      }
      if ((uint)offset < 0x80000000) goto LAB_10046464;
      goto LAB_1004643c;
    }
    if (origin == 1) {
      uVar2 = *(uint *)((int)stream + 0x120);
      goto LAB_10046404;
    }
  }
  uVar1 = 0x16;
LAB_10046458:
  *DAT_10054038 = uVar1;
  return -1;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046484
 */

undefined4 recovered_10046484(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    uVar1 = 9;
    goto LAB_10046510;
  }
  uVar2 = 0;
  if (param_3 == 0) {
LAB_100464bc:
    if (-1 < (int)param_2) goto LAB_1004651c;
LAB_100464f4:
    if (-param_2 <= uVar2) {
LAB_1004651c:
      param_1[5] = -1;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[0x48] = uVar2 + param_2;
      return 0;
    }
  }
  else {
    if (param_3 == 2) {
      uVar2 = param_1[0x44];
      if ((uint)param_1[0x44] < (uint)param_1[0x46]) {
        uVar2 = param_1[0x46];
      }
      if (param_2 < 0x80000000) goto LAB_1004651c;
      goto LAB_100464f4;
    }
    if (param_3 == 1) {
      uVar2 = param_1[0x48];
      goto LAB_100464bc;
    }
  }
  uVar1 = 0x16;
LAB_10046510:
  *DAT_10054038 = uVar1;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004653c
 */

long recovered_1004653c(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  return *(long *)((int)stream + 0x120);
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046578
 */

int recovered_10046578(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  return param_1[0x48];
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100465b4
 */

int recovered_100465b4(void *stream,longlong offset,int origin)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_r1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  iVar2 = (int)((ulonglong)offset >> 0x20);
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    uVar1 = 9;
    goto LAB_10046640;
  }
  uVar3 = 0;
  if (iVar2 == 0) {
LAB_100465ec:
    if (-1 < (int)in_r1) goto LAB_1004664c;
LAB_10046624:
    if (-in_r1 <= uVar3) {
LAB_1004664c:
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      *(undefined1 *)((int)stream + 0x10) = 0;
      *(uint *)((int)stream + 0x120) = uVar3 + in_r1;
      return 0;
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = *(uint *)((int)stream + 0x110);
      if (*(uint *)((int)stream + 0x110) < *(uint *)((int)stream + 0x118)) {
        uVar3 = *(uint *)((int)stream + 0x118);
      }
      if (in_r1 < 0x80000000) goto LAB_1004664c;
      goto LAB_10046624;
    }
    if (iVar2 == 1) {
      uVar3 = *(uint *)((int)stream + 0x120);
      goto LAB_100465ec;
    }
  }
  uVar1 = 0x16;
LAB_10046640:
  *DAT_10054038 = uVar1;
  return -1;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004666c
 */

longlong recovered_1004666c(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  return (longlong)*(int *)((int)stream + 0x120);
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100466b0
 */

int recovered_100466b0(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (pos == (long *)0x0) {
    *DAT_10054038 = 0x16;
    return -1;
  }
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)((int)stream + 0x120);
  }
  *pos = iVar1;
  return iVar1 >> 0x1f;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004671c
 */

int recovered_1004671c(void *stream,long *pos)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (pos != (long *)0x0) {
    if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
      uVar1 = 9;
      goto LAB_1004678c;
    }
    if (-1 < *pos) {
      *(long *)((int)stream + 0x120) = *pos;
      *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      *(undefined1 *)((int)stream + 0x10) = 0;
      return 0;
    }
  }
  uVar1 = 0x16;
LAB_1004678c:
  *DAT_10054038 = uVar1;
  return -1;
}

#undef DAT_10054038

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046798
 */

int recovered_10046798(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (stream == (void *)0x0) {
    return 0;
  }
  if (*(int *)stream == 0x54474c46) {
    uVar1 = (uint)*(byte *)((int)stream + 0x10);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467c0
 */

undefined1 recovered_100467c0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54474c46) {
    uVar1 = (undefined1)param_1[4];
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100467e8
 */

int recovered_100467e8(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (stream == (void *)0x0) {
    return 0;
  }
  if (*(int *)stream == 0x54474c46) {
    uVar1 = (uint)*(byte *)((int)stream + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046810
 */

undefined1 recovered_10046810(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54474c46) {
    uVar1 = *(undefined1 *)((int)param_1 + 0x11);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046838
 */

void recovered_10046838(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (stream == (void *)0x0) {
    return;
  }
  if (*(int *)stream == 0x54474c46) {
    *(undefined2 *)((int)stream + 0x10) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004685c
 */

void recovered_1004685c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0x54474c46) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046880
 */

int recovered_10046880(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  return *(int *)((int)stream + 0xc);
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100468bc
 */

int recovered_100468bc(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;

  local_9 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  iVar1 = *(int *)((int)stream + 0x14);
  if (iVar1 != -1) {
    *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
    return iVar1;
  }
  uVar2 = recovered_10045f84(&local_9,1,1,stream);
  uVar3 = (uint)local_9;
  if (uVar2 != 1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_10054038
#undef local_9

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046950
 */

int recovered_10046950(void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;

  local_9 = 0;
  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  iVar1 = *(int *)((int)stream + 0x14);
  if (iVar1 != -1) {
    *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
    return iVar1;
  }
  uVar2 = recovered_10045f84(&local_9,1,1,stream);
  uVar3 = (uint)local_9;
  if (uVar2 != 1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

#undef DAT_10054038
#undef local_9

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100469e4
 */

uint recovered_100469e4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  local_9 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x54474c46)) {
    *DAT_10054038 = 9;
    return 0xffffffff;
  }
  uVar1 = param_1[5];
  if (uVar1 != 0xffffffff) {
    param_1[5] = -1;
    return uVar1;
  }
  uVar2 = recovered_10045f84(&local_9,1,1,param_1);
  uVar1 = (uint)local_9;
  if (uVar2 != 1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10054038
#undef local_9

#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001094c
#define DAT_4001094c (*(uint8_t *)(0x4001094cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001094c
#define _DAT_4001094c (*(code * *)(0x4001094cU))
#define local_a (*(byte (*)[2])(frame + 22))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046a78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10046a78(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x150)) ||
     (_DAT_4001094c == (code *)0x0)) {
    return -1;
  }
  iVar1 = (*_DAT_4001094c)(0,local_a,2,&DAT_10052066,0);
  uVar2 = (uint)local_a[0];
  if (uVar2 == 0) {
    uVar2 = 10;
  }
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_10052066
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001094c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001094c
#undef local_a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b18
 */

int recovered_10046b18(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (stream == (void *)0x0 || ch == -1) {
    return -1;
  }
  iVar1 = -1;
  if (*(int *)stream == 0x54474c46) {
    *(undefined1 *)((int)stream + 0x10) = 0;
    *(uint *)((int)stream + 0x14) = ch & 0xff;
    iVar1 = ch;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b58
 */

uint recovered_10046b58(uint param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == (int *)0x0 || param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = 0xffffffff;
  if (*param_2 == 0x54474c46) {
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[5] = param_1 & 0xff;
    uVar1 = param_1;
  }
  return uVar1;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_21 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046b98
 */

char * recovered_10046b98(char *text,int count,void *stream)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)0x0;
  if ((((text != (char *)0x0) && (0 < count)) && (stream != (void *)0x0)) &&
     (*(int *)stream == 0x54474c46)) {
    do {
      if ((char *)(count + -1) == pcVar3) {
        pcVar4 = (char *)(count + -1);
        break;
      }
      local_21 = 0;
      pcVar4 = pcVar3;
      if (*(int *)stream != 0x54474c46) {
        *DAT_10054038 = 9;
        break;
      }
      uVar1 = *(uint *)((int)stream + 0x14);
      if (uVar1 == 0xffffffff) {
        uVar2 = recovered_10045f84(&local_21,1,1,stream);
        if (uVar2 != 1) break;
        uVar1 = (uint)local_21;
      }
      else {
        *(undefined4 *)((int)stream + 0x14) = 0xffffffff;
      }
      text[(int)pcVar3] = (char)uVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar3;
    } while (uVar1 != 10);
    text[(int)pcVar4] = '\0';
    pcVar3 = (char *)0x0;
    if (pcVar4 != (char *)0x0) {
      pcVar3 = text;
    }
  }
  return pcVar3;
}

#undef DAT_10054038
#undef local_21

#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046c88
 */

int recovered_10046c88(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_9 = (byte)ch;
  uVar1 = recovered_10046204(&local_9,1,1,stream);
  uVar2 = (uint)local_9;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef local_9

#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046cc4
 */

int recovered_10046cc4(int ch,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_9 = (byte)ch;
  uVar1 = recovered_10046204(&local_9,1,1,stream);
  uVar2 = (uint)local_9;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef local_9

#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#define local_9 (*(byte *)(frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d00
 */

int recovered_10046d00(int ch)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  local_9 = (byte)ch;
  uVar1 = recovered_10046204(&local_9,1,1,DAT_100543a4);
  uVar2 = (uint)local_9;
  if (uVar1 != 1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

#undef DAT_100543a4
#undef local_9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d44
 */

int recovered_10046d44(char *text,void *stream)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;
  int iVar2;

  if (text == (char *)0x0) {
    count = 0;
  }
  else {
    count = recovered_10041118(text);
  }
  uVar1 = recovered_10046204(text,1,count,stream);
  iVar2 = 0;
  if (uVar1 != count) {
    iVar2 = -1;
  }
  return iVar2;
}


#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#define local_15 (*(undefined1 *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046d8c
 */

int recovered_10046d8c(char *text)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *stream;
  ulong uVar1;
  ulong uVar2;
  int iVar3;

  stream = DAT_100543a4;
  if (text == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10041118(text);
  }
  uVar2 = recovered_10046204(text,1,uVar1,stream);
  iVar3 = -1;
  if (uVar2 == uVar1) {
    local_15 = 10;
    uVar1 = recovered_10046204(&local_15,1,1,DAT_100543a4);
    iVar3 = 0;
    if (uVar1 != 1) {
      iVar3 = -1;
    }
  }
  return iVar3;
}

#undef DAT_100543a4
#undef local_15

#define acStack_1014 (*(char (*)[4096])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046e18
 */

int recovered_10046e18(void *stream,char *format,void *args)

{
  unsigned char frame[4176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong count;

  uVar1 = recovered_100429d0(acStack_1014,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = 0xfff;
    if (uVar1 < 0xfff) {
      count = uVar1;
    }
    recovered_10046204(acStack_1014,1,count,stream);
  }
  return uVar1;
}

#undef acStack_1014

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_10046e74(void *stream,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10046e18(stream,format,(void *)args);__builtin_va_end(args);return result;}


#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#define acStack_1014 (*(char (*)[4096])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10046ef0
 */

int recovered_10046ef0(char *format,void *args)

{
  unsigned char frame[4176] __attribute__((aligned(16))) = {0};

  void *stream;
  uint uVar1;
  ulong count;

  stream = DAT_100543a4;
  uVar1 = recovered_100429d0(acStack_1014,0x1000,format,args);
  if (-1 < (int)uVar1) {
    count = 0xfff;
    if (uVar1 < 0xfff) {
      count = uVar1;
    }
    recovered_10046204(acStack_1014,1,count,stream);
  }
  return uVar1;
}

#undef DAT_100543a4
#undef acStack_1014

/* Recover the actual C variadic entry; Pooka's Free Software License. */
int recovered_10046f54(char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=recovered_10046ef0(format,(void *)args);__builtin_va_end(args);return result;}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10046fdc(char *buffer,char *format,void *input){
#if defined(__x86_64__)
 __builtin_va_list args;__builtin_memcpy(args,input,sizeof args);
#else
 __builtin_va_list args=(__builtin_va_list)input;
#endif
 return pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);}


/* Recovered formatting ABI; Pooka's Free Software License. */
int recovered_10046fec(char *buffer,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int result=pf_tayga_vsnprintf(buffer,(size_t)-1,format,args);__builtin_va_end(args);return result;}


#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#define local_2c (*(byte * *)(frame + 20))
#define local_28 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004702c
 */

int recovered_1004702c(char *buffer,char *format,void *args)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;

  if (format == (char *)0x0) {
    format = &DAT_10052066;
  }
  if (buffer == (char *)0x0) {
    buffer = &DAT_10052066;
  }
  iVar7 = 0;
  local_28 = args;
LAB_10047064:
  uVar8 = (uint)(byte)*format;
  switch((uintptr_t)(uVar8)) {
  case 0:
switchD_10047078_caseD_0:
    return iVar7;
  default:
    if ((byte)*buffer != uVar8) {
      return iVar7;
    }
    format = format + 1;
    buffer = buffer + 1;
    goto LAB_10047064;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x20:
    while ((uVar8 - 9 < 5 || (uVar8 == 0x20))) {
      format = format + 1;
      uVar8 = (uint)(byte)*format;
    }
    for (; ((byte)*buffer - 9 < 5 || ((byte)*buffer == 0x20)); buffer = buffer + 1) {
    }
    goto LAB_10047064;
  case 0x25:
    bVar1 = format[1];
    if (bVar1 == 0x25) goto code_r0x10047120;
    iVar9 = 1;
    if (bVar1 == 0x2a) {
      iVar9 = 2;
    }
    pbVar4 = (byte *)(format + iVar9);
    bVar6 = *pbVar4;
    if ((byte)(bVar6 - 0x30U) < 10) {
      uVar8 = 0;
      do {
        bVar11 = bVar6 - 0x30U;
        pbVar4 = pbVar4 + 1;
        bVar6 = *pbVar4;
        uVar8 = uVar8 * 10 + (uint)bVar11;
      } while ((byte)(bVar6 - 0x30U) < 10);
      if (uVar8 == 0) {
        uVar8 = 0xffffffff;
      }
      if (bVar6 != 0x7a) goto LAB_100471e4;
LAB_1004721c:
      pbVar5 = pbVar4 + 1;
      uVar14 = 5;
    }
    else {
      uVar8 = 0xffffffff;
      if (bVar6 == 0x7a) goto LAB_1004721c;
LAB_100471e4:
      if (bVar6 == 0x6c) {
        pbVar5 = pbVar4 + 1;
        uVar14 = 3;
        if (*pbVar5 == 0x6c) {
          pbVar5 = pbVar4 + 2;
          uVar14 = 4;
        }
      }
      else {
        uVar14 = 0;
        pbVar5 = pbVar4;
        if (bVar6 == 0x68) {
          pbVar5 = pbVar4 + 1;
          uVar14 = 1;
          if (*pbVar5 == 0x68) {
            pbVar5 = pbVar4 + 2;
            uVar14 = 2;
          }
        }
      }
    }
    uVar12 = (uint)*pbVar5;
    format = (char *)(pbVar5 + 1);
    if (uVar12 == 0) {
      format = (char *)pbVar5;
    }
  }
  switch((uintptr_t)(uVar12 - 0x58)) {
  case 0:
  case 0xc:
  case 0x11:
  case 0x17:
  case 0x1d:
  case 0x20:
    for (; (uVar13 = (uint)(byte)*buffer, uVar13 - 9 < 5 || (uVar13 == 0x20)); buffer = buffer + 1)
    {
    }
    if (uVar13 == 0x2b || uVar13 == 0x2d) {
      uVar8 = uVar8 - 1;
      buffer = buffer + 1;
    }
    uVar15 = 8;
    switch((uintptr_t)(uVar12 - 0x58)) {
    case 0:
    case 0x20:
switchD_10047378_caseD_0:
      uVar15 = 0x10;
      if (1 < uVar8) {
        bVar6 = *buffer;
        if (bVar6 != 0x30) goto LAB_10047474;
        if ((byte)(buffer[1] | 0x20U) != 0x78) goto LAB_100475c4;
        uVar8 = uVar8 - 2;
        buffer = buffer + 2;
      }
      break;
    default:
      uVar15 = 10;
      break;
    case 0x11:
      if (uVar8 < 2) {
        if (uVar8 == 0) {
          return iVar7;
        }
        bVar6 = *buffer;
        uVar15 = 10;
        uVar8 = 1;
        if (bVar6 == 0x30) {
          uVar15 = 8;
        }
        goto LAB_10047474;
      }
      bVar6 = *buffer;
      if (bVar6 != 0x30) {
        uVar15 = 10;
        goto LAB_10047474;
      }
      if ((byte)(buffer[1] | 0x20U) == 0x78) {
        uVar8 = uVar8 - 2;
        buffer = buffer + 2;
        goto switchD_10047378_caseD_0;
      }
LAB_100475c4:
      iVar16 = uVar8 - 1;
      local_2c = (byte *)(buffer + uVar8);
      iVar9 = 0x30;
      goto LAB_100474a0;
    case 0x17:
      break;
    }
    if (uVar8 == 0) {
      return iVar7;
    }
    bVar6 = *buffer;
LAB_10047474:
    if (bVar6 == 0) {
      return iVar7;
    }
    iVar16 = uVar8 - 1;
    local_2c = (byte *)(buffer + uVar8);
    iVar9 = (int)(char)bVar6;
    if ((byte)(bVar6 - 0x30U) < 10) {
LAB_100474a0:
      uVar8 = iVar9 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 6) {
      uVar8 = iVar9 - 0x57;
    }
    else {
      uVar8 = 0xffffffff;
      if ((byte)(bVar6 + 0xbf) < 6) {
        uVar8 = iVar9 - 0x37;
      }
    }
    if (uVar15 <= uVar8) {
      return iVar7;
    }
    if (iVar16 == 0) {
      uVar2 = (ulonglong)uVar8;
      pbVar4 = local_2c;
    }
    else {
      uVar2 = (ulonglong)uVar8;
      pbVar5 = (byte *)buffer;
      do {
        pbVar5 = pbVar5 + 1;
        bVar6 = *pbVar5;
        iVar9 = (int)(char)bVar6;
        buffer = buffer + 1;
        pbVar4 = (byte *)buffer;
        if (bVar6 == 0) break;
        if ((byte)(bVar6 - 0x30U) < 10) {
          uVar8 = iVar9 - 0x30;
        }
        else if ((byte)(bVar6 + 0x9f) < 6) {
          uVar8 = iVar9 - 0x57;
        }
        else {
          uVar8 = 0xffffffff;
          if ((byte)(bVar6 + 0xbf) < 6) {
            uVar8 = iVar9 - 0x37;
          }
        }
        pbVar4 = pbVar5;
        if (uVar15 <= uVar8) break;
        iVar16 = iVar16 + -1;
        uVar2 = (ulonglong)uVar15 * (uVar2 & 0xffffffff) +
                CONCAT44((int)(uVar2 >> 0x20) * uVar15,uVar8);
        pbVar4 = local_2c;
      } while (iVar16 != 0);
    }
    buffer = (char *)pbVar4;
    if (bVar1 == 0x2a) goto LAB_10047064;
    iVar9 = (int)(uVar2 >> 0x20);
    iVar16 = (int)uVar2;
    if (uVar12 == 0x69 || uVar12 == 100) {
      uVar3 = CONCAT44(-(iVar9 + (uint)(iVar16 != 0)),-iVar16);
      if (uVar13 != 0x2b && uVar13 != 0x2d || uVar13 != 0x2d) {
        uVar3 = uVar2;
      }
      switch((uintptr_t)(uVar14)) {
      case 1:
        *(short *)*local_28 = (short)uVar3;
        break;
      case 2:
        *(char *)*local_28 = (char)uVar3;
        break;
      default:
        *(int *)*local_28 = (int)uVar3;
        break;
      case 4:
        iVar16 = 1;
        *(ulonglong *)*local_28 = uVar3;
        goto LAB_100477d0;
      }
      goto LAB_100477cc;
    }
    switch((uintptr_t)(uVar14)) {
    case 1:
      iVar16 = 1;
      *(short *)*local_28 = (short)uVar2;
      break;
    case 2:
      iVar16 = 1;
      *(char *)*local_28 = (char)uVar2;
      break;
    default:
      piVar10 = (int *)*local_28;
      goto LAB_100477c8;
    case 4:
      piVar10 = (int *)*local_28;
      piVar10[1] = iVar9;
LAB_100477c8:
      *piVar10 = iVar16;
LAB_100477cc:
      iVar16 = 1;
    }
    break;
  default:
    goto switchD_10047078_caseD_0;
  case 0xb:
    iVar9 = 0;
    if (bVar1 == 0x2a) {
      iVar16 = 0;
    }
    else {
      iVar16 = *local_28;
      local_28 = local_28 + 1;
    }
    do {
      if (buffer[-iVar9] == 0) {
        if (iVar16 != 0) {
          iVar16 = 1;
        }
        if (iVar9 == 0) {
          return iVar7;
        }
        buffer = buffer + -iVar9;
        goto LAB_100477d0;
      }
      if (iVar16 != 0) {
        *(char *)(iVar16 - iVar9) = buffer[-iVar9];
      }
      iVar9 = iVar9 + -1;
    } while (-iVar9 != uVar8);
    buffer = buffer + -iVar9;
    if (iVar16 != 0) {
      iVar16 = 1;
    }
    break;
  case 0x1b:
    for (; ((byte)*buffer - 9 < 5 || ((byte)*buffer == 0x20)); buffer = buffer + 1) {
    }
    uVar12 = 0;
    if (bVar1 == 0x2a) {
      iVar9 = 0;
    }
    else {
      iVar9 = *local_28;
      local_28 = local_28 + 1;
    }
    do {
      bVar1 = buffer[uVar12];
      uVar15 = bVar1 - 9;
      uVar13 = uVar12;
      if (((uVar15 < 0x18) && ((1 << (uVar15 & 0xff) & 0x80001fU) != 0)) || (bVar1 == 0))
      goto LAB_10047640;
      if (iVar9 != 0) {
        *(byte *)(iVar9 + uVar12) = bVar1;
      }
      uVar13 = uVar12 + 1;
      uVar12 = uVar13;
    } while (uVar8 != uVar13);
    uVar12 = uVar8;
LAB_10047640:
    buffer = buffer + uVar13;
    if (uVar12 == 0) goto switchD_10047078_caseD_0;
    if (iVar9 == 0) goto LAB_10047064;
    iVar16 = 1;
    *(undefined1 *)(iVar9 + uVar12) = 0;
  }
LAB_100477d0:
  iVar7 = iVar7 + iVar16;
  goto LAB_10047064;
code_r0x10047120:
  if (*buffer != 0x25) {
    return iVar7;
  }
  format = format + 2;
  buffer = buffer + 1;
  goto LAB_10047064;
}

#undef DAT_10052066
#undef local_2c
#undef local_28

#define local_8 (*(undefined4 *)(frame + 24))
#define local_4 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047800
 */

int recovered_10047800(char *buffer,char *format,...)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;

  local_8 = in_r2;
  local_4 = in_r3;
  iVar1 = recovered_1004702c(buffer,format,&local_8);
  return iVar1;
}

#undef local_8
#undef local_4

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047834
 */

int recovered_10047834(void *stream,char *buffer,int mode,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return -1;
  }
  return 0;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047870
 */

void recovered_10047870(void *stream,char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((stream == (void *)0x0) || (*(int *)stream != 0x54474c46)) {
    *DAT_10054038 = 9;
    return;
  }
  return;
}

#undef DAT_10054038

#undef DAT_100539c7
#define DAT_100539c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cbfU)))
#undef DAT_10054038
#define DAT_10054038 (*(int * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100478a4
 */

void recovered_100478a4(char *prefix)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  char *text;
  uint in_r1;

  pvVar1 = DAT_100544cc;
  if (prefix != (char *)0x0) {
    in_r1 = (uint)(byte)*prefix;
  }
  if (prefix != (char *)0x0 && in_r1 != 0) {
    uVar2 = recovered_10041118(prefix);
    recovered_10046204(prefix,1,uVar2,pvVar1);
    pvVar1 = DAT_100544cc;
    uVar2 = recovered_10041118(&DAT_100539c7);
    recovered_10046204(&DAT_100539c7,1,uVar2,pvVar1);
  }
  text = recovered_10047984(*DAT_10054038);
  pvVar1 = DAT_100544cc;
  uVar2 = recovered_10041118(text);
  recovered_10046204(text,1,uVar2,pvVar1);
  local_11 = 10;
  recovered_10046204(&local_11,1,1,DAT_100544cc);
  return;
}

#undef DAT_100539c7
#undef DAT_10054038
#undef DAT_100544cc
#undef local_11

#undef str_10053ae2
#define str_10053ae2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ddaU)))
#undef str_10053aeb
#define str_10053aeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1de3U)))
#undef str_10053b03
#define str_10053b03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1dfbU)))
#undef str_10053b1d
#define str_10053b1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e15U)))
#undef str_10053b2d
#define str_10053b2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e25U)))
#undef str_10053b45
#define str_10053b45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e3dU)))
#undef str_10053b58
#define str_10053b58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e50U)))
#undef str_10053b6c
#define str_10053b6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e64U)))
#undef str_10053b8d
#define str_10053b8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e85U)))
#undef str_10053ba4
#define str_10053ba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9cU)))
#undef str_10053bb6
#define str_10053bb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaeU)))
#undef str_10053bc2
#define str_10053bc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ebaU)))
#undef str_10053bd2
#define str_10053bd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ecaU)))
#undef str_10053be1
#define str_10053be1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ed9U)))
#undef str_10053bf2
#define str_10053bf2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eeaU)))
#undef str_10053c06
#define str_10053c06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1efeU)))
#undef str_10053c1e
#define str_10053c1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f16U)))
#undef str_10053c2a
#define str_10053c2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f22U)))
#undef str_10053c3b
#define str_10053c3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f33U)))
#undef str_10053c4e
#define str_10053c4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f46U)))
#undef str_10053c67
#define str_10053c67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047984
 */

char * recovered_10047984(int error_number)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10053ae2;
  switch((uintptr_t)(error_number)) {
  case 0:
    goto switchD_100479a4_caseD_0;
  case 1:
    return str_10053aeb;
  case 2:
    return str_10053b03;
  case 3:
    return str_10053b1d;
  case 4:
    return str_10053b2d;
  case 5:
    return str_10053b45;
  default:
    pcVar1 = str_10053c67;
switchD_100479a4_caseD_0:
    return pcVar1;
  case 9:
    return str_10053b58;
  case 0xb:
    return str_10053b6c;
  case 0xc:
    return str_10053b8d;
  case 0xd:
    return str_10053ba4;
  case 0x11:
    return str_10053bb6;
  case 0x14:
    return str_10053bc2;
  case 0x15:
    return str_10053bd2;
  case 0x16:
    return str_10053be1;
  case 0x18:
    return str_10053bf2;
  case 0x1c:
    return str_10053c06;
  case 0x20:
    return str_10053c1e;
  case 0x22:
    return str_10053c2a;
  case 0x3f:
    return str_10053c3b;
  case 0x4e:
    return str_10053c4e;
  }
}

#undef str_10053ae2
#undef str_10053aeb
#undef str_10053b03
#undef str_10053b1d
#undef str_10053b2d
#undef str_10053b45
#undef str_10053b58
#undef str_10053b6c
#undef str_10053b8d
#undef str_10053ba4
#undef str_10053bb6
#undef str_10053bc2
#undef str_10053bd2
#undef str_10053be1
#undef str_10053bf2
#undef str_10053c06
#undef str_10053c1e
#undef str_10053c2a
#undef str_10053c3b
#undef str_10053c4e
#undef str_10053c67

#undef DAT_10055099
#define DAT_10055099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3391U)))
#undef DAT_100550bc
#define DAT_100550bc (*(uint *)(((uintptr_t)pf_module_state + 0x33b4U)))
#undef str_100539ca
#define str_100539ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cc2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c24
 */

char * recovered_10047c24(char *buffer)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_100550bc = DAT_100550bc + 1;
  if (buffer == (char *)0x0) {
    buffer = &DAT_10055099;
  }
  pf_varargs_10043634__4_(buffer,0x20,str_100539ca,DAT_100550bc);
  return buffer;
}

#undef DAT_10055099
#undef DAT_100550bc
#undef str_100539ca

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef DAT_400108d4
#define DAT_400108d4 (*(uint8_t *)(0x400108d4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#undef _DAT_400108d4
#define _DAT_400108d4 (*(code * *)(0x400108d4U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_1fe (*(char (*)[249])(frame + 18))
#define acStack_105 (*(char (*)[241])(frame + 267))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c84
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10047c84(char *path)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047d9c;
  acStack_1fe[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,path,acStack_105);
  if (iVar2 == 0) goto LAB_10047d9c;
  iVar2 = recovered_10041140(acStack_105,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(acStack_1fe,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(acStack_1fe,0xf9,str_100537e8,(uint)acStack_105);
  }
  if (acStack_1fe[0] == '\0') goto LAB_10047d9c;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xd7;
    }
    if (_DAT_40010808 < 0xd7 || bVar3) goto LAB_10047d70;
    if (_DAT_400108d4 == (code *)0x0) goto LAB_10047d9c;
    iVar2 = (*_DAT_400108d4)(*(undefined4 *)(puVar1 + 0x14),acStack_1fe);
  }
  else {
LAB_10047d70:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x40)) ||
       (_DAT_4001083c == (code *)0x0)) goto LAB_10047d9c;
    iVar2 = (*_DAT_4001083c)(acStack_1fe);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047d9c:
  *DAT_10054038 = 2;
  return -1;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef DAT_400108d4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c
#undef _DAT_400108d4
#undef str_100537e1
#undef str_100537e8
#undef acStack_1fe
#undef acStack_105

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef DAT_400108d4
#define DAT_400108d4 (*(uint8_t *)(0x400108d4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#undef _DAT_400108d4
#define _DAT_400108d4 (*(code * *)(0x400108d4U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define local_1fe (*(char (*)[249])(frame + 18))
#define acStack_105 (*(char (*)[241])(frame + 267))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047c88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10047c88(char *param_1)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047d9c;
  local_1fe[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,param_1,acStack_105);
  if (iVar2 == 0) goto LAB_10047d9c;
  iVar2 = recovered_10041140(acStack_105,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(local_1fe,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(local_1fe,0xf9,str_100537e8,(uint)acStack_105);
  }
  if (local_1fe[0] == '\0') goto LAB_10047d9c;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xd7;
    }
    if (_DAT_40010808 < 0xd7 || bVar3) goto LAB_10047d70;
    if (_DAT_400108d4 == (code *)0x0) goto LAB_10047d9c;
    iVar2 = (*_DAT_400108d4)(*(undefined4 *)(puVar1 + 0x14),local_1fe);
  }
  else {
LAB_10047d70:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x40)) ||
       (_DAT_4001083c == (code *)0x0)) goto LAB_10047d9c;
    iVar2 = (*_DAT_4001083c)(local_1fe);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047d9c:
  *DAT_10054038 = 2;
  return 0xffffffff;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef DAT_400108d4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c
#undef _DAT_400108d4
#undef str_100537e1
#undef str_100537e8
#undef local_1fe
#undef acStack_105

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef DAT_400108d4
#define DAT_400108d4 (*(uint8_t *)(0x400108d4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#undef _DAT_400108d4
#define _DAT_400108d4 (*(code * *)(0x400108d4U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_105 (*(char (*)[241])(frame + 267))
#define acStack_1fe (*(char (*)[249])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047df8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10047df8(char *param_1)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047d9c;
  acStack_1fe[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,param_1,acStack_105);
  if (iVar2 == 0) goto LAB_10047d9c;
  iVar2 = recovered_10041140(acStack_105,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(acStack_1fe,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(acStack_1fe,0xf9,str_100537e8,(uint)acStack_105);
  }
  if (acStack_1fe[0] == '\0') goto LAB_10047d9c;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xd7;
    }
    if (_DAT_40010808 < 0xd7 || bVar3) goto LAB_10047d70;
    if (_DAT_400108d4 == (code *)0x0) goto LAB_10047d9c;
    iVar2 = (*_DAT_400108d4)(*(undefined4 *)(puVar1 + 0x14),acStack_1fe);
  }
  else {
LAB_10047d70:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x40)) ||
       (_DAT_4001083c == (code *)0x0)) goto LAB_10047d9c;
    iVar2 = (*_DAT_4001083c)(acStack_1fe);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047d9c:
  *DAT_10054038 = 2;
  return 0xffffffff;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef DAT_400108d4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c
#undef _DAT_400108d4
#undef str_100537e1
#undef str_100537e8
#undef acStack_105
#undef acStack_1fe

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010888
#define DAT_40010888 (*(uint8_t *)(0x40010888U))
#undef DAT_400108d8
#define DAT_400108d8 (*(uint8_t *)(0x400108d8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010888
#define _DAT_40010888 (*(code * *)(0x40010888U))
#undef _DAT_400108d8
#define _DAT_400108d8 (*(code * *)(0x400108d8U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_109 (*(char (*)[241])(frame + 519))
#define local_2fb (*(char (*)[249])(frame + 21))
#define local_202 (*(char (*)[249])(frame + 270))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10047dfc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10047dfc(char *oldPath,char *newPath)

{
  unsigned char frame[816] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047fb4;
  local_202[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,oldPath,acStack_109);
  if (iVar2 == 0) goto LAB_10047fb4;
  iVar2 = recovered_10041140(acStack_109,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(local_202,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(local_202,0xf9,str_100537e8,(uint)acStack_109);
  }
  if (local_202[0] == '\0') goto LAB_10047fb4;
  local_2fb[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,newPath,acStack_109);
  if (iVar2 == 0) goto LAB_10047fb4;
  iVar2 = recovered_10041140(acStack_109,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(local_2fb,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(local_2fb,0xf9,str_100537e8,(uint)acStack_109);
  }
  if (local_2fb[0] == '\0') goto LAB_10047fb4;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xdb;
    }
    if (_DAT_40010808 < 0xdb || bVar3) goto LAB_10047f88;
    if (_DAT_400108d8 == (code *)0x0) goto LAB_10047fb4;
    iVar2 = (*_DAT_400108d8)(*(undefined4 *)(puVar1 + 0x14),local_202,local_2fb);
  }
  else {
LAB_10047f88:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x8c)) ||
       (_DAT_40010888 == (code *)0x0)) goto LAB_10047fb4;
    iVar2 = (*_DAT_40010888)(local_202,local_2fb);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047fb4:
  *DAT_10054038 = 5;
  return -1;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010888
#undef DAT_400108d8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010888
#undef _DAT_400108d8
#undef str_100537e1
#undef str_100537e8
#undef acStack_109
#undef local_2fb
#undef local_202

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010888
#define DAT_40010888 (*(uint8_t *)(0x40010888U))
#undef DAT_400108d8
#define DAT_400108d8 (*(uint8_t *)(0x400108d8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010888
#define _DAT_40010888 (*(code * *)(0x40010888U))
#undef _DAT_400108d8
#define _DAT_400108d8 (*(code * *)(0x400108d8U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_109 (*(char (*)[241])(frame + 519))
#define acStack_202 (*(char (*)[249])(frame + 270))
#define acStack_2fb (*(char (*)[249])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004801c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1004801c(char *oldPath,char *newPath)

{
  unsigned char frame[816] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047fb4;
  acStack_202[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,oldPath,acStack_109);
  if (iVar2 == 0) goto LAB_10047fb4;
  iVar2 = recovered_10041140(acStack_109,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(acStack_202,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(acStack_202,0xf9,str_100537e8,(uint)acStack_109);
  }
  if (acStack_202[0] == '\0') goto LAB_10047fb4;
  acStack_2fb[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,newPath,acStack_109);
  if (iVar2 == 0) goto LAB_10047fb4;
  iVar2 = recovered_10041140(acStack_109,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(acStack_2fb,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(acStack_2fb,0xf9,str_100537e8,(uint)acStack_109);
  }
  if (acStack_2fb[0] == '\0') goto LAB_10047fb4;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xdb;
    }
    if (_DAT_40010808 < 0xdb || bVar3) goto LAB_10047f88;
    if (_DAT_400108d8 == (code *)0x0) goto LAB_10047fb4;
    iVar2 = (*_DAT_400108d8)(*(undefined4 *)(puVar1 + 0x14),acStack_202,acStack_2fb);
  }
  else {
LAB_10047f88:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x8c)) ||
       (_DAT_40010888 == (code *)0x0)) goto LAB_10047fb4;
    iVar2 = (*_DAT_40010888)(acStack_202,acStack_2fb);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047fb4:
  *DAT_10054038 = 5;
  return -1;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010888
#undef DAT_400108d8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010888
#undef _DAT_400108d8
#undef str_100537e1
#undef str_100537e8
#undef acStack_109
#undef acStack_202
#undef acStack_2fb

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100539dc
#define DAT_100539dc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cd4U)))
#undef DAT_100539e2
#define DAT_100539e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdaU)))
#undef DAT_100539e5
#define DAT_100539e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cddU)))
#undef DAT_100539e7
#define DAT_100539e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1cdfU)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define auStack_80 (*(undefined1 (*)[108])(frame + 16))
#define acStack_14 (*(char (*)[4])(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048020
 */

undefined4 recovered_10048020(char *param_1,uint param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  undefined1 *vararg0;

  if (((param_2 & 0xa00) == 0xa00) &&
     (iVar1 = recovered_10048130((int)param_1,auStack_80), iVar1 == 0)) {
    *DAT_10054038 = 0x11;
  }
  else {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 1) == 0) {
        vararg0 = &DAT_100539e7;
      }
      else {
        vararg0 = (char *)(pf_module_state+0xd63U);
        if ((param_2 & 8) == 0) {
          vararg0 = &DAT_100539e5;
        }
      }
    }
    else {
      vararg0 = (undefined1 *)((uintptr_t)pf_module_state + 0x1cd7U);
      if ((param_2 & 0x400) == 0) {
        vararg0 = &DAT_100539e2;
      }
      if ((param_2 & 8) != 0) {
        vararg0 = &DAT_100539dc;
      }
    }
    pf_varargs_10043634__4_(acStack_14,4,&DAT_10051d2c,(uint)vararg0);
    pvVar2 = recovered_10044c70(param_1,acStack_14);
    if (pvVar2 != (void *)0x0) {
      return *(undefined4 *)((int)pvVar2 + 0xc);
    }
  }
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_100539dc
#undef DAT_100539e2
#undef DAT_100539e5
#undef DAT_100539e7
#undef DAT_10054038
#undef auStack_80
#undef acStack_14

#undef DAT_100482e0
#define DAT_100482e0 (*(uint64_t *)(0x100482e0U))
#undef DAT_100482e8
#define DAT_100482e8 (*(uint64_t *)(0x100482e8U))
#undef DAT_100482f0
#define DAT_100482f0 (*(uint64_t *)(0x100482f0U))
#undef DAT_100482f8
#define DAT_100482f8 (*(uint64_t *)(0x100482f8U))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_30 (*(uint *)(frame + 16))
#define auStack_2c (*(undefined1 (*)[4])(frame + 20))
#define local_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048130
 */

undefined4 recovered_10048130(int param_1,void *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  puVar3 = recovered_10044f7c();
  local_30 = 0;
  if ((param_2 == (void *)0x0 || param_1 == 0) || (puVar3 == (undefined *)0x0)) {
    uVar5 = 0x16;
LAB_10048174:
    uVar6 = 0xffffffff;
    *DAT_10054038 = uVar5;
  }
  else {
    uVar6 = 0;
    recovered_10040818(auStack_2c,0,0xc);
    iVar4 = recovered_10048aec((int)puVar3,(char *)param_1,(int)auStack_2c);
    if (iVar4 == 0) {
      iVar4 = recovered_10048c44((int)puVar3,(char *)param_1,(uint *)0x0,(uint *)0x0,&local_30);
      if (iVar4 == 0) {
        uVar5 = 2;
        goto LAB_10048174;
      }
      recovered_10040818(param_2,0,0x6c);
      uVar2 = (0x3e8000003e8U);
      uVar1 = (0x1000041edU);
      uVar5 = *(undefined4 *)((int)param_2 + 0x38);
      *(undefined4 *)((int)param_2 + 0x3c) = *(undefined4 *)((int)param_2 + 0x30);
      *(undefined4 *)((int)param_2 + 0x44) = *(undefined4 *)((int)param_2 + 0x34);
      *(undefined8 *)((int)param_2 + 8) = uVar1;
      *(undefined8 *)((int)param_2 + 0x10) = uVar2;
      *(undefined4 *)((int)param_2 + 0x2c) = 0;
      *(undefined4 *)((int)param_2 + 0x28) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0x1000;
      *(undefined4 *)((int)param_2 + 0x20) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
    }
    else {
      recovered_10040818(param_2,0,0x6c);
      uVar2 = (0x3e8000003e8U);
      uVar1 = (0x1000081a4U);
      *(undefined4 *)((int)param_2 + 0x3c) = *(undefined4 *)((int)param_2 + 0x30);
      *(undefined4 *)((int)param_2 + 0x44) = *(undefined4 *)((int)param_2 + 0x34);
      *(undefined8 *)((int)param_2 + 8) = uVar1;
      *(undefined8 *)((int)param_2 + 0x10) = uVar2;
      uVar5 = *(undefined4 *)((int)param_2 + 0x38);
      *(undefined4 *)((int)param_2 + 0x2c) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0x1000;
      *(undefined4 *)((int)param_2 + 0x20) = 0;
      *(int *)((int)param_2 + 0x1c) = local_28;
      *(uint *)((int)param_2 + 0x28) = local_28 + 0x1ffU >> 9;
    }
    *(undefined4 *)((int)param_2 + 0x4c) = uVar5;
    *(undefined8 *)((int)param_2 + 0x54) = *(undefined8 *)((int)param_2 + 0x3c);
    *(undefined8 *)((int)param_2 + 0x5c) = *(undefined8 *)((int)param_2 + 0x44);
    *(undefined4 *)((int)param_2 + 0x68) = *(undefined4 *)((int)param_2 + 0x50);
    *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)((int)param_2 + 0x4c);
  }
  return uVar6;
}

#undef DAT_100482e0
#undef DAT_100482e8
#undef DAT_100482f0
#undef DAT_100482f8
#undef DAT_10054038
#undef local_30
#undef auStack_2c
#undef local_28

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#define acStack_14 (*(char (*)[4])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048300
 */

undefined4 recovered_10048300(char *param_1)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined4 uVar2;

  pf_varargs_10043634__4_(acStack_14,4,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1cddU));
  pvVar1 = recovered_10044c70(param_1,acStack_14);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  return uVar2;
}

#undef DAT_10051d2c
#undef acStack_14

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048358
 */

ulonglong recovered_10048358(uint param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *stream;

  if (((param_1 < 0x20) && (stream = (int *)(&DAT_100544e0)[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    uVar1 = recovered_10045f84(param_2,1,param_3,stream);
    return (ulonglong)uVar1;
  }
  *DAT_10054038 = 9;
  return 0xffffffffffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100483c8
 */

ulonglong recovered_100483c8(uint param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *stream;

  if (((param_1 < 0x20) && (stream = (int *)(&DAT_100544e0)[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    uVar1 = recovered_10046204(param_2,1,param_3,stream);
    return (ulonglong)uVar1;
  }
  *DAT_10054038 = 9;
  return 0xffffffffffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005427c
#define DAT_1005427c (*(int * *)(((uintptr_t)pf_module_state + 0x2574U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(int * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(int * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048438
 */

undefined4 recovered_10048438(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *destination;

  if (((0x1f < param_1) ||
      (destination = (int *)(&DAT_100544e0)[param_1], destination == (int *)0x0)) ||
     (*destination != 0x54474c46)) {
    *DAT_10054038 = 9;
    return 0xffffffff;
  }
  puVar1 = recovered_10044f7c();
  if (*destination == 0x54474c46) {
    uVar2 = 0;
    if ((destination[1] - 1U < 3) || (*(char *)((int)destination + 0x12) != '\x01'))
    goto LAB_1004850c;
    if ((puVar1 != (undefined *)0x0) &&
       (iVar3 = recovered_10045c8c((int)puVar1,(char *)(destination + 6),destination[0x45],
                                   destination[0x46]), iVar3 != 0)) {
      uVar2 = 0;
      *(undefined1 *)((int)destination + 0x12) = 0;
      goto LAB_1004850c;
    }
    *(undefined1 *)((int)destination + 0x11) = 1;
    uVar2 = 5;
  }
  else {
    uVar2 = 9;
  }
  *DAT_10054038 = uVar2;
  uVar2 = 0xffffffff;
LAB_1004850c:
  if ((uint)destination[3] < 0x20) {
    (&DAT_100544e0)[destination[3]] = 0;
  }
  if (((DAT_1005427c != destination) && (DAT_100543a4 != destination)) &&
     (DAT_100544cc != destination)) {
    recovered_1003ffe4((void *)destination[0x45]);
    recovered_10040818(destination,0,0x124);
    recovered_1003ffe4(destination);
  }
  return uVar2;
}

#undef DAT_10054038
#undef DAT_1005427c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100485a4
 */

void recovered_100485a4(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *piVar2;

  if (((0x1f < param_1) || (piVar2 = (int *)(&DAT_100544e0)[param_1], piVar2 == (int *)0x0)) ||
     (*piVar2 != 0x54474c46)) {
    return;
  }
  uVar1 = 0;
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar1 = piVar2[0x44];
      if ((uint)piVar2[0x44] < (uint)piVar2[0x46]) {
        uVar1 = piVar2[0x46];
      }
    }
    else {
      if (param_4 != 1) goto LAB_1004862c;
      uVar1 = piVar2[0x48];
    }
  }
  if ((param_2 < 0x80000000) || (-param_2 <= uVar1)) {
    piVar2[5] = -1;
    *(undefined1 *)(piVar2 + 4) = 0;
    piVar2[0x48] = uVar1 + param_2;
    return;
  }
LAB_1004862c:
  *DAT_10054038 = 0x16;
  return;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048664
 */

undefined4 recovered_10048664(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  int iVar1;
  ulong size;
  uint uVar2;
  void *destination_00;
  undefined4 uVar3;
  int *source;

  if (((0x1f < param_1) || (source = (int *)(&DAT_100544e0)[param_1], source == (int *)0x0)) ||
     (*source != 0x54474c46)) {
    uVar3 = 9;
    goto LAB_10048724;
  }
  destination = recovered_1003ff90(0x124);
  if (destination == (void *)0x0) {
LAB_10048758:
    uVar3 = 0xc;
  }
  else {
    recovered_10040088(destination,source,0x124);
    iVar1 = source[0x45];
    *(undefined4 *)((int)destination + 0xc) = 0xffffffff;
    size = 0;
    if (iVar1 != 0) {
      size = source[0x47];
    }
    if (iVar1 != 0 && size != 0) {
      destination_00 = recovered_1003ff90(size);
      *(void **)((int)destination + 0x114) = destination_00;
      if (destination_00 == (void *)0x0) {
        recovered_1003ffe4(destination);
        goto LAB_10048758;
      }
      recovered_10040088(destination_00,(void *)source[0x45],source[0x47]);
    }
    uVar2 = recovered_1004553c((int)destination);
    if (uVar2 < 0x80000000) {
      return *(undefined4 *)((int)destination + 0xc);
    }
    recovered_1003ffe4(*(void **)((int)destination + 0x114));
    recovered_1003ffe4(destination);
    uVar3 = 0x18;
  }
LAB_10048724:
  *DAT_10054038 = uVar3;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004876c
 */

uint recovered_1004876c(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  int iVar1;
  ulong size;
  void *destination_00;
  undefined4 uVar2;
  int *source;

  if ((((param_1 < 0x20) && (source = (int *)(&DAT_100544e0)[param_1], source != (int *)0x0)) &&
      (param_2 < 0x20)) && (*source == 0x54474c46)) {
    if (param_1 == param_2) {
      return param_1;
    }
    if (param_2 < 3) {
      (&DAT_100544e0)[param_2] = source;
      return param_2;
    }
    if ((((&DAT_100544e0)[param_2] == 0) || (recovered_10048438(param_2), *source == 0x54474c46)) &&
       (destination = recovered_1003ff90(0x124), destination != (void *)0x0)) {
      recovered_10040088(destination,source,0x124);
      iVar1 = source[0x45];
      *(undefined4 *)((int)destination + 0xc) = 0xffffffff;
      size = 0;
      if (iVar1 != 0) {
        size = source[0x47];
      }
      if (iVar1 == 0 || size == 0) {
LAB_1004885c:
        (&DAT_100544e0)[param_2] = destination;
        *(uint *)((int)destination + 0xc) = param_2;
        return param_2;
      }
      destination_00 = recovered_1003ff90(size);
      *(void **)((int)destination + 0x114) = destination_00;
      if (destination_00 != (void *)0x0) {
        recovered_10040088(destination_00,(void *)source[0x45],source[0x47]);
        goto LAB_1004885c;
      }
      recovered_1003ffe4(destination);
    }
    uVar2 = 0xc;
  }
  else {
    uVar2 = 9;
  }
  *DAT_10054038 = uVar2;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100488ac
 */

undefined4 recovered_100488ac(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100488d8
 */

undefined4 recovered_100488d8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x2f;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100488f4
 */

undefined4 recovered_100488f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048910
 */

undefined4 recovered_10048910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004892c
 */

undefined4 recovered_1004892c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048948
 */

undefined4 recovered_10048948(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048964
 */

undefined4 recovered_10048964(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048980
 */

undefined4 recovered_10048980(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004899c
 */

undefined8 recovered_1004899c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100489bc
 */

undefined8 recovered_100489bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffffffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100489dc
 */

uint recovered_100489dc(uint param_1,undefined4 param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  int *piVar3;

  if (((param_1 < 0x20) && (piVar3 = (int *)(&DAT_100544e0)[param_1], piVar3 != (int *)0x0)) &&
     (*piVar3 == 0x54474c46)) {
    uVar1 = 0;
    switch((uintptr_t)(param_2)) {
    case 0:
      uVar1 = recovered_10048664(param_1);
      break;
    case 1:
    case 2:
    case 4:
    case 8:
    case 9:
      break;
    case 3:
      uVar1 = piVar3[2] & 2;
      break;
    case 7:
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(undefined2 *)(param_3 + 0x14) = 2;
        return 0;
      }
    default:
      uVar2 = 0x16;
      goto LAB_10048a88;
    }
  }
  else {
    uVar2 = 9;
LAB_10048a88:
    *DAT_10054038 = uVar2;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_400108c8
#define DAT_400108c8 (*(uint8_t *)(0x400108c8U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_400108c8
#define _DAT_400108c8 (*(code * *)(0x400108c8U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define local_202 (*(char (*)[249])(frame + 30))
#define acStack_109 (*(char (*)[241])(frame + 279))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048aec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10048aec(int param_1,char *param_2,int param_3)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    return 0;
  }
  local_202[0] = '\0';
  iVar1 = recovered_10045234(param_1,param_2,acStack_109);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = recovered_10041140(acStack_109,&DAT_10051d2f);
  if (iVar1 == 0) {
    pf_varargs_10043634___(local_202,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(local_202,0xf9,str_100537e8,(uint)acStack_109);
  }
  if (local_202[0] == '\0') {
    return 0;
  }
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xcb;
    }
    if (0xca < _DAT_40010808 && !bVar3) {
      if (_DAT_400108c8 == (code *)0x0) {
        return 0;
      }
      uVar2 = (*_DAT_400108c8)(*(undefined4 *)(param_1 + 0x14),local_202);
      return uVar2;
    }
  }
  if (_DAT_40010800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_40010804 == 0) {
    return 0;
  }
  if (_DAT_40010808 < 0x38) {
    return 0;
  }
  if (_DAT_40010834 == (code *)0x0) {
    return 0;
  }
  uVar2 = (*_DAT_40010834)(local_202,param_3);
  return uVar2;
}

#undef DAT_10051d2f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_400108c8
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_400108c8
#undef str_100537e1
#undef str_100537e8
#undef local_202
#undef acStack_109

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010884
#define DAT_40010884 (*(uint8_t *)(0x40010884U))
#undef DAT_400108cc
#define DAT_400108cc (*(uint8_t *)(0x400108ccU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010884
#define _DAT_40010884 (*(uint8_t * *)(0x40010884U))
#undef _DAT_400108cc
#define _DAT_400108cc (*(uint8_t * *)(0x400108ccU))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define local_21c (*(uint * *)(frame + 20))
#define local_214 (*(uint *)(frame + 28))
#define local_20e (*(uint (*)[62])(frame + 34))
#define acStack_115 (*(char (*)[245])(frame + 283))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048c44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10048c44(int param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  code *pcVar11;
  uint *puVar12;
  char *pcVar13;
  bool bVar14;

  uVar9 = 0;
  local_214 = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    return 0;
  }
  PF_PART1(local_20e[0], 0) = '\0';
  iVar3 = recovered_10045234(param_1,param_2,acStack_115);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = recovered_10041140(acStack_115,&DAT_10051d2f);
  if (iVar3 == 0) {
    pf_varargs_10043634___((char *)local_20e,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_((char *)local_20e,0xf9,str_100537e8,(uint)acStack_115);
  }
  if ((char)local_20e[0] == '\0') {
    return 0;
  }
  puVar10 = &local_214;
  if (param_5 != (uint *)0x0) {
    puVar10 = param_5;
  }
  puVar4 = *(uint **)(param_1 + 0x14);
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar14 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar14 = _DAT_40010808 == 0xcf;
    }
    if (0xce < _DAT_40010808 && !bVar14) {
      if (_DAT_400108cc == (code *)0x0) {
        return 0;
      }
      puVar12 = local_20e;
      puVar7 = param_3;
      puVar8 = param_4;
      pcVar11 = _DAT_400108cc;
      goto LAB_10048dc0;
    }
  }
  if (_DAT_40010800 != 0x50414d57) {
    return 0;
  }
  if (_DAT_40010804 == 0) {
    return 0;
  }
  if (_DAT_40010808 < 0x88) {
    return 0;
  }
  if (_DAT_40010884 == (code *)0x0) {
    return 0;
  }
  puVar4 = local_20e;
  puVar12 = param_3;
  puVar7 = param_4;
  puVar8 = puVar10;
  pcVar11 = _DAT_40010884;
LAB_10048dc0:
  iVar3 = (*pcVar11)(puVar4,puVar12,puVar7,puVar8);
  if ((iVar3 != 0) && (uVar9 = 1, param_3 != (uint *)0x0 && param_4 != (uint *)0x0)) {
    puVar4 = (uint *)*puVar10;
    if (puVar4 < param_4) {
      param_4 = puVar4;
    }
    if (puVar4 == (uint *)0x0) {
      local_21c = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)0x0;
      local_21c = (uint *)0x0;
      do {
        pcVar13 = (char *)((int)(param_3 + (int)puVar4 * 0x7e) + 0xf1);
        cVar2 = *pcVar13;
        if (cVar2 != '\0') {
          for (puVar12 = local_20e; (char)*puVar12 == '/' || (char)*puVar12 == '\\';
              puVar12 = (uint *)((int)puVar12 + 1)) {
          }
          while (cVar2 == '\\' || cVar2 == '/') {
            pcVar13 = pcVar13 + 1;
            cVar2 = *pcVar13;
          }
          uVar5 = recovered_10041118((char *)puVar12);
          if (uVar5 != 0) {
            uVar6 = 0;
            do {
              cVar2 = *(char *)((int)puVar12 + uVar6);
              cVar1 = pcVar13[uVar6];
              if ((cVar1 != cVar2) || (cVar1 == '\0' || cVar2 == '\0')) {
                if (cVar1 != cVar2) goto LAB_10048e08;
                break;
              }
              uVar6 = uVar6 + 1;
            } while (uVar5 != uVar6);
            if (pcVar13[uVar5] != '\\' && pcVar13[uVar5] != '/') goto LAB_10048e08;
            pcVar13 = pcVar13 + uVar5 + 1;
          }
          cVar2 = *pcVar13;
          if (cVar2 != '\0') {
            while (pcVar13 = pcVar13 + 1, cVar2 != '\0') {
              if (cVar2 == '/' || cVar2 == '\\') goto LAB_10048e08;
              cVar2 = *pcVar13;
            }
            if (local_21c != puVar4) {
              recovered_10040088(param_3 + (int)local_21c * 0x7e,param_3 + (int)puVar4 * 0x7e,0x1f8)
              ;
            }
            local_21c = (uint *)((int)local_21c + 1);
          }
        }
LAB_10048e08:
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (puVar4 != param_4);
    }
    *puVar10 = (uint)local_21c;
  }
  return uVar9;
}

#undef DAT_10051d2f
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010884
#undef DAT_400108cc
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010884
#undef _DAT_400108cc
#undef str_100537e1
#undef str_100537e8
#undef local_21c
#undef local_214
#undef local_20e
#undef acStack_115

#undef DAT_100482e0
#define DAT_100482e0 (*(uint64_t *)(0x100482e0U))
#undef DAT_100482e8
#define DAT_100482e8 (*(uint64_t *)(0x100482e8U))
#undef DAT_100482f0
#define DAT_100482f0 (*(uint64_t *)(0x100482f0U))
#undef DAT_100482f8
#define DAT_100482f8 (*(uint64_t *)(0x100482f8U))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define uStack_30 (*(uint *)(frame + 16))
#define auStack_2c (*(undefined1 (*)[4])(frame + 20))
#define iStack_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f3c
 */

undefined4 recovered_10048f3c(int param_1,void *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  puVar3 = recovered_10044f7c();
  uStack_30 = 0;
  if ((param_2 == (void *)0x0 || param_1 == 0) || (puVar3 == (undefined *)0x0)) {
    uVar5 = 0x16;
LAB_10048174:
    uVar6 = 0xffffffff;
    *DAT_10054038 = uVar5;
  }
  else {
    uVar6 = 0;
    recovered_10040818(auStack_2c,0,0xc);
    iVar4 = recovered_10048aec((int)puVar3,(char *)param_1,(int)auStack_2c);
    if (iVar4 == 0) {
      iVar4 = recovered_10048c44((int)puVar3,(char *)param_1,(uint *)0x0,(uint *)0x0,&uStack_30);
      if (iVar4 == 0) {
        uVar5 = 2;
        goto LAB_10048174;
      }
      recovered_10040818(param_2,0,0x6c);
      uVar2 = (0x3e8000003e8U);
      uVar1 = (0x1000041edU);
      uVar5 = *(undefined4 *)((int)param_2 + 0x38);
      *(undefined4 *)((int)param_2 + 0x3c) = *(undefined4 *)((int)param_2 + 0x30);
      *(undefined4 *)((int)param_2 + 0x44) = *(undefined4 *)((int)param_2 + 0x34);
      *(undefined8 *)((int)param_2 + 8) = uVar1;
      *(undefined8 *)((int)param_2 + 0x10) = uVar2;
      *(undefined4 *)((int)param_2 + 0x2c) = 0;
      *(undefined4 *)((int)param_2 + 0x28) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0x1000;
      *(undefined4 *)((int)param_2 + 0x20) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
    }
    else {
      recovered_10040818(param_2,0,0x6c);
      uVar2 = (0x3e8000003e8U);
      uVar1 = (0x1000081a4U);
      *(undefined4 *)((int)param_2 + 0x3c) = *(undefined4 *)((int)param_2 + 0x30);
      *(undefined4 *)((int)param_2 + 0x44) = *(undefined4 *)((int)param_2 + 0x34);
      *(undefined8 *)((int)param_2 + 8) = uVar1;
      *(undefined8 *)((int)param_2 + 0x10) = uVar2;
      uVar5 = *(undefined4 *)((int)param_2 + 0x38);
      *(undefined4 *)((int)param_2 + 0x2c) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0x1000;
      *(undefined4 *)((int)param_2 + 0x20) = 0;
      *(int *)((int)param_2 + 0x1c) = iStack_28;
      *(uint *)((int)param_2 + 0x28) = iStack_28 + 0x1ffU >> 9;
    }
    *(undefined4 *)((int)param_2 + 0x4c) = uVar5;
    *(undefined8 *)((int)param_2 + 0x54) = *(undefined8 *)((int)param_2 + 0x3c);
    *(undefined8 *)((int)param_2 + 0x5c) = *(undefined8 *)((int)param_2 + 0x44);
    *(undefined4 *)((int)param_2 + 0x68) = *(undefined4 *)((int)param_2 + 0x50);
    *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)((int)param_2 + 0x4c);
  }
  return uVar6;
}

#undef DAT_100482e0
#undef DAT_100482e8
#undef DAT_100482f0
#undef DAT_100482f8
#undef DAT_10054038
#undef uStack_30
#undef auStack_2c
#undef iStack_28

#undef DAT_10049050
#define DAT_10049050 (*(uint64_t *)(0x10049050U))
#undef DAT_10049058
#define DAT_10049058 (*(uint64_t *)(0x10049058U))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10048f40
 */

undefined4 recovered_10048f40(uint param_1,void *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;

  if (((0x1f < param_1) ||
      (piVar3 = (int *)(&DAT_100544e0)[param_1], piVar3 == (int *)0x0 || param_2 == (void *)0x0)) ||
     (*piVar3 != 0x54474c46)) {
    *DAT_10054038 = 9;
    return 0xffffffff;
  }
  uVar4 = piVar3[0x44];
  uVar5 = piVar3[0x46];
  recovered_10040818(param_2,0,0x6c);
  uVar2 = (0x3e8000003e8U);
  uVar1 = (0x1000081a4U);
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  *(undefined4 *)((int)param_2 + 0x3c) = *(undefined4 *)((int)param_2 + 0x30);
  *(undefined4 *)((int)param_2 + 0x44) = *(undefined4 *)((int)param_2 + 0x34);
  *(undefined8 *)((int)param_2 + 8) = uVar1;
  *(undefined8 *)((int)param_2 + 0x10) = uVar2;
  *(undefined4 *)((int)param_2 + 0x24) = 0x1000;
  *(uint *)((int)param_2 + 0x28) = uVar4 + 0x1ff >> 9;
  *(undefined4 *)((int)param_2 + 0x4c) = *(undefined4 *)((int)param_2 + 0x38);
  *(undefined8 *)((int)param_2 + 0x54) = *(undefined8 *)((int)param_2 + 0x3c);
  *(undefined8 *)((int)param_2 + 0x5c) = *(undefined8 *)((int)param_2 + 0x44);
  *(undefined4 *)((int)param_2 + 0x20) = 0;
  *(uint *)((int)param_2 + 0x1c) = uVar4;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(undefined4 *)((int)param_2 + 0x68) = *(undefined4 *)((int)param_2 + 0x50);
  *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)((int)param_2 + 0x4c);
  return 0;
}

#undef DAT_10049050
#undef DAT_10049058
#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10049130
#define DAT_10049130 (*(uint64_t *)(0x10049130U))
#undef DAT_10049138
#define DAT_10049138 (*(uint64_t *)(0x10049138U))
#undef DAT_10049140
#define DAT_10049140 (*(uint64_t *)(0x10049140U))
#undef DAT_10049148
#define DAT_10049148 (*(uint64_t *)(0x10049148U))
#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef str_100521c4
#define str_100521c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_100521ca
#define str_100521ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049060
 */

undefined4 recovered_10049060(int param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  if (param_1 == 0 || param_2 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  recovered_10040818(param_2,0,0x850);
  uVar3 = (0x20000U);
  uVar2 = (0x10000U);
  uVar1 = (0x20000U);
  *(undefined8 *)(param_2 + 2) = (0x40000U);
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 6) = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  param_2[1] = 0x1000;
  *param_2 = 0x1000;
  param_2[0xf] = 0x1000;
  param_2[10] = 0x8000;
  param_2[0xb] = 0;
  recovered_10040088(param_2 + 0x10,str_100521c4,6);
  recovered_10040088(param_2 + 0x14,&DAT_10051d2f,2);
  recovered_10040088(param_2 + 0x114,str_100521ca,0xb);
  return 0;
}

#undef DAT_10049130
#undef DAT_10049138
#undef DAT_10049140
#undef DAT_10049148
#undef DAT_10051d2f
#undef DAT_10054038
#undef str_100521c4
#undef str_100521ca

#undef DAT_10049250
#define DAT_10049250 (*(uint64_t *)(0x10049250U))
#undef DAT_10049258
#define DAT_10049258 (*(uint64_t *)(0x10049258U))
#undef DAT_10049260
#define DAT_10049260 (*(uint64_t *)(0x10049260U))
#undef DAT_10049268
#define DAT_10049268 (*(uint64_t *)(0x10049268U))
#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
#undef str_100521c4
#define str_100521c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4bcU)))
#undef str_100521ca
#define str_100521ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049150
 */

undefined4 recovered_10049150(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  if (((param_1 < 0x20) &&
      ((int *)(&DAT_100544e0)[param_1] != (int *)0x0 && param_2 != (undefined4 *)0x0)) &&
     (*(int *)(&DAT_100544e0)[param_1] == 0x54474c46)) {
    recovered_10040818(param_2,0,0x850);
    uVar3 = (0x20000U);
    uVar2 = (0x10000U);
    uVar1 = (0x20000U);
    *(undefined8 *)(param_2 + 2) = (0x40000U);
    *(undefined8 *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 6) = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    param_2[1] = 0x1000;
    *param_2 = 0x1000;
    param_2[0xf] = 0x1000;
    param_2[10] = 0x8000;
    param_2[0xb] = 0;
    recovered_10040088(param_2 + 0x10,str_100521c4,6);
    recovered_10040088(param_2 + 0x14,&DAT_10051d2f,2);
    recovered_10040088(param_2 + 0x114,str_100521ca,0xb);
    return 0;
  }
  *DAT_10054038 = 9;
  return 0xffffffff;
}

#undef DAT_10049250
#undef DAT_10049258
#undef DAT_10049260
#undef DAT_10049268
#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_100544e0
#undef str_100521c4
#undef str_100521ca

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001088c
#define DAT_4001088c (*(uint8_t *)(0x4001088cU))
#undef DAT_400108dc
#define DAT_400108dc (*(uint8_t *)(0x400108dcU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001088c
#define _DAT_4001088c (*(code * *)(0x4001088cU))
#undef _DAT_400108dc
#define _DAT_400108dc (*(code * *)(0x400108dcU))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_105 (*(char (*)[241])(frame + 267))
#define local_1fe (*(char (*)[249])(frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10049270(char *param_1)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10049384;
  local_1fe[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,param_1,acStack_105);
  if (iVar2 == 0) goto LAB_10049384;
  iVar2 = recovered_10041140(acStack_105,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(local_1fe,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(local_1fe,0xf9,str_100537e8,(uint)acStack_105);
  }
  if (local_1fe[0] == '\0') goto LAB_10049384;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xdf;
    }
    if (_DAT_40010808 < 0xdf || bVar3) goto LAB_10049358;
    if (_DAT_400108dc == (code *)0x0) goto LAB_10049384;
    iVar2 = (*_DAT_400108dc)(*(undefined4 *)(puVar1 + 0x14),local_1fe);
  }
  else {
LAB_10049358:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x90)) ||
       (_DAT_4001088c == (code *)0x0)) goto LAB_10049384;
    iVar2 = (*_DAT_4001088c)(local_1fe);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10049384:
  *DAT_10054038 = 5;
  return 0xffffffff;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001088c
#undef DAT_400108dc
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001088c
#undef _DAT_400108dc
#undef str_100537e1
#undef str_100537e8
#undef acStack_105
#undef local_1fe

#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef DAT_400108d4
#define DAT_400108d4 (*(uint8_t *)(0x400108d4U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#undef _DAT_400108d4
#define _DAT_400108d4 (*(code * *)(0x400108d4U))
#undef str_100537e1
#define str_100537e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef str_100537e8
#define str_100537e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ae0U)))
#define acStack_1fe (*(char (*)[249])(frame + 18))
#define acStack_105 (*(char (*)[241])(frame + 267))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100493e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100493e0(char *param_1)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = recovered_10044f7c();
  if ((puVar1 == (undefined *)0x0) || (*(int *)(puVar1 + 0x14) < 0)) goto LAB_10047d9c;
  acStack_1fe[0] = '\0';
  iVar2 = recovered_10045234((int)puVar1,param_1,acStack_105);
  if (iVar2 == 0) goto LAB_10047d9c;
  iVar2 = recovered_10041140(acStack_105,&DAT_10051d2f);
  if (iVar2 == 0) {
    pf_varargs_10043634___(acStack_1fe,0xf9,str_100537e1);
  }
  else {
    pf_varargs_10043634__4_(acStack_1fe,0xf9,str_100537e8,(uint)acStack_105);
  }
  if (acStack_1fe[0] == '\0') goto LAB_10047d9c;
  if ((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) {
    bVar3 = _DAT_40010808 == 0xc;
    if (0xb < _DAT_40010808) {
      bVar3 = _DAT_40010808 == 0xd7;
    }
    if (_DAT_40010808 < 0xd7 || bVar3) goto LAB_10047d70;
    if (_DAT_400108d4 == (code *)0x0) goto LAB_10047d9c;
    iVar2 = (*_DAT_400108d4)(*(undefined4 *)(puVar1 + 0x14),acStack_1fe);
  }
  else {
LAB_10047d70:
    if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x40)) ||
       (_DAT_4001083c == (code *)0x0)) goto LAB_10047d9c;
    iVar2 = (*_DAT_4001083c)(acStack_1fe);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_10047d9c:
  *DAT_10054038 = 2;
  return 0xffffffff;
}

#undef DAT_10051d2f
#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef DAT_400108d4
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c
#undef _DAT_400108d4
#undef str_100537e1
#undef str_100537e8
#undef acStack_1fe
#undef acStack_105

#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100493e4
 */

void recovered_100493e4(int param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  recovered_10048130(param_1,auStack_74);
  return;
}

#undef auStack_74

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049400
 */

undefined4 recovered_10049400(uint param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  if (((param_1 < 0x20) && ((int *)(&DAT_100544e0)[param_1] != (int *)0x0)) &&
     (*(int *)(&DAT_100544e0)[param_1] == 0x54474c46)) {
    recovered_10040818(auStack_74,0,0x6c);
    return 0;
  }
  *DAT_10054038 = 9;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0
#undef auStack_74

#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049478
 */

void recovered_10049478(int param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  recovered_10048130(param_1,auStack_74);
  return;
}

#undef auStack_74

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049494
 */

undefined4 recovered_10049494(uint param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  if (((param_1 < 0x20) && ((int *)(&DAT_100544e0)[param_1] != (int *)0x0)) &&
     (*(int *)(&DAT_100544e0)[param_1] == 0x54474c46)) {
    recovered_10040818(auStack_74,0,0x6c);
    return 0;
  }
  *DAT_10054038 = 9;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_100544e0
#undef auStack_74

#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004950c
 */

void recovered_1004950c(int param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  recovered_10048130(param_1,auStack_74);
  return;
}

#undef auStack_74

#undef DAT_100544d4
#define DAT_100544d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27ccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049528
 */

undefined4 recovered_10049528(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = DAT_100544d4;
  DAT_100544d4 = param_1;
  return uVar1;
}

#undef DAT_100544d4

#define auStack_74 (*(undefined1 (*)[108])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004954c
 */

void recovered_1004954c(int param_1)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};


  recovered_10048130(param_1,auStack_74);
  return;
}

#undef auStack_74

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_301 (*(char (*)[241])(frame + 31))
#define local_308 (*(uint *)(frame + 24))
#define auStack_210 (*(uint (*)[126])(frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049568
 */

undefined4 recovered_10049568(char *param_1)

{
  unsigned char frame[832] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;

  puVar1 = recovered_10044f7c();
  if (puVar1 != (undefined *)0x0) {
    local_308 = 0;
    iVar2 = recovered_10045234((int)puVar1,param_1,acStack_301);
    if ((iVar2 != 0) &&
       (iVar2 = recovered_10048c44((int)puVar1,acStack_301,auStack_210,(uint *)0x1,&local_308),
       iVar2 != 0)) {
      pf_varargs_10043634__4_(puVar1 + 0x924,0xf1,&DAT_10051d2c,(uint)acStack_301);
      pf_varargs_10043634__4_(puVar1 + 0x10d,0xf1,&DAT_10051d2c,(uint)acStack_301);
      return 0;
    }
  }
  *DAT_10054038 = 2;
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef acStack_301
#undef local_308
#undef auStack_210

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10051d2f
#define DAT_10051d2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004963c
 */

char * recovered_1004963c(char *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  char *text;
  ulong uVar2;
  undefined4 uVar3;

  puVar1 = recovered_10044f7c();
  if (puVar1 == (undefined *)0x0) {
    text = &DAT_10051d2f;
  }
  else {
    text = puVar1 + 0x924;
    if (*text == '\0') {
      text = &DAT_10051d2f;
    }
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    uVar3 = 0x16;
  }
  else {
    uVar2 = recovered_10041118(text);
    if (uVar2 + 1 <= param_2) {
      pf_varargs_10043634__4_(param_1,param_2,&DAT_10051d2c,(uint)text);
      return param_1;
    }
    uVar3 = 0x22;
  }
  *DAT_10054038 = uVar3;
  return (char *)0x0;
}

#undef DAT_10051d2c
#undef DAT_10051d2f
#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100496f4
 */

undefined8 recovered_100496f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x16;
  return 0xffffffffffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049714
 */

undefined4 recovered_10049714(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049730
 */

undefined4 recovered_10049730(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_218 (*(char (*)[247])(frame + 40))
#define acStack_121 (*(char (*)[241])(frame + 287))
#define local_228 (*(void * *)(frame + 24))
#define local_224 (*(uint *)(frame + 28))
#define local_21c (*(undefined4 *)(frame + 36))
#define local_30 (*(void * *)(frame + 528))
#define local_2c (*(uint *)(frame + 532))
#define local_28 (*(undefined4 *)(frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004974c
 */

undefined4 recovered_1004974c(int param_1,uint param_2,int param_3)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  void *destination;
  int iVar5;

  puVar2 = recovered_10044f7c();
  uVar3 = 0x16;
  if ((-1 < param_3) && (param_1 != 0 && puVar2 != (undefined *)0x0)) {
    uVar4 = param_2;
    if (param_2 < 2) {
      uVar4 = 1;
    }
    destination = recovered_1003ff90(uVar4);
    if (destination == (void *)0x0) {
      uVar3 = 0xc;
    }
    else {
      recovered_10040818(destination,0,param_2);
      recovered_10040818(&local_228,0,0x104);
      iVar5 = recovered_10045234((int)puVar2,(char *)param_1,acStack_121);
      if (iVar5 != 0) {
        recovered_10040818(&local_30,0,0xc);
        iVar5 = recovered_10048aec((int)puVar2,acStack_121,(int)&local_30);
        pvVar1 = (void *)0x0;
        if (iVar5 != 0) {
          pvVar1 = local_30;
        }
        if (iVar5 != 0 && pvVar1 != (void *)0x0) {
          local_224 = local_2c;
          local_21c = local_28;
          local_228 = pvVar1;
          pf_varargs_10043634__4_(acStack_218,0xf1,&DAT_10051d2c,(uint)acStack_121);
          uVar4 = param_2;
          if (local_224 < param_2) {
            uVar4 = local_224;
          }
          if (uVar4 != 0) {
            recovered_10040088(destination,local_228,uVar4);
          }
        }
      }
      iVar5 = recovered_10045c8c((int)puVar2,(char *)param_1,(int)destination,param_2);
      recovered_1003ffe4(destination);
      if (iVar5 != 0) {
        return 0;
      }
      uVar3 = 5;
    }
  }
  *DAT_10054038 = uVar3;
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef acStack_218
#undef acStack_121
#undef local_228
#undef local_224
#undef local_21c
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100498cc
 */

int recovered_100498cc(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint size;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *stream;

  if ((((param_1 < 0x20) && (stream = (int *)(&DAT_100544e0)[param_1], stream != (int *)0x0)) &&
      (-1 < param_3)) && (*stream == 0x54474c46)) {
    if ((*(byte *)(stream + 2) & 2) != 0) {
      uVar1 = stream[0x47];
      if (uVar1 < param_2) {
        if (uVar1 == 0) {
          uVar1 = 0x100;
        }
        do {
          size = uVar1;
          uVar1 = size << 1;
        } while (size < param_2);
        pvVar2 = recovered_10040034((void *)stream[0x45],size);
        if (pvVar2 == (void *)0x0) {
          *(undefined1 *)((int)stream + 0x11) = 1;
          uVar4 = 0xc;
          goto LAB_10049940;
        }
        stream[0x47] = size;
        stream[0x45] = (int)pvVar2;
      }
      uVar1 = stream[0x46];
      if (uVar1 < param_2) {
        recovered_10040818((void *)(stream[0x45] + uVar1),0,param_2 - uVar1);
      }
      stream[0x46] = param_2;
      *(undefined1 *)((int)stream + 0x12) = 1;
      if (param_2 < (uint)stream[0x48]) {
        stream[0x48] = param_2;
      }
      iVar3 = recovered_10045ba8(stream);
      return iVar3;
    }
    uVar4 = 0x16;
  }
  else {
    uVar4 = 9;
  }
LAB_10049940:
  *DAT_10054038 = uVar4;
  return -1;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100499fc
 */

int recovered_100499fc(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *stream;
  int iVar1;

  if (((param_1 < 0x20) && (stream = (int *)(&DAT_100544e0)[param_1], stream != (int *)0x0)) &&
     (*stream == 0x54474c46)) {
    iVar1 = recovered_10045ba8(stream);
    return iVar1;
  }
  *DAT_10054038 = 9;
  return -1;
}

#undef DAT_10054038
#undef DAT_100544e0

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define local_bd24 (*(uint *)(frame + 28))
#define auStack_bd20 (*(uint (*)[12096])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049a50
 */

uint * recovered_10049a50(char *param_1)

{
  unsigned char frame[48480] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  uint *destination;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *vararg0;
  uint uVar6;
  int iVar7;

  puVar1 = recovered_10044f7c();
  iVar7 = 0;
  local_bd24 = 0;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = 0x16;
  }
  else {
    vararg0 = auStack_bd20;
    iVar2 = recovered_10048c44((int)puVar1,param_1,vararg0,(uint *)0x60,&local_bd24);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      destination = recovered_1003ff90(0x6308);
      if (destination != (uint *)0x0) {
        recovered_10040818(destination,0,0x6308);
        if (0x60 < local_bd24) {
          local_bd24 = 0x60;
        }
        *destination = local_bd24;
        if (local_bd24 != 0) {
          uVar6 = 0;
          do {
            uVar5 = vararg0[0x7b];
            uVar6 = uVar6 + 1;
            uVar4 = 4;
            *(uint *)((int)destination + iVar7 + 8) = uVar6;
            if ((uVar5 != 2) && (uVar4 = 4, (vararg0[0x7a] & 2) == 0)) {
              uVar4 = 8;
            }
            *(undefined1 *)((int)destination + iVar7 + 0xc) = uVar4;
            pf_varargs_10043634__4_
                      ((char *)((int)destination + iVar7 + 0xd),0x100,&DAT_10051d2c,(uint)vararg0);
            iVar7 = iVar7 + 0x108;
            vararg0 = vararg0 + 0x7e;
          } while (uVar6 < local_bd24);
        }
        return destination;
      }
      uVar3 = 0xc;
    }
  }
  *DAT_10054038 = uVar3;
  return (uint *)0x0;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef local_bd24
#undef auStack_bd20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049b8c
 */

uint * recovered_10049b8c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;

  puVar1 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    uVar2 = param_1[1];
    if (*param_1 <= uVar2) {
      return (uint *)0x0;
    }
    param_1[1] = uVar2 + 1;
    puVar1 = param_1 + uVar2 * 0x42 + 2;
  }
  return puVar1;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049bc4
 */

undefined4 recovered_10049bc4(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    *DAT_10054038 = 9;
    return 0xffffffff;
  }
  recovered_1003ffe4(param_1);
  return 0;
}

#undef DAT_10054038

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049bfc
 */

void recovered_10049bfc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049c0c
 */

void * recovered_10049c0c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,
                         uint param_5,int param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint size;
  void *destination;
  ulong uVar1;
  int *piVar2;
  int iVar3;

  size = param_2;
  if (param_2 < 2) {
    size = 1;
  }
  destination = recovered_1003ff90(size);
  if (destination == (void *)0x0) {
    *DAT_10054038 = 0xc;
    return (void *)0xffffffff;
  }
  if (((param_4 & 0x1000) == 0) && (-1 < (int)param_5)) {
    if (((param_5 < 0x20) && (piVar2 = (int *)(&DAT_100544e0)[param_5], piVar2 != (int *)0x0)) &&
       (*piVar2 == 0x54474c46)) {
      iVar3 = piVar2[0x48];
      piVar2[5] = -1;
      *(undefined1 *)(piVar2 + 4) = 0;
      if (-1 < iVar3) {
        if (param_6 < 0) {
          *DAT_10054038 = 0x16;
          return destination;
        }
        piVar2[0x48] = param_6;
        piVar2[5] = -1;
        uVar1 = recovered_10045f84(destination,1,param_2,piVar2);
        if (uVar1 < param_2) {
          recovered_10040818((void *)((int)destination + uVar1),0,param_2 - uVar1);
        }
        piVar2 = (int *)(&DAT_100544e0)[param_5];
        if (piVar2 == (int *)0x0) {
          return destination;
        }
        if (*piVar2 == 0x54474c46) {
          piVar2[0x48] = iVar3;
          piVar2[5] = -1;
          *(undefined1 *)(piVar2 + 4) = 0;
          return destination;
        }
      }
    }
  }
  else {
    recovered_10040818(destination,0,param_2);
  }
  return destination;
}

#undef DAT_10054038
#undef DAT_100544e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049d7c
 */

undefined4 recovered_10049d7c(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1003ffe4(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049d90
 */

undefined4 recovered_10049d90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049d98
 */

undefined4 recovered_10049d98(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049da0
 */

undefined4 recovered_10049da0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10054578
#define DAT_10054578 (*(char * *)(((uintptr_t)pf_module_state + 0x2870U)))
#undef DAT_1005457c
#define DAT_1005457c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2874U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049da8
 */

int recovered_10049da8(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  ulong uVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *text;

  recovered_10044f7c();
  uVar2 = extraout_r1;
  if (param_1 != (byte *)0x0) {
    uVar2 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && uVar2 != 0) {
    iVar3 = 1;
    while( true ) {
      if (uVar2 == 0) {
        count = recovered_10041118((char *)param_1);
        if (DAT_10054578 != (char *)0x0) {
          piVar4 = &DAT_1005457c;
          text = DAT_10054578;
          do {
            uVar1 = recovered_10041118(text);
            if (((count < uVar1) && (text[count] == '=')) &&
               (iVar3 = recovered_10040e10(text,param_1,count), iVar3 == 0)) {
              return piVar4[-1] + count + 1;
            }
            text = (char *)*piVar4;
            piVar4 = piVar4 + 1;
          } while (text != (char *)0x0);
        }
        return 0;
      }
      if (uVar2 == 0x3d) break;
      uVar2 = (uint)param_1[iVar3];
      iVar3 = iVar3 + 1;
    }
  }
  return 0;
}

#undef DAT_10054578
#undef DAT_1005457c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049e90
 */

undefined4 recovered_10049e90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 2;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049eac
 */

void recovered_10049eac(int param_1,byte *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    *DAT_10054038 = 0x16;
    return;
  }
  if (param_2 != (byte *)0x0) {
    param_3 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || param_3 == 0) {
    param_3 = 0x2f;
    param_2 = &DAT_100539e9;
  }
  uVar1 = 0;
  do {
    *(char *)(param_1 + uVar1) = (char)param_3;
    param_3 = (uint)param_2[uVar1 + 1];
    uVar1 = uVar1 + 1;
    if (param_3 == 0) break;
  } while (uVar1 < 0xf0);
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}

#undef DAT_100539e9
#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef str_100539f4
#define str_100539f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cecU)))
#define abStack_118 (*(byte (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10049f1c
 */

undefined4 recovered_10049f1c(byte *param_1,char *param_2,int param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;

  iVar2 = recovered_10049da8(param_1);
  uVar5 = extraout_r1;
  if (param_1 != (byte *)0x0) {
    uVar5 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && uVar5 != 0) {
    iVar7 = 1;
    while (uVar5 != 0) {
      if (uVar5 == 0x3d) goto LAB_10049f4c;
      pbVar1 = param_1 + iVar7;
      iVar7 = iVar7 + 1;
      uVar5 = (uint)*pbVar1;
    }
    if (param_2 != (char *)0x0) {
      if ((param_3 == 0) && (iVar2 != 0)) {
        return 0;
      }
      uVar3 = recovered_10041118((char *)param_1);
      uVar4 = recovered_10041118(param_2);
      if (0xfffffefe < (uVar3 + uVar4) - 0xff) {
        pf_varargs_10043634__4__4_
                  ((char *)abStack_118,0x100,str_100539f4,(uint)param_1,(uint)param_2);
        uVar6 = recovered_1004a024((char *)param_1,abStack_118);
        return uVar6;
      }
      uVar6 = 0xc;
      goto LAB_10049f5c;
    }
  }
LAB_10049f4c:
  uVar6 = 0x16;
LAB_10049f5c:
  *DAT_10054038 = uVar6;
  return 0xffffffff;
}

#undef DAT_10054038
#undef str_100539f4
#undef abStack_118

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10054578
#define DAT_10054578 (*(char * *)(((uintptr_t)pf_module_state + 0x2870U)))
#undef DAT_1005457c
#define DAT_1005457c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2874U)))
#define local_824 (*(char (*)[2052])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a024
 */

undefined4 recovered_1004a024(char *param_1,byte *param_2)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  int iVar3;
  char *text;
  char *count;
  undefined4 *puVar4;
  int iVar5;

  iVar5 = 0;
  count = (char *)0x0;
  if (param_1 != (char *)0x0) {
    count = (char *)recovered_10041118(param_1);
  }
  local_824[0] = '\0';
  pcVar2 = count;
  if (DAT_10054578 != (char *)0x0) {
    text = DAT_10054578;
    puVar4 = &DAT_1005457c;
    do {
      uVar1 = recovered_10041118(text);
      pcVar2 = (char *)recovered_10041118(text);
      if ((count < pcVar2) && (text[(int)count] == '=')) {
        iVar3 = recovered_10040e10(text,param_1,(ulong)count);
        pcVar2 = (char *)0x0;
        if (iVar3 != 0) goto LAB_1004a0c8;
      }
      else {
LAB_1004a0c8:
        iVar3 = uVar1 + iVar5;
        if (iVar3 - 0x7feU < 0xfffff800) goto LAB_1004a174;
        recovered_10040088(local_824 + iVar5,text,uVar1);
        pcVar2 = local_824 + iVar3;
        iVar5 = iVar3 + 1;
        pcVar2[0] = '\n';
        pcVar2[1] = '\0';
      }
      text = (char *)*puVar4;
      puVar4 = puVar4 + 1;
    } while (text != (char *)0x0);
  }
  if (param_2 != (byte *)0x0) {
    pcVar2 = (char *)(uint)*param_2;
  }
  if (param_2 != (byte *)0x0 && pcVar2 != (char *)0x0) {
    uVar1 = recovered_10041118((char *)param_2);
    if (uVar1 + iVar5 + 2 >> 0xb != 0) {
LAB_1004a174:
      *DAT_10054038 = 0xc;
      return 0xffffffff;
    }
    recovered_10040088(local_824 + iVar5,param_2,uVar1);
    (local_824 + uVar1 + iVar5)[0] = '\n';
    (local_824 + uVar1 + iVar5)[1] = '\0';
  }
  recovered_10044b88(local_824);
  return 0;
}

#undef DAT_10054038
#undef DAT_10054578
#undef DAT_1005457c
#undef local_824

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a198
 */

undefined4 recovered_1004a198(byte *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;

  if (param_1 != (byte *)0x0) {
    param_2 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && param_2 != 0) {
    iVar2 = 1;
    while( true ) {
      if (param_2 == 0) {
        uVar1 = recovered_1004a024((char *)param_1,(byte *)0x0);
        return uVar1;
      }
      if (param_2 == 0x3d) break;
      param_2 = (uint)param_1[iVar2];
      iVar2 = iVar2 + 1;
    }
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_94 (*(char (*)[128])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a1f0
 */

undefined4 recovered_1004a1f0(char *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 uVar2;
  uint count;

  if ((param_1 == (char *)0x0) ||
     (pcVar1 = recovered_100414f8(param_1,0x3d), pcVar1 == (char *)0x0 || pcVar1 == param_1)) {
    uVar2 = 0x16;
  }
  else {
    count = (int)pcVar1 - (int)param_1;
    if (count < 0x80) {
      recovered_10040088(acStack_94,param_1,count);
      acStack_94[count] = '\0';
      uVar2 = recovered_1004a024(acStack_94,(byte *)param_1);
      return uVar2;
    }
    uVar2 = 0xc;
  }
  *DAT_10054038 = uVar2;
  return 0xffffffff;
}

#undef DAT_10054038
#undef acStack_94

#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010954
#define DAT_40010954 (*(uint8_t *)(0x40010954U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010954
#define _DAT_40010954 (*(code * *)(0x40010954U))
#define local_215 (*(char (*)[512])(frame + 27))
#define local_15 (*(undefined1 *)(frame + 539))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a28c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004a28c(int param_1)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  void *stream;
  void *stream_00;
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return 1;
  }
  local_215[0] = '\0';
  uVar1 = 0xffffffff;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x157 < _DAT_40010808)) &&
     (_DAT_40010954 != (code *)0x0)) {
    iVar2 = (*_DAT_40010954)(param_1,local_215,0x200);
    stream_00 = DAT_100544cc;
    stream = DAT_100543a4;
    if (iVar2 == 0) {
      if (local_215[0] != '\0') {
        uVar3 = recovered_10041118(local_215);
        recovered_10046204(local_215,1,uVar3,stream_00);
        local_15 = 10;
        recovered_10046204(&local_15,1,1,DAT_100544cc);
      }
      return 0xffffffff;
    }
    uVar1 = 0;
    if (local_215[0] != '\0') {
      uVar3 = recovered_10041118(local_215);
      recovered_10046204(local_215,1,uVar3,stream);
      local_15 = 10;
      recovered_10046204(&local_15,1,1,DAT_100543a4);
      return 0;
    }
  }
  return uVar1;
}

#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010954
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010954
#undef local_215
#undef local_15

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#define acStack_105 (*(char (*)[241])(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a3f0
 */

char * recovered_1004a3f0(int param_1,char *param_2)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;

  puVar1 = recovered_10044f7c();
  if (param_1 == 0 || puVar1 == (undefined *)0x0) {
    uVar4 = 0x16;
  }
  else {
    iVar2 = recovered_10045234((int)puVar1,(char *)param_1,acStack_105);
    if (iVar2 != 0) {
      if (param_2 == (char *)0x0) {
        uVar3 = recovered_10041118(acStack_105);
        param_2 = recovered_1003ff90(uVar3 + 1);
        if (param_2 == (char *)0x0) {
          uVar4 = 0xc;
          goto LAB_1004a480;
        }
      }
      recovered_100411c8(param_2,acStack_105);
      return param_2;
    }
    uVar4 = 0x3f;
  }
LAB_1004a480:
  *DAT_10054038 = uVar4;
  return (char *)0x0;
}

#undef DAT_10054038
#undef acStack_105

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100550bc
#define DAT_100550bc (*(uint *)(((uintptr_t)pf_module_state + 0x33b4U)))
#undef str_100539fa
#define str_100539fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cf2U)))
#undef str_10053a39
#define str_10053a39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d31U)))
#define acStack_28 (*(char (*)[8])(frame + 232))
#define auStack_100 (*(undefined1 (*)[108])(frame + 16))
#define auStack_94 (*(undefined1 (*)[108])(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a4a8
 */

undefined4 recovered_1004a4a8(char *param_1,int param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  undefined4 uVar14;

  if (((param_1 != (char *)0x0) && (-1 < param_2)) &&
     (uVar9 = recovered_10041118(param_1), param_2 + 6U <= uVar9)) {
    iVar12 = uVar9 - param_2;
    iVar10 = recovered_10040e10(param_1 + iVar12 + -6,str_10053a39,6);
    if (iVar10 == 0) {
      iVar10 = 0x80;
      do {
        DAT_100550bc = DAT_100550bc + 1;
        uVar7 = (short)(DAT_100550bc / 0x3a2f8) * 0x4211;
        uVar1 = (DAT_100550bc >> 1) / 0x1f;
        cVar2 = str_100539fa[DAT_100550bc + (uVar1 * 0x20 - (DAT_100550bc >> 1) / 0x1f) * -2];
        cVar3 = str_100539fa[(DAT_100550bc / 0xf04) % 0x3e];
        uVar8 = (short)(DAT_100550bc / 0xe17810) * 0x422;
        cVar4 = str_100539fa
                [DAT_100550bc / 0xe17810 + ((uVar8 >> 0x10) * 0x20 - (uVar8 >> 0x10)) * -2 & 0xffff]
        ;
        cVar5 = str_100539fa
                [DAT_100550bc / 0x3a2f8 + ((uVar7 >> 0x14) * 0x20 - (uVar7 >> 0x14)) * -2 & 0xffff];
        cVar6 = str_100539fa[DAT_100550bc / 0x369b13e0];
        param_1[iVar12 + -5] = str_100539fa[uVar1 + ((uVar1 / 0x3e) * 0x20 - uVar1 / 0x3e) * -2];
        param_1[iVar12 + -1] = cVar6;
        param_1[iVar12 + -6] = cVar2;
        param_1[iVar12 + -4] = cVar3;
        param_1[iVar12 + -2] = cVar4;
        param_1[iVar12 + -3] = cVar5;
        iVar11 = recovered_10048130((int)param_1,auStack_100);
        if (iVar11 != 0) {
          iVar12 = recovered_10048130((int)param_1,auStack_94);
          if (iVar12 != 0) {
            pf_varargs_10043634__4_(acStack_28,4,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1cdaU));
            pvVar13 = recovered_10044c70(param_1,acStack_28);
            if (pvVar13 == (void *)0x0) {
              return 0xffffffff;
            }
            return *(undefined4 *)((int)pvVar13 + 0xc);
          }
          break;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      uVar14 = 0x11;
      goto LAB_1004a518;
    }
  }
  uVar14 = 0x16;
LAB_1004a518:
  *DAT_10054038 = uVar14;
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_100550bc
#undef str_100539fa
#undef str_10053a39
#undef acStack_28
#undef auStack_100
#undef auStack_94

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a6e0
 */

void recovered_1004a6e0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1004a4a8(param_1,0);
  return;
}


#undef DAT_100550c0
#define DAT_100550c0 (*(uint *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a6e8
 */

undefined4 recovered_1004a6e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (0x1f < DAT_100550c0) {
      return 0xffffffff;
    }
    *(int *)(&DAT_100550c4 + DAT_100550c0 * 4) = param_1;
    DAT_100550c0 = DAT_100550c0 + 1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_100550c0
#undef DAT_100550c4

#undef DAT_100550c0
#define DAT_100550c0 (*(uint *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a738
 */

undefined4 recovered_1004a738(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (0x1f < DAT_100550c0) {
      return 0xffffffff;
    }
    *(int *)(&DAT_100550c4 + DAT_100550c0 * 4) = param_1;
    DAT_100550c0 = DAT_100550c0 + 1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_100550c0
#undef DAT_100550c4

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a788
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004a788(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_40010800 != 0x50414d57) goto LAB_1004a7dc;
  if (_DAT_40010804 == 0) goto LAB_1004a7dc;
  pcVar1 = _DAT_40010830;
  if (_DAT_40010808 < 0x34) goto LAB_1004a7dc;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_1004a7dc:
    do {
      do {
      } while (_DAT_40010800 != 0x50414d57);
    } while ((_DAT_40010804 == 0) || (pcVar1 = _DAT_4001089c, _DAT_40010808 < 0xa0));
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a818
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004a818(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_40010800 != 0x50414d57) goto LAB_1004a86c;
  if (_DAT_40010804 == 0) goto LAB_1004a86c;
  pcVar1 = _DAT_40010830;
  if (_DAT_40010808 < 0x34) goto LAB_1004a86c;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_1004a86c:
    do {
      do {
      } while (_DAT_40010800 != 0x50414d57);
    } while ((_DAT_40010804 == 0) || (pcVar1 = _DAT_4001089c, _DAT_40010808 < 0xa0));
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c

#undef DAT_100550c0
#define DAT_100550c0 (*(int *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a8a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004a8a8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  while (DAT_100550c0 != 0) {
    DAT_100550c0 = DAT_100550c0 + -1;
    if (*(code **)(&DAT_100550c4 + DAT_100550c0 * 4) != (code *)0x0) {
      (**(code **)(&DAT_100550c4 + DAT_100550c0 * 4))();
    }
  }
  DAT_100550c0 = 0;
  if (_DAT_40010800 != 0x50414d57) goto LAB_1004a95c;
  if (_DAT_40010804 == 0) goto LAB_1004a95c;
  pcVar1 = _DAT_40010830;
  if (_DAT_40010808 < 0x34) goto LAB_1004a95c;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_1004a95c:
    do {
      do {
      } while (_DAT_40010800 != 0x50414d57);
    } while ((_DAT_40010804 == 0) || (pcVar1 = _DAT_4001089c, _DAT_40010808 < 0xa0));
  } while( true );
}

#undef DAT_100550c0
#undef DAT_100550c4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004a998
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1004a998(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (_DAT_40010800 != 0x50414d57) goto LAB_1004a9ec;
  if (_DAT_40010804 == 0) goto LAB_1004a9ec;
  pcVar1 = _DAT_40010830;
  if (_DAT_40010808 < 0x34) goto LAB_1004a9ec;
  do {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
LAB_1004a9ec:
    do {
      do {
      } while (_DAT_40010800 != 0x50414d57);
    } while ((_DAT_40010804 == 0) || (pcVar1 = _DAT_4001089c, _DAT_40010808 < 0xa0));
  } while( true );
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa28
 */

bool recovered_1004aa28(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 < 3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa3c
 */

undefined4 recovered_1004aa3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa44
 */

undefined4 recovered_1004aa44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa4c
 */

undefined4 recovered_1004aa4c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa54
 */

undefined4 recovered_1004aa54(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1000;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa5c
 */

undefined4 recovered_1004aa5c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1000) {
    return 0;
  }
  *DAT_10054038 = 1;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aa88
 */

undefined4 recovered_1004aa88(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 1000) {
    return 0;
  }
  *DAT_10054038 = 1;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
#define local_620 (*(undefined4 *)(frame + 32))
#define auStack_62c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aab4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004aab4(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10040818(auStack_62c,0,0x620);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x147 < _DAT_40010808)) &&
     ((_DAT_40010944 != (code *)0x0 && (iVar1 = (*_DAT_40010944)(auStack_62c), iVar1 != 0)))) {
    return local_620;
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944
#undef local_620
#undef auStack_62c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ab3c
 */

undefined4 recovered_1004ab3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
#define auStack_638 (*(undefined1 (*)[12])(frame + 24))
#define local_62c (*(int *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ab44
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_1004ab44(int param_1)

{
  unsigned char frame[1648] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
LAB_1004abb8:
    recovered_10040818(auStack_638,0,0x620);
    if (((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) ||
       ((_DAT_40010808 < 0x148 ||
        ((_DAT_40010944 == (code *)0x0 || (iVar1 = (*_DAT_40010944)(auStack_638), iVar1 == 0)))))) {
      local_62c = 1;
    }
  }
  else {
    recovered_10040818(auStack_638,0,0x620);
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x147 < _DAT_40010808)) &&
       ((_DAT_40010944 != (code *)0x0 && (iVar1 = (*_DAT_40010944)(auStack_638), iVar1 != 0)))) {
      if (local_62c == param_1) goto LAB_1004abb8;
    }
    else if (param_1 == 1) goto LAB_1004abb8;
    *DAT_10054038 = 3;
    local_62c = -1;
  }
  return local_62c;
}

#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944
#undef auStack_638
#undef local_62c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
#define local_620 (*(undefined4 *)(frame + 32))
#define auStack_62c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ac6c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004ac6c(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10040818(auStack_62c,0,0x620);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x147 < _DAT_40010808)) &&
     ((_DAT_40010944 != (code *)0x0 && (iVar1 = (*_DAT_40010944)(auStack_62c), iVar1 != 0)))) {
    return local_620;
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944
#undef local_620
#undef auStack_62c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004acf4
 */

undefined4 recovered_1004acf4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *DAT_10054038 = 0x4e;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100550c0
#define DAT_100550c0 (*(int *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
#define acStack_224 (*(char (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ad10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004ad10(int param_1,int *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  undefined4 uVar2;
  code *pcVar3;
  char *unaff_r4;
  int iVar4;

  if (param_1 == 0) {
    uVar2 = 0x16;
LAB_1004add4:
    *DAT_10054038 = uVar2;
  }
  else {
    if (param_2 != (int *)0x0) {
      unaff_r4 = (char *)*param_2;
    }
    acStack_224[0] = '\0';
    if (param_2 != (int *)0x0 && unaff_r4 != (char *)0x0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        count = recovered_10041118(unaff_r4);
        if (iVar1 + count + 2 >> 9 != 0) {
          uVar2 = 7;
          goto LAB_1004add4;
        }
        if (iVar4 != 0) {
          acStack_224[iVar1] = ' ';
          iVar1 = iVar1 + 1;
        }
        recovered_10040088(acStack_224 + iVar1,unaff_r4,count);
        unaff_r4 = (char *)param_2[1 - iVar4];
        iVar1 = iVar1 + count;
        iVar4 = iVar4 + -1;
        acStack_224[iVar1] = '\0';
      } while (unaff_r4 != (char *)0x0);
    }
    else {
      pf_varargs_10043634__4_(acStack_224,0x200,&DAT_10051d2c,param_1);
    }
    iVar1 = recovered_1004a28c((int)acStack_224);
    if (iVar1 == 0) {
      while (DAT_100550c0 != 0) {
        DAT_100550c0 = DAT_100550c0 + -1;
        if (*(code **)(&DAT_100550c4 + DAT_100550c0 * 4) != (code *)0x0) {
          (**(code **)(&DAT_100550c4 + DAT_100550c0 * 4))();
        }
      }
      DAT_100550c0 = 0;
      if (_DAT_40010800 != 0x50414d57) goto LAB_1004aeb4;
      if (_DAT_40010804 == 0) goto LAB_1004aeb4;
      if (_DAT_40010808 < 0x34) goto LAB_1004aeb4;
      pcVar3 = _DAT_40010830;
      do {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
LAB_1004aeb4:
        do {
          do {
          } while (_DAT_40010800 != 0x50414d57);
        } while ((_DAT_40010804 == 0) || (_DAT_40010808 < 0xa0));
        pcVar3 = _DAT_4001089c;
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_100550c0
#undef DAT_100550c4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c
#undef acStack_224

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100550c0
#define DAT_100550c0 (*(int *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
#define local_224 (*(char (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ad14
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004ad14(int param_1,int *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  undefined4 uVar2;
  code *pcVar3;
  char *unaff_r4;
  int iVar4;

  if (param_1 == 0) {
    uVar2 = 0x16;
LAB_1004add4:
    *DAT_10054038 = uVar2;
  }
  else {
    if (param_2 != (int *)0x0) {
      unaff_r4 = (char *)*param_2;
    }
    local_224[0] = '\0';
    if (param_2 != (int *)0x0 && unaff_r4 != (char *)0x0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        count = recovered_10041118(unaff_r4);
        if (iVar1 + count + 2 >> 9 != 0) {
          uVar2 = 7;
          goto LAB_1004add4;
        }
        if (iVar4 != 0) {
          local_224[iVar1] = ' ';
          iVar1 = iVar1 + 1;
        }
        recovered_10040088(local_224 + iVar1,unaff_r4,count);
        unaff_r4 = (char *)param_2[1 - iVar4];
        iVar1 = iVar1 + count;
        iVar4 = iVar4 + -1;
        local_224[iVar1] = '\0';
      } while (unaff_r4 != (char *)0x0);
    }
    else {
      pf_varargs_10043634__4_(local_224,0x200,&DAT_10051d2c,param_1);
    }
    iVar1 = recovered_1004a28c((int)local_224);
    if (iVar1 == 0) {
      while (DAT_100550c0 != 0) {
        DAT_100550c0 = DAT_100550c0 + -1;
        if (*(code **)(&DAT_100550c4 + DAT_100550c0 * 4) != (code *)0x0) {
          (**(code **)(&DAT_100550c4 + DAT_100550c0 * 4))();
        }
      }
      DAT_100550c0 = 0;
      if (_DAT_40010800 != 0x50414d57) goto LAB_1004aeb4;
      if (_DAT_40010804 == 0) goto LAB_1004aeb4;
      if (_DAT_40010808 < 0x34) goto LAB_1004aeb4;
      pcVar3 = _DAT_40010830;
      do {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
LAB_1004aeb4:
        do {
          do {
          } while (_DAT_40010800 != 0x50414d57);
        } while ((_DAT_40010804 == 0) || (_DAT_40010808 < 0xa0));
        pcVar3 = _DAT_4001089c;
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_100550c0
#undef DAT_100550c4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c
#undef local_224

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100550c0
#define DAT_100550c0 (*(int *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
#define acStack_224 (*(char (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004aef0(int param_1,int *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  undefined4 uVar2;
  code *pcVar3;
  char *unaff_r4;
  int iVar4;

  if (param_1 == 0) {
    uVar2 = 0x16;
LAB_1004add4:
    *DAT_10054038 = uVar2;
  }
  else {
    if (param_2 != (int *)0x0) {
      unaff_r4 = (char *)*param_2;
    }
    acStack_224[0] = '\0';
    if (param_2 != (int *)0x0 && unaff_r4 != (char *)0x0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        count = recovered_10041118(unaff_r4);
        if (iVar1 + count + 2 >> 9 != 0) {
          uVar2 = 7;
          goto LAB_1004add4;
        }
        if (iVar4 != 0) {
          acStack_224[iVar1] = ' ';
          iVar1 = iVar1 + 1;
        }
        recovered_10040088(acStack_224 + iVar1,unaff_r4,count);
        unaff_r4 = (char *)param_2[1 - iVar4];
        iVar1 = iVar1 + count;
        iVar4 = iVar4 + -1;
        acStack_224[iVar1] = '\0';
      } while (unaff_r4 != (char *)0x0);
    }
    else {
      pf_varargs_10043634__4_(acStack_224,0x200,&DAT_10051d2c,param_1);
    }
    iVar1 = recovered_1004a28c((int)acStack_224);
    if (iVar1 == 0) {
      while (DAT_100550c0 != 0) {
        DAT_100550c0 = DAT_100550c0 + -1;
        if (*(code **)(&DAT_100550c4 + DAT_100550c0 * 4) != (code *)0x0) {
          (**(code **)(&DAT_100550c4 + DAT_100550c0 * 4))();
        }
      }
      DAT_100550c0 = 0;
      if (_DAT_40010800 != 0x50414d57) goto LAB_1004aeb4;
      if (_DAT_40010804 == 0) goto LAB_1004aeb4;
      if (_DAT_40010808 < 0x34) goto LAB_1004aeb4;
      pcVar3 = _DAT_40010830;
      do {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
LAB_1004aeb4:
        do {
          do {
          } while (_DAT_40010800 != 0x50414d57);
        } while ((_DAT_40010804 == 0) || (_DAT_40010808 < 0xa0));
        pcVar3 = _DAT_4001089c;
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_100550c0
#undef DAT_100550c4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c
#undef acStack_224

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100550c0
#define DAT_100550c0 (*(int *)(((uintptr_t)pf_module_state + 0x33b8U)))
#undef DAT_100550c4
#define DAT_100550c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010830
#define DAT_40010830 (*(uint8_t *)(0x40010830U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010830
#define _DAT_40010830 (*(uint8_t * *)(0x40010830U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(uint8_t * *)(0x4001089cU))
#define acStack_224 (*(char (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aef4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004aef4(int param_1,int *param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  undefined4 uVar2;
  code *pcVar3;
  char *unaff_r4;
  int iVar4;

  if (param_1 == 0) {
    uVar2 = 0x16;
LAB_1004add4:
    *DAT_10054038 = uVar2;
  }
  else {
    if (param_2 != (int *)0x0) {
      unaff_r4 = (char *)*param_2;
    }
    acStack_224[0] = '\0';
    if (param_2 != (int *)0x0 && unaff_r4 != (char *)0x0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        count = recovered_10041118(unaff_r4);
        if (iVar1 + count + 2 >> 9 != 0) {
          uVar2 = 7;
          goto LAB_1004add4;
        }
        if (iVar4 != 0) {
          acStack_224[iVar1] = ' ';
          iVar1 = iVar1 + 1;
        }
        recovered_10040088(acStack_224 + iVar1,unaff_r4,count);
        unaff_r4 = (char *)param_2[1 - iVar4];
        iVar1 = iVar1 + count;
        iVar4 = iVar4 + -1;
        acStack_224[iVar1] = '\0';
      } while (unaff_r4 != (char *)0x0);
    }
    else {
      pf_varargs_10043634__4_(acStack_224,0x200,&DAT_10051d2c,param_1);
    }
    iVar1 = recovered_1004a28c((int)acStack_224);
    if (iVar1 == 0) {
      while (DAT_100550c0 != 0) {
        DAT_100550c0 = DAT_100550c0 + -1;
        if (*(code **)(&DAT_100550c4 + DAT_100550c0 * 4) != (code *)0x0) {
          (**(code **)(&DAT_100550c4 + DAT_100550c0 * 4))();
        }
      }
      DAT_100550c0 = 0;
      if (_DAT_40010800 != 0x50414d57) goto LAB_1004aeb4;
      if (_DAT_40010804 == 0) goto LAB_1004aeb4;
      if (_DAT_40010808 < 0x34) goto LAB_1004aeb4;
      pcVar3 = _DAT_40010830;
      do {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
LAB_1004aeb4:
        do {
          do {
          } while (_DAT_40010800 != 0x50414d57);
        } while ((_DAT_40010804 == 0) || (_DAT_40010808 < 0xa0));
        pcVar3 = _DAT_4001089c;
      } while( true );
    }
  }
  return 0xffffffff;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_100550c0
#undef DAT_100550c4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010830
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010830
#undef _DAT_4001089c
#undef acStack_224

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004aef8
 */

undefined4 recovered_1004aef8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 1:
  case 0x1d:
    return 0x1000;
  case 2:
  case 5:
    return 0x20;
  case 3:
    return 1000;
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
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
    goto switchD_1004af10_caseD_4;
  case 0x39:
  case 0x3a:
    return 1;
  case 0x46:
    return 0x400;
  default:
    if (param_1 - 200U < 2) {
      return 0x8000;
    }
switchD_1004af10_caseD_4:
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
}

#undef DAT_10054038

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b078
 */

undefined4 recovered_1004b078(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0x1000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b080
 */

undefined4 recovered_1004b080(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b088
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004b088(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
    return 0;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b0f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004b0f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
    return 0;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b158
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004b158(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
    return 0;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b1d0
 */

undefined4 recovered_1004b1d0(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = recovered_10041674((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = uVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b214
 */

undefined4 recovered_1004b214(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  uVar1 = recovered_10041674((undefined4 *)0x0);
  param_2[1] = 0;
  *param_2 = uVar1;
  return 0;
}

#undef DAT_10054038

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b260
 */

undefined4 recovered_1004b260(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b274
 */

undefined4 recovered_1004b274(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b288
 */

undefined4
recovered_1004b288(undefined4 param_1,undefined4 *param_2,undefined4 param_3,void *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_4 != (void *)0x0) {
    recovered_10040818(param_4,0,0x50);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


#undef DAT_1004b340
#define DAT_1004b340 (*(uint64_t *)(0x1004b340U))
#undef DAT_1004b350
#define DAT_1004b350 (*(uint64_t *)(0x1004b350U))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b2c0
 */

undefined4 recovered_1004b2c0(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  if ((param_2 == (undefined4 *)0x0) || (9 < param_1)) {
LAB_1004b318:
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  if ((1 << (param_1 & 0xff) & 0x13U) == 0) {
    if ((1 << (param_1 & 0xff) & 0x20cU) == 0) {
      if (param_1 != 8) goto LAB_1004b318;
      puVar2 = &(*(uint64_t *)(uint64_t[]){0x20ULL});
    }
    else {
      puVar2 = &(*(uint64_t *)(uint64_t[]){0x8000000ULL});
    }
    uVar3 = *(undefined4 *)puVar2;
    uVar4 = *(undefined4 *)((int)puVar2 + 4);
    uVar5 = *(undefined4 *)(puVar2 + 1);
    uVar6 = *(undefined4 *)((int)puVar2 + 0xc);
  }
  else {
    PF_PART8(auVar1, 8) = SUB168((uint128)0x0,8);
    PF_PART8(auVar1, 0) = 0xffffffffffffffff;
    auVar1 = auVar1 << 0x40 | auVar1;
    uVar3 = PF_PART4(auVar1, 0);
    uVar4 = PF_PART4(auVar1, 4);
    uVar5 = PF_PART4(auVar1, 8);
    uVar6 = PF_PART4(auVar1, 12);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return 0;
}

#undef DAT_1004b340
#undef DAT_1004b350
#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b360
 */

undefined4 recovered_1004b360(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 10) && ((799U >> (param_1 & 0xff) & 1) != 0)) {
    return 0;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b39c
 */

undefined4 recovered_1004b39c(undefined4 param_1,void *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (void *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  recovered_10040818(param_2,0,0x50);
  return 0;
}

#undef DAT_10054038

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001089c
#define DAT_4001089c (*(uint8_t *)(0x4001089cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001089c
#define _DAT_4001089c (*(code * *)(0x4001089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b3e4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004b3e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x9f < _DAT_40010808)) &&
     (_DAT_4001089c != (code *)0x0)) {
    (*_DAT_4001089c)();
    return 0;
  }
  return 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001089c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001089c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b44c
 */

undefined4 recovered_1004b44c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b454
 */

undefined4 recovered_1004b454(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b45c
 */

undefined4 recovered_1004b45c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b464
 */

undefined4 recovered_1004b464(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b46c
 */

undefined4 recovered_1004b46c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b474
 */

undefined4 recovered_1004b474(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_2 = 0;
  return 0;
}

#undef DAT_10054038

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b4a0
 */

undefined4 recovered_1004b4a0(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (char *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  recovered_10040818(param_1,0,0xc0);
  pf_varargs_10043634__4_(param_1,0x20,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1d38U));
  pf_varargs_10043634__4_(param_1 + 0x20,0x20,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x4c2U));
  pf_varargs_10043634__4_(param_1 + 0x40,0x20,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1d3eU));
  pf_varargs_10043634__4_(param_1 + 0x60,0x40,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1d42U));
  pf_varargs_10043634__4_(param_1 + 0xa0,0x20,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x3c6U));
  return 0;
}

#undef DAT_10051d2c
#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef str_100521ca
#define str_100521ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b580
 */

undefined4 recovered_1004b580(void *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;

  uVar1 = recovered_10041118(str_100521ca);
  if (param_1 == (void *)0x0 || param_2 == 0) {
    uVar2 = 0x16;
  }
  else {
    if (uVar1 < param_2) {
      recovered_10040088(param_1,str_100521ca,uVar1 + 1);
      return 0;
    }
    recovered_10040088(param_1,str_100521ca,param_2);
    uVar2 = 0x3f;
  }
  *DAT_10054038 = uVar2;
  return 0xffffffff;
}

#undef DAT_10054038
#undef str_100521ca

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055144
#define DAT_10055144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x343cU)))
#undef DAT_10055148
#define DAT_10055148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3440U)))
#undef DAT_1005514c
#define DAT_1005514c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3444U)))
#undef DAT_10055150
#define DAT_10055150 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3448U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b614
 */

undefined4 recovered_1004b614(int param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 - 0x20U < 0xffffffe0 || param_1 == 0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  iVar1 = param_1 * 0x10;
  uVar2 = *(undefined4 *)(&DAT_10055144 + iVar1);
  *(undefined4 *)(&DAT_10055150 + iVar1) = 0;
  *(undefined4 *)(&DAT_1005514c + iVar1) = 0;
  *(undefined4 *)(&DAT_10055148 + iVar1) = 0;
  *(undefined4 *)(&DAT_10055144 + iVar1) = param_2;
  return uVar2;
}

#undef DAT_10054038
#undef DAT_10055144
#undef DAT_10055148
#undef DAT_1005514c
#undef DAT_10055150

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055144
#define DAT_10055144 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x343cU)))
#undef DAT_1005514c
#define DAT_1005514c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3444U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b664
 */

undefined4 recovered_1004b664(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 - 0x20U < 0xffffffe0 || param_1 == 0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(&DAT_1005514c + param_1 * 0x10);
    *param_3 = *(undefined8 *)(&DAT_10055144 + param_1 * 0x10);
    param_3[1] = uVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *(undefined8 *)(&DAT_10055144 + param_1 * 0x10) = *param_2;
    *(undefined8 *)(&DAT_1005514c + param_1 * 0x10) = uVar1;
  }
  return 0;
}

#undef DAT_10054038
#undef DAT_10055144
#undef DAT_1005514c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055344
#define DAT_10055344 (*(uint *)(((uintptr_t)pf_module_state + 0x363cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b6cc
 */

undefined4 recovered_1004b6cc(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_10055344;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_1 == 3) {
    DAT_10055344 = *param_2;
    return 0;
  }
  if (param_1 == 2) {
    DAT_10055344 = DAT_10055344 & ~*param_2;
    return 0;
  }
  if (param_1 == 1) {
    DAT_10055344 = DAT_10055344 | *param_2;
    return 0;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_10055344

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055344
#define DAT_10055344 (*(uint *)(((uintptr_t)pf_module_state + 0x363cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b790
 */

undefined4 recovered_1004b790(int param_1,uint *param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 != (uint *)0x0) {
    *param_3 = DAT_10055344;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (param_1 == 3) {
    DAT_10055344 = *param_2;
    return 0;
  }
  if (param_1 == 2) {
    DAT_10055344 = DAT_10055344 & ~*param_2;
    return 0;
  }
  if (param_1 == 1) {
    DAT_10055344 = DAT_10055344 | *param_2;
    return 0;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_10055344

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b854
 */

undefined4 recovered_1004b854(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
#define local_624 (*(int *)(frame + 28))
#define auStack_630 (*(undefined1 (*)[12])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b85c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004b85c(int param_1)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10040818(auStack_630,0,0x620);
  if ((((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) || (_DAT_40010808 < 0x148)) ||
     ((_DAT_40010944 == (code *)0x0 || (iVar1 = (*_DAT_40010944)(auStack_630), iVar1 == 0)))) {
    local_624 = 1;
  }
  if (param_1 == 0 || local_624 == param_1) {
    return 0;
  }
  *DAT_10054038 = 3;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944
#undef local_624
#undef auStack_630

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b918
 */

undefined4 recovered_1004b918(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0;
  return 0;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b948
 */

undefined4 recovered_1004b948(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_1 = 0xffffffff;
  return 0;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b978
 */

undefined4 recovered_1004b978(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    param_3 = param_2 - 0x20;
  }
  if (param_1 != (uint *)0x0 && 0xffffffe0 < param_3) {
    *param_1 = *param_1 | 1 << (param_2 & 0xff);
    return 0;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004b9bc
 */

undefined4 recovered_1004b9bc(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    param_3 = param_2 - 0x20;
  }
  if (param_1 != (uint *)0x0 && 0xffffffe0 < param_3) {
    *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
    return 0;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ba00
 */

uint recovered_1004ba00(uint *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (uint *)0x0) {
    param_3 = param_2 - 0x20;
  }
  if (param_1 != (uint *)0x0 && 0xffffffe0 < param_3) {
    return *param_1 >> (param_2 & 0xff) & 1;
  }
  *DAT_10054038 = 0x16;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055348
#define DAT_10055348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3640U)))
#undef DAT_1005534c
#define DAT_1005534c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3644U)))
#undef DAT_10055350
#define DAT_10055350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3648U)))
#undef DAT_10055354
#define DAT_10055354 (*(int *)(((uintptr_t)pf_module_state + 0x364cU)))
#undef DAT_10055358
#define DAT_10055358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3650U)))
#undef DAT_10055360
#define DAT_10055360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3658U)))
#undef DAT_1005536c
#define DAT_1005536c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3664U)))
#undef UNK_10055368
#define UNK_10055368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3660U)))
#undef _DAT_10055348
#define _DAT_10055348 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3640U)))
#undef _DAT_10055350
#define _DAT_10055350 (*(int *)(((uintptr_t)pf_module_state + 0x3648U)))
#undef uRam10055368
#define uRam10055368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3660U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ba38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004ba38(uint param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;

  if ((2 < param_1) || (param_2 == (undefined8 *)0x0)) {
    *DAT_10054038 = 0x19;
    return 0xffffffff;
  }
  if (_DAT_10055350 == 0 && DAT_10055354 == 0) {
    recovered_10040818(&DAT_10055348,0,0x2c);
    DAT_10055354 = 0x588;
    _DAT_10055350 = 0xb00;
    DAT_1005534c = 1;
  }
  uVar5 = DAT_1005536c;
  uVar4 = DAT_10055358;
  uVar1 = CONCAT44(DAT_10055354,_DAT_10055350);
  uVar2 = CONCAT44(PF_PART4(DAT_10055360, 4),(undefined4)DAT_10055360);
  uVar3 = CONCAT44(uRam10055368,PF_PART4(DAT_10055360, 4));
  *param_2 = CONCAT44(DAT_1005534c,_DAT_10055348);
  param_2[1] = uVar1;
  param_2[2] = uVar4;
  param_2[3] = uVar2;
  *(undefined8 *)((int)param_2 + 0x1c) = uVar3;
  *(undefined8 *)((int)param_2 + 0x24) = uVar5;
  return 0;
}

#undef DAT_10054038
#undef DAT_10055348
#undef DAT_1005534c
#undef DAT_10055350
#undef DAT_10055354
#undef DAT_10055358
#undef DAT_10055360
#undef DAT_1005536c
#undef UNK_10055368
#undef _DAT_10055348
#undef _DAT_10055350
#undef uRam10055368

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055348
#define DAT_10055348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3640U)))
#undef DAT_10055350
#define DAT_10055350 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3648U)))
#undef DAT_10055358
#define DAT_10055358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3650U)))
#undef DAT_10055360
#define DAT_10055360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3658U)))
#undef DAT_1005536c
#define DAT_1005536c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3664U)))
#undef UNK_10055368
#define UNK_10055368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3660U)))
#undef _DAT_10055348
#define _DAT_10055348 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3640U)))
#undef _DAT_10055350
#define _DAT_10055350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3648U)))
#undef uRam10055368
#define uRam10055368 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3660U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004badc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004badc(uint param_1,undefined4 param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 3) && (param_3 != (undefined8 *)0x0)) {
    _DAT_10055348 = *param_3;
    _DAT_10055350 = param_3[1];
    DAT_10055358 = param_3[2];
    PF_PART4(DAT_10055360, 0) = (undefined4)param_3[3];
    PF_PART4(DAT_10055360, 4) = (undefined4)*(undefined8 *)((int)param_3 + 0x1c);
    uRam10055368 = (undefined4)((ulonglong)*(undefined8 *)((int)param_3 + 0x1c) >> 0x20);
    DAT_1005536c = *(undefined8 *)((int)param_3 + 0x24);
    return 0;
  }
  *DAT_10054038 = 0x19;
  return 0xffffffff;
}

#undef DAT_10054038
#undef DAT_10055348
#undef DAT_10055350
#undef DAT_10055358
#undef DAT_10055360
#undef DAT_1005536c
#undef UNK_10055368
#undef _DAT_10055348
#undef _DAT_10055350
#undef uRam10055368

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bb38
 */

void recovered_1004bb38(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  param_1[1] = param_1[1] & 0xfffffffe;
  *param_1 = 0;
  param_1[3] = param_1[3] & 0xfffffa77;
  param_1[2] = param_1[2] | 0xb00;
  return;
}


#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bb78
 */

undefined4 recovered_1004bb78(uint param_1,int param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 < 3) {
    if (param_2 == -0x7ffb9982) {
      return 0;
    }
    if (param_2 == 0x40087468) {
      if (param_3 != (undefined4 *)0x0) {
        param_3[1] = 0;
        *param_3 = 0x500019;
        return 0;
      }
      uVar1 = 0x16;
      goto LAB_1004bbf4;
    }
  }
  uVar1 = 0x19;
LAB_1004bbf4:
  *DAT_10054038 = uVar1;
  return 0xffffffff;
}

#undef DAT_10054038

#undef DAT_100544e0
#define DAT_100544e0 (*(int * *)(((uintptr_t)pf_module_state + 0x27d8U)))
#undef DAT_100544e4
#define DAT_100544e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bc18
 */

uint recovered_1004bc18(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  uint uVar3;
  uint uVar4;

  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 - 1;
  uVar3 = uVar2;
  if (0xfe < uVar2) {
    uVar3 = 0xff;
  }
  if (param_2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2 & 1;
  }
  if (param_3 != (uint *)0x0) {
    unaff_r6 = *param_3;
  }
  if (param_3 != (uint *)0x0 && (unaff_r6 & 1) != 0) {
    if ((DAT_100544e0 == (int *)0x0) || (*DAT_100544e0 != 0x54474c46)) {
      unaff_r6 = unaff_r6 & 0xfffffffe;
      *param_3 = unaff_r6;
    }
    else {
      uVar1 = uVar1 + 1;
    }
  }
  if (param_4 != (uint *)0x0) {
    unaff_r6 = *param_4;
  }
  if (param_4 != (uint *)0x0 && (unaff_r6 & 1) != 0) {
    *param_4 = unaff_r6 & 0xfffffffe;
  }
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar4 = uVar2 + 1;
      if (param_2 != (uint *)0x0) {
        if ((param_2[uVar4 >> 5] & 1 << (uVar4 & 0x1f)) != 0) {
          param_2[uVar4 >> 5] = param_2[uVar4 >> 5] & ~(1 << (uVar4 & 0x1f));
        }
      }
      if (param_3 != (uint *)0x0) {
        if ((param_3[uVar4 >> 5] & 1 << (uVar4 & 0x1f)) != 0) {
          if (((uVar4 < 0x20) && ((int *)(&DAT_100544e4)[uVar2] != (int *)0x0)) &&
             (*(int *)(&DAT_100544e4)[uVar2] == 0x54474c46)) {
            uVar1 = uVar1 + 1;
          }
          else {
            param_3[uVar4 >> 5] = param_3[uVar4 >> 5] & ~(1 << (uVar4 & 0x1f));
          }
        }
      }
      if (param_4 != (uint *)0x0) {
        if ((param_4[uVar4 >> 5] & 1 << (uVar4 & 0x1f)) != 0) {
          param_4[uVar4 >> 5] = param_4[uVar4 >> 5] & ~(1 << (uVar4 & 0x1f));
        }
      }
      uVar2 = uVar4;
    } while (uVar3 != uVar4);
  }
  return uVar1;
}

#undef DAT_100544e0
#undef DAT_100544e4

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_100544e0
#define DAT_100544e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x27d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bd90
 */

int recovered_1004bd90(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;

  if ((param_1 == 0) && (param_2 != 0)) {
    *DAT_10054038 = 0xe;
    return -1;
  }
  if (param_2 == 0) {
    return 0;
  }
  puVar2 = (ushort *)(param_1 + 6);
  iVar1 = 0;
  do {
    uVar3 = 0x20;
    *puVar2 = 0;
    if ((*(uint *)(puVar2 + -3) < 0x20) &&
       ((int *)(&DAT_100544e0)[*(uint *)(puVar2 + -3)] != (int *)0x0)) {
      bVar5 = false;
      uVar3 = 0x20;
      if (*(int *)(&DAT_100544e0)[*(uint *)(puVar2 + -3)] == 0x54474c46) {
        uVar3 = puVar2[-1] & 5;
        bVar5 = uVar3 == 0;
      }
      if (!bVar5) goto LAB_1004be20;
      iVar4 = 0;
    }
    else {
LAB_1004be20:
      *puVar2 = uVar3;
      iVar4 = 1;
    }
    iVar1 = iVar1 + iVar4;
    puVar2 = puVar2 + 4;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return iVar1;
    }
  } while( true );
}

#undef DAT_10054038
#undef DAT_100544e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004be50
 */

undefined4 recovered_1004be50(int *param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (int *)0x0 || param_2 == (undefined *)0x0) {
    return 0x16;
  }
  if (*param_1 == 0) {
    *param_1 = 1;
    (*(code *)param_2)();
    return 0;
  }
  return 0;
}


#undef DAT_100544d8
#define DAT_100544d8 (*(int *)(((uintptr_t)pf_module_state + 0x27d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004be98
 */

undefined4 recovered_1004be98(int *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (undefined *)0x0) {
    return 0x16;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = DAT_100544d8 + 1;
    *param_1 = DAT_100544d8;
    DAT_100544d8 = iVar1;
  }
  (*(code *)param_3)(param_4);
  return 0;
}

#undef DAT_100544d8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bee8
 */

undefined4 recovered_1004bee8(undefined4 param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004befc
 */

undefined4 recovered_1004befc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf04
 */

undefined4 recovered_1004bf04(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf18
 */

undefined4 recovered_1004bf18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf20
 */

undefined4 recovered_1004bf20(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf34
 */

undefined4 recovered_1004bf34(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf3c
 */

undefined4 recovered_1004bf3c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf44
 */

undefined4 recovered_1004bf44(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf4c
 */

undefined4 recovered_1004bf4c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf54
 */

undefined4 recovered_1004bf54(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf68
 */

undefined4 recovered_1004bf68(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf70
 */

undefined4 recovered_1004bf70(undefined4 *param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf80
 */

undefined4 recovered_1004bf80(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf94
 */

undefined4 recovered_1004bf94(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bf9c
 */

undefined4 recovered_1004bf9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bfa4
 */

undefined4 recovered_1004bfa4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bfac
 */

undefined4 recovered_1004bfac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bfb4
 */

undefined4 recovered_1004bfb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10055374
#define DAT_10055374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x366cU)))
#undef DAT_10055375
#define DAT_10055375 (*(char *)(((uintptr_t)pf_module_state + 0x366dU)))
#undef DAT_10055376
#define DAT_10055376 (*(char *)(((uintptr_t)pf_module_state + 0x366eU)))
#undef DAT_10055377
#define DAT_10055377 (*(char *)(((uintptr_t)pf_module_state + 0x366fU)))
#undef DAT_10055378
#define DAT_10055378 (*(char *)(((uintptr_t)pf_module_state + 0x3670U)))
#undef DAT_10055379
#define DAT_10055379 (*(char *)(((uintptr_t)pf_module_state + 0x3671U)))
#undef DAT_1005537a
#define DAT_1005537a (*(char *)(((uintptr_t)pf_module_state + 0x3672U)))
#undef DAT_1005537b
#define DAT_1005537b (*(char *)(((uintptr_t)pf_module_state + 0x3673U)))
#undef DAT_1005537c
#define DAT_1005537c (*(char *)(((uintptr_t)pf_module_state + 0x3674U)))
#undef DAT_1005537d
#define DAT_1005537d (*(char *)(((uintptr_t)pf_module_state + 0x3675U)))
#undef DAT_1005537e
#define DAT_1005537e (*(char *)(((uintptr_t)pf_module_state + 0x3676U)))
#undef DAT_1005537f
#define DAT_1005537f (*(char *)(((uintptr_t)pf_module_state + 0x3677U)))
#undef DAT_10055380
#define DAT_10055380 (*(char *)(((uintptr_t)pf_module_state + 0x3678U)))
#undef DAT_10055381
#define DAT_10055381 (*(char *)(((uintptr_t)pf_module_state + 0x3679U)))
#undef DAT_10055382
#define DAT_10055382 (*(char *)(((uintptr_t)pf_module_state + 0x367aU)))
#undef DAT_10055383
#define DAT_10055383 (*(char *)(((uintptr_t)pf_module_state + 0x367bU)))
#undef DAT_10055384
#define DAT_10055384 (*(char *)(((uintptr_t)pf_module_state + 0x367cU)))
#undef DAT_10055385
#define DAT_10055385 (*(char *)(((uintptr_t)pf_module_state + 0x367dU)))
#undef DAT_10055386
#define DAT_10055386 (*(char *)(((uintptr_t)pf_module_state + 0x367eU)))
#undef DAT_10055387
#define DAT_10055387 (*(char *)(((uintptr_t)pf_module_state + 0x367fU)))
#undef DAT_10055388
#define DAT_10055388 (*(char *)(((uintptr_t)pf_module_state + 0x3680U)))
#undef DAT_10055389
#define DAT_10055389 (*(char *)(((uintptr_t)pf_module_state + 0x3681U)))
#undef DAT_1005538a
#define DAT_1005538a (*(char *)(((uintptr_t)pf_module_state + 0x3682U)))
#undef DAT_1005538b
#define DAT_1005538b (*(char *)(((uintptr_t)pf_module_state + 0x3683U)))
#undef DAT_1005538c
#define DAT_1005538c (*(char *)(((uintptr_t)pf_module_state + 0x3684U)))
#undef DAT_1005538d
#define DAT_1005538d (*(char *)(((uintptr_t)pf_module_state + 0x3685U)))
#undef DAT_1005538e
#define DAT_1005538e (*(char *)(((uintptr_t)pf_module_state + 0x3686U)))
#undef DAT_1005538f
#define DAT_1005538f (*(char *)(((uintptr_t)pf_module_state + 0x3687U)))
#undef DAT_10055390
#define DAT_10055390 (*(char *)(((uintptr_t)pf_module_state + 0x3688U)))
#undef DAT_10055391
#define DAT_10055391 (*(char *)(((uintptr_t)pf_module_state + 0x3689U)))
#undef DAT_10055392
#define DAT_10055392 (*(char *)(((uintptr_t)pf_module_state + 0x368aU)))
#undef DAT_10055393
#define DAT_10055393 (*(char *)(((uintptr_t)pf_module_state + 0x368bU)))
#undef DAT_10055394
#define DAT_10055394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004bfbc
 */

undefined4 recovered_1004bfbc(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  iVar1 = 1;
  if ((((((DAT_10055375 == '\0') || (iVar1 = 2, DAT_10055376 != '\x01')) ||
        (iVar1 = 3, DAT_10055377 != '\x01')) ||
       (((iVar1 = 4, DAT_10055378 != '\x01' || (iVar1 = 5, DAT_10055379 != '\x01')) ||
        ((iVar1 = 6, DAT_1005537a != '\x01' ||
         ((iVar1 = 7, DAT_1005537b != '\x01' || (iVar1 = 8, DAT_1005537c != '\x01')))))))) ||
      ((iVar1 = 9, DAT_1005537d != '\x01' ||
       (((iVar1 = 10, DAT_1005537e != '\x01' || (iVar1 = 0xb, DAT_1005537f != '\x01')) ||
        (iVar1 = 0xc, DAT_10055380 != '\x01')))))) ||
     (((((iVar1 = 0xd, DAT_10055381 != '\x01' || (iVar1 = 0xe, DAT_10055382 != '\x01')) ||
        ((iVar1 = 0xf, DAT_10055383 != '\x01' ||
         ((iVar1 = 0x10, DAT_10055384 != '\x01' || (iVar1 = 0x11, DAT_10055385 != '\x01')))))) ||
       (iVar1 = 0x12, DAT_10055386 != '\x01')) ||
      (((((iVar1 = 0x13, DAT_10055387 != '\x01' || (iVar1 = 0x14, DAT_10055388 != '\x01')) ||
         (iVar1 = 0x15, DAT_10055389 != '\x01')) ||
        ((iVar1 = 0x16, DAT_1005538a != '\x01' || (iVar1 = 0x17, DAT_1005538b != '\x01')))) ||
       ((((iVar1 = 0x18, DAT_1005538c != '\x01' ||
          ((iVar1 = 0x19, DAT_1005538d != '\x01' || (iVar1 = 0x1a, DAT_1005538e != '\x01')))) ||
         (iVar1 = 0x1b, DAT_1005538f != '\x01')) ||
        ((((iVar1 = 0x1c, DAT_10055390 != '\x01' || (iVar1 = 0x1d, DAT_10055391 != '\x01')) ||
          (iVar1 = 0x1e, DAT_10055392 != '\x01')) || (iVar1 = 0x1f, DAT_10055393 != '\x01'))))))))))
  {
    *param_1 = iVar1;
    (&DAT_10055374)[iVar1] = 1;
    *(undefined4 *)(&DAT_10055394 + iVar1 * 4) = 0;
    return 0;
  }
  return 0xb;
}

#undef DAT_10055374
#undef DAT_10055375
#undef DAT_10055376
#undef DAT_10055377
#undef DAT_10055378
#undef DAT_10055379
#undef DAT_1005537a
#undef DAT_1005537b
#undef DAT_1005537c
#undef DAT_1005537d
#undef DAT_1005537e
#undef DAT_1005537f
#undef DAT_10055380
#undef DAT_10055381
#undef DAT_10055382
#undef DAT_10055383
#undef DAT_10055384
#undef DAT_10055385
#undef DAT_10055386
#undef DAT_10055387
#undef DAT_10055388
#undef DAT_10055389
#undef DAT_1005538a
#undef DAT_1005538b
#undef DAT_1005538c
#undef DAT_1005538d
#undef DAT_1005538e
#undef DAT_1005538f
#undef DAT_10055390
#undef DAT_10055391
#undef DAT_10055392
#undef DAT_10055393
#undef DAT_10055394

#undef DAT_10055374
#define DAT_10055374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x366cU)))
#undef DAT_10055394
#define DAT_10055394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c1f4
 */

undefined4 recovered_1004c1f4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0x16;
  if (param_1 < 0x20) {
    uVar1 = 0;
    *(undefined4 *)(&DAT_10055394 + param_1 * 4) = 0;
    (&DAT_10055374)[param_1] = 0;
  }
  return uVar1;
}

#undef DAT_10055374
#undef DAT_10055394

#undef DAT_10055374
#define DAT_10055374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x366cU)))
#undef DAT_10055394
#define DAT_10055394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c22c
 */

undefined4 recovered_1004c22c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 < 0x20) {
    if ((&DAT_10055374)[param_1] != '\x01') {
      return 0;
    }
    uVar1 = *(undefined4 *)(&DAT_10055394 + param_1 * 4);
  }
  return uVar1;
}

#undef DAT_10055374
#undef DAT_10055394

#undef DAT_10055374
#define DAT_10055374 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x366cU)))
#undef DAT_10055394
#define DAT_10055394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x368cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c268
 */

undefined4 recovered_1004c268(uint param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0x16;
  if (param_1 < 0x20) {
    if ((&DAT_10055374)[param_1] != '\x01') {
      return 0x16;
    }
    *(undefined4 *)(&DAT_10055394 + param_1 * 4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

#undef DAT_10055374
#undef DAT_10055394

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2a8
 */

undefined4 recovered_1004c2a8(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2bc
 */

undefined4 recovered_1004c2bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2c4
 */

undefined4 recovered_1004c2c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2cc
 */

undefined4 recovered_1004c2cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2d4
 */

undefined4 recovered_1004c2d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010944
#define DAT_40010944 (*(uint8_t *)(0x40010944U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010944
#define _DAT_40010944 (*(code * *)(0x40010944U))
#define local_620 (*(undefined4 *)(frame + 32))
#define auStack_62c (*(undefined1 (*)[12])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c2dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1004c2dc(void)

{
  unsigned char frame[1632] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10040818(auStack_62c,0,0x620);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x147 < _DAT_40010808)) &&
     ((_DAT_40010944 != (code *)0x0 && (iVar1 = (*_DAT_40010944)(auStack_62c), iVar1 != 0)))) {
    return local_620;
  }
  return 1;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010944
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010944
#undef local_620
#undef auStack_62c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c364
 */

bool recovered_1004c364(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c374
 */

void recovered_1004c374(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c38c
 */

undefined4 recovered_1004c38c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c394
 */

undefined4 recovered_1004c394(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c39c
 */

undefined4 recovered_1004c39c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c3a4
 */

undefined4 recovered_1004c3a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_100543a4
#define DAT_100543a4 (*(void * *)(((uintptr_t)pf_module_state + 0x269cU)))
#undef DAT_100544cc
#define DAT_100544cc (*(void * *)(((uintptr_t)pf_module_state + 0x27c4U)))
#undef DAT_10054560
#define DAT_10054560 (*(int *)(((uintptr_t)pf_module_state + 0x2858U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010954
#define DAT_40010954 (*(uint8_t *)(0x40010954U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010954
#define _DAT_40010954 (*(code * *)(0x40010954U))
#define local_425 (*(char (*)[512])(frame + 27))
#define local_225 (*(char (*)[512])(frame + 539))
#define local_25 (*(undefined1 (*)[5])(frame + 1051))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c3ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
recovered_1004c3ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  void *stream;
  char cVar1;
  char *text;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;

  if (param_2 == 0) {
    return 0x16;
  }
  text = (char *)0x0;
  local_225[0] = '\0';
  if (param_5 != (int *)0x0) {
    text = (char *)*param_5;
  }
  if (param_5 != (int *)0x0 && text != (char *)0x0) {
    iVar3 = 0;
    iVar7 = 0;
    do {
      uVar4 = recovered_10041118(text);
      if (iVar7 + uVar4 + 2 >> 9 != 0) {
        return 7;
      }
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = ' ';
      }
      piVar6 = param_5 + iVar3;
      pvVar5 = (void *)*piVar6;
      if (iVar3 != 0) {
        local_225[iVar7] = cVar1;
        iVar7 = iVar7 + 1;
      }
      recovered_10040088(local_225 + iVar7,pvVar5,uVar4);
      iVar7 = iVar7 + uVar4;
      iVar3 = iVar3 + 1;
      local_225[iVar7] = '\0';
      text = (char *)piVar6[1];
    } while (text != (char *)0x0);
  }
  else {
    pf_varargs_10043634__4_(local_225,0x200,&DAT_10051d2c,param_2);
  }
  local_425[0] = '\0';
  uVar2 = 2;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x157 < _DAT_40010808)) &&
     (_DAT_40010954 != (code *)0x0)) {
    iVar3 = (*_DAT_40010954)(local_225,local_425,0x200);
    stream = DAT_100544cc;
    pvVar5 = DAT_100543a4;
    if (iVar3 == 0) {
      if (local_425[0] != '\0') {
        uVar4 = recovered_10041118(local_425);
        recovered_10046204(local_425,1,uVar4,stream);
        local_25[0] = 10;
        recovered_10046204(local_25,1,1,DAT_100544cc);
      }
      uVar2 = 2;
    }
    else {
      if (local_425[0] != '\0') {
        uVar4 = recovered_10041118(local_425);
        recovered_10046204(local_425,1,uVar4,pvVar5);
        local_25[0] = 10;
        recovered_10046204(local_25,1,1,DAT_100543a4);
      }
      uVar2 = 0;
      if (param_1 != (int *)0x0) {
        DAT_10054560 = DAT_10054560 + 1;
        *param_1 = DAT_10054560;
      }
    }
  }
  return uVar2;
}

#undef DAT_10051d2c
#undef DAT_100543a4
#undef DAT_100544cc
#undef DAT_10054560
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010954
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010954
#undef local_425
#undef local_225
#undef local_25

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c5ec
 */

void recovered_1004c5ec(int *in_r0,int in_r1,undefined4 in_r3,undefined4 in_stack_00000000)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1004c3ac(in_r0,in_r1,in_stack_00000000,in_r3,(int *)in_stack_00000000);
  return;
}


#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10053a5a
#define DAT_10053a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d52U)))
#undef DAT_10053a65
#define DAT_10053a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10053a6a
#define DAT_10053a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d62U)))
#undef DAT_10055414
#define DAT_10055414 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x370cU)))
#undef DAT_10055418
#define DAT_10055418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3710U)))
#undef DAT_1005541c
#define DAT_1005541c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3714U)))
#undef DAT_10055420
#define DAT_10055420 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3718U)))
#undef DAT_10055424
#define DAT_10055424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x371cU)))
#undef DAT_10055428
#define DAT_10055428 (*(char * *)(((uintptr_t)pf_module_state + 0x3720U)))
#undef DAT_1005542c
#define DAT_1005542c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3724U)))
#undef DAT_10055430
#define DAT_10055430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3728U)))
#undef DAT_10055470
#define DAT_10055470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3768U)))
#undef str_10053a5f
#define str_10053a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d57U)))
#undef str_10053a6f
#define str_10053a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c60c
 */

undefined4 * recovered_1004c60c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 *puVar2;
  char *vararg0;

  if (param_1 == 0) {
    DAT_1005542c = &DAT_100539e9;
    DAT_10055428 = str_10053a5f;
    DAT_10055424 = &DAT_10053a5a;
    DAT_10055420 = 0;
    DAT_1005541c = 0;
    DAT_10055418 = &DAT_10052066;
    DAT_10055414 = &DAT_10053a5a;
    return &DAT_10055414;
  }
  pcVar1 = (char *)recovered_10049da8(&DAT_10053a65);
  vararg0 = &DAT_10053a6a;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    vararg0 = pcVar1;
  }
  pf_varargs_10043634__4_(&DAT_10055430,0x40,&DAT_10051d2c,(uint)vararg0);
  pf_varargs_10043634__4_(&DAT_10055470,0x80,str_10053a6f,((uintptr_t)pf_module_state + 0x3728U));
  puVar2 = &DAT_10055414;
  DAT_1005542c = &DAT_100539e9;
  DAT_10055428 = &DAT_10055470;
  DAT_10055424 = &DAT_10055430;
  DAT_10055420 = 1000;
  DAT_1005541c = 1000;
  DAT_10055418 = &DAT_10052066;
  DAT_10055414 = &DAT_10055430;
  if (param_1 != 1000) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

#undef DAT_10051d2c
#undef DAT_10052066
#undef DAT_100539e9
#undef DAT_10053a5a
#undef DAT_10053a65
#undef DAT_10053a6a
#undef DAT_10055414
#undef DAT_10055418
#undef DAT_1005541c
#undef DAT_10055420
#undef DAT_10055424
#undef DAT_10055428
#undef DAT_1005542c
#undef DAT_10055430
#undef DAT_10055470
#undef str_10053a5f
#undef str_10053a6f

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10053a5a
#define DAT_10053a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d52U)))
#undef DAT_10053a65
#define DAT_10053a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10053a6a
#define DAT_10053a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d62U)))
#undef DAT_10055414
#define DAT_10055414 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x370cU)))
#undef DAT_10055418
#define DAT_10055418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3710U)))
#undef DAT_1005541c
#define DAT_1005541c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3714U)))
#undef DAT_10055420
#define DAT_10055420 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3718U)))
#undef DAT_10055424
#define DAT_10055424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x371cU)))
#undef DAT_10055428
#define DAT_10055428 (*(char * *)(((uintptr_t)pf_module_state + 0x3720U)))
#undef DAT_1005542c
#define DAT_1005542c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3724U)))
#undef DAT_10055430
#define DAT_10055430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3728U)))
#undef DAT_10055470
#define DAT_10055470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3768U)))
#undef str_10053a5f
#define str_10053a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d57U)))
#undef str_10053a6f
#define str_10053a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c74c
 */

undefined4 * recovered_1004c74c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;

  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = &DAT_10053a5a;
  iVar1 = recovered_10041140(param_1,&DAT_10053a5a);
  if (iVar1 == 0) {
    DAT_10055420 = 0;
    pcVar4 = str_10053a5f;
  }
  else {
    pcVar2 = (char *)recovered_10049da8(&DAT_10053a65);
    pcVar4 = &DAT_10053a6a;
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      pcVar4 = pcVar2;
    }
    iVar1 = recovered_10041140(param_1,pcVar4);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
    pcVar2 = (char *)recovered_10049da8(&DAT_10053a65);
    pcVar4 = &DAT_10053a6a;
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      pcVar4 = pcVar2;
    }
    puVar3 = &DAT_10055430;
    pf_varargs_10043634__4_(&DAT_10055430,0x40,&DAT_10051d2c,(uint)pcVar4);
    pcVar4 = &DAT_10055470;
    pf_varargs_10043634__4_(&DAT_10055470,0x80,str_10053a6f,((uintptr_t)pf_module_state + 0x3728U));
    DAT_10055420 = 1000;
  }
  DAT_1005542c = &DAT_100539e9;
  DAT_10055428 = pcVar4;
  DAT_10055424 = puVar3;
  DAT_1005541c = DAT_10055420;
  DAT_10055418 = &DAT_10052066;
  DAT_10055414 = puVar3;
  return &DAT_10055414;
}

#undef DAT_10051d2c
#undef DAT_10052066
#undef DAT_100539e9
#undef DAT_10053a5a
#undef DAT_10053a65
#undef DAT_10053a6a
#undef DAT_10055414
#undef DAT_10055418
#undef DAT_1005541c
#undef DAT_10055420
#undef DAT_10055424
#undef DAT_10055428
#undef DAT_1005542c
#undef DAT_10055430
#undef DAT_10055470
#undef str_10053a5f
#undef str_10053a6f

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10053a5a
#define DAT_10053a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d52U)))
#undef DAT_10053a65
#define DAT_10053a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10053a6a
#define DAT_10053a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d62U)))
#undef DAT_10055414
#define DAT_10055414 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x370cU)))
#undef DAT_10055418
#define DAT_10055418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3710U)))
#undef DAT_1005541c
#define DAT_1005541c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3714U)))
#undef DAT_10055420
#define DAT_10055420 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3718U)))
#undef DAT_10055424
#define DAT_10055424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x371cU)))
#undef DAT_10055428
#define DAT_10055428 (*(char * *)(((uintptr_t)pf_module_state + 0x3720U)))
#undef DAT_1005542c
#define DAT_1005542c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3724U)))
#undef DAT_10055430
#define DAT_10055430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3728U)))
#undef DAT_10055470
#define DAT_10055470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3768U)))
#undef str_10053a5f
#define str_10053a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d57U)))
#undef str_10053a6f
#define str_10053a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d67U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004c8a0
 */

int recovered_1004c8a0(int param_1,undefined4 *param_2,void *param_3,uint param_4,
                      undefined4 *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char *vararg0;
  undefined4 *unaff_r8;

  if (param_2 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (param_3 != (void *)0x0) {
    unaff_r8 = param_5;
  }
  if (param_3 == (void *)0x0 || unaff_r8 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (param_1 == 0) {
    DAT_10055428 = str_10053a5f;
    DAT_10055424 = &DAT_10053a5a;
    DAT_10055420 = 0;
    DAT_1005541c = 0;
    DAT_10055414 = &DAT_10053a5a;
  }
  else {
    pcVar1 = (char *)recovered_10049da8(&DAT_10053a65);
    vararg0 = &DAT_10053a6a;
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      vararg0 = pcVar1;
    }
    pf_varargs_10043634__4_(&DAT_10055430,0x40,&DAT_10051d2c,(uint)vararg0);
    pf_varargs_10043634__4_(&DAT_10055470,0x80,str_10053a6f,((uintptr_t)pf_module_state + 0x3728U));
    DAT_10055418 = &DAT_10052066;
    DAT_1005542c = &DAT_100539e9;
    DAT_10055428 = &DAT_10055470;
    DAT_10055424 = &DAT_10055430;
    DAT_10055420 = 1000;
    DAT_1005541c = 1000;
    puVar3 = (undefined4 *)0x0;
    DAT_10055414 = &DAT_10055430;
    iVar2 = 0;
    if (param_1 != 1000) goto LAB_1004ca3c;
  }
  DAT_1005542c = &DAT_100539e9;
  DAT_10055418 = &DAT_10052066;
  iVar2 = recovered_1004ca4c(&DAT_10055414,param_2,param_3,param_4);
  puVar3 = param_2;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)0x0;
  }
LAB_1004ca3c:
  *unaff_r8 = puVar3;
  return iVar2;
}

#undef DAT_10051d2c
#undef DAT_10052066
#undef DAT_100539e9
#undef DAT_10053a5a
#undef DAT_10053a65
#undef DAT_10053a6a
#undef DAT_10055414
#undef DAT_10055418
#undef DAT_1005541c
#undef DAT_10055420
#undef DAT_10055424
#undef DAT_10055428
#undef DAT_1005542c
#undef DAT_10055430
#undef DAT_10055470
#undef str_10053a5f
#undef str_10053a6f

#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ca4c
 */

undefined4 recovered_1004ca4c(undefined4 *param_1,undefined4 *param_2,void *param_3,uint param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  uint count;
  char *pcVar5;
  uint count_00;

  recovered_10040818(param_2,0,0x1c);
  pcVar5 = (char *)*param_1;
  uVar2 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar2;
  uVar1 = recovered_10041118(pcVar5);
  uVar3 = uVar1 + 1;
  if (uVar3 <= param_4) {
    recovered_10040088(param_3,pcVar5,uVar3);
    *param_2 = param_3;
    pcVar5 = (char *)param_1[1];
    uVar1 = recovered_10041118(pcVar5);
    count = uVar1 + 1;
    if (count <= param_4 - uVar3) {
      pvVar4 = (void *)((int)param_3 + uVar3);
      recovered_10040088(pvVar4,pcVar5,count);
      param_2[1] = pvVar4;
      pcVar5 = (char *)param_1[4];
      uVar3 = (param_4 - uVar3) - count;
      uVar1 = recovered_10041118(pcVar5);
      count_00 = uVar1 + 1;
      if (count_00 <= uVar3) {
        pvVar4 = (void *)((int)pvVar4 + count);
        recovered_10040088(pvVar4,pcVar5,count_00);
        param_2[4] = pvVar4;
        pcVar5 = (char *)param_1[5];
        uVar3 = uVar3 - count_00;
        uVar1 = recovered_10041118(pcVar5);
        local_28 = uVar1 + 1;
        if (uVar3 < local_28) {
          return 0x22;
        }
        pvVar4 = (void *)((int)pvVar4 + count_00);
        recovered_10040088(pvVar4,pcVar5,local_28);
        local_24 = (int)pvVar4 + local_28;
        param_2[5] = pvVar4;
        local_28 = uVar3 - local_28;
        uVar2 = recovered_10051c9c((char *)param_1[6],param_2 + 6,&local_24,&local_28);
        return uVar2;
      }
    }
  }
  return 0x22;
}

#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cbb4
 */

int recovered_1004cbb4(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  int iVar2;
  int *unaff_r8;

  if (param_1 != 0 && param_2 != 0) {
    if (param_3 != 0) {
      unaff_r8 = param_5;
    }
    if (param_3 != 0 && unaff_r8 != (int *)0x0) {
      puVar1 = recovered_1004c74c((char *)param_1);
      if (puVar1 == (undefined4 *)0x0) {
        param_2 = 0;
        iVar2 = 0;
      }
      else {
        iVar2 = recovered_1004ca4c(puVar1,(undefined4 *)param_2,(void *)param_3,param_4);
        if (iVar2 != 0) {
          param_2 = 0;
        }
      }
      *unaff_r8 = param_2;
      return iVar2;
    }
  }
  return 0x16;
}


#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10053a5a
#define DAT_10053a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d52U)))
#undef DAT_10053a65
#define DAT_10053a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10053a6a
#define DAT_10053a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d62U)))
#undef DAT_10055414
#define DAT_10055414 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x370cU)))
#undef DAT_10055418
#define DAT_10055418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3710U)))
#undef DAT_1005541c
#define DAT_1005541c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3714U)))
#undef DAT_10055420
#define DAT_10055420 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3718U)))
#undef DAT_10055424
#define DAT_10055424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x371cU)))
#undef DAT_10055428
#define DAT_10055428 (*(char * *)(((uintptr_t)pf_module_state + 0x3720U)))
#undef DAT_1005542c
#define DAT_1005542c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3724U)))
#undef DAT_10055430
#define DAT_10055430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3728U)))
#undef DAT_10055470
#define DAT_10055470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3768U)))
#undef DAT_100554f0
#define DAT_100554f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37e8U)))
#undef DAT_100554f4
#define DAT_100554f4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x37ecU)))
#undef DAT_100554f8
#define DAT_100554f8 (*(int *)(((uintptr_t)pf_module_state + 0x37f0U)))
#undef DAT_100554fc
#define DAT_100554fc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x37f4U)))
#undef DAT_10055500
#define DAT_10055500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37f8U)))
#undef DAT_10055504
#define DAT_10055504 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37fcU)))
#undef str_10053a5f
#define str_10053a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d57U)))
#undef str_10053a6f
#define str_10053a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d67U)))
#undef str_10053a78
#define str_10053a78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d70U)))
#undef str_10053a7e
#define str_10053a7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d76U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cc38
 */

undefined4 * recovered_1004cc38(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  char *pcVar4;

  puVar2 = (undefined4 *)0x0;
  if (param_1 == 0) {
    DAT_10055420 = 0;
    pcVar4 = str_10053a5f;
    puVar3 = &DAT_10053a5a;
    DAT_100554f0 = str_10053a78;
  }
  else {
    pcVar1 = (char *)recovered_10049da8(&DAT_10053a65);
    pcVar4 = &DAT_10053a6a;
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      pcVar4 = pcVar1;
    }
    puVar3 = &DAT_10055430;
    pf_varargs_10043634__4_(&DAT_10055430,0x40,&DAT_10051d2c,(uint)pcVar4);
    pcVar4 = &DAT_10055470;
    pf_varargs_10043634__4_(&DAT_10055470,0x80,str_10053a6f,((uintptr_t)pf_module_state + 0x3728U));
    DAT_10055420 = 1000;
    DAT_100554f0 = str_10053a7e;
  }
  DAT_10055504 = 0;
  if (param_1 == 1000) {
    puVar2 = &DAT_100554f0;
  }
  if (param_1 == 0) {
    puVar2 = &DAT_100554f0;
  }
  DAT_1005542c = &DAT_100539e9;
  DAT_10055428 = pcVar4;
  DAT_10055424 = puVar3;
  DAT_1005541c = DAT_10055420;
  DAT_10055418 = &DAT_10052066;
  DAT_10055414 = puVar3;
  DAT_10055500 = puVar3;
  DAT_100554fc = &DAT_10055500;
  DAT_100554f8 = param_1;
  DAT_100554f4 = &DAT_10052066;
  return puVar2;
}

#undef DAT_10051d2c
#undef DAT_10052066
#undef DAT_100539e9
#undef DAT_10053a5a
#undef DAT_10053a65
#undef DAT_10053a6a
#undef DAT_10055414
#undef DAT_10055418
#undef DAT_1005541c
#undef DAT_10055420
#undef DAT_10055424
#undef DAT_10055428
#undef DAT_1005542c
#undef DAT_10055430
#undef DAT_10055470
#undef DAT_100554f0
#undef DAT_100554f4
#undef DAT_100554f8
#undef DAT_100554fc
#undef DAT_10055500
#undef DAT_10055504
#undef str_10053a5f
#undef str_10053a6f
#undef str_10053a78
#undef str_10053a7e

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
#undef DAT_100539e9
#define DAT_100539e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ce1U)))
#undef DAT_10053a5a
#define DAT_10053a5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d52U)))
#undef DAT_10053a65
#define DAT_10053a65 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d5dU)))
#undef DAT_10053a6a
#define DAT_10053a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d62U)))
#undef DAT_10055414
#define DAT_10055414 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x370cU)))
#undef DAT_10055418
#define DAT_10055418 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3710U)))
#undef DAT_1005541c
#define DAT_1005541c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3714U)))
#undef DAT_10055420
#define DAT_10055420 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3718U)))
#undef DAT_10055424
#define DAT_10055424 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x371cU)))
#undef DAT_10055428
#define DAT_10055428 (*(char * *)(((uintptr_t)pf_module_state + 0x3720U)))
#undef DAT_1005542c
#define DAT_1005542c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3724U)))
#undef DAT_10055430
#define DAT_10055430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3728U)))
#undef DAT_10055470
#define DAT_10055470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3768U)))
#undef DAT_100554f0
#define DAT_100554f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37e8U)))
#undef DAT_100554f4
#define DAT_100554f4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x37ecU)))
#undef DAT_100554f8
#define DAT_100554f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37f0U)))
#undef DAT_100554fc
#define DAT_100554fc (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x37f4U)))
#undef DAT_10055500
#define DAT_10055500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37f8U)))
#undef DAT_10055504
#define DAT_10055504 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x37fcU)))
#undef str_10053a5f
#define str_10053a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d57U)))
#undef str_10053a6f
#define str_10053a6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d67U)))
#undef str_10053a78
#define str_10053a78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d70U)))
#undef str_10053a7e
#define str_10053a7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d76U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cd98
 */

undefined4 * recovered_1004cd98(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;

  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  pcVar3 = str_10053a78;
  iVar1 = recovered_10041140(param_1,str_10053a78);
  if (iVar1 == 0) {
    DAT_10055420 = 0;
    pcVar5 = str_10053a5f;
    puVar4 = &DAT_10053a5a;
  }
  else {
    pcVar3 = str_10053a7e;
    iVar1 = recovered_10041140(param_1,str_10053a7e);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
    pcVar2 = (char *)recovered_10049da8(&DAT_10053a65);
    pcVar5 = &DAT_10053a6a;
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      pcVar5 = pcVar2;
    }
    puVar4 = &DAT_10055430;
    pf_varargs_10043634__4_(&DAT_10055430,0x40,&DAT_10051d2c,(uint)pcVar5);
    pcVar5 = &DAT_10055470;
    pf_varargs_10043634__4_(&DAT_10055470,0x80,str_10053a6f,((uintptr_t)pf_module_state + 0x3728U));
    DAT_10055420 = 1000;
  }
  DAT_1005542c = &DAT_100539e9;
  DAT_10055428 = pcVar5;
  DAT_10055424 = puVar4;
  DAT_1005541c = DAT_10055420;
  DAT_10055418 = &DAT_10052066;
  DAT_10055414 = puVar4;
  DAT_10055504 = 0;
  DAT_10055500 = puVar4;
  DAT_100554fc = &DAT_10055500;
  DAT_100554f8 = DAT_10055420;
  DAT_100554f4 = &DAT_10052066;
  DAT_100554f0 = pcVar3;
  return &DAT_100554f0;
}

#undef DAT_10051d2c
#undef DAT_10052066
#undef DAT_100539e9
#undef DAT_10053a5a
#undef DAT_10053a65
#undef DAT_10053a6a
#undef DAT_10055414
#undef DAT_10055418
#undef DAT_1005541c
#undef DAT_10055420
#undef DAT_10055424
#undef DAT_10055428
#undef DAT_1005542c
#undef DAT_10055430
#undef DAT_10055470
#undef DAT_100554f0
#undef DAT_100554f4
#undef DAT_100554f8
#undef DAT_100554fc
#undef DAT_10055500
#undef DAT_10055504
#undef str_10053a5f
#undef str_10053a6f
#undef str_10053a78
#undef str_10053a7e

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055508
#define DAT_10055508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3800U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cf1c
 */

undefined4 recovered_1004cf1c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_10043634__4_(&DAT_10055508,0x60,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1d7cU));
  *DAT_10054038 = 0x4e;
  return 0;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_10055508

#undef DAT_10051d2c
#define DAT_10051d2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_10055508
#define DAT_10055508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3800U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cf6c
 */

undefined4 recovered_1004cf6c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_varargs_10043634__4_(&DAT_10055508,0x60,&DAT_10051d2c,((uintptr_t)pf_module_state + 0x1dacU));
  *DAT_10054038 = 0x4e;
  return 0;
}

#undef DAT_10051d2c
#undef DAT_10054038
#undef DAT_10055508

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cfbc
 */

undefined4 recovered_1004cfbc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_10055508
#define DAT_10055508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3800U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cfc4
 */

undefined1 * recovered_1004cfc4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = (undefined1 *)0x0;
  if (DAT_10055508 != '\0') {
    puVar1 = &DAT_10055508;
  }
  return puVar1;
}

#undef DAT_10055508

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004cfe0
 */

ulong recovered_1004cfe0(char *text,ulong max_length)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (text == (char *)0x0 || max_length == 0) {
    return 0;
  }
  do {
    if (text[uVar1] == '\0') {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (max_length != uVar1);
  return max_length;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d018
 */

void * recovered_1004d018(void *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *destination;
  ulong count;

  count = 0;
  if (param_1 != (void *)0x0 && param_2 != 0) {
    do {
      if (*(char *)((int)param_1 + count) == '\0') goto LAB_1004d034;
      count = count + 1;
    } while (param_2 != count);
    count = param_2;
  }
LAB_1004d034:
  destination = recovered_1003ff90(count + 1);
  if (destination != (void *)0x0) {
    recovered_10040088(destination,param_1,count);
    *(undefined1 *)((int)destination + count) = 0;
  }
  return destination;
}


#undef DAT_10052066
#define DAT_10052066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x35eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d088
 */

int recovered_1004d088(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;

  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_10052066;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = &DAT_10052066;
  }
  uVar3 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  bVar4 = uVar3 != 0;
  bVar5 = uVar1 != 0;
  bVar2 = bVar4 || bVar5;
  while( true ) {
    if (!bVar2) {
      return 0;
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar3 != uVar1) break;
    param_1 = param_1 + bVar4;
    uVar3 = (uint)*param_1;
    param_2 = param_2 + bVar5;
    uVar1 = (uint)*param_2;
    bVar4 = uVar3 != 0;
    bVar5 = uVar1 != 0;
    bVar2 = bVar4 || bVar5;
  }
  return uVar3 - uVar1;
}

#undef DAT_10052066

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d144
 */

int recovered_1004d144(byte *param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;

  if (param_3 == 0) {
    return 0;
  }
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    uVar1 = 0;
    uVar4 = 0;
    if ((param_1 != (byte *)0x0) && (uVar4 = (uint)*pbVar2, uVar4 - 0x41 < 0x1a)) {
      uVar4 = uVar4 | 0x20;
    }
    if (param_2 == (byte *)0x0) break;
    uVar1 = (uint)*pbVar3;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if ((uVar1 == 0 || uVar4 == 0) || (uVar4 != uVar1)) break;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 0;
    }
  }
  return uVar4 - uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d1cc
 */

int recovered_1004d1cc(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;

  if (count == 0) {
    return 0;
  }
  pbVar1 = (byte *)right;
  pbVar2 = (byte *)left;
  while( true ) {
    uVar4 = 0;
    if (left != (char *)0x0) {
      uVar4 = (uint)*pbVar2;
    }
    uVar3 = 0;
    if (((right == (char *)0x0) || (uVar3 = (uint)*pbVar1, uVar3 == 0 || uVar4 == 0)) ||
       (uVar4 != uVar3)) break;
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    count = count - 1;
    if (count == 0) {
      return 0;
    }
  }
  return uVar4 - uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d238
 */

void recovered_1004d238(void *param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1004030c(param_2,param_1,param_3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d248
 */

int recovered_1004d248(void *left,void *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;

  if (count < 8) {
LAB_10040f08:
    if (count == 0) {
      return 0;
    }
  }
  else if ((((uint)right ^ (uint)left) & 3) == 0) {
    uVar5 = count;
    puVar1 = right;
    puVar7 = left;
    if (((uint)left & 3) != 0) {
      uVar6 = (uint)*(byte *)right;
      uVar5 = (uint)*(byte *)left;
      if (uVar5 != uVar6) goto LAB_10041000;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10041000;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10041000;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10041000;
            uVar5 = count - 4;
            puVar1 = (uint *)((int)right + 4);
            puVar7 = (uint *)((int)left + 4);
          }
        }
      }
    }
    while (left = puVar7, right = puVar1, count = uVar5, 0xf < count) {
      uVar6 = *(uint *)right;
      uVar5 = *(uint *)left;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = *(uint *)((int)right + 4);
        uVar5 = *(uint *)((int)left + 4);
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = *(uint *)((int)right + 8);
        uVar5 = *(uint *)((int)left + 8);
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_10040f38:
        if ((uVar5 & 0xff) == (uVar6 & 0xff)) {
          if ((uVar5 & 0xffff) >> 8 == (uVar6 & 0xffff) >> 8) {
            uVar3 = uVar5 >> 0x10;
            uVar4 = uVar6 >> 0x10;
            if ((uVar5 >> 0x10 & 0xff) == (uVar6 >> 0x10 & 0xff)) {
              uVar3 = uVar5 >> 0x18;
              uVar4 = uVar6 >> 0x18;
              if (uVar5 >> 0x18 == uVar6 >> 0x18) {
                return 0;
              }
            }
          }
          else {
            uVar3 = uVar5 >> 8;
            uVar4 = uVar6 >> 8;
          }
        }
        else {
          uVar3 = uVar5;
          uVar4 = uVar6;
        }
        return (uVar3 & 0xff) - (uVar4 & 0xff);
      }
      uVar6 = *(uint *)((int)right + 0xc);
      uVar5 = *(uint *)((int)left + 0xc);
      if (uVar5 != uVar6) goto LAB_10040f38;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10041008(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10040f08;
  }
  while( true ) {
    uVar6 = (uint)(byte)*(uint *)right;
    uVar5 = (uint)(byte)*(uint *)left;
    if (uVar5 != uVar6) break;
    count = count - 1;
    right = (void *)((int)right + 1);
    left = (void *)((int)left + 1);
    if (count == 0) {
      return 0;
    }
  }
LAB_10041000:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d24c
 */

char * recovered_1004d24c(char *param_1,char *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *text;

  if (param_1 == (char *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
    param_1 = (char *)*param_3;
  }
  if ((param_3 == (undefined4 *)0x0) || (param_2 == (char *)0x0 || param_1 == (char *)0x0)) {
    return (char *)0x0;
  }
  uVar1 = recovered_1004152c(param_1,param_2);
  text = param_1 + uVar1;
  if (*text == '\0') {
    *param_3 = text;
    return (char *)0x0;
  }
  pcVar2 = recovered_10041590(text,param_2);
  if (pcVar2 == (char *)0x0) {
    uVar1 = recovered_10041118(text);
    pcVar3 = text + uVar1;
  }
  else {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = '\0';
  }
  *param_3 = pcVar3;
  return text;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d2f8
 */

void * recovered_1004d2f8(void *memory,int value,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (count == 0) {
    return (void *)0x0;
  }
  do {
    if ((uint)*(byte *)memory == (value & 0xffU)) {
      return memory;
    }
    count = count - 1;
    memory = (void *)((int)memory + 1);
  } while (count != 0);
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d32c
 */

char * recovered_1004d32c(char *text,int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;

  if (text == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *text;
    if ((char)value == cVar1) {
      pcVar2 = text;
    }
    text = text + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}


#undef DAT_100540d4
#define DAT_100540d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23ccU)))
#undef str_10053cfc
#define str_10053cfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ff4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d368
 */

char * recovered_1004d368(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 0x14) {
    return *(char **)(&DAT_100540d4 + (param_1 - 1U) * 4);
  }
  return str_10053cfc;
}

#undef DAT_100540d4
#undef str_10053cfc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d398
 */

ulong recovered_1004d398(char *text,char *reject)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  uVar3 = 0;
  if (text != (char *)0x0) {
    cVar2 = '\0';
    if (reject != (char *)0x0) {
      cVar2 = *text;
    }
    if (reject != (char *)0x0 && cVar2 != '\0') {
      do {
        pcVar1 = recovered_100414f8(reject,(int)cVar2);
        if (pcVar1 != (char *)0x0) {
          return uVar3;
        }
        cVar2 = text[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (cVar2 != '\0');
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d3f4
 */

char * recovered_1004d3f4(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  uVar3 = 0;
  if (count == 0) {
LAB_1004d428:
    if (uVar3 < count) {
      uVar5 = count - uVar3;
      if (0xf < uVar5) {
        uVar4 = uVar5 & 0xfffffff0;
        pcVar6 = destination + uVar3;
        uVar3 = uVar3 + uVar4;
        uVar1 = uVar4;
        do {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          *(undefined4 *)(pcVar6 + 4) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
          *(undefined4 *)(pcVar6 + 8) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
          *(undefined4 *)(pcVar6 + 0xc) =
               *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
          pcVar6 = pcVar6 + 0x10;
          uVar1 = uVar1 - 0x10;
        } while (uVar1 != 0);
        if (uVar5 == uVar4) {
          return destination;
        }
      }
      iVar2 = count - uVar3;
      pcVar6 = destination + uVar3;
      do {
        *pcVar6 = '\0';
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar6 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    do {
      if (source[uVar3] == '\0') goto LAB_1004d428;
      destination[uVar3] = source[uVar3];
      uVar3 = uVar3 + 1;
    } while (count != uVar3);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d480
 */

char * recovered_1004d480(char *destination,char *source)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10041118(destination);
  recovered_100411c8(destination + uVar1,source);
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d4a8
 */

char * recovered_1004d4a8(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar1 = recovered_10041118(destination);
  uVar2 = 0;
  if (count != 0) {
    do {
      if (source[uVar2] == '\0') goto LAB_1004d4f4;
      destination[uVar2 + uVar1] = source[uVar2];
      uVar2 = uVar2 + 1;
    } while (count != uVar2);
    uVar2 = count;
  }
LAB_1004d4f4:
  destination[uVar2 + uVar1] = '\0';
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d504
 */

ulong recovered_1004d504(char *destination,char *source,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint count_00;

  if (source == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10041118(source);
  }
  if (destination == (char *)0x0 || count == 0) {
    return uVar1;
  }
  count_00 = count - 1;
  if (uVar1 < count - 1) {
    count_00 = uVar1;
  }
  if (count_00 != 0) {
    recovered_10040088(destination,source,count_00);
  }
  destination[count_00] = '\0';
  return uVar1;
}


#undef DAT_10055568
#define DAT_10055568 (*(char * *)(((uintptr_t)pf_module_state + 0x3860U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d584
 */

char * recovered_1004d584(char *text,char *delimiters)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar4 = DAT_10055568;
  if (text != (char *)0x0) {
    pcVar4 = text;
  }
  if (delimiters == (char *)0x0 || pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar1 = recovered_1004152c(pcVar4,delimiters);
  pcVar4 = pcVar4 + uVar1;
  if (*pcVar4 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = recovered_10041590(pcVar4,delimiters);
    if (pcVar2 == (char *)0x0) {
      uVar1 = recovered_10041118(pcVar4);
      pcVar3 = pcVar4 + uVar1;
    }
    else {
      pcVar3 = pcVar2 + 1;
      *pcVar2 = '\0';
    }
    pcVar2 = pcVar4;
    pcVar4 = pcVar3;
  }
  DAT_10055568 = pcVar4;
  return pcVar2;
}

#undef DAT_10055568

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d620
 */

void * recovered_1004d620(ulong count,ulong size)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint size_00;
  void *destination;
  uint count_00;

  if ((size != 0) && ((int)((ulonglong)count * (ulonglong)size >> 0x20) != 0)) {
    return (void *)0x0;
  }
  count_00 = size * count;
  size_00 = count_00;
  if (count_00 < 2) {
    size_00 = 1;
  }
  destination = recovered_1003ff90(size_00);
  if (destination == (void *)0x0) {
    return (void *)0x0;
  }
  recovered_10040818(destination,0,count_00);
  return destination;
}


#undef DAT_100544dc
#define DAT_100544dc (*(uint *)(((uintptr_t)pf_module_state + 0x27d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d688
 */

void recovered_1004d688(uint seed)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (seed < 2) {
    seed = 1;
  }
  DAT_100544dc = seed;
  return;
}

#undef DAT_100544dc

#undef DAT_100544dc
#define DAT_100544dc (*(uint *)(((uintptr_t)pf_module_state + 0x27d4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d6a4
 */

int recovered_1004d6a4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_100544dc = DAT_100544dc * 0x41c64e6d + 0x3039;
  return (DAT_100544dc & 0x7fffffff) >> 0x10;
}

#undef DAT_100544dc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d6d8
 */

long recovered_1004d6d8(long value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (value < 0) {
    value = -value;
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d6e4
 */

longlong recovered_1004d6e4(longlong value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = (uint)((ulonglong)value >> 0x20);
  uVar1 = (int)uVar3 >> 0x1f;
  uVar2 = (uint)value ^ uVar1;
  return CONCAT44((uVar3 ^ uVar1) - (uVar1 + (uVar2 < uVar1)),uVar2 - uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d6f8
 */

void recovered_1004d6f8(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_3 == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = recovered_1003f448(param_2,param_3);
    iVar2 = param_2 - iVar1 * param_3;
  }
  param_1[1] = iVar2;
  *param_1 = iVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d73c
 */

void recovered_1004d73c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_3 == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar1 = recovered_1003f448(param_2,param_3);
    iVar2 = param_2 - iVar1 * param_3;
  }
  param_1[1] = iVar2;
  *param_1 = iVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d780
 */

void recovered_1004d780(undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;

  if (param_4 == 0 && param_5 == 0) {
    uVar5 = 0;
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    uVar5 = recovered_1003fda8(CONCAT44(param_3,param_2),CONCAT44(param_5,param_4));
    lVar1 = (ulonglong)param_4 * (uVar5 & 0xffffffff);
    uVar2 = (uint)lVar1;
    iVar3 = param_2 - uVar2;
    iVar4 = param_3 - ((int)(uVar5 >> 0x20) * param_4 +
                       (int)uVar5 * param_5 + (int)((ulonglong)lVar1 >> 0x20) +
                      (uint)(param_2 < uVar2));
  }
  param_1[2] = iVar3;
  *param_1 = (int)uVar5;
  param_1[3] = iVar4;
  param_1[1] = (int)(uVar5 >> 0x20);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d7fc
 */

longlong recovered_1004d7fc(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1004252c(text,endptr,base);
  return (longlong)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d810
 */

ulonglong recovered_1004d810(char *text,char **endptr,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10042680(text,endptr,base);
  return (ulonglong)uVar1;
}


#undef DAT_1005556c
#define DAT_1005556c (*(uint *)(((uintptr_t)pf_module_state + 0x3864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d824
 */

undefined4 recovered_1004d824(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1005556c = DAT_1005556c & (~param_1 | 0xffffff60);
  return 0;
}

#undef DAT_1005556c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d858
 */

undefined4 recovered_1004d858(ushort *param_1,ushort param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_1 = param_2 & (ushort)DAT_1005556c & 0x9f;
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c

#undef DAT_1005556c
#define DAT_1005556c (*(uint *)(((uintptr_t)pf_module_state + 0x3864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d89c
 */

undefined4 recovered_1004d89c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1005556c = DAT_1005556c | param_1 & 0x9f;
  return 0;
}

#undef DAT_1005556c

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint *)(((uintptr_t)pf_module_state + 0x3864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d8c8
 */

undefined4 recovered_1004d8c8(ushort *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (ushort *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  DAT_1005556c = param_2 & 0x9f & (uint)*param_1 | DAT_1005556c & ~(param_2 & 0x9f);
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c

#undef DAT_1005556c
#define DAT_1005556c (*(uint *)(((uintptr_t)pf_module_state + 0x3864U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d924
 */

uint recovered_1004d924(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 & DAT_1005556c & 0x9f;
}

#undef DAT_1005556c

#undef DAT_10055570
#define DAT_10055570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d93c
 */

undefined4 recovered_1004d93c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return DAT_10055570;
}

#undef DAT_10055570

#undef DAT_10055570
#define DAT_10055570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d94c
 */

undefined4 recovered_1004d94c(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10055570 = param_1;
  return 0;
}

#undef DAT_10055570

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3864U)))
#undef DAT_10055570
#define DAT_10055570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d964
 */

undefined4 recovered_1004d964(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1005556c;
  param_1[1] = DAT_10055570;
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c
#undef DAT_10055570

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3864U)))
#undef DAT_10055570
#define DAT_10055570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004d9b0
 */

undefined4 recovered_1004d9b0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  *param_1 = DAT_1005556c;
  param_1[1] = DAT_10055570;
  DAT_1005556c = 0;
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c
#undef DAT_10055570

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3864U)))
#undef DAT_10055570
#define DAT_10055570 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004da10
 */

undefined4 recovered_1004da10(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  DAT_10055570 = param_1[1];
  DAT_1005556c = *param_1;
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c
#undef DAT_10055570

#undef DAT_10054038
#define DAT_10054038 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x2330U)))
#undef DAT_1005556c
#define DAT_1005556c (*(uint *)(((uintptr_t)pf_module_state + 0x3864U)))
#undef DAT_10055570
#define DAT_10055570 (*(uint *)(((uintptr_t)pf_module_state + 0x3868U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004da64
 */

undefined4 recovered_1004da64(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (uint *)0x0) {
    *DAT_10054038 = 0x16;
    return 0xffffffff;
  }
  DAT_10055570 = param_1[1];
  DAT_1005556c = *param_1 | DAT_1005556c;
  return 0;
}

#undef DAT_10054038
#undef DAT_1005556c
#undef DAT_10055570

/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_1004dac8(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_1004dae0(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db08
 */

bool recovered_1004db08(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db24
 */

bool recovered_1004db24(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db40
 */

bool recovered_1004db40(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db5c
 */

bool recovered_1004db5c(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0 && (param_2 & 0x7fffffff) == 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db78
 */

bool recovered_1004db78(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) == 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004db90
 */

bool recovered_1004db90(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0 && (param_2 & 0x7fffffff) == 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dbac
 */

bool recovered_1004dbac(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (~param_2 & 0x7ff00000) == 0 && (param_1 != 0 || (param_2 & 0xfffff) != 0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dbd4
 */

bool recovered_1004dbd4(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7f800000) == 0x7f800000 && (param_1 & 0x7fffff) != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dc00
 */

bool recovered_1004dc00(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return NAN(pf_bits_double(CONCAT44(param_2,param_1)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dc18
 */

bool recovered_1004dc18(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7ff00000) != 0 && (param_2 & 0x7ff00000) != 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dc3c
 */

bool recovered_1004dc3c(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7f800000) != 0 && (param_1 & 0x7f800000) != 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dc60
 */

bool recovered_1004dc60(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (param_2 & 0x7fffffff) - (uint)(param_1 == 0);
  return uVar1 < 0x100000 && (uint)(0xfffffffe < param_1 - 1U) <= uVar1 - 0xfffff ||
         (param_2 & 0x7fffffff) - 0x100000 < 0x7fe00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dca8
 */

uint recovered_1004dca8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_2 >> 0x1f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dcb0
 */

uint recovered_1004dcb0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 >> 0x1f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dcb8
 */

bool recovered_1004dcb8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar1 < 0.0) {
    return true;
  }
  if (dVar1 == 0.0) {
    return 1.0 / dVar1 < 0.0;
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dcf8
 */

undefined4 recovered_1004dcf8(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  uVar2 = param_2 & 0x7ff00000;
  if ((uVar2 != 0x7ff00000) || (uVar1 = 1, param_1 == 0 && (param_2 & 0xfffff) == 0)) {
    uVar1 = 2;
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0x7ff00000) {
      if (pf_bits_double(CONCAT44(param_2,param_1)) == 0.0) {
        return 3;
      }
      uVar1 = 4;
      if (uVar2 == 0x7ff00000) {
        uVar1 = 5;
      }
      if (uVar2 == 0) {
        uVar1 = 5;
      }
      return uVar1;
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dd68
 */

undefined4 recovered_1004dd68(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uint uVar2;

  uVar2 = (uint)param_1 & 0x7f800000;
  if (((uVar2 == 0x7f800000) && (uVar1 = 1, ((uint)param_1 & 0x7fffff) != 0)) ||
     (uVar1 = 2, ABS(param_1) == INFINITY)) {
    return uVar1;
  }
  if (param_1 == 0.0) {
    return 3;
  }
  uVar1 = 4;
  if (uVar2 == 0x7f800000) {
    uVar1 = 5;
  }
  if (uVar2 == 0) {
    uVar1 = 5;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ddd4
 */

undefined4 recovered_1004ddd4(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (NAN(pf_bits_double(CONCAT44(param_2,param_1)))) {
    return 1;
  }
  if (param_1 == 0 && (param_2 & 0x7fffffff) == 0x7ff00000) {
    return 2;
  }
  uVar1 = 3;
  if (pf_bits_double(CONCAT44(param_2,param_1)) != 0.0) {
    uVar1 = 4;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004de14
 */

int recovered_1004de14(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_r1;

  return (uint)((in_r1 & 0x7fffffff) < 0x7ff00000);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004de30
 */

double recovered_1004de30(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004de60
 */

float recovered_1004de60(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  undefined4 in_s1;

  if (0.0 <= in_r0) {
    recovered_100418d8(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  return (float)pf_bits_double(CONCAT44(uVar2,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004deb0
 */

double recovered_1004deb0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dee0
 */

double recovered_1004dee0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004df10
 */

float recovered_1004df10(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  undefined4 in_s1;

  if (0.0 <= in_r0) {
    recovered_100418d8(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  return (float)pf_bits_double(CONCAT44(uVar2,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004df60
 */

double recovered_1004df60(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004df90
 */

double recovered_1004df90(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004dfc0
 */

float recovered_1004dfc0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  undefined4 in_s1;

  if (0.0 <= in_r0) {
    recovered_100418d8(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  return (float)pf_bits_double(CONCAT44(uVar2,uVar1));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e010
 */

double recovered_1004e010(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar1 = recovered_10041908(value);
    return dVar1;
  }
  dVar1 = recovered_100418d8(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e040
 */

long recovered_1004e040(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  long lVar3;

  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    recovered_100418d8(value);
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(value);
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = VectorFloatToSigned(CONCAT44(uVar2,uVar1),3);
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e08c
 */

long recovered_1004e08c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  long lVar3;
  undefined4 in_s1;

  if (0.0 <= in_r0) {
    recovered_100418d8(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = VectorFloatToSigned(CONCAT44(uVar2,uVar1),3);
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e0dc
 */

long recovered_1004e0dc(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  long lVar3;

  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    recovered_100418d8(value);
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(value);
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = VectorFloatToSigned(CONCAT44(uVar2,uVar1),3);
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e128
 */

longlong recovered_1004e128(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  longlong lVar3;

  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    recovered_100418d8(value);
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(value);
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = recovered_10041c98(pf_bits_double(CONCAT44(uVar2,uVar1)));
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e174
 */

longlong recovered_1004e174(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  undefined4 in_s1;
  longlong lVar3;

  if (0.0 <= in_r0) {
    recovered_100418d8(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(pf_bits_double(CONCAT44(in_s1,in_r0)));
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = recovered_10041c98(pf_bits_double(CONCAT44(uVar2,uVar1)));
  return lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e1c4
 */

longlong recovered_1004e1c4(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar2;
  longlong lVar3;

  if (0.0 <= pf_bits_double(CONCAT44(in_r1,in_r0))) {
    recovered_100418d8(value);
    uVar1 = extraout_r0_00;
    uVar2 = extraout_r1_00;
  }
  else {
    recovered_10041908(value);
    uVar1 = extraout_r0;
    uVar2 = extraout_r1;
  }
  lVar3 = recovered_10041c98(pf_bits_double(CONCAT44(uVar2,uVar1)));
  return lVar3;
}


#undef DAT_1004e418
#define DAT_1004e418 (*(uint64_t *)(0x1004e418U))
#undef DAT_1004e420
#define DAT_1004e420 (*(uint64_t *)(0x1004e420U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e210
 */

double recovered_1004e210(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  if ((pf_bits_double(CONCAT44(in_r1,in_r0)) <= 1.0) && (-1.0 <= pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return value;
  }
  return value;
}

#undef DAT_1004e418
#undef DAT_1004e420

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e428
 */

float recovered_1004e428(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_1004e210(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


#undef DAT_1004e418
#define DAT_1004e418 (*(uint64_t *)(0x1004e418U))
#undef DAT_1004e420
#define DAT_1004e420 (*(uint64_t *)(0x1004e420U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e450
 */

double recovered_1004e450(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;

  if ((pf_bits_double(CONCAT44(in_r1,in_r0)) <= 1.0) && (-1.0 <= pf_bits_double(CONCAT44(in_r1,in_r0)))) {
    return value;
  }
  return value;
}

#undef DAT_1004e418
#undef DAT_1004e420

#undef DAT_1004e530
#define DAT_1004e530 (*(uint64_t *)(0x1004e530U))
#undef DAT_1004e548
#define DAT_1004e548 (*(uint64_t *)(0x1004e548U))
#undef DAT_1004e550
#define DAT_1004e550 (*(uint64_t *)(0x1004e550U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e458
 */

double recovered_1004e458(double y,double x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  double dVar1;
  double dVar2;

  dVar2 = pf_bits_double(CONCAT44(in_r3,in_r2));
  dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0));
  if (0.0 < dVar2) {
    dVar1 = recovered_1004e210(y);
    return dVar1;
  }
  if ((dVar1 < 0.0) || (0.0 <= dVar2)) {
    if (0.0 <= dVar1 || (0.0 <= dVar1 || 0.0 <= dVar2)) {
      if ((0.0 < dVar1) && (dVar2 == 0.0)) {
        return y;
      }
      return y;
    }
    dVar1 = recovered_1004e210(y);
  }
  else {
    dVar1 = recovered_1004e210(y);
  }
  return dVar1;
}

#undef DAT_1004e530
#undef DAT_1004e548
#undef DAT_1004e550

#undef DAT_1004e640
#define DAT_1004e640 (*(double *)(0x1004e640U))
#undef DAT_1004e648
#define DAT_1004e648 (*(uint64_t *)(0x1004e648U))
#undef DAT_1004e650
#define DAT_1004e650 (*(uint64_t *)(0x1004e650U))
#undef DAT_1004e658
#define DAT_1004e658 (*(double *)(0x1004e658U))
#undef DAT_1004e660
#define DAT_1004e660 (*(double *)(0x1004e660U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e558
 */

float recovered_1004e558(float y,float x)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 extraout_r0_01 = 0;
  undefined4 uVar1;
  double *pdVar2;
  float in_r1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 extraout_r1_01 = 0;
  undefined4 uVar3;
  double dVar4;

  dVar4 = pf_bits_double(CONCAT44(x,in_r0));
  if (in_r1 <= 0.0) {
    if ((in_r0 < 0.0) || (0.0 <= in_r1)) {
      if (0.0 <= in_r0 || (0.0 <= in_r0 || 0.0 <= in_r1)) {
        if ((in_r0 <= 0.0) || (in_r1 != 0.0)) {
          pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0x0ULL});
          if (in_r1 == 0.0) {
            pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0xbff921fb54442d18ULL});
          }
          dVar4 = 0.0;
          if (in_r0 < 0.0) {
            dVar4 = *pdVar2;
          }
        }
        else {
          dVar4 = pf_bits_double(0x3ff921fb54442d18ULL);
        }
        goto LAB_1004e608;
      }
      recovered_1004e210(dVar4);
      uVar1 = extraout_r0_01;
      uVar3 = extraout_r1_01;
      dVar4 = pf_bits_double(0xc00921fb54442d18ULL);
    }
    else {
      recovered_1004e210(dVar4);
      uVar1 = extraout_r0_00;
      uVar3 = extraout_r1_00;
      dVar4 = pf_bits_double(0x400921fb54442d18ULL);
    }
    dVar4 = pf_bits_double(CONCAT44(uVar3,uVar1)) + dVar4;
  }
  else {
    recovered_1004e210(dVar4);
    dVar4 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
  }
LAB_1004e608:
  return (float)dVar4;
}

#undef DAT_1004e640
#undef DAT_1004e648
#undef DAT_1004e650
#undef DAT_1004e658
#undef DAT_1004e660

#undef DAT_1004e740
#define DAT_1004e740 (*(uint64_t *)(0x1004e740U))
#undef DAT_1004e748
#define DAT_1004e748 (*(uint64_t *)(0x1004e748U))
#undef DAT_1004e750
#define DAT_1004e750 (*(uint64_t *)(0x1004e750U))
#undef DAT_1004e758
#define DAT_1004e758 (*(double *)(0x1004e758U))
#undef DAT_1004e760
#define DAT_1004e760 (*(double *)(0x1004e760U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e668
 */

undefined4
recovered_1004e668(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  double in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined8 *puVar1;
  undefined4 extraout_r0_01 = 0;
  undefined4 uVar2;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 uVar3;
  double dVar4;
  double dVar5;

  dVar5 = pf_bits_double(CONCAT44(param_4,param_3));
  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  if (0.0 < dVar5) {
    recovered_1004e210(in_d0);
    return extraout_r0;
  }
  if ((dVar4 < 0.0) || (0.0 <= dVar5)) {
    if (0.0 <= dVar4 || (0.0 <= dVar4 || 0.0 <= dVar5)) {
      if ((0.0 < dVar4) && (dVar5 == 0.0)) {
        return (int)(0x3ff921fb54442d18U);
      }
      puVar1 = &(*(uint64_t *)(uint64_t[]){0x0ULL});
      if (dVar5 == 0.0) {
        puVar1 = &(*(uint64_t *)(uint64_t[]){0xbff921fb54442d18ULL});
      }
      uVar2 = 0;
      if (dVar4 < 0.0) {
        uVar2 = (int)*puVar1;
      }
      return uVar2;
    }
    recovered_1004e210(in_d0);
    uVar2 = extraout_r0_01;
    uVar3 = extraout_r1_00;
    dVar4 = pf_bits_double(0xc00921fb54442d18ULL);
  }
  else {
    recovered_1004e210(in_d0);
    uVar2 = extraout_r0_00;
    uVar3 = extraout_r1;
    dVar4 = pf_bits_double(0x400921fb54442d18ULL);
  }
  return SUB84(pf_bits_double(CONCAT44(uVar3,uVar2)) + dVar4,0);
}

#undef DAT_1004e740
#undef DAT_1004e748
#undef DAT_1004e750
#undef DAT_1004e758
#undef DAT_1004e760

#undef DAT_1004e878
#define DAT_1004e878 (*(uint64_t *)(0x1004e878U))
#undef DAT_1004e880
#define DAT_1004e880 (*(uint64_t *)(0x1004e880U))
#undef DAT_1004e898
#define DAT_1004e898 (*(uint64_t *)(0x1004e898U))
#undef DAT_1004e8a0
#define DAT_1004e8a0 (*(uint64_t *)(0x1004e8a0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e768
 */

double recovered_1004e768(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double dVar1;
  double dVar2;

  if (ABS(pf_bits_double(CONCAT44(in_r1,in_r0))) <= 1.0) {
    dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0));
    value = recovered_1004194c(value);
    dVar2 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
    if (0.0 < dVar2) {
      dVar1 = recovered_1004e210(value);
      return dVar1;
    }
    if ((dVar1 < 0.0) || (0.0 <= dVar2)) {
      if (dVar1 < 0.0 && (dVar1 < 0.0 && dVar2 < 0.0)) {
        value = recovered_1004e210(value);
      }
    }
    else {
      value = recovered_1004e210(value);
    }
  }
  return value;
}

#undef DAT_1004e878
#undef DAT_1004e880
#undef DAT_1004e898
#undef DAT_1004e8a0

#undef DAT_1004e9d0
#define DAT_1004e9d0 (*(double *)(0x1004e9d0U))
#undef DAT_1004e9d8
#define DAT_1004e9d8 (*(double *)(0x1004e9d8U))
#undef DAT_1004e9e0
#define DAT_1004e9e0 (*(uint64_t *)(0x1004e9e0U))
#undef DAT_1004e9e8
#define DAT_1004e9e8 (*(uint64_t *)(0x1004e9e8U))
#undef DAT_1004e9f0
#define DAT_1004e9f0 (*(double *)(0x1004e9f0U))
#undef DAT_1004e9f8
#define DAT_1004e9f8 (*(double *)(0x1004e9f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004e8a8
 */

float recovered_1004e8a8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 extraout_r0_01 = 0;
  undefined4 extraout_r0_02 = 0;
  undefined4 uVar1;
  double *pdVar2;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 extraout_r1_01 = 0;
  undefined4 extraout_r1_02 = 0;
  undefined4 uVar3;
  undefined4 in_s1;
  double dVar4;
  double dVar5;

  if (ABS(in_r0) <= 1.0) {
    dVar4 = recovered_1004194c(pf_bits_double(CONCAT44(in_s1,value)));
    dVar5 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
    if (dVar5 <= 0.0) {
      if ((in_r0 < 0.0) || (0.0 <= dVar5)) {
        if (0.0 <= in_r0 || (0.0 <= in_r0 || 0.0 <= dVar5)) {
          if ((in_r0 <= 0.0) || (dVar5 != 0.0)) {
            pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0x0ULL});
            if (dVar5 == 0.0) {
              pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0xbff921fb54442d18ULL});
            }
            dVar4 = 0.0;
            if (in_r0 < 0.0) {
              dVar4 = *pdVar2;
            }
          }
          else {
            dVar4 = pf_bits_double(0x3ff921fb54442d18ULL);
          }
          goto LAB_1004e98c;
        }
        recovered_1004e210(dVar4);
        uVar1 = extraout_r0_02;
        uVar3 = extraout_r1_02;
        dVar4 = pf_bits_double(0xc00921fb54442d18ULL);
      }
      else {
        recovered_1004e210(dVar4);
        uVar1 = extraout_r0_01;
        uVar3 = extraout_r1_01;
        dVar4 = pf_bits_double(0x400921fb54442d18ULL);
      }
      dVar4 = pf_bits_double(CONCAT44(uVar3,uVar1)) + dVar4;
    }
    else {
      recovered_1004e210(dVar4);
      dVar4 = pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00));
    }
  }
  else {
    dVar4 = pf_bits_double(0x7ff8000000000000ULL);
  }
LAB_1004e98c:
  return (float)dVar4;
}

#undef DAT_1004e9d0
#undef DAT_1004e9d8
#undef DAT_1004e9e0
#undef DAT_1004e9e8
#undef DAT_1004e9f0
#undef DAT_1004e9f8

#undef DAT_1004eb10
#define DAT_1004eb10 (*(uint64_t *)(0x1004eb10U))
#undef DAT_1004eb18
#define DAT_1004eb18 (*(uint64_t *)(0x1004eb18U))
#undef DAT_1004eb30
#define DAT_1004eb30 (*(uint64_t *)(0x1004eb30U))
#undef DAT_1004eb38
#define DAT_1004eb38 (*(uint64_t *)(0x1004eb38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ea00
 */

double recovered_1004ea00(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double dVar1;
  double dVar2;

  if (ABS(pf_bits_double(CONCAT44(in_r1,in_r0))) <= 1.0) {
    dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0));
    value = recovered_1004194c(value);
    dVar2 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
    if (0.0 < dVar2) {
      dVar1 = recovered_1004e210(value);
      return dVar1;
    }
    if ((dVar1 < 0.0) || (0.0 <= dVar2)) {
      if (dVar1 < 0.0 && (dVar1 < 0.0 && dVar2 < 0.0)) {
        value = recovered_1004e210(value);
      }
    }
    else {
      value = recovered_1004e210(value);
    }
  }
  return value;
}

#undef DAT_1004eb10
#undef DAT_1004eb18
#undef DAT_1004eb30
#undef DAT_1004eb38

#undef DAT_1004ec50
#define DAT_1004ec50 (*(uint64_t *)(0x1004ec50U))
#undef DAT_1004ec58
#define DAT_1004ec58 (*(uint64_t *)(0x1004ec58U))
#undef DAT_1004ec70
#define DAT_1004ec70 (*(uint64_t *)(0x1004ec70U))
#undef DAT_1004ec78
#define DAT_1004ec78 (*(uint64_t *)(0x1004ec78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004eb40
 */

double recovered_1004eb40(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double dVar1;

  if (ABS(pf_bits_double(CONCAT44(in_r1,in_r0))) <= 1.0) {
    dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0));
    value = recovered_1004194c(value);
    if (0.0 < dVar1) {
      dVar1 = recovered_1004e210(value);
      return dVar1;
    }
    if ((0.0 <= dVar1) || (pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) < 0.0)) {
      if (dVar1 < 0.0 && (dVar1 < 0.0 && pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) < 0.0)) {
        value = recovered_1004e210(value);
      }
    }
    else {
      value = recovered_1004e210(value);
    }
  }
  return value;
}

#undef DAT_1004ec50
#undef DAT_1004ec58
#undef DAT_1004ec70
#undef DAT_1004ec78

#undef DAT_1004eda8
#define DAT_1004eda8 (*(double *)(0x1004eda8U))
#undef DAT_1004edb0
#define DAT_1004edb0 (*(double *)(0x1004edb0U))
#undef DAT_1004edb8
#define DAT_1004edb8 (*(uint64_t *)(0x1004edb8U))
#undef DAT_1004edc0
#define DAT_1004edc0 (*(uint64_t *)(0x1004edc0U))
#undef DAT_1004edc8
#define DAT_1004edc8 (*(double *)(0x1004edc8U))
#undef DAT_1004edd0
#define DAT_1004edd0 (*(double *)(0x1004edd0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ec80
 */

float recovered_1004ec80(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  undefined4 extraout_r0_01 = 0;
  undefined4 extraout_r0_02 = 0;
  undefined4 uVar1;
  double *pdVar2;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 extraout_r1_01 = 0;
  undefined4 extraout_r1_02 = 0;
  undefined4 uVar3;
  undefined4 in_s1;
  double dVar4;
  double dVar5;

  if (ABS(in_r0) <= 1.0) {
    dVar4 = recovered_1004194c(pf_bits_double(CONCAT44(in_s1,value)));
    dVar5 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
    if (in_r0 <= 0.0) {
      if ((0.0 <= in_r0) || (dVar5 < 0.0)) {
        if (0.0 <= in_r0 || (0.0 <= in_r0 || 0.0 <= dVar5)) {
          if ((in_r0 != 0.0) || (dVar5 <= 0.0)) {
            pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0x0ULL});
            if (dVar5 < 0.0) {
              pdVar2 = (double *)&(*(uint64_t *)(uint64_t[]){0xbff921fb54442d18ULL});
            }
            dVar4 = 0.0;
            if (in_r0 == 0.0) {
              dVar4 = *pdVar2;
            }
          }
          else {
            dVar4 = pf_bits_double(0x3ff921fb54442d18ULL);
          }
          goto LAB_1004ed64;
        }
        recovered_1004e210(dVar4);
        uVar1 = extraout_r0_02;
        uVar3 = extraout_r1_02;
        dVar4 = pf_bits_double(0xc00921fb54442d18ULL);
      }
      else {
        recovered_1004e210(dVar4);
        uVar1 = extraout_r0_01;
        uVar3 = extraout_r1_01;
        dVar4 = pf_bits_double(0x400921fb54442d18ULL);
      }
      dVar4 = pf_bits_double(CONCAT44(uVar3,uVar1)) + dVar4;
    }
    else {
      recovered_1004e210(dVar4);
      dVar4 = pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00));
    }
  }
  else {
    dVar4 = pf_bits_double(0x7ff8000000000000ULL);
  }
LAB_1004ed64:
  return (float)dVar4;
}

#undef DAT_1004eda8
#undef DAT_1004edb0
#undef DAT_1004edb8
#undef DAT_1004edc0
#undef DAT_1004edc8
#undef DAT_1004edd0

#undef DAT_1004eee8
#define DAT_1004eee8 (*(uint64_t *)(0x1004eee8U))
#undef DAT_1004eef0
#define DAT_1004eef0 (*(uint64_t *)(0x1004eef0U))
#undef DAT_1004ef08
#define DAT_1004ef08 (*(uint64_t *)(0x1004ef08U))
#undef DAT_1004ef10
#define DAT_1004ef10 (*(uint64_t *)(0x1004ef10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004edd8
 */

double recovered_1004edd8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 in_r1;
  undefined4 extraout_r1 = 0;
  double dVar1;

  if (ABS(pf_bits_double(CONCAT44(in_r1,in_r0))) <= 1.0) {
    dVar1 = pf_bits_double(CONCAT44(in_r1,in_r0));
    value = recovered_1004194c(value);
    if (0.0 < dVar1) {
      dVar1 = recovered_1004e210(value);
      return dVar1;
    }
    if ((0.0 <= dVar1) || (pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) < 0.0)) {
      if (dVar1 < 0.0 && (dVar1 < 0.0 && pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) < 0.0)) {
        value = recovered_1004e210(value);
      }
    }
    else {
      value = recovered_1004e210(value);
    }
  }
  return value;
}

#undef DAT_1004eee8
#undef DAT_1004eef0
#undef DAT_1004ef08
#undef DAT_1004ef10

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ef18
 */

double recovered_1004ef18(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041bc8(value);
  dVar1 = recovered_10041b08(dVar1);
  return dVar1;
}


#undef DAT_1004eff8
#define DAT_1004eff8 (*(uint64_t *)(0x1004eff8U))
#undef DAT_1004f000
#define DAT_1004f000 (*(uint64_t *)(0x1004f000U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ef88
 */

float recovered_1004ef88(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r0_00 = 0;
  double *pdVar1;
  undefined4 extraout_r1 = 0;
  undefined4 extraout_r1_00 = 0;
  undefined4 in_s1;
  double dVar2;

  dVar2 = recovered_10041bc8(pf_bits_double(CONCAT44(in_s1,in_r0)));
  recovered_10041b08(dVar2);
  if (pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) == 0.0) {
    pdVar1 = (double *)&(*(uint64_t *)(uint64_t[]){0xfff0000000000000ULL});
    if (0.0 <= pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00))) {
      pdVar1 = (double *)&(*(uint64_t *)(uint64_t[]){0x7ff0000000000000ULL});
    }
    dVar2 = *pdVar1;
  }
  else {
    dVar2 = pf_bits_double(CONCAT44(extraout_r1_00,extraout_r0_00)) /
            pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
  }
  return (float)dVar2;
}

#undef DAT_1004eff8
#undef DAT_1004f000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f008
 */

double recovered_1004f008(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041bc8(value);
  dVar1 = recovered_10041b08(dVar1);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f078
 */

double recovered_1004f078(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
      0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f100
 */

float recovered_1004f100(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  dVar3 = (double)value;
  if (0.5 < value) {
    do {
      dVar3 = dVar3 * 0.5;
      iVar1 = iVar1 + 1;
    } while (0.5 < dVar3);
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)dVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f1a8
 */

double recovered_1004f1a8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = (double)(((ulonglong)value & 0xffffffff00000000) + ((ulonglong)value & 0xffffffff));
      0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4;
}


#undef DAT_1004f2c0
#define DAT_1004f2c0 (*(double *)(0x1004f2c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f230
 */

double recovered_1004f230(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)) * pf_bits_double(0x3fe62e42fefa39efULL); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}

#undef DAT_1004f2c0

#undef DAT_1004f360
#define DAT_1004f360 (*(double *)(0x1004f360U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f2c8
 */

float recovered_1004f2c8(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = (double)in_r0 * pf_bits_double(0x3fe62e42fefa39efULL); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)dVar4;
}

#undef DAT_1004f360

#undef DAT_1004f3f8
#define DAT_1004f3f8 (*(double *)(0x1004f3f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f368
 */

double recovered_1004f368(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)) * pf_bits_double(0x3fe62e42fefa39efULL); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}

#undef DAT_1004f3f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f400
 */

double recovered_1004f400(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(param_2,param_1)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4 + -1.0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f490
 */

float recovered_1004f490(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  dVar3 = (double)param_1;
  if (0.5 < param_1) {
    do {
      dVar3 = dVar3 * 0.5;
      iVar1 = iVar1 + 1;
    } while (0.5 < dVar3);
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)(dVar4 + -1.0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f540
 */

double recovered_1004f540(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(param_2,param_1)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return dVar4 + -1.0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f5d0
 */

double recovered_1004f5d0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f668
 */

float recovered_1004f668(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  dVar3 = (double)in_r0;
  if (0.5 < in_r0) {
    do {
      dVar3 = dVar3 * 0.5;
      iVar1 = iVar1 + 1;
    } while (0.5 < dVar3);
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)((dVar4 + -1.0 / dVar4) * 0.5);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f714
 */

double recovered_1004f714(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f7ac
 */

double recovered_1004f7ac(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f844
 */

float recovered_1004f844(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  dVar3 = (double)in_r0;
  if (0.5 < in_r0) {
    do {
      dVar3 = dVar3 * 0.5;
      iVar1 = iVar1 + 1;
    } while (0.5 < dVar3);
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)((dVar4 + 1.0 / dVar4) * 0.5);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f8f0
 */

double recovered_1004f8f0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004f988
 */

double recovered_1004f988(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)) + pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3;
      dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fa28
 */

float recovered_1004fa28(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  iVar1 = 0;
  for (dVar3 = (double)in_r0 + (double)in_r0; 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 * (dVar3 / dVar5);
    dVar5 = dVar5 + 1.0;
    dVar4 = dVar4 + dVar6;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar4 = dVar4 * dVar4;
  }
  return (float)((dVar4 + -1.0) / (dVar4 + 1.0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fad0
 */

double recovered_1004fad0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  for (dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0)) + pf_bits_double(CONCAT44(in_r1,in_r0)); 0.5 < dVar3;
      dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}


#undef DAT_1004fb90
#define DAT_1004fb90 (*(uint64_t *)(0x1004fb90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fb70
 */

double recovered_1004fb70(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041998(value);
  return dVar1;
}

#undef DAT_1004fb90

#undef DAT_1004fbc8
#define DAT_1004fbc8 (*(double *)(0x1004fbc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fb98
 */

float recovered_1004fb98(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10041998(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)(pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) / pf_bits_double(0x3fe62e42fefa39efULL));
}

#undef DAT_1004fbc8

#undef DAT_1004fbf0
#define DAT_1004fbf0 (*(uint64_t *)(0x1004fbf0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fbd0
 */

double recovered_1004fbd0(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041998(value);
  return dVar1;
}

#undef DAT_1004fbf0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fbf8
 */

double recovered_1004fbf8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041998(value);
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fc0c
 */

float recovered_1004fc0c(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10041998(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fc3c
 */

double recovered_1004fc3c(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041998(value);
  return dVar1;
}


#undef DAT_1004fcb0
#define DAT_1004fcb0 (*(uint64_t *)(0x1004fcb0U))
#undef DAT_1004fcb8
#define DAT_1004fcb8 (*(uint64_t *)(0x1004fcb8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fc50
 */

double recovered_1004fc50(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  uint in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) == 0.0) {
    return value;
  }
  if ((in_r1 & 0x7fffffff) < 0x7ff00000) {
    dVar1 = recovered_10041c78(value);
    dVar1 = recovered_10041998(dVar1);
    dVar1 = recovered_100418d8(dVar1);
    return dVar1;
  }
  return value;
}

#undef DAT_1004fcb0
#undef DAT_1004fcb8

#undef DAT_1004fd38
#define DAT_1004fd38 (*(double *)(0x1004fd38U))
#undef DAT_1004fd40
#define DAT_1004fd40 (*(uint64_t *)(0x1004fd40U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fcc0
 */

float recovered_1004fcc0(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;
  double dVar1;

  if (in_r0 == 0.0) {
    dVar1 = pf_bits_double(0xfff0000000000000ULL);
  }
  else {
    dVar1 = (double)in_r0;
    if (((uint)(pf_double_bits(dVar1) >> 0x20) & 0x7fffffff) < 0x7ff00000) {
      dVar1 = recovered_10041c78(pf_bits_double(CONCAT44(in_s1,in_r0)));
      dVar1 = recovered_10041998(dVar1);
      recovered_100418d8(dVar1);
      dVar1 = pf_bits_double(CONCAT44(extraout_r1,extraout_r0));
    }
    else {
      dVar1 = dVar1 * dVar1;
    }
  }
  return (float)dVar1;
}

#undef DAT_1004fd38
#undef DAT_1004fd40

#undef DAT_1004fda8
#define DAT_1004fda8 (*(uint64_t *)(0x1004fda8U))
#undef DAT_1004fdb0
#define DAT_1004fdb0 (*(uint64_t *)(0x1004fdb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fd48
 */

double recovered_1004fd48(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  uint in_r1;
  double dVar1;

  if (pf_bits_double(CONCAT44(in_r1,in_r0)) == 0.0) {
    return value;
  }
  if ((in_r1 & 0x7fffffff) < 0x7ff00000) {
    dVar1 = recovered_10041c78(value);
    dVar1 = recovered_10041998(dVar1);
    dVar1 = recovered_100418d8(dVar1);
    return dVar1;
  }
  return value;
}

#undef DAT_1004fda8
#undef DAT_1004fdb0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fdb8
 */

double recovered_1004fdb8(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined8 *in_r2;
  double dVar1;

  dVar1 = recovered_10042110(value);
  if (in_r2 != (undefined8 *)0x0) {
    *in_r2 = CONCAT44(extraout_r1,extraout_r0);
  }
  return dVar1;
}


/* Recovered supplied modff implementation; Pooka's Free Software License. */
float recovered_1004fdec(float value,float *integer_part){double integral=0;float fraction=(float)recovered_1004fdb8((double)value,&integral);if(integer_part)*integer_part=(float)integral;return fraction;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fe34
 */

double recovered_1004fe34(double value,double *integer_part)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined8 *in_r2;
  double dVar1;

  dVar1 = recovered_10042110(value);
  if (in_r2 != (undefined8 *)0x0) {
    *in_r2 = CONCAT44(extraout_r1,extraout_r0);
  }
  return dVar1;
}


#undef DAT_1004ff60
#define DAT_1004ff60 (*(uint64_t *)(0x1004ff60U))
#undef DAT_1004ff68
#define DAT_1004ff68 (*(uint64_t *)(0x1004ff68U))
#undef DAT_1004ff70
#define DAT_1004ff70 (*(uint64_t *)(0x1004ff70U))
#undef DAT_1004ff78
#define DAT_1004ff78 (*(uint64_t *)(0x1004ff78U))
#undef DAT_1004ff80
#define DAT_1004ff80 (*(uint64_t *)(0x1004ff80U))
#undef DAT_1004ff88
#define DAT_1004ff88 (*(uint64_t *)(0x1004ff88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004fe68
 */

double recovered_1004fe68(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0));
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar3 = -pf_bits_double(CONCAT44(in_r1,in_r0));
  }
  for (dVar3 = -(dVar3 * dVar3); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}

#undef DAT_1004ff60
#undef DAT_1004ff68
#undef DAT_1004ff70
#undef DAT_1004ff78
#undef DAT_1004ff80
#undef DAT_1004ff88

#undef DAT_10050088
#define DAT_10050088 (*(double *)(0x10050088U))
#undef DAT_10050090
#define DAT_10050090 (*(double *)(0x10050090U))
#undef DAT_10050098
#define DAT_10050098 (*(double *)(0x10050098U))
#undef DAT_100500a0
#define DAT_100500a0 (*(double *)(0x100500a0U))
#undef DAT_100500a8
#define DAT_100500a8 (*(double *)(0x100500a8U))
#undef DAT_100500b0
#define DAT_100500b0 (*(double *)(0x100500b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1004ff90
 */

float recovered_1004ff90(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;

  iVar1 = 0;
  dVar3 = (double)in_r0;
  if (in_r0 < 0.0) {
    dVar3 = -(double)in_r0;
  }
  for (dVar4 = -(dVar3 * dVar3); 0.5 < dVar4; dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar4 < -0.5; dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar6 = 1.0;
  dVar5 = 1.0;
  dVar7 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar7 = dVar7 * (dVar4 / dVar6);
    dVar6 = dVar6 + 1.0;
    dVar5 = dVar5 + dVar7;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar5 = dVar5 * dVar5;
  }
  dVar3 = 1.0 / (dVar3 * pf_bits_double(0x3fd4f740a93d7b8cULL) + 1.0);
  dVar3 = 1.0 - dVar3 * (pf_bits_double(0x3fd04f20c6ec5a7eULL) +
                        (pf_bits_double(0xbfd23531cc3c1469ULL) +
                        (pf_bits_double(0x3ff6be1c55bae157ULL) + (pf_bits_double(0xbff7401c57014c39ULL) + dVar3 * pf_bits_double(0x3ff0fb844255a12dULL)) * dVar3) * dVar3) *
                        dVar3) * dVar5;
  if (in_r0 < 0.0) {
    dVar3 = -dVar3;
  }
  return (float)dVar3;
}

#undef DAT_10050088
#undef DAT_10050090
#undef DAT_10050098
#undef DAT_100500a0
#undef DAT_100500a8
#undef DAT_100500b0

#undef DAT_100501b0
#define DAT_100501b0 (*(uint64_t *)(0x100501b0U))
#undef DAT_100501b8
#define DAT_100501b8 (*(uint64_t *)(0x100501b8U))
#undef DAT_100501c0
#define DAT_100501c0 (*(uint64_t *)(0x100501c0U))
#undef DAT_100501c8
#define DAT_100501c8 (*(uint64_t *)(0x100501c8U))
#undef DAT_100501d0
#define DAT_100501d0 (*(uint64_t *)(0x100501d0U))
#undef DAT_100501d8
#define DAT_100501d8 (*(uint64_t *)(0x100501d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100500b8
 */

double recovered_100500b8(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  double dVar3;

  iVar1 = 0;
  dVar3 = pf_bits_double(CONCAT44(in_r1,in_r0));
  if (pf_bits_double(CONCAT44(in_r1,in_r0)) < 0.0) {
    dVar3 = -pf_bits_double(CONCAT44(in_r1,in_r0));
  }
  for (dVar3 = -(dVar3 * dVar3); 0.5 < dVar3; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar3 < -0.5; dVar3 = dVar3 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
  }
  return value;
}

#undef DAT_100501b0
#undef DAT_100501b8
#undef DAT_100501c0
#undef DAT_100501c8
#undef DAT_100501d0
#undef DAT_100501d8

#undef DAT_100502e0
#define DAT_100502e0 (*(double *)(0x100502e0U))
#undef DAT_100502e8
#define DAT_100502e8 (*(double *)(0x100502e8U))
#undef DAT_100502f0
#define DAT_100502f0 (*(double *)(0x100502f0U))
#undef DAT_100502f8
#define DAT_100502f8 (*(double *)(0x100502f8U))
#undef DAT_10050300
#define DAT_10050300 (*(double *)(0x10050300U))
#undef DAT_10050308
#define DAT_10050308 (*(double *)(0x10050308U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100501e0
 */

double recovered_100501e0(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar1 = 0;
  dVar4 = dVar3;
  if (dVar3 < 0.0) {
    dVar4 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  for (dVar5 = -(dVar4 * dVar4); 0.5 < dVar5; dVar5 = dVar5 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar5 < -0.5; dVar5 = dVar5 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar7 = 1.0;
  dVar6 = 1.0;
  dVar8 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar8 = dVar8 * (dVar5 / dVar7);
    dVar7 = dVar7 + 1.0;
    dVar6 = dVar6 + dVar8;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar6 = dVar6 * dVar6;
  }
  dVar4 = 1.0 / (dVar4 * pf_bits_double(0x3fd4f740a93d7b8cULL) + 1.0);
  dVar4 = 1.0 - dVar4 * (pf_bits_double(0x3fd04f20c6ec5a7eULL) +
                        (pf_bits_double(0xbfd23531cc3c1469ULL) +
                        (pf_bits_double(0x3ff6be1c55bae157ULL) + (pf_bits_double(0xbff7401c57014c39ULL) + dVar4 * pf_bits_double(0x3ff0fb844255a12dULL)) * dVar4) * dVar4) *
                        dVar4) * dVar6;
  if (dVar3 < 0.0) {
    dVar4 = -dVar4;
  }
  return 1.0 - dVar4;
}

#undef DAT_100502e0
#undef DAT_100502e8
#undef DAT_100502f0
#undef DAT_100502f8
#undef DAT_10050300
#undef DAT_10050308

#undef DAT_10050410
#define DAT_10050410 (*(double *)(0x10050410U))
#undef DAT_10050418
#define DAT_10050418 (*(double *)(0x10050418U))
#undef DAT_10050420
#define DAT_10050420 (*(double *)(0x10050420U))
#undef DAT_10050428
#define DAT_10050428 (*(double *)(0x10050428U))
#undef DAT_10050430
#define DAT_10050430 (*(double *)(0x10050430U))
#undef DAT_10050438
#define DAT_10050438 (*(double *)(0x10050438U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050310
 */

float recovered_10050310(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;

  iVar1 = 0;
  dVar3 = (double)param_1;
  if (param_1 < 0.0) {
    dVar3 = -(double)param_1;
  }
  for (dVar4 = -(dVar3 * dVar3); 0.5 < dVar4; dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar4 < -0.5; dVar4 = dVar4 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar6 = 1.0;
  dVar5 = 1.0;
  dVar7 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar7 = dVar7 * (dVar4 / dVar6);
    dVar6 = dVar6 + 1.0;
    dVar5 = dVar5 + dVar7;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar5 = dVar5 * dVar5;
  }
  dVar3 = 1.0 / (dVar3 * pf_bits_double(0x3fd4f740a93d7b8cULL) + 1.0);
  dVar3 = 1.0 - dVar3 * (pf_bits_double(0x3fd04f20c6ec5a7eULL) +
                        (pf_bits_double(0xbfd23531cc3c1469ULL) +
                        (pf_bits_double(0x3ff6be1c55bae157ULL) + (pf_bits_double(0xbff7401c57014c39ULL) + dVar3 * pf_bits_double(0x3ff0fb844255a12dULL)) * dVar3) * dVar3) *
                        dVar3) * dVar5;
  if (param_1 < 0.0) {
    dVar3 = -dVar3;
  }
  return (float)(1.0 - dVar3);
}

#undef DAT_10050410
#undef DAT_10050418
#undef DAT_10050420
#undef DAT_10050428
#undef DAT_10050430
#undef DAT_10050438

#undef DAT_10050540
#define DAT_10050540 (*(double *)(0x10050540U))
#undef DAT_10050548
#define DAT_10050548 (*(double *)(0x10050548U))
#undef DAT_10050550
#define DAT_10050550 (*(double *)(0x10050550U))
#undef DAT_10050558
#define DAT_10050558 (*(double *)(0x10050558U))
#undef DAT_10050560
#define DAT_10050560 (*(double *)(0x10050560U))
#undef DAT_10050568
#define DAT_10050568 (*(double *)(0x10050568U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050440
 */

double recovered_10050440(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar1 = 0;
  dVar4 = dVar3;
  if (dVar3 < 0.0) {
    dVar4 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  for (dVar5 = -(dVar4 * dVar4); 0.5 < dVar5; dVar5 = dVar5 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar5 < -0.5; dVar5 = dVar5 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0x1c;
  dVar7 = 1.0;
  dVar6 = 1.0;
  dVar8 = 1.0;
  do {
    iVar2 = iVar2 + -1;
    dVar8 = dVar8 * (dVar5 / dVar7);
    dVar7 = dVar7 + 1.0;
    dVar6 = dVar6 + dVar8;
  } while (iVar2 != 0);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    dVar6 = dVar6 * dVar6;
  }
  dVar4 = 1.0 / (dVar4 * pf_bits_double(0x3fd4f740a93d7b8cULL) + 1.0);
  dVar4 = 1.0 - dVar4 * (pf_bits_double(0x3fd04f20c6ec5a7eULL) +
                        (pf_bits_double(0xbfd23531cc3c1469ULL) +
                        (pf_bits_double(0x3ff6be1c55bae157ULL) + (pf_bits_double(0xbff7401c57014c39ULL) + dVar4 * pf_bits_double(0x3ff0fb844255a12dULL)) * dVar4) * dVar4) *
                        dVar4) * dVar6;
  if (dVar3 < 0.0) {
    dVar4 = -dVar4;
  }
  return 1.0 - dVar4;
}

#undef DAT_10050540
#undef DAT_10050548
#undef DAT_10050550
#undef DAT_10050558
#undef DAT_10050560
#undef DAT_10050568

#undef DAT_10050590
#define DAT_10050590 (*(uint64_t *)(0x10050590U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050570
 */

double recovered_10050570(double value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10041998(value);
  return dVar1;
}

#undef DAT_10050590

#undef DAT_100505c8
#define DAT_100505c8 (*(double *)(0x100505c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050598
 */

float recovered_10050598(float value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 in_r0;
  undefined4 extraout_r0 = 0;
  undefined4 extraout_r1 = 0;
  undefined4 in_s1;

  recovered_10041998(pf_bits_double(CONCAT44(in_s1,in_r0)));
  return (float)(pf_bits_double(CONCAT44(extraout_r1,extraout_r0)) / pf_bits_double(0x40026bb1bbb55516ULL));
}

#undef DAT_100505c8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100505d0
 */

int recovered_100505d0(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1004252c(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100505dc
 */

long recovered_100505dc(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1004252c(text,(char **)0x0,10);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100505e8
 */

longlong recovered_100505e8(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1004252c(text,(char **)0x0,10);
  return (longlong)lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050604
 */

double recovered_10050604(char *text,char **endptr,int in_s0,undefined4 in_s1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;

  for (pbVar2 = (byte *)text; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  pbVar2 = pbVar2 + ((uVar1 - 0x2b & 0xfffffffd) == 0);
  uVar1 = (uint)*pbVar2;
  uVar7 = uVar1 - 0x30;
  uVar4 = uVar7;
  while (uVar4 < 10) {
    in_s0 = uVar1 - 0x30;
    pbVar2 = pbVar2 + 1;
    uVar1 = (uint)*pbVar2;
    uVar4 = uVar1 - 0x30;
    VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
  }
  if (uVar1 == 0x2e) {
    uVar1 = (uint)pbVar2[1];
    pbVar5 = pbVar2 + 1;
    if (9 < uVar1 - 0x30) goto LAB_100428c0;
    pbVar2 = pbVar2 + 2;
    do {
      pbVar5 = pbVar2;
      in_s0 = uVar1 - 0x30;
      uVar1 = (uint)*pbVar5;
      VectorUnsignedToFloat(in_s0,(byte)(in_fpscr >> 0x16) & 3);
      pbVar2 = pbVar5 + 1;
    } while (uVar1 - 0x30 < 10);
  }
  else {
    pbVar5 = pbVar2;
LAB_100428c0:
    if (9 < uVar7) {
      if (endptr != (char **)0x0) {
        *endptr = text;
        return pf_bits_double(CONCAT44(in_s1,in_s0));
      }
      goto LAB_100429ac;
    }
  }
  if ((uVar1 | 0x20) == 0x65) {
    iVar6 = 1;
    pbVar2 = pbVar5 + 1;
    if (*pbVar2 == 0x2b) {
      pbVar2 = pbVar5 + 2;
    }
    else if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar5 + 2;
      iVar6 = -1;
    }
    uVar1 = *pbVar2 - 0x30U;
    if (uVar1 < 10) {
      iVar3 = 0;
      uVar4 = (uint)*pbVar2;
      do {
        pbVar2 = pbVar2 + 1;
        iVar3 = uVar4 + iVar3 * 10 + -0x30;
        uVar4 = (uint)*pbVar2;
      } while (*pbVar2 - 0x30U < 10);
      if (uVar1 < 10) {
        uVar1 = iVar3 * iVar6;
        if ((int)uVar1 < 1) {
          if (0x7fffffff < uVar1) {
            do {
              bVar8 = uVar1 != 0xffffffff;
              uVar1 = uVar1 + 1;
            } while (bVar8);
          }
        }
        else {
          uVar1 = uVar1 + 1;
          do {
            uVar1 = uVar1 - 1;
          } while (1 < uVar1);
        }
        pbVar5 = pbVar2;
      }
    }
  }
  if (endptr != (char **)0x0) {
    *endptr = (char *)pbVar5;
  }
LAB_100429ac:
  return pf_bits_double(CONCAT44(in_s1,in_s0));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050608
 */

void recovered_10050608(char *param_1,undefined8 in_d0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100427e0(param_1,(char **)0x0,(int)in_d0,(int)((ulonglong)in_d0 >> 0x20));
  return;
}


#define auStack_124 (*(undefined1 (*)[260])(frame + 44))
#define local_140 (*(undefined8 * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050610
 */

void recovered_10050610(void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  void *source;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint unaff_r5;
  undefined8 *puVar9;
  void *source_00;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;

  if (base != (void *)0x0) {
    unaff_r5 = size;
  }
  if ((base != (void *)0x0 && size != 0) && (compare != (pf_compare *)0x0 && count != 0)) {
    uVar2 = unaff_r5 & 0x7ffffff0;
    uVar8 = 0;
    puVar10 = base;
    local_140 = base;
    do {
      local_140 = (undefined8 *)((int)local_140 + unaff_r5);
      uVar6 = uVar8 + 1;
      if (uVar6 < count) {
        source = (void *)(uVar8 * unaff_r5 + (int)base);
        uVar8 = uVar6;
        puVar9 = local_140;
        do {
          source_00 = (void *)(uVar8 * unaff_r5 + (int)base);
          iVar3 = (*compare)(source,source_00);
          if (0 < iVar3) {
            if (unaff_r5 < 0x101) {
              recovered_10040088(auStack_124,source,unaff_r5);
              recovered_10040088(source,source_00,unaff_r5);
              recovered_10040088(source_00,auStack_124,unaff_r5);
            }
            else {
              uVar4 = uVar2;
              puVar5 = puVar9;
              puVar7 = puVar10;
              if ((int)unaff_r5 < 0) {
                uVar4 = 0;
              }
              else {
                do {
                  uVar11 = puVar7[1];
                  uVar4 = uVar4 - 0x10;
                  uVar12 = *puVar5;
                  uVar13 = puVar5[1];
                  *puVar5 = *puVar7;
                  puVar5[1] = uVar11;
                  puVar5 = puVar5 + 2;
                  *puVar7 = uVar12;
                  puVar7[1] = uVar13;
                  puVar7 = puVar7 + 2;
                } while (uVar4 != 0);
                uVar4 = uVar2;
                if (uVar2 == unaff_r5) goto LAB_100506f4;
              }
              iVar3 = -uVar4;
              do {
                uVar1 = *(undefined1 *)((int)puVar10 - iVar3);
                *(undefined1 *)((int)puVar10 - iVar3) = *(undefined1 *)((int)puVar9 - iVar3);
                *(undefined1 *)((int)puVar9 - iVar3) = uVar1;
                iVar3 = iVar3 + -1;
              } while (-iVar3 != unaff_r5);
            }
          }
LAB_100506f4:
          uVar8 = uVar8 + 1;
          puVar9 = (undefined8 *)((int)puVar9 + unaff_r5);
        } while (uVar8 != count);
      }
      puVar10 = (undefined8 *)((int)puVar10 + unaff_r5);
      uVar8 = uVar6;
    } while (uVar6 != count);
  }
  return;
}

#undef auStack_124
#undef local_140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050794
 */

void * recovered_10050794(void *key,void *base,ulong count,ulong size,pf_compare *compare)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  pf_compare *pcVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *unaff_r10;
  uint uVar5;

  pvVar3 = (void *)0x0;
  if (key != (void *)0x0) {
    unaff_r10 = base;
  }
  if (key != (void *)0x0 && base != (void *)0x0) {
    pcVar1 = (pf_compare *)0x0;
    if (size != 0) {
      pcVar1 = compare;
    }
    if (size != 0 && pcVar1 != (pf_compare *)0x0) {
      uVar5 = 0;
      do {
        if (count <= uVar5) {
          return (void *)0x0;
        }
        uVar4 = uVar5 + (count - uVar5 >> 1);
        pvVar3 = (void *)(uVar4 * size + (int)unaff_r10);
        iVar2 = (*compare)(key,pvVar3);
        if (-1 < iVar2) {
          uVar5 = uVar4 + 1;
          uVar4 = count;
        }
        count = uVar4;
      } while (iVar2 != 0);
    }
  }
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1005082c
 */

int recovered_1005082c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((value - 9U < 0x18) && ((1 << (value - 9U & 0xff) & 0x80001bU) != 0)) {
    return 1;
  }
  return (uint)(value == 0xb);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1005086c
 */

int recovered_1005086c(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x30U < 10);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050880
 */

int recovered_10050880(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x30U < 10 || (value & 0xffffffdfU) - 0x41 < 6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100508ac
 */

int recovered_100508ac(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = value - 0x30;
  bVar1 = true;
  bVar3 = 9 < uVar2;
  if (bVar3) {
    uVar2 = value - 0x61;
  }
  if ((bVar3 && 0x19 < uVar2) && (bVar1 = false, value - 0x41U < 0x1a)) {
    bVar1 = true;
  }
  if ((0x17 < value - 9U) || (uVar2 = 0, (1 << (value - 9U & 0xff) & 0x80001bU) == 0)) {
    uVar2 = (uint)(value != 0xb);
  }
  if (bVar1) {
    uVar2 = 0;
  }
  if (0x5d < value - 0x21U) {
    uVar2 = 0;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050920
 */

int recovered_10050920(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)((uint)value < 0x20 || value == 0x7f);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050940
 */

int recovered_10050940(int value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (uint)(value - 0x21U < 0x5e);
}


#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010968
#define DAT_40010968 (*(uint8_t *)(0x40010968U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010968
#define _DAT_40010968 (*(code * *)(0x40010968U))
#define local_14 (*(int *)(frame + 44))
#define auStack_24 (*(undefined1 (*)[16])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050954
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10050954(void)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = 0;
  recovered_10040818(auStack_24,0,0x18);
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x16b < _DAT_40010808)) &&
     ((_DAT_40010968 != (code *)0x0 && (iVar1 = (*_DAT_40010968)(auStack_24), iVar1 != 0)))) {
    iVar2 = local_14 * 0x37;
  }
  return iVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010968
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010968
#undef local_14
#undef auStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100509e4
 */

double recovered_100509e4(long end,long start)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  double dVar1;

  dVar1 = (double)VectorSignedToFloat(end - start,(byte)(in_fpscr >> 0x16) & 3);
  return dVar1;
}


/* Native calendar validation and epoch arithmetic; Pooka's Free Software License. */
static int pf_snow_leap(uint32_t year){return year%4==0&&(year%100!=0||year%400==0);}
int recovered_100509f8(uint32_t *tm){
 static const unsigned months[]={31,28,31,30,31,30,31,31,30,31,30,31};
 if(!tm||(int32_t)tm[5]<70||tm[4]>11||tm[3]<1||tm[2]>23||tm[1]>59||tm[0]>60)return -1;
 uint32_t year=tm[5]+1900,month=tm[4],day=tm[3];
 if(day>months[month]+(month==1&&pf_snow_leap(year)))return -1;
 uint64_t y=year-1,days=365ULL*(year-1970)+(y/4-y/100+y/400)-(1969/4-1969/100+1969/400);
 unsigned yday=day-1;for(unsigned i=0;i<month;i++)yday+=months[i]+(i==1&&pf_snow_leap(year));
 days+=yday;tm[7]=yday;tm[6]=(days+4)%7;
 return (int32_t)(days*86400+tm[2]*3600+tm[1]*60+(tm[0]==60?59:tm[0]));
}


#undef DAT_10053fb8
#define DAT_10053fb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050ce8
 */

int recovered_10050ce8(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  if ((int)param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x1f;
    if (param_2 != 1) {
      uVar2 = param_1 * -0x3d70a3d7 + 0x51eb850;
      iVar1 = 0x3c;
      if (0xa3d70a < (uVar2 >> 4 | param_1 * -0x70000000)) {
        iVar1 = 0x3b;
      }
      if (0x28f5c28 < (uVar2 >> 2 | param_1 * 0x40000000)) {
        iVar1 = 0x3c;
      }
      if ((param_1 & 3) != 0) {
        iVar1 = 0x3b;
      }
      if (param_2 != 2) {
        uVar2 = 2;
        do {
          iVar3 = 0;
          if (uVar2 < 0xc) {
            iVar3 = *(int *)(&DAT_10053fb8 + uVar2 * 4);
          }
          uVar2 = uVar2 + 1;
          iVar1 = iVar3 + iVar1;
        } while (param_2 != uVar2);
      }
    }
  }
  return param_3 + iVar1 + -1;
}

#undef DAT_10053fb8

#undef DAT_10055574
#define DAT_10055574 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x386cU)))
#undef DAT_10055578
#define DAT_10055578 (*(uint *)(((uintptr_t)pf_module_state + 0x3870U)))
#undef DAT_1005557c
#define DAT_1005557c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3874U)))
#undef DAT_10055580
#define DAT_10055580 (*(int *)(((uintptr_t)pf_module_state + 0x3878U)))
#undef DAT_10055584
#define DAT_10055584 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x387cU)))
#undef DAT_10055588
#define DAT_10055588 (*(int *)(((uintptr_t)pf_module_state + 0x3880U)))
#undef DAT_1005558c
#define DAT_1005558c (*(uint *)(((uintptr_t)pf_module_state + 0x3884U)))
#undef DAT_10055590
#define DAT_10055590 (*(uint *)(((uintptr_t)pf_module_state + 0x3888U)))
#undef DAT_10055594
#define DAT_10055594 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x388cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10050d94
 */

undefined4 * recovered_10050d94(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;

  recovered_10040818(&DAT_10055574,0,0x24);
  if (param_1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1 & ~((int)*param_1 >> 0x1f);
  }
  uVar4 = uVar3 / 0x15180 + 4;
  uVar9 = (uVar4 & 0xffff) * 0x2493;
  DAT_10055588 = 0x45;
  DAT_1005558c = uVar4 + (((uVar4 - (uVar9 >> 0x10) & 0xffff) >> 1) + (uVar9 >> 0x10) >> 2) * -7 &
                 0xffff;
  uVar4 = 0x7b2;
  uVar9 = 0;
  uVar10 = uVar3 / 0x15180;
  do {
    DAT_10055590 = uVar10;
    uVar5 = uVar9;
    uVar6 = uVar4;
    if ((uVar6 & 3) == 0) {
      uVar7 = 0x16d;
      if ((uVar6 / 100) * 100 != uVar6 || (uVar6 / 400) * 400 == uVar6) {
        uVar7 = 0x16e;
      }
    }
    else {
      uVar7 = 0x16d;
    }
    DAT_10055588 = DAT_10055588 + 1;
    uVar4 = uVar6 + 1;
    uVar9 = uVar5 - (uVar7 > DAT_10055590);
    uVar10 = DAT_10055590 - uVar7;
  } while (uVar5 != 0 || uVar5 < (uVar7 <= DAT_10055590));
  uVar10 = DAT_10055590 - 0x1f;
  uVar9 = uVar5 - (0x1e >= DAT_10055590);
  uVar8 = 0;
  uVar4 = DAT_10055590;
  if (uVar5 != 0 || uVar5 < (0x1e < DAT_10055590)) {
    uVar4 = uVar6 * -0x3d70a3d7 + 0x51eb850;
    uVar5 = 0x1d;
    if ((uVar6 & 3) != 0 ||
        (uVar4 >> 2 | uVar6 * 0x40000000) < 0x28f5c29 &&
        0xa3d70a < (uVar4 >> 4 | uVar6 * -0x70000000)) {
      uVar5 = 0x1c;
    }
    if (uVar9 == 0 && (uVar5 <= uVar10) <= uVar9) {
      uVar8 = 1;
      uVar4 = uVar10;
    }
    else {
      uVar6 = uVar10 - uVar5;
      uVar8 = 2;
      uVar9 = uVar9 - (uVar10 < uVar5);
      uVar4 = (uint)(0x1e >= uVar6);
      if (uVar9 == 0 && (0x1e < uVar6) <= uVar9) {
        uVar4 = uVar6;
      }
      else {
        uVar10 = uVar6 - 0x3d;
        if (uVar9 == uVar4 && (uint)(0x1d < uVar6 - 0x1f) <= uVar9 - uVar4) {
          uVar8 = 3;
          uVar4 = uVar6 - 0x1f;
        }
        else {
          uVar4 = uVar6 - 0x5c;
          if (uVar9 == uVar6 < 0x3d && (uint)(0x1e < uVar10) <= uVar9 - (uVar6 < 0x3d)) {
            uVar8 = 4;
          }
          else {
            uVar10 = uVar6 - 0x7a;
            if (uVar9 == uVar6 < 0x5c && (uint)(0x1d < uVar4) <= uVar9 - (uVar6 < 0x5c)) {
              uVar8 = 5;
              goto LAB_10050fb8;
            }
            uVar4 = uVar6 - 0x99;
            if (uVar9 == uVar6 < 0x7a && (uint)(0x1e < uVar10) <= uVar9 - (uVar6 < 0x7a)) {
              uVar8 = 6;
            }
            else {
              uVar10 = uVar6 - 0xb8;
              if (uVar9 == uVar6 < 0x99 && (uint)(0x1e < uVar4) <= uVar9 - (uVar6 < 0x99)) {
                uVar8 = 7;
                goto LAB_10050fb8;
              }
              uVar4 = uVar6 - 0xd6;
              if (uVar9 != uVar6 < 0xb8 || uVar9 - (uVar6 < 0xb8) < (uint)(0x1d < uVar10)) {
                if (uVar9 == uVar6 < 0xd6 && (uint)(0x1e < uVar4) <= uVar9 - (uVar6 < 0xd6)) {
                  uVar8 = 9;
                }
                else if (uVar9 == uVar6 < 0xf5 &&
                         (uint)(0x1d < uVar6 - 0xf5) <= uVar9 - (uVar6 < 0xf5)) {
                  uVar8 = 10;
                  uVar4 = uVar6 - 0xf5;
                }
                else if (uVar9 == uVar6 < 0x113 &&
                         (uint)(0x1e < uVar6 - 0x113) <= uVar9 - (uVar6 < 0x113)) {
                  uVar8 = 0xb;
                  uVar4 = uVar6 - 0x113;
                }
                else {
                  uVar8 = 0xc;
                  uVar4 = uVar6 - 0x132;
                }
                goto LAB_10050fb8;
              }
              uVar8 = 8;
            }
          }
          uVar4 = uVar10;
        }
      }
    }
  }
LAB_10050fb8:
  uVar11 = recovered_1003fd28((ulonglong)uVar3,0x15180);
  uVar2 = uVar11 & 0xffffffff;
  DAT_10055580 = uVar4 + 1;
  uVar3 = ((uint)(uVar2 * 0x88888889 >> 0x20) & 0x1fffff) >> 5;
  DAT_10055584 = uVar8;
  DAT_1005557c = (int)((uVar11 & 0xffffffff) * 0x123457 >> 0x20);
  iVar1 = (int)(uVar2 / 0x3c);
  DAT_10055594 = 0;
  DAT_10055574 = (int)uVar11 + (iVar1 * 0x10 - (int)(uVar2 / 0x3c)) * -4;
  DAT_10055578 = iVar1 + ((uVar3 / 0x3c) * 0x10 - uVar3 / 0x3c) * -4 & 0xffff;
  return &DAT_10055574;
}

#undef DAT_10055574
#undef DAT_10055578
#undef DAT_1005557c
#undef DAT_10055580
#undef DAT_10055584
#undef DAT_10055588
#undef DAT_1005558c
#undef DAT_10055590
#undef DAT_10055594

#undef DAT_10055574
#define DAT_10055574 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x386cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100510f4
 */

undefined4 * recovered_100510f4(uint *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10050d94(in_r0);
  return &DAT_10055574;
}

#undef DAT_10055574

#undef DAT_10053d0b
#define DAT_10053d0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2003U)))
#undef DAT_10053d27
#define DAT_10053d27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x201fU)))
#undef DAT_1005403c
#define DAT_1005403c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2334U)))
#undef DAT_10054074
#define DAT_10054074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x236cU)))
#undef DAT_10055598
#define DAT_10055598 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3890U)))
#undef str_10053d57
#define str_10053d57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10051110
 */

undefined * recovered_10051110(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined *vararg0;
  uint vararg4;
  undefined *vararg1;
  uint vararg5;
  uint vararg2;

  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0x7b2;
    vararg0 = &DAT_10053d0b;
    vararg1 = &DAT_10053d27;
    vararg2 = 1;
    vararg5 = 0;
    uVar1 = 0;
    vararg4 = 0;
  }
  else {
    uVar2 = param_1[4];
    if (0xb < uVar2) {
      uVar2 = 0;
    }
    uVar1 = 0;
    if ((uint)param_1[6] < 7) {
      uVar1 = param_1[6];
    }
    vararg1 = (undefined *)(&DAT_10054074)[uVar2];
    vararg0 = (undefined *)(&DAT_1005403c)[uVar1];
    vararg5 = *param_1;
    vararg4 = param_1[1];
    uVar1 = param_1[2];
    vararg2 = param_1[3];
    uVar2 = param_1[5] + 0x76c;
  }
  pf_varargs_10043634__4__4__4__4__4__4__4_
            (&DAT_10055598,0x20,str_10053d57,(uint)vararg0,(uint)vararg1,vararg2,uVar1,vararg4,
             vararg5,uVar2);
  return &DAT_10055598;
}

#undef DAT_10053d0b
#undef DAT_10053d27
#undef DAT_1005403c
#undef DAT_10054074
#undef DAT_10055598
#undef str_10053d57

#undef DAT_1005403c
#define DAT_1005403c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2334U)))
#undef DAT_10054074
#define DAT_10054074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x236cU)))
#undef DAT_10055574
#define DAT_10055574 (*(uint *)(((uintptr_t)pf_module_state + 0x386cU)))
#undef DAT_10055578
#define DAT_10055578 (*(uint *)(((uintptr_t)pf_module_state + 0x3870U)))
#undef DAT_1005557c
#define DAT_1005557c (*(uint *)(((uintptr_t)pf_module_state + 0x3874U)))
#undef DAT_10055580
#define DAT_10055580 (*(uint *)(((uintptr_t)pf_module_state + 0x3878U)))
#undef DAT_10055584
#define DAT_10055584 (*(uint *)(((uintptr_t)pf_module_state + 0x387cU)))
#undef DAT_10055588
#define DAT_10055588 (*(int *)(((uintptr_t)pf_module_state + 0x3880U)))
#undef DAT_1005558c
#define DAT_1005558c (*(uint *)(((uintptr_t)pf_module_state + 0x3884U)))
#undef DAT_10055598
#define DAT_10055598 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3890U)))
#undef str_10053d57
#define str_10053d57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x204fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100511ec
 */

undefined * recovered_100511ec(uint *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  recovered_10050d94(in_r0);
  uVar1 = DAT_1005558c;
  if (6 < DAT_1005558c) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (DAT_10055584 < 0xc) {
    uVar2 = DAT_10055584;
  }
  pf_varargs_10043634__4__4__4__4__4__4__4_
            (&DAT_10055598,0x20,str_10053d57,(&DAT_1005403c)[uVar1],(&DAT_10054074)[uVar2],
             DAT_10055580,DAT_1005557c,DAT_10055578,DAT_10055574,DAT_10055588 + 0x76c);
  return &DAT_10055598;
}

#undef DAT_1005403c
#undef DAT_10054074
#undef DAT_10055574
#undef DAT_10055578
#undef DAT_1005557c
#undef DAT_10055580
#undef DAT_10055584
#undef DAT_10055588
#undef DAT_1005558c
#undef DAT_10055598
#undef str_10053d57

#undef DAT_100525c0
#define DAT_100525c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b8U)))
#undef DAT_100525e6
#define DAT_100525e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8deU)))
#undef DAT_100525ea
#define DAT_100525ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8e2U)))
#undef DAT_10053e01
#define DAT_10053e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20f9U)))
#undef DAT_10053e04
#define DAT_10053e04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fcU)))
#undef DAT_10053e0b
#define DAT_10053e0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2103U)))
#undef DAT_10053e10
#define DAT_10053e10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2108U)))
#undef DAT_1005403c
#define DAT_1005403c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2334U)))
#undef DAT_10054058
#define DAT_10054058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2350U)))
#undef DAT_10054074
#define DAT_10054074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x236cU)))
#undef DAT_100540a4
#define DAT_100540a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x239cU)))
#define local_36 (*(char (*)[2])(frame + 26))
#define acStack_30 (*(char (*)[16])(frame + 32))
#define local_34 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100512a8
 */

uint recovered_100512a8(int *param_1,uint param_2,char *param_3,int *param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *format;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;

  local_34 = 0;
  uVar7 = 0;
  if (param_1 != (int *)0x0 && param_2 != 0) {
    piVar1 = param_1;
    piVar2 = param_4;
    if (param_3 != (char *)0x0) {
      piVar1 = param_4;
      piVar2 = param_1;
    }
    if (param_3 != (char *)0x0 && piVar1 != (int *)0x0) {
      *(undefined1 *)piVar2 = 0;
      cVar3 = *param_3;
      if (cVar3 != '\0') {
        iVar9 = 0;
        do {
          pcVar8 = &DAT_100525ea;
          if (cVar3 != '%') {
            local_36[1] = 0;
            local_36[0] = cVar3;
            uVar4 = recovered_10041118(local_36);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),local_36,uVar4);
            local_34 = local_34 + uVar4;
            goto LAB_10051b48;
          }
          iVar9 = iVar9 + 1;
          switch((uintptr_t)(param_3[iVar9])) {
          case '\0':
            goto switchD_1005135c_caseD_0;
          default:
            local_36[1] = 0;
            local_36[0] = param_3[iVar9];
            uVar4 = recovered_10041118(local_36);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            pcVar8 = local_36;
            goto LAB_10051ad4;
          case '%':
            goto switchD_1005135c_caseD_25;
          case 'A':
            uVar7 = param_4[6];
            bVar10 = 6 < uVar7;
            puVar6 = &DAT_10054058;
            goto LAB_10051b04;
          case 'B':
            uVar7 = param_4[4];
            bVar10 = 0xb < uVar7;
            puVar6 = &DAT_100540a4;
            goto LAB_10051b04;
          case 'F':
            pf_varargs_10043634__4_(acStack_30,0x10,&DAT_10053e10,param_4[5] + 0x76c);
            uVar4 = recovered_10041118(acStack_30);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),acStack_30,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar4 = recovered_10041118(&DAT_100525e6);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),&DAT_100525e6,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            pf_varargs_10043634__4_(acStack_30,0x10,&DAT_10053e0b,param_4[4] + 1);
            uVar4 = recovered_10041118(acStack_30);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),acStack_30,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar4 = recovered_10041118(&DAT_100525e6);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),&DAT_100525e6,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar7 = param_4[3];
            goto LAB_10051a5c;
          case 'H':
            uVar7 = param_4[2];
            format = &DAT_10053e0b;
            break;
          case 'I':
            iVar5 = param_4[2];
            format = &DAT_10053e0b;
            uVar7 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
            if (uVar7 == 0) {
              uVar7 = 0xc;
            }
            break;
          case 'M':
            uVar7 = param_4[1];
            format = &DAT_10053e0b;
            break;
          case 'S':
            uVar7 = *param_4;
            format = &DAT_10053e0b;
            break;
          case 'T':
            pf_varargs_10043634__4_(acStack_30,0x10,&DAT_10053e0b,param_4[2]);
            uVar4 = recovered_10041118(acStack_30);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),acStack_30,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar4 = recovered_10041118(&DAT_100525c0);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),&DAT_100525c0,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            pf_varargs_10043634__4_(acStack_30,0x10,&DAT_10053e0b,param_4[1]);
            uVar4 = recovered_10041118(acStack_30);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),acStack_30,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar4 = recovered_10041118(&DAT_100525c0);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),&DAT_100525c0,uVar4);
            local_34 = local_34 + uVar4;
            *(undefined1 *)((int)piVar2 + local_34) = 0;
            uVar7 = *param_4;
LAB_10051a5c:
            iVar5 = recovered_10051b9c((int)piVar2,param_2,(int *)&local_34,uVar7,2);
            if (iVar5 == 0) {
              return 0;
            }
            goto LAB_10051b54;
          case 'Y':
            uVar7 = param_4[5] + 0x76c;
            format = &DAT_10053e10;
            break;
          case 'a':
            uVar7 = param_4[6];
            if (6 < uVar7) {
              uVar7 = 0;
            }
            pcVar8 = (char *)(&DAT_1005403c)[uVar7];
            uVar4 = recovered_10041118(pcVar8);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            goto LAB_10051ad4;
          case 'b':
            uVar7 = param_4[4];
            bVar10 = 0xb < uVar7;
            puVar6 = &DAT_10054074;
LAB_10051b04:
            if (bVar10) {
              uVar7 = 0;
            }
            pcVar8 = (char *)puVar6[uVar7];
            uVar4 = recovered_10041118(pcVar8);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
LAB_10051b30:
            recovered_10040088((undefined1 *)((int)piVar2 + local_34),pcVar8,uVar4);
            local_34 = local_34 + uVar4;
            goto LAB_10051b48;
          case 'd':
            uVar7 = param_4[3];
            format = &DAT_10053e0b;
            break;
          case 'm':
            uVar7 = param_4[4] + 1;
            format = &DAT_10053e0b;
            break;
          case 'p':
            pcVar8 = &DAT_10053e04;
            if (param_4[2] < 0xc) {
              pcVar8 = &DAT_10053e01;
            }
            uVar4 = recovered_10041118(pcVar8);
            if (param_2 <= local_34 + uVar4) {
              return 0;
            }
            goto LAB_10051b30;
          }
          pcVar8 = acStack_30;
          pf_varargs_10043634__4_(acStack_30,0x10,format,uVar7);
switchD_1005135c_caseD_25:
          uVar4 = recovered_10041118(pcVar8);
          if (param_2 <= local_34 + uVar4) {
            return 0;
          }
LAB_10051ad4:
          recovered_10040088((undefined1 *)((int)piVar2 + local_34),pcVar8,uVar4);
          local_34 = local_34 + uVar4;
LAB_10051b48:
          *(undefined1 *)((int)piVar2 + local_34) = 0;
LAB_10051b54:
          iVar9 = iVar9 + 1;
          cVar3 = param_3[iVar9];
        } while (cVar3 != '\0');
      }
switchD_1005135c_caseD_0:
      uVar7 = local_34;
    }
  }
  return uVar7;
}

#undef DAT_100525c0
#undef DAT_100525e6
#undef DAT_100525ea
#undef DAT_10053e01
#undef DAT_10053e04
#undef DAT_10053e0b
#undef DAT_10053e10
#undef DAT_1005403c
#undef DAT_10054058
#undef DAT_10054074
#undef DAT_100540a4
#undef local_36
#undef acStack_30
#undef local_34

#undef DAT_10053e0b
#define DAT_10053e0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2103U)))
#undef DAT_10053e10
#define DAT_10053e10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2108U)))
#define acStack_28 (*(char (*)[16])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10051b9c
 */

undefined4 recovered_10051b9c(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  ulong count;
  undefined4 uVar1;
  int iVar2;
  char *format;

  format = (char *)((uintptr_t)pf_module_state + 0xabfU);
  if (param_5 == 4) {
    format = &DAT_10053e10;
  }
  if (param_5 == 2) {
    format = &DAT_10053e0b;
  }
  pf_varargs_10043634__4_(acStack_28,0x10,format,param_4);
  count = recovered_10041118(acStack_28);
  uVar1 = 0;
  if ((param_1 != 0 && param_3 != (int *)0x0) && (*param_3 + count < param_2)) {
    recovered_10040088((void *)(param_1 + *param_3),acStack_28,count);
    iVar2 = *param_3;
    *param_3 = iVar2 + count;
    *(undefined1 *)(param_1 + iVar2 + count) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10053e0b
#undef DAT_10053e10
#undef acStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10051c64
 */

undefined4 recovered_10051c64(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_2 == 1)) {
    uVar1 = recovered_10041674((undefined4 *)0x0);
    *param_1 = uVar1;
    uVar1 = 1;
    param_1[1] = 0;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10051c9c
 */

undefined4 recovered_10051c9c(char *param_1,int *param_2,int *param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = recovered_10041118(param_1);
  uVar1 = uVar1 + 1;
  uVar2 = 0x22;
  if (uVar1 <= *param_4) {
    recovered_10040088((void *)*param_3,param_1,uVar1);
    iVar3 = *param_3;
    *param_4 = *param_4 - uVar1;
    uVar2 = 0;
    *param_2 = iVar3;
    *param_3 = iVar3 + uVar1;
  }
  return uVar2;
}



