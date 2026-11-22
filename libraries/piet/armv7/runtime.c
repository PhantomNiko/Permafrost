/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001270
 */

uint recovered_10001270(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x1f;
  do {
    uVar1 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
    if (param_2 <= uVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0xff);
      uVar1 = uVar1 - param_2;
    }
    bVar4 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar4);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012c0
 */

uint recovered_100012c0(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar3 = 0x1f;
    do {
      uVar2 = param_1 >> (uVar3 & 0xff) & 1 | uVar1 << 1;
      uVar1 = uVar2 - param_2;
      if (uVar2 < param_2) {
        uVar1 = uVar2;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f8
 */

uint recovered_100012f8(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (param_2 == 0) {
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
  if ((int)(param_2 ^ param_1) < 0) {
    uVar5 = -uVar5;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001368
 */

uint recovered_10001368(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (param_2 == 0) {
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
  if ((int)param_1 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d4
 */

ulonglong recovered_100013d4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10003c68((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013e4
 */

longlong recovered_100013e4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10003ba8((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013f4
 */

float recovered_100013f4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003cf0(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001410
 */

float recovered_10001410(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10003d38(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010094
#define DAT_10010094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd70U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001430
 */

void recovered_10001430(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010094 = 0;
  recovered_10001448();
  return;
}

#undef DAT_10010094

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_10010094
#define DAT_10010094 (*(char *)(((uintptr_t)pf_module_state + 0xd70U)))
#undef DAT_10010098
#define DAT_10010098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_1001009c
#define DAT_1001009c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd78U)))
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
 * Address: 0x10001448
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001448(void)

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
  if (DAT_10010094 != '\0') {
    return;
  }
  DAT_1001009c = (undefined1 *)0x0;
  DAT_10010098 = 0;
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
        if (iVar12 == 0) goto LAB_10001658;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_10005574((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_10010098 != 0) goto LAB_10001790;
    }
  }
LAB_10001658:
  iVar12 = (int)DAT_1001009c;
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
      puVar9 = &DAT_10010098;
      if (DAT_10010098 != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x10001838:
      if (iVar12 == 0) {
        DAT_10010094 = 1;
        DAT_1001009c = puVar3;
        return;
      }
      DAT_10010094 = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_10010098;
    if (DAT_10010098 != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_1001009c == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_1001009c;
    if (bVar13) {
      DAT_1001009c = (undefined1 *)0x300000;
      iVar12 = (int)DAT_1001009c;
    }
    DAT_1001009c = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_10010098;
      if (DAT_10010098 != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x10001838;
    }
  }
LAB_10001790:
  if (DAT_1001009c == (undefined1 *)0x0) {
    DAT_1001009c = (undefined1 *)DAT_10010098;
    DAT_10010094 = 1;
    return;
  }
  DAT_10010094 = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_10010094
#undef DAT_10010098
#undef DAT_1001009c
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

#undef DAT_10010098
#define DAT_10010098 (*(uint * *)(((uintptr_t)pf_module_state + 0xd74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

int recovered_10001840(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10001448();
  iVar1 = 0;
  puVar2 = DAT_10010098;
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

#undef DAT_10010098

#undef DAT_10010098
#define DAT_10010098 (*(int *)(((uintptr_t)pf_module_state + 0xd74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001884
 */

void recovered_10001884(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001448();
  for (iVar1 = DAT_10010098; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_10010098

#undef DAT_10010098
#define DAT_10010098 (*(int * *)(((uintptr_t)pf_module_state + 0xd74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d4
 */

int recovered_100018d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10001448();
  iVar1 = 0;
  for (piVar2 = DAT_10010098; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_10010098

#undef DAT_10010098
#define DAT_10010098 (*(int *)(((uintptr_t)pf_module_state + 0xd74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001910
 */

void recovered_10001910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001448();
  for (iVar1 = DAT_10010098; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_10010098

#undef DAT_10010098
#define DAT_10010098 (*(uint * *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_1001009c
#define DAT_1001009c (*(uint * *)(((uintptr_t)pf_module_state + 0xd78U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001954
 */

uint * recovered_10001954(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10001448();
    puVar5 = DAT_1001009c;
    if (DAT_1001009c == (uint *)0x0) {
      puVar5 = DAT_10010098;
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
          DAT_1001009c = DAT_10010098;
          if (puVar5 != (uint *)0x0) {
            DAT_1001009c = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_10010098;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_10010098
#undef DAT_1001009c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a60
 */

longlong recovered_10001a60(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10001ab4
 */

ulonglong recovered_10001ab4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001b08
 */

undefined8 recovered_10001b08(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10001b54
 */

undefined8 recovered_10001b54(uint param_1,uint param_2,uint param_3,uint param_4)

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
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar2 = 0x3f;
    do {
      uVar7 = uVar4 << 1 | uVar9 >> 0x1f;
      uVar3 = uVar2 - 0x20;
      uVar4 = param_1 >> (uVar2 & 0xff) | param_2 << (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = param_2 >> (uVar3 & 0xff);
      }
      uVar5 = uVar4 & 1 | uVar9 << 1;
      bVar10 = uVar7 <= param_4;
      bVar1 = (uint)(param_3 <= uVar5) <= uVar7 - param_4;
      uVar4 = uVar7 - (param_4 + (param_3 > uVar5));
      uVar9 = uVar5 - param_3;
      if (bVar10 && bVar1) {
        uVar4 = uVar7;
        uVar9 = uVar5;
      }
      uVar7 = 1 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 1 << (uVar3 & 0xff);
      }
      if (!bVar10 || !bVar1) {
        uVar8 = uVar8 | uVar7;
      }
      uVar7 = 1 << (uVar2 & 0xff);
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      if (!bVar10 || !bVar1) {
        uVar6 = uVar6 | uVar7;
      }
      bVar10 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar8,uVar6);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c38
 */

undefined8 recovered_10001c38(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0x3f;
  do {
    uVar3 = uVar4 << 1 | uVar1 >> 0x1f;
    uVar4 = param_1 >> (uVar5 & 0xff) | param_2 << (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar4 = param_2 >> (uVar5 - 0x20 & 0xff);
    }
    uVar2 = uVar4 & 1 | uVar1 << 1;
    uVar1 = uVar2 - param_3;
    uVar4 = uVar3 - (param_4 + (param_3 > uVar2));
    if (uVar3 <= param_4 && (uint)(param_3 <= uVar2) <= uVar3 - param_4) {
      uVar1 = uVar2;
      uVar4 = uVar3;
    }
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
  return CONCAT44(uVar4,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb8
 */

undefined8 recovered_10001cb8(uint param_1,uint param_2,uint param_3,uint param_4)

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
  bool bVar14;

  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = (int)param_4 >> 0x1f;
    uVar5 = (param_3 ^ uVar3) - uVar3;
    uVar6 = (param_4 ^ uVar3) - (uVar3 + ((param_3 ^ uVar3) < uVar3));
    uVar3 = (int)param_2 >> 0x1f;
    uVar7 = (param_2 ^ uVar3) - (uVar3 + ((param_1 ^ uVar3) < uVar3));
    uVar4 = 0;
    uVar2 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = 0x3f;
    do {
      uVar8 = uVar2 << 1 | uVar4 >> 0x1f;
      uVar12 = uVar11 - 0x20;
      uVar2 = (param_1 ^ uVar3) - uVar3 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar2 = uVar7 >> (uVar12 & 0xff);
      }
      uVar13 = uVar2 & 1 | uVar4 << 1;
      bVar14 = uVar8 <= uVar6;
      bVar1 = (uint)(uVar5 <= uVar13) <= uVar8 - uVar6;
      uVar4 = uVar13 - uVar5;
      uVar2 = uVar8 - (uVar6 + (uVar5 > uVar13));
      if (bVar14 && bVar1) {
        uVar4 = uVar13;
        uVar2 = uVar8;
      }
      uVar8 = 1 >> (0x20 - uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar8 = 1 << (uVar12 & 0xff);
      }
      if (!bVar14 || !bVar1) {
        uVar9 = uVar9 | uVar8;
      }
      uVar8 = 1 << (uVar11 & 0xff);
      if (-1 < (int)uVar12) {
        uVar8 = 0;
      }
      if (!bVar14 || !bVar1) {
        uVar10 = uVar10 | uVar8;
      }
      bVar14 = uVar11 != 0;
      uVar11 = uVar11 - 1;
    } while (bVar14);
    uVar3 = -uVar10;
    uVar2 = -(uVar9 + (uVar10 != 0));
    if (param_2 >> 0x1f == param_4 >> 0x1f) {
      uVar3 = uVar10;
      uVar2 = uVar9;
    }
  }
  return CONCAT44(uVar2,uVar3);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

undefined8 recovered_10001dd0(uint param_1,uint param_2,uint param_3,uint param_4)

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
  bool bVar10;

  if (param_3 == 0 && param_4 == 0) {
    return 0;
  }
  uVar4 = (int)param_4 >> 0x1f;
  uVar8 = (param_3 ^ uVar4) - uVar4;
  uVar1 = (int)param_2 >> 0x1f;
  uVar9 = (param_4 ^ uVar4) - (uVar4 + ((param_3 ^ uVar4) < uVar4));
  uVar7 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
  uVar3 = 0;
  uVar4 = 0;
  uVar2 = 0x3f;
  do {
    uVar5 = uVar4 << 1 | uVar3 >> 0x1f;
    uVar4 = (param_1 ^ uVar1) - uVar1 >> (uVar2 & 0xff) | uVar7 << (0x20 - uVar2 & 0xff);
    if (-1 < (int)(uVar2 - 0x20)) {
      uVar4 = uVar7 >> (uVar2 - 0x20 & 0xff);
    }
    uVar6 = uVar4 & 1 | uVar3 << 1;
    uVar3 = uVar6 - uVar8;
    uVar4 = uVar5 - (uVar9 + (uVar8 > uVar6));
    if (uVar5 <= uVar9 && (uint)(uVar8 <= uVar6) <= uVar5 - uVar9) {
      uVar3 = uVar6;
      uVar4 = uVar5;
    }
    bVar10 = uVar2 != 0;
    uVar2 = uVar2 - 1;
  } while (bVar10);
  uVar2 = -(uVar4 + (uVar3 != 0));
  uVar1 = -uVar3;
  if (-1 < (int)param_2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  return CONCAT44(uVar2,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e8c
 */

void recovered_10001e8c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e94
 */

int recovered_10001e94(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001ea0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10001ef4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001f44(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f98
 */

void * recovered_10001f98(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10001fd4;
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
          if (uVar6 == uVar9) goto LAB_10002168;
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
LAB_10002168:
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
        if (uVar9 == uVar6) goto LAB_10001fcc;
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
LAB_10001fcc:
  if (uVar8 == 0) {
    return destination;
  }
LAB_10001fd4:
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
 * Address: 0x1000221c
 */

void * recovered_1000221c(void *destination,void *source,ulong count)

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
      goto LAB_10002264;
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
          if (puVar8 == (undefined8 *)count) goto LAB_100024f0;
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
LAB_100024f0:
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
        if ((undefined8 *)count == puVar8) goto LAB_1000256c;
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
LAB_1000256c:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10002264:
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
    goto LAB_100022e0;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_1000257c:
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
          goto LAB_1000257c;
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
        if (uVar5 == uVar7) goto LAB_10002658;
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
LAB_10002658:
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
      if (uVar7 == uVar5) goto LAB_10002714;
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
LAB_10002714:
  if (uVar9 == 0) {
    return destination;
  }
LAB_100022e0:
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
 * Address: 0x10002728
 */

void * recovered_10002728(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x100028b0;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x100027c8:
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
        if (uVar6 == uVar7) goto joined_r0x10002854;
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
      goto joined_r0x100027c8;
    }
  }
joined_r0x10002854:
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
      if (uVar7 == uVar6) goto joined_r0x100028b0;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x100028b0:
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
 * Address: 0x10002928
 */

void recovered_10002928(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10002aa8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100029c4:
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
        if (uVar7 == uVar8) goto joined_r0x10002a48;
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
      goto joined_r0x100029c4;
    }
  }
joined_r0x10002a48:
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
      if (uVar7 == uVar8) goto joined_r0x10002aa8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10002aa8:
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
 * Address: 0x10002b24
 */

void recovered_10002b24(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10002ca4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x10002bc0:
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
        if (uVar7 == uVar8) goto joined_r0x10002c44;
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
      goto joined_r0x10002bc0;
    }
  }
joined_r0x10002c44:
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
      if (uVar7 == uVar8) goto joined_r0x10002ca4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10002ca4:
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
 * Address: 0x10002d20
 */

int recovered_10002d20(void *left,void *right,ulong count)

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
LAB_10002e18:
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
      if (uVar5 != uVar6) goto LAB_10002f10;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10002f10;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10002f10;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10002f10;
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
LAB_10002e48:
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
      if (uVar5 != uVar6) goto LAB_10002e48;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10002f18(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10002e18;
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
LAB_10002f10:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f18
 */

int recovered_10002f18(byte *param_1,byte *param_2)

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
 * Address: 0x10002f68
 */

bool recovered_10002f68(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f7c
 */

bool recovered_10002f7c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f90
 */

bool recovered_10002f90(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fa8
 */

bool recovered_10002fa8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd4
 */

bool recovered_10002fd4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

bool recovered_10002ff4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003008
 */

int recovered_10003008(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003018
 */

int recovered_10003018(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003028
 */

ulong recovered_10003028(char *text)

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
 * Address: 0x10003050
 */

int recovered_10003050(char *left,char *right)

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
LAB_10003088:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10003088;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003094
 */

int recovered_10003094(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;

  bVar1 = *param_1;
  do {
    uVar2 = (uint)bVar1;
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_100030cc:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_100030cc;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d8
 */

void recovered_100030d8(int param_1,int param_2)

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
 * Address: 0x100030f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_100030f4(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;

  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = 0xfffffffc;
  do {
    uVar4 = uVar10;
    uVar10 = uVar4 + 1;
  } while (*(char *)((int)param_1 + uVar4 + 4) != '\0');
  if (_DAT_40010800 != 0x50414d57) {
    return (undefined8 *)0x0;
  }
  if (_DAT_40010804 == 0) {
    return (undefined8 *)0x0;
  }
  if (_DAT_40010808 < 0x50) {
    return (undefined8 *)0x0;
  }
  if (_DAT_4001084c == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = uVar4 + 5;
  uVar20 = (*_DAT_4001084c)(uVar10);
  puVar3 = (undefined8 *)uVar20;
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (7 < uVar10) {
    uVar2 = CONCAT44((uint)puVar3 ^ (uint)param_1,puVar3);
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_100031bc;
    if ((uVar20 & 3) == 0) {
      puVar7 = puVar3;
      puVar5 = param_1;
    }
    else {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      if (uVar4 == 0xfffffffc || ((uint)((int)puVar3 + 1) & 3) == 0) {
        puVar7 = (undefined8 *)((int)puVar3 + 1);
        puVar5 = (undefined8 *)((int)param_1 + 1);
        uVar10 = uVar4 + 4;
      }
      else {
        *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_1 + 1);
        puVar7 = (undefined8 *)((int)puVar3 + 2);
        puVar5 = (undefined8 *)((int)param_1 + 2);
        uVar10 = uVar4 + 3;
        if (uVar4 != 0xfffffffd && ((uint)((int)puVar3 + 2) & 3) != 0) {
          puVar5 = (undefined8 *)((int)param_1 + 3);
          puVar7 = (undefined8 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_1 + 2);
          uVar10 = uVar4 + 2;
          if ((uVar4 != 0xfffffffe) && (((uint)puVar7 & 3) != 0)) {
            puVar7 = (undefined8 *)((int)puVar3 + 4);
            *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)param_1 + 3);
            puVar5 = (undefined8 *)((int)param_1 + 4);
            uVar10 = uVar4 + 1;
          }
        }
      }
    }
    if (uVar10 < 0x10) {
      puVar9 = puVar7;
      puVar6 = puVar5;
    }
    else {
      if (0x2f < uVar10 - 0x10) {
        puVar9 = (undefined8 *)(uVar10 & 0xfffffff0);
        param_1 = (undefined8 *)((int)puVar5 + (int)puVar9);
        if (puVar7 < param_1) {
          puVar9 = (undefined8 *)((int)puVar7 + (int)puVar9);
        }
        if (!(puVar7 < param_1 && puVar5 < puVar9)) {
          uVar8 = (uVar10 - 0x10 >> 4) + 1;
          uVar11 = uVar8 & 0xfffffffc;
          uVar10 = uVar10 + uVar11 * -0x10;
          puVar9 = puVar7 + uVar11 * 2;
          puVar6 = puVar5 + uVar11 * 2;
          uVar4 = uVar11;
          do {
            uVar13 = puVar5[1];
            param_1 = puVar7 + 8;
            uVar4 = uVar4 - 4;
            uVar14 = puVar5[2];
            uVar15 = puVar5[3];
            uVar16 = puVar5[4];
            uVar17 = puVar5[5];
            uVar18 = puVar5[6];
            uVar19 = puVar5[7];
            *puVar7 = *puVar5;
            puVar7[1] = uVar13;
            puVar7[2] = uVar14;
            puVar7[3] = uVar15;
            puVar7[4] = uVar16;
            puVar7[5] = uVar17;
            puVar7[6] = uVar18;
            puVar7[7] = uVar19;
            puVar7 = param_1;
            puVar5 = puVar5 + 8;
          } while (uVar4 != 0);
          puVar7 = puVar9;
          puVar5 = puVar6;
          if (uVar8 == uVar11) goto LAB_10003350;
        }
      }
      do {
        uVar10 = uVar10 - 0x10;
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)((int)puVar5 + 4);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
        puVar1 = (undefined4 *)((int)puVar5 + 0xc);
        puVar5 = puVar5 + 2;
        *(undefined4 *)((int)puVar7 + 0xc) = *puVar1;
        puVar7 = puVar7 + 2;
        puVar9 = puVar7;
        puVar6 = puVar5;
      } while (0xf < uVar10);
    }
LAB_10003350:
    uVar20 = CONCAT44(puVar9,puVar9);
    if (uVar10 < 4) {
      param_1 = puVar6;
    }
    else {
      uVar4 = uVar10 - 4;
      bVar12 = uVar4 == 0xc;
      if (0xb < uVar4) {
        param_1 = (undefined8 *)((int)puVar9 - (int)puVar6);
        bVar12 = param_1 == (undefined8 *)0xf;
      }
      if ((0xb < uVar4 && (undefined8 *)0xe < param_1) && !bVar12) {
        uVar11 = (uVar4 >> 2) + 1;
        uVar8 = uVar11 & 0xfffffffc;
        uVar10 = uVar10 + uVar8 * -4;
        puVar7 = (undefined8 *)((int)puVar9 + uVar8 * 4);
        puVar5 = (undefined8 *)((int)puVar6 + uVar8 * 4);
        uVar4 = uVar8;
        do {
          uVar13 = *puVar6;
          uVar14 = puVar6[1];
          puVar6 = puVar6 + 2;
          uVar4 = uVar4 - 4;
          *puVar9 = uVar13;
          puVar9[1] = uVar14;
          puVar9 = puVar9 + 2;
          uVar20 = CONCAT44(puVar9,puVar7);
        } while (uVar4 != 0);
        param_1 = puVar5;
        if (uVar11 == uVar8) goto LAB_100031b4;
      }
      else {
        puVar7 = puVar9;
        puVar5 = puVar6;
      }
      do {
        param_1 = (undefined8 *)((int)puVar5 + 4);
        uVar10 = uVar10 - 4;
        uVar20 = CONCAT44(*(undefined4 *)puVar5,(undefined8 *)((int)puVar7 + 4));
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        puVar7 = (undefined8 *)((int)puVar7 + 4);
        puVar5 = param_1;
      } while (3 < uVar10);
    }
  }
LAB_100031b4:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_100031bc:
  uVar4 = (uint)(uVar2 >> 0x20);
  puVar7 = (undefined8 *)uVar2;
  if (0xf < uVar10) {
    uVar4 = (int)puVar7 - (int)param_1;
  }
  if (0xf < uVar10 && 0xf < uVar4) {
    uVar11 = uVar10 & 0xfffffff0;
    uVar4 = uVar10 & 0xf;
    puVar9 = (undefined8 *)((int)param_1 + uVar11);
    puVar5 = (undefined8 *)((int)puVar7 + uVar11);
    uVar8 = uVar11;
    do {
      uVar13 = *param_1;
      uVar14 = param_1[1];
      param_1 = param_1 + 2;
      uVar8 = uVar8 - 0x10;
      *puVar7 = uVar13;
      puVar7[1] = uVar14;
      puVar7 = puVar7 + 2;
    } while (uVar8 != 0);
    if (uVar10 == uVar11) {
      return puVar3;
    }
  }
  else {
    uVar4 = uVar10;
    puVar5 = puVar7;
    puVar9 = param_1;
  }
  do {
    uVar4 = uVar4 - 1;
    *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
    puVar5 = (undefined8 *)((int)puVar5 + 1);
    puVar9 = (undefined8 *)((int)puVar9 + 1);
  } while (uVar4 != 0);
  return puVar3;
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
 * Address: 0x10003408
 */

char * recovered_10003408(char *param_1,char param_2)

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
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000343c
 */

int recovered_1000343c(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  int iVar3;
  char cVar4;

  cVar4 = *param_1;
  if (cVar4 != '\0') {
    iVar3 = 0;
    while (*param_2 != '\0') {
      pcVar1 = param_2;
      cVar2 = *param_2;
      while (pcVar1 = pcVar1 + 1, cVar4 != cVar2) {
        cVar2 = *pcVar1;
        if (cVar2 == '\0') {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      cVar4 = param_1[iVar3];
      if (cVar4 == '\0') {
        return iVar3;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034a0
 */

char * recovered_100034a0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;

  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return (char *)0x0;
  }
  do {
    if (*param_2 != '\0') {
      pcVar1 = param_2;
      cVar2 = *param_2;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar3 == cVar2) {
          return param_1;
        }
        cVar2 = *pcVar1;
      } while (cVar2 != '\0');
    }
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  } while (cVar3 != '\0');
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003500
 */

char * recovered_10003500(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;

  if (*param_2 == '\0') {
    return param_1;
  }
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    iVar1 = 0;
    cVar2 = *param_2;
    while (param_1[iVar1] == cVar2) {
      cVar2 = param_2[iVar1 + 1];
      iVar1 = iVar1 + 1;
      if (cVar2 == '\0') {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}


#undef DAT_1000f348
#define DAT_1000f348 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003564
 */

undefined * recovered_10003564(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f348;
}

#undef DAT_1000f348

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003574
 */

undefined ** recovered_10003574(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010008;
}

#undef PTR_DAT_10010008

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
#define local_24 (*(undefined4 *)(frame + 28))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_14 (*(undefined4 *)(frame + 44))
#define local_10 (*(undefined4 *)(frame + 48))
#define uStack_20 (*(undefined4 *)(frame + 32))
#define uStack_18 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003584
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10003584(undefined4 *param_1)

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
#undef local_24
#undef local_1c
#undef local_14
#undef local_10
#undef uStack_20
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003634
 */

double recovered_10003634(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10003678
 */

double recovered_10003678(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10003730
 */

double recovered_10003730(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;
  double dVar3;

  dVar2 = pf_bits_double(CONCAT44(param_4,param_3));
  if (dVar2 == 0.0) {
    return 0.0;
  }
  uVar1 = VectorFloatToSigned(pf_bits_double(CONCAT44(param_2,param_1)) / dVar2,3);
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return pf_bits_double(CONCAT44(param_2,param_1)) - dVar3 * dVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003768
 */

double recovered_10003768(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                         undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  uVar2 = VectorFloatToSigned(CONCAT44(param_4,param_3),3);
  dVar5 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != pf_bits_double(CONCAT44(param_4,param_3))) {
    return 0.0;
  }
  if (uVar2 == 0) {
    return 1.0;
  }
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar5 = 1.0;
  do {
    dVar3 = dVar4 * dVar5;
    dVar4 = dVar4 * dVar4;
    if ((uVar1 & 1) == 0) {
      dVar3 = dVar5;
    }
    uVar1 = uVar1 >> 1;
    dVar5 = dVar3;
  } while (uVar1 != 0);
  if ((int)uVar2 < 0) {
    dVar3 = 1.0 / dVar3;
  }
  return dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e8
 */

double recovered_100037e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003818
 */

double recovered_10003818(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  if (dVar5 < dVar4) {
    dVar5 = dVar5 + 1.0;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000385c
 */

double recovered_1000385c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  double dVar2;
  double dVar3;

  dVar3 = pf_bits_double(CONCAT44(param_2,param_1));
  dVar2 = 0.0;
  if (0.0 < dVar3) {
    iVar1 = 0x18;
    dVar2 = 1.0;
    if (1.0 <= dVar3) {
      dVar2 = dVar3;
    }
    do {
      iVar1 = iVar1 + -1;
      dVar2 = (dVar2 + dVar3 / dVar2) * 0.5;
    } while (iVar1 != 0);
  }
  return dVar2;
}


#undef DAT_100039d8
#define DAT_100039d8 (*(double *)(0x100039d8U))
#undef DAT_100039e0
#define DAT_100039e0 (*(double *)(0x100039e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038a8
 */

double recovered_100038a8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
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

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  if (dVar4 < 0.0) {
    return pf_bits_double(0xfff0000000000000ULL);
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
  dVar4 = (dVar4 + -1.0) / (dVar4 + 1.0);
  dVar5 = dVar4 * dVar4;
  dVar7 = dVar5 * dVar5 * dVar4;
  dVar9 = dVar5 * dVar7;
  dVar12 = dVar5 * dVar9;
  dVar11 = dVar5 * dVar12;
  dVar6 = dVar5 * dVar11;
  dVar8 = dVar5 * dVar6;
  dVar10 = dVar5 * dVar8;
  dVar4 = dVar4 + 0.0 + (dVar5 * dVar4) / 3.0 + dVar7 / 5.0 + dVar9 / 7.0 + dVar12 / 9.0 +
          dVar11 / 11.0 + dVar6 / 13.0 + dVar8 / 15.0 + dVar10 / 17.0 + (dVar5 * dVar10) / 19.0;
  dVar5 = (double)VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
  return dVar4 + dVar4 + dVar5 * pf_bits_double(0x3fe62e42fefa39efULL);
}

#undef DAT_100039d8
#undef DAT_100039e0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039e8
 */

longlong recovered_100039e8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10003ba8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10003aa8
#define DAT_10003aa8 (*(double *)(0x10003aa8U))
#undef DAT_10003ab0
#define DAT_10003ab0 (*(double *)(0x10003ab0U))
#undef DAT_10003ab8
#define DAT_10003ab8 (*(double *)(0x10003ab8U))
#undef DAT_10003ac0
#define DAT_10003ac0 (*(double *)(0x10003ac0U))
#undef DAT_10003ac8
#define DAT_10003ac8 (*(double *)(0x10003ac8U))
#undef DAT_10003ad0
#define DAT_10003ad0 (*(double *)(0x10003ad0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a18
 */

double recovered_10003a18(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)
      ) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar2 = dVar1 * dVar1;
  return dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / pf_bits_double(0x405e000000000000ULL) +
                 (dVar2 * dVar2 * dVar2) / pf_bits_double(0xc0b3b00000000000ULL));
}

#undef DAT_10003aa8
#undef DAT_10003ab0
#undef DAT_10003ab8
#undef DAT_10003ac0
#undef DAT_10003ac8
#undef DAT_10003ad0

#undef DAT_10003b60
#define DAT_10003b60 (*(double *)(0x10003b60U))
#undef DAT_10003b68
#define DAT_10003b68 (*(double *)(0x10003b68U))
#undef DAT_10003b70
#define DAT_10003b70 (*(double *)(0x10003b70U))
#undef DAT_10003b78
#define DAT_10003b78 (*(double *)(0x10003b78U))
#undef DAT_10003b80
#define DAT_10003b80 (*(double *)(0x10003b80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad8
 */

double recovered_10003ad8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = pf_bits_double(CONCAT44(param_2,param_1)); pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)
      ) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar1 = dVar1 * dVar1;
  return dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 + (dVar1 * dVar1 * dVar1) / pf_bits_double(0xc086800000000000ULL);
}

#undef DAT_10003b60
#undef DAT_10003b68
#undef DAT_10003b70
#undef DAT_10003b78
#undef DAT_10003b80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

double recovered_10003b88(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = pf_bits_double(CONCAT44(param_2,param_1));
  if (pf_bits_double(CONCAT44(param_2,param_1)) < 0.0) {
    dVar1 = -pf_bits_double(CONCAT44(param_2,param_1));
  }
  return dVar1;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10003ba8(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003c68(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10003cf0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10003d38(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_10003e08
#define DAT_10003e08 (*(float *)(0x10003e08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc8
 */

float recovered_10003dc8(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_fpscr;
  undefined4 uVar1;
  double dVar2;

  if (param_2 == 0.0) {
    return pf_bits_float(0x0U);
  }
  uVar1 = VectorFloatToSigned((double)param_1 / (double)param_2,3);
  dVar2 = (double)VectorSignedToFloat(uVar1,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  return (float)((double)param_1 - dVar2 * (double)param_2);
}

#undef DAT_10003e08

#undef DAT_10003ec4
#define DAT_10003ec4 (*(float *)(0x10003ec4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e0c
 */

float recovered_10003e0c(float param_1,float *param_2)

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

#undef DAT_10003ec4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ec8
 */

float recovered_10003ec8(float param_1,uint param_2)

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


#undef DAT_10003f98
#define DAT_10003f98 (*(float *)(0x10003f98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f14
 */

float recovered_10003f14(float param_1,float param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  double dVar5;

  uVar4 = (uint)param_2;
  dVar5 = (double)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar5 != (double)param_2) {
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
    fVar1 = fVar2 * param_1;
    param_1 = param_1 * param_1;
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

#undef DAT_10003f98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f9c
 */

float recovered_10003f9c(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fd4
 */

float recovered_10003fd4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  if (dVar3 < dVar5) {
    dVar3 = dVar3 + 1.0;
  }
  return (float)dVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

double recovered_10004020(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  dVar4 = pf_bits_double(CONCAT44(param_2,param_1));
  iVar3 = VectorFloatToSigned(dVar4,3);
  dVar5 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar5 < dVar4) << 0x1f | (uint)(dVar5 == dVar4) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar6 = (double)VectorSignedToFloat(iVar3 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar5) || NAN(dVar4))) {
    dVar5 = dVar6;
  }
  dVar6 = dVar5;
  if (dVar5 < dVar4) {
    dVar6 = dVar5 + 1.0;
  }
  if (dVar4 < 0.0) {
    dVar5 = dVar6;
  }
  return dVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004074
 */

float recovered_10004074(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  double dVar3;
  double dVar4;
  double dVar5;

  dVar5 = (double)param_1;
  dVar3 = (double)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar3 < dVar5) << 0x1f | (uint)(dVar3 == dVar5) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  dVar4 = (double)VectorSignedToFloat((int)param_1 + -1,(byte)(uVar1 >> 0x16) & 3);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar3) || NAN(dVar5))) {
    dVar3 = dVar4;
  }
  dVar4 = dVar3;
  if (dVar3 < dVar5) {
    dVar4 = dVar3 + 1.0;
  }
  if (param_1 < 0.0) {
    dVar3 = dVar4;
  }
  return (float)dVar3;
}


#undef DAT_10004124
#define DAT_10004124 (*(float *)(0x10004124U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d0
 */

float recovered_100040d0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  int iVar2;

  if (0.0 < param_1) {
    iVar2 = 0x18;
    fVar1 = 1.0;
    if (1.0 <= param_1) {
      fVar1 = param_1;
    }
    do {
      iVar2 = iVar2 + -1;
      fVar1 = (fVar1 + param_1 / fVar1) * 0.5;
    } while (iVar2 != 0);
    return fVar1;
  }
  return pf_bits_float(0x0U);
}

#undef DAT_10004124

#undef DAT_10004260
#define DAT_10004260 (*(double *)(0x10004260U))
#undef DAT_10004268
#define DAT_10004268 (*(float *)(0x10004268U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004128
 */

float recovered_10004128(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
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

  if (param_1 < 0.0) {
    return pf_bits_float(0xff800000U);
  }
  iVar2 = 0;
  dVar4 = (double)param_1;
  uVar3 = in_fpscr & 0xfffffff | (uint)(param_1 < 1.5) << 0x1f | (uint)(param_1 == 1.5) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(param_1)) {
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

#undef DAT_10004260
#undef DAT_10004268

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000426c
 */

longlong recovered_1000426c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10003ba8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10004338
#define DAT_10004338 (*(double *)(0x10004338U))
#undef DAT_10004340
#define DAT_10004340 (*(double *)(0x10004340U))
#undef DAT_10004348
#define DAT_10004348 (*(double *)(0x10004348U))
#undef DAT_10004350
#define DAT_10004350 (*(double *)(0x10004350U))
#undef DAT_10004358
#define DAT_10004358 (*(double *)(0x10004358U))
#undef DAT_10004360
#define DAT_10004360 (*(double *)(0x10004360U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042a0
 */

float recovered_100042a0(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  for (dVar1 = (double)param_1; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar2 = dVar1 * dVar1;
  return (float)(dVar1 * (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / pf_bits_double(0x405e000000000000ULL) +
                         (dVar2 * dVar2 * dVar2) / pf_bits_double(0xc0b3b00000000000ULL)));
}

#undef DAT_10004338
#undef DAT_10004340
#undef DAT_10004348
#undef DAT_10004350
#undef DAT_10004358
#undef DAT_10004360

#undef DAT_100043f8
#define DAT_100043f8 (*(double *)(0x100043f8U))
#undef DAT_10004400
#define DAT_10004400 (*(double *)(0x10004400U))
#undef DAT_10004408
#define DAT_10004408 (*(double *)(0x10004408U))
#undef DAT_10004410
#define DAT_10004410 (*(double *)(0x10004410U))
#undef DAT_10004418
#define DAT_10004418 (*(double *)(0x10004418U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

float recovered_10004368(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  for (dVar1 = (double)param_1; pf_bits_double(0x400921fb54442d18ULL) < dVar1; dVar1 = dVar1 + pf_bits_double(0xc01921fb54442d18ULL)) {
  }
  for (; dVar1 < pf_bits_double(0xc00921fb54442d18ULL); dVar1 = dVar1 + pf_bits_double(0x401921fb54442d18ULL)) {
  }
  dVar1 = dVar1 * dVar1;
  return (float)(dVar1 * -0.5 + 1.0 + (dVar1 * dVar1) / 24.0 +
                (dVar1 * dVar1 * dVar1) / pf_bits_double(0xc086800000000000ULL));
}

#undef DAT_100043f8
#undef DAT_10004400
#undef DAT_10004408
#undef DAT_10004410
#undef DAT_10004418

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004420
 */

float recovered_10004420(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000443c
 */

int recovered_1000443c(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;

  for (pbVar2 = param_1; (uVar7 = (uint)*pbVar2, uVar7 - 9 < 5 || (uVar7 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  uVar3 = (uint)((uVar7 - 0x2b & 0xfffffffd) == 0);
  pbVar5 = pbVar2 + uVar3;
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar2[uVar3 + 1] | 0x20) == 0x78)) {
      pbVar5 = pbVar2 + uVar3 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar2[uVar3 + 1] | 0x20) == 0x78) {
        pbVar5 = pbVar2 + uVar3 + 2;
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
    if (param_3 <= uVar3) break;
    iVar6 = iVar6 * param_3 + uVar3;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar7 == 0x2d) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004590
 */

int recovered_10004590(byte *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;

  for (pbVar5 = param_1; (uVar3 = (uint)*pbVar5, uVar3 - 9 < 5 || (uVar3 == 0x20));
      pbVar5 = pbVar5 + 1) {
  }
  if (uVar3 == 0x2b) {
    pbVar5 = pbVar5 + 1;
  }
  else if (uVar3 == 0x2d) {
    pbVar5 = pbVar5 + 1;
    bVar2 = true;
    goto joined_r0x1000460c;
  }
  bVar2 = false;
joined_r0x1000460c:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar5 == 0x30) && ((pbVar5[1] | 0x20) == 0x78)) {
      pbVar5 = pbVar5 + 2;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
    if (*pbVar5 == 0x30) {
      if ((pbVar5[1] | 0x20) == 0x78) {
        pbVar5 = pbVar5 + 2;
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
    if (param_3 <= uVar3) break;
    iVar6 = iVar6 * param_3 + uVar3;
    param_1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (bVar2) {
    iVar6 = -iVar6;
  }
  return iVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046f0
 */

double recovered_100046f0(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;

  for (pbVar2 = param_1; (uVar1 = (uint)*pbVar2, uVar1 - 9 < 5 || (uVar1 == 0x20));
      pbVar2 = pbVar2 + 1) {
  }
  dVar9 = 0.0;
  pbVar2 = pbVar2 + ((uVar1 - 0x2b & 0xfffffffd) == 0);
  uVar6 = (uint)*pbVar2;
  uVar7 = uVar6 - 0x30;
  if (uVar7 < 10) {
    dVar9 = 0.0;
    do {
      iVar4 = uVar6 - 0x30;
      pbVar2 = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
      dVar10 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = dVar10 + dVar9 * 10.0;
    } while (uVar6 - 0x30 < 10);
  }
  if (uVar6 == 0x2e) {
    uVar6 = (uint)pbVar2[1];
    pbVar5 = pbVar2 + 1;
    if (uVar6 - 0x30 < 10) {
      dVar11 = 1.0;
      dVar10 = 0.0;
      pbVar2 = pbVar2 + 2;
      do {
        pbVar5 = pbVar2;
        iVar4 = uVar6 - 0x30;
        dVar11 = dVar11 * 10.0;
        uVar6 = (uint)*pbVar5;
        dVar12 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        dVar10 = dVar12 + dVar10 * 10.0;
        pbVar2 = pbVar5 + 1;
      } while (uVar6 - 0x30 < 10);
      dVar10 = dVar10 / dVar11;
      goto LAB_100047dc;
    }
  }
  else {
    pbVar5 = pbVar2;
  }
  dVar10 = 0.0;
  if (9 < uVar7) {
    if (param_2 == (undefined4 *)0x0) {
      return 0.0;
    }
    *param_2 = param_1;
    return 0.0;
  }
LAB_100047dc:
  dVar9 = dVar9 + dVar10;
  if ((uVar6 | 0x20) == 0x65) {
    iVar4 = 1;
    pbVar2 = pbVar5 + 1;
    if (*pbVar2 == 0x2b) {
      pbVar2 = pbVar5 + 2;
    }
    else if (*pbVar2 == 0x2d) {
      pbVar2 = pbVar5 + 2;
      iVar4 = -1;
    }
    uVar6 = *pbVar2 - 0x30U;
    if (uVar6 < 10) {
      iVar3 = 0;
      uVar7 = (uint)*pbVar2;
      do {
        pbVar2 = pbVar2 + 1;
        iVar3 = uVar7 + iVar3 * 10 + -0x30;
        uVar7 = (uint)*pbVar2;
      } while (*pbVar2 - 0x30U < 10);
      if (uVar6 < 10) {
        uVar6 = iVar3 * iVar4;
        if ((int)uVar6 < 1) {
          if (0x7fffffff < uVar6) {
            do {
              dVar9 = dVar9 * 0.5;
              bVar8 = uVar6 != 0xffffffff;
              uVar6 = uVar6 + 1;
            } while (bVar8);
          }
        }
        else {
          uVar6 = uVar6 + 1;
          do {
            dVar9 = dVar9 + dVar9;
            uVar6 = uVar6 - 1;
          } while (1 < uVar6);
        }
        pbVar5 = pbVar2;
      }
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar5;
  }
  if (uVar1 == 0x2d) {
    dVar9 = -dVar9;
  }
  return dVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c4
 */

float recovered_100048c4(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100046f0(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000f34d
#define DAT_1000f34d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_1000f354
#define str_1000f354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000f365
#define str_1000f365 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048e0
 */

int recovered_100048e0(byte *param_1,uint param_2,byte *param_3,double *param_4)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  double dVar20;

  if (param_2 != 0) {
    *param_1 = 0;
  }
  local_70 = 0;
  local_68 = param_2;
LAB_10004954:
  do {
    while( true ) {
      pcVar5 = str_1000f365;
      bVar8 = *param_3;
      if (bVar8 == 0x25) break;
      if (bVar8 == 0) {
        if (param_2 != 0) {
          *param_1 = 0;
        }
        return local_70;
      }
      if (1 < local_68) {
        *param_1 = bVar8;
LAB_10004948:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_1000494c:
      local_70 = local_70 + 1;
      param_3 = param_3 + 1;
    }
    uVar9 = (uint)param_3[1];
    if (uVar9 == 0x25) break;
    pbVar12 = param_3 + 2;
    while( true ) {
      uVar9 = uVar9 - 0x20;
      if (0x10 < uVar9) break;
      if ((1 << (uVar9 & 0xff) & 0x12809U) == 0) {
        if (uVar9 == 10) {
          uVar9 = (uint)*pbVar12;
          pdVar2 = (double *)((int)param_4 + 4);
          goto LAB_100049f0;
        }
        break;
      }
      param_3 = param_3 + 1;
      uVar9 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    }
    do {
      pbVar12 = param_3 + 1;
      uVar9 = (uint)*pbVar12;
      param_3 = pbVar12;
    } while (uVar9 - 0x30 < 10);
    pdVar2 = param_4;
LAB_100049f0:
    if (uVar9 == 0x2e) {
      if (pbVar12[1] == 0x2a) {
        pbVar12 = pbVar12 + 2;
        uVar9 = (uint)*pbVar12;
        pdVar2 = (double *)((int)pdVar2 + 4);
      }
      else {
        do {
          pbVar12 = pbVar12 + 1;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 - 0x30 < 10);
      }
    }
    uVar13 = 0;
    bVar18 = false;
    param_3 = pbVar12;
    switch((uintptr_t)(uVar9)) {
    case 0x4c:
      param_3 = pbVar12 + 1;
      uVar13 = 8;
      bVar18 = true;
      break;
    case 0x68:
      param_3 = pbVar12 + 1;
      uVar13 = 2;
      if (*param_3 == 0x68) {
        uVar13 = 1;
        param_3 = pbVar12 + 2;
      }
      break;
    case 0x6a:
      param_3 = pbVar12 + 1;
      uVar13 = 7;
      break;
    case 0x6c:
      param_3 = pbVar12 + 1;
      uVar13 = 3;
      if (*param_3 == 0x6c) {
        uVar13 = 4;
        param_3 = pbVar12 + 2;
      }
      break;
    case 0x74:
      param_3 = pbVar12 + 1;
      uVar13 = 6;
      break;
    case 0x7a:
      param_3 = pbVar12 + 1;
      uVar13 = 5;
    }
    uVar9 = (uint)*param_3;
    if (0x2f < uVar9 - 0x49) {
switchD_10004b88_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_10005364;
    }
    param_4 = (double *)((int)pdVar2 + 4);
    local_64 = param_1;
    local_6c = param_4;
    switch((uintptr_t)(uVar9)) {
    case 0x49:
    case 100:
    case 0x69:
      switch((uintptr_t)(uVar13)) {
      case 1:
        uVar10 = (uint)(char)*(byte *)pdVar2;
        break;
      case 2:
        uVar10 = (uint)(short)*(ushort *)pdVar2;
        break;
      default:
        uVar10 = *(uint *)pdVar2;
        break;
      case 4:
      case 7:
        uVar10 = *(uint *)pdVar2;
        uVar9 = *(uint *)((int)pdVar2 + 4);
        local_6c = pdVar2 + 1;
        goto LAB_10004e10;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10004e10:
      if (0x7fffffff < uVar9) {
        local_70 = local_70 + 1;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          local_64 = param_1 + 1;
          *param_1 = 0x2d;
        }
        bVar18 = uVar10 != 0;
        uVar10 = -uVar10;
        uVar9 = -(uVar9 + bVar18);
      }
      iVar16 = 0;
      iVar6 = -1;
      do {
        iVar15 = iVar6;
        uVar3 = uVar10 >> 1 | uVar9 << 0x1f;
        uVar7 = uVar3 + (uVar9 >> 1) + (uint)CARRY4(uVar3,uVar9 >> 1);
        uVar7 = uVar7 - (((uint)((ulonglong)uVar7 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar7 / 5);
        uVar4 = uVar3 - uVar7;
        lVar1 = (ulonglong)uVar4 * 0xcccccccd;
        uVar11 = (uint)lVar1;
        bVar18 = uVar10 < 10;
        uVar14 = -uVar9;
        local_60[-iVar16] = str_1000f365[uVar10 + uVar11 * -10];
        iVar16 = iVar16 + -1;
        iVar6 = iVar15 + -1;
        uVar9 = ((uVar9 >> 1) - (uint)(uVar3 < uVar7)) * -0x33333333 +
                uVar4 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
        uVar10 = uVar11;
      } while (bVar18 <= uVar14);
      if (iVar16 != 0) {
        local_70 = local_70 - iVar16;
        do {
          param_1 = local_64;
          if (1 < local_68) {
            local_68 = local_68 - 1;
            param_1 = local_64 + 1;
            *local_64 = local_60[-1 - iVar15];
          }
          bVar18 = iVar15 != -1;
          iVar15 = iVar15 + 1;
          local_64 = param_1;
          param_4 = local_6c;
        } while (bVar18);
        goto LAB_10005364;
      }
      goto LAB_10005370;
    default:
      goto switchD_10004b88_caseD_4a;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(uVar13)) {
      case 1:
        uVar14 = (uint)*(byte *)pdVar2;
        break;
      case 2:
        uVar14 = (uint)*(ushort *)pdVar2;
        break;
      default:
        uVar14 = *(uint *)pdVar2;
        break;
      case 4:
      case 7:
        uVar14 = *(uint *)pdVar2;
        param_4 = pdVar2 + 1;
        uVar10 = *(uint *)((int)pdVar2 + 4);
        goto LAB_10005158;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10005158;
      }
      uVar10 = 0;
LAB_10005158:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000f354;
      }
      do {
        iVar16 = iVar6;
        local_60[iVar16] = pcVar5[uVar14 & 0xf];
        uVar14 = uVar14 >> 4 | uVar10 << 0x1c;
        uVar9 = uVar10 >> 4;
        uVar10 = uVar10 >> 4;
        iVar6 = iVar16 + 1;
      } while (uVar14 != 0 || uVar9 != 0);
      iVar6 = -iVar16;
      local_70 = local_70 + iVar16 + 1;
      pbVar12 = param_1;
      do {
        param_1 = pbVar12;
        if (1 < local_68) {
          local_68 = local_68 - 1;
          param_1 = pbVar12 + 1;
          *pbVar12 = local_60[-iVar6];
        }
        iVar6 = iVar6 + 1;
        pbVar12 = param_1;
      } while (iVar6 != 1);
LAB_10005364:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_10004948;
      }
      goto LAB_1000494c;
    case 0x66:
      param_4 = pdVar2 + 1;
      if (bVar18) {
        pbVar12 = param_1;
        if (1 < local_68) {
          pbVar12 = param_1 + 1;
          *param_1 = 0x30;
          if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
            uVar9 = local_68 & 0xfffffffe;
            param_1[1] = 0x2e;
            if (uVar9 == 2) {
              pbVar12 = param_1 + 2;
            }
            else {
              param_1[2] = 0x30;
              if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
                param_1[3] = 0x30;
                if (uVar9 == 4) {
                  pbVar12 = param_1 + 4;
                }
                else {
                  param_1[4] = 0x30;
                  if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                    param_1[5] = 0x30;
                    if (uVar9 == 6) {
                      pbVar12 = param_1 + 6;
                    }
                    else {
                      param_1[6] = 0x30;
                      if (local_68 - 9 < 0xfffffffd || local_68 == 6) {
                        param_1[7] = 0x30;
                        local_68 = local_68 - 8;
                        pbVar12 = param_1 + 8;
                        goto LAB_10004d08;
                      }
                      pbVar12 = param_1 + 7;
                    }
                  }
                  else {
                    pbVar12 = param_1 + 5;
                  }
                }
              }
              else {
                pbVar12 = param_1 + 3;
              }
            }
          }
          local_68 = 1;
        }
LAB_10004d08:
        local_70 = local_70 + 8;
        param_3 = param_3 + 1;
        param_1 = pbVar12;
      }
      else {
        dVar19 = *pdVar2;
        in_fpscr = in_fpscr & 0xfffffff;
        if (dVar19 < 0.0) {
          dVar19 = -dVar19;
          local_70 = local_70 + 1;
          if (1 < local_68) {
            local_64 = param_1 + 1;
            *param_1 = 0x2d;
            local_68 = local_68 - 1;
          }
        }
        uVar14 = VectorFloatToSigned(dVar19,3);
        iVar16 = 0;
        iVar6 = -1;
        uVar9 = 0;
        uVar10 = uVar14;
        do {
          iVar15 = iVar6;
          uVar17 = uVar10 >> 1 | uVar9 << 0x1f;
          uVar4 = uVar17 + (uVar9 >> 1) + (uint)CARRY4(uVar17,uVar9 >> 1);
          uVar4 = uVar4 - (((uint)((ulonglong)uVar4 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar4 / 5)
          ;
          uVar7 = uVar17 - uVar4;
          lVar1 = (ulonglong)uVar7 * 0xcccccccd;
          uVar11 = (uint)lVar1;
          bVar18 = uVar10 < 10;
          uVar3 = -uVar9;
          local_60[-iVar16] = str_1000f365[uVar10 + uVar11 * -10];
          iVar16 = iVar16 + -1;
          iVar6 = iVar15 + -1;
          uVar9 = ((uVar9 >> 1) - (uint)(uVar17 < uVar4)) * -0x33333333 +
                  uVar7 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
          uVar10 = uVar11;
        } while (bVar18 <= uVar3);
        if (iVar16 != 0) {
          local_70 = local_70 - iVar16;
          do {
            if (1 < local_68) {
              local_68 = local_68 - 1;
              *local_64 = local_60[-1 - iVar15];
              local_64 = local_64 + 1;
            }
            bVar18 = iVar15 != -1;
            iVar15 = iVar15 + 1;
          } while (bVar18);
        }
        if (local_68 < 2) {
LAB_10005270:
          param_1 = local_64;
          uVar9 = local_68;
        }
        else {
          *local_64 = 0x2e;
          param_1 = local_64 + 1;
          uVar9 = local_68 - 1;
          if (1 < local_68 - 1) {
            dVar20 = (double)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
            uVar10 = local_68 & 0xfffffffe;
            uVar9 = 1;
            dVar19 = (dVar19 - dVar20) * 10.0;
            uVar13 = VectorFloatToSigned(dVar19,3);
            local_64[1] = (char)uVar13 + 0x30;
            if (uVar10 == 2) {
              param_1 = local_64 + 2;
            }
            else {
              dVar20 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
              dVar19 = (dVar19 - dVar20) * 10.0;
              uVar13 = VectorFloatToSigned(dVar19,3);
              local_64[2] = (char)uVar13 + 0x30;
              if (local_68 - 5 < 0xfffffffd || local_68 == 2) {
                dVar20 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
                dVar19 = (dVar19 - dVar20) * 10.0;
                uVar13 = VectorFloatToSigned(dVar19,3);
                local_64[3] = (char)uVar13 + 0x30;
                if (uVar10 == 4) {
                  param_1 = local_64 + 4;
                }
                else {
                  dVar20 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
                  dVar19 = (dVar19 - dVar20) * 10.0;
                  uVar13 = VectorFloatToSigned(dVar19,3);
                  local_64[4] = (char)uVar13 + 0x30;
                  if (local_68 - 7 < 0xfffffffd || local_68 == 4) {
                    dVar20 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
                    dVar19 = (dVar19 - dVar20) * 10.0;
                    uVar13 = VectorFloatToSigned(dVar19,3);
                    local_64[5] = (char)uVar13 + 0x30;
                    if (uVar10 != 6) {
                      dVar20 = (double)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
                      uVar13 = VectorFloatToSigned((dVar19 - dVar20) * 10.0,3);
                      local_64[6] = (char)uVar13 + 0x30;
                      local_68 = local_68 - 7;
                      local_64 = local_64 + 7;
                      goto LAB_10005270;
                    }
                    param_1 = local_64 + 6;
                  }
                  else {
                    param_1 = local_64 + 5;
                  }
                }
              }
              else {
                param_1 = local_64 + 3;
              }
            }
          }
        }
        local_68 = uVar9;
        local_70 = local_70 + 7;
        param_3 = param_3 + 1;
      }
      break;
    case 0x70:
      uVar9 = *(uint *)pdVar2;
      if (local_68 < 2) {
        uVar10 = local_68;
        pbVar12 = param_1;
      }
      else {
        uVar10 = 1;
        pbVar12 = param_1 + 1;
        *param_1 = 0x30;
        if (local_68 - 3 < 0xfffffffd || local_68 == 0) {
          uVar10 = local_68 - 2;
          pbVar12 = param_1 + 2;
          param_1[1] = 0x78;
        }
      }
      iVar6 = 0;
      do {
        iVar16 = iVar6;
        local_60[iVar16] = str_1000f365[uVar9 & 0xf];
        uVar9 = uVar9 >> 4;
        iVar6 = iVar16 + 1;
      } while (uVar9 != 0);
      iVar6 = -iVar16;
      local_70 = local_70 + iVar16 + 1 + 2;
      do {
        param_1 = pbVar12;
        if (1 < uVar10) {
          uVar10 = uVar10 - 1;
          param_1 = pbVar12 + 1;
          *pbVar12 = local_60[-iVar6];
        }
        iVar6 = iVar6 + 1;
        pbVar12 = param_1;
      } while (iVar6 != 1);
      param_3 = param_3 + 1;
      local_68 = uVar10;
      break;
    case 0x73:
      pbVar12 = *(byte **)pdVar2;
      if (pbVar12 == (byte *)0x0) {
        pbVar12 = &DAT_1000f34d;
      }
      bVar8 = *pbVar12;
      if (bVar8 != 0) {
        do {
          pbVar12 = pbVar12 + 1;
          local_70 = local_70 + 1;
          if (1 < local_68) {
            *param_1 = bVar8;
            local_68 = local_68 - 1;
            param_1 = param_1 + 1;
          }
          bVar8 = *pbVar12;
        } while (bVar8 != 0);
        goto LAB_10005364;
      }
      goto LAB_10005384;
    case 0x75:
      switch((uintptr_t)(uVar13)) {
      case 1:
        uVar10 = (uint)*(byte *)pdVar2;
        break;
      case 2:
        uVar10 = (uint)*(ushort *)pdVar2;
        break;
      default:
        uVar10 = *(uint *)pdVar2;
        break;
      case 4:
      case 7:
        local_6c = pdVar2 + 1;
        uVar10 = *(uint *)pdVar2;
        uVar9 = *(uint *)((int)pdVar2 + 4);
        goto LAB_10005298;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_10005298;
      }
      uVar9 = 0;
LAB_10005298:
      iVar16 = 0;
      iVar6 = -1;
      do {
        iVar15 = iVar6;
        uVar3 = uVar10 >> 1 | uVar9 << 0x1f;
        uVar7 = uVar3 + (uVar9 >> 1) + (uint)CARRY4(uVar3,uVar9 >> 1);
        uVar7 = uVar7 - (((uint)((ulonglong)uVar7 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar7 / 5);
        uVar4 = uVar3 - uVar7;
        lVar1 = (ulonglong)uVar4 * 0xcccccccd;
        uVar11 = (uint)lVar1;
        bVar18 = uVar10 < 10;
        uVar14 = -uVar9;
        local_60[-iVar16] = str_1000f365[uVar10 + uVar11 * -10];
        iVar16 = iVar16 + -1;
        iVar6 = iVar15 + -1;
        uVar10 = uVar11;
        uVar9 = ((uVar9 >> 1) - (uint)(uVar3 < uVar7)) * -0x33333333 +
                uVar4 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
      } while (bVar18 <= uVar14);
      if (iVar16 != 0) {
        local_70 = local_70 - iVar16;
        pbVar12 = param_1;
        do {
          param_1 = pbVar12;
          if (1 < local_68) {
            local_68 = local_68 - 1;
            param_1 = pbVar12 + 1;
            *pbVar12 = local_60[-1 - iVar15];
          }
          bVar18 = iVar15 != -1;
          iVar15 = iVar15 + 1;
          pbVar12 = param_1;
          param_4 = local_6c;
        } while (bVar18);
        goto LAB_10005364;
      }
LAB_10005370:
      param_4 = local_6c;
LAB_10005384:
      param_3 = param_3 + 1;
      param_1 = local_64;
      local_68 = local_68;
    }
  } while( true );
  local_70 = local_70 + 1;
  pbVar12 = param_1;
  if (1 < local_68) {
    local_68 = local_68 - 1;
    pbVar12 = param_1 + 1;
    *param_1 = 0x25;
  }
  param_3 = param_3 + 2;
  param_1 = pbVar12;
  goto LAB_10004954;
}

#undef DAT_1000f34d
#undef str_1000f354
#undef str_1000f365
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10005544(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100048e0(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10010098
#define DAT_10010098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd74U)))
#undef DAT_1001009c
#define DAT_1001009c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0xd78U)))
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
 * Address: 0x10005574
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005574(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int *unaff_r9;
  int iVar5;
  bool bVar6;
  bool bVar7;

  pcVar4 = (code *)((int)param_1 + (int)param_2);
  if (CARRY4((uint)param_1,(uint)param_2)) {
    pcVar4 = (code *)0xffffffff;
  }
  if (param_1 < &DAT_68000000) {
    bVar7 = param_1 <= pcVar4;
    bVar6 = pcVar4 == (code *)param_1;
    if (bVar7 && !bVar6) {
      bVar7 = (code *)0x5fffffff < pcVar4;
      bVar6 = pcVar4 == pf_varargs_10005544__4_;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < pf_varargs_10005544__4_) {
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
          bVar6 = DAT_10010098 != 0;
          piVar3 = &DAT_10010098;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = (int *)DAT_1001009c;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_1001009c = (code *)unaff_r9;
          }
        }
      }
      if (pcVar4 < (code *)0x68000001) {
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
      puVar2 = &DAT_10010098;
      if (DAT_10010098 != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      pcVar4 = (code *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = (int *)DAT_1001009c;
      goto LAB_100056c4;
    }
  }
  if (param_3 != (int *)0x0) {
    pcVar4 = (code *)((int)param_1 + 0xfU & 0xfffffff0);
    param_1 = (int *)(pcVar4 + -(int)param_1);
  }
  if ((param_3 == (int *)0x0 || param_2 <= param_1) ||
     (uVar1 = (int)param_2 - (int)param_1 & 0xfffffff0, uVar1 < 0x21)) {
    return;
  }
  *(undefined4 *)(pcVar4 + 4) = 0;
  iVar5 = *param_3;
  bVar6 = DAT_10010098 != 0;
  puVar2 = &DAT_10010098;
  *(int *)(pcVar4 + 8) = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = pcVar4;
  *param_3 = (int)pcVar4;
  *(uint *)pcVar4 = uVar1 - 0x10;
  piVar3 = (int *)DAT_1001009c;
  *(uint8_t *)((uintptr_t)pcVar4+0xc) = 0x1;
LAB_100056c4:
  if (piVar3 == (int *)0x0) {
    DAT_1001009c = pcVar4;
    return;
  }
  return;
}

#undef DAT_10010098
#undef DAT_1001009c
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

#undef DAT_100100a0
#define DAT_100100a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define local_224 (*(undefined1 (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005760(char *param_1,int param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_100100a0 != 0) {
          DAT_100100a0 = DAT_100100a0 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_100100a0 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10001f98(local_224,&DAT_100100a4,DAT_100100a0);
            uVar2 = DAT_100100a0;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_100100a0 = 0;
        }
        else {
          if (DAT_100100a0 - 0x1ff < 0xfffffe00) {
            recovered_10001f98(local_224,&DAT_100100a4,DAT_100100a0);
            local_224[DAT_100100a0] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_100100a0 = 0;
          }
          (&DAT_100100a4)[DAT_100100a0] = cVar1;
          DAT_100100a0 = DAT_100100a0 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_100100a0
#undef DAT_100100a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_100100a0
#define DAT_100100a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define local_210 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005944
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005944(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_100100a0 != 0) {
    recovered_10001f98(local_210,&DAT_100100a4,DAT_100100a0);
    uVar1 = DAT_100100a0;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_100100a0 = 0;
  return;
}

#undef DAT_100100a0
#undef DAT_100100a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_100100a0
#define DAT_100100a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#define auStack_214 (*(undefined1 (*)[512])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a04
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005a04(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_100100a0 == 0) {
    return;
  }
  recovered_10001f98(auStack_214,&DAT_100100a4,DAT_100100a0);
  auStack_214[DAT_100100a0] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_100100a0 = 0;
  return;
}

#undef DAT_100100a0
#undef DAT_100100a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000f376
#define DAT_1000f376 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac0
 */

void recovered_10005ac0(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined1 *puVar2;

  format = &DAT_1000f376;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000f34c;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10005544(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10005760(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000f34c
#undef DAT_1000f376
#undef acStack_14c

#undef DAT_1000f394
#define DAT_1000f394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f379
#define str_1000f379 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b18
 */

void recovered_10005b18(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003028(str_1000f379);
  recovered_10005760(str_1000f379,uVar1);
  uVar1 = recovered_10003028(&DAT_1000f394);
  recovered_10005760(&DAT_1000f394,uVar1);
  return;
}

#undef DAT_1000f394
#undef str_1000f379

#undef DAT_1000f394
#define DAT_1000f394 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000f397
#define str_1000f397 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b64
 */

void recovered_10005b64(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003028(str_1000f397);
  recovered_10005760(str_1000f397,uVar1);
  uVar1 = recovered_10003028(&DAT_1000f394);
  recovered_10005760(&DAT_1000f394,uVar1);
  return;
}

#undef DAT_1000f394
#undef str_1000f397

#undef DAT_100100a0
#define DAT_100100a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#undef _DAT_40010844
#define _DAT_40010844 (*(code * *)(0x40010844U))
#define auStack_224 (*(undefined1 (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005bb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_100100a0 != 0) {
    recovered_10001f98(auStack_224,&DAT_100100a4,DAT_100100a0);
    auStack_224[DAT_100100a0] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_100100a0 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_100100a0
#undef DAT_100100a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef DAT_40010844
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef _DAT_40010844
#undef auStack_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d04
 */

undefined4 recovered_10005d04(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d0c
 */

void recovered_10005d0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d10
 */

undefined4 recovered_10005d10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000f376
#define DAT_1000f376 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef str_1000f42b
#define str_1000f42b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000f438
#define str_1000f438 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000f446
#define str_1000f446 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d18
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005d18(char *param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint size;
  void *destination;
  undefined4 uVar7;
  undefined1 uVar8;
  char *unaff_r8;

  if (param_1 != (char *)0x0) {
    unaff_r8 = (char *)param_2;
  }
  if (param_1 == (char *)0x0 || param_2 == 0) {
    uVar7 = 0x16;
    goto LAB_10005f8c;
  }
  iVar2 = recovered_10003050(param_1,str_1000f42b);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10005f18:
    puVar4 = recovered_10001ea0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002728(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      pf_varargs_10005544__4_((char *)(puVar4 + 1),0xf1,&DAT_1000f376,(uint)param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10003050(param_1,str_1000f438);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10005f18;
    }
    iVar3 = recovered_10003050(param_1,str_1000f446);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10005f18;
    }
    puVar4 = recovered_10001ea0(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10002728(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10003408(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10003408(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10003408(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10003408(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10003408(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10003408(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10003408(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      pf_varargs_10005544__4_((char *)(puVar4 + 1),0xf1,&DAT_1000f376,(uint)param_1);
      recovered_10002728(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10003408(unaff_r8,'w');
        if ((pcVar5 == (char *)0x0) && (local_20 != 0)) {
          if (*(char *)((int)puVar4 + 0x111) == '\x01') {
            uVar6 = puVar4[0x41];
            if (uVar6 < local_20) {
              if (uVar6 == 0) {
                uVar6 = 0x100;
              }
              do {
                size = uVar6;
                uVar6 = size << 1;
              } while (size < local_20);
              destination = recovered_10001f44((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10005fb4;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_10001f98(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10005fb4:
        *DAT_10014004 = uVar7;
        recovered_10001ef4(puVar4);
        return (undefined4 *)0x0;
      }
      if (*(char *)((int)puVar4 + 0x112) == '\x01') {
        puVar4[0x42] = puVar4[0x40];
        return puVar4;
      }
      return puVar4;
    }
  }
  uVar7 = 0xc;
LAB_10005f8c:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000f376
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000f42b
#undef str_1000f438
#undef str_1000f446
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000609c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000609c(char *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_3 != (uint *)0x0) {
    uVar2 = *param_3;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)((int)param_3 + 0x113);
    }
    if (bVar3 && uVar2 == 1) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
         ((_DAT_40010838 != (code *)0x0 &&
          (iVar1 = (*_DAT_40010838)(param_3 + 1,param_3[0x3e],param_3[0x40]), iVar1 != 0)))) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
      }
      else {
        *(undefined1 *)((int)param_3 + 0x115) = 1;
        *DAT_10014004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_10001ef4((void *)param_3[0x3f]);
    }
    recovered_10001ef4(param_3);
  }
  recovered_10005d18(param_1,param_2);
  return;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000619c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000619c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  uVar3 = 0;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)((int)param_1 + 0x113);
  }
  if (bVar4 && uVar2 == 1) {
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
       ((_DAT_40010838 != (code *)0x0 &&
        (iVar1 = (*_DAT_40010838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
      uVar3 = 0;
      *(undefined1 *)((int)param_1 + 0x113) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar3 = 0xffffffff;
      *DAT_10014004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10001ef4((void *)param_1[0x3f]);
  }
  recovered_10001ef4(param_1);
  return uVar3;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006294
 */

uint recovered_10006294(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  uint count;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r4 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r4[0x44] == '\x01'))
    {
      iVar2 = *unaff_r4;
      bVar6 = iVar2 == 0;
      if (bVar6) {
        iVar2 = unaff_r4[0x43];
      }
      if (bVar6 && iVar2 == -1) {
        uVar5 = unaff_r4[0x42];
        if (uVar5 < (uint)unaff_r4[0x40]) {
          uVar3 = (uint)((ulonglong)param_3 * (ulonglong)param_2);
          uVar1 = unaff_r4[0x40] - uVar5;
          if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) != 0) {
            uVar3 = 0xffffffff;
          }
          count = uVar3;
          if (uVar1 < uVar3) {
            count = uVar1;
          }
          recovered_10001f98(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10001270(count,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar4 = param_1;
          uVar5 = param_2;
          do {
            uVar1 = recovered_100063c0(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *puVar4 = (char)uVar1;
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar5 != 0);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + param_2;
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_100100a0
#define DAT_100100a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xd7cU)))
#undef DAT_100100a4
#define DAT_100100a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd80U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010840
#define DAT_40010840 (*(uint8_t *)(0x40010840U))
#undef DAT_40010844
#define DAT_40010844 (*(uint8_t *)(0x40010844U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010840
#define _DAT_40010840 (*(code * *)(0x40010840U))
#undef _DAT_40010844
#define _DAT_40010844 (*(code * *)(0x40010844U))
#define auStack_220 (*(undefined1 (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_100063c0(int *param_1)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  char *text;

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
LAB_1000641c:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_100100a0 != 0) {
      recovered_10001f98(auStack_220,&DAT_100100a4,DAT_100100a0);
      auStack_220[DAT_100100a0] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_100100a0 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000f34c,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10003028(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_1000641c;
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

#undef DAT_1000f34c
#undef DAT_100100a0
#undef DAT_100100a4
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef DAT_40010844
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef _DAT_40010844
#undef auStack_220

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065c0
 */

int recovered_100065c0(void *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint size;
  ulong count;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (void *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    count = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005760(param_1,count);
      param_4[0x42] = param_4[0x42] + count;
    }
    else {
      uVar3 = param_4[0x41];
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar2 = param_4[0x42];
      }
      else {
        uVar2 = param_4[0x40];
        param_4[0x42] = uVar2;
      }
      if (uVar3 < uVar2 + count) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size = uVar3;
          uVar3 = size << 1;
        } while (size < uVar2 + count);
        pvVar1 = recovered_10001f44((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10014004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10002728((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10001f98((void *)(param_4[0x3f] + uVar2),param_1,count);
      uVar3 = param_4[0x42] + count;
      param_4[0x42] = uVar3;
      if (param_4[0x40] < uVar3) {
        param_4[0x40] = uVar3;
      }
      *(undefined2 *)((int)param_4 + 0x113) = 1;
    }
  }
  return param_3;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006738
 */

undefined4 recovered_10006738(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000674c;
        iVar1 = 0x100;
      }
      param_2 = *(int *)((int)param_1 + iVar1) + param_2;
    }
    if (-1 < (int)param_2) {
      param_1[0x42] = param_2;
      param_1[0x43] = -1;
      *(bool *)(param_1 + 0x45) = (uint)param_1[0x40] <= param_2;
      return 0;
    }
  }
LAB_1000674c:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067e8
 */

undefined4 recovered_100067e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006810(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;

  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x113);
    }
    if (bVar4 && uVar3 == 1) {
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3b < _DAT_40010808)) &&
         ((_DAT_40010838 != (code *)0x0 &&
          (iVar1 = (*_DAT_40010838)(param_1 + 1,param_1[0x3e],param_1[0x40]), iVar1 != 0)))) {
        uVar2 = 0;
        *(undefined1 *)((int)param_1 + 0x113) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x115) = 1;
        *DAT_10014004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068e8
 */

undefined1 recovered_100068e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f8
 */

undefined1 recovered_100068f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006908
 */

void recovered_10006908(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006924
 */

void recovered_10006924(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006948
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006948(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 5;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x3f < _DAT_40010808)) &&
       ((_DAT_4001083c != (code *)0x0 && (iVar1 = (*_DAT_4001083c)(), iVar1 != 0)))) {
      return 0;
    }
  }
  *DAT_10014004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef DAT_4001083c
#define DAT_4001083c (*(uint8_t *)(0x4001083cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
#undef _DAT_4001083c
#define _DAT_4001083c (*(code * *)(0x4001083cU))
#define uStack_24 (*(undefined4 *)(frame + 28))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100069d8(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10002728(&local_28,0,0xc);
  uVar2 = 2;
  if (((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
      (((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_28), iVar1 != 0))
       && ((uVar2 = 5, _DAT_40010800 == 0x50414d57 &&
           ((_DAT_40010804 != 0 && (0x3b < _DAT_40010808)))))))) &&
     ((_DAT_40010838 != (code *)0x0 &&
      (((((iVar1 = (*_DAT_40010838)(param_2,local_28,uStack_24), iVar1 != 0 &&
          (_DAT_40010800 == 0x50414d57)) && (_DAT_40010804 != 0)) &&
        ((0x3f < _DAT_40010808 && (_DAT_4001083c != (code *)0x0)))) &&
       (iVar1 = (*_DAT_4001083c)(param_1), iVar1 != 0)))))) {
    return 0;
  }
  *DAT_10014004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef DAT_40010838
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef _DAT_40010838
#undef _DAT_4001083c
#undef uStack_24
#undef local_28

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010834
#define DAT_40010834 (*(uint8_t *)(0x40010834U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010834
#define _DAT_40010834 (*(code * *)(0x40010834U))
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006b4c(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10002728(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_10001ea0(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10001f98(destination,local_24,local_20);
      }
      uVar2 = 1;
      *param_3 = local_20;
      *param_2 = destination;
    }
  }
  return uVar2;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef local_24
#undef local_20

#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010838
#define DAT_40010838 (*(uint8_t *)(0x40010838U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010838
#define _DAT_40010838 (*(code * *)(0x40010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10006c4c(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (((param_1 == 0) || (((param_2 == 0 && (param_3 != 0)) || (_DAT_40010800 != 0x50414d57)))) ||
     ((_DAT_40010804 == 0 || (_DAT_40010808 < 0x3c)))) {
    return false;
  }
  if (_DAT_40010838 == (code *)0x0) {
    return false;
  }
  iVar1 = (*_DAT_40010838)(param_1);
  return iVar1 != 0;
}

#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cd4
 */

undefined4 recovered_10006cd4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cdc
 */

void recovered_10006cdc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce0
 */

undefined4 recovered_10006ce0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ce8
 */

undefined4 recovered_10006ce8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf0
 */

undefined4 recovered_10006cf0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cf8
 */

char * recovered_10006cf8(char *param_1,char param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_3 == 0) {
    return (char *)0x0;
  }
  do {
    if (*param_1 == param_2) {
      return param_1;
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return (char *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d2c
 */

int recovered_10006d2c(char *left,char *right,ulong count)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    if (count == 0) {
      return 0;
    }
    count = count - 1;
    uVar1 = (uint)(byte)*left;
    if (uVar1 != (byte)*right) break;
    left = left + 1;
    right = right + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - (byte)*right;
}


#undef DAT_1000f3ba
#define DAT_1000f3ba (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000f3bd
#define str_1000f3bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000f3ca
#define str_1000f3ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6U)))
#undef str_1000f3d4
#define str_1000f3d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000f3e8
#define str_1000f3e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000f3f6
#define str_1000f3f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_1000f408
#define str_1000f408 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000f414
#define str_1000f414 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000f425
#define str_1000f425 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d70
 */

char * recovered_10006d70(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000f3ba;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10006d90_caseD_0;
  default:
    pcVar1 = str_1000f425;
switchD_10006d90_caseD_0:
    return pcVar1;
  case 2:
    return str_1000f3bd;
  case 5:
    return str_1000f3ca;
  case 9:
    return str_1000f3d4;
  case 0xc:
    return str_1000f3e8;
  case 0xd:
    return str_1000f3f6;
  case 0x11:
    return str_1000f408;
  case 0x16:
    return str_1000f414;
  }
}

#undef DAT_1000f3ba
#undef str_1000f3bd
#undef str_1000f3ca
#undef str_1000f3d4
#undef str_1000f3e8
#undef str_1000f3f6
#undef str_1000f408
#undef str_1000f414
#undef str_1000f425

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e70
 */

undefined4 recovered_10006e70(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e78
 */

undefined4 recovered_10006e78(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_100102a4
#define DAT_100102a4 (*(int *)(((uintptr_t)pf_module_state + 0xf80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e80
 */

void recovered_10006e80(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_100102a4 = DAT_100102a4 + 1;
  return;
}

#undef DAT_100102a4

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006ea8(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006eb8(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006ed0(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_10006f74
#define DAT_10006f74 (*(int *)(0x10006f74U))
#undef DAT_10006f78
#define DAT_10006f78 (*(int *)(0x10006f78U))
#define local_18 (*(int *)(frame + 56))
#define local_14 (*(undefined1 * *)(frame + 60))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(undefined1 * *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ef0
 */

void recovered_10006ef0(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10006f7c;
  local_20 = ((uintptr_t)pf_module_state + 0x130U);
  local_18 = (0x1cU) + 0x10006f28;
  local_38 = 1;
  recovered_1000756c(&uStack_3c);
  recovered_10001e8c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10006f50);
  (*pcVar1)();
}

#undef DAT_10006f74
#undef DAT_10006f78
#undef local_18
#undef local_14
#undef uStack_3c
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f7c
 */

undefined4 recovered_10006f7c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f84
 */

void recovered_10006f84(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10006f94(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}


#undef DAT_100102a8
#define DAT_100102a8 (*(int *)(((uintptr_t)pf_module_state + 0xf84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f94
 */

void recovered_10006f94(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_100102a8;
  DAT_100102a8 = param_1;
  recovered_10007408(param_1);
  return;
}

#undef DAT_100102a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fcc
 */

void * recovered_10006fcc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10001ea0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001e8c();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff8
 */

void * recovered_10006ff8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10001ea0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001e8c();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007024
 */

void recovered_10007024(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006f7c;
  local_78 = ((uintptr_t)pf_module_state + 0x140U);
  local_70 = (0x3cU) + 0x10007078;
  local_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef local_90
#undef local_7c
#undef auStack_a0
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_100071ac
#define DAT_100071ac (*(int *)(0x100071acU))
#undef DAT_100071b0
#define DAT_100071b0 (*(int *)(0x100071b0U))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070ec
 */

void recovered_100070ec(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006f7c;
  local_78 = ((uintptr_t)pf_module_state + 0x150U);
  local_70 = (0x3cU) + 0x10007140;
  local_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100071ac
#undef DAT_100071b0
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_a0
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10007274
#define DAT_10007274 (*(int *)(0x10007274U))
#undef DAT_10007278
#define DAT_10007278 (*(int *)(0x10007278U))
#define local_90 (*(undefined4 *)(frame + 32))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071b4
 */

void recovered_100071b4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006f7c;
  local_78 = ((uintptr_t)pf_module_state + 0x160U);
  local_70 = (0x3cU) + 0x10007208;
  local_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_10007274
#undef DAT_10007278
#undef local_90
#undef auStack_a0
#undef local_7c
#undef local_78
#undef uStack_94
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

#undef DAT_1000733c
#define DAT_1000733c (*(int *)(0x1000733cU))
#undef DAT_10007340
#define DAT_10007340 (*(int *)(0x10007340U))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000727c
 */

void recovered_1000727c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10006f7c;
  local_78 = ((uintptr_t)pf_module_state + 0x170U);
  local_70 = (0x3cU) + 0x100072d0;
  local_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000733c
#undef DAT_10007340
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007344
 */

undefined4 recovered_10007344(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000734c
 */

uint recovered_1000734c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000735c
 */

void recovered_1000735c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000736c
 */

void recovered_1000736c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

undefined4 * recovered_10007370(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint size;
  uint uVar6;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x1c;
  puVar1 = recovered_10001ea0(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006ef0();
  }
  if (size != 0) {
    uVar6 = 0;
    if (0xf < size) {
      uVar6 = size & 0xfffffff0;
      puVar2 = puVar1;
      uVar4 = uVar6;
      do {
        *puVar2 = 0;
        puVar2[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar2[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar2[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar2 = puVar2 + 4;
        uVar4 = uVar4 - 0x10;
      } while (uVar4 != 0);
      if (size == uVar6) goto LAB_100073ec;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_100073ec:
  return puVar1 + 7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073f8
 */

void recovered_100073f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10001ef4((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007408
 */

int recovered_10007408(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_100102a8
#define DAT_100102a8 (*(void * *)(((uintptr_t)pf_module_state + 0xf84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007410
 */

void recovered_10007410(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  undefined4 uVar2;

  pointer = DAT_100102a8;
  if (DAT_100102a8 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_100102a8 + 0x18);
  uVar2 = *(undefined4 *)((int)DAT_100102a8 + 8);
  *(undefined4 *)((int)DAT_100102a8 + 8) = 0;
  DAT_100102a8 = (void *)uVar2;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10001ef4(pointer);
  return;
}

#undef DAT_100102a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007478
 */

void recovered_10007478(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_100074a0((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_100102a8
#define DAT_100102a8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf84U)))
#undef DAT_100102ac
#define DAT_100102ac (*(int * *)(((uintptr_t)pf_module_state + 0xf88U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074a0
 */

void recovered_100074a0(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_100102ac != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_100102ac;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_10007db8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_10007624(param_1);
        puVar3 = DAT_100102a8;
                    /* WARNING: Subroutine does not return */
        if (DAT_100102a8 == (undefined4 *)0x0) {
          recovered_10006ef0();
        }
        DAT_100102a8[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_100074a0(puVar3);
        *extraout_r0 = (int)DAT_100102ac;
        DAT_100102ac = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}

#undef DAT_100102a8
#undef DAT_100102ac
#undef local_28
#undef local_24
#undef local_20

#undef DAT_100102a8
#define DAT_100102a8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf84U)))
#undef DAT_100102ac
#define DAT_100102ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007534
 */

void recovered_10007534(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_100102a8;
                    /* WARNING: Subroutine does not return */
  if (DAT_100102a8 == (undefined4 *)0x0) {
    recovered_10006ef0();
  }
  DAT_100102a8[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_100074a0(puVar1);
  *extraout_r0 = DAT_100102ac;
  DAT_100102ac = extraout_r0;
  return;
}

#undef DAT_100102a8
#undef DAT_100102ac

#undef DAT_100102ac
#define DAT_100102ac (*(uint32_t * *)(((uintptr_t)pf_module_state + 0xf88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000756c
 */

void recovered_1000756c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_100102ac;
  DAT_100102ac = param_1;
  return;
}

#undef DAT_100102ac

#undef DAT_100102ac
#define DAT_100102ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0xf88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007590
 */

void recovered_10007590(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_100102ac;
  if (DAT_100102ac == param_1) {
    puVar2 = &DAT_100102ac;
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

#undef DAT_100102ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075d8
 */

void recovered_100075d8(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_100074a0(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075e4
 */

void recovered_100075e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}


#undef DAT_100102ac
#define DAT_100102ac (*(int * *)(((uintptr_t)pf_module_state + 0xf88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075f0
 */

void recovered_100075f0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_100102ac != (int *)0x0) {
    DAT_100102ac = (int *)*DAT_100102ac;
  }
  recovered_10007624(param_1);
  return;
}

#undef DAT_100102ac

#undef DAT_100102ac
#define DAT_100102ac (*(int * *)(((uintptr_t)pf_module_state + 0xf88U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007624
 */

void recovered_10007624(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_100102ac != (int *)0x0) {
    piVar5 = (int *)param_1[3];
    do {
      piVar1 = DAT_100102ac;
      if (DAT_100102ac == piVar5) {
        iVar4 = param_1[5];
        iVar3 = param_1[4];
        DAT_100102ac[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_100076d8:
        piVar1[1] = iVar3;
        recovered_10006ea8((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_100075f0(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_10007db8((int)DAT_100102ac,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_100076d8;
      }
      DAT_100102ac = (int *)*piVar1;
    } while (DAT_100102ac != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}

#undef DAT_100102ac
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e4
 */

void recovered_100076e4(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100075f0(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f0
 */

undefined4 recovered_100076f0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f8
 */

void recovered_100076f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006ef0();
}


#undef DAT_1001007c
#define DAT_1001007c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007704
 */

int recovered_10007704(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;

  iVar3 = 0;
  if (param_1 == (int *)0x0 || param_3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(*param_1 + -4);
  iVar8 = *(int *)(*param_1 + -8);
  if (puVar4 != param_3 && puVar4 != (undefined4 *)0x0) {
    pcVar7 = (char *)param_3[1];
    do {
      pcVar5 = (char *)puVar4[1];
      if (pcVar7 == (char *)0x0 || pcVar5 == (char *)0x0) {
        if (pcVar5 == pcVar7) {
LAB_100077f0:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_100077f0;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_1001007c) {
        return 0;
      }
      puVar4 = (undefined4 *)puVar4[2];
    } while (puVar4 != param_3 && puVar4 != (undefined4 *)0x0);
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = (int)param_1 + iVar8;
  }
  return iVar3;
}

#undef DAT_1001007c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077f8
 */

void recovered_100077f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077fc
 */

undefined4 recovered_100077fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007804
 */

bool recovered_10007804(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007818
 */

bool recovered_10007818(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007858
 */

bool recovered_10007858(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007884
 */

bool recovered_10007884(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a0
 */

bool recovered_100078a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078bc
 */

bool recovered_100078bc(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078d8
 */

bool recovered_100078d8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100078f8(double value) {
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
float recovered_100079e0(float value){return (float)recovered_100078f8((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007ae0(long double value){return (long double)recovered_100078f8((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007bc8(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be4
 */

double recovered_10007be4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100037e8(param_1,param_2);
  dVar2 = pf_bits_double(((pf_double_bits(dVar2) & 0xffffffff00000000) + (pf_double_bits(dVar2) & 0xffffffff)));
  dVar1 = pf_bits_double(CONCAT44(param_2,param_1)) - dVar2;
  if (0.5 <= dVar1) {
    dVar1 = 1.0;
  }
  else {
    if (-0.5 < dVar1) {
      return dVar2;
    }
    dVar1 = -1.0;
  }
  return dVar2 + dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c3c
 */

longlong recovered_10007c3c(char *text,char **end,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  if (text == (char *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = (byte *)text; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x10007ca8;
    }
  }
  bVar1 = false;
joined_r0x10007ca8:
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((base == 0) && (base = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      base = 0x10;
    }
    else {
      base = 8;
    }
  }
  pbVar4 = pbVar4 + -1;
  iVar8 = 1;
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    iVar5 = (int)(uVar2 >> 0x20);
    uVar7 = (uint)pbVar4[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar4 = pbVar4 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar3 = (ulonglong)(uint)base * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * base,uVar6),
          (int)uVar6 < base));
  if (end != (char **)0x0) {
    if (iVar8 == 0) {
      pbVar4 = (byte *)text;
    }
    *end = (char *)pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007db4
 */

longlong recovered_10007db4(char *text,char **end,int base)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;

  if (text == (char *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = (byte *)text; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x10007ca8;
    }
  }
  bVar1 = false;
joined_r0x10007ca8:
  if (base == 0x10) {
    base = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((base == 0) && (base = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      base = 0x10;
    }
    else {
      base = 8;
    }
  }
  pbVar4 = pbVar4 + -1;
  iVar8 = 1;
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    iVar5 = (int)(uVar2 >> 0x20);
    uVar7 = (uint)pbVar4[1];
    uVar6 = uVar7 - 0x30;
    if (9 < uVar6) {
      if (uVar7 - 0x61 < 0x1a) {
        uVar6 = uVar7 - 0x57;
      }
      else {
        uVar6 = 0xffffffff;
        if (uVar7 - 0x41 < 0x1a) {
          uVar6 = uVar7 - 0x37;
        }
      }
    }
    iVar8 = iVar8 + -1;
    pbVar4 = pbVar4 + 1;
  } while ((-1 < (int)uVar6) &&
          (uVar3 = (ulonglong)(uint)base * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * base,uVar6),
          (int)uVar6 < base));
  if (end != (char **)0x0) {
    if (iVar8 == 0) {
      pbVar4 = (byte *)text;
    }
    *end = (char *)pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


#undef DAT_1000f5b4
#define DAT_1000f5b4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd58U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007db8
 */

undefined4 recovered_10007db8(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  bool bVar23;

  pbVar10 = *(byte **)(param_1 + 0x1c);
  if (pbVar10 != (byte *)0x0) {
    local_28 = pbVar10 + 1;
    if (*pbVar10 != 0xff) {
      recovered_1000816c((uint)*pbVar10,&local_28);
    }
    uVar8 = 0;
    uVar13 = (uint)*local_28;
    pbVar10 = (byte *)0x0;
    if (uVar13 != 0xff) {
      uVar11 = 0;
      pbVar21 = local_28 + 1;
      do {
        local_28 = pbVar21;
        pbVar10 = (byte *)((uint)pbVar10 | ((int)(char)*local_28 & 0x7fU) << (uVar11 & 0xff));
        uVar11 = uVar11 + 7;
        pbVar21 = local_28 + 1;
      } while ((char)*local_28 < 0);
      pbVar10 = local_28 + 1 + (int)pbVar10;
    }
    local_28 = local_28 + 2;
    uVar11 = 0;
    pbVar21 = local_28;
    do {
      pbVar5 = pbVar21 + 1;
      bVar3 = *pbVar21;
      uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar8 & 0xff);
      uVar8 = uVar8 + 7;
      pbVar21 = pbVar5;
    } while ((char)bVar3 < 0);
    uVar14 = *(uint *)(param_1 + 4);
    uVar8 = uVar14;
    if (0 < (int)uVar14) {
      uVar8 = uVar11;
    }
    if (0 < (int)uVar8) {
      pbVar21 = pbVar5 + uVar11;
      iVar15 = 0;
      do {
        uVar11 = 0;
        uVar8 = 0;
        do {
          pbVar6 = pbVar5 + 1;
          bVar3 = *pbVar5;
          uVar8 = uVar8 | ((int)(char)bVar3 & 0x7fU) << (uVar11 & 0xff);
          uVar11 = uVar11 + 7;
          pbVar5 = pbVar6;
        } while ((char)bVar3 < 0);
        uVar20 = 0;
        uVar11 = 0;
        do {
          pbVar5 = pbVar6 + 1;
          bVar3 = *pbVar6;
          uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar20 & 0xff);
          uVar20 = uVar20 + 7;
          pbVar6 = pbVar5;
        } while ((char)bVar3 < 0);
        if (iVar15 == uVar14 - 1) {
          *(undefined4 *)(param_3 + 4) = 0;
          *(uint *)(param_3 + 2) = uVar8;
          *(undefined1 *)(param_3 + 1) = 0;
          *param_3 = 1;
          if (uVar11 == 0) {
            *(undefined1 *)((int)param_3 + 1) = 1;
            return 0;
          }
          uVar14 = uVar13 & 0xf;
          pbVar21 = pbVar21 + (uVar11 - 1);
          uVar8 = 0;
          goto LAB_10007f90;
        }
        iVar15 = iVar15 + 1;
      } while (pbVar5 < pbVar21);
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0;
  return 0;
LAB_10007f90:
  uVar11 = 0;
  uVar20 = 0;
  do {
    pbVar5 = pbVar21 + 1;
    bVar3 = *pbVar21;
    uVar11 = uVar11 | ((int)(char)bVar3 & 0x7fU) << (uVar20 & 0xff);
    uVar20 = uVar20 + 7;
    pbVar21 = pbVar5;
  } while ((char)bVar3 < 0);
  uVar19 = 0;
  uVar17 = 0;
  do {
    bVar4 = *pbVar21;
    uVar19 = uVar19 | ((int)(char)bVar4 & 0x7fU) << (uVar17 & 0xff);
    uVar17 = uVar17 + 7;
    pbVar21 = pbVar21 + 1;
  } while ((char)bVar4 < 0);
  uVar22 = uVar19;
  if (0x3f < bVar4) {
    uVar22 = uVar19 | -1 << (uVar17 & 0xff);
  }
  if (0x1f < uVar17) {
    uVar22 = uVar19;
  }
  uVar17 = uVar11;
  if (0x3f < bVar3) {
    uVar17 = uVar11 | -1 << (uVar20 & 0xff);
  }
  if (0x1f < uVar20) {
    uVar17 = uVar11;
  }
  if (uVar17 == 0) {
    *(undefined1 *)((int)param_3 + 1) = 1;
  }
  else if (0 < (int)uVar17) {
    uVar11 = 0;
    if (uVar14 < 0xd && pbVar10 != (byte *)0x0) {
      uVar11 = 0x1c1d >> uVar14;
    }
    if ((uVar14 >= 0xd || pbVar10 == (byte *)0x0) || (uVar11 & 1) == 0) {
LAB_1000814c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000f5b4 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000816c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000814c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000814c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000814c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1001007c) goto LAB_10008120;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000814c;
  }
LAB_10008120:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10007f90;
}

#undef DAT_1000f5b4
#undef DAT_1001007c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000816c
 */

undefined4 * recovered_1000816c(uint param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 *unaff_lr;

  puVar5 = (undefined4 *)0x0;
  if ((param_1 != 0xff) && ((param_1 & 0xf) < 0xd)) {
    puVar7 = (ushort *)*param_2;
    puVar5 = (undefined4 *)0x0;
    switch((uintptr_t)(param_1 & 0xf)) {
    case 0:
    case 3:
    case 0xb:
      unaff_lr = *(undefined4 **)puVar7;
      *param_2 = puVar7 + 2;
      break;
    case 1:
      uVar6 = 0;
      unaff_lr = (undefined4 *)0x0;
      puVar3 = puVar7;
      do {
        *param_2 = (ushort *)((int)puVar3 + 1);
        uVar4 = *puVar3;
        unaff_lr = (undefined4 *)((uint)unaff_lr | ((int)(char)uVar4 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)uVar4 < 0);
      break;
    case 2:
      unaff_lr = (undefined4 *)(uint)*puVar7;
      *param_2 = puVar7 + 1;
      break;
    case 4:
    case 0xc:
      *param_2 = puVar7 + 4;
      break;
    default:
      goto switchD_1000819c_caseD_5;
    case 9:
      puVar5 = (undefined4 *)0x0;
      uVar6 = 0;
      puVar3 = puVar7;
      do {
        *param_2 = (ushort *)((int)puVar3 + 1);
        bVar1 = (byte)*puVar3;
        puVar5 = (undefined4 *)((uint)puVar5 | ((int)(char)bVar1 & 0x7fU) << (uVar6 & 0xff));
        uVar6 = uVar6 + 7;
        puVar3 = (ushort *)((int)puVar3 + 1);
      } while ((char)bVar1 < 0);
      unaff_lr = puVar5;
      if (0x3f < bVar1) {
        unaff_lr = (undefined4 *)((uint)puVar5 | -1 << (uVar6 & 0xff));
      }
      if (0x1f < uVar6) {
        unaff_lr = puVar5;
      }
      break;
    case 10:
      cVar2 = *(char *)((int)puVar7 + 1);
      uVar4 = *puVar7;
      *param_2 = puVar7 + 1;
      unaff_lr = (undefined4 *)(uVar4 | 0xffff0000);
      if ((uint)(int)cVar2 < 0x80000000) {
        unaff_lr = (undefined4 *)(uint)uVar4;
      }
    }
    if ((param_1 & 0x70) != 0) {
      if ((param_1 & 0x70) != 0x10) {
        return (undefined4 *)0x0;
      }
      unaff_lr = (undefined4 *)((int)unaff_lr + (int)puVar7);
    }
    if (((uint)(int)(char)param_1 < 0x80000000) || (unaff_lr == (undefined4 *)0x0)) {
      return unaff_lr;
    }
    puVar5 = (undefined4 *)*unaff_lr;
  }
switchD_1000819c_caseD_5:
  return puVar5;
}


#undef DAT_10008434
#define DAT_10008434 (*(int *)(0x10008434U))
#undef DAT_10008438
#define DAT_10008438 (*(int *)(0x10008438U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_a0 (*(undefined1 (*)[4])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_9c (*(undefined1 * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008300
 */

void recovered_10008300(undefined1 *param_1,int *param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int *piVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  piVar2 = (int *)(param_1 + 4);
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_7c = DAT_1001400c;
  local_78 = (0x7134U);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *param_1 = 0;
  local_78 = local_78 + 0x10008370;
  local_70 = (0x70U) + 0x10008380;
  local_98 = piVar2;
  recovered_1000756c(&uStack_94);
  if (piVar2 != param_2) {
    local_90 = 1;
    puVar1 = &DAT_1000f34c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    local_9c = param_1;
    recovered_1000bc80(local_98,(int)puVar1,param_2[1]);
    param_1 = local_9c;
  }
  param_1[0x1c] = 0;
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_10008434
#undef DAT_10008438
#undef DAT_1000f34c
#undef DAT_1001400c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000843c
 */

void recovered_1000843c(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10007024((void *)0x0);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *param_2;
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 8) = uVar1;
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *param_2 = 0;
  }
  param_1[0x1c] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084a0
 */

void recovered_100084a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

void recovered_100084d0(undefined1 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x18) = param_2;
  param_1[0x1c] = 0;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008500
 */

void recovered_10008500(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008524
 */

void recovered_10008524(undefined1 *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  *param_1 = 1;
  if ((int *)(param_1 + 4) != param_2) {
    puVar1 = &DAT_1000f34c;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)*param_2;
    }
    recovered_1000bc80((int *)(param_1 + 4),(int)puVar1,param_2[1]);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

#undef DAT_1000f34c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008574
 */

void recovered_10008574(undefined1 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;

  *param_1 = 1;
  if ((undefined4 *)(param_1 + 4) != param_2) {
    recovered_10007024(*(void **)(param_1 + 4));
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085d8
 */

void recovered_100085d8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x10) = param_2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 4) = 0;
  }
  return;
}


#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#define uStack_79 (*(undefined8 *)(frame + 39))
#define uStack_71 (*(undefined8 *)(frame + 47))
#define uStack_69 (*(undefined8 *)(frame + 55))
#define local_90 (*(int *)(frame + 16))
#define local_8c (*(int *)(frame + 20))
#define local_88 (*(int *)(frame + 24))
#define local_81 (*(undefined8 *)(frame + 31))
#define local_61 (*(byte (*)[65])(frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008600
 */

void recovered_10008600(int *param_1,char *param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint128 auVar17;

  if (*param_2 != '\x02') {
    if (*param_2 != '\x01') {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      return;
    }
    puVar12 = *(undefined1 **)(param_2 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    param_1[2] = 0;
    puVar10 = &DAT_1000f34c;
    if (puVar12 != (undefined1 *)0x0) {
      puVar10 = puVar12;
    }
    param_1[1] = 0;
    *param_1 = 0;
    recovered_1000bc80(param_1,(int)puVar10,uVar7);
    return;
  }
  uVar14 = *(uint *)(param_2 + 0x14);
  uVar7 = (int)uVar14 >> 0x1f;
  uVar9 = 0;
  uVar11 = (*(uint *)(param_2 + 0x10) ^ uVar7) - uVar7;
  uVar7 = (uVar14 ^ uVar7) - (uVar7 + ((*(uint *)(param_2 + 0x10) ^ uVar7) < uVar7));
  do {
    uVar8 = uVar9;
    uVar15 = uVar11 >> 1 | uVar7 << 0x1f;
    uVar13 = uVar15 + (uVar7 >> 1) + (uint)CARRY4(uVar15,uVar7 >> 1);
    uVar13 = uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar13 / 5);
    uVar5 = uVar15 - uVar13;
    lVar1 = (ulonglong)uVar5 * 0xcccccccd;
    bVar16 = uVar11 < 10;
    uVar2 = -uVar7;
    local_61[uVar8] = (char)uVar11 + (char)lVar1 * -10 | 0x30;
    uVar9 = uVar8 + 1;
    uVar11 = (uint)lVar1;
    uVar7 = ((uVar7 >> 1) - (uint)(uVar15 < uVar13)) * -0x33333333 +
            uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
  } while (bVar16 <= uVar2);
  if ((int)uVar14 < 0) {
    local_61[uVar8 + 1] = 0x2d;
    uVar9 = uVar8 + 2;
  }
  if (0x20 < uVar9) {
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    goto LAB_100087e0;
  }
  if (uVar9 != 0) {
    uVar7 = 0;
    if (0xf < uVar9) {
      uVar7 = uVar9 & 0x30;
      auVar17 = vrev(*(uint128 *)(local_61 + (uVar9 - 0x10)),1);
      local_81 = PF_PART8(auVar17, 8);
      uStack_79 = PF_PART8(auVar17, 0);
      if (uVar7 != 0x10) {
        auVar17 = vrev(*(uint128 *)(local_61 + (uVar9 - 0x20)),1);
        uStack_71 = PF_PART8(auVar17, 8);
        uStack_69 = PF_PART8(auVar17, 0);
      }
      if (uVar9 == uVar7) goto LAB_100087b8;
    }
    iVar4 = uVar9 - uVar7;
    pbVar6 = local_61 + (uVar7 - 0x20);
    do {
      iVar3 = iVar4 + -1;
      iVar4 = iVar4 + -1;
      *pbVar6 = local_61[iVar3];
      pbVar6 = pbVar6 + 1;
    } while (iVar4 != 0);
  }
LAB_100087b8:
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  recovered_1000bc80(&local_90,(int)&local_81,uVar9);
LAB_100087e0:
  param_1[2] = local_88;
  param_1[1] = local_8c;
  *param_1 = local_90;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  recovered_10007024((void *)0x0);
  return;
}

#undef DAT_1000f34c
#undef uStack_79
#undef uStack_71
#undef uStack_69
#undef local_90
#undef local_8c
#undef local_88
#undef local_81
#undef local_61

#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10014004
#define DAT_10014004 (*(int * *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#define local_18 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000880c
 */

longlong recovered_1000880c(void *variable)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;

  piVar1 = DAT_10014004;
  if (*(char *)variable != '\x01') {
    if (*(char *)variable == '\x02') {
      return *(longlong *)((int)variable + 0x10);
    }
    return 0;
  }
  if (*(int *)((int)variable + 8) == 0) {
    return 0;
  }
  pcVar2 = *(char **)((int)variable + 4);
  local_18 = (char *)0x0;
  *DAT_10014004 = 0;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = &DAT_1000f34c;
  }
  lVar4 = recovered_10007db4(pcVar2,&local_18,10);
  pcVar2 = *(char **)((int)variable + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = &DAT_1000f34c;
  }
  if (((local_18 == (char *)0x0 || local_18 == pcVar2) || (*local_18 != '\0')) || (*piVar1 == 0x22))
  {
    if (((2 < *(uint *)((int)variable + 8)) && (*pcVar2 == '0')) &&
       ((byte)(pcVar2[1] | 0x20U) == 0x78)) {
      *piVar1 = 0;
      local_18 = (char *)0x0;
      lVar4 = recovered_10007db4(pcVar2 + 2,&local_18,0x10);
      pcVar2 = *(char **)((int)variable + 4);
      pcVar3 = &DAT_1000f34c;
      if (pcVar2 != (char *)0x0) {
        pcVar3 = pcVar2;
      }
      if (local_18 != (char *)0x0) {
        pcVar2 = pcVar3 + 2;
      }
      if (((local_18 != (char *)0x0 && local_18 != pcVar2) && (*local_18 == '\0')) &&
         (*piVar1 != 0x22)) {
        return lVar4;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}

#undef DAT_1000f34c
#undef DAT_10014004
#undef local_18

#undef DAT_10008b10
#define DAT_10008b10 (*(uint64_t *)(0x10008b10U))
#undef DAT_10008b18
#define DAT_10008b18 (*(uint64_t *)(0x10008b18U))
#undef DAT_10008b20
#define DAT_10008b20 (*(int *)(0x10008b20U))
#undef DAT_10008b24
#define DAT_10008b24 (*(int *)(0x10008b24U))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_a0 (*(int * *)(frame + 16))
#define local_9c (*(int * *)(frame + 20))
#define local_98 (*(int * *)(frame + 24))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(undefined4 *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008970
 */

int * recovered_10008970(int *param_1,int param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;

  uVar2 = (0x100000001U);
  uVar1 = (0x0U);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_a0;
  *param_1 = param_2;
  local_9c = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *local_9c = 0;
  local_98 = param_1 + 4;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[10] = 0xfff;
  *local_98 = 0;
  *(undefined8 *)(param_1 + 5) = uVar1;
  *(undefined8 *)(param_1 + 7) = uVar2;
  local_78 = (0x6aa4U);
  *(undefined1 *)(param_1 + 9) = 0;
  local_78 = local_78 + 0x10008a08;
  local_7c = DAT_1001400c;
  local_70 = (0xa8U) + 0x10008a1c;
  local_90 = 1;
  recovered_1000756c(&uStack_94);
  local_a0 = param_1;
  recovered_10008b28((int)param_1);
  piVar3 = local_a0;
  iVar5 = 1;
  bVar6 = true;
  local_a0[10] = 0xfff;
  *(undefined1 *)(local_a0 + 9) = 0;
  piVar4 = (int *)*local_a0;
  local_a0[8] = 1;
  local_a0[7] = 1;
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
  }
  if ((piVar4 != (int *)0x0 && iVar5 != 0) && (0 < *piVar4)) {
    bVar6 = piVar4[1] < 1;
  }
  *(bool *)(local_a0 + 0xb) = bVar6;
  *(undefined1 *)((int)local_a0 + 0x2d) = 1;
  recovered_10007590(&uStack_94);
  return piVar3;
}

#undef DAT_10008b10
#undef DAT_10008b18
#undef DAT_10008b20
#undef DAT_10008b24
#undef DAT_1001400c
#undef uStack_94
#undef auStack_68
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_10009b50
#define DAT_10009b50 (*(int *)(0x10009b50U))
#undef DAT_10009b54
#define DAT_10009b54 (*(int *)(0x10009b54U))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#undef DAT_10014018
#define DAT_10014018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cf4U)))
#undef DAT_10014044
#define DAT_10014044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
#undef DAT_10014068
#define DAT_10014068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d44U)))
#undef DAT_1001408c
#define DAT_1001408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d68U)))
#undef DAT_100140b0
#define DAT_100140b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8cU)))
#undef DAT_100140d4
#define DAT_100140d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
#undef DAT_100140f8
#define DAT_100140f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd4U)))
#undef DAT_1001411c
#define DAT_1001411c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df8U)))
#undef DAT_10014140
#define DAT_10014140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e1cU)))
#undef DAT_10014164
#define DAT_10014164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e40U)))
#undef DAT_10014188
#define DAT_10014188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e64U)))
#undef DAT_100141ac
#define DAT_100141ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e88U)))
#undef DAT_100141d0
#define DAT_100141d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eacU)))
#undef DAT_100141f4
#define DAT_100141f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ed0U)))
#undef DAT_10014218
#define DAT_10014218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ef4U)))
#undef DAT_1001423c
#define DAT_1001423c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f18U)))
#undef DAT_10014260
#define DAT_10014260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f3cU)))
#undef DAT_10014284
#define DAT_10014284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f60U)))
#undef DAT_100142a8
#define DAT_100142a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f84U)))
#undef DAT_100142cc
#define DAT_100142cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fa8U)))
#undef DAT_100142f0
#define DAT_100142f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fccU)))
#undef DAT_10014314
#define DAT_10014314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff0U)))
#define auStack_200 (*(undefined1 (*)[4])(frame + 16))
#define local_1fc (*(int *)(frame + 20))
#define local_1f8 (*(int * *)(frame + 24))
#define local_1f4 (*(void * *)(frame + 28))
#define local_1f0 (*(undefined4 *)(frame + 32))
#define local_1e8 (*(int * *)(frame + 40))
#define local_1e4 (*(void * *)(frame + 44))
#define local_1e0 (*(undefined4 *)(frame + 48))
#define local_1d8 (*(int * *)(frame + 56))
#define local_1d4 (*(void * *)(frame + 60))
#define local_1d0 (*(undefined4 *)(frame + 64))
#define local_1c8 (*(int * *)(frame + 72))
#define local_1c4 (*(void * *)(frame + 76))
#define local_1c0 (*(undefined4 *)(frame + 80))
#define local_1b8 (*(int * *)(frame + 88))
#define local_1b4 (*(void * *)(frame + 92))
#define local_1b0 (*(undefined4 *)(frame + 96))
#define local_1a8 (*(int * *)(frame + 104))
#define local_1a4 (*(void * *)(frame + 108))
#define local_1a0 (*(undefined4 *)(frame + 112))
#define local_198 (*(int * *)(frame + 120))
#define local_194 (*(void * *)(frame + 124))
#define local_190 (*(undefined4 *)(frame + 128))
#define local_188 (*(int * *)(frame + 136))
#define local_184 (*(void * *)(frame + 140))
#define local_180 (*(undefined4 *)(frame + 144))
#define local_178 (*(int * *)(frame + 152))
#define local_174 (*(void * *)(frame + 156))
#define local_170 (*(undefined4 *)(frame + 160))
#define local_168 (*(int * *)(frame + 168))
#define local_164 (*(void * *)(frame + 172))
#define local_160 (*(undefined4 *)(frame + 176))
#define local_158 (*(int * *)(frame + 184))
#define local_154 (*(void * *)(frame + 188))
#define local_150 (*(undefined4 *)(frame + 192))
#define local_148 (*(int * *)(frame + 200))
#define local_144 (*(void * *)(frame + 204))
#define local_140 (*(undefined4 *)(frame + 208))
#define local_138 (*(int * *)(frame + 216))
#define local_134 (*(void * *)(frame + 220))
#define local_130 (*(undefined4 *)(frame + 224))
#define local_128 (*(int * *)(frame + 232))
#define local_124 (*(void * *)(frame + 236))
#define local_120 (*(undefined4 *)(frame + 240))
#define local_118 (*(int * *)(frame + 248))
#define local_113 (*(undefined2 *)(frame + 253))
#define local_111 (*(undefined1 *)(frame + 255))
#define local_110 (*(void * *)(frame + 256))
#define local_10c (*(undefined4 *)(frame + 260))
#define local_104 (*(int * *)(frame + 268))
#define local_100 (*(void * *)(frame + 272))
#define local_fc (*(undefined4 *)(frame + 276))
#define local_f4 (*(int * *)(frame + 284))
#define local_f0 (*(void * *)(frame + 288))
#define local_ec (*(undefined4 *)(frame + 292))
#define local_e4 (*(int * *)(frame + 300))
#define local_e0 (*(void * *)(frame + 304))
#define local_dc (*(undefined4 *)(frame + 308))
#define local_d4 (*(int * *)(frame + 316))
#define local_d0 (*(void * *)(frame + 320))
#define local_cc (*(undefined4 *)(frame + 324))
#define local_c4 (*(int * *)(frame + 332))
#define local_c0 (*(void * *)(frame + 336))
#define local_bc (*(undefined4 *)(frame + 340))
#define local_b4 (*(int * *)(frame + 348))
#define local_b0 (*(void * *)(frame + 352))
#define local_ac (*(undefined4 *)(frame + 356))
#define local_a4 (*(int * *)(frame + 364))
#define local_a0 (*(void * *)(frame + 368))
#define local_9c (*(undefined4 *)(frame + 372))
#define uStack_94 (*(undefined4 *)(frame + 380))
#define local_90 (*(undefined4 *)(frame + 384))
#define local_7c (*(undefined4 *)(frame + 404))
#define local_78 (*(int *)(frame + 408))
#define local_74 (*(undefined1 * *)(frame + 412))
#define local_70 (*(int *)(frame + 416))
#define local_6c (*(undefined1 * *)(frame + 420))
#define auStack_68 (*(undefined1 (*)[8])(frame + 424))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b28
 */

void recovered_10008b28(int param_1)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_200;
  iVar3 = *(int *)(param_1 + 0x14);
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x190U);
  local_70 = (0xcd8U) + 0x10008b80;
  recovered_1000756c(&uStack_94);
  if (iVar3 != 0) {
    iVar2 = iVar3 * 0x10 + -4;
    iVar3 = 1 - iVar3;
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(int **)(iVar4 + iVar2) != (int *)0x0) {
        (*(void (**)(void *))(**(int **)(iVar4 + iVar2) + 4))((void *)(*(int **)(iVar4 + iVar2)));
      }
      pvVar1 = *(void **)(iVar4 + iVar3 * -0x10);
      *(undefined4 *)(iVar4 + iVar2 + -8) = 0;
      recovered_10007024(pvVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -0x10;
    } while (iVar3 != 1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_90 = 0xffffffff;
  local_113 = (ushort)PF_PART1(local_113, 1) << 8;
  local_1fc = param_1;
  recovered_1000bf94((int *)&local_a0,(undefined1 *)&local_113,1);
  local_90 = 1;
  local_a4 = recovered_10006fcc(8);
  *local_a4 = (int)&DAT_10014018;
  local_90 = 2;
  recovered_1000b1d4(local_1fc,1,&local_a0,&local_a4);
  if (local_a4 != (int *)0x0) {
    (*(void (**)(void *))(*local_a4 + 4))((void *)(local_a4));
  }
  local_9c = 0;
  recovered_10007024(local_a0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000bf94((int *)&local_b0,(undefined1 *)&local_113,1);
  local_90 = 3;
  local_b4 = recovered_10006fcc(8);
  *local_b4 = (int)&DAT_10014044;
  local_90 = 4;
  recovered_1000b1d4(local_1fc,2,&local_b0,&local_b4);
  if (local_b4 != (int *)0x0) {
    (*(void (**)(void *))(*local_b4 + 4))((void *)(local_b4));
  }
  local_ac = 0;
  recovered_10007024(local_b0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000bf94((int *)&local_c0,(undefined1 *)&local_113,1);
  local_90 = 5;
  local_c4 = recovered_10006fcc(8);
  *local_c4 = (int)&DAT_10014068;
  local_90 = 6;
  recovered_1000b1d4(local_1fc,3,&local_c0,&local_c4);
  if (local_c4 != (int *)0x0) {
    (*(void (**)(void *))(*local_c4 + 4))((void *)(local_c4));
  }
  local_bc = 0;
  recovered_10007024(local_c0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000bf94((int *)&local_d0,(undefined1 *)&local_113,1);
  local_90 = 7;
  local_d4 = recovered_10006fcc(8);
  *local_d4 = (int)&DAT_1001408c;
  local_90 = 8;
  recovered_1000b1d4(local_1fc,4,&local_d0,&local_d4);
  if (local_d4 != (int *)0x0) {
    (*(void (**)(void *))(*local_d4 + 4))((void *)(local_d4));
  }
  local_cc = 0;
  recovered_10007024(local_d0);
  local_90 = 0xffffffff;
  local_113 = local_113 & 0xff00;
  recovered_1000bf94((int *)&local_e0,(undefined1 *)&local_113,1);
  local_90 = 9;
  local_e4 = recovered_10006fcc(8);
  *local_e4 = (int)&DAT_100140b0;
  local_90 = 10;
  recovered_1000b1d4(local_1fc,5,&local_e0,&local_e4);
  if (local_e4 != (int *)0x0) {
    (*(void (**)(void *))(*local_e4 + 4))((void *)(local_e4));
  }
  local_dc = 0;
  recovered_10007024(local_e0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000bf94((int *)&local_f0,(undefined1 *)&local_113,1);
  local_90 = 0xb;
  local_f4 = recovered_10006fcc(8);
  *local_f4 = (int)&DAT_100140d4;
  local_90 = 0xc;
  recovered_1000b1d4(local_1fc,6,&local_f0,&local_f4);
  if (local_f4 != (int *)0x0) {
    (*(void (**)(void *))(*local_f4 + 4))((void *)(local_f4));
  }
  local_ec = 0;
  recovered_10007024(local_f0);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),2);
  recovered_1000bf94((int *)&local_100,(undefined1 *)&local_113,1);
  local_90 = 0xd;
  local_104 = recovered_10006fcc(8);
  *local_104 = (int)&DAT_100140f8;
  local_90 = 0xe;
  recovered_1000b1d4(local_1fc,7,&local_100,&local_104);
  if (local_104 != (int *)0x0) {
    (*(void (**)(void *))(*local_104 + 4))((void *)(local_104));
  }
  local_fc = 0;
  recovered_10007024(local_100);
  local_90 = 0xffffffff;
  local_111 = 1;
  local_113 = 0x101;
  recovered_1000bf94((int *)&local_110,(undefined1 *)&local_113,3);
  local_90 = 0xf;
  local_118 = recovered_10006fcc(8);
  *local_118 = (int)&DAT_1001411c;
  local_90 = 0x10;
  recovered_1000b1d4(local_1fc,8,&local_110,&local_118);
  if (local_118 != (int *)0x0) {
    (*(void (**)(void *))(*local_118 + 4))((void *)(local_118));
  }
  local_10c = 0;
  recovered_10007024(local_110);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  local_111 = 0;
  recovered_1000bf94((int *)&local_124,(undefined1 *)&local_113,3);
  local_90 = 0x11;
  local_128 = recovered_10006fcc(8);
  *local_128 = (int)&DAT_10014140;
  local_90 = 0x12;
  recovered_1000b1d4(local_1fc,9,&local_124,&local_128);
  if (local_128 != (int *)0x0) {
    (*(void (**)(void *))(*local_128 + 4))((void *)(local_128));
  }
  local_120 = 0;
  recovered_10007024(local_124);
  local_90 = 0xffffffff;
  local_113 = 0x101;
  recovered_1000bf94((int *)&local_134,(undefined1 *)&local_113,2);
  local_90 = 0x13;
  local_138 = recovered_10006fcc(8);
  *local_138 = (int)&DAT_10014164;
  local_90 = 0x14;
  recovered_1000b1d4(local_1fc,10,&local_134,&local_138);
  if (local_138 != (int *)0x0) {
    (*(void (**)(void *))(*local_138 + 4))((void *)(local_138));
  }
  local_130 = 0;
  recovered_10007024(local_134);
  local_90 = 0xffffffff;
  local_113 = CONCAT11(PF_PART1(local_113, 1),1);
  recovered_1000bf94((int *)&local_144,(undefined1 *)&local_113,1);
  local_90 = 0x15;
  local_148 = recovered_10006fcc(8);
  *local_148 = (int)&DAT_10014188;
  local_90 = 0x16;
  recovered_1000b1d4(local_1fc,0xb,&local_144,&local_148);
  if (local_148 != (int *)0x0) {
    (*(void (**)(void *))(*local_148 + 4))((void *)(local_148));
  }
  local_140 = 0;
  recovered_10007024(local_144);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_154,(undefined1 *)&local_113,2);
  local_90 = 0x17;
  local_158 = recovered_10006fcc(8);
  *local_158 = (int)&DAT_100141ac;
  local_90 = 0x18;
  recovered_1000b1d4(local_1fc,0xc,&local_154,&local_158);
  if (local_158 != (int *)0x0) {
    (*(void (**)(void *))(*local_158 + 4))((void *)(local_158));
  }
  local_150 = 0;
  recovered_10007024(local_154);
  local_90 = 0xffffffff;
  local_113 = 2;
  recovered_1000bf94((int *)&local_164,(undefined1 *)&local_113,2);
  local_90 = 0x19;
  local_168 = recovered_10006fcc(8);
  *local_168 = (int)&DAT_100141d0;
  local_90 = 0x1a;
  recovered_1000b1d4(local_1fc,0xd,&local_164,&local_168);
  if (local_168 != (int *)0x0) {
    (*(void (**)(void *))(*local_168 + 4))((void *)(local_168));
  }
  local_160 = 0;
  recovered_10007024(local_164);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000bf94((int *)&local_174,(undefined1 *)&local_113,2);
  local_90 = 0x1b;
  local_178 = recovered_10006fcc(8);
  *local_178 = (int)&DAT_100141f4;
  local_90 = 0x1c;
  recovered_1000b1d4(local_1fc,0xe,&local_174,&local_178);
  if (local_178 != (int *)0x0) {
    (*(void (**)(void *))(*local_178 + 4))((void *)(local_178));
  }
  local_170 = 0;
  recovered_10007024(local_174);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_184,(undefined1 *)&local_113,2);
  local_90 = 0x1d;
  local_188 = recovered_10006fcc(8);
  *local_188 = (int)&DAT_10014218;
  local_90 = 0x1e;
  recovered_1000b1d4(local_1fc,0xf,&local_184,&local_188);
  if (local_188 != (int *)0x0) {
    (*(void (**)(void *))(*local_188 + 4))((void *)(local_188));
  }
  local_180 = 0;
  recovered_10007024(local_184);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000bf94((int *)&local_194,(undefined1 *)&local_113,2);
  local_90 = 0x1f;
  local_198 = recovered_10006fcc(8);
  *local_198 = (int)&DAT_1001423c;
  local_90 = 0x20;
  recovered_1000b1d4(local_1fc,0x10,&local_194,&local_198);
  if (local_198 != (int *)0x0) {
    (*(void (**)(void *))(*local_198 + 4))((void *)(local_198));
  }
  local_190 = 0;
  recovered_10007024(local_194);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_1a4,(undefined1 *)&local_113,2);
  local_90 = 0x21;
  local_1a8 = recovered_10006fcc(8);
  *local_1a8 = (int)&DAT_10014260;
  local_90 = 0x22;
  recovered_1000b1d4(local_1fc,0x11,&local_1a4,&local_1a8);
  if (local_1a8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1a8 + 4))((void *)(local_1a8));
  }
  local_1a0 = 0;
  recovered_10007024(local_1a4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000bf94((int *)&local_1b4,(undefined1 *)&local_113,2);
  local_90 = 0x23;
  local_1b8 = recovered_10006fcc(8);
  *local_1b8 = (int)&DAT_10014284;
  local_90 = 0x24;
  recovered_1000b1d4(local_1fc,0x12,&local_1b4,&local_1b8);
  if (local_1b8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1b8 + 4))((void *)(local_1b8));
  }
  local_1b0 = 0;
  recovered_10007024(local_1b4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_1c4,(undefined1 *)&local_113,2);
  local_90 = 0x25;
  local_1c8 = recovered_10006fcc(8);
  *local_1c8 = (int)&DAT_100142a8;
  local_90 = 0x26;
  recovered_1000b1d4(local_1fc,0x13,&local_1c4,&local_1c8);
  if (local_1c8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1c8 + 4))((void *)(local_1c8));
  }
  local_1c0 = 0;
  recovered_10007024(local_1c4);
  local_90 = 0xffffffff;
  local_113 = 0x102;
  recovered_1000bf94((int *)&local_1d4,(undefined1 *)&local_113,2);
  local_90 = 0x27;
  local_1d8 = recovered_10006fcc(8);
  *local_1d8 = (int)&DAT_100142cc;
  local_90 = 0x28;
  recovered_1000b1d4(local_1fc,0x14,&local_1d4,&local_1d8);
  if (local_1d8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1d8 + 4))((void *)(local_1d8));
  }
  local_1d0 = 0;
  recovered_10007024(local_1d4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_1e4,(undefined1 *)&local_113,2);
  local_90 = 0x29;
  local_1e8 = recovered_10006fcc(8);
  *local_1e8 = (int)&DAT_100142f0;
  local_90 = 0x2a;
  recovered_1000b1d4(local_1fc,0x15,&local_1e4,&local_1e8);
  if (local_1e8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1e8 + 4))((void *)(local_1e8));
  }
  local_1e0 = 0;
  recovered_10007024(local_1e4);
  local_90 = 0xffffffff;
  local_113 = 0x202;
  recovered_1000bf94((int *)&local_1f4,(undefined1 *)&local_113,2);
  local_90 = 0x2b;
  local_1f8 = recovered_10006fcc(8);
  *local_1f8 = (int)&DAT_10014314;
  local_90 = 0x2c;
  recovered_1000b1d4(local_1fc,0x16,&local_1f4,&local_1f8);
  if (local_1f8 != (int *)0x0) {
    (*(void (**)(void *))(*local_1f8 + 4))((void *)(local_1f8));
  }
  local_1f0 = 0;
  recovered_10007024(local_1f4);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_10009b50
#undef DAT_10009b54
#undef DAT_1001400c
#undef DAT_10014018
#undef DAT_10014044
#undef DAT_10014068
#undef DAT_1001408c
#undef DAT_100140b0
#undef DAT_100140d4
#undef DAT_100140f8
#undef DAT_1001411c
#undef DAT_10014140
#undef DAT_10014164
#undef DAT_10014188
#undef DAT_100141ac
#undef DAT_100141d0
#undef DAT_100141f4
#undef DAT_10014218
#undef DAT_1001423c
#undef DAT_10014260
#undef DAT_10014284
#undef DAT_100142a8
#undef DAT_100142cc
#undef DAT_100142f0
#undef DAT_10014314
#undef auStack_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_198
#undef local_194
#undef local_190
#undef local_188
#undef local_184
#undef local_180
#undef local_178
#undef local_174
#undef local_170
#undef local_168
#undef local_164
#undef local_160
#undef local_158
#undef local_154
#undef local_150
#undef local_148
#undef local_144
#undef local_140
#undef local_138
#undef local_134
#undef local_130
#undef local_128
#undef local_124
#undef local_120
#undef local_118
#undef local_113
#undef local_111
#undef local_110
#undef local_10c
#undef local_104
#undef local_100
#undef local_fc
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d4
#undef local_d0
#undef local_cc
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a4
#undef local_a0
#undef local_9c
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e68
 */

void recovered_10009e68(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 uVar2;

  piVar1 = (int *)*param_1;
  param_1[10] = 0xfff;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = 1;
  param_1[8] = 1;
  param_1[7] = 1;
  if ((((piVar1 != (int *)0x0) && (uVar2 = 1, piVar1[2] != 0)) && (uVar2 = 1, 0 < *piVar1)) &&
     (uVar2 = 0, piVar1[1] < 1)) {
    uVar2 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ed0
 */

int * recovered_10009ed0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar4 = iVar1 * 0x10 + -4;
    iVar1 = 1 - iVar1;
    do {
      iVar3 = *param_1;
      if (*(int **)(iVar3 + iVar4) != (int *)0x0) {
        (*(void (**)(void *))(**(int **)(iVar3 + iVar4) + 4))((void *)(*(int **)(iVar3 + iVar4)));
      }
      pvVar2 = *(void **)(iVar3 + iVar1 * -0x10);
      *(undefined4 *)(iVar3 + iVar4 + -8) = 0;
      recovered_10007024(pvVar2);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -0x10;
    } while (iVar1 != 1);
  }
  param_1[1] = 0;
  recovered_10007024((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f5c
 */

int * recovered_10009f5c(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar2 = iVar1 * 0x18 + -0x14;
    do {
      recovered_10007024(*(void **)(*param_1 + iVar2));
      iVar2 = iVar2 + -0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10007024((void *)*param_1);
  return param_1;
}


#undef DAT_10008b10
#define DAT_10008b10 (*(uint64_t *)(0x10008b10U))
#undef DAT_10008b18
#define DAT_10008b18 (*(uint64_t *)(0x10008b18U))
#undef DAT_10008b20
#define DAT_10008b20 (*(int *)(0x10008b20U))
#undef DAT_10008b24
#define DAT_10008b24 (*(int *)(0x10008b24U))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define piStack_a0 (*(int * *)(frame + 16))
#define piStack_9c (*(int * *)(frame + 20))
#define piStack_98 (*(int * *)(frame + 24))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define uStack_7c (*(undefined4 *)(frame + 52))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fb0
 */

int * recovered_10009fb0(int *param_1,int param_2)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;

  uVar2 = (0x100000001U);
  uVar1 = (0x0U);
  puStack_74 = auStack_68 + 0x60;
  puStack_6c = (undefined1 *)&piStack_a0;
  *param_1 = param_2;
  piStack_9c = param_1 + 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *piStack_9c = 0;
  piStack_98 = param_1 + 4;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[10] = 0xfff;
  *piStack_98 = 0;
  *(undefined8 *)(param_1 + 5) = uVar1;
  *(undefined8 *)(param_1 + 7) = uVar2;
  iStack_78 = (0x6aa4U);
  *(undefined1 *)(param_1 + 9) = 0;
  iStack_78 = iStack_78 + 0x10008a08;
  uStack_7c = DAT_1001400c;
  iStack_70 = (0xa8U) + 0x10008a1c;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  piStack_a0 = param_1;
  recovered_10008b28((int)param_1);
  piVar3 = piStack_a0;
  iVar5 = 1;
  bVar6 = true;
  piStack_a0[10] = 0xfff;
  *(undefined1 *)(piStack_a0 + 9) = 0;
  piVar4 = (int *)*piStack_a0;
  piStack_a0[8] = 1;
  piStack_a0[7] = 1;
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
  }
  if ((piVar4 != (int *)0x0 && iVar5 != 0) && (0 < *piVar4)) {
    bVar6 = piVar4[1] < 1;
  }
  *(bool *)(piStack_a0 + 0xb) = bVar6;
  *(undefined1 *)((int)piStack_a0 + 0x2d) = 1;
  recovered_10007590(&uStack_94);
  return piVar3;
}

#undef DAT_10008b10
#undef DAT_10008b18
#undef DAT_10008b20
#undef DAT_10008b24
#undef DAT_1001400c
#undef piStack_a0
#undef piStack_9c
#undef piStack_98
#undef uStack_94
#undef uStack_90
#undef uStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fb4
 */

void recovered_10009fb4(int *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  param_1[10] = 0xfff;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = 1;
  param_1[8] = 1;
  param_1[7] = 1;
  *param_1 = (int)param_2;
  if ((((param_2 != (int *)0x0) && (uVar1 = 1, param_2[2] != 0)) && (uVar1 = 1, 0 < *param_2)) &&
     (uVar1 = 0, param_2[1] < 1)) {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a01c
 */

undefined4 recovered_1000a01c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *param_1;
}


#undef DAT_1000a2ec
#define DAT_1000a2ec (*(uint *)(0x1000a2ecU))
#undef DAT_1000a704
#define DAT_1000a704 (*(uint *)(0x1000a704U))
#undef DAT_1000ada8
#define DAT_1000ada8 (*(int *)(0x1000ada8U))
#undef DAT_1000adac
#define DAT_1000adac (*(int *)(0x1000adacU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef switchdataD_1000a2ec
#define switchdataD_1000a2ec (*(uint *)(0x1000a2ecU))
#undef switchdataD_1000a704
#define switchdataD_1000a704 (*(uint *)(0x1000a704U))
#define auStack_120 (*(undefined1 (*)[8])(frame + 16))
#define puStack_d0 (*(uint * *)(frame + 96))
#define auStack_c8 (*(uint (*)[2])(frame + 104))
#define local_118 (*(int * *)(frame + 24))
#define local_114 (*(uint * *)(frame + 28))
#define local_110 (*(undefined8 ** *)(frame + 32))
#define local_10c (*(byte * *)(frame + 36))
#define local_108 (*(byte * *)(frame + 40))
#define uStack_94 (*(undefined4 *)(frame + 156))
#define local_104 (*(uint *)(frame + 44))
#define local_100 (*(uint * *)(frame + 48))
#define local_fc (*(uint * *)(frame + 52))
#define local_f8 (*(uint * *)(frame + 56))
#define local_f4 (*(uint * *)(frame + 60))
#define local_f0 (*(uint * *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[24])(frame + 200))
#define local_ec (*(uint *)(frame + 68))
#define local_e8 (*(undefined4 * *)(frame + 72))
#define local_e4 (*(undefined4 * *)(frame + 76))
#define local_e0 (*(uint * *)(frame + 80))
#define local_dc (*(uint * *)(frame + 84))
#define local_d8 (*(uint * *)(frame + 88))
#define local_d4 (*(undefined8 * *)(frame + 92))
#define local_cc (*(uint * *)(frame + 100))
#define local_c0 (*(uint * *)(frame + 112))
#define local_bc (*(undefined1 *)(frame + 116))
#define local_b8 (*(uint * *)(frame + 120))
#define local_b4 (*(int *)(frame + 124))
#define local_b0 (*(undefined4 *)(frame + 128))
#define local_ac (*(uint * *)(frame + 132))
#define local_a8 (*(uint * *)(frame + 136))
#define local_a4 (*(uint * *)(frame + 140))
#define local_a0 (*(uint * *)(frame + 144))
#define local_9c (*(undefined8 * *)(frame + 148))
#define local_98 (*(uint * *)(frame + 152))
#define local_90 (*(undefined4 *)(frame + 160))
#define local_7c (*(undefined4 *)(frame + 180))
#define local_78 (*(int *)(frame + 184))
#define local_74 (*(undefined1 * *)(frame + 188))
#define local_70 (*(int *)(frame + 192))
#define local_6c (*(undefined1 * *)(frame + 196))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a024
 */

byte recovered_1000a024(undefined4 *param_1)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint *puVar6;
  byte *pbVar7;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint **ppuVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint *puVar15;
  uint *extraout_r3 = 0;
  uint *puVar16;
  uint *extraout_r3_00 = 0;
  uint *extraout_r3_01 = 0;
  undefined8 *puVar17;
  uint *extraout_r3_02 = 0;
  uint *extraout_r3_03 = 0;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *extraout_r12 = 0;
  uint *puVar23;
  bool bVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  cVar1 = *(char *)(param_1 + 0xb);
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x1ecU);
  local_70 = (0xc5cU) + 0x1000a07c;
  recovered_1000756c(&uStack_94);
  bVar24 = false;
  bVar11 = 0;
  if (cVar1 != '\0') goto LAB_1000a0b0;
  puVar2 = (undefined4 *)*param_1;
  iVar19 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar19 = puVar2[2];
  }
  bVar11 = bVar24;
  if ((((puVar2 == (undefined4 *)0x0 || iVar19 == 0) || (puVar6 = (uint *)*puVar2, (int)puVar6 < 1))
      || (puVar15 = (uint *)param_1[7], puVar6 < puVar15)) ||
     (puVar12 = (uint *)param_1[8], (int)puVar12 < 1)) goto LAB_1000a0a8;
  puVar23 = puVar15;
  puVar21 = extraout_r12;
  if (0 < (int)puVar15) {
    puVar23 = (uint *)puVar2[1];
    puVar21 = puVar23;
  }
  if (((int)puVar23 < 1) || (puVar21 < puVar12)) goto LAB_1000a0a8;
  iVar19 = iVar19 + (int)((int)puVar15 + (int)puVar6 * (int)((int)puVar12 + -1)) * 4;
  uVar20 = (uint)*(byte *)(iVar19 + -3) << 8 | (uint)*(byte *)(iVar19 + -4) << 0x10 |
           (uint)*(byte *)(iVar19 + -2);
  local_b8 = puVar12;
  if (uVar20 == 0) {
    uVar20 = (uint)*(byte *)(param_1 + 9);
    if (uVar20 < 4) {
      uVar10 = 0x30201 >> ((uVar20 & 0x1f) << 3);
      uVar20 = uVar10 & 0xff;
      *(char *)(param_1 + 9) = (char)uVar10;
    }
    local_d8 = puVar15;
    if (uVar20 < 4) {
      iVar19 = 1;
      ppuVar8 = &local_d8;
      switch((uintptr_t)(uVar20)) {
      case 2:
switchD_1000a170_caseD_2:
        ppuVar8 = &local_d8;
        iVar19 = -1;
        local_d8 = puVar15;
        break;
      case 3:
switchD_1000a170_caseD_3:
        iVar19 = -1;
        local_d8 = puVar15;
      case 1:
switchD_1000a170_caseD_1:
        ppuVar8 = &local_b8;
      }
switchD_1000a170_caseD_0:
      *ppuVar8 = (uint *)((int)*ppuVar8 + iVar19);
    }
    goto LAB_1000a278;
  }
  if (uVar20 != 0xffffff) {
    uVar18 = param_1[10];
    uVar10 = uVar20 - uVar18;
    if (*(char *)((int)param_1 + 0x2d) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      param_1[10] = uVar20;
      if (uVar20 <= uVar18 && uVar18 - uVar20 != 0) {
        uVar10 = uVar18 - uVar20;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      uVar3 = uVar18 - uVar20;
      param_1[10] = uVar20;
      if (uVar20 <= uVar18 && uVar3 != 0) {
        uVar10 = uVar3;
      }
      if (uVar3 == 0) {
        local_d8 = puVar15;
        if (*(byte *)(param_1 + 9) < 4) {
          iVar19 = 1;
          ppuVar8 = &local_d8;
          switch((uintptr_t)(*(byte *)(param_1 + 9))) {
          case 1:
            goto switchD_1000a170_caseD_1;
          case 2:
            goto switchD_1000a170_caseD_2;
          case 3:
            goto switchD_1000a170_caseD_3;
          }
          goto switchD_1000a170_caseD_0;
        }
        goto LAB_1000a278;
      }
    }
    local_ac = puVar12;
    local_a8 = puVar15;
    if (*(byte *)(param_1 + 9) < 4) {
      puVar15 = &DAT_1000a2ec;
      ppuVar8 = &local_a8;
      iVar19 = 1;
      switch((uintptr_t)(*(byte *)(param_1 + 9))) {
      case 2:
        iVar19 = -1;
        break;
      case 3:
        iVar19 = -1;
      case 1:
        ppuVar8 = &local_ac;
      }
      *ppuVar8 = (uint *)((int)*ppuVar8 + iVar19);
    }
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = (uint *)0x0;
    if ((uVar10 < (uint)param_1[5]) && (param_1[4] != 0)) {
      local_e8 = (undefined4 *)(param_1[4] + uVar10 * 0x10);
      local_90 = 1;
      local_e4 = param_1;
      recovered_1000add4((int *)&local_b8,local_e8[1]);
      puVar15 = extraout_r3;
      param_1 = local_e4;
      if (local_e8[1] != 0) {
        pbVar7 = (byte *)*local_e8;
        puVar25 = (undefined8 *)0x0;
        puVar26 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar27 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar28 = *(undefined8 **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        local_10c = pbVar7 + local_e8[1];
        local_110 = &local_d4;
        local_114 = auStack_c8;
        local_118 = local_e4 + 1;
        puVar6 = extraout_r3;
        do {
          puVar12 = (uint *)*param_1;
          puVar15 = (uint *)(uint)*(byte *)(param_1 + 9);
          local_104 = (uint)*pbVar7;
          local_d8 = local_a8;
          local_a4 = local_ac;
          if (puVar12 == (uint *)0x0) {
LAB_1000ac80:
            puVar23 = (uint *)0x0;
LAB_1000ac84:
            param_1[8] = local_a4;
            *(undefined1 *)(param_1 + 0xb) = 1;
            param_1[7] = local_d8;
            recovered_10007024(puVar23);
            goto LAB_1000ac9c;
          }
          uVar20 = puVar12[2];
          local_108 = pbVar7;
          if (uVar20 == 0) goto LAB_1000ac80;
          bVar24 = false;
          puVar21 = (uint *)0x0;
          puVar22 = (uint *)0x0;
          puVar23 = (uint *)0x0;
          local_e0 = (uint *)0x0;
          local_f4 = puVar12;
          local_f0 = puVar15;
          while( true ) {
            local_a0 = puVar23;
            puVar13 = (uint *)*puVar12;
            if ((((int)puVar13 < 1) || (puVar13 < local_d8)) || ((int)local_a4 < 1))
            goto LAB_1000ac84;
            puVar16 = local_d8;
            if (0 < (int)local_d8) {
              puVar16 = (uint *)puVar12[1];
              puVar6 = puVar16;
            }
            if (((int)puVar16 < 1) || (puVar6 < local_a4)) goto LAB_1000ac84;
            iVar19 = uVar20 + (int)((int)local_d8 + (int)puVar13 * (int)((int)local_a4 + -1)) * 4;
            puVar6 = (uint *)(uint)*(byte *)(iVar19 + -3);
            local_dc = (uint *)(uint)*(byte *)(iVar19 + -4);
            uVar20 = (uint)*(byte *)(iVar19 + -2);
            if (((int)puVar6 << 8 | (int)local_dc << 0x10 | uVar20) == 0xffffff) break;
            if ((bVar24) || (puVar23 = local_e0, local_dc == (uint *)0xff)) {
LAB_1000a6e8:
              bVar24 = true;
              if (puVar15 < &UndefinedInstruction) {
LAB_1000a6f4:
                iVar19 = 1;
                ppuVar8 = &local_d8;
                puVar6 = (uint *)(&DAT_1000a704)[(int)puVar15];
                switch((uintptr_t)(puVar15)) {
                case 0x2:
                  iVar19 = -1;
                  ppuVar8 = &local_d8;
                  break;
                case 0x3:
                  iVar19 = -1;
                case 0x1:
                  ppuVar8 = &local_a4;
                }
                *ppuVar8 = (uint *)((int)*ppuVar8 + iVar19);
              }
            }
            else {
              puVar13 = puVar21;
              if (puVar21 == puVar22) {
                puVar16 = (uint *)((int)puVar21 << 1);
                if (puVar21 == (uint *)0x0) {
                  puVar16 = (uint *)&UndefinedInstruction;
                }
                if (puVar21 < puVar16) {
                  local_90 = 2;
                  local_98 = local_e0;
                  local_100 = puVar21;
                  local_fc = puVar16;
                  local_f8 = puVar6;
                  local_ec = uVar20;
                  puVar23 = recovered_10006fcc((ulong)puVar16);
                  puVar13 = local_100;
                  if (local_100 != (uint *)0x0) {
                    puVar6 = (uint *)0x0;
                    uVar20 = extraout_r1;
                    if ((uint *)0xf < local_100) {
                      uVar20 = (int)puVar23 - (int)local_e0;
                    }
                    if ((uint *)0xf < local_100 && 0xf < uVar20) {
                      puVar6 = (uint *)((uint)local_100 & 0xfffffff0);
                      puVar15 = puVar6;
                      puVar12 = local_e0;
                      puVar21 = puVar23;
                      do {
                        uVar29 = *(undefined8 *)puVar12;
                        uVar30 = *(undefined8 *)(puVar12 + 2);
                        puVar12 = puVar12 + 4;
                        puVar15 = puVar15 + -4;
                        *(undefined8 *)puVar21 = uVar29;
                        *(undefined8 *)(puVar21 + 2) = uVar30;
                        puVar21 = puVar21 + 4;
                      } while (puVar15 != (uint *)0x0);
                      if (local_100 == puVar6) goto LAB_1000a514;
                    }
                    iVar19 = (int)local_100 - (int)puVar6;
                    pbVar7 = (byte *)((int)puVar23 + (int)puVar6);
                    pbVar14 = (byte *)((int)local_e0 + (int)puVar6);
                    do {
                      iVar19 = iVar19 + -1;
                      *pbVar7 = *pbVar14;
                      pbVar7 = pbVar7 + 1;
                      pbVar14 = pbVar14 + 1;
                    } while (iVar19 != 0);
                  }
LAB_1000a514:
                  recovered_10007024(local_e0);
                  uVar20 = local_ec;
                  puVar6 = local_f8;
                  param_1 = local_e4;
                  puVar22 = local_fc;
                  puVar15 = local_f0;
                  puVar12 = local_f4;
                }
              }
              *(byte *)((int)puVar23 + (int)puVar13) = (byte)local_dc;
              puVar21 = (uint *)((int)puVar13 + 1);
              local_e0 = puVar23;
              if (puVar6 == (uint *)0xff) {
                goto LAB_1000a6e8;
              }
              if (puVar21 == puVar22) {
                puVar16 = (uint *)((int)puVar22 << 1);
                if (puVar22 == (uint *)0x0) {
                  puVar16 = (uint *)&UndefinedInstruction;
                }
                if (puVar16 <= puVar22) goto LAB_1000a614;
                local_90 = 3;
                local_fc = puVar22;
                local_f8 = puVar6;
                local_ec = uVar20;
                local_dc = puVar16;
                local_98 = puVar23;
                puVar23 = recovered_10006fcc((ulong)puVar16);
                puVar6 = local_fc;
                if (local_fc != (uint *)0x0) {
                  puVar15 = (uint *)0x0;
                  uVar20 = extraout_r1_00;
                  if ((uint *)0xf < local_fc) {
                    uVar20 = (int)puVar23 - (int)local_e0;
                  }
                  if ((uint *)0xf < local_fc && 0xf < uVar20) {
                    puVar15 = (uint *)((uint)local_fc & 0xfffffff0);
                    puVar12 = puVar15;
                    puVar21 = local_e0;
                    puVar22 = puVar23;
                    do {
                      uVar29 = *(undefined8 *)puVar21;
                      uVar30 = *(undefined8 *)(puVar21 + 2);
                      puVar21 = puVar21 + 4;
                      puVar12 = puVar12 + -4;
                      *(undefined8 *)puVar22 = uVar29;
                      *(undefined8 *)(puVar22 + 2) = uVar30;
                      puVar22 = puVar22 + 4;
                    } while (puVar12 != (uint *)0x0);
                    if (local_fc == puVar15) goto LAB_1000a5d8;
                  }
                  iVar19 = (int)local_fc - (int)puVar15;
                  pbVar7 = (byte *)((int)puVar23 + (int)puVar15);
                  pbVar14 = (byte *)((int)local_e0 + (int)puVar15);
                  do {
                    iVar19 = iVar19 + -1;
                    *pbVar7 = *pbVar14;
                    pbVar7 = pbVar7 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while (iVar19 != 0);
                }
LAB_1000a5d8:
                recovered_10007024(local_e0);
                puVar21 = (uint *)((int)puVar6 + 1);
                *(byte *)((int)puVar23 + (int)puVar6) = (byte)local_f8;
                uVar20 = local_ec;
                puVar6 = extraout_r3_00;
                param_1 = local_e4;
                puVar22 = local_dc;
                puVar15 = local_f0;
                puVar12 = local_f4;
              }
              else {
LAB_1000a614:
                *(byte *)((int)puVar23 + (int)puVar21) = (byte)puVar6;
                puVar21 = (uint *)((int)puVar13 + 2);
              }
              local_e0 = puVar23;
              if (uVar20 == 0xff) goto LAB_1000a6e8;
              if (puVar21 == puVar22) {
                puVar13 = (uint *)((int)puVar22 << 1);
                if (puVar22 == (uint *)0x0) {
                  puVar13 = (uint *)&UndefinedInstruction;
                }
                if (puVar13 <= puVar22) goto LAB_1000a74c;
                local_90 = 4;
                local_f8 = puVar13;
                local_ec = uVar20;
                local_dc = puVar22;
                local_98 = puVar23;
                puVar23 = recovered_10006fcc((ulong)puVar13);
                param_1 = local_e4;
                if (local_dc != (uint *)0x0) {
                  puVar6 = (uint *)0x0;
                  uVar20 = extraout_r1_01;
                  if ((uint *)0xf < local_dc) {
                    uVar20 = (int)puVar23 - (int)local_e0;
                  }
                  if ((uint *)0xf < local_dc && 0xf < uVar20) {
                    puVar6 = (uint *)((uint)local_dc & 0xfffffff0);
                    puVar15 = puVar6;
                    puVar12 = local_e0;
                    puVar21 = puVar23;
                    do {
                      uVar29 = *(undefined8 *)puVar12;
                      uVar30 = *(undefined8 *)(puVar12 + 2);
                      puVar12 = puVar12 + 4;
                      puVar15 = puVar15 + -4;
                      *(undefined8 *)puVar21 = uVar29;
                      *(undefined8 *)(puVar21 + 2) = uVar30;
                      puVar21 = puVar21 + 4;
                    } while (puVar15 != (uint *)0x0);
                    if (local_dc == puVar6) goto LAB_1000a6b0;
                  }
                  iVar19 = (int)local_dc - (int)puVar6;
                  pbVar7 = (byte *)((int)puVar23 + (int)puVar6);
                  pbVar14 = (byte *)((int)local_e0 + (int)puVar6);
                  do {
                    iVar19 = iVar19 + -1;
                    *pbVar7 = *pbVar14;
                    pbVar7 = pbVar7 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while (iVar19 != 0);
                }
LAB_1000a6b0:
                recovered_10007024(local_e0);
                pbVar7 = (byte *)((int)puVar23 + (int)local_dc);
                uVar20 = local_ec;
                puVar6 = extraout_r3_01;
                puVar21 = local_dc;
                puVar22 = local_f8;
                puVar15 = local_f0;
                puVar12 = local_f4;
                local_e0 = puVar23;
              }
              else {
LAB_1000a74c:
                pbVar7 = (byte *)((int)puVar23 + (int)puVar21);
              }
              puVar21 = (uint *)((int)puVar21 + 1);
              *pbVar7 = (byte)uVar20;
              bVar24 = false;
              puVar23 = local_e0;
              if (puVar15 < &UndefinedInstruction) goto LAB_1000a6f4;
            }
            uVar20 = puVar12[2];
            if (uVar20 == 0) goto LAB_1000ac84;
          }
          if (puVar15 < &UndefinedInstruction) {
            ppuVar8 = &local_d8;
            iVar19 = 1;
            switch((uintptr_t)(puVar15)) {
            case 0x2:
              iVar19 = -1;
              break;
            case 0x3:
              iVar19 = -1;
            case 0x1:
              ppuVar8 = &local_a4;
            }
            *ppuVar8 = (uint *)((int)*ppuVar8 + iVar19);
          }
          puVar15 = local_a4;
          puVar6 = local_d8;
          if (local_104 == 2) {
            if (puVar21 == (uint *)0x0) {
              local_dc = (uint *)0x1;
            }
            else {
              uVar20 = 0;
              uVar10 = 0;
              puVar12 = local_a0;
              puVar23 = puVar21;
              do {
                local_dc = (uint *)0xffffffff;
                if (uVar10 >> 0x18 != 0) goto LAB_1000aa5c;
                uVar10 = uVar10 << 8 | uVar20 >> 0x18;
                puVar23 = (uint *)((int)puVar23 + -1);
                uVar20 = (uint)(byte)*puVar12 | uVar20 << 8;
                puVar12 = (uint *)((int)puVar12 + 1);
              } while (puVar23 != (uint *)0x0);
              if (-uVar10 < (uint)(uVar20 < 0xfffffffe)) {
                local_dc = (uint *)(uVar20 + 1);
              }
            }
LAB_1000aa5c:
            *local_110 = puVar25;
            local_110[1] = puVar26;
            local_110[2] = puVar27;
            local_110[3] = puVar28;
            local_110[4] = (undefined8 *)0x0;
            local_d8 = (uint *)CONCAT31(PF_PART3(local_d8, 1),2);
            local_90 = 9;
            local_bc = puVar21 == (uint *)0x0;
            local_f8 = puVar6;
            local_f4 = puVar15;
            local_c0 = local_dc;
            recovered_1000be44((int *)&local_b8,(undefined1 *)&local_d8);
            if ((uint *)local_e4[2] < local_dc) {
              local_90 = 10;
              recovered_1000b3f0(local_118,(uint)local_dc);
            }
LAB_1000ab84:
            puVar4 = local_d4;
LAB_1000ab88:
            recovered_10007024(puVar4);
            puVar6 = local_f8;
            param_1 = local_e4;
            puVar15 = local_f4;
          }
          else {
            if (local_104 == 1) {
              if (puVar21 == (uint *)0x0) {
                uVar20 = 0;
                uVar10 = 0;
              }
              else {
                uVar20 = 0;
                uVar10 = 0;
                puVar12 = local_a0;
                puVar23 = puVar21;
                do {
                  if (uVar10 >> 0x18 != 0) {
                    uVar20 = 0xffffffff;
                    uVar10 = 0xffffffff;
                    break;
                  }
                  uVar10 = uVar10 << 8 | uVar20 >> 0x18;
                  puVar23 = (uint *)((int)puVar23 + -1);
                  uVar20 = (uint)(byte)*puVar12 | uVar20 << 8;
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while (puVar23 != (uint *)0x0);
              }
              if (0x7fffffff < uVar10) {
                uVar20 = 0xffffffff;
                uVar10 = 0x7fffffff;
              }
              local_110[5] = (undefined8 *)0x0;
              *local_110 = puVar25;
              local_110[1] = puVar26;
              local_110[2] = puVar27;
              local_110[3] = puVar28;
              local_110[4] = (undefined8 *)0x0;
              *local_114 = uVar20;
              local_d8 = (uint *)CONCAT31(PF_PART3(local_d8, 1),1);
              local_114[1] = uVar10;
              local_90 = 8;
              local_bc = puVar21 == (uint *)0x0;
              local_f8 = puVar6;
              local_f4 = puVar15;
              recovered_1000be44((int *)&local_b8,(undefined1 *)&local_d8);
              goto LAB_1000ab84;
            }
            if (local_104 == 0) {
              local_f8 = local_d8;
              local_f4 = local_a4;
              if (puVar21 == (uint *)0x0) {
                puVar6 = (uint *)0x0;
                puVar4 = (undefined8 *)0x0;
              }
              else {
                local_90 = 5;
                local_100 = puVar21;
                puVar4 = recovered_10006fcc((ulong)((int)puVar21 + 1));
                puVar15 = (uint *)0x0;
                *(undefined1 *)puVar4 = 0;
                recovered_10007024((void *)0x0);
                puVar12 = (uint *)((int)local_a0 + (int)local_100);
                puVar23 = local_a0;
                puVar6 = local_100;
                puVar21 = local_100;
                local_fc = puVar12;
                do {
                  bVar11 = (byte)*puVar23;
                  local_9c = puVar4;
                  if (puVar15 == puVar6) {
                    puVar22 = (uint *)((int)puVar15 << 1);
                    if (puVar15 == (uint *)0x0) {
                      puVar22 = (uint *)&DataAbort;
                    }
                    if (puVar15 < puVar22) {
                      local_90 = 7;
                      local_f0 = puVar22;
                      local_ec = (uint)bVar11;
                      local_e0 = puVar23;
                      local_dc = puVar15;
                      puVar4 = recovered_10006fcc((uint)puVar22 | 1);
                      puVar15 = local_dc;
                      puVar21 = local_100;
                      *(undefined1 *)puVar4 = 0;
                      if (local_dc != (uint *)0x0) {
                        bVar24 = local_dc == (uint *)&DataAbort;
                        puVar6 = (uint *)0x0;
                        puVar9 = local_9c;
                        if (local_dc >= &DataAbort) {
                          puVar9 = (undefined8 *)((int)puVar4 - (int)local_9c);
                          bVar24 = puVar9 == (undefined8 *)0xf;
                        }
                        if ((local_dc < &DataAbort || puVar9 < (undefined8 *)0xf) || bVar24)
                        goto LAB_1000a988;
                        uVar20 = (uint)local_dc & 0xfffffff0;
                        puVar6 = (uint *)((uint)local_dc & 0xfffffff0);
                        puVar9 = local_9c;
                        puVar17 = puVar4;
                        do {
                          uVar29 = *puVar9;
                          uVar30 = puVar9[1];
                          puVar9 = puVar9 + 2;
                          uVar20 = uVar20 - 0x10;
                          *puVar17 = uVar29;
                          puVar17[1] = uVar30;
                          puVar17 = puVar17 + 2;
                        } while (uVar20 != 0);
                        for (; local_dc != puVar6; puVar6 = (uint *)((int)puVar6 + 1)) {
LAB_1000a988:
                          *(byte *)((int)puVar4 + (int)puVar6) =
                               *(byte *)((int)local_9c + (int)puVar6);
                        }
                      }
                      *(byte *)((int)puVar4 + (int)local_dc) = 0;
                      recovered_10007024(local_9c);
                      bVar11 = (byte)local_ec;
                      puVar12 = local_fc;
                      puVar23 = local_e0;
                      puVar6 = local_f0;
                    }
                  }
                  *(byte *)((int)puVar4 + (int)puVar15) = bVar11;
                  puVar15 = (uint *)((int)puVar15 + 1);
                  puVar23 = (uint *)((int)puVar23 + 1);
                  *(byte *)((int)puVar4 + (int)puVar15) = 0;
                } while (puVar23 != puVar12);
              }
              local_d8 = (uint *)((uint)local_d8 & 0xffffff00);
              *local_110 = puVar25;
              local_110[1] = puVar26;
              local_110[2] = puVar27;
              local_110[3] = puVar28;
              *(undefined8 **)((int)local_110 + 9) = puVar25;
              *(undefined8 **)((int)local_110 + 0xd) = puVar26;
              *(undefined8 **)((int)local_110 + 0x11) = puVar27;
              *(undefined8 **)((int)local_110 + 0x15) = puVar28;
              recovered_10007024((void *)0x0);
              local_bc = puVar21 == (uint *)0x0;
              local_90 = 6;
              local_d4 = puVar4;
              puStack_d0 = puVar21;
              local_cc = puVar6;
              recovered_1000be44((int *)&local_b8,(undefined1 *)&local_d8);
              recovered_10007024(local_d4);
              puVar4 = (undefined8 *)0x0;
              goto LAB_1000ab88;
            }
          }
          local_ac = puVar15;
          local_a8 = puVar6;
          recovered_10007024(local_a0);
          pbVar7 = local_108 + 1;
          puVar15 = extraout_r3_02;
          puVar6 = extraout_r3_02;
        } while (pbVar7 != local_10c);
      }
      piVar5 = (int *)local_e8[3];
      param_1[7] = local_a8;
      param_1[8] = local_ac;
      puVar12 = local_ac;
      puVar6 = local_a8;
      if (piVar5 != (int *)0x0) {
        local_90 = 0xb;
        (**(code **)(*piVar5 + 8))(piVar5,param_1,&local_b8);
        puVar12 = (uint *)local_e4[8];
        puVar6 = (uint *)local_e4[7];
        puVar15 = extraout_r3_03;
        param_1 = local_e4;
      }
    }
    else {
      param_1[7] = local_a8;
      param_1[8] = local_ac;
      puVar12 = local_ac;
      puVar6 = local_a8;
    }
    puVar23 = (uint *)*param_1;
    if (puVar23 != (uint *)0x0) {
      puVar15 = (uint *)puVar23[2];
    }
    if ((((!(puVar23 != (uint *)0x0 && puVar15 != (uint *)0x0)) || ((int)*puVar23 < 1)) ||
        ((uint *)*puVar23 < puVar6)) || ((int)puVar12 < 1)) {
LAB_1000ac34:
      *(undefined1 *)(param_1 + 0xb) = 1;
LAB_1000ac9c:
      bVar11 = 0;
      iVar19 = local_b4;
    }
    else {
      if (0 < (int)puVar6) {
        puVar6 = (uint *)puVar23[1];
        puVar23 = puVar6;
      }
      if (((int)puVar6 < 1) || (puVar23 < puVar12)) goto LAB_1000ac34;
      bVar11 = *(byte *)(param_1 + 0xb) ^ 1;
      iVar19 = local_b4;
    }
    for (; iVar19 != 0; iVar19 = iVar19 + -1) {
      recovered_10007024((void *)local_b8[iVar19 * 8 + -7]);
    }
    local_b4 = 0;
    recovered_10007024(local_b8);
    goto LAB_1000a0b0;
  }
  param_1[10] = 0xfff;
  local_d8 = puVar15;
  if (*(byte *)(param_1 + 9) < 4) {
    iVar19 = 1;
    ppuVar8 = &local_d8;
    switch((uintptr_t)(*(byte *)(param_1 + 9))) {
    case 1:
      goto switchD_1000a170_caseD_1;
    case 2:
      goto switchD_1000a170_caseD_2;
    case 3:
      goto switchD_1000a170_caseD_3;
    }
    goto switchD_1000a170_caseD_0;
  }
LAB_1000a278:
  param_1[7] = local_d8;
  bVar11 = (local_d8 <= puVar6 && (0 < (int)local_b8 && 0 < (int)local_d8)) && local_b8 <= puVar21;
  param_1[8] = local_b8;
  if ((local_d8 > puVar6 || (0 >= (int)local_b8 || 0 >= (int)local_d8)) || local_b8 > puVar21) {
LAB_1000a0a8:
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
LAB_1000a0b0:
  recovered_10007590(&uStack_94);
  return bVar11 & 1;
}

#undef DAT_1000a2ec
#undef DAT_1000a704
#undef DAT_1000ada8
#undef DAT_1000adac
#undef DAT_1001400c
#undef EXT_00000004
#undef EXT_00000010
#undef switchdataD_1000a2ec
#undef switchdataD_1000a704
#undef auStack_120
#undef puStack_d0
#undef auStack_c8
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef uStack_94
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef auStack_68
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_cc
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
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adb0
 */

void recovered_1000adb0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(byte *)(param_1 + 0x24) < 4) {
    *(char *)(param_1 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_1 + 0x24) & 0x1f) << 3));
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000add4
 */

void recovered_1000add4(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;

  if ((uint)param_1[2] < param_2) {
    pvVar1 = recovered_10006fcc(param_2 << 5);
    if (param_1[1] != 0) {
      uVar7 = 0;
      do {
        puVar2 = (undefined1 *)(*param_1 + uVar7 * 0x20);
        uVar3 = *(undefined4 *)(puVar2 + 4);
        uVar4 = *(undefined4 *)(puVar2 + 8);
        uVar6 = *(undefined4 *)(puVar2 + 0xc);
        puVar5 = (undefined1 *)((int)pvVar1 + uVar7 * 0x20);
        *puVar5 = *puVar2;
        *(undefined4 *)(puVar5 + 4) = uVar3;
        *(undefined4 *)(puVar5 + 8) = uVar4;
        *(undefined4 *)(puVar5 + 0xc) = uVar6;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        uVar8 = *(undefined8 *)(puVar2 + 0x10);
        *(undefined8 *)(puVar5 + 0x15) = *(undefined8 *)(puVar2 + 0x15);
        *(undefined8 *)(puVar5 + 0x10) = uVar8;
        recovered_10007024((void *)0x0);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[1]);
    }
    recovered_10007024((void *)*param_1);
    param_1[2] = param_2;
    *param_1 = (int)pvVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae9c
 */

int recovered_1000ae9c(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000b3f0((int *)(param_1 + 4),param_2);
  }
  return *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aee0
 */

int * recovered_1000aee0(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    recovered_10007024(*(void **)(*param_1 + iVar1 * 0x20 + -0x1c));
  }
  param_1[1] = 0;
  recovered_10007024((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af28
 */

void recovered_1000af28(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  do {
    bVar1 = recovered_1000a024(param_1);
  } while (bVar1 != 0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af48
 */

undefined1 recovered_1000af48(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x2c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af50
 */

void recovered_1000af50(int param_1,uint param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    recovered_1000b084((int *)(param_1 + 0x10),param_2 + 1);
  }
  piVar10 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
  if (piVar10 != param_3) {
    uVar12 = param_3[1];
    iVar11 = 0;
    if (uVar12 == 0) {
      pvVar1 = (void *)0x0;
      uVar7 = 0;
    }
    else {
      pvVar1 = recovered_10006fcc(uVar12);
      recovered_10007024((void *)0x0);
      uVar2 = param_3[1];
      uVar7 = 0;
      if (uVar2 != 0) {
        iVar5 = *param_3;
        uVar6 = 0;
        uVar7 = extraout_r3;
        if (uVar2 >= 0x10) {
          uVar7 = (int)pvVar1 - iVar5;
        }
        if (uVar2 < 0x10 || uVar7 < 0x10) goto LAB_1000b010;
        uVar6 = uVar2 & 0xfffffff0;
        uVar7 = 0;
        do {
          puVar8 = (undefined8 *)(iVar5 + uVar7);
          uVar13 = puVar8[1];
          puVar9 = (undefined8 *)((int)pvVar1 + uVar7);
          uVar7 = uVar7 + 0x10;
          *puVar9 = *puVar8;
          puVar9[1] = uVar13;
        } while (uVar6 != uVar7);
        for (; uVar2 != uVar6; uVar6 = uVar6 + 1) {
LAB_1000b010:
          *(undefined1 *)((int)pvVar1 + uVar6) = *(undefined1 *)(iVar5 + uVar6);
        }
        uVar7 = uVar2;
      }
    }
    pvVar3 = (void *)*piVar10;
    piVar10[2] = uVar12;
    piVar10[1] = uVar7;
    *piVar10 = (int)pvVar1;
    recovered_10007024(pvVar3);
    if ((int *)param_3[3] != (int *)0x0) {
      iVar11 = (*(uintptr_t (**)(void *))(*(int *)param_3[3] + 0xc))((void *)((int *)param_3[3]));
    }
    piVar4 = (int *)piVar10[3];
    piVar10[3] = iVar11;
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(void (**)(void *))(*piVar4 + 4))((void *)(piVar4));
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b084
 */

void recovered_1000b084(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;

  uVar1 = param_1[1];
  if (uVar1 >= param_2 && uVar1 != param_2) {
    iVar9 = uVar1 * 0x10 + -4;
    do {
      uVar1 = uVar1 - 1;
      iVar7 = *param_1;
      if (*(int **)(iVar7 + iVar9) != (int *)0x0) {
        (*(void (**)(void *))(**(int **)(iVar7 + iVar9) + 4))((void *)(*(int **)(iVar7 + iVar9)));
      }
      pvVar2 = *(void **)(iVar7 + uVar1 * 0x10);
      *(undefined4 *)(iVar7 + iVar9 + -8) = 0;
      recovered_10007024(pvVar2);
      iVar9 = iVar9 + -0x10;
    } while (param_2 < uVar1);
    param_1[1] = param_2;
    return;
  }
  if (uVar1 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar2 = recovered_10006fcc(param_2 << 4);
      if (param_1[1] != 0) {
        uVar1 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + uVar1 * 0x10);
          uVar4 = puVar3[1];
          uVar5 = puVar3[2];
          uVar8 = puVar3[3];
          puVar6 = (undefined4 *)((int)pvVar2 + uVar1 * 0x10);
          *puVar6 = *puVar3;
          *puVar3 = 0;
          puVar6[1] = uVar4;
          puVar6[2] = uVar5;
          puVar6[3] = uVar8;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          recovered_10007024((void *)0x0);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
      }
      recovered_10007024((void *)*param_1);
      uVar1 = param_1[1];
      param_1[2] = param_2;
      *param_1 = (int)pvVar2;
    }
    if (uVar1 < param_2) {
      do {
        puVar3 = (undefined4 *)(*param_1 + uVar1 * 0x10);
        *puVar3 = 0;
        puVar3[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar3[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar3[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        uVar1 = param_1[1] + 1;
        param_1[1] = uVar1;
      } while (uVar1 < param_2);
    }
  }
  return;
}


#undef DAT_1000b37c
#define DAT_1000b37c (*(int *)(0x1000b37cU))
#undef DAT_1000b380
#define DAT_1000b380 (*(int *)(0x1000b380U))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(void * *)(frame + 36))
#define local_98 (*(int * *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define auStack_b0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_a4 (*(void * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1d4
 */

void recovered_1000b1d4(int param_1,uint param_2,void **param_3,int **param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = (int *)0x0;
  local_9c = (void *)0x0;
  local_a0 = (void *)0x0;
  local_a4 = (void *)0x0;
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x208U);
  local_70 = (0xd4U) + 0x1000b248;
  recovered_1000756c(&uStack_94);
  if (&local_a4 != param_3) {
    recovered_10007024((void *)0x0);
    local_a4 = *param_3;
    local_a0 = param_3[1];
    local_9c = param_3[2];
    param_3[1] = (void *)0x0;
    param_3[2] = (void *)0x0;
    *param_3 = (void *)0x0;
  }
  if (&local_98 != param_4) {
    if (local_98 != (int *)0x0) {
      (*(void (**)(void *))(*local_98 + 4))((void *)(local_98));
    }
    local_98 = *param_4;
    *param_4 = (int *)0x0;
  }
  local_90 = 1;
  recovered_1000af50(param_1,param_2,(int *)&local_a4);
  if (local_98 != (int *)0x0) {
    (*(void (**)(void *))(*local_98 + 4))((void *)(local_98));
  }
  local_a0 = (void *)0x0;
  recovered_10007024(local_a4);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000b37c
#undef DAT_1000b380
#undef DAT_1001400c
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_b0
#undef uStack_94
#undef auStack_68
#undef local_a4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b384
 */

void recovered_1000b384(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (*(uint *)(param_1 + 0x14) <= param_2) {
    return;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
  puVar1[1] = 0;
  recovered_10007024((void *)*puVar1);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  if ((int *)puVar1[3] != (int *)0x0) {
    (*(void (**)(void *))(*(int *)puVar1[3] + 4))((void *)((int *)puVar1[3]));
  }
  puVar1[3] = 0;
  recovered_10007024((void *)0x0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3e0
 */

int recovered_1000b3e0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3e8
 */

int recovered_1000b3e8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b3f0
 */

void recovered_1000b3f0(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;

  uVar8 = param_1[1];
  if (uVar8 >= param_2 && uVar8 != param_2) {
    iVar7 = uVar8 * 0x18 + -0x14;
    do {
      recovered_10007024(*(void **)(*param_1 + iVar7));
      uVar8 = uVar8 - 1;
      iVar7 = iVar7 + -0x18;
    } while (param_2 < uVar8);
    param_1[1] = param_2;
    return;
  }
  if (uVar8 < param_2) {
    if ((uint)param_1[2] < param_2) {
      pvVar2 = recovered_10006fcc(param_2 * 0x18);
      if (param_1[1] != 0) {
        iVar7 = 0x10;
        uVar8 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + iVar7);
          uVar9 = puVar3[1];
          uVar6 = puVar3[-3];
          puVar5 = (undefined4 *)((int)pvVar2 + iVar7);
          *puVar5 = *puVar3;
          uVar4 = puVar3[-2];
          puVar5[-3] = uVar6;
          uVar6 = puVar3[-1];
          puVar5[-2] = uVar4;
          uVar1 = *(undefined1 *)(puVar3 + -4);
          puVar5[-1] = uVar6;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          puVar5[1] = uVar9;
          *(undefined1 *)(puVar5 + -4) = uVar1;
          recovered_10007024((void *)0x0);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 0x18;
        } while (uVar8 < (uint)param_1[1]);
      }
      recovered_10007024((void *)*param_1);
      uVar8 = param_1[1];
      param_1[2] = param_2;
      *param_1 = (int)pvVar2;
    }
    if (uVar8 < param_2) {
      do {
        puVar3 = (undefined4 *)(*param_1 + uVar8 * 0x18);
        puVar3[5] = 0;
        *puVar3 = 0;
        puVar3[1] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
        puVar3[2] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
        puVar3[3] = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
        puVar3[4] = 0;
        uVar8 = param_1[1] + 1;
        param_1[1] = uVar8;
      } while (uVar8 < param_2);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b534
 */

int recovered_1000b534(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b560
 */

void recovered_1000b560(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000f08c((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b580
 */

void recovered_1000b580(int param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000f1e8((int *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


#undef DAT_1000b6fc
#define DAT_1000b6fc (*(int *)(0x1000b6fcU))
#undef DAT_1000b700
#define DAT_1000b700 (*(int *)(0x1000b700U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define uStack_a4 (*(undefined4 *)(frame + 28))
#define local_78 (*(int *)(frame + 72))
#define uStack_a0 (*(undefined4 *)(frame + 32))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b5a0
 */

undefined4 recovered_1000b5a0(int param_1,void **param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined4 uVar2;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_ac[0] = 1;
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x210U);
  local_70 = (0x9cU) + 0x1000b61c;
  recovered_1000756c(&uStack_94);
  local_b0 = param_1;
  if (&local_a8 != param_2) {
    local_90 = 1;
    puVar1 = &DAT_1000f34c;
    if (*param_2 != (undefined1 *)0x0) {
      puVar1 = *param_2;
    }
    recovered_1000bc80((int *)&local_a8,(int)puVar1,(uint)param_2[1]);
  }
  local_98 = 0;
  local_9c = 0;
  local_90 = 2;
  recovered_1000f1e8((int *)(local_b0 + 4),local_ac);
  uVar2 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar2;
  recovered_10007024(local_a8);
  recovered_10007590(&uStack_94);
  return uVar2;
}

#undef DAT_1000b6fc
#undef DAT_1000b700
#undef DAT_1000f34c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef uStack_a4
#undef local_78
#undef uStack_a0
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

#undef DAT_1000b850
#define DAT_1000b850 (*(int *)(0x1000b850U))
#undef DAT_1000b854
#define DAT_1000b854 (*(int *)(0x1000b854U))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define pvStack_a4 (*(void * *)(frame + 28))
#define pvStack_a0 (*(void * *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b704
 */

undefined4 recovered_1000b704(int param_1,void **param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  pvStack_a4 = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  pvStack_a0 = *(void **)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_a8 = (void *)0x0;
  local_98 = 0;
  local_ac[0] = 1;
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x218U);
  local_70 = (0x90U) + 0x1000b780;
  recovered_1000756c(&uStack_94);
  if (&local_a8 != param_2) {
    recovered_10007024((void *)0x0);
    local_a8 = *param_2;
    pvStack_a4 = param_2[1];
    pvStack_a0 = param_2[2];
    param_2[1] = (void *)0x0;
    param_2[2] = (void *)0x0;
    *param_2 = (void *)0x0;
  }
  local_98 = 0;
  local_9c = 0;
  local_90 = 1;
  local_b0 = param_1;
  recovered_1000f1e8((int *)(param_1 + 4),local_ac);
  uVar1 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar1;
  recovered_10007024(local_a8);
  recovered_10007590(&uStack_94);
  return uVar1;
}

#undef DAT_1000b850
#undef DAT_1000b854
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef pvStack_a4
#undef pvStack_a0
#undef uStack_94

#undef DAT_1000b968
#define DAT_1000b968 (*(int *)(0x1000b968U))
#undef DAT_1000b96c
#define DAT_1000b96c (*(int *)(0x1000b96cU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b858
 */

undefined4 recovered_1000b858(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  local_a4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_ac[0] = 2;
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x220U);
  local_70 = (0x5cU) + 0x1000b8cc;
  local_90 = 1;
  local_9c = param_2;
  local_98 = param_3;
  recovered_1000756c(&uStack_94);
  local_b0 = param_1;
  recovered_1000f1e8((int *)(param_1 + 4),local_ac);
  uVar1 = *(undefined4 *)(local_b0 + 8);
  *(undefined4 *)(local_b0 + 0x30) = uVar1;
  recovered_10007024(local_a8);
  recovered_10007590(&uStack_94);
  return uVar1;
}

#undef DAT_1000b968
#undef DAT_1000b96c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b970
 */

void recovered_1000b970(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000b3f0((int *)(param_1 + 4),param_2);
  }
  recovered_1000f08c((int *)(param_1 + 4),
                     (undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x18 + -0x18));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9c8
 */

void recovered_1000b9c8(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;

  uVar1 = *(uint *)(param_1 + 8);
  piVar3 = (int *)(param_1 + 4);
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (uVar1 < param_2) {
    recovered_1000b3f0(piVar3,param_2);
    uVar1 = *(uint *)(param_1 + 8);
  }
  if (uVar1 < param_2) {
    recovered_1000b3f0(piVar3,param_2);
  }
  iVar2 = *piVar3 + param_2 * 0x18;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -0x18) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba48
 */

void recovered_1000ba48(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (*(uint *)(param_1 + 8) < param_2) {
    recovered_1000b3f0((int *)(param_1 + 4),param_2);
    return;
  }
  return;
}


#undef DAT_1000bbf8
#define DAT_1000bbf8 (*(int *)(0x1000bbf8U))
#undef DAT_1000bbfc
#define DAT_1000bbfc (*(int *)(0x1000bbfcU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define local_6c (*(undefined1 * *)(frame + 100))
#define uStack_a4 (*(undefined4 *)(frame + 44))
#define uStack_a0 (*(undefined4 *)(frame + 48))
#define uStack_9c (*(undefined4 *)(frame + 52))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b4 (*(uint *)(frame + 28))
#define local_b0 (*(int * *)(frame + 32))
#define local_ac (*(undefined1 (*)[4])(frame + 36))
#define local_a8 (*(void * *)(frame + 40))
#define local_98 (*(undefined4 *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define auStack_c0 (*(undefined1 (*)[12])(frame + 16))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba68
 */

int recovered_1000ba68(uint param_1)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  uVar2 = *(uint *)(param_1 + 0x30);
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x228U);
  local_70 = (0xf4U) + 0x1000bac0;
  recovered_1000756c(&uStack_94);
  if (uVar2 == 0) {
    uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    uStack_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    local_ac[0] = 0;
    local_a8 = (void *)0x0;
    local_98 = 0;
    local_90 = 1;
    local_b0 = (int *)(param_1 + 4);
    local_b4 = param_1;
    recovered_1000f1e8(local_b0,local_ac);
    uVar1 = *(uint *)(local_b4 + 8);
    *(uint *)(local_b4 + 0x30) = uVar1;
    uVar2 = 1;
    if (1 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar1 == 0) {
      local_90 = 2;
      local_b4 = uVar2;
      recovered_1000b3f0(local_b0,uVar2);
      uVar2 = local_b4;
    }
    iVar3 = *local_b0;
    recovered_10007024(local_a8);
    iVar3 = iVar3 + uVar2 * 0x18;
  }
  else {
    if (*(uint *)(param_1 + 8) < uVar2) {
      local_90 = 0xffffffff;
      recovered_1000b3f0((int *)(param_1 + 4),uVar2);
    }
    iVar3 = *(int *)(param_1 + 4) + uVar2 * 0x18;
  }
  recovered_10007590(&uStack_94);
  return iVar3 + -0x18;
}

#undef DAT_1000bbf8
#undef DAT_1000bbfc
#undef DAT_1001400c
#undef local_6c
#undef uStack_a4
#undef uStack_a0
#undef uStack_9c
#undef uStack_94
#undef auStack_68
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_c0
#undef local_74
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc00
 */

int recovered_1000bc00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  uVar2 = *(uint *)(param_1 + 0x30);
  iVar1 = 0;
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) + uVar2 * 0x18 + -0x18;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc30
 */

int recovered_1000bc30(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc38
 */

int recovered_1000bc38(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc40
 */

undefined4 recovered_1000bc40(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x30);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc48
 */

undefined4 recovered_1000bc48(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x1c);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc50
 */

undefined4 recovered_1000bc50(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x20);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc58
 */

undefined1 recovered_1000bc58(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined1 *)(param_1 + 0x24);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc60
 */

void recovered_1000bc60(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc6c
 */

undefined4 recovered_1000bc6c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return *(undefined4 *)(param_1 + 0x28);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc74
 */

void recovered_1000bc74(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(uint *)(param_1 + 0x28) = param_2 & 0xffffff;
  return;
}


#define local_2c (*(void * *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc80
 */

void recovered_1000bc80(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint extraout_r1 = 0;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  puVar12 = (undefined1 *)*param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  if (param_2 != 0 && puVar12 != (undefined1 *)0x0) {
    uVar13 = param_2 - (int)puVar12;
    uVar6 = 0;
    do {
      if (uVar13 == uVar6) {
        uVar6 = param_1[1] - uVar13;
        local_24 = 0;
        if (uVar1 < uVar6) {
          uVar6 = uVar1;
        }
        local_28 = 0;
        local_2c = (void *)0x0;
        recovered_1000bc80((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*param_1;
        iVar7 = param_1[1];
        iVar8 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pvVar4;
        local_28 = iVar7;
        local_24 = iVar8;
        recovered_10007024(pvVar4);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 <= (uint)param_1[1]);
  }
  param_1[1] = 0;
  if (puVar12 != (undefined1 *)0x0) {
    *puVar12 = 0;
  }
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      puVar12 = recovered_10006fcc(1);
      *param_1 = (int)puVar12;
      *puVar12 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000bd6c;
  puVar2 = recovered_10006fcc(uVar1 + 1);
  uVar13 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  uVar6 = 0;
  *(undefined1 *)puVar2 = 0;
  if (uVar13 != 0) {
    bVar14 = uVar13 == 0x10;
    uVar5 = extraout_r1;
    if (0xf < uVar13) {
      uVar5 = (int)puVar2 - (int)puVar3;
      bVar14 = uVar5 == 0xf;
    }
    if ((0xf < uVar13 && 0xe < uVar5) && !bVar14) {
      uVar6 = uVar13 & 0xfffffff0;
      uVar5 = uVar6;
      puVar9 = puVar2;
      puVar11 = puVar3;
      do {
        uVar15 = *puVar11;
        uVar16 = puVar11[1];
        puVar11 = puVar11 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar9 = uVar15;
        puVar9[1] = uVar16;
        puVar9 = puVar9 + 2;
      } while (uVar5 != 0);
      if (uVar13 == uVar6) goto LAB_1000bd50;
    }
    iVar7 = uVar13 - uVar6;
    puVar12 = (undefined1 *)((int)puVar2 + uVar6);
    puVar10 = (undefined1 *)((int)puVar3 + uVar6);
    do {
      iVar7 = iVar7 + -1;
      *puVar12 = *puVar10;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
LAB_1000bd50:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  recovered_10007024(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000bd6c:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar1 != uVar6);
  param_1[1] = param_3;
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}

#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be44
 */

int recovered_1000be44(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;

  uVar1 = param_1[1];
  if (uVar1 == param_1[2]) {
    uVar5 = uVar1 << 1;
    if (uVar1 == 0) {
      uVar5 = 4;
    }
    if (uVar1 < uVar5) {
      pvVar2 = recovered_10006fcc(uVar5 << 5);
      if (param_1[1] != 0) {
        uVar1 = 0;
        do {
          puVar3 = (undefined1 *)(*param_1 + uVar1 * 0x20);
          uVar6 = *(undefined4 *)(puVar3 + 4);
          uVar7 = *(undefined4 *)(puVar3 + 8);
          uVar9 = *(undefined4 *)(puVar3 + 0xc);
          puVar8 = (undefined1 *)((int)pvVar2 + uVar1 * 0x20);
          *puVar8 = *puVar3;
          *(undefined4 *)(puVar8 + 4) = uVar6;
          *(undefined4 *)(puVar8 + 8) = uVar7;
          *(undefined4 *)(puVar8 + 0xc) = uVar9;
          *(undefined4 *)(puVar3 + 4) = 0;
          *(undefined4 *)(puVar3 + 8) = 0;
          *(undefined4 *)(puVar3 + 0xc) = 0;
          uVar10 = *(undefined8 *)(puVar3 + 0x10);
          *(undefined8 *)(puVar8 + 0x15) = *(undefined8 *)(puVar3 + 0x15);
          *(undefined8 *)(puVar8 + 0x10) = uVar10;
          recovered_10007024((void *)0x0);
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
      }
      recovered_10007024((void *)*param_1);
      param_1[2] = uVar5;
      uVar1 = param_1[1];
      *param_1 = (int)pvVar2;
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  puVar3 = (undefined1 *)(*param_1 + uVar1 * 0x20);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 4) = uVar6;
  *(undefined4 *)(puVar3 + 8) = uVar9;
  *(undefined4 *)(puVar3 + 0xc) = uVar7;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar3 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  iVar4 = param_1[1];
  param_1[1] = iVar4 + 1;
  return *param_1 + (iVar4 + 1) * 0x20 + -0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf94
 */

int * recovered_1000bf94(int *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r2 = 0;
  uint uVar5;
  uint extraout_r2_00 = 0;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;

  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 == 0) {
    return param_1;
  }
  puVar1 = recovered_10006fcc(param_3);
  uVar3 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (uVar3 != 0) {
    bVar13 = uVar3 == 0x10;
    uVar10 = 0;
    uVar5 = extraout_r2;
    if (0xf < uVar3) {
      uVar5 = (int)puVar1 - (int)puVar2;
      bVar13 = uVar5 == 0xf;
    }
    if ((0xf < uVar3 && 0xe < uVar5) && !bVar13) {
      uVar10 = uVar3 & 0xfffffff0;
      puVar6 = puVar1;
      uVar5 = uVar10;
      puVar7 = puVar2;
      do {
        uVar14 = *puVar7;
        uVar15 = puVar7[1];
        puVar7 = puVar7 + 2;
        uVar5 = uVar5 - 0x10;
        *puVar6 = uVar14;
        puVar6[1] = uVar15;
        puVar6 = puVar6 + 2;
      } while (uVar5 != 0);
      if (uVar3 == uVar10) goto LAB_1000c038;
    }
    iVar4 = uVar3 - uVar10;
    puVar12 = (undefined1 *)((int)puVar1 + uVar10);
    puVar9 = (undefined1 *)((int)puVar2 + uVar10);
    do {
      iVar4 = iVar4 + -1;
      *puVar12 = *puVar9;
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000c038:
  recovered_10007024(puVar2);
  uVar3 = param_1[1];
  puVar12 = param_2 + param_3;
  param_1[2] = param_3;
  *param_1 = (int)puVar1;
  do {
    if (uVar3 == param_3) {
      uVar5 = param_3 << 1;
      if (param_3 == 0) {
        uVar5 = 4;
      }
      uVar3 = param_3;
      if (param_3 < uVar5) {
        puVar1 = recovered_10006fcc(uVar5);
        uVar3 = param_1[1];
        puVar2 = (undefined8 *)*param_1;
        if (uVar3 != 0) {
          bVar13 = uVar3 == 0x10;
          uVar11 = 0;
          uVar10 = extraout_r2_00;
          if (0xf < uVar3) {
            uVar10 = (int)puVar1 - (int)puVar2;
            bVar13 = uVar10 == 0xf;
          }
          if ((0xf < uVar3 && 0xe < uVar10) && !bVar13) {
            uVar11 = uVar3 & 0xfffffff0;
            puVar6 = puVar1;
            uVar10 = uVar11;
            puVar7 = puVar2;
            do {
              uVar14 = *puVar7;
              uVar15 = puVar7[1];
              puVar7 = puVar7 + 2;
              uVar10 = uVar10 - 0x10;
              *puVar6 = uVar14;
              puVar6[1] = uVar15;
              puVar6 = puVar6 + 2;
            } while (uVar10 != 0);
            if (uVar3 == uVar11) goto LAB_1000c050;
          }
          iVar4 = uVar3 - uVar11;
          puVar9 = (undefined1 *)((int)puVar1 + uVar11);
          puVar8 = (undefined1 *)((int)puVar2 + uVar11);
          do {
            iVar4 = iVar4 + -1;
            *puVar9 = *puVar8;
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar4 != 0);
        }
LAB_1000c050:
        recovered_10007024(puVar2);
        uVar3 = param_1[1];
        param_1[2] = uVar5;
        *param_1 = (int)puVar1;
        param_3 = uVar5;
      }
    }
    puVar9 = param_2 + 1;
    *(undefined1 *)((int)puVar1 + uVar3) = *param_2;
    uVar3 = uVar3 + 1;
    param_1[1] = uVar3;
    param_2 = puVar9;
    if (puVar9 == puVar12) {
      return param_1;
    }
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c120
 */

void recovered_1000c120(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define pcStack_7c (*(code * *)(frame + 52))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_70 (*(int *)(frame + 64))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c124
 */

void recovered_1000c124(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef auStack_a0
#undef uStack_94
#undef uStack_90
#undef pcStack_7c
#undef iStack_78
#undef puStack_74
#undef iStack_70
#undef puStack_6c
#undef auStack_68

#undef DAT_1000c40c
#define DAT_1000c40c (*(int *)(0x1000c40cU))
#undef DAT_1000c410
#define DAT_1000c410 (*(int *)(0x1000c410U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10014008
#define DAT_10014008 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4ce4U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define local_b0 (*(undefined1 * *)(frame + 16))
#define local_ac (*(uint *)(frame + 20))
#define local_a8 (*(int *)(frame + 24))
#define local_a4 (*(undefined1 * *)(frame + 28))
#define local_a0 (*(uint *)(frame + 32))
#define local_95 (*(undefined1 *)(frame + 43))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c128
 */

void recovered_1000c128(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  iVar6 = param_3[1];
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x230U);
  local_70 = (0x23cU) + 0x1000c184;
  recovered_1000756c(&uStack_94);
  puVar7 = DAT_10014008;
  if (iVar6 != 0) {
    iVar6 = *param_3;
    if (*(char *)(iVar6 + 0x1c) == '\x01') {
      if ((*(int *)(param_2 + 0x30) - 1U < *(uint *)(param_2 + 8)) &&
         (pcVar3 = (char *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x30) * 0x18 + -0x18),
         pcVar3 != (char *)0x0)) {
        local_90 = 0xffffffff;
        recovered_10008600((int *)&local_a4,pcVar3);
        local_ac = local_a0;
        uVar1 = DAT_10014008[5];
        local_b0 = &DAT_1000f34c;
        if (local_a4 != (undefined1 *)0x0) {
          local_b0 = local_a4;
        }
        puVar7 = DAT_10014008;
        if ((0 < (int)uVar1) && (local_a0 < uVar1)) {
          iVar6 = uVar1 - local_a0;
          do {
            puVar2 = (undefined4 *)puVar7[1];
            if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
              puVar2 = puVar7;
            }
            if ((uint *)*puVar2 != (uint *)0x0) {
              local_95 = *(undefined1 *)(puVar7 + 6);
              local_90 = 1;
              local_a8 = iVar6;
              recovered_100065c0(&local_95,1,1,(uint *)*puVar2);
              iVar6 = local_a8;
              puVar7 = DAT_10014008;
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        puVar2 = (undefined4 *)puVar7[1];
        if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
          puVar2 = puVar7;
        }
        puVar5 = (uint *)*puVar2;
        puVar7[5] = 0;
        if (local_ac != 0 && puVar5 != (uint *)0x0) {
          local_90 = 2;
          recovered_100065c0(local_b0,1,local_ac,puVar5);
        }
        recovered_10007024(local_a4);
      }
    }
    else {
      uVar9 = *(uint *)(iVar6 + 8);
      puVar2 = (undefined4 *)DAT_10014008[1];
      uVar1 = DAT_10014008[5];
      puVar8 = &DAT_1000f34c;
      if (*(undefined1 **)(iVar6 + 4) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(iVar6 + 4);
      }
      if ((0 < (int)uVar1) && (uVar9 < uVar1)) {
        iVar6 = uVar1 - uVar9;
        do {
          puVar4 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            puVar4 = puVar7;
          }
          if ((uint *)*puVar4 != (uint *)0x0) {
            local_90 = 0xffffffff;
            local_a4 = (undefined1 *)CONCAT31(PF_PART3(local_a4, 1),*(undefined1 *)(puVar7 + 6));
            recovered_100065c0(&local_a4,1,1,(uint *)*puVar4);
            puVar2 = (undefined4 *)puVar7[1];
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = puVar7;
      }
      puVar5 = (uint *)*puVar2;
      puVar7[5] = 0;
      if (uVar9 != 0 && puVar5 != (uint *)0x0) {
        local_90 = 0xffffffff;
        recovered_100065c0(puVar8,1,uVar9,puVar5);
      }
    }
  }
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000c40c
#undef DAT_1000c410
#undef DAT_1000f34c
#undef DAT_10014008
#undef DAT_1001400c
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_95
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94
#undef auStack_68

#undef DAT_10014018
#define DAT_10014018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cf4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c414
 */

void recovered_1000c414(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014018;
  return;
}

#undef DAT_10014018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c43c
 */

void recovered_1000c43c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c440
 */

void recovered_1000c440(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_10014008
#define DAT_10014008 (*(int * *)(((uintptr_t)pf_module_state + 0x4ce4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c444
 */

void recovered_1000c444(undefined4 param_1,int param_2,int *param_3)

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
    variable = (void *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x30) * 0x18 + -0x18);
    if (variable == (void *)0x0) {
      return;
    }
    lVar1 = recovered_1000880c(variable);
  }
  else {
    lVar1 = *(longlong *)(*param_3 + 0x10);
  }
  recovered_1000c4e8(DAT_10014008,(uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20));
  return;
}

#undef DAT_10014008

#undef DAT_10014044
#define DAT_10014044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d20U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4c0
 */

void recovered_1000c4c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014044;
  return;
}

#undef DAT_10014044

#undef DAT_1000c888
#define DAT_1000c888 (*(int *)(0x1000c888U))
#undef DAT_1000c88c
#define DAT_1000c88c (*(int *)(0x1000c88cU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define local_110 (*(int *)(frame + 32))
#define local_10c (*(undefined1 * *)(frame + 36))
#define local_108 (*(uint *)(frame + 40))
#define local_104 (*(undefined4 *)(frame + 44))
#define local_fd (*(undefined8 *)(frame + 51))
#define local_dd (*(byte (*)[65])(frame + 83))
#define local_9c (*(undefined1 * *)(frame + 148))
#define local_98 (*(undefined1 * *)(frame + 152))
#define local_90 (*(undefined4 *)(frame + 160))
#define local_7c (*(undefined4 *)(frame + 180))
#define local_78 (*(int *)(frame + 184))
#define local_74 (*(undefined1 * *)(frame + 188))
#define local_70 (*(int *)(frame + 192))
#define local_6c (*(undefined1 * *)(frame + 196))
#define auStack_120 (*(undefined1 (*)[4])(frame + 16))
#define uStack_ed (*(undefined8 *)(frame + 67))
#define uStack_f5 (*(undefined8 *)(frame + 59))
#define uStack_e5 (*(undefined8 *)(frame + 75))
#define uStack_94 (*(undefined4 *)(frame + 156))
#define auStack_68 (*(undefined1 (*)[8])(frame + 200))
#define local_11c (*(uint *)(frame + 20))
#define local_118 (*(int * *)(frame + 24))
#define local_114 (*(int * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4e8
 */

int * recovered_1000c4e8(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  uint128 auVar17;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_120;
  iVar15 = param_1[3];
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x238U);
  local_70 = (0x2e4U) + 0x1000c548;
  recovered_1000756c(&uStack_94);
  local_114 = param_1;
  if (iVar15 != 10) {
    local_90 = 0xffffffff;
    piVar6 = recovered_1000c890(param_1,param_2,param_3);
    recovered_10007590(&uStack_94);
    return piVar6;
  }
  uVar7 = (int)param_3 >> 0x1f;
  uVar11 = 0;
  uVar12 = (param_2 ^ uVar7) - uVar7;
  uVar7 = (param_3 ^ uVar7) - (uVar7 + ((param_2 ^ uVar7) < uVar7));
  do {
    uVar10 = uVar11;
    uVar4 = uVar12 >> 1 | uVar7 << 0x1f;
    uVar9 = uVar4 + (uVar7 >> 1) + (uint)CARRY4(uVar4,uVar7 >> 1);
    uVar9 = uVar9 - (((uint)((ulonglong)uVar9 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar9 / 5);
    uVar5 = uVar4 - uVar9;
    lVar1 = (ulonglong)uVar5 * 0xcccccccd;
    bVar16 = uVar12 < 10;
    uVar2 = -uVar7;
    local_dd[uVar10] = (char)uVar12 + (char)lVar1 * -10 | 0x30;
    uVar11 = uVar10 + 1;
    uVar12 = (uint)lVar1;
    uVar7 = ((uVar7 >> 1) - (uint)(uVar4 < uVar9)) * -0x33333333 +
            uVar5 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
  } while (bVar16 <= uVar2);
  if ((int)param_3 < 0) {
    local_dd[uVar10 + 1] = 0x2d;
    uVar11 = uVar10 + 2;
  }
  if (0x20 < uVar11) {
    local_11c = 0;
    local_9c = (undefined1 *)0x0;
    goto LAB_1000c6ec;
  }
  if (uVar11 != 0) {
    uVar7 = 0;
    if (0xf < uVar11) {
      uVar7 = uVar11 & 0x30;
      auVar17 = vrev(*(uint128 *)(local_dd + (uVar11 - 0x10)),1);
      local_fd = PF_PART8(auVar17, 8);
      uStack_f5 = PF_PART8(auVar17, 0);
      if (uVar7 != 0x10) {
        auVar17 = vrev(*(uint128 *)(local_dd + (uVar11 - 0x20)),1);
        uStack_ed = PF_PART8(auVar17, 8);
        uStack_e5 = PF_PART8(auVar17, 0);
      }
      if (uVar11 == uVar7) goto LAB_1000c6c0;
    }
    iVar15 = uVar11 - uVar7;
    pbVar13 = local_dd + (uVar7 - 0x20);
    do {
      iVar3 = iVar15 + -1;
      iVar15 = iVar15 + -1;
      *pbVar13 = local_dd[iVar3];
      pbVar13 = pbVar13 + 1;
    } while (iVar15 != 0);
  }
LAB_1000c6c0:
  local_104 = 0;
  local_108 = 0;
  local_10c = (undefined1 *)0x0;
  local_90 = 0xffffffff;
  recovered_1000bc80((int *)&local_10c,(int)&local_fd,uVar11);
  local_11c = local_108;
  local_9c = local_10c;
LAB_1000c6ec:
  local_104 = 0;
  local_108 = 0;
  local_10c = (undefined1 *)0x0;
  recovered_10007024((void *)0x0);
  local_118 = param_1;
  if (local_9c == (undefined1 *)0x0) {
    local_90 = 1;
    local_98 = (undefined1 *)0x0;
    local_9c = recovered_10006fcc(1);
    *local_9c = 0;
  }
  uVar7 = local_118[5];
  piVar6 = local_118;
  if ((0 < (int)uVar7) && (local_11c < uVar7)) {
    iVar15 = uVar7 - local_11c;
    do {
      piVar8 = (int *)piVar6[1];
      if ((int *)piVar6[1] == (int *)0x0) {
        piVar8 = local_114;
      }
      if ((uint *)*piVar8 != (uint *)0x0) {
        local_dd[0] = *(byte *)(piVar6 + 6);
        local_90 = 2;
        local_110 = iVar15;
        recovered_100065c0(local_dd,1,1,(uint *)*piVar8);
        iVar15 = local_110;
        piVar6 = local_118;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  piVar8 = local_114;
  if ((int *)piVar6[1] != (int *)0x0) {
    piVar8 = (int *)piVar6[1];
  }
  puVar14 = (uint *)*piVar8;
  piVar6[5] = 0;
  if (local_11c != 0 && puVar14 != (uint *)0x0) {
    local_98 = local_9c;
    local_90 = 3;
    recovered_100065c0(local_9c,1,local_11c,puVar14);
    piVar6 = local_118;
  }
  recovered_10007024(local_9c);
  recovered_10007590(&uStack_94);
  return piVar6;
}

#undef DAT_1000c888
#undef DAT_1000c88c
#undef DAT_1001400c
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_fd
#undef local_dd
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_120
#undef uStack_ed
#undef uStack_f5
#undef uStack_e5
#undef uStack_94
#undef auStack_68
#undef local_11c
#undef local_118
#undef local_114

#undef DAT_1000cdd8
#define DAT_1000cdd8 (*(int *)(0x1000cdd8U))
#undef DAT_1000cddc
#define DAT_1000cddc (*(int *)(0x1000cddcU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#undef str_1000f354
#define str_1000f354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000f365
#define str_1000f365 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_128 (*(uint *)(frame + 24))
#define local_124 (*(uint *)(frame + 28))
#define local_120 (*(int * *)(frame + 32))
#define local_11c (*(uint *)(frame + 36))
#define local_118 (*(int * *)(frame + 40))
#define local_114 (*(int *)(frame + 44))
#define local_110 (*(undefined4 * *)(frame + 48))
#define local_10c (*(uint *)(frame + 52))
#define local_108 (*(undefined4 *)(frame + 56))
#define local_101 (*(byte (*)[8])(frame + 63))
#define local_a0 (*(undefined4 * *)(frame + 160))
#define local_9c (*(undefined4 * *)(frame + 164))
#define local_98 (*(undefined4 * *)(frame + 168))
#define local_90 (*(undefined4 *)(frame + 176))
#define local_7c (*(undefined4 *)(frame + 196))
#define local_78 (*(int *)(frame + 200))
#define local_74 (*(undefined1 * *)(frame + 204))
#define local_70 (*(int *)(frame + 208))
#define local_6c (*(undefined1 * *)(frame + 212))
#define auStack_130 (*(undefined1 (*)[8])(frame + 16))
#define auStack_f9 (*(undefined8 (*)[2])(frame + 71))
#define abStack_e2 (*(byte (*)[66])(frame + 94))
#define uStack_94 (*(undefined4 *)(frame + 172))
#define auStack_68 (*(undefined1 (*)[8])(frame + 216))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c890
 */

int * recovered_1000c890(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint128 *pauVar14;
  uint *puVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  char *pcVar22;
  bool bVar23;
  uint128 auVar24;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_130;
  iVar20 = param_1[3];
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x244U);
  local_70 = (0x460U) + 0x1000c8f0;
  recovered_1000756c(&uStack_94);
  local_120 = param_1;
  local_118 = param_1;
  if (iVar20 != 10) {
    pcVar22 = str_1000f365;
    uVar8 = 4;
    if ((char)param_1[4] != '\0') {
      pcVar22 = str_1000f354;
    }
    uVar12 = 0xf;
    if (iVar20 == 8) {
      uVar8 = 3;
      uVar12 = 7;
    }
    iVar20 = 0;
    do {
      abStack_e2[iVar20 + 1] = pcVar22[param_2 & uVar12];
      param_2 = param_2 >> uVar8 | (param_3 << 1) << (uVar8 ^ 0x1f);
      iVar20 = iVar20 + 1;
      uVar6 = param_3 >> uVar8;
      param_3 = param_3 >> uVar8;
    } while (param_2 != 0 || uVar6 != 0);
    if (iVar20 == 0) {
      local_11c = 0;
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
      local_11c = 0;
      uVar8 = 0;
      do {
        iVar19 = iVar20 + -1;
        local_a0 = puVar7;
        bVar17 = abStack_e2[iVar20];
        if (local_11c == uVar8) {
          uVar12 = local_11c << 1;
          if (local_11c == 0) {
            uVar12 = 0x10;
          }
          if (uVar12 <= local_11c) goto LAB_1000cafc;
          local_90 = 2;
          local_128 = uVar12;
          local_124 = (uint)bVar17;
          local_114 = iVar19;
          puVar7 = recovered_10006fcc(uVar12 | 1);
          *(undefined1 *)puVar7 = 0;
          if (local_11c != 0) {
            bVar23 = local_11c == 0x10;
            uVar8 = 0;
            puVar10 = local_a0;
            if (local_11c >= 0x10) {
              puVar10 = (undefined4 *)((int)puVar7 - (int)local_a0);
              bVar23 = puVar10 == (undefined4 *)0xf;
            }
            if ((local_11c < 0x10 || puVar10 < (undefined4 *)0xf) || bVar23) goto LAB_1000cb44;
            uVar12 = local_11c & 0xfffffff0;
            uVar8 = local_11c & 0xfffffff0;
            puVar10 = local_a0;
            puVar13 = puVar7;
            do {
              uVar2 = *puVar10;
              uVar3 = puVar10[1];
              uVar4 = puVar10[2];
              uVar5 = puVar10[3];
              puVar10 = puVar10 + 4;
              uVar12 = uVar12 - 0x10;
              *puVar13 = uVar2;
              puVar13[1] = uVar3;
              puVar13[2] = uVar4;
              puVar13[3] = uVar5;
              puVar13 = puVar13 + 4;
            } while (uVar12 != 0);
            for (; local_11c != uVar8; uVar8 = uVar8 + 1) {
LAB_1000cb44:
              *(undefined1 *)((int)puVar7 + uVar8) = *(undefined1 *)((int)local_a0 + uVar8);
            }
          }
          *(undefined1 *)((int)puVar7 + local_11c) = 0;
          recovered_10007024(local_a0);
          uVar8 = local_128;
LAB_1000ca40:
          bVar17 = (byte)local_124;
          iVar19 = local_114;
        }
        else {
LAB_1000cafc:
          if (puVar7 == (undefined4 *)0x0) {
            local_90 = 3;
            local_124 = (uint)bVar17;
            local_114 = iVar19;
            puVar7 = recovered_10006fcc(1);
            uVar8 = 0;
            *(undefined1 *)puVar7 = 0;
            goto LAB_1000ca40;
          }
        }
        *(byte *)((int)puVar7 + local_11c) = bVar17;
        local_11c = local_11c + 1;
        *(undefined1 *)((int)puVar7 + local_11c) = 0;
        iVar20 = iVar19;
      } while (iVar19 != 0);
    }
    goto LAB_1000cc28;
  }
  iVar20 = 0;
  pbVar21 = abStack_e2;
  do {
    pbVar16 = pbVar21;
    iVar20 = iVar20 + -1;
    uVar18 = param_2 >> 1 | param_3 << 0x1f;
    uVar12 = uVar18 + (param_3 >> 1) + (uint)CARRY4(uVar18,param_3 >> 1);
    uVar12 = uVar12 - (((uint)((ulonglong)uVar12 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar12 / 5);
    uVar6 = uVar18 - uVar12;
    lVar1 = (ulonglong)uVar6 * 0xcccccccd;
    pbVar21 = pbVar16 + 1;
    *pbVar21 = (char)param_2 + (char)lVar1 * -10 | 0x30;
    bVar23 = param_2 < 10;
    uVar8 = -param_3;
    param_3 = ((param_3 >> 1) - (uint)(uVar18 < uVar12)) * -0x33333333 +
              uVar6 * -0x33333334 + (int)((ulonglong)lVar1 >> 0x20);
    param_2 = (uint)lVar1;
  } while (bVar23 <= uVar8);
  uVar8 = -iVar20;
  if (uVar8 < 0x20 || iVar20 == -0x20) {
    if (iVar20 != 0) {
      if (uVar8 >> 4 == 0) {
        uVar12 = 0;
      }
      else {
        iVar19 = (uVar8 >> 4) << 4;
        pauVar14 = (uint128 *)(pbVar16 + -0xe);
        uVar12 = uVar8 & 0xfffffff0;
        pbVar16 = local_101;
        do {
          auVar24 = *pauVar14;
          pauVar14 = pauVar14 + -1;
          iVar19 = iVar19 + -0x10;
          auVar24 = vrev(auVar24,1);
          *(longlong *)pbVar16 = PF_PART8(auVar24, 8);
          *(longlong *)(pbVar16 + 8) = PF_PART8(auVar24, 0);
          pbVar16 = pbVar16 + 0x10;
        } while (iVar19 != 0);
        if (-uVar12 == iVar20) goto LAB_1000cbd4;
      }
      do {
        local_101[uVar12] = pbVar21[-uVar12];
        uVar12 = uVar12 + 1;
      } while (-uVar12 != iVar20);
    }
LAB_1000cbd4:
    local_108 = 0;
    local_10c = 0;
    local_110 = (undefined4 *)0x0;
    local_90 = 1;
    recovered_1000bc80((int *)&local_110,(int)local_101,uVar8);
    local_11c = local_10c;
    puVar7 = local_110;
  }
  else {
    local_11c = 0;
    puVar7 = (undefined4 *)0x0;
  }
  local_108 = 0;
  local_10c = 0;
  local_110 = (undefined4 *)0x0;
  recovered_10007024((void *)0x0);
  recovered_10007024((void *)0x0);
  recovered_10007024((void *)0x0);
LAB_1000cc28:
  if (puVar7 == (undefined4 *)0x0) {
    local_90 = 4;
    local_98 = (undefined4 *)0x0;
    puVar7 = recovered_10006fcc(1);
    *(undefined1 *)puVar7 = 0;
  }
  uVar8 = local_120[5];
  piVar11 = local_120;
  local_9c = puVar7;
  if ((0 < (int)uVar8) && (local_11c < uVar8)) {
    iVar20 = uVar8 - local_11c;
    do {
      piVar9 = (int *)piVar11[1];
      if ((int *)piVar11[1] == (int *)0x0) {
        piVar9 = local_118;
      }
      if ((uint *)*piVar9 != (uint *)0x0) {
        abStack_e2[1] = (byte)piVar11[6];
        local_90 = 5;
        local_114 = iVar20;
        recovered_100065c0(abStack_e2 + 1,1,1,(uint *)*piVar9);
        piVar11 = local_120;
        iVar20 = local_114;
      }
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  piVar9 = local_118;
  if ((int *)piVar11[1] != (int *)0x0) {
    piVar9 = (int *)piVar11[1];
  }
  puVar15 = (uint *)*piVar9;
  piVar11[5] = 0;
  if (local_11c != 0 && puVar15 != (uint *)0x0) {
    local_98 = local_9c;
    local_90 = 6;
    recovered_100065c0(local_9c,1,local_11c,puVar15);
  }
  recovered_10007024(local_9c);
  recovered_10007590(&uStack_94);
  return local_120;
}

#undef DAT_1000cdd8
#undef DAT_1000cddc
#undef DAT_1001400c
#undef str_1000f354
#undef str_1000f365
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_114
#undef local_110
#undef local_10c
#undef local_108
#undef local_101
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_130
#undef auStack_f9
#undef abStack_e2
#undef uStack_94
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cde0
 */

void recovered_1000cde0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cde4
 */

void recovered_1000cde4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_1c (*(undefined4 *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cde8
 */

void recovered_1000cde8(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;

  piVar3 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(*param_3 + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar1;
  if (*(uint *)(param_2 + 8) < uVar1) {
    recovered_1000b3f0(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar1 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000ce68;
  }
  else if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000ce68;
  recovered_1000b3f0(piVar3,uVar1);
LAB_1000ce68:
  iVar2 = *piVar3 + uVar1 * 0x18;
  recovered_10008600((int *)&local_24,(char *)(iVar2 + -0x18));
  *(undefined1 *)(iVar2 + -0x18) = 1;
  if ((void **)(iVar2 + -0x14) != &local_24) {
    recovered_10007024(*(void **)(iVar2 + -0x14));
    *(void **)(iVar2 + -0x14) = local_24;
    *(undefined4 *)(iVar2 + -0x10) = local_20;
    *(undefined4 *)(iVar2 + -0xc) = local_1c;
    local_20 = 0;
    local_1c = 0;
    local_24 = (void *)0x0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  recovered_10007024(local_24);
  return;
}

#undef local_24
#undef local_20
#undef local_1c

#undef DAT_10014068
#define DAT_10014068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d44U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cee4
 */

void recovered_1000cee4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014068;
  return;
}

#undef DAT_10014068

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf0c
 */

void recovered_1000cf0c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf10
 */

void recovered_1000cf10(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf14
 */

void recovered_1000cf14(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;

  piVar3 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(*param_3 + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar1;
  if (*(uint *)(param_2 + 8) < uVar1) {
    recovered_1000b3f0(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar1 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000cf90;
  }
  else if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000cf90;
  recovered_1000b3f0(piVar3,uVar1);
LAB_1000cf90:
  iVar2 = *piVar3 + uVar1 * 0x18;
  lVar4 = recovered_1000880c((void *)(iVar2 + -0x18));
  *(int *)(iVar2 + -8) = (int)lVar4;
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(int *)(iVar2 + -4) = (int)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(iVar2 + -0x10) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef DAT_1001408c
#define DAT_1001408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cfd0
 */

void recovered_1000cfd0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_1001408c;
  return;
}

#undef DAT_1001408c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cff8
 */

void recovered_1000cff8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cffc
 */

void recovered_1000cffc(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000d1c4
#define DAT_1000d1c4 (*(int *)(0x1000d1c4U))
#undef DAT_1000d1c8
#define DAT_1000d1c8 (*(int *)(0x1000d1c8U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_a4 (*(undefined4 *)(frame + 28))
#define uStack_a0 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d000
 */

void recovered_1000d000(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  iVar4 = *(int *)(param_2 + 0x30);
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x254U);
  local_70 = (0x124U) + 0x1000d05c;
  recovered_1000756c(&uStack_94);
  if (iVar4 == 0) {
    uStack_a4 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    uStack_a0 = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_9c = *(undefined4 *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    puVar1 = (undefined1 *)*param_3;
    local_a8 = (void *)0x0;
    local_98 = 0;
    local_ac[0] = 1;
    local_b0 = param_2;
    if (local_ac != puVar1) {
      local_90 = 1;
      puVar2 = &DAT_1000f34c;
      if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar1 + 4);
      }
      recovered_1000bc80((int *)&local_a8,(int)puVar2,*(uint *)(puVar1 + 8));
    }
    local_98 = 0;
    local_9c = 0;
    local_90 = 2;
    recovered_1000f1e8((int *)(local_b0 + 4),local_ac);
    *(undefined4 *)(local_b0 + 0x30) = *(undefined4 *)(local_b0 + 8);
    recovered_10007024(local_a8);
  }
  else {
    local_90 = 0xffffffff;
    puVar1 = (undefined1 *)recovered_1000ba68(param_2);
    puVar2 = (undefined1 *)*param_3;
    *puVar1 = 1;
    if (puVar1 != puVar2) {
      puVar3 = &DAT_1000f34c;
      if (*(undefined1 **)(puVar2 + 4) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(puVar2 + 4);
      }
      local_90 = 0xffffffff;
      recovered_1000bc80((int *)(puVar1 + 4),(int)puVar3,*(uint *)(puVar2 + 8));
    }
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000d1c4
#undef DAT_1000d1c8
#undef DAT_1000f34c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_a4
#undef uStack_a0
#undef uStack_94

#undef DAT_100140b0
#define DAT_100140b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1cc
 */

void recovered_1000d1cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100140b0;
  return;
}

#undef DAT_100140b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1f4
 */

void recovered_1000d1f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1f8
 */

void recovered_1000d1f8(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000d368
#define DAT_1000d368 (*(int *)(0x1000d368U))
#undef DAT_1000d36c
#define DAT_1000d36c (*(int *)(0x1000d36cU))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(void * *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1fc
 */

void recovered_1000d1fc(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  iVar3 = *(int *)(param_2 + 0x30);
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x25cU);
  local_70 = (0xd0U) + 0x1000d258;
  recovered_1000756c(&uStack_94);
  if (iVar3 == 0) {
    local_9c = *(undefined4 *)(*param_3 + 0x10);
    local_98 = *(undefined4 *)(*param_3 + 0x14);
    local_90 = 1;
    local_a4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_ac[0] = 2;
    local_b0 = param_2;
    recovered_1000f1e8((int *)(param_2 + 4),local_ac);
    *(undefined4 *)(local_b0 + 0x30) = *(undefined4 *)(local_b0 + 8);
    recovered_10007024(local_a8);
  }
  else {
    local_90 = 0xffffffff;
    puVar1 = (undefined1 *)recovered_1000ba68(param_2);
    iVar3 = *param_3;
    *puVar1 = 2;
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    uVar4 = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = uVar4;
    *(undefined4 *)(puVar1 + 0x10) = uVar2;
    if (*(undefined1 **)(puVar1 + 4) != (undefined1 *)0x0) {
      **(undefined1 **)(puVar1 + 4) = 0;
    }
  }
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000d368
#undef DAT_1000d36c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c

#undef DAT_100140d4
#define DAT_100140d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4db0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d370
 */

void recovered_1000d370(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100140d4;
  return;
}

#undef DAT_100140d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d398
 */

void recovered_1000d398(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d39c
 */

void recovered_1000d39c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000d5b0
#define DAT_1000d5b0 (*(int *)(0x1000d5b0U))
#undef DAT_1000d5b4
#define DAT_1000d5b4 (*(int *)(0x1000d5b4U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(undefined1 * *)(frame + 16))
#define local_ac (*(undefined1 (*)[4])(frame + 20))
#define local_a8 (*(undefined1 * *)(frame + 24))
#define local_a4 (*(uint *)(frame + 28))
#define local_a0 (*(undefined4 *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
#define uStack_94 (*(undefined4 *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3a0
 */

void recovered_1000d3a0(undefined4 param_1,undefined1 *param_2,int *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uVar5 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(*param_3 + 0x18);
  local_78 = ((uintptr_t)pf_module_state + 0x264U);
  local_7c = DAT_1001400c;
  local_70 = (0x168U) + 0x1000d400;
  recovered_1000756c(&uStack_94);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  if (uVar5 < uVar3) {
    local_90 = 0xffffffff;
    recovered_1000b3f0((int *)(param_2 + 4),uVar3);
  }
  iVar4 = *(int *)(param_2 + 4) + uVar3 * 0x18;
  local_a8 = (undefined1 *)0x0;
  puVar1 = *(undefined1 **)(iVar4 + -0x14);
  local_a4 = 0;
  local_a0 = 0;
  local_ac[0] = *(undefined1 *)(iVar4 + -0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_1000f34c;
  }
  local_90 = 0xffffffff;
  recovered_1000bc80((int *)&local_a8,(int)puVar1,*(uint *)(iVar4 + -0x10));
  local_9c = *(undefined4 *)(iVar4 + -8);
  local_98 = *(undefined4 *)(iVar4 + -4);
  if (*(int *)(param_2 + 0x30) == 0) {
    local_90 = 1;
    local_b0 = param_2;
    recovered_1000f08c((int *)(param_2 + 4),local_ac);
    *(undefined4 *)(local_b0 + 0x30) = *(undefined4 *)(local_b0 + 8);
  }
  else {
    local_90 = 2;
    puVar1 = (undefined1 *)recovered_1000ba68((uint)param_2);
    *puVar1 = local_ac[0];
    if (puVar1 != local_ac) {
      local_90 = 3;
      puVar2 = &DAT_1000f34c;
      if (local_a8 != (undefined1 *)0x0) {
        puVar2 = local_a8;
      }
      local_b0 = puVar1;
      recovered_1000bc80((int *)(puVar1 + 4),(int)puVar2,local_a4);
      puVar1 = local_b0;
    }
    *(undefined4 *)(puVar1 + 0x14) = local_98;
    *(undefined4 *)(puVar1 + 0x10) = local_9c;
  }
  recovered_10007024(local_a8);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000d5b0
#undef DAT_1000d5b4
#undef DAT_1000f34c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_94

#undef DAT_100140f8
#define DAT_100140f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4dd4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5b8
 */

void recovered_1000d5b8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100140f8;
  return;
}

#undef DAT_100140f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5e0
 */

void recovered_1000d5e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5e4
 */

void recovered_1000d5e4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d5e8
 */

void recovered_1000d5e8(undefined4 param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar2;
  undefined1 uVar1;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  iVar9 = *param_3;
  puVar4 = (uint *)*param_2;
  uVar6 = *(uint *)(iVar9 + 0x30);
  iVar7 = *(int *)(iVar9 + 0x34);
  uVar8 = *(uint *)(iVar9 + 0x10);
  iVar11 = *(int *)(iVar9 + 0x14);
  if ((int)(-1 - (iVar7 + (uint)(0x80000000 < uVar6))) < 0 ==
      (SBORROW4(-1,iVar7) != SBORROW4(-1 - iVar7,(uint)(0x80000000 < uVar6)))) {
    iVar7 = -1;
    uVar6 = 0x80000000;
  }
  if ((int)(uint)(uVar6 < 0x7fffffff) <= iVar7) {
    uVar6 = 0x7fffffff;
  }
  uVar3 = 0x80000000;
  iVar7 = -1;
  if ((int)(-1 - (iVar11 + (uint)(0x80000000 < uVar8))) < 0 !=
      (SBORROW4(-1,iVar11) != SBORROW4(-1 - iVar11,(uint)(0x80000000 < uVar8)))) {
    uVar3 = uVar8;
    iVar7 = iVar11;
  }
  if ((int)(uint)(uVar3 < 0x7fffffff) <= iVar7) {
    uVar3 = 0x7fffffff;
  }
  if (puVar4 != (uint *)0x0) {
    uVar8 = puVar4[2];
  }
  if ((((puVar4 != (uint *)0x0 && uVar8 != 0) && (uVar5 = *puVar4, 0 < (int)uVar5)) &&
      (uVar6 <= puVar4[1] && uVar3 <= uVar5)) && (0 < (int)uVar6)) {
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      uVar10 = puVar4[1];
    }
    if (0 < (int)uVar10) {
      uVar10 = *(uint *)(iVar9 + 0x50);
      iVar7 = uVar5 * (uVar6 - 1) + uVar3;
      iVar9 = iVar7 * 4 + -3;
      iVar7 = iVar7 * 4 + -4;
      uVar1 = (undefined1)(uVar10 >> 8);
      uVar2 = (undefined1)(uVar10 >> 0x10);
      if ((uVar10 & 0xff000000) == 0) {
        *(undefined1 *)(uVar8 + iVar7) = uVar2;
        *(undefined1 *)(puVar4[2] + iVar9) = uVar1;
        *(char *)(puVar4[2] + iVar7 + 2) = (char)uVar10;
        uVar10 = 0xff;
      }
      else {
        *(char *)(uVar8 + iVar7) = (char)(uVar10 >> 0x18);
        *(undefined1 *)(puVar4[2] + iVar9) = uVar2;
        *(undefined1 *)(puVar4[2] + iVar7 + 2) = uVar1;
      }
      *(char *)(puVar4[2] + iVar7 + 3) = (char)uVar10;
      return;
    }
  }
  return;
}


#undef DAT_1001411c
#define DAT_1001411c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4df8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d734
 */

void recovered_1000d734(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_1001411c;
  return;
}

#undef DAT_1001411c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d75c
 */

void recovered_1000d75c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d760
 */

void recovered_1000d760(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000dcac
#define DAT_1000dcac (*(int *)(0x1000dcacU))
#undef DAT_1000dcb0
#define DAT_1000dcb0 (*(int *)(0x1000dcb0U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#define local_a8 (*(byte * *)(frame + 40))
#define local_a4 (*(uint *)(frame + 44))
#define local_a0 (*(byte * *)(frame + 48))
#define local_9c (*(byte * *)(frame + 52))
#define local_98 (*(char * *)(frame + 56))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
#define auStack_c0 (*(undefined1 (*)[8])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_b8 (*(int * *)(frame + 24))
#define local_b4 (*(undefined4 * *)(frame + 28))
#define local_b0 (*(byte * *)(frame + 32))
#define local_ac (*(char * *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d764
 */

void recovered_1000d764(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint extraout_r1 = 0;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_c0;
  pbVar12 = (byte *)*param_3;
  local_7c = DAT_1001400c;
  local_78 = ((uintptr_t)pf_module_state + 0x270U);
  pbVar16 = *(byte **)(pbVar12 + 0x48);
  local_70 = (0x490U) + 0x1000d7c0;
  recovered_1000756c(&uStack_94);
  if (pbVar16 == (byte *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    local_90 = 1;
    local_b8 = param_3;
    local_b4 = param_2;
    local_a0 = pbVar16;
    local_9c = pbVar12;
    pcVar3 = recovered_10006fcc((ulong)(pbVar16 + 1));
    *pcVar3 = '\0';
    recovered_10007024((void *)0x0);
    pbVar12 = &DAT_1000f34c;
    if (*(byte **)(local_9c + 0x44) != (byte *)0x0) {
      pbVar12 = *(byte **)(local_9c + 0x44);
    }
    if (*(int *)(local_9c + 0x48) != 0) {
      pbVar5 = pbVar12 + *(int *)(local_9c + 0x48);
      pbVar16 = (byte *)0x0;
      pbVar6 = local_a0;
      local_a8 = pbVar5;
      do {
        bVar13 = *pbVar12;
        uVar14 = (uint)bVar13;
        if ((0x1a < uVar14 - 9) || ((1 << (uVar14 - 9 & 0xff) & 0x4800013U) == 0)) {
          if (pbVar16 == pbVar6) {
            pbVar17 = (byte *)((int)pbVar16 << 1);
            if (pbVar16 == (byte *)0x0) {
              pbVar17 = &DataAbort;
            }
            if (pbVar17 <= pbVar16) goto LAB_1000d854;
            local_90 = 2;
            local_b0 = pbVar17;
            local_ac = pcVar3;
            local_a4 = uVar14;
            local_a0 = pbVar12;
            local_9c = pbVar16;
            local_98 = pcVar3;
            pcVar3 = recovered_10006fcc((uint)pbVar17 | 1);
            pbVar16 = local_9c;
            *pcVar3 = '\0';
            if (local_9c != (byte *)0x0) {
              bVar21 = local_9c == &DataAbort;
              pbVar12 = (byte *)0x0;
              uVar14 = extraout_r1;
              if ((byte *)0xf < local_9c) {
                uVar14 = (int)pcVar3 - (int)local_ac;
                bVar21 = uVar14 == 0xf;
              }
              if (((byte *)0xf < local_9c && 0xe < uVar14) && !bVar21) {
                pbVar12 = (byte *)((uint)local_9c & 0xfffffff0);
                pbVar6 = pbVar12;
                pcVar10 = pcVar3;
                pcVar9 = local_ac;
                do {
                  uVar22 = *(undefined8 *)pcVar9;
                  uVar23 = *(undefined8 *)(pcVar9 + 8);
                  pcVar9 = pcVar9 + 0x10;
                  pbVar6 = pbVar6 + -0x10;
                  *(undefined8 *)pcVar10 = uVar22;
                  *(undefined8 *)(pcVar10 + 8) = uVar23;
                  pcVar10 = pcVar10 + 0x10;
                } while (pbVar6 != (byte *)0x0);
                if (local_9c == pbVar12) goto LAB_1000d95c;
              }
              iVar4 = (int)local_9c - (int)pbVar12;
              pcVar10 = local_ac + (int)pbVar12;
              pcVar9 = pcVar3 + (int)pbVar12;
              do {
                iVar4 = iVar4 + -1;
                *pcVar9 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar9 = pcVar9 + 1;
              } while (iVar4 != 0);
            }
LAB_1000d95c:
            pcVar3[(int)local_9c] = '\0';
            recovered_10007024(local_ac);
            bVar13 = (byte)local_a4;
            pbVar6 = local_b0;
            pbVar5 = local_a8;
            pbVar12 = local_a0;
          }
          else {
LAB_1000d854:
            if (pcVar3 == (char *)0x0) {
              local_90 = 3;
              local_98 = (char *)0x0;
              local_a4 = uVar14;
              local_a0 = pbVar12;
              local_9c = pbVar16;
              pcVar3 = recovered_10006fcc(1);
              pbVar6 = (byte *)0x0;
              bVar13 = (byte)local_a4;
              *pcVar3 = '\0';
              pbVar5 = local_a8;
              pbVar12 = local_a0;
              pbVar16 = local_9c;
            }
          }
          pcVar3[(int)pbVar16] = bVar13;
          pbVar16 = pbVar16 + 1;
          pcVar3[(int)pbVar16] = '\0';
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != pbVar5);
      if ((byte *)0x1 < pbVar16) {
        if ((*pcVar3 == '0') && ((byte)(pcVar3[1] | 0x20U) == 0x78)) {
          pbVar12 = pbVar16 + -2;
          if (pbVar12 != (byte *)0x0) {
            pbVar6 = (byte *)0x0;
            if ((byte *)0xf < pbVar12) {
              pbVar6 = (byte *)((uint)pbVar12 & 0xfffffff0);
              pbVar5 = pbVar6;
              pcVar10 = pcVar3;
              do {
                pbVar5 = pbVar5 + -0x10;
                *(undefined8 *)pcVar10 = *(undefined8 *)(pcVar10 + 2);
                *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar10 + 10);
                pcVar10 = pcVar10 + 0x10;
              } while (pbVar5 != (byte *)0x0);
              if (pbVar12 == pbVar6) goto LAB_1000da5c;
            }
            pbVar5 = pbVar6 + (int)pcVar3 + 2;
            pbVar16 = pbVar16 + (-2 - (int)pbVar6);
            do {
              pbVar16 = pbVar16 + -1;
              pbVar5[-2] = *pbVar5;
              pbVar5 = pbVar5 + 1;
            } while (pbVar16 != (byte *)0x0);
          }
LAB_1000da5c:
          pcVar3[(int)pbVar12] = '\0';
          pbVar16 = pbVar12;
        }
        if (pbVar16 == (byte *)0x6 || pbVar16 == &SupervisorCall) {
          pbVar12 = (byte *)0x0;
          uVar14 = 0;
          do {
            uVar15 = uVar14;
            cVar1 = pcVar3[(int)pbVar12];
            bVar13 = cVar1 - 0x30;
            if (9 < (byte)(cVar1 - 0x30U)) {
              if ((byte)(cVar1 + 0x9fU) < 6) {
                bVar13 = cVar1 + 0xa9;
              }
              else {
                if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000dae8;
                bVar13 = cVar1 - 0x37;
              }
            }
            pbVar12 = pbVar12 + 1;
            uVar14 = (uint)bVar13 | uVar15 << 4;
          } while (pbVar16 != pbVar12);
          recovered_10007024(pcVar3);
          iVar4 = *local_b8;
          uVar19 = *(uint *)(iVar4 + 0x30);
          uVar11 = *(uint *)(iVar4 + 0x34);
          uVar20 = *(uint *)(iVar4 + 0x10);
          iVar4 = *(int *)(iVar4 + 0x14);
          if ((int)(-1 - (uVar11 + (0x80000000 < uVar19))) < 0 ==
              (SBORROW4(-1,uVar11) != SBORROW4(-1 - uVar11,(uint)(0x80000000 < uVar19)))) {
            uVar11 = 0xffffffff;
            uVar19 = 0x80000000;
          }
          if ((int)(uint)(uVar19 < 0x7fffffff) <= (int)uVar11) {
            uVar19 = 0x7fffffff;
          }
          uVar7 = 0x80000000;
          iVar8 = -1;
          if ((int)(-1 - (iVar4 + (uint)(0x80000000 < uVar20))) < 0 !=
              (SBORROW4(-1,iVar4) != SBORROW4(-1 - iVar4,(uint)(0x80000000 < uVar20)))) {
            uVar7 = uVar20;
            iVar8 = iVar4;
          }
          puVar18 = (uint *)*local_b4;
          if ((int)(uint)(uVar7 < 0x7fffffff) <= iVar8) {
            uVar7 = 0x7fffffff;
          }
          if (puVar18 != (uint *)0x0) {
            uVar11 = puVar18[2];
          }
          if ((((puVar18 != (uint *)0x0 && uVar11 != 0) && (uVar20 = *puVar18, 0 < (int)uVar20)) &&
              (uVar19 <= puVar18[1] && uVar7 <= uVar20)) && (0 < (int)uVar19)) {
            uVar2 = uVar7;
            if (0 < (int)uVar7) {
              uVar2 = puVar18[1];
            }
            if (0 < (int)uVar2) {
              iVar4 = uVar20 * (uVar19 - 1) + uVar7;
              iVar8 = iVar4 * 4 + -3;
              iVar4 = iVar4 * 4 + -4;
              uVar19 = (uVar15 & 0xfffffff) >> 0x14;
              if (uVar19 == 0) {
                *(char *)(uVar11 + iVar4) = (char)((uVar15 & 0xfffffff) >> 0xc);
                *(char *)(puVar18[2] + iVar8) = (char)((uVar15 & 0xfffffff) >> 4);
                *(char *)(puVar18[2] + iVar4 + 2) = (char)uVar14;
                uVar14 = 0xff;
              }
              else {
                *(char *)(uVar11 + iVar4) = (char)uVar19;
                *(char *)(puVar18[2] + iVar8) = (char)((uVar15 & 0xfffffff) >> 0xc);
                *(char *)(puVar18[2] + iVar4 + 2) = (char)((uVar15 & 0xfffffff) >> 4);
              }
              *(char *)(puVar18[2] + iVar4 + 3) = (char)uVar14;
            }
          }
          goto LAB_1000daf0;
        }
      }
    }
  }
LAB_1000dae8:
  recovered_10007024(pcVar3);
LAB_1000daf0:
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000dcac
#undef DAT_1000dcb0
#undef DAT_1000f34c
#undef DAT_1001400c
#undef EXT_00000008
#undef EXT_00000010
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_c0
#undef uStack_94
#undef auStack_68
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac

#undef DAT_10014140
#define DAT_10014140 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e1cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcb4
 */

void recovered_1000dcb4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014140;
  return;
}

#undef DAT_10014140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcdc
 */

void recovered_1000dcdc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dce0
 */

void recovered_1000dce0(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dce4
 */

void recovered_1000dce4(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *param_3;
  uVar1 = *(uint *)(iVar3 + 0x30);
  iVar2 = *(int *)(iVar3 + 0x34);
  uVar4 = *(uint *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if ((int)(-1 - (iVar2 + (uint)(0x80000000 < uVar1))) < 0 ==
      (SBORROW4(-1,iVar2) != SBORROW4(-1 - iVar2,(uint)(0x80000000 < uVar1)))) {
    iVar2 = -1;
    uVar1 = 0x80000000;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x20) = uVar1;
  uVar1 = 0x80000000;
  iVar2 = -1;
  if ((int)(-1 - (iVar3 + (uint)(0x80000000 < uVar4))) < 0 !=
      (SBORROW4(-1,iVar3) != SBORROW4(-1 - iVar3,(uint)(0x80000000 < uVar4)))) {
    uVar1 = uVar4;
    iVar2 = iVar3;
  }
  if ((int)(uint)(uVar1 < 0x7fffffff) <= iVar2) {
    uVar1 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x1c) = uVar1;
  return;
}


#undef DAT_10014164
#define DAT_10014164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e40U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd68
 */

void recovered_1000dd68(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014164;
  return;
}

#undef DAT_10014164

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd90
 */

void recovered_1000dd90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd94
 */

void recovered_1000dd94(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd98
 */

void recovered_1000dd98(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;

  piVar4 = (int *)(param_2 + 4);
  uVar3 = *(uint *)(*param_3 + 0x10);
  iVar2 = *(int *)(*param_3 + 0x14);
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)-(iVar2 + (uint)(1 < uVar3)) < 0 ==
      (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(1 < uVar3)))) {
    uVar3 = 1;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar3;
  if (uVar1 < uVar3) {
    recovered_1000b3f0(piVar4,uVar3);
    uVar1 = *(uint *)(param_2 + 8);
  }
  if (uVar1 < uVar3) {
    recovered_1000b3f0(piVar4,uVar3);
  }
  iVar2 = *piVar4 + uVar3 * 0x18;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined1 *)(iVar2 + -0x18) = 0;
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}


#undef DAT_10014188
#define DAT_10014188 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de30
 */

void recovered_1000de30(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014188;
  return;
}

#undef DAT_10014188

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de58
 */

void recovered_1000de58(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de5c
 */

void recovered_1000de5c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000e100
#define DAT_1000e100 (*(int *)(0x1000e100U))
#undef DAT_1000e104
#define DAT_1000e104 (*(int *)(0x1000e104U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define uStack_94 (*(undefined4 *)(frame + 60))
#define local_c0 (*(int *)(frame + 16))
#define local_bc (*(int * *)(frame + 20))
#define local_b8 (*(void * *)(frame + 24))
#define local_b4 (*(undefined4 *)(frame + 28))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_ac (*(void * *)(frame + 36))
#define local_a8 (*(undefined4 *)(frame + 40))
#define local_a4 (*(undefined4 *)(frame + 44))
#define auStack_68 (*(undefined1 (*)[8])(frame + 104))
#define local_a0 (*(undefined1 * *)(frame + 48))
#define local_9c (*(uint *)(frame + 52))
#define local_90 (*(undefined4 *)(frame + 64))
#define local_7c (*(undefined4 *)(frame + 84))
#define local_78 (*(int *)(frame + 88))
#define local_74 (*(undefined1 * *)(frame + 92))
#define local_70 (*(int *)(frame + 96))
#define local_6c (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de60
 */

void recovered_1000de60(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;

  local_7c = DAT_1001400c;
  local_78 = (0x16dcU);
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_c0;
  iVar6 = *param_3;
  uVar3 = *(uint *)(iVar6 + 0x18);
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar3;
  local_78 = local_78 + 0x1000dec4;
  local_70 = (0x1c8U) + 0x1000ded4;
  recovered_1000756c(&uStack_94);
  local_bc = (int *)(param_2 + 4);
  if (uVar7 < uVar3) {
    local_90 = 0xffffffff;
    recovered_1000b3f0(local_bc,uVar3);
    iVar6 = *param_3;
    uVar7 = *(uint *)(param_2 + 8);
    uVar3 = 1;
    if (1 < *(uint *)(iVar6 + 0x18)) {
      uVar3 = *(uint *)(iVar6 + 0x18);
    }
    if (uVar3 <= uVar7) goto LAB_1000df48;
  }
  else if (uVar3 <= uVar7) goto LAB_1000df48;
  local_90 = 0xffffffff;
  recovered_1000b3f0(local_bc,uVar3);
  uVar7 = *(uint *)(param_2 + 8);
  iVar6 = *param_3;
LAB_1000df48:
  piVar1 = local_bc;
  uVar5 = *(uint *)(iVar6 + 0x38);
  iVar6 = *local_bc;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  local_c0 = iVar6 + uVar3 * 0x18;
  pcVar4 = (char *)(local_c0 + -0x18);
  if (uVar7 < uVar5) {
    local_90 = 0xffffffff;
    recovered_1000b3f0(local_bc,uVar5);
    iVar6 = *piVar1;
  }
  local_90 = 0xffffffff;
  recovered_10008600((int *)&local_a0,(char *)(iVar6 + uVar5 * 0x18 + -0x18));
  local_90 = 1;
  recovered_10008600((int *)&local_b8,pcVar4);
  local_a4 = local_b0;
  local_a8 = local_b4;
  local_ac = local_b8;
  local_b4 = 0;
  local_b0 = 0;
  puVar2 = &DAT_1000f34c;
  if (local_a0 != (undefined1 *)0x0) {
    puVar2 = local_a0;
  }
  local_b8 = (void *)0x0;
  local_90 = 2;
  recovered_1000e130((int *)&local_ac,(int)puVar2,local_9c);
  iVar6 = local_c0;
  *(undefined1 *)(local_c0 + -0x18) = 1;
  if ((void **)(local_c0 + -0x14) != &local_ac) {
    recovered_10007024(*(void **)(local_c0 + -0x14));
    *(void **)(iVar6 + -0x14) = local_ac;
    *(undefined4 *)(iVar6 + -0x10) = local_a8;
    *(undefined4 *)(iVar6 + -0xc) = local_a4;
    local_a8 = 0;
    local_a4 = 0;
    local_ac = (void *)0x0;
  }
  *(undefined4 *)(iVar6 + -4) = 0;
  *(undefined4 *)(iVar6 + -8) = 0;
  recovered_10007024(local_ac);
  recovered_10007024(local_b8);
  recovered_10007024(local_a0);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000e100
#undef DAT_1000e104
#undef DAT_1000f34c
#undef DAT_1001400c
#undef uStack_94
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef auStack_68
#undef local_a0
#undef local_9c
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c

#undef DAT_100141ac
#define DAT_100141ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e108
 */

void recovered_1000e108(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100141ac;
  return;
}

#undef DAT_100141ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e130
 */

void recovered_1000e130(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint extraout_r1 = 0;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint extraout_r3 = 0;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = param_2 - (int)puVar12;
    uVar11 = param_1[1];
    uVar6 = 0;
LAB_1000e16c:
    if (uVar10 != uVar6) goto code_r0x1000e174;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_1000e338;
    puVar12 = recovered_10006fcc(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_1000e318;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_1000e2fc;
    uVar13 = uVar7 & 0xfffffff0;
    uVar2 = uVar13;
    puVar5 = puVar1;
    puVar8 = puVar12;
    do {
      uVar15 = *puVar5;
      uVar16 = puVar5[1];
      puVar5 = puVar5 + 2;
      uVar2 = uVar2 - 0x10;
      *puVar8 = uVar15;
      puVar8[1] = uVar16;
      puVar8 = puVar8 + 2;
    } while (uVar2 != 0);
    if (uVar7 != uVar13) {
LAB_1000e2fc:
      iVar4 = uVar7 - uVar13;
      puVar3 = (undefined1 *)((int)puVar12 + uVar13);
      puVar9 = (undefined1 *)((int)puVar1 + uVar13);
      do {
        iVar4 = iVar4 + -1;
        *puVar3 = *puVar9;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar4 != 0);
    }
LAB_1000e318:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    recovered_10007024(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_1000e338:
    if (param_3 == 0) goto LAB_1000e364;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_1000e360;
  }
  uVar11 = param_1[1];
LAB_1000e188:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_1000e244;
  puVar12 = recovered_10006fcc(uVar11 + 1);
  uVar6 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  uVar10 = 0;
  *(undefined1 *)puVar12 = 0;
  if (uVar6 != 0) {
    bVar14 = uVar6 == 0x10;
    uVar7 = extraout_r3;
    if (0xf < uVar6) {
      uVar7 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar7 == 0xf;
    }
    if ((0xf < uVar6 && 0xe < uVar7) && !bVar14) {
      uVar10 = uVar6 & 0xfffffff0;
      uVar7 = uVar10;
      puVar5 = puVar12;
      puVar8 = puVar1;
      do {
        uVar15 = *puVar8;
        uVar16 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar7 = uVar7 - 0x10;
        *puVar5 = uVar15;
        puVar5[1] = uVar16;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      if (uVar6 == uVar10) goto LAB_1000e224;
    }
    iVar4 = uVar6 - uVar10;
    puVar3 = (undefined1 *)((int)puVar1 + uVar10);
    puVar9 = (undefined1 *)((int)puVar12 + uVar10);
    do {
      iVar4 = iVar4 + -1;
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar4 != 0);
  }
LAB_1000e224:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  recovered_10007024(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_1000e244:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_1000e360:
  puVar12 = (undefined8 *)*param_1;
LAB_1000e364:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x1000e174:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_1000e188;
  goto LAB_1000e16c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e388
 */

void recovered_1000e388(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e38c
 */

void recovered_1000e38c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000e5b4
#define DAT_1000e5b4 (*(int *)(0x1000e5b4U))
#undef DAT_1000e5b8
#define DAT_1000e5b8 (*(int *)(0x1000e5b8U))
#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001400c
#define DAT_1001400c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce8U)))
#define auStack_68 (*(undefined1 (*)[8])(frame + 88))
#define local_b0 (*(int *)(frame + 16))
#define local_ac (*(void * *)(frame + 20))
#define local_a8 (*(undefined4 *)(frame + 24))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_a0 (*(void * *)(frame + 32))
#define local_9c (*(undefined4 *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
#define local_90 (*(undefined4 *)(frame + 48))
#define local_7c (*(undefined4 *)(frame + 68))
#define local_78 (*(int *)(frame + 72))
#define local_74 (*(undefined1 * *)(frame + 76))
#define uStack_94 (*(undefined4 *)(frame + 44))
#define local_70 (*(int *)(frame + 80))
#define local_6c (*(undefined1 * *)(frame + 84))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e390
 */

void recovered_1000e390(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;

  local_7c = DAT_1001400c;
  local_74 = auStack_68 + 0x60;
  local_6c = (undefined1 *)&local_b0;
  uVar4 = *(uint *)(*param_3 + 0x18);
  local_78 = ((uintptr_t)pf_module_state + 0x284U);
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar4;
  local_70 = (0x168U) + 0x1000e404;
  recovered_1000756c(&uStack_94);
  piVar5 = (int *)(param_2 + 4);
  if (uVar6 < uVar4) {
    local_90 = 0xffffffff;
    recovered_1000b3f0(piVar5,uVar4);
    uVar4 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar4 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar4 <= *(uint *)(param_2 + 8)) goto LAB_1000e470;
  }
  else if (uVar4 <= uVar6) goto LAB_1000e470;
  local_90 = 0xffffffff;
  recovered_1000b3f0(piVar5,uVar4);
LAB_1000e470:
  local_90 = 0xffffffff;
  local_b0 = *piVar5 + uVar4 * 0x18;
  recovered_10008600((int *)&local_ac,(char *)(local_b0 + -0x18));
  local_98 = local_a4;
  local_9c = local_a8;
  local_90 = 1;
  local_a0 = local_ac;
  puVar2 = *(undefined1 **)(*param_3 + 0x24);
  local_a8 = 0;
  puVar3 = &DAT_1000f34c;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_a4 = 0;
  local_ac = (void *)0x0;
  recovered_1000e130((int *)&local_a0,(int)puVar3,*(uint *)(*param_3 + 0x28));
  iVar1 = local_b0;
  *(undefined1 *)(local_b0 + -0x18) = 1;
  if ((void **)(local_b0 + -0x14) != &local_a0) {
    recovered_10007024(*(void **)(local_b0 + -0x14));
    *(void **)(iVar1 + -0x14) = local_a0;
    *(undefined4 *)(iVar1 + -0x10) = local_9c;
    *(undefined4 *)(iVar1 + -0xc) = local_98;
    local_9c = 0;
    local_98 = 0;
    local_a0 = (void *)0x0;
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  recovered_10007024(local_a0);
  recovered_10007024(local_ac);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_1000e5b4
#undef DAT_1000e5b8
#undef DAT_1000f34c
#undef DAT_1001400c
#undef auStack_68
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef uStack_94
#undef local_70
#undef local_6c

#undef DAT_100141d0
#define DAT_100141d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eacU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5bc
 */

void recovered_1000e5bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100141d0;
  return;
}

#undef DAT_100141d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5e4
 */

void recovered_1000e5e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5e8
 */

void recovered_1000e5e8(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5ec
 */

void recovered_1000e5ec(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;

  piVar4 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(*param_3 + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar1;
  if (*(uint *)(param_2 + 8) < uVar1) {
    recovered_1000b3f0(piVar4,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar1 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000e668;
  }
  else if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000e668;
  recovered_1000b3f0(piVar4,uVar1);
LAB_1000e668:
  iVar3 = *piVar4 + uVar1 * 0x18;
  lVar5 = recovered_1000880c((void *)(iVar3 + -0x18));
  iVar2 = *param_3;
  *(undefined1 *)(iVar3 + -0x18) = 2;
  lVar5 = lVar5 + *(longlong *)(iVar2 + 0x30);
  *(int *)(iVar3 + -8) = (int)lVar5;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(int *)(iVar3 + -4) = (int)((ulonglong)lVar5 >> 0x20);
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef DAT_100141f4
#define DAT_100141f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ed0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6bc
 */

void recovered_1000e6bc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100141f4;
  return;
}

#undef DAT_100141f4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6e4
 */

void recovered_1000e6e4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6e8
 */

void recovered_1000e6e8(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e6ec
 */

void recovered_1000e6ec(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *param_3;
  uVar1 = *(uint *)(param_2 + 8);
  piVar4 = (int *)(param_2 + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000b3f0(piVar4,uVar2);
    iVar3 = *param_3;
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000e770;
  }
  else if (uVar2 <= uVar1) goto LAB_1000e770;
  recovered_1000b3f0(piVar4,uVar2);
  uVar1 = *(uint *)(param_2 + 8);
  iVar3 = *param_3;
LAB_1000e770:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000b3f0(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000880c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000880c((void *)(iVar5 + -0x18));
  *(int *)(iVar5 + -8) = (int)(lVar7 + lVar8);
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(int *)(iVar5 + -4) = (int)((ulonglong)(lVar7 + lVar8) >> 0x20);
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014218
#define DAT_10014218 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ef4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e7f8
 */

void recovered_1000e7f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014218;
  return;
}

#undef DAT_10014218

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e820
 */

void recovered_1000e820(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e824
 */

void recovered_1000e824(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e828
 */

void recovered_1000e828(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;

  piVar4 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(*param_3 + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar1;
  if (*(uint *)(param_2 + 8) < uVar1) {
    recovered_1000b3f0(piVar4,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar1 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000e8a4;
  }
  else if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000e8a4;
  recovered_1000b3f0(piVar4,uVar1);
LAB_1000e8a4:
  iVar3 = *piVar4 + uVar1 * 0x18;
  lVar5 = recovered_1000880c((void *)(iVar3 + -0x18));
  iVar2 = *param_3;
  *(undefined1 *)(iVar3 + -0x18) = 2;
  uVar1 = *(uint *)(iVar2 + 0x30);
  iVar2 = *(int *)(iVar2 + 0x34);
  *(uint *)(iVar3 + -8) = (uint)lVar5 - uVar1;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(uint *)(iVar3 + -4) = (int)((ulonglong)lVar5 >> 0x20) - (iVar2 + (uint)((uint)lVar5 < uVar1));
  if (*(undefined1 **)(iVar3 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar3 + -0x14) = 0;
  }
  return;
}


#undef DAT_1001423c
#define DAT_1001423c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e8f8
 */

void recovered_1000e8f8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_1001423c;
  return;
}

#undef DAT_1001423c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e920
 */

void recovered_1000e920(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e924
 */

void recovered_1000e924(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e928
 */

void recovered_1000e928(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *param_3;
  uVar1 = *(uint *)(param_2 + 8);
  piVar4 = (int *)(param_2 + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000b3f0(piVar4,uVar2);
    iVar3 = *param_3;
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000e9ac;
  }
  else if (uVar2 <= uVar1) goto LAB_1000e9ac;
  recovered_1000b3f0(piVar4,uVar2);
  uVar1 = *(uint *)(param_2 + 8);
  iVar3 = *param_3;
LAB_1000e9ac:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000b3f0(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000880c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000880c((void *)(iVar5 + -0x18));
  *(uint *)(iVar5 + -8) = (uint)lVar8 - (uint)lVar7;
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(uint *)(iVar5 + -4) =
       (int)((ulonglong)lVar8 >> 0x20) -
       ((int)((ulonglong)lVar7 >> 0x20) + (uint)((uint)lVar8 < (uint)lVar7));
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014260
#define DAT_10014260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f3cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea34
 */

void recovered_1000ea34(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014260;
  return;
}

#undef DAT_10014260

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea5c
 */

void recovered_1000ea5c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea60
 */

void recovered_1000ea60(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea64
 */

void recovered_1000ea64(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;

  piVar3 = (int *)(param_2 + 4);
  uVar1 = *(uint *)(*param_3 + 0x18);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar1;
  if (*(uint *)(param_2 + 8) < uVar1) {
    recovered_1000b3f0(piVar3,uVar1);
    uVar1 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar1 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000eae0;
  }
  else if (uVar1 <= *(uint *)(param_2 + 8)) goto LAB_1000eae0;
  recovered_1000b3f0(piVar3,uVar1);
LAB_1000eae0:
  iVar2 = *piVar3 + uVar1 * 0x18;
  lVar4 = recovered_1000880c((void *)(iVar2 + -0x18));
  lVar4 = lVar4 * *(longlong *)(*param_3 + 0x30);
  *(int *)(iVar2 + -8) = (int)lVar4;
  *(undefined1 *)(iVar2 + -0x18) = 2;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(int *)(iVar2 + -4) = (int)((ulonglong)lVar4 >> 0x20);
  if (*(undefined1 **)(iVar2 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar2 + -0x14) = 0;
  }
  return;
}


#undef DAT_10014284
#define DAT_10014284 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f60U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb38
 */

void recovered_1000eb38(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014284;
  return;
}

#undef DAT_10014284

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb60
 */

void recovered_1000eb60(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb64
 */

void recovered_1000eb64(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb68
 */

void recovered_1000eb68(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;

  iVar3 = *param_3;
  uVar1 = *(uint *)(param_2 + 8);
  piVar4 = (int *)(param_2 + 4);
  uVar2 = *(uint *)(iVar3 + 0x18);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  if (uVar1 < uVar2) {
    recovered_1000b3f0(piVar4,uVar2);
    iVar3 = *param_3;
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = 1;
    if (1 < *(uint *)(iVar3 + 0x18)) {
      uVar2 = *(uint *)(iVar3 + 0x18);
    }
    if (uVar2 <= uVar1) goto LAB_1000ebec;
  }
  else if (uVar2 <= uVar1) goto LAB_1000ebec;
  recovered_1000b3f0(piVar4,uVar2);
  uVar1 = *(uint *)(param_2 + 8);
  iVar3 = *param_3;
LAB_1000ebec:
  uVar6 = *(uint *)(iVar3 + 0x38);
  iVar3 = *piVar4;
  iVar5 = iVar3 + uVar2 * 0x18;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  if (uVar1 < uVar6) {
    recovered_1000b3f0(piVar4,uVar6);
    iVar3 = *piVar4;
  }
  lVar7 = recovered_1000880c((void *)(iVar3 + uVar6 * 0x18 + -0x18));
  lVar8 = recovered_1000880c((void *)(iVar5 + -0x18));
  *(undefined1 *)(iVar5 + -0x18) = 2;
  *(int *)(iVar5 + -8) = (int)(lVar8 * lVar7);
  *(undefined4 *)(iVar5 + -0x10) = 0;
  *(int *)(iVar5 + -4) = (int)((ulonglong)(lVar8 * lVar7) >> 0x20);
  if (*(undefined1 **)(iVar5 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar5 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142a8
#define DAT_100142a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec78
 */

void recovered_1000ec78(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100142a8;
  return;
}

#undef DAT_100142a8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eca0
 */

void recovered_1000eca0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eca4
 */

void recovered_1000eca4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eca8
 */

void recovered_1000eca8(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;

  iVar1 = *param_3;
  piVar5 = (int *)(param_2 + 4);
  uVar2 = *(uint *)(iVar1 + 0x18);
  uVar3 = *(uint *)(iVar1 + 0x30);
  uVar4 = *(uint *)(iVar1 + 0x34);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  if (*(uint *)(param_2 + 8) < uVar2) {
    recovered_1000b3f0(piVar5,uVar2);
    uVar2 = 1;
    if (1 < *(uint *)(*param_3 + 0x18)) {
      uVar2 = *(uint *)(*param_3 + 0x18);
    }
    if (uVar2 <= *(uint *)(param_2 + 8)) goto LAB_1000ed2c;
  }
  else if (uVar2 <= *(uint *)(param_2 + 8)) goto LAB_1000ed2c;
  recovered_1000b3f0(piVar5,uVar2);
LAB_1000ed2c:
  iVar1 = *piVar5 + uVar2 * 0x18;
  if (uVar3 == 0 && uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = recovered_1000880c((void *)(iVar1 + -0x18));
    uVar7 = recovered_10001cb8((uint)lVar6,(uint)((ulonglong)lVar6 >> 0x20),uVar3,uVar4);
  }
  *(int *)(iVar1 + -8) = (int)uVar7;
  *(undefined1 *)(iVar1 + -0x18) = 2;
  *(int *)(iVar1 + -4) = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(iVar1 + -0x10) = 0;
  if (*(undefined1 **)(iVar1 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar1 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142cc
#define DAT_100142cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed90
 */

void recovered_1000ed90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100142cc;
  return;
}

#undef DAT_100142cc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edb8
 */

void recovered_1000edb8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edbc
 */

void recovered_1000edbc(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000edc0
 */

void recovered_1000edc0(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;

  iVar4 = *param_3;
  uVar1 = *(uint *)(param_2 + 8);
  piVar6 = (int *)(param_2 + 4);
  uVar3 = *(uint *)(iVar4 + 0x18);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  *(uint *)(param_2 + 0x30) = uVar3;
  if (uVar1 < uVar3) {
    recovered_1000b3f0(piVar6,uVar3);
    iVar4 = *param_3;
    uVar1 = *(uint *)(param_2 + 8);
    uVar3 = 1;
    if (1 < *(uint *)(iVar4 + 0x18)) {
      uVar3 = *(uint *)(iVar4 + 0x18);
    }
    if (uVar3 <= uVar1) goto LAB_1000ee44;
  }
  else if (uVar3 <= uVar1) goto LAB_1000ee44;
  recovered_1000b3f0(piVar6,uVar3);
  uVar1 = *(uint *)(param_2 + 8);
  iVar4 = *param_3;
LAB_1000ee44:
  uVar5 = *(uint *)(iVar4 + 0x38);
  iVar4 = *piVar6;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  iVar2 = iVar4;
  if (uVar1 < uVar5) {
    recovered_1000b3f0(piVar6,uVar5);
    iVar2 = *piVar6;
  }
  iVar4 = iVar4 + uVar3 * 0x18;
  lVar7 = recovered_1000880c((void *)(iVar2 + uVar5 * 0x18 + -0x18));
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = recovered_1000880c((void *)(iVar4 + -0x18));
    uVar9 = recovered_10001cb8((uint)lVar8,(uint)((ulonglong)lVar8 >> 0x20),(uint)lVar7,
                               (uint)((ulonglong)lVar7 >> 0x20));
  }
  *(int *)(iVar4 + -8) = (int)uVar9;
  *(undefined1 *)(iVar4 + -0x18) = 2;
  *(int *)(iVar4 + -4) = (int)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(iVar4 + -0x10) = 0;
  if (*(undefined1 **)(iVar4 + -0x14) != (undefined1 *)0x0) {
    **(undefined1 **)(iVar4 + -0x14) = 0;
  }
  return;
}


#undef DAT_100142f0
#define DAT_100142f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4fccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eee8
 */

void recovered_1000eee8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_100142f0;
  return;
}

#undef DAT_100142f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef10
 */

void recovered_1000ef10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_100070e4
#define DAT_100070e4 (*(int *)(0x100070e4U))
#undef DAT_100070e8
#define DAT_100070e8 (*(int *)(0x100070e8U))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define pcStack_7c (*(code * *)(frame + 52))
#define uStack_90 (*(undefined4 *)(frame + 32))
#define puStack_74 (*(undefined1 * *)(frame + 60))
#define iStack_78 (*(int *)(frame + 56))
#define puStack_6c (*(undefined1 * *)(frame + 68))
#define iStack_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef14
 */

void recovered_1000ef14(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  puStack_74 = auStack_68 + 0x60;
  puStack_6c = auStack_a0;
  pcStack_7c = recovered_10006f7c;
  iStack_78 = ((uintptr_t)pf_module_state + 0x140U);
  iStack_70 = (0x3cU) + 0x10007078;
  uStack_90 = 1;
  recovered_1000756c(&uStack_94);
  recovered_10001ef4(param_1);
  recovered_10007590(&uStack_94);
  return;
}

#undef DAT_100070e4
#undef DAT_100070e8
#undef uStack_94
#undef auStack_a0
#undef pcStack_7c
#undef uStack_90
#undef puStack_74
#undef iStack_78
#undef puStack_6c
#undef iStack_70
#undef auStack_68

#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ef18
 */

void recovered_1000ef18(undefined4 param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;

  iVar4 = *param_3;
  uVar2 = *(uint *)(param_2 + 8);
  piVar9 = (int *)(param_2 + 4);
  uVar7 = *(uint *)(iVar4 + 0x18);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  if (uVar2 < uVar7) {
    recovered_1000b3f0(piVar9,uVar7);
    uVar2 = *(uint *)(param_2 + 8);
    iVar4 = *param_3;
  }
  iVar5 = *piVar9;
  uVar8 = 1;
  if (1 < *(uint *)(iVar4 + 0x38)) {
    uVar8 = *(uint *)(iVar4 + 0x38);
  }
  iVar4 = iVar5 + uVar7 * 0x18;
  if (uVar2 < uVar8) {
    recovered_1000b3f0(piVar9,uVar8);
    iVar5 = *piVar9;
  }
  cVar1 = *(char *)(iVar4 + -0x18);
  iVar5 = iVar5 + uVar8 * 0x18;
  if (cVar1 != *(char *)(iVar5 + -0x18)) {
    return;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (*(int *)(iVar4 + -8) != *(int *)(iVar5 + -8) ||
          *(int *)(iVar4 + -4) != *(int *)(iVar5 + -4)) {
        return;
      }
    }
    else {
      if (cVar1 != '\x01') {
        return;
      }
      pcVar3 = *(char **)(iVar5 + -0x14);
      pcVar6 = *(char **)(iVar4 + -0x14);
      iVar4 = *(int *)(iVar4 + -0x10);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = &DAT_1000f34c;
      }
      if (pcVar6 == (char *)0x0) {
        pcVar6 = &DAT_1000f34c;
      }
      if (iVar4 != *(int *)(iVar5 + -0x10)) {
        return;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*pcVar6 != *pcVar3) {
          return;
        }
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  if (*(byte *)(param_2 + 0x24) < 4) {
    *(char *)(param_2 + 0x24) = (char)(0x30201 >> ((*(byte *)(param_2 + 0x24) & 0x1f) << 3));
  }
  return;
}

#undef DAT_1000f34c

#undef DAT_10014314
#define DAT_10014314 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ff0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f064
 */

void recovered_1000f064(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  puVar1 = recovered_10006fcc(8);
  *puVar1 = &DAT_10014314;
  return;
}

#undef DAT_10014314

#undef DAT_1000f34c
#define DAT_1000f34c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f08c
 */

int recovered_1000f08c(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int iVar14;

  uVar2 = param_1[1];
  if (uVar2 == param_1[2]) {
    uVar5 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar5 = 4;
    }
    if (uVar2 < uVar5) {
      pvVar3 = recovered_10006fcc(uVar5 * 0x18);
      if (param_1[1] != 0) {
        iVar14 = 0x10;
        uVar2 = 0;
        do {
          puVar4 = (undefined4 *)(*param_1 + iVar14);
          uVar9 = puVar4[1];
          uVar10 = puVar4[-3];
          puVar12 = (undefined4 *)((int)pvVar3 + iVar14);
          *puVar12 = *puVar4;
          uVar6 = puVar4[-2];
          puVar12[-3] = uVar10;
          uVar10 = puVar4[-1];
          puVar12[-2] = uVar6;
          uVar1 = *(undefined1 *)(puVar4 + -4);
          puVar12[-1] = uVar10;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          puVar12[1] = uVar9;
          *(undefined1 *)(puVar12 + -4) = uVar1;
          recovered_10007024((void *)0x0);
          uVar2 = uVar2 + 1;
          iVar14 = iVar14 + 0x18;
        } while (uVar2 < (uint)param_1[1]);
      }
      recovered_10007024((void *)*param_1);
      param_1[2] = uVar5;
      uVar2 = param_1[1];
      *param_1 = (int)pvVar3;
    }
  }
  puVar13 = (undefined1 *)(*param_1 + uVar2 * 0x18);
  *puVar13 = *param_2;
  *(int *)(puVar13 + 4) = 0;
  puVar11 = *(undefined1 **)(param_2 + 4);
  *(undefined4 *)(puVar13 + 8) = 0;
  *(undefined4 *)(puVar13 + 0xc) = 0;
  puVar7 = &DAT_1000f34c;
  if (puVar11 != (undefined1 *)0x0) {
    puVar7 = puVar11;
  }
  recovered_1000bc80((int *)(puVar13 + 4),(int)puVar7,*(uint *)(param_2 + 8));
  iVar8 = param_1[1];
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  iVar14 = *param_1;
  *(undefined4 *)(puVar13 + 0x14) = uVar6;
  param_1[1] = iVar8 + 1;
  return iVar14 + iVar8 * 0x18;
}

#undef DAT_1000f34c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1e8
 */

void recovered_1000f1e8(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;

  uVar7 = param_1[1];
  if (uVar7 == param_1[2]) {
    uVar2 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar2 = 4;
    }
    if (uVar7 < uVar2) {
      pvVar3 = recovered_10006fcc(uVar2 * 0x18);
      if (param_1[1] != 0) {
        iVar10 = 0x10;
        uVar7 = 0;
        do {
          puVar4 = (undefined4 *)(*param_1 + iVar10);
          uVar8 = puVar4[1];
          uVar9 = puVar4[-3];
          puVar11 = (undefined4 *)((int)pvVar3 + iVar10);
          *puVar11 = *puVar4;
          uVar6 = puVar4[-2];
          puVar11[-3] = uVar9;
          uVar9 = puVar4[-1];
          puVar11[-2] = uVar6;
          uVar1 = *(undefined1 *)(puVar4 + -4);
          puVar11[-1] = uVar9;
          puVar4[-3] = 0;
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          puVar11[1] = uVar8;
          *(undefined1 *)(puVar11 + -4) = uVar1;
          recovered_10007024((void *)0x0);
          uVar7 = uVar7 + 1;
          iVar10 = iVar10 + 0x18;
        } while (uVar7 < (uint)param_1[1]);
      }
      recovered_10007024((void *)*param_1);
      uVar7 = param_1[1];
      param_1[2] = uVar2;
      *param_1 = (int)pvVar3;
    }
  }
  uVar12 = *(undefined4 *)(param_2 + 8);
  uVar13 = *(undefined4 *)(param_2 + 0xc);
  uVar8 = *(undefined4 *)(param_2 + 4);
  puVar5 = (undefined1 *)(*param_1 + uVar7 * 0x18);
  *puVar5 = *param_2;
  param_1[1] = uVar7 + 1;
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(puVar5 + 4) = uVar8;
  *(undefined4 *)(puVar5 + 8) = uVar12;
  *(undefined4 *)(puVar5 + 0xc) = uVar13;
  *(undefined4 *)(puVar5 + 0x14) = uVar9;
  *(undefined4 *)(puVar5 + 0x10) = uVar6;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}
