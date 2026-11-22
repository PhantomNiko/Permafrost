/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

uint recovered_10001d60(uint param_1,uint param_2)

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
 * Address: 0x10001db0
 */

uint recovered_10001db0(uint param_1,uint param_2)

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
 * Address: 0x10001de8
 */

uint recovered_10001de8(uint param_1,uint param_2)

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
 * Address: 0x10001e58
 */

uint recovered_10001e58(uint param_1,uint param_2)

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
 * Address: 0x10001ec4
 */

ulonglong recovered_10001ec4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10004758((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed4
 */

longlong recovered_10001ed4(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_10004698((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ee4
 */

float recovered_10001ee4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100047e0(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f00
 */

float recovered_10001f00(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10004828(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000c0ac
#define DAT_1000c0ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f20
 */

void recovered_10001f20(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0ac = 0;
  recovered_10001f38();
  return;
}

#undef DAT_1000c0ac

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_1000c0ac
#define DAT_1000c0ac (*(char *)(((uintptr_t)pf_module_state + 0x2a0U)))
#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2a8U)))
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
 * Address: 0x10001f38
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001f38(void)

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
  if (DAT_1000c0ac != '\0') {
    return;
  }
  DAT_1000c0b4 = (undefined1 *)0x0;
  DAT_1000c0b0 = 0;
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
        if (iVar12 == 0) goto LAB_10002148;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_10006064((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1000c0b0 != 0) goto LAB_10002280;
    }
  }
LAB_10002148:
  iVar12 = (int)DAT_1000c0b4;
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
      puVar9 = &DAT_1000c0b0;
      if (DAT_1000c0b0 != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x10002328:
      if (iVar12 == 0) {
        DAT_1000c0ac = 1;
        DAT_1000c0b4 = puVar3;
        return;
      }
      DAT_1000c0ac = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_1000c0b0;
    if (DAT_1000c0b0 != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_1000c0b4 == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_1000c0b4;
    if (bVar13) {
      DAT_1000c0b4 = (undefined1 *)0x300000;
      iVar12 = (int)DAT_1000c0b4;
    }
    DAT_1000c0b4 = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_1000c0b0;
      if (DAT_1000c0b0 != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x10002328;
    }
  }
LAB_10002280:
  if (DAT_1000c0b4 == (undefined1 *)0x0) {
    DAT_1000c0b4 = (undefined1 *)DAT_1000c0b0;
    DAT_1000c0ac = 1;
    return;
  }
  DAT_1000c0ac = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_1000c0ac
#undef DAT_1000c0b0
#undef DAT_1000c0b4
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

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint * *)(((uintptr_t)pf_module_state + 0x2a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002330
 */

int recovered_10002330(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10001f38();
  iVar1 = 0;
  puVar2 = DAT_1000c0b0;
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

#undef DAT_1000c0b0

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int *)(((uintptr_t)pf_module_state + 0x2a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002374
 */

void recovered_10002374(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001f38();
  for (iVar1 = DAT_1000c0b0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c0b0

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int * *)(((uintptr_t)pf_module_state + 0x2a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c4
 */

int recovered_100023c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10001f38();
  iVar1 = 0;
  for (piVar2 = DAT_1000c0b0; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1000c0b0

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(int *)(((uintptr_t)pf_module_state + 0x2a4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002400
 */

void recovered_10002400(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001f38();
  for (iVar1 = DAT_1000c0b0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1000c0b0

#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint * *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(uint * *)(((uintptr_t)pf_module_state + 0x2a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002444
 */

uint * recovered_10002444(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10001f38();
    puVar5 = DAT_1000c0b4;
    if (DAT_1000c0b4 == (uint *)0x0) {
      puVar5 = DAT_1000c0b0;
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
          DAT_1000c0b4 = DAT_1000c0b0;
          if (puVar5 != (uint *)0x0) {
            DAT_1000c0b4 = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_1000c0b0;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002550
 */

longlong recovered_10002550(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100025a4
 */

ulonglong recovered_100025a4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100025f8
 */

undefined8 recovered_100025f8(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10002644
 */

undefined8 recovered_10002644(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10002728
 */

undefined8 recovered_10002728(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100027a8
 */

undefined8 recovered_100027a8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100028c0
 */

undefined8 recovered_100028c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x1000297c
 */

void recovered_1000297c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002984
 */

int recovered_10002984(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002990(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_100029e4(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002a34(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a88
 */

void * recovered_10002a88(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_10002ac4;
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
          if (uVar6 == uVar9) goto LAB_10002c58;
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
LAB_10002c58:
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
        if (uVar9 == uVar6) goto LAB_10002abc;
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
LAB_10002abc:
  if (uVar8 == 0) {
    return destination;
  }
LAB_10002ac4:
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
 * Address: 0x10002d0c
 */

void * recovered_10002d0c(void *destination,void *source,ulong count)

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
      goto LAB_10002d54;
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
          if (puVar8 == (undefined8 *)count) goto LAB_10002fe0;
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
LAB_10002fe0:
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
        if ((undefined8 *)count == puVar8) goto LAB_1000305c;
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
LAB_1000305c:
    if (uVar9 == 0) {
      return destination;
    }
LAB_10002d54:
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
    goto LAB_10002dd0;
  }
  if (((uint)puVar10 & 3) == 0) {
    puVar2 = puVar10;
LAB_1000306c:
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
          goto LAB_1000306c;
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
        if (uVar5 == uVar7) goto LAB_10003148;
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
LAB_10003148:
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
      if (uVar7 == uVar5) goto LAB_10003204;
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
LAB_10003204:
  if (uVar9 == 0) {
    return destination;
  }
LAB_10002dd0:
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
 * Address: 0x10003218
 */

void * recovered_10003218(void *destination,int value,ulong count)

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
  if (count < 8) goto joined_r0x100033a0;
  iVar8 = (value & 0xffU) * 0x1010101;
  piVar10 = destination;
  if (((uint)destination & 3) == 0) {
joined_r0x100032b8:
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
        if (uVar6 == uVar7) goto joined_r0x10003344;
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
      goto joined_r0x100032b8;
    }
  }
joined_r0x10003344:
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
      if (uVar7 == uVar6) goto joined_r0x100033a0;
    }
    do {
      uVar9 = uVar9 - 4;
      piVar10 = piVar4 + 1;
      *piVar4 = iVar8;
      piVar4 = piVar10;
    } while (3 < uVar9);
  }
joined_r0x100033a0:
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
 * Address: 0x10003418
 */

void recovered_10003418(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10003598;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100034b4:
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
        if (uVar7 == uVar8) goto joined_r0x10003538;
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
      goto joined_r0x100034b4;
    }
  }
joined_r0x10003538:
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
      if (uVar7 == uVar8) goto joined_r0x10003598;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003598:
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
 * Address: 0x10003614
 */

void recovered_10003614(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x10003794;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100036b0:
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
        if (uVar7 == uVar8) goto joined_r0x10003734;
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
      goto joined_r0x100036b0;
    }
  }
joined_r0x10003734:
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
      if (uVar7 == uVar8) goto joined_r0x10003794;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x10003794:
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
 * Address: 0x10003810
 */

int recovered_10003810(void *left,void *right,ulong count)

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
LAB_10003908:
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
      if (uVar5 != uVar6) goto LAB_10003a00;
      puVar7 = (uint *)((int)left + 1);
      uVar5 = count - 1;
      puVar1 = (uint *)((int)right + 1);
      if (count - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)right + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10003a00;
        puVar7 = (uint *)((int)left + 2);
        uVar5 = count - 2;
        puVar1 = (uint *)((int)right + 2);
        if (count - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)right + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10003a00;
          puVar7 = (uint *)((int)left + 3);
          uVar5 = count - 3;
          puVar1 = (uint *)((int)right + 3);
          if (count - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)right + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10003a00;
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
LAB_10003938:
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
      if (uVar5 != uVar6) goto LAB_10003938;
      puVar1 = (uint *)((int)right + 0x10);
      puVar7 = (uint *)((int)left + 0x10);
      uVar5 = count - 0x10;
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar2 = recovered_10003a08(left,right);
        return iVar2;
      }
      right = (void *)((int)right + 4);
      left = (void *)((int)left + 4);
    }
    goto LAB_10003908;
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
LAB_10003a00:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a08
 */

int recovered_10003a08(byte *param_1,byte *param_2)

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
 * Address: 0x10003a58
 */

bool recovered_10003a58(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a6c
 */

bool recovered_10003a6c(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a80
 */

bool recovered_10003a80(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a98
 */

bool recovered_10003a98(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ac4
 */

bool recovered_10003ac4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ae4
 */

bool recovered_10003ae4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003af8
 */

int recovered_10003af8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b08
 */

int recovered_10003b08(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b18
 */

ulong recovered_10003b18(char *text)

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
 * Address: 0x10003b40
 */

int recovered_10003b40(char *left,char *right)

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
LAB_10003b78:
      return uVar3 - (byte)*right;
    }
    left = left + 1;
    if (uVar2 != (byte)*right) {
      uVar3 = uVar2;
      goto LAB_10003b78;
    }
    bVar1 = *left;
    right = right + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b84
 */

int recovered_10003b84(byte *param_1,byte *param_2)

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
LAB_10003bbc:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10003bbc;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc8
 */

void recovered_10003bc8(int param_1,int param_2)

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
 * Address: 0x10003be4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10003be4(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10003cac;
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
          if (uVar8 == uVar11) goto LAB_10003e40;
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
LAB_10003e40:
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
        if (uVar11 == uVar8) goto LAB_10003ca4;
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
LAB_10003ca4:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10003cac:
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
 * Address: 0x10003ef8
 */

char * recovered_10003ef8(char *param_1,char param_2)

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
 * Address: 0x10003f2c
 */

int recovered_10003f2c(char *param_1,char *param_2)

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
 * Address: 0x10003f90
 */

char * recovered_10003f90(char *param_1,char *param_2)

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
 * Address: 0x10003ff0
 */

char * recovered_10003ff0(char *param_1,char *param_2)

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


#undef DAT_1000be30
#define DAT_1000be30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004054
 */

undefined * recovered_10004054(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000be30;
}

#undef DAT_1000be30

#undef PTR_DAT_1000c00c
#define PTR_DAT_1000c00c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x200U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004064
 */

undefined ** recovered_10004064(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c00c;
}

#undef PTR_DAT_1000c00c

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
 * Address: 0x10004074
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004074(undefined4 *param_1)

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
 * Address: 0x10004124
 */

double recovered_10004124(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x10004168
 */

double recovered_10004168(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10004220
 */

double recovered_10004220(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10004258
 */

double recovered_10004258(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x100042d8
 */

double recovered_100042d8(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004308
 */

double recovered_10004308(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000434c
 */

double recovered_1000434c(undefined4 param_1,undefined4 param_2)

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


#undef DAT_100044c8
#define DAT_100044c8 (*(double *)(0x100044c8U))
#undef DAT_100044d0
#define DAT_100044d0 (*(double *)(0x100044d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004398
 */

double recovered_10004398(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100044c8
#undef DAT_100044d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044d8
 */

longlong recovered_100044d8(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004698(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10004598
#define DAT_10004598 (*(double *)(0x10004598U))
#undef DAT_100045a0
#define DAT_100045a0 (*(double *)(0x100045a0U))
#undef DAT_100045a8
#define DAT_100045a8 (*(double *)(0x100045a8U))
#undef DAT_100045b0
#define DAT_100045b0 (*(double *)(0x100045b0U))
#undef DAT_100045b8
#define DAT_100045b8 (*(double *)(0x100045b8U))
#undef DAT_100045c0
#define DAT_100045c0 (*(double *)(0x100045c0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004508
 */

double recovered_10004508(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004598
#undef DAT_100045a0
#undef DAT_100045a8
#undef DAT_100045b0
#undef DAT_100045b8
#undef DAT_100045c0

#undef DAT_10004650
#define DAT_10004650 (*(double *)(0x10004650U))
#undef DAT_10004658
#define DAT_10004658 (*(double *)(0x10004658U))
#undef DAT_10004660
#define DAT_10004660 (*(double *)(0x10004660U))
#undef DAT_10004668
#define DAT_10004668 (*(double *)(0x10004668U))
#undef DAT_10004670
#define DAT_10004670 (*(double *)(0x10004670U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c8
 */

double recovered_100045c8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10004650
#undef DAT_10004658
#undef DAT_10004660
#undef DAT_10004668
#undef DAT_10004670

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004678
 */

double recovered_10004678(undefined4 param_1,undefined4 param_2)

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
long long recovered_10004698(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10004758(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_100047e0(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10004828(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_100048f8
#define DAT_100048f8 (*(float *)(0x100048f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048b8
 */

float recovered_100048b8(float param_1,float param_2)

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

#undef DAT_100048f8

#undef DAT_100049b4
#define DAT_100049b4 (*(float *)(0x100049b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048fc
 */

float recovered_100048fc(float param_1,float *param_2)

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

#undef DAT_100049b4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100049b8
 */

float recovered_100049b8(float param_1,uint param_2)

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


#undef DAT_10004a88
#define DAT_10004a88 (*(float *)(0x10004a88U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a04
 */

float recovered_10004a04(float param_1,float param_2)

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

#undef DAT_10004a88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a8c
 */

float recovered_10004a8c(float param_1)

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
 * Address: 0x10004ac4
 */

float recovered_10004ac4(float param_1)

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
 * Address: 0x10004b10
 */

double recovered_10004b10(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10004b64
 */

float recovered_10004b64(float param_1)

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


#undef DAT_10004c14
#define DAT_10004c14 (*(float *)(0x10004c14U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bc0
 */

float recovered_10004bc0(float param_1)

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

#undef DAT_10004c14

#undef DAT_10004d50
#define DAT_10004d50 (*(double *)(0x10004d50U))
#undef DAT_10004d58
#define DAT_10004d58 (*(float *)(0x10004d58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c18
 */

float recovered_10004c18(float param_1)

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

#undef DAT_10004d50
#undef DAT_10004d58

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d5c
 */

longlong recovered_10004d5c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_10004698(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_10004e28
#define DAT_10004e28 (*(double *)(0x10004e28U))
#undef DAT_10004e30
#define DAT_10004e30 (*(double *)(0x10004e30U))
#undef DAT_10004e38
#define DAT_10004e38 (*(double *)(0x10004e38U))
#undef DAT_10004e40
#define DAT_10004e40 (*(double *)(0x10004e40U))
#undef DAT_10004e48
#define DAT_10004e48 (*(double *)(0x10004e48U))
#undef DAT_10004e50
#define DAT_10004e50 (*(double *)(0x10004e50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d90
 */

float recovered_10004d90(float param_1)

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

#undef DAT_10004e28
#undef DAT_10004e30
#undef DAT_10004e38
#undef DAT_10004e40
#undef DAT_10004e48
#undef DAT_10004e50

#undef DAT_10004ee8
#define DAT_10004ee8 (*(double *)(0x10004ee8U))
#undef DAT_10004ef0
#define DAT_10004ef0 (*(double *)(0x10004ef0U))
#undef DAT_10004ef8
#define DAT_10004ef8 (*(double *)(0x10004ef8U))
#undef DAT_10004f00
#define DAT_10004f00 (*(double *)(0x10004f00U))
#undef DAT_10004f08
#define DAT_10004f08 (*(double *)(0x10004f08U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e58
 */

float recovered_10004e58(float param_1)

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

#undef DAT_10004ee8
#undef DAT_10004ef0
#undef DAT_10004ef8
#undef DAT_10004f00
#undef DAT_10004f08

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f10
 */

float recovered_10004f10(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004f2c
 */

int recovered_10004f2c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10005080
 */

int recovered_10005080(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x100050fc;
  }
  bVar2 = false;
joined_r0x100050fc:
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
 * Address: 0x100051e0
 */

double recovered_100051e0(byte *param_1,undefined4 *param_2)

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
      goto LAB_100052cc;
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
LAB_100052cc:
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
 * Address: 0x100053b4
 */

float recovered_100053b4(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100051e0(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000be35
#define DAT_1000be35 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_1000be3c
#define str_1000be3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000be4d
#define str_1000be4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

int recovered_100053d0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10005444:
  do {
    while( true ) {
      pcVar5 = str_1000be4d;
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
LAB_10005438:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_1000543c:
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
          goto LAB_100054e0;
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
LAB_100054e0:
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
switchD_10005678_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_10005e54;
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
        goto LAB_10005900;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10005900:
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
        local_60[-iVar16] = str_1000be4d[uVar10 + uVar11 * -10];
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
        goto LAB_10005e54;
      }
      goto LAB_10005e60;
    default:
      goto switchD_10005678_caseD_4a;
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
        goto LAB_10005c48;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10005c48;
      }
      uVar10 = 0;
LAB_10005c48:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000be3c;
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
LAB_10005e54:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_10005438;
      }
      goto LAB_1000543c;
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
                        goto LAB_100057f8;
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
LAB_100057f8:
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
          local_60[-iVar16] = str_1000be4d[uVar10 + uVar11 * -10];
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
LAB_10005d60:
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
                      goto LAB_10005d60;
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
        local_60[iVar16] = str_1000be4d[uVar9 & 0xf];
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
        pbVar12 = &DAT_1000be35;
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
        goto LAB_10005e54;
      }
      goto LAB_10005e74;
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
        goto LAB_10005d88;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_10005d88;
      }
      uVar9 = 0;
LAB_10005d88:
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
        local_60[-iVar16] = str_1000be4d[uVar10 + uVar11 * -10];
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
        goto LAB_10005e54;
      }
LAB_10005e60:
      param_4 = local_6c;
LAB_10005e74:
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
  goto LAB_10005444;
}

#undef DAT_1000be35
#undef str_1000be3c
#undef str_1000be4d
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10006034(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_100053d0(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c0b0
#define DAT_1000c0b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2a4U)))
#undef DAT_1000c0b4
#define DAT_1000c0b4 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2a8U)))
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
 * Address: 0x10006064
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006064(int *param_1,int *param_2,int *param_3)

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
      bVar6 = pcVar4 == pf_varargs_10006034__4_;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < pf_varargs_10006034__4_) {
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
          bVar6 = DAT_1000c0b0 != 0;
          piVar3 = &DAT_1000c0b0;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = (int *)DAT_1000c0b4;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_1000c0b4 = (code *)unaff_r9;
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
      puVar2 = &DAT_1000c0b0;
      if (DAT_1000c0b0 != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      pcVar4 = (code *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = (int *)DAT_1000c0b4;
      goto LAB_100061b4;
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
  bVar6 = DAT_1000c0b0 != 0;
  puVar2 = &DAT_1000c0b0;
  *(int *)(pcVar4 + 8) = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = pcVar4;
  *param_3 = (int)pcVar4;
  *(uint *)pcVar4 = uVar1 - 0x10;
  piVar3 = (int *)DAT_1000c0b4;
  *(uint8_t *)((uintptr_t)pcVar4+0xc) = 0x1;
LAB_100061b4:
  if (piVar3 == (int *)0x0) {
    DAT_1000c0b4 = pcVar4;
    return;
  }
  return;
}

#undef DAT_1000c0b0
#undef DAT_1000c0b4
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
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
 * Address: 0x10006250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006250(char *param_1,int param_2)

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
        if (DAT_1000c0b8 != 0) {
          DAT_1000c0b8 = DAT_1000c0b8 - 1;
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_1000c0b8 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_10002a88(local_224,&DAT_1000c0bc,DAT_1000c0b8);
            uVar2 = DAT_1000c0b8;
          }
          local_224[uVar2] = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_1000c0b8 = 0;
        }
        else {
          if (DAT_1000c0b8 - 0x1ff < 0xfffffe00) {
            recovered_10002a88(local_224,&DAT_1000c0bc,DAT_1000c0b8);
            local_224[DAT_1000c0b8] = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_1000c0b8 = 0;
          }
          (&DAT_1000c0bc)[DAT_1000c0b8] = cVar1;
          DAT_1000c0b8 = DAT_1000c0b8 + 1;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_1000c0b8
#undef DAT_1000c0bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
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
 * Address: 0x10006434
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006434(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (DAT_1000c0b8 != 0) {
    recovered_10002a88(local_210,&DAT_1000c0bc,DAT_1000c0b8);
    uVar1 = DAT_1000c0b8;
  }
  local_210[uVar1] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_1000c0b8 = 0;
  return;
}

#undef DAT_1000c0b8
#undef DAT_1000c0bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
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
 * Address: 0x100064f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100064f4(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_1000c0b8 == 0) {
    return;
  }
  recovered_10002a88(auStack_214,&DAT_1000c0bc,DAT_1000c0b8);
  auStack_214[DAT_1000c0b8] = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_1000c0b8 = 0;
  return;
}

#undef DAT_1000c0b8
#undef DAT_1000c0bc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000be5e
#define DAT_1000be5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065b0
 */

void recovered_100065b0(char *param_1,undefined1 *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined1 *puVar2;

  format = &DAT_1000be5e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000be34;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10006034(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10006250(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000be34
#undef DAT_1000be5e
#undef acStack_14c

#undef DAT_1000be7c
#define DAT_1000be7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000be61
#define str_1000be61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006608
 */

void recovered_10006608(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003b18(str_1000be61);
  recovered_10006250(str_1000be61,uVar1);
  uVar1 = recovered_10003b18(&DAT_1000be7c);
  recovered_10006250(&DAT_1000be7c,uVar1);
  return;
}

#undef DAT_1000be7c
#undef str_1000be61

#undef DAT_1000be7c
#define DAT_1000be7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000be7f
#define str_1000be7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006654
 */

void recovered_10006654(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10003b18(str_1000be7f);
  recovered_10006250(str_1000be7f,uVar1);
  uVar1 = recovered_10003b18(&DAT_1000be7c);
  recovered_10006250(&DAT_1000be7c,uVar1);
  return;
}

#undef DAT_1000be7c
#undef str_1000be7f

#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
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
 * Address: 0x100066a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100066a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_1000c0b8 != 0) {
    recovered_10002a88(auStack_224,&DAT_1000c0bc,DAT_1000c0b8);
    auStack_224[DAT_1000c0b8] = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_1000c0b8 = 0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_1000c0b8
#undef DAT_1000c0bc
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
 * Address: 0x100067f4
 */

undefined4 recovered_100067f4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067fc
 */

void recovered_100067fc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006800
 */

undefined4 recovered_10006800(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000be5e
#define DAT_1000be5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
#undef str_1000bf13
#define str_1000bf13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000bf20
#define str_1000bf20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000bf2e
#define str_1000bf2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#define local_24 (*(void * *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006808
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10006808(char *param_1,int param_2)

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
    goto LAB_10006a7c;
  }
  iVar2 = recovered_10003b40(param_1,str_1000bf13);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10006a08:
    puVar4 = recovered_10002990(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003218(puVar4,0,800);
      puVar4[0x43] = 0xffffffff;
      *(bool *)(puVar4 + 0x44) = iVar2 == 0;
      *puVar4 = uVar7;
      *(bool *)((int)puVar4 + 0x111) = iVar2 != 0;
      pf_varargs_10006034__4_((char *)(puVar4 + 1),0xf1,&DAT_1000be5e,(uint)param_1);
      return puVar4;
    }
  }
  else {
    iVar3 = recovered_10003b40(param_1,str_1000bf20);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10006a08;
    }
    iVar3 = recovered_10003b40(param_1,str_1000bf2e);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10006a08;
    }
    puVar4 = recovered_10002990(800);
    if (puVar4 != (undefined4 *)0x0) {
      recovered_10003218(puVar4,0,800);
      *puVar4 = 0;
      pcVar5 = recovered_10003ef8(unaff_r8,'r');
      uVar8 = 1;
      uVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10003ef8(unaff_r8,'+');
        uVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10003ef8(unaff_r8,'a');
          uVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            uVar1 = 1;
          }
        }
      }
      *(undefined1 *)(puVar4 + 0x44) = uVar1;
      pcVar5 = recovered_10003ef8(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10003ef8(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10003ef8(unaff_r8,'+');
        uVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          uVar8 = 1;
        }
      }
      *(undefined1 *)((int)puVar4 + 0x111) = uVar8;
      pcVar5 = recovered_10003ef8(unaff_r8,'a');
      *(bool *)((int)puVar4 + 0x112) = pcVar5 != (char *)0x0;
      puVar4[0x43] = 0xffffffff;
      pf_varargs_10006034__4_((char *)(puVar4 + 1),0xf1,&DAT_1000be5e,(uint)param_1);
      recovered_10003218(&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10003ef8(unaff_r8,'w');
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
              destination = recovered_10002a34((void *)puVar4[0x3f],size);
              if (destination == (void *)0x0) {
                *(undefined1 *)((int)puVar4 + 0x115) = 1;
                uVar7 = 0xc;
                goto LAB_10006aa4;
              }
              puVar4[0x41] = size;
              puVar4[0x3f] = destination;
              puVar4[0x3e] = destination;
            }
            else {
              destination = (void *)puVar4[0x3f];
            }
            recovered_10002a88(destination,local_24,local_20);
          }
          else {
            puVar4[0x3e] = local_24;
          }
          puVar4[0x40] = local_20;
        }
      }
      else if (*(char *)((int)puVar4 + 0x111) == '\0') {
        uVar7 = 2;
LAB_10006aa4:
        *DAT_10010004 = uVar7;
        recovered_100029e4(puVar4);
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
LAB_10006a7c:
  *DAT_10010004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000be5e
#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000bf13
#undef str_1000bf20
#undef str_1000bf2e
#undef local_24
#undef local_20

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
 * Address: 0x10006b8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006b8c(char *param_1,int param_2,uint *param_3)

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
        *DAT_10010004 = 5;
      }
    }
    if ((void *)param_3[0x3f] != (void *)0x0) {
      recovered_100029e4((void *)param_3[0x3f]);
    }
    recovered_100029e4(param_3);
  }
  recovered_10006808(param_1,param_2);
  return;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
 * Address: 0x10006c8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006c8c(uint *param_1)

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
      *DAT_10010004 = 5;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_100029e4((void *)param_1[0x3f]);
  }
  recovered_100029e4(param_1);
  return uVar3;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d84
 */

uint recovered_10006d84(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
          recovered_10002a88(param_1,(void *)(unaff_r4[0x3e] + uVar5),count);
          unaff_r4[0x42] = unaff_r4[0x42] + count;
          if (uVar1 < uVar3) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10001d60(count,param_2);
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
            uVar1 = recovered_10006eb0(unaff_r4);
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


#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000c0b8
#define DAT_1000c0b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2acU)))
#undef DAT_1000c0bc
#define DAT_1000c0bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2b0U)))
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
 * Address: 0x10006eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006eb0(int *param_1)

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
LAB_10006f0c:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000c0b8 != 0) {
      recovered_10002a88(auStack_220,&DAT_1000c0bc,DAT_1000c0b8);
      auStack_220[DAT_1000c0b8] = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_1000c0b8 = 0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      text = (char *)((int)param_1 + 0x116);
      uVar3 = 0;
      iVar1 = (*_DAT_40010844)(text,0x1fe,&DAT_1000be34,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10003b18(text);
        param_1[0xc6] = uVar2 + 1;
        text[uVar2] = '\n';
        text[param_1[0xc6]] = '\0';
        goto LAB_10006f0c;
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

#undef DAT_1000be34
#undef DAT_1000c0b8
#undef DAT_1000c0bc
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

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100070b0
 */

int recovered_100070b0(void *param_1,int param_2,int param_3,uint *param_4)

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
      recovered_10006250(param_1,count);
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
        pvVar1 = recovered_10002a34((void *)param_4[0x3f],size);
        if (pvVar1 == (void *)0x0) {
          *(undefined1 *)((int)param_4 + 0x115) = 1;
          *DAT_10010004 = 0xc;
          return 0;
        }
        uVar2 = param_4[0x42];
        param_4[0x3f] = (uint)pvVar1;
        param_4[0x3e] = (uint)pvVar1;
        param_4[0x41] = size;
      }
      uVar3 = param_4[0x40];
      if (uVar3 < uVar2) {
        recovered_10003218((void *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10002a88((void *)(param_4[0x3f] + uVar2),param_1,count);
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

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007228
 */

undefined4 recovered_10007228(int *param_1,uint param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_1000723c;
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
LAB_1000723c:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10010004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072d8
 */

undefined4 recovered_100072d8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x108);
}

#undef DAT_10010004

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
 * Address: 0x10007300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007300(uint *param_1)

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
        *DAT_10010004 = 5;
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010838
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d8
 */

undefined1 recovered_100073d8(int param_1)

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
 * Address: 0x100073e8
 */

undefined1 recovered_100073e8(int param_1)

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
 * Address: 0x100073f8
 */

void recovered_100073f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007414
 */

void recovered_10007414(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
 * Address: 0x10007438
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10007438(int param_1)

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
  *DAT_10010004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10010004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001083c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001083c

#undef DAT_10010004
#define DAT_10010004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x41f8U)))
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
#define local_28 (*(undefined4 *)(frame + 24))
#define uStack_24 (*(undefined4 *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074c8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100074c8(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10010004 = 0x16;
    return 0xffffffff;
  }
  recovered_10003218(&local_28,0,0xc);
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
  *DAT_10010004 = uVar2;
  return 0xffffffff;
}

#undef DAT_10010004
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
#undef local_28
#undef uStack_24

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
 * Address: 0x1000763c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000763c(int param_1,undefined4 *param_2,ulong *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint size;
  void *destination;
  undefined4 uVar2;

  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (ulong *)0x0)) &&
      (recovered_10003218(&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    size = local_20;
    if (local_20 < 2) {
      size = 1;
    }
    destination = recovered_10002990(size);
    if (destination != (void *)0x0) {
      if (local_20 == 0) {
        local_20 = 0;
      }
      else {
        recovered_10002a88(destination,local_24,local_20);
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
 * Address: 0x1000773c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000773c(int param_1,int param_2,int param_3)

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
 * Address: 0x100077c4
 */

undefined4 recovered_100077c4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077cc
 */

void recovered_100077cc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d0
 */

undefined4 recovered_100077d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077d8
 */

undefined4 recovered_100077d8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

undefined4 recovered_100077e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e8
 */

char * recovered_100077e8(char *param_1,char param_2,int param_3)

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
 * Address: 0x1000781c
 */

int recovered_1000781c(char *left,char *right,ulong count)

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


#undef DAT_1000bea2
#define DAT_1000bea2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000bea5
#define str_1000bea5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000beb2
#define str_1000beb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6U)))
#undef str_1000bebc
#define str_1000bebc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000bed0
#define str_1000bed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000bede
#define str_1000bede (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_1000bef0
#define str_1000bef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000befc
#define str_1000befc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000bf0d
#define str_1000bf0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007860
 */

char * recovered_10007860(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000bea2;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_10007880_caseD_0;
  default:
    pcVar1 = str_1000bf0d;
switchD_10007880_caseD_0:
    return pcVar1;
  case 2:
    return str_1000bea5;
  case 5:
    return str_1000beb2;
  case 9:
    return str_1000bebc;
  case 0xc:
    return str_1000bed0;
  case 0xd:
    return str_1000bede;
  case 0x11:
    return str_1000bef0;
  case 0x16:
    return str_1000befc;
  }
}

#undef DAT_1000bea2
#undef str_1000bea5
#undef str_1000beb2
#undef str_1000bebc
#undef str_1000bed0
#undef str_1000bede
#undef str_1000bef0
#undef str_1000befc
#undef str_1000bf0d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

undefined4 recovered_10007960(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007968
 */

undefined4 recovered_10007968(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_1000c2bc
#define DAT_1000c2bc (*(int *)(((uintptr_t)pf_module_state + 0x4b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007970
 */

void recovered_10007970(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c2bc = DAT_1000c2bc + 1;
  return;
}

#undef DAT_1000c2bc

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10007998(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_100079a8(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_100079c0(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_10007a64
#define DAT_10007a64 (*(int *)(0x10007a64U))
#undef DAT_10007a68
#define DAT_10007a68 (*(int *)(0x10007a68U))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined1 * *)(frame + 60))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079e0
 */

void recovered_100079e0(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10007a6c;
  local_20 = ((uintptr_t)pf_module_state + 0x140U);
  local_18 = (0x1cU) + 0x10007a18;
  local_38 = 1;
  recovered_1000805c(&uStack_3c);
  recovered_1000297c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10007a40);
  (*pcVar1)();
}

#undef DAT_10007a64
#undef DAT_10007a68
#undef local_1c
#undef local_18
#undef uStack_3c
#undef local_14
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a6c
 */

undefined4 recovered_10007a6c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a74
 */

void recovered_10007a74(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007a84(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}


#undef DAT_1000c2c0
#define DAT_1000c2c0 (*(int *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a84
 */

void recovered_10007a84(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1000c2c0;
  DAT_1000c2c0 = param_1;
  recovered_10007ef8(param_1);
  return;
}

#undef DAT_1000c2c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007abc
 */

void * recovered_10007abc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10002990(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_1000297c();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ae8
 */

void * recovered_10007ae8(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10002990(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_1000297c();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10007bd4
#define DAT_10007bd4 (*(int *)(0x10007bd4U))
#undef DAT_10007bd8
#define DAT_10007bd8 (*(int *)(0x10007bd8U))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b14
 */

void recovered_10007b14(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007a6c;
  local_78 = ((uintptr_t)pf_module_state + 0x150U);
  local_70 = (0x3cU) + 0x10007b68;
  local_90 = 1;
  recovered_1000805c(&uStack_94);
  recovered_100029e4(param_1);
  recovered_10008080(&uStack_94);
  return;
}

#undef DAT_10007bd4
#undef DAT_10007bd8
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef auStack_68
#undef local_6c

#undef DAT_10007c9c
#define DAT_10007c9c (*(int *)(0x10007c9cU))
#undef DAT_10007ca0
#define DAT_10007ca0 (*(int *)(0x10007ca0U))
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
 * Address: 0x10007bdc
 */

void recovered_10007bdc(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007a6c;
  local_78 = ((uintptr_t)pf_module_state + 0x160U);
  local_70 = (0x3cU) + 0x10007c30;
  local_90 = 1;
  recovered_1000805c(&uStack_94);
  recovered_100029e4(param_1);
  recovered_10008080(&uStack_94);
  return;
}

#undef DAT_10007c9c
#undef DAT_10007ca0
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10007d64
#define DAT_10007d64 (*(int *)(0x10007d64U))
#undef DAT_10007d68
#define DAT_10007d68 (*(int *)(0x10007d68U))
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
 * Address: 0x10007ca4
 */

void recovered_10007ca4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007a6c;
  local_78 = ((uintptr_t)pf_module_state + 0x170U);
  local_70 = (0x3cU) + 0x10007cf8;
  local_90 = 1;
  recovered_1000805c(&uStack_94);
  recovered_100029e4(param_1);
  recovered_10008080(&uStack_94);
  return;
}

#undef DAT_10007d64
#undef DAT_10007d68
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10007e2c
#define DAT_10007e2c (*(int *)(0x10007e2cU))
#undef DAT_10007e30
#define DAT_10007e30 (*(int *)(0x10007e30U))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_90 (*(undefined4 *)(frame + 32))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d6c
 */

void recovered_10007d6c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10007a6c;
  local_78 = ((uintptr_t)pf_module_state + 0x180U);
  local_70 = (0x3cU) + 0x10007dc0;
  local_90 = 1;
  recovered_1000805c(&uStack_94);
  recovered_100029e4(param_1);
  recovered_10008080(&uStack_94);
  return;
}

#undef DAT_10007e2c
#undef DAT_10007e30
#undef auStack_a0
#undef local_90
#undef uStack_94
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e34
 */

undefined4 recovered_10007e34(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e3c
 */

uint recovered_10007e3c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e4c
 */

void recovered_10007e4c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e5c
 */

void recovered_10007e5c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e60
 */

undefined4 * recovered_10007e60(uint param_1)

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
  puVar1 = recovered_10002990(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_100079e0();
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
      if (size == uVar6) goto LAB_10007edc;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_10007edc:
  return puVar1 + 7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ee8
 */

void recovered_10007ee8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_100029e4((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ef8
 */

int recovered_10007ef8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_1000c2c0
#define DAT_1000c2c0 (*(void * *)(((uintptr_t)pf_module_state + 0x4b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f00
 */

void recovered_10007f00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  undefined4 uVar2;

  pointer = DAT_1000c2c0;
  if (DAT_1000c2c0 == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1000c2c0 + 0x18);
  uVar2 = *(undefined4 *)((int)DAT_1000c2c0 + 8);
  *(undefined4 *)((int)DAT_1000c2c0 + 8) = 0;
  DAT_1000c2c0 = (void *)uVar2;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_100029e4(pointer);
  return;
}

#undef DAT_1000c2c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f68
 */

void recovered_10007f68(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_10007f90((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_1000c2c0
#define DAT_1000c2c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4b8U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f90
 */

void recovered_10007f90(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_1000c2c4 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_1000c2c4;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_100088a8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_10008114(param_1);
        puVar3 = DAT_1000c2c0;
                    /* WARNING: Subroutine does not return */
        if (DAT_1000c2c0 == (undefined4 *)0x0) {
          recovered_100079e0();
        }
        DAT_1000c2c0[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_10007f90(puVar3);
        *extraout_r0 = (int)DAT_1000c2c4;
        DAT_1000c2c4 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}

#undef DAT_1000c2c0
#undef DAT_1000c2c4
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000c2c0
#define DAT_1000c2c0 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b4U)))
#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008024
 */

void recovered_10008024(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1000c2c0;
                    /* WARNING: Subroutine does not return */
  if (DAT_1000c2c0 == (undefined4 *)0x0) {
    recovered_100079e0();
  }
  DAT_1000c2c0[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_10007f90(puVar1);
  *extraout_r0 = DAT_1000c2c4;
  DAT_1000c2c4 = extraout_r0;
  return;
}

#undef DAT_1000c2c0
#undef DAT_1000c2c4

#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000805c
 */

void recovered_1000805c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c2c4;
  DAT_1000c2c4 = param_1;
  return;
}

#undef DAT_1000c2c4

#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008080
 */

void recovered_10008080(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000c2c4;
  if (DAT_1000c2c4 == param_1) {
    puVar2 = &DAT_1000c2c4;
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

#undef DAT_1000c2c4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080c8
 */

void recovered_100080c8(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10007f90(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080d4
 */

void recovered_100080d4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}


#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100080e0
 */

void recovered_100080e0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000c2c4 != (int *)0x0) {
    DAT_1000c2c4 = (int *)*DAT_1000c2c4;
  }
  recovered_10008114(param_1);
  return;
}

#undef DAT_1000c2c4

#undef DAT_1000c2c4
#define DAT_1000c2c4 (*(int * *)(((uintptr_t)pf_module_state + 0x4b8U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008114
 */

void recovered_10008114(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_1000c2c4 != (int *)0x0) {
    piVar5 = (int *)param_1[3];
    do {
      piVar1 = DAT_1000c2c4;
      if (DAT_1000c2c4 == piVar5) {
        iVar4 = param_1[5];
        iVar3 = param_1[4];
        DAT_1000c2c4[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_100081c8:
        piVar1[1] = iVar3;
        recovered_10007998((int)piVar1);
                    /* WARNING: Subroutine does not return */
        recovered_100080e0(extraout_r0);
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_100088a8((int)DAT_1000c2c4,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_100081c8;
      }
      DAT_1000c2c4 = (int *)*piVar1;
    } while (DAT_1000c2c4 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}

#undef DAT_1000c2c4
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081d4
 */

void recovered_100081d4(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100080e0(in_r0);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e0
 */

undefined4 recovered_100081e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081e8
 */

void recovered_100081e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100079e0();
}


#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100081f4
 */

int recovered_100081f4(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_100082e0:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_100082e0;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_1000c064) {
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

#undef DAT_1000c064

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e8
 */

void recovered_100082e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082ec
 */

undefined4 recovered_100082ec(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082f4
 */

bool recovered_100082f4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008308
 */

bool recovered_10008308(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008348
 */

bool recovered_10008348(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008374
 */

bool recovered_10008374(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008390
 */

bool recovered_10008390(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083ac
 */

bool recovered_100083ac(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100083c8
 */

bool recovered_100083c8(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_100083e8(double value) {
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
float recovered_100084d0(float value){return (float)recovered_100083e8((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_100085d0(long double value){return (long double)recovered_100083e8((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_100086b8(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086d4
 */

double recovered_100086d4(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_100042d8(param_1,param_2);
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
 * Address: 0x1000872c
 */

ulonglong recovered_1000872c(byte *param_1,undefined4 *param_2,uint param_3)

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

  if (param_1 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = param_1; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x10008798;
    }
  }
  bVar1 = false;
joined_r0x10008798:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
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
          (uVar3 = (ulonglong)param_3 * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar4 = param_1;
    }
    *param_2 = pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088a4
 */

ulonglong recovered_100088a4(byte *param_1,undefined4 *param_2,uint param_3)

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

  if (param_1 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    for (pbVar4 = param_1; (uVar6 = (uint)*pbVar4, uVar6 - 9 < 5 || (uVar6 == 0x20));
        pbVar4 = pbVar4 + 1) {
    }
    if (uVar6 == 0x2b || uVar6 == 0x2d) {
      pbVar4 = pbVar4 + 1;
      bVar1 = uVar6 == 0x2d;
      goto joined_r0x10008798;
    }
  }
  bVar1 = false;
joined_r0x10008798:
  if (param_3 == 0x10) {
    param_3 = 0x10;
    if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
      pbVar4 = pbVar4 + 2;
    }
  }
  else if ((param_3 == 0) && (param_3 = 10, *pbVar4 == 0x30)) {
    if ((pbVar4[1] | 0x20) == 0x78) {
      pbVar4 = pbVar4 + 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
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
          (uVar3 = (ulonglong)param_3 * (uVar2 & 0xffffffff) + CONCAT44(iVar5 * param_3,uVar6),
          (int)uVar6 < (int)param_3));
  if (param_2 != (undefined4 *)0x0) {
    if (iVar8 == 0) {
      pbVar4 = param_1;
    }
    *param_2 = pbVar4;
  }
  uVar3 = CONCAT44(-(iVar5 + (uint)((int)uVar2 != 0)),-(int)uVar2);
  if (!bVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}


#undef DAT_1000bfc4
#define DAT_1000bfc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b8U)))
#undef DAT_1000c064
#define DAT_1000c064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x258U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100088a8
 */

undefined4 recovered_100088a8(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_10008c5c((uint)*pbVar10,&local_28);
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
          goto LAB_10008a80;
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
LAB_10008a80:
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
LAB_10008c3c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000bfc4 + uVar14 * 4) * uVar17;
    puVar7 = recovered_10008c5c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_10008c3c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_10008c3c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_10008c3c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_1000c064) goto LAB_10008c10;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_10008c3c;
  }
LAB_10008c10:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_10008a80;
}

#undef DAT_1000bfc4
#undef DAT_1000c064
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008c5c
 */

undefined4 * recovered_10008c5c(uint param_1,undefined4 *param_2)

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
      goto switchD_10008c8c_caseD_5;
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
switchD_10008c8c_caseD_5:
  return puVar5;
}


#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int * *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010814
#define DAT_40010814 (*(uint8_t *)(0x40010814U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010814
#define _DAT_40010814 (*(code * *)(0x40010814U))
#undef str_1000bf3c
#define str_1000bf3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008dec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_10008dec(char *param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint extraout_r1 = 0;
  uint extraout_r2 = 0;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  bool bVar18;

  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x17 < _DAT_40010808)) &&
     (_DAT_40010814 != (code *)0x0)) {
    (*_DAT_40010814)();
  }
  piVar5 = recovered_10007abc(0x4c);
  piVar5[0xc] = 0;
  piVar5[0xd] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar5[0xe] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar5[0xf] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  piVar5[0x10] = 0;
  piVar5[1] = 0;
  piVar5[2] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  piVar5[3] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  piVar5[4] = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  pcVar10 = str_1000bf3c;
  if (param_1 != (char *)0x0) {
    pcVar10 = param_1;
  }
  piVar5[0x12] = 0;
  piVar5[0x11] = 0;
  piVar5[0xb] = 0;
  *(undefined1 *)((int)piVar5 + 0x2a) = 0;
  *(undefined2 *)(piVar5 + 10) = 0;
  piVar5[9] = 0;
  piVar5[8] = 0;
  piVar5[7] = 0;
  piVar5[6] = 0;
  *piVar5 = 0;
  piVar5[5] = 0;
  uVar11 = 0;
  do {
    uVar6 = uVar11;
    uVar11 = uVar6 + 1;
  } while (pcVar10[uVar6] != '\0');
  recovered_1000b710(piVar5,(int)pcVar10,uVar6);
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  uVar11 = 1;
  if (1 < (int)param_2) {
    uVar11 = param_2;
  }
  uVar7 = 0;
  piVar5[6] = param_3;
  piVar5[4] = param_3;
  piVar5[5] = uVar11;
  piVar5[3] = uVar11;
  uVar13 = uVar11 >> 1;
  uVar6 = uVar11 * param_3 * 4;
  piVar5[0x11] = 0;
  piVar5[9] = param_3 >> 1;
  piVar5[8] = uVar13;
  if (uVar11 * param_3 * 4 <= (uint)piVar5[0x12]) goto LAB_10008f98;
  puVar8 = recovered_10007abc(uVar6);
  uVar11 = piVar5[0x11];
  puVar9 = (undefined4 *)piVar5[0x10];
  if (uVar11 != 0) {
    bVar18 = uVar11 == 0x10;
    uVar7 = 0;
    uVar13 = extraout_r2;
    if (0xf < uVar11) {
      uVar13 = (int)puVar8 - (int)puVar9;
      bVar18 = uVar13 == 0xf;
    }
    if ((0xf < uVar11 && 0xe < uVar13) && !bVar18) {
      uVar7 = uVar11 & 0xfffffff0;
      puVar14 = puVar8;
      uVar13 = uVar7;
      puVar16 = puVar9;
      do {
        uVar1 = *puVar16;
        uVar2 = puVar16[1];
        uVar3 = puVar16[2];
        uVar4 = puVar16[3];
        puVar16 = puVar16 + 4;
        uVar13 = uVar13 - 0x10;
        *puVar14 = uVar1;
        puVar14[1] = uVar2;
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        puVar14 = puVar14 + 4;
      } while (uVar13 != 0);
      if (uVar11 == uVar7) goto LAB_10008f88;
    }
    iVar12 = uVar11 - uVar7;
    puVar15 = (undefined1 *)((int)puVar8 + uVar7);
    puVar17 = (undefined1 *)((int)puVar9 + uVar7);
    do {
      iVar12 = iVar12 + -1;
      *puVar15 = *puVar17;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar12 != 0);
  }
LAB_10008f88:
  recovered_10007b14(puVar9);
  uVar7 = piVar5[0x11];
  piVar5[0x12] = uVar6;
  piVar5[0x10] = (int)puVar8;
  uVar13 = extraout_r1;
LAB_10008f98:
  if (uVar7 < uVar6) {
    uVar13 = 0;
    do {
      *(undefined1 *)(piVar5[0x10] + uVar7) = 0;
      uVar7 = piVar5[0x11] + 1;
      piVar5[0x11] = uVar7;
    } while (uVar7 < uVar6);
  }
  DAT_1000c2c8 = piVar5;
  recovered_10009000((int)piVar5,uVar13);
  recovered_10009360((int)piVar5);
  return piVar5;
}

#undef DAT_1000c2c8
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010814
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010814
#undef str_1000bf3c

#define local_48 (*(uint *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_34 (*(int *)(frame + 44))
#define local_24 (*(undefined1 *)(frame + 60))
#define local_23 (*(undefined2 *)(frame + 61))
#define local_21 (*(undefined1 *)(frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009000
 */

void recovered_10009000(int param_1,int param_2)

{pf_console_compose((void *)param_1);}



#undef local_48
#undef local_44
#undef local_34
#undef local_24
#undef local_23
#undef local_21

#undef DAT_1000c2cc
#define DAT_1000c2cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4c0U)))
#undef DAT_1000c2d0
#define DAT_1000c2d0 (*(int *)(((uintptr_t)pf_module_state + 0x4c4U)))
#undef DAT_1000c2d4
#define DAT_1000c2d4 (*(int *)(((uintptr_t)pf_module_state + 0x4c8U)))
#undef DAT_1000c2d8
#define DAT_1000c2d8 (*(uint *)(((uintptr_t)pf_module_state + 0x4ccU)))
#undef DAT_1000c2dc
#define DAT_1000c2dc (*(uint *)(((uintptr_t)pf_module_state + 0x4d0U)))
#undef DAT_1000c2e0
#define DAT_1000c2e0 (*(uint *)(((uintptr_t)pf_module_state + 0x4d4U)))
#undef DAT_1000c2e4
#define DAT_1000c2e4 (*(int *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_1000c2e8
#define DAT_1000c2e8 (*(uint *)(((uintptr_t)pf_module_state + 0x4dcU)))
#undef DAT_1000c2ec
#define DAT_1000c2ec (*(uint *)(((uintptr_t)pf_module_state + 0x4e0U)))
#undef DAT_1000c2f0
#define DAT_1000c2f0 (*(uint *)(((uintptr_t)pf_module_state + 0x4e4U)))
#undef DAT_1000c2f4
#define DAT_1000c2f4 (*(uint *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_1000c2f8
#define DAT_1000c2f8 (*(uint *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_1000c2fc
#define DAT_1000c2fc (*(uint *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001087c
#define DAT_4001087c (*(uint8_t *)(0x4001087cU))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001087c
#define _DAT_4001087c (*(code * *)(0x4001087cU))
#define local_78 (*(uint *)(frame + 24))
#define local_60 (*(uint *)(frame + 48))
#define local_54 (*(uint *)(frame + 60))
#define local_50 (*(uint *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009360
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009360(int param_1)

{pf_console_present((void *)param_1);}



#undef DAT_1000c2cc
#undef DAT_1000c2d0
#undef DAT_1000c2d4
#undef DAT_1000c2d8
#undef DAT_1000c2dc
#undef DAT_1000c2e0
#undef DAT_1000c2e4
#undef DAT_1000c2e8
#undef DAT_1000c2ec
#undef DAT_1000c2f0
#undef DAT_1000c2f4
#undef DAT_1000c2f8
#undef DAT_1000c2fc
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001087c
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001087c
#undef local_78
#undef local_60
#undef local_54
#undef local_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a68
 */

void recovered_10009a68(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010818
#define DAT_40010818 (*(uint8_t *)(0x40010818U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010818
#define _DAT_40010818 (*(code * *)(0x40010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a78
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009a78(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    if (DAT_1000c2c8 == param_1) {
      DAT_1000c2c8 = (undefined4 *)0x0;
    }
    param_1[0x11] = 0;
    recovered_10007b14((void *)param_1[0x10]);
    param_1[0xc] = 0;
    recovered_10007b14((void *)param_1[0xb]);
    recovered_10007b14((void *)*param_1);
    recovered_10007b14(param_1);
    if (_DAT_40010800 != 0x50414d57) {
      return;
    }
    if (((_DAT_40010804 != 0) && (0x1b < _DAT_40010808)) && (_DAT_40010818 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10009b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_40010818)();
      return;
    }
  }
  return;
}

#undef DAT_1000c2c8
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010818
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010818

#undef DAT_10009c98
#define DAT_10009c98 (*(int *)(0x10009c98U))
#undef DAT_10009c9c
#define DAT_10009c9c (*(int *)(0x10009c9cU))
#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41fcU)))
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
#define local_a0 (*(undefined1 * *)(frame + 32))
#define local_9c (*(int *)(frame + 36))
#define local_98 (*(undefined4 *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b38
 */

void * recovered_10009b38(undefined4 *param_1)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  undefined1 *puVar3;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_b0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = (undefined1 *)0x0;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x190U);
  local_70 = (0xb8U) + 0x10009b9c;
  recovered_1000805c(&uStack_94);
  uVar2 = 1;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined1 *)*param_1;
    local_90 = 0xffffffff;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_1000be34;
    }
    recovered_1000b710((int *)&local_a0,(int)puVar3,param_1[1]);
    uVar2 = local_9c + 1;
  }
  local_90 = 1;
  local_a4 = recovered_10007ae8(uVar2);
  local_90 = 2;
  puVar3 = &DAT_1000be34;
  if (local_a0 != (undefined1 *)0x0) {
    puVar3 = local_a0;
  }
  recovered_10002a88(local_a4,puVar3,local_9c + 1);
  pvVar1 = local_a4;
  recovered_10007b14(local_a0);
  recovered_10008080(&uStack_94);
  return pvVar1;
}

#undef DAT_10009c98
#undef DAT_10009c9c
#undef DAT_1000be34
#undef DAT_10010008
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
#undef local_a0
#undef local_9c
#undef local_98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ca0
 */

void recovered_10009ca0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cd4
 */

void recovered_10009cd4(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    return;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = 1;
  if (1 < param_2) {
    iVar2 = param_2;
  }
  iVar4 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x18) = param_3;
  iVar1 = iVar2 + -1;
  if (iVar3 <= iVar2 + -1) {
    iVar1 = iVar3;
  }
  if (iVar3 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x10) = param_3;
  iVar3 = param_3 + -1;
  if (iVar4 <= param_3 + -1) {
    iVar3 = iVar4;
  }
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x24) = iVar3;
  recovered_10009000(param_1,iVar3);
  return;
}


#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d3c
 */

void recovered_10009d3c(int *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 == (int *)0x0) {
    return;
  }
  puVar2 = &DAT_1000be34;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
  } while (puVar2[uVar3] != '\0');
  recovered_1000b710(param_1,(int)puVar2,uVar3);
  return;
}

#undef DAT_1000be34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d78
 */

void recovered_10009d78(int param_1,int *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int unaff_r4;
  int iVar2;

  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      param_3 = (undefined1 *)param_2[2];
    }
    if (param_2 != (int *)0x0 && param_3 != (undefined1 *)0x0) {
      iVar1 = *param_2;
      iVar2 = iVar1;
      if (0 < iVar1) {
        iVar2 = param_2[1];
        unaff_r4 = iVar2;
      }
      if (iVar2 < 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      recovered_1000bca8((int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c),param_3,
                         param_3 + iVar1 * unaff_r4 * 4);
      iVar2 = param_2[1];
      *(int *)(param_1 + 0x38) = *param_2;
      *(int *)(param_1 + 0x3c) = iVar2;
      recovered_10009000(param_1,iVar2);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009df8
 */

void recovered_10009df8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int extraout_r1 = 0;

  if (param_1 == 0) {
    return;
  }
  recovered_10009e24();
  recovered_10009000(param_1,extraout_r1);
  recovered_10009360(param_1);
  return;
}


#undef DAT_1000c07c
#define DAT_1000c07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_1000c07d
#define DAT_1000c07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000c07e
#define DAT_1000c07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_1000c07f
#define DAT_1000c07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_1000c081
#define DAT_1000c081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_1000c082
#define DAT_1000c082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000c083
#define DAT_1000c083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef DAT_1000c085
#define DAT_1000c085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x279U)))
#undef DAT_1000c086
#define DAT_1000c086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27aU)))
#undef DAT_1000c087
#define DAT_1000c087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef DAT_1000c089
#define DAT_1000c089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_1000c08a
#define DAT_1000c08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27eU)))
#undef DAT_1000c08b
#define DAT_1000c08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_1000c08d
#define DAT_1000c08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000c08e
#define DAT_1000c08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x282U)))
#undef DAT_1000c08f
#define DAT_1000c08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x283U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000c091
#define DAT_1000c091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000c092
#define DAT_1000c092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
#undef DAT_1000c093
#define DAT_1000c093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_1000c095
#define DAT_1000c095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1000c096
#define DAT_1000c096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000c097
#define DAT_1000c097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1000c098
#define DAT_1000c098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1000c099
#define DAT_1000c099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1000c09a
#define DAT_1000c09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_1000c09b
#define DAT_1000c09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_1000c09d
#define DAT_1000c09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_1000c09e
#define DAT_1000c09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x292U)))
#undef DAT_1000c09f
#define DAT_1000c09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x293U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0a1
#define DAT_1000c0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_1000c0a2
#define DAT_1000c0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef DAT_1000c0a3
#define DAT_1000c0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef DAT_1000c0a4
#define DAT_1000c0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_1000c0a5
#define DAT_1000c0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_1000c0a6
#define DAT_1000c0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_1000c0a7
#define DAT_1000c0a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_1000c0a9
#define DAT_1000c0a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1000c0aa
#define DAT_1000c0aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
#undef DAT_1000c2c8
#define DAT_1000c2c8 (*(int *)(((uintptr_t)pf_module_state + 0x4bcU)))
#undef DAT_1000c300
#define DAT_1000c300 (*(int *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_4001082c
#define DAT_4001082c (*(uint8_t *)(0x4001082cU))
#undef DAT_40010880
#define DAT_40010880 (*(uint8_t *)(0x40010880U))
#undef PTR_DAT_1001000c
#define PTR_DAT_1001000c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4200U)))
#undef PTR_DAT_10010074
#define PTR_DAT_10010074 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4268U)))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_4001082c
#define _DAT_4001082c (*(code * *)(0x4001082cU))
#undef _DAT_40010880
#define _DAT_40010880 (*(code * *)(0x40010880U))
#define uStack_3c (*(uint *)(frame + 20))
#define uStack_2c (*(uint *)(frame + 36))
#define local_40 (*(uint *)(frame + 16))
#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(int *)(frame + 32))
#define local_28 (*(uint *)(frame + 40))
#define local_24 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009e24(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;

  if (DAT_1000c2c8 == 0) {
    DAT_1000c07d = 0;
    DAT_1000c07c = 0;
    DAT_1000c07e = 0;
    DAT_1000c07f = 0;
    DAT_1000c080 = 0;
    DAT_1000c081 = 0;
    DAT_1000c082 = 0;
    DAT_1000c083 = 0;
    DAT_1000c084 = 0;
    DAT_1000c085 = 0;
    DAT_1000c086 = 0;
    DAT_1000c087 = 0;
    DAT_1000c088 = 0;
    DAT_1000c089 = 0;
    DAT_1000c08a = 0;
    DAT_1000c08b = 0;
    DAT_1000c08c = 0;
    DAT_1000c08d = 0;
    DAT_1000c08e = 0;
    DAT_1000c090 = 0;
    DAT_1000c08f = 0;
    DAT_1000c091 = 0;
    DAT_1000c092 = 0;
    DAT_1000c093 = 0;
    DAT_1000c094 = 0;
    DAT_1000c095 = 0;
    DAT_1000c096 = 0;
    DAT_1000c097 = 0;
    DAT_1000c098 = 0;
    DAT_1000c099 = 0;
    DAT_1000c09a = 0;
    DAT_1000c09b = 0;
    DAT_1000c09c = 0;
    DAT_1000c09d = 0;
    DAT_1000c09e = 0;
    DAT_1000c09f = 0;
    DAT_1000c0a0 = 0;
    DAT_1000c0a1 = 0;
    DAT_1000c0a3 = 0;
    DAT_1000c0a2 = 0;
    DAT_1000c0a4 = 0;
    DAT_1000c0a5 = 0;
    DAT_1000c0a6 = 0;
    DAT_1000c0a7 = 0;
    DAT_1000c0a8 = 0;
    DAT_1000c0a9 = 0;
    DAT_1000c0aa = 0;
  }
  else {
    iVar10 = DAT_1000c2c8;
    if (_DAT_40010800 == 0x50414d57) {
      if (_DAT_40010804 != 0) {
        while ((0x2f < _DAT_40010808 && (_DAT_4001082c != (code *)0x0))) {
          uVar2 = (*_DAT_4001082c)();
          iVar10 = DAT_1000c2c8;
          if (uVar2 == 0) break;
          uVar9 = uVar2 >> 8;
          if ((uVar2 & 0xff) == 0) {
            if (DAT_1000c2c8 == 0) goto LAB_1000a084;
            switch((uintptr_t)(uVar9 & 0xff)) {
            case 1:
            case 0x48:
              goto switchD_1000a304_caseD_48;
            case 2:
            case 0x50:
              goto switchD_1000a304_caseD_50;
            case 3:
            case 0x4d:
              goto switchD_1000a304_caseD_4d;
            case 4:
            case 0x4b:
              goto switchD_1000a304_caseD_4b;
            case 0xe:
              goto switchD_1000a304_caseD_e;
            case 0x17:
              *(undefined1 *)(DAT_1000c2c8 + 0x1c) = 1;
              break;
            case 0x1c:
              goto switchD_1000a304_caseD_1c;
            case 0x53:
              goto switchD_1000a304_caseD_53;
            }
            goto switchD_1000a304_caseD_f;
          }
          if (DAT_1000c2c8 == 0) {
LAB_1000a084:
            iVar10 = 0;
            goto switchD_1000a304_caseD_f;
          }
          if (DAT_1000c300 == 2) {
            DAT_1000c300 = 0;
            switch((uintptr_t)(uVar2 & 0xff)) {
            case 0x41:
              puVar6 = &DAT_1000c07d;
              break;
            case 0x42:
              puVar6 = &DAT_1000c07e;
              break;
            case 0x43:
              puVar6 = &DAT_1000c080;
              break;
            case 0x44:
              puVar6 = &DAT_1000c07f;
              break;
            default:
              goto switchD_1000a1cc_caseD_5;
            }
            goto LAB_1000a2dc;
          }
          if (DAT_1000c300 == 1) {
            DAT_1000c300 = (uint)((uVar2 & 0xff) == 0x5b) << 1;
            goto switchD_1000a1cc_caseD_5;
          }
          if ((uVar2 & 0xff) == 0x1b) {
            DAT_1000c300 = 1;
            goto switchD_1000a1cc_caseD_5;
          }
          if ((uVar2 - 0x20 & 0xff) < 0x5f) {
            DAT_1000c0aa = (undefined1)uVar2;
            if ((uVar2 - 0x61 & 0xff) < 0x1a) {
              puVar6 = *(undefined1 **)
                        ((int)&PTR_DAT_1001000c + ((int)(uVar2 * 0x1000000 + -0x61000000) >> 0x16));
            }
            else {
              uVar5 = uVar2 - 0x41 & 0xff;
              if (uVar5 < 0x1a) {
                if (0x19 < uVar5) goto switchD_1000a1cc_caseD_5;
                puVar6 = (&PTR_DAT_1001000c)[uVar5];
              }
              else {
                if (9 < (uVar2 - 0x30 & 0xff)) goto LAB_1000a1b4;
                puVar6 = (&PTR_DAT_10010074)[uVar2 + 0xd0 & 0xff];
              }
            }
            goto LAB_1000a2dc;
          }
LAB_1000a1b4:
          switch((uintptr_t)(uVar2 & 0xff)) {
          case 3:
          case 4:
            *(undefined1 *)(DAT_1000c2c8 + 0x1c) = 1;
          case 5:
          case 6:
          case 7:
          case 9:
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
            goto switchD_1000a1cc_caseD_5;
          case 8:
switchD_1000a1cc_caseD_8:
            puVar6 = &DAT_1000c0a7;
            break;
          case 10:
          case 0xd:
            puVar6 = &DAT_1000c07c;
            break;
          case 0x20:
            puVar6 = &DAT_1000c0a9;
            break;
          case 0x2d:
            puVar6 = &DAT_1000c0a5;
            break;
          case 0x2e:
            puVar6 = &DAT_1000c0a6;
            break;
          default:
            if ((uVar2 & 0xff) == 0x7f) goto switchD_1000a1cc_caseD_8;
            goto switchD_1000a1cc_caseD_5;
          }
LAB_1000a2dc:
          *puVar6 = 1;
switchD_1000a1cc_caseD_5:
          if ((uVar2 & 0xffff) == 0x11b) goto switchD_1000a304_caseD_f;
          switch((uintptr_t)(uVar9 & 0xff)) {
          case 0xe:
switchD_1000a304_caseD_e:
            puVar6 = &DAT_1000c0a7;
            break;
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
            goto switchD_1000a304_caseD_f;
          case 0x1c:
switchD_1000a304_caseD_1c:
            puVar6 = &DAT_1000c07c;
            break;
          case 0x48:
switchD_1000a304_caseD_48:
            puVar6 = &DAT_1000c07d;
            break;
          case 0x4b:
switchD_1000a304_caseD_4b:
            puVar6 = &DAT_1000c07f;
            break;
          case 0x4d:
switchD_1000a304_caseD_4d:
            puVar6 = &DAT_1000c080;
            break;
          case 0x50:
switchD_1000a304_caseD_50:
            puVar6 = &DAT_1000c07e;
            break;
          case 0x53:
switchD_1000a304_caseD_53:
            puVar6 = &DAT_1000c0a8;
            break;
          default:
            if ((uVar9 & 0xff) == 1) {
              *(undefined1 *)(iVar10 + 0x1c) = 1;
            }
            goto switchD_1000a304_caseD_f;
          }
          *puVar6 = 1;
switchD_1000a304_caseD_f:
          if ((_DAT_40010800 != 0x50414d57) || (_DAT_40010804 == 0)) break;
        }
      }
      if (iVar10 == 0) {
        return;
      }
    }
    iVar3 = *(int *)(iVar10 + 0x14);
    iVar7 = *(int *)(iVar10 + 0x20);
    uStack_3c = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
    local_38 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
    local_34 = *(uint *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    iVar8 = *(int *)(iVar10 + 0x24);
    iVar4 = iVar3 + -1;
    if (iVar7 <= iVar3 + -1) {
      iVar4 = iVar7;
    }
    if (iVar7 < 0) {
      iVar4 = 0;
    }
    *(int *)(iVar10 + 0x20) = iVar4;
    iVar3 = 1;
    if (1 < *(int *)(iVar10 + 0x18)) {
      iVar3 = *(int *)(iVar10 + 0x18);
    }
    iVar7 = iVar3 + -1;
    if (iVar8 <= iVar3 + -1) {
      iVar7 = iVar8;
    }
    if (iVar8 < 0) {
      iVar7 = 0;
    }
    *(int *)(iVar10 + 0x24) = iVar7;
    local_40 = 0;
    local_30 = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x83 < _DAT_40010808)) &&
       (_DAT_40010880 != (code *)0x0)) {
      uStack_2c = uStack_3c;
      local_28 = local_38;
      local_24 = local_34;
      iVar3 = (*_DAT_40010880)(&local_40);
      if (iVar3 != 0) {
        if ((local_40 & 1) == 0) {
          if ((local_40 & 2) == 0) {
            uVar9 = *(uint *)(iVar10 + 0x20);
            uVar2 = *(uint *)(iVar10 + 0x24);
          }
          else {
            uVar9 = *(uint *)(iVar10 + 0x20);
            uVar2 = *(uint *)(iVar10 + 0x24);
            if (local_30 != 0 || uStack_2c != 0) {
              uVar9 = uVar9 + local_30;
              uVar2 = uVar2 + uStack_2c;
            }
          }
        }
        else {
          iVar3 = *(int *)(iVar10 + 0x14);
          uVar2 = 0;
          uVar9 = 0;
          if (1 < iVar3) {
            if (local_28 == 0) {
              uVar9 = iVar3 - 1U;
              if (local_38 <= iVar3 - 1U) {
                uVar9 = local_38;
              }
              if ((int)local_38 < 0) {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = local_38 & ~((int)local_38 >> 0x1f);
              if (local_28 <= uVar9) {
                uVar9 = local_28;
              }
              lVar1 = (ulonglong)uVar9 * (ulonglong)(iVar3 - 1);
              uVar11 = recovered_10002644((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_28,0);
              uVar9 = (uint)uVar11;
            }
          }
          iVar3 = *(int *)(iVar10 + 0x18);
          if (1 < iVar3) {
            if (local_24 == 0) {
              uVar2 = iVar3 - 1U;
              if (local_34 <= iVar3 - 1U) {
                uVar2 = local_34;
              }
              if ((int)local_34 < 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = local_34 & ~((int)local_34 >> 0x1f);
              if (local_24 <= uVar2) {
                uVar2 = local_24;
              }
              lVar1 = (ulonglong)uVar2 * (ulonglong)(iVar3 - 1);
              uVar11 = recovered_10002644((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_24,0);
              uVar2 = (uint)uVar11;
            }
          }
        }
        iVar3 = *(int *)(iVar10 + 0x14);
        *(byte *)(iVar10 + 0x28) = (byte)uStack_3c & 1;
        *(char *)(iVar10 + 0x2a) = (char)((uStack_3c & 7) >> 2);
        *(char *)(iVar10 + 0x29) = (char)((uStack_3c & 3) >> 1);
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        uVar5 = iVar3 - 1U;
        if ((int)uVar9 <= (int)(iVar3 - 1U)) {
          uVar5 = uVar9;
        }
        if ((int)uVar9 < 0) {
          uVar5 = 0;
        }
        iVar3 = 1;
        if (1 < *(int *)(iVar10 + 0x18)) {
          iVar3 = *(int *)(iVar10 + 0x18);
        }
        *(uint *)(iVar10 + 0x20) = uVar5;
        uVar9 = iVar3 - 1U;
        if ((int)uVar2 <= (int)(iVar3 - 1U)) {
          uVar9 = uVar2;
        }
        if ((int)uVar2 < 0) {
          uVar9 = 0;
        }
        *(uint *)(iVar10 + 0x24) = uVar9;
      }
    }
  }
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c07d
#undef DAT_1000c07e
#undef DAT_1000c07f
#undef DAT_1000c080
#undef DAT_1000c081
#undef DAT_1000c082
#undef DAT_1000c083
#undef DAT_1000c084
#undef DAT_1000c085
#undef DAT_1000c086
#undef DAT_1000c087
#undef DAT_1000c088
#undef DAT_1000c089
#undef DAT_1000c08a
#undef DAT_1000c08b
#undef DAT_1000c08c
#undef DAT_1000c08d
#undef DAT_1000c08e
#undef DAT_1000c08f
#undef DAT_1000c090
#undef DAT_1000c091
#undef DAT_1000c092
#undef DAT_1000c093
#undef DAT_1000c094
#undef DAT_1000c095
#undef DAT_1000c096
#undef DAT_1000c097
#undef DAT_1000c098
#undef DAT_1000c099
#undef DAT_1000c09a
#undef DAT_1000c09b
#undef DAT_1000c09c
#undef DAT_1000c09d
#undef DAT_1000c09e
#undef DAT_1000c09f
#undef DAT_1000c0a0
#undef DAT_1000c0a1
#undef DAT_1000c0a2
#undef DAT_1000c0a3
#undef DAT_1000c0a4
#undef DAT_1000c0a5
#undef DAT_1000c0a6
#undef DAT_1000c0a7
#undef DAT_1000c0a8
#undef DAT_1000c0a9
#undef DAT_1000c0aa
#undef DAT_1000c2c8
#undef DAT_1000c300
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_4001082c
#undef DAT_40010880
#undef PTR_DAT_1001000c
#undef PTR_DAT_10010074
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_4001082c
#undef _DAT_40010880
#undef uStack_3c
#undef uStack_2c
#undef local_40
#undef local_38
#undef local_34
#undef local_30
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9dc
 */

byte recovered_1000a9dc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  return bVar1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9f0
 */

void recovered_1000a9f0(int param_1,byte param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  *(undefined1 *)(param_1 + 0x1f) = param_4;
  *(byte *)(param_1 + 0x1d) = param_2;
  if (*(int *)(param_1 + 0x30) == 0) {
    recovered_10009000(param_1,(uint)param_2);
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa18
 */

int * recovered_1000aa18(int param_1,int in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  int iVar1;
  void *destination;
  int iVar2;
  void *source;
  int *piVar3;

  piVar3 = (int *)0x0;
  if ((param_1 != 0) && (recovered_10009000(param_1,in_r1), *(int *)(param_1 + 0x44) != 0)) {
    piVar3 = recovered_10007abc(0x18);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    count = iVar1 * iVar2 * 4;
    destination = recovered_10007ae8(count);
    source = *(void **)(param_1 + 0x40);
    piVar3[2] = (int)destination;
    recovered_10002a88(destination,source,count);
    piVar3[5] = 0;
    piVar3[4] = 0;
    piVar3[3] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa94
 */

void recovered_1000aa94(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
    return;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aad8
 */

byte recovered_1000aad8(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + param_2 + 0x28);
  }
  return bVar1 & 1;
}


#undef DAT_1000c07c
#define DAT_1000c07c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x270U)))
#undef DAT_1000c07d
#define DAT_1000c07d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x271U)))
#undef DAT_1000c07e
#define DAT_1000c07e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x272U)))
#undef DAT_1000c07f
#define DAT_1000c07f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x273U)))
#undef DAT_1000c080
#define DAT_1000c080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x274U)))
#undef DAT_1000c081
#define DAT_1000c081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x275U)))
#undef DAT_1000c082
#define DAT_1000c082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x276U)))
#undef DAT_1000c083
#define DAT_1000c083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x277U)))
#undef DAT_1000c084
#define DAT_1000c084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
#undef DAT_1000c085
#define DAT_1000c085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x279U)))
#undef DAT_1000c086
#define DAT_1000c086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27aU)))
#undef DAT_1000c087
#define DAT_1000c087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27bU)))
#undef DAT_1000c088
#define DAT_1000c088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27cU)))
#undef DAT_1000c089
#define DAT_1000c089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27dU)))
#undef DAT_1000c08a
#define DAT_1000c08a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27eU)))
#undef DAT_1000c08b
#define DAT_1000c08b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x27fU)))
#undef DAT_1000c08c
#define DAT_1000c08c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x280U)))
#undef DAT_1000c08d
#define DAT_1000c08d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x281U)))
#undef DAT_1000c08e
#define DAT_1000c08e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x282U)))
#undef DAT_1000c08f
#define DAT_1000c08f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x283U)))
#undef DAT_1000c090
#define DAT_1000c090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x284U)))
#undef DAT_1000c091
#define DAT_1000c091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x285U)))
#undef DAT_1000c092
#define DAT_1000c092 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x286U)))
#undef DAT_1000c093
#define DAT_1000c093 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x287U)))
#undef DAT_1000c094
#define DAT_1000c094 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x288U)))
#undef DAT_1000c095
#define DAT_1000c095 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x289U)))
#undef DAT_1000c096
#define DAT_1000c096 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28aU)))
#undef DAT_1000c097
#define DAT_1000c097 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28bU)))
#undef DAT_1000c098
#define DAT_1000c098 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1000c099
#define DAT_1000c099 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28dU)))
#undef DAT_1000c09a
#define DAT_1000c09a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28eU)))
#undef DAT_1000c09b
#define DAT_1000c09b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28fU)))
#undef DAT_1000c09c
#define DAT_1000c09c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x290U)))
#undef DAT_1000c09d
#define DAT_1000c09d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x291U)))
#undef DAT_1000c09e
#define DAT_1000c09e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x292U)))
#undef DAT_1000c09f
#define DAT_1000c09f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x293U)))
#undef DAT_1000c0a0
#define DAT_1000c0a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_1000c0a1
#define DAT_1000c0a1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x295U)))
#undef DAT_1000c0a2
#define DAT_1000c0a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x296U)))
#undef DAT_1000c0a3
#define DAT_1000c0a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x297U)))
#undef DAT_1000c0a4
#define DAT_1000c0a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x298U)))
#undef DAT_1000c0a5
#define DAT_1000c0a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x299U)))
#undef DAT_1000c0a6
#define DAT_1000c0a6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_1000c0a7
#define DAT_1000c0a7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29bU)))
#undef DAT_1000c0a8
#define DAT_1000c0a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29cU)))
#undef DAT_1000c0a9
#define DAT_1000c0a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29dU)))
#undef DAT_1000c0aa
#define DAT_1000c0aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aaf8
 */

void recovered_1000aaf8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c07d = 0;
  DAT_1000c07c = 0;
  DAT_1000c07e = 0;
  DAT_1000c07f = 0;
  DAT_1000c080 = 0;
  DAT_1000c081 = 0;
  DAT_1000c082 = 0;
  DAT_1000c083 = 0;
  DAT_1000c084 = 0;
  DAT_1000c085 = 0;
  DAT_1000c086 = 0;
  DAT_1000c087 = 0;
  DAT_1000c088 = 0;
  DAT_1000c089 = 0;
  DAT_1000c08a = 0;
  DAT_1000c08b = 0;
  DAT_1000c08c = 0;
  DAT_1000c08d = 0;
  DAT_1000c08e = 0;
  DAT_1000c090 = 0;
  DAT_1000c08f = 0;
  DAT_1000c091 = 0;
  DAT_1000c092 = 0;
  DAT_1000c093 = 0;
  DAT_1000c094 = 0;
  DAT_1000c095 = 0;
  DAT_1000c096 = 0;
  DAT_1000c097 = 0;
  DAT_1000c098 = 0;
  DAT_1000c099 = 0;
  DAT_1000c09a = 0;
  DAT_1000c09b = 0;
  DAT_1000c09c = 0;
  DAT_1000c09d = 0;
  DAT_1000c09e = 0;
  DAT_1000c09f = 0;
  DAT_1000c0a0 = 0;
  DAT_1000c0a1 = 0;
  DAT_1000c0a3 = 0;
  DAT_1000c0a2 = 0;
  DAT_1000c0a4 = 0;
  DAT_1000c0a5 = 0;
  DAT_1000c0a6 = 0;
  DAT_1000c0a7 = 0;
  DAT_1000c0a8 = 0;
  DAT_1000c0a9 = 0;
  DAT_1000c0aa = 0;
  return;
}

#undef DAT_1000c07c
#undef DAT_1000c07d
#undef DAT_1000c07e
#undef DAT_1000c07f
#undef DAT_1000c080
#undef DAT_1000c081
#undef DAT_1000c082
#undef DAT_1000c083
#undef DAT_1000c084
#undef DAT_1000c085
#undef DAT_1000c086
#undef DAT_1000c087
#undef DAT_1000c088
#undef DAT_1000c089
#undef DAT_1000c08a
#undef DAT_1000c08b
#undef DAT_1000c08c
#undef DAT_1000c08d
#undef DAT_1000c08e
#undef DAT_1000c08f
#undef DAT_1000c090
#undef DAT_1000c091
#undef DAT_1000c092
#undef DAT_1000c093
#undef DAT_1000c094
#undef DAT_1000c095
#undef DAT_1000c096
#undef DAT_1000c097
#undef DAT_1000c098
#undef DAT_1000c099
#undef DAT_1000c09a
#undef DAT_1000c09b
#undef DAT_1000c09c
#undef DAT_1000c09d
#undef DAT_1000c09e
#undef DAT_1000c09f
#undef DAT_1000c0a0
#undef DAT_1000c0a1
#undef DAT_1000c0a2
#undef DAT_1000c0a3
#undef DAT_1000c0a4
#undef DAT_1000c0a5
#undef DAT_1000c0a6
#undef DAT_1000c0a7
#undef DAT_1000c0a8
#undef DAT_1000c0a9
#undef DAT_1000c0aa

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae00
 */

void recovered_1000ae00(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae04
 */

void recovered_1000ae04(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae08
 */

undefined4 recovered_1000ae08(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae10
 */

void recovered_1000ae10(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae14
 */

undefined4 recovered_1000ae14(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


#undef DAT_1000b708
#define DAT_1000b708 (*(int *)(0x1000b708U))
#undef DAT_1000b70c
#define DAT_1000b70c (*(int *)(0x1000b70cU))
#undef DAT_1000be32
#define DAT_1000be32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26U)))
#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000bf47
#define DAT_1000bf47 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13bU)))
#undef DAT_10010008
#define DAT_10010008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x41fcU)))
#undef DAT_40010800
#define DAT_40010800 (*(uint8_t *)(0x40010800U))
#undef DAT_40010804
#define DAT_40010804 (*(uint8_t *)(0x40010804U))
#undef DAT_40010808
#define DAT_40010808 (*(uint8_t *)(0x40010808U))
#undef DAT_40010850
#define DAT_40010850 (*(uint8_t *)(0x40010850U))
#undef DAT_40010858
#define DAT_40010858 (*(uint8_t *)(0x40010858U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
#undef _DAT_40010800
#define _DAT_40010800 (*(int *)(0x40010800U))
#undef _DAT_40010804
#define _DAT_40010804 (*(int *)(0x40010804U))
#undef _DAT_40010808
#define _DAT_40010808 (*(uint *)(0x40010808U))
#undef _DAT_40010850
#define _DAT_40010850 (*(code * *)(0x40010850U))
#undef _DAT_40010858
#define _DAT_40010858 (*(code * *)(0x40010858U))
#define local_f8 (*(int * *)(frame + 24))
#define local_f4 (*(int * *)(frame + 28))
#define local_f0 (*(char * *)(frame + 32))
#define local_ec (*(uint *)(frame + 36))
#define local_e8 (*(undefined1 * *)(frame + 40))
#define local_e4 (*(void * *)(frame + 44))
#define local_e0 (*(char * *)(frame + 48))
#define local_dc (*(void * *)(frame + 52))
#define local_d8 (*(undefined4 *)(frame + 56))
#define local_d4 (*(char * *)(frame + 60))
#define local_d0 (*(undefined1 * *)(frame + 64))
#define local_cc (*(undefined1 * *)(frame + 68))
#define local_c8 (*(void * *)(frame + 72))
#define local_c0 (*(ulong *)(frame + 80))
#define local_bc (*(int *)(frame + 84))
#define local_b8 (*(int *)(frame + 88))
#define local_b4 (*(undefined4 *)(frame + 92))
#define local_ac (*(char * *)(frame + 100))
#define local_a8 (*(undefined1 * *)(frame + 104))
#define local_a4 (*(undefined1 * *)(frame + 108))
#define local_a0 (*(void * *)(frame + 112))
#define local_9c (*(void * *)(frame + 116))
#define local_98 (*(undefined4 *)(frame + 120))
#define local_90 (*(undefined4 *)(frame + 128))
#define local_7c (*(undefined4 *)(frame + 148))
#define local_78 (*(int *)(frame + 152))
#define local_74 (*(undefined1 * *)(frame + 156))
#define local_70 (*(int *)(frame + 160))
#define local_6c (*(undefined1 * *)(frame + 164))
#define auStack_100 (*(undefined1 (*)[8])(frame + 16))
#define iStack_c4 (*(int *)(frame + 76))
#define uStack_94 (*(undefined4 *)(frame + 124))
#define auStack_68 (*(undefined1 (*)[8])(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae1c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * recovered_1000ae1c(char *param_1,int *param_2,int *param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  void *pvVar20;
  bool bVar21;

  local_74 = auStack_68 + 0x60;
  local_6c = auStack_100;
  local_7c = DAT_10010008;
  local_78 = ((uintptr_t)pf_module_state + 0x198U);
  local_70 = (0x7d8U) + 0x1000ae78;
  local_f0 = param_1;
  recovered_1000805c(&uStack_94);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (local_f0 == (char *)0x0) {
    puVar12 = (undefined1 *)0x0;
    goto LAB_1000b518;
  }
  iStack_c4 = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 4);
  local_c0 = *(ulong *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 8);
  local_bc = *(int *)(((union { uint64_t alignment; byte bytes[16]; }){.bytes={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}).bytes + 12);
  local_b4 = 0;
  local_c8 = (void *)0x0;
  local_b8 = 0;
  local_d8 = 0;
  local_dc = (void *)0x0;
  local_e0 = (char *)0x0;
  uVar15 = 0;
  do {
    uVar17 = uVar15;
    uVar15 = uVar17 + 1;
  } while (local_f0[uVar17] != '\0');
  local_90 = 0xffffffff;
  local_f8 = param_2;
  local_f4 = param_3;
  recovered_1000b710((int *)&local_e0,(int)local_f0,uVar17);
  local_98 = 0;
  local_9c = (void *)0x0;
  local_a0 = (void *)0x0;
  local_ec = 0;
  if (local_dc != (void *)0x0) {
    pcVar7 = local_e0;
    if (local_e0 == (char *)0x0) {
      pcVar7 = &DAT_1000be34;
    }
    local_ec = (uint)(*pcVar7 == '/');
  }
  pvVar8 = (void *)0x0;
  do {
    if (local_dc <= pvVar8) break;
    pcVar7 = local_e0;
    pvVar20 = pvVar8;
    if (local_e0 == (char *)0x0) {
      pcVar7 = &DAT_1000be34;
    }
    do {
      if (pcVar7[(int)pvVar20] == '/') {
        local_e8 = (undefined1 *)0x0;
        local_e4 = pvVar20;
        if (pvVar20 != (void *)0xffffffff) goto LAB_1000afe0;
        break;
      }
      pvVar20 = (void *)((int)pvVar20 + 1);
    } while (local_dc != pvVar20);
    local_e8 = (undefined1 *)0x1;
    pvVar20 = local_dc;
    local_e4 = (void *)0xffffffff;
LAB_1000afe0:
    uVar17 = (int)pvVar20 - (int)pvVar8;
    uVar19 = (int)local_dc - (int)pvVar8;
    local_a4 = (undefined1 *)0x0;
    uVar15 = uVar17;
    if (uVar19 < uVar17) {
      uVar15 = uVar19;
    }
    local_a8 = (undefined1 *)0x0;
    if (uVar17 == 0xffffffff) {
      uVar15 = uVar19;
    }
    local_ac = (char *)0x0;
    local_90 = 1;
    recovered_1000b710((int *)&local_ac,(int)(pcVar7 + (int)pvVar8),uVar15);
    if (local_a8 != (undefined1 *)0x0) {
      pcVar7 = local_ac;
      if (local_ac == (char *)0x0) {
        pcVar7 = &DAT_1000be34;
      }
      if (local_a8 == (undefined1 *)0x1) {
        if (*pcVar7 == '.') goto LAB_1000af64;
      }
      else if (local_a8 == (undefined1 *)0x2) {
        cVar1 = *pcVar7;
        if (cVar1 == '.') {
          pcVar7 = (char *)(uint)(byte)pcVar7[1];
        }
        if (cVar1 == '.' && pcVar7 == (char *)0x2e) {
          if (local_9c != (void *)0x0) {
            pbVar9 = *(byte **)((int)local_a0 + (int)local_9c * 0xc + -0xc);
            uVar15 = *(uint *)((int)local_a0 + (int)local_9c * 0xc + -8);
            pbVar11 = pbVar9;
            if (pbVar9 == (byte *)0x0) {
              pbVar11 = &DAT_1000be34;
            }
            bVar21 = uVar15 == 2;
            if (bVar21) {
              uVar15 = (uint)*pbVar11;
            }
            if ((!bVar21 || uVar15 != 0x2e) || (pbVar11[1] != 0x2e)) {
              recovered_10007b14(pbVar9);
              local_9c = (void *)((int)local_9c + -1);
              goto LAB_1000af64;
            }
          }
          if (local_ec != 0) goto LAB_1000af64;
        }
      }
      local_90 = 2;
      recovered_1000b928((int *)&local_a0,&local_ac);
    }
LAB_1000af64:
    recovered_10007b14(local_ac);
    pvVar8 = (void *)((int)local_e4 + 1);
  } while (local_e8 == (undefined1 *)0x0);
  local_a4 = (undefined1 *)0x0;
  puVar12 = &DAT_1000be34;
  if (local_ec != 0) {
    puVar12 = &DAT_1000bf47;
  }
  local_a8 = (undefined1 *)0x0;
  local_ac = (char *)0x0;
  uVar15 = 0;
  do {
    uVar17 = uVar15;
    uVar15 = uVar17 + 1;
  } while (puVar12[uVar17] != '\0');
  local_90 = 3;
  recovered_1000b710((int *)&local_ac,(int)puVar12,uVar17);
  if (local_9c != (void *)0x0) {
    pvVar8 = (void *)0x0;
    do {
      local_e4 = pvVar8;
      if (pvVar8 != (void *)0x0 || (local_ec & 1) != 0) {
        if (local_a8 == local_a4) {
          puVar12 = (undefined1 *)((int)local_a8 << 1);
          if (local_a8 == (undefined1 *)0x0) {
            puVar12 = &DataAbort;
          }
          if (puVar12 <= local_a8) goto LAB_1000b254;
          local_90 = 4;
          local_e8 = puVar12;
          pcVar7 = recovered_10007abc((uint)puVar12 | 1);
          pvVar8 = local_e4;
          uVar15 = 0;
          *pcVar7 = '\0';
          if (local_a8 != (undefined1 *)0x0) {
            bVar21 = local_a8 == &DataAbort;
            puVar12 = (undefined1 *)0x0;
            if ((undefined1 *)0xf < local_a8) {
              uVar15 = (int)pcVar7 - (int)local_ac;
              bVar21 = uVar15 == 0xf;
            }
            if (((undefined1 *)0xf < local_a8 && 0xe < uVar15) && !bVar21) {
              puVar12 = (undefined1 *)((uint)local_a8 & 0xfffffff0);
              puVar13 = puVar12;
              pcVar16 = pcVar7;
              pcVar18 = local_ac;
              do {
                uVar2 = *(undefined4 *)pcVar18;
                uVar3 = *(undefined4 *)(pcVar18 + 4);
                uVar4 = *(undefined4 *)(pcVar18 + 8);
                uVar5 = *(undefined4 *)(pcVar18 + 0xc);
                pcVar18 = pcVar18 + 0x10;
                puVar13 = puVar13 + -0x10;
                *(undefined4 *)pcVar16 = uVar2;
                *(undefined4 *)(pcVar16 + 4) = uVar3;
                *(undefined4 *)(pcVar16 + 8) = uVar4;
                *(undefined4 *)(pcVar16 + 0xc) = uVar5;
                pcVar16 = pcVar16 + 0x10;
              } while (puVar13 != (undefined1 *)0x0);
              if (local_a8 == puVar12) goto LAB_1000b240;
            }
            iVar14 = (int)local_a8 - (int)puVar12;
            pcVar16 = pcVar7 + (int)puVar12;
            pcVar18 = local_ac + (int)puVar12;
            do {
              iVar14 = iVar14 + -1;
              *pcVar16 = *pcVar18;
              pcVar16 = pcVar16 + 1;
              pcVar18 = pcVar18 + 1;
            } while (iVar14 != 0);
          }
LAB_1000b240:
          pcVar7[(int)local_a8] = '\0';
          recovered_10007b14(local_ac);
          local_a4 = local_e8;
LAB_1000b28c:
          local_ac = pcVar7;
        }
        else {
LAB_1000b254:
          if (local_ac == (char *)0x0) {
            local_90 = 5;
            pcVar7 = recovered_10007abc(1);
            local_a4 = (undefined1 *)0x0;
            *pcVar7 = '\0';
            pvVar8 = local_e4;
            goto LAB_1000b28c;
          }
        }
        local_ac[(int)local_a8] = '/';
        local_ac[(int)(local_a8 + 1)] = '\0';
        local_a8 = local_a8 + 1;
      }
      puVar10 = (undefined4 *)((int)local_a0 + (int)pvVar8 * 0xc);
      puVar12 = (undefined1 *)*puVar10;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &DAT_1000be34;
      }
      local_90 = 6;
      recovered_1000ba50((int *)&local_ac,(int)puVar12,puVar10[1]);
      pvVar8 = (void *)((int)local_e4 + 1);
    } while (pvVar8 < local_9c);
  }
  local_cc = local_a4;
  if (local_a8 == (undefined1 *)0x0) {
    local_cc = (undefined1 *)0x0;
    puVar12 = &DAT_1000be32;
    local_d0 = (undefined1 *)0x0;
    local_d4 = (char *)0x0;
    uVar15 = 0;
    if (local_ec != 0) {
      puVar12 = &DAT_1000bf47;
    }
    do {
      uVar17 = uVar15;
      uVar15 = uVar17 + 1;
    } while (puVar12[uVar17] != '\0');
    local_90 = 7;
    recovered_1000b710((int *)&local_d4,(int)puVar12,uVar17);
  }
  else {
    local_d0 = local_a8;
    local_d4 = local_ac;
    local_a4 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_ac = (char *)0x0;
  }
  recovered_10007b14(local_ac);
  if (local_9c != (void *)0x0) {
    iVar14 = (int)local_9c * 0xc;
    pvVar8 = local_9c;
    do {
      iVar14 = iVar14 + -0xc;
      recovered_10007b14(*(void **)((int)local_a0 + iVar14));
      pvVar8 = (void *)((int)pvVar8 + -1);
    } while (pvVar8 != (void *)0x0);
  }
  local_9c = (void *)0x0;
  recovered_10007b14(local_a0);
  recovered_10007b14(local_e0);
  pcVar7 = local_d4;
  if (local_d4 == (char *)0x0) {
    pcVar7 = &DAT_1000be34;
  }
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x5b < _DAT_40010808)) &&
     (_DAT_40010858 != (code *)0x0)) {
    local_90 = 8;
    iVar14 = (*_DAT_40010858)(pcVar7,&local_c8);
    if (iVar14 == 0) goto LAB_1000b48c;
LAB_1000b568:
    puVar12 = (undefined1 *)0x0;
    if (iStack_c4 == 0) {
      local_e4 = local_c8;
      uVar6 = 0;
      if (local_c8 != (void *)0x0) {
        uVar6 = local_c0;
      }
      if (local_c8 != (void *)0x0 && uVar6 != 0) {
        iVar14 = 0;
        if (local_bc != 0) {
          iVar14 = local_b8;
        }
        if (local_bc != 0 && iVar14 != 0) {
          local_90 = 10;
          local_e8 = recovered_10007ae8(uVar6);
          local_90 = 0xb;
          recovered_10002a88(local_e8,local_e4,local_c0);
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x53 < _DAT_40010808 && (_DAT_40010850 != (code *)0x0)))) {
            local_90 = 0xc;
            (*_DAT_40010850)(local_e4);
          }
          if (local_f8 != (int *)0x0) {
            *local_f8 = local_bc;
          }
          puVar12 = local_e8;
          if (local_f4 != (int *)0x0) {
            *local_f4 = local_b8;
          }
        }
      }
    }
  }
  else {
LAB_1000b48c:
    puVar12 = (undefined1 *)0x0;
    do {
      pcVar7 = local_f0 + (int)puVar12;
      puVar12 = puVar12 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = &DAT_1000be34;
    if (local_d4 != (char *)0x0) {
      pcVar7 = local_d4;
    }
    if (local_d0 + 1 == puVar12) {
      puVar12 = (undefined1 *)0x0;
      if (local_d0 != (undefined1 *)0x0) {
        puVar13 = local_d0;
        pcVar16 = local_f0;
        do {
          if (*pcVar7 != *pcVar16) goto LAB_1000b4e0;
          puVar13 = puVar13 + -1;
          pcVar16 = pcVar16 + 1;
          pcVar7 = pcVar7 + 1;
        } while (puVar13 != (undefined1 *)0x0);
      }
    }
    else {
LAB_1000b4e0:
      puVar12 = (undefined1 *)0x0;
      if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
         ((0x5b < _DAT_40010808 && (_DAT_40010858 != (code *)0x0)))) {
        local_90 = 9;
        iVar14 = (*_DAT_40010858)(local_f0,&local_c8);
        puVar12 = (undefined1 *)0x0;
        if (iVar14 != 0) goto LAB_1000b568;
      }
    }
  }
  recovered_10007b14(local_d4);
LAB_1000b518:
  recovered_10008080(&uStack_94);
  return puVar12;
}

#undef DAT_1000b708
#undef DAT_1000b70c
#undef DAT_1000be32
#undef DAT_1000be34
#undef DAT_1000bf47
#undef DAT_10010008
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010850
#undef DAT_40010858
#undef EXT_00000010
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010850
#undef _DAT_40010858
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
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
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
#undef auStack_100
#undef iStack_c4
#undef uStack_94
#undef auStack_68

#define local_2c (*(void * *)(frame + 20))
#define local_28 (*(int *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b710
 */

void recovered_1000b710(int *param_1,int param_2,uint param_3)

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
        recovered_1000b710((int *)&local_2c,(int)(puVar12 + uVar13),uVar6);
        pvVar4 = (void *)*param_1;
        iVar7 = param_1[1];
        iVar8 = param_1[2];
        *param_1 = (int)local_2c;
        param_1[1] = local_28;
        param_1[2] = local_24;
        local_2c = pvVar4;
        local_28 = iVar7;
        local_24 = iVar8;
        recovered_10007b14(pvVar4);
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
      puVar12 = recovered_10007abc(1);
      *param_1 = (int)puVar12;
      *puVar12 = 0;
      param_1[2] = 0;
      return;
    }
    return;
  }
  if (uVar1 <= (uint)param_1[2]) goto LAB_1000b7fc;
  puVar2 = recovered_10007abc(uVar1 + 1);
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
      if (uVar13 == uVar6) goto LAB_1000b7e0;
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
LAB_1000b7e0:
  *(undefined1 *)((int)puVar2 + uVar13) = 0;
  recovered_10007b14(puVar3);
  param_1[2] = uVar1;
  *param_1 = (int)puVar2;
LAB_1000b7fc:
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
 * Address: 0x1000b8d4
 */

int * recovered_1000b8d4(int *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar2 = iVar1 * 0xc;
    do {
      iVar2 = iVar2 + -0xc;
      recovered_10007b14(*(void **)(*param_1 + iVar2));
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0;
  recovered_10007b14((void *)*param_1);
  return param_1;
}


#undef DAT_1000be34
#define DAT_1000be34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b928
 */

int recovered_1000b928(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;

  uVar5 = param_1[1];
  if (uVar5 == param_1[2]) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 4;
    }
    if (uVar5 < uVar1) {
      pvVar2 = recovered_10007abc(uVar1 * 0xc);
      if (param_1[1] != 0) {
        iVar9 = 0;
        uVar5 = 0;
        do {
          puVar3 = (undefined4 *)(*param_1 + iVar9);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          puVar11 = (undefined4 *)((int)pvVar2 + iVar9);
          *puVar11 = *puVar3;
          *puVar3 = 0;
          puVar11[1] = uVar6;
          puVar11[2] = uVar7;
          puVar3[1] = 0;
          puVar3[2] = 0;
          recovered_10007b14((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10007b14((void *)*param_1);
      uVar5 = param_1[1];
      param_1[2] = uVar1;
      *param_1 = (int)pvVar2;
    }
  }
  piVar4 = (int *)(*param_1 + uVar5 * 0xc);
  *piVar4 = 0;
  puVar10 = (undefined1 *)*param_2;
  piVar4[1] = 0;
  uVar5 = param_2[1];
  puVar8 = &DAT_1000be34;
  if (puVar10 != (undefined1 *)0x0) {
    puVar8 = puVar10;
  }
  piVar4[2] = 0;
  recovered_1000b710(piVar4,(int)puVar8,uVar5);
  iVar9 = param_1[1];
  param_1[1] = iVar9 + 1;
  return *param_1 + iVar9 * 0xc;
}

#undef DAT_1000be34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba50
 */

void recovered_1000ba50(int *param_1,int param_2,uint param_3)

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
LAB_1000ba8c:
    if (uVar10 != uVar6) goto code_r0x1000ba94;
    if (uVar11 - uVar10 < param_3) {
      param_3 = uVar11 - uVar10;
    }
    uVar6 = param_3 + uVar11;
    if (uVar6 <= (uint)param_1[2]) goto LAB_1000bc58;
    puVar12 = recovered_10007abc(uVar6 + 1);
    uVar7 = param_1[1];
    puVar1 = (undefined8 *)*param_1;
    uVar13 = 0;
    *(undefined1 *)puVar12 = 0;
    if (uVar7 == 0) goto LAB_1000bc38;
    bVar14 = uVar7 == 0x10;
    uVar2 = extraout_r1;
    if (uVar7 >= 0x10) {
      uVar2 = (int)puVar12 - (int)puVar1;
      bVar14 = uVar2 == 0xf;
    }
    if ((uVar7 < 0x10 || uVar2 < 0xf) || bVar14) goto LAB_1000bc1c;
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
LAB_1000bc1c:
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
LAB_1000bc38:
    *(undefined1 *)((int)puVar12 + uVar7) = 0;
    recovered_10007b14(puVar1);
    param_1[2] = uVar6;
    *param_1 = (int)puVar12;
LAB_1000bc58:
    if (param_3 == 0) goto LAB_1000bc84;
    uVar6 = param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar3 = (undefined1 *)(*param_1 + uVar10);
      uVar10 = uVar10 + 1;
      *(undefined1 *)(*param_1 + uVar11) = *puVar3;
      uVar11 = uVar11 + 1;
    } while (uVar6 != 0);
    goto LAB_1000bc80;
  }
  uVar11 = param_1[1];
LAB_1000baa8:
  uVar11 = uVar11 + param_3;
  if (uVar11 <= (uint)param_1[2]) goto LAB_1000bb64;
  puVar12 = recovered_10007abc(uVar11 + 1);
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
      if (uVar6 == uVar10) goto LAB_1000bb44;
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
LAB_1000bb44:
  *(undefined1 *)((int)puVar12 + uVar6) = 0;
  recovered_10007b14(puVar1);
  param_1[2] = uVar11;
  *param_1 = (int)puVar12;
LAB_1000bb64:
  uVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + param_1[1] + uVar6) = *(undefined1 *)(param_2 + uVar6);
    uVar6 = uVar6 + 1;
  } while (param_3 != uVar6);
LAB_1000bc80:
  puVar12 = (undefined8 *)*param_1;
LAB_1000bc84:
  iVar4 = param_1[1] + param_3;
  param_1[1] = iVar4;
  *(undefined1 *)((int)puVar12 + iVar4) = 0;
  return;
code_r0x1000ba94:
  uVar6 = uVar6 + 1;
  if (uVar11 < uVar6) goto LAB_1000baa8;
  goto LAB_1000ba8c;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bca8
 */

int recovered_1000bca8(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint extraout_r1 = 0;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar12 = param_1[1];
  }
  else {
    uVar12 = param_2 - iVar1;
  }
  if (param_3 == param_4) goto LAB_1000bdec;
  uVar10 = param_1[1];
  iVar13 = (int)param_4 - (int)param_3;
  uVar2 = param_1[2];
  if (uVar2 < uVar10 + iVar13) {
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 << 1;
    } while (uVar3 < uVar10 + iVar13);
    puVar4 = recovered_10007abc(uVar3);
    uVar10 = param_1[1];
    puVar5 = (undefined8 *)*param_1;
    if (uVar10 != 0) {
      bVar14 = uVar10 == 0x10;
      uVar11 = 0;
      uVar2 = extraout_r1;
      if (0xf < uVar10) {
        uVar2 = (int)puVar4 - (int)puVar5;
        bVar14 = uVar2 == 0xf;
      }
      if ((0xf < uVar10 && 0xe < uVar2) && !bVar14) {
        uVar11 = uVar10 & 0xfffffff0;
        puVar6 = puVar4;
        uVar2 = uVar11;
        puVar8 = puVar5;
        do {
          uVar15 = *puVar8;
          uVar16 = puVar8[1];
          puVar8 = puVar8 + 2;
          uVar2 = uVar2 - 0x10;
          *puVar6 = uVar15;
          puVar6[1] = uVar16;
          puVar6 = puVar6 + 2;
        } while (uVar2 != 0);
        if (uVar10 == uVar11) goto LAB_1000bd80;
      }
      iVar1 = uVar10 - uVar11;
      puVar7 = (undefined1 *)((int)puVar5 + uVar11);
      puVar9 = (undefined1 *)((int)puVar4 + uVar11);
      do {
        iVar1 = iVar1 + -1;
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar1 != 0);
    }
LAB_1000bd80:
    recovered_10007b14(puVar5);
    param_1[2] = uVar3;
    uVar10 = param_1[1];
    *param_1 = (int)puVar4;
  }
  while (uVar12 < uVar10) {
    uVar10 = uVar10 - 1;
    ((undefined1 *)(*param_1 + uVar10))[iVar13] = *(undefined1 *)(*param_1 + uVar10);
  }
  uVar10 = uVar12;
  do {
    puVar7 = param_3 + 1;
    *(undefined1 *)(*param_1 + uVar10) = *param_3;
    uVar10 = uVar10 + 1;
    param_3 = puVar7;
  } while (puVar7 != param_4);
  iVar1 = *param_1;
  param_1[1] = param_1[1] + iVar13;
LAB_1000bdec:
  iVar13 = iVar1 + uVar12;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  return iVar13;
}



/* Console-window raster composition recovered from r232. Pooka's Free Software License. */
typedef struct {
 uintptr_t text,length,text_capacity;
 int32_t width,height,buffer_width,buffer_height;
 uint8_t closed,background[3];
 int32_t mouse_x,mouse_y;
 uint8_t buttons[3];
 uintptr_t image,image_length,image_capacity;
 int32_t image_width,image_height;
 uintptr_t output,output_length,output_capacity;
} PFConsoleWindow;
static volatile uint32_t *pf_console_api(void){return (volatile uint32_t *)(uintptr_t)
#if defined(__aarch64__)
 0x82010800U;
#elif defined(__arm__)
 0x40010800U;
#else
 0x6800U;
#endif
}
static void *pf_console_allocate(uintptr_t size){volatile uint32_t *a=pf_console_api();if(a[0]!=0x50414d57||!a[1]||a[2]<0x50||!a[19])return 0;return ((void *(*)(uintptr_t))(uintptr_t)a[19])(size);}
static void pf_console_release(uintptr_t p){volatile uint32_t *a=pf_console_api();if(p&&a[0]==0x50414d57&&a[1]&&a[2]>=0x54&&a[20])((void(*)(void*))(uintptr_t)a[20])((void *)p);}
static void pf_console_compose(void *opaque){
 PFConsoleWindow *w=opaque;
 if(!w||w->width<1||w->height<1)return;
 uintptr_t size=(uintptr_t)w->width*w->height*4;
 w->output_length=0;
 if(w->output_capacity<size){uintptr_t p=(uintptr_t)pf_console_allocate(size);pf_console_release(w->output);w->output=p;w->output_capacity=size;}
 uint8_t *output=(uint8_t *)w->output;
 for(uintptr_t i=0;i<size;i++)output[i]=0;
 w->output_length=size;
 int32_t width=0,height=0,left=0,top=0;
 int has_image=w->image_length&&w->image_width>0&&w->image_height>0;
 if(has_image){
  float x=(float)w->width/(float)w->image_width;
  float y=(float)w->height/(float)w->image_height;
  float scale=x<=y?x:y;
  width=(int32_t)(scale*(float)w->image_width);if(width<2)width=1;
  height=(int32_t)((float)w->image_height*scale);if(height<2)height=1;
  left=(w->width-width)/2;top=(w->height-height)/2;
 }
 for(int32_t y=0;y<w->height;y++)for(int32_t x=0;x<w->width;x++){
  uint8_t *pixel=output+((uintptr_t)y*w->width+x)*4;
  const uint8_t *source=w->background;
  if(has_image&&left<=x&&x<left+width&&top<=y&&y<top+height){
   int32_t sx=(x-left)*w->image_width/width;
   int32_t sy=(y-top)*w->image_height/height;
   if(sx>=w->image_width)sx=w->image_width-1;if(sx<0)sx=0;
   if(sy>=w->image_height)sy=w->image_height-1;if(sy<0)sy=0;
   source=(uint8_t *)w->image+((uintptr_t)sy*w->image_width+sx)*4;
  }
  pixel[0]=source[0];pixel[1]=source[1];pixel[2]=source[2];pixel[3]=255;
 }
}
static uint32_t pf_console_channel(uint32_t c,uint32_t bits,uint32_t shift){
 uint32_t mask=bits>=32?0xffffffffU:((1U<<bits)-1);return ((c*mask+127)/255)<<(shift&31);
}
static void pf_console_present(void *opaque){
 PFConsoleWindow *w=opaque;if(!w||!w->output_length||w->width<1||w->height<1)return;
 struct __attribute__((packed,aligned(4))) {uint64_t address;uint32_t size,stride,width,height,bpp,rb,rs,gb,gs,bb,bs;} f={0};
 volatile uint32_t *api=pf_console_api();if(api[0]!=0x50414d57||!api[1]||api[2]<0x80||!api[31])return;
 if(!((uint32_t(*)(void*))(uintptr_t)api[31])(&f)||!f.address||!f.size||!f.stride||!f.width||!f.height||f.bpp!=32||!f.rb||!f.gb||!f.bb||f.stride/4<f.width)return;
 uint8_t *screen=(uint8_t *)(uintptr_t)f.address;
 uint32_t background=pf_console_channel(w->background[0],f.rb,f.rs)|pf_console_channel(w->background[1],f.gb,f.gs)|pf_console_channel(w->background[2],f.bb,f.bs);
 for(uint32_t y=0;y<f.height;y++)for(uint32_t x=0;x<f.width;x++)*(uint32_t *)(screen+(uintptr_t)y*f.stride+x*4)=background;
 uint32_t width=f.width,height=(uint64_t)f.width*(uint32_t)w->height/(uint32_t)w->width;if(height<2)height=1;
 uint32_t left=0,top=0;
 if(height>f.height){height=f.height;width=(uint64_t)f.height*(uint32_t)w->width/(uint32_t)w->height;if(width<2)width=1;left=(f.width-width)/2;}else top=(f.height-height)/2;
 for(uint32_t y=0;y<height;y++)for(uint32_t x=0;x<width;x++){
  uintptr_t sy=(uint64_t)y*(uint32_t)w->height/height,sx=(uint64_t)x*(uint32_t)w->width/width;
  const uint8_t *pixel=(const uint8_t *)w->output+(sy*(uint32_t)w->width+sx)*4;
  *(uint32_t *)(screen+(uintptr_t)(top+y)*f.stride+(left+x)*4)=pf_console_channel(pixel[0],f.rb,f.rs)|pf_console_channel(pixel[1],f.gb,f.gs)|pf_console_channel(pixel[2],f.bb,f.bs);
 }
 if(w->buffer_width>0&&w->buffer_height>0&&width&&height){
  int32_t mx=w->mouse_x;if(mx>=w->buffer_width)mx=w->buffer_width-1;if(mx<0)mx=0;
  int32_t my=w->mouse_y;if(my>=w->buffer_height)my=w->buffer_height-1;if(my<0)my=0;
  int32_t cx=left+(uint64_t)width*(uint32_t)mx/(uint32_t)w->buffer_width;
  int32_t cy=top+(uint64_t)height*(uint32_t)my/(uint32_t)w->buffer_height;
  uint32_t r=255,g=255,b=255;
  if(w->buttons[0]==1){g=b=60;}else if(w->buttons[1]==1){r=b=60;}else if(w->buttons[2]==1){r=80;g=130;}
  uint32_t color=pf_console_channel(r,f.rb,f.rs)|pf_console_channel(g,f.gb,f.gs)|pf_console_channel(b,f.bb,f.bs);
  for(int dy=-7;dy<=7;dy++)for(int dx=-7;dx<=7;dx++){
   int distance=(dx<0?-dx:dx)+(dy<0?-dy:dy);int32_t x=cx+dx,y=cy+dy;
   if(distance<8&&x>=0&&y>=0&&(uint32_t)x<f.width&&(uint32_t)y<f.height)*(uint32_t *)(screen+(uintptr_t)y*f.stride+(uint32_t)x*4)=distance<6?color:0;
  }
 }
#if defined(__aarch64__)
 uint64_t ctr;__asm__ volatile("mrs %0,ctr_el0":"=r"(ctr));uintptr_t line=4UL<<((ctr>>16)&15);uintptr_t end=(uintptr_t)screen+f.size;if(end<(uintptr_t)screen)end=~(uintptr_t)0;
 for(uintptr_t p=(uintptr_t)screen&-line;p<end;p+=line){__asm__ volatile("dc cvac,%0"::"r"(p):"memory");if(p+line<p)break;}
 __asm__ volatile("dsb sy\nisb":::"memory");
#endif
}
