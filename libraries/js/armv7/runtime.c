/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

uint recovered_10003ea0(uint param_1,uint param_2)

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
 * Address: 0x10003ef0
 */

uint recovered_10003ef0(uint param_1,uint param_2)

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
 * Address: 0x10003f28
 */

uint recovered_10003f28(uint param_1,uint param_2)

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
 * Address: 0x10003f98
 */

uint recovered_10003f98(uint param_1,uint param_2)

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
 * Address: 0x10004004
 */

ulonglong recovered_10004004(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;

  uVar1 = recovered_10006898((double)param_1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004014
 */

longlong recovered_10004014(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100067d8((double)param_1);
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004024
 */

float recovered_10004024(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006920(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004040
 */

float recovered_10004040(uint param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10006968(CONCAT44(param_2,param_1));
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_10010078
#define DAT_10010078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

void recovered_10004060(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010078 = 0;
  recovered_10004078();
  return;
}

#undef DAT_10010078

#undef DAT_00300000
#define DAT_00300000 (*(uint8_t *)(0x300000U))
#undef DAT_00300004
#define DAT_00300004 (*(uint8_t *)(0x300004U))
#undef DAT_00300008
#define DAT_00300008 (*(uint8_t *)(0x300008U))
#undef DAT_0030000c
#define DAT_0030000c (*(uint8_t *)(0x30000cU))
#undef DAT_10010078
#define DAT_10010078 (*(char *)(((uintptr_t)pf_module_state + 0x4e8U)))
#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0U)))
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
 * Address: 0x10004078
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004078(void)

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
  if (DAT_10010078 != '\0') {
    return;
  }
  DAT_10010080 = (undefined1 *)0x0;
  DAT_1001007c = 0;
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
        if (iVar12 == 0) goto LAB_10004288;
      }
      puVar7 = local_ac + 3;
      do {
        recovered_100081a4((int *)puVar7[-1],(int *)*puVar7,&local_24);
        iVar12 = iVar12 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar12 != 0);
      if (DAT_1001007c != 0) goto LAB_100043c0;
    }
  }
LAB_10004288:
  iVar12 = (int)DAT_10010080;
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
      puVar9 = &DAT_1001007c;
      if (DAT_1001007c != 0) {
        puVar9 = (undefined4 *)(local_24 + 4);
      }
      *puVar9 = 0x300000;
joined_r0x10004468:
      if (iVar12 == 0) {
        DAT_10010078 = 1;
        DAT_10010080 = puVar3;
        return;
      }
      DAT_10010078 = 1;
      return;
    }
  }
  else {
    _DAT_00300004 = 0;
    _DAT_00300000 = 0x5fcffff0;
    _DAT_00300008 = local_24;
    DAT_0030000c = 1;
    puVar9 = &DAT_1001007c;
    if (DAT_1001007c != 0) {
      puVar9 = (undefined4 *)(local_24 + 4);
    }
    bVar13 = DAT_10010080 == (undefined1 *)0x0;
    *puVar9 = 0x300000;
    iVar12 = (int)DAT_10010080;
    if (bVar13) {
      DAT_10010080 = (undefined1 *)0x300000;
      iVar12 = (int)DAT_10010080;
    }
    DAT_10010080 = (undefined1 *)iVar12;
    if ((&DAT_68000000 < puVar3) && (0x20 < ((uint)puVar3 & 0xfffffff0) + 0x98000000)) {
      _DAT_68000004 = 0;
      _DAT_68000000 = ((uint)puVar3 & 0xfffffff0) + 0x97fffff0;
      puVar3 = &DAT_68000000;
      _DAT_68000008 = 0x300000;
      DAT_6800000c = 1;
      puVar9 = &DAT_1001007c;
      if (DAT_1001007c != 0) {
        puVar9 = (undefined4 *)&DAT_00300004;
      }
      *puVar9 = &DAT_68000000;
      goto joined_r0x10004468;
    }
  }
LAB_100043c0:
  if (DAT_10010080 == (undefined1 *)0x0) {
    DAT_10010080 = (undefined1 *)DAT_1001007c;
    DAT_10010078 = 1;
    return;
  }
  DAT_10010078 = 1;
  return;
}

#undef DAT_00300000
#undef DAT_00300004
#undef DAT_00300008
#undef DAT_0030000c
#undef DAT_10010078
#undef DAT_1001007c
#undef DAT_10010080
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

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004470
 */

int recovered_10004470(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;

  recovered_10004078();
  iVar1 = 0;
  puVar2 = DAT_1001007c;
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

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x4ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b4
 */

void recovered_100044b4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10004078();
  for (iVar1 = DAT_1001007c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(int * *)(((uintptr_t)pf_module_state + 0x4ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004504
 */

int recovered_10004504(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  recovered_10004078();
  iVar1 = 0;
  for (piVar2 = DAT_1001007c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    iVar1 = *piVar2 + iVar1;
  }
  return iVar1;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(int *)(((uintptr_t)pf_module_state + 0x4ecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004540
 */

void recovered_10004540(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10004078();
  for (iVar1 = DAT_1001007c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}

#undef DAT_1001007c

#undef DAT_1001007c
#define DAT_1001007c (*(uint * *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint * *)(((uintptr_t)pf_module_state + 0x4f0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004584
 */

uint * recovered_10004584(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;

  if (param_1 != 0) {
    recovered_10004078();
    puVar5 = DAT_10010080;
    if (DAT_10010080 == (uint *)0x0) {
      puVar5 = DAT_1001007c;
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
          DAT_10010080 = DAT_1001007c;
          if (puVar5 != (uint *)0x0) {
            DAT_10010080 = puVar5;
          }
          *(undefined1 *)(puVar2 + 3) = 0;
          return puVar2 + 4;
        }
        puVar1 = puVar2 + 1;
        puVar2 = (uint *)*puVar1;
        if ((uint *)*puVar1 == (uint *)0x0) {
          puVar2 = DAT_1001007c;
        }
      } while ((puVar2 != (uint *)0x0) && (puVar2 != puVar5));
    }
  }
  return (uint *)0x0;
}

#undef DAT_1001007c
#undef DAT_10010080

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004690
 */

longlong recovered_10004690(uint param_1,int param_2,uint param_3)

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
 * Address: 0x100046e4
 */

ulonglong recovered_100046e4(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10004738
 */

undefined8 recovered_10004738(uint param_1,int param_2,uint param_3)

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
 * Address: 0x10004784
 */

undefined8 recovered_10004784(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004868
 */

undefined8 recovered_10004868(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100048e8
 */

undefined8 recovered_100048e8(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004a00
 */

undefined8 recovered_10004a00(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10004abc
 */

void recovered_10004abc(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ac4
 */

int recovered_10004ac4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10004ad0(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10004b24(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10004b74(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x40010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bc8
 */

void recovered_10004bc8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;

  puVar10 = param_3;
  if (param_3 < &SupervisorCall) {
  }
  else {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10004c04;
    if (((uint)param_1 & 3) == 0) {
      puVar3 = param_2;
      puVar4 = param_1;
    }
    else {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if ((undefined8 *)((int)param_3 + -1) == (undefined8 *)0x0 ||
          ((uint)((int)param_1 + 1) & 3) == 0) {
        puVar3 = (undefined8 *)((int)param_2 + 1);
        puVar10 = (undefined8 *)((int)param_3 + -1);
        puVar4 = (undefined8 *)((int)param_1 + 1);
      }
      else {
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined8 *)((int)param_2 + 2);
        puVar10 = (undefined8 *)((int)param_3 + -2);
        puVar4 = (undefined8 *)((int)param_1 + 2);
        if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 &&
            ((uint)((int)param_1 + 2) & 3) != 0) {
          puVar10 = (undefined8 *)((int)param_3 + -3);
          *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
          puVar3 = (undefined8 *)((int)param_2 + 3);
          puVar4 = (undefined8 *)((int)param_1 + 3);
          if ((puVar10 != (undefined8 *)0x0) && (((uint)puVar4 & 3) != 0)) {
            puVar10 = (undefined8 *)((int)param_3 + -4);
            *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
            puVar4 = (undefined8 *)((int)param_1 + 4);
            puVar3 = (undefined8 *)((int)param_2 + 4);
          }
        }
      }
    }
    puVar5 = puVar3;
    if (puVar10 < &DataAbort) {
      param_2 = puVar3;
      param_1 = puVar4;
    }
    else {
      if ((undefined8 *)0x2f < puVar10 + -2) {
        puVar11 = (undefined8 *)((uint)puVar10 & 0xfffffff0);
        bVar12 = puVar4 < (undefined8 *)((int)puVar3 + (int)puVar11);
        if (bVar12) {
          puVar11 = (undefined8 *)((int)puVar4 + (int)puVar11);
        }
        if (!(bVar12 && puVar3 < puVar11)) {
          uVar9 = ((uint)(puVar10 + -2) >> 4) + 1;
          uVar7 = uVar9 & 0xfffffffc;
          puVar10 = puVar10 + uVar7 * -2;
          param_1 = puVar4 + uVar7 * 2;
          param_2 = puVar3 + uVar7 * 2;
          uVar8 = uVar7;
          do {
            puVar5 = puVar3 + 8;
            uVar13 = puVar3[1];
            uVar8 = uVar8 - 4;
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            uVar16 = puVar3[4];
            uVar17 = puVar3[5];
            uVar18 = puVar3[6];
            uVar19 = puVar3[7];
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            puVar4[4] = uVar16;
            puVar4[5] = uVar17;
            puVar4[6] = uVar18;
            puVar4[7] = uVar19;
            puVar3 = puVar5;
            puVar4 = puVar4 + 8;
          } while (uVar8 != 0);
          puVar3 = param_2;
          puVar4 = param_1;
          if (uVar9 == uVar7) goto LAB_10004d98;
        }
      }
      do {
        puVar10 = puVar10 + -2;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        puVar1 = (undefined4 *)((int)puVar3 + 0xc);
        puVar3 = puVar3 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        param_2 = puVar3;
        param_1 = puVar4;
      } while ((undefined8 *)0xf < puVar10);
    }
LAB_10004d98:
    param_3 = param_2;
    if (puVar10 < &UndefinedInstruction) {
    }
    else {
      puVar2 = (undefined1 *)((int)puVar10 + -4);
      bVar12 = puVar2 == (undefined1 *)0xc;
      if ((undefined1 *)0xb < puVar2) {
        puVar5 = (undefined8 *)((int)param_1 - (int)param_2);
        bVar12 = puVar5 == (undefined8 *)0xf;
      }
      if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < puVar5) && !bVar12) {
        uVar7 = ((uint)puVar2 >> 2) + 1;
        uVar9 = uVar7 & 0xfffffffc;
        puVar10 = (undefined8 *)((int)puVar10 + uVar9 * -4);
        puVar4 = (undefined8 *)((int)param_1 + uVar9 * 4);
        puVar3 = (undefined8 *)((int)param_2 + uVar9 * 4);
        uVar8 = uVar9;
        do {
          uVar13 = *param_3;
          uVar14 = param_3[1];
          param_3 = param_3 + 2;
          uVar8 = uVar8 - 4;
          *param_1 = uVar13;
          param_1[1] = uVar14;
          param_1 = param_1 + 2;
        } while (uVar8 != 0);
        param_2 = puVar3;
        param_1 = puVar4;
        if (uVar7 == uVar9) goto LAB_10004bfc;
      }
      else {
        puVar3 = param_2;
        puVar4 = param_1;
      }
      do {
        param_2 = (undefined8 *)((int)puVar3 + 4);
        param_3 = *(undefined8 **)puVar3;
        puVar10 = (undefined8 *)((int)puVar10 + -4);
        param_1 = (undefined8 *)((int)puVar4 + 4);
        *(undefined8 **)puVar4 = param_3;
        puVar3 = param_2;
        puVar4 = param_1;
      } while ((undefined8 *)0x3 < puVar10);
    }
  }
LAB_10004bfc:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
LAB_10004c04:
  if ((undefined8 *)0xf < puVar10) {
    param_3 = (undefined8 *)((int)param_1 - (int)param_2);
  }
  if ((undefined8 *)0xf < puVar10 && (undefined8 *)0xf < param_3) {
    puVar6 = (undefined8 *)((uint)puVar10 & 0xfffffff0);
    puVar11 = (undefined8 *)((uint)puVar10 & 0xf);
    puVar3 = (undefined8 *)((int)param_2 + (int)puVar6);
    puVar4 = (undefined8 *)((int)param_1 + (int)puVar6);
    puVar5 = puVar6;
    do {
      uVar13 = *param_2;
      uVar14 = param_2[1];
      param_2 = param_2 + 2;
      puVar5 = puVar5 + -2;
      *param_1 = uVar13;
      param_1[1] = uVar14;
      param_1 = param_1 + 2;
    } while (puVar5 != (undefined8 *)0x0);
    if (puVar10 == puVar6) {
      return;
    }
  }
  else {
    puVar3 = param_2;
    puVar4 = param_1;
    puVar11 = puVar10;
  }
  do {
    puVar11 = (undefined8 *)((int)puVar11 + -1);
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 1);
    puVar4 = (undefined8 *)((int)puVar4 + 1);
  } while (puVar11 != (undefined8 *)0x0);
  return;
}

#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000010

#undef EXT_00000004
#define EXT_00000004 (*(uint8_t *)(0x4U))
#undef EXT_00000008
#define EXT_00000008 (*(uint8_t *)(0x8U))
#undef EXT_00000010
#define EXT_00000010 (*(uint8_t *)(0x10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e4c
 */

void recovered_10004e4c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_r5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *in_r12;
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

  if (param_1 == param_2 || param_3 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2;
  if (param_2 <= param_1) {
    puVar9 = (undefined8 *)((int)param_2 + (int)param_3);
    in_r12 = puVar9;
  }
  if ((param_2 > param_1 || in_r12 < param_1) || param_1 == puVar9) {
    puVar9 = param_3;
    if ((param_3 < &SupervisorCall) || ((((uint)param_2 ^ (uint)param_1) & 3) != 0))
    goto LAB_10004e94;
    if (((uint)param_1 & 3) == 0) {
      puVar3 = param_2;
      puVar4 = param_1;
    }
    else {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      if ((undefined8 *)((int)param_3 + -1) == (undefined8 *)0x0 ||
          ((uint)((int)param_1 + 1) & 3) == 0) {
        puVar3 = (undefined8 *)((int)param_2 + 1);
        puVar9 = (undefined8 *)((int)param_3 + -1);
        puVar4 = (undefined8 *)((int)param_1 + 1);
      }
      else {
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined8 *)((int)param_2 + 2);
        puVar9 = (undefined8 *)((int)param_3 + -2);
        puVar4 = (undefined8 *)((int)param_1 + 2);
        if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 &&
            ((uint)((int)param_1 + 2) & 3) != 0) {
          puVar9 = (undefined8 *)((int)param_3 + -3);
          puVar3 = (undefined8 *)((int)param_2 + 3);
          puVar4 = (undefined8 *)((int)param_1 + 3);
          *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
          if ((puVar9 != (undefined8 *)0x0) && (((uint)puVar4 & 3) != 0)) {
            puVar9 = (undefined8 *)((int)param_3 + -4);
            *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
            puVar4 = (undefined8 *)((int)param_1 + 4);
            puVar3 = (undefined8 *)((int)param_2 + 4);
          }
        }
      }
    }
    if (puVar9 < &DataAbort) {
      param_2 = puVar3;
      param_1 = puVar4;
    }
    else {
      if ((undefined8 *)0x2f < puVar9 + -2) {
        param_3 = (undefined8 *)((uint)puVar9 & 0xfffffff0);
        bVar12 = puVar4 < (undefined8 *)((int)puVar3 + (int)param_3);
        if (bVar12) {
          param_3 = (undefined8 *)((int)puVar4 + (int)param_3);
        }
        if (!(bVar12 && puVar3 < param_3)) {
          puVar7 = (undefined8 *)(((uint)(puVar9 + -2) >> 4) + 1);
          param_3 = (undefined8 *)((uint)puVar7 & 0xfffffffc);
          puVar9 = puVar9 + (int)param_3 * -2;
          param_1 = puVar4 + (int)param_3 * 2;
          param_2 = puVar3 + (int)param_3 * 2;
          puVar5 = param_3;
          do {
            uVar13 = puVar3[1];
            puVar5 = (undefined8 *)((int)puVar5 + -4);
            uVar14 = puVar3[2];
            uVar15 = puVar3[3];
            uVar16 = puVar3[4];
            uVar17 = puVar3[5];
            uVar18 = puVar3[6];
            uVar19 = puVar3[7];
            *puVar4 = *puVar3;
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            puVar4[4] = uVar16;
            puVar4[5] = uVar17;
            puVar4[6] = uVar18;
            puVar4[7] = uVar19;
            puVar3 = puVar3 + 8;
            puVar4 = puVar4 + 8;
          } while (puVar5 != (undefined8 *)0x0);
          puVar3 = param_2;
          puVar4 = param_1;
          if (puVar7 == param_3) goto LAB_10005120;
        }
      }
      do {
        puVar9 = puVar9 + -2;
        *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
        *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)((int)puVar3 + 4);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        puVar1 = (undefined4 *)((int)puVar3 + 0xc);
        puVar3 = puVar3 + 2;
        *(undefined4 *)((int)puVar4 + 0xc) = *puVar1;
        puVar4 = puVar4 + 2;
        param_2 = puVar3;
        param_1 = puVar4;
      } while ((undefined8 *)0xf < puVar9);
    }
LAB_10005120:
    if (&UndefinedInstruction <= puVar9) {
      puVar2 = (undefined1 *)((int)puVar9 + -4);
      bVar12 = puVar2 == (undefined1 *)0xc;
      if ((undefined1 *)0xb < puVar2) {
        param_3 = (undefined8 *)((int)param_1 - (int)param_2);
        bVar12 = param_3 == (undefined8 *)0xf;
      }
      if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < param_3) && !bVar12) {
        param_3 = (undefined8 *)(((uint)puVar2 >> 2) + 1);
        puVar7 = (undefined8 *)((uint)param_3 & 0xfffffffc);
        puVar9 = (undefined8 *)((int)puVar9 + (int)puVar7 * -4);
        puVar5 = (undefined8 *)((int)param_1 + (int)puVar7 * 4);
        puVar3 = (undefined8 *)((int)param_2 + (int)puVar7 * 4);
        puVar4 = puVar7;
        do {
          uVar13 = *param_2;
          uVar14 = param_2[1];
          param_2 = param_2 + 2;
          puVar4 = (undefined8 *)((int)puVar4 + -4);
          *param_1 = uVar13;
          param_1[1] = uVar14;
          param_1 = param_1 + 2;
        } while (puVar4 != (undefined8 *)0x0);
        param_2 = puVar3;
        param_1 = puVar5;
        if (param_3 == puVar7) goto LAB_1000519c;
      }
      else {
        puVar3 = param_2;
        puVar5 = param_1;
      }
      do {
        param_3 = *(undefined8 **)puVar3;
        puVar9 = (undefined8 *)((int)puVar9 + -4);
        *(undefined8 **)puVar5 = param_3;
        param_2 = (undefined8 *)((int)puVar3 + 4);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        param_1 = (undefined8 *)((int)puVar5 + 4);
        puVar5 = (undefined8 *)((int)puVar5 + 4);
      } while ((undefined8 *)0x3 < puVar9);
    }
LAB_1000519c:
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
LAB_10004e94:
    if ((undefined8 *)0xf < puVar9) {
      param_3 = (undefined8 *)((int)param_1 - (int)param_2);
    }
    if ((undefined8 *)0xf < puVar9 && (undefined8 *)0xf < param_3) {
      puVar6 = (undefined8 *)((uint)puVar9 & 0xfffffff0);
      puVar4 = (undefined8 *)((uint)puVar9 & 0xf);
      puVar5 = (undefined8 *)((int)param_2 + (int)puVar6);
      puVar3 = (undefined8 *)((int)param_1 + (int)puVar6);
      puVar7 = puVar6;
      do {
        uVar13 = *param_2;
        uVar14 = param_2[1];
        param_2 = param_2 + 2;
        puVar7 = puVar7 + -2;
        *param_1 = uVar13;
        param_1[1] = uVar14;
        param_1 = param_1 + 2;
      } while (puVar7 != (undefined8 *)0x0);
      if (puVar9 == puVar6) {
        return;
      }
    }
    else {
      puVar3 = param_1;
      puVar4 = puVar9;
      puVar5 = param_2;
    }
    do {
      puVar4 = (undefined8 *)((int)puVar4 + -1);
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar3 = (undefined8 *)((int)puVar3 + 1);
      puVar5 = (undefined8 *)((int)puVar5 + 1);
    } while (puVar4 != (undefined8 *)0x0);
    return;
  }
  puVar9 = (undefined8 *)((int)param_1 + (int)param_3);
  if ((param_3 < &SupervisorCall) || ((((uint)in_r12 ^ (uint)puVar9) & 3) != 0)) {
    puVar3 = param_3;
    goto LAB_10004f10;
  }
  if (((uint)puVar9 & 3) == 0) {
    puVar4 = puVar9;
LAB_100051ac:
    puVar3 = param_3;
    puVar5 = in_r12;
  }
  else {
    puVar4 = (undefined8 *)((int)puVar9 + -1);
    *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -1);
    puVar3 = (undefined8 *)((int)param_3 + -1);
    puVar5 = (undefined8 *)((int)in_r12 + -1);
    if ((undefined8 *)((int)param_3 + -1) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
      puVar4 = (undefined8 *)((int)puVar9 + -2);
      *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -2);
      puVar3 = (undefined8 *)((int)param_3 + -2);
      puVar5 = (undefined8 *)((int)in_r12 + -2);
      if ((undefined8 *)((int)param_3 + -2) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined8 *)((int)puVar9 + -3);
        *(undefined1 *)puVar4 = *(undefined1 *)((int)in_r12 + -3);
        puVar3 = (undefined8 *)((int)param_3 + -3);
        puVar5 = (undefined8 *)((int)in_r12 + -3);
        if ((undefined8 *)((int)param_3 + -3) != (undefined8 *)0x0 && ((uint)puVar4 & 3) != 0) {
          in_r12 = (undefined8 *)((int)in_r12 + -4);
          *(undefined1 *)((int)puVar9 + -4) = *(undefined1 *)in_r12;
          param_3 = (undefined8 *)((int)param_3 + -4);
          puVar4 = (undefined8 *)((int)puVar9 + -4);
          goto LAB_100051ac;
        }
      }
    }
  }
  in_r12 = puVar5;
  if (puVar3 < &DataAbort) {
    param_3 = puVar4;
  }
  else {
    if ((undefined8 *)0x2f < puVar3 + -2) {
      puVar9 = (undefined8 *)((uint)puVar3 & 0xfffffff0);
      bVar12 = (undefined8 *)((int)puVar4 - (int)puVar9) < in_r12;
      if (bVar12) {
        puVar9 = (undefined8 *)((int)in_r12 - (int)puVar9);
      }
      if (!(bVar12 && puVar9 < puVar4)) {
        uVar8 = ((uint)(puVar3 + -2) >> 4) + 1;
        uVar10 = uVar8 & 0xfffffffc;
        puVar9 = in_r12 + -8;
        param_3 = puVar4 + uVar10 * -2;
        in_r12 = in_r12 + uVar10 * -2;
        puVar3 = puVar3 + uVar10 * -2;
        uVar11 = uVar10;
        do {
          unaff_r5 = puVar9 + -8;
          uVar13 = puVar9[1];
          uVar11 = uVar11 - 4;
          uVar14 = puVar9[2];
          uVar15 = puVar9[3];
          uVar16 = puVar9[4];
          uVar17 = puVar9[5];
          uVar18 = puVar9[6];
          uVar19 = puVar9[7];
          puVar4[-8] = *puVar9;
          puVar4[-7] = uVar13;
          puVar4[-6] = uVar14;
          puVar4[-5] = uVar15;
          puVar4[-4] = uVar16;
          puVar4[-3] = uVar17;
          puVar4[-2] = uVar18;
          puVar4[-1] = uVar19;
          puVar9 = unaff_r5;
          puVar4 = puVar4 + -8;
        } while (uVar11 != 0);
        puVar4 = param_3;
        if (uVar8 == uVar10) goto LAB_10005288;
      }
    }
    do {
      puVar3 = puVar3 + -2;
      *(undefined4 *)((int)puVar4 + -4) = *(undefined4 *)((int)in_r12 + -4);
      *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(in_r12 + -1);
      *(undefined4 *)((int)puVar4 + -0xc) = *(undefined4 *)((int)in_r12 + -0xc);
      in_r12 = in_r12 + -2;
      puVar4 = puVar4 + -2;
      *(undefined4 *)puVar4 = *(undefined4 *)in_r12;
      param_3 = puVar4;
    } while ((undefined8 *)0xf < puVar3);
  }
LAB_10005288:
  puVar9 = param_3;
  if (&UndefinedInstruction <= puVar3) {
    puVar2 = (undefined1 *)((int)puVar3 + -4);
    bVar12 = puVar2 == (undefined1 *)0xc;
    if ((undefined1 *)0xb < puVar2) {
      unaff_r5 = (undefined8 *)((int)in_r12 - (int)param_3);
      bVar12 = unaff_r5 == (undefined8 *)0xf;
    }
    if (((undefined1 *)0xb < puVar2 && (undefined8 *)0xe < unaff_r5) && !bVar12) {
      uVar10 = ((uint)puVar2 >> 2) + 1;
      uVar8 = uVar10 & 0xfffffffc;
      puVar9 = (undefined8 *)((int)param_3 + uVar8 * -4);
      puVar4 = (undefined8 *)((int)in_r12 + uVar8 * -4);
      puVar3 = (undefined8 *)((int)puVar3 + uVar8 * -4);
      param_3 = param_3 + -2;
      uVar11 = uVar8;
      do {
        uVar13 = in_r12[-1];
        uVar11 = uVar11 - 4;
        *param_3 = in_r12[-2];
        param_3[1] = uVar13;
        param_3 = param_3 + -2;
        in_r12 = in_r12 + -2;
      } while (uVar11 != 0);
      in_r12 = puVar4;
      if (uVar10 == uVar8) goto LAB_10005344;
    }
    else {
      puVar4 = in_r12;
    }
    do {
      puVar4 = (undefined8 *)((int)puVar4 + -4);
      param_3 = *(undefined8 **)puVar4;
      puVar3 = (undefined8 *)((int)puVar3 + -4);
      puVar9 = (undefined8 *)((int)puVar9 + -4);
      *(undefined8 **)puVar9 = param_3;
      in_r12 = puVar4;
    } while ((undefined8 *)0x3 < puVar3);
  }
LAB_10005344:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
LAB_10004f10:
  if ((undefined8 *)0xf < puVar3) {
    param_3 = (undefined8 *)((int)in_r12 - (int)puVar9);
  }
  if ((undefined8 *)0xf < puVar3 && (undefined8 *)0xf < param_3) {
    puVar6 = (undefined8 *)((uint)puVar3 & 0xfffffff0);
    puVar7 = puVar6;
    puVar4 = puVar9;
    puVar5 = in_r12;
    do {
      uVar13 = puVar5[-1];
      puVar7 = puVar7 + -2;
      puVar4[-2] = puVar5[-2];
      puVar4[-1] = uVar13;
      puVar4 = puVar4 + -2;
      puVar5 = puVar5 + -2;
    } while (puVar7 != (undefined8 *)0x0);
    bVar12 = puVar3 == puVar6;
    puVar3 = (undefined8 *)((uint)puVar3 & 0xf);
    puVar9 = (undefined8 *)((int)puVar9 - (int)puVar6);
    in_r12 = (undefined8 *)((int)in_r12 - (int)puVar6);
    if (bVar12) {
      return;
    }
  }
  do {
    puVar3 = (undefined8 *)((int)puVar3 + -1);
    *(undefined1 *)((int)puVar9 + -1) = *(undefined1 *)((int)in_r12 + -1);
    puVar9 = (undefined8 *)((int)puVar9 + -1);
    in_r12 = (undefined8 *)((int)in_r12 + -1);
  } while (puVar3 != (undefined8 *)0x0);
  return;
}

#undef EXT_00000004
#undef EXT_00000008
#undef EXT_00000010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005358
 */

void recovered_10005358(byte *param_1,byte param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;

  uVar8 = param_3;
  if (param_3 < 8) goto joined_r0x100054e0;
  iVar7 = (uint)param_2 * 0x1010101;
  pbVar9 = param_1;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100053f8:
    if (0xf < uVar8) {
      if (uVar8 - 0x10 < 0x30) {
        pbVar3 = pbVar9;
      }
      else {
        uVar5 = (uVar8 - 0x10 >> 4) + 1;
        uVar6 = uVar5 & 0xfffffffc;
        uVar1 = CONCAT44(iVar7,iVar7);
        uVar8 = uVar8 + uVar6 * -0x10;
        pbVar3 = pbVar9 + uVar6 * 0x10;
        uVar4 = uVar6;
        do {
          *(undefined8 *)pbVar9 = uVar1;
          *(undefined8 *)(pbVar9 + 8) = uVar1;
          uVar4 = uVar4 - 4;
          *(undefined8 *)(pbVar9 + 0x10) = uVar1;
          *(undefined8 *)(pbVar9 + 0x18) = uVar1;
          *(undefined8 *)(pbVar9 + 0x20) = uVar1;
          *(undefined8 *)(pbVar9 + 0x28) = uVar1;
          *(undefined8 *)(pbVar9 + 0x30) = uVar1;
          *(undefined8 *)(pbVar9 + 0x38) = uVar1;
          pbVar9 = pbVar9 + 0x40;
        } while (uVar4 != 0);
        pbVar9 = pbVar3;
        if (uVar5 == uVar6) goto joined_r0x10005484;
      }
      do {
        uVar8 = uVar8 - 0x10;
        *(int *)(pbVar3 + 0xc) = iVar7;
        *(int *)(pbVar3 + 8) = iVar7;
        *(int *)(pbVar3 + 4) = iVar7;
        pbVar9 = pbVar3 + 0x10;
        *(int *)pbVar3 = iVar7;
        pbVar3 = pbVar9;
      } while (0xf < uVar8);
    }
  }
  else {
    pbVar9 = param_1 + 1;
    uVar8 = param_3 - 1;
    *param_1 = param_2;
    if (uVar8 != 0) {
      if (((uint)pbVar9 & 3) != 0) {
        uVar8 = param_3 - 2;
        pbVar9 = param_1 + 2;
        param_1[1] = param_2;
        if (uVar8 != 0 && ((uint)pbVar9 & 3) != 0) {
          uVar8 = param_3 - 3;
          pbVar9 = param_1 + 3;
          param_1[2] = param_2;
          if ((uVar8 != 0) && (((uint)pbVar9 & 3) != 0)) {
            param_1[3] = param_2;
            uVar8 = param_3 - 4;
            pbVar9 = param_1 + 4;
          }
        }
      }
      goto joined_r0x100053f8;
    }
  }
joined_r0x10005484:
  param_1 = pbVar9;
  if (3 < uVar8) {
    if (uVar8 - 4 < 0xc) {
    }
    else {
      uVar6 = (uVar8 - 4 >> 2) + 1;
      uVar5 = uVar6 & 0xfffffffc;
      uVar8 = uVar8 + uVar5 * -4;
      param_1 = pbVar9 + uVar5 * 4;
      uVar4 = uVar5;
      do {
        *(ulonglong *)pbVar9 = CONCAT44(iVar7,iVar7);
        *(ulonglong *)(pbVar9 + 8) = CONCAT44(iVar7,iVar7);
        pbVar9 = pbVar9 + 0x10;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      if (uVar6 == uVar5) goto joined_r0x100054e0;
    }
    do {
      uVar8 = uVar8 - 4;
      pbVar9 = param_1 + 4;
      *(int *)param_1 = iVar7;
      param_1 = pbVar9;
    } while (3 < uVar8);
  }
joined_r0x100054e0:
  if (uVar8 != 0) {
    if (uVar8 < 0x10) {
      uVar4 = uVar8;
      pbVar9 = param_1;
    }
    else {
      uVar5 = uVar8 & 0xfffffff0;
      uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar1 = CONCAT44(uVar2,uVar2);
      pbVar9 = param_1 + uVar5;
      uVar4 = uVar8 & 0xf;
      uVar6 = uVar5;
      do {
        *(undefined8 *)param_1 = uVar1;
        *(undefined8 *)(param_1 + 8) = uVar1;
        param_1 = param_1 + 0x10;
        uVar6 = uVar6 - 0x10;
      } while (uVar6 != 0);
      if (uVar8 == uVar5) {
        return;
      }
    }
    do {
      *pbVar9 = param_2;
      uVar4 = uVar4 - 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar4 != 0);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005558
 */

void recovered_10005558(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100056d8;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100055f4:
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
        if (uVar7 == uVar8) goto joined_r0x10005678;
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
      goto joined_r0x100055f4;
    }
  }
joined_r0x10005678:
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
      if (uVar7 == uVar8) goto joined_r0x100056d8;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100056d8:
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
 * Address: 0x10005754
 */

void recovered_10005754(undefined4 *param_1,uint param_2)

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
  if (param_2 < 8) goto joined_r0x100058d4;
  if (((uint)param_1 & 3) == 0) {
joined_r0x100057f0:
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
        if (uVar7 == uVar8) goto joined_r0x10005874;
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
      goto joined_r0x100057f0;
    }
  }
joined_r0x10005874:
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
      if (uVar7 == uVar8) goto joined_r0x100058d4;
    }
    do {
      uVar9 = uVar9 - 4;
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while (3 < uVar9);
  }
joined_r0x100058d4:
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
 * Address: 0x10005950
 */

int recovered_10005950(uint *param_1,uint *param_2,uint param_3)

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

  if (param_3 < 8) {
LAB_10005a48:
    if (param_3 == 0) {
      return 0;
    }
  }
  else if ((((uint)param_2 ^ (uint)param_1) & 3) == 0) {
    uVar5 = param_3;
    puVar1 = param_2;
    puVar7 = param_1;
    if (((uint)param_1 & 3) != 0) {
      uVar6 = (uint)(byte)*param_2;
      uVar5 = (uint)(byte)*param_1;
      if (uVar5 != uVar6) goto LAB_10005b40;
      puVar7 = (uint *)((int)param_1 + 1);
      uVar5 = param_3 - 1;
      puVar1 = (uint *)((int)param_2 + 1);
      if (param_3 - 1 != 0 && ((uint)puVar7 & 3) != 0) {
        uVar6 = (uint)*(byte *)((int)param_2 + 1);
        uVar5 = (uint)*(byte *)puVar7;
        if (uVar5 != uVar6) goto LAB_10005b40;
        puVar7 = (uint *)((int)param_1 + 2);
        uVar5 = param_3 - 2;
        puVar1 = (uint *)((int)param_2 + 2);
        if (param_3 - 2 != 0 && ((uint)puVar7 & 3) != 0) {
          uVar6 = (uint)*(byte *)((int)param_2 + 2);
          uVar5 = (uint)*(byte *)puVar7;
          if (uVar5 != uVar6) goto LAB_10005b40;
          puVar7 = (uint *)((int)param_1 + 3);
          uVar5 = param_3 - 3;
          puVar1 = (uint *)((int)param_2 + 3);
          if (param_3 - 3 != 0 && ((uint)puVar7 & 3) != 0) {
            uVar6 = (uint)*(byte *)((int)param_2 + 3);
            uVar5 = (uint)*(byte *)puVar7;
            if (uVar5 != uVar6) goto LAB_10005b40;
            uVar5 = param_3 - 4;
            puVar1 = param_2 + 1;
            puVar7 = param_1 + 1;
          }
        }
      }
    }
    while (param_1 = puVar7, param_2 = puVar1, param_3 = uVar5, 0xf < param_3) {
      uVar6 = *param_2;
      uVar5 = *param_1;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        uVar6 = param_2[1];
        uVar5 = param_1[1];
      }
      bVar9 = bVar8 && uVar5 == uVar6;
      if (bVar8 && uVar5 == uVar6) {
        uVar6 = param_2[2];
        uVar5 = param_1[2];
        bVar9 = uVar5 == uVar6;
      }
      if (!bVar9) {
LAB_10005a78:
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
      uVar6 = param_2[3];
      uVar5 = param_1[3];
      if (uVar5 != uVar6) goto LAB_10005a78;
      puVar1 = param_2 + 4;
      puVar7 = param_1 + 4;
      uVar5 = param_3 - 0x10;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar2 = recovered_10005b48((byte *)param_1,(byte *)param_2);
        return iVar2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    goto LAB_10005a48;
  }
  while( true ) {
    uVar6 = (uint)(byte)*param_2;
    uVar5 = (uint)(byte)*param_1;
    if (uVar5 != uVar6) break;
    param_3 = param_3 - 1;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = (uint *)((int)param_1 + 1);
    if (param_3 == 0) {
      return 0;
    }
  }
LAB_10005b40:
  return uVar5 - uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b48
 */

int recovered_10005b48(byte *param_1,byte *param_2)

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
 * Address: 0x10005b98
 */

bool recovered_10005b98(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bac
 */

bool recovered_10005bac(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

bool recovered_10005bc0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bd8
 */

bool recovered_10005bd8(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c04
 */

bool recovered_10005c04(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c24
 */

bool recovered_10005c24(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c38
 */

int recovered_10005c38(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c48
 */

int recovered_10005c48(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c58
 */

int recovered_10005c58(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c80
 */

int recovered_10005c80(byte *param_1,byte *param_2)

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
LAB_10005cb8:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005cb8;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005cc4
 */

int recovered_10005cc4(byte *param_1,byte *param_2)

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
LAB_10005cfc:
      return uVar3 - *param_2;
    }
    param_1 = param_1 + 1;
    if (uVar2 != *param_2) {
      uVar3 = uVar2;
      goto LAB_10005cfc;
    }
    bVar1 = *param_1;
    param_2 = param_2 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d08
 */

void recovered_10005d08(int param_1,int param_2)

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
 * Address: 0x10005d24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * recovered_10005d24(undefined8 *param_1)

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
    if ((((uint)puVar3 ^ (uint)param_1) & 3) != 0) goto LAB_10005dec;
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
          if (uVar8 == uVar11) goto LAB_10005f80;
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
LAB_10005f80:
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
        if (uVar11 == uVar8) goto LAB_10005de4;
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
LAB_10005de4:
  uVar2 = uVar20;
  if (uVar10 == 0) {
    return puVar3;
  }
LAB_10005dec:
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
 * Address: 0x10006038
 */

char * recovered_10006038(char *param_1,char param_2)

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
 * Address: 0x1000606c
 */

int recovered_1000606c(char *param_1,char *param_2)

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
 * Address: 0x100060d0
 */

char * recovered_100060d0(char *param_1,char *param_2)

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
 * Address: 0x10006130
 */

char * recovered_10006130(char *param_1,char *param_2)

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


#undef DAT_1000fbb4
#define DAT_1000fbb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006194
 */

undefined * recovered_10006194(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fbb4;
}

#undef DAT_1000fbb4

#undef PTR_DAT_10010008
#define PTR_DAT_10010008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x478U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061a4
 */

undefined ** recovered_100061a4(void)

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
 * Address: 0x100061b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100061b4(undefined4 *param_1)

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
 * Address: 0x10006264
 */

double recovered_10006264(undefined4 param_1,undefined4 param_2,uint param_3)

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
 * Address: 0x100062a8
 */

double recovered_100062a8(undefined4 param_1,undefined4 param_2,int *param_3)

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
 * Address: 0x10006360
 */

double recovered_10006360(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10006398
 */

double recovered_10006398(undefined4 param_1,undefined4 param_2,undefined4 param_3,
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
 * Address: 0x10006418
 */

double recovered_10006418(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10006448
 */

double recovered_10006448(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x1000648c
 */

double recovered_1000648c(undefined4 param_1,undefined4 param_2)

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


#undef DAT_10006608
#define DAT_10006608 (*(double *)(0x10006608U))
#undef DAT_10006610
#define DAT_10006610 (*(double *)(0x10006610U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064d8
 */

double recovered_100064d8(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10006608
#undef DAT_10006610

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006618
 */

longlong recovered_10006618(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  longlong lVar2;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  lVar2 = recovered_100067d8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return lVar2;
}


#undef DAT_100066d8
#define DAT_100066d8 (*(double *)(0x100066d8U))
#undef DAT_100066e0
#define DAT_100066e0 (*(double *)(0x100066e0U))
#undef DAT_100066e8
#define DAT_100066e8 (*(double *)(0x100066e8U))
#undef DAT_100066f0
#define DAT_100066f0 (*(double *)(0x100066f0U))
#undef DAT_100066f8
#define DAT_100066f8 (*(double *)(0x100066f8U))
#undef DAT_10006700
#define DAT_10006700 (*(double *)(0x10006700U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006648
 */

double recovered_10006648(undefined4 param_1,undefined4 param_2)

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

#undef DAT_100066d8
#undef DAT_100066e0
#undef DAT_100066e8
#undef DAT_100066f0
#undef DAT_100066f8
#undef DAT_10006700

#undef DAT_10006790
#define DAT_10006790 (*(double *)(0x10006790U))
#undef DAT_10006798
#define DAT_10006798 (*(double *)(0x10006798U))
#undef DAT_100067a0
#define DAT_100067a0 (*(double *)(0x100067a0U))
#undef DAT_100067a8
#define DAT_100067a8 (*(double *)(0x100067a8U))
#undef DAT_100067b0
#define DAT_100067b0 (*(double *)(0x100067b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006708
 */

double recovered_10006708(undefined4 param_1,undefined4 param_2)

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

#undef DAT_10006790
#undef DAT_10006798
#undef DAT_100067a0
#undef DAT_100067a8
#undef DAT_100067b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b8
 */

double recovered_100067b8(undefined4 param_1,undefined4 param_2)

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
long long recovered_100067d8(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10006898(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatundidf(unsigned long long);
double recovered_10006920(unsigned long long value){return pf_numeric_fallback___floatundidf(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern double pf_numeric_fallback___floatdidf(long long);
double recovered_10006968(long long value){return pf_numeric_fallback___floatdidf(value);}


#undef DAT_10006a38
#define DAT_10006a38 (*(float *)(0x10006a38U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069f8
 */

float recovered_100069f8(float param_1,float param_2)

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

#undef DAT_10006a38

#undef DAT_10006af4
#define DAT_10006af4 (*(float *)(0x10006af4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a3c
 */

float recovered_10006a3c(float param_1,float *param_2)

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

#undef DAT_10006af4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006af8
 */

float recovered_10006af8(float param_1,uint param_2)

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


#undef DAT_10006bc8
#define DAT_10006bc8 (*(float *)(0x10006bc8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b44
 */

float recovered_10006b44(float param_1,float param_2)

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

#undef DAT_10006bc8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bcc
 */

float recovered_10006bcc(float param_1)

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
 * Address: 0x10006c04
 */

float recovered_10006c04(float param_1)

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
 * Address: 0x10006c50
 */

double recovered_10006c50(undefined4 param_1,undefined4 param_2)

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
 * Address: 0x10006ca4
 */

float recovered_10006ca4(float param_1)

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


#undef DAT_10006d54
#define DAT_10006d54 (*(float *)(0x10006d54U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d00
 */

float recovered_10006d00(float param_1)

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

#undef DAT_10006d54

#undef DAT_10006e90
#define DAT_10006e90 (*(double *)(0x10006e90U))
#undef DAT_10006e98
#define DAT_10006e98 (*(float *)(0x10006e98U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d58
 */

float recovered_10006d58(float param_1)

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

#undef DAT_10006e90
#undef DAT_10006e98

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e9c
 */

void recovered_10006e9c(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = -0.5;
  if (0.0 <= pf_bits_double(CONCAT44(param_2,param_1))) {
    dVar1 = 0.5;
  }
  recovered_100067d8(dVar1 + pf_bits_double(CONCAT44(param_2,param_1)));
  return;
}


#undef DAT_10006f68
#define DAT_10006f68 (*(double *)(0x10006f68U))
#undef DAT_10006f70
#define DAT_10006f70 (*(double *)(0x10006f70U))
#undef DAT_10006f78
#define DAT_10006f78 (*(double *)(0x10006f78U))
#undef DAT_10006f80
#define DAT_10006f80 (*(double *)(0x10006f80U))
#undef DAT_10006f88
#define DAT_10006f88 (*(double *)(0x10006f88U))
#undef DAT_10006f90
#define DAT_10006f90 (*(double *)(0x10006f90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed0
 */

float recovered_10006ed0(float param_1)

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

#undef DAT_10006f68
#undef DAT_10006f70
#undef DAT_10006f78
#undef DAT_10006f80
#undef DAT_10006f88
#undef DAT_10006f90

#undef DAT_10007028
#define DAT_10007028 (*(double *)(0x10007028U))
#undef DAT_10007030
#define DAT_10007030 (*(double *)(0x10007030U))
#undef DAT_10007038
#define DAT_10007038 (*(double *)(0x10007038U))
#undef DAT_10007040
#define DAT_10007040 (*(double *)(0x10007040U))
#undef DAT_10007048
#define DAT_10007048 (*(double *)(0x10007048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f98
 */

float recovered_10006f98(float param_1)

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

#undef DAT_10007028
#undef DAT_10007030
#undef DAT_10007038
#undef DAT_10007040
#undef DAT_10007048

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007050
 */

float recovered_10007050(float param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000706c
 */

int recovered_1000706c(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x100071c0
 */

int recovered_100071c0(byte *param_1,undefined4 *param_2,uint param_3)

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
    goto joined_r0x1000723c;
  }
  bVar2 = false;
joined_r0x1000723c:
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
 * Address: 0x10007320
 */

double recovered_10007320(byte *param_1,undefined4 *param_2)

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
      goto LAB_1000740c;
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
LAB_1000740c:
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
 * Address: 0x100074f4
 */

float recovered_100074f4(byte *in_r0,undefined4 *in_r1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10007320(in_r0,in_r1);
  return (float)pf_bits_double(((pf_double_bits(dVar1) & 0xffffffff00000000) + (pf_double_bits(dVar1) & 0xffffffff)));
}


#undef DAT_1000fbb9
#define DAT_1000fbb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29U)))
#undef str_1000fbc0
#define str_1000fbc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000fbd1
#define str_1000fbd1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41U)))
#define local_70 (*(int *)(frame + 16))
#define local_6c (*(double * *)(frame + 20))
#define local_68 (*(uint *)(frame + 24))
#define local_64 (*(byte * *)(frame + 28))
#define local_60 (*(byte (*)[64])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

int recovered_10007510(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
LAB_10007584:
  do {
    while( true ) {
      pcVar5 = str_1000fbd1;
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
LAB_10007578:
        param_1 = param_1 + 1;
        local_68 = local_68 - 1;
      }
LAB_1000757c:
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
          goto LAB_10007620;
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
LAB_10007620:
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
switchD_100077b8_caseD_4a:
      if (1 < local_68) {
        local_68 = local_68 - 1;
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
      }
      local_70 = local_70 + 1;
      param_4 = pdVar2;
      goto LAB_10007f94;
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
        goto LAB_10007a40;
      }
      uVar9 = (int)uVar10 >> 0x1f;
LAB_10007a40:
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
        local_60[-iVar16] = str_1000fbd1[uVar10 + uVar11 * -10];
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
        goto LAB_10007f94;
      }
      goto LAB_10007fa0;
    default:
      goto switchD_100077b8_caseD_4a;
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
        goto LAB_10007d88;
      case 6:
        uVar14 = *(uint *)pdVar2;
        uVar10 = (int)uVar14 >> 0x1f;
        goto LAB_10007d88;
      }
      uVar10 = 0;
LAB_10007d88:
      iVar6 = 0;
      if (uVar9 == 0x58) {
        pcVar5 = str_1000fbc0;
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
LAB_10007f94:
      param_3 = param_3 + 1;
      break;
    case 99:
      if (1 < local_68) {
        *param_1 = (byte)*(undefined4 *)pdVar2;
        goto LAB_10007578;
      }
      goto LAB_1000757c;
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
                        goto LAB_10007938;
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
LAB_10007938:
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
          local_60[-iVar16] = str_1000fbd1[uVar10 + uVar11 * -10];
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
LAB_10007ea0:
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
                      goto LAB_10007ea0;
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
        local_60[iVar16] = str_1000fbd1[uVar9 & 0xf];
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
        pbVar12 = &DAT_1000fbb9;
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
        goto LAB_10007f94;
      }
      goto LAB_10007fb4;
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
        goto LAB_10007ec8;
      case 6:
        uVar10 = *(uint *)pdVar2;
        uVar9 = (int)uVar10 >> 0x1f;
        goto LAB_10007ec8;
      }
      uVar9 = 0;
LAB_10007ec8:
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
        local_60[-iVar16] = str_1000fbd1[uVar10 + uVar11 * -10];
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
        goto LAB_10007f94;
      }
LAB_10007fa0:
      param_4 = local_6c;
LAB_10007fb4:
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
  goto LAB_10007584;
}

#undef DAT_1000fbb9
#undef str_1000fbc0
#undef str_1000fbd1
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10008174(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10007510(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1001007c
#define DAT_1001007c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ecU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4f0U)))
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
 * Address: 0x100081a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100081a4(int *param_1,int *param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte *pcVar4;
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
      bVar6 = pcVar4 == pf_varargs_10008174__4_;
    }
    if (bVar7 && !bVar6) {
      if (param_1 < pf_varargs_10008174__4_) {
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
          bVar6 = DAT_1001007c != 0;
          piVar3 = &DAT_1001007c;
          unaff_r9[2] = iVar5;
          if (bVar6) {
            piVar3 = (int *)(iVar5 + 4);
          }
          *piVar3 = (int)unaff_r9;
          *param_3 = (int)unaff_r9;
          *unaff_r9 = uVar1 - 0x10;
          piVar3 = (int *)DAT_10010080;
          *(undefined1 *)(unaff_r9 + 3) = 1;
          if (piVar3 == (int *)0x0) {
            DAT_10010080 = (code *)unaff_r9;
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
      puVar2 = &DAT_1001007c;
      if (DAT_1001007c != 0) {
        puVar2 = (undefined4 *)(_DAT_68000008 + 4);
      }
      pcVar4 = (code *)&DAT_68000000;
      *puVar2 = &DAT_68000000;
      *param_3 = (int)&DAT_68000000;
      DAT_6800000c = 1;
      piVar3 = (int *)DAT_10010080;
      goto LAB_100082f4;
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
  bVar6 = DAT_1001007c != 0;
  puVar2 = &DAT_1001007c;
  *(int *)(pcVar4 + 8) = iVar5;
  if (bVar6) {
    puVar2 = (undefined4 *)(iVar5 + 4);
  }
  *puVar2 = pcVar4;
  *param_3 = (int)pcVar4;
  *(uint *)pcVar4 = uVar1 - 0x10;
  piVar3 = (int *)DAT_10010080;
  pcVar4[0xc] = (byte)0x1;
LAB_100082f4:
  if (piVar3 == (int *)0x0) {
    DAT_10010080 = pcVar4;
    return;
  }
  return;
}

#undef DAT_1001007c
#undef DAT_10010080
#undef DAT_68000000
#undef DAT_68000004
#undef DAT_68000008
#undef DAT_6800000c
#undef _DAT_68000000
#undef _DAT_68000004
#undef _DAT_68000008

#undef DAT_10010084
#define DAT_10010084 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f8U)))
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
#define local_224 (*(undefined8 (*)[64])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008390(char *param_1,int param_2)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 *puVar2;

  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 != 0) {
    do {
      cVar1 = *param_1;
      if (cVar1 == '\b') {
        if (DAT_10010084 != (undefined8 *)0x0) {
          DAT_10010084 = (undefined8 *)((int)DAT_10010084 + -1);
        }
      }
      else if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          if (DAT_10010084 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)0x0;
          }
          else {
            recovered_10004bc8(local_224,(undefined8 *)&DAT_10010088,DAT_10010084);
            puVar2 = DAT_10010084;
          }
          *(undefined1 *)((int)local_224 + (int)puVar2) = 0;
          if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
             ((0x43 < _DAT_40010808 && (_DAT_40010840 != (code *)0x0)))) {
            (*_DAT_40010840)(local_224);
          }
          DAT_10010084 = (undefined8 *)0x0;
        }
        else {
          if ((int)DAT_10010084 - 0x1ffU < 0xfffffe00) {
            recovered_10004bc8(local_224,(undefined8 *)&DAT_10010088,DAT_10010084);
            *(undefined1 *)((int)local_224 + (int)DAT_10010084) = 0;
            if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808))
               && (_DAT_40010840 != (code *)0x0)) {
              (*_DAT_40010840)(local_224);
            }
            DAT_10010084 = (undefined8 *)0x0;
          }
          *(char *)(DAT_10010084 + 0x2002011) = cVar1;
          DAT_10010084 = (undefined8 *)((int)DAT_10010084 + 1);
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

#undef DAT_10010084
#undef DAT_10010088
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_224

#undef DAT_10010084
#define DAT_10010084 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f8U)))
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
#define local_210 (*(undefined8 (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008574
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008574(void)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = (undefined8 *)0x0;
  if (DAT_10010084 != (undefined8 *)0x0) {
    recovered_10004bc8(local_210,(undefined8 *)&DAT_10010088,DAT_10010084);
    puVar1 = DAT_10010084;
  }
  *(undefined1 *)((int)local_210 + (int)puVar1) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(local_210);
  }
  DAT_10010084 = (undefined8 *)0x0;
  return;
}

#undef DAT_10010084
#undef DAT_10010088
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef local_210

#undef DAT_10010084
#define DAT_10010084 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f8U)))
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
#define auStack_214 (*(undefined8 (*)[64])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008634
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008634(void)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};


  if (DAT_10010084 == (undefined8 *)0x0) {
    return;
  }
  recovered_10004bc8(auStack_214,(undefined8 *)&DAT_10010088,DAT_10010084);
  *(undefined1 *)((int)auStack_214 + (int)DAT_10010084) = 0;
  if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
     (_DAT_40010840 != (code *)0x0)) {
    (*_DAT_40010840)(auStack_214);
  }
  DAT_10010084 = (undefined8 *)0x0;
  return;
}

#undef DAT_10010084
#undef DAT_10010088
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010840
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010840
#undef auStack_214

#undef DAT_1000fbb8
#define DAT_1000fbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1000fbe2
#define DAT_1000fbe2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#define acStack_14c (*(char (*)[320])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086f0
 */

void recovered_100086f0(char *param_1,undefined *param_2)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *format;
  undefined *puVar2;

  format = &DAT_1000fbe2;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar2 = &DAT_1000fbb8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  iVar1 = recovered_10008174(acStack_14c,0x140,format,puVar2);
  if (0 < iVar1) {
    recovered_10008390(acStack_14c,iVar1);
  }
  return;
}

#undef DAT_1000fbb8
#undef DAT_1000fbe2
#undef acStack_14c

#undef DAT_1000fc00
#define DAT_1000fc00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fbe5
#define str_1000fbe5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008748
 */

void recovered_10008748(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x55U));
  recovered_10008390(str_1000fbe5,iVar1);
  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x70U));
  recovered_10008390(&DAT_1000fc00,iVar1);
  return;
}

#undef DAT_1000fc00
#undef str_1000fbe5

#undef DAT_1000fc00
#define DAT_1000fc00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000fc03
#define str_1000fc03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008794
 */

void recovered_10008794(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x73U));
  recovered_10008390(str_1000fc03,iVar1);
  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x70U));
  recovered_10008390(&DAT_1000fc00,iVar1);
  return;
}

#undef DAT_1000fc00
#undef str_1000fc03

#undef DAT_10010084
#define DAT_10010084 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f8U)))
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
#define auStack_224 (*(undefined8 (*)[64])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100087e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  if (DAT_10010084 != (undefined8 *)0x0) {
    recovered_10004bc8(auStack_224,(undefined8 *)&DAT_10010088,DAT_10010084);
    *(undefined1 *)((int)auStack_224 + (int)DAT_10010084) = 0;
    if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
       (_DAT_40010840 != (code *)0x0)) {
      (*_DAT_40010840)(auStack_224);
    }
    DAT_10010084 = (undefined8 *)0x0;
  }
  bVar2 = false;
  if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
     ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
    iVar1 = (*_DAT_40010844)(param_1,param_2,param_3,param_4);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10010084
#undef DAT_10010088
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
 * Address: 0x10008934
 */

undefined4 recovered_10008934(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000893c
 */

void recovered_1000893c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008940
 */

undefined4 recovered_10008940(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_1000fbe2
#define DAT_1000fbe2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52U)))
#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
#undef str_1000fc97
#define str_1000fc97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000fca4
#define str_1000fca4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_1000fcb2
#define str_1000fcb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x122U)))
#define local_24 (*(undefined8 * *)(frame + 28))
#define local_20 (*(undefined8 * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008948
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10008948(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *size;
  undefined4 uVar7;
  byte bVar8;
  char *unaff_r8;

  if (param_1 != 0) {
    unaff_r8 = (char *)param_2;
  }
  if (param_1 == 0 || param_2 == 0) {
    uVar7 = 0x16;
    goto LAB_10008bbc;
  }
  iVar2 = recovered_10005c80((byte *)param_1,(byte *)str_1000fc97);
  if (iVar2 == 0) {
    uVar7 = 1;
LAB_10008b48:
    pbVar4 = recovered_10004ad0(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10005358(pbVar4,0,800);
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      pbVar4[0x110] = iVar2 == 0;
      *(undefined4 *)pbVar4 = uVar7;
      pbVar4[0x111] = iVar2 != 0;
      pf_varargs_10008174__4_((char *)(pbVar4 + 4),0xf1,&DAT_1000fbe2,param_1);
      return (undefined4 *)pbVar4;
    }
  }
  else {
    iVar3 = recovered_10005c80((byte *)param_1,(byte *)str_1000fca4);
    if (iVar3 == 0) {
      uVar7 = 2;
      goto LAB_10008b48;
    }
    iVar3 = recovered_10005c80((byte *)param_1,(byte *)str_1000fcb2);
    if (iVar3 == 0) {
      uVar7 = 3;
      goto LAB_10008b48;
    }
    pbVar4 = recovered_10004ad0(800);
    if (pbVar4 != (byte *)0x0) {
      recovered_10005358(pbVar4,0,800);
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pcVar5 = recovered_10006038(unaff_r8,'r');
      bVar8 = 1;
      bVar1 = 1;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = recovered_10006038(unaff_r8,'+');
        bVar1 = 1;
        if (pcVar5 == (char *)0x0) {
          pcVar5 = recovered_10006038(unaff_r8,'a');
          bVar1 = 0;
          if (pcVar5 != (char *)0x0) {
            bVar1 = 1;
          }
        }
      }
      pbVar4[0x110] = bVar1;
      pcVar5 = recovered_10006038(unaff_r8,'w');
      if ((pcVar5 == (char *)0x0) &&
         (pcVar5 = recovered_10006038(unaff_r8,'a'), pcVar5 == (char *)0x0)) {
        pcVar5 = recovered_10006038(unaff_r8,'+');
        bVar8 = 0;
        if (pcVar5 != (char *)0x0) {
          bVar8 = 1;
        }
      }
      pbVar4[0x111] = bVar8;
      pcVar5 = recovered_10006038(unaff_r8,'a');
      pbVar4[0x112] = pcVar5 != (char *)0x0;
      pbVar4[0x10c] = 0xff;
      pbVar4[0x10d] = 0xff;
      pbVar4[0x10e] = 0xff;
      pbVar4[0x10f] = 0xff;
      pf_varargs_10008174__4_((char *)(pbVar4 + 4),0xf1,&DAT_1000fbe2,param_1);
      recovered_10005358((byte *)&local_24,0,0xc);
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x37 < _DAT_40010808)) &&
         ((_DAT_40010834 != (code *)0x0 && (iVar2 = (*_DAT_40010834)(param_1,&local_24), iVar2 != 0)
          ))) {
        pcVar5 = recovered_10006038(unaff_r8,'w');
        if ((pcVar5 == (char *)0x0) && (local_20 != (undefined8 *)0x0)) {
          if (pbVar4[0x111] == 1) {
            puVar6 = *(undefined8 **)(pbVar4 + 0x104);
            if (puVar6 < local_20) {
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x100;
              }
              do {
                size = puVar6;
                puVar6 = (undefined8 *)((int)size << 1);
              } while (size < local_20);
              puVar6 = recovered_10004b74(*(void **)(pbVar4 + 0xfc),(ulong)size);
              if (puVar6 == (undefined8 *)0x0) {
                pbVar4[0x115] = 1;
                uVar7 = 0xc;
                goto LAB_10008be4;
              }
              *(undefined8 **)(pbVar4 + 0x104) = size;
              *(undefined8 **)(pbVar4 + 0xfc) = puVar6;
              *(undefined8 **)(pbVar4 + 0xf8) = puVar6;
            }
            else {
              puVar6 = *(undefined8 **)(pbVar4 + 0xfc);
            }
            recovered_10004bc8(puVar6,local_24,local_20);
          }
          else {
            *(undefined8 **)(pbVar4 + 0xf8) = local_24;
          }
          *(undefined8 **)(pbVar4 + 0x100) = local_20;
        }
      }
      else if (pbVar4[0x111] == 0) {
        uVar7 = 2;
LAB_10008be4:
        *DAT_10014004 = uVar7;
        recovered_10004b24(pbVar4);
        return (undefined4 *)0x0;
      }
      if (pbVar4[0x112] == 1) {
        *(undefined4 *)(pbVar4 + 0x108) = *(undefined4 *)(pbVar4 + 0x100);
        return (undefined4 *)pbVar4;
      }
      return (undefined4 *)pbVar4;
    }
  }
  uVar7 = 0xc;
LAB_10008bbc:
  *DAT_10014004 = uVar7;
  return (undefined4 *)0x0;
}

#undef DAT_1000fbe2
#undef DAT_10014004
#undef DAT_40010800
#undef DAT_40010804
#undef DAT_40010808
#undef DAT_40010834
#undef _DAT_40010800
#undef _DAT_40010804
#undef _DAT_40010808
#undef _DAT_40010834
#undef str_1000fc97
#undef str_1000fca4
#undef str_1000fcb2
#undef local_24
#undef local_20

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
 * Address: 0x10008ccc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008ccc(int param_1,int param_2,uint *param_3)

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
      recovered_10004b24((void *)param_3[0x3f]);
    }
    recovered_10004b24(param_3);
  }
  recovered_10008948(param_1,param_2);
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
 * Address: 0x10008dcc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10008dcc(uint *param_1)

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
    recovered_10004b24((void *)param_1[0x3f]);
  }
  recovered_10004b24(param_1);
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
 * Address: 0x10008ec4
 */

uint recovered_10008ec4(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int *unaff_r4;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;

  uVar3 = 0;
  if (param_3 != 0 && param_2 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      unaff_r4 = param_4;
    }
    if ((param_1 != (undefined1 *)0x0 && param_4 != (int *)0x0) && ((char)unaff_r4[0x44] == '\x01'))
    {
      iVar2 = *unaff_r4;
      bVar9 = iVar2 == 0;
      if (bVar9) {
        iVar2 = unaff_r4[0x43];
      }
      if (bVar9 && iVar2 == -1) {
        uVar7 = unaff_r4[0x42];
        if (uVar7 < (uint)unaff_r4[0x40]) {
          puVar6 = (undefined8 *)((ulonglong)param_3 * (ulonglong)param_2);
          puVar8 = (undefined8 *)(unaff_r4[0x40] - uVar7);
          if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) != 0) {
            puVar6 = (undefined8 *)0xffffffff;
          }
          puVar4 = puVar6;
          if (puVar8 < puVar6) {
            puVar4 = puVar8;
          }
          recovered_10004bc8((undefined8 *)param_1,(undefined8 *)(unaff_r4[0x3e] + uVar7),puVar4);
          unaff_r4[0x42] = unaff_r4[0x42] + (int)puVar4;
          if (puVar8 < puVar6) {
            *(undefined1 *)(unaff_r4 + 0x45) = 1;
          }
          uVar3 = recovered_10003ea0((uint)puVar4,param_2);
        }
        else {
          *(undefined1 *)(unaff_r4 + 0x45) = 1;
        }
      }
      else {
        do {
          puVar5 = param_1;
          uVar7 = param_2;
          do {
            uVar1 = recovered_10008ff0(unaff_r4);
            if (uVar1 == 0xffffffff) {
              return uVar3;
            }
            *puVar5 = (char)uVar1;
            uVar7 = uVar7 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
          uVar3 = uVar3 + 1;
          param_1 = param_1 + param_2;
        } while (uVar3 != param_3);
        uVar3 = param_3;
      }
    }
  }
  return uVar3;
}


#undef DAT_1000fbb8
#define DAT_1000fbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10010084
#define DAT_10010084 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x4f4U)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f8U)))
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
#define auStack_220 (*(undefined8 (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10008ff0(int *param_1)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

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
LAB_1000904c:
      param_1[199] = uVar2 + 1;
      return (uint)*(byte *)((int)param_1 + uVar2 + 0x116);
    }
    if (DAT_10010084 != (undefined8 *)0x0) {
      recovered_10004bc8(auStack_220,(undefined8 *)&DAT_10010088,DAT_10010084);
      *(undefined1 *)((int)auStack_220 + (int)DAT_10010084) = 0;
      if ((((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) && (0x43 < _DAT_40010808)) &&
         (_DAT_40010840 != (code *)0x0)) {
        (*_DAT_40010840)(auStack_220);
      }
      DAT_10010084 = (undefined8 *)0x0;
    }
    if (((_DAT_40010800 == 0x50414d57) && (_DAT_40010804 != 0)) &&
       ((0x47 < _DAT_40010808 && (_DAT_40010844 != (code *)0x0)))) {
      iVar3 = (int)param_1 + 0x116;
      uVar2 = 0;
      iVar1 = (*_DAT_40010844)(iVar3,0x1fe,&DAT_1000fbb8,0);
      if (iVar1 != 0) {
        iVar1 = recovered_10005c58(iVar3);
        param_1[0xc6] = iVar1 + 1;
        *(undefined1 *)(iVar3 + iVar1) = 10;
        *(undefined1 *)(iVar3 + param_1[0xc6]) = 0;
        goto LAB_1000904c;
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

#undef DAT_1000fbb8
#undef DAT_10010084
#undef DAT_10010088
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091f0
 */

int recovered_100091f0(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint size;
  undefined8 *puVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
    param_3 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_3 * param_2);
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10008390((char *)param_1,(int)puVar4);
      param_4[0x42] = param_4[0x42] + (int)puVar4;
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
      if (uVar3 < uVar2 + (int)puVar4) {
        if (uVar3 == 0) {
          uVar3 = 0x100;
        }
        do {
          size = uVar3;
          uVar3 = size << 1;
        } while (size < uVar2 + (int)puVar4);
        pvVar1 = recovered_10004b74((void *)param_4[0x3f],size);
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
        recovered_10005358((byte *)(param_4[0x3f] + uVar3),0,uVar2 - uVar3);
        uVar2 = param_4[0x42];
      }
      recovered_10004bc8((undefined8 *)(param_4[0x3f] + uVar2),(undefined8 *)param_1,puVar4);
      uVar3 = param_4[0x42] + (int)puVar4;
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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009368
 */

undefined4 recovered_10009368(int *param_1,uint param_2,int param_3)

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
        if (param_3 != 2) goto LAB_1000937c;
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
LAB_1000937c:
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  *DAT_10014004 = 0x16;
  return 0xffffffff;
}

#undef DAT_10014004

#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009418
 */

undefined4 recovered_10009418(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
 * Address: 0x10009440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009440(uint *param_1)

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
 * Address: 0x10009518
 */

undefined1 recovered_10009518(int param_1)

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
 * Address: 0x10009528
 */

undefined1 recovered_10009528(int param_1)

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
 * Address: 0x10009538
 */

void recovered_10009538(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009554
 */

void recovered_10009554(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0xffffffff && param_2 != 0) {
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(uint *)(param_2 + 0x10c) = param_1 & 0xff;
  }
  return;
}


#undef DAT_10014004
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
 * Address: 0x10009578
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009578(int param_1)

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
#define DAT_10014004 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x4474U)))
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
 * Address: 0x10009608
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10009608(int param_1,int param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *DAT_10014004 = 0x16;
    return 0xffffffff;
  }
  recovered_10005358((byte *)&local_28,0,0xc);
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
#define local_24 (*(undefined8 * *)(frame + 28))
#define local_20 (*(undefined8 * *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000977c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_1000977c(int param_1,undefined4 *param_2,uint *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0 && param_3 != (uint *)0x0)) &&
      (recovered_10005358((byte *)&local_24,0,0xc), _DAT_40010800 == 0x50414d57)) &&
     (((_DAT_40010804 != 0 && (0x37 < _DAT_40010808)) &&
      ((_DAT_40010834 != (code *)0x0 && (iVar1 = (*_DAT_40010834)(param_1,&local_24), iVar1 != 0))))
     )) {
    puVar2 = local_20;
    if (local_20 < (undefined8 *)0x2) {
      puVar2 = (undefined8 *)0x1;
    }
    puVar2 = recovered_10004ad0((ulong)puVar2);
    if (puVar2 != (undefined8 *)0x0) {
      if (local_20 == (undefined8 *)0x0) {
        local_20 = (undefined8 *)0x0;
      }
      else {
        recovered_10004bc8(puVar2,local_24,local_20);
      }
      uVar3 = 1;
      *param_3 = (uint)local_20;
      *param_2 = puVar2;
    }
  }
  return uVar3;
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
 * Address: 0x1000987c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1000987c(int param_1,int param_2,int param_3)

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
 * Address: 0x10009904
 */

undefined4 recovered_10009904(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000990c
 */

void recovered_1000990c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009910
 */

undefined4 recovered_10009910(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009918
 */

undefined4 recovered_10009918(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009920
 */

undefined4 recovered_10009920(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009928
 */

char * recovered_10009928(char *param_1,char param_2,int param_3)

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
 * Address: 0x1000995c
 */

int recovered_1000995c(byte *param_1,byte *param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    param_3 = param_3 + -1;
    uVar1 = (uint)*param_1;
    if (uVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar1 - *param_2;
}


#undef DAT_1000fc26
#define DAT_1000fc26 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000fc29
#define str_1000fc29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99U)))
#undef str_1000fc36
#define str_1000fc36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6U)))
#undef str_1000fc40
#define str_1000fc40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000fc54
#define str_1000fc54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_1000fc62
#define str_1000fc62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2U)))
#undef str_1000fc74
#define str_1000fc74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000fc80
#define str_1000fc80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf0U)))
#undef str_1000fc91
#define str_1000fc91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099a0
 */

char * recovered_100099a0(undefined4 param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000fc26;
  switch((uintptr_t)(param_1)) {
  case 0:
    goto switchD_100099c0_caseD_0;
  default:
    pcVar1 = str_1000fc91;
switchD_100099c0_caseD_0:
    return pcVar1;
  case 2:
    return str_1000fc29;
  case 5:
    return str_1000fc36;
  case 9:
    return str_1000fc40;
  case 0xc:
    return str_1000fc54;
  case 0xd:
    return str_1000fc62;
  case 0x11:
    return str_1000fc74;
  case 0x16:
    return str_1000fc80;
  }
}

#undef DAT_1000fc26
#undef str_1000fc29
#undef str_1000fc36
#undef str_1000fc40
#undef str_1000fc54
#undef str_1000fc62
#undef str_1000fc74
#undef str_1000fc80
#undef str_1000fc91

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aa0
 */

undefined4 recovered_10009aa0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009aa8
 */

undefined4 recovered_10009aa8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_10010288
#define DAT_10010288 (*(int *)(((uintptr_t)pf_module_state + 0x6f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ab0
 */

void recovered_10009ab0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010288 = DAT_10010288 + 1;
  return;
}

#undef DAT_10010288

/* Native scope-unwind register ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10009ad8(void *context){__asm__ volatile("ldr sp,[r0,#40]\nldr r7,[r0,#32]\nldr ip,[r0,#36]\nbx ip");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10009ae8(void *context){__asm__ volatile("stmia r0,{r4-r11}; str sp,[r0,#32]; str lr,[r0,#36]; mov r0,#0; bx lr");}


/* Native context ABI; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10009b00(void *context,int value){__asm__ volatile("cmp r1,#0; moveq r1,#1; ldmia r0,{r4-r11}; ldr sp,[r0,#32]; ldr lr,[r0,#36]; mov r0,r1; bx lr");}


#undef DAT_10009ba4
#define DAT_10009ba4 (*(int *)(0x10009ba4U))
#undef DAT_10009ba8
#define DAT_10009ba8 (*(int *)(0x10009ba8U))
#define local_1c (*(undefined1 * *)(frame + 52))
#define local_18 (*(int *)(frame + 56))
#define uStack_3c (*(undefined4 *)(frame + 20))
#define local_14 (*(undefined1 * *)(frame + 60))
#define auStack_10 (*(undefined1 (*)[8])(frame + 64))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_24 (*(code * *)(frame + 44))
#define local_20 (*(int *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b20
 */

void recovered_10009b20(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_1c = auStack_10 + 8;
  local_14 = (undefined1 *)&uStack_3c;
  local_24 = recovered_10009bac;
  local_20 = ((uintptr_t)pf_module_state + 0x3e0U);
  local_18 = (0x1cU) + 0x10009b58;
  local_38 = 1;
  recovered_1000a19c(&uStack_3c);
  recovered_10004abc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10009b80);
  (*pcVar1)();
}

#undef DAT_10009ba4
#undef DAT_10009ba8
#undef local_1c
#undef local_18
#undef uStack_3c
#undef local_14
#undef auStack_10
#undef local_38
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bac
 */

undefined4 recovered_10009bac(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bb4
 */

void recovered_10009bb4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10009bc4(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}


#undef DAT_1001028c
#define DAT_1001028c (*(int *)(((uintptr_t)pf_module_state + 0x6fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bc4
 */

void recovered_10009bc4(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 8) = DAT_1001028c;
  DAT_1001028c = param_1;
  recovered_1000a038(param_1);
  return;
}

#undef DAT_1001028c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bfc
 */

void * recovered_10009bfc(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10004ad0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10004abc();
    return (void *)0x0;
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c28
 */

void * recovered_10009c28(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10004ad0(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10004abc();
    return (void *)0x0;
  }
  return pvVar1;
}


#undef DAT_10009d14
#define DAT_10009d14 (*(int *)(0x10009d14U))
#undef DAT_10009d18
#define DAT_10009d18 (*(int *)(0x10009d18U))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c54
 */

void recovered_10009c54(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009bac;
  local_78 = ((uintptr_t)pf_module_state + 0x3f0U);
  local_70 = (0x3cU) + 0x10009ca8;
  local_90 = 1;
  recovered_1000a19c(&uStack_94);
  recovered_10004b24(param_1);
  recovered_1000a1c0(&uStack_94);
  return;
}

#undef DAT_10009d14
#undef DAT_10009d18
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef local_78
#undef local_74
#undef auStack_68
#undef local_70
#undef local_6c

#undef DAT_10009ddc
#define DAT_10009ddc (*(int *)(0x10009ddcU))
#undef DAT_10009de0
#define DAT_10009de0 (*(int *)(0x10009de0U))
#define local_90 (*(undefined4 *)(frame + 32))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d1c
 */

void recovered_10009d1c(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009bac;
  local_78 = ((uintptr_t)pf_module_state + 0x400U);
  local_70 = (0x3cU) + 0x10009d70;
  local_90 = 1;
  recovered_1000a19c(&uStack_94);
  recovered_10004b24(param_1);
  recovered_1000a1c0(&uStack_94);
  return;
}

#undef DAT_10009ddc
#undef DAT_10009de0
#undef local_90
#undef local_7c
#undef local_78
#undef auStack_a0
#undef local_74
#undef local_70
#undef uStack_94
#undef local_6c
#undef auStack_68

#undef DAT_10009ea4
#define DAT_10009ea4 (*(int *)(0x10009ea4U))
#undef DAT_10009ea8
#define DAT_10009ea8 (*(int *)(0x10009ea8U))
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
 * Address: 0x10009de4
 */

void recovered_10009de4(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009bac;
  local_78 = ((uintptr_t)pf_module_state + 0x410U);
  local_70 = (0x3cU) + 0x10009e38;
  local_90 = 1;
  recovered_1000a19c(&uStack_94);
  recovered_10004b24(param_1);
  recovered_1000a1c0(&uStack_94);
  return;
}

#undef DAT_10009ea4
#undef DAT_10009ea8
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef local_90
#undef local_7c
#undef auStack_68
#undef local_78
#undef local_74

#undef DAT_10009f6c
#define DAT_10009f6c (*(int *)(0x10009f6cU))
#undef DAT_10009f70
#define DAT_10009f70 (*(int *)(0x10009f70U))
#define local_7c (*(code * *)(frame + 52))
#define local_78 (*(int *)(frame + 56))
#define local_74 (*(undefined1 * *)(frame + 60))
#define local_70 (*(int *)(frame + 64))
#define local_6c (*(undefined1 * *)(frame + 68))
#define auStack_a0 (*(undefined1 (*)[12])(frame + 16))
#define uStack_94 (*(undefined4 *)(frame + 28))
#define auStack_68 (*(undefined1 (*)[8])(frame + 72))
#define local_90 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009eac
 */

void recovered_10009eac(void *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};


  local_74 = auStack_68 + 0x60;
  local_6c = auStack_a0;
  local_7c = recovered_10009bac;
  local_78 = ((uintptr_t)pf_module_state + 0x420U);
  local_70 = (0x3cU) + 0x10009f00;
  local_90 = 1;
  recovered_1000a19c(&uStack_94);
  recovered_10004b24(param_1);
  recovered_1000a1c0(&uStack_94);
  return;
}

#undef DAT_10009f6c
#undef DAT_10009f70
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef auStack_a0
#undef uStack_94
#undef auStack_68
#undef local_90

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f74
 */

undefined4 recovered_10009f74(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f7c
 */

uint recovered_10009f7c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f8c
 */

void recovered_10009f8c(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f9c
 */

void recovered_10009f9c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009fa0
 */

undefined4 * recovered_10009fa0(uint param_1)

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
  puVar1 = recovered_10004ad0(size);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10009b20();
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
      if (size == uVar6) goto LAB_1000a01c;
    }
    iVar3 = (param_1 - uVar6) + 0x1c;
    puVar5 = (undefined1 *)((int)puVar1 + uVar6);
    do {
      *puVar5 = 0;
      iVar3 = iVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar3 != 0);
  }
LAB_1000a01c:
  return puVar1 + 7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a028
 */

void recovered_1000a028(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  recovered_10004b24((void *)(param_1 + -0x1c));
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a038
 */

int recovered_1000a038(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x1c;
}


#undef DAT_1001028c
#define DAT_1001028c (*(void * *)(((uintptr_t)pf_module_state + 0x6fcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a040
 */

void recovered_1000a040(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *pointer;
  undefined4 uVar2;

  pointer = DAT_1001028c;
  if (DAT_1001028c == (void *)0x0) {
    return;
  }
  pcVar1 = (char *)((int)DAT_1001028c + 0x18);
  uVar2 = *(undefined4 *)((int)DAT_1001028c + 8);
  *(undefined4 *)((int)DAT_1001028c + 8) = 0;
  DAT_1001028c = (void *)uVar2;
  if (*pcVar1 != '\0') {
    return;
  }
  if (*(code **)((int)pointer + 4) != (code *)0x0) {
    (**(code **)((int)pointer + 4))((int)pointer + 0x1c);
  }
  recovered_10004b24(pointer);
  return;
}

#undef DAT_1001028c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0a8
 */

void recovered_1000a0a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x1c) = param_2;
  *(undefined1 *)(param_1 + -4) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0x18) = param_3;
  recovered_1000a0d0((undefined4 *)(param_1 + -0x1c));
  return;
}


#undef DAT_1001028c
#define DAT_1001028c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6fcU)))
#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x700U)))
#define local_28 (*(undefined4 *)(frame + 24))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_20 (*(undefined4 *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a0d0
 */

void recovered_1000a0d0(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *extraout_r0 = 0;
  int *piVar2;
  undefined4 *puVar3;

  if (DAT_10010290 != (int *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    piVar2 = DAT_10010290;
    do {
      local_24 = 0;
      local_28 = 0;
      local_20 = 0;
      iVar1 = recovered_1000a9e8((int)piVar2,puVar3,(undefined2 *)&local_28);
      if ((iVar1 != 0) && (PF_PART1(local_28, 2) == '\x01')) {
        param_1[4] = local_24;
        param_1[3] = piVar2;
        param_1[5] = local_20;
        recovered_1000a254(param_1);
        puVar3 = DAT_1001028c;
                    /* WARNING: Subroutine does not return */
        if (DAT_1001028c == (undefined4 *)0x0) {
          recovered_10009b20();
        }
        DAT_1001028c[5] = 0;
        puVar3[4] = 0;
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 6) = 1;
        recovered_1000a0d0(puVar3);
        *extraout_r0 = (int)DAT_10010290;
        DAT_10010290 = extraout_r0;
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}

#undef DAT_1001028c
#undef DAT_10010290
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1001028c
#define DAT_1001028c (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x6fcU)))
#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x700U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a164
 */

void recovered_1000a164(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *extraout_r0 = 0;

  puVar1 = DAT_1001028c;
                    /* WARNING: Subroutine does not return */
  if (DAT_1001028c == (undefined4 *)0x0) {
    recovered_10009b20();
  }
  DAT_1001028c[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  recovered_1000a0d0(puVar1);
  *extraout_r0 = DAT_10010290;
  DAT_10010290 = extraout_r0;
  return;
}

#undef DAT_1001028c
#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x700U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a19c
 */

void recovered_1000a19c(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010290;
  DAT_10010290 = param_1;
  return;
}

#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x700U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1c0
 */

void recovered_1000a1c0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_10010290;
  if (DAT_10010290 == param_1) {
    puVar2 = &DAT_10010290;
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

#undef DAT_10010290

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a208
 */

void recovered_1000a208(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a0d0(in_r0);
                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a214
 */

void recovered_1000a214(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}


#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x700U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a220
 */

void recovered_1000a220(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_10010290 != (int *)0x0) {
    DAT_10010290 = (int *)*DAT_10010290;
  }
  recovered_1000a254(param_1);
  return;
}

#undef DAT_10010290

#undef DAT_10010290
#define DAT_10010290 (*(int * *)(((uintptr_t)pf_module_state + 0x700U)))
#define local_30 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 20))
#define local_28 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a254
 */

undefined4 recovered_1000a254(undefined4 *param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *extraout_r0 = 0;
  int iVar4;
  int *piVar5;
  bool bVar6;

  if (DAT_10010290 != (int *)0x0) {
    piVar5 = (int *)param_1[3];
    do {
      piVar1 = DAT_10010290;
      if (DAT_10010290 == piVar5) {
        iVar4 = param_1[5];
        iVar3 = param_1[4];
        DAT_10010290[2] = (int)param_1;
        piVar1[3] = iVar4;
LAB_1000a308:
        piVar1[1] = iVar3;
        recovered_10009ad8((int)piVar1);
        recovered_1000a220(extraout_r0);
        return 0;
      }
      local_2c = 0;
      local_30 = 0;
      local_28 = 0;
      recovered_1000a9e8((int)DAT_10010290,(undefined4 *)*param_1,(undefined2 *)&local_30);
      uVar2 = local_30 & 0xff;
      bVar6 = uVar2 == 1;
      if (bVar6) {
        uVar2 = local_30 >> 8 & 0xff;
      }
      if (bVar6 && uVar2 == 1) {
        piVar1[3] = 0;
        piVar1[2] = (int)param_1;
        iVar3 = local_2c;
        goto LAB_1000a308;
      }
      DAT_10010290 = (int *)*piVar1;
    } while (DAT_10010290 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}

#undef DAT_10010290
#undef local_30
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a314
 */

undefined4 recovered_1000a314(undefined4 *in_r0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000a220(in_r0);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a320
 */

undefined4 recovered_1000a320(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a328
 */

void recovered_1000a328(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10009b20();
}


#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a334
 */

int recovered_1000a334(int *param_1,undefined4 param_2,undefined4 *param_3)

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
LAB_1000a420:
          return (int)param_1 + iVar8;
        }
      }
      else {
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if (cVar1 == '\0' || cVar2 == '\0') {
            if (cVar1 == cVar2) goto LAB_1000a420;
            break;
          }
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
      }
      if ((undefined *)*puVar4 != &DAT_10010060) {
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

#undef DAT_10010060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a428
 */

void recovered_1000a428(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a42c
 */

undefined4 recovered_1000a42c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a434
 */

bool recovered_1000a434(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a448
 */

bool recovered_1000a448(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 - 9U < 0x18) && ((1 << (param_1 - 9U & 0xff) & 0x80001bU) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a488
 */

bool recovered_1000a488(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4b4
 */

bool recovered_1000a4b4(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4d0
 */

bool recovered_1000a4d0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4ec
 */

bool recovered_1000a4ec(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a508
 */

bool recovered_1000a508(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_1000a528(double value) {
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
float recovered_1000a610(float value){return (float)recovered_1000a528((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_1000a710(long double value){return (long double)recovered_1000a528((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_1000a7f8(long end,long start){return (double)end-(double)start;}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a814
 */

double recovered_1000a814(undefined4 param_1,undefined4 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = recovered_10006418(param_1,param_2);
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
 * Address: 0x1000a86c
 */

ulonglong recovered_1000a86c(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000a8d8;
    }
  }
  bVar1 = false;
joined_r0x1000a8d8:
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
 * Address: 0x1000a9e4
 */

ulonglong recovered_1000a9e4(byte *param_1,undefined4 *param_2,uint param_3)

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
      goto joined_r0x1000a8d8;
    }
  }
  bVar1 = false;
joined_r0x1000a8d8:
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


#undef DAT_1000ffc4
#define DAT_1000ffc4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x434U)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d0U)))
#define local_28 (*(byte * *)(frame + 24))
#define local_24 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a9e8
 */

undefined4 recovered_1000a9e8(int param_1,undefined4 *param_2,undefined2 *param_3)

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
      recovered_1000ad9c((uint)*pbVar10,&local_28);
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
          goto LAB_1000abc0;
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
LAB_1000abc0:
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
LAB_1000ad7c:
      *(uint *)(param_3 + 4) = uVar17;
      *(undefined1 *)(param_3 + 1) = 1;
      return 1;
    }
    local_24 = pbVar10 + *(int *)(&DAT_1000ffc4 + uVar14 * 4) * uVar17;
    puVar7 = recovered_1000ad9c(uVar13,&local_24);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1000ad7c;
    bVar23 = param_2 != (undefined4 *)0x0;
    if ((param_2 != (undefined4 *)0x0) && (puVar7 != param_2)) {
      pcVar18 = (char *)puVar7[1];
      puVar12 = param_2;
      do {
        pcVar16 = (char *)puVar12[1];
        if (pcVar18 == (char *)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 == pcVar18) goto LAB_1000ad7c;
        }
        else {
          pcVar9 = pcVar18;
          do {
            cVar1 = *pcVar16;
            cVar2 = *pcVar9;
            if (cVar1 == '\0' || cVar2 == '\0') {
              if (cVar1 == cVar2) goto LAB_1000ad7c;
              break;
            }
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar12 != &DAT_10010060) goto LAB_1000ad50;
        puVar12 = (undefined4 *)puVar12[2];
        bVar23 = puVar12 != (undefined4 *)0x0;
      } while (puVar12 != puVar7 && puVar12 != (undefined4 *)0x0);
    }
    if (bVar23) goto LAB_1000ad7c;
  }
LAB_1000ad50:
  if (uVar22 == 0) {
    return 0;
  }
  pbVar21 = pbVar5 + uVar22;
  bVar23 = 0x3e < uVar8;
  uVar8 = uVar8 + 1;
  if (bVar23) {
    return 0;
  }
  goto LAB_1000abc0;
}

#undef DAT_1000ffc4
#undef DAT_10010060
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad9c
 */

undefined4 * recovered_1000ad9c(uint param_1,undefined4 *param_2)

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
      goto switchD_1000adcc_caseD_5;
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
switchD_1000adcc_caseD_5:
  return puVar5;
}


#undef DAT_1000fcc0
#define DAT_1000fcc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af2c
 */

undefined * recovered_1000af2c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000fcc0;
}

#undef DAT_1000fcc0

#undef DAT_10014008
#define DAT_10014008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4478U)))
#undef str_1000fcc4
#define str_1000fcc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#undef str_1000fcd4
#define str_1000fcd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_1000fcf5
#define str_1000fcf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x165U)))
#undef str_1000fdac
#define str_1000fdac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_1000fdb5
#define str_1000fdb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_1000fdca
#define str_1000fdca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_1000fdd8
#define str_1000fdd8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x248U)))
#undef str_1000fde8
#define str_1000fde8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x258U)))
#define local_1098 (*(byte * *)(frame + 24))
#define local_108c (*(byte * *)(frame + 36))
#define local_84 (*(byte (*)[100])(frame + 4140))
#define acStack_1084 (*(char (*)[4096])(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000af3c
 */

uint recovered_1000af3c(char *param_1,byte *param_2,byte *param_3,byte *param_4,char *param_5,
                       uint param_6,undefined1 *param_7,uint param_8,char *param_9,uint param_10,
                       uint param_11)

{
  unsigned char frame[4304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;

  if (param_2 == (byte *)0x0) {
    pbVar19 = (byte *)0x0;
  }
  else {
    iVar4 = recovered_10005c58((int)param_2);
    pbVar19 = param_2 + iVar4;
  }
  uVar12 = 0;
  if (param_5 != (char *)0x0) {
    uVar12 = param_6;
  }
  bVar2 = param_10 == 0;
  if (param_5 != (char *)0x0 && uVar12 != 0) {
    *param_5 = '\0';
  }
  bVar3 = param_9 == (char *)0x0;
  if (!bVar3 && !bVar2) {
    *param_9 = (bVar3 || bVar2) && bVar3;
  }
  if (param_7 != (undefined1 *)0x0 && param_8 != 0) {
    *param_7 = 0;
  }
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  local_84[0] = 0;
  pbVar5 = param_2;
  while( true ) {
    uVar12 = (uint)*pbVar5;
    if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar16 = 0;
  while( true ) {
    uVar15 = uVar12 - 0x30;
    bVar22 = 9 < uVar15;
    if (bVar22) {
      uVar15 = (uVar12 & 0xdf) - 0x41;
    }
    if ((bVar22 && 0x19 < uVar15) && (uVar12 != 0x5f && uVar12 != 0x24)) break;
    if (uVar16 + 1 < 0x60) {
      local_84[uVar16] = (byte)uVar12;
      uVar16 = uVar16 + 1;
    }
    pbVar5 = pbVar5 + 1;
    uVar12 = (uint)*pbVar5;
  }
  iVar4 = 1;
  local_84[uVar16] = 0;
  while ((uVar12 - 9 < 0x18 && ((1 << (uVar12 - 9 & 0xff) & 0x800013U) != 0))) {
    uVar12 = (uint)pbVar5[iVar4];
    iVar4 = iVar4 + 1;
  }
  if ((uVar16 != 0) && (uVar12 == 0x28)) {
    if (param_1 == (char *)0x0) {
      local_1098 = (byte *)0x0;
LAB_1000b2e4:
      local_108c = (byte *)0x0;
    }
    else {
      local_1098 = (byte *)0x0;
      if (local_84[0] == 0) goto LAB_1000b2e4;
      iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x21cU));
      local_108c = (byte *)0x0;
      if (iVar4 != 0) {
        local_1098 = (byte *)0x0;
LAB_1000b130:
        if (*param_1 != '\0') {
          do {
            iVar13 = 0;
            while (uVar12 = (uint)(byte)param_1[iVar13], uVar12 != 0) {
              uVar16 = (uint)(byte)str_1000fdac[iVar13];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar12 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 0x20;
              }
              if (uVar12 != uVar16) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b198;
            }
            if (iVar4 == iVar13) goto LAB_1000b198;
            param_1 = param_1 + 1;
            if (*param_1 == '\0') break;
          } while( true );
        }
        goto LAB_1000b2e4;
      }
    }
LAB_1000b2e8:
    if (local_108c != (byte *)0x0 && local_1098 != (byte *)0x0) {
      param_2 = local_108c;
      pbVar19 = local_1098;
    }
  }
  uVar12 = 0;
  if ((param_11 & 2) != 0 && pbVar19 != (byte *)0x0) {
    iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x134U));
    uVar12 = 0;
    if (((param_2 <= pbVar19) && (param_2 != (byte *)0x0 && iVar4 != 0)) &&
       (param_2 + iVar4 <= pbVar19)) {
      pbVar5 = param_2;
      do {
        if (*pbVar5 == 0) {
          uVar12 = 0;
          break;
        }
        iVar13 = 0;
        while ((pbVar5 + iVar13 < pbVar19 && (uVar12 = (uint)pbVar5[iVar13], uVar12 != 0))) {
          uVar16 = (uint)(byte)str_1000fcc4[iVar13];
          if (uVar16 - 0x41 < 0x1a) {
            uVar16 = uVar16 | 0x20;
          }
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar12 != uVar16) break;
          iVar13 = iVar13 + 1;
          if (iVar4 == iVar13) goto LAB_1000bb90;
        }
        if (iVar4 == iVar13) {
LAB_1000bb90:
          uVar12 = 4;
          if ((!bVar3 && !bVar2) && (*param_9 == '\0')) {
            puVar10 = (undefined8 *)recovered_10005c58(((uintptr_t)pf_module_state + 0x144U));
            if (param_10 <= puVar10) {
              puVar10 = (undefined8 *)(param_10 - 1);
            }
            if (puVar10 != (undefined8 *)0x0) {
              recovered_10004bc8((undefined8 *)param_9,(undefined8 *)str_1000fcd4,puVar10);
            }
            uVar12 = 4;
            param_9[(int)puVar10] = '\0';
          }
          break;
        }
        pbVar5 = pbVar5 + 1;
        uVar12 = 0;
      } while (pbVar5 + iVar4 <= pbVar19);
    }
  }
  if (param_5 != (char *)0x0) {
    if (param_6 == 0) {
      uVar16 = 0;
      goto LAB_1000b9dc;
    }
    uVar16 = 0;
    if (pbVar19 == (byte *)0x0) goto LAB_1000b9dc;
    if (param_2 < pbVar19) {
      pbVar5 = param_2;
      do {
        iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x225U));
        pbVar18 = (byte *)0x0;
        if ((pbVar5 != (byte *)0x0 && iVar4 != 0) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar18 = pbVar5;
          do {
            if (*pbVar18 == 0) break;
            iVar13 = 0;
            while ((pbVar18 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar18[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fdb5[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b400;
            }
            if (iVar4 == iVar13) goto LAB_1000b400;
            pbVar18 = pbVar18 + 1;
          } while (pbVar18 + iVar4 <= pbVar19);
          pbVar18 = (byte *)0x0;
        }
LAB_1000b400:
        iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x23aU));
        pbVar17 = (byte *)0x0;
        if ((pbVar5 != (byte *)0x0 && iVar4 != 0) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar17 = pbVar5;
          do {
            if (*pbVar17 == 0) break;
            iVar13 = 0;
            while ((pbVar17 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar17[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fdca[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b424;
            }
            if (iVar4 == iVar13) goto LAB_1000b424;
            pbVar17 = pbVar17 + 1;
          } while (pbVar17 + iVar4 <= pbVar19);
          pbVar17 = (byte *)0x0;
        }
LAB_1000b424:
        local_108c = (byte *)0x0;
        iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x248U));
        if (((pbVar5 != (byte *)0x0) && (iVar4 != 0)) && (pbVar5 + iVar4 <= pbVar19)) {
          pbVar21 = pbVar5;
          do {
            if (*pbVar21 == 0) goto LAB_1000b64c;
            iVar13 = 0;
            while ((pbVar21 + iVar13 < pbVar19 && (uVar16 = (uint)pbVar21[iVar13], uVar16 != 0))) {
              uVar15 = (uint)(byte)str_1000fdd8[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto LAB_1000b61c;
            }
            if (iVar4 == iVar13) {
LAB_1000b61c:
              local_108c = pbVar21;
              goto LAB_1000b64c;
            }
            pbVar21 = pbVar21 + 1;
          } while (pbVar21 + iVar4 <= pbVar19);
          local_108c = (byte *)0x0;
        }
LAB_1000b64c:
        iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x258U));
        pbVar20 = (byte *)0x0;
        pbVar21 = pbVar20;
        if (((pbVar5 == (byte *)0x0) || (iVar4 == 0)) || (pbVar19 < pbVar5 + iVar4)) {
joined_r0x1000b758:
          if (pbVar18 == (byte *)0x0) goto LAB_1000b720;
LAB_1000b75c:
          pbVar5 = pbVar18;
          if (pbVar17 < pbVar18) {
            pbVar5 = pbVar17;
          }
          bVar22 = pbVar17 == (byte *)0x0;
          pbVar17 = pbVar5;
          if (bVar22) {
            pbVar17 = pbVar18;
          }
LAB_1000b774:
          pbVar18 = pbVar17;
          if (local_108c < pbVar17) {
            pbVar18 = local_108c;
          }
          if (local_108c == (byte *)0x0) {
            pbVar18 = pbVar17;
          }
LAB_1000b788:
          pbVar5 = pbVar18;
          if ((pbVar21 != (byte *)0x0) && (pbVar21 < pbVar18)) {
            pbVar5 = pbVar21;
          }
        }
        else {
          do {
            pbVar21 = pbVar20;
            if (*pbVar5 == 0) goto joined_r0x1000b758;
            iVar13 = 0;
            while( true ) {
              pbVar21 = pbVar5;
              if ((pbVar19 <= pbVar5 + iVar13) || (uVar16 = (uint)pbVar5[iVar13], uVar16 == 0))
              break;
              uVar15 = (uint)(byte)str_1000fde8[iVar13];
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar13 = iVar13 + 1;
              if (iVar4 == iVar13) goto joined_r0x1000b758;
            }
            if (iVar4 == iVar13) goto joined_r0x1000b758;
            pbVar5 = pbVar5 + 1;
          } while (pbVar5 + iVar4 <= pbVar19);
          pbVar21 = (byte *)0x0;
          if (pbVar18 != (byte *)0x0) goto LAB_1000b75c;
LAB_1000b720:
          if (pbVar17 != (byte *)0x0) goto LAB_1000b774;
          pbVar18 = local_108c;
          pbVar5 = pbVar21;
          if (local_108c != (byte *)0x0) goto LAB_1000b788;
        }
        if ((pbVar5 == (byte *)0x0) || (pbVar19 <= pbVar5)) break;
        if (param_2 < pbVar5) {
          bVar1 = pbVar5[-1];
          bVar11 = bVar1 - 0x30U;
          bVar22 = 9 < bVar11;
          if (bVar22) {
            bVar11 = (bVar1 & 0xdf) + 0xbf;
          }
          if (((bVar22 && 0x19 < bVar11) && (bVar1 != 0x24 && bVar1 != 0x5f)) && (bVar1 != 0x2e))
          goto LAB_1000b7b4;
          pbVar5 = pbVar5 + 1;
        }
        else {
LAB_1000b7b4:
          pbVar18 = (byte *)recovered_10006038((char *)pbVar5,'=');
          if ((pbVar18 == (byte *)0x0) || (pbVar19 <= pbVar18)) {
            pbVar5 = pbVar5 + 1;
          }
          else {
            pbVar17 = pbVar18 + 1;
            pbVar5 = pbVar17;
            if (pbVar17 < pbVar19) {
              pbVar18 = pbVar19 + (-1 - (int)pbVar18);
              do {
                bVar1 = *pbVar5;
                if ((bVar1 == 10) || (bVar1 == 0xd || bVar1 == 0x3b)) goto LAB_1000b818;
                pbVar18 = pbVar18 + -1;
                pbVar5 = pbVar5 + 1;
              } while (pbVar18 != (byte *)0x0);
              pbVar5 = pbVar19;
            }
LAB_1000b818:
            *param_5 = '\0';
            uVar16 = recovered_1000d29c(param_5,param_6,(char *)pbVar17,(char *)pbVar5,
                                        (char *)param_3,(char *)param_4);
            if (((uVar16 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_1000b9dc;
          }
        }
      } while (pbVar5 < pbVar19);
    }
    iVar4 = 0;
    do {
      if (param_2 < pbVar19) {
        iVar13 = (&DAT_10014008)[iVar4];
        pbVar5 = param_2;
LAB_1000b8ac:
        iVar6 = recovered_10005c58(iVar13);
        if (pbVar5 != (byte *)0x0 && iVar6 != 0) {
          do {
            if ((pbVar19 < pbVar5 + iVar6) || (*pbVar5 == 0)) break;
            iVar14 = 0;
            while ((pbVar5 + iVar14 < pbVar19 && (uVar16 = (uint)pbVar5[iVar14], uVar16 != 0))) {
              uVar15 = (uint)*(byte *)(iVar13 + iVar14);
              if (uVar15 - 0x41 < 0x1a) {
                uVar15 = uVar15 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar16 != uVar15) break;
              iVar14 = iVar14 + 1;
              if (iVar6 == iVar14) goto LAB_1000b938;
            }
            if (iVar6 == iVar14) goto LAB_1000b938;
            pbVar5 = pbVar5 + 1;
          } while( true );
        }
      }
LAB_1000b884:
      iVar4 = iVar4 + 1;
    } while (iVar4 != 5);
  }
  uVar16 = 0;
LAB_1000b9dc:
  uVar16 = uVar16 | uVar12;
  if ((param_11 & 1) != 0 && pbVar19 != (byte *)0x0) {
    pbVar5 = (byte *)0xfff;
    if (pbVar19 + -(int)param_2 < (byte *)0xfff) {
      pbVar5 = pbVar19 + -(int)param_2;
    }
    recovered_10004bc8((undefined8 *)acStack_1084,(undefined8 *)param_2,(undefined8 *)pbVar5);
    acStack_1084[(int)pbVar5] = '\0';
    uVar12 = recovered_1000bc90(acStack_1084,param_7,param_8);
    uVar15 = recovered_1000bf34(acStack_1084,param_7,param_8);
    uVar8 = recovered_1000c724(acStack_1084,param_7,param_8);
    uVar9 = recovered_1000c8c4(acStack_1084,param_7,param_8);
    uVar16 = uVar12 | uVar15 | uVar8 | uVar9 | uVar16;
  }
  uVar12 = 8;
  if (uVar16 != 0) {
    uVar12 = uVar16;
  }
  if ((!bVar3 && !bVar2) && uVar16 == 0) {
    if (*param_9 == '\0') {
      puVar10 = (undefined8 *)recovered_10005c58(((uintptr_t)pf_module_state + 0x165U));
      if (param_10 <= puVar10) {
        puVar10 = (undefined8 *)(param_10 - 1);
      }
      if (puVar10 != (undefined8 *)0x0) {
        recovered_10004bc8((undefined8 *)param_9,(undefined8 *)str_1000fcf5,puVar10);
      }
      param_9[(int)puVar10] = '\0';
    }
    uVar12 = 8;
  }
  return uVar12;
LAB_1000b198:
  pbVar5 = (byte *)(param_1 + 8);
  while ((*pbVar5 - 9 < 0x18 && ((1 << (*pbVar5 - 9 & 0xff) & 0x800013U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = recovered_10005c58((int)local_84);
  iVar13 = recovered_1000995c(pbVar5,local_84,iVar4);
  if (iVar13 == 0) {
    uVar12 = pbVar5[iVar4] - 9;
    pbVar18 = local_1098;
    pbVar17 = local_108c;
    if ((uVar12 < 0x20) && ((1 << (uVar12 & 0xff) & 0x80800013U) != 0)) {
      pcVar7 = recovered_10006038((char *)(pbVar5 + iVar4),'{');
      local_108c = (byte *)0x0;
      pbVar17 = local_108c;
      if (pcVar7 != (char *)0x0) {
        iVar4 = 1;
        pbVar5 = (byte *)(pcVar7 + 1);
LAB_1000b210:
        bVar1 = *pbVar5;
        if (bVar1 < 0x27) {
          if (bVar1 == 0x22) goto LAB_1000b244;
          pbVar18 = local_1098;
          pbVar17 = local_108c;
          if (bVar1 == 0) goto joined_r0x1000b28c;
        }
        else {
          if (bVar1 == 0x27) {
LAB_1000b244:
            pbVar5 = pbVar5 + 1;
LAB_1000b25c:
            do {
              bVar11 = *pbVar5;
              if (bVar11 == 0x5c) {
                if (pbVar5[1] != 0) {
                  pbVar5 = pbVar5 + 2;
                  goto LAB_1000b25c;
                }
              }
              else if (bVar11 == 0) break;
              pbVar5 = pbVar5 + 1;
            } while (bVar11 != bVar1);
            goto LAB_1000b210;
          }
          if (bVar1 != 0x7b) {
            bVar22 = false;
            if (bVar1 == 0x7d) {
              iVar4 = iVar4 + -1;
              bVar22 = iVar4 == 0;
            }
            pbVar18 = pbVar5;
            pbVar17 = (byte *)(pcVar7 + 1);
            if (!bVar22) goto LAB_1000b20c;
            goto joined_r0x1000b28c;
          }
          iVar4 = iVar4 + 1;
        }
LAB_1000b20c:
        pbVar5 = pbVar5 + 1;
        goto LAB_1000b210;
      }
    }
joined_r0x1000b28c:
    local_108c = pbVar17;
    local_1098 = pbVar18;
    if ((uVar12 < 0x20) && ((1 << (uVar12 & 0xff) & 0x80800013U) != 0)) goto LAB_1000b2e8;
  }
  param_1 = param_1 + 1;
  iVar4 = recovered_10005c58(((uintptr_t)pf_module_state + 0x21cU));
  if (iVar4 == 0) goto LAB_1000b2e4;
  goto LAB_1000b130;
LAB_1000b938:
  if (pbVar19 <= pbVar5) goto LAB_1000b884;
  pcVar7 = recovered_10006038((char *)pbVar5,'(');
  if (pcVar7 != (char *)0x0) {
    pbVar18 = (byte *)recovered_1000e488(pcVar7);
    if ((pbVar18 != (byte *)0x0) && (pbVar18 <= pbVar19)) {
      *param_5 = '\0';
      uVar16 = recovered_1000d29c(param_5,param_6,pcVar7 + 1,(char *)pbVar18,(char *)param_3,
                                  (char *)param_4);
      pbVar5 = pbVar18;
      if (((uVar16 & 0x10) != 0) && (*param_5 != '\0')) goto LAB_1000b9dc;
    }
  }
  pbVar5 = pbVar5 + 1;
  if (pbVar19 <= pbVar5) goto LAB_1000b884;
  goto LAB_1000b8ac;
}

#undef DAT_10014008
#undef str_1000fcc4
#undef str_1000fcd4
#undef str_1000fcf5
#undef str_1000fdac
#undef str_1000fdb5
#undef str_1000fdca
#undef str_1000fdd8
#undef str_1000fde8
#undef local_1098
#undef local_108c
#undef local_84
#undef acStack_1084

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc14
 */

void recovered_1000bc14(char *buffer,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  if ((buffer == (char *)0x0) || (capacity == 0 || text == (char *)0x0)) {
    return;
  }
  if (*buffer != '\0') {
    return;
  }
  puVar1 = (undefined8 *)recovered_10005c58((int)text);
  if (capacity <= puVar1) {
    puVar1 = (undefined8 *)(capacity - 1);
  }
  if (puVar1 != (undefined8 *)0x0) {
    recovered_10004bc8((undefined8 *)buffer,(undefined8 *)text,puVar1);
  }
  buffer[(int)puVar1] = '\0';
  return;
}


#undef str_1000fd51
#define str_1000fd51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_1000ff08
#define str_1000ff08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x378U)))
#define local_28 (*(char * *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc90
 */

uint recovered_1000bc90(char *script,char *output,uint capacity)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *first;
  char *last;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;

  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1c1U));
  if (script != (char *)0x0) {
    local_28 = output;
  }
  if (script == (char *)0x0 || iVar1 == 0) {
    return 0;
  }
  local_24 = 0;
LAB_1000bd04:
  pbVar5 = (byte *)script;
  if (*script == 0) {
    return local_24;
  }
  do {
    script = script + 1;
    iVar2 = 0;
    while (uVar3 = (uint)pbVar5[iVar2], uVar3 != 0) {
      uVar4 = (uint)(byte)str_1000fd51[iVar2];
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 != uVar4) break;
      iVar2 = iVar2 + 1;
      if (iVar1 == iVar2) goto LAB_1000bd84;
    }
    if (iVar1 == iVar2) break;
    pbVar5 = pbVar5 + 1;
    if (*pbVar5 == 0) {
      return local_24;
    }
  } while( true );
LAB_1000bd84:
  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x378U));
  pbVar6 = (byte *)0x0;
  if ((iVar1 != 0) && (*pbVar5 != 0)) {
    pbVar6 = pbVar5;
    do {
      iVar2 = 0;
      while (uVar3 = (uint)pbVar6[iVar2], uVar3 != 0) {
        uVar4 = (uint)(byte)str_1000ff08[iVar2];
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar3 != uVar4) break;
        iVar2 = iVar2 + 1;
        if (iVar1 == iVar2) goto LAB_1000be24;
      }
      if (iVar1 == iVar2) goto LAB_1000be24;
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 != 0);
    pbVar6 = (byte *)0x0;
  }
LAB_1000be24:
  first = pbVar5;
  while( true ) {
    if (*first == 0) {
      return local_24;
    }
    if (*first == 0x28) break;
    script = script + 1;
    first = first + 1;
  }
  while (((byte)*script - 9 < 0x18 && ((1 << ((byte)*script - 9 & 0xff) & 0x800013U) != 0))) {
    script = script + 1;
  }
  last = recovered_1000e488((char *)first);
  if (last != (char *)0x0) {
    uVar3 = recovered_1000f26c(local_28,capacity,script,last);
    if (uVar3 != 0) {
      local_24 = 1;
    }
    if (pbVar6 == pbVar5) {
      local_24 = 1;
    }
    if (pbVar6 == pbVar5 && (local_28 != (char *)0x0 && capacity != 0)) {
      iVar1 = recovered_10005c58((int)local_28);
      local_24 = 1;
      if (iVar1 + 1U < capacity) {
        local_28[iVar1 + 1U] = '\0';
        local_28[iVar1] = '\n';
      }
    }
    script = last + 1;
  }
  iVar1 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1c1U));
  if (iVar1 == 0) {
    return local_24;
  }
  goto LAB_1000bd04;
}

#undef str_1000fd51
#undef str_1000ff08
#undef local_28
#undef local_24

#undef DAT_1001401c
#define DAT_1001401c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x448cU)))
#undef str_1000ff1e
#define str_1000ff1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38eU)))
#undef str_1000ff29
#define str_1000ff29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_1000ff4c
#define str_1000ff4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bcU)))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf34
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000bf34(char *script,char *output,uint capacity)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r8;

  if (script == (char *)0x0) {
    local_24 = 0;
  }
  else {
    if (output != (char *)0x0) {
      unaff_r8 = capacity;
    }
    local_24 = 0;
    if (output != (char *)0x0 && capacity != 0) {
      iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x38eU));
      if (iVar3 != 0) {
        local_24 = 0;
        pcVar6 = script;
LAB_1000bfec:
        if (*pcVar6 != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)pcVar6[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff1e[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c054;
            }
            if (iVar3 == iVar7) goto LAB_1000c054;
            pcVar6 = pcVar6 + 1;
            if (*pcVar6 == '\0') break;
          } while( true );
        }
        goto LAB_1000c098;
      }
      local_24 = 0;
LAB_1000c098:
      iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x399U));
      if (iVar3 != 0) {
        pcVar6 = script;
LAB_1000c100:
        if (*pcVar6 != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)pcVar6[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff29[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c168;
            }
            if (iVar3 == iVar7) goto LAB_1000c168;
            pcVar6 = pcVar6 + 1;
            if (*pcVar6 == '\0') break;
          } while( true );
        }
      }
LAB_1000c198:
      iVar3 = 0;
      bVar2 = true;
      do {
        bVar1 = bVar2;
        iVar7 = (&DAT_1001401c)[iVar3];
        iVar3 = recovered_10005c58(iVar7);
        pcVar6 = script;
        if (iVar3 != 0) {
LAB_1000c210:
          if (*pcVar6 != '\0') {
            do {
              iVar8 = 0;
              while (uVar9 = (uint)(byte)pcVar6[iVar8], uVar9 != 0) {
                uVar11 = (uint)*(byte *)(iVar7 + iVar8);
                if (uVar11 - 0x41 < 0x1a) {
                  uVar11 = uVar11 | 0x20;
                }
                if (uVar9 - 0x41 < 0x1a) {
                  uVar9 = uVar9 | 0x20;
                }
                if (uVar9 != uVar11) break;
                iVar8 = iVar8 + 1;
                if (iVar3 == iVar8) goto LAB_1000c278;
              }
              if (iVar3 == iVar8) goto LAB_1000c278;
              pcVar6 = pcVar6 + 1;
              if (*pcVar6 == '\0') break;
            } while( true );
          }
        }
LAB_1000c1ac:
        iVar3 = 1;
        bVar2 = false;
      } while (bVar1);
      iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x3bcU));
      if (iVar3 != 0) {
LAB_1000c420:
        if (*script != '\0') {
          do {
            iVar7 = 0;
            while (uVar9 = (uint)(byte)script[iVar7], uVar9 != 0) {
              uVar11 = (uint)(byte)str_1000ff4c[iVar7];
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar9 - 0x41 < 0x1a) {
                uVar9 = uVar9 | 0x20;
              }
              if (uVar9 != uVar11) break;
              iVar7 = iVar7 + 1;
              if (iVar3 == iVar7) goto LAB_1000c488;
            }
            if (iVar3 == iVar7) goto LAB_1000c488;
            script = script + 1;
            if (*script == '\0') {
              return local_24;
            }
          } while( true );
        }
      }
    }
  }
  return local_24;
LAB_1000c054:
  pcVar4 = recovered_10006038(pcVar6,'=');
  if (pcVar4 == (char *)0x0) goto LAB_1000c098;
  pcVar4 = pcVar4 + 1;
  pcVar5 = recovered_1000f7cc(pcVar4);
  if (pcVar5 == (char *)0x0) {
    pcVar6 = pcVar4;
  }
  else {
    uVar9 = recovered_1000f26c(output,unaff_r8,pcVar4,pcVar5);
    if (uVar9 != 0) {
      local_24 = 1;
    }
    pcVar6 = pcVar5 + 1;
    if (*pcVar5 == '\0') {
      pcVar6 = pcVar4;
    }
  }
  iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x38eU));
  if (iVar3 == 0) goto LAB_1000c098;
  goto LAB_1000bfec;
LAB_1000c168:
  pcVar4 = recovered_10006038(pcVar6,'=');
  if (pcVar4 == (char *)0x0) goto LAB_1000c198;
  pcVar4 = pcVar4 + 1;
  pcVar5 = recovered_1000f7cc(pcVar4);
  if (pcVar5 == (char *)0x0) {
    pcVar6 = pcVar4;
  }
  else {
    uVar9 = recovered_1000f26c(output,unaff_r8,pcVar4,pcVar5);
    if (uVar9 != 0) {
      local_24 = 1;
    }
    pcVar6 = pcVar5 + 1;
    if (*pcVar5 == '\0') {
      pcVar6 = pcVar4;
    }
  }
  iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x399U));
  if (iVar3 == 0) goto LAB_1000c198;
  goto LAB_1000c100;
LAB_1000c278:
  pcVar6 = recovered_10006038(pcVar6,'=');
  if (pcVar6 == (char *)0x0) goto LAB_1000c1ac;
  pcVar6 = pcVar6 + 1;
  pcVar4 = recovered_1000f7cc(pcVar6);
  if (pcVar4 != (char *)0x0) {
    uVar9 = recovered_10005c58((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'p';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    if (uVar10 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar10] = '\0';
    }
    recovered_1000f918(output,unaff_r8,pcVar6,pcVar4);
    uVar9 = recovered_10005c58((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = '/';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'p';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar11] = '\0';
    }
    pcVar5 = pcVar4 + 1;
    if (*pcVar4 == '\0') {
      pcVar5 = pcVar6;
    }
    local_24 = 1;
    pcVar6 = pcVar5;
  }
  iVar3 = recovered_10005c58(iVar7);
  if (iVar3 == 0) goto LAB_1000c1ac;
  goto LAB_1000c210;
LAB_1000c488:
  pcVar6 = recovered_10006038(script,'=');
  if (pcVar6 == (char *)0x0) {
    return local_24;
  }
  script = pcVar6 + 1;
  pcVar6 = recovered_1000f7cc(script);
  if (pcVar6 != (char *)0x0) {
    uVar9 = recovered_10005c58((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'i';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar9 = uVar11;
      uVar11 = uVar11 + 1;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'l';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'e';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar11] = '\0';
    }
    recovered_1000f918(output,unaff_r8,script,pcVar6);
    uVar9 = recovered_10005c58((int)output);
    uVar10 = uVar9 + 1;
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar10] = '\0';
      output[uVar9] = '<';
      uVar11 = uVar9 + 2;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = '/';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'i';
      output[uVar11] = '\0';
      uVar9 = uVar11;
      uVar11 = uVar11 + 1;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 't';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    uVar11 = uVar10;
    if (uVar10 < unaff_r8) {
      output[uVar9] = 'l';
      output[uVar10] = '\0';
      uVar11 = uVar10 + 1;
      uVar9 = uVar10;
    }
    uVar10 = uVar11;
    if (uVar11 < unaff_r8) {
      output[uVar9] = 'e';
      output[uVar11] = '\0';
      uVar10 = uVar11 + 1;
      uVar9 = uVar11;
    }
    if (uVar10 < unaff_r8) {
      output[uVar9] = '>';
      output[uVar10] = '\0';
    }
    pcVar4 = pcVar6 + 1;
    if (*pcVar6 == '\0') {
      pcVar4 = script;
    }
    local_24 = 1;
    script = pcVar4;
  }
  iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x3bcU));
  if (iVar3 == 0) {
    return local_24;
  }
  goto LAB_1000c420;
}

#undef DAT_1001401c
#undef str_1000ff1e
#undef str_1000ff29
#undef str_1000ff4c
#undef local_24

#undef str_1000ff5b
#define str_1000ff5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c724
 */

uint recovered_1000c724(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *last;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x3cbU));
  uVar8 = 0;
  if (script == (char *)0x0) {
    return 0;
  }
LAB_1000c778:
  if (iVar2 == 0) {
    return uVar8;
  }
  if (*script == 0) {
    return uVar8;
  }
  do {
    iVar4 = 0;
    while (uVar6 = (uint)(byte)script[iVar4], uVar6 != 0) {
      uVar7 = (uint)(byte)str_1000ff5b[iVar4];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar6 != uVar7) break;
      iVar4 = iVar4 + 1;
      if (iVar2 == iVar4) goto LAB_1000c7e8;
    }
    if (iVar2 == iVar4) break;
    script = script + 1;
    if (*script == 0) {
      return uVar8;
    }
  } while( true );
LAB_1000c7e8:
  pbVar3 = (byte *)recovered_10006038(script,'(');
  if (pbVar3 == (byte *)0x0) {
    return uVar8;
  }
  last = (byte *)recovered_1000e488((char *)pbVar3);
  if (last == (byte *)0x0) {
    last = pbVar3;
  }
  else {
    pbVar3 = pbVar3 + 1;
LAB_1000c820:
    if (pbVar3 < last) {
      bVar1 = *pbVar3;
      if (bVar1 < 0x2c) {
        if (bVar1 == 0x22 || bVar1 == 0x27) goto LAB_1000c84c;
LAB_1000c81c:
        pbVar3 = pbVar3 + 1;
      }
      else {
        if (bVar1 != 0x60) {
          if (bVar1 != 0x2c) goto LAB_1000c81c;
          uVar6 = recovered_1000f26c(output,capacity,(char *)(pbVar3 + 1),(char *)last);
          if (uVar6 != 0) {
            uVar8 = 1;
          }
          goto LAB_1000c76c;
        }
LAB_1000c84c:
        pbVar3 = pbVar3 + 1;
        while (pbVar5 = pbVar3, pbVar3 < last) {
          while( true ) {
            pbVar3 = pbVar5 + 1;
            if ((*pbVar5 == 0x5c) && (pbVar3 < last)) break;
            if ((*pbVar5 == bVar1) || (pbVar5 = pbVar3, last <= pbVar3)) goto LAB_1000c820;
          }
          pbVar3 = pbVar5 + 2;
        }
      }
      goto LAB_1000c820;
    }
  }
LAB_1000c76c:
  script = (char *)(last + 1);
  iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x3cbU));
  goto LAB_1000c778;
}

#undef str_1000ff5b

#undef str_1000fd93
#define str_1000fd93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_1000fd9f
#define str_1000fd9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8c4
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000c8c4(char *script,char *output,uint capacity)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  uint extraout_r1 = 0;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  char *first;
  bool bVar14;

  uVar13 = 0;
  if ((script != (char *)0x0) && (*script != '\0')) {
    do {
      iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x203U));
      uVar7 = extraout_r1;
      if (iVar3 != 0) {
        uVar7 = (uint)(byte)*script;
      }
      pbVar12 = (byte *)0x0;
      if (iVar3 != 0 && uVar7 != 0) {
        pbVar12 = (byte *)script;
        do {
          iVar9 = 0;
          while (uVar7 = (uint)pbVar12[iVar9], uVar7 != 0) {
            uVar11 = (uint)(byte)str_1000fd93[iVar9];
            if (uVar11 - 0x41 < 0x1a) {
              uVar11 = uVar11 | 0x20;
            }
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 != uVar11) break;
            iVar9 = iVar9 + 1;
            if (iVar3 == iVar9) goto LAB_1000c960;
          }
          if (iVar3 == iVar9) goto LAB_1000c960;
          pbVar12 = pbVar12 + 1;
        } while (*pbVar12 != 0);
        pbVar12 = (byte *)0x0;
      }
LAB_1000c960:
      iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x20fU));
      pbVar8 = (byte *)0x0;
      if ((iVar3 == 0) || (*script == 0)) {
LAB_1000c9f8:
        if (pbVar12 != (byte *)0x0) goto LAB_1000ca00;
LAB_1000ca8c:
        if (pbVar8 == (byte *)0x0) {
          return uVar13;
        }
      }
      else {
        do {
          pbVar8 = (byte *)script;
          iVar9 = 0;
          while (uVar7 = (uint)pbVar8[iVar9], uVar7 != 0) {
            uVar11 = (uint)(byte)str_1000fd9f[iVar9];
            if (uVar11 - 0x41 < 0x1a) {
              uVar11 = uVar11 | 0x20;
            }
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 != uVar11) break;
            iVar9 = iVar9 + 1;
            if (iVar3 == iVar9) goto LAB_1000c9f8;
          }
          if (iVar3 == iVar9) goto joined_r0x1000ca88;
          script = (char *)(pbVar8 + 1);
        } while (pbVar8[1] != 0);
        pbVar8 = (byte *)0x0;
joined_r0x1000ca88:
        if (pbVar12 == (byte *)0x0) goto LAB_1000ca8c;
LAB_1000ca00:
        pbVar4 = pbVar12;
        if (pbVar8 < pbVar12) {
          pbVar4 = pbVar8;
        }
        bVar14 = pbVar8 == (byte *)0x0;
        pbVar8 = pbVar4;
        if (bVar14) {
          pbVar8 = pbVar12;
        }
      }
      pcVar5 = recovered_10006038((char *)pbVar8,'(');
      if (pcVar5 == (char *)0x0) {
        return uVar13;
      }
      pcVar6 = recovered_1000e488(pcVar5);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = pcVar5;
      }
      else {
        bVar14 = false;
LAB_1000cac4:
        do {
          first = pcVar5 + 1;
          if (pcVar6 <= first) break;
          bVar2 = true;
          iVar3 = 1;
          pcVar10 = first;
          do {
            cVar1 = *pcVar10;
            if (cVar1 == '\"' || cVar1 == '\'') {
              iVar9 = iVar3 + 1;
              do {
                while( true ) {
                  iVar3 = iVar9;
                  if (pcVar6 <= pcVar5 + iVar9) goto LAB_1000caec;
                  pcVar10 = pcVar5 + iVar9;
                  iVar3 = iVar9 + 1;
                  if ((*pcVar10 != '\\') || (pcVar6 <= pcVar5 + iVar3)) break;
                  iVar9 = iVar9 + 2;
                }
                iVar9 = iVar3;
              } while (*pcVar10 != cVar1);
            }
            else {
              if (cVar1 == ',') goto LAB_1000cb50;
              iVar3 = iVar3 + 1;
            }
LAB_1000caec:
            pcVar10 = pcVar5 + iVar3;
          } while (pcVar10 < pcVar6);
          bVar2 = false;
LAB_1000cb50:
          pcVar5 = pcVar10;
          if (iVar3 < 2) {
            if (!bVar2) break;
            goto LAB_1000cac4;
          }
          if (bVar14 && (output != (char *)0x0 && capacity != 0)) {
            iVar3 = recovered_10005c58((int)output);
            if (iVar3 + 1U < capacity) {
              output[iVar3 + 1U] = '\0';
              output[iVar3] = ' ';
            }
          }
          uVar7 = recovered_1000f26c(output,capacity,first,pcVar10);
          if (uVar7 != 0) {
            bVar14 = true;
          }
        } while (bVar2);
        if (bVar14) {
          uVar13 = 1;
        }
        if (bVar14 && (output != (char *)0x0 && capacity != 0)) {
          iVar3 = recovered_10005c58((int)output);
          uVar13 = 1;
          if (iVar3 + 1U < capacity) {
            output[iVar3 + 1U] = '\0';
            output[iVar3] = '\n';
          }
        }
      }
      script = pcVar6 + 1;
    } while (*script != 0);
  }
  return uVar13;
}

#undef str_1000fd93
#undef str_1000fd9f

#undef DAT_1000fd11
#define DAT_1000fd11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x181U)))
#undef str_1000fcc4
#define str_1000fcc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134U)))
#undef str_1000fcd4
#define str_1000fcd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_1000fcf5
#define str_1000fcf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x165U)))
#undef str_1000fd18
#define str_1000fd18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_1000fd47
#define str_1000fd47 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b7U)))
#undef str_1000fd51
#define str_1000fd51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_1000fd60
#define str_1000fd60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_1000fd6a
#define str_1000fd6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_1000fd76
#define str_1000fd76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e6U)))
#undef str_1000fd80
#define str_1000fd80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_1000fd93
#define str_1000fd93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#undef str_1000fd9f
#define str_1000fd9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cc54
 */

uint recovered_1000cc54(char *script,char *output,uint capacity,char *status,uint status_capacity,
                       uint flags)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint extraout_r1 = 0;
  uint extraout_r1_00 = 0;
  uint extraout_r1_01 = 0;
  uint extraout_r1_02 = 0;
  uint extraout_r1_03 = 0;
  uint extraout_r1_04 = 0;
  int iVar8;

  bVar1 = status != (char *)0x0 && status_capacity != 0;
  if (bVar1) {
    *status = '\0';
  }
  if (script == (char *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = 0;
    if ((flags & 1) != 0) {
      uVar2 = recovered_1000bc90(script,output,capacity);
      uVar3 = recovered_1000bf34(script,output,capacity);
      uVar4 = recovered_1000c724(script,output,capacity);
      local_24 = recovered_1000c8c4(script,output,capacity);
      local_24 = uVar3 | uVar2 | uVar4 | local_24;
    }
    iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x181U));
    uVar2 = extraout_r1;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)(&DAT_1000fd11)[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000cf64;
        }
        if (iVar5 == iVar8) {
LAB_1000cf64:
          local_24 = local_24 | 2;
          if ((bVar1) && (*status == '\0')) {
            puVar7 = (undefined8 *)recovered_10005c58(((uintptr_t)pf_module_state + 0x188U));
            if (status_capacity <= puVar7) {
              puVar7 = (undefined8 *)(status_capacity - 1);
            }
            if (puVar7 != (undefined8 *)0x0) {
              recovered_10004bc8((undefined8 *)status,(undefined8 *)str_1000fd18,puVar7);
            }
            status[(int)puVar7] = '\0';
          }
          break;
        }
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    if ((flags & 2) != 0) {
      iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x134U));
      uVar2 = extraout_r1_00;
      if (iVar5 != 0) {
        uVar2 = (uint)(byte)*script;
      }
      if (iVar5 != 0 && uVar2 != 0) {
        pcVar6 = script;
        do {
          iVar8 = 0;
          while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
            uVar3 = (uint)(byte)str_1000fcc4[iVar8];
            if (uVar3 - 0x41 < 0x1a) {
              uVar3 = uVar3 | 0x20;
            }
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != uVar3) break;
            iVar8 = iVar8 + 1;
            if (iVar5 == iVar8) goto LAB_1000d0f0;
          }
          if (iVar5 == iVar8) {
LAB_1000d0f0:
            local_24 = local_24 | 4;
            if ((bVar1) && (*status == '\0')) {
              puVar7 = (undefined8 *)recovered_10005c58(((uintptr_t)pf_module_state + 0x144U));
              if (status_capacity <= puVar7) {
                puVar7 = (undefined8 *)(status_capacity - 1);
              }
              if (puVar7 != (undefined8 *)0x0) {
                recovered_10004bc8((undefined8 *)status,(undefined8 *)str_1000fcd4,puVar7);
              }
              status[(int)puVar7] = '\0';
            }
            break;
          }
          pcVar6 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
      }
    }
    iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1b7U));
    uVar2 = extraout_r1_01;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd47[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ce98;
        }
        if (iVar5 == iVar8) goto LAB_1000ce98;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1c1U));
    uVar2 = extraout_r1_02;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd51[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ce98;
        }
        if (iVar5 == iVar8) goto LAB_1000ce98;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1d0U));
    uVar2 = extraout_r1_03;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd60[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ce98;
        }
        if (iVar5 == iVar8) goto LAB_1000ce98;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    iVar5 = recovered_10005c58(((uintptr_t)pf_module_state + 0x1daU));
    uVar2 = extraout_r1_04;
    if (iVar5 != 0) {
      uVar2 = (uint)(byte)*script;
    }
    if (iVar5 != 0 && uVar2 != 0) {
      pcVar6 = script;
      do {
        iVar8 = 0;
        while (uVar2 = (uint)(byte)pcVar6[iVar8], uVar2 != 0) {
          uVar3 = (uint)(byte)str_1000fd6a[iVar8];
          if (uVar3 - 0x41 < 0x1a) {
            uVar3 = uVar3 | 0x20;
          }
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          if (uVar2 != uVar3) break;
          iVar8 = iVar8 + 1;
          if (iVar5 == iVar8) goto LAB_1000ce98;
        }
        if (iVar5 == iVar8) goto LAB_1000ce98;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
    pcVar6 = recovered_1000d1ec(script,str_1000fd76);
    if ((((pcVar6 == (char *)0x0) &&
         (pcVar6 = recovered_1000d1ec(script,str_1000fd80), pcVar6 == (char *)0x0)) &&
        (pcVar6 = recovered_1000d1ec(script,str_1000fd93), pcVar6 == (char *)0x0)) &&
       (((pcVar6 = recovered_1000d1ec(script,str_1000fd9f), pcVar6 == (char *)0x0 &&
         (pcVar6 = recovered_1000d1ec(script,&DAT_1000fd11), pcVar6 == (char *)0x0)) &&
        ((pcVar6 = recovered_1000d1ec(script,str_1000fcc4), pcVar6 == (char *)0x0 &&
         (*script != '\0')))))) {
      recovered_1000bc14(status,status_capacity,str_1000fcf5);
      local_24 = local_24 | 8;
    }
  }
LAB_1000ce98:
  return local_24;
}

#undef DAT_1000fd11
#undef str_1000fcc4
#undef str_1000fcd4
#undef str_1000fcf5
#undef str_1000fd18
#undef str_1000fd47
#undef str_1000fd51
#undef str_1000fd60
#undef str_1000fd6a
#undef str_1000fd76
#undef str_1000fd80
#undef str_1000fd93
#undef str_1000fd9f
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d1ec
 */

char * recovered_1000d1ec(char *text,char *pattern)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if ((pattern != (char *)0x0) &&
     (iVar2 = recovered_10005c58((int)pattern), text != (char *)0x0 && iVar2 != 0)) {
    cVar1 = *text;
    while (cVar1 != '\0') {
      iVar3 = 0;
      while (uVar4 = (uint)(byte)text[iVar3], uVar4 != 0) {
        uVar5 = (uint)(byte)pattern[iVar3];
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar4 - 0x41 < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        if (uVar4 != uVar5) break;
        iVar3 = iVar3 + 1;
        if (iVar2 == iVar3) {
          return text;
        }
      }
      if (iVar2 == iVar3) {
        return text;
      }
      text = text + 1;
      cVar1 = *text;
    }
  }
  return (char *)0x0;
}


#undef DAT_1000fbb8
#define DAT_1000fbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef str_1000fe4d
#define str_1000fe4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#undef str_1000fe60
#define str_1000fe60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d0U)))
#undef str_1000fe6a
#define str_1000fe6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_1000fe82
#define str_1000fe82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f2U)))
#undef str_1000fe97
#define str_1000fe97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x307U)))
#undef str_1000fe9e
#define str_1000fe9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_1000feb5
#define str_1000feb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1000fec0
#define str_1000fec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#define local_224 (*(char (*)[516])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d29c
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000d29c(char *output,uint capacity,char *first,char *last,char *url,char *html)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  uint extraout_r1 = 0;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  uint extraout_r2 = 0;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;

  if ((first != (char *)0x0) && (first < last)) {
    pcVar4 = &DAT_1000fbb8;
    if (html != (char *)0x0) {
      pcVar4 = html;
    }
    do {
      bVar1 = *first;
      switch((uintptr_t)(bVar1)) {
      case 9:
      case 10:
      case 0xd:
      case 0x20:
      case 0x2b:
        first = first + 1;
        goto joined_r0x1000d9e0;
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
      case 0x28:
      case 0x29:
      case 0x2a:
        goto switchD_1000d314_caseD_b;
      case 0x22:
      case 0x27:
        pbVar7 = (byte *)(first + 1);
        iVar12 = 0;
        pbVar5 = pbVar7;
        if (pbVar7 < last) {
          do {
            pbVar10 = pbVar5 + 1;
            if ((*pbVar5 == 0x5c) && (pbVar10 < last)) {
              pbVar10 = pbVar5 + 2;
            }
            else if (*pbVar5 == bVar1) {
              iVar12 = 1;
              break;
            }
            pbVar5 = pbVar10;
          } while (pbVar10 < last);
        }
        recovered_1000df0c(output,capacity,(char *)pbVar7,(char *)pbVar5);
        first = (char *)(pbVar5 + iVar12);
LAB_1000d9cc:
        goto LAB_1000d9d0;
      }
      if (bVar1 == 0x60) {
LAB_1000d40c:
        pbVar7 = (byte *)(first + 1);
        iVar12 = 0;
        pbVar5 = pbVar7;
        if (pbVar7 < last) {
          do {
            pbVar10 = pbVar5 + 1;
            bVar1 = *pbVar5;
            if ((bVar1 == 0x5c) && (pbVar10 < last)) {
              pbVar10 = pbVar5 + 2;
            }
            else if (bVar1 == 0x24) {
              if ((pbVar10 < last) && (*pbVar10 == 0x7b)) goto code_r0x1000d478;
            }
            else if (bVar1 == 0x60) {
              iVar12 = 1;
              break;
            }
            pbVar5 = pbVar10;
            if (last <= pbVar10) break;
          } while( true );
        }
        recovered_1000df0c(output,capacity,(char *)pbVar7,(char *)pbVar5);
        first = (char *)(pbVar5 + iVar12);
        goto LAB_1000d9cc;
      }
switchD_1000d314_caseD_b:
      iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2bdU));
      pbVar5 = (byte *)0x0;
      if ((iVar12 != 0) && (*first != 0)) {
        pbVar5 = (byte *)first;
        do {
          iVar8 = 0;
          while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
            uVar16 = (uint)(byte)str_1000fe4d[iVar8];
            if (uVar16 - 0x41 < 0x1a) {
              uVar16 = uVar16 | 0x20;
            }
            if (uVar2 - 0x41 < 0x1a) {
              uVar2 = uVar2 | 0x20;
            }
            if (uVar2 != uVar16) break;
            iVar8 = iVar8 + 1;
            if (iVar12 == iVar8) goto LAB_1000d64c;
          }
          if (iVar12 == iVar8) goto LAB_1000d64c;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar5 != 0);
        pbVar5 = (byte *)0x0;
      }
LAB_1000d64c:
      if ((byte *)first == pbVar5) {
LAB_1000d790:
        pcVar3 = recovered_10006038(first,'(');
        if (pcVar3 == (char *)0x0) {
          return 8;
        }
        pcVar9 = recovered_1000e488(pcVar3);
        if (pcVar9 == (char *)0x0) {
          return 8;
        }
        if (last < pcVar9) {
          return 8;
        }
        uVar2 = recovered_1000e5bc(output,capacity,pcVar3 + 1,pcVar9,url,html,1);
        if ((uVar2 & 8) != 0) {
          return uVar2;
        }
        first = pcVar9 + 1;
      }
      else {
        iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2d0U));
        pbVar5 = (byte *)0x0;
        if ((iVar12 != 0) && (*first != 0)) {
          pbVar5 = (byte *)first;
          do {
            iVar8 = 0;
            while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
              uVar16 = (uint)(byte)str_1000fe60[iVar8];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar16) break;
              iVar8 = iVar8 + 1;
              if (iVar12 == iVar8) goto LAB_1000d6e4;
            }
            if (iVar12 == iVar8) goto LAB_1000d6e4;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar5 != 0);
          pbVar5 = (byte *)0x0;
        }
LAB_1000d6e4:
        if ((byte *)first == pbVar5) goto LAB_1000d790;
        iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2daU));
        pbVar5 = (byte *)0x0;
        if ((iVar12 != 0) && (*first != 0)) {
          pbVar5 = (byte *)first;
          do {
            iVar8 = 0;
            while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
              uVar16 = (uint)(byte)str_1000fe6a[iVar8];
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar16) break;
              iVar8 = iVar8 + 1;
              if (iVar12 == iVar8) goto LAB_1000d83c;
            }
            if (iVar12 == iVar8) goto LAB_1000d83c;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar5 != 0);
          pbVar5 = (byte *)0x0;
        }
LAB_1000d83c:
        if ((byte *)first == pbVar5) {
          pcVar3 = recovered_10006038(first,'(');
          if (pcVar3 == (char *)0x0) {
            return 8;
          }
          pcVar3 = recovered_1000e488(pcVar3);
          if (pcVar3 == (char *)0x0) {
            return 8;
          }
          if (last < pcVar3) {
            return 8;
          }
          iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2f2U));
          pbVar5 = (byte *)0x0;
          if ((iVar12 != 0) && (*first != 0)) {
            pbVar5 = (byte *)first;
            do {
              iVar8 = 0;
              while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)str_1000fe82[iVar8];
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar16) break;
                iVar8 = iVar8 + 1;
                if (iVar12 == iVar8) goto LAB_1000dbc4;
              }
              if (iVar12 == iVar8) goto LAB_1000dbc4;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
          }
LAB_1000dbc4:
          pbVar7 = (byte *)(pcVar3 + 1);
          if ((byte *)first != pbVar5) {
            iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2f2U));
            uVar2 = extraout_r1;
            if (iVar12 != 0) {
              uVar2 = (uint)*pbVar7;
            }
            if (iVar12 != 0 && uVar2 != 0) {
              iVar8 = 1;
LAB_1000dda4:
              pcVar15 = str_1000fe82;
              pcVar9 = pcVar3;
              iVar11 = iVar12;
              while (uVar2 = (uint)(byte)pcVar9[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)*pcVar15;
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 != uVar16) break;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) goto LAB_1000de18;
              }
              if (iVar11 != 0) goto code_r0x1000de04;
LAB_1000de18:
              if (iVar8 == 1) {
                local_224[0] = '\0';
                uVar2 = recovered_10005c58((int)local_224);
                cVar6 = *pcVar4;
                if (cVar6 != '\0') {
                  pcVar3 = pcVar4;
                  do {
                    pcVar3 = pcVar3 + 1;
                    uVar16 = uVar2 + 1;
                    if (uVar16 >> 9 == 0) {
                      local_224[uVar16] = '\0';
                      if ((byte)(cVar6 + 0x9fU) < 0x1a) {
                        cVar6 = cVar6 + -0x20;
                      }
                      local_224[uVar2] = cVar6;
                      uVar2 = uVar16;
                    }
                    cVar6 = *pcVar3;
                  } while (cVar6 != '\0');
                }
                uVar2 = recovered_1000e5bc(output,capacity,first,last,url,local_224,0);
                iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2f2U));
                pbVar7 = pbVar7 + iVar12;
                goto LAB_1000dd18;
              }
            }
          }
LAB_1000dbf8:
          uVar2 = recovered_1000e5bc(output,capacity,first,last,url,html,0);
          iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x307U));
          if ((iVar12 != 0) && (*pbVar7 != 0)) {
            iVar8 = 1;
            do {
              pcVar15 = str_1000fe97;
              pcVar9 = pcVar3;
              iVar11 = iVar12;
              while (uVar16 = (uint)(byte)pcVar9[iVar8], uVar16 != 0) {
                uVar14 = (uint)(byte)*pcVar15;
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar14 - 0x41 < 0x1a) {
                  uVar14 = uVar14 | 0x20;
                }
                if (uVar16 != uVar14) break;
                pcVar9 = pcVar9 + 1;
                pcVar15 = pcVar15 + 1;
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) goto LAB_1000dce8;
              }
              if (iVar11 == 0) {
LAB_1000dce8:
                if (iVar8 == 1) {
                  iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x307U));
                  pbVar7 = pbVar7 + iVar12;
                }
                break;
              }
              iVar8 = iVar8 + 1;
            } while (pcVar3[iVar8] != '\0');
          }
LAB_1000dd18:
          first = (char *)pbVar7;
          if ((uVar2 & 8) != 0) {
            return uVar2;
          }
        }
        else {
          iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x30eU));
          pbVar5 = (byte *)0x0;
          if ((iVar12 != 0) && (*first != 0)) {
            pbVar5 = (byte *)first;
            do {
              iVar8 = 0;
              while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                uVar16 = (uint)(byte)str_1000fe9e[iVar8];
                if (uVar16 - 0x41 < 0x1a) {
                  uVar16 = uVar16 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar16) break;
                iVar8 = iVar8 + 1;
                if (iVar12 == iVar8) goto LAB_1000d9f4;
              }
              if (iVar12 == iVar8) goto LAB_1000d9f4;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
          }
LAB_1000d9f4:
          if ((byte *)first == pbVar5) {
LAB_1000db3c:
            uVar2 = recovered_1000e5bc(output,capacity,first,last,url,html,0);
            if ((uVar2 & 8) != 0) {
              return uVar2;
            }
            if (last <= first) goto LAB_1000d9d0;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((1 << ((byte)*first - 0x2b & 0xff) & 0x10003U) != 0)) goto LAB_1000d9d0;
              first = first + 1;
            } while (first < last);
          }
          else {
            iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x325U));
            pbVar5 = (byte *)0x0;
            if ((iVar12 != 0) && (*first != 0)) {
              pbVar5 = (byte *)first;
              do {
                iVar8 = 0;
                while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                  uVar16 = (uint)(byte)str_1000feb5[iVar8];
                  if (uVar16 - 0x41 < 0x1a) {
                    uVar16 = uVar16 | 0x20;
                  }
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != uVar16) break;
                  iVar8 = iVar8 + 1;
                  if (iVar12 == iVar8) goto LAB_1000da88;
                }
                if (iVar12 == iVar8) goto LAB_1000da88;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar5 != 0);
              pbVar5 = (byte *)0x0;
            }
LAB_1000da88:
            if ((byte *)first == pbVar5) goto LAB_1000db3c;
            iVar12 = recovered_10005c58(((uintptr_t)pf_module_state + 0x330U));
            pbVar5 = (byte *)0x0;
            uVar2 = extraout_r2;
            if (iVar12 != 0) {
              uVar2 = (uint)(byte)*first;
            }
            if (iVar12 != 0 && uVar2 != 0) {
              pbVar5 = (byte *)first;
              do {
                iVar8 = 0;
                while (uVar2 = (uint)pbVar5[iVar8], uVar2 != 0) {
                  uVar16 = (uint)(byte)str_1000fec0[iVar8];
                  if (uVar16 - 0x41 < 0x1a) {
                    uVar16 = uVar16 | 0x20;
                  }
                  if (uVar2 - 0x41 < 0x1a) {
                    uVar2 = uVar2 | 0x20;
                  }
                  if (uVar2 != uVar16) break;
                  iVar8 = iVar8 + 1;
                  if (iVar12 == iVar8) goto LAB_1000dab4;
                }
                if (iVar12 == iVar8) goto LAB_1000dab4;
                pbVar5 = pbVar5 + 1;
              } while (*pbVar5 != 0);
              pbVar5 = (byte *)0x0;
            }
LAB_1000dab4:
            if ((byte *)first == pbVar5) goto LAB_1000db3c;
            uVar2 = recovered_1000ed00(output,capacity,first,last,url,html,0);
            if ((uVar2 & 8) != 0) {
              return 8;
            }
            if (last <= first) goto LAB_1000d9d0;
            do {
              if (((byte)*first - 0x2b < 0x11) &&
                 ((1 << ((byte)*first - 0x2b & 0xff) & 0x10003U) != 0)) goto LAB_1000d9d0;
              first = first + 1;
            } while (first < last);
          }
          first = last;
        }
      }
LAB_1000d9d0:
      if ((byte *)first == (byte *)0x0) {
        return 0x10;
      }
joined_r0x1000d9e0:
    } while (first < last);
  }
  return 0x10;
code_r0x1000d478:
  pbVar10 = pbVar5 + 2;
  if (last <= pbVar10) {
    return 8;
  }
  iVar12 = 1;
  first = (char *)pbVar10;
LAB_1000d4a4:
  bVar1 = *first;
  if (bVar1 < 0x60) {
    if (!(bVar1 != 0x22 && bVar1 != 0x27)) goto LAB_1000d4c8;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000d4c8:
      first = first + 1;
      while (pbVar13 = (byte *)first, first < last) {
        while( true ) {
          first = (char *)(pbVar13 + 1);
          if ((*pbVar13 == 0x5c) && (first < last)) break;
          if ((*pbVar13 == bVar1) || (pbVar13 = (byte *)first, last <= first)) goto LAB_1000d49c;
        }
        first = (char *)(pbVar13 + 2);
      }
      goto LAB_1000d49c;
    }
    if (bVar1 != 0x7b) {
      bVar17 = false;
      if (bVar1 == 0x7d) {
        iVar12 = iVar12 + -1;
        bVar17 = iVar12 == 0;
      }
      if (!bVar17) goto LAB_1000d498;
      recovered_1000df0c(output,capacity,(char *)pbVar7,(char *)pbVar5);
      uVar2 = recovered_1000d29c(output,capacity,(char *)pbVar10,first,url,html);
      if ((uVar2 & 8) != 0) {
        return uVar2;
      }
      goto LAB_1000d40c;
    }
    iVar12 = iVar12 + 1;
  }
LAB_1000d498:
  first = first + 1;
LAB_1000d49c:
  if (last <= first) {
    return 8;
  }
  goto LAB_1000d4a4;
code_r0x1000de04:
  iVar8 = iVar8 + 1;
  if (pcVar3[iVar8] == '\0') goto LAB_1000dbf8;
  goto LAB_1000dda4;
}

#undef DAT_1000fbb8
#undef str_1000fe4d
#undef str_1000fe60
#undef str_1000fe6a
#undef str_1000fe82
#undef str_1000fe97
#undef str_1000fe9e
#undef str_1000feb5
#undef str_1000fec0
#undef local_224

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df0c
 */

uint recovered_1000df0c(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;

  uVar8 = 0;
  if (output != (char *)0x0) {
    unaff_r8 = capacity;
  }
  if (((output != (char *)0x0 && capacity != 0) && (first <= last)) &&
     (first != (char *)0x0 && last != (char *)0x0)) {
    uVar1 = recovered_10005c58((int)output);
    while (first < last) {
      if ((*first == '\\') && (pcVar10 = first + 1, pcVar10 < last)) {
        switch((uintptr_t)(*pcVar10)) {
        case '\"':
          uVar7 = uVar1 + 1;
          uVar8 = 1;
          if (uVar7 < unaff_r8) {
            output[uVar1] = '\"';
            output[uVar7] = '\0';
            uVar1 = uVar7;
          }
          break;
        default:
          uVar7 = uVar1 + 1;
          uVar8 = 1;
          if (uVar7 < unaff_r8) {
            output[uVar1] = *pcVar10;
            output[uVar7] = '\0';
            uVar1 = uVar7;
          }
          break;
        case '\'':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = '\'';
LAB_1000e474:
            uVar8 = 1;
            output[uVar1] = cVar2;
            uVar1 = uVar1 + 1;
          }
          break;
        case '\\':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = '\\';
            goto LAB_1000e474;
          }
          break;
        case 'b':
        case 'f':
        case 'v':
          uVar8 = 1;
          break;
        case 'n':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            cVar2 = '\n';
            output[uVar1 + 1] = '\0';
            goto LAB_1000e474;
          }
          break;
        case 'r':
          break;
        case 't':
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = ' ';
            goto LAB_1000e474;
          }
          break;
        case 'u':
          pcVar6 = first + 5;
          if (pcVar6 < last) {
            cVar2 = first[2];
            iVar3 = (int)cVar2;
            uVar7 = iVar3 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar7 = iVar3 - 0x57;
              }
              else {
                if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e458;
                uVar7 = iVar3 - 0x37;
              }
            }
            if (-1 < (int)uVar7) {
              cVar2 = first[3];
              iVar3 = (int)cVar2;
              uVar4 = iVar3 - 0x30;
              if (9 < (uVar4 & 0xff)) {
                if ((byte)(cVar2 + 0x9fU) < 6) {
                  uVar4 = iVar3 - 0x57;
                }
                else {
                  if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e458;
                  uVar4 = iVar3 - 0x37;
                }
              }
              if (-1 < (int)uVar4) {
                cVar2 = first[4];
                iVar3 = (int)cVar2;
                uVar9 = iVar3 - 0x30;
                if (9 < (uVar9 & 0xff)) {
                  if ((byte)(cVar2 + 0x9fU) < 6) {
                    uVar9 = iVar3 - 0x57;
                  }
                  else {
                    if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e458;
                    uVar9 = iVar3 - 0x37;
                  }
                }
                if (-1 < (int)uVar9) {
                  cVar2 = *pcVar6;
                  iVar3 = (int)cVar2;
                  uVar5 = iVar3 - 0x30;
                  if (9 < (uVar5 & 0xff)) {
                    if ((byte)(cVar2 + 0x9fU) < 6) {
                      uVar5 = iVar3 - 0x57;
                    }
                    else {
                      if (5 < (byte)(cVar2 + 0xbfU)) goto LAB_1000e458;
                      uVar5 = iVar3 - 0x37;
                    }
                  }
                  if (-1 < (int)uVar5) {
                    uVar11 = uVar1 + 1;
                    uVar8 = 1;
                    if (uVar11 < unaff_r8) {
                      output[uVar11] = '\0';
                      uVar5 = uVar5 | (uVar9 | uVar7 << 8 | uVar4 << 4) << 4;
                      if (0x5e < uVar5 - 0x20) {
                        uVar5 = 0x20;
                      }
                      output[uVar1] = (char)uVar5;
                      uVar1 = uVar11;
                    }
                    pcVar10 = pcVar6;
                    break;
                  }
                }
              }
            }
          }
LAB_1000e458:
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            cVar2 = 'u';
            output[uVar1 + 1] = '\0';
            goto LAB_1000e474;
          }
          break;
        case 'x':
          pcVar6 = first + 3;
          if (pcVar6 < last) {
            cVar2 = first[2];
            iVar3 = (int)cVar2;
            uVar7 = iVar3 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar7 = iVar3 - 0x57;
              }
              else {
                uVar7 = 0xffffffff;
                if ((byte)(cVar2 + 0xbfU) < 6) {
                  uVar7 = iVar3 - 0x37;
                }
              }
            }
            cVar2 = *pcVar6;
            iVar3 = (int)cVar2;
            uVar4 = iVar3 - 0x30;
            if (9 < (uVar4 & 0xff)) {
              if ((byte)(cVar2 + 0x9fU) < 6) {
                uVar4 = iVar3 - 0x57;
              }
              else {
                uVar4 = 0xffffffff;
                if ((byte)(cVar2 + 0xbfU) < 6) {
                  uVar4 = iVar3 - 0x37;
                }
              }
            }
            if (-1 < (int)uVar7 && -1 < (int)uVar4) {
              uVar9 = uVar1 + 1;
              uVar8 = 1;
              pcVar10 = pcVar6;
              if (uVar9 < unaff_r8) {
                output[uVar1] = (byte)uVar4 | (byte)(uVar7 << 4);
                output[uVar9] = '\0';
                uVar1 = uVar9;
              }
              else {
              }
              break;
            }
          }
          uVar8 = 1;
          if (uVar1 + 1 < unaff_r8) {
            output[uVar1 + 1] = '\0';
            cVar2 = 'x';
            goto LAB_1000e474;
          }
        }
      }
      else {
        uVar7 = uVar1 + 1;
        uVar8 = 1;
        if (uVar7 < unaff_r8) {
          output[uVar1] = *first;
          output[uVar7] = '\0';
          uVar1 = uVar7;
        }
        pcVar10 = first;
      }
      first = pcVar10 + 1;
    }
  }
  return uVar8;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e488
 */

char * recovered_1000e488(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;

  if ((first == (char *)0x0) || (*first != '(')) {
switchD_1000e4c0_caseD_0:
    return (char *)0x0;
  }
  iVar3 = 1;
  do {
    first = first + 1;
LAB_1000e4ac:
    cVar1 = *first;
    switch((uintptr_t)(cVar1)) {
    case '\0':
      goto switchD_1000e4c0_caseD_0;
    case '\"':
    case '\'':
      first = first + 1;
LAB_1000e584:
      do {
        cVar2 = *first;
        if (cVar2 == '\\') {
          if (first[1] != '\0') {
            first = first + 2;
            goto LAB_1000e584;
          }
        }
        else if (cVar2 == '\0') break;
        first = first + 1;
      } while (cVar2 != cVar1);
      goto LAB_1000e4ac;
    case '(':
      iVar3 = iVar3 + 1;
      break;
    case ')':
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return first;
      }
    }
  } while( true );
}


#undef DAT_1000fbb8
#define DAT_1000fbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef str_1000fe6a
#define str_1000fe6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2daU)))
#undef str_1000fe9e
#define str_1000fe9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_1000feb5
#define str_1000feb5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1000fec0
#define str_1000fec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x330U)))
#undef str_1000fed3
#define str_1000fed3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x343U)))
#define local_e4 (*(byte (*)[96])(frame + 28))
#define local_84 (*(byte (*)[100])(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5bc
 */

uint recovered_1000e5bc(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint extraout_r0 = 0;
  char *pcVar3;
  char *extraout_r1 = 0;
  char *pcVar4;
  byte *pbVar5;
  uint extraout_r2 = 0;
  uint uVar6;
  uint extraout_r2_00 = 0;
  uint extraout_r2_01 = 0;
  uint extraout_r2_02 = 0;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;

  if (first == (char *)0x0) {
    return 8;
  }
  if (last <= first) {
    return 8;
  }
  iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x2daU));
  pcVar3 = (char *)0x0;
  uVar6 = extraout_r2;
  if (iVar2 != 0) {
    uVar6 = (uint)(byte)*first;
  }
  if (iVar2 != 0 && uVar6 != 0) {
    pcVar3 = first;
    do {
      iVar7 = 0;
      while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
        uVar12 = (uint)(byte)str_1000fe6a[iVar7];
        if (uVar12 - 0x41 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != uVar12) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000e618;
      }
      if (iVar2 == iVar7) goto LAB_1000e618;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
  }
LAB_1000e618:
  if (pcVar3 != first) {
    iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x30eU));
    pcVar3 = (char *)0x0;
    uVar6 = extraout_r2_00;
    if (iVar2 != 0) {
      uVar6 = (uint)(byte)*first;
    }
    if (iVar2 != 0 && uVar6 != 0) {
      pcVar3 = first;
      do {
        iVar7 = 0;
        while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
          uVar12 = (uint)(byte)str_1000fe9e[iVar7];
          if (uVar12 - 0x41 < 0x1a) {
            uVar12 = uVar12 | 0x20;
          }
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != uVar12) break;
          iVar7 = iVar7 + 1;
          if (iVar2 == iVar7) goto LAB_1000e648;
        }
        if (iVar2 == iVar7) goto LAB_1000e648;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
    }
LAB_1000e648:
    if (pcVar3 != first) {
      uVar6 = recovered_1000ed00(output,capacity,first,last,url,html,depth);
      if ((uVar6 & 8) == 0) {
        return uVar6;
      }
      iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x325U));
      pcVar3 = (char *)0x0;
      uVar6 = extraout_r2_01;
      if (iVar2 != 0) {
        uVar6 = (uint)(byte)*first;
      }
      if (iVar2 != 0 && uVar6 != 0) {
        pcVar3 = first;
        do {
          iVar7 = 0;
          while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
            uVar12 = (uint)(byte)str_1000feb5[iVar7];
            if (uVar12 - 0x41 < 0x1a) {
              uVar12 = uVar12 | 0x20;
            }
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != uVar12) break;
            iVar7 = iVar7 + 1;
            if (iVar2 == iVar7) goto LAB_1000e6b0;
          }
          if (iVar2 == iVar7) goto LAB_1000e6b0;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = (char *)0x0;
      }
LAB_1000e6b0:
      if (pcVar3 != first) {
        iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x330U));
        pcVar3 = (char *)0x0;
        uVar6 = extraout_r2_02;
        if (iVar2 != 0) {
          uVar6 = (uint)(byte)*first;
        }
        if (iVar2 != 0 && uVar6 != 0) {
          pcVar3 = first;
          do {
            iVar7 = 0;
            while (uVar6 = (uint)(byte)pcVar3[iVar7], uVar6 != 0) {
              uVar12 = (uint)(byte)str_1000fec0[iVar7];
              if (uVar12 - 0x41 < 0x1a) {
                uVar12 = uVar12 | 0x20;
              }
              if (uVar6 - 0x41 < 0x1a) {
                uVar6 = uVar6 | 0x20;
              }
              if (uVar6 != uVar12) break;
              iVar7 = iVar7 + 1;
              if (iVar2 == iVar7) goto LAB_1000e6e0;
            }
            if (iVar2 == iVar7) goto LAB_1000e6e0;
            pcVar3 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          pcVar3 = (char *)0x0;
        }
LAB_1000e6e0:
        if (pcVar3 != first) {
          return 8;
        }
      }
      pcVar3 = &DAT_1000fbb8;
      if (html != (char *)0x0) {
        pcVar3 = html;
      }
      if (depth == 0) {
        if (output == (char *)0x0) {
          return 0x10;
        }
        uVar6 = recovered_10005c58((int)output);
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          if (capacity != 0) {
            uVar12 = uVar6 + 1;
            if (uVar12 < capacity) {
              output[uVar6] = cVar1;
              output[uVar12] = '\0';
              uVar6 = uVar12;
            }
          }
          cVar1 = *pcVar3;
        }
        return 0x10;
      }
      goto LAB_1000e718;
    }
  }
  pcVar3 = recovered_10006038(first,'(');
  if (pcVar3 == (char *)0x0) {
    return 8;
  }
  pcVar4 = extraout_r1;
  if (pcVar3 < last) {
    pcVar4 = pcVar3 + 1;
  }
  if (pcVar3 >= last || last <= pcVar4) {
    return 8;
  }
  pbVar9 = (byte *)0x0;
  while( true ) {
    uVar6 = (byte)pcVar3[(int)(pbVar9 + 1)] - 9;
    if (0x1e < uVar6) {
      return 8;
    }
    if ((1 << (uVar6 & 0xff) & 0x800013U) == 0) break;
    pbVar10 = pbVar9 + 2;
    pbVar9 = pbVar9 + 1;
    if (pcVar3 + (int)pbVar10 == last) {
      return 8;
    }
  }
  if ((1 << (uVar6 & 0xff) & 0x42000000U) == 0) {
    return 8;
  }
  pbVar5 = (byte *)(pcVar3 + (int)(pbVar9 + 2));
  pbVar10 = pbVar5;
  if (pbVar5 < last) {
    do {
      if ((uint)*pbVar10 == (uint)(byte)pcVar3[(int)(pbVar9 + 1)]) goto LAB_1000e8a4;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < last);
    pbVar10 = (byte *)last;
  }
LAB_1000e8a4:
  uVar6 = 0;
  if (pbVar10 + (-2 - (int)pcVar3) == pbVar9) {
    pbVar10 = (byte *)0x0;
  }
  else if (*pbVar5 == 0x23) {
    pbVar5 = (byte *)(pcVar3 + (int)(pbVar9 + 3));
    pbVar10 = pbVar10 + (-(int)pbVar9 - (int)pcVar3) + -3;
  }
  else {
    pbVar10 = pbVar10 + (-2 - (int)pcVar3) + -(int)pbVar9;
  }
  if ((byte *)0x5e < pbVar10) {
    pbVar10 = (byte *)0x5f;
  }
  recovered_10004bc8((undefined8 *)local_e4,(undefined8 *)pbVar5,(undefined8 *)pbVar10);
  local_e4[(int)pbVar10] = 0;
  uVar12 = extraout_r0;
  if (url != (char *)0x0) {
    uVar12 = (uint)(byte)*url;
  }
  if (url == (char *)0x0 || uVar12 == 0) {
    return 8;
  }
  pbVar9 = local_e4;
  iVar2 = recovered_10005c80(pbVar9,(byte *)url);
  if (iVar2 != 0) {
    iVar2 = recovered_10005c58(((uintptr_t)pf_module_state + 0x343U));
    if (iVar2 == 0) {
      return 8;
    }
    do {
      if (local_e4[0] == 0) {
        return 8;
      }
      iVar7 = 0;
      while (uVar12 = (uint)pbVar9[iVar7], uVar12 != 0) {
        uVar8 = (uint)(byte)str_1000fed3[iVar7];
        uVar6 = uVar12 - 0x41;
        if (uVar8 - 0x41 < 0x1a) {
          uVar8 = uVar8 | 0x20;
        }
        if (uVar6 < 0x1a) {
          uVar12 = uVar12 | 0x20;
        }
        if (uVar12 != uVar8) break;
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_1000eae4;
      }
      if (iVar2 == iVar7) {
LAB_1000eae4:
        pbVar9 = pbVar9 + 5;
        goto LAB_1000eae8;
      }
      pbVar9 = pbVar9 + 1;
      local_e4[0] = *pbVar9;
    } while( true );
  }
  goto LAB_1000ec2c;
LAB_1000eae8:
  do {
    uVar12 = (uint)*pbVar9;
    switch((uintptr_t)(uVar12)) {
    case 9:
    case 0x20:
      pbVar9 = pbVar9 + 1;
      break;
    default:
      goto switchD_1000eb00_caseD_a;
    case 0x22:
    case 0x27:
      pbVar9 = pbVar9 + 1;
      uVar8 = (uint)*pbVar9;
      goto LAB_1000eb98;
    }
  } while( true );
switchD_1000eb00_caseD_a:
  uVar8 = uVar12;
  uVar12 = 0;
LAB_1000eb98:
  if (uVar8 != 0) {
    uVar6 = (uint)(char)uVar8;
  }
  uVar11 = 0;
  if (uVar8 != 0 && uVar12 != uVar6) {
    uVar11 = 0;
    while ((uVar12 != 0 || ((uVar8 != 9 && (uVar8 != 0x20 && uVar8 != 0x5d))))) {
      local_84[uVar11] = (byte)uVar8;
      iVar2 = uVar11 + 1;
      uVar11 = uVar11 + 1;
      uVar8 = (uint)pbVar9[iVar2];
      if ((uVar8 == 0) || ((0x5e < uVar11 || (uVar12 == (int)(char)pbVar9[iVar2])))) break;
    }
  }
  local_84[uVar11] = 0;
  iVar2 = recovered_10005c80(local_84,(byte *)url);
  if (iVar2 != 0) {
    return 8;
  }
LAB_1000ec2c:
  pcVar3 = &DAT_1000fbb8;
  if (html != (char *)0x0) {
    pcVar3 = html;
  }
  if (depth == 0) {
    recovered_1000f168(output,capacity,pcVar3);
    return 0x10;
  }
LAB_1000e718:
  recovered_1000efd8(output,capacity,pcVar3);
  return 0x10;
}

#undef DAT_1000fbb8
#undef str_1000fe6a
#undef str_1000fe9e
#undef str_1000feb5
#undef str_1000fec0
#undef str_1000fed3
#undef local_e4
#undef local_84

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec70
 */

uint recovered_1000ec70(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  uint uVar3;

  if (capacity == 0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10005c58((int)output);
  }
  cVar2 = *(char *)capacity;
  while (cVar2 != '\0') {
    capacity = capacity + 1;
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if ((output != (char *)0x0) && (uVar3 = uVar1 + 1, uVar3 >> 9 == 0)) {
      output[uVar1] = cVar2;
      output[uVar3] = '\0';
      uVar1 = uVar3;
    }
    cVar2 = *(char *)capacity;
  }
  return uVar1;
}


#undef DAT_1000fbb8
#define DAT_1000fbb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28U)))
#undef str_1000fe97
#define str_1000fe97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x307U)))
#undef str_1000fef9
#define str_1000fef9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x369U)))
#define local_284 (*(char (*)[512])(frame + 28))
#define local_84 (*(byte (*)[100])(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed00
 */

uint recovered_1000ed00(char *output,uint capacity,char *first,char *last,char *url,char *html,
                       uint depth)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  char *extraout_r2 = 0;
  char *text;
  char *text_00;
  int iVar6;
  uint uVar7;
  uint unaff_r6;
  uint uVar8;
  byte *pbVar9;
  char *capacity_00;
  bool bVar10;

  uVar2 = 8;
  if ((first != (char *)0x0 && last != (char *)0x0) && (first < last)) {
    if (url != (char *)0x0) {
      unaff_r6 = (uint)(byte)*url;
    }
    if ((url != (char *)0x0 && unaff_r6 != 0) &&
       ((uVar8 = (uint)(byte)*first, (uVar8 & 0xdf) - 0x41 < 0x1a ||
        (uVar8 == 0x5f || uVar8 == 0x24)))) {
      uVar2 = 0;
      do {
        bVar1 = *first;
        uVar7 = (uint)bVar1;
        uVar8 = uVar7 - 0x30;
        bVar10 = 9 < uVar8;
        if (bVar10) {
          uVar8 = (uVar7 & 0xdf) - 0x41;
        }
        if ((bVar10 && 0x19 < uVar8) && (uVar7 != 0x5f && uVar7 != 0x24)) goto LAB_1000edd8;
        first = first + 1;
        if (uVar2 + 1 < 0x60) {
          local_84[uVar2] = bVar1;
          uVar2 = uVar2 + 1;
        }
      } while (first != last);
      first = last;
LAB_1000edd8:
      pbVar9 = (byte *)0x0;
      local_84[uVar2] = 0;
      iVar3 = recovered_10005c80(local_84,(byte *)url);
      if (iVar3 == 0) {
        iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x307U));
        if ((iVar3 != 0) && (*first != 0)) {
          pbVar9 = (byte *)first;
          do {
            iVar6 = 0;
            while (uVar2 = (uint)pbVar9[iVar6], uVar2 != 0) {
              uVar8 = (uint)(byte)str_1000fe97[iVar6];
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar2 - 0x41 < 0x1a) {
                uVar2 = uVar2 | 0x20;
              }
              if (uVar2 != uVar8) break;
              iVar6 = iVar6 + 1;
              if (iVar3 == iVar6) goto LAB_1000ee8c;
            }
            if (iVar3 == iVar6) goto LAB_1000ee8c;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar9 != 0);
          pbVar9 = (byte *)0x0;
        }
LAB_1000ee8c:
        uVar2 = 8;
        if (pbVar9 == (byte *)first) {
          iVar3 = recovered_10005c58(((uintptr_t)pf_module_state + 0x307U));
          pbVar9 = (byte *)(first + iVar3);
          capacity_00 = &DAT_1000fbb8;
          if (html != (char *)0x0) {
            capacity_00 = html;
          }
          pcVar4 = (char *)recovered_10005c58(((uintptr_t)pf_module_state + 0x35aU));
          pbVar5 = (byte *)0x0;
          text = extraout_r2;
          if (pcVar4 != (char *)0x0) {
            text = (char *)(uint)*pbVar9;
          }
          if (pcVar4 != (char *)0x0 && text != (char *)0x0) {
            pbVar5 = pbVar9;
            do {
              text = (char *)0x0;
              while (uVar2 = (uint)pbVar5[(int)text], uVar2 != 0) {
                uVar8 = (uint)(byte)text[((uintptr_t)pf_module_state + 0x35aU)];
                if (uVar8 - 0x41 < 0x1a) {
                  uVar8 = uVar8 | 0x20;
                }
                if (uVar2 - 0x41 < 0x1a) {
                  uVar2 = uVar2 | 0x20;
                }
                if (uVar2 != uVar8) break;
                text = text + 1;
                if (pcVar4 == text) goto LAB_1000eee8;
              }
              if (pcVar4 == text) goto LAB_1000eee8;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar5 != 0);
            pbVar5 = (byte *)0x0;
            text = (char *)0x0;
          }
LAB_1000eee8:
          if (pbVar5 == pbVar9) {
            pcVar4 = local_284;
            local_284[0] = '\0';
            recovered_1000ec70(pcVar4,(uint)capacity_00,text);
          }
          else {
            pbVar5 = (byte *)recovered_1000d1ec((char *)pbVar9,str_1000fef9);
            if (pbVar5 == pbVar9) {
              pcVar4 = local_284;
              local_284[0] = '\0';
              recovered_1000f1e0(pcVar4,(uint)capacity_00,text_00);
            }
            else {
              pcVar4 = capacity_00;
            }
          }
          if (depth == 0) {
            recovered_1000f168(output,capacity,pcVar4);
          }
          else {
            recovered_1000efd8(output,capacity,pcVar4);
          }
          uVar2 = 0x10;
        }
      }
      else {
        uVar2 = 8;
      }
    }
  }
  return uVar2;
}

#undef DAT_1000fbb8
#undef str_1000fe97
#undef str_1000fef9
#undef local_284
#undef local_84

#undef str_1000fed9
#define str_1000fed9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x349U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000efd8
 */

uint recovered_1000efd8(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (text == (char *)0x0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10005c58((int)output);
  }
  uVar4 = (uint)(byte)*text;
  if (uVar4 != 0) {
    bVar1 = output != (char *)0x0 && capacity != 0;
    do {
      uVar5 = uVar4 - 0x30;
      bVar6 = 9 < uVar5;
      if (bVar6) {
        uVar5 = (uVar4 & 0xdf) - 0x41;
      }
      if (bVar6 && 0x19 < uVar5) {
        if (uVar4 < 0x5f) {
          if (1 < uVar4 - 0x2d) {
            if (uVar4 != 0x20) goto LAB_1000f0ec;
            uVar4 = 0x2b;
          }
          goto LAB_1000f0a0;
        }
        if (uVar4 == 0x7e || uVar4 == 0x5f) goto LAB_1000f0a0;
LAB_1000f0ec:
        if (bVar1) {
          uVar4 = uVar2 + 1;
          if (uVar4 < capacity) {
            uVar5 = uVar2 + 2;
            output[uVar4] = '\0';
            output[uVar2] = '%';
            uVar2 = uVar4;
            uVar4 = uVar5;
          }
          if (uVar4 < capacity) {
            output[uVar2] = str_1000fed9[(byte)*text >> 4];
            output[uVar4] = '\0';
            uVar2 = uVar4;
            uVar4 = uVar4 + 1;
          }
          if (capacity <= uVar4) goto LAB_1000f070;
          cVar3 = str_1000fed9[(byte)*text & 0xf];
          uVar5 = uVar2;
          goto LAB_1000f064;
        }
      }
      else {
LAB_1000f0a0:
        cVar3 = (char)uVar4;
        uVar5 = uVar2;
        uVar4 = uVar2 + 1;
        if (bVar1 && uVar2 + 1 < capacity) {
LAB_1000f064:
          uVar2 = uVar4;
          output[uVar5] = cVar3;
          output[uVar2] = '\0';
        }
      }
LAB_1000f070:
      uVar4 = (uint)(byte)text[1];
      text = text + 1;
    } while (uVar4 != 0);
  }
  return uVar2;
}

#undef str_1000fed9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f168
 */

uint recovered_1000f168(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;

  if (output == (char *)0x0) {
    return 0;
  }
  pcVar2 = output;
  if (text != (char *)0x0) {
    pcVar2 = (char *)recovered_10005c58((int)output);
    cVar1 = *text;
    while (cVar1 != '\0') {
      text = text + 1;
      if ((capacity != 0) && (pcVar3 = pcVar2 + 1, pcVar3 < capacity)) {
        output[(int)pcVar2] = cVar1;
        output[(int)pcVar3] = '\0';
        pcVar2 = pcVar3;
      }
      cVar1 = *text;
    }
  }
  return (uint)pcVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f1e0
 */

uint recovered_1000f1e0(char *output,uint capacity,char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if (capacity == 0) {
    return (uint)output;
  }
  if (output == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10005c58((int)output);
  }
  bVar2 = *(byte *)capacity;
  while (bVar2 != 0) {
    capacity = capacity + 1;
    if (bVar2 - 0x41U < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if ((output != (char *)0x0) && (uVar3 = uVar1 + 1, uVar3 >> 9 == 0)) {
      output[uVar1] = bVar2;
      output[uVar3] = '\0';
      uVar1 = uVar3;
    }
    bVar2 = *(byte *)capacity;
  }
  return uVar1;
}


#undef DAT_1000ff19
#define DAT_1000ff19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x389U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f26c
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_1000f26c(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;

  uVar9 = 0;
  if (((first == (char *)0x0) || (last <= first)) || (output == (char *)0x0 || capacity == 0)) {
    return 0;
  }
LAB_1000f2b8:
  pbVar2 = (byte *)first;
  do {
    bVar1 = *pbVar2;
    switch((uintptr_t)(bVar1)) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
    case 0x2b:
      pbVar2 = pbVar2 + 1;
      first = first + 1;
      if (last <= pbVar2) {
        return uVar9;
      }
      break;
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
    case 0x28:
    case 0x29:
    case 0x2a:
      goto switchD_1000f2d4_caseD_b;
    case 0x22:
    case 0x27:
      pbVar2 = pbVar2 + 1;
      iVar8 = 0;
      pbVar3 = pbVar2;
      if (pbVar2 < last) goto LAB_1000f3b0;
      goto LAB_1000f604;
    default:
      if (bVar1 == 0x60) {
        pbVar2 = pbVar2 + 1;
        iVar8 = 0;
        pbVar3 = pbVar2;
        if (last <= pbVar2) goto LAB_1000f70c;
        goto LAB_1000f3ec;
      }
      goto switchD_1000f2d4_caseD_b;
    }
  } while( true );
LAB_1000f3ec:
  pbVar3 = pbVar2;
  do {
    pbVar5 = pbVar3 + 1;
    bVar1 = *pbVar3;
    if ((bVar1 == 0x5c) && (pbVar5 < last)) {
      pbVar5 = pbVar3 + 2;
    }
    else if (bVar1 == 0x24) {
      if ((pbVar5 < last) && (*pbVar5 == 0x7b)) break;
    }
    else if (bVar1 == 0x60) {
      iVar8 = 1;
      goto LAB_1000f70c;
    }
    pbVar3 = pbVar5;
    if (last <= pbVar5) {
      iVar8 = 0;
      goto LAB_1000f70c;
    }
  } while( true );
  pbVar5 = pbVar3 + 2;
  if (last <= pbVar5) {
    return 0;
  }
  iVar8 = 1;
  pbVar6 = pbVar5;
LAB_1000f468:
  bVar1 = *pbVar6;
  if (bVar1 < 0x60) {
    if (bVar1 == 0x22 || bVar1 == 0x27) goto LAB_1000f48c;
  }
  else {
    if (bVar1 == 0x60) {
LAB_1000f48c:
      pbVar6 = pbVar6 + 1;
      while (pbVar7 = pbVar6, pbVar6 < last) {
        while( true ) {
          pbVar6 = pbVar7 + 1;
          if ((*pbVar7 == 0x5c) && (pbVar6 < last)) break;
          if ((*pbVar7 == bVar1) || (pbVar7 = pbVar6, last <= pbVar6)) goto LAB_1000f460;
        }
        pbVar6 = pbVar7 + 2;
      }
      goto LAB_1000f460;
    }
    if (bVar1 == 0x7b) {
      iVar8 = iVar8 + 1;
      goto LAB_1000f45c;
    }
    bVar10 = false;
    if (bVar1 == 0x7d) {
      iVar8 = iVar8 + -1;
      bVar10 = iVar8 == 0;
    }
    if (bVar10) goto code_r0x1000f4ec;
  }
LAB_1000f45c:
  pbVar6 = pbVar6 + 1;
LAB_1000f460:
  if (last <= pbVar6) {
    return 0;
  }
  goto LAB_1000f468;
code_r0x1000f4ec:
  recovered_1000df0c(output,capacity,(char *)pbVar2,(char *)pbVar3);
  uVar9 = recovered_1000f26c(output,capacity,(char *)pbVar5,(char *)pbVar6);
  if (uVar9 == 0) {
    return 0;
  }
  pbVar2 = pbVar6 + 1;
  if (last <= pbVar2) goto code_r0x1000f540;
  goto LAB_1000f3ec;
code_r0x1000f540:
  iVar8 = 0;
  pbVar3 = pbVar2;
LAB_1000f70c:
  uVar9 = recovered_1000df0c(output,capacity,(char *)pbVar2,(char *)pbVar3);
  if ((uVar9 == 0) && (pbVar2 != pbVar3)) {
    return 0;
  }
  pbVar3 = pbVar3 + iVar8;
  goto LAB_1000f75c;
LAB_1000f3b0:
  do {
    pbVar5 = pbVar3 + 1;
    if ((*pbVar3 == 0x5c) && (pbVar5 < last)) {
      pbVar5 = pbVar3 + 2;
    }
    else if (*pbVar3 == bVar1) {
      iVar8 = 1;
      goto LAB_1000f604;
    }
    pbVar3 = pbVar5;
  } while (pbVar5 < last);
  iVar8 = 0;
LAB_1000f604:
  uVar9 = recovered_1000df0c(output,capacity,(char *)pbVar2,(char *)pbVar3);
  if (uVar9 == 0) {
    return 0;
  }
  pbVar3 = pbVar3 + iVar8;
  goto LAB_1000f75c;
switchD_1000f2d4_caseD_b:
  pbVar3 = pbVar2;
  if (pbVar2 < last) {
    do {
      if (*pbVar3 - 0x2b < 2) goto LAB_1000f57c;
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 < last);
    pbVar3 = (byte *)last;
  }
LAB_1000f57c:
  if (pbVar2 < pbVar3) {
    pbVar5 = pbVar2 + ((int)pbVar3 - (int)first);
    do {
      if ((0x17 < *pbVar2 - 9) || ((1 << (*pbVar2 - 9 & 0xff) & 0x800013U) == 0)) goto LAB_1000f5b4;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar3);
    pbVar2 = pbVar5;
  }
LAB_1000f5b4:
  if (pbVar3 <= pbVar2) {
    return 0;
  }
  pbVar5 = (byte *)0x0;
  while( true ) {
    pbVar6 = pbVar3 + (int)pbVar5;
    if ((0x17 < pbVar6[-1] - 9) || ((1 << (pbVar6[-1] - 9 & 0xff) & 0x800013U) == 0)) break;
    pbVar5 = pbVar5 + -1;
    if (pbVar3 + (int)pbVar5 <= pbVar2) {
      return 0;
    }
  }
  if ((pbVar2 + (4 - (int)pbVar3) != pbVar5) ||
     (iVar8 = recovered_1000995c(pbVar2,&DAT_1000ff19,4), iVar8 != 0)) {
    pbVar5 = pbVar2;
    if (pbVar2 < pbVar6) {
      do {
        uVar9 = (uint)*pbVar5;
        if (((uVar9 & 0xdf) - 0x5b < 0xffffffe5 || (uVar9 & 0xdf) == 0x40) && (uVar9 != 0x2b)) {
          bVar10 = 0xfffffff4 < uVar9 - 0x3a;
          if (!bVar10 || uVar9 == 0x2f) {
            bVar10 = 0xfffffffd < uVar9 - 0x2f;
          }
          if (!bVar10) {
            return 0;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 < pbVar6);
      uVar9 = recovered_10005c58((int)output);
      do {
        uVar4 = uVar9 + 1;
        if (uVar4 < capacity) {
          output[uVar9] = *pbVar2;
          output[uVar4] = '\0';
          uVar9 = uVar4;
        }
        pbVar2 = pbVar2 + 1;
      } while (pbVar2 < pbVar6);
    }
    else {
      recovered_10005c58((int)output);
    }
  }
LAB_1000f75c:
  uVar9 = 1;
  first = (char *)pbVar3;
  if (last <= pbVar3) {
    return 1;
  }
  goto LAB_1000f2b8;
}

#undef DAT_1000ff19

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7cc
 */

char * recovered_1000f7cc(char *first)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (first == (char *)0x0) {
    return (char *)0x0;
  }
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
LAB_1000f7f8:
  do {
    bVar1 = *first;
    if (bVar1 < 0x27) {
      if (bVar1 == 0x22) {
LAB_1000f82c:
        first = first + 1;
LAB_1000f844:
        do {
          bVar2 = *first;
          if (bVar2 == 0x5c) {
            if (first[1] != 0) {
              first = first + 2;
              goto LAB_1000f844;
            }
          }
          else if (bVar2 == 0) break;
          first = first + 1;
        } while (bVar2 != bVar1);
      }
      else {
        if (bVar1 == 0) {
          return (char *)(byte *)first;
        }
LAB_1000f870:
        if ((bVar1 == 0x29) && (0 < iVar5)) {
          iVar5 = iVar5 + -1;
          first = first + 1;
        }
        else if (bVar1 == 0x5b) {
          iVar4 = iVar4 + 1;
          first = first + 1;
        }
        else if ((bVar1 == 0x5d) && (0 < iVar4)) {
          iVar4 = iVar4 + -1;
          first = first + 1;
        }
        else if (bVar1 == 0x7b) {
          iVar3 = iVar3 + 1;
          first = first + 1;
        }
        else if ((bVar1 == 0x7d) && (0 < iVar3)) {
          iVar3 = iVar3 + -1;
          first = first + 1;
        }
        else {
          if (((bVar1 == 10 || bVar1 == 0x3b) || (bVar1 == 0xd)) &&
             ((iVar5 == 0 && (iVar5 = 0, iVar4 == 0 && iVar3 == 0)))) {
            return (char *)(byte *)first;
          }
          first = first + 1;
        }
      }
      goto LAB_1000f7f8;
    }
    if (bVar1 == 0x27 || bVar1 == 0x60) goto LAB_1000f82c;
    if (bVar1 != 0x28) goto LAB_1000f870;
    iVar5 = iVar5 + 1;
    first = first + 1;
  } while( true );
}


#define local_424 (*(byte (*)[1028])(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f918
 */

uint recovered_1000f918(char *output,uint capacity,char *first,char *last)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte *pbVar5;

  pbVar5 = local_424;
  local_424[0] = 0;
  uVar2 = recovered_1000f26c((char *)local_424,0x400,first,last);
  uVar3 = 0;
  if (uVar2 != 0) {
    if (output != (char *)0x0) {
      uVar3 = recovered_10005c58((int)output);
    }
LAB_1000f99c:
    for (; bVar1 = *pbVar5, 0x3b < bVar1; pbVar5 = pbVar5 + 1) {
      if (bVar1 != 0x3c) {
        if (bVar1 != 0x3e) goto LAB_1000fa64;
        if (output == (char *)0x0) goto LAB_1000f994;
        uVar3 = recovered_10005c58((int)output);
        if (capacity != 0) {
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            output[uVar2] = '\0';
            output[uVar3] = '&';
            uVar3 = uVar2;
          }
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            cVar4 = 'g';
            goto LAB_1000fb30;
          }
          goto LAB_1000fb3c;
        }
LAB_1000fb74:
        uVar3 = recovered_10005c58((int)output);
        goto LAB_1000fb7c;
      }
      if (output != (char *)0x0) {
        uVar3 = recovered_10005c58((int)output);
        if (capacity != 0) {
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            output[uVar2] = '\0';
            output[uVar3] = '&';
            uVar3 = uVar2;
          }
          uVar2 = uVar3 + 1;
          if (uVar2 < capacity) {
            cVar4 = 'l';
LAB_1000fb30:
            output[uVar2] = '\0';
            output[uVar3] = cVar4;
          }
          else {
LAB_1000fb3c:
            uVar2 = uVar3;
          }
          uVar3 = uVar2 + 1;
          if (uVar3 < capacity) {
            output[uVar3] = '\0';
            output[uVar2] = 't';
            uVar2 = uVar3;
          }
          if (uVar2 + 1 < capacity) {
            output[uVar2 + 1] = '\0';
            output[uVar2] = ';';
          }
        }
        goto LAB_1000fb74;
      }
LAB_1000f994:
      uVar3 = 0;
    }
    if (bVar1 == 0x26) {
      if (output == (char *)0x0) goto LAB_1000f994;
      uVar3 = recovered_10005c58((int)output);
      if (capacity != 0) {
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = '&';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'a';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'm';
          uVar3 = uVar2;
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < capacity) {
          output[uVar2] = '\0';
          output[uVar3] = 'p';
          uVar3 = uVar2;
        }
        if (uVar3 + 1 < capacity) {
          output[uVar3 + 1] = '\0';
          output[uVar3] = ';';
        }
      }
      goto LAB_1000fb74;
    }
    if (bVar1 != 0) {
LAB_1000fa64:
      if ((output == (char *)0x0 || capacity == 0) || (uVar2 = uVar3 + 1, capacity <= uVar2)) {
LAB_1000fb7c:
        pbVar5 = pbVar5 + 1;
      }
      else {
        output[uVar3] = bVar1;
        pbVar5 = pbVar5 + 1;
        output[uVar2] = '\0';
        uVar3 = uVar2;
      }
      goto LAB_1000f99c;
    }
  }
  return uVar3;
}

#undef local_424
